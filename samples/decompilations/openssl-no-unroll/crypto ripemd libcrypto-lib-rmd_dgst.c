
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int RIPEMD160_Init(RIPEMD160_CTX *c)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  c->E = 0xc3d2e1f0;
  c->data[10] = 0;
  c->data[0xb] = 0;
  c->data[0xc] = 0;
  c->data[0xd] = 0;
  c->Nl = 0;
  c->Nh = 0;
  c->data[0] = 0;
  c->data[1] = 0;
  c->data[2] = 0;
  c->data[3] = 0;
  c->data[4] = 0;
  c->data[5] = 0;
  c->data[6] = 0;
  c->data[7] = 0;
  c->data[8] = 0;
  c->data[9] = 0;
  *(undefined1 (*) [16])(c->data + 0xd) = (undefined1  [16])0x0;
  uVar2 = _UNK_00101768;
  uVar1 = _UNK_00101764;
  c->A = __LC0;
  uVar3 = _UNK_00101768;
  c->B = uVar1;
  _UNK_00101768 = (undefined4)uVar2;
  _UNK_0010176c = SUB84(uVar2,4);
  uVar1 = _UNK_0010176c;
  c->C = _UNK_00101768;
  _UNK_00101768 = uVar3;
  c->D = uVar1;
  return 1;
}



void ripemd160_block_data_order(int *param_1,int *param_2,long param_3)

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
  uint uVar16;
  int iVar17;
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
  uint local_74;
  uint local_70;
  int local_6c;
  long local_68;
  uint local_60;
  int local_5c;
  
  local_68 = param_3 + -1;
  if (param_3 != 0) {
    local_70 = param_1[1];
    local_60 = param_1[2];
    local_74 = param_1[3];
    local_5c = *param_1;
    local_6c = param_1[4];
    do {
      iVar1 = *param_2;
      iVar2 = param_2[1];
      uVar24 = local_60 << 10 | local_60 >> 0x16;
      uVar20 = (local_70 ^ local_60 ^ local_74) + iVar1 + local_5c;
      iVar3 = param_2[2];
      uVar28 = local_70 << 10 | local_70 >> 0x16;
      iVar4 = param_2[3];
      uVar21 = (uVar20 * 0x800 | uVar20 >> 0x15) + local_6c;
      iVar5 = param_2[6];
      uVar22 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar20 = (local_70 ^ uVar24 ^ uVar21) + iVar2 + local_6c;
      iVar6 = param_2[4];
      uVar20 = (uVar20 * 0x4000 | uVar20 >> 0x12) + local_74;
      iVar7 = param_2[7];
      uVar18 = uVar20 * 0x400 | uVar20 >> 0x16;
      uVar21 = (uVar21 ^ uVar28 ^ uVar20) + iVar3 + local_74;
      iVar8 = param_2[5];
      uVar21 = (uVar21 * 0x8000 | uVar21 >> 0x11) + uVar24;
      uVar19 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar20 = (uVar20 ^ uVar22 ^ uVar21) + uVar24 + iVar4;
      uVar20 = (uVar20 * 0x1000 | uVar20 >> 0x14) + uVar28;
      uVar21 = (uVar21 ^ uVar18 ^ uVar20) + uVar28 + iVar6;
      uVar25 = (uVar21 * 0x20 | uVar21 >> 0x1b) + uVar22;
      uVar16 = uVar20 * 0x400 | uVar20 >> 0x16;
      uVar20 = (uVar20 ^ uVar19 ^ uVar25) + uVar22 + iVar8;
      uVar26 = uVar25 * 0x400 | uVar25 >> 0x16;
      uVar20 = (uVar20 * 0x100 | uVar20 >> 0x18) + uVar18;
      iVar9 = param_2[8];
      uVar21 = uVar20 * 0x400 | uVar20 >> 0x16;
      uVar18 = (uVar25 ^ uVar16 ^ uVar20) + uVar18 + iVar5;
      iVar10 = param_2[9];
      uVar22 = (uVar18 * 0x80 | uVar18 >> 0x19) + uVar19;
      uVar20 = (uVar20 ^ uVar26 ^ uVar22) + uVar19 + iVar7;
      uVar25 = uVar22 * 0x400 | uVar22 >> 0x16;
      uVar18 = (uVar20 * 0x200 | uVar20 >> 0x17) + uVar16;
      iVar11 = param_2[10];
      uVar20 = (uVar22 ^ uVar21 ^ uVar18) + uVar16 + iVar9;
      uVar22 = (uVar20 * 0x800 | uVar20 >> 0x15) + uVar26;
      iVar12 = param_2[0xb];
      uVar20 = (uVar18 ^ uVar25 ^ uVar22) + uVar26 + iVar10;
      uVar19 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar16 = (uVar20 * 0x2000 | uVar20 >> 0x13) + uVar21;
      uVar26 = uVar22 * 0x400 | uVar22 >> 0x16;
      iVar13 = param_2[0xc];
      uVar20 = uVar21 + iVar11 + (uVar22 ^ uVar19 ^ uVar16);
      uVar20 = (uVar20 * 0x4000 | uVar20 >> 0x12) + uVar25;
      uVar18 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar21 = (uVar16 ^ uVar26 ^ uVar20) + uVar25 + iVar12;
      iVar14 = param_2[0xd];
      uVar22 = (uVar21 * 0x8000 | uVar21 >> 0x11) + uVar19;
      uVar21 = uVar20 * 0x400 | uVar20 >> 0x16;
      uVar20 = (uVar20 ^ uVar18 ^ uVar22) + uVar19 + iVar13;
      iVar15 = param_2[0xe];
      uVar16 = (uVar20 * 0x40 | uVar20 >> 0x1a) + uVar26;
      uVar19 = uVar22 * 0x400 | uVar22 >> 0x16;
      uVar20 = (uVar22 ^ uVar21 ^ uVar16) + uVar26 + iVar14;
      uVar20 = (uVar20 * 0x80 | uVar20 >> 0x19) + uVar18;
      uVar22 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar16 = uVar18 + iVar15 + (uVar16 ^ uVar19 ^ uVar20);
      uVar16 = (uVar16 * 0x200 | uVar16 >> 0x17) + uVar21;
      uVar21 = (uVar20 ^ uVar22 ^ uVar16) + uVar21 + param_2[0xf];
      uVar20 = uVar20 * 0x400 | uVar20 >> 0x16;
      uVar18 = (uVar21 * 0x100 | uVar21 >> 0x18) + uVar19;
      uVar21 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar16 = ((uVar16 ^ uVar20) & uVar18 ^ uVar20) + iVar7 + 0x5a827999 + uVar19;
      uVar25 = (uVar16 * 0x80 | uVar16 >> 0x19) + uVar22;
      uVar19 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar16 = ((uVar18 ^ uVar21) & uVar25 ^ uVar21) + iVar6 + 0x5a827999 + uVar22;
      uVar16 = (uVar16 * 0x40 | uVar16 >> 0x1a) + uVar20;
      uVar20 = ((uVar25 ^ uVar19) & uVar16 ^ uVar19) + iVar14 + 0x5a827999 + uVar20;
      uVar20 = (uVar20 * 0x100 | uVar20 >> 0x18) + uVar21;
      uVar25 = uVar25 * 0x400 | uVar25 >> 0x16;
      uVar22 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar21 = ((uVar16 ^ uVar25) & uVar20 ^ uVar25) + iVar2 + 0x5a827999 + uVar21;
      uVar16 = (uVar21 * 0x2000 | uVar21 >> 0x13) + uVar19;
      uVar21 = uVar20 * 0x400 | uVar20 >> 0x16;
      uVar20 = ((uVar20 ^ uVar22) & uVar16 ^ uVar22) + iVar11 + 0x5a827999 + uVar19;
      uVar20 = (uVar20 * 0x800 | uVar20 >> 0x15) + uVar25;
      uVar18 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar16 = ((uVar16 ^ uVar21) & uVar20 ^ uVar21) + iVar5 + 0x5a827999 + uVar25;
      uVar25 = (uVar16 * 0x200 | uVar16 >> 0x17) + uVar22;
      uVar19 = uVar20 * 0x400 | uVar20 >> 0x16;
      uVar20 = ((uVar20 ^ uVar18) & uVar25 ^ uVar18) + param_2[0xf] + 0x5a827999 + uVar22;
      uVar16 = (uVar20 * 0x80 | uVar20 >> 0x19) + uVar21;
      uVar26 = uVar25 * 0x400 | uVar25 >> 0x16;
      uVar20 = ((uVar25 ^ uVar19) & uVar16 ^ uVar19) + iVar4 + 0x5a827999 + uVar21;
      uVar20 = (uVar20 * 0x8000 | uVar20 >> 0x11) + uVar18;
      uVar22 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar21 = ((uVar16 ^ uVar26) & uVar20 ^ uVar26) + iVar13 + 0x5a827999 + uVar18;
      uVar16 = (uVar21 * 0x80 | uVar21 >> 0x19) + uVar19;
      uVar21 = uVar20 * 0x400 | uVar20 >> 0x16;
      uVar20 = ((uVar20 ^ uVar22) & uVar16 ^ uVar22) + iVar1 + 0x5a827999 + uVar19;
      uVar20 = (uVar20 * 0x1000 | uVar20 >> 0x14) + uVar26;
      uVar18 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar16 = ((uVar16 ^ uVar21) & uVar20 ^ uVar21) + iVar10 + 0x5a827999 + uVar26;
      uVar25 = (uVar16 * 0x8000 | uVar16 >> 0x11) + uVar22;
      uVar16 = ((uVar20 ^ uVar18) & uVar25 ^ uVar18) + iVar8 + 0x5a827999 + uVar22;
      uVar16 = (uVar16 * 0x200 | uVar16 >> 0x17) + uVar21;
      uVar19 = uVar20 * 0x400 | uVar20 >> 0x16;
      uVar26 = uVar25 * 0x400 | uVar25 >> 0x16;
      uVar20 = ((uVar25 ^ uVar19) & uVar16 ^ uVar19) + iVar3 + 0x5a827999 + uVar21;
      uVar20 = (uVar20 * 0x800 | uVar20 >> 0x15) + uVar18;
      uVar22 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar21 = ((uVar16 ^ uVar26) & uVar20 ^ uVar26) + iVar15 + 0x5a827999 + uVar18;
      uVar16 = (uVar21 * 0x80 | uVar21 >> 0x19) + uVar19;
      uVar21 = uVar20 * 0x400 | uVar20 >> 0x16;
      uVar20 = ((uVar20 ^ uVar22) & uVar16 ^ uVar22) + iVar12 + 0x5a827999 + uVar19;
      uVar20 = (uVar20 * 0x2000 | uVar20 >> 0x13) + uVar26;
      uVar18 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar16 = ((uVar16 ^ uVar21) & uVar20 ^ uVar21) + iVar9 + 0x5a827999 + uVar26;
      uVar25 = (uVar16 * 0x1000 | uVar16 >> 0x14) + uVar22;
      uVar16 = ((~uVar20 | uVar25) ^ uVar18) + iVar4 + 0x6ed9eba1 + uVar22;
      uVar19 = uVar20 * 0x400 | uVar20 >> 0x16;
      uVar16 = (uVar16 * 0x800 | uVar16 >> 0x15) + uVar21;
      uVar26 = uVar25 * 0x400 | uVar25 >> 0x16;
      uVar20 = ((~uVar25 | uVar16) ^ uVar19) + iVar11 + 0x6ed9eba1 + uVar21;
      uVar20 = (uVar20 * 0x2000 | uVar20 >> 0x13) + uVar18;
      uVar22 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar21 = ((~uVar16 | uVar20) ^ uVar26) + iVar15 + 0x6ed9eba1 + uVar18;
      uVar16 = (uVar21 * 0x40 | uVar21 >> 0x1a) + uVar19;
      uVar21 = uVar20 * 0x400 | uVar20 >> 0x16;
      uVar20 = ((~uVar20 | uVar16) ^ uVar22) + iVar6 + 0x6ed9eba1 + uVar19;
      uVar20 = (uVar20 * 0x80 | uVar20 >> 0x19) + uVar26;
      uVar18 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar16 = ((~uVar16 | uVar20) ^ uVar21) + iVar10 + 0x6ed9eba1 + uVar26;
      uVar25 = (uVar16 * 0x4000 | uVar16 >> 0x12) + uVar22;
      uVar16 = ((~uVar20 | uVar25) ^ uVar18) + param_2[0xf] + 0x6ed9eba1 + uVar22;
      uVar16 = (uVar16 * 0x200 | uVar16 >> 0x17) + uVar21;
      uVar19 = uVar20 * 0x400 | uVar20 >> 0x16;
      uVar26 = uVar25 * 0x400 | uVar25 >> 0x16;
      uVar20 = ((~uVar25 | uVar16) ^ uVar19) + iVar9 + 0x6ed9eba1 + uVar21;
      uVar20 = (uVar20 * 0x2000 | uVar20 >> 0x13) + uVar18;
      uVar22 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar21 = ((~uVar16 | uVar20) ^ uVar26) + iVar2 + 0x6ed9eba1 + uVar18;
      uVar16 = (uVar21 * 0x8000 | uVar21 >> 0x11) + uVar19;
      uVar21 = uVar20 * 0x400 | uVar20 >> 0x16;
      uVar20 = ((~uVar20 | uVar16) ^ uVar22) + iVar3 + 0x6ed9eba1 + uVar19;
      uVar20 = (uVar20 * 0x4000 | uVar20 >> 0x12) + uVar26;
      uVar18 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar16 = ((~uVar16 | uVar20) ^ uVar21) + iVar7 + 0x6ed9eba1 + uVar26;
      uVar25 = (uVar16 * 0x100 | uVar16 >> 0x18) + uVar22;
      uVar19 = uVar20 * 0x400 | uVar20 >> 0x16;
      uVar20 = ((~uVar20 | uVar25) ^ uVar18) + iVar1 + 0x6ed9eba1 + uVar22;
      uVar16 = (uVar20 * 0x2000 | uVar20 >> 0x13) + uVar21;
      uVar26 = uVar25 * 0x400 | uVar25 >> 0x16;
      uVar20 = ((~uVar25 | uVar16) ^ uVar19) + iVar5 + 0x6ed9eba1 + uVar21;
      uVar20 = (uVar20 * 0x40 | uVar20 >> 0x1a) + uVar18;
      uVar22 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar21 = ((~uVar16 | uVar20) ^ uVar26) + iVar14 + 0x6ed9eba1 + uVar18;
      uVar16 = (uVar21 * 0x20 | uVar21 >> 0x1b) + uVar19;
      uVar21 = uVar20 * 0x400 | uVar20 >> 0x16;
      uVar20 = ((~uVar20 | uVar16) ^ uVar22) + iVar12 + 0x6ed9eba1 + uVar19;
      uVar20 = (uVar20 * 0x1000 | uVar20 >> 0x14) + uVar26;
      uVar18 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar16 = ((~uVar16 | uVar20) ^ uVar21) + iVar8 + 0x6ed9eba1 + uVar26;
      uVar25 = (uVar16 * 0x80 | uVar16 >> 0x19) + uVar22;
      uVar19 = uVar20 * 0x400 | uVar20 >> 0x16;
      uVar20 = ((~uVar20 | uVar25) ^ uVar18) + iVar13 + 0x6ed9eba1 + uVar22;
      uVar16 = (uVar20 * 0x20 | uVar20 >> 0x1b) + uVar21;
      uVar20 = ((uVar25 ^ uVar16) & uVar19 ^ uVar25) + iVar2 + -0x70e44324 + uVar21;
      uVar25 = uVar25 * 0x400 | uVar25 >> 0x16;
      uVar20 = (uVar20 * 0x800 | uVar20 >> 0x15) + uVar18;
      uVar22 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar21 = ((uVar16 ^ uVar20) & uVar25 ^ uVar16) + iVar10 + -0x70e44324 + uVar18;
      uVar16 = (uVar21 * 0x1000 | uVar21 >> 0x14) + uVar19;
      uVar21 = uVar20 * 0x400 | uVar20 >> 0x16;
      uVar20 = ((uVar20 ^ uVar16) & uVar22 ^ uVar20) + iVar12 + -0x70e44324 + uVar19;
      uVar20 = (uVar20 * 0x4000 | uVar20 >> 0x12) + uVar25;
      uVar18 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar16 = ((uVar16 ^ uVar20) & uVar21 ^ uVar16) + iVar11 + -0x70e44324 + uVar25;
      uVar25 = (uVar16 * 0x8000 | uVar16 >> 0x11) + uVar22;
      uVar19 = uVar20 * 0x400 | uVar20 >> 0x16;
      uVar20 = ((uVar20 ^ uVar25) & uVar18 ^ uVar20) + iVar1 + -0x70e44324 + uVar22;
      uVar16 = (uVar20 * 0x4000 | uVar20 >> 0x12) + uVar21;
      uVar26 = uVar25 * 0x400 | uVar25 >> 0x16;
      uVar20 = ((uVar25 ^ uVar16) & uVar19 ^ uVar25) + iVar9 + -0x70e44324 + uVar21;
      uVar20 = (uVar20 * 0x8000 | uVar20 >> 0x11) + uVar18;
      uVar22 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar21 = ((uVar16 ^ uVar20) & uVar26 ^ uVar16) + iVar13 + -0x70e44324 + uVar18;
      uVar16 = (uVar21 * 0x200 | uVar21 >> 0x17) + uVar19;
      uVar21 = uVar20 * 0x400 | uVar20 >> 0x16;
      uVar20 = ((uVar20 ^ uVar16) & uVar22 ^ uVar20) + iVar6 + -0x70e44324 + uVar19;
      uVar20 = (uVar20 * 0x100 | uVar20 >> 0x18) + uVar26;
      uVar18 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar16 = ((uVar16 ^ uVar20) & uVar21 ^ uVar16) + iVar14 + -0x70e44324 + uVar26;
      uVar25 = (uVar16 * 0x200 | uVar16 >> 0x17) + uVar22;
      uVar16 = ((uVar20 ^ uVar25) & uVar18 ^ uVar20) + iVar4 + -0x70e44324 + uVar22;
      uVar19 = uVar20 * 0x400 | uVar20 >> 0x16;
      uVar16 = (uVar16 * 0x4000 | uVar16 >> 0x12) + uVar21;
      uVar22 = uVar25 * 0x400 | uVar25 >> 0x16;
      uVar20 = ((uVar25 ^ uVar16) & uVar19 ^ uVar25) + iVar7 + -0x70e44324 + uVar21;
      uVar20 = (uVar20 * 0x20 | uVar20 >> 0x1b) + uVar18;
      uVar25 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar21 = ((uVar16 ^ uVar20) & uVar22 ^ uVar16) + param_2[0xf] + -0x70e44324 + uVar18;
      uVar16 = (uVar21 * 0x40 | uVar21 >> 0x1a) + uVar19;
      uVar21 = uVar20 * 0x400 | uVar20 >> 0x16;
      uVar20 = ((uVar20 ^ uVar16) & uVar25 ^ uVar20) + iVar15 + -0x70e44324 + uVar19;
      uVar19 = (uVar20 * 0x100 | uVar20 >> 0x18) + uVar22;
      uVar18 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar20 = ((uVar16 ^ uVar19) & uVar21 ^ uVar16) + iVar8 + -0x70e44324 + uVar22;
      uVar20 = (uVar20 * 0x40 | uVar20 >> 0x1a) + uVar25;
      uVar22 = uVar19 * 0x400 | uVar19 >> 0x16;
      uVar16 = ((uVar19 ^ uVar20) & uVar18 ^ uVar19) + iVar5 + -0x70e44324 + uVar25;
      uVar19 = (uVar16 * 0x20 | uVar16 >> 0x1b) + uVar21;
      uVar16 = uVar20 * 0x400 | uVar20 >> 0x16;
      uVar20 = ((uVar20 ^ uVar19) & uVar22 ^ uVar20) + iVar3 + -0x70e44324 + uVar21;
      uVar21 = (uVar20 * 0x1000 | uVar20 >> 0x14) + uVar18;
      uVar25 = uVar19 * 0x400 | uVar19 >> 0x16;
      uVar20 = ((~uVar16 | uVar19) ^ uVar21) + iVar6 + -0x56ac02b2 + uVar18;
      uVar20 = (uVar20 * 0x200 | uVar20 >> 0x17) + uVar22;
      uVar26 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar21 = ((~uVar25 | uVar21) ^ uVar20) + iVar1 + -0x56ac02b2 + uVar22;
      uVar21 = (uVar21 * 0x8000 | uVar21 >> 0x11) + uVar16;
      uVar18 = uVar20 * 0x400 | uVar20 >> 0x16;
      uVar20 = ((~uVar26 | uVar20) ^ uVar21) + iVar8 + -0x56ac02b2 + uVar16;
      uVar20 = (uVar20 * 0x20 | uVar20 >> 0x1b) + uVar25;
      uVar19 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar16 = ((~uVar18 | uVar21) ^ uVar20) + iVar10 + -0x56ac02b2 + uVar25;
      uVar21 = uVar20 * 0x400 | uVar20 >> 0x16;
      uVar16 = (uVar16 * 0x800 | uVar16 >> 0x15) + uVar26;
      uVar20 = ((~uVar19 | uVar20) ^ uVar16) + iVar7 + -0x56ac02b2 + uVar26;
      uVar22 = (uVar20 * 0x40 | uVar20 >> 0x1a) + uVar18;
      uVar26 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar20 = ((~uVar21 | uVar16) ^ uVar22) + iVar13 + -0x56ac02b2 + uVar18;
      uVar16 = (uVar20 * 0x100 | uVar20 >> 0x18) + uVar19;
      uVar25 = uVar22 * 0x400 | uVar22 >> 0x16;
      uVar20 = ((~uVar26 | uVar22) ^ uVar16) + iVar3 + -0x56ac02b2 + uVar19;
      uVar20 = (uVar20 * 0x2000 | uVar20 >> 0x13) + uVar21;
      uVar18 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar21 = ((~uVar25 | uVar16) ^ uVar20) + iVar11 + -0x56ac02b2 + uVar21;
      uVar19 = (uVar21 * 0x1000 | uVar21 >> 0x14) + uVar26;
      uVar21 = ((~uVar18 | uVar20) ^ uVar19) + iVar15 + -0x56ac02b2 + uVar26;
      uVar16 = uVar20 * 0x400 | uVar20 >> 0x16;
      uVar20 = (uVar21 * 0x20 | uVar21 >> 0x1b) + uVar25;
      uVar22 = uVar19 * 0x400 | uVar19 >> 0x16;
      uVar21 = ((~uVar16 | uVar19) ^ uVar20) + iVar2 + -0x56ac02b2 + uVar25;
      uVar19 = (uVar21 * 0x1000 | uVar21 >> 0x14) + uVar18;
      uVar21 = uVar20 * 0x400 | uVar20 >> 0x16;
      uVar20 = ((~uVar22 | uVar20) ^ uVar19) + iVar4 + -0x56ac02b2 + uVar18;
      uVar20 = (uVar20 * 0x2000 | uVar20 >> 0x13) + uVar16;
      uVar25 = uVar19 * 0x400 | uVar19 >> 0x16;
      uVar16 = ((~uVar21 | uVar19) ^ uVar20) + iVar9 + -0x56ac02b2 + uVar16;
      uVar16 = (uVar16 * 0x4000 | uVar16 >> 0x12) + uVar22;
      uVar18 = uVar20 * 0x400 | uVar20 >> 0x16;
      uVar20 = ((~uVar25 | uVar20) ^ uVar16) + iVar12 + -0x56ac02b2 + uVar22;
      uVar20 = (uVar20 * 0x800 | uVar20 >> 0x15) + uVar21;
      uVar21 = ((~uVar18 | uVar16) ^ uVar20) + iVar5 + -0x56ac02b2 + uVar21;
      uVar26 = (uVar21 * 0x100 | uVar21 >> 0x18) + uVar25;
      uVar23 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar22 = uVar20 * 0x400 | uVar20 >> 0x16;
      uVar20 = ((~uVar23 | uVar20) ^ uVar26) + param_2[0xf] + -0x56ac02b2 + uVar25;
      uVar20 = (uVar20 * 0x20 | uVar20 >> 0x1b) + uVar18;
      iVar17 = local_5c + uVar23;
      uVar21 = ((~local_74 | local_60) ^ local_70) + iVar8 + 0x50a28be6 + local_5c;
      uVar19 = (uVar21 * 0x100 | uVar21 >> 0x18) + local_6c;
      uVar21 = ((~uVar24 | local_70) ^ uVar19) + local_6c + 0x50a28be6 + iVar15;
      uVar16 = (uVar21 * 0x200 | uVar21 >> 0x17) + local_74;
      uVar25 = uVar19 * 0x400 | uVar19 >> 0x16;
      uVar21 = ((~uVar28 | uVar19) ^ uVar16) + local_74 + 0x50a28be6 + iVar7;
      uVar21 = (uVar21 * 0x200 | uVar21 >> 0x17) + uVar24;
      uVar19 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar16 = ((~uVar25 | uVar16) ^ uVar21) + iVar1 + 0x50a28be6 + uVar24;
      uVar16 = (uVar16 * 0x800 | uVar16 >> 0x15) + uVar28;
      uVar24 = ((~uVar19 | uVar21) ^ uVar16) + uVar28 + 0x50a28be6 + iVar10;
      uVar29 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar28 = (uVar24 * 0x2000 | uVar24 >> 0x13) + uVar25;
      uVar21 = ((~uVar29 | uVar16) ^ uVar28) + iVar3 + 0x50a28be6 + uVar25;
      uVar24 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar21 = (uVar21 * 0x8000 | uVar21 >> 0x11) + uVar19;
      uVar27 = uVar28 * 0x400 | uVar28 >> 0x16;
      uVar16 = ((~uVar24 | uVar28) ^ uVar21) + iVar12 + 0x50a28be6 + uVar19;
      uVar16 = (uVar16 * 0x8000 | uVar16 >> 0x11) + uVar29;
      uVar19 = ((~uVar27 | uVar21) ^ uVar16) + iVar6 + 0x50a28be6 + uVar29;
      uVar28 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar25 = (uVar19 * 0x20 | uVar19 >> 0x1b) + uVar24;
      uVar19 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar21 = ((~uVar28 | uVar16) ^ uVar25) + iVar14 + 0x50a28be6 + uVar24;
      uVar16 = (uVar21 * 0x80 | uVar21 >> 0x19) + uVar27;
      uVar21 = ((~uVar19 | uVar25) ^ uVar16) + iVar5 + 0x50a28be6 + uVar27;
      uVar21 = (uVar21 * 0x80 | uVar21 >> 0x19) + uVar28;
      uVar24 = uVar25 * 0x400 | uVar25 >> 0x16;
      uVar25 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar16 = ((~uVar24 | uVar16) ^ uVar21) + param_2[0xf] + 0x50a28be6 + uVar28;
      uVar28 = (uVar16 * 0x100 | uVar16 >> 0x18) + uVar19;
      uVar19 = ((~uVar25 | uVar21) ^ uVar28) + iVar9 + 0x50a28be6 + uVar19;
      uVar16 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar19 = (uVar19 * 0x800 | uVar19 >> 0x15) + uVar24;
      uVar29 = uVar28 * 0x400 | uVar28 >> 0x16;
      uVar21 = ((~uVar16 | uVar28) ^ uVar19) + iVar2 + 0x50a28be6 + uVar24;
      uVar28 = (uVar21 * 0x4000 | uVar21 >> 0x12) + uVar25;
      uVar21 = ((~uVar29 | uVar19) ^ uVar28) + iVar11 + 0x50a28be6 + uVar25;
      uVar24 = uVar19 * 0x400 | uVar19 >> 0x16;
      uVar21 = (uVar21 * 0x4000 | uVar21 >> 0x12) + uVar16;
      uVar27 = uVar28 * 0x400 | uVar28 >> 0x16;
      uVar16 = ((~uVar24 | uVar28) ^ uVar21) + iVar4 + 0x50a28be6 + uVar16;
      uVar16 = (uVar16 * 0x1000 | uVar16 >> 0x14) + uVar29;
      uVar19 = ((~uVar27 | uVar21) ^ uVar16) + iVar13 + 0x50a28be6 + uVar29;
      uVar28 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar25 = (uVar19 * 0x40 | uVar19 >> 0x1a) + uVar24;
      uVar19 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar21 = ((uVar16 ^ uVar25) & uVar28 ^ uVar16) + iVar5 + 0x5c4dd124 + uVar24;
      uVar16 = (uVar21 * 0x200 | uVar21 >> 0x17) + uVar27;
      uVar21 = ((uVar25 ^ uVar16) & uVar19 ^ uVar25) + iVar12 + 0x5c4dd124 + uVar27;
      uVar24 = uVar25 * 0x400 | uVar25 >> 0x16;
      uVar21 = (uVar21 * 0x2000 | uVar21 >> 0x13) + uVar28;
      uVar25 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar16 = ((uVar16 ^ uVar21) & uVar24 ^ uVar16) + iVar4 + 0x5c4dd124 + uVar28;
      uVar28 = (uVar16 * 0x8000 | uVar16 >> 0x11) + uVar19;
      uVar16 = ((uVar21 ^ uVar28) & uVar25 ^ uVar21) + iVar7 + 0x5c4dd124 + uVar19;
      uVar19 = (uVar16 * 0x80 | uVar16 >> 0x19) + uVar24;
      uVar16 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar27 = uVar28 * 0x400 | uVar28 >> 0x16;
      uVar21 = ((uVar28 ^ uVar19) & uVar16 ^ uVar28) + iVar1 + 0x5c4dd124 + uVar24;
      uVar24 = (uVar21 * 0x1000 | uVar21 >> 0x14) + uVar25;
      uVar21 = ((uVar19 ^ uVar24) & uVar27 ^ uVar19) + iVar14 + 0x5c4dd124 + uVar25;
      uVar25 = uVar19 * 0x400 | uVar19 >> 0x16;
      uVar21 = (uVar21 * 0x100 | uVar21 >> 0x18) + uVar16;
      uVar28 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar16 = ((uVar24 ^ uVar21) & uVar25 ^ uVar24) + iVar8 + 0x5c4dd124 + uVar16;
      uVar16 = (uVar16 * 0x200 | uVar16 >> 0x17) + uVar27;
      uVar19 = ((uVar21 ^ uVar16) & uVar28 ^ uVar21) + iVar11 + 0x5c4dd124 + uVar27;
      uVar27 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar19 = (uVar19 * 0x800 | uVar19 >> 0x15) + uVar25;
      uVar21 = ((uVar16 ^ uVar19) & uVar27 ^ uVar16) + iVar15 + 0x5c4dd124 + uVar25;
      uVar16 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar25 = (uVar21 * 0x80 | uVar21 >> 0x19) + uVar28;
      uVar21 = ((uVar19 ^ uVar25) & uVar16 ^ uVar19) + param_2[0xf] + 0x5c4dd124 + uVar28;
      uVar28 = uVar19 * 0x400 | uVar19 >> 0x16;
      uVar21 = (uVar21 * 0x80 | uVar21 >> 0x19) + uVar27;
      uVar24 = uVar25 * 0x400 | uVar25 >> 0x16;
      uVar19 = ((uVar25 ^ uVar21) & uVar28 ^ uVar25) + iVar9 + 0x5c4dd124 + uVar27;
      uVar25 = (uVar19 * 0x1000 | uVar19 >> 0x14) + uVar16;
      uVar19 = ((uVar21 ^ uVar25) & uVar24 ^ uVar21) + iVar13 + 0x5c4dd124 + uVar16;
      uVar16 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar21 = (uVar19 * 0x80 | uVar19 >> 0x19) + uVar28;
      uVar27 = uVar25 * 0x400 | uVar25 >> 0x16;
      uVar19 = ((uVar25 ^ uVar21) & uVar16 ^ uVar25) + iVar6 + 0x5c4dd124 + uVar28;
      uVar25 = (uVar19 * 0x40 | uVar19 >> 0x1a) + uVar24;
      uVar19 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar21 = ((uVar21 ^ uVar25) & uVar27 ^ uVar21) + iVar10 + 0x5c4dd124 + uVar24;
      uVar21 = (uVar21 * 0x8000 | uVar21 >> 0x11) + uVar16;
      uVar28 = uVar25 * 0x400 | uVar25 >> 0x16;
      uVar16 = ((uVar25 ^ uVar21) & uVar19 ^ uVar25) + iVar2 + 0x5c4dd124 + uVar16;
      uVar25 = (uVar16 * 0x2000 | uVar16 >> 0x13) + uVar27;
      uVar16 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar21 = ((uVar21 ^ uVar25) & uVar28 ^ uVar21) + iVar3 + 0x5c4dd124 + uVar27;
      uVar27 = (uVar21 * 0x800 | uVar21 >> 0x15) + uVar19;
      uVar24 = uVar25 * 0x400 | uVar25 >> 0x16;
      uVar21 = ((~uVar25 | uVar27) ^ uVar16) + param_2[0xf] + 0x6d703ef3 + uVar19;
      uVar21 = (uVar21 * 0x200 | uVar21 >> 0x17) + uVar28;
      uVar19 = ((~uVar27 | uVar21) ^ uVar24) + iVar8 + 0x6d703ef3 + uVar28;
      uVar25 = (uVar19 * 0x80 | uVar19 >> 0x19) + uVar16;
      uVar27 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar19 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar21 = ((~uVar21 | uVar25) ^ uVar27) + iVar2 + 0x6d703ef3 + uVar16;
      uVar16 = (uVar21 * 0x8000 | uVar21 >> 0x11) + uVar24;
      uVar28 = uVar25 * 0x400 | uVar25 >> 0x16;
      uVar21 = ((~uVar25 | uVar16) ^ uVar19) + iVar4 + 0x6d703ef3 + uVar24;
      uVar25 = (uVar21 * 0x800 | uVar21 >> 0x15) + uVar27;
      uVar21 = ((~uVar16 | uVar25) ^ uVar28) + iVar7 + 0x6d703ef3 + uVar27;
      uVar27 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar21 = (uVar21 * 0x100 | uVar21 >> 0x18) + uVar19;
      uVar24 = uVar25 * 0x400 | uVar25 >> 0x16;
      uVar16 = ((~uVar25 | uVar21) ^ uVar27) + iVar15 + 0x6d703ef3 + uVar19;
      uVar16 = (uVar16 * 0x40 | uVar16 >> 0x1a) + uVar28;
      uVar19 = ((~uVar21 | uVar16) ^ uVar24) + iVar5 + 0x6d703ef3 + uVar28;
      uVar28 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar25 = (uVar19 * 0x40 | uVar19 >> 0x1a) + uVar27;
      uVar19 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar21 = ((~uVar16 | uVar25) ^ uVar28) + iVar10 + 0x6d703ef3 + uVar27;
      uVar16 = (uVar21 * 0x4000 | uVar21 >> 0x12) + uVar24;
      uVar21 = ((~uVar25 | uVar16) ^ uVar19) + iVar12 + 0x6d703ef3 + uVar24;
      uVar25 = uVar25 * 0x400 | uVar25 >> 0x16;
      uVar21 = (uVar21 * 0x1000 | uVar21 >> 0x14) + uVar28;
      uVar27 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar16 = ((~uVar16 | uVar21) ^ uVar25) + iVar9 + 0x6d703ef3 + uVar28;
      uVar24 = (uVar16 * 0x2000 | uVar16 >> 0x13) + uVar19;
      uVar19 = ((~uVar21 | uVar24) ^ uVar27) + iVar13 + 0x6d703ef3 + uVar19;
      uVar16 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar19 = (uVar19 * 0x20 | uVar19 >> 0x1b) + uVar25;
      uVar28 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar21 = ((~uVar24 | uVar19) ^ uVar16) + iVar3 + 0x6d703ef3 + uVar25;
      uVar25 = (uVar21 * 0x4000 | uVar21 >> 0x12) + uVar27;
      uVar21 = ((~uVar19 | uVar25) ^ uVar28) + iVar11 + 0x6d703ef3 + uVar27;
      uVar27 = uVar19 * 0x400 | uVar19 >> 0x16;
      uVar21 = (uVar21 * 0x2000 | uVar21 >> 0x13) + uVar16;
      uVar24 = uVar25 * 0x400 | uVar25 >> 0x16;
      uVar16 = ((~uVar25 | uVar21) ^ uVar27) + iVar1 + 0x6d703ef3 + uVar16;
      uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x13) + uVar28;
      uVar19 = ((~uVar21 | uVar16) ^ uVar24) + iVar6 + 0x6d703ef3 + uVar28;
      uVar28 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar25 = (uVar19 * 0x80 | uVar19 >> 0x19) + uVar27;
      uVar19 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar21 = ((~uVar16 | uVar25) ^ uVar28) + iVar14 + 0x6d703ef3 + uVar27;
      uVar27 = (uVar21 * 0x20 | uVar21 >> 0x1b) + uVar24;
      uVar21 = ((uVar25 ^ uVar19) & uVar27 ^ uVar19) + iVar9 + 0x7a6d76e9 + uVar24;
      uVar25 = uVar25 * 0x400 | uVar25 >> 0x16;
      uVar21 = (uVar21 * 0x8000 | uVar21 >> 0x11) + uVar28;
      uVar16 = ((uVar27 ^ uVar25) & uVar21 ^ uVar25) + iVar5 + 0x7a6d76e9 + uVar28;
      uVar27 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar24 = (uVar16 * 0x20 | uVar16 >> 0x1b) + uVar19;
      uVar19 = ((uVar21 ^ uVar27) & uVar24 ^ uVar27) + iVar6 + 0x7a6d76e9 + uVar19;
      uVar16 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar19 = (uVar19 * 0x100 | uVar19 >> 0x18) + uVar25;
      uVar28 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar21 = ((uVar24 ^ uVar16) & uVar19 ^ uVar16) + iVar2 + 0x7a6d76e9 + uVar25;
      uVar25 = (uVar21 * 0x800 | uVar21 >> 0x15) + uVar27;
      uVar21 = ((uVar19 ^ uVar28) & uVar25 ^ uVar28) + iVar4 + 0x7a6d76e9 + uVar27;
      uVar27 = uVar19 * 0x400 | uVar19 >> 0x16;
      uVar21 = (uVar21 * 0x4000 | uVar21 >> 0x12) + uVar16;
      uVar24 = uVar25 * 0x400 | uVar25 >> 0x16;
      uVar16 = ((uVar25 ^ uVar27) & uVar21 ^ uVar27) + iVar12 + 0x7a6d76e9 + uVar16;
      uVar16 = (uVar16 * 0x4000 | uVar16 >> 0x12) + uVar28;
      uVar19 = ((uVar21 ^ uVar24) & uVar16 ^ uVar24) + param_2[0xf] + 0x7a6d76e9 + uVar28;
      uVar28 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar25 = (uVar19 * 0x40 | uVar19 >> 0x1a) + uVar27;
      uVar19 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar21 = ((uVar16 ^ uVar28) & uVar25 ^ uVar28) + iVar1 + 0x7a6d76e9 + uVar27;
      uVar16 = (uVar21 * 0x4000 | uVar21 >> 0x12) + uVar24;
      uVar21 = ((uVar25 ^ uVar19) & uVar16 ^ uVar19) + iVar8 + 0x7a6d76e9 + uVar24;
      uVar25 = uVar25 * 0x400 | uVar25 >> 0x16;
      uVar21 = (uVar21 * 0x40 | uVar21 >> 0x1a) + uVar28;
      uVar29 = uVar16 * 0x400 | uVar16 >> 0x16;
      uVar16 = ((uVar16 ^ uVar25) & uVar21 ^ uVar25) + iVar13 + 0x7a6d76e9 + uVar28;
      uVar24 = (uVar16 * 0x200 | uVar16 >> 0x17) + uVar19;
      uVar16 = ((uVar21 ^ uVar29) & uVar24 ^ uVar29) + iVar3 + 0x7a6d76e9 + uVar19;
      uVar19 = (uVar16 * 0x1000 | uVar16 >> 0x14) + uVar25;
      uVar16 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar27 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar21 = ((uVar24 ^ uVar16) & uVar19 ^ uVar16) + iVar14 + 0x7a6d76e9 + uVar25;
      uVar24 = (uVar21 * 0x200 | uVar21 >> 0x17) + uVar29;
      uVar25 = uVar19 * 0x400 | uVar19 >> 0x16;
      uVar21 = ((uVar19 ^ uVar27) & uVar24 ^ uVar27) + iVar10 + 0x7a6d76e9 + uVar29;
      uVar21 = (uVar21 * 0x1000 | uVar21 >> 0x14) + uVar16;
      uVar28 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar16 = ((uVar24 ^ uVar25) & uVar21 ^ uVar25) + iVar7 + 0x7a6d76e9 + uVar16;
      uVar19 = (uVar16 * 0x20 | uVar16 >> 0x1b) + uVar27;
      uVar16 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar21 = ((uVar21 ^ uVar28) & uVar19 ^ uVar28) + iVar11 + 0x7a6d76e9 + uVar27;
      uVar24 = (uVar21 * 0x8000 | uVar21 >> 0x11) + uVar25;
      uVar21 = uVar19 * 0x400 | uVar19 >> 0x16;
      uVar19 = ((uVar19 ^ uVar16) & uVar24 ^ uVar16) + iVar15 + 0x7a6d76e9 + uVar25;
      uVar19 = (uVar19 * 0x100 | uVar19 >> 0x18) + uVar28;
      uVar27 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar25 = (uVar24 ^ uVar21 ^ uVar19) + uVar28 + iVar13;
      uVar24 = uVar19 * 0x400 | uVar19 >> 0x16;
      uVar28 = (uVar25 * 0x100 | uVar25 >> 0x18) + uVar16;
      uVar16 = (uVar19 ^ uVar27 ^ uVar28) + uVar16 + param_2[0xf];
      uVar25 = (uVar16 * 0x20 | uVar16 >> 0x1b) + uVar21;
      uVar29 = uVar28 * 0x400 | uVar28 >> 0x16;
      uVar21 = (uVar28 ^ uVar24 ^ uVar25) + uVar21 + iVar11;
      uVar21 = (uVar21 * 0x1000 | uVar21 >> 0x14) + uVar27;
      uVar16 = (uVar25 ^ uVar29 ^ uVar21) + uVar27 + iVar6;
      uVar19 = (uVar16 * 0x200 | uVar16 >> 0x17) + uVar24;
      uVar28 = uVar25 * 0x400 | uVar25 >> 0x16;
      uVar16 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar25 = uVar19 * 0x400 | uVar19 >> 0x16;
      uVar21 = (uVar21 ^ uVar28 ^ uVar19) + uVar24 + iVar2;
      uVar24 = (uVar21 * 0x1000 | uVar21 >> 0x14) + uVar29;
      uVar21 = (uVar19 ^ uVar16 ^ uVar24) + uVar29 + iVar8;
      uVar21 = (uVar21 * 0x20 | uVar21 >> 0x1b) + uVar28;
      uVar27 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar19 = (uVar24 ^ uVar25 ^ uVar21) + uVar28 + iVar9;
      uVar28 = (uVar19 * 0x4000 | uVar19 >> 0x12) + uVar16;
      uVar24 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar21 = (uVar21 ^ uVar27 ^ uVar28) + uVar16 + iVar7;
      uVar19 = (uVar21 * 0x40 | uVar21 >> 0x1a) + uVar25;
      uVar21 = (uVar28 ^ uVar24 ^ uVar19) + uVar25 + iVar5;
      uVar29 = uVar28 * 0x400 | uVar28 >> 0x16;
      uVar28 = uVar19 * 0x400 | uVar19 >> 0x16;
      uVar21 = (uVar21 * 0x100 | uVar21 >> 0x18) + uVar27;
      uVar16 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar19 = (uVar19 ^ uVar29 ^ uVar21) + uVar27 + iVar3;
      uVar19 = (uVar19 * 0x2000 | uVar19 >> 0x13) + uVar24;
      uVar25 = uVar19 * 0x400 | uVar19 >> 0x16;
      uVar21 = (uVar21 ^ uVar28 ^ uVar19) + uVar24 + iVar14;
      uVar24 = (uVar21 * 0x40 | uVar21 >> 0x1a) + uVar29;
      uVar27 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar21 = (uVar19 ^ uVar16 ^ uVar24) + uVar29 + iVar15;
      uVar21 = (uVar21 * 0x20 | uVar21 >> 0x1b) + uVar28;
      uVar19 = (uVar24 ^ uVar25 ^ uVar21) + uVar28 + iVar1;
      uVar19 = (uVar19 * 0x8000 | uVar19 >> 0x11) + uVar16;
      uVar24 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar28 = uVar19 * 0x400 | uVar19 >> 0x16;
      uVar21 = (uVar21 ^ uVar27 ^ uVar19) + uVar16 + iVar4;
      uVar21 = (uVar21 * 0x2000 | uVar21 >> 0x13) + uVar25;
      uVar16 = (uVar19 ^ uVar24 ^ uVar21) + uVar25 + iVar10;
      uVar16 = (uVar16 * 0x800 | uVar16 >> 0x15) + uVar27;
      uVar19 = (uVar21 ^ uVar28 ^ uVar16) + uVar27 + iVar12;
      local_5c = uVar20 + (uVar21 * 0x400 | uVar21 >> 0x16) + local_70;
      local_68 = local_68 + -1;
      local_70 = (uVar26 * 0x400 | uVar26 >> 0x16) + uVar28 + local_60;
      local_60 = uVar24 + local_74 + uVar22;
      local_74 = (uVar19 * 0x800 | uVar19 >> 0x15) + uVar24 + uVar23 + local_6c;
      uVar20 = ((~uVar22 | uVar26) ^ uVar20) + iVar14 + -0x56ac02b2 + uVar18;
      local_6c = iVar17 + uVar16 + (uVar20 * 0x40 | uVar20 >> 0x1a);
      param_1[4] = local_6c;
      *(ulong *)param_1 = CONCAT44(local_70,local_5c);
      *(ulong *)(param_1 + 2) = CONCAT44(local_74,local_60);
      param_2 = param_2 + 0x10;
    } while (local_68 != -1);
  }
  return;
}



int RIPEMD160_Update(RIPEMD160_CTX *c,void *data,size_t len)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  
  if (len == 0) {
    return 1;
  }
  uVar9 = (uint)len;
  uVar2 = c->Nl;
  c->Nl = uVar9 * 8 + c->Nl;
  uVar3 = (ulong)c->num;
  c->Nh = c->Nh + (uint)CARRY4(uVar9 * 8,uVar2) + (int)(len >> 0x1d);
  if (uVar3 == 0) {
    if (len < 0x40) goto LAB_00101468;
LAB_00101517:
    ripemd160_block_data_order(c,data,len >> 6);
    data = (void *)((long)data + (len & 0xffffffffffffffc0));
    len = len - (len & 0xffffffffffffffc0);
  }
  else {
    puVar1 = c->data;
    if ((len + uVar3 | len) < 0x40) {
      memcpy((void *)((long)puVar1 + uVar3),data,len);
      c->num = c->num + uVar9;
      return 1;
    }
    lVar5 = -uVar3;
    uVar8 = lVar5 + 0x40;
    puVar4 = (undefined8 *)(uVar3 + (long)puVar1);
    if (uVar8 < 8) {
      if ((uVar8 & 4) == 0) {
                    /* WARNING: Load size is inaccurate */
        if ((uVar8 != 0) && (*(undefined1 *)puVar4 = *data, (uVar8 & 2) != 0)) {
          *(undefined2 *)((long)puVar4 + lVar5 + 0x3e) = *(undefined2 *)((long)data + lVar5 + 0x3e);
        }
      }
      else {
                    /* WARNING: Load size is inaccurate */
        *(undefined4 *)puVar4 = *data;
        *(undefined4 *)((long)puVar4 + lVar5 + 0x3c) = *(undefined4 *)((long)data + lVar5 + 0x3c);
      }
    }
    else {
                    /* WARNING: Load size is inaccurate */
      *puVar4 = *data;
      *(undefined8 *)((long)puVar4 + lVar5 + 0x38) = *(undefined8 *)((long)data + lVar5 + 0x38);
      lVar5 = (long)puVar4 - ((ulong)(puVar4 + 1) & 0xfffffffffffffff8);
      uVar6 = lVar5 + uVar8 & 0xfffffffffffffff8;
      if (7 < uVar6) {
        uVar7 = 0;
        do {
          *(undefined8 *)(((ulong)(puVar4 + 1) & 0xfffffffffffffff8) + uVar7) =
               *(undefined8 *)((long)data + (uVar7 - lVar5));
          uVar7 = uVar7 + 8;
        } while (uVar7 < uVar6);
      }
    }
    data = (void *)((long)data + uVar8);
    ripemd160_block_data_order(c,puVar1,1);
    len = (len + uVar3) - 0x40;
    c->num = 0;
    c->data[0] = 0;
    c->data[1] = 0;
    c->data[2] = 0;
    c->data[3] = 0;
    c->data[4] = 0;
    c->data[5] = 0;
    c->data[6] = 0;
    c->data[7] = 0;
    c->data[8] = 0;
    c->data[9] = 0;
    c->data[10] = 0;
    c->data[0xb] = 0;
    c->data[0xc] = 0;
    c->data[0xd] = 0;
    c->data[0xe] = 0;
    c->data[0xf] = 0;
    if (0x3f < len) goto LAB_00101517;
  }
  if (len == 0) {
    return 1;
  }
  uVar9 = (uint)len;
LAB_00101468:
  c->num = uVar9;
  memcpy(c->data,data,len);
  return 1;
}



void RIPEMD160_Transform(RIPEMD160_CTX *c,uchar *b)

{
  ripemd160_block_data_order(c,b,1);
  return;
}



int RIPEMD160_Final(uchar *md,RIPEMD160_CTX *c)

{
  uint *ptr;
  uint uVar1;
  ulong uVar2;
  uint *puVar3;
  uint uVar4;
  ulong uVar5;
  
  ptr = c->data;
  uVar4 = c->num;
  *(undefined1 *)((long)c->data + (ulong)uVar4) = 0x80;
  uVar2 = (ulong)uVar4 + 1;
  if (uVar2 < 0x39) {
    uVar5 = 0x38 - uVar2;
    puVar3 = (uint *)(uVar2 + (long)ptr);
  }
  else {
    if (uVar2 != 0x40) {
      uVar5 = 0;
      do {
        *(undefined1 *)((long)ptr + uVar5 + uVar2) = 0;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x40 - uVar2);
    }
    ripemd160_block_data_order(c,ptr,1);
    uVar5 = 0x38;
    puVar3 = ptr;
  }
  uVar4 = (uint)uVar5;
  if (uVar4 < 8) {
    if ((uVar5 & 4) == 0) {
      if ((uVar4 != 0) && (*(undefined1 *)puVar3 = 0, (uVar5 & 2) != 0)) {
        *(undefined2 *)((long)puVar3 + ((uVar5 & 0xffffffff) - 2)) = 0;
      }
    }
    else {
      *puVar3 = 0;
      *(undefined4 *)((long)puVar3 + ((uVar5 & 0xffffffff) - 4)) = 0;
    }
  }
  else {
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined8 *)((long)puVar3 + ((uVar5 & 0xffffffff) - 8)) = 0;
    uVar4 = uVar4 + ((int)puVar3 - (int)((ulong)(puVar3 + 2) & 0xfffffffffffffff8)) & 0xfffffff8;
    if (7 < uVar4) {
      uVar1 = 0;
      do {
        uVar2 = (ulong)uVar1;
        uVar1 = uVar1 + 8;
        *(undefined8 *)(((ulong)(puVar3 + 2) & 0xfffffffffffffff8) + uVar2) = 0;
      } while (uVar1 < uVar4);
    }
  }
  uVar4 = c->Nh;
  c->data[0xe] = c->Nl;
  c->data[0xf] = uVar4;
  ripemd160_block_data_order(c,ptr,1);
  c->num = 0;
  OPENSSL_cleanse(ptr,0x40);
  *(uint *)md = c->A;
  *(uint *)(md + 4) = c->B;
  *(uint *)(md + 8) = c->C;
  *(uint *)(md + 0xc) = c->D;
  *(uint *)(md + 0x10) = c->E;
  return 1;
}


