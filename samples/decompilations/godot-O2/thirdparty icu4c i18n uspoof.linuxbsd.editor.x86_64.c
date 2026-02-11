
void uspoof_close_76_godot(USpoofChecker *param_1)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  plVar1 = (long *)icu_76_godot::SpoofImpl::validateThis(param_1,(UErrorCode *)&local_14);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void uspoof_setChecks_76_godot(USpoofChecker *param_1,uint param_2,UErrorCode *param_3)

{
  long lVar1;
  
  lVar1 = icu_76_godot::SpoofImpl::validateThis(param_1,param_3);
  if (lVar1 != 0) {
    if ((param_2 & 0xbfff0000) != 0) {
      *(undefined4 *)param_3 = 1;
      return;
    }
    *(uint *)(lVar1 + 0xc) = param_2;
  }
  return;
}



undefined4 uspoof_getChecks_76_godot(USpoofChecker *param_1,UErrorCode *param_2)

{
  long lVar1;
  
  lVar1 = icu_76_godot::SpoofImpl::validateThis(param_1,param_2);
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0xc);
  }
  return 0;
}



void uspoof_setRestrictionLevel_76_godot(USpoofChecker *param_1,undefined4 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  lVar1 = icu_76_godot::SpoofImpl::validateThis(param_1,(UErrorCode *)&local_14);
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0xc) = *(uint *)(lVar1 + 0xc) | 0x10;
    *(undefined4 *)(lVar1 + 0x28) = param_2;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 uspoof_getRestrictionLevel_76_godot(USpoofChecker *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  lVar2 = icu_76_godot::SpoofImpl::validateThis(param_1,(UErrorCode *)&local_14);
  if (lVar2 == 0) {
    uVar1 = 0x60000000;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 0x28);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void uspoof_setAllowedLocales_76_godot
               (USpoofChecker *param_1,UErrorCode *param_2,UErrorCode *param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)icu_76_godot::SpoofImpl::validateThis(param_1,param_3);
  if (pcVar1 != (char *)0x0) {
    icu_76_godot::SpoofImpl::setAllowedLocales(pcVar1,param_2);
    return;
  }
  return;
}



undefined8 uspoof_getAllowedLocales_76_godot(USpoofChecker *param_1,UErrorCode *param_2)

{
  UErrorCode *pUVar1;
  undefined8 uVar2;
  
  pUVar1 = (UErrorCode *)icu_76_godot::SpoofImpl::validateThis(param_1,param_2);
  if (pUVar1 != (UErrorCode *)0x0) {
    uVar2 = icu_76_godot::SpoofImpl::getAllowedLocales(pUVar1);
    return uVar2;
  }
  return 0;
}



long uspoof_getAllowedChars_76_godot(USpoofChecker *param_1,UErrorCode *param_2)

{
  long lVar1;
  
  lVar1 = icu_76_godot::SpoofImpl::validateThis(param_1,param_2);
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
  }
  return lVar1;
}



long uspoof_getAllowedUnicodeSet_76_godot(USpoofChecker *param_1,UErrorCode *param_2)

{
  long lVar1;
  
  lVar1 = icu_76_godot::SpoofImpl::validateThis(param_1,param_2);
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
  }
  return lVar1;
}



/* uspoof_getSkeletonUnicodeString_76_godot(USpoofChecker const*, unsigned int,
   icu_76_godot::UnicodeString const&, icu_76_godot::UnicodeString&, UErrorCode*) */

UnicodeString *
uspoof_getSkeletonUnicodeString_76_godot
          (USpoofChecker *param_1,uint param_2,UnicodeString *param_3,UnicodeString *param_4,
          UErrorCode *param_5)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long in_FS_OFFSET;
  UnicodeString *local_d8;
  code *local_c8;
  short local_c0;
  int local_bc;
  code *local_88;
  undefined2 local_80;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = icu_76_godot::SpoofImpl::validateThis(param_1,param_5);
  if (*(int *)param_5 < 1) {
    local_c0 = 2;
    local_c8 = u_hasBinaryProperty_76_godot;
    (**(code **)(*gNfdNormalizer + 0x18))(gNfdNormalizer,param_3,(UnicodeString *)&local_c8,param_5)
    ;
    local_88 = u_hasBinaryProperty_76_godot;
    local_80 = 2;
    iVar5 = local_bc;
    if (-1 < local_c0) {
      iVar5 = (int)(local_c0 >> 5);
    }
    if (0 < iVar5) {
      iVar4 = 0;
      do {
        while( true ) {
          uVar2 = icu_76_godot::UnicodeString::char32At((int)(UnicodeString *)&local_c8);
          iVar4 = (0xffff < uVar2) + 1 + iVar4;
          cVar1 = u_hasBinaryProperty_76_godot(uVar2,5);
          if (cVar1 != '\0') break;
          icu_76_godot::SpoofData::confusableLookup
                    ((int)*(undefined8 *)(lVar3 + 0x10),(UnicodeString *)(ulong)uVar2);
          if (iVar5 <= iVar4) goto LAB_0010033e;
        }
      } while (iVar4 < iVar5);
    }
LAB_0010033e:
    local_d8 = (UnicodeString *)&local_88;
    (**(code **)(*gNfdNormalizer + 0x18))(gNfdNormalizer,local_d8,param_4,param_5);
    icu_76_godot::UnicodeString::~UnicodeString(local_d8);
    icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_c8);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



uint uspoof_areConfusableUnicodeString_76_godot
               (USpoofChecker *param_1,ScriptSet *param_2,ScriptSet *param_3,UErrorCode *param_4)

{
  uint uVar1;
  char cVar2;
  UnicodeString *pUVar3;
  uint uVar4;
  int iVar5;
  long in_FS_OFFSET;
  ScriptSet local_108 [32];
  ScriptSet local_e8 [32];
  code *local_c8;
  ushort local_c0;
  int local_bc;
  code *local_88;
  ushort local_80;
  undefined1 local_7e [2];
  int local_7c;
  int local_70;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pUVar3 = (UnicodeString *)icu_76_godot::SpoofImpl::validateThis(param_1,param_4);
  if (*(int *)param_4 < 1) {
    if (((byte)pUVar3[0xc] & 7) != 0) {
      local_c0 = 2;
      local_c8 = u_hasBinaryProperty_76_godot;
      uspoof_getSkeletonUnicodeString_76_godot
                (param_1,0,(UnicodeString *)param_2,(UnicodeString *)&local_c8,param_4);
      local_88 = u_hasBinaryProperty_76_godot;
      local_80 = 2;
      uspoof_getSkeletonUnicodeString_76_godot
                (param_1,0,(UnicodeString *)param_3,(UnicodeString *)&local_88,param_4);
      if (*(int *)param_4 < 1) {
        if ((local_c0 & 1) == 0) {
          if (-1 < (short)local_c0) {
            local_bc = (int)((short)local_c0 >> 5);
          }
          if (-1 < (short)local_80) {
            local_7c = (int)((short)local_80 >> 5);
          }
          if (((local_80 & 1) == 0) && (local_7c == local_bc)) {
            iVar5 = (int)local_7e;
            if ((local_80 & 2) == 0) {
              iVar5 = local_70;
            }
            cVar2 = icu_76_godot::UnicodeString::doEquals((wchar16 *)&local_c8,iVar5);
            if (cVar2 != '\0') goto LAB_001004e2;
          }
          goto LAB_001004a9;
        }
        if ((local_80 & 1) == 0) goto LAB_001004a9;
LAB_001004e2:
        icu_76_godot::ScriptSet::ScriptSet(local_108);
        icu_76_godot::SpoofImpl::getResolvedScriptSet(pUVar3,param_2,(UErrorCode *)local_108);
        icu_76_godot::ScriptSet::ScriptSet(local_e8);
        uVar4 = 1;
        icu_76_godot::SpoofImpl::getResolvedScriptSet(pUVar3,param_3,(UErrorCode *)local_e8);
        cVar2 = icu_76_godot::ScriptSet::intersects(local_108);
        if (cVar2 == '\0') {
          cVar2 = icu_76_godot::ScriptSet::isEmpty();
          if ((cVar2 == '\0') && (cVar2 = icu_76_godot::ScriptSet::isEmpty(), cVar2 == '\0')) {
            uVar4 = 6;
          }
          else {
            uVar4 = 2;
          }
        }
        uVar1 = *(uint *)(pUVar3 + 0xc);
        if ((uVar1 & 1) == 0) {
          uVar4 = uVar4 & 0xfffffffe;
        }
        if ((uVar1 & 2) == 0) {
          uVar4 = uVar4 & 0xfffffffd;
        }
        if ((uVar1 & 4) == 0) {
          uVar4 = uVar4 & 0xfffffffb;
        }
        icu_76_godot::ScriptSet::~ScriptSet(local_e8);
        icu_76_godot::ScriptSet::~ScriptSet(local_108);
      }
      else {
LAB_001004a9:
        uVar4 = 0;
      }
      icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_88);
      icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_c8);
      goto LAB_00100413;
    }
    *(undefined4 *)param_4 = 0x1b;
  }
  uVar4 = 0;
LAB_00100413:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



undefined4
uspoof_areConfusable_76_godot
          (USpoofChecker *param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5,
          UErrorCode *param_6)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  undefined8 local_d0;
  UnicodeString local_c8 [64];
  UnicodeString local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  icu_76_godot::SpoofImpl::validateThis(param_1,param_6);
  if (*(int *)param_6 < 1) {
    if ((-2 < param_3) && (-2 < param_5)) {
      local_d0 = param_2;
      icu_76_godot::UnicodeString::UnicodeString(local_c8,param_3 == -1,&local_d0,param_3);
      local_d0 = param_4;
      icu_76_godot::UnicodeString::UnicodeString(local_88,param_5 == -1,&local_d0,param_5);
      uVar1 = uspoof_areConfusableUnicodeString_76_godot(param_1,local_c8,local_88,param_6);
      icu_76_godot::UnicodeString::~UnicodeString(local_88);
      icu_76_godot::UnicodeString::~UnicodeString(local_c8);
      goto LAB_001006f0;
    }
    *(undefined4 *)param_6 = 1;
  }
  uVar1 = 0;
LAB_001006f0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
uspoof_areConfusableUTF8_76_godot
          (USpoofChecker *param_1,char *param_2,uint param_3,char *param_4,int param_5,
          UErrorCode *param_6)

{
  undefined4 uVar1;
  size_t sVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  UnicodeString aUStack_c8 [64];
  UnicodeString local_88 [72];
  long local_40;
  
  uVar3 = (ulong)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  icu_76_godot::SpoofImpl::validateThis(param_1,param_6);
  if (*(int *)param_6 < 1) {
    if ((-2 < (int)param_3) && (-2 < param_5)) {
      if (param_3 == 0xffffffff) {
        sVar2 = strlen(param_2);
        uVar3 = sVar2 & 0xffffffff;
      }
      icu_76_godot::UnicodeString::fromUTF8(aUStack_c8,param_2,uVar3);
      if (param_5 == -1) {
        sVar2 = strlen(param_4);
        param_5 = (int)sVar2;
      }
      icu_76_godot::UnicodeString::fromUTF8(local_88,param_4,param_5);
      uVar1 = uspoof_areConfusableUnicodeString_76_godot(param_1,aUStack_c8,local_88,param_6);
      icu_76_godot::UnicodeString::~UnicodeString(local_88);
      icu_76_godot::UnicodeString::~UnicodeString(aUStack_c8);
      goto LAB_001007f4;
    }
    *(undefined4 *)param_6 = 1;
  }
  uVar1 = 0;
LAB_001007f4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int uspoof_getSkeleton_76_godot
              (USpoofChecker *param_1,uint param_2,long param_3,int param_4,long param_5,int param_6
              ,UErrorCode *param_7)

{
  long in_FS_OFFSET;
  long local_d0;
  UnicodeString local_c8 [64];
  code *local_88;
  short local_80;
  int local_7c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  icu_76_godot::SpoofImpl::validateThis(param_1,param_7);
  if (*(int *)param_7 < 1) {
    if (((-2 < param_4) && (-1 < param_6)) && ((param_6 != 0 || (param_5 == 0)))) {
      local_d0 = param_3;
      icu_76_godot::UnicodeString::UnicodeString(local_c8,param_4 == -1,&local_d0,param_4);
      local_88 = u_hasBinaryProperty_76_godot;
      local_80 = 2;
      uspoof_getSkeletonUnicodeString_76_godot
                (param_1,param_2,local_c8,(UnicodeString *)&local_88,param_7);
      local_d0 = param_5;
      icu_76_godot::UnicodeString::extract((UnicodeString *)&local_88,&local_d0,param_6,param_7);
      if (-1 < local_80) {
        local_7c = (int)(local_80 >> 5);
      }
      icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_88);
      icu_76_godot::UnicodeString::~UnicodeString(local_c8);
      goto LAB_0010089c;
    }
    *(undefined4 *)param_7 = 1;
  }
  local_7c = 0;
LAB_0010089c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_7c;
}



/* uspoof_getBidiSkeletonUnicodeString_76_godot(USpoofChecker const*, UBiDiDirection,
   icu_76_godot::UnicodeString const&, icu_76_godot::UnicodeString&, UErrorCode*) */

UnicodeString *
uspoof_getBidiSkeletonUnicodeString_76_godot
          (USpoofChecker *param_1,uint param_2,long param_3,UnicodeString *param_4,
          UErrorCode *param_5)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  code *local_88;
  undefined2 local_80;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(ushort *)(param_4 + 8) & 0x1f;
  if ((*(ushort *)(param_4 + 8) & 1) != 0) {
    uVar1 = 2;
  }
  *(ushort *)(param_4 + 8) = uVar1;
  if (param_2 < 2) {
    uVar3 = ubidi_open_76_godot();
    uVar1 = *(ushort *)(param_3 + 8);
    if ((short)uVar1 < 0) {
      iVar5 = *(int *)(param_3 + 0xc);
    }
    else {
      iVar5 = (int)((short)uVar1 >> 5);
    }
    if ((uVar1 & 0x11) == 0) {
      lVar4 = param_3 + 10;
      if ((uVar1 & 2) == 0) {
        lVar4 = *(long *)(param_3 + 0x18);
      }
    }
    else {
      lVar4 = 0;
    }
    ubidi_setPara_76_godot(uVar3,lVar4,iVar5,param_2,0,param_5);
    if (*(int *)param_5 < 1) {
      local_80 = 2;
      local_88 = u_hasBinaryProperty_76_godot;
      uVar2 = ubidi_getProcessedLength_76_godot(uVar3);
      lVar4 = icu_76_godot::UnicodeString::getBuffer((int)&local_88);
      if (lVar4 == 0) {
        *(undefined4 *)param_5 = 7;
        ubidi_close_76_godot(uVar3,0);
      }
      else {
        ubidi_writeReordered_76_godot(uVar3,lVar4,uVar2,3,param_5);
        icu_76_godot::UnicodeString::releaseBuffer((int)&local_88);
        ubidi_close_76_godot(uVar3);
        if (*(int *)param_5 < 1) {
          param_4 = (UnicodeString *)
                    uspoof_getSkeletonUnicodeString_76_godot
                              (param_1,0x3a,(UnicodeString *)&local_88,param_4,param_5);
        }
      }
      icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_88);
    }
    else {
      ubidi_close_76_godot(uVar3);
    }
  }
  else {
    *(undefined4 *)param_5 = 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint uspoof_areBidiConfusableUnicodeString_76_godot
               (USpoofChecker *param_1,undefined4 param_2,ScriptSet *param_3,ScriptSet *param_4,
               UErrorCode *param_5)

{
  char cVar1;
  UnicodeString *pUVar2;
  int iVar3;
  uint uVar4;
  long in_FS_OFFSET;
  ScriptSet local_108 [32];
  ScriptSet local_e8 [32];
  code *local_c8;
  ushort local_c0;
  int local_bc;
  code *local_88;
  ushort local_80;
  undefined1 local_7e [2];
  int local_7c;
  int local_70;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pUVar2 = (UnicodeString *)icu_76_godot::SpoofImpl::validateThis(param_1,param_5);
  if (*(int *)param_5 < 1) {
    if (((byte)pUVar2[0xc] & 7) != 0) {
      local_c0 = 2;
      local_c8 = u_hasBinaryProperty_76_godot;
      uspoof_getBidiSkeletonUnicodeString_76_godot
                (param_1,param_2,param_3,(UnicodeString *)&local_c8,param_5);
      local_88 = u_hasBinaryProperty_76_godot;
      local_80 = 2;
      uspoof_getBidiSkeletonUnicodeString_76_godot
                (param_1,param_2,param_4,(UnicodeString *)&local_88,param_5);
      if (*(int *)param_5 < 1) {
        if ((local_c0 & 1) == 0) {
          if (-1 < (short)local_c0) {
            local_bc = (int)((short)local_c0 >> 5);
          }
          if (-1 < (short)local_80) {
            local_7c = (int)((short)local_80 >> 5);
          }
          if (((local_80 & 1) == 0) && (local_7c == local_bc)) {
            iVar3 = (int)local_7e;
            if ((local_80 & 2) == 0) {
              iVar3 = local_70;
            }
            cVar1 = icu_76_godot::UnicodeString::doEquals((wchar16 *)&local_c8,iVar3);
            if (cVar1 != '\0') goto LAB_00100c76;
          }
          goto LAB_00100c3c;
        }
        if ((local_80 & 1) == 0) goto LAB_00100c3c;
LAB_00100c76:
        icu_76_godot::ScriptSet::ScriptSet(local_108);
        icu_76_godot::SpoofImpl::getResolvedScriptSet(pUVar2,param_3,(UErrorCode *)local_108);
        icu_76_godot::ScriptSet::ScriptSet(local_e8);
        uVar4 = 1;
        icu_76_godot::SpoofImpl::getResolvedScriptSet(pUVar2,param_4,(UErrorCode *)local_e8);
        cVar1 = icu_76_godot::ScriptSet::intersects(local_108);
        if (cVar1 == '\0') {
          cVar1 = icu_76_godot::ScriptSet::isEmpty();
          if ((cVar1 == '\0') && (cVar1 = icu_76_godot::ScriptSet::isEmpty(), cVar1 == '\0')) {
            uVar4 = 6;
          }
          else {
            uVar4 = 2;
          }
        }
        uVar4 = uVar4 & *(uint *)(pUVar2 + 0xc);
        icu_76_godot::ScriptSet::~ScriptSet(local_e8);
        icu_76_godot::ScriptSet::~ScriptSet(local_108);
      }
      else {
LAB_00100c3c:
        uVar4 = 0;
      }
      icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_88);
      icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_c8);
      goto LAB_00100b9b;
    }
    *(undefined4 *)param_5 = 0x1b;
  }
  uVar4 = 0;
LAB_00100b9b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



undefined4
uspoof_areBidiConfusable_76_godot
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4,undefined8 param_5,
          int param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  undefined8 local_d0;
  UnicodeString local_c8 [8];
  byte local_c0;
  UnicodeString local_88 [8];
  byte local_80;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = param_3;
  icu_76_godot::UnicodeString::UnicodeString(local_c8,param_4 == -1,&local_d0);
  local_d0 = param_5;
  icu_76_godot::UnicodeString::UnicodeString(local_88,param_6 == -1,&local_d0,param_6);
  if (((local_80 | local_c0) & 1) == 0) {
    uVar1 = uspoof_areBidiConfusableUnicodeString_76_godot
                      (param_1,param_2,local_c8,local_88,param_7);
  }
  else {
    *param_7 = 1;
    uVar1 = 0;
  }
  icu_76_godot::UnicodeString::~UnicodeString(local_88);
  icu_76_godot::UnicodeString::~UnicodeString(local_c8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
uspoof_areBidiConfusableUTF8_76_godot
          (undefined8 param_1,undefined4 param_2,char *param_3,ulong param_4,char *param_5,
          int param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  UnicodeString local_c8 [64];
  UnicodeString local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((int)param_4 < -1) || (param_6 < -1)) {
    *param_7 = 1;
    uVar1 = 0;
  }
  else {
    if ((int)param_4 == -1) {
      sVar2 = strlen(param_3);
      param_4 = sVar2 & 0xffffffff;
    }
    icu_76_godot::UnicodeString::fromUTF8(local_c8,param_3,param_4 & 0xffffffff);
    if (param_6 == -1) {
      sVar2 = strlen(param_5);
      param_6 = (int)sVar2;
    }
    icu_76_godot::UnicodeString::fromUTF8(local_88,param_5,param_6);
    uVar1 = uspoof_areBidiConfusableUnicodeString_76_godot
                      (param_1,param_2,local_c8,local_88,param_7);
    icu_76_godot::UnicodeString::~UnicodeString(local_88);
    icu_76_godot::UnicodeString::~UnicodeString(local_c8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
uspoof_getBidiSkeleton_76_godot
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4,undefined8 param_5,
          undefined4 param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  undefined8 local_d0;
  UnicodeString local_c8 [8];
  byte local_c0;
  code *local_88;
  undefined2 local_80;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = param_3;
  icu_76_godot::UnicodeString::UnicodeString(local_c8,param_4 == -1,&local_d0);
  if ((local_c0 & 1) == 0) {
    local_88 = u_hasBinaryProperty_76_godot;
    local_80 = 2;
    uspoof_getBidiSkeletonUnicodeString_76_godot
              (param_1,param_2,local_c8,(UnicodeString *)&local_88,param_7);
    local_d0 = param_5;
    uVar1 = icu_76_godot::UnicodeString::extract
                      ((UnicodeString *)&local_88,&local_d0,param_6,param_7);
    icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_88);
  }
  else {
    *param_7 = 1;
    uVar1 = 0;
  }
  icu_76_godot::UnicodeString::~UnicodeString(local_c8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
uspoof_getSkeletonUTF8_76_godot
          (USpoofChecker *param_1,uint param_2,char *param_3,uint param_4,long param_5,int param_6,
          UErrorCode *param_7)

{
  size_t sVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined4 uVar4;
  long in_FS_OFFSET;
  undefined4 local_cc;
  UnicodeString local_c8 [64];
  code *local_88;
  ushort local_80;
  undefined1 local_7e [2];
  int local_7c;
  undefined1 *local_70;
  long local_40;
  
  uVar3 = (ulong)param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  icu_76_godot::SpoofImpl::validateThis(param_1,param_7);
  if (*(int *)param_7 < 1) {
    if (((-2 < (int)param_4) && (-1 < param_6)) && ((param_6 != 0 || (param_5 == 0)))) {
      if (param_4 == 0xffffffff) {
        sVar1 = strlen(param_3);
        uVar3 = sVar1 & 0xffffffff;
      }
      icu_76_godot::UnicodeString::fromUTF8(local_c8,param_3,uVar3);
      local_88 = u_hasBinaryProperty_76_godot;
      local_80 = 2;
      uspoof_getSkeletonUnicodeString_76_godot
                (param_1,param_2,local_c8,(UnicodeString *)&local_88,param_7);
      uVar4 = 0;
      if (*(int *)param_7 < 1) {
        local_cc = 0;
        if (-1 < (short)local_80) {
          local_7c = (int)((short)local_80 >> 5);
        }
        if ((local_80 & 0x11) == 0) {
          puVar2 = local_7e;
          if ((local_80 & 2) == 0) {
            puVar2 = local_70;
          }
        }
        else {
          puVar2 = (undefined1 *)0x0;
        }
        u_strToUTF8_76_godot(param_5,param_6,&local_cc,puVar2,local_7c,param_7);
        uVar4 = local_cc;
      }
      icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_88);
      icu_76_godot::UnicodeString::~UnicodeString(local_c8);
      goto LAB_0010112b;
    }
    *(undefined4 *)param_7 = 1;
  }
  uVar4 = 0;
LAB_0010112b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



undefined4
uspoof_getBidiSkeletonUTF8_76_godot
          (undefined8 param_1,undefined4 param_2,char *param_3,ulong param_4,undefined8 param_5,
          undefined4 param_6,int *param_7)

{
  size_t sVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  undefined4 local_cc;
  UnicodeString local_c8 [64];
  code *local_88;
  ushort local_80;
  undefined1 local_7e [2];
  int local_7c;
  undefined1 *local_70;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)param_4 < -1) {
    *param_7 = 1;
    uVar3 = 0;
  }
  else {
    if ((int)param_4 == -1) {
      sVar1 = strlen(param_3);
      param_4 = sVar1 & 0xffffffff;
    }
    icu_76_godot::UnicodeString::fromUTF8(local_c8,param_3,param_4 & 0xffffffff);
    local_88 = u_hasBinaryProperty_76_godot;
    local_80 = 2;
    uspoof_getBidiSkeletonUnicodeString_76_godot
              (param_1,param_2,local_c8,(UnicodeString *)&local_88,param_7);
    uVar3 = 0;
    if (*param_7 < 1) {
      local_cc = 0;
      if (-1 < (short)local_80) {
        local_7c = (int)((short)local_80 >> 5);
      }
      if ((local_80 & 0x11) == 0) {
        puVar2 = local_7e;
        if ((local_80 & 2) == 0) {
          puVar2 = local_70;
        }
      }
      else {
        puVar2 = (undefined1 *)0x0;
      }
      u_strToUTF8_76_godot(param_5,param_6,&local_cc,puVar2,local_7c,param_7);
      uVar3 = local_cc;
    }
    icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_88);
    icu_76_godot::UnicodeString::~UnicodeString(local_c8);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8
uspoof_serialize_76_godot(USpoofChecker *param_1,int param_2,uint param_3,UErrorCode *param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = icu_76_godot::SpoofImpl::validateThis(param_1,param_4);
  if (lVar1 != 0) {
    uVar2 = icu_76_godot::SpoofData::serialize
                      (*(void **)(lVar1 + 0x10),param_2,(UErrorCode *)(ulong)param_3);
    return uVar2;
  }
  return 0;
}



undefined8 uspoof_openCheckResult_76_godot(undefined4 *param_1,ulong param_2)

{
  CheckResult *this;
  undefined8 uVar1;
  
  this = (CheckResult *)icu_76_godot::UMemory::operator_new((UMemory *)0xe0,param_2);
  if (this != (CheckResult *)0x0) {
    icu_76_godot::CheckResult::CheckResult(this);
    uVar1 = icu_76_godot::CheckResult::asUSpoofCheckResult();
    return uVar1;
  }
  *param_1 = 7;
  return 0;
}



void uspoof_closeCheckResult_76_godot(USpoofCheckResult *param_1)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  plVar1 = (long *)icu_76_godot::CheckResult::validateThis(param_1,(UErrorCode *)&local_14);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 uspoof_getCheckResultChecks_76_godot(USpoofCheckResult *param_1,UErrorCode *param_2)

{
  long lVar1;
  
  lVar1 = icu_76_godot::CheckResult::validateThis(param_1,param_2);
  if (*(int *)param_2 < 1) {
    return *(undefined4 *)(lVar1 + 0xc);
  }
  return 0;
}



undefined4
uspoof_getCheckResultRestrictionLevel_76_godot(USpoofCheckResult *param_1,UErrorCode *param_2)

{
  long lVar1;
  
  lVar1 = icu_76_godot::CheckResult::validateThis(param_1,param_2);
  if (*(int *)param_2 < 1) {
    return *(undefined4 *)(lVar1 + 0xd8);
  }
  return 0x60000000;
}



long uspoof_getCheckResultNumerics_76_godot(USpoofCheckResult *param_1,UErrorCode *param_2)

{
  long lVar1;
  
  lVar1 = icu_76_godot::CheckResult::validateThis(param_1,param_2);
  if (*(int *)param_2 < 1) {
    return lVar1 + 0x10;
  }
  return 0;
}



/* (anonymous namespace)::initializeStatics(UErrorCode&) */

void __thiscall
(anonymous_namespace)::initializeStatics(_anonymous_namespace_ *this,UErrorCode *param_1)

{
  UnicodeSet *this_00;
  UnicodeSet *pUVar1;
  
  pUVar1 = (UnicodeSet *)icu_76_godot::UMemory::operator_new((UMemory *)0xc8,(ulong)param_1);
  if (pUVar1 != (UnicodeSet *)0x0) {
    icu_76_godot::UnicodeSet::UnicodeSet(pUVar1);
  }
  gInclusionSet = pUVar1;
  pUVar1 = (UnicodeSet *)icu_76_godot::UMemory::operator_new((UMemory *)0xc8,(ulong)param_1);
  this_00 = gInclusionSet;
  if (pUVar1 == (UnicodeSet *)0x0) {
    *(undefined4 *)this = 7;
    gRecommendedSet = (UnicodeSet *)0x0;
    if (this_00 == (UnicodeSet *)0x0) {
      gRecommendedSet = (UnicodeSet *)0x0;
      return;
    }
    icu_76_godot::UnicodeSet::~UnicodeSet(this_00);
    pUVar1 = gRecommendedSet;
  }
  else {
    icu_76_godot::UnicodeSet::UnicodeSet(pUVar1);
    gRecommendedSet = pUVar1;
    if (gInclusionSet == (UnicodeSet *)0x0) {
      *(undefined4 *)this = 7;
      goto LAB_001015e9;
    }
    icu_76_godot::UnicodeSet::applyIntPropertyValue(gInclusionSet,0x7001,10,this);
    icu_76_godot::UnicodeSet::applyIntPropertyValue(gRecommendedSet,0x7001,0xb,this);
    if (*(int *)this < 1) {
      icu_76_godot::UnicodeSet::freeze();
      icu_76_godot::UnicodeSet::freeze();
      gNfdNormalizer = icu_76_godot::Normalizer2::getNFDInstance((UErrorCode *)this);
      ucln_i18n_registerCleanup_76_godot(3,uspoof_cleanup);
      return;
    }
    pUVar1 = gRecommendedSet;
    if (gInclusionSet != (UnicodeSet *)0x0) {
      icu_76_godot::UnicodeSet::~UnicodeSet(gInclusionSet);
      pUVar1 = gRecommendedSet;
    }
  }
  gInclusionSet = (UnicodeSet *)0x0;
  gRecommendedSet = pUVar1;
  if (pUVar1 == (UnicodeSet *)0x0) {
    gRecommendedSet = (UnicodeSet *)0x0;
    gInclusionSet = (UnicodeSet *)0x0;
    return;
  }
LAB_001015e9:
  icu_76_godot::UnicodeSet::~UnicodeSet(pUVar1);
  gRecommendedSet = (UnicodeSet *)0x0;
  return;
}



void uspoof_internalInitStatics_76_godot(_anonymous_namespace_ *param_1,UErrorCode *param_2)

{
  char cVar1;
  
  if (0 < *(int *)param_1) {
    return;
  }
  if (gSpoofInitStaticsOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gSpoofInitStaticsOnce);
    if (cVar1 != '\0') {
      (anonymous_namespace)::initializeStatics(param_1,param_2);
      DAT_00102554 = *(int *)param_1;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gSpoofInitStaticsOnce);
      return;
    }
  }
  if (0 < DAT_00102554) {
    *(int *)param_1 = DAT_00102554;
  }
  return;
}



undefined8 uspoof_getRecommendedSet_76_godot(_anonymous_namespace_ *param_1,UErrorCode *param_2)

{
  char cVar1;
  
  if (0 < *(int *)param_1) {
    return gRecommendedSet;
  }
  if ((gSpoofInitStaticsOnce != 2) &&
     (cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gSpoofInitStaticsOnce), cVar1 != '\0'
     )) {
    (anonymous_namespace)::initializeStatics(param_1,param_2);
    DAT_00102554 = *(int *)param_1;
    icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gSpoofInitStaticsOnce);
    return gRecommendedSet;
  }
  if (0 < DAT_00102554) {
    *(int *)param_1 = DAT_00102554;
  }
  return gRecommendedSet;
}



undefined8
uspoof_getRecommendedUnicodeSet_76_godot(_anonymous_namespace_ *param_1,UErrorCode *param_2)

{
  char cVar1;
  
  if (0 < *(int *)param_1) {
    return gRecommendedSet;
  }
  if ((gSpoofInitStaticsOnce != 2) &&
     (cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gSpoofInitStaticsOnce), cVar1 != '\0'
     )) {
    (anonymous_namespace)::initializeStatics(param_1,param_2);
    DAT_00102554 = *(int *)param_1;
    icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gSpoofInitStaticsOnce);
    return gRecommendedSet;
  }
  if (0 < DAT_00102554) {
    *(int *)param_1 = DAT_00102554;
  }
  return gRecommendedSet;
}



undefined8 uspoof_getInclusionSet_76_godot(_anonymous_namespace_ *param_1,UErrorCode *param_2)

{
  char cVar1;
  
  if (0 < *(int *)param_1) {
    return gInclusionSet;
  }
  if ((gSpoofInitStaticsOnce != 2) &&
     (cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gSpoofInitStaticsOnce), cVar1 != '\0'
     )) {
    (anonymous_namespace)::initializeStatics(param_1,param_2);
    DAT_00102554 = *(int *)param_1;
    icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gSpoofInitStaticsOnce);
    return gInclusionSet;
  }
  if (0 < DAT_00102554) {
    *(int *)param_1 = DAT_00102554;
  }
  return gInclusionSet;
}



undefined8
uspoof_getInclusionUnicodeSet_76_godot(_anonymous_namespace_ *param_1,UErrorCode *param_2)

{
  char cVar1;
  
  if (0 < *(int *)param_1) {
    return gInclusionSet;
  }
  if ((gSpoofInitStaticsOnce != 2) &&
     (cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gSpoofInitStaticsOnce), cVar1 != '\0'
     )) {
    (anonymous_namespace)::initializeStatics(param_1,param_2);
    DAT_00102554 = *(int *)param_1;
    icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gSpoofInitStaticsOnce);
    return gInclusionSet;
  }
  if (0 < DAT_00102554) {
    *(int *)param_1 = DAT_00102554;
  }
  return gInclusionSet;
}



/* (anonymous namespace)::uspoof_cleanup() */

undefined8 (anonymous_namespace)::uspoof_cleanup(void)

{
  if (gInclusionSet != (UnicodeSet *)0x0) {
    icu_76_godot::UnicodeSet::~UnicodeSet(gInclusionSet);
  }
  gInclusionSet = (UnicodeSet *)0x0;
  if (gRecommendedSet != (UnicodeSet *)0x0) {
    icu_76_godot::UnicodeSet::~UnicodeSet(gRecommendedSet);
  }
  gRecommendedSet = (UnicodeSet *)0x0;
  gNfdNormalizer = 0;
  LOCK();
  gSpoofInitStaticsOnce = 0;
  UNLOCK();
  return 1;
}



void uspoof_setAllowedUnicodeSet_76_godot(USpoofChecker *param_1,long param_2,UErrorCode *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = icu_76_godot::SpoofImpl::validateThis(param_1,param_3);
  if (lVar1 != 0) {
    if ((*(byte *)(param_2 + 0x20) & 1) == 0) {
      lVar2 = icu_76_godot::UnicodeSet::clone();
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x20) & 1) == 0)) {
        icu_76_godot::UnicodeSet::freeze();
        if (*(UnicodeSet **)(lVar1 + 0x18) != (UnicodeSet *)0x0) {
          icu_76_godot::UnicodeSet::~UnicodeSet(*(UnicodeSet **)(lVar1 + 0x18));
        }
        *(uint *)(lVar1 + 0xc) = *(uint *)(lVar1 + 0xc) | 0x40;
        *(long *)(lVar1 + 0x18) = lVar2;
        return;
      }
      *(undefined4 *)param_3 = 7;
      return;
    }
    *(undefined4 *)param_3 = 1;
  }
  return;
}



void uspoof_setAllowedChars_76_godot(USpoofChecker *param_1,long param_2,UErrorCode *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = icu_76_godot::SpoofImpl::validateThis(param_1,param_3);
  if (lVar1 != 0) {
    if ((*(byte *)(param_2 + 0x20) & 1) == 0) {
      lVar2 = icu_76_godot::UnicodeSet::clone();
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x20) & 1) == 0)) {
        icu_76_godot::UnicodeSet::freeze();
        if (*(UnicodeSet **)(lVar1 + 0x18) != (UnicodeSet *)0x0) {
          icu_76_godot::UnicodeSet::~UnicodeSet(*(UnicodeSet **)(lVar1 + 0x18));
        }
        *(uint *)(lVar1 + 0xc) = *(uint *)(lVar1 + 0xc) | 0x40;
        *(long *)(lVar1 + 0x18) = lVar2;
        return;
      }
      *(undefined4 *)param_3 = 7;
      return;
    }
    *(undefined4 *)param_3 = 1;
  }
  return;
}



/* (anonymous namespace)::checkImpl(icu_76_godot::SpoofImpl const*, icu_76_godot::UnicodeString
   const&, icu_76_godot::CheckResult*, UErrorCode*) */

void (anonymous_namespace)::checkImpl
               (SpoofImpl *param_1,UnicodeString *param_2,CheckResult *param_3,UErrorCode *param_4)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long in_FS_OFFSET;
  uint local_15c;
  int local_150;
  uint local_14c;
  code *local_148;
  short local_140;
  int local_13c;
  UnicodeSet local_108 [200];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  icu_76_godot::CheckResult::clear();
  uVar3 = *(uint *)(param_1 + 0xc);
  local_14c = uVar3 & 0x10;
  if (local_14c != 0) {
    iVar6 = icu_76_godot::SpoofImpl::getRestrictionLevel
                      ((UnicodeString *)param_1,(UErrorCode *)param_2);
    uVar3 = *(uint *)(param_1 + 0xc);
    local_14c = (uint)(*(int *)(param_1 + 0x28) < iVar6) << 4;
    *(int *)(param_3 + 0xd8) = iVar6;
  }
  if ((uVar3 & 0x80) != 0) {
    icu_76_godot::UnicodeSet::UnicodeSet(local_108);
    icu_76_godot::SpoofImpl::getNumerics
              ((UnicodeString *)param_1,(UnicodeSet *)param_2,(UErrorCode *)local_108);
    iVar6 = icu_76_godot::UnicodeSet::size();
    uVar4 = local_14c | 0x80;
    if (iVar6 < 2) {
      uVar4 = local_14c;
    }
    icu_76_godot::UnicodeSet::operator=((UnicodeSet *)(param_3 + 0x10),local_108);
    icu_76_godot::UnicodeSet::~UnicodeSet(local_108);
    uVar3 = *(uint *)(param_1 + 0xc);
    local_14c = uVar4;
  }
  if ((uVar3 & 0x100) != 0) {
    iVar6 = icu_76_godot::SpoofImpl::findHiddenOverlay
                      ((UnicodeString *)param_1,(UErrorCode *)param_2);
    if (iVar6 != -1) {
      local_14c = local_14c | 0x100;
    }
    uVar3 = *(uint *)(param_1 + 0xc);
  }
  if ((uVar3 & 0x40) != 0) {
    if (*(short *)(param_2 + 8) < 0) {
      iVar6 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar6 = (int)(*(short *)(param_2 + 8) >> 5);
    }
    iVar5 = 0;
    do {
      if (iVar6 <= iVar5) {
        uVar3 = *(uint *)(param_1 + 0xc);
        goto LAB_00101b2e;
      }
      uVar3 = icu_76_godot::UnicodeString::char32At((int)param_2);
      iVar5 = iVar5 + 1 + (uint)(0xffff < uVar3);
      cVar2 = icu_76_godot::UnicodeSet::contains((int)*(undefined8 *)(param_1 + 0x18));
    } while (cVar2 != '\0');
    local_14c = local_14c | 0x40;
    uVar3 = *(uint *)(param_1 + 0xc);
  }
LAB_00101b2e:
  if ((uVar3 & 0x20) != 0) {
    local_148 = u_hasBinaryProperty_76_godot;
    local_140 = 2;
    (**(code **)(*gNfdNormalizer + 0x18))
              (gNfdNormalizer,param_2,(UnicodeString *)&local_148,param_4);
    if (local_140 < 0) {
      local_150 = local_13c;
    }
    else {
      local_150 = (int)(local_140 >> 5);
    }
    icu_76_godot::UnicodeSet::UnicodeSet(local_108);
    if (0 < local_150) {
      local_15c = 0;
      bVar1 = false;
      iVar6 = 0;
      do {
        while( true ) {
          uVar3 = icu_76_godot::UnicodeString::char32At((int)(UnicodeString *)&local_148);
          iVar6 = (0xffff < uVar3) + 1 + iVar6;
          cVar2 = u_charType_76_godot(uVar3);
          if (cVar2 == '\x06') break;
          if (bVar1) {
            icu_76_godot::UnicodeSet::clear();
          }
          local_15c = 0;
          bVar1 = false;
          uVar3 = local_15c;
LAB_00101bc4:
          local_15c = uVar3;
          if (local_150 <= iVar6) goto LAB_00101c36;
        }
        if (local_15c == 0) goto LAB_00101bc4;
        iVar5 = (int)local_108;
        if (bVar1) {
          cVar2 = icu_76_godot::UnicodeSet::contains(iVar5);
        }
        else {
          icu_76_godot::UnicodeSet::add(iVar5);
          cVar2 = icu_76_godot::UnicodeSet::contains(iVar5);
        }
        if (cVar2 != '\0') {
          local_14c = local_14c | 0x20;
          break;
        }
        bVar1 = true;
        icu_76_godot::UnicodeSet::add(iVar5);
      } while (iVar6 < local_150);
    }
LAB_00101c36:
    icu_76_godot::UnicodeSet::~UnicodeSet(local_108);
    icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_148);
  }
  *(uint *)(param_3 + 0xc) = local_14c;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    icu_76_godot::CheckResult::toCombinedBitmask((int)param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong uspoof_check2UnicodeString_76_godot
                (USpoofChecker *param_1,UnicodeString *param_2,USpoofCheckResult *param_3,
                UErrorCode *param_4)

{
  uint uVar1;
  SpoofImpl *pSVar2;
  CheckResult *pCVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  CheckResult aCStack_118 [232];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar2 = (SpoofImpl *)icu_76_godot::SpoofImpl::validateThis(param_1,param_4);
  if (pSVar2 == (SpoofImpl *)0x0) {
LAB_00101e68:
    uVar4 = 0;
  }
  else {
    if (param_3 != (USpoofCheckResult *)0x0) {
      pCVar3 = (CheckResult *)icu_76_godot::CheckResult::validateThis(param_3,param_4);
      if (pCVar3 != (CheckResult *)0x0) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar4 = (anonymous_namespace)::checkImpl(pSVar2,param_2,pCVar3,param_4);
          return uVar4;
        }
        goto LAB_00101eb8;
      }
      goto LAB_00101e68;
    }
    icu_76_godot::CheckResult::CheckResult(aCStack_118);
    uVar1 = (anonymous_namespace)::checkImpl(pSVar2,param_2,aCStack_118,param_4);
    uVar4 = (ulong)uVar1;
    icu_76_godot::CheckResult::~CheckResult(aCStack_118);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
LAB_00101eb8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
uspoof_check2_76_godot
          (USpoofChecker *param_1,undefined8 param_2,int param_3,undefined8 param_4,
          UErrorCode *param_5)

{
  undefined4 uVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  UnicodeString local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = icu_76_godot::SpoofImpl::validateThis(param_1,param_5);
  if (lVar2 != 0) {
    if (-2 < param_3) {
      local_80 = param_2;
      icu_76_godot::UnicodeString::UnicodeString(local_78,param_3 == -1,&local_80,param_3);
      uVar1 = uspoof_check2UnicodeString_76_godot(param_1,local_78,param_4,param_5);
      icu_76_godot::UnicodeString::~UnicodeString(local_78);
      goto LAB_00101f3c;
    }
    *(undefined4 *)param_5 = 1;
  }
  uVar1 = 0;
LAB_00101f3c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
uspoof_check2UTF8_76_godot
          (undefined8 param_1,char *param_2,ulong param_3,undefined8 param_4,int *param_5)

{
  undefined4 uVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  UnicodeString local_78 [72];
  long local_30;
  
  uVar1 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_5 < 1) {
    if ((int)param_3 < 0) {
      sVar2 = strlen(param_2);
      param_3 = sVar2 & 0xffffffff;
    }
    icu_76_godot::UnicodeString::fromUTF8(local_78,param_2,param_3 & 0xffffffff);
    uVar1 = uspoof_check2UnicodeString_76_godot(param_1,local_78,param_4,param_5);
    icu_76_godot::UnicodeString::~UnicodeString(local_78);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
uspoof_checkUnicodeString_76_godot
          (USpoofChecker *param_1,UnicodeString *param_2,undefined4 *param_3,UErrorCode *param_4)

{
  undefined4 uVar1;
  SpoofImpl *pSVar2;
  long in_FS_OFFSET;
  CheckResult aCStack_118 [232];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  pSVar2 = (SpoofImpl *)icu_76_godot::SpoofImpl::validateThis(param_1,param_4);
  if (pSVar2 == (SpoofImpl *)0x0) {
    uVar1 = 0;
  }
  else {
    icu_76_godot::CheckResult::CheckResult(aCStack_118);
    uVar1 = (anonymous_namespace)::checkImpl(pSVar2,param_2,aCStack_118,param_4);
    icu_76_godot::CheckResult::~CheckResult(aCStack_118);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
uspoof_checkUTF8_76_godot
          (USpoofChecker *param_1,char *param_2,ulong param_3,undefined4 *param_4,
          UErrorCode *param_5)

{
  undefined4 uVar1;
  SpoofImpl *pSVar2;
  size_t sVar3;
  long in_FS_OFFSET;
  UnicodeString local_158 [64];
  CheckResult local_118 [232];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  uVar1 = 0;
  if (*(int *)param_5 < 1) {
    if ((int)param_3 < 0) {
      sVar3 = strlen(param_2);
      param_3 = sVar3 & 0xffffffff;
    }
    icu_76_godot::UnicodeString::fromUTF8(local_158,param_2,param_3 & 0xffffffff);
    pSVar2 = (SpoofImpl *)icu_76_godot::SpoofImpl::validateThis(param_1,param_5);
    if (pSVar2 == (SpoofImpl *)0x0) {
      uVar1 = 0;
    }
    else {
      icu_76_godot::CheckResult::CheckResult(local_118);
      uVar1 = (anonymous_namespace)::checkImpl(pSVar2,local_158,local_118,param_5);
      icu_76_godot::CheckResult::~CheckResult(local_118);
    }
    icu_76_godot::UnicodeString::~UnicodeString(local_158);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
uspoof_check_76_godot
          (USpoofChecker *param_1,undefined8 param_2,int param_3,undefined4 *param_4,
          UErrorCode *param_5)

{
  undefined4 uVar1;
  long lVar2;
  SpoofImpl *pSVar3;
  long in_FS_OFFSET;
  undefined8 local_160;
  UnicodeString local_158 [64];
  CheckResult local_118 [232];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  lVar2 = icu_76_godot::SpoofImpl::validateThis(param_1,param_5);
  if (lVar2 != 0) {
    if (-2 < param_3) {
      local_160 = param_2;
      icu_76_godot::UnicodeString::UnicodeString(local_158,param_3 == -1,&local_160,param_3);
      pSVar3 = (SpoofImpl *)icu_76_godot::SpoofImpl::validateThis(param_1,param_5);
      if (pSVar3 == (SpoofImpl *)0x0) {
        uVar1 = 0;
      }
      else {
        icu_76_godot::CheckResult::CheckResult(local_118);
        uVar1 = (anonymous_namespace)::checkImpl(pSVar3,local_158,local_118,param_5);
        icu_76_godot::CheckResult::~CheckResult(local_118);
      }
      icu_76_godot::UnicodeString::~UnicodeString(local_158);
      goto LAB_0010226b;
    }
    *(undefined4 *)param_5 = 1;
  }
  uVar1 = 0;
LAB_0010226b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 uspoof_clone_76_godot(USpoofChecker *param_1,UErrorCode *param_2)

{
  SpoofImpl *pSVar1;
  SpoofImpl *this;
  undefined8 uVar2;
  UErrorCode *pUVar3;
  
  pUVar3 = param_2;
  pSVar1 = (SpoofImpl *)icu_76_godot::SpoofImpl::validateThis(param_1,param_2);
  if (pSVar1 != (SpoofImpl *)0x0) {
    this = (SpoofImpl *)icu_76_godot::UMemory::operator_new((UMemory *)0x30,(ulong)pUVar3);
    if (this != (SpoofImpl *)0x0) {
      icu_76_godot::SpoofImpl::SpoofImpl(this,pSVar1,param_2);
      if (*(int *)param_2 < 1) {
        uVar2 = icu_76_godot::SpoofImpl::asUSpoofChecker();
        return uVar2;
      }
      icu_76_godot::SpoofImpl::~SpoofImpl(this);
      uVar2 = icu_76_godot::SpoofImpl::asUSpoofChecker();
      return uVar2;
    }
    *(undefined4 *)param_2 = 7;
  }
  return 0;
}



undefined8 uspoof_open_76_godot(_anonymous_namespace_ *param_1,UErrorCode *param_2)

{
  char cVar1;
  SpoofImpl *this;
  undefined8 uVar2;
  
  if (0 < *(int *)param_1) {
    return 0;
  }
  if ((gSpoofInitStaticsOnce == 2) ||
     (cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gSpoofInitStaticsOnce), cVar1 == '\0'
     )) {
    if (0 < DAT_00102554) {
      *(int *)param_1 = DAT_00102554;
      return 0;
    }
  }
  else {
    (anonymous_namespace)::initializeStatics(param_1,param_2);
    DAT_00102554 = *(int *)param_1;
    icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gSpoofInitStaticsOnce);
  }
  if (*(int *)param_1 < 1) {
    this = (SpoofImpl *)icu_76_godot::UMemory::operator_new((UMemory *)0x30,(ulong)param_2);
    if (this != (SpoofImpl *)0x0) {
      icu_76_godot::SpoofImpl::SpoofImpl(this,(UErrorCode *)param_1);
      if (0 < *(int *)param_1) {
        icu_76_godot::SpoofImpl::~SpoofImpl(this);
        return 0;
      }
      uVar2 = icu_76_godot::SpoofImpl::asUSpoofChecker();
      return uVar2;
    }
    *(undefined4 *)param_1 = 7;
  }
  return 0;
}



undefined8
uspoof_openFromSerialized_76_godot
          (void *param_1,UErrorCode *param_2,undefined4 *param_3,_anonymous_namespace_ *param_4)

{
  char cVar1;
  undefined4 uVar2;
  SpoofData *this;
  SpoofImpl *this_00;
  undefined8 uVar3;
  UErrorCode *pUVar4;
  
  if (0 < *(int *)param_4) {
    return 0;
  }
  if (param_1 != (void *)0x0) {
    pUVar4 = param_2;
    if ((gSpoofInitStaticsOnce == 2) ||
       (cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gSpoofInitStaticsOnce),
       cVar1 == '\0')) {
      if (0 < DAT_00102554) {
        *(int *)param_4 = DAT_00102554;
        return 0;
      }
    }
    else {
      (anonymous_namespace)::initializeStatics(param_4,pUVar4);
      DAT_00102554 = *(int *)param_4;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gSpoofInitStaticsOnce);
    }
    if (*(int *)param_4 < 1) {
      this = (SpoofData *)icu_76_godot::UMemory::operator_new((UMemory *)0x38,(ulong)pUVar4);
      if (this == (SpoofData *)0x0) {
        *(undefined4 *)param_4 = 7;
      }
      else {
        icu_76_godot::SpoofData::SpoofData(this,param_1,(int)param_2,(UErrorCode *)param_4);
        if (*(int *)param_4 < 1) {
          this_00 = (SpoofImpl *)icu_76_godot::UMemory::operator_new((UMemory *)0x30,(ulong)param_1)
          ;
          if (this_00 != (SpoofImpl *)0x0) {
            icu_76_godot::SpoofImpl::SpoofImpl(this_00,this,(UErrorCode *)param_4);
            if (0 < *(int *)param_4) {
              icu_76_godot::SpoofImpl::~SpoofImpl(this_00);
              return 0;
            }
            if (param_3 != (undefined4 *)0x0) {
              uVar2 = icu_76_godot::SpoofData::size();
              *param_3 = uVar2;
            }
            uVar3 = icu_76_godot::SpoofImpl::asUSpoofChecker();
            return uVar3;
          }
          *(undefined4 *)param_4 = 7;
        }
        icu_76_godot::SpoofData::~SpoofData(this);
        icu_76_godot::UMemory::operator_delete((UMemory *)this,param_1);
      }
    }
    return 0;
  }
  *(undefined4 *)param_4 = 1;
  return 0;
}


