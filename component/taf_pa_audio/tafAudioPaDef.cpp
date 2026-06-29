/*
 *  Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 *  SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#include "tafAudioPa.hpp"

/* Implementation */
using namespace tafpa::audio;

taf_pa_result_t TAF_PA_WEAK tafpa::audio::taf_pa_audio_Init()
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK tafpa::audio::taf_pa_audio_Deinit()
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK tafpa::audio::taf_pa_audio_CreateStream(
    PaStreamConfig streamConfig,
    taf_pa_audio_cb callback,
    std::any context
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK tafpa::audio::taf_pa_audio_DeleteStream(
    PaStreamConfig streamConfig,
    taf_pa_audio_cb callback,
    std::any context
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK tafpa::audio::taf_pa_audio_StartAudio(
    PaStreamConfig streamConfig,
    taf_pa_audio_cb callback,
    std::any context
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK tafpa::audio::taf_pa_audio_StopAudio(
    PaStreamConfig streamConfig,
    taf_pa_audio_cb callback,
    std::any context
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK tafpa::audio::taf_pa_audio_SetVolume(
    PaStreamConfig streamConfig,
    double volLevel,
    taf_pa_audio_cb callback,
    std::any context
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK tafpa::audio::taf_pa_audio_GetVolume(
    PaStreamConfig streamConfig,
    double *volLevel,
    taf_pa_audio_cb callback,
    std::any context
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK tafpa::audio::taf_pa_audio_SetMute(
    PaStreamConfig streamConfig,
    bool isMute,
    taf_pa_audio_cb callback,
    std::any context
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK tafpa::audio::taf_pa_audio_GetMute(
    PaStreamConfig streamConfig,
    bool *isMute,
    taf_pa_audio_cb callback,
    std::any context
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK tafpa::audio::taf_pa_audio_StartPlayback(
    std::vector<taf_pa_audio_PlayFileInfo_t> &playFileInfos,
    int listSiz,
    std::weak_ptr<IPaPlayListListener> pbStatusListener
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK tafpa::audio::taf_pa_audio_StopPlayback(
    PaStreamConfig streamConfig
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK tafpa::audio::taf_pa_audio_GetCaptureStream(
    PaStreamDirection streamDir,
    std::shared_ptr<PaAudioCaptureStream>& captureStream
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    (void)streamDir;
    captureStream = nullptr;
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK tafpa::audio::taf_pa_audio_PlaySignallingDtmfOnTx(
    uint32_t slotId,
    const char dtmf,
    taf_pa_audio_cb callback,
    std::any context
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK tafpa::audio::taf_pa_audio_StopSignallingDtmfOnTx(
    uint32_t slotId,
    taf_pa_audio_cb callback,
    std::any context
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK tafpa::audio::taf_pa_audio_PlayDtmf(
        PaDtmfTone dtmfTone, uint16_t duration,
        uint16_t gain,
        taf_pa_audio_cb callback,
        std::any context
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK tafpa::audio::taf_pa_audio_StopDtmf(
    PaStreamDirection direction, taf_pa_audio_cb callback,
    std::any context
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK tafpa::audio::taf_pa_audio_registerDtmfListener(
    std::weak_ptr<IPaDtmfListener> dtmfListener
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK tafpa::audio::taf_pa_audio_deregisterDtmfListener(
    std::weak_ptr<IPaDtmfListener> dtmfListener
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK tafpa::audio::AddSubsystemStateChangeListener(
    taf_pa_audio_SubsystemStateChangeCb callBack,
    std::shared_ptr<void> context,
    uint16_t &id
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK tafpa::audio::RemoveSubsystemStateChangeListener(
    uint16_t id
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}
