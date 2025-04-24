/*
 * Copyright (c) 2025 Qualcomm Innovation Center, Inc. All rights reserved.
 * SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#ifndef TAF_PA_VOICECALL_H
#define TAF_PA_VOICECALL_H

#ifdef TAF_PA_DEFAULT
#define TAF_PA_WEAK __attribute__((weak))
#else
#define TAF_PA_WEAK
#endif

#define PA_MAX_DESTINATION_LEN_BYTE 51

typedef enum
{
    TAF_PA_VOICECALL_EVENT_ALERTING = 1,             ///< Alerting call; MO only.
    TAF_PA_VOICECALL_EVENT_ACTIVE = 2 ,              ///< Active call; map to legacy connected.
    TAF_PA_VOICECALL_EVENT_ENDED = 3 ,               ///< Call end.
    TAF_PA_VOICECALL_EVENT_OFFLINE = 4 ,             ///< Not supported.
    TAF_PA_VOICECALL_EVENT_WAITING = 5,              ///< Waiting call; map to legacy busy.
    TAF_PA_VOICECALL_EVENT_RESOURCE_BUSY = 6,        ///< Not supported.
    TAF_PA_VOICECALL_EVENT_CALL_END_FAILED = 7,      ///< Call end failed.
    TAF_PA_VOICECALL_EVENT_CALL_ANSWER_FAILED = 8,   ///< Call answer failed.
    TAF_PA_VOICECALL_EVENT_INCOMING = 9,             ///< Incoming call; not answered yet.
    TAF_PA_VOICECALL_EVENT_ONHOLD = 10,              ///< On hold call.
    TAF_PA_VOICECALL_EVENT_DIALING = 11,             ///< MO call; dialing.
    TAF_PA_VOICECALL_EVENT_CALL_HOLD_FAILED = 12,    ///< Call hold failed.
    TAF_PA_VOICECALL_EVENT_CALL_RESUME_FAILED = 13,  ///< Call resume failed.
    TAF_PA_VOICECALL_EVENT_CALL_SWAP_FAILED = 14,    ///< Call swap failed.
} taf_pa_voicecall_event_t;

typedef enum
{
    TAF_PA_VOICECALL_TERM_NORMAL = 1,
    TAF_PA_VOICECALL_TERM_NETWORK_FAIL = 2 ,
    TAF_PA_VOICECALL_TERM_UNOBTAINABLE_NUMBER = 3 ,
    TAF_PA_VOICECALL_TERM_BUSY = 4 ,
    TAF_PA_VOICECALL_TERM_LOCAL = 5,
    TAF_PA_VOICECALL_TERM_REMOTE = 6,
    TAF_PA_VOICECALL_TERM_UNDEFINED = 7,
    TAF_PA_VOICECALL_TERM_REJECTED = 8,
    TAF_PA_VOICECALL_TERM_NORESPONSE = 9,
} taf_pa_voicecall_termination_t;

typedef enum
{
    TAF_PA_VOICECALL_DIR_NONE = 0,
    TAF_PA_VOICECALL_DIR_INCOMING = 1,
    TAF_PA_VOICECALL_DIR_OUTGOING = 2
} taf_pa_voicecall_dir_t;

typedef struct taf_pa_voicecall_Ref* taf_pa_voicecall_Ref_t;

typedef void (*taf_pa_voicecall_CallCb)(taf_pa_voicecall_Ref_t reference, le_result_t result, void *contextPtr);

typedef void (*taf_pa_voicecall_EventListener)(taf_pa_voicecall_Ref_t reference, taf_pa_voicecall_event_t event, void *contextPtr);

LE_SHARED TAF_PA_WEAK le_result_t taf_pa_voicecall_Init();

LE_SHARED TAF_PA_WEAK taf_pa_voicecall_Ref_t taf_pa_voicecall_CreateReference(int8_t phoneId, const char *destId, taf_pa_voicecall_dir_t direction);

LE_SHARED TAF_PA_WEAK le_result_t taf_pa_voicecall_DeleteReference(taf_pa_voicecall_Ref_t reference);

LE_SHARED TAF_PA_WEAK int8_t taf_pa_voicecall_GetCallPhoneId(taf_pa_voicecall_Ref_t reference);

LE_SHARED TAF_PA_WEAK taf_pa_voicecall_dir_t taf_pa_voicecall_GetCallDirection(taf_pa_voicecall_Ref_t reference);

LE_SHARED TAF_PA_WEAK le_result_t taf_pa_voicecall_GetCallDestination(taf_pa_voicecall_Ref_t reference, char *destinationPtr, uint32_t destSize);

LE_SHARED TAF_PA_WEAK le_result_t taf_pa_voicecall_Make(taf_pa_voicecall_Ref_t reference, taf_pa_voicecall_CallCb callback, void* contextPtr);

LE_SHARED TAF_PA_WEAK le_result_t taf_pa_voicecall_Stop(taf_pa_voicecall_Ref_t reference, taf_pa_voicecall_CallCb callback, void* contextPtr);

LE_SHARED TAF_PA_WEAK le_result_t taf_pa_voicecall_Hold(taf_pa_voicecall_Ref_t reference, taf_pa_voicecall_CallCb callback, void* contextPtr);

LE_SHARED TAF_PA_WEAK le_result_t taf_pa_voicecall_Resume(taf_pa_voicecall_Ref_t reference, taf_pa_voicecall_CallCb callback, void* contextPtr);

LE_SHARED TAF_PA_WEAK le_result_t taf_pa_voicecall_Answer(taf_pa_voicecall_Ref_t reference, taf_pa_voicecall_CallCb callback, void* contextPtr);

LE_SHARED TAF_PA_WEAK le_result_t taf_pa_voicecall_Swap(taf_pa_voicecall_Ref_t reference, taf_pa_voicecall_CallCb callback, void* contextPtr);

LE_SHARED TAF_PA_WEAK le_result_t taf_pa_voicecall_RegisterEventListener(taf_pa_voicecall_EventListener listener, void* contextPtr);

LE_SHARED TAF_PA_WEAK le_result_t taf_pa_voicecall_GetCallTermination(taf_pa_voicecall_Ref_t reference, taf_pa_voicecall_termination_t *termination);

#endif /* TAF_PA_VOICECALL_H */

