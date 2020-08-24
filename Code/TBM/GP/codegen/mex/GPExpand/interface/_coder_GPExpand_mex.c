/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_GPExpand_mex.c
 *
 * Code generation for function '_coder_GPExpand_mex'
 *
 */

/* Include files */
#include "GPExpand.h"
#include "_coder_GPExpand_mex.h"
#include "GPExpand_terminate.h"
#include "_coder_GPExpand_api.h"
#include "GPExpand_initialize.h"
#include "GPExpand_data.h"

/* Variable Definitions */
static GPExpandStackData *GPExpandStackDataGlobal = NULL;

/* Function Declarations */
static void GPExpand_mexFunction(GPExpandStackData *SD, int32_T nlhs, mxArray
  *plhs[1], int32_T nrhs, const mxArray *prhs[2]);

/* Function Definitions */
static void GPExpand_mexFunction(GPExpandStackData *SD, int32_T nlhs, mxArray
  *plhs[1], int32_T nrhs, const mxArray *prhs[2])
{
  int32_T n;
  const mxArray *inputs[2];
  const mxArray *outputs[1];
  int32_T b_nlhs;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 2, 4, 8,
                        "GPExpand");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 8,
                        "GPExpand");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  GPExpand_api(SD, inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  GPExpand_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  GPExpandStackDataGlobal = (GPExpandStackData *)mxCalloc(1, sizeof
    (GPExpandStackData));

  /* Initialize the memory manager. */
  mexAtExit(GPExpand_atexit);

  /* Module initialization. */
  GPExpand_initialize();

  /* Dispatch the entry-point. */
  GPExpand_mexFunction(GPExpandStackDataGlobal, nlhs, plhs, nrhs, prhs);
  mxFree(GPExpandStackDataGlobal);
}

/* End of code generation (_coder_GPExpand_mex.c) */
