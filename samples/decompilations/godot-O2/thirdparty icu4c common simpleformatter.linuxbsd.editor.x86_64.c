
/* icu_76_godot::SimpleFormatter::format(char16_t const*, int, icu_76_godot::UnicodeString const*
   const*, icu_76_godot::UnicodeString&, icu_76_godot::UnicodeString const*, signed char, int*, int,
   UErrorCode&) [clone .part.0] */

void icu_76_godot::SimpleFormatter::format
               (long param_1,int param_2,long param_3,UnicodeString *param_4,int param_5,
               char param_6,void *param_7,uint param_8,undefined4 *param_9)

{
  ushort uVar1;
  UnicodeString *pUVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  
  if (0 < (int)param_8) {
    memset(param_7,0xff,(ulong)param_8 << 2);
  }
  if (1 < param_2) {
    iVar3 = 1;
    do {
      iVar5 = iVar3 + 1;
      uVar1 = *(ushort *)(param_1 + (long)iVar3 * 2);
      uVar4 = (ulong)uVar1;
      if (uVar1 < 0x100) {
        pUVar2 = *(UnicodeString **)(param_3 + uVar4 * 8);
        if (pUVar2 == (UnicodeString *)0x0) {
LAB_001001b0:
          *param_9 = 1;
          return;
        }
        iVar3 = iVar5;
        if (pUVar2 == param_4) {
          if (param_6 != '\0') goto LAB_001001b0;
          if (iVar5 == 2) {
            if ((int)(uint)uVar1 < (int)param_8) {
              *(undefined4 *)((long)param_7 + uVar4 * 4) = 0;
            }
            iVar3 = 2;
          }
          else {
            if ((int)(uint)uVar1 < (int)param_8) {
              if (*(short *)(param_4 + 8) < 0) {
                iVar5 = *(int *)(param_4 + 0xc);
              }
              else {
                iVar5 = (int)(*(short *)(param_4 + 8) >> 5);
              }
              *(int *)((long)param_7 + uVar4 * 4) = iVar5;
            }
            icu_76_godot::UnicodeString::doAppend(param_4,param_5,0);
          }
        }
        else {
          if ((int)(uint)uVar1 < (int)param_8) {
            if (*(short *)(param_4 + 8) < 0) {
              iVar5 = *(int *)(param_4 + 0xc);
            }
            else {
              iVar5 = (int)(*(short *)(param_4 + 8) >> 5);
            }
            *(int *)((long)param_7 + uVar4 * 4) = iVar5;
          }
          icu_76_godot::UnicodeString::doAppend(param_4,(int)pUVar2,0);
        }
      }
      else {
        icu_76_godot::UnicodeString::doAppend((wchar16 *)param_4,(int)param_1 + 2 + iVar3 * 2,0);
        iVar3 = iVar5 + (uVar1 - 0x100);
      }
    } while (iVar3 < param_2);
  }
  return;
}



/* icu_76_godot::SimpleFormatter::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::SimpleFormatter const&) */

SimpleFormatter * __thiscall
icu_76_godot::SimpleFormatter::operator=(SimpleFormatter *this,SimpleFormatter *param_1)

{
  if (this != param_1) {
    icu_76_godot::UnicodeString::operator=
              ((UnicodeString *)(this + 8),(UnicodeString *)(param_1 + 8));
  }
  return this;
}



/* icu_76_godot::SimpleFormatter::~SimpleFormatter() */

void __thiscall icu_76_godot::SimpleFormatter::~SimpleFormatter(SimpleFormatter *this)

{
  icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)(this + 8));
  return;
}



/* icu_76_godot::SimpleFormatter::applyPatternMinMaxArguments(icu_76_godot::UnicodeString const&,
   int, int, UErrorCode&) */

undefined8 __thiscall
icu_76_godot::SimpleFormatter::applyPatternMinMaxArguments
          (SimpleFormatter *this,UnicodeString *param_1,int param_2,int param_3,UErrorCode *param_4)

{
  SimpleFormatter *pSVar1;
  ushort uVar2;
  short sVar3;
  long lVar4;
  bool bVar5;
  short sVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  UnicodeString *pUVar15;
  int iVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  uint local_5c;
  short local_42;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_4 < 1) {
    uVar2 = *(ushort *)(param_1 + 8);
    if ((uVar2 & 0x11) == 0) {
      pUVar15 = param_1 + 10;
      if ((uVar2 & 2) == 0) {
        pUVar15 = *(UnicodeString **)(param_1 + 0x18);
      }
    }
    else {
      pUVar15 = (UnicodeString *)0x0;
    }
    if ((short)uVar2 < 0) {
      iVar13 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar13 = (int)((short)uVar2 >> 5);
    }
    local_42 = 0;
    pSVar1 = this + 8;
    icu_76_godot::UnicodeString::unBogus();
    if (*(short *)(this + 0x10) < 0) {
      uVar10 = *(uint *)(this + 0x14);
    }
    else {
      uVar10 = (uint)(*(short *)(this + 0x10) >> 5);
    }
    iVar8 = (int)&local_42;
    iVar12 = (int)pSVar1;
    icu_76_godot::UnicodeString::doReplace(iVar12,0,(wchar16 *)(ulong)uVar10,iVar8,0);
    if (iVar13 < 1) {
      iVar13 = 0;
    }
    else {
      local_5c = 0xffffffff;
      bVar5 = false;
      iVar11 = 0;
      iVar14 = 0;
LAB_001002f7:
      do {
        lVar9 = (long)iVar14;
        iVar16 = iVar14 + 1;
        sVar6 = *(short *)(pUVar15 + lVar9 * 2);
        lVar4 = lVar9 * 2;
        if (sVar6 == 0x27) {
          if (iVar16 < iVar13) {
            sVar3 = *(short *)(pUVar15 + lVar4 + 2);
            if (sVar3 == 0x27) {
              iVar16 = iVar14 + 2;
            }
            else {
              if (bVar5) {
                bVar5 = false;
                iVar14 = iVar16;
                goto LAB_001002f7;
              }
              if ((sVar3 - 0x7bU & 0xfffd) == 0) {
                iVar16 = iVar14 + 2;
                bVar5 = true;
                sVar6 = sVar3;
              }
            }
          }
          else if (bVar5) break;
joined_r0x0010046d:
          if (iVar11 == 0) {
            local_42 = -1;
            icu_76_godot::UnicodeString::doAppend((wchar16 *)pSVar1,iVar8,0);
            iVar11 = 1;
            local_42 = sVar6;
            icu_76_godot::UnicodeString::doAppend((wchar16 *)pSVar1,iVar8,0);
          }
          else {
            iVar11 = iVar11 + 1;
            local_42 = sVar6;
            icu_76_godot::UnicodeString::doAppend((wchar16 *)pSVar1,iVar8,0);
            if (iVar11 == 0xfeff) {
              iVar11 = 0;
            }
          }
        }
        else {
          if ((bVar5) || (sVar6 != 0x7b)) goto joined_r0x0010046d;
          if (0 < iVar11) {
            if (*(short *)(this + 0x10) < 0) {
              sVar6 = (short)*(undefined4 *)(this + 0x14);
            }
            else {
              sVar6 = *(short *)(this + 0x10) >> 5;
            }
            sVar3 = (short)iVar11;
            iVar11 = 0;
            icu_76_godot::UnicodeString::setCharAt(iVar12,(sVar6 - sVar3) + L'\xffff');
          }
          if (((iVar14 + 2 < iVar13) &&
              (uVar10 = *(ushort *)(pUVar15 + lVar4 + 2) - 0x30, uVar10 < 10)) &&
             (*(short *)(pUVar15 + lVar4 + 4) == 0x7d)) {
            uVar17 = (ulong)(iVar14 + 3);
          }
          else {
            if ((iVar13 <= iVar16) || (8 < (ushort)(*(ushort *)(pUVar15 + lVar4 + 2) - 0x31)))
            goto LAB_001003aa;
            uVar10 = *(ushort *)(pUVar15 + lVar4 + 2) - 0x30;
            uVar17 = (ulong)(iVar14 + 3);
            while( true ) {
              if (lVar9 + 3 + (ulong)(uint)((iVar13 + -2) - iVar14) == uVar17) goto LAB_001003aa;
              uVar2 = *(ushort *)(pUVar15 + uVar17 * 2 + -2);
              if (9 < (ushort)(uVar2 - 0x30)) break;
              uVar17 = uVar17 + 1;
              uVar10 = (uVar2 - 0x30) + uVar10 * 10;
              if (0xff < (int)uVar10) goto LAB_001003aa;
            }
            if (((int)uVar10 < 0) || (uVar2 != 0x7d)) goto LAB_001003aa;
          }
          iVar16 = (int)uVar17;
          local_42 = (short)uVar10;
          if ((int)local_5c < (int)uVar10) {
            local_5c = uVar10;
          }
          icu_76_godot::UnicodeString::doAppend((wchar16 *)pSVar1,iVar8,0);
          bVar5 = false;
        }
        iVar14 = iVar16;
      } while (iVar16 < iVar13);
      if (0 < iVar11) {
        if (*(short *)(this + 0x10) < 0) {
          sVar6 = (short)*(undefined4 *)(this + 0x14);
        }
        else {
          sVar6 = *(short *)(this + 0x10) >> 5;
        }
        icu_76_godot::UnicodeString::setCharAt(iVar12,(sVar6 - (short)iVar11) + L'\xffff');
      }
      iVar13 = local_5c + 1;
    }
    if ((param_2 <= iVar13) && (iVar13 <= param_3)) {
      icu_76_godot::UnicodeString::setCharAt(iVar12,L'\0');
      uVar7 = 1;
      goto LAB_001003b2;
    }
LAB_001003aa:
    *(undefined4 *)param_4 = 1;
  }
  uVar7 = 0;
LAB_001003b2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



/* icu_76_godot::SimpleFormatter::format(icu_76_godot::UnicodeString const&,
   icu_76_godot::UnicodeString&, UErrorCode&) const */

UnicodeString * __thiscall
icu_76_godot::SimpleFormatter::format
          (SimpleFormatter *this,UnicodeString *param_1,UnicodeString *param_2,UErrorCode *param_3)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  SimpleFormatter *pSVar4;
  long in_FS_OFFSET;
  UnicodeString *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = param_1;
  if (0 < *(int *)param_3) goto LAB_001006c7;
  uVar1 = *(ushort *)(this + 0x10);
  if ((short)uVar1 < 0) {
    iVar3 = *(int *)(this + 0x14);
  }
  else {
    iVar3 = (int)((short)uVar1 >> 5);
  }
  if ((uVar1 & 0x11) == 0) {
    if ((uVar1 & 2) == 0) {
      pSVar4 = *(SimpleFormatter **)(this + 0x20);
      if ((iVar3 != 0) && (1 < *(ushort *)pSVar4)) goto LAB_001006c1;
    }
    else {
      if ((iVar3 != 0) && (1 < *(ushort *)(this + 0x12))) {
LAB_001006c1:
        *(undefined4 *)param_3 = 1;
        goto LAB_001006c7;
      }
      pSVar4 = this + 0x12;
    }
  }
  else {
    pSVar4 = (SimpleFormatter *)0x0;
    if (iVar3 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  format(pSVar4,iVar3,&local_18,param_2,0,1,0,0,param_3);
LAB_001006c7:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}



/* icu_76_godot::SimpleFormatter::format(icu_76_godot::UnicodeString const&,
   icu_76_godot::UnicodeString const&, icu_76_godot::UnicodeString&, UErrorCode&) const */

UnicodeString * __thiscall
icu_76_godot::SimpleFormatter::format
          (SimpleFormatter *this,UnicodeString *param_1,UnicodeString *param_2,
          UnicodeString *param_3,UErrorCode *param_4)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  SimpleFormatter *pSVar4;
  long in_FS_OFFSET;
  UnicodeString *local_28;
  UnicodeString *local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_1;
  local_20 = param_2;
  if (0 < *(int *)param_4) goto LAB_001007aa;
  uVar1 = *(ushort *)(this + 0x10);
  if ((short)uVar1 < 0) {
    iVar3 = *(int *)(this + 0x14);
  }
  else {
    iVar3 = (int)((short)uVar1 >> 5);
  }
  if ((uVar1 & 0x11) == 0) {
    if ((uVar1 & 2) == 0) {
      pSVar4 = *(SimpleFormatter **)(this + 0x20);
      if ((iVar3 != 0) && (2 < *(ushort *)pSVar4)) goto LAB_001007a3;
    }
    else {
      if ((iVar3 != 0) && (2 < *(ushort *)(this + 0x12))) {
LAB_001007a3:
        *(undefined4 *)param_4 = 1;
        goto LAB_001007aa;
      }
      pSVar4 = this + 0x12;
    }
  }
  else {
    pSVar4 = (SimpleFormatter *)0x0;
    if (iVar3 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  format(pSVar4,iVar3,&local_28,param_3,0,1,0,0,param_4);
LAB_001007aa:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_3;
}



/* icu_76_godot::SimpleFormatter::format(icu_76_godot::UnicodeString const&,
   icu_76_godot::UnicodeString const&, icu_76_godot::UnicodeString const&,
   icu_76_godot::UnicodeString&, UErrorCode&) const */

UnicodeString * __thiscall
icu_76_godot::SimpleFormatter::format
          (SimpleFormatter *this,UnicodeString *param_1,UnicodeString *param_2,
          UnicodeString *param_3,UnicodeString *param_4,UErrorCode *param_5)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  SimpleFormatter *pSVar4;
  long in_FS_OFFSET;
  UnicodeString *local_28;
  UnicodeString *local_20;
  UnicodeString *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_1;
  local_20 = param_2;
  local_18 = param_3;
  if (0 < *(int *)param_5) goto LAB_00100894;
  uVar1 = *(ushort *)(this + 0x10);
  if ((short)uVar1 < 0) {
    iVar3 = *(int *)(this + 0x14);
  }
  else {
    iVar3 = (int)((short)uVar1 >> 5);
  }
  if ((uVar1 & 0x11) == 0) {
    if ((uVar1 & 2) == 0) {
      pSVar4 = *(SimpleFormatter **)(this + 0x20);
      if ((iVar3 != 0) && (3 < *(ushort *)pSVar4)) goto LAB_0010088d;
    }
    else {
      if ((iVar3 != 0) && (3 < *(ushort *)(this + 0x12))) {
LAB_0010088d:
        *(undefined4 *)param_5 = 1;
        goto LAB_00100894;
      }
      pSVar4 = this + 0x12;
    }
  }
  else {
    pSVar4 = (SimpleFormatter *)0x0;
    if (iVar3 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  format(pSVar4,iVar3,&local_28,param_4,0,1,0,0,param_5);
LAB_00100894:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}



/* icu_76_godot::SimpleFormatter::formatAndAppend(icu_76_godot::UnicodeString const* const*, int,
   icu_76_godot::UnicodeString&, int*, int, UErrorCode&) const */

UnicodeString * __thiscall
icu_76_godot::SimpleFormatter::formatAndAppend
          (SimpleFormatter *this,UnicodeString **param_1,int param_2,UnicodeString *param_3,
          int *param_4,int param_5,UErrorCode *param_6)

{
  ushort uVar1;
  code *pcVar2;
  SimpleFormatter *pSVar3;
  undefined4 in_register_0000008c;
  int iVar4;
  
  if (0 < *(int *)param_6) {
    return param_3;
  }
  if ((((param_2 | param_5) < 0) || ((param_1 == (UnicodeString **)0x0 && (param_2 != 0)))) ||
     ((param_4 == (int *)0x0 && (param_5 != 0)))) goto LAB_0010094b;
  uVar1 = *(ushort *)(this + 0x10);
  if ((short)uVar1 < 0) {
    iVar4 = *(int *)(this + 0x14);
  }
  else {
    iVar4 = (int)((short)uVar1 >> 5);
  }
  if ((uVar1 & 0x11) == 0) {
    if ((uVar1 & 2) == 0) {
      pSVar3 = *(SimpleFormatter **)(this + 0x20);
      if ((iVar4 == 0) || ((int)(uint)*(ushort *)pSVar3 <= param_2)) goto LAB_001009b0;
    }
    else if ((iVar4 == 0) || ((int)(uint)*(ushort *)(this + 0x12) <= param_2)) {
      pSVar3 = this + 0x12;
      goto LAB_001009b0;
    }
LAB_0010094b:
    *(undefined4 *)param_6 = 1;
  }
  else {
    if (iVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pSVar3 = (SimpleFormatter *)0x0;
LAB_001009b0:
    format(pSVar3,iVar4,param_1,param_3,0,1,param_4,CONCAT44(in_register_0000008c,param_5),param_6);
  }
  return param_3;
}



/* icu_76_godot::SimpleFormatter::formatAndReplace(icu_76_godot::UnicodeString const* const*, int,
   icu_76_godot::UnicodeString&, int*, int, UErrorCode&) const */

UnicodeString * __thiscall
icu_76_godot::SimpleFormatter::formatAndReplace
          (SimpleFormatter *this,UnicodeString **param_1,int param_2,UnicodeString *param_3,
          int *param_4,int param_5,UErrorCode *param_6)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 in_register_0000008c;
  ulong uVar5;
  uint uVar6;
  SimpleFormatter *pSVar7;
  int iVar8;
  long in_FS_OFFSET;
  undefined8 local_88;
  ushort local_80;
  long local_40;
  
  uVar5 = CONCAT44(in_register_0000008c,param_5);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < *(int *)param_6) goto LAB_00100a63;
  if ((((param_2 | param_5) < 0) || ((param_2 != 0 && (param_1 == (UnicodeString **)0x0)))) ||
     ((param_5 != 0 && (param_4 == (int *)0x0)))) {
LAB_00100a5c:
    *(undefined4 *)param_6 = 1;
    goto LAB_00100a63;
  }
  uVar3 = *(ushort *)(this + 0x10);
  if ((uVar3 & 0x11) == 0) {
    pSVar7 = this + 0x12;
    if ((uVar3 & 2) == 0) {
      pSVar7 = *(SimpleFormatter **)(this + 0x20);
    }
  }
  else {
    pSVar7 = (SimpleFormatter *)0x0;
  }
  if ((short)uVar3 < 0) {
    iVar8 = *(int *)(this + 0x14);
  }
  else {
    iVar8 = (int)((short)uVar3 >> 5);
  }
  if (iVar8 == 0) {
    local_88 = 0x102058;
    local_80 = 2;
    goto LAB_00100bbb;
  }
  if (param_2 < (int)(uint)*(ushort *)pSVar7) goto LAB_00100a5c;
  local_80 = 2;
  local_88 = 0x102058;
  if (*(ushort *)pSVar7 == 0) {
LAB_00100bbb:
    uVar3 = 2;
    if ((*(ushort *)(param_3 + 8) & 1) == 0) {
      uVar3 = *(ushort *)(param_3 + 8) & 0x1f;
    }
    *(ushort *)(param_3 + 8) = uVar3;
  }
  else {
    iVar4 = 1;
    uVar6 = 0xffffffff;
    if (iVar8 < 2) goto LAB_00100bbb;
    do {
      iVar1 = iVar4 + 1;
      uVar3 = *(ushort *)(pSVar7 + (long)iVar4 * 2);
      iVar4 = iVar4 + -0xff + (uint)uVar3;
      uVar2 = uVar6;
      if ((((uVar3 < 0x100) && (iVar4 = iVar1, param_1[uVar3] == param_3)) &&
          (uVar2 = (uint)uVar3, iVar1 != 2)) &&
         ((uVar2 = uVar6, local_80 >> 5 == 0 && (*(ushort *)(param_3 + 8) >> 5 != 0)))) {
        icu_76_godot::UnicodeString::operator=((UnicodeString *)&local_88,param_3);
        uVar5 = uVar5 & 0xffffffff;
      }
      uVar6 = uVar2;
    } while (iVar4 < iVar8);
    if ((int)uVar6 < 0) goto LAB_00100bbb;
  }
  if (*(int *)param_6 < 1) {
    format(pSVar7,iVar8,param_1,param_3,(UnicodeString *)&local_88,0,param_4,uVar5,param_6);
  }
  icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_88);
LAB_00100a63:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_3;
}



/* icu_76_godot::SimpleFormatter::getTextWithNoArguments(char16_t const*, int, int*, int) */

SimpleFormatter * __thiscall
icu_76_godot::SimpleFormatter::getTextWithNoArguments
          (SimpleFormatter *this,wchar16 *param_1,int param_2,int *param_3,int param_4)

{
  wchar16 wVar1;
  int iVar2;
  int iVar3;
  
  if (0 < param_4) {
    memset(param_3,0xff,(ulong)(uint)param_4 << 2);
  }
  if (param_2 == 0) {
    icu_76_godot::UnicodeString::UnicodeString((UnicodeString *)this,-1,0,0);
  }
  else {
    icu_76_godot::UnicodeString::UnicodeString
              ((UnicodeString *)this,(param_2 + -1) - (uint)(ushort)*param_1,0,0);
    if (1 < param_2) {
      iVar3 = 1;
      do {
        iVar2 = iVar3 + 1;
        wVar1 = param_1[iVar3];
        if ((ushort)wVar1 < 0x101) {
          if ((int)(uint)(ushort)wVar1 < param_4) {
            if (*(short *)(this + 8) < 0) {
              param_3[(ushort)wVar1] = *(int *)(this + 0xc);
            }
            else {
              param_3[(ushort)wVar1] = (int)(*(short *)(this + 8) >> 5);
            }
          }
        }
        else {
          icu_76_godot::UnicodeString::doAppend((wchar16 *)this,(int)param_1 + 2 + iVar3 * 2,0);
          iVar2 = iVar2 + ((ushort)wVar1 - 0x100);
        }
        iVar3 = iVar2;
      } while (iVar2 < param_2);
    }
  }
  return this;
}



/* icu_76_godot::SimpleFormatter::format(char16_t const*, int, icu_76_godot::UnicodeString const*
   const*, icu_76_godot::UnicodeString&, icu_76_godot::UnicodeString const*, signed char, int*, int,
   UErrorCode&) */

undefined8 icu_76_godot::SimpleFormatter::format(void)

{
  undefined8 param_4;
  int *in_stack_00000018;
  
  if (*in_stack_00000018 < 1) {
    format();
  }
  return param_4;
}


