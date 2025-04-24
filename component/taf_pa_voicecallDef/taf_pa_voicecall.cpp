/*
 *  Copyright (c) 2025 Qualcomm Innovation Center, Inc. All rights reserved.
 *  SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#include "legato.h"
#include "interfaces.h"

#include "taf_pa_common.hpp"
#include "tafSvcIF.hpp"

#include "taf_pa_voicecall.h"

/* Implementation */

le_result_t taf_pa_voicecall_Init()
{
    LE_INFO("Default platform adatper implementation");
    return LE_NOT_IMPLEMENTED;
}

taf_pa_voicecall_Ref_t taf_pa_voicecall_CreateReference(int8_t phoneId, const char *destId, taf_pa_voicecall_dir_t direction)
{
    LE_INFO("Default platform adatper implementation");
    return nullptr;
}

le_result_t taf_pa_voicecall_DeleteReference(taf_pa_voicecall_Ref_t reference)
{
    LE_INFO("Default platform adatper implementation");
    return LE_NOT_IMPLEMENTED;
}

int8_t taf_pa_voicecall_GetCallPhoneId(taf_pa_voicecall_Ref_t reference)
{
    LE_INFO("Default platform adatper implementation");
    return -1;
}

taf_pa_voicecall_dir_t taf_pa_voicecall_GetCallDirection(taf_pa_voicecall_Ref_t reference)
{
    LE_INFO("Default platform adatper implementation");
    return TAF_PA_VOICECALL_DIR_NONE;
}

le_result_t taf_pa_voicecall_GetCallDestination(taf_pa_voicecall_Ref_t reference, char *destinationPtr, uint32_t destSize)
{
    LE_INFO("Default platform adatper implementation");
    return LE_NOT_IMPLEMENTED;
}

le_result_t taf_pa_voicecall_Make
(
    taf_pa_voicecall_Ref_t reference, taf_pa_voicecall_CallCb callback, void* contextPtr
)
{
    LE_INFO("Default platform adatper implementation");
    return LE_NOT_IMPLEMENTED;
}

le_result_t taf_pa_voicecall_Stop
(
    taf_pa_voicecall_Ref_t reference, taf_pa_voicecall_CallCb callback, void* contextPtr
)
{
    LE_INFO("Default platform adatper implementation");
    return LE_NOT_IMPLEMENTED;
}

le_result_t taf_pa_voicecall_Hold
(
    taf_pa_voicecall_Ref_t reference, taf_pa_voicecall_CallCb callback, void* contextPtr
)
{
    LE_INFO("Default platform adatper implementation");
    return LE_NOT_IMPLEMENTED;
}

le_result_t taf_pa_voicecall_Resume
(
    taf_pa_voicecall_Ref_t reference, taf_pa_voicecall_CallCb callback, void* contextPtr
)
{
    LE_INFO("Default platform adatper implementation");
    return LE_NOT_IMPLEMENTED;
}

le_result_t taf_pa_voicecall_Answer
(
    taf_pa_voicecall_Ref_t reference, taf_pa_voicecall_CallCb callback, void* contextPtr
)
{
    LE_INFO("Default platform adatper implementation");
    return LE_NOT_IMPLEMENTED;
}

le_result_t taf_pa_voicecall_Swap
(
    taf_pa_voicecall_Ref_t reference, taf_pa_voicecall_CallCb callback, void* contextPtr
)
{
    LE_INFO("Default platform adatper implementation");
    return LE_NOT_IMPLEMENTED;
}

le_result_t taf_pa_voicecall_RegisterEventListener
(
    taf_pa_voicecall_EventListener listener, void* contextPtr
)
{
    LE_INFO("Default platform adatper implementation");
    return LE_NOT_IMPLEMENTED;
}

le_result_t taf_pa_voicecall_GetCallTermination(taf_pa_voicecall_Ref_t reference, taf_pa_voicecall_termination_t *termination)
{
    LE_INFO("Default platform adatper implementation");
    return LE_NOT_IMPLEMENTED;
}

COMPONENT_INIT
{
    LE_INFO("Default platform adatper initialization done");
}
