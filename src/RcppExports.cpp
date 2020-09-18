// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// minkowski
double minkowski(Rcpp::NumericVector x, Rcpp::NumericVector y, Rcpp::NumericVector w, double r, double q);
RcppExport SEXP _cognitivemodels_minkowski(SEXP xSEXP, SEXP ySEXP, SEXP wSEXP, SEXP rSEXP, SEXP qSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type w(wSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    rcpp_result_gen = Rcpp::wrap(minkowski(x, y, w, r, q));
    return rcpp_result_gen;
END_RCPP
}
// mahalanobis
double mahalanobis(Rcpp::NumericVector x, Rcpp::NumericVector y, Rcpp::NumericMatrix s, Rcpp::NumericVector w, double q);
RcppExport SEXP _cognitivemodels_mahalanobis(SEXP xSEXP, SEXP ySEXP, SEXP sSEXP, SEXP wSEXP, SEXP qSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type s(sSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type w(wSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    rcpp_result_gen = Rcpp::wrap(mahalanobis(x, y, s, w, q));
    return rcpp_result_gen;
END_RCPP
}
// ebm_cpp
Rcpp::NumericVector ebm_cpp(Rcpp::NumericVector criterion, Rcpp::NumericMatrix features, Rcpp::NumericVector w, double r, double q, double lambda, Rcpp::NumericVector b, Rcpp::NumericVector wf, int lastLearnTrial, int firstOutTrial, double init, Rcpp::NumericVector has_criterion, std::string similarity, int ismultiplicative);
RcppExport SEXP _cognitivemodels_ebm_cpp(SEXP criterionSEXP, SEXP featuresSEXP, SEXP wSEXP, SEXP rSEXP, SEXP qSEXP, SEXP lambdaSEXP, SEXP bSEXP, SEXP wfSEXP, SEXP lastLearnTrialSEXP, SEXP firstOutTrialSEXP, SEXP initSEXP, SEXP has_criterionSEXP, SEXP similaritySEXP, SEXP ismultiplicativeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type criterion(criterionSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type features(featuresSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type w(wSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type b(bSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type wf(wfSEXP);
    Rcpp::traits::input_parameter< int >::type lastLearnTrial(lastLearnTrialSEXP);
    Rcpp::traits::input_parameter< int >::type firstOutTrial(firstOutTrialSEXP);
    Rcpp::traits::input_parameter< double >::type init(initSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type has_criterion(has_criterionSEXP);
    Rcpp::traits::input_parameter< std::string >::type similarity(similaritySEXP);
    Rcpp::traits::input_parameter< int >::type ismultiplicative(ismultiplicativeSEXP);
    rcpp_result_gen = Rcpp::wrap(ebm_cpp(criterion, features, w, r, q, lambda, b, wf, lastLearnTrial, firstOutTrial, init, has_criterion, similarity, ismultiplicative));
    return rcpp_result_gen;
END_RCPP
}
// shortfall_cpp
Rcpp::NumericVector shortfall_cpp(Rcpp::NumericMatrix x, Rcpp::NumericMatrix p, Rcpp::NumericVector a, double beta, double delta);
RcppExport SEXP _cognitivemodels_shortfall_cpp(SEXP xSEXP, SEXP pSEXP, SEXP aSEXP, SEXP betaSEXP, SEXP deltaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type p(pSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    rcpp_result_gen = Rcpp::wrap(shortfall_cpp(x, p, a, beta, delta));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_cognitivemodels_minkowski", (DL_FUNC) &_cognitivemodels_minkowski, 5},
    {"_cognitivemodels_mahalanobis", (DL_FUNC) &_cognitivemodels_mahalanobis, 5},
    {"_cognitivemodels_ebm_cpp", (DL_FUNC) &_cognitivemodels_ebm_cpp, 14},
    {"_cognitivemodels_shortfall_cpp", (DL_FUNC) &_cognitivemodels_shortfall_cpp, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_cognitivemodels(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
