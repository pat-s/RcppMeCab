// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// posLoopRcpp
List posLoopRcpp(std::vector< std::string > text, std::string dict);
RcppExport SEXP _RcppMeCab_posLoopRcpp(SEXP textSEXP, SEXP dictSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector< std::string > >::type text(textSEXP);
    Rcpp::traits::input_parameter< std::string >::type dict(dictSEXP);
    rcpp_result_gen = Rcpp::wrap(posLoopRcpp(text, dict));
    return rcpp_result_gen;
END_RCPP
}
// posParallelRcpp
List posParallelRcpp(std::vector<std::string> text, std::string dict);
RcppExport SEXP _RcppMeCab_posParallelRcpp(SEXP textSEXP, SEXP dictSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type text(textSEXP);
    Rcpp::traits::input_parameter< std::string >::type dict(dictSEXP);
    rcpp_result_gen = Rcpp::wrap(posParallelRcpp(text, dict));
    return rcpp_result_gen;
END_RCPP
}
// posRcpp
StringVector posRcpp(StringVector text, StringVector dict);
RcppExport SEXP _RcppMeCab_posRcpp(SEXP textSEXP, SEXP dictSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< StringVector >::type text(textSEXP);
    Rcpp::traits::input_parameter< StringVector >::type dict(dictSEXP);
    rcpp_result_gen = Rcpp::wrap(posRcpp(text, dict));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RcppMeCab_posLoopRcpp", (DL_FUNC) &_RcppMeCab_posLoopRcpp, 2},
    {"_RcppMeCab_posParallelRcpp", (DL_FUNC) &_RcppMeCab_posParallelRcpp, 2},
    {"_RcppMeCab_posRcpp", (DL_FUNC) &_RcppMeCab_posRcpp, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_RcppMeCab(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
