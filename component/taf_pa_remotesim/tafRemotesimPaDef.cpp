/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#include "tafRemotesimPa.hpp"

//--------------------------------------------------------------------------------------------------
/**
 * Initialize PA RemoteSim
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_remotesim_Init(int slotId)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Deinitialize PA RemoteSim
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_remotesim_Deinit()
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Register event listener for RemoteSim events
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_remotesim_RegisterEventListener(
    taf_pa_remotesim_EventListener* eventListener,
    std::any context)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Deregister event listener for RemoteSim events
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_remotesim_DeregisterEventListener()
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Send connection available notification
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_remotesim_SendConnectionAvailable(
    taf_pa_remotesim_ResponseCb callback,
    std::any context)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Send connection unavailable notification
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_remotesim_SendConnectionUnavailable(
    taf_pa_remotesim_ResponseCb callback,
    std::any context)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Send APDU to modem
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_remotesim_SendApdu(
    unsigned int id,
    const std::vector<uint8_t>& apdu,
    bool isSuccess,
    uint32_t totalSize,
    uint32_t offset,
    taf_pa_remotesim_ResponseCb callback,
    std::any context)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Send card reset notification
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_remotesim_SendCardReset(
    const std::vector<uint8_t>& atr,
    taf_pa_remotesim_ResponseCb callback,
    std::any context)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Send card inserted notification
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_remotesim_SendCardInserted(
    const std::vector<uint8_t>& atr,
    taf_pa_remotesim_ResponseCb callback,
    std::any context)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Send card removed notification
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_remotesim_SendCardRemoved(
    taf_pa_remotesim_ResponseCb callback,
    std::any context)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Send card error notification
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_remotesim_SendCardError(
    taf_pa_remotesim_CardErrorCause_t errorCause,
    taf_pa_remotesim_ResponseCb callback,
    std::any context)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Send card wakeup notification
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_remotesim_SendCardWakeup(
    taf_pa_remotesim_ResponseCb callback,
    std::any context)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Send reset notification
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_remotesim_SendReset(
    taf_pa_remotesim_ResponseCb callback,
    std::any context)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}
