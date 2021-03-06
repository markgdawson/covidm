// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppGSL.h>
#include <Rcpp.h>

using namespace Rcpp;

// cm_backend_simulate
Rcpp::List cm_backend_simulate(Rcpp::List parameters, unsigned int n_run, unsigned long int seed);
RcppExport SEXP _covidm_cm_backend_simulate(SEXP parametersSEXP, SEXP n_runSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type parameters(parametersSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type n_run(n_runSEXP);
    Rcpp::traits::input_parameter< unsigned long int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(cm_backend_simulate(parameters, n_run, seed));
    return rcpp_result_gen;
END_RCPP
}
// cm_evaluate_distribution
Rcpp::DataFrame cm_evaluate_distribution(std::string dist_code, unsigned int steps, double xmin, double xmax);
RcppExport SEXP _covidm_cm_evaluate_distribution(SEXP dist_codeSEXP, SEXP stepsSEXP, SEXP xminSEXP, SEXP xmaxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type dist_code(dist_codeSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type steps(stepsSEXP);
    Rcpp::traits::input_parameter< double >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< double >::type xmax(xmaxSEXP);
    rcpp_result_gen = Rcpp::wrap(cm_evaluate_distribution(dist_code, steps, xmin, xmax));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_covidm_cm_backend_simulate", (DL_FUNC) &_covidm_cm_backend_simulate, 3},
    {"_covidm_cm_evaluate_distribution", (DL_FUNC) &_covidm_cm_evaluate_distribution, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_covidm(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
