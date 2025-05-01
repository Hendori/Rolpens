
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 initialize_fontconfig(int param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = dlopen("libfontconfig.so.1",1);
  if (lVar1 != 0) {
    dlerror();
    FcBlanksCreate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcBlanksCreate");
    if (param_1 == 0) {
      FcBlanksDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcBlanksDestroy");
      FcBlanksAdd_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcBlanksAdd");
      FcBlanksIsMember_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcBlanksIsMember");
      FcCacheDir_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCacheDir");
      FcCacheCopySet_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCacheCopySet");
      FcCacheSubdir_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCacheSubdir");
      FcCacheNumSubdir_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCacheNumSubdir");
      FcCacheNumFont_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCacheNumFont");
      FcDirCacheUnlink_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcDirCacheUnlink");
      FcDirCacheValid_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcDirCacheValid");
      FcDirCacheClean_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcDirCacheClean");
      FcCacheCreateTagFile_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCacheCreateTagFile");
      FcConfigHome_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigHome");
      FcConfigEnableHome_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigEnableHome");
      FcConfigFilename_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigFilename");
      FcConfigCreate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigCreate");
      FcConfigReference_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigReference");
      FcConfigDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigDestroy");
      FcConfigSetCurrent_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigSetCurrent");
      FcConfigGetCurrent_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigGetCurrent");
      FcConfigUptoDate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigUptoDate");
      FcConfigBuildFonts_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigBuildFonts");
      FcConfigGetFontDirs_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigGetFontDirs");
      FcConfigGetConfigDirs_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigGetConfigDirs");
      FcConfigGetConfigFiles_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigGetConfigFiles");
      FcConfigGetCache_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigGetCache");
      FcConfigGetBlanks_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigGetBlanks");
      FcConfigGetCacheDirs_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigGetCacheDirs");
      FcConfigGetRescanInterval_dylibloader_wrapper_fontconfig =
           dlsym(lVar1,"FcConfigGetRescanInterval");
      FcConfigSetRescanInterval_dylibloader_wrapper_fontconfig =
           dlsym(lVar1,"FcConfigSetRescanInterval");
      FcConfigGetFonts_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigGetFonts");
      FcConfigAppFontAddFile_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigAppFontAddFile");
      FcConfigAppFontAddDir_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigAppFontAddDir");
      FcConfigAppFontClear_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigAppFontClear");
      FcConfigSubstituteWithPat_dylibloader_wrapper_fontconfig =
           dlsym(lVar1,"FcConfigSubstituteWithPat");
      FcConfigSubstitute_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigSubstitute");
      FcConfigGetSysRoot_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigGetSysRoot");
      FcConfigSetSysRoot_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigSetSysRoot");
      FcCharSetCreate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetCreate");
      FcCharSetNew_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetNew");
      FcCharSetDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetDestroy");
      FcCharSetAddChar_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetAddChar");
      FcCharSetDelChar_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetDelChar");
      FcCharSetCopy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetCopy");
      FcCharSetEqual_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetEqual");
      FcCharSetIntersect_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetIntersect");
      FcCharSetUnion_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetUnion");
      FcCharSetSubtract_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetSubtract");
      FcCharSetMerge_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetMerge");
      FcCharSetHasChar_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetHasChar");
      FcCharSetCount_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetCount");
      FcCharSetIntersectCount_dylibloader_wrapper_fontconfig =
           dlsym(lVar1,"FcCharSetIntersectCount");
      FcCharSetSubtractCount_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetSubtractCount");
      FcCharSetIsSubset_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetIsSubset");
      FcCharSetCoverage_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetCoverage");
      FcValuePrint_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcValuePrint");
      FcPatternPrint_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternPrint");
      FcFontSetPrint_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontSetPrint");
      FcGetDefaultLangs_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcGetDefaultLangs");
      FcDefaultSubstitute_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcDefaultSubstitute");
      FcFileIsDir_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFileIsDir");
      FcFileScan_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFileScan");
      FcDirScan_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcDirScan");
      FcDirSave_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcDirSave");
      FcDirCacheLoad_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcDirCacheLoad");
      FcDirCacheRescan_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcDirCacheRescan");
      FcDirCacheRead_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcDirCacheRead");
      FcDirCacheLoadFile_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcDirCacheLoadFile");
      FcDirCacheUnload_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcDirCacheUnload");
      FcFreeTypeQuery_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFreeTypeQuery");
      FcFontSetCreate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontSetCreate");
      FcFontSetDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontSetDestroy");
      FcFontSetAdd_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontSetAdd");
      FcInitLoadConfig_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcInitLoadConfig");
      FcInitLoadConfigAndFonts_dylibloader_wrapper_fontconfig =
           dlsym(lVar1,"FcInitLoadConfigAndFonts");
      FcInit_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcInit");
      FcFini_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFini");
      FcGetVersion_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcGetVersion");
      FcInitReinitialize_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcInitReinitialize");
      FcInitBringUptoDate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcInitBringUptoDate");
      FcGetLangs_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcGetLangs");
      FcLangNormalize_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangNormalize");
      FcLangGetCharSet_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangGetCharSet");
      FcLangSetCreate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetCreate");
      FcLangSetDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetDestroy");
      FcLangSetCopy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetCopy");
      FcLangSetAdd_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetAdd");
      FcLangSetDel_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetDel");
      FcLangSetHasLang_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetHasLang");
      FcLangSetCompare_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetCompare");
      FcLangSetContains_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetContains");
      FcLangSetEqual_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetEqual");
      FcLangSetHash_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetHash");
      FcLangSetGetLangs_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetGetLangs");
      FcLangSetUnion_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetUnion");
      FcLangSetSubtract_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetSubtract");
      FcObjectSetCreate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcObjectSetCreate");
      FcObjectSetAdd_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcObjectSetAdd");
      FcObjectSetDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcObjectSetDestroy");
      FcObjectSetVaBuild_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcObjectSetVaBuild");
      FcObjectSetBuild_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcObjectSetBuild");
      FcFontSetList_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontSetList");
      FcFontList_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontList");
      FcAtomicCreate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcAtomicCreate");
      FcAtomicLock_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcAtomicLock");
      FcAtomicNewFile_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcAtomicNewFile");
      FcAtomicOrigFile_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcAtomicOrigFile");
      FcAtomicReplaceOrig_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcAtomicReplaceOrig");
      FcAtomicDeleteNew_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcAtomicDeleteNew");
      FcAtomicUnlock_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcAtomicUnlock");
      FcAtomicDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcAtomicDestroy");
      FcFontSetMatch_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontSetMatch");
      FcFontMatch_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontMatch");
      FcFontRenderPrepare_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontRenderPrepare");
      FcFontSetSort_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontSetSort");
      FcFontSort_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontSort");
      FcFontSetSortDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontSetSortDestroy");
      FcMatrixCopy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcMatrixCopy");
      FcMatrixEqual_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcMatrixEqual");
      FcMatrixMultiply_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcMatrixMultiply");
      FcMatrixRotate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcMatrixRotate");
      FcMatrixScale_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcMatrixScale");
      FcMatrixShear_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcMatrixShear");
      FcNameRegisterObjectTypes_dylibloader_wrapper_fontconfig =
           dlsym(lVar1,"FcNameRegisterObjectTypes");
      FcNameUnregisterObjectTypes_dylibloader_wrapper_fontconfig =
           dlsym(lVar1,"FcNameUnregisterObjectTypes");
      FcNameGetObjectType_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcNameGetObjectType");
      FcNameRegisterConstants_dylibloader_wrapper_fontconfig =
           dlsym(lVar1,"FcNameRegisterConstants");
      FcNameUnregisterConstants_dylibloader_wrapper_fontconfig =
           dlsym(lVar1,"FcNameUnregisterConstants");
      FcNameGetConstant_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcNameGetConstant");
      FcNameConstant_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcNameConstant");
      FcNameParse_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcNameParse");
      FcNameUnparse_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcNameUnparse");
      FcPatternCreate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternCreate");
      FcPatternDuplicate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternDuplicate");
      FcPatternReference_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternReference");
      FcPatternFilter_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternFilter");
      FcValueDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcValueDestroy");
      FcValueEqual_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcValueEqual");
      FcValueSave_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcValueSave");
      FcPatternDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternDestroy");
      FcPatternEqual_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternEqual");
      FcPatternEqualSubset_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternEqualSubset");
      FcPatternHash_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternHash");
      FcPatternAdd_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternAdd");
      FcPatternAddWeak_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternAddWeak");
      FcPatternGet_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternGet");
      FcPatternGetWithBinding_dylibloader_wrapper_fontconfig =
           dlsym(lVar1,"FcPatternGetWithBinding");
      FcPatternDel_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternDel");
      FcPatternRemove_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternRemove");
      FcPatternAddInteger_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternAddInteger");
      FcPatternAddDouble_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternAddDouble");
      FcPatternAddString_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternAddString");
      FcPatternAddMatrix_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternAddMatrix");
      FcPatternAddCharSet_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternAddCharSet");
      FcPatternAddBool_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternAddBool");
      FcPatternAddLangSet_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternAddLangSet");
      FcPatternAddRange_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternAddRange");
      FcPatternGetInteger_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternGetInteger");
      FcPatternGetDouble_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternGetDouble");
      FcPatternGetString_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternGetString");
      FcPatternGetMatrix_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternGetMatrix");
      FcPatternGetCharSet_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternGetCharSet");
      FcPatternGetBool_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternGetBool");
      FcPatternGetLangSet_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternGetLangSet");
      FcPatternGetRange_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternGetRange");
      FcPatternVaBuild_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternVaBuild");
      FcPatternBuild_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternBuild");
      FcPatternFormat_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternFormat");
      FcRangeCreateDouble_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcRangeCreateDouble");
      FcRangeCreateInteger_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcRangeCreateInteger");
      FcRangeDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcRangeDestroy");
      FcRangeCopy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcRangeCopy");
      FcRangeGetDouble_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcRangeGetDouble");
      FcWeightFromOpenType_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcWeightFromOpenType");
      FcWeightToOpenType_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcWeightToOpenType");
      FcStrCopy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrCopy");
      FcStrCopyFilename_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrCopyFilename");
      FcStrPlus_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrPlus");
      FcStrFree_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrFree");
      FcStrDowncase_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrDowncase");
      FcStrCmpIgnoreCase_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrCmpIgnoreCase");
      FcStrCmp_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrCmp");
      FcStrStrIgnoreCase_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrStrIgnoreCase");
      FcStrStr_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrStr");
      FcUtf8ToUcs4_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcUtf8ToUcs4");
      FcUtf8Len_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcUtf8Len");
      FcUcs4ToUtf8_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcUcs4ToUtf8");
      FcUtf16ToUcs4_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcUtf16ToUcs4");
      FcUtf16Len_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcUtf16Len");
      FcStrDirname_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrDirname");
      FcStrBasename_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrBasename");
      FcStrSetCreate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrSetCreate");
      FcStrSetMember_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrSetMember");
      FcStrSetEqual_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrSetEqual");
      FcStrSetAdd_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrSetAdd");
      FcStrSetAddFilename_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrSetAddFilename");
      FcStrSetDel_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrSetDel");
      FcStrSetDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrSetDestroy");
      FcStrListCreate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrListCreate");
      FcStrListFirst_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrListFirst");
      FcStrListNext_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrListNext");
      FcStrListDone_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrListDone");
      FcConfigParseAndLoad_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigParseAndLoad");
      FcConfigParseAndLoadFromMemory_dylibloader_wrapper_fontconfig =
           dlsym(lVar1,"FcConfigParseAndLoadFromMemory");
    }
    else {
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcBlanksDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcBlanksDestroy");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcBlanksDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcBlanksDestroy");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcBlanksAdd_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcBlanksAdd");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcBlanksAdd_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcBlanksAdd");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcBlanksIsMember_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcBlanksIsMember");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcBlanksIsMember_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcBlanksIsMember");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcCacheDir_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCacheDir");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcCacheDir_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCacheDir");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcCacheCopySet_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCacheCopySet");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcCacheCopySet_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCacheCopySet");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcCacheSubdir_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCacheSubdir");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcCacheSubdir_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCacheSubdir");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcCacheNumSubdir_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCacheNumSubdir");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcCacheNumSubdir_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCacheNumSubdir");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcCacheNumFont_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCacheNumFont");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcCacheNumFont_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCacheNumFont");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcDirCacheUnlink_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcDirCacheUnlink");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcDirCacheUnlink_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcDirCacheUnlink");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcDirCacheValid_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcDirCacheValid");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcDirCacheValid_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcDirCacheValid");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcDirCacheClean_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcDirCacheClean");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcDirCacheClean_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcDirCacheClean");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcCacheCreateTagFile_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCacheCreateTagFile");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcCacheCreateTagFile_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCacheCreateTagFile");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcConfigHome_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigHome");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcConfigHome_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigHome");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcConfigEnableHome_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigEnableHome");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcConfigEnableHome_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigEnableHome");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcConfigFilename_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigFilename");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcConfigFilename_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigFilename");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcConfigCreate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigCreate");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcConfigCreate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigCreate");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcConfigReference_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigReference");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcConfigReference_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigReference");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcConfigDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigDestroy");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcConfigDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigDestroy");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcConfigSetCurrent_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigSetCurrent");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcConfigSetCurrent_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigSetCurrent");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcConfigGetCurrent_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigGetCurrent");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcConfigGetCurrent_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigGetCurrent");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcConfigUptoDate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigUptoDate");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcConfigUptoDate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigUptoDate");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcConfigBuildFonts_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigBuildFonts");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcConfigBuildFonts_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigBuildFonts");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcConfigGetFontDirs_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigGetFontDirs");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcConfigGetFontDirs_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigGetFontDirs");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcConfigGetConfigDirs_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigGetConfigDirs");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcConfigGetConfigDirs_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigGetConfigDirs");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcConfigGetConfigFiles_dylibloader_wrapper_fontconfig =
             dlsym(lVar1,"FcConfigGetConfigFiles");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcConfigGetConfigFiles_dylibloader_wrapper_fontconfig =
             dlsym(lVar1,"FcConfigGetConfigFiles");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcConfigGetCache_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigGetCache");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcConfigGetCache_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigGetCache");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcConfigGetBlanks_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigGetBlanks");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcConfigGetBlanks_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigGetBlanks");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcConfigGetCacheDirs_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigGetCacheDirs");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcConfigGetCacheDirs_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigGetCacheDirs");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcConfigGetRescanInterval_dylibloader_wrapper_fontconfig =
             dlsym(lVar1,"FcConfigGetRescanInterval");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcConfigGetRescanInterval_dylibloader_wrapper_fontconfig =
             dlsym(lVar1,"FcConfigGetRescanInterval");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcConfigSetRescanInterval_dylibloader_wrapper_fontconfig =
             dlsym(lVar1,"FcConfigSetRescanInterval");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcConfigSetRescanInterval_dylibloader_wrapper_fontconfig =
             dlsym(lVar1,"FcConfigSetRescanInterval");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcConfigGetFonts_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigGetFonts");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcConfigGetFonts_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigGetFonts");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcConfigAppFontAddFile_dylibloader_wrapper_fontconfig =
             dlsym(lVar1,"FcConfigAppFontAddFile");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcConfigAppFontAddFile_dylibloader_wrapper_fontconfig =
             dlsym(lVar1,"FcConfigAppFontAddFile");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcConfigAppFontAddDir_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigAppFontAddDir");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcConfigAppFontAddDir_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigAppFontAddDir");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcConfigAppFontClear_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigAppFontClear");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcConfigAppFontClear_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigAppFontClear");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcConfigSubstituteWithPat_dylibloader_wrapper_fontconfig =
             dlsym(lVar1,"FcConfigSubstituteWithPat");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcConfigSubstituteWithPat_dylibloader_wrapper_fontconfig =
             dlsym(lVar1,"FcConfigSubstituteWithPat");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcConfigSubstitute_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigSubstitute");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcConfigSubstitute_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigSubstitute");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcConfigGetSysRoot_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigGetSysRoot");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcConfigGetSysRoot_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigGetSysRoot");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcConfigSetSysRoot_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigSetSysRoot");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcConfigSetSysRoot_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigSetSysRoot");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcCharSetCreate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetCreate");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcCharSetCreate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetCreate");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcCharSetNew_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetNew");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcCharSetNew_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetNew");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcCharSetDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetDestroy");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcCharSetDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetDestroy");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcCharSetAddChar_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetAddChar");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcCharSetAddChar_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetAddChar");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcCharSetDelChar_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetDelChar");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcCharSetDelChar_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetDelChar");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcCharSetCopy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetCopy");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcCharSetCopy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetCopy");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcCharSetEqual_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetEqual");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcCharSetEqual_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetEqual");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcCharSetIntersect_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetIntersect");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcCharSetIntersect_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetIntersect");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcCharSetUnion_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetUnion");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcCharSetUnion_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetUnion");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcCharSetSubtract_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetSubtract");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcCharSetSubtract_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetSubtract");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcCharSetMerge_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetMerge");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcCharSetMerge_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetMerge");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcCharSetHasChar_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetHasChar");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcCharSetHasChar_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetHasChar");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcCharSetCount_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetCount");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcCharSetCount_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetCount");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcCharSetIntersectCount_dylibloader_wrapper_fontconfig =
             dlsym(lVar1,"FcCharSetIntersectCount");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcCharSetIntersectCount_dylibloader_wrapper_fontconfig =
             dlsym(lVar1,"FcCharSetIntersectCount");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcCharSetSubtractCount_dylibloader_wrapper_fontconfig =
             dlsym(lVar1,"FcCharSetSubtractCount");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcCharSetSubtractCount_dylibloader_wrapper_fontconfig =
             dlsym(lVar1,"FcCharSetSubtractCount");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcCharSetIsSubset_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetIsSubset");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcCharSetIsSubset_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetIsSubset");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcCharSetCoverage_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetCoverage");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcCharSetCoverage_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcCharSetCoverage");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcValuePrint_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcValuePrint");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcValuePrint_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcValuePrint");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternPrint_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternPrint");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternPrint_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternPrint");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcFontSetPrint_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontSetPrint");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcFontSetPrint_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontSetPrint");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcGetDefaultLangs_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcGetDefaultLangs");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcGetDefaultLangs_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcGetDefaultLangs");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcDefaultSubstitute_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcDefaultSubstitute");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcDefaultSubstitute_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcDefaultSubstitute");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcFileIsDir_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFileIsDir");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcFileIsDir_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFileIsDir");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcFileScan_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFileScan");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcFileScan_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFileScan");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcDirScan_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcDirScan");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcDirScan_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcDirScan");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcDirSave_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcDirSave");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcDirSave_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcDirSave");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcDirCacheLoad_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcDirCacheLoad");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcDirCacheLoad_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcDirCacheLoad");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcDirCacheRescan_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcDirCacheRescan");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcDirCacheRescan_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcDirCacheRescan");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcDirCacheRead_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcDirCacheRead");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcDirCacheRead_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcDirCacheRead");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcDirCacheLoadFile_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcDirCacheLoadFile");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcDirCacheLoadFile_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcDirCacheLoadFile");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcDirCacheUnload_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcDirCacheUnload");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcDirCacheUnload_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcDirCacheUnload");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcFreeTypeQuery_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFreeTypeQuery");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcFreeTypeQuery_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFreeTypeQuery");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcFontSetCreate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontSetCreate");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcFontSetCreate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontSetCreate");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcFontSetDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontSetDestroy");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcFontSetDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontSetDestroy");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcFontSetAdd_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontSetAdd");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcFontSetAdd_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontSetAdd");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcInitLoadConfig_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcInitLoadConfig");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcInitLoadConfig_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcInitLoadConfig");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcInitLoadConfigAndFonts_dylibloader_wrapper_fontconfig =
             dlsym(lVar1,"FcInitLoadConfigAndFonts");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcInitLoadConfigAndFonts_dylibloader_wrapper_fontconfig =
             dlsym(lVar1,"FcInitLoadConfigAndFonts");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcInit_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcInit");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcInit_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcInit");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcFini_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFini");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcFini_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFini");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcGetVersion_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcGetVersion");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcGetVersion_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcGetVersion");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcInitReinitialize_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcInitReinitialize");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcInitReinitialize_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcInitReinitialize");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcInitBringUptoDate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcInitBringUptoDate");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcInitBringUptoDate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcInitBringUptoDate");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcGetLangs_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcGetLangs");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcGetLangs_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcGetLangs");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcLangNormalize_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangNormalize");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcLangNormalize_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangNormalize");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcLangGetCharSet_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangGetCharSet");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcLangGetCharSet_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangGetCharSet");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcLangSetCreate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetCreate");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcLangSetCreate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetCreate");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcLangSetDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetDestroy");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcLangSetDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetDestroy");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcLangSetCopy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetCopy");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcLangSetCopy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetCopy");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcLangSetAdd_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetAdd");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcLangSetAdd_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetAdd");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcLangSetDel_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetDel");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcLangSetDel_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetDel");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcLangSetHasLang_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetHasLang");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcLangSetHasLang_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetHasLang");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcLangSetCompare_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetCompare");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcLangSetCompare_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetCompare");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcLangSetContains_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetContains");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcLangSetContains_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetContains");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcLangSetEqual_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetEqual");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcLangSetEqual_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetEqual");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcLangSetHash_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetHash");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcLangSetHash_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetHash");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcLangSetGetLangs_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetGetLangs");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcLangSetGetLangs_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetGetLangs");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcLangSetUnion_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetUnion");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcLangSetUnion_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetUnion");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcLangSetSubtract_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetSubtract");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcLangSetSubtract_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcLangSetSubtract");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcObjectSetCreate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcObjectSetCreate");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcObjectSetCreate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcObjectSetCreate");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcObjectSetAdd_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcObjectSetAdd");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcObjectSetAdd_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcObjectSetAdd");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcObjectSetDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcObjectSetDestroy");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcObjectSetDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcObjectSetDestroy");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcObjectSetVaBuild_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcObjectSetVaBuild");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcObjectSetVaBuild_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcObjectSetVaBuild");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcObjectSetBuild_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcObjectSetBuild");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcObjectSetBuild_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcObjectSetBuild");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcFontSetList_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontSetList");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcFontSetList_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontSetList");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcFontList_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontList");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcFontList_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontList");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcAtomicCreate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcAtomicCreate");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcAtomicCreate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcAtomicCreate");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcAtomicLock_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcAtomicLock");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcAtomicLock_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcAtomicLock");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcAtomicNewFile_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcAtomicNewFile");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcAtomicNewFile_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcAtomicNewFile");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcAtomicOrigFile_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcAtomicOrigFile");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcAtomicOrigFile_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcAtomicOrigFile");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcAtomicReplaceOrig_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcAtomicReplaceOrig");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcAtomicReplaceOrig_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcAtomicReplaceOrig");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcAtomicDeleteNew_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcAtomicDeleteNew");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcAtomicDeleteNew_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcAtomicDeleteNew");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcAtomicUnlock_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcAtomicUnlock");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcAtomicUnlock_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcAtomicUnlock");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcAtomicDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcAtomicDestroy");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcAtomicDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcAtomicDestroy");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcFontSetMatch_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontSetMatch");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcFontSetMatch_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontSetMatch");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcFontMatch_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontMatch");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcFontMatch_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontMatch");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcFontRenderPrepare_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontRenderPrepare");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcFontRenderPrepare_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontRenderPrepare");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcFontSetSort_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontSetSort");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcFontSetSort_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontSetSort");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcFontSort_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontSort");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcFontSort_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontSort");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcFontSetSortDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontSetSortDestroy");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcFontSetSortDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcFontSetSortDestroy");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcMatrixCopy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcMatrixCopy");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcMatrixCopy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcMatrixCopy");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcMatrixEqual_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcMatrixEqual");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcMatrixEqual_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcMatrixEqual");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcMatrixMultiply_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcMatrixMultiply");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcMatrixMultiply_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcMatrixMultiply");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcMatrixRotate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcMatrixRotate");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcMatrixRotate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcMatrixRotate");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcMatrixScale_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcMatrixScale");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcMatrixScale_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcMatrixScale");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcMatrixShear_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcMatrixShear");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcMatrixShear_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcMatrixShear");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcNameRegisterObjectTypes_dylibloader_wrapper_fontconfig =
             dlsym(lVar1,"FcNameRegisterObjectTypes");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcNameRegisterObjectTypes_dylibloader_wrapper_fontconfig =
             dlsym(lVar1,"FcNameRegisterObjectTypes");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcNameUnregisterObjectTypes_dylibloader_wrapper_fontconfig =
             dlsym(lVar1,"FcNameUnregisterObjectTypes");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcNameUnregisterObjectTypes_dylibloader_wrapper_fontconfig =
             dlsym(lVar1,"FcNameUnregisterObjectTypes");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcNameGetObjectType_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcNameGetObjectType");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcNameGetObjectType_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcNameGetObjectType");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcNameRegisterConstants_dylibloader_wrapper_fontconfig =
             dlsym(lVar1,"FcNameRegisterConstants");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcNameRegisterConstants_dylibloader_wrapper_fontconfig =
             dlsym(lVar1,"FcNameRegisterConstants");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcNameUnregisterConstants_dylibloader_wrapper_fontconfig =
             dlsym(lVar1,"FcNameUnregisterConstants");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcNameUnregisterConstants_dylibloader_wrapper_fontconfig =
             dlsym(lVar1,"FcNameUnregisterConstants");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcNameGetConstant_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcNameGetConstant");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcNameGetConstant_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcNameGetConstant");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcNameConstant_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcNameConstant");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcNameConstant_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcNameConstant");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcNameParse_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcNameParse");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcNameParse_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcNameParse");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcNameUnparse_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcNameUnparse");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcNameUnparse_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcNameUnparse");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternCreate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternCreate");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternCreate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternCreate");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternDuplicate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternDuplicate");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternDuplicate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternDuplicate");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternReference_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternReference");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternReference_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternReference");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternFilter_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternFilter");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternFilter_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternFilter");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcValueDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcValueDestroy");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcValueDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcValueDestroy");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcValueEqual_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcValueEqual");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcValueEqual_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcValueEqual");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcValueSave_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcValueSave");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcValueSave_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcValueSave");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternDestroy");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternDestroy");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternEqual_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternEqual");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternEqual_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternEqual");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternEqualSubset_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternEqualSubset");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternEqualSubset_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternEqualSubset");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternHash_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternHash");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternHash_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternHash");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternAdd_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternAdd");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternAdd_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternAdd");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternAddWeak_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternAddWeak");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternAddWeak_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternAddWeak");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternGet_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternGet");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternGet_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternGet");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternGetWithBinding_dylibloader_wrapper_fontconfig =
             dlsym(lVar1,"FcPatternGetWithBinding");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternGetWithBinding_dylibloader_wrapper_fontconfig =
             dlsym(lVar1,"FcPatternGetWithBinding");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternDel_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternDel");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternDel_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternDel");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternRemove_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternRemove");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternRemove_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternRemove");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternAddInteger_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternAddInteger");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternAddInteger_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternAddInteger");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternAddDouble_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternAddDouble");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternAddDouble_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternAddDouble");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternAddString_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternAddString");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternAddString_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternAddString");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternAddMatrix_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternAddMatrix");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternAddMatrix_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternAddMatrix");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternAddCharSet_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternAddCharSet");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternAddCharSet_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternAddCharSet");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternAddBool_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternAddBool");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternAddBool_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternAddBool");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternAddLangSet_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternAddLangSet");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternAddLangSet_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternAddLangSet");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternAddRange_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternAddRange");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternAddRange_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternAddRange");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternGetInteger_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternGetInteger");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternGetInteger_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternGetInteger");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternGetDouble_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternGetDouble");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternGetDouble_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternGetDouble");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternGetString_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternGetString");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternGetString_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternGetString");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternGetMatrix_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternGetMatrix");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternGetMatrix_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternGetMatrix");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternGetCharSet_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternGetCharSet");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternGetCharSet_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternGetCharSet");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternGetBool_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternGetBool");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternGetBool_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternGetBool");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternGetLangSet_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternGetLangSet");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternGetLangSet_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternGetLangSet");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternGetRange_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternGetRange");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternGetRange_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternGetRange");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternVaBuild_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternVaBuild");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternVaBuild_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternVaBuild");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternBuild_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternBuild");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternBuild_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternBuild");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcPatternFormat_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternFormat");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcPatternFormat_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcPatternFormat");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcRangeCreateDouble_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcRangeCreateDouble");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcRangeCreateDouble_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcRangeCreateDouble");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcRangeCreateInteger_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcRangeCreateInteger");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcRangeCreateInteger_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcRangeCreateInteger");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcRangeDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcRangeDestroy");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcRangeDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcRangeDestroy");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcRangeCopy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcRangeCopy");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcRangeCopy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcRangeCopy");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcRangeGetDouble_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcRangeGetDouble");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcRangeGetDouble_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcRangeGetDouble");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcWeightFromOpenType_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcWeightFromOpenType");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcWeightFromOpenType_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcWeightFromOpenType");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcWeightToOpenType_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcWeightToOpenType");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcWeightToOpenType_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcWeightToOpenType");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcStrCopy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrCopy");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcStrCopy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrCopy");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcStrCopyFilename_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrCopyFilename");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcStrCopyFilename_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrCopyFilename");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcStrPlus_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrPlus");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcStrPlus_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrPlus");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcStrFree_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrFree");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcStrFree_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrFree");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcStrDowncase_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrDowncase");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcStrDowncase_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrDowncase");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcStrCmpIgnoreCase_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrCmpIgnoreCase");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcStrCmpIgnoreCase_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrCmpIgnoreCase");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcStrCmp_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrCmp");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcStrCmp_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrCmp");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcStrStrIgnoreCase_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrStrIgnoreCase");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcStrStrIgnoreCase_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrStrIgnoreCase");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcStrStr_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrStr");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcStrStr_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrStr");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcUtf8ToUcs4_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcUtf8ToUcs4");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcUtf8ToUcs4_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcUtf8ToUcs4");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcUtf8Len_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcUtf8Len");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcUtf8Len_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcUtf8Len");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcUcs4ToUtf8_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcUcs4ToUtf8");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcUcs4ToUtf8_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcUcs4ToUtf8");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcUtf16ToUcs4_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcUtf16ToUcs4");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcUtf16ToUcs4_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcUtf16ToUcs4");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcUtf16Len_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcUtf16Len");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcUtf16Len_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcUtf16Len");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcStrDirname_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrDirname");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcStrDirname_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrDirname");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcStrBasename_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrBasename");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcStrBasename_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrBasename");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcStrSetCreate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrSetCreate");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcStrSetCreate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrSetCreate");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcStrSetMember_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrSetMember");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcStrSetMember_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrSetMember");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcStrSetEqual_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrSetEqual");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcStrSetEqual_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrSetEqual");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcStrSetAdd_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrSetAdd");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcStrSetAdd_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrSetAdd");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcStrSetAddFilename_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrSetAddFilename");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcStrSetAddFilename_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrSetAddFilename");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcStrSetDel_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrSetDel");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcStrSetDel_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrSetDel");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcStrSetDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrSetDestroy");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcStrSetDestroy_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrSetDestroy");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcStrListCreate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrListCreate");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcStrListCreate_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrListCreate");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcStrListFirst_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrListFirst");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcStrListFirst_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrListFirst");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcStrListNext_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrListNext");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcStrListNext_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrListNext");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcStrListDone_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrListDone");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcStrListDone_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcStrListDone");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcConfigParseAndLoad_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigParseAndLoad");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcConfigParseAndLoad_dylibloader_wrapper_fontconfig = dlsym(lVar1,"FcConfigParseAndLoad");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        FcConfigParseAndLoadFromMemory_dylibloader_wrapper_fontconfig =
             dlsym(lVar1,"FcConfigParseAndLoadFromMemory");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        FcConfigParseAndLoadFromMemory_dylibloader_wrapper_fontconfig =
             dlsym(lVar1,"FcConfigParseAndLoadFromMemory");
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


