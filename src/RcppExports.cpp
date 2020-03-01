// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// connected_components_undirected
List connected_components_undirected(const unsigned long N, const IntegerVector indices1, const IntegerVector indptr1, const IntegerVector indices2, const IntegerVector indptr2);
RcppExport SEXP _uwot_connected_components_undirected(SEXP NSEXP, SEXP indices1SEXP, SEXP indptr1SEXP, SEXP indices2SEXP, SEXP indptr2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const unsigned long >::type N(NSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type indices1(indices1SEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type indptr1(indptr1SEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type indices2(indices2SEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type indptr2(indptr2SEXP);
    rcpp_result_gen = Rcpp::wrap(connected_components_undirected(N, indices1, indptr1, indices2, indptr2));
    return rcpp_result_gen;
END_RCPP
}
// annoy_euclidean_nns
Rcpp::List annoy_euclidean_nns(const std::string& index_name, const Rcpp::NumericMatrix& mat, std::size_t n_neighbors, std::size_t search_k, std::size_t grain_size, bool verbose);
RcppExport SEXP _uwot_annoy_euclidean_nns(SEXP index_nameSEXP, SEXP matSEXP, SEXP n_neighborsSEXP, SEXP search_kSEXP, SEXP grain_sizeSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type index_name(index_nameSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type mat(matSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type n_neighbors(n_neighborsSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type search_k(search_kSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type grain_size(grain_sizeSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(annoy_euclidean_nns(index_name, mat, n_neighbors, search_k, grain_size, verbose));
    return rcpp_result_gen;
END_RCPP
}
// annoy_cosine_nns
Rcpp::List annoy_cosine_nns(const std::string& index_name, const Rcpp::NumericMatrix& mat, std::size_t n_neighbors, std::size_t search_k, std::size_t grain_size, bool verbose);
RcppExport SEXP _uwot_annoy_cosine_nns(SEXP index_nameSEXP, SEXP matSEXP, SEXP n_neighborsSEXP, SEXP search_kSEXP, SEXP grain_sizeSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type index_name(index_nameSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type mat(matSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type n_neighbors(n_neighborsSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type search_k(search_kSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type grain_size(grain_sizeSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(annoy_cosine_nns(index_name, mat, n_neighbors, search_k, grain_size, verbose));
    return rcpp_result_gen;
END_RCPP
}
// annoy_manhattan_nns
Rcpp::List annoy_manhattan_nns(const std::string& index_name, const Rcpp::NumericMatrix& mat, std::size_t n_neighbors, std::size_t search_k, std::size_t grain_size, bool verbose);
RcppExport SEXP _uwot_annoy_manhattan_nns(SEXP index_nameSEXP, SEXP matSEXP, SEXP n_neighborsSEXP, SEXP search_kSEXP, SEXP grain_sizeSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type index_name(index_nameSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type mat(matSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type n_neighbors(n_neighborsSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type search_k(search_kSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type grain_size(grain_sizeSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(annoy_manhattan_nns(index_name, mat, n_neighbors, search_k, grain_size, verbose));
    return rcpp_result_gen;
END_RCPP
}
// annoy_hamming_nns
Rcpp::List annoy_hamming_nns(const std::string& index_name, const Rcpp::NumericMatrix& mat, std::size_t n_neighbors, std::size_t search_k, std::size_t grain_size, bool verbose);
RcppExport SEXP _uwot_annoy_hamming_nns(SEXP index_nameSEXP, SEXP matSEXP, SEXP n_neighborsSEXP, SEXP search_kSEXP, SEXP grain_sizeSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type index_name(index_nameSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type mat(matSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type n_neighbors(n_neighborsSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type search_k(search_kSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type grain_size(grain_sizeSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(annoy_hamming_nns(index_name, mat, n_neighbors, search_k, grain_size, verbose));
    return rcpp_result_gen;
END_RCPP
}
// optimize_layout_umap
Rcpp::NumericMatrix optimize_layout_umap(Rcpp::NumericMatrix head_embedding, Rcpp::Nullable<Rcpp::NumericMatrix> tail_embedding, const std::vector<unsigned int> positive_head, const std::vector<unsigned int> positive_tail, unsigned int n_epochs, unsigned int n_vertices, const std::vector<float> epochs_per_sample, float a, float b, float gamma, float initial_alpha, float negative_sample_rate, bool approx_pow, bool pcg_rand, bool parallelize, std::size_t grain_size, bool move_other, bool verbose);
RcppExport SEXP _uwot_optimize_layout_umap(SEXP head_embeddingSEXP, SEXP tail_embeddingSEXP, SEXP positive_headSEXP, SEXP positive_tailSEXP, SEXP n_epochsSEXP, SEXP n_verticesSEXP, SEXP epochs_per_sampleSEXP, SEXP aSEXP, SEXP bSEXP, SEXP gammaSEXP, SEXP initial_alphaSEXP, SEXP negative_sample_rateSEXP, SEXP approx_powSEXP, SEXP pcg_randSEXP, SEXP parallelizeSEXP, SEXP grain_sizeSEXP, SEXP move_otherSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type head_embedding(head_embeddingSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericMatrix> >::type tail_embedding(tail_embeddingSEXP);
    Rcpp::traits::input_parameter< const std::vector<unsigned int> >::type positive_head(positive_headSEXP);
    Rcpp::traits::input_parameter< const std::vector<unsigned int> >::type positive_tail(positive_tailSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type n_epochs(n_epochsSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type n_vertices(n_verticesSEXP);
    Rcpp::traits::input_parameter< const std::vector<float> >::type epochs_per_sample(epochs_per_sampleSEXP);
    Rcpp::traits::input_parameter< float >::type a(aSEXP);
    Rcpp::traits::input_parameter< float >::type b(bSEXP);
    Rcpp::traits::input_parameter< float >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< float >::type initial_alpha(initial_alphaSEXP);
    Rcpp::traits::input_parameter< float >::type negative_sample_rate(negative_sample_rateSEXP);
    Rcpp::traits::input_parameter< bool >::type approx_pow(approx_powSEXP);
    Rcpp::traits::input_parameter< bool >::type pcg_rand(pcg_randSEXP);
    Rcpp::traits::input_parameter< bool >::type parallelize(parallelizeSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type grain_size(grain_sizeSEXP);
    Rcpp::traits::input_parameter< bool >::type move_other(move_otherSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(optimize_layout_umap(head_embedding, tail_embedding, positive_head, positive_tail, n_epochs, n_vertices, epochs_per_sample, a, b, gamma, initial_alpha, negative_sample_rate, approx_pow, pcg_rand, parallelize, grain_size, move_other, verbose));
    return rcpp_result_gen;
END_RCPP
}
// optimize_layout_tumap
Rcpp::NumericMatrix optimize_layout_tumap(Rcpp::NumericMatrix head_embedding, Rcpp::Nullable<Rcpp::NumericMatrix> tail_embedding, const std::vector<unsigned int> positive_head, const std::vector<unsigned int> positive_tail, unsigned int n_epochs, unsigned int n_vertices, const std::vector<float> epochs_per_sample, float initial_alpha, float negative_sample_rate, bool pcg_rand, bool parallelize, std::size_t grain_size, bool move_other, bool verbose);
RcppExport SEXP _uwot_optimize_layout_tumap(SEXP head_embeddingSEXP, SEXP tail_embeddingSEXP, SEXP positive_headSEXP, SEXP positive_tailSEXP, SEXP n_epochsSEXP, SEXP n_verticesSEXP, SEXP epochs_per_sampleSEXP, SEXP initial_alphaSEXP, SEXP negative_sample_rateSEXP, SEXP pcg_randSEXP, SEXP parallelizeSEXP, SEXP grain_sizeSEXP, SEXP move_otherSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type head_embedding(head_embeddingSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericMatrix> >::type tail_embedding(tail_embeddingSEXP);
    Rcpp::traits::input_parameter< const std::vector<unsigned int> >::type positive_head(positive_headSEXP);
    Rcpp::traits::input_parameter< const std::vector<unsigned int> >::type positive_tail(positive_tailSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type n_epochs(n_epochsSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type n_vertices(n_verticesSEXP);
    Rcpp::traits::input_parameter< const std::vector<float> >::type epochs_per_sample(epochs_per_sampleSEXP);
    Rcpp::traits::input_parameter< float >::type initial_alpha(initial_alphaSEXP);
    Rcpp::traits::input_parameter< float >::type negative_sample_rate(negative_sample_rateSEXP);
    Rcpp::traits::input_parameter< bool >::type pcg_rand(pcg_randSEXP);
    Rcpp::traits::input_parameter< bool >::type parallelize(parallelizeSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type grain_size(grain_sizeSEXP);
    Rcpp::traits::input_parameter< bool >::type move_other(move_otherSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(optimize_layout_tumap(head_embedding, tail_embedding, positive_head, positive_tail, n_epochs, n_vertices, epochs_per_sample, initial_alpha, negative_sample_rate, pcg_rand, parallelize, grain_size, move_other, verbose));
    return rcpp_result_gen;
END_RCPP
}
// optimize_layout_largevis
Rcpp::NumericMatrix optimize_layout_largevis(Rcpp::NumericMatrix head_embedding, const std::vector<unsigned int> positive_head, const std::vector<unsigned int> positive_tail, unsigned int n_epochs, unsigned int n_vertices, const std::vector<float> epochs_per_sample, float gamma, float initial_alpha, float negative_sample_rate, bool pcg_rand, bool parallelize, std::size_t grain_size, bool verbose);
RcppExport SEXP _uwot_optimize_layout_largevis(SEXP head_embeddingSEXP, SEXP positive_headSEXP, SEXP positive_tailSEXP, SEXP n_epochsSEXP, SEXP n_verticesSEXP, SEXP epochs_per_sampleSEXP, SEXP gammaSEXP, SEXP initial_alphaSEXP, SEXP negative_sample_rateSEXP, SEXP pcg_randSEXP, SEXP parallelizeSEXP, SEXP grain_sizeSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type head_embedding(head_embeddingSEXP);
    Rcpp::traits::input_parameter< const std::vector<unsigned int> >::type positive_head(positive_headSEXP);
    Rcpp::traits::input_parameter< const std::vector<unsigned int> >::type positive_tail(positive_tailSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type n_epochs(n_epochsSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type n_vertices(n_verticesSEXP);
    Rcpp::traits::input_parameter< const std::vector<float> >::type epochs_per_sample(epochs_per_sampleSEXP);
    Rcpp::traits::input_parameter< float >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< float >::type initial_alpha(initial_alphaSEXP);
    Rcpp::traits::input_parameter< float >::type negative_sample_rate(negative_sample_rateSEXP);
    Rcpp::traits::input_parameter< bool >::type pcg_rand(pcg_randSEXP);
    Rcpp::traits::input_parameter< bool >::type parallelize(parallelizeSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type grain_size(grain_sizeSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(optimize_layout_largevis(head_embedding, positive_head, positive_tail, n_epochs, n_vertices, epochs_per_sample, gamma, initial_alpha, negative_sample_rate, pcg_rand, parallelize, grain_size, verbose));
    return rcpp_result_gen;
END_RCPP
}
// calc_row_probabilities_parallel
Rcpp::List calc_row_probabilities_parallel(const Rcpp::NumericMatrix nn_dist, const Rcpp::IntegerMatrix nn_idx, const double perplexity, const unsigned int n_iter, const double tol, const bool parallelize, const std::size_t grain_size, const bool verbose);
RcppExport SEXP _uwot_calc_row_probabilities_parallel(SEXP nn_distSEXP, SEXP nn_idxSEXP, SEXP perplexitySEXP, SEXP n_iterSEXP, SEXP tolSEXP, SEXP parallelizeSEXP, SEXP grain_sizeSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type nn_dist(nn_distSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerMatrix >::type nn_idx(nn_idxSEXP);
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
Rcpp::List smooth_knn_distances_parallel(const Rcpp::NumericMatrix& nn_dist, const Rcpp::IntegerMatrix& nn_idx, const unsigned int n_iter, const double local_connectivity, const double bandwidth, const double tol, const double min_k_dist_scale, const bool parallelize, const std::size_t grain_size, const bool verbose);
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
// hardware_concurrency
unsigned int hardware_concurrency();
RcppExport SEXP _uwot_hardware_concurrency() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(hardware_concurrency());
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
    {"_uwot_connected_components_undirected", (DL_FUNC) &_uwot_connected_components_undirected, 5},
    {"_uwot_annoy_euclidean_nns", (DL_FUNC) &_uwot_annoy_euclidean_nns, 6},
    {"_uwot_annoy_cosine_nns", (DL_FUNC) &_uwot_annoy_cosine_nns, 6},
    {"_uwot_annoy_manhattan_nns", (DL_FUNC) &_uwot_annoy_manhattan_nns, 6},
    {"_uwot_annoy_hamming_nns", (DL_FUNC) &_uwot_annoy_hamming_nns, 6},
    {"_uwot_optimize_layout_umap", (DL_FUNC) &_uwot_optimize_layout_umap, 18},
    {"_uwot_optimize_layout_tumap", (DL_FUNC) &_uwot_optimize_layout_tumap, 14},
    {"_uwot_optimize_layout_largevis", (DL_FUNC) &_uwot_optimize_layout_largevis, 13},
    {"_uwot_calc_row_probabilities_parallel", (DL_FUNC) &_uwot_calc_row_probabilities_parallel, 8},
    {"_uwot_smooth_knn_distances_parallel", (DL_FUNC) &_uwot_smooth_knn_distances_parallel, 10},
    {"_uwot_fast_intersection_cpp", (DL_FUNC) &_uwot_fast_intersection_cpp, 6},
    {"_uwot_general_sset_intersection_cpp", (DL_FUNC) &_uwot_general_sset_intersection_cpp, 10},
    {"_uwot_hardware_concurrency", (DL_FUNC) &_uwot_hardware_concurrency, 0},
    {"_uwot_init_transform_av_parallel", (DL_FUNC) &_uwot_init_transform_av_parallel, 4},
    {"_uwot_init_transform_parallel", (DL_FUNC) &_uwot_init_transform_parallel, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_uwot(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
