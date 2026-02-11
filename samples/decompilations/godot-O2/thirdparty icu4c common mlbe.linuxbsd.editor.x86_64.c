
/* icu_76_godot::MlBreakEngine::evaluateBreakpoint(icu_76_godot::UnicodeString const&, int*, int,
   int, int, icu_76_godot::UVector32&, UErrorCode&) const */

int __thiscall
icu_76_godot::MlBreakEngine::evaluateBreakpoint
          (MlBreakEngine *this,UnicodeString *param_1,int *param_2,int param_3,int param_4,
          int param_5,UVector32 *param_6,UErrorCode *param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  MlBreakEngine *pMVar7;
  int *piVar8;
  long in_FS_OFFSET;
  UnicodeString local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < *(int *)param_7) goto LAB_001001ec;
  pMVar7 = this + 0x198;
  iVar3 = *(int *)(this + 0x610);
  piVar8 = param_2 + param_3;
  piVar6 = piVar8;
  do {
    iVar4 = (int)param_1;
    if (*piVar6 != -1) {
      icu_76_godot::UnicodeString::tempSubString((int)local_88,iVar4);
      iVar2 = uhash_geti_76_godot(*(undefined8 *)pMVar7,local_88);
      iVar3 = iVar3 + iVar2;
      icu_76_godot::UnicodeString::~UnicodeString(local_88);
    }
    pMVar7 = pMVar7 + 0x58;
    piVar6 = piVar6 + 1;
  } while (pMVar7 != this + 0x3a8);
  piVar6 = piVar8;
  do {
    if ((piVar6[1] != -1) && (piVar6[2] != -1)) {
      icu_76_godot::UnicodeString::tempSubString((int)local_88,iVar4);
      iVar2 = uhash_geti_76_godot(*(undefined8 *)pMVar7,local_88);
      iVar3 = iVar3 + iVar2;
      icu_76_godot::UnicodeString::~UnicodeString(local_88);
    }
    pMVar7 = pMVar7 + 0x58;
    piVar6 = piVar6 + 1;
  } while (pMVar7 != this + 0x4b0);
  do {
    if (((*piVar8 != -1) && (piVar8[1] != -1)) && (piVar8[2] != -1)) {
      icu_76_godot::UnicodeString::tempSubString((int)local_88,iVar4);
      iVar2 = uhash_geti_76_godot(*(undefined8 *)pMVar7,local_88);
      iVar3 = iVar3 + iVar2;
      icu_76_godot::UnicodeString::~UnicodeString(local_88);
    }
    pMVar7 = pMVar7 + 0x58;
    piVar8 = piVar8 + 1;
  } while (pMVar7 != this + 0x610);
  if (iVar3 < 1) goto LAB_001001ec;
  iVar3 = *(int *)(param_6 + 8);
  uVar5 = iVar3 + 1;
  if (((int)uVar5 < 0) || (*(int *)(param_6 + 0xc) < (int)uVar5)) {
    cVar1 = icu_76_godot::UVector32::expandCapacity((int)param_6,(UErrorCode *)(ulong)uVar5);
    if (cVar1 != '\0') {
      iVar3 = *(int *)(param_6 + 8);
      goto LAB_00100218;
    }
  }
  else {
LAB_00100218:
    *(int *)(*(long *)(param_6 + 0x18) + (long)iVar3 * 4) = param_3 + 1;
    *(int *)(param_6 + 8) = *(int *)(param_6 + 8) + 1;
  }
  param_5 = param_5 + 1;
LAB_001001ec:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::MlBreakEngine::initIndexList(icu_76_godot::UnicodeString const&, int*, UErrorCode&)
   const */

int __thiscall
icu_76_godot::MlBreakEngine::initIndexList
          (MlBreakEngine *this,UnicodeString *param_1,int *param_2,UErrorCode *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)param_3 < 1) {
    iVar4 = (int)param_1;
    iVar1 = icu_76_godot::UnicodeString::countChar32(iVar4,0);
    memset(param_2,0xff,(long)(iVar1 + 4) << 2);
    if (0 < iVar1) {
      param_2[2] = 0;
      uVar2 = icu_76_godot::UnicodeString::char32At(iVar4);
      iVar3 = (0xffff < uVar2) + 1;
      if (iVar1 == 1) {
        return iVar3;
      }
      param_2[3] = iVar3;
      uVar2 = icu_76_godot::UnicodeString::char32At(iVar4);
      iVar3 = (0xffff < uVar2) + 1 + iVar3;
      if (iVar1 == 2) {
        return iVar3;
      }
      param_2[4] = iVar3;
      uVar2 = icu_76_godot::UnicodeString::char32At(iVar4);
      iVar3 = (0xffff < uVar2) + 1 + iVar3;
      if (iVar1 == 3) {
        return iVar3;
      }
      param_2[5] = iVar3;
      uVar2 = icu_76_godot::UnicodeString::char32At(iVar4);
      return (0xffff < uVar2) + 1 + iVar3;
    }
  }
  return 0;
}



/* icu_76_godot::MlBreakEngine::initKeyValue(UResourceBundle*, char const*, char const*,
   icu_76_godot::Hashtable&, UErrorCode&) */

void __thiscall
icu_76_godot::MlBreakEngine::initKeyValue
          (MlBreakEngine *this,UResourceBundle *param_1,char *param_2,char *param_3,
          Hashtable *param_4,UErrorCode *param_5)

{
  short sVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  short *psVar5;
  UnicodeString *pUVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined4 local_190;
  undefined4 local_18c;
  UErrorCode local_188 [16];
  int local_178;
  code *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined *local_148;
  undefined2 local_140;
  undefined *local_108;
  undefined2 local_100;
  StackUResourceBundle local_c8 [136];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_140 = 2;
  local_190 = 0;
  local_18c = 0;
  local_148 = &ResourceDataValue::vtable;
  icu_76_godot::StackUResourceBundle::StackUResourceBundle(local_c8);
  local_160 = 0;
  local_168 = ures_getIntVector_76_godot;
  local_158 = 0;
  local_150 = 0xffffffff;
  lVar3 = ures_getByKey_76_godot(param_1,param_3,0,param_5);
  lVar4 = ures_getIntVector_76_godot(lVar3,&local_190,param_5);
  if (*(int *)param_5 < 1) {
    ures_getValueWithFallback_76_godot
              (param_1,param_2,local_c8,(ResourceDataValue *)&local_168,param_5);
    icu_76_godot::ResourceDataValue::getArray(local_188);
    if ((*(int *)param_5 < 1) && (0 < local_178)) {
      uVar7 = 0;
      do {
        icu_76_godot::ResourceArray::getValue((int)local_188,(ResourceValue *)(uVar7 & 0xffffffff));
        psVar5 = (short *)icu_76_godot::ResourceDataValue::getString
                                    ((int *)&local_168,(UErrorCode *)&local_18c);
        local_108 = &ResourceDataValue::vtable;
        lVar8 = 0;
        local_100 = 2;
        if (psVar5 != (short *)0x0) {
          sVar1 = *psVar5;
          while (sVar1 != 0) {
            lVar8 = lVar8 + 1;
            sVar1 = psVar5[lVar8];
          }
        }
        icu_76_godot::UnicodeString::doAppend((UnicodeString *)&local_108);
        pUVar6 = (UnicodeString *)&local_108;
        icu_76_godot::UnicodeString::operator=
                  ((UnicodeString *)&local_148,(UnicodeString *)&local_108);
        icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_108);
        if (*(int *)param_5 < 1) {
          *(int *)(this + 0x610) = *(int *)(this + 0x610) - *(int *)(lVar4 + uVar7 * 4);
          uVar2 = *(undefined4 *)(lVar4 + uVar7 * 4);
          pUVar6 = (UnicodeString *)
                   icu_76_godot::UMemory::operator_new((UMemory *)0x40,(ulong)pUVar6);
          if (pUVar6 != (UnicodeString *)0x0) {
            icu_76_godot::UnicodeString::UnicodeString(pUVar6,(UnicodeString *)&local_148);
          }
          uhash_puti_76_godot(*(undefined8 *)param_4,pUVar6,uVar2,param_5);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != (long)local_178);
    }
  }
  if (lVar3 != 0) {
    ures_close_76_godot(lVar3);
  }
  icu_76_godot::ResourceDataValue::~ResourceDataValue((ResourceDataValue *)&local_168);
  icu_76_godot::StackUResourceBundle::~StackUResourceBundle(local_c8);
  icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_148);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::MlBreakEngine::loadMLModel(UErrorCode&) */

void __thiscall icu_76_godot::MlBreakEngine::loadMLModel(MlBreakEngine *this,UErrorCode *param_1)

{
  UResourceBundle *pUVar1;
  long in_FS_OFFSET;
  code *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined *local_f8;
  undefined2 local_f0;
  StackUResourceBundle local_b8 [136];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_1 < 1) {
    local_f8 = &ResourceDataValue::vtable;
    local_f0 = 2;
    icu_76_godot::StackUResourceBundle::StackUResourceBundle(local_b8);
    local_118 = ures_getIntVector_76_godot;
    local_110 = 0;
    local_108 = 0;
    local_100 = 0xffffffff;
    pUVar1 = (UResourceBundle *)ures_openDirect_76_godot("icudt76l-brkitr",&_LC0,param_1);
    if (*(int *)param_1 < 1) {
      initKeyValue(this,pUVar1,"UW1Keys","UW1Values",(Hashtable *)(this + 0x198),param_1);
      initKeyValue(this,pUVar1,"UW2Keys","UW2Values",(Hashtable *)(this + 0x1f0),param_1);
      initKeyValue(this,pUVar1,"UW3Keys","UW3Values",(Hashtable *)(this + 0x248),param_1);
      initKeyValue(this,pUVar1,"UW4Keys","UW4Values",(Hashtable *)(this + 0x2a0),param_1);
      initKeyValue(this,pUVar1,"UW5Keys","UW5Values",(Hashtable *)(this + 0x2f8),param_1);
      initKeyValue(this,pUVar1,"UW6Keys","UW6Values",(Hashtable *)(this + 0x350),param_1);
      initKeyValue(this,pUVar1,"BW1Keys","BW1Values",(Hashtable *)(this + 0x3a8),param_1);
      initKeyValue(this,pUVar1,"BW2Keys","BW2Values",(Hashtable *)(this + 0x400),param_1);
      initKeyValue(this,pUVar1,"BW3Keys","BW3Values",(Hashtable *)(this + 0x458),param_1);
      initKeyValue(this,pUVar1,"TW1Keys","TW1Values",(Hashtable *)(this + 0x4b0),param_1);
      initKeyValue(this,pUVar1,"TW2Keys","TW2Values",(Hashtable *)(this + 0x508),param_1);
      initKeyValue(this,pUVar1,"TW3Keys","TW3Values",(Hashtable *)(this + 0x560),param_1);
      initKeyValue(this,pUVar1,"TW4Keys","TW4Values",(Hashtable *)(this + 0x5b8),param_1);
      *(int *)(this + 0x610) = *(int *)(this + 0x610) / 2;
    }
    if (pUVar1 != (UResourceBundle *)0x0) {
      ures_close_76_godot(pUVar1);
    }
    icu_76_godot::ResourceDataValue::~ResourceDataValue((ResourceDataValue *)&local_118);
    icu_76_godot::StackUResourceBundle::~StackUResourceBundle(local_b8);
    icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_f8);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::MlBreakEngine::MlBreakEngine(icu_76_godot::UnicodeSet const&,
   icu_76_godot::UnicodeSet const&, UErrorCode&) */

void __thiscall
icu_76_godot::MlBreakEngine::MlBreakEngine
          (MlBreakEngine *this,UnicodeSet *param_1,UnicodeSet *param_2,UErrorCode *param_3)

{
  MlBreakEngine *pMVar1;
  MlBreakEngine *pMVar2;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  pMVar2 = this + 0x198;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__MlBreakEngine_001015a8;
  icu_76_godot::UnicodeSet::UnicodeSet((UnicodeSet *)(this + 8),param_1);
  icu_76_godot::UnicodeSet::UnicodeSet((UnicodeSet *)(this + 0xd0),param_2);
  do {
    while( true ) {
      *(undefined8 *)pMVar2 = 0;
      pMVar1 = pMVar2 + 8;
      local_44 = 0;
      uhash_init_76_godot(pMVar1,&uhash_hashUnicodeString_76_godot,
                          &uhash_compareUnicodeString_76_godot,0,&local_44);
      if (0 < local_44) break;
      *(MlBreakEngine **)pMVar2 = pMVar1;
      pMVar2 = pMVar2 + 0x58;
      uhash_setKeyDeleter_76_godot(pMVar1,&uprv_deleteUObject_76_godot);
      if (pMVar2 == this + 0x610) goto LAB_0010099a;
    }
    pMVar2 = pMVar2 + 0x58;
  } while (pMVar2 != this + 0x610);
LAB_0010099a:
  *(undefined4 *)(this + 0x610) = 0;
  if (*(int *)param_3 < 1) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      loadMLModel(this,param_3);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::MlBreakEngine::~MlBreakEngine() */

void __thiscall icu_76_godot::MlBreakEngine::~MlBreakEngine(MlBreakEngine *this)

{
  MlBreakEngine *pMVar1;
  
  pMVar1 = this + 0x5b8;
  *(undefined ***)this = &PTR__MlBreakEngine_001015a8;
  do {
    if (*(long *)pMVar1 != 0) {
      uhash_close_76_godot();
    }
    pMVar1 = pMVar1 + -0x58;
  } while (pMVar1 != this + 0x140);
  icu_76_godot::UnicodeSet::~UnicodeSet((UnicodeSet *)(this + 0xd0));
  icu_76_godot::UnicodeSet::~UnicodeSet((UnicodeSet *)(this + 8));
  return;
}



/* icu_76_godot::MlBreakEngine::~MlBreakEngine() */

void __thiscall icu_76_godot::MlBreakEngine::~MlBreakEngine(MlBreakEngine *this)

{
  MlBreakEngine *pMVar1;
  void *in_RSI;
  
  pMVar1 = this + 0x5b8;
  *(undefined ***)this = &PTR__MlBreakEngine_001015a8;
  do {
    if (*(long *)pMVar1 != 0) {
      uhash_close_76_godot();
    }
    pMVar1 = pMVar1 + -0x58;
  } while (pMVar1 != this + 0x140);
  icu_76_godot::UnicodeSet::~UnicodeSet((UnicodeSet *)(this + 0xd0));
  icu_76_godot::UnicodeSet::~UnicodeSet((UnicodeSet *)(this + 8));
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::MlBreakEngine::divideUpRange(UText*, int, int, icu_76_godot::UVector32&,
   icu_76_godot::UnicodeString const&, icu_76_godot::LocalPointer<icu_76_godot::UVector32> const&,
   UErrorCode&) const */

int __thiscall
icu_76_godot::MlBreakEngine::divideUpRange
          (MlBreakEngine *this,UText *param_1,int param_2,int param_3,UVector32 *param_4,
          UnicodeString *param_5,LocalPointer *param_6,UErrorCode *param_7)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  long in_FS_OFFSET;
  bool bVar15;
  UVector32 local_68 [8];
  int local_60;
  int local_5c;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_7 < 1) {
    if (param_2 < param_3) {
      iVar4 = 0;
      iVar10 = (int)param_5;
      iVar3 = icu_76_godot::UnicodeString::countChar32(iVar10,0);
      icu_76_godot::UVector32::UVector32(local_68,iVar3 + 1,param_7);
      if (0 < *(int *)param_7) {
        icu_76_godot::UVector32::~UVector32(local_68);
        goto LAB_00100b42;
      }
      iVar4 = icu_76_godot::UnicodeString::countChar32(iVar10,0);
      piVar8 = (int *)uprv_malloc_76_godot((long)(iVar4 + 4) << 2);
      if (piVar8 == (int *)0x0) {
        *(undefined4 *)param_7 = 7;
LAB_00100cdf:
        iVar4 = 0;
      }
      else {
        iVar3 = initIndexList(this,param_5,piVar8,param_7);
        uVar13 = local_60 + 1;
        iVar14 = (int)local_68;
        if (((-1 < (int)uVar13) && ((int)uVar13 <= local_5c)) ||
           (cVar2 = icu_76_godot::UVector32::expandCapacity(iVar14,(UErrorCode *)(ulong)uVar13),
           cVar2 != '\0')) {
          *(undefined4 *)(local_50 + (long)local_60 * 4) = 0;
          local_60 = local_60 + 1;
        }
        iVar6 = *(int *)param_7;
        if (0 < iVar6) goto LAB_00100cdf;
        if (iVar4 < 2) {
          iVar5 = 1;
        }
        else {
          iVar5 = 1;
          iVar12 = 0;
          do {
            if (0 < iVar6) goto LAB_00100cdf;
            iVar5 = evaluateBreakpoint(this,param_5,piVar8,iVar12,iVar3,iVar5,local_68,param_7);
            if (iVar12 + 4 < iVar4) {
              piVar8[iVar12 + 6] = iVar3;
              uVar13 = icu_76_godot::UnicodeString::char32At(iVar10);
              iVar3 = (0xffff < uVar13) + 1 + iVar3;
            }
            iVar6 = *(int *)param_7;
            iVar12 = iVar12 + 1;
          } while (iVar4 + -1 != iVar12);
          if (0 < iVar6) goto LAB_00100cdf;
        }
        iVar4 = 0;
        if (-1 < local_60 + -1) {
          iVar4 = *(int *)(local_50 + (long)(local_60 + -1) * 4);
        }
        iVar3 = icu_76_godot::UnicodeString::countChar32(iVar10,0);
        if (iVar3 != iVar4) {
          uVar7 = icu_76_godot::UnicodeString::countChar32(iVar10,0);
          uVar13 = local_60 + 1;
          if (((-1 < (int)uVar13) && ((int)uVar13 <= local_5c)) ||
             (cVar2 = icu_76_godot::UVector32::expandCapacity(iVar14,(UErrorCode *)(ulong)uVar13),
             cVar2 != '\0')) {
            *(undefined4 *)(local_50 + (long)local_60 * 4) = uVar7;
            local_60 = local_60 + 1;
          }
          iVar5 = iVar5 + 1;
        }
        if (iVar5 < 1) {
          iVar4 = 0;
        }
        else {
          iVar4 = 0;
          lVar11 = 0;
          iVar3 = -1;
          do {
            lVar1 = *(long *)param_6;
            if ((local_60 < 1) || (local_60 <= (int)lVar11)) {
              if (lVar1 != 0) {
                lVar9 = 0;
                if (*(int *)(lVar1 + 8) < 1) goto LAB_00100e12;
LAB_00100e87:
                iVar10 = *(int *)(*(long *)(lVar1 + 0x18) + lVar9);
                goto LAB_00100e8e;
              }
              bVar15 = param_2 <= iVar3;
              iVar3 = param_2;
              if (bVar15) goto LAB_00100ef0;
LAB_00100ea0:
              iVar3 = param_2;
              if (0 < param_2) {
                utext_char32At_76_godot(param_1,(long)(param_2 + -1));
                cVar2 = icu_76_godot::UnicodeSet::contains((int)this + 0xd0);
                if (cVar2 != '\0') goto LAB_00100e26;
              }
            }
            else {
              iVar10 = *(int *)(local_50 + lVar11 * 4);
              if (lVar1 == 0) {
                iVar10 = iVar10 + param_2;
LAB_00100e8e:
                bVar15 = iVar3 < iVar10;
                iVar3 = iVar10;
                if (bVar15) {
                  if (iVar10 == param_2) goto LAB_00100ea0;
LAB_00100e26:
                  iVar10 = *(int *)(param_4 + 8);
                  uVar13 = iVar10 + 1;
                  if (((int)uVar13 < 0) || (*(int *)(param_4 + 0xc) < (int)uVar13)) {
                    cVar2 = icu_76_godot::UVector32::expandCapacity
                                      ((int)param_4,(UErrorCode *)(ulong)uVar13);
                    if (cVar2 != '\0') {
                      iVar10 = *(int *)(param_4 + 8);
                      goto LAB_00100f04;
                    }
                  }
                  else {
LAB_00100f04:
                    *(int *)(*(long *)(param_4 + 0x18) + (long)iVar10 * 4) = iVar3;
                    *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 1;
                  }
                  iVar4 = iVar4 + 1;
                }
                else {
LAB_00100ef0:
                  iVar5 = iVar5 + -1;
                }
              }
              else {
                if (((-1 < iVar10) && (0 < *(int *)(lVar1 + 8))) && (iVar10 < *(int *)(lVar1 + 8)))
                {
                  lVar9 = (long)iVar10 << 2;
                  goto LAB_00100e87;
                }
LAB_00100e12:
                bVar15 = -1 < iVar3;
                iVar3 = 0;
                if (bVar15) goto LAB_00100ef0;
                if (param_2 != 0) goto LAB_00100e26;
              }
            }
            lVar11 = lVar11 + 1;
          } while ((int)lVar11 < iVar5);
        }
        utext_char32At_76_godot(param_1);
        if (*(int *)(param_4 + 8) != 0) {
          iVar3 = 0;
          iVar10 = *(int *)(param_4 + 8) + -1;
          if (-1 < iVar10) {
            iVar3 = *(int *)(*(long *)(param_4 + 0x18) + (long)iVar10 * 4);
          }
          if ((param_3 == iVar3) &&
             (cVar2 = icu_76_godot::UnicodeSet::contains((int)this + 8), cVar2 == '\0')) {
            if (0 < *(int *)(param_4 + 8)) {
              *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + -1;
            }
            iVar4 = iVar4 + -1;
          }
        }
      }
      uprv_free_76_godot(piVar8);
      icu_76_godot::UVector32::~UVector32(local_68);
      goto LAB_00100b42;
    }
    *(undefined4 *)param_7 = 1;
  }
  iVar4 = 0;
LAB_00100b42:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
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
LAB_001012cf:
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
      goto LAB_001012cf;
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


