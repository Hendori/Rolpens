
void IDEA_set_encrypt_key(byte *param_1,uint *param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  
  bVar1 = *param_1;
  *param_2 = (uint)bVar1 << 8;
  uVar2 = CONCAT11(bVar1,param_1[1]);
  *param_2 = (uint)uVar2;
  bVar1 = param_1[2];
  param_2[1] = (uint)bVar1 << 8;
  uVar3 = CONCAT11(bVar1,param_1[3]);
  param_2[1] = (uint)uVar3;
  bVar1 = param_1[4];
  param_2[2] = (uint)bVar1 << 8;
  uVar4 = CONCAT11(bVar1,param_1[5]);
  param_2[2] = (uint)uVar4;
  bVar1 = param_1[6];
  param_2[3] = (uint)bVar1 << 8;
  uVar5 = CONCAT11(bVar1,param_1[7]);
  param_2[3] = (uint)uVar5;
  bVar1 = param_1[8];
  param_2[4] = (uint)bVar1 << 8;
  uVar6 = CONCAT11(bVar1,param_1[9]);
  param_2[4] = (uint)uVar6;
  bVar1 = param_1[10];
  param_2[5] = (uint)bVar1 << 8;
  uVar7 = CONCAT11(bVar1,param_1[0xb]);
  param_2[5] = (uint)uVar7;
  bVar1 = param_1[0xc];
  param_2[6] = (uint)bVar1 << 8;
  uVar8 = CONCAT11(bVar1,param_1[0xd]);
  param_2[6] = (uint)uVar8;
  bVar1 = param_1[0xe];
  param_2[7] = (uint)bVar1 << 8;
  uVar9 = CONCAT11(bVar1,param_1[0xf]);
  param_2[7] = (uint)uVar9;
  uVar29 = (uVar3 & 0x7f) << 9 | (uint)(uVar4 >> 7);
  param_2[8] = uVar29;
  uVar17 = (uVar4 & 0x7f) << 9 | (uint)(uVar5 >> 7);
  param_2[9] = uVar17;
  uVar26 = (uVar5 & 0x7f) << 9 | (uint)(uVar6 >> 7);
  param_2[10] = uVar26;
  uVar14 = (uVar6 & 0x7f) << 9 | (uint)(uVar7 >> 7);
  param_2[0xb] = uVar14;
  uVar11 = (uVar7 & 0x7f) << 9 | (uint)(uVar8 >> 7);
  uVar23 = (uVar8 & 0x7f) << 9 | (uint)(uVar9 >> 7);
  uVar26 = uVar26 >> 7;
  uVar21 = (uVar9 & 0x7f) << 9 | (uint)(uVar2 >> 7);
  param_2[0xc] = uVar11;
  uVar14 = uVar14 >> 7;
  uVar19 = (uVar2 & 0x7f) << 9 | (uint)(uVar3 >> 7);
  param_2[0xd] = uVar23;
  uVar17 = uVar17 >> 7;
  param_2[0xe] = uVar21;
  uVar11 = uVar11 >> 7;
  param_2[0xf] = uVar19;
  uVar27 = (uVar6 >> 7 & 0x7f) << 9 | uVar14;
  uVar13 = (uVar5 >> 7 & 0x7f) << 9 | uVar26;
  param_2[0x10] = uVar13;
  uVar23 = uVar23 >> 7;
  uVar15 = (uVar7 >> 7 & 0x7f) << 9 | uVar11;
  param_2[0x11] = uVar27;
  param_2[0x12] = uVar15;
  uVar21 = uVar21 >> 7;
  uVar12 = (uVar8 >> 7 & 0x7f) << 9 | uVar23;
  param_2[0x13] = uVar12;
  uVar19 = uVar19 >> 7;
  uVar24 = (uVar9 >> 7 & 0x7f) << 9 | uVar21;
  param_2[0x14] = uVar24;
  uVar29 = uVar29 >> 7;
  uVar22 = (uVar2 >> 7 & 0x7f) << 9 | uVar19;
  uVar10 = (uVar4 >> 7 & 0x7f) << 9 | uVar17;
  param_2[0x15] = uVar22;
  uVar20 = (uVar3 >> 7 & 0x7f) << 9 | uVar29;
  param_2[0x17] = uVar10;
  uVar15 = uVar15 >> 7;
  param_2[0x16] = uVar20;
  uVar27 = uVar27 >> 7;
  uVar12 = uVar12 >> 7;
  uVar18 = (uVar14 & 0x7f) << 9 | uVar15;
  param_2[0x18] = uVar18;
  uVar24 = uVar24 >> 7;
  uVar16 = (uVar11 & 0x7f) << 9 | uVar12;
  param_2[0x19] = uVar16;
  uVar22 = uVar22 >> 7;
  uVar11 = (uVar23 & 0x7f) << 9 | uVar24;
  param_2[0x1a] = uVar11;
  uVar20 = uVar20 >> 7;
  uVar25 = (uVar21 & 0x7f) << 9 | uVar22;
  param_2[0x1b] = uVar25;
  uVar10 = uVar10 >> 7;
  uVar23 = (uVar19 & 0x7f) << 9 | uVar20;
  param_2[0x1c] = uVar23;
  uVar13 = uVar13 >> 7;
  uVar11 = uVar11 >> 7;
  uVar21 = (uVar29 & 0x7f) << 9 | uVar10;
  uVar14 = (uVar17 & 0x7f) << 9 | uVar13;
  param_2[0x1d] = uVar21;
  uVar29 = (uVar26 & 0x7f) << 9 | uVar27;
  param_2[0x1e] = uVar14;
  uVar25 = uVar25 >> 7;
  param_2[0x1f] = uVar29;
  uVar17 = (uVar12 & 0x7f) << 9 | uVar11;
  param_2[0x20] = uVar17;
  uVar28 = (uVar24 & 0x7f) << 9 | uVar25;
  uVar23 = uVar23 >> 7;
  param_2[0x21] = uVar28;
  uVar21 = uVar21 >> 7;
  uVar24 = (uVar22 & 0x7f) << 9 | uVar23;
  param_2[0x22] = uVar24;
  uVar14 = uVar14 >> 7;
  uVar16 = uVar16 >> 7;
  uVar12 = (uVar20 & 0x7f) << 9 | uVar21;
  param_2[0x23] = uVar12;
  uVar19 = (uVar10 & 0x7f) << 9 | uVar14;
  uVar29 = uVar29 >> 7;
  param_2[0x24] = uVar19;
  uVar18 = uVar18 >> 7;
  uVar26 = (uVar13 & 0x7f) << 9 | uVar29;
  uVar13 = (uVar15 & 0x7f) << 9 | uVar16;
  uVar10 = (uVar27 & 0x7f) << 9 | uVar18;
  param_2[0x25] = uVar26;
  param_2[0x26] = uVar10;
  param_2[0x27] = uVar13;
  param_2[0x28] = (uVar25 & 0x7f) << 9 | uVar24 >> 7;
  uVar12 = uVar12 >> 7;
  uVar19 = uVar19 >> 7;
  param_2[0x29] = (uVar23 & 0x7f) << 9 | uVar12;
  uVar26 = uVar26 >> 7;
  uVar15 = (uVar21 & 0x7f) << 9 | uVar19;
  param_2[0x2a] = uVar15;
  uVar10 = uVar10 >> 7;
  uVar23 = (uVar14 & 0x7f) << 9 | uVar26;
  param_2[0x2b] = uVar23;
  uVar13 = uVar13 >> 7;
  uVar14 = (uVar29 & 0x7f) << 9 | uVar10;
  uVar29 = (uVar18 & 0x7f) << 9 | uVar13;
  uVar17 = uVar17 >> 7;
  param_2[0x2c] = uVar14;
  uVar21 = (uVar11 & 0x7f) << 9 | uVar28 >> 7;
  param_2[0x2d] = uVar29;
  param_2[0x2f] = uVar21;
  param_2[0x30] = (uVar12 & 0x7f) << 9 | uVar15 >> 7;
  uVar11 = (uVar16 & 0x7f) << 9 | uVar17;
  param_2[0x2e] = uVar11;
  param_2[0x31] = (uVar19 & 0x7f) << 9 | uVar23 >> 7;
  param_2[0x32] = (uVar26 & 0x7f) << 9 | uVar14 >> 7;
  param_2[0x33] = (uVar10 & 0x7f) << 9 | uVar29 >> 7;
  param_2[0x34] = (uVar13 & 0x7f) << 9 | uVar11 >> 7;
  param_2[0x35] = (uVar17 & 0x7f) << 9 | uVar21 >> 7;
  return;
}



void IDEA_set_decrypt_key(uint *param_1,uint *param_2)

{
  ulong *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  puVar6 = param_1 + 0x30;
  puVar10 = param_2;
  while( true ) {
    uVar4 = *puVar6;
    if (uVar4 != 0) {
      uVar12 = (ulong)uVar4;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = SUB168(SEXT816(0x10001),8);
      uVar7 = SUB168((auVar2 << 0x40 | ZEXT816(0x10001)) % SEXT816((long)uVar12),0);
      uVar4 = 1;
      if (uVar7 != 0) {
        lVar5 = (long)(0x10001 - uVar7) / (long)uVar12;
        lVar9 = 0;
        lVar13 = 1;
        do {
          uVar11 = uVar7;
          lVar8 = lVar9 - lVar5 * lVar13;
          uVar7 = (long)uVar12 % (long)uVar11;
          lVar5 = (long)(uVar12 - uVar7) / (long)uVar11;
          lVar9 = lVar13;
          uVar12 = uVar11;
          lVar13 = lVar8;
        } while (uVar7 != 0);
        uVar4 = (uint)lVar8 + 0x10001;
        if (-1 < lVar8) {
          uVar4 = (uint)lVar8;
        }
      }
    }
    *puVar10 = uVar4;
    puVar10[1] = -puVar6[2] & 0xffff;
    puVar10[2] = -puVar6[1] & 0xffff;
    uVar4 = puVar6[3];
    if (uVar4 != 0) {
      uVar12 = (ulong)uVar4;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = SUB168(SEXT816(0x10001),8);
      uVar7 = SUB168((auVar3 << 0x40 | ZEXT816(0x10001)) % SEXT816((long)uVar12),0);
      uVar4 = 1;
      if (uVar7 != 0) {
        lVar5 = (long)(0x10001 - uVar7) / (long)uVar12;
        lVar9 = 0;
        lVar13 = 1;
        do {
          uVar11 = uVar7;
          lVar8 = lVar9 - lVar5 * lVar13;
          uVar7 = (long)uVar12 % (long)uVar11;
          lVar5 = (long)(uVar12 - uVar7) / (long)uVar11;
          lVar9 = lVar13;
          uVar12 = uVar11;
          lVar13 = lVar8;
        } while (uVar7 != 0);
        uVar4 = (uint)lVar8 + 0x10001;
        if (-1 < lVar8) {
          uVar4 = (uint)lVar8;
        }
      }
    }
    puVar10[3] = uVar4;
    if (puVar6 == param_1) break;
    puVar10[4] = puVar6[-2];
    puVar10[5] = puVar6[-1];
    puVar6 = puVar6 + -6;
    puVar10 = puVar10 + 6;
  }
  puVar1 = (ulong *)(param_2 + 1);
  *puVar1 = *puVar1 << 0x20 | *puVar1 >> 0x20;
  puVar1 = (ulong *)(param_2 + 0x31);
  *puVar1 = *puVar1 << 0x20 | *puVar1 >> 0x20;
  return;
}


