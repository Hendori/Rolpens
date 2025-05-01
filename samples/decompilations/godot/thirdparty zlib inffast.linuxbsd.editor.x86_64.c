
void inflate_fast(undefined8 *param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  byte bVar13;
  ulong uVar14;
  byte bVar15;
  undefined4 uVar16;
  ulong uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  uint uVar20;
  uint uVar21;
  byte *pbVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  byte *pbVar29;
  int iVar30;
  ulong uVar31;
  
  pbVar29 = (byte *)*param_1;
  lVar8 = param_1[7];
  puVar9 = (undefined1 *)param_1[3];
  pbVar2 = pbVar29 + (*(int *)(param_1 + 1) - 5);
  iVar3 = *(int *)(param_1 + 4);
  uVar16 = *(undefined4 *)(lVar8 + 0x7c);
  lVar10 = *(long *)(lVar8 + 0x68);
  lVar11 = *(long *)(lVar8 + 0x70);
  iVar4 = *(int *)(lVar8 + 0x3c);
  uVar20 = *(uint *)(lVar8 + 0x58);
  uVar5 = *(uint *)(lVar8 + 0x40);
  uVar6 = *(uint *)(lVar8 + 0x44);
  puVar12 = *(undefined1 **)(lVar8 + 0x48);
  uVar14 = *(ulong *)(lVar8 + 0x50);
  uVar7 = *(undefined4 *)(lVar8 + 0x78);
  puVar26 = puVar9;
LAB_001000a4:
  if (uVar20 < 0xf) {
    pbVar22 = pbVar29 + 1;
    bVar13 = (byte)uVar20;
    bVar15 = *pbVar29;
    pbVar29 = pbVar29 + 2;
    uVar20 = uVar20 + 0x10;
    uVar14 = uVar14 + ((ulong)*pbVar22 << (bVar13 + 8 & 0x3f)) + ((ulong)bVar15 << (bVar13 & 0x3f));
  }
  uVar17 = (1 << ((byte)uVar7 & 0x1f)) - 1 & uVar14;
  while( true ) {
    pbVar22 = (byte *)(lVar10 + uVar17 * 4);
    uVar14 = uVar14 >> (pbVar22[1] & 0x3f);
    uVar20 = uVar20 - pbVar22[1];
    bVar15 = *pbVar22;
    if (bVar15 == 0) break;
    puVar27 = puVar26;
    if ((bVar15 & 0x10) != 0) {
      uVar21 = (uint)*(ushort *)(pbVar22 + 2);
      uVar23 = bVar15 & 0xf;
      if ((bVar15 & 0xf) != 0) {
        uVar21 = uVar20;
        if (uVar20 < uVar23) {
          bVar15 = *pbVar29;
          pbVar29 = pbVar29 + 1;
          uVar21 = uVar20 + 8;
          uVar14 = uVar14 + ((ulong)bVar15 << ((byte)uVar20 & 0x3f));
        }
        uVar20 = uVar21 - uVar23;
        uVar21 = (uint)uVar14;
        uVar14 = uVar14 >> (sbyte)uVar23;
        uVar21 = (uint)*(ushort *)(pbVar22 + 2) + (~(-1 << (sbyte)uVar23) & uVar21);
      }
      if (uVar20 < 0xf) {
        pbVar22 = pbVar29 + 1;
        bVar13 = (byte)uVar20;
        bVar15 = *pbVar29;
        pbVar29 = pbVar29 + 2;
        uVar20 = uVar20 + 0x10;
        uVar14 = uVar14 + ((ulong)*pbVar22 << (bVar13 + 8 & 0x3f)) +
                          ((ulong)bVar15 << (bVar13 & 0x3f));
      }
      pbVar22 = (byte *)(lVar11 + (ulong)((1 << ((byte)uVar16 & 0x1f)) - 1U & (uint)uVar14) * 4);
      uVar14 = uVar14 >> (pbVar22[1] & 0x3f);
      uVar20 = uVar20 - pbVar22[1];
      bVar15 = *pbVar22;
      uVar23 = (uint)bVar15;
      if ((bVar15 & 0x10) == 0) goto LAB_001001e0;
      goto LAB_001002e0;
    }
    if ((bVar15 & 0x40) != 0) {
      uVar16 = 0x3f3f;
      if ((bVar15 & 0x20) == 0) {
        uVar16 = 0x3f51;
        param_1[6] = "invalid literal/length code";
      }
      *(undefined4 *)(lVar8 + 8) = uVar16;
      goto LAB_001001fb;
    }
    uVar17 = ((1 << (bVar15 & 0x1f)) - 1 & uVar14) + (ulong)*(ushort *)(pbVar22 + 2);
  }
  *puVar26 = (char)*(undefined2 *)(pbVar22 + 2);
  puVar27 = puVar26 + 1;
  goto LAB_0010011b;
  while( true ) {
    pbVar22 = (byte *)(lVar11 + (((1 << (bVar15 & 0x1f)) - 1 & uVar14) +
                                (ulong)*(ushort *)(pbVar22 + 2)) * 4);
    uVar14 = uVar14 >> (pbVar22[1] & 0x3f);
    uVar20 = uVar20 - pbVar22[1];
    bVar15 = *pbVar22;
    uVar23 = (uint)bVar15;
    if ((bVar15 & 0x10) != 0) break;
LAB_001001e0:
    if ((uVar23 & 0x40) != 0) {
      param_1[6] = "invalid distance code";
      *(undefined4 *)(lVar8 + 8) = 0x3f51;
      goto LAB_001001fb;
    }
  }
LAB_001002e0:
  uVar24 = uVar23 & 0xf;
  bVar15 = (byte)uVar23 & 0xf;
  if (uVar20 < uVar24) {
    uVar23 = uVar20 + 8;
    uVar14 = uVar14 + ((ulong)*pbVar29 << ((byte)uVar20 & 0x3f));
    if (uVar23 < uVar24) {
      pbVar1 = pbVar29 + 1;
      uVar20 = uVar20 + 0x10;
      pbVar29 = pbVar29 + 2;
      uVar14 = uVar14 + ((ulong)*pbVar1 << ((byte)uVar23 & 0x3f));
    }
    else {
      pbVar29 = pbVar29 + 1;
      uVar20 = uVar23;
    }
  }
  uVar20 = uVar20 - uVar24;
  uVar23 = (~(-1 << bVar15) & (uint)uVar14) + (uint)*(ushort *)(pbVar22 + 2);
  uVar24 = (int)puVar26 - ((int)puVar9 - (param_2 - iVar3));
  uVar14 = uVar14 >> bVar15;
  if (uVar24 < uVar23) {
    uVar25 = uVar23 - uVar24;
    uVar17 = (ulong)uVar25;
    if ((uVar5 < uVar25) && (*(int *)(lVar8 + 0x1be8) != 0)) {
      param_1[6] = "invalid distance too far back";
      *(undefined4 *)(lVar8 + 8) = 0x3f51;
LAB_001001fb:
      param_1[3] = puVar27;
      *param_1 = pbVar29 + -(ulong)(uVar20 >> 3);
      *(int *)(param_1 + 1) = ((int)pbVar2 - (int)(pbVar29 + -(ulong)(uVar20 >> 3))) + 5;
      *(int *)(param_1 + 4) = ((int)(puVar9 + (iVar3 - 0x101)) - (int)puVar27) + 0x101;
      *(ulong *)(lVar8 + 0x50) = (1 << (sbyte)(uVar20 & 7)) - 1 & uVar14;
      *(uint *)(lVar8 + 0x58) = uVar20 & 7;
      return;
    }
    iVar30 = uVar24 - uVar23;
    if (uVar6 == 0) {
      puVar18 = puVar12 + (uint)(iVar4 + iVar30);
      if (uVar21 <= uVar25) goto LAB_0010043a;
      uVar21 = uVar21 + iVar30;
      uVar31 = 0;
      do {
        puVar26[uVar31] = puVar18[uVar31];
        uVar31 = uVar31 + 1;
      } while (uVar17 != uVar31);
      puVar26 = puVar26 + uVar17;
      puVar18 = puVar26 + -(ulong)uVar23;
      goto LAB_0010043a;
    }
    if (uVar25 <= uVar6) {
      puVar18 = puVar12 + (uVar6 + iVar30);
      if (uVar21 <= uVar25) goto LAB_0010043a;
      uVar21 = uVar21 + iVar30;
      uVar31 = 0;
      do {
        puVar26[uVar31] = puVar18[uVar31];
        uVar31 = uVar31 + 1;
      } while (uVar31 != uVar17);
      puVar26 = puVar26 + uVar31;
      puVar18 = puVar26 + -(ulong)uVar23;
      goto LAB_0010043a;
    }
    puVar18 = puVar12 + (uVar6 + iVar4 + iVar30);
    if (uVar21 <= uVar25 - uVar6) goto LAB_0010043a;
    uVar21 = uVar21 + uVar6 + iVar30;
    uVar17 = 0;
    do {
      puVar26[uVar17] = (puVar12 + (uVar6 + iVar4 + iVar30))[uVar17];
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar25 - uVar6);
    puVar26 = puVar26 + uVar17;
    puVar18 = puVar12;
    if (uVar21 <= uVar6) goto LAB_0010043a;
    uVar17 = 0;
    uVar21 = uVar21 - uVar6;
    do {
      puVar26[uVar17] = puVar12[uVar17];
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar6);
    puVar26 = puVar26 + uVar17;
    puVar18 = puVar26 + -(ulong)uVar23;
    if (2 < uVar21) {
      do {
        uVar21 = uVar21 - 3;
        *puVar26 = *puVar18;
        puVar26[1] = puVar18[1];
        puVar26[2] = puVar18[2];
        puVar18 = puVar18 + 3;
        puVar26 = puVar26 + 3;
LAB_0010043a:
      } while (2 < uVar21);
      puVar27 = puVar26;
      if (uVar21 == 0) goto LAB_0010011b;
    }
    *puVar26 = *puVar18;
    if (uVar21 == 2) {
      puVar27 = puVar26 + 2;
      puVar26[1] = puVar18[1];
    }
    else {
      puVar27 = puVar26 + 1;
    }
  }
  else {
    puVar18 = puVar26 + -(ulong)uVar23;
    do {
      puVar28 = puVar26;
      puVar19 = puVar18;
      uVar21 = uVar21 - 3;
      puVar27 = puVar28 + 3;
      *puVar28 = *puVar19;
      puVar28[1] = puVar19[1];
      puVar28[2] = puVar19[2];
      puVar18 = puVar19 + 3;
      puVar26 = puVar27;
    } while (2 < uVar21);
    if (uVar21 != 0) {
      puVar27 = puVar28 + 4;
      puVar28[3] = puVar19[3];
      if (uVar21 == 2) {
        puVar27 = puVar28 + 5;
        puVar28[4] = puVar19[4];
      }
    }
  }
LAB_0010011b:
  if ((pbVar2 <= pbVar29) || (puVar26 = puVar27, puVar9 + (iVar3 - 0x101) <= puVar27))
  goto LAB_001001fb;
  goto LAB_001000a4;
}


