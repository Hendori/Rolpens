
/* (anonymous namespace)::ulayout_isAcceptable(void*, char const*, char const*, UDataInfo const*) */

bool (anonymous_namespace)::ulayout_isAcceptable
               (void *param_1,char *param_2,char *param_3,UDataInfo *param_4)

{
  if ((((0x13 < *(ushort *)param_4) && (*(short *)(param_4 + 4) == 0)) &&
      (*(short *)(param_4 + 8) == 0x614c)) && (*(short *)(param_4 + 10) == 0x6f79)) {
    return param_4[0xc] == (UDataInfo)0x1;
  }
  return false;
}



/* isRegionalIndicator(BinaryProperty const&, int, UProperty) */

bool isRegionalIndicator(undefined8 param_1,int param_2)

{
  return param_2 - 0x1f1e6U < 0x1a;
}



/* isIDSUnaryOperator(BinaryProperty const&, int, UProperty) */

bool isIDSUnaryOperator(undefined8 param_1,int param_2)

{
  return param_2 - 0x2ffeU < 2;
}



/* isModifierCombiningMark(BinaryProperty const&, int, UProperty) */

undefined8 isModifierCombiningMark(undefined8 param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = &MODIFIER_COMBINING_MARK;
  while( true ) {
    if (param_2 < *piVar1) {
      return 0;
    }
    if (param_2 < piVar1[1]) break;
    piVar1 = piVar1 + 2;
    if (piVar1 == (int *)&DAT_00101d68) {
      return 0;
    }
  }
  return 1;
}



/* getMaxValueFromShift(IntProperty const&, UProperty) */

undefined4 getMaxValueFromShift(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* hasEmojiProperty(BinaryProperty const&, int, UProperty) */

void hasEmojiProperty(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  icu_76_godot::EmojiProps::hasBinaryProperty(param_2,param_3);
  return;
}



/* changesWhenCasefolded(BinaryProperty const&, int, UProperty) */

uint changesWhenCasefolded(undefined8 param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  short sVar6;
  ushort *puVar7;
  long in_FS_OFFSET;
  int local_104;
  undefined1 local_100 [8];
  code *local_f8;
  ushort local_f0;
  ushort local_ee;
  int local_ec;
  ushort *local_e0;
  undefined1 local_b8 [136];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_f0 = 2;
  local_104 = 0;
  local_f8 = ucase_toFullFolding_76_godot;
  plVar5 = (long *)icu_76_godot::Normalizer2::getNFCInstance((UErrorCode *)&local_104);
  if (local_104 < 1) {
    cVar1 = (**(code **)(*plVar5 + 0x38))(plVar5,param_2,&local_f8);
    if (cVar1 != '\0') {
      if ((short)local_f0 < 0) {
        if (local_ec == 1) goto LAB_00100298;
        iVar4 = local_ec;
        if (local_ec < 3) goto LAB_00100265;
      }
      else {
        sVar6 = (short)local_f0 >> 5;
        if (sVar6 == 1) {
LAB_00100298:
          puVar7 = &local_ee;
          if ((local_f0 & 2) == 0) {
            puVar7 = local_e0;
          }
          param_2 = (uint)*puVar7;
          goto LAB_0010013c;
        }
        iVar4 = (int)sVar6;
        if (sVar6 < 3) {
LAB_00100265:
          param_2 = icu_76_godot::UnicodeString::char32At((int)&local_f8);
          if ((0xffff < (int)param_2) && (iVar4 == 2)) goto LAB_0010013c;
          iVar4 = local_ec;
          if (-1 < (short)local_f0) {
            iVar4 = (int)((short)local_f0 >> 5);
          }
        }
      }
      if ((local_f0 & 0x11) == 0) {
        puVar7 = &local_ee;
        if ((local_f0 & 2) == 0) {
          puVar7 = local_e0;
        }
      }
      else {
        puVar7 = (ushort *)0x0;
      }
      uVar2 = 0;
      uVar3 = u_strFoldCase_76_godot(local_b8,0x3e,puVar7,iVar4,0,(UErrorCode *)&local_104);
      if (local_104 < 1) {
        if (-1 < (short)local_f0) {
          local_ec = (int)((short)local_f0 >> 5);
        }
        if ((local_f0 & 0x11) == 0) {
          puVar7 = &local_ee;
          if ((local_f0 & 2) == 0) {
            puVar7 = local_e0;
          }
        }
        else {
          puVar7 = (ushort *)0x0;
        }
        iVar4 = u_strCompare_76_godot(puVar7,local_ec,local_b8,uVar3,0);
        uVar2 = (uint)(iVar4 != 0);
      }
      goto LAB_00100151;
    }
    if (-1 < (int)param_2) {
LAB_0010013c:
      uVar2 = ucase_toFullFolding_76_godot(param_2,local_100,0);
      uVar2 = ~uVar2 >> 0x1f;
      goto LAB_00100151;
    }
  }
  uVar2 = 0;
LAB_00100151:
  icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_f8);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* isPOSIX_xdigit(BinaryProperty const&, int, UProperty) */

void isPOSIX_xdigit(undefined8 param_1,undefined4 param_2)

{
  u_isxdigit_76_godot(param_2);
  return;
}



/* isPOSIX_print(BinaryProperty const&, int, UProperty) */

void isPOSIX_print(undefined8 param_1,undefined4 param_2)

{
  u_isprintPOSIX_76_godot(param_2);
  return;
}



/* isPOSIX_graph(BinaryProperty const&, int, UProperty) */

void isPOSIX_graph(undefined8 param_1,undefined4 param_2)

{
  u_isgraphPOSIX_76_godot(param_2);
  return;
}



/* isPOSIX_blank(BinaryProperty const&, int, UProperty) */

void isPOSIX_blank(undefined8 param_1,undefined4 param_2)

{
  u_isblank_76_godot(param_2);
  return;
}



/* isPOSIX_alnum(BinaryProperty const&, int, UProperty) */

void isPOSIX_alnum(undefined8 param_1,undefined4 param_2)

{
  u_isalnumPOSIX_76_godot(param_2);
  return;
}



/* isCanonSegmentStarter(BinaryProperty const&, int, UProperty) */

bool isCanonSegmentStarter(void)

{
  char cVar1;
  UErrorCode *pUVar2;
  long in_FS_OFFSET;
  bool bVar3;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0;
  pUVar2 = (UErrorCode *)icu_76_godot::Normalizer2Factory::getNFCImpl((UErrorCode *)&local_24);
  if (local_24 < 1) {
    cVar1 = icu_76_godot::Normalizer2Impl::ensureCanonIterData(pUVar2);
    if (cVar1 != '\0') {
      cVar1 = icu_76_godot::Normalizer2Impl::isCanonSegmentStarter((int)pUVar2);
      bVar3 = cVar1 != '\0';
      goto LAB_0010039d;
    }
  }
  bVar3 = false;
LAB_0010039d:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* isNormInert(BinaryProperty const&, int, UProperty) */

ulong isNormInert(undefined8 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  long *plVar2;
  undefined8 extraout_RDX;
  ulong uVar3;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  plVar2 = (long *)icu_76_godot::Normalizer2Factory::getInstance(param_3 + -0x23,&local_14);
  if (local_14 < 1) {
    cVar1 = (**(code **)(*plVar2 + 0x88))(plVar2,param_2);
    uVar3 = CONCAT71((int7)((ulong)extraout_RDX >> 8),cVar1 != '\0');
  }
  else {
    uVar3 = 0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* caseBinaryPropertyContains(BinaryProperty const&, int, UProperty) */

void caseBinaryPropertyContains(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  ucase_hasBinaryProperty_76_godot(param_2,param_3);
  return;
}



/* isJoinControl(BinaryProperty const&, int, UProperty) */

void isJoinControl(undefined8 param_1,undefined4 param_2)

{
  ubidi_isJoinControl_76_godot(param_2);
  return;
}



/* isMirrored(BinaryProperty const&, int, UProperty) */

void isMirrored(undefined8 param_1,undefined4 param_2)

{
  ubidi_isMirrored_76_godot(param_2);
  return;
}



/* isBidiControl(BinaryProperty const&, int, UProperty) */

void isBidiControl(undefined8 param_1,undefined4 param_2)

{
  ubidi_isBidiControl_76_godot(param_2);
  return;
}



/* defaultContains(BinaryProperty const&, int, UProperty) */

undefined4 defaultContains(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = u_getUnicodeProperties_76_godot(param_2,*param_1);
  return CONCAT31((int3)((uVar1 & param_1[1]) >> 8),(uVar1 & param_1[1]) != 0);
}



/* getIDStatusValue(IntProperty const&, int, UProperty) */

bool getIDStatusValue(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = u_getUnicodeProperties_76_godot(param_2,2);
  return 0xefffffff < uVar1;
}



/* getHangulSyllableType(IntProperty const&, int, UProperty) */

undefined4 getHangulSyllableType(undefined8 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (0xffff < param_2) {
    return 0;
  }
  iVar1 = u_getUnicodeProperties_76_godot(param_2,2);
  uVar2 = iVar1 >> 5 & 0x1f;
  if (uVar2 < 10) {
    return *(undefined4 *)(gcbToHst + (ulong)uVar2 * 4);
  }
  return 0;
}



/* defaultGetValue(IntProperty const&, int, UProperty) */

int defaultGetValue(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = u_getUnicodeProperties_76_godot(param_2,*param_1);
  return (int)(uVar1 & param_1[1]) >> ((byte)param_1[2] & 0x1f);
}



/* getGeneralCategory(IntProperty const&, int, UProperty) */

int getGeneralCategory(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = u_charType_76_godot(param_2);
  return (int)cVar1;
}



/* (anonymous namespace)::ulayout_load(UErrorCode&) */

void (anonymous_namespace)::ulayout_load(UErrorCode *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  gLayoutMemory = udata_openChoice_76_godot(0,&_LC1,"ulayout",0x100000,0,param_1);
  if (0 < *(int *)param_1) {
    return;
  }
  piVar4 = (int *)udata_getMemory_76_godot(gLayoutMemory);
  iVar1 = *piVar4;
  if (0xb < iVar1) {
    iVar2 = piVar4[1];
    iVar5 = iVar2 + iVar1 * -4;
    if (0xf < iVar5) {
      gInpcTrie = ucptrie_openFromBinary_76_godot
                            (0xffffffff,0xffffffff,(long)(iVar1 * 4) + (long)piVar4,iVar5,0,param_1)
      ;
    }
    iVar1 = piVar4[2];
    if (0xf < iVar1 - iVar2) {
      gInscTrie = ucptrie_openFromBinary_76_godot
                            (0xffffffff,0xffffffff,(long)iVar2 + (long)piVar4,iVar1 - iVar2,0,
                             param_1);
    }
    if (0xf < piVar4[3] - iVar1) {
      gVoTrie = ucptrie_openFromBinary_76_godot
                          (0xffffffff,0xffffffff,(long)iVar1 + (long)piVar4,piVar4[3] - iVar1,0,
                           param_1);
    }
    uVar3 = piVar4[9];
    gMaxInpcValue = uVar3 >> 0x18;
    gMaxVoValue = uVar3 >> 8 & 0xff;
    gMaxInscValue = uVar3 >> 0x10 & 0xff;
    ucln_common_registerCleanup_76_godot(0x13,uprops_cleanup);
    return;
  }
  *(undefined4 *)param_1 = 3;
  return;
}



/* (anonymous namespace)::uprops_cleanup() */

undefined8 (anonymous_namespace)::uprops_cleanup(void)

{
  udata_close_76_godot(gLayoutMemory);
  gLayoutMemory = 0;
  ucptrie_close_76_godot(gInpcTrie);
  gInpcTrie = 0;
  ucptrie_close_76_godot(gInscTrie);
  gInscTrie = 0;
  ucptrie_close_76_godot(gVoTrie);
  gVoTrie = 0;
  gMaxInpcValue = 0;
  gMaxInscValue = 0;
  gMaxVoValue = 0;
  LOCK();
  gLayoutInitOnce = 0;
  UNLOCK();
  return 1;
}



/* getBiDiPairedBracketType(IntProperty const&, int, UProperty) */

void getBiDiPairedBracketType(undefined8 param_1,undefined4 param_2)

{
  ubidi_getPairedBracketType_76_godot(param_2);
  return;
}



/* getTrailCombiningClass(IntProperty const&, int, UProperty) */

undefined1 getTrailCombiningClass(undefined8 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  
  uVar1 = unorm_getFCD16_76_godot(param_2);
  return uVar1;
}



/* getLeadCombiningClass(IntProperty const&, int, UProperty) */

undefined1 getLeadCombiningClass(undefined8 param_1,undefined4 param_2)

{
  undefined1 extraout_AH;
  
  unorm_getFCD16_76_godot(param_2);
  return extraout_AH;
}



/* getNormQuickCheck(IntProperty const&, int, UProperty) */

void getNormQuickCheck(undefined8 param_1,undefined4 param_2,int param_3)

{
  unorm_getQuickCheck_76_godot(param_2,param_3 + -0x100a);
  return;
}



/* scriptGetMaxValue(IntProperty const&, UProperty) */

uint scriptGetMaxValue(void)

{
  uint uVar1;
  
  uVar1 = uprv_getMaxValues_76_godot(0);
  return uVar1 & 0x3ff;
}



/* defaultGetMaxValue(IntProperty const&, UProperty) */

uint defaultGetMaxValue(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = uprv_getMaxValues_76_godot(*param_1);
  return (uVar1 & param_1[1]) >> ((byte)param_1[2] & 0x1f);
}



/* blockGetMaxValue(IntProperty const&, UProperty) */

uint blockGetMaxValue(void)

{
  uint uVar1;
  
  uVar1 = uprv_getMaxValues_76_godot(0xc);
  return uVar1 & 0x3ff;
}



/* getScript(IntProperty const&, int, UProperty) */

void getScript(undefined8 param_1,undefined4 param_2)

{
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  uscript_getScript_76_godot(param_2,&local_14);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* getNumericType(IntProperty const&, int, UProperty) */

char getNumericType(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  char cVar2;
  
  uVar1 = u_getMainProperties_76_godot(param_2);
  cVar2 = '\0';
  uVar1 = uVar1 >> 6;
  if ((uVar1 != 0) && (cVar2 = '\x01', 10 < uVar1)) {
    cVar2 = (0x14 < uVar1) + '\x02';
  }
  return cVar2;
}



/* getJoiningType(IntProperty const&, int, UProperty) */

void getJoiningType(undefined8 param_1,undefined4 param_2)

{
  ubidi_getJoiningType_76_godot(param_2);
  return;
}



/* getJoiningGroup(IntProperty const&, int, UProperty) */

void getJoiningGroup(undefined8 param_1,undefined4 param_2)

{
  ubidi_getJoiningGroup_76_godot(param_2);
  return;
}



/* getCombiningClass(IntProperty const&, int, UProperty) */

undefined1 getCombiningClass(undefined8 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  
  uVar1 = u_getCombiningClass_76_godot(param_2);
  return uVar1;
}



/* getBlock(IntProperty const&, int, UProperty) */

void getBlock(undefined8 param_1,undefined4 param_2)

{
  ublock_getCode_76_godot(param_2);
  return;
}



/* biDiGetMaxValue(IntProperty const&, UProperty) */

void biDiGetMaxValue(undefined8 param_1,undefined4 param_2)

{
  ubidi_getMaxValue_76_godot(param_2);
  return;
}



/* getBiDiClass(IntProperty const&, int, UProperty) */

void getBiDiClass(undefined8 param_1,undefined4 param_2)

{
  u_charDirection_76_godot(param_2);
  return;
}



/* isIDCompatMathContinue(BinaryProperty const&, int, UProperty) */

undefined8 isIDCompatMathContinue(undefined8 param_1,int param_2)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = &ID_COMPAT_MATH_CONTINUE;
  do {
    if (param_2 < *piVar1) {
      return 0;
    }
    if (param_2 < piVar1[1]) goto LAB_001009e0;
    piVar1 = piVar1 + 2;
  } while (piVar1 != (int *)(anonymous_namespace)::uprops_idTypeToEncoded);
  uVar2 = 0;
  if (0x2201 < param_2) {
    piVar1 = &ID_COMPAT_MATH_START;
    while (param_2 != *piVar1) {
      piVar1 = piVar1 + 1;
      if (piVar1 == (int *)&DAT_00101db4) {
        return 0;
      }
    }
LAB_001009e0:
    uVar2 = 1;
  }
  return uVar2;
}



/* isIDCompatMathStart(BinaryProperty const&, int, UProperty) */

undefined8 isIDCompatMathStart(undefined8 param_1,int param_2)

{
  int *piVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (0x2201 < param_2) {
    piVar1 = &ID_COMPAT_MATH_START;
    while (param_2 != *piVar1) {
      piVar1 = piVar1 + 1;
      if (piVar1 == (int *)&DAT_00101db4) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}



/* getInPC(IntProperty const&, int, UProperty) */

undefined8 getInPC(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0;
  if ((anonymous_namespace)::gLayoutInitOnce == 2) {
LAB_00100a5f:
    if (DAT_00101c44 < 1) goto LAB_00100ab7;
  }
  else {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&(anonymous_namespace)::gLayoutInitOnce)
    ;
    if (cVar1 == '\0') goto LAB_00100a5f;
    (anonymous_namespace)::ulayout_load((UErrorCode *)&local_24);
    DAT_00101c44 = local_24;
    icu_76_godot::umtx_initImplPostInit((UInitOnce *)&(anonymous_namespace)::gLayoutInitOnce);
LAB_00100ab7:
    if ((local_24 < 1) && ((anonymous_namespace)::gInpcTrie != 0)) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar2 = ucptrie_get_76_godot((anonymous_namespace)::gInpcTrie,param_2);
        return uVar2;
      }
      goto LAB_00100ae8;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00100ae8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* getInSC(IntProperty const&, int, UProperty) */

undefined8 getInSC(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0;
  if ((anonymous_namespace)::gLayoutInitOnce == 2) {
LAB_00100b1f:
    if (DAT_00101c44 < 1) goto LAB_00100b77;
  }
  else {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&(anonymous_namespace)::gLayoutInitOnce)
    ;
    if (cVar1 == '\0') goto LAB_00100b1f;
    (anonymous_namespace)::ulayout_load((UErrorCode *)&local_24);
    DAT_00101c44 = local_24;
    icu_76_godot::umtx_initImplPostInit((UInitOnce *)&(anonymous_namespace)::gLayoutInitOnce);
LAB_00100b77:
    if ((local_24 < 1) && ((anonymous_namespace)::gInscTrie != 0)) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar2 = ucptrie_get_76_godot((anonymous_namespace)::gInscTrie,param_2);
        return uVar2;
      }
      goto LAB_00100ba8;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00100ba8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* getVo(IntProperty const&, int, UProperty) */

undefined8 getVo(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0;
  if ((anonymous_namespace)::gLayoutInitOnce == 2) {
LAB_00100bdf:
    if (DAT_00101c44 < 1) goto LAB_00100c37;
  }
  else {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&(anonymous_namespace)::gLayoutInitOnce)
    ;
    if (cVar1 == '\0') goto LAB_00100bdf;
    (anonymous_namespace)::ulayout_load((UErrorCode *)&local_24);
    DAT_00101c44 = local_24;
    icu_76_godot::umtx_initImplPostInit((UInitOnce *)&(anonymous_namespace)::gLayoutInitOnce);
LAB_00100c37:
    if ((local_24 < 1) && ((anonymous_namespace)::gVoTrie != 0)) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar2 = ucptrie_get_76_godot((anonymous_namespace)::gVoTrie,param_2);
        return uVar2;
      }
      goto LAB_00100c68;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00100c68:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* layoutGetMaxValue(IntProperty const&, UProperty) */

undefined4 layoutGetMaxValue(undefined8 param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0;
  if (((anonymous_namespace)::gLayoutInitOnce == 2) ||
     (cVar1 = icu_76_godot::umtx_initImplPreInit
                        ((UInitOnce *)&(anonymous_namespace)::gLayoutInitOnce), cVar1 == '\0')) {
    if (DAT_00101c44 < 1) goto LAB_00100cff;
  }
  else {
    (anonymous_namespace)::ulayout_load((UErrorCode *)&local_24);
    DAT_00101c44 = local_24;
    icu_76_godot::umtx_initImplPostInit((UInitOnce *)&(anonymous_namespace)::gLayoutInitOnce);
LAB_00100cff:
    if (local_24 < 1) {
      uVar2 = (anonymous_namespace)::gMaxInscValue;
      if (((param_2 != 0x1017) && (uVar2 = (anonymous_namespace)::gMaxVoValue, param_2 != 0x1018))
         && (uVar2 = (anonymous_namespace)::gMaxInpcValue, param_2 != 0x1016)) {
        uVar2 = 0;
      }
      goto LAB_00100cb0;
    }
  }
  uVar2 = 0;
LAB_00100cb0:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* hasFullCompositionExclusion(BinaryProperty const&, int, UProperty) */

undefined8 hasFullCompositionExclusion(undefined8 param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0;
  lVar4 = icu_76_godot::Normalizer2Factory::getNFCImpl((UErrorCode *)&local_24);
  if (local_24 < 1) {
    uVar5 = 1;
    if ((param_2 & 0xfffffc00) != 0xd800) {
      plVar1 = *(long **)(lVar4 + 0x28);
      lVar2 = plVar1[1];
      if (param_2 < 0x10000) {
        lVar6 = (long)(int)((uint)*(ushort *)(*plVar1 + (long)((int)param_2 >> 6) * 2) +
                           (param_2 & 0x3f)) * 2;
      }
      else if (param_2 < 0x110000) {
        if ((int)param_2 < (int)plVar1[3]) {
          iVar3 = ucptrie_internalSmallIndex_76_godot(plVar1,param_2);
          lVar6 = (long)iVar3 * 2;
        }
        else {
          lVar6 = (long)(*(int *)((long)plVar1 + 0x14) + -2) * 2;
        }
      }
      else {
        lVar6 = (long)(*(int *)((long)plVar1 + 0x14) + -1) * 2;
      }
      uVar5 = (ulong)*(ushort *)(lVar2 + lVar6);
    }
    if (*(ushort *)(lVar4 + 0x12) <= (ushort)uVar5) {
      uVar7 = CONCAT71((int7)(uVar5 >> 8),(ushort)uVar5 < *(ushort *)(lVar4 + 0x1e));
      goto LAB_00100d8a;
    }
  }
  uVar7 = 0;
LAB_00100d8a:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* changesWhenNFKC_Casefolded(BinaryProperty const&, int, UProperty) */

ushort changesWhenNFKC_Casefolded(undefined8 param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  ushort uVar4;
  int iVar5;
  undefined1 *puVar6;
  long in_FS_OFFSET;
  int local_fc;
  undefined8 local_f8;
  UnicodeString *local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_cc;
  UnicodeString local_b8 [8];
  ushort local_b0;
  undefined1 local_ae [2];
  int local_ac;
  undefined1 *local_a0;
  code *local_78;
  ushort local_70;
  int local_6c;
  long local_30;
  
  uVar4 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_fc = 0;
  uVar2 = icu_76_godot::Normalizer2Factory::getNFKC_CFImpl((UErrorCode *)&local_fc);
  if (local_fc < 1) {
    icu_76_godot::UnicodeString::UnicodeString(local_b8,param_2);
    local_70 = 2;
    local_78 = ucase_toFullFolding_76_godot;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 0;
    local_f8 = uVar2;
    local_f0 = (UnicodeString *)&local_78;
    cVar1 = icu_76_godot::ReorderingBuffer::init((int)&local_f8,(UErrorCode *)0x5);
    if (cVar1 != '\0') {
      if ((local_b0 & 0x11) == 0) {
        puVar6 = local_ae;
        if ((local_b0 & 2) == 0) {
          puVar6 = local_a0;
        }
      }
      else {
        puVar6 = (undefined1 *)0x0;
      }
      if ((short)local_b0 < 0) {
        lVar3 = (long)local_ac;
      }
      else {
        lVar3 = (long)((short)local_b0 >> 5);
      }
      icu_76_godot::Normalizer2Impl::compose
                (uVar2,puVar6,puVar6 + lVar3 * 2,0,1,&local_f8,(UErrorCode *)&local_fc);
    }
    if (local_e8 != 0) {
      icu_76_godot::UnicodeString::releaseBuffer((int)local_f0);
    }
    uVar4 = 0;
    if (local_fc < 1) {
      if ((local_70 & 1) == 0) {
        if (-1 < (short)local_70) {
          local_6c = (int)((short)local_70 >> 5);
        }
        if (-1 < (short)local_b0) {
          local_ac = (int)((short)local_b0 >> 5);
        }
        if (((local_b0 & 1) == 0) && (local_ac == local_6c)) {
          iVar5 = (int)local_ae;
          if ((local_b0 & 2) == 0) {
            iVar5 = (int)local_a0;
          }
          cVar1 = icu_76_godot::UnicodeString::doEquals((wchar16 *)&local_78,iVar5);
          uVar4 = (ushort)(cVar1 == '\0');
        }
        else {
          uVar4 = 1;
        }
      }
      else {
        uVar4 = local_b0 & 1 ^ 1;
      }
    }
    icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_78);
    icu_76_godot::UnicodeString::~UnicodeString(local_b8);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* WARNING: Removing unreachable block (ram,0x00100428) */

uint u_hasBinaryProperty_76_godot(uint param_1,uint param_2)

{
  long lVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  long *plVar8;
  ulong uVar9;
  UErrorCode *pUVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  short sVar16;
  ushort *puVar17;
  undefined1 *puVar18;
  long in_FS_OFFSET;
  int iStack_104;
  undefined1 auStack_100 [4];
  int iStack_fc;
  code *pcStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  ushort *puStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  UnicodeString aUStack_b8 [8];
  ushort uStack_b0;
  undefined1 auStack_ae [2];
  int iStack_ac;
  undefined1 *puStack_a0;
  code *pcStack_78;
  ushort uStack_70;
  int iStack_6c;
  undefined *puStack_30;
  
  if (0x4b < param_2) {
    return 0;
  }
  switch(param_2) {
  default:
    uVar4 = u_getUnicodeProperties_76_godot
                      (param_1,*(undefined4 *)(&binProps + (long)(int)param_2 * 2));
    return (uint)((uVar4 & *(uint *)((long)&binProps + (long)(int)param_2 * 0x10 + 4)) != 0);
  case 2:
    uVar4 = ubidi_isBidiControl_76_godot(param_1);
    return uVar4;
  case 3:
    uVar4 = ubidi_isMirrored_76_godot(param_1);
    return uVar4;
  case 9:
    lVar15 = *(long *)(in_FS_OFFSET + 0x28);
    puStack_30 = (undefined *)0x100d80;
    lVar12 = icu_76_godot::Normalizer2Factory::getNFCImpl((UErrorCode *)&stack0xffffffffffffffdc);
    uVar3 = 1;
    if ((param_1 & 0xfffffc00) != 0xd800) {
      plVar8 = *(long **)(lVar12 + 0x28);
      lVar1 = plVar8[1];
      if (param_1 < 0x10000) {
        lVar13 = (long)(int)((uint)*(ushort *)(*plVar8 + (long)((int)param_1 >> 6) * 2) +
                            (param_1 & 0x3f)) * 2;
      }
      else if (param_1 < 0x110000) {
        if ((int)param_1 < (int)plVar8[3]) {
          puStack_30 = (undefined *)0x100e3f;
          iVar6 = ucptrie_internalSmallIndex_76_godot(plVar8,param_1);
          lVar13 = (long)iVar6 * 2;
        }
        else {
          lVar13 = (long)(*(int *)((long)plVar8 + 0x14) + -2) * 2;
        }
      }
      else {
        lVar13 = (long)(*(int *)((long)plVar8 + 0x14) + -1) * 2;
      }
      uVar3 = *(ushort *)(lVar1 + lVar13);
    }
    if (uVar3 < *(ushort *)(lVar12 + 0x12)) {
      uVar4 = 0;
    }
    else {
      uVar4 = (uint)(uVar3 < *(ushort *)(lVar12 + 0x1e));
    }
    if (lVar15 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      puStack_30 = &UNK_00100e4b;
      __stack_chk_fail();
    }
    return uVar4;
  case 0x14:
    uVar4 = ubidi_isJoinControl_76_godot(param_1);
    return uVar4;
  case 0x16:
  case 0x1b:
  case 0x1e:
  case 0x22:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x37:
    uVar4 = ucase_hasBinaryProperty_76_godot(param_1,param_2);
    return uVar4;
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
    lVar15 = *(long *)(in_FS_OFFSET + 0x28);
    plVar8 = (long *)icu_76_godot::Normalizer2Factory::getInstance
                               (param_2 - 0x23,&stack0xffffffffffffffec);
    cVar2 = (**(code **)(*plVar8 + 0x88))(plVar8,param_1);
    if (lVar15 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return (uint)(cVar2 != '\0');
  case 0x29:
    lVar15 = *(long *)(in_FS_OFFSET + 0x28);
    puStack_30 = (undefined *)0x100393;
    pUVar10 = (UErrorCode *)
              icu_76_godot::Normalizer2Factory::getNFCImpl((UErrorCode *)&stack0xffffffffffffffdc);
    puStack_30 = (undefined *)0x1003ce;
    cVar2 = icu_76_godot::Normalizer2Impl::ensureCanonIterData(pUVar10);
    if (cVar2 == '\0') {
      uVar4 = 0;
    }
    else {
      puStack_30 = (undefined *)0x1003dc;
      cVar2 = icu_76_godot::Normalizer2Impl::isCanonSegmentStarter((int)pUVar10);
      uVar4 = (uint)(cVar2 != '\0');
    }
    if (lVar15 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      puStack_30 = &UNK_001003e8;
      __stack_chk_fail();
    }
    return uVar4;
  case 0x2c:
    uVar4 = u_isalnumPOSIX_76_godot(param_1);
    return uVar4;
  case 0x2d:
    uVar4 = u_isblank_76_godot(param_1);
    return uVar4;
  case 0x2e:
    uVar4 = u_isgraphPOSIX_76_godot(param_1);
    return uVar4;
  case 0x2f:
    uVar4 = u_isprintPOSIX_76_godot(param_1);
    return uVar4;
  case 0x30:
    uVar4 = u_isxdigit_76_godot(param_1);
    return uVar4;
  case 0x36:
    break;
  case 0x38:
    uVar4 = 0;
    puStack_30 = *(undefined **)(in_FS_OFFSET + 0x28);
    iStack_fc = 0;
    pcVar14 = (code *)icu_76_godot::Normalizer2Factory::getNFKC_CFImpl((UErrorCode *)&iStack_fc);
    if (iStack_fc < 1) {
      icu_76_godot::UnicodeString::UnicodeString(aUStack_b8,param_1);
      uStack_70 = 2;
      pcStack_78 = ucase_toFullFolding_76_godot;
      lStack_e8 = 0;
      puStack_e0 = (ushort *)0x0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      pcStack_f8 = pcVar14;
      uStack_f0 = (UnicodeString *)&pcStack_78;
      cVar2 = icu_76_godot::ReorderingBuffer::init((int)&pcStack_f8,(UErrorCode *)0x5);
      if (cVar2 != '\0') {
        if ((uStack_b0 & 0x11) == 0) {
          puVar18 = auStack_ae;
          if ((uStack_b0 & 2) == 0) {
            puVar18 = puStack_a0;
          }
        }
        else {
          puVar18 = (undefined1 *)0x0;
        }
        if ((short)uStack_b0 < 0) {
          lVar15 = (long)iStack_ac;
        }
        else {
          lVar15 = (long)((short)uStack_b0 >> 5);
        }
        icu_76_godot::Normalizer2Impl::compose
                  (pcVar14,puVar18,puVar18 + lVar15 * 2,0,1,&pcStack_f8,(UErrorCode *)&iStack_fc);
      }
      if (lStack_e8 != 0) {
        icu_76_godot::UnicodeString::releaseBuffer((int)uStack_f0);
      }
      uVar4 = 0;
      if (iStack_fc < 1) {
        if ((uStack_70 & 1) == 0) {
          if (-1 < (short)uStack_70) {
            iStack_6c = (int)((short)uStack_70 >> 5);
          }
          if (-1 < (short)uStack_b0) {
            iStack_ac = (int)((short)uStack_b0 >> 5);
          }
          if (((uStack_b0 & 1) == 0) && (iStack_ac == iStack_6c)) {
            iVar6 = (int)auStack_ae;
            if ((uStack_b0 & 2) == 0) {
              iVar6 = (int)puStack_a0;
            }
            cVar2 = icu_76_godot::UnicodeString::doEquals((wchar16 *)&pcStack_78,iVar6);
            uVar4 = (uint)(cVar2 == '\0');
          }
          else {
            uVar4 = 1;
          }
        }
        else {
          uVar4 = uStack_b0 & 1 ^ 1;
        }
      }
      icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&pcStack_78);
      icu_76_godot::UnicodeString::~UnicodeString(aUStack_b8);
    }
    if (puStack_30 != (undefined *)*(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar4;
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
    uVar4 = icu_76_godot::EmojiProps::hasBinaryProperty(param_1,param_2);
    return uVar4;
  case 0x3e:
    return (uint)(param_1 - 0x1f1e6 < 0x1a);
  case 0x48:
    return (uint)(param_1 - 0x2ffe < 2);
  case 0x49:
    uVar4 = 0;
    if (0x2201 < (int)param_1) {
      puVar11 = &ID_COMPAT_MATH_START;
      while (param_1 != *puVar11) {
        puVar11 = puVar11 + 1;
        if (puVar11 == (uint *)&DAT_00101db4) {
          return 0;
        }
      }
      uVar4 = 1;
    }
    return uVar4;
  case 0x4a:
    piVar7 = &ID_COMPAT_MATH_CONTINUE;
    do {
      if ((int)param_1 < *piVar7) {
        return 0;
      }
      if ((int)param_1 < piVar7[1]) goto LAB_001009e0;
      piVar7 = piVar7 + 2;
    } while (piVar7 != (int *)(anonymous_namespace)::uprops_idTypeToEncoded);
    uVar4 = 0;
    if (0x2201 < (int)param_1) {
      puVar11 = &ID_COMPAT_MATH_START;
      while (param_1 != *puVar11) {
        puVar11 = puVar11 + 1;
        if (puVar11 == (uint *)&DAT_00101db4) {
          return 0;
        }
      }
LAB_001009e0:
      uVar4 = 1;
    }
    return uVar4;
  case 0x4b:
    piVar7 = &MODIFIER_COMBINING_MARK;
    while( true ) {
      if ((int)param_1 < *piVar7) {
        return 0;
      }
      if ((int)param_1 < piVar7[1]) break;
      piVar7 = piVar7 + 2;
      if (piVar7 == (int *)&DAT_00101d68) {
        return 0;
      }
    }
    return 1;
  }
  puStack_30 = *(undefined **)(in_FS_OFFSET + 0x28);
  uStack_f0 = (UnicodeString *)CONCAT62(uStack_f0._2_6_,2);
  iStack_104 = 0;
  pcStack_f8 = ucase_toFullFolding_76_godot;
  plVar8 = (long *)icu_76_godot::Normalizer2::getNFCInstance((UErrorCode *)&iStack_104);
  if (iStack_104 < 1) {
    cVar2 = (**(code **)(*plVar8 + 0x38))(plVar8,param_1,&pcStack_f8);
    if (cVar2 != '\0') {
      uVar9 = (ulong)uStack_f0 & 0xffff;
      if ((short)uStack_f0 < 0) {
        if (uStack_f0._4_4_ == 1) goto LAB_00100298;
        iVar6 = uStack_f0._4_4_;
        if (uStack_f0._4_4_ < 3) goto LAB_00100265;
      }
      else {
        sVar16 = (short)uStack_f0 >> 5;
        if (sVar16 == 1) {
LAB_00100298:
          puVar17 = (ushort *)((long)&uStack_f0 + 2);
          if (((ulong)uStack_f0 & 2) == 0) {
            puVar17 = puStack_e0;
          }
          param_1 = (uint)*puVar17;
          goto LAB_0010013c;
        }
        iVar6 = (int)sVar16;
        if (sVar16 < 3) {
LAB_00100265:
          param_1 = icu_76_godot::UnicodeString::char32At((int)&pcStack_f8);
          if ((0xffff < (int)param_1) && (iVar6 == 2)) goto LAB_0010013c;
          uVar9 = (ulong)uStack_f0 & 0xffff;
          if ((short)uStack_f0 < 0) {
            iVar6 = uStack_f0._4_4_;
          }
          else {
            iVar6 = (int)((short)uStack_f0 >> 5);
          }
        }
      }
      if ((uVar9 & 0x11) == 0) {
        puVar17 = (ushort *)((long)&uStack_f0 + 2);
        if ((uVar9 & 2) == 0) {
          puVar17 = puStack_e0;
        }
      }
      else {
        puVar17 = (ushort *)0x0;
      }
      uVar4 = 0;
      uVar5 = u_strFoldCase_76_godot(aUStack_b8,0x3e,puVar17,iVar6,0,(UErrorCode *)&iStack_104);
      if (iStack_104 < 1) {
        if ((short)uStack_f0 < 0) {
          iVar6 = uStack_f0._4_4_;
        }
        else {
          iVar6 = (int)((short)uStack_f0 >> 5);
        }
        if (((ulong)uStack_f0 & 0x11) == 0) {
          puVar17 = (ushort *)((long)&uStack_f0 + 2);
          if (((ulong)uStack_f0 & 2) == 0) {
            puVar17 = puStack_e0;
          }
        }
        else {
          puVar17 = (ushort *)0x0;
        }
        iVar6 = u_strCompare_76_godot(puVar17,iVar6,aUStack_b8,uVar5,0);
        uVar4 = (uint)(iVar6 != 0);
      }
      goto LAB_00100151;
    }
    if (-1 < (int)param_1) {
LAB_0010013c:
      uVar4 = ucase_toFullFolding_76_godot(param_1,auStack_100,0);
      uVar4 = ~uVar4 >> 0x1f;
      goto LAB_00100151;
    }
  }
  uVar4 = 0;
LAB_00100151:
  icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&pcStack_f8);
  if (puStack_30 != (undefined *)*(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



void u_isIDStart_76_godot(undefined4 param_1)

{
  defaultContains(&DAT_00102260,param_1,0x10);
  return;
}



void u_isIDPart_76_godot(undefined4 param_1)

{
  defaultContains(&DAT_00102250,param_1,0xf);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00100428) */

uint u_stringHasBinaryProperty_76_godot(ushort *param_1,int param_2,uint param_3)

{
  long lVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  long *plVar8;
  ulong uVar9;
  UErrorCode *pUVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  uint uVar16;
  short sVar17;
  ushort *puVar18;
  undefined1 *puVar19;
  long in_FS_OFFSET;
  int iStack_104;
  undefined1 auStack_100 [4];
  int iStack_fc;
  code *pcStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  ushort *puStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  UnicodeString aUStack_b8 [8];
  ushort uStack_b0;
  undefined1 auStack_ae [2];
  int iStack_ac;
  undefined1 *puStack_a0;
  code *pcStack_78;
  ushort uStack_70;
  int iStack_6c;
  undefined *puStack_30;
  
  if ((param_1 == (ushort *)0x0) && (param_2 != 0)) {
    return 0;
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      if (((*param_1 & 0xfc00) != 0xd800) ||
         (uVar16 = (uint)*param_1 * 0x400 + -0x35fdc00 + (uint)param_1[1],
         (param_1[1] & 0xfc00) != 0xdc00)) goto LAB_00101122;
    }
    else {
      if ((-1 < param_2) || (uVar3 = *param_1, uVar3 == 0)) {
LAB_00101122:
        if (6 < param_3 - 0x41) {
          return 0;
        }
        cVar2 = icu_76_godot::EmojiProps::hasBinaryProperty();
        return (uint)(cVar2 != '\0');
      }
      uVar16 = (uint)uVar3;
      if (((uVar3 & 0xfc00) == 0xd800) && ((param_1[1] & 0xfc00) == 0xdc00)) {
        uVar16 = (uint)uVar3 * 0x400 + -0x35fdc00 + (uint)param_1[1];
        lVar15 = 4;
      }
      else {
        lVar15 = 2;
      }
      if (*(short *)((long)param_1 + lVar15) != 0) goto LAB_00101122;
    }
    uVar4 = uVar16;
    switch(param_3) {
    case 0:
    case 1:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x15:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1c:
    case 0x1d:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x23:
    case 0x24:
    case 0x2a:
    case 0x2b:
    case 0x3f:
code_r0x001004c4:
      uVar4 = u_getUnicodeProperties_76_godot
                        (uVar16,*(undefined4 *)(&binProps + (long)(int)param_3 * 2));
      return (uint)((uVar4 & *(uint *)((long)&binProps + (long)(int)param_3 * 0x10 + 4)) != 0);
    case 2:
code_r0x001004b4:
      uVar4 = ubidi_isBidiControl_76_godot(uVar4);
      return uVar4;
    case 3:
code_r0x001004a4:
      uVar4 = ubidi_isMirrored_76_godot(uVar4);
      return uVar4;
    case 9:
code_r0x00100d54:
      lVar15 = *(long *)(in_FS_OFFSET + 0x28);
      puStack_30 = (undefined *)0x100d80;
      lVar12 = icu_76_godot::Normalizer2Factory::getNFCImpl((UErrorCode *)&stack0xffffffffffffffdc);
      uVar3 = 1;
      if ((uVar4 & 0xfffffc00) != 0xd800) {
        plVar8 = *(long **)(lVar12 + 0x28);
        lVar1 = plVar8[1];
        if (uVar4 < 0x10000) {
          lVar13 = (long)(int)((uint)*(ushort *)(*plVar8 + (long)((int)uVar4 >> 6) * 2) +
                              (uVar4 & 0x3f)) * 2;
        }
        else if (uVar4 < 0x110000) {
          if ((int)uVar4 < (int)plVar8[3]) {
            puStack_30 = (undefined *)0x100e3f;
            iVar6 = ucptrie_internalSmallIndex_76_godot(plVar8,uVar4);
            lVar13 = (long)iVar6 * 2;
          }
          else {
            lVar13 = (long)(*(int *)((long)plVar8 + 0x14) + -2) * 2;
          }
        }
        else {
          lVar13 = (long)(*(int *)((long)plVar8 + 0x14) + -1) * 2;
        }
        uVar3 = *(ushort *)(lVar1 + lVar13);
      }
      if (uVar3 < *(ushort *)(lVar12 + 0x12)) {
        uVar4 = 0;
      }
      else {
        uVar4 = (uint)(uVar3 < *(ushort *)(lVar12 + 0x1e));
      }
      if (lVar15 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar4;
      }
                    /* WARNING: Subroutine does not return */
      puStack_30 = &UNK_00100e4b;
      __stack_chk_fail();
    case 0x14:
code_r0x00100494:
      uVar4 = ubidi_isJoinControl_76_godot(uVar4);
      return uVar4;
    case 0x16:
    case 0x1b:
    case 0x1e:
    case 0x22:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x37:
code_r0x00100474:
      uVar4 = ucase_hasBinaryProperty_76_godot(uVar16,param_3);
      return uVar4;
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
code_r0x001003f4:
      lVar15 = *(long *)(in_FS_OFFSET + 0x28);
      plVar8 = (long *)icu_76_godot::Normalizer2Factory::getInstance
                                 (param_3 - 0x23,&stack0xffffffffffffffec);
      cVar2 = (**(code **)(*plVar8 + 0x88))(plVar8,uVar4);
      if (lVar15 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (uint)(cVar2 != '\0');
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    case 0x29:
code_r0x00100364:
      lVar15 = *(long *)(in_FS_OFFSET + 0x28);
      puStack_30 = (undefined *)0x100393;
      pUVar10 = (UErrorCode *)
                icu_76_godot::Normalizer2Factory::getNFCImpl((UErrorCode *)&stack0xffffffffffffffdc)
      ;
      puStack_30 = (undefined *)0x1003ce;
      cVar2 = icu_76_godot::Normalizer2Impl::ensureCanonIterData(pUVar10);
      if (cVar2 == '\0') {
        uVar4 = 0;
      }
      else {
        puStack_30 = (undefined *)0x1003dc;
        cVar2 = icu_76_godot::Normalizer2Impl::isCanonSegmentStarter((int)pUVar10);
        uVar4 = (uint)(cVar2 != '\0');
      }
      if (lVar15 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar4;
      }
                    /* WARNING: Subroutine does not return */
      puStack_30 = &UNK_001003e8;
      __stack_chk_fail();
    case 0x2c:
code_r0x00100354:
      uVar4 = u_isalnumPOSIX_76_godot(uVar4);
      return uVar4;
    case 0x2d:
code_r0x00100344:
      uVar4 = u_isblank_76_godot(uVar4);
      return uVar4;
    case 0x2e:
code_r0x00100334:
      uVar4 = u_isgraphPOSIX_76_godot(uVar4);
      return uVar4;
    case 0x2f:
code_r0x00100324:
      uVar4 = u_isprintPOSIX_76_godot(uVar4);
      return uVar4;
    case 0x30:
code_r0x00100314:
      uVar4 = u_isxdigit_76_godot(uVar4);
      return uVar4;
    case 0x36:
      goto code_r0x001000c4;
    case 0x38:
code_r0x00100e54:
      uVar4 = 0;
      puStack_30 = *(undefined **)(in_FS_OFFSET + 0x28);
      iStack_fc = 0;
      pcVar14 = (code *)icu_76_godot::Normalizer2Factory::getNFKC_CFImpl((UErrorCode *)&iStack_fc);
      if (iStack_fc < 1) {
        icu_76_godot::UnicodeString::UnicodeString(aUStack_b8,uVar16);
        uStack_70 = 2;
        pcStack_78 = ucase_toFullFolding_76_godot;
        lStack_e8 = 0;
        puStack_e0 = (ushort *)0x0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_cc = 0;
        pcStack_f8 = pcVar14;
        uStack_f0 = (UnicodeString *)&pcStack_78;
        cVar2 = icu_76_godot::ReorderingBuffer::init((int)&pcStack_f8,(UErrorCode *)0x5);
        if (cVar2 != '\0') {
          if ((uStack_b0 & 0x11) == 0) {
            puVar19 = auStack_ae;
            if ((uStack_b0 & 2) == 0) {
              puVar19 = puStack_a0;
            }
          }
          else {
            puVar19 = (undefined1 *)0x0;
          }
          if ((short)uStack_b0 < 0) {
            lVar15 = (long)iStack_ac;
          }
          else {
            lVar15 = (long)((short)uStack_b0 >> 5);
          }
          icu_76_godot::Normalizer2Impl::compose
                    (pcVar14,puVar19,puVar19 + lVar15 * 2,0,1,&pcStack_f8,(UErrorCode *)&iStack_fc);
        }
        if (lStack_e8 != 0) {
          icu_76_godot::UnicodeString::releaseBuffer((int)uStack_f0);
        }
        uVar4 = 0;
        if (iStack_fc < 1) {
          if ((uStack_70 & 1) == 0) {
            if (-1 < (short)uStack_70) {
              iStack_6c = (int)((short)uStack_70 >> 5);
            }
            if (-1 < (short)uStack_b0) {
              iStack_ac = (int)((short)uStack_b0 >> 5);
            }
            if (((uStack_b0 & 1) == 0) && (iStack_ac == iStack_6c)) {
              iVar6 = (int)auStack_ae;
              if ((uStack_b0 & 2) == 0) {
                iVar6 = (int)puStack_a0;
              }
              cVar2 = icu_76_godot::UnicodeString::doEquals((wchar16 *)&pcStack_78,iVar6);
              uVar4 = (uint)(cVar2 == '\0');
            }
            else {
              uVar4 = 1;
            }
          }
          else {
            uVar4 = uStack_b0 & 1 ^ 1;
          }
        }
        icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&pcStack_78);
        icu_76_godot::UnicodeString::~UnicodeString(aUStack_b8);
      }
      if (puStack_30 == (undefined *)*(long *)(in_FS_OFFSET + 0x28)) {
        return uVar4;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
code_r0x001000b4:
      uVar4 = icu_76_godot::EmojiProps::hasBinaryProperty(uVar16,param_3);
      return uVar4;
    case 0x3e:
code_r0x00100034:
      return (uint)(uVar16 - 0x1f1e6 < 0x1a);
    case 0x48:
code_r0x00100054:
      return (uint)(uVar16 - 0x2ffe < 2);
    case 0x49:
code_r0x001009f4:
      uVar4 = 0;
      if (0x2201 < (int)uVar16) {
        puVar11 = &ID_COMPAT_MATH_START;
        while (uVar16 != *puVar11) {
          puVar11 = puVar11 + 1;
          if (puVar11 == (uint *)&DAT_00101db4) {
            return 0;
          }
        }
        uVar4 = 1;
      }
      return uVar4;
    case 0x4a:
code_r0x00100994:
      piVar7 = &ID_COMPAT_MATH_CONTINUE;
      do {
        if ((int)uVar16 < *piVar7) {
          return 0;
        }
        if ((int)uVar16 < piVar7[1]) goto LAB_001009e0;
        piVar7 = piVar7 + 2;
      } while (piVar7 != (int *)(anonymous_namespace)::uprops_idTypeToEncoded);
      uVar4 = 0;
      if (0x2201 < (int)uVar16) {
        puVar11 = &ID_COMPAT_MATH_START;
        while (uVar16 != *puVar11) {
          puVar11 = puVar11 + 1;
          if (puVar11 == (uint *)&DAT_00101db4) {
            return 0;
          }
        }
LAB_001009e0:
        uVar4 = 1;
      }
      return uVar4;
    case 0x4b:
code_r0x00100074:
      piVar7 = &MODIFIER_COMBINING_MARK;
      while( true ) {
        if ((int)uVar16 < *piVar7) {
          return 0;
        }
        if ((int)uVar16 < piVar7[1]) break;
        piVar7 = piVar7 + 2;
        if (piVar7 == (int *)&DAT_00101d68) {
          return 0;
        }
      }
      return 1;
    default:
      return 0;
    }
  }
  if (0x4b < param_3) {
    return 0;
  }
  uVar4 = (uint)*param_1;
  uVar16 = (uint)*param_1;
  switch(param_3) {
  default:
    goto code_r0x001004c4;
  case 2:
    goto code_r0x001004b4;
  case 3:
    goto code_r0x001004a4;
  case 9:
    goto code_r0x00100d54;
  case 0x14:
    goto code_r0x00100494;
  case 0x16:
  case 0x1b:
  case 0x1e:
  case 0x22:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x37:
    goto code_r0x00100474;
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
    goto code_r0x001003f4;
  case 0x29:
    goto code_r0x00100364;
  case 0x2c:
    goto code_r0x00100354;
  case 0x2d:
    goto code_r0x00100344;
  case 0x2e:
    goto code_r0x00100334;
  case 0x2f:
    goto code_r0x00100324;
  case 0x30:
    goto code_r0x00100314;
  case 0x36:
    break;
  case 0x38:
    goto code_r0x00100e54;
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
    goto code_r0x001000b4;
  case 0x3e:
    goto code_r0x00100034;
  case 0x48:
    goto code_r0x00100054;
  case 0x49:
    goto code_r0x001009f4;
  case 0x4a:
    goto code_r0x00100994;
  case 0x4b:
    goto code_r0x00100074;
  }
code_r0x001000c4:
  puStack_30 = *(undefined **)(in_FS_OFFSET + 0x28);
  uStack_f0 = (UnicodeString *)CONCAT62(uStack_f0._2_6_,2);
  iStack_104 = 0;
  pcStack_f8 = ucase_toFullFolding_76_godot;
  plVar8 = (long *)icu_76_godot::Normalizer2::getNFCInstance((UErrorCode *)&iStack_104);
  if (iStack_104 < 1) {
    cVar2 = (**(code **)(*plVar8 + 0x38))(plVar8,uVar4,&pcStack_f8);
    if (cVar2 != '\0') {
      uVar9 = (ulong)uStack_f0 & 0xffff;
      if ((short)uStack_f0 < 0) {
        if (uStack_f0._4_4_ == 1) goto LAB_00100298;
        iVar6 = uStack_f0._4_4_;
        if (uStack_f0._4_4_ < 3) goto LAB_00100265;
      }
      else {
        sVar17 = (short)uStack_f0 >> 5;
        if (sVar17 == 1) {
LAB_00100298:
          puVar18 = (ushort *)((long)&uStack_f0 + 2);
          if (((ulong)uStack_f0 & 2) == 0) {
            puVar18 = puStack_e0;
          }
          uVar4 = (uint)*puVar18;
          goto LAB_0010013c;
        }
        iVar6 = (int)sVar17;
        if (sVar17 < 3) {
LAB_00100265:
          uVar4 = icu_76_godot::UnicodeString::char32At((int)&pcStack_f8);
          if ((0xffff < (int)uVar4) && (iVar6 == 2)) goto LAB_0010013c;
          uVar9 = (ulong)uStack_f0 & 0xffff;
          if ((short)uStack_f0 < 0) {
            iVar6 = uStack_f0._4_4_;
          }
          else {
            iVar6 = (int)((short)uStack_f0 >> 5);
          }
        }
      }
      if ((uVar9 & 0x11) == 0) {
        puVar18 = (ushort *)((long)&uStack_f0 + 2);
        if ((uVar9 & 2) == 0) {
          puVar18 = puStack_e0;
        }
      }
      else {
        puVar18 = (ushort *)0x0;
      }
      uVar4 = 0;
      uVar5 = u_strFoldCase_76_godot(aUStack_b8,0x3e,puVar18,iVar6,0,(UErrorCode *)&iStack_104);
      if (iStack_104 < 1) {
        if ((short)uStack_f0 < 0) {
          iVar6 = uStack_f0._4_4_;
        }
        else {
          iVar6 = (int)((short)uStack_f0 >> 5);
        }
        if (((ulong)uStack_f0 & 0x11) == 0) {
          puVar18 = (ushort *)((long)&uStack_f0 + 2);
          if (((ulong)uStack_f0 & 2) == 0) {
            puVar18 = puStack_e0;
          }
        }
        else {
          puVar18 = (ushort *)0x0;
        }
        iVar6 = u_strCompare_76_godot(puVar18,iVar6,aUStack_b8,uVar5,0);
        uVar4 = (uint)(iVar6 != 0);
      }
      goto LAB_00100151;
    }
    if (-1 < (int)uVar4) {
LAB_0010013c:
      uVar4 = ucase_toFullFolding_76_godot(uVar4,auStack_100,0);
      uVar4 = ~uVar4 >> 0x1f;
      goto LAB_00100151;
    }
  }
  uVar4 = 0;
LAB_00100151:
  icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&pcStack_f8);
  if (puStack_30 == (undefined *)*(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong u_getIntPropertyValue_76_godot(int param_1,uint param_2)

{
  char cVar1;
  byte bVar2;
  byte extraout_AH;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long in_FS_OFFSET;
  int iStack_24;
  undefined *puStack_20;
  undefined4 uStack_14;
  
  if ((int)param_2 < 0x1000) {
    uVar5 = 0;
    if (param_2 < 0x4c) {
      cVar1 = (*(code *)(&switchD_0010119f::switchdataD_00102168)[(long)(int)param_2 * 2])
                        (&binProps + (long)(int)param_2 * 2,param_1);
      uVar5 = (ulong)(uint)(int)cVar1;
    }
    return uVar5;
  }
  if (0x101a < (int)param_2) {
    if (param_2 != 0x2000) {
      return 0;
    }
    bVar2 = u_charType_76_godot();
    return (ulong)(uint)(1 << (bVar2 & 0x1f));
  }
  lVar7 = (long)(int)(param_2 - 0x1000) * 0x20;
  switch(param_2) {
  case 0x1000:
    uVar5 = u_charDirection_76_godot(param_1);
    return uVar5;
  case 0x1001:
    uVar5 = ublock_getCode_76_godot(param_1);
    return uVar5;
  case 0x1002:
    bVar2 = u_getCombiningClass_76_godot(param_1);
    return (ulong)bVar2;
  default:
    uVar4 = u_getUnicodeProperties_76_godot(param_1,*(undefined4 *)(&intProps + lVar7));
    return (ulong)(uint)((int)(uVar4 & *(uint *)(&DAT_00101e04 + lVar7)) >>
                        ((byte)*(undefined4 *)(lVar7 + 0x101e08) & 0x1f));
  case 0x1005:
    cVar1 = u_charType_76_godot(param_1);
    return (ulong)(uint)(int)cVar1;
  case 0x1006:
    uVar5 = ubidi_getJoiningGroup_76_godot(param_1);
    return uVar5;
  case 0x1007:
    uVar5 = ubidi_getJoiningType_76_godot(param_1);
    return uVar5;
  case 0x1009:
    uVar4 = u_getMainProperties_76_godot(param_1);
    uVar6 = 0;
    uVar4 = uVar4 >> 6;
    if ((uVar4 != 0) && (uVar6 = 1, 10 < uVar4)) {
      uVar6 = (0x14 < uVar4) + 2;
    }
    return (ulong)uVar6;
  case 0x100a:
    lVar7 = *(long *)(in_FS_OFFSET + 0x28);
    uStack_14 = 0;
    puStack_20 = (undefined *)0x1008bc;
    uVar5 = uscript_getScript_76_godot(param_1,&uStack_14);
    if (lVar7 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      puStack_20 = &UNK_001008d6;
      __stack_chk_fail();
    }
    return uVar5;
  case 0x100b:
    if (0xffff < param_1) {
      return 0;
    }
    iVar3 = u_getUnicodeProperties_76_godot(param_1,2);
    uVar4 = iVar3 >> 5 & 0x1f;
    if (9 < uVar4) {
      return 0;
    }
    return (ulong)*(uint *)(gcbToHst + (ulong)uVar4 * 4);
  case 0x100c:
  case 0x100d:
  case 0x100e:
  case 0x100f:
    uVar5 = unorm_getQuickCheck_76_godot(param_1,param_2 - 0x100a);
    return uVar5;
  case 0x1010:
    unorm_getFCD16_76_godot(param_1);
    return (ulong)extraout_AH;
  case 0x1011:
    bVar2 = unorm_getFCD16_76_godot(param_1);
    return (ulong)bVar2;
  case 0x1015:
    uVar5 = ubidi_getPairedBracketType_76_godot(param_1);
    return uVar5;
  case 0x1016:
    break;
  case 0x1017:
    puStack_20 = *(undefined **)(in_FS_OFFSET + 0x28);
    iStack_24 = 0;
    if (((anonymous_namespace)::gLayoutInitOnce == 2) ||
       (cVar1 = icu_76_godot::umtx_initImplPreInit
                          ((UInitOnce *)&(anonymous_namespace)::gLayoutInitOnce), cVar1 == '\0')) {
      if (DAT_00101c44 < 1) goto LAB_00100b77;
    }
    else {
      (anonymous_namespace)::ulayout_load((UErrorCode *)&iStack_24);
      DAT_00101c44 = iStack_24;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&(anonymous_namespace)::gLayoutInitOnce);
LAB_00100b77:
      if ((iStack_24 < 1) && ((anonymous_namespace)::gInscTrie != 0)) {
        if (puStack_20 == (undefined *)*(long *)(in_FS_OFFSET + 0x28)) {
          uVar5 = ucptrie_get_76_godot((anonymous_namespace)::gInscTrie,param_1);
          return uVar5;
        }
        goto LAB_00100ba8;
      }
    }
    if (puStack_20 == (undefined *)*(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
LAB_00100ba8:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  case 0x1018:
    puStack_20 = *(undefined **)(in_FS_OFFSET + 0x28);
    iStack_24 = 0;
    if (((anonymous_namespace)::gLayoutInitOnce == 2) ||
       (cVar1 = icu_76_godot::umtx_initImplPreInit
                          ((UInitOnce *)&(anonymous_namespace)::gLayoutInitOnce), cVar1 == '\0')) {
      if (DAT_00101c44 < 1) goto LAB_00100c37;
    }
    else {
      (anonymous_namespace)::ulayout_load((UErrorCode *)&iStack_24);
      DAT_00101c44 = iStack_24;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&(anonymous_namespace)::gLayoutInitOnce);
LAB_00100c37:
      if ((iStack_24 < 1) && ((anonymous_namespace)::gVoTrie != 0)) {
        if (puStack_20 == (undefined *)*(long *)(in_FS_OFFSET + 0x28)) {
          uVar5 = ucptrie_get_76_godot((anonymous_namespace)::gVoTrie,param_1);
          return uVar5;
        }
        goto LAB_00100c68;
      }
    }
    if (puStack_20 == (undefined *)*(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
LAB_00100c68:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  case 0x1019:
    uVar4 = u_getUnicodeProperties_76_godot(param_1,2);
    return (ulong)(0xefffffff < uVar4);
  }
  puStack_20 = *(undefined **)(in_FS_OFFSET + 0x28);
  iStack_24 = 0;
  if (((anonymous_namespace)::gLayoutInitOnce == 2) ||
     (cVar1 = icu_76_godot::umtx_initImplPreInit
                        ((UInitOnce *)&(anonymous_namespace)::gLayoutInitOnce), cVar1 == '\0')) {
    if (DAT_00101c44 < 1) goto LAB_00100ab7;
  }
  else {
    (anonymous_namespace)::ulayout_load((UErrorCode *)&iStack_24);
    DAT_00101c44 = iStack_24;
    icu_76_godot::umtx_initImplPostInit((UInitOnce *)&(anonymous_namespace)::gLayoutInitOnce);
LAB_00100ab7:
    if ((iStack_24 < 1) && ((anonymous_namespace)::gInpcTrie != 0)) {
      if (puStack_20 == (undefined *)*(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = ucptrie_get_76_godot((anonymous_namespace)::gInpcTrie,param_1);
        return uVar5;
      }
      goto LAB_00100ae8;
    }
  }
  if (puStack_20 == (undefined *)*(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00100ae8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 u_getIntPropertyMinValue_76_godot(void)

{
  return 0;
}



ulong u_getIntPropertyMaxValue_76_godot(uint param_1)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long in_FS_OFFSET;
  int iStack_24;
  long lStack_20;
  
  if ((int)param_1 < 0x1000) {
    return (ulong)((-(uint)(param_1 < 0x4c) & 2) - 1);
  }
  if ((int)param_1 < 0x101b) {
    lVar4 = (long)(int)(param_1 - 0x1000) * 0x20;
    switch(param_1) {
    case 0x1000:
    case 0x1006:
    case 0x1007:
    case 0x1015:
      uVar3 = ubidi_getMaxValue_76_godot(param_1);
      return uVar3;
    case 0x1001:
      uVar2 = uprv_getMaxValues_76_godot(0xc);
      return (ulong)(uVar2 & 0x3ff);
    default:
      return (ulong)*(uint *)(lVar4 + 0x101e08);
    case 0x1003:
    case 0x1004:
    case 0x1008:
    case 0x1012:
    case 0x1013:
    case 0x1014:
    case 0x101a:
      uVar2 = uprv_getMaxValues_76_godot(*(undefined4 *)(&intProps + lVar4));
      return (ulong)((uVar2 & *(uint *)(&DAT_00101e04 + lVar4)) >>
                    ((byte)*(undefined4 *)(lVar4 + 0x101e08) & 0x1f));
    case 0x100a:
      uVar2 = uprv_getMaxValues_76_godot(0);
      return (ulong)(uVar2 & 0x3ff);
    case 0x1016:
    case 0x1017:
    case 0x1018:
      goto code_r0x00100c74;
    }
  }
  return 0xffffffff;
code_r0x00100c74:
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  iStack_24 = 0;
  if ((anonymous_namespace)::gLayoutInitOnce == 2) {
LAB_00100c9f:
    if (DAT_00101c44 < 1) goto LAB_00100cff;
  }
  else {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&(anonymous_namespace)::gLayoutInitOnce)
    ;
    if (cVar1 == '\0') goto LAB_00100c9f;
    (anonymous_namespace)::ulayout_load((UErrorCode *)&iStack_24);
    DAT_00101c44 = iStack_24;
    icu_76_godot::umtx_initImplPostInit((UInitOnce *)&(anonymous_namespace)::gLayoutInitOnce);
LAB_00100cff:
    if (iStack_24 < 1) {
      if (param_1 == 0x1017) {
        uVar3 = (ulong)(anonymous_namespace)::gMaxInscValue;
      }
      else if (param_1 == 0x1018) {
        uVar3 = (ulong)(anonymous_namespace)::gMaxVoValue;
      }
      else {
        uVar3 = (ulong)(anonymous_namespace)::gMaxInpcValue;
        if (param_1 != 0x1016) {
          uVar3 = 0;
        }
      }
      goto LAB_00100cb0;
    }
  }
  uVar3 = 0;
LAB_00100cb0:
  if (lStack_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint uprops_getSource_76_godot(uint param_1)

{
  int iVar1;
  uint *puVar2;
  long lVar3;
  
  if ((int)param_1 < 0) {
    return 0;
  }
  if ((int)param_1 < 0x4c) {
    puVar2 = (uint *)(&binProps + (long)(int)param_1 * 2);
    iVar1 = *(int *)((long)&binProps + (long)(int)param_1 * 0x10 + 4);
  }
  else {
    if ((int)param_1 < 0x1000) {
      return 0;
    }
    if (0x101a < (int)param_1) {
      if ((int)param_1 < 0x4000) {
        return (uint)((param_1 & 0xffffefff) == 0x2000);
      }
      if ((int)param_1 < 0x400e) {
        if (param_1 == 0x400d) {
          return 0;
        }
        return *(uint *)(CSWTCH_178 + (ulong)(param_1 - 0x4000) * 4);
      }
      return (uint)(param_1 - 0x7000 < 2) * 2;
    }
    lVar3 = (long)(int)(param_1 - 0x1000) * 0x20;
    puVar2 = (uint *)(&intProps + lVar3);
    iVar1 = *(int *)(&DAT_00101e04 + lVar3);
  }
  if (iVar1 != 0) {
    return 2;
  }
  return *puVar2;
}



ulong uprops_addPropertyStarts_76_godot(int param_1,undefined8 *param_2,UErrorCode *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  ulong in_RAX;
  ulong uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  long lVar9;
  undefined8 uStack_40;
  
  if (0 < *(int *)param_3) {
    return in_RAX;
  }
  if (param_1 == 0x11) {
    puVar6 = &ID_COMPAT_MATH_CONTINUE;
    do {
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
      (*(code *)param_2[1])(*param_2,uVar1);
    } while (puVar6 != (undefined4 *)(anonymous_namespace)::uprops_idTypeToEncoded);
    piVar7 = &ID_COMPAT_MATH_START;
    do {
      iVar8 = *piVar7;
      piVar7 = piVar7 + 1;
      (*(code *)param_2[1])(*param_2,iVar8);
      uVar5 = (*(code *)param_2[1])(*param_2,iVar8 + 1);
    } while (piVar7 != (int *)&DAT_00101db4);
    return uVar5;
  }
  if (param_1 == 0x13) {
    puVar6 = &MODIFIER_COMBINING_MARK;
    do {
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
      uVar5 = (*(code *)param_2[1])(*param_2,uVar1);
    } while (puVar6 != (undefined4 *)&DAT_00101d68);
    return uVar5;
  }
  if ((anonymous_namespace)::gLayoutInitOnce != 2) {
    uStack_40 = 0x1014b4;
    cVar3 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&(anonymous_namespace)::gLayoutInitOnce)
    ;
    if (cVar3 != '\0') {
      (anonymous_namespace)::ulayout_load(param_3);
      DAT_00101c44 = *(uint *)param_3;
      uStack_40 = 0x1014de;
      uVar5 = icu_76_godot::umtx_initImplPostInit
                        ((UInitOnce *)&(anonymous_namespace)::gLayoutInitOnce);
      goto LAB_001014e3;
    }
  }
  uVar5 = (ulong)DAT_00101c44;
  if (0 < (int)DAT_00101c44) {
    *(uint *)param_3 = DAT_00101c44;
    return uVar5;
  }
LAB_001014e3:
  if (*(int *)param_3 < 1) {
    lVar9 = (anonymous_namespace)::gInscTrie;
    if (((param_1 == 0xd) || (lVar9 = (anonymous_namespace)::gVoTrie, param_1 == 0xe)) ||
       (lVar9 = (anonymous_namespace)::gInpcTrie, param_1 == 0xc)) {
      iVar8 = 0;
      if (lVar9 != 0) {
        while( true ) {
          uVar2 = uStack_40;
          iVar4 = ucptrie_getRange_76_godot(lVar9,iVar8,0,0,0,0);
          if (iVar4 < 0) break;
          uStack_40 = 0x10152d;
          (*(code *)param_2[1])(*param_2,iVar8,uVar2);
          iVar8 = iVar4 + 1;
        }
        return 0;
      }
      *(undefined4 *)param_3 = 2;
    }
    else {
      *(undefined4 *)param_3 = 1;
    }
  }
  return uVar5;
}



ulong u_hasIDType_76_godot(undefined8 param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 extraout_RDX;
  ulong uVar3;
  
  if (0xb < param_2) {
    return 0;
  }
  bVar1 = (anonymous_namespace)::uprops_idTypeToEncoded[param_2];
  uVar2 = u_getUnicodeProperties_76_godot(param_1,2);
  uVar2 = uVar2 >> 0x1a;
  uVar3 = CONCAT71((int7)((ulong)extraout_RDX >> 8),bVar1 == uVar2);
  if (((char)bVar1 < '\0') && (uVar3 = 0, uVar2 < 0x30)) {
    return (ulong)((bVar1 & uVar2) != 0);
  }
  return uVar3 & 0xffffffff;
}



/* WARNING: Type propagation algorithm not settling */

int u_getIDTypes_76_godot(undefined8 param_1,uint *param_2,int param_3,int *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  
  if (0 < *param_4) {
    return 0;
  }
  if ((param_3 < 0) || ((0 < param_3 && (param_2 == (uint *)0x0)))) {
    *param_4 = 1;
    return 0;
  }
  uVar2 = u_getUnicodeProperties_76_godot(param_1,2);
  uVar3 = uVar2 >> 0x1a;
  if ((~uVar3 & 0x30) == 0) {
    if (param_3 != 0) {
      switch(uVar3) {
      case 0x30:
        uVar3 = 1;
        break;
      case 0x31:
        uVar3 = 2;
        break;
      case 0x32:
        uVar3 = 3;
        break;
      default:
        *param_4 = 3;
        return 0;
      case 0x3e:
        uVar3 = 10;
        break;
      case 0x3f:
        uVar3 = 0xb;
      }
LAB_00101685:
      *param_2 = uVar3;
      return 1;
    }
LAB_001016b0:
    *param_4 = 0xf;
    return 1;
  }
  if (uVar2 >> 0x1a == 0) {
    if (param_3 != 0) goto LAB_00101685;
    goto LAB_001016b0;
  }
  uVar6 = uVar3 & 2;
  bVar1 = (byte)(uVar2 >> 0x18);
  bVar5 = bVar1 >> 2;
  if ((uVar3 & 1) == 0) {
    iVar4 = 0;
LAB_0010177a:
    iVar7 = iVar4;
    if ((uVar3 & 0x20) != 0) {
      iVar7 = iVar4 + 1;
      if (param_3 <= iVar4) goto LAB_001017e4;
      param_2[iVar4] = 5;
    }
    iVar4 = iVar7;
    if ((uVar6 != 0) && (iVar4 = iVar7 + 1, iVar7 < param_3)) {
      param_2[iVar7] = 6;
    }
    if ((bVar5 & 4) == 0) goto LAB_00101733;
    if (iVar4 < param_3) {
      param_2[iVar4] = 7;
    }
  }
  else {
    if (param_3 != 0) {
      *param_2 = 4;
      iVar4 = 1;
      goto LAB_0010177a;
    }
    if ((uVar3 & 0x20) == 0) {
      if (uVar6 == 0) {
        iVar4 = 1;
      }
      else {
        iVar4 = 2;
      }
    }
    else {
      iVar7 = 2;
LAB_001017e4:
      iVar4 = iVar7;
      if (uVar6 != 0) {
        iVar4 = iVar7 + 1;
      }
    }
    if ((bVar1 >> 2 & 4) == 0) goto LAB_00101733;
  }
  iVar4 = iVar4 + 1;
LAB_00101733:
  if ((bVar5 & 8) != 0) {
    if (iVar4 < param_3) {
      param_2[iVar4] = 8;
    }
    iVar4 = iVar4 + 1;
  }
  if ((uVar3 & 0x10) != 0) {
    if (iVar4 < param_3) {
      param_2[iVar4] = 9;
    }
    iVar4 = iVar4 + 1;
  }
  if (param_3 <= iVar4) {
    *param_4 = 0xf;
    return iVar4;
  }
  return iVar4;
}



undefined4 u_getFC_NFKC_Closure_76_godot(uint param_1,long param_2,int param_3,UErrorCode *param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  Normalizer2 *pNVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  UnicodeString *local_170;
  long local_158;
  long local_150;
  code *local_148;
  short local_140;
  int local_13c;
  code *local_108;
  ushort local_100;
  int local_fc;
  UnicodeString local_c8 [64];
  code *local_88;
  ushort local_80;
  undefined1 local_7e [2];
  int local_7c;
  int local_70;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 != (UErrorCode *)0x0) && (*(int *)param_4 < 1)) {
    if ((param_3 < 0) || ((param_2 == 0 && (0 < param_3)))) {
      *(undefined4 *)param_4 = 1;
    }
    else {
      pNVar7 = (Normalizer2 *)icu_76_godot::Normalizer2::getNFKCInstance(param_4);
      if (*(int *)param_4 < 1) {
        local_140 = 2;
        local_148 = ucase_toFullFolding_76_godot;
        iVar5 = ucase_toFullFolding_76_godot(param_1,&local_158,0);
        if (iVar5 < 0) {
          lVar9 = icu_76_godot::Normalizer2Factory::getImpl(pNVar7);
          plVar1 = *(long **)(lVar9 + 0x28);
          if ((param_1 & 0xfffffc00) == 0xd800) {
            uVar4 = 1;
            if (*(ushort *)(lVar9 + 0x12) < 2) goto LAB_00101b61;
          }
          else {
            lVar2 = plVar1[1];
            if (param_1 < 0x10000) {
              lVar10 = (long)(int)((uint)*(ushort *)(*plVar1 + (long)((int)param_1 >> 6) * 2) +
                                  (param_1 & 0x3f)) * 2;
            }
            else if (param_1 < 0x110000) {
              if ((int)param_1 < (int)plVar1[3]) {
                iVar5 = ucptrie_internalSmallIndex_76_godot();
                lVar10 = (long)iVar5 * 2;
              }
              else {
                lVar10 = (long)(*(int *)((long)plVar1 + 0x14) + -2) * 2;
              }
            }
            else {
              lVar10 = (long)(*(int *)((long)plVar1 + 0x14) + -1) * 2;
            }
            uVar4 = *(ushort *)(lVar2 + lVar10);
            if ((*(ushort *)(lVar9 + 0x12) <= uVar4) && (uVar4 < 0xfe02)) {
LAB_00101b61:
              if (uVar4 < *(ushort *)(lVar9 + 0x1e)) {
                icu_76_godot::UnicodeString::unBogus();
                if (-1 < local_140) {
                  local_13c = (int)(local_140 >> 5);
                }
                icu_76_godot::UnicodeString::replace((int)&local_148,0,local_13c);
                goto LAB_00101900;
              }
            }
          }
          uVar6 = u_terminateUChars_76_godot(param_2,param_3,0,param_4);
        }
        else {
          if (iVar5 < 0x20) {
            local_150 = local_158;
            icu_76_godot::UnicodeString::setTo(&local_148,0,&local_150,iVar5);
          }
          else {
            icu_76_godot::UnicodeString::unBogus();
            if (-1 < local_140) {
              local_13c = (int)(local_140 >> 5);
            }
            icu_76_godot::UnicodeString::replace((int)&local_148,0,local_13c);
          }
LAB_00101900:
          local_170 = (UnicodeString *)&local_148;
          local_108 = ucase_toFullFolding_76_godot;
          local_100 = 2;
          (**(code **)(*(long *)pNVar7 + 0x18))
                    (pNVar7,local_170,(UnicodeString *)&local_108,param_4);
          icu_76_godot::UnicodeString::UnicodeString(local_c8,(UnicodeString *)&local_108);
          uVar8 = icu_76_godot::UnicodeString::foldCase((uint)local_c8);
          local_80 = 2;
          local_88 = ucase_toFullFolding_76_godot;
          (**(code **)(*(long *)pNVar7 + 0x18))(pNVar7,uVar8,(UnicodeString *)&local_88,param_4);
          if (*(int *)param_4 < 1) {
            if ((local_100 & 1) == 0) {
              if (-1 < (short)local_100) {
                local_fc = (int)((short)local_100 >> 5);
              }
              if (-1 < (short)local_80) {
                local_7c = (int)((short)local_80 >> 5);
              }
              if (((local_80 & 1) == 0) && (local_7c == local_fc)) {
                iVar5 = (int)local_7e;
                if ((local_80 & 2) == 0) {
                  iVar5 = local_70;
                }
                cVar3 = icu_76_godot::UnicodeString::doEquals((wchar16 *)&local_108,iVar5);
                if (cVar3 != '\0') goto LAB_00101993;
              }
            }
            else if ((local_80 & 1) != 0) goto LAB_00101993;
            local_150 = param_2;
            uVar6 = icu_76_godot::UnicodeString::extract
                              ((UnicodeString *)&local_88,&local_150,param_3,param_4);
          }
          else {
LAB_00101993:
            uVar6 = u_terminateUChars_76_godot(param_2,param_3,0,param_4);
          }
          icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_88);
          icu_76_godot::UnicodeString::~UnicodeString(local_c8);
          icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_108);
        }
        local_170 = (UnicodeString *)&local_148;
        icu_76_godot::UnicodeString::~UnicodeString(local_170);
        goto LAB_00101866;
      }
    }
  }
  uVar6 = 0;
LAB_00101866:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}


