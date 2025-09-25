void DES_encrypt1(uint *data, DES_key_schedule *ks, int enc) {
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
   uVar11 = *(uint*)( (long)ks.ks + 100 );
   uVar10 = *(uint*)( (long)ks.ks + 0x5c );
   uVar16 = *(uint*)( (long)ks.ks + 0x6c );
   uVar4 = ( data[1] >> 4 ^ *data ) & 0xf0f0f0f;
   uVar13 = *(uint*)( (long)ks.ks + 0x7c );
   uVar12 = *data ^ uVar4;
   uVar15 = *(uint*)( (long)ks.ks + 0x74 );
   uVar5 = uVar4 << 4 ^ data[1];
   uVar4 = ( uVar12 >> 0x10 ^ uVar5 ) & 0xffff;
   uVar5 = uVar5 ^ uVar4;
   uVar12 = uVar4 << 0x10 ^ uVar12;
   uVar4 = ( uVar5 >> 2 ^ uVar12 ) & 0x33333333;
   uVar12 = uVar12 ^ uVar4;
   uVar5 = uVar4 << 2 ^ uVar5;
   uVar4 = ( uVar12 >> 8 ^ uVar5 ) & 0xff00ff;
   uVar5 = uVar5 ^ uVar4;
   uVar12 = uVar4 << 8 ^ uVar12;
   uVar4 = ( uVar5 >> 1 ^ uVar12 ) & 0x55555555;
   uVar12 = uVar12 ^ uVar4;
   uVar5 = uVar4 * 2 ^ uVar5;
   uVar4 = *(uint*)( (long)ks.ks + 0x54 );
   uVar20 = *(uint*)( (long)ks.ks + 0x4c );
   uVar9 = *(uint*)( (long)ks.ks + 0x44 );
   uVar3 = *(uint*)( (long)ks.ks + 0x3c );
   uVar19 = *(uint*)( (long)ks.ks + 0x34 );
   uVar8 = *(uint*)( (long)ks.ks + 0x2c );
   uVar2 = *(uint*)( (long)ks.ks + 0x24 );
   uVar18 = *(uint*)( (long)ks.ks + 0x1c );
   uVar7 = *(uint*)( (long)ks.ks + 0x14 );
   uVar6 = uVar12 >> 0x1d | uVar12 << 3;
   uVar12 = *(uint*)( (long)ks.ks + 0xc );
   uVar5 = uVar5 >> 0x1d | uVar5 << 3;
   if (enc == 0) {
      uVar14 = ks.ks[0xf].deslong[0] ^ uVar6;
      uVar13 = uVar13 ^ uVar6;
      uVar1 = uVar13 >> 4;
      uVar5 = uVar5 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar14 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar14 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar14 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar14 >> 0x12 & 0x3f) * 4 + 0x400 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar1 | uVar13 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar1 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar1 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar1 & 0xfc0000 ) >> 0x12) * 4 + 0x500 );
      uVar15 = uVar15 ^ uVar5;
      uVar1 = ks.ks[0xe].deslong[0] ^ uVar5;
      uVar13 = uVar15 >> 4;
      uVar15 = *(uint*)( DES_SPtrans + ( ulong )(uVar1 >> 0x1a) * 4 + 0x600 ) ^ uVar6 ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar13 | uVar15 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar13 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar13 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar13 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar1 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar1 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar1 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar16 = uVar16 ^ uVar15;
      uVar13 = uVar16 >> 4;
      uVar6 = ks.ks[0xd].deslong[0] ^ uVar15;
      uVar5 = *(uint*)( DES_SPtrans + ( ulong )(( uVar13 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar13 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar13 | uVar16 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar13 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar5 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar6 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar6 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar6 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar6 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar11 = uVar11 ^ uVar5;
      uVar16 = uVar11 >> 4;
      uVar13 = ks.ks[0xc].deslong[0] ^ uVar5;
      uVar16 = *(uint*)( DES_SPtrans + ( ulong )(( uVar16 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar16 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar16 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar16 | uVar11 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ uVar15 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar10 = uVar10 ^ uVar16;
      uVar13 = ks.ks[0xb].deslong[0] ^ uVar16;
      uVar11 = uVar10 >> 4;
      uVar10 = *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 | uVar10 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar5 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar4 = uVar4 ^ uVar10;
      uVar13 = ks.ks[10].deslong[0] ^ uVar10;
      uVar11 = uVar4 >> 4;
      uVar13 = *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 | uVar4 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar16 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar20 = uVar20 ^ uVar13;
      uVar11 = uVar20 >> 4;
      uVar16 = ks.ks[9].deslong[0] ^ uVar13;
      uVar16 = *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 | uVar20 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar10 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar9 = uVar9 ^ uVar16;
      uVar11 = uVar9 >> 4;
      uVar10 = ks.ks[8].deslong[0] ^ uVar16;
      uVar10 = *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 | uVar9 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar13 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar10 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar10 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar10 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar10 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar3 = uVar3 ^ uVar10;
      uVar11 = uVar3 >> 4;
      uVar13 = ks.ks[7].deslong[0] ^ uVar10;
      uVar15 = *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 | uVar3 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar16 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar19 = uVar19 ^ uVar15;
      uVar16 = ks.ks[6].deslong[0] ^ uVar15;
      uVar11 = uVar19 >> 4;
      uVar13 = *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 | uVar19 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar10 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar8 = uVar8 ^ uVar13;
      uVar10 = ks.ks[5].deslong[0] ^ uVar13;
      uVar11 = uVar8 >> 4;
      uVar10 = *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 | uVar8 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar15 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar10 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar10 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar10 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar10 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar2 = uVar2 ^ uVar10;
      uVar16 = ks.ks[4].deslong[0] ^ uVar10;
      uVar11 = uVar2 >> 4;
      uVar16 = *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 | uVar2 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar13 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar13 = ks.ks[3].deslong[0] ^ uVar16;
      uVar18 = uVar18 ^ uVar16;
      uVar11 = uVar18 >> 4;
      uVar10 = uVar10 ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 | uVar18 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar7 = uVar7 ^ uVar10;
      uVar13 = ks.ks[2].deslong[0] ^ uVar10;
      uVar11 = uVar7 >> 4;
      uVar16 = *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 | uVar7 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar16 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar13 = ks.ks[1].deslong[0] ^ uVar16;
      uVar12 = uVar12 ^ uVar16;
      uVar11 = uVar12 >> 4;
      uVar10 = *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 | uVar12 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar10 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar13 = ks.ks[0].deslong[1] ^ uVar10;
      uVar15 = ks.ks[0].deslong[0] ^ uVar10;
      uVar11 = uVar13 >> 4;
      uVar11 = *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 | uVar13 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar16 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar15 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar15 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar15 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar15 >> 0x12 & 0x3f) * 4 + 0x400 );
   }
 else {
      uVar17 = ks.ks[0].deslong[0] ^ uVar6;
      uVar14 = ks.ks[0].deslong[1] ^ uVar6;
      uVar1 = uVar14 >> 4;
      uVar1 = uVar5 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar17 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar17 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar17 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar17 >> 0x12 & 0x3f) * 4 + 0x400 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar1 | uVar14 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar1 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar1 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar1 & 0xfc0000 ) >> 0x12) * 4 + 0x500 );
      uVar12 = uVar12 ^ uVar1;
      uVar14 = ks.ks[1].deslong[0] ^ uVar1;
      uVar5 = uVar12 >> 4;
      uVar6 = uVar6 ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar5 | uVar12 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar5 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar5 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar5 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar14 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar14 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar14 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar14 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar7 = uVar7 ^ uVar6;
      uVar5 = ks.ks[2].deslong[0] ^ uVar6;
      uVar12 = uVar7 >> 4;
      uVar5 = *(uint*)( DES_SPtrans + ( ulong )(( uVar12 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar12 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar12 | uVar7 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar12 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar1 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar5 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar5 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar5 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar5 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar12 = ks.ks[3].deslong[0] ^ uVar5;
      uVar18 = uVar18 ^ uVar5;
      uVar7 = uVar18 >> 4;
      uVar12 = *(uint*)( DES_SPtrans + ( ulong )(( uVar7 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar7 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar7 | uVar18 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar7 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar6 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar12 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar12 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar12 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar12 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar7 = ks.ks[4].deslong[0] ^ uVar12;
      uVar2 = uVar2 ^ uVar12;
      uVar18 = uVar2 >> 4;
      uVar18 = *(uint*)( DES_SPtrans + ( ulong )(( uVar18 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar18 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar18 | uVar2 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar18 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar5 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar7 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar7 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar7 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar7 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar7 = ks.ks[5].deslong[0] ^ uVar18;
      uVar8 = uVar8 ^ uVar18;
      uVar2 = uVar8 >> 4;
      uVar2 = *(uint*)( DES_SPtrans + ( ulong )(( uVar2 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar2 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar2 | uVar8 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar2 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar12 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar7 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar7 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar7 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar7 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar7 = ks.ks[6].deslong[0] ^ uVar2;
      uVar19 = uVar19 ^ uVar2;
      uVar8 = uVar19 >> 4;
      uVar18 = *(uint*)( DES_SPtrans + ( ulong )(( uVar8 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar8 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar8 | uVar19 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar8 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar18 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar7 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar7 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar7 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar7 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar8 = ks.ks[7].deslong[0] ^ uVar18;
      uVar3 = uVar3 ^ uVar18;
      uVar19 = uVar3 >> 4;
      uVar19 = *(uint*)( DES_SPtrans + ( ulong )(( uVar19 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar19 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar19 | uVar3 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar19 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar2 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar8 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar8 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar8 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar8 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar8 = ks.ks[8].deslong[0] ^ uVar19;
      uVar9 = uVar9 ^ uVar19;
      uVar3 = uVar9 >> 4;
      uVar3 = *(uint*)( DES_SPtrans + ( ulong )(( uVar3 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar3 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar3 | uVar9 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar3 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar18 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar8 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar8 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar8 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar8 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar8 = ks.ks[9].deslong[0] ^ uVar3;
      uVar20 = uVar20 ^ uVar3;
      uVar9 = uVar20 >> 4;
      uVar19 = *(uint*)( DES_SPtrans + ( ulong )(( uVar9 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar9 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar9 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar9 | uVar20 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ uVar19 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar8 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar8 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar8 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar8 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar9 = ks.ks[10].deslong[0] ^ uVar19;
      uVar4 = uVar4 ^ uVar19;
      uVar20 = uVar4 >> 4;
      uVar20 = *(uint*)( DES_SPtrans + ( ulong )(( uVar20 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar20 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar20 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar20 | uVar4 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ uVar3 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar9 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar9 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar9 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar9 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar10 = uVar10 ^ uVar20;
      uVar9 = ks.ks[0xb].deslong[0] ^ uVar20;
      uVar4 = uVar10 >> 4;
      uVar4 = *(uint*)( DES_SPtrans + ( ulong )(( uVar4 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar4 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar4 | uVar10 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar4 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar19 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar9 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar9 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar9 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar9 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar11 = uVar11 ^ uVar4;
      uVar10 = uVar11 >> 4;
      uVar9 = ks.ks[0xc].deslong[0] ^ uVar4;
      uVar10 = uVar20 ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar10 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar10 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar10 | uVar11 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar10 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar9 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar9 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar9 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar9 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar16 = uVar16 ^ uVar10;
      uVar20 = ks.ks[0xd].deslong[0] ^ uVar10;
      uVar11 = uVar16 >> 4;
      uVar4 = *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 | uVar16 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar4 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar20 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar20 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar20 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar20 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar16 = ks.ks[0xe].deslong[0] ^ uVar4;
      uVar15 = uVar15 ^ uVar4;
      uVar11 = uVar15 >> 4;
      uVar10 = *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 | uVar15 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar10 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar13 = uVar13 ^ uVar10;
      uVar16 = ks.ks[0xf].deslong[0] ^ uVar10;
      uVar11 = uVar13 >> 4;
      uVar11 = *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 | uVar13 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar4 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 0x12 & 0x3f) * 4 + 0x400 );
   }

   uVar16 = uVar11 >> 3 | uVar11 << 0x1d;
   uVar10 = uVar10 >> 3 | uVar10 << 0x1d;
   uVar11 = ( uVar16 >> 1 ^ uVar10 ) & 0x55555555;
   uVar10 = uVar10 ^ uVar11;
   uVar16 = uVar11 * 2 ^ uVar16;
   uVar11 = ( uVar10 >> 8 ^ uVar16 ) & 0xff00ff;
   uVar16 = uVar16 ^ uVar11;
   uVar10 = uVar11 << 8 ^ uVar10;
   uVar11 = ( uVar16 >> 2 ^ uVar10 ) & 0x33333333;
   uVar10 = uVar10 ^ uVar11;
   uVar16 = uVar11 << 2 ^ uVar16;
   uVar11 = ( uVar10 >> 0x10 ^ uVar16 ) & 0xffff;
   uVar16 = uVar16 ^ uVar11;
   uVar10 = uVar10 ^ uVar11 << 0x10;
   uVar11 = ( uVar16 >> 4 ^ uVar10 ) & 0xf0f0f0f;
   *data = uVar10 ^ uVar11;
   data[1] = uVar11 << 4 ^ uVar16;
   return;
}
void DES_encrypt2(uint *data, DES_key_schedule *ks, int enc) {
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
   uVar11 = *(uint*)( (long)ks.ks + 100 );
   uVar10 = *(uint*)( (long)ks.ks + 0x5c );
   uVar16 = *(uint*)( (long)ks.ks + 0x6c );
   uVar12 = *(uint*)( (long)ks.ks + 0x7c );
   uVar15 = *(uint*)( (long)ks.ks + 0x74 );
   uVar5 = *(uint*)( (long)ks.ks + 0x54 );
   uVar20 = *(uint*)( (long)ks.ks + 0x4c );
   uVar9 = *(uint*)( (long)ks.ks + 0x44 );
   uVar4 = *(uint*)( (long)ks.ks + 0x3c );
   uVar19 = *(uint*)( (long)ks.ks + 0x34 );
   uVar8 = *(uint*)( (long)ks.ks + 0x2c );
   uVar3 = *(uint*)( (long)ks.ks + 0x24 );
   uVar18 = *(uint*)( (long)ks.ks + 0x1c );
   uVar7 = *(uint*)( (long)ks.ks + 0x14 );
   uVar6 = *data >> 0x1d | *data << 3;
   uVar14 = *(uint*)( (long)ks.ks + 0xc );
   uVar1 = data[1] >> 0x1d | data[1] << 3;
   if (enc == 0) {
      uVar13 = ks.ks[0xf].deslong[0] ^ uVar6;
      uVar12 = uVar12 ^ uVar6;
      uVar2 = uVar12 >> 4;
      uVar1 = uVar1 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 0x12 & 0x3f) * 4 + 0x400 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar2 | uVar12 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar2 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar2 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar2 & 0xfc0000 ) >> 0x12) * 4 + 0x500 );
      uVar15 = uVar15 ^ uVar1;
      uVar2 = ks.ks[0xe].deslong[0] ^ uVar1;
      uVar12 = uVar15 >> 4;
      uVar15 = *(uint*)( DES_SPtrans + ( ulong )(uVar2 >> 0x1a) * 4 + 0x600 ) ^ uVar6 ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar12 | uVar15 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar12 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar12 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar12 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar2 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar2 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar2 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar16 = uVar16 ^ uVar15;
      uVar12 = uVar16 >> 4;
      uVar6 = ks.ks[0xd].deslong[0] ^ uVar15;
      uVar1 = *(uint*)( DES_SPtrans + ( ulong )(( uVar12 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar12 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar12 | uVar16 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar12 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar1 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar6 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar6 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar6 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar6 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar11 = uVar11 ^ uVar1;
      uVar16 = uVar11 >> 4;
      uVar12 = ks.ks[0xc].deslong[0] ^ uVar1;
      uVar16 = *(uint*)( DES_SPtrans + ( ulong )(( uVar16 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar16 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar16 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar16 | uVar11 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ uVar15 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar12 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar12 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar12 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar12 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar10 = uVar10 ^ uVar16;
      uVar12 = ks.ks[0xb].deslong[0] ^ uVar16;
      uVar11 = uVar10 >> 4;
      uVar10 = *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 | uVar10 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar1 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar12 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar12 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar12 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar12 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar5 = uVar5 ^ uVar10;
      uVar12 = ks.ks[10].deslong[0] ^ uVar10;
      uVar11 = uVar5 >> 4;
      uVar12 = *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 | uVar5 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar16 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar12 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar12 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar12 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar12 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar20 = uVar20 ^ uVar12;
      uVar11 = uVar20 >> 4;
      uVar16 = ks.ks[9].deslong[0] ^ uVar12;
      uVar16 = *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 | uVar20 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar10 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar9 = uVar9 ^ uVar16;
      uVar11 = uVar9 >> 4;
      uVar10 = ks.ks[8].deslong[0] ^ uVar16;
      uVar10 = *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 | uVar9 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar12 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar10 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar10 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar10 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar10 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar4 = uVar4 ^ uVar10;
      uVar11 = uVar4 >> 4;
      uVar12 = ks.ks[7].deslong[0] ^ uVar10;
      uVar15 = *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 | uVar4 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar16 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar12 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar12 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar12 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar12 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar19 = uVar19 ^ uVar15;
      uVar16 = ks.ks[6].deslong[0] ^ uVar15;
      uVar11 = uVar19 >> 4;
      uVar12 = *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 | uVar19 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar10 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar8 = uVar8 ^ uVar12;
      uVar10 = ks.ks[5].deslong[0] ^ uVar12;
      uVar11 = uVar8 >> 4;
      uVar10 = *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 | uVar8 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar15 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar10 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar10 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar10 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar10 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar3 = uVar3 ^ uVar10;
      uVar16 = ks.ks[4].deslong[0] ^ uVar10;
      uVar11 = uVar3 >> 4;
      uVar16 = *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 | uVar3 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar12 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar12 = ks.ks[3].deslong[0] ^ uVar16;
      uVar18 = uVar18 ^ uVar16;
      uVar11 = uVar18 >> 4;
      uVar10 = uVar10 ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 | uVar18 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar12 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar12 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar12 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar12 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar7 = uVar7 ^ uVar10;
      uVar12 = ks.ks[2].deslong[0] ^ uVar10;
      uVar11 = uVar7 >> 4;
      uVar16 = *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 | uVar7 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar16 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar12 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar12 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar12 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar12 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar12 = ks.ks[1].deslong[0] ^ uVar16;
      uVar14 = uVar14 ^ uVar16;
      uVar11 = uVar14 >> 4;
      uVar10 = *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 | uVar14 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar10 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar12 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar12 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar12 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar12 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar12 = ks.ks[0].deslong[1] ^ uVar10;
      uVar15 = ks.ks[0].deslong[0] ^ uVar10;
      uVar11 = uVar12 >> 4;
      uVar11 = *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 | uVar12 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar16 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar15 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar15 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar15 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar15 >> 0x12 & 0x3f) * 4 + 0x400 );
   }
 else {
      uVar17 = ks.ks[0].deslong[0] ^ uVar6;
      uVar13 = ks.ks[0].deslong[1] ^ uVar6;
      uVar2 = uVar13 >> 4;
      uVar2 = uVar1 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar17 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar17 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar17 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar17 >> 0x12 & 0x3f) * 4 + 0x400 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar2 | uVar13 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar2 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar2 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar2 & 0xfc0000 ) >> 0x12) * 4 + 0x500 );
      uVar14 = uVar14 ^ uVar2;
      uVar13 = ks.ks[1].deslong[0] ^ uVar2;
      uVar1 = uVar14 >> 4;
      uVar6 = uVar6 ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar1 | uVar14 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar1 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar1 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar1 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar13 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar7 = uVar7 ^ uVar6;
      uVar1 = ks.ks[2].deslong[0] ^ uVar6;
      uVar14 = uVar7 >> 4;
      uVar1 = *(uint*)( DES_SPtrans + ( ulong )(( uVar14 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar14 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar14 | uVar7 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar14 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar2 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar1 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar1 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar1 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar1 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar14 = ks.ks[3].deslong[0] ^ uVar1;
      uVar18 = uVar18 ^ uVar1;
      uVar7 = uVar18 >> 4;
      uVar14 = *(uint*)( DES_SPtrans + ( ulong )(( uVar7 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar7 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar7 | uVar18 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar7 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar6 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar14 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar14 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar14 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar14 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar7 = ks.ks[4].deslong[0] ^ uVar14;
      uVar3 = uVar3 ^ uVar14;
      uVar18 = uVar3 >> 4;
      uVar18 = *(uint*)( DES_SPtrans + ( ulong )(( uVar18 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar18 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar18 | uVar3 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar18 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar1 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar7 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar7 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar7 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar7 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar7 = ks.ks[5].deslong[0] ^ uVar18;
      uVar8 = uVar8 ^ uVar18;
      uVar3 = uVar8 >> 4;
      uVar3 = *(uint*)( DES_SPtrans + ( ulong )(( uVar3 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar3 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar3 | uVar8 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar3 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar14 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar7 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar7 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar7 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar7 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar7 = ks.ks[6].deslong[0] ^ uVar3;
      uVar19 = uVar19 ^ uVar3;
      uVar8 = uVar19 >> 4;
      uVar18 = *(uint*)( DES_SPtrans + ( ulong )(( uVar8 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar8 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar8 | uVar19 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar8 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar18 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar7 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar7 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar7 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar7 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar8 = ks.ks[7].deslong[0] ^ uVar18;
      uVar4 = uVar4 ^ uVar18;
      uVar19 = uVar4 >> 4;
      uVar19 = *(uint*)( DES_SPtrans + ( ulong )(( uVar19 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar19 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar19 | uVar4 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar19 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar3 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar8 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar8 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar8 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar8 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar8 = ks.ks[8].deslong[0] ^ uVar19;
      uVar9 = uVar9 ^ uVar19;
      uVar4 = uVar9 >> 4;
      uVar4 = *(uint*)( DES_SPtrans + ( ulong )(( uVar4 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar4 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar4 | uVar9 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar4 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar18 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar8 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar8 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar8 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar8 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar8 = ks.ks[9].deslong[0] ^ uVar4;
      uVar20 = uVar20 ^ uVar4;
      uVar9 = uVar20 >> 4;
      uVar19 = *(uint*)( DES_SPtrans + ( ulong )(( uVar9 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar9 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar9 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar9 | uVar20 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ uVar19 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar8 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar8 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar8 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar8 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar9 = ks.ks[10].deslong[0] ^ uVar19;
      uVar5 = uVar5 ^ uVar19;
      uVar20 = uVar5 >> 4;
      uVar20 = *(uint*)( DES_SPtrans + ( ulong )(( uVar20 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar20 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar20 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar20 | uVar5 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ uVar4 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar9 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar9 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar9 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar9 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar10 = uVar10 ^ uVar20;
      uVar9 = ks.ks[0xb].deslong[0] ^ uVar20;
      uVar5 = uVar10 >> 4;
      uVar5 = *(uint*)( DES_SPtrans + ( ulong )(( uVar5 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar5 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar5 | uVar10 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar5 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar19 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar9 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar9 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar9 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar9 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar11 = uVar11 ^ uVar5;
      uVar10 = uVar11 >> 4;
      uVar9 = ks.ks[0xc].deslong[0] ^ uVar5;
      uVar10 = uVar20 ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar10 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar10 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar10 | uVar11 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar10 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar9 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar9 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar9 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar9 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar16 = uVar16 ^ uVar10;
      uVar20 = ks.ks[0xd].deslong[0] ^ uVar10;
      uVar11 = uVar16 >> 4;
      uVar5 = *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 | uVar16 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar5 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar20 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar20 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar20 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar20 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar16 = ks.ks[0xe].deslong[0] ^ uVar5;
      uVar15 = uVar15 ^ uVar5;
      uVar11 = uVar15 >> 4;
      uVar10 = *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 | uVar15 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar10 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 0x12 & 0x3f) * 4 + 0x400 );
      uVar12 = uVar12 ^ uVar10;
      uVar16 = ks.ks[0xf].deslong[0] ^ uVar10;
      uVar11 = uVar12 >> 4;
      uVar11 = *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc ) >> 2) * 4 + 0x100 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc00 ) >> 10) * 4 + 0x300 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 | uVar12 << 0x1c ) >> 0x1a) * 4 + 0x700 ) ^ *(uint*)( DES_SPtrans + ( ulong )(( uVar11 & 0xfc0000 ) >> 0x12) * 4 + 0x500 ) ^ uVar5 ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 0x1a) * 4 + 0x600 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 2 & 0x3f) * 4 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 10 & 0x3f) * 4 + 0x200 ) ^ *(uint*)( DES_SPtrans + ( ulong )(uVar16 >> 0x12 & 0x3f) * 4 + 0x400 );
   }

   *data = uVar10 >> 3 | uVar10 << 0x1d;
   data[1] = uVar11 >> 3 | uVar11 << 0x1d;
   return;
}
void DES_encrypt3(uint *data, DES_key_schedule *ks1, DES_key_schedule *ks2, DES_key_schedule *ks3) {
   uint uVar1;
   uint uVar2;
   uint uVar3;
   uVar2 = ( data[1] >> 4 ^ *data ) & 0xf0f0f0f;
   uVar1 = *data ^ uVar2;
   uVar3 = uVar2 << 4 ^ data[1];
   uVar2 = ( uVar1 >> 0x10 ^ uVar3 ) & 0xffff;
   uVar3 = uVar3 ^ uVar2;
   uVar1 = uVar2 << 0x10 ^ uVar1;
   uVar2 = ( uVar3 >> 2 ^ uVar1 ) & 0x33333333;
   uVar1 = uVar1 ^ uVar2;
   uVar3 = uVar2 << 2 ^ uVar3;
   uVar2 = ( uVar1 >> 8 ^ uVar3 ) & 0xff00ff;
   uVar3 = uVar3 ^ uVar2;
   uVar1 = uVar1 ^ uVar2 << 8;
   uVar2 = ( uVar3 >> 1 ^ uVar1 ) & 0x55555555;
   *data = uVar1 ^ uVar2;
   data[1] = uVar2 * 2 ^ uVar3;
   DES_encrypt2(data, ks1, 1);
   DES_encrypt2(data, ks2, 0);
   DES_encrypt2(data, ks3, 1);
   uVar2 = ( data[1] >> 1 ^ *data ) & 0x55555555;
   uVar1 = *data ^ uVar2;
   uVar3 = uVar2 * 2 ^ data[1];
   uVar2 = ( uVar1 >> 8 ^ uVar3 ) & 0xff00ff;
   uVar3 = uVar3 ^ uVar2;
   uVar1 = uVar2 << 8 ^ uVar1;
   uVar2 = ( uVar3 >> 2 ^ uVar1 ) & 0x33333333;
   uVar1 = uVar1 ^ uVar2;
   uVar3 = uVar2 << 2 ^ uVar3;
   uVar2 = ( uVar1 >> 0x10 ^ uVar3 ) & 0xffff;
   uVar3 = uVar3 ^ uVar2;
   uVar1 = uVar1 ^ uVar2 << 0x10;
   uVar2 = ( uVar3 >> 4 ^ uVar1 ) & 0xf0f0f0f;
   *data = uVar1 ^ uVar2;
   data[1] = uVar2 << 4 ^ uVar3;
   return;
}
void DES_decrypt3(uint *data, DES_key_schedule *ks1, DES_key_schedule *ks2, DES_key_schedule *ks3) {
   uint uVar1;
   uint uVar2;
   uint uVar3;
   uVar2 = ( data[1] >> 4 ^ *data ) & 0xf0f0f0f;
   uVar1 = *data ^ uVar2;
   uVar3 = uVar2 << 4 ^ data[1];
   uVar2 = ( uVar1 >> 0x10 ^ uVar3 ) & 0xffff;
   uVar3 = uVar3 ^ uVar2;
   uVar1 = uVar2 << 0x10 ^ uVar1;
   uVar2 = ( uVar3 >> 2 ^ uVar1 ) & 0x33333333;
   uVar1 = uVar1 ^ uVar2;
   uVar3 = uVar2 << 2 ^ uVar3;
   uVar2 = ( uVar1 >> 8 ^ uVar3 ) & 0xff00ff;
   uVar3 = uVar3 ^ uVar2;
   uVar1 = uVar1 ^ uVar2 << 8;
   uVar2 = ( uVar3 >> 1 ^ uVar1 ) & 0x55555555;
   *data = uVar1 ^ uVar2;
   data[1] = uVar2 * 2 ^ uVar3;
   DES_encrypt2(data, ks3, 0);
   DES_encrypt2(data, ks2, 1);
   DES_encrypt2(data, ks1, 0);
   uVar2 = ( data[1] >> 1 ^ *data ) & 0x55555555;
   uVar1 = *data ^ uVar2;
   uVar3 = uVar2 * 2 ^ data[1];
   uVar2 = ( uVar1 >> 8 ^ uVar3 ) & 0xff00ff;
   uVar3 = uVar3 ^ uVar2;
   uVar1 = uVar2 << 8 ^ uVar1;
   uVar2 = ( uVar3 >> 2 ^ uVar1 ) & 0x33333333;
   uVar1 = uVar1 ^ uVar2;
   uVar3 = uVar2 << 2 ^ uVar3;
   uVar2 = ( uVar1 >> 0x10 ^ uVar3 ) & 0xffff;
   uVar3 = uVar3 ^ uVar2;
   uVar1 = uVar1 ^ uVar2 << 0x10;
   uVar2 = ( uVar3 >> 4 ^ uVar1 ) & 0xf0f0f0f;
   *data = uVar1 ^ uVar2;
   data[1] = uVar2 << 4 ^ uVar3;
   return;
}
void DES_ncbc_encrypt(uchar *input, uchar *output, long length, DES_key_schedule *schedule, DES_cblock *ivec, int enc) {
   byte *pbVar1;
   long lVar2;
   byte bVar6;
   ulong uVar3;
   undefined1 *puVar4;
   uchar *puVar5;
   uint uVar7;
   uint uVar8;
   undefined1 *puVar9;
   uchar *puVar10;
   uint uVar11;
   ulong uVar12;
   byte bVar13;
   long lVar14;
   uint uVar15;
   long lVar16;
   ulong *puVar17;
   DES_cblock *pauVar18;
   long in_FS_OFFSET;
   DES_cblock auVar19;
   ulong *local_88;
   DES_cblock *local_68;
   undefined8 local_48;
   long local_40;
   uVar3 = length - 8;
   auVar19 = *ivec;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar11 = auVar19._4_4_;
   if (enc == 0) {
      uVar12 = (ulong)auVar19 & 0xffffffff;
      local_88 = (ulong*)output;
      if (7 < length) {
         lVar2 = ( uVar3 >> 3 ) * 8 + 8;
         local_88 = (ulong*)( output + lVar2 );
         pauVar18 = (DES_cblock*)input;
         uVar7 = uVar11;
         do {
            uVar15 = *(uint*)*pauVar18;
            uVar11 = *(uint*)( *pauVar18 + 4 );
            local_48 = *pauVar18;
            puVar17 = (ulong*)( (long)output + 8 );
            pauVar18 = pauVar18 + 1;
            DES_encrypt1((uint*)&local_48, schedule, 0);
            uVar7 = local_48._4_4_ ^ uVar7;
            uVar8 = (uint)local_48 ^ (uint)uVar12;
            *(ulong*)output = ( ( ( ( ( ( ( ulong )(uVar7 >> 0x18) << 8 | ( ulong )(uVar7 >> 0x10 & 0xff) ) << 8 | ( ulong )(uVar7 >> 8 & 0xff) ) << 8 | ( ulong )(uVar7 & 0xff) ) << 8 | ( ulong )(uVar8 >> 0x18) ) << 8 | ( ulong )(uVar8 >> 0x10 & 0xff) ) << 8 | ( ulong )(uVar8 >> 8 & 0xff) ) << 8 | ( ulong )(uVar8 & 0xff);
            uVar12 = (ulong)uVar15;
            output = (uchar*)puVar17;
            uVar7 = uVar11;
         }
 while ( puVar17 != local_88 );
         uVar12 = (ulong)uVar15;
         lVar14 = ( uVar3 >> 3 ) * -8;
         lVar16 = length + -0x10;
         input = input + lVar2;
         length = lVar14 + uVar3;
         uVar3 = lVar16 + lVar14;
      }

      uVar7 = uVar11;
      if (uVar3 == 0xfffffffffffffff8) {
         LAB_00102d70:uVar15 = (uint)uVar12;
         uVar3 = uVar12 & 0xff;
         bVar6 = ( byte )(uVar12 >> 8);
         bVar13 = ( byte )(uVar12 >> 0x10);
         goto LAB_00102d9a;
      }

      uVar7 = *(uint*)( *(DES_cblock*)input + 4 );
      uVar15 = *(uint*)*(DES_cblock*)input;
      local_48 = *(DES_cblock*)input;
      DES_encrypt1((uint*)&local_48, schedule, 0);
      uVar8 = (uint)uVar12 ^ (uint)local_48;
      uVar11 = uVar11 ^ local_48._4_4_;
      puVar4 = (undefined1*)( (long)local_88 + uVar3 + 8 );
      switch (length) {
         default:
switchD_00102d1f_caseD_0:
      uVar12 = (ulong)uVar15;
      goto LAB_00102d70;
         case 1:
      goto switchD_00102d1f_caseD_1;
         case 2:
      puVar9 = puVar4;
      goto LAB_00102d57;
         case 3:
      goto switchD_00102d1f_caseD_3;
         case 4:
      puVar9 = puVar4;
      break;
         case 7:
      puVar4 = puVar4 + -1;
      *puVar4 = (char)(uVar11 >> 0x10);
         case 6:
      puVar4[-1] = (char)(uVar11 >> 8);
      puVar4 = puVar4 + -1;
         case 5:
      puVar4[-1] = (char)uVar11;
      puVar9 = puVar4 + -1;
      }

      puVar4 = puVar9 + -1;
      puVar9[-1] = (char)( uVar8 >> 0x18 );
      switchD_00102d1f_caseD_3:puVar4[-1] = (char)( uVar8 >> 0x10 );
      puVar9 = puVar4 + -1;
      LAB_00102d57:puVar4 = puVar9 + -1;
      puVar9[-1] = (char)( uVar8 >> 8 );
      switchD_00102d1f_caseD_1:puVar4[-1] = (char)uVar8;
      goto switchD_00102d1f_caseD_0;
   }

   local_68 = (DES_cblock*)output;
   if (-1 < (long)uVar3) {
      lVar2 = ( uVar3 >> 3 ) * 8 + 8;
      local_68 = (DES_cblock*)( output + lVar2 );
      puVar17 = (ulong*)input;
      local_48 = auVar19;
      do {
         uVar12 = *puVar17;
         pauVar18 = (DES_cblock*)( (long)output + 8 );
         puVar17 = puVar17 + 1;
         local_48 = ( DES_cblock )((ulong)local_48 ^ uVar12);
         DES_encrypt1((uint*)&local_48, schedule, 1);
         uVar11 = local_48._4_4_;
         *(ulong*)output = ( ( ( ( ( ( ( ulong )(uVar11 >> 0x18) << 8 | ( ulong )(uVar11 >> 0x10 & 0xff) ) << 8 | ( ulong )(uVar11 >> 8 & 0xff) ) << 8 | ( ulong )(uVar11 & 0xff) ) << 8 | ( ulong )((uint)local_48 >> 0x18) ) << 8 | ( ulong )((uint)local_48 >> 0x10 & 0xff) ) << 8 | ( ulong )((uint)local_48 >> 8 & 0xff) ) << 8 | ( ulong )((uint)local_48 & 0xff);
         output = (uchar*)pauVar18;
      }
 while ( pauVar18 != local_68 );
      lVar16 = ( uVar3 >> 3 ) * -8;
      input = input + lVar2;
      lVar2 = length + -0x10;
      length = lVar16 + uVar3;
      uVar3 = lVar2 + lVar16;
      auVar19 = local_48;
   }

   uVar15 = auVar19._0_4_;
   if (uVar3 == 0xfffffffffffffff8) {
      uVar3 = ( ulong )(uVar15 & 0xff);
      bVar6 = auVar19[1];
      bVar13 = auVar19[2];
      uVar7 = uVar11;
      goto LAB_00102d9a;
   }

   puVar5 = input + uVar3 + 8;
   switch (length) {
      default:
    goto switchD_00102b6c_caseD_0;
      case 1:
    uVar7 = 0;
    goto LAB_00102e50;
      case 2:
    uVar7 = 0;
    puVar10 = puVar5;
    goto LAB_00102e43;
      case 3:
    uVar7 = 0;
    goto LAB_00102e36;
      case 4:
    goto LAB_00102e2b;
      case 5:
    uVar7 = 0;
    goto LAB_00102e1f;
      case 6:
    uVar7 = 0;
    break;
      case 7:
    pbVar1 = puVar5 + -1;
    puVar5 = puVar5 + -1;
    uVar7 = (uint)*pbVar1 << 0x10;
   }

   pbVar1 = puVar5 + -1;
   puVar5 = puVar5 + -1;
   uVar7 = ( uint ) * pbVar1 << 8 | uVar7;
   LAB_00102e1f:pbVar1 = puVar5 + -1;
   puVar5 = puVar5 + -1;
   uVar11 = ( *pbVar1 | uVar7 ) ^ uVar11;
   LAB_00102e2b:pbVar1 = puVar5 + -1;
   puVar5 = puVar5 + -1;
   uVar7 = ( uint ) * pbVar1 << 0x18;
   LAB_00102e36:uVar7 = (uint)puVar5[-1] << 0x10 | uVar7;
   puVar10 = puVar5 + -1;
   LAB_00102e43:puVar5 = puVar10 + -1;
   uVar7 = (uint)puVar10[-1] << 8 | uVar7;
   LAB_00102e50:uVar15 = ( puVar5[-1] | uVar7 ) ^ uVar15;
   auVar19[4] = (char)uVar11;
   for (int i = 0; i < 3; i++) {
      auVar19[( i + 5 )] = (char)( uVar11 >> ( 8*i + 8 ) );
   }

   auVar19[0] = (char)uVar15;
   for (int i = 0; i < 3; i++) {
      auVar19[( i + 1 )] = (char)( uVar15 >> ( 8*i + 8 ) );
   }

   switchD_00102b6c_caseD_0:local_48 = auVar19;
   DES_encrypt1((uint*)&local_48, schedule, 1);
   uVar3 = ( ulong )((uint)local_48 & 0xff);
   bVar13 = local_48._2_1_;
   bVar6 = local_48._1_1_;
   *local_68 = local_48;
   uVar7 = local_48._4_4_;
   uVar15 = (uint)local_48;
   LAB_00102d9a:*ivec = ( DES_cblock )(( ( ( ( ( ( ( ulong )(uVar7 >> 0x18) << 8 | ( ulong )(uVar7 >> 0x10 & 0xff) ) << 8 | ( ulong )(uVar7 >> 8 & 0xff) ) << 8 | ( ulong )(uVar7 & 0xff) ) << 8 | ( ulong )(uVar15 >> 0x18) ) << 8 | (ulong)bVar13 ) << 8 | (ulong)bVar6 ) << 8 | uVar3);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void DES_ede3_cbc_encrypt(uchar *input, uchar *output, long length, DES_key_schedule *ks1, DES_key_schedule *ks2, DES_key_schedule *ks3, DES_cblock *ivec, int enc) {
   byte *pbVar1;
   DES_cblock *pauVar2;
   byte bVar4;
   uint uVar3;
   uint uVar5;
   uchar *puVar6;
   uchar *puVar7;
   ulong uVar8;
   long lVar9;
   uint uVar10;
   ulong uVar11;
   ulong *puVar12;
   ulong uVar13;
   byte bVar14;
   long lVar15;
   long lVar16;
   ulong *puVar17;
   uint uVar18;
   long in_FS_OFFSET;
   DES_cblock auVar19;
   undefined8 local_48;
   long local_40;
   uVar8 = length - 8;
   auVar19 = *ivec;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar5 = auVar19._4_4_;
   if (enc == 0) {
      uVar11 = (ulong)auVar19 & 0xffffffff;
      if (7 < length) {
         lVar9 = ( uVar8 >> 3 ) * 8 + 8;
         pauVar2 = (DES_cblock*)( input + lVar9 );
         puVar17 = (ulong*)output;
         uVar10 = uVar5;
         do {
            uVar3 = *(uint*)*(DES_cblock*)input;
            uVar5 = *(uint*)( *(DES_cblock*)input + 4 );
            local_48 = *(DES_cblock*)input;
            input = (uchar*)( (long)input + 8 );
            DES_decrypt3((uint*)&local_48, ks1, ks2, ks3);
            uVar10 = local_48._4_4_ ^ uVar10;
            uVar18 = (uint)local_48 ^ (uint)uVar11;
            *puVar17 = ( ( ( ( ( ( ( ulong )(uVar10 >> 0x18) << 8 | ( ulong )(uVar10 >> 0x10 & 0xff) ) << 8 | ( ulong )(uVar10 >> 8 & 0xff) ) << 8 | ( ulong )(uVar10 & 0xff) ) << 8 | ( ulong )(uVar18 >> 0x18) ) << 8 | ( ulong )(uVar18 >> 0x10 & 0xff) ) << 8 | ( ulong )(uVar18 >> 8 & 0xff) ) << 8 | ( ulong )(uVar18 & 0xff);
            uVar11 = (ulong)uVar3;
            puVar17 = puVar17 + 1;
            uVar10 = uVar5;
         }
 while ( (DES_cblock*)input != pauVar2 );
         uVar11 = (ulong)uVar3;
         lVar15 = ( uVar8 >> 3 ) * -8;
         lVar16 = length + -0x10;
         output = output + lVar9;
         length = lVar15 + uVar8;
         input = (uchar*)pauVar2;
         uVar8 = lVar16 + lVar15;
      }

      uVar10 = uVar5;
      if (uVar8 == 0xfffffffffffffff8) {
         LAB_00103388:uVar8 = uVar11 & 0xff;
         uVar5 = uVar10 >> 0x10;
         bVar4 = ( byte )(uVar11 >> 8);
         uVar3 = uVar10 >> 8 & 0xff;
         uVar13 = ( ulong )(uVar10 & 0xff);
         bVar14 = ( byte )(uVar11 >> 0x10);
         uVar18 = (uint)uVar11 >> 0x18;
         uVar10 = uVar10 >> 0x18;
         goto LAB_001033b1;
      }

      uVar3 = *(uint*)*(DES_cblock*)input;
      uVar10 = *(uint*)( *(DES_cblock*)input + 4 );
      local_48 = *(DES_cblock*)input;
      DES_decrypt3((uint*)&local_48, ks1, ks2, ks3);
      uVar18 = (uint)uVar11 ^ (uint)local_48;
      uVar5 = uVar5 ^ local_48._4_4_;
      puVar6 = output + uVar8 + 8;
      puVar7 = puVar6;
      switch (length) {
         default:
switchD_0010333a_caseD_0:
      uVar11 = (ulong)uVar3;
      goto LAB_00103388;
         case 1:
      goto switchD_0010333a_caseD_1;
         case 2:
      goto LAB_00103370;
         case 3:
      goto switchD_0010333a_caseD_3;
         case 4:
      break;
         case 7:
      puVar6 = puVar6 + -1;
      *puVar6 = (uchar)(uVar5 >> 0x10);
         case 6:
      puVar6[-1] = (uchar)(uVar5 >> 8);
      puVar6 = puVar6 + -1;
         case 5:
      puVar6[-1] = (uchar)uVar5;
      puVar6 = puVar6 + -1;
      }

      puVar7 = puVar6 + -1;
      puVar6[-1] = ( uchar )(uVar18 >> 0x18);
      switchD_0010333a_caseD_3:puVar6 = puVar7 + -1;
      puVar7[-1] = ( uchar )(uVar18 >> 0x10);
      LAB_00103370:puVar7 = puVar6 + -1;
      puVar6[-1] = ( uchar )(uVar18 >> 8);
      switchD_0010333a_caseD_1:puVar7[-1] = (uchar)uVar18;
      goto switchD_0010333a_caseD_0;
   }

   if (-1 < (long)uVar8) {
      lVar9 = ( uVar8 >> 3 ) * 8 + 8;
      puVar17 = (ulong*)( input + lVar9 );
      puVar12 = (ulong*)output;
      local_48 = auVar19;
      do {
         uVar11 = *(ulong*)input;
         input = (uchar*)( (long)input + 8 );
         local_48 = ( DES_cblock )((ulong)local_48 ^ uVar11);
         DES_encrypt3((uint*)&local_48, ks1, ks2, ks3);
         uVar5 = local_48._4_4_;
         *puVar12 = ( ( ( ( ( ( ( ulong )(uVar5 >> 0x18) << 8 | ( ulong )(uVar5 >> 0x10 & 0xff) ) << 8 | ( ulong )(uVar5 >> 8 & 0xff) ) << 8 | ( ulong )(uVar5 & 0xff) ) << 8 | (ulong)local_48 >> 0x18 & 0xff ) << 8 | (ulong)local_48 >> 0x10 & 0xff ) << 8 | ( (ulong)local_48 & 0xffffffff ) >> 8 & 0xff ) << 8 | (ulong)local_48 & 0xff;
         puVar12 = puVar12 + 1;
      }
 while ( (ulong*)input != puVar17 );
      lVar15 = ( uVar8 >> 3 ) * -8;
      lVar16 = length + -0x10;
      output = output + lVar9;
      length = lVar15 + uVar8;
      uVar8 = lVar16 + lVar15;
      input = (uchar*)puVar17;
      auVar19 = local_48;
   }

   if (uVar8 == 0xfffffffffffffff8) {
      uVar8 = (ulong)auVar19 & 0xff;
      uVar18 = auVar19._0_4_ >> 0x18;
      bVar4 = ( byte )(( (ulong)auVar19 & 0xffffffff ) >> 8);
      uVar3 = uVar5 >> 8 & 0xff;
      bVar14 = ( byte )(( (ulong)auVar19 & 0xffffffff ) >> 0x10);
      uVar13 = ( ulong )(uVar5 & 0xff);
      uVar10 = uVar5 >> 0x18;
      uVar5 = uVar5 >> 0x10;
      goto LAB_001033b1;
   }

   lVar9 = (long)input + uVar8 + 8;
   switch (length) {
      default:
    goto switchD_00103144_caseD_0;
      case 1:
    uVar10 = 0;
    goto LAB_0010346b;
      case 2:
    uVar10 = 0;
    goto LAB_0010345e;
      case 3:
    uVar10 = 0;
    goto LAB_00103450;
      case 4:
    lVar16 = lVar9;
    goto LAB_00103443;
      case 5:
    uVar10 = 0;
    goto LAB_00103437;
      case 6:
    uVar10 = 0;
    break;
      case 7:
    pbVar1 = (byte *)(lVar9 + -1);
    lVar9 = lVar9 + -1;
    uVar10 = (uint)*pbVar1 << 0x10;
   }

   pbVar1 = (byte*)( lVar9 + -1 );
   lVar9 = lVar9 + -1;
   uVar10 = ( uint ) * pbVar1 << 8 | uVar10;
   LAB_00103437:uVar5 = ( *(byte*)( lVar9 + -1 ) | uVar10 ) ^ uVar5;
   lVar16 = lVar9 + -1;
   LAB_00103443:lVar9 = lVar16 + -1;
   uVar10 = ( uint ) * (byte*)( lVar16 + -1 ) << 0x18;
   LAB_00103450:pbVar1 = (byte*)( lVar9 + -1 );
   lVar9 = lVar9 + -1;
   uVar10 = ( uint ) * pbVar1 << 0x10 | uVar10;
   LAB_0010345e:uVar10 = ( uint ) * (byte*)( lVar9 + -1 ) << 8 | uVar10;
   lVar9 = lVar9 + -1;
   LAB_0010346b:uVar10 = ( *(byte*)( lVar9 + -1 ) | uVar10 ) ^ auVar19._0_4_;
   auVar19[4] = (char)uVar5;
   for (int i = 0; i < 3; i++) {
      auVar19[( i + 5 )] = (char)( uVar5 >> ( 8*i + 8 ) );
   }

   auVar19[0] = (char)uVar10;
   for (int i = 0; i < 3; i++) {
      auVar19[( i + 1 )] = (char)( uVar10 >> ( 8*i + 8 ) );
   }

   switchD_00103144_caseD_0:local_48 = auVar19;
   DES_encrypt3((uint*)&local_48, ks1, ks2, ks3);
   uVar8 = ( ulong )((uint)local_48 & 0xff);
   uVar5 = local_48._4_4_ >> 0x10;
   bVar4 = local_48._1_1_;
   uVar3 = local_48._4_4_ >> 8 & 0xff;
   uVar13 = ( ulong )(local_48._4_4_ & 0xff);
   bVar14 = local_48._2_1_;
   uVar18 = (uint)local_48 >> 0x18;
   uVar10 = local_48._4_4_ >> 0x18;
   *(DES_cblock*)output = local_48;
   LAB_001033b1:*ivec = ( DES_cblock )(( ( ( ( ( ( (ulong)uVar10 << 8 | ( ulong )(uVar5 & 0xff) ) << 8 | (ulong)uVar3 ) << 8 | uVar13 ) << 8 | (ulong)uVar18 ) << 8 | (ulong)bVar14 ) << 8 | (ulong)bVar4 ) << 8 | uVar8);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}

