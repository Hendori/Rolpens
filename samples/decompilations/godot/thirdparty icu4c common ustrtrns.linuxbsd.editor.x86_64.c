
short * u_strFromUTF32WithSub_76_godot
                  (short *param_1,int param_2,int *param_3,uint *param_4,int param_5,uint param_6,
                  int *param_7,int *param_8)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  short *psVar6;
  uint *puVar7;
  
  if (0 < *param_8) {
    return (short *)0x0;
  }
  if (((((param_4 == (uint *)0x0) && (param_5 != 0)) || (param_5 < -1)) ||
      ((param_2 < 0 || (param_1 == (short *)0x0 && 0 < param_2)))) ||
     ((0x10ffff < (int)param_6 || ((param_6 & 0xfffff800) == 0xd800)))) {
    *param_8 = 1;
    return (short *)0x0;
  }
  if (param_7 != (int *)0x0) {
    *param_7 = 0;
  }
  psVar6 = (short *)0x0;
  if (param_1 != (short *)0x0) {
    psVar6 = param_1 + param_2;
  }
  psVar5 = param_1;
  if (param_5 == -1) {
    uVar4 = *param_4;
    iVar3 = 0;
    if (uVar4 == 0) {
      iVar3 = 0;
    }
    else {
      do {
        if ((0x1fff < uVar4 - 0xe000) && (puVar7 = param_4, 0xd7ff < uVar4)) goto LAB_00100258;
        param_4 = param_4 + 1;
        if (psVar5 < psVar6) {
          *psVar5 = (short)uVar4;
          psVar5 = psVar5 + 1;
        }
        else {
          iVar3 = iVar3 + 1;
        }
        uVar4 = *param_4;
      } while (uVar4 != 0);
      iVar3 = iVar3 + (int)((long)psVar5 - (long)param_1 >> 1);
    }
  }
  else {
    if (param_4 != (uint *)0x0) {
      puVar7 = param_4 + param_5;
      iVar3 = 0;
      goto LAB_001000c0;
    }
    iVar3 = 0;
  }
  iVar2 = 0;
LAB_001001a4:
  if (param_3 != (int *)0x0) {
    *param_3 = iVar3;
  }
  if (param_7 != (int *)0x0) {
    *param_7 = iVar2;
  }
  u_terminateUChars_76_godot(param_1,param_2,iVar3,param_8);
  return param_1;
LAB_00100258:
  do {
    puVar1 = puVar7 + 1;
    puVar7 = puVar7 + 1;
  } while (*puVar1 != 0);
LAB_001000c0:
  if (param_4 < puVar7) {
    iVar2 = 0;
    do {
      uVar4 = *param_4;
      if ((uVar4 - 0xe000 < 0x2000) || (uVar4 < 0xd800)) {
LAB_001001d0:
        if (psVar5 < psVar6) {
          *psVar5 = (short)uVar4;
          psVar5 = psVar5 + 1;
        }
        else {
          iVar3 = iVar3 + 1;
        }
      }
      else {
        if (0xfffff < uVar4 - 0x10000) {
          if ((int)param_6 < 0) {
            *param_8 = 10;
            return (short *)0x0;
          }
          iVar2 = iVar2 + 1;
          uVar4 = param_6;
          if ((param_6 - 0xe000 < 0x2000) || (param_6 < 0xd800)) goto LAB_001001d0;
        }
        if ((psVar5 == (short *)0x0) || (psVar6 < psVar5 + 2)) {
          iVar3 = iVar3 + 2;
        }
        else {
          psVar5[1] = (ushort)uVar4 & 0x3ff | 0xdc00;
          *psVar5 = (short)((int)uVar4 >> 10) + -0x2840;
          psVar5 = psVar5 + 2;
        }
      }
      param_4 = param_4 + 1;
    } while (param_4 < puVar7);
    iVar3 = (int)((long)psVar5 - (long)param_1 >> 1) + iVar3;
  }
  else {
    iVar2 = 0;
    iVar3 = (int)((long)psVar5 - (long)param_1 >> 1) + iVar3;
  }
  goto LAB_001001a4;
}



void u_strFromUTF32_76_godot(void)

{
  u_strFromUTF32WithSub_76_godot();
  return;
}



uint * u_strToUTF32WithSub_76_godot
                 (uint *param_1,int param_2,int *param_3,ushort *param_4,int param_5,uint param_6,
                 int *param_7,int *param_8)

{
  ushort uVar1;
  ushort *puVar2;
  uint *puVar3;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  
  if (0 < *param_8) {
    return (uint *)0x0;
  }
  if (((((param_4 == (ushort *)0x0) && (param_5 != 0)) || (param_5 < -1)) ||
      ((param_2 < 0 || (param_1 == (uint *)0x0 && 0 < param_2)))) ||
     ((0x10ffff < (int)param_6 || ((param_6 & 0xfffff800) == 0xd800)))) {
    *param_8 = 1;
    return (uint *)0x0;
  }
  if (param_7 != (int *)0x0) {
    *param_7 = 0;
  }
  puVar7 = (uint *)0x0;
  if (param_1 != (uint *)0x0) {
    puVar7 = param_1 + param_2;
  }
  puVar3 = param_1;
  if (param_5 == -1) {
    uVar1 = *param_4;
    iVar6 = 0;
    if (uVar1 == 0) {
      iVar6 = 0;
    }
    else {
      do {
        puVar5 = param_4;
        if ((uVar1 & 0xfffff800) == 0xd800) goto LAB_001004f8;
        param_4 = param_4 + 1;
        if (puVar3 < puVar7) {
          *puVar3 = (uint)uVar1;
          puVar3 = puVar3 + 1;
        }
        else {
          iVar6 = iVar6 + 1;
        }
        uVar1 = *param_4;
      } while (uVar1 != 0);
      iVar6 = iVar6 + (int)((long)puVar3 - (long)param_1 >> 2);
    }
  }
  else {
    if (param_4 != (ushort *)0x0) {
      iVar6 = 0;
      puVar5 = param_4 + param_5;
      goto LAB_00100378;
    }
    iVar6 = 0;
  }
  iVar8 = 0;
LAB_00100405:
  if (param_3 != (int *)0x0) {
    *param_3 = iVar6;
  }
  if (param_7 != (int *)0x0) {
    *param_7 = iVar8;
  }
  u_terminateUChar32s_76_godot(param_1,param_2,iVar6,param_8);
  return param_1;
LAB_001004f8:
  do {
    puVar5 = puVar5 + 1;
  } while (*puVar5 != 0);
LAB_00100378:
  if (param_4 < puVar5) {
    iVar8 = 0;
    do {
      while( true ) {
        uVar1 = *param_4;
        uVar4 = (uint)uVar1;
        puVar2 = param_4 + 1;
        if ((uVar1 & 0xf800) == 0xd800) {
          if ((((uVar1 & 0x400) == 0) && (puVar2 < puVar5)) && ((param_4[1] & 0xfc00) == 0xdc00)) {
            puVar2 = param_4 + 2;
            uVar4 = param_4[1] + 0xfca02400 + (uint)uVar1 * 0x400;
          }
          else {
            if ((int)param_6 < 0) {
              *param_8 = 10;
              return (uint *)0x0;
            }
            iVar8 = iVar8 + 1;
            uVar4 = param_6;
          }
        }
        param_4 = puVar2;
        if (puVar3 < puVar7) break;
        iVar6 = iVar6 + 1;
        if (puVar5 <= puVar2) goto LAB_001003cd;
      }
      *puVar3 = uVar4;
      puVar3 = puVar3 + 1;
    } while (puVar2 < puVar5);
LAB_001003cd:
    iVar6 = (int)((long)puVar3 - (long)param_1 >> 2) + iVar6;
  }
  else {
    iVar8 = 0;
    iVar6 = (int)((long)puVar3 - (long)param_1 >> 2) + iVar6;
  }
  goto LAB_00100405;
}



void u_strToUTF32_76_godot(void)

{
  u_strToUTF32WithSub_76_godot();
  return;
}



ushort * u_strFromUTF8WithSub_76_godot
                   (ushort *param_1,int param_2,int *param_3,byte *param_4,int param_5,uint param_6,
                   int *param_7,int *param_8)

{
  ushort *puVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ushort *puVar11;
  ushort *puVar12;
  long in_FS_OFFSET;
  int local_5c;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_8 < 1) {
    if ((((((param_4 != (byte *)0x0) || (param_5 == 0)) && (-2 < param_5)) &&
         ((-1 < param_2 && (param_1 != (ushort *)0x0 || param_2 < 1)))) && ((int)param_6 < 0x110000)
        ) && ((param_6 & 0xfffff800) != 0xd800)) {
      if (param_7 != (int *)0x0) {
        *param_7 = 0;
      }
      local_44 = 0;
      puVar1 = param_1 + param_2;
      if (param_5 != -1) {
        uVar5 = (long)param_2 * 2 >> 1;
        local_5c = 0;
        uVar7 = (ulong)(uint)(param_5 / 3);
        if ((int)uVar5 < param_5 / 3) {
          uVar7 = uVar5 & 0xffffffff;
        }
        iVar6 = (int)uVar7;
        iVar8 = 0;
        puVar11 = param_1;
        while (2 < iVar6) {
          do {
            iVar6 = (int)uVar7;
            local_44 = iVar8 + 1;
            bVar2 = param_4[iVar8];
            uVar3 = (ushort)(char)bVar2;
            if ((char)bVar2 < '\0') {
              if (bVar2 - 0xe0 < 0x10) {
                if (iVar8 + 2 < param_5) {
                  if ((((uint)(int)(char)(&_LC0)[uVar3 & 0xf] >> (param_4[local_44] >> 5) & 1) != 0)
                     && ((byte)(param_4[(long)local_44 + 1] + 0x80) < 0x40)) {
                    *puVar11 = uVar3 << 0xc | (param_4[local_44] & 0x3f) << 6 |
                               (ushort)(byte)(param_4[(long)local_44 + 1] + 0x80);
                    puVar11 = puVar11 + 1;
                    iVar8 = iVar8 + 3;
                    goto joined_r0x00100695;
                  }
                }
              }
              else if (((bVar2 - 0xc2 < 0x1e) && (local_44 != param_5)) &&
                      ((byte)(param_4[local_44] + 0x80) < 0x40)) {
                *puVar11 = (uVar3 & 0x1f) << 6 | (ushort)(byte)(param_4[local_44] + 0x80);
                puVar11 = puVar11 + 1;
                iVar8 = iVar8 + 2;
                goto joined_r0x00100695;
              }
              if (((0xef < bVar2) || (0xffff < (int)param_6)) && (iVar6 = iVar6 + -1, iVar6 == 0))
              break;
              uVar4 = utf8_nextCharSafeBody_76_godot(param_4,&local_44,param_5,bVar2,0xffffffff);
              if ((int)uVar4 < 0) {
                if ((int)param_6 < 0) goto LAB_00100970;
                local_5c = local_5c + 1;
                uVar4 = param_6;
              }
              iVar8 = local_44;
              if ((int)uVar4 < 0x10000) {
                *puVar11 = (ushort)uVar4;
                puVar11 = puVar11 + 1;
              }
              else {
                puVar11[1] = (ushort)uVar4 & 0x3ff | 0xdc00;
                *puVar11 = (short)((int)uVar4 >> 10) + 0xd7c0;
                puVar11 = puVar11 + 2;
              }
            }
            else {
              *puVar11 = uVar3;
              puVar11 = puVar11 + 1;
              iVar8 = local_44;
            }
joined_r0x00100695:
            uVar7 = (ulong)(iVar6 - 1U);
          } while (iVar6 - 1U != 0);
          local_44 = iVar8;
          uVar5 = (long)puVar1 - (long)puVar11 >> 1;
          uVar4 = (param_5 - local_44) / 3;
          uVar7 = (ulong)uVar4;
          if ((int)uVar5 < (int)uVar4) {
            uVar7 = uVar5 & 0xffffffff;
          }
          iVar8 = local_44;
          iVar6 = (int)uVar7;
        }
joined_r0x00100772:
        while( true ) {
          if ((param_5 <= iVar8) || (puVar1 <= puVar11)) goto LAB_00100d2d;
          local_44 = iVar8 + 1;
          bVar2 = param_4[iVar8];
          uVar3 = (ushort)(char)bVar2;
          if ((char)bVar2 < '\0') break;
          *puVar11 = uVar3;
          puVar11 = puVar11 + 1;
          iVar8 = local_44;
        }
        if (bVar2 - 0xe0 < 0x10) {
          if (iVar8 + 2 < param_5) {
            if ((((uint)(int)(char)(&_LC0)[uVar3 & 0xf] >> (param_4[local_44] >> 5) & 1) != 0) &&
               ((byte)(param_4[(long)local_44 + 1] + 0x80) < 0x40)) {
              *puVar11 = uVar3 << 0xc | (param_4[local_44] & 0x3f) << 6 |
                         (ushort)(byte)(param_4[(long)local_44 + 1] + 0x80);
              iVar8 = iVar8 + 3;
              puVar11 = puVar11 + 1;
              goto joined_r0x00100772;
            }
          }
        }
        else if (((bVar2 - 0xc2 < 0x1e) && (local_44 != param_5)) &&
                ((byte)(param_4[local_44] + 0x80) < 0x40)) {
          *puVar11 = (uVar3 & 0x1f) << 6 | (ushort)(byte)(param_4[local_44] + 0x80);
          iVar8 = iVar8 + 2;
          puVar11 = puVar11 + 1;
          goto joined_r0x00100772;
        }
        uVar4 = utf8_nextCharSafeBody_76_godot(param_4,&local_44,param_5,bVar2,0xffffffff);
        if ((int)uVar4 < 0) {
          if ((int)param_6 < 0) goto LAB_00100970;
          local_5c = local_5c + 1;
          uVar4 = param_6;
        }
        puVar12 = puVar11 + 1;
        iVar8 = local_44;
        if ((int)uVar4 < 0x10000) {
          *puVar11 = (ushort)uVar4;
          puVar11 = puVar12;
        }
        else {
          *puVar11 = (short)((int)uVar4 >> 10) + 0xd7c0;
          if (puVar1 <= puVar12) {
            iVar6 = 1;
            goto joined_r0x00100d3a;
          }
          puVar11[1] = (ushort)uVar4 & 0x3ff | 0xdc00;
          puVar11 = puVar11 + 2;
        }
        goto joined_r0x00100772;
      }
      uVar4 = (uint)*param_4;
      if (param_1 < puVar1) {
        local_5c = 0;
        puVar11 = param_1;
        iVar8 = 0;
        if (*param_4 == 0) goto LAB_00100e51;
        do {
          local_44 = iVar8 + 1;
          if ((char)uVar4 < '\0') {
            if (uVar4 - 0xe0 < 0x10) {
              lVar10 = (long)local_44;
              if ((((uint)(int)(char)(&_LC0)[uVar4 & 0xf] >> (param_4[lVar10] >> 5) & 1) == 0) ||
                 (lVar9 = (long)local_44, 0x3f < (byte)(param_4[lVar9 + 1] + 0x80))) {
LAB_00100a60:
                uVar4 = utf8_nextCharSafeBody_76_godot
                                  (param_4,&local_44,0xffffffff,uVar4,0xffffffff);
                if ((int)uVar4 < 0) {
                  if ((int)param_6 < 0) goto LAB_00100970;
                  local_5c = local_5c + 1;
                  uVar4 = param_6;
                }
                puVar12 = puVar11 + 1;
                if ((int)uVar4 < 0x10000) {
                  *puVar11 = (ushort)uVar4;
                }
                else {
                  *puVar11 = (short)((int)uVar4 >> 10) + 0xd7c0;
                  if (puVar1 <= puVar12) {
                    iVar6 = 1;
                    uVar4 = (uint)param_4[local_44];
                    goto LAB_00100b27;
                  }
                  puVar12 = puVar11 + 2;
                  puVar11[1] = (ushort)uVar4 & 0x3ff | 0xdc00;
                }
              }
              else {
                local_44 = iVar8 + 3;
                puVar12 = puVar11 + 1;
                *puVar11 = (ushort)(uVar4 << 0xc) | (param_4[lVar10] & 0x3f) << 6 |
                           (ushort)(byte)(param_4[lVar9 + 1] + 0x80);
              }
            }
            else {
              if ((0x1d < uVar4 - 0xc2) ||
                 (lVar10 = (long)local_44, 0x3f < (byte)(param_4[lVar10] + 0x80)))
              goto LAB_00100a60;
              local_44 = iVar8 + 2;
              puVar12 = puVar11 + 1;
              *puVar11 = (ushort)(uVar4 << 6) & 0x7c0 | (ushort)(byte)(param_4[lVar10] + 0x80);
            }
          }
          else {
            puVar12 = puVar11 + 1;
            *puVar11 = (short)(char)uVar4;
          }
          uVar4 = (uint)param_4[local_44];
        } while ((puVar12 < puVar1) && (puVar11 = puVar12, iVar8 = local_44, param_4[local_44] != 0)
                );
        iVar6 = 0;
      }
      else {
LAB_00100e51:
        local_5c = 0;
        iVar6 = 0;
        puVar12 = param_1;
      }
LAB_00100b27:
      if (uVar4 != 0) {
        do {
          iVar8 = local_44 + 1;
          if ((char)uVar4 < '\0') {
            if (uVar4 - 0xe0 < 0x10) {
              if ((((uint)(int)(char)(&_LC0)[uVar4 & 0xf] >> (param_4[iVar8] >> 5) & 1) == 0) ||
                 (0x3f < (byte)(param_4[(long)iVar8 + 1] + 0x80))) {
LAB_00100ba8:
                local_44 = iVar8;
                uVar4 = utf8_nextCharSafeBody_76_godot
                                  (param_4,&local_44,0xffffffff,uVar4,0xffffffff);
                if ((int)uVar4 < 0) {
                  if ((int)param_6 < 0) goto LAB_00100970;
                  local_5c = local_5c + 1;
                  uVar4 = param_6;
                }
                iVar6 = iVar6 + 1 + (uint)(0xffff < (int)uVar4);
              }
              else {
                iVar6 = iVar6 + 1;
                local_44 = local_44 + 3;
              }
            }
            else {
              if ((0x1d < uVar4 - 0xc2) || (0x3f < (byte)(param_4[iVar8] + 0x80)))
              goto LAB_00100ba8;
              iVar6 = iVar6 + 1;
              local_44 = local_44 + 2;
            }
          }
          else {
            iVar6 = iVar6 + 1;
            local_44 = iVar8;
          }
          uVar4 = (uint)param_4[local_44];
        } while (param_4[local_44] != 0);
      }
      goto LAB_00100c1c;
    }
    *param_8 = 1;
  }
  goto LAB_00100853;
LAB_00100d2d:
  iVar6 = 0;
  puVar12 = puVar11;
joined_r0x00100d3a:
  local_44 = iVar8;
  if (iVar8 < param_5) {
    local_44 = iVar8 + 1;
    bVar2 = param_4[iVar8];
    if ((char)bVar2 < '\0') {
      if (bVar2 - 0xe0 < 0x10) {
        if (((iVar8 + 2 < param_5) &&
            (((uint)(int)(char)(&_LC0)[bVar2 & 0xf] >> (param_4[local_44] >> 5) & 1) != 0)) &&
           ((byte)(param_4[(long)local_44 + 1] + 0x80) < 0x40)) {
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + 3;
        }
        else {
LAB_00100dc0:
          uVar4 = utf8_nextCharSafeBody_76_godot(param_4,&local_44,param_5,bVar2,0xffffffff);
          if ((int)uVar4 < 0) {
            if ((int)param_6 < 0) goto LAB_00100970;
            local_5c = local_5c + 1;
            uVar4 = param_6;
          }
          iVar6 = iVar6 + 1 + (uint)(0xffff < (int)uVar4);
          iVar8 = local_44;
        }
      }
      else {
        if (((0x1d < bVar2 - 0xc2) || (local_44 == param_5)) ||
           (0x3f < (byte)(param_4[local_44] + 0x80))) goto LAB_00100dc0;
        iVar6 = iVar6 + 1;
        iVar8 = iVar8 + 2;
      }
    }
    else {
      iVar6 = iVar6 + 1;
      iVar8 = local_44;
    }
    goto joined_r0x00100d3a;
  }
LAB_00100c1c:
  iVar6 = iVar6 + (int)((long)puVar12 - (long)param_1 >> 1);
  if (param_7 != (int *)0x0) {
    *param_7 = local_5c;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar6;
  }
  u_terminateUChars_76_godot(param_1,param_2,iVar6,param_8);
  goto LAB_00100855;
LAB_00100970:
  *param_8 = 10;
LAB_00100853:
  param_1 = (ushort *)0x0;
LAB_00100855:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



void u_strFromUTF8_76_godot(void)

{
  u_strFromUTF8WithSub_76_godot();
  return;
}



ushort * u_strFromUTF8Lenient_76_godot
                   (ushort *param_1,int param_2,int *param_3,byte *param_4,int param_5,int *param_6)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  byte *pbVar12;
  ushort *puVar13;
  
  if (0 < *param_6) {
    return (ushort *)0x0;
  }
  if ((((param_4 == (byte *)0x0) && (param_5 != 0)) || (param_5 < -1)) ||
     ((param_2 < 0 || ((param_1 == (ushort *)0x0 && (0 < param_2)))))) {
    *param_6 = 1;
  }
  else {
    if (param_5 == -1) {
      uVar8 = (uint)*param_4;
      uVar10 = (uint)*param_4;
      if (((param_1 == (ushort *)0x0) || (puVar5 = param_1 + param_2, puVar5 <= param_1)) ||
         (pbVar12 = param_4, puVar6 = param_1, uVar10 == 0)) {
        lVar11 = 0;
        iVar4 = 0;
      }
      else {
        do {
          puVar13 = puVar6 + 1;
          if (uVar10 < 0xc0) {
            *puVar6 = (ushort)uVar10;
            param_4 = pbVar12 + 1;
          }
          else {
            bVar1 = pbVar12[1];
            if (uVar10 < 0xe0) {
              if (bVar1 == 0) goto LAB_001010df;
              param_4 = pbVar12 + 2;
              *puVar6 = (short)(uVar10 << 6) + -0x3080 + (ushort)bVar1;
            }
            else if (uVar10 < 0xf0) {
              if ((bVar1 == 0) || (pbVar12[2] == 0)) {
LAB_001010df:
                *puVar6 = 0xfffd;
                iVar4 = 0;
                iVar9 = (int)((long)puVar13 - (long)param_1 >> 1);
                goto LAB_001010f3;
              }
              param_4 = pbVar12 + 3;
              *puVar6 = (short)(uVar10 << 0xc) + -0x2080 + (ushort)pbVar12[2] + (ushort)bVar1 * 0x40
              ;
            }
            else {
              if (((bVar1 == 0) || (pbVar12[2] == 0)) || (pbVar12[3] == 0)) goto LAB_001010df;
              param_4 = pbVar12 + 4;
              iVar4 = uVar10 * 0x40000 + (uint)bVar1 * 0x1000 + (uint)pbVar12[2] * 0x40 + -0x3c82080
                      + (uint)pbVar12[3];
              *puVar6 = (short)(iVar4 >> 10) + 0xd7c0;
              if (puVar5 <= puVar13) {
                uVar8 = (uint)pbVar12[4];
                iVar4 = 1;
                lVar11 = (long)puVar13 - (long)param_1 >> 1;
                goto LAB_001012d0;
              }
              puVar13 = puVar6 + 2;
              puVar6[1] = (ushort)iVar4 & 0x3ff | 0xdc00;
            }
          }
          uVar10 = (uint)*param_4;
        } while ((*param_4 != 0) && (pbVar12 = param_4, puVar6 = puVar13, puVar13 < puVar5));
        iVar4 = 0;
        lVar11 = (long)puVar13 - (long)param_1 >> 1;
        uVar8 = uVar10;
      }
LAB_001012d0:
      do {
        iVar9 = (int)lVar11;
        if (uVar8 == 0) goto LAB_001010f3;
        if (uVar8 < 0xc0) {
          iVar4 = iVar4 + 1;
          param_4 = param_4 + 1;
        }
        else {
          bVar1 = param_4[1];
          if (uVar8 < 0xe0) {
            if (bVar1 == 0) goto LAB_001012f6;
            iVar4 = iVar4 + 1;
            param_4 = param_4 + 2;
          }
          else if (uVar8 < 0xf0) {
            if ((bVar1 == 0) || (param_4[2] == 0)) {
LAB_001012f6:
              uVar7 = (ulong)(uint)(iVar4 + 1 + iVar9);
              goto LAB_00100fbe;
            }
            iVar4 = iVar4 + 1;
            param_4 = param_4 + 3;
          }
          else {
            if (((bVar1 == 0) || (param_4[2] == 0)) || (param_4[3] == 0)) goto LAB_001012f6;
            iVar4 = iVar4 + 2;
            param_4 = param_4 + 4;
          }
        }
        uVar8 = (uint)*param_4;
      } while( true );
    }
    if (param_4 == (byte *)0x0) {
      if (param_5 <= param_2) {
        uVar7 = 0;
        goto LAB_00100fbe;
      }
    }
    else {
      pbVar12 = param_4 + param_5;
      if (param_5 <= param_2) {
        puVar5 = param_1;
        if (3 < param_5) {
          pbVar3 = param_4;
          puVar6 = param_1;
          do {
            while( true ) {
              bVar1 = *pbVar3;
              uVar8 = (uint)bVar1;
              if (0xbf < uVar8) break;
              *puVar6 = (ushort)bVar1;
              param_4 = pbVar3 + 1;
              puVar5 = puVar6 + 1;
LAB_00100f34:
              pbVar3 = param_4;
              puVar6 = puVar5;
              if (pbVar12 + -3 <= param_4) goto LAB_00100f78;
            }
            bVar2 = pbVar3[1];
            if (0xdf < uVar8) {
              if (uVar8 < 0xf0) {
                param_4 = pbVar3 + 3;
                puVar5 = puVar6 + 1;
                *puVar6 = pbVar3[2] + 0xdf80 + (ushort)bVar2 * 0x40 + (ushort)bVar1 * 0x1000;
              }
              else {
                param_4 = pbVar3 + 4;
                puVar5 = puVar6 + 2;
                iVar4 = (uint)pbVar3[2] * 0x40 + (uint)bVar2 * 0x1000 + uVar8 * 0x40000 + -0x3c82080
                        + (uint)pbVar3[3];
                puVar6[1] = (ushort)iVar4 & 0x3ff | 0xdc00;
                *puVar6 = (short)(iVar4 >> 10) + 0xd7c0;
              }
              goto LAB_00100f34;
            }
            param_4 = pbVar3 + 2;
            *puVar6 = (ushort)bVar1 * 0x40 + -0x3080 + (ushort)bVar2;
            pbVar3 = param_4;
            puVar5 = puVar6 + 1;
            puVar6 = puVar6 + 1;
          } while (param_4 < pbVar12 + -3);
        }
LAB_00100f78:
        puVar6 = puVar5;
        if (param_4 < pbVar12) {
          bVar1 = *param_4;
          pbVar3 = param_4 + 1;
          if (bVar1 < 0xc0) {
            *puVar5 = (ushort)bVar1;
            param_4 = pbVar3;
            puVar5 = puVar5 + 1;
          }
          else if (bVar1 < 0xe0) {
            if (pbVar12 <= pbVar3) {
LAB_00100fab:
              puVar6 = puVar5 + 1;
              *puVar5 = 0xfffd;
              goto LAB_00100fb8;
            }
            *puVar5 = param_4[1] + 0xcf80 + (ushort)bVar1 * 0x40;
            param_4 = param_4 + 2;
            puVar5 = puVar5 + 1;
          }
          else if (bVar1 < 0xf0) {
            if ((long)pbVar12 - (long)pbVar3 < 2) goto LAB_00100fab;
            *puVar5 = param_4[2] + 0xdf80 + (ushort)param_4[1] * 0x40 + (ushort)bVar1 * 0x1000;
            param_4 = param_4 + 6;
            puVar5 = puVar5 + 1;
          }
          else {
            if ((long)pbVar12 - (long)pbVar3 < 3) goto LAB_00100fab;
            iVar4 = (uint)param_4[2] * 0x40 + (uint)bVar1 * 0x40000 + (uint)param_4[1] * 0x1000 +
                    -0x3c82080 + (uint)param_4[3];
            puVar5[1] = (ushort)iVar4 & 0x3ff | 0xdc00;
            *puVar5 = (short)(iVar4 >> 10) + 0xd7c0;
            param_4 = param_4 + 8;
            puVar5 = puVar5 + 2;
          }
          goto LAB_00100f78;
        }
LAB_00100fb8:
        uVar7 = (long)puVar6 - (long)param_1 >> 1;
LAB_00100fbe:
        if (param_3 != (int *)0x0) {
          *param_3 = (int)uVar7;
        }
        u_terminateUChars_76_godot(param_1,param_2,uVar7,param_6);
        return param_1;
      }
    }
    if (param_3 != (int *)0x0) {
      *param_3 = param_5;
    }
    *param_6 = 0xf;
  }
  return (ushort *)0x0;
LAB_001010f3:
  uVar7 = (ulong)(uint)(iVar4 + iVar9);
  goto LAB_00100fbe;
}



uint * u_strToUTF8WithSub_76_godot
                 (uint *param_1,uint param_2,int *param_3,ushort *param_4,int param_5,uint param_6,
                 int *param_7,int *param_8)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  byte bVar8;
  uint uVar9;
  byte bVar12;
  long lVar10;
  ushort *puVar11;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  byte bVar17;
  ulong uVar18;
  uint *puVar19;
  byte bVar20;
  
  uVar18 = (ulong)(int)param_2;
  puVar19 = (uint *)(uVar18 + (long)param_1);
  if (param_1 == (uint *)0x0) {
    puVar19 = (uint *)0x0;
  }
  if (0 < *param_8) {
    return (uint *)0x0;
  }
  if (((((param_4 == (ushort *)0x0) && (param_5 != 0)) || (param_5 < -1)) ||
      (((int)param_2 < 0 || (param_1 == (uint *)0x0 && 0 < (int)param_2)))) ||
     ((0x10ffff < (int)param_6 || ((param_6 & 0xfffff800) == 0xd800)))) {
    *param_8 = 1;
    return (uint *)0x0;
  }
  bVar17 = (byte)param_6;
  bVar12 = (byte)((int)param_6 >> 6);
  bVar2 = (byte)((int)param_6 >> 0xc);
  puVar15 = param_1;
  if (param_7 == (int *)0x0) {
    if (param_5 != -1) {
      if (param_4 == (ushort *)0x0) {
        iVar13 = 0;
        goto LAB_00101a26;
      }
LAB_0010149c:
      iVar13 = (int)(((long)puVar19 - (long)param_1) / 3);
      puVar11 = param_4 + param_5;
      iVar14 = (int)((long)param_5 * 2 >> 1);
      if (iVar14 < iVar13) {
        iVar13 = iVar14;
      }
      if (2 < iVar13) {
        iVar14 = 0;
        bVar4 = bVar12 & 0x3f | 0x80;
        bVar20 = bVar17 & 0x3f | 0x80;
LAB_00101541:
        uVar1 = *param_4;
        uVar9 = (uint)uVar1;
        puVar7 = param_4 + 1;
        iVar6 = iVar13 + -1;
        bVar8 = (byte)uVar1;
        if (uVar1 < 0x80) {
          *(byte *)puVar15 = bVar8;
          puVar15 = (uint *)((long)puVar15 + 1);
          param_4 = puVar7;
          iVar13 = iVar6;
        }
        else {
          if (uVar9 < 0x800) {
            *(byte *)puVar15 = (byte)(uVar1 >> 6) | 0xc0;
            *(byte *)((long)puVar15 + 1) = bVar8 & 0x3f | 0x80;
            puVar15 = (uint *)((long)puVar15 + 2);
            param_4 = puVar7;
            iVar13 = iVar6;
            goto joined_r0x0010153f;
          }
          if (0x7ff < uVar9 - 0xd800) {
            *(byte *)((long)puVar15 + 2) = bVar8 & 0x3f | 0x80;
            *(byte *)puVar15 = (byte)(uVar1 >> 0xc) | 0xe0;
            *(byte *)((long)puVar15 + 1) = (byte)(uVar1 >> 6) & 0x3f | 0x80;
            puVar15 = (uint *)((long)puVar15 + 3);
            param_4 = puVar7;
            iVar13 = iVar6;
            goto joined_r0x0010153f;
          }
          if (iVar13 == 1) goto LAB_00101581;
          if (((uVar1 & 0x400) == 0) && ((param_4[1] & 0xfc00) == 0xdc00)) {
            uVar9 = param_4[1] + 0xfca02400 + uVar9 * 0x400;
            *puVar15 = (((uVar9 & 0x3f) << 8 | uVar9 >> 6 & 0x3f) << 8 | uVar9 >> 0xc & 0x3f) << 8 |
                       uVar9 >> 0x12 & 0xff | _LC1;
            puVar15 = puVar15 + 1;
            param_4 = param_4 + 2;
            iVar13 = iVar13 + -2;
            goto joined_r0x0010153f;
          }
          if ((int)param_6 < 0) goto LAB_001019ae;
          iVar14 = iVar14 + 1;
          if ((int)param_6 < 0x80) {
            *(byte *)puVar15 = bVar17;
            puVar15 = (uint *)((long)puVar15 + 1);
            param_4 = puVar7;
            iVar13 = iVar13 + -2;
          }
          else if ((int)param_6 < 0x800) {
            *(byte *)((long)puVar15 + 1) = bVar20;
            *(byte *)puVar15 = bVar12 | 0xc0;
            puVar15 = (uint *)((long)puVar15 + 2);
            param_4 = puVar7;
            iVar13 = iVar13 + -2;
          }
          else if ((int)param_6 < 0x10000) {
            *(byte *)((long)puVar15 + 2) = bVar20;
            *(byte *)puVar15 = bVar2 | 0xe0;
            *(byte *)((long)puVar15 + 1) = bVar4;
            puVar15 = (uint *)((long)puVar15 + 3);
            param_4 = puVar7;
            iVar13 = iVar13 + -2;
          }
          else {
            *(byte *)((long)puVar15 + 3) = bVar20;
            *(byte *)puVar15 = (byte)((int)param_6 >> 0x12) | 0xf0;
            *(byte *)((long)puVar15 + 1) = bVar2 & 0x3f | 0x80;
            *(byte *)((long)puVar15 + 2) = bVar4;
            puVar15 = puVar15 + 1;
            param_4 = puVar7;
            iVar13 = iVar13 + -2;
          }
        }
joined_r0x0010153f:
        if (iVar13 != 0) goto LAB_00101541;
LAB_00101581:
        iVar13 = (int)(((long)puVar19 - (long)puVar15) / 3);
        iVar6 = (int)((long)puVar11 - (long)param_4 >> 1);
        if (iVar6 < iVar13) {
          iVar13 = iVar6;
        }
        if (iVar13 < 3) goto code_r0x001015ae;
        goto LAB_00101541;
      }
      iVar14 = 0;
      goto LAB_001015b8;
    }
    uVar1 = *param_4;
    uVar9 = (uint)uVar1;
    if (uVar9 == 0) {
      iVar13 = 0;
      goto LAB_00101a26;
    }
LAB_00101656:
    iVar14 = 0;
    do {
      puVar11 = param_4 + 1;
      uVar5 = (uint)uVar1;
      if (uVar5 < 0x80) {
        if (puVar19 <= puVar15) {
LAB_00101bb0:
          uVar1 = param_4[1];
          iVar13 = 1;
          goto joined_r0x00101bc1;
        }
        *(byte *)puVar15 = (byte)uVar9;
        puVar16 = (uint *)((long)puVar15 + 1);
      }
      else if (uVar5 < 0x800) {
        if ((long)puVar19 - (long)puVar15 < 2) {
LAB_00101d90:
          uVar1 = param_4[1];
          iVar13 = 2;
          goto joined_r0x00101bc1;
        }
        *(byte *)puVar15 = (byte)(uVar1 >> 6) | 0xc0;
LAB_001016b2:
        puVar16 = (uint *)((long)puVar15 + 2);
        *(byte *)((long)puVar15 + 1) = (byte)uVar9 & 0x3f | 0x80;
      }
      else if (uVar1 - 0xd800 < 0x800) {
        if (((uVar9 & 0x400) == 0) && ((param_4[1] & 0xfffffc00) == 0xdc00)) {
          puVar11 = param_4 + 2;
          iVar13 = (uint)param_4[1] + uVar5 * 0x400;
          uVar9 = iVar13 + 0xfca02400;
          if (iVar13 + 0xfc9f4400U < 0x102000) {
            lVar10 = (long)puVar19 - (long)puVar15;
LAB_00101b2d:
            if (lVar10 < 4) {
              uVar1 = *puVar11;
              iVar13 = 4;
              goto joined_r0x00101bc1;
            }
          }
          else if ((long)puVar19 - (long)puVar15 < 0) {
            uVar1 = param_4[2];
            iVar13 = 0;
            goto joined_r0x00101bc1;
          }
          puVar16 = puVar15 + 1;
          *puVar15 = (((uVar9 & 0x3f) << 8 | (int)uVar9 >> 6 & 0x3fU) << 8 |
                     (int)uVar9 >> 0xc & 0x3fU) << 8 | (int)uVar9 >> 0x12 & 0xffU | _LC1;
        }
        else {
          if ((int)param_6 < 0) goto LAB_001019ae;
          iVar14 = iVar14 + 1;
          lVar10 = (long)puVar19 - (long)puVar15;
          if (0x7f < param_6) {
            uVar9 = param_6;
            if (param_6 < 0x800) {
              if (lVar10 < 2) goto LAB_00101d90;
              *(byte *)puVar15 = bVar12 | 0xc0;
              goto LAB_001016b2;
            }
            if ((0xd7ff < param_6) && (0xffff < param_6)) goto LAB_00101b2d;
            if (lVar10 < 3) goto LAB_00101daa;
            *(byte *)puVar15 = bVar2 | 0xe0;
            *(byte *)((long)puVar15 + 1) = bVar12 & 0x3f | 0x80;
            goto LAB_0010184d;
          }
          if (lVar10 < 1) goto LAB_00101bb0;
          *(byte *)puVar15 = bVar17;
          puVar16 = (uint *)((long)puVar15 + 1);
        }
      }
      else {
        if ((long)puVar19 - (long)puVar15 < 3) {
LAB_00101daa:
          uVar1 = param_4[1];
          iVar13 = 3;
          goto joined_r0x00101bc1;
        }
        *(byte *)puVar15 = (byte)(uVar1 >> 0xc) | 0xe0;
        *(byte *)((long)puVar15 + 1) = (byte)(uVar1 >> 6) & 0x3f | 0x80;
LAB_0010184d:
        puVar16 = (uint *)((long)puVar15 + 3);
        *(byte *)((long)puVar15 + 2) = (byte)uVar9 & 0x3f | 0x80;
      }
      uVar1 = *puVar11;
      uVar9 = (uint)uVar1;
      puVar15 = puVar16;
      param_4 = puVar11;
    } while (uVar9 != 0);
LAB_00101a10:
    iVar13 = 0;
    puVar15 = puVar16;
    goto LAB_00101a12;
  }
  *param_7 = 0;
  if (param_5 == -1) {
    uVar1 = *param_4;
    uVar9 = (uint)uVar1;
    if (uVar9 != 0) goto LAB_00101656;
  }
  else if (param_4 != (ushort *)0x0) goto LAB_0010149c;
  iVar13 = 0;
  iVar14 = 0;
LAB_00101a1f:
  *param_7 = iVar14;
LAB_00101a26:
  if (param_3 != (int *)0x0) {
    *param_3 = iVar13;
  }
  u_terminateChars_76_godot(param_1,uVar18 & 0xffffffff,iVar13,param_8);
  return param_1;
joined_r0x00101bc1:
  if (uVar1 == 0) goto LAB_00101a12;
  puVar7 = puVar11 + 1;
  if (uVar1 < 0x80) {
    iVar13 = iVar13 + 1;
  }
  else if (uVar1 < 0x800) {
    iVar13 = iVar13 + 2;
  }
  else if ((uVar1 & 0xf800) == 0xd800) {
    if (((uVar1 & 0x400) == 0) && ((puVar11[1] & 0xfc00) == 0xdc00)) {
      puVar7 = puVar11 + 2;
      iVar13 = iVar13 + 4;
    }
    else {
      if ((int)param_6 < 0) goto LAB_001019ae;
      iVar6 = 1;
      if ((0x7f < param_6) && (iVar6 = 2, 0x7ff < param_6)) {
        iVar6 = (0xffff < param_6) + 3;
      }
      iVar13 = iVar13 + iVar6;
      iVar14 = iVar14 + 1;
    }
  }
  else {
    iVar13 = iVar13 + 3;
  }
  uVar1 = *puVar7;
  puVar11 = puVar7;
  goto joined_r0x00101bc1;
code_r0x001015ae:
  uVar18 = (ulong)param_2;
LAB_001015b8:
  if (param_4 < puVar11) {
LAB_001015e3:
    uVar1 = *param_4;
    uVar9 = (uint)uVar1;
    puVar7 = param_4 + 1;
    if (uVar1 < 0x80) {
      if (puVar19 <= puVar15) {
LAB_00101c75:
        iVar13 = 1;
        goto LAB_00101c80;
      }
      *(byte *)puVar15 = (byte)uVar1;
      puVar16 = (uint *)((long)puVar15 + 1);
LAB_001015da:
      puVar15 = puVar16;
      param_4 = puVar7;
      if (puVar11 <= puVar7) goto LAB_00101a10;
      goto LAB_001015e3;
    }
    if (uVar9 < 0x800) {
      if ((long)puVar19 - (long)puVar15 < 2) {
LAB_00101da0:
        iVar13 = 2;
        goto LAB_00101c80;
      }
      *(byte *)puVar15 = (byte)(uVar1 >> 6) | 0xc0;
LAB_00101616:
      puVar16 = (uint *)((long)puVar15 + 2);
      *(byte *)((long)puVar15 + 1) = (byte)uVar9 & 0x3f | 0x80;
      goto LAB_001015da;
    }
    if (uVar9 - 0xd800 < 0x800) {
      if ((((uVar1 & 0x400) == 0) && (puVar7 < puVar11)) && ((param_4[1] & 0xfffffc00) == 0xdc00)) {
        puVar7 = param_4 + 2;
        iVar13 = uVar9 * 0x400 + (uint)param_4[1];
        uVar9 = iVar13 + 0xfca02400;
        if (iVar13 + 0xfc9f4400U < 0x102000) {
LAB_00101aa9:
          if ((long)puVar19 - (long)puVar15 < 4) {
            iVar13 = 4;
            goto LAB_00101c80;
          }
        }
        else if ((long)puVar19 - (long)puVar15 < 0) {
          iVar13 = 0;
          goto LAB_00101c80;
        }
        puVar16 = puVar15 + 1;
        *puVar15 = (((uVar9 & 0x3f) << 8 | (int)uVar9 >> 6 & 0x3fU) << 8 | (int)uVar9 >> 0xc & 0x3fU
                   ) << 8 | (int)uVar9 >> 0x12 & 0xffU | _LC1;
      }
      else {
        if ((int)param_6 < 0) goto LAB_001019ae;
        iVar14 = iVar14 + 1;
        lVar10 = (long)puVar19 - (long)puVar15;
        if (0x7f < param_6) {
          uVar9 = param_6;
          if (param_6 < 0x800) {
            if (lVar10 < 2) goto LAB_00101da0;
            *(byte *)puVar15 = bVar12 | 0xc0;
            goto LAB_00101616;
          }
          if (param_6 < 0x10000) {
            if (2 < lVar10) {
              *(byte *)puVar15 = bVar2 | 0xe0;
              *(byte *)((long)puVar15 + 1) = bVar12 & 0x3f | 0x80;
              goto LAB_001018a3;
            }
            goto LAB_00101dba;
          }
          goto LAB_00101aa9;
        }
        if (lVar10 < 1) goto LAB_00101c75;
        *(byte *)puVar15 = bVar17;
        puVar16 = (uint *)((long)puVar15 + 1);
      }
      goto LAB_001015da;
    }
    if (2 < (long)puVar19 - (long)puVar15) {
      *(byte *)puVar15 = (byte)(uVar1 >> 0xc) | 0xe0;
      *(byte *)((long)puVar15 + 1) = (byte)(uVar1 >> 6) & 0x3f | 0x80;
LAB_001018a3:
      puVar16 = (uint *)((long)puVar15 + 3);
      *(byte *)((long)puVar15 + 2) = (byte)uVar9 & 0x3f | 0x80;
      goto LAB_001015da;
    }
LAB_00101dba:
    iVar13 = 3;
LAB_00101c80:
    while (puVar7 < puVar11) {
      uVar1 = *puVar7;
      bVar12 = (byte)(uVar1 >> 8);
      puVar3 = puVar7;
      while (puVar7 = puVar3 + 1, uVar1 < 0x80) {
        iVar13 = iVar13 + 1;
        if (puVar11 <= puVar7) goto LAB_00101a12;
        uVar1 = *puVar7;
        bVar12 = (byte)(uVar1 >> 8);
        puVar3 = puVar7;
      }
      if (uVar1 < 0x800) {
        iVar13 = iVar13 + 2;
      }
      else if ((uVar1 & 0xf800) == 0xd800) {
        if ((((bVar12 & 4) == 0) && (puVar7 < puVar11)) && ((puVar3[1] & 0xfc00) == 0xdc00)) {
          puVar7 = puVar3 + 2;
          iVar13 = iVar13 + 4;
        }
        else {
          if ((int)param_6 < 0) {
LAB_001019ae:
            *param_8 = 10;
            return (uint *)0x0;
          }
          iVar6 = 1;
          if ((0x7f < param_6) && (iVar6 = 2, 0x7ff < param_6)) {
            iVar6 = (0xffff < param_6) + 3;
          }
          iVar13 = iVar13 + iVar6;
          iVar14 = iVar14 + 1;
        }
      }
      else {
        iVar13 = iVar13 + 3;
      }
    }
LAB_00101a12:
    iVar13 = iVar13 + ((int)puVar15 - (int)param_1);
  }
  else {
    iVar13 = (int)puVar15 - (int)param_1;
  }
  if (param_7 == (int *)0x0) goto LAB_00101a26;
  goto LAB_00101a1f;
}



void u_strToUTF8_76_godot(void)

{
  u_strToUTF8WithSub_76_godot();
  return;
}



ushort * u_strFromJavaModifiedUTF8WithSub_76_godot
                   (ushort *param_1,ulong param_2,undefined4 *param_3,byte *param_4,ulong param_5,
                   uint param_6,int *param_7,int *param_8)

{
  ushort *puVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  ushort *puVar5;
  size_t sVar6;
  ushort uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int in_R10D;
  byte *pbVar15;
  int iVar16;
  ushort *puVar17;
  ushort *puVar18;
  int iVar19;
  ushort uVar20;
  long in_FS_OFFSET;
  ushort local_80;
  int local_70;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_8 < 1) {
    iVar16 = (int)param_5;
    param_5 = param_5 & 0xffffffff;
    if ((((param_4 != (byte *)0x0 || iVar16 == 0) && (-2 < iVar16)) &&
        ((param_1 != (ushort *)0x0 || ((int)param_2 == 0)))) &&
       (((int)param_6 < 0x110000 && (param_2 >> 0x1f & 1) == 0 && ((param_6 & 0xfffff800) != 0xd800)
        ))) {
      if (param_7 != (int *)0x0) {
        *param_7 = 0;
      }
      puVar1 = param_1 + (int)param_2;
      puVar17 = param_1;
      if (iVar16 != -1) {
LAB_00101ef9:
        local_44 = 0;
        iVar12 = (int)param_5;
        iVar16 = 0;
        local_70 = in_R10D;
LAB_00101f3b:
        do {
          iVar13 = local_44;
          iVar14 = iVar12 - local_44;
          iVar8 = (int)((long)puVar1 - (long)puVar17 >> 1);
          bVar4 = iVar14 <= iVar8 && 0 < iVar12;
          puVar18 = puVar17;
          if (((bVar4) && (-1 < (char)*param_4)) && (local_44 < iVar12)) {
            pbVar15 = param_4 + local_44;
            iVar19 = local_44;
            bVar3 = false;
            do {
              bVar2 = *pbVar15;
              if ((char)bVar2 < '\0') {
                if (bVar3) {
                  local_44 = local_70;
                }
                iVar8 = iVar8 - (iVar19 - iVar13);
                iVar14 = iVar12 - iVar19;
                puVar18 = puVar17;
                local_70 = local_44;
                goto LAB_00101f65;
              }
              local_70 = iVar19 + 1;
              puVar18 = puVar17 + 1;
              pbVar15 = pbVar15 + 1;
              *puVar17 = (short)(char)bVar2;
              puVar17 = puVar18;
              iVar19 = local_70;
              bVar3 = bVar4;
            } while (local_70 != iVar12);
            iVar8 = iVar8 - iVar14;
            iVar14 = 0;
            local_44 = local_70;
          }
LAB_00101f65:
          uVar20 = (ushort)param_6;
          if (0xffff < (int)param_6) {
LAB_0010224c:
            if (iVar12 <= local_44) goto LAB_0010241c;
            local_80 = uVar20 & 0x3ff | 0xdc00;
            puVar17 = puVar18;
            iVar13 = local_44;
            goto joined_r0x001022a5;
          }
          iVar13 = iVar14 / 3;
          if (iVar8 < iVar14 / 3) {
            iVar13 = iVar8;
          }
          if (iVar13 < 3) goto LAB_0010224c;
          puVar5 = puVar18 + 1;
          iVar8 = local_44;
          do {
            while( true ) {
              puVar17 = puVar5;
              local_44 = iVar8 + 1;
              bVar2 = param_4[iVar8];
              uVar7 = (ushort)(char)bVar2;
              if ((char)bVar2 < '\0') break;
              puVar17[-1] = uVar7;
LAB_00101fc9:
              puVar5 = puVar17 + 1;
              iVar8 = local_44;
              if (puVar17 + 1 == puVar18 + (ulong)(iVar13 - 1) + 2) goto LAB_00101f3b;
            }
            if (bVar2 < 0xe0) {
              if ((bVar2 < 0xc0) || (lVar10 = (long)local_44, 0x3f < (byte)(param_4[lVar10] + 0x80))
                 ) goto LAB_00102058;
              local_44 = iVar8 + 2;
              puVar17[-1] = (uVar7 & 0x1f) << 6 | (ushort)(byte)(param_4[lVar10] + 0x80);
              goto LAB_00101fc9;
            }
            if (0xef < bVar2) {
LAB_00102058:
              if (-1 < (int)param_6) {
                iVar16 = iVar16 + 1;
                utf8_nextCharSafeBody_76_godot(param_4,&local_44,param_5,bVar2,0xffffffff);
                puVar17[-1] = uVar20;
                goto LAB_00101fc9;
              }
              goto LAB_00102105;
            }
            lVar10 = (long)local_44;
            if ((0x3f < (byte)(param_4[lVar10] + 0x80)) ||
               (lVar9 = (long)local_44, 0x3f < (byte)(param_4[lVar9 + 1] + 0x80)))
            goto LAB_00102058;
            local_44 = iVar8 + 3;
            puVar17[-1] = uVar7 << 0xc |
                          (ushort)(byte)(param_4[lVar10] + 0x80) << 6 |
                          (ushort)(byte)(param_4[lVar9 + 1] + 0x80);
            puVar5 = puVar17 + 1;
            iVar8 = local_44;
          } while (puVar17 + 1 != puVar18 + (ulong)(iVar13 - 1) + 2);
        } while( true );
      }
      bVar2 = *param_4;
      uVar11 = (ulong)bVar2;
      if (bVar2 != 0) {
        if ((param_1 < puVar1) && (puVar18 = param_1, bVar2 < 0x80)) {
          do {
            param_4 = param_4 + 1;
            puVar17 = puVar18 + 1;
            *puVar18 = (short)(char)uVar11;
            bVar2 = *param_4;
            uVar11 = (ulong)bVar2;
            if (bVar2 == 0) {
              uVar11 = (long)puVar17 - (long)param_1 >> 1;
              goto LAB_001021d2;
            }
          } while ((bVar2 < 0x80) && (puVar18 = puVar17, puVar17 < puVar1));
        }
        sVar6 = strlen((char *)param_4);
        param_2 = param_2 & 0xffffffff;
        param_5 = sVar6 & 0xffffffff;
        goto LAB_00101ef9;
      }
      goto LAB_001021d2;
    }
    *param_8 = 1;
  }
  goto LAB_001020d7;
joined_r0x001022a5:
  do {
    puVar18 = puVar17;
    local_44 = iVar13;
    if (puVar1 <= puVar17) break;
    local_44 = iVar13 + 1;
    bVar2 = param_4[iVar13];
    uVar7 = (ushort)(char)bVar2;
    if ((char)bVar2 < '\0') {
      if (bVar2 < 0xe0) {
        if (((local_44 < iVar12) && (0xbf < bVar2)) &&
           (lVar10 = (long)local_44, (byte)(param_4[lVar10] + 0x80) < 0x40)) {
          local_44 = iVar13 + 2;
          puVar18 = puVar17 + 1;
          *puVar17 = (uVar7 & 0x1f) << 6 | (ushort)(byte)(param_4[lVar10] + 0x80);
          goto LAB_001022eb;
        }
      }
      else if ((bVar2 < 0xf0) && (iVar13 + 2 < iVar12)) {
        lVar10 = (long)local_44;
        if (((byte)(param_4[lVar10] + 0x80) < 0x40) &&
           (lVar9 = (long)local_44, (byte)(param_4[lVar9 + 1] + 0x80) < 0x40)) {
          local_44 = iVar13 + 3;
          puVar18 = puVar17 + 1;
          *puVar17 = uVar7 << 0xc |
                     (ushort)(byte)(param_4[lVar9 + 1] + 0x80) |
                     (ushort)(byte)(param_4[lVar10] + 0x80) << 6;
          goto LAB_001022eb;
        }
      }
      if ((int)param_6 < 0) goto LAB_00102105;
      iVar16 = iVar16 + 1;
      utf8_nextCharSafeBody_76_godot(param_4,&local_44,param_5,bVar2);
      puVar18 = puVar17 + 1;
      if ((int)param_6 < 0x10000) {
        *puVar17 = uVar20;
      }
      else {
        *puVar17 = (short)((int)param_6 >> 10) + 0xd7c0;
        if (puVar1 <= puVar18) {
          param_2 = param_2 & 0xffffffff;
          iVar13 = 1;
          goto LAB_0010241f;
        }
        puVar18 = puVar17 + 2;
        puVar17[1] = local_80;
      }
    }
    else {
      *puVar17 = uVar7;
      puVar18 = puVar17 + 1;
    }
LAB_001022eb:
    puVar17 = puVar18;
    iVar13 = local_44;
  } while (local_44 < iVar12);
LAB_0010241c:
  iVar13 = 0;
LAB_0010241f:
  param_2 = param_2 & 0xffffffff;
joined_r0x0010242a:
  do {
    iVar8 = local_44;
    if (iVar12 <= iVar8) break;
    iVar13 = iVar13 + 1;
    local_44 = iVar8 + 1;
    bVar2 = param_4[iVar8];
    if ((char)bVar2 < '\0') {
      if (bVar2 < 0xe0) {
        if (((local_44 < iVar12) && (0xbf < bVar2)) && ((byte)(param_4[local_44] + 0x80) < 0x40)) {
          local_44 = iVar8 + 2;
          goto joined_r0x0010242a;
        }
      }
      else if (((bVar2 < 0xf0) && (iVar8 + 2 < iVar12)) &&
              (((byte)(param_4[local_44] + 0x80) < 0x40 &&
               ((byte)(param_4[(long)local_44 + 1] + 0x80) < 0x40)))) {
        local_44 = iVar8 + 3;
        goto joined_r0x0010242a;
      }
      if ((int)param_6 < 0) goto LAB_00102105;
      iVar16 = iVar16 + 1;
      utf8_nextCharSafeBody_76_godot(param_4,&local_44,param_5,bVar2,0xffffffff);
    }
  } while( true );
  if (param_7 != (int *)0x0) {
    *param_7 = iVar16;
  }
  uVar11 = (ulong)(uint)(iVar13 + (int)((long)puVar18 - (long)param_1 >> 1));
  local_44 = iVar8;
LAB_001021d2:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = (int)uVar11;
  }
  u_terminateUChars_76_godot(param_1,param_2,uVar11,param_8);
  goto LAB_001020d9;
LAB_00102105:
  *param_8 = 10;
LAB_001020d7:
  param_1 = (ushort *)0x0;
LAB_001020d9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



byte * u_strToJavaModifiedUTF8_76_godot
                 (byte *param_1,ulong param_2,uint *param_3,ushort *param_4,int param_5,int *param_6
                 )

{
  ushort *puVar1;
  ushort *puVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  ushort *puVar12;
  int iVar13;
  int iVar14;
  byte *pbVar15;
  
  if (0 < *param_6) {
    return (byte *)0x0;
  }
  if ((((param_4 == (ushort *)0x0 && param_5 != 0) || (param_5 < -1)) ||
      (iVar7 = (int)param_2, param_1 == (byte *)0x0 && iVar7 != 0)) || (iVar7 < 0)) {
    *param_6 = 1;
    return (byte *)0x0;
  }
  pbVar15 = param_1 + iVar7;
  pbVar11 = param_1;
  if (param_5 == -1) {
    uVar5 = *param_4;
    if (uVar5 < 0x80) {
      if ((uVar5 == 0) || (pbVar15 <= param_1)) {
LAB_001028b4:
        if (uVar5 == 0) {
          uVar8 = (long)pbVar11 - (long)param_1 & 0xffffffff;
          if (param_3 != (uint *)0x0) {
            *param_3 = (uint)((long)pbVar11 - (long)param_1);
          }
          goto LAB_00102784;
        }
      }
      else {
        do {
          param_4 = param_4 + 1;
          *pbVar11 = (byte)uVar5;
          pbVar11 = pbVar11 + 1;
          uVar5 = *param_4;
          if (0x7e < (ushort)(uVar5 - 1)) goto LAB_001028b4;
        } while (pbVar11 < pbVar15);
      }
    }
    param_5 = u_strlen_76_godot(param_4);
    param_2 = param_2 & 0xffffffff;
  }
  else if (param_4 == (ushort *)0x0) {
    puVar12 = (ushort *)0x0;
    goto LAB_00102678;
  }
  puVar12 = param_4 + param_5;
LAB_00102678:
  do {
    puVar2 = param_4;
    iVar13 = (int)pbVar15 - (int)pbVar11;
    uVar8 = (long)puVar12 - (long)puVar2 >> 1;
    iVar7 = (int)uVar8;
    uVar8 = uVar8 & 0xffffffff;
    if (((iVar7 <= iVar13) && (0 < iVar7)) &&
       ((*puVar2 < 0x80 && (puVar1 = puVar2, pbVar10 = pbVar11, puVar2 < puVar12)))) {
      do {
        uVar5 = *puVar1;
        pbVar11 = pbVar10;
        if (0x7e < uVar5 - 1) break;
        puVar1 = puVar1 + 1;
        pbVar11 = pbVar10 + 1;
        *pbVar10 = (byte)uVar5;
        pbVar10 = pbVar11;
      } while (puVar1 < puVar12);
      iVar14 = (int)((long)puVar1 - (long)puVar2 >> 1);
      iVar13 = iVar13 - iVar14;
      uVar8 = (ulong)(uint)(iVar7 - iVar14);
      puVar2 = puVar1;
    }
    uVar9 = (ulong)(uint)(iVar13 / 3);
    if ((int)uVar8 < iVar13 / 3) {
      uVar9 = uVar8;
    }
    if ((int)uVar9 < 3) goto LAB_0010274a;
    param_4 = puVar2 + uVar9;
    do {
      uVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      if (uVar5 - 1 < 0x7f) {
        *pbVar11 = (byte)uVar5;
        pbVar10 = pbVar11 + 1;
      }
      else {
        bVar3 = (byte)uVar5 & 0x3f | 0x80;
        bVar4 = (byte)(uVar5 >> 6);
        if (uVar5 < 0x800) {
          pbVar11[1] = bVar3;
          pbVar10 = pbVar11 + 2;
          *pbVar11 = bVar4 | 0xc0;
        }
        else {
          pbVar11[2] = bVar3;
          pbVar10 = pbVar11 + 3;
          *pbVar11 = (byte)(uVar5 >> 0xc) | 0xe0;
          pbVar11[1] = bVar4 & 0x3f | 0x80;
        }
      }
      pbVar11 = pbVar10;
    } while (puVar2 != param_4);
  } while( true );
LAB_001028e0:
  if (puVar12 <= puVar2) goto LAB_00102776;
  uVar5 = *puVar2;
  while (puVar2 = puVar2 + 1, uVar5 - 1 < 0x7f) {
    iVar7 = iVar7 + 1;
    if (puVar12 <= puVar2) goto LAB_00102776;
    uVar5 = *puVar2;
  }
  iVar7 = (0x7ff < uVar5) + 2 + iVar7;
  goto LAB_001028e0;
LAB_0010274a:
  pbVar10 = pbVar11;
  if (puVar2 < puVar12) {
    while( true ) {
      uVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      bVar4 = (byte)uVar5;
      if (0x7e < uVar5 - 1) break;
      if (pbVar15 <= pbVar10) {
        iVar7 = 1;
        goto LAB_001028e0;
      }
      *pbVar10 = bVar4;
      pbVar10 = pbVar10 + 1;
      if (puVar12 <= puVar2) goto LAB_00102774;
    }
    if (uVar5 < 0x800) {
      if ((long)pbVar15 - (long)pbVar10 < 2) {
        iVar7 = 2;
        goto LAB_001028e0;
      }
      pbVar11 = pbVar10 + 2;
      *pbVar10 = (byte)(uVar5 >> 6) | 0xc0;
      pbVar10[1] = bVar4 & 0x3f | 0x80;
    }
    else {
      if ((long)pbVar15 - (long)pbVar10 < 3) {
        iVar7 = 3;
        goto LAB_001028e0;
      }
      pbVar11 = pbVar10 + 3;
      pbVar10[2] = bVar4 & 0x3f | 0x80;
      *pbVar10 = (byte)(uVar5 >> 0xc) | 0xe0;
      pbVar10[1] = (byte)(uVar5 >> 6) & 0x3f | 0x80;
    }
    goto LAB_0010274a;
  }
LAB_00102774:
  iVar7 = 0;
LAB_00102776:
  uVar6 = iVar7 + ((int)pbVar10 - (int)param_1);
  uVar8 = (ulong)uVar6;
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar6;
  }
LAB_00102784:
  u_terminateChars_76_godot(param_1,param_2,uVar8,param_6);
  return param_1;
}


