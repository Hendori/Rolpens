
long utf8TextLength(long param_1)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x78) < 0) {
    pcVar2 = (char *)((long)*(int *)(param_1 + 0x7c) + *(long *)(param_1 + 0x48));
    cVar1 = *pcVar2;
    while (cVar1 != '\0') {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
    }
    lVar3 = (long)pcVar2 - *(long *)(param_1 + 0x48);
    if (0x7fffffff < lVar3) {
      lVar3 = 0x7fffffff;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffd;
    *(int *)(param_1 + 0x78) = (int)lVar3;
    return (long)(int)lVar3;
  }
  return (long)*(int *)(param_1 + 0x78);
}



long utf8TextMapOffsetToNative(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50);
  return (long)(int)((uint)*(byte *)(lVar1 + 0x60 +
                                    (long)(*(int *)(lVar1 + 8) + *(int *)(param_1 + 0x28))) +
                    *(int *)(lVar1 + 0x14));
}



int utf8TextMapIndexToUTF16(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50);
  return (uint)*(byte *)(lVar1 + 0x84 + (long)(param_2 - *(int *)(lVar1 + 0x14))) -
         *(int *)(lVar1 + 8);
}



long repTextLength(long param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x48) + 0x40))();
  return (long)iVar1;
}



long unistrTextLength(long param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(*(long *)(param_1 + 0x48) + 8);
  if (-1 < sVar1) {
    return (long)(sVar1 >> 5);
  }
  return (long)*(int *)(*(long *)(param_1 + 0x48) + 0xc);
}



undefined8 unistrTextAccess(long param_1,long param_2,char param_3)

{
  int3 iVar1;
  long lVar2;
  
  lVar2 = (long)*(int *)(param_1 + 0x2c);
  iVar1 = (int3)((uint)*(int *)(param_1 + 0x2c) >> 8);
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (param_3 == '\0') {
      return 0;
    }
    return CONCAT71((int7)iVar1,0 < lVar2);
  }
  if (lVar2 <= param_2) {
    param_2 = lVar2;
  }
  *(int *)(param_1 + 0x28) = (int)param_2;
  if (param_3 != '\0') {
    return CONCAT71((int7)iVar1,param_2 < lVar2);
  }
  return CONCAT71((int7)iVar1,0 < param_2);
}



void ucstrTextLength(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (-1 < *(long *)(param_1 + 0x70)) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x10);
  if (*(short *)(*(long *)(param_1 + 0x48) + lVar2 * 2) != 0) {
    lVar1 = lVar2 + 1;
    do {
      lVar2 = lVar1;
      lVar1 = lVar2 + 1;
    } while (*(short *)(*(long *)(param_1 + 0x48) + -2 + (lVar2 + 1) * 2) != 0);
    *(long *)(param_1 + 0x10) = lVar2;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffd;
  *(long *)(param_1 + 0x70) = lVar2;
  *(int *)(param_1 + 0x2c) = (int)lVar2;
  *(int *)(param_1 + 0x1c) = (int)lVar2;
  return;
}



ulong ucstrTextAccess(long param_1,ulong param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  short *psVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  
  if ((long)param_2 < 0) {
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 0x48);
    if ((long)param_2 < (long)uVar4) {
      if ((*(ushort *)(lVar1 + param_2 * 2) & 0xfc00) == 0xdc00) {
        uVar4 = 0;
        uVar5 = param_2;
        if (param_2 == 0) goto LAB_001001b4;
        if ((*(ushort *)(lVar1 + -2 + param_2 * 2) & 0xfc00) == 0xd800) {
          param_2 = param_2 - 1;
        }
      }
      uVar4 = param_2 & 0xffffffff;
      uVar5 = param_2;
    }
    else {
      uVar5 = *(ulong *)(param_1 + 0x70);
      if ((long)uVar5 < 0) {
        uVar2 = (int)param_2 + 0x20;
        if (0x7fffffff < param_2 + 0x20) {
          uVar2 = 0x7fffffff;
        }
        uVar9 = (uint)uVar4;
        uVar4 = uVar4 & 0xffffffff;
        if ((int)uVar9 < (int)uVar2) {
          psVar6 = (short *)(lVar1 + (long)(int)uVar9 * 2);
          do {
            iVar3 = (int)uVar4;
            if (*psVar6 == 0) {
              uVar7 = (ulong)iVar3;
              *(int *)(param_1 + 0x2c) = iVar3;
              *(ulong *)(param_1 + 0x70) = uVar7;
              *(int *)(param_1 + 0x1c) = iVar3;
              uVar5 = uVar7;
              if (((((long)param_2 < (long)uVar7) &&
                   (uVar4 = param_2 & 0xffffffff, uVar5 = param_2,
                   (*(ushort *)(lVar1 + param_2 * 2) & 0xfc00) == 0xdc00)) &&
                  (uVar4 = 0, param_2 != 0)) &&
                 (uVar4 = param_2 & 0xffffffff,
                 (*(ushort *)(lVar1 + -2 + param_2 * 2) & 0xfc00) == 0xd800)) {
                uVar4 = param_2 - 1 & 0xffffffff;
                uVar5 = param_2 - 1;
              }
              *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffd;
              *(ulong *)(param_1 + 0x10) = uVar7;
              goto LAB_001001b4;
            }
            uVar4 = (ulong)(iVar3 + 1U);
            psVar6 = psVar6 + 1;
            uVar9 = uVar2;
          } while (uVar2 != iVar3 + 1U);
        }
        uVar5 = param_2;
        if (((*(ushort *)(lVar1 + param_2 * 2) & 0xfc00) == 0xdc00) && (param_2 != 0)) {
          uVar5 = param_2 - ((*(ushort *)(lVar1 + -2 + param_2 * 2) & 0xfc00) == 0xd800);
        }
        if (uVar9 == 0x7fffffff) {
          *(undefined8 *)(param_1 + 0x70) = 0x7fffffff;
          *(undefined4 *)(param_1 + 0x2c) = 0x7fffffff;
          if (0x7fffffff < (long)uVar5) {
            uVar5 = 0x7fffffff;
          }
          *(undefined4 *)(param_1 + 0x1c) = 0x7fffffff;
          *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffd;
          *(undefined8 *)(param_1 + 0x10) = 0x7fffffff;
          uVar4 = uVar5 & 0xffffffff;
        }
        else {
          lVar8 = (long)(int)uVar9;
          if ((*(ushort *)(lVar1 + -2 + lVar8 * 2) & 0xfc00) == 0xd800) {
            uVar9 = uVar9 - 1;
            lVar8 = (long)(int)uVar9;
          }
          *(long *)(param_1 + 0x10) = lVar8;
          uVar4 = uVar5 & 0xffffffff;
          *(uint *)(param_1 + 0x1c) = uVar9;
          *(uint *)(param_1 + 0x2c) = uVar9;
        }
      }
      else {
        uVar4 = uVar5 & 0xffffffff;
      }
    }
  }
LAB_001001b4:
  *(int *)(param_1 + 0x28) = (int)uVar4;
  if (((char)param_3 == '\0') || (uVar4 = 1, *(long *)(param_1 + 0x10) <= (long)uVar5)) {
    uVar4 = (ulong)((uint)CONCAT71((int7)(uVar4 >> 8),(char)param_3 == '\0') &
                   CONCAT31((int3)((uint)param_3 >> 8),0 < (long)uVar5));
  }
  return uVar4;
}



void charIterTextClose(long param_1)

{
  if (*(long **)(param_1 + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x60) + 8))();
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}



long charIterTextLength(long param_1)

{
  return (long)*(int *)(param_1 + 0x70);
}



bool charIterTextAccess(long param_1,int param_2,char param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined2 uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long local_40;
  
  plVar3 = *(long **)(param_1 + 0x48);
  if (param_2 < 0) {
    lVar8 = 0;
    uVar7 = 0;
    param_2 = 0;
    if (param_3 == '\0') goto LAB_00100435;
LAB_0010055a:
    if (*(long *)(param_1 + 0x20) == lVar8) {
      param_2 = param_2 - (int)lVar8;
      iVar5 = *(int *)(param_1 + 0x2c);
      *(int *)(param_1 + 0x28) = param_2;
      goto LAB_0010052f;
    }
  }
  else {
    lVar8 = *(long *)(param_1 + 0x70);
    if (lVar8 <= param_2) {
      param_2 = (int)lVar8;
    }
    if (param_3 != '\0') {
      if ((param_2 != lVar8) || (param_2 < 1)) {
        uVar7 = param_2 - param_2 % 0x10;
        lVar8 = (long)(int)uVar7;
      }
      else {
        uVar7 = param_2 - 1U & 0xfffffff0;
        lVar8 = (long)(int)uVar7;
      }
      goto LAB_0010055a;
    }
    if (param_2 < 1) {
      uVar7 = param_2 - param_2 % 0x10;
      lVar8 = (long)(int)uVar7;
    }
    else {
      uVar7 = param_2 - 1U & 0xfffffff0;
      lVar8 = (long)(int)uVar7;
    }
LAB_00100435:
    if (*(long *)(param_1 + 0x20) == lVar8) {
      param_2 = param_2 - (int)lVar8;
      *(int *)(param_1 + 0x28) = param_2;
      goto LAB_001004cf;
    }
  }
  if (*(uint *)(param_1 + 0x78) == uVar7) {
    local_40 = *(long *)(param_1 + 0x50);
    lVar6 = *(long *)(param_1 + 0x70);
  }
  else if (*(uint *)(param_1 + 0x7c) == uVar7) {
    local_40 = *(long *)(param_1 + 0x58);
    lVar6 = *(long *)(param_1 + 0x70);
  }
  else {
    local_40 = *(long *)(param_1 + 0x50);
    if (*(long *)(param_1 + 0x30) == local_40) {
      local_40 = *(long *)(param_1 + 0x58);
    }
    lVar9 = (long)(int)uVar7;
    (**(code **)(*plVar3 + 0x78))(plVar3,uVar7);
    lVar1 = lVar9 + 0x10;
    lVar2 = lVar9 * -2;
    do {
      uVar4 = (**(code **)(*plVar3 + 0x28))(plVar3);
      *(undefined2 *)(local_40 + lVar2 + lVar9 * 2) = uVar4;
      lVar6 = *(long *)(param_1 + 0x70);
      if (lVar6 < lVar9) break;
      lVar9 = lVar9 + 1;
    } while (lVar1 != lVar9);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x10;
  *(long *)(param_1 + 0x20) = lVar8;
  *(long *)(param_1 + 0x30) = local_40;
  if (lVar6 < (int)(uVar7 + 0x10)) {
    *(long *)(param_1 + 0x10) = lVar6;
    iVar5 = (int)lVar6 - uVar7;
    *(int *)(param_1 + 0x2c) = iVar5;
  }
  else {
    *(long *)(param_1 + 0x10) = (long)(int)(uVar7 + 0x10);
    iVar5 = 0x10;
  }
  param_2 = param_2 - uVar7;
  *(int *)(param_1 + 0x1c) = iVar5;
  *(int *)(param_1 + 0x28) = param_2;
  if (param_3 == '\0') {
LAB_001004cf:
    return 0 < param_2;
  }
LAB_0010052f:
  return param_2 < iVar5;
}



undefined4 utf8TextAccess(long param_1,long param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  ushort *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  bool bVar8;
  byte bVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  long lVar16;
  size_t sVar17;
  long lVar18;
  int iVar19;
  uint uVar20;
  char *pcVar21;
  byte bVar22;
  uint uVar23;
  char cVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  long in_FS_OFFSET;
  bool bVar30;
  uint local_a0;
  uint local_44;
  long local_40;
  
  lVar6 = *(long *)(param_1 + 0x48);
  uVar14 = *(uint *)(param_1 + 0x78);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar13 = (uint)param_2;
  if (param_2 < 0) {
    if ((int)uVar14 < 0) {
      uVar13 = 0;
LAB_0010075f:
      uVar23 = *(uint *)(param_1 + 0x7c);
      if ((int)uVar23 <= (int)uVar13) {
LAB_00100895:
        lVar16 = (long)(int)uVar23;
        cVar24 = *(char *)(lVar6 + lVar16);
        if ((int)uVar23 < (int)uVar13) {
          do {
            uVar23 = (uint)lVar16;
            if (*(char *)(lVar6 + lVar16) == '\0') goto LAB_001008c0;
            uVar23 = (uint)lVar16 + 1;
            lVar16 = lVar16 + 1;
            *(uint *)(param_1 + 0x7c) = uVar23;
          } while ((int)lVar16 < (int)uVar13);
          cVar24 = *(char *)(lVar6 + (int)uVar23);
        }
        if (cVar24 == '\0') {
LAB_001008c0:
          uVar14 = uVar23;
          *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffd;
          *(uint *)(param_1 + 0x78) = uVar14;
          uVar13 = uVar14;
          if (param_3 == '\0') goto LAB_0010069e;
          goto LAB_00100851;
        }
        if (param_3 != '\0') {
          lVar16 = *(long *)(param_1 + 0x10);
          param_2 = (long)(int)uVar13;
          if (lVar16 == param_2) {
            puVar15 = *(uint **)(param_1 + 0x58);
            lVar16 = param_2;
            if ((int)*puVar15 <= (int)uVar13) goto LAB_0010095b;
            if (uVar14 == uVar13) goto LAB_00100940;
            goto LAB_001009ec;
          }
          goto LAB_001007b9;
        }
        goto LAB_0010069e;
      }
      if (param_3 == '\0') goto LAB_0010069e;
      lVar16 = *(long *)(param_1 + 0x10);
      param_2 = (long)(int)uVar13;
      if (lVar16 == param_2) goto LAB_0010094d;
      puVar15 = *(uint **)(param_1 + 0x58);
      if ((int)*puVar15 <= (int)uVar13) goto LAB_00100976;
      bVar30 = lVar16 <= param_2;
LAB_001007dc:
      if ((param_2 < *(long *)(param_1 + 0x20)) || (bVar30)) {
LAB_001009ec:
        if (*(char *)(lVar6 + (int)uVar13) < -0x40) {
          uVar13 = utf8_back1SafeBody_76_godot(lVar6,0,uVar13);
          puVar15 = *(uint **)(param_1 + 0x58);
        }
        uVar5 = *(undefined8 *)(param_1 + 0x50);
        piVar7 = *(int **)(param_1 + 0x58);
        local_a0 = *(uint *)(param_1 + 0x78);
        *(int **)(param_1 + 0x50) = piVar7;
        *(undefined8 *)(param_1 + 0x58) = uVar5;
        bVar30 = (int)local_a0 < 0;
        if (bVar30) {
          local_a0 = 0x7fffffff;
        }
        piVar2 = piVar7 + 6;
        bVar8 = false;
        uVar14 = 0;
        uVar23 = 0;
        uVar20 = uVar13;
        uVar26 = uVar13;
        do {
          cVar24 = (char)uVar26;
          lVar16 = (long)(int)uVar23;
          if (0x1f < (int)uVar23) goto LAB_00100f37;
          uVar28 = uVar20 + 1;
          pbVar3 = (byte *)(lVar6 + (int)uVar20);
          bVar22 = *pbVar3;
          uVar14 = (uint)bVar22;
          if (uVar14 - 1 < 0x7f) {
            *(ushort *)((long)piVar2 + lVar16 * 2) = (ushort)bVar22;
            *(char *)((long)piVar7 + lVar16 + 0x60) = (char)uVar20 - cVar24;
            *(char *)((long)piVar7 + (long)(int)(uVar20 - uVar13) + 0x84) = (char)uVar23;
            uVar29 = uVar23 + 1;
          }
          else {
            if (!bVar8) {
              piVar7[4] = uVar23;
              uVar14 = (uint)*pbVar3;
            }
            if ((char)uVar14 < '\0') {
              uVar29 = uVar28;
              if (local_a0 == uVar28) {
LAB_00100cb0:
                uVar28 = uVar29;
                uVar10 = 0xfffd;
                uVar14 = 0xfffd;
                goto LAB_00100afd;
              }
              if (uVar14 < 0xe0) {
                if ((0xc1 < uVar14) &&
                   (bVar22 = *(char *)(lVar6 + (int)uVar28) + 0x80, bVar22 < 0x40)) {
                  uVar28 = uVar20 + 2;
                  uVar14 = (uVar14 & 0x1f) << 6 | (uint)bVar22;
                  goto LAB_00100afa;
                }
                goto LAB_00100cb0;
              }
              if (0xef < uVar14) {
                uVar14 = uVar14 - 0xf0;
                if (((((int)uVar14 < 5) &&
                     (lVar18 = (long)(int)uVar28,
                     ((uint)(int)(char)(&DAT_00103e68)[*(byte *)(lVar6 + lVar18) >> 4] >>
                      (uVar14 & 0x1f) & 1) != 0)) &&
                    (uVar28 = uVar20 + 2, uVar29 = uVar28, local_a0 != uVar28)) &&
                   (bVar22 = *(char *)(lVar6 + (int)uVar28) + 0x80, bVar22 < 0x40)) {
                  uVar27 = *(byte *)(lVar6 + lVar18) & 0x3f | uVar14 * 0x40;
                  goto LAB_00100c02;
                }
                goto LAB_00100cb0;
              }
              uVar27 = uVar14 & 0xf;
              bVar22 = *(byte *)(lVar6 + (int)uVar28) & 0x3f;
              if (((uint)(int)(char)(&_LC0)[uVar14 & 0xf] >> (*(byte *)(lVar6 + (int)uVar28) >> 5) &
                  1) == 0) goto LAB_00100cb0;
LAB_00100c02:
              uVar25 = uVar28 + 1;
              uVar29 = local_a0;
              if (local_a0 == uVar25) goto LAB_00100cb0;
              bVar9 = *(char *)(lVar6 + (int)uVar25) + 0x80;
              if (0x3f < bVar9) {
                uVar10 = 0xfffd;
                uVar14 = 0xfffd;
                uVar28 = uVar25;
                goto LAB_00100afd;
              }
              uVar28 = uVar28 + 2;
              uVar14 = ((uint)bVar22 | uVar27 << 6) << 6 | (uint)bVar9;
              if (uVar14 == 0) goto LAB_00100b98;
              if ((int)uVar14 < 0x10000) goto LAB_00100afa;
              uVar29 = uVar23 + 2;
              *(short *)((long)piVar2 + lVar16 * 2) = (short)((int)uVar14 >> 10) + -0x2840;
              *(ushort *)((long)piVar7 + lVar16 * 2 + 0x1a) = (ushort)uVar14 & 0x3ff | 0xdc00;
            }
            else {
              if (uVar14 == 0) {
LAB_00100b98:
                if (bVar30) {
                  uVar14 = 0;
                  uVar20 = uVar28 - 1;
                  bVar8 = bVar30;
                  goto LAB_00100f37;
                }
                uVar10 = 0;
                uVar14 = 0;
              }
              else {
LAB_00100afa:
                uVar10 = (undefined2)uVar14;
              }
LAB_00100afd:
              uVar29 = uVar23 + 1;
              *(undefined2 *)((long)piVar2 + lVar16 * 2) = uVar10;
            }
            sVar17 = (ulong)((uVar29 - uVar23) - 1) + 1;
            if ((int)uVar29 <= (int)uVar23) {
              sVar17 = 1;
            }
            memset((void *)((long)piVar7 + lVar16 + 0x60),uVar20 - uVar26 & 0xff,sVar17);
            sVar17 = (ulong)((uVar28 - uVar20) - 1) + 1;
            if ((int)uVar28 <= (int)uVar20) {
              sVar17 = 1;
            }
            memset((void *)((long)piVar7 + ((long)(int)uVar20 - (long)(int)uVar13) + 0x84),
                   uVar23 & 0xff,sVar17);
            uVar26 = uVar26 & 0xff;
            bVar8 = true;
          }
          cVar24 = (char)uVar26;
          uVar23 = uVar29;
          uVar20 = uVar28;
        } while ((int)uVar28 < (int)local_a0);
        lVar16 = (long)(int)uVar29;
LAB_00100f37:
        *(char *)((long)piVar7 + lVar16 + 0x60) = (char)uVar20 - cVar24;
        *(char *)((long)piVar7 + (long)(int)(uVar20 - uVar13) + 0x84) = (char)uVar23;
        *puVar15 = uVar13;
        puVar15[1] = uVar20;
        piVar7[2] = 0;
        piVar7[3] = uVar23;
        if (!bVar8) {
          piVar7[4] = uVar23;
        }
        piVar7[5] = uVar13;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(int **)(param_1 + 0x30) = piVar2;
        *(int *)(param_1 + 0x2c) = piVar7[3];
        *(long *)(param_1 + 0x20) = (long)*piVar7;
        *(long *)(param_1 + 0x10) = (long)piVar7[1];
        *(int *)(param_1 + 0x1c) = piVar7[4];
        if (((bVar30) && (*(int *)(param_1 + 0x7c) < (int)uVar20)) &&
           (*(uint *)(param_1 + 0x7c) = uVar20, uVar14 == 0)) {
          *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffd;
          *(uint *)(param_1 + 0x78) = uVar20;
        }
      }
      else {
        lVar6 = *(long *)(param_1 + 0x50);
        *(uint *)(param_1 + 0x28) =
             (uint)*(byte *)(lVar6 + 0x84 + (long)(int)(uVar13 - *(int *)(lVar6 + 0x14))) -
             *(int *)(lVar6 + 8);
      }
    }
    else {
      if (param_3 == '\0') {
        lVar16 = *(long *)(param_1 + 0x20);
        if (lVar16 != 0) {
          puVar15 = *(uint **)(param_1 + 0x58);
          uVar23 = *puVar15;
          if ((int)uVar23 < 0) {
            lVar18 = 0;
            uVar14 = 0;
            goto LAB_001006bb;
          }
LAB_001006d2:
          if (uVar23 != 0) {
            uVar23 = 0;
LAB_001006d8:
            puVar15[2] = 0;
            puVar15[3] = 0;
            puVar15[4] = 0;
            puVar15[5] = uVar23;
            *(undefined1 *)(puVar15 + 0x18) = 0;
            *(undefined1 *)(puVar15 + 0x21) = 0;
            *(ulong *)puVar15 = CONCAT44(uVar23,uVar23);
            puVar15 = *(uint **)(param_1 + 0x58);
          }
          goto LAB_00100706;
        }
LAB_00100745:
        iVar19 = 0;
        goto LAB_00100747;
      }
      param_2 = 0;
      uVar13 = 0;
LAB_001007ac:
      lVar16 = *(long *)(param_1 + 0x10);
      if (lVar16 == param_2) {
        if (uVar13 == uVar14) goto LAB_00100940;
LAB_0010094d:
        lVar16 = param_2;
        puVar15 = *(uint **)(param_1 + 0x58);
        if ((int)uVar13 < (int)*puVar15) goto LAB_001009ec;
LAB_0010095b:
        if ((int)puVar15[1] <= (int)uVar13) {
          param_2 = lVar16;
          if (uVar14 == uVar13) goto LAB_00100940;
          goto LAB_00101003;
        }
      }
      else {
LAB_001007b9:
        puVar15 = *(uint **)(param_1 + 0x58);
        if ((int)uVar13 < (int)*puVar15) {
          if (uVar14 == uVar13) {
            uVar20 = puVar15[1];
            uVar23 = uVar13;
            goto LAB_00100877;
          }
          bVar30 = lVar16 <= param_2;
          goto LAB_001007dc;
        }
LAB_00100976:
        uVar20 = puVar15[1];
LAB_00100981:
        if ((int)uVar20 <= (int)uVar13) {
          if (uVar14 == uVar13) {
            uVar23 = uVar14;
            if (param_2 == lVar16) goto LAB_00100940;
            goto LAB_00100877;
          }
LAB_00101003:
          bVar30 = lVar16 <= param_2;
          goto LAB_001007dc;
        }
      }
LAB_0010098a:
      uVar14 = puVar15[2];
      uVar5 = *(undefined8 *)(param_1 + 0x50);
      *(uint **)(param_1 + 0x50) = puVar15;
      *(undefined8 *)(param_1 + 0x58) = uVar5;
      *(long *)(param_1 + 0x30) = (long)puVar15 + (long)(int)uVar14 * 2 + 0x18;
      *(uint *)(param_1 + 0x2c) = puVar15[3] - uVar14;
      *(long *)(param_1 + 0x20) = (long)(int)*puVar15;
      *(long *)(param_1 + 0x10) = (long)(int)puVar15[1];
      *(uint *)(param_1 + 0x1c) = puVar15[4];
      *(uint *)(param_1 + 0x28) =
           (uint)*(byte *)((long)puVar15 + (long)(int)(uVar13 - puVar15[5]) + 0x84) - puVar15[2];
    }
  }
  else {
    if (param_2 < 0x80000000) {
      if ((int)uVar13 <= (int)uVar14) {
        if (param_3 != '\0') goto LAB_001007ac;
        goto LAB_0010069e;
      }
      if ((int)uVar14 < 0) goto LAB_0010075f;
LAB_00100849:
      uVar13 = uVar14;
      if (param_3 != '\0') {
LAB_00100851:
        lVar16 = *(long *)(param_1 + 0x10);
        param_2 = (long)(int)uVar14;
        if (lVar16 != param_2) {
          puVar15 = *(uint **)(param_1 + 0x58);
          uVar20 = puVar15[1];
          uVar13 = uVar14;
          uVar23 = uVar14;
          if ((int)*puVar15 <= (int)uVar14) goto LAB_00100981;
          goto LAB_00100877;
        }
LAB_00100940:
        iVar19 = *(int *)(param_1 + 0x2c);
LAB_00100747:
        *(int *)(param_1 + 0x28) = iVar19;
        uVar11 = 0;
        goto LAB_00100815;
      }
LAB_0010069e:
      uVar14 = uVar13;
      lVar16 = *(long *)(param_1 + 0x20);
      lVar18 = (long)(int)uVar14;
      if (lVar18 == lVar16) {
        if (uVar14 == 0) goto LAB_00100745;
        puVar15 = *(uint **)(param_1 + 0x58);
LAB_00100cfd:
        if (((int)*puVar15 < (int)uVar14) && (uVar13 = uVar14, (int)uVar14 <= (int)puVar15[1]))
        goto LAB_0010098a;
      }
      else {
        puVar15 = *(uint **)(param_1 + 0x58);
        uVar23 = *puVar15;
        if ((int)uVar23 < (int)uVar14) {
LAB_001006bb:
          uVar13 = uVar14;
          if ((int)uVar14 <= (int)puVar15[1]) goto LAB_0010098a;
        }
        if (uVar14 == 0) goto LAB_001006d2;
        if (lVar16 < lVar18) {
LAB_00100cc5:
          if (lVar18 <= *(long *)(param_1 + 0x10)) {
            lVar6 = *(long *)(param_1 + 0x50);
            iVar19 = (uint)*(byte *)(lVar6 + 0x84 + (long)(int)(uVar14 - *(int *)(lVar6 + 0x14))) -
                     *(int *)(lVar6 + 8);
            *(int *)(param_1 + 0x28) = iVar19;
            uVar11 = CONCAT31((int3)((uint)iVar19 >> 8),iVar19 != 0);
            goto LAB_00100815;
          }
        }
      }
      if ((*(uint *)(param_1 + 0x78) != uVar14) && (*(char *)(lVar6 + (int)uVar14) < -0x40)) {
        uVar14 = utf8_back1SafeBody_76_godot(lVar6,0,uVar14);
        puVar15 = *(uint **)(param_1 + 0x58);
      }
    }
    else {
      if (uVar14 != 0x7fffffff) {
        if ((int)uVar14 < 0) {
          uVar23 = *(uint *)(param_1 + 0x7c);
          uVar13 = 0x7fffffff;
          goto LAB_00100895;
        }
        goto LAB_00100849;
      }
      if (param_3 != '\0') {
        if (*(long *)(param_1 + 0x10) == 0x7fffffff) goto LAB_00100940;
        puVar15 = *(uint **)(param_1 + 0x58);
        uVar20 = puVar15[1];
        uVar23 = 0x7fffffff;
LAB_00100877:
        if (uVar23 != uVar20) goto LAB_001006d8;
LAB_00100706:
        uVar14 = puVar15[2];
        uVar5 = *(undefined8 *)(param_1 + 0x50);
        *(uint **)(param_1 + 0x50) = puVar15;
        *(undefined8 *)(param_1 + 0x58) = uVar5;
        *(long *)(param_1 + 0x30) = (long)puVar15 + (long)(int)uVar14 * 2 + 0x18;
        iVar19 = puVar15[3] - uVar14;
        *(int *)(param_1 + 0x2c) = iVar19;
        *(long *)(param_1 + 0x20) = (long)(int)*puVar15;
        *(long *)(param_1 + 0x10) = (long)(int)puVar15[1];
        *(uint *)(param_1 + 0x1c) = puVar15[4];
        if (puVar15[1] != uVar23) goto LAB_00100745;
        goto LAB_00100747;
      }
      puVar15 = *(uint **)(param_1 + 0x58);
      lVar16 = *(long *)(param_1 + 0x20);
      uVar23 = *puVar15;
      if (lVar16 == 0x7fffffff) goto LAB_00100cfd;
      if (uVar23 != 0x7fffffff) {
        lVar18 = 0x7fffffff;
        goto LAB_001006bb;
      }
      if (lVar16 < 0x7fffffff) {
        lVar18 = 0x7fffffff;
        goto LAB_00100cc5;
      }
    }
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    piVar7 = *(int **)(param_1 + 0x58);
    uVar13 = uVar14 - 0x65;
    iVar12 = 0x22;
    *(int **)(param_1 + 0x50) = piVar7;
    *(undefined8 *)(param_1 + 0x58) = uVar5;
    iVar19 = 0x22;
    *(undefined1 *)((long)piVar7 + 0x82) = 0x65;
    *(undefined1 *)((long)piVar7 + 0xe9) = 0x22;
    local_44 = uVar14;
    uVar23 = uVar13;
    do {
      if (((int)(local_44 - uVar13) < 6) || ((int)local_44 < 1)) break;
      local_44 = local_44 - 1;
      iVar1 = iVar19 + -1;
      lVar18 = (long)(int)local_44;
      lVar16 = (long)iVar1 * 2;
      bVar22 = *(byte *)(lVar6 + lVar18);
      puVar4 = (ushort *)((long)piVar7 + lVar16 + 0x18);
      pcVar21 = (char *)((long)piVar7 + (long)iVar1 + 0x60);
      cVar24 = (char)uVar23;
      if (bVar22 < 0x80) {
        *puVar4 = (ushort)bVar22;
        *(char *)((long)piVar7 + (long)(int)(local_44 - uVar13) + 0x84) = (char)iVar1;
        *pcVar21 = (char)local_44 - cVar24;
        iVar19 = iVar1;
      }
      else {
        iVar12 = utf8_prevCharSafeBody_76_godot(lVar6,0,&local_44,bVar22,0xfffffffd);
        uVar23 = uVar23 & 0xff;
        if (iVar12 < 0x10000) {
          *puVar4 = (ushort)iVar12;
          *pcVar21 = (char)local_44 - cVar24;
          iVar19 = iVar1;
        }
        else {
          iVar19 = iVar19 + -2;
          *puVar4 = (ushort)iVar12 & 0x3ff | 0xdc00;
          *pcVar21 = (char)local_44 - cVar24;
          *(short *)((long)piVar7 + lVar16 + 0x16) = (short)(iVar12 >> 10) + -0x2840;
          *(char *)((long)piVar7 + (long)iVar19 + 0x60) = (char)local_44 - cVar24;
        }
        do {
          *(char *)((long)piVar7 + lVar18 + (0x84 - (long)(int)uVar13)) = (char)iVar19;
          lVar18 = lVar18 + -1;
          iVar12 = iVar19;
        } while ((int)local_44 <= (int)lVar18);
      }
    } while (2 < iVar19);
    *puVar15 = local_44;
    puVar15[1] = uVar14;
    piVar7[4] = iVar12 - iVar19;
    piVar7[2] = iVar19;
    piVar7[3] = 0x22;
    piVar7[5] = uVar13;
    *(long *)(param_1 + 0x30) = (long)piVar7 + (long)iVar19 * 2 + 0x18;
    *(ulong *)(param_1 + 0x28) = CONCAT44(0x22 - iVar19,0x22 - iVar19);
    *(long *)(param_1 + 0x20) = (long)*piVar7;
    *(long *)(param_1 + 0x10) = (long)piVar7[1];
    *(int *)(param_1 + 0x1c) = piVar7[4];
  }
  uVar11 = 1;
LAB_00100815:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}



undefined8 repTextAccess(long param_1,long param_2,char param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  wchar16 *pwVar7;
  long lVar8;
  long in_FS_OFFSET;
  int local_8c;
  UnicodeString local_88 [72];
  long local_40;
  
  plVar1 = *(long **)(param_1 + 0x48);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = (**(code **)(*plVar1 + 0x40))(plVar1);
  lVar8 = (long)iVar3;
  if (param_2 < 0) {
    if (param_3 != '\0') {
      param_2 = 0;
      local_8c = 0;
      goto LAB_0010125a;
    }
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 < 0) {
      if (-1 < *(long *)(param_1 + 0x10)) {
        local_8c = 0;
        goto LAB_001013af;
      }
    }
    else {
LAB_00101440:
      if (lVar4 == 0) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        uVar5 = 0;
        goto LAB_00101374;
      }
    }
    local_8c = 0;
    lVar4 = 1;
LAB_00101416:
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (lVar8 < lVar4) {
      lVar4 = lVar8;
    }
    *(long *)(param_1 + 0x10) = lVar4;
LAB_0010129f:
    pwVar7 = *(wchar16 **)(param_1 + 0x40);
    icu_76_godot::UnicodeString::UnicodeString(local_88,pwVar7,0,10);
    (**(code **)(*plVar1 + 0x18))
              (plVar1,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x10),local_88);
    lVar4 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x20);
    *(wchar16 **)(param_1 + 0x30) = pwVar7;
    iVar3 = (int)lVar4 - (int)lVar2;
    local_8c = local_8c - (int)lVar2;
    *(int *)(param_1 + 0x2c) = iVar3;
    *(int *)(param_1 + 0x28) = local_8c;
    if ((lVar4 < lVar8) && (iVar6 = iVar3 + -1, (pwVar7[iVar6] & 0xfc00U) == 0xd800)) {
      *(int *)(param_1 + 0x2c) = iVar6;
      *(long *)(param_1 + 0x10) = lVar4 + -1;
      iVar3 = iVar6;
      if (iVar6 < local_8c) {
        *(int *)(param_1 + 0x28) = iVar6;
        local_8c = iVar6;
      }
    }
    if ((0 < lVar2) && ((*pwVar7 & 0xfc00U) == 0xdc00)) {
      pwVar7 = pwVar7 + 1;
      iVar3 = iVar3 + -1;
      local_8c = local_8c + -1;
      *(wchar16 **)(param_1 + 0x30) = pwVar7;
      *(long *)(param_1 + 0x20) = lVar2 + 1;
      *(int *)(param_1 + 0x2c) = iVar3;
      *(int *)(param_1 + 0x28) = local_8c;
    }
    if ((((pwVar7[local_8c] & 0xfc00U) == 0xdc00) && (0 < local_8c)) &&
       ((pwVar7[(long)local_8c + -1] & 0xfc00U) == 0xd800)) {
      *(int *)(param_1 + 0x28) = local_8c + -1;
    }
    *(int *)(param_1 + 0x1c) = iVar3;
    icu_76_godot::UnicodeString::~UnicodeString(local_88);
  }
  else {
    if (lVar8 <= param_2) {
      param_2 = lVar8;
    }
    local_8c = (int)param_2;
    if (param_3 == '\0') {
      lVar4 = *(long *)(param_1 + 0x20);
      if ((param_2 <= lVar4) || (*(long *)(param_1 + 0x10) < param_2)) {
        if (param_2 == 0) goto LAB_00101440;
        lVar4 = (long)(local_8c + 1);
        *(long *)(param_1 + 0x20) = (long)(local_8c + -9);
        if (local_8c + -9 < 0) goto LAB_00101416;
        if (lVar8 < lVar4) {
          lVar4 = lVar8;
        }
        *(long *)(param_1 + 0x10) = lVar4;
        goto LAB_0010129f;
      }
LAB_001013af:
      *(int *)(param_1 + 0x28) = local_8c - (int)lVar4;
    }
    else {
LAB_0010125a:
      iVar6 = (int)*(long *)(param_1 + 0x20);
      if ((param_2 < *(long *)(param_1 + 0x20)) || (*(long *)(param_1 + 0x10) <= param_2)) {
        if ((iVar3 <= local_8c) && (lVar8 == *(long *)(param_1 + 0x10))) {
          *(int *)(param_1 + 0x28) = iVar3 - iVar6;
          uVar5 = 0;
          goto LAB_00101374;
        }
        lVar4 = param_2 + 9;
        if (lVar8 < param_2 + 9) {
          lVar4 = lVar8;
        }
        *(long *)(param_1 + 0x10) = lVar4;
        lVar4 = lVar4 + -10;
        if (lVar4 < 0) {
          lVar4 = 0;
        }
        *(long *)(param_1 + 0x20) = lVar4;
        local_8c = (int)param_2;
        goto LAB_0010129f;
      }
      *(int *)(param_1 + 0x28) = (int)param_2 - iVar6;
    }
  }
  uVar5 = 1;
LAB_00101374:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int repTextReplace(long param_1,ulong param_2,ulong param_3,long param_4,uint param_5,int *param_6)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  long local_90;
  UnicodeString local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_6 < 1) {
    plVar1 = *(long **)(param_1 + 0x48);
    if ((param_4 == 0) && (param_5 != 0)) {
      *param_6 = 1;
    }
    else {
      iVar2 = (**(code **)(*plVar1 + 0x40))(plVar1);
      if ((long)param_2 <= (long)param_3) {
        uVar6 = (ulong)iVar2;
        if ((long)param_2 < 0) {
          uVar5 = 0;
          param_2 = 0;
        }
        else {
          if ((long)uVar6 <= (long)param_2) {
            param_2 = uVar6;
          }
          uVar5 = (ulong)(int)param_2;
        }
        if ((long)param_3 < (long)uVar6) {
          uVar6 = param_3;
        }
        if ((long)param_3 < 0) {
          uVar6 = 0;
        }
        if ((((int)uVar5 < iVar2) &&
            (uVar3 = (**(code **)(*plVar1 + 0x48))(plVar1,uVar5 & 0xffffffff),
            (uVar3 & 0xfc00) == 0xdc00)) && (0 < (long)param_2)) {
          iVar4 = (int)uVar5 + -1;
          uVar3 = (**(code **)(*plVar1 + 0x48))(plVar1,iVar4);
          if ((uVar3 & 0xfc00) == 0xd800) {
            uVar5 = (long)iVar4;
          }
        }
        iVar4 = (int)uVar6;
        if ((iVar4 < iVar2) &&
           (uVar3 = (**(code **)(*plVar1 + 0x48))(plVar1,iVar4 + -1), (uVar3 & 0xfc00) == 0xd800)) {
          uVar3 = (**(code **)(*plVar1 + 0x48))(plVar1,uVar6 & 0xffffffff);
          uVar6 = (ulong)(iVar4 + (uint)((uVar3 & 0xfc00) == 0xdc00));
        }
        local_90 = param_4;
        icu_76_godot::UnicodeString::UnicodeString(local_88,param_5 >> 0x1f,&local_90,param_5);
        (**(code **)(*plVar1 + 0x20))(plVar1,uVar5 & 0xffffffff,uVar6 & 0xffffffff,local_88);
        iVar4 = (**(code **)(*plVar1 + 0x40))(plVar1);
        iVar4 = iVar4 - iVar2;
        if ((long)uVar5 < *(long *)(param_1 + 0x10)) {
          *(undefined8 *)(param_1 + 0x10) = 0;
          *(undefined8 *)(param_1 + 0x20) = 0;
          *(undefined8 *)(param_1 + 0x28) = 0;
          *(undefined4 *)(param_1 + 0x1c) = 0;
        }
        repTextAccess(param_1,(long)((int)uVar6 + iVar4),1);
        icu_76_godot::UnicodeString::~UnicodeString(local_88);
        goto LAB_00101530;
      }
      *param_6 = 8;
    }
  }
  iVar4 = 0;
LAB_00101530:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



void repTextCopy(long param_1,ulong param_2,ulong param_3,ulong param_4,char param_5,int *param_6)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  code *local_88;
  undefined2 local_80;
  long local_40;
  
  plVar1 = *(long **)(param_1 + 0x48);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = (**(code **)(*plVar1 + 0x40))(plVar1);
  if (*param_6 < 1) {
    if (((long)param_2 <= (long)param_3) &&
       (((long)param_4 <= (long)param_2 || ((long)param_3 <= (long)param_4)))) {
      uVar3 = (ulong)iVar2;
      uVar8 = param_2;
      if ((long)uVar3 <= (long)param_2) {
        uVar8 = uVar3;
      }
      if ((long)param_2 < 0) {
        uVar8 = 0;
      }
      iVar2 = (int)uVar8;
      uVar5 = param_3;
      if ((long)uVar3 <= (long)param_3) {
        uVar5 = uVar3;
      }
      uVar4 = 0;
      if (-1 < (long)param_3) {
        uVar4 = uVar5;
      }
      iVar6 = (int)uVar4;
      if ((long)param_4 < 0) {
        uVar3 = 0;
        param_4 = 0;
      }
      else {
        if ((long)uVar3 <= (long)param_4) {
          param_4 = uVar3;
        }
        uVar3 = param_4 & 0xffffffff;
      }
      iVar7 = (int)uVar3;
      if (param_5 == '\0') {
        (**(code **)(*plVar1 + 0x28))(plVar1,uVar8 & 0xffffffff,uVar4 & 0xffffffff,uVar3);
        if (*(long *)(param_1 + 0x10) <= (long)param_4) goto LAB_00101918;
LAB_001018d8:
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x28) = 0;
        iVar7 = (iVar6 + iVar7) - iVar2;
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
      else {
        (**(code **)(*plVar1 + 0x28))();
        if (iVar7 < iVar2) {
          uVar8 = uVar4 & 0xffffffff;
          uVar4 = (ulong)(uint)(iVar6 * 2 - iVar2);
        }
        local_88 = icu_76_godot::UnicodeString::doReplace;
        iVar2 = (int)uVar8;
        local_80 = 2;
        iVar6 = (int)uVar4;
        (**(code **)(*plVar1 + 0x20))
                  (plVar1,uVar8 & 0xffffffff,uVar4 & 0xffffffff,(UnicodeString *)&local_88);
        icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_88);
        if (iVar2 < iVar7) {
          if ((long)iVar2 < *(long *)(param_1 + 0x10)) {
            *(undefined8 *)(param_1 + 0x10) = 0;
            *(undefined8 *)(param_1 + 0x20) = 0;
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined4 *)(param_1 + 0x1c) = 0;
          }
        }
        else {
          if ((long)iVar7 < *(long *)(param_1 + 0x10)) goto LAB_001018d8;
LAB_00101918:
          iVar7 = (iVar6 + iVar7) - iVar2;
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        repTextAccess(param_1,(long)iVar7,1);
        return;
      }
      goto LAB_00101926;
    }
    *param_6 = 8;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101926:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
repTextExtract(long param_1,ulong param_2,ulong param_3,wchar16 *param_4,int param_5,int *param_6)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  UnicodeString local_88 [72];
  long local_40;
  
  plVar1 = *(long **)(param_1 + 0x48);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = (**(code **)(*plVar1 + 0x40))(plVar1);
  if (*param_6 < 1) {
    if ((param_5 < 0) || ((param_4 == (wchar16 *)0x0 && (0 < param_5)))) {
      *param_6 = 1;
    }
    if ((long)param_2 <= (long)param_3) {
      uVar6 = (ulong)iVar2;
      uVar9 = param_2;
      if ((long)uVar6 <= (long)param_2) {
        uVar9 = uVar6;
      }
      if ((long)param_2 < 0) {
        uVar9 = 0;
      }
      if ((long)param_3 < (long)uVar6) {
        uVar6 = param_3;
      }
      if ((long)param_3 < 0) {
        uVar6 = 0;
      }
      iVar7 = (int)uVar6;
      iVar8 = (int)uVar9;
      if (iVar8 < iVar2) {
        uVar3 = (**(code **)(*plVar1 + 0x48))(plVar1,uVar9 & 0xffffffff);
        uVar9 = uVar9 & 0xffffffff;
        if ((uVar3 & 0xfc00) == 0xdc00) {
          iVar4 = (**(code **)(*plVar1 + 0x50))(plVar1,uVar9);
          uVar9 = (ulong)(iVar8 - (uint)(iVar4 - 0x10000U < 0x100000));
        }
      }
      if (iVar7 < iVar2) {
        uVar3 = (**(code **)(*plVar1 + 0x48))(plVar1,uVar6 & 0xffffffff);
        if ((uVar3 & 0xfc00) == 0xdc00) {
          iVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,uVar6 & 0xffffffff);
          iVar7 = iVar7 - (uint)(iVar2 - 0x10000U < 0x100000);
        }
      }
      iVar2 = iVar7 - (int)uVar9;
      if (param_5 < iVar2) {
        iVar7 = (int)uVar9 + param_5;
      }
      icu_76_godot::UnicodeString::UnicodeString(local_88,param_4,0,param_5);
      (**(code **)(*plVar1 + 0x18))(plVar1,uVar9 & 0xffffffff,iVar7,local_88);
      repTextAccess(param_1,(long)iVar7,1);
      uVar5 = u_terminateUChars_76_godot(param_4,param_5,iVar2,param_6);
      icu_76_godot::UnicodeString::~UnicodeString(local_88);
      goto LAB_00101a95;
    }
    *param_6 = 8;
  }
  uVar5 = 0;
LAB_00101a95:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int unistrTextReplace(long param_1,long param_2,long param_3,long param_4,int param_5,int *param_6)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  
  if (0 < *param_6) {
    return 0;
  }
  lVar8 = *(long *)(param_1 + 0x48);
  if ((param_4 == 0) && (param_5 != 0)) {
    *param_6 = 1;
  }
  if (param_2 <= param_3) {
    if (*(short *)(lVar8 + 8) < 0) {
      iVar7 = *(int *)(lVar8 + 0xc);
    }
    else {
      iVar7 = (int)(*(short *)(lVar8 + 8) >> 5);
    }
    lVar4 = (long)iVar7;
    lVar6 = param_2;
    if (lVar4 <= param_2) {
      lVar6 = lVar4;
    }
    iVar2 = (int)lVar6;
    if (param_2 < 0) {
      iVar2 = 0;
    }
    if (param_3 < lVar4) {
      lVar4 = param_3;
    }
    iVar3 = (int)lVar4;
    if (param_3 < 0) {
      iVar3 = 0;
    }
    iVar5 = (int)lVar8;
    if (iVar2 < iVar7) {
      iVar2 = icu_76_godot::UnicodeString::getChar32Start(iVar5);
    }
    if (iVar3 < iVar7) {
      iVar3 = icu_76_godot::UnicodeString::getChar32Start(iVar5);
    }
    icu_76_godot::UnicodeString::doReplace
              (iVar5,iVar2,(wchar16 *)(ulong)(uint)(iVar3 - iVar2),(int)param_4,0);
    uVar1 = *(ushort *)(lVar8 + 8);
    if ((short)uVar1 < 0) {
      iVar2 = *(int *)(lVar8 + 0xc);
    }
    else {
      iVar2 = (int)((short)uVar1 >> 5);
    }
    if ((uVar1 & 0x11) == 0) {
      if ((uVar1 & 2) == 0) {
        lVar8 = *(long *)(lVar8 + 0x18);
      }
      else {
        lVar8 = lVar8 + 10;
      }
    }
    else {
      lVar8 = 0;
    }
    *(int *)(param_1 + 0x2c) = iVar2;
    *(int *)(param_1 + 0x1c) = iVar2;
    *(long *)(param_1 + 0x30) = lVar8;
    *(long *)(param_1 + 0x10) = (long)iVar2;
    *(int *)(param_1 + 0x28) = iVar3 + (iVar2 - iVar7);
    return iVar2 - iVar7;
  }
  *param_6 = 8;
  return 0;
}



uint unistrTextExtract(long param_1,long param_2,long param_3,long param_4,uint param_5,int *param_6
                      )

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  wchar16 *pwVar6;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (*(short *)(lVar1 + 8) < 0) {
    iVar5 = *param_6;
    iVar2 = *(int *)(lVar1 + 0xc);
  }
  else {
    iVar2 = (int)(*(short *)(lVar1 + 8) >> 5);
    iVar5 = *param_6;
  }
  if (iVar5 < 1) {
    if (((int)param_5 < 0) || ((param_4 == 0 && (0 < (int)param_5)))) {
      *param_6 = 1;
    }
    if ((param_2 < 0) || (param_3 < param_2)) {
      *param_6 = 8;
      uVar3 = 0;
    }
    else {
      iVar4 = (int)lVar1;
      iVar5 = iVar2;
      if (param_2 < iVar2) {
        iVar5 = icu_76_godot::UnicodeString::getChar32Start(iVar4);
      }
      if (param_3 < iVar2) {
        iVar2 = icu_76_godot::UnicodeString::getChar32Start(iVar4);
      }
      uVar3 = iVar2 - iVar5;
      if ((0 < (int)param_5) && (param_4 != 0)) {
        pwVar6 = (wchar16 *)(ulong)uVar3;
        if ((int)param_5 <= (int)uVar3) {
          pwVar6 = (wchar16 *)(ulong)param_5;
        }
        icu_76_godot::UnicodeString::doExtract(iVar4,iVar5,pwVar6,(int)param_4);
        iVar5 = iVar5 + (int)pwVar6;
      }
      *(int *)(param_1 + 0x28) = iVar5;
      u_terminateUChars_76_godot(param_4,(wchar16 *)(ulong)param_5,uVar3,param_6);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



void repTextClose(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 0x20) != 0) {
    if (*(long **)(param_1 + 0x48) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x48) + 8))();
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    return;
  }
  return;
}



void unistrTextClose(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 0x20) != 0) {
    if (*(long **)(param_1 + 0x48) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x48) + 8))();
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    return;
  }
  return;
}



void utf8TextClose(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 0x20) == 0) {
    return;
  }
  uprv_free_76_godot(*(undefined8 *)(param_1 + 0x48));
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



int ucstrTextExtract(long param_1,long param_2,long param_3,long param_4,int param_5,int *param_6)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  short sVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  if (*param_6 < 1) {
    if (((-1 < param_5) && (param_4 != 0 || param_5 < 1)) && (param_2 <= param_3)) {
      ucstrTextAccess(param_1,param_2,1);
      lVar3 = *(long *)(param_1 + 0x30);
      iVar2 = *(int *)(param_1 + 0x28);
      iVar8 = (int)*(undefined8 *)(param_1 + 0x70);
      if (iVar8 < 0) {
        lVar5 = 0x7fffffff;
        if (param_3 < 0x80000000) {
          lVar5 = param_3;
        }
        lVar7 = 0;
        if (-1 < lVar5) {
          lVar7 = lVar5;
        }
        iVar11 = (int)lVar7;
      }
      else {
        lVar5 = (long)iVar8;
        if (param_3 < iVar8) {
          lVar5 = param_3;
        }
        iVar11 = 0;
        if (-1 < param_3) {
          iVar11 = (int)lVar5;
        }
      }
      iVar4 = iVar2;
      if (iVar2 < iVar11) {
        lVar5 = (long)iVar2 * 2;
        iVar9 = iVar11 - iVar2;
        iVar10 = 0;
        do {
          if (iVar8 < 0) {
            sVar6 = *(short *)(lVar3 + lVar5);
            if (sVar6 == 0) {
              lVar5 = (long)iVar4;
              *(int *)(param_1 + 0x2c) = iVar4;
              *(long *)(param_1 + 0x70) = lVar5;
              *(long *)(param_1 + 0x10) = lVar5;
              *(int *)(param_1 + 0x1c) = iVar4;
              lVar7 = lVar5;
              if (0 < iVar4) goto LAB_00101fd3;
              goto LAB_00101fdc;
            }
            if (iVar10 < param_5) goto LAB_0010200a;
          }
          else {
            if (param_5 <= iVar10) {
              iVar9 = iVar11 - iVar2;
              iVar4 = iVar11;
              break;
            }
            sVar6 = *(short *)(lVar3 + lVar5);
LAB_0010200a:
            *(short *)(param_4 + (long)iVar2 * -2 + lVar5) = sVar6;
          }
          iVar10 = iVar10 + 1;
          iVar4 = iVar4 + 1;
          lVar5 = lVar5 + 2;
        } while (iVar10 != iVar9);
      }
      else {
        iVar9 = 0;
      }
      lVar5 = *(long *)(param_1 + 0x10);
      lVar7 = (long)iVar4;
      iVar10 = iVar9;
      if ((((0 < iVar4) && ((*(ushort *)(lVar3 + -2 + lVar7 * 2) & 0xfc00) == 0xd800)) &&
          ((iVar4 < iVar8 || (iVar8 < 0)))) &&
         (uVar1 = *(ushort *)(lVar3 + lVar7 * 2), (uVar1 & 0xfc00) == 0xdc00)) {
        if (iVar9 < param_5) {
          iVar10 = iVar9 + 1;
          *(ushort *)(param_4 + (long)iVar9 * 2) = uVar1;
        }
        iVar4 = iVar4 + 1;
        lVar7 = (long)iVar4;
      }
LAB_00101fd3:
      if (lVar5 < lVar7) {
        ucstrTextAccess();
      }
      else {
LAB_00101fdc:
        *(int *)(param_1 + 0x28) = iVar4;
      }
      u_terminateUChars_76_godot(param_4,param_5,iVar10,param_6);
      return iVar10;
    }
    *param_6 = 1;
  }
  return 0;
}



int charIterTextExtract(long param_1,long param_2,long param_3,long param_4,int param_5,int *param_6
                       )

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (*param_6 < 1) {
    if (((-1 < param_5) && (param_4 != 0 || param_5 < 1)) && (param_2 <= param_3)) {
      lVar4 = (long)*(int *)(param_1 + 0x70);
      plVar1 = *(long **)(param_1 + 0x48);
      lVar5 = lVar4;
      if (param_2 <= lVar4) {
        lVar5 = param_2;
      }
      if (param_2 < 0) {
        lVar5 = 0;
      }
      if (param_3 <= lVar4) {
        lVar4 = param_3;
      }
      iVar7 = 0;
      if (-1 < param_3) {
        iVar7 = (int)lVar4;
      }
      (**(code **)(*plVar1 + 0x80))(plVar1,lVar5);
      iVar9 = *(int *)((long)plVar1 + 0xc);
      iVar3 = 0;
      iVar8 = iVar9;
      do {
        while( true ) {
          if (iVar7 <= iVar9) {
            charIterTextAccess(param_1,(long)iVar8,1);
            u_terminateUChars_76_godot(param_4,param_5,iVar3,param_6);
            return iVar3;
          }
          uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1);
          if (0xffff < uVar2) break;
          iVar6 = iVar3 + 1;
          if (iVar6 <= param_5) {
            iVar8 = 1;
            *(ushort *)(param_4 + (long)iVar3 * 2) = (ushort)uVar2;
            goto LAB_00102216;
          }
          iVar3 = 1;
LAB_001021a0:
          iVar9 = iVar9 + iVar3;
          *param_6 = 0xf;
          iVar3 = iVar6;
        }
        iVar6 = iVar3 + 2;
        if (param_5 < iVar6) {
          iVar3 = 2;
          goto LAB_001021a0;
        }
        iVar8 = 2;
        *(ushort *)(param_4 + 2 + (long)iVar3 * 2) = (ushort)uVar2 & 0x3ff | 0xdc00;
        *(short *)(param_4 + (long)iVar3 * 2) = (short)((int)uVar2 >> 10) + -0x2840;
LAB_00102216:
        iVar9 = iVar8 + iVar9;
        iVar3 = iVar6;
        iVar8 = iVar9;
      } while( true );
    }
    *param_6 = 1;
  }
  return 0;
}



int utf8TextExtract(long param_1,ulong param_2,ulong param_3,ushort *param_4,int param_5,
                   int *param_6)

{
  ushort *puVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  char *pcVar5;
  int iVar6;
  ushort *puVar7;
  ushort *puVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcVar12;
  char *pcVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  long in_FS_OFFSET;
  long local_68;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_6 < 1) {
    if ((-1 < param_5) && ((param_4 != (ushort *)0x0 || (param_5 < 1)))) {
      uVar11 = (ulong)*(int *)(param_1 + 0x78);
      if ((long)param_2 < 0) {
        if (-1 < (long)param_3) {
          param_2 = 0;
          uVar10 = 0;
          goto LAB_00102320;
        }
        lVar4 = *(long *)(param_1 + 0x10);
        pcVar5 = *(char **)(param_1 + 0x48);
        if (0 < lVar4) {
          uVar11 = 0;
          lVar15 = 0;
          uVar10 = 0;
          goto LAB_00102340;
        }
        local_44 = 0;
        iVar6 = 0;
        iVar16 = 0;
        local_68 = 0;
      }
      else {
        if ((long)uVar11 <= (long)param_2) {
          param_2 = uVar11;
        }
        uVar10 = param_2 & 0xffffffff;
        if ((long)param_3 < 0) {
          lVar15 = 0;
          uVar11 = 0;
        }
        else {
LAB_00102320:
          if ((long)param_3 < (long)uVar11) {
            uVar11 = param_3;
          }
          lVar15 = (long)(int)uVar11;
        }
        uVar9 = (uint)uVar10;
        if ((int)lVar15 < (int)uVar9) {
          *param_6 = 8;
          goto LAB_001022cd;
        }
        lVar4 = *(long *)(param_1 + 0x10);
        pcVar5 = *(char **)(param_1 + 0x48);
        if ((long)param_2 < lVar4) {
LAB_00102340:
          iVar16 = (int)uVar10;
          pcVar12 = pcVar5 + iVar16;
          do {
            uVar9 = (uint)uVar10;
            pcVar13 = pcVar12;
            if (((-1 < *pcVar12) || ((byte)(*pcVar12 + 0x3eU) < 0x33)) ||
               (pcVar13 = pcVar5, uVar9 == 0)) goto LAB_00102376;
            uVar9 = uVar9 - 1;
            uVar10 = (ulong)uVar9;
            pcVar12 = pcVar12 + -1;
          } while (uVar9 != iVar16 - 3U);
        }
        pcVar13 = pcVar5 + (int)uVar9;
LAB_00102376:
        if ((long)uVar11 < lVar4) {
          lVar4 = lVar15 + -3;
          cVar2 = pcVar5[lVar15];
          while (cVar2 < '\0') {
            iVar14 = (int)lVar15;
            if ((byte)(cVar2 + 0x3eU) < 0x33) {
              local_68 = (long)iVar14;
              iVar14 = iVar14 - uVar9;
              goto LAB_001023c6;
            }
            if (iVar14 == 0) {
              local_68 = 0;
              iVar14 = -uVar9;
              goto LAB_001023c6;
            }
            lVar15 = lVar15 + -1;
            if (lVar15 == lVar4) {
              local_68 = (long)(iVar14 + -1);
              iVar14 = (iVar14 + -1) - uVar9;
              goto LAB_001023c6;
            }
            cVar2 = pcVar5[lVar15];
          }
        }
        local_68 = (long)(int)lVar15;
        iVar14 = (int)lVar15 - uVar9;
LAB_001023c6:
        if (((param_4 == (ushort *)0x0) || (puVar1 = param_4 + param_5, puVar1 <= param_4)) ||
           (iVar14 < 1)) {
          local_44 = 0;
          iVar6 = 0;
          lVar4 = 0;
          iVar16 = 0;
        }
        else {
          lVar4 = 0;
          puVar8 = param_4;
          do {
            local_44 = (int)lVar4 + 1;
            puVar7 = puVar8 + 1;
            bVar3 = pcVar13[lVar4];
            if (bVar3 < 0x80) {
              *puVar8 = (ushort)bVar3;
              lVar4 = (long)local_44;
            }
            else {
              uVar9 = utf8_nextCharSafeBody_76_godot(pcVar13,&local_44,iVar14,bVar3,0xfffffffd);
              if (uVar9 < 0x10000) {
                *puVar8 = (ushort)uVar9;
                lVar4 = (long)local_44;
              }
              else {
                *puVar8 = (short)((int)uVar9 >> 10) + 0xd7c0;
                lVar4 = (long)local_44;
                if (puVar1 <= puVar7) {
                  iVar16 = 1;
                  iVar6 = (int)((long)puVar7 - (long)param_4 >> 1);
                  goto LAB_001024dc;
                }
                puVar7 = puVar8 + 2;
                puVar8[1] = (ushort)uVar9 & 0x3ff | 0xdc00;
              }
            }
          } while ((puVar7 < puVar1) && (puVar8 = puVar7, (int)lVar4 < iVar14));
          iVar16 = 0;
          iVar6 = (int)((long)puVar7 - (long)param_4 >> 1);
        }
LAB_001024dc:
        if ((int)lVar4 < iVar14) {
          do {
            while( true ) {
              local_44 = (int)lVar4 + 1;
              if ((byte)pcVar13[lVar4] < 0x80) break;
              uVar9 = utf8_nextCharSafeBody_76_godot
                                (pcVar13,&local_44,iVar14,pcVar13[lVar4],0xfffffffd);
              iVar16 = (0xffff < uVar9) + 1 + iVar16;
              lVar4 = (long)local_44;
              if (iVar14 <= local_44) goto LAB_00102569;
            }
            lVar4 = (long)local_44;
            iVar16 = iVar16 + 1;
          } while (local_44 < iVar14);
        }
      }
LAB_00102569:
      iVar16 = iVar16 + iVar6;
      u_terminateUChars_76_godot(param_4,param_5,iVar16,param_6);
      utf8TextAccess(param_1,local_68,1);
      goto LAB_001022d0;
    }
    *param_6 = 1;
  }
LAB_001022cd:
  iVar16 = 0;
LAB_001022d0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void unistrTextCopy(long param_1,ulong param_2,ulong param_3,ulong param_4,char param_5,int *param_6
                   )

{
  ushort uVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  
  plVar2 = *(long **)(param_1 + 0x48);
  if ((short)plVar2[1] < 0) {
    uVar3 = (ulong)*(int *)((long)plVar2 + 0xc);
  }
  else {
    uVar3 = (ulong)(short)((short)plVar2[1] >> 5);
  }
  if (0 < *param_6) {
    return;
  }
  if ((long)param_2 < 0) {
    param_2 = 0;
    iVar10 = 0;
    if (-1 < (long)param_3) {
LAB_001026e6:
      uVar11 = param_3;
      if ((long)uVar3 <= (long)param_3) {
        uVar11 = uVar3;
      }
      goto LAB_001026f0;
    }
    if ((long)param_4 < (long)uVar3) {
      uVar3 = param_4;
    }
    uVar11 = 0;
    if (-1 < (long)param_4) goto LAB_0010270a;
    if (param_5 != '\0') {
      iVar4 = 0;
      iVar9 = 0;
      (**(code **)(*plVar2 + 0x28))(plVar2,0,0);
      iVar5 = 0;
      uVar6 = 0;
      goto LAB_001028e3;
    }
    iVar5 = 0;
    uVar3 = 0;
LAB_00102770:
    iVar4 = (int)uVar3;
    iVar9 = (int)uVar11;
    iVar10 = (int)param_2;
    (**(code **)(*plVar2 + 0x28))
              (plVar2,param_2 & 0xffffffff,uVar11 & 0xffffffff,uVar3 & 0xffffffff);
    uVar1 = *(ushort *)(plVar2 + 1);
    if ((uVar1 & 0x11) != 0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
      goto LAB_001027b6;
    }
  }
  else {
    if ((long)uVar3 <= (long)param_2) {
      param_2 = uVar3;
    }
    uVar11 = 0;
    if (-1 < (long)param_3) goto LAB_001026e6;
LAB_001026f0:
    if ((long)param_4 < (long)uVar3) {
      uVar3 = param_4;
    }
    uVar6 = (uint)uVar3;
    if ((long)param_4 < 0) {
      uVar6 = 0;
    }
    uVar3 = (ulong)uVar6;
    if ((int)uVar11 < (int)param_2) goto LAB_00102714;
LAB_0010270a:
    iVar4 = (int)uVar3;
    iVar8 = (int)param_2;
    iVar9 = (int)uVar11;
    if ((iVar8 < iVar4) && (iVar4 < iVar9)) {
LAB_00102714:
      *param_6 = 8;
      return;
    }
    if (param_5 == '\0') {
      iVar5 = (iVar4 + iVar9) - iVar8;
      goto LAB_00102770;
    }
    uVar6 = iVar9 - iVar8;
    (**(code **)(*plVar2 + 0x28))(plVar2,param_2 & 0xffffffff,uVar11 & 0xffffffff);
    iVar5 = iVar4;
    iVar10 = iVar9;
    if (iVar8 <= iVar4) {
      iVar5 = (iVar4 + iVar9) - iVar8;
      iVar10 = iVar8;
    }
    if (uVar6 == 0x7fffffff && iVar10 < 1) {
      uVar1 = *(ushort *)(plVar2 + 1);
      if ((uVar1 & 1) != 0) {
        *(undefined2 *)(plVar2 + 1) = 2;
        *(long *)(param_1 + 0x30) = (long)plVar2 + 10;
        goto LAB_0010286a;
      }
      *(ushort *)(plVar2 + 1) = uVar1 & 0x1f;
    }
    else {
LAB_001028e3:
      icu_76_godot::UnicodeString::doReplace((int)plVar2,iVar10,(wchar16 *)(ulong)uVar6,0,0);
      uVar1 = *(ushort *)(plVar2 + 1);
    }
    if ((uVar1 & 0x11) != 0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
      goto LAB_0010286a;
    }
  }
  if ((uVar1 & 2) == 0) {
    lVar7 = plVar2[3];
  }
  else {
    lVar7 = (long)plVar2 + 10;
  }
  *(long *)(param_1 + 0x30) = lVar7;
  if (param_5 != '\0') {
LAB_0010286a:
    if (iVar10 < iVar4) {
      iVar5 = iVar4;
    }
    *(int *)(param_1 + 0x28) = iVar5;
    return;
  }
LAB_001027b6:
  iVar10 = (iVar9 - iVar10) + *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x28) = iVar5;
  *(int *)(param_1 + 0x2c) = iVar10;
  *(long *)(param_1 + 0x10) = (long)iVar10;
  *(int *)(param_1 + 0x1c) = iVar10;
  return;
}



void ucstrTextClose(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 0x20) == 0) {
    return;
  }
  uprv_free_76_godot(*(undefined8 *)(param_1 + 0x48));
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



void utext_nativeLength_76_godot(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00102968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x18))();
  return;
}



uint utext_isLengthExpensive_76_godot(long param_1)

{
  return *(uint *)(param_1 + 8) >> 1 & 1;
}



long utext_getNativeIndex_76_godot(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x1c) < *(int *)(param_1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00102991. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar1 = (**(code **)(*(long *)(param_1 + 0x38) + 0x40))();
    return lVar1;
  }
  return (long)*(int *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
}



void utext_setNativeIndex_76_godot(long param_1,long param_2)

{
  int iVar1;
  
  if ((param_2 < *(long *)(param_1 + 0x20)) || (*(long *)(param_1 + 0x10) <= param_2)) {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x20))(param_1,param_2,1);
    iVar1 = *(int *)(param_1 + 0x28);
  }
  else {
    iVar1 = (int)param_2 - (int)*(long *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x1c) < iVar1) {
      iVar1 = (**(code **)(*(long *)(param_1 + 0x38) + 0x48))();
      *(int *)(param_1 + 0x28) = iVar1;
    }
    else {
      *(int *)(param_1 + 0x28) = iVar1;
    }
  }
  if ((iVar1 < *(int *)(param_1 + 0x2c)) &&
     ((*(ushort *)(*(long *)(param_1 + 0x30) + (long)iVar1 * 2) & 0xfc00) == 0xdc00)) {
    if (iVar1 == 0) {
      (**(code **)(*(long *)(param_1 + 0x38) + 0x20))(param_1,*(undefined8 *)(param_1 + 0x20),0);
      iVar1 = *(int *)(param_1 + 0x28);
    }
    if ((0 < iVar1) &&
       ((*(ushort *)(*(long *)(param_1 + 0x30) + -2 + (long)iVar1 * 2) & 0xfc00) == 0xd800)) {
      *(int *)(param_1 + 0x28) = iVar1 + -1;
      return;
    }
  }
  return;
}



uint utext_current32_76_godot(long param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (iVar4 == *(int *)(param_1 + 0x2c)) {
    cVar3 = (**(code **)(*(long *)(param_1 + 0x38) + 0x20))
                      (param_1,*(undefined8 *)(param_1 + 0x10),1);
    if (cVar3 == '\0') {
      return 0xffffffff;
    }
    iVar4 = *(int *)(param_1 + 0x28);
  }
  uVar1 = *(ushort *)(*(long *)(param_1 + 0x30) + (long)iVar4 * 2);
  uVar5 = (uint)uVar1;
  if ((uVar5 & 0xfffffc00) != 0xd800) {
    return uVar5;
  }
  if (iVar4 + 1 < *(int *)(param_1 + 0x2c)) {
    uVar1 = *(ushort *)(*(long *)(param_1 + 0x30) + 2 + (long)iVar4 * 2);
LAB_00102a96:
    if ((uVar1 & 0xfffffc00) == 0xdc00) {
      return uVar1 + 0xfca02400 + uVar5 * 0x400;
    }
    return uVar5;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  cVar3 = (**(code **)(*(long *)(param_1 + 0x38) + 0x20))(param_1,uVar2,1);
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*(long *)(param_1 + 0x38) + 0x20))(param_1,uVar2,0);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x2c) + -1;
    if (cVar3 != '\0') {
      return (uint)uVar1;
    }
  }
  else {
    uVar1 = *(ushort *)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x28) * 2);
    cVar3 = (**(code **)(*(long *)(param_1 + 0x38) + 0x20))(param_1,uVar2,0);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x2c) + -1;
    if (cVar3 != '\0') goto LAB_00102a96;
  }
  return 0xffffffff;
}



ulong utext_char32At_76_godot(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if ((param_2 < lVar1) || (*(int *)(param_1 + 0x1c) + lVar1 <= param_2)) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar3 = (int)param_2 - (int)lVar1;
    *(int *)(param_1 + 0x28) = iVar3;
    uVar4 = (uint)*(ushort *)(*(long *)(param_1 + 0x30) + (long)iVar3 * 2);
    if ((uVar4 & 0xfffff800) != 0xd800) {
      return (ulong)uVar4;
    }
  }
  utext_setNativeIndex_76_godot(param_1,param_2);
  if ((*(long *)(param_1 + 0x20) <= param_2) &&
     (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x2c))) {
    uVar4 = (uint)*(ushort *)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x28) * 2);
    if ((uVar4 & 0xfffff800) == 0xd800) {
      uVar2 = utext_current32_76_godot(param_1);
      return uVar2;
    }
  }
  return (ulong)uVar4;
}



uint utext_next32_76_godot(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x2c) <= iVar3) {
    cVar4 = (**(code **)(*(long *)(param_1 + 0x38) + 0x20))
                      (param_1,*(undefined8 *)(param_1 + 0x10),1);
    if (cVar4 == '\0') {
      return 0xffffffff;
    }
    iVar3 = *(int *)(param_1 + 0x28);
  }
  lVar5 = *(long *)(param_1 + 0x30);
  iVar6 = iVar3 + 1;
  *(int *)(param_1 + 0x28) = iVar6;
  uVar1 = *(ushort *)(lVar5 + (long)iVar3 * 2);
  uVar7 = (uint)uVar1;
  if ((uVar7 & 0xfffffc00) == 0xd800) {
    if (*(int *)(param_1 + 0x2c) <= iVar6) {
      cVar4 = (**(code **)(*(long *)(param_1 + 0x38) + 0x20))
                        (param_1,*(undefined8 *)(param_1 + 0x10),1);
      if (cVar4 == '\0') {
        return uVar7;
      }
      lVar5 = *(long *)(param_1 + 0x30);
      iVar6 = *(int *)(param_1 + 0x28);
    }
    uVar2 = *(ushort *)(lVar5 + (long)iVar6 * 2);
    if ((uVar2 & 0xfc00) == 0xdc00) {
      *(int *)(param_1 + 0x28) = iVar6 + 1;
      uVar7 = uVar2 + 0xfca02400 + (uint)uVar1 * 0x400;
    }
  }
  return uVar7;
}



uint utext_previous32_76_godot(long param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 < 1) {
    cVar2 = (**(code **)(*(long *)(param_1 + 0x38) + 0x20))
                      (param_1,*(undefined8 *)(param_1 + 0x20),0);
    if (cVar2 == '\0') {
      return 0xffffffff;
    }
    iVar3 = *(int *)(param_1 + 0x28);
  }
  iVar3 = iVar3 + -1;
  lVar4 = *(long *)(param_1 + 0x30);
  lVar5 = (long)iVar3;
  *(int *)(param_1 + 0x28) = iVar3;
  uVar6 = (uint)*(ushort *)(lVar4 + lVar5 * 2);
  if ((uVar6 & 0xfffffc00) == 0xdc00) {
    if (iVar3 < 1) {
      cVar2 = (**(code **)(*(long *)(param_1 + 0x38) + 0x20))
                        (param_1,*(undefined8 *)(param_1 + 0x20),0);
      if (cVar2 == '\0') {
        return uVar6;
      }
      iVar3 = *(int *)(param_1 + 0x28);
      lVar5 = (long)iVar3;
      lVar4 = *(long *)(param_1 + 0x30);
    }
    uVar1 = *(ushort *)(lVar4 + -2 + lVar5 * 2);
    if ((uVar1 & 0xfc00) == 0xd800) {
      *(int *)(param_1 + 0x28) = iVar3 + -1;
      uVar6 = uVar6 + 0xfca02400 + (uint)uVar1 * 0x400;
    }
  }
  return uVar6;
}



undefined8 utext_moveIndex32_76_godot(long param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if (param_2 < 1) {
    if (param_2 != 0) {
      do {
        iVar2 = *(int *)(param_1 + 0x28);
        if (iVar2 < 1) {
          cVar1 = (**(code **)(*(long *)(param_1 + 0x38) + 0x20))
                            (param_1,*(undefined8 *)(param_1 + 0x20),0);
          if (cVar1 == '\0') {
            return 0;
          }
          iVar2 = *(int *)(param_1 + 0x28);
        }
        if ((*(ushort *)(*(long *)(param_1 + 0x30) + -2 + (long)iVar2 * 2) & 0xf800) == 0xd800) {
          iVar2 = utext_previous32_76_godot(param_1);
          if (iVar2 == -1) {
            return 0;
          }
        }
        else {
          *(int *)(param_1 + 0x28) = iVar2 + -1;
        }
        param_2 = param_2 + 1;
      } while (param_2 != 0);
    }
  }
  else {
    do {
      iVar2 = *(int *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x2c) <= iVar2) {
        cVar1 = (**(code **)(*(long *)(param_1 + 0x38) + 0x20))
                          (param_1,*(undefined8 *)(param_1 + 0x10),1);
        if (cVar1 == '\0') {
          return 0;
        }
        iVar2 = *(int *)(param_1 + 0x28);
      }
      if ((*(ushort *)(*(long *)(param_1 + 0x30) + (long)iVar2 * 2) & 0xf800) == 0xd800) {
        iVar2 = utext_next32_76_godot(param_1);
        if (iVar2 == -1) {
          return 0;
        }
      }
      else {
        *(int *)(param_1 + 0x28) = iVar2 + 1;
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 1;
}



long utext_getPreviousNativeIndex_76_godot(long param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x28) + -1;
  if (iVar2 < 0) {
    if ((*(int *)(param_1 + 0x28) == 0) && (*(long *)(param_1 + 0x20) == 0)) {
      return 0;
    }
  }
  else if ((*(ushort *)(*(long *)(param_1 + 0x30) + (long)iVar2 * 2) & 0xfc00) != 0xdc00) {
    if (*(int *)(param_1 + 0x1c) < iVar2) {
      *(int *)(param_1 + 0x28) = iVar2;
      lVar1 = (**(code **)(*(long *)(param_1 + 0x38) + 0x40))();
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      return lVar1;
    }
    return (long)iVar2 + *(long *)(param_1 + 0x20);
  }
  utext_previous32_76_godot(param_1);
  if (*(int *)(param_1 + 0x1c) < *(int *)(param_1 + 0x28)) {
    lVar1 = (**(code **)(*(long *)(param_1 + 0x38) + 0x40))(param_1);
  }
  else {
    lVar1 = (long)*(int *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  }
  utext_next32_76_godot(param_1);
  return lVar1;
}



ulong utext_next32From_76_godot(long param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if ((param_2 < lVar2) || (*(long *)(param_1 + 0x10) <= param_2)) {
    cVar3 = (**(code **)(*(long *)(param_1 + 0x38) + 0x20))(param_1,param_2,1);
    if (cVar3 == '\0') {
      return 0xffffffff;
    }
    iVar4 = *(int *)(param_1 + 0x28);
  }
  else if ((long)*(int *)(param_1 + 0x1c) < param_2 - lVar2) {
    iVar4 = (**(code **)(*(long *)(param_1 + 0x38) + 0x48))();
  }
  else {
    iVar4 = (int)param_2 - (int)lVar2;
  }
  *(int *)(param_1 + 0x28) = iVar4 + 1;
  uVar1 = *(ushort *)(*(long *)(param_1 + 0x30) + (long)iVar4 * 2);
  if ((uVar1 & 0xf800) != 0xd800) {
    return (ulong)uVar1;
  }
  utext_setNativeIndex_76_godot(param_1,param_2);
  uVar5 = utext_next32_76_godot(param_1);
  return uVar5;
}



ulong utext_previous32From_76_godot(long param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if ((lVar2 < param_2) && (param_2 <= *(long *)(param_1 + 0x10))) {
    if (param_2 - lVar2 <= (long)*(int *)(param_1 + 0x1c)) {
      iVar4 = (int)param_2 - (int)lVar2;
      goto LAB_00103025;
    }
    iVar4 = (**(code **)(*(long *)(param_1 + 0x38) + 0x48))();
    *(int *)(param_1 + 0x28) = iVar4;
    if (iVar4 != 0) goto LAB_00103025;
  }
  cVar3 = (**(code **)(*(long *)(param_1 + 0x38) + 0x20))(param_1,param_2,0);
  if (cVar3 == '\0') {
    return 0xffffffff;
  }
  iVar4 = *(int *)(param_1 + 0x28);
LAB_00103025:
  *(int *)(param_1 + 0x28) = iVar4 + -1;
  uVar1 = *(ushort *)(*(long *)(param_1 + 0x30) + (long)(iVar4 + -1) * 2);
  if ((uVar1 & 0xf800) != 0xd800) {
    return (ulong)uVar1;
  }
  utext_setNativeIndex_76_godot(param_1,param_2);
  uVar5 = utext_previous32_76_godot(param_1);
  return uVar5;
}



void utext_extract_76_godot(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001030b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x28))();
  return;
}



bool utext_equals_76_godot(int *param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    return false;
  }
  if ((((*param_1 == 0x345ad82c) && (*param_2 == 0x345ad82c)) &&
      (*(long *)(param_1 + 0xe) == *(long *)(param_2 + 0xe))) &&
     (*(long *)(param_1 + 0x12) == *(long *)(param_2 + 0x12))) {
    if (param_1[7] < param_1[10]) {
      lVar1 = (**(code **)(*(long *)(param_1 + 0xe) + 0x40))();
    }
    else {
      lVar1 = (long)param_1[10] + *(long *)(param_1 + 8);
    }
    if (param_2[7] < param_2[10]) {
      lVar2 = (**(code **)(*(long *)(param_2 + 0xe) + 0x40))(param_2);
    }
    else {
      lVar2 = (long)param_2[10] + *(long *)(param_2 + 8);
    }
    return lVar2 == lVar1;
  }
  return false;
}



uint utext_isWritable_76_godot(long param_1)

{
  return *(uint *)(param_1 + 8) >> 3 & 1;
}



void utext_freeze_76_godot(long param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffff7;
  return;
}



uint utext_hasMetaData_76_godot(long param_1)

{
  return *(uint *)(param_1 + 8) >> 4 & 1;
}



undefined8 utext_replace_76_godot(long param_1)

{
  undefined8 uVar1;
  int *in_R9;
  
  if (*in_R9 < 1) {
    if ((*(byte *)(param_1 + 8) & 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00103195. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*(long *)(param_1 + 0x38) + 0x30))();
      return uVar1;
    }
    *in_R9 = 0x1e;
  }
  return 0;
}



void utext_copy_76_godot(long param_1)

{
  int *in_R9;
  
  if (0 < *in_R9) {
    return;
  }
  if ((*(byte *)(param_1 + 8) & 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x001031cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x38) + 0x38))();
    return;
  }
  *in_R9 = 0x1e;
  return;
}



void utext_clone_76_godot(undefined8 param_1,long param_2,char param_3,char param_4,int *param_5)

{
  long lVar1;
  
  if (*param_5 < 1) {
    lVar1 = (**(code **)(*(long *)(param_2 + 0x38) + 0x10))(param_1,param_2,(int)param_3,param_5);
    if (*param_5 < 1) {
      if (lVar1 == 0) {
        *param_5 = 7;
      }
      else if (param_4 != '\0') {
        *(uint *)(lVar1 + 8) = *(uint *)(lVar1 + 8) & 0xfffffff7;
      }
    }
    return;
  }
  return;
}



int * utext_setup_76_godot(int *param_1,int param_2,int *param_3)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  byte bVar4;
  
  bVar4 = 0;
  if (0 < *param_3) {
    return param_1;
  }
  if (param_1 == (int *)0x0) {
    if (param_2 < 1) {
      param_1 = (int *)uprv_malloc_76_godot(0x90);
      if (param_1 == (int *)0x0) goto LAB_0010342d;
      piVar3 = param_1;
      for (lVar2 = 0x12; lVar2 != 0; lVar2 = lVar2 + -1) {
        piVar3[0] = 0;
        piVar3[1] = 0;
        piVar3 = piVar3 + (ulong)bVar4 * -4 + 2;
      }
      param_1[3] = 0x90;
      param_1[0] = 0x345ad82c;
      param_1[1] = 1;
    }
    else {
      param_1 = (int *)uprv_malloc_76_godot((long)(param_2 + 0x90));
      if (param_1 == (int *)0x0) {
LAB_0010342d:
        *param_3 = 7;
        return (int *)0x0;
      }
      piVar3 = param_1;
      for (lVar2 = 0x12; lVar2 != 0; lVar2 = lVar2 + -1) {
        piVar3[0] = 0;
        piVar3[1] = 0;
        piVar3 = piVar3 + (ulong)bVar4 * -4 + 2;
      }
      param_1[3] = 0x90;
      param_1[0] = 0x345ad82c;
      param_1[1] = 1;
      if (param_2 + 0x90 < 1) goto LAB_00103327;
    }
    param_1[6] = param_2;
    *(int **)(param_1 + 0x10) = param_1 + 0x24;
  }
  else {
    if (*param_1 != 0x345ad82c) {
      *param_3 = 1;
      return param_1;
    }
    uVar1 = param_1[1];
    if (((uVar1 & 4) != 0) && (*(code **)(*(long *)(param_1 + 0xe) + 0x50) != (code *)0x0)) {
      (**(code **)(*(long *)(param_1 + 0xe) + 0x50))();
      uVar1 = param_1[1];
    }
    param_1[1] = uVar1 & 0xfffffffb;
    if (param_1[6] < param_2) {
      if ((uVar1 & 2) != 0) {
        uprv_free_76_godot(*(undefined8 *)(param_1 + 0x10));
        param_1[6] = 0;
      }
      lVar2 = uprv_malloc_76_godot((long)param_2);
      *(long *)(param_1 + 0x10) = lVar2;
      if (lVar2 == 0) {
        *param_3 = 7;
        return param_1;
      }
      param_1[1] = param_1[1] | 2;
      param_1[6] = param_2;
    }
  }
LAB_00103327:
  if (*param_3 < 1) {
    param_1[1] = param_1[1] | 4;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[7] = 0;
    param_1[2] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    *(undefined1 (*) [16])(param_1 + 0x12) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x16) = (undefined1  [16])0x0;
    if ((*(void **)(param_1 + 0x10) != (void *)0x0) && (0 < param_1[6])) {
      memset(*(void **)(param_1 + 0x10),0,(long)param_1[6]);
    }
  }
  return param_1;
}



void * shallowTextClone_part_0(undefined8 param_1,void *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  void *__dest;
  void *pvVar5;
  
  iVar1 = *(int *)((long)param_2 + 0x18);
  __dest = (void *)utext_setup_76_godot(param_1,iVar1);
  if (0 < *param_3) {
    return __dest;
  }
  pvVar4 = *(void **)((long)__dest + 0x40);
  uVar2 = *(undefined4 *)((long)__dest + 4);
  iVar3 = *(int *)((long)param_2 + 0xc);
  if (*(int *)((long)__dest + 0xc) < *(int *)((long)param_2 + 0xc)) {
    iVar3 = *(int *)((long)__dest + 0xc);
  }
  memcpy(__dest,param_2,(long)iVar3);
  *(void **)((long)__dest + 0x40) = pvVar4;
  *(undefined4 *)((long)__dest + 4) = uVar2;
  if (0 < iVar1) {
    memcpy(pvVar4,*(void **)((long)param_2 + 0x40),(long)iVar1);
  }
  pvVar4 = *(void **)((long)__dest + 0x48);
  pvVar5 = *(void **)((long)param_2 + 0x40);
  if ((pvVar4 < pvVar5) || ((void *)((long)*(int *)((long)param_2 + 0x18) + (long)pvVar5) <= pvVar4)
     ) {
    if ((param_2 <= pvVar4) &&
       (pvVar4 < (void *)((long)*(int *)((long)param_2 + 0xc) + (long)param_2))) {
      *(long *)((long)__dest + 0x48) = ((long)pvVar4 - (long)param_2) + (long)__dest;
      pvVar5 = *(void **)((long)param_2 + 0x40);
    }
  }
  else {
    *(long *)((long)__dest + 0x48) = (long)pvVar4 + (*(long *)((long)__dest + 0x40) - (long)pvVar5);
    pvVar5 = *(void **)((long)param_2 + 0x40);
  }
  pvVar4 = *(void **)((long)__dest + 0x50);
  if ((pvVar4 < pvVar5) || ((void *)((long)*(int *)((long)param_2 + 0x18) + (long)pvVar5) <= pvVar4)
     ) {
    if ((param_2 <= pvVar4) &&
       (pvVar4 < (void *)((long)*(int *)((long)param_2 + 0xc) + (long)param_2))) {
      *(long *)((long)__dest + 0x50) = ((long)pvVar4 - (long)param_2) + (long)__dest;
      pvVar5 = *(void **)((long)param_2 + 0x40);
    }
  }
  else {
    *(long *)((long)__dest + 0x50) = (long)pvVar4 + (*(long *)((long)__dest + 0x40) - (long)pvVar5);
    pvVar5 = *(void **)((long)param_2 + 0x40);
  }
  pvVar4 = *(void **)((long)__dest + 0x58);
  if ((pvVar4 < pvVar5) || ((void *)((long)*(int *)((long)param_2 + 0x18) + (long)pvVar5) <= pvVar4)
     ) {
    if ((param_2 <= pvVar4) &&
       (pvVar4 < (void *)((long)*(int *)((long)param_2 + 0xc) + (long)param_2))) {
      *(long *)((long)__dest + 0x58) = ((long)pvVar4 - (long)param_2) + (long)__dest;
      pvVar5 = *(void **)((long)param_2 + 0x40);
    }
  }
  else {
    *(long *)((long)__dest + 0x58) = (long)pvVar4 + (*(long *)((long)__dest + 0x40) - (long)pvVar5);
    pvVar5 = *(void **)((long)param_2 + 0x40);
  }
  pvVar4 = *(void **)((long)__dest + 0x60);
  if ((pvVar4 < pvVar5) || ((void *)((long)*(int *)((long)param_2 + 0x18) + (long)pvVar5) <= pvVar4)
     ) {
    if ((param_2 <= pvVar4) &&
       (pvVar4 < (void *)((long)*(int *)((long)param_2 + 0xc) + (long)param_2))) {
      *(long *)((long)__dest + 0x60) = ((long)pvVar4 - (long)param_2) + (long)__dest;
      pvVar5 = *(void **)((long)param_2 + 0x40);
    }
  }
  else {
    *(long *)((long)__dest + 0x60) = (long)pvVar4 + (*(long *)((long)__dest + 0x40) - (long)pvVar5);
    pvVar5 = *(void **)((long)param_2 + 0x40);
  }
  pvVar4 = *(void **)((long)__dest + 0x30);
  if ((pvVar4 < pvVar5) || ((void *)((long)*(int *)((long)param_2 + 0x18) + (long)pvVar5) <= pvVar4)
     ) {
    if ((param_2 <= pvVar4) &&
       (pvVar4 < (void *)((long)*(int *)((long)param_2 + 0xc) + (long)param_2))) {
      *(long *)((long)__dest + 0x30) = ((long)pvVar4 - (long)param_2) + (long)__dest;
    }
  }
  else {
    *(long *)((long)__dest + 0x30) = (long)pvVar4 + (*(long *)((long)__dest + 0x40) - (long)pvVar5);
  }
  *(uint *)((long)__dest + 8) = *(uint *)((long)__dest + 8) & 0xffffffdf;
  return __dest;
}



long utf8TextClone(undefined8 param_1,long param_2,char param_3,int *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar2 = 0;
  if (*param_4 < 1) {
    lVar2 = shallowTextClone_part_0(param_1,param_2,param_4);
    if ((param_3 != '\0') && (*param_4 < 1)) {
      iVar1 = (**(code **)(*(long *)(param_2 + 0x38) + 0x18))(param_2);
      lVar5 = (long)(iVar1 + 1);
      lVar3 = uprv_malloc_76_godot(lVar5);
      if (lVar3 == 0) {
        *param_4 = 7;
      }
      else {
        uVar4 = __memcpy_chk(lVar3,*(undefined8 *)(param_2 + 0x48),lVar5,lVar5);
        *(uint *)(lVar2 + 8) = *(uint *)(lVar2 + 8) | 0x20;
        *(undefined8 *)(lVar2 + 0x48) = uVar4;
      }
    }
  }
  return lVar2;
}



long repTextClone(undefined8 param_1,long param_2,char param_3,int *param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  if (*param_4 < 1) {
    lVar1 = shallowTextClone_part_0(param_1,param_2,param_4);
    if ((param_3 != '\0') && (*param_4 < 1)) {
      uVar2 = (**(code **)(**(long **)(param_2 + 0x48) + 0x38))();
      *(uint *)(lVar1 + 8) = *(uint *)(lVar1 + 8) | 0x28;
      *(undefined8 *)(lVar1 + 0x48) = uVar2;
    }
  }
  return lVar1;
}



long unistrTextClone(undefined8 param_1,ulong param_2,char param_3,int *param_4)

{
  UnicodeString *pUVar1;
  long lVar2;
  UnicodeString *this;
  ulong uVar3;
  
  lVar2 = 0;
  if (*param_4 < 1) {
    uVar3 = param_2;
    lVar2 = shallowTextClone_part_0(param_1,param_2,param_4);
    if ((param_3 != '\0') && (*param_4 < 1)) {
      pUVar1 = *(UnicodeString **)(param_2 + 0x48);
      this = (UnicodeString *)icu_76_godot::UMemory::operator_new((UMemory *)0x40,uVar3);
      if (this != (UnicodeString *)0x0) {
        icu_76_godot::UnicodeString::UnicodeString(this,pUVar1);
      }
      *(uint *)(lVar2 + 8) = *(uint *)(lVar2 + 8) | 0x28;
      *(UnicodeString **)(lVar2 + 0x48) = this;
      return lVar2;
    }
  }
  return lVar2;
}



long ucstrTextClone(undefined8 param_1,long param_2,char param_3,int *param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = 0;
  if (((*param_4 < 1) && (lVar4 = shallowTextClone_part_0(param_1,param_2,param_4), param_3 != '\0')
      ) && (*param_4 < 1)) {
    iVar3 = (**(code **)(*(long *)(lVar4 + 0x38) + 0x18))(lVar4);
    lVar1 = *(long *)(param_2 + 0x48);
    lVar2 = (long)(iVar3 + 1) * 2;
    lVar5 = uprv_malloc_76_godot(lVar2);
    if (lVar5 == 0) {
      *param_4 = 7;
    }
    else {
      lVar6 = 0;
      if (0 < iVar3) {
        do {
          *(undefined2 *)(lVar5 + lVar6 * 2) = *(undefined2 *)(lVar1 + lVar6 * 2);
          lVar6 = lVar6 + 1;
        } while (lVar6 != iVar3);
      }
      *(undefined2 *)(lVar5 + -2 + lVar2) = 0;
      *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) | 0x20;
      *(long *)(lVar4 + 0x48) = lVar5;
    }
  }
  return lVar4;
}



ulong * utext_close_76_godot(ulong *param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (ulong *)0x0) {
    return (ulong *)0x0;
  }
  if ((*param_1 & 0x4ffffffff) == 0x4345ad82c) {
    if (*(code **)(param_1[7] + 0x50) != (code *)0x0) {
      (**(code **)(param_1[7] + 0x50))();
    }
    uVar1 = *(uint *)((long)param_1 + 4);
    uVar2 = uVar1 & 0xfffffffb;
    *(uint *)((long)param_1 + 4) = uVar2;
    if ((uVar1 & 2) != 0) {
      uprv_free_76_godot(param_1[8]);
      param_1[8] = 0;
      *(undefined4 *)(param_1 + 3) = 0;
      uVar2 = *(uint *)((long)param_1 + 4) & 0xfffffffd;
      *(uint *)((long)param_1 + 4) = uVar2;
    }
    param_1[7] = 0;
    if ((uVar2 & 1) != 0) {
      *(undefined4 *)param_1 = 0;
      uprv_free_76_godot(param_1);
      return (ulong *)0x0;
    }
  }
  return param_1;
}



long utext_openUTF8_76_godot(undefined8 param_1,long param_2,long param_3,int *param_4)

{
  long lVar1;
  int iVar2;
  
  if (0 < *param_4) {
    return 0;
  }
  if (param_2 == 0 && param_3 == 0) {
    lVar1 = utext_setup_76_godot(param_1,0x1e0,param_4);
    if (0 < *param_4) {
      return lVar1;
    }
    *(undefined8 *)(lVar1 + 0x78) = 0;
    *(undefined1 **)(lVar1 + 0x38) = utf8Funcs;
    *(undefined1 **)(lVar1 + 0x48) = &gEmptyString;
  }
  else {
    if ((0x80000000 < param_3 + 1U) || (param_2 == 0)) {
      *param_4 = 1;
      return 0;
    }
    lVar1 = utext_setup_76_godot(param_1,0x1e0,param_4);
    if (0 < *param_4) {
      return lVar1;
    }
    *(long *)(lVar1 + 0x48) = param_2;
    *(undefined1 **)(lVar1 + 0x38) = utf8Funcs;
    iVar2 = (int)param_3;
    *(int *)(lVar1 + 0x78) = iVar2;
    if (iVar2 == -1) {
      *(uint *)(lVar1 + 8) = *(uint *)(lVar1 + 8) | 2;
      *(undefined4 *)(lVar1 + 0x7c) = 0;
    }
    else {
      *(int *)(lVar1 + 0x7c) = iVar2;
    }
  }
  *(long *)(lVar1 + 0x50) = *(long *)(lVar1 + 0x40);
  *(long *)(lVar1 + 0x58) = *(long *)(lVar1 + 0x40) + 0xf0;
  return lVar1;
}



long utext_openReplaceable_76_godot(undefined8 param_1,long *param_2,int *param_3)

{
  char cVar1;
  long lVar2;
  
  if (*param_3 < 1) {
    if (param_2 != (long *)0x0) {
      lVar2 = utext_setup_76_godot(param_1,0x16);
      if (*param_3 < 1) {
        *(undefined4 *)(lVar2 + 8) = 8;
        cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
        if (cVar1 != '\0') {
          *(uint *)(lVar2 + 8) = *(uint *)(lVar2 + 8) | 0x10;
        }
        *(long **)(lVar2 + 0x48) = param_2;
        *(undefined1 **)(lVar2 + 0x38) = repFuncs;
      }
      return lVar2;
    }
    *param_3 = 1;
  }
  return 0;
}



long utext_openUChars_76_godot(undefined8 param_1,undefined2 *param_2,long param_3,int *param_4)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (0 < *param_4) {
    return 0;
  }
  if (param_2 == (undefined2 *)0x0 && param_3 == 0) {
    lVar1 = utext_setup_76_godot(param_1,0,param_4);
    if (0 < *param_4) {
      return lVar1;
    }
    param_2 = &gEmptyUString;
    *(undefined4 *)(lVar1 + 8) = 4;
    *(undefined1 **)(lVar1 + 0x38) = ucstrFuncs;
    *(undefined2 **)(lVar1 + 0x48) = &gEmptyUString;
  }
  else {
    if ((0x80000000 < param_3 + 1U) || (param_2 == (undefined2 *)0x0)) {
      *param_4 = 1;
      return 0;
    }
    lVar1 = utext_setup_76_godot(param_1,0,param_4);
    if (0 < *param_4) {
      return lVar1;
    }
    *(undefined2 **)(lVar1 + 0x48) = param_2;
    *(undefined1 **)(lVar1 + 0x38) = ucstrFuncs;
    *(undefined4 *)(lVar1 + 8) = 4;
    if (param_3 == -1) {
      uVar2 = 6;
      goto LAB_00103b4d;
    }
  }
  uVar2 = 4;
LAB_00103b4d:
  *(undefined4 *)(lVar1 + 8) = uVar2;
  lVar3 = 0;
  if (-1 < param_3) {
    lVar3 = param_3;
  }
  *(long *)(lVar1 + 0x70) = param_3;
  *(undefined2 **)(lVar1 + 0x30) = param_2;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(long *)(lVar1 + 0x10) = lVar3;
  *(int *)(lVar1 + 0x2c) = (int)lVar3;
  *(undefined4 *)(lVar1 + 0x28) = 0;
  *(int *)(lVar1 + 0x1c) = (int)lVar3;
  return lVar1;
}



long utext_openConstUnicodeString_76_godot(long param_1,long param_2,int *param_3)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  if ((*param_3 < 1) && ((*(byte *)(param_2 + 8) & 1) != 0)) {
    utext_openUChars_76_godot(param_1,0,0,param_3);
    *param_3 = 1;
    return param_1;
  }
  lVar2 = utext_setup_76_godot(param_1,0,param_3);
  if (0 < *param_3) {
    return lVar2;
  }
  uVar1 = *(ushort *)(param_2 + 8);
  *(long *)(lVar2 + 0x48) = param_2;
  *(undefined1 **)(lVar2 + 0x38) = unistrFuncs;
  *(undefined4 *)(lVar2 + 8) = 4;
  if ((uVar1 & 0x11) == 0) {
    lVar3 = param_2 + 10;
    if ((uVar1 & 2) == 0) {
      *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(param_2 + 0x18);
      goto joined_r0x00103c83;
    }
  }
  else {
    lVar3 = 0;
  }
  *(long *)(lVar2 + 0x30) = lVar3;
joined_r0x00103c83:
  if ((short)uVar1 < 0) {
    iVar4 = *(int *)(param_2 + 0xc);
  }
  else {
    iVar4 = (int)((short)uVar1 >> 5);
  }
  *(int *)(lVar2 + 0x2c) = iVar4;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(long *)(lVar2 + 0x10) = (long)iVar4;
  *(int *)(lVar2 + 0x1c) = iVar4;
  return lVar2;
}



void utext_openUnicodeString_76_godot(undefined8 param_1,undefined8 param_2,int *param_3)

{
  long lVar1;
  
  lVar1 = utext_openConstUnicodeString_76_godot();
  if (0 < *param_3) {
    return;
  }
  *(uint *)(lVar1 + 8) = *(uint *)(lVar1 + 8) | 8;
  return;
}



long utext_openCharacterIterator_76_godot(undefined8 param_1,long param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (0 < *param_3) {
    return 0;
  }
  if (*(int *)(param_2 + 0x10) < 1) {
    lVar3 = utext_setup_76_godot(param_1,0x40);
    if (*param_3 < 1) {
      iVar1 = *(int *)(param_2 + 0x14);
      *(undefined4 *)(lVar3 + 8) = 0;
      *(undefined1 **)(lVar3 + 0x38) = charIterFuncs;
      *(long *)(lVar3 + 0x70) = (long)iVar1;
      lVar2 = *(long *)(lVar3 + 0x40);
      *(undefined8 *)(lVar3 + 0x78) = 0xffffffffffffffff;
      *(long *)(lVar3 + 0x30) = lVar2;
      *(long *)(lVar3 + 0x58) = lVar2 + 0x20;
      *(undefined8 *)(lVar3 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(lVar3 + 0x10) = 0;
      *(undefined8 *)(lVar3 + 0x28) = 1;
      *(undefined4 *)(lVar3 + 0x1c) = 1;
      *(long *)(lVar3 + 0x48) = param_2;
      *(long *)(lVar3 + 0x50) = lVar2;
      return lVar3;
    }
  }
  else {
    *param_3 = 0x10;
    lVar3 = 0;
  }
  return lVar3;
}



long charIterTextClone(undefined8 param_1,long param_2,char param_3,int *param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (*param_4 < 1) {
    if (param_3 == '\0') {
      uVar1 = (**(code **)(**(long **)(param_2 + 0x48) + 0x40))();
      lVar2 = utext_openCharacterIterator_76_godot(param_1,uVar1,param_4);
      if (0 < *param_4) {
        return lVar2;
      }
      if (*(int *)(param_2 + 0x1c) < *(int *)(param_2 + 0x28)) {
        lVar3 = (**(code **)(*(long *)(param_2 + 0x38) + 0x40))(param_2);
      }
      else {
        lVar3 = (long)*(int *)(param_2 + 0x28) + *(long *)(param_2 + 0x20);
      }
      utext_setNativeIndex_76_godot(lVar2,lVar3);
      *(undefined8 *)(lVar2 + 0x60) = uVar1;
      return lVar2;
    }
    *param_4 = 0x10;
  }
  return 0;
}


