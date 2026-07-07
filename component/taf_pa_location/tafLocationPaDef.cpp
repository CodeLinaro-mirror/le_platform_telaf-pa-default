/*
 *  Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 *  SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#include "tafCommonPa.h"
#include "tafLocationPa.hpp"

namespace tafpa::location {

pa_result_t PA_WEAK taf_pa_location_Init()
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_location_Deinit()
{
    // No managers to clean up in default implementation
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_location_CreateClient(taf_pa_location_LocationId* clientIdPtr)
{
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_location_DeleteClient(taf_pa_location_LocationId clientId)
{
    (void)clientId;
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_location_RegisterListener(taf_pa_location_LocationId clientId, taf_pa_location_EventListener* eventListener, std::any context)
{
    (void)clientId;
    (void)eventListener;
    (void)context;
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_location_startDetailedEngineReports(taf_pa_location_LocationId clientId, uint32_t optInterval, uint16_t engineType, taf_pa_location_GeneralCb callback, uint32_t reportMask, std::any context)
{
    (void)clientId;
    (void)optInterval;
    (void)engineType;
    (void)reportMask;
    (void)callback;
    (void)context;
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_location_stopReports(taf_pa_location_LocationId clientId, taf_pa_location_GeneralCb callback, std::any context)
{
    (void)clientId;
    (void)callback;
    (void)context;
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_location_getCapabilities(taf_pa_location_LocationId clientId, uint32_t* capabilitiesPtr, std::any context)
{
    (void)clientId;
    (void)context;
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_location_configureConstellations(const std::vector<taf_pa_location_SvBlackListInfo_t>& svBlackListData, taf_pa_location_GeneralCb callback, bool deviceReset, std::any context)
{
    (void)svBlackListData;
    (void)deviceReset;
    (void)callback;
    (void)context;
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_location_deleteAidingData(taf_pa_location_AidingDataType_t aidingData, taf_pa_location_GeneralCb callback, std::any context)
{
    (void)aidingData;
    (void)callback;
    (void)context;
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_location_deleteAllAidingData(taf_pa_location_GeneralCb callback, std::any context)
{
    (void)callback;
    (void)context;
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_location_configureMinSVElevation(uint8_t minElevation, taf_pa_location_GeneralCb callback, std::any context)
{
    (void)minElevation;
    (void)callback;
    (void)context;
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_location_requestMinSVElevation(taf_pa_location_RequestMinSVElevationCb callback, std::any context)
{
    (void)callback;
    (void)context;
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_location_configureNmeaTypes(taf_pa_location_NmeaSentenceType_t nmeaType, taf_pa_location_GeneralCb callback, std::any context)
{
    (void)nmeaType;
    (void)callback;
    (void)context;
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_location_configureDR(const taf_pa_location_DREngineConfiguration_t& drConfig, taf_pa_location_GeneralCb callback, std::any context)
{
    (void)drConfig;
    (void)callback;
    (void)context;
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_location_configureEngineState(taf_pa_location_EngineType_t engineType, taf_pa_location_LocationEngineRunState_t engineState,taf_pa_location_GeneralCb callback, std::any context)
{
    (void)engineType;
    (void)engineState;
    (void)callback;
    (void)context;
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_location_configureRobustLocation(bool enableRobustloc, bool enableE911loc, taf_pa_location_GeneralCb callback, std::any context)
{
    (void)enableRobustloc;
    (void)enableE911loc;
    (void)callback;
    (void)context;
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_location_requestRobustLocation(taf_pa_location_RequestRobustLocationCb callback, std::any context)
{
    (void)callback;
    (void)context;
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_location_configureSecondaryBand(const std::unordered_set<taf_pa_location_GnssConstellationType_t>& constSet, taf_pa_location_GeneralCb callback, std::any context)
{
    (void)constSet;
    (void)callback;
    (void)context;
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_location_requestSecondaryBandConfig(taf_pa_location_RequestSecondaryBandConfigCb callback, std::any context)
{
    (void)callback;
    (void)context;
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_location_configureLeverArm(const taf_pa_location_LeverArmParams_t* leverArmConfigInfoPtr, taf_pa_location_GeneralCb callback, std::any context)
{
    (void)leverArmConfigInfoPtr;
    (void)callback;
    (void)context;
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_location_configureMinGpsWeek(uint16_t minGpsWeek, taf_pa_location_GeneralCb callback, std::any context)
{
    (void)minGpsWeek;
    (void)callback;
    (void)context;
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_location_configureNmea(const taf_pa_location_NmeaConfig_t& nmeaConfigData, taf_pa_location_GeneralCb callback, std::any context)
{
    (void)nmeaConfigData;
    (void)callback;
    (void)context;
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_location_requestMinGpsWeek(taf_pa_location_RequestMinGpsWeekCb callback, std::any context)
{
    (void)callback;
    (void)context;
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_location_requestXtraStatus(taf_pa_location_RequestXtraStatusCb callback, std::any context)
{
    (void)callback;
    (void)context;
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_location_injectMerkleTreeInformation(const std::string merkleTreeInfo, taf_pa_location_GeneralCb callback, std::any context)
{
    (void)merkleTreeInfo;
    (void)callback;
    (void)context;
    return PA_NOT_IMPLEMENTED;
}
pa_result_t PA_WEAK taf_pa_location_configureOsnma(bool enableOsnma, taf_pa_location_GeneralCb callback, std::any context)
{
    (void)enableOsnma;
    (void)callback;
    (void)context;
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_location_configureEngineIntegrityRisk(taf_pa_location_EngineType_t engineType,uint32_t integrityRisk, taf_pa_location_GeneralCb callback, std::any context)
{
    (void)engineType;
    (void)integrityRisk;
    (void)callback;
    (void)context;
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_location_injectCorrectionData(const uint8_t *injectionData, uint32_t
injectionDataSize, taf_pa_location_GeneralCb callback,std::any context)
{
    (void)injectionData;
    (void)injectionDataSize;
    (void)callback;
    (void)context;
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_location_createDgnssSource(taf_pa_location_DgnssDataFormat_t dgnssFormat,taf_pa_location_GeneralCb callback,std::any context)
{
    (void)dgnssFormat;
    (void)callback;
    (void)context;
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_location_releaseDgnssSource(taf_pa_location_GeneralCb callback,std::any context)
{
    (void)callback;
    (void)context;
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_location_registerDgnssEventListener(
taf_pa_location_DgnssEventListener* eventListener, std::any context)
{
    (void)eventListener;
    (void)context;
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_location_initializeDgnss(taf_pa_location_DgnssDataFormat_t dataFormat,
taf_pa_location_GeneralCb callback,std::any context)
{
    (void)dataFormat;
    (void)callback;
    (void)context;
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_location_deregisterDgnssEventListener(std::any context)
{
    (void)context;
    return PA_NOT_IMPLEMENTED;
}

pa_result_t PA_WEAK taf_pa_location_deInitializeDgnss(taf_pa_location_GeneralCb callback,
std::any context)
{
    (void)callback;
    (void)context;
    PA_INFO_NOT_IMPLEMENTED();
    return PA_NOT_IMPLEMENTED;
}

} // namespace tafpa::location
