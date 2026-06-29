/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#include "tafRadioPa.hpp"

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_Init
(
    void
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_Deinit
(
    void
)
{
    // No managers to clean up in default implementation
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetOperatingMode
(
    uint32_t instance,
    taf_pa_radio_OperatingMode_t* modePtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_SetOperatingMode
(
    uint32_t instance,
    taf_pa_radio_OperatingMode_t mode
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_SetNetworkSelectionPreference
(
    uint32_t instance,
    taf_pa_radio_NetworkSelectionPreference_t* preferencePtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetNetworkSelectionPreference
(
    uint32_t instance,
    taf_pa_radio_NetworkSelectionPreference_t* preferencePtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_SetPreferredNetwork
(
    uint32_t instance,
    taf_pa_radio_PreferredNetworkConfig_t* configPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetPreferredNetwork
(
    uint32_t instance,
    taf_pa_radio_PreferredNetworks_t* networksPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

TAF_PA_WEAK taf_pa_result_t taf_pa_radio_SetPreferredRat
(
    uint32_t instance,
    taf_pa_radio_RatBitMask_t bitmask
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetPreferredRat
(
    uint32_t instance,
    taf_pa_radio_RatBitMask_t* bitmaskPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetVoiceServiceInfo
(
    uint32_t instance,
    taf_pa_radio_VoiceServiceInfo_t* infoPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetDataServiceState
(
    uint32_t instance,
    taf_pa_radio_DataServiceState_t* statePtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetServiceDomain
(
    uint32_t instance,
    taf_pa_radio_Rat_t rat,
    taf_pa_radio_ServiceDomain_t* domainPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetServiceDomainPreferences
(
    uint32_t instance,
    taf_pa_radio_ServiceDomainBitMask_t* bitmaskPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_SetServiceDomainPreferences
(
    uint32_t instance,
    taf_pa_radio_ServiceDomainBitMask_t bitmask
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetSignalStrengthLevel
(
    uint32_t instance,
    taf_pa_radio_Rat_t rat,
    taf_pa_radio_SignalStrengthLevel_t* levelPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetSignalStrengthInfo
(
    uint32_t instance,
    taf_pa_radio_SignalStrengthInfo_t* infoPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_SetSignalStrengthInd
(
    uint32_t instance,
    taf_pa_radio_SignalStrengthIndConfig_t* configPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetCellLocationListInfo
(
    uint32_t instance,
    taf_pa_radio_CellLocationListInfo_t* infoPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetCurrNetworkName
(
    uint32_t instance,
    taf_pa_radio_CurrNetworkName_t* infoPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_PerformPlmnNetworkScan
(
    uint32_t instance,
    taf_pa_radio_PlmnNetworkScanConfig_t* configPtr,
    taf_pa_radio_PlmnScanInformation_t* informationPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetBandCapabilities
(
    uint32_t instance,
    taf_pa_radio_BandBitMask_t* bitmaskPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetLteBandCapabilities
(
    uint32_t instance,
    taf_pa_radio_LteBand_t* bandPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_SetBandPreferences
(
    uint32_t instance,
    taf_pa_radio_BandBitMask_t bitmask
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetBandPreferences
(
    uint32_t instance,
    taf_pa_radio_BandBitMask_t* bitmaskPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_SetLteBandPreferences
(
    uint32_t instance,
    taf_pa_radio_LteBand_t* bandPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetLteBandPreferences
(
    uint32_t instance,
    taf_pa_radio_LteBand_t* bandPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetImsRegistrationStatus
(
    uint32_t instance,
    taf_pa_radio_ImsRegistrationStatus_t* statusPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetLteCsCapability
(
    uint32_t instance,
    taf_pa_radio_LteCsCapability_t* capabilityPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetImsServiceStatus
(
    uint32_t instance,
    taf_pa_radio_ImsService_t service,
    taf_pa_radio_ImsServiceStatus_t* statusPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetImsPdpFailureErrorCode
(
    uint32_t instance,
    taf_pa_radio_ImsPdpFailureErrorCode_t* codePtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_ToggleImsService
(
    uint32_t instance,
    taf_pa_radio_ImsServiceSettingBitMask_t bitmask,
    bool enable
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetEnabledImsService
(
    uint32_t instance,
    taf_pa_radio_ImsServiceSettingBitMask_t* bitmaskPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_SetImsUserAgent
(
    uint32_t instance,
    const char* namePtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetImsUserAgent
(
    uint32_t instance,
    char* namePtr,
    size_t namePtrSize
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetEndcAvailability
(
    uint32_t instance,
    taf_pa_radio_EndcAvailability_t* availabilityPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetDcnrRestriction
(
    uint32_t instance,
    taf_pa_radio_DcnrRestriction_t* restrictionPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetSimCapacityInfo
(
    taf_pa_radio_SimCapabilityInfo_t* infoPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetDeviceAndSimCardRatCapability
(
    uint32_t instance,
    taf_pa_radio_DeviceAndSimCardRatCapability_t* capabilityPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetServingCellBandInfo
(
    uint32_t instance,
    taf_pa_radio_ServingCellBandInfo_t* infoPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetNrIcon
(
    uint32_t instance,
    taf_pa_radio_NrIcon_t* iconPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_AddNetworkRejectHandler
(
    uint32_t instance,
    taf_pa_radio_NetworkRejectHdlrFunc_t handlerFuncPtr,
    void* contextPtr,
    taf_pa_radio_NetworkRejectHandlerRef_t* handlerRefPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_AddRatChangeHandler
(
    uint32_t instance,
    taf_pa_radio_RatChangeHdlrFunc_t handlerFuncPtr,
    void* contextPtr,
    taf_pa_radio_RatChangeHandlerRef_t* handlerRefPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_AddVoiceServiceInfoHandler
(
    uint32_t instance,
    taf_pa_radio_VoiceServiceInfoHdlrFunc_t handlerFuncPtr,
    void* contextPtr,
    taf_pa_radio_VoiceServiceInfoHandlerRef_t* handlerRefPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_AddDataServiceStatusHandler
(
    uint32_t instance,
    taf_pa_radio_DataServiceStatusHdlrFunc_t handlerFuncPtr,
    void* contextPtr,
    taf_pa_radio_DataServiceStatusHandlerRef_t* handlerRefPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_AddDataRoamingStatusHandler
(
    uint32_t instance,
    taf_pa_radio_DataRoamingStatusHdlrFunc_t handlerFuncPtr,
    void* contextPtr,
    taf_pa_radio_DataRoamingStatusHandlerRef_t* handlerRefPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_AddSignalStrengthInfoChangeHandler
(
    uint32_t instance,
    taf_pa_radio_SignalStrengthInfoChangeHdlrFunc_t handlerFuncPtr,
    void* contextPtr,
    taf_pa_radio_SignalStrengthInfoChangeHandlerRef_t* handlerRefPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_AddImsRegStatusChangeHandler
(
    uint32_t instance,
    taf_pa_radio_ImsRegStatusChangeHdlrFunc_t handlerFuncPtr,
    void* contextPtr,
    taf_pa_radio_ImsRegStatusChangeHandlerRef_t* handlerRefPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_AddOperatingModeChangeHandler
(
    uint32_t instance,
    taf_pa_radio_OperatingModeChangeHdlrFunc_t handlerFuncPtr,
    void* contextPtr,
    taf_pa_radio_OperatingModeChangeHandlerRef_t* handlerRefPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_AddServiceDomainHandler
(
    uint32_t instance,
    taf_pa_radio_ServiceDomainHdlrFunc_t handlerFuncPtr,
    void* contextPtr,
    taf_pa_radio_ServiceDomainHandlerRef_t* handlerRefPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_AddLteCsCapabilityHandler
(
    uint32_t instance,
    taf_pa_radio_LteCsCapabilityHdlrFunc_t handlerFuncPtr,
    void* contextPtr,
    taf_pa_radio_LteCsCapabilityHandlerRef_t* handlerRefPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_AddImsServiceInfoHandler
(
    uint32_t instance,
    taf_pa_radio_ImsServiceInfoHdlrFunc_t handlerFuncPtr,
    void* contextPtr,
    taf_pa_radio_ImsServiceInfoHandlerRef_t* handlerRefPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_AddImsPdpErrorHandler
(
    uint32_t instance,
    taf_pa_radio_ImsPdpErrorHdlrFunc_t handlerFuncPtr,
    void* contextPtr,
    taf_pa_radio_ImsPdpErrorHandlerRef_t* handlerRefPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_AddCellInfoChangeHandler
(
    uint32_t instance,
    taf_pa_radio_CellInfoChangeHdlrFunc_t handlerFuncPtr,
    void* contextPtr,
    taf_pa_radio_CellInfoChangeHandlerRef_t* handlerRefPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_AddNrIconChangeHandler
(
    uint32_t instance,
    taf_pa_radio_NrIconChangeHdlrFunc_t handlerFuncPtr,
    void* contextPtr,
    taf_pa_radio_NrIconChangeHandlerRef_t* handlerRefPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_RegisterIndication
(
    uint32_t instance,
    uint8_t registration,
    taf_pa_radio_DisableIndicationMode_t mode
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_SetSysInfoIndLimit
(
    uint32_t instance,
    taf_pa_radio_SysInfoIndLimitMask_t limitMask
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetServiceStatus
(
    uint32_t instance,
    taf_pa_radio_Rat_t *servingRat,
    taf_pa_radio_RatServiceStatus_t *status
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetSysInfoIndLimit
(
    uint32_t instance,
    taf_pa_radio_SysInfoIndLimitMask_t *limitMask
)
{
    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_PerformPciNetworkScan
(
    uint32_t instance,
    taf_pa_radio_RatBitMask_t bitmask,
    taf_pa_radio_PciScanInformation_t* informationPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetServingRat
(
    uint32_t instance,
    taf_pa_radio_Rat_t* ratPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetRatSvcStatus
(
    uint32_t instance,
    taf_pa_radio_Rat_t rat,
    taf_pa_radio_RatServiceStatus_t* statusPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetServingCellRac
(
    uint32_t instance,
    taf_pa_radio_Rat_t rat,
    uint8_t* racPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetDataAvailSysStatus
(
    uint32_t instance,
    taf_pa_radio_DataAvailSysStatus_t* statusPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetLteCphyCaInfo
(
    uint32_t instance,
    taf_pa_radio_LteCphyCaInfo_t* infoPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_AddRatSvcStatusHandler
(
    uint32_t instance,
    taf_pa_radio_RatSvcStatusHdlrFunc_t handlerFuncPtr,
    void* contextPtr,
    taf_pa_radio_RatSvcStatusHandlerRef_t* handlerRefPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_AddLteCphyCaHandler
(
    uint32_t instance,
    taf_pa_radio_LteCphyCaHdlrFunc_t handlerFuncPtr,
    void* contextPtr,
    taf_pa_radio_LteCphyCaHandlerRef_t* handlerRefPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_AddDataAvailSysStatusHandler
(
    uint32_t instance,
    taf_pa_radio_DataAvailSysStatusHdlrFunc_t handlerFuncPtr,
    void* contextPtr,
    taf_pa_radio_DataAvailSysStatusHandlerRef_t* handlerRefPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}

taf_pa_result_t TAF_PA_WEAK taf_pa_radio_GetDataCurrRoamingStatus
(
    uint32_t instance,
    taf_pa_radio_DataRoamingStatus_t* statusPtr
)
{

    TAF_PA_INFO_NOT_IMPLEMENTED();
    return TAF_PA_NOT_IMPLEMENTED;
}
