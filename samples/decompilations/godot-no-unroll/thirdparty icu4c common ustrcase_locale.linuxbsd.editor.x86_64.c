
undefined8 ustrcase_getCaseLocale_76_godot(char *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if (param_1 == (char *)0x0) {
    pcVar2 = (char *)uloc_getDefault_76_godot();
    if (*pcVar2 != '\0') {
      uVar1 = ucase_getCaseLocale_76_godot(pcVar2);
      return uVar1;
    }
    return 1;
  }
  if (*param_1 == '\0') {
    return 1;
  }
  uVar1 = ucase_getCaseLocale_76_godot();
  return uVar1;
}



void u_strToLower_76_godot
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
               char *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  
  if (param_5 == (char *)0x0) {
    param_5 = (char *)uloc_getDefault_76_godot();
  }
  uVar1 = 1;
  if (*param_5 != '\0') {
    uVar1 = ucase_getCaseLocale_76_godot(param_5);
  }
  ustrcase_mapWithOverlap_76_godot
            (uVar1,0,0,param_1,param_2,param_3,param_4,_GLOBAL_OFFSET_TABLE_,param_6);
  return;
}



void u_strToUpper_76_godot
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
               char *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  
  if (param_5 == (char *)0x0) {
    param_5 = (char *)uloc_getDefault_76_godot();
  }
  uVar1 = 1;
  if (*param_5 != '\0') {
    uVar1 = ucase_getCaseLocale_76_godot(param_5);
  }
  ustrcase_mapWithOverlap_76_godot
            (uVar1,0,0,param_1,param_2,param_3,param_4,
             PTR_ustrcase_internalToUpper_76_godot_00102008,param_6);
  return;
}



/* icu_76_godot::CaseMap::toLower(char const*, unsigned int, char16_t const*, int, char16_t*, int,
   icu_76_godot::Edits*, UErrorCode&) */

void icu_76_godot::CaseMap::toLower
               (char *param_1,uint param_2,wchar16 *param_3,int param_4,wchar16 *param_5,int param_6
               ,Edits *param_7,UErrorCode *param_8)

{
  undefined4 uVar1;
  
  if (param_1 == (char *)0x0) {
    param_1 = (char *)uloc_getDefault_76_godot();
  }
  uVar1 = 1;
  if (*param_1 != '\0') {
    uVar1 = ucase_getCaseLocale_76_godot();
  }
  ustrcase_map_76_godot
            (uVar1,param_2,0,param_5,param_6,param_3,param_4,_GLOBAL_OFFSET_TABLE_,param_7,param_8);
  return;
}



/* icu_76_godot::CaseMap::toUpper(char const*, unsigned int, char16_t const*, int, char16_t*, int,
   icu_76_godot::Edits*, UErrorCode&) */

void icu_76_godot::CaseMap::toUpper
               (char *param_1,uint param_2,wchar16 *param_3,int param_4,wchar16 *param_5,int param_6
               ,Edits *param_7,UErrorCode *param_8)

{
  undefined4 uVar1;
  
  if (param_1 == (char *)0x0) {
    param_1 = (char *)uloc_getDefault_76_godot();
  }
  uVar1 = 1;
  if (*param_1 != '\0') {
    uVar1 = ucase_getCaseLocale_76_godot();
  }
  ustrcase_map_76_godot
            (uVar1,param_2,0,param_5,param_6,param_3,param_4,
             PTR_ustrcase_internalToUpper_76_godot_00102008,param_7,param_8);
  return;
}


