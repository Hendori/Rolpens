
/* icu_76_godot::PatternProps::isSyntax(int) */

uint icu_76_godot::PatternProps::isSyntax(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (-1 < param_1) {
    if (param_1 < 0x100) {
      return (byte)latin1[param_1] >> 1 & 1;
    }
    if (0x200f < param_1) {
      if (param_1 < 0x3031) {
        return *(uint *)(syntax2000 + (ulong)(byte)index2000[param_1 + -0x2000 >> 5] * 4) >>
               ((byte)param_1 & 0x1f) & 1;
      }
      if (param_1 - 0xfd3eU < 0x109) {
        uVar1 = (uint)(0x104 < param_1 - 0xfd40U);
      }
    }
  }
  return uVar1;
}



/* icu_76_godot::PatternProps::isSyntaxOrWhiteSpace(int) */

uint icu_76_godot::PatternProps::isSyntaxOrWhiteSpace(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (-1 < param_1) {
    if (param_1 < 0x100) {
      return (byte)latin1[param_1] & 1;
    }
    if (0x200d < param_1) {
      if (param_1 < 0x3031) {
        return *(uint *)(syntaxOrWhiteSpace2000 + (ulong)(byte)index2000[param_1 + -0x2000 >> 5] * 4
                        ) >> ((byte)param_1 & 0x1f) & 1;
      }
      if (param_1 - 0xfd3eU < 0x109) {
        uVar1 = (uint)(0x104 < param_1 - 0xfd40U);
      }
    }
  }
  return uVar1;
}



/* icu_76_godot::PatternProps::isWhiteSpace(int) */

bool icu_76_godot::PatternProps::isWhiteSpace(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (-1 < param_1) {
    if (param_1 < 0x100) {
      return (bool)((byte)latin1[param_1] >> 2 & 1);
    }
    if (param_1 - 0x200eU < 0x1c) {
      bVar1 = 0x17 < param_1 - 0x2010U;
    }
  }
  return bVar1;
}



/* icu_76_godot::PatternProps::skipWhiteSpace(char16_t const*, int) */

void icu_76_godot::PatternProps::skipWhiteSpace(wchar16 *param_1,int param_2)

{
  wchar16 *pwVar1;
  wchar16 wVar2;
  
  if (0 < param_2) {
    pwVar1 = param_1 + (uint)param_2;
    do {
      wVar2 = *param_1;
      if ((ushort)wVar2 < 0x100) {
        if ((latin1[(ushort)wVar2] & 4) == 0) {
          return;
        }
      }
      else {
        if (0x1b < (ushort)wVar2 - 0x200e) {
          return;
        }
        if ((ushort)wVar2 - 0x2010 < 0x18) {
          return;
        }
      }
      param_1 = param_1 + 1;
    } while (pwVar1 != param_1);
  }
  return;
}



/* icu_76_godot::PatternProps::skipWhiteSpace(icu_76_godot::UnicodeString const&, int) */

void icu_76_godot::PatternProps::skipWhiteSpace(UnicodeString *param_1,int param_2)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  uint uVar5;
  UnicodeString *pUVar4;
  
  uVar1 = *(ushort *)(param_1 + 8);
  if ((short)uVar1 < 0) {
    uVar5 = *(uint *)(param_1 + 0xc);
  }
  else {
    uVar5 = (uint)((short)uVar1 >> 5);
  }
  if (param_2 < (int)uVar5) {
    lVar2 = (long)param_2 * 2;
    while ((uint)param_2 < uVar5) {
      pUVar4 = param_1 + 10;
      if ((uVar1 & 2) == 0) {
        pUVar4 = *(UnicodeString **)(param_1 + 0x18);
      }
      uVar3 = (uint)*(ushort *)(pUVar4 + lVar2);
      if (uVar3 < 0x100) {
        if ((latin1[uVar3] & 4) == 0) {
          return;
        }
      }
      else {
        if (0x1b < uVar3 - 0x200e) {
          return;
        }
        if (uVar3 - 0x2010 < 0x18) {
          return;
        }
      }
      param_2 = param_2 + 1;
      lVar2 = lVar2 + 2;
      if (param_2 == uVar5) {
        return;
      }
    }
  }
  return;
}



/* icu_76_godot::PatternProps::trimWhiteSpace(char16_t const*, int&) */

wchar16 * icu_76_godot::PatternProps::trimWhiteSpace(wchar16 *param_1,int *param_2)

{
  wchar16 wVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  wchar16 *pwVar5;
  long lVar6;
  
  iVar4 = *param_2;
  if (iVar4 < 1) {
    return param_1;
  }
  wVar1 = *param_1;
  if ((ushort)wVar1 < 0x100) {
    if ((latin1[(ushort)wVar1] & 4) != 0) goto LAB_001002ad;
  }
  else if (((ushort)wVar1 - 0x200e < 0x1c) && (0x17 < (ushort)wVar1 - 0x2010)) goto LAB_001002ad;
  wVar1 = param_1[(long)iVar4 + -1];
  if ((ushort)wVar1 < 0x100) {
    if ((latin1[(ushort)wVar1] & 4) == 0) {
      return param_1;
    }
  }
  else if ((0x1b < (ushort)wVar1 - 0x200e) || ((ushort)wVar1 - 0x2010 < 0x18)) {
    return param_1;
  }
LAB_001002ad:
  iVar3 = 0;
  pwVar5 = param_1;
  do {
    wVar1 = *pwVar5;
    if ((ushort)wVar1 < 0x100) {
      if ((latin1[(ushort)wVar1] & 4) == 0) {
LAB_001002da:
        if (iVar4 <= iVar3) goto LAB_00100320;
        lVar6 = (long)iVar4;
        break;
      }
    }
    else if ((0x1b < (ushort)wVar1 - 0x200e) || ((ushort)wVar1 - 0x2010 < 0x18)) goto LAB_001002da;
    iVar3 = iVar3 + 1;
    pwVar5 = pwVar5 + 1;
    if (iVar4 == iVar3) {
      *param_2 = iVar4 - iVar3;
      return param_1 + iVar4;
    }
  } while( true );
LAB_0010030b:
  uVar2 = (uint)(ushort)param_1[lVar6 + -1];
  iVar4 = (int)lVar6;
  if (uVar2 < 0x100) {
    if ((latin1[uVar2] & 4) == 0) goto LAB_00100320;
  }
  else if ((0x1b < uVar2 - 0x200e) || (uVar2 - 0x2010 < 0x18)) {
LAB_00100320:
    *param_2 = iVar4 - iVar3;
    return pwVar5;
  }
  lVar6 = lVar6 + -1;
  goto LAB_0010030b;
}



/* icu_76_godot::PatternProps::isIdentifier(char16_t const*, int) */

undefined8 icu_76_godot::PatternProps::isIdentifier(wchar16 *param_1,int param_2)

{
  wchar16 *pwVar1;
  wchar16 wVar2;
  byte bVar3;
  uint uVar4;
  
  if (param_2 < 1) {
    return 0;
  }
  pwVar1 = param_1 + param_2;
  do {
    wVar2 = *param_1;
    uVar4 = (uint)(ushort)wVar2;
    param_1 = param_1 + 1;
    if (uVar4 < 0x100) {
      bVar3 = latin1[(int)uVar4];
LAB_0010042e:
      if ((bVar3 & 1) != 0) {
        return 0;
      }
    }
    else if (0x200d < uVar4) {
      if (uVar4 < 0x3031) {
        bVar3 = (byte)(*(uint *)(syntaxOrWhiteSpace2000 +
                                (ulong)(byte)index2000[(int)(uVar4 - 0x2000) >> 5] * 4) >>
                      ((byte)wVar2 & 0x1f));
        goto LAB_0010042e;
      }
      if ((uVar4 - 0xfd3e < 0x109) && (0x104 < uVar4 - 0xfd40)) {
        return 0;
      }
    }
    if (pwVar1 <= param_1) {
      return 1;
    }
  } while( true );
}



/* icu_76_godot::PatternProps::skipIdentifier(char16_t const*, int) */

wchar16 * icu_76_godot::PatternProps::skipIdentifier(wchar16 *param_1,int param_2)

{
  wchar16 *pwVar1;
  byte bVar2;
  uint uVar3;
  
  if (0 < param_2) {
    pwVar1 = param_1 + (uint)param_2;
    do {
      uVar3 = (uint)(ushort)*param_1;
      if (uVar3 < 0x100) {
        bVar2 = latin1[(int)uVar3];
LAB_001004ce:
        if ((bVar2 & 1) != 0) {
          return param_1;
        }
      }
      else if (0x200d < uVar3) {
        if (uVar3 < 0x3031) {
          bVar2 = (byte)(*(uint *)(syntaxOrWhiteSpace2000 +
                                  (ulong)(byte)index2000[(int)(uVar3 - 0x2000) >> 5] * 4) >>
                        ((byte)*param_1 & 0x1f));
          goto LAB_001004ce;
        }
        if ((uVar3 - 0xfd3e < 0x109) && (0x104 < uVar3 - 0xfd40)) {
          return param_1;
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 != pwVar1);
  }
  return param_1;
}


