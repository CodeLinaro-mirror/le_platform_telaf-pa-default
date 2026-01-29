/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#include "taf_pa_sim.hpp"

//--------------------------------------------------------------------------------------------------
/**
 *  SIM refresh register.
 */
//--------------------------------------------------------------------------------------------------
pa_result_t taf_pa_sim_RefreshRegister
(
    taf_pa_sim_SessionType_t sessionType,
    uint32_t filesLen,
    taf_pa_sim_RefreshFile_t* files
)
{
    PA_INFO("Function is not implemented in stub PA.");
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 *  SIM refresh ok.
 */
//--------------------------------------------------------------------------------------------------
pa_result_t taf_pa_sim_RefreshOk
(
    taf_pa_sim_SessionType_t sessionType,
    bool* refreshAllow
)
{
    PA_INFO("Function is not implemented in stub PA.");
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 *  SIM refresh complete.
 */
//--------------------------------------------------------------------------------------------------
pa_result_t taf_pa_sim_RefreshComplete
(
    taf_pa_sim_SessionType_t sessionType
)
{   PA_INFO("Function is not implemented in stub PA.");
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Add handler for SIM refresh
 */
//--------------------------------------------------------------------------------------------------
taf_pa_sim_RefreshChangeHandlerRef_t taf_pa_sim_AddRefreshChangeHandler
(
    taf_pa_sim_RefreshChangeHandlerFunc_t handlerFuncPtr,
    void* contextPtr
)
{
	PA_INFO("Function is not implemented in stub PA.");
    return NULL;
}

//--------------------------------------------------------------------------------------------------
/**
 * Remove handler for SIM refresh
 */
//--------------------------------------------------------------------------------------------------
void taf_pa_sim_RemoveRefreshChangeHandler
(
    taf_pa_sim_RefreshChangeHandlerRef_t handlerRef ///< [IN] Handler reference.
)
{
    PA_INFO("Function is not implemented in stub PA.");
    return;
}
//--------------------------------------------------------------------------------------------------
/**
 * Initialize PA SIM
 */
//--------------------------------------------------------------------------------------------------
pa_result_t taf_pa_sim_Init
(

)
{
    PA_INFO("Function is not implemented in stub PA");
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}

uint8_t taf_pa_sim_GetProfileNum
(
    taf_pa_sim_SlotId_t slot
)
{
    PA_INFO("Function is not implemented in stub PA.");
    (void)slot;  // suppress unused warning
    return 0;
}

taf_pa_sim_ProfileInfo_t taf_pa_sim_GetProfile
(
    taf_pa_sim_SlotId_t slot,
    uint8_t index
)
{
    PA_INFO("Function is not implemented in stub PA.");
    (void)slot;
    (void)index;

    taf_pa_sim_ProfileInfo_t info;
    info.profileId = TAF_PA_SIM_PROFILE_ID_UNKNOWN;
    info.type      = TAF_PA_SIM_PROFILE_TYPE_UNKNOWN;
    info.state     = TAF_PA_SIM_PROFILE_STATE_UNKNOWN;
    return info;
}

pa_result_t taf_pa_sim_SetActiveProfile
(
    taf_pa_sim_SlotId_t slot,
    taf_pa_sim_ProfileId_t profileId
)
{
    PA_INFO("Function is not implemented in stub PA.");
    (void)slot;
    (void)profileId;
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}
