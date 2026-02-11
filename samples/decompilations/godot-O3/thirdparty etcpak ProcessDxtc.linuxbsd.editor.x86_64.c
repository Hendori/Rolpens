
/* CompressBc1(unsigned int const*, unsigned long*, unsigned int, unsigned long) */

void CompressBc1(uint *param_1,ulong *param_2,uint param_3,ulong param_4)

{
  long lVar1;
  undefined8 *puVar2;
  ushort uVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  undefined8 *puVar7;
  uint *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  ulong *puVar18;
  ulong *puVar19;
  long in_FS_OFFSET;
  int local_cc;
  undefined8 local_98;
  ulong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58 [3];
  byte local_4b [3];
  undefined8 local_48;
  long local_40;
  
  lVar1 = param_4 * 4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_cc = 0;
  puVar18 = param_2;
LAB_001000a0:
  local_98 = *(ulong *)param_1;
  local_cc = local_cc + 1;
  local_90 = *(ulong *)((long)param_1 + 8);
  puVar2 = (undefined8 *)((long)param_1 + lVar1);
  param_1 = (uint *)((long)param_1 + 0x10);
  puVar7 = (undefined8 *)((long)puVar2 + lVar1);
  local_88 = *puVar2;
  uStack_80 = puVar2[1];
  local_78 = *puVar7;
  uStack_70 = puVar7[1];
  local_68 = *(undefined8 *)((long)puVar7 + lVar1);
  uStack_60 = ((undefined8 *)((long)puVar7 + lVar1))[1];
  if ((long)local_cc == param_4 >> 2) {
    local_cc = 0;
    param_1 = (uint *)((long)param_1 + param_4 * 0xc);
  }
  puVar8 = (uint *)((long)&local_98 + 4);
LAB_00100110:
  if (((*puVar8 ^ (uint)local_98) & 0xf8fcf8) == 0) goto code_r0x00100121;
  if (puVar8 != local_58) {
    local_4b[0] = (byte)local_98;
    local_4b[1] = (byte)(local_98 >> 8);
    local_4b[2] = (byte)(local_98 >> 0x10);
    local_48._0_3_ = (undefined3)local_98;
    puVar8 = (uint *)((long)&local_98 + 4);
    do {
      lVar11 = 0;
      do {
        bVar6 = *(byte *)((long)puVar8 + lVar11);
        if (bVar6 < local_4b[lVar11]) {
          local_4b[lVar11] = bVar6;
        }
        else if (*(byte *)((long)&local_48 + lVar11) < bVar6) {
          *(byte *)((long)&local_48 + lVar11) = bVar6;
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 != 3);
      puVar8 = puVar8 + 1;
    } while (puVar8 != local_58);
    uVar12 = (uint)local_4b[0];
    uVar15 = (uint)local_4b[1];
    uVar13 = (uint)local_4b[2];
    uVar3 = (&DivTable)
            [(int)((((((byte)local_48 - uVar12) + (uint)local_48._1_1_) - uVar15) +
                   (uint)local_48._2_1_) - uVar13)];
    pbVar9 = local_4b;
    pbVar10 = (byte *)&local_48;
    do {
      bVar6 = *pbVar10;
      pbVar14 = pbVar10 + 1;
      cVar5 = (char)((int)((uint)bVar6 - (uint)*pbVar9) >> 4);
      *pbVar9 = *pbVar9 + cVar5;
      *pbVar10 = bVar6 - cVar5;
      pbVar9 = pbVar9 + 1;
      pbVar10 = pbVar14;
    } while ((byte *)((long)&local_48 + 3) != pbVar14);
    bVar6 = 0;
    uVar17 = 0;
    puVar8 = (uint *)&local_98;
    do {
      puVar16 = puVar8 + 1;
      bVar4 = bVar6 & 0x1f;
      bVar6 = bVar6 + 2;
      uVar17 = uVar17 | ((((uint)(byte)*puVar8 + (uint)*(byte *)((long)puVar8 + 1) +
                          (uint)*(byte *)((long)puVar8 + 2)) - (uVar12 + uVar15 + uVar13)) *
                         (uint)uVar3 >> 0x10 & 0xff) << bVar4;
      puVar8 = puVar16;
    } while (puVar16 != local_58);
    local_48 = (ulong)((uint)(ushort)(((byte)local_48 & 0xf8) << 8 | (local_48._1_1_ & 0xfc) << 3) |
                      (uint)(local_48._2_1_ >> 3)) |
               (ulong)(ushort)((local_4b[0] & 0xf8) << 8 | (local_4b[1] & 0xfc) << 3 |
                              (ushort)(local_4b[2] >> 3)) << 0x10 | (ulong)uVar17 << 0x20;
    goto LAB_0010014f;
  }
  goto LAB_0010012a;
code_r0x00100121:
  puVar8 = puVar8 + 1;
  if (puVar8 == local_58) goto LAB_0010012a;
  goto LAB_00100110;
LAB_0010012a:
  local_48 = (ulong)((uint)((ushort)(local_98 >> 5) & 0x7e0) | (uint)(local_98 >> 0x13) & 0x1f |
                    (uint)((ushort)((uint)local_98 << 8) & 0xf800)) << 0x10;
LAB_0010014f:
  pbVar9 = (byte *)&local_48;
  do {
    pbVar10 = pbVar9 + 1;
    pbVar9[4] = DxtcIndexTable[pbVar9[4]];
    pbVar9 = pbVar10;
  } while ((byte *)((long)&local_48 + 4) != pbVar10);
  puVar19 = puVar18 + 1;
  *puVar18 = local_48;
  puVar18 = puVar19;
  if (puVar19 == param_2 + (ulong)(param_3 - 1) + 1) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_001000a0;
}



/* CompressBc1Dither(unsigned int const*, unsigned long*, unsigned int, unsigned long) */

void CompressBc1Dither(uint *param_1,ulong *param_2,uint param_3,ulong param_4)

{
  ushort uVar1;
  byte bVar2;
  char cVar3;
  uint *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  byte *pbVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ulong *puVar16;
  ulong *puVar17;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58 [3];
  undefined2 local_4c;
  byte local_4a;
  undefined8 local_48;
  long local_40;
  
  iVar15 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar16 = param_2;
LAB_00100440:
  puVar4 = param_1 + param_4;
  local_98 = *(undefined8 *)param_1;
  uStack_90 = *(undefined8 *)(param_1 + 2);
  iVar15 = iVar15 + 1;
  local_88 = *(undefined8 *)puVar4;
  uStack_80 = *(undefined8 *)(puVar4 + 2);
  puVar4 = puVar4 + param_4;
  param_1 = param_1 + 4;
  local_78 = *(undefined8 *)puVar4;
  uStack_70 = *(undefined8 *)(puVar4 + 2);
  local_68 = *(undefined8 *)(puVar4 + param_4);
  uStack_60 = *(undefined8 *)(puVar4 + param_4 + 2);
  if ((long)iVar15 == param_4 >> 2) {
    iVar15 = 0;
    param_1 = param_1 + param_4 * 3;
  }
  Dither((uchar *)&local_98);
  puVar4 = (uint *)((long)&local_98 + 4);
LAB_001004c0:
  if (((*puVar4 ^ (uint)local_98) & 0xf8fcf8) == 0) goto code_r0x001004d0;
  if (puVar4 != local_58) {
    local_4c = (ushort)local_98;
    local_4a = local_98._2_1_;
    local_48._0_3_ = (undefined3)local_98;
    puVar4 = (uint *)((long)&local_98 + 4);
    do {
      lVar9 = 0;
      do {
        bVar7 = *(byte *)((long)puVar4 + lVar9);
        if (bVar7 < *(byte *)((long)&local_4c + lVar9)) {
          *(byte *)((long)&local_4c + lVar9) = bVar7;
        }
        else if (*(byte *)((long)&local_48 + lVar9) < bVar7) {
          *(byte *)((long)&local_48 + lVar9) = bVar7;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != 3);
      puVar4 = puVar4 + 1;
    } while (puVar4 != local_58);
    uVar8 = (uint)(byte)local_4c;
    uVar13 = (uint)local_4c._1_1_;
    uVar10 = (uint)local_4a;
    uVar1 = (&DivTable)
            [(int)((((((byte)local_48 - uVar8) + (uint)local_48._1_1_) - uVar13) +
                   (uint)local_48._2_1_) - uVar10)];
    pbVar6 = (byte *)&local_4c;
    pbVar5 = (byte *)&local_48;
    do {
      bVar7 = *pbVar5;
      pbVar11 = pbVar5 + 1;
      cVar3 = (char)((int)((uint)bVar7 - (uint)*pbVar6) >> 4);
      *pbVar6 = *pbVar6 + cVar3;
      *pbVar5 = bVar7 - cVar3;
      pbVar6 = pbVar6 + 1;
      pbVar5 = pbVar11;
    } while ((byte *)((long)&local_48 + 3) != pbVar11);
    bVar7 = 0;
    uVar14 = 0;
    puVar4 = (uint *)&local_98;
    do {
      puVar12 = puVar4 + 1;
      bVar2 = bVar7 & 0x1f;
      bVar7 = bVar7 + 2;
      uVar14 = uVar14 | ((((uint)(byte)*puVar4 + (uint)*(byte *)((long)puVar4 + 1) +
                          (uint)*(byte *)((long)puVar4 + 2)) - (uVar8 + uVar13 + uVar10)) *
                         (uint)uVar1 >> 0x10 & 0xff) << bVar2;
      puVar4 = puVar12;
    } while (puVar12 != local_58);
    local_48 = (ulong)((uint)(ushort)(((byte)local_48 & 0xf8) << 8 | (local_48._1_1_ & 0xfc) << 3) |
                      (uint)(local_48._2_1_ >> 3)) |
               (ulong)(ushort)((local_4c & 0xf8) << 8 | (local_4c >> 8 & 0xfc) << 3 |
                              (ushort)(local_4a >> 3)) << 0x10 | (ulong)uVar14 << 0x20;
    goto LAB_001004fd;
  }
  goto LAB_001004d9;
code_r0x001004d0:
  puVar4 = puVar4 + 1;
  if (puVar4 == local_58) goto LAB_001004d9;
  goto LAB_001004c0;
LAB_001004d9:
  local_48 = (ulong)((uint)((ushort)((uint)local_98 >> 5) & 0x7e0) | (uint)local_98 >> 0x13 & 0x1f |
                    ((uint)local_98 & 0xf8) << 8) << 0x10;
LAB_001004fd:
  pbVar6 = (byte *)&local_48;
  do {
    pbVar5 = pbVar6 + 1;
    pbVar6[4] = DxtcIndexTable[pbVar6[4]];
    pbVar6 = pbVar5;
  } while (pbVar5 != (byte *)((long)&local_48 + 4));
  puVar17 = puVar16 + 1;
  *puVar16 = local_48;
  puVar16 = puVar17;
  if (puVar17 == param_2 + (ulong)(param_3 - 1) + 1) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_00100440;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CompressBc3(unsigned int const*, unsigned long*, unsigned int, unsigned long) */

void CompressBc3(uint *param_1,ulong *param_2,uint param_3,ulong param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  char cVar14;
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 *puVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint uVar26;
  undefined1 (*pauVar27) [16];
  long lVar28;
  byte *pbVar29;
  uint *puVar30;
  byte *pbVar31;
  byte bVar32;
  uint uVar33;
  byte *pbVar34;
  int iVar35;
  uint uVar36;
  uint *puVar37;
  uint uVar38;
  ulong *puVar39;
  ulong *puVar40;
  ulong uVar41;
  long in_FS_OFFSET;
  uint3 uVar42;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  int local_114;
  undefined1 (*local_110) [16];
  byte bStack_c6;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  uint local_68;
  undefined2 local_64;
  byte local_62;
  undefined8 local_60;
  undefined1 local_58 [16];
  byte local_48 [8];
  long local_40;
  uint7 uVar43;
  
  auVar25 = __LC1;
  auVar24 = __LC0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = param_4 * 4;
  local_114 = 0;
  puVar39 = param_2;
  local_110 = (undefined1 (*) [16])param_1;
LAB_00100830:
  local_114 = local_114 + 1;
  puVar23 = *local_110;
  local_a8 = *local_110;
  local_110 = local_110 + 1;
  auVar45 = *(undefined1 (*) [16])(puVar23 + lVar1);
  pauVar27 = (undefined1 (*) [16])(*(undefined1 (*) [16])(puVar23 + lVar1) + lVar1);
  auVar2 = *pauVar27;
  auVar3 = *(undefined1 (*) [16])(*pauVar27 + lVar1);
  if ((long)local_114 == param_4 >> 2) {
    local_110 = (undefined1 (*) [16])(*local_110 + param_4 * 0xc);
    local_114 = 0;
  }
  auVar44[1] = 0;
  auVar44[0] = local_a8[3];
  local_98 = auVar45 & auVar25;
  local_78 = auVar3 & auVar25;
  auVar12[0xc] = auVar45[0xb];
  auVar12._0_12_ = ZEXT712(0);
  auVar12[0xd] = 0;
  auVar12[0xe] = auVar45[0xf];
  auVar15[10] = auVar45[7];
  auVar15._0_10_ = (unkuint10)0;
  auVar15[0xb] = 0;
  auVar15._12_3_ = auVar12._12_3_;
  auVar17._10_5_ = auVar15._10_5_;
  auVar17._0_10_ = (unkuint10)auVar45[3] << 0x40;
  auVar19._8_7_ = auVar17._8_7_;
  auVar19._0_8_ = (ulong)local_a8[0xf] << 0x30;
  auVar21._6_9_ = auVar19._6_9_;
  auVar21._0_6_ = (uint6)local_a8[0xb] << 0x20;
  auVar44[2] = local_a8[7];
  auVar44[3] = 0;
  auVar44._4_11_ = auVar21._4_11_;
  auVar44[0xf] = 0;
  auVar44 = auVar44 & auVar24;
  local_88 = auVar2 & auVar25;
  auVar45[1] = 0;
  auVar45[0] = auVar2[3];
  auVar13[0xc] = auVar3[0xb];
  auVar13._0_12_ = ZEXT712(0);
  auVar13[0xd] = 0;
  auVar13[0xe] = auVar3[0xf];
  auVar16[10] = auVar3[7];
  auVar16._0_10_ = (unkuint10)0;
  auVar16[0xb] = 0;
  auVar16._12_3_ = auVar13._12_3_;
  auVar18._10_5_ = auVar16._10_5_;
  auVar18._0_10_ = (unkuint10)auVar3[3] << 0x40;
  auVar20._8_7_ = auVar18._8_7_;
  auVar20._0_8_ = (ulong)auVar2[0xf] << 0x30;
  auVar22._6_9_ = auVar20._6_9_;
  auVar22._0_6_ = (uint6)auVar2[0xb] << 0x20;
  auVar45[2] = auVar2[7];
  auVar45[3] = 0;
  auVar45._4_11_ = auVar22._4_11_;
  auVar45[0xf] = 0;
  auVar45 = auVar45 & auVar24;
  uVar6 = auVar44._0_2_;
  uVar7 = auVar44._2_2_;
  uVar8 = auVar44._4_2_;
  uVar42 = CONCAT12((uVar8 != 0) * (uVar8 < 0x100) * auVar44[4] - (0xff < uVar8),
                    CONCAT11((uVar7 != 0) * (uVar7 < 0x100) * auVar44[2] - (0xff < uVar7),
                             (uVar6 != 0) * (uVar6 < 0x100) * auVar44[0] - (0xff < uVar6)));
  uVar6 = auVar44._6_2_;
  uVar33 = CONCAT13((uVar6 != 0) * (uVar6 < 0x100) * auVar44[6] - (0xff < uVar6),uVar42);
  sVar9 = auVar44._8_2_;
  sVar10 = auVar44._10_2_;
  sVar11 = auVar44._12_2_;
  uVar43 = CONCAT16((0 < sVar11) * (sVar11 < 0x100) * auVar44[0xc] - (0xff < sVar11),
                    CONCAT15((0 < sVar10) * (sVar10 < 0x100) * auVar44[10] - (0xff < sVar10),
                             CONCAT14((0 < sVar9) * (sVar9 < 0x100) * auVar44[8] - (0xff < sVar9),
                                      uVar33)));
  sVar9 = auVar44._14_2_;
  local_58._0_8_ = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * auVar44[0xe] - (0xff < sVar9),uVar43);
  uVar6 = auVar45._0_2_;
  local_58[8] = (uVar6 != 0) * (uVar6 < 0x100) * auVar45[0] - (0xff < uVar6);
  uVar6 = auVar45._2_2_;
  local_58[9] = (uVar6 != 0) * (uVar6 < 0x100) * auVar45[2] - (0xff < uVar6);
  uVar6 = auVar45._4_2_;
  local_58[10] = (uVar6 != 0) * (uVar6 < 0x100) * auVar45[4] - (0xff < uVar6);
  uVar6 = auVar45._6_2_;
  local_58[0xb] = (uVar6 != 0) * (uVar6 < 0x100) * auVar45[6] - (0xff < uVar6);
  sVar9 = auVar45._8_2_;
  local_58[0xc] = (0 < sVar9) * (sVar9 < 0x100) * auVar45[8] - (0xff < sVar9);
  sVar9 = auVar45._10_2_;
  local_58[0xd] = (0 < sVar9) * (sVar9 < 0x100) * auVar45[10] - (0xff < sVar9);
  sVar9 = auVar45._12_2_;
  local_58[0xe] = (0 < sVar9) * (sVar9 < 0x100) * auVar45[0xc] - (0xff < sVar9);
  sVar9 = auVar45._14_2_;
  local_58[0xf] = (0 < sVar9) * (sVar9 < 0x100) * auVar45[0xe] - (0xff < sVar9);
  local_a8 = local_a8 & auVar25;
  auVar45 = local_58;
  uVar41 = (ulong)uVar43 & 0xffffffff;
  uVar26 = (uVar42 & 0xff) + uVar33 * 0x100;
  iVar35 = (uVar26 & 0xffff) + uVar26 * 0x10000;
  lVar28 = CONCAT44(iVar35,iVar35);
  if ((lVar28 == local_58._0_8_) && (lVar28 == local_58._8_8_)) {
    uVar41 = (ulong)uVar43 & 0xff;
  }
  else {
    pbVar29 = local_58 + 1;
    do {
      while( true ) {
        uVar36 = (uint)uVar41;
        bVar32 = *pbVar29;
        uVar26 = (uint)bVar32;
        if (bVar32 <= (byte)uVar33) break;
        pbVar29 = pbVar29 + 1;
        uVar33 = uVar26;
        if (pbVar29 == local_48) goto LAB_001009a2;
      }
      if (bVar32 < (byte)uVar41) {
        uVar41 = (ulong)uVar26;
      }
      uVar36 = (uint)uVar41;
      pbVar29 = pbVar29 + 1;
    } while (pbVar29 != local_48);
LAB_001009a2:
    uVar41 = 0;
    bVar32 = 0;
    pbVar29 = local_58;
    do {
      bVar4 = *pbVar29;
      pbVar29 = pbVar29 + 1;
      bVar5 = bVar32 & 0x3f;
      bVar32 = bVar32 + 3;
      uVar41 = uVar41 | (ulong)*(byte *)((long)&AlphaIndexTable +
                                        (ulong)((bVar4 - uVar36 & 0xff) *
                                                (int)(0x10000 /
                                                     (long)(int)(((uVar33 & 0xff) + 1) -
                                                                (uVar36 & 0xff))) >> 0xd)) << bVar5;
    } while (local_48 != pbVar29);
    uVar41 = (long)(int)((uVar36 & 0xff) << 8 | uVar33 & 0xff) | uVar41 << 0x10;
  }
  *puVar39 = uVar41;
  uVar33 = local_a8._0_4_;
  puVar30 = (uint *)(local_a8 + 4);
LAB_00100a08:
  local_58 = auVar45;
  if (((*puVar30 ^ uVar33) & 0xf8fcf8) == 0) goto code_r0x00100a18;
  if (puVar30 != &local_68) {
    bStack_c6 = local_a8[2];
    local_64 = local_a8._0_2_;
    local_62 = bStack_c6;
    local_60._0_3_ = local_a8._0_3_;
    puVar30 = (uint *)(local_a8 + 4);
    do {
      lVar28 = 0;
      do {
        bVar32 = *(byte *)((long)puVar30 + lVar28);
        if (bVar32 < *(byte *)((long)&local_64 + lVar28)) {
          *(byte *)((long)&local_64 + lVar28) = bVar32;
        }
        else if (*(byte *)((long)&local_60 + lVar28) < bVar32) {
          *(byte *)((long)&local_60 + lVar28) = bVar32;
        }
        lVar28 = lVar28 + 1;
      } while (lVar28 != 3);
      puVar30 = puVar30 + 1;
    } while (puVar30 != &local_68);
    uVar33 = (uint)(byte)local_64;
    uVar36 = (uint)local_64._1_1_;
    uVar26 = (uint)local_62;
    uVar6 = (&DivTable)
            [(int)((((((byte)local_60 - uVar33) + (uint)local_60._1_1_) - uVar36) +
                   (uint)local_60._2_1_) - uVar26)];
    pbVar29 = (byte *)&local_60;
    pbVar31 = (byte *)&local_64;
    do {
      bVar32 = *pbVar29;
      pbVar34 = pbVar29 + 1;
      cVar14 = (char)((int)((uint)bVar32 - (uint)*pbVar31) >> 4);
      *pbVar31 = *pbVar31 + cVar14;
      *pbVar29 = bVar32 - cVar14;
      pbVar29 = pbVar34;
      pbVar31 = pbVar31 + 1;
    } while ((byte *)((long)&local_60 + 3) != pbVar34);
    bVar32 = 0;
    uVar38 = 0;
    puVar30 = (uint *)local_a8;
    do {
      puVar37 = puVar30 + 1;
      bVar4 = bVar32 & 0x1f;
      bVar32 = bVar32 + 2;
      uVar38 = uVar38 | ((((uint)(byte)*puVar30 + (uint)*(byte *)((long)puVar30 + 1) +
                          (uint)*(byte *)((long)puVar30 + 2)) - (uVar33 + uVar36 + uVar26)) *
                         (uint)uVar6 >> 0x10 & 0xff) << bVar4;
      puVar30 = puVar37;
    } while (puVar37 != &local_68);
    local_60 = CONCAT44(uVar38,CONCAT22((local_64 & 0xf8) << 8 | (local_64 >> 8 & 0xfc) << 3 |
                                        (ushort)(local_62 >> 3),
                                        ((byte)local_60 & 0xf8) << 8 | (local_60._1_1_ & 0xfc) << 3
                                        | (ushort)(local_60._2_1_ >> 3)));
    goto LAB_00100a45;
  }
  goto LAB_00100a21;
code_r0x00100a18:
  puVar30 = puVar30 + 1;
  if (puVar30 == &local_68) goto LAB_00100a21;
  goto LAB_00100a08;
LAB_00100a21:
  local_60 = (ulong)((uint)((ushort)(uVar33 >> 5) & 0x7e0) | uVar33 >> 0x13 & 0x1f |
                    (uint)((ushort)(uVar33 << 8) & 0xf800)) << 0x10;
LAB_00100a45:
  pbVar29 = (byte *)&local_60;
  do {
    pbVar31 = pbVar29 + 1;
    pbVar29[4] = DxtcIndexTable[pbVar29[4]];
    pbVar29 = pbVar31;
  } while ((byte *)((long)&local_60 + 4) != pbVar31);
  puVar40 = puVar39 + 2;
  puVar39[1] = local_60;
  puVar39 = puVar40;
  if (puVar40 == param_2 + ((ulong)(param_3 - 1) + 1) * 2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_00100830;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CompressBc4(unsigned int const*, unsigned long*, unsigned int, unsigned long) */

void CompressBc4(uint *param_1,ulong *param_2,uint param_3,ulong param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  long lVar14;
  byte *pbVar15;
  byte bVar16;
  byte bVar17;
  int iVar18;
  ulong *puVar19;
  ulong *puVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long in_FS_OFFSET;
  uint3 uVar25;
  undefined1 auVar27 [16];
  undefined1 auVar31 [16];
  undefined1 auVar35 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar43 [16];
  undefined1 auVar47 [16];
  undefined1 auVar50 [16];
  undefined1 local_58 [16];
  byte local_48 [8];
  long local_40;
  uint7 uVar26;
  undefined1 auVar28 [16];
  undefined1 auVar32 [16];
  undefined1 auVar29 [16];
  undefined1 auVar33 [16];
  undefined1 auVar36 [16];
  undefined1 auVar30 [16];
  undefined1 auVar34 [16];
  undefined1 auVar37 [16];
  undefined1 auVar40 [16];
  undefined1 auVar44 [16];
  undefined1 auVar41 [16];
  undefined1 auVar45 [16];
  undefined1 auVar48 [16];
  undefined1 auVar42 [16];
  undefined1 auVar46 [16];
  undefined1 auVar49 [16];
  
  auVar12 = __LC0;
  iVar21 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar19 = param_2;
  do {
    puVar1 = (undefined2 *)(*(undefined1 (*) [16])param_1 + param_4 * 4);
    auVar39 = *(undefined1 (*) [16])param_1;
    iVar21 = iVar21 + 1;
    param_1 = (uint *)((long)param_1 + 0x10);
    puVar2 = (undefined2 *)(*(undefined1 (*) [16])(puVar1 + param_4 * 2) + param_4 * 4);
    auVar30._0_12_ = auVar39._0_12_;
    auVar30._12_2_ = auVar39._6_2_;
    auVar30._14_2_ = puVar1[3];
    auVar29._12_4_ = auVar30._12_4_;
    auVar29._0_10_ = auVar39._0_10_;
    auVar29._10_2_ = puVar1[2];
    auVar28._10_6_ = auVar29._10_6_;
    auVar28._0_8_ = auVar39._0_8_;
    auVar28._8_2_ = auVar39._4_2_;
    auVar8._2_8_ = auVar28._8_8_;
    auVar8._0_2_ = puVar1[1];
    auVar8._10_6_ = 0;
    auVar38._0_2_ = auVar39._0_2_;
    auVar27._12_4_ = 0;
    auVar27._0_12_ = SUB1612(auVar8 << 0x30,4);
    auVar27 = auVar27 << 0x20;
    auVar34._0_12_ = auVar27._0_12_;
    auVar34._12_2_ = puVar1[1];
    auVar34._14_2_ = puVar1[5];
    auVar33._12_4_ = auVar34._12_4_;
    auVar33._0_10_ = auVar27._0_10_;
    auVar33._10_2_ = auVar39._10_2_;
    auVar32._10_6_ = auVar33._10_6_;
    auVar32._0_8_ = auVar27._0_8_;
    auVar32._8_2_ = auVar39._2_2_;
    auVar9._2_8_ = auVar32._8_8_;
    auVar9._0_2_ = puVar1[4];
    auVar9._10_6_ = 0;
    auVar31._12_4_ = 0;
    auVar31._0_12_ = SUB1612(auVar9 << 0x30,4);
    auVar31 = auVar31 << 0x20;
    auVar27 = *(undefined1 (*) [16])(puVar1 + param_4 * 2);
    auVar37._0_12_ = auVar31._0_12_;
    auVar37._12_2_ = puVar1[4];
    auVar37._14_2_ = puVar1[6];
    auVar36._12_4_ = auVar37._12_4_;
    auVar36._0_10_ = auVar31._0_10_;
    auVar36._10_2_ = puVar1[2];
    auVar35._10_6_ = auVar36._10_6_;
    auVar35._0_8_ = auVar31._0_8_;
    auVar35._8_2_ = *puVar1;
    auVar38._8_8_ = auVar35._8_8_;
    auVar38._6_2_ = auVar39._12_2_;
    auVar38._4_2_ = auVar39._8_2_;
    auVar38._2_2_ = auVar39._4_2_;
    auVar42._0_12_ = auVar27._0_12_;
    auVar42._12_2_ = auVar27._6_2_;
    auVar42._14_2_ = puVar2[3];
    auVar41._12_4_ = auVar42._12_4_;
    auVar41._0_10_ = auVar27._0_10_;
    auVar41._10_2_ = puVar2[2];
    auVar40._10_6_ = auVar41._10_6_;
    auVar40._0_8_ = auVar27._0_8_;
    auVar40._8_2_ = auVar27._4_2_;
    auVar10._2_8_ = auVar40._8_8_;
    auVar10._0_2_ = puVar2[1];
    auVar10._10_6_ = 0;
    auVar50._0_2_ = auVar27._0_2_;
    auVar39._12_4_ = 0;
    auVar39._0_12_ = SUB1612(auVar10 << 0x30,4);
    auVar39 = auVar39 << 0x20;
    auVar38 = auVar38 & auVar12;
    auVar46._0_12_ = auVar39._0_12_;
    auVar46._12_2_ = puVar2[1];
    auVar46._14_2_ = puVar2[5];
    auVar45._12_4_ = auVar46._12_4_;
    auVar45._0_10_ = auVar39._0_10_;
    auVar45._10_2_ = auVar27._10_2_;
    auVar44._10_6_ = auVar45._10_6_;
    auVar44._0_8_ = auVar39._0_8_;
    auVar44._8_2_ = auVar27._2_2_;
    auVar11._2_8_ = auVar44._8_8_;
    auVar11._0_2_ = puVar2[4];
    auVar11._10_6_ = 0;
    auVar43._12_4_ = 0;
    auVar43._0_12_ = SUB1612(auVar11 << 0x30,4);
    auVar43 = auVar43 << 0x20;
    auVar49._0_12_ = auVar43._0_12_;
    auVar49._12_2_ = puVar2[4];
    auVar49._14_2_ = puVar2[6];
    auVar48._12_4_ = auVar49._12_4_;
    auVar48._0_10_ = auVar43._0_10_;
    auVar48._10_2_ = puVar2[2];
    auVar47._10_6_ = auVar48._10_6_;
    auVar47._0_8_ = auVar43._0_8_;
    auVar47._8_2_ = *puVar2;
    auVar50._8_8_ = auVar47._8_8_;
    auVar50._6_2_ = auVar27._12_2_;
    auVar50._4_2_ = auVar27._8_2_;
    auVar50._2_2_ = auVar27._4_2_;
    auVar50 = auVar50 & auVar12;
    sVar5 = auVar38._0_2_;
    sVar6 = auVar38._2_2_;
    sVar7 = auVar38._4_2_;
    uVar25 = CONCAT12((0 < sVar7) * (sVar7 < 0x100) * auVar38[4] - (0xff < sVar7),
                      CONCAT11((0 < sVar6) * (sVar6 < 0x100) * auVar38[2] - (0xff < sVar6),
                               (0 < sVar5) * (sVar5 < 0x100) * auVar38[0] - (0xff < sVar5)));
    sVar5 = auVar38._6_2_;
    iVar18 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * auVar38[6] - (0xff < sVar5),uVar25);
    sVar5 = auVar38._8_2_;
    sVar6 = auVar38._10_2_;
    sVar7 = auVar38._12_2_;
    uVar26 = CONCAT16((0 < sVar7) * (sVar7 < 0x100) * auVar38[0xc] - (0xff < sVar7),
                      CONCAT15((0 < sVar6) * (sVar6 < 0x100) * auVar38[10] - (0xff < sVar6),
                               CONCAT14((0 < sVar5) * (sVar5 < 0x100) * auVar38[8] - (0xff < sVar5),
                                        iVar18)));
    sVar5 = auVar38._14_2_;
    local_58._0_8_ = CONCAT17((0 < sVar5) * (sVar5 < 0x100) * auVar38[0xe] - (0xff < sVar5),uVar26);
    sVar5 = auVar50._0_2_;
    local_58[8] = (0 < sVar5) * (sVar5 < 0x100) * auVar50[0] - (0xff < sVar5);
    sVar5 = auVar50._2_2_;
    local_58[9] = (0 < sVar5) * (sVar5 < 0x100) * auVar50[2] - (0xff < sVar5);
    sVar5 = auVar50._4_2_;
    local_58[10] = (0 < sVar5) * (sVar5 < 0x100) * auVar50[4] - (0xff < sVar5);
    sVar5 = auVar50._6_2_;
    local_58[0xb] = (0 < sVar5) * (sVar5 < 0x100) * auVar50[6] - (0xff < sVar5);
    sVar5 = auVar50._8_2_;
    local_58[0xc] = (0 < sVar5) * (sVar5 < 0x100) * auVar50[8] - (0xff < sVar5);
    sVar5 = auVar50._10_2_;
    local_58[0xd] = (0 < sVar5) * (sVar5 < 0x100) * auVar50[10] - (0xff < sVar5);
    sVar5 = auVar50._12_2_;
    local_58[0xe] = (0 < sVar5) * (sVar5 < 0x100) * auVar50[0xc] - (0xff < sVar5);
    sVar5 = auVar50._14_2_;
    local_58[0xf] = (0 < sVar5) * (sVar5 < 0x100) * auVar50[0xe] - (0xff < sVar5);
    if ((long)iVar21 == param_4 >> 2) {
      iVar21 = 0;
      param_1 = (uint *)(*(undefined1 (*) [16])param_1 + param_4 * 0xc);
    }
    uVar23 = (ulong)uVar26 & 0xffffffff;
    uVar22 = (ulong)uVar26 & 0xffffffff;
    uVar13 = iVar18 * 0x100 + (uVar25 & 0xff);
    iVar18 = (uVar13 & 0xffff) + uVar13 * 0x10000;
    lVar14 = CONCAT44(iVar18,iVar18);
    if ((lVar14 != local_58._0_8_) || (uVar24 = (ulong)(uVar25 & 0xff), lVar14 != local_58._8_8_)) {
      pbVar15 = local_58 + 1;
      do {
        while( true ) {
          uVar13 = (uint)uVar22;
          bVar17 = *pbVar15;
          bVar16 = (byte)uVar23;
          if (bVar17 <= bVar16) break;
          pbVar15 = pbVar15 + 1;
          uVar23 = (ulong)(uint)bVar17;
          bVar16 = bVar17;
          if (local_48 == pbVar15) goto LAB_00100df2;
        }
        if (bVar17 < (byte)uVar22) {
          uVar22 = (ulong)(uint)bVar17;
        }
        uVar13 = (uint)uVar22;
        pbVar15 = pbVar15 + 1;
      } while (local_48 != pbVar15);
LAB_00100df2:
      uVar23 = 0;
      bVar17 = 0;
      pbVar15 = local_58;
      do {
        bVar3 = *pbVar15;
        pbVar15 = pbVar15 + 1;
        bVar4 = bVar17 & 0x3f;
        bVar17 = bVar17 + 3;
        uVar23 = uVar23 | (ulong)*(byte *)((long)&AlphaIndexTable +
                                          (ulong)((bVar3 - uVar13 & 0xff) *
                                                  (int)(0x10000 /
                                                       (long)(int)((bVar16 + 1) - (uVar13 & 0xff)))
                                                 >> 0xd)) << bVar4;
      } while (local_48 != pbVar15);
      uVar24 = uVar23 << 0x10 | (long)(int)((uVar13 & 0xff) << 8 | (uint)bVar16);
    }
    puVar20 = puVar19 + 1;
    *puVar19 = uVar24;
    puVar19 = puVar20;
    if (param_2 + (ulong)(param_3 - 1) + 1 == puVar20) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CompressBc5(unsigned int const*, unsigned long*, unsigned int, unsigned long) */

void CompressBc5(uint *param_1,ulong *param_2,uint param_3,ulong param_4)

{
  ushort *puVar1;
  ushort *puVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  ushort uVar6;
  short sVar7;
  ushort uVar8;
  short sVar9;
  ushort uVar10;
  short sVar11;
  ushort uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar18;
  uint uVar19;
  long lVar20;
  byte *pbVar21;
  byte bVar22;
  byte bVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  ulong *puVar27;
  ulong *puVar28;
  ulong uVar29;
  int iVar30;
  ulong uVar31;
  ulong uVar32;
  long in_FS_OFFSET;
  uint3 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar38 [16];
  undefined1 auVar42 [16];
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined1 auVar51 [16];
  undefined1 auVar55 [16];
  undefined1 auVar59 [16];
  uint3 uVar61;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  byte local_48 [8];
  long local_40;
  undefined1 auVar35 [16];
  undefined1 auVar39 [16];
  undefined1 auVar36 [16];
  undefined1 auVar40 [16];
  undefined1 auVar43 [16];
  undefined1 auVar37 [16];
  undefined1 auVar41 [16];
  undefined1 auVar44 [16];
  ushort uVar46;
  undefined1 auVar48 [16];
  undefined1 auVar52 [16];
  undefined1 auVar56 [16];
  undefined1 auVar49 [16];
  undefined1 auVar53 [16];
  undefined1 auVar57 [16];
  undefined1 auVar50 [16];
  undefined1 auVar54 [16];
  undefined1 auVar58 [16];
  ushort uVar60;
  uint7 uVar62;
  
  auVar17 = __LC0;
  iVar30 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar27 = param_2;
  do {
    puVar2 = (ushort *)(*(undefined1 (*) [16])param_1 + param_4 * 4);
    auVar59 = *(undefined1 (*) [16])param_1;
    iVar30 = iVar30 + 1;
    uVar6 = puVar2[2];
    uVar8 = puVar2[4];
    param_1 = (uint *)((long)param_1 + 0x10);
    puVar1 = (ushort *)(*(undefined1 (*) [16])(puVar2 + param_4 * 2) + param_4 * 4);
    uVar10 = puVar1[2];
    uVar12 = puVar1[4];
    auVar37._0_12_ = auVar59._0_12_;
    auVar37._12_2_ = auVar59._6_2_;
    auVar37._14_2_ = puVar2[3];
    auVar36._12_4_ = auVar37._12_4_;
    auVar36._0_10_ = auVar59._0_10_;
    auVar36._10_2_ = uVar6;
    uVar46 = auVar59._4_2_;
    auVar35._10_6_ = auVar36._10_6_;
    auVar35._0_8_ = auVar59._0_8_;
    auVar35._8_2_ = uVar46;
    auVar13._2_8_ = auVar35._8_8_;
    auVar13._0_2_ = puVar2[1];
    auVar13._10_6_ = 0;
    auVar45._0_2_ = auVar59._0_2_;
    auVar34._12_4_ = 0;
    auVar34._0_12_ = SUB1612(auVar13 << 0x30,4);
    auVar34 = auVar34 << 0x20;
    auVar41._0_12_ = auVar34._0_12_;
    auVar41._12_2_ = puVar2[1];
    auVar41._14_2_ = puVar2[5];
    auVar40._12_4_ = auVar41._12_4_;
    auVar40._0_10_ = auVar34._0_10_;
    auVar40._10_2_ = auVar59._10_2_;
    auVar39._10_6_ = auVar40._10_6_;
    auVar39._0_8_ = auVar34._0_8_;
    auVar39._8_2_ = auVar59._2_2_;
    auVar14._2_8_ = auVar39._8_8_;
    auVar14._0_2_ = uVar8;
    auVar14._10_6_ = 0;
    auVar38._12_4_ = 0;
    auVar38._0_12_ = SUB1612(auVar14 << 0x30,4);
    auVar38 = auVar38 << 0x20;
    auVar34 = *(undefined1 (*) [16])(puVar2 + param_4 * 2);
    auVar44._0_12_ = auVar38._0_12_;
    auVar44._12_2_ = uVar8;
    auVar44._14_2_ = puVar2[6];
    auVar43._12_4_ = auVar44._12_4_;
    auVar43._0_10_ = auVar38._0_10_;
    auVar43._10_2_ = uVar6;
    auVar42._10_6_ = auVar43._10_6_;
    auVar42._0_8_ = auVar38._0_8_;
    auVar42._8_2_ = *puVar2;
    auVar45._8_8_ = auVar42._8_8_;
    auVar45._6_2_ = auVar59._12_2_;
    auVar45._4_2_ = auVar59._8_2_;
    auVar45._2_2_ = uVar46;
    auVar50._0_12_ = auVar34._0_12_;
    auVar50._12_2_ = auVar34._6_2_;
    auVar50._14_2_ = puVar1[3];
    auVar49._12_4_ = auVar50._12_4_;
    auVar49._0_10_ = auVar34._0_10_;
    auVar49._10_2_ = uVar10;
    uVar60 = auVar34._4_2_;
    auVar48._10_6_ = auVar49._10_6_;
    auVar48._0_8_ = auVar34._0_8_;
    auVar48._8_2_ = uVar60;
    auVar15._2_8_ = auVar48._8_8_;
    auVar15._0_2_ = puVar1[1];
    auVar15._10_6_ = 0;
    auVar55._0_2_ = auVar34._0_2_;
    auVar47._12_4_ = 0;
    auVar47._0_12_ = SUB1612(auVar15 << 0x30,4);
    auVar47 = auVar47 << 0x20;
    auVar54._0_12_ = auVar47._0_12_;
    auVar54._12_2_ = puVar1[1];
    auVar54._14_2_ = puVar1[5];
    auVar53._12_4_ = auVar54._12_4_;
    auVar53._0_10_ = auVar47._0_10_;
    auVar53._10_2_ = auVar34._10_2_;
    auVar52._10_6_ = auVar53._10_6_;
    auVar52._0_8_ = auVar47._0_8_;
    auVar52._8_2_ = auVar34._2_2_;
    auVar16._2_8_ = auVar52._8_8_;
    auVar16._0_2_ = uVar12;
    auVar16._10_6_ = 0;
    auVar51._12_4_ = 0;
    auVar51._0_12_ = SUB1612(auVar16 << 0x30,4);
    auVar51 = auVar51 << 0x20;
    auVar58._0_12_ = auVar51._0_12_;
    auVar58._12_2_ = uVar12;
    auVar58._14_2_ = puVar1[6];
    auVar57._12_4_ = auVar58._12_4_;
    auVar57._0_10_ = auVar51._0_10_;
    auVar57._10_2_ = uVar10;
    auVar56._10_6_ = auVar57._10_6_;
    auVar56._0_8_ = auVar51._0_8_;
    auVar56._8_2_ = *puVar1;
    auVar55._8_8_ = auVar56._8_8_;
    auVar55._6_2_ = auVar34._12_2_;
    auVar55._4_2_ = auVar34._8_2_;
    auVar55._2_2_ = uVar60;
    auVar63._0_2_ = auVar45._0_2_ >> 8;
    auVar63._2_2_ = uVar46 >> 8;
    auVar63._4_2_ = auVar59._8_2_ >> 8;
    auVar63._6_2_ = auVar59._12_2_ >> 8;
    auVar63._8_2_ = *puVar2 >> 8;
    auVar63._10_2_ = uVar6 >> 8;
    auVar63._12_2_ = uVar8 >> 8;
    auVar63._14_2_ = puVar2[6] >> 8;
    auVar45 = auVar45 & auVar17;
    auVar63 = auVar63 & auVar17;
    auVar59 = auVar55 & auVar17;
    auVar64._0_2_ = auVar55._0_2_ >> 8;
    auVar64._2_2_ = uVar60 >> 8;
    auVar64._4_2_ = auVar34._8_2_ >> 8;
    auVar64._6_2_ = auVar34._12_2_ >> 8;
    auVar64._8_2_ = *puVar1 >> 8;
    auVar64._10_2_ = uVar10 >> 8;
    auVar64._12_2_ = uVar12 >> 8;
    auVar64._14_2_ = puVar1[6] >> 8;
    sVar5 = auVar45._0_2_;
    sVar7 = auVar45._2_2_;
    sVar9 = auVar45._4_2_;
    uVar33 = CONCAT12((0 < sVar9) * (sVar9 < 0x100) * auVar45[4] - (0xff < sVar9),
                      CONCAT11((0 < sVar7) * (sVar7 < 0x100) * auVar45[2] - (0xff < sVar7),
                               (0 < sVar5) * (sVar5 < 0x100) * auVar45[0] - (0xff < sVar5)));
    sVar5 = auVar45._6_2_;
    uVar19 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * auVar45[6] - (0xff < sVar5),uVar33);
    sVar5 = auVar45._8_2_;
    sVar7 = auVar45._10_2_;
    sVar9 = auVar45._12_2_;
    sVar11 = auVar45._14_2_;
    local_68._0_8_ =
         CONCAT17((0 < sVar11) * (sVar11 < 0x100) * auVar45[0xe] - (0xff < sVar11),
                  CONCAT16((0 < sVar9) * (sVar9 < 0x100) * auVar45[0xc] - (0xff < sVar9),
                           CONCAT15((0 < sVar7) * (sVar7 < 0x100) * auVar45[10] - (0xff < sVar7),
                                    CONCAT14((0 < sVar5) * (sVar5 < 0x100) * auVar45[8] -
                                             (0xff < sVar5),uVar19))));
    sVar5 = auVar59._0_2_;
    local_68[8] = (0 < sVar5) * (sVar5 < 0x100) * auVar59[0] - (0xff < sVar5);
    sVar5 = auVar59._2_2_;
    local_68[9] = (0 < sVar5) * (sVar5 < 0x100) * auVar59[2] - (0xff < sVar5);
    sVar5 = auVar59._4_2_;
    local_68[10] = (0 < sVar5) * (sVar5 < 0x100) * auVar59[4] - (0xff < sVar5);
    sVar5 = auVar59._6_2_;
    local_68[0xb] = (0 < sVar5) * (sVar5 < 0x100) * auVar59[6] - (0xff < sVar5);
    sVar5 = auVar59._8_2_;
    local_68[0xc] = (0 < sVar5) * (sVar5 < 0x100) * auVar59[8] - (0xff < sVar5);
    sVar5 = auVar59._10_2_;
    local_68[0xd] = (0 < sVar5) * (sVar5 < 0x100) * auVar59[10] - (0xff < sVar5);
    sVar5 = auVar59._12_2_;
    local_68[0xe] = (0 < sVar5) * (sVar5 < 0x100) * auVar59[0xc] - (0xff < sVar5);
    sVar5 = auVar59._14_2_;
    local_68[0xf] = (0 < sVar5) * (sVar5 < 0x100) * auVar59[0xe] - (0xff < sVar5);
    auVar64 = auVar64 & auVar17;
    uVar6 = auVar63._0_2_;
    uVar8 = auVar63._2_2_;
    uVar10 = auVar63._4_2_;
    uVar61 = CONCAT12((uVar10 != 0) * (uVar10 < 0x100) * auVar63[4] - (0xff < uVar10),
                      CONCAT11((uVar8 != 0) * (uVar8 < 0x100) * auVar63[2] - (0xff < uVar8),
                               (uVar6 != 0) * (uVar6 < 0x100) * auVar63[0] - (0xff < uVar6)));
    uVar6 = auVar63._6_2_;
    iVar26 = CONCAT13((uVar6 != 0) * (uVar6 < 0x100) * auVar63[6] - (0xff < uVar6),uVar61);
    sVar5 = auVar63._8_2_;
    sVar7 = auVar63._10_2_;
    sVar9 = auVar63._12_2_;
    uVar62 = CONCAT16((0 < sVar9) * (sVar9 < 0x100) * auVar63[0xc] - (0xff < sVar9),
                      CONCAT15((0 < sVar7) * (sVar7 < 0x100) * auVar63[10] - (0xff < sVar7),
                               CONCAT14((0 < sVar5) * (sVar5 < 0x100) * auVar63[8] - (0xff < sVar5),
                                        iVar26)));
    sVar5 = auVar63._14_2_;
    local_58._0_8_ = CONCAT17((0 < sVar5) * (sVar5 < 0x100) * auVar63[0xe] - (0xff < sVar5),uVar62);
    uVar6 = auVar64._0_2_;
    local_58[8] = (uVar6 != 0) * (uVar6 < 0x100) * auVar64[0] - (0xff < uVar6);
    uVar6 = auVar64._2_2_;
    local_58[9] = (uVar6 != 0) * (uVar6 < 0x100) * auVar64[2] - (0xff < uVar6);
    uVar6 = auVar64._4_2_;
    local_58[10] = (uVar6 != 0) * (uVar6 < 0x100) * auVar64[4] - (0xff < uVar6);
    uVar6 = auVar64._6_2_;
    local_58[0xb] = (uVar6 != 0) * (uVar6 < 0x100) * auVar64[6] - (0xff < uVar6);
    sVar5 = auVar64._8_2_;
    local_58[0xc] = (0 < sVar5) * (sVar5 < 0x100) * auVar64[8] - (0xff < sVar5);
    sVar5 = auVar64._10_2_;
    local_58[0xd] = (0 < sVar5) * (sVar5 < 0x100) * auVar64[10] - (0xff < sVar5);
    sVar5 = auVar64._12_2_;
    local_58[0xe] = (0 < sVar5) * (sVar5 < 0x100) * auVar64[0xc] - (0xff < sVar5);
    sVar5 = auVar64._14_2_;
    local_58[0xf] = (0 < sVar5) * (sVar5 < 0x100) * auVar64[0xe] - (0xff < sVar5);
    auVar59 = local_58;
    if ((long)iVar30 == param_4 >> 2) {
      iVar30 = 0;
      param_1 = (uint *)(*(undefined1 (*) [16])param_1 + param_4 * 0xc);
    }
    uVar18 = uVar19 * 0x100 + (uVar33 & 0xff);
    iVar24 = (uVar18 & 0xffff) + uVar18 * 0x10000;
    lVar20 = CONCAT44(iVar24,iVar24);
    if ((lVar20 == local_68._0_8_) && (lVar20 == local_68._8_8_)) {
      uVar31 = (ulong)(uVar33 & 0xff);
    }
    else {
      pbVar21 = local_68 + 1;
      uVar18 = uVar19;
      do {
        while( true ) {
          bVar22 = *pbVar21;
          uVar25 = (uint)bVar22;
          if (bVar22 <= (byte)uVar18) break;
          pbVar21 = pbVar21 + 1;
          uVar18 = uVar25;
          if (pbVar21 == local_58) goto LAB_0010101a;
        }
        if (bVar22 < (byte)uVar19) {
          uVar19 = uVar25;
        }
        pbVar21 = pbVar21 + 1;
      } while (pbVar21 != local_58);
LAB_0010101a:
      uVar31 = 0;
      bVar22 = 0;
      pbVar21 = local_68;
      do {
        bVar23 = *pbVar21;
        pbVar21 = pbVar21 + 1;
        bVar3 = bVar22 & 0x3f;
        bVar22 = bVar22 + 3;
        uVar31 = uVar31 | (ulong)*(byte *)((long)&AlphaIndexTable +
                                          (ulong)((bVar23 - uVar19 & 0xff) *
                                                  (int)(0x10000 /
                                                       (long)(int)(((uVar18 & 0xff) + 1) -
                                                                  (uVar19 & 0xff))) >> 0xd)) <<
                          bVar3;
      } while (local_58 != pbVar21);
      uVar31 = (long)(int)((uVar19 & 0xff) << 8 | uVar18 & 0xff) | uVar31 << 0x10;
    }
    *puVar27 = uVar31;
    uVar31 = (ulong)uVar62 & 0xffffffff;
    uVar29 = (ulong)uVar62 & 0xffffffff;
    uVar19 = iVar26 * 0x100 + (uVar61 & 0xff);
    iVar26 = (uVar19 & 0xffff) + uVar19 * 0x10000;
    lVar20 = CONCAT44(iVar26,iVar26);
    if ((lVar20 != local_58._0_8_) || (uVar32 = (ulong)(uVar61 & 0xff), lVar20 != local_58._8_8_)) {
      pbVar21 = local_58 + 1;
      do {
        while( true ) {
          uVar19 = (uint)uVar29;
          bVar22 = *pbVar21;
          bVar23 = (byte)uVar31;
          if (bVar22 <= bVar23) break;
          pbVar21 = pbVar21 + 1;
          uVar31 = (ulong)(uint)bVar22;
          bVar23 = bVar22;
          if (local_48 == pbVar21) goto LAB_001010e2;
        }
        if (bVar22 < (byte)uVar29) {
          uVar29 = (ulong)(uint)bVar22;
        }
        uVar19 = (uint)uVar29;
        pbVar21 = pbVar21 + 1;
      } while (local_48 != pbVar21);
LAB_001010e2:
      uVar31 = 0;
      pbVar21 = local_58;
      bVar22 = 0;
      do {
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + 1;
        bVar4 = bVar22 & 0x3f;
        bVar22 = bVar22 + 3;
        uVar31 = uVar31 | (ulong)*(byte *)((long)&AlphaIndexTable +
                                          (ulong)((bVar3 - uVar19 & 0xff) *
                                                  (int)(0x10000 /
                                                       (long)(int)((bVar23 + 1) - (uVar19 & 0xff)))
                                                 >> 0xd)) << bVar4;
      } while (local_48 != pbVar21);
      uVar32 = uVar31 << 0x10 | (long)(int)((uVar19 & 0xff) << 8 | (uint)bVar23);
    }
    puVar28 = puVar27 + 2;
    puVar27[1] = uVar32;
    puVar27 = puVar28;
    if (param_2 + ((ulong)(param_3 - 1) + 1) * 2 == puVar28) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      local_58 = auVar59;
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


