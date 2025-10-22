/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#include <errno.h>

#include "taf_pa_radio.hpp"

pa_result_t taf_pa_radio_Init
(
    void
)
{
    PA_INFO("Function is not implemented in default PA.");

    return -ENOSYS;
}

pa_result_t taf_pa_radio_GetOperatingMode
(
    uint32_t instance,
    taf_pa_radio_OperatingMode_t* modePtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return -ENOSYS;
}

pa_result_t taf_pa_radio_RegisterIndication
(
    uint32_t instance,
    uint8_t registration
)
{
    PA_INFO("Function is not implemented in default PA.");

    return -ENOSYS;
}

pa_result_t taf_pa_radio_PerformPciNetworkScan
(
    uint32_t instance,
    taf_pa_radio_RatBitMask_t bitmask,
    taf_pa_radio_PciScanInformation_t* informationPtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return -ENOSYS;
}

pa_result_t taf_pa_radio_GetServingRat
(
    uint32_t instance,
    taf_pa_radio_Rat_t* ratPtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return -ENOSYS;
}

pa_result_t taf_pa_radio_GetRatSvcStatus
(
    uint32_t instance,
    taf_pa_radio_Rat_t rat,
    taf_pa_radio_RatServiceStatus_t* statusPtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return -ENOSYS;
}

pa_result_t taf_pa_radio_GetServingCellRac
(
    uint32_t instance,
    taf_pa_radio_Rat_t rat,
    uint8_t* racPtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return -ENOSYS;
}

pa_result_t taf_pa_radio_GetDataAvailSysStatus
(
    uint32_t instance,
    taf_pa_radio_DataAvailSysStatus_t* statusPtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return -ENOSYS;
}

pa_result_t taf_pa_radio_GetLteCphyCaInfo
(
    uint32_t instance,
    taf_pa_radio_LteCphyCaInfo_t* infoPtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return -ENOSYS;
}

taf_pa_radio_RatSvcStatusHandlerRef_t taf_pa_radio_AddRatSvcStatusHandler
(
    uint32_t instance,
    taf_pa_radio_RatSvcStatusHdlrFunc_t handlerFuncPtr,
    void* contextPtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return nullptr;
}

taf_pa_radio_LteCphyCaHandlerRef_t taf_pa_radio_AddLteCphyCaHandler
(
    uint32_t instance,
    taf_pa_radio_LteCphyCaHdlrFunc_t handlerFuncPtr,
    void* contextPtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return nullptr;
}

taf_pa_radio_DataAvailSysStatusHandlerRef_t taf_pa_radio_AddDataAvailSysStatusHandler
(
    uint32_t instance,
    taf_pa_radio_DataAvailSysStatusHdlrFunc_t handlerFuncPtr,
    void* contextPtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return nullptr;
}

pa_result_t taf_pa_radio_GetDataCurrRoamingStatus
(
    uint32_t instance,
    taf_pa_radio_DataRoamingStatus_t* statusPtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return -ENOSYS;
}