
void bi_windup(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  
  if (*(int *)(param_1 + 0x1734) < 9) {
    if (*(int *)(param_1 + 0x1734) < 1) goto LAB_0010003f;
    uVar2 = (undefined1)*(undefined2 *)(param_1 + 0x1730);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar1 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + lVar1) = (char)*(undefined2 *)(param_1 + 0x1730);
    uVar2 = *(undefined1 *)(param_1 + 0x1731);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar1 + 1;
  *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar1) = uVar2;
LAB_0010003f:
  *(undefined4 *)(param_1 + 0x1734) = 0;
  *(undefined2 *)(param_1 + 0x1730) = 0;
  return;
}



void pqdownheap(long param_1,long param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ushort uVar11;
  long lVar12;
  
  lVar12 = (long)param_3;
  param_3 = param_3 * 2;
  iVar4 = *(int *)(param_1 + 0x14b4);
  iVar5 = *(int *)(param_1 + 0xbc0 + lVar12 * 4);
  if (param_3 <= iVar4) {
    uVar1 = *(ushort *)(param_2 + (long)iVar5 * 4);
    do {
      iVar6 = *(int *)(param_1 + 0xbc0 + (long)param_3 * 4);
      uVar2 = *(ushort *)(param_2 + (long)iVar6 * 4);
      iVar9 = param_3;
      uVar11 = uVar2;
      iVar10 = iVar6;
      if (param_3 < iVar4) {
        iVar8 = param_3 + 1;
        iVar7 = *(int *)(param_1 + 0xbc0 + (long)iVar8 * 4);
        uVar3 = *(ushort *)(param_2 + (long)iVar7 * 4);
        iVar9 = iVar8;
        uVar11 = uVar3;
        iVar10 = iVar7;
        if (((uVar2 <= uVar3) && (iVar9 = param_3, uVar11 = uVar2, iVar10 = iVar6, uVar3 == uVar2))
           && (*(byte *)(param_1 + 0x14bc + (long)iVar7) <=
               *(byte *)(param_1 + 0x14bc + (long)iVar6))) {
          iVar9 = iVar8;
          iVar10 = iVar7;
        }
      }
      if ((uVar1 < uVar11) ||
         ((uVar1 == uVar11 &&
          (*(byte *)(param_1 + 0x14bc + (long)iVar5) <= *(byte *)(param_1 + 0x14bc + (long)iVar10)))
         )) break;
      param_3 = iVar9 * 2;
      *(int *)(param_1 + 0xbc0 + lVar12 * 4) = iVar10;
      lVar12 = (long)iVar9;
    } while (param_3 <= iVar4);
  }
  *(int *)(param_1 + 0xbc0 + lVar12 * 4) = iVar5;
  return;
}



void build_tree(long param_1,undefined8 *param_2)

{
  ushort *puVar1;
  short *psVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  short sVar16;
  long lVar17;
  undefined2 *puVar18;
  int iVar19;
  uint uVar20;
  long lVar21;
  undefined2 *puVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  ulong uVar27;
  long lVar28;
  long in_FS_OFFSET;
  undefined8 uVar29;
  undefined4 extraout_XMM1_Da;
  ushort auStack_68 [20];
  long local_40;
  
  plVar11 = (long *)param_2[2];
  puVar18 = (undefined2 *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar8 = *(int *)((long)plVar11 + 0x14);
  lVar17 = *plVar11;
  *(undefined8 *)(param_1 + 0x14b4) = _LC0;
  if (iVar8 < 1) {
    iVar23 = 0;
    uVar27 = 0xffffffff;
  }
  else {
    uVar13 = 0;
    iVar23 = 0;
    uVar27 = 0xffffffff;
    do {
      while (puVar18[uVar13 * 2] == 0) {
        puVar18[uVar13 * 2 + 1] = 0;
        uVar13 = uVar13 + 1;
        if ((long)iVar8 == uVar13) goto LAB_00100201;
      }
      iVar23 = iVar23 + 1;
      uVar27 = uVar13 & 0xffffffff;
      *(int *)(param_1 + 0x14b4) = iVar23;
      *(int *)(param_1 + 0xbc0 + (long)iVar23 * 4) = (int)uVar13;
      *(undefined1 *)(param_1 + 0x14bc + uVar13) = 0;
      uVar13 = uVar13 + 1;
    } while ((long)iVar8 != uVar13);
LAB_00100201:
    iVar25 = (int)uVar27;
    if (1 < iVar23) {
      iVar23 = iVar23 >> 1;
      goto LAB_001002a6;
    }
  }
  lVar14 = (long)(iVar23 + 1);
  lVar28 = *(long *)(param_1 + 0x1718);
  do {
    if ((int)uVar27 < 2) {
      uVar26 = (int)uVar27 + 1;
      uVar27 = (ulong)uVar26;
      lVar15 = (long)(int)uVar26;
      lVar21 = (long)(int)uVar26 * 4;
      puVar22 = puVar18 + (long)(int)uVar26 * 2;
    }
    else {
      lVar21 = 0;
      lVar15 = 0;
      puVar22 = puVar18;
    }
    iVar25 = (int)uVar27;
    *(int *)(param_1 + 0x14b4) = (int)lVar14;
    *(int *)(param_1 + 0xbc0 + lVar14 * 4) = (int)lVar15;
    *puVar22 = 1;
    *(undefined1 *)(param_1 + 0x14bc + lVar15) = 0;
    *(long *)(param_1 + 0x1718) = (iVar23 + lVar28) - lVar14;
    if (lVar17 != 0) {
      *(long *)(param_1 + 0x1720) =
           *(long *)(param_1 + 0x1720) - (ulong)*(ushort *)(lVar17 + 2 + lVar21);
    }
    lVar14 = lVar14 + 1;
  } while ((long)iVar23 + 2 + (ulong)(1 - iVar23) != lVar14);
  iVar23 = 1;
LAB_001002a6:
  lVar28 = (long)iVar8;
  *(int *)(param_2 + 1) = iVar25;
  do {
    uVar29 = pqdownheap(param_1,puVar18,iVar23);
    iVar23 = iVar23 + -1;
  } while (iVar23 != 0);
  iVar23 = *(int *)(param_1 + 0x14b4) + -1;
  lVar14 = (long)iVar23;
  do {
    *(int *)(param_1 + 0x14b4) = (int)lVar14;
    iVar24 = *(int *)(param_1 + 0xbc4);
    *(undefined4 *)(param_1 + 0xbc4) = *(undefined4 *)(param_1 + 0xbc4 + lVar14 * 4);
    pqdownheap(uVar29,iVar24,param_1,puVar18,1);
    iVar9 = *(int *)(param_1 + 0xbc4);
    iVar19 = *(int *)(param_1 + 0x14b8);
    iVar10 = iVar19 + -2;
    sVar5 = puVar18[(long)iVar9 * 2];
    lVar15 = (long)iVar10;
    sVar16 = puVar18[(long)iVar24 * 2];
    *(int *)(param_1 + 0x14b8) = iVar10;
    *(ulong *)(param_1 + 0xbc0 + lVar15 * 4) = CONCAT44(extraout_XMM1_Da,iVar9);
    puVar18[lVar28 * 2] = sVar5 + sVar16;
    bVar3 = *(byte *)(param_1 + 0x14bc + (long)iVar24);
    bVar4 = *(byte *)(param_1 + 0x14bc + (long)iVar9);
    if (bVar4 <= bVar3) {
      bVar4 = bVar3;
    }
    *(byte *)(param_1 + 0x14bc + lVar28) = bVar4 + 1;
    sVar16 = ((short)iVar23 + (short)iVar8) - (short)lVar14;
    lVar14 = lVar14 + -1;
    (puVar18 + (long)iVar9 * 2)[1] = sVar16;
    (puVar18 + (long)iVar24 * 2)[1] = sVar16;
    *(int *)(param_1 + 0xbc4) = (int)lVar28;
    lVar28 = lVar28 + 1;
    uVar29 = pqdownheap(param_1,puVar18,1);
  } while (1 < (int)lVar14 + 1);
  iVar19 = iVar19 + -3;
  lVar28 = plVar11[1];
  iVar8 = *(int *)(param_2 + 1);
  *(int *)(param_1 + 0x14b8) = iVar19;
  iVar23 = *(int *)(param_1 + 0xbc4);
  *(int *)(param_1 + 0xbc0 + (long)iVar19 * 4) = iVar23;
  lVar14 = plVar11[2];
  uVar26 = *(uint *)(plVar11 + 3);
  *(undefined1 (*) [16])(param_1 + 0xba0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0xbb0) = (undefined1  [16])0x0;
  puVar18[(long)iVar23 * 2 + 1] = 0;
  if (iVar10 < 0x23d) {
    iVar23 = 0;
    do {
      iVar10 = *(int *)(param_1 + 0xbc0 + lVar15 * 4);
      puVar1 = puVar18 + (long)iVar10 * 2;
      uVar12 = (ushort)puVar18[(ulong)puVar1[1] * 2 + 1] + 1;
      if ((int)uVar26 < (int)((ushort)puVar18[(ulong)puVar1[1] * 2 + 1] + 1)) {
        iVar23 = iVar23 + 1;
        uVar12 = uVar26;
      }
      puVar1[1] = (ushort)uVar12;
      if (iVar10 <= iVar8) {
        psVar2 = (short *)(param_1 + 0xba0 + (long)(int)uVar12 * 2);
        *psVar2 = *psVar2 + 1;
        iVar24 = 0;
        if ((int)lVar14 <= iVar10) {
          iVar24 = *(int *)(lVar28 + (long)(iVar10 - (int)lVar14) * 4);
          uVar12 = uVar12 + iVar24;
        }
        uVar6 = *puVar1;
        *(long *)(param_1 + 0x1718) = *(long *)(param_1 + 0x1718) + (ulong)uVar12 * (ulong)uVar6;
        if (lVar17 != 0) {
          *(long *)(param_1 + 0x1720) =
               *(long *)(param_1 + 0x1720) +
               (ulong)((uint)*(ushort *)(lVar17 + 2 + (long)iVar10 * 4) + iVar24) * (ulong)uVar6;
        }
      }
      lVar15 = lVar15 + 1;
    } while ((int)lVar15 < 0x23d);
    if (iVar23 != 0) {
      lVar28 = (long)(int)uVar26;
      lVar17 = param_1 + lVar28 * 2;
      do {
        sVar16 = *(short *)(lVar17 + 0xb9e);
        uVar12 = uVar26;
        uVar20 = uVar26 - 1;
        lVar14 = lVar17;
        while (sVar16 == 0) {
          psVar2 = (short *)(lVar14 + 0xb9c);
          lVar14 = lVar14 + -2;
          uVar12 = uVar20;
          uVar20 = uVar20 - 1;
          sVar16 = *psVar2;
        }
        iVar23 = iVar23 + -2;
        *(short *)(param_1 + 0xba0 + (long)(int)uVar20 * 2) = sVar16 + -1;
        psVar2 = (short *)(param_1 + 0xba0 + (long)(int)uVar12 * 2);
        *psVar2 = *psVar2 + 2;
        *(short *)(lVar17 + 0xba0) = *(short *)(lVar17 + 0xba0) + -1;
      } while (0 < iVar23);
      if (uVar26 != 0) {
        lVar17 = 0x23d;
        uVar12 = uVar26 - 1;
        do {
          uVar6 = *(ushort *)(param_1 + 0xba0 + lVar28 * 2);
          uVar20 = (uint)uVar6;
          if (uVar6 != 0) {
            lVar17 = (long)((int)lVar17 + -1);
            do {
              iVar23 = *(int *)(param_1 + 0xbc0 + lVar17 * 4);
              if (iVar23 <= iVar8) {
                puVar1 = puVar18 + (long)iVar23 * 2;
                if (uVar26 != puVar1[1]) {
                  *(long *)(param_1 + 0x1718) =
                       *(long *)(param_1 + 0x1718) + (ulong)*puVar1 * (lVar28 - (ulong)puVar1[1]);
                  puVar1[1] = (ushort)uVar26;
                }
                uVar20 = uVar20 - 1;
                if (uVar20 == 0) break;
              }
              lVar17 = lVar17 + -1;
            } while( true );
          }
          lVar28 = lVar28 + -1;
          if (uVar12 == 0) break;
          uVar26 = uVar12;
          uVar12 = uVar12 - 1;
        } while( true );
      }
    }
  }
  lVar17 = 0;
  sVar16 = 0;
  do {
    sVar16 = (sVar16 + *(short *)(param_1 + 0xba0 + lVar17)) * 2;
    *(short *)((long)auStack_68 + lVar17 + 2) = sVar16;
    lVar17 = lVar17 + 2;
  } while (lVar17 != 0x1e);
  if (-1 < iVar25) {
    puVar22 = puVar18 + (long)iVar25 * 2 + 2;
    do {
      while( true ) {
        uVar6 = puVar18[1];
        uVar26 = (uint)uVar6;
        if (uVar6 == 0) break;
        uVar7 = auStack_68[(int)(uint)uVar6];
        auStack_68[(int)(uint)uVar6] = uVar7 + 1;
        uVar12 = 0;
        uVar27 = (ulong)uVar7;
        do {
          uVar20 = (uint)uVar27 & 1 | uVar12;
          uVar12 = uVar20 * 2;
          uVar26 = uVar26 - 1;
          uVar27 = uVar27 >> 1;
        } while (uVar26 != 0);
        *puVar18 = (short)uVar20;
        puVar18 = puVar18 + 2;
        if (puVar18 == puVar22) goto LAB_001006a6;
      }
      puVar18 = puVar18 + 2;
    } while (puVar18 != puVar22);
  }
LAB_001006a6:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void scan_tree(long param_1,long param_2,int param_3)

{
  ushort *puVar1;
  short *psVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  uVar3 = *(ushort *)(param_2 + 2);
  *(undefined2 *)(param_2 + 6 + (long)param_3 * 4) = 0xffff;
  iVar9 = 4 - (uint)(uVar3 == 0);
  iVar8 = (-(uint)(uVar3 == 0) & 0x83) + 7;
  if (-1 < param_3) {
    puVar1 = (ushort *)(param_2 + 10 + (long)param_3 * 4);
    puVar7 = (ushort *)(param_2 + 6);
    iVar4 = 0;
    uVar5 = (uint)uVar3;
    uVar10 = 0xffffffff;
    do {
      while( true ) {
        iVar4 = iVar4 + 1;
        uVar3 = *puVar7;
        uVar6 = (uint)uVar3;
        if (iVar8 <= iVar4) break;
        if (uVar6 != uVar5) {
          if (iVar9 <= iVar4) goto LAB_001007d0;
          psVar2 = (short *)(param_1 + 0xabc + (long)(int)uVar5 * 4);
          *psVar2 = *psVar2 + (short)iVar4;
          iVar4 = 0;
          iVar9 = 4 - (uint)(uVar6 == 0);
          iVar8 = (-(uint)(uVar6 == 0) & 0x83) + 7;
          uVar10 = uVar5;
        }
LAB_00100782:
        puVar7 = puVar7 + 2;
        uVar5 = uVar6;
        if (puVar1 == puVar7) {
          return;
        }
      }
      if (iVar4 < iVar9) {
        psVar2 = (short *)(param_1 + 0xabc + (long)(int)uVar5 * 4);
        *psVar2 = *psVar2 + (short)iVar4;
      }
      else {
LAB_001007d0:
        if (uVar5 == 0) {
          if (iVar4 < 0xb) {
            *(short *)(param_1 + 0xb00) = *(short *)(param_1 + 0xb00) + 1;
          }
          else {
            *(short *)(param_1 + 0xb04) = *(short *)(param_1 + 0xb04) + 1;
          }
          if (uVar3 == 0) {
            iVar4 = 0;
            iVar9 = 3;
            iVar8 = 0x8a;
            uVar10 = 0;
          }
          else {
            iVar4 = 0;
            iVar9 = 4;
            iVar8 = 7;
            uVar10 = 0;
          }
          goto LAB_00100782;
        }
        if (uVar10 != uVar5) {
          psVar2 = (short *)(param_1 + 0xabc + (long)(int)uVar5 * 4);
          *psVar2 = *psVar2 + 1;
        }
        *(short *)(param_1 + 0xafc) = *(short *)(param_1 + 0xafc) + 1;
      }
      if (uVar3 == 0) {
        iVar4 = 0;
        iVar9 = 3;
        iVar8 = 0x8a;
        uVar10 = uVar5;
        goto LAB_00100782;
      }
      if (uVar6 != uVar5) {
        iVar9 = 4;
        iVar8 = 7;
        iVar4 = 0;
        uVar10 = uVar5;
        goto LAB_00100782;
      }
      puVar7 = puVar7 + 2;
      iVar9 = 3;
      iVar4 = 0;
      iVar8 = 6;
      uVar5 = uVar6;
      uVar10 = uVar6;
    } while (puVar1 != puVar7);
  }
  return;
}



void send_tree(long param_1,long param_2,int param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ushort *puVar15;
  
  uVar2 = *(ushort *)(param_2 + 2);
  iVar13 = 4 - (uint)(uVar2 == 0);
  iVar6 = (-(uint)(uVar2 == 0) & 0x83) + 7;
  if (-1 < param_3) {
    puVar15 = (ushort *)(param_2 + 6);
    puVar1 = (ushort *)(param_2 + 10 + (long)param_3 * 4);
    uVar14 = 0xffffffff;
    iVar10 = 0;
    uVar11 = (uint)uVar2;
    do {
      while( true ) {
        uVar2 = *puVar15;
        uVar7 = (uint)uVar2;
        iVar12 = iVar10 + 1;
        if ((uVar7 != uVar11) || (iVar6 <= iVar12)) break;
LAB_00100a70:
        puVar15 = puVar15 + 2;
        iVar10 = iVar12;
        uVar11 = uVar7;
        if (puVar1 == puVar15) {
          return;
        }
      }
      iVar6 = *(int *)(param_1 + 0x1734);
      uVar9 = (uint)*(ushort *)(param_1 + 0x1730);
      if (iVar12 < iVar13) {
        do {
          uVar14 = (uint)*(ushort *)(param_1 + 0xe + ((long)(int)uVar11 + 0x2ac) * 4);
          uVar2 = *(ushort *)(param_1 + 0xc + ((long)(int)uVar11 + 0x2ac) * 4);
          uVar8 = uVar2 << ((byte)iVar6 & 0x1f) | *(ushort *)(param_1 + 0x1730);
          if ((int)(0x10 - uVar14) < iVar6) {
            lVar4 = *(long *)(param_1 + 0x28);
            *(ushort *)(param_1 + 0x1730) = uVar8;
            *(long *)(param_1 + 0x28) = lVar4 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + lVar4) = (char)uVar8;
            lVar4 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar4 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar4) = *(undefined1 *)(param_1 + 0x1731);
            iVar6 = *(int *)(param_1 + 0x1734) + -0x10;
            uVar8 = (ushort)((int)(uint)uVar2 >> (0x10U - (char)*(int *)(param_1 + 0x1734) & 0x1f));
          }
          iVar6 = iVar6 + uVar14;
          *(ushort *)(param_1 + 0x1730) = uVar8;
          *(int *)(param_1 + 0x1734) = iVar6;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
LAB_00100a47:
        uVar14 = uVar11;
        if (uVar7 == 0) {
          iVar12 = 0;
          iVar13 = 3;
          iVar6 = 0x8a;
        }
        else if (uVar7 == uVar11) {
          iVar13 = 3;
          iVar6 = 6;
          iVar12 = 0;
          uVar14 = uVar7;
        }
        else {
          iVar13 = 4;
          iVar6 = 7;
          iVar12 = 0;
        }
        goto LAB_00100a70;
      }
      bVar5 = (byte)iVar6;
      if (uVar11 != 0) {
        if (uVar14 != uVar11) {
          uVar2 = *(ushort *)(param_1 + 0xabe + (long)(int)uVar11 * 4);
          uVar14 = (uint)*(ushort *)(param_1 + 0xabc + (long)(int)uVar11 * 4);
          uVar9 = uVar9 | uVar14 << (bVar5 & 0x1f);
          iVar12 = iVar10;
          if ((int)(0x10 - (uint)uVar2) < iVar6) {
            lVar4 = *(long *)(param_1 + 0x28);
            *(short *)(param_1 + 0x1730) = (short)uVar9;
            *(long *)(param_1 + 0x28) = lVar4 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + lVar4) = (char)uVar9;
            lVar4 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar4 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar4) = *(undefined1 *)(param_1 + 0x1731);
            iVar13 = *(int *)(param_1 + 0x1734);
            iVar6 = iVar13 + -0x10 + (uint)uVar2;
            *(int *)(param_1 + 0x1734) = iVar6;
            uVar9 = (int)uVar14 >> (0x10U - (char)iVar13 & 0x1f);
          }
          else {
            iVar6 = iVar6 + (uint)uVar2;
            *(int *)(param_1 + 0x1734) = iVar6;
          }
        }
        uVar2 = *(ushort *)(param_1 + 0xafc);
        uVar8 = *(ushort *)(param_1 + 0xafe);
        iVar13 = (uint)uVar8 + iVar6;
        uVar9 = uVar9 | (uint)uVar2 << ((byte)iVar6 & 0x1f);
        if ((int)(0x10 - (uint)uVar8) < iVar6) {
          lVar4 = *(long *)(param_1 + 0x28);
          *(short *)(param_1 + 0x1730) = (short)uVar9;
          *(long *)(param_1 + 0x28) = lVar4 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + lVar4) = (char)uVar9;
          lVar4 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar4 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar4) = *(undefined1 *)(param_1 + 0x1731);
          uVar9 = (int)(uint)uVar2 >> (0x10U - (char)*(int *)(param_1 + 0x1734) & 0x1f);
          iVar13 = *(int *)(param_1 + 0x1734) + -0x10 + (uint)uVar8;
        }
        *(int *)(param_1 + 0x1734) = iVar13;
        uVar14 = iVar12 - 3U & 0xffff;
        if (iVar13 < 0xf) {
          *(int *)(param_1 + 0x1734) = iVar13 + 2;
          *(ushort *)(param_1 + 0x1730) = (ushort)uVar9 | (ushort)(uVar14 << ((byte)iVar13 & 0x1f));
        }
        else {
          uVar9 = uVar14 << ((byte)iVar13 & 0x1f) | uVar9;
          lVar4 = *(long *)(param_1 + 0x28);
          *(short *)(param_1 + 0x1730) = (short)uVar9;
          *(long *)(param_1 + 0x28) = lVar4 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + lVar4) = (char)uVar9;
          lVar4 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar4 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar4) = *(undefined1 *)(param_1 + 0x1731);
          iVar6 = *(int *)(param_1 + 0x1734);
          *(int *)(param_1 + 0x1734) = iVar6 + -0xe;
          *(short *)(param_1 + 0x1730) = (short)((int)uVar14 >> (0x10U - (char)iVar6 & 0x1f));
        }
        goto LAB_00100a47;
      }
      if (iVar12 < 0xb) {
        uVar8 = *(ushort *)(param_1 + 0xb02);
        uVar14 = (uint)*(ushort *)(param_1 + 0xb00);
        if ((int)(0x10 - (uint)uVar8) < iVar6) {
          uVar9 = uVar14 << (bVar5 & 0x1f) | uVar9;
          lVar4 = *(long *)(param_1 + 0x28);
          *(short *)(param_1 + 0x1730) = (short)uVar9;
          *(long *)(param_1 + 0x28) = lVar4 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + lVar4) = (char)uVar9;
          lVar4 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar4 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar4) = *(undefined1 *)(param_1 + 0x1731);
          uVar14 = (int)uVar14 >> (0x10U - (char)*(int *)(param_1 + 0x1734) & 0x1f);
          iVar6 = *(int *)(param_1 + 0x1734) + -0x10 + (uint)uVar8;
        }
        else {
          iVar6 = iVar6 + (uint)uVar8;
          uVar14 = uVar14 << (bVar5 & 0x1f) | uVar9;
        }
        *(int *)(param_1 + 0x1734) = iVar6;
        if (0xd < iVar6) {
          uVar11 = iVar10 - 2U & 0xffff;
          lVar4 = *(long *)(param_1 + 0x28);
          uVar14 = uVar11 << ((byte)iVar6 & 0x1f) | uVar14;
          *(short *)(param_1 + 0x1730) = (short)uVar14;
          *(long *)(param_1 + 0x28) = lVar4 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + lVar4) = (char)uVar14;
          lVar4 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar4 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar4) = *(undefined1 *)(param_1 + 0x1731);
          iVar6 = *(int *)(param_1 + 0x1734);
          *(int *)(param_1 + 0x1734) = iVar6 + -0xd;
          *(short *)(param_1 + 0x1730) = (short)((int)uVar11 >> (0x10U - (char)iVar6 & 0x1f));
          goto joined_r0x00100e20;
        }
        *(int *)(param_1 + 0x1734) = iVar6 + 3;
        *(ushort *)(param_1 + 0x1730) =
             (ushort)uVar14 | (ushort)((iVar10 - 2U & 0xffff) << ((byte)iVar6 & 0x1f));
        if (uVar7 != 0) goto LAB_00100cca;
      }
      else {
        uVar8 = *(ushort *)(param_1 + 0xb04);
        uVar3 = *(ushort *)(param_1 + 0xb06);
        uVar9 = uVar9 | (uint)uVar8 << (bVar5 & 0x1f);
        if ((int)(0x10 - (uint)uVar3) < iVar6) {
          lVar4 = *(long *)(param_1 + 0x28);
          *(short *)(param_1 + 0x1730) = (short)uVar9;
          *(long *)(param_1 + 0x28) = lVar4 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + lVar4) = (char)uVar9;
          lVar4 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar4 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar4) = *(undefined1 *)(param_1 + 0x1731);
          iVar6 = *(int *)(param_1 + 0x1734) + -0x10;
          uVar9 = (int)(uint)uVar8 >> (0x10U - (char)*(int *)(param_1 + 0x1734) & 0x1f);
        }
        iVar6 = (uint)uVar3 + iVar6;
        *(int *)(param_1 + 0x1734) = iVar6;
        if (iVar6 < 10) {
          *(ushort *)(param_1 + 0x1730) =
               (ushort)uVar9 | (ushort)((iVar10 - 10U & 0xffff) << ((byte)iVar6 & 0x1f));
          *(int *)(param_1 + 0x1734) = iVar6 + 7;
        }
        else {
          uVar14 = iVar10 - 10U & 0xffff;
          lVar4 = *(long *)(param_1 + 0x28);
          uVar9 = uVar14 << ((byte)iVar6 & 0x1f) | uVar9;
          *(short *)(param_1 + 0x1730) = (short)uVar9;
          *(long *)(param_1 + 0x28) = lVar4 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + lVar4) = (char)uVar9;
          lVar4 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar4 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar4) = *(undefined1 *)(param_1 + 0x1731);
          iVar6 = *(int *)(param_1 + 0x1734);
          *(int *)(param_1 + 0x1734) = iVar6 + -9;
          *(short *)(param_1 + 0x1730) = (short)((int)uVar14 >> (0x10U - (char)iVar6 & 0x1f));
        }
joined_r0x00100e20:
        if (uVar2 != 0) {
LAB_00100cca:
          iVar12 = 0;
          iVar13 = 4;
          iVar6 = 7;
          uVar14 = 0;
          goto LAB_00100a70;
        }
      }
      uVar14 = 0;
      iVar6 = 0x8a;
      iVar13 = 3;
      puVar15 = puVar15 + 2;
      iVar10 = 0;
      uVar11 = uVar7;
    } while (puVar1 != puVar15);
  }
  return;
}



void compress_block(long param_1,long param_2,long param_3)

{
  byte *pbVar1;
  ushort *puVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined2 uVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  
  iVar13 = *(int *)(param_1 + 0x1734);
  uVar17 = (uint)*(ushort *)(param_1 + 0x1730);
  if (*(int *)(param_1 + 0x170c) != 0) {
    uVar15 = 0;
    do {
      while( true ) {
        lVar7 = *(long *)(param_1 + 0x1700);
        iVar9 = (int)uVar15;
        pbVar1 = (byte *)(lVar7 + uVar15);
        bVar3 = *(byte *)(lVar7 + (ulong)(iVar9 + 2));
        uVar14 = iVar9 + 3;
        uVar15 = (ulong)uVar14;
        iVar9 = (uint)*(byte *)(lVar7 + (ulong)(iVar9 + 1)) * 0x100 + (uint)*pbVar1;
        if (iVar9 != 0) break;
        puVar2 = (ushort *)(param_2 + (ulong)bVar3 * 4);
        uVar5 = puVar2[1];
        uVar10 = (uint)*puVar2;
        uVar17 = uVar17 | uVar10 << ((byte)iVar13 & 0x1f);
        *(short *)(param_1 + 0x1730) = (short)uVar17;
        if ((int)(0x10 - (uint)uVar5) < iVar13) {
          lVar7 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar7 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + lVar7) = (char)uVar17;
          lVar7 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar7 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar7) = *(undefined1 *)(param_1 + 0x1731);
          iVar13 = *(int *)(param_1 + 0x1734) + -0x10 + (uint)uVar5;
          uVar17 = (int)uVar10 >> (0x10U - (char)*(int *)(param_1 + 0x1734) & 0x1f);
          *(int *)(param_1 + 0x1734) = iVar13;
          *(short *)(param_1 + 0x1730) = (short)uVar17;
        }
        else {
          iVar13 = iVar13 + (uint)uVar5;
          *(int *)(param_1 + 0x1734) = iVar13;
        }
LAB_00100f54:
        if (*(uint *)(param_1 + 0x170c) <= uVar14) goto LAB_001011d8;
      }
      bVar4 = _length_code[bVar3];
      puVar2 = (ushort *)(param_2 + (ulong)(bVar4 + 0x101) * 4);
      uVar10 = (uint)puVar2[1];
      uVar11 = (uint)*puVar2;
      uVar17 = uVar11 << ((byte)iVar13 & 0x1f) | uVar17;
      if ((int)(0x10 - uVar10) < iVar13) {
        lVar7 = *(long *)(param_1 + 0x28);
        *(short *)(param_1 + 0x1730) = (short)uVar17;
        *(long *)(param_1 + 0x28) = lVar7 + 1;
        *(char *)(*(long *)(param_1 + 0x10) + lVar7) = (char)uVar17;
        lVar7 = *(long *)(param_1 + 0x28);
        *(long *)(param_1 + 0x28) = lVar7 + 1;
        *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar7) = *(undefined1 *)(param_1 + 0x1731);
        uVar17 = (int)uVar11 >> (0x10U - (char)*(int *)(param_1 + 0x1734) & 0x1f);
        iVar13 = *(int *)(param_1 + 0x1734) + -0x10;
      }
      iVar8 = uVar10 + iVar13;
      *(int *)(param_1 + 0x1734) = iVar8;
      iVar13 = *(int *)(extra_lbits + (ulong)bVar4 * 4);
      if (iVar13 != 0) {
        uVar10 = (uint)bVar3 - *(int *)(base_length + (ulong)bVar4 * 4) & 0xffff;
        uVar17 = uVar17 | uVar10 << ((byte)iVar8 & 0x1f);
        if (0x10 - iVar13 < iVar8) {
          lVar7 = *(long *)(param_1 + 0x28);
          *(short *)(param_1 + 0x1730) = (short)uVar17;
          *(long *)(param_1 + 0x28) = lVar7 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + lVar7) = (char)uVar17;
          lVar7 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar7 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar7) = *(undefined1 *)(param_1 + 0x1731);
          uVar17 = (int)uVar10 >> (0x10U - (char)*(int *)(param_1 + 0x1734) & 0x1f);
          iVar8 = *(int *)(param_1 + 0x1734) + -0x10 + iVar13;
          *(int *)(param_1 + 0x1734) = iVar8;
        }
        else {
          iVar8 = iVar8 + iVar13;
          *(int *)(param_1 + 0x1734) = iVar8;
        }
      }
      uVar10 = iVar9 - 1;
      if (uVar10 < 0x100) {
        bVar3 = _dist_code[uVar10];
      }
      else {
        bVar3 = _dist_code[(uVar10 >> 7) + 0x100];
      }
      uVar16 = (ulong)bVar3;
      puVar2 = (ushort *)(param_3 + uVar16 * 4);
      uVar5 = puVar2[1];
      uVar11 = (uint)*puVar2;
      iVar13 = (uint)uVar5 + iVar8;
      uVar17 = uVar11 << ((byte)iVar8 & 0x1f) | uVar17;
      if ((int)(0x10 - (uint)uVar5) < iVar8) {
        lVar7 = *(long *)(param_1 + 0x28);
        *(short *)(param_1 + 0x1730) = (short)uVar17;
        *(long *)(param_1 + 0x28) = lVar7 + 1;
        *(char *)(*(long *)(param_1 + 0x10) + lVar7) = (char)uVar17;
        lVar7 = *(long *)(param_1 + 0x28);
        *(long *)(param_1 + 0x28) = lVar7 + 1;
        *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar7) = *(undefined1 *)(param_1 + 0x1731);
        iVar13 = *(int *)(param_1 + 0x1734) + -0x10 + (uint)uVar5;
        uVar17 = (int)uVar11 >> (0x10U - (char)*(int *)(param_1 + 0x1734) & 0x1f);
      }
      *(short *)(param_1 + 0x1730) = (short)uVar17;
      iVar9 = *(int *)(extra_dbits + uVar16 * 4);
      *(int *)(param_1 + 0x1734) = iVar13;
      if (iVar9 == 0) goto LAB_00100f54;
      uVar10 = uVar10 - *(int *)(base_dist + uVar16 * 4) & 0xffff;
      uVar17 = uVar17 | uVar10 << ((byte)iVar13 & 0x1f);
      *(short *)(param_1 + 0x1730) = (short)uVar17;
      if (iVar13 <= 0x10 - iVar9) {
        iVar13 = iVar13 + iVar9;
        *(int *)(param_1 + 0x1734) = iVar13;
        goto LAB_00100f54;
      }
      lVar7 = *(long *)(param_1 + 0x28);
      *(long *)(param_1 + 0x28) = lVar7 + 1;
      *(char *)(*(long *)(param_1 + 0x10) + lVar7) = (char)uVar17;
      lVar7 = *(long *)(param_1 + 0x28);
      *(long *)(param_1 + 0x28) = lVar7 + 1;
      *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar7) = *(undefined1 *)(param_1 + 0x1731);
      iVar13 = *(int *)(param_1 + 0x1734) + -0x10 + iVar9;
      uVar17 = (int)uVar10 >> (0x10U - (char)*(int *)(param_1 + 0x1734) & 0x1f);
      *(int *)(param_1 + 0x1734) = iVar13;
      *(short *)(param_1 + 0x1730) = (short)uVar17;
    } while (uVar14 < *(uint *)(param_1 + 0x170c));
  }
LAB_001011d8:
  uVar5 = *(ushort *)(param_2 + 0x400);
  uVar6 = *(ushort *)(param_2 + 0x402);
  uVar17 = uVar17 | (uint)uVar5 << ((byte)iVar13 & 0x1f);
  uVar12 = (undefined2)uVar17;
  if ((int)(0x10 - (uint)uVar6) < iVar13) {
    lVar7 = *(long *)(param_1 + 0x28);
    *(undefined2 *)(param_1 + 0x1730) = uVar12;
    *(long *)(param_1 + 0x28) = lVar7 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + lVar7) = (char)uVar17;
    lVar7 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar7 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar7) = *(undefined1 *)(param_1 + 0x1731);
    iVar13 = *(int *)(param_1 + 0x1734) + -0x10;
    uVar12 = (undefined2)((int)(uint)uVar5 >> (0x10U - (char)*(int *)(param_1 + 0x1734) & 0x1f));
  }
  *(undefined2 *)(param_1 + 0x1730) = uVar12;
  *(uint *)(param_1 + 0x1734) = (uint)uVar6 + iVar13;
  return;
}


