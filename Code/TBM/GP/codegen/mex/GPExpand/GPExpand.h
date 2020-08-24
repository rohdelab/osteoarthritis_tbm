/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * GPExpand.h
 *
 * Code generation for function 'GPExpand'
 *
 */

#ifndef __GPEXPAND_H__
#define __GPEXPAND_H__

/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "GPExpand_types.h"

/* Function Declarations */
extern void GPExpand(GPExpandStackData *SD, const emlrtStack *sp, const real_T
                     I[134217728], const real_T newdim[3], emxArray_real_T
                     *IResult);

#endif

/* End of code generation (GPExpand.h) */
