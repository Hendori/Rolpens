void mbedtls_sha1_init(undefined8 *param_1) {
   ulong uVar1;
   undefined8 *puVar2;
   *param_1 = 0;
   *(undefined8*)( (long)param_1 + 0x54 ) = 0;
   puVar2 = (undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
   for (uVar1 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 ) ) + 0x5cU >> 3); uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
   }

   return;
}
void mbedtls_sha1_free(long param_1) {
   if (param_1 != 0) {
      mbedtls_platform_zeroize(param_1, 0x5c);
      return;
   }

   return;
}
void mbedtls_sha1_clone(undefined8 *param_1, undefined8 *param_2) {
   undefined8 uVar1;
   uVar1 = param_2[1];
   *param_1 = *param_2;
   param_1[1] = uVar1;
   for (int i = 0; i < 4; i++) {
      uVar1 = param_2[( 2*i + 3 )];
      param_1[( 2*i + 2 )] = param_2[( 2*i + 2 )];
      param_1[( 2*i + 3 )] = uVar1;
   }

   uVar1 = *(undefined8*)( (long)param_2 + 0x54 );
   *(undefined8*)( (long)param_1 + 0x4c ) = *(undefined8*)( (long)param_2 + 0x4c );
   *(undefined8*)( (long)param_1 + 0x54 ) = uVar1;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 mbedtls_sha1_starts(undefined8 *param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   uVar3 = _LC1;
   uVar2 = _UNK_00101bf8;
   uVar1 = __LC0;
   *(undefined4*)( param_1 + 3 ) = 0xc3d2e1f0;
   param_1[2] = uVar3;
   *param_1 = uVar1;
   param_1[1] = uVar2;
   return 0;
}
undefined8 mbedtls_internal_sha1_process(long param_1, uint *param_2) {
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
   long in_FS_OFFSET;
   uint uVar31;
   uint uVar32;
   uint local_98;
   uint local_94;
   uint local_90;
   uint local_8c;
   uint local_88;
   uint local_84;
   uint local_80;
   uint local_7c;
   uint local_78;
   uint local_74;
   uint local_70;
   uint local_6c;
   uint local_68;
   uint local_64;
   uint local_60;
   uint local_5c;
   uint local_58;
   int local_54;
   uint local_50;
   uint local_4c;
   uint local_48;
   uint local_44;
   long local_40;
   uVar1 = param_2[9];
   uVar2 = param_2[10];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar13 = param_2[1];
   uVar18 = param_2[0xb];
   uVar14 = *param_2;
   uVar5 = param_2[3];
   uVar16 = uVar1 >> 0x18 | ( uVar1 & 0xff0000 ) >> 8 | ( uVar1 & 0xff00 ) << 8 | uVar1 << 0x18;
   uVar21 = uVar2 >> 0x18 | ( uVar2 & 0xff0000 ) >> 8 | ( uVar2 & 0xff00 ) << 8 | uVar2 << 0x18;
   uVar3 = uVar13 >> 0x18 | ( uVar13 & 0xff0000 ) >> 8 | ( uVar13 & 0xff00 ) << 8 | uVar13 << 0x18;
   uVar1 = param_2[5];
   uVar2 = param_2[4];
   uVar13 = param_2[2];
   uVar10 = uVar18 >> 0x18 | ( uVar18 & 0xff0000 ) >> 8 | ( uVar18 & 0xff00 ) << 8 | uVar18 << 0x18;
   uVar15 = uVar14 >> 0x18 | ( uVar14 & 0xff0000 ) >> 8 | ( uVar14 & 0xff00 ) << 8 | uVar14 << 0x18;
   uVar4 = uVar1 >> 0x18 | ( uVar1 & 0xff0000 ) >> 8 | ( uVar1 & 0xff00 ) << 8 | uVar1 << 0x18;
   uVar1 = param_2[6];
   uVar11 = uVar13 >> 0x18 | ( uVar13 & 0xff0000 ) >> 8 | ( uVar13 & 0xff00 ) << 8 | uVar13 << 0x18;
   uVar8 = uVar5 >> 0x18 | ( uVar5 & 0xff0000 ) >> 8 | ( uVar5 & 0xff00 ) << 8 | uVar5 << 0x18;
   uVar9 = uVar2 >> 0x18 | ( uVar2 & 0xff0000 ) >> 8 | ( uVar2 & 0xff00 ) << 8 | uVar2 << 0x18;
   uVar5 = uVar1 >> 0x18 | ( uVar1 & 0xff0000 ) >> 8 | ( uVar1 & 0xff00 ) << 8 | uVar1 << 0x18;
   uVar1 = param_2[7];
   uVar6 = uVar1 >> 0x18 | ( uVar1 & 0xff0000 ) >> 8 | ( uVar1 & 0xff00 ) << 8 | uVar1 << 0x18;
   uVar1 = param_2[8];
   uVar2 = param_2[0xc];
   uVar13 = param_2[0xd];
   uVar18 = param_2[0xe];
   uVar14 = param_2[0xf];
   uVar7 = uVar1 >> 0x18 | ( uVar1 & 0xff0000 ) >> 8 | ( uVar1 & 0xff00 ) << 8 | uVar1 << 0x18;
   uVar26 = uVar2 >> 0x18 | ( uVar2 & 0xff0000 ) >> 8 | ( uVar2 & 0xff00 ) << 8 | uVar2 << 0x18;
   uVar1 = *(uint*)( param_1 + 0x10 );
   uVar17 = uVar13 >> 0x18 | ( uVar13 & 0xff0000 ) >> 8 | ( uVar13 & 0xff00 ) << 8 | uVar13 << 0x18;
   uVar2 = *(uint*)( param_1 + 0x14 );
   uVar12 = uVar14 >> 0x18 | ( uVar14 & 0xff0000 ) >> 8 | ( uVar14 & 0xff00 ) << 8 | uVar14 << 0x18;
   uVar22 = uVar18 >> 0x18 | ( uVar18 & 0xff0000 ) >> 8 | ( uVar18 & 0xff00 ) << 8 | uVar18 << 0x18;
   uVar31 = ( uint ) * (undefined8*)( param_1 + 8 );
   uVar32 = ( uint )(( ulong ) * (undefined8*)( param_1 + 8 ) >> 0x20);
   uVar18 = uVar32 >> 2 | uVar32 << 0x1e;
   uVar13 = ( ( uVar1 ^ uVar2 ) & uVar32 ^ uVar2 ) + *(int*)( param_1 + 0x18 ) + 0x5a827999 + ( uVar31 << 5 | uVar31 >> 0x1b ) + uVar15;
   uVar23 = uVar31 >> 2 | uVar31 << 0x1e;
   uVar27 = uVar2 + 0x5a827999 + ( ( uVar1 ^ uVar18 ) & uVar31 ^ uVar1 ) + uVar3 + ( uVar13 * 0x20 | uVar13 >> 0x1b );
   uVar14 = uVar13 >> 2 | uVar13 * 0x40000000;
   uVar13 = uVar11 + 0x5a827999 + uVar1 + ( ( uVar18 ^ uVar23 ) & uVar13 ^ uVar18 ) + ( uVar27 * 0x20 | uVar27 >> 0x1b );
   uVar28 = uVar27 >> 2 | uVar27 * 0x40000000;
   uVar27 = uVar8 + 0x5a827999 + uVar18 + ( ( uVar23 ^ uVar14 ) & uVar27 ^ uVar23 ) + ( uVar13 * 0x20 | uVar13 >> 0x1b );
   uVar18 = uVar13 >> 2 | uVar13 * 0x40000000;
   uVar13 = uVar9 + 0x5a827999 + uVar23 + ( ( uVar14 ^ uVar28 ) & uVar13 ^ uVar14 ) + ( uVar27 * 0x20 | uVar27 >> 0x1b );
   uVar19 = uVar27 >> 2 | uVar27 * 0x40000000;
   uVar14 = uVar4 + 0x5a827999 + uVar14 + ( ( uVar28 ^ uVar18 ) & uVar27 ^ uVar28 ) + ( uVar13 * 0x20 | uVar13 >> 0x1b );
   uVar23 = uVar13 >> 2 | uVar13 * 0x40000000;
   uVar13 = uVar5 + 0x5a827999 + uVar28 + ( ( uVar18 ^ uVar19 ) & uVar13 ^ uVar18 ) + ( uVar14 * 0x20 | uVar14 >> 0x1b );
   uVar28 = uVar14 >> 2 | uVar14 * 0x40000000;
   uVar14 = uVar6 + 0x5a827999 + uVar18 + ( ( uVar19 ^ uVar23 ) & uVar14 ^ uVar19 ) + ( uVar13 * 0x20 | uVar13 >> 0x1b );
   uVar18 = uVar7 + 0x5a827999 + uVar19 + ( ( uVar23 ^ uVar28 ) & uVar13 ^ uVar23 ) + ( uVar14 * 0x20 | uVar14 >> 0x1b );
   uVar13 = uVar13 >> 2 | uVar13 * 0x40000000;
   uVar27 = uVar14 >> 2 | uVar14 * 0x40000000;
   uVar23 = uVar16 + 0x5a827999 + uVar23 + ( ( uVar28 ^ uVar13 ) & uVar14 ^ uVar28 ) + ( uVar18 * 0x20 | uVar18 >> 0x1b );
   uVar14 = uVar18 >> 2 | uVar18 * 0x40000000;
   uVar18 = uVar21 + 0x5a827999 + uVar28 + ( ( uVar13 ^ uVar27 ) & uVar18 ^ uVar13 ) + ( uVar23 * 0x20 | uVar23 >> 0x1b );
   uVar19 = uVar23 >> 2 | uVar23 * 0x40000000;
   uVar28 = uVar10 + 0x5a827999 + uVar13 + ( ( uVar27 ^ uVar14 ) & uVar23 ^ uVar27 ) + ( uVar18 * 0x20 | uVar18 >> 0x1b );
   uVar23 = uVar18 >> 2 | uVar18 * 0x40000000;
   uVar13 = uVar26 + 0x5a827999 + uVar27 + ( ( uVar14 ^ uVar19 ) & uVar18 ^ uVar14 ) + ( uVar28 * 0x20 | uVar28 >> 0x1b );
   uVar24 = uVar28 >> 2 | uVar28 * 0x40000000;
   uVar14 = uVar17 + 0x5a827999 + uVar14 + ( ( uVar19 ^ uVar23 ) & uVar28 ^ uVar19 ) + ( uVar13 * 0x20 | uVar13 >> 0x1b );
   uVar18 = uVar13 >> 2 | uVar13 * 0x40000000;
   uVar13 = uVar22 + 0x5a827999 + uVar19 + ( ( uVar23 ^ uVar24 ) & uVar13 ^ uVar23 ) + ( uVar14 * 0x20 | uVar14 >> 0x1b );
   uVar27 = uVar14 >> 2 | uVar14 * 0x40000000;
   uVar23 = uVar12 + 0x5a827999 + uVar23 + ( ( uVar24 ^ uVar18 ) & uVar14 ^ uVar24 ) + ( uVar13 * 0x20 | uVar13 >> 0x1b );
   uVar14 = uVar15 ^ uVar11 ^ uVar7 ^ uVar17;
   uVar19 = uVar14 << 1 | ( uint )((int)uVar14 < 0);
   uVar14 = uVar13 >> 2 | uVar13 * 0x40000000;
   uVar15 = uVar3 ^ uVar8 ^ uVar16 ^ uVar22;
   uVar3 = uVar24 + 0x5a827999 + uVar19 + ( ( uVar18 ^ uVar27 ) & uVar13 ^ uVar18 ) + ( uVar23 * 0x20 | uVar23 >> 0x1b );
   uVar25 = uVar15 << 1 | ( uint )((int)uVar15 < 0);
   uVar24 = uVar23 >> 2 | uVar23 * 0x40000000;
   uVar23 = uVar18 + 0x5a827999 + uVar25 + ( ( uVar27 ^ uVar14 ) & uVar23 ^ uVar27 ) + ( uVar3 * 0x20 | uVar3 >> 0x1b );
   uVar13 = uVar11 ^ uVar9 ^ uVar21 ^ uVar12;
   uVar15 = uVar13 << 1 | ( uint )((int)uVar13 < 0);
   uVar28 = uVar3 >> 2 | uVar3 * 0x40000000;
   uVar3 = uVar27 + 0x5a827999 + uVar15 + ( ( uVar14 ^ uVar24 ) & uVar3 ^ uVar14 ) + ( uVar23 * 0x20 | uVar23 >> 0x1b );
   uVar13 = uVar8 ^ uVar4 ^ uVar10 ^ uVar19;
   uVar18 = uVar13 << 1 | ( uint )((int)uVar13 < 0);
   uVar11 = uVar23 >> 2 | uVar23 * 0x40000000;
   uVar8 = uVar14 + 0x5a827999 + uVar18 + ( ( uVar24 ^ uVar28 ) & uVar23 ^ uVar24 ) + ( uVar3 * 0x20 | uVar3 >> 0x1b );
   uVar13 = uVar9 ^ uVar5 ^ uVar26 ^ uVar25;
   uVar14 = uVar13 << 1 | ( uint )((int)uVar13 < 0);
   uVar13 = uVar3 >> 2 | uVar3 * 0x40000000;
   uVar9 = uVar24 + 0x6ed9eba1 + uVar14 + ( uVar28 ^ uVar11 ^ uVar3 ) + ( uVar8 * 0x20 | uVar8 >> 0x1b );
   uVar3 = uVar6 ^ uVar4 ^ uVar17 ^ uVar15;
   uVar20 = uVar3 << 1 | ( uint )((int)uVar3 < 0);
   uVar3 = uVar8 >> 2 | uVar8 * 0x40000000;
   uVar8 = uVar28 + 0x6ed9eba1 + uVar20 + ( uVar11 ^ uVar13 ^ uVar8 ) + ( uVar9 * 0x20 | uVar9 >> 0x1b );
   uVar5 = uVar5 ^ uVar7 ^ uVar22 ^ uVar18;
   uVar24 = uVar5 << 1 | ( uint )((int)uVar5 < 0);
   uVar27 = uVar9 >> 2 | uVar9 * 0x40000000;
   uVar4 = uVar11 + 0x6ed9eba1 + uVar24 + ( uVar13 ^ uVar3 ^ uVar9 ) + ( uVar8 * 0x20 | uVar8 >> 0x1b );
   uVar5 = uVar6 ^ uVar16 ^ uVar12 ^ uVar14;
   uVar28 = uVar5 << 1 | ( uint )((int)uVar5 < 0);
   uVar9 = uVar8 >> 2 | uVar8 * 0x40000000;
   uVar5 = uVar13 + 0x6ed9eba1 + uVar28 + ( uVar3 ^ uVar27 ^ uVar8 ) + ( uVar4 * 0x20 | uVar4 >> 0x1b );
   uVar13 = uVar7 ^ uVar21 ^ uVar19 ^ uVar20;
   uVar6 = uVar13 << 1 | ( uint )((int)uVar13 < 0);
   uVar7 = uVar4 >> 2 | uVar4 * 0x40000000;
   uVar13 = uVar3 + 0x6ed9eba1 + uVar6 + ( uVar27 ^ uVar9 ^ uVar4 ) + ( uVar5 * 0x20 | uVar5 >> 0x1b );
   uVar3 = uVar16 ^ uVar10 ^ uVar25 ^ uVar24;
   uVar23 = uVar3 << 1 | ( uint )((int)uVar3 < 0);
   uVar4 = uVar5 >> 2 | uVar5 * 0x40000000;
   uVar11 = ( uVar9 ^ uVar7 ^ uVar5 ) + uVar27 + 0x6ed9eba1 + uVar23 + ( uVar13 * 0x20 | uVar13 >> 0x1b );
   uVar5 = uVar21 ^ uVar26 ^ uVar15 ^ uVar28;
   uVar29 = uVar5 << 1 | ( uint )((int)uVar5 < 0);
   uVar3 = uVar13 >> 2 | uVar13 * 0x40000000;
   uVar8 = ( uVar7 ^ uVar4 ^ uVar13 ) + uVar9 + 0x6ed9eba1 + uVar29 + ( uVar11 * 0x20 | uVar11 >> 0x1b );
   uVar13 = uVar10 ^ uVar17 ^ uVar18 ^ uVar6;
   uVar21 = uVar13 << 1 | ( uint )((int)uVar13 < 0);
   uVar10 = uVar11 >> 2 | uVar11 * 0x40000000;
   uVar7 = ( uVar4 ^ uVar3 ^ uVar11 ) + uVar7 + 0x6ed9eba1 + uVar21 + ( uVar8 * 0x20 | uVar8 >> 0x1b );
   uVar13 = uVar26 ^ uVar22 ^ uVar14 ^ uVar23;
   uVar5 = uVar13 << 1 | ( uint )((int)uVar13 < 0);
   uVar9 = uVar8 >> 2 | uVar8 * 0x40000000;
   uVar4 = ( uVar3 ^ uVar10 ^ uVar8 ) + uVar4 + 0x6ed9eba1 + uVar5 + ( uVar7 * 0x20 | uVar7 >> 0x1b );
   uVar13 = uVar17 ^ uVar12 ^ uVar20 ^ uVar29;
   uVar27 = uVar13 << 1 | ( uint )((int)uVar13 < 0);
   uVar3 = ( uVar10 ^ uVar9 ^ uVar7 ) + uVar3 + 0x6ed9eba1 + uVar27 + ( uVar4 * 0x20 | uVar4 >> 0x1b );
   uVar8 = uVar7 >> 2 | uVar7 * 0x40000000;
   uVar13 = uVar22 ^ uVar19 ^ uVar24 ^ uVar21;
   uVar11 = uVar13 << 1 | ( uint )((int)uVar13 < 0);
   uVar7 = uVar4 >> 2 | uVar4 * 0x40000000;
   uVar13 = ( uVar9 ^ uVar8 ^ uVar4 ) + uVar10 + 0x6ed9eba1 + uVar11 + ( uVar3 * 0x20 | uVar3 >> 0x1b );
   uVar4 = uVar12 ^ uVar25 ^ uVar28 ^ uVar5;
   uVar26 = uVar4 << 1 | ( uint )((int)uVar4 < 0);
   uVar4 = uVar3 >> 2 | uVar3 * 0x40000000;
   uVar10 = ( uVar13 * 0x20 | uVar13 >> 0x1b ) + ( uVar8 ^ uVar7 ^ uVar3 ) + uVar9 + 0x6ed9eba1 + uVar26;
   uVar3 = uVar19 ^ uVar15 ^ uVar6 ^ uVar27;
   uVar30 = uVar3 << 1 | ( uint )((int)uVar3 < 0);
   uVar3 = uVar13 >> 2 | uVar13 * 0x40000000;
   uVar9 = ( uVar10 * 0x20 | uVar10 >> 0x1b ) + ( uVar7 ^ uVar4 ^ uVar13 ) + uVar8 + 0x6ed9eba1 + uVar30;
   uVar13 = uVar25 ^ uVar18 ^ uVar23 ^ uVar11;
   uVar17 = uVar13 << 1 | ( uint )((int)uVar13 < 0);
   uVar19 = uVar10 >> 2 | uVar10 * 0x40000000;
   uVar8 = ( uVar9 * 0x20 | uVar9 >> 0x1b ) + uVar7 + 0x6ed9eba1 + uVar17 + ( uVar4 ^ uVar3 ^ uVar10 );
   uVar13 = uVar15 ^ uVar14 ^ uVar29 ^ uVar26;
   uVar15 = uVar13 << 1 | ( uint )((int)uVar13 < 0);
   uVar10 = uVar9 >> 2 | uVar9 * 0x40000000;
   uVar7 = ( uVar8 * 0x20 | uVar8 >> 0x1b ) + uVar4 + 0x6ed9eba1 + uVar15 + ( uVar3 ^ uVar19 ^ uVar9 );
   uVar13 = uVar18 ^ uVar20 ^ uVar21 ^ uVar30;
   uVar4 = uVar13 << 1 | ( uint )((int)uVar13 < 0);
   uVar12 = uVar8 >> 2 | uVar8 * 0x40000000;
   uVar13 = ( uVar7 * 0x20 | uVar7 >> 0x1b ) + uVar3 + 0x6ed9eba1 + uVar4 + ( uVar19 ^ uVar10 ^ uVar8 );
   uVar18 = uVar14 ^ uVar24 ^ uVar5 ^ uVar17;
   uVar8 = uVar18 << 1 | ( uint )((int)uVar18 < 0);
   uVar9 = uVar7 >> 2 | uVar7 * 0x40000000;
   uVar14 = ( uVar13 * 0x20 | uVar13 >> 0x1b ) + uVar19 + 0x6ed9eba1 + uVar8 + ( uVar10 ^ uVar12 ^ uVar7 );
   uVar18 = uVar20 ^ uVar28 ^ uVar27 ^ uVar15;
   uVar22 = uVar18 << 1 | ( uint )((int)uVar18 < 0);
   uVar18 = uVar13 >> 2 | uVar13 * 0x40000000;
   uVar10 = ( uVar14 * 0x20 | uVar14 >> 0x1b ) + uVar10 + 0x6ed9eba1 + uVar22 + ( uVar12 ^ uVar9 ^ uVar13 );
   uVar13 = uVar24 ^ uVar6 ^ uVar11 ^ uVar4;
   uVar24 = uVar13 << 1 | ( uint )((int)uVar13 < 0);
   uVar3 = uVar14 >> 2 | uVar14 * 0x40000000;
   uVar7 = ( uVar10 * 0x20 | uVar10 >> 0x1b ) + uVar12 + 0x6ed9eba1 + uVar24 + ( uVar9 ^ uVar18 ^ uVar14 );
   uVar13 = uVar28 ^ uVar23 ^ uVar26 ^ uVar8;
   uVar16 = uVar13 << 1 | ( uint )((int)uVar13 < 0);
   uVar28 = uVar10 >> 2 | uVar10 * 0x40000000;
   uVar14 = uVar9 + 0x6ed9eba1 + uVar16 + ( uVar18 ^ uVar3 ^ uVar10 ) + ( uVar7 * 0x20 | uVar7 >> 0x1b );
   uVar13 = uVar6 ^ uVar29 ^ uVar30 ^ uVar22;
   uVar13 = uVar13 << 1 | ( uint )((int)uVar13 < 0);
   uVar19 = uVar7 >> 2 | uVar7 * 0x40000000;
   uVar18 = uVar18 + 0x8f1bbcdc + uVar13 + ( uVar14 * 0x20 | uVar14 >> 0x1b ) + ( ( uVar7 | uVar28 ) & uVar3 | uVar7 & uVar28 );
   uVar6 = uVar23 ^ uVar21 ^ uVar17 ^ uVar24;
   uVar23 = uVar6 << 1 | ( uint )((int)uVar6 < 0);
   uVar12 = uVar14 >> 2 | uVar14 * 0x40000000;
   uVar3 = ( uVar14 & uVar19 | ( uVar14 | uVar19 ) & uVar28 ) + uVar3 + 0x8f1bbcdc + uVar23 + ( uVar18 * 0x20 | uVar18 >> 0x1b );
   uVar14 = uVar29 ^ uVar5 ^ uVar15 ^ uVar16;
   uVar9 = uVar14 << 1 | ( uint )((int)uVar14 < 0);
   uVar14 = uVar18 >> 2 | uVar18 * 0x40000000;
   uVar10 = uVar28 + 0x8f1bbcdc + uVar9 + ( uVar3 * 0x20 | uVar3 >> 0x1b ) + ( ( uVar18 | uVar12 ) & uVar19 | uVar18 & uVar12 );
   uVar18 = uVar21 ^ uVar27 ^ uVar4 ^ uVar13;
   uVar20 = uVar18 << 1 | ( uint )((int)uVar18 < 0);
   uVar6 = uVar3 >> 2 | uVar3 * 0x40000000;
   uVar3 = ( uVar3 & uVar14 | ( uVar3 | uVar14 ) & uVar12 ) + uVar19 + 0x8f1bbcdc + uVar20 + ( uVar10 * 0x20 | uVar10 >> 0x1b );
   uVar18 = uVar5 ^ uVar11 ^ uVar8 ^ uVar23;
   uVar7 = uVar18 << 1 | ( uint )((int)uVar18 < 0);
   uVar5 = ( ( uVar10 | uVar6 ) & uVar14 | uVar10 & uVar6 ) + uVar12 + 0x8f1bbcdc + uVar7 + ( uVar3 * 0x20 | uVar3 >> 0x1b );
   uVar10 = uVar10 >> 2 | uVar10 * 0x40000000;
   uVar18 = uVar27 ^ uVar26 ^ uVar22 ^ uVar9;
   uVar27 = uVar18 << 1 | ( uint )((int)uVar18 < 0);
   uVar18 = uVar14 + 0x8f1bbcdc + uVar27 + ( uVar3 & uVar10 | ( uVar3 | uVar10 ) & uVar6 ) + ( uVar5 * 0x20 | uVar5 >> 0x1b );
   uVar12 = uVar3 >> 2 | uVar3 * 0x40000000;
   uVar14 = uVar11 ^ uVar30 ^ uVar24 ^ uVar20;
   uVar19 = uVar14 << 1 | ( uint )((int)uVar14 < 0);
   uVar3 = uVar5 >> 2 | uVar5 * 0x40000000;
   uVar11 = uVar6 + 0x8f1bbcdc + uVar19 + ( uVar18 * 0x20 | uVar18 >> 0x1b ) + ( ( uVar5 | uVar12 ) & uVar10 | uVar5 & uVar12 );
   uVar14 = uVar26 ^ uVar17 ^ uVar16 ^ uVar7;
   uVar28 = uVar14 << 1 | ( uint )((int)uVar14 < 0);
   uVar14 = uVar18 >> 2 | uVar18 * 0x40000000;
   uVar5 = uVar30 ^ uVar15 ^ uVar13 ^ uVar27;
   uVar10 = ( uVar18 & uVar3 | ( uVar18 | uVar3 ) & uVar12 ) + uVar10 + 0x8f1bbcdc + uVar28 + ( uVar11 * 0x20 | uVar11 >> 0x1b );
   uVar18 = uVar5 << 1 | ( uint )((int)uVar5 < 0);
   uVar6 = uVar11 >> 2 | uVar11 * 0x40000000;
   uVar5 = ( ( uVar11 | uVar14 ) & uVar3 | uVar11 & uVar14 ) + uVar12 + 0x8f1bbcdc + uVar18 + ( uVar10 * 0x20 | uVar10 >> 0x1b );
   uVar11 = uVar17 ^ uVar4 ^ uVar23 ^ uVar19;
   uVar25 = uVar11 << 1 | ( uint )((int)uVar11 < 0);
   uVar12 = uVar10 >> 2 | uVar10 * 0x40000000;
   uVar10 = ( uVar10 & uVar6 | ( uVar10 | uVar6 ) & uVar14 ) + uVar3 + 0x8f1bbcdc + uVar25 + ( uVar5 * 0x20 | uVar5 >> 0x1b );
   uVar3 = uVar15 ^ uVar8 ^ uVar9 ^ uVar28;
   uVar21 = uVar3 << 1 | ( uint )((int)uVar3 < 0);
   uVar3 = uVar5 >> 2 | uVar5 * 0x40000000;
   uVar14 = ( ( uVar5 | uVar12 ) & uVar6 | uVar5 & uVar12 ) + uVar14 + 0x8f1bbcdc + uVar21 + ( uVar10 * 0x20 | uVar10 >> 0x1b );
   uVar5 = uVar4 ^ uVar22 ^ uVar20 ^ uVar18;
   uVar17 = uVar5 << 1 | ( uint )((int)uVar5 < 0);
   uVar11 = uVar10 >> 2 | uVar10 * 0x40000000;
   uVar6 = uVar6 + 0x8f1bbcdc + uVar17 + ( uVar10 & uVar3 | ( uVar10 | uVar3 ) & uVar12 ) + ( uVar14 * 0x20 | uVar14 >> 0x1b );
   uVar5 = uVar8 ^ uVar24 ^ uVar7 ^ uVar25;
   uVar26 = uVar5 << 1 | ( uint )((int)uVar5 < 0);
   uVar5 = ( ( uVar14 | uVar11 ) & uVar3 | uVar14 & uVar11 ) + uVar12 + 0x8f1bbcdc + uVar26 + ( uVar6 * 0x20 | uVar6 >> 0x1b );
   uVar4 = uVar14 >> 2 | uVar14 * 0x40000000;
   uVar14 = uVar22 ^ uVar16 ^ uVar27 ^ uVar21;
   uVar22 = uVar14 << 1 | ( uint )((int)uVar14 < 0);
   uVar12 = uVar6 >> 2 | uVar6 * 0x40000000;
   uVar14 = uVar3 + 0x8f1bbcdc + uVar22 + ( uVar6 & uVar4 | ( uVar6 | uVar4 ) & uVar11 ) + ( uVar5 * 0x20 | uVar5 >> 0x1b );
   uVar3 = uVar24 ^ uVar13 ^ uVar19 ^ uVar17;
   uVar24 = uVar3 << 1 | ( uint )((int)uVar3 < 0);
   uVar6 = uVar5 >> 2 | uVar5 * 0x40000000;
   uVar8 = ( ( uVar5 | uVar12 ) & uVar4 | uVar5 & uVar12 ) + uVar11 + 0x8f1bbcdc + uVar24 + ( uVar14 * 0x20 | uVar14 >> 0x1b );
   uVar5 = uVar16 ^ uVar23 ^ uVar28 ^ uVar26;
   uVar10 = uVar5 << 1 | ( uint )((int)uVar5 < 0);
   uVar5 = uVar14 >> 2 | uVar14 * 0x40000000;
   uVar14 = uVar4 + 0x8f1bbcdc + uVar10 + ( uVar14 & uVar6 | ( uVar14 | uVar6 ) & uVar12 ) + ( uVar8 * 0x20 | uVar8 >> 0x1b );
   uVar13 = uVar13 ^ uVar9 ^ uVar18 ^ uVar22;
   uVar3 = uVar13 << 1 | ( uint )((int)uVar13 < 0);
   uVar15 = uVar8 >> 2 | uVar8 * 0x40000000;
   uVar11 = ( ( uVar8 | uVar5 ) & uVar6 | uVar8 & uVar5 ) + uVar12 + 0x8f1bbcdc + uVar3 + ( uVar14 * 0x20 | uVar14 >> 0x1b );
   uVar13 = uVar23 ^ uVar20 ^ uVar25 ^ uVar24;
   uVar4 = uVar13 << 1 | ( uint )((int)uVar13 < 0);
   uVar12 = uVar14 >> 2 | uVar14 * 0x40000000;
   uVar14 = ( uVar14 & uVar15 | ( uVar14 | uVar15 ) & uVar5 ) + uVar6 + 0x8f1bbcdc + uVar4 + ( uVar11 * 0x20 | uVar11 >> 0x1b );
   uVar13 = uVar9 ^ uVar7 ^ uVar21 ^ uVar10;
   uVar8 = uVar13 << 1 | ( uint )((int)uVar13 < 0);
   uVar9 = uVar11 >> 2 | uVar11 * 0x40000000;
   uVar5 = ( ( uVar11 | uVar12 ) & uVar15 | uVar11 & uVar12 ) + uVar5 + 0x8f1bbcdc + uVar8 + ( uVar14 * 0x20 | uVar14 >> 0x1b );
   uVar13 = uVar20 ^ uVar27 ^ uVar17 ^ uVar3;
   uVar13 = uVar13 << 1 | ( uint )((int)uVar13 < 0);
   uVar6 = uVar14 >> 2 | uVar14 * 0x40000000;
   uVar14 = ( uVar14 & uVar9 | ( uVar14 | uVar9 ) & uVar12 ) + uVar15 + 0x8f1bbcdc + uVar13 + ( uVar5 * 0x20 | uVar5 >> 0x1b );
   uVar7 = uVar7 ^ uVar19 ^ uVar26 ^ uVar4;
   uVar15 = uVar7 << 1 | ( uint )((int)uVar7 < 0);
   uVar7 = uVar5 >> 2 | uVar5 * 0x40000000;
   uVar11 = uVar12 + 0xca62c1d6 + uVar15 + ( uVar9 ^ uVar6 ^ uVar5 ) + ( uVar14 * 0x20 | uVar14 >> 0x1b );
   uVar5 = uVar27 ^ uVar28 ^ uVar22 ^ uVar8;
   uVar27 = uVar5 << 1 | ( uint )((int)uVar5 < 0);
   uVar5 = uVar14 >> 2 | uVar14 * 0x40000000;
   uVar12 = uVar9 + 0xca62c1d6 + uVar27 + ( uVar6 ^ uVar7 ^ uVar14 ) + ( uVar11 * 0x20 | uVar11 >> 0x1b );
   uVar14 = uVar19 ^ uVar18 ^ uVar24 ^ uVar13;
   uVar9 = uVar14 << 1 | ( uint )((int)uVar14 < 0);
   uVar19 = uVar11 >> 2 | uVar11 * 0x40000000;
   uVar11 = uVar6 + 0xca62c1d6 + uVar9 + ( uVar7 ^ uVar5 ^ uVar11 ) + ( uVar12 * 0x20 | uVar12 >> 0x1b );
   uVar14 = uVar28 ^ uVar25 ^ uVar10 ^ uVar15;
   uVar14 = uVar14 << 1 | ( uint )((int)uVar14 < 0);
   uVar23 = uVar12 >> 2 | uVar12 * 0x40000000;
   uVar6 = uVar7 + 0xca62c1d6 + uVar14 + ( uVar5 ^ uVar19 ^ uVar12 ) + ( uVar11 * 0x20 | uVar11 >> 0x1b );
   uVar18 = uVar18 ^ uVar21 ^ uVar3 ^ uVar27;
   local_94 = uVar18 << 1 | ( uint )((int)uVar18 < 0);
   uVar5 = uVar5 + 0xca62c1d6 + local_94 + ( uVar19 ^ uVar23 ^ uVar11 ) + ( uVar6 * 0x20 | uVar6 >> 0x1b );
   uVar12 = uVar11 >> 2 | uVar11 * 0x40000000;
   uVar18 = uVar25 ^ uVar17 ^ uVar4 ^ uVar9;
   local_90 = uVar18 << 1 | ( uint )((int)uVar18 < 0);
   uVar11 = uVar6 >> 2 | uVar6 * 0x40000000;
   uVar6 = uVar19 + 0xca62c1d6 + local_90 + ( uVar23 ^ uVar12 ^ uVar6 ) + ( uVar5 * 0x20 | uVar5 >> 0x1b );
   uVar7 = uVar21 ^ uVar26 ^ uVar8 ^ uVar14;
   uVar18 = uVar5 >> 2 | uVar5 * 0x40000000;
   local_8c = uVar7 << 1 | ( uint )((int)uVar7 < 0);
   uVar7 = uVar23 + 0xca62c1d6 + local_8c + ( uVar12 ^ uVar11 ^ uVar5 ) + ( uVar6 * 0x20 | uVar6 >> 0x1b );
   uVar5 = uVar22 ^ uVar17 ^ uVar13 ^ local_94;
   local_88 = uVar5 << 1 | ( uint )((int)uVar5 < 0);
   uVar5 = uVar6 >> 2 | uVar6 * 0x40000000;
   uVar12 = uVar12 + 0xca62c1d6 + local_88 + ( uVar11 ^ uVar18 ^ uVar6 ) + ( uVar7 * 0x20 | uVar7 >> 0x1b );
   uVar6 = uVar26 ^ uVar24 ^ uVar15 ^ local_90;
   local_84 = uVar6 << 1 | ( uint )((int)uVar6 < 0);
   uVar6 = uVar7 >> 2 | uVar7 * 0x40000000;
   uVar11 = uVar11 + 0xca62c1d6 + local_84 + ( uVar18 ^ uVar5 ^ uVar7 ) + ( uVar12 * 0x20 | uVar12 >> 0x1b );
   uVar7 = uVar22 ^ uVar10 ^ uVar27 ^ local_8c;
   local_80 = uVar7 << 1 | ( uint )((int)uVar7 < 0);
   uVar23 = uVar12 >> 2 | uVar12 * 0x40000000;
   uVar7 = uVar18 + 0xca62c1d6 + local_80 + ( uVar5 ^ uVar6 ^ uVar12 ) + ( uVar11 * 0x20 | uVar11 >> 0x1b );
   uVar18 = uVar24 ^ uVar3 ^ uVar9 ^ local_88;
   local_7c = uVar18 << 1 | ( uint )((int)uVar18 < 0);
   uVar12 = uVar5 + 0xca62c1d6 + local_7c + ( uVar6 ^ uVar23 ^ uVar11 ) + ( uVar7 * 0x20 | uVar7 >> 0x1b );
   uVar11 = uVar11 >> 2 | uVar11 * 0x40000000;
   uVar5 = uVar7 >> 2 | uVar7 * 0x40000000;
   uVar18 = uVar4 ^ uVar10 ^ uVar14 ^ local_84;
   local_78 = uVar18 << 1 | ( uint )((int)uVar18 < 0);
   uVar6 = uVar6 + 0xca62c1d6 + local_78 + ( uVar23 ^ uVar11 ^ uVar7 ) + ( uVar12 * 0x20 | uVar12 >> 0x1b );
   uVar18 = uVar8 ^ uVar3 ^ local_94 ^ local_80;
   local_74 = uVar18 << 1 | ( uint )((int)uVar18 < 0);
   uVar7 = uVar12 >> 2 | uVar12 * 0x40000000;
   uVar10 = uVar23 + 0xca62c1d6 + local_74 + ( uVar11 ^ uVar5 ^ uVar12 ) + ( uVar6 * 0x20 | uVar6 >> 0x1b );
   uVar18 = uVar4 ^ uVar13 ^ local_90 ^ local_7c;
   local_70 = uVar18 << 1 | ( uint )((int)uVar18 < 0);
   uVar3 = ( uVar5 ^ uVar7 ^ uVar6 ) + uVar11 + 0xca62c1d6 + local_70 + ( uVar10 * 0x20 | uVar10 >> 0x1b );
   uVar6 = uVar6 >> 2 | uVar6 * 0x40000000;
   uVar18 = uVar8 ^ uVar15 ^ local_8c ^ local_78;
   local_6c = uVar18 << 1 | ( uint )((int)uVar18 < 0);
   uVar8 = uVar10 >> 2 | uVar10 * 0x40000000;
   uVar18 = uVar5 + 0xca62c1d6 + local_6c + ( uVar7 ^ uVar6 ^ uVar10 ) + ( uVar3 * 0x20 | uVar3 >> 0x1b );
   uVar13 = uVar13 ^ uVar27 ^ local_88 ^ local_74;
   local_68 = uVar13 << 1 | ( uint )((int)uVar13 < 0);
   uVar4 = uVar3 >> 2 | uVar3 * 0x40000000;
   uVar13 = uVar7 + 0xca62c1d6 + local_68 + ( uVar6 ^ uVar8 ^ uVar3 ) + ( uVar18 * 0x20 | uVar18 >> 0x1b );
   uVar5 = uVar15 ^ uVar9 ^ local_84 ^ local_70;
   local_64 = uVar5 << 1 | ( uint )((int)uVar5 < 0);
   uVar5 = uVar18 >> 2 | uVar18 * 0x40000000;
   uVar18 = ( uVar13 * 0x20 | uVar13 >> 0x1b ) + uVar6 + 0xca62c1d6 + local_64 + ( uVar8 ^ uVar4 ^ uVar18 );
   local_98 = local_90 ^ uVar14 ^ local_78 ^ local_64;
   uVar14 = uVar27 ^ uVar14 ^ local_80 ^ local_6c;
   local_60 = uVar14 << 1 | ( uint )((int)uVar14 < 0);
   local_44 = uVar13 >> 2 | uVar13 * 0x40000000;
   local_48 = uVar18 >> 2 | uVar18 * 0x40000000;
   uVar13 = ( uVar18 * 0x20 | uVar18 >> 0x1b ) + uVar8 + 0xca62c1d6 + local_60 + ( uVar4 ^ uVar5 ^ uVar13 );
   local_58 = local_98 << 1 | ( uint )((int)local_98 < 0);
   uVar14 = local_94 ^ uVar9 ^ local_7c ^ local_68;
   local_5c = uVar14 << 1 | ( uint )((int)uVar14 < 0);
   local_4c = uVar13 >> 2 | uVar13 * 0x40000000;
   local_50 = ( uVar5 ^ local_44 ^ uVar18 ) + uVar4 + 0xca62c1d6 + local_5c + ( uVar13 * 0x20 | uVar13 >> 0x1b );
   *(uint*)( param_1 + 0x10 ) = local_4c + uVar1;
   local_54 = uVar5 + 0xca62c1d6 + local_58 + ( local_44 ^ local_48 ^ uVar13 ) + ( local_50 * 0x20 | local_50 >> 0x1b );
   *(uint*)( param_1 + 0x14 ) = uVar2 + local_48;
   *(uint*)( param_1 + 0x18 ) = *(int*)( param_1 + 0x18 ) + local_44;
   *(ulong*)( param_1 + 8 ) = CONCAT44(local_50 + uVar32, local_54 + uVar31);
   mbedtls_platform_zeroize(&local_98, 0x58);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 0;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 mbedtls_sha1_update(uint *param_1, undefined8 *param_2, ulong param_3) {
   undefined8 uVar1;
   ulong uVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   undefined8 *puVar6;
   long lVar7;
   ulong uVar8;
   if (param_3 == 0) {
      return 0;
   }

   uVar4 = *param_1;
   uVar5 = uVar4 & 0x3f;
   uVar2 = (ulong)uVar5;
   uVar3 = 0x40 - uVar5;
   *param_1 = uVar4 + (uint)param_3;
   uVar8 = (ulong)uVar3;
   if (CARRY4(uVar4, (uint)param_3)) {
      param_1[1] = param_1[1] + 1;
   }

   if (( uVar5 == 0 ) || ( param_3 < uVar8 )) {
      if (0x3f < param_3) goto LAB_0010152e;
   }
 else {
      puVar6 = (undefined8*)( uVar2 + (long)( param_1 + 7 ) );
      if (uVar3 < 8) {
         if (( uVar3 & 4 ) == 0) {
            if (( uVar3 != 0 ) && ( *(undefined1*)puVar6 = *(undefined1*)param_2(uVar3 & 2) != 0 )) {
               *(undefined2*)( (long)puVar6 + ( uVar8 - 2 ) ) = *(undefined2*)( (long)param_2 + ( uVar8 - 2 ) );
            }

         }
 else {
            *(undefined4*)puVar6 = *(undefined4*)param_2;
            *(undefined4*)( (long)puVar6 + ( uVar8 - 4 ) ) = *(undefined4*)( (long)param_2 + ( uVar8 - 4 ) );
         }

      }
 else {
         *puVar6 = *param_2;
         *(undefined8*)( (long)puVar6 + ( uVar8 - 8 ) ) = *(undefined8*)( (long)param_2 + ( uVar8 - 8 ) );
         lVar7 = (long)puVar6 - ( ( ulong )(puVar6 + 1) & 0xfffffffffffffff8 );
         uVar4 = uVar3 + (int)lVar7 & 0xfffffff8;
         if (7 < uVar4) {
            uVar3 = 0;
            do {
               uVar2 = (ulong)uVar3;
               uVar3 = uVar3 + 8;
               *(undefined8*)( ( ( ulong )(puVar6 + 1) & 0xfffffffffffffff8 ) + uVar2 ) = *(undefined8*)( (long)param_2 + ( uVar2 - lVar7 ) );
            }
 while ( uVar3 < uVar4 );
         }

      }

      uVar1 = mbedtls_internal_sha1_process(param_1, param_1 + 7);
      if ((int)uVar1 != 0) {
         return uVar1;
      }

      param_2 = (undefined8*)( (long)param_2 + uVar8 );
      uVar2 = 0;
      for (param_3 = param_3 - uVar8; 0x3f < param_3; param_3 = param_3 - 0x40) {
         LAB_0010152e:uVar1 = mbedtls_internal_sha1_process(param_1, param_2);
         if ((int)uVar1 != 0) {
            return uVar1;
         }

         param_2 = param_2 + 8;
      }

      if (param_3 == 0) {
         return 0;
      }

   }

   puVar6 = (undefined8*)( (long)param_1 + uVar2 + 0x1c );
   uVar4 = (uint)param_3;
   uVar2 = param_3 & 0xffffffff;
   if (uVar4 < 8) {
      if (( param_3 & 4 ) != 0) {
         *(undefined4*)puVar6 = *(undefined4*)param_2;
         *(undefined4*)( (long)puVar6 + ( uVar2 - 4 ) ) = *(undefined4*)( (long)param_2 + ( uVar2 - 4 ) );
         return 0;
      }

      if (( uVar4 != 0 ) && ( *(undefined1*)puVar6 = *(undefined1*)param_2(param_3 & 2) != 0 )) {
         *(undefined2*)( (long)puVar6 + ( uVar2 - 2 ) ) = *(undefined2*)( (long)param_2 + ( uVar2 - 2 ) );
         return 0;
      }

   }
 else {
      *puVar6 = *param_2;
      *(undefined8*)( (long)puVar6 + ( ( param_3 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)param_2 + ( ( param_3 & 0xffffffff ) - 8 ) );
      lVar7 = (long)puVar6 - ( ( ulong )(puVar6 + 1) & 0xfffffffffffffff8 );
      uVar4 = uVar4 + (int)lVar7 & 0xfffffff8;
      if (7 < uVar4) {
         uVar2 = 0;
         do {
            uVar3 = (int)uVar2 + 8;
            *(undefined8*)( ( ( ulong )(puVar6 + 1) & 0xfffffffffffffff8 ) + uVar2 ) = *(undefined8*)( (long)param_2 + ( uVar2 - lVar7 ) );
            uVar2 = (ulong)uVar3;
         }
 while ( uVar3 < uVar4 );
         return 0;
      }

   }

   return 0;
}
int mbedtls_sha1_finish(uint *param_1, uint *param_2) {
   int iVar1;
   undefined8 *puVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   ulong uVar6;
   uVar3 = ( *param_1 & 0x3f ) + 1;
   *(undefined1*)( (long)param_1 + ( ulong )(*param_1 & 0x3f) + 0x1c ) = 0x80;
   if (uVar3 < 0x39) {
      uVar4 = 0x38 - uVar3;
      puVar2 = (undefined8*)( (long)param_1 + (ulong)uVar3 + 0x1c );
      if (uVar4 < 8) {
         if (( uVar4 & 4 ) == 0) {
            if (( uVar4 != 0 ) && ( *(undefined1*)puVar2 = 0(uVar4 & 2) != 0 )) {
               *(undefined2*)( (long)puVar2 + ( (ulong)uVar4 - 2 ) ) = 0;
            }

         }
 else {
            *(undefined4*)puVar2 = 0;
            *(undefined4*)( (long)puVar2 + ( (ulong)uVar4 - 4 ) ) = 0;
         }

      }
 else {
         *puVar2 = 0;
         *(undefined8*)( (long)puVar2 + ( (ulong)uVar4 - 8 ) ) = 0;
         uVar3 = uVar4 + ( (int)puVar2 - (int)( ( ulong )(puVar2 + 1) & 0xfffffffffffffff8 ) ) & 0xfffffff8;
         if (7 < uVar3) {
            uVar4 = 0;
            do {
               uVar6 = (ulong)uVar4;
               uVar4 = uVar4 + 8;
               *(undefined8*)( ( ( ulong )(puVar2 + 1) & 0xfffffffffffffff8 ) + uVar6 ) = 0;
            }
 while ( uVar4 < uVar3 );
         }

      }

   }
 else {
      if (-uVar3 != -0x40) {
         uVar6 = 0;
         do {
            uVar4 = (int)uVar6 + 1;
            *(undefined1*)( (long)( param_1 + 7 ) + uVar6 + uVar3 ) = 0;
            uVar6 = (ulong)uVar4;
         }
 while ( uVar4 < -uVar3 + 0x40 );
      }

      iVar1 = mbedtls_internal_sha1_process(param_1, param_1 + 7);
      if (iVar1 != 0) goto LAB_00101708;
      *(undefined1(*) [16])( param_1 + 7 ) = (undefined1[16])0x0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      *(undefined1(*) [16])( param_1 + 0xb ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( param_1 + 0xf ) = (undefined1[16])0x0;
   }

   uVar3 = *param_1;
   uVar5 = uVar3 << 3;
   uVar4 = param_1[1] << 3;
   param_1[0x16] = uVar5 >> 0x18 | ( uVar5 & 0xff0000 ) >> 8 | ( uVar5 & 0xff00 ) << 8 | uVar3 << 0x1b;
   param_1[0x15] = uVar4 >> 0x18 | ( uVar4 & 0xff0000 ) >> 8 | ( uVar4 & 0xff00 ) << 8 | ( uVar3 >> 0x1d | uVar4 ) << 0x18;
   iVar1 = mbedtls_internal_sha1_process(param_1, param_1 + 7);
   if (iVar1 == 0) {
      uVar3 = param_1[2];
      *param_2 = uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18;
      for (int i = 0; i < 4; i++) {
         uVar3 = param_1[( i + 3 )];
         param_2[( i + 1 )] = uVar3 >> 24 | ( uVar3 & 16711680 ) >> 8 | ( uVar3 & 65280 ) << 8 | uVar3 << 24;
      }

   }

   LAB_00101708:mbedtls_platform_zeroize(param_1, 0x5c);
   return iVar1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int mbedtls_sha1(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   int iVar1;
   long lVar2;
   undefined8 *puVar3;
   long in_FS_OFFSET;
   undefined8 local_88[3];
   undefined4 local_70;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar3 = local_88;
   for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
   }

   local_70 = 0xc3d2e1f0;
   local_88[1] = __LC2;
   local_88[2] = _LC1;
   *(undefined4*)puVar3 = 0;
   iVar1 = mbedtls_sha1_update(local_88, param_1, param_2);
   if (iVar1 == 0) {
      iVar1 = mbedtls_sha1_finish(local_88, param_3);
   }

   mbedtls_platform_zeroize(local_88, 0x5c);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int mbedtls_sha1_self_test(int param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   undefined8 *puVar4;
   int iVar5;
   long *plVar6;
   undefined *puVar7;
   long in_FS_OFFSET;
   byte bVar8;
   undefined8 local_4c8[3];
   undefined4 local_4b0;
   long local_468;
   long local_460;
   int local_458;
   undefined8 local_448[129];
   long local_40;
   bVar8 = 0;
   puVar7 = &sha1_test_buf;
   plVar6 = &sha1_test_sum;
   lVar3 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar4 = local_4c8;
   for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
   }

   *(undefined4*)puVar4 = 0;
   do {
      if (param_1 != 0) {
         __printf_chk(2, "  SHA-1 test #%d: ", (int)lVar3 + 1);
      }

      local_4b0 = 0xc3d2e1f0;
      local_4c8[2] = _LC1;
      local_4c8[0] = __LC0;
      local_4c8[1] = _UNK_00101bf8;
      if (lVar3 != 2) {
         iVar1 = mbedtls_sha1_update(local_4c8, puVar7, ( &sha1_test_buflen )[lVar3]);
         if (iVar1 == 0) goto LAB_00101925;
         LAB_00101954:if (param_1 != 0) {
            puts("failed");
         }

         goto LAB_00101960;
      }

      iVar5 = 1000;
      puVar4 = local_448;
      for (lVar2 = 0x7d; lVar2 != 0; lVar2 = lVar2 + -1) {
         *puVar4 = 0x6161616161616161;
         puVar4 = puVar4 + (ulong)bVar8 * -2 + 1;
      }

      do {
         iVar1 = mbedtls_sha1_update(local_4c8, local_448, 1000);
         if (iVar1 != 0) goto LAB_00101954;
         iVar5 = iVar5 + -1;
      }
 while ( iVar5 != 0 );
      LAB_00101925:iVar1 = mbedtls_sha1_finish(local_4c8, &local_468);
      if (iVar1 != 0) goto LAB_00101954;
      if (( local_468 != *plVar6 || local_460 != plVar6[1] ) || ( local_458 != (int)plVar6[2] )) {
         iVar1 = 1;
         goto LAB_00101954;
      }

      if (param_1 != 0) {
         puts("passed");
      }

      lVar3 = lVar3 + 1;
      plVar6 = (long*)( (long)plVar6 + 0x14 );
      puVar7 = puVar7 + 0x39;
   }
 while ( lVar3 != 3 );
   if (param_1 != 0) {
      putchar(10);
   }

   LAB_00101960:mbedtls_platform_zeroize(local_4c8, 0x5c);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar1;
}

