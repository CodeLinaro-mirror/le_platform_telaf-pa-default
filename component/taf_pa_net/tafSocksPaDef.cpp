/*
 *  Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 *  SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#include "tafSocksPa.hpp"

/* Implementation */

taf_pa_result_t TAF_PA_WEAK taf_pa_socks_Init()
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_socks_Deinit()
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Set device mode
 *
 * @return PA_FAULT                      Failed
 *         PA_BAD_PARAMETER              Invalid deviceMode
 *         PA_OK                         Succeeded
 *
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_net_SetDeviceMode
(
    taf_pa_net_DeviceMode_t deviceMode  ///< [IN] Device mode
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get device mode
 *
 * @return taf_net_DeviceMode_t          Device mode
 *
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_net_GetDeviceMode
(
    taf_pa_net_DeviceMode_t* deviceModePtr
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    if (deviceModePtr) *deviceModePtr = TAF_PA_NET_DEVICE_NONE;
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Set SOCKS authentication method
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_net_SetSocksAuthMethod
(
    taf_pa_net_AuthMethod_t authMethod
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get SOCKS authentication method
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_net_GetSocksAuthMethod
(
    taf_pa_net_AuthMethod_t* authMethodPtr
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    if (authMethodPtr) *authMethodPtr = TAF_PA_NET_SOCKS_UNKNOWN;
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Sets SOCKS LAN interface
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_net_SetSocksLanInterface
(
    const char* ifName
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Gets SOCKS LAN interface
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_net_GetSocksLanInterface
(
    char* ifName,
    size_t ifNameSize
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Adds username/profile association
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_net_AddSocksAssociation
(
    const char* userName,
    uint32_t profileId
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Deletes username/profile association
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_net_RemoveSocksAssociation
(
    const char* userName
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

/*======================================================================

 FUNCTION        taf_Socks::EnableSocksCmdSync

======================================================================*/
taf_pa_result_t TAF_PA_WEAK taf_pa_net_EnableSocksCmdSync()
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

/*======================================================================

 FUNCTION        taf_Socks::DisableSocksCmdSync

======================================================================*/
taf_pa_result_t TAF_PA_WEAK taf_pa_net_DisableSocksCmdSync()
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}
/*======================================================================

 FUNCTION        EnableSocksCmdSync

======================================================================*/
taf_pa_result_t TAF_PA_WEAK taf_pa_net_EnableSocksCmdASync(taf_pa_socks_CallCb callback,void *contextPtr)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}


/*======================================================================

 FUNCTION        DisableSocksCmdSync


======================================================================*/
taf_pa_result_t TAF_PA_WEAK taf_pa_net_DisableSocksCmdASync(taf_pa_socks_CallCb callback,void *contextPtr)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}
