/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sum.c
 *
 * Code generation for function 'sum'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "GPExpand.h"
#include "sum.h"

/* Variable Definitions */
static emlrtRSInfo b_emlrtRSI = { 13, "sum",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtRTEInfo f_emlrtRTEI = { 19, 23, "sumprod",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"
};

static emlrtRTEInfo g_emlrtRTEI = { 39, 9, "sumprod",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"
};

/* Function Definitions */
real_T sum(const emlrtStack *sp, const real_T x_data[], const int32_T x_size[1])
{
  real_T y;
  boolean_T p;
  boolean_T b_p;
  int32_T k;
  int32_T exitg1;
  int32_T b_k;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &b_emlrtRSI;
  if ((x_size[0] == 1) || (x_size[0] != 1)) {
    p = true;
  } else {
    p = false;
  }

  if (p) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &f_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  p = false;
  b_p = false;
  k = 0;
  do {
    exitg1 = 0;
    if (k < 2) {
      if (k + 1 <= 1) {
        b_k = x_size[0];
      } else {
        b_k = 1;
      }

      if (b_k != 0) {
        exitg1 = 1;
      } else {
        k++;
      }
    } else {
      b_p = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (!b_p) {
  } else {
    p = true;
  }

  if (!p) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &g_emlrtRTEI,
      "Coder:toolbox:UnsupportedSpecialEmpty", 0);
  }

  if (x_size[0] == 0) {
    y = 0.0;
  } else {
    y = x_data[0];
    for (k = 2; k <= x_size[0]; k++) {
      y += x_data[k - 1];
    }
  }

  return y;
}

/* End of code generation (sum.c) */
