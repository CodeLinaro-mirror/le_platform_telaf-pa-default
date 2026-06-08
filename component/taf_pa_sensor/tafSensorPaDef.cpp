/*
 *  Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 *  SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#include "tafSensorPa.hpp"

/* Implementation */
using namespace tafpa::sensor;

PA_SHARED PA_WEAK pa_result_t tafpa::sensor::taf_pa_sensor_Init(int8_t& listSize)
{
    PA_INFO_NOT_IMPLEMENTED();
    listSize = 0;
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK tafpa::sensor::taf_pa_sensor_Deinit()
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

PA_SHARED PA_WEAK pa_result_t tafpa::sensor::taf_pa_sensor_GetSensorInfo(
    int8_t index,
    taf_pa_sensor_BasicInfo &basicInfo,
    taf_pa_sensor_ConfigInfo &configInfo,
    taf_pa_sensor_Capabilities &capabilities
)
{
    PA_INFO_NOT_IMPLEMENTED();
    (void)index;
    basicInfo.id = 0;
    basicInfo.version = 0;
    basicInfo.sensorType = taf_pa_sensor_SensorType::INVALID;
    basicInfo.sensorName = "";
    basicInfo.vendorName = "";
    configInfo.samplingRateList.clear();
    configInfo.maxSamplingRate = 0.0;
    configInfo.maxBatchCount = 0;
    configInfo.minBatchCount = 0;
    capabilities.range = 0;
    capabilities.resolution = 0.0;
    capabilities.maxRange = 0.0;
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

PA_SHARED PA_WEAK pa_result_t tafpa::sensor::taf_pa_sensor_GetSensorClient(const std::string& sensorName, taf_pa_sensor_SensorId& sensorId)
{
    PA_INFO_NOT_IMPLEMENTED();
    (void)sensorName;
    sensorId = 0;
    return PA_NOT_IMPLEMENTED;
}

PA_SHARED PA_WEAK pa_result_t tafpa::sensor::taf_pa_sensor_ReleaseSensorClient(taf_pa_sensor_SensorId sensorId)
{
    PA_INFO_NOT_IMPLEMENTED();
    (void)sensorId;
    return PA_NOT_IMPLEMENTED;
}

PA_SHARED PA_WEAK pa_result_t tafpa::sensor::taf_pa_sensor_SetConfig(
    taf_pa_sensor_SensorId sensorId,
    double samplingRate,
    uint32_t batchCount
)
{
    PA_INFO_NOT_IMPLEMENTED();
    (void)sensorId;
    (void)samplingRate;
    (void)batchCount;
    return PA_NOT_IMPLEMENTED;
}

PA_SHARED PA_WEAK pa_result_t tafpa::sensor::taf_pa_sensor_Activate(taf_pa_sensor_SensorId sensorId)
{
    PA_INFO_NOT_IMPLEMENTED();
    (void)sensorId;
    return PA_NOT_IMPLEMENTED;
}

PA_SHARED PA_WEAK pa_result_t tafpa::sensor::taf_pa_sensor_SetEulerAngle(
    taf_pa_sensor_SensorId sensorId,
    double pitch,
    double roll,
    double yaw
)
{
    PA_INFO_NOT_IMPLEMENTED();
    (void)sensorId;
    (void)pitch;
    (void)roll;
    (void)yaw;
    return PA_NOT_IMPLEMENTED;
}

PA_SHARED PA_WEAK pa_result_t tafpa::sensor::taf_pa_sensor_Deactivate(taf_pa_sensor_SensorId sensorId)
{
    PA_INFO_NOT_IMPLEMENTED();
    (void)sensorId;
    return PA_NOT_IMPLEMENTED;
}

PA_SHARED PA_WEAK pa_result_t tafpa::sensor::taf_pa_sensor_SelfTestAsync(
    taf_pa_sensor_SensorId sensorId,
    taf_pa_sensor_SelfTestMode mode,
    taf_pa_sensor_SelfTestResultCb callback,
    std::any context
)
{
    PA_INFO_NOT_IMPLEMENTED();
    (void)sensorId;
    (void)mode;
    (void)callback;
    (void)context;
    return PA_NOT_IMPLEMENTED;
}

PA_SHARED PA_WEAK pa_result_t tafpa::sensor::taf_pa_sensor_AddListener(
    taf_pa_sensor_SensorId sensorId,
    taf_pa_sensor_EventListener* eventListener,
    std::any context
)
{
    PA_INFO_NOT_IMPLEMENTED();
    (void)sensorId;
    (void)eventListener;
    (void)context;
    return PA_NOT_IMPLEMENTED;
}
PA_SHARED PA_WEAK pa_result_t tafpa::sensor::taf_pa_sensor_RemoveListener(
    taf_pa_sensor_SensorId sensorId
)
{
    PA_INFO_NOT_IMPLEMENTED();
    (void)sensorId;
    return PA_NOT_IMPLEMENTED;
}

PA_SHARED PA_WEAK pa_result_t tafpa::sensor::taf_pa_sensor_AddConfigUpdateHandler(
    taf_pa_sensor_SensorId sensorId,
    taf_pa_sensor_ConfigUpdateCb callback,
    std::any context
)
{
    PA_INFO_NOT_IMPLEMENTED();
    (void)sensorId;
    (void)callback;
    (void)context;
    return PA_NOT_IMPLEMENTED;
}

PA_SHARED PA_WEAK pa_result_t tafpa::sensor::taf_pa_sensor_RemoveConfigUpdateHandler(
    taf_pa_sensor_SensorId sensorId
)
{
    PA_INFO_NOT_IMPLEMENTED();
    (void)sensorId;
    return PA_NOT_IMPLEMENTED;
}

PA_SHARED PA_WEAK pa_result_t tafpa::sensor::taf_pa_sensor_AddCapabilityHandler(
    taf_pa_sensor_SensorId sensorId,
    taf_pa_sensor_CapabilityCb callback,
    std::any context
)
{
    PA_INFO_NOT_IMPLEMENTED();
    (void)sensorId;
    (void)callback;
    (void)context;
    return PA_NOT_IMPLEMENTED;
}

PA_SHARED PA_WEAK pa_result_t tafpa::sensor::taf_pa_sensor_RemoveCapabilityHandler(
    taf_pa_sensor_SensorId sensorId
)
{
    PA_INFO_NOT_IMPLEMENTED();
    (void)sensorId;
    return PA_NOT_IMPLEMENTED;
}
