/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#include "tafWlanPa.hpp"
#include "tafCommonPa.h"

namespace taf::pa::wlan {

pa_result_t PA_WEAK Init()
{
    PA_INFO("Using default PA. Feature unsupported.");
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK RegisterDeviceListener(DeviceListener, std::any)
{
    PA_INFO("Using default PA. Feature unsupported.");
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK EnableDevice(bool)
{
    PA_INFO("Using default PA. Feature unsupported.");
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK GetStatus(bool&)
{
    PA_INFO("Using default PA. Feature unsupported.");
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK SetDeviceMode(int, int)
{
    PA_INFO("Using default PA. Feature unsupported.");
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK GetDeviceMode(int&, int&)
{
    PA_INFO("Using default PA. Feature unsupported.");
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK SetStaBridgeMode(StaId_e, Mode_e)
{
    PA_INFO("Using default PA. Feature unsupported.");
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK GetStaBridgeMode(StaId_e, Mode_e&)
{
    PA_INFO("Using default PA. Feature unsupported.");
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK SetStaIpConfig(StaId_e, IPType_e)
{
    PA_INFO("Using default PA. Feature unsupported.");
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK SetStaIpConfig(StaId_e, IPType_e, const StaIpConfig_t&)
{
    PA_INFO("Using default PA. Feature unsupported.");
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK GetStaIpConfig(StaId_e, IPType_e&, StaIpConfig_t&)
{
    PA_INFO("Using default PA. Feature unsupported.");
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK GetBandInterferenceConfig(bool&, BandInterferenceConfig_t&)
{
    PA_INFO("Using default PA. Feature unsupported.");
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK SetBandInterferenceConfig(bool, const BandInterferenceConfig_t&)
{
    PA_INFO("Using default PA. Feature unsupported.");
    return PA_NOT_IMPLEMENTED;
}

} // namespace taf::pa::wlan
