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
pa_result_t PA_WEAK taf_pa_sim_RefreshRegister
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
pa_result_t PA_WEAK taf_pa_sim_RefreshOk
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
pa_result_t PA_WEAK taf_pa_sim_RefreshComplete
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
taf_pa_sim_RefreshChangeHandlerRef_t PA_WEAK taf_pa_sim_AddRefreshChangeHandler
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
pa_result_t PA_WEAK taf_pa_sim_RemoveRefreshChangeHandler
(
    taf_pa_sim_RefreshChangeHandlerRef_t handlerRef ///< [IN] Handler reference.
)
{
    PA_INFO("Function is not implemented in stub PA.");
    return PA_NOT_IMPLEMENTED;
}
//--------------------------------------------------------------------------------------------------
/**
 * Initialize PA SIM
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sim_Init
(

)
{
    PA_INFO("Function is not implemented in stub PA");
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_sim_Deinit
(
    void
)
{
    PA_INFO("Default platform adapter deinitialization");
    // No managers to clean up in default implementation
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_sim_GetProfileNum
(
    taf_pa_sim_SlotId_t slot,
    uint8_t* profileNumPtr
)
{
    PA_INFO("Function is not implemented in stub PA.");
    (void)slot;
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_sim_GetProfile
(
    taf_pa_sim_SlotId_t slot,
    uint8_t index,
    taf_pa_sim_ProfileInfo_t* profileInfoPtr
)
{
    PA_INFO("Function is not implemented in stub PA.");
    (void)slot;
    (void)index;
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_sim_SetActiveProfile
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
//--------------------------------------------------------------------------------------------------
/**
 * Register subscription, card and multi sim listeners
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sim_RegisterListeners
(
)
{
    PA_INFO("Function is not implemented in stub PA");
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Deregister subscription, card and multi sim listeners
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sim_DeregisterListeners
(
)
{
    PA_INFO("Function is not implemented in stub PA");
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}




//--------------------------------------------------------------------------------------------------
/**
 * Get Iccid.
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sim_GetIccid
(
    taf_pa_sim_Id_t simId,
    std::string& iccIdStr
)
{
    PA_INFO("Function is not implemented in stub PA");
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get subscriber phone number.
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sim_GetSubscriberPhoneNumber
(
    taf_pa_sim_Id_t simId,
    std::string& phoneNumber
)
{
    PA_INFO("Function is not implemented in stub PA");
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get IMSI.
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sim_GetImsi
(
    taf_pa_sim_Id_t simId,
    std::string& imsi
)
{
    PA_INFO("Function is not implemented in stub PA");
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get carrier name.
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sim_GetCarrierName
(
    taf_pa_sim_Id_t simId,
    std::string& nameString
)
{
    PA_INFO("Function is not implemented in stub PA");
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get home network MCC/MNC.
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sim_GetHomeNetworkMccMnc
(
    taf_pa_sim_Id_t simId,
    int* mcc,
    int* mnc
)
{
    PA_INFO("Function is not implemented in stub PA");
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}


//--------------------------------------------------------------------------------------------------
/**
 * Get home network MCC/MNC.
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sim_GetHomeNetworkMccMncStr
(
    taf_pa_sim_Id_t simId,
    std::string& mcc,
    std::string& mnc
)
{
    PA_INFO("Function is not implemented in stub PA");
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get sim slot count.
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sim_getSlotCount
(
    int* count
)
{
    PA_INFO("Function is not implemented in stub PA");
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get sim state.
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sim_GetState
(
    taf_pa_sim_Id_t simId,
    taf_pa_sim_States_t* state
)
{
    PA_INFO("Function is not implemented in stub PA");
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * set power state.
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sim_SetPower
(
    taf_pa_sim_Id_t simId,
    taf_pa_sim_power_state_t powerState
)
{
    PA_INFO("Function is not implemented in stub PA");
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Check if multisim sub system is ready or not.
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sim_IsSubsystemReady
(
    bool* isReady
)
{
    PA_INFO("Function is not implemented in stub PA");
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Select sim slot.
 *
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sim_selectSimSlot
(
    taf_pa_sim_Id_t simId
)
{
    PA_INFO("Function is not implemented in stub PA");
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Change sim card pin.
 *
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sim_ChangeCardPin
(
    taf_pa_sim_LockType_t lockType,
    const char* oldpinPtr,
    const char* newpinPtr,
    taf_pa_sim_GeneralCb callback,
    std::any context
)
{
    PA_INFO("Function is not implemented in stub PA");
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Unlock sim card by Pin.
 *
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sim_UnlockCardByPin
(
    taf_pa_sim_LockType_t lockType,
    const char* pinPtr,
    taf_pa_sim_GeneralCb callback,
    std::any context
)
{
    PA_INFO("Function is not implemented in stub PA");
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Unlock sim card by Puk.
 *
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sim_UnlockCardByPuk
(
    taf_pa_sim_LockType_t lockType,
    const char* pukPtr,
    const char* newpinPtr,
    taf_pa_sim_GeneralCb callback,
    std::any context
)
{
    PA_INFO("Function is not implemented in stub PA");
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Set SIM card lock.
 *
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sim_SetCardLock
(
    taf_pa_sim_LockType_t lockType,
    const char* pinPtr,
    taf_pa_sim_GeneralCb callback,
    std::any context
)
{
    PA_INFO("Function is not implemented in stub PA");
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Unlocks the SIM card and disables the lock request of PIN1/PIN2.
 *
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sim_SetCardUnLock
(
    taf_pa_sim_LockType_t lockType,
    const char* pinPtr,
    taf_pa_sim_GeneralCb callback,
    std::any context
)
{
    PA_INFO("Function is not implemented in stub PA");
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get SIM app types.
 *
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sim_GetAppTypes
(
    taf_pa_sim_AppType_t* appTypePtr,
    size_t* appTypeNumElementsPtr
)
{
    PA_INFO("Function is not implemented in stub PA");
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Open logical channel.
 *
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sim_OpenLogicalChannel
(
    taf_pa_sim_AppType_t appType,
    uint8_t* channelPtr,
    taf_pa_sim_GeneralCb callback,
    std::any context
)
{
    PA_INFO("Function is not implemented in stub PA");
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Open logical channel by Aid.
 *
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sim_OpenLogicalChannelByAid
(
    const char* aid,
    uint8_t* channelIdPtr,
    taf_pa_sim_GeneralCb callback,
    std::any context
)
{
    PA_INFO("Function is not implemented in stub PA");
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Close logical channel.
 *
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sim_CloseLogicalChannel
(
    uint8_t channelId,
    taf_pa_sim_GeneralCb callback,
    std::any context
)
{
    PA_INFO("Function is not implemented in stub PA");
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}


//--------------------------------------------------------------------------------------------------
/**
 * Send APDU on channel.
 *
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sim_SendApduOnLogicalChannel
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
    PA_INFO("Function is not implemented in stub PA");
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Send APDU.
 *
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sim_SendApdu
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
    PA_INFO("Function is not implemented in stub PA");
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Send Command.
 *
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sim_ExchangeSimIO
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
    PA_INFO("Function is not implemented in stub PA");
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Register event listeners.
 *
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sim_RegisterEventListener
(
    taf_pa_sim_EventListener* eventListener,
    std::any context
)
{
    PA_INFO("Function is not implemented in stub PA");
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get remaining PIN retries.
 *
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sim_GetRemainingPINTries
(
    taf_pa_sim_Id_t simId,
    int32_t* retryCount
)
{
    PA_INFO("Function is not implemented in stub PA");
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get Remaining PUK tries.
 *
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_sim_GetRemainingPukTries
(
    taf_pa_sim_Id_t simId,
    uint32_t* remainingPukTries
)
{
    PA_INFO("Function is not implemented in stub PA");
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}

//----------------------------------------------------------------------------------------------
/**
 * Get EID string.
 */
//----------------------------------------------------------------------------------------------
pa_result_t taf_pa_sim_GetEID
(
    taf_pa_sim_Id_t simId,
    std::string&  eidStr
)
{
    PA_INFO("Function is not implemented in stub PA");
    return TAF_PA_SIM_RESULT_NOT_IMPLEMENTED;
}
