/*
 *  Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 *  SPDX-License-Identifier: BSD-3-Clause-Clear
 */

/**
 * @file taf_pa_dataDef.cpp
 * @brief The APIs implementation interface. From this file the underlying APIs will be called to
 *        perform the required operations.
 *
 * The external APIs call a "weak" API which will be implemented in the actual PA.
 *
 */

#include "legato.h"
#include "taf_pa_data.hpp"

#define TAF_PA_WEAK __attribute__((weak))

//--------------------------------------------------------------------------------------------------
/**
 * Get the Telux data PA state.
 *
 * @return
 *  - LE_OK              PA completely initialized
 *  - LE_UNAVAILABLE     PA not completely initialized. A part of the PA maybe usable. Check state.
 *  - LE_FAULT           PA is not usable due to fatal failure.
 *  - LE_NOT_IMPLEMENTED API is not implemented.
 */
//--------------------------------------------------------------------------------------------------
le_result_t TAF_PA_WEAK taf::pa::data::Init
(
    taf::pa::data::InitState_e &state
        ///< [OUT] The Telux data PA initialization state.
)
{
    LE_DEBUG("Default PA implementation.");
    LE_UNUSED(state);
    return LE_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Deinitialize the Telux data PA state.
 *
 * @return
 *  - LE_OK              PA completely initialized
 */
//--------------------------------------------------------------------------------------------------
le_result_t TAF_PA_WEAK taf::pa::data::Deinit()
{
    LE_DEBUG("Default PA implementation.");
    return LE_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get the Telux data PA initialization state.
 */
//--------------------------------------------------------------------------------------------------
le_result_t TAF_PA_WEAK taf::pa::data::GetInitState
(
    taf::pa::data::InitState_e &state///< [OUT] The Telux data PA initialization state.
)
{
    LE_DEBUG("Default PA implementation.");
    LE_UNUSED(state);
    return LE_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get the phone Ids.
 */
//--------------------------------------------------------------------------------------------------
le_result_t TAF_PA_WEAK taf::pa::data::GetPhoneIds
(
    std::vector<taf::pa::data::PhoneId_e> &phoneIds
        ///< [OUT] The phone IDs.
)
{
    LE_DEBUG("Default PA implementation.");
    LE_UNUSED(phoneIds);
    return LE_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get the SIM slot count.
 */
//--------------------------------------------------------------------------------------------------
le_result_t TAF_PA_WEAK taf::pa::data::GetSimSlotCount
(
    taf::pa::data::SlotCount_e &slotCount
        ///< [OUT] The number of SIM slots.
)
{
    LE_DEBUG("Default PA implementation.");
    LE_UNUSED(slotCount);
    return LE_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get the SIM slot count.
 */
//--------------------------------------------------------------------------------------------------
le_result_t TAF_PA_WEAK taf::pa::data::GetPhoneIdFromSimSlotId
(
    taf::pa::data::SlotId_e slotID,
        ///< [IN] The SIM slot ID.
    taf::pa::data::PhoneId_e& phoneID
        ///< [OUT] The phone ID.
)
{
    LE_DEBUG("Default PA implementation.");
    LE_UNUSED(slotID);
    LE_UNUSED(phoneID);
    return LE_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get the SIM slot count.
 */
//--------------------------------------------------------------------------------------------------
le_result_t TAF_PA_WEAK taf::pa::data::GetSimSlotIdFromPhoneId
(
    taf::pa::data::PhoneId_e phoneID,
        ///< [IN] The phone ID.
    taf::pa::data::SlotId_e& slotID
        ///< [OUT] The SIM slot ID.
)
{
    LE_DEBUG("Default PA implementation.");
    LE_UNUSED(phoneID);
    LE_UNUSED(slotID);
    return LE_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get profiles from the NAD for the specified slot ID.
 *
 * Use context to distinguish between different slots if the same handler is used.
 *
 */
//--------------------------------------------------------------------------------------------------
le_result_t TAF_PA_WEAK taf::pa::data::GetProfilesAsync
(
    taf::pa::data::PhoneId_e phoneId,
    taf_pa_data_profile_GetAllAsyncCb callback,
    void* contextPtr
)
{
    LE_DEBUG("Default PA implementation.");
    LE_UNUSED(phoneId);
    LE_UNUSED(callback);
    LE_UNUSED(contextPtr);
    return LE_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Create a profile
 *
 * On success, the created profile ID will be available.
 *
 */
//--------------------------------------------------------------------------------------------------
le_result_t TAF_PA_WEAK taf::pa::data::CreateProfile
(
    taf::pa::data::PhoneId_e phoneId,
    ///< [IN] The phone id.
    taf::pa::data::ProfileInfo_t profileInfo,
    ///< [IN] The profile information.
    ProfileId_e &profileId
    ///< [OUT] The profile id on success.
)
{
    LE_DEBUG("Default PA implementation.");
    LE_UNUSED(phoneId);
    LE_UNUSED(profileInfo);
    LE_UNUSED(profileId);
    return LE_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Update a profile
 *
 *
 */
//--------------------------------------------------------------------------------------------------
le_result_t TAF_PA_WEAK taf::pa::data::UpdateProfile
(
    taf::pa::data::PhoneId_e phoneId,
    ///< [IN] The phone id.
    taf::pa::data::ProfileInfo_t profileInfo
    ///< [IN] The profile information.
)
{
    LE_DEBUG("Default PA implementation.");
    LE_UNUSED(phoneId);
    LE_UNUSED(profileInfo);
    return LE_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Update a profile
 *
 * Only the phone ID and profile ID are considered in the structure.
 *
 */
//--------------------------------------------------------------------------------------------------
le_result_t TAF_PA_WEAK taf::pa::data::DeleteProfile
(
    taf::pa::data::PhoneId_e phoneId,
    ///< [IN] The phone id.
    taf::pa::data::ProfileInfo_t profileInfo
    ///< [IN] The profile information.
)
{
    LE_DEBUG("Default PA implementation.");
    LE_UNUSED(phoneId);
    LE_UNUSED(profileInfo);
    return LE_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get the default profile
 *
 */
//--------------------------------------------------------------------------------------------------
le_result_t TAF_PA_WEAK taf::pa::data::GetDefaultProfile
(
    taf::pa::data::PhoneId_e phoneId,
    ///< [IN] The profile information.
    taf::pa::data::ProfileId_e &profileId
    ///< [OUT] The default profile ID.
)
{
    LE_DEBUG("Default PA implementation.");
    LE_UNUSED(phoneId);
    LE_UNUSED(profileId);
    return LE_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Set the default profile
 *
 */
//--------------------------------------------------------------------------------------------------
le_result_t TAF_PA_WEAK taf::pa::data::SetDefaultProfile
(
    taf::pa::data::PhoneId_e phoneId,
    ///< [IN] The profile information.
    taf::pa::data::ProfileId_e profileId
    ///< [IN] The default profile ID.
)
{
    LE_DEBUG("Default PA implementation.");
    LE_UNUSED(phoneId);
    LE_UNUSED(profileId);
    return LE_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Register for data call events callback
 */
//--------------------------------------------------------------------------------------------------
le_result_t TAF_PA_WEAK taf::pa::data::AddDataCallEventsCallback
(
    taf_pa_data_CallEventsCb callBack,
        ///< [IN] The callback function.
    std::shared_ptr<void> context,
        ///< [IN] The context pointer.
    uint16_t &id
        ///< [OUT] The ID of the registered callback.
)
{
    LE_DEBUG("Default PA implementation.");
    LE_UNUSED(callBack);
    LE_UNUSED(context);
    LE_UNUSED(id);
    return LE_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Removed a previously registered data call events callback
 */
//--------------------------------------------------------------------------------------------------
le_result_t TAF_PA_WEAK taf::pa::data::RemoveDataCallEventsCallback
(
    uint16_t id
        ///< [IN] The ID of the registered callback.
)
{
    LE_DEBUG("Default PA implementation.");
    LE_UNUSED(id);
    return LE_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Start a data session
 */
//--------------------------------------------------------------------------------------------------
le_result_t TAF_PA_WEAK taf::pa::data::StartDataSessionAsync
(
    const taf::pa::data::DataCallStartStopParams_t& params ///< [IN] The IP type.
)
{
    LE_DEBUG("Default PA implementation.");
    LE_UNUSED(params);
    return LE_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Stop a data session
 */
//--------------------------------------------------------------------------------------------------
le_result_t TAF_PA_WEAK taf::pa::data::StopDataSessionAsync
(
    const taf::pa::data::DataCallStartStopParams_t& params ///< [IN] The IP type.
)
{
    LE_DEBUG("Default PA implementation.");
    LE_UNUSED(params);
    return LE_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Register roaming events callback
 */
//--------------------------------------------------------------------------------------------------
le_result_t TAF_PA_WEAK taf::pa::data::AddRoamingEventsCallback
(
    taf_pa_data_RoamingEventsCb callBack,
        ///< [IN] The callback function.
    std::shared_ptr<void> context,
        ///< [IN] The context pointer.
    uint16_t &id
        ///< [OUT] The ID of the registered callback.
)
{
    LE_DEBUG("Default PA implementation.");
    LE_UNUSED(callBack);
    LE_UNUSED(context);
    LE_UNUSED(id);
    return LE_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Removed a previously registered roaming events callback
 */
//--------------------------------------------------------------------------------------------------
le_result_t TAF_PA_WEAK taf::pa::data::RemoveRoamingEventsCallback
(
    uint16_t id
        ///< [IN] The ID of the registered callback.
)
{
    LE_DEBUG("Default PA implementation.");
    LE_UNUSED(id);
    return LE_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get roaming status. Events will be provided via taf_pa_data_RoamingEventsCb that is registered
 * via AddRoamingEventsCallback()
 *
 * @return LE_OK on success. Wait for callback for final status.
 */
//--------------------------------------------------------------------------------------------------
le_result_t TAF_PA_WEAK taf::pa::data::GetRoamingStatus
(
    const taf::pa::data::PhoneId_e phoneId,
    RoamingStatus_t &roamingStatus
)
{
    LE_DEBUG("Default PA implementation.");
    LE_UNUSED(phoneId);
    LE_UNUSED(roamingStatus);
    return LE_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Register throttled APN events callback
 */
//--------------------------------------------------------------------------------------------------
le_result_t TAF_PA_WEAK taf::pa::data::AddThrottledApnEventsCallback
(
    taf_pa_data_ThrottledApnEventsCb callBack,
        ///< [IN] The callback function.
    std::shared_ptr<void> context,
        ///< [IN] The context pointer.
    uint16_t &id
        ///< [OUT] The ID of the registered callback.
)
{
    LE_DEBUG("Default PA implementation.");
    LE_UNUSED(callBack);
    LE_UNUSED(context);
    LE_UNUSED(id);
    return LE_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Removed a previously registered throttled APN events callback
 */
//--------------------------------------------------------------------------------------------------
le_result_t TAF_PA_WEAK taf::pa::data::RemoveThrottledApnEventsCallback
(
    uint16_t id
        ///< [IN] The ID of the registered callback.
)
{
    LE_DEBUG("Default PA implementation.");
    LE_UNUSED(id);
    return LE_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get throttled APNs information.
 */
//--------------------------------------------------------------------------------------------------
le_result_t TAF_PA_WEAK taf::pa::data::GetThrottledApnInfo
(
    const taf::pa::data::PhoneId_e phoneId,
        ///< [IN] The phone ID.
    std::vector<ThrottledApnEventInfo_t> &throttledApnEventInfoList
        ///< [OUT] The list of throttled APNs info.
)
{
    LE_DEBUG("Default PA implementation.");
    LE_UNUSED(phoneId);
    LE_UNUSED(throttledApnEventInfoList);
    return LE_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Register QoS TFT events callback
 */
//--------------------------------------------------------------------------------------------------
le_result_t TAF_PA_WEAK taf::pa::data::AddQosTftEventsCallback
(
    taf_pa_data_QosTftEventsCb callBack,
        ///< [IN] The callback function.
    std::shared_ptr<void> context,
        ///< [IN] The context pointer.
    uint16_t &id
        ///< [OUT] The ID of the registered callback.
)
{
    LE_DEBUG("Default PA implementation.");
    LE_UNUSED(callBack);
    LE_UNUSED(context);
    LE_UNUSED(id);
    return LE_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Removed a previously registered QoS TFT events callback
 */
//--------------------------------------------------------------------------------------------------
le_result_t TAF_PA_WEAK taf::pa::data::RemoveQosTftEventsCallback
(
    uint16_t id
        ///< [IN] The ID of the registered callback.
)
{
    LE_DEBUG("Default PA implementation.");
    LE_UNUSED(id);
    return LE_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Register HW acceleration change events callback
 */
//--------------------------------------------------------------------------------------------------
le_result_t TAF_PA_WEAK taf::pa::data::AddHwAccelerationChangeEventsCallback
(
    taf_pa_data_HwAccelerationEventsCb callBack,
    ///< [IN] The callback function.
    std::shared_ptr<void> context,
    ///< [IN] The context pointer.
    uint16_t &id
    ///< [OUT] The ID of the registered callback.
)
{
    LE_DEBUG("Default PA implementation.");
    LE_UNUSED(callBack);
    LE_UNUSED(context);
    LE_UNUSED(id);
    return LE_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Removed a previously registered HW acceleration change events callback
 */
//--------------------------------------------------------------------------------------------------
le_result_t TAF_PA_WEAK taf::pa::data::RemoveHwAccelerationChangeEventsCallback
(
    uint16_t id
    ///< [IN] The ID of the registered callback.
)
{
    LE_DEBUG("Default PA implementation.");
    LE_UNUSED(id);
    return LE_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Register SDK callbacks. This is typically not needed as the callbacks will be registered during
 * initialization.
 */
//--------------------------------------------------------------------------------------------------
le_result_t TAF_PA_WEAK taf::pa::data::RegisterSDKCallbacks()
{
    LE_DEBUG("Default PA implementation.");
    return LE_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Deregister SDK callbacks. This is to support the service manage suspend/resume scenarios.
 */
//--------------------------------------------------------------------------------------------------
le_result_t TAF_PA_WEAK taf::pa::data::DeregisterSDKCallbacks()
{
    LE_DEBUG("Default PA implementation.");
    return LE_NOT_IMPLEMENTED;
}

COMPONENT_INIT
{
    LE_INFO("Default Data PA Component Init");
}