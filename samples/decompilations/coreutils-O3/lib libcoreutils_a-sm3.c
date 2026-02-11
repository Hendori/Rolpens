
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sm3_init_ctx(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_00102fc8;
  uVar1 = __LC0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  uVar1 = _UNK_00102fd8;
  param_1[2] = __LC1;
  param_1[3] = uVar1;
  return;
}



uint * sm3_read_ctx(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = param_1[1];
  param_2[1] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = param_1[2];
  param_2[2] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = param_1[3];
  param_2[3] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = param_1[4];
  param_2[4] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = param_1[5];
  param_2[5] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = param_1[6];
  param_2[6] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = param_1[7];
  param_2[7] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  return param_2;
}



void sm3_process_block(uint *param_1,ulong param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
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
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint *puVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_50;
  uint local_4c;
  uint *local_48;
  
  puVar27 = (uint *)((long)param_1 + (param_2 & 0xfffffffffffffffc));
  local_6c = *param_3;
  local_68 = param_3[1];
  local_64 = param_3[2];
  local_50 = param_3[3];
  local_60 = param_3[4];
  local_5c = param_3[5];
  local_58 = param_3[6];
  local_4c = param_3[7];
  uVar42 = param_3[8];
  param_3[8] = (uint)param_2 + param_3[8];
  param_3[9] = (int)(param_2 >> 0x20) + param_3[9] + (uint)CARRY4((uint)param_2,uVar42);
  local_48 = param_1;
  if (param_1 < puVar27) {
    do {
      uVar42 = *local_48;
      uVar15 = local_48[9];
      puVar22 = local_48 + 0x10;
      uVar47 = local_48[0xc];
      uVar20 = local_48[0xd];
      uVar1 = uVar42 >> 0x18 | (uVar42 & 0xff0000) >> 8 | (uVar42 & 0xff00) << 8 | uVar42 << 0x18;
      uVar42 = local_48[1];
      uVar48 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
      uVar33 = local_48[0xb];
      uVar25 = uVar47 >> 0x18 | (uVar47 & 0xff0000) >> 8 | (uVar47 & 0xff00) << 8 | uVar47 << 0x18;
      uVar18 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8;
      uVar26 = uVar18 | uVar20 << 0x18;
      uVar2 = uVar42 >> 0x18 | (uVar42 & 0xff0000) >> 8 | (uVar42 & 0xff00) << 8 | uVar42 << 0x18;
      uVar42 = local_48[2];
      uVar13 = local_6c << 0xc | local_6c >> 0x14;
      uVar45 = uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 | uVar33 << 0x18;
      uVar3 = uVar42 >> 0x18 | (uVar42 & 0xff0000) >> 8 | (uVar42 & 0xff00) << 8 | uVar42 << 0x18;
      uVar38 = local_48[3];
      uVar4 = uVar38 >> 0x18 | (uVar38 & 0xff0000) >> 8 | (uVar38 & 0xff00) << 8 | uVar38 << 0x18;
      uVar19 = local_48[4];
      uVar5 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 | uVar19 << 0x18;
      uVar21 = local_48[5];
      uVar6 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 | uVar21 << 0x18;
      uVar24 = local_48[6];
      uVar7 = uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8 | uVar24 << 0x18;
      uVar32 = local_48[7];
      uVar8 = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 | uVar32 << 0x18;
      uVar46 = local_48[8];
      uVar9 = uVar46 >> 0x18 | (uVar46 & 0xff0000) >> 8 | (uVar46 & 0xff00) << 8 | uVar46 << 0x18;
      uVar40 = local_48[10];
      uVar10 = uVar40 >> 0x18 | (uVar40 & 0xff0000) >> 8 | (uVar40 & 0xff00) << 8 | uVar40 << 0x18;
      uVar34 = local_48[0xe];
      uVar43 = uVar34 >> 0x18 | (uVar34 & 0xff0000) >> 8 | (uVar34 & 0xff00) << 8;
      uVar11 = uVar43 | uVar34 << 0x18;
      uVar41 = local_48[0xf];
      uVar39 = uVar41 >> 0x18 | (uVar41 & 0xff0000) >> 8 | (uVar41 & 0xff00) << 8;
      uVar12 = uVar39 | uVar41 << 0x18;
      uVar42 = uVar13 + 0x79cc4519 + local_60;
      uVar16 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar44 = local_68 << 9 | local_68 >> 0x17;
      uVar42 = (uVar5 ^ uVar1) + (local_6c ^ local_68 ^ local_64) + (uVar13 ^ uVar16) + local_50;
      uVar30 = local_5c >> 0xd | local_5c << 0x13;
      uVar16 = (local_5c ^ local_60 ^ local_58) + uVar1 + uVar16 + local_4c;
      uVar16 = uVar16 ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ (uVar16 >> 0xf | uVar16 * 0x20000);
      uVar28 = uVar42 * 0x1000 | uVar42 >> 0x14;
      uVar13 = uVar28 + 0xf3988a32 + uVar16;
      uVar14 = uVar13 * 0x80 | uVar13 >> 0x19;
      uVar28 = (uVar28 ^ uVar14) + (uVar6 ^ uVar2) + local_64 + (local_6c ^ uVar44 ^ uVar42);
      uVar23 = local_6c << 9 | local_6c >> 0x17;
      uVar14 = uVar14 + (local_60 ^ uVar30 ^ uVar16) + local_58 + uVar2;
      uVar35 = uVar28 * 0x1000 | uVar28 >> 0x14;
      uVar17 = local_60 >> 0xd | local_60 << 0x13;
      uVar14 = uVar14 ^ (uVar14 * 0x200 | uVar14 >> 0x17) ^ (uVar14 >> 0xf | uVar14 * 0x20000);
      uVar13 = uVar35 + 0xe7311465 + uVar14;
      uVar29 = uVar13 * 0x80 | uVar13 >> 0x19;
      uVar36 = (uVar35 ^ uVar29) + (uVar3 ^ uVar7) + uVar44 + (uVar42 ^ uVar23 ^ uVar28);
      uVar13 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar29 = (uVar16 ^ uVar17 ^ uVar14) + uVar30 + uVar3 + uVar29;
      uVar44 = uVar42 * 0x200 | uVar42 >> 0x17;
      uVar29 = uVar29 ^ (uVar29 * 0x200 | uVar29 >> 0x17) ^ (uVar29 >> 0xf | uVar29 * 0x20000);
      uVar16 = uVar36 * 0x1000 | uVar36 >> 0x14;
      uVar42 = uVar16 + 0xce6228cb + uVar29;
      uVar35 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar30 = uVar28 * 0x200 | uVar28 >> 0x17;
      uVar37 = uVar36 * 0x200 | uVar36 >> 0x17;
      uVar31 = (uVar16 ^ uVar35) + (uVar4 ^ uVar8) + uVar23 + (uVar28 ^ uVar44 ^ uVar36);
      uVar28 = uVar14 >> 0xd | uVar14 << 0x13;
      uVar35 = (uVar14 ^ uVar13 ^ uVar29) + uVar17 + uVar4 + uVar35;
      uVar35 = uVar35 ^ (uVar35 * 0x200 | uVar35 >> 0x17) ^ (uVar35 >> 0xf | uVar35 * 0x20000);
      uVar14 = uVar31 * 0x1000 | uVar31 >> 0x14;
      uVar42 = uVar14 + 0x9cc45197 + uVar35;
      uVar16 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar17 = uVar29 >> 0xd | uVar29 << 0x13;
      uVar23 = (uVar14 ^ uVar16) + (uVar5 ^ uVar9) + uVar44 + (uVar36 ^ uVar30 ^ uVar31);
      uVar16 = uVar13 + uVar5 + (uVar29 ^ uVar28 ^ uVar35) + uVar16;
      uVar16 = uVar16 ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ (uVar16 >> 0xf | uVar16 * 0x20000);
      uVar13 = uVar23 * 0x1000 | uVar23 >> 0x14;
      uVar42 = uVar13 + 0x3988a32f + uVar16;
      uVar29 = uVar31 * 0x200 | uVar31 >> 0x17;
      uVar14 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar36 = (uVar13 ^ uVar14) + (uVar6 ^ uVar48) + uVar30 + (uVar31 ^ uVar37 ^ uVar23);
      uVar44 = uVar35 >> 0xd | uVar35 << 0x13;
      uVar14 = uVar28 + uVar6 + (uVar35 ^ uVar17 ^ uVar16) + uVar14;
      uVar14 = uVar14 ^ (uVar14 * 0x200 | uVar14 >> 0x17) ^ (uVar14 >> 0xf | uVar14 * 0x20000);
      uVar13 = uVar36 * 0x1000 | uVar36 >> 0x14;
      uVar42 = uVar13 + 0x7311465e + uVar14;
      uVar28 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar35 = (uVar13 ^ uVar28) + (uVar10 ^ uVar7) + uVar37 + (uVar23 ^ uVar29 ^ uVar36);
      uVar30 = uVar23 * 0x200 | uVar23 >> 0x17;
      uVar13 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar28 = uVar17 + uVar7 + (uVar16 ^ uVar44 ^ uVar14) + uVar28;
      uVar28 = uVar28 ^ (uVar28 * 0x200 | uVar28 >> 0x17) ^ (uVar28 >> 0xf | uVar28 * 0x20000);
      uVar16 = uVar35 * 0x1000 | uVar35 >> 0x14;
      uVar42 = uVar16 + 0xe6228cbc + uVar28;
      uVar37 = uVar36 * 0x200 | uVar36 >> 0x17;
      uVar31 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar29 = (uVar16 ^ uVar31) + (uVar45 ^ uVar8) + uVar29 + (uVar36 ^ uVar30 ^ uVar35);
      uVar31 = (uVar14 ^ uVar13 ^ uVar28) + uVar44 + uVar8 + uVar31;
      uVar14 = uVar14 >> 0xd | uVar14 << 0x13;
      uVar31 = uVar31 ^ (uVar31 * 0x200 | uVar31 >> 0x17) ^ (uVar31 >> 0xf | uVar31 * 0x20000);
      uVar44 = uVar29 * 0x1000 | uVar29 >> 0x14;
      uVar23 = uVar35 * 0x200 | uVar35 >> 0x17;
      uVar42 = uVar44 + 0xcc451979 + uVar31;
      uVar16 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar17 = uVar28 >> 0xd | uVar28 << 0x13;
      uVar36 = (uVar44 ^ uVar16) + (uVar25 ^ uVar9) + uVar30 + (uVar35 ^ uVar37 ^ uVar29);
      uVar16 = (uVar28 ^ uVar14 ^ uVar31) + uVar13 + uVar9 + uVar16;
      uVar16 = uVar16 ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ (uVar16 >> 0xf | uVar16 * 0x20000);
      uVar13 = uVar36 * 0x1000 | uVar36 >> 0x14;
      uVar42 = uVar13 + 0x988a32f3 + uVar16;
      uVar35 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar30 = (uVar13 ^ uVar35) + (uVar48 ^ uVar26) + uVar37 + (uVar29 ^ uVar23 ^ uVar36);
      uVar44 = uVar31 >> 0xd | uVar31 << 0x13;
      uVar35 = (uVar31 ^ uVar17 ^ uVar16) + uVar14 + uVar48 + uVar35;
      uVar29 = uVar29 * 0x200 | uVar29 >> 0x17;
      uVar37 = uVar36 * 0x200 | uVar36 >> 0x17;
      uVar35 = uVar35 ^ (uVar35 * 0x200 | uVar35 >> 0x17) ^ (uVar35 >> 0xf | uVar35 * 0x20000);
      uVar13 = uVar30 * 0x1000 | uVar30 >> 0x14;
      uVar42 = uVar13 + 0x311465e7 + uVar35;
      uVar28 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar14 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar31 = (uVar13 ^ uVar28) + (uVar10 ^ uVar11) + uVar23 + (uVar36 ^ uVar29 ^ uVar30);
      uVar28 = uVar17 + uVar10 + (uVar16 ^ uVar44 ^ uVar35) + uVar28;
      uVar28 = uVar28 ^ (uVar28 * 0x200 | uVar28 >> 0x17) ^ (uVar28 >> 0xf | uVar28 * 0x20000);
      uVar16 = uVar31 * 0x1000 | uVar31 >> 0x14;
      uVar42 = uVar16 + 0x6228cbce + uVar28;
      uVar13 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar17 = uVar30 * 0x200 | uVar30 >> 0x17;
      uVar23 = uVar35 >> 0xd | uVar35 << 0x13;
      uVar36 = (uVar16 ^ uVar13) + (uVar45 ^ uVar12) + uVar29 + (uVar30 ^ uVar37 ^ uVar31);
      uVar13 = (uVar35 ^ uVar14 ^ uVar28) + uVar44 + uVar45 + uVar13;
      uVar13 = uVar13 ^ (uVar13 * 0x200 | uVar13 >> 0x17) ^ (uVar13 >> 0xf | uVar13 * 0x20000);
      uVar29 = uVar36 * 0x1000 | uVar36 >> 0x14;
      uVar42 = uVar29 + 0xc451979c + uVar13;
      uVar16 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar8 ^ uVar1 ^ (uVar18 << 0xf | uVar26 >> 0x11);
      uVar30 = (uVar42 << 0xf | uVar42 >> 0x11) ^
               (uVar4 << 7 | (uVar38 << 0x18) >> 0x19) ^ uVar10 ^ uVar42 ^
               (uVar42 >> 9 | uVar42 << 0x17);
      uVar1 = (uVar29 ^ uVar16) + (uVar25 ^ uVar30) + uVar37 + (uVar31 ^ uVar17 ^ uVar36);
      uVar29 = uVar31 * 0x200 | uVar31 >> 0x17;
      uVar18 = uVar28 >> 0xd | uVar28 << 0x13;
      uVar16 = uVar14 + uVar25 + (uVar28 ^ uVar23 ^ uVar13) + uVar16;
      uVar16 = uVar16 ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ (uVar16 >> 0xf | uVar16 * 0x20000);
      uVar38 = uVar1 * 0x1000 | uVar1 >> 0x14;
      uVar42 = uVar38 + 0x88a32f39 + uVar16;
      uVar43 = uVar9 ^ uVar2 ^ (uVar43 << 0xf | uVar11 >> 0x11);
      uVar2 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar35 = (uVar43 << 0xf | uVar43 >> 0x11) ^
               (uVar5 << 7 | (uVar19 << 0x18) >> 0x19) ^ uVar45 ^ uVar43 ^
               (uVar43 >> 9 | uVar43 << 0x17);
      uVar17 = (uVar38 ^ uVar2) + (uVar35 ^ uVar26) + uVar17 + (uVar36 ^ uVar29 ^ uVar1);
      uVar28 = uVar36 * 0x200 | uVar36 >> 0x17;
      uVar38 = uVar13 >> 0xd | uVar13 << 0x13;
      uVar2 = uVar23 + uVar26 + (uVar13 ^ uVar18 ^ uVar16) + uVar2;
      uVar2 = uVar2 ^ (uVar2 * 0x200 | uVar2 >> 0x17) ^ (uVar2 >> 0xf | uVar2 * 0x20000);
      uVar13 = uVar17 * 0x1000 | uVar17 >> 0x14;
      uVar42 = uVar13 + 0x11465e73 + uVar2;
      uVar14 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar3 ^ uVar48 ^ (uVar39 << 0xf | uVar12 >> 0x11);
      uVar23 = (uVar42 << 0xf | uVar42 >> 0x11) ^
               (uVar6 << 7 | (uVar21 << 0x18) >> 0x19) ^ uVar25 ^ uVar42 ^
               (uVar42 >> 9 | uVar42 << 0x17);
      uVar3 = (uVar13 ^ uVar14) + (uVar11 ^ uVar23) + uVar29 + (uVar1 ^ uVar28 ^ uVar17);
      uVar21 = uVar1 * 0x200 | uVar1 >> 0x17;
      uVar14 = (uVar16 ^ uVar38 ^ uVar2) + uVar18 + uVar11 + uVar14;
      uVar19 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar14 = uVar14 ^ (uVar14 * 0x200 | uVar14 >> 0x17) ^ (uVar14 >> 0xf | uVar14 * 0x20000);
      uVar18 = uVar3 * 0x1000 | uVar3 >> 0x14;
      uVar42 = uVar18 + 0x228cbce6 + uVar14;
      uVar13 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar4 ^ uVar10 ^ (uVar30 << 0xf | uVar30 >> 0x11);
      uVar43 = (uVar42 << 0xf | uVar42 >> 0x11) ^
               (uVar7 << 7 | (uVar24 << 0x18) >> 0x19) ^ uVar26 ^ uVar42 ^
               (uVar42 >> 9 | uVar42 << 0x17);
      uVar24 = (uVar18 ^ uVar13) + (uVar12 ^ uVar43) + uVar28 + (uVar17 ^ uVar21 ^ uVar3);
      uVar39 = uVar17 * 0x200 | uVar17 >> 0x17;
      uVar13 = (uVar2 ^ uVar19 ^ uVar14) + uVar38 + uVar12 + uVar13;
      uVar18 = uVar2 >> 0xd | uVar2 << 0x13;
      uVar13 = uVar13 ^ (uVar13 * 0x200 | uVar13 >> 0x17) ^ (uVar13 >> 0xf | uVar13 * 0x20000);
      uVar38 = uVar24 * 0x1000 | uVar24 >> 0x14;
      uVar42 = uVar38 + 0x9d8a7a87 + uVar13;
      uVar2 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar5 ^ uVar45 ^ (uVar35 << 0xf | uVar35 >> 0x11);
      uVar28 = (uVar42 << 0xf | uVar42 >> 0x11) ^
               (uVar8 << 7 | (uVar32 << 0x18) >> 0x19) ^ uVar11 ^ uVar42 ^
               (uVar42 >> 9 | uVar42 << 0x17);
      uVar1 = (uVar38 ^ uVar2) +
              (uVar28 ^ uVar30) + uVar21 + (uVar3 & uVar39 | (uVar3 | uVar39) & uVar24);
      uVar32 = uVar14 >> 0xd | uVar14 << 0x13;
      uVar38 = ((uVar14 ^ uVar18) & uVar13 ^ uVar18) + uVar19 + uVar30 + uVar2;
      uVar19 = uVar3 * 0x200 | uVar3 >> 0x17;
      uVar38 = uVar38 ^ (uVar38 * 0x200 | uVar38 >> 0x17) ^ (uVar38 >> 0xf | uVar38 * 0x20000);
      uVar21 = uVar1 * 0x1000 | uVar1 >> 0x14;
      uVar42 = uVar21 + 0x3b14f50f + uVar38;
      uVar2 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar6 ^ uVar25 ^ (uVar23 << 0xf | uVar23 >> 0x11);
      uVar16 = (uVar42 << 0xf | uVar42 >> 0x11) ^
               (uVar9 << 7 | (uVar46 << 0x18) >> 0x19) ^ uVar12 ^ uVar42 ^
               (uVar42 >> 9 | uVar42 << 0x17);
      uVar21 = (uVar21 ^ uVar2) +
               (uVar35 ^ uVar16) + uVar39 + (uVar24 & uVar19 | (uVar24 | uVar19) & uVar1);
      uVar3 = uVar13 >> 0xd | uVar13 << 0x13;
      uVar24 = uVar24 * 0x200 | uVar24 >> 0x17;
      uVar13 = ((uVar13 ^ uVar32) & uVar38 ^ uVar32) + uVar18 + uVar35 + uVar2;
      uVar13 = uVar13 ^ (uVar13 * 0x200 | uVar13 >> 0x17) ^ (uVar13 >> 0xf | uVar13 * 0x20000);
      uVar46 = uVar21 * 0x1000 | uVar21 >> 0x14;
      uVar42 = uVar46 + 0x7629ea1e + uVar13;
      uVar39 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar7 ^ uVar26 ^ (uVar43 << 0xf | uVar43 >> 0x11);
      uVar18 = (uVar42 >> 9 | uVar42 << 0x17) ^
               (uVar42 << 0xf | uVar42 >> 0x11) ^
               (uVar48 << 7 | (uVar15 << 0x18) >> 0x19) ^ uVar30 ^ uVar42;
      uVar46 = (uVar46 ^ uVar39) +
               (uVar23 ^ uVar18) + uVar19 + (uVar1 & uVar24 | (uVar1 | uVar24) & uVar21);
      uVar19 = uVar38 >> 0xd | uVar38 << 0x13;
      uVar2 = uVar1 * 0x200 | uVar1 >> 0x17;
      uVar15 = ((uVar38 ^ uVar3) & uVar13 ^ uVar3) + uVar32 + uVar23 + uVar39;
      uVar15 = uVar15 ^ (uVar15 * 0x200 | uVar15 >> 0x17) ^ (uVar15 >> 0xf | uVar15 * 0x20000);
      uVar32 = uVar46 * 0x1000 | uVar46 >> 0x14;
      uVar42 = uVar32 + 0xec53d43c + uVar15;
      uVar38 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar8 ^ uVar11 ^ (uVar28 << 0xf | uVar28 >> 0x11);
      uVar39 = (uVar42 >> 9 | uVar42 << 0x17) ^
               (uVar42 << 0xf | uVar42 >> 0x11) ^
               (uVar10 << 7 | (uVar40 << 0x18) >> 0x19) ^ uVar35 ^ uVar42;
      uVar40 = (uVar32 ^ uVar38) +
               (uVar43 ^ uVar39) + uVar24 + (uVar21 & uVar2 | (uVar21 | uVar2) & uVar46);
      uVar21 = uVar21 * 0x200 | uVar21 >> 0x17;
      uVar32 = uVar40 * 0x1000 | uVar40 >> 0x14;
      uVar24 = uVar13 >> 0xd | uVar13 << 0x13;
      uVar38 = ((uVar13 ^ uVar19) & uVar15 ^ uVar19) + uVar3 + uVar43 + uVar38;
      uVar38 = uVar38 ^ (uVar38 * 0x200 | uVar38 >> 0x17) ^ (uVar38 >> 0xf | uVar38 * 0x20000);
      uVar42 = uVar32 + 0xd8a7a879 + uVar38;
      uVar13 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar9 ^ uVar12 ^ (uVar16 << 0xf | uVar16 >> 0x11);
      uVar1 = (uVar42 >> 9 | uVar42 << 0x17) ^
              (uVar42 << 0xf | uVar42 >> 0x11) ^
              (uVar45 << 7 | (uVar33 << 0x18) >> 0x19) ^ uVar23 ^ uVar42;
      uVar32 = (uVar32 ^ uVar13) +
               (uVar28 ^ uVar1) + uVar2 + (uVar46 & uVar21 | (uVar46 | uVar21) & uVar40);
      uVar46 = uVar46 * 0x200 | uVar46 >> 0x17;
      uVar13 = ((uVar15 ^ uVar24) & uVar38 ^ uVar24) + uVar19 + uVar28 + uVar13;
      uVar4 = uVar15 >> 0xd | uVar15 << 0x13;
      uVar13 = uVar13 ^ (uVar13 * 0x200 | uVar13 >> 0x17) ^ (uVar13 >> 0xf | uVar13 * 0x20000);
      uVar15 = uVar32 * 0x1000 | uVar32 >> 0x14;
      uVar42 = uVar15 + 0xb14f50f3 + uVar13;
      uVar19 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar48 ^ uVar30 ^ (uVar18 << 0xf | uVar18 >> 0x11);
      uVar2 = (uVar42 >> 9 | uVar42 << 0x17) ^
              (uVar42 << 0xf | uVar42 >> 0x11) ^
              (uVar25 << 7 | (uVar47 << 0x18) >> 0x19) ^ uVar43 ^ uVar42;
      uVar33 = (uVar15 ^ uVar19) +
               (uVar16 ^ uVar2) + uVar21 + (uVar40 & uVar46 | (uVar40 | uVar46) & uVar32);
      uVar47 = uVar40 * 0x200 | uVar40 >> 0x17;
      uVar15 = ((uVar38 ^ uVar4) & uVar13 ^ uVar4) + uVar24 + uVar16 + uVar19;
      uVar21 = uVar38 >> 0xd | uVar38 << 0x13;
      uVar15 = uVar15 ^ (uVar15 * 0x200 | uVar15 >> 0x17) ^ (uVar15 >> 0xf | uVar15 * 0x20000);
      uVar38 = uVar33 * 0x1000 | uVar33 >> 0x14;
      uVar42 = uVar38 + 0x629ea1e7 + uVar15;
      uVar24 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar10 ^ uVar35 ^ (uVar39 << 0xf | uVar39 >> 0x11);
      uVar3 = (uVar42 >> 9 | uVar42 << 0x17) ^
              (uVar42 << 0xf | uVar42 >> 0x11) ^
              (uVar26 << 7 | (uVar20 << 0x18) >> 0x19) ^ uVar28 ^ uVar42;
      uVar19 = (uVar38 ^ uVar24) +
               (uVar18 ^ uVar3) + uVar46 + (uVar32 & uVar47 | (uVar32 | uVar47) & uVar33);
      uVar32 = uVar32 * 0x200 | uVar32 >> 0x17;
      uVar20 = ((uVar13 ^ uVar21) & uVar15 ^ uVar21) + uVar4 + uVar18 + uVar24;
      uVar24 = uVar13 >> 0xd | uVar13 << 0x13;
      uVar20 = uVar20 ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ (uVar20 >> 0xf | uVar20 * 0x20000);
      uVar13 = uVar19 * 0x1000 | uVar19 >> 0x14;
      uVar42 = uVar13 + 0xc53d43ce + uVar20;
      uVar46 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar45 ^ uVar23 ^ (uVar1 << 0xf | uVar1 >> 0x11);
      uVar4 = (uVar42 >> 9 | uVar42 << 0x17) ^
              (uVar42 << 0xf | uVar42 >> 0x11) ^
              (uVar11 << 7 | (uVar34 << 0x18) >> 0x19) ^ uVar16 ^ uVar42;
      uVar38 = (uVar13 ^ uVar46) +
               (uVar39 ^ uVar4) + uVar47 + (uVar33 & uVar32 | (uVar33 | uVar32) & uVar19);
      uVar47 = uVar15 >> 0xd | uVar15 << 0x13;
      uVar40 = uVar33 * 0x200 | uVar33 >> 0x17;
      uVar13 = ((uVar15 ^ uVar24) & uVar20 ^ uVar24) + uVar21 + uVar39 + uVar46;
      uVar13 = uVar13 ^ (uVar13 * 0x200 | uVar13 >> 0x17) ^ (uVar13 >> 0xf | uVar13 * 0x20000);
      uVar33 = uVar38 * 0x1000 | uVar38 >> 0x14;
      uVar42 = uVar33 + 0x8a7a879d + uVar13;
      uVar42 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar15 = uVar25 ^ uVar43 ^ (uVar2 << 0xf | uVar2 >> 0x11);
      uVar14 = (uVar15 << 0xf | uVar15 >> 0x11) ^
               (uVar12 << 7 | (uVar41 << 0x18) >> 0x19) ^ uVar18 ^ uVar15 ^
               (uVar15 >> 9 | uVar15 << 0x17);
      uVar46 = uVar19 * 0x200 | uVar19 >> 0x17;
      uVar21 = (uVar33 ^ uVar42) +
               (uVar1 ^ uVar14) + uVar32 + (uVar19 & uVar40 | (uVar19 | uVar40) & uVar38);
      uVar33 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar19 = ((uVar20 ^ uVar47) & uVar13 ^ uVar47) + uVar24 + uVar1 + uVar42;
      uVar19 = uVar19 ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ (uVar19 >> 0xf | uVar19 * 0x20000);
      uVar20 = uVar21 * 0x1000 | uVar21 >> 0x14;
      uVar15 = uVar26 ^ uVar28 ^ (uVar3 << 0xf | uVar3 >> 0x11);
      uVar42 = uVar20 + 0x14f50f3b + uVar19;
      uVar42 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar24 = (uVar15 >> 9 | uVar15 << 0x17) ^
               (uVar15 << 0xf | uVar15 >> 0x11) ^ (uVar30 << 7 | uVar30 >> 0x19) ^ uVar39 ^ uVar15;
      uVar32 = uVar38 * 0x200 | uVar38 >> 0x17;
      uVar15 = uVar13 >> 0xd | uVar13 << 0x13;
      uVar38 = (uVar20 ^ uVar42) +
               (uVar2 ^ uVar24) + uVar40 + (uVar38 & uVar46 | (uVar38 | uVar46) & uVar21);
      uVar13 = ((uVar13 ^ uVar33) & uVar19 ^ uVar33) + uVar47 + uVar2 + uVar42;
      uVar13 = uVar13 ^ (uVar13 * 0x200 | uVar13 >> 0x17) ^ (uVar13 >> 0xf | uVar13 * 0x20000);
      uVar20 = uVar38 * 0x1000 | uVar38 >> 0x14;
      uVar42 = uVar20 + 0x29ea1e76 + uVar13;
      uVar47 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar11 ^ uVar16 ^ (uVar4 << 0xf | uVar4 >> 0x11);
      uVar17 = (uVar42 >> 9 | uVar42 << 0x17) ^
               (uVar42 << 0xf | uVar42 >> 0x11) ^ (uVar35 << 7 | uVar35 >> 0x19) ^ uVar1 ^ uVar42;
      uVar34 = uVar21 * 0x200 | uVar21 >> 0x17;
      uVar21 = (uVar20 ^ uVar47) +
               (uVar3 ^ uVar17) + uVar46 + (uVar21 & uVar32 | (uVar21 | uVar32) & uVar38);
      uVar40 = uVar19 >> 0xd | uVar19 << 0x13;
      uVar20 = ((uVar19 ^ uVar15) & uVar13 ^ uVar15) + uVar33 + uVar3 + uVar47;
      uVar20 = uVar20 ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ (uVar20 >> 0xf | uVar20 * 0x20000);
      uVar33 = uVar21 * 0x1000 | uVar21 >> 0x14;
      uVar42 = uVar33 + 0x53d43cec + uVar20;
      uVar46 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar12 ^ uVar18 ^ (uVar14 << 0xf | uVar14 >> 0x11);
      uVar9 = (uVar42 << 0xf | uVar42 >> 0x11) ^ (uVar23 << 7 | uVar23 >> 0x19) ^ uVar2 ^ uVar42 ^
              (uVar42 >> 9 | uVar42 << 0x17);
      uVar19 = uVar38 * 0x200 | uVar38 >> 0x17;
      uVar47 = uVar13 >> 0xd | uVar13 << 0x13;
      uVar41 = (uVar33 ^ uVar46) +
               (uVar4 ^ uVar9) + uVar32 + (uVar38 & uVar34 | (uVar38 | uVar34) & uVar21);
      uVar13 = ((uVar13 ^ uVar40) & uVar20 ^ uVar40) + uVar15 + uVar4 + uVar46;
      uVar13 = uVar13 ^ (uVar13 * 0x200 | uVar13 >> 0x17) ^ (uVar13 >> 0xf | uVar13 * 0x20000);
      uVar46 = uVar41 * 0x1000 | uVar41 >> 0x14;
      uVar15 = uVar30 ^ uVar39 ^ (uVar24 << 0xf | uVar24 >> 0x11);
      uVar42 = uVar46 + 0xa7a879d8 + uVar13;
      uVar42 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar32 = (uVar15 >> 9 | uVar15 << 0x17) ^
               (uVar15 << 0xf | uVar15 >> 0x11) ^ (uVar43 << 7 | uVar43 >> 0x19) ^ uVar3 ^ uVar15;
      uVar38 = uVar21 * 0x200 | uVar21 >> 0x17;
      uVar33 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar21 = (uVar46 ^ uVar42) +
               (uVar32 ^ uVar14) + uVar34 + (uVar21 & uVar19 | (uVar21 | uVar19) & uVar41);
      uVar20 = ((uVar20 ^ uVar47) & uVar13 ^ uVar47) + uVar40 + uVar14 + uVar42;
      uVar20 = uVar20 ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ (uVar20 >> 0xf | uVar20 * 0x20000);
      uVar15 = uVar21 * 0x1000 | uVar21 >> 0x14;
      uVar42 = uVar15 + 0x4f50f3b1 + uVar20;
      uVar46 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar35 ^ uVar1 ^ (uVar17 << 0xf | uVar17 >> 0x11);
      uVar5 = (uVar42 >> 9 | uVar42 << 0x17) ^
              (uVar42 << 0xf | uVar42 >> 0x11) ^ (uVar28 << 7 | uVar28 >> 0x19) ^ uVar4 ^ uVar42;
      uVar8 = uVar41 * 0x200 | uVar41 >> 0x17;
      uVar40 = (uVar15 ^ uVar46) +
               (uVar24 ^ uVar5) + uVar19 + (uVar41 & uVar38 | (uVar41 | uVar38) & uVar21);
      uVar15 = uVar13 >> 0xd | uVar13 << 0x13;
      uVar13 = ((uVar13 ^ uVar33) & uVar20 ^ uVar33) + uVar47 + uVar24 + uVar46;
      uVar13 = uVar13 ^ (uVar13 * 0x200 | uVar13 >> 0x17) ^ (uVar13 >> 0xf | uVar13 * 0x20000);
      uVar47 = uVar40 * 0x1000 | uVar40 >> 0x14;
      uVar42 = uVar47 + 0x9ea1e762 + uVar13;
      uVar41 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar23 ^ uVar2 ^ (uVar9 << 0xf | uVar9 >> 0x11);
      uVar6 = (uVar42 >> 9 | uVar42 << 0x17) ^
              (uVar42 << 0xf | uVar42 >> 0x11) ^ (uVar16 << 7 | uVar16 >> 0x19) ^ uVar14 ^ uVar42;
      uVar46 = uVar21 * 0x200 | uVar21 >> 0x17;
      uVar34 = (uVar47 ^ uVar41) +
               (uVar17 ^ uVar6) + uVar38 + (uVar21 & uVar8 | (uVar21 | uVar8) & uVar40);
      uVar19 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar20 = ((uVar20 ^ uVar15) & uVar13 ^ uVar15) + uVar33 + uVar17 + uVar41;
      uVar20 = uVar20 ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ (uVar20 >> 0xf | uVar20 * 0x20000);
      uVar33 = uVar34 * 0x1000 | uVar34 >> 0x14;
      uVar42 = uVar33 + 0x3d43cec5 + uVar20;
      uVar41 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar43 ^ uVar3 ^ (uVar32 << 0xf | uVar32 >> 0x11);
      uVar7 = (uVar42 >> 9 | uVar42 << 0x17) ^
              (uVar42 << 0xf | uVar42 >> 0x11) ^ (uVar18 << 7 | uVar18 >> 0x19) ^ uVar24 ^ uVar42;
      uVar21 = uVar40 * 0x200 | uVar40 >> 0x17;
      uVar47 = uVar13 >> 0xd | uVar13 << 0x13;
      uVar38 = (uVar33 ^ uVar41) +
               (uVar7 ^ uVar9) + uVar8 + (uVar40 & uVar46 | (uVar40 | uVar46) & uVar34);
      uVar13 = ((uVar13 ^ uVar19) & uVar20 ^ uVar19) + uVar15 + uVar9 + uVar41;
      uVar13 = uVar13 ^ (uVar13 * 0x200 | uVar13 >> 0x17) ^ (uVar13 >> 0xf | uVar13 * 0x20000);
      uVar15 = uVar38 * 0x1000 | uVar38 >> 0x14;
      uVar42 = uVar15 + 0x7a879d8a + uVar13;
      uVar40 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar28 ^ uVar4 ^ (uVar5 << 0xf | uVar5 >> 0x11);
      uVar8 = (uVar42 >> 9 | uVar42 << 0x17) ^
              (uVar42 << 0xf | uVar42 >> 0x11) ^ (uVar39 << 7 | uVar39 >> 0x19) ^ uVar17 ^ uVar42;
      uVar41 = uVar34 * 0x200 | uVar34 >> 0x17;
      uVar33 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar46 = (uVar15 ^ uVar40) +
               (uVar32 ^ uVar8) + uVar46 + (uVar34 & uVar21 | (uVar34 | uVar21) & uVar38);
      uVar20 = ((uVar20 ^ uVar47) & uVar13 ^ uVar47) + uVar19 + uVar32 + uVar40;
      uVar20 = uVar20 ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ (uVar20 >> 0xf | uVar20 * 0x20000);
      uVar15 = uVar46 * 0x1000 | uVar46 >> 0x14;
      uVar42 = uVar15 + 0xf50f3b14 + uVar20;
      uVar34 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar16 ^ uVar14 ^ (uVar6 << 0xf | uVar6 >> 0x11);
      uVar40 = (uVar42 >> 9 | uVar42 << 0x17) ^
               (uVar42 << 0xf | uVar42 >> 0x11) ^ (uVar1 << 7 | uVar1 >> 0x19) ^ uVar9 ^ uVar42;
      uVar19 = uVar38 * 0x200 | uVar38 >> 0x17;
      uVar38 = (uVar15 ^ uVar34) +
               (uVar5 ^ uVar40) + uVar21 + (uVar38 & uVar41 | (uVar38 | uVar41) & uVar46);
      uVar15 = uVar13 >> 0xd | uVar13 << 0x13;
      uVar13 = ((uVar13 ^ uVar33) & uVar20 ^ uVar33) + uVar47 + uVar5 + uVar34;
      uVar13 = uVar13 ^ (uVar13 * 0x200 | uVar13 >> 0x17) ^ (uVar13 >> 0xf | uVar13 * 0x20000);
      uVar47 = uVar38 * 0x1000 | uVar38 >> 0x14;
      uVar42 = uVar47 + 0xea1e7629 + uVar13;
      uVar21 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar18 ^ uVar24 ^ (uVar7 << 0xf | uVar7 >> 0x11);
      uVar34 = (uVar42 >> 9 | uVar42 << 0x17) ^
               (uVar42 << 0xf | uVar42 >> 0x11) ^ (uVar2 << 7 | uVar2 >> 0x19) ^ uVar32 ^ uVar42;
      uVar43 = uVar46 * 0x200 | uVar46 >> 0x17;
      uVar10 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar18 = (uVar47 ^ uVar21) +
               (uVar6 ^ uVar34) + uVar41 + (uVar46 & uVar19 | (uVar46 | uVar19) & uVar38);
      uVar20 = ((uVar20 ^ uVar15) & uVar13 ^ uVar15) + uVar33 + uVar6 + uVar21;
      uVar20 = uVar20 ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ (uVar20 >> 0xf | uVar20 * 0x20000);
      uVar33 = uVar18 * 0x1000 | uVar18 >> 0x14;
      uVar42 = uVar33 + 0xd43cec53 + uVar20;
      uVar46 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar39 ^ uVar17 ^ (uVar8 << 0xf | uVar8 >> 0x11);
      uVar41 = (uVar42 >> 9 | uVar42 << 0x17) ^
               (uVar42 << 0xf | uVar42 >> 0x11) ^ (uVar3 << 7 | uVar3 >> 0x19) ^ uVar5 ^ uVar42;
      uVar21 = uVar38 * 0x200 | uVar38 >> 0x17;
      uVar47 = uVar13 >> 0xd | uVar13 << 0x13;
      uVar38 = (uVar33 ^ uVar46) +
               (uVar7 ^ uVar41) + uVar19 + (uVar38 & uVar43 | (uVar38 | uVar43) & uVar18);
      uVar13 = ((uVar13 ^ uVar10) & uVar20 ^ uVar10) + uVar15 + uVar7 + uVar46;
      uVar13 = uVar13 ^ (uVar13 * 0x200 | uVar13 >> 0x17) ^ (uVar13 >> 0xf | uVar13 * 0x20000);
      uVar15 = uVar38 * 0x1000 | uVar38 >> 0x14;
      uVar42 = uVar15 + 0xa879d8a7 + uVar13;
      uVar39 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar1 ^ uVar9 ^ (uVar40 << 0xf | uVar40 >> 0x11);
      uVar46 = (uVar42 >> 9 | uVar42 << 0x17) ^
               (uVar42 << 0xf | uVar42 >> 0x11) ^ (uVar4 << 7 | uVar4 >> 0x19) ^ uVar6 ^ uVar42;
      uVar19 = uVar18 * 0x200 | uVar18 >> 0x17;
      uVar11 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar33 = (uVar15 ^ uVar39) +
               (uVar8 ^ uVar46) + uVar43 + (uVar18 & uVar21 | (uVar18 | uVar21) & uVar38);
      uVar20 = ((uVar20 ^ uVar47) & uVar13 ^ uVar47) + uVar10 + uVar8 + uVar39;
      uVar20 = uVar20 ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ (uVar20 >> 0xf | uVar20 * 0x20000);
      uVar43 = uVar33 * 0x1000 | uVar33 >> 0x14;
      uVar42 = uVar43 + 0x50f3b14f + uVar20;
      uVar15 = uVar2 ^ uVar32 ^ (uVar34 << 0xf | uVar34 >> 0x11);
      uVar42 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar18 = (uVar15 >> 9 | uVar15 << 0x17) ^
               (uVar15 << 0xf | uVar15 >> 0x11) ^ (uVar14 << 7 | uVar14 >> 0x19) ^ uVar7 ^ uVar15;
      uVar39 = uVar38 * 0x200 | uVar38 >> 0x17;
      uVar15 = uVar13 >> 0xd | uVar13 << 0x13;
      uVar1 = (uVar43 ^ uVar42) +
              (uVar40 ^ uVar18) + uVar21 + (uVar38 & uVar19 | (uVar38 | uVar19) & uVar33);
      uVar13 = ((uVar13 ^ uVar11) & uVar20 ^ uVar11) + uVar47 + uVar40 + uVar42;
      uVar13 = uVar13 ^ (uVar13 * 0x200 | uVar13 >> 0x17) ^ (uVar13 >> 0xf | uVar13 * 0x20000);
      uVar47 = uVar1 * 0x1000 | uVar1 >> 0x14;
      uVar42 = uVar47 + 0xa1e7629e + uVar13;
      uVar43 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar3 ^ uVar5 ^ (uVar41 << 0xf | uVar41 >> 0x11);
      uVar21 = (uVar42 >> 9 | uVar42 << 0x17) ^
               (uVar42 << 0xf | uVar42 >> 0x11) ^ (uVar24 << 7 | uVar24 >> 0x19) ^ uVar8 ^ uVar42;
      uVar38 = uVar33 * 0x200 | uVar33 >> 0x17;
      uVar33 = (uVar47 ^ uVar43) +
               (uVar34 ^ uVar21) + uVar19 + (uVar33 & uVar39 | (uVar33 | uVar39) & uVar1);
      uVar19 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar20 = ((uVar20 ^ uVar15) & uVar13 ^ uVar15) + uVar11 + uVar34 + uVar43;
      uVar20 = uVar20 ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ (uVar20 >> 0xf | uVar20 * 0x20000);
      uVar47 = uVar33 * 0x1000 | uVar33 >> 0x14;
      uVar42 = uVar47 + 0x43cec53d + uVar20;
      uVar2 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar4 ^ uVar6 ^ (uVar46 << 0xf | uVar46 >> 0x11);
      uVar43 = (uVar42 >> 9 | uVar42 << 0x17) ^
               (uVar42 << 0xf | uVar42 >> 0x11) ^ (uVar17 << 7 | uVar17 >> 0x19) ^ uVar40 ^ uVar42;
      uVar4 = uVar1 * 0x200 | uVar1 >> 0x17;
      uVar1 = (uVar47 ^ uVar2) +
              (uVar41 ^ uVar43) + uVar39 + (uVar1 & uVar38 | (uVar1 | uVar38) & uVar33);
      uVar47 = uVar13 >> 0xd | uVar13 << 0x13;
      uVar13 = ((uVar13 ^ uVar19) & uVar20 ^ uVar19) + uVar15 + uVar41 + uVar2;
      uVar13 = uVar13 ^ (uVar13 * 0x200 | uVar13 >> 0x17) ^ (uVar13 >> 0xf | uVar13 * 0x20000);
      uVar15 = uVar1 * 0x1000 | uVar1 >> 0x14;
      uVar39 = uVar14 ^ uVar7 ^ (uVar18 << 0xf | uVar18 >> 0x11);
      uVar42 = uVar15 + 0x879d8a7a + uVar13;
      uVar42 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar16 = (uVar39 >> 9 | uVar39 << 0x17) ^
               (uVar39 << 0xf | uVar39 >> 0x11) ^ (uVar9 << 7 | uVar9 >> 0x19) ^ uVar34 ^ uVar39;
      uVar2 = uVar33 * 0x200 | uVar33 >> 0x17;
      uVar39 = (uVar15 ^ uVar42) +
               (uVar46 ^ uVar16) + uVar38 + (uVar33 & uVar4 | (uVar33 | uVar4) & uVar1);
      uVar33 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar20 = ((uVar20 ^ uVar47) & uVar13 ^ uVar47) + uVar19 + uVar46 + uVar42;
      uVar20 = uVar20 ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ (uVar20 >> 0xf | uVar20 * 0x20000);
      uVar15 = uVar39 * 0x1000 | uVar39 >> 0x14;
      uVar42 = uVar15 + 0xf3b14f5 + uVar20;
      uVar19 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar24 ^ uVar8 ^ (uVar21 << 0xf | uVar21 >> 0x11);
      uVar10 = (uVar42 >> 9 | uVar42 << 0x17) ^
               (uVar42 << 0xf | uVar42 >> 0x11) ^ (uVar32 << 7 | uVar32 >> 0x19) ^ uVar41 ^ uVar42;
      uVar3 = uVar1 * 0x200 | uVar1 >> 0x17;
      uVar38 = (uVar15 ^ uVar19) +
               (uVar18 ^ uVar10) + uVar4 + (uVar1 & uVar2 | (uVar1 | uVar2) & uVar39);
      uVar15 = uVar13 >> 0xd | uVar13 << 0x13;
      uVar13 = ((uVar13 ^ uVar33) & uVar20 ^ uVar33) + uVar47 + uVar18 + uVar19;
      uVar13 = uVar13 ^ (uVar13 * 0x200 | uVar13 >> 0x17) ^ (uVar13 >> 0xf | uVar13 * 0x20000);
      uVar47 = uVar38 * 0x1000 | uVar38 >> 0x14;
      uVar42 = uVar47 + 0x1e7629ea + uVar13;
      uVar19 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar17 ^ uVar40 ^ (uVar43 << 0xf | uVar43 >> 0x11);
      uVar11 = (uVar42 >> 9 | uVar42 << 0x17) ^
               (uVar42 << 0xf | uVar42 >> 0x11) ^ (uVar5 << 7 | uVar5 >> 0x19) ^ uVar46 ^ uVar42;
      uVar1 = uVar39 * 0x200 | uVar39 >> 0x17;
      uVar24 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar39 = (uVar47 ^ uVar19) +
               (uVar21 ^ uVar11) + uVar2 + (uVar39 & uVar3 | (uVar39 | uVar3) & uVar38);
      uVar20 = ((uVar20 ^ uVar15) & uVar13 ^ uVar15) + uVar33 + uVar21 + uVar19;
      uVar20 = uVar20 ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ (uVar20 >> 0xf | uVar20 * 0x20000);
      uVar33 = uVar39 * 0x1000 | uVar39 >> 0x14;
      uVar47 = uVar9 ^ uVar34 ^ (uVar16 << 0xf | uVar16 >> 0x11);
      uVar42 = uVar33 + 0x3cec53d4 + uVar20;
      uVar42 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar14 = (uVar47 >> 9 | uVar47 << 0x17) ^
               (uVar47 << 0xf | uVar47 >> 0x11) ^ (uVar6 << 7 | uVar6 >> 0x19) ^ uVar18 ^ uVar47;
      uVar19 = uVar38 * 0x200 | uVar38 >> 0x17;
      uVar47 = uVar13 >> 0xd | uVar13 << 0x13;
      uVar38 = (uVar33 ^ uVar42) +
               (uVar43 ^ uVar14) + uVar3 + (uVar38 & uVar1 | (uVar38 | uVar1) & uVar39);
      uVar13 = ((uVar13 ^ uVar24) & uVar20 ^ uVar24) + uVar15 + uVar43 + uVar42;
      uVar13 = uVar13 ^ (uVar13 * 0x200 | uVar13 >> 0x17) ^ (uVar13 >> 0xf | uVar13 * 0x20000);
      uVar2 = uVar38 * 0x1000 | uVar38 >> 0x14;
      uVar42 = uVar2 + 0x79d8a7a8 + uVar13;
      uVar15 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar32 ^ uVar41 ^ (uVar10 << 0xf | uVar10 >> 0x11);
      uVar9 = (uVar42 >> 9 | uVar42 << 0x17) ^
              (uVar42 << 0xf | uVar42 >> 0x11) ^ (uVar7 << 7 | uVar7 >> 0x19) ^ uVar21 ^ uVar42;
      uVar3 = uVar39 * 0x200 | uVar39 >> 0x17;
      uVar33 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar2 = (uVar2 ^ uVar15) +
              (uVar9 ^ uVar16) + uVar1 + (uVar39 & uVar19 | (uVar39 | uVar19) & uVar38);
      uVar20 = ((uVar20 ^ uVar47) & uVar13 ^ uVar47) + uVar24 + uVar16 + uVar15;
      uVar20 = uVar20 ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ (uVar20 >> 0xf | uVar20 * 0x20000);
      uVar1 = uVar2 * 0x1000 | uVar2 >> 0x14;
      uVar42 = uVar1 + 0xf3b14f50 + uVar20;
      uVar24 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar5 ^ uVar46 ^ (uVar11 << 0xf | uVar11 >> 0x11);
      uVar39 = (uVar42 >> 9 | uVar42 << 0x17) ^
               (uVar42 << 0xf | uVar42 >> 0x11) ^ (uVar8 << 7 | uVar8 >> 0x19) ^ uVar43 ^ uVar42;
      uVar32 = uVar38 * 0x200 | uVar38 >> 0x17;
      uVar15 = uVar13 >> 0xd | uVar13 << 0x13;
      uVar19 = (uVar1 ^ uVar24) +
               (uVar10 ^ uVar39) + uVar19 + (uVar38 & uVar3 | (uVar38 | uVar3) & uVar2);
      uVar13 = ((uVar13 ^ uVar33) & uVar20 ^ uVar33) + uVar47 + uVar10 + uVar24;
      uVar13 = uVar13 ^ (uVar13 * 0x200 | uVar13 >> 0x17) ^ (uVar13 >> 0xf | uVar13 * 0x20000);
      uVar38 = uVar19 * 0x1000 | uVar19 >> 0x14;
      uVar42 = uVar38 + 0xe7629ea1 + uVar13;
      uVar47 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar6 ^ uVar18 ^ (uVar14 << 0xf | uVar14 >> 0x11);
      uVar1 = (uVar42 >> 9 | uVar42 << 0x17) ^
              (uVar42 << 0xf | uVar42 >> 0x11) ^ (uVar40 << 7 | uVar40 >> 0x19) ^ uVar16 ^ uVar42;
      uVar4 = uVar2 * 0x200 | uVar2 >> 0x17;
      uVar24 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar38 = (uVar38 ^ uVar47) +
               (uVar11 ^ uVar1) + uVar3 + (uVar2 & uVar32 | (uVar2 | uVar32) & uVar19);
      uVar20 = ((uVar20 ^ uVar15) & uVar13 ^ uVar15) + uVar33 + uVar11 + uVar47;
      uVar20 = uVar20 ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ (uVar20 >> 0xf | uVar20 * 0x20000);
      uVar5 = uVar38 * 0x1000 | uVar38 >> 0x14;
      uVar42 = uVar5 + 0xcec53d43 + uVar20;
      uVar47 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar7 ^ uVar21 ^ (uVar9 << 0xf | uVar9 >> 0x11);
      uVar2 = (uVar42 >> 9 | uVar42 << 0x17) ^
              (uVar42 << 0xf | uVar42 >> 0x11) ^ (uVar34 << 7 | uVar34 >> 0x19) ^ uVar10 ^ uVar42;
      uVar3 = uVar19 * 0x200 | uVar19 >> 0x17;
      uVar33 = uVar13 >> 0xd | uVar13 << 0x13;
      uVar5 = (uVar5 ^ uVar47) +
              (uVar2 ^ uVar14) + uVar32 + (uVar19 & uVar4 | (uVar19 | uVar4) & uVar38);
      uVar32 = ((uVar13 ^ uVar24) & uVar20 ^ uVar24) + uVar15 + uVar14 + uVar47;
      uVar32 = uVar32 ^ (uVar32 * 0x200 | uVar32 >> 0x17) ^ (uVar32 >> 0xf | uVar32 * 0x20000);
      uVar15 = uVar5 * 0x1000 | uVar5 >> 0x14;
      uVar42 = uVar15 + 0x9d8a7a87 + uVar32;
      uVar13 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar8 ^ uVar43 ^ (uVar39 << 0xf | uVar39 >> 0x11);
      uVar47 = (uVar42 >> 9 | uVar42 << 0x17) ^
               (uVar42 << 0xf | uVar42 >> 0x11) ^ (uVar41 << 7 | uVar41 >> 0x19) ^ uVar11 ^ uVar42;
      uVar19 = uVar38 * 0x200 | uVar38 >> 0x17;
      uVar42 = (uVar15 ^ uVar13) +
               (uVar9 ^ uVar47) + uVar4 + (uVar38 & uVar3 | (uVar38 | uVar3) & uVar5);
      uVar38 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar24 = ((uVar20 ^ uVar33) & uVar32 ^ uVar33) + uVar24 + uVar9 + uVar13;
      uVar24 = uVar24 ^ (uVar24 * 0x200 | uVar24 >> 0x17) ^ (uVar24 >> 0xf | uVar24 * 0x20000);
      uVar4 = uVar42 * 0x1000 | uVar42 >> 0x14;
      uVar13 = uVar4 + 0x3b14f50f + uVar24;
      uVar15 = uVar13 * 0x80 | uVar13 >> 0x19;
      uVar13 = uVar40 ^ uVar16 ^ (uVar1 << 0xf | uVar1 >> 0x11);
      uVar20 = (uVar13 >> 9 | uVar13 << 0x17) ^
               (uVar13 << 0xf | uVar13 >> 0x11) ^ (uVar46 << 7 | uVar46 >> 0x19) ^ uVar14 ^ uVar13;
      uVar40 = uVar5 * 0x200 | uVar5 >> 0x17;
      uVar13 = (uVar4 ^ uVar15) +
               (uVar39 ^ uVar20) + uVar3 + (uVar5 & uVar19 | (uVar5 | uVar19) & uVar42);
      uVar5 = uVar32 >> 0xd | uVar32 << 0x13;
      uVar33 = ((uVar32 ^ uVar38) & uVar24 ^ uVar38) + uVar33 + uVar39 + uVar15;
      uVar33 = (uVar33 * 0x200 | uVar33 >> 0x17) ^ (uVar33 >> 0xf | uVar33 * 0x20000) ^ uVar33;
      uVar4 = uVar13 * 0x1000 | uVar13 >> 0x14;
      uVar15 = uVar4 + 0x7629ea1e + uVar33;
      uVar3 = uVar15 * 0x80 | uVar15 >> 0x19;
      uVar15 = uVar34 ^ uVar10 ^ (uVar2 << 0xf | uVar2 >> 0x11);
      uVar15 = (uVar15 >> 9 | uVar15 << 0x17) ^
               (uVar15 << 0xf | uVar15 >> 0x11) ^ (uVar18 << 7 | uVar18 >> 0x19) ^ uVar9 ^ uVar15;
      uVar32 = uVar24 >> 0xd | uVar24 << 0x13;
      uVar8 = uVar42 * 0x200 | uVar42 >> 0x17;
      uVar4 = (uVar4 ^ uVar3) +
              (uVar1 ^ uVar15) + uVar19 + (uVar42 & uVar40 | (uVar42 | uVar40) & uVar13);
      uVar38 = ((uVar24 ^ uVar5) & uVar33 ^ uVar5) + uVar38 + uVar1 + uVar3;
      uVar24 = uVar4 * 0x1000 | uVar4 >> 0x14;
      uVar38 = (uVar38 * 0x200 | uVar38 >> 0x17) ^ (uVar38 >> 0xf | uVar38 * 0x20000) ^ uVar38;
      uVar42 = uVar24 + 0xec53d43c + uVar38;
      uVar19 = uVar41 ^ uVar11 ^ (uVar47 << 0xf | uVar47 >> 0x11);
      uVar42 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar34 = (uVar19 >> 9 | uVar19 << 0x17) ^
               (uVar19 << 0xf | uVar19 >> 0x11) ^ (uVar21 << 7 | uVar21 >> 0x19) ^ uVar39 ^ uVar19;
      uVar6 = uVar13 * 0x200 | uVar13 >> 0x17;
      uVar7 = (uVar24 ^ uVar42) +
              (uVar2 ^ uVar34) + uVar40 + (uVar13 & uVar8 | (uVar13 | uVar8) & uVar4);
      uVar3 = uVar33 >> 0xd | uVar33 << 0x13;
      uVar24 = uVar7 * 0x1000 | uVar7 >> 0x14;
      uVar40 = ((uVar33 ^ uVar32) & uVar38 ^ uVar32) + uVar5 + uVar2 + uVar42;
      uVar40 = uVar40 ^ (uVar40 * 0x200 | uVar40 >> 0x17) ^ (uVar40 >> 0xf | uVar40 * 0x20000);
      uVar42 = uVar24 + 0xd8a7a879 + uVar40;
      uVar33 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar46 ^ uVar14 ^ (uVar20 << 0xf | uVar20 >> 0x11);
      uVar19 = (uVar42 >> 9 | uVar42 << 0x17) ^
               (uVar42 << 0xf | uVar42 >> 0x11) ^ (uVar43 << 7 | uVar43 >> 0x19) ^ uVar1 ^ uVar42;
      uVar5 = uVar4 * 0x200 | uVar4 >> 0x17;
      uVar13 = uVar38 >> 0xd | uVar38 << 0x13;
      uVar46 = (uVar24 ^ uVar33) +
               (uVar47 ^ uVar19) + uVar8 + (uVar4 & uVar6 | (uVar4 | uVar6) & uVar7);
      uVar33 = ((uVar38 ^ uVar3) & uVar40 ^ uVar3) + uVar32 + uVar47 + uVar33;
      uVar33 = uVar33 ^ (uVar33 * 0x200 | uVar33 >> 0x17) ^ (uVar33 >> 0xf | uVar33 * 0x20000);
      uVar32 = uVar46 * 0x1000 | uVar46 >> 0x14;
      uVar42 = uVar32 + 0xb14f50f3 + uVar33;
      uVar38 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar18 ^ uVar9 ^ (uVar15 << 0xf | uVar15 >> 0x11);
      uVar24 = (uVar42 >> 9 | uVar42 << 0x17) ^
               (uVar42 << 0xf | uVar42 >> 0x11) ^ (uVar16 << 7 | uVar16 >> 0x19) ^ uVar2 ^ uVar42;
      uVar8 = uVar7 * 0x200 | uVar7 >> 0x17;
      uVar41 = uVar40 >> 0xd | uVar40 << 0x13;
      uVar6 = (uVar32 ^ uVar38) +
              (uVar20 ^ uVar24) + uVar6 + (uVar7 & uVar5 | (uVar7 | uVar5) & uVar46);
      uVar32 = ((uVar40 ^ uVar13) & uVar33 ^ uVar13) + uVar3 + uVar20 + uVar38;
      uVar32 = uVar32 ^ (uVar32 * 0x200 | uVar32 >> 0x17) ^ (uVar32 >> 0xf | uVar32 * 0x20000);
      uVar18 = uVar6 * 0x1000 | uVar6 >> 0x14;
      uVar42 = uVar18 + 0x629ea1e7 + uVar32;
      uVar4 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar21 ^ uVar39 ^ (uVar34 << 0xf | uVar34 >> 0x11);
      uVar3 = (uVar42 >> 9 | uVar42 << 0x17) ^
              (uVar42 << 0xf | uVar42 >> 0x11) ^ (uVar10 << 7 | uVar10 >> 0x19) ^ uVar47 ^ uVar42;
      uVar40 = uVar46 * 0x200 | uVar46 >> 0x17;
      uVar38 = uVar33 >> 0xd | uVar33 << 0x13;
      uVar18 = (uVar18 ^ uVar4) +
               (uVar15 ^ uVar3) + uVar5 + (uVar46 & uVar8 | (uVar46 | uVar8) & uVar6);
      uVar13 = ((uVar33 ^ uVar41) & uVar32 ^ uVar41) + uVar13 + uVar15 + uVar4;
      uVar13 = uVar13 ^ (uVar13 * 0x200 | uVar13 >> 0x17) ^ (uVar13 >> 0xf | uVar13 * 0x20000);
      uVar33 = uVar18 * 0x1000 | uVar18 >> 0x14;
      uVar42 = uVar33 + 0xc53d43ce + uVar13;
      uVar42 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar21 = uVar43 ^ uVar1 ^ (uVar19 << 0xf | uVar19 >> 0x11);
      uVar4 = (uVar21 >> 9 | uVar21 << 0x17) ^
              (uVar21 << 0xf | uVar21 >> 0x11) ^ (uVar11 << 7 | uVar11 >> 0x19) ^ uVar20 ^ uVar21;
      uVar12 = uVar6 * 0x200 | uVar6 >> 0x17;
      uVar46 = (uVar33 ^ uVar42) +
               (uVar34 ^ uVar4) + uVar8 + (uVar6 & uVar40 | (uVar6 | uVar40) & uVar18);
      uVar21 = uVar32 >> 0xd | uVar32 << 0x13;
      uVar43 = ((uVar32 ^ uVar38) & uVar13 ^ uVar38) + uVar41 + uVar34 + uVar42;
      uVar43 = uVar43 ^ (uVar43 * 0x200 | uVar43 >> 0x17) ^ (uVar43 >> 0xf | uVar43 * 0x20000);
      uVar33 = uVar46 * 0x1000 | uVar46 >> 0x14;
      uVar42 = uVar33 + 0x8a7a879d + uVar43;
      uVar42 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar32 = uVar2 ^ uVar16 ^ (uVar24 << 0xf | uVar24 >> 0x11);
      uVar41 = (uVar32 >> 9 | uVar32 << 0x17) ^
               (uVar32 << 0xf | uVar32 >> 0x11) ^ (uVar14 << 7 | uVar14 >> 0x19) ^ uVar15 ^ uVar32;
      uVar7 = uVar18 * 0x200 | uVar18 >> 0x17;
      uVar40 = (uVar33 ^ uVar42) +
               (uVar19 ^ uVar41) + uVar40 + (uVar18 & uVar12 | (uVar18 | uVar12) & uVar46);
      uVar33 = uVar13 >> 0xd | uVar13 << 0x13;
      uVar18 = ((uVar13 ^ uVar21) & uVar43 ^ uVar21) + uVar38 + uVar19 + uVar42;
      uVar18 = uVar18 ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ (uVar18 >> 0xf | uVar18 * 0x20000);
      uVar13 = uVar40 * 0x1000 | uVar40 >> 0x14;
      uVar42 = uVar13 + 0x14f50f3b + uVar18;
      uVar32 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar10 ^ uVar47 ^ (uVar3 << 0xf | uVar3 >> 0x11);
      uVar38 = (uVar42 >> 9 | uVar42 << 0x17) ^
               (uVar42 << 0xf | uVar42 >> 0x11) ^ (uVar9 << 7 | uVar9 >> 0x19) ^ uVar34 ^ uVar42;
      uVar6 = uVar46 * 0x200 | uVar46 >> 0x17;
      uVar5 = uVar43 >> 0xd | uVar43 << 0x13;
      uVar10 = (uVar13 ^ uVar32) +
               (uVar24 ^ uVar38) + uVar12 + (uVar46 & uVar7 | (uVar46 | uVar7) & uVar40);
      uVar46 = uVar10 * 0x1000 | uVar10 >> 0x14;
      uVar13 = ((uVar43 ^ uVar33) & uVar18 ^ uVar33) + uVar21 + uVar24 + uVar32;
      uVar13 = uVar13 ^ (uVar13 * 0x200 | uVar13 >> 0x17) ^ (uVar13 >> 0xf | uVar13 * 0x20000);
      uVar42 = uVar46 + 0x29ea1e76 + uVar13;
      uVar21 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar11 ^ uVar20 ^ (uVar4 << 0xf | uVar4 >> 0x11);
      uVar8 = uVar40 * 0x200 | uVar40 >> 0x17;
      uVar32 = (uVar42 >> 9 | uVar42 << 0x17) ^
               (uVar42 << 0xf | uVar42 >> 0x11) ^ (uVar39 << 7 | uVar39 >> 0x19) ^ uVar19 ^ uVar42;
      uVar43 = uVar18 >> 0xd | uVar18 << 0x13;
      uVar40 = (uVar46 ^ uVar21) +
               (uVar3 ^ uVar32) + uVar7 + (uVar40 & uVar6 | (uVar40 | uVar6) & uVar10);
      uVar7 = ((uVar18 ^ uVar5) & uVar13 ^ uVar5) + uVar33 + uVar3 + uVar21;
      uVar7 = uVar7 ^ (uVar7 * 0x200 | uVar7 >> 0x17) ^ (uVar7 >> 0xf | uVar7 * 0x20000);
      uVar46 = uVar40 * 0x1000 | uVar40 >> 0x14;
      uVar42 = uVar46 + 0x53d43cec + uVar7;
      uVar18 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar15 ^ uVar14 ^ (uVar41 << 0xf | uVar41 >> 0x11);
      uVar33 = (uVar42 >> 9 | uVar42 << 0x17) ^
               (uVar42 << 0xf | uVar42 >> 0x11) ^ (uVar1 << 7 | uVar1 >> 0x19) ^ uVar24 ^ uVar42;
      uVar11 = uVar10 * 0x200 | uVar10 >> 0x17;
      uVar21 = uVar13 >> 0xd | uVar13 << 0x13;
      uVar46 = (uVar46 ^ uVar18) +
               (uVar4 ^ uVar33) + uVar6 + (uVar10 & uVar8 | (uVar10 | uVar8) & uVar40);
      uVar18 = ((uVar13 ^ uVar43) & uVar7 ^ uVar43) + uVar5 + uVar4 + uVar18;
      uVar18 = uVar18 ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ (uVar18 >> 0xf | uVar18 * 0x20000);
      uVar13 = uVar46 * 0x1000 | uVar46 >> 0x14;
      uVar34 = uVar9 ^ uVar34 ^ (uVar38 << 0xf | uVar38 >> 0x11);
      uVar42 = uVar13 + 0xa7a879d8 + uVar18;
      uVar42 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar5 = (uVar34 >> 9 | uVar34 << 0x17) ^
              (uVar34 << 0xf | uVar34 >> 0x11) ^ (uVar2 << 7 | uVar2 >> 0x19) ^ uVar3 ^ uVar34;
      uVar34 = uVar40 * 0x200 | uVar40 >> 0x17;
      uVar8 = (uVar13 ^ uVar42) +
              (uVar41 ^ uVar5) + uVar8 + (uVar40 & uVar11 | (uVar40 | uVar11) & uVar46);
      uVar6 = uVar7 >> 0xd | uVar7 << 0x13;
      uVar40 = ((uVar7 ^ uVar21) & uVar18 ^ uVar21) + uVar43 + uVar41 + uVar42;
      uVar40 = uVar40 ^ (uVar40 * 0x200 | uVar40 >> 0x17) ^ (uVar40 >> 0xf | uVar40 * 0x20000);
      uVar13 = uVar8 * 0x1000 | uVar8 >> 0x14;
      uVar42 = uVar13 + 0x4f50f3b1 + uVar40;
      uVar43 = uVar42 * 0x80 | uVar42 >> 0x19;
      uVar42 = uVar39 ^ uVar19 ^ (uVar32 << 0xf | uVar32 >> 0x11);
      uVar19 = uVar46 * 0x200 | uVar46 >> 0x17;
      uVar42 = (uVar13 ^ uVar43) +
               ((uVar46 | uVar34) & uVar8 | uVar46 & uVar34) +
               ((uVar42 << 0xf | uVar42 >> 0x11) ^
                (uVar47 << 7 | uVar47 >> 0x19) ^ uVar4 ^ uVar38 ^ uVar42 ^
               (uVar42 >> 9 | uVar42 << 0x17)) + uVar11;
      uVar46 = uVar18 >> 0xd | uVar18 << 0x13;
      uVar47 = ((uVar18 ^ uVar6) & uVar40 ^ uVar6) + uVar21 + uVar38 + uVar43;
      uVar47 = (uVar47 * 0x200 | uVar47 >> 0x17) ^ (uVar47 >> 0xf | uVar47 * 0x20000) ^ uVar47;
      uVar21 = uVar42 * 0x1000 | uVar42 >> 0x14;
      uVar13 = uVar21 + 0x9ea1e762 + uVar47;
      uVar43 = uVar13 * 0x80 | uVar13 >> 0x19;
      uVar13 = uVar1 ^ uVar24 ^ (uVar33 << 0xf | uVar33 >> 0x11);
      uVar18 = uVar8 * 0x200 | uVar8 >> 0x17;
      uVar34 = (uVar21 ^ uVar43) +
               ((uVar8 | uVar19) & uVar42 | uVar8 & uVar19) +
               ((uVar13 << 0xf | uVar13 >> 0x11) ^
                (uVar20 << 7 | uVar20 >> 0x19) ^ uVar41 ^ uVar32 ^ uVar13 ^
               (uVar13 >> 9 | uVar13 << 0x17)) + uVar34;
      uVar24 = uVar40 >> 0xd | uVar40 << 0x13;
      uVar21 = (uVar5 << 0xf | uVar5 >> 0x11) ^ uVar2 ^ uVar3;
      uVar20 = ((uVar40 ^ uVar46) & uVar47 ^ uVar46) + uVar32 + uVar6 + uVar43;
      uVar20 = uVar20 ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ (uVar20 >> 0xf | uVar20 * 0x20000);
      uVar32 = uVar34 * 0x1000 | uVar34 >> 0x14;
      uVar13 = uVar32 + 0x3d43cec5 + uVar20;
      uVar40 = uVar13 * 0x80 | uVar13 >> 0x19;
      uVar13 = ((uVar47 ^ uVar24) & uVar20 ^ uVar24) + uVar33 + uVar46 + uVar40;
      local_6c = local_6c ^
                 (uVar32 ^ uVar40) +
                 ((uVar42 | uVar18) & uVar34 | uVar42 & uVar18) +
                 uVar19 + ((uVar21 << 0xf | uVar21 >> 0x11) ^
                           (uVar15 << 7 | uVar15 >> 0x19) ^ uVar38 ^ uVar33 ^ uVar21 ^
                          (uVar21 >> 9 | uVar21 << 0x17));
      local_64 = local_64 ^ (uVar42 * 0x200 | uVar42 >> 0x17);
      local_50 = local_50 ^ uVar18;
      local_68 = local_68 ^ uVar34;
      param_3[2] = local_64;
      local_5c = local_5c ^ uVar20;
      param_3[3] = local_50;
      local_58 = local_58 ^ (uVar47 >> 0xd | uVar47 << 0x13);
      local_4c = local_4c ^ uVar24;
      local_60 = local_60 ^
                 (uVar13 * 0x200 | uVar13 >> 0x17) ^ (uVar13 >> 0xf | uVar13 * 0x20000) ^ uVar13;
      *param_3 = local_6c;
      param_3[7] = local_4c;
      param_3[1] = local_68;
      param_3[4] = local_60;
      param_3[5] = local_5c;
      param_3[6] = local_58;
      local_48 = puVar22;
    } while (puVar22 < puVar27);
  }
  return;
}



uint * sm3_finish_ctx(uint *param_1,uint *param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(ulong *)(param_1 + 10);
  uVar4 = param_1[9];
  uVar2 = param_1[8] + (int)uVar1;
  param_1[8] = uVar2;
  if (uVar2 < uVar1) {
    uVar4 = uVar4 + 1;
    param_1[9] = uVar4;
  }
  uVar3 = uVar2 * 8;
  uVar4 = uVar4 << 3;
  param_1[(-(ulong)(uVar1 < 0x38) & 0xfffffffffffffff0) + 0x2a] =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
       (uVar2 >> 0x1d | uVar4) << 0x18;
  param_1[(-(ulong)(uVar1 < 0x38) & 0xfffffffffffffff0) + 0x2b] =
       uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar2 * 0x8000000;
  memcpy((void *)((long)(param_1 + 0xc) + uVar1),fillbuf,
         ((-(ulong)(uVar1 < 0x38) & 0xffffffffffffffc0) + 0x78) - uVar1);
  sm3_process_block(param_1 + 0xc,(-(ulong)(uVar1 < 0x38) & 0xffffffffffffffc0) + 0x80,param_1);
  uVar4 = *param_1;
  *param_2 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar4 = param_1[1];
  param_2[1] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar4 = param_1[2];
  param_2[2] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar4 = param_1[3];
  param_2[3] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar4 = param_1[4];
  param_2[4] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar4 = param_1[5];
  param_2[5] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar4 = param_1[6];
  param_2[6] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar4 = param_1[7];
  param_2[7] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
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
      goto LAB_00102c98;
    }
    puVar9 = (undefined8 *)((long)param_1 + (param_2 & 0xffffffffffffffc0));
    sm3_process_block(param_1,param_2 & 0xffffffffffffffc0,param_3);
    param_2 = (ulong)((uint)param_2 & 0x3f);
  }
  if (param_2 == 0) {
    return;
  }
LAB_00102c98:
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

void sm3_buffer(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
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
  uStack_d0 = _UNK_00102fc8;
  local_b0 = 0;
  local_c8 = __LC1;
  uStack_c0 = _UNK_00102fd8;
  sm3_process_bytes(param_1,param_2,&local_d8);
  sm3_finish_ctx(&local_d8,param_3);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


