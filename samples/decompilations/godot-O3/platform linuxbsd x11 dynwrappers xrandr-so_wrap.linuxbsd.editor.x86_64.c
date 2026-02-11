
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 initialize_xrandr(int param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = dlopen("libXrandr.so.2",1);
  if (lVar1 != 0) {
    dlerror();
    XRRQueryExtension_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRQueryExtension");
    if (param_1 == 0) {
      XRRQueryVersion_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRQueryVersion");
      XRRGetScreenInfo_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetScreenInfo");
      XRRFreeScreenConfigInfo_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRFreeScreenConfigInfo");
      XRRSetScreenConfig_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRSetScreenConfig");
      XRRSetScreenConfigAndRate_dylibloader_wrapper_xrandr =
           dlsym(lVar1,"XRRSetScreenConfigAndRate");
      XRRConfigRotations_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRConfigRotations");
      XRRConfigTimes_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRConfigTimes");
      XRRConfigSizes_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRConfigSizes");
      XRRConfigRates_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRConfigRates");
      XRRConfigCurrentConfiguration_dylibloader_wrapper_xrandr =
           dlsym(lVar1,"XRRConfigCurrentConfiguration");
      XRRConfigCurrentRate_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRConfigCurrentRate");
      XRRRootToScreen_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRRootToScreen");
      XRRSelectInput_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRSelectInput");
      XRRRotations_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRRotations");
      XRRSizes_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRSizes");
      XRRRates_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRRates");
      XRRTimes_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRTimes");
      XRRGetScreenSizeRange_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetScreenSizeRange");
      XRRSetScreenSize_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRSetScreenSize");
      XRRGetScreenResources_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetScreenResources");
      XRRFreeScreenResources_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRFreeScreenResources");
      XRRGetOutputInfo_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetOutputInfo");
      XRRFreeOutputInfo_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRFreeOutputInfo");
      XRRListOutputProperties_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRListOutputProperties");
      XRRQueryOutputProperty_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRQueryOutputProperty");
      XRRConfigureOutputProperty_dylibloader_wrapper_xrandr =
           dlsym(lVar1,"XRRConfigureOutputProperty");
      XRRChangeOutputProperty_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRChangeOutputProperty");
      XRRDeleteOutputProperty_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRDeleteOutputProperty");
      XRRGetOutputProperty_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetOutputProperty");
      XRRAllocModeInfo_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRAllocModeInfo");
      XRRCreateMode_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRCreateMode");
      XRRDestroyMode_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRDestroyMode");
      XRRAddOutputMode_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRAddOutputMode");
      XRRDeleteOutputMode_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRDeleteOutputMode");
      XRRFreeModeInfo_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRFreeModeInfo");
      XRRGetCrtcInfo_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetCrtcInfo");
      XRRFreeCrtcInfo_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRFreeCrtcInfo");
      XRRSetCrtcConfig_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRSetCrtcConfig");
      XRRGetCrtcGammaSize_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetCrtcGammaSize");
      XRRGetCrtcGamma_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetCrtcGamma");
      XRRAllocGamma_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRAllocGamma");
      XRRSetCrtcGamma_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRSetCrtcGamma");
      XRRFreeGamma_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRFreeGamma");
      XRRGetScreenResourcesCurrent_dylibloader_wrapper_xrandr =
           dlsym(lVar1,"XRRGetScreenResourcesCurrent");
      XRRSetCrtcTransform_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRSetCrtcTransform");
      XRRGetCrtcTransform_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetCrtcTransform");
      XRRUpdateConfiguration_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRUpdateConfiguration");
      XRRGetPanning_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetPanning");
      XRRFreePanning_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRFreePanning");
      XRRSetPanning_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRSetPanning");
      XRRSetOutputPrimary_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRSetOutputPrimary");
      XRRGetOutputPrimary_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetOutputPrimary");
      XRRGetProviderResources_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetProviderResources");
      XRRFreeProviderResources_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRFreeProviderResources");
      XRRGetProviderInfo_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetProviderInfo");
      XRRFreeProviderInfo_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRFreeProviderInfo");
      XRRSetProviderOutputSource_dylibloader_wrapper_xrandr =
           dlsym(lVar1,"XRRSetProviderOutputSource");
      XRRSetProviderOffloadSink_dylibloader_wrapper_xrandr =
           dlsym(lVar1,"XRRSetProviderOffloadSink");
      XRRListProviderProperties_dylibloader_wrapper_xrandr =
           dlsym(lVar1,"XRRListProviderProperties");
      XRRQueryProviderProperty_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRQueryProviderProperty");
      XRRConfigureProviderProperty_dylibloader_wrapper_xrandr =
           dlsym(lVar1,"XRRConfigureProviderProperty");
      XRRChangeProviderProperty_dylibloader_wrapper_xrandr =
           dlsym(lVar1,"XRRChangeProviderProperty");
      XRRDeleteProviderProperty_dylibloader_wrapper_xrandr =
           dlsym(lVar1,"XRRDeleteProviderProperty");
      XRRGetProviderProperty_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetProviderProperty");
      XRRAllocateMonitor_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRAllocateMonitor");
      XRRGetMonitors_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetMonitors");
      XRRSetMonitor_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRSetMonitor");
      XRRDeleteMonitor_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRDeleteMonitor");
      XRRFreeMonitors_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRFreeMonitors");
    }
    else {
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRQueryVersion_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRQueryVersion");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRQueryVersion_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRQueryVersion");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRGetScreenInfo_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetScreenInfo");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRGetScreenInfo_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetScreenInfo");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRFreeScreenConfigInfo_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRFreeScreenConfigInfo");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRFreeScreenConfigInfo_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRFreeScreenConfigInfo");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRSetScreenConfig_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRSetScreenConfig");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRSetScreenConfig_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRSetScreenConfig");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRSetScreenConfigAndRate_dylibloader_wrapper_xrandr =
             dlsym(lVar1,"XRRSetScreenConfigAndRate");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRSetScreenConfigAndRate_dylibloader_wrapper_xrandr =
             dlsym(lVar1,"XRRSetScreenConfigAndRate");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRConfigRotations_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRConfigRotations");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRConfigRotations_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRConfigRotations");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRConfigTimes_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRConfigTimes");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRConfigTimes_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRConfigTimes");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRConfigSizes_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRConfigSizes");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRConfigSizes_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRConfigSizes");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRConfigRates_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRConfigRates");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRConfigRates_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRConfigRates");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRConfigCurrentConfiguration_dylibloader_wrapper_xrandr =
             dlsym(lVar1,"XRRConfigCurrentConfiguration");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRConfigCurrentConfiguration_dylibloader_wrapper_xrandr =
             dlsym(lVar1,"XRRConfigCurrentConfiguration");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRConfigCurrentRate_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRConfigCurrentRate");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRConfigCurrentRate_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRConfigCurrentRate");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRRootToScreen_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRRootToScreen");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRRootToScreen_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRRootToScreen");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRSelectInput_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRSelectInput");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRSelectInput_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRSelectInput");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRRotations_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRRotations");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRRotations_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRRotations");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRSizes_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRSizes");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRSizes_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRSizes");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRRates_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRRates");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRRates_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRRates");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRTimes_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRTimes");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRTimes_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRTimes");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRGetScreenSizeRange_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetScreenSizeRange");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRGetScreenSizeRange_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetScreenSizeRange");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRSetScreenSize_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRSetScreenSize");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRSetScreenSize_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRSetScreenSize");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRGetScreenResources_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetScreenResources");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRGetScreenResources_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetScreenResources");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRFreeScreenResources_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRFreeScreenResources");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRFreeScreenResources_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRFreeScreenResources");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRGetOutputInfo_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetOutputInfo");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRGetOutputInfo_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetOutputInfo");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRFreeOutputInfo_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRFreeOutputInfo");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRFreeOutputInfo_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRFreeOutputInfo");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRListOutputProperties_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRListOutputProperties");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRListOutputProperties_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRListOutputProperties");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRQueryOutputProperty_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRQueryOutputProperty");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRQueryOutputProperty_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRQueryOutputProperty");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRConfigureOutputProperty_dylibloader_wrapper_xrandr =
             dlsym(lVar1,"XRRConfigureOutputProperty");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRConfigureOutputProperty_dylibloader_wrapper_xrandr =
             dlsym(lVar1,"XRRConfigureOutputProperty");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRChangeOutputProperty_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRChangeOutputProperty");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRChangeOutputProperty_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRChangeOutputProperty");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRDeleteOutputProperty_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRDeleteOutputProperty");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRDeleteOutputProperty_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRDeleteOutputProperty");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRGetOutputProperty_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetOutputProperty");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRGetOutputProperty_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetOutputProperty");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRAllocModeInfo_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRAllocModeInfo");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRAllocModeInfo_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRAllocModeInfo");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRCreateMode_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRCreateMode");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRCreateMode_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRCreateMode");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRDestroyMode_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRDestroyMode");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRDestroyMode_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRDestroyMode");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRAddOutputMode_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRAddOutputMode");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRAddOutputMode_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRAddOutputMode");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRDeleteOutputMode_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRDeleteOutputMode");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRDeleteOutputMode_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRDeleteOutputMode");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRFreeModeInfo_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRFreeModeInfo");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRFreeModeInfo_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRFreeModeInfo");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRGetCrtcInfo_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetCrtcInfo");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRGetCrtcInfo_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetCrtcInfo");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRFreeCrtcInfo_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRFreeCrtcInfo");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRFreeCrtcInfo_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRFreeCrtcInfo");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRSetCrtcConfig_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRSetCrtcConfig");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRSetCrtcConfig_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRSetCrtcConfig");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRGetCrtcGammaSize_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetCrtcGammaSize");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRGetCrtcGammaSize_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetCrtcGammaSize");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRGetCrtcGamma_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetCrtcGamma");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRGetCrtcGamma_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetCrtcGamma");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRAllocGamma_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRAllocGamma");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRAllocGamma_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRAllocGamma");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRSetCrtcGamma_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRSetCrtcGamma");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRSetCrtcGamma_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRSetCrtcGamma");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRFreeGamma_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRFreeGamma");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRFreeGamma_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRFreeGamma");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRGetScreenResourcesCurrent_dylibloader_wrapper_xrandr =
             dlsym(lVar1,"XRRGetScreenResourcesCurrent");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRGetScreenResourcesCurrent_dylibloader_wrapper_xrandr =
             dlsym(lVar1,"XRRGetScreenResourcesCurrent");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRSetCrtcTransform_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRSetCrtcTransform");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRSetCrtcTransform_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRSetCrtcTransform");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRGetCrtcTransform_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetCrtcTransform");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRGetCrtcTransform_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetCrtcTransform");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRUpdateConfiguration_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRUpdateConfiguration");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRUpdateConfiguration_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRUpdateConfiguration");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRGetPanning_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetPanning");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRGetPanning_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetPanning");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRFreePanning_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRFreePanning");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRFreePanning_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRFreePanning");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRSetPanning_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRSetPanning");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRSetPanning_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRSetPanning");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRSetOutputPrimary_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRSetOutputPrimary");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRSetOutputPrimary_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRSetOutputPrimary");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRGetOutputPrimary_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetOutputPrimary");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRGetOutputPrimary_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetOutputPrimary");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRGetProviderResources_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetProviderResources");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRGetProviderResources_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetProviderResources");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRFreeProviderResources_dylibloader_wrapper_xrandr =
             dlsym(lVar1,"XRRFreeProviderResources");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRFreeProviderResources_dylibloader_wrapper_xrandr =
             dlsym(lVar1,"XRRFreeProviderResources");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRGetProviderInfo_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetProviderInfo");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRGetProviderInfo_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetProviderInfo");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRFreeProviderInfo_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRFreeProviderInfo");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRFreeProviderInfo_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRFreeProviderInfo");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRSetProviderOutputSource_dylibloader_wrapper_xrandr =
             dlsym(lVar1,"XRRSetProviderOutputSource");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRSetProviderOutputSource_dylibloader_wrapper_xrandr =
             dlsym(lVar1,"XRRSetProviderOutputSource");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRSetProviderOffloadSink_dylibloader_wrapper_xrandr =
             dlsym(lVar1,"XRRSetProviderOffloadSink");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRSetProviderOffloadSink_dylibloader_wrapper_xrandr =
             dlsym(lVar1,"XRRSetProviderOffloadSink");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRListProviderProperties_dylibloader_wrapper_xrandr =
             dlsym(lVar1,"XRRListProviderProperties");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRListProviderProperties_dylibloader_wrapper_xrandr =
             dlsym(lVar1,"XRRListProviderProperties");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRQueryProviderProperty_dylibloader_wrapper_xrandr =
             dlsym(lVar1,"XRRQueryProviderProperty");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRQueryProviderProperty_dylibloader_wrapper_xrandr =
             dlsym(lVar1,"XRRQueryProviderProperty");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRConfigureProviderProperty_dylibloader_wrapper_xrandr =
             dlsym(lVar1,"XRRConfigureProviderProperty");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRConfigureProviderProperty_dylibloader_wrapper_xrandr =
             dlsym(lVar1,"XRRConfigureProviderProperty");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRChangeProviderProperty_dylibloader_wrapper_xrandr =
             dlsym(lVar1,"XRRChangeProviderProperty");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRChangeProviderProperty_dylibloader_wrapper_xrandr =
             dlsym(lVar1,"XRRChangeProviderProperty");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRDeleteProviderProperty_dylibloader_wrapper_xrandr =
             dlsym(lVar1,"XRRDeleteProviderProperty");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRDeleteProviderProperty_dylibloader_wrapper_xrandr =
             dlsym(lVar1,"XRRDeleteProviderProperty");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRGetProviderProperty_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetProviderProperty");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRGetProviderProperty_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetProviderProperty");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRAllocateMonitor_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRAllocateMonitor");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRAllocateMonitor_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRAllocateMonitor");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRGetMonitors_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetMonitors");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRGetMonitors_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRGetMonitors");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRSetMonitor_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRSetMonitor");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRSetMonitor_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRSetMonitor");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRDeleteMonitor_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRDeleteMonitor");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRDeleteMonitor_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRDeleteMonitor");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRRFreeMonitors_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRFreeMonitors");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRRFreeMonitors_dylibloader_wrapper_xrandr = dlsym(lVar1,"XRRFreeMonitors");
      }
      lVar1 = dlerror();
      if (lVar1 != 0) {
        __fprintf_chk(_stderr,2,&_LC1,lVar1);
      }
    }
    return 0;
  }
  if (param_1 != 0) {
    uVar3 = dlerror();
    __fprintf_chk(_stderr,2,&_LC1,uVar3);
  }
  return 1;
}


