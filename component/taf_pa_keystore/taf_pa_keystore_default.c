/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#include "taf_pa_keystore.h"

//--------------------------------------------------------------------------------------------------
/**
 * PA initialization.
 *
 * @return
 *      LE_OK if successful.
 *      LE_FAULT if there was some other error.
 */
//--------------------------------------------------------------------------------------------------
pa_result_t taf_pa_ks_Init
(
    void
)
{
    PA_INFO("Telaf keyStore defalut PA initialized.");
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Create or import a RSA encryption key and return a key file reference
 *
 * The impData must be a PKCS#8 der bytes if provided.
 */
//--------------------------------------------------------------------------------------------------
pa_result_t taf_pa_ks_GenerateRsaEncKey
(
    int clientSessionFd,                  ///< [IN] Client session fd
    const char* keyName,                  ///< [IN] Key Name
    taf_pa_ks_RsaKeySize_t keySize,       ///< [IN] Key Size, ignored if impData is provided
    taf_pa_ks_EncPurpose_t purpose,       ///< [IN] Encryption purpose
    taf_pa_ks_RsaEncPadding_t padding,    ///< [IN] RSA encryption padding type
    const taf_pa_ks_Tag_t** tagListPtr,   ///< [IN] List of taf_pa_ks_Tag_t
    size_t tagListSize,                   ///< [IN] number of taf_pa_ks_Tag_t
    const uint8_t* impDataPtr,            ///< [IN] Imported key data
    size_t impDataSize,                   ///< [IN] less than TAF_KS_MAX_PACKET_SIZE
    KeyMgt_KeyFileRef_t* keyFileRefPtr    ///< [OUT] Key file reference
)
{
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Create or import a RSA signature key and return a key file reference.
 *
 * The impData must be a PKCS#8 der bytes if provided.
 */
//--------------------------------------------------------------------------------------------------
pa_result_t taf_pa_ks_GenerateRsaSigKey
(
    int clientSessionFd,                  ///< [IN] Client session fd
    const char* keyName,                  ///< [IN] Key Name
    taf_pa_ks_RsaKeySize_t keySize,       ///< [IN] Key Size, ignored if impData is provided
    taf_pa_ks_SigPurpose_t purpose,       ///< [IN] Signature purpose
    taf_pa_ks_RsaSigPadding_t padding,    ///< [IN] RSA signature padding type
    const taf_pa_ks_Tag_t** tagListPtr,   ///< [IN] List of taf_pa_ks_Tag_t
    size_t tagListSize,                   ///< [IN] number of taf_pa_ks_Tag_t
    const uint8_t* impDataPtr,            ///< [IN] Imported key data
    size_t impDataSize,                   ///< [IN] less than TAF_KS_MAX_PACKET_SIZE
    KeyMgt_KeyFileRef_t* keyFileRefPtr    ///< [OUT] Key file reference
)
{
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Create or import an ECDSA key and return a key file reference.
 *
 * The impData must be PKCS#8 der bytes if provided.
 */
//--------------------------------------------------------------------------------------------------
pa_result_t taf_pa_ks_GenerateEcdsaKey
(
    int clientSessionFd,                  ///< [IN] Client session fd
    const char* keyName,                  ///< [IN] Key Name
    taf_pa_ks_EccKeySize_t keySize,       ///< [IN] ECC curve, ignored if impData is provided
    taf_pa_ks_SigPurpose_t purpose,       ///< [IN] Signature purpose
    taf_pa_ks_Digest_t digest,            ///< [IN] Digest
    const taf_pa_ks_Tag_t** tagListPtr,   ///< [IN] List of taf_pa_ks_Tag_t
    size_t tagListSize,                   ///< [IN] number of taf_pa_ks_Tag_t
    const uint8_t* impDataPtr,            ///< [IN] Imported key data
    size_t impDataSize,                   ///< [IN] less than TAF_KS_MAX_PACKET_SIZE
    KeyMgt_KeyFileRef_t* keyFileRefPtr    ///< [OUT] Key file reference
)
{
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Create or import an AES key and return a key file reference.
 *
 * The impData must be raw key bytes if provided.
 */
//--------------------------------------------------------------------------------------------------
pa_result_t taf_pa_ks_GenerateAesKey
(
    int clientSessionFd,                  ///< [IN] Client session fd
    const char* keyName,                  ///< [IN] Key Name
    taf_pa_ks_AesKeySize_t keySize,       ///< [IN] AES key size, ignored if impData is provided
    taf_pa_ks_EncPurpose_t purpose,       ///< [IN] Encryption purpose
    taf_pa_ks_AesBlockMode_t mode,        ///< [IN] AES block mode
    const taf_pa_ks_Tag_t** tagListPtr,   ///< [IN] List of taf_pa_ks_Tag_t
    size_t tagListSize,                   ///< [IN] number of taf_pa_ks_Tag_t
    const uint8_t* impDataPtr,            ///< [IN] Imported key data
    size_t impDataSize,                   ///< [IN] less than TAF_KS_MAX_PACKET_SIZE
    KeyMgt_KeyFileRef_t* keyFileRefPtr    ///< [OUT] Key file reference
)
{
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Create or import a HMAC key and return a key file reference.
 *
 * Currently only digest DIGEST_SHA2_256 is supported. The impData must be raw key bytes if provided
 */
//--------------------------------------------------------------------------------------------------
pa_result_t taf_pa_ks_GenerateHmacKey
(
    int clientSessionFd,                  ///< [IN] Client session fd
    const char* keyName,                  ///< [IN] Key Name
    uint32_t keySize,                     ///< [IN] HMAC Key Size, ignored if impData is provided
    taf_pa_ks_SigPurpose_t purpose,       ///< [IN] Signature purpose
    taf_pa_ks_Digest_t digest,            ///< [IN] digest
    const taf_pa_ks_Tag_t** tagListPtr,   ///< [IN] List of taf_pa_ks_Tag_t
    size_t tagListSize,                   ///< [IN] number of taf_pa_ks_Tag_t
    const uint8_t* impDataPtr,            ///< [IN] Imported key data
    size_t impDataSize,                   ///< [IN] less than TAF_KS_MAX_PACKET_SIZE
    KeyMgt_KeyFileRef_t* keyFileRefPtr    ///< [OUT] Key file reference
)
{
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Export a key into specified key data format.
 */
//--------------------------------------------------------------------------------------------------
pa_result_t taf_pa_ks_ExportKey
(
    int clientSessionFd,                  ///< [IN] Client session fd
    KeyMgt_KeyFileRef_t keyFileRef,       ///< [IN] Key file reference
    const uint8_t* appDataPtr,            ///< [IN] Application data
    size_t appDataSize,                   ///< [IN]
    uint8_t* expDataPtr,                  ///< [OUT] exported key data
    size_t* expDataSizePtr                ///< [INOUT]
)
{
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Share a key.
 */
//--------------------------------------------------------------------------------------------------
pa_result_t taf_pa_ks_ShareKey
(
    int clientSessionFd,                  ///< [IN] Client session fd
    KeyMgt_KeyFileRef_t keyFileRef,       ///< [IN] Key file reference
    taf_pa_ks_KeyUsage_t keyCap,          ///< [IN] Shared capability
    uint32_t appCap,                      ///< [IN] Shared application capability.
    const char* appName                   ///< [IN] Shared application name
)
{
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Delete a key file by key name.
 */
//--------------------------------------------------------------------------------------------------
pa_result_t taf_pa_ks_DeleteKey
(
    int clientSessionFd,                  ///< [IN] Client session fd
    KeyMgt_KeyFileRef_t keyFileRef        ///< [IN] Key file reference
)
{
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get a key file reference by key name.
 */
//--------------------------------------------------------------------------------------------------
pa_result_t taf_pa_ks_GetKey
(
    int clientSessionFd,                  ///< [IN] Client session fd
    const char* keyName,                  ///< [IN] Key Name
    KeyMgt_KeyFileRef_t* keyFileRefPtr    ///< [OUT] Key file reference.
)
{
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get a shared key file reference by key name and app name.
 */
//--------------------------------------------------------------------------------------------------
pa_result_t taf_pa_ks_GetSharedKey
(
    int clientSessionFd,                  ///< [IN] Client session fd
    const char* keyName,                  ///< [IN] Key Name
    const char* appName,                  ///< [IN] App Name
    KeyMgt_KeyFileRef_t* keyFileRefPtr    ///< [OUT] Key file reference.
)
{
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Cancel key sharing to an application.
 */
//--------------------------------------------------------------------------------------------------
pa_result_t taf_pa_ks_CancelKeySharing
(
    int clientSessionFd,                  ///< [IN] Client session fd
    KeyMgt_KeyFileRef_t keyFileRef,       ///< [IN] Key file reference
    const char* appName                   ///< [IN] Shared application name
)
{
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get a shared app list for a shared key.
 */
//--------------------------------------------------------------------------------------------------
pa_result_t taf_pa_ks_GetSharedAppList
(
    int clientSessionFd,                  ///< [IN] Client session fd
    KeyMgt_KeyFileRef_t keyFileRef,       ///< [IN] Key file reference
    taf_pa_ks_sharedAppList_t* appListPtr ///< [OUT] Shared app list.
)
{
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Get key usage
 */
//--------------------------------------------------------------------------------------------------
pa_result_t taf_pa_ks_GetKeyUsage
(
    int clientSessionFd,                  ///< [IN] Client session fd
    KeyMgt_KeyFileRef_t keyFileRef,       ///< [IN] Key file reference
    taf_pa_ks_KeyUsage_t*    keyUsagePtr  ///< [OUT] Key usage
)
{
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Start the session for the given crypto operation.
 */
//--------------------------------------------------------------------------------------------------
pa_result_t taf_pa_ks_CryptoSessionStart
(
    int clientSessionFd,                  ///< [IN] Client session fd
    KeyMgt_KeyFileRef_t     keyFileRef,   ///< [IN] Key file reference
    taf_pa_ks_CryptoPurpose_t  cryptoPurpose,///< [IN] Crypto purpose
    const taf_pa_ks_Param_t** paramListPtr,   ///< [IN] List of taf_pa_ks_Param_t
    size_t paramListSize,                     ///< [IN] number of taf_pa_ks_Param_t
    uint64_t*                 opHandlePtr ///< [OUT]Cyrpto operation handle
)
{
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Provides AES AEAD to the running crypto session started with CryptoSessionStart API for AES GCM
 * mode.
 *
 * This API can be called for multiple times but must before CryptoSessionProcess API.
 */
//--------------------------------------------------------------------------------------------------
pa_result_t taf_pa_ks_CryptoSessionProcessAead
(
    uint64_t               opHandle,      ///< [IN] Cyrpto operation handle
    const uint8_t*     inputDataPtr,      ///< [IN] Data buffer to hold the AEAD data
    size_t            inputDataSize       ///< [IN]

)
{
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Provides data to, and possibly receives output from, an runing crypto operation started with
 * CryptoStartSession API. It can be called for multiple times to support streaming mode until
 * CryptoEndSession API is called.
 */
//--------------------------------------------------------------------------------------------------
pa_result_t taf_pa_ks_CryptoSessionProcess
(
    uint64_t           opHandle,          ///< [IN] Cyrpto operation handle
    const uint8_t*     inputDataPtr,      ///< [IN] InputData can be one of below 4 cases:
                                          ///<      1: plain text for encryption session.
                                          ///<      2: cipher text for decryption session.
                                          ///<      3: message to sign for signing session.
                                          ///<      4: message to verify for verification session.
    size_t            inputDataSize,      ///< [IN]
    uint8_t*          outputDataPtr,      ///< [OUT] OutputData can be one of below 3 cases:
                                          ///<       1: encrypted data for encryption session.
                                          ///<       2: decrypted data for decryption session.
                                          ///<       3: ignore for signing and verification session.
    size_t*        outputDataSizePtr      ///< [INOUT]
)
{
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Finalizes and stop a crypto operation session started with CryptoStartSession API.
 */
//--------------------------------------------------------------------------------------------------
pa_result_t taf_pa_ks_CryptoSessionEnd
(
    uint64_t               opHandle,      ///< [IN] Cyrpto operation handle
    const uint8_t*     inputDataPtr,      ///< [IN] Signature to verify for verification session
                                          ///<      and ignored for other sessions
    size_t            inputDataSize,      ///< [IN]
    uint8_t*          outputDataPtr,      ///< [OUT] OutputData can be one of below 4 cases:
                                          ///<       1: encrypted data for encryption session.
                                          ///<       2: decrypted data for decryption session.
                                          ///<       3: signature for signing session.
                                          ///<       4: ignore for verfication session.
    size_t*        outputDataSizePtr      ///< [INOUT]
)
{
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Abort crypto operation session started with CryptoStartSession API.
 */
//--------------------------------------------------------------------------------------------------
pa_result_t taf_pa_ks_CryptoSessionAbort
(
    uint64_t                opHandle      ///< [IN] Cyrpto operation handle
)
{
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Register Key creation handler in PA layer
 */
//--------------------------------------------------------------------------------------------------
pa_result_t taf_pa_ks_RegKeyCreationHandler
(
    taf_pa_ks_KeyCreationHandler_t handlerFunc
)
{
    return PA_NOT_IMPLEMENTED;
}

//--------------------------------------------------------------------------------------------------
/**
 * Register Key sharing state change handler in PA layer
 */
//--------------------------------------------------------------------------------------------------
pa_result_t taf_pa_ks_RegKeySharingHandler
(
    taf_pa_ks_KeySharingHandler_t handlerFunc
)
{
    return PA_NOT_IMPLEMENTED;
}
