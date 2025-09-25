/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* lerp_color_int(vmask4, vint4, vint4, vint4) */ulong lerp_color_int(ulong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   int iVar1;
   int iVar2;
   iVar2 = (int)( (ulong)param_4 >> 0x20 );
   iVar1 = (int)param_2 * ( __LC0 - (int)param_4 ) + (int)param_3 * (int)param_4 + __LC12;
   iVar2 = (int)( (ulong)param_2 >> 0x20 ) * ( _UNK_00101cb4 - iVar2 ) + (int)( (ulong)param_3 >> 0x20 ) * iVar2 + _UNK_00101cc4;
   return param_1 & CONCAT44(( iVar2 >> 0xe ) * _UNK_00101cd4, ( iVar1 >> 0xe ) * _LC3) | ~param_1 & CONCAT44(iVar2 >> 6, iVar1 >> 6);
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* unpack_weights(block_size_descriptor const&, symbolic_compressed_block const&, decimation_info
   const&, bool, int*, int*) */void unpack_weights(block_size_descriptor *param_1, symbolic_compressed_block *param_2, decimation_info *param_3, bool param_4, int *param_5, int *param_6) {
   decimation_info *pdVar1;
   uint *puVar2;
   byte bVar3;
   byte bVar4;
   undefined4 uVar5;
   undefined4 uVar6;
   uint uVar7;
   uint uVar8;
   undefined1 auVar9[13];
   uint3 uVar10;
   undefined1 auVar11[13];
   undefined1 auVar12[13];
   undefined1 auVar13[13];
   undefined1 auVar14[13];
   undefined1 auVar15[13];
   uint5 uVar16;
   undefined1 auVar17[13];
   undefined1 auVar18[13];
   undefined1 auVar19[13];
   undefined1 auVar20[13];
   undefined1 auVar21[13];
   undefined1 auVar22[13];
   undefined1 auVar23[13];
   ulong uVar24;
   ulong uVar25;
   undefined8 uVar26;
   undefined8 uVar27;
   undefined8 uVar28;
   undefined8 uVar29;
   undefined8 uVar30;
   undefined8 uVar31;
   undefined8 uVar32;
   undefined8 uVar33;
   unkbyte9 Var34;
   undefined1 auVar35[13];
   undefined1 auVar36[13];
   undefined1 auVar37[13];
   undefined1 auVar38[13];
   undefined1 auVar39[13];
   undefined1 auVar40[13];
   uint uVar41;
   uint uVar42;
   uint uVar43;
   uint uVar44;
   decimation_info *pdVar45;
   long lVar46;
   long lVar47;
   long in_FS_OFFSET;
   undefined1 auVar48[16];
   undefined1 auVar49[16];
   uint uVar50;
   uint uVar51;
   uint uVar54;
   int iVar55;
   undefined1 auVar52[16];
   uint uVar56;
   undefined1 auVar53[16];
   uint uVar57;
   uint uVar59;
   uint uVar60;
   undefined1 auVar58[16];
   uint uVar61;
   undefined1 auVar62[16];
   int iVar63;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   undefined8 uStack_40;
   long local_30;
   uVar44 = _UNK_00101cec;
   uVar43 = _UNK_00101ce8;
   uVar42 = _UNK_00101ce4;
   uVar41 = __LC4;
   uVar26 = *(undefined8*)( param_2 + 0x70 );
   uVar27 = *(undefined8*)( param_2 + 0x78 );
   uVar28 = *(undefined8*)( param_2 + 0x60 );
   uVar29 = *(undefined8*)( param_2 + 0x68 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar46 = 0;
   uVar30 = *(undefined8*)( param_2 + 0x50 );
   uVar31 = *(undefined8*)( param_2 + 0x58 );
   uVar32 = *(undefined8*)( param_2 + 0x40 );
   uVar33 = *(undefined8*)( param_2 + 0x48 );
   if (param_4) {
      if (param_1[3] != (block_size_descriptor)0x0) {
         lVar46 = 0;
         do {
            uVar51 = *(uint*)( param_3 + lVar46 + 0x10 );
            pdVar45 = param_3 + lVar46 + 0xf0;
            auVar18[0xc] = (char)( uVar51 >> 0x18 );
            auVar18._0_12_ = ZEXT712(0);
            uVar16 = CONCAT32(auVar18._10_3_, ( ushort )(byte)(uVar51 >> 0x10));
            auVar40._5_8_ = 0;
            auVar40._0_5_ = uVar16;
            Var34 = CONCAT72(SUB137(auVar40 << 0x40, 6), ( ushort )(byte)(uVar51 >> 8));
            auVar53._0_4_ = uVar51 & 0xff;
            auVar53._4_9_ = Var34;
            auVar53._13_3_ = 0;
            iVar55 = (int)uVar16;
            uVar10 = auVar18._10_3_ >> 0x10;
            auVar58._4_3_ = uVar10;
            auVar58._0_4_ = iVar55;
            auVar58[7] = 0;
            auVar58[8] = (char)uVar51;
            auVar58._9_3_ = 0;
            auVar58[0xc] = (char)uVar51;
            auVar58._13_3_ = 0;
            auVar49._0_4_ = -(uint)(iVar55 < (int)auVar53._0_4_);
            auVar49._4_4_ = -(uint)((uint)uVar10 < (uint)Var34);
            auVar49._8_4_ = -(uint)((int)auVar53._0_4_ < iVar55);
            auVar49._12_4_ = -(uint)(auVar53._0_4_ < uVar10);
            auVar49 = auVar49 & auVar53 | ~auVar49 & auVar58;
            uVar51 = auVar49._0_4_;
            uVar54 = auVar49._4_4_;
            uVar50 = -(uint)((int)uVar54 < (int)uVar51);
            pdVar1 = pdVar45 + (long)(int)( uVar51 & uVar50 | ~uVar50 & uVar54 ) * 0xd8;
            uVar51 = uVar41;
            uVar54 = uVar42;
            uVar50 = uVar43;
            uVar56 = uVar44;
            uVar57 = uVar41;
            uVar59 = uVar42;
            uVar60 = uVar43;
            uVar61 = uVar44;
            do {
               uVar5 = *(undefined4*)pdVar45;
               local_78 = uVar32;
               uStack_70 = uVar33;
               uVar7 = *(uint*)( pdVar45 + 0x360 );
               pdVar45 = pdVar45 + 0xd8;
               uVar24 = (ulong)(ushort)uVar5 & 0xffffffffffff00ff;
               local_68 = uVar30;
               uStack_60 = uVar31;
               auVar19._8_4_ = 0;
               auVar19._0_8_ = uVar24;
               auVar19[0xc] = (char)( (uint)uVar5 >> 0x18 );
               auVar20[8] = (char)( (uint)uVar5 >> 0x10 );
               auVar20._0_8_ = uVar24;
               auVar20[9] = 0;
               auVar20._10_3_ = auVar19._10_3_;
               auVar37._5_8_ = 0;
               auVar37._0_5_ = auVar20._8_5_;
               iVar55 = (int)uVar24;
               auVar21[4] = (char)( (uint)uVar5 >> 8 );
               auVar21._0_4_ = iVar55;
               auVar21[5] = 0;
               auVar21._6_7_ = SUB137(auVar37 << 0x40, 6);
               auVar22[0xc] = (char)( uVar7 >> 0x18 );
               auVar22._0_12_ = ZEXT812(0);
               auVar23._10_3_ = auVar22._10_3_;
               auVar23._0_10_ = ( unkuint10 )(byte)(uVar7 >> 0x10) << 0x40;
               uVar16 = auVar23._8_5_;
               auVar38._5_8_ = 0;
               auVar38._0_5_ = uVar16;
               lVar47 = (long)(int)( uint )(uint3)(auVar19._10_3_ >> 0x10);
               bVar3 = *(byte*)( (long)&local_78 + lVar47 );
               local_78 = uVar28;
               uStack_70 = uVar29;
               local_68 = uVar26;
               uStack_60 = uVar27;
               bVar4 = *(byte*)( (long)&local_78 + lVar47 );
               iVar63 = (int)CONCAT72(SUB137(auVar38 << 0x40, 6), ( ushort )(byte)(uVar7 >> 8));
               uVar8 = ( uint )(uint3)(auVar22._10_3_ >> 0x10);
               uVar57 = ( uint ) * (byte*)( (long)&local_78 + (long)iVar55 ) * ( uVar7 & 0xff ) + uVar57;
               uVar59 = ( uint ) * (byte*)( (long)&local_78 + (long)auVar21._4_4_ ) * iVar63 + uVar59;
               uVar60 = (int)( ( (ulong)CONCAT14(bVar3, ( uint ) * (byte*)( (long)&local_78 + (long)auVar20._8_4_ )) & 0xffffffff ) * ( (ulong)uVar16 & 0xffffffff ) ) + uVar60;
               uVar61 = bVar3 * uVar8 + uVar61;
               uVar51 = ( uVar7 & 0xff ) * ( uint ) * (byte*)( (long)&local_78 + (long)iVar55 ) + uVar51;
               uVar54 = ( uint ) * (byte*)( (long)&local_78 + (long)auVar21._4_4_ ) * iVar63 + uVar54;
               uVar50 = (int)( ( (ulong)uVar16 & 0xffffffff ) * ( (ulong)CONCAT14(bVar4, ( uint ) * (byte*)( (long)&local_78 + (long)auVar20._8_4_ )) & 0xffffffff ) ) + uVar50;
               uVar56 = bVar4 * uVar8 + uVar56;
            }
 while ( pdVar1 != pdVar45 );
            puVar2 = (uint*)( param_5 + lVar46 );
            *puVar2 = uVar57 >> 4;
            puVar2[1] = uVar59 >> 4;
            puVar2[2] = uVar60 >> 4;
            puVar2[3] = uVar61 >> 4;
            puVar2 = (uint*)( param_6 + lVar46 );
            *puVar2 = uVar51 >> 4;
            puVar2[1] = uVar54 >> 4;
            puVar2[2] = uVar50 >> 4;
            puVar2[3] = uVar56 >> 4;
            lVar46 = lVar46 + 4;
         }
 while ( (uint)lVar46 < (uint)(byte)param_1[3] );
      }

   }
 else if (param_1[3] != (block_size_descriptor)0x0) {
      do {
         uVar51 = *(uint*)( param_3 + lVar46 + 0x10 );
         pdVar45 = param_3 + lVar46 + 0xf0;
         auVar9[0xc] = (char)( uVar51 >> 0x18 );
         auVar9._0_12_ = ZEXT712(0);
         uVar16 = CONCAT32(auVar9._10_3_, ( ushort )(byte)(uVar51 >> 0x10));
         auVar39._5_8_ = 0;
         auVar39._0_5_ = uVar16;
         Var34 = CONCAT72(SUB137(auVar39 << 0x40, 6), ( ushort )(byte)(uVar51 >> 8));
         auVar52._0_4_ = uVar51 & 0xff;
         auVar52._4_9_ = Var34;
         auVar52._13_3_ = 0;
         iVar55 = (int)uVar16;
         uVar10 = auVar9._10_3_ >> 0x10;
         auVar62._4_3_ = uVar10;
         auVar62._0_4_ = iVar55;
         auVar62[7] = 0;
         auVar62[8] = (char)uVar51;
         auVar62._9_3_ = 0;
         auVar62[0xc] = (char)uVar51;
         auVar62._13_3_ = 0;
         auVar48._0_4_ = -(uint)(iVar55 < (int)auVar52._0_4_);
         auVar48._4_4_ = -(uint)((uint)uVar10 < (uint)Var34);
         auVar48._8_4_ = -(uint)((int)auVar52._0_4_ < iVar55);
         auVar48._12_4_ = -(uint)(auVar52._0_4_ < uVar10);
         auVar49 = auVar48 & auVar52 | ~auVar48 & auVar62;
         uVar51 = auVar49._0_4_;
         uVar54 = auVar49._4_4_;
         uVar50 = -(uint)((int)uVar54 < (int)uVar51);
         pdVar1 = pdVar45 + (long)(int)( uVar51 & uVar50 | ~uVar50 & uVar54 ) * 0xd8;
         uVar51 = uVar41;
         uVar54 = uVar42;
         uVar50 = uVar43;
         uVar56 = uVar44;
         do {
            uVar5 = *(undefined4*)pdVar45;
            local_78 = uVar32;
            uStack_70 = uVar33;
            uVar6 = *(undefined4*)( pdVar45 + 0x360 );
            pdVar45 = pdVar45 + 0xd8;
            uVar24 = (ulong)(ushort)uVar5 & 0xffffffffffff00ff;
            local_68 = uVar30;
            uStack_60 = uVar31;
            uVar25 = (ulong)(ushort)uVar6 & 0xffffffffffff00ff;
            auVar11._8_4_ = 0;
            auVar11._0_8_ = uVar24;
            auVar11[0xc] = (char)( (uint)uVar5 >> 0x18 );
            auVar12[8] = (char)( (uint)uVar5 >> 0x10 );
            auVar12._0_8_ = uVar24;
            auVar12[9] = 0;
            auVar12._10_3_ = auVar11._10_3_;
            auVar35._5_8_ = 0;
            auVar35._0_5_ = auVar12._8_5_;
            auVar13[4] = (char)( (uint)uVar5 >> 8 );
            auVar13._0_4_ = (int)uVar24;
            auVar13[5] = 0;
            auVar13._6_7_ = SUB137(auVar35 << 0x40, 6);
            local_58 = uVar28;
            uStack_50 = uVar29;
            auVar14._8_4_ = 0;
            auVar14._0_8_ = uVar25;
            auVar14[0xc] = (char)( (uint)uVar6 >> 0x18 );
            auVar15[8] = (char)( (uint)uVar6 >> 0x10 );
            auVar15._0_8_ = uVar25;
            auVar15[9] = 0;
            auVar15._10_3_ = auVar14._10_3_;
            uVar16 = auVar15._8_5_;
            auVar36._5_8_ = 0;
            auVar36._0_5_ = uVar16;
            auVar17[4] = (char)( (uint)uVar6 >> 8 );
            auVar17._0_4_ = (int)uVar25;
            auVar17[5] = 0;
            auVar17._6_7_ = SUB137(auVar36 << 0x40, 6);
            local_48 = uVar26;
            uStack_40 = uVar27;
            bVar3 = *(byte*)( (long)&local_78 + (long)(int)( uint )(uint3)(auVar11._10_3_ >> 0x10) );
            uVar51 = ( uint ) * (byte*)( (long)&local_78 + (long)(int)uVar24 ) * (int)uVar25 + uVar51;
            uVar54 = ( uint ) * (byte*)( (long)&local_78 + (long)auVar13._4_4_ ) * auVar17._4_4_ + uVar54;
            uVar50 = (int)( ( (ulong)CONCAT14(bVar3, ( uint ) * (byte*)( (long)&local_78 + (long)auVar12._8_4_ )) & 0xffffffff ) * ( (ulong)uVar16 & 0xffffffff ) ) + uVar50;
            uVar56 = (int)( (ulong)bVar3 * ( ulong )(uVar16 >> 0x20) ) + uVar56;
         }
 while ( pdVar1 != pdVar45 );
         puVar2 = (uint*)( param_5 + lVar46 );
         *puVar2 = uVar51 >> 4;
         puVar2[1] = uVar54 >> 4;
         puVar2[2] = uVar50 >> 4;
         puVar2[3] = uVar56 >> 4;
         lVar46 = lVar46 + 4;
      }
 while ( (uint)lVar46 < (uint)(byte)param_1[3] );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* decompress_symbolic_block(astcenc_profile, block_size_descriptor const&, int, int, int,
   symbolic_compressed_block const&, image_block&) */void decompress_symbolic_block(undefined8 param_1, uint param_2, block_size_descriptor *param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, symbolic_compressed_block *param_7, long param_8) {
   undefined4 *puVar1;
   symbolic_compressed_block sVar2;
   block_size_descriptor bVar3;
   block_size_descriptor bVar4;
   bool bVar5;
   bool bVar6;
   bool bVar7;
   bool bVar8;
   bool bVar9;
   bool bVar10;
   undefined8 uVar11;
   undefined8 uVar12;
   ushort uVar13;
   short sVar14;
   ushort uVar15;
   short sVar16;
   short sVar17;
   int iVar18;
   int iVar19;
   undefined1 uVar20;
   uint uVar21;
   int iVar22;
   long lVar23;
   symbolic_compressed_block *psVar24;
   uint uVar25;
   block_size_descriptor *pbVar26;
   int unaff_R13D;
   long lVar27;
   long in_FS_OFFSET;
   undefined4 uVar28;
   undefined4 uVar29;
   undefined4 uVar30;
   undefined4 uVar31;
   uint uVar33;
   undefined4 in_XMM0_Dc;
   uint uVar34;
   undefined4 in_XMM0_Dd;
   undefined1 auVar32[16];
   ushort uVar35;
   ushort uVar39;
   uint uVar40;
   ushort uVar41;
   uint uVar42;
   ushort uVar43;
   undefined1 auVar36[16];
   undefined1 auVar37[16];
   undefined1 auVar38[16];
   undefined1 auVar44[16];
   undefined1 auVar46[16];
   ushort uVar47;
   ushort uVar48;
   ushort uVar49;
   uint uVar50;
   ushort uVar51;
   int iVar52;
   int iVar53;
   int iVar54;
   ulong uVar55;
   uint uVar56;
   uint uVar58;
   uint uVar59;
   uint uVar60;
   undefined1 auVar57[16];
   uint uVar61;
   uint uVar62;
   uint uVar63;
   block_size_descriptor *local_790;
   byte local_72a;
   byte local_729;
   undefined1 local_728[16];
   undefined1 local_718[16];
   int local_708[216];
   int local_3a8[218];
   long local_40;
   ulong extraout_XMM0_Qb;
   undefined1 auVar45[16];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)( param_8 + 0xfc4 ) = param_4;
   *(undefined4*)( param_8 + 0xfc8 ) = param_5;
   *(undefined4*)( param_8 + 0xfcc ) = param_6;
   *(undefined1*)( param_8 + 0xe10 ) = 0;
   for (int i = 0; i < 3; i++) {
      *(undefined1(*) [16])( param_8 + ( 16*i + 3536 ) ) = (undefined1[16])0;
   }

   uVar28 = _LC7;
   sVar2 = *param_7;
   if (sVar2 == (symbolic_compressed_block)0x0) {
      if (param_3[3] != (block_size_descriptor)0x0) {
         lVar23 = 0;
         do {
            *(undefined4*)( param_8 + lVar23 * 4 ) = uVar28;
            for (int i = 0; i < 3; i++) {
               *(undefined4*)( param_8 + ( 880*i + 880 ) + lVar23 * 4 ) = uVar28;
            }

            *(undefined1*)( param_8 + 0xe12 + lVar23 ) = 0;
            *(undefined1*)( param_8 + 0xeea + lVar23 ) = 0;
            lVar23 = lVar23 + 1;
         }
 while ( (uint)lVar23 < (uint)(byte)param_3[3] );
      }

   }
 else if (( byte )((char)sVar2 - 1U) < 2) {
      if (sVar2 == (symbolic_compressed_block)0x2) {
         auVar46._8_4_ = 0xffffffff;
         auVar46._0_8_ = 0xffffffffffffffff;
         auVar46._12_4_ = 0xffffffff;
         auVar36 = *(undefined1(*) [16])( param_7 + 0x14 );
         if (*(char*)( param_8 + 0xe11 ) == '\0') {
            if (param_2 == 0) {
               auVar46._8_8_ = _UNK_00101cf8;
               auVar46._0_8_ = __LC8;
            }
 else {
               auVar46 = (undefined1[16])0x0;
            }

         }

         auVar37._0_4_ = auVar36._0_4_ >> 8;
         auVar37._4_4_ = auVar36._4_4_ >> 8;
         auVar37._8_4_ = auVar36._8_4_ >> 8;
         auVar37._12_4_ = auVar36._12_4_ >> 8;
         auVar44._0_4_ = auVar37._0_4_ * _LC3;
         auVar45._8_4_ = ( undefined4 )(( auVar37._8_8_ & 0xffffffff ) * (ulong)DAT_00101cd8);
         auVar45._4_4_ = auVar45._8_4_;
         auVar45._0_4_ = auVar44._0_4_;
         auVar45._12_4_ = auVar37._12_4_ * _UNK_00101cdc;
         auVar44._8_8_ = auVar45._8_8_;
         auVar44._4_4_ = auVar37._4_4_ * _UNK_00101cd4;
         auVar36 = auVar46 & auVar44 | ~auVar46 & auVar36;
         uVar25 = auVar36._0_4_;
         bVar8 = (int)uVar25 < _LC22;
         uVar33 = auVar36._4_4_;
         bVar9 = (int)uVar33 < _UNK_00101d14;
         uVar34 = auVar36._8_4_;
         bVar10 = (int)uVar34 < (int)DAT_00101d18;
         uVar62 = auVar36._12_4_;
         auVar38._0_4_ = uVar25 >> 8;
         auVar38._4_4_ = uVar33 >> 8;
         auVar38._8_4_ = uVar34 >> 8;
         auVar38._12_4_ = uVar62 >> 8;
         auVar46 = ~auVar38 & auVar36;
         bVar5 = uVar25 == __LC14;
         bVar6 = uVar33 == _UNK_00101d04;
         bVar7 = uVar34 == _UNK_00101d08;
         uVar50 = __LC11 - ( (uint)(float)auVar46._0_4_ >> 0x17 );
         uVar60 = _UNK_00101d24 - ( (uint)(float)auVar46._4_4_ >> 0x17 );
         uVar56 = _UNK_00101d28 - ( (uint)(float)auVar46._8_4_ >> 0x17 );
         uVar58 = _UNK_00101d2c - ( (uint)(float)auVar46._12_4_ >> 0x17 );
         uVar50 = -(uint)(0 < (int)uVar50) & uVar50;
         uVar60 = -(uint)(0 < (int)uVar60) & uVar60;
         uVar56 = -(uint)(0 < (int)uVar56) & uVar56;
         uVar58 = -(uint)(0 < (int)uVar58) & uVar58;
         uVar21 = -(uint)((int)uVar50 < (int)__LC12);
         uVar40 = -(uint)((int)uVar60 < (int)_UNK_00101cc4);
         uVar42 = -(uint)((int)uVar56 < (int)_UNK_00101cc8);
         uVar63 = -(uint)((int)uVar58 < (int)_UNK_00101ccc);
         uVar50 = uVar50 & uVar21 | ~uVar21 & __LC12;
         uVar60 = uVar60 & uVar40 | ~uVar40 & _UNK_00101cc4;
         uVar56 = uVar56 & uVar42 | ~uVar42 & _UNK_00101cc8;
         uVar63 = uVar58 & uVar63 | ~uVar63 & _UNK_00101ccc;
         uVar21 = __LC14 & uVar25 * (int)(float)( ( __LC13 + uVar50 ) * 0x800000 );
         uVar40 = _UNK_00101d04 & uVar33 * (int)(float)( ( _UNK_00101d34 + uVar60 ) * 0x800000 );
         uVar42 = _UNK_00101d08 & ( uint )(( auVar36._8_8_ & 0xffffffff ) * (ulong)(uint)(int)(float)( ( _UNK_00101d38 + uVar56 ) * 0x800000 ));
         sVar17 = (short)__LC15;
         sVar16 = (short)_UNK_00101d44;
         sVar14 = (short)_UNK_00101d48;
         uVar35 = (ushort)__LC16;
         uVar15 = (ushort)_UNK_00101d54;
         uVar13 = (ushort)_UNK_00101d58;
         in_XMM0_Dd = sf16_to_float(-(ushort)((int)uVar62 < _UNK_00101d1c) & ( ushort )(uVar62 << 8) | ~-(ushort)((int)uVar62 < _UNK_00101d1c) & ( -(ushort)(uVar62 == _UNK_00101d0c) & (ushort)_UNK_00101d5c | ~-(ushort)(uVar62 == _UNK_00101d0c) & ( ( ushort )(( _UNK_00101d0c & uVar62 * (int)(float)( ( _UNK_00101d3c + uVar63 ) * 0x800000 ) ) >> 6) | ( (short)_UNK_00101d4c - (short)uVar63 ) * 0x400 ) ));
         in_XMM0_Dc = sf16_to_float(-(ushort)bVar10 & ( ushort )(uVar34 << 8) | ~-(ushort)bVar10 & ( -(ushort)bVar7 & uVar13 | ~-(ushort)bVar7 & ( ( ushort )(uVar42 >> 6) | ( sVar14 - (short)uVar56 ) * 0x400 ) ));
         uVar29 = sf16_to_float(-(ushort)bVar9 & ( ushort )(uVar33 << 8) | ~-(ushort)bVar9 & ( -(ushort)bVar6 & uVar15 | ~-(ushort)bVar6 & ( ( ushort )(uVar40 >> 6) | ( sVar16 - (short)uVar60 ) * 0x400 ) ));
         uVar28 = sf16_to_float(-(ushort)bVar8 & ( ushort )(uVar25 << 8) | ~-(ushort)bVar8 & ( -(ushort)bVar5 & uVar35 | ~-(ushort)bVar5 & ( ( ushort )(uVar21 >> 6) | ( sVar17 - (short)uVar50 ) * 0x400 ) ));
         uVar20 = 0;
      }
 else if (param_2 < 2) {
         uVar20 = 0;
         uVar29 = _LC7;
         in_XMM0_Dc = _LC7;
         in_XMM0_Dd = _LC7;
      }
 else {
         uVar20 = 0;
         uVar28 = (int)param_1;
         uVar29 = (int)( (ulong)param_1 >> 0x20 );
         if (param_2 - 2 < 2) {
            uVar11 = *(undefined8*)( param_7 + 0x14 );
            uVar12 = *(undefined8*)( param_7 + 0x1c );
            in_XMM0_Dd = sf16_to_float(( ushort ) * (undefined4*)( param_7 + 0x20 ));
            in_XMM0_Dc = sf16_to_float((ushort)uVar12);
            uVar29 = sf16_to_float(( ushort )((ulong)uVar11 >> 0x20));
            uVar28 = sf16_to_float((ushort)uVar11);
            uVar20 = 1;
         }

      }

      if (param_3[3] != (block_size_descriptor)0x0) {
         lVar23 = 0;
         do {
            *(undefined4*)( param_8 + lVar23 * 4 ) = uVar28;
            *(undefined4*)( param_8 + 0x370 + lVar23 * 4 ) = uVar29;
            *(undefined4*)( param_8 + 0x6e0 + lVar23 * 4 ) = in_XMM0_Dc;
            *(undefined4*)( param_8 + 0xa50 + lVar23 * 4 ) = in_XMM0_Dd;
            *(undefined1*)( param_8 + 0xe12 + lVar23 ) = uVar20;
            *(undefined1*)( param_8 + 0xeea + lVar23 ) = uVar20;
            lVar23 = lVar23 + 1;
         }
 while ( (uint)lVar23 < (uint)(byte)param_3[3] );
      }

   }
 else {
      uVar25 = (uint)(byte)param_7[1];
      if (uVar25 < 2) {
         lVar23 = 0x33c000;
         if (uVar25 != 1) {
            lVar23 = 0x44fffdd8000;
         }

      }
 else {
         uVar21 = (byte)param_7[1] - 2;
         lVar23 = ( ( ulong )(uVar21 * 0x400) + ( ulong ) * (ushort*)( param_3 + ( ( ulong ) * (ushort*)( param_7 + 6 ) + 0x703cd8 + (ulong)uVar21 * 0x400 ) * 2 ) ) * 0x450;
      }

      unpack_weights(param_3, param_7, (decimation_info*)( param_3 + (ulong)(byte)param_3[( ulong ) * (ushort*)( param_3 + ( ulong ) * (ushort*)( param_7 + 4 ) * 2 + 0xac7560 ) * 6 + 0xac8562] * 0x1fb70 + 0x250 ), (bool)( (byte)param_3[( ulong ) * (ushort*)( param_3 + ( ulong ) * (ushort*)( param_7 + 4 ) * 2 + 0xac7560 ) * 6 + 0xac8565] & 1 ), local_708, local_3a8);
      iVar19 = _UNK_00101d8c;
      iVar18 = _UNK_00101d84;
      if (uVar25 != 0) {
         lVar27 = 0;
         psVar24 = param_7 + 0x14;
         local_790 = param_3 + lVar23 + 0xacb560;
         do {
            unpack_color_endpoints(param_2, param_7[lVar27 + 8], psVar24, &local_72a, &local_729, local_728, local_718);
            iVar22 = -(uint)local_72a;
            auVar36._4_4_ = iVar22;
            auVar36._0_4_ = iVar22;
            uVar21 = (uint)local_729;
            bVar3 = ( param_3 + lVar23 + 0xacb560 )[lVar27 + 4];
            auVar36._12_4_ = -uVar21;
            auVar36._8_4_ = iVar22;
            if (bVar3 != (block_size_descriptor)0x0) {
               unaff_R13D = movmskps(unaff_R13D, auVar36);
               pbVar26 = local_790;
               do {
                  bVar4 = pbVar26[0xf0];
                  auVar32._0_8_ = lerp_color_int();
                  auVar32._8_8_ = extraout_XMM0_Qb;
                  uVar33 = ( uint )(auVar32._0_8_ >> 0x20);
                  uVar40 = (uint)auVar32._0_8_;
                  uVar34 = (uint)extraout_XMM0_Qb;
                  uVar42 = ( uint )(extraout_XMM0_Qb >> 0x20);
                  uVar13 = ( ushort ) - uVar21;
                  uVar15 = (ushort)iVar22;
                  if (unaff_R13D == 0) {
                     uVar35 = 0;
                     uVar39 = 0;
                     uVar41 = 0;
                     uVar43 = 0;
                     LAB_0010076c:auVar57._0_4_ = uVar40 >> 8;
                     auVar57._4_4_ = uVar33 >> 8;
                     auVar57._8_4_ = uVar34 >> 8;
                     auVar57._12_4_ = uVar42 >> 8;
                     auVar36 = ~auVar57 & auVar32;
                     uVar62 = __LC11 - ( (uint)(float)auVar36._0_4_ >> 0x17 );
                     uVar63 = _UNK_00101d24 - ( (uint)(float)auVar36._4_4_ >> 0x17 );
                     uVar50 = _UNK_00101d28 - ( (uint)(float)auVar36._8_4_ >> 0x17 );
                     uVar60 = _UNK_00101d2c - ( (uint)(float)auVar36._12_4_ >> 0x17 );
                     uVar62 = -(uint)(0 < (int)uVar62) & uVar62;
                     uVar63 = -(uint)(0 < (int)uVar63) & uVar63;
                     uVar50 = -(uint)(0 < (int)uVar50) & uVar50;
                     uVar60 = -(uint)(0 < (int)uVar60) & uVar60;
                     uVar56 = -(uint)((int)uVar62 < (int)__LC12);
                     uVar58 = -(uint)((int)uVar63 < (int)_UNK_00101cc4);
                     uVar59 = -(uint)((int)uVar50 < (int)_UNK_00101cc8);
                     uVar61 = -(uint)((int)uVar60 < (int)_UNK_00101ccc);
                     uVar62 = uVar62 & uVar56 | ~uVar56 & __LC12;
                     uVar63 = uVar63 & uVar58 | ~uVar58 & _UNK_00101cc4;
                     uVar50 = uVar50 & uVar59 | ~uVar59 & _UNK_00101cc8;
                     uVar60 = uVar60 & uVar61 | ~uVar61 & _UNK_00101ccc;
                     uVar47 = -(ushort)((int)uVar40 < _LC22) & ( ushort )(uVar40 << 8) | ~-(ushort)((int)uVar40 < _LC22) & ( -(ushort)(uVar40 == __LC14) & (ushort)__LC16 | ~-(ushort)(uVar40 == __LC14) & ( ( ushort )(( ( uint )(( auVar32._0_8_ & 0xffffffff ) * (ulong)(uint)(int)(float)( ( __LC13 + uVar62 ) * 0x800000 )) & __LC14 ) >> 6) | ( (short)__LC15 - (short)uVar62 ) * 0x400 ) );
                     uVar48 = -(ushort)((int)uVar33 < _UNK_00101d14) & ( ushort )(uVar33 << 8) | ~-(ushort)((int)uVar33 < _UNK_00101d14) & ( -(ushort)(uVar33 == _UNK_00101d04) & (ushort)_UNK_00101d54 | ~-(ushort)(uVar33 == _UNK_00101d04) & ( ( ushort )(( uVar33 * (int)(float)( ( _UNK_00101d34 + uVar63 ) * 0x800000 ) & _UNK_00101d04 ) >> 6) | ( (short)_UNK_00101d44 - (short)uVar63 ) * 0x400 ) );
                     uVar49 = -(ushort)((int)uVar34 < (int)DAT_00101d18) & ( ushort )(uVar34 << 8) | ~-(ushort)((int)uVar34 < (int)DAT_00101d18) & ( -(ushort)(uVar34 == _UNK_00101d08) & (ushort)_UNK_00101d58 | ~-(ushort)(uVar34 == _UNK_00101d08) & ( ( ushort )(( ( uint )(( extraout_XMM0_Qb & 0xffffffff ) * (ulong)(uint)(int)(float)( ( _UNK_00101d38 + uVar50 ) * 0x800000 )) & _UNK_00101d08 ) >> 6) | ( (short)_UNK_00101d48 - (short)uVar50 ) * 0x400 ) );
                     uVar51 = -(ushort)((int)uVar42 < _UNK_00101d1c) & ( ushort )(uVar42 << 8) | ~-(ushort)((int)uVar42 < _UNK_00101d1c) & ( -(ushort)(uVar42 == _UNK_00101d0c) & (ushort)_UNK_00101d5c | ~-(ushort)(uVar42 == _UNK_00101d0c) & ( ( ushort )(( ( uint )(( extraout_XMM0_Qb >> 0x20 ) * (ulong)(uint)(int)(float)( ( _UNK_00101d3c + uVar60 ) * 0x800000 )) & _UNK_00101d0c ) >> 6) | ( (short)_UNK_00101d4c - (short)uVar60 ) * 0x400 ) );
                  }
 else {
                     auVar36 = __LC18 & auVar32;
                     iVar54 = auVar36._0_4_;
                     uVar55 = auVar36._8_8_;
                     iVar52 = auVar36._4_4_;
                     iVar53 = auVar36._12_4_;
                     uVar50 = -(uint)(auVar36._8_4_ < _UNK_00101d98);
                     uVar60 = -(uint)(auVar36._8_4_ < _UNK_00101da8);
                     uVar62 = ( uVar40 >> 0xb ) << 10 | ( -(uint)(iVar54 < __LC21) & iVar54 * _LC20 | ~-(uint)(iVar54 < __LC21) & ( iVar54 * _LC22 + __LC27 & -(uint)(iVar54 < __LC23) | ~-(uint)(iVar54 < __LC23) & iVar54 * _LC25 + __LC26 ) ) >> 3;
                     uVar63 = ( uVar33 >> 0xb ) << 10 | ( -(uint)(iVar52 < _UNK_00101d94) & iVar18 * iVar52 | ~-(uint)(iVar52 < _UNK_00101d94) & ( _UNK_00101d14 * iVar52 + _UNK_00101dd4 & -(uint)(iVar52 < _UNK_00101da4) | ~-(uint)(iVar52 < _UNK_00101da4) & iVar52 * _UNK_00101db4 + _UNK_00101dc4 ) ) >> 3;
                     uVar50 = ( uVar34 >> 0xb ) << 10 | ( uVar50 & ( uint )(( uVar55 & 0xffffffff ) * (ulong)DAT_00101d88) | ~uVar50 & ( (int)( ( uVar55 & 0xffffffff ) * (ulong)DAT_00101d18 ) + _UNK_00101dd8 & uVar60 | ~uVar60 & (int)( ( uVar55 & 0xffffffff ) * (ulong)DAT_00101db8 ) + _UNK_00101dc8 ) ) >> 3;
                     uVar60 = ( uVar42 >> 0xb ) << 10 | ( -(uint)(iVar53 < _UNK_00101d9c) & iVar19 * iVar53 | ~-(uint)(iVar53 < _UNK_00101d9c) & ( _UNK_00101d1c * iVar53 + _UNK_00101ddc & -(uint)(iVar53 < _UNK_00101dac) | ~-(uint)(iVar53 < _UNK_00101dac) & iVar53 * _UNK_00101dbc + _UNK_00101dcc ) ) >> 3;
                     uVar35 = -(ushort)((int)uVar62 < __LC29);
                     uVar39 = -(ushort)((int)uVar63 < _UNK_00101de4);
                     uVar41 = -(ushort)((int)uVar50 < _UNK_00101de8);
                     uVar43 = -(ushort)((int)uVar60 < _UNK_00101dec);
                     uVar47 = 0;
                     uVar48 = 0;
                     uVar49 = 0;
                     uVar51 = 0;
                     uVar35 = ( uVar35 & (ushort)uVar62 | ~uVar35 & (ushort)__LC29 ) & uVar15;
                     uVar39 = ( uVar39 & (ushort)uVar63 | ~uVar39 & (ushort)_UNK_00101de4 ) & uVar15;
                     uVar41 = ( uVar41 & (ushort)uVar50 | ~uVar41 & (ushort)_UNK_00101de8 ) & uVar15;
                     uVar43 = ( uVar43 & (ushort)uVar60 | ~uVar43 & (ushort)_UNK_00101dec ) & uVar13;
                     if (unaff_R13D != 0xf) goto LAB_0010076c;
                  }

                  pbVar26 = pbVar26 + 1;
                  uVar28 = sf16_to_float(~uVar13 & uVar51 | uVar43);
                  uVar29 = sf16_to_float(~uVar15 & uVar49 | uVar41);
                  uVar30 = sf16_to_float(~uVar15 & uVar48 | uVar39);
                  uVar31 = sf16_to_float(~uVar15 & uVar47 | uVar35);
                  puVar1 = (undefined4*)( param_8 + (ulong)(byte)bVar4 * 4 );
                  *puVar1 = uVar31;
                  puVar1[0xdc] = uVar30;
                  puVar1[0x1b8] = uVar29;
                  puVar1[0x294] = uVar28;
               }
 while ( pbVar26 != local_790 + ( ulong )((byte)bVar3 - 1) + 1 );
            }

            local_790 = local_790 + 0xd8;
            lVar27 = lVar27 + 1;
            psVar24 = psVar24 + 8;
         }
 while ( (int)lVar27 < (int)uVar25 );
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* compute_symbolic_block_difference_2plane(astcenc_config const&, block_size_descriptor const&,
   symbolic_compressed_block const&, image_block const&) */void compute_symbolic_block_difference_2plane(astcenc_config *param_1, block_size_descriptor *param_2, symbolic_compressed_block *param_3, image_block *param_4) {
   float fVar1;
   undefined1 auVar2[16];
   long extraout_RDX;
   ulong uVar3;
   ulong uVar4;
   long in_FS_OFFSET;
   float fVar5;
   undefined8 uVar6;
   float fVar10;
   float fVar11;
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined8 extraout_XMM0_Qb;
   float fVar12;
   float fVar13;
   undefined1 auVar14[16];
   float fVar16;
   float fVar17;
   float fVar18;
   float fVar19;
   float fVar20;
   float fVar21;
   undefined4 uVar22;
   undefined4 uVar23;
   undefined4 uVar24;
   undefined4 uVar25;
   undefined4 uVar26;
   undefined4 uVar27;
   undefined4 uVar28;
   undefined4 uVar29;
   float fVar30;
   undefined1 local_72a;
   undefined1 local_729;
   undefined1 local_728[16];
   undefined1 local_718[16];
   int local_708[216];
   int local_3a8[218];
   long local_40;
   float fVar15;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_3 != (symbolic_compressed_block)0x0) {
      unpack_weights(param_2, param_3, (decimation_info*)( param_2 + (ulong)(byte)param_2[( ulong ) * (ushort*)( param_2 + ( ulong ) * (ushort*)( param_3 + 4 ) * 2 + 0xac7560 ) * 6 + 0xac8562] * 0x1fb70 + 0x250 ), true, local_708, local_3a8);
      unpack_color_endpoints(*(undefined4*)param_1, param_3[8], param_3 + 0x14, &local_72a, &local_729, local_728, local_718);
      uVar4 = (ulong)(byte)param_2[3];
      if (param_2[3] != (block_size_descriptor)0x0) {
         fVar17 = 0.0;
         fVar18 = 0.0;
         fVar19 = 0.0;
         fVar20 = 0.0;
         uVar3 = ( ulong )(*(uint*)( param_1 + 4 ) & 0x40);
         uVar22 = _LC32;
         uVar23 = _LC32;
         uVar24 = _LC32;
         uVar25 = _LC32;
         uVar26 = _LC36;
         uVar27 = _LC36;
         uVar28 = _LC36;
         uVar29 = _LC36;
         fVar30 = _LC34;
         do {
            uVar6 = lerp_color_int();
            fVar16 = *(float*)( param_4 + extraout_RDX * 4 );
            fVar15 = *(float*)( param_4 + extraout_RDX * 4 + 0xa50 );
            fVar13 = *(float*)( param_4 + extraout_RDX * 4 + 0x6e0 );
            fVar5 = (float)(int)uVar6;
            fVar10 = (float)(int)( (ulong)uVar6 >> 0x20 );
            fVar11 = (float)(int)extraout_XMM0_Qb;
            fVar12 = (float)(int)( (ulong)extraout_XMM0_Qb >> 0x20 );
            fVar21 = *(float*)( param_4 + extraout_RDX * 4 + 0x370 );
            if ((int)uVar3 != 0) {
               if (fVar12 == 0.0) break;
               fVar1 = *(float*)( param_1 + 0x28 );
               fVar21 = fVar21 * fVar15 * fVar1;
               fVar5 = fVar5 * fVar12 * fVar1;
               fVar10 = fVar10 * fVar12 * fVar1;
               fVar11 = fVar11 * fVar12 * fVar1;
               fVar13 = fVar15 * fVar13 * fVar1;
               fVar16 = fVar16 * fVar15 * fVar1;
               fVar12 = fVar30;
               fVar15 = fVar30;
            }

            auVar14._0_4_ = fVar16 - fVar5;
            auVar14._4_4_ = fVar21 - fVar10;
            auVar14._8_4_ = fVar13 - fVar11;
            auVar14._12_4_ = fVar15 - fVar12;
            auVar7._0_4_ = fVar17 - auVar14._0_4_;
            auVar7._4_4_ = fVar18 - auVar14._4_4_;
            auVar7._8_4_ = fVar19 - auVar14._8_4_;
            auVar7._12_4_ = fVar20 - auVar14._12_4_;
            auVar8 = maxps(auVar7, auVar14);
            auVar2._4_4_ = uVar27;
            auVar2._0_4_ = uVar26;
            auVar2._8_4_ = uVar28;
            auVar2._12_4_ = uVar29;
            auVar8 = minps(auVar8, auVar2);
            auVar9._0_4_ = auVar8._0_4_ * auVar8._0_4_ * *(float*)( param_4 + 0xe00 ) + auVar8._8_4_ * auVar8._8_4_ * *(float*)( param_4 + 0xe08 ) + auVar8._4_4_ * auVar8._4_4_ * *(float*)( param_4 + 0xe04 ) + auVar8._12_4_ * auVar8._12_4_ * *(float*)( param_4 + 0xe0c );
            auVar9._4_4_ = auVar9._0_4_;
            auVar9._8_4_ = auVar9._0_4_;
            auVar9._12_4_ = auVar9._0_4_;
            auVar8._4_4_ = uVar23;
            auVar8._0_4_ = uVar22;
            auVar8._8_4_ = uVar24;
            auVar8._12_4_ = uVar25;
            minps(auVar9, auVar8);
         }
 while ( (int)extraout_RDX + 1U < (uint)uVar4 );
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* compute_symbolic_block_difference_1plane(astcenc_config const&, block_size_descriptor const&,
   symbolic_compressed_block const&, image_block const&) */void compute_symbolic_block_difference_1plane(astcenc_config *param_1, block_size_descriptor *param_2, symbolic_compressed_block *param_3, image_block *param_4) {
   float fVar1;
   block_size_descriptor bVar2;
   undefined1 auVar3[16];
   long lVar4;
   float *pfVar5;
   uint uVar6;
   symbolic_compressed_block *psVar7;
   block_size_descriptor *pbVar8;
   ulong uVar9;
   block_size_descriptor *pbVar10;
   uint uVar11;
   block_size_descriptor *pbVar12;
   long lVar13;
   long in_FS_OFFSET;
   float fVar14;
   undefined8 extraout_XMM0_Qa;
   float fVar18;
   float fVar19;
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined8 extraout_XMM0_Qb;
   float fVar20;
   float fVar21;
   undefined1 auVar22[16];
   float fVar24;
   float fVar25;
   undefined4 uVar26;
   undefined4 uVar27;
   undefined4 uVar28;
   undefined4 uVar29;
   undefined4 uVar30;
   undefined4 uVar31;
   undefined4 uVar32;
   undefined4 uVar33;
   undefined1 local_3ca;
   undefined1 local_3c9;
   undefined1 local_3c8[16];
   undefined1 local_3b8[16];
   int local_3a8[218];
   long local_40;
   float fVar23;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_3 != (symbolic_compressed_block)0x0) {
      uVar11 = (uint)(byte)param_3[1];
      if (uVar11 < 2) {
         lVar4 = 0x33c000;
         if (uVar11 != 1) {
            lVar4 = 0x44fffdd8000;
         }

      }
 else {
         uVar6 = (byte)param_3[1] - 2;
         lVar4 = ( ( ulong )(uVar6 * 0x400) + ( ulong ) * (ushort*)( param_2 + ( ( ulong ) * (ushort*)( param_3 + 6 ) + 0x703cd8 + (ulong)uVar6 * 0x400 ) * 2 ) ) * 0x450;
      }

      unpack_weights(param_2, param_3, (decimation_info*)( param_2 + (ulong)(byte)param_2[( ulong ) * (ushort*)( param_2 + ( ulong ) * (ushort*)( param_3 + 4 ) * 2 + 0xac7560 ) * 6 + 0xac8562] * 0x1fb70 + 0x250 ), false, local_3a8, (int*)0x0);
      uVar26 = *(undefined4*)param_1;
      if (uVar11 != 0) {
         lVar13 = 0;
         psVar7 = param_3 + 0x14;
         pbVar12 = param_2 + lVar4 + 0xacb560;
         while (true) {
            unpack_color_endpoints(uVar26, param_3[lVar13 + 8], psVar7, &local_3ca, &local_3c9, local_3c8, local_3b8);
            bVar2 = ( param_2 + lVar4 + 0xacb560 )[lVar13 + 4];
            if (bVar2 != (block_size_descriptor)0x0) {
               pbVar10 = pbVar12 + ( ulong )((byte)bVar2 - 1) + 1;
               uVar9 = ( ulong )(*(uint*)( param_1 + 4 ) & 0x40);
               pbVar8 = pbVar12;
               uVar26 = _LC32;
               uVar27 = _LC32;
               uVar28 = _LC32;
               uVar29 = _LC32;
               uVar30 = _LC36;
               uVar31 = _LC36;
               uVar32 = _LC36;
               uVar33 = _LC36;
               do {
                  pfVar5 = (float*)lerp_color_int();
                  fVar23 = pfVar5[0x294];
                  fVar21 = *pfVar5;
                  fVar24 = pfVar5[0x1b8];
                  fVar25 = pfVar5[0xdc];
                  fVar14 = (float)(int)extraout_XMM0_Qa;
                  fVar18 = (float)(int)( (ulong)extraout_XMM0_Qa >> 0x20 );
                  fVar19 = (float)(int)extraout_XMM0_Qb;
                  fVar20 = (float)(int)( (ulong)extraout_XMM0_Qb >> 0x20 );
                  if ((int)uVar9 != 0) {
                     if (fVar20 == 0.0) goto LAB_00101205;
                     fVar1 = *(float*)( param_1 + 0x28 );
                     fVar14 = fVar14 * fVar20 * fVar1;
                     fVar18 = fVar18 * fVar20 * fVar1;
                     fVar21 = fVar21 * fVar23 * fVar1;
                     fVar19 = fVar20 * fVar19 * fVar1;
                     fVar25 = fVar25 * fVar23 * fVar1;
                     fVar24 = fVar23 * fVar24 * fVar1;
                     fVar20 = _LC34;
                     fVar23 = _LC34;
                  }

                  auVar22._0_4_ = fVar21 - fVar14;
                  auVar22._4_4_ = fVar25 - fVar18;
                  auVar22._8_4_ = fVar24 - fVar19;
                  auVar22._12_4_ = fVar23 - fVar20;
                  pbVar8 = pbVar8 + 1;
                  auVar15._0_4_ = 0.0 - auVar22._0_4_;
                  auVar15._4_4_ = 0.0 - auVar22._4_4_;
                  auVar15._8_4_ = 0.0 - auVar22._8_4_;
                  auVar15._12_4_ = 0.0 - auVar22._12_4_;
                  auVar16 = maxps(auVar15, auVar22);
                  auVar3._4_4_ = uVar31;
                  auVar3._0_4_ = uVar30;
                  auVar3._8_4_ = uVar32;
                  auVar3._12_4_ = uVar33;
                  auVar16 = minps(auVar16, auVar3);
                  auVar17._0_4_ = auVar16._0_4_ * auVar16._0_4_ * *(float*)( param_4 + 0xe00 ) + auVar16._8_4_ * auVar16._8_4_ * *(float*)( param_4 + 0xe08 ) + auVar16._4_4_ * auVar16._4_4_ * *(float*)( param_4 + 0xe04 ) + auVar16._12_4_ * auVar16._12_4_ * *(float*)( param_4 + 0xe0c );
                  auVar17._4_4_ = auVar17._0_4_;
                  auVar17._8_4_ = auVar17._0_4_;
                  auVar17._12_4_ = auVar17._0_4_;
                  auVar16._4_4_ = uVar27;
                  auVar16._0_4_ = uVar26;
                  auVar16._8_4_ = uVar28;
                  auVar16._12_4_ = uVar29;
                  minps(auVar17, auVar16);
               }
 while ( pbVar10 != pbVar8 );
            }

            lVar13 = lVar13 + 1;
            psVar7 = psVar7 + 8;
            pbVar12 = pbVar12 + 0xd8;
            if (uVar11 <= (uint)lVar13) break;
            uVar26 = *(undefined4*)param_1;
         }
;
      }

   }

   LAB_00101205:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* compute_symbolic_block_difference_1plane_1partition(astcenc_config const&, block_size_descriptor
   const&, symbolic_compressed_block const&, image_block const&) */void compute_symbolic_block_difference_1plane_1partition(astcenc_config *param_1, block_size_descriptor *param_2, symbolic_compressed_block *param_3, image_block *param_4) {
   undefined1 auVar1[16];
   uint uVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   int *piVar6;
   long in_FS_OFFSET;
   float fVar7;
   int iVar8;
   float fVar13;
   float fVar15;
   float fVar17;
   undefined1 auVar9[16];
   int iVar14;
   int iVar16;
   int iVar18;
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   int iVar19;
   int iVar22;
   int iVar23;
   int iVar24;
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   int iVar25;
   int iVar27;
   int iVar28;
   int iVar29;
   undefined1 auVar26[16];
   int iVar30;
   int iVar33;
   int iVar34;
   int iVar35;
   undefined1 auVar31[16];
   undefined1 auVar32[16];
   undefined1 auVar36[16];
   undefined1 auVar37[16];
   undefined1 auVar38[16];
   undefined1 auVar39[16];
   undefined1 auVar40[16];
   undefined1 auVar41[16];
   undefined1 auVar42[16];
   undefined1 local_3ba;
   undefined1 local_3b9;
   int local_3b8;
   int iStack_3b4;
   int iStack_3b0;
   uint uStack_3ac;
   int local_3a8;
   int iStack_3a4;
   int iStack_3a0;
   int iStack_39c;
   int local_398[218];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_3 != (symbolic_compressed_block)0x0) {
      piVar6 = local_398;
      unpack_weights(param_2, param_3, (decimation_info*)( param_2 + (ulong)(byte)param_2[( ulong ) * (ushort*)( param_2 + ( ulong ) * (ushort*)( param_3 + 4 ) * 2 + 0xac7560 ) * 6 + 0xac8562] * 0x1fb70 + 0x250 ), false, piVar6, (int*)0x0);
      unpack_color_endpoints(*(undefined4*)param_1, param_3[8], param_3 + 0x14, &local_3ba, &local_3b9, &local_3b8, &local_3a8);
      fVar7 = -NAN;
      fVar13 = -NAN;
      fVar15 = -NAN;
      fVar17 = -NAN;
      if (param_4[0xe11] == (image_block)0x0) {
         fVar7 = 0.0;
         fVar13 = 0.0;
         fVar15 = 0.0;
         fVar17 = 0.0;
         if (*(int*)param_1 == 0) {
            fVar7 = __LC8;
            fVar13 = _UNK_00101cf4;
            fVar15 = _UNK_00101cf8;
            fVar17 = _UNK_00101cfc;
         }

      }

      if (param_2[3] != (block_size_descriptor)0x0) {
         uVar2 = (uint)NAN(fVar7);
         if (fVar7 != 0.0) {
            uVar2 = 1;
         }

         uVar2 = -uVar2;
         uVar3 = (uint)NAN(fVar13);
         if (fVar13 != 0.0) {
            uVar3 = 1;
         }

         uVar3 = -uVar3;
         uVar4 = (uint)NAN(fVar15);
         if (fVar15 != 0.0) {
            uVar4 = 1;
         }

         uVar4 = -uVar4;
         uVar5 = (uint)NAN(fVar17);
         if (fVar17 != 0.0) {
            uVar5 = 1;
         }

         uVar5 = -uVar5;
         do {
            iVar19 = *piVar6;
            iVar22 = piVar6[1];
            iVar23 = piVar6[2];
            iVar24 = piVar6[3];
            piVar6 = piVar6 + 4;
            auVar9._0_4_ = __LC0 - iVar19;
            auVar9._4_4_ = _UNK_00101cb4 - iVar22;
            auVar9._8_4_ = _UNK_00101cb8 - iVar23;
            auVar9._12_4_ = _UNK_00101cbc - iVar24;
            iVar30 = local_3b8 * auVar9._0_4_ + local_3a8 * iVar19 + __LC12;
            iVar33 = local_3b8 * auVar9._4_4_ + local_3a8 * iVar22 + _UNK_00101cc4;
            iVar34 = local_3b8 * auVar9._8_4_ + local_3a8 * iVar23 + _UNK_00101cc8;
            iVar35 = local_3b8 * auVar9._12_4_ + local_3a8 * iVar24 + _UNK_00101ccc;
            iVar25 = iStack_3b4 * auVar9._0_4_ + iStack_3a4 * iVar19 + __LC12;
            iVar27 = iStack_3b4 * auVar9._4_4_ + iStack_3a4 * iVar22 + _UNK_00101cc4;
            iVar28 = iStack_3b4 * auVar9._8_4_ + iStack_3a4 * iVar23 + _UNK_00101cc8;
            iVar29 = iStack_3b4 * auVar9._12_4_ + iStack_3a4 * iVar24 + _UNK_00101ccc;
            auVar38._0_4_ = iVar30 >> 0xe;
            auVar38._4_4_ = iVar33 >> 0xe;
            auVar38._8_4_ = iVar34 >> 0xe;
            auVar38._12_4_ = iVar35 >> 0xe;
            iVar8 = auVar9._0_4_ * uStack_3ac + iStack_39c * iVar19 + __LC12;
            iVar14 = auVar9._4_4_ * uStack_3ac + iVar22 * iStack_39c + _UNK_00101cc4;
            iVar16 = (int)( ( auVar9._8_8_ & 0xffffffff ) * (ulong)uStack_3ac ) + iStack_39c * iVar23 + _UNK_00101cc8;
            iVar18 = auVar9._12_4_ * uStack_3ac + iVar24 * iStack_39c + _UNK_00101ccc;
            auVar40._0_4_ = iVar25 >> 0xe;
            auVar40._4_4_ = iVar27 >> 0xe;
            auVar40._8_4_ = iVar28 >> 0xe;
            auVar40._12_4_ = iVar29 >> 0xe;
            auVar42._0_4_ = iVar8 >> 0xe;
            auVar42._4_4_ = iVar14 >> 0xe;
            auVar42._8_4_ = iVar16 >> 0xe;
            auVar42._12_4_ = iVar18 >> 0xe;
            iVar19 = iStack_3b0 * auVar9._0_4_ + iStack_3a0 * iVar19 + __LC12;
            iVar22 = iStack_3b0 * auVar9._4_4_ + iStack_3a0 * iVar22 + _UNK_00101cc4;
            iVar23 = iStack_3b0 * auVar9._8_4_ + iStack_3a0 * iVar23 + _UNK_00101cc8;
            iVar24 = iStack_3b0 * auVar9._12_4_ + iStack_3a0 * iVar24 + _UNK_00101ccc;
            auVar41._0_4_ = iVar19 >> 0xe;
            auVar41._4_4_ = iVar22 >> 0xe;
            auVar41._8_4_ = iVar23 >> 0xe;
            auVar41._12_4_ = iVar24 >> 0xe;
            auVar39._0_4_ = *(float*)( param_4 + 0x6e0 ) - (float)(int)( auVar41._0_4_ * _LC3 & uVar4 | ~uVar4 & iVar19 >> 6 );
            auVar39._4_4_ = *(float*)( param_4 + 0x6e4 ) - (float)(int)( auVar41._4_4_ * _UNK_00101cd4 & uVar4 | ~uVar4 & iVar22 >> 6 );
            auVar39._8_4_ = *(float*)( param_4 + 0x6e8 ) - (float)(int)( ( uint )(( auVar41._8_8_ & 0xffffffff ) * (ulong)DAT_00101cd8) & uVar4 | ~uVar4 & iVar23 >> 6 );
            auVar39._12_4_ = *(float*)( param_4 + 0x6ec ) - (float)(int)( auVar41._12_4_ * _UNK_00101cdc & uVar4 | ~uVar4 & iVar24 >> 6 );
            auVar10._0_4_ = *(float*)param_4 - (float)(int)( auVar38._0_4_ * _LC3 & uVar2 | ~uVar2 & iVar30 >> 6 );
            auVar10._4_4_ = *(float*)( param_4 + 4 ) - (float)(int)( auVar38._4_4_ * _UNK_00101cd4 & uVar2 | ~uVar2 & iVar33 >> 6 );
            auVar10._8_4_ = *(float*)( param_4 + 8 ) - (float)(int)( ( uint )(( auVar38._8_8_ & 0xffffffff ) * (ulong)DAT_00101cd8) & uVar2 | ~uVar2 & iVar34 >> 6 );
            auVar10._12_4_ = *(float*)( param_4 + 0xc ) - (float)(int)( auVar38._12_4_ * _UNK_00101cdc & uVar2 | ~uVar2 & iVar35 >> 6 );
            auVar26._0_4_ = *(float*)( param_4 + 0xa50 ) - (float)(int)( auVar42._0_4_ * _LC3 & uVar5 | ~uVar5 & iVar8 >> 6 );
            auVar26._4_4_ = *(float*)( param_4 + 0xa54 ) - (float)(int)( auVar42._4_4_ * _UNK_00101cd4 & uVar5 | ~uVar5 & iVar14 >> 6 );
            auVar26._8_4_ = *(float*)( param_4 + 0xa58 ) - (float)(int)( ( uint )(( auVar42._8_8_ & 0xffffffff ) * (ulong)DAT_00101cd8) & uVar5 | ~uVar5 & iVar16 >> 6 );
            auVar26._12_4_ = *(float*)( param_4 + 0xa5c ) - (float)(int)( auVar42._12_4_ * _UNK_00101cdc & uVar5 | ~uVar5 & iVar18 >> 6 );
            auVar36._0_4_ = 0.0 - auVar10._0_4_;
            auVar36._4_4_ = 0.0 - auVar10._4_4_;
            auVar36._8_4_ = 0.0 - auVar10._8_4_;
            auVar36._12_4_ = 0.0 - auVar10._12_4_;
            auVar20._0_4_ = 0.0 - auVar26._0_4_;
            auVar20._4_4_ = 0.0 - auVar26._4_4_;
            auVar20._8_4_ = 0.0 - auVar26._8_4_;
            auVar20._12_4_ = 0.0 - auVar26._12_4_;
            auVar37 = maxps(auVar36, auVar10);
            auVar21 = maxps(auVar20, auVar26);
            auVar11._0_4_ = *(float*)( param_4 + 0x370 ) - (float)(int)( auVar40._0_4_ * _LC3 & uVar3 | ~uVar3 & iVar25 >> 6 );
            auVar11._4_4_ = *(float*)( param_4 + 0x374 ) - (float)(int)( auVar40._4_4_ * _UNK_00101cd4 & uVar3 | ~uVar3 & iVar27 >> 6 );
            auVar11._8_4_ = *(float*)( param_4 + 0x378 ) - (float)(int)( ( uint )(( auVar40._8_8_ & 0xffffffff ) * (ulong)DAT_00101cd8) & uVar3 | ~uVar3 & iVar28 >> 6 );
            auVar11._12_4_ = *(float*)( param_4 + 0x37c ) - (float)(int)( auVar40._12_4_ * _UNK_00101cdc & uVar3 | ~uVar3 & iVar29 >> 6 );
            auVar32._4_4_ = _LC36;
            auVar32._0_4_ = _LC36;
            auVar32._8_4_ = _LC36;
            auVar32._12_4_ = _LC36;
            minps(auVar37, auVar32);
            auVar37._4_4_ = _LC36;
            auVar37._0_4_ = _LC36;
            auVar37._8_4_ = _LC36;
            auVar37._12_4_ = _LC36;
            minps(auVar21, auVar37);
            auVar31._0_4_ = 0.0 - auVar11._0_4_;
            auVar31._4_4_ = 0.0 - auVar11._4_4_;
            auVar31._8_4_ = 0.0 - auVar11._8_4_;
            auVar31._12_4_ = 0.0 - auVar11._12_4_;
            auVar32 = maxps(auVar31, auVar11);
            auVar12._0_4_ = 0.0 - auVar39._0_4_;
            auVar12._4_4_ = 0.0 - auVar39._4_4_;
            auVar12._8_4_ = 0.0 - auVar39._8_4_;
            auVar12._12_4_ = 0.0 - auVar39._12_4_;
            auVar21._4_4_ = _LC36;
            auVar21._0_4_ = _LC36;
            auVar21._8_4_ = _LC36;
            auVar21._12_4_ = _LC36;
            minps(auVar32, auVar21);
            auVar32 = maxps(auVar12, auVar39);
            auVar1._4_4_ = _LC36;
            auVar1._0_4_ = _LC36;
            auVar1._8_4_ = _LC36;
            auVar1._12_4_ = _LC36;
            minps(auVar32, auVar1);
            param_4 = param_4 + 0x10;
         }
 while ( local_398 + ( ulong )((byte)param_2[3] - 1 >> 2) * 4 + 4 != piVar6 );
      }

   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}

