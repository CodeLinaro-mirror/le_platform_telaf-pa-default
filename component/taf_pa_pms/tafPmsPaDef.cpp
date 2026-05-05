/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#include "tafPmsPa.hpp"

pa_result_t PA_WEAK taf_pa_pms_Init
(
    taf_pa_pms_Reference_t  *paRefPtr,
    SendEventFunc_t          fnSendEvent,
    uint32_t                 timeoutMs
)
{
    PA_INFO("[DEF PA] NOT implemented");
    return PA_NOT_IMPLEMENTED;
}

void PA_WEAK taf_pa_pms_Deinit
(
    taf_pa_pms_Reference_t   *paRefPtr
)
{
    PA_INFO("[DEF PA] NOT implemented");
}

pa_result_t PA_WEAK taf_pa_pms_SetPowerStateAsMaster
(
    taf_pa_pms_Reference_t    paRef,
    taf_pa_pms_PowerState_t   state,
    const char               *name
)
{
    PA_INFO("[DEF PA] NOT implemented");
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_pms_SendAckForStateUpdate
(
    taf_pa_pms_Reference_t    paRef,
    taf_pa_pms_PowerState_t   state,
    taf_pa_pms_Ack_t          ack
)
{
    PA_INFO("[DEF PA] NOT implemented");
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_pms_GetAllMachineNames
(
    taf_pa_pms_Reference_t    paRef,
    std::vector<std::string> &machineNames
)
{
    PA_INFO("[DEF PA] NOT implemented");
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_pms_SetModemWakeupFilter
(
    taf_pa_pms_Reference_t    paRef,
    uint32_t                  wsBitmask
)
{
    PA_INFO("[DEF PA] NOT implemented");
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_pms_GetModemWakeupFilter
(
    taf_pa_pms_Reference_t    paRef,
    uint32_t                 *wsBitmaskPtr
)
{
    PA_INFO("[DEF PA] NOT implemented");
    return PA_NOT_IMPLEMENTED;
}
