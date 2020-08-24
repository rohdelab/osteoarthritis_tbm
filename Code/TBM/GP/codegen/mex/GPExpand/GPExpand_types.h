/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * GPExpand_types.h
 *
 * Code generation for function 'GPExpand'
 *
 */

#ifndef __GPEXPAND_TYPES_H__
#define __GPEXPAND_TYPES_H__

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_GPExpandStackData
#define typedef_GPExpandStackData

typedef struct {
  struct {
    real_T I2[135796744];
    real_T b_I2[264196];
    real_T c_I2[264196];
    real_T d_I2[264196];
    real_T e_I2[264196];
  } f0;
} GPExpandStackData;

#endif                                 /*typedef_GPExpandStackData*/

#ifndef struct_emxArray__common
#define struct_emxArray__common

struct emxArray__common
{
  void *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray__common*/

#ifndef typedef_emxArray__common
#define typedef_emxArray__common

typedef struct emxArray__common emxArray__common;

#endif                                 /*typedef_emxArray__common*/

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/
#endif

/* End of code generation (GPExpand_types.h) */
