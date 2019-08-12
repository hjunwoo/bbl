// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// pseudo_mle
List pseudo_mle(NumericMatrix xi, IntegerVector L, LogicalVector Numeric, NumericVector Lambda, IntegerVector Nprint, IntegerVector Itmax, NumericVector Tol, IntegerVector Verbose);
RcppExport SEXP _bbm_pseudo_mle(SEXP xiSEXP, SEXP LSEXP, SEXP NumericSEXP, SEXP LambdaSEXP, SEXP NprintSEXP, SEXP ItmaxSEXP, SEXP TolSEXP, SEXP VerboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type xi(xiSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type L(LSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type Numeric(NumericSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type Nprint(NprintSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type Itmax(ItmaxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Tol(TolSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type Verbose(VerboseSEXP);
    rcpp_result_gen = Rcpp::wrap(pseudo_mle(xi, L, Numeric, Lambda, Nprint, Itmax, Tol, Verbose));
    return rcpp_result_gen;
END_RCPP
}
// predict_class
NumericMatrix predict_class(IntegerMatrix xid, IntegerVector Ly, List h, List J, LogicalVector numericmodel, NumericVector lz, NumericVector py);
RcppExport SEXP _bbm_predict_class(SEXP xidSEXP, SEXP LySEXP, SEXP hSEXP, SEXP JSEXP, SEXP numericmodelSEXP, SEXP lzSEXP, SEXP pySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type xid(xidSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type Ly(LySEXP);
    Rcpp::traits::input_parameter< List >::type h(hSEXP);
    Rcpp::traits::input_parameter< List >::type J(JSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type numericmodel(numericmodelSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lz(lzSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type py(pySEXP);
    rcpp_result_gen = Rcpp::wrap(predict_class(xid, Ly, h, J, numericmodel, lz, py));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_bbm_pseudo_mle", (DL_FUNC) &_bbm_pseudo_mle, 8},
    {"_bbm_predict_class", (DL_FUNC) &_bbm_predict_class, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_bbm(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
