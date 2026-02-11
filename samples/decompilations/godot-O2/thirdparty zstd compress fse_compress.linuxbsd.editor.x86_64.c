
undefined1 *
FSE_writeNCount_generic
          (undefined2 *param_1,long param_2,long param_3,uint param_4,int param_5,int param_6)

{
  undefined2 *puVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  short *psVar15;
  bool bVar16;
  
  iVar5 = 1 << ((byte)param_5 & 0x1f);
  uVar3 = param_5 - 5;
  iVar13 = iVar5 + 1;
  puVar8 = param_1;
  if ((param_4 == 0xffffffff) || (iVar13 < 2)) {
    iVar4 = 4;
  }
  else {
    param_5 = param_5 + 1;
    iVar4 = 4;
    puVar1 = (undefined2 *)((long)param_1 + param_2 + -2);
    uVar11 = 0;
    while( true ) {
      uVar10 = uVar11;
      uVar11 = uVar10 + 1;
      sVar2 = *(short *)(param_3 + (ulong)uVar10 * 2);
      iVar6 = (iVar5 * 2 + -1) - iVar13;
      uVar14 = (uint)(ushort)-sVar2;
      if (0 < sVar2) {
        uVar14 = (int)sVar2;
      }
      iVar12 = (int)sVar2 + 1;
      iVar13 = iVar13 - (uVar14 & 0xffff);
      if (iVar5 <= iVar12) {
        iVar12 = iVar12 + iVar6;
      }
      uVar3 = uVar3 + (iVar12 << ((byte)iVar4 & 0x1f));
      iVar4 = (iVar4 + param_5) - (uint)(iVar12 < iVar6);
      if (iVar13 < 1) {
        return (undefined1 *)0xffffffffffffffff;
      }
      for (; iVar13 < iVar5; iVar5 = iVar5 >> 1) {
        param_5 = param_5 + -1;
      }
      if (0x10 < iVar4) {
        if ((param_6 == 0) && (puVar1 < puVar8)) {
          return (undefined1 *)0xffffffffffffffba;
        }
        *puVar8 = (short)uVar3;
        iVar4 = iVar4 + -0x10;
        puVar8 = puVar8 + 1;
        uVar3 = uVar3 >> 0x10;
      }
      if ((param_4 + 1 <= uVar11) || (iVar13 < 2)) break;
      if (iVar12 == 1) {
        psVar15 = (short *)(param_3 + (ulong)uVar11 * 2);
        uVar14 = uVar11;
        do {
          uVar7 = uVar14;
          if (*psVar15 != 0) break;
          uVar7 = uVar14 + 1;
          psVar15 = psVar15 + 1;
          bVar16 = param_4 != uVar14;
          uVar14 = uVar7;
        } while (bVar16);
        if (param_4 + 1 == uVar7) {
          return (undefined1 *)0xffffffffffffffff;
        }
        iVar6 = iVar4;
        if (uVar10 + 0x19 <= uVar7) {
          puVar9 = puVar8;
          uVar14 = uVar10 + 0x19;
          do {
            uVar11 = uVar14;
            uVar3 = uVar3 + (0xffff << ((byte)iVar4 & 0x1f));
            if ((param_6 == 0) && (puVar1 < puVar9)) {
              return (undefined1 *)0xffffffffffffffba;
            }
            *(char *)puVar9 = (char)uVar3;
            puVar8 = puVar9 + 1;
            *(char *)((long)puVar9 + 1) = (char)(uVar3 >> 8);
            uVar3 = uVar3 >> 0x10;
            puVar9 = puVar8;
            uVar14 = uVar11 + 0x18;
          } while (uVar11 + 0x18 <= uVar7);
        }
        while( true ) {
          if (uVar7 < uVar11 + 3) break;
          uVar3 = uVar3 + (3 << ((byte)iVar6 & 0x1f));
          iVar6 = iVar6 + 2;
          uVar11 = uVar11 + 3;
        }
        iVar4 = iVar6 + 2;
        uVar3 = uVar3 + (uVar7 - uVar11 << ((byte)iVar6 & 0x1f));
        uVar11 = uVar7;
        if (0x10 < iVar4) {
          if ((param_6 == 0) && ((undefined2 *)((long)param_1 + param_2 + -2) < puVar8)) {
            return (undefined1 *)0xffffffffffffffba;
          }
          *puVar8 = (short)uVar3;
          iVar4 = iVar6 + -0xe;
          puVar8 = puVar8 + 1;
          uVar3 = uVar3 >> 0x10;
        }
      }
    }
  }
  if (iVar13 != 1) {
    return (undefined1 *)0xffffffffffffffff;
  }
  if ((param_6 == 0) && ((undefined2 *)((long)param_1 + param_2 + -2) < puVar8)) {
    return (undefined1 *)0xffffffffffffffba;
  }
  *puVar8 = (short)uVar3;
  iVar13 = iVar4 + 0xe;
  if (-1 < iVar4 + 7) {
    iVar13 = iVar4 + 7;
  }
  return (undefined1 *)((long)puVar8 + ((long)(iVar13 >> 3) - (long)param_1));
}



long FSE_compress_usingCTable_generic
               (ulong *param_1,ulong param_2,byte *param_3,ulong param_4,ushort *param_5,int param_6
               )

{
  byte *pbVar1;
  ulong *puVar2;
  int *piVar3;
  int *piVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong *puVar21;
  long lVar22;
  ulong *puVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  byte *pbVar27;
  ulong uVar28;
  int iVar29;
  
  if ((2 < param_4) && (puVar2 = (ulong *)((long)param_1 + (param_2 - 8)), 8 < param_2)) {
    uVar5 = *param_5;
    uVar13 = (ulong)((uint)param_4 & 1);
    lVar14 = 8;
    if ((param_4 & 1) == 0) {
      if (uVar5 != 0) {
        lVar14 = (long)(1 << ((char)uVar5 - 1U & 0x1f)) * 4 + 4;
      }
      lVar14 = lVar14 + (long)param_5;
      pbVar1 = param_3 + (param_4 - 2);
      piVar3 = (int *)(lVar14 + (ulong)param_3[param_4 - 1] * 8);
      iVar12 = piVar3[1];
      uVar9 = iVar12 + 0x8000;
      uVar6 = param_5[((long)(ulong)((uVar9 & 0xffff0000) - iVar12) >>
                      ((byte)(uVar9 >> 0x10) & 0x3f)) + (long)*piVar3 + 2];
      piVar3 = (int *)(lVar14 + (ulong)param_3[param_4 - 2] * 8);
      iVar12 = piVar3[1];
      uVar9 = iVar12 + 0x8000;
      uVar15 = 0;
      uVar7 = param_5[((long)(ulong)((uVar9 & 0xffff0000) - iVar12) >>
                      ((byte)(uVar9 >> 0x10) & 0x3f)) + (long)*piVar3 + 2];
      puVar21 = param_1;
    }
    else {
      if (uVar5 != 0) {
        lVar14 = (long)(1 << ((char)uVar5 - 1U & 0x1f)) * 4 + 4;
      }
      lVar14 = lVar14 + (long)param_5;
      pbVar1 = param_3 + (param_4 - 3);
      piVar3 = (int *)(lVar14 + (ulong)param_3[param_4 - 1] * 8);
      iVar12 = piVar3[1];
      uVar9 = iVar12 + 0x8000;
      uVar13 = (ulong)param_5[((long)(ulong)((uVar9 & 0xffff0000) - iVar12) >>
                              ((byte)(uVar9 >> 0x10) & 0x3f)) + (long)*piVar3 + 2];
      piVar3 = (int *)(lVar14 + (ulong)param_3[param_4 - 2] * 8);
      iVar12 = piVar3[1];
      uVar9 = iVar12 + 0x8000;
      uVar6 = param_5[((long)(ulong)((uVar9 & 0xffff0000) - iVar12) >>
                      ((byte)(uVar9 >> 0x10) & 0x3f)) + (long)*piVar3 + 2];
      piVar3 = (int *)(lVar14 + (ulong)param_3[param_4 - 3] * 8);
      lVar18 = (uint)piVar3[1] + uVar13;
      uVar9 = *(uint *)(BIT_mask + (lVar18 >> 0x10) * 4);
      uVar15 = (uint)((ulong)lVar18 >> 0x10);
      uVar24 = uVar15 >> 3;
      uVar15 = uVar15 & 7;
      puVar21 = (ulong *)((long)param_1 + (ulong)uVar24);
      uVar7 = param_5[((long)uVar13 >> ((byte)((ulong)lVar18 >> 0x10) & 0x3f)) + (long)*piVar3 + 2];
      *param_1 = uVar9 & uVar13;
      uVar13 = (uVar9 & uVar13) >> ((char)uVar24 * '\b' & 0x3fU);
      if ((param_6 == 0) && (puVar2 < puVar21)) {
        puVar21 = puVar2;
      }
    }
    uVar11 = (ulong)uVar7;
    uVar8 = (ulong)uVar6;
    if ((param_4 & 2) == 0) {
      pbVar27 = pbVar1 + -2;
      piVar3 = (int *)(lVar14 + (ulong)pbVar1[-1] * 8);
      lVar18 = (uint)piVar3[1] + uVar8;
      iVar12 = uVar15 + (int)((ulong)lVar18 >> 0x10);
      uVar19 = *(uint *)(BIT_mask + (lVar18 >> 0x10) * 4) & uVar8;
      uVar8 = (ulong)param_5[((long)uVar8 >> ((byte)((ulong)lVar18 >> 0x10) & 0x3f)) + (long)*piVar3
                             + 2];
      piVar3 = (int *)(lVar14 + (ulong)pbVar1[-2] * 8);
      lVar18 = (uint)piVar3[1] + uVar11;
      uVar9 = iVar12 + (int)((ulong)lVar18 >> 0x10);
      uVar19 = (*(uint *)(BIT_mask + (lVar18 >> 0x10) * 4) & uVar11) << ((byte)iVar12 & 0x3f) |
               uVar19 << (sbyte)uVar15 | uVar13;
      uVar15 = uVar9 & 7;
      uVar9 = uVar9 >> 3;
      uVar11 = (ulong)param_5[((long)uVar11 >> ((byte)((ulong)lVar18 >> 0x10) & 0x3f)) +
                              (long)*piVar3 + 2];
      uVar13 = uVar19 >> ((byte)(uVar9 << 3) & 0x3f);
      puVar23 = (ulong *)((ulong)uVar9 + (long)puVar21);
      pbVar1 = pbVar27;
      if (param_6 == 0) {
        *puVar21 = uVar19;
        puVar21 = puVar23;
        if (puVar2 <= puVar23) {
          puVar21 = puVar2;
        }
      }
      else {
        *puVar21 = uVar19;
        puVar21 = puVar23;
      }
    }
    while (param_3 < pbVar1) {
      pbVar27 = pbVar1 + -4;
      piVar3 = (int *)(lVar14 + (ulong)pbVar1[-1] * 8);
      uVar19 = (uint)piVar3[1] + uVar8;
      iVar29 = uVar15 + (int)(uVar19 >> 0x10);
      uVar28 = (ulong)param_5[(long)*piVar3 + ((long)uVar8 >> ((byte)(uVar19 >> 0x10) & 0x3f)) + 2];
      piVar3 = (int *)(lVar14 + (ulong)pbVar1[-2] * 8);
      uVar10 = (uint)piVar3[1] + uVar11;
      iVar12 = iVar29 + (int)(uVar10 >> 0x10);
      uVar26 = (ulong)param_5[(long)*piVar3 + ((long)uVar11 >> ((byte)(uVar10 >> 0x10) & 0x3f)) + 2]
      ;
      piVar3 = (int *)(lVar14 + (ulong)pbVar1[-3] * 8);
      uVar19 = uVar8 & *(uint *)(BIT_mask + (uVar19 >> 0x10) * 4);
      lVar22 = (uint)piVar3[1] + uVar28;
      iVar16 = iVar12 + (int)((ulong)lVar22 >> 0x10);
      piVar4 = (int *)(lVar14 + (ulong)*pbVar27 * 8);
      uVar8 = (ulong)param_5[(long)*piVar3 +
                             ((long)uVar28 >> ((byte)((ulong)lVar22 >> 0x10) & 0x3f)) + 2];
      lVar18 = (uint)piVar4[1] + uVar26;
      uVar24 = iVar16 + (int)((ulong)lVar18 >> 0x10);
      uVar9 = uVar24 >> 3;
      uVar19 = (*(uint *)(BIT_mask + (lVar18 >> 0x10) * 4) & uVar26) << ((byte)iVar16 & 0x3f) |
               (uVar11 & *(uint *)(BIT_mask + (uVar10 >> 0x10) * 4)) << ((byte)iVar29 & 0x3f) |
               uVar19 << (sbyte)uVar15 |
               (*(uint *)(BIT_mask + (lVar22 >> 0x10) * 4) & uVar28) << ((byte)iVar12 & 0x3f) |
               uVar13;
      puVar20 = (ulong *)((ulong)uVar9 + (long)puVar21);
      uVar15 = uVar24 & 7;
      uVar11 = (ulong)param_5[(long)*piVar4 +
                              ((long)uVar26 >> ((byte)((ulong)lVar18 >> 0x10) & 0x3f)) + 2];
      uVar13 = uVar19 >> ((byte)(uVar9 << 3) & 0x3f);
      *puVar21 = uVar19;
      puVar23 = puVar2;
      if (puVar20 <= puVar2) {
        puVar23 = puVar20;
      }
      pbVar1 = pbVar27;
      puVar21 = puVar20;
      if (param_6 == 0) {
        puVar21 = puVar23;
      }
    }
    uVar24 = (uint)uVar5;
    uVar9 = *(uint *)(BIT_mask + (ulong)uVar24 * 4);
    uVar25 = uVar15 + uVar24 >> 3;
    uVar13 = (uVar8 & uVar9) << (sbyte)uVar15 | uVar13;
    *puVar21 = uVar13;
    puVar21 = (ulong *)((long)puVar21 + (ulong)uVar25);
    if (puVar2 <= puVar21) {
      puVar21 = puVar2;
    }
    uVar17 = uVar15 + uVar24 & 7;
    uVar24 = uVar17 + uVar24;
    uVar15 = uVar24 >> 3;
    uVar13 = (uVar11 & uVar9) << (sbyte)uVar17 | uVar13 >> ((char)uVar25 * '\b' & 0x3fU);
    *puVar21 = uVar13;
    puVar21 = (ulong *)((long)puVar21 + (ulong)uVar15);
    if (puVar2 <= puVar21) {
      puVar21 = puVar2;
    }
    uVar24 = uVar24 & 7;
    uVar9 = uVar24 + 1;
    *puVar21 = uVar13 >> ((byte)(uVar15 << 3) & 0x3f) | 1L << uVar24;
    puVar21 = (ulong *)((long)puVar21 + (ulong)(uVar9 >> 3));
    if ((puVar21 <= puVar2) && (puVar2 != puVar21)) {
      return (long)puVar21 + ((1 - (long)param_1) - (ulong)((uVar9 & 7) == 0));
    }
  }
  return 0;
}



undefined8
FSE_buildCTable_wksp
          (undefined2 *param_1,short *param_2,uint param_3,int param_4,short *param_5,ulong param_6)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  byte *pbVar20;
  byte *pbVar21;
  uint uVar22;
  uint uVar23;
  short *psVar24;
  short sVar25;
  long lVar26;
  long lVar27;
  bool bVar28;
  
  lVar27 = 8;
  uVar3 = 1 << ((byte)param_4 & 0x1f);
  uVar17 = uVar3 - 1;
  uVar15 = (ulong)uVar17;
  if (param_4 != 0) {
    lVar27 = (ulong)((uVar3 >> 1) + 1) * 4;
  }
  uVar23 = param_3 + 1;
  uVar2 = (uVar3 >> 1) + 3 + (uVar3 >> 3);
  pbVar21 = (byte *)(param_5 + (param_3 + 2));
  if (param_6 < ((1L << ((byte)param_4 & 0x3f)) + (ulong)(param_3 + 2) >> 1) * 4 + 8) {
    return 0xffffffffffffffd4;
  }
  *param_1 = (short)param_4;
  param_1[1] = (short)param_3;
  sVar25 = (short)uVar3 + 1;
  *param_5 = 0;
  if (uVar23 == 0) {
    *param_5 = sVar25;
    pbVar11 = pbVar21 + uVar3;
LAB_001009fb:
    uVar15 = (ulong)uVar17;
    if ((ulong)uVar3 == 0) goto LAB_00100a7c;
    uVar6 = 0;
    pbVar4 = pbVar11;
    do {
      uVar5 = uVar6 + uVar2;
      pbVar12 = pbVar4 + 2;
      pbVar21[uVar6 & uVar15] = *pbVar4;
      uVar6 = uVar5 + uVar2 & uVar15;
      pbVar21[uVar5 & uVar15] = pbVar4[1];
      pbVar4 = pbVar12;
    } while (pbVar11 + ((ulong)uVar3 - 1 & 0xfffffffffffffffe) + 2 != pbVar12);
  }
  else {
    uVar22 = 0;
    sVar8 = 0;
    uVar18 = 1;
    uVar6 = 0;
    while( true ) {
      uVar13 = (uint)uVar15;
      if (param_2[uVar6] == -1) {
        uVar13 = uVar13 - 1;
        param_5[uVar18] = sVar8 + 1;
        pbVar21[uVar15] = (byte)uVar22;
        uVar15 = (ulong)uVar13;
      }
      else {
        param_5[uVar18] = param_2[uVar6] + sVar8;
      }
      if (uVar23 < uVar18 + 1) break;
      uVar18 = uVar18 + 1;
      uVar22 = uVar22 + 1;
      uVar6 = (ulong)uVar22;
      sVar8 = param_5[uVar6];
    }
    param_5[uVar23] = sVar25;
    uVar23 = 0;
    uVar15 = 0;
    if (uVar13 == uVar17) {
      lVar16 = 0;
      lVar26 = 0;
      pbVar11 = pbVar21 + uVar3;
      psVar24 = param_2;
      do {
        sVar25 = *psVar24;
        *(long *)(pbVar11 + lVar26) = lVar16;
        if (8 < sVar25) {
          pbVar4 = pbVar11 + lVar26 + 8;
          pbVar20 = pbVar11 + (ulong)((int)sVar25 - 9U & 0xfffffff8) + lVar26 + 0x10;
          pbVar12 = pbVar4;
          if (((int)pbVar20 - (int)pbVar4 & 8U) != 0) {
            *(long *)pbVar4 = lVar16;
            pbVar12 = pbVar4 + 8;
            if (pbVar20 == pbVar4 + 8) goto LAB_001009d0;
          }
          do {
            *(long *)pbVar12 = lVar16;
            pbVar4 = pbVar12 + 0x10;
            *(long *)(pbVar12 + 8) = lVar16;
            pbVar12 = pbVar4;
          } while (pbVar20 != pbVar4);
        }
LAB_001009d0:
        psVar24 = psVar24 + 1;
        lVar26 = lVar26 + sVar25;
        lVar16 = lVar16 + 0x101010101010101;
      } while (param_2 + (ulong)param_3 + 1 != psVar24);
      goto LAB_001009fb;
    }
    do {
      sVar25 = param_2[uVar15];
      if (0 < sVar25) {
        iVar9 = 0;
        do {
          pbVar21[uVar23] = (byte)uVar15;
          do {
            uVar23 = uVar23 + uVar2 & uVar17;
          } while (uVar13 < uVar23);
          iVar9 = iVar9 + 1;
        } while (sVar25 != iVar9);
      }
      bVar28 = uVar15 != param_3;
      uVar15 = uVar15 + 1;
    } while (bVar28);
  }
  if (uVar3 != 0) {
    pbVar11 = pbVar21 + (ulong)uVar17 + 1;
    sVar25 = (short)pbVar21;
    do {
      uVar1 = param_5[*pbVar21];
      param_5[*pbVar21] = uVar1 + 1;
      sVar8 = (short)pbVar21;
      pbVar21 = pbVar21 + 1;
      param_1[(ulong)uVar1 + 2] = ((short)uVar3 - sVar25) + sVar8;
    } while (pbVar21 != pbVar11);
  }
LAB_00100a7c:
  uVar17 = 0;
  iVar9 = 0;
  do {
    iVar14 = (int)param_2[uVar17];
    piVar7 = (int *)(lVar27 + (ulong)uVar17 * 8 + (long)param_1);
    if (param_2[uVar17] == 0) {
      piVar7[1] = (param_4 + 1) * 0x10000 - uVar3;
      iVar19 = iVar9;
    }
    else if ((iVar14 + 1U & 0xfffd) == 0) {
      piVar7[1] = param_4 * 0x10000 - uVar3;
      iVar19 = iVar9 + 1;
      *piVar7 = iVar9 + -1;
    }
    else {
      uVar2 = 0x1f;
      if (iVar14 - 1U != 0) {
        for (; iVar14 - 1U >> uVar2 == 0; uVar2 = uVar2 - 1) {
        }
      }
      iVar10 = (uVar2 ^ 0x1f) + param_4 + -0x1f;
      iVar19 = iVar9 + iVar14;
      *piVar7 = iVar9 - iVar14;
      piVar7[1] = iVar10 * 0x10000 - (iVar14 << ((byte)iVar10 & 0x1f));
    }
    uVar17 = uVar17 + 1;
    iVar9 = iVar19;
  } while (uVar17 <= param_3);
  return 0;
}



int FSE_NCountWriteBound(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0x200;
  if (param_1 != 0) {
    iVar1 = ((param_1 + 1) * param_2 + 6U >> 3) + 3;
  }
  return iVar1;
}



undefined8
FSE_writeNCount(undefined8 param_1,ulong param_2,undefined8 param_3,int param_4,uint param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (0xc < param_5) {
    return 0xffffffffffffffd4;
  }
  if (4 < param_5) {
    uVar1 = 0x200;
    if (param_4 != 0) {
      uVar1 = (ulong)(((param_4 + 1) * param_5 + 6 >> 3) + 3);
    }
    if (uVar1 <= param_2) {
      uVar2 = FSE_writeNCount_generic();
      return uVar2;
    }
    uVar2 = FSE_writeNCount_generic();
    return uVar2;
  }
  return 0xffffffffffffffff;
}



uint FSE_optimalTableLog_internal(uint param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = 0x1f;
  if (param_2 - 1 != 0) {
    for (; param_2 - 1 >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  iVar2 = 0x1f;
  if (param_3 != 0) {
    for (; param_3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  iVar3 = 0x1f;
  if (param_2 != 0) {
    for (; param_2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
    }
  }
  uVar4 = (0x1f - param_4) - (uVar1 ^ 0x1f);
  uVar1 = iVar3 + 1U;
  if (iVar2 + 2U < iVar3 + 1U) {
    uVar1 = iVar2 + 2U;
  }
  if (param_1 == 0) {
    param_1 = 0xb;
  }
  if (uVar4 < param_1) {
    param_1 = uVar4;
  }
  if (param_1 < uVar1) {
    param_1 = uVar1;
  }
  if (0xc < param_1) {
    param_1 = 0xc;
  }
  if (param_1 < 5) {
    param_1 = 5;
  }
  return param_1;
}



uint FSE_optimalTableLog(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = 0x1f;
  if (param_3 != 0) {
    for (; param_3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar2 = 0x1f;
  if (param_2 != 0) {
    for (; param_2 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  iVar3 = 0x1f;
  if (param_2 - 1 != 0) {
    for (; param_2 - 1 >> iVar3 == 0; iVar3 = iVar3 + -1) {
    }
  }
  uVar4 = iVar2 + 1U;
  if (iVar1 + 2U < iVar2 + 1U) {
    uVar4 = iVar1 + 2U;
  }
  if (param_1 == 0) {
    param_1 = 0xb;
  }
  uVar5 = iVar3 - 2U;
  if (param_1 < iVar3 - 2U) {
    uVar5 = param_1;
  }
  if (uVar5 < uVar4) {
    uVar5 = uVar4;
  }
  if (0xc < uVar5) {
    uVar5 = 0xc;
  }
  if (uVar5 < 5) {
    uVar5 = 5;
  }
  return uVar5;
}



ulong FSE_normalizeCount(long param_1,uint param_2,long param_3,ulong param_4,uint param_5,
                        int param_6)

{
  short *psVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  short sVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  short sVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  uint local_40;
  uint uStack_3c;
  byte bStack_38;
  
  if (param_2 == 0) {
    local_40 = 0xb;
  }
  else {
    if (param_2 < 5) {
      return 0xffffffffffffffff;
    }
    local_40 = param_2;
    if (0xc < param_2) {
      return 0xffffffffffffffd4;
    }
  }
  iVar16 = 0x1f;
  if ((uint)param_4 != 0) {
    for (; (uint)param_4 >> iVar16 == 0; iVar16 = iVar16 + -1) {
    }
  }
  iVar5 = 0x1f;
  if (param_5 != 0) {
    for (; param_5 >> iVar5 == 0; iVar5 = iVar5 + -1) {
    }
  }
  uVar9 = iVar16 + 1U;
  if (iVar5 + 2U < iVar16 + 1U) {
    uVar9 = iVar5 + 2U;
  }
  if (local_40 < uVar9) {
    return 0xffffffffffffffff;
  }
  uStack_3c = 0;
  bVar3 = (byte)local_40;
  bVar8 = 0x3e - bVar3;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_4 & 0xffffffff;
  uVar7 = 0;
  uVar9 = 0;
  sVar11 = (-(ushort)(param_6 == 0) & 2) - 1;
  bStack_38 = 0x2a - bVar3;
  iVar5 = 1 << (bVar3 & 0x1f);
  iVar16 = iVar5;
  do {
    while( true ) {
      uVar10 = *(uint *)(param_3 + (ulong)uVar9 * 4);
      if (uVar10 == param_4) {
        return 0;
      }
      psVar1 = (short *)(param_1 + (ulong)uVar9 * 2);
      uVar17 = (uint)(param_4 >> (bVar3 & 0x3f));
      sVar4 = 0;
      if (uVar10 != 0) break;
LAB_00100d46:
      uVar9 = uVar9 + 1;
      *psVar1 = sVar4;
      if (param_5 < uVar9) goto LAB_00100dcc;
    }
    if (uVar10 <= uVar17) {
      iVar16 = iVar16 + -1;
      sVar4 = sVar11;
      goto LAB_00100d46;
    }
    uVar12 = (ulong)uVar10 * SUB168((ZEXT416(0) << 0x40 | ZEXT816(0x4000000000000000)) / auVar2,0);
    uVar6 = uVar12 >> (bVar8 & 0x3f);
    if (uVar6 < 8) {
      uVar6 = (ulong)(ushort)((short)uVar6 +
                             (ushort)((ulong)*(uint *)(rtbTable_0 + (long)(int)uVar6 * 4) <<
                                      (bStack_38 & 0x3f) < uVar12 - (uVar6 << (bVar8 & 0x3f))));
    }
    sVar4 = (short)uVar6;
    if ((short)uVar7 < sVar4) {
      uVar7 = uVar6 & 0xffffffff;
      uStack_3c = uVar9;
    }
    uVar9 = uVar9 + 1;
    *psVar1 = sVar4;
    iVar16 = iVar16 - sVar4;
  } while (uVar9 <= param_5);
LAB_00100dcc:
  psVar1 = (short *)(param_1 + (ulong)uStack_3c * 2);
  sVar4 = *psVar1;
  if (-iVar16 < (int)(sVar4 >> 1)) {
    *psVar1 = sVar4 + (short)iVar16;
    goto LAB_00100dec;
  }
  uVar12 = (ulong)param_5;
  uVar6 = param_4 * 3 >> (bVar3 + 1 & 0x3f);
  iVar16 = 0;
  uVar7 = 0;
  do {
    uVar9 = *(uint *)(param_3 + uVar7 * 4);
    sVar4 = 0;
    if (uVar9 != 0) {
      if (uVar17 < uVar9) {
        sVar4 = -2;
        if (uVar9 <= (uint)uVar6) {
          iVar16 = iVar16 + 1;
          param_4 = param_4 - uVar9;
          sVar4 = 1;
        }
      }
      else {
        iVar16 = iVar16 + 1;
        param_4 = param_4 - uVar9;
        sVar4 = sVar11;
      }
    }
    *(short *)(param_1 + uVar7 * 2) = sVar4;
    bVar18 = uVar7 != uVar12;
    uVar7 = uVar7 + 1;
  } while (bVar18);
  uVar9 = iVar5 - iVar16;
  if (uVar9 == 0) goto LAB_00100dec;
  uVar7 = (ulong)uVar9;
  if ((uVar6 & 0xffffffff) < param_4 / uVar7) {
    uVar7 = param_4 * 3;
    uVar6 = 0;
    do {
      if ((*(short *)(param_1 + uVar6 * 2) == -2) &&
         (uVar10 = *(uint *)(param_3 + uVar6 * 4), uVar10 <= (uint)(uVar7 / (uVar9 * 2)))) {
        iVar16 = iVar16 + 1;
        param_4 = param_4 - uVar10;
        *(undefined2 *)(param_1 + uVar6 * 2) = 1;
      }
      bVar18 = uVar6 != uVar12;
      uVar6 = uVar6 + 1;
    } while (bVar18);
    uVar9 = iVar5 - iVar16;
    if (param_5 + 1 == iVar16) goto LAB_00100fea;
    uVar7 = (ulong)uVar9;
    if (param_4 == 0) {
      if (uVar9 == 0) goto LAB_00100dec;
      goto LAB_00100fad;
    }
  }
  else {
    if (iVar16 == param_5 + 1) {
LAB_00100fea:
      uVar6 = 0;
      uVar10 = 0;
      uVar7 = 0;
      do {
        uVar17 = *(uint *)(param_3 + uVar7 * 4);
        if (uVar10 < uVar17) {
          uVar6 = uVar7 & 0xffffffff;
          uVar10 = uVar17;
        }
        bVar18 = uVar7 != uVar12;
        uVar7 = uVar7 + 1;
      } while (bVar18);
      psVar1 = (short *)(param_1 + uVar6 * 2);
      *psVar1 = *psVar1 + (short)uVar9;
      goto LAB_00100dec;
    }
    if (param_4 == 0) {
LAB_00100fad:
      uVar7 = 0;
      do {
        while( true ) {
          psVar1 = (short *)(param_1 + uVar7 * 2);
          sVar11 = *psVar1;
          if (0 < sVar11) break;
          uVar7 = (ulong)((int)uVar7 + 1) % (ulong)(param_5 + 1);
        }
        *psVar1 = sVar11 + 1;
        uVar7 = (ulong)((int)uVar7 + 1) % (ulong)(param_5 + 1);
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      goto LAB_00100dec;
    }
  }
  uVar14 = (1L << (0x3d - bVar3 & 0x3f)) - 1;
  uVar6 = 0;
  uVar15 = uVar14;
  do {
    uVar13 = uVar15;
    if (*(short *)(param_1 + uVar6 * 2) == -2) {
      uVar13 = (ulong)*(uint *)(param_3 + uVar6 * 4) *
               (((uVar7 << (bVar8 & 0x3f)) + uVar14) / (param_4 & 0xffffffff)) + uVar15;
      iVar16 = (int)(uVar13 >> (bVar8 & 0x3f)) - (int)(uVar15 >> (bVar8 & 0x3f));
      if (iVar16 == 0) {
        return 0xffffffffffffffff;
      }
      *(short *)(param_1 + uVar6 * 2) = (short)iVar16;
    }
    bVar18 = uVar12 != uVar6;
    uVar6 = uVar6 + 1;
    uVar15 = uVar13;
  } while (bVar18);
LAB_00100dec:
  return (ulong)local_40;
}



undefined8 FSE_buildCTable_rle(undefined2 *param_1,byte param_2)

{
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = (ushort)param_2;
  *(undefined8 *)(param_1 + (ulong)param_2 * 4 + 4) = 0;
  return 0;
}



void FSE_compress_usingCTable(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  if (param_4 + 0xc + (param_4 >> 7) <= param_2) {
    FSE_compress_usingCTable_generic();
    return;
  }
  FSE_compress_usingCTable_generic();
  return;
}



long FSE_compressBound(ulong param_1)

{
  return (param_1 >> 7) + 0x20c + param_1;
}


