/*
 *  Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 *  SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#include "legato.h"
#include "interfaces.h"
#include "tafSvcIF.hpp"
#include "taf_pa_sensor.hpp"

/* Implementation */

TAF_PA_WEAK le_result_t taf_pa_sensor_Init(int8_t& listSize)
{
    LE_INFO("Default platform adatper implementation");
    return LE_NOT_IMPLEMENTED;
}

TAF_PA_WEAK taf_pa_sensor_Ref_t taf_pa_sensor_CreateReference(const char* sensorName)
{
    LE_INFO("Default platform adatper implementation");
    return nullptr;
}

TAF_PA_WEAK le_result_t taf_pa_sensor_DeleteReference(taf_pa_sensor_Ref_t reference)
{
    LE_INFO("Default platform adatper implementation");
    return LE_NOT_IMPLEMENTED;
}

TAF_PA_WEAK le_result_t taf_pa_sensor_GetSensorInfo(int8_t index,taf_pa_sensor_basicInfo_t&
    basicInfo, taf_pa_sensor_configInfo_t& configInfo,taf_pa_sensor_capabilities_t& Capabilities)
{
    LE_INFO("Default platform adatper implementation");
    return LE_NOT_IMPLEMENTED;
}

TAF_PA_WEAK le_result_t taf_pa_sensor_Activate(taf_pa_sensor_Ref_t reference,
    double sampleRate,uint32_t batchCount,bool isRotated)
{
    LE_INFO("Default platform adatper implementation");
    return LE_NOT_IMPLEMENTED;
}

TAF_PA_WEAK le_result_t taf_pa_sensor_Deactivate(taf_pa_sensor_Ref_t reference)
{
    LE_INFO("Default platform adatper implementation");
    return LE_NOT_IMPLEMENTED;
}

TAF_PA_WEAK le_result_t taf_pa_sensor_SelfTest(taf_pa_sensor_Ref_t reference,taf_pa_sensor_testmode_t mode,
    taf_pa_sensor_SelfTestResultCb callback,void* contextPtr)
{
    LE_INFO("Default platform adatper implementation");
    return LE_NOT_IMPLEMENTED;
}

TAF_PA_WEAK le_result_t taf_pa_sensor_SetEulerAngle(taf_pa_sensor_Ref_t reference,
    double pitch,double roll, double yaw)
{
    LE_INFO("Default platform adatper implementation");
    return LE_NOT_IMPLEMENTED;
}

TAF_PA_WEAK le_result_t taf_pa_sensor_RegisterListener(taf_pa_sensor_Ref_t reference,
    taf_pa_sensor_EventListener* eventListener,void *contextPtr)
{
    LE_INFO("Default platform adatper implementation");
    return LE_NOT_IMPLEMENTED;
}

COMPONENT_INIT
{
    LE_INFO("Default platform adapter intialization done");
}