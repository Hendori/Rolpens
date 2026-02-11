
/* icu_76_godot::ICU_Utility::appendNumber(icu_76_godot::UnicodeString&, int, int, int) */

UnicodeString *
icu_76_godot::ICU_Utility::appendNumber(UnicodeString *param_1,int param_2,int param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined2 local_42;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x22 < param_3 - 2U) {
    local_42 = 0x3f;
    param_1 = (UnicodeString *)
              icu_76_godot::UnicodeString::doAppend((wchar16 *)param_1,(int)&local_42,0);
    goto LAB_001000ed;
  }
  uVar4 = (ulong)(uint)param_2;
  if (param_2 < 0) {
    uVar4 = (ulong)(uint)-param_2;
    local_42 = 0x2d;
    icu_76_godot::UnicodeString::doAppend((wchar16 *)param_1,(int)&local_42,0);
  }
  if ((int)uVar4 < param_3) {
    if (1 < param_4) {
      iVar5 = param_4 + -1;
      iVar3 = 1;
      goto LAB_00100075;
    }
    iVar3 = 1;
  }
  else {
    iVar3 = 1;
    uVar2 = uVar4;
    do {
      iVar5 = param_4;
      iVar3 = iVar3 * param_3;
      uVar1 = (long)(int)uVar2 / (long)param_3;
      uVar2 = uVar1 & 0xffffffff;
      param_4 = iVar5 + -1;
    } while (param_3 <= (int)uVar1);
    iVar5 = iVar5 + -2;
    if (0 < iVar5) {
LAB_00100075:
      do {
        local_42 = 0x30;
        icu_76_godot::UnicodeString::doAppend((wchar16 *)param_1,(int)&local_42,0);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (iVar3 < 1) goto LAB_001000ed;
  }
  do {
    iVar5 = (int)uVar4;
    uVar4 = (long)iVar5 % (long)iVar3 & 0xffffffff;
    local_42 = *(undefined2 *)(DIGITS + (long)(iVar5 / iVar3) * 2);
    icu_76_godot::UnicodeString::doAppend((wchar16 *)param_1,(int)&local_42,0);
    iVar3 = iVar3 / param_3;
  } while (iVar3 != 0);
LAB_001000ed:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* icu_76_godot::ICU_Utility::isUnprintable(int) */

bool icu_76_godot::ICU_Utility::isUnprintable(int param_1)

{
  return 0x5e < param_1 - 0x20U;
}



/* icu_76_godot::ICU_Utility::shouldAlwaysBeEscaped(int) */

uint icu_76_godot::ICU_Utility::shouldAlwaysBeEscaped(int param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  
  uVar1 = 1;
  if ((((0x1f < param_1) && (uVar1 = 0, 0x7e < param_1)) && (uVar1 = 1, 0x9f < param_1)) &&
     (uVar1 = 0, 0xd7ff < param_1)) {
    if ((0x1f < param_1 - 0xfdd0U) && (0xdfff < param_1)) {
      return CONCAT31((int3)((uint)~param_1 >> 8),(~param_1 & 0xfffeU) != 0) &
             CONCAT31((int3)((uint)in_EDX >> 8),param_1 < 0x110000) ^ 1;
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* icu_76_godot::ICU_Utility::escape(icu_76_godot::UnicodeString&, int) */

UnicodeString * icu_76_godot::ICU_Utility::escape(UnicodeString *param_1,int param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined2 local_32;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_32 = 0x5c;
  iVar1 = (int)&local_32;
  icu_76_godot::UnicodeString::doAppend((wchar16 *)param_1,iVar1,0);
  if ((uint)param_2 < 0x10000) {
    local_32 = 0x75;
    icu_76_godot::UnicodeString::doAppend((wchar16 *)param_1,iVar1,0);
  }
  else {
    local_32 = 0x55;
    icu_76_godot::UnicodeString::doAppend((wchar16 *)param_1,iVar1,0);
    local_32 = *(undefined2 *)(DIGITS + (ulong)((uint)param_2 >> 0x1c) * 2);
    icu_76_godot::UnicodeString::doAppend((wchar16 *)param_1,iVar1,0);
    local_32 = *(undefined2 *)(DIGITS + (ulong)(param_2 >> 0x18 & 0xf) * 2);
    icu_76_godot::UnicodeString::doAppend((wchar16 *)param_1,iVar1,0);
    local_32 = *(undefined2 *)(DIGITS + (ulong)(param_2 >> 0x14 & 0xf) * 2);
    icu_76_godot::UnicodeString::doAppend((wchar16 *)param_1,iVar1,0);
    local_32 = *(undefined2 *)(DIGITS + (ulong)(param_2 >> 0x10 & 0xf) * 2);
    icu_76_godot::UnicodeString::doAppend((wchar16 *)param_1,iVar1,0);
  }
  local_32 = *(undefined2 *)(DIGITS + (ulong)(param_2 >> 0xc & 0xf) * 2);
  icu_76_godot::UnicodeString::doAppend((wchar16 *)param_1,iVar1,0);
  local_32 = *(undefined2 *)(DIGITS + (ulong)(param_2 >> 8 & 0xf) * 2);
  icu_76_godot::UnicodeString::doAppend((wchar16 *)param_1,iVar1,0);
  local_32 = *(undefined2 *)(DIGITS + (ulong)(param_2 >> 4 & 0xf) * 2);
  icu_76_godot::UnicodeString::doAppend((wchar16 *)param_1,iVar1,0);
  local_32 = *(undefined2 *)(DIGITS + (ulong)(param_2 & 0xf) * 2);
  icu_76_godot::UnicodeString::doAppend((wchar16 *)param_1,iVar1,0);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::ICU_Utility::escapeUnprintable(icu_76_godot::UnicodeString&, int) */

undefined8 icu_76_godot::ICU_Utility::escapeUnprintable(UnicodeString *param_1,int param_2)

{
  if (param_2 - 0x20U < 0x5f) {
    return 0;
  }
  escape(param_1,param_2);
  return 1;
}



/* icu_76_godot::ICU_Utility::skipWhitespace(icu_76_godot::UnicodeString const&, int&, signed char)
    */

ulong icu_76_godot::ICU_Utility::skipWhitespace(long param_1,int *param_2,char param_3)

{
  ushort uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  
  uVar1 = *(ushort *)(param_1 + 8);
  if ((uVar1 & 0x11) == 0) {
    lVar5 = param_1 + 10;
    if ((uVar1 & 2) == 0) {
      lVar5 = *(long *)(param_1 + 0x18);
    }
  }
  else {
    lVar5 = 0;
  }
  if ((short)uVar1 < 0) {
    iVar4 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar4 = (int)((short)uVar1 >> 5);
  }
  lVar2 = icu_76_godot::PatternProps::skipWhiteSpace
                    ((wchar16 *)(lVar5 + (long)*param_2 * 2),iVar4 - *param_2);
  uVar3 = lVar2 - lVar5 >> 1;
  if (param_3 != '\0') {
    *param_2 = (int)uVar3;
  }
  return uVar3 & 0xffffffff;
}



/* icu_76_godot::ICU_Utility::parseChar(icu_76_godot::UnicodeString const&, int&, char16_t) */

undefined8 icu_76_godot::ICU_Utility::parseChar(UnicodeString *param_1,int *param_2,wchar16 param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  UnicodeString *pUVar4;
  undefined8 uVar5;
  wchar16 wVar6;
  int iVar7;
  
  iVar7 = *param_2;
  skipWhitespace(param_1,param_2,1);
  uVar1 = *(ushort *)(param_1 + 8);
  uVar2 = *param_2;
  if ((short)uVar1 < 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
  }
  else {
    uVar3 = (uint)((short)uVar1 >> 5);
  }
  uVar5 = 0;
  if (uVar2 != uVar3) {
    wVar6 = L'\xffff';
    if (uVar2 < uVar3) {
      if ((uVar1 & 2) == 0) {
        pUVar4 = *(UnicodeString **)(param_1 + 0x18);
      }
      else {
        pUVar4 = param_1 + 10;
      }
      wVar6 = *(wchar16 *)(pUVar4 + (long)(int)uVar2 * 2);
    }
    uVar5 = 0;
    if (param_3 == wVar6) {
      iVar7 = uVar2 + 1;
      uVar5 = 1;
    }
  }
  *param_2 = iVar7;
  return uVar5;
}



/* icu_76_godot::ICU_Utility::parsePattern(icu_76_godot::UnicodeString const&,
   icu_76_godot::Replaceable const&, int, int) */

int icu_76_godot::ICU_Utility::parsePattern
              (UnicodeString *param_1,Replaceable *param_2,int param_3,int param_4)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (*(short *)(param_1 + 8) < 0) {
    iVar3 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar3 = (int)(*(short *)(param_1 + 8) >> 5);
  }
  if (iVar3 != 0) {
    iVar3 = 0;
    uVar4 = icu_76_godot::UnicodeString::char32At((int)param_1);
    if (param_3 < param_4) {
      do {
        while (uVar6 = (**(code **)(*(long *)param_2 + 0x50))(param_2,param_3), uVar4 != 0x7e) {
          if (uVar6 != uVar4) goto LAB_00100658;
          if (uVar4 < 0x10000) {
            param_3 = param_3 + 1;
            iVar3 = iVar3 + 1;
            sVar2 = *(short *)(param_1 + 8);
          }
          else {
            param_3 = param_3 + 2;
            iVar3 = iVar3 + 2;
            sVar2 = *(short *)(param_1 + 8);
          }
          if (sVar2 < 0) {
            iVar5 = *(int *)(param_1 + 0xc);
          }
          else {
LAB_001005bd:
            iVar5 = (int)(sVar2 >> 5);
          }
LAB_001005c2:
          if (iVar3 == iVar5) {
            return param_3;
          }
          uVar4 = icu_76_godot::UnicodeString::char32At((int)param_1);
          if (param_4 <= param_3) goto LAB_00100658;
        }
        cVar1 = icu_76_godot::PatternProps::isWhiteSpace(uVar6);
        if (cVar1 == '\0') {
          sVar2 = *(short *)(param_1 + 8);
          iVar3 = iVar3 + 1;
          if (-1 < sVar2) goto LAB_001005bd;
          iVar5 = *(int *)(param_1 + 0xc);
          goto LAB_001005c2;
        }
        param_3 = (0xffff < uVar6) + 1 + param_3;
      } while (param_3 < param_4);
    }
LAB_00100658:
    param_3 = -1;
  }
  return param_3;
}



/* icu_76_godot::ICU_Utility::parseAsciiInteger(icu_76_godot::UnicodeString const&, int&) */

int icu_76_godot::ICU_Utility::parseAsciiInteger(UnicodeString *param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  UnicodeString *pUVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = (ulong)*param_2;
  iVar5 = 0;
  lVar7 = uVar6 * 2;
  while( true ) {
    uVar1 = *(ushort *)(param_1 + 8);
    uVar2 = (uint)uVar6;
    if ((short)uVar1 < 0) {
      uVar3 = *(uint *)(param_1 + 0xc);
    }
    else {
      uVar3 = (uint)((short)uVar1 >> 5);
    }
    if (((int)uVar3 <= (int)uVar2) || (uVar3 <= uVar2)) {
      return iVar5;
    }
    pUVar4 = param_1 + 10;
    if ((uVar1 & 2) == 0) {
      pUVar4 = *(UnicodeString **)(param_1 + 0x18);
    }
    uVar1 = *(ushort *)(pUVar4 + lVar7);
    lVar7 = lVar7 + 2;
    if (9 < (ushort)(uVar1 - 0x30)) break;
    uVar6 = (ulong)(uVar2 + 1);
    *param_2 = uVar2 + 1;
    iVar5 = (uVar1 - 0x30) + iVar5 * 10;
  }
  return iVar5;
}



/* icu_76_godot::ICU_Utility::appendToRule(icu_76_godot::UnicodeString&, int, signed char, signed
   char, icu_76_godot::UnicodeString&) */

void icu_76_godot::ICU_Utility::appendToRule
               (UnicodeString *param_1,uint param_2,char param_3,char param_4,UnicodeString *param_5
               )

{
  ushort uVar1;
  char cVar2;
  wchar16 *pwVar3;
  UnicodeString *pUVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  long in_FS_OFFSET;
  undefined2 local_42;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar9 = (int)param_5;
  if ((param_3 != '\0') || ((param_4 != '\0' && (0x5e < param_2 - 0x20)))) {
    uVar1 = *(ushort *)(param_5 + 8);
    uVar8 = (uint)uVar1;
    if ((short)uVar1 < 0) {
      if (0 < *(int *)(param_5 + 0xc)) goto LAB_001008b7;
    }
    else if (0 < (short)uVar1 >> 5) {
LAB_001008b7:
      do {
        pUVar4 = param_5 + 10;
        if ((short)uVar8 < 0) {
          if (*(int *)(param_5 + 0xc) < 2) goto LAB_001008d0;
        }
        else if ((short)uVar8 < 0x40) goto LAB_001008d0;
        if ((uVar8 & 2) == 0) {
          pUVar4 = *(UnicodeString **)(param_5 + 0x18);
          sVar5 = *(short *)pUVar4;
        }
        else {
          sVar5 = *(short *)(param_5 + 10);
        }
        if ((sVar5 != 0x27) || (*(short *)(pUVar4 + 2) != 0x27)) goto LAB_001008d0;
        local_42 = 0x5c;
        pwVar3 = (wchar16 *)
                 icu_76_godot::UnicodeString::doAppend((wchar16 *)param_1,(int)&local_42,0);
        local_42 = 0x27;
        icu_76_godot::UnicodeString::doAppend(pwVar3,(int)&local_42,0);
        icu_76_godot::UnicodeString::doReplace(iVar9,0,(wchar16 *)0x2,0,0);
        uVar8 = (uint)*(ushort *)(param_5 + 8);
      } while( true );
    }
    goto joined_r0x001009b1;
  }
  if ((short)*(ushort *)(param_5 + 8) < 0) {
    if (*(int *)(param_5 + 0xc) == 0) goto LAB_00100731;
    if (0 < *(int *)(param_5 + 0xc)) goto LAB_00100773;
LAB_00100745:
    if (param_2 - 0x21 < 0x5e) {
      if (((0x19 < (param_2 & 0xffffffdf) - 0x41) && (9 < param_2 - 0x30)) ||
         (cVar2 = icu_76_godot::PatternProps::isWhiteSpace(param_2), cVar2 != '\0'))
      goto LAB_00100773;
    }
    else {
      cVar2 = icu_76_godot::PatternProps::isWhiteSpace(param_2);
      if (cVar2 != '\0') {
        param_1 = param_5;
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010081f;
        goto LAB_00100c62;
      }
    }
LAB_00100805:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010081f;
    goto LAB_00100c62;
  }
  if (*(ushort *)(param_5 + 8) >> 5 == 0) {
LAB_00100731:
    if ((param_2 != 0x27) && (param_2 != 0x5c)) goto LAB_00100745;
    local_42 = 0x5c;
    icu_76_godot::UnicodeString::doAppend((wchar16 *)param_1,(int)&local_42,0);
    goto LAB_00100805;
  }
LAB_00100773:
  icu_76_godot::UnicodeString::append(iVar9);
  if (param_2 == 0x27) {
    param_1 = param_5;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010081f;
    goto LAB_00100c62;
  }
  goto LAB_00100788;
code_r0x001009e0:
  iVar10 = iVar10 + 1;
  uVar8 = uVar8 & 0x1f | uVar6 * 0x20;
  *(short *)(param_5 + 8) = (short)uVar8;
LAB_001008e0:
  sVar5 = (short)uVar8 >> 5;
  uVar7 = (uint)sVar5;
  if (sVar5 < 2) goto LAB_00100952;
  goto LAB_001008ef;
LAB_001008d0:
  iVar10 = 0;
LAB_00100945:
  if (-1 < (short)uVar8) goto LAB_001008e0;
  uVar7 = *(uint *)(param_5 + 0xc);
  if (1 < (int)uVar7) {
LAB_001008ef:
    if (1 < uVar7) {
      do {
        uVar6 = uVar7 - 2;
        pUVar4 = param_5 + 10;
        if ((uVar8 & 2) == 0) {
          pUVar4 = *(UnicodeString **)(param_5 + 0x18);
        }
        if (((*(short *)(pUVar4 + (long)(int)uVar6 * 2) != 0x27) || (uVar7 == 0)) ||
           (*(short *)(pUVar4 + (long)(int)(uVar7 - 1) * 2) != 0x27)) break;
        if ((uVar6 == 0) && ((uVar8 & 1) != 0)) {
          icu_76_godot::UnicodeString::unBogus();
          uVar8 = (uint)*(ushort *)(param_5 + 8);
LAB_00100941:
          iVar10 = iVar10 + 1;
          goto LAB_00100945;
        }
        if (uVar7 <= uVar6) goto LAB_00100941;
        if ((int)uVar6 < 0x400) goto code_r0x001009e0;
        uVar8 = uVar8 | 0xffffffe0;
        *(uint *)(param_5 + 0xc) = uVar6;
        iVar10 = iVar10 + 1;
        *(short *)(param_5 + 8) = (short)uVar8;
        uVar7 = uVar6;
        if (uVar6 < 2) break;
      } while( true );
    }
    goto LAB_00100a18;
  }
LAB_00100952:
  if (uVar7 == 1) {
LAB_00100a18:
    local_42 = 0x27;
    icu_76_godot::UnicodeString::doAppend((wchar16 *)param_1,(int)&local_42,0);
    icu_76_godot::UnicodeString::doAppend(param_1,iVar9,0);
    local_42 = 0x27;
    icu_76_godot::UnicodeString::doAppend((wchar16 *)param_1,(int)&local_42,0);
    uVar1 = *(ushort *)(param_5 + 8);
    if ((uVar1 & 1) == 0) {
      if ((short)uVar1 < 0) {
        iVar9 = *(int *)(param_5 + 0xc);
      }
      else {
        iVar9 = (int)((short)uVar1 >> 5);
      }
      if (iVar9 != 0) {
        *(ushort *)(param_5 + 8) = uVar1 & 0x1f;
      }
    }
    else {
      icu_76_godot::UnicodeString::unBogus();
    }
  }
  if (iVar10 != 0) {
    do {
      iVar10 = iVar10 + -1;
      local_42 = 0x5c;
      pwVar3 = (wchar16 *)icu_76_godot::UnicodeString::doAppend((wchar16 *)param_1,(int)&local_42,0)
      ;
      local_42 = 0x27;
      icu_76_godot::UnicodeString::doAppend(pwVar3,(int)&local_42,0);
    } while (iVar10 != 0);
  }
joined_r0x001009b1:
  if (param_2 != 0xffffffff) {
    if (param_2 != 0x20) {
      if ((param_4 != '\0') && (0x5e < param_2 - 0x20)) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          escape(param_1,param_2);
          return;
        }
        goto LAB_00100c62;
      }
      goto LAB_00100805;
    }
    uVar1 = *(ushort *)(param_1 + 8);
    if ((short)uVar1 < 0) {
      uVar8 = *(uint *)(param_1 + 0xc);
      if (0 < (int)uVar8) goto LAB_00100b3f;
    }
    else {
      uVar8 = (uint)((short)uVar1 >> 5);
      if ((short)uVar1 >> 5 != 0) {
LAB_00100b3f:
        if (uVar8 - 1 < uVar8) {
          if ((uVar1 & 2) == 0) {
            pUVar4 = *(UnicodeString **)(param_1 + 0x18);
          }
          else {
            pUVar4 = param_1 + 10;
          }
          if (*(short *)(pUVar4 + (long)(int)(uVar8 - 1) * 2) == 0x20) goto LAB_00100788;
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_0010081f:
          icu_76_godot::UnicodeString::append((int)param_1);
          return;
        }
        goto LAB_00100c62;
      }
    }
  }
LAB_00100788:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100c62:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::ICU_Utility::appendToRule(icu_76_godot::UnicodeString&, icu_76_godot::UnicodeString
   const&, signed char, signed char, icu_76_godot::UnicodeString&) */

void icu_76_godot::ICU_Utility::appendToRule
               (undefined8 param_1,long param_2,char param_3,char param_4,undefined8 param_5)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined2 uVar5;
  
  lVar4 = 0;
  while( true ) {
    uVar1 = *(ushort *)(param_2 + 8);
    if ((short)uVar1 < 0) {
      uVar2 = *(uint *)(param_2 + 0xc);
    }
    else {
      uVar2 = (uint)((short)uVar1 >> 5);
    }
    if ((int)uVar2 <= (int)(uint)lVar4) break;
    uVar5 = 0xffff;
    if ((uint)lVar4 < uVar2) {
      lVar3 = param_2 + 10;
      if ((uVar1 & 2) == 0) {
        lVar3 = *(long *)(param_2 + 0x18);
      }
      uVar5 = *(undefined2 *)(lVar3 + lVar4 * 2);
    }
    appendToRule(param_1,uVar5,(int)param_3,(int)param_4,param_5);
    lVar4 = lVar4 + 1;
  }
  return;
}



/* icu_76_godot::ICU_Utility::appendToRule(icu_76_godot::UnicodeString&,
   icu_76_godot::UnicodeMatcher const*, signed char, icu_76_godot::UnicodeString&) */

void icu_76_godot::ICU_Utility::appendToRule
               (undefined8 param_1,long *param_2,char param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined2 local_70;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != (long *)0x0) {
    local_78 = 0x102078;
    local_70 = 2;
    uVar1 = (**(code **)(*param_2 + 0x18))(param_2,&local_78,(int)param_3);
    appendToRule(param_1,uVar1,1,(int)param_3,param_4);
    icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_78);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
LAB_0010106f:
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
      goto LAB_0010106f;
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


