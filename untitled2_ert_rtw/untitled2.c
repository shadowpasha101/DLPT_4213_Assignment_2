/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: untitled2.c
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

#include "untitled2.h"
#include "untitled2_types.h"
#include "rtwtypes.h"
#include "untitled2_private.h"

/* Block signals (default storage) */
B_untitled2_T untitled2_B;

/* Block states (default storage) */
DW_untitled2_T untitled2_DW;

/* Real-time model */
static RT_MODEL_untitled2_T untitled2_M_;
RT_MODEL_untitled2_T *const untitled2_M = &untitled2_M_;

/* Model step function */
void untitled2_step(void)
{
  /* MATLABSystem: '<Root>/Analog Input' */
  if (untitled2_DW.obj.SampleTime != untitled2_P.AnalogInput_SampleTime) {
    untitled2_DW.obj.SampleTime = untitled2_P.AnalogInput_SampleTime;
  }

  MW_AnalogIn_Start(untitled2_DW.obj.MW_ANALOGIN_HANDLE);

  /* MATLABSystem: '<Root>/Analog Input' */
  MW_AnalogInSingle_ReadResult(untitled2_DW.obj.MW_ANALOGIN_HANDLE,
    &untitled2_B.AnalogInput, 7);

  {                                    /* Sample time: [0.2s, 0.0s] */
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  untitled2_M->Timing.taskTime0 =
    ((time_T)(++untitled2_M->Timing.clockTick0)) * untitled2_M->Timing.stepSize0;
}

/* Model initialize function */
void untitled2_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(untitled2_M, 10.0);
  untitled2_M->Timing.stepSize0 = 0.2;

  /* External mode info */
  untitled2_M->Sizes.checksums[0] = (154696598U);
  untitled2_M->Sizes.checksums[1] = (3905446050U);
  untitled2_M->Sizes.checksums[2] = (491001028U);
  untitled2_M->Sizes.checksums[3] = (1285057533U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    untitled2_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(untitled2_M->extModeInfo,
      &untitled2_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(untitled2_M->extModeInfo, untitled2_M->Sizes.checksums);
    rteiSetTPtr(untitled2_M->extModeInfo, rtmGetTPtr(untitled2_M));
  }

  {
    MW_AnalogIn_TriggerSource_Type trigger_val;
    uint32_T pinname;
    mbed_AnalogInput_untitled2_T *obj;

    /* Start for MATLABSystem: '<Root>/Analog Input' */
    untitled2_DW.obj.matlabCodegenIsDeleted = true;
    untitled2_DW.obj.isInitialized = 0;
    untitled2_DW.obj.SampleTime = -1.0;
    untitled2_DW.obj.matlabCodegenIsDeleted = false;
    untitled2_DW.obj.SampleTime = untitled2_P.AnalogInput_SampleTime;
    obj = &untitled2_DW.obj;
    untitled2_DW.obj.isSetupComplete = false;
    untitled2_DW.obj.isInitialized = 1;
    pinname = A0;
    obj->MW_ANALOGIN_HANDLE = MW_AnalogInSingle_Open(pinname);
    trigger_val = MW_ANALOGIN_SOFTWARE_TRIGGER;
    MW_AnalogIn_SetTriggerSource(untitled2_DW.obj.MW_ANALOGIN_HANDLE,
      trigger_val, 0U);
    untitled2_DW.obj.isSetupComplete = true;
  }
}

/* Model terminate function */
void untitled2_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Analog Input' */
  if (!untitled2_DW.obj.matlabCodegenIsDeleted) {
    untitled2_DW.obj.matlabCodegenIsDeleted = true;
    if ((untitled2_DW.obj.isInitialized == 1) &&
        untitled2_DW.obj.isSetupComplete) {
      MW_AnalogIn_Stop(untitled2_DW.obj.MW_ANALOGIN_HANDLE);
      MW_AnalogIn_Close(untitled2_DW.obj.MW_ANALOGIN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Analog Input' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
