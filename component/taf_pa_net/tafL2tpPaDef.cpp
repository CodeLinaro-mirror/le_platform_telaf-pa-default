/*
 *  Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 *  SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#include "tafL2tpPa.hpp"

/* Implementation */

taf_pa_result_t TAF_PA_WEAK taf_pa_l2tp_Init()
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_l2tp_Deinit()
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Add Tunnel Asynchronously
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_net_AddTunnelAsync
(
    const taf_pa_net_L2tpTunnel_t& addTunnelConfig,   // IN
    taf_pa_l2tp_CallCb callback,           // IN
    void* contextPtr                    // IN
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Add Tunnel Synchronously
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_net_AddTunnelSync
(
    const taf_pa_net_L2tpTunnel_t& addTunnelConfig   // IN
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Remove Tunnel Asynchronously
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_net_RemoveTunnelAsync
(
    const uint32_t tunnelId,   // IN
    taf_pa_l2tp_CallCb callback,          // IN
    void* contextPtr                    // IN
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Remove Tunnel Synchronously
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_net_RemoveTunnelSync
(
    const uint32_t tunnelId   // IN
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Request L2TP Configuration
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_net_RequestL2tpConfig
(
    taf_pa_net_L2tpConfig_t& L2tpConfig  // OUT
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Set L2TP Configuration Asynchronously
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_net_SetL2tpConfigAsync
(
    const taf_pa_net_L2tpConfig_t& L2tpConfig,  // IN
    taf_pa_l2tp_CallCb callback,        // IN
    void* contextPtr                                   // IN
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Set L2TP Configuration Synchronously
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_net_SetL2tpConfigSync
(
    taf_pa_net_L2tpConfig_t& L2tpConfig  // IN
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}
