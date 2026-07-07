/*
 *  Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 *  SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#include "tafL2tpPa.hpp"

/* Implementation */

pa_result_t PA_WEAK taf_pa_l2tp_Init()
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_l2tp_Deinit()
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Add Tunnel Asynchronously
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_net_AddTunnelAsync
(
    const taf_pa_net_L2tpTunnel_t& addTunnelConfig,   // IN
    taf_pa_l2tp_CallCb callback,           // IN
    void* contextPtr                    // IN
)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Add Tunnel Synchronously
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_net_AddTunnelSync
(
    const taf_pa_net_L2tpTunnel_t& addTunnelConfig   // IN
)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Remove Tunnel Asynchronously
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_net_RemoveTunnelAsync
(
    const uint32_t tunnelId,   // IN
    taf_pa_l2tp_CallCb callback,          // IN
    void* contextPtr                    // IN
)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Remove Tunnel Synchronously
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_net_RemoveTunnelSync
(
    const uint32_t tunnelId   // IN
)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Request L2TP Configuration
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_net_RequestL2tpConfig
(
    taf_pa_net_L2tpConfig_t& L2tpConfig  // OUT
)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Set L2TP Configuration Asynchronously
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_net_SetL2tpConfigAsync
(
    const taf_pa_net_L2tpConfig_t& L2tpConfig,  // IN
    taf_pa_l2tp_CallCb callback,        // IN
    void* contextPtr                                   // IN
)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Set L2TP Configuration Synchronously
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_net_SetL2tpConfigSync
(
    taf_pa_net_L2tpConfig_t& L2tpConfig  // IN
)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}
