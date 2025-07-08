/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* realign_weights_undecimated(astcenc_profile, block_size_descriptor const&, image_block const&,
   symbolic_compressed_block&) */undefined8 realign_weights_undecimated(undefined4 param_1, long param_2, long param_3, long param_4) {
   byte bVar1;
   byte bVar2;
   byte bVar3;
   undefined1 uVar4;
   byte bVar5;
   undefined1 auVar6[16];
   int iVar7;
   int iVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   int iVar13;
   long lVar14;
   long lVar15;
   byte bVar16;
   byte bVar17;
   uint uVar18;
   undefined1 *puVar19;
   uint uVar20;
   long lVar21;
   undefined8 uVar22;
   int *piVar23;
   int *piVar24;
   ulong uVar25;
   long in_FS_OFFSET;
   float fVar26;
   float fVar27;
   float fVar28;
   float fVar30;
   float fVar31;
   undefined1 auVar29[16];
   float fVar32;
   float fVar33;
   float fVar34;
   float fVar35;
   float fVar36;
   undefined1 auVar37[16];
   float fVar38;
   float fVar39;
   float fVar40;
   float fVar41;
   float fVar42;
   float fVar43;
   undefined1 local_14a;
   undefined1 local_149;
   int local_148[16];
   int local_108[16];
   float local_c8[16];
   float local_88[18];
   long local_40;
   bVar1 = *(byte*)( param_4 + 1 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (bVar1 < 2) {
      lVar14 = 0x33c000;
      if (bVar1 != 1) {
         lVar14 = 0x44fffdd8000;
      }

   }
 else {
      lVar14 = ( ( ulong )(( bVar1 - 2 ) * 0x400) + ( ulong ) * (ushort*)( param_2 + ( ( ulong ) * (ushort*)( param_4 + 6 ) + 0x703cd8 + ( ulong )(bVar1 - 2) * 0x400 ) * 2 ) ) * 0x450;
   }

   lVar21 = param_2 + ( ulong ) * (ushort*)( param_2 + 0xac7560 + ( ulong ) * (ushort*)( param_4 + 4 ) * 2 ) * 6;
   bVar2 = *(byte*)( lVar21 + 0xac8563 );
   bVar3 = *(byte*)( lVar21 + 0xac8565 );
   iVar13 = (int)*(char*)( param_4 + 3 );
   auVar37._0_4_ = -(uint)(iVar13 == __LC0);
   auVar37._4_4_ = -(uint)(iVar13 == _UNK_00103084);
   auVar37._8_4_ = -(uint)(iVar13 == _UNK_00103088);
   auVar37._12_4_ = -(uint)(iVar13 == _UNK_0010308c);
   if (bVar1 == 0) {
      uVar20 = 0xffffffff;
   }
 else {
      uVar20 = bVar1 - 1;
      puVar19 = (undefined1*)( param_4 + 8 );
      lVar21 = param_4 + 0x14;
      piVar23 = local_148;
      piVar24 = local_108;
      do {
         uVar4 = *puVar19;
         puVar19 = puVar19 + 1;
         unpack_color_endpoints(param_1, uVar4, lVar21, &local_14a, &local_149, piVar23, piVar24);
         lVar21 = lVar21 + 8;
         piVar23 = piVar23 + 4;
         piVar24 = piVar24 + 4;
      }
 while ( (undefined1*)( param_4 + 9 + (ulong)uVar20 ) != puVar19 );
   }

   fVar12 = _LC2;
   lVar21 = param_4 + 0x40;
   uVar22 = 0;
   do {
      if (bVar1 != 0) {
         lVar15 = 0;
         do {
            auVar29._0_4_ = *(int*)( (long)local_108 + lVar15 ) - *(int*)( (long)local_148 + lVar15 );
            auVar29._4_4_ = *(int*)( (long)local_108 + lVar15 + 4 ) - *(int*)( (long)local_148 + lVar15 + 4 );
            auVar29._8_4_ = *(int*)( (long)local_108 + lVar15 + 8 ) - *(int*)( (long)local_148 + lVar15 + 8 );
            auVar29._12_4_ = *(int*)( (long)local_108 + lVar15 + 0xc ) - *(int*)( (long)local_148 + lVar15 + 0xc );
            auVar29 = ~auVar37 & auVar29;
            iVar13 = *(int*)( (long)local_148 + lVar15 + 4 );
            iVar7 = *(int*)( (long)local_148 + lVar15 + 8 );
            iVar8 = *(int*)( (long)local_148 + lVar15 + 0xc );
            *(float*)( (long)local_c8 + lVar15 ) = (float)*(int*)( (long)local_148 + lVar15 );
            *(float*)( (long)local_c8 + lVar15 + 4 ) = (float)iVar13;
            *(float*)( (long)local_c8 + lVar15 + 8 ) = (float)iVar7;
            *(float*)( (long)local_c8 + lVar15 + 0xc ) = (float)iVar8;
            *(float*)( (long)local_88 + lVar15 ) = (float)auVar29._0_4_ * fVar12;
            *(float*)( (long)local_88 + lVar15 + 4 ) = (float)auVar29._4_4_ * fVar12;
            *(float*)( (long)local_88 + lVar15 + 8 ) = (float)auVar29._8_4_ * fVar12;
            *(float*)( (long)local_88 + lVar15 + 0xc ) = (float)auVar29._12_4_ * fVar12;
            lVar15 = lVar15 + 0x10;
         }
 while ( lVar15 != ( (ulong)uVar20 + 1 ) * 0x10 );
      }

      lVar15 = 0;
      do {
         bVar5 = *(byte*)( lVar21 + lVar15 );
         fVar40 = *(float*)( param_3 + 0xe00 );
         fVar9 = *(float*)( param_3 + 0xe04 );
         fVar10 = *(float*)( param_3 + 0xe08 );
         fVar11 = *(float*)( param_3 + 0xe0c );
         uVar18 = (uint)bVar5;
         fVar26 = (float)uVar18;
         bVar16 = ( byte ) * (undefined2*)( &quant_and_xfer_tables + ( (ulong)bVar5 + 0x30 + (ulong)bVar2 * 0x71 ) * 2 );
         bVar17 = ( byte )(( ushort ) * (undefined2*)( &quant_and_xfer_tables + ( (ulong)bVar5 + 0x30 + (ulong)bVar2 * 0x71 ) * 2 ) >> 8);
         fVar38 = (float)(int)( bVar16 - uVar18 );
         fVar32 = (float)(int)( bVar17 - uVar18 );
         uVar25 = ( ulong ) * (byte*)( param_2 + lVar14 + 0xacb570 + lVar15 );
         fVar28 = local_88[uVar25 * 4];
         fVar34 = local_88[uVar25 * 4 + 1];
         fVar42 = local_88[uVar25 * 4 + 2];
         fVar43 = local_88[uVar25 * 4 + 3];
         fVar27 = ( fVar26 * fVar28 + local_c8[uVar25 * 4] ) - *(float*)( param_3 + lVar15 * 4 );
         fVar30 = ( fVar26 * fVar34 + local_c8[uVar25 * 4 + 1] ) - *(float*)( param_3 + 0x370 + lVar15 * 4 );
         fVar31 = ( fVar26 * fVar42 + local_c8[uVar25 * 4 + 2] ) - *(float*)( param_3 + 0x6e0 + lVar15 * 4 );
         fVar26 = ( fVar26 * fVar43 + local_c8[uVar25 * 4 + 3] ) - *(float*)( param_3 + 0xa50 + lVar15 * 4 );
         fVar33 = fVar32 * fVar28 + fVar27;
         fVar35 = fVar32 * fVar34 + fVar30;
         fVar36 = fVar32 * fVar42 + fVar31;
         fVar32 = fVar32 * fVar43 + fVar26;
         fVar39 = fVar38 * fVar28 + fVar27;
         fVar41 = fVar38 * fVar34 + fVar30;
         fVar42 = fVar38 * fVar42 + fVar31;
         fVar43 = fVar38 * fVar43 + fVar26;
         fVar28 = fVar27 * fVar27 * fVar40 + fVar31 * fVar31 * fVar10 + fVar30 * fVar30 * fVar9 + fVar26 * fVar26 * fVar11;
         fVar34 = fVar33 * fVar33 * fVar40 + fVar36 * fVar36 * fVar10 + fVar35 * fVar35 * fVar9 + fVar32 * fVar32 * fVar11;
         fVar40 = fVar39 * fVar39 * fVar40 + fVar42 * fVar42 * fVar10 + fVar41 * fVar41 * fVar9 + fVar43 * fVar43 * fVar11;
         if (( fVar28 <= fVar34 ) || ( fVar40 <= fVar34 )) {
            if (bVar5 != 0) goto LAB_00100369;
         }
 else {
            if (0x3f < uVar18) {
               LAB_00100369:bVar17 = bVar16;
               if (fVar28 <= fVar40) goto LAB_0010024d;
            }

            *(byte*)( lVar21 + lVar15 ) = bVar17;
            uVar22 = 1;
         }

         LAB_0010024d:lVar15 = lVar15 + 1;
      }
 while ( (uint)lVar15 < ( uint ) * (byte*)( param_2 + 3 ) );
      lVar21 = lVar21 + 0x20;
      auVar6._8_4_ = 0xffffffff;
      auVar6._0_8_ = 0xffffffffffffffff;
      auVar6._12_4_ = 0xffffffff;
      auVar37 = auVar37 ^ auVar6;
      if (lVar21 == ( ( ulong )(bVar3 & 1) + 3 ) * 0x20 + param_4) {
         if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return uVar22;
      }

   }
 while ( true );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* realign_weights_decimated(astcenc_profile, block_size_descriptor const&, image_block const&,
   symbolic_compressed_block&) */undefined8 realign_weights_decimated(undefined4 param_1, long param_2, long param_3, long param_4) {
   long lVar1;
   long lVar2;
   byte bVar3;
   byte bVar4;
   byte bVar5;
   undefined1 uVar6;
   uint uVar7;
   undefined1 auVar8[16];
   undefined1 auVar9[13];
   int iVar10;
   int iVar11;
   float fVar12;
   float fVar13;
   uint uVar14;
   int iVar15;
   long lVar16;
   ulong uVar17;
   byte bVar18;
   float *pfVar19;
   uint uVar20;
   uint uVar21;
   long lVar22;
   int *piVar23;
   uint *puVar24;
   ulong uVar25;
   ulong uVar26;
   uint uVar27;
   int *piVar28;
   long lVar29;
   undefined1 *puVar30;
   long in_FS_OFFSET;
   float fVar31;
   float fVar32;
   float fVar34;
   float fVar35;
   undefined1 auVar33[16];
   float fVar36;
   float fVar37;
   float fVar38;
   float fVar39;
   float fVar40;
   float fVar41;
   float fVar42;
   float fVar43;
   float fVar44;
   float fVar45;
   float fVar46;
   float fVar47;
   float fVar48;
   float fVar49;
   float fVar50;
   float fVar51;
   float fVar52;
   float fVar53;
   undefined1 auVar54[16];
   float fVar55;
   float fVar56;
   float fVar57;
   float fVar58;
   float fVar59;
   long local_2c0;
   byte local_2ac;
   uint *local_2a0;
   undefined8 local_278;
   undefined1 local_24a;
   undefined1 local_249;
   int local_248[16];
   int local_208[16];
   float local_1c8[16];
   float local_188[16];
   float local_148[66];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar14 = ( uint ) * (byte*)( param_4 + 1 );
   if (uVar14 < 2) {
      lVar16 = 0x33c000;
      if (uVar14 != 1) {
         lVar16 = 0x44fffdd8000;
      }

   }
 else {
      uVar20 = *(byte*)( param_4 + 1 ) - 2;
      lVar16 = ( ( ulong )(uVar20 * 0x400) + ( ulong ) * (ushort*)( param_2 + ( ( ulong ) * (ushort*)( param_4 + 6 ) + 0x703cd8 + (ulong)uVar20 * 0x400 ) * 2 ) ) * 0x450;
   }

   lVar29 = param_2 + ( ulong ) * (ushort*)( param_2 + 0xac7560 + ( ulong ) * (ushort*)( param_4 + 4 ) * 2 ) * 6;
   bVar3 = *(byte*)( lVar29 + 0xac8563 );
   bVar4 = *(byte*)( lVar29 + 0xac8562 );
   bVar5 = *(byte*)( param_2 + 0x252 + (ulong)bVar4 * 0x1fb70 );
   local_2ac = *(byte*)( lVar29 + 0xac8565 ) & 1;
   iVar15 = (int)*(char*)( param_4 + 3 );
   auVar54._0_4_ = -(uint)(iVar15 == __LC0);
   auVar54._4_4_ = -(uint)(iVar15 == _UNK_00103084);
   auVar54._8_4_ = -(uint)(iVar15 == _UNK_00103088);
   auVar54._12_4_ = -(uint)(iVar15 == _UNK_0010308c);
   if (uVar14 == 0) {
      uVar20 = 0xffffffff;
   }
 else {
      uVar20 = uVar14 - 1;
      puVar30 = (undefined1*)( param_4 + 8 );
      piVar23 = local_208;
      piVar28 = local_248;
      lVar29 = param_4 + 0x14;
      do {
         uVar6 = *puVar30;
         puVar30 = puVar30 + 1;
         unpack_color_endpoints(param_1, uVar6, lVar29, &local_24a, &local_249, piVar28, piVar23);
         piVar23 = piVar23 + 4;
         piVar28 = piVar28 + 4;
         lVar29 = lVar29 + 8;
      }
 while ( (undefined1*)( param_4 + 9 + (ulong)uVar20 ) != puVar30 );
   }

   fVar13 = _LC2;
   uVar26 = (ulong)bVar4;
   uVar27 = (uint)bVar5;
   local_2a0 = (uint*)( param_4 + 0x40 );
   local_278 = 0;
   lVar29 = param_2 + uVar26 * 0x1fb70;
   do {
      if (uVar14 != 0) {
         lVar22 = 0;
         do {
            auVar33._0_4_ = *(int*)( (long)local_208 + lVar22 ) - *(int*)( (long)local_248 + lVar22 );
            auVar33._4_4_ = *(int*)( (long)local_208 + lVar22 + 4 ) - *(int*)( (long)local_248 + lVar22 + 4 );
            auVar33._8_4_ = *(int*)( (long)local_208 + lVar22 + 8 ) - *(int*)( (long)local_248 + lVar22 + 8 );
            auVar33._12_4_ = *(int*)( (long)local_208 + lVar22 + 0xc ) - *(int*)( (long)local_248 + lVar22 + 0xc );
            auVar33 = ~auVar54 & auVar33;
            iVar15 = *(int*)( (long)local_248 + lVar22 + 4 );
            iVar10 = *(int*)( (long)local_248 + lVar22 + 8 );
            iVar11 = *(int*)( (long)local_248 + lVar22 + 0xc );
            *(float*)( (long)local_1c8 + lVar22 ) = (float)*(int*)( (long)local_248 + lVar22 );
            *(float*)( (long)local_1c8 + lVar22 + 4 ) = (float)iVar15;
            *(float*)( (long)local_1c8 + lVar22 + 8 ) = (float)iVar10;
            *(float*)( (long)local_1c8 + lVar22 + 0xc ) = (float)iVar11;
            *(float*)( (long)local_188 + lVar22 ) = (float)auVar33._0_4_ * fVar13;
            *(float*)( (long)local_188 + lVar22 + 4 ) = (float)auVar33._4_4_ * fVar13;
            *(float*)( (long)local_188 + lVar22 + 8 ) = (float)auVar33._8_4_ * fVar13;
            *(float*)( (long)local_188 + lVar22 + 0xc ) = (float)auVar33._12_4_ * fVar13;
            lVar22 = lVar22 + 0x10;
         }
 while ( ( (ulong)uVar20 + 1 ) * 0x10 != lVar22 );
      }

      uVar21 = 0;
      pfVar19 = local_148;
      puVar24 = local_2a0;
      do {
         uVar7 = *puVar24;
         uVar21 = uVar21 + 4;
         puVar24 = puVar24 + 1;
         auVar9[0xc] = (char)( uVar7 >> 0x18 );
         auVar9._0_12_ = ZEXT712(0);
         *pfVar19 = (float)( uVar7 & 0xff );
         pfVar19[1] = (float)( uVar7 >> 8 & 0xff );
         pfVar19[2] = (float)(int)CONCAT32(auVar9._10_3_, ( ushort )(byte)(uVar7 >> 0x10));
         pfVar19[3] = (float)( uint3 )(auVar9._10_3_ >> 0x10);
         pfVar19 = pfVar19 + 4;
      }
 while ( uVar21 < uVar27 );
      local_2c0 = 0;
      do {
         fVar41 = 0.0;
         fVar42 = 0.0;
         fVar43 = 0.0;
         fVar44 = 0.0;
         uVar21 = 0;
         bVar5 = *(byte*)( (long)local_2a0 + local_2c0 );
         bVar18 = ( byte ) * (undefined2*)( &quant_and_xfer_tables + ( (ulong)bVar5 + 0x30 + (ulong)bVar3 * 0x71 ) * 2 );
         fVar38 = local_148[local_2c0];
         fVar49 = (float)bVar18;
         fVar55 = (float)( byte )(( ushort ) * (undefined2*)( &quant_and_xfer_tables + ( (ulong)bVar5 + 0x30 + (ulong)bVar3 * 0x71 ) * 2 ) >> 8);
         lVar22 = lVar29 + local_2c0;
         fVar45 = 0.0;
         fVar46 = 0.0;
         fVar47 = 0.0;
         fVar48 = 0.0;
         fVar50 = 0.0;
         fVar51 = 0.0;
         fVar52 = 0.0;
         fVar53 = 0.0;
         do {
            uVar25 = ( ulong ) * (byte*)( lVar22 + 0x17c0 );
            uVar21 = uVar21 + 1;
            fVar31 = *(float*)( uVar26 * -0x5f250 + param_2 * -3 + 0x125c0 + lVar22 * 4 );
            lVar22 = lVar22 + 0x40;
            lVar2 = param_2 + (ulong)bVar4 * 0x1fb70 + uVar25;
            uVar17 = ( ulong ) * (byte*)( param_2 + lVar16 + 0xacb570 + uVar25 );
            lVar1 = param_2 + ( uVar26 * 0x7edc + uVar25 ) * 4;
            fVar32 = local_188[uVar17 * 4];
            fVar34 = local_188[uVar17 * 4 + 1];
            fVar35 = local_188[uVar17 * 4 + 2];
            fVar12 = local_188[uVar17 * 4 + 3];
            pfVar19 = (float*)( param_3 + uVar25 * 4 );
            fVar36 = local_148[*(byte*)( lVar2 + 0x340 )] * *(float*)( lVar1 + 0xa00 ) + local_148[*(byte*)( lVar2 + 0x418 )] * *(float*)( lVar1 + 0xd60 ) + local_148[*(byte*)( lVar2 + 0x4f0 )] * *(float*)( lVar1 + 0x10c0 ) + local_148[*(byte*)( lVar2 + 0x5c8 )] * *(float*)( lVar1 + 0x1420 );
            fVar56 = ( ( fVar49 - fVar38 ) * fVar31 + fVar36 ) - fVar36;
            fVar31 = ( fVar31 * ( fVar55 - fVar38 ) + fVar36 ) - fVar36;
            fVar37 = ( fVar36 * fVar32 + local_1c8[uVar17 * 4] ) - *pfVar19;
            fVar39 = ( fVar36 * fVar34 + local_1c8[uVar17 * 4 + 1] ) - pfVar19[0xdc];
            fVar40 = ( fVar36 * fVar35 + local_1c8[uVar17 * 4 + 2] ) - pfVar19[0x1b8];
            fVar36 = ( fVar36 * fVar12 + local_1c8[uVar17 * 4 + 3] ) - pfVar19[0x294];
            fVar57 = fVar56 * fVar32 + fVar37;
            fVar58 = fVar56 * fVar34 + fVar39;
            fVar59 = fVar56 * fVar35 + fVar40;
            fVar56 = fVar56 * fVar12 + fVar36;
            fVar32 = fVar31 * fVar32 + fVar37;
            fVar34 = fVar31 * fVar34 + fVar39;
            fVar35 = fVar31 * fVar35 + fVar40;
            fVar31 = fVar31 * fVar12 + fVar36;
            fVar50 = fVar50 + fVar37 * fVar37;
            fVar51 = fVar51 + fVar39 * fVar39;
            fVar52 = fVar52 + fVar40 * fVar40;
            fVar53 = fVar53 + fVar36 * fVar36;
            fVar45 = fVar45 + fVar57 * fVar57;
            fVar46 = fVar46 + fVar58 * fVar58;
            fVar47 = fVar47 + fVar59 * fVar59;
            fVar48 = fVar48 + fVar56 * fVar56;
            fVar41 = fVar41 + fVar32 * fVar32;
            fVar42 = fVar42 + fVar34 * fVar34;
            fVar43 = fVar43 + fVar35 * fVar35;
            fVar44 = fVar44 + fVar31 * fVar31;
         }
 while ( uVar21 < *(byte*)( lVar29 + 0x1780 + local_2c0 ) );
         fVar38 = *(float*)( param_3 + 0xe00 );
         fVar31 = *(float*)( param_3 + 0xe04 );
         fVar32 = *(float*)( param_3 + 0xe08 );
         fVar34 = *(float*)( param_3 + 0xe0c );
         fVar50 = fVar52 * fVar32 + fVar50 * fVar38 + fVar53 * fVar34 + fVar51 * fVar31;
         fVar45 = fVar47 * fVar32 + fVar45 * fVar38 + fVar48 * fVar34 + fVar46 * fVar31;
         fVar38 = fVar43 * fVar32 + fVar41 * fVar38 + fVar44 * fVar34 + fVar42 * fVar31;
         if (( fVar50 <= fVar38 ) || ( fVar45 <= fVar38 )) {
            if (bVar5 != 0) goto LAB_001009e4;
         }
 else {
            if (bVar5 < 0x40) {
               bVar18 = (byte)(int)fVar55;
               fVar49 = fVar55;
            }
 else {
               LAB_001009e4:if (fVar50 <= fVar45) goto LAB_0010096f;
            }

            local_278 = 1;
            local_148[local_2c0] = fVar49;
            *(byte*)( (long)local_2a0 + local_2c0 ) = bVar18;
         }

         LAB_0010096f:local_2c0 = local_2c0 + 1;
      }
 while ( (uint)local_2c0 < uVar27 );
      local_2a0 = local_2a0 + 8;
      auVar8._8_4_ = 0xffffffff;
      auVar8._0_8_ = 0xffffffffffffffff;
      auVar8._12_4_ = 0xffffffff;
      auVar54 = auVar54 ^ auVar8;
      if (local_2a0 == (uint*)( param_4 + ( (ulong)local_2ac + 3 ) * 0x20 )) {
         if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return local_278;
      }

   }
 while ( true );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* compress_symbolic_block_for_partition_1plane(astcenc_config const&, block_size_descriptor const&,
   image_block const&, bool, float, unsigned int, unsigned int, symbolic_compressed_block&,
   compression_working_buffers&, int) */void compress_symbolic_block_for_partition_1plane(astcenc_config *param_1, block_size_descriptor *param_2, image_block *param_3, bool param_4, float param_5, uint param_6, uint param_7, symbolic_compressed_block *param_8, compression_working_buffers *param_9, int param_10) {
   signed *psVar1;
   block_size_descriptor *pbVar2;
   partition_info *ppVar3;
   block_size_descriptor bVar4;
   block_size_descriptor bVar5;
   int iVar6;
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 uVar9;
   char cVar10;
   uint uVar11;
   long lVar12;
   compression_working_buffers *pcVar13;
   ulong uVar14;
   int iVar15;
   decimation_info *pdVar16;
   ulong uVar17;
   compression_working_buffers *pcVar18;
   uchar *puVar19;
   compression_working_buffers *pcVar20;
   block_size_descriptor *pbVar21;
   signed *psVar22;
   undefined1 *puVar23;
   ulong uVar24;
   long in_FS_OFFSET;
   bool bVar25;
   byte bVar26;
   undefined4 uVar27;
   float fVar28;
   undefined1 auVar29[16];
   uint uVar30;
   uint uVar34;
   uint uVar35;
   undefined1 auVar31[16];
   uint uVar36;
   undefined1 auVar32[16];
   undefined1 auVar33[16];
   float fVar39;
   float fVar40;
   undefined1 auVar37[16];
   undefined1 auVar38[16];
   float fVar41;
   undefined1 auVar42[16];
   float local_398;
   float local_380;
   code *local_370;
   undefined2 local_2f4;
   unsigned_char local_2e8[32];
   int local_2c8[8];
   int local_2a8[8];
   int local_288[8];
   undefined8 local_268[4];
   vfloat4 local_248[64];
   vfloat4 local_208[64];
   undefined1 local_1c8;
   undefined1 uStack_1c7;
   char cStack_1c6;
   undefined1 uStack_1c5;
   undefined2 uStack_1c4;
   undefined2 uStack_1c2;
   undefined4 uStack_1c0;
   int iStack_1bc;
   float local_1b8;
   undefined1 auStack_1b4[12];
   undefined8 uStack_1a8;
   undefined8 uStack_1a0;
   undefined8 local_198;
   undefined8 uStack_190;
   undefined8 local_188;
   undefined8 uStack_180;
   undefined8 local_178;
   undefined8 uStack_170;
   undefined8 local_168;
   undefined8 uStack_160;
   undefined4 local_158;
   undefined4 uStack_154;
   undefined4 uStack_150;
   undefined4 uStack_14c;
   undefined8 local_148;
   undefined8 uStack_140;
   undefined8 local_138;
   undefined8 uStack_130;
   undefined8 local_128;
   undefined8 uStack_120;
   undefined8 local_118;
   undefined8 uStack_110;
   undefined8 local_108;
   undefined8 uStack_100;
   undefined1 local_f8[16];
   undefined4 local_e8;
   undefined4 uStack_e4;
   undefined4 uStack_e0;
   undefined4 uStack_dc;
   undefined8 local_d8;
   undefined8 uStack_d0;
   undefined1 local_c8[16];
   char local_44[4];
   long local_40;
   bVar26 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar11 = 0xb;
   if (param_10 < 0xc) {
      uVar11 = param_10;
   }

   if (param_6 == 1) {
      lVar12 = 0x33c000;
      if (( (byte)param_1[4] & 0x40 ) == 0) {
         local_370 = compute_symbolic_block_difference_1plane_1partition;
      }
 else {
         local_370 = compute_symbolic_block_difference_1plane;
      }

   }
 else {
      local_370 = compute_symbolic_block_difference_1plane;
      lVar12 = ( ( ulong )(( param_6 - 2 ) * 0x400) + ( ulong ) * (ushort*)( param_2 + ( (ulong)param_7 + 0x703cd8 + ( ulong )(param_6 - 2) * 0x400 ) * 2 ) ) * 0x450;
   }

   ppVar3 = (partition_info*)( param_2 + lVar12 + 0xacb560 );
   pcVar18 = param_9 + 0xec0;
   compute_ideal_colors_and_weights_1plane(param_3, ppVar3, (endpoints_and_weights*)param_9);
   uVar30 = *(uint*)( param_2 + 8 );
   if (param_4) {
      uVar30 = *(uint*)( param_2 + 4 );
   }

   pbVar21 = param_2 + 0x42;
   pdVar16 = (decimation_info*)( param_2 + 0x250 );
   pbVar2 = pbVar21 + (ulong)uVar30 * 6;
   pcVar20 = pcVar18;
   do {
      if (( (short)( 1 << ( (char)uVar11 + 1U & 0x1f ) ) - 1U & *(ushort*)pbVar21 ) != 0) {
         compute_ideal_weights_for_decimation((endpoints_and_weights*)param_9, pdVar16, (float*)pcVar20);
      }

      pbVar21 = pbVar21 + 6;
      pdVar16 = pdVar16 + 0x1fb70;
      pcVar20 = pcVar20 + 0x100;
   }
 while ( pbVar2 != pbVar21 );
   auVar29._4_4_ = _LC4;
   auVar29._0_4_ = _LC4;
   auVar29._8_4_ = _LC4;
   auVar29._12_4_ = _LC4;
   pcVar20 = param_9;
   do {
      auVar31._0_4_ = *(float*)( pcVar20 + 0x60 ) - *(float*)( pcVar20 + 0x20 );
      auVar31._4_4_ = *(float*)( pcVar20 + 100 ) - *(float*)( pcVar20 + 0x24 );
      auVar31._8_4_ = *(float*)( pcVar20 + 0x68 ) - *(float*)( pcVar20 + 0x28 );
      auVar31._12_4_ = *(float*)( pcVar20 + 0x6c ) - *(float*)( pcVar20 + 0x2c );
      pcVar13 = pcVar20 + 0x10;
      auVar37._0_4_ = _LC7 - *(float*)( pcVar20 + 0x20 );
      auVar37._4_4_ = _LC7 - *(float*)( pcVar20 + 0x24 );
      auVar37._8_4_ = _LC7 - *(float*)( pcVar20 + 0x28 );
      auVar37._12_4_ = _LC7 - *(float*)( pcVar20 + 0x2c );
      auVar38 = divps(auVar37, auVar31);
      fVar28 = auVar38._0_4_;
      fVar39 = auVar38._4_4_;
      fVar40 = auVar38._8_4_;
      fVar41 = auVar38._12_4_;
      uVar30 = -(uint)(_LC9 < fVar28 && fVar28 < auVar29._0_4_);
      uVar34 = -(uint)(_LC9 < fVar39 && fVar39 < auVar29._4_4_);
      uVar35 = -(uint)(_LC9 < fVar40 && fVar40 < auVar29._8_4_);
      uVar36 = -(uint)(_LC9 < fVar41 && fVar41 < auVar29._12_4_);
      auVar38._4_4_ = uVar34 & (uint)fVar39;
      auVar38._0_4_ = uVar30 & (uint)fVar28;
      auVar42._0_4_ = ~uVar30 & (uint)auVar29._0_4_;
      auVar42._4_4_ = ~uVar34 & (uint)auVar29._4_4_;
      auVar42._8_4_ = ~uVar35 & (uint)auVar29._8_4_;
      auVar42._12_4_ = ~uVar36 & (uint)auVar29._12_4_;
      auVar38._8_4_ = uVar35 & (uint)fVar40;
      auVar38._12_4_ = uVar36 & (uint)fVar41;
      auVar29 = auVar38 | auVar42;
      pcVar20 = pcVar13;
   }
 while ( param_9 + (ulong)param_6 * 0x10 != pcVar13 );
   auVar32._0_8_ = auVar29._8_8_;
   auVar32._8_4_ = auVar29._0_4_;
   auVar32._12_4_ = auVar29._0_4_;
   auVar29 = minps(auVar29, auVar32);
   uVar27 = auVar29._0_4_;
   auVar33._4_4_ = uVar27;
   auVar33._0_4_ = auVar29._4_4_;
   auVar33._8_4_ = uVar27;
   auVar33._12_4_ = uVar27;
   auVar29 = minps(auVar29, auVar33);
   compute_angular_endpoints_1plane(param_4, param_2, (float*)pcVar18, uVar11, param_9);
   psVar1 = (signed*)( param_9 + 0x2b5c0 );
   uVar30 = *(uint*)( param_2 + 0x14 );
   if (param_4) {
      uVar30 = *(uint*)( param_2 + 0x10 );
   }

   pbVar21 = param_2 + 0xac8562;
   pcVar20 = param_9 + 0x65c0;
   pcVar13 = param_9 + 0x2bdc0;
   psVar22 = psVar1;
   do {
      if (( (int)uVar11 < (int)(uint)(byte)pbVar21[1] ) || ( iVar15 = (int)*(char*)( (long)&compress_symbolic_block_for_partition_1plane(astcenc_config_const & block_size_descriptor_const & image_block_const & unsigned_int, unsigned_int, symbolic_compressed_block, &, compression_working_buffers, &, int), ::free_bits_for_partition_count + ( ulong )(param_6 - 1)) - (uint)(byte)pbVar21[2],iVar15 < 1 ) ) {
         *(float*)pcVar13 = 1e+38;
      }
 else {
         if (_LC10 * auVar29._0_4_ < *(float*)( pcVar13 + 0x4000 )) {
            *(float*)( pcVar13 + 0x4000 ) = 1.0;
         }

         bVar4 = *pbVar21;
         *psVar22 = SUB41(iVar15, 0);
         compute_quantized_weights_for_decimation((decimation_info*)( param_2 + (ulong)(byte)bVar4 * 0x1fb70 + 0x250 ), pcVar18 + (ulong)(byte)bVar4 * 0x100, &local_148, pcVar20, pbVar21[1]);
         fVar28 = (float)compute_error_of_weight_set_1plane((endpoints_and_weights*)param_9, (decimation_info*)( param_2 + (ulong)(byte)bVar4 * 0x1fb70 + 0x250 ), (float*)&local_148);
         *(float*)pcVar13 = fVar28;
      }

      psVar22 = psVar22 + 1;
      pbVar21 = pbVar21 + 6;
      pcVar13 = pcVar13 + 4;
      pcVar20 = pcVar20 + 0x40;
   }
 while ( psVar22 != psVar1 + uVar30 );
   uVar11 = compute_ideal_endpoint_formats(ppVar3, param_3, (endpoints*)( param_9 + 0x10 ), psVar1, (float*)( param_9 + 0x2bdc0 ), *(uint*)( param_1 + 0x44 ), 0, uVar30, local_2e8, local_2c8, (quant_method*)local_2a8, (quant_method*)local_288, param_9);
   local_380 = *(float*)( param_8 + 0x10 );
   if (uVar11 != 0) {
      uVar30 = 0;
      local_398 = _LC5;
      do {
         uVar24 = (ulong)uVar30;
         iVar15 = local_2c8[uVar24];
         local_148 = *(undefined8*)( param_9 + 0x10 );
         uStack_140 = *(undefined8*)( param_9 + 0x18 );
         local_138 = *(undefined8*)( param_9 + 0x20 );
         uStack_130 = *(undefined8*)( param_9 + 0x28 );
         local_128 = *(undefined8*)( param_9 + 0x30 );
         uStack_120 = *(undefined8*)( param_9 + 0x38 );
         bVar4 = param_2[(long)iVar15 * 6 + 0xac8562];
         local_118 = *(undefined8*)( param_9 + 0x40 );
         uStack_110 = *(undefined8*)( param_9 + 0x48 );
         local_108 = *(undefined8*)( param_9 + 0x50 );
         uStack_100 = *(undefined8*)( param_9 + 0x58 );
         local_f8 = *(undefined1(*) [16])( param_9 + 0x60 );
         local_e8 = *(undefined4*)( param_9 + 0x70 );
         uStack_e4 = *(undefined4*)( param_9 + 0x74 );
         uStack_e0 = *(undefined4*)( param_9 + 0x78 );
         uStack_dc = *(undefined4*)( param_9 + 0x7c );
         local_d8 = *(undefined8*)( param_9 + 0x80 );
         uStack_d0 = *(undefined8*)( param_9 + 0x88 );
         pcVar18 = param_9 + 0x65c0 + ( uint )(iVar15 << 6);
         local_c8 = *(undefined1(*) [16])( param_9 + 0x90 );
         bVar5 = param_2[(ulong)(byte)bVar4 * 0x1fb70 + 0x252];
         puVar19 = (uchar*)&local_188;
         if (7 < (byte)bVar5) {
            for (uVar14 = ( ulong )((byte)bVar5 >> 3); uVar14 != 0; uVar14 = uVar14 - 1) {
               *(undefined8*)puVar19 = *(undefined8*)pcVar18;
               pcVar18 = pcVar18 + (ulong)bVar26 * -0x10 + 8;
               puVar19 = puVar19 + (ulong)bVar26 * -0x10 + 8;
            }

         }

         lVar12 = 0;
         if (( (byte)bVar5 & 4 ) != 0) {
            *(undefined4*)puVar19 = *(undefined4*)pcVar18;
            lVar12 = 4;
         }

         if (( (byte)bVar5 & 2 ) != 0) {
            *(undefined2*)( puVar19 + lVar12 ) = *(undefined2*)( pcVar18 + lVar12 );
            lVar12 = lVar12 + 2;
         }

         if (( (byte)bVar5 & 1 ) != 0) {
            *(compression_working_buffers*)( puVar19 + lVar12 ) = pcVar18[lVar12];
         }

         uVar34 = uVar30;
         if (*(int*)( param_1 + 0x40 ) != 0) {
            uVar35 = 0;
            uVar9 = (undefined1)param_6;
            local_2f4 = (undefined2)param_7;
            do {
               recompute_ideal_colors_1plane(param_3, ppVar3, (decimation_info*)( param_2 + (ulong)(byte)bVar4 * 0x1fb70 + 0x250 ), (uchar*)&local_188, (endpoints*)&local_148, local_248, local_208);
               iVar6 = local_2a8[uVar24];
               bVar25 = local_288[uVar24] != iVar6;
               puVar23 = auStack_1b4;
               uVar14 = 0;
               while (true) {
                  cVar10 = pack_color_endpoints(local_2e8[uVar14 + uVar24 * 4], puVar23, iVar6);
                  *(char*)( (long)&uStack_1c0 + uVar14 ) = cVar10;
                  if (bVar25) {
                     bVar25 = (char)uStack_1c0 == cVar10;
                  }

                  puVar23 = puVar23 + 8;
                  if ((ulong)param_6 == uVar14 + 1) break;
                  iVar6 = local_2a8[uVar24];
                  uVar14 = uVar14 + 1;
               }
;
               cStack_1c6 = '\0';
               if (( bVar25 ) && ( 1 < param_6 )) {
                  for (int i = 0; i < 4; i++) {
                     local_44[i] = '\0';
                  }

                  uVar17 = 0;
                  do {
                     cVar10 = pack_color_endpoints(local_2e8[uVar17 + uVar24 * 4], local_268 + uVar17, local_288[uVar24]);
                     local_44[uVar17] = cVar10;
                     if (cVar10 != local_44[0]) {
                        uStack_1c5 = 0xff;
                        uStack_1c7 = uVar9;
                        uStack_1c2 = local_2f4;
                        if (cStack_1c6 != '\0') goto LAB_00101552;
                        goto LAB_0010115f;
                     }

                     bVar25 = uVar17 != uVar14;
                     uVar17 = uVar17 + 1;
                  }
 while ( bVar25 );
                  cStack_1c6 = '\x01';
                  lVar12 = 0;
                  do {
                     *(undefined8*)( auStack_1b4 + lVar12 * 8 ) = local_268[lVar12];
                     *(char*)( (long)&uStack_1c0 + lVar12 ) = local_44[lVar12];
                     lVar12 = lVar12 + 1;
                  }
 while ( lVar12 != 4 );
                  uStack_1c5 = 0xff;
                  uStack_1c7 = uVar9;
                  uStack_1c2 = local_2f4;
                  LAB_00101552:iStack_1bc = local_288[uVar24];
               }
 else {
                  uStack_1c5 = 0xff;
                  uStack_1c7 = uVar9;
                  uStack_1c2 = local_2f4;
                  LAB_0010115f:iStack_1bc = local_2a8[uVar24];
               }

               uStack_1c2 = local_2f4;
               uStack_1c5 = 0xff;
               local_1c8 = 3;
               uStack_1c4 = *(undefined2*)( param_2 + (long)iVar15 * 6 + 0xac8560 );
               uStack_1c7 = uVar9;
               if (uVar35 == 0) {
                  fVar28 = (float)( *local_370 )(param_1, param_2, &local_1c8, param_3);
                  if (fVar28 == __LC12) {
                     local_1c8 = 0;
                     fVar28 = _LC5;
                  }

                  fVar39 = fVar28;
                  if (local_398 <= fVar28) {
                     fVar39 = local_398;
                  }

                  uVar34 = uVar30;
                  local_398 = fVar39;
                  if (( (float)*(uint*)( param_1 + 0x40 ) * __LC13 + __LC14 ) * local_380 < fVar28) break;
                  if (fVar28 < local_380) {
                     local_1b8 = fVar28;
                     *(undefined8*)( param_8 + 0x20 ) = uStack_1a8;
                     *(undefined8*)( param_8 + 0x28 ) = uStack_1a0;
                     *(ulong*)param_8 = CONCAT26(uStack_1c2, CONCAT24(uStack_1c4, CONCAT13(uStack_1c5, CONCAT12(cStack_1c6, CONCAT11(uStack_1c7, local_1c8)))));
                     *(ulong*)( param_8 + 8 ) = CONCAT44(iStack_1bc, uStack_1c0);
                     *(undefined8*)( param_8 + 0x30 ) = local_198;
                     *(undefined8*)( param_8 + 0x38 ) = uStack_190;
                     *(ulong*)( param_8 + 0x10 ) = CONCAT44(auStack_1b4._0_4_, fVar28);
                     *(undefined8*)( param_8 + 0x18 ) = auStack_1b4._4_8_;
                     auVar8._4_4_ = uStack_154;
                     auVar8._0_4_ = local_158;
                     auVar8._8_4_ = uStack_150;
                     auVar8._12_4_ = uStack_14c;
                     *(undefined8*)( param_8 + 0x40 ) = local_188;
                     *(undefined8*)( param_8 + 0x48 ) = uStack_180;
                     *(undefined8*)( param_8 + 0x50 ) = local_178;
                     *(undefined8*)( param_8 + 0x58 ) = uStack_170;
                     *(undefined8*)( param_8 + 0x60 ) = local_168;
                     *(undefined8*)( param_8 + 0x68 ) = uStack_160;
                     *(undefined1(*) [16])( param_8 + 0x70 ) = auVar8;
                     uVar34 = uVar11;
                     local_380 = fVar28;
                     if (fVar28 < param_5) break;
                  }

               }

               if (param_2[(ulong)(byte)bVar4 * 0x1fb70 + 0x252] == param_2[3]) {
                  cVar10 = realign_weights_undecimated(*(undefined4*)param_1, param_2, param_3, &local_1c8);
               }
 else {
                  cVar10 = realign_weights_decimated();
               }

               fVar28 = (float)( *local_370 )(param_1, param_2, &local_1c8, param_3);
               if (fVar28 == __LC12) {
                  local_1c8 = 0;
                  fVar28 = _LC5;
               }

               fVar39 = fVar28;
               if (local_398 <= fVar28) {
                  fVar39 = local_398;
               }

               uVar34 = uVar30;
               local_398 = fVar39;
               if (( (float)( ~uVar35 + *(int*)( param_1 + 0x40 ) ) * __LC13 + _LC7 ) * local_380 < fVar28) break;
               if (fVar28 < local_380) {
                  local_1b8 = fVar28;
                  auVar7._8_8_ = uStack_160;
                  auVar7._0_8_ = local_168;
                  *(ulong*)( param_8 + 0x10 ) = CONCAT44(auStack_1b4._0_4_, fVar28);
                  *(undefined8*)( param_8 + 0x18 ) = auStack_1b4._4_8_;
                  *(ulong*)param_8 = CONCAT26(uStack_1c2, CONCAT24(uStack_1c4, CONCAT13(uStack_1c5, CONCAT12(cStack_1c6, CONCAT11(uStack_1c7, local_1c8)))));
                  *(ulong*)( param_8 + 8 ) = CONCAT44(iStack_1bc, uStack_1c0);
                  *(undefined8*)( param_8 + 0x30 ) = local_198;
                  *(undefined8*)( param_8 + 0x38 ) = uStack_190;
                  *(undefined8*)( param_8 + 0x20 ) = uStack_1a8;
                  *(undefined8*)( param_8 + 0x28 ) = uStack_1a0;
                  *(undefined8*)( param_8 + 0x50 ) = local_178;
                  *(undefined8*)( param_8 + 0x58 ) = uStack_170;
                  *(undefined8*)( param_8 + 0x40 ) = local_188;
                  *(undefined8*)( param_8 + 0x48 ) = uStack_180;
                  *(undefined1(*) [16])( param_8 + 0x60 ) = auVar7;
                  *(undefined4*)( param_8 + 0x70 ) = local_158;
                  *(undefined4*)( param_8 + 0x74 ) = uStack_154;
                  *(undefined4*)( param_8 + 0x78 ) = uStack_150;
                  *(undefined4*)( param_8 + 0x7c ) = uStack_14c;
                  uVar34 = uVar11;
                  local_380 = fVar28;
                  if (fVar28 < param_5) break;
               }

               uVar34 = uVar30;
               if (( cVar10 == '\0' ) || ( uVar35 = uVar35 + 1 * (uint*)( param_1 + 0x40 ) <= uVar35 )) break;
            }
 while ( true );
         }

         uVar30 = uVar34 + 1;
      }
 while ( uVar30 < uVar11 );
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* compress_block(astcenc_contexti const&, image_block const&, unsigned char*,
   compression_working_buffers&) */void compress_block(astcenc_contexti *param_1, image_block *param_2, uchar *param_3, compression_working_buffers *param_4) {
   endpoints_and_weights *peVar1;
   decimation_info *pdVar2;
   float fVar3;
   block_size_descriptor bVar4;
   block_size_descriptor bVar5;
   int iVar6;
   float fVar7;
   block_size_descriptor *pbVar8;
   undefined1 uVar9;
   char cVar10;
   undefined2 uVar11;
   undefined2 uVar12;
   ushort uVar13;
   uint uVar14;
   uint uVar15;
   uint uVar16;
   long lVar17;
   ulong uVar18;
   long lVar19;
   int iVar20;
   compression_working_buffers *pcVar21;
   ulong uVar22;
   compression_working_buffers *pcVar23;
   undefined1 *puVar24;
   compression_working_buffers *pcVar25;
   uchar *puVar26;
   float fVar27;
   uint *puVar28;
   float *pfVar29;
   block_size_descriptor *pbVar30;
   long in_FS_OFFSET;
   byte bVar31;
   float fVar32;
   float fVar33;
   float fVar34;
   undefined4 uVar36;
   uint uVar43;
   uint uVar44;
   undefined1 auVar37[16];
   undefined1 auVar38[16];
   undefined1 auVar39[16];
   uint uVar35;
   uint uVar45;
   undefined1 auVar40[16];
   undefined1 auVar41[16];
   undefined8 extraout_XMM0_Qb;
   undefined1 auVar42[16];
   undefined8 extraout_XMM0_Qb_00;
   float fVar46;
   undefined1 auVar48[16];
   undefined1 auVar49[16];
   float fVar47;
   undefined1 auVar50[16];
   undefined1 auVar51[16];
   undefined1 auVar52[16];
   undefined1 auVar53[16];
   undefined1 auVar54[16];
   uint uVar55;
   uint uVar56;
   uint uVar57;
   uint uVar58;
   float fVar59;
   undefined1 auVar60[16];
   undefined1 auVar61[16];
   undefined1 auVar62[16];
   undefined1 auVar63[16];
   undefined1 auVar64[16];
   undefined1 auVar65[16];
   undefined1 auVar66[16];
   float fVar67;
   float fVar68;
   undefined1 auVar69[16];
   float fVar70;
   undefined1 auVar71[16];
   float fVar72;
   float fVar73;
   float fVar74;
   float fVar75;
   float fVar76;
   float fVar77;
   float fVar78;
   float local_4c8;
   float fStack_4c4;
   float fStack_4c0;
   float local_4b0;
   float local_4a8;
   float local_498;
   vfloat4 local_3c8[16];
   vfloat4 local_3b8[24];
   float local_3a0[2];
   undefined8 local_398;
   float local_390[2];
   undefined8 local_388;
   undefined4 local_380;
   undefined8 local_378;
   undefined8 uStack_370;
   undefined1 local_368[16];
   unsigned_char local_358[32];
   int local_338[8];
   undefined4 local_318[8];
   quant_method local_2f8[32];
   ulong local_2d8;
   undefined8 uStack_2d0;
   float local_2c8;
   int iStack_2c4;
   int iStack_2c0;
   int iStack_2bc;
   int iStack_2b8;
   undefined4 uStack_2b4;
   undefined8 uStack_2b0;
   undefined8 local_2a8;
   undefined8 uStack_2a0;
   undefined1 local_288[16];
   undefined1 local_278[16];
   undefined1 local_268[16];
   symbolic_compressed_block local_258;
   undefined1 uStack_257;
   undefined1 uStack_256;
   undefined1 uStack_255;
   undefined2 uStack_254;
   undefined2 uStack_252;
   undefined4 uStack_250;
   undefined4 uStack_24c;
   float local_248;
   int aiStack_244[5];
   undefined8 uStack_230;
   undefined8 local_228;
   undefined8 uStack_220;
   uchar local_218[16];
   undefined1 local_208[16];
   undefined1 local_1f8[16];
   undefined1 local_1e8[16];
   undefined4 local_1d8;
   undefined4 uStack_1d4;
   undefined8 uStack_1d0;
   uint local_1c8;
   uint uStack_1c4;
   uint uStack_1c0;
   uint uStack_1bc;
   undefined8 local_1b8;
   undefined8 uStack_1b0;
   undefined8 local_1a8;
   undefined8 uStack_1a0;
   undefined8 local_198;
   undefined8 uStack_190;
   uint local_188;
   uint uStack_184;
   uint uStack_180;
   uint uStack_17c;
   undefined1 local_178[16];
   undefined1 local_168[16];
   undefined1 local_158[16];
   undefined8 local_148;
   undefined8 uStack_140;
   undefined8 local_138;
   undefined8 uStack_130;
   undefined8 local_128;
   undefined8 uStack_120;
   undefined8 local_118;
   undefined8 uStack_110;
   undefined8 local_108;
   undefined8 uStack_100;
   undefined8 local_f8;
   undefined8 uStack_f0;
   undefined1 local_e8[16];
   undefined1 local_d8[16];
   undefined1 local_c8[8][16];
   long local_40;
   fVar7 = _LC7;
   bVar31 = 0;
   pbVar8 = *(block_size_descriptor**)( param_1 + 0x80 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar27 = _LC16;
   if (param_2[0xeea] != (image_block)0x0) {
      fVar27 = _LC15;
   }

   fVar78 = _LC7;
   if (( *(float*)( param_2 + 0xddc ) == fVar27 ) && ( fVar27 == *(float*)( param_2 + 0xdfc ) )) {
      fVar27 = _LC18;
      fVar32 = _LC7;
      if (param_2[0xe10] != (image_block)0x0) {
         LAB_001016db:fVar78 = fVar27;
         fVar32 = _LC7;
      }

   }
 else {
      fVar27 = _LC7;
      fVar32 = _LC17;
      if (param_2[0xe10] == (image_block)0x0) goto LAB_001016db;
   }

   iVar6 = *(int*)( param_1 + 0x2c );
   local_398 = *(undefined8*)( param_1 + 0x30 );
   local_390[0] = *(float*)( param_1 + 0x38 );
   local_388 = *(undefined8*)( param_1 + 0x48 );
   local_380 = *(undefined4*)( param_1 + 0x50 );
   auVar37._4_4_ = -(uint)(*(float *)(param_2 + 0xdd4) == *(float *)(param_2 + 0xdf4));
   auVar37._0_4_ = -(uint)(*(float *)(param_2 + 0xdd0) == *(float *)(param_2 + 0xdf0));
   auVar37._8_4_ = -(uint)(*(float *)(param_2 + 0xdd8) == *(float *)(param_2 + 0xdf8));
   auVar37._12_4_ = -(uint)(*(float *)(param_2 + 0xddc) == *(float *)(param_2 + 0xdfc));
   iVar20 = movmskps(*(undefined4*)( param_1 + 0x50 ), auVar37);
   if (iVar20 == 0xf) {
      local_2d8._1_7_ = ( uint7 )(local_2d8 >> 8) & 0xffffffffffff00;
      auVar37 = *(undefined1(*) [16])( param_2 + 0xdc0 );
      if (*(int*)param_1 - 2U < 2) {
         local_2d8 = CONCAT71(local_2d8._1_7_, 1);
         uVar11 = float_to_sf16(auVar37._12_4_);
         fStack_4c0 = auVar37._8_4_;
         uVar36 = float_to_sf16(fStack_4c0);
         fStack_4c4 = auVar37._4_4_;
         uVar12 = float_to_sf16(fStack_4c4);
         local_4c8 = auVar37._0_4_;
         uVar13 = float_to_sf16(local_4c8);
         auVar51._2_2_ = 0;
         auVar51._0_2_ = uVar13;
         auVar51._4_2_ = uVar12;
         auVar51._6_2_ = 0;
         auVar51._8_6_ = CONCAT24(uVar11, uVar36) & 0xffff0000ffff;
         auVar51._14_2_ = 0;
      }
 else {
         local_2d8 = CONCAT71(local_2d8._1_7_, 2);
         auVar37 = maxps(auVar37, (undefined1[16])0x0);
         auVar49._4_4_ = _LC7;
         auVar49._0_4_ = _LC7;
         auVar49._8_4_ = _LC7;
         auVar49._12_4_ = _LC7;
         auVar37 = minps(auVar37, auVar49);
         auVar51._0_4_ = ( uint )(auVar37._0_4_ * _LC16 + _LC9);
         auVar51._4_4_ = (int)( auVar37._4_4_ * _LC16 + _LC9 );
         auVar51._8_4_ = (int)( auVar37._8_4_ * _LC16 + _LC9 );
         auVar51._12_4_ = (int)( auVar37._12_4_ * _LC16 + _LC9 );
      }

      iStack_2c4 = auVar51._0_4_;
      iStack_2c0 = auVar51._4_4_;
      iStack_2bc = auVar51._8_4_;
      iStack_2b8 = auVar51._12_4_;
      symbolic_to_physical(pbVar8, (symbolic_compressed_block*)&local_2d8, param_3);
      goto LAB_0010199c;
   }

   local_2d8 = local_2d8 & 0xffffffffffffff00;
   local_3a0[1] = _LC7;
   local_2c8 = 1e+30;
   fVar32 = ( *(float*)( param_2 + 0xe08 ) + *(float*)( param_2 + 0xe00 ) + *(float*)( param_2 + 0xe0c ) + *(float*)( param_2 + 0xe04 ) ) * (float)(byte)pbVar8[3] * *(float*)( param_1 + 0x54 ) * fVar78 * fVar32;
   local_378 = CONCAT44(_UNK_00103094, _LC5);
   uStack_370 = CONCAT44(_UNK_0010309c, _UNK_00103098);
   local_368._8_8_ = 0;
   local_368._0_8_ = *(ulong*)( param_1 + 0x5c );
   local_368 = local_368 << 0x20;
   local_3a0[0] = _LC7 / *(float*)( param_1 + 0x58 );
   if (( compress_block(astcenc_contexti_const&,image_block_const&,unsigned_char*,compression_working_buffers&)
       :: ) && ( iVar20 = __cxa_guard_acquire(&compress_block(astcenc_contexti_const & image_block_const & unsigned_char, *, compression_working_buffers & ::errorval_overshoot), iVar20 != 0) ) {
      compress_block(astcenc_contexti_const&,image_block_const&,unsigned_char*,compression_working_buffers&)
    ::errorval_overshoot = fVar7 /
      *(float*)( param_1 + 0x58 );
      __cxa_guard_release (&compress_block(astcenc_contexti_const&,image_block_const&,unsigned_char*,compression_working_buffers&)
                         ::errorval_overshoot);
   }

   uVar22 = 1;
   if (__LC23 <= *(float*)( param_1 + 0x68 )) {
      uVar22 = ( ulong )(pbVar8[2] != (block_size_descriptor)0x1);
   }

   fVar27 = 1e+30;
   do {
      fVar78 = local_3a0[uVar22];
      fVar33 = (float)compress_symbolic_block_for_partition_1plane((astcenc_config*)param_1, pbVar8, param_2, (bool)( (byte)uVar22 ^ 1 ), fVar32 * fVar78 * compress_block(astcenc_contexti_const & image_block_const & unsigned_char, *, compression_working_buffers & ::errorval_overshoot, 1, 0, (symbolic_compressed_block*)&local_2d8, param_4, 0xb));
      if (fVar33 <= fVar27) {
         fVar27 = fVar33;
      }

      bVar4 = pbVar8[( ulong ) * (ushort*)( pbVar8 + ( local_2d8 >> 0x20 & 0xffff ) * 2 + 0xac7560 ) * 6 + 0xac8563];
      local_378 = CONCAT44(local_378._4_4_, fVar27);
      if (fVar33 < fVar32 * fVar78) goto LAB_00101928;
      uVar22 = uVar22 + 1;
   }
 while ( (int)uVar22 != 2 );
   lVar17 = 0;
   fVar70 = 0.0;
   fVar67 = 0.0;
   fVar72 = 0.0;
   fVar73 = 0.0;
   local_498 = 0.0;
   fVar68 = 0.0;
   local_4a8 = 0.0;
   fVar74 = 0.0;
   local_4c8 = 0.0;
   local_4b0 = 0.0;
   fVar78 = 0.0;
   fVar59 = _LC24 * ( *(float*)( param_2 + 0xe08 ) + *(float*)( param_2 + 0xe00 ) + *(float*)( param_2 + 0xe0c ) + *(float*)( param_2 + 0xe04 ) );
   fVar33 = fVar73;
   fVar75 = fVar73;
   fVar76 = fVar73;
   fVar77 = fVar73;
   do {
      lVar19 = lVar17 * 4;
      fVar47 = *(float*)( param_2 + lVar17 * 4 + 0x370 );
      fVar75 = fVar75 + fVar59;
      fVar34 = *(float*)( param_2 + lVar17 * 4 + 0x6e0 );
      fVar3 = *(float*)( param_2 + lVar17 * 4 + 0xa50 );
      lVar17 = lVar17 + 1;
      fVar46 = fVar59 * *(float*)( param_2 + lVar19 );
      fVar33 = fVar33 + fVar46;
      fVar78 = *(float*)( param_2 + lVar19 ) * fVar46 + fVar78;
      fVar77 = fVar77 + fVar47 * fVar46;
      fVar76 = fVar76 + fVar34 * fVar46;
      fVar74 = fVar74 + fVar46 * fVar3;
      fVar46 = fVar59 * fVar47;
      fVar73 = fVar73 + fVar46;
      local_4c8 = fVar47 * fVar46 + local_4c8;
      local_4b0 = fVar34 * fVar46 + local_4b0;
      local_4a8 = fVar46 * fVar3 + local_4a8;
      fVar47 = fVar59 * fVar34;
      fVar68 = fVar68 + fVar47;
      local_498 = fVar34 * fVar47 + local_498;
      fVar67 = fVar67 + fVar47 * fVar3;
      fVar72 = fVar72 + fVar59 * fVar3;
      fVar70 = fVar70 + fVar3 * fVar59 * fVar3;
   }
 while ( (int)lVar17 < (int)(uint)(byte)pbVar8[3] );
   fVar59 = _LC20;
   if (__LC25 < fVar75) {
      fVar59 = fVar7 / fVar75;
   }

   fVar75 = fVar33 * fVar59;
   fVar78 = fVar78 - fVar33 * fVar75;
   fVar47 = fVar73 * fVar59;
   local_4c8 = local_4c8 - fVar73 * fVar47;
   fVar70 = fVar70 - fVar59 * fVar72 * fVar72;
   fVar33 = fVar78 * local_4c8;
   local_498 = local_498 - fVar68 * fVar68 * fVar59;
   if (fVar33 < 0.0) {
      fVar33 = sqrtf(fVar33);
   }
 else {
      fVar33 = SQRT(fVar33);
   }

   fVar34 = fVar78 * local_498;
   fVar33 = ( fVar7 / fVar33 ) * ( fVar77 - fVar73 * fVar75 );
   if (fVar34 < 0.0) {
      fVar34 = sqrtf(fVar34);
   }
 else {
      fVar34 = SQRT(fVar34);
   }

   fVar78 = fVar78 * fVar70;
   fVar76 = ( fVar7 / fVar34 ) * ( fVar76 - fVar68 * fVar75 );
   if (fVar78 < 0.0) {
      fVar78 = sqrtf(fVar78);
   }
 else {
      fVar78 = SQRT(fVar78);
   }

   fVar77 = local_4c8 * local_498;
   fVar78 = ( fVar7 / fVar78 ) * ( fVar74 - fVar75 * fVar72 );
   if (fVar77 < 0.0) {
      fVar77 = sqrtf(fVar77);
   }
 else {
      fVar77 = SQRT(fVar77);
   }

   local_4c8 = local_4c8 * fVar70;
   fVar75 = ( local_4b0 - fVar68 * fVar47 ) * ( fVar7 / fVar77 );
   if (local_4c8 < 0.0) {
      local_4c8 = sqrtf(local_4c8);
   }
 else {
      local_4c8 = SQRT(local_4c8);
   }

   local_498 = local_498 * fVar70;
   fVar77 = ( fVar7 / local_4c8 ) * ( local_4a8 - fVar47 * fVar72 );
   if (local_498 < 0.0) {
      local_498 = sqrtf(local_498);
   }
 else {
      local_498 = SQRT(local_498);
   }

   fVar67 = ( fVar7 / local_498 ) * ( fVar67 - fVar68 * fVar59 * fVar72 );
   fVar59 = fVar7;
   if (NAN(fVar33)) {
      fVar33 = fVar7;
      if (NAN(fVar76)) goto LAB_00101d99;
      LAB_00102c20:fVar76 = (float)( (uint)fVar76 & __LC26 );
      if (!NAN(fVar78)) goto LAB_00102c07;
      LAB_00101da5:fVar78 = fVar7;
      if (NAN(fVar75)) goto LAB_00101db2;
      LAB_00102bee:fVar75 = (float)( (uint)fVar75 & __LC26 );
      if (!NAN(fVar77)) goto LAB_00102bd6;
      LAB_00101dbe:fVar77 = fVar7;
      if (!NAN(fVar67) && !NAN(fVar67)) {
         LAB_00102bc7:fVar59 = (float)( (uint)fVar67 & __LC26 );
      }

   }
 else {
      fVar33 = (float)( (uint)fVar33 & __LC26 );
      if (!NAN(fVar76)) goto LAB_00102c20;
      LAB_00101d99:fVar76 = fVar7;
      if (NAN(fVar78)) goto LAB_00101da5;
      LAB_00102c07:fVar78 = (float)( (uint)fVar78 & __LC26 );
      if (!NAN(fVar75)) goto LAB_00102bee;
      LAB_00101db2:fVar75 = fVar7;
      if (NAN(fVar77)) goto LAB_00101dbe;
      LAB_00102bd6:fVar77 = (float)( (uint)fVar77 & __LC26 );
      if (!NAN(fVar67)) goto LAB_00102bc7;
   }

   if (fVar76 <= fVar33) {
      fVar33 = fVar76;
   }

   uVar16 = 3;
   uVar14 = (uint)(byte)bVar4;
   if (fVar78 <= fVar33) {
      fVar33 = fVar78;
   }

   fVar78 = *(float*)( param_1 + 100 );
   if (fVar75 <= fVar33) {
      fVar33 = fVar75;
   }

   if (fVar77 <= fVar33) {
      fVar33 = fVar77;
   }

   if (fVar59 <= fVar33) {
      fVar33 = fVar59;
   }

   do {
      if (( fVar33 <= fVar78 ) && ( ( param_2[0xe10] == (image_block)0x0 || ( uVar16 == 3 ) ) )) {
         uVar55 = -(uint)(uVar16 == __LC0);
         uVar56 = -(uint)(uVar16 == _UNK_00103084);
         uVar57 = -(uint)(uVar16 == _UNK_00103088);
         uVar58 = -(uint)(uVar16 == _UNK_0010308c);
         auVar38._0_4_ = -(uint)(*(float *)(param_2 + 0xdd0) == *(float *)(param_2 + 0xdf0) && uVar16 == __LC0);
         auVar38._4_4_ = -(uint)(*(float *)(param_2 + 0xdd4) == *(float *)(param_2 + 0xdf4) &&
                  uVar16 == _UNK_00103084);
         auVar38._8_4_ = -(uint)(*(float *)(param_2 + 0xdd8) == *(float *)(param_2 + 0xdf8) &&
                  uVar16 == _UNK_00103088);
         auVar38._12_4_ = -(uint)(*(float *)(param_2 + 0xddc) == *(float *)(param_2 + 0xdfc) &&
                  uVar16 == _UNK_0010308c);
         iVar20 = movmskps((int)param_2, auVar38);
         if (iVar20 == 0) {
            fVar75 = fVar32 * compress_block(astcenc_contexti_const & image_block_const & unsigned_char, *, compression_working_buffers & ::errorval_overshoot);
            uVar15 = 0xb;
            if (uVar14 < 0xc) {
               uVar15 = uVar14;
            }

            peVar1 = (endpoints_and_weights*)( param_4 + 0x760 );
            compute_ideal_colors_and_weights_2planes(pbVar8, param_2, uVar16, (endpoints_and_weights*)param_4, peVar1);
            pcVar25 = param_4 + 0xec0;
            if (*(int*)( pbVar8 + 8 ) != 0) {
               lVar17 = 0;
               pbVar30 = pbVar8 + 0x250;
               pcVar23 = pcVar25;
               do {
                  if (( (short)( 1 << ( (char)uVar15 + 1U & 0x1f ) ) - 1U & *(ushort*)( pbVar8 + lVar17 * 6 + 0x44 ) ) != 0) {
                     compute_ideal_weights_for_decimation((endpoints_and_weights*)param_4, (decimation_info*)pbVar30, (float*)pcVar23);
                     compute_ideal_weights_for_decimation(peVar1, (decimation_info*)pbVar30, (float*)( pcVar23 + 0x80 ));
                  }

                  lVar17 = lVar17 + 1;
                  pbVar30 = (block_size_descriptor*)( (decimation_info*)pbVar30 + 0x1fb70 );
                  pcVar23 = pcVar23 + 0x100;
               }
 while ( (uint)lVar17 < *(uint*)( pbVar8 + 8 ) );
            }

            auVar39._0_4_ = *(float*)( param_4 + 0x60 ) - *(float*)( param_4 + 0x20 );
            auVar39._4_4_ = *(float*)( param_4 + 100 ) - *(float*)( param_4 + 0x24 );
            auVar39._8_4_ = *(float*)( param_4 + 0x68 ) - *(float*)( param_4 + 0x28 );
            auVar39._12_4_ = *(float*)( param_4 + 0x6c ) - *(float*)( param_4 + 0x2c );
            auVar60._0_4_ = _LC7 - *(float*)( param_4 + 0x20 );
            auVar60._4_4_ = _LC7 - *(float*)( param_4 + 0x24 );
            auVar60._8_4_ = _LC7 - *(float*)( param_4 + 0x28 );
            auVar60._12_4_ = _LC7 - *(float*)( param_4 + 0x2c );
            auVar40._4_4_ = _LC7 - *(float*)( param_4 + 0x784 );
            auVar40._0_4_ = _LC7 - *(float*)( param_4 + 0x780 );
            auVar37 = divps(auVar60, auVar39);
            fVar76 = auVar37._0_4_;
            fVar77 = auVar37._4_4_;
            fVar59 = auVar37._8_4_;
            fVar67 = auVar37._12_4_;
            uVar35 = -(uint)(_LC9 < fVar76 && fVar76 < _LC4);
            uVar43 = -(uint)(_LC9 < fVar77 && fVar77 < _LC4);
            uVar44 = -(uint)(_LC9 < fVar59 && fVar59 < _LC4);
            uVar45 = -(uint)(_LC9 < fVar67 && fVar67 < _LC4);
            auVar61._4_4_ = uVar43 & (uint)fVar77;
            auVar61._0_4_ = uVar35 & (uint)fVar76;
            auVar61._8_4_ = uVar44 & (uint)fVar59;
            auVar61._12_4_ = uVar45 & (uint)fVar67;
            auVar40._8_4_ = _LC7 - *(float*)( param_4 + 0x788 );
            auVar40._12_4_ = _LC7 - *(float*)( param_4 + 0x78c );
            auVar69._0_4_ = ~uVar35 & (uint)_LC4;
            auVar69._4_4_ = ~uVar43 & (uint)_LC4;
            auVar69._8_4_ = ~uVar44 & (uint)_LC4;
            auVar69._12_4_ = ~uVar45 & (uint)_LC4;
            auVar65._0_4_ = *(float*)( param_4 + 0x7c0 ) - *(float*)( param_4 + 0x780 );
            auVar65._4_4_ = *(float*)( param_4 + 0x7c4 ) - *(float*)( param_4 + 0x784 );
            auVar65._8_4_ = *(float*)( param_4 + 0x7c8 ) - *(float*)( param_4 + 0x788 );
            auVar65._12_4_ = *(float*)( param_4 + 0x7cc ) - *(float*)( param_4 + 0x78c );
            auVar61 = auVar61 | auVar69;
            auVar37 = divps(auVar40, auVar65);
            fVar76 = auVar37._0_4_;
            fVar77 = auVar37._4_4_;
            fVar59 = auVar37._8_4_;
            fVar67 = auVar37._12_4_;
            uVar35 = -(uint)(_LC9 < fVar76 && fVar76 < _LC4);
            uVar43 = -(uint)(_LC9 < fVar77 && fVar77 < _LC4);
            uVar44 = -(uint)(_LC9 < fVar59 && fVar59 < _LC4);
            uVar45 = -(uint)(_LC9 < fVar67 && fVar67 < _LC4);
            auVar50._0_4_ = (uint)_LC5 & uVar55;
            auVar50._4_4_ = _UNK_00103094 & uVar56;
            auVar50._8_4_ = _UNK_00103098 & uVar57;
            auVar50._12_4_ = _UNK_0010309c & uVar58;
            auVar66._0_4_ = ~uVar55 & auVar61._0_4_;
            auVar66._4_4_ = ~uVar56 & auVar61._4_4_;
            auVar66._8_4_ = ~uVar57 & auVar61._8_4_;
            auVar66._12_4_ = ~uVar58 & auVar61._12_4_;
            auVar41._0_4_ = ( (uint)fVar76 & uVar35 | ~uVar35 & (uint)_LC4 ) & uVar55;
            auVar41._4_4_ = ( (uint)fVar77 & uVar43 | ~uVar43 & (uint)_LC4 ) & uVar56;
            auVar41._8_4_ = ( (uint)fVar59 & uVar44 | ~uVar44 & (uint)_LC4 ) & uVar57;
            auVar41._12_4_ = ( (uint)fVar67 & uVar45 | ~uVar45 & (uint)_LC4 ) & uVar58;
            auVar50 = auVar50 | auVar66;
            auVar62._0_8_ = auVar50._8_8_;
            auVar62._8_4_ = auVar50._0_4_;
            auVar62._12_4_ = auVar50._0_4_;
            auVar37 = minps(auVar50, auVar62);
            uVar36 = auVar37._0_4_;
            auVar63._4_4_ = uVar36;
            auVar63._0_4_ = auVar37._4_4_;
            auVar63._8_4_ = uVar36;
            auVar63._12_4_ = uVar36;
            auVar51 = minps(auVar37, auVar63);
            auVar52._0_4_ = ~uVar55 & (uint)_LC5;
            auVar52._4_4_ = ~uVar56 & _UNK_00103094;
            auVar52._8_4_ = ~uVar57 & _UNK_00103098;
            auVar52._12_4_ = ~uVar58 & _UNK_0010309c;
            auVar41 = auVar41 | auVar52;
            auVar53._0_8_ = auVar41._8_8_;
            auVar53._8_4_ = auVar41._0_4_;
            auVar53._12_4_ = auVar41._0_4_;
            auVar37 = minps(auVar41, auVar53);
            uVar36 = auVar37._0_4_;
            auVar54._4_4_ = uVar36;
            auVar54._0_4_ = auVar37._4_4_;
            auVar54._8_4_ = uVar36;
            auVar54._12_4_ = uVar36;
            auVar37 = minps(auVar37, auVar54);
            compute_angular_endpoints_2planes(pbVar8, (float*)pcVar25, uVar15, param_4);
            uVar35 = *(uint*)( pbVar8 + 0x14 );
            uVar43 = *(uint*)( pbVar8 + 0x18 );
            if (uVar35 < uVar43) {
               uVar22 = (ulong)uVar35;
               pcVar23 = param_4 + uVar22 + 0x2b5c0;
               pbVar30 = pbVar8 + uVar22 * 6 + 0xac8562;
               uVar44 = uVar35 << 6;
               pcVar21 = param_4 + uVar22 * 4;
               do {
                  uVar36 = _LC11;
                  if ((byte)pbVar30[1] <= uVar15) {
                     fVar76 = _LC10 * auVar51._0_4_;
                     *pcVar23 = ( compression_working_buffers )('m' - (char)pbVar30[2]);
                     if (fVar76 < *(float*)( pcVar21 + 0x2fdc0 )) {
                        *(float*)( pcVar21 + 0x2fdc0 ) = fVar7;
                     }

                     if (_LC10 * auVar37._0_4_ < *(float*)( pcVar21 + 0x35380 )) {
                        *(float*)( pcVar21 + 0x35380 ) = fVar7;
                     }

                     lVar17 = ( ulong )(byte) * pbVar30 * 0x100;
                     pdVar2 = (decimation_info*)( pbVar8 + ( ulong )(byte) * pbVar30 * 0x1fb70 + 0x250 );
                     compute_quantized_weights_for_decimation(pdVar2, pcVar25 + lVar17, &local_148, param_4 + (ulong)uVar44 + 0x65c0, pbVar30[1]);
                     compute_quantized_weights_for_decimation(pdVar2, param_4 + lVar17 + 0xf40, local_c8, param_4 + (ulong)uVar44 + 0x65e0, pbVar30[1]);
                     uVar36 = compute_error_of_weight_set_2planes((endpoints_and_weights*)param_4, peVar1, pdVar2, (float*)&local_148, (float*)local_c8);
                  }

                  pbVar30 = pbVar30 + 6;
                  uVar44 = uVar44 + 0x40;
                  pcVar23 = pcVar23 + 1;
                  *(undefined4*)( pcVar21 + 0x2bdc0 ) = uVar36;
                  pcVar21 = pcVar21 + 4;
               }
 while ( param_4 + ( ulong )(( uVar43 - 1 ) - uVar35) + uVar22 + 0x2b5c1 != pcVar23 );
               uVar43 = *(uint*)( pbVar8 + 0x18 );
               uVar35 = *(uint*)( pbVar8 + 0x14 );
            }

            local_1d8 = *(undefined4*)( param_4 + 0x10 );
            local_1c8 = *(uint*)( param_4 + 0x780 ) & uVar55 | ~uVar55 & *(uint*)( param_4 + 0x20 );
            uStack_1c4 = *(uint*)( param_4 + 0x784 ) & uVar56 | ~uVar56 & *(uint*)( param_4 + 0x24 );
            uStack_1c0 = *(uint*)( param_4 + 0x788 ) & uVar57 | ~uVar57 & *(uint*)( param_4 + 0x28 );
            uStack_1bc = *(uint*)( param_4 + 0x78c ) & uVar58 | ~uVar58 & *(uint*)( param_4 + 0x2c );
            local_188 = uVar55 & *(uint*)( param_4 + 0x7c0 ) | ~uVar55 & *(uint*)( param_4 + 0x60 );
            uStack_184 = uVar56 & *(uint*)( param_4 + 0x7c4 ) | ~uVar56 & *(uint*)( param_4 + 100 );
            uStack_180 = uVar57 & *(uint*)( param_4 + 0x7c8 ) | ~uVar57 & *(uint*)( param_4 + 0x68 );
            uStack_17c = uVar58 & *(uint*)( param_4 + 0x7cc ) | ~uVar58 & *(uint*)( param_4 + 0x6c );
            uVar55 = compute_ideal_endpoint_formats((partition_info*)( pbVar8 + 0xe07560 ), param_2, (endpoints*)&local_1d8, (signed*)( param_4 + 0x2b5c0 ), (float*)( param_4 + 0x2bdc0 ), *(uint*)( param_1 + 0x44 ), uVar35, uVar43, local_358, local_338, (quant_method*)local_318, local_2f8, param_4);
            local_4c8 = _LC5;
            if (uVar55 != 0) {
               uVar56 = 0;
               local_4a8 = local_2c8;
               LAB_00102410:do {
                  uVar22 = (ulong)uVar56;
                  iVar20 = local_338[uVar22];
                  bVar4 = pbVar8[(long)iVar20 * 6 + 0xac8562];
                  lVar17 = (ulong)(byte)bVar4 * 0x1fb70;
                  pcVar25 = param_4 + ( ulong )(uint)(iVar20 << 6) + 0x65c0;
                  bVar5 = pbVar8[lVar17 + 0x252];
                  local_148 = CONCAT44(uStack_1d4, local_1d8);
                  uStack_140 = uStack_1d0;
                  local_138 = CONCAT44(uStack_1c4, local_1c8);
                  uStack_130 = CONCAT44(uStack_1bc, uStack_1c0);
                  local_e8 = local_178;
                  local_128 = local_1b8;
                  uStack_120 = uStack_1b0;
                  local_118 = local_1a8;
                  uStack_110 = uStack_1a0;
                  local_108 = local_198;
                  uStack_100 = uStack_190;
                  local_f8 = CONCAT44(uStack_184, local_188);
                  uStack_f0 = CONCAT44(uStack_17c, uStack_180);
                  local_d8 = local_168;
                  local_c8[0] = local_158;
                  puVar26 = local_218;
                  if (7 < (byte)bVar5) {
                     for (uVar18 = ( ulong )((byte)bVar5 >> 3); uVar18 != 0; uVar18 = uVar18 - 1) {
                        *(undefined8*)puVar26 = *(undefined8*)pcVar25;
                        pcVar25 = pcVar25 + (ulong)bVar31 * -0x10 + 8;
                        puVar26 = puVar26 + (ulong)bVar31 * -0x10 + 8;
                     }

                  }

                  lVar19 = 0;
                  if (( (byte)bVar5 & 4 ) != 0) {
                     *(undefined4*)puVar26 = *(undefined4*)pcVar25;
                     lVar19 = 4;
                  }

                  if (( (byte)bVar5 & 2 ) != 0) {
                     *(undefined2*)( puVar26 + lVar19 ) = *(undefined2*)( pcVar25 + lVar19 );
                     lVar19 = lVar19 + 2;
                  }

                  if (( (byte)bVar5 & 1 ) != 0) {
                     *(compression_working_buffers*)( puVar26 + lVar19 ) = pcVar25[lVar19];
                  }

                  pcVar25 = param_4 + ( ulong )(uint)(iVar20 << 6) + 0x65e0;
                  puVar26 = local_1f8;
                  if (7 < (byte)bVar5) {
                     for (uVar18 = ( ulong )((byte)bVar5 >> 3); uVar18 != 0; uVar18 = uVar18 - 1) {
                        *(undefined8*)puVar26 = *(undefined8*)pcVar25;
                        pcVar25 = pcVar25 + (ulong)bVar31 * -0x10 + 8;
                        puVar26 = puVar26 + (ulong)bVar31 * -0x10 + 8;
                     }

                  }

                  lVar19 = 0;
                  if (( (byte)bVar5 & 4 ) != 0) {
                     *(undefined4*)puVar26 = *(undefined4*)pcVar25;
                     lVar19 = 4;
                  }

                  if (( (byte)bVar5 & 2 ) != 0) {
                     *(undefined2*)( puVar26 + lVar19 ) = *(undefined2*)( pcVar25 + lVar19 );
                     lVar19 = lVar19 + 2;
                  }

                  if (( (byte)bVar5 & 1 ) != 0) {
                     *(compression_working_buffers*)( puVar26 + lVar19 ) = pcVar25[lVar19];
                  }

                  if (*(int*)( param_1 + 0x40 ) != 0) {
                     local_498._0_1_ = (undefined1)uVar16;
                     uVar57 = 0;
                     while (true) {
                        recompute_ideal_colors_2planes(param_2, pbVar8, (decimation_info*)( pbVar8 + lVar17 + 0x250 ), local_218, local_1f8, (endpoints*)&local_148, local_3c8, local_3b8, uVar16);
                        uVar9 = pack_color_endpoints(local_358[uVar22 * 4], aiStack_244, local_318[uVar22]);
                        uStack_256 = 0;
                        uStack_250 = CONCAT31(uStack_250._1_3_, uVar9);
                        uStack_252 = 0;
                        uStack_24c = local_318[uVar22];
                        uStack_254 = *(undefined2*)( pbVar8 + (long)iVar20 * 6 + 0xac8560 );
                        uStack_255 = local_498._0_1_;
                        local_258 = SUB21(_LC27, 0);
                        uStack_257 = ( undefined1 )((ushort)_LC27 >> 8);
                        if (uVar57 == 0) break;
                        LAB_0010280d:if (pbVar8[(ulong)(byte)bVar4 * 0x1fb70 + 0x252] == pbVar8[3]) {
                           cVar10 = realign_weights_undecimated();
                        }
 else {
                           cVar10 = realign_weights_decimated(*(undefined4*)param_1, pbVar8, param_2, &local_258);
                        }

                        auVar42._0_8_ = compute_symbolic_block_difference_2plane((astcenc_config*)param_1, pbVar8, &local_258, param_2);
                        auVar42._8_8_ = extraout_XMM0_Qb;
                        if ((float)auVar42._0_8_ == __LC12) {
                           local_258 = (symbolic_compressed_block)0x0;
                           auVar42 = ZEXT416((uint)_LC5);
                        }

                        fVar76 = auVar42._0_4_;
                        auVar71 = auVar42;
                        if (local_4c8 <= fVar76) {
                           auVar71._4_12_ = auVar42._4_12_;
                           auVar71._0_4_ = local_4c8;
                        }

                        local_4c8 = auVar71._0_4_;
                        if (( (float)( ( *(uint*)( param_1 + 0x40 ) - 1 ) - uVar57 ) * __LC13 + fVar7 ) * local_4a8 < fVar76) goto LAB_00102977;
                        if (fVar76 < local_4a8) {
                           local_248 = fVar76;
                           local_2a8 = local_228;
                           uStack_2a0 = uStack_220;
                           local_2d8 = CONCAT26(uStack_252, CONCAT24(uStack_254, CONCAT13(uStack_255, CONCAT12(uStack_256, CONCAT11(uStack_257, local_258)))));
                           uStack_2d0 = CONCAT44(uStack_24c, uStack_250);
                           local_2c8 = fVar76;
                           iStack_2c4 = aiStack_244[0];
                           iStack_2c0 = (int)aiStack_244._4_8_;
                           iStack_2bc = SUB84(aiStack_244._4_8_, 4);
                           iStack_2b8 = (int)aiStack_244._12_8_;
                           uStack_2b4 = SUB84(aiStack_244._12_8_, 4);
                           uStack_2b0 = uStack_230;
                           local_288 = local_208;
                           local_278 = local_1f8;
                           local_268 = local_1e8;
                           local_4a8 = fVar76;
                           if (fVar76 < fVar75) goto LAB_00102b58;
                        }

                        if (( cVar10 == '\0' ) || ( uVar57 = uVar57 + 1 * (uint*)( param_1 + 0x40 ) <= uVar57 )) goto LAB_00102977;
                     }
;
                     auVar42._0_8_ = compute_symbolic_block_difference_2plane((astcenc_config*)param_1, pbVar8, &local_258, param_2);
                     auVar42._8_8_ = extraout_XMM0_Qb_00;
                     if ((float)auVar42._0_8_ == __LC12) {
                        local_258 = (symbolic_compressed_block)0x0;
                        auVar42 = ZEXT416((uint)_LC5);
                     }

                     fVar76 = auVar42._0_4_;
                     auVar64 = auVar42;
                     if (local_4c8 <= fVar76) {
                        auVar64._4_12_ = auVar42._4_12_;
                        auVar64._0_4_ = local_4c8;
                     }

                     local_4c8 = auVar64._0_4_;
                     if (fVar76 <= ( (float)*(uint*)( param_1 + 0x40 ) * __LC13 + __LC14 ) * local_4a8) {
                        if (local_4a8 <= fVar76) goto LAB_0010280d;
                        local_248 = fVar76;
                        local_2d8 = CONCAT26(uStack_252, CONCAT24(uStack_254, CONCAT13(uStack_255, CONCAT12(uStack_256, CONCAT11(uStack_257, local_258)))));
                        uStack_2d0 = CONCAT44(uStack_24c, uStack_250);
                        local_2c8 = fVar76;
                        iStack_2c4 = aiStack_244[0];
                        iStack_2c0 = (int)aiStack_244._4_8_;
                        iStack_2bc = SUB84(aiStack_244._4_8_, 4);
                        iStack_2b8 = (int)aiStack_244._12_8_;
                        uStack_2b4 = SUB84(aiStack_244._12_8_, 4);
                        uStack_2b0 = uStack_230;
                        local_2a8 = local_228;
                        uStack_2a0 = uStack_220;
                        local_288 = local_208;
                        local_278 = local_1f8;
                        local_268 = local_1e8;
                        local_4a8 = fVar76;
                        if (fVar75 <= fVar76) goto LAB_0010280d;
                        LAB_00102b58:local_4a8 = auVar42._0_4_;
                        uVar56 = uVar55 + 1;
                        local_2c8 = local_248;
                        iStack_2c4 = aiStack_244[0];
                        uStack_2b0 = uStack_230;
                        local_2a8 = local_228;
                        uStack_2a0 = uStack_220;
                        local_288 = local_208;
                        local_278 = local_1f8;
                        local_268 = local_1e8;
                        if (uVar55 <= uVar56) break;
                        goto LAB_00102410;
                     }

                  }

                  LAB_00102977:uVar56 = uVar56 + 1;
               }
 while ( uVar56 < uVar55 );
            }

            if (fVar27 * _LC28 < local_4c8) break;
            if (local_4c8 < fVar32) goto LAB_00101928;
         }

      }

      uVar16 = uVar16 - 1;
   }
 while ( uVar16 != 0xffffffff );
   if (1 < iVar6) {
      pfVar29 = (float*)&local_378;
      lVar17 = 2;
      puVar24 = local_368;
      do {
         fVar7 = local_3a0[lVar17];
         fVar27 = local_390[lVar17];
         if ((uint)fVar7 <= (uint)local_390[lVar17]) {
            fVar27 = fVar7;
         }

         uVar16 = find_best_partition_candidates(pbVar8, param_2, (uint)lVar17, (uint)fVar7, (uint*)&local_148, (uint)fVar27);
         fVar7 = *pfVar29;
         if (uVar16 == 0) {
            fVar27 = *(float*)( puVar24 + 4 );
            fVar78 = pfVar29[1];
         }
 else {
            puVar28 = (uint*)&local_148;
            do {
               fVar33 = (float)compress_symbolic_block_for_partition_1plane((astcenc_config*)param_1, pbVar8, param_2, false, fVar32 * compress_block(astcenc_contexti_const & image_block_const & unsigned_char, *, compression_working_buffers & ::errorval_overshoot, (uint)lVar17, *puVar28, (symbolic_compressed_block*)&local_2d8, param_4, uVar14));
               fVar27 = *(float*)( puVar24 + 4 );
               fVar78 = pfVar29[1];
               if (fVar33 <= pfVar29[1]) {
                  fVar78 = fVar33;
               }

               pfVar29[1] = fVar78;
               if (( _LC28 * fVar27 * fVar7 < fVar78 ) || ( fVar33 < fVar32 )) goto LAB_00101928;
               puVar28 = puVar28 + 1;
            }
 while ( (uint*)( (long)&local_148 + (ulong)uVar16 * 4 ) != puVar28 );
         }

         if (fVar7 * fVar27 < fVar78) break;
         lVar17 = lVar17 + 1;
         pfVar29 = pfVar29 + 1;
         puVar24 = puVar24 + 4;
      }
 while ( (int)lVar17 <= iVar6 );
   }

   LAB_00101928:if (local_2d8._0_1_ == (symbolic_compressed_block)0x0) {
      local_2d8 = CONCAT71(local_2d8._1_7_, 2);
      auVar37 = maxps(*(undefined1(*) [16])( param_2 + 0xdc0 ), (undefined1[16])0x0);
      auVar48._4_4_ = _LC7;
      auVar48._0_4_ = _LC7;
      auVar48._8_4_ = _LC7;
      auVar48._12_4_ = _LC7;
      auVar37 = minps(auVar37, auVar48);
      iStack_2c4 = (int)( auVar37._0_4_ * _LC16 + _LC9 );
      iStack_2c0 = (int)( auVar37._4_4_ * _LC16 + _LC9 );
      iStack_2bc = (int)( auVar37._8_4_ * _LC16 + _LC9 );
      iStack_2b8 = (int)( auVar37._12_4_ * _LC16 + _LC9 );
   }

   symbolic_to_physical(pbVar8, (symbolic_compressed_block*)&local_2d8, param_3);
   LAB_0010199c:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}

