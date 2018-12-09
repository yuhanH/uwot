// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// annoy_euclidean_nns
Rcpp::List annoy_euclidean_nns(const std::string& index_name, const Rcpp::NumericMatrix& mat, std::size_t n, std::size_t search_k, std::size_t grain_size, bool verbose);
RcppExport SEXP _uwot_annoy_euclidean_nns(SEXP index_nameSEXP, SEXP matSEXP, SEXP nSEXP, SEXP search_kSEXP, SEXP grain_sizeSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type index_name(index_nameSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type mat(matSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type n(nSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type search_k(search_kSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type grain_size(grain_sizeSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(annoy_euclidean_nns(index_name, mat, n, search_k, grain_size, verbose));
    return rcpp_result_gen;
END_RCPP
}
// annoy_cosine_nns
Rcpp::List annoy_cosine_nns(const std::string& index_name, const Rcpp::NumericMatrix& mat, std::size_t n, std::size_t search_k, std::size_t grain_size, bool verbose);
RcppExport SEXP _uwot_annoy_cosine_nns(SEXP index_nameSEXP, SEXP matSEXP, SEXP nSEXP, SEXP search_kSEXP, SEXP grain_sizeSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type index_name(index_nameSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type mat(matSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type n(nSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type search_k(search_kSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type grain_size(grain_sizeSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(annoy_cosine_nns(index_name, mat, n, search_k, grain_size, verbose));
    return rcpp_result_gen;
END_RCPP
}
// annoy_manhattan_nns
Rcpp::List annoy_manhattan_nns(const std::string& index_name, const Rcpp::NumericMatrix& mat, std::size_t n, std::size_t search_k, std::size_t grain_size, bool verbose);
RcppExport SEXP _uwot_annoy_manhattan_nns(SEXP index_nameSEXP, SEXP matSEXP, SEXP nSEXP, SEXP search_kSEXP, SEXP grain_sizeSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type index_name(index_nameSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type mat(matSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type n(nSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type search_k(search_kSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type grain_size(grain_sizeSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(annoy_manhattan_nns(index_name, mat, n, search_k, grain_size, verbose));
    return rcpp_result_gen;
END_RCPP
}
// optimize_layout_umap
arma::mat optimize_layout_umap(arma::mat head_embedding, Rcpp::Nullable<Rcpp::NumericMatrix> tail_embedding, const arma::uvec positive_head, const arma::uvec positive_tail, unsigned int n_epochs, unsigned int n_vertices, const arma::vec epochs_per_sample, double a, double b, double gamma, double initial_alpha, double negative_sample_rate, unsigned int seed, bool approx_pow, bool parallelize, std::size_t grain_size, bool move_other, bool verbose);
RcppExport SEXP _uwot_optimize_layout_umap(SEXP head_embeddingSEXP, SEXP tail_embeddingSEXP, SEXP positive_headSEXP, SEXP positive_tailSEXP, SEXP n_epochsSEXP, SEXP n_verticesSEXP, SEXP epochs_per_sampleSEXP, SEXP aSEXP, SEXP bSEXP, SEXP gammaSEXP, SEXP initial_alphaSEXP, SEXP negative_sample_rateSEXP, SEXP seedSEXP, SEXP approx_powSEXP, SEXP parallelizeSEXP, SEXP grain_sizeSEXP, SEXP move_otherSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type head_embedding(head_embeddingSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericMatrix> >::type tail_embedding(tail_embeddingSEXP);
    Rcpp::traits::input_parameter< const arma::uvec >::type positive_head(positive_headSEXP);
    Rcpp::traits::input_parameter< const arma::uvec >::type positive_tail(positive_tailSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type n_epochs(n_epochsSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type n_vertices(n_verticesSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type epochs_per_sample(epochs_per_sampleSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type initial_alpha(initial_alphaSEXP);
    Rcpp::traits::input_parameter< double >::type negative_sample_rate(negative_sample_rateSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< bool >::type approx_pow(approx_powSEXP);
    Rcpp::traits::input_parameter< bool >::type parallelize(parallelizeSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type grain_size(grain_sizeSEXP);
    Rcpp::traits::input_parameter< bool >::type move_other(move_otherSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(optimize_layout_umap(head_embedding, tail_embedding, positive_head, positive_tail, n_epochs, n_vertices, epochs_per_sample, a, b, gamma, initial_alpha, negative_sample_rate, seed, approx_pow, parallelize, grain_size, move_other, verbose));
    return rcpp_result_gen;
END_RCPP
}
// optimize_layout_tumap
arma::mat optimize_layout_tumap(arma::mat& head_embedding, Rcpp::Nullable<Rcpp::NumericMatrix> tail_embedding, const arma::uvec positive_head, const arma::uvec positive_tail, unsigned int n_epochs, unsigned int n_vertices, const arma::vec epochs_per_sample, double initial_alpha, double negative_sample_rate, unsigned int seed, bool parallelize, std::size_t grain_size, bool move_other, bool verbose);
RcppExport SEXP _uwot_optimize_layout_tumap(SEXP head_embeddingSEXP, SEXP tail_embeddingSEXP, SEXP positive_headSEXP, SEXP positive_tailSEXP, SEXP n_epochsSEXP, SEXP n_verticesSEXP, SEXP epochs_per_sampleSEXP, SEXP initial_alphaSEXP, SEXP negative_sample_rateSEXP, SEXP seedSEXP, SEXP parallelizeSEXP, SEXP grain_sizeSEXP, SEXP move_otherSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type head_embedding(head_embeddingSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericMatrix> >::type tail_embedding(tail_embeddingSEXP);
    Rcpp::traits::input_parameter< const arma::uvec >::type positive_head(positive_headSEXP);
    Rcpp::traits::input_parameter< const arma::uvec >::type positive_tail(positive_tailSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type n_epochs(n_epochsSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type n_vertices(n_verticesSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type epochs_per_sample(epochs_per_sampleSEXP);
    Rcpp::traits::input_parameter< double >::type initial_alpha(initial_alphaSEXP);
    Rcpp::traits::input_parameter< double >::type negative_sample_rate(negative_sample_rateSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< bool >::type parallelize(parallelizeSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type grain_size(grain_sizeSEXP);
    Rcpp::traits::input_parameter< bool >::type move_other(move_otherSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(optimize_layout_tumap(head_embedding, tail_embedding, positive_head, positive_tail, n_epochs, n_vertices, epochs_per_sample, initial_alpha, negative_sample_rate, seed, parallelize, grain_size, move_other, verbose));
    return rcpp_result_gen;
END_RCPP
}
// optimize_layout_largevis
arma::mat optimize_layout_largevis(arma::mat& head_embedding, Rcpp::Nullable<Rcpp::NumericMatrix> tail_embedding, const arma::uvec positive_head, const arma::uvec positive_tail, unsigned int n_epochs, unsigned int n_vertices, const arma::vec epochs_per_sample, double gamma, double initial_alpha, double negative_sample_rate, unsigned int seed, bool parallelize, std::size_t grain_size, bool move_other, bool verbose);
RcppExport SEXP _uwot_optimize_layout_largevis(SEXP head_embeddingSEXP, SEXP tail_embeddingSEXP, SEXP positive_headSEXP, SEXP positive_tailSEXP, SEXP n_epochsSEXP, SEXP n_verticesSEXP, SEXP epochs_per_sampleSEXP, SEXP gammaSEXP, SEXP initial_alphaSEXP, SEXP negative_sample_rateSEXP, SEXP seedSEXP, SEXP parallelizeSEXP, SEXP grain_sizeSEXP, SEXP move_otherSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type head_embedding(head_embeddingSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericMatrix> >::type tail_embedding(tail_embeddingSEXP);
    Rcpp::traits::input_parameter< const arma::uvec >::type positive_head(positive_headSEXP);
    Rcpp::traits::input_parameter< const arma::uvec >::type positive_tail(positive_tailSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type n_epochs(n_epochsSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type n_vertices(n_verticesSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type epochs_per_sample(epochs_per_sampleSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type initial_alpha(initial_alphaSEXP);
    Rcpp::traits::input_parameter< double >::type negative_sample_rate(negative_sample_rateSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< bool >::type parallelize(parallelizeSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type grain_size(grain_sizeSEXP);
    Rcpp::traits::input_parameter< bool >::type move_other(move_otherSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(optimize_layout_largevis(head_embedding, tail_embedding, positive_head, positive_tail, n_epochs, n_vertices, epochs_per_sample, gamma, initial_alpha, negative_sample_rate, seed, parallelize, grain_size, move_other, verbose));
    return rcpp_result_gen;
END_RCPP
}
// calc_row_probabilities_parallel
arma::sp_mat calc_row_probabilities_parallel(const Rcpp::NumericMatrix& nn_dist, const Rcpp::IntegerMatrix& nn_idx, const double perplexity, const unsigned int n_iter, const double tol, const bool parallelize, const std::size_t grain_size, const bool verbose);
RcppExport SEXP _uwot_calc_row_probabilities_parallel(SEXP nn_distSEXP, SEXP nn_idxSEXP, SEXP perplexitySEXP, SEXP n_iterSEXP, SEXP tolSEXP, SEXP parallelizeSEXP, SEXP grain_sizeSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type nn_dist(nn_distSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerMatrix& >::type nn_idx(nn_idxSEXP);
    Rcpp::traits::input_parameter< const double >::type perplexity(perplexitySEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type n_iter(n_iterSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const bool >::type parallelize(parallelizeSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type grain_size(grain_sizeSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_row_probabilities_parallel(nn_dist, nn_idx, perplexity, n_iter, tol, parallelize, grain_size, verbose));
    return rcpp_result_gen;
END_RCPP
}
// smooth_knn_distances_parallel
Rcpp::NumericMatrix smooth_knn_distances_parallel(const Rcpp::NumericMatrix& nn_dist, const Rcpp::IntegerMatrix& nn_idx, const unsigned int n_iter, const double local_connectivity, const double bandwidth, const double tol, const double min_k_dist_scale, const bool parallelize, const std::size_t grain_size, const bool verbose);
RcppExport SEXP _uwot_smooth_knn_distances_parallel(SEXP nn_distSEXP, SEXP nn_idxSEXP, SEXP n_iterSEXP, SEXP local_connectivitySEXP, SEXP bandwidthSEXP, SEXP tolSEXP, SEXP min_k_dist_scaleSEXP, SEXP parallelizeSEXP, SEXP grain_sizeSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type nn_dist(nn_distSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerMatrix& >::type nn_idx(nn_idxSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type n_iter(n_iterSEXP);
    Rcpp::traits::input_parameter< const double >::type local_connectivity(local_connectivitySEXP);
    Rcpp::traits::input_parameter< const double >::type bandwidth(bandwidthSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const double >::type min_k_dist_scale(min_k_dist_scaleSEXP);
    Rcpp::traits::input_parameter< const bool >::type parallelize(parallelizeSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type grain_size(grain_sizeSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(smooth_knn_distances_parallel(nn_dist, nn_idx, n_iter, local_connectivity, bandwidth, tol, min_k_dist_scale, parallelize, grain_size, verbose));
    return rcpp_result_gen;
END_RCPP
}
// fast_intersection_cpp
NumericVector fast_intersection_cpp(const IntegerVector rows, const IntegerVector cols, NumericVector values, const IntegerVector target, double unknown_dist, double far_dist);
RcppExport SEXP _uwot_fast_intersection_cpp(SEXP rowsSEXP, SEXP colsSEXP, SEXP valuesSEXP, SEXP targetSEXP, SEXP unknown_distSEXP, SEXP far_distSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector >::type rows(rowsSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type cols(colsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type target(targetSEXP);
    Rcpp::traits::input_parameter< double >::type unknown_dist(unknown_distSEXP);
    Rcpp::traits::input_parameter< double >::type far_dist(far_distSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_intersection_cpp(rows, cols, values, target, unknown_dist, far_dist));
    return rcpp_result_gen;
END_RCPP
}
// general_sset_intersection_cpp
NumericVector general_sset_intersection_cpp(const IntegerVector indptr1, const IntegerVector indices1, NumericVector data1, const IntegerVector indptr2, const IntegerVector indices2, NumericVector data2, const IntegerVector result_row, const IntegerVector result_col, NumericVector result_val, double mix_weight);
RcppExport SEXP _uwot_general_sset_intersection_cpp(SEXP indptr1SEXP, SEXP indices1SEXP, SEXP data1SEXP, SEXP indptr2SEXP, SEXP indices2SEXP, SEXP data2SEXP, SEXP result_rowSEXP, SEXP result_colSEXP, SEXP result_valSEXP, SEXP mix_weightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector >::type indptr1(indptr1SEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type indices1(indices1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type data1(data1SEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type indptr2(indptr2SEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type indices2(indices2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type data2(data2SEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type result_row(result_rowSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type result_col(result_colSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type result_val(result_valSEXP);
    Rcpp::traits::input_parameter< double >::type mix_weight(mix_weightSEXP);
    rcpp_result_gen = Rcpp::wrap(general_sset_intersection_cpp(indptr1, indices1, data1, indptr2, indices2, data2, result_row, result_col, result_val, mix_weight));
    return rcpp_result_gen;
END_RCPP
}
// init_transform_av_parallel
Rcpp::NumericMatrix init_transform_av_parallel(Rcpp::NumericMatrix train_embedding, Rcpp::IntegerMatrix nn_index, bool parallelize, const std::size_t grain_size);
RcppExport SEXP _uwot_init_transform_av_parallel(SEXP train_embeddingSEXP, SEXP nn_indexSEXP, SEXP parallelizeSEXP, SEXP grain_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type train_embedding(train_embeddingSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type nn_index(nn_indexSEXP);
    Rcpp::traits::input_parameter< bool >::type parallelize(parallelizeSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type grain_size(grain_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(init_transform_av_parallel(train_embedding, nn_index, parallelize, grain_size));
    return rcpp_result_gen;
END_RCPP
}
// init_transform_parallel
Rcpp::NumericMatrix init_transform_parallel(Rcpp::NumericMatrix train_embedding, Rcpp::IntegerMatrix nn_index, Rcpp::NumericMatrix nn_weights, const std::size_t grain_size, bool parallelize);
RcppExport SEXP _uwot_init_transform_parallel(SEXP train_embeddingSEXP, SEXP nn_indexSEXP, SEXP nn_weightsSEXP, SEXP grain_sizeSEXP, SEXP parallelizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type train_embedding(train_embeddingSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type nn_index(nn_indexSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type nn_weights(nn_weightsSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type grain_size(grain_sizeSEXP);
    Rcpp::traits::input_parameter< bool >::type parallelize(parallelizeSEXP);
    rcpp_result_gen = Rcpp::wrap(init_transform_parallel(train_embedding, nn_index, nn_weights, grain_size, parallelize));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_uwot_annoy_euclidean_nns", (DL_FUNC) &_uwot_annoy_euclidean_nns, 6},
    {"_uwot_annoy_cosine_nns", (DL_FUNC) &_uwot_annoy_cosine_nns, 6},
    {"_uwot_annoy_manhattan_nns", (DL_FUNC) &_uwot_annoy_manhattan_nns, 6},
    {"_uwot_optimize_layout_umap", (DL_FUNC) &_uwot_optimize_layout_umap, 18},
    {"_uwot_optimize_layout_tumap", (DL_FUNC) &_uwot_optimize_layout_tumap, 14},
    {"_uwot_optimize_layout_largevis", (DL_FUNC) &_uwot_optimize_layout_largevis, 15},
    {"_uwot_calc_row_probabilities_parallel", (DL_FUNC) &_uwot_calc_row_probabilities_parallel, 8},
    {"_uwot_smooth_knn_distances_parallel", (DL_FUNC) &_uwot_smooth_knn_distances_parallel, 10},
    {"_uwot_fast_intersection_cpp", (DL_FUNC) &_uwot_fast_intersection_cpp, 6},
    {"_uwot_general_sset_intersection_cpp", (DL_FUNC) &_uwot_general_sset_intersection_cpp, 10},
    {"_uwot_init_transform_av_parallel", (DL_FUNC) &_uwot_init_transform_av_parallel, 4},
    {"_uwot_init_transform_parallel", (DL_FUNC) &_uwot_init_transform_parallel, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_uwot(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
