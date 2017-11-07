// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// equality
LogicalVector equality(CharacterVector lookupvect, String charstring);
RcppExport SEXP _refinr_equality(SEXP lookupvectSEXP, SEXP charstringSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type lookupvect(lookupvectSEXP);
    Rcpp::traits::input_parameter< String >::type charstring(charstringSEXP);
    rcpp_result_gen = Rcpp::wrap(equality(lookupvect, charstring));
    return rcpp_result_gen;
END_RCPP
}
// merge_KC_clusters
CharacterVector merge_KC_clusters(CharacterVector clusters, CharacterVector keys_vect, CharacterVector vect, CharacterVector keys_vect_sub, CharacterVector vect_sub);
RcppExport SEXP _refinr_merge_KC_clusters(SEXP clustersSEXP, SEXP keys_vectSEXP, SEXP vectSEXP, SEXP keys_vect_subSEXP, SEXP vect_subSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type clusters(clustersSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type keys_vect(keys_vectSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type vect(vectSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type keys_vect_sub(keys_vect_subSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type vect_sub(vect_subSEXP);
    rcpp_result_gen = Rcpp::wrap(merge_KC_clusters(clusters, keys_vect, vect, keys_vect_sub, vect_sub));
    return rcpp_result_gen;
END_RCPP
}
// merge_KC_clusters_dict
CharacterVector merge_KC_clusters_dict(CharacterVector clusters, CharacterVector keys_vect, CharacterVector vect, CharacterVector keys_vect_sub, CharacterVector vect_sub, CharacterVector keys_dict, CharacterVector dict);
RcppExport SEXP _refinr_merge_KC_clusters_dict(SEXP clustersSEXP, SEXP keys_vectSEXP, SEXP vectSEXP, SEXP keys_vect_subSEXP, SEXP vect_subSEXP, SEXP keys_dictSEXP, SEXP dictSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type clusters(clustersSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type keys_vect(keys_vectSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type vect(vectSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type keys_vect_sub(keys_vect_subSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type vect_sub(vect_subSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type keys_dict(keys_dictSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type dict(dictSEXP);
    rcpp_result_gen = Rcpp::wrap(merge_KC_clusters_dict(clusters, keys_vect, vect, keys_vect_sub, vect_sub, keys_dict, dict));
    return rcpp_result_gen;
END_RCPP
}
// merge_ngram_clusters_string
CharacterVector merge_ngram_clusters_string(String cluster, CharacterVector n_gram_keys, CharacterVector univect, CharacterVector vect);
RcppExport SEXP _refinr_merge_ngram_clusters_string(SEXP clusterSEXP, SEXP n_gram_keysSEXP, SEXP univectSEXP, SEXP vectSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type cluster(clusterSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type n_gram_keys(n_gram_keysSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type univect(univectSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type vect(vectSEXP);
    rcpp_result_gen = Rcpp::wrap(merge_ngram_clusters_string(cluster, n_gram_keys, univect, vect));
    return rcpp_result_gen;
END_RCPP
}
// merge_ngram_clusters_vector
CharacterVector merge_ngram_clusters_vector(CharacterVector cluster, CharacterVector n_gram_keys, CharacterVector univect, CharacterVector vect);
RcppExport SEXP _refinr_merge_ngram_clusters_vector(SEXP clusterSEXP, SEXP n_gram_keysSEXP, SEXP univectSEXP, SEXP vectSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type cluster(clusterSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type n_gram_keys(n_gram_keysSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type univect(univectSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type vect(vectSEXP);
    rcpp_result_gen = Rcpp::wrap(merge_ngram_clusters_vector(cluster, n_gram_keys, univect, vect));
    return rcpp_result_gen;
END_RCPP
}
// most_freq
String most_freq(String clust, CharacterVector keys_sub, CharacterVector vect_sub);
RcppExport SEXP _refinr_most_freq(SEXP clustSEXP, SEXP keys_subSEXP, SEXP vect_subSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type clust(clustSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type keys_sub(keys_subSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type vect_sub(vect_subSEXP);
    rcpp_result_gen = Rcpp::wrap(most_freq(clust, keys_sub, vect_sub));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_refinr_equality", (DL_FUNC) &_refinr_equality, 2},
    {"_refinr_merge_KC_clusters", (DL_FUNC) &_refinr_merge_KC_clusters, 5},
    {"_refinr_merge_KC_clusters_dict", (DL_FUNC) &_refinr_merge_KC_clusters_dict, 7},
    {"_refinr_merge_ngram_clusters_string", (DL_FUNC) &_refinr_merge_ngram_clusters_string, 4},
    {"_refinr_merge_ngram_clusters_vector", (DL_FUNC) &_refinr_merge_ngram_clusters_vector, 4},
    {"_refinr_most_freq", (DL_FUNC) &_refinr_most_freq, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_refinr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
