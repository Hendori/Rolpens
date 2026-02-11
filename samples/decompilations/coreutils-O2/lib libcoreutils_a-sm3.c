
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sm3_init_ctx(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_00102f68;
  uVar1 = __LC0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  uVar1 = _UNK_00102f78;
  param_1[2] = __LC1;
  param_1[3] = uVar1;
  return;
}



void sm3_read_ctx(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    uVar1 = *(uint *)(param_1 + lVar2);
    *(uint *)(param_2 + lVar2) =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x20);
  return;
}



void sm3_process_block(ulong param_1,ulong param_2,uint *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
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
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  long in_FS_OFFSET;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  ulong local_a8;
  uint local_88 [18];
  long local_40;
  
  local_c8 = *param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c4 = param_3[1];
  local_c0 = param_3[2];
  local_b4 = param_3[3];
  local_b0 = param_3[4];
  uVar7 = param_1 + (param_2 & 0xfffffffffffffffc);
  local_bc = param_3[5];
  local_b8 = param_3[6];
  local_ac = param_3[7];
  uVar4 = param_3[8];
  param_3[8] = (uint)param_2 + param_3[8];
  param_3[9] = (int)(param_2 >> 0x20) + param_3[9] + (uint)CARRY4((uint)param_2,uVar4);
  local_a8 = param_1;
  if (param_1 < uVar7) {
    do {
      lVar1 = 0;
      do {
        uVar4 = *(uint *)(local_a8 + lVar1);
        *(uint *)((long)local_88 + lVar1) =
             uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
        lVar1 = lVar1 + 4;
      } while (lVar1 != 0x40);
      uVar8 = local_c8 << 0xc | local_c8 >> 0x14;
      uVar4 = uVar8 + 0x79cc4519 + local_b0;
      uVar2 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar9 = (uVar8 ^ uVar2) +
              (local_88[4] ^ local_88[0]) + local_b4 + (local_c8 ^ local_c4 ^ local_c0);
      uVar3 = local_c4 << 9 | local_c4 >> 0x17;
      uVar5 = local_bc >> 0xd | local_bc << 0x13;
      local_a8 = local_a8 + 0x40;
      uVar2 = uVar2 + (local_bc ^ local_b0 ^ local_b8) + local_ac + local_88[0];
      uVar11 = uVar9 * 0x1000 | uVar9 >> 0x14;
      uVar2 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 >> 0xf | uVar2 * 0x20000);
      uVar4 = uVar11 + 0xf3988a32 + uVar2;
      uVar8 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar12 = (uVar11 ^ uVar8) +
               (local_88[5] ^ local_88[1]) + local_c0 + (local_c8 ^ uVar3 ^ uVar9);
      uVar22 = local_c8 << 9 | local_c8 >> 0x17;
      uVar8 = uVar8 + (local_b0 ^ uVar5 ^ uVar2) + local_88[1] + local_b8;
      uVar11 = local_b0 >> 0xd | local_b0 << 0x13;
      uVar8 = uVar8 ^ (uVar8 * 0x200 | uVar8 >> 0x17) ^ (uVar8 >> 0xf | uVar8 * 0x20000);
      uVar6 = uVar12 * 0x1000 | uVar12 >> 0x14;
      uVar4 = uVar6 + 0xe7311465 + uVar8;
      uVar10 = uVar9 * 0x200 | uVar9 >> 0x17;
      uVar15 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar19 = (uVar6 ^ uVar15) + (local_88[2] ^ local_88[6]) + uVar3 + (uVar9 ^ uVar22 ^ uVar12);
      uVar6 = uVar2 >> 0xd | uVar2 << 0x13;
      uVar15 = uVar5 + local_88[2] + (uVar2 ^ uVar11 ^ uVar8) + uVar15;
      uVar15 = uVar15 ^ (uVar15 * 0x200 | uVar15 >> 0x17) ^ (uVar15 >> 0xf | uVar15 * 0x20000);
      uVar2 = uVar19 * 0x1000 | uVar19 >> 0x14;
      uVar4 = uVar2 + 0xce6228cb + uVar15;
      uVar3 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar13 = uVar12 * 0x200 | uVar12 >> 0x17;
      uVar22 = (uVar2 ^ uVar3) + (local_88[3] ^ local_88[7]) + uVar22 + (uVar12 ^ uVar10 ^ uVar19);
      uVar2 = uVar8 >> 0xd | uVar8 << 0x13;
      uVar3 = uVar11 + local_88[3] + (uVar8 ^ uVar6 ^ uVar15) + uVar3;
      uVar3 = uVar3 ^ (uVar3 * 0x200 | uVar3 >> 0x17) ^ (uVar3 >> 0xf | uVar3 * 0x20000);
      uVar8 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar4 = uVar8 + 0x9cc45197 + uVar3;
      uVar20 = uVar19 * 0x200 | uVar19 >> 0x17;
      uVar12 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar9 = uVar15 >> 0xd | uVar15 << 0x13;
      uVar5 = (uVar8 ^ uVar12) + (local_88[4] ^ local_88[8]) + uVar10 + (uVar19 ^ uVar13 ^ uVar22);
      uVar12 = (uVar15 ^ uVar2 ^ uVar3) + uVar6 + local_88[4] + uVar12;
      uVar12 = uVar12 ^ (uVar12 * 0x200 | uVar12 >> 0x17) ^ (uVar12 >> 0xf | uVar12 * 0x20000);
      uVar8 = uVar5 * 0x1000 | uVar5 >> 0x14;
      uVar4 = uVar8 + 0x3988a32f + uVar12;
      uVar19 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar6 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar11 = uVar3 >> 0xd | uVar3 << 0x13;
      uVar10 = (uVar8 ^ uVar6) + (local_88[5] ^ local_88[9]) + uVar13 + (uVar22 ^ uVar20 ^ uVar5);
      uVar6 = (uVar3 ^ uVar9 ^ uVar12) + uVar2 + local_88[5] + uVar6;
      uVar6 = uVar6 ^ (uVar6 * 0x200 | uVar6 >> 0x17) ^ (uVar6 >> 0xf | uVar6 * 0x20000);
      uVar2 = uVar10 * 0x1000 | uVar10 >> 0x14;
      uVar4 = uVar2 + 0x7311465e + uVar6;
      uVar8 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar13 = (uVar2 ^ uVar8) + (local_88[6] ^ local_88[10]) + uVar20 + (uVar5 ^ uVar19 ^ uVar10);
      uVar2 = uVar5 * 0x200 | uVar5 >> 0x17;
      uVar5 = uVar12 >> 0xd | uVar12 << 0x13;
      uVar8 = (uVar12 ^ uVar11 ^ uVar6) + uVar9 + local_88[6] + uVar8;
      uVar8 = uVar8 ^ (uVar8 * 0x200 | uVar8 >> 0x17) ^ (uVar8 >> 0xf | uVar8 * 0x20000);
      uVar3 = uVar13 * 0x1000 | uVar13 >> 0x14;
      uVar4 = uVar3 + 0xe6228cbc + uVar8;
      uVar12 = uVar10 * 0x200 | uVar10 >> 0x17;
      uVar15 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar22 = (uVar3 ^ uVar15) + (local_88[7] ^ local_88[0xb]) + uVar19 + (uVar10 ^ uVar2 ^ uVar13)
      ;
      uVar3 = uVar6 >> 0xd | uVar6 << 0x13;
      uVar15 = (uVar6 ^ uVar5 ^ uVar8) + uVar11 + local_88[7] + uVar15;
      uVar15 = uVar15 ^ (uVar15 * 0x200 | uVar15 >> 0x17) ^ (uVar15 >> 0xf | uVar15 * 0x20000);
      uVar6 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar4 = uVar6 + 0xcc451979 + uVar15;
      uVar10 = uVar13 * 0x200 | uVar13 >> 0x17;
      uVar11 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar13 = (uVar6 ^ uVar11) + (local_88[8] ^ local_88[0xc]) + uVar2 + (uVar13 ^ uVar12 ^ uVar22)
      ;
      uVar2 = uVar8 >> 0xd | uVar8 << 0x13;
      uVar11 = (uVar8 ^ uVar3 ^ uVar15) + uVar5 + local_88[8] + uVar11;
      uVar11 = uVar11 ^ (uVar11 * 0x200 | uVar11 >> 0x17) ^ (uVar11 >> 0xf | uVar11 * 0x20000);
      uVar8 = uVar13 * 0x1000 | uVar13 >> 0x14;
      uVar4 = uVar8 + 0x988a32f3 + uVar11;
      uVar9 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar5 = (uVar8 ^ uVar9) + (local_88[9] ^ local_88[0xd]) + uVar12 + (uVar22 ^ uVar10 ^ uVar13);
      uVar12 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar9 = (uVar15 ^ uVar2 ^ uVar11) + uVar3 + local_88[9] + uVar9;
      uVar15 = uVar15 >> 0xd | uVar15 << 0x13;
      uVar9 = uVar9 ^ (uVar9 * 0x200 | uVar9 >> 0x17) ^ (uVar9 >> 0xf | uVar9 * 0x20000);
      uVar8 = uVar5 * 0x1000 | uVar5 >> 0x14;
      uVar4 = uVar8 + 0x311465e7 + uVar9;
      uVar22 = uVar13 * 0x200 | uVar13 >> 0x17;
      uVar6 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar3 = uVar11 >> 0xd | uVar11 << 0x13;
      uVar10 = (uVar8 ^ uVar6) + (local_88[10] ^ local_88[0xe]) + uVar10 + (uVar13 ^ uVar12 ^ uVar5)
      ;
      uVar6 = (uVar11 ^ uVar15 ^ uVar9) + uVar2 + local_88[10] + uVar6;
      uVar6 = uVar6 ^ (uVar6 * 0x200 | uVar6 >> 0x17) ^ (uVar6 >> 0xf | uVar6 * 0x20000);
      uVar11 = uVar10 * 0x1000 | uVar10 >> 0x14;
      uVar4 = uVar11 + 0x6228cbce + uVar6;
      uVar8 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar2 = uVar5 * 0x200 | uVar5 >> 0x17;
      uVar13 = (uVar11 ^ uVar8) +
               (local_88[0xb] ^ local_88[0xf]) + uVar12 + (uVar5 ^ uVar22 ^ uVar10);
      uVar12 = uVar9 >> 0xd | uVar9 << 0x13;
      uVar8 = (uVar9 ^ uVar3 ^ uVar6) + uVar15 + local_88[0xb] + uVar8;
      uVar8 = uVar8 ^ (uVar8 * 0x200 | uVar8 >> 0x17) ^ (uVar8 >> 0xf | uVar8 * 0x20000);
      uVar5 = uVar13 * 0x1000 | uVar13 >> 0x14;
      uVar4 = uVar5 + 0xc451979c + uVar8;
      uVar11 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = local_88[0] ^ local_88[7] ^ (local_88[0xd] << 0xf | local_88[0xd] >> 0x11);
      uVar32 = (uVar4 << 0xf | uVar4 >> 0x11) ^
               (local_88[3] << 7 | local_88[3] >> 0x19) ^ local_88[10] ^ uVar4 ^
               (uVar4 >> 9 | uVar4 << 0x17);
      uVar9 = uVar10 * 0x200 | uVar10 >> 0x17;
      uVar22 = (uVar5 ^ uVar11) + (local_88[0xc] ^ uVar32) + uVar22 + (uVar10 ^ uVar2 ^ uVar13);
      uVar5 = uVar6 >> 0xd | uVar6 << 0x13;
      uVar11 = uVar3 + local_88[0xc] + (uVar6 ^ uVar12 ^ uVar8) + uVar11;
      uVar3 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar11 = uVar11 ^ (uVar11 * 0x200 | uVar11 >> 0x17) ^ (uVar11 >> 0xf | uVar11 * 0x20000);
      uVar4 = uVar3 + 0x88a32f39 + uVar11;
      uVar15 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = local_88[8] ^ local_88[1] ^ (local_88[0xe] << 0xf | local_88[0xe] >> 0x11);
      uVar25 = (uVar4 << 0xf | uVar4 >> 0x11) ^
               (local_88[4] << 7 | local_88[4] >> 0x19) ^ local_88[0xb] ^ uVar4 ^
               (uVar4 >> 9 | uVar4 << 0x17);
      uVar10 = (uVar3 ^ uVar15) + (local_88[0xd] ^ uVar25) + uVar2 + (uVar13 ^ uVar9 ^ uVar22);
      uVar2 = uVar8 >> 0xd | uVar8 << 0x13;
      uVar3 = uVar13 * 0x200 | uVar13 >> 0x17;
      uVar15 = uVar12 + local_88[0xd] + (uVar8 ^ uVar5 ^ uVar11) + uVar15;
      uVar15 = uVar15 ^ (uVar15 * 0x200 | uVar15 >> 0x17) ^ (uVar15 >> 0xf | uVar15 * 0x20000);
      uVar8 = uVar10 * 0x1000 | uVar10 >> 0x14;
      uVar4 = uVar8 + 0x11465e73 + uVar15;
      uVar12 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = local_88[2] ^ local_88[9] ^ (local_88[0xf] << 0xf | local_88[0xf] >> 0x11);
      uVar29 = (uVar4 << 0xf | uVar4 >> 0x11) ^
               (local_88[5] << 7 | local_88[5] >> 0x19) ^ local_88[0xc] ^ uVar4 ^
               (uVar4 >> 9 | uVar4 << 0x17);
      uVar6 = (uVar8 ^ uVar12) + (local_88[0xe] ^ uVar29) + uVar9 + (uVar22 ^ uVar3 ^ uVar10);
      uVar9 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar12 = (uVar11 ^ uVar2 ^ uVar15) + uVar5 + local_88[0xe] + uVar12;
      uVar11 = uVar11 >> 0xd | uVar11 << 0x13;
      uVar12 = uVar12 ^ (uVar12 * 0x200 | uVar12 >> 0x17) ^ (uVar12 >> 0xf | uVar12 * 0x20000);
      uVar5 = uVar6 * 0x1000 | uVar6 >> 0x14;
      uVar4 = uVar5 + 0x228cbce6 + uVar12;
      uVar8 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = local_88[3] ^ local_88[10] ^ (uVar32 << 0xf | uVar32 >> 0x11);
      uVar23 = (uVar4 << 0xf | uVar4 >> 0x11) ^
               (local_88[6] << 7 | local_88[6] >> 0x19) ^ local_88[0xd] ^ uVar4 ^
               (uVar4 >> 9 | uVar4 << 0x17);
      uVar3 = (uVar5 ^ uVar8) + (uVar23 ^ local_88[0xf]) + uVar3 + (uVar10 ^ uVar9 ^ uVar6);
      uVar10 = uVar10 * 0x200 | uVar10 >> 0x17;
      uVar8 = (uVar15 ^ uVar11 ^ uVar12) + uVar2 + local_88[0xf] + uVar8;
      uVar5 = uVar15 >> 0xd | uVar15 << 0x13;
      uVar8 = uVar8 ^ (uVar8 * 0x200 | uVar8 >> 0x17) ^ (uVar8 >> 0xf | uVar8 * 0x20000);
      uVar2 = uVar3 * 0x1000 | uVar3 >> 0x14;
      uVar4 = uVar2 + 0x9d8a7a87 + uVar8;
      uVar15 = local_88[4] ^ local_88[0xb] ^ (uVar25 << 0xf | uVar25 >> 0x11);
      uVar4 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar30 = (uVar15 << 0xf | uVar15 >> 0x11) ^
               (local_88[7] << 7 | local_88[7] >> 0x19) ^ local_88[0xe] ^ uVar15 ^
               (uVar15 >> 9 | uVar15 << 0x17);
      uVar22 = (uVar2 ^ uVar4) +
               (uVar30 ^ uVar32) + uVar9 + (uVar6 & uVar10 | (uVar6 | uVar10) & uVar3);
      uVar15 = uVar12 >> 0xd | uVar12 << 0x13;
      uVar2 = ((uVar12 ^ uVar5) & uVar8 ^ uVar5) + uVar11 + uVar32 + uVar4;
      uVar11 = uVar6 * 0x200 | uVar6 >> 0x17;
      uVar2 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 >> 0xf | uVar2 * 0x20000);
      uVar6 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar4 = uVar6 + 0x3b14f50f + uVar2;
      uVar9 = local_88[5] ^ local_88[0xc] ^ (uVar29 << 0xf | uVar29 >> 0x11);
      uVar4 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar24 = (uVar9 << 0xf | uVar9 >> 0x11) ^
               (local_88[8] << 7 | local_88[8] >> 0x19) ^ local_88[0xf] ^ uVar9 ^
               (uVar9 >> 9 | uVar9 << 0x17);
      uVar12 = (uVar6 ^ uVar4) +
               (uVar24 ^ uVar25) + uVar10 + (uVar3 & uVar11 | (uVar3 | uVar11) & uVar22);
      uVar10 = uVar8 >> 0xd | uVar8 << 0x13;
      uVar6 = uVar3 * 0x200 | uVar3 >> 0x17;
      uVar8 = ((uVar8 ^ uVar15) & uVar2 ^ uVar15) + uVar5 + uVar25 + uVar4;
      uVar3 = uVar12 * 0x1000 | uVar12 >> 0x14;
      uVar8 = uVar8 ^ (uVar8 * 0x200 | uVar8 >> 0x17) ^ (uVar8 >> 0xf | uVar8 * 0x20000);
      uVar4 = uVar3 + 0x7629ea1e + uVar8;
      uVar9 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = local_88[6] ^ local_88[0xd] ^ (uVar23 << 0xf | uVar23 >> 0x11);
      uVar13 = (uVar4 >> 9 | uVar4 << 0x17) ^
               (uVar4 << 0xf | uVar4 >> 0x11) ^
               (local_88[9] << 7 | local_88[9] >> 0x19) ^ uVar32 ^ uVar4;
      uVar5 = (uVar3 ^ uVar9) +
              (uVar29 ^ uVar13) + uVar11 + (uVar22 & uVar6 | (uVar22 | uVar6) & uVar12);
      uVar11 = uVar2 >> 0xd | uVar2 << 0x13;
      uVar26 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar2 = ((uVar2 ^ uVar10) & uVar8 ^ uVar10) + uVar15 + uVar29 + uVar9;
      uVar2 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 >> 0xf | uVar2 * 0x20000);
      uVar3 = uVar5 * 0x1000 | uVar5 >> 0x14;
      uVar4 = uVar3 + 0xec53d43c + uVar2;
      uVar15 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = local_88[7] ^ local_88[0xe] ^ (uVar30 << 0xf | uVar30 >> 0x11);
      uVar22 = (uVar4 >> 9 | uVar4 << 0x17) ^
               (uVar4 << 0xf | uVar4 >> 0x11) ^
               (local_88[10] << 7 | local_88[10] >> 0x19) ^ uVar25 ^ uVar4;
      uVar20 = (uVar3 ^ uVar15) +
               (uVar23 ^ uVar22) + uVar6 + (uVar12 & uVar26 | (uVar12 | uVar26) & uVar5);
      uVar9 = uVar8 >> 0xd | uVar8 << 0x13;
      uVar21 = uVar12 * 0x200 | uVar12 >> 0x17;
      uVar3 = ((uVar8 ^ uVar11) & uVar2 ^ uVar11) + uVar10 + uVar23 + uVar15;
      uVar3 = uVar3 ^ (uVar3 * 0x200 | uVar3 >> 0x17) ^ (uVar3 >> 0xf | uVar3 * 0x20000);
      uVar8 = uVar20 * 0x1000 | uVar20 >> 0x14;
      uVar4 = uVar8 + 0xd8a7a879 + uVar3;
      uVar15 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = local_88[8] ^ local_88[0xf] ^ (uVar24 << 0xf | uVar24 >> 0x11);
      uVar19 = (uVar4 >> 9 | uVar4 << 0x17) ^
               (uVar4 << 0xf | uVar4 >> 0x11) ^
               (local_88[0xb] << 7 | local_88[0xb] >> 0x19) ^ uVar29 ^ uVar4;
      uVar10 = (uVar8 ^ uVar15) +
               (uVar30 ^ uVar19) + uVar26 + (uVar5 & uVar21 | (uVar5 | uVar21) & uVar20);
      uVar6 = uVar5 * 0x200 | uVar5 >> 0x17;
      uVar5 = uVar2 >> 0xd | uVar2 << 0x13;
      uVar8 = ((uVar2 ^ uVar9) & uVar3 ^ uVar9) + uVar11 + uVar30 + uVar15;
      uVar8 = uVar8 ^ (uVar8 * 0x200 | uVar8 >> 0x17) ^ (uVar8 >> 0xf | uVar8 * 0x20000);
      uVar2 = uVar10 * 0x1000 | uVar10 >> 0x14;
      uVar4 = uVar2 + 0xb14f50f3 + uVar8;
      uVar26 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = uVar32 ^ local_88[9] ^ (uVar13 << 0xf | uVar13 >> 0x11);
      uVar12 = (uVar4 >> 9 | uVar4 << 0x17) ^
               (uVar4 << 0xf | uVar4 >> 0x11) ^
               (local_88[0xc] << 7 | local_88[0xc] >> 0x19) ^ uVar23 ^ uVar4;
      uVar15 = (uVar2 ^ uVar26) +
               (uVar24 ^ uVar12) + uVar21 + (uVar20 & uVar6 | (uVar20 | uVar6) & uVar10);
      uVar11 = uVar3 >> 0xd | uVar3 << 0x13;
      uVar27 = uVar20 * 0x200 | uVar20 >> 0x17;
      uVar2 = ((uVar3 ^ uVar5) & uVar8 ^ uVar5) + uVar9 + uVar24 + uVar26;
      uVar2 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 >> 0xf | uVar2 * 0x20000);
      uVar3 = uVar15 * 0x1000 | uVar15 >> 0x14;
      uVar4 = uVar3 + 0x629ea1e7 + uVar2;
      uVar21 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = uVar25 ^ local_88[10] ^ (uVar22 << 0xf | uVar22 >> 0x11);
      uVar20 = (uVar4 >> 9 | uVar4 << 0x17) ^
               (uVar4 << 0xf | uVar4 >> 0x11) ^
               (local_88[0xd] << 7 | local_88[0xd] >> 0x19) ^ uVar30 ^ uVar4;
      uVar9 = uVar10 * 0x200 | uVar10 >> 0x17;
      uVar16 = (uVar3 ^ uVar21) +
               (uVar13 ^ uVar20) + uVar6 + (uVar10 & uVar27 | (uVar10 | uVar27) & uVar15);
      uVar10 = uVar8 >> 0xd | uVar8 << 0x13;
      uVar3 = ((uVar8 ^ uVar11) & uVar2 ^ uVar11) + uVar5 + uVar13 + uVar21;
      uVar3 = uVar3 ^ (uVar3 * 0x200 | uVar3 >> 0x17) ^ (uVar3 >> 0xf | uVar3 * 0x20000);
      uVar8 = uVar16 * 0x1000 | uVar16 >> 0x14;
      uVar4 = uVar8 + 0xc53d43ce + uVar3;
      uVar6 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = uVar29 ^ local_88[0xb] ^ (uVar19 << 0xf | uVar19 >> 0x11);
      uVar21 = (uVar4 >> 9 | uVar4 << 0x17) ^
               (uVar4 << 0xf | uVar4 >> 0x11) ^
               (local_88[0xe] << 7 | local_88[0xe] >> 0x19) ^ uVar24 ^ uVar4;
      uVar5 = uVar15 * 0x200 | uVar15 >> 0x17;
      uVar27 = (uVar8 ^ uVar6) +
               (uVar22 ^ uVar21) + uVar27 + (uVar15 & uVar9 | (uVar15 | uVar9) & uVar16);
      uVar15 = uVar2 >> 0xd | uVar2 << 0x13;
      uVar8 = ((uVar2 ^ uVar10) & uVar3 ^ uVar10) + uVar11 + uVar22 + uVar6;
      uVar8 = uVar8 ^ (uVar8 * 0x200 | uVar8 >> 0x17) ^ (uVar8 >> 0xf | uVar8 * 0x20000);
      uVar11 = uVar27 * 0x1000 | uVar27 >> 0x14;
      uVar4 = uVar11 + 0x8a7a879d + uVar8;
      uVar2 = uVar23 ^ local_88[0xc] ^ (uVar12 << 0xf | uVar12 >> 0x11);
      uVar4 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar26 = (uVar2 >> 9 | uVar2 << 0x17) ^
               (uVar2 << 0xf | uVar2 >> 0x11) ^
               (local_88[0xf] << 7 | local_88[0xf] >> 0x19) ^ uVar13 ^ uVar2;
      uVar6 = uVar3 >> 0xd | uVar3 << 0x13;
      uVar9 = (uVar11 ^ uVar4) +
              (uVar19 ^ uVar26) + uVar9 + (uVar16 & uVar5 | (uVar16 | uVar5) & uVar27);
      uVar28 = uVar16 * 0x200 | uVar16 >> 0x17;
      uVar2 = ((uVar3 ^ uVar15) & uVar8 ^ uVar15) + uVar10 + uVar19 + uVar4;
      uVar2 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 >> 0xf | uVar2 * 0x20000);
      uVar11 = uVar9 * 0x1000 | uVar9 >> 0x14;
      uVar4 = uVar11 + 0x14f50f3b + uVar2;
      uVar3 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = uVar30 ^ local_88[0xd] ^ (uVar20 << 0xf | uVar20 >> 0x11);
      uVar16 = (uVar4 >> 9 | uVar4 << 0x17) ^
               (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar32 << 7 | uVar32 >> 0x19) ^ uVar22 ^ uVar4;
      uVar14 = uVar27 * 0x200 | uVar27 >> 0x17;
      uVar17 = (uVar11 ^ uVar3) +
               (uVar12 ^ uVar16) + uVar5 + (uVar27 & uVar28 | (uVar27 | uVar28) & uVar9);
      uVar3 = ((uVar8 ^ uVar6) & uVar2 ^ uVar6) + uVar15 + uVar12 + uVar3;
      uVar5 = uVar8 >> 0xd | uVar8 << 0x13;
      uVar3 = uVar3 ^ (uVar3 * 0x200 | uVar3 >> 0x17) ^ (uVar3 >> 0xf | uVar3 * 0x20000);
      uVar8 = uVar17 * 0x1000 | uVar17 >> 0x14;
      uVar4 = uVar8 + 0x29ea1e76 + uVar3;
      uVar15 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = uVar24 ^ local_88[0xe] ^ (uVar21 << 0xf | uVar21 >> 0x11);
      uVar27 = (uVar4 >> 9 | uVar4 << 0x17) ^
               (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar25 << 7 | uVar25 >> 0x19) ^ uVar19 ^ uVar4;
      uVar10 = uVar9 * 0x200 | uVar9 >> 0x17;
      uVar11 = uVar2 >> 0xd | uVar2 << 0x13;
      uVar28 = (uVar8 ^ uVar15) +
               (uVar20 ^ uVar27) + uVar28 + (uVar9 & uVar14 | (uVar9 | uVar14) & uVar17);
      uVar8 = ((uVar2 ^ uVar5) & uVar3 ^ uVar5) + uVar6 + uVar20 + uVar15;
      uVar8 = uVar8 ^ (uVar8 * 0x200 | uVar8 >> 0x17) ^ (uVar8 >> 0xf | uVar8 * 0x20000);
      uVar6 = uVar28 * 0x1000 | uVar28 >> 0x14;
      uVar2 = uVar13 ^ local_88[0xf] ^ (uVar26 << 0xf | uVar26 >> 0x11);
      uVar4 = uVar6 + 0x53d43cec + uVar8;
      uVar4 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar31 = (uVar2 << 0xf | uVar2 >> 0x11) ^ (uVar29 << 7 | uVar29 >> 0x19) ^ uVar12 ^ uVar2 ^
               (uVar2 >> 9 | uVar2 << 0x17);
      uVar18 = uVar17 * 0x200 | uVar17 >> 0x17;
      uVar9 = (uVar6 ^ uVar4) +
              (uVar21 ^ uVar31) + uVar14 + (uVar17 & uVar10 | (uVar17 | uVar10) & uVar28);
      uVar6 = uVar3 >> 0xd | uVar3 << 0x13;
      uVar15 = ((uVar3 ^ uVar11) & uVar8 ^ uVar11) + uVar5 + uVar21 + uVar4;
      uVar2 = uVar9 * 0x1000 | uVar9 >> 0x14;
      uVar15 = uVar15 ^ (uVar15 * 0x200 | uVar15 >> 0x17) ^ (uVar15 >> 0xf | uVar15 * 0x20000);
      uVar4 = uVar2 + 0xa7a879d8 + uVar15;
      uVar3 = uVar32 ^ uVar22 ^ (uVar16 << 0xf | uVar16 >> 0x11);
      uVar4 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar5 = (uVar3 >> 9 | uVar3 << 0x17) ^
              (uVar3 << 0xf | uVar3 >> 0x11) ^ (uVar23 << 7 | uVar23 >> 0x19) ^ uVar20 ^ uVar3;
      uVar17 = uVar28 * 0x200 | uVar28 >> 0x17;
      uVar10 = (uVar2 ^ uVar4) +
               (uVar26 ^ uVar5) + uVar10 + (uVar28 & uVar18 | (uVar28 | uVar18) & uVar9);
      uVar2 = uVar8 >> 0xd | uVar8 << 0x13;
      uVar3 = uVar25 ^ uVar19 ^ (uVar27 << 0xf | uVar27 >> 0x11);
      uVar8 = ((uVar8 ^ uVar6) & uVar15 ^ uVar6) + uVar11 + uVar26 + uVar4;
      uVar33 = (uVar3 >> 9 | uVar3 << 0x17) ^
               (uVar3 << 0xf | uVar3 >> 0x11) ^ (uVar30 << 7 | uVar30 >> 0x19) ^ uVar21 ^ uVar3;
      uVar8 = uVar8 ^ (uVar8 * 0x200 | uVar8 >> 0x17) ^ (uVar8 >> 0xf | uVar8 * 0x20000);
      uVar11 = uVar10 * 0x1000 | uVar10 >> 0x14;
      uVar4 = uVar11 + 0x4f50f3b1 + uVar8;
      uVar4 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar28 = uVar9 * 0x200 | uVar9 >> 0x17;
      uVar14 = uVar15 >> 0xd | uVar15 << 0x13;
      uVar9 = (uVar11 ^ uVar4) +
              (uVar16 ^ uVar33) + uVar18 + (uVar9 & uVar17 | (uVar9 | uVar17) & uVar10);
      uVar3 = ((uVar15 ^ uVar2) & uVar8 ^ uVar2) + uVar6 + uVar16 + uVar4;
      uVar3 = uVar3 ^ (uVar3 * 0x200 | uVar3 >> 0x17) ^ (uVar3 >> 0xf | uVar3 * 0x20000);
      uVar6 = uVar9 * 0x1000 | uVar9 >> 0x14;
      uVar4 = uVar6 + 0x9ea1e762 + uVar3;
      uVar18 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = uVar29 ^ uVar12 ^ (uVar31 << 0xf | uVar31 >> 0x11);
      uVar29 = (uVar4 >> 9 | uVar4 << 0x17) ^
               (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar24 << 7 | uVar24 >> 0x19) ^ uVar26 ^ uVar4;
      uVar25 = uVar10 * 0x200 | uVar10 >> 0x17;
      uVar11 = uVar8 >> 0xd | uVar8 << 0x13;
      uVar15 = (uVar6 ^ uVar18) +
               (uVar27 ^ uVar29) + uVar17 + (uVar10 & uVar28 | (uVar10 | uVar28) & uVar9);
      uVar8 = ((uVar8 ^ uVar14) & uVar3 ^ uVar14) + uVar2 + uVar27 + uVar18;
      uVar8 = uVar8 ^ (uVar8 * 0x200 | uVar8 >> 0x17) ^ (uVar8 >> 0xf | uVar8 * 0x20000);
      uVar2 = uVar15 * 0x1000 | uVar15 >> 0x14;
      uVar4 = uVar2 + 0x3d43cec5 + uVar8;
      uVar17 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = uVar23 ^ uVar20 ^ (uVar5 << 0xf | uVar5 >> 0x11);
      uVar18 = (uVar4 >> 9 | uVar4 << 0x17) ^
               (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar13 << 7 | uVar13 >> 0x19) ^ uVar16 ^ uVar4;
      uVar10 = uVar9 * 0x200 | uVar9 >> 0x17;
      uVar6 = uVar3 >> 0xd | uVar3 << 0x13;
      uVar23 = (uVar2 ^ uVar17) +
               (uVar18 ^ uVar31) + uVar28 + (uVar9 & uVar25 | (uVar9 | uVar25) & uVar15);
      uVar3 = ((uVar3 ^ uVar11) & uVar8 ^ uVar11) + uVar14 + uVar31 + uVar17;
      uVar3 = uVar3 ^ (uVar3 * 0x200 | uVar3 >> 0x17) ^ (uVar3 >> 0xf | uVar3 * 0x20000);
      uVar2 = uVar23 * 0x1000 | uVar23 >> 0x14;
      uVar4 = uVar2 + 0x7a879d8a + uVar3;
      uVar14 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = uVar30 ^ uVar21 ^ (uVar33 << 0xf | uVar33 >> 0x11);
      uVar28 = (uVar4 >> 9 | uVar4 << 0x17) ^
               (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar22 << 7 | uVar22 >> 0x19) ^ uVar27 ^ uVar4;
      uVar9 = uVar15 * 0x200 | uVar15 >> 0x17;
      uVar15 = (uVar2 ^ uVar14) +
               (uVar5 ^ uVar28) + uVar25 + (uVar15 & uVar10 | (uVar15 | uVar10) & uVar23);
      uVar2 = uVar8 >> 0xd | uVar8 << 0x13;
      uVar8 = ((uVar8 ^ uVar6) & uVar3 ^ uVar6) + uVar11 + uVar5 + uVar14;
      uVar8 = uVar8 ^ (uVar8 * 0x200 | uVar8 >> 0x17) ^ (uVar8 >> 0xf | uVar8 * 0x20000);
      uVar11 = uVar15 * 0x1000 | uVar15 >> 0x14;
      uVar4 = uVar11 + 0xf50f3b14 + uVar8;
      uVar30 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = uVar24 ^ uVar26 ^ (uVar29 << 0xf | uVar29 >> 0x11);
      uVar17 = (uVar4 >> 9 | uVar4 << 0x17) ^
               (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar19 << 7 | uVar19 >> 0x19) ^ uVar31 ^ uVar4;
      uVar25 = uVar23 * 0x200 | uVar23 >> 0x17;
      uVar14 = uVar3 >> 0xd | uVar3 << 0x13;
      uVar24 = (uVar11 ^ uVar30) +
               (uVar17 ^ uVar33) + uVar10 + (uVar23 & uVar9 | (uVar23 | uVar9) & uVar15);
      uVar3 = ((uVar3 ^ uVar2) & uVar8 ^ uVar2) + uVar6 + uVar33 + uVar30;
      uVar3 = uVar3 ^ (uVar3 * 0x200 | uVar3 >> 0x17) ^ (uVar3 >> 0xf | uVar3 * 0x20000);
      uVar11 = uVar24 * 0x1000 | uVar24 >> 0x14;
      uVar4 = uVar11 + 0xea1e7629 + uVar3;
      uVar6 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = uVar13 ^ uVar16 ^ (uVar18 << 0xf | uVar18 >> 0x11);
      uVar10 = (uVar4 >> 9 | uVar4 << 0x17) ^
               (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar12 << 7 | uVar12 >> 0x19) ^ uVar5 ^ uVar4;
      uVar23 = uVar15 * 0x200 | uVar15 >> 0x17;
      uVar9 = (uVar11 ^ uVar6) +
              (uVar29 ^ uVar10) + uVar9 + (uVar15 & uVar25 | (uVar15 | uVar25) & uVar24);
      uVar11 = uVar8 >> 0xd | uVar8 << 0x13;
      uVar8 = ((uVar8 ^ uVar14) & uVar3 ^ uVar14) + uVar2 + uVar29 + uVar6;
      uVar8 = uVar8 ^ (uVar8 * 0x200 | uVar8 >> 0x17) ^ (uVar8 >> 0xf | uVar8 * 0x20000);
      uVar2 = uVar9 * 0x1000 | uVar9 >> 0x14;
      uVar4 = uVar2 + 0xd43cec53 + uVar8;
      uVar32 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = uVar22 ^ uVar27 ^ (uVar28 << 0xf | uVar28 >> 0x11);
      uVar13 = (uVar4 >> 9 | uVar4 << 0x17) ^
               (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar20 << 7 | uVar20 >> 0x19) ^ uVar33 ^ uVar4;
      uVar30 = uVar24 * 0x200 | uVar24 >> 0x17;
      uVar6 = uVar3 >> 0xd | uVar3 << 0x13;
      uVar15 = (uVar2 ^ uVar32) +
               (uVar18 ^ uVar13) + uVar25 + (uVar24 & uVar23 | (uVar24 | uVar23) & uVar9);
      uVar3 = ((uVar3 ^ uVar11) & uVar8 ^ uVar11) + uVar14 + uVar18 + uVar32;
      uVar3 = uVar3 ^ (uVar3 * 0x200 | uVar3 >> 0x17) ^ (uVar3 >> 0xf | uVar3 * 0x20000);
      uVar14 = uVar15 * 0x1000 | uVar15 >> 0x14;
      uVar4 = uVar14 + 0xa879d8a7 + uVar3;
      uVar25 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = uVar19 ^ uVar31 ^ (uVar17 << 0xf | uVar17 >> 0x11);
      uVar19 = (uVar4 >> 9 | uVar4 << 0x17) ^
               (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar21 << 7 | uVar21 >> 0x19) ^ uVar29 ^ uVar4;
      uVar22 = uVar9 * 0x200 | uVar9 >> 0x17;
      uVar2 = uVar8 >> 0xd | uVar8 << 0x13;
      uVar23 = (uVar14 ^ uVar25) +
               (uVar28 ^ uVar19) + uVar23 + (uVar9 & uVar30 | (uVar9 | uVar30) & uVar15);
      uVar8 = ((uVar8 ^ uVar6) & uVar3 ^ uVar6) + uVar11 + uVar28 + uVar25;
      uVar8 = uVar8 ^ (uVar8 * 0x200 | uVar8 >> 0x17) ^ (uVar8 >> 0xf | uVar8 * 0x20000);
      uVar11 = uVar23 * 0x1000 | uVar23 >> 0x14;
      uVar4 = uVar11 + 0x50f3b14f + uVar8;
      uVar25 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = uVar12 ^ uVar5 ^ (uVar10 << 0xf | uVar10 >> 0x11);
      uVar14 = (uVar4 >> 9 | uVar4 << 0x17) ^
               (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar26 << 7 | uVar26 >> 0x19) ^ uVar18 ^ uVar4;
      uVar9 = uVar15 * 0x200 | uVar15 >> 0x17;
      uVar12 = (uVar11 ^ uVar25) +
               (uVar17 ^ uVar14) + uVar30 + (uVar15 & uVar22 | (uVar15 | uVar22) & uVar23);
      uVar15 = uVar3 >> 0xd | uVar3 << 0x13;
      uVar3 = ((uVar3 ^ uVar2) & uVar8 ^ uVar2) + uVar6 + uVar17 + uVar25;
      uVar3 = uVar3 ^ (uVar3 * 0x200 | uVar3 >> 0x17) ^ (uVar3 >> 0xf | uVar3 * 0x20000);
      uVar11 = uVar12 * 0x1000 | uVar12 >> 0x14;
      uVar4 = uVar11 + 0xa1e7629e + uVar3;
      uVar6 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = uVar20 ^ uVar33 ^ (uVar13 << 0xf | uVar13 >> 0x11);
      uVar34 = (uVar4 >> 9 | uVar4 << 0x17) ^
               (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar16 << 7 | uVar16 >> 0x19) ^ uVar28 ^ uVar4;
      uVar25 = uVar23 * 0x200 | uVar23 >> 0x17;
      uVar22 = (uVar11 ^ uVar6) +
               (uVar10 ^ uVar34) + uVar22 + (uVar23 & uVar9 | (uVar23 | uVar9) & uVar12);
      uVar11 = uVar8 >> 0xd | uVar8 << 0x13;
      uVar8 = ((uVar8 ^ uVar15) & uVar3 ^ uVar15) + uVar2 + uVar10 + uVar6;
      uVar8 = uVar8 ^ (uVar8 * 0x200 | uVar8 >> 0x17) ^ (uVar8 >> 0xf | uVar8 * 0x20000);
      uVar2 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar4 = uVar2 + 0x43cec53d + uVar8;
      uVar24 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = uVar21 ^ uVar29 ^ (uVar19 << 0xf | uVar19 >> 0x11);
      uVar20 = (uVar4 >> 9 | uVar4 << 0x17) ^
               (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar27 << 7 | uVar27 >> 0x19) ^ uVar17 ^ uVar4;
      uVar23 = uVar12 * 0x200 | uVar12 >> 0x17;
      uVar9 = (uVar2 ^ uVar24) +
              (uVar13 ^ uVar20) + uVar9 + (uVar12 & uVar25 | (uVar12 | uVar25) & uVar22);
      uVar6 = uVar3 >> 0xd | uVar3 << 0x13;
      uVar3 = ((uVar3 ^ uVar11) & uVar8 ^ uVar11) + uVar15 + uVar13 + uVar24;
      uVar3 = uVar3 ^ (uVar3 * 0x200 | uVar3 >> 0x17) ^ (uVar3 >> 0xf | uVar3 * 0x20000);
      uVar2 = uVar9 * 0x1000 | uVar9 >> 0x14;
      uVar4 = uVar2 + 0x879d8a7a + uVar3;
      uVar12 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = uVar26 ^ uVar18 ^ (uVar14 << 0xf | uVar14 >> 0x11);
      uVar21 = (uVar4 >> 9 | uVar4 << 0x17) ^
               (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar31 << 7 | uVar31 >> 0x19) ^ uVar10 ^ uVar4;
      uVar24 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar15 = (uVar2 ^ uVar12) +
               (uVar19 ^ uVar21) + uVar25 + (uVar22 & uVar23 | (uVar22 | uVar23) & uVar9);
      uVar2 = uVar8 >> 0xd | uVar8 << 0x13;
      uVar8 = ((uVar8 ^ uVar6) & uVar3 ^ uVar6) + uVar11 + uVar19 + uVar12;
      uVar8 = uVar8 ^ (uVar8 * 0x200 | uVar8 >> 0x17) ^ (uVar8 >> 0xf | uVar8 * 0x20000);
      uVar11 = uVar15 * 0x1000 | uVar15 >> 0x14;
      uVar4 = uVar11 + 0xf3b14f5 + uVar8;
      uVar30 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = uVar16 ^ uVar28 ^ (uVar34 << 0xf | uVar34 >> 0x11);
      uVar26 = (uVar4 >> 9 | uVar4 << 0x17) ^
               (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar5 << 7 | uVar5 >> 0x19) ^ uVar13 ^ uVar4;
      uVar22 = uVar9 * 0x200 | uVar9 >> 0x17;
      uVar25 = (uVar11 ^ uVar30) +
               (uVar14 ^ uVar26) + uVar23 + (uVar9 & uVar24 | (uVar9 | uVar24) & uVar15);
      uVar12 = uVar3 >> 0xd | uVar3 << 0x13;
      uVar3 = ((uVar3 ^ uVar2) & uVar8 ^ uVar2) + uVar6 + uVar14 + uVar30;
      uVar3 = uVar3 ^ (uVar3 * 0x200 | uVar3 >> 0x17) ^ (uVar3 >> 0xf | uVar3 * 0x20000);
      uVar11 = uVar25 * 0x1000 | uVar25 >> 0x14;
      uVar4 = uVar11 + 0x1e7629ea + uVar3;
      uVar6 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = uVar27 ^ uVar17 ^ (uVar20 << 0xf | uVar20 >> 0x11);
      uVar16 = (uVar4 >> 9 | uVar4 << 0x17) ^
               (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar33 << 7 | uVar33 >> 0x19) ^ uVar19 ^ uVar4;
      uVar9 = uVar15 * 0x200 | uVar15 >> 0x17;
      uVar23 = (uVar11 ^ uVar6) +
               (uVar34 ^ uVar16) + uVar24 + (uVar15 & uVar22 | (uVar15 | uVar22) & uVar25);
      uVar11 = uVar8 >> 0xd | uVar8 << 0x13;
      uVar15 = uVar31 ^ uVar10 ^ (uVar21 << 0xf | uVar21 >> 0x11);
      uVar8 = ((uVar8 ^ uVar12) & uVar3 ^ uVar12) + uVar2 + uVar34 + uVar6;
      uVar8 = uVar8 ^ (uVar8 * 0x200 | uVar8 >> 0x17) ^ (uVar8 >> 0xf | uVar8 * 0x20000);
      uVar2 = uVar23 * 0x1000 | uVar23 >> 0x14;
      uVar4 = uVar2 + 0x3cec53d4 + uVar8;
      uVar4 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar32 = (uVar15 >> 9 | uVar15 << 0x17) ^
               (uVar15 << 0xf | uVar15 >> 0x11) ^ (uVar29 << 7 | uVar29 >> 0x19) ^ uVar14 ^ uVar15;
      uVar24 = uVar25 * 0x200 | uVar25 >> 0x17;
      uVar6 = uVar3 >> 0xd | uVar3 << 0x13;
      uVar15 = (uVar2 ^ uVar4) +
               (uVar20 ^ uVar32) + uVar22 + (uVar25 & uVar9 | (uVar25 | uVar9) & uVar23);
      uVar3 = ((uVar3 ^ uVar11) & uVar8 ^ uVar11) + uVar12 + uVar20 + uVar4;
      uVar3 = uVar3 ^ (uVar3 * 0x200 | uVar3 >> 0x17) ^ (uVar3 >> 0xf | uVar3 * 0x20000);
      uVar2 = uVar15 * 0x1000 | uVar15 >> 0x14;
      uVar4 = uVar2 + 0x79d8a7a8 + uVar3;
      uVar12 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = uVar5 ^ uVar13 ^ (uVar26 << 0xf | uVar26 >> 0x11);
      uVar27 = (uVar4 >> 9 | uVar4 << 0x17) ^
               (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar18 << 7 | uVar18 >> 0x19) ^ uVar34 ^ uVar4;
      uVar25 = uVar23 * 0x200 | uVar23 >> 0x17;
      uVar23 = (uVar2 ^ uVar12) +
               (uVar21 ^ uVar27) + uVar9 + (uVar23 & uVar24 | (uVar23 | uVar24) & uVar15);
      uVar2 = uVar8 >> 0xd | uVar8 << 0x13;
      uVar8 = ((uVar8 ^ uVar6) & uVar3 ^ uVar6) + uVar11 + uVar21 + uVar12;
      uVar8 = uVar8 ^ (uVar8 * 0x200 | uVar8 >> 0x17) ^ (uVar8 >> 0xf | uVar8 * 0x20000);
      uVar11 = uVar23 * 0x1000 | uVar23 >> 0x14;
      uVar4 = uVar11 + 0xf3b14f50 + uVar8;
      uVar4 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar5 = uVar33 ^ uVar19 ^ (uVar16 << 0xf | uVar16 >> 0x11);
      uVar5 = (uVar5 >> 9 | uVar5 << 0x17) ^
              (uVar5 << 0xf | uVar5 >> 0x11) ^ (uVar28 << 7 | uVar28 >> 0x19) ^ uVar20 ^ uVar5;
      uVar12 = uVar15 * 0x200 | uVar15 >> 0x17;
      uVar9 = uVar3 >> 0xd | uVar3 << 0x13;
      uVar22 = (uVar11 ^ uVar4) +
               (uVar26 ^ uVar5) + uVar24 + (uVar15 & uVar25 | (uVar15 | uVar25) & uVar23);
      uVar11 = ((uVar3 ^ uVar2) & uVar8 ^ uVar2) + uVar6 + uVar26 + uVar4;
      uVar11 = uVar11 ^ (uVar11 * 0x200 | uVar11 >> 0x17) ^ (uVar11 >> 0xf | uVar11 * 0x20000);
      uVar6 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar4 = uVar6 + 0xe7629ea1 + uVar11;
      uVar30 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = uVar29 ^ uVar14 ^ (uVar32 << 0xf | uVar32 >> 0x11);
      uVar29 = (uVar4 >> 9 | uVar4 << 0x17) ^
               (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar17 << 7 | uVar17 >> 0x19) ^ uVar21 ^ uVar4;
      uVar24 = uVar23 * 0x200 | uVar23 >> 0x17;
      uVar3 = uVar8 >> 0xd | uVar8 << 0x13;
      uVar15 = (uVar6 ^ uVar30) +
               (uVar16 ^ uVar29) + uVar25 + (uVar23 & uVar12 | (uVar23 | uVar12) & uVar22);
      uVar2 = ((uVar8 ^ uVar9) & uVar11 ^ uVar9) + uVar2 + uVar16 + uVar30;
      uVar2 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 >> 0xf | uVar2 * 0x20000);
      uVar6 = uVar15 * 0x1000 | uVar15 >> 0x14;
      uVar4 = uVar6 + 0xcec53d43 + uVar2;
      uVar8 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = uVar18 ^ uVar34 ^ (uVar27 << 0xf | uVar27 >> 0x11);
      uVar23 = (uVar4 >> 9 | uVar4 << 0x17) ^
               (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar10 << 7 | uVar10 >> 0x19) ^ uVar26 ^ uVar4;
      uVar18 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar4 = (uVar6 ^ uVar8) +
              (uVar23 ^ uVar32) + uVar12 + (uVar22 & uVar24 | (uVar22 | uVar24) & uVar15);
      uVar6 = uVar11 >> 0xd | uVar11 << 0x13;
      uVar12 = ((uVar11 ^ uVar3) & uVar2 ^ uVar3) + uVar9 + uVar32 + uVar8;
      uVar12 = uVar12 ^ (uVar12 * 0x200 | uVar12 >> 0x17) ^ (uVar12 >> 0xf | uVar12 * 0x20000);
      uVar11 = uVar4 * 0x1000 | uVar4 >> 0x14;
      uVar8 = uVar11 + 0x9d8a7a87 + uVar12;
      uVar8 = uVar8 * 0x80 | uVar8 >> 0x19;
      uVar9 = uVar28 ^ uVar20 ^ (uVar5 << 0xf | uVar5 >> 0x11);
      local_88[4] = (uVar9 >> 9 | uVar9 << 0x17) ^
                    (uVar9 << 0xf | uVar9 >> 0x11) ^ (uVar13 << 7 | uVar13 >> 0x19) ^ uVar16 ^ uVar9
      ;
      uVar9 = uVar15 * 0x200 | uVar15 >> 0x17;
      uVar25 = (uVar11 ^ uVar8) +
               (uVar27 ^ local_88[4]) + uVar24 + (uVar15 & uVar18 | (uVar15 | uVar18) & uVar4);
      uVar15 = uVar17 ^ uVar21 ^ (uVar29 << 0xf | uVar29 >> 0x11);
      uVar11 = uVar2 >> 0xd | uVar2 << 0x13;
      uVar2 = ((uVar2 ^ uVar6) & uVar12 ^ uVar6) + uVar3 + uVar27 + uVar8;
      local_88[5] = (uVar15 >> 9 | uVar15 << 0x17) ^
                    (uVar15 << 0xf | uVar15 >> 0x11) ^
                    (uVar19 << 7 | uVar19 >> 0x19) ^ uVar32 ^ uVar15;
      uVar2 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 >> 0xf | uVar2 * 0x20000);
      uVar3 = uVar25 * 0x1000 | uVar25 >> 0x14;
      uVar8 = uVar3 + 0x3b14f50f + uVar2;
      uVar8 = uVar8 * 0x80 | uVar8 >> 0x19;
      uVar22 = uVar12 >> 0xd | uVar12 << 0x13;
      uVar28 = (uVar3 ^ uVar8) +
               (uVar5 ^ local_88[5]) + uVar18 + (uVar4 & uVar9 | (uVar4 | uVar9) & uVar25);
      uVar6 = ((uVar12 ^ uVar11) & uVar2 ^ uVar11) + uVar6 + uVar5 + uVar8;
      uVar15 = uVar4 * 0x200 | uVar4 >> 0x17;
      uVar6 = uVar6 ^ (uVar6 * 0x200 | uVar6 >> 0x17) ^ (uVar6 >> 0xf | uVar6 * 0x20000);
      uVar3 = uVar28 * 0x1000 | uVar28 >> 0x14;
      uVar4 = uVar3 + 0x7629ea1e + uVar6;
      uVar4 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar8 = uVar10 ^ uVar26 ^ (uVar23 << 0xf | uVar23 >> 0x11);
      local_88[6] = (uVar8 >> 9 | uVar8 << 0x17) ^
                    (uVar8 << 0xf | uVar8 >> 0x11) ^ (uVar14 << 7 | uVar14 >> 0x19) ^ uVar27 ^ uVar8
      ;
      uVar17 = uVar25 * 0x200 | uVar25 >> 0x17;
      uVar12 = (uVar3 ^ uVar4) +
               (uVar29 ^ local_88[6]) + uVar9 + (uVar25 & uVar15 | (uVar25 | uVar15) & uVar28);
      uVar3 = uVar2 >> 0xd | uVar2 << 0x13;
      uVar8 = ((uVar2 ^ uVar22) & uVar6 ^ uVar22) + uVar11 + uVar29 + uVar4;
      uVar8 = uVar8 ^ (uVar8 * 0x200 | uVar8 >> 0x17) ^ (uVar8 >> 0xf | uVar8 * 0x20000);
      uVar2 = uVar12 * 0x1000 | uVar12 >> 0x14;
      uVar4 = uVar2 + 0xec53d43c + uVar8;
      uVar4 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar11 = uVar13 ^ uVar16 ^ (local_88[4] << 0xf | local_88[4] >> 0x11);
      local_88[7] = (uVar11 >> 9 | uVar11 << 0x17) ^
                    (uVar11 << 0xf | uVar11 >> 0x11) ^
                    (uVar34 << 7 | uVar34 >> 0x19) ^ uVar5 ^ uVar11;
      uVar13 = uVar28 * 0x200 | uVar28 >> 0x17;
      uVar15 = (uVar2 ^ uVar4) +
               (uVar23 ^ local_88[7]) + uVar15 + (uVar28 & uVar17 | (uVar28 | uVar17) & uVar12);
      uVar11 = uVar6 >> 0xd | uVar6 << 0x13;
      uVar9 = ((uVar6 ^ uVar3) & uVar8 ^ uVar3) + uVar22 + uVar23 + uVar4;
      uVar9 = uVar9 ^ (uVar9 * 0x200 | uVar9 >> 0x17) ^ (uVar9 >> 0xf | uVar9 * 0x20000);
      uVar2 = uVar15 * 0x1000 | uVar15 >> 0x14;
      uVar4 = uVar2 + 0xd8a7a879 + uVar9;
      uVar4 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar6 = uVar19 ^ uVar32 ^ (local_88[5] << 0xf | local_88[5] >> 0x11);
      local_88[8] = (uVar6 >> 9 | uVar6 << 0x17) ^
                    (uVar6 << 0xf | uVar6 >> 0x11) ^ (uVar20 << 7 | uVar20 >> 0x19) ^ uVar29 ^ uVar6
      ;
      uVar10 = uVar12 * 0x200 | uVar12 >> 0x17;
      uVar22 = (uVar2 ^ uVar4) +
               (local_88[4] ^ local_88[8]) + uVar17 + (uVar12 & uVar13 | (uVar12 | uVar13) & uVar15)
      ;
      uVar2 = uVar8 >> 0xd | uVar8 << 0x13;
      uVar8 = ((uVar8 ^ uVar11) & uVar9 ^ uVar11) + uVar3 + local_88[4] + uVar4;
      uVar8 = uVar8 ^ (uVar8 * 0x200 | uVar8 >> 0x17) ^ (uVar8 >> 0xf | uVar8 * 0x20000);
      uVar3 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar4 = uVar3 + 0xb14f50f3 + uVar8;
      uVar4 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar6 = uVar14 ^ uVar27 ^ (local_88[6] << 0xf | local_88[6] >> 0x11);
      local_88[9] = (uVar6 >> 9 | uVar6 << 0x17) ^
                    (uVar6 << 0xf | uVar6 >> 0x11) ^ (uVar21 << 7 | uVar21 >> 0x19) ^ uVar23 ^ uVar6
      ;
      uVar6 = uVar15 * 0x200 | uVar15 >> 0x17;
      uVar12 = (uVar3 ^ uVar4) +
               (local_88[5] ^ local_88[9]) + uVar13 + (uVar15 & uVar10 | (uVar15 | uVar10) & uVar22)
      ;
      uVar15 = uVar9 >> 0xd | uVar9 << 0x13;
      uVar3 = ((uVar9 ^ uVar2) & uVar8 ^ uVar2) + uVar11 + local_88[5] + uVar4;
      uVar3 = uVar3 ^ (uVar3 * 0x200 | uVar3 >> 0x17) ^ (uVar3 >> 0xf | uVar3 * 0x20000);
      uVar9 = uVar12 * 0x1000 | uVar12 >> 0x14;
      uVar4 = uVar9 + 0x629ea1e7 + uVar3;
      uVar19 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = uVar34 ^ uVar5 ^ (local_88[7] << 0xf | local_88[7] >> 0x11);
      local_88[10] = (uVar4 >> 9 | uVar4 << 0x17) ^
                     (uVar4 << 0xf | uVar4 >> 0x11) ^
                     (uVar26 << 7 | uVar26 >> 0x19) ^ local_88[4] ^ uVar4;
      uVar13 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar11 = uVar8 >> 0xd | uVar8 << 0x13;
      uVar10 = (uVar9 ^ uVar19) +
               (local_88[6] ^ local_88[10]) + uVar10 + (uVar22 & uVar6 | (uVar22 | uVar6) & uVar12);
      uVar8 = ((uVar8 ^ uVar15) & uVar3 ^ uVar15) + uVar2 + local_88[6] + uVar19;
      uVar8 = uVar8 ^ (uVar8 * 0x200 | uVar8 >> 0x17) ^ (uVar8 >> 0xf | uVar8 * 0x20000);
      uVar9 = uVar10 * 0x1000 | uVar10 >> 0x14;
      uVar4 = uVar9 + 0xc53d43ce + uVar8;
      uVar4 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar2 = uVar20 ^ uVar29 ^ (local_88[8] << 0xf | local_88[8] >> 0x11);
      local_88[0xb] =
           (uVar2 >> 9 | uVar2 << 0x17) ^
           (uVar2 << 0xf | uVar2 >> 0x11) ^ (uVar16 << 7 | uVar16 >> 0x19) ^ local_88[5] ^ uVar2;
      uVar20 = uVar12 * 0x200 | uVar12 >> 0x17;
      uVar12 = (uVar9 ^ uVar4) +
               (local_88[0xb] ^ local_88[7]) + uVar6 +
               (uVar12 & uVar13 | (uVar12 | uVar13) & uVar10);
      uVar6 = uVar3 >> 0xd | uVar3 << 0x13;
      uVar9 = ((uVar3 ^ uVar11) & uVar8 ^ uVar11) + uVar15 + local_88[7] + uVar4;
      uVar9 = uVar9 ^ (uVar9 * 0x200 | uVar9 >> 0x17) ^ (uVar9 >> 0xf | uVar9 * 0x20000);
      uVar3 = uVar12 * 0x1000 | uVar12 >> 0x14;
      uVar4 = uVar3 + 0x8a7a879d + uVar9;
      uVar4 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar2 = uVar21 ^ uVar23 ^ (local_88[9] << 0xf | local_88[9] >> 0x11);
      local_88[0xc] =
           (uVar2 >> 9 | uVar2 << 0x17) ^
           (uVar2 << 0xf | uVar2 >> 0x11) ^ (uVar32 << 7 | uVar32 >> 0x19) ^ local_88[6] ^ uVar2;
      uVar22 = uVar10 * 0x200 | uVar10 >> 0x17;
      uVar2 = uVar8 >> 0xd | uVar8 << 0x13;
      uVar19 = (uVar3 ^ uVar4) +
               (local_88[8] ^ local_88[0xc]) + uVar13 +
               (uVar10 & uVar20 | (uVar10 | uVar20) & uVar12);
      uVar8 = ((uVar8 ^ uVar6) & uVar9 ^ uVar6) + uVar11 + local_88[8] + uVar4;
      uVar8 = uVar8 ^ (uVar8 * 0x200 | uVar8 >> 0x17) ^ (uVar8 >> 0xf | uVar8 * 0x20000);
      uVar11 = uVar19 * 0x1000 | uVar19 >> 0x14;
      uVar4 = uVar11 + 0x14f50f3b + uVar8;
      uVar3 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = uVar26 ^ local_88[4] ^ (local_88[10] << 0xf | local_88[10] >> 0x11);
      local_88[0xd] =
           (uVar4 >> 9 | uVar4 << 0x17) ^
           (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar27 << 7 | uVar27 >> 0x19) ^ local_88[7] ^ uVar4;
      uVar13 = uVar12 * 0x200 | uVar12 >> 0x17;
      uVar10 = uVar9 >> 0xd | uVar9 << 0x13;
      uVar15 = (uVar11 ^ uVar3) +
               (local_88[9] ^ local_88[0xd]) + uVar20 +
               (uVar12 & uVar22 | (uVar12 | uVar22) & uVar19);
      uVar9 = ((uVar9 ^ uVar2) & uVar8 ^ uVar2) + uVar6 + local_88[9] + uVar3;
      uVar9 = uVar9 ^ (uVar9 * 0x200 | uVar9 >> 0x17) ^ (uVar9 >> 0xf | uVar9 * 0x20000);
      uVar3 = uVar15 * 0x1000 | uVar15 >> 0x14;
      uVar4 = uVar3 + 0x29ea1e76 + uVar9;
      uVar6 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = uVar16 ^ local_88[5] ^ (local_88[0xb] << 0xf | local_88[0xb] >> 0x11);
      local_88[0xe] =
           (uVar4 >> 9 | uVar4 << 0x17) ^
           (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar5 << 7 | uVar5 >> 0x19) ^ local_88[8] ^ uVar4;
      uVar20 = uVar19 * 0x200 | uVar19 >> 0x17;
      uVar11 = uVar8 >> 0xd | uVar8 << 0x13;
      uVar3 = (uVar3 ^ uVar6) +
              (local_88[10] ^ local_88[0xe]) + uVar22 +
              (uVar19 & uVar13 | (uVar19 | uVar13) & uVar15);
      uVar22 = ((uVar8 ^ uVar10) & uVar9 ^ uVar10) + uVar2 + local_88[10] + uVar6;
      uVar22 = uVar22 ^ (uVar22 * 0x200 | uVar22 >> 0x17) ^ (uVar22 >> 0xf | uVar22 * 0x20000);
      uVar8 = uVar3 * 0x1000 | uVar3 >> 0x14;
      uVar4 = uVar8 + 0x53d43cec + uVar22;
      uVar2 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = local_88[6] ^ uVar32 ^ (local_88[0xc] << 0xf | local_88[0xc] >> 0x11);
      local_88[0xf] =
           (uVar4 >> 9 | uVar4 << 0x17) ^
           (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar29 << 7 | uVar29 >> 0x19) ^ local_88[9] ^ uVar4;
      uVar6 = uVar15 * 0x200 | uVar15 >> 0x17;
      uVar12 = uVar9 >> 0xd | uVar9 << 0x13;
      uVar13 = (uVar8 ^ uVar2) +
               (local_88[0xb] ^ local_88[0xf]) + uVar13 +
               (uVar15 & uVar20 | (uVar15 | uVar20) & uVar3);
      uVar15 = ((uVar9 ^ uVar11) & uVar22 ^ uVar11) + uVar10 + local_88[0xb] + uVar2;
      uVar15 = uVar15 ^ (uVar15 * 0x200 | uVar15 >> 0x17) ^ (uVar15 >> 0xf | uVar15 * 0x20000);
      uVar8 = uVar13 * 0x1000 | uVar13 >> 0x14;
      uVar4 = uVar8 + 0xa7a879d8 + uVar15;
      uVar19 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = uVar27 ^ local_88[7] ^ (local_88[0xd] << 0xf | local_88[0xd] >> 0x11);
      local_88[0] = (uVar4 >> 9 | uVar4 << 0x17) ^
                    (uVar4 << 0xf | uVar4 >> 0x11) ^
                    (uVar23 << 7 | uVar23 >> 0x19) ^ local_88[10] ^ uVar4;
      uVar2 = uVar3 * 0x200 | uVar3 >> 0x17;
      uVar9 = uVar22 >> 0xd | uVar22 << 0x13;
      uVar10 = (uVar8 ^ uVar19) +
               (local_88[0xc] ^ local_88[0]) + uVar20 + (uVar3 & uVar6 | (uVar3 | uVar6) & uVar13);
      uVar3 = ((uVar22 ^ uVar12) & uVar15 ^ uVar12) + uVar11 + local_88[0xc] + uVar19;
      uVar3 = uVar3 ^ (uVar3 * 0x200 | uVar3 >> 0x17) ^ (uVar3 >> 0xf | uVar3 * 0x20000);
      uVar8 = uVar10 * 0x1000 | uVar10 >> 0x14;
      uVar4 = uVar8 + 0x4f50f3b1 + uVar3;
      uVar11 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = uVar5 ^ local_88[8] ^ (local_88[0xe] << 0xf | local_88[0xe] >> 0x11);
      uVar22 = uVar13 * 0x200 | uVar13 >> 0x17;
      local_88[1] = (uVar4 >> 9 | uVar4 << 0x17) ^
                    (uVar4 << 0xf | uVar4 >> 0x11) ^
                    (local_88[4] << 7 | local_88[4] >> 0x19) ^ local_88[0xb] ^ uVar4;
      uVar4 = (uVar8 ^ uVar11) +
              (local_88[1] ^ local_88[0xd]) + uVar6 + (uVar13 & uVar2 | (uVar13 | uVar2) & uVar10);
      uVar5 = uVar15 >> 0xd | uVar15 << 0x13;
      uVar11 = ((uVar15 ^ uVar9) & uVar3 ^ uVar9) + uVar12 + local_88[0xd] + uVar11;
      uVar11 = uVar11 ^ (uVar11 * 0x200 | uVar11 >> 0x17) ^ (uVar11 >> 0xf | uVar11 * 0x20000);
      uVar15 = uVar4 * 0x1000 | uVar4 >> 0x14;
      uVar8 = uVar15 + 0x9ea1e762 + uVar11;
      uVar13 = uVar8 * 0x80 | uVar8 >> 0x19;
      uVar8 = uVar29 ^ local_88[9] ^ (local_88[0xf] << 0xf | local_88[0xf] >> 0x11);
      local_88[2] = (uVar8 >> 9 | uVar8 << 0x17) ^
                    (uVar8 << 0xf | uVar8 >> 0x11) ^
                    (local_88[5] << 7 | local_88[5] >> 0x19) ^ local_88[0xc] ^ uVar8;
      uVar12 = uVar10 * 0x200 | uVar10 >> 0x17;
      uVar6 = uVar3 >> 0xd | uVar3 << 0x13;
      uVar10 = (uVar15 ^ uVar13) +
               (local_88[2] ^ local_88[0xe]) + uVar2 + (uVar10 & uVar22 | (uVar10 | uVar22) & uVar4)
      ;
      uVar2 = (local_88[0] << 0xf | local_88[0] >> 0x11) ^ uVar23 ^ local_88[10];
      uVar8 = ((uVar3 ^ uVar5) & uVar11 ^ uVar5) + local_88[0xe] + uVar9 + uVar13;
      uVar8 = (uVar8 * 0x200 | uVar8 >> 0x17) ^ (uVar8 >> 0xf | uVar8 * 0x20000) ^ uVar8;
      uVar3 = uVar10 * 0x1000 | uVar10 >> 0x14;
      uVar15 = uVar3 + 0x3d43cec5 + uVar8;
      uVar15 = uVar15 * 0x80 | uVar15 >> 0x19;
      local_c4 = local_c4 ^ uVar10;
      local_88[3] = (uVar2 >> 9 | uVar2 << 0x17) ^
                    (uVar2 << 0xf | uVar2 >> 0x11) ^
                    (local_88[6] << 7 | local_88[6] >> 0x19) ^ local_88[0xd] ^ uVar2;
      local_c8 = local_c8 ^
                 (uVar3 ^ uVar15) +
                 (local_88[3] ^ local_88[0xf]) + uVar22 +
                 (uVar4 & uVar12 | (uVar4 | uVar12) & uVar10);
      *param_3 = local_c8;
      uVar2 = ((uVar11 ^ uVar6) & uVar8 ^ uVar6) + local_88[0xf] + uVar5 + uVar15;
      param_3[1] = local_c4;
      local_c0 = local_c0 ^ (uVar4 * 0x200 | uVar4 >> 0x17);
      local_b4 = local_b4 ^ uVar12;
      param_3[2] = local_c0;
      local_b8 = local_b8 ^ (uVar11 >> 0xd | uVar11 << 0x13);
      local_bc = local_bc ^ uVar8;
      param_3[3] = local_b4;
      local_b0 = local_b0 ^ uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^
                 (uVar2 >> 0xf | uVar2 * 0x20000);
      local_ac = local_ac ^ uVar6;
      *(ulong *)(param_3 + 4) = CONCAT44(local_bc,local_b0);
      *(ulong *)(param_3 + 6) = CONCAT44(local_ac,local_b8);
    } while (local_a8 < uVar7);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void sm3_conclude_ctx(long param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x24);
  uVar3 = *(int *)(param_1 + 0x20) + (int)uVar1;
  *(uint *)(param_1 + 0x20) = uVar3;
  if (uVar3 < uVar1) {
    iVar5 = iVar5 + 1;
    *(int *)(param_1 + 0x24) = iVar5;
  }
  uVar4 = uVar3 * 8;
  uVar2 = iVar5 << 3;
  *(uint *)(param_1 + 0x30 + ((-(ulong)(uVar1 < 0x38) & 0xfffffffffffffff0) + 0x1e) * 4) =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
       (uVar3 >> 0x1d | uVar2) << 0x18;
  *(uint *)(param_1 + 0x30 + ((-(ulong)(uVar1 < 0x38) & 0xfffffffffffffff0) + 0x1f) * 4) =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar3 * 0x8000000;
  memcpy((void *)(param_1 + 0x30 + uVar1),fillbuf,
         ((-(ulong)(uVar1 < 0x38) & 0xffffffffffffffc0) + 0x78) - uVar1);
  sm3_process_block(param_1 + 0x30,(-(ulong)(uVar1 < 0x38) & 0xffffffffffffffc0) + 0x80,param_1);
  return;
}



long sm3_finish_ctx(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  sm3_conclude_ctx();
  lVar2 = 0;
  do {
    uVar1 = *(uint *)(param_1 + lVar2);
    *(uint *)(param_2 + lVar2) =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x20);
  return param_2;
}



void sm3_process_bytes(undefined8 *param_1,ulong param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *__dest;
  ulong uVar10;
  
  lVar1 = *(long *)(param_3 + 0x28);
  if (lVar1 != 0) {
    lVar7 = param_3 + 0x30;
    uVar10 = 0x80U - lVar1;
    if (param_2 < 0x80U - lVar1) {
      uVar10 = param_2;
    }
    memcpy((void *)(lVar7 + lVar1),param_1,uVar10);
    uVar4 = *(long *)(param_3 + 0x28) + uVar10;
    *(ulong *)(param_3 + 0x28) = uVar4;
    if (0x40 < uVar4) {
      sm3_process_block(lVar7,uVar4 & 0xffffffffffffffc0,param_3);
      uVar3 = (uint)uVar4 & 0x3f;
      uVar5 = (ulong)uVar3;
      *(ulong *)(param_3 + 0x28) = uVar5;
      puVar9 = (undefined8 *)(lVar7 + (lVar1 + uVar10 & 0xffffffffffffffc0));
      if (uVar3 < 8) {
        if ((uVar4 & 4) == 0) {
          if (((uVar4 & 0x3f) != 0) &&
             (*(undefined1 *)(param_3 + 0x30) = *(undefined1 *)puVar9, (uVar4 & 2) != 0)) {
            *(undefined2 *)(param_3 + 0x2e + uVar5) = *(undefined2 *)((uVar5 - 2) + (long)puVar9);
          }
        }
        else {
          *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)puVar9;
          *(undefined4 *)(param_3 + 0x2c + uVar5) = *(undefined4 *)((uVar5 - 4) + (long)puVar9);
        }
      }
      else {
        uVar4 = param_3 + 0x38U & 0xfffffffffffffff8;
        *(undefined8 *)(param_3 + 0x30) = *puVar9;
        *(undefined8 *)(param_3 + 0x28 + uVar5) = *(undefined8 *)((uVar5 - 8) + (long)puVar9);
        lVar7 = lVar7 - uVar4;
        uVar3 = uVar3 + (int)lVar7 & 0xfffffff8;
        if (7 < uVar3) {
          uVar6 = 0;
          do {
            uVar5 = (ulong)uVar6;
            uVar6 = uVar6 + 8;
            *(undefined8 *)(uVar4 + uVar5) = *(undefined8 *)((long)puVar9 + (uVar5 - lVar7));
          } while (uVar6 < uVar3);
        }
      }
    }
    param_1 = (undefined8 *)((long)param_1 + uVar10);
    param_2 = param_2 - uVar10;
  }
  puVar9 = param_1;
  if (0x3f < param_2) {
    if (((ulong)param_1 & 3) != 0) {
      if (param_2 != 0x40) {
        uVar10 = param_2 - 0x41 >> 6;
        do {
          uVar2 = puVar9[1];
          puVar8 = puVar9 + 8;
          *(undefined8 *)(param_3 + 0x30) = *puVar9;
          *(undefined8 *)(param_3 + 0x38) = uVar2;
          uVar2 = puVar9[3];
          *(undefined8 *)(param_3 + 0x40) = puVar9[2];
          *(undefined8 *)(param_3 + 0x48) = uVar2;
          uVar2 = puVar9[5];
          *(undefined8 *)(param_3 + 0x50) = puVar9[4];
          *(undefined8 *)(param_3 + 0x58) = uVar2;
          uVar2 = puVar9[7];
          *(undefined8 *)(param_3 + 0x60) = puVar9[6];
          *(undefined8 *)(param_3 + 0x68) = uVar2;
          sm3_process_block((undefined8 *)(param_3 + 0x30),0x40,param_3);
          puVar9 = puVar8;
        } while (puVar8 != param_1 + (uVar10 + 1) * 8);
        param_2 = (param_2 - 0x40) + uVar10 * -0x40;
        puVar9 = param_1 + (uVar10 + 1) * 8;
      }
      goto LAB_00102c38;
    }
    puVar9 = (undefined8 *)((long)param_1 + (param_2 & 0xffffffffffffffc0));
    sm3_process_block(param_1,param_2 & 0xffffffffffffffc0,param_3);
    param_2 = (ulong)((uint)param_2 & 0x3f);
  }
  if (param_2 == 0) {
    return;
  }
LAB_00102c38:
  __dest = (void *)(param_3 + 0x30);
  lVar1 = *(long *)(param_3 + 0x28);
  uVar3 = (uint)param_2;
  uVar10 = param_2 & 0xffffffff;
  puVar8 = (undefined8 *)((long)__dest + lVar1);
  if (uVar3 < 8) {
    if ((param_2 & 4) == 0) {
      if ((uVar3 != 0) && (*(undefined1 *)puVar8 = *(undefined1 *)puVar9, (param_2 & 2) != 0)) {
        *(undefined2 *)((long)puVar8 + (uVar10 - 2)) = *(undefined2 *)((long)puVar9 + (uVar10 - 2));
      }
    }
    else {
      *(undefined4 *)puVar8 = *(undefined4 *)puVar9;
      *(undefined4 *)((long)puVar8 + (uVar10 - 4)) = *(undefined4 *)((long)puVar9 + (uVar10 - 4));
    }
  }
  else {
    *puVar8 = *puVar9;
    *(undefined8 *)((long)puVar8 + ((param_2 & 0xffffffff) - 8)) =
         *(undefined8 *)((long)puVar9 + ((param_2 & 0xffffffff) - 8));
    lVar7 = (long)puVar8 - ((ulong)(puVar8 + 1) & 0xfffffffffffffff8);
    uVar3 = uVar3 + (int)lVar7 & 0xfffffff8;
    if (7 < uVar3) {
      uVar10 = 0;
      do {
        uVar6 = (int)uVar10 + 8;
        *(undefined8 *)(((ulong)(puVar8 + 1) & 0xfffffffffffffff8) + uVar10) =
             *(undefined8 *)((long)puVar9 + (uVar10 - lVar7));
        uVar10 = (ulong)uVar6;
      } while (uVar6 < uVar3);
    }
  }
  param_2 = lVar1 + param_2;
  if (0x3f < param_2) {
    param_2 = param_2 - 0x40;
    sm3_process_block(__dest,0x40,param_3);
    memcpy(__dest,(void *)(param_3 + 0x70),param_2);
  }
  *(ulong *)(param_3 + 0x28) = param_2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long sm3_buffer(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = 0;
  local_d8 = __LC0;
  uStack_d0 = _UNK_00102f68;
  local_b0 = 0;
  local_c8 = __LC1;
  uStack_c0 = _UNK_00102f78;
  sm3_process_bytes(param_1,param_2,&local_d8);
  sm3_conclude_ctx(&local_d8);
  lVar2 = 0;
  do {
    uVar1 = *(uint *)((long)&local_d8 + lVar2);
    *(uint *)(param_3 + lVar2) =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x20);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


