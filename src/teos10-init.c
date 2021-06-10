#define R_NO_REMAP
#include <R.h>
#include <Rinternals.h>
#include "teos10-common.h"

static const R_CallMethodDef CallEntries[] = {
    {"teos10_c_dummy", (DL_FUNC) &teos10_c_dummy, 0},
    {NULL, NULL, 0}
};

void R_init_teos10(DllInfo* dll){
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
