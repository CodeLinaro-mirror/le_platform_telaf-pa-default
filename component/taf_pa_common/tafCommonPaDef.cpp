/*
 *  Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 *  SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#include "tafCommonPa.h"

#define PA_UNUSED(x) (void)(x)

PA_SHARED PA_WEAK pa_result_t taf_pa_common_LogInit
(
    taf_pa_common_LogBackend_t backend,
    taf_pa_common_LogLevel_t initLogLevel,
    void* ctxPtr
)
{
    PA_UNUSED(backend);
    PA_UNUSED(initLogLevel);
    PA_UNUSED(ctxPtr);
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

PA_SHARED PA_WEAK pa_result_t taf_pa_common_LogDeinit
(
)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

PA_SHARED PA_WEAK pa_result_t taf_pa_common_LogSetBackend
(
    taf_pa_common_LogBackend_t backend
)
{
    PA_UNUSED(backend);
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_common_LogSetlevel
(
    taf_pa_common_LogLevel_t level
)
{
    PA_UNUSED(level);
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_common_LogMessage
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
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}
