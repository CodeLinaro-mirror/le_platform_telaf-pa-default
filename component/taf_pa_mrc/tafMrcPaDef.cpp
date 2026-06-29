/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#include <errno.h>

#include "tafMrcPa.hpp"

taf_pa_result_t TAF_PA_WEAK taf_pa_mrc_Init
(
    void
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();

    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_mrc_Deinit
(
    void
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_mrc_RegisterIndication
(
    uint8_t registration
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();

    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_mrc_SetProcessStatus
(
    taf_pa_mrc_Process_t process,
    taf_pa_mrc_Status_t status
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();

    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_mrc_AddProcessStatusHandler
(
    taf_pa_mrc_ProcessStatusHdlrFunc_t handlerFuncPtr,
    void* contextPtr,
    taf_pa_mrc_ProcessStatusHandlerRef_t* handlerRefPtr
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    (void)handlerFuncPtr;
    (void)contextPtr;
    if (handlerRefPtr) *handlerRefPtr = nullptr;
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_mrc_GetEfsPeStatus
(
    taf_pa_mrc_EfsPeStatus_t* statusPtr
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();

    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_mrc_GetEfsBlockStatus
(
    taf_pa_mrc_EfsBlockStatus_t* statusPtr
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();

    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_mrc_GetEfsUsageStats
(
    taf_pa_mrc_EfsUsageStats_t* statsPtr
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();

    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_mrc_SetTimerPeriod
(
    taf_pa_mrc_Timer_t timer,
    uint32_t period
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();

    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_mrc_PerformABSync
(
    void
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();

    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_mrc_AddScrubStatusHandler
(
    taf_pa_mrc_ScrubStatusHdlrFunc_t handlerFuncPtr,
    void* contextPtr,
    taf_pa_mrc_ScrubStatusHandlerRef_t* handlerRefPtr
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    (void)handlerFuncPtr;
    (void)contextPtr;
    if (handlerRefPtr) *handlerRefPtr = nullptr;
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_mrc_AckSlotToggle
(
    int32_t success
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();

    return TAF_PA_NOT_IMPLEMENTED;
}
