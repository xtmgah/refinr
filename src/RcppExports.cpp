// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// equality
LogicalVector equality(CharacterVector lookupvect, String charstring);
RcppExport SEXP refinr_equality(SEXP lookupvectSEXP, SEXP charstringSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type lookupvect(lookupvectSEXP);
    Rcpp::traits::input_parameter< String >::type charstring(charstringSEXP);
    rcpp_result_gen = Rcpp::wrap(equality(lookupvect, charstring));
    return rcpp_result_gen;
END_RCPP
}
// merge_clusters
CharacterVector merge_clusters(CharacterVector clusters, CharacterVector keys_vect, CharacterVector vect, CharacterVector keys_vect_sub, CharacterVector vect_sub);
RcppExport SEXP refinr_merge_clusters(SEXP clustersSEXP, SEXP keys_vectSEXP, SEXP vectSEXP, SEXP keys_vect_subSEXP, SEXP vect_subSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type clusters(clustersSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type keys_vect(keys_vectSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type vect(vectSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type keys_vect_sub(keys_vect_subSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type vect_sub(vect_subSEXP);
    rcpp_result_gen = Rcpp::wrap(merge_clusters(clusters, keys_vect, vect, keys_vect_sub, vect_sub));
    return rcpp_result_gen;
END_RCPP
}
// merge_clusters_dict
CharacterVector merge_clusters_dict(CharacterVector clusters, CharacterVector keys_vect, CharacterVector vect, CharacterVector keys_vect_sub, CharacterVector vect_sub, CharacterVector keys_dict, CharacterVector dict);
RcppExport SEXP refinr_merge_clusters_dict(SEXP clustersSEXP, SEXP keys_vectSEXP, SEXP vectSEXP, SEXP keys_vect_subSEXP, SEXP vect_subSEXP, SEXP keys_dictSEXP, SEXP dictSEXP) {
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
    rcpp_result_gen = Rcpp::wrap(merge_clusters_dict(clusters, keys_vect, vect, keys_vect_sub, vect_sub, keys_dict, dict));
    return rcpp_result_gen;
END_RCPP
}
// most_freq
String most_freq(String clust, CharacterVector keys_sub, CharacterVector vect_sub);
RcppExport SEXP refinr_most_freq(SEXP clustSEXP, SEXP keys_subSEXP, SEXP vect_subSEXP) {
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
