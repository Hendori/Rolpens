void mbedtls_sha256_init(undefined8 *param_1) {
   ulong uVar1;
   undefined8 *puVar2;
   *param_1 = 0;
   *(undefined8*)( (long)param_1 + 100 ) = 0;
   puVar2 = (undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
   for (uVar1 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 ) ) + 0x6cU >> 3); uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
   }

   return;
}
void mbedtls_sha256_free(long param_1) {
   if (param_1 != 0) {
      mbedtls_platform_zeroize(param_1, 0x6c);
      return;
   }

   return;
}
void mbedtls_sha256_clone(undefined8 *param_1, undefined8 *param_2) {
   undefined8 uVar1;
   uVar1 = param_2[1];
   *param_1 = *param_2;
   param_1[1] = uVar1;
   for (int i = 0; i < 5; i++) {
      uVar1 = param_2[( 2*i + 3 )];
      param_1[( 2*i + 2 )] = param_2[( 2*i + 2 )];
      param_1[( 2*i + 3 )] = uVar1;
   }

   uVar1 = *(undefined8*)( (long)param_2 + 100 );
   *(undefined8*)( (long)param_1 + 0x5c ) = *(undefined8*)( (long)param_2 + 0x5c );
   *(undefined8*)( (long)param_1 + 100 ) = uVar1;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 mbedtls_sha256_starts(long param_1, uint param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   if (1 < param_2) {
      return 0xffffff8c;
   }

   uVar1 = __LC0;
   uVar2 = _UNK_001017e8;
   uVar3 = __LC1;
   uVar4 = _UNK_001017f8;
   if (param_2 != 0) {
      uVar1 = __LC2;
      uVar2 = _UNK_00101808;
      uVar3 = __LC3;
      uVar4 = _UNK_00101818;
   }

   *(undefined8*)( param_1 + 0x40 ) = 0;
   *(uint*)( param_1 + 0x68 ) = param_2;
   *(undefined8*)( param_1 + 0x48 ) = uVar3;
   *(undefined8*)( param_1 + 0x50 ) = uVar4;
   *(undefined8*)( param_1 + 0x58 ) = uVar1;
   *(undefined8*)( param_1 + 0x60 ) = uVar2;
   return 0;
}
undefined8 mbedtls_internal_sha256_process(long param_1, long param_2) {
   uint uVar1;
   uint uVar2;
   uint uVar3;
   uint uVar4;
   undefined1 auVar5[16];
   undefined8 uVar6;
   uint uVar7;
   long lVar8;
   uint uVar9;
   int iVar10;
   uint uVar11;
   int iVar12;
   uint uVar13;
   uint uVar14;
   uint uVar15;
   uint uVar16;
   uint uVar17;
   uint uVar18;
   int *piVar19;
   uint uVar20;
   undefined4 *puVar21;
   undefined4 *puVar22;
   uint uVar23;
   int *piVar24;
   int *piVar25;
   long in_FS_OFFSET;
   uint local_1e0;
   uint local_1d4;
   uint local_1d0;
   uint local_1cc;
   uint local_1c8;
   uint local_1c4;
   uint local_1c0;
   uint local_1bc;
   uint local_1b8;
   uint local_1b4;
   uint local_1b0;
   uint local_1ac;
   uint local_1a8;
   uint local_1a4;
   uint local_18c;
   uint local_188;
   int local_168;
   int local_164;
   uint local_160[16];
   uint local_120[45];
   undefined8 uStack_6c;
   uint uStack_64;
   uint local_60;
   uint uStack_5c;
   uint uStack_58;
   uint uStack_54;
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_50 = *(undefined8*)( param_1 + 0x58 );
   uVar6 = *(undefined8*)( param_1 + 0x60 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar8 = 0;
   local_60 = ( uint ) * (undefined8*)( param_1 + 0x48 );
   uStack_5c = ( uint )(( ulong ) * (undefined8*)( param_1 + 0x48 ) >> 0x20);
   uStack_58 = ( uint ) * (undefined8*)( param_1 + 0x50 );
   uStack_54 = ( uint )(( ulong ) * (undefined8*)( param_1 + 0x50 ) >> 0x20);
   uStack_48 = uVar6;
   do {
      uVar7 = *(uint*)( param_2 + lVar8 );
      *(uint*)( (long)local_160 + lVar8 ) = uVar7 >> 0x18 | ( uVar7 & 0xff0000 ) >> 8 | ( uVar7 & 0xff00 ) << 8 | uVar7 << 0x18;
      lVar8 = lVar8 + 4;
   }
 while ( lVar8 != 0x40 );
   uStack_48._4_4_ = ( uint )((ulong)uVar6 >> 0x20);
   uStack_48._0_4_ = (uint)uVar6;
   local_50._4_4_ = ( uint )((ulong)local_50 >> 0x20);
   piVar19 = &local_168;
   piVar24 = &K;
   do {
      iVar12 = ( ( (uint)local_50 >> 6 | (uint)local_50 << 0x1a ) ^ ( (uint)local_50 >> 0xb | (uint)local_50 << 0x15 ) ^ ( (uint)local_50 << 7 | (uint)local_50 >> 0x19 ) ) + piVar19[2] + *piVar24 + ( ( (uint)uStack_48 ^ local_50._4_4_ ) & (uint)local_50 ^ (uint)uStack_48 ) + uStack_48._4_4_;
      uStack_54 = iVar12 + uStack_54;
      uStack_48._4_4_ = ( ( local_60 >> 2 | local_60 << 0x1e ) ^ ( local_60 >> 0xd | local_60 << 0x13 ) ^ ( local_60 << 10 | local_60 >> 0x16 ) ) + iVar12 + ( ( local_60 | uStack_5c ) & uStack_58 | local_60 & uStack_5c );
      iVar12 = piVar19[3] + piVar24[1] + (uint)uStack_48 + ( ( (uint)local_50 ^ local_50._4_4_ ) & uStack_54 ^ local_50._4_4_ ) + ( ( uStack_54 >> 6 | uStack_54 * 0x4000000 ) ^ ( uStack_54 >> 0xb | uStack_54 * 0x200000 ) ^ ( uStack_54 * 0x80 | uStack_54 >> 0x19 ) );
      uStack_58 = iVar12 + uStack_58;
      uStack_48._0_4_ = ( ( uStack_48._4_4_ >> 2 | uStack_48._4_4_ * 0x40000000 ) ^ ( uStack_48._4_4_ >> 0xd | uStack_48._4_4_ * 0x80000 ) ^ ( uStack_48._4_4_ * 0x400 | uStack_48._4_4_ >> 0x16 ) ) + iVar12 + ( ( uStack_48._4_4_ | local_60 ) & uStack_5c | uStack_48._4_4_ & local_60 );
      iVar12 = piVar19[4] + piVar24[2] + local_50._4_4_ + ( ( uStack_54 ^ (uint)local_50 ) & uStack_58 ^ (uint)local_50 ) + ( ( uStack_58 >> 6 | uStack_58 * 0x4000000 ) ^ ( uStack_58 >> 0xb | uStack_58 * 0x200000 ) ^ ( uStack_58 * 0x80 | uStack_58 >> 0x19 ) );
      uStack_5c = uStack_5c + iVar12;
      local_50._4_4_ = ( ( (uint)uStack_48 >> 2 | (uint)uStack_48 * 0x40000000 ) ^ ( (uint)uStack_48 >> 0xd | (uint)uStack_48 * 0x80000 ) ^ ( (uint)uStack_48 * 0x400 | (uint)uStack_48 >> 0x16 ) ) + iVar12 + ( ( uStack_48._4_4_ | (uint)uStack_48 ) & local_60 | uStack_48._4_4_ & (uint)uStack_48 );
      iVar12 = piVar19[5] + piVar24[3] + (uint)local_50 + ( ( uStack_54 ^ uStack_58 ) & uStack_5c ^ uStack_54 ) + ( ( uStack_5c >> 6 | uStack_5c * 0x4000000 ) ^ ( uStack_5c >> 0xb | uStack_5c * 0x200000 ) ^ ( uStack_5c * 0x80 | uStack_5c >> 0x19 ) );
      local_60 = iVar12 + local_60;
      local_50._0_4_ = ( ( local_50._4_4_ >> 2 | local_50._4_4_ * 0x40000000 ) ^ ( local_50._4_4_ >> 0xd | local_50._4_4_ * 0x80000 ) ^ ( local_50._4_4_ * 0x400 | local_50._4_4_ >> 0x16 ) ) + iVar12 + ( ( (uint)uStack_48 | local_50._4_4_ ) & uStack_48._4_4_ | (uint)uStack_48 & local_50._4_4_ );
      iVar12 = uStack_54 + piVar19[6] + piVar24[4] + ( ( uStack_58 ^ uStack_5c ) & local_60 ^ uStack_58 ) + ( ( local_60 >> 6 | local_60 * 0x4000000 ) ^ ( local_60 >> 0xb | local_60 * 0x200000 ) ^ ( local_60 * 0x80 | local_60 >> 0x19 ) );
      uStack_48._4_4_ = uStack_48._4_4_ + iVar12;
      uStack_54 = ( ( (uint)local_50 >> 2 | (uint)local_50 * 0x40000000 ) ^ ( (uint)local_50 >> 0xd | (uint)local_50 * 0x80000 ) ^ ( (uint)local_50 * 0x400 | (uint)local_50 >> 0x16 ) ) + iVar12 + ( ( local_50._4_4_ | (uint)local_50 ) & (uint)uStack_48 | local_50._4_4_ & (uint)local_50 );
      iVar12 = piVar19[7] + piVar24[5] + uStack_58 + ( ( uStack_5c ^ local_60 ) & uStack_48._4_4_ ^ uStack_5c ) + ( ( uStack_48._4_4_ >> 6 | uStack_48._4_4_ * 0x4000000 ) ^ ( uStack_48._4_4_ >> 0xb | uStack_48._4_4_ * 0x200000 ) ^ ( uStack_48._4_4_ * 0x80 | uStack_48._4_4_ >> 0x19 ) );
      uStack_48._0_4_ = (uint)uStack_48 + iVar12;
      uStack_58 = ( ( uStack_54 >> 2 | uStack_54 * 0x40000000 ) ^ ( uStack_54 >> 0xd | uStack_54 * 0x80000 ) ^ ( uStack_54 * 0x400 | uStack_54 >> 0x16 ) ) + iVar12 + ( ( (uint)local_50 | uStack_54 ) & local_50._4_4_ | (uint)local_50 & uStack_54 );
      iVar12 = piVar19[8] + piVar24[6] + uStack_5c + ( ( local_60 ^ uStack_48._4_4_ ) & (uint)uStack_48 ^ local_60 ) + ( ( (uint)uStack_48 >> 6 | (uint)uStack_48 * 0x4000000 ) ^ ( (uint)uStack_48 >> 0xb | (uint)uStack_48 * 0x200000 ) ^ ( (uint)uStack_48 * 0x80 | (uint)uStack_48 >> 0x19 ) );
      local_50._4_4_ = local_50._4_4_ + iVar12;
      piVar25 = piVar24 + 8;
      uStack_5c = ( ( uStack_58 >> 2 | uStack_58 * 0x40000000 ) ^ ( uStack_58 >> 0xd | uStack_58 * 0x80000 ) ^ ( uStack_58 * 0x400 | uStack_58 >> 0x16 ) ) + iVar12 + ( ( uStack_54 | uStack_58 ) & (uint)local_50 | uStack_54 & uStack_58 );
      iVar12 = piVar19[9] + piVar24[7] + local_60 + ( ( uStack_48._4_4_ ^ (uint)uStack_48 ) & local_50._4_4_ ^ uStack_48._4_4_ ) + ( ( local_50._4_4_ >> 6 | local_50._4_4_ * 0x4000000 ) ^ ( local_50._4_4_ >> 0xb | local_50._4_4_ * 0x200000 ) ^ ( local_50._4_4_ * 0x80 | local_50._4_4_ >> 0x19 ) );
      local_50._0_4_ = (uint)local_50 + iVar12;
      local_60 = ( ( uStack_5c >> 2 | uStack_5c * 0x40000000 ) ^ ( uStack_5c >> 0xd | uStack_5c * 0x80000 ) ^ ( uStack_5c * 0x400 | uStack_5c >> 0x16 ) ) + iVar12 + ( ( uStack_58 | uStack_5c ) & uStack_54 | uStack_58 & uStack_5c );
      piVar19 = piVar19 + 8;
      piVar24 = piVar25;
   }
 while ( piVar25 != &DAT_00101720 );
   local_1cc = local_160[5];
   local_1a4 = local_160[9];
   local_1b4 = local_160[0xd];
   local_1c0 = local_160[6];
   local_1d0 = local_160[4];
   local_1bc = local_160[2];
   local_1b0 = local_160[0xc];
   local_1d4 = local_160[0xe];
   local_1c8 = local_160[3];
   local_1ac = local_160[0xb];
   local_1a8 = local_160[10];
   local_1c4 = local_160[7];
   local_1e0 = local_160[0xf];
   local_1b8 = local_160[8];
   local_188 = local_160[0];
   puVar21 = &K;
   piVar19 = &local_168;
   uVar11 = (uint)local_50;
   uVar7 = (uint)uStack_48;
   uVar13 = local_50._4_4_;
   uVar14 = uStack_5c;
   uVar17 = uStack_58;
   uVar20 = local_60;
   local_18c = uStack_48._4_4_;
   uVar15 = uStack_54;
   do {
      uVar9 = local_188 + ( ( local_1d4 << 0xd | local_1d4 >> 0x13 ) ^ ( local_1d4 << 0xf | local_1d4 >> 0x11 ) ^ local_1d4 >> 10 ) + ( ( local_160[1] << 0xe | local_160[1] >> 0x12 ) ^ ( local_160[1] >> 7 | local_160[1] << 0x19 ) ^ local_160[1] >> 3 ) + local_1a4;
      piVar19[0x12] = uVar9;
      iVar10 = local_18c + ( ( uVar11 >> 0xb | uVar11 << 0x15 ) ^ ( uVar11 >> 6 | uVar11 << 0x1a ) ^ ( uVar11 << 7 | uVar11 >> 0x19 ) ) + ( ( uVar7 ^ uVar13 ) & uVar11 ^ uVar7 ) + puVar21[0x10] + uVar9;
      uVar15 = uVar15 + iVar10;
      iVar12 = puVar21[0x11];
      local_18c = ( ( uVar20 >> 0xd | uVar20 << 0x13 ) ^ ( uVar20 >> 2 | uVar20 << 0x1e ) ^ ( uVar20 << 10 | uVar20 >> 0x16 ) ) + ( ( uVar20 | uVar14 ) & uVar17 | uVar20 & uVar14 ) + iVar10;
      uVar1 = local_160[1] + local_1a8 + ( local_1e0 >> 10 ^ ( local_1e0 << 0xd | local_1e0 >> 0x13 ) ^ ( local_1e0 << 0xf | local_1e0 >> 0x11 ) ) + ( ( local_1bc << 0xe | local_1bc >> 0x12 ) ^ ( local_1bc >> 7 | local_1bc << 0x19 ) ^ local_1bc >> 3 );
      piVar19[0x13] = uVar1;
      iVar10 = ( ( uVar15 >> 0xb | uVar15 * 0x200000 ) ^ ( uVar15 >> 6 | uVar15 * 0x4000000 ) ^ ( uVar15 * 0x80 | uVar15 >> 0x19 ) ) + uVar7 + iVar12 + uVar1 + ( ( uVar11 ^ uVar13 ) & uVar15 ^ uVar13 );
      uVar17 = uVar17 + iVar10;
      iVar12 = puVar21[0x12];
      uVar7 = ( ( local_18c >> 0xd | local_18c * 0x80000 ) ^ ( local_18c >> 2 | local_18c * 0x40000000 ) ^ ( local_18c * 0x400 | local_18c >> 0x16 ) ) + ( ( uVar20 | local_18c ) & uVar14 | uVar20 & local_18c ) + iVar10;
      uVar18 = ( local_1c8 >> 3 ^ ( local_1c8 << 0xe | local_1c8 >> 0x12 ) ^ ( local_1c8 >> 7 | local_1c8 << 0x19 ) ) + local_1bc + local_1ac + ( ( uVar9 * 0x2000 | uVar9 >> 0x13 ) ^ ( uVar9 * 0x8000 | uVar9 >> 0x11 ) ^ uVar9 >> 10 );
      piVar19[0x14] = uVar18;
      iVar10 = ( ( uVar17 >> 0xb | uVar17 * 0x200000 ) ^ ( uVar17 >> 6 | uVar17 * 0x4000000 ) ^ ( uVar17 * 0x80 | uVar17 >> 0x19 ) ) + uVar13 + iVar12 + uVar18 + ( ( uVar11 ^ uVar15 ) & uVar17 ^ uVar11 );
      uVar14 = uVar14 + iVar10;
      iVar12 = puVar21[0x13];
      uVar13 = ( ( uVar7 >> 0xd | uVar7 * 0x80000 ) ^ ( uVar7 >> 2 | uVar7 * 0x40000000 ) ^ ( uVar7 * 0x400 | uVar7 >> 0x16 ) ) + ( ( local_18c | uVar7 ) & uVar20 | local_18c & uVar7 ) + iVar10;
      uVar2 = ( local_1d0 >> 3 ^ ( local_1d0 << 0xe | local_1d0 >> 0x12 ) ^ ( local_1d0 >> 7 | local_1d0 << 0x19 ) ) + local_1c8 + local_1b0 + ( ( uVar1 * 0x2000 | uVar1 >> 0x13 ) ^ ( uVar1 * 0x8000 | uVar1 >> 0x11 ) ^ uVar1 >> 10 );
      piVar19[0x15] = uVar2;
      iVar10 = puVar21[0x14];
      iVar12 = ( ( uVar14 >> 0xb | uVar14 * 0x200000 ) ^ ( uVar14 >> 6 | uVar14 * 0x4000000 ) ^ ( uVar14 * 0x80 | uVar14 >> 0x19 ) ) + uVar11 + iVar12 + uVar2 + ( ( uVar15 ^ uVar17 ) & uVar14 ^ uVar15 );
      uVar20 = uVar20 + iVar12;
      uVar11 = ( ( uVar13 >> 0xd | uVar13 * 0x80000 ) ^ ( uVar13 >> 2 | uVar13 * 0x40000000 ) ^ ( uVar13 * 0x400 | uVar13 >> 0x16 ) ) + ( ( uVar7 | uVar13 ) & local_18c | uVar7 & uVar13 ) + iVar12;
      uVar3 = ( local_1cc >> 3 ^ ( local_1cc << 0xe | local_1cc >> 0x12 ) ^ ( local_1cc >> 7 | local_1cc << 0x19 ) ) + local_1d0 + local_1b4 + ( ( uVar18 * 0x2000 | uVar18 >> 0x13 ) ^ ( uVar18 * 0x8000 | uVar18 >> 0x11 ) ^ uVar18 >> 10 );
      piVar19[0x16] = uVar3;
      iVar12 = ( ( uVar20 >> 0xb | uVar20 * 0x200000 ) ^ ( uVar20 >> 6 | uVar20 * 0x4000000 ) ^ ( uVar20 * 0x80 | uVar20 >> 0x19 ) ) + ( ( uVar17 ^ uVar14 ) & uVar20 ^ uVar17 ) + uVar15 + iVar10 + uVar3;
      local_18c = local_18c + iVar12;
      uVar15 = ( ( uVar11 >> 0xd | uVar11 * 0x80000 ) ^ ( uVar11 >> 2 | uVar11 * 0x40000000 ) ^ ( uVar11 * 0x400 | uVar11 >> 0x16 ) ) + ( ( uVar13 | uVar11 ) & uVar7 | uVar13 & uVar11 ) + iVar12;
      uVar23 = ( local_1c0 >> 3 ^ ( local_1c0 << 0xe | local_1c0 >> 0x12 ) ^ ( local_1c0 >> 7 | local_1c0 << 0x19 ) ) + local_1cc + local_1d4 + ( ( uVar2 * 0x2000 | uVar2 >> 0x13 ) ^ ( uVar2 * 0x8000 | uVar2 >> 0x11 ) ^ uVar2 >> 10 );
      iVar12 = puVar21[0x15];
      piVar19[0x17] = uVar23;
      iVar12 = ( ( local_18c >> 0xb | local_18c * 0x200000 ) ^ ( local_18c >> 6 | local_18c * 0x4000000 ) ^ ( local_18c * 0x80 | local_18c >> 0x19 ) ) + uVar17 + iVar12 + uVar23 + ( ( uVar14 ^ uVar20 ) & local_18c ^ uVar14 );
      uVar7 = uVar7 + iVar12;
      uVar17 = ( ( uVar15 >> 0xd | uVar15 * 0x80000 ) ^ ( uVar15 >> 2 | uVar15 * 0x40000000 ) ^ ( uVar15 * 0x400 | uVar15 >> 0x16 ) ) + ( ( uVar11 | uVar15 ) & uVar13 | uVar11 & uVar15 ) + iVar12;
      iVar12 = puVar21[0x16];
      uVar4 = ( local_1c4 >> 3 ^ ( local_1c4 << 0xe | local_1c4 >> 0x12 ) ^ ( local_1c4 >> 7 | local_1c4 << 0x19 ) ) + local_1c0 + local_1e0 + ( ( uVar3 * 0x2000 | uVar3 >> 0x13 ) ^ ( uVar3 * 0x8000 | uVar3 >> 0x11 ) ^ uVar3 >> 10 );
      piVar19[0x18] = uVar4;
      iVar12 = ( ( uVar7 >> 0xb | uVar7 * 0x200000 ) ^ ( uVar7 >> 6 | uVar7 * 0x4000000 ) ^ ( uVar7 * 0x80 | uVar7 >> 0x19 ) ) + uVar14 + iVar12 + uVar4 + ( ( local_18c ^ uVar20 ) & uVar7 ^ uVar20 );
      uVar13 = uVar13 + iVar12;
      uVar14 = ( ( uVar17 >> 0xd | uVar17 * 0x80000 ) ^ ( uVar17 >> 2 | uVar17 * 0x40000000 ) ^ ( uVar17 * 0x400 | uVar17 >> 0x16 ) ) + ( ( uVar15 | uVar17 ) & uVar11 | uVar15 & uVar17 ) + iVar12;
      puVar22 = puVar21 + 8;
      uVar16 = ( ( local_1b8 << 0xe | local_1b8 >> 0x12 ) ^ ( local_1b8 >> 7 | local_1b8 << 0x19 ) ^ local_1b8 >> 3 ) + local_1c4 + uVar9 + ( ( uVar23 * 0x2000 | uVar23 >> 0x13 ) ^ ( uVar23 * 0x8000 | uVar23 >> 0x11 ) ^ uVar23 >> 10 );
      piVar19[0x19] = uVar16;
      local_168 = ( ( uVar13 >> 0xb | uVar13 * 0x200000 ) ^ ( uVar13 >> 6 | uVar13 * 0x4000000 ) ^ ( uVar13 * 0x80 | uVar13 >> 0x19 ) ) + ( ( local_18c ^ uVar7 ) & uVar13 ^ local_18c ) + puVar21[0x17] + uVar16 + uVar20;
      uVar11 = uVar11 + local_168;
      local_1cc = local_1b4;
      local_188 = local_1b8;
      local_1c0 = local_1d4;
      local_164 = ( ( uVar14 >> 0xd | uVar14 * 0x80000 ) ^ ( uVar14 >> 2 | uVar14 * 0x40000000 ) ^ ( uVar14 * 0x400 | uVar14 >> 0x16 ) ) + ( ( uVar17 | uVar14 ) & uVar15 | uVar17 & uVar14 );
      local_1d0 = local_1b0;
      uVar20 = local_168 + local_164;
      local_1c8 = local_1ac;
      local_1bc = local_1a8;
      local_1c4 = local_1e0;
      puVar21 = puVar22;
      piVar19 = piVar19 + 8;
      local_160[1] = local_1a4;
      local_1d4 = uVar4;
      local_1b8 = uVar9;
      local_1b4 = uVar23;
      local_1b0 = uVar3;
      local_1ac = uVar2;
      local_1a8 = uVar18;
      local_1a4 = uVar1;
      local_1e0 = uVar16;
   }
 while ( puVar22 != (undefined4*)&DAT_001017a0 );
   uStack_6c = CONCAT44(uVar4, uVar23);
   auVar5 = *(undefined1(*) [16])( param_1 + 0x58 );
   uStack_48 = CONCAT44(local_18c, uVar7);
   local_50 = CONCAT44(uVar13, uVar11);
   *(uint*)( param_1 + 0x48 ) = *(int*)( param_1 + 0x48 ) + uVar20;
   *(uint*)( param_1 + 0x4c ) = *(int*)( param_1 + 0x4c ) + uVar14;
   *(uint*)( param_1 + 0x50 ) = *(int*)( param_1 + 0x50 ) + uVar17;
   *(uint*)( param_1 + 0x54 ) = *(int*)( param_1 + 0x54 ) + uVar15;
   *(uint*)( param_1 + 0x58 ) = uVar11 + auVar5._0_4_;
   *(uint*)( param_1 + 0x5c ) = uVar13 + auVar5._4_4_;
   *(uint*)( param_1 + 0x60 ) = uVar7 + auVar5._8_4_;
   *(uint*)( param_1 + 100 ) = local_18c + auVar5._12_4_;
   uStack_64 = uVar16;
   local_60 = uVar20;
   uStack_5c = uVar14;
   uStack_58 = uVar17;
   uStack_54 = uVar15;
   mbedtls_platform_zeroize(&local_168, 0x128);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return 0;
}
undefined8 mbedtls_sha256_update(long param_1, undefined8 *param_2, ulong param_3) {
   int iVar1;
   undefined8 *puVar2;
   long lVar3;
   undefined8 uVar4;
   ulong uVar5;
   ulong uVar6;
   uint uVar7;
   uint uVar8;
   uint uVar9;
   bool bVar10;
   if (param_3 == 0) {
      return 0;
   }

   uVar8 = *(uint*)( param_1 + 0x40 );
   uVar9 = uVar8 & 0x3f;
   uVar7 = 0x40 - uVar9;
   *(uint*)( param_1 + 0x40 ) = uVar8 + (uint)param_3;
   uVar5 = (ulong)uVar7;
   if (CARRY4(uVar8, (uint)param_3)) {
      *(int*)( param_1 + 0x44 ) = *(int*)( param_1 + 0x44 ) + 1;
   }

   if (( uVar9 == 0 ) || ( param_3 < uVar5 )) {
      if (0x3f < param_3) goto LAB_00100e10;
   }
 else {
      puVar2 = (undefined8*)( (ulong)uVar9 + param_1 );
      if (uVar7 < 8) {
         if (( uVar7 & 4 ) == 0) {
            if (( uVar7 != 0 ) && ( *(undefined1*)puVar2 = *(undefined1*)param_2(uVar7 & 2) != 0 )) {
               *(undefined2*)( (long)puVar2 + ( uVar5 - 2 ) ) = *(undefined2*)( (long)param_2 + ( uVar5 - 2 ) );
            }

         }
 else {
            *(undefined4*)puVar2 = *(undefined4*)param_2;
            *(undefined4*)( (long)puVar2 + ( uVar5 - 4 ) ) = *(undefined4*)( (long)param_2 + ( uVar5 - 4 ) );
         }

      }
 else {
         *puVar2 = *param_2;
         *(undefined8*)( (long)puVar2 + ( uVar5 - 8 ) ) = *(undefined8*)( (long)param_2 + ( uVar5 - 8 ) );
         lVar3 = (long)puVar2 - ( ( ulong )(puVar2 + 1) & 0xfffffffffffffff8 );
         uVar8 = uVar7 + (int)lVar3 & 0xfffffff8;
         if (7 < uVar8) {
            uVar9 = 0;
            do {
               uVar6 = (ulong)uVar9;
               uVar9 = uVar9 + 8;
               *(undefined8*)( ( ( ulong )(puVar2 + 1) & 0xfffffffffffffff8 ) + uVar6 ) = *(undefined8*)( (long)param_2 + ( uVar6 - lVar3 ) );
            }
 while ( uVar9 < uVar8 );
         }

      }

      uVar4 = mbedtls_internal_sha256_process(param_1, param_1);
      if ((int)uVar4 != 0) {
         return uVar4;
      }

      param_2 = (undefined8*)( (long)param_2 + uVar5 );
      uVar9 = 0;
      for (param_3 = param_3 - uVar5; 0x3f < param_3; param_3 = param_3 - uVar6) {
         LAB_00100e10:uVar5 = 0;
         do {
            iVar1 = mbedtls_internal_sha256_process(param_1, (undefined1*)( (long)param_2 + uVar5 ));
            if (iVar1 != 0) {
               return 0xffffffff;
            }

            uVar6 = uVar5 + 0x40;
            bVar10 = ( param_3 - 0x40 & 0xffffffffffffffc0 ) != uVar5;
            uVar5 = uVar6;
         }
 while ( bVar10 );
         param_2 = (undefined8*)( (long)param_2 + uVar6 );
      }

      if (param_3 == 0) {
         return 0;
      }

   }

   uVar8 = (uint)param_3;
   uVar5 = param_3 & 0xffffffff;
   puVar2 = (undefined8*)( (ulong)uVar9 + param_1 );
   if (uVar8 < 8) {
      if (( param_3 & 4 ) != 0) {
         *(undefined4*)puVar2 = *(undefined4*)param_2;
         *(undefined4*)( (long)puVar2 + ( uVar5 - 4 ) ) = *(undefined4*)( (long)param_2 + ( uVar5 - 4 ) );
         return 0;
      }

      if (( uVar8 != 0 ) && ( *(undefined1*)puVar2 = *(undefined1*)param_2(param_3 & 2) != 0 )) {
         *(undefined2*)( (long)puVar2 + ( uVar5 - 2 ) ) = *(undefined2*)( (long)param_2 + ( uVar5 - 2 ) );
         return 0;
      }

   }
 else {
      *puVar2 = *param_2;
      *(undefined8*)( (long)puVar2 + ( ( param_3 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)param_2 + ( ( param_3 & 0xffffffff ) - 8 ) );
      lVar3 = (long)puVar2 - ( ( ulong )(puVar2 + 1) & 0xfffffffffffffff8 );
      uVar8 = uVar8 + (int)lVar3 & 0xfffffff8;
      if (7 < uVar8) {
         uVar9 = 0;
         do {
            uVar5 = (ulong)uVar9;
            uVar9 = uVar9 + 8;
            *(undefined8*)( ( ( ulong )(puVar2 + 1) & 0xfffffffffffffff8 ) + uVar5 ) = *(undefined8*)( (long)param_2 + ( uVar5 - lVar3 ) );
         }
 while ( uVar9 < uVar8 );
         return 0;
      }

   }

   return 0;
}
int mbedtls_sha256_finish(undefined1 (*param_1)[16], uint *param_2) {
   uint uVar1;
   int iVar2;
   undefined8 *puVar3;
   uint uVar4;
   uint uVar5;
   ulong uVar6;
   uVar1 = *(uint*)param_1[4] & 0x3f;
   uVar4 = uVar1 + 1;
   ( *param_1 )[uVar1] = 0x80;
   if (uVar4 < 0x39) {
      puVar3 = (undefined8*)( *param_1 + uVar4 );
      uVar4 = 0x38 - uVar4;
      if (uVar4 < 8) {
         if (( uVar4 & 4 ) == 0) {
            if (( uVar4 != 0 ) && ( *(undefined1*)puVar3 = 0(uVar4 & 2) != 0 )) {
               *(undefined2*)( (long)puVar3 + ( (ulong)uVar4 - 2 ) ) = 0;
            }

         }
 else {
            *(undefined4*)puVar3 = 0;
            *(undefined4*)( (long)puVar3 + ( (ulong)uVar4 - 4 ) ) = 0;
         }

      }
 else {
         *puVar3 = 0;
         *(undefined8*)( (long)puVar3 + ( (ulong)uVar4 - 8 ) ) = 0;
         uVar1 = uVar4 + ( (int)puVar3 - (int)( ( ulong )(puVar3 + 1) & 0xfffffffffffffff8 ) ) & 0xfffffff8;
         if (7 < uVar1) {
            uVar4 = 0;
            do {
               uVar6 = (ulong)uVar4;
               uVar4 = uVar4 + 8;
               *(undefined8*)( ( ( ulong )(puVar3 + 1) & 0xfffffffffffffff8 ) + uVar6 ) = 0;
            }
 while ( uVar4 < uVar1 );
         }

      }

   }
 else {
      if (-uVar4 != -0x40) {
         uVar6 = 0;
         do {
            uVar1 = (int)uVar6 + 1;
            ( *param_1 )[uVar6 + uVar4] = 0;
            uVar6 = (ulong)uVar1;
         }
 while ( uVar1 < -uVar4 + 0x40 );
      }

      iVar2 = mbedtls_internal_sha256_process(param_1, param_1);
      if (iVar2 != 0) goto LAB_0010100d;
      *(undefined8*)param_1[3] = 0;
      *param_1 = (undefined1[16])0x0;
      param_1[1] = (undefined1[16])0x0;
      param_1[2] = (undefined1[16])0x0;
   }

   uVar1 = *(uint*)param_1[4];
   uVar5 = uVar1 << 3;
   uVar4 = *(int*)( param_1[4] + 4 ) << 3;
   *(uint*)( param_1[3] + 0xc ) = uVar5 >> 0x18 | ( uVar5 & 0xff0000 ) >> 8 | ( uVar5 & 0xff00 ) << 8 | uVar1 << 0x1b;
   *(uint*)( param_1[3] + 8 ) = uVar4 >> 0x18 | ( uVar4 & 0xff0000 ) >> 8 | ( uVar4 & 0xff00 ) << 8 | ( uVar1 >> 0x1d | uVar4 ) << 0x18;
   iVar2 = mbedtls_internal_sha256_process(param_1, param_1);
   if (iVar2 == 0) {
      uVar1 = *(uint*)( param_1[4] + 8 );
      *param_2 = uVar1 >> 0x18 | ( uVar1 & 0xff0000 ) >> 8 | ( uVar1 & 0xff00 ) << 8 | uVar1 << 0x18;
      uVar1 = *(uint*)( param_1[4] + 0xc );
      param_2[1] = uVar1 >> 0x18 | ( uVar1 & 0xff0000 ) >> 8 | ( uVar1 & 0xff00 ) << 8 | uVar1 << 0x18;
      uVar1 = *(uint*)param_1[5];
      param_2[2] = uVar1 >> 0x18 | ( uVar1 & 0xff0000 ) >> 8 | ( uVar1 & 0xff00 ) << 8 | uVar1 << 0x18;
      for (int i = 0; i < 3; i++) {
         uVar1 = *(uint*)( param_1[5] + ( 4*i + 4 ) );
         param_2[( i + 3 )] = uVar1 >> 24 | ( uVar1 & 16711680 ) >> 8 | ( uVar1 & 65280 ) << 8 | uVar1 << 24;
      }

      uVar1 = *(uint*)param_1[6];
      param_2[6] = uVar1 >> 0x18 | ( uVar1 & 0xff0000 ) >> 8 | ( uVar1 & 0xff00 ) << 8 | uVar1 << 0x18;
      if (*(int*)( param_1[6] + 8 ) == 0) {
         uVar1 = *(uint*)( param_1[6] + 4 );
         param_2[7] = uVar1 >> 0x18 | ( uVar1 & 0xff0000 ) >> 8 | ( uVar1 & 0xff00 ) << 8 | uVar1 << 0x18;
      }

   }

   LAB_0010100d:mbedtls_platform_zeroize(param_1, 0x6c);
   return iVar2;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int mbedtls_sha256_common_self_test(int param_1, int param_2) {
   int iVar1;
   undefined8 *__ptr;
   long lVar2;
   long lVar3;
   undefined8 *puVar4;
   undefined *puVar5;
   long in_FS_OFFSET;
   byte bVar6;
   undefined1 *local_f0;
   int local_e8;
   undefined8 local_d8[8];
   undefined8 local_98;
   undefined8 local_90;
   undefined8 uStack_88;
   undefined8 local_80;
   undefined8 uStack_78;
   int local_70;
   undefined1 local_68[40];
   long local_40;
   bVar6 = 0;
   local_f0 = sha256_test_sum;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 != 0) {
      local_f0 = sha224_test_sum;
   }

   __ptr = (undefined8*)calloc(0x400, 1);
   if (__ptr == (undefined8*)0x0) {
      if (param_1 != 0) {
         puts("Buffer allocation failed");
      }

      iVar1 = 1;
   }
 else {
      puVar5 = &sha_test_buf;
      lVar3 = 0;
      puVar4 = local_d8;
      for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
         *puVar4 = 0;
         puVar4 = puVar4 + (ulong)bVar6 * -2 + 1;
      }

      *(undefined4*)puVar4 = 0;
      do {
         if (param_1 != 0) {
            __printf_chk(2, "  SHA-%d test #%d: ", ( 8 - param_2 ) * 0x20, (int)lVar3 + 1);
         }

         local_80 = __LC0;
         uStack_78 = _UNK_001017e8;
         local_90 = __LC1;
         uStack_88 = _UNK_001017f8;
         if (param_2 != 0) {
            local_80 = __LC2;
            uStack_78 = _UNK_00101808;
            local_90 = __LC3;
            uStack_88 = _UNK_00101818;
         }

         local_98 = 0;
         local_70 = param_2;
         if (lVar3 != 2) {
            iVar1 = mbedtls_sha256_update(local_d8, puVar5, ( &sha_test_buflen )[lVar3]);
            if (iVar1 == 0) goto LAB_0010120a;
            LAB_00101381:if (param_1 != 0) {
               puts("failed");
            }

            goto LAB_00101277;
         }

         local_e8 = 1000;
         puVar4 = __ptr;
         for (lVar2 = 0x7d; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = 0x6161616161616161;
            puVar4 = puVar4 + (ulong)bVar6 * -2 + 1;
         }

         do {
            iVar1 = mbedtls_sha256_update(local_d8, __ptr, 1000);
            if (iVar1 != 0) goto LAB_00101381;
            local_e8 = local_e8 + -1;
         }
 while ( local_e8 != 0 );
         LAB_0010120a:iVar1 = mbedtls_sha256_finish(local_d8, local_68);
         if (iVar1 != 0) goto LAB_00101381;
         iVar1 = memcmp(local_68, local_f0, ( ulong )(uint)(( 8 - param_2 ) * 4));
         if (iVar1 != 0) {
            iVar1 = 1;
            goto LAB_00101381;
         }

         if (param_1 != 0) {
            puts("passed");
         }

         lVar3 = lVar3 + 1;
         local_f0 = local_f0 + 0x20;
         puVar5 = puVar5 + 0x39;
      }
 while ( lVar3 != 3 );
      iVar1 = 0;
      if (param_1 != 0) {
         putchar(10);
      }

      LAB_00101277:mbedtls_platform_zeroize(local_d8, 0x6c);
      free(__ptr);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int mbedtls_sha256(undefined8 param_1, undefined8 param_2, undefined8 param_3, uint param_4) {
   int iVar1;
   long in_FS_OFFSET;
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined8 local_58;
   undefined8 local_50;
   undefined8 uStack_48;
   undefined8 local_40;
   undefined8 uStack_38;
   uint local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_4 < 2) {
      local_58 = 0;
      local_98 = (undefined1[16])0x0;
      local_88 = (undefined1[16])0x0;
      local_78 = (undefined1[16])0x0;
      local_68 = (undefined1[16])0x0;
      local_40 = __LC0;
      uStack_38 = _UNK_001017e8;
      local_50 = __LC1;
      uStack_48 = _UNK_001017f8;
      if (param_4 != 0) {
         local_40 = __LC2;
         uStack_38 = _UNK_00101808;
         local_50 = __LC3;
         uStack_48 = _UNK_00101818;
      }

      local_30 = param_4;
      iVar1 = mbedtls_sha256_update(local_98, param_1, param_2);
      if (iVar1 == 0) {
         iVar1 = mbedtls_sha256_finish(local_98, param_3);
      }

      mbedtls_platform_zeroize(local_98, 0x6c);
   }
 else {
      iVar1 = -0x74;
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar1;
}
void mbedtls_sha256_self_test(undefined8 param_1) {
   mbedtls_sha256_common_self_test(param_1, 0);
   return;
}
void mbedtls_sha224_self_test(undefined8 param_1) {
   mbedtls_sha256_common_self_test(param_1, 1);
   return;
}

