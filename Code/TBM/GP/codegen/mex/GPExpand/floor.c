/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * floor.c
 *
 * Code generation for function 'floor'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "GPExpand.h"
#include "floor.h"

/* Function Definitions */
void b_floor(real_T x[5])
{
  int32_T k;
  for (k = 0; k < 5; k++) {
    x[k] = muDoubleScalarFloor(x[k]);
  }
}

/* End of code generation (floor.c) */
