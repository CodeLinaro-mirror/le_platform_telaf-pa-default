/*
 *  Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 *  SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#include "tafTimePa.hpp"


//--------------------------------------------------------------------------------------------------
/**
 * PA interface for GNSS
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_gnss_Init(void)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_time_Deinit(void)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_RegGnssTimeListener(void)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_DeregGnssTimeListener(void)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_time_RegGnssUtcTimeUpdateHandler
(
    taf_pa_time_GnssUtcTimeUpdateHandler_t handlerFunc
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}


//--------------------------------------------------------------------------------------------------
/**
 * PA interface for network
 */
//--------------------------------------------------------------------------------------------------

taf_pa_result_t TAF_PA_WEAK taf_pa_network_Init(int slotId)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_time_RegNetworkTimeListener(int slotId)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_time_DeregNetworkTimeListener(int slotId)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_time_RequestNetworkTime
(
    int slotId,
    taf_pa_time_NetworkInfoHandler_t handlerFunc
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_time_RegNetworkTimeChangeHandler
(
    taf_pa_time_NetworkChangeHandler_t handlerFunc
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}
