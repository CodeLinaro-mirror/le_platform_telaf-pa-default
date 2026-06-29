/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#include <chrono>
#include <future>
#include <unistd.h>
#include <any>
#include "tafCommonPa.h"
#include "tafDeviceinfoPa.hpp"

using namespace tafpa::deviceinfo;


taf_pa_result_t TAF_PA_WEAK tafpa::deviceinfo::taf_pa_deviceinfo_Init()
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK tafpa::deviceinfo::taf_pa_deviceinfo_Deinit()
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK tafpa::deviceinfo::taf_pa_deviceinfo_GetIMEI(char* imeiPtr, size_t numElements)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}
