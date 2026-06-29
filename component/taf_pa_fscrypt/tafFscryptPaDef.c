/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#include "tafFscryptPa.h"

//--------------------------------------------------------------------------------------------------
/**
 * PA initialization.
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_fsc_Init
(
    void* cryptoFunc
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * PA deinitialization.
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_fsc_Deinit
(
    void
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get a key file reference by directory name.
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_fsc_GetKey
(
    int clientSessionFd,                    ///< [IN] Client session Fd
    const char* dirName,                    ///< [IN] dir Name
    KeyMgt_KeyFileRef_t* keyFileRefPtr,     ///< [OUT] Key file reference.
    uint8_t* key,                           ///< [OUT] Raw key
    size_t keyLen                           ///< [OUT] Length of raw key
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Create AES key and return a key file reference.
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_fsc_GenerateAesKey
(
    int clientSessionFd,                    ///< [IN] Client session Fd
    const char* dirName,                    ///< [IN] dir Name
    KeyMgt_KeyFileRef_t* keyFileRefPtr,     ///< [OUT] Key file reference
    uint8_t* key,                           ///< [OUT] Raw key
    size_t keyLen                           ///< [OUT] Length of raw key
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Delete a key file.
 */
//--------------------------------------------------------------------------------------------------
taf_pa_result_t TAF_PA_WEAK taf_pa_fsc_DeleteKey
(
    int clientSessionFd,                    ///< [IN] Client session Fd
    KeyMgt_KeyFileRef_t keyFileRef          ///< [IN] Key file reference
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}
