/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause-Clear
 */

/**
 * @file taf_pa_therm.cpp
 * @brief Default stub Platform Adapter implementation for Thermal Service
 */

#include "tafThermPa.hpp"

//--------------------------------------------------------------------------------------------------
/**
 * Initialize the thermal PA layer
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_therm_Init(void)
{
    PA_INFO("Default platform adapter PA_NOT_IMPLEMENTED");
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_therm_Deinit(void)
{
    PA_INFO("Default platform adapter deinitialization");
    // No managers to clean up in default implementation
    return PA_OK;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get list of all thermal zones
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_therm_GetThermalZones(std::vector<taf_pa_therm_ThermalZoneInfo>& thermalZones)
{
    PA_INFO("Default platform adapter PA_NOT_IMPLEMENTED");
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get thermal zone by ID
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_therm_GetThermalZoneById(uint32_t zoneId, taf_pa_therm_ThermalZoneInfo& zoneInfo)
{
    PA_INFO("Default platform adapter PA_NOT_IMPLEMENTED");
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get thermal zone by name
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_therm_GetThermalZoneByName(
    const std::string& zoneName,
    taf_pa_therm_ThermalZoneInfo& zoneInfo
)
{
    PA_INFO("Default platform adapter PA_NOT_IMPLEMENTED");
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get trip points for a thermal zone
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_therm_GetTripPoints(
    uint32_t zoneId,
    std::vector<taf_pa_therm_TripPointInfo>& tripPoints
)
{
    PA_INFO("Default platform adapter PA_NOT_IMPLEMENTED");
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get bound cooling devices for a thermal zone
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_therm_GetBoundCoolingDevices(
    uint32_t zoneId,
    std::vector<taf_pa_therm_BoundCoolingDevice>& boundDevices
)
{
    PA_INFO("Default platform adapter PA_NOT_IMPLEMENTED");
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get list of all cooling devices
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_therm_GetCoolingDevices(
    std::vector<taf_pa_therm_CoolingDeviceInfo>& coolingDevices
)
{
    PA_INFO("Default platform adapter PA_NOT_IMPLEMENTED");
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get cooling device by ID
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_therm_GetCoolingDeviceById(
    uint32_t deviceId,
    taf_pa_therm_CoolingDeviceInfo& deviceInfo
)
{
    PA_INFO("Default platform adapter PA_NOT_IMPLEMENTED");
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get cooling device by name
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_therm_GetCoolingDeviceByName(
    const std::string& deviceName,
    taf_pa_therm_CoolingDeviceInfo& deviceInfo
)
{
    PA_INFO("Default platform adapter PA_NOT_IMPLEMENTED");
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Register trip event handler
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_therm_RegisterTripEventHandler(
    taf_pa_therm_TripEventHandler_t handler,
    void* contextPtr
)
{
    PA_INFO("Default platform adapter PA_NOT_IMPLEMENTED");
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Deregister trip event handler
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_therm_DeregisterTripEventHandler(void)
{
    PA_INFO("Default platform adapter PA_NOT_IMPLEMENTED");
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Register cooling level change handler
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_therm_RegisterCoolingLevelChangeHandler(
    taf_pa_therm_CoolingLevelChangeHandler_t handler,
    void* contextPtr
)
{
    PA_INFO("Default platform adapter PA_NOT_IMPLEMENTED");
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Deregister cooling level change handler
 */
//--------------------------------------------------------------------------------------------------
pa_result_t PA_WEAK taf_pa_therm_DeregisterCoolingLevelChangeHandler(void)
{
    PA_INFO("Default platform adapter PA_NOT_IMPLEMENTED");
    return PA_NOT_IMPLEMENTED;
}
