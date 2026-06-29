/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#include "tafFlashPa.hpp"

taf_pa_result_t TAF_PA_WEAK taf_pa_flash_Init
(
    void
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();

    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_flash_Deinit
(
    void
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_flash_OpenMtd
(
    const char* namePtr,
    taf_pa_flash_OpenModeBitMask_t mode,
    taf_pa_flash_MtdRef_t* mtdRefPtr
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();

    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_flash_CloseMtd
(
    taf_pa_flash_MtdRef_t mtdRef
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();

    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_flash_GetMtdInfo
(
    taf_pa_flash_MtdRef_t mtdRef,
    taf_pa_flash_MtdInfo_t* infoPtr
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();

    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_flash_EraseMtdBlock
(
    taf_pa_flash_MtdRef_t mtdRef,
    uint32_t blockIndex
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();

    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_flash_CheckMtdGoodBlock
(
    taf_pa_flash_MtdRef_t mtdRef,
    uint32_t blockIndex,
	bool* isGoodBlockPtr
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();

    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_flash_MarkMtdBadBlock
(
    taf_pa_flash_MtdRef_t mtdRef,
    uint32_t blockIndex
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();

    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_flash_ReadMtdPage
(
    taf_pa_flash_MtdRef_t mtdRef,
    uint32_t pageIndex,
    unsigned char* dataPtr,
    size_t* dataSizePtr
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();

    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_flash_WriteMtdPage
(
    taf_pa_flash_MtdRef_t mtdRef,
    uint32_t pageIndex,
    const unsigned char* dataPtr,
    size_t dataSize
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();

    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_flash_CopyMtd
(
    const char* srcNamePtr,
    const char* dstNamePtr,
    size_t dataSize
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();

    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_flash_OpenUbiVolume
(
    const char* namePtr,
    taf_pa_flash_OpenModeBitMask_t mode,
    taf_pa_flash_UbiVolumeRef_t* ubiVolumeRefPtr
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();

    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_flash_CloseUbiVolume
(
    taf_pa_flash_UbiVolumeRef_t ubiVolumeRef
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();

    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_flash_SetUbiVolumeUpdateSize
(
    taf_pa_flash_UbiVolumeRef_t ubiVolumeRef,
    int64_t size
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();

    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_flash_ReadUbiVolume
(
    taf_pa_flash_UbiVolumeRef_t ubiVolumeRef,
    off_t offset,
    unsigned char* dataPtr,
    size_t* dataSizePtr
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();

    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_flash_UpdateUbiVolume
(
    taf_pa_flash_UbiVolumeRef_t ubiVolumeRef,
    const unsigned char* dataPtr,
    size_t dataSize
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();

    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_flash_CopyUbiVolume
(
    const char* srcNamePtr,
    const char* dstNamePtr,
    size_t bufferSize,
    size_t dataSize
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();

    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_flash_EraseUbiVolume
(
    const char* namePtr
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();

    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_flash_GetUbiVolumeInfo
(
    taf_pa_flash_UbiVolumeRef_t ubiVolumeRef,
    taf_pa_flash_UbiVolumeInfo_t* infoPtr
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();

    return TAF_PA_NOT_IMPLEMENTED;
}
