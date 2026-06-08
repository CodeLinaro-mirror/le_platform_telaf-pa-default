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


pa_result_t PA_WEAK tafpa::deviceinfo::taf_pa_deviceinfo_Init()
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK tafpa::deviceinfo::taf_pa_deviceinfo_Deinit()
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK tafpa::deviceinfo::taf_pa_deviceinfo_GetIMEI(char* imeiPtr, size_t numElements)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}
