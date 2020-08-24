/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_GPExpand_api.c
 *
 * Code generation for function '_coder_GPExpand_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "GPExpand.h"
#include "_coder_GPExpand_api.h"
#include "GPExpand_emxutil.h"
#include "GPExpand_data.h"

/* Variable Definitions */
static emlrtRTEInfo b_emlrtRTEI = { 1, 1, "_coder_GPExpand_api", "" };

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[134217728];
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *newdim,
  const char_T *identifier))[3];
static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3];
static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[134217728];
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *I, const
  char_T *identifier))[134217728];
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3];

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[134217728]
{
  real_T (*y)[134217728];
  y = e_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *newdim,
  const char_T *identifier))[3]
{
  real_T (*y)[3];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = d_emlrt_marshallIn(sp, emlrtAlias(newdim), &thisId);
  emlrtDestroyArray(&newdim);
  return y;
}

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3]
{
  real_T (*y)[3];
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[134217728]
{
  real_T (*ret)[134217728];
  int32_T iv1[3];
  int32_T i;
  for (i = 0; i < 3; i++) {
    iv1[i] = 512;
  }

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 3U, iv1);
  ret = (real_T (*)[134217728])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *I, const
  char_T *identifier))[134217728]
{
  real_T (*y)[134217728];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = b_emlrt_marshallIn(sp, emlrtAlias(I), &thisId);
  emlrtDestroyArray(&I);
  return y;
}
  static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv0[3] = { 0, 0, 0 };

  const mxArray *m0;
  y = NULL;
  m0 = emlrtCreateNumericArray(3, iv0, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m0, (void *)u->data);
  emlrtSetDimensions((mxArray *)m0, u->size, 3);
  emlrtAssign(&y, m0);
  return y;
}

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3]
{
  real_T (*ret)[3];
  int32_T iv2[2];
  int32_T i8;
  for (i8 = 0; i8 < 2; i8++) {
    iv2[i8] = 1 + (i8 << 1);
  }

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv2);
  ret = (real_T (*)[3])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  void GPExpand_api(GPExpandStackData *SD, const mxArray * const prhs[2], const
                    mxArray *plhs[1])
{
  emxArray_real_T *IResult;
  real_T (*I)[134217728];
  real_T (*newdim)[3];
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &IResult, 3, &b_emlrtRTEI, true);

  /* Marshall function inputs */
  I = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "I");
  newdim = c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "newdim");

  /* Invoke the target function */
  GPExpand(SD, &st, *I, *newdim, IResult);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(IResult);
  IResult->canFreeData = false;
  emxFree_real_T(&IResult);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_GPExpand_api.c) */
