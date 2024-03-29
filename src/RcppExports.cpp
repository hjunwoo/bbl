// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// mfwrapper
List mfwrapper(NumericMatrix xi, IntegerVector freq, NumericMatrix qJ, IntegerVector Lv, NumericVector Eps);
RcppExport SEXP _bbl_mfwrapper(SEXP xiSEXP, SEXP freqSEXP, SEXP qJSEXP, SEXP LvSEXP, SEXP EpsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type xi(xiSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type freq(freqSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type qJ(qJSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type Lv(LvSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Eps(EpsSEXP);
    rcpp_result_gen = Rcpp::wrap(mfwrapper(xi, freq, qJ, Lv, Eps));
    return rcpp_result_gen;
END_RCPP
}
// pseudo_mle
List pseudo_mle(NumericMatrix xi, IntegerVector freq, LogicalMatrix qJ, IntegerVector Lv, NumericVector Lambda, IntegerVector Nprint, IntegerVector Itmax, NumericVector Tol, LogicalVector Naive, IntegerVector Verbose, LogicalVector Lzhalf);
RcppExport SEXP _bbl_pseudo_mle(SEXP xiSEXP, SEXP freqSEXP, SEXP qJSEXP, SEXP LvSEXP, SEXP LambdaSEXP, SEXP NprintSEXP, SEXP ItmaxSEXP, SEXP TolSEXP, SEXP NaiveSEXP, SEXP VerboseSEXP, SEXP LzhalfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type xi(xiSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type freq(freqSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type qJ(qJSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type Lv(LvSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type Nprint(NprintSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type Itmax(ItmaxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Tol(TolSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type Naive(NaiveSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type Verbose(VerboseSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type Lzhalf(LzhalfSEXP);
    rcpp_result_gen = Rcpp::wrap(pseudo_mle(xi, freq, qJ, Lv, Lambda, Nprint, Itmax, Tol, Naive, Verbose, Lzhalf));
    return rcpp_result_gen;
END_RCPP
}
// predict_class
NumericVector predict_class(IntegerVector xid, IntegerVector Ly, List h, List J, NumericVector lz, NumericVector py, LogicalVector Naive);
RcppExport SEXP _bbl_predict_class(SEXP xidSEXP, SEXP LySEXP, SEXP hSEXP, SEXP JSEXP, SEXP lzSEXP, SEXP pySEXP, SEXP NaiveSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type xid(xidSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type Ly(LySEXP);
    Rcpp::traits::input_parameter< List >::type h(hSEXP);
    Rcpp::traits::input_parameter< List >::type J(JSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lz(lzSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type py(pySEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type Naive(NaiveSEXP);
    rcpp_result_gen = Rcpp::wrap(predict_class(xid, Ly, h, J, lz, py, Naive));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_bbl_mfwrapper", (DL_FUNC) &_bbl_mfwrapper, 5},
    {"_bbl_pseudo_mle", (DL_FUNC) &_bbl_pseudo_mle, 11},
    {"_bbl_predict_class", (DL_FUNC) &_bbl_predict_class, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_bbl(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
