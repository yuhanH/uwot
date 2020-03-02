#include <Rcpp.h>
#include "RcppPerpendicular.h"


#if defined(__MINGW32__)
#undef Realloc
#undef Free
#endif

#define __ERROR_PRINTER_OVERRIDE__ REprintf

#include <annoylib.h>
#include <kissrandom.h>

template <typename S, typename T, typename Distance, typename Random>
struct NNWorker : public RcppPerpendicular::Worker {
  std::string index_name;
  RcppPerpendicular::RMatrix<double> mat;
  RcppPerpendicular::RMatrix<double> dists;
  RcppPerpendicular::RMatrix<int> idx;
  std::size_t ncol;
  std::size_t n_neighbors;
  std::size_t search_k;

  NNWorker(const std::string &index_name, const Rcpp::NumericMatrix &mat,
           Rcpp::NumericMatrix &dists, Rcpp::IntegerMatrix &idx,
           std::size_t ncol, std::size_t n_neighbors, std::size_t search_k)
      : index_name(index_name), mat(mat), dists(dists), idx(idx), ncol(ncol),
        n_neighbors(n_neighbors), search_k(search_k) {}

  void operator()(std::size_t begin, std::size_t end) {
    AnnoyIndex<S, T, Distance, Random> index(ncol);
    index.load(index_name.c_str());

    for (std::size_t i = begin; i < end; i++) {
      RcppPerpendicular::RMatrix<double>::Row row = mat.row(i);
      std::vector<T> fv(row.length());
      std::copy(row.begin(), row.end(), fv.begin());
      std::vector<S> result;
      std::vector<T> distances;

      index.get_nns_by_vector(fv.data(), n_neighbors, search_k, &result,
                              &distances);
      if (result.size() != n_neighbors || distances.size() != n_neighbors) {
        break;
      }

      for (std::size_t j = 0; j < n_neighbors; j++) {
        dists(i, j) = distances[j];
        idx(i, j) = result[j];
      }
    }
  }
};

// [[Rcpp::export]]
Rcpp::List annoy_euclidean_nns(const std::string &index_name,
                               const Rcpp::NumericMatrix &mat,
                               std::size_t n_neighbors, std::size_t search_k,
                               std::size_t grain_size = 1,
                               bool verbose = false) {
  std::size_t nrow = mat.rows();
  std::size_t ncol = mat.cols();
  Rcpp::NumericMatrix dist(nrow, n_neighbors);
  Rcpp::IntegerMatrix idx(nrow, n_neighbors);
  idx.fill(-1);

  NNWorker<int32_t, float, Euclidean, Kiss64Random> worker(
      index_name, mat, dist, idx, ncol, n_neighbors, search_k);
  RcppPerpendicular::parallelFor(0, nrow, worker, grain_size);

  return Rcpp::List::create(Rcpp::Named("item") = idx,
                            Rcpp::Named("distance") = dist);
}

// [[Rcpp::export]]
Rcpp::List annoy_cosine_nns(const std::string &index_name,
                            const Rcpp::NumericMatrix &mat,
                            std::size_t n_neighbors, std::size_t search_k,
                            std::size_t grain_size = 1, bool verbose = false) {
  std::size_t nrow = mat.rows();
  std::size_t ncol = mat.cols();
  Rcpp::NumericMatrix dist(nrow, n_neighbors);
  Rcpp::IntegerMatrix idx(nrow, n_neighbors);
  idx.fill(-1);

  NNWorker<int32_t, float, Angular, Kiss64Random> worker(
      index_name, mat, dist, idx, ncol, n_neighbors, search_k);
  RcppPerpendicular::parallelFor(0, nrow, worker, grain_size);

  return Rcpp::List::create(Rcpp::Named("item") = idx,
                            Rcpp::Named("distance") = dist);
}

// [[Rcpp::export]]
Rcpp::List annoy_manhattan_nns(const std::string &index_name,
                               const Rcpp::NumericMatrix &mat,
                               std::size_t n_neighbors, std::size_t search_k,
                               std::size_t grain_size = 1,
                               bool verbose = false) {
  std::size_t nrow = mat.rows();
  std::size_t ncol = mat.cols();
  Rcpp::NumericMatrix dist(nrow, n_neighbors);
  Rcpp::IntegerMatrix idx(nrow, n_neighbors);
  idx.fill(-1);

  NNWorker<int32_t, float, Manhattan, Kiss64Random> worker(
      index_name, mat, dist, idx, ncol, n_neighbors, search_k);

  RcppPerpendicular::parallelFor(0, nrow, worker, grain_size);

  return Rcpp::List::create(Rcpp::Named("item") = idx,
                            Rcpp::Named("distance") = dist);
}

// [[Rcpp::export]]
Rcpp::List annoy_hamming_nns(const std::string &index_name,
                             const Rcpp::NumericMatrix &mat,
                             std::size_t n_neighbors, std::size_t search_k,
                             std::size_t grain_size = 1, bool verbose = false) {
  std::size_t nrow = mat.rows();
  std::size_t ncol = mat.cols();
  Rcpp::NumericMatrix dist(nrow, n_neighbors);
  Rcpp::IntegerMatrix idx(nrow, n_neighbors);
  idx.fill(-1);

  NNWorker<int32_t, uint64_t, Hamming, Kiss64Random> worker(
      index_name, mat, dist, idx, ncol, n_neighbors, search_k);

  RcppPerpendicular::parallelFor(0, nrow, worker, grain_size);

  return Rcpp::List::create(Rcpp::Named("item") = idx,
                            Rcpp::Named("distance") = dist);
}