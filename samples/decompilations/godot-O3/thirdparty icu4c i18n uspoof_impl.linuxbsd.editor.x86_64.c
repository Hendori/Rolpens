
/* icu_76_godot::SpoofImpl::getDynamicClassID() const */

undefined1 * icu_76_godot::SpoofImpl::getDynamicClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::spoofDataIsAcceptable(void*, char const*, char const*, UDataInfo const*) */

undefined8
icu_76_godot::spoofDataIsAcceptable(void *param_1,char *param_2,char *param_3,UDataInfo *param_4)

{
  if ((((0x13 < *(ushort *)param_4) && (*(short *)(param_4 + 4) == 0)) &&
      (*(short *)(param_4 + 8) == 0x6643)) &&
     ((*(short *)(param_4 + 10) == 0x2075 && (param_4[0xc] == (UDataInfo)0x2)))) {
    if (param_1 != (void *)0x0) {
      *(undefined4 *)param_1 = *(undefined4 *)(param_4 + 0x10);
    }
    return 1;
  }
  return 0;
}



/* icu_76_godot::SpoofImpl::getAugmentedScriptSet(int, icu_76_godot::ScriptSet&, UErrorCode&) [clone
   .part.0] */

void icu_76_godot::SpoofImpl::getAugmentedScriptSet
               (int param_1,ScriptSet *param_2,UErrorCode *param_3)

{
  char cVar1;
  undefined4 in_register_0000003c;
  undefined8 uVar2;
  
  uVar2 = CONCAT44(in_register_0000003c,param_1);
  cVar1 = icu_76_godot::ScriptSet::test(uVar2,0x11,param_2);
  if (cVar1 != '\0') {
    icu_76_godot::ScriptSet::set(uVar2,0xac,param_2);
    icu_76_godot::ScriptSet::set(uVar2,0x69,param_2);
    icu_76_godot::ScriptSet::set(uVar2,0x77,param_2);
  }
  cVar1 = icu_76_godot::ScriptSet::test(uVar2,0x14,param_2);
  if (cVar1 != '\0') {
    icu_76_godot::ScriptSet::set(uVar2,0x69,param_2);
  }
  cVar1 = icu_76_godot::ScriptSet::test(uVar2,0x16,param_2);
  if (cVar1 != '\0') {
    icu_76_godot::ScriptSet::set(uVar2,0x69,param_2);
  }
  cVar1 = icu_76_godot::ScriptSet::test(uVar2,0x12,param_2);
  if (cVar1 != '\0') {
    icu_76_godot::ScriptSet::set(uVar2,0x77,param_2);
  }
  cVar1 = icu_76_godot::ScriptSet::test(uVar2,5,param_2);
  if (cVar1 != '\0') {
    icu_76_godot::ScriptSet::set(uVar2,0xac,param_2);
  }
  cVar1 = icu_76_godot::ScriptSet::test(uVar2,0,param_2);
  if (cVar1 == '\0') {
    cVar1 = icu_76_godot::ScriptSet::test(uVar2,1,param_2);
    if (cVar1 == '\0') {
      return;
    }
  }
  icu_76_godot::ScriptSet::setAll();
  return;
}



/* icu_76_godot::SpoofImpl::construct(UErrorCode&) [clone .part.0] [clone .constprop.0] */

void __thiscall icu_76_godot::SpoofImpl::construct(SpoofImpl *this,UErrorCode *param_1)

{
  UnicodeSet *this_00;
  long lVar1;
  
  this_00 = (UnicodeSet *)icu_76_godot::UMemory::operator_new((UMemory *)0xc8,(ulong)param_1);
  if (this_00 != (UnicodeSet *)0x0) {
    icu_76_godot::UnicodeSet::UnicodeSet(this_00,0,0x10ffff);
  }
  *(UnicodeSet **)(this + 0x18) = this_00;
  lVar1 = uprv_strdup_76_godot(&_LC0);
  *(long *)(this + 0x20) = lVar1;
  if ((*(long *)(this + 0x18) != 0) && (lVar1 != 0)) {
    icu_76_godot::UnicodeSet::freeze();
    return;
  }
  *(undefined4 *)param_1 = 7;
  return;
}



/* icu_76_godot::uspoof_cleanupDefaultData() */

undefined8 icu_76_godot::uspoof_cleanupDefaultData(void)

{
  UMemory *pUVar1;
  UMemory *this;
  void *in_RSI;
  
  this = gDefaultSpoofData;
  if (gDefaultSpoofData != (UMemory *)0x0) {
    LOCK();
    pUVar1 = gDefaultSpoofData + 0x1c;
    *(int *)pUVar1 = *(int *)pUVar1 + -1;
    UNLOCK();
    if (*(int *)pUVar1 == 0) {
      if (this[8] != (UMemory)0x0) {
        uprv_free_76_godot(*(undefined8 *)this);
      }
      *(undefined8 *)this = 0;
      if (*(long *)(this + 0x10) != 0) {
        udata_close_76_godot();
      }
      icu_76_godot::UMemory::operator_delete(this,in_RSI);
    }
    gDefaultSpoofData = (UMemory *)0x0;
    LOCK();
    gSpoofInitDefaultOnce = 0;
    UNLOCK();
  }
  return 1;
}



/* icu_76_godot::SpoofImpl::getStaticClassID() */

undefined1 * icu_76_godot::SpoofImpl::getStaticClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::SpoofImpl::SpoofImpl(icu_76_godot::SpoofData*, UErrorCode&) */

void __thiscall
icu_76_godot::SpoofImpl::SpoofImpl(SpoofImpl *this,SpoofData *param_1,UErrorCode *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined ***)this = &PTR__SpoofImpl_00102018;
  uVar2 = _LC1;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = uVar2;
  iVar1 = *(int *)param_2;
  *(undefined4 *)(this + 0x28) = 0x30000000;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  if (iVar1 < 1) {
    construct(this,param_2);
  }
  *(SpoofData **)(this + 0x10) = param_1;
  return;
}



/* icu_76_godot::SpoofImpl::construct(UErrorCode&) */

void __thiscall icu_76_godot::SpoofImpl::construct(SpoofImpl *this,UErrorCode *param_1)

{
  int iVar1;
  
  *(undefined4 *)(this + 0xc) = 0xffff;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  iVar1 = *(int *)param_1;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x30000000;
  if (0 < iVar1) {
    return;
  }
  construct(this,param_1);
  return;
}



/* icu_76_godot::SpoofImpl::asUSpoofChecker() */

SpoofImpl * __thiscall icu_76_godot::SpoofImpl::asUSpoofChecker(SpoofImpl *this)

{
  return this;
}



/* icu_76_godot::SpoofImpl::validateThis(USpoofChecker const*, UErrorCode&) */

USpoofChecker * icu_76_godot::SpoofImpl::validateThis(USpoofChecker *param_1,UErrorCode *param_2)

{
  int *piVar1;
  
  if (*(int *)param_2 < 1) {
    if (param_1 == (USpoofChecker *)0x0) {
      *(undefined4 *)param_2 = 1;
    }
    else {
      if ((*(int *)(param_1 + 8) == 0x3845fdef) &&
         ((*(undefined8 **)(param_1 + 0x10) == (undefined8 *)0x0 ||
          (((piVar1 = (int *)**(undefined8 **)(param_1 + 0x10), piVar1 != (int *)0x0 &&
            (*piVar1 == 0x3845fdef)) && (piVar1[1] == 2)))))) {
        return param_1;
      }
      *(undefined4 *)param_2 = 3;
    }
  }
  return (USpoofChecker *)0x0;
}



/* icu_76_godot::SpoofImpl::validateThis(USpoofChecker*, UErrorCode&) */

USpoofChecker * icu_76_godot::SpoofImpl::validateThis(USpoofChecker *param_1,UErrorCode *param_2)

{
  int *piVar1;
  
  if (*(int *)param_2 < 1) {
    if (param_1 == (USpoofChecker *)0x0) {
      *(undefined4 *)param_2 = 1;
    }
    else {
      if ((*(int *)(param_1 + 8) == 0x3845fdef) &&
         ((*(undefined8 **)(param_1 + 0x10) == (undefined8 *)0x0 ||
          (((piVar1 = (int *)**(undefined8 **)(param_1 + 0x10), piVar1 != (int *)0x0 &&
            (*piVar1 == 0x3845fdef)) && (piVar1[1] == 2)))))) {
        return param_1;
      }
      *(undefined4 *)param_2 = 3;
    }
  }
  return (USpoofChecker *)0x0;
}



/* icu_76_godot::SpoofImpl::getAllowedLocales(UErrorCode&) */

undefined8 icu_76_godot::SpoofImpl::getAllowedLocales(UErrorCode *param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* icu_76_godot::SpoofImpl::getAugmentedScriptSet(int, icu_76_godot::ScriptSet&, UErrorCode&) */

void icu_76_godot::SpoofImpl::getAugmentedScriptSet
               (int param_1,ScriptSet *param_2,UErrorCode *param_3)

{
  UErrorCode *extraout_RDX;
  
  icu_76_godot::ScriptSet::resetAll();
  icu_76_godot::ScriptSet::setScriptExtensions((int)param_2,(UErrorCode *)(ulong)(uint)param_1);
  if (0 < *(int *)param_3) {
    return;
  }
  getAugmentedScriptSet((int)param_2,(ScriptSet *)param_3,extraout_RDX);
  return;
}



/* icu_76_godot::SpoofImpl::getResolvedScriptSetWithout(icu_76_godot::UnicodeString const&,
   UScriptCode, icu_76_godot::ScriptSet&, UErrorCode&) const */

void __thiscall
icu_76_godot::SpoofImpl::getResolvedScriptSetWithout
          (undefined8 param_1_00,long param_1,int param_3,ScriptSet *param_4,ScriptSet *param_5)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long in_FS_OFFSET;
  ScriptSet local_68 [40];
  long local_40;
  
  iVar5 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  icu_76_godot::ScriptSet::setAll();
  icu_76_godot::ScriptSet::ScriptSet(local_68);
  sVar2 = *(short *)(param_1 + 8);
  if (sVar2 < 0) goto LAB_00100588;
LAB_001004d0:
  iVar3 = (int)(sVar2 >> 5);
  do {
    if (iVar3 <= iVar5) {
LAB_00100503:
      icu_76_godot::ScriptSet::~ScriptSet(local_68);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    uVar4 = icu_76_godot::UnicodeString::char32At((int)param_1);
    icu_76_godot::ScriptSet::resetAll();
    iVar3 = (int)local_68;
    icu_76_godot::ScriptSet::setScriptExtensions(iVar3,(UErrorCode *)(ulong)uVar4);
    if ((0 < (int)*(uint *)param_5) ||
       (getAugmentedScriptSet(iVar3,param_5,(UErrorCode *)(ulong)*(uint *)param_5),
       0 < *(int *)param_5)) goto LAB_00100503;
    if ((param_3 == 0xd0) ||
       (cVar1 = icu_76_godot::ScriptSet::test(local_68,param_3,param_5), cVar1 == '\0')) {
      icu_76_godot::ScriptSet::intersect(param_4);
    }
    iVar5 = iVar5 + 1 + (uint)(0xffff < uVar4);
    sVar2 = *(short *)(param_1 + 8);
    if (-1 < sVar2) goto LAB_001004d0;
LAB_00100588:
    iVar3 = *(int *)(param_1 + 0xc);
  } while( true );
}



/* icu_76_godot::SpoofImpl::getResolvedScriptSet(icu_76_godot::UnicodeString const&,
   icu_76_godot::ScriptSet&, UErrorCode&) const */

void __thiscall
icu_76_godot::SpoofImpl::getResolvedScriptSet
          (SpoofImpl *this,UnicodeString *param_1,ScriptSet *param_2,UErrorCode *param_3)

{
  getResolvedScriptSetWithout(this,param_1,0xd0,param_2,param_3);
  return;
}



/* icu_76_godot::SpoofImpl::getRestrictionLevel(icu_76_godot::UnicodeString const&, UErrorCode&)
   const */

undefined8 __thiscall
icu_76_godot::SpoofImpl::getRestrictionLevel
          (SpoofImpl *this,UnicodeString *param_1,UErrorCode *param_2)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  UnicodeString *pUVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  ScriptSet aSStack_88 [32];
  ScriptSet local_68 [40];
  long local_40;
  
  uVar6 = 0x60000000;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = icu_76_godot::UnicodeSet::containsAll(*(UnicodeString **)(this + 0x18));
  if (cVar2 == '\0') goto LAB_00100694;
  uVar1 = *(ushort *)(param_1 + 8);
  if ((short)uVar1 < 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
  }
  else {
    uVar3 = (uint)((short)uVar1 >> 5);
  }
  if ((int)uVar3 < 1) {
LAB_001006d0:
    uVar6 = 0x10000000;
    goto LAB_00100694;
  }
  lVar4 = 0;
  do {
    pUVar5 = param_1 + 10;
    if ((uVar1 & 2) == 0) {
      pUVar5 = *(UnicodeString **)(param_1 + 0x18);
    }
    if (0x7f < *(ushort *)(pUVar5 + lVar4)) break;
    if (lVar4 == (ulong)(uVar3 - 1) * 2) goto LAB_001006d0;
    lVar4 = lVar4 + 2;
  } while (lVar4 != (ulong)uVar3 * 2);
  uVar6 = 0x60000000;
  icu_76_godot::ScriptSet::ScriptSet(aSStack_88);
  getResolvedScriptSetWithout(this,param_1,0xd0,aSStack_88,param_2);
  if (*(int *)param_2 < 1) {
    uVar6 = 0x20000000;
    cVar2 = icu_76_godot::ScriptSet::isEmpty();
    if (cVar2 != '\0') {
      uVar6 = 0x60000000;
      icu_76_godot::ScriptSet::ScriptSet(local_68);
      getResolvedScriptSetWithout(this,param_1,0x19,local_68,param_2);
      if (*(int *)param_2 < 1) {
        cVar2 = icu_76_godot::ScriptSet::test(local_68,0xac,param_2);
        if (cVar2 == '\0') {
          cVar2 = icu_76_godot::ScriptSet::test(local_68,0x69,param_2);
          if (cVar2 == '\0') {
            cVar2 = icu_76_godot::ScriptSet::test(local_68,0x77,param_2);
            if (cVar2 == '\0') {
              cVar2 = icu_76_godot::ScriptSet::isEmpty();
              if (cVar2 == '\0') {
                cVar2 = icu_76_godot::ScriptSet::test(local_68,8,param_2);
                if (cVar2 == '\0') {
                  cVar2 = icu_76_godot::ScriptSet::test(local_68,0xe,param_2);
                  if (cVar2 == '\0') {
                    cVar2 = icu_76_godot::ScriptSet::test(local_68,6,param_2);
                    if (cVar2 == '\0') {
                      uVar6 = 0x40000000;
                      goto LAB_00100723;
                    }
                  }
                }
              }
              uVar6 = 0x50000000;
              goto LAB_00100723;
            }
          }
        }
        uVar6 = 0x30000000;
      }
LAB_00100723:
      icu_76_godot::ScriptSet::~ScriptSet(local_68);
    }
  }
  icu_76_godot::ScriptSet::~ScriptSet(aSStack_88);
LAB_00100694:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::SpoofImpl::ScanHex(char16_t const*, int, int, UErrorCode&) */

uint icu_76_godot::SpoofImpl::ScanHex(wchar16 *param_1,int param_2,int param_3,UErrorCode *param_4)

{
  wchar16 wVar1;
  uint uVar2;
  int iVar3;
  wchar16 *pwVar4;
  
  if ((*(int *)param_4 < 1) && (param_2 < param_3)) {
    pwVar4 = param_1 + param_2;
    uVar2 = 0;
    do {
      wVar1 = *pwVar4;
      iVar3 = (ushort)wVar1 - 0x30;
      if (9 < (int)((ushort)wVar1 - 0x30)) {
        iVar3 = (ushort)wVar1 - 0x37;
        if (0xf < (int)((ushort)wVar1 - 0x37)) {
          iVar3 = (ushort)wVar1 - 0x57;
        }
      }
      pwVar4 = pwVar4 + 1;
      uVar2 = uVar2 * 0x10 + iVar3;
    } while (pwVar4 != param_1 + (ulong)(uint)(param_3 - param_2) + (long)param_2);
    if (uVar2 < 0x110000) {
      return uVar2;
    }
    *(undefined4 *)param_4 = 9;
  }
  return 0;
}



/* icu_76_godot::CheckResult::asUSpoofCheckResult() */

CheckResult * __thiscall icu_76_godot::CheckResult::asUSpoofCheckResult(CheckResult *this)

{
  return this;
}



/* icu_76_godot::CheckResult::validateThis(USpoofCheckResult const*, UErrorCode&) */

USpoofCheckResult *
icu_76_godot::CheckResult::validateThis(USpoofCheckResult *param_1,UErrorCode *param_2)

{
  if (*(int *)param_2 < 1) {
    if (param_1 == (USpoofCheckResult *)0x0) {
      *(undefined4 *)param_2 = 1;
    }
    else {
      if (*(int *)(param_1 + 8) == 0x2734ecde) {
        return param_1;
      }
      *(undefined4 *)param_2 = 3;
    }
  }
  return (USpoofCheckResult *)0x0;
}



/* icu_76_godot::CheckResult::validateThis(USpoofCheckResult*, UErrorCode&) */

USpoofCheckResult *
icu_76_godot::CheckResult::validateThis(USpoofCheckResult *param_1,UErrorCode *param_2)

{
  if (*(int *)param_2 < 1) {
    if (param_1 == (USpoofCheckResult *)0x0) {
      *(undefined4 *)param_2 = 1;
    }
    else {
      if (*(int *)(param_1 + 8) == 0x2734ecde) {
        return param_1;
      }
      *(undefined4 *)param_2 = 3;
    }
  }
  return (USpoofCheckResult *)0x0;
}



/* icu_76_godot::CheckResult::toCombinedBitmask(int) */

uint __thiscall icu_76_godot::CheckResult::toCombinedBitmask(CheckResult *this,int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xc);
  if ((param_1 & 0x40000000U) != 0) {
    if (*(uint *)(this + 0xd8) != 0xffffffff) {
      uVar1 = uVar1 | *(uint *)(this + 0xd8);
    }
  }
  return uVar1;
}



/* icu_76_godot::SpoofData::validateDataVersion(UErrorCode&) const */

undefined8 __thiscall
icu_76_godot::SpoofData::validateDataVersion(SpoofData *this,UErrorCode *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  if ((((0 < *(int *)param_1) || (piVar1 = *(int **)this, piVar1 == (int *)0x0)) ||
      (*piVar1 != 0x3845fdef)) || (uVar2 = 1, piVar1[1] != 2)) {
    *(undefined4 *)param_1 = 3;
    uVar2 = 0;
  }
  return uVar2;
}



/* icu_76_godot::SpoofData::getDefault(UErrorCode&) */

UMemory * icu_76_godot::SpoofData::getDefault(UErrorCode *param_1)

{
  char cVar1;
  undefined8 uVar2;
  UMemory *this;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  
  if (0 < *(int *)param_1) {
    return (UMemory *)0x0;
  }
  if ((gSpoofInitDefaultOnce == 2) ||
     (cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gSpoofInitDefaultOnce), cVar1 == '\0'
     )) {
    if (0 < DAT_00101d7c) {
      *(int *)param_1 = DAT_00101d7c;
      return (UMemory *)0x0;
    }
    goto LAB_001009c4;
  }
  puVar5 = &_LC4;
  uVar2 = udata_openChoice_76_godot(0,&_LC4,"confusables",spoofDataIsAcceptable,0,param_1);
  iVar4 = *(int *)param_1;
  if (iVar4 < 1) {
    this = (UMemory *)icu_76_godot::UMemory::operator_new((UMemory *)0x38,(ulong)puVar5);
    if (this == (UMemory *)0x0) {
      gDefaultSpoofData = (UMemory *)0x0;
      if (*(int *)param_1 < 1) {
        *(undefined4 *)param_1 = 7;
        iVar4 = 7;
        goto LAB_001009b6;
      }
    }
    else {
      *(undefined8 *)this = 0;
      this[8] = (UMemory)0x0;
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined4 *)(this + 0x18) = 0;
      LOCK();
      *(undefined4 *)(this + 0x1c) = 1;
      UNLOCK();
      *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
      iVar4 = *(int *)param_1;
      *(undefined8 *)(this + 0x30) = 0;
      if (iVar4 < 1) {
        *(undefined8 *)(this + 0x10) = uVar2;
        piVar3 = (int *)udata_getMemory_76_godot(uVar2);
        iVar4 = *(int *)param_1;
        *(int **)this = piVar3;
        if ((((iVar4 < 1) && (piVar3 != (int *)0x0)) && (*piVar3 == 0x3845fdef)) && (piVar3[1] == 2)
           ) {
          *(undefined8 *)(this + 0x30) = 0;
          *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
          if (piVar3[3] != 0) {
            *(long *)(this + 0x20) = (long)piVar3[3] + (long)piVar3;
          }
          if (piVar3[5] != 0) {
            *(long *)(this + 0x28) = (long)piVar3[5] + (long)piVar3;
          }
          if (piVar3[7] != 0) {
            *(long *)(this + 0x30) = (long)piVar3 + (long)piVar3[7];
          }
          gDefaultSpoofData = this;
          ucln_i18n_registerCleanup_76_godot(4,uspoof_cleanupDefaultData);
          iVar4 = *(int *)param_1;
          goto LAB_001009b6;
        }
        *(undefined4 *)param_1 = 3;
        *(undefined8 *)(this + 0x30) = 0;
        *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
      }
      gDefaultSpoofData = this;
      if (this[8] != (UMemory)0x0) {
        uprv_free_76_godot(*(undefined8 *)this);
      }
      *(undefined8 *)this = 0;
      if (*(long *)(this + 0x10) != 0) {
        udata_close_76_godot();
      }
      icu_76_godot::UMemory::operator_delete(this,puVar5);
    }
    gDefaultSpoofData = (UMemory *)0x0;
    iVar4 = *(int *)param_1;
  }
LAB_001009b6:
  DAT_00101d7c = iVar4;
  icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gSpoofInitDefaultOnce);
LAB_001009c4:
  if (0 < *(int *)param_1) {
    return (UMemory *)0x0;
  }
  LOCK();
  *(int *)(gDefaultSpoofData + 0x1c) = *(int *)(gDefaultSpoofData + 0x1c) + 1;
  UNLOCK();
  return gDefaultSpoofData;
}



/* icu_76_godot::SpoofImpl::SpoofImpl(UErrorCode&) */

void __thiscall icu_76_godot::SpoofImpl::SpoofImpl(SpoofImpl *this,UErrorCode *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined ***)this = &PTR__SpoofImpl_00102018;
  uVar2 = _LC1;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = uVar2;
  iVar1 = *(int *)param_1;
  *(undefined4 *)(this + 0x28) = 0x30000000;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  if (iVar1 < 1) {
    construct(this,param_1);
  }
  uVar2 = SpoofData::getDefault(param_1);
  *(undefined8 *)(this + 0x10) = uVar2;
  return;
}



/* icu_76_godot::SpoofImpl::SpoofImpl() */

void __thiscall icu_76_godot::SpoofImpl::SpoofImpl(SpoofImpl *this)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(this + 0x28) = 0x30000000;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  local_24 = 0;
  *(undefined ***)this = &PTR__SpoofImpl_00102018;
  *(undefined8 *)(this + 8) = _LC1;
  construct(this,(UErrorCode *)&local_24);
  uVar1 = SpoofData::getDefault((UErrorCode *)&local_24);
  *(undefined8 *)(this + 0x10) = uVar1;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::SpoofData::SpoofData(UDataMemory*, UErrorCode&) */

int * __thiscall
icu_76_godot::SpoofData::SpoofData(SpoofData *this,UDataMemory *param_1,UErrorCode *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  *(undefined8 *)this = 0;
  this[8] = (SpoofData)0x0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  LOCK();
  uVar1 = *(uint *)(this + 0x1c);
  *(uint *)(this + 0x1c) = 1;
  UNLOCK();
  iVar2 = *(int *)param_2;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  if (0 < iVar2) {
    return (int *)(ulong)uVar1;
  }
  *(UDataMemory **)(this + 0x10) = param_1;
  piVar3 = (int *)udata_getMemory_76_godot(param_1);
  iVar2 = *(int *)param_2;
  *(int **)this = piVar3;
  if ((((iVar2 < 1) && (piVar3 != (int *)0x0)) && (*piVar3 == 0x3845fdef)) && (piVar3[1] == 2)) {
    *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
    iVar2 = piVar3[3];
    *(undefined8 *)(this + 0x30) = 0;
    if (iVar2 != 0) {
      *(long *)(this + 0x20) = (long)iVar2 + (long)piVar3;
    }
    if (piVar3[5] != 0) {
      *(long *)(this + 0x28) = (long)piVar3[5] + (long)piVar3;
    }
    if (piVar3[7] != 0) {
      piVar3 = (int *)((long)piVar3 + (long)piVar3[7]);
      *(int **)(this + 0x30) = piVar3;
      return piVar3;
    }
  }
  else {
    *(undefined4 *)param_2 = 3;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  }
  return piVar3;
}



/* icu_76_godot::SpoofData::SpoofData(void const*, int, UErrorCode&) */

void __thiscall
icu_76_godot::SpoofData::SpoofData(SpoofData *this,void *param_1,int param_2,UErrorCode *param_3)

{
  int iVar1;
  
  *(undefined8 *)this = 0;
  this[8] = (SpoofData)0x0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  LOCK();
  *(undefined4 *)(this + 0x1c) = 1;
  UNLOCK();
  iVar1 = *(int *)param_3;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  if (0 < iVar1) {
    return;
  }
  if (0x5f < (uint)param_2) {
    if (param_1 == (void *)0x0) {
      *(undefined4 *)param_3 = 1;
      return;
    }
    *(void **)this = param_1;
    if (*(int *)((long)param_1 + 8) <= param_2) {
                    /* WARNING: Load size is inaccurate */
      if ((*param_1 != 0x3845fdef) || (*(int *)((long)param_1 + 4) != 2)) {
        *(undefined4 *)param_3 = 3;
        *(undefined8 *)(this + 0x30) = 0;
        *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
        return;
      }
      if (*(int *)((long)param_1 + 0xc) != 0) {
        *(long *)(this + 0x20) = (long)*(int *)((long)param_1 + 0xc) + (long)param_1;
      }
      if (*(int *)((long)param_1 + 0x14) != 0) {
        *(long *)(this + 0x28) = (long)*(int *)((long)param_1 + 0x14) + (long)param_1;
      }
      if (*(int *)((long)param_1 + 0x1c) == 0) {
        return;
      }
      *(long *)(this + 0x30) = (long)param_1 + (long)*(int *)((long)param_1 + 0x1c);
      return;
    }
  }
  *(undefined4 *)param_3 = 3;
  return;
}



/* icu_76_godot::SpoofData::SpoofData(UErrorCode&) */

void __thiscall icu_76_godot::SpoofData::SpoofData(SpoofData *this,UErrorCode *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  *(undefined8 *)this = 0;
  this[8] = (SpoofData)0x0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  LOCK();
  *(undefined4 *)(this + 0x1c) = 1;
  UNLOCK();
  iVar1 = *(int *)param_1;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  if (0 < iVar1) {
    return;
  }
  this[8] = (SpoofData)0x1;
  puVar2 = (undefined4 *)uprv_malloc_76_godot(0x60);
  *(undefined4 *)(this + 0x18) = 0x60;
  *(undefined4 **)this = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)param_1 = 7;
  }
  else {
    *(undefined8 *)((long)puVar2 + 5) = 0;
    puVar4 = (undefined8 *)((long)puVar2 + 0xdU & 0xfffffffffffffff8);
    *(undefined8 *)(puVar2 + 0x16) = 0;
    uVar3 = (ulong)(((int)puVar2 - (int)puVar4) + 0x60U >> 3);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
    }
    *puVar2 = 0x3845fdef;
    *(undefined1 *)(puVar2 + 1) = 2;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  }
  return;
}



/* icu_76_godot::SpoofData::reset() */

undefined4 __thiscall icu_76_godot::SpoofData::reset(SpoofData *this)

{
  undefined4 uVar1;
  
  *(undefined8 *)this = 0;
  this[8] = (SpoofData)0x0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  LOCK();
  uVar1 = *(undefined4 *)(this + 0x1c);
  *(undefined4 *)(this + 0x1c) = 1;
  UNLOCK();
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  return uVar1;
}



/* icu_76_godot::SpoofData::initPtrs(UErrorCode&) */

void __thiscall icu_76_godot::SpoofData::initPtrs(SpoofData *this,UErrorCode *param_1)

{
  long lVar1;
  
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  if (*(int *)param_1 < 1) {
    lVar1 = *(long *)this;
    if (*(int *)(lVar1 + 0xc) != 0) {
      *(long *)(this + 0x20) = *(int *)(lVar1 + 0xc) + lVar1;
    }
    if (*(int *)(lVar1 + 0x14) != 0) {
      *(long *)(this + 0x28) = *(int *)(lVar1 + 0x14) + lVar1;
    }
    if (*(int *)(lVar1 + 0x1c) != 0) {
      *(long *)(this + 0x30) = lVar1 + *(int *)(lVar1 + 0x1c);
    }
  }
  return;
}



/* icu_76_godot::SpoofData::~SpoofData() */

void __thiscall icu_76_godot::SpoofData::~SpoofData(SpoofData *this)

{
  if (this[8] != (SpoofData)0x0) {
    uprv_free_76_godot(*(undefined8 *)this);
  }
  *(undefined8 *)this = 0;
  if (*(long *)(this + 0x10) != 0) {
    udata_close_76_godot();
    return;
  }
  return;
}



/* icu_76_godot::SpoofData::removeReference() */

void icu_76_godot::SpoofData::removeReference(void)

{
  UMemory *pUVar1;
  void *in_RSI;
  UMemory *in_RDI;
  
  LOCK();
  pUVar1 = in_RDI + 0x1c;
  *(int *)pUVar1 = *(int *)pUVar1 + -1;
  UNLOCK();
  if (*(int *)pUVar1 != 0) {
    return;
  }
  if (in_RDI[8] != (UMemory)0x0) {
    uprv_free_76_godot(*(undefined8 *)in_RDI);
  }
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RDI + 0x10) != 0) {
    udata_close_76_godot();
  }
  icu_76_godot::UMemory::operator_delete(in_RDI,in_RSI);
  return;
}



/* icu_76_godot::SpoofData::addReference() */

SpoofData * __thiscall icu_76_godot::SpoofData::addReference(SpoofData *this)

{
  LOCK();
  *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
  UNLOCK();
  return this;
}



/* icu_76_godot::SpoofData::reserveSpace(int, UErrorCode&) */

long __thiscall
icu_76_godot::SpoofData::reserveSpace(SpoofData *this,int param_1,UErrorCode *param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  if (0 < *(int *)param_2) {
    return 0;
  }
  if (this[8] != (SpoofData)0x0) {
    uVar5 = (ulong)*(uint *)(this + 0x18);
    uVar3 = param_1 + 0xfU & 0xfffffff0;
    uVar4 = uVar3 + *(uint *)(this + 0x18);
    uVar2 = (ulong)uVar4;
    *(uint *)(this + 0x18) = uVar4;
    lVar1 = uprv_realloc_76_godot(*(undefined8 *)this,uVar2);
    if (uVar2 < uVar5) {
      uVar2 = uVar5;
    }
    *(long *)this = lVar1;
    *(undefined4 *)(lVar1 + 8) = *(undefined4 *)(this + 0x18);
    __memset_chk(lVar1 + uVar5,0,(long)(int)uVar3,uVar2 - uVar5);
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
    lVar1 = *(long *)this;
    if (*(int *)param_2 < 1) {
      if (*(int *)(lVar1 + 0xc) != 0) {
        *(long *)(this + 0x20) = *(int *)(lVar1 + 0xc) + lVar1;
      }
      if (*(int *)(lVar1 + 0x14) != 0) {
        *(long *)(this + 0x28) = *(int *)(lVar1 + 0x14) + lVar1;
      }
      if (*(int *)(lVar1 + 0x1c) != 0) {
        *(long *)(this + 0x30) = *(int *)(lVar1 + 0x1c) + lVar1;
      }
    }
    return lVar1 + uVar5;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* icu_76_godot::SpoofData::serialize(void*, int, UErrorCode&) const */

int __thiscall
icu_76_godot::SpoofData::serialize(SpoofData *this,void *param_1,int param_2,UErrorCode *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((long)*(void **)this + 8);
  if (param_2 < iVar1) {
    *(undefined4 *)param_3 = 0xf;
    return iVar1;
  }
  memcpy(param_1,*(void **)this,(long)iVar1);
  return iVar1;
}



/* icu_76_godot::SpoofData::size() const */

undefined4 __thiscall icu_76_godot::SpoofData::size(SpoofData *this)

{
  return *(undefined4 *)(*(long *)this + 8);
}



/* icu_76_godot::SpoofData::length() const */

undefined4 __thiscall icu_76_godot::SpoofData::length(SpoofData *this)

{
  return *(undefined4 *)(*(long *)this + 0x10);
}



/* icu_76_godot::SpoofData::codePointAt(int) const */

uint __thiscall icu_76_godot::SpoofData::codePointAt(SpoofData *this,int param_1)

{
  return *(uint *)(*(long *)(this + 0x20) + (long)param_1 * 4) & 0xffffff;
}



/* icu_76_godot::SpoofData::appendValueTo(int, icu_76_godot::UnicodeString&) const */

int __thiscall
icu_76_godot::SpoofData::appendValueTo(SpoofData *this,int param_1,UnicodeString *param_2)

{
  byte bVar1;
  ushort uVar2;
  long in_FS_OFFSET;
  ushort local_22;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  bVar1 = *(byte *)(*(long *)(this + 0x20) + 3 + (long)param_1 * 4);
  uVar2 = *(ushort *)(*(long *)(this + 0x28) + (long)param_1 * 2);
  if (bVar1 == 0) {
    local_22 = uVar2;
    icu_76_godot::UnicodeString::doAppend((wchar16 *)param_2,(int)&local_22,0);
  }
  else {
    icu_76_godot::UnicodeString::doAppend
              ((wchar16 *)param_2,(int)*(undefined8 *)(this + 0x30) + (uint)uVar2 * 2,0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1 + 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::SpoofData::confusableLookup(int, icu_76_godot::UnicodeString&) const */

undefined8 __thiscall
icu_76_godot::SpoofData::confusableLookup(SpoofData *this,int param_1,UnicodeString *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *(int *)(*(long *)this + 0x10);
  iVar4 = 0;
  do {
    while( true ) {
      iVar1 = (iVar4 + iVar6) / 2;
      uVar5 = *(uint *)(*(long *)(this + 0x20) + (long)iVar1 * 4) & 0xffffff;
      if ((int)uVar5 <= param_1) break;
      iVar2 = iVar1 - iVar4;
      iVar6 = iVar1;
      iVar1 = iVar4;
      if (iVar2 < 2) goto LAB_00101218;
    }
    if (param_1 <= (int)uVar5) goto LAB_00101243;
    iVar4 = iVar1;
  } while (1 < iVar6 - iVar1);
LAB_00101218:
  if (param_1 != (*(uint *)(*(long *)(this + 0x20) + (long)iVar1 * 4) & 0xffffff)) {
    icu_76_godot::UnicodeString::append((int)param_2);
    return 1;
  }
LAB_00101243:
  uVar3 = appendValueTo(this,iVar1,param_2);
  return uVar3;
}



/* icu_76_godot::SpoofImpl::isIllegalCombiningDotLeadCharacter(int) const */

ulong __thiscall
icu_76_godot::SpoofImpl::isIllegalCombiningDotLeadCharacter(SpoofImpl *this,int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 unaff_RBP;
  undefined7 uVar5;
  ulong uVar4;
  long in_FS_OFFSET;
  code *local_68;
  short local_60;
  int local_5c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((1 < param_1 - 0x69U) && (param_1 != 0x131)) {
    uVar5 = (undefined7)((ulong)unaff_RBP >> 8);
    uVar4 = CONCAT71(uVar5,param_1 == 0x237 || param_1 == 0x6c);
    if ((param_1 != 0x237 && param_1 != 0x6c) &&
       (cVar2 = u_hasBinaryProperty_76_godot(param_1,0x1b), cVar2 == '\0')) {
      local_68 = icu_76_godot::UnicodeString::~UnicodeString;
      local_60 = 2;
      SpoofData::confusableLookup(*(SpoofData **)(this + 0x10),param_1,(UnicodeString *)&local_68);
      if (-1 < local_60) {
        local_5c = (int)(local_60 >> 5);
      }
      icu_76_godot::UnicodeString::moveIndex32((int)&local_68,local_5c);
      iVar3 = icu_76_godot::UnicodeString::char32At((int)&local_68);
      if (((param_1 != iVar3) &&
          (bVar1 = iVar3 - 0x69U < 2, uVar4 = CONCAT71(uVar5,bVar1 || iVar3 == 0x131),
          !bVar1 && iVar3 != 0x131)) &&
         (uVar4 = CONCAT71(uVar5,iVar3 == 0x237 || iVar3 == 0x6c), iVar3 != 0x237 && iVar3 != 0x6c))
      {
        cVar2 = u_hasBinaryProperty_76_godot(iVar3,0x1b);
        uVar4 = CONCAT71(uVar5,cVar2 != '\0');
      }
      icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_68);
      goto LAB_001012a8;
    }
  }
  uVar4 = 1;
LAB_001012a8:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4 & 0xffffffff;
}



/* icu_76_godot::SpoofImpl::findHiddenOverlay(icu_76_godot::UnicodeString const&, UErrorCode&) const
    */

int icu_76_godot::SpoofImpl::findHiddenOverlay(UnicodeString *param_1,UErrorCode *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  cVar2 = '\0';
  iVar5 = 0;
  while( true ) {
    if (*(short *)(param_2 + 8) < 0) {
      iVar3 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar3 = (int)(*(short *)(param_2 + 8) >> 5);
    }
    if (iVar3 <= iVar5) break;
    uVar4 = icu_76_godot::UnicodeString::char32At((int)param_2);
    if ((uVar4 == 0x307) && (cVar2 != '\0')) {
      return iVar5;
    }
    cVar1 = u_getCombiningClass_76_godot(uVar4);
    if ((cVar1 == '\0') || (cVar1 == -0x1a)) {
      cVar2 = isIllegalCombiningDotLeadCharacter((SpoofImpl *)param_1,uVar4);
    }
    iVar5 = (0xffff < uVar4) + 1 + iVar5;
  }
  return -1;
}



int uspoof_swap_76_godot(long param_1,long param_2,int param_3,long param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *__s;
  
  if ((param_5 != (int *)0x0) && (*param_5 < 1)) {
    if (((param_1 == 0 || param_2 == 0) || (param_3 < -1)) || ((0 < param_3 && (param_4 == 0)))) {
      *param_5 = 1;
    }
    else if ((((*(short *)(param_2 + 0xc) == 0x6643) && (*(short *)(param_2 + 0xe) == 0x2075)) &&
             (*(short *)(param_2 + 0x10) == 2)) && (*(short *)(param_2 + 0x12) == 0)) {
      iVar1 = udata_swapDataHeader_76_godot(param_1);
      puVar5 = (undefined4 *)(param_2 + iVar1);
      iVar2 = (**(code **)(param_1 + 0x10))(*puVar5);
      if ((iVar2 == 0x3845fdef) && (uVar3 = (**(code **)(param_1 + 0x10))(puVar5[2]), 0x5f < uVar3))
      {
        iVar2 = (**(code **)(param_1 + 0x10))(puVar5[2]);
        iVar6 = iVar1 + iVar2;
        if (param_3 == -1) {
          return iVar6;
        }
        if (iVar6 <= param_3) {
          __s = (undefined4 *)(iVar1 + param_4);
          if (puVar5 != __s) {
            memset(__s,0,(long)iVar2);
          }
          iVar1 = (**(code **)(param_1 + 0x10))(puVar5[3]);
          iVar2 = (**(code **)(param_1 + 0x10))(puVar5[4]);
          (**(code **)(param_1 + 0x38))
                    (param_1,(long)puVar5 + (long)iVar1,iVar2 << 2,(long)__s + (long)iVar1,param_5);
          iVar1 = (**(code **)(param_1 + 0x10))(puVar5[5]);
          iVar2 = (**(code **)(param_1 + 0x10))(puVar5[6]);
          (**(code **)(param_1 + 0x30))
                    (param_1,(long)puVar5 + (long)iVar1,iVar2 * 2,(long)__s + (long)iVar1,param_5);
          iVar1 = (**(code **)(param_1 + 0x10))(puVar5[7]);
          iVar2 = (**(code **)(param_1 + 0x10))(puVar5[8]);
          (**(code **)(param_1 + 0x30))
                    (param_1,(long)puVar5 + (long)iVar1,iVar2 * 2,(long)__s + (long)iVar1,param_5);
          uVar4 = (**(code **)(param_1 + 0x10))(*puVar5);
          (**(code **)(param_1 + 0x28))(__s,uVar4);
          if (puVar5 != __s) {
            __s[1] = puVar5[1];
          }
          (**(code **)(param_1 + 0x38))(param_1,puVar5 + 2,0x58,__s + 2,param_5);
          return iVar6;
        }
        udata_printError_76_godot
                  (param_1,
                   "uspoof_swap(): too few bytes (%d after ICU Data header) for spoof data.\n",iVar2
                  );
        *param_5 = 8;
      }
      else {
        udata_printError_76_godot(param_1,"uspoof_swap(): Spoof Data header is invalid.\n");
        *param_5 = 0x10;
      }
    }
    else {
      udata_printError_76_godot
                (param_1,
                 "uspoof_swap(): data format %02x.%02x.%02x.%02x (format version %02x %02x %02x %02x) is not recognized\n"
                 ,*(undefined1 *)(param_2 + 0xc),*(undefined1 *)(param_2 + 0xd),
                 *(undefined1 *)(param_2 + 0xe),*(undefined1 *)(param_2 + 0xf),
                 *(undefined1 *)(param_2 + 0x10),*(undefined1 *)(param_2 + 0x11),
                 *(undefined1 *)(param_2 + 0x12),*(undefined1 *)(param_2 + 0x13));
      *param_5 = 0x10;
    }
  }
  return 0;
}



/* icu_76_godot::SpoofImpl::SpoofImpl(icu_76_godot::SpoofImpl const&, UErrorCode&) */

void __thiscall
icu_76_godot::SpoofImpl::SpoofImpl(SpoofImpl *this,SpoofImpl *param_1,UErrorCode *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR__SpoofImpl_00102018;
  uVar2 = _LC1;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 8) = uVar2;
  if (0 < *(int *)param_2) {
    return;
  }
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    UNLOCK();
    *(long *)(this + 0x10) = lVar4;
  }
  uVar3 = icu_76_godot::UnicodeSet::clone();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x18) = uVar3;
  lVar4 = uprv_strdup_76_godot(uVar2);
  *(long *)(this + 0x20) = lVar4;
  if ((*(long *)(this + 0x18) != 0) && (lVar4 != 0)) {
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)param_2 = 7;
  *(undefined4 *)(this + 0x28) = uVar1;
  return;
}



/* icu_76_godot::SpoofImpl::~SpoofImpl() */

void __thiscall icu_76_godot::SpoofImpl::~SpoofImpl(SpoofImpl *this)

{
  UMemory *pUVar1;
  UMemory *this_00;
  void *in_RSI;
  
  this_00 = *(UMemory **)(this + 0x10);
  *(undefined ***)this = &PTR__SpoofImpl_00102018;
  if (this_00 != (UMemory *)0x0) {
    LOCK();
    pUVar1 = this_00 + 0x1c;
    *(int *)pUVar1 = *(int *)pUVar1 + -1;
    UNLOCK();
    if (*(int *)pUVar1 == 0) {
      if (this_00[8] != (UMemory)0x0) {
        uprv_free_76_godot(*(undefined8 *)this_00);
      }
      *(undefined8 *)this_00 = 0;
      if (*(long *)(this_00 + 0x10) != 0) {
        udata_close_76_godot();
      }
      icu_76_godot::UMemory::operator_delete(this_00,in_RSI);
    }
  }
  if (*(UnicodeSet **)(this + 0x18) != (UnicodeSet *)0x0) {
    icu_76_godot::UnicodeSet::~UnicodeSet(*(UnicodeSet **)(this + 0x18));
  }
  uprv_free_76_godot(*(undefined8 *)(this + 0x20));
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::SpoofImpl::~SpoofImpl() */

void __thiscall icu_76_godot::SpoofImpl::~SpoofImpl(SpoofImpl *this)

{
  UMemory *pUVar1;
  UMemory *this_00;
  void *in_RSI;
  
  this_00 = *(UMemory **)(this + 0x10);
  *(undefined ***)this = &PTR__SpoofImpl_00102018;
  if (this_00 != (UMemory *)0x0) {
    LOCK();
    pUVar1 = this_00 + 0x1c;
    *(int *)pUVar1 = *(int *)pUVar1 + -1;
    UNLOCK();
    if (*(int *)pUVar1 == 0) {
      if (this_00[8] != (UMemory)0x0) {
        uprv_free_76_godot(*(undefined8 *)this_00);
      }
      *(undefined8 *)this_00 = 0;
      if (*(long *)(this_00 + 0x10) != 0) {
        udata_close_76_godot();
      }
      icu_76_godot::UMemory::operator_delete(this_00,in_RSI);
    }
  }
  if (*(UnicodeSet **)(this + 0x18) != (UnicodeSet *)0x0) {
    icu_76_godot::UnicodeSet::~UnicodeSet(*(UnicodeSet **)(this + 0x18));
  }
  uprv_free_76_godot(*(undefined8 *)(this + 0x20));
  icu_76_godot::UObject::~UObject((UObject *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::SpoofImpl::addScriptChars(char const*, icu_76_godot::UnicodeSet*, UErrorCode&) */

void __thiscall
icu_76_godot::SpoofImpl::addScriptChars
          (SpoofImpl *this,char *param_1,UnicodeSet *param_2,UErrorCode *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  undefined4 local_178 [32];
  UnicodeSet local_f8 [200];
  long local_30;
  
  puVar3 = local_178;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = uscript_getCode_76_godot(param_1,local_178,0x1e);
  if (*(int *)param_3 < 1) {
    if (*(int *)param_3 == -0x7f) {
      *(undefined4 *)param_3 = 1;
    }
    else {
      icu_76_godot::UnicodeSet::UnicodeSet(local_f8);
      if (0 < iVar2) {
        do {
          uVar1 = *puVar3;
          puVar3 = puVar3 + 1;
          icu_76_godot::UnicodeSet::applyIntPropertyValue(local_f8,0x100a,uVar1,param_3);
          icu_76_godot::UnicodeSet::addAll(param_2);
        } while (puVar3 != local_178 + iVar2);
      }
      icu_76_godot::UnicodeSet::~UnicodeSet(local_f8);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::SpoofImpl::setAllowedLocales(char const*, UErrorCode&) */

void __thiscall
icu_76_godot::SpoofImpl::setAllowedLocales(SpoofImpl *this,char *param_1,UErrorCode *param_2)

{
  char cVar1;
  size_t sVar2;
  char *pcVar3;
  undefined8 uVar4;
  UnicodeSet *this_00;
  long lVar5;
  long lVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  long in_FS_OFFSET;
  UnicodeSet local_1d8 [208];
  UnicodeSet local_108 [200];
  long local_40;
  
  iVar8 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  icu_76_godot::UnicodeSet::UnicodeSet(local_1d8);
  sVar2 = strlen(param_1);
  pcVar9 = param_1;
  while( true ) {
    pcVar3 = strchr(pcVar9,0x2c);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = param_1 + sVar2;
    }
    cVar1 = *pcVar9;
    while (cVar1 == ' ') {
      pcVar9 = pcVar9 + 1;
      cVar1 = *pcVar9;
    }
    pcVar7 = pcVar3 + -1;
    if (pcVar7 <= pcVar9) break;
    while (*pcVar7 == ' ') {
      pcVar7 = pcVar7 + -1;
      if (pcVar9 == pcVar7) goto LAB_00101ab0;
    }
    iVar8 = iVar8 + 1;
    pcVar9 = (char *)uprv_strndup_76_godot(pcVar9,((int)pcVar7 + 1) - (int)pcVar9);
    addScriptChars(this,pcVar9,local_1d8,param_2);
    uprv_free_76_godot(pcVar9);
    if ((0 < *(int *)param_2) || (pcVar9 = pcVar3 + 1, param_1 + sVar2 <= pcVar9))
    goto LAB_00101a45;
  }
LAB_00101ab0:
  if (iVar8 == 0) {
    uprv_free_76_godot(*(undefined8 *)(this + 0x20));
    uVar4 = uprv_strdup_76_godot(&_LC0);
    *(undefined8 *)(this + 0x20) = uVar4;
    this_00 = (UnicodeSet *)icu_76_godot::UMemory::operator_new((UMemory *)0xc8,(ulong)pcVar7);
    if ((this_00 == (UnicodeSet *)0x0) ||
       (icu_76_godot::UnicodeSet::UnicodeSet(this_00,0,0x10ffff), *(long *)(this + 0x20) == 0)) {
      *(undefined4 *)param_2 = 7;
    }
    else {
      icu_76_godot::UnicodeSet::freeze();
      if (*(UnicodeSet **)(this + 0x18) != (UnicodeSet *)0x0) {
        icu_76_godot::UnicodeSet::~UnicodeSet(*(UnicodeSet **)(this + 0x18));
      }
      *(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xffffffbf;
      *(UnicodeSet **)(this + 0x18) = this_00;
    }
    goto LAB_00101b28;
  }
LAB_00101a45:
  icu_76_godot::UnicodeSet::UnicodeSet(local_108);
  icu_76_godot::UnicodeSet::applyIntPropertyValue(local_108,0x100a,0,param_2);
  icu_76_godot::UnicodeSet::addAll(local_1d8);
  icu_76_godot::UnicodeSet::applyIntPropertyValue(local_108,0x100a,1,param_2);
  icu_76_godot::UnicodeSet::addAll(local_1d8);
  if (*(int *)param_2 < 1) {
    lVar5 = icu_76_godot::UnicodeSet::clone();
    lVar6 = uprv_strdup_76_godot(param_1);
    if ((lVar5 != 0) && (lVar6 != 0)) {
      uprv_free_76_godot(*(undefined8 *)(this + 0x20));
      *(long *)(this + 0x20) = lVar6;
      icu_76_godot::UnicodeSet::freeze();
      if (*(UnicodeSet **)(this + 0x18) != (UnicodeSet *)0x0) {
        icu_76_godot::UnicodeSet::~UnicodeSet(*(UnicodeSet **)(this + 0x18));
      }
      *(uint *)(this + 0xc) = *(uint *)(this + 0xc) | 0x40;
      *(long *)(this + 0x18) = lVar5;
      icu_76_godot::UnicodeSet::~UnicodeSet(local_108);
      icu_76_godot::UnicodeSet::~UnicodeSet(local_1d8);
      goto LAB_00101b30;
    }
    *(undefined4 *)param_2 = 7;
    icu_76_godot::UnicodeSet::~UnicodeSet(local_108);
  }
  else {
    icu_76_godot::UnicodeSet::~UnicodeSet(local_108);
  }
LAB_00101b28:
  icu_76_godot::UnicodeSet::~UnicodeSet(local_1d8);
LAB_00101b30:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::CheckResult::~CheckResult() */

void __thiscall icu_76_godot::CheckResult::~CheckResult(CheckResult *this)

{
  *(undefined ***)this = &PTR__CheckResult_00102040;
  icu_76_godot::UnicodeSet::~UnicodeSet((UnicodeSet *)(this + 0x10));
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::CheckResult::~CheckResult() */

void __thiscall icu_76_godot::CheckResult::~CheckResult(CheckResult *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__CheckResult_00102040;
  icu_76_godot::UnicodeSet::~UnicodeSet((UnicodeSet *)(this + 0x10));
  icu_76_godot::UObject::~UObject((UObject *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::SpoofImpl::getNumerics(icu_76_godot::UnicodeString const&,
   icu_76_godot::UnicodeSet&, UErrorCode&) const */

void icu_76_godot::SpoofImpl::getNumerics
               (UnicodeString *param_1,UnicodeSet *param_2,UErrorCode *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  icu_76_godot::UnicodeSet::clear();
  while( true ) {
    if (*(short *)(param_2 + 8) < 0) {
      iVar2 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar2 = (int)(*(short *)(param_2 + 8) >> 5);
    }
    if (iVar2 <= iVar4) break;
    uVar3 = icu_76_godot::UnicodeString::char32At((int)param_2);
    cVar1 = u_charType_76_godot(uVar3);
    if (cVar1 == '\t') {
      u_getNumericValue_76_godot(uVar3);
      icu_76_godot::UnicodeSet::add((int)param_3);
    }
    iVar4 = iVar4 + 1 + (uint)(0xffff < uVar3);
  }
  return;
}



/* icu_76_godot::CheckResult::clear() */

void __thiscall icu_76_godot::CheckResult::clear(CheckResult *this)

{
  *(undefined4 *)(this + 0xc) = 0;
  icu_76_godot::UnicodeSet::clear();
  *(undefined4 *)(this + 0xd8) = 0xffffffff;
  return;
}



/* icu_76_godot::CheckResult::CheckResult() */

void __thiscall icu_76_godot::CheckResult::CheckResult(CheckResult *this)

{
  *(undefined ***)this = &PTR__CheckResult_00102040;
  *(undefined4 *)(this + 8) = 0x2734ecde;
  icu_76_godot::UnicodeSet::UnicodeSet((UnicodeSet *)(this + 0x10));
  *(undefined4 *)(this + 0xc) = 0;
  icu_76_godot::UnicodeSet::clear();
  *(undefined4 *)(this + 0xd8) = 0xffffffff;
  return;
}



/* icu_76_godot::SpoofData::reserveSpace(int, UErrorCode&) [clone .cold] */

void icu_76_godot::SpoofData::reserveSpace(int param_1,UErrorCode *param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


