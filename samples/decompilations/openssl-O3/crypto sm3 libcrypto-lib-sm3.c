
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ossl_sm3_init(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 (*) [16])(param_1 + 10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((long)param_1 + 0x5c) = (undefined1  [16])0x0;
  uVar1 = _UNK_00102d98;
  *param_1 = __LC0;
  param_1[1] = uVar1;
  uVar1 = _UNK_00102da8;
  param_1[2] = __LC1;
  param_1[3] = uVar1;
  return 1;
}



void ossl_sm3_block_data_order(uint *param_1,uint *param_2,long param_3)

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
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint local_a4;
  uint local_74;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_50;
  uint local_4c;
  long local_48;
  uint *local_40;
  
  local_48 = param_3 + -1;
  if (param_3 != 0) {
    local_a4 = *param_1;
    local_4c = param_1[7];
    local_6c = param_1[1];
    local_68 = param_1[2];
    local_50 = param_1[3];
    local_74 = param_1[4];
    local_64 = param_1[5];
    local_60 = param_1[6];
    local_40 = param_2;
    do {
      uVar35 = local_40[5];
      uVar15 = local_40[9];
      uVar12 = *local_40;
      uVar4 = local_40[1];
      uVar31 = local_a4 << 0xc | local_a4 >> 0x14;
      uVar17 = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 | uVar35 << 0x18;
      uVar40 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
      uVar13 = local_40[3];
      uVar7 = local_40[4];
      uVar8 = local_40[2];
      uVar6 = local_40[0xc];
      uVar11 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
      uVar3 = local_40[6];
      uVar1 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar5 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18;
      uVar9 = local_40[0xb];
      uVar27 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      uVar2 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      uVar18 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      uVar4 = local_40[7];
      uVar34 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
      uVar41 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
      uVar19 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      uVar8 = local_40[8];
      uVar20 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
      uVar26 = local_40[10];
      uVar21 = uVar26 >> 0x18 | (uVar26 & 0xff0000) >> 8 | (uVar26 & 0xff00) << 8 | uVar26 << 0x18;
      uVar16 = local_40[0xd];
      uVar14 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8;
      uVar22 = uVar14 | uVar16 << 0x18;
      uVar36 = local_40[0xe];
      uVar33 = uVar36 >> 0x18 | (uVar36 & 0xff0000) >> 8 | (uVar36 & 0xff00) << 8;
      uVar23 = uVar33 | uVar36 << 0x18;
      uVar30 = local_40[0xf];
      uVar10 = uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8 | (uVar30 & 0xff00) << 8;
      uVar24 = uVar10 | uVar30 << 0x18;
      uVar12 = local_74 + 0x79cc4519 + uVar31;
      uVar28 = uVar12 * 0x80 | uVar12 >> 0x19;
      uVar32 = (uVar11 ^ uVar1) + local_50 + (local_a4 ^ local_6c ^ local_68) + (uVar31 ^ uVar28);
      uVar31 = local_64 >> 0xd | local_64 << 0x13;
      uVar28 = (local_64 ^ local_74 ^ local_60) + uVar11 + local_4c + uVar28;
      uVar29 = local_6c << 9 | local_6c >> 0x17;
      uVar28 = (uVar28 * 0x200 | uVar28 >> 0x17) ^ (uVar28 >> 0xf | uVar28 * 0x20000) ^ uVar28;
      uVar12 = uVar11 ^ uVar19 ^ (uVar14 << 0xf | uVar22 >> 0x11);
      uVar37 = (uVar12 << 0xf | uVar12 >> 0x11) ^
               (uVar5 << 7 | (uVar13 << 0x18) >> 0x19) ^ uVar21 ^ uVar12 ^
               (uVar12 >> 9 | uVar12 << 0x17);
      uVar13 = uVar32 * 0x1000 | uVar32 >> 0x14;
      uVar12 = uVar28 + 0xf3988a32 + uVar13;
      uVar14 = uVar12 * 0x80 | uVar12 >> 0x19;
      uVar25 = (uVar17 ^ uVar2) + local_68 + (local_a4 ^ uVar29 ^ uVar32) + (uVar13 ^ uVar14);
      uVar14 = (local_74 ^ uVar31 ^ uVar28) + local_60 + uVar2 + uVar14;
      uVar38 = local_74 >> 0xd | local_74 << 0x13;
      uVar11 = local_a4 << 9 | local_a4 >> 0x17;
      uVar14 = (uVar14 * 0x200 | uVar14 >> 0x17) ^ (uVar14 >> 0xf | uVar14 * 0x20000) ^ uVar14;
      uVar12 = uVar2 ^ uVar20 ^ (uVar33 << 0xf | uVar23 >> 0x11);
      uVar39 = (uVar12 << 0xf | uVar12 >> 0x11) ^
               (uVar1 << 7 | (uVar7 << 0x18) >> 0x19) ^ uVar41 ^ uVar12 ^
               (uVar12 >> 9 | uVar12 << 0x17);
      uVar13 = uVar25 * 0x1000 | uVar25 >> 0x14;
      uVar12 = uVar14 + 0xe7311465 + uVar13;
      uVar7 = uVar12 * 0x80 | uVar12 >> 0x19;
      uVar33 = uVar32 * 0x200 | uVar32 >> 0x17;
      uVar32 = (uVar13 ^ uVar7) + (uVar18 ^ uVar34) + uVar29 + (uVar32 ^ uVar11 ^ uVar25);
      uVar29 = uVar28 >> 0xd | uVar28 << 0x13;
      uVar7 = (uVar28 ^ uVar38 ^ uVar14) + uVar31 + uVar34 + uVar7;
      uVar7 = (uVar7 * 0x200 | uVar7 >> 0x17) ^ (uVar7 >> 0xf | uVar7 * 0x20000) ^ uVar7;
      uVar12 = uVar34 ^ uVar40 ^ (uVar10 << 0xf | uVar24 >> 0x11);
      uVar34 = (uVar12 << 0xf | uVar12 >> 0x11) ^
               (uVar17 << 7 | (uVar35 << 0x18) >> 0x19) ^ uVar27 ^ uVar12 ^
               (uVar12 >> 9 | uVar12 << 0x17);
      uVar35 = uVar32 * 0x1000 | uVar32 >> 0x14;
      uVar12 = uVar7 + 0xce6228cb + uVar35;
      uVar13 = uVar12 * 0x80 | uVar12 >> 0x19;
      uVar10 = (uVar35 ^ uVar13) + (uVar19 ^ uVar5) + uVar11 + (uVar25 ^ uVar33 ^ uVar32);
      uVar31 = uVar25 * 0x200 | uVar25 >> 0x17;
      uVar2 = uVar14 >> 0xd | uVar14 << 0x13;
      uVar13 = uVar13 + (uVar14 ^ uVar29 ^ uVar7) + uVar38 + uVar5;
      uVar13 = (uVar13 * 0x200 | uVar13 >> 0x17) ^ (uVar13 >> 0xf | uVar13 * 0x20000) ^ uVar13;
      uVar12 = uVar5 ^ uVar21 ^ (uVar37 << 0xf | uVar37 >> 0x11);
      uVar28 = (uVar12 << 0xf | uVar12 >> 0x11) ^
               (uVar18 << 7 | (uVar3 << 0x18) >> 0x19) ^ uVar22 ^ uVar12 ^
               (uVar12 >> 9 | uVar12 << 0x17);
      uVar35 = uVar10 * 0x1000 | uVar10 >> 0x14;
      uVar12 = uVar13 + 0x9cc45197 + uVar35;
      uVar3 = uVar12 * 0x80 | uVar12 >> 0x19;
      uVar14 = (uVar20 ^ uVar1) + uVar33 + (uVar32 ^ uVar31 ^ uVar10) + (uVar35 ^ uVar3);
      uVar11 = uVar32 * 0x200 | uVar32 >> 0x17;
      uVar33 = uVar7 >> 0xd | uVar7 << 0x13;
      uVar3 = uVar3 + (uVar7 ^ uVar2 ^ uVar13) + uVar29 + uVar1;
      uVar3 = (uVar3 * 0x200 | uVar3 >> 0x17) ^ (uVar3 >> 0xf | uVar3 * 0x20000) ^ uVar3;
      uVar35 = uVar1 ^ uVar41 ^ (uVar39 << 0xf | uVar39 >> 0x11);
      uVar7 = uVar14 * 0x1000 | uVar14 >> 0x14;
      uVar12 = uVar3 + 0x3988a32f + uVar7;
      uVar25 = (uVar35 << 0xf | uVar35 >> 0x11) ^
               (uVar19 << 7 | (uVar4 << 0x18) >> 0x19) ^ uVar23 ^ uVar35 ^
               (uVar35 >> 9 | uVar35 << 0x17);
      uVar1 = uVar12 * 0x80 | uVar12 >> 0x19;
      uVar4 = (uVar7 ^ uVar1) + (uVar17 ^ uVar40) + uVar31 + (uVar10 ^ uVar11 ^ uVar14);
      uVar7 = uVar10 * 0x200 | uVar10 >> 0x17;
      uVar5 = uVar13 >> 0xd | uVar13 << 0x13;
      uVar1 = uVar2 + uVar17 + (uVar13 ^ uVar33 ^ uVar3) + uVar1;
      uVar1 = (uVar1 * 0x200 | uVar1 >> 0x17) ^ (uVar1 >> 0xf | uVar1 * 0x20000) ^ uVar1;
      uVar12 = uVar17 ^ uVar27 ^ (uVar34 << 0xf | uVar34 >> 0x11);
      uVar10 = (uVar12 << 0xf | uVar12 >> 0x11) ^
               (uVar20 << 7 | (uVar8 << 0x18) >> 0x19) ^ uVar24 ^ uVar12 ^
               (uVar12 >> 9 | uVar12 << 0x17);
      uVar13 = uVar4 * 0x1000 | uVar4 >> 0x14;
      uVar12 = uVar1 + 0x7311465e + uVar13;
      uVar35 = uVar12 * 0x80 | uVar12 >> 0x19;
      uVar2 = (uVar13 ^ uVar35) + (uVar18 ^ uVar21) + uVar11 + (uVar14 ^ uVar7 ^ uVar4);
      uVar11 = uVar14 * 0x200 | uVar14 >> 0x17;
      uVar35 = uVar33 + uVar18 + (uVar3 ^ uVar5 ^ uVar1) + uVar35;
      uVar33 = uVar3 >> 0xd | uVar3 << 0x13;
      uVar35 = (uVar35 * 0x200 | uVar35 >> 0x17) ^ (uVar35 >> 0xf | uVar35 * 0x20000) ^ uVar35;
      uVar12 = uVar18 ^ uVar22 ^ (uVar28 << 0xf | uVar28 >> 0x11);
      uVar3 = (uVar12 << 0xf | uVar12 >> 0x11) ^
              (uVar40 << 7 | (uVar15 << 0x18) >> 0x19) ^ uVar37 ^ uVar12 ^
              (uVar12 >> 9 | uVar12 << 0x17);
      uVar13 = uVar2 * 0x1000 | uVar2 >> 0x14;
      uVar12 = uVar35 + 0xe6228cbc + uVar13;
      uVar15 = uVar12 * 0x80 | uVar12 >> 0x19;
      uVar8 = (uVar13 ^ uVar15) + (uVar19 ^ uVar41) + uVar7 + (uVar4 ^ uVar11 ^ uVar2);
      uVar15 = (uVar1 ^ uVar33 ^ uVar35) + uVar5 + uVar19 + uVar15;
      uVar7 = uVar4 * 0x200 | uVar4 >> 0x17;
      uVar1 = uVar1 >> 0xd | uVar1 << 0x13;
      uVar15 = (uVar15 * 0x200 | uVar15 >> 0x17) ^ (uVar15 >> 0xf | uVar15 * 0x20000) ^ uVar15;
      uVar12 = uVar19 ^ uVar23 ^ (uVar25 << 0xf | uVar25 >> 0x11);
      uVar13 = uVar8 * 0x1000 | uVar8 >> 0x14;
      uVar14 = (uVar12 << 0xf | uVar12 >> 0x11) ^
               (uVar21 << 7 | (uVar26 << 0x18) >> 0x19) ^ uVar39 ^ uVar12 ^
               (uVar12 >> 9 | uVar12 << 0x17);
      uVar12 = uVar15 + 0xcc451979 + uVar13;
      uVar4 = uVar12 * 0x80 | uVar12 >> 0x19;
      uVar5 = uVar2 * 0x200 | uVar2 >> 0x17;
      uVar31 = uVar35 >> 0xd | uVar35 << 0x13;
      uVar12 = (uVar20 ^ uVar27) + uVar11 + (uVar2 ^ uVar7 ^ uVar8) + (uVar13 ^ uVar4);
      uVar4 = (uVar35 ^ uVar1 ^ uVar15) + uVar33 + uVar20 + uVar4;
      uVar4 = (uVar4 * 0x200 | uVar4 >> 0x17) ^ (uVar4 >> 0xf | uVar4 * 0x20000) ^ uVar4;
      uVar35 = uVar20 ^ uVar24 ^ (uVar10 << 0xf | uVar10 >> 0x11);
      uVar26 = uVar12 * 0x1000 | uVar12 >> 0x14;
      uVar33 = (uVar35 << 0xf | uVar35 >> 0x11) ^
               (uVar41 << 7 | (uVar9 << 0x18) >> 0x19) ^ uVar34 ^ uVar35 ^
               (uVar35 >> 9 | uVar35 << 0x17);
      uVar35 = uVar4 + 0x988a32f3 + uVar26;
      uVar13 = uVar35 * 0x80 | uVar35 >> 0x19;
      uVar9 = uVar8 * 0x200 | uVar8 >> 0x17;
      uVar11 = uVar15 >> 0xd | uVar15 << 0x13;
      uVar8 = (uVar40 ^ uVar22) + uVar7 + (uVar8 ^ uVar5 ^ uVar12) + (uVar26 ^ uVar13);
      uVar13 = uVar13 + (uVar15 ^ uVar31 ^ uVar4) + uVar1 + uVar40;
      uVar13 = (uVar13 * 0x200 | uVar13 >> 0x17) ^ (uVar13 >> 0xf | uVar13 * 0x20000) ^ uVar13;
      uVar35 = uVar40 ^ uVar37 ^ (uVar3 << 0xf | uVar3 >> 0x11);
      uVar1 = (uVar35 << 0xf | uVar35 >> 0x11) ^
              (uVar27 << 7 | (uVar6 << 0x18) >> 0x19) ^ uVar28 ^ uVar35 ^
              (uVar35 >> 9 | uVar35 << 0x17);
      uVar26 = uVar12 * 0x200 | uVar12 >> 0x17;
      uVar15 = uVar8 * 0x1000 | uVar8 >> 0x14;
      uVar35 = uVar13 + 0x311465e7 + uVar15;
      uVar7 = uVar35 * 0x80 | uVar35 >> 0x19;
      uVar2 = uVar4 >> 0xd | uVar4 << 0x13;
      uVar35 = (uVar15 ^ uVar7) + (uVar21 ^ uVar23) + uVar5 + (uVar12 ^ uVar9 ^ uVar8);
      uVar7 = (uVar4 ^ uVar11 ^ uVar13) + uVar31 + uVar21 + uVar7;
      uVar7 = (uVar7 * 0x200 | uVar7 >> 0x17) ^ (uVar7 >> 0xf | uVar7 * 0x20000) ^ uVar7;
      uVar12 = uVar21 ^ uVar39 ^ (uVar14 << 0xf | uVar14 >> 0x11);
      uVar6 = uVar8 * 0x200 | uVar8 >> 0x17;
      uVar31 = (uVar12 << 0xf | uVar12 >> 0x11) ^
               (uVar22 << 7 | (uVar16 << 0x18) >> 0x19) ^ uVar25 ^ uVar12 ^
               (uVar12 >> 9 | uVar12 << 0x17);
      uVar15 = uVar35 * 0x1000 | uVar35 >> 0x14;
      uVar12 = uVar7 + 0x6228cbce + uVar15;
      uVar4 = uVar12 * 0x80 | uVar12 >> 0x19;
      uVar5 = uVar13 >> 0xd | uVar13 << 0x13;
      uVar16 = (uVar15 ^ uVar4) + (uVar41 ^ uVar24) + uVar9 + (uVar8 ^ uVar26 ^ uVar35);
      uVar4 = uVar4 + (uVar13 ^ uVar2 ^ uVar7) + uVar11 + uVar41;
      uVar4 = (uVar4 * 0x200 | uVar4 >> 0x17) ^ (uVar4 >> 0xf | uVar4 * 0x20000) ^ uVar4;
      uVar12 = uVar41 ^ uVar34 ^ (uVar33 << 0xf | uVar33 >> 0x11);
      uVar9 = (uVar12 << 0xf | uVar12 >> 0x11) ^
              (uVar23 << 7 | (uVar36 << 0x18) >> 0x19) ^ uVar10 ^ uVar12 ^
              (uVar12 >> 9 | uVar12 << 0x17);
      uVar15 = uVar35 * 0x200 | uVar35 >> 0x17;
      uVar8 = uVar16 * 0x1000 | uVar16 >> 0x14;
      uVar12 = uVar4 + 0xc451979c + uVar8;
      uVar13 = uVar12 * 0x80 | uVar12 >> 0x19;
      uVar26 = (uVar8 ^ uVar13) + (uVar27 ^ uVar37) + uVar26 + (uVar35 ^ uVar6 ^ uVar16);
      uVar36 = uVar7 >> 0xd | uVar7 << 0x13;
      uVar13 = (uVar7 ^ uVar5 ^ uVar4) + uVar2 + uVar27 + uVar13;
      uVar13 = (uVar13 * 0x200 | uVar13 >> 0x17) ^ (uVar13 >> 0xf | uVar13 * 0x20000) ^ uVar13;
      uVar12 = uVar27 ^ uVar28 ^ (uVar1 << 0xf | uVar1 >> 0x11);
      uVar2 = uVar16 * 0x200 | uVar16 >> 0x17;
      uVar20 = (uVar12 << 0xf | uVar12 >> 0x11) ^
               (uVar24 << 7 | (uVar30 << 0x18) >> 0x19) ^ uVar3 ^ uVar12 ^
               (uVar12 >> 9 | uVar12 << 0x17);
      uVar35 = uVar26 * 0x1000 | uVar26 >> 0x14;
      uVar12 = uVar13 + 0x88a32f39 + uVar35;
      uVar8 = uVar12 * 0x80 | uVar12 >> 0x19;
      uVar11 = uVar4 >> 0xd | uVar4 << 0x13;
      uVar12 = (uVar22 ^ uVar39) + uVar6 + (uVar16 ^ uVar15 ^ uVar26) + (uVar35 ^ uVar8);
      uVar8 = uVar5 + uVar22 + (uVar4 ^ uVar36 ^ uVar13) + uVar8;
      uVar8 = (uVar8 * 0x200 | uVar8 >> 0x17) ^ (uVar8 >> 0xf | uVar8 * 0x20000) ^ uVar8;
      uVar35 = uVar22 ^ uVar25 ^ (uVar31 << 0xf | uVar31 >> 0x11);
      uVar16 = uVar26 * 0x200 | uVar26 >> 0x17;
      uVar5 = (uVar35 << 0xf | uVar35 >> 0x11) ^ (uVar37 << 7 | uVar37 >> 0x19) ^ uVar14 ^ uVar35 ^
              (uVar35 >> 9 | uVar35 << 0x17);
      uVar7 = uVar12 * 0x1000 | uVar12 >> 0x14;
      uVar35 = uVar8 + 0x11465e73 + uVar7;
      uVar4 = uVar35 * 0x80 | uVar35 >> 0x19;
      uVar30 = uVar13 >> 0xd | uVar13 << 0x13;
      uVar7 = (uVar23 ^ uVar34) + uVar15 + (uVar26 ^ uVar2 ^ uVar12) + (uVar7 ^ uVar4);
      uVar4 = uVar36 + uVar23 + (uVar13 ^ uVar11 ^ uVar8) + uVar4;
      uVar4 = (uVar4 * 0x200 | uVar4 >> 0x17) ^ (uVar4 >> 0xf | uVar4 * 0x20000) ^ uVar4;
      uVar35 = uVar23 ^ uVar10 ^ (uVar9 << 0xf | uVar9 >> 0x11);
      uVar36 = (uVar35 << 0xf | uVar35 >> 0x11) ^ (uVar39 << 7 | uVar39 >> 0x19) ^ uVar33 ^ uVar35 ^
               (uVar35 >> 9 | uVar35 << 0x17);
      uVar15 = uVar7 * 0x1000 | uVar7 >> 0x14;
      uVar17 = uVar12 * 0x200 | uVar12 >> 0x17;
      uVar35 = uVar4 + 0x228cbce6 + uVar15;
      uVar26 = uVar35 * 0x80 | uVar35 >> 0x19;
      uVar6 = uVar8 >> 0xd | uVar8 << 0x13;
      uVar15 = (uVar15 ^ uVar26) + (uVar24 ^ uVar28) + uVar2 + (uVar12 ^ uVar16 ^ uVar7);
      uVar26 = uVar11 + uVar24 + (uVar8 ^ uVar30 ^ uVar4) + uVar26;
      uVar26 = (uVar26 * 0x200 | uVar26 >> 0x17) ^ (uVar26 >> 0xf | uVar26 * 0x20000) ^ uVar26;
      uVar12 = uVar24 ^ uVar3 ^ (uVar20 << 0xf | uVar20 >> 0x11);
      uVar18 = (uVar12 << 0xf | uVar12 >> 0x11) ^ (uVar34 << 7 | uVar34 >> 0x19) ^ uVar1 ^ uVar12 ^
               (uVar12 >> 9 | uVar12 << 0x17);
      uVar35 = uVar15 * 0x1000 | uVar15 >> 0x14;
      uVar12 = uVar26 + 0x9d8a7a87 + uVar35;
      uVar12 = uVar12 * 0x80 | uVar12 >> 0x19;
      uVar2 = uVar7 * 0x200 | uVar7 >> 0x17;
      uVar13 = uVar4 >> 0xd | uVar4 << 0x13;
      uVar11 = (uVar35 ^ uVar12) +
               (uVar37 ^ uVar25) + uVar16 + (uVar7 & uVar15 | (uVar7 | uVar15) & uVar17);
      uVar12 = ((uVar4 ^ uVar6) & uVar26 ^ uVar6) + uVar30 + uVar37 + uVar12;
      uVar12 = (uVar12 * 0x200 | uVar12 >> 0x17) ^ (uVar12 >> 0xf | uVar12 * 0x20000) ^ uVar12;
      uVar35 = uVar37 ^ uVar14 ^ (uVar5 << 0xf | uVar5 >> 0x11);
      uVar16 = (uVar35 << 0xf | uVar35 >> 0x11) ^ (uVar28 << 7 | uVar28 >> 0x19) ^ uVar31 ^ uVar35 ^
               (uVar35 >> 9 | uVar35 << 0x17);
      uVar4 = uVar11 * 0x1000 | uVar11 >> 0x14;
      uVar35 = uVar12 + 0x3b14f50f + uVar4;
      uVar35 = uVar35 * 0x80 | uVar35 >> 0x19;
      uVar7 = uVar15 * 0x200 | uVar15 >> 0x17;
      uVar30 = uVar26 >> 0xd | uVar26 << 0x13;
      uVar8 = (uVar4 ^ uVar35) +
              (uVar39 ^ uVar10) + uVar17 + (uVar15 & uVar11 | (uVar15 | uVar11) & uVar2);
      uVar15 = ((uVar26 ^ uVar13) & uVar12 ^ uVar13) + uVar6 + uVar39 + uVar35;
      uVar15 = (uVar15 * 0x200 | uVar15 >> 0x17) ^ (uVar15 >> 0xf | uVar15 * 0x20000) ^ uVar15;
      uVar35 = uVar39 ^ uVar33 ^ (uVar36 << 0xf | uVar36 >> 0x11);
      uVar21 = (uVar35 << 0xf | uVar35 >> 0x11) ^ (uVar25 << 7 | uVar25 >> 0x19) ^ uVar9 ^ uVar35 ^
               (uVar35 >> 9 | uVar35 << 0x17);
      uVar6 = uVar8 * 0x1000 | uVar8 >> 0x14;
      uVar35 = uVar15 + 0x7629ea1e + uVar6;
      uVar4 = uVar35 * 0x80 | uVar35 >> 0x19;
      uVar17 = uVar11 * 0x200 | uVar11 >> 0x17;
      uVar35 = (uVar3 ^ uVar34) + uVar2 + (uVar11 & uVar8 | (uVar11 | uVar8) & uVar7) +
               (uVar6 ^ uVar4);
      uVar26 = uVar12 >> 0xd | uVar12 << 0x13;
      uVar12 = ((uVar12 ^ uVar30) & uVar15 ^ uVar30) + uVar13 + uVar34 + uVar4;
      uVar12 = (uVar12 * 0x200 | uVar12 >> 0x17) ^ (uVar12 >> 0xf | uVar12 * 0x20000) ^ uVar12;
      uVar4 = uVar34 ^ uVar1 ^ (uVar18 << 0xf | uVar18 >> 0x11);
      uVar27 = (uVar4 >> 9 | uVar4 << 0x17) ^
               (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar10 << 7 | uVar10 >> 0x19) ^ uVar20 ^ uVar4;
      uVar2 = uVar35 * 0x1000 | uVar35 >> 0x14;
      uVar4 = uVar12 + 0xec53d43c + uVar2;
      uVar4 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar6 = uVar8 * 0x200 | uVar8 >> 0x17;
      uVar13 = uVar15 >> 0xd | uVar15 << 0x13;
      uVar8 = (uVar14 ^ uVar28) + uVar7 + (uVar8 & uVar35 | (uVar8 | uVar35) & uVar17) +
              (uVar2 ^ uVar4);
      uVar15 = ((uVar15 ^ uVar26) & uVar12 ^ uVar26) + uVar30 + uVar28 + uVar4;
      uVar15 = (uVar15 * 0x200 | uVar15 >> 0x17) ^ (uVar15 >> 0xf | uVar15 * 0x20000) ^ uVar15;
      uVar4 = uVar28 ^ uVar31 ^ (uVar16 << 0xf | uVar16 >> 0x11);
      uVar28 = (uVar4 >> 9 | uVar4 << 0x17) ^
               (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar3 << 7 | uVar3 >> 0x19) ^ uVar5 ^ uVar4;
      uVar7 = uVar8 * 0x1000 | uVar8 >> 0x14;
      uVar4 = uVar15 + 0xd8a7a879 + uVar7;
      uVar2 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar19 = uVar35 * 0x200 | uVar35 >> 0x17;
      uVar4 = uVar12 >> 0xd | uVar12 << 0x13;
      uVar30 = (uVar7 ^ uVar2) +
               (uVar33 ^ uVar25) + uVar17 + (uVar35 & uVar8 | (uVar35 | uVar8) & uVar6);
      uVar12 = ((uVar12 ^ uVar13) & uVar15 ^ uVar13) + uVar26 + uVar25 + uVar2;
      uVar12 = (uVar12 * 0x200 | uVar12 >> 0x17) ^ (uVar12 >> 0xf | uVar12 * 0x20000) ^ uVar12;
      uVar35 = uVar25 ^ uVar9 ^ (uVar21 << 0xf | uVar21 >> 0x11);
      uVar23 = (uVar35 >> 9 | uVar35 << 0x17) ^
               (uVar35 << 0xf | uVar35 >> 0x11) ^ (uVar14 << 7 | uVar14 >> 0x19) ^ uVar36 ^ uVar35;
      uVar26 = uVar30 * 0x1000 | uVar30 >> 0x14;
      uVar35 = uVar12 + 0xb14f50f3 + uVar26;
      uVar35 = uVar35 * 0x80 | uVar35 >> 0x19;
      uVar2 = uVar8 * 0x200 | uVar8 >> 0x17;
      uVar7 = uVar15 >> 0xd | uVar15 << 0x13;
      uVar17 = (uVar26 ^ uVar35) +
               (uVar10 ^ uVar1) + uVar6 + (uVar8 & uVar30 | (uVar8 | uVar30) & uVar19);
      uVar35 = ((uVar15 ^ uVar4) & uVar12 ^ uVar4) + uVar13 + uVar10 + uVar35;
      uVar35 = (uVar35 * 0x200 | uVar35 >> 0x17) ^ (uVar35 >> 0xf | uVar35 * 0x20000) ^ uVar35;
      uVar8 = uVar17 * 0x1000 | uVar17 >> 0x14;
      uVar13 = uVar10 ^ uVar20 ^ (uVar27 << 0xf | uVar27 >> 0x11);
      uVar15 = uVar35 + 0x629ea1e7 + uVar8;
      uVar6 = (uVar13 << 0xf | uVar13 >> 0x11) ^ (uVar33 << 7 | uVar33 >> 0x19) ^ uVar18 ^ uVar13 ^
              (uVar13 >> 9 | uVar13 << 0x17);
      uVar15 = uVar15 * 0x80 | uVar15 >> 0x19;
      uVar11 = uVar30 * 0x200 | uVar30 >> 0x17;
      uVar26 = (uVar8 ^ uVar15) +
               (uVar3 ^ uVar31) + uVar19 + (uVar30 & uVar17 | (uVar30 | uVar17) & uVar2);
      uVar10 = uVar12 >> 0xd | uVar12 << 0x13;
      uVar15 = ((uVar12 ^ uVar7) & uVar35 ^ uVar7) + uVar4 + uVar3 + uVar15;
      uVar15 = (uVar15 * 0x200 | uVar15 >> 0x17) ^ (uVar15 >> 0xf | uVar15 * 0x20000) ^ uVar15;
      uVar12 = uVar3 ^ uVar5 ^ (uVar28 << 0xf | uVar28 >> 0x11);
      uVar30 = (uVar12 << 0xf | uVar12 >> 0x11) ^ (uVar1 << 7 | uVar1 >> 0x19) ^ uVar16 ^ uVar12 ^
               (uVar12 >> 9 | uVar12 << 0x17);
      uVar4 = uVar26 * 0x1000 | uVar26 >> 0x14;
      uVar12 = uVar15 + 0xc53d43ce + uVar4;
      uVar13 = uVar12 * 0x80 | uVar12 >> 0x19;
      uVar19 = uVar17 * 0x200 | uVar17 >> 0x17;
      uVar8 = uVar35 >> 0xd | uVar35 << 0x13;
      uVar12 = (uVar14 ^ uVar9) + uVar2 + (uVar17 & uVar26 | (uVar17 | uVar26) & uVar11) +
               (uVar4 ^ uVar13);
      uVar35 = ((uVar35 ^ uVar10) & uVar15 ^ uVar10) + uVar7 + uVar14 + uVar13;
      uVar35 = (uVar35 * 0x200 | uVar35 >> 0x17) ^ (uVar35 >> 0xf | uVar35 * 0x20000) ^ uVar35;
      uVar4 = uVar14 ^ uVar36 ^ (uVar23 << 0xf | uVar23 >> 0x11);
      uVar2 = (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar31 << 7 | uVar31 >> 0x19) ^ uVar21 ^ uVar4 ^
              (uVar4 >> 9 | uVar4 << 0x17);
      uVar7 = uVar12 * 0x1000 | uVar12 >> 0x14;
      uVar4 = uVar35 + 0x8a7a879d + uVar7;
      uVar4 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar3 = uVar26 * 0x200 | uVar26 >> 0x17;
      uVar13 = uVar15 >> 0xd | uVar15 << 0x13;
      uVar26 = (uVar33 ^ uVar20) + uVar11 + (uVar26 & uVar12 | (uVar26 | uVar12) & uVar19) +
               (uVar7 ^ uVar4);
      uVar15 = ((uVar15 ^ uVar8) & uVar35 ^ uVar8) + uVar10 + uVar33 + uVar4;
      uVar15 = (uVar15 * 0x200 | uVar15 >> 0x17) ^ (uVar15 >> 0xf | uVar15 * 0x20000) ^ uVar15;
      uVar4 = uVar33 ^ uVar18 ^ (uVar6 << 0xf | uVar6 >> 0x11);
      uVar11 = (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar9 << 7 | uVar9 >> 0x19) ^ uVar27 ^ uVar4 ^
               (uVar4 >> 9 | uVar4 << 0x17);
      uVar7 = uVar26 * 0x1000 | uVar26 >> 0x14;
      uVar4 = uVar15 + 0x14f50f3b + uVar7;
      uVar33 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar22 = uVar12 * 0x200 | uVar12 >> 0x17;
      uVar14 = uVar35 >> 0xd | uVar35 << 0x13;
      uVar4 = (uVar7 ^ uVar33) +
              (uVar1 ^ uVar5) + uVar19 + (uVar12 & uVar26 | (uVar12 | uVar26) & uVar3);
      uVar12 = ((uVar35 ^ uVar13) & uVar15 ^ uVar13) + uVar8 + uVar1 + uVar33;
      uVar12 = (uVar12 * 0x200 | uVar12 >> 0x17) ^ (uVar12 >> 0xf | uVar12 * 0x20000) ^ uVar12;
      uVar35 = uVar1 ^ uVar16 ^ (uVar30 << 0xf | uVar30 >> 0x11);
      uVar7 = uVar4 * 0x1000 | uVar4 >> 0x14;
      uVar17 = (uVar35 << 0xf | uVar35 >> 0x11) ^ (uVar20 << 7 | uVar20 >> 0x19) ^ uVar28 ^ uVar35 ^
               (uVar35 >> 9 | uVar35 << 0x17);
      uVar35 = uVar12 + 0x29ea1e76 + uVar7;
      uVar35 = uVar35 * 0x80 | uVar35 >> 0x19;
      uVar33 = uVar26 * 0x200 | uVar26 >> 0x17;
      uVar10 = uVar15 >> 0xd | uVar15 << 0x13;
      uVar1 = (uVar7 ^ uVar35) +
              (uVar31 ^ uVar36) + uVar3 + (uVar26 & uVar4 | (uVar26 | uVar4) & uVar22);
      uVar35 = ((uVar15 ^ uVar14) & uVar12 ^ uVar14) + uVar13 + uVar31 + uVar35;
      uVar35 = (uVar35 * 0x200 | uVar35 >> 0x17) ^ (uVar35 >> 0xf | uVar35 * 0x20000) ^ uVar35;
      uVar13 = uVar31 ^ uVar21 ^ (uVar2 << 0xf | uVar2 >> 0x11);
      uVar3 = uVar1 * 0x1000 | uVar1 >> 0x14;
      uVar15 = uVar35 + 0x53d43cec + uVar3;
      uVar26 = (uVar13 << 0xf | uVar13 >> 0x11) ^ (uVar5 << 7 | uVar5 >> 0x19) ^ uVar23 ^ uVar13 ^
               (uVar13 >> 9 | uVar13 << 0x17);
      uVar15 = uVar15 * 0x80 | uVar15 >> 0x19;
      uVar7 = uVar4 * 0x200 | uVar4 >> 0x17;
      uVar8 = uVar12 >> 0xd | uVar12 << 0x13;
      uVar3 = (uVar3 ^ uVar15) +
              (uVar9 ^ uVar18) + uVar22 + (uVar4 & uVar1 | (uVar4 | uVar1) & uVar33);
      uVar15 = ((uVar12 ^ uVar10) & uVar35 ^ uVar10) + uVar14 + uVar9 + uVar15;
      uVar15 = (uVar15 * 0x200 | uVar15 >> 0x17) ^ (uVar15 >> 0xf | uVar15 * 0x20000) ^ uVar15;
      uVar12 = uVar9 ^ uVar27 ^ (uVar11 << 0xf | uVar11 >> 0x11);
      uVar22 = (uVar12 << 0xf | uVar12 >> 0x11) ^ (uVar36 << 7 | uVar36 >> 0x19) ^ uVar6 ^ uVar12 ^
               (uVar12 >> 9 | uVar12 << 0x17);
      uVar9 = uVar3 * 0x1000 | uVar3 >> 0x14;
      uVar12 = uVar15 + 0xa7a879d8 + uVar9;
      uVar4 = uVar12 * 0x80 | uVar12 >> 0x19;
      uVar31 = uVar1 * 0x200 | uVar1 >> 0x17;
      uVar13 = uVar35 >> 0xd | uVar35 << 0x13;
      uVar12 = (uVar20 ^ uVar16) + uVar33 + (uVar1 & uVar3 | (uVar1 | uVar3) & uVar7) +
               (uVar9 ^ uVar4);
      uVar35 = ((uVar35 ^ uVar8) & uVar15 ^ uVar8) + uVar10 + uVar20 + uVar4;
      uVar35 = (uVar35 * 0x200 | uVar35 >> 0x17) ^ (uVar35 >> 0xf | uVar35 * 0x20000) ^ uVar35;
      uVar4 = uVar20 ^ uVar28 ^ (uVar17 << 0xf | uVar17 >> 0x11);
      uVar19 = (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar18 << 7 | uVar18 >> 0x19) ^ uVar30 ^ uVar4 ^
               (uVar4 >> 9 | uVar4 << 0x17);
      uVar33 = uVar12 * 0x1000 | uVar12 >> 0x14;
      uVar4 = uVar35 + 0x4f50f3b1 + uVar33;
      uVar4 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar9 = uVar3 * 0x200 | uVar3 >> 0x17;
      uVar14 = uVar15 >> 0xd | uVar15 << 0x13;
      uVar3 = (uVar5 ^ uVar21) + uVar7 + (uVar3 & uVar12 | (uVar3 | uVar12) & uVar31) +
              (uVar33 ^ uVar4);
      uVar15 = ((uVar15 ^ uVar13) & uVar35 ^ uVar13) + uVar8 + uVar5 + uVar4;
      uVar15 = (uVar15 * 0x200 | uVar15 >> 0x17) ^ (uVar15 >> 0xf | uVar15 * 0x20000) ^ uVar15;
      uVar4 = uVar5 ^ uVar23 ^ (uVar26 << 0xf | uVar26 >> 0x11);
      uVar5 = (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar16 << 7 | uVar16 >> 0x19) ^ uVar2 ^ uVar4 ^
              (uVar4 >> 9 | uVar4 << 0x17);
      uVar7 = uVar3 * 0x1000 | uVar3 >> 0x14;
      uVar4 = uVar15 + 0x9ea1e762 + uVar7;
      uVar4 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar20 = uVar12 * 0x200 | uVar12 >> 0x17;
      uVar8 = (uVar7 ^ uVar4) +
              (uVar36 ^ uVar27) + uVar31 + (uVar12 & uVar3 | (uVar12 | uVar3) & uVar9);
      uVar10 = uVar35 >> 0xd | uVar35 << 0x13;
      uVar12 = ((uVar35 ^ uVar14) & uVar15 ^ uVar14) + uVar13 + uVar36 + uVar4;
      uVar12 = (uVar12 * 0x200 | uVar12 >> 0x17) ^ (uVar12 >> 0xf | uVar12 * 0x20000) ^ uVar12;
      uVar35 = uVar36 ^ uVar6 ^ (uVar22 << 0xf | uVar22 >> 0x11);
      uVar36 = (uVar35 << 0xf | uVar35 >> 0x11) ^ (uVar21 << 7 | uVar21 >> 0x19) ^ uVar11 ^ uVar35 ^
               (uVar35 >> 9 | uVar35 << 0x17);
      uVar4 = uVar8 * 0x1000 | uVar8 >> 0x14;
      uVar35 = uVar12 + 0x3d43cec5 + uVar4;
      uVar35 = uVar35 * 0x80 | uVar35 >> 0x19;
      uVar33 = uVar3 * 0x200 | uVar3 >> 0x17;
      uVar7 = uVar15 >> 0xd | uVar15 << 0x13;
      uVar1 = (uVar4 ^ uVar35) +
              (uVar18 ^ uVar28) + uVar9 + (uVar3 & uVar8 | (uVar3 | uVar8) & uVar20);
      uVar35 = ((uVar15 ^ uVar10) & uVar12 ^ uVar10) + uVar14 + uVar18 + uVar35;
      uVar35 = (uVar35 * 0x200 | uVar35 >> 0x17) ^ (uVar35 >> 0xf | uVar35 * 0x20000) ^ uVar35;
      uVar15 = uVar18 ^ uVar30 ^ (uVar19 << 0xf | uVar19 >> 0x11);
      uVar24 = (uVar15 << 0xf | uVar15 >> 0x11) ^ (uVar27 << 7 | uVar27 >> 0x19) ^ uVar17 ^ uVar15 ^
               (uVar15 >> 9 | uVar15 << 0x17);
      uVar4 = uVar1 * 0x1000 | uVar1 >> 0x14;
      uVar15 = uVar35 + 0x7a879d8a + uVar4;
      uVar15 = uVar15 * 0x80 | uVar15 >> 0x19;
      uVar14 = uVar8 * 0x200 | uVar8 >> 0x17;
      uVar8 = (uVar4 ^ uVar15) +
              (uVar16 ^ uVar23) + uVar20 + (uVar8 & uVar1 | (uVar8 | uVar1) & uVar33);
      uVar13 = uVar12 >> 0xd | uVar12 << 0x13;
      uVar4 = ((uVar12 ^ uVar7) & uVar35 ^ uVar7) + uVar10 + uVar16 + uVar15;
      uVar4 = (uVar4 * 0x200 | uVar4 >> 0x17) ^ (uVar4 >> 0xf | uVar4 * 0x20000) ^ uVar4;
      uVar12 = uVar16 ^ uVar2 ^ (uVar5 << 0xf | uVar5 >> 0x11);
      uVar9 = (uVar12 << 0xf | uVar12 >> 0x11) ^ (uVar28 << 7 | uVar28 >> 0x19) ^ uVar26 ^ uVar12 ^
              (uVar12 >> 9 | uVar12 << 0x17);
      uVar15 = uVar8 * 0x1000 | uVar8 >> 0x14;
      uVar12 = uVar4 + 0xf50f3b14 + uVar15;
      uVar3 = uVar12 * 0x80 | uVar12 >> 0x19;
      uVar10 = uVar1 * 0x200 | uVar1 >> 0x17;
      uVar12 = (uVar21 ^ uVar6) + uVar33 + (uVar1 & uVar8 | (uVar1 | uVar8) & uVar14) +
               (uVar15 ^ uVar3);
      uVar16 = uVar35 >> 0xd | uVar35 << 0x13;
      uVar35 = ((uVar35 ^ uVar13) & uVar4 ^ uVar13) + uVar7 + uVar21 + uVar3;
      uVar35 = (uVar35 * 0x200 | uVar35 >> 0x17) ^ (uVar35 >> 0xf | uVar35 * 0x20000) ^ uVar35;
      uVar15 = uVar21 ^ uVar11 ^ (uVar36 << 0xf | uVar36 >> 0x11);
      uVar25 = (uVar15 << 0xf | uVar15 >> 0x11) ^ (uVar23 << 7 | uVar23 >> 0x19) ^ uVar22 ^ uVar15 ^
               (uVar15 >> 9 | uVar15 << 0x17);
      uVar7 = uVar12 * 0x1000 | uVar12 >> 0x14;
      uVar15 = uVar35 + 0xea1e7629 + uVar7;
      uVar33 = uVar15 * 0x80 | uVar15 >> 0x19;
      uVar3 = uVar8 * 0x200 | uVar8 >> 0x17;
      uVar15 = (uVar30 ^ uVar27) + uVar14 + (uVar8 & uVar12 | (uVar8 | uVar12) & uVar10) +
               (uVar7 ^ uVar33);
      uVar14 = uVar4 >> 0xd | uVar4 << 0x13;
      uVar4 = ((uVar4 ^ uVar16) & uVar35 ^ uVar16) + uVar13 + uVar27 + uVar33;
      uVar4 = (uVar4 * 0x200 | uVar4 >> 0x17) ^ (uVar4 >> 0xf | uVar4 * 0x20000) ^ uVar4;
      uVar13 = (uVar24 << 0xf | uVar24 >> 0x11) ^ uVar27 ^ uVar17;
      uVar27 = (uVar13 << 0xf | uVar13 >> 0x11) ^ (uVar6 << 7 | uVar6 >> 0x19) ^ uVar19 ^ uVar13 ^
               (uVar13 >> 9 | uVar13 << 0x17);
      uVar7 = uVar15 * 0x1000 | uVar15 >> 0x14;
      uVar13 = uVar4 + 0xd43cec53 + uVar7;
      uVar13 = uVar13 * 0x80 | uVar13 >> 0x19;
      uVar8 = uVar12 * 0x200 | uVar12 >> 0x17;
      uVar12 = (uVar2 ^ uVar28) + uVar10 + (uVar12 & uVar15 | (uVar12 | uVar15) & uVar3) +
               (uVar7 ^ uVar13);
      uVar33 = uVar35 >> 0xd | uVar35 << 0x13;
      uVar7 = uVar16 + uVar28 + uVar13 + ((uVar35 ^ uVar14) & uVar4 ^ uVar14);
      uVar7 = (uVar7 * 0x200 | uVar7 >> 0x17) ^ (uVar7 >> 0xf | uVar7 * 0x20000) ^ uVar7;
      uVar35 = (uVar9 << 0xf | uVar9 >> 0x11) ^ uVar28 ^ uVar26;
      uVar28 = (uVar35 << 0xf | uVar35 >> 0x11) ^ (uVar30 << 7 | uVar30 >> 0x19) ^ uVar5 ^ uVar35 ^
               (uVar35 >> 9 | uVar35 << 0x17);
      uVar13 = uVar12 * 0x1000 | uVar12 >> 0x14;
      uVar35 = uVar7 + 0xa879d8a7 + uVar13;
      uVar35 = uVar35 * 0x80 | uVar35 >> 0x19;
      uVar10 = uVar15 * 0x200 | uVar15 >> 0x17;
      uVar16 = (uVar13 ^ uVar35) +
               (uVar11 ^ uVar23) + uVar3 + (uVar15 & uVar12 | (uVar15 | uVar12) & uVar8);
      uVar13 = uVar4 >> 0xd | uVar4 << 0x13;
      uVar35 = ((uVar4 ^ uVar33) & uVar7 ^ uVar33) + uVar14 + uVar23 + uVar35;
      uVar35 = (uVar35 * 0x200 | uVar35 >> 0x17) ^ (uVar35 >> 0xf | uVar35 * 0x20000) ^ uVar35;
      uVar15 = uVar23 ^ uVar22 ^ (uVar25 << 0xf | uVar25 >> 0x11);
      uVar4 = uVar16 * 0x1000 | uVar16 >> 0x14;
      uVar20 = (uVar15 << 0xf | uVar15 >> 0x11) ^ (uVar2 << 7 | uVar2 >> 0x19) ^ uVar36 ^ uVar15 ^
               (uVar15 >> 9 | uVar15 << 0x17);
      uVar15 = uVar35 + 0x50f3b14f + uVar4;
      uVar15 = uVar15 * 0x80 | uVar15 >> 0x19;
      uVar1 = uVar12 * 0x200 | uVar12 >> 0x17;
      uVar3 = (uVar4 ^ uVar15) +
              (uVar6 ^ uVar17) + uVar8 + (uVar12 & uVar16 | (uVar12 | uVar16) & uVar10);
      uVar8 = uVar7 >> 0xd | uVar7 << 0x13;
      uVar12 = ((uVar7 ^ uVar13) & uVar35 ^ uVar13) + uVar33 + uVar6 + uVar15;
      uVar12 = (uVar12 * 0x200 | uVar12 >> 0x17) ^ (uVar12 >> 0xf | uVar12 * 0x20000) ^ uVar12;
      uVar15 = uVar6 ^ uVar19 ^ (uVar27 << 0xf | uVar27 >> 0x11);
      uVar14 = (uVar15 << 0xf | uVar15 >> 0x11) ^ (uVar11 << 7 | uVar11 >> 0x19) ^ uVar24 ^ uVar15 ^
               (uVar15 >> 9 | uVar15 << 0x17);
      uVar4 = uVar3 * 0x1000 | uVar3 >> 0x14;
      uVar15 = uVar12 + 0xa1e7629e + uVar4;
      uVar7 = uVar15 * 0x80 | uVar15 >> 0x19;
      uVar6 = uVar16 * 0x200 | uVar16 >> 0x17;
      uVar15 = (uVar30 ^ uVar26) + uVar10 + (uVar16 & uVar3 | (uVar16 | uVar3) & uVar1) +
               (uVar4 ^ uVar7);
      uVar33 = uVar35 >> 0xd | uVar35 << 0x13;
      uVar35 = ((uVar35 ^ uVar8) & uVar12 ^ uVar8) + uVar13 + uVar30 + uVar7;
      uVar35 = (uVar35 * 0x200 | uVar35 >> 0x17) ^ (uVar35 >> 0xf | uVar35 * 0x20000) ^ uVar35;
      uVar4 = uVar30 ^ uVar5 ^ (uVar28 << 0xf | uVar28 >> 0x11);
      uVar23 = (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar17 << 7 | uVar17 >> 0x19) ^ uVar9 ^ uVar4 ^
               (uVar4 >> 9 | uVar4 << 0x17);
      uVar13 = uVar15 * 0x1000 | uVar15 >> 0x14;
      uVar4 = uVar35 + 0x43cec53d + uVar13;
      uVar4 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar16 = (uVar2 ^ uVar22) + uVar1 + (uVar3 & uVar15 | (uVar3 | uVar15) & uVar6) +
               (uVar13 ^ uVar4);
      uVar3 = uVar3 * 0x200 | uVar3 >> 0x17;
      uVar7 = uVar12 >> 0xd | uVar12 << 0x13;
      uVar12 = ((uVar12 ^ uVar33) & uVar35 ^ uVar33) + uVar8 + uVar2 + uVar4;
      uVar12 = (uVar12 * 0x200 | uVar12 >> 0x17) ^ (uVar12 >> 0xf | uVar12 * 0x20000) ^ uVar12;
      uVar4 = uVar2 ^ uVar36 ^ (uVar20 << 0xf | uVar20 >> 0x11);
      uVar18 = (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar26 << 7 | uVar26 >> 0x19) ^ uVar25 ^ uVar4 ^
               (uVar4 >> 9 | uVar4 << 0x17);
      uVar13 = uVar16 * 0x1000 | uVar16 >> 0x14;
      uVar4 = uVar12 + 0x879d8a7a + uVar13;
      uVar4 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar10 = uVar15 * 0x200 | uVar15 >> 0x17;
      uVar6 = (uVar13 ^ uVar4) +
              (uVar11 ^ uVar19) + uVar6 + (uVar15 & uVar16 | (uVar15 | uVar16) & uVar3);
      uVar15 = ((uVar35 ^ uVar7) & uVar12 ^ uVar7) + uVar33 + uVar11 + uVar4;
      uVar13 = uVar35 >> 0xd | uVar35 << 0x13;
      uVar15 = (uVar15 * 0x200 | uVar15 >> 0x17) ^ (uVar15 >> 0xf | uVar15 * 0x20000) ^ uVar15;
      uVar35 = uVar11 ^ uVar24 ^ (uVar14 << 0xf | uVar14 >> 0x11);
      uVar1 = (uVar35 << 0xf | uVar35 >> 0x11) ^ (uVar22 << 7 | uVar22 >> 0x19) ^ uVar27 ^ uVar35 ^
              (uVar35 >> 9 | uVar35 << 0x17);
      uVar4 = uVar6 * 0x1000 | uVar6 >> 0x14;
      uVar35 = uVar15 + 0xf3b14f5 + uVar4;
      uVar35 = uVar35 * 0x80 | uVar35 >> 0x19;
      uVar30 = uVar16 * 0x200 | uVar16 >> 0x17;
      uVar16 = (uVar4 ^ uVar35) +
               (uVar17 ^ uVar5) + uVar3 + (uVar16 & uVar6 | (uVar16 | uVar6) & uVar10);
      uVar8 = uVar12 >> 0xd | uVar12 << 0x13;
      uVar4 = ((uVar12 ^ uVar13) & uVar15 ^ uVar13) + uVar7 + uVar17 + uVar35;
      uVar4 = (uVar4 * 0x200 | uVar4 >> 0x17) ^ (uVar4 >> 0xf | uVar4 * 0x20000) ^ uVar4;
      uVar12 = uVar17 ^ uVar9 ^ (uVar23 << 0xf | uVar23 >> 0x11);
      uVar17 = (uVar12 << 0xf | uVar12 >> 0x11) ^ (uVar19 << 7 | uVar19 >> 0x19) ^ uVar28 ^ uVar12 ^
               (uVar12 >> 9 | uVar12 << 0x17);
      uVar35 = uVar16 * 0x1000 | uVar16 >> 0x14;
      uVar12 = uVar4 + 0x1e7629ea + uVar35;
      uVar12 = uVar12 * 0x80 | uVar12 >> 0x19;
      uVar3 = (uVar35 ^ uVar12) +
              (uVar26 ^ uVar36) + uVar10 + (uVar6 & uVar16 | (uVar6 | uVar16) & uVar30);
      uVar6 = uVar6 * 0x200 | uVar6 >> 0x17;
      uVar33 = uVar15 >> 0xd | uVar15 << 0x13;
      uVar12 = ((uVar15 ^ uVar8) & uVar4 ^ uVar8) + uVar13 + uVar26 + uVar12;
      uVar12 = (uVar12 * 0x200 | uVar12 >> 0x17) ^ (uVar12 >> 0xf | uVar12 * 0x20000) ^ uVar12;
      uVar35 = uVar26 ^ uVar25 ^ (uVar18 << 0xf | uVar18 >> 0x11);
      uVar21 = (uVar35 << 0xf | uVar35 >> 0x11) ^ (uVar5 << 7 | uVar5 >> 0x19) ^ uVar20 ^ uVar35 ^
               (uVar35 >> 9 | uVar35 << 0x17);
      uVar15 = uVar3 * 0x1000 | uVar3 >> 0x14;
      uVar35 = uVar12 + 0x3cec53d4 + uVar15;
      uVar13 = uVar35 * 0x80 | uVar35 >> 0x19;
      uVar35 = (uVar22 ^ uVar24) + uVar30 + (uVar16 & uVar3 | (uVar16 | uVar3) & uVar6) +
               (uVar15 ^ uVar13);
      uVar26 = uVar16 * 0x200 | uVar16 >> 0x17;
      uVar7 = uVar4 >> 0xd | uVar4 << 0x13;
      uVar15 = ((uVar4 ^ uVar33) & uVar12 ^ uVar33) + uVar8 + uVar22 + uVar13;
      uVar15 = (uVar15 * 0x200 | uVar15 >> 0x17) ^ (uVar15 >> 0xf | uVar15 * 0x20000) ^ uVar15;
      uVar4 = uVar22 ^ uVar27 ^ (uVar1 << 0xf | uVar1 >> 0x11);
      uVar10 = (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar36 << 7 | uVar36 >> 0x19) ^ uVar14 ^ uVar4 ^
               (uVar4 >> 9 | uVar4 << 0x17);
      uVar13 = uVar35 * 0x1000 | uVar35 >> 0x14;
      uVar4 = uVar15 + 0x79d8a7a8 + uVar13;
      uVar4 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar16 = (uVar19 ^ uVar9) + uVar6 + (uVar3 & uVar35 | (uVar3 | uVar35) & uVar26) +
               (uVar13 ^ uVar4);
      uVar8 = uVar3 * 0x200 | uVar3 >> 0x17;
      uVar13 = uVar12 >> 0xd | uVar12 << 0x13;
      uVar12 = ((uVar12 ^ uVar7) & uVar15 ^ uVar7) + uVar33 + uVar19 + uVar4;
      uVar12 = (uVar12 * 0x200 | uVar12 >> 0x17) ^ (uVar12 >> 0xf | uVar12 * 0x20000) ^ uVar12;
      uVar4 = uVar19 ^ uVar28 ^ (uVar17 << 0xf | uVar17 >> 0x11);
      uVar6 = (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar24 << 7 | uVar24 >> 0x19) ^ uVar23 ^ uVar4 ^
              (uVar4 >> 9 | uVar4 << 0x17);
      uVar3 = uVar16 * 0x1000 | uVar16 >> 0x14;
      uVar4 = uVar12 + 0xf3b14f50 + uVar3;
      uVar30 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar33 = (uVar3 ^ uVar30) +
               (uVar5 ^ uVar25) + uVar26 + (uVar35 & uVar16 | (uVar35 | uVar16) & uVar8);
      uVar31 = uVar35 * 0x200 | uVar35 >> 0x17;
      uVar4 = uVar15 >> 0xd | uVar15 << 0x13;
      uVar35 = ((uVar15 ^ uVar13) & uVar12 ^ uVar13) + uVar7 + uVar5 + uVar30;
      uVar35 = (uVar35 * 0x200 | uVar35 >> 0x17) ^ (uVar35 >> 0xf | uVar35 * 0x20000) ^ uVar35;
      uVar15 = uVar5 ^ uVar20 ^ (uVar21 << 0xf | uVar21 >> 0x11);
      uVar2 = (uVar15 << 0xf | uVar15 >> 0x11) ^ (uVar9 << 7 | uVar9 >> 0x19) ^ uVar18 ^ uVar15 ^
              (uVar15 >> 9 | uVar15 << 0x17);
      uVar7 = uVar33 * 0x1000 | uVar33 >> 0x14;
      uVar15 = uVar35 + 0xe7629ea1 + uVar7;
      uVar15 = uVar15 * 0x80 | uVar15 >> 0x19;
      uVar26 = uVar16 * 0x200 | uVar16 >> 0x17;
      uVar30 = (uVar7 ^ uVar15) +
               (uVar36 ^ uVar27) + uVar8 + (uVar16 & uVar33 | (uVar16 | uVar33) & uVar31);
      uVar16 = uVar12 >> 0xd | uVar12 << 0x13;
      uVar12 = ((uVar12 ^ uVar4) & uVar35 ^ uVar4) + uVar13 + uVar36 + uVar15;
      uVar12 = (uVar12 * 0x200 | uVar12 >> 0x17) ^ (uVar12 >> 0xf | uVar12 * 0x20000) ^ uVar12;
      uVar15 = uVar36 ^ uVar14 ^ (uVar10 << 0xf | uVar10 >> 0x11);
      uVar3 = (uVar15 << 0xf | uVar15 >> 0x11) ^ (uVar25 << 7 | uVar25 >> 0x19) ^ uVar1 ^ uVar15 ^
              (uVar15 >> 9 | uVar15 << 0x17);
      uVar13 = uVar30 * 0x1000 | uVar30 >> 0x14;
      uVar15 = uVar12 + 0xcec53d43 + uVar13;
      uVar15 = uVar15 * 0x80 | uVar15 >> 0x19;
      uVar8 = (uVar13 ^ uVar15) +
              (uVar24 ^ uVar28) + uVar31 + (uVar33 & uVar30 | (uVar33 | uVar30) & uVar26);
      uVar33 = uVar33 * 0x200 | uVar33 >> 0x17;
      uVar7 = uVar35 >> 0xd | uVar35 << 0x13;
      uVar35 = ((uVar35 ^ uVar16) & uVar12 ^ uVar16) + uVar4 + uVar24 + uVar15;
      uVar35 = (uVar35 * 0x200 | uVar35 >> 0x17) ^ (uVar35 >> 0xf | uVar35 * 0x20000) ^ uVar35;
      uVar15 = uVar24 ^ uVar23 ^ (uVar6 << 0xf | uVar6 >> 0x11);
      uVar11 = (uVar15 << 0xf | uVar15 >> 0x11) ^ (uVar27 << 7 | uVar27 >> 0x19) ^ uVar17 ^ uVar15 ^
               (uVar15 >> 9 | uVar15 << 0x17);
      uVar13 = uVar8 * 0x1000 | uVar8 >> 0x14;
      uVar15 = uVar35 + 0x9d8a7a87 + uVar13;
      uVar4 = uVar15 * 0x80 | uVar15 >> 0x19;
      uVar15 = (uVar9 ^ uVar20) + uVar26 + (uVar30 & uVar8 | (uVar30 | uVar8) & uVar33) +
               (uVar13 ^ uVar4);
      uVar36 = uVar30 * 0x200 | uVar30 >> 0x17;
      uVar13 = uVar12 >> 0xd | uVar12 << 0x13;
      uVar12 = ((uVar12 ^ uVar7) & uVar35 ^ uVar7) + uVar16 + uVar9 + uVar4;
      uVar12 = (uVar12 * 0x200 | uVar12 >> 0x17) ^ (uVar12 >> 0xf | uVar12 * 0x20000) ^ uVar12;
      uVar4 = uVar9 ^ uVar18 ^ (uVar2 << 0xf | uVar2 >> 0x11);
      uVar5 = (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar28 << 7 | uVar28 >> 0x19) ^ uVar21 ^ uVar4 ^
              (uVar4 >> 9 | uVar4 << 0x17);
      uVar9 = uVar15 * 0x1000 | uVar15 >> 0x14;
      uVar4 = uVar12 + 0x3b14f50f + uVar9;
      uVar4 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar26 = (uVar25 ^ uVar14) + uVar33 + (uVar8 & uVar15 | (uVar8 | uVar15) & uVar36) +
               (uVar9 ^ uVar4);
      uVar9 = uVar8 * 0x200 | uVar8 >> 0x17;
      uVar8 = uVar35 >> 0xd | uVar35 << 0x13;
      uVar35 = ((uVar35 ^ uVar13) & uVar12 ^ uVar13) + uVar7 + uVar25 + uVar4;
      uVar35 = (uVar35 * 0x200 | uVar35 >> 0x17) ^ (uVar35 >> 0xf | uVar35 * 0x20000) ^ uVar35;
      uVar7 = uVar26 * 0x1000 | uVar26 >> 0x14;
      uVar16 = uVar25 ^ uVar1 ^ (uVar3 << 0xf | uVar3 >> 0x11);
      uVar33 = uVar15 * 0x200 | uVar15 >> 0x17;
      uVar4 = uVar35 + 0x7629ea1e + uVar7;
      uVar4 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar7 = (uVar7 ^ uVar4) +
              (uVar23 ^ uVar27) + uVar36 + (uVar15 & uVar26 | (uVar15 | uVar26) & uVar9);
      uVar30 = uVar12 >> 0xd | uVar12 << 0x13;
      uVar12 = ((uVar12 ^ uVar8) & uVar35 ^ uVar8) + uVar13 + uVar27 + uVar4;
      uVar12 = (uVar12 * 0x200 | uVar12 >> 0x17) ^ (uVar12 >> 0xf | uVar12 * 0x20000) ^ uVar12;
      uVar4 = uVar7 * 0x1000 | uVar7 >> 0x14;
      uVar15 = uVar12 + 0xec53d43c + uVar4;
      uVar13 = uVar15 * 0x80 | uVar15 >> 0x19;
      uVar22 = uVar27 ^ uVar17 ^ (uVar11 << 0xf | uVar11 >> 0x11);
      uVar36 = uVar26 * 0x200 | uVar26 >> 0x17;
      uVar9 = (uVar4 ^ uVar13) +
              (uVar18 ^ uVar28) + uVar9 + (uVar26 & uVar7 | (uVar26 | uVar7) & uVar33);
      uVar15 = uVar35 >> 0xd | uVar35 << 0x13;
      uVar4 = uVar8 + uVar28 + uVar13 + ((uVar35 ^ uVar30) & uVar12 ^ uVar30);
      uVar4 = (uVar4 * 0x200 | uVar4 >> 0x17) ^ (uVar4 >> 0xf | uVar4 * 0x20000) ^ uVar4;
      uVar13 = uVar9 * 0x1000 | uVar9 >> 0x14;
      uVar19 = uVar28 ^ uVar21 ^ (uVar5 << 0xf | uVar5 >> 0x11);
      uVar35 = uVar4 + 0xd8a7a879 + uVar13;
      uVar31 = uVar7 * 0x200 | uVar7 >> 0x17;
      uVar35 = uVar35 * 0x80 | uVar35 >> 0x19;
      uVar7 = (uVar20 ^ uVar1) + uVar33 + (uVar7 & uVar9 | (uVar7 | uVar9) & uVar36) +
              (uVar13 ^ uVar35);
      uVar13 = uVar12 >> 0xd | uVar12 << 0x13;
      uVar12 = ((uVar12 ^ uVar15) & uVar4 ^ uVar15) + uVar30 + uVar20 + uVar35;
      uVar12 = (uVar12 * 0x200 | uVar12 >> 0x17) ^ (uVar12 >> 0xf | uVar12 * 0x20000) ^ uVar12;
      uVar8 = uVar7 * 0x1000 | uVar7 >> 0x14;
      uVar35 = uVar12 + 0xb14f50f3 + uVar8;
      uVar30 = uVar35 * 0x80 | uVar35 >> 0x19;
      uVar35 = (uVar14 ^ uVar17) + uVar36 + (uVar9 & uVar7 | (uVar9 | uVar7) & uVar31) +
               (uVar8 ^ uVar30);
      uVar26 = uVar9 * 0x200 | uVar9 >> 0x17;
      uVar9 = uVar4 >> 0xd | uVar4 << 0x13;
      uVar15 = ((uVar4 ^ uVar13) & uVar12 ^ uVar13) + uVar15 + uVar14 + uVar30;
      uVar15 = (uVar15 * 0x200 | uVar15 >> 0x17) ^ (uVar15 >> 0xf | uVar15 * 0x20000) ^ uVar15;
      uVar36 = uVar35 * 0x1000 | uVar35 >> 0x14;
      uVar8 = uVar7 * 0x200 | uVar7 >> 0x17;
      uVar4 = uVar15 + 0x629ea1e7 + uVar36;
      uVar33 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar30 = uVar12 >> 0xd | uVar12 << 0x13;
      uVar4 = (uVar23 ^ uVar21) + uVar31 + (uVar7 & uVar35 | (uVar7 | uVar35) & uVar26) +
              (uVar36 ^ uVar33);
      uVar13 = uVar13 + uVar23 + uVar33 + ((uVar12 ^ uVar9) & uVar15 ^ uVar9);
      uVar13 = (uVar13 * 0x200 | uVar13 >> 0x17) ^ (uVar13 >> 0xf | uVar13 * 0x20000) ^ uVar13;
      uVar33 = uVar4 * 0x1000 | uVar4 >> 0x14;
      uVar36 = uVar35 * 0x200 | uVar35 >> 0x17;
      uVar12 = uVar13 + 0xc53d43ce + uVar33;
      uVar12 = uVar12 * 0x80 | uVar12 >> 0x19;
      uVar7 = uVar15 >> 0xd | uVar15 << 0x13;
      uVar26 = (uVar33 ^ uVar12) +
               (uVar10 ^ uVar18) + uVar26 + (uVar35 & uVar4 | (uVar35 | uVar4) & uVar8);
      uVar35 = ((uVar15 ^ uVar30) & uVar13 ^ uVar30) + uVar18 + uVar9 + uVar12;
      uVar35 = (uVar35 * 0x200 | uVar35 >> 0x17) ^ (uVar35 >> 0xf | uVar35 * 0x20000) ^ uVar35;
      uVar15 = uVar26 * 0x1000 | uVar26 >> 0x14;
      uVar12 = uVar35 + 0x8a7a879d + uVar15;
      uVar12 = uVar12 * 0x80 | uVar12 >> 0x19;
      uVar33 = uVar4 * 0x200 | uVar4 >> 0x17;
      uVar9 = (uVar15 ^ uVar12) +
              (uVar6 ^ uVar1) + uVar8 + (uVar4 & uVar26 | (uVar4 | uVar26) & uVar36);
      uVar8 = uVar13 >> 0xd | uVar13 << 0x13;
      uVar4 = uVar9 * 0x1000 | uVar9 >> 0x14;
      uVar15 = uVar12 + uVar30 + uVar1 + ((uVar13 ^ uVar7) & uVar35 ^ uVar7);
      uVar15 = (uVar15 * 0x200 | uVar15 >> 0x17) ^ (uVar15 >> 0xf | uVar15 * 0x20000) ^ uVar15;
      uVar12 = uVar15 + 0x14f50f3b + uVar4;
      uVar12 = uVar12 * 0x80 | uVar12 >> 0x19;
      uVar13 = (uVar4 ^ uVar12) +
               (uVar2 ^ uVar17) + uVar36 + (uVar26 & uVar9 | (uVar26 | uVar9) & uVar33);
      uVar30 = uVar26 * 0x200 | uVar26 >> 0x17;
      uVar4 = uVar17 + uVar7 + uVar12 + ((uVar35 ^ uVar8) & uVar15 ^ uVar8);
      uVar35 = uVar35 >> 0xd | uVar35 << 0x13;
      uVar4 = (uVar4 * 0x200 | uVar4 >> 0x17) ^ (uVar4 >> 0xf | uVar4 * 0x20000) ^ uVar4;
      uVar7 = uVar13 * 0x1000 | uVar13 >> 0x14;
      uVar12 = uVar4 + 0x29ea1e76 + uVar7;
      uVar26 = uVar9 * 0x200 | uVar9 >> 0x17;
      uVar12 = uVar12 * 0x80 | uVar12 >> 0x19;
      uVar33 = (uVar7 ^ uVar12) +
               (uVar3 ^ uVar21) + uVar33 + (uVar9 & uVar13 | (uVar9 | uVar13) & uVar30);
      uVar36 = uVar15 >> 0xd | uVar15 << 0x13;
      uVar15 = ((uVar15 ^ uVar35) & uVar4 ^ uVar35) + uVar8 + uVar21 + uVar12;
      uVar15 = (uVar15 * 0x200 | uVar15 >> 0x17) ^ (uVar15 >> 0xf | uVar15 * 0x20000) ^ uVar15;
      uVar7 = uVar33 * 0x1000 | uVar33 >> 0x14;
      uVar12 = uVar15 + 0x53d43cec + uVar7;
      uVar12 = uVar12 * 0x80 | uVar12 >> 0x19;
      uVar8 = uVar13 * 0x200 | uVar13 >> 0x17;
      uVar7 = (uVar10 ^ uVar11) + uVar30 + (uVar13 & uVar33 | (uVar13 | uVar33) & uVar26) +
              (uVar7 ^ uVar12);
      uVar13 = uVar4 >> 0xd | uVar4 << 0x13;
      uVar12 = ((uVar4 ^ uVar36) & uVar15 ^ uVar36) + uVar35 + uVar10 + uVar12;
      uVar12 = (uVar12 * 0x200 | uVar12 >> 0x17) ^ (uVar12 >> 0xf | uVar12 * 0x20000) ^ uVar12;
      uVar4 = uVar7 * 0x1000 | uVar7 >> 0x14;
      uVar35 = uVar12 + 0xa7a879d8 + uVar4;
      uVar9 = uVar35 * 0x80 | uVar35 >> 0x19;
      uVar35 = (uVar5 ^ uVar6) + uVar26 + (uVar33 & uVar7 | (uVar33 | uVar7) & uVar8) +
               (uVar4 ^ uVar9);
      uVar33 = uVar33 * 0x200 | uVar33 >> 0x17;
      uVar30 = uVar15 >> 0xd | uVar15 << 0x13;
      uVar36 = uVar36 + uVar6 + uVar9 + ((uVar15 ^ uVar13) & uVar12 ^ uVar13);
      uVar36 = (uVar36 * 0x200 | uVar36 >> 0x17) ^ (uVar36 >> 0xf | uVar36 * 0x20000) ^ uVar36;
      uVar4 = uVar35 * 0x1000 | uVar35 >> 0x14;
      uVar15 = uVar36 + 0x4f50f3b1 + uVar4;
      uVar15 = uVar15 * 0x80 | uVar15 >> 0x19;
      uVar26 = (uVar4 ^ uVar15) +
               ((uVar7 | uVar35) & uVar33 | uVar7 & uVar35) +
               ((uVar16 << 0xf | uVar16 >> 0x11) ^
                (uVar20 << 7 | uVar20 >> 0x19) ^ uVar10 ^ uVar2 ^ uVar16 ^
               (uVar16 >> 9 | uVar16 << 0x17)) + uVar8;
      uVar8 = uVar26 * 0x1000 | uVar26 >> 0x14;
      uVar4 = uVar7 * 0x200 | uVar7 >> 0x17;
      uVar9 = uVar12 >> 0xd | uVar12 << 0x13;
      uVar12 = ((uVar12 ^ uVar30) & uVar36 ^ uVar30) + uVar13 + uVar2 + uVar15;
      uVar12 = (uVar12 * 0x200 | uVar12 >> 0x17) ^ (uVar12 >> 0xf | uVar12 * 0x20000) ^ uVar12;
      uVar15 = uVar12 + 0x9ea1e762 + uVar8;
      uVar13 = uVar15 * 0x80 | uVar15 >> 0x19;
      uVar15 = ((uVar35 | uVar26) & uVar4 | uVar35 & uVar26) +
               ((uVar22 << 0xf | uVar22 >> 0x11) ^
                (uVar14 << 7 | uVar14 >> 0x19) ^ uVar6 ^ uVar3 ^ uVar22 ^
               (uVar22 >> 9 | uVar22 << 0x17)) + uVar33 + (uVar8 ^ uVar13);
      uVar6 = uVar13 + uVar30 + uVar3 + ((uVar36 ^ uVar9) & uVar12 ^ uVar9);
      uVar7 = uVar35 * 0x200 | uVar35 >> 0x17;
      uVar3 = uVar36 >> 0xd | uVar36 << 0x13;
      local_6c = local_6c ^ uVar15;
      uVar6 = (uVar6 * 0x200 | uVar6 >> 0x17) ^ (uVar6 >> 0xf | uVar6 * 0x20000) ^ uVar6;
      uVar13 = uVar15 * 0x1000 | uVar15 >> 0x14;
      uVar35 = uVar6 + 0x3d43cec5 + uVar13;
      uVar35 = uVar35 * 0x80 | uVar35 >> 0x19;
      uVar8 = uVar9 + uVar11 + uVar35 + ((uVar12 ^ uVar3) & uVar6 ^ uVar3);
      local_a4 = local_a4 ^
                 ((uVar19 << 0xf | uVar19 >> 0x11) ^
                  (uVar23 << 7 | uVar23 >> 0x19) ^ uVar2 ^ uVar11 ^ uVar19 ^
                 (uVar19 >> 9 | uVar19 << 0x17)) + uVar4 +
                 ((uVar26 | uVar15) & uVar7 | uVar26 & uVar15) + (uVar13 ^ uVar35);
      param_1[1] = local_6c;
      *param_1 = local_a4;
      local_68 = local_68 ^ (uVar26 * 0x200 | uVar26 >> 0x17);
      local_50 = local_50 ^ uVar7;
      param_1[2] = local_68;
      local_60 = local_60 ^ (uVar12 >> 0xd | uVar12 << 0x13);
      param_1[3] = local_50;
      local_4c = local_4c ^ uVar3;
      local_64 = local_64 ^ uVar6;
      local_48 = local_48 + -1;
      param_1[5] = local_64;
      local_74 = local_74 ^ uVar8 ^ (uVar8 * 0x200 | uVar8 >> 0x17) ^
                 (uVar8 >> 0xf | uVar8 * 0x20000);
      param_1[6] = local_60;
      param_1[7] = local_4c;
      param_1[4] = local_74;
      local_40 = local_40 + 0x10;
    } while (local_48 != -1);
  }
  return;
}



undefined8 ossl_sm3_update(long param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  
  if (param_3 == 0) {
    return 1;
  }
  iVar9 = (int)param_3;
  uVar2 = *(uint *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar9 * 8 + *(uint *)(param_1 + 0x20);
  uVar3 = (ulong)*(uint *)(param_1 + 0x68);
  *(uint *)(param_1 + 0x24) =
       *(int *)(param_1 + 0x24) + (uint)CARRY4(iVar9 * 8,uVar2) + (int)(param_3 >> 0x1d);
  if (uVar3 == 0) {
    if (param_3 < 0x40) goto LAB_00102a58;
LAB_00102b07:
    ossl_sm3_block_data_order(param_1,param_2,param_3 >> 6);
    param_2 = (undefined8 *)((long)param_2 + (param_3 & 0xffffffffffffffc0));
    param_3 = param_3 - (param_3 & 0xffffffffffffffc0);
  }
  else {
    lVar1 = param_1 + 0x28;
    if ((param_3 + uVar3 | param_3) < 0x40) {
      memcpy((void *)(lVar1 + uVar3),param_2,param_3);
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + iVar9;
      return 1;
    }
    lVar5 = -uVar3;
    uVar8 = lVar5 + 0x40;
    puVar4 = (undefined8 *)(uVar3 + lVar1);
    if (uVar8 < 8) {
      if ((uVar8 & 4) == 0) {
        if ((uVar8 != 0) && (*(undefined1 *)puVar4 = *(undefined1 *)param_2, (uVar8 & 2) != 0)) {
          *(undefined2 *)((long)puVar4 + lVar5 + 0x3e) =
               *(undefined2 *)((long)param_2 + lVar5 + 0x3e);
        }
      }
      else {
        *(undefined4 *)puVar4 = *(undefined4 *)param_2;
        *(undefined4 *)((long)puVar4 + lVar5 + 0x3c) = *(undefined4 *)((long)param_2 + lVar5 + 0x3c)
        ;
      }
    }
    else {
      *puVar4 = *param_2;
      *(undefined8 *)((long)puVar4 + lVar5 + 0x38) = *(undefined8 *)((long)param_2 + lVar5 + 0x38);
      lVar5 = (long)puVar4 - ((ulong)(puVar4 + 1) & 0xfffffffffffffff8);
      uVar6 = lVar5 + uVar8 & 0xfffffffffffffff8;
      if (7 < uVar6) {
        uVar7 = 0;
        do {
          *(undefined8 *)(((ulong)(puVar4 + 1) & 0xfffffffffffffff8) + uVar7) =
               *(undefined8 *)((long)param_2 + (uVar7 - lVar5));
          uVar7 = uVar7 + 8;
        } while (uVar7 < uVar6);
      }
    }
    param_2 = (undefined8 *)((long)param_2 + uVar8);
    ossl_sm3_block_data_order(param_1,lVar1,1);
    param_3 = (param_3 + uVar3) - 0x40;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x38) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x48) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x58) = (undefined1  [16])0x0;
    if (0x3f < param_3) goto LAB_00102b07;
  }
  if (param_3 == 0) {
    return 1;
  }
  iVar9 = (int)param_3;
LAB_00102a58:
  *(int *)(param_1 + 0x68) = iVar9;
  memcpy((void *)(param_1 + 0x28),param_2,param_3);
  return 1;
}



void ossl_sm3_transform(undefined8 param_1,undefined8 param_2)

{
  ossl_sm3_block_data_order(param_1,param_2,1);
  return;
}



undefined8 ossl_sm3_final(uint *param_1,uint *param_2)

{
  uint *ptr;
  undefined1 *puVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  
  ptr = param_2 + 10;
  uVar5 = param_2[0x1a];
  *(undefined1 *)((long)param_2 + (ulong)uVar5 + 0x28) = 0x80;
  uVar3 = (ulong)uVar5 + 1;
  if (uVar3 < 0x39) {
    uVar6 = 0x38 - uVar3;
    puVar4 = (uint *)(uVar3 + (long)ptr);
    goto LAB_00102c23;
  }
  puVar1 = (undefined1 *)((long)ptr + uVar3);
  uVar3 = 0x40 - uVar3;
  if (uVar3 != 0) {
    uVar6 = 0;
    if ((uVar3 & 1) != 0) {
      uVar6 = 1;
      *puVar1 = 0;
      if (uVar3 < 2) goto LAB_00102d44;
    }
    do {
      puVar1[uVar6] = 0;
      puVar1[uVar6 + 1] = 0;
      uVar6 = uVar6 + 2;
    } while (uVar6 < uVar3);
  }
LAB_00102d44:
  ossl_sm3_block_data_order(param_2,ptr,1);
  uVar6 = 0x38;
  puVar4 = ptr;
LAB_00102c23:
  uVar5 = (uint)uVar6;
  if (uVar5 < 8) {
    if ((uVar6 & 4) == 0) {
      if ((uVar5 != 0) && (*(undefined1 *)puVar4 = 0, (uVar6 & 2) != 0)) {
        *(undefined2 *)((long)puVar4 + ((uVar6 & 0xffffffff) - 2)) = 0;
      }
    }
    else {
      *puVar4 = 0;
      *(undefined4 *)((long)puVar4 + ((uVar6 & 0xffffffff) - 4)) = 0;
    }
  }
  else {
    puVar4[0] = 0;
    puVar4[1] = 0;
    *(undefined8 *)((long)puVar4 + ((uVar6 & 0xffffffff) - 8)) = 0;
    uVar5 = uVar5 + ((int)puVar4 - (int)((ulong)(puVar4 + 2) & 0xfffffffffffffff8)) & 0xfffffff8;
    if (7 < uVar5) {
      uVar2 = 0;
      do {
        uVar3 = (ulong)uVar2;
        uVar2 = uVar2 + 8;
        *(undefined8 *)(((ulong)(puVar4 + 2) & 0xfffffffffffffff8) + uVar3) = 0;
      } while (uVar2 < uVar5);
    }
  }
  uVar3 = *(ulong *)(param_2 + 8);
  *(ulong *)(param_2 + 0x18) =
       uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
       (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
       (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  ossl_sm3_block_data_order(param_2,ptr,1);
  param_2[0x1a] = 0;
  OPENSSL_cleanse(ptr,0x40);
  uVar5 = *param_2;
  *param_1 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  uVar5 = param_2[1];
  param_1[1] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  uVar5 = param_2[2];
  param_1[2] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  uVar5 = param_2[3];
  param_1[3] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  uVar5 = param_2[4];
  param_1[4] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  uVar5 = param_2[5];
  param_1[5] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  uVar5 = param_2[6];
  param_1[6] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  uVar5 = param_2[7];
  param_1[7] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  return 1;
}


