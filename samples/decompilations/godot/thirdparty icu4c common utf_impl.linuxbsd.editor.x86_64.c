
uint utf8_nextCharSafeBody_76_godot(long param_1,int *param_2,int param_3,uint param_4,char param_5)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  
  iVar2 = *param_2;
  iVar4 = iVar2;
  if ((iVar2 == param_3) || (0xf4 < (int)param_4)) {
LAB_001000a8:
    uVar6 = 0;
  }
  else if ((int)param_4 < 0xf0) {
    if ((int)param_4 < 0xe0) {
      if ((int)param_4 < 0xc2) goto LAB_001000a8;
      uVar6 = 0;
      bVar3 = *(char *)(param_1 + iVar2) + 0x80;
      if (bVar3 < 0x40) {
        iVar4 = iVar2 + 1;
        uVar6 = (param_4 - 0xc0) * 0x40 | (uint)bVar3;
        goto LAB_001000c1;
      }
    }
    else {
      bVar3 = *(byte *)(param_1 + iVar2);
      param_4 = param_4 & 0xf;
      if (param_5 == -2) {
        bVar3 = bVar3 + 0x80;
        uVar6 = 0xffffffff;
        if ((bVar3 < 0x40) && ((param_4 != 0 || (0x1f < bVar3)))) {
          iVar4 = iVar2 + 1;
          if (param_3 == iVar4) {
            uVar6 = 0xffffffff;
            iVar4 = param_3;
          }
          else {
            bVar5 = *(char *)(param_1 + iVar4) + 0x80;
            if (bVar5 < 0x40) {
              uVar6 = (uint)bVar3 << 6 | (uint)bVar5 | param_4 << 0xc;
              iVar4 = iVar2 + 2;
            }
            else {
              uVar6 = 0xffffffff;
            }
          }
        }
        goto LAB_001000c1;
      }
      uVar6 = (int)(char)(&_LC1)[(int)param_4] >> (bVar3 >> 5) & 1;
      if (((uVar6 != 0) && (iVar1 = iVar2 + 1, iVar4 = param_3, param_3 != iVar1)) &&
         (bVar5 = *(char *)(param_1 + iVar1) + 0x80, iVar4 = iVar1, bVar5 < 0x40)) {
        iVar4 = iVar2 + 2;
        uVar6 = (bVar3 & 0x3f) << 6 | (uint)bVar5 | param_4 << 0xc;
        if ((0xfdcf < uVar6) && ('\0' < param_5)) {
          if (uVar6 < 0xfdf0) {
            uVar6 = 0xffff;
          }
          else if ((~uVar6 & 0xfffe) == 0) {
            uVar6 = 0xffff;
          }
        }
        goto LAB_001000c1;
      }
    }
  }
  else {
    uVar6 = (int)(char)(&DAT_00100920)[*(byte *)(param_1 + iVar2) >> 4] >> (sbyte)(param_4 & 7) & 1;
    if (((uVar6 != 0) && (iVar1 = iVar2 + 1, iVar4 = param_3, param_3 != iVar1)) &&
       (bVar3 = *(char *)(param_1 + iVar1) + 0x80, iVar4 = iVar1, bVar3 < 0x40)) {
      iVar4 = iVar2 + 2;
      if (param_3 == iVar4) {
        uVar6 = 2;
        iVar4 = param_3;
      }
      else {
        bVar5 = *(char *)(param_1 + iVar4) + 0x80;
        if (bVar5 < 0x40) {
          iVar4 = iVar2 + 3;
          uVar6 = (uint)bVar3 << 6 |
                  (*(byte *)(param_1 + iVar2) & 0x3f) << 0xc | (uint)bVar5 | (param_4 & 7) << 0x12;
          if (('\0' < param_5) && (0xfdcf < uVar6)) {
            if (uVar6 < 0xfdf0) {
              uVar6 = 0x10ffff;
            }
            else if (((~uVar6 & 0xfffe) == 0) && (uVar6 < 0x10ffff)) {
              uVar6 = 0x10ffff;
            }
          }
          goto LAB_001000c1;
        }
        uVar6 = 2;
      }
    }
  }
  if (-1 < param_5) {
    *param_2 = iVar4;
    return *(uint *)(utf8_errorValue + (long)(int)uVar6 * 4);
  }
  uVar6 = 0xffffffff;
  if (param_5 == -3) {
    uVar6 = 0xfffd;
  }
LAB_001000c1:
  *param_2 = iVar4;
  return uVar6;
}



int utf8_appendCharSafeBody_76_godot
              (long param_1,int param_2,int param_3,uint param_4,undefined1 *param_5)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  
  bVar2 = (byte)((int)param_4 >> 6);
  if (param_4 < 0x800) {
    if (param_2 + 1 < param_3) {
      *(byte *)(param_1 + param_2) = bVar2 | 0xc0;
      *(byte *)(param_1 + (param_2 + 1)) = (byte)param_4 & 0x3f | 0x80;
      return param_2 + 2;
    }
  }
  else if (param_4 < 0x10000) {
    if (param_2 + 2 < param_3) {
      if ((param_4 & 0xfffff800) != 0xd800) {
        *(byte *)(param_1 + param_2) = (byte)((int)param_4 >> 0xc) | 0xe0;
        *(byte *)(param_1 + (param_2 + 1)) = bVar2 & 0x3f | 0x80;
        *(byte *)(param_1 + (param_2 + 2)) = (byte)param_4 & 0x3f | 0x80;
        return param_2 + 3;
      }
      if (param_5 == (undefined1 *)0x0) {
        param_3 = param_3 - param_2;
        goto LAB_001003fa;
      }
      goto LAB_00100322;
    }
  }
  else if ((param_4 < 0x110000) && (param_2 + 3 < param_3)) {
    *(uint *)(param_1 + param_2) =
         (((param_4 & 0x3f) << 8 | (int)param_4 >> 6 & 0x3fU) << 8 | (int)param_4 >> 0xc & 0x3fU) <<
         8 | (int)param_4 >> 0x12 & 0xffU | _LC2;
    return param_2 + 4;
  }
  if (param_5 == (undefined1 *)0x0) {
    param_3 = param_3 - param_2;
    if (param_3 < 1) {
      return param_2;
    }
LAB_001003fa:
    pbVar3 = (byte *)(param_2 + param_1);
    if (3 < param_3) {
      param_3 = 3;
    }
    uVar1 = *(uint *)(utf8_errorValue + (long)(param_3 + -1) * 4);
    if (uVar1 < 0x80) {
      *pbVar3 = (byte)uVar1;
      param_2 = param_2 + 1;
    }
    else {
      bVar2 = (byte)(uVar1 >> 6);
      if (uVar1 < 0x800) {
        iVar4 = 2;
        lVar5 = 1;
        *pbVar3 = bVar2 | 0xc0;
      }
      else {
        bVar6 = (byte)(uVar1 >> 0xc);
        if (uVar1 < 0x10000) {
          lVar5 = 2;
          iVar4 = 3;
          lVar7 = 1;
          bVar6 = bVar6 | 0xe0;
        }
        else {
          lVar5 = 3;
          lVar7 = 2;
          pbVar3[1] = bVar6 & 0x3f | 0x80;
          bVar6 = (byte)(uVar1 >> 0x12) | 0xf0;
          iVar4 = 4;
        }
        *pbVar3 = bVar6;
        pbVar3[lVar7] = bVar2 & 0x3f | 0x80;
      }
      param_2 = iVar4 + param_2;
      pbVar3[lVar5] = (byte)uVar1 & 0x3f | 0x80;
    }
    return param_2;
  }
LAB_00100322:
  *param_5 = 1;
  return param_2;
}



uint utf8_prevCharSafeBody_76_godot(long param_1,int param_2,int *param_3,uint param_4,char param_5)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  
  iVar4 = *param_3;
  bVar6 = (byte)param_4;
  if (((char)bVar6 < -0x40) && (param_2 < iVar4)) {
    iVar1 = iVar4 + -1;
    bVar2 = *(byte *)(param_1 + iVar1);
    uVar5 = (uint)bVar2;
    if ((byte)(bVar2 + 0x3e) < 0x33) {
      if (bVar2 < 0xe0) {
        *param_3 = iVar1;
        return (uVar5 - 0xc0) * 0x40 | param_4 & 0x3f;
      }
      if (bVar2 < 0xf0) {
        uVar5 = 1 << (bVar6 >> 5) & (int)(char)(&_LC1)[uVar5 & 0xf];
      }
      else {
        uVar5 = (int)(char)(&DAT_00100920)[bVar6 >> 4] & 1 << (bVar2 & 7);
      }
      if (uVar5 != 0) {
        *param_3 = iVar1;
        if (-1 < param_5) {
          return 0x9f;
        }
        goto LAB_00100522;
      }
    }
    else if (((char)bVar2 < -0x40) && (param_2 < iVar1)) {
      iVar1 = iVar4 + -2;
      param_4 = param_4 & 0x3f;
      bVar6 = *(byte *)(param_1 + iVar1);
      uVar7 = (uint)bVar6;
      if ((byte)(bVar6 + 0x20) < 0x15) {
        if (bVar6 < 0xf0) {
          uVar7 = uVar7 & 0xf;
          if (param_5 == -2) {
            if (((char)uVar7 == '\0') && ((byte)(uVar5 - 0x80) < 0x20)) {
              return 0xffffffff;
            }
            *param_3 = iVar1;
            return param_4 | uVar7 << 0xc | (uVar5 - 0x80 & 0xff) << 6;
          }
          if (((uint)(int)(char)(&_LC1)[uVar7] >> (bVar2 >> 5) & 1) != 0) {
            *param_3 = iVar1;
            param_4 = param_4 | (bVar2 & 0x3f) << 6 | uVar7 << 0xc;
            if (param_4 < 0xfdd0) {
              return param_4;
            }
            if (param_5 < '\x01') {
              return param_4;
            }
            if (param_4 < 0xfdf0) {
              return 0xffff;
            }
            if ((~param_4 & 0xfffe) == 0) {
              return 0xffff;
            }
            return param_4;
          }
        }
        else if (((uint)(int)(char)(&DAT_00100920)[bVar2 >> 4] >> (uVar7 & 7) & 1) != 0) {
          *param_3 = iVar1;
          if (-1 < param_5) {
            return 0xffff;
          }
          goto LAB_0010073e;
        }
      }
      else if (((char)bVar6 < -0x40) && (param_2 < iVar1)) {
        bVar3 = *(byte *)(param_1 + (iVar4 + -3));
        if (((byte)(bVar3 + 0x10) < 5) &&
           (((uint)(int)(char)(&DAT_00100920)[bVar6 >> 4] >> (bVar3 & 7) & 1) != 0)) {
          *param_3 = iVar4 + -3;
          uVar5 = param_4 | (uVar7 & 0x3f) << 0xc | (bVar3 & 7) << 0x12 | (bVar2 & 0x3f) << 6;
          if (uVar5 < 0xfdd0) {
            return uVar5;
          }
          if (param_5 < '\x01') {
            return uVar5;
          }
          if (uVar5 < 0xfdf0) {
            return 0x10ffff;
          }
          uVar7 = 0x10ffff;
          if (0x10fffe < uVar5) {
            uVar7 = uVar5;
          }
          if ((~uVar5 & 0xfffe) != 0) {
            return uVar5;
          }
          return uVar7;
        }
      }
      if (-1 < param_5) {
        return 0x15;
      }
LAB_0010073e:
      if (param_5 == -3) {
        return 0xfffd;
      }
      return 0xffffffff;
    }
  }
  if (-1 < param_5) {
    return 0x15;
  }
LAB_00100522:
  if (param_5 == -3) {
    return 0xfffd;
  }
  return 0xffffffff;
}



ulong utf8_back1SafeBody_76_godot(long param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar4 = (ulong)(int)param_3;
  bVar1 = *(byte *)(param_1 + uVar4);
  if (((char)bVar1 < -0x40) && (param_2 < (int)param_3)) {
    uVar5 = param_3 - 1;
    bVar2 = *(byte *)(param_1 + (int)uVar5);
    if ((byte)(bVar2 + 0x3e) < 0x33) {
      if (0xdf < bVar2) {
        if (bVar2 < 0xf0) {
          uVar3 = 1 << (bVar1 >> 5) & (int)(char)(&_LC1)[bVar2 & 0xf];
        }
        else {
          uVar3 = (int)(char)(&DAT_00100920)[bVar1 >> 4] & 1 << (bVar2 & 7);
        }
LAB_00100829:
        uVar4 = (ulong)param_3;
        if (uVar3 != 0) {
          uVar4 = (ulong)uVar5;
        }
        return uVar4;
      }
      uVar4 = (ulong)uVar5;
    }
    else if (((char)bVar2 < -0x40) && (param_2 < (int)uVar5)) {
      uVar5 = param_3 - 2;
      bVar1 = *(byte *)(param_1 + (int)uVar5);
      if ((byte)(bVar1 + 0x20) < 0x15) {
        if (bVar1 < 0xf0) {
          uVar3 = (int)(char)(&_LC1)[bVar1 & 0xf] & 1 << (bVar2 >> 5);
        }
        else {
          uVar3 = 1 << (bVar1 & 7) & (int)(char)(&DAT_00100920)[bVar2 >> 4];
        }
        goto LAB_00100829;
      }
      if (((char)bVar1 < -0x40) && (param_2 < (int)uVar5)) {
        bVar2 = *(byte *)(param_1 + (int)(param_3 - 3));
        if ((byte)(bVar2 + 0x10) < 5) {
          uVar4 = (ulong)param_3;
          if (((uint)(int)(char)(&DAT_00100920)[bVar1 >> 4] >> (bVar2 & 7) & 1) != 0) {
            uVar4 = (ulong)(param_3 - 3);
          }
          return uVar4;
        }
      }
    }
  }
  return uVar4;
}


