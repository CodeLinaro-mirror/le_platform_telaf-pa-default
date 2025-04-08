/*
 *  Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 *  SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#ifndef __TAF_PA_SENSOR_HPP__

#define __TAF_PA_SENSOR_HPP__

#ifndef TAF_PA_WEAK
#define TAF_PA_WEAK __attribute__((weak))
#endif

#define PA_MAX_LEN_BYTE 50

//--------------------------------------------------------------------------------------------------
/**
 * Sensor Type.
 */
//--------------------------------------------------------------------------------------------------
typedef enum{
    TAF_PA_SENSOR_ACCELEROMETER = 1,
    TAF_PA_SENSOR_GYROSCOPE = 2,
    TAF_PA_SENSOR_INVALID = 0xFF
}taf_pa_sensor_type_t;

//--------------------------------------------------------------------------------------------------
/**
 * Sensor basic information.
 */
//--------------------------------------------------------------------------------------------------
struct taf_pa_sensor_basicInfo_t{
    int id;
    int version;
    taf_pa_sensor_type_t sensorType;
    char sensorName[PA_MAX_LEN_BYTE];
    char vendorName[PA_MAX_LEN_BYTE];
};

//--------------------------------------------------------------------------------------------------
/**
 * Sensor configuration information.
 */
//--------------------------------------------------------------------------------------------------
struct taf_pa_sensor_configInfo_t{
    uint32_t sampleRateListSize;
    double samplingRate[PA_MAX_LEN_BYTE];
    double maxSamplingRate;
    uint32_t maxBatchCount;
    uint32_t minBatchCount;
};

//--------------------------------------------------------------------------------------------------
/**
 * Sensor Capabilities.
 */
//--------------------------------------------------------------------------------------------------
struct taf_pa_sensor_capabilities_t{
    int range;
    double resolution;
    double maxRange;
};

//--------------------------------------------------------------------------------------------------
/**
 * Sensor Event Information
 */
//--------------------------------------------------------------------------------------------------
struct taf_pa_sensor_event_t{
    uint64_t timestamp;
    double x;
    double y;
    double z;
    double xb;
    double yb;
    double zb;
};

//--------------------------------------------------------------------------------------------------
/**
 * Self Test Mode.
 */
//--------------------------------------------------------------------------------------------------
typedef enum{
    TAF_PA_SENSOR_POSITIVE = 1,
    TAF_PA_SENSOR_NEGATIVE = 2,
    TAF_PA_SENSOR_BOTH = 3
}taf_pa_sensor_testmode_t;

//--------------------------------------------------------------------------------------------------
/**
 * Sensor Reference.
 */
//--------------------------------------------------------------------------------------------------
typedef struct taf_pa_sensor_Ref* taf_pa_sensor_Ref_t;

//--------------------------------------------------------------------------------------------------
/**
 * Sensor Event Callback.
 */
//--------------------------------------------------------------------------------------------------
typedef void (*taf_pa_sensor_OnEvent)(taf_pa_sensor_Ref_t reference,taf_pa_sensor_event_t* events,int count,void *contextPtr);

//--------------------------------------------------------------------------------------------------
/**
 * Voluntary Self Test Failed Callback.
 */
//--------------------------------------------------------------------------------------------------
typedef void (*taf_pa_sensor_SelfTestFailed)(taf_pa_sensor_Ref_t reference,uint64_t timestamp,void *contextPtr);

//--------------------------------------------------------------------------------------------------
/**
 * Self Test Result Callback.
 */
//--------------------------------------------------------------------------------------------------
typedef void (*taf_pa_sensor_SelfTestResultCb)(taf_pa_sensor_Ref_t ref,le_result_t result,uint64_t timestamp,void *contextPtr);

//--------------------------------------------------------------------------------------------------
/**
 * Sensor Event Listener.
 */
//--------------------------------------------------------------------------------------------------
struct taf_pa_sensor_EventListener{
    taf_pa_sensor_OnEvent onEvent;
    taf_pa_sensor_SelfTestFailed onSelfTestFailed;
};

//--------------------------------------------------------------------------------------------------
/**
 * Intialize Sensor Subsystem and output number of available sensors.
 */
//--------------------------------------------------------------------------------------------------
LE_SHARED le_result_t taf_pa_sensor_Init(int8_t& listSize);

//--------------------------------------------------------------------------------------------------
/**
 * Return the infomation of the sensor.
 */
//--------------------------------------------------------------------------------------------------
LE_SHARED le_result_t taf_pa_sensor_GetSensorInfo(int8_t index,taf_pa_sensor_basicInfo_t &basicInfo,
    taf_pa_sensor_configInfo_t &configInfo,taf_pa_sensor_capabilities_t &Capabilities);

//--------------------------------------------------------------------------------------------------
/**
 * Create reference for the sensor.
 */
//--------------------------------------------------------------------------------------------------
LE_SHARED taf_pa_sensor_Ref_t taf_pa_sensor_CreateReference(const char* sensorName);

//--------------------------------------------------------------------------------------------------
/**
 * Sensor Event Listener.
 */
//--------------------------------------------------------------------------------------------------
// Delete the reference of the sensor
LE_SHARED le_result_t taf_pa_sensor_DeleteReference(taf_pa_sensor_Ref_t reference);

//--------------------------------------------------------------------------------------------------
/**
 * Activate the sensor.
 */
//--------------------------------------------------------------------------------------------------
LE_SHARED le_result_t taf_pa_sensor_Activate(taf_pa_sensor_Ref_t reference,double sampleRate,uint32_t batchCount,bool isRotated);

//--------------------------------------------------------------------------------------------------
/**
 * Set the new ref coordinate by euler angle.
 */
//--------------------------------------------------------------------------------------------------
LE_SHARED le_result_t taf_pa_sensor_SetEulerAngle(taf_pa_sensor_Ref_t reference,double pitch,double roll, double yaw);

//--------------------------------------------------------------------------------------------------
/**
 * Deactivate the sensor.
 */
//--------------------------------------------------------------------------------------------------
LE_SHARED le_result_t taf_pa_sensor_Deactivate(taf_pa_sensor_Ref_t reference);

//--------------------------------------------------------------------------------------------------
/**
 * Perform self test for given sensor.
 */
//--------------------------------------------------------------------------------------------------
LE_SHARED le_result_t taf_pa_sensor_SelfTest(taf_pa_sensor_Ref_t reference,taf_pa_sensor_testmode_t mode,taf_pa_sensor_SelfTestResultCb callback,void* contextPtr);

//--------------------------------------------------------------------------------------------------
/**
 * Register the listener for events to get notified.
 */
//--------------------------------------------------------------------------------------------------
LE_SHARED le_result_t taf_pa_sensor_RegisterListener(taf_pa_sensor_Ref_t reference,taf_pa_sensor_EventListener* eventListener,void *contextPtr);

#endif