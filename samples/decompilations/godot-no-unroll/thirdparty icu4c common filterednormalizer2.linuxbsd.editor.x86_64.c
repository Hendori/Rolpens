
/* icu_76_godot::FilteredNormalizer2::~FilteredNormalizer2() */

void __thiscall icu_76_godot::FilteredNormalizer2::~FilteredNormalizer2(FilteredNormalizer2 *this)

{
  *(undefined ***)this = &PTR__FilteredNormalizer2_001010f0;
  icu_76_godot::Normalizer2::~Normalizer2((Normalizer2 *)this);
  return;
}



/* icu_76_godot::FilteredNormalizer2::~FilteredNormalizer2() */

void __thiscall icu_76_godot::FilteredNormalizer2::~FilteredNormalizer2(FilteredNormalizer2 *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__FilteredNormalizer2_001010f0;
  icu_76_godot::Normalizer2::~Normalizer2((Normalizer2 *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::FilteredNormalizer2::isNormalizedUTF8(icu_76_godot::StringPiece, UErrorCode&) const
    */

undefined8
icu_76_godot::FilteredNormalizer2::isNormalizedUTF8
          (long param_1,long param_2,int param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (0 < *param_4) {
    return 0;
  }
  iVar3 = 2;
  if (0 < param_3) {
    do {
      while (iVar2 = icu_76_godot::UnicodeSet::spanUTF8
                               (*(undefined8 *)(param_1 + 0x10),param_2,param_3,iVar3), iVar3 == 0)
      {
        param_3 = param_3 - iVar2;
        iVar3 = 2;
        param_2 = param_2 + iVar2;
        if (param_3 < 1) {
          return 1;
        }
      }
      cVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x60))
                        (*(long **)(param_1 + 8),param_2,iVar2,param_4);
      if ((cVar1 == '\0') || (0 < *param_4)) {
        return 0;
      }
      param_3 = param_3 - iVar2;
      iVar3 = 0;
      param_2 = param_2 + iVar2;
    } while (0 < param_3);
  }
  return 1;
}



/* icu_76_godot::FilteredNormalizer2::quickCheck(icu_76_godot::UnicodeString const&, UErrorCode&)
   const */

int __thiscall
icu_76_godot::FilteredNormalizer2::quickCheck
          (FilteredNormalizer2 *this,UnicodeString *param_1,UErrorCode *param_2)

{
  long *plVar1;
  code *pcVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  UnicodeString *pUVar8;
  undefined8 uVar9;
  int iVar10;
  long in_FS_OFFSET;
  int local_90;
  UnicodeString local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_2 < 1) {
    uVar3 = *(ushort *)(param_1 + 8);
    if ((uVar3 & 1) == 0) {
      local_90 = 1;
      iVar4 = 0;
      iVar10 = 2;
      do {
        iVar5 = local_90;
        if ((short)uVar3 < 0) {
          iVar7 = *(int *)(param_1 + 0xc);
          if (iVar7 <= iVar4) goto LAB_00100140;
          uVar9 = *(undefined8 *)(this + 0x10);
          if (-1 < iVar4) goto LAB_001001c7;
LAB_00100226:
          lVar6 = 0;
          iVar5 = 0;
          if ((uVar3 & 0x11) == 0) goto LAB_001001de;
LAB_0010022f:
          pUVar8 = (UnicodeString *)0x0;
        }
        else {
          iVar7 = (int)((short)uVar3 >> 5);
          if (iVar7 <= iVar4) goto LAB_00100140;
          uVar9 = *(undefined8 *)(this + 0x10);
          if (iVar4 < 0) goto LAB_00100226;
LAB_001001c7:
          iVar5 = iVar7;
          if (iVar4 <= iVar7) {
            iVar5 = iVar4;
          }
          iVar7 = iVar7 - iVar5;
          lVar6 = (long)iVar5 * 2;
          if ((uVar3 & 0x11) != 0) goto LAB_0010022f;
LAB_001001de:
          pUVar8 = param_1 + 10;
          if ((uVar3 & 2) == 0) {
            pUVar8 = *(UnicodeString **)(param_1 + 0x18);
          }
        }
        iVar4 = icu_76_godot::UnicodeSet::span(uVar9,pUVar8 + lVar6,iVar7,iVar10);
        iVar4 = iVar5 + iVar4;
        if (iVar10 == 0) {
          iVar10 = 2;
          iVar7 = local_90;
        }
        else {
          plVar1 = *(long **)(this + 8);
          pcVar2 = *(code **)(*plVar1 + 0x68);
          icu_76_godot::UnicodeString::tempSubString((int)local_88,(int)param_1);
          iVar5 = (*pcVar2)(plVar1,local_88,param_2);
          icu_76_godot::UnicodeString::~UnicodeString(local_88);
          if (0 < *(int *)param_2) goto LAB_00100140;
          if (iVar5 == 0) goto LAB_001002c0;
          iVar10 = 0;
          iVar7 = 2;
          if (iVar5 != 2) {
            iVar7 = local_90;
          }
        }
        local_90 = iVar7;
        uVar3 = *(ushort *)(param_1 + 8);
      } while( true );
    }
    *(undefined4 *)param_2 = 1;
  }
  local_90 = 2;
  iVar5 = local_90;
LAB_00100140:
  local_90 = iVar5;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_90;
LAB_001002c0:
  local_90 = 0;
  iVar5 = local_90;
  goto LAB_00100140;
}



/* icu_76_godot::FilteredNormalizer2::spanQuickCheckYes(icu_76_godot::UnicodeString const&,
   UErrorCode&) const */

int __thiscall
icu_76_godot::FilteredNormalizer2::spanQuickCheckYes
          (FilteredNormalizer2 *this,UnicodeString *param_1,UErrorCode *param_2)

{
  long *plVar1;
  code *pcVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  UnicodeString *pUVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  long in_FS_OFFSET;
  UnicodeString local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_2 < 1) {
    uVar3 = *(ushort *)(param_1 + 8);
    if ((uVar3 & 1) == 0) {
      iVar11 = 2;
      iVar7 = 0;
      do {
        if ((short)uVar3 < 0) {
          iVar5 = *(int *)(param_1 + 0xc);
          if (iVar5 <= iVar7) goto LAB_0010030e;
          uVar9 = *(undefined8 *)(this + 0x10);
          if (iVar7 < 0) goto LAB_001003d8;
LAB_00100375:
          iVar10 = iVar5;
          if (iVar7 <= iVar5) {
            iVar10 = iVar7;
          }
          iVar5 = iVar5 - iVar10;
          lVar6 = (long)iVar10 * 2;
          if ((uVar3 & 0x11) == 0) goto LAB_0010038b;
LAB_001003e1:
          pUVar8 = (UnicodeString *)0x0;
        }
        else {
          iVar5 = (int)((short)uVar3 >> 5);
          if (iVar5 <= iVar7) goto LAB_0010030e;
          uVar9 = *(undefined8 *)(this + 0x10);
          if (-1 < iVar7) goto LAB_00100375;
LAB_001003d8:
          lVar6 = 0;
          iVar10 = 0;
          if ((uVar3 & 0x11) != 0) goto LAB_001003e1;
LAB_0010038b:
          pUVar8 = param_1 + 10;
          if ((uVar3 & 2) == 0) {
            pUVar8 = *(UnicodeString **)(param_1 + 0x18);
          }
        }
        iVar4 = icu_76_godot::UnicodeSet::span(uVar9,pUVar8 + lVar6,iVar5,iVar11);
        if (iVar11 == 0) {
          iVar11 = 2;
        }
        else {
          plVar1 = *(long **)(this + 8);
          pcVar2 = *(code **)(*plVar1 + 0x70);
          icu_76_godot::UnicodeString::tempSubString((int)local_88,(int)param_1);
          iVar5 = (*pcVar2)(plVar1,local_88,param_2);
          iVar5 = iVar7 + iVar5;
          icu_76_godot::UnicodeString::~UnicodeString(local_88);
          if ((0 < *(int *)param_2) || (iVar5 < iVar10 + iVar4)) goto LAB_0010030e;
          iVar11 = 0;
        }
        uVar3 = *(ushort *)(param_1 + 8);
        iVar7 = iVar10 + iVar4;
      } while( true );
    }
    *(undefined4 *)param_2 = 1;
  }
  iVar5 = 0;
LAB_0010030e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::FilteredNormalizer2::isNormalized(icu_76_godot::UnicodeString const&, UErrorCode&)
   const */

undefined8 __thiscall
icu_76_godot::FilteredNormalizer2::isNormalized
          (FilteredNormalizer2 *this,UnicodeString *param_1,UErrorCode *param_2)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  UnicodeString *pUVar9;
  int iVar10;
  int iVar11;
  long in_FS_OFFSET;
  UnicodeString local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_2 < 1) {
    uVar4 = *(ushort *)(param_1 + 8);
    if ((uVar4 & 1) == 0) {
      iVar5 = 0;
      iVar11 = 2;
      if ((short)uVar4 < 0) goto LAB_0010053d;
LAB_001004e0:
      iVar8 = (int)((short)uVar4 >> 5);
      if (iVar5 < iVar8) {
        do {
          if (iVar5 < 0) {
            lVar7 = 0;
            iVar10 = 0;
            if ((uVar4 & 0x11) != 0) goto LAB_00100559;
LAB_0010050c:
            pUVar9 = param_1 + 10;
            if ((uVar4 & 2) == 0) {
              pUVar9 = *(UnicodeString **)(param_1 + 0x18);
            }
          }
          else {
            iVar10 = iVar8;
            if (iVar5 <= iVar8) {
              iVar10 = iVar5;
            }
            iVar8 = iVar8 - iVar10;
            lVar7 = (long)iVar10 * 2;
            if ((uVar4 & 0x11) == 0) goto LAB_0010050c;
LAB_00100559:
            pUVar9 = (UnicodeString *)0x0;
          }
          iVar5 = icu_76_godot::UnicodeSet::span
                            (*(undefined8 *)(this + 0x10),pUVar9 + lVar7,iVar8,iVar11);
          iVar5 = iVar10 + iVar5;
          if (iVar11 == 0) {
            iVar11 = 2;
          }
          else {
            plVar1 = *(long **)(this + 8);
            pcVar2 = *(code **)(*plVar1 + 0x58);
            icu_76_godot::UnicodeString::tempSubString((int)local_88,(int)param_1);
            cVar3 = (*pcVar2)(plVar1,local_88,param_2);
            if ((cVar3 == '\0') || (0 < *(int *)param_2)) {
              icu_76_godot::UnicodeString::~UnicodeString(local_88);
              goto LAB_00100488;
            }
            icu_76_godot::UnicodeString::~UnicodeString(local_88);
            iVar11 = 0;
          }
          uVar4 = *(ushort *)(param_1 + 8);
          if (-1 < (short)uVar4) goto LAB_001004e0;
LAB_0010053d:
          iVar8 = *(int *)(param_1 + 0xc);
          if (iVar8 <= iVar5) break;
        } while( true );
      }
      uVar6 = 1;
      goto LAB_0010048a;
    }
    *(undefined4 *)param_2 = 1;
  }
LAB_00100488:
  uVar6 = 0;
LAB_0010048a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::FilteredNormalizer2::normalize(icu_76_godot::UnicodeString const&,
   icu_76_godot::UnicodeString&, USetSpanCondition, UErrorCode&) const */

UnicodeString * __thiscall
icu_76_godot::FilteredNormalizer2::normalize
          (FilteredNormalizer2 *this,long param_1,UnicodeString *param_2,int param_4,int *param_5)

{
  ushort uVar1;
  long *plVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long in_FS_OFFSET;
  code *local_c8;
  undefined2 local_c0;
  UnicodeString local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = 2;
  local_c8 = icu_76_godot::UnicodeString::setToBogus;
  iVar4 = 0;
  while( true ) {
    uVar1 = *(ushort *)(param_1 + 8);
    if ((short)uVar1 < 0) {
      iVar6 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar6 = (int)((short)uVar1 >> 5);
    }
    if (iVar6 <= iVar4) break;
    if (iVar4 < 0) {
      lVar5 = 0;
      iVar8 = 0;
      if ((uVar1 & 0x11) == 0) goto LAB_0010068c;
LAB_00100709:
      lVar7 = 0;
    }
    else {
      iVar8 = iVar6;
      if (iVar4 <= iVar6) {
        iVar8 = iVar4;
      }
      iVar6 = iVar6 - iVar8;
      lVar5 = (long)iVar8 * 2;
      if ((uVar1 & 0x11) != 0) goto LAB_00100709;
LAB_0010068c:
      lVar7 = param_1 + 10;
      if ((uVar1 & 2) == 0) {
        lVar7 = *(long *)(param_1 + 0x18);
      }
    }
    iVar6 = icu_76_godot::UnicodeSet::span(*(undefined8 *)(this + 0x10),lVar7 + lVar5,iVar6,param_4)
    ;
    iVar8 = iVar8 + iVar6;
    if (param_4 == 0) {
      if (iVar8 != iVar4) {
        icu_76_godot::UnicodeString::doAppend(param_2,(int)param_1,iVar4);
      }
      param_4 = 2;
      iVar4 = iVar8;
    }
    else {
      if (iVar8 != iVar4) {
        plVar2 = *(long **)(this + 8);
        pcVar3 = *(code **)(*plVar2 + 0x18);
        icu_76_godot::UnicodeString::tempSubString((int)local_88,(int)param_1);
        iVar4 = (*pcVar3)(plVar2,local_88,(UnicodeString *)&local_c8,param_5);
        icu_76_godot::UnicodeString::doAppend(param_2,iVar4,0);
        icu_76_godot::UnicodeString::~UnicodeString(local_88);
        if (0 < *param_5) break;
      }
      param_4 = 0;
      iVar4 = iVar8;
    }
  }
  icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_c8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}



/* icu_76_godot::FilteredNormalizer2::normalize(icu_76_godot::UnicodeString const&,
   icu_76_godot::UnicodeString&, UErrorCode&) const */

UnicodeString * __thiscall
icu_76_godot::FilteredNormalizer2::normalize
          (FilteredNormalizer2 *this,UnicodeString *param_1,UnicodeString *param_2,
          UErrorCode *param_3)

{
  ushort uVar1;
  UnicodeString *pUVar2;
  
  if (*(int *)param_3 < 1) {
    if (((byte)param_1[8] & 1) == 0) {
      if (param_1 != param_2) {
        uVar1 = *(ushort *)(param_2 + 8) & 0x1f;
        if ((*(ushort *)(param_2 + 8) & 1) != 0) {
          uVar1 = 2;
        }
        *(ushort *)(param_2 + 8) = uVar1;
        pUVar2 = (UnicodeString *)normalize(this,param_1,param_2,2);
        return pUVar2;
      }
      *(undefined4 *)param_3 = 1;
      return param_2;
    }
    *(undefined4 *)param_3 = 1;
  }
  icu_76_godot::UnicodeString::setToBogus();
  return param_2;
}



/* icu_76_godot::FilteredNormalizer2::normalizeUTF8(unsigned int, char const*, int,
   icu_76_godot::ByteSink&, icu_76_godot::Edits*, USetSpanCondition, UErrorCode&) const */

void __thiscall
icu_76_godot::FilteredNormalizer2::normalizeUTF8
          (FilteredNormalizer2 *this,uint param_1,long param_2,int param_3,long *param_4,
          long param_5,int param_7,int *param_8)

{
  int iVar1;
  
  if (0 < param_3) {
LAB_00100870:
    do {
      iVar1 = icu_76_godot::UnicodeSet::spanUTF8
                        (*(undefined8 *)(this + 0x10),param_2,param_3,param_7);
      if (param_7 == 0) {
        if (iVar1 == 0) {
          param_7 = 2;
          goto LAB_00100870;
        }
        if (param_5 != 0) {
          icu_76_godot::Edits::addUnchanged((int)param_5);
        }
        if ((param_1 & 0x4000) == 0) {
          (**(code **)(*param_4 + 0x10))(param_4,param_2,iVar1);
        }
        param_7 = 2;
      }
      else {
        if (iVar1 == 0) {
          param_7 = 0;
          goto LAB_00100870;
        }
        (**(code **)(**(long **)(this + 8) + 0x20))
                  (*(long **)(this + 8),param_1,param_2,iVar1,param_4,param_5,param_8);
        if (0 < *param_8) {
          return;
        }
        param_7 = 0;
      }
      param_3 = param_3 - iVar1;
      param_2 = param_2 + iVar1;
    } while (0 < param_3);
  }
  return;
}



/* icu_76_godot::FilteredNormalizer2::normalizeUTF8(unsigned int, icu_76_godot::StringPiece,
   icu_76_godot::ByteSink&, icu_76_godot::Edits*, UErrorCode&) const */

void icu_76_godot::FilteredNormalizer2::normalizeUTF8
               (FilteredNormalizer2 *param_1,uint param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6,int *param_7)

{
  if (*param_7 < 1) {
    if ((param_6 != 0) && ((param_2 & 0x2000) == 0)) {
      icu_76_godot::Edits::reset();
    }
    normalizeUTF8(param_1,param_2 | 0x2000,param_3,param_4,param_5,param_6,2,param_7);
  }
  return;
}



/* icu_76_godot::FilteredNormalizer2::normalizeSecondAndAppend(icu_76_godot::UnicodeString&,
   icu_76_godot::UnicodeString const&, signed char, UErrorCode&) const */

UnicodeString * __thiscall
icu_76_godot::FilteredNormalizer2::normalizeSecondAndAppend
          (FilteredNormalizer2 *this,UnicodeString *param_1,UnicodeString *param_2,char param_4,
          int *param_5)

{
  ushort uVar1;
  long *plVar2;
  int iVar3;
  UnicodeString *pUVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  long in_FS_OFFSET;
  UnicodeString local_c8 [64];
  UnicodeString local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_5 < 1) {
    if ((((*(ushort *)(param_1 + 8) & 1) == 0) &&
        (uVar1 = *(ushort *)(param_2 + 8), (uVar1 & 1) == 0)) && (param_1 != param_2)) {
      if (*(ushort *)(param_1 + 8) >> 5 == 0) {
        if (param_4 == '\0') {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            pUVar4 = (UnicodeString *)icu_76_godot::UnicodeString::operator=(param_1,param_2);
            return pUVar4;
          }
        }
        else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100aa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pUVar4 = (UnicodeString *)
                   (**(code **)(*(long *)this + 0x18))(this,param_2,param_1,param_5);
          return pUVar4;
        }
        goto LAB_00100dfa;
      }
      if ((short)uVar1 < 0) {
        iVar6 = *(int *)(param_2 + 0xc);
      }
      else {
        iVar6 = (int)((short)uVar1 >> 5);
      }
      iVar7 = 0;
      if (iVar6 < 1) {
        iVar7 = iVar6;
      }
      if ((uVar1 & 0x11) == 0) {
        pUVar4 = param_2 + 10;
        if ((uVar1 & 2) == 0) {
          pUVar4 = *(UnicodeString **)(param_2 + 0x18);
        }
      }
      else {
        pUVar4 = (UnicodeString *)0x0;
      }
      iVar6 = icu_76_godot::UnicodeSet::span
                        (*(undefined8 *)(this + 0x10),pUVar4 + (long)iVar7 * 2,iVar6 - iVar7,2);
      if (iVar7 + iVar6 != 0) {
        icu_76_godot::UnicodeString::tempSubString((int)local_c8,(int)param_2);
        uVar1 = *(ushort *)(param_1 + 8);
        if ((short)uVar1 < 0) {
          iVar3 = *(int *)(param_1 + 0xc);
        }
        else {
          iVar3 = (int)((short)uVar1 >> 5);
        }
        if ((uVar1 & 0x11) == 0) {
          pUVar4 = param_1 + 10;
          if ((uVar1 & 2) == 0) {
            pUVar4 = *(UnicodeString **)(param_1 + 0x18);
          }
        }
        else {
          pUVar4 = (UnicodeString *)0x0;
        }
        iVar3 = icu_76_godot::UnicodeSet::spanBack(*(undefined8 *)(this + 0x10),pUVar4,iVar3,2);
        if (iVar3 == 0) {
          plVar2 = *(long **)(this + 8);
          if (param_4 == '\0') {
            pcVar5 = *(code **)(*plVar2 + 0x30);
            if (pcVar5 != append) goto LAB_00100dc0;
            normalizeSecondAndAppend((FilteredNormalizer2 *)plVar2,param_1,local_c8,0,param_5);
          }
          else {
            pcVar5 = *(code **)(*plVar2 + 0x28);
            if (pcVar5 == normalizeSecondAndAppend) {
              normalizeSecondAndAppend((FilteredNormalizer2 *)plVar2,param_1,local_c8,1,param_5);
            }
            else {
LAB_00100dc0:
              (*pcVar5)(plVar2,param_1,local_c8,param_5);
            }
          }
        }
        else {
          icu_76_godot::UnicodeString::UnicodeString(local_88,param_1,iVar3,0x7fffffff);
          plVar2 = *(long **)(this + 8);
          if (param_4 == '\0') {
            pcVar5 = *(code **)(*plVar2 + 0x30);
            if (pcVar5 != append) goto LAB_00100de1;
            normalizeSecondAndAppend((FilteredNormalizer2 *)plVar2,local_88,local_c8,0);
          }
          else {
            pcVar5 = *(code **)(*plVar2 + 0x28);
            if (pcVar5 == normalizeSecondAndAppend) {
              normalizeSecondAndAppend((FilteredNormalizer2 *)plVar2,local_88,local_c8,1);
            }
            else {
LAB_00100de1:
              (*pcVar5)(plVar2,local_88,local_c8,param_5);
            }
          }
          icu_76_godot::UnicodeString::doReplace
                    ((int)param_1,iVar3,(UnicodeString *)0x7fffffff,(int)local_88,0);
          icu_76_godot::UnicodeString::~UnicodeString(local_88);
        }
        icu_76_godot::UnicodeString::~UnicodeString(local_c8);
      }
      if (*(short *)(param_2 + 8) < 0) {
        iVar3 = *(int *)(param_2 + 0xc);
      }
      else {
        iVar3 = (int)(*(short *)(param_2 + 8) >> 5);
      }
      if (iVar7 + iVar6 < iVar3) {
        iVar6 = (int)local_88;
        icu_76_godot::UnicodeString::tempSubString(iVar6,(int)param_2);
        if (param_4 == '\0') {
          icu_76_godot::UnicodeString::doAppend(param_1,iVar6,0);
        }
        else {
          normalize(this,local_88,param_1,0,param_5);
        }
        icu_76_godot::UnicodeString::~UnicodeString(local_88);
      }
    }
    else {
      *param_5 = 1;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
LAB_00100dfa:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::FilteredNormalizer2::normalizeSecondAndAppend(icu_76_godot::UnicodeString&,
   icu_76_godot::UnicodeString const&, UErrorCode&) const */

void icu_76_godot::FilteredNormalizer2::normalizeSecondAndAppend
               (UnicodeString *param_1,UnicodeString *param_2,UErrorCode *param_3)

{
  normalizeSecondAndAppend();
  return;
}



/* icu_76_godot::FilteredNormalizer2::append(icu_76_godot::UnicodeString&,
   icu_76_godot::UnicodeString const&, UErrorCode&) const */

void icu_76_godot::FilteredNormalizer2::append
               (UnicodeString *param_1,UnicodeString *param_2,UErrorCode *param_3)

{
  normalizeSecondAndAppend();
  return;
}



undefined8 * unorm2_openFiltered_76_godot(undefined8 param_1,ulong param_2,int *param_3)

{
  undefined8 *puVar1;
  
  if (*param_3 < 1) {
    if (param_2 == 0) {
      *param_3 = 1;
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar1 = (undefined8 *)icu_76_godot::UMemory::operator_new((UMemory *)0x18,param_2);
      if (puVar1 == (undefined8 *)0x0) {
        *param_3 = 7;
        puVar1 = (undefined8 *)0x0;
      }
      else {
        puVar1[1] = param_1;
        *puVar1 = &PTR__FilteredNormalizer2_001010f0;
        puVar1[2] = param_2;
      }
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



/* icu_76_godot::FilteredNormalizer2::getDecomposition(int, icu_76_godot::UnicodeString&) const */

char __thiscall
icu_76_godot::FilteredNormalizer2::getDecomposition
          (FilteredNormalizer2 *this,int param_1,UnicodeString *param_2)

{
  char cVar1;
  
  cVar1 = icu_76_godot::UnicodeSet::contains((int)*(undefined8 *)(this + 0x10));
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(**(long **)(this + 8) + 0x38))(*(long **)(this + 8),param_1,param_2);
    cVar1 = cVar1 != '\0';
  }
  return cVar1;
}



/* icu_76_godot::FilteredNormalizer2::getRawDecomposition(int, icu_76_godot::UnicodeString&) const
    */

char __thiscall
icu_76_godot::FilteredNormalizer2::getRawDecomposition
          (FilteredNormalizer2 *this,int param_1,UnicodeString *param_2)

{
  char cVar1;
  
  cVar1 = icu_76_godot::UnicodeSet::contains((int)*(undefined8 *)(this + 0x10));
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(**(long **)(this + 8) + 0x40))(*(long **)(this + 8),param_1,param_2);
    cVar1 = cVar1 != '\0';
  }
  return cVar1;
}



/* icu_76_godot::FilteredNormalizer2::composePair(int, int) const */

undefined8 __thiscall
icu_76_godot::FilteredNormalizer2::composePair(FilteredNormalizer2 *this,int param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = icu_76_godot::UnicodeSet::contains((int)*(undefined8 *)(this + 0x10));
  if (cVar1 != '\0') {
    cVar1 = icu_76_godot::UnicodeSet::contains((int)*(undefined8 *)(this + 0x10));
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00100f61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(**(long **)(this + 8) + 0x48))(*(long **)(this + 8),param_1,param_2);
      return uVar2;
    }
  }
  return 0xffffffff;
}



/* icu_76_godot::FilteredNormalizer2::getCombiningClass(int) const */

undefined8 __thiscall
icu_76_godot::FilteredNormalizer2::getCombiningClass(FilteredNormalizer2 *this,int param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = icu_76_godot::UnicodeSet::contains((int)*(undefined8 *)(this + 0x10));
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00100faf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(this + 8) + 0x50))(*(long **)(this + 8),param_1);
    return uVar2;
  }
  return 0;
}



/* icu_76_godot::FilteredNormalizer2::hasBoundaryBefore(int) const */

bool __thiscall
icu_76_godot::FilteredNormalizer2::hasBoundaryBefore(FilteredNormalizer2 *this,int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = icu_76_godot::UnicodeSet::contains((int)*(undefined8 *)(this + 0x10));
  bVar2 = true;
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(**(long **)(this + 8) + 0x78))(*(long **)(this + 8),param_1);
    bVar2 = cVar1 != '\0';
  }
  return bVar2;
}



/* icu_76_godot::FilteredNormalizer2::hasBoundaryAfter(int) const */

bool __thiscall
icu_76_godot::FilteredNormalizer2::hasBoundaryAfter(FilteredNormalizer2 *this,int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = icu_76_godot::UnicodeSet::contains((int)*(undefined8 *)(this + 0x10));
  bVar2 = true;
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(**(long **)(this + 8) + 0x80))(*(long **)(this + 8),param_1);
    bVar2 = cVar1 != '\0';
  }
  return bVar2;
}



/* icu_76_godot::FilteredNormalizer2::isInert(int) const */

bool __thiscall icu_76_godot::FilteredNormalizer2::isInert(FilteredNormalizer2 *this,int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = icu_76_godot::UnicodeSet::contains((int)*(undefined8 *)(this + 0x10));
  bVar2 = true;
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(**(long **)(this + 8) + 0x88))(*(long **)(this + 8),param_1);
    bVar2 = cVar1 != '\0';
  }
  return bVar2;
}


