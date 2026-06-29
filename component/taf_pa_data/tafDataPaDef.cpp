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

#include "tafDataPa.hpp"

#define PA_UNUSED(x) (void)(x)

//--------------------------------------------------------------------------------------------------
/**
 * Get the Telux data PA state.
 *
 * @return
 *  - PA_OK              PA completely initialized
 *  - PA_UNAVAILABLE     PA not completely initialized. A part of the PA maybe usable. Check state.
 *  - PA_FAULT           PA is not usable due to fatal failure.
 *  - TAF_PA_NOT_IMPLEMENTED API is not implemented.
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::Init
(
    SubsystemState_e &state
        ///< [OUT] The Telux data PA initialization state.
)
{
    PA_UNUSED(state);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Deinitialize the Telux data PA state.
 *
 * @return
 *  - PA_OK              PA completely initialized
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::Deinit()
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get the Telux data PA initialization state.
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::GetSubsystemState
(
    taf::pa::data::PhoneId_e phoneId,
    ///< [IN] The phone ID.
    taf::pa::data::Subsystem_e subsystem,
    ///< [IN] The subsystem.
    taf::pa::data::SubsystemState_e &state
    ///< [OUT] The subsystem initialization state.
)
{
    PA_UNUSED(phoneId);
    PA_UNUSED(subsystem);
    PA_UNUSED(state);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get the phone Ids.
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::GetPhoneIds
(
    std::vector<taf::pa::data::PhoneId_e> &phoneIds
        ///< [OUT] The phone IDs.
)
{
    PA_UNUSED(phoneIds);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get the SIM slot count.
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::GetSimSlotCount
(
    taf::pa::data::SlotCount_e &slotCount
        ///< [OUT] The number of SIM slots.
)
{
    PA_UNUSED(slotCount);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get the SIM slot count.
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::GetPhoneIdFromSimSlotId
(
    taf::pa::data::SlotId_e slotID,
        ///< [IN] The SIM slot ID.
    taf::pa::data::PhoneId_e& phoneID
        ///< [OUT] The phone ID.
)
{
    PA_UNUSED(slotID);
    PA_UNUSED(phoneID);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get the SIM slot count.
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::GetSimSlotIdFromPhoneId
(
    taf::pa::data::PhoneId_e phoneID,
        ///< [IN] The phone ID.
    taf::pa::data::SlotId_e& slotID
        ///< [OUT] The SIM slot ID.
)
{
    PA_UNUSED(phoneID);
    PA_UNUSED(slotID);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get profiles from the NAD for the specified slot ID.
 *
 * Use context to distinguish between different slots if the same handler is used.
 *
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::GetProfilesAsync
(
    taf::pa::data::PhoneId_e phoneId,
    taf_pa_data_profile_GetAllAsyncCb callback,
    void* contextPtr
)
{
    PA_UNUSED(phoneId);
    PA_UNUSED(callback);
    PA_UNUSED(contextPtr);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get details of the specified profile.
 *
 * Set ProfileInfo_t::profileId to the desired profile ID.
 * Set ProfileInfo_t::techPref to 3GPP or 3GPP2. If unspecified, 3GPP will be used.
 *
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::GetProfileInfo
(
    PhoneId_e phoneId,
    ///< [IN] The phone id.
    ProfileInfo_t &profileInfo
    ///< [IN/OUT] The profile information.
)
{
    PA_UNUSED(phoneId);
    PA_UNUSED(profileInfo);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Create a profile
 *
 * On success, the created profile ID will be available.
 *
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::CreateProfile
(
    taf::pa::data::PhoneId_e phoneId,
    ///< [IN] The phone id.
    taf::pa::data::ProfileInfo_t profileInfo,
    ///< [IN] The profile information.
    ProfileId_e &profileId
    ///< [OUT] The profile id on success.
)
{
    PA_UNUSED(phoneId);
    PA_UNUSED(profileInfo);
    PA_UNUSED(profileId);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Update a profile
 *
 *
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::UpdateProfile
(
    taf::pa::data::PhoneId_e phoneId,
    ///< [IN] The phone id.
    taf::pa::data::ProfileInfo_t profileInfo
    ///< [IN] The profile information.
)
{
    PA_UNUSED(phoneId);
    PA_UNUSED(profileInfo);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Update a profile
 *
 * Only the phone ID and profile ID are considered in the structure.
 *
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::DeleteProfile
(
    taf::pa::data::PhoneId_e phoneId,
    ///< [IN] The phone id.
    taf::pa::data::ProfileInfo_t profileInfo
    ///< [IN] The profile information.
)
{
    PA_UNUSED(phoneId);
    PA_UNUSED(profileInfo);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get the default profile
 *
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::GetDefaultProfile
(
    taf::pa::data::PhoneId_e phoneId,
    ///< [IN] The profile information.
    taf::pa::data::ProfileId_e &profileId
    ///< [OUT] The default profile ID.
)
{
    PA_UNUSED(phoneId);
    PA_UNUSED(profileId);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Set the default profile
 *
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::SetDefaultProfile
(
    taf::pa::data::PhoneId_e phoneId,
    ///< [IN] The profile information.
    taf::pa::data::ProfileId_e profileId
    ///< [IN] The default profile ID.
)
{
    PA_UNUSED(phoneId);
    PA_UNUSED(profileId);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Register for data call events callback
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::AddDataCallEventsCallback
(
    taf_pa_data_CallEventsCb callBack,
        ///< [IN] The callback function.
    std::shared_ptr<void> context,
        ///< [IN] The context pointer.
    uint16_t &id
        ///< [OUT] The ID of the registered callback.
)
{
    PA_UNUSED(callBack);
    PA_UNUSED(context);
    PA_UNUSED(id);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Removed a previously registered data call events callback
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::RemoveDataCallEventsCallback
(
    uint16_t id
        ///< [IN] The ID of the registered callback.
)
{
    PA_UNUSED(id);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Start a data session
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::StartDataSessionAsync
(
    const taf::pa::data::DataCallStartStopParams_t& params ///< [IN] The IP type.
)
{
    PA_UNUSED(params);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Stop a data session
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::StopDataSessionAsync
(
    const taf::pa::data::DataCallStartStopParams_t& params ///< [IN] The IP type.
)
{
    PA_UNUSED(params);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Request list of all active data calls. Events will be provided via taf_pa_data_RequestCallListCb.
 *
 * @return TAF_PA_OK on success. Wait for callback for final status.
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::RequestDataCallsListAsync
(
    PhoneId_e phoneId,
                ///< [IN] The phone ID.
    taf_pa_data_RequestCallListCb callBack,
                ///< [IN] The callback function.
    std::shared_ptr<void> context
                ///< [IN] The context pointer.
)
{
    PA_UNUSED(phoneId);
    PA_UNUSED(callBack);
    PA_UNUSED(context);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Register roaming events callback
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::AddRoamingEventsCallback
(
    taf_pa_data_RoamingEventsCb callBack,
        ///< [IN] The callback function.
    std::shared_ptr<void> context,
        ///< [IN] The context pointer.
    uint16_t &id
        ///< [OUT] The ID of the registered callback.
)
{
    PA_UNUSED(callBack);
    PA_UNUSED(context);
    PA_UNUSED(id);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Removed a previously registered roaming events callback
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::RemoveRoamingEventsCallback
(
    uint16_t id
        ///< [IN] The ID of the registered callback.
)
{
    PA_UNUSED(id);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get roaming status. Events will be provided via taf_pa_data_RoamingEventsCb that is registered
 * via AddRoamingEventsCallback()
 *
 * @return PA_OK on success. Wait for callback for final status.
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::GetRoamingStatus
(
    const taf::pa::data::PhoneId_e phoneId,
    RoamingStatus_t &roamingStatus
)
{
    PA_UNUSED(phoneId);
    PA_UNUSED(roamingStatus);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Register throttled APN events callback
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::AddThrottledApnEventsCallback
(
    taf_pa_data_ThrottledApnEventsCb callBack,
        ///< [IN] The callback function.
    std::shared_ptr<void> context,
        ///< [IN] The context pointer.
    uint16_t &id
        ///< [OUT] The ID of the registered callback.
)
{
    PA_UNUSED(callBack);
    PA_UNUSED(context);
    PA_UNUSED(id);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Removed a previously registered throttled APN events callback
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::RemoveThrottledApnEventsCallback
(
    uint16_t id
        ///< [IN] The ID of the registered callback.
)
{
    PA_UNUSED(id);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get throttled APNs information.
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::GetThrottledApnInfo
(
    const taf::pa::data::PhoneId_e phoneId,
        ///< [IN] The phone ID.
    std::vector<ThrottledApnEventInfo_t> &throttledApnEventInfoList
        ///< [OUT] The list of throttled APNs info.
)
{
    PA_UNUSED(phoneId);
    PA_UNUSED(throttledApnEventInfoList);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Register QoS TFT events callback
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::AddQosTftEventsCallback
(
    taf_pa_data_QosTftEventsCb callBack,
        ///< [IN] The callback function.
    std::shared_ptr<void> context,
        ///< [IN] The context pointer.
    uint16_t &id
        ///< [OUT] The ID of the registered callback.
)
{
    PA_UNUSED(callBack);
    PA_UNUSED(context);
    PA_UNUSED(id);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Removed a previously registered QoS TFT events callback
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::RemoveQosTftEventsCallback
(
    uint16_t id
        ///< [IN] The ID of the registered callback.
)
{
    PA_UNUSED(id);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Register HW acceleration change events callback
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::AddHwAccelerationChangeEventsCallback
(
    taf_pa_data_HwAccelerationEventsCb callBack,
    ///< [IN] The callback function.
    std::shared_ptr<void> context,
    ///< [IN] The context pointer.
    uint16_t &id
    ///< [OUT] The ID of the registered callback.
)
{
    PA_UNUSED(callBack);
    PA_UNUSED(context);
    PA_UNUSED(id);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Removed a previously registered HW acceleration change events callback
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::RemoveHwAccelerationChangeEventsCallback
(
    uint16_t id
    ///< [IN] The ID of the registered callback.
)
{
    PA_UNUSED(id);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Register profile change events callback
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::AddProfileEventsCallback
(
    taf_pa_data_ProfileEventsCb callBack,
        ///< [IN] The callback function.
    std::shared_ptr<void> context,
        ///< [IN] The context pointer.
    uint16_t &id
        ///< [OUT] The ID of the registered callback.
)
{
    PA_UNUSED(callBack);
    PA_UNUSED(context);
    PA_UNUSED(id);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Removed a previously registered profile  events callback
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::RemoveProfileEventsCallback
(
    uint16_t id
        ///< [IN] The ID of the registered callback.
)
{
    PA_UNUSED(id);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Register roaming events callback
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::AddSubsystemStateChangeCallback
(
    taf_pa_data_SubsystemStateChangeCb callBack,
    ///< [IN] The callback function.
    std::shared_ptr<void> context,
    ///< [IN] The context pointer.
    uint16_t &id
    ///< [OUT] The ID of the registered callback.
)
{
    PA_UNUSED(callBack);
    PA_UNUSED(context);
    PA_UNUSED(id);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Removed a previously registered subsystem state change callback
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::RemoveSubsystemStateChangeCallback
(
    uint16_t id
        ///< [IN] The ID of the registered callback.
)
{
    PA_UNUSED(id);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Register SDK callbacks. This is typically not needed as the callbacks will be registered during
 * initialization.
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::RegisterSDKCallbacks()
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Deregister SDK callbacks. This is to support the service manage suspend/resume scenarios.
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::DeregisterSDKCallbacks()
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Set the throughput report interval.
 *
 * Configure the interval for generating periodic uplink and downlink throughput reports.
 * The minimum allowed interval is 50 ms. Passing a value of 0 disables generation
 * of throughput reports. The application of this interval is a global setting.
 *
 * @return
 *  - PA_OK              Successfully set the interval
 *  - PA_BAD_PARAMETER   Invalid parameters
 *  - PA_FAULT           Failed to set the interval
 *  - PA_TIMEOUT         Operation timed out
 *  - TAF_PA_NOT_IMPLEMENTED API is not implemented
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::SetThroughputReportInterval
(
    PhoneId_e phoneId,
        ///< [IN] The phone ID.
    uint32_t reportInterval
        ///< [IN] The throughput report interval in milliseconds (min 50ms, 0 to disable).
)
{
    PA_UNUSED(phoneId);
    PA_UNUSED(reportInterval);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get the last throughput information for all active profiles.
 *
 * Retrieves the most recent uplink and downlink throughput information for all active data
 * profiles on the specified phone.
 *
 * @return
 *  - PA_OK              Successfully retrieved throughput information
 *  - PA_BAD_PARAMETER   Invalid parameters
 *  - PA_FAULT           Failed to retrieve throughput information
 *  - PA_TIMEOUT         Operation timed out
 *  - TAF_PA_NOT_IMPLEMENTED API is not implemented
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::GetLastThroughputInfo
(
    PhoneId_e phoneId,
        ///< [IN] The phone ID.
    std::vector<ThroughputInfo_t> &throughputInfoList
        ///< [OUT] The list of throughput information for all active profiles.
)
{
    PA_UNUSED(phoneId);
    PA_UNUSED(throughputInfoList);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Register throughput events callback.
 *
 * Register a callback to receive periodic throughput information updates. The callback will be
 * invoked at the interval configured via SetThroughputReportInterval().
 *
 * @return
 *  - PA_OK              Successfully registered callback
 *  - PA_BAD_PARAMETER   Invalid parameters (e.g., null callback)
 *  - PA_FAULT           Failed to register with TelSDK
 *  - TAF_PA_NOT_IMPLEMENTED API is not implemented
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::AddThroughputEventsCallback
(
    taf_pa_data_ThroughputEventsCb callBack,
        ///< [IN] The callback function.
    std::shared_ptr<void> context,
        ///< [IN] The context pointer.
    uint16_t &id
        ///< [OUT] The ID of the registered callback.
)
{
    PA_UNUSED(callBack);
    PA_UNUSED(context);
    PA_UNUSED(id);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Remove a previously registered throughput events callback.
 *
 * Unregister a callback that was previously registered via AddThroughputEventsCallback().
 *
 * @return
 *  - PA_OK              Successfully removed callback
 *  - PA_NOT_FOUND       Callback with specified ID not found
 *  - PA_FAULT           Failed to deregister from TelSDK
 *  - TAF_PA_NOT_IMPLEMENTED API is not implemented
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::RemoveThroughputEventsCallback
(
    uint16_t id
        ///< [IN] The ID of the registered callback.
)
{
    PA_UNUSED(id);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get the MTU (Maximum Transmission Unit) for a network interface.
 *
 * @return
 *  - PA_OK              Successfully retrieved MTU
 *  - PA_BAD_PARAMETER   Invalid parameters (e.g., empty interfaceName)
 *  - PA_FAULT           Failed to retrieve MTU
 *  - TAF_PA_NOT_IMPLEMENTED API is not implemented
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf::pa::data::GetMtu
(
    const std::string& interfaceName,
        ///< [IN] The network interface name.
    int32_t& mtu
        ///< [OUT] The MTU value in bytes.
)
{
    PA_UNUSED(interfaceName);
    PA_UNUSED(mtu);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}
