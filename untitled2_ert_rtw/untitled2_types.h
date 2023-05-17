/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: untitled2_types.h
 *
 * Code generated for Simulink model 'untitled2'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
 * C/C++ source code generated on : Wed May 17 14:57:12 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_untitled2_types_h_
#define RTW_HEADER_untitled2_types_h_
#include "rtwtypes.h"
#include "MW_SVD.h"

/* Model Code Variants */

/* Custom Type definition for MATLABSystem: '<Root>/Analog Input' */
#include "MW_SVD.h"
#ifndef struct_tag_p5Oj7yF0nd6COoUgI0GAlG
#define struct_tag_p5Oj7yF0nd6COoUgI0GAlG

struct tag_p5Oj7yF0nd6COoUgI0GAlG
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  MW_Handle_Type MW_ANALOGIN_HANDLE;
  real_T SampleTime;
};

#endif                                 /* struct_tag_p5Oj7yF0nd6COoUgI0GAlG */

#ifndef typedef_mbed_AnalogInput_untitled2_T
#define typedef_mbed_AnalogInput_untitled2_T

typedef struct tag_p5Oj7yF0nd6COoUgI0GAlG mbed_AnalogInput_untitled2_T;

#endif                                /* typedef_mbed_AnalogInput_untitled2_T */

/* Parameters (default storage) */
typedef struct P_untitled2_T_ P_untitled2_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_untitled2_T RT_MODEL_untitled2_T;

#endif                                 /* RTW_HEADER_untitled2_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
