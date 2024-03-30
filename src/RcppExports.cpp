// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/RcppMeCab.h"
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// posParallelJoinRcpp
List posParallelJoinRcpp(std::vector<std::string> text, std::string sys_dic, std::string user_dic);
static SEXP _RcppMeCab_posParallelJoinRcpp_try(SEXP textSEXP, SEXP sys_dicSEXP, SEXP user_dicSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type text(textSEXP);
    Rcpp::traits::input_parameter< std::string >::type sys_dic(sys_dicSEXP);
    Rcpp::traits::input_parameter< std::string >::type user_dic(user_dicSEXP);
    rcpp_result_gen = Rcpp::wrap(posParallelJoinRcpp(text, sys_dic, user_dic));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppMeCab_posParallelJoinRcpp(SEXP textSEXP, SEXP sys_dicSEXP, SEXP user_dicSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppMeCab_posParallelJoinRcpp_try(textSEXP, sys_dicSEXP, user_dicSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// posParallelDFRcpp
DataFrame posParallelDFRcpp(StringVector text, std::string sys_dic, std::string user_dic);
static SEXP _RcppMeCab_posParallelDFRcpp_try(SEXP textSEXP, SEXP sys_dicSEXP, SEXP user_dicSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< StringVector >::type text(textSEXP);
    Rcpp::traits::input_parameter< std::string >::type sys_dic(sys_dicSEXP);
    Rcpp::traits::input_parameter< std::string >::type user_dic(user_dicSEXP);
    rcpp_result_gen = Rcpp::wrap(posParallelDFRcpp(text, sys_dic, user_dic));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppMeCab_posParallelDFRcpp(SEXP textSEXP, SEXP sys_dicSEXP, SEXP user_dicSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppMeCab_posParallelDFRcpp_try(textSEXP, sys_dicSEXP, user_dicSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// posParallelRcpp
List posParallelRcpp(std::vector<std::string> text, std::string sys_dic, std::string user_dic);
static SEXP _RcppMeCab_posParallelRcpp_try(SEXP textSEXP, SEXP sys_dicSEXP, SEXP user_dicSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type text(textSEXP);
    Rcpp::traits::input_parameter< std::string >::type sys_dic(sys_dicSEXP);
    Rcpp::traits::input_parameter< std::string >::type user_dic(user_dicSEXP);
    rcpp_result_gen = Rcpp::wrap(posParallelRcpp(text, sys_dic, user_dic));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppMeCab_posParallelRcpp(SEXP textSEXP, SEXP sys_dicSEXP, SEXP user_dicSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppMeCab_posParallelRcpp_try(textSEXP, sys_dicSEXP, user_dicSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// posRcpp
CharacterVector posRcpp(std::string text, std::string sys_dic, std::string user_dic);
static SEXP _RcppMeCab_posRcpp_try(SEXP textSEXP, SEXP sys_dicSEXP, SEXP user_dicSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::string >::type text(textSEXP);
    Rcpp::traits::input_parameter< std::string >::type sys_dic(sys_dicSEXP);
    Rcpp::traits::input_parameter< std::string >::type user_dic(user_dicSEXP);
    rcpp_result_gen = Rcpp::wrap(posRcpp(text, sys_dic, user_dic));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppMeCab_posRcpp(SEXP textSEXP, SEXP sys_dicSEXP, SEXP user_dicSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppMeCab_posRcpp_try(textSEXP, sys_dicSEXP, user_dicSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// posJoinRcpp
StringVector posJoinRcpp(std::string text, std::string sys_dic, std::string user_dic);
static SEXP _RcppMeCab_posJoinRcpp_try(SEXP textSEXP, SEXP sys_dicSEXP, SEXP user_dicSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::string >::type text(textSEXP);
    Rcpp::traits::input_parameter< std::string >::type sys_dic(sys_dicSEXP);
    Rcpp::traits::input_parameter< std::string >::type user_dic(user_dicSEXP);
    rcpp_result_gen = Rcpp::wrap(posJoinRcpp(text, sys_dic, user_dic));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppMeCab_posJoinRcpp(SEXP textSEXP, SEXP sys_dicSEXP, SEXP user_dicSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppMeCab_posJoinRcpp_try(textSEXP, sys_dicSEXP, user_dicSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// posLoopRcpp
List posLoopRcpp(std::vector< std::string > text, std::string sys_dic, std::string user_dic);
static SEXP _RcppMeCab_posLoopRcpp_try(SEXP textSEXP, SEXP sys_dicSEXP, SEXP user_dicSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::vector< std::string > >::type text(textSEXP);
    Rcpp::traits::input_parameter< std::string >::type sys_dic(sys_dicSEXP);
    Rcpp::traits::input_parameter< std::string >::type user_dic(user_dicSEXP);
    rcpp_result_gen = Rcpp::wrap(posLoopRcpp(text, sys_dic, user_dic));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppMeCab_posLoopRcpp(SEXP textSEXP, SEXP sys_dicSEXP, SEXP user_dicSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppMeCab_posLoopRcpp_try(textSEXP, sys_dicSEXP, user_dicSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// posLoopJoinRcpp
List posLoopJoinRcpp(std::vector< std::string > text, std::string sys_dic, std::string user_dic);
static SEXP _RcppMeCab_posLoopJoinRcpp_try(SEXP textSEXP, SEXP sys_dicSEXP, SEXP user_dicSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::vector< std::string > >::type text(textSEXP);
    Rcpp::traits::input_parameter< std::string >::type sys_dic(sys_dicSEXP);
    Rcpp::traits::input_parameter< std::string >::type user_dic(user_dicSEXP);
    rcpp_result_gen = Rcpp::wrap(posLoopJoinRcpp(text, sys_dic, user_dic));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppMeCab_posLoopJoinRcpp(SEXP textSEXP, SEXP sys_dicSEXP, SEXP user_dicSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppMeCab_posLoopJoinRcpp_try(textSEXP, sys_dicSEXP, user_dicSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// posDFRcpp
DataFrame posDFRcpp(StringVector text, std::string sys_dic, std::string user_dic);
static SEXP _RcppMeCab_posDFRcpp_try(SEXP textSEXP, SEXP sys_dicSEXP, SEXP user_dicSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< StringVector >::type text(textSEXP);
    Rcpp::traits::input_parameter< std::string >::type sys_dic(sys_dicSEXP);
    Rcpp::traits::input_parameter< std::string >::type user_dic(user_dicSEXP);
    rcpp_result_gen = Rcpp::wrap(posDFRcpp(text, sys_dic, user_dic));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppMeCab_posDFRcpp(SEXP textSEXP, SEXP sys_dicSEXP, SEXP user_dicSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppMeCab_posDFRcpp_try(textSEXP, sys_dicSEXP, user_dicSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int _RcppMeCab_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("List(*posParallelJoinRcpp)(std::vector<std::string>,std::string,std::string)");
        signatures.insert("DataFrame(*posParallelDFRcpp)(StringVector,std::string,std::string)");
        signatures.insert("List(*posParallelRcpp)(std::vector<std::string>,std::string,std::string)");
        signatures.insert("CharacterVector(*posRcpp)(std::string,std::string,std::string)");
        signatures.insert("StringVector(*posJoinRcpp)(std::string,std::string,std::string)");
        signatures.insert("List(*posLoopRcpp)(std::vector< std::string >,std::string,std::string)");
        signatures.insert("List(*posLoopJoinRcpp)(std::vector< std::string >,std::string,std::string)");
        signatures.insert("DataFrame(*posDFRcpp)(StringVector,std::string,std::string)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _RcppMeCab_RcppExport_registerCCallable() { 
    R_RegisterCCallable("RcppMeCab", "_RcppMeCab_posParallelJoinRcpp", (DL_FUNC)_RcppMeCab_posParallelJoinRcpp_try);
    R_RegisterCCallable("RcppMeCab", "_RcppMeCab_posParallelDFRcpp", (DL_FUNC)_RcppMeCab_posParallelDFRcpp_try);
    R_RegisterCCallable("RcppMeCab", "_RcppMeCab_posParallelRcpp", (DL_FUNC)_RcppMeCab_posParallelRcpp_try);
    R_RegisterCCallable("RcppMeCab", "_RcppMeCab_posRcpp", (DL_FUNC)_RcppMeCab_posRcpp_try);
    R_RegisterCCallable("RcppMeCab", "_RcppMeCab_posJoinRcpp", (DL_FUNC)_RcppMeCab_posJoinRcpp_try);
    R_RegisterCCallable("RcppMeCab", "_RcppMeCab_posLoopRcpp", (DL_FUNC)_RcppMeCab_posLoopRcpp_try);
    R_RegisterCCallable("RcppMeCab", "_RcppMeCab_posLoopJoinRcpp", (DL_FUNC)_RcppMeCab_posLoopJoinRcpp_try);
    R_RegisterCCallable("RcppMeCab", "_RcppMeCab_posDFRcpp", (DL_FUNC)_RcppMeCab_posDFRcpp_try);
    R_RegisterCCallable("RcppMeCab", "_RcppMeCab_RcppExport_validate", (DL_FUNC)_RcppMeCab_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_RcppMeCab_posParallelJoinRcpp", (DL_FUNC) &_RcppMeCab_posParallelJoinRcpp, 3},
    {"_RcppMeCab_posParallelDFRcpp", (DL_FUNC) &_RcppMeCab_posParallelDFRcpp, 3},
    {"_RcppMeCab_posParallelRcpp", (DL_FUNC) &_RcppMeCab_posParallelRcpp, 3},
    {"_RcppMeCab_posRcpp", (DL_FUNC) &_RcppMeCab_posRcpp, 3},
    {"_RcppMeCab_posJoinRcpp", (DL_FUNC) &_RcppMeCab_posJoinRcpp, 3},
    {"_RcppMeCab_posLoopRcpp", (DL_FUNC) &_RcppMeCab_posLoopRcpp, 3},
    {"_RcppMeCab_posLoopJoinRcpp", (DL_FUNC) &_RcppMeCab_posLoopJoinRcpp, 3},
    {"_RcppMeCab_posDFRcpp", (DL_FUNC) &_RcppMeCab_posDFRcpp, 3},
    {"_RcppMeCab_RcppExport_registerCCallable", (DL_FUNC) &_RcppMeCab_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_RcppMeCab(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
