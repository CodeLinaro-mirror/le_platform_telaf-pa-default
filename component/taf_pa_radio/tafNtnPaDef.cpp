/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#include "tafNtnPa.hpp"

pa_result_t PA_WEAK taf_pa_ntn_Init
(
    void
)
{
    PA_INFO("Function is not implemented in default PA.");

    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_ntn_Deinit
(
    void
)
{
    PA_INFO("Default platform adapter deinitialization");
    // No managers to clean up in default implementation
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_ntn_IsNtnSupported
(
    uint32_t instance,
    bool* isSupportedPtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_ntn_EnableNtn
(
    uint32_t instance,
    bool enable,
    bool isEmergency
)
{
    PA_INFO("Function is not implemented in default PA.");

    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_ntn_GetNtnCapabilities
(
    uint32_t instance,
    taf_pa_ntn_NtnCapabilities_t* capabilitiesPtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_ntn_GetSignalStrength
(
    uint32_t instance,
    taf_pa_ntn_SignalStrength_t* signalStrengthPtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_ntn_GetNtnState
(
    uint32_t instance,
    taf_pa_ntn_State_t* statePtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_ntn_AddSignalStrengthChangeHandler
(
    uint32_t instance,
    taf_pa_ntn_SignalStrengthChangeHdlrFunc_t handlerFuncPtr,
    void* contextPtr,
    taf_pa_ntn_SignalStrengthChangeHandlerRef_t* handlerRefPtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_ntn_RemoveSignalStrengthChangeHandler
(
    uint32_t instance,
    taf_pa_ntn_SignalStrengthChangeHandlerRef_t handlerRefPtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_ntn_AddNtnStateChangeHandler
(
    uint32_t instance,
    taf_pa_ntn_NtnStateChangeHdlrFunc_t handlerFuncPtr,
    void* contextPtr,
    taf_pa_ntn_NtnStateChangeHandlerRef_t* handlerRefPtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_ntn_RemoveNtnStateChangeHandler
(
    uint32_t instance,
    taf_pa_ntn_NtnStateChangeHandlerRef_t handlerRefPtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_ntn_AddDataAckHandler
(
    uint32_t instance,
    taf_pa_ntn_DataAckHdlrFunc_t handlerFuncPtr,
    void* contextPtr,
    taf_pa_ntn_DataAckHandlerRef_t* handlerRefPtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_ntn_RemoveDataAckHandler
(
    uint32_t instance,
    taf_pa_ntn_DataAckHandlerRef_t handlerRefPtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_ntn_SendData
(
    uint32_t instance,
    uint8_t* data,
    uint32_t size,
    bool isEmergency,
    uint64_t* transactionIdPtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_ntn_EnableCellularScan
(
    uint32_t instance,
    bool enable
)
{
    PA_INFO("Function is not implemented in default PA.");

    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_ntn_UpdateSystemSelectionSpecifiers
(
    uint32_t instance,
    const taf_pa_ntn_SystemSelectionSpecifier_t* specifierPtr,
    uint32_t specifierCount
)
{
    PA_INFO("Function is not implemented in default PA.");

    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_ntn_AbortData
(
    uint32_t instance
)
{
    PA_INFO("Function is not implemented in default PA.");

    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_ntn_SetLocationFix
(
    uint32_t instance,
    const taf_pa_ntn_LocationFix_t* locationFixPtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_ntn_LocationFixResponse
(
    uint32_t instance,
    taf_pa_ntn_LocationStatus_t status,
    uint64_t waitTime
)
{
    PA_INFO("Function is not implemented in default PA.");

    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_ntn_AddIncomingDataHandler
(
    uint32_t instance,
    taf_pa_ntn_IncomingDataHdlrFunc_t handlerFuncPtr,
    void* contextPtr,
    taf_pa_ntn_IncomingDataHandlerRef_t* handlerRefPtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_ntn_RemoveIncomingDataHandler
(
    uint32_t instance,
    taf_pa_ntn_IncomingDataHandlerRef_t handlerRefPtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_ntn_AddCapabilitiesChangeHandler
(
    uint32_t instance,
    taf_pa_ntn_CapabilitiesChangeHdlrFunc_t handlerFuncPtr,
    void* contextPtr,
    taf_pa_ntn_CapabilitiesChangeHandlerRef_t* handlerRefPtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_ntn_RemoveCapabilitiesChangeHandler
(
    uint32_t instance,
    taf_pa_ntn_CapabilitiesChangeHandlerRef_t handlerRefPtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_ntn_AddServiceStatusChangeHandler
(
    uint32_t instance,
    taf_pa_ntn_ServiceStatusChangeHdlrFunc_t handlerFuncPtr,
    void* contextPtr,
    taf_pa_ntn_ServiceStatusChangeHandlerRef_t* handlerRefPtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_ntn_RemoveServiceStatusChangeHandler
(
    uint32_t instance,
    taf_pa_ntn_ServiceStatusChangeHandlerRef_t handlerRefPtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_ntn_AddCellularCoverageAvailableHandler
(
    uint32_t instance,
    taf_pa_ntn_CellularCoverageAvailableHdlrFunc_t handlerFuncPtr,
    void* contextPtr,
    taf_pa_ntn_CellularCoverageAvailableHandlerRef_t* handlerRefPtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_ntn_RemoveCellularCoverageAvailableHandler
(
    uint32_t instance,
    taf_pa_ntn_CellularCoverageAvailableHandlerRef_t handlerRefPtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_ntn_AddLocationFixRequestHandler
(
    uint32_t instance,
    taf_pa_ntn_LocationFixRequestHdlrFunc_t handlerFuncPtr,
    void* contextPtr,
    taf_pa_ntn_LocationFixRequestHandlerRef_t* handlerRefPtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_ntn_RemoveLocationFixRequestHandler
(
    uint32_t instance,
    taf_pa_ntn_LocationFixRequestHandlerRef_t handlerRefPtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_ntn_AddNtnBandUpdateHandler
(
    uint32_t instance,
    taf_pa_ntn_NtnBandUpdateHdlrFunc_t handlerFuncPtr,
    void* contextPtr,
    taf_pa_ntn_NtnBandUpdateHandlerRef_t* handlerRefPtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_ntn_RemoveNtnBandUpdateHandler
(
    uint32_t instance,
    taf_pa_ntn_NtnBandUpdateHandlerRef_t handlerRefPtr
)
{
    PA_INFO("Function is not implemented in default PA.");

    return PA_NOT_IMPLEMENTED;
}
