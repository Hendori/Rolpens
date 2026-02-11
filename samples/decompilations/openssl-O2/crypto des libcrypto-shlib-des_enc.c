
void DES_encrypt1(uint *data,DES_key_schedule *ks,int enc)

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
  
  uVar11 = *(uint *)((long)ks->ks + 100);
  uVar10 = *(uint *)((long)ks->ks + 0x5c);
  uVar16 = *(uint *)((long)ks->ks + 0x6c);
  uVar4 = (data[1] >> 4 ^ *data) & 0xf0f0f0f;
  uVar13 = *(uint *)((long)ks->ks + 0x7c);
  uVar12 = *data ^ uVar4;
  uVar15 = *(uint *)((long)ks->ks + 0x74);
  uVar5 = uVar4 << 4 ^ data[1];
  uVar4 = (uVar12 >> 0x10 ^ uVar5) & 0xffff;
  uVar5 = uVar5 ^ uVar4;
  uVar12 = uVar4 << 0x10 ^ uVar12;
  uVar4 = (uVar5 >> 2 ^ uVar12) & 0x33333333;
  uVar12 = uVar12 ^ uVar4;
  uVar5 = uVar4 << 2 ^ uVar5;
  uVar4 = (uVar12 >> 8 ^ uVar5) & 0xff00ff;
  uVar5 = uVar5 ^ uVar4;
  uVar12 = uVar4 << 8 ^ uVar12;
  uVar4 = (uVar5 >> 1 ^ uVar12) & 0x55555555;
  uVar12 = uVar12 ^ uVar4;
  uVar5 = uVar4 * 2 ^ uVar5;
  uVar4 = *(uint *)((long)ks->ks + 0x54);
  uVar20 = *(uint *)((long)ks->ks + 0x4c);
  uVar9 = *(uint *)((long)ks->ks + 0x44);
  uVar3 = *(uint *)((long)ks->ks + 0x3c);
  uVar19 = *(uint *)((long)ks->ks + 0x34);
  uVar8 = *(uint *)((long)ks->ks + 0x2c);
  uVar2 = *(uint *)((long)ks->ks + 0x24);
  uVar18 = *(uint *)((long)ks->ks + 0x1c);
  uVar7 = *(uint *)((long)ks->ks + 0x14);
  uVar6 = uVar12 >> 0x1d | uVar12 << 3;
  uVar12 = *(uint *)((long)ks->ks + 0xc);
  uVar5 = uVar5 >> 0x1d | uVar5 << 3;
  if (enc == 0) {
    uVar14 = ks->ks[0xf].deslong[0] ^ uVar6;
    uVar13 = uVar13 ^ uVar6;
    uVar1 = uVar13 >> 4;
    uVar5 = uVar5 ^ *(uint *)(DES_SPtrans + (ulong)(uVar14 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar14 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar14 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar14 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar1 | uVar13 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar1 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar1 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4 + 0x500);
    uVar15 = uVar15 ^ uVar5;
    uVar1 = ks->ks[0xe].deslong[0] ^ uVar5;
    uVar13 = uVar15 >> 4;
    uVar15 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
             uVar6 ^ *(uint *)(DES_SPtrans + (ulong)((uVar13 | uVar15 << 0x1c) >> 0x1a) * 4 + 0x700)
             ^ *(uint *)(DES_SPtrans + (ulong)((uVar13 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar13 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar13 & 0xfc0000) >> 0x12) * 4 + 0x500) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar16 = uVar16 ^ uVar15;
    uVar13 = uVar16 >> 4;
    uVar6 = ks->ks[0xd].deslong[0] ^ uVar15;
    uVar5 = *(uint *)(DES_SPtrans + (ulong)((uVar13 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar13 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar13 | uVar16 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar13 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar5 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar6 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar6 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar6 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar6 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar11 = uVar11 ^ uVar5;
    uVar16 = uVar11 >> 4;
    uVar13 = ks->ks[0xc].deslong[0] ^ uVar5;
    uVar16 = *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc0000) >> 0x12) * 4 + 0x500) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 | uVar11 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             uVar15 ^ *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar10 = uVar10 ^ uVar16;
    uVar13 = ks->ks[0xb].deslong[0] ^ uVar16;
    uVar11 = uVar10 >> 4;
    uVar10 = *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 | uVar10 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar5 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar4 = uVar4 ^ uVar10;
    uVar13 = ks->ks[10].deslong[0] ^ uVar10;
    uVar11 = uVar4 >> 4;
    uVar13 = *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 | uVar4 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar16 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar20 = uVar20 ^ uVar13;
    uVar11 = uVar20 >> 4;
    uVar16 = ks->ks[9].deslong[0] ^ uVar13;
    uVar16 = *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 | uVar20 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar10 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar9 = uVar9 ^ uVar16;
    uVar11 = uVar9 >> 4;
    uVar10 = ks->ks[8].deslong[0] ^ uVar16;
    uVar10 = *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 | uVar9 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar13 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar3 = uVar3 ^ uVar10;
    uVar11 = uVar3 >> 4;
    uVar13 = ks->ks[7].deslong[0] ^ uVar10;
    uVar15 = *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 | uVar3 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar16 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar19 = uVar19 ^ uVar15;
    uVar16 = ks->ks[6].deslong[0] ^ uVar15;
    uVar11 = uVar19 >> 4;
    uVar13 = *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 | uVar19 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar10 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar8 = uVar8 ^ uVar13;
    uVar10 = ks->ks[5].deslong[0] ^ uVar13;
    uVar11 = uVar8 >> 4;
    uVar10 = *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 | uVar8 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar15 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar2 = uVar2 ^ uVar10;
    uVar16 = ks->ks[4].deslong[0] ^ uVar10;
    uVar11 = uVar2 >> 4;
    uVar16 = *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar13 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar13 = ks->ks[3].deslong[0] ^ uVar16;
    uVar18 = uVar18 ^ uVar16;
    uVar11 = uVar18 >> 4;
    uVar10 = uVar10 ^ *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc) >> 2) * 4 + 0x100) ^
                      *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc00) >> 10) * 4 + 0x300) ^
                      *(uint *)(DES_SPtrans + (ulong)((uVar11 | uVar18 << 0x1c) >> 0x1a) * 4 + 0x700
                               ) ^
                      *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc0000) >> 0x12) * 4 + 0x500) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar7 = uVar7 ^ uVar10;
    uVar13 = ks->ks[2].deslong[0] ^ uVar10;
    uVar11 = uVar7 >> 4;
    uVar16 = *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 | uVar7 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar16 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar13 = ks->ks[1].deslong[0] ^ uVar16;
    uVar12 = uVar12 ^ uVar16;
    uVar11 = uVar12 >> 4;
    uVar10 = *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 | uVar12 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar10 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar13 = ks->ks[0].deslong[1] ^ uVar10;
    uVar15 = ks->ks[0].deslong[0] ^ uVar10;
    uVar11 = uVar13 >> 4;
    uVar11 = *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 | uVar13 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar16 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar15 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar15 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar15 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar15 >> 0x12 & 0x3f) * 4 + 0x400);
  }
  else {
    uVar17 = ks->ks[0].deslong[0] ^ uVar6;
    uVar14 = ks->ks[0].deslong[1] ^ uVar6;
    uVar1 = uVar14 >> 4;
    uVar1 = uVar5 ^ *(uint *)(DES_SPtrans + (ulong)(uVar17 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar17 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar17 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar17 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar1 | uVar14 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar1 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar1 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4 + 0x500);
    uVar12 = uVar12 ^ uVar1;
    uVar14 = ks->ks[1].deslong[0] ^ uVar1;
    uVar5 = uVar12 >> 4;
    uVar6 = uVar6 ^ *(uint *)(DES_SPtrans + (ulong)((uVar5 | uVar12 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar5 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar5 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar5 & 0xfc0000) >> 0x12) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar14 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar14 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar14 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar14 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar7 = uVar7 ^ uVar6;
    uVar5 = ks->ks[2].deslong[0] ^ uVar6;
    uVar12 = uVar7 >> 4;
    uVar5 = *(uint *)(DES_SPtrans + (ulong)((uVar12 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar12 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar12 | uVar7 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar12 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar1 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar12 = ks->ks[3].deslong[0] ^ uVar5;
    uVar18 = uVar18 ^ uVar5;
    uVar7 = uVar18 >> 4;
    uVar12 = *(uint *)(DES_SPtrans + (ulong)((uVar7 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar7 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar7 | uVar18 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar7 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar6 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar7 = ks->ks[4].deslong[0] ^ uVar12;
    uVar2 = uVar2 ^ uVar12;
    uVar18 = uVar2 >> 4;
    uVar18 = *(uint *)(DES_SPtrans + (ulong)((uVar18 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar18 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar18 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar18 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar5 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar7 = ks->ks[5].deslong[0] ^ uVar18;
    uVar8 = uVar8 ^ uVar18;
    uVar2 = uVar8 >> 4;
    uVar2 = *(uint *)(DES_SPtrans + (ulong)((uVar2 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 | uVar8 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar12 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar7 = ks->ks[6].deslong[0] ^ uVar2;
    uVar19 = uVar19 ^ uVar2;
    uVar8 = uVar19 >> 4;
    uVar18 = *(uint *)(DES_SPtrans + (ulong)((uVar8 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar8 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar8 | uVar19 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar8 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar18 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar8 = ks->ks[7].deslong[0] ^ uVar18;
    uVar3 = uVar3 ^ uVar18;
    uVar19 = uVar3 >> 4;
    uVar19 = *(uint *)(DES_SPtrans + (ulong)((uVar19 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar19 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar19 | uVar3 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar19 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar2 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar8 = ks->ks[8].deslong[0] ^ uVar19;
    uVar9 = uVar9 ^ uVar19;
    uVar3 = uVar9 >> 4;
    uVar3 = *(uint *)(DES_SPtrans + (ulong)((uVar3 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar3 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar3 | uVar9 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar3 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar18 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar8 = ks->ks[9].deslong[0] ^ uVar3;
    uVar20 = uVar20 ^ uVar3;
    uVar9 = uVar20 >> 4;
    uVar19 = *(uint *)(DES_SPtrans + (ulong)((uVar9 & 0xfc0000) >> 0x12) * 4 + 0x500) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar9 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar9 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar9 | uVar20 << 0x1c) >> 0x1a) * 4 + 0x700) ^ uVar19
             ^ *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar9 = ks->ks[10].deslong[0] ^ uVar19;
    uVar4 = uVar4 ^ uVar19;
    uVar20 = uVar4 >> 4;
    uVar20 = *(uint *)(DES_SPtrans + (ulong)((uVar20 & 0xfc0000) >> 0x12) * 4 + 0x500) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar20 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar20 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar20 | uVar4 << 0x1c) >> 0x1a) * 4 + 0x700) ^ uVar3
             ^ *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar10 = uVar10 ^ uVar20;
    uVar9 = ks->ks[0xb].deslong[0] ^ uVar20;
    uVar4 = uVar10 >> 4;
    uVar4 = *(uint *)(DES_SPtrans + (ulong)((uVar4 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar4 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar4 | uVar10 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar4 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar19 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar11 = uVar11 ^ uVar4;
    uVar10 = uVar11 >> 4;
    uVar9 = ks->ks[0xc].deslong[0] ^ uVar4;
    uVar10 = uVar20 ^ *(uint *)(DES_SPtrans + (ulong)((uVar10 & 0xfc) >> 2) * 4 + 0x100) ^
                      *(uint *)(DES_SPtrans + (ulong)((uVar10 & 0xfc00) >> 10) * 4 + 0x300) ^
                      *(uint *)(DES_SPtrans + (ulong)((uVar10 | uVar11 << 0x1c) >> 0x1a) * 4 + 0x700
                               ) ^
                      *(uint *)(DES_SPtrans + (ulong)((uVar10 & 0xfc0000) >> 0x12) * 4 + 0x500) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar16 = uVar16 ^ uVar10;
    uVar20 = ks->ks[0xd].deslong[0] ^ uVar10;
    uVar11 = uVar16 >> 4;
    uVar4 = *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar11 | uVar16 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar4 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar20 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar20 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar20 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar20 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar16 = ks->ks[0xe].deslong[0] ^ uVar4;
    uVar15 = uVar15 ^ uVar4;
    uVar11 = uVar15 >> 4;
    uVar10 = *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 | uVar15 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar10 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar13 = uVar13 ^ uVar10;
    uVar16 = ks->ks[0xf].deslong[0] ^ uVar10;
    uVar11 = uVar13 >> 4;
    uVar11 = *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 | uVar13 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar4 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 0x12 & 0x3f) * 4 + 0x400);
  }
  uVar16 = uVar11 >> 3 | uVar11 << 0x1d;
  uVar10 = uVar10 >> 3 | uVar10 << 0x1d;
  uVar11 = (uVar16 >> 1 ^ uVar10) & 0x55555555;
  uVar10 = uVar10 ^ uVar11;
  uVar16 = uVar11 * 2 ^ uVar16;
  uVar11 = (uVar10 >> 8 ^ uVar16) & 0xff00ff;
  uVar16 = uVar16 ^ uVar11;
  uVar10 = uVar11 << 8 ^ uVar10;
  uVar11 = (uVar16 >> 2 ^ uVar10) & 0x33333333;
  uVar10 = uVar10 ^ uVar11;
  uVar16 = uVar11 << 2 ^ uVar16;
  uVar11 = (uVar10 >> 0x10 ^ uVar16) & 0xffff;
  uVar16 = uVar16 ^ uVar11;
  uVar10 = uVar10 ^ uVar11 << 0x10;
  uVar11 = (uVar16 >> 4 ^ uVar10) & 0xf0f0f0f;
  *data = uVar10 ^ uVar11;
  data[1] = uVar11 << 4 ^ uVar16;
  return;
}



void DES_encrypt2(uint *data,DES_key_schedule *ks,int enc)

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
  
  uVar11 = *(uint *)((long)ks->ks + 100);
  uVar10 = *(uint *)((long)ks->ks + 0x5c);
  uVar16 = *(uint *)((long)ks->ks + 0x6c);
  uVar12 = *(uint *)((long)ks->ks + 0x7c);
  uVar15 = *(uint *)((long)ks->ks + 0x74);
  uVar5 = *(uint *)((long)ks->ks + 0x54);
  uVar20 = *(uint *)((long)ks->ks + 0x4c);
  uVar9 = *(uint *)((long)ks->ks + 0x44);
  uVar4 = *(uint *)((long)ks->ks + 0x3c);
  uVar19 = *(uint *)((long)ks->ks + 0x34);
  uVar8 = *(uint *)((long)ks->ks + 0x2c);
  uVar3 = *(uint *)((long)ks->ks + 0x24);
  uVar18 = *(uint *)((long)ks->ks + 0x1c);
  uVar7 = *(uint *)((long)ks->ks + 0x14);
  uVar6 = *data >> 0x1d | *data << 3;
  uVar14 = *(uint *)((long)ks->ks + 0xc);
  uVar1 = data[1] >> 0x1d | data[1] << 3;
  if (enc == 0) {
    uVar13 = ks->ks[0xf].deslong[0] ^ uVar6;
    uVar12 = uVar12 ^ uVar6;
    uVar2 = uVar12 >> 4;
    uVar1 = uVar1 ^ *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 | uVar12 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4 + 0x500);
    uVar15 = uVar15 ^ uVar1;
    uVar2 = ks->ks[0xe].deslong[0] ^ uVar1;
    uVar12 = uVar15 >> 4;
    uVar15 = *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x1a) * 4 + 0x600) ^
             uVar6 ^ *(uint *)(DES_SPtrans + (ulong)((uVar12 | uVar15 << 0x1c) >> 0x1a) * 4 + 0x700)
             ^ *(uint *)(DES_SPtrans + (ulong)((uVar12 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar12 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar12 & 0xfc0000) >> 0x12) * 4 + 0x500) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar16 = uVar16 ^ uVar15;
    uVar12 = uVar16 >> 4;
    uVar6 = ks->ks[0xd].deslong[0] ^ uVar15;
    uVar1 = *(uint *)(DES_SPtrans + (ulong)((uVar12 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar12 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar12 | uVar16 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar12 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar1 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar6 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar6 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar6 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar6 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar11 = uVar11 ^ uVar1;
    uVar16 = uVar11 >> 4;
    uVar12 = ks->ks[0xc].deslong[0] ^ uVar1;
    uVar16 = *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc0000) >> 0x12) * 4 + 0x500) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 | uVar11 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             uVar15 ^ *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar10 = uVar10 ^ uVar16;
    uVar12 = ks->ks[0xb].deslong[0] ^ uVar16;
    uVar11 = uVar10 >> 4;
    uVar10 = *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 | uVar10 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar1 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar5 = uVar5 ^ uVar10;
    uVar12 = ks->ks[10].deslong[0] ^ uVar10;
    uVar11 = uVar5 >> 4;
    uVar12 = *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 | uVar5 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar16 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar20 = uVar20 ^ uVar12;
    uVar11 = uVar20 >> 4;
    uVar16 = ks->ks[9].deslong[0] ^ uVar12;
    uVar16 = *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 | uVar20 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar10 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar9 = uVar9 ^ uVar16;
    uVar11 = uVar9 >> 4;
    uVar10 = ks->ks[8].deslong[0] ^ uVar16;
    uVar10 = *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 | uVar9 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar12 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar4 = uVar4 ^ uVar10;
    uVar11 = uVar4 >> 4;
    uVar12 = ks->ks[7].deslong[0] ^ uVar10;
    uVar15 = *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 | uVar4 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar16 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar19 = uVar19 ^ uVar15;
    uVar16 = ks->ks[6].deslong[0] ^ uVar15;
    uVar11 = uVar19 >> 4;
    uVar12 = *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 | uVar19 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar10 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar8 = uVar8 ^ uVar12;
    uVar10 = ks->ks[5].deslong[0] ^ uVar12;
    uVar11 = uVar8 >> 4;
    uVar10 = *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 | uVar8 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar15 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar3 = uVar3 ^ uVar10;
    uVar16 = ks->ks[4].deslong[0] ^ uVar10;
    uVar11 = uVar3 >> 4;
    uVar16 = *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 | uVar3 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar12 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar12 = ks->ks[3].deslong[0] ^ uVar16;
    uVar18 = uVar18 ^ uVar16;
    uVar11 = uVar18 >> 4;
    uVar10 = uVar10 ^ *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc) >> 2) * 4 + 0x100) ^
                      *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc00) >> 10) * 4 + 0x300) ^
                      *(uint *)(DES_SPtrans + (ulong)((uVar11 | uVar18 << 0x1c) >> 0x1a) * 4 + 0x700
                               ) ^
                      *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc0000) >> 0x12) * 4 + 0x500) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar7 = uVar7 ^ uVar10;
    uVar12 = ks->ks[2].deslong[0] ^ uVar10;
    uVar11 = uVar7 >> 4;
    uVar16 = *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 | uVar7 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar16 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar12 = ks->ks[1].deslong[0] ^ uVar16;
    uVar14 = uVar14 ^ uVar16;
    uVar11 = uVar14 >> 4;
    uVar10 = *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 | uVar14 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar10 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar12 = ks->ks[0].deslong[1] ^ uVar10;
    uVar15 = ks->ks[0].deslong[0] ^ uVar10;
    uVar11 = uVar12 >> 4;
    uVar11 = *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 | uVar12 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar16 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar15 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar15 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar15 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar15 >> 0x12 & 0x3f) * 4 + 0x400);
  }
  else {
    uVar17 = ks->ks[0].deslong[0] ^ uVar6;
    uVar13 = ks->ks[0].deslong[1] ^ uVar6;
    uVar2 = uVar13 >> 4;
    uVar2 = uVar1 ^ *(uint *)(DES_SPtrans + (ulong)(uVar17 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar17 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar17 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar17 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 | uVar13 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4 + 0x500);
    uVar14 = uVar14 ^ uVar2;
    uVar13 = ks->ks[1].deslong[0] ^ uVar2;
    uVar1 = uVar14 >> 4;
    uVar6 = uVar6 ^ *(uint *)(DES_SPtrans + (ulong)((uVar1 | uVar14 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar1 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar1 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar7 = uVar7 ^ uVar6;
    uVar1 = ks->ks[2].deslong[0] ^ uVar6;
    uVar14 = uVar7 >> 4;
    uVar1 = *(uint *)(DES_SPtrans + (ulong)((uVar14 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar14 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar14 | uVar7 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar14 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar2 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar14 = ks->ks[3].deslong[0] ^ uVar1;
    uVar18 = uVar18 ^ uVar1;
    uVar7 = uVar18 >> 4;
    uVar14 = *(uint *)(DES_SPtrans + (ulong)((uVar7 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar7 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar7 | uVar18 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar7 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar6 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar14 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar14 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar14 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar14 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar7 = ks->ks[4].deslong[0] ^ uVar14;
    uVar3 = uVar3 ^ uVar14;
    uVar18 = uVar3 >> 4;
    uVar18 = *(uint *)(DES_SPtrans + (ulong)((uVar18 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar18 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar18 | uVar3 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar18 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar1 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar7 = ks->ks[5].deslong[0] ^ uVar18;
    uVar8 = uVar8 ^ uVar18;
    uVar3 = uVar8 >> 4;
    uVar3 = *(uint *)(DES_SPtrans + (ulong)((uVar3 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar3 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar3 | uVar8 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar3 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar14 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar7 = ks->ks[6].deslong[0] ^ uVar3;
    uVar19 = uVar19 ^ uVar3;
    uVar8 = uVar19 >> 4;
    uVar18 = *(uint *)(DES_SPtrans + (ulong)((uVar8 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar8 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar8 | uVar19 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar8 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar18 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar8 = ks->ks[7].deslong[0] ^ uVar18;
    uVar4 = uVar4 ^ uVar18;
    uVar19 = uVar4 >> 4;
    uVar19 = *(uint *)(DES_SPtrans + (ulong)((uVar19 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar19 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar19 | uVar4 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar19 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar3 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar8 = ks->ks[8].deslong[0] ^ uVar19;
    uVar9 = uVar9 ^ uVar19;
    uVar4 = uVar9 >> 4;
    uVar4 = *(uint *)(DES_SPtrans + (ulong)((uVar4 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar4 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar4 | uVar9 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar4 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar18 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar8 = ks->ks[9].deslong[0] ^ uVar4;
    uVar20 = uVar20 ^ uVar4;
    uVar9 = uVar20 >> 4;
    uVar19 = *(uint *)(DES_SPtrans + (ulong)((uVar9 & 0xfc0000) >> 0x12) * 4 + 0x500) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar9 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar9 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar9 | uVar20 << 0x1c) >> 0x1a) * 4 + 0x700) ^ uVar19
             ^ *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar9 = ks->ks[10].deslong[0] ^ uVar19;
    uVar5 = uVar5 ^ uVar19;
    uVar20 = uVar5 >> 4;
    uVar20 = *(uint *)(DES_SPtrans + (ulong)((uVar20 & 0xfc0000) >> 0x12) * 4 + 0x500) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar20 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar20 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar20 | uVar5 << 0x1c) >> 0x1a) * 4 + 0x700) ^ uVar4
             ^ *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar10 = uVar10 ^ uVar20;
    uVar9 = ks->ks[0xb].deslong[0] ^ uVar20;
    uVar5 = uVar10 >> 4;
    uVar5 = *(uint *)(DES_SPtrans + (ulong)((uVar5 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar5 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar5 | uVar10 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar5 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar19 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar11 = uVar11 ^ uVar5;
    uVar10 = uVar11 >> 4;
    uVar9 = ks->ks[0xc].deslong[0] ^ uVar5;
    uVar10 = uVar20 ^ *(uint *)(DES_SPtrans + (ulong)((uVar10 & 0xfc) >> 2) * 4 + 0x100) ^
                      *(uint *)(DES_SPtrans + (ulong)((uVar10 & 0xfc00) >> 10) * 4 + 0x300) ^
                      *(uint *)(DES_SPtrans + (ulong)((uVar10 | uVar11 << 0x1c) >> 0x1a) * 4 + 0x700
                               ) ^
                      *(uint *)(DES_SPtrans + (ulong)((uVar10 & 0xfc0000) >> 0x12) * 4 + 0x500) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar16 = uVar16 ^ uVar10;
    uVar20 = ks->ks[0xd].deslong[0] ^ uVar10;
    uVar11 = uVar16 >> 4;
    uVar5 = *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar11 | uVar16 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar5 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar20 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar20 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar20 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar20 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar16 = ks->ks[0xe].deslong[0] ^ uVar5;
    uVar15 = uVar15 ^ uVar5;
    uVar11 = uVar15 >> 4;
    uVar10 = *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 | uVar15 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar10 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar12 = uVar12 ^ uVar10;
    uVar16 = ks->ks[0xf].deslong[0] ^ uVar10;
    uVar11 = uVar12 >> 4;
    uVar11 = *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 | uVar12 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar11 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar5 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar16 >> 0x12 & 0x3f) * 4 + 0x400);
  }
  *data = uVar10 >> 3 | uVar10 << 0x1d;
  data[1] = uVar11 >> 3 | uVar11 << 0x1d;
  return;
}



void DES_encrypt3(uint *data,DES_key_schedule *ks1,DES_key_schedule *ks2,DES_key_schedule *ks3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (data[1] >> 4 ^ *data) & 0xf0f0f0f;
  uVar1 = *data ^ uVar2;
  uVar3 = uVar2 << 4 ^ data[1];
  uVar2 = (uVar1 >> 0x10 ^ uVar3) & 0xffff;
  uVar3 = uVar3 ^ uVar2;
  uVar1 = uVar2 << 0x10 ^ uVar1;
  uVar2 = (uVar3 >> 2 ^ uVar1) & 0x33333333;
  uVar1 = uVar1 ^ uVar2;
  uVar3 = uVar2 << 2 ^ uVar3;
  uVar2 = (uVar1 >> 8 ^ uVar3) & 0xff00ff;
  uVar3 = uVar3 ^ uVar2;
  uVar1 = uVar1 ^ uVar2 << 8;
  uVar2 = (uVar3 >> 1 ^ uVar1) & 0x55555555;
  *data = uVar1 ^ uVar2;
  data[1] = uVar2 * 2 ^ uVar3;
  DES_encrypt2(data,ks1,1);
  DES_encrypt2(data,ks2,0);
  DES_encrypt2(data,ks3,1);
  uVar2 = (data[1] >> 1 ^ *data) & 0x55555555;
  uVar1 = *data ^ uVar2;
  uVar3 = uVar2 * 2 ^ data[1];
  uVar2 = (uVar1 >> 8 ^ uVar3) & 0xff00ff;
  uVar3 = uVar3 ^ uVar2;
  uVar1 = uVar2 << 8 ^ uVar1;
  uVar2 = (uVar3 >> 2 ^ uVar1) & 0x33333333;
  uVar1 = uVar1 ^ uVar2;
  uVar3 = uVar2 << 2 ^ uVar3;
  uVar2 = (uVar1 >> 0x10 ^ uVar3) & 0xffff;
  uVar3 = uVar3 ^ uVar2;
  uVar1 = uVar1 ^ uVar2 << 0x10;
  uVar2 = (uVar3 >> 4 ^ uVar1) & 0xf0f0f0f;
  *data = uVar1 ^ uVar2;
  data[1] = uVar2 << 4 ^ uVar3;
  return;
}



void DES_decrypt3(uint *data,DES_key_schedule *ks1,DES_key_schedule *ks2,DES_key_schedule *ks3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (data[1] >> 4 ^ *data) & 0xf0f0f0f;
  uVar1 = *data ^ uVar2;
  uVar3 = uVar2 << 4 ^ data[1];
  uVar2 = (uVar1 >> 0x10 ^ uVar3) & 0xffff;
  uVar3 = uVar3 ^ uVar2;
  uVar1 = uVar2 << 0x10 ^ uVar1;
  uVar2 = (uVar3 >> 2 ^ uVar1) & 0x33333333;
  uVar1 = uVar1 ^ uVar2;
  uVar3 = uVar2 << 2 ^ uVar3;
  uVar2 = (uVar1 >> 8 ^ uVar3) & 0xff00ff;
  uVar3 = uVar3 ^ uVar2;
  uVar1 = uVar1 ^ uVar2 << 8;
  uVar2 = (uVar3 >> 1 ^ uVar1) & 0x55555555;
  *data = uVar1 ^ uVar2;
  data[1] = uVar2 * 2 ^ uVar3;
  DES_encrypt2(data,ks3,0);
  DES_encrypt2(data,ks2,1);
  DES_encrypt2(data,ks1,0);
  uVar2 = (data[1] >> 1 ^ *data) & 0x55555555;
  uVar1 = *data ^ uVar2;
  uVar3 = uVar2 * 2 ^ data[1];
  uVar2 = (uVar1 >> 8 ^ uVar3) & 0xff00ff;
  uVar3 = uVar3 ^ uVar2;
  uVar1 = uVar2 << 8 ^ uVar1;
  uVar2 = (uVar3 >> 2 ^ uVar1) & 0x33333333;
  uVar1 = uVar1 ^ uVar2;
  uVar3 = uVar2 << 2 ^ uVar3;
  uVar2 = (uVar1 >> 0x10 ^ uVar3) & 0xffff;
  uVar3 = uVar3 ^ uVar2;
  uVar1 = uVar1 ^ uVar2 << 0x10;
  uVar2 = (uVar3 >> 4 ^ uVar1) & 0xf0f0f0f;
  *data = uVar1 ^ uVar2;
  data[1] = uVar2 << 4 ^ uVar3;
  return;
}



void DES_ncbc_encrypt(uchar *input,uchar *output,long length,DES_key_schedule *schedule,
                     DES_cblock *ivec,int enc)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  uchar *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  DES_cblock *pauVar13;
  DES_cblock *pauVar14;
  uint uVar15;
  long in_FS_OFFSET;
  DES_cblock auVar16;
  ulong *local_80;
  undefined8 local_48;
  long local_40;
  
  uVar10 = length - 8;
  auVar16 = *ivec;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = auVar16._4_4_;
  uVar15 = auVar16._0_4_;
  if (enc == 0) {
    local_80 = (ulong *)output;
    if (7 < length) {
      lVar2 = (uVar10 >> 3) * 8 + 8;
      local_80 = (ulong *)(output + lVar2);
      uVar8 = (ulong)auVar16 & 0xffffffff;
      pauVar13 = (DES_cblock *)input;
      uVar4 = uVar6;
      do {
        uVar15 = *(uint *)*pauVar13;
        uVar6 = *(uint *)(*pauVar13 + 4);
        local_48 = *pauVar13;
        puVar7 = (ulong *)((long)output + 8);
        pauVar13 = pauVar13 + 1;
        DES_encrypt1((uint *)&local_48,schedule,0);
        uVar4 = local_48._4_4_ ^ uVar4;
        uVar5 = (uint)local_48 ^ (uint)uVar8;
        *(ulong *)output =
             (((((((ulong)(uVar4 >> 0x18) << 8 | (ulong)(uVar4 >> 0x10 & 0xff)) << 8 |
                 (ulong)(uVar4 >> 8 & 0xff)) << 8 | (ulong)(uVar4 & 0xff)) << 8 |
               (ulong)(uVar5 >> 0x18)) << 8 | (ulong)(uVar5 >> 0x10 & 0xff)) << 8 |
             (ulong)(uVar5 >> 8 & 0xff)) << 8 | (ulong)(uVar5 & 0xff);
        uVar8 = (ulong)uVar15;
        output = (uchar *)puVar7;
        uVar4 = uVar6;
      } while (puVar7 != local_80);
      input = input + lVar2;
      uVar10 = length + -0x10 + (uVar10 >> 3) * -8;
    }
    uVar4 = uVar6;
    uVar5 = uVar15;
    if (uVar10 != 0xfffffffffffffff8) {
      uVar4 = *(uint *)(*(DES_cblock *)input + 4);
      uVar5 = *(uint *)*(DES_cblock *)input;
      local_48 = *(DES_cblock *)input;
      DES_encrypt1((uint *)&local_48,schedule,0);
      uVar6 = uVar6 ^ local_48._4_4_;
      uVar15 = uVar15 ^ (uint)local_48;
      puVar11 = (undefined1 *)((long)local_80 + uVar10 + 8);
      puVar12 = puVar11;
      switch(uVar10) {
      default:
        goto switchD_00102d17_default;
      case 0xfffffffffffffff9:
        goto switchD_00102d17_caseD_fffffff9;
      case 0xfffffffffffffffa:
        goto LAB_00102d55;
      case 0xfffffffffffffffb:
        goto switchD_00102d17_caseD_fffffffb;
      case 0xfffffffffffffffc:
        break;
      case 0xffffffffffffffff:
        puVar11 = puVar11 + -1;
        *puVar11 = (char)(uVar6 >> 0x10);
      case 0xfffffffffffffffe:
        puVar11 = puVar11 + -1;
        *puVar11 = (char)(uVar6 >> 8);
      case 0xfffffffffffffffd:
        puVar11[-1] = (char)uVar6;
        puVar11 = puVar11 + -1;
      }
      puVar12 = puVar11 + -1;
      puVar11[-1] = (char)(uVar15 >> 0x18);
switchD_00102d17_caseD_fffffffb:
      puVar11 = puVar12 + -1;
      puVar12[-1] = (char)(uVar15 >> 0x10);
LAB_00102d55:
      puVar12 = puVar11 + -1;
      puVar11[-1] = (char)(uVar15 >> 8);
switchD_00102d17_caseD_fffffff9:
      puVar12[-1] = (char)uVar15;
    }
switchD_00102d17_default:
    bVar3 = (byte)(uVar5 >> 8);
    goto LAB_00102d97;
  }
  if (-1 < (long)uVar10) {
    lVar2 = (uVar10 >> 3) * 8 + 8;
    puVar7 = (ulong *)input;
    pauVar13 = (DES_cblock *)output;
    local_48 = auVar16;
    do {
      uVar8 = *puVar7;
      pauVar14 = pauVar13 + 1;
      puVar7 = puVar7 + 1;
      local_48 = (DES_cblock)((ulong)local_48 ^ uVar8);
      DES_encrypt1((uint *)&local_48,schedule,1);
      uVar6 = local_48._4_4_;
      *pauVar13 = (DES_cblock)
                  ((((((((ulong)(uVar6 >> 0x18) << 8 | (ulong)(uVar6 >> 0x10 & 0xff)) << 8 |
                       (ulong)(uVar6 >> 8 & 0xff)) << 8 | (ulong)(uVar6 & 0xff)) << 8 |
                     (ulong)((uint)local_48 >> 0x18)) << 8 | (ulong)((uint)local_48 >> 0x10 & 0xff))
                    << 8 | (ulong)((uint)local_48 >> 8 & 0xff)) << 8 |
                  (ulong)((uint)local_48 & 0xff));
      pauVar13 = pauVar14;
    } while ((DES_cblock *)(output + lVar2) != pauVar14);
    input = input + lVar2;
    uVar10 = length + -0x10 + (uVar10 >> 3) * -8;
    output = output + lVar2;
    auVar16 = local_48;
  }
  uVar4 = uVar6;
  uVar5 = auVar16._0_4_;
  if (uVar10 == 0xfffffffffffffff8) goto switchD_00102d17_default;
  puVar9 = input + uVar10 + 8;
  switch(uVar10) {
  default:
    goto switchD_00102b5f_default;
  case 0xfffffffffffffff9:
    uVar15 = 0;
    goto LAB_00102e48;
  case 0xfffffffffffffffa:
    uVar15 = 0;
    goto LAB_00102e3b;
  case 0xfffffffffffffffb:
    uVar15 = 0;
    goto LAB_00102e2e;
  case 0xfffffffffffffffc:
    goto LAB_00102e23;
  case 0xfffffffffffffffd:
    uVar15 = 0;
    goto LAB_00102e17;
  case 0xfffffffffffffffe:
    uVar15 = 0;
    break;
  case 0xffffffffffffffff:
    pbVar1 = puVar9 + -1;
    puVar9 = puVar9 + -1;
    uVar15 = (uint)*pbVar1 << 0x10;
  }
  pbVar1 = puVar9 + -1;
  puVar9 = puVar9 + -1;
  uVar15 = (uint)*pbVar1 << 8 | uVar15;
LAB_00102e17:
  pbVar1 = puVar9 + -1;
  puVar9 = puVar9 + -1;
  uVar6 = (*pbVar1 | uVar15) ^ uVar6;
LAB_00102e23:
  pbVar1 = puVar9 + -1;
  puVar9 = puVar9 + -1;
  uVar15 = (uint)*pbVar1 << 0x18;
LAB_00102e2e:
  pbVar1 = puVar9 + -1;
  puVar9 = puVar9 + -1;
  uVar15 = (uint)*pbVar1 << 0x10 | uVar15;
LAB_00102e3b:
  uVar15 = (uint)puVar9[-1] << 8 | uVar15;
  puVar9 = puVar9 + -1;
LAB_00102e48:
  uVar15 = (puVar9[-1] | uVar15) ^ auVar16._0_4_;
  auVar16[4] = (char)uVar6;
  auVar16[5] = (char)(uVar6 >> 8);
  auVar16[6] = (char)(uVar6 >> 0x10);
  auVar16[7] = (char)(uVar6 >> 0x18);
  auVar16[0] = (char)uVar15;
  auVar16[1] = (char)(uVar15 >> 8);
  auVar16[2] = (char)(uVar15 >> 0x10);
  auVar16[3] = (char)(uVar15 >> 0x18);
switchD_00102b5f_default:
  local_48 = auVar16;
  DES_encrypt1((uint *)&local_48,schedule,1);
  bVar3 = local_48._1_1_;
  *(DES_cblock *)output = local_48;
  uVar5 = (uint)local_48;
  uVar4 = local_48._4_4_;
LAB_00102d97:
  *ivec = (DES_cblock)
          ((((((((ulong)(uVar4 >> 0x18) << 8 | (ulong)(uVar4 >> 0x10 & 0xff)) << 8 |
               (ulong)(uVar4 >> 8 & 0xff)) << 8 | (ulong)(uVar4 & 0xff)) << 8 |
             (ulong)(uVar5 >> 0x18)) << 8 | (ulong)(uVar5 >> 0x10 & 0xff)) << 8 | (ulong)bVar3) << 8
          | (ulong)(uVar5 & 0xff));
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void DES_ede3_cbc_encrypt
               (uchar *input,uchar *output,long length,DES_key_schedule *ks1,DES_key_schedule *ks2,
               DES_key_schedule *ks3,DES_cblock *ivec,int enc)

{
  byte *pbVar1;
  DES_cblock *pauVar2;
  byte bVar4;
  uint uVar3;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uchar *puVar8;
  uchar *puVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  long lVar15;
  byte bVar16;
  ulong *puVar17;
  uint uVar18;
  long in_FS_OFFSET;
  DES_cblock auVar19;
  undefined8 local_48;
  long local_40;
  
  uVar6 = length - 8;
  auVar19 = *ivec;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = auVar19._4_4_;
  uVar5 = auVar19._0_4_;
  if (enc == 0) {
    uVar12 = (ulong)auVar19 & 0xffffffff;
    if (7 < length) {
      lVar11 = (uVar6 >> 3) * 8 + 8;
      pauVar2 = (DES_cblock *)(input + lVar11);
      puVar17 = (ulong *)output;
      uVar5 = uVar7;
      do {
        uVar10 = *(uint *)*(DES_cblock *)input;
        uVar7 = *(uint *)(*(DES_cblock *)input + 4);
        local_48 = *(DES_cblock *)input;
        input = (uchar *)((long)input + 8);
        DES_decrypt3((uint *)&local_48,ks1,ks2,ks3);
        uVar5 = local_48._4_4_ ^ uVar5;
        uVar3 = (uint)local_48 ^ (uint)uVar12;
        *puVar17 = (((((((ulong)(uVar5 >> 0x18) << 8 | (ulong)(uVar5 >> 0x10 & 0xff)) << 8 |
                       (ulong)(uVar5 >> 8 & 0xff)) << 8 | (ulong)(uVar5 & 0xff)) << 8 |
                     (ulong)(uVar3 >> 0x18)) << 8 | (ulong)(uVar3 >> 0x10 & 0xff)) << 8 |
                   (ulong)(uVar3 >> 8 & 0xff)) << 8 | (ulong)(uVar3 & 0xff);
        uVar12 = (ulong)uVar10;
        puVar17 = puVar17 + 1;
        uVar5 = uVar7;
      } while ((DES_cblock *)input != pauVar2);
      uVar12 = (ulong)uVar10;
      output = output + lVar11;
      uVar6 = length + -0x10 + (uVar6 >> 3) * -8;
      input = (uchar *)pauVar2;
    }
    uVar10 = uVar7;
    if (uVar6 == 0xfffffffffffffff8) {
LAB_00103318:
      uVar14 = uVar12 & 0xff;
      uVar7 = uVar10 >> 0x10;
      bVar4 = (byte)(uVar12 >> 8);
      uVar3 = uVar10 >> 8 & 0xff;
      uVar6 = (ulong)(uVar10 & 0xff);
      bVar16 = (byte)(uVar12 >> 0x10);
      uVar18 = (uint)uVar12 >> 0x18;
      uVar10 = uVar10 >> 0x18;
      goto LAB_00103341;
    }
    uVar5 = *(uint *)*(DES_cblock *)input;
    uVar10 = *(uint *)(*(DES_cblock *)input + 4);
    local_48 = *(DES_cblock *)input;
    DES_decrypt3((uint *)&local_48,ks1,ks2,ks3);
    uVar3 = (uint)uVar12 ^ (uint)local_48;
    uVar7 = uVar7 ^ local_48._4_4_;
    puVar8 = output + uVar6 + 8;
    puVar9 = puVar8;
    switch(uVar6) {
    default:
switchD_001032c9_default:
      uVar12 = (ulong)uVar5;
      goto LAB_00103318;
    case 0xfffffffffffffff9:
      goto switchD_001032c9_caseD_fffffff9;
    case 0xfffffffffffffffa:
      goto LAB_00103301;
    case 0xfffffffffffffffb:
      goto switchD_001032c9_caseD_fffffffb;
    case 0xfffffffffffffffc:
      break;
    case 0xffffffffffffffff:
      puVar8 = puVar8 + -1;
      *puVar8 = (uchar)(uVar7 >> 0x10);
    case 0xfffffffffffffffe:
      puVar8[-1] = (uchar)(uVar7 >> 8);
      puVar8 = puVar8 + -1;
    case 0xfffffffffffffffd:
      puVar8[-1] = (uchar)uVar7;
      puVar8 = puVar8 + -1;
    }
    puVar9 = puVar8 + -1;
    puVar8[-1] = (uchar)(uVar3 >> 0x18);
switchD_001032c9_caseD_fffffffb:
    puVar8 = puVar9 + -1;
    puVar9[-1] = (uchar)(uVar3 >> 0x10);
LAB_00103301:
    puVar9 = puVar8 + -1;
    puVar8[-1] = (uchar)(uVar3 >> 8);
switchD_001032c9_caseD_fffffff9:
    puVar9[-1] = (uchar)uVar3;
    goto switchD_001032c9_default;
  }
  if (-1 < (long)uVar6) {
    lVar11 = (uVar6 >> 3) * 8 + 8;
    puVar17 = (ulong *)(input + lVar11);
    puVar13 = (ulong *)output;
    local_48 = auVar19;
    do {
      uVar12 = *(ulong *)input;
      input = (uchar *)((long)input + 8);
      local_48 = (DES_cblock)((ulong)local_48 ^ uVar12);
      DES_encrypt3((uint *)&local_48,ks1,ks2,ks3);
      uVar5 = local_48._0_4_;
      uVar7 = local_48._4_4_;
      *puVar13 = (((((((ulong)(uVar7 >> 0x18) << 8 | (ulong)(uVar7 >> 0x10 & 0xff)) << 8 |
                     (ulong)(uVar7 >> 8 & 0xff)) << 8 | (ulong)(uVar7 & 0xff)) << 8 |
                   (ulong)local_48 >> 0x18 & 0xff) << 8 | (ulong)local_48 >> 0x10 & 0xff) << 8 |
                 ((ulong)local_48 & 0xffffffff) >> 8 & 0xff) << 8 | (ulong)local_48 & 0xff;
      puVar13 = puVar13 + 1;
    } while (puVar17 != (ulong *)input);
    output = output + lVar11;
    uVar6 = length + -0x10 + (uVar6 >> 3) * -8;
    input = (uchar *)puVar17;
    auVar19 = local_48;
  }
  if (uVar6 == 0xfffffffffffffff8) {
    uVar14 = (ulong)(uVar5 & 0xff);
    bVar4 = (byte)(uVar5 >> 8);
    uVar18 = uVar5 >> 0x18;
    uVar3 = uVar7 >> 8 & 0xff;
    uVar6 = (ulong)(uVar7 & 0xff);
    uVar10 = uVar7 >> 0x18;
    bVar16 = (byte)(uVar5 >> 0x10);
    uVar7 = uVar7 >> 0x10;
    goto LAB_00103341;
  }
  lVar11 = (long)input + uVar6 + 8;
  switch(uVar6) {
  default:
    goto switchD_001030fd_default;
  case 0xfffffffffffffff9:
    uVar10 = 0;
    goto LAB_001033f8;
  case 0xfffffffffffffffa:
    uVar10 = 0;
    goto LAB_001033eb;
  case 0xfffffffffffffffb:
    uVar10 = 0;
    goto LAB_001033de;
  case 0xfffffffffffffffc:
    lVar15 = lVar11;
    goto LAB_001033d3;
  case 0xfffffffffffffffd:
    uVar10 = 0;
    goto LAB_001033c7;
  case 0xfffffffffffffffe:
    uVar10 = 0;
    break;
  case 0xffffffffffffffff:
    pbVar1 = (byte *)(lVar11 + -1);
    lVar11 = lVar11 + -1;
    uVar10 = (uint)*pbVar1 << 0x10;
  }
  pbVar1 = (byte *)(lVar11 + -1);
  lVar11 = lVar11 + -1;
  uVar10 = (uint)*pbVar1 << 8 | uVar10;
LAB_001033c7:
  uVar7 = (*(byte *)(lVar11 + -1) | uVar10) ^ uVar7;
  lVar15 = lVar11 + -1;
LAB_001033d3:
  lVar11 = lVar15 + -1;
  uVar10 = (uint)*(byte *)(lVar15 + -1) << 0x18;
LAB_001033de:
  pbVar1 = (byte *)(lVar11 + -1);
  lVar11 = lVar11 + -1;
  uVar10 = (uint)*pbVar1 << 0x10 | uVar10;
LAB_001033eb:
  uVar10 = (uint)*(byte *)(lVar11 + -1) << 8 | uVar10;
  lVar11 = lVar11 + -1;
LAB_001033f8:
  uVar5 = (*(byte *)(lVar11 + -1) | uVar10) ^ uVar5;
  auVar19[4] = (char)uVar7;
  auVar19[5] = (char)(uVar7 >> 8);
  auVar19[6] = (char)(uVar7 >> 0x10);
  auVar19[7] = (char)(uVar7 >> 0x18);
  auVar19[0] = (char)uVar5;
  auVar19[1] = (char)(uVar5 >> 8);
  auVar19[2] = (char)(uVar5 >> 0x10);
  auVar19[3] = (char)(uVar5 >> 0x18);
switchD_001030fd_default:
  local_48 = auVar19;
  DES_encrypt3((uint *)&local_48,ks1,ks2,ks3);
  uVar14 = (ulong)((uint)local_48 & 0xff);
  uVar7 = local_48._4_4_ >> 0x10;
  bVar4 = local_48._1_1_;
  uVar3 = local_48._4_4_ >> 8 & 0xff;
  uVar6 = (ulong)(local_48._4_4_ & 0xff);
  bVar16 = local_48._2_1_;
  uVar18 = (uint)local_48 >> 0x18;
  uVar10 = local_48._4_4_ >> 0x18;
  *(DES_cblock *)output = local_48;
LAB_00103341:
  *ivec = (DES_cblock)
          ((((((((ulong)uVar10 << 8 | (ulong)(uVar7 & 0xff)) << 8 | (ulong)uVar3) << 8 | uVar6) << 8
             | (ulong)uVar18) << 8 | (ulong)bVar16) << 8 | (ulong)bVar4) << 8 | uVar14);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


