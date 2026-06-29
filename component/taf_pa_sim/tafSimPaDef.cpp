/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#include "tafSimPa.hpp"
#include <string>

//--------------------------------------------------------------------------------------------------
/**
 *  SIM refresh register.
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_RefreshRegister
(
    taf_pa_sim_SessionType_t sessionType,
    uint32_t filesLen,
    taf_pa_sim_RefreshFile_t* files
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 *  SIM refresh unregister.
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_RefreshUnregister
(
    taf_pa_sim_SessionType_t sessionType,
    uint32_t filesLen,
    taf_pa_sim_RefreshFile_t* files
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 *  SIM refresh ok.
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_RefreshOk
(
    taf_pa_sim_SessionType_t sessionType,
    bool* refreshAllow
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 *  SIM refresh complete.
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_RefreshComplete
(
    taf_pa_sim_SessionType_t sessionType
)
{   TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Add handler for SIM refresh
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_AddRefreshChangeHandler
(
    taf_pa_sim_RefreshChangeHandlerFunc_t handlerFuncPtr,
    void* contextPtr,
    taf_pa_sim_RefreshChangeHandlerRef_t* handlerRefPtr
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Remove handler for SIM refresh
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_RemoveRefreshChangeHandler
(
    taf_pa_sim_RefreshChangeHandlerRef_t handlerRef ///< [IN] Handler reference.
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}
//--------------------------------------------------------------------------------------------------
/**
 * Initialize PA SIM
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_Init
(

)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_sim_Deinit
(
    void
)
{
    // No managers to clean up in default implementation
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_sim_GetProfileNum
(
    taf_pa_sim_SlotId_t slot,
    uint8_t* profileNumPtr
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    (void)slot;
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_sim_GetProfile
(
    taf_pa_sim_SlotId_t slot,
    uint8_t index,
    taf_pa_sim_ProfileInfo_t* profileInfoPtr
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    (void)slot;
    (void)index;
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_sim_SetActiveProfile
(
    taf_pa_sim_SlotId_t slot,
    taf_pa_sim_ProfileId_t profileId
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    (void)slot;
    (void)profileId;
    return TAF_PA_NOT_IMPLEMENTED;
}
//--------------------------------------------------------------------------------------------------
/**
 * Register subscription, card and multi sim listeners
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_RegisterListeners
(
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Deregister subscription, card and multi sim listeners
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_DeregisterListeners
(
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}




//--------------------------------------------------------------------------------------------------
/**
 * Get Iccid.
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_GetIccid
(
    taf_pa_sim_Id_t simId,
    std::string& iccIdStr
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get subscriber phone number.
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_GetSubscriberPhoneNumber
(
    taf_pa_sim_Id_t simId,
    std::string& phoneNumber
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get IMSI.
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_GetImsi
(
    taf_pa_sim_Id_t simId,
    std::string& imsi
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get carrier name.
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_GetCarrierName
(
    taf_pa_sim_Id_t simId,
    std::string& nameString
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get home network MCC/MNC.
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_GetHomeNetworkMccMnc
(
    taf_pa_sim_Id_t simId,
    int* mcc,
    int* mnc
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}


//--------------------------------------------------------------------------------------------------
/**
 * Get home network MCC/MNC.
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_GetHomeNetworkMccMncStr
(
    taf_pa_sim_Id_t simId,
    std::string& mcc,
    std::string& mnc
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get sim slot count.
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_getSlotCount
(
    int* count
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get sim state.
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_GetState
(
    taf_pa_sim_Id_t simId,
    taf_pa_sim_States_t* state
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * set power state.
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_SetPower
(
    taf_pa_sim_Id_t simId,
    taf_pa_sim_power_state_t powerState
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Check if multisim sub system is ready or not.
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_IsSubsystemReady
(
    bool* isReady
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Select sim slot.
 *
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_selectSimSlot
(
    taf_pa_sim_Id_t simId
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Change sim card pin.
 *
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_ChangeCardPin
(
    taf_pa_sim_LockType_t lockType,
    const char* oldpinPtr,
    const char* newpinPtr,
    taf_pa_sim_GeneralCb callback,
    std::any context
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Unlock sim card by Pin.
 *
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_UnlockCardByPin
(
    taf_pa_sim_LockType_t lockType,
    const char* pinPtr,
    taf_pa_sim_GeneralCb callback,
    std::any context
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Unlock sim card by Puk.
 *
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_UnlockCardByPuk
(
    taf_pa_sim_LockType_t lockType,
    const char* pukPtr,
    const char* newpinPtr,
    taf_pa_sim_GeneralCb callback,
    std::any context
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Set SIM card lock.
 *
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_SetCardLock
(
    taf_pa_sim_LockType_t lockType,
    const char* pinPtr,
    taf_pa_sim_GeneralCb callback,
    std::any context
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Unlocks the SIM card and disables the lock request of PIN1/PIN2.
 *
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_SetCardUnLock
(
    taf_pa_sim_LockType_t lockType,
    const char* pinPtr,
    taf_pa_sim_GeneralCb callback,
    std::any context
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get SIM app types.
 *
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_GetAppTypes
(
    taf_pa_sim_AppType_t* appTypePtr,
    size_t* appTypeNumElementsPtr
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Open logical channel.
 *
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_OpenLogicalChannel
(
    taf_pa_sim_AppType_t appType,
    uint8_t* channelPtr,
    taf_pa_sim_GeneralCb callback,
    std::any context
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Open logical channel by Aid.
 *
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_OpenLogicalChannelByAid
(
    const char* aid,
    uint8_t* channelIdPtr,
    taf_pa_sim_GeneralCb callback,
    std::any context
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Close logical channel.
 *
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_CloseLogicalChannel
(
    uint8_t channelId,
    taf_pa_sim_GeneralCb callback,
    std::any context
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}


//--------------------------------------------------------------------------------------------------
/**
 * Send APDU on channel.
 *
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_SendApduOnLogicalChannel
(
    uint8_t channel,
    uint8_t* responseApduPtr,
    size_t* responseApduNumElementsPtr,
    uint8_t p1, uint8_t p2, uint8_t p3,
    uint8_t cla, uint8_t instruction,
    std::vector<uint8_t> data,
    taf_pa_sim_GeneralCb callback,
    std::any context
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Send APDU.
 *
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_SendApdu
(
    uint8_t* responseApduPtr,
    size_t* responseApduNumElementsPtr,
    uint8_t p1, uint8_t p2, uint8_t p3,
    uint8_t cla, uint8_t instruction,
    std::vector<uint8_t> data,
    taf_pa_sim_GeneralCb callback,
    std::any context
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Send Command.
 *
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_ExchangeSimIO
(
    taf_pa_sim_Command_t command,
    uint8_t *p1, uint8_t *p2,
    uint8_t *p3, const uint8_t* dataPtr,
    size_t dataNumElements,const char* pathPtr,
    uint8_t *sw1,uint8_t *sw2,
    uint8_t* responsePtr, size_t* responseNumElementsPtr,
    uint16_t field,
    taf_pa_sim_GeneralCb callback,
    std::any context
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Register event listeners.
 *
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_RegisterEventListener
(
    taf_pa_sim_EventListener* eventListener,
    std::any context
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get remaining PIN retries.
 *
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_GetRemainingPINTries
(
    taf_pa_sim_Id_t simId,
    int32_t* retryCount
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get Remaining PUK tries.
 *
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_sim_GetRemainingPukTries
(
    taf_pa_sim_Id_t simId,
    uint32_t* remainingPukTries
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//----------------------------------------------------------------------------------------------
/**
 * Get EID string.
 */
//----------------------------------------------------------------------------------------------
taf_pa_result_t taf_pa_sim_GetEID
(
    taf_pa_sim_Id_t simId,
    std::string&  eidStr
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}
