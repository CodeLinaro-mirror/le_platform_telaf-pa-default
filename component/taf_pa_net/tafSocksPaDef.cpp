/*
 *  Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 *  SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#include "tafSocksPa.hpp"

/* Implementation */

pa_result_t PA_WEAK taf_pa_socks_Init()
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_socks_Deinit()
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
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
pa_result_t PA_WEAK taf_pa_net_SetDeviceMode
(
    taf_pa_net_DeviceMode_t deviceMode  ///< [IN] Device mode
)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get device mode
 *
 * @return taf_net_DeviceMode_t          Device mode
 *
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_net_GetDeviceMode
(
    taf_pa_net_DeviceMode_t* deviceModePtr
)
{
    PA_INFO_NOT_IMPLEMENTED();
    if (deviceModePtr) *deviceModePtr = TAF_PA_NET_DEVICE_NONE;
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Set SOCKS authentication method
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_net_SetSocksAuthMethod
(
    taf_pa_net_AuthMethod_t authMethod
)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get SOCKS authentication method
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_net_GetSocksAuthMethod
(
    taf_pa_net_AuthMethod_t* authMethodPtr
)
{
    PA_INFO_NOT_IMPLEMENTED();
    if (authMethodPtr) *authMethodPtr = TAF_PA_NET_SOCKS_UNKNOWN;
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Sets SOCKS LAN interface
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_net_SetSocksLanInterface
(
    const char* ifName
)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Gets SOCKS LAN interface
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_net_GetSocksLanInterface
(
    char* ifName,
    size_t ifNameSize
)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Adds username/profile association
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_net_AddSocksAssociation
(
    const char* userName,
    uint32_t profileId
)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Deletes username/profile association
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_net_RemoveSocksAssociation
(
    const char* userName
)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

/*======================================================================

 FUNCTION        taf_Socks::EnableSocksCmdSync

======================================================================*/
pa_result_t PA_WEAK taf_pa_net_EnableSocksCmdSync()
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

/*======================================================================

 FUNCTION        taf_Socks::DisableSocksCmdSync

======================================================================*/
pa_result_t PA_WEAK taf_pa_net_DisableSocksCmdSync()
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}
/*======================================================================

 FUNCTION        EnableSocksCmdSync

======================================================================*/
pa_result_t PA_WEAK taf_pa_net_EnableSocksCmdASync(taf_pa_socks_CallCb callback,void *contextPtr)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}


/*======================================================================

 FUNCTION        DisableSocksCmdSync


======================================================================*/
pa_result_t PA_WEAK taf_pa_net_DisableSocksCmdASync(taf_pa_socks_CallCb callback,void *contextPtr)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}
