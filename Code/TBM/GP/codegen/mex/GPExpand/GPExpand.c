/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * GPExpand.c
 *
 * Code generation for function 'GPExpand'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "GPExpand.h"
#include "GPExpand_emxutil.h"
#include "sum.h"
#include "floor.h"
#include "GPExpand_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 69, "GPExpand",
  "D:\\TBM_software\\TBM\\GP\\GPExpand.m" };

static emlrtRTEInfo emlrtRTEI = { 1, 20, "GPExpand",
  "D:\\TBM_software\\TBM\\GP\\GPExpand.m" };

static emlrtRTEInfo c_emlrtRTEI = { 62, 3, "GPExpand",
  "D:\\TBM_software\\TBM\\GP\\GPExpand.m" };

static emlrtRTEInfo d_emlrtRTEI = { 63, 4, "GPExpand",
  "D:\\TBM_software\\TBM\\GP\\GPExpand.m" };

static emlrtRTEInfo e_emlrtRTEI = { 64, 5, "GPExpand",
  "D:\\TBM_software\\TBM\\GP\\GPExpand.m" };

static emlrtECInfo emlrtECI = { 3, 68, 10, "GPExpand",
  "D:\\TBM_software\\TBM\\GP\\GPExpand.m" };

static emlrtDCInfo emlrtDCI = { 20, 17, "GPExpand",
  "D:\\TBM_software\\TBM\\GP\\GPExpand.m", 1 };

static emlrtDCInfo b_emlrtDCI = { 20, 17, "GPExpand",
  "D:\\TBM_software\\TBM\\GP\\GPExpand.m", 4 };

static emlrtBCInfo emlrtBCI = { 1, 514, 68, 12, "I", "GPExpand",
  "D:\\TBM_software\\TBM\\GP\\GPExpand.m", 0 };

static emlrtDCInfo c_emlrtDCI = { 68, 12, "GPExpand",
  "D:\\TBM_software\\TBM\\GP\\GPExpand.m", 1 };

static emlrtBCInfo b_emlrtBCI = { 1, 514, 68, 25, "I", "GPExpand",
  "D:\\TBM_software\\TBM\\GP\\GPExpand.m", 0 };

static emlrtDCInfo d_emlrtDCI = { 68, 25, "GPExpand",
  "D:\\TBM_software\\TBM\\GP\\GPExpand.m", 1 };

static emlrtBCInfo c_emlrtBCI = { 1, 514, 68, 38, "I", "GPExpand",
  "D:\\TBM_software\\TBM\\GP\\GPExpand.m", 0 };

static emlrtDCInfo e_emlrtDCI = { 68, 38, "GPExpand",
  "D:\\TBM_software\\TBM\\GP\\GPExpand.m", 1 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 69, 14, "IResult", "GPExpand",
  "D:\\TBM_software\\TBM\\GP\\GPExpand.m", 0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 69, 21, "IResult", "GPExpand",
  "D:\\TBM_software\\TBM\\GP\\GPExpand.m", 0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 69, 27, "IResult", "GPExpand",
  "D:\\TBM_software\\TBM\\GP\\GPExpand.m", 0 };

/* Function Definitions */
void GPExpand(GPExpandStackData *SD, const emlrtStack *sp, const real_T I
              [134217728], const real_T newdim[3], emxArray_real_T *IResult)
{
  int32_T i0;
  real_T d0;
  int32_T loop_ub;
  real_T Wt3[125];
  int32_T i;
  int32_T idx;
  static const real_T dv0[5] = { 0.05, 0.25, 0.4, 0.25, 0.05 };

  int32_T j;
  int32_T k;
  real_T pixeli[5];
  real_T dv1[5];
  real_T b_pixeli;
  boolean_T x[5];
  int8_T ii_data[5];
  int32_T ii_size[2];
  int32_T ii;
  boolean_T exitg3;
  boolean_T guard3 = false;
  int32_T b_loop_ub;
  int8_T idxi_data[5];
  real_T pixelj[5];
  real_T b_pixelj;
  boolean_T exitg2;
  boolean_T guard2 = false;
  int32_T c_loop_ub;
  int8_T idxj_data[5];
  real_T pixelk[5];
  real_T b_pixelk;
  boolean_T exitg1;
  boolean_T guard1 = false;
  int8_T idxk_data[5];
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T i6;
  int32_T i7;
  real_T tmp_data[125];
  int32_T I2_size[3];
  int32_T Wt3_size[3];
  int32_T I2[3];
  int32_T b_Wt3[3];
  real_T A_data[125];
  int32_T A[1];
  int32_T b_i;
  int32_T b_j;
  int32_T b_k;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*  Expand an image as per the Gaussian Pyramid. */
  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*  newdim = zeros(1,3);  */
  /*  newdim(1) = dim(1); newdim(2) = dim(2); newdim(3) = dim(3);   */
  /*  for i = 1:numel(dim) */
  /*      if mod(dim(i),2)==0 */
  /*          newdim(i) = dim(i)*2; */
  /*      else  */
  /*          newdim(i) = dim(i)*2-1;  */
  /*      end */
  /*  end */
  for (i0 = 0; i0 < 3; i0++) {
    if (newdim[i0] >= 0.0) {
      d0 = newdim[i0];
    } else {
      d0 = emlrtNonNegativeCheckR2012b(newdim[i0], &b_emlrtDCI, sp);
    }

    emlrtIntegerCheckR2012b(d0, &emlrtDCI, sp);
  }

  i0 = IResult->size[0] * IResult->size[1] * IResult->size[2];
  IResult->size[0] = (int32_T)newdim[0];
  emxEnsureCapacity(sp, (emxArray__common *)IResult, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i0 = IResult->size[0] * IResult->size[1] * IResult->size[2];
  IResult->size[1] = (int32_T)newdim[1];
  emxEnsureCapacity(sp, (emxArray__common *)IResult, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i0 = IResult->size[0] * IResult->size[1] * IResult->size[2];
  IResult->size[2] = (int32_T)newdim[2];
  emxEnsureCapacity(sp, (emxArray__common *)IResult, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = (int32_T)newdim[0] * (int32_T)newdim[1] * (int32_T)newdim[2];
  for (i0 = 0; i0 < loop_ub; i0++) {
    IResult->data[i0] = 0.0;
  }

  /*  Initialize the array in the beginning .. */
  for (i0 = 0; i0 < 125; i0++) {
    Wt3[i0] = 1.0;
  }

  i = 0;
  while (i < 5) {
    for (i0 = 0; i0 < 5; i0++) {
      for (idx = 0; idx < 5; idx++) {
        Wt3[(i + 5 * idx) + 25 * i0] *= dv0[i];
      }

      for (idx = 0; idx < 5; idx++) {
        Wt3[(idx + 5 * i) + 25 * i0] *= dv0[i];
      }
    }

    for (i0 = 0; i0 < 5; i0++) {
      for (idx = 0; idx < 5; idx++) {
        Wt3[(idx + 5 * i0) + 25 * i] *= dv0[i];
      }
    }

    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  /* 		%% Pad the boundaries */
  memset(&SD->f0.I2[0], 0, 135796744U * sizeof(real_T));
  for (i0 = 0; i0 < 512; i0++) {
    for (idx = 0; idx < 512; idx++) {
      memcpy(&SD->f0.I2[(514 * (1 + idx) + 264196 * (1 + i0)) + 1], &I[(idx << 9)
             + (i0 << 18)], sizeof(real_T) << 9);
    }
  }

  for (i0 = 0; i0 < 514; i0++) {
    for (idx = 0; idx < 514; idx++) {
      SD->f0.b_I2[idx + 514 * i0] = SD->f0.I2[1 + (514 * idx + 264196 * i0)];
      SD->f0.I2[514 * idx + 264196 * i0] = SD->f0.b_I2[idx + 514 * i0];
      SD->f0.c_I2[idx + 514 * i0] = SD->f0.I2[512 + (514 * idx + 264196 * i0)];
      SD->f0.I2[513 + (514 * idx + 264196 * i0)] = SD->f0.c_I2[idx + 514 * i0];
    }

    for (idx = 0; idx < 514; idx++) {
      SD->f0.d_I2[idx + 514 * i0] = SD->f0.I2[514 + (idx + 264196 * i0)];
      SD->f0.I2[idx + 264196 * i0] = SD->f0.d_I2[idx + 514 * i0];
      SD->f0.e_I2[idx + 514 * i0] = SD->f0.I2[263168 + (idx + 264196 * i0)];
      SD->f0.I2[263682 + (idx + 264196 * i0)] = SD->f0.e_I2[idx + 514 * i0];
    }
  }

  for (i0 = 0; i0 < 514; i0++) {
    for (idx = 0; idx < 514; idx++) {
      SD->f0.b_I2[idx + 514 * i0] = SD->f0.I2[264196 + (idx + 514 * i0)];
      SD->f0.I2[idx + 514 * i0] = SD->f0.b_I2[idx + 514 * i0];
      SD->f0.c_I2[idx + 514 * i0] = SD->f0.I2[135268352 + (idx + 514 * i0)];
      SD->f0.I2[135532548 + (idx + 514 * i0)] = SD->f0.c_I2[idx + 514 * i0];
    }
  }

  /* clear I2; */
  emlrtForLoopVectorCheckR2012b(0.0, 1.0, newdim[0] - 1.0, mxDOUBLE_CLASS,
    (int32_T)((newdim[0] - 1.0) + 1.0), &c_emlrtRTEI, sp);
  i = 0;
  while (i <= (int32_T)((newdim[0] - 1.0) + 1.0) - 1) {
    emlrtForLoopVectorCheckR2012b(0.0, 1.0, newdim[1] - 1.0, mxDOUBLE_CLASS,
      (int32_T)((newdim[1] - 1.0) + 1.0), &d_emlrtRTEI, sp);
    j = 0;
    while (j <= (int32_T)((newdim[1] - 1.0) + 1.0) - 1) {
      emlrtForLoopVectorCheckR2012b(0.0, 1.0, newdim[2] - 1.0, mxDOUBLE_CLASS,
        (int32_T)((newdim[2] - 1.0) + 1.0), &e_emlrtRTEI, sp);
      k = 0;
      while (k <= (int32_T)((newdim[2] - 1.0) + 1.0) - 1) {
        for (i0 = 0; i0 < 5; i0++) {
          b_pixeli = ((real_T)i - (-2.0 + (real_T)i0)) / 2.0 + 2.0;
          dv1[i0] = b_pixeli;
          pixeli[i0] = b_pixeli;
        }

        b_floor(dv1);
        for (i0 = 0; i0 < 5; i0++) {
          x[i0] = (dv1[i0] == pixeli[i0]);
        }

        idx = 0;
        for (i0 = 0; i0 < 2; i0++) {
          ii_size[i0] = 1 + (i0 << 2);
        }

        ii = 1;
        exitg3 = false;
        while ((!exitg3) && (ii < 6)) {
          guard3 = false;
          if (x[ii - 1]) {
            idx++;
            ii_data[idx - 1] = (int8_T)ii;
            if (idx >= 5) {
              exitg3 = true;
            } else {
              guard3 = true;
            }
          } else {
            guard3 = true;
          }

          if (guard3) {
            ii++;
          }
        }

        if (1 > idx) {
          loop_ub = 0;
        } else {
          loop_ub = idx;
        }

        b_loop_ub = ii_size[0] * loop_ub;
        for (i0 = 0; i0 < b_loop_ub; i0++) {
          idxi_data[i0] = ii_data[i0];
        }

        for (i0 = 0; i0 < 5; i0++) {
          b_pixelj = ((real_T)j - (-2.0 + (real_T)i0)) / 2.0 + 2.0;
          dv1[i0] = b_pixelj;
          pixelj[i0] = b_pixelj;
        }

        b_floor(dv1);
        for (i0 = 0; i0 < 5; i0++) {
          x[i0] = (dv1[i0] == pixelj[i0]);
        }

        idx = 0;
        for (i0 = 0; i0 < 2; i0++) {
          ii_size[i0] = 1 + (i0 << 2);
        }

        ii = 1;
        exitg2 = false;
        while ((!exitg2) && (ii < 6)) {
          guard2 = false;
          if (x[ii - 1]) {
            idx++;
            ii_data[idx - 1] = (int8_T)ii;
            if (idx >= 5) {
              exitg2 = true;
            } else {
              guard2 = true;
            }
          } else {
            guard2 = true;
          }

          if (guard2) {
            ii++;
          }
        }

        if (1 > idx) {
          b_loop_ub = 0;
        } else {
          b_loop_ub = idx;
        }

        c_loop_ub = ii_size[0] * b_loop_ub;
        for (i0 = 0; i0 < c_loop_ub; i0++) {
          idxj_data[i0] = ii_data[i0];
        }

        for (i0 = 0; i0 < 5; i0++) {
          b_pixelk = ((real_T)k - (-2.0 + (real_T)i0)) / 2.0 + 2.0;
          dv1[i0] = b_pixelk;
          pixelk[i0] = b_pixelk;
        }

        b_floor(dv1);
        for (i0 = 0; i0 < 5; i0++) {
          x[i0] = (dv1[i0] == pixelk[i0]);
        }

        idx = 0;
        for (i0 = 0; i0 < 2; i0++) {
          ii_size[i0] = 1 + (i0 << 2);
        }

        ii = 1;
        exitg1 = false;
        while ((!exitg1) && (ii < 6)) {
          guard1 = false;
          if (x[ii - 1]) {
            idx++;
            ii_data[idx - 1] = (int8_T)ii;
            if (idx >= 5) {
              exitg1 = true;
            } else {
              guard1 = true;
            }
          } else {
            guard1 = true;
          }

          if (guard1) {
            ii++;
          }
        }

        if (1 > idx) {
          c_loop_ub = 0;
        } else {
          c_loop_ub = idx;
        }

        if (1 > idx) {
          ii_size[1] = 0;
        } else {
          ii_size[1] = idx;
        }

        ii = ii_size[0] * c_loop_ub;
        for (i0 = 0; i0 < ii; i0++) {
          idxk_data[i0] = ii_data[i0];
        }

        ii = ii_size[1];
        for (i0 = 0; i0 < ii; i0++) {
          for (idx = 0; idx < b_loop_ub; idx++) {
            for (i1 = 0; i1 < loop_ub; i1++) {
              d0 = pixeli[idxi_data[i1] - 1];
              if (d0 == muDoubleScalarFloor(d0)) {
                i2 = (int32_T)d0;
              } else {
                i2 = (int32_T)emlrtIntegerCheckR2012b(d0, &c_emlrtDCI, sp);
              }

              d0 = pixelj[idxj_data[idx] - 1];
              if (d0 == muDoubleScalarFloor(d0)) {
                i3 = (int32_T)d0;
              } else {
                i3 = (int32_T)emlrtIntegerCheckR2012b(d0, &d_emlrtDCI, sp);
              }

              d0 = pixelk[idxk_data[i0] - 1];
              if (d0 == muDoubleScalarFloor(d0)) {
                i4 = (int32_T)d0;
              } else {
                i4 = (int32_T)emlrtIntegerCheckR2012b(d0, &e_emlrtDCI, sp);
              }

              if ((i2 >= 1) && (i2 < 514)) {
                i5 = i2;
              } else {
                i5 = emlrtDynamicBoundsCheckR2012b(i2, 1, 514, &emlrtBCI, sp);
              }

              if ((i3 >= 1) && (i3 < 514)) {
                i6 = i3;
              } else {
                i6 = emlrtDynamicBoundsCheckR2012b(i3, 1, 514, &b_emlrtBCI, sp);
              }

              if ((i4 >= 1) && (i4 < 514)) {
                i7 = i4;
              } else {
                i7 = emlrtDynamicBoundsCheckR2012b(i4, 1, 514, &c_emlrtBCI, sp);
              }

              tmp_data[(i1 + loop_ub * idx) + loop_ub * b_loop_ub * i0] =
                SD->f0.I2[((i5 + 514 * (i6 - 1)) + 264196 * (i7 - 1)) - 1];
            }
          }
        }

        I2_size[0] = loop_ub;
        I2_size[1] = b_loop_ub;
        I2_size[2] = ii_size[1];
        Wt3_size[0] = loop_ub;
        Wt3_size[1] = b_loop_ub;
        Wt3_size[2] = ii_size[1];
        for (i0 = 0; i0 < 3; i0++) {
          I2[i0] = I2_size[i0];
          b_Wt3[i0] = Wt3_size[i0];
        }

        emlrtSizeEqCheckNDR2012b(I2, b_Wt3, &emlrtECI, sp);
        for (i0 = 0; i0 < c_loop_ub; i0++) {
          for (idx = 0; idx < b_loop_ub; idx++) {
            for (i1 = 0; i1 < loop_ub; i1++) {
              A_data[(i1 + loop_ub * idx) + loop_ub * b_loop_ub * i0] =
                tmp_data[(i1 + loop_ub * idx) + loop_ub * b_loop_ub * i0] * Wt3
                [((idxi_data[i1] + 5 * (idxj_data[idx] - 1)) + 25 *
                  (idxk_data[i0] - 1)) - 1];
            }
          }
        }

        A[0] = loop_ub * b_loop_ub * ii_size[1];
        i0 = IResult->size[0];
        idx = IResult->size[1];
        i1 = IResult->size[2];
        if ((i + 1 >= 1) && (i + 1 < i0)) {
          b_i = i + 1;
        } else {
          b_i = emlrtDynamicBoundsCheckR2012b(i + 1, 1, i0, &d_emlrtBCI, sp);
        }

        if ((j + 1 >= 1) && (j + 1 < idx)) {
          b_j = j + 1;
        } else {
          b_j = emlrtDynamicBoundsCheckR2012b(j + 1, 1, idx, &e_emlrtBCI, sp);
        }

        if ((k + 1 >= 1) && (k + 1 < i1)) {
          b_k = k + 1;
        } else {
          b_k = emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &f_emlrtBCI, sp);
        }

        st.site = &emlrtRSI;
        IResult->data[((b_i + IResult->size[0] * (b_j - 1)) + IResult->size[0] *
                       IResult->size[1] * (b_k - 1)) - 1] = 8.0 * sum(&st,
          A_data, A);
        k++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      j++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }
}

/* End of code generation (GPExpand.c) */
