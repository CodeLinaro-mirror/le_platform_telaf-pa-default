/*
 *  Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 *  SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#include "tafCommonPa.h"

#define PA_UNUSED(x) (void)(x)

TAF_PA_WEAK taf_pa_result_t taf_pa_common_LogInit
(
    taf_pa_common_LogBackend_t backend,
    taf_pa_common_LogLevel_t initLogLevel,
    void* ctxPtr
)
{
    PA_UNUSED(backend);
    PA_UNUSED(initLogLevel);
    PA_UNUSED(ctxPtr);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

TAF_PA_WEAK taf_pa_result_t taf_pa_common_LogDeinit
(
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

TAF_PA_WEAK taf_pa_result_t taf_pa_common_LogSetBackend
(
    taf_pa_common_LogBackend_t backend
)
{
    PA_UNUSED(backend);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_common_LogSetlevel
(
    taf_pa_common_LogLevel_t level
)
{
    PA_UNUSED(level);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_common_LogMessage
(
    taf_pa_common_LogLevel_t level,
    const char* file,
    const char* func,
    int line,
    const char* fmt,
    ...
)
{
    PA_UNUSED(level);
    PA_UNUSED(file);
    PA_UNUSED(func);
    PA_UNUSED(line);
    PA_UNUSED(fmt);
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}
