
void blake2s_compress(uint *param_1,int *param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
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
  long in_FS_OFFSET;
  uint local_148;
  uint local_f4;
  int *local_e8;
  uint local_d8;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  ulong local_90;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_74;
  uint uStack_6c;
  
  lVar17 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_84 = (uint)((ulong)*(undefined8 *)param_1 >> 0x20);
  uVar18 = 0x40;
  if (param_3 < 0x41) {
    uVar18 = param_3;
  }
  local_148 = (uint)*(undefined8 *)param_1;
  uVar32 = local_148;
  local_148 = (uint)*(undefined8 *)(param_1 + 4);
  uStack_74 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  local_f4 = param_1[9];
  uStack_6c = (uint)(*(ulong *)(param_1 + 6) >> 0x20);
  local_bc = param_1[1];
  local_d8 = param_1[8];
  uStack_80 = (uint)*(undefined8 *)(param_1 + 2);
  uVar21 = *(ulong *)(param_1 + 6) & 0xffffffff;
  local_b4 = param_1[2];
  uStack_7c = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  local_b0 = param_1[3];
  local_ac = param_1[4];
  local_a8 = param_1[5];
  local_a4 = param_1[6];
  local_a0 = param_1[7];
  local_e8 = param_2;
  local_b8 = *param_1;
  local_90 = param_3;
  do {
    local_d8 = (int)uVar18 + local_d8;
    iVar1 = local_e8[3];
    iVar2 = local_e8[4];
    iVar3 = local_e8[5];
    iVar4 = *local_e8;
    iVar5 = local_e8[1];
    iVar6 = local_e8[2];
    iVar7 = local_e8[8];
    iVar8 = local_e8[6];
    iVar9 = local_e8[7];
    iVar10 = local_e8[0xb];
    iVar11 = local_e8[10];
    iVar12 = local_e8[9];
    iVar13 = local_e8[0xe];
    iVar14 = local_e8[0xd];
    iVar15 = local_e8[0xc];
    iVar16 = local_e8[0xf];
    param_1[8] = local_d8;
    local_f4 = local_f4 + (local_d8 < uVar18);
    uVar32 = uVar32 + local_148 + iVar4;
    param_1[9] = local_f4;
    uVar26 = local_d8 ^ uVar32 ^ 0x510e527f;
    uVar27 = uVar26 << 0x10 | uVar26 >> 0x10;
    uVar26 = uVar27 + 0x6a09e667;
    local_148 = local_148 ^ uVar26;
    uVar30 = local_148 >> 0xc | local_148 << 0x14;
    uVar33 = uVar32 + iVar5 + uVar30;
    uVar27 = uVar27 ^ uVar33;
    uVar28 = uVar27 >> 8 | uVar27 << 0x18;
    uVar26 = uVar26 + uVar28;
    uVar30 = uVar30 ^ uVar26;
    uVar31 = uVar30 >> 7 | uVar30 << 0x19;
    uStack_84 = uStack_74 + iVar6 + uStack_84;
    uVar32 = local_f4 ^ uStack_84 ^ 0x9b05688c;
    uVar30 = uVar32 << 0x10 | uVar32 >> 0x10;
    uVar27 = uVar30 + 0xbb67ae85;
    uStack_74 = uStack_74 ^ uVar27;
    uVar32 = uStack_74 >> 0xc | uStack_74 << 0x14;
    uVar22 = iVar1 + uStack_84 + uVar32;
    uVar30 = uVar30 ^ uVar22;
    uVar25 = uVar30 >> 8 | uVar30 << 0x18;
    uVar27 = uVar27 + uVar25;
    uStack_80 = (uint)uVar21 + iVar2 + uStack_80;
    uVar32 = uVar32 ^ uVar27;
    uVar32 = uVar32 >> 7 | uVar32 << 0x19;
    uVar30 = param_1[10] ^ uStack_80 ^ 0x1f83d9ab;
    uVar23 = uVar30 << 0x10 | uVar30 >> 0x10;
    uVar30 = uVar23 + 0x3c6ef372;
    uVar19 = (uint)uVar21 ^ uVar30;
    uVar20 = uVar19 >> 0xc | uVar19 << 0x14;
    uStack_7c = uStack_7c + uStack_6c + iVar8;
    uVar29 = uStack_80 + iVar3 + uVar20;
    uVar23 = uVar23 ^ uVar29;
    uVar24 = uVar23 >> 8 | uVar23 << 0x18;
    uVar19 = param_1[0xb] ^ uStack_7c ^ 0x5be0cd19;
    uVar30 = uVar30 + uVar24;
    uVar35 = uVar19 << 0x10 | uVar19 >> 0x10;
    uVar34 = uVar33 + uVar32 + iVar7;
    uVar20 = uVar20 ^ uVar30;
    uVar19 = uVar35 + 0xa54ff53a;
    uVar23 = uVar20 >> 7 | uVar20 << 0x19;
    uStack_6c = uStack_6c ^ uVar19;
    uVar20 = uStack_6c >> 0xc | uStack_6c << 0x14;
    uVar33 = uStack_7c + iVar9 + uVar20;
    uVar35 = uVar35 ^ uVar33;
    uVar35 = uVar35 >> 8 | uVar35 << 0x18;
    uVar19 = uVar19 + uVar35;
    uVar35 = uVar35 ^ uVar34;
    uVar36 = uVar35 << 0x10 | uVar35 >> 0x10;
    uVar20 = uVar20 ^ uVar19;
    uVar30 = uVar30 + uVar36;
    uVar20 = uVar20 >> 7 | uVar20 << 0x19;
    uVar32 = uVar32 ^ uVar30;
    uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
    uVar35 = uVar34 + iVar12 + uVar32;
    uVar36 = uVar36 ^ uVar35;
    uVar36 = uVar36 >> 8 | uVar36 << 0x18;
    uVar30 = uVar30 + uVar36;
    uVar32 = uVar32 ^ uVar30;
    uVar34 = uVar22 + iVar11 + uVar23;
    uVar32 = uVar32 >> 7 | uVar32 << 0x19;
    uVar28 = uVar28 ^ uVar34;
    uVar22 = uVar28 << 0x10 | uVar28 >> 0x10;
    uVar19 = uVar19 + uVar22;
    uVar23 = uVar23 ^ uVar19;
    uVar23 = uVar23 >> 0xc | uVar23 << 0x14;
    uVar29 = uVar29 + iVar15 + uVar20;
    uVar34 = uVar34 + iVar10 + uVar23;
    uVar25 = uVar25 ^ uVar29;
    uVar22 = uVar22 ^ uVar34;
    uVar25 = uVar25 << 0x10 | uVar25 >> 0x10;
    uVar28 = uVar22 >> 8 | uVar22 << 0x18;
    uVar26 = uVar26 + uVar25;
    uVar19 = uVar19 + uVar28;
    uVar20 = uVar20 ^ uVar26;
    uVar20 = uVar20 >> 0xc | uVar20 << 0x14;
    uVar23 = uVar23 ^ uVar19;
    uVar22 = uVar23 >> 7 | uVar23 << 0x19;
    uVar29 = uVar29 + iVar14 + uVar20;
    uVar25 = uVar25 ^ uVar29;
    uVar25 = uVar25 >> 8 | uVar25 << 0x18;
    uVar26 = uVar26 + uVar25;
    uVar20 = uVar20 ^ uVar26;
    uVar23 = uVar20 >> 7 | uVar20 << 0x19;
    uVar33 = uVar33 + iVar13 + uVar31;
    uVar24 = uVar24 ^ uVar33;
    uVar20 = uVar24 << 0x10 | uVar24 >> 0x10;
    uVar27 = uVar27 + uVar20;
    uVar31 = uVar31 ^ uVar27;
    uVar31 = uVar31 >> 0xc | uVar31 << 0x14;
    uVar33 = uVar33 + iVar16 + uVar31;
    uVar20 = uVar20 ^ uVar33;
    uVar24 = uVar20 >> 8 | uVar20 << 0x18;
    uVar27 = uVar27 + uVar24;
    uVar31 = uVar31 ^ uVar27;
    uVar39 = uVar31 >> 7 | uVar31 << 0x19;
    uVar31 = uVar35 + iVar13 + uVar39;
    uVar28 = uVar28 ^ uVar31;
    uVar20 = uVar28 << 0x10 | uVar28 >> 0x10;
    uVar26 = uVar26 + uVar20;
    uVar39 = uVar39 ^ uVar26;
    uVar39 = uVar39 >> 0xc | uVar39 << 0x14;
    uVar35 = uVar31 + iVar11 + uVar39;
    uVar20 = uVar20 ^ uVar35;
    uVar28 = uVar20 >> 8 | uVar20 << 0x18;
    uVar26 = uVar26 + uVar28;
    uVar39 = uVar39 ^ uVar26;
    uVar20 = uVar39 >> 7 | uVar39 << 0x19;
    uVar31 = uVar34 + iVar2 + uVar32;
    uVar25 = uVar25 ^ uVar31;
    uVar25 = uVar25 << 0x10 | uVar25 >> 0x10;
    uVar27 = uVar27 + uVar25;
    uVar32 = uVar32 ^ uVar27;
    uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
    uVar31 = uVar31 + iVar7 + uVar32;
    uVar25 = uVar25 ^ uVar31;
    uVar29 = uVar29 + iVar12 + uVar22;
    uVar25 = uVar25 >> 8 | uVar25 << 0x18;
    uVar24 = uVar24 ^ uVar29;
    uVar27 = uVar27 + uVar25;
    uVar24 = uVar24 << 0x10 | uVar24 >> 0x10;
    uVar32 = uVar32 ^ uVar27;
    uVar30 = uVar30 + uVar24;
    uVar32 = uVar32 >> 7 | uVar32 << 0x19;
    uVar22 = uVar22 ^ uVar30;
    uVar22 = uVar22 >> 0xc | uVar22 << 0x14;
    uVar29 = uVar29 + iVar16 + uVar22;
    uVar24 = uVar24 ^ uVar29;
    uVar24 = uVar24 >> 8 | uVar24 << 0x18;
    uVar30 = uVar30 + uVar24;
    uVar22 = uVar22 ^ uVar30;
    uVar22 = uVar22 >> 7 | uVar22 << 0x19;
    uVar33 = uVar33 + iVar14 + uVar23;
    uVar36 = uVar36 ^ uVar33;
    uVar34 = uVar36 << 0x10 | uVar36 >> 0x10;
    uVar19 = uVar19 + uVar34;
    uVar23 = uVar23 ^ uVar19;
    uVar23 = uVar23 >> 0xc | uVar23 << 0x14;
    uVar33 = uVar33 + iVar8 + uVar23;
    uVar34 = uVar34 ^ uVar33;
    uVar36 = uVar34 >> 8 | uVar34 << 0x18;
    uVar19 = uVar19 + uVar36;
    uVar34 = uVar35 + iVar5 + uVar32;
    uVar23 = uVar23 ^ uVar19;
    uVar36 = uVar36 ^ uVar34;
    uVar23 = uVar23 >> 7 | uVar23 << 0x19;
    uVar36 = uVar36 << 0x10 | uVar36 >> 0x10;
    uVar30 = uVar30 + uVar36;
    uVar32 = uVar32 ^ uVar30;
    uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
    uVar35 = uVar34 + iVar15 + uVar32;
    uVar36 = uVar36 ^ uVar35;
    uVar36 = uVar36 >> 8 | uVar36 << 0x18;
    uVar30 = uVar30 + uVar36;
    uVar32 = uVar32 ^ uVar30;
    uVar32 = uVar32 >> 7 | uVar32 << 0x19;
    uVar31 = uVar31 + iVar4 + uVar22;
    uVar28 = uVar28 ^ uVar31;
    uVar28 = uVar28 << 0x10 | uVar28 >> 0x10;
    uVar19 = uVar19 + uVar28;
    uVar22 = uVar22 ^ uVar19;
    uVar22 = uVar22 >> 0xc | uVar22 << 0x14;
    uVar34 = uVar31 + iVar6 + uVar22;
    uVar28 = uVar28 ^ uVar34;
    uVar28 = uVar28 >> 8 | uVar28 << 0x18;
    uVar19 = uVar19 + uVar28;
    uVar22 = uVar22 ^ uVar19;
    uVar22 = uVar22 >> 7 | uVar22 << 0x19;
    uVar29 = uVar29 + iVar10 + uVar23;
    uVar25 = uVar25 ^ uVar29;
    uVar25 = uVar25 << 0x10 | uVar25 >> 0x10;
    uVar26 = uVar26 + uVar25;
    uVar23 = uVar23 ^ uVar26;
    uVar31 = uVar33 + iVar3 + uVar20;
    uVar23 = uVar23 >> 0xc | uVar23 << 0x14;
    uVar24 = uVar24 ^ uVar31;
    uVar33 = uVar29 + iVar9 + uVar23;
    uVar24 = uVar24 << 0x10 | uVar24 >> 0x10;
    uVar25 = uVar25 ^ uVar33;
    uVar27 = uVar27 + uVar24;
    uVar25 = uVar25 >> 8 | uVar25 << 0x18;
    uVar20 = uVar20 ^ uVar27;
    uVar26 = uVar26 + uVar25;
    uVar23 = uVar23 ^ uVar26;
    uVar29 = uVar20 >> 0xc | uVar20 << 0x14;
    uVar20 = uVar23 >> 7 | uVar23 << 0x19;
    uVar31 = uVar31 + iVar1 + uVar29;
    uVar24 = uVar24 ^ uVar31;
    uVar24 = uVar24 >> 8 | uVar24 << 0x18;
    uVar27 = uVar27 + uVar24;
    uVar29 = uVar29 ^ uVar27;
    uVar39 = uVar29 >> 7 | uVar29 << 0x19;
    uVar29 = uVar35 + iVar10 + uVar39;
    uVar28 = uVar28 ^ uVar29;
    uVar23 = uVar28 << 0x10 | uVar28 >> 0x10;
    uVar26 = uVar26 + uVar23;
    uVar39 = uVar39 ^ uVar26;
    uVar28 = uVar39 >> 0xc | uVar39 << 0x14;
    uVar35 = uVar29 + iVar7 + uVar28;
    uVar23 = uVar23 ^ uVar35;
    uVar29 = uVar23 >> 8 | uVar23 << 0x18;
    uVar26 = uVar26 + uVar29;
    uVar28 = uVar28 ^ uVar26;
    uVar23 = uVar28 >> 7 | uVar28 << 0x19;
    uVar28 = uVar34 + iVar15 + uVar32;
    uVar25 = uVar25 ^ uVar28;
    uVar25 = uVar25 << 0x10 | uVar25 >> 0x10;
    uVar27 = uVar27 + uVar25;
    uVar32 = uVar32 ^ uVar27;
    uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
    uVar34 = uVar28 + iVar4 + uVar32;
    uVar25 = uVar25 ^ uVar34;
    uVar28 = uVar25 >> 8 | uVar25 << 0x18;
    uVar27 = uVar27 + uVar28;
    uVar32 = uVar32 ^ uVar27;
    uVar32 = uVar32 >> 7 | uVar32 << 0x19;
    uVar25 = uVar33 + iVar3 + uVar22;
    uVar24 = uVar24 ^ uVar25;
    uVar24 = uVar24 << 0x10 | uVar24 >> 0x10;
    uVar30 = uVar30 + uVar24;
    uVar22 = uVar22 ^ uVar30;
    uVar22 = uVar22 >> 0xc | uVar22 << 0x14;
    uVar33 = uVar25 + iVar6 + uVar22;
    uVar24 = uVar24 ^ uVar33;
    uVar25 = uVar24 >> 8 | uVar24 << 0x18;
    uVar24 = uVar31 + iVar16 + uVar20;
    uVar30 = uVar30 + uVar25;
    uVar36 = uVar36 ^ uVar24;
    uVar22 = uVar22 ^ uVar30;
    uVar36 = uVar36 << 0x10 | uVar36 >> 0x10;
    uVar22 = uVar22 >> 7 | uVar22 << 0x19;
    uVar19 = uVar19 + uVar36;
    uVar20 = uVar20 ^ uVar19;
    uVar20 = uVar20 >> 0xc | uVar20 << 0x14;
    uVar31 = uVar24 + iVar14 + uVar20;
    uVar36 = uVar36 ^ uVar31;
    uVar24 = uVar35 + iVar11 + uVar32;
    uVar35 = uVar36 >> 8 | uVar36 << 0x18;
    uVar19 = uVar19 + uVar35;
    uVar35 = uVar35 ^ uVar24;
    uVar36 = uVar35 << 0x10 | uVar35 >> 0x10;
    uVar20 = uVar20 ^ uVar19;
    uVar30 = uVar30 + uVar36;
    uVar20 = uVar20 >> 7 | uVar20 << 0x19;
    uVar32 = uVar32 ^ uVar30;
    uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
    uVar35 = uVar24 + iVar13 + uVar32;
    uVar36 = uVar36 ^ uVar35;
    uVar36 = uVar36 >> 8 | uVar36 << 0x18;
    uVar30 = uVar30 + uVar36;
    uVar32 = uVar32 ^ uVar30;
    uVar32 = uVar32 >> 7 | uVar32 << 0x19;
    uVar34 = uVar34 + iVar1 + uVar22;
    uVar29 = uVar29 ^ uVar34;
    uVar24 = uVar29 << 0x10 | uVar29 >> 0x10;
    uVar19 = uVar19 + uVar24;
    uVar22 = uVar22 ^ uVar19;
    uVar22 = uVar22 >> 0xc | uVar22 << 0x14;
    uVar34 = uVar34 + iVar8 + uVar22;
    uVar24 = uVar24 ^ uVar34;
    uVar29 = uVar24 >> 8 | uVar24 << 0x18;
    uVar19 = uVar19 + uVar29;
    uVar22 = uVar22 ^ uVar19;
    uVar24 = uVar22 >> 7 | uVar22 << 0x19;
    uVar33 = uVar33 + iVar9 + uVar20;
    uVar28 = uVar28 ^ uVar33;
    uVar22 = uVar28 << 0x10 | uVar28 >> 0x10;
    uVar26 = uVar26 + uVar22;
    uVar20 = uVar20 ^ uVar26;
    uVar20 = uVar20 >> 0xc | uVar20 << 0x14;
    uVar33 = uVar33 + iVar5 + uVar20;
    uVar22 = uVar22 ^ uVar33;
    uVar28 = uVar22 >> 8 | uVar22 << 0x18;
    uVar26 = uVar26 + uVar28;
    uVar20 = uVar20 ^ uVar26;
    uVar22 = uVar20 >> 7 | uVar20 << 0x19;
    uVar31 = uVar31 + iVar12 + uVar23;
    uVar25 = uVar25 ^ uVar31;
    uVar20 = uVar25 << 0x10 | uVar25 >> 0x10;
    uVar27 = uVar27 + uVar20;
    uVar23 = uVar23 ^ uVar27;
    uVar25 = uVar23 >> 0xc | uVar23 << 0x14;
    uVar31 = uVar31 + iVar2 + uVar25;
    uVar20 = uVar20 ^ uVar31;
    uVar23 = uVar20 >> 8 | uVar20 << 0x18;
    uVar27 = uVar27 + uVar23;
    uVar25 = uVar25 ^ uVar27;
    uVar39 = uVar25 >> 7 | uVar25 << 0x19;
    uVar25 = uVar35 + iVar9 + uVar39;
    uVar29 = uVar29 ^ uVar25;
    uVar20 = uVar29 << 0x10 | uVar29 >> 0x10;
    uVar26 = uVar26 + uVar20;
    uVar39 = uVar39 ^ uVar26;
    uVar39 = uVar39 >> 0xc | uVar39 << 0x14;
    uVar35 = uVar25 + iVar12 + uVar39;
    uVar20 = uVar20 ^ uVar35;
    uVar29 = uVar20 >> 8 | uVar20 << 0x18;
    uVar26 = uVar26 + uVar29;
    uVar39 = uVar39 ^ uVar26;
    uVar20 = uVar39 >> 7 | uVar39 << 0x19;
    uVar34 = uVar34 + iVar1 + uVar32;
    uVar28 = uVar28 ^ uVar34;
    uVar25 = uVar28 << 0x10 | uVar28 >> 0x10;
    uVar27 = uVar27 + uVar25;
    uVar32 = uVar32 ^ uVar27;
    uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
    uVar34 = uVar34 + iVar5 + uVar32;
    uVar25 = uVar25 ^ uVar34;
    uVar28 = uVar25 >> 8 | uVar25 << 0x18;
    uVar33 = uVar33 + iVar14 + uVar24;
    uVar27 = uVar27 + uVar28;
    uVar23 = uVar23 ^ uVar33;
    uVar32 = uVar32 ^ uVar27;
    uVar25 = uVar23 << 0x10 | uVar23 >> 0x10;
    uVar32 = uVar32 >> 7 | uVar32 << 0x19;
    uVar30 = uVar30 + uVar25;
    uVar24 = uVar24 ^ uVar30;
    uVar23 = uVar24 >> 0xc | uVar24 << 0x14;
    uVar33 = uVar33 + iVar15 + uVar23;
    uVar25 = uVar25 ^ uVar33;
    uVar25 = uVar25 >> 8 | uVar25 << 0x18;
    uVar30 = uVar30 + uVar25;
    uVar23 = uVar23 ^ uVar30;
    uVar24 = uVar23 >> 7 | uVar23 << 0x19;
    uVar31 = uVar31 + iVar10 + uVar22;
    uVar36 = uVar36 ^ uVar31;
    uVar36 = uVar36 << 0x10 | uVar36 >> 0x10;
    uVar19 = uVar19 + uVar36;
    uVar22 = uVar22 ^ uVar19;
    uVar23 = uVar22 >> 0xc | uVar22 << 0x14;
    uVar31 = uVar31 + iVar13 + uVar23;
    uVar36 = uVar36 ^ uVar31;
    uVar36 = uVar36 >> 8 | uVar36 << 0x18;
    uVar19 = uVar19 + uVar36;
    uVar23 = uVar23 ^ uVar19;
    uVar23 = uVar23 >> 7 | uVar23 << 0x19;
    uVar22 = uVar35 + iVar6 + uVar32;
    uVar36 = uVar36 ^ uVar22;
    uVar36 = uVar36 << 0x10 | uVar36 >> 0x10;
    uVar30 = uVar30 + uVar36;
    uVar32 = uVar32 ^ uVar30;
    uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
    uVar35 = uVar22 + iVar8 + uVar32;
    uVar36 = uVar36 ^ uVar35;
    uVar36 = uVar36 >> 8 | uVar36 << 0x18;
    uVar30 = uVar30 + uVar36;
    uVar32 = uVar32 ^ uVar30;
    uVar32 = uVar32 >> 7 | uVar32 << 0x19;
    uVar34 = uVar34 + iVar3 + uVar24;
    uVar29 = uVar29 ^ uVar34;
    uVar29 = uVar29 << 0x10 | uVar29 >> 0x10;
    uVar19 = uVar19 + uVar29;
    uVar24 = uVar24 ^ uVar19;
    uVar22 = uVar24 >> 0xc | uVar24 << 0x14;
    uVar34 = uVar34 + iVar11 + uVar22;
    uVar29 = uVar29 ^ uVar34;
    uVar29 = uVar29 >> 8 | uVar29 << 0x18;
    uVar19 = uVar19 + uVar29;
    uVar22 = uVar22 ^ uVar19;
    uVar22 = uVar22 >> 7 | uVar22 << 0x19;
    uVar33 = uVar33 + iVar2 + uVar23;
    uVar28 = uVar28 ^ uVar33;
    uVar24 = uVar28 << 0x10 | uVar28 >> 0x10;
    uVar26 = uVar26 + uVar24;
    uVar23 = uVar23 ^ uVar26;
    uVar23 = uVar23 >> 0xc | uVar23 << 0x14;
    uVar33 = uVar33 + iVar4 + uVar23;
    uVar31 = uVar31 + iVar16 + uVar20;
    uVar24 = uVar24 ^ uVar33;
    uVar25 = uVar25 ^ uVar31;
    uVar28 = uVar24 >> 8 | uVar24 << 0x18;
    uVar24 = uVar25 << 0x10 | uVar25 >> 0x10;
    uVar26 = uVar26 + uVar28;
    uVar27 = uVar27 + uVar24;
    uVar23 = uVar23 ^ uVar26;
    uVar20 = uVar20 ^ uVar27;
    uVar23 = uVar23 >> 7 | uVar23 << 0x19;
    uVar25 = uVar20 >> 0xc | uVar20 << 0x14;
    uVar31 = uVar31 + iVar7 + uVar25;
    uVar24 = uVar24 ^ uVar31;
    uVar20 = uVar24 >> 8 | uVar24 << 0x18;
    uVar27 = uVar27 + uVar20;
    uVar25 = uVar25 ^ uVar27;
    uVar39 = uVar25 >> 7 | uVar25 << 0x19;
    uVar25 = uVar35 + iVar12 + uVar39;
    uVar29 = uVar29 ^ uVar25;
    uVar24 = uVar29 << 0x10 | uVar29 >> 0x10;
    uVar26 = uVar26 + uVar24;
    uVar39 = uVar39 ^ uVar26;
    uVar39 = uVar39 >> 0xc | uVar39 << 0x14;
    uVar35 = uVar25 + iVar4 + uVar39;
    uVar24 = uVar24 ^ uVar35;
    uVar29 = uVar24 >> 8 | uVar24 << 0x18;
    uVar25 = uVar34 + iVar3 + uVar32;
    uVar26 = uVar26 + uVar29;
    uVar28 = uVar28 ^ uVar25;
    uVar39 = uVar39 ^ uVar26;
    uVar24 = uVar28 << 0x10 | uVar28 >> 0x10;
    uVar39 = uVar39 >> 7 | uVar39 << 0x19;
    uVar27 = uVar27 + uVar24;
    uVar32 = uVar32 ^ uVar27;
    uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
    uVar34 = uVar25 + iVar9 + uVar32;
    uVar24 = uVar24 ^ uVar34;
    uVar25 = uVar24 >> 8 | uVar24 << 0x18;
    uVar27 = uVar27 + uVar25;
    uVar32 = uVar32 ^ uVar27;
    uVar32 = uVar32 >> 7 | uVar32 << 0x19;
    uVar28 = uVar33 + iVar6 + uVar22;
    uVar20 = uVar20 ^ uVar28;
    uVar24 = uVar20 << 0x10 | uVar20 >> 0x10;
    uVar30 = uVar30 + uVar24;
    uVar22 = uVar22 ^ uVar30;
    uVar20 = uVar22 >> 0xc | uVar22 << 0x14;
    uVar33 = uVar28 + iVar2 + uVar20;
    uVar24 = uVar24 ^ uVar33;
    uVar24 = uVar24 >> 8 | uVar24 << 0x18;
    uVar30 = uVar30 + uVar24;
    uVar20 = uVar20 ^ uVar30;
    uVar22 = uVar20 >> 7 | uVar20 << 0x19;
    uVar28 = uVar31 + iVar11 + uVar23;
    uVar36 = uVar36 ^ uVar28;
    uVar36 = uVar36 << 0x10 | uVar36 >> 0x10;
    uVar19 = uVar19 + uVar36;
    uVar23 = uVar23 ^ uVar19;
    uVar35 = uVar35 + iVar13 + uVar32;
    uVar20 = uVar23 >> 0xc | uVar23 << 0x14;
    uVar31 = uVar28 + iVar16 + uVar20;
    uVar36 = uVar36 ^ uVar31;
    uVar23 = uVar36 >> 8 | uVar36 << 0x18;
    uVar19 = uVar19 + uVar23;
    uVar23 = uVar23 ^ uVar35;
    uVar23 = uVar23 << 0x10 | uVar23 >> 0x10;
    uVar20 = uVar20 ^ uVar19;
    uVar30 = uVar30 + uVar23;
    uVar20 = uVar20 >> 7 | uVar20 << 0x19;
    uVar32 = uVar32 ^ uVar30;
    uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
    uVar35 = uVar35 + iVar5 + uVar32;
    uVar23 = uVar23 ^ uVar35;
    uVar36 = uVar23 >> 8 | uVar23 << 0x18;
    uVar30 = uVar30 + uVar36;
    uVar32 = uVar32 ^ uVar30;
    uVar32 = uVar32 >> 7 | uVar32 << 0x19;
    uVar34 = uVar34 + iVar10 + uVar22;
    uVar29 = uVar29 ^ uVar34;
    uVar28 = uVar29 << 0x10 | uVar29 >> 0x10;
    uVar19 = uVar19 + uVar28;
    uVar22 = uVar22 ^ uVar19;
    uVar23 = uVar22 >> 0xc | uVar22 << 0x14;
    uVar34 = uVar34 + iVar15 + uVar23;
    uVar28 = uVar28 ^ uVar34;
    uVar28 = uVar28 >> 8 | uVar28 << 0x18;
    uVar19 = uVar19 + uVar28;
    uVar23 = uVar23 ^ uVar19;
    uVar23 = uVar23 >> 7 | uVar23 << 0x19;
    uVar22 = uVar33 + iVar8 + uVar20;
    uVar25 = uVar25 ^ uVar22;
    uVar25 = uVar25 << 0x10 | uVar25 >> 0x10;
    uVar26 = uVar26 + uVar25;
    uVar29 = uVar31 + iVar1 + uVar39;
    uVar20 = uVar20 ^ uVar26;
    uVar20 = uVar20 >> 0xc | uVar20 << 0x14;
    uVar24 = uVar24 ^ uVar29;
    uVar33 = uVar22 + iVar7 + uVar20;
    uVar22 = uVar24 << 0x10 | uVar24 >> 0x10;
    uVar25 = uVar25 ^ uVar33;
    uVar27 = uVar27 + uVar22;
    uVar25 = uVar25 >> 8 | uVar25 << 0x18;
    uVar39 = uVar39 ^ uVar27;
    uVar26 = uVar26 + uVar25;
    uVar39 = uVar39 >> 0xc | uVar39 << 0x14;
    uVar20 = uVar20 ^ uVar26;
    uVar31 = uVar29 + iVar14 + uVar39;
    uVar20 = uVar20 >> 7 | uVar20 << 0x19;
    uVar22 = uVar22 ^ uVar31;
    uVar24 = uVar22 >> 8 | uVar22 << 0x18;
    uVar27 = uVar27 + uVar24;
    uVar39 = uVar39 ^ uVar27;
    uVar39 = uVar39 >> 7 | uVar39 << 0x19;
    uVar29 = uVar35 + iVar6 + uVar39;
    uVar28 = uVar28 ^ uVar29;
    uVar22 = uVar28 << 0x10 | uVar28 >> 0x10;
    uVar26 = uVar26 + uVar22;
    uVar39 = uVar39 ^ uVar26;
    uVar39 = uVar39 >> 0xc | uVar39 << 0x14;
    uVar28 = uVar34 + iVar8 + uVar32;
    uVar35 = uVar29 + iVar15 + uVar39;
    uVar25 = uVar25 ^ uVar28;
    uVar22 = uVar22 ^ uVar35;
    uVar25 = uVar25 << 0x10 | uVar25 >> 0x10;
    uVar29 = uVar22 >> 8 | uVar22 << 0x18;
    uVar27 = uVar27 + uVar25;
    uVar26 = uVar26 + uVar29;
    uVar32 = uVar32 ^ uVar27;
    uVar39 = uVar39 ^ uVar26;
    uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
    uVar22 = uVar39 >> 7 | uVar39 << 0x19;
    uVar34 = uVar28 + iVar11 + uVar32;
    uVar25 = uVar25 ^ uVar34;
    uVar28 = uVar25 >> 8 | uVar25 << 0x18;
    uVar27 = uVar27 + uVar28;
    uVar32 = uVar32 ^ uVar27;
    uVar32 = uVar32 >> 7 | uVar32 << 0x19;
    uVar25 = uVar33 + iVar4 + uVar23;
    uVar24 = uVar24 ^ uVar25;
    uVar24 = uVar24 << 0x10 | uVar24 >> 0x10;
    uVar30 = uVar30 + uVar24;
    uVar23 = uVar23 ^ uVar30;
    uVar23 = uVar23 >> 0xc | uVar23 << 0x14;
    uVar33 = uVar25 + iVar10 + uVar23;
    uVar24 = uVar24 ^ uVar33;
    uVar25 = uVar24 >> 8 | uVar24 << 0x18;
    uVar30 = uVar30 + uVar25;
    uVar24 = uVar31 + iVar7 + uVar20;
    uVar23 = uVar23 ^ uVar30;
    uVar36 = uVar36 ^ uVar24;
    uVar23 = uVar23 >> 7 | uVar23 << 0x19;
    uVar36 = uVar36 << 0x10 | uVar36 >> 0x10;
    uVar19 = uVar19 + uVar36;
    uVar20 = uVar20 ^ uVar19;
    uVar20 = uVar20 >> 0xc | uVar20 << 0x14;
    uVar31 = uVar24 + iVar1 + uVar20;
    uVar36 = uVar36 ^ uVar31;
    uVar24 = uVar35 + iVar2 + uVar32;
    uVar35 = uVar36 >> 8 | uVar36 << 0x18;
    uVar19 = uVar19 + uVar35;
    uVar35 = uVar35 ^ uVar24;
    uVar20 = uVar20 ^ uVar19;
    uVar36 = uVar35 << 0x10 | uVar35 >> 0x10;
    uVar20 = uVar20 >> 7 | uVar20 << 0x19;
    uVar30 = uVar30 + uVar36;
    uVar32 = uVar32 ^ uVar30;
    uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
    uVar34 = uVar34 + iVar9 + uVar23;
    uVar35 = uVar24 + iVar14 + uVar32;
    uVar29 = uVar29 ^ uVar34;
    uVar36 = uVar36 ^ uVar35;
    uVar24 = uVar29 << 0x10 | uVar29 >> 0x10;
    uVar36 = uVar36 >> 8 | uVar36 << 0x18;
    uVar19 = uVar19 + uVar24;
    uVar30 = uVar30 + uVar36;
    uVar23 = uVar23 ^ uVar19;
    uVar32 = uVar32 ^ uVar30;
    uVar23 = uVar23 >> 0xc | uVar23 << 0x14;
    uVar32 = uVar32 >> 7 | uVar32 << 0x19;
    uVar34 = uVar34 + iVar3 + uVar23;
    uVar24 = uVar24 ^ uVar34;
    uVar29 = uVar24 >> 8 | uVar24 << 0x18;
    uVar19 = uVar19 + uVar29;
    uVar23 = uVar23 ^ uVar19;
    uVar24 = uVar23 >> 7 | uVar23 << 0x19;
    uVar33 = uVar33 + iVar16 + uVar20;
    uVar28 = uVar28 ^ uVar33;
    uVar23 = uVar28 << 0x10 | uVar28 >> 0x10;
    uVar26 = uVar26 + uVar23;
    uVar20 = uVar20 ^ uVar26;
    uVar20 = uVar20 >> 0xc | uVar20 << 0x14;
    uVar33 = uVar33 + iVar13 + uVar20;
    uVar31 = uVar31 + iVar5 + uVar22;
    uVar23 = uVar23 ^ uVar33;
    uVar25 = uVar25 ^ uVar31;
    uVar28 = uVar23 >> 8 | uVar23 << 0x18;
    uVar23 = uVar25 << 0x10 | uVar25 >> 0x10;
    uVar26 = uVar26 + uVar28;
    uVar27 = uVar27 + uVar23;
    uVar20 = uVar20 ^ uVar26;
    uVar22 = uVar22 ^ uVar27;
    uVar20 = uVar20 >> 7 | uVar20 << 0x19;
    uVar25 = uVar22 >> 0xc | uVar22 << 0x14;
    uVar31 = uVar31 + iVar12 + uVar25;
    uVar23 = uVar23 ^ uVar31;
    uVar22 = uVar23 >> 8 | uVar23 << 0x18;
    uVar27 = uVar27 + uVar22;
    uVar25 = uVar25 ^ uVar27;
    uVar39 = uVar25 >> 7 | uVar25 << 0x19;
    uVar25 = uVar35 + iVar15 + uVar39;
    uVar29 = uVar29 ^ uVar25;
    uVar23 = uVar29 << 0x10 | uVar29 >> 0x10;
    uVar26 = uVar26 + uVar23;
    uVar39 = uVar39 ^ uVar26;
    uVar39 = uVar39 >> 0xc | uVar39 << 0x14;
    uVar35 = uVar25 + iVar3 + uVar39;
    uVar23 = uVar23 ^ uVar35;
    uVar29 = uVar23 >> 8 | uVar23 << 0x18;
    uVar26 = uVar26 + uVar29;
    uVar39 = uVar39 ^ uVar26;
    uVar23 = uVar39 >> 7 | uVar39 << 0x19;
    uVar34 = uVar34 + iVar5 + uVar32;
    uVar28 = uVar28 ^ uVar34;
    uVar25 = uVar28 << 0x10 | uVar28 >> 0x10;
    uVar27 = uVar27 + uVar25;
    uVar32 = uVar32 ^ uVar27;
    uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
    uVar34 = uVar34 + iVar16 + uVar32;
    uVar25 = uVar25 ^ uVar34;
    uVar28 = uVar25 >> 8 | uVar25 << 0x18;
    uVar27 = uVar27 + uVar28;
    uVar32 = uVar32 ^ uVar27;
    uVar32 = uVar32 >> 7 | uVar32 << 0x19;
    uVar33 = uVar33 + iVar13 + uVar24;
    uVar22 = uVar22 ^ uVar33;
    uVar25 = uVar22 << 0x10 | uVar22 >> 0x10;
    uVar30 = uVar30 + uVar25;
    uVar24 = uVar24 ^ uVar30;
    uVar31 = uVar31 + iVar2 + uVar20;
    uVar22 = uVar24 >> 0xc | uVar24 << 0x14;
    uVar33 = uVar33 + iVar14 + uVar22;
    uVar25 = uVar25 ^ uVar33;
    uVar25 = uVar25 >> 8 | uVar25 << 0x18;
    uVar30 = uVar30 + uVar25;
    uVar22 = uVar22 ^ uVar30;
    uVar22 = uVar22 >> 7 | uVar22 << 0x19;
    uVar36 = uVar36 ^ uVar31;
    uVar36 = uVar36 << 0x10 | uVar36 >> 0x10;
    uVar19 = uVar19 + uVar36;
    uVar20 = uVar20 ^ uVar19;
    uVar20 = uVar20 >> 0xc | uVar20 << 0x14;
    uVar31 = uVar31 + iVar11 + uVar20;
    uVar36 = uVar36 ^ uVar31;
    uVar24 = uVar35 + iVar4 + uVar32;
    uVar35 = uVar36 >> 8 | uVar36 << 0x18;
    uVar19 = uVar19 + uVar35;
    uVar35 = uVar35 ^ uVar24;
    uVar36 = uVar35 << 0x10 | uVar35 >> 0x10;
    uVar20 = uVar20 ^ uVar19;
    uVar30 = uVar30 + uVar36;
    uVar20 = uVar20 >> 7 | uVar20 << 0x19;
    uVar32 = uVar32 ^ uVar30;
    uVar34 = uVar34 + iVar8 + uVar22;
    uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
    uVar29 = uVar29 ^ uVar34;
    uVar35 = uVar24 + iVar9 + uVar32;
    uVar24 = uVar29 << 0x10 | uVar29 >> 0x10;
    uVar36 = uVar36 ^ uVar35;
    uVar19 = uVar19 + uVar24;
    uVar39 = uVar36 >> 8 | uVar36 << 0x18;
    uVar22 = uVar22 ^ uVar19;
    uVar30 = uVar30 + uVar39;
    uVar22 = uVar22 >> 0xc | uVar22 << 0x14;
    uVar32 = uVar32 ^ uVar30;
    uVar32 = uVar32 >> 7 | uVar32 << 0x19;
    uVar34 = uVar34 + iVar1 + uVar22;
    uVar24 = uVar24 ^ uVar34;
    uVar29 = uVar24 >> 8 | uVar24 << 0x18;
    uVar19 = uVar19 + uVar29;
    uVar22 = uVar22 ^ uVar19;
    uVar24 = uVar22 >> 7 | uVar22 << 0x19;
    uVar33 = uVar33 + iVar12 + uVar20;
    uVar28 = uVar28 ^ uVar33;
    uVar22 = uVar28 << 0x10 | uVar28 >> 0x10;
    uVar26 = uVar26 + uVar22;
    uVar20 = uVar20 ^ uVar26;
    uVar20 = uVar20 >> 0xc | uVar20 << 0x14;
    uVar33 = uVar33 + iVar6 + uVar20;
    uVar22 = uVar22 ^ uVar33;
    uVar28 = uVar22 >> 8 | uVar22 << 0x18;
    uVar26 = uVar26 + uVar28;
    uVar20 = uVar20 ^ uVar26;
    uVar22 = uVar20 >> 7 | uVar20 << 0x19;
    uVar31 = uVar31 + iVar7 + uVar23;
    uVar25 = uVar25 ^ uVar31;
    uVar20 = uVar25 << 0x10 | uVar25 >> 0x10;
    uVar27 = uVar27 + uVar20;
    uVar23 = uVar23 ^ uVar27;
    uVar25 = uVar23 >> 0xc | uVar23 << 0x14;
    uVar31 = uVar31 + iVar10 + uVar25;
    uVar20 = uVar20 ^ uVar31;
    uVar23 = uVar20 >> 8 | uVar20 << 0x18;
    uVar27 = uVar27 + uVar23;
    uVar25 = uVar25 ^ uVar27;
    uVar36 = uVar25 >> 7 | uVar25 << 0x19;
    uVar25 = uVar35 + iVar14 + uVar36;
    uVar29 = uVar29 ^ uVar25;
    uVar20 = uVar29 << 0x10 | uVar29 >> 0x10;
    uVar26 = uVar26 + uVar20;
    uVar36 = uVar36 ^ uVar26;
    uVar35 = uVar36 >> 0xc | uVar36 << 0x14;
    uVar36 = uVar25 + iVar10 + uVar35;
    uVar20 = uVar20 ^ uVar36;
    uVar29 = uVar20 >> 8 | uVar20 << 0x18;
    uVar26 = uVar26 + uVar29;
    uVar35 = uVar35 ^ uVar26;
    uVar20 = uVar35 >> 7 | uVar35 << 0x19;
    uVar34 = uVar34 + iVar9 + uVar32;
    uVar28 = uVar28 ^ uVar34;
    uVar25 = uVar28 << 0x10 | uVar28 >> 0x10;
    uVar27 = uVar27 + uVar25;
    uVar32 = uVar32 ^ uVar27;
    uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
    uVar35 = uVar34 + iVar13 + uVar32;
    uVar25 = uVar25 ^ uVar35;
    uVar28 = uVar25 >> 8 | uVar25 << 0x18;
    uVar27 = uVar27 + uVar28;
    uVar32 = uVar32 ^ uVar27;
    uVar32 = uVar32 >> 7 | uVar32 << 0x19;
    uVar33 = uVar33 + iVar15 + uVar24;
    uVar23 = uVar23 ^ uVar33;
    uVar25 = uVar23 << 0x10 | uVar23 >> 0x10;
    uVar30 = uVar30 + uVar25;
    uVar24 = uVar24 ^ uVar30;
    uVar23 = uVar24 >> 0xc | uVar24 << 0x14;
    uVar33 = uVar33 + iVar5 + uVar23;
    uVar25 = uVar25 ^ uVar33;
    uVar25 = uVar25 >> 8 | uVar25 << 0x18;
    uVar30 = uVar30 + uVar25;
    uVar23 = uVar23 ^ uVar30;
    uVar24 = uVar23 >> 7 | uVar23 << 0x19;
    uVar31 = uVar31 + iVar1 + uVar22;
    uVar39 = uVar39 ^ uVar31;
    uVar39 = uVar39 << 0x10 | uVar39 >> 0x10;
    uVar19 = uVar19 + uVar39;
    uVar22 = uVar22 ^ uVar19;
    uVar23 = uVar22 >> 0xc | uVar22 << 0x14;
    uVar34 = uVar31 + iVar12 + uVar23;
    uVar39 = uVar39 ^ uVar34;
    uVar22 = uVar36 + iVar3 + uVar32;
    uVar31 = uVar39 >> 8 | uVar39 << 0x18;
    uVar19 = uVar19 + uVar31;
    uVar31 = uVar31 ^ uVar22;
    uVar31 = uVar31 << 0x10 | uVar31 >> 0x10;
    uVar23 = uVar23 ^ uVar19;
    uVar30 = uVar30 + uVar31;
    uVar23 = uVar23 >> 7 | uVar23 << 0x19;
    uVar32 = uVar32 ^ uVar30;
    uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
    uVar36 = uVar22 + iVar4 + uVar32;
    uVar31 = uVar31 ^ uVar36;
    uVar39 = uVar31 >> 8 | uVar31 << 0x18;
    uVar30 = uVar30 + uVar39;
    uVar32 = uVar32 ^ uVar30;
    uVar32 = uVar32 >> 7 | uVar32 << 0x19;
    uVar31 = uVar35 + iVar16 + uVar24;
    uVar29 = uVar29 ^ uVar31;
    uVar29 = uVar29 << 0x10 | uVar29 >> 0x10;
    uVar19 = uVar19 + uVar29;
    uVar24 = uVar24 ^ uVar19;
    uVar22 = uVar24 >> 0xc | uVar24 << 0x14;
    uVar35 = uVar31 + iVar2 + uVar22;
    uVar29 = uVar29 ^ uVar35;
    uVar29 = uVar29 >> 8 | uVar29 << 0x18;
    uVar19 = uVar19 + uVar29;
    uVar33 = uVar33 + iVar7 + uVar23;
    uVar22 = uVar22 ^ uVar19;
    uVar28 = uVar28 ^ uVar33;
    uVar24 = uVar22 >> 7 | uVar22 << 0x19;
    uVar22 = uVar28 << 0x10 | uVar28 >> 0x10;
    uVar26 = uVar26 + uVar22;
    uVar23 = uVar23 ^ uVar26;
    uVar23 = uVar23 >> 0xc | uVar23 << 0x14;
    uVar31 = uVar33 + iVar8 + uVar23;
    uVar22 = uVar22 ^ uVar31;
    uVar28 = uVar22 >> 8 | uVar22 << 0x18;
    uVar33 = uVar34 + iVar6 + uVar20;
    uVar26 = uVar26 + uVar28;
    uVar25 = uVar25 ^ uVar33;
    uVar23 = uVar23 ^ uVar26;
    uVar25 = uVar25 << 0x10 | uVar25 >> 0x10;
    uVar22 = uVar23 >> 7 | uVar23 << 0x19;
    uVar27 = uVar27 + uVar25;
    uVar20 = uVar20 ^ uVar27;
    uVar23 = uVar20 >> 0xc | uVar20 << 0x14;
    uVar34 = uVar33 + iVar11 + uVar23;
    uVar25 = uVar25 ^ uVar34;
    uVar20 = uVar25 >> 8 | uVar25 << 0x18;
    uVar27 = uVar27 + uVar20;
    uVar23 = uVar23 ^ uVar27;
    uVar33 = uVar23 >> 7 | uVar23 << 0x19;
    uVar25 = uVar36 + iVar8 + uVar33;
    uVar29 = uVar29 ^ uVar25;
    uVar23 = uVar29 << 0x10 | uVar29 >> 0x10;
    uVar26 = uVar26 + uVar23;
    uVar33 = uVar33 ^ uVar26;
    uVar29 = uVar33 >> 0xc | uVar33 << 0x14;
    uVar36 = uVar25 + iVar16 + uVar29;
    uVar23 = uVar23 ^ uVar36;
    uVar23 = uVar23 >> 8 | uVar23 << 0x18;
    uVar26 = uVar26 + uVar23;
    uVar29 = uVar29 ^ uVar26;
    uVar29 = uVar29 >> 7 | uVar29 << 0x19;
    uVar33 = uVar35 + iVar13 + uVar32;
    uVar28 = uVar28 ^ uVar33;
    uVar25 = uVar28 << 0x10 | uVar28 >> 0x10;
    uVar27 = uVar27 + uVar25;
    uVar32 = uVar32 ^ uVar27;
    uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
    uVar35 = uVar33 + iVar12 + uVar32;
    uVar25 = uVar25 ^ uVar35;
    uVar33 = uVar25 >> 8 | uVar25 << 0x18;
    uVar27 = uVar27 + uVar33;
    uVar32 = uVar32 ^ uVar27;
    uVar32 = uVar32 >> 7 | uVar32 << 0x19;
    uVar28 = uVar31 + iVar10 + uVar24;
    uVar20 = uVar20 ^ uVar28;
    uVar25 = uVar20 << 0x10 | uVar20 >> 0x10;
    uVar30 = uVar30 + uVar25;
    uVar24 = uVar24 ^ uVar30;
    uVar20 = uVar24 >> 0xc | uVar24 << 0x14;
    uVar31 = uVar28 + iVar1 + uVar20;
    uVar25 = uVar25 ^ uVar31;
    uVar28 = uVar25 >> 8 | uVar25 << 0x18;
    uVar30 = uVar30 + uVar28;
    uVar20 = uVar20 ^ uVar30;
    uVar24 = uVar20 >> 7 | uVar20 << 0x19;
    uVar34 = uVar34 + iVar4 + uVar22;
    uVar39 = uVar39 ^ uVar34;
    uVar25 = uVar39 << 0x10 | uVar39 >> 0x10;
    uVar19 = uVar19 + uVar25;
    uVar22 = uVar22 ^ uVar19;
    uVar20 = uVar22 >> 0xc | uVar22 << 0x14;
    uVar22 = uVar34 + iVar7 + uVar20;
    uVar25 = uVar25 ^ uVar22;
    uVar37 = uVar25 >> 8 | uVar25 << 0x18;
    uVar19 = uVar19 + uVar37;
    uVar20 = uVar20 ^ uVar19;
    uVar39 = uVar20 >> 7 | uVar20 << 0x19;
    uVar25 = uVar35 + iVar14 + uVar24;
    uVar34 = uVar36 + iVar15 + uVar32;
    uVar37 = uVar37 ^ uVar34;
    uVar20 = uVar37 << 0x10 | uVar37 >> 0x10;
    uVar30 = uVar30 + uVar20;
    uVar32 = uVar32 ^ uVar30;
    uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
    uVar35 = uVar34 + iVar6 + uVar32;
    uVar20 = uVar20 ^ uVar35;
    uVar38 = uVar20 >> 8 | uVar20 << 0x18;
    uVar30 = uVar30 + uVar38;
    uVar32 = uVar32 ^ uVar30;
    uVar20 = uVar32 >> 7 | uVar32 << 0x19;
    uVar23 = uVar23 ^ uVar25;
    uVar32 = uVar23 << 0x10 | uVar23 >> 0x10;
    uVar19 = uVar19 + uVar32;
    uVar24 = uVar24 ^ uVar19;
    uVar24 = uVar24 >> 0xc | uVar24 << 0x14;
    uVar23 = uVar25 + iVar9 + uVar24;
    uVar32 = uVar32 ^ uVar23;
    uVar34 = uVar32 >> 8 | uVar32 << 0x18;
    uVar19 = uVar19 + uVar34;
    uVar24 = uVar24 ^ uVar19;
    uVar37 = uVar24 >> 7 | uVar24 << 0x19;
    uVar32 = iVar5 + uVar31 + uVar39;
    uVar33 = uVar33 ^ uVar32;
    uVar25 = uVar33 << 0x10 | uVar33 >> 0x10;
    uVar33 = uVar22 + iVar11 + uVar29;
    uVar26 = uVar26 + uVar25;
    uVar28 = uVar28 ^ uVar33;
    uVar39 = uVar39 ^ uVar26;
    uVar24 = uVar28 << 0x10 | uVar28 >> 0x10;
    uVar31 = uVar39 >> 0xc | uVar39 << 0x14;
    uVar27 = uVar27 + uVar24;
    uVar32 = uVar32 + iVar2 + uVar31;
    uVar29 = uVar29 ^ uVar27;
    uVar25 = uVar25 ^ uVar32;
    uVar22 = uVar29 >> 0xc | uVar29 << 0x14;
    uVar28 = uVar25 >> 8 | uVar25 << 0x18;
    uVar33 = uVar33 + iVar3 + uVar22;
    uVar26 = uVar26 + uVar28;
    uVar24 = uVar24 ^ uVar33;
    uVar31 = uVar31 ^ uVar26;
    uVar24 = uVar24 >> 8 | uVar24 << 0x18;
    uVar36 = uVar31 >> 7 | uVar31 << 0x19;
    uVar27 = uVar27 + uVar24;
    uVar22 = uVar22 ^ uVar27;
    uVar22 = uVar22 >> 7 | uVar22 << 0x19;
    uVar29 = uVar35 + iVar11 + uVar22;
    uVar34 = uVar34 ^ uVar29;
    uVar25 = uVar34 << 0x10 | uVar34 >> 0x10;
    uVar26 = uVar26 + uVar25;
    uVar22 = uVar22 ^ uVar26;
    uVar22 = uVar22 >> 0xc | uVar22 << 0x14;
    uVar31 = uVar29 + iVar6 + uVar22;
    uVar32 = uVar32 + iVar9 + uVar37;
    uVar25 = uVar25 ^ uVar31;
    uVar24 = uVar24 ^ uVar32;
    uVar29 = uVar25 >> 8 | uVar25 << 0x18;
    uVar25 = uVar24 << 0x10 | uVar24 >> 0x10;
    uVar26 = uVar26 + uVar29;
    uVar30 = uVar30 + uVar25;
    uVar22 = uVar22 ^ uVar26;
    uVar37 = uVar37 ^ uVar30;
    uVar22 = uVar22 >> 7 | uVar22 << 0x19;
    uVar34 = uVar37 >> 0xc | uVar37 << 0x14;
    uVar23 = uVar23 + iVar7 + uVar20;
    uVar28 = uVar28 ^ uVar23;
    uVar28 = uVar28 << 0x10 | uVar28 >> 0x10;
    uVar27 = uVar27 + uVar28;
    uVar20 = uVar20 ^ uVar27;
    uVar24 = uVar32 + iVar8 + uVar34;
    uVar20 = uVar20 >> 0xc | uVar20 << 0x14;
    uVar32 = iVar2 + uVar23 + uVar20;
    uVar28 = uVar28 ^ uVar32;
    uVar23 = uVar28 >> 8 | uVar28 << 0x18;
    uVar27 = uVar27 + uVar23;
    uVar20 = uVar20 ^ uVar27;
    uVar37 = uVar20 >> 7 | uVar20 << 0x19;
    uVar25 = uVar25 ^ uVar24;
    uVar20 = uVar33 + iVar5 + uVar36;
    uVar25 = uVar25 >> 8 | uVar25 << 0x18;
    uVar38 = uVar38 ^ uVar20;
    uVar30 = uVar30 + uVar25;
    uVar39 = uVar38 << 0x10 | uVar38 >> 0x10;
    uVar34 = uVar34 ^ uVar30;
    uVar19 = uVar19 + uVar39;
    uVar35 = uVar34 >> 7 | uVar34 << 0x19;
    uVar36 = uVar36 ^ uVar19;
    uVar34 = uVar36 >> 0xc | uVar36 << 0x14;
    uVar28 = uVar31 + iVar16 + uVar37;
    uVar33 = uVar20 + iVar3 + uVar34;
    uVar39 = uVar39 ^ uVar33;
    uVar20 = uVar39 >> 8 | uVar39 << 0x18;
    uVar19 = uVar19 + uVar20;
    uVar20 = uVar20 ^ uVar28;
    uVar20 = uVar20 << 0x10 | uVar20 >> 0x10;
    uVar34 = uVar34 ^ uVar19;
    uVar30 = uVar30 + uVar20;
    uVar31 = uVar34 >> 7 | uVar34 << 0x19;
    uVar37 = uVar37 ^ uVar30;
    uVar39 = uVar37 >> 0xc | uVar37 << 0x14;
    uVar34 = uVar28 + iVar10 + uVar39;
    uVar20 = uVar20 ^ uVar34;
    uVar36 = uVar20 >> 8 | uVar20 << 0x18;
    uVar30 = uVar30 + uVar36;
    uVar32 = uVar32 + iVar12 + uVar35;
    uVar29 = uVar29 ^ uVar32;
    uVar29 = uVar29 << 0x10 | uVar29 >> 0x10;
    uVar19 = uVar19 + uVar29;
    uVar24 = uVar24 + iVar1 + uVar31;
    uVar35 = uVar35 ^ uVar19;
    uVar23 = uVar23 ^ uVar24;
    uVar20 = uVar35 >> 0xc | uVar35 << 0x14;
    uVar28 = uVar23 << 0x10 | uVar23 >> 0x10;
    uVar23 = uVar32 + iVar13 + uVar20;
    uVar26 = uVar26 + uVar28;
    uVar29 = uVar29 ^ uVar23;
    uVar31 = uVar31 ^ uVar26;
    uVar29 = uVar29 >> 8 | uVar29 << 0x18;
    uVar19 = uVar19 + uVar29;
    uVar35 = uVar31 >> 0xc | uVar31 << 0x14;
    uVar24 = uVar24 + iVar15 + uVar35;
    uVar28 = uVar28 ^ uVar24;
    uVar28 = uVar28 >> 8 | uVar28 << 0x18;
    uVar33 = uVar33 + iVar14 + uVar22;
    uVar26 = uVar26 + uVar28;
    uVar25 = uVar25 ^ uVar33;
    uVar32 = uVar25 << 0x10 | uVar25 >> 0x10;
    uVar27 = uVar27 + uVar32;
    uVar22 = uVar22 ^ uVar27;
    uVar31 = uVar22 >> 0xc | uVar22 << 0x14;
    uVar25 = uVar33 + iVar4 + uVar31;
    uVar32 = uVar32 ^ uVar25;
    uVar20 = uVar19 ^ uVar20;
    uVar22 = uVar32 >> 8 | uVar32 << 0x18;
    uVar32 = uVar34 ^ uVar26 ^ local_b8;
    uVar27 = uVar27 + uVar22;
    *param_1 = uVar32;
    uVar31 = uVar27 ^ uVar31;
    uStack_84 = uVar23 ^ uVar27 ^ local_bc;
    local_a4 = (uVar20 >> 7 | uVar20 << 0x19) ^ uVar22 ^ local_a4;
    uVar21 = (ulong)local_a4;
    param_1[1] = uStack_84;
    param_1[6] = local_a4;
    local_e8 = (int *)((long)local_e8 + uVar18);
    uStack_80 = uVar24 ^ uVar30 ^ local_b4;
    param_1[2] = uStack_80;
    local_b0 = uVar25 ^ uVar19 ^ local_b0;
    param_1[3] = local_b0;
    local_148 = (uVar31 >> 7 | uVar31 << 0x19) ^ uVar29 ^ local_ac;
    param_1[4] = local_148;
    uVar30 = uVar30 ^ uVar39;
    uStack_74 = (uVar30 >> 7 | uVar30 << 0x19) ^ uVar28 ^ local_a8;
    param_1[5] = uStack_74;
    uVar26 = uVar26 ^ uVar35;
    local_a0 = (uVar26 >> 7 | uVar26 << 0x19) ^ uVar36 ^ local_a0;
    local_90 = local_90 - uVar18;
    param_1[7] = local_a0;
    local_bc = uStack_84;
    local_b8 = uVar32;
    local_b4 = uStack_80;
    local_ac = local_148;
    local_a8 = uStack_74;
    uStack_6c = local_a0;
    uStack_7c = local_b0;
  } while (local_90 != 0);
  if (lVar17 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void ossl_blake2s_param_init(undefined8 *param_1)

{
  *param_1 = 0x1010020;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



void ossl_blake2s_param_set_digest_length(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}



void ossl_blake2s_param_set_key_length(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 1) = param_2;
  return;
}



void ossl_blake2s_param_set_personal(long param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
  pvVar1 = memcpy((void *)(param_1 + 0x18),param_2,param_3);
  memset((void *)((long)pvVar1 + param_3),0,8 - param_3);
  return;
}



void ossl_blake2s_param_set_salt(long param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
  pvVar1 = memcpy((void *)(param_1 + 0x10),param_2,param_3);
  memset((void *)((long)pvVar1 + param_3),0,8 - param_3);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ossl_blake2s_init(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  param_1[4] = 0;
  uVar2 = _UNK_00101b58;
  uVar1 = __LC0;
  param_1[0xf] = 0;
  uVar4 = _UNK_00101b68;
  uVar3 = __LC1;
  puVar6 = (undefined8 *)((ulong)(param_1 + 5) & 0xfffffffffffffff8);
  for (uVar5 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 5) & 0xfffffffffffffff8)) + 0x80U >> 3)
      ; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[0xf] = (ulong)(byte)*param_2;
  if (0xe < ~(ulong)param_2 + (long)param_1) {
    uVar5 = param_2[1];
    *param_1 = uVar1 ^ *param_2;
    param_1[1] = uVar2 ^ uVar5;
    uVar1 = param_2[3];
    param_1[2] = param_2[2] ^ uVar3;
    param_1[3] = uVar1 ^ uVar4;
    return 1;
  }
  *(uint *)param_1 = (uint)*param_2 ^ 0x6a09e667;
  *(uint *)((long)param_1 + 4) = *(uint *)((long)param_2 + 4) ^ 0xbb67ae85;
  *(uint *)(param_1 + 1) = (uint)param_2[1] ^ 0x3c6ef372;
  *(uint *)((long)param_1 + 0xc) = *(uint *)((long)param_2 + 0xc) ^ 0xa54ff53a;
  *(uint *)(param_1 + 2) = (uint)param_2[2] ^ 0x510e527f;
  *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_2 + 0x14) ^ 0x9b05688c;
  *(uint *)(param_1 + 3) = (uint)param_2[3] ^ 0x1f83d9ab;
  *(uint *)((long)param_1 + 0x1c) = *(uint *)((long)param_2 + 0x1c) ^ 0x5be0cd19;
  return 1;
}



undefined8 ossl_blake2s_update(long param_1,void *param_2,ulong param_3)

{
  long lVar1;
  void *__src;
  long lVar2;
  ulong uVar3;
  
  lVar1 = param_1 + 0x30;
  lVar2 = *(long *)(param_1 + 0x70);
  uVar3 = 0x40 - lVar2;
  __src = param_2;
  if (uVar3 < param_3) {
    if (lVar2 == 0) {
      lVar2 = 0;
      uVar3 = param_3;
      if (param_3 < 0x41) goto LAB_0010173a;
    }
    else {
      param_3 = lVar2 + -0x40 + param_3;
      __src = (void *)((long)param_2 + uVar3);
      memcpy((void *)(lVar1 + lVar2),param_2,uVar3);
      blake2s_compress(param_1,lVar1,0x40);
      lVar2 = 0;
      *(undefined8 *)(param_1 + 0x70) = 0;
      uVar3 = param_3;
      param_2 = __src;
      if (param_3 < 0x41) goto LAB_0010173a;
    }
    param_3 = (ulong)((uint)uVar3 & 0x3f);
    if ((uVar3 & 0x3f) == 0) {
      param_3 = 0x40;
    }
    __src = (void *)((long)param_2 + (uVar3 - param_3));
    blake2s_compress(param_1,param_2,uVar3 - param_3);
    lVar2 = *(long *)(param_1 + 0x70);
  }
LAB_0010173a:
  memcpy((void *)(lVar1 + lVar2),__src,param_3);
  *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + param_3;
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ossl_blake2s_init_key(ulong *param_1,ulong *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  uVar4 = _UNK_00101b68;
  uVar3 = __LC1;
  uVar2 = _UNK_00101b58;
  uVar1 = __LC0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  param_1[4] = 0;
  param_1[0xf] = 0;
  puVar6 = (undefined8 *)((ulong)(param_1 + 5) & 0xfffffffffffffff8);
  for (uVar5 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 5) & 0xfffffffffffffff8)) + 0x80U >> 3)
      ; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[0xf] = (ulong)(byte)*param_2;
  if (~(ulong)param_2 + (long)param_1 < 0xf) {
    *(uint *)param_1 = (uint)*param_2 ^ 0x6a09e667;
    *(uint *)((long)param_1 + 4) = *(uint *)((long)param_2 + 4) ^ 0xbb67ae85;
    *(uint *)(param_1 + 1) = (uint)param_2[1] ^ 0x3c6ef372;
    *(uint *)((long)param_1 + 0xc) = *(uint *)((long)param_2 + 0xc) ^ 0xa54ff53a;
    *(uint *)(param_1 + 2) = (uint)param_2[2] ^ 0x510e527f;
    *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_2 + 0x14) ^ 0x9b05688c;
    *(uint *)(param_1 + 3) = (uint)param_2[3] ^ 0x1f83d9ab;
    *(uint *)((long)param_1 + 0x1c) = *(uint *)((long)param_2 + 0x1c) ^ 0x5be0cd19;
  }
  else {
    uVar5 = param_2[1];
    *param_1 = uVar1 ^ *param_2;
    param_1[1] = uVar2 ^ uVar5;
    uVar1 = param_2[3];
    param_1[2] = param_2[2] ^ uVar3;
    param_1[3] = uVar1 ^ uVar4;
  }
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  __memcpy_chk(local_68,param_3,*(byte *)((long)param_2 + 1),0x40);
  ossl_blake2s_update(param_1,local_68,0x40);
  OPENSSL_cleanse(local_68,0x40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_blake2s_final(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *__src;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  puVar9 = (undefined8 *)local_58;
  puVar8 = (undefined8 *)local_58;
  __src = (undefined8 *)local_58;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  uVar1 = param_2[0xf] + 3;
  uVar7 = uVar1 >> 2;
  uVar6 = (uint)uVar7;
  if ((param_2[0xf] & 3) == 0) {
    *(undefined4 *)(param_2 + 5) = 0xffffffff;
    memset((void *)(param_2[0xe] + (long)(param_2 + 6)),0,0x40 - param_2[0xe]);
    blake2s_compress(param_2,param_2 + 6,param_2[0xe]);
    if ((int)uVar6 < 1) goto LAB_00101a27;
    puVar9 = param_1;
    puVar8 = param_1;
    if (uVar6 - 1 < 3) goto LAB_00101aa7;
LAB_0010199c:
    if (~(ulong)param_2 + (long)puVar8 < 0xf) {
      *(undefined4 *)puVar8 = *(undefined4 *)param_2;
      *(undefined4 *)((long)puVar8 + 4) = *(undefined4 *)((long)param_2 + 4);
      puVar9 = puVar8;
      goto LAB_001019bd;
    }
    uVar4 = param_2[1];
    *puVar8 = *param_2;
    puVar8[1] = uVar4;
    if (((uint)(uVar1 >> 4) & 0x3fffffff) != 1) {
      uVar4 = param_2[3];
      puVar8[2] = param_2[2];
      puVar8[3] = uVar4;
    }
    uVar5 = uVar6 & 0xfffffffc;
    __src = puVar8;
    if ((uVar7 & 3) != 0) {
      lVar3 = (ulong)uVar5 * 4;
      puVar2 = (undefined4 *)((long)param_2 + lVar3);
      *(undefined4 *)((long)puVar8 + (ulong)uVar5 * 4) = *puVar2;
      if (((int)(uVar5 + 1) < (int)uVar6) &&
         (*(undefined4 *)((long)puVar8 + lVar3 + 4) = puVar2[1], (int)(uVar5 + 2) < (int)uVar6)) {
        *(undefined4 *)(puVar8 + 3) = puVar2[2];
      }
    }
LAB_00101a06:
    if (param_1 == __src) goto LAB_00101a27;
  }
  else {
    *(undefined4 *)(param_2 + 5) = 0xffffffff;
    memset((void *)(param_2[0xe] + (long)(param_2 + 6)),0,0x40 - param_2[0xe]);
    blake2s_compress(param_2,param_2 + 6,param_2[0xe]);
    if (0 < (int)uVar6) {
      if (2 < uVar6 - 1) goto LAB_0010199c;
LAB_00101aa7:
      *(undefined4 *)puVar9 = *(undefined4 *)param_2;
      __src = puVar9;
      if ((uVar6 != 1) &&
         (*(undefined4 *)((long)puVar9 + 4) = *(undefined4 *)((long)param_2 + 4), uVar6 == 3)) {
LAB_001019bd:
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(param_2 + 1);
        __src = puVar9;
        if (((3 < (int)uVar6) &&
            (((*(undefined4 *)((long)puVar9 + 0xc) = *(undefined4 *)((long)param_2 + 0xc),
              uVar6 != 4 && (*(undefined4 *)(puVar9 + 2) = *(undefined4 *)(param_2 + 2), uVar6 != 5)
              ) && (*(undefined4 *)((long)puVar9 + 0x14) = *(undefined4 *)((long)param_2 + 0x14),
                   uVar6 != 6)))) &&
           (*(undefined4 *)(puVar9 + 3) = *(undefined4 *)(param_2 + 3), uVar6 != 7)) {
          *(undefined4 *)((long)puVar9 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
        }
      }
      goto LAB_00101a06;
    }
  }
  memcpy(param_1,__src,param_2[0xf]);
  OPENSSL_cleanse(__src,0x20);
LAB_00101a27:
  OPENSSL_cleanse(param_2,0x80);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


