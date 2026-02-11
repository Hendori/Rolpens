
/* (anonymous namespace)::_getStringOrCopyKey(char const*, char const*, char const*, char const*,
   char const*, char const*, char16_t*, int, UErrorCode&) [clone .part.0] */

void (anonymous_namespace)::_getStringOrCopyKey
               (char *param_1,char *param_2,char *param_3,char *param_4,char *param_5,char *param_6,
               wchar16 *param_7,int param_8,UErrorCode *param_9)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  size_t sVar4;
  undefined8 uVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  long in_FS_OFFSET;
  undefined1 auVar6 [16];
  UErrorCode *pUVar7;
  undefined4 local_12c;
  Locale local_128 [40];
  undefined8 local_100;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_12c = 0;
  if (param_5 == (char *)0x0) {
    lVar3 = ures_open_76_godot(param_1,param_2,param_9);
    if (*(int *)param_9 < 1) {
      auVar6 = ures_getStringByKey_76_godot(lVar3,param_3,&local_12c,param_9);
      uVar5 = auVar6._0_8_;
      if (lVar3 != 0) goto LAB_0010022b;
    }
    else {
      uVar5 = 0;
      if (lVar3 == 0) goto LAB_00100095;
LAB_0010022b:
      ures_close_76_godot(lVar3);
      auVar6._8_8_ = extraout_RDX_00;
      auVar6._0_8_ = uVar5;
    }
    iVar1 = *(int *)param_9;
LAB_00100132:
    if (iVar1 < 1) {
LAB_0010013a:
      iVar1 = uprv_min_76_godot(local_12c,param_8,auVar6._8_8_);
      if ((0 < iVar1) && (auVar6._0_8_ != 0)) {
        u_memcpy_76_godot(param_7,auVar6._0_8_,iVar1);
      }
      goto LAB_001000c3;
    }
  }
  else {
    iVar1 = strncmp(param_3,"Languages",9);
    if (iVar1 != 0) {
      pUVar7 = param_9;
      uVar5 = uloc_getTableStringWithFallback_76_godot
                        (param_1,param_2,param_3,param_4,param_5,&local_12c);
      auVar6._8_8_ = pUVar7;
      auVar6._0_8_ = uVar5;
      iVar1 = *(int *)param_9;
      goto LAB_00100132;
    }
    lVar3 = __isoc23_strtol(param_5,0,10);
    if (lVar3 == 0) {
      auVar6 = uloc_getTableStringWithFallback_76_godot
                         (param_1,param_2,param_3,param_4,param_5,&local_12c,param_9);
      if (0 < *(int *)param_9) {
        *(undefined4 *)param_9 = 0;
        icu_76_godot::Locale::createCanonical((char *)local_128);
        uVar5 = uloc_getTableStringWithFallback_76_godot
                          (param_1,param_2,param_3,param_4,local_100,&local_12c,param_9);
        icu_76_godot::Locale::~Locale(local_128);
        auVar6._8_8_ = extraout_RDX;
        auVar6._0_8_ = uVar5;
        iVar1 = *(int *)param_9;
        goto LAB_00100132;
      }
      goto LAB_0010013a;
    }
    *(undefined4 *)param_9 = 2;
  }
LAB_00100095:
  sVar4 = strlen(param_6);
  local_12c = (undefined4)sVar4;
  uVar2 = uprv_min_76_godot(sVar4 & 0xffffffff,param_8);
  u_charsToUChars_76_godot(param_6,param_7,uVar2);
  *(undefined4 *)param_9 = 0xffffff81;
LAB_001000c3:
  u_terminateUChars_76_godot(param_7,param_8,local_12c,param_9);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00100360) */
/* (anonymous namespace)::_getDisplayNameForComponent(char const*, char const*, char16_t*, int,
   icu_76_godot::CharString (*)(char const*, UErrorCode&), char const*, UErrorCode&) */

ulong (anonymous_namespace)::_getDisplayNameForComponent
                (char *param_1,char *param_2,wchar16 *param_3,int param_4,
                _func_CharString_char_ptr_UErrorCode_ptr *param_5,char *param_6,UErrorCode *param_7)

{
  ulong uVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  int local_98 [2];
  uint local_90;
  char *local_88;
  char local_7c;
  int local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_7 < 1) {
    if ((-1 < param_4) && ((param_4 < 1 || (param_3 != (wchar16 *)0x0)))) {
      (*param_5)((char *)&local_88,(UErrorCode *)param_1);
      if (local_50 == 0) {
        if (param_5 == (_func_CharString_char_ptr_UErrorCode_ptr *)_GLOBAL_OFFSET_TABLE_) {
          icu_76_godot::StringPiece::StringPiece((StringPiece *)local_98,"und");
          icu_76_godot::CharString::append
                    ((char *)&local_88,local_98[0],(UErrorCode *)(ulong)local_90);
          goto LAB_00100397;
        }
        uVar1 = u_terminateUChars_76_godot(param_3,param_4,0,param_7);
      }
      else {
LAB_00100397:
        pcVar2 = "icudt76l-lang";
        if (param_6 == "Countries") {
          pcVar2 = "icudt76l-region";
        }
        if (*(int *)param_7 < 1) {
          uVar1 = _getStringOrCopyKey(pcVar2,param_2,param_6,(char *)0x0,local_88,local_88,param_3,
                                      param_4,param_7);
        }
        else {
          uVar1 = 0;
        }
      }
      if (local_7c != '\0') {
        uprv_free_76_godot(local_88);
        uVar1 = uVar1 & 0xffffffff;
      }
      goto LAB_001002c3;
    }
    *(undefined4 *)param_7 = 1;
  }
  uVar1 = 0;
LAB_001002c3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



void uloc_getDisplayLanguage_76_godot
               (char *param_1,char *param_2,wchar16 *param_3,int param_4,UErrorCode *param_5)

{
  (anonymous_namespace)::_getDisplayNameForComponent
            (param_1,param_2,param_3,param_4,ulocimp_getLanguage_76_godot,"Languages",param_5);
  return;
}



/* icu_76_godot::Locale::getDisplayLanguage(icu_76_godot::Locale const&,
   icu_76_godot::UnicodeString&) const */

UnicodeString * __thiscall
icu_76_godot::Locale::getDisplayLanguage(Locale *this,Locale *param_1,UnicodeString *param_2)

{
  ushort uVar1;
  wchar16 *pwVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0;
  iVar4 = (int)param_2;
  pwVar2 = (wchar16 *)icu_76_godot::UnicodeString::getBuffer(iVar4);
  if (pwVar2 != (wchar16 *)0x0) {
    iVar3 = 0x1b;
    if (((byte)param_2[8] & 2) == 0) {
      iVar3 = *(int *)(param_2 + 0x10);
    }
    (anonymous_namespace)::_getDisplayNameForComponent
              (*(char **)(this + 0x28),*(char **)(param_1 + 0x28),pwVar2,iVar3,
               ulocimp_getLanguage_76_godot,"Languages",(UErrorCode *)&local_34);
    icu_76_godot::UnicodeString::releaseBuffer(iVar4);
    if (local_34 != 0xf) goto LAB_001004c0;
    pwVar2 = (wchar16 *)icu_76_godot::UnicodeString::getBuffer(iVar4);
    if (pwVar2 != (wchar16 *)0x0) {
      local_34 = 0;
      iVar3 = 0x1b;
      if (((byte)param_2[8] & 2) == 0) {
        iVar3 = *(int *)(param_2 + 0x10);
      }
      (anonymous_namespace)::_getDisplayNameForComponent
                (*(char **)(this + 0x28),*(char **)(param_1 + 0x28),pwVar2,iVar3,
                 ulocimp_getLanguage_76_godot,"Languages",(UErrorCode *)&local_34);
      icu_76_godot::UnicodeString::releaseBuffer(iVar4);
      goto LAB_001004c0;
    }
  }
  uVar1 = *(ushort *)(param_2 + 8);
  if ((uVar1 & 1) == 0) {
    if ((short)uVar1 < 0) {
      iVar4 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar4 = (int)((short)uVar1 >> 5);
    }
    if (iVar4 != 0) {
      *(ushort *)(param_2 + 8) = uVar1 & 0x1f;
    }
  }
  else {
    icu_76_godot::UnicodeString::unBogus();
  }
LAB_001004c0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Locale::getDisplayLanguage(icu_76_godot::UnicodeString&) const */

void __thiscall icu_76_godot::Locale::getDisplayLanguage(Locale *this,UnicodeString *param_1)

{
  Locale *pLVar1;
  
  pLVar1 = (Locale *)icu_76_godot::Locale::getDefault();
  getDisplayLanguage(this,pLVar1,param_1);
  return;
}



int uloc_getDisplayScript_76_godot_part_0
              (char *param_1,char *param_2,wchar16 *param_3,int param_4,UErrorCode *param_5)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  iVar1 = (anonymous_namespace)::_getDisplayNameForComponent
                    (param_1,param_2,param_3,param_4,ulocimp_getScript_76_godot,
                     "Scripts%stand-alone",(UErrorCode *)&local_44);
  if ((param_4 == 0) && (local_44 == 0xf)) {
    iVar2 = (anonymous_namespace)::_getDisplayNameForComponent
                      (param_1,param_2,param_3,0,ulocimp_getScript_76_godot,"Scripts",param_5);
    if (iVar1 < iVar2) {
      iVar1 = iVar2;
    }
  }
  else if (local_44 == -0x7f) {
    iVar1 = (anonymous_namespace)::_getDisplayNameForComponent
                      (param_1,param_2,param_3,param_4,ulocimp_getScript_76_godot,"Scripts",param_5)
    ;
  }
  else {
    *(int *)param_5 = local_44;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



undefined8 uloc_getDisplayScript_76_godot(void)

{
  undefined8 uVar1;
  int *in_R8;
  
  if (0 < *in_R8) {
    return 0;
  }
  uVar1 = uloc_getDisplayScript_76_godot_part_0();
  return uVar1;
}



/* icu_76_godot::Locale::getDisplayScript(icu_76_godot::Locale const&, icu_76_godot::UnicodeString&)
   const */

UnicodeString * __thiscall
icu_76_godot::Locale::getDisplayScript(Locale *this,Locale *param_1,UnicodeString *param_2)

{
  ushort uVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0;
  iVar4 = (int)param_2;
  lVar2 = icu_76_godot::UnicodeString::getBuffer(iVar4);
  if (lVar2 != 0) {
    uVar3 = 0x1b;
    if (((byte)param_2[8] & 2) == 0) {
      uVar3 = *(undefined4 *)(param_2 + 0x10);
    }
    if (local_34 < 1) {
      uloc_getDisplayScript_76_godot_part_0
                (*(undefined8 *)(this + 0x28),*(undefined8 *)(param_1 + 0x28),lVar2,uVar3,&local_34)
      ;
    }
    icu_76_godot::UnicodeString::releaseBuffer(iVar4);
    if (local_34 != 0xf) goto LAB_00100788;
    lVar2 = icu_76_godot::UnicodeString::getBuffer(iVar4);
    if (lVar2 != 0) {
      local_34 = 0;
      uVar3 = 0x1b;
      if (((byte)param_2[8] & 2) == 0) {
        uVar3 = *(undefined4 *)(param_2 + 0x10);
      }
      uloc_getDisplayScript_76_godot_part_0
                (*(undefined8 *)(this + 0x28),*(undefined8 *)(param_1 + 0x28),lVar2,uVar3,&local_34)
      ;
      icu_76_godot::UnicodeString::releaseBuffer(iVar4);
      goto LAB_00100788;
    }
  }
  uVar1 = *(ushort *)(param_2 + 8);
  if ((uVar1 & 1) == 0) {
    if ((short)uVar1 < 0) {
      iVar4 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar4 = (int)((short)uVar1 >> 5);
    }
    if (iVar4 != 0) {
      *(ushort *)(param_2 + 8) = uVar1 & 0x1f;
    }
  }
  else {
    icu_76_godot::UnicodeString::unBogus();
  }
LAB_00100788:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Locale::getDisplayScript(icu_76_godot::UnicodeString&) const */

void __thiscall icu_76_godot::Locale::getDisplayScript(Locale *this,UnicodeString *param_1)

{
  Locale *pLVar1;
  
  pLVar1 = (Locale *)icu_76_godot::Locale::getDefault();
  getDisplayScript(this,pLVar1,param_1);
  return;
}



void uloc_getDisplayCountry_76_godot
               (char *param_1,char *param_2,wchar16 *param_3,int param_4,UErrorCode *param_5)

{
  (anonymous_namespace)::_getDisplayNameForComponent
            (param_1,param_2,param_3,param_4,ulocimp_getRegion_76_godot,"Countries",param_5);
  return;
}



/* icu_76_godot::Locale::getDisplayCountry(icu_76_godot::Locale const&,
   icu_76_godot::UnicodeString&) const */

UnicodeString * __thiscall
icu_76_godot::Locale::getDisplayCountry(Locale *this,Locale *param_1,UnicodeString *param_2)

{
  ushort uVar1;
  wchar16 *pwVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0;
  iVar4 = (int)param_2;
  pwVar2 = (wchar16 *)icu_76_godot::UnicodeString::getBuffer(iVar4);
  if (pwVar2 != (wchar16 *)0x0) {
    iVar3 = 0x1b;
    if (((byte)param_2[8] & 2) == 0) {
      iVar3 = *(int *)(param_2 + 0x10);
    }
    (anonymous_namespace)::_getDisplayNameForComponent
              (*(char **)(this + 0x28),*(char **)(param_1 + 0x28),pwVar2,iVar3,
               ulocimp_getRegion_76_godot,"Countries",(UErrorCode *)&local_34);
    icu_76_godot::UnicodeString::releaseBuffer(iVar4);
    if (local_34 != 0xf) goto LAB_00100960;
    pwVar2 = (wchar16 *)icu_76_godot::UnicodeString::getBuffer(iVar4);
    if (pwVar2 != (wchar16 *)0x0) {
      local_34 = 0;
      iVar3 = 0x1b;
      if (((byte)param_2[8] & 2) == 0) {
        iVar3 = *(int *)(param_2 + 0x10);
      }
      (anonymous_namespace)::_getDisplayNameForComponent
                (*(char **)(this + 0x28),*(char **)(param_1 + 0x28),pwVar2,iVar3,
                 ulocimp_getRegion_76_godot,"Countries",(UErrorCode *)&local_34);
      icu_76_godot::UnicodeString::releaseBuffer(iVar4);
      goto LAB_00100960;
    }
  }
  uVar1 = *(ushort *)(param_2 + 8);
  if ((uVar1 & 1) == 0) {
    if ((short)uVar1 < 0) {
      iVar4 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar4 = (int)((short)uVar1 >> 5);
    }
    if (iVar4 != 0) {
      *(ushort *)(param_2 + 8) = uVar1 & 0x1f;
    }
  }
  else {
    icu_76_godot::UnicodeString::unBogus();
  }
LAB_00100960:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Locale::getDisplayCountry(icu_76_godot::UnicodeString&) const */

void __thiscall icu_76_godot::Locale::getDisplayCountry(Locale *this,UnicodeString *param_1)

{
  Locale *pLVar1;
  
  pLVar1 = (Locale *)icu_76_godot::Locale::getDefault();
  getDisplayCountry(this,pLVar1,param_1);
  return;
}



void uloc_getDisplayVariant_76_godot
               (char *param_1,char *param_2,wchar16 *param_3,int param_4,UErrorCode *param_5)

{
  (anonymous_namespace)::_getDisplayNameForComponent
            (param_1,param_2,param_3,param_4,ulocimp_getVariant_76_godot,"Variants",param_5);
  return;
}



/* icu_76_godot::Locale::getDisplayVariant(icu_76_godot::Locale const&,
   icu_76_godot::UnicodeString&) const */

UnicodeString * __thiscall
icu_76_godot::Locale::getDisplayVariant(Locale *this,Locale *param_1,UnicodeString *param_2)

{
  ushort uVar1;
  wchar16 *pwVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0;
  iVar4 = (int)param_2;
  pwVar2 = (wchar16 *)icu_76_godot::UnicodeString::getBuffer(iVar4);
  if (pwVar2 != (wchar16 *)0x0) {
    iVar3 = 0x1b;
    if (((byte)param_2[8] & 2) == 0) {
      iVar3 = *(int *)(param_2 + 0x10);
    }
    (anonymous_namespace)::_getDisplayNameForComponent
              (*(char **)(this + 0x28),*(char **)(param_1 + 0x28),pwVar2,iVar3,
               ulocimp_getVariant_76_godot,"Variants",(UErrorCode *)&local_34);
    icu_76_godot::UnicodeString::releaseBuffer(iVar4);
    if (local_34 != 0xf) goto LAB_00100b40;
    pwVar2 = (wchar16 *)icu_76_godot::UnicodeString::getBuffer(iVar4);
    if (pwVar2 != (wchar16 *)0x0) {
      local_34 = 0;
      iVar3 = 0x1b;
      if (((byte)param_2[8] & 2) == 0) {
        iVar3 = *(int *)(param_2 + 0x10);
      }
      (anonymous_namespace)::_getDisplayNameForComponent
                (*(char **)(this + 0x28),*(char **)(param_1 + 0x28),pwVar2,iVar3,
                 ulocimp_getVariant_76_godot,"Variants",(UErrorCode *)&local_34);
      icu_76_godot::UnicodeString::releaseBuffer(iVar4);
      goto LAB_00100b40;
    }
  }
  uVar1 = *(ushort *)(param_2 + 8);
  if ((uVar1 & 1) == 0) {
    if ((short)uVar1 < 0) {
      iVar4 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar4 = (int)((short)uVar1 >> 5);
    }
    if (iVar4 != 0) {
      *(ushort *)(param_2 + 8) = uVar1 & 0x1f;
    }
  }
  else {
    icu_76_godot::UnicodeString::unBogus();
  }
LAB_00100b40:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Locale::getDisplayVariant(icu_76_godot::UnicodeString&) const */

void __thiscall icu_76_godot::Locale::getDisplayVariant(Locale *this,UnicodeString *param_1)

{
  Locale *pLVar1;
  
  pLVar1 = (Locale *)icu_76_godot::Locale::getDefault();
  getDisplayVariant(this,pLVar1,param_1);
  return;
}



undefined8
uloc_getDisplayKeyword_76_godot
          (char *param_1,char *param_2,wchar16 *param_3,int param_4,UErrorCode *param_5)

{
  undefined8 uVar1;
  
  if ((param_5 != (UErrorCode *)0x0) && (*(int *)param_5 < 1)) {
    if ((-1 < param_4) && ((param_4 < 1 || (param_3 != (wchar16 *)0x0)))) {
      uVar1 = (anonymous_namespace)::_getStringOrCopyKey
                        ("icudt76l-lang",param_2,"Keys",(char *)0x0,param_1,param_1,param_3,param_4,
                         param_5);
      return uVar1;
    }
    *(undefined4 *)param_5 = 1;
  }
  return 0;
}



int uloc_getDisplayKeywordValue_76_godot_part_0
              (undefined8 param_1,char *param_2,char *param_3,wchar16 *param_4,int param_5,
              UErrorCode *param_6)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  int local_cc;
  char *local_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  int local_90;
  undefined8 local_88;
  char local_7c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c8 = (char *)((long)&local_bc + 1);
  local_c0 = 0x28;
  local_90 = 0;
  local_bc = 0;
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    sVar2 = strlen(param_2);
    ulocimp_getKeywordValue_76_godot(&local_88,param_1,sVar2,param_2,param_6);
    icu_76_godot::CharString::operator=((CharString *)&local_c8,(CharString *)&local_88);
    if (local_7c != '\0') {
      uprv_free_76_godot(local_88);
    }
  }
  iVar1 = uprv_stricmp_76_godot(param_2,"currency");
  if (iVar1 == 0) {
    local_cc = 0;
    lVar3 = ures_open_76_godot("icudt76l-curr",param_3,param_6);
    lVar4 = ures_getByKey_76_godot(lVar3,"Currencies",0,param_6);
    lVar5 = ures_getByKeyWithFallback_76_godot(lVar4,local_c8,0,param_6);
    lVar6 = ures_getStringByIndex_76_godot(lVar5,1,&local_cc,param_6);
    if (*(int *)param_6 < 1) {
LAB_00100e66:
      if (lVar6 == 0) {
        iVar1 = local_90;
        if (param_5 < local_90) goto LAB_00100ef9;
        u_charsToUChars_76_godot(local_c8,param_4,local_90);
        iVar1 = local_90;
      }
      else {
        iVar1 = local_cc;
        if (param_5 < local_cc) {
LAB_00100ef9:
          *(undefined4 *)param_6 = 0xf;
          goto LAB_00100ea5;
        }
        u_memcpy_76_godot(param_4,lVar6,local_cc);
        iVar1 = local_cc;
      }
      iVar1 = u_terminateUChars_76_godot(param_4,param_5,iVar1,param_6);
    }
    else {
      iVar1 = 0;
      if (*(int *)param_6 == 2) {
        *(undefined4 *)param_6 = 0xffffff81;
        goto LAB_00100e66;
      }
    }
LAB_00100ea5:
    if (lVar5 != 0) {
      ures_close_76_godot(lVar5);
    }
    if (lVar4 != 0) {
      ures_close_76_godot(lVar4);
    }
    if (lVar3 != 0) {
      ures_close_76_godot(lVar3);
      goto joined_r0x00100ed5;
    }
  }
  else {
    iVar1 = 0;
    if (*(int *)param_6 < 1) {
      iVar1 = (anonymous_namespace)::_getStringOrCopyKey
                        ("icudt76l-lang",param_3,"Types",param_2,local_c8,local_c8,param_4,param_5,
                         param_6);
    }
  }
joined_r0x00100ed5:
  if ((char)local_bc != '\0') {
    uprv_free_76_godot(local_c8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 uloc_getDisplayKeywordValue_76_godot(void)

{
  undefined8 uVar1;
  long in_RCX;
  int in_R8D;
  int *in_R9;
  
  if ((in_R9 != (int *)0x0) && (*in_R9 < 1)) {
    if ((-1 < in_R8D) && ((in_R8D < 1 || (in_RCX != 0)))) {
      uVar1 = uloc_getDisplayKeywordValue_76_godot_part_0();
      return uVar1;
    }
    *in_R9 = 1;
  }
  return 0;
}



undefined8
uloc_getDisplayName_76_godot
          (char *param_1,char *param_2,wchar16 *param_3,int param_4,UErrorCode *param_5)

{
  wchar16 *pwVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  wchar16 *pwVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  uint uVar20;
  wchar16 *pwVar21;
  uint uVar22;
  code *pcVar23;
  char *pcVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  long in_FS_OFFSET;
  uint local_c0;
  long local_a8;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_88;
  uint local_84;
  undefined2 *local_70;
  wchar16 local_60;
  wchar16 local_5e;
  wchar16 local_5c;
  wchar16 local_5a;
  uint local_4c;
  uint local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = 0;
  local_48 = 0;
  if ((param_5 != (UErrorCode *)0x0) && (*(int *)param_5 < 1)) {
    if ((-1 < param_4) && ((param_4 < 1 || (param_3 != (wchar16 *)0x0)))) {
      local_44 = 0;
      lVar10 = ures_open_76_godot("icudt76l-lang",param_2,&local_44);
      lVar11 = ures_getByKeyWithFallback_76_godot(lVar10,"localeDisplayPattern",0,&local_44);
      puVar12 = (undefined1 *)
                ures_getStringByKeyWithFallback_76_godot(lVar11,"separator",&local_4c,&local_44);
      local_70 = (undefined2 *)
                 ures_getStringByKeyWithFallback_76_godot(lVar11,"pattern",&local_48,&local_44);
      if (lVar11 != 0) {
        ures_close_76_godot(lVar11);
      }
      if (lVar10 != 0) {
        ures_close_76_godot(lVar10);
      }
      if (local_4c == 0) {
        puVar12 = uloc_getDisplayName_76_godot::defaultSeparator;
      }
      uVar13 = u_strstr_76_godot(puVar12,&uloc_getDisplayName_76_godot::sub0);
      uVar14 = u_strstr_76_godot(puVar12,&uloc_getDisplayName_76_godot::sub1);
      if ((uVar13 != 0 && uVar14 != 0) && (uVar13 <= uVar14)) {
        local_4c = (uint)((long)(uVar14 - (uVar13 + 6)) >> 1);
        if ((local_48 == 0) ||
           ((local_48 == 9 &&
            (iVar8 = u_strncmp_76_godot(local_70,&uloc_getDisplayName_76_godot::defaultPattern,9),
            iVar8 == 0)))) {
          local_c0 = 0;
          local_48 = 9;
          local_60 = L']';
          local_5a = L')';
          local_5c = L'[';
          local_5e = L'(';
          local_88 = 5;
          local_a0 = 0;
          local_70 = &uloc_getDisplayName_76_godot::defaultPattern;
        }
        else {
          lVar10 = u_strstr_76_godot(local_70,&uloc_getDisplayName_76_godot::sub0);
          lVar11 = u_strstr_76_godot(local_70,&uloc_getDisplayName_76_godot::sub1);
          if ((lVar10 == 0) || (lVar11 == 0)) goto LAB_00100fda;
          uVar26 = (uint)(lVar10 - (long)local_70 >> 1);
          uVar9 = (uint)(lVar11 - (long)local_70 >> 1);
          local_88 = uVar26;
          local_a0 = uVar9;
          if ((int)uVar26 <= (int)uVar9) {
            local_88 = uVar9;
            local_a0 = uVar26;
          }
          local_c0 = (uint)((int)uVar9 < (int)uVar26);
          lVar10 = u_strchr_76_godot(local_70,0xff08);
          local_60 = (-(ushort)(lVar10 == 0) & 0x120) + L'］';
          local_5a = (-(ushort)(lVar10 == 0) & 0x120) + L'）';
          local_5c = (-(ushort)(lVar10 == 0) & 0x120) + L'［';
          local_5e = (-(ushort)(lVar10 == 0) & 0x120) + L'（';
        }
        bVar5 = false;
        bVar3 = true;
        bVar2 = true;
        do {
          pwVar21 = param_3;
          if (local_a0 == 0) {
            uVar9 = 0;
          }
          else {
            uVar9 = local_a0;
            if ((int)local_a0 <= param_4) {
              lVar10 = 0;
              if ((int)local_a0 < 1) {
                uVar9 = 0;
              }
              else {
                do {
                  *(undefined2 *)((long)param_3 + lVar10) = *(undefined2 *)((long)local_70 + lVar10)
                  ;
                  lVar10 = lVar10 + 2;
                } while ((long)(int)local_a0 * 2 != lVar10);
                pwVar21 = param_3 + local_a0;
              }
            }
          }
          local_9c = 0;
          uVar20 = 0;
          local_94 = 0;
          local_a8 = 0;
          local_84 = 0;
          local_98 = 0;
          uVar26 = local_a0;
          iVar8 = 0;
LAB_00101200:
          do {
            iVar25 = param_4 - uVar26;
            iVar28 = 0;
            if (0 < iVar25) {
              pwVar21 = param_3 + (int)uVar26;
              iVar28 = iVar25;
            }
            uVar27 = uVar26;
            if (local_c0 == uVar20) {
              if (bVar2) {
                local_98 = (anonymous_namespace)::_getDisplayNameForComponent
                                     (param_1,param_2,pwVar21,iVar28,ulocimp_getLanguage_76_godot,
                                      "Languages",param_5);
                bVar2 = 0 < (int)local_98;
                uVar27 = uVar26 + local_98;
                local_84 = uVar26;
              }
LAB_00101490:
              uVar26 = uVar27;
              if (*(int *)param_5 == 0xf) {
                bVar4 = true;
LAB_0010149f:
                *(undefined4 *)param_5 = 0;
                uVar26 = uVar27;
                goto LAB_001012ca;
              }
            }
            else {
              if (!bVar3) goto LAB_00101490;
              iVar7 = iVar8 + 1;
              if (iVar8 == 2) {
                pcVar23 = ulocimp_getVariant_76_godot;
                pcVar24 = "Variants";
LAB_00101276:
                iVar8 = (anonymous_namespace)::_getDisplayNameForComponent
                                  (param_1,param_2,pwVar21,iVar28,pcVar23,pcVar24,param_5);
                iVar18 = *(int *)param_5;
joined_r0x00101647:
                local_44 = iVar8;
                if (local_44 < 1) {
LAB_00101650:
                  bVar4 = false;
                }
                else {
                  iVar8 = local_4c + local_44;
                  if (iVar8 <= iVar28) {
LAB_00101778:
                    pwVar1 = pwVar21 + local_44;
                    pwVar16 = pwVar21;
                    if (pwVar21 < pwVar1) {
                      do {
                        while (*pwVar16 == local_5e) {
                          *pwVar16 = local_5c;
                          pwVar16 = pwVar16 + 1;
                          if (pwVar1 <= pwVar16) goto LAB_001017d0;
                        }
                        if (*pwVar16 == local_5a) {
                          *pwVar16 = local_60;
                        }
                        pwVar16 = pwVar16 + 1;
                      } while (pwVar16 < pwVar1);
LAB_001017d0:
                      pwVar21 = pwVar21 + local_44;
                    }
                    if (0 < (int)local_4c) {
                      lVar10 = 0;
                      do {
                        *(undefined2 *)((long)pwVar21 + lVar10) =
                             *(undefined2 *)(uVar13 + 6 + lVar10);
                        lVar10 = lVar10 + 2;
                      } while ((long)(int)local_4c * 2 != lVar10);
                      pwVar21 = pwVar21 + local_4c;
                    }
                  }
LAB_001012b7:
                  uVar26 = uVar26 + iVar8;
                  bVar4 = false;
                }
              }
              else {
                lVar10 = local_a8;
                if (iVar8 < 3) {
                  if (iVar8 != 0) {
                    if (iVar8 == 1) {
                      pcVar23 = ulocimp_getRegion_76_godot;
                      pcVar24 = "Countries";
                      goto LAB_00101276;
                    }
                    goto LAB_00101578;
                  }
                  local_44 = (anonymous_namespace)::_getDisplayNameForComponent
                                       (param_1,param_2,pwVar21,iVar28,ulocimp_getScript_76_godot,
                                        "Scripts",param_5);
                  iVar18 = *(int *)param_5;
                  local_9c = uVar26;
                  if (local_44 < 1) goto LAB_00101650;
                  iVar8 = local_4c + local_44;
                  if (iVar8 <= iVar28) goto LAB_00101778;
                  goto LAB_001012b7;
                }
                if ((iVar8 == 3) &&
                   (lVar10 = uloc_openKeywords_76_godot(param_1,param_5), local_a8 != 0)) {
                  uenum_close_76_godot(local_a8);
                }
LAB_00101578:
                local_a8 = lVar10;
                lVar10 = uenum_next_76_godot(local_a8,&local_44,param_5);
                if (lVar10 != 0) {
                  local_44 = uloc_getDisplayKeyword_76_godot(lVar10,param_2,pwVar21,iVar28,param_5);
                  if (local_44 != 0) {
                    if (local_44 < iVar28) {
                      pwVar21[local_44] = L'=';
                    }
                    local_44 = local_44 + 1;
                    iVar28 = iVar28 - local_44;
                    if (iVar28 < 1) {
                      iVar28 = 0;
                    }
                    else {
                      pwVar21 = pwVar21 + local_44;
                    }
                  }
                  iVar18 = *(int *)param_5;
                  if (iVar18 == 0xf) {
                    *(undefined4 *)param_5 = 0;
LAB_0010184f:
                    if ((0 < iVar28) && (pwVar21 == (wchar16 *)0x0)) {
                      *(undefined4 *)param_5 = 1;
                      iVar8 = iVar7;
                      if (local_44 != 0) {
                        iVar18 = 1;
                        goto LAB_00101624;
                      }
                      goto LAB_00101200;
                    }
                    iVar8 = uloc_getDisplayKeywordValue_76_godot_part_0
                                      (param_1,lVar10,param_2,pwVar21,iVar28,param_5);
                    iVar18 = *(int *)param_5;
                    if (local_44 == 0) goto joined_r0x00101647;
                    if (iVar8 == 0) goto LAB_00101624;
                    iVar8 = iVar8 + local_44;
                  }
                  else {
                    if (iVar18 < 1) goto LAB_0010184f;
                    iVar8 = iVar7;
                    if (local_44 == 0) goto LAB_00101200;
LAB_00101624:
                    iVar8 = local_44 + -1;
                  }
                  iVar28 = 0;
                  if (0 < iVar25) {
                    pwVar21 = param_3 + (int)uVar26;
                    iVar28 = iVar25;
                  }
                  goto joined_r0x00101647;
                }
                if (uVar26 == local_9c) {
                  local_94 = 0;
                  bVar19 = false;
                }
                else {
                  uVar26 = uVar26 - local_4c;
                  local_94 = uVar26 - local_9c;
                  bVar19 = 0 < (int)local_94;
                }
                iVar18 = *(int *)param_5;
                bVar4 = bVar3;
                bVar3 = bVar19;
              }
              uVar27 = uVar26;
              iVar8 = iVar7;
              if (iVar18 == 0xf) goto LAB_0010149f;
LAB_001012ca:
              if (!bVar4) goto LAB_00101200;
            }
            if ((bool)(bVar3 & bVar2)) {
              uVar17 = local_88;
              if (uVar20 != 0) {
                uVar17 = local_48;
              }
              uVar22 = uVar17 - (uVar9 + 3);
              uVar27 = uVar26 + uVar22;
              uVar6 = uVar17;
              if (((int)uVar27 <= param_4) &&
                 (pwVar21 = param_3 + (int)uVar26, uVar6 = uVar9 + 3, 0 < (int)uVar22)) {
                lVar10 = 0;
                do {
                  *(undefined2 *)((long)pwVar21 + lVar10) =
                       *(undefined2 *)((long)local_70 + lVar10 + (long)(int)uVar9 * 2 + 6);
                  lVar10 = lVar10 + 2;
                } while ((long)(int)uVar22 * 2 != lVar10);
                pwVar21 = pwVar21 + uVar22;
                uVar6 = uVar17;
              }
            }
            else {
              if (uVar20 == 0) {
                local_a0 = 0;
                uVar26 = 0;
                uVar20 = 1;
                goto LAB_00101200;
              }
              uVar27 = uVar26;
              uVar6 = uVar9;
              if (0 < (int)uVar26) {
                uVar27 = local_98;
                if (!bVar2) {
                  uVar27 = local_94;
                }
                if ((param_3 != (wchar16 *)0x0) && (local_a0 != 0)) {
                  if (param_4 < (int)(local_a0 + uVar27)) {
                    bVar5 = true;
                    local_a0 = 0;
                  }
                  else {
                    uVar9 = local_9c;
                    if (bVar2) {
                      uVar9 = local_84;
                    }
                    u_memmove_76_godot(param_3,param_3 + (int)uVar9,uVar27);
                  }
                }
              }
            }
            uVar9 = uVar6;
            uVar26 = uVar27;
            uVar20 = uVar20 + 1;
          } while (uVar20 != 2);
          if (local_a8 != 0) {
            uenum_close_76_godot();
          }
        } while (bVar5);
        uVar15 = u_terminateUChars_76_godot(param_3,param_4,uVar26,param_5);
        goto LAB_00100fe3;
      }
    }
LAB_00100fda:
    *(undefined4 *)param_5 = 1;
  }
  uVar15 = 0;
LAB_00100fe3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Locale::getDisplayName(icu_76_godot::Locale const&, icu_76_godot::UnicodeString&)
   const */

UnicodeString * __thiscall
icu_76_godot::Locale::getDisplayName(Locale *this,Locale *param_1,UnicodeString *param_2)

{
  ushort uVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0;
  iVar4 = (int)param_2;
  lVar2 = icu_76_godot::UnicodeString::getBuffer(iVar4);
  if (lVar2 != 0) {
    uVar3 = 0x1b;
    if (((byte)param_2[8] & 2) == 0) {
      uVar3 = *(undefined4 *)(param_2 + 0x10);
    }
    uloc_getDisplayName_76_godot
              (*(undefined8 *)(this + 0x28),*(undefined8 *)(param_1 + 0x28),lVar2,uVar3,&local_34);
    icu_76_godot::UnicodeString::releaseBuffer(iVar4);
    if (local_34 != 0xf) goto LAB_00101a2b;
    lVar2 = icu_76_godot::UnicodeString::getBuffer(iVar4);
    if (lVar2 != 0) {
      local_34 = 0;
      uVar3 = 0x1b;
      if (((byte)param_2[8] & 2) == 0) {
        uVar3 = *(undefined4 *)(param_2 + 0x10);
      }
      uloc_getDisplayName_76_godot
                (*(undefined8 *)(this + 0x28),*(undefined8 *)(param_1 + 0x28),lVar2,uVar3,&local_34)
      ;
      icu_76_godot::UnicodeString::releaseBuffer(iVar4);
      goto LAB_00101a2b;
    }
  }
  uVar1 = *(ushort *)(param_2 + 8);
  if ((uVar1 & 1) == 0) {
    if ((short)uVar1 < 0) {
      iVar4 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar4 = (int)((short)uVar1 >> 5);
    }
    if (iVar4 != 0) {
      *(ushort *)(param_2 + 8) = uVar1 & 0x1f;
    }
  }
  else {
    icu_76_godot::UnicodeString::unBogus();
  }
LAB_00101a2b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Locale::getDisplayName(icu_76_godot::UnicodeString&) const */

void __thiscall icu_76_godot::Locale::getDisplayName(Locale *this,UnicodeString *param_1)

{
  Locale *pLVar1;
  
  pLVar1 = (Locale *)icu_76_godot::Locale::getDefault();
  getDisplayName(this,pLVar1,param_1);
  return;
}



/* icu_76_godot::BreakIterator::getDisplayName(icu_76_godot::Locale const&, icu_76_godot::Locale
   const&, icu_76_godot::UnicodeString&) */

void icu_76_godot::BreakIterator::getDisplayName
               (Locale *param_1,Locale *param_2,UnicodeString *param_3)

{
  Locale::getDisplayName(param_1,param_2,param_3);
  return;
}



/* icu_76_godot::BreakIterator::getDisplayName(icu_76_godot::Locale const&,
   icu_76_godot::UnicodeString&) */

void icu_76_godot::BreakIterator::getDisplayName(Locale *param_1,UnicodeString *param_2)

{
  Locale *pLVar1;
  
  pLVar1 = (Locale *)icu_76_godot::Locale::getDefault();
  Locale::getDisplayName(param_1,pLVar1,param_2);
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray() */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(MaybeStackArray<char,40> *this)

{
  *(undefined4 *)(this + 8) = 0x28;
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  this[0xc] = (MaybeStackArray<char,40>)0x0;
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(int, UErrorCode) */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray
          (MaybeStackArray<char,40> *this,int param_1,int param_3)

{
  long lVar1;
  
  *(undefined4 *)(this + 8) = 0x28;
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  this[0xc] = (MaybeStackArray<char,40>)0x0;
  if ((0x28 < param_1) && (param_3 < 1)) {
    lVar1 = uprv_malloc_76_godot((long)param_1);
    if (lVar1 != 0) {
      if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
        uprv_free_76_godot(*(undefined8 *)this);
      }
      *(long *)this = lVar1;
      *(int *)(this + 8) = param_1;
      this[0xc] = (MaybeStackArray<char,40>)0x1;
    }
    return;
  }
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::~MaybeStackArray() */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::~MaybeStackArray(MaybeStackArray<char,40> *this)

{
  if (this[0xc] == (MaybeStackArray<char,40>)0x0) {
    return;
  }
  uprv_free_76_godot(*(undefined8 *)this);
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(icu_76_godot::MaybeStackArray<char,
   40>&&) */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray
          (MaybeStackArray<char,40> *this,MaybeStackArray *param_1)

{
  int iVar1;
  MaybeStackArray *__src;
  
  __src = *(MaybeStackArray **)param_1;
  iVar1 = *(int *)(param_1 + 8);
  *(MaybeStackArray *)(this + 0xc) = param_1[0xc];
  *(MaybeStackArray **)this = __src;
  *(int *)(this + 8) = iVar1;
  if (__src != param_1 + 0xd) {
    *(MaybeStackArray **)param_1 = param_1 + 0xd;
    *(undefined4 *)(param_1 + 8) = 0x28;
    param_1[0xc] = (MaybeStackArray)0x0;
    return;
  }
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  memcpy(this + 0xd,__src,(long)iVar1);
  return;
}



/* icu_76_godot::MaybeStackArray<char,
   40>::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::MaybeStackArray<char, 40>&&) */

MaybeStackArray<char,40> * __thiscall
icu_76_godot::MaybeStackArray<char,40>::operator=
          (MaybeStackArray<char,40> *this,MaybeStackArray *param_1)

{
  int iVar1;
  MaybeStackArray *__src;
  
  if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
    uprv_free_76_godot(*(undefined8 *)this);
  }
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(MaybeStackArray *)(this + 0xc) = param_1[0xc];
  __src = *(MaybeStackArray **)param_1;
  if (__src != param_1 + 0xd) {
    *(MaybeStackArray **)this = __src;
    *(MaybeStackArray **)param_1 = param_1 + 0xd;
    *(undefined4 *)(param_1 + 8) = 0x28;
    param_1[0xc] = (MaybeStackArray)0x0;
    return this;
  }
  iVar1 = *(int *)(param_1 + 8);
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  memcpy(this + 0xd,__src,(long)iVar1);
  return this;
}



/* icu_76_godot::MaybeStackArray<char, 40>::getCapacity() const */

undefined4 __thiscall
icu_76_godot::MaybeStackArray<char,40>::getCapacity(MaybeStackArray<char,40> *this)

{
  return *(undefined4 *)(this + 8);
}



/* icu_76_godot::MaybeStackArray<char, 40>::getAlias() const */

undefined8 __thiscall
icu_76_godot::MaybeStackArray<char,40>::getAlias(MaybeStackArray<char,40> *this)

{
  return *(undefined8 *)this;
}



/* icu_76_godot::MaybeStackArray<char, 40>::getArrayLimit() const */

long __thiscall
icu_76_godot::MaybeStackArray<char,40>::getArrayLimit(MaybeStackArray<char,40> *this)

{
  return (long)*(int *)(this + 8) + *(long *)this;
}



/* icu_76_godot::MaybeStackArray<char, 40>::operator[](long) const */

long __thiscall
icu_76_godot::MaybeStackArray<char,40>::operator[](MaybeStackArray<char,40> *this,long param_1)

{
  return *(long *)this + param_1;
}



/* icu_76_godot::MaybeStackArray<char, 40>::operator[](long) */

long __thiscall
icu_76_godot::MaybeStackArray<char,40>::operator[](MaybeStackArray<char,40> *this,long param_1)

{
  return *(long *)this + param_1;
}



/* icu_76_godot::MaybeStackArray<char, 40>::aliasInstead(char*, int) */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::aliasInstead
          (MaybeStackArray<char,40> *this,char *param_1,int param_2)

{
  if ((param_1 != (char *)0x0) && (0 < param_2)) {
    if (this[0xc] == (MaybeStackArray<char,40>)0x0) {
      *(char **)this = param_1;
      *(int *)(this + 8) = param_2;
      this[0xc] = (MaybeStackArray<char,40>)0x0;
      return;
    }
    uprv_free_76_godot(*(undefined8 *)this);
    this[0xc] = (MaybeStackArray<char,40>)0x0;
    *(char **)this = param_1;
    *(int *)(this + 8) = param_2;
    return;
  }
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::resize(int, int) */

long __thiscall
icu_76_godot::MaybeStackArray<char,40>::resize
          (MaybeStackArray<char,40> *this,int param_1,int param_2)

{
  MaybeStackArray<char,40> MVar1;
  long lVar2;
  
  if (0 < param_1) {
    lVar2 = uprv_malloc_76_godot((long)param_1);
    if (lVar2 != 0) {
      if (param_2 < 1) {
        MVar1 = this[0xc];
      }
      else {
        if (*(int *)(this + 8) < param_2) {
          param_2 = *(int *)(this + 8);
        }
        if (param_1 < param_2) {
          param_2 = param_1;
        }
        __memcpy_chk(lVar2,*(undefined8 *)this,(long)param_2,(long)param_1);
        MVar1 = this[0xc];
      }
      if (MVar1 != (MaybeStackArray<char,40>)0x0) {
        uprv_free_76_godot(*(undefined8 *)this);
      }
      *(long *)this = lVar2;
      *(int *)(this + 8) = param_1;
      this[0xc] = (MaybeStackArray<char,40>)0x1;
      return lVar2;
    }
  }
  return 0;
}



/* icu_76_godot::MaybeStackArray<char, 40>::orphanOrClone(int, int&) */

undefined8 __thiscall
icu_76_godot::MaybeStackArray<char,40>::orphanOrClone
          (MaybeStackArray<char,40> *this,int param_1,int *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
    uVar2 = *(undefined8 *)this;
LAB_00101e4f:
    *param_2 = param_1;
    *(MaybeStackArray<char,40> **)this = this + 0xd;
    *(undefined4 *)(this + 8) = 0x28;
    this[0xc] = (MaybeStackArray<char,40>)0x0;
    return uVar2;
  }
  if (0 < param_1) {
    if (*(int *)(this + 8) < param_1) {
      param_1 = *(int *)(this + 8);
    }
    lVar3 = (long)param_1;
    lVar1 = uprv_malloc_76_godot(lVar3);
    if (lVar1 != 0) {
      uVar2 = __memcpy_chk(lVar1,*(undefined8 *)this,lVar3,lVar3);
      goto LAB_00101e4f;
    }
  }
  return 0;
}



/* icu_76_godot::MaybeStackArray<char, 40>::copyFrom(icu_76_godot::MaybeStackArray<char, 40> const&,
   UErrorCode&) */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::copyFrom
          (MaybeStackArray<char,40> *this,MaybeStackArray *param_1,UErrorCode *param_2)

{
  int iVar1;
  void *__src;
  void *__dest;
  
  if (0 < *(int *)param_2) {
    return;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (0 < iVar1) {
    __dest = (void *)uprv_malloc_76_godot((long)iVar1);
    if (__dest != (void *)0x0) {
      if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
        uprv_free_76_godot(*(undefined8 *)this);
      }
      *(void **)this = __dest;
      this[0xc] = (MaybeStackArray<char,40>)0x1;
      __src = *(void **)param_1;
      *(int *)(this + 8) = iVar1;
      memcpy(__dest,__src,(long)iVar1);
      return;
    }
  }
  *(undefined4 *)param_2 = 7;
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::releaseArray() */

void __thiscall icu_76_godot::MaybeStackArray<char,40>::releaseArray(MaybeStackArray<char,40> *this)

{
  if (this[0xc] == (MaybeStackArray<char,40>)0x0) {
    return;
  }
  uprv_free_76_godot(*(undefined8 *)this);
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::resetToStackArray() */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::resetToStackArray(MaybeStackArray<char,40> *this)

{
  *(undefined4 *)(this + 8) = 0x28;
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  this[0xc] = (MaybeStackArray<char,40>)0x0;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(icu_76_godot::MaybeStackArray<char,
   40>&&) */

void icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(MaybeStackArray *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* icu_76_godot::MaybeStackArray<char, 40>::~MaybeStackArray() */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::~MaybeStackArray(MaybeStackArray<char,40> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(int, UErrorCode) */

void icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray() */

void icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


