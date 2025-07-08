void mbedtls_ripemd160_init(undefined8 *param_1) {
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
void mbedtls_ripemd160_free(long param_1) {
   if (param_1 != 0) {
      mbedtls_platform_zeroize(param_1, 0x5c);
      return;
   }

   return;
}
void mbedtls_ripemd160_clone(undefined8 *param_1, undefined8 *param_2) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 mbedtls_ripemd160_starts(undefined8 *param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   uVar3 = _LC1;
   uVar2 = _UNK_001020a8;
   uVar1 = __LC0;
   *(undefined4*)( param_1 + 3 ) = 0xc3d2e1f0;
   param_1[2] = uVar3;
   *param_1 = uVar1;
   param_1[1] = uVar2;
   return 0;
}
undefined8 mbedtls_internal_ripemd160_process(long param_1, int *param_2) {
   int iVar1;
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
   long in_FS_OFFSET;
   int iVar18;
   int iVar19;
   uint local_a8;
   int local_a4;
   int local_a0;
   uint local_9c;
   uint local_98;
   uint local_94;
   int local_90;
   uint local_8c;
   uint local_88;
   uint local_84;
   int local_80;
   int local_7c;
   int local_78;
   int local_74;
   int local_70;
   int local_6c;
   int local_68;
   int local_64;
   int local_60;
   int local_5c;
   int local_58;
   int local_54;
   int local_50;
   int local_4c;
   undefined8 local_48;
   long local_40;
   local_80 = *param_2;
   local_78 = param_2[2];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_6c = param_2[5];
   local_7c = param_2[1];
   local_74 = param_2[3];
   local_70 = param_2[4];
   local_68 = param_2[6];
   local_64 = param_2[7];
   local_58 = param_2[10];
   local_48 = *(undefined8*)( param_2 + 0xe );
   local_54 = param_2[0xb];
   local_60 = param_2[8];
   iVar18 = (int)local_48;
   iVar19 = (int)( (ulong)local_48 >> 0x20 );
   local_5c = param_2[9];
   iVar1 = *(int*)( param_1 + 0x18 );
   local_50 = param_2[0xc];
   local_4c = param_2[0xd];
   uVar13 = ( *(uint*)( param_1 + 0xc ) ^ *(uint*)( param_1 + 0x10 ) ^ *(uint*)( param_1 + 0x14 ) ) + *(int*)( param_1 + 8 ) + local_80;
   uVar2 = *(uint*)( param_1 + 0x10 ) << 10 | *(uint*)( param_1 + 0x10 ) >> 0x16;
   uVar14 = ( uVar13 * 0x800 | uVar13 >> 0x15 ) + iVar1;
   uVar13 = ( ( *(uint*)( param_1 + 0x10 ) | ~*(uint *)(param_1 + 0x14) ) ^ *(uint*)( param_1 + 0xc ) ) + *(int*)( param_1 + 8 ) + 0x50a28be6 + local_6c;
   uVar3 = ( uVar13 * 0x100 | uVar13 >> 0x18 ) + iVar1;
   uVar13 = ( uVar2 ^ *(uint*)( param_1 + 0xc ) ^ uVar14 ) + iVar1 + local_7c;
   uVar7 = ( uVar13 * 0x4000 | uVar13 >> 0x12 ) + *(int*)( param_1 + 0x14 );
   uVar9 = *(uint*)( param_1 + 0xc ) << 10 | *(uint*)( param_1 + 0xc ) >> 0x16;
   uVar13 = ( ( ~uVar2 | *(uint*)( param_1 + 0xc ) ) ^ uVar3 ) + iVar1 + 0x50a28be6 + iVar18;
   uVar13 = ( uVar13 * 0x200 | uVar13 >> 0x17 ) + *(int*)( param_1 + 0x14 );
   uVar4 = ( uVar14 ^ uVar9 ^ uVar7 ) + local_78 + *(int*)( param_1 + 0x14 );
   uVar5 = ( uVar4 * 0x8000 | uVar4 >> 0x11 ) + uVar2;
   uVar15 = uVar14 * 0x400 | uVar14 >> 0x16;
   uVar4 = uVar3 * 0x400 | uVar3 >> 0x16;
   uVar8 = uVar7 * 0x400 | uVar7 >> 0x16;
   uVar3 = ( ( ~uVar9 | uVar3 ) ^ uVar13 ) + *(int*)( param_1 + 0x14 ) + 0x50a28be6 + local_64;
   uVar7 = ( uVar7 ^ uVar15 ^ uVar5 ) + uVar2 + local_74;
   uVar14 = ( uVar3 * 0x200 | uVar3 >> 0x17 ) + uVar2;
   uVar11 = ( uVar7 * 0x1000 | uVar7 >> 0x14 ) + uVar9;
   uVar3 = uVar13 * 0x400 | uVar13 >> 0x16;
   uVar7 = uVar5 * 0x400 | uVar5 >> 0x16;
   uVar2 = ( ( ~uVar4 | uVar13 ) ^ uVar14 ) + uVar2 + 0x50a28be6 + local_80;
   uVar13 = ( uVar2 * 0x800 | uVar2 >> 0x15 ) + uVar9;
   uVar2 = ( uVar5 ^ uVar8 ^ uVar11 ) + local_70 + uVar9;
   uVar10 = ( uVar2 * 0x20 | uVar2 >> 0x1b ) + uVar15;
   uVar6 = uVar14 * 0x400 | uVar14 >> 0x16;
   uVar2 = ( ( ~uVar3 | uVar14 ) ^ uVar13 ) + uVar9 + 0x50a28be6 + local_5c;
   uVar5 = ( uVar2 * 0x2000 | uVar2 >> 0x13 ) + uVar4;
   uVar12 = uVar11 * 0x400 | uVar11 >> 0x16;
   uVar2 = ( uVar11 ^ uVar7 ^ uVar10 ) + uVar15 + local_6c;
   uVar9 = ( uVar2 * 0x100 | uVar2 >> 0x18 ) + uVar8;
   uVar11 = uVar13 * 0x400 | uVar13 >> 0x16;
   uVar2 = ( ( ~uVar6 | uVar13 ) ^ uVar5 ) + uVar4 + 0x50a28be6 + local_78;
   uVar15 = uVar10 * 0x400 | uVar10 >> 0x16;
   uVar16 = ( uVar2 * 0x8000 | uVar2 >> 0x11 ) + uVar3;
   uVar2 = ( uVar10 ^ uVar12 ^ uVar9 ) + uVar8 + local_68;
   uVar13 = ( uVar2 * 0x80 | uVar2 >> 0x19 ) + uVar7;
   uVar4 = uVar5 * 0x400 | uVar5 >> 0x16;
   uVar2 = ( ( ~uVar11 | uVar5 ) ^ uVar16 ) + uVar3 + 0x50a28be6 + local_54;
   uVar14 = ( uVar2 * 0x8000 | uVar2 >> 0x11 ) + uVar6;
   uVar2 = ( uVar9 ^ uVar15 ^ uVar13 ) + uVar7 + local_64;
   uVar2 = ( uVar2 * 0x200 | uVar2 >> 0x17 ) + uVar12;
   uVar8 = uVar9 * 0x400 | uVar9 >> 0x16;
   uVar17 = uVar16 * 0x400 | uVar16 >> 0x16;
   uVar5 = ( ( ~uVar4 | uVar16 ) ^ uVar14 ) + uVar6 + 0x50a28be6 + local_70;
   uVar3 = uVar13 * 0x400 | uVar13 >> 0x16;
   uVar5 = ( uVar5 * 0x20 | uVar5 >> 0x1b ) + uVar11;
   uVar13 = ( uVar13 ^ uVar8 ^ uVar2 ) + uVar12 + local_60;
   uVar7 = ( uVar13 * 0x800 | uVar13 >> 0x15 ) + uVar15;
   uVar6 = uVar14 * 0x400 | uVar14 >> 0x16;
   uVar14 = ( ( ~uVar17 | uVar14 ) ^ uVar5 ) + uVar11 + 0x50a28be6 + local_4c;
   uVar13 = uVar2 * 0x400 | uVar2 >> 0x16;
   uVar11 = ( uVar14 * 0x80 | uVar14 >> 0x19 ) + uVar4;
   uVar2 = ( uVar2 ^ uVar3 ^ uVar7 ) + uVar15 + local_5c;
   uVar9 = ( uVar2 * 0x2000 | uVar2 >> 0x13 ) + uVar8;
   uVar2 = ( ( ~uVar6 | uVar5 ) ^ uVar11 ) + uVar4 + 0x50a28be6 + local_68;
   uVar10 = ( uVar2 * 0x80 | uVar2 >> 0x19 ) + uVar17;
   uVar5 = uVar5 * 0x400 | uVar5 >> 0x16;
   uVar14 = uVar7 * 0x400 | uVar7 >> 0x16;
   uVar2 = ( uVar7 ^ uVar13 ^ uVar9 ) + uVar8 + local_58;
   uVar4 = ( uVar2 * 0x4000 | uVar2 >> 0x12 ) + uVar3;
   uVar12 = uVar11 * 0x400 | uVar11 >> 0x16;
   uVar2 = ( ( ~uVar5 | uVar11 ) ^ uVar10 ) + uVar17 + 0x50a28be6 + iVar19;
   uVar11 = uVar9 * 0x400 | uVar9 >> 0x16;
   uVar8 = ( uVar2 * 0x100 | uVar2 >> 0x18 ) + uVar6;
   uVar2 = ( uVar9 ^ uVar14 ^ uVar4 ) + uVar3 + local_54;
   uVar16 = ( uVar2 * 0x8000 | uVar2 >> 0x11 ) + uVar13;
   uVar15 = uVar10 * 0x400 | uVar10 >> 0x16;
   uVar2 = ( ( ~uVar12 | uVar10 ) ^ uVar8 ) + uVar6 + 0x50a28be6 + local_60;
   uVar3 = ( uVar2 * 0x800 | uVar2 >> 0x15 ) + uVar5;
   uVar2 = ( uVar4 ^ uVar11 ^ uVar16 ) + uVar13 + local_50;
   uVar7 = ( uVar2 * 0x40 | uVar2 >> 0x1a ) + uVar14;
   uVar4 = uVar4 * 0x400 | uVar4 >> 0x16;
   uVar9 = uVar8 * 0x400 | uVar8 >> 0x16;
   uVar2 = ( ( ~uVar15 | uVar8 ) ^ uVar3 ) + uVar5 + 0x50a28be6 + local_7c;
   uVar17 = uVar16 * 0x400 | uVar16 >> 0x16;
   uVar2 = ( uVar2 * 0x4000 | uVar2 >> 0x12 ) + uVar12;
   uVar13 = ( uVar16 ^ uVar4 ^ uVar7 ) + uVar14 + local_4c;
   uVar5 = ( uVar13 * 0x80 | uVar13 >> 0x19 ) + uVar11;
   uVar13 = uVar3 * 0x400 | uVar3 >> 0x16;
   uVar3 = ( ( ~uVar9 | uVar3 ) ^ uVar2 ) + uVar12 + 0x50a28be6 + local_58;
   uVar6 = uVar7 * 0x400 | uVar7 >> 0x16;
   uVar3 = ( uVar3 * 0x4000 | uVar3 >> 0x12 ) + uVar15;
   uVar7 = ( uVar7 ^ uVar17 ^ uVar5 ) + uVar11 + iVar18;
   uVar11 = ( uVar7 * 0x200 | uVar7 >> 0x17 ) + uVar4;
   uVar7 = ( ( ~uVar13 | uVar2 ) ^ uVar3 ) + uVar15 + 0x50a28be6 + local_74;
   uVar8 = ( uVar7 * 0x1000 | uVar7 >> 0x14 ) + uVar9;
   uVar2 = uVar2 * 0x400 | uVar2 >> 0x16;
   uVar7 = uVar5 * 0x400 | uVar5 >> 0x16;
   uVar4 = ( uVar5 ^ uVar6 ^ uVar11 ) + uVar4 + iVar19;
   uVar10 = ( uVar4 * 0x100 | uVar4 >> 0x18 ) + uVar17;
   uVar14 = uVar3 * 0x400 | uVar3 >> 0x16;
   uVar3 = ( ( ~uVar2 | uVar3 ) ^ uVar8 ) + uVar9 + 0x50a28be6 + local_50;
   uVar15 = uVar11 * 0x400 | uVar11 >> 0x16;
   uVar3 = ( uVar3 * 0x40 | uVar3 >> 0x1a ) + uVar13;
   uVar4 = ( ( uVar11 ^ uVar7 ) & uVar10 ^ uVar7 ) + uVar17 + 0x5a827999 + local_64;
   uVar5 = ( uVar4 * 0x80 | uVar4 >> 0x19 ) + uVar6;
   uVar11 = uVar8 * 0x400 | uVar8 >> 0x16;
   uVar13 = ( ( uVar8 ^ uVar3 ) & uVar14 ^ uVar8 ) + uVar13 + 0x5c4dd124 + local_68;
   uVar8 = ( uVar13 * 0x200 | uVar13 >> 0x17 ) + uVar2;
   uVar13 = ( ( uVar10 ^ uVar15 ) & uVar5 ^ uVar15 ) + uVar6 + 0x5a827999 + local_70;
   uVar10 = uVar10 * 0x400 | uVar10 >> 0x16;
   uVar13 = ( uVar13 * 0x40 | uVar13 >> 0x1a ) + uVar7;
   uVar4 = uVar3 * 0x400 | uVar3 >> 0x16;
   uVar2 = ( ( uVar3 ^ uVar8 ) & uVar11 ^ uVar3 ) + uVar2 + 0x5c4dd124 + local_54;
   uVar9 = uVar5 * 0x400 | uVar5 >> 0x16;
   uVar6 = ( uVar2 * 0x2000 | uVar2 >> 0x13 ) + uVar14;
   uVar2 = uVar7 + 0x5a827999 + local_4c + ( ( uVar5 ^ uVar10 ) & uVar13 ^ uVar10 );
   uVar5 = ( uVar2 * 0x100 | uVar2 >> 0x18 ) + uVar15;
   uVar12 = uVar8 * 0x400 | uVar8 >> 0x16;
   uVar2 = ( ( uVar8 ^ uVar6 ) & uVar4 ^ uVar8 ) + uVar14 + 0x5c4dd124 + local_74;
   uVar3 = uVar13 * 0x400 | uVar13 >> 0x16;
   uVar2 = ( uVar2 * 0x8000 | uVar2 >> 0x11 ) + uVar11;
   uVar13 = ( ( uVar13 ^ uVar9 ) & uVar5 ^ uVar9 ) + uVar15 + 0x5a827999 + local_7c;
   uVar14 = ( uVar13 * 0x2000 | uVar13 >> 0x13 ) + uVar10;
   uVar8 = uVar6 * 0x400 | uVar6 >> 0x16;
   uVar13 = ( ( uVar6 ^ uVar2 ) & uVar12 ^ uVar6 ) + uVar11 + 0x5c4dd124 + local_64;
   uVar7 = uVar5 * 0x400 | uVar5 >> 0x16;
   uVar15 = ( uVar13 * 0x80 | uVar13 >> 0x19 ) + uVar4;
   uVar13 = uVar10 + 0x5a827999 + local_58 + ( ( uVar5 ^ uVar3 ) & uVar14 ^ uVar3 );
   uVar11 = ( uVar13 * 0x800 | uVar13 >> 0x15 ) + uVar9;
   uVar13 = uVar2 * 0x400 | uVar2 >> 0x16;
   uVar2 = ( ( uVar2 ^ uVar15 ) & uVar8 ^ uVar2 ) + uVar4 + 0x5c4dd124 + local_80;
   uVar6 = uVar14 * 0x400 | uVar14 >> 0x16;
   uVar5 = ( uVar2 * 0x1000 | uVar2 >> 0x14 ) + uVar12;
   uVar2 = ( ( uVar14 ^ uVar7 ) & uVar11 ^ uVar7 ) + uVar9 + 0x5a827999 + local_68;
   uVar4 = ( uVar2 * 0x200 | uVar2 >> 0x17 ) + uVar3;
   uVar2 = ( ( uVar15 ^ uVar5 ) & uVar13 ^ uVar15 ) + uVar12 + 0x5c4dd124 + local_4c;
   uVar15 = uVar15 * 0x400 | uVar15 >> 0x16;
   uVar14 = ( uVar2 * 0x100 | uVar2 >> 0x18 ) + uVar8;
   uVar10 = uVar11 * 0x400 | uVar11 >> 0x16;
   uVar2 = ( ( uVar11 ^ uVar6 ) & uVar4 ^ uVar6 ) + uVar3 + 0x5a827999 + iVar19;
   uVar11 = ( uVar2 * 0x80 | uVar2 >> 0x19 ) + uVar7;
   uVar9 = uVar5 * 0x400 | uVar5 >> 0x16;
   uVar2 = ( ( uVar5 ^ uVar14 ) & uVar15 ^ uVar5 ) + uVar8 + 0x5c4dd124 + local_6c;
   uVar5 = uVar4 * 0x400 | uVar4 >> 0x16;
   uVar3 = ( uVar2 * 0x200 | uVar2 >> 0x17 ) + uVar13;
   uVar2 = ( ( uVar4 ^ uVar10 ) & uVar11 ^ uVar10 ) + uVar7 + 0x5a827999 + local_74;
   uVar7 = ( uVar2 * 0x8000 | uVar2 >> 0x11 ) + uVar6;
   uVar8 = uVar14 * 0x400 | uVar14 >> 0x16;
   uVar2 = ( ( uVar14 ^ uVar3 ) & uVar9 ^ uVar14 ) + uVar13 + 0x5c4dd124 + local_58;
   uVar4 = ( uVar2 * 0x800 | uVar2 >> 0x15 ) + uVar15;
   uVar12 = uVar11 * 0x400 | uVar11 >> 0x16;
   uVar2 = ( ( uVar11 ^ uVar5 ) & uVar7 ^ uVar5 ) + uVar6 + 0x5a827999 + local_50;
   uVar2 = ( uVar2 * 0x80 | uVar2 >> 0x19 ) + uVar10;
   uVar13 = uVar3 * 0x400 | uVar3 >> 0x16;
   uVar3 = ( ( uVar3 ^ uVar4 ) & uVar8 ^ uVar3 ) + uVar15 + 0x5c4dd124 + param_2[0xe];
   uVar6 = uVar7 * 0x400 | uVar7 >> 0x16;
   uVar3 = ( uVar3 * 0x80 | uVar3 >> 0x19 ) + uVar9;
   uVar7 = ( ( uVar7 ^ uVar12 ) & uVar2 ^ uVar12 ) + uVar10 + 0x5a827999 + local_80;
   uVar10 = ( uVar7 * 0x1000 | uVar7 >> 0x14 ) + uVar5;
   uVar7 = uVar4 * 0x400 | uVar4 >> 0x16;
   uVar4 = ( ( uVar4 ^ uVar3 ) & uVar13 ^ uVar4 ) + uVar9 + 0x5c4dd124 + param_2[0xf];
   uVar11 = ( uVar4 * 0x80 | uVar4 >> 0x19 ) + uVar8;
   uVar4 = ( ( uVar2 ^ uVar6 ) & uVar10 ^ uVar6 ) + uVar5 + 0x5a827999 + local_5c;
   uVar9 = ( uVar4 * 0x8000 | uVar4 >> 0x11 ) + uVar12;
   uVar2 = uVar2 * 0x400 | uVar2 >> 0x16;
   uVar14 = uVar3 * 0x400 | uVar3 >> 0x16;
   uVar3 = ( ( uVar3 ^ uVar11 ) & uVar7 ^ uVar3 ) + uVar8 + 0x5c4dd124 + local_60;
   uVar15 = uVar10 * 0x400 | uVar10 >> 0x16;
   uVar3 = ( uVar3 * 0x1000 | uVar3 >> 0x14 ) + uVar13;
   uVar4 = ( ( uVar10 ^ uVar2 ) & uVar9 ^ uVar2 ) + uVar12 + 0x5a827999 + local_6c;
   uVar5 = ( uVar4 * 0x200 | uVar4 >> 0x17 ) + uVar6;
   uVar8 = uVar11 * 0x400 | uVar11 >> 0x16;
   uVar13 = ( ( uVar11 ^ uVar3 ) & uVar14 ^ uVar11 ) + uVar13 + 0x5c4dd124 + local_50;
   uVar11 = uVar9 * 0x400 | uVar9 >> 0x16;
   uVar10 = ( uVar13 * 0x80 | uVar13 >> 0x19 ) + uVar7;
   uVar13 = ( ( uVar9 ^ uVar15 ) & uVar5 ^ uVar15 ) + uVar6 + 0x5a827999 + local_78;
   uVar13 = ( uVar13 * 0x800 | uVar13 >> 0x15 ) + uVar2;
   uVar4 = uVar3 * 0x400 | uVar3 >> 0x16;
   uVar3 = ( ( uVar3 ^ uVar10 ) & uVar8 ^ uVar3 ) + uVar7 + 0x5c4dd124 + local_70;
   uVar9 = uVar5 * 0x400 | uVar5 >> 0x16;
   uVar7 = ( uVar3 * 0x40 | uVar3 >> 0x1a ) + uVar14;
   uVar2 = ( ( uVar5 ^ uVar11 ) & uVar13 ^ uVar11 ) + uVar2 + 0x5a827999 + iVar18;
   uVar5 = ( uVar2 * 0x80 | uVar2 >> 0x19 ) + uVar15;
   uVar12 = uVar10 * 0x400 | uVar10 >> 0x16;
   uVar2 = ( ( uVar10 ^ uVar7 ) & uVar4 ^ uVar10 ) + uVar14 + 0x5c4dd124 + local_5c;
   uVar3 = uVar13 * 0x400 | uVar13 >> 0x16;
   uVar2 = ( uVar2 * 0x8000 | uVar2 >> 0x11 ) + uVar8;
   uVar13 = ( ( uVar13 ^ uVar9 ) & uVar5 ^ uVar9 ) + uVar15 + 0x5a827999 + local_54;
   uVar14 = ( uVar13 * 0x2000 | uVar13 >> 0x13 ) + uVar11;
   uVar13 = ( ( uVar7 ^ uVar2 ) & uVar12 ^ uVar7 ) + uVar8 + 0x5c4dd124 + local_7c;
   uVar10 = ( uVar13 * 0x2000 | uVar13 >> 0x13 ) + uVar4;
   uVar8 = uVar7 * 0x400 | uVar7 >> 0x16;
   uVar7 = uVar5 * 0x400 | uVar5 >> 0x16;
   uVar13 = ( ( uVar5 ^ uVar3 ) & uVar14 ^ uVar3 ) + uVar11 + 0x5a827999 + local_60;
   uVar11 = ( uVar13 * 0x1000 | uVar13 >> 0x14 ) + uVar9;
   uVar13 = uVar2 * 0x400 | uVar2 >> 0x16;
   uVar2 = ( ( uVar2 ^ uVar10 ) & uVar8 ^ uVar2 ) + uVar4 + 0x5c4dd124 + local_78;
   uVar6 = uVar14 * 0x400 | uVar14 >> 0x16;
   uVar5 = ( uVar2 * 0x800 | uVar2 >> 0x15 ) + uVar12;
   uVar2 = ( ( ~uVar14 | uVar11 ) ^ uVar7 ) + uVar9 + 0x6ed9eba1 + local_74;
   uVar9 = uVar10 * 0x400 | uVar10 >> 0x16;
   uVar4 = ( uVar2 * 0x800 | uVar2 >> 0x15 ) + uVar3;
   uVar2 = ( ( ~uVar10 | uVar5 ) ^ uVar13 ) + uVar12 + 0x6d703ef3 + iVar19;
   uVar14 = ( uVar2 * 0x200 | uVar2 >> 0x17 ) + uVar8;
   uVar2 = ( ( ~uVar11 | uVar4 ) ^ uVar6 ) + uVar3 + 0x6ed9eba1 + local_58;
   uVar12 = ( uVar2 * 0x2000 | uVar2 >> 0x13 ) + uVar7;
   uVar15 = uVar11 * 0x400 | uVar11 >> 0x16;
   uVar10 = uVar5 * 0x400 | uVar5 >> 0x16;
   uVar2 = ( ( ~uVar5 | uVar14 ) ^ uVar9 ) + uVar8 + 0x6d703ef3 + local_6c;
   uVar5 = uVar4 * 0x400 | uVar4 >> 0x16;
   uVar3 = ( uVar2 * 0x80 | uVar2 >> 0x19 ) + uVar13;
   uVar2 = ( ( ~uVar4 | uVar12 ) ^ uVar15 ) + uVar7 + 0x6ed9eba1 + iVar18;
   uVar11 = uVar14 * 0x400 | uVar14 >> 0x16;
   uVar8 = ( uVar2 * 0x40 | uVar2 >> 0x1a ) + uVar6;
   uVar2 = ( ( ~uVar14 | uVar3 ) ^ uVar10 ) + uVar13 + 0x6d703ef3 + local_7c;
   uVar4 = ( uVar2 * 0x8000 | uVar2 >> 0x11 ) + uVar9;
   uVar7 = uVar6 + 0x6ed9eba1 + local_70 + ( ( ~uVar12 | uVar8 ) ^ uVar5 );
   uVar13 = uVar3 * 0x400 | uVar3 >> 0x16;
   uVar2 = uVar12 * 0x400 | uVar12 >> 0x16;
   uVar14 = ( uVar7 * 0x80 | uVar7 >> 0x19 ) + uVar15;
   uVar3 = ( ( ~uVar3 | uVar4 ) ^ uVar11 ) + uVar9 + 0x6d703ef3 + local_74;
   uVar12 = ( uVar3 * 0x800 | uVar3 >> 0x15 ) + uVar10;
   uVar9 = uVar8 * 0x400 | uVar8 >> 0x16;
   uVar3 = ( ( ~uVar8 | uVar14 ) ^ uVar2 ) + uVar15 + 0x6ed9eba1 + local_5c;
   uVar7 = uVar4 * 0x400 | uVar4 >> 0x16;
   uVar15 = ( uVar3 * 0x4000 | uVar3 >> 0x12 ) + uVar5;
   uVar3 = ( ( ~uVar4 | uVar12 ) ^ uVar13 ) + uVar10 + 0x6d703ef3 + local_64;
   uVar6 = uVar14 * 0x400 | uVar14 >> 0x16;
   uVar8 = ( uVar3 * 0x100 | uVar3 >> 0x18 ) + uVar11;
   uVar3 = ( ( ~uVar14 | uVar15 ) ^ uVar9 ) + uVar5 + 0x6ed9eba1 + iVar19;
   uVar16 = uVar12 * 0x400 | uVar12 >> 0x16;
   uVar5 = ( uVar3 * 0x200 | uVar3 >> 0x17 ) + uVar2;
   uVar3 = ( ( ~uVar12 | uVar8 ) ^ uVar7 ) + uVar11 + 0x6d703ef3 + iVar18;
   uVar12 = uVar15 * 0x400 | uVar15 >> 0x16;
   uVar4 = ( uVar3 * 0x40 | uVar3 >> 0x1a ) + uVar13;
   uVar2 = ( ( ~uVar15 | uVar5 ) ^ uVar6 ) + uVar2 + 0x6ed9eba1 + local_60;
   uVar14 = ( uVar2 * 0x2000 | uVar2 >> 0x13 ) + uVar9;
   uVar2 = ( ( ~uVar8 | uVar4 ) ^ uVar16 ) + uVar13 + 0x6d703ef3 + local_68;
   uVar10 = uVar8 * 0x400 | uVar8 >> 0x16;
   uVar2 = ( uVar2 * 0x40 | uVar2 >> 0x1a ) + uVar7;
   uVar11 = uVar5 * 0x400 | uVar5 >> 0x16;
   uVar13 = ( ( ~uVar5 | uVar14 ) ^ uVar12 ) + uVar9 + 0x6ed9eba1 + local_7c;
   uVar5 = uVar4 * 0x400 | uVar4 >> 0x16;
   uVar3 = ( uVar13 * 0x8000 | uVar13 >> 0x11 ) + uVar6;
   uVar13 = ( ( ~uVar4 | uVar2 ) ^ uVar10 ) + uVar7 + 0x6d703ef3 + local_5c;
   uVar9 = uVar14 * 0x400 | uVar14 >> 0x16;
   uVar7 = ( uVar13 * 0x4000 | uVar13 >> 0x12 ) + uVar16;
   uVar4 = ( ( ~uVar14 | uVar3 ) ^ uVar11 ) + uVar6 + 0x6ed9eba1 + local_78;
   uVar13 = uVar2 * 0x400 | uVar2 >> 0x16;
   uVar4 = ( uVar4 * 0x4000 | uVar4 >> 0x12 ) + uVar12;
   uVar2 = ( ( ~uVar2 | uVar7 ) ^ uVar5 ) + uVar16 + 0x6d703ef3 + local_54;
   uVar14 = ( uVar2 * 0x1000 | uVar2 >> 0x14 ) + uVar10;
   uVar2 = ( ( ~uVar3 | uVar4 ) ^ uVar9 ) + uVar12 + 0x6ed9eba1 + local_64;
   uVar15 = ( uVar2 * 0x100 | uVar2 >> 0x18 ) + uVar11;
   uVar2 = uVar3 * 0x400 | uVar3 >> 0x16;
   uVar8 = uVar7 * 0x400 | uVar7 >> 0x16;
   uVar3 = ( ( ~uVar7 | uVar14 ) ^ uVar13 ) + uVar10 + 0x6d703ef3 + local_60;
   uVar7 = uVar4 * 0x400 | uVar4 >> 0x16;
   uVar10 = ( uVar3 * 0x2000 | uVar3 >> 0x13 ) + uVar5;
   uVar3 = ( ( ~uVar4 | uVar15 ) ^ uVar2 ) + uVar11 + 0x6ed9eba1 + local_80;
   uVar6 = uVar14 * 0x400 | uVar14 >> 0x16;
   uVar11 = ( uVar3 * 0x2000 | uVar3 >> 0x13 ) + uVar9;
   uVar3 = ( ( ~uVar14 | uVar10 ) ^ uVar8 ) + uVar5 + 0x6d703ef3 + local_50;
   uVar12 = uVar15 * 0x400 | uVar15 >> 0x16;
   uVar5 = ( uVar3 * 0x20 | uVar3 >> 0x1b ) + uVar13;
   uVar3 = ( ( ~uVar15 | uVar11 ) ^ uVar7 ) + uVar9 + 0x6ed9eba1 + local_68;
   uVar15 = uVar10 * 0x400 | uVar10 >> 0x16;
   uVar4 = ( uVar3 * 0x40 | uVar3 >> 0x1a ) + uVar2;
   uVar13 = ( ( ~uVar10 | uVar5 ) ^ uVar6 ) + uVar13 + 0x6d703ef3 + local_78;
   uVar14 = ( uVar13 * 0x4000 | uVar13 >> 0x12 ) + uVar8;
   uVar10 = uVar11 * 0x400 | uVar11 >> 0x16;
   uVar2 = ( ( ~uVar11 | uVar4 ) ^ uVar12 ) + uVar2 + 0x6ed9eba1 + local_4c;
   uVar11 = uVar5 * 0x400 | uVar5 >> 0x16;
   uVar2 = ( uVar2 * 0x20 | uVar2 >> 0x1b ) + uVar7;
   uVar13 = ( ( ~uVar5 | uVar14 ) ^ uVar15 ) + uVar8 + 0x6d703ef3 + local_58;
   uVar5 = uVar4 * 0x400 | uVar4 >> 0x16;
   uVar3 = ( uVar13 * 0x2000 | uVar13 >> 0x13 ) + uVar6;
   uVar13 = ( ( ~uVar4 | uVar2 ) ^ uVar10 ) + uVar7 + 0x6ed9eba1 + local_54;
   uVar9 = uVar14 * 0x400 | uVar14 >> 0x16;
   uVar7 = ( uVar13 * 0x1000 | uVar13 >> 0x14 ) + uVar12;
   uVar4 = ( ( ~uVar14 | uVar3 ) ^ uVar11 ) + uVar6 + 0x6d703ef3 + local_80;
   uVar13 = uVar2 * 0x400 | uVar2 >> 0x16;
   uVar4 = ( uVar4 * 0x2000 | uVar4 >> 0x13 ) + uVar15;
   uVar2 = ( ( ~uVar2 | uVar7 ) ^ uVar5 ) + uVar12 + 0x6ed9eba1 + local_6c;
   uVar14 = ( uVar2 * 0x80 | uVar2 >> 0x19 ) + uVar10;
   uVar6 = ( ( ~uVar3 | uVar4 ) ^ uVar9 ) + uVar15 + 0x6d703ef3 + local_70;
   uVar2 = uVar3 * 0x400 | uVar3 >> 0x16;
   uVar15 = ( uVar6 * 0x80 | uVar6 >> 0x19 ) + uVar11;
   uVar8 = uVar7 * 0x400 | uVar7 >> 0x16;
   uVar3 = ( ( ~uVar7 | uVar14 ) ^ uVar13 ) + uVar10 + 0x6ed9eba1 + local_50;
   uVar7 = uVar4 * 0x400 | uVar4 >> 0x16;
   uVar10 = ( uVar3 * 0x20 | uVar3 >> 0x1b ) + uVar5;
   uVar3 = ( ( ~uVar4 | uVar15 ) ^ uVar2 ) + uVar11 + 0x6d703ef3 + local_4c;
   uVar11 = ( uVar3 * 0x20 | uVar3 >> 0x1b ) + uVar9;
   uVar6 = uVar14 * 0x400 | uVar14 >> 0x16;
   uVar3 = ( ( uVar14 ^ uVar10 ) & uVar8 ^ uVar14 ) + uVar5 + 0x8f1bbcdc + local_7c;
   uVar12 = uVar15 * 0x400 | uVar15 >> 0x16;
   uVar5 = ( uVar3 * 0x800 | uVar3 >> 0x15 ) + uVar13;
   uVar3 = ( ( uVar15 ^ uVar7 ) & uVar11 ^ uVar7 ) + uVar9 + 0x7a6d76e9 + local_60;
   uVar4 = ( uVar3 * 0x8000 | uVar3 >> 0x11 ) + uVar2;
   uVar13 = ( ( uVar10 ^ uVar5 ) & uVar6 ^ uVar10 ) + uVar13 + 0x8f1bbcdc + local_5c;
   uVar15 = uVar10 * 0x400 | uVar10 >> 0x16;
   uVar10 = uVar11 * 0x400 | uVar11 >> 0x16;
   uVar14 = ( uVar13 * 0x1000 | uVar13 >> 0x14 ) + uVar8;
   uVar2 = ( ( uVar11 ^ uVar12 ) & uVar4 ^ uVar12 ) + uVar2 + 0x7a6d76e9 + local_68;
   uVar2 = ( uVar2 * 0x20 | uVar2 >> 0x1b ) + uVar7;
   uVar9 = uVar5 * 0x400 | uVar5 >> 0x16;
   uVar13 = ( ( uVar5 ^ uVar14 ) & uVar15 ^ uVar5 ) + uVar8 + 0x8f1bbcdc + local_54;
   uVar5 = uVar4 * 0x400 | uVar4 >> 0x16;
   uVar3 = ( uVar13 * 0x4000 | uVar13 >> 0x12 ) + uVar6;
   uVar13 = ( ( uVar4 ^ uVar10 ) & uVar2 ^ uVar10 ) + uVar7 + 0x7a6d76e9 + local_70;
   uVar7 = ( uVar13 * 0x100 | uVar13 >> 0x18 ) + uVar12;
   uVar8 = uVar14 * 0x400 | uVar14 >> 0x16;
   uVar13 = ( ( uVar14 ^ uVar3 ) & uVar9 ^ uVar14 ) + uVar6 + 0x8f1bbcdc + local_58;
   uVar4 = ( uVar13 * 0x8000 | uVar13 >> 0x11 ) + uVar15;
   uVar13 = uVar2 * 0x400 | uVar2 >> 0x16;
   uVar2 = ( ( uVar2 ^ uVar5 ) & uVar7 ^ uVar5 ) + uVar12 + 0x7a6d76e9 + local_7c;
   uVar14 = ( uVar2 * 0x800 | uVar2 >> 0x15 ) + uVar10;
   uVar2 = uVar3 * 0x400 | uVar3 >> 0x16;
   uVar3 = ( ( uVar3 ^ uVar4 ) & uVar8 ^ uVar3 ) + uVar15 + 0x8f1bbcdc + local_80;
   uVar6 = uVar7 * 0x400 | uVar7 >> 0x16;
   uVar15 = ( uVar3 * 0x4000 | uVar3 >> 0x12 ) + uVar9;
   uVar3 = ( ( uVar7 ^ uVar13 ) & uVar14 ^ uVar13 ) + uVar10 + 0x7a6d76e9 + local_74;
   uVar11 = ( uVar3 * 0x4000 | uVar3 >> 0x12 ) + uVar5;
   uVar7 = uVar4 * 0x400 | uVar4 >> 0x16;
   uVar3 = ( ( uVar4 ^ uVar15 ) & uVar2 ^ uVar4 ) + uVar9 + 0x8f1bbcdc + local_60;
   uVar9 = ( uVar3 * 0x8000 | uVar3 >> 0x11 ) + uVar8;
   uVar3 = ( ( uVar14 ^ uVar6 ) & uVar11 ^ uVar6 ) + uVar5 + 0x7a6d76e9 + local_54;
   uVar14 = uVar14 * 0x400 | uVar14 >> 0x16;
   uVar5 = ( uVar3 * 0x4000 | uVar3 >> 0x12 ) + uVar13;
   uVar12 = uVar15 * 0x400 | uVar15 >> 0x16;
   uVar3 = ( ( uVar15 ^ uVar9 ) & uVar7 ^ uVar15 ) + uVar8 + 0x8f1bbcdc + local_50;
   uVar15 = uVar11 * 0x400 | uVar11 >> 0x16;
   uVar4 = ( uVar3 * 0x200 | uVar3 >> 0x17 ) + uVar2;
   uVar13 = ( ( uVar11 ^ uVar14 ) & uVar5 ^ uVar14 ) + uVar13 + 0x7a6d76e9 + iVar19;
   uVar8 = ( uVar13 * 0x40 | uVar13 >> 0x1a ) + uVar6;
   uVar10 = uVar9 * 0x400 | uVar9 >> 0x16;
   uVar2 = ( ( uVar9 ^ uVar4 ) & uVar12 ^ uVar9 ) + uVar2 + 0x8f1bbcdc + local_70;
   uVar11 = uVar5 * 0x400 | uVar5 >> 0x16;
   uVar2 = ( uVar2 * 0x100 | uVar2 >> 0x18 ) + uVar7;
   uVar13 = ( ( uVar5 ^ uVar15 ) & uVar8 ^ uVar15 ) + uVar6 + 0x7a6d76e9 + local_80;
   uVar3 = ( uVar13 * 0x4000 | uVar13 >> 0x12 ) + uVar14;
   uVar5 = uVar4 * 0x400 | uVar4 >> 0x16;
   uVar13 = ( ( uVar4 ^ uVar2 ) & uVar10 ^ uVar4 ) + uVar7 + 0x8f1bbcdc + local_4c;
   uVar9 = uVar8 * 0x400 | uVar8 >> 0x16;
   uVar6 = ( uVar13 * 0x200 | uVar13 >> 0x17 ) + uVar12;
   uVar13 = ( ( uVar8 ^ uVar11 ) & uVar3 ^ uVar11 ) + uVar14 + 0x7a6d76e9 + local_6c;
   uVar4 = ( uVar13 * 0x40 | uVar13 >> 0x1a ) + uVar15;
   uVar13 = uVar2 * 0x400 | uVar2 >> 0x16;
   uVar7 = ( ( uVar2 ^ uVar6 ) & uVar5 ^ uVar2 ) + uVar12 + 0x8f1bbcdc + local_74;
   uVar2 = uVar3 * 0x400 | uVar3 >> 0x16;
   uVar14 = ( uVar7 * 0x4000 | uVar7 >> 0x12 ) + uVar10;
   uVar3 = ( ( uVar3 ^ uVar9 ) & uVar4 ^ uVar9 ) + uVar15 + 0x7a6d76e9 + local_50;
   uVar15 = ( uVar3 * 0x200 | uVar3 >> 0x17 ) + uVar11;
   uVar3 = ( ( uVar6 ^ uVar14 ) & uVar13 ^ uVar6 ) + uVar10 + 0x8f1bbcdc + local_64;
   uVar10 = ( uVar3 * 0x20 | uVar3 >> 0x1b ) + uVar5;
   uVar6 = uVar6 * 0x400 | uVar6 >> 0x16;
   uVar7 = uVar4 * 0x400 | uVar4 >> 0x16;
   uVar3 = ( ( uVar4 ^ uVar2 ) & uVar15 ^ uVar2 ) + uVar11 + 0x7a6d76e9 + local_78;
   uVar8 = ( uVar3 * 0x1000 | uVar3 >> 0x14 ) + uVar9;
   uVar4 = uVar14 * 0x400 | uVar14 >> 0x16;
   uVar3 = ( ( uVar14 ^ uVar10 ) & uVar6 ^ uVar14 ) + uVar5 + 0x8f1bbcdc + iVar19;
   uVar12 = uVar15 * 0x400 | uVar15 >> 0x16;
   uVar14 = ( uVar3 * 0x40 | uVar3 >> 0x1a ) + uVar13;
   uVar3 = ( ( uVar15 ^ uVar7 ) & uVar8 ^ uVar7 ) + uVar9 + 0x7a6d76e9 + local_4c;
   uVar3 = ( uVar3 * 0x200 | uVar3 >> 0x17 ) + uVar2;
   uVar11 = uVar10 * 0x400 | uVar10 >> 0x16;
   uVar13 = ( ( uVar10 ^ uVar14 ) & uVar4 ^ uVar10 ) + uVar13 + 0x8f1bbcdc + iVar18;
   uVar5 = ( uVar13 * 0x100 | uVar13 >> 0x18 ) + uVar6;
   uVar15 = uVar8 * 0x400 | uVar8 >> 0x16;
   uVar2 = ( ( uVar8 ^ uVar12 ) & uVar3 ^ uVar12 ) + uVar2 + 0x7a6d76e9 + local_5c;
   uVar2 = ( uVar2 * 0x1000 | uVar2 >> 0x14 ) + uVar7;
   uVar9 = uVar14 * 0x400 | uVar14 >> 0x16;
   uVar13 = ( ( uVar14 ^ uVar5 ) & uVar11 ^ uVar14 ) + uVar6 + 0x8f1bbcdc + local_6c;
   uVar14 = uVar3 * 0x400 | uVar3 >> 0x16;
   uVar13 = ( uVar13 * 0x40 | uVar13 >> 0x1a ) + uVar4;
   uVar3 = ( ( uVar3 ^ uVar15 ) & uVar2 ^ uVar15 ) + uVar7 + 0x7a6d76e9 + local_64;
   uVar7 = ( uVar3 * 0x20 | uVar3 >> 0x1b ) + uVar12;
   uVar10 = uVar5 * 0x400 | uVar5 >> 0x16;
   uVar3 = ( ( uVar5 ^ uVar13 ) & uVar9 ^ uVar5 ) + uVar4 + 0x8f1bbcdc + local_68;
   uVar3 = ( uVar3 * 0x20 | uVar3 >> 0x1b ) + uVar11;
   uVar4 = ( ( uVar2 ^ uVar14 ) & uVar7 ^ uVar14 ) + uVar12 + 0x7a6d76e9 + local_58;
   uVar8 = ( uVar4 * 0x8000 | uVar4 >> 0x11 ) + uVar15;
   uVar4 = uVar2 * 0x400 | uVar2 >> 0x16;
   uVar5 = uVar13 * 0x400 | uVar13 >> 0x16;
   uVar2 = ( ( uVar13 ^ uVar3 ) & uVar10 ^ uVar13 ) + uVar11 + 0x8f1bbcdc + local_78;
   uVar2 = ( uVar2 * 0x1000 | uVar2 >> 0x14 ) + uVar9;
   uVar11 = uVar7 * 0x400 | uVar7 >> 0x16;
   uVar13 = ( ( uVar7 ^ uVar4 ) & uVar8 ^ uVar4 ) + uVar15 + 0x7a6d76e9 + iVar18;
   uVar7 = ( uVar13 * 0x100 | uVar13 >> 0x18 ) + uVar14;
   uVar6 = uVar3 * 0x400 | uVar3 >> 0x16;
   uVar13 = ( ( ~uVar5 | uVar3 ) ^ uVar2 ) + uVar9 + 0xa953fd4e + local_70;
   uVar13 = ( uVar13 * 0x200 | uVar13 >> 0x17 ) + uVar10;
   uVar9 = uVar8 * 0x400 | uVar8 >> 0x16;
   uVar3 = ( uVar8 ^ uVar11 ^ uVar7 ) + uVar14 + local_50;
   uVar3 = ( uVar3 * 0x100 | uVar3 >> 0x18 ) + uVar4;
   uVar15 = uVar2 * 0x400 | uVar2 >> 0x16;
   uVar2 = ( ( ~uVar6 | uVar2 ) ^ uVar13 ) + uVar10 + 0xa953fd4e + local_80;
   uVar2 = ( uVar2 * 0x8000 | uVar2 >> 0x11 ) + uVar5;
   uVar14 = uVar7 * 0x400 | uVar7 >> 0x16;
   uVar4 = ( uVar7 ^ uVar9 ^ uVar3 ) + uVar4 + iVar19;
   uVar4 = ( uVar4 * 0x20 | uVar4 >> 0x1b ) + uVar11;
   uVar8 = uVar13 * 0x400 | uVar13 >> 0x16;
   uVar13 = ( ( ~uVar15 | uVar13 ) ^ uVar2 ) + uVar5 + 0xa953fd4e + local_6c;
   uVar13 = ( uVar13 * 0x20 | uVar13 >> 0x1b ) + uVar6;
   uVar7 = uVar3 * 0x400 | uVar3 >> 0x16;
   uVar3 = ( uVar3 ^ uVar14 ^ uVar4 ) + uVar11 + local_58;
   uVar3 = ( uVar3 * 0x1000 | uVar3 >> 0x14 ) + uVar9;
   uVar11 = uVar2 * 0x400 | uVar2 >> 0x16;
   uVar2 = ( ( ~uVar8 | uVar2 ) ^ uVar13 ) + uVar6 + 0xa953fd4e + local_5c;
   uVar2 = ( uVar2 * 0x800 | uVar2 >> 0x15 ) + uVar15;
   uVar10 = uVar4 * 0x400 | uVar4 >> 0x16;
   uVar4 = ( uVar4 ^ uVar7 ^ uVar3 ) + uVar9 + local_70;
   uVar4 = ( uVar4 * 0x200 | uVar4 >> 0x17 ) + uVar14;
   uVar5 = ( ( ~uVar11 | uVar13 ) ^ uVar2 ) + uVar15 + 0xa953fd4e + local_64;
   uVar6 = ( uVar5 * 0x40 | uVar5 >> 0x1a ) + uVar8;
   uVar12 = uVar13 * 0x400 | uVar13 >> 0x16;
   uVar9 = uVar3 * 0x400 | uVar3 >> 0x16;
   uVar13 = ( uVar3 ^ uVar10 ^ uVar4 ) + uVar14 + local_7c;
   uVar15 = ( uVar13 * 0x1000 | uVar13 >> 0x14 ) + uVar7;
   uVar14 = uVar2 * 0x400 | uVar2 >> 0x16;
   uVar2 = ( ( ~uVar12 | uVar2 ) ^ uVar6 ) + uVar8 + 0xa953fd4e + local_50;
   uVar3 = uVar4 * 0x400 | uVar4 >> 0x16;
   uVar5 = ( uVar2 * 0x100 | uVar2 >> 0x18 ) + uVar11;
   uVar2 = ( uVar4 ^ uVar9 ^ uVar15 ) + uVar7 + local_6c;
   uVar7 = ( uVar2 * 0x20 | uVar2 >> 0x1b ) + uVar10;
   uVar8 = uVar6 * 0x400 | uVar6 >> 0x16;
   uVar2 = ( ( ~uVar14 | uVar6 ) ^ uVar5 ) + uVar11 + 0xa953fd4e + local_78;
   uVar2 = ( uVar2 * 0x2000 | uVar2 >> 0x13 ) + uVar12;
   uVar13 = ( uVar15 ^ uVar3 ^ uVar7 ) + uVar10 + local_60;
   uVar6 = uVar15 * 0x400 | uVar15 >> 0x16;
   uVar13 = ( uVar13 * 0x4000 | uVar13 >> 0x12 ) + uVar9;
   uVar10 = uVar7 * 0x400 | uVar7 >> 0x16;
   uVar4 = uVar5 * 0x400 | uVar5 >> 0x16;
   uVar5 = ( ( ~uVar8 | uVar5 ) ^ uVar2 ) + uVar12 + 0xa953fd4e + local_58;
   uVar7 = ( uVar7 ^ uVar6 ^ uVar13 ) + uVar9 + local_64;
   uVar5 = ( uVar5 * 0x1000 | uVar5 >> 0x14 ) + uVar14;
   uVar7 = ( uVar7 * 0x40 | uVar7 >> 0x1a ) + uVar3;
   uVar11 = uVar2 * 0x400 | uVar2 >> 0x16;
   uVar2 = ( ( ~uVar4 | uVar2 ) ^ uVar5 ) + uVar14 + 0xa953fd4e + iVar18;
   uVar15 = uVar13 * 0x400 | uVar13 >> 0x16;
   uVar9 = ( uVar2 * 0x20 | uVar2 >> 0x1b ) + uVar8;
   uVar2 = ( uVar13 ^ uVar10 ^ uVar7 ) + uVar3 + local_68;
   uVar3 = ( uVar2 * 0x100 | uVar2 >> 0x18 ) + uVar6;
   uVar2 = ( ( ~uVar11 | uVar5 ) ^ uVar9 ) + uVar8 + 0xa953fd4e + local_7c;
   uVar13 = ( uVar2 * 0x1000 | uVar2 >> 0x14 ) + uVar4;
   uVar5 = uVar5 * 0x400 | uVar5 >> 0x16;
   uVar14 = uVar7 * 0x400 | uVar7 >> 0x16;
   uVar2 = ( uVar7 ^ uVar15 ^ uVar3 ) + uVar6 + local_78;
   uVar6 = ( uVar2 * 0x2000 | uVar2 >> 0x13 ) + uVar10;
   uVar8 = uVar9 * 0x400 | uVar9 >> 0x16;
   uVar2 = ( ( ~uVar5 | uVar9 ) ^ uVar13 ) + uVar4 + 0xa953fd4e + local_74;
   uVar7 = uVar3 * 0x400 | uVar3 >> 0x16;
   uVar12 = ( uVar2 * 0x2000 | uVar2 >> 0x13 ) + uVar11;
   uVar2 = ( uVar3 ^ uVar14 ^ uVar6 ) + uVar10 + local_4c;
   uVar2 = ( uVar2 * 0x40 | uVar2 >> 0x1a ) + uVar15;
   uVar3 = uVar13 * 0x400 | uVar13 >> 0x16;
   uVar13 = ( ( ~uVar8 | uVar13 ) ^ uVar12 ) + uVar11 + 0xa953fd4e + local_60;
   uVar4 = ( uVar13 * 0x4000 | uVar13 >> 0x12 ) + uVar5;
   uVar13 = ( uVar6 ^ uVar7 ^ uVar2 ) + uVar15 + iVar18;
   uVar9 = ( uVar13 * 0x20 | uVar13 >> 0x1b ) + uVar14;
   uVar6 = uVar6 * 0x400 | uVar6 >> 0x16;
   uVar10 = uVar12 * 0x400 | uVar12 >> 0x16;
   uVar13 = ( ( ~uVar3 | uVar12 ) ^ uVar4 ) + uVar5 + 0xa953fd4e + local_54;
   uVar13 = ( uVar13 * 0x800 | uVar13 >> 0x15 ) + uVar8;
   uVar11 = uVar2 * 0x400 | uVar2 >> 0x16;
   uVar2 = ( uVar2 ^ uVar6 ^ uVar9 ) + uVar14 + local_80;
   local_a8 = uVar4 * 0x400 | uVar4 >> 0x16;
   uVar14 = ( uVar2 * 0x8000 | uVar2 >> 0x11 ) + uVar7;
   uVar2 = ( ( ~uVar10 | uVar4 ) ^ uVar13 ) + uVar8 + 0xa953fd4e + local_68;
   local_94 = uVar9 * 0x400 | uVar9 >> 0x16;
   uVar4 = ( uVar2 * 0x100 | uVar2 >> 0x18 ) + uVar3;
   uVar2 = ( uVar9 ^ uVar11 ^ uVar14 ) + uVar7 + local_74;
   uVar5 = ( uVar2 * 0x2000 | uVar2 >> 0x13 ) + uVar6;
   local_98 = uVar13 * 0x400 | uVar13 >> 0x16;
   uVar2 = ( ( ~local_a8 | uVar13 ) ^ uVar4 ) + uVar3 + 0xa953fd4e + iVar19;
   uVar13 = ( uVar2 * 0x20 | uVar2 >> 0x1b ) + uVar10;
   local_84 = uVar14 * 0x400 | uVar14 >> 0x16;
   uVar2 = ( uVar14 ^ local_94 ^ uVar5 ) + uVar6 + local_5c;
   local_8c = ( uVar2 * 0x800 | uVar2 >> 0x15 ) + uVar11;
   local_9c = uVar4 * 0x400 | uVar4 >> 0x16;
   uVar2 = ( ( ~local_98 | uVar4 ) ^ uVar13 ) + uVar10 + 0xa953fd4e + local_4c;
   local_88 = uVar5 * 0x400 | uVar5 >> 0x16;
   local_a4 = ( uVar2 * 0x40 | uVar2 >> 0x1a ) + local_a8;
   local_a0 = local_88 + *(int*)( param_1 + 0xc ) + uVar13;
   uVar2 = ( uVar5 ^ local_84 ^ local_8c ) + uVar11 + local_54;
   *(uint*)( param_1 + 0x18 ) = local_8c + *(int*)( param_1 + 8 ) + local_a4;
   local_90 = ( uVar2 * 0x800 | uVar2 >> 0x15 ) + local_94;
   *(ulong*)( param_1 + 8 ) = CONCAT44(*(int*)( param_1 + 0x10 ) + local_84 + local_9c, local_a0);
   *(ulong*)( param_1 + 0x10 ) = CONCAT44(iVar1 + local_a8 + local_90, *(int*)( param_1 + 0x14 ) + local_94 + local_98);
   mbedtls_platform_zeroize(&local_a8, 0x68);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 0;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 mbedtls_ripemd160_update(uint *param_1, undefined8 *param_2, ulong param_3) {
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
      if (0x3f < param_3) goto LAB_001018ae;
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

      uVar1 = mbedtls_internal_ripemd160_process(param_1, param_1 + 7);
      if ((int)uVar1 != 0) {
         return uVar1;
      }

      param_2 = (undefined8*)( (long)param_2 + uVar8 );
      uVar2 = 0;
      for (param_3 = param_3 - uVar8; 0x3f < param_3; param_3 = param_3 - 0x40) {
         LAB_001018ae:uVar1 = mbedtls_internal_ripemd160_process(param_1, param_2);
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
int mbedtls_ripemd160_finish(uint *param_1, uint *param_2) {
   uint uVar1;
   uint uVar2;
   int iVar3;
   long in_FS_OFFSET;
   int local_28;
   uint local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = *param_1;
   local_28 = uVar1 * 8;
   uVar2 = uVar1 & 0x3f;
   local_24 = uVar1 >> 0x1d | param_1[1] << 3;
   if (uVar2 < 0x38) {
      iVar3 = 0x38 - uVar2;
   }
 else {
      iVar3 = 0x78 - uVar2;
   }

   iVar3 = mbedtls_ripemd160_update(param_1, ripemd160_padding, iVar3);
   if (iVar3 == 0) {
      iVar3 = mbedtls_ripemd160_update(param_1, &local_28, 8);
      if (iVar3 == 0) {
         *param_2 = param_1[2];
         for (int i = 0; i < 4; i++) {
            param_2[( i + 1 )] = param_1[( i + 3 )];
         }

      }

   }

   mbedtls_platform_zeroize(param_1, 0x5c);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int mbedtls_ripemd160(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
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
   iVar1 = mbedtls_ripemd160_update(local_88, param_1, param_2);
   if (iVar1 == 0) {
      iVar1 = mbedtls_ripemd160_finish(local_88, param_3);
   }

   mbedtls_platform_zeroize(local_88, 0x5c);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int mbedtls_ripemd160_self_test(int param_1) {
   int iVar1;
   undefined *puVar2;
   long *plVar3;
   ulong uVar4;
   long in_FS_OFFSET;
   undefined1 local_58[16];
   int local_48;
   long local_40;
   uVar4 = 1;
   plVar3 = &ripemd160_test_md;
   puVar2 = &ripemd160_test_str;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = 0;
   local_58 = (undefined1[16])0x0;
   do {
      if (param_1 != 0) {
         __printf_chk(2, "  RIPEMD-160 test #%d: ", uVar4 & 0xffffffff);
      }

      iVar1 = mbedtls_ripemd160(puVar2, *(undefined8*)( &DAT_00101d78 + uVar4 * 8 ), local_58);
      if (iVar1 != 0) {
         LAB_00101be8:if (param_1 != 0) {
            puts("failed");
         }

         goto LAB_00101bf4;
      }

      if (( local_58._0_8_ != *plVar3 || local_58._8_8_ != plVar3[1] ) || ( local_48 != (int)plVar3[2] )) {
         iVar1 = 1;
         goto LAB_00101be8;
      }

      if (param_1 != 0) {
         puts("passed");
      }

      uVar4 = uVar4 + 1;
      plVar3 = (long*)( (long)plVar3 + 0x14 );
      puVar2 = puVar2 + 0x51;
   }
 while ( uVar4 != 9 );
   if (param_1 != 0) {
      putchar(10);
   }

   LAB_00101bf4:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}

