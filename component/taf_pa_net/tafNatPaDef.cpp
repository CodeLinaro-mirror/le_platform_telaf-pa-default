/*
 *  Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 *  SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#include "tafNatPa.hpp"

/* Implementation */

taf_pa_result_t TAF_PA_WEAK taf_pa_nat_Init()
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_nat_Deinit()
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Add a destination NAT entry
 *
 * @return
 *      - PA_OK on success
 *      - PA_FAULT on failure
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_nat_AddDestNatEntry(
    uint32_t profileId,
    uint8_t slotId,
    const taf_pa_net_NatConfig_t *natConfig
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}


//--------------------------------------------------------------------------------------------------
/**
 * Remove a destination NAT entry
 *
 * @return
 *      - PA_OK on success
 *      - PA_FAULT on failure
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_nat_RemoveDestNatEntry(
    uint32_t profileId,
    uint8_t slotId,
    const taf_pa_net_NatConfig_t *natConfig
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Query destination NAT entry list for a profile
 *
 * @return
 *      - PA_OK on success
 *      - PA_FAULT on failure
 *      - PA_TIMEOUT on timeout
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_nat_QueryDestNatEntryList(
    uint32_t profileId,
    uint8_t slotId,
    std::vector<taf_pa_net_NatConfig_t> &natEntryInfo
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}
