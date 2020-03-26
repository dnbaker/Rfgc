// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "fgc/fgc.h"
#include <RcppBlaze3.h>
#include "../inst/include/Rfgc.h"
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// llr_matrixdd
Rcpp::NumericMatrix llr_matrixdd(blaze::DynamicMatrix<double>& X);
static SEXP _Rfgc_llr_matrixdd_try(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< blaze::DynamicMatrix<double>& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(llr_matrixdd(X));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _Rfgc_llr_matrixdd(SEXP XSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_Rfgc_llr_matrixdd_try(XSEXP));
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
// llr_matrixdf
Rcpp::NumericMatrix llr_matrixdf(blaze::DynamicMatrix<float>& X);
static SEXP _Rfgc_llr_matrixdf_try(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< blaze::DynamicMatrix<float>& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(llr_matrixdf(X));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _Rfgc_llr_matrixdf(SEXP XSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_Rfgc_llr_matrixdf_try(XSEXP));
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
// llr_matrixsf
Rcpp::NumericMatrix llr_matrixsf(blaze::CompressedMatrix<float>& X);
static SEXP _Rfgc_llr_matrixsf_try(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< blaze::CompressedMatrix<float>& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(llr_matrixsf(X));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _Rfgc_llr_matrixsf(SEXP XSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_Rfgc_llr_matrixsf_try(XSEXP));
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
// llr_matrixsd
Rcpp::NumericMatrix llr_matrixsd(blaze::CompressedMatrix<double>& X);
static SEXP _Rfgc_llr_matrixsd_try(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< blaze::CompressedMatrix<double>& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(llr_matrixsd(X));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _Rfgc_llr_matrixsd(SEXP XSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_Rfgc_llr_matrixsd_try(XSEXP));
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
static int _Rfgc_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("Rcpp::NumericMatrix(*llr_matrixdd)(blaze::DynamicMatrix<double>&)");
        signatures.insert("Rcpp::NumericMatrix(*llr_matrixdf)(blaze::DynamicMatrix<float>&)");
        signatures.insert("Rcpp::NumericMatrix(*llr_matrixsf)(blaze::CompressedMatrix<float>&)");
        signatures.insert("Rcpp::NumericMatrix(*llr_matrixsd)(blaze::CompressedMatrix<double>&)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _Rfgc_RcppExport_registerCCallable() { 
    R_RegisterCCallable("Rfgc", "_Rfgc_llr_matrixdd", (DL_FUNC)_Rfgc_llr_matrixdd_try);
    R_RegisterCCallable("Rfgc", "_Rfgc_llr_matrixdf", (DL_FUNC)_Rfgc_llr_matrixdf_try);
    R_RegisterCCallable("Rfgc", "_Rfgc_llr_matrixsf", (DL_FUNC)_Rfgc_llr_matrixsf_try);
    R_RegisterCCallable("Rfgc", "_Rfgc_llr_matrixsd", (DL_FUNC)_Rfgc_llr_matrixsd_try);
    R_RegisterCCallable("Rfgc", "_Rfgc_RcppExport_validate", (DL_FUNC)_Rfgc_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_Rfgc_llr_matrixdd", (DL_FUNC) &_Rfgc_llr_matrixdd, 1},
    {"_Rfgc_llr_matrixdf", (DL_FUNC) &_Rfgc_llr_matrixdf, 1},
    {"_Rfgc_llr_matrixsf", (DL_FUNC) &_Rfgc_llr_matrixsf, 1},
    {"_Rfgc_llr_matrixsd", (DL_FUNC) &_Rfgc_llr_matrixsd, 1},
    {"_Rfgc_RcppExport_registerCCallable", (DL_FUNC) &_Rfgc_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_Rfgc(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}