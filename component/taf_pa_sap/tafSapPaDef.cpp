/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#include "tafSapPa.hpp"

//--------------------------------------------------------------------------------------------------
/**
 * Initialize PA SAP
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sap_Init(int slotId)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Deinitialize PA SAP
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sap_Deinit()
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Open SAP connection
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sap_OpenConnection(
    taf_pa_sap_Condition_t sapCondition,
    taf_pa_sap_ResponseCb callback,
    std::any context)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Close SAP connection
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sap_CloseConnection(
    taf_pa_sap_ResponseCb callback,
    std::any context)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Power on the card
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sap_RequestPowerOn(
    taf_pa_sap_ResponseCb callback,
    std::any context)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Power off the card
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sap_RequestPowerOff(
    taf_pa_sap_ResponseCb callback,
    std::any context)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Reset the card
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sap_RequestReset(
    taf_pa_sap_ResponseCb callback,
    std::any context)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Transfer APDU to card
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sap_TransmitApdu(
    uint8_t apduId,
    uint8_t cla,
    uint8_t instruction,
    uint8_t p1,
    uint8_t p2,
    uint8_t lc,
    const std::vector<uint8_t>& data,
    uint8_t le,
    taf_pa_sap_ApduResponseCb callback,
    std::any context)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Request ATR from card
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sap_RequestAtr(
    taf_pa_sap_AtrResponseCb callback,
    std::any context)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Request card reader status
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sap_RequestCardReaderStatus(
    taf_pa_sap_CardReaderResponseCb callback,
    std::any context)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Request SAP connection state (asynchronous)
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sap_RequestState(
    taf_pa_sap_StateResponseCb callback,
    std::any context)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}
