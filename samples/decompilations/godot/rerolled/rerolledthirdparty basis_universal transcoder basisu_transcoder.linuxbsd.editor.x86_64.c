/* astc_helpers::astc_set_bits(unsigned int*, unsigned int&, unsigned int, unsigned int) */void astc_helpers::astc_set_bits(uint *param_1, uint *param_2, uint param_3, uint param_4) {
   byte *pbVar1;
   uint uVar2;
   uint uVar3;
   if (param_4 != 0) {
      uVar2 = *param_2;
      do {
         uVar3 = 8 - ( uVar2 & 7 );
         if ((int)param_4 < (int)uVar3) {
            uVar3 = param_4;
         }

         pbVar1 = (byte*)( (long)param_1 + ( ulong )(uVar2 >> 3) );
         *pbVar1 = *pbVar1 | ( byte )(param_3 << ( sbyte )(uVar2 & 7));
         uVar2 = *param_2 + uVar3;
         param_3 = param_3 >> ( (byte)uVar3 & 0x1f );
         *param_2 = uVar2;
         param_4 = param_4 - uVar3;
      }
 while ( param_4 != 0 );
   }

   return;
}
/* basist::get_endpoint_l8(unsigned int, unsigned int) */int basist::get_endpoint_l8(uint param_1, uint param_2) {
   byte bVar1;
   uint uVar2;
   uVar2 = param_1 >> ( ( byte )(param_2 << 4) & 0x1f ) & *(uint*)( (long)&get_endpoint_8888(unsigned_int,unsigned_int)::s_endpoint_mask + (ulong)param_2 * 4 );
   if (( uVar2 & 0x8000 ) == 0) {
      if (param_2 == 0) {
         bVar1 = *(byte*)( (long)&g_pvrtc_3 + ( ulong )(( uVar2 & 0xf ) >> 1) );
      }
 else {
         bVar1 = g_pvrtc_4[uVar2 & 0xf];
      }

      return (uint)(byte)g_pvrtc_4[uVar2 >> 8 & 0xf] + (uint)(byte)g_pvrtc_4[uVar2 >> 4 & 0xf] + (uint)bVar1 + (uint)(byte)g_pvrtc_alpha[uVar2 >> 0xc & 7];
   }

   if (param_2 == 0) {
      return (uint)(byte)g_pvrtc_5[uVar2 >> 10 & 0x1f] + (uint)(byte)g_pvrtc_5[uVar2 >> 5 & 0x1f] + (uint)(byte)g_pvrtc_4[( uVar2 & 0x1f ) >> 1] + 0xff;
   }

   return (uint)(byte)g_pvrtc_5[uVar2 >> 10 & 0x1f] + (uint)(byte)g_pvrtc_5[uVar2 >> 5 & 0x1f] + (uint)(byte)g_pvrtc_5[uVar2 & 0x1f] + 0xff;
}
/* basist::determine_unique_pbits(unsigned int, unsigned int, float*, float*,
   basist::color_quad_u8&, basist::color_quad_u8&, unsigned int*) */void basist::determine_unique_pbits(uint param_1, uint param_2, float *param_3, float *param_4, color_quad_u8 *param_5, color_quad_u8 *param_6, uint *param_7) {
   int iVar1;
   byte *pbVar2;
   float *pfVar3;
   int iVar4;
   float fVar5;
   float fVar6;
   uint uVar7;
   byte bVar8;
   int iVar9;
   int iVar10;
   long lVar11;
   ulong uVar12;
   byte bVar13;
   uint uVar14;
   long in_FS_OFFSET;
   float fVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   float fVar19;
   float fVar20;
   byte local_50[4];
   byte local_4c[4];
   byte local_48[4];
   byte local_44[4];
   long local_40;
   fVar6 = _LC3;
   fVar5 = _LC2;
   bVar8 = (char)param_2 + 1;
   iVar10 = 1 << ( bVar8 & 0x1f );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar16 = (float)( iVar10 + -1 );
   uVar7 = 0;
   fVar17 = _LC1;
   fVar18 = _LC1;
   while (true) {
      lVar11 = 0;
      iVar9 = iVar10 + -2 + uVar7;
      do {
         fVar20 = param_4[lVar11];
         iVar1 = uVar7 + (int)( ( param_3[lVar11] * fVar16 - (float)uVar7 ) * fVar5 + fVar5 ) * 2;
         iVar4 = iVar9;
         if (iVar1 <= iVar9) {
            iVar4 = iVar1;
         }

         bVar13 = (byte)iVar4;
         if (iVar1 < (int)uVar7) {
            bVar13 = (byte)uVar7;
         }

         local_50[lVar11] = bVar13;
         iVar1 = uVar7 + (int)( ( fVar20 * fVar16 - (float)uVar7 ) * fVar5 + fVar5 ) * 2;
         iVar4 = iVar9;
         if (iVar1 <= iVar9) {
            iVar4 = iVar1;
         }

         bVar13 = (byte)iVar4;
         if (iVar1 < (int)uVar7) {
            bVar13 = (byte)uVar7;
         }

         local_4c[lVar11] = bVar13;
         lVar11 = lVar11 + 1;
      }
 while ( lVar11 != 4 );
      lVar11 = 0;
      do {
         uVar14 = (uint)local_50[lVar11] << ( 8 - bVar8 & 0x1f );
         local_48[lVar11] = ( byte )((int)( uVar14 & 0xff ) >> ( bVar8 & 0x1f )) | (byte)uVar14;
         uVar14 = (uint)local_4c[lVar11] << ( 8 - bVar8 & 0x1f );
         local_44[lVar11] = ( byte )((int)( uVar14 & 0xff ) >> ( bVar8 & 0x1f )) | (byte)uVar14;
         lVar11 = lVar11 + 1;
      }
 while ( lVar11 != 4 );
      if (param_1 == 0) {
         fVar19 = 0.0;
         fVar20 = 0.0;
      }
 else {
         fVar19 = 0.0;
         uVar12 = 0;
         fVar20 = 0.0;
         do {
            pbVar2 = local_44 + uVar12;
            fVar15 = (float)local_48[uVar12] - param_3[uVar12] * fVar6;
            pfVar3 = param_4 + uVar12;
            uVar12 = uVar12 + 1;
            fVar20 = fVar20 + fVar15 * fVar15;
            fVar15 = (float)*pbVar2 - *pfVar3 * fVar6;
            fVar19 = fVar19 + fVar15 * fVar15;
         }
 while ( param_1 != uVar12 );
      }

      if (fVar20 < fVar18) {
         *param_7 = uVar7;
         *(uint*)param_5 = CONCAT31(CONCAT21(CONCAT11(local_50[3] >> 1, local_50[2] >> 1), local_50[1] >> 1), local_50[0] >> 1);
         fVar18 = fVar20;
      }

      if (fVar19 < fVar17) {
         param_7[1] = uVar7;
         *(uint*)param_6 = CONCAT31(CONCAT21(CONCAT11(local_4c[3] >> 1, local_4c[2] >> 1), local_4c[1] >> 1), local_4c[0] >> 1);
         fVar17 = fVar19;
      }

      if (uVar7 != 0) break;
      uVar7 = 1;
   }
;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* basist::bc1_find_sels(basist::color32 const*, unsigned int, unsigned int, unsigned int, unsigned
   int, unsigned int, unsigned int, unsigned char*) */void basist::bc1_find_sels(color32 *param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uchar *param_8) {
   int iVar1;
   uint uVar2;
   uint uVar3;
   uint uVar4;
   long lVar5;
   uint uVar6;
   uint uVar7;
   int iVar8;
   uint uVar9;
   uint uVar10;
   uint uVar11;
   int iVar12;
   int iVar13;
   uVar7 = param_5 * 8 | param_5 >> 2;
   uVar3 = param_3 * 4 | param_3 >> 4;
   uVar11 = param_6 * 4 | param_6 >> 4;
   uVar6 = param_7 * 8 | param_7 >> 2;
   uVar4 = param_2 * 8 | param_2 >> 2;
   iVar8 = uVar11 - uVar3;
   uVar10 = uVar7 - uVar4;
   uVar2 = param_4 * 8 | param_4 >> 2;
   uVar9 = uVar6 - uVar2;
   lVar5 = 0;
   iVar12 = ( ( uVar11 + uVar3 * 2 ) / 3 ) * iVar8 + (int)( ( ( ulong )(uVar7 + uVar4 * 2) / 3 ) * (ulong)uVar10 ) + (int)( ( ( ulong )(uVar6 + uVar2 * 2) / 3 ) * (ulong)uVar9 );
   iVar13 = ( ( uVar3 + uVar11 * 2 ) / 3 ) * iVar8 + (int)( ( ( ulong )(uVar4 + uVar7 * 2) / 3 ) * (ulong)uVar10 ) + (int)( ( ( ulong )(uVar2 + uVar6 * 2) / 3 ) * (ulong)uVar9 );
   do {
      iVar1 = ( (byte)param_1[lVar5 * 4] * uVar10 + (uint)(byte)param_1[lVar5 * 4 + 1] * iVar8 + (byte)param_1[lVar5 * 4 + 2] * uVar9 ) * 2;
      param_8[lVar5] = *(uchar*)( (long)&bc1_find_sels_2(basist::color32_const * unsigned_int, unsigned_int, unsigned_int, unsigned_int, unsigned_int, unsigned_int, unsigned_char * ::s_sels + (long)(int)( ( uint )(iVar1 < (int)( uVar11 * iVar8 + uVar7 * uVar10 + uVar6 * uVar9 + iVar13 )) + ( uint )(iVar1 <= (int)( uVar3 * iVar8 + uVar4 * uVar10 + uVar2 * uVar9 + iVar12 )) + ( uint )(iVar1 < iVar12 + iVar13) )) );
      lVar5 = lVar5 + 1;
   }
 while ( lVar5 != 0x10 );
   return;
}
/* basist::bc1_find_sels_2(basist::color32 const*, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned char*) */void basist::bc1_find_sels_2(color32 *param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uchar *param_8) {
   color32 *pcVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   uint uVar5;
   uint uVar6;
   int iVar7;
   uint uVar8;
   int iVar9;
   uint uVar10;
   int iVar11;
   uint uVar12;
   int iVar13;
   int iVar14;
   uint uVar15;
   uint uVar16;
   uint uVar17;
   uint uVar18;
   int iVar19;
   int iVar20;
   uVar6 = param_2 * 8 | param_2 >> 2;
   uVar16 = param_6 * 4 | param_6 >> 4;
   uVar5 = param_3 * 4 | param_3 >> 4;
   uVar8 = param_4 * 8 | param_4 >> 2;
   uVar15 = param_5 * 8 | param_5 >> 2;
   uVar18 = uVar16 - uVar5;
   uVar12 = param_7 * 8 | param_7 >> 2;
   uVar10 = uVar15 - uVar6;
   iVar2 = uVar18 * 2;
   uVar17 = uVar12 - uVar8;
   iVar3 = uVar10 * 2;
   iVar19 = (int)( ( ( ulong )(uVar16 + uVar5 * 2) / 3 ) * (ulong)uVar18 ) + (int)( ( ( ulong )(uVar15 + uVar6 * 2) / 3 ) * (ulong)uVar10 ) + (int)( ( ( ulong )(uVar12 + uVar8 * 2) / 3 ) * (ulong)uVar17 );
   iVar20 = (int)( ( ( ulong )(uVar5 + uVar16 * 2) / 3 ) * (ulong)uVar18 ) + (int)( ( ( ulong )(uVar6 + uVar15 * 2) / 3 ) * (ulong)uVar10 ) + (int)( ( ( ulong )(uVar8 + uVar12 * 2) / 3 ) * (ulong)uVar17 );
   iVar11 = uVar5 * uVar18 + uVar6 * uVar10 + uVar8 * uVar17 + iVar19;
   iVar19 = iVar19 + iVar20;
   iVar20 = uVar16 * uVar18 + uVar15 * uVar10 + uVar12 * uVar17 + iVar20;
   iVar4 = uVar17 * 2;
   pcVar1 = param_1 + 0x40;
   do LAB_00104225:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      byte bVar1;
      byte bVar2;
      byte bVar3;
      byte bVar4;
      byte bVar5;
      byte bVar6;
      byte bVar7;
      sbyte sVar8;
      undefined1 auVar9[16];
      byte bVar10;
      uint uVar11;
      int iVar12;
      uint uVar13;
      uint uVar14;
      uint uVar15;
      uint uVar16;
      int iVar17;
      uint uVar18;
      uint uVar19;
      int iVar20;
      uint uVar21;
      uint uVar22;
      int iVar23;
      uint uVar24;
      int iVar25;
      uint uVar26;
      uint uVar27;
      uint uVar28;
      uint uVar29;
      int iVar30;
      int iVar31;
      uint uVar32;
      uint uVar33;
      uint uVar34;
      uint uVar35;
      uint uVar36;
      undefined8 uVar37;
      ulong uVar38;
      undefined1 auVar39[16];
      undefined1 auVar40[16];
      undefined1 auVar41[16];
      undefined1 auVar42[16];
      undefined1 auVar43[16];
      undefined1 auVar44[16];
      undefined1 auVar45[16];
      undefined1 auVar46[16];
      undefined1 auVar47[16];
      undefined1 auVar48[16];
      uint local_4c;
      uint local_40;
      uVar37 = _LC21;
      uVar34 = _UNK_001811fc;
      uVar15 = _UNK_001811f8;
      uVar16 = _UNK_001811f4;
      uVar35 = __LC22;
      uVar18 = _UNK_001811ec;
      uVar13 = _UNK_001811e8;
      uVar22 = _LC19._4_4_;
      uVar19 = (uint)_LC19;
      bVar10 = *param_3;
      bVar1 = param_3[1];
      uVar36 = (uint)bVar10;
      uVar32 = (uint)bVar1;
      auVar44._0_8_ = CONCAT35(0, CONCAT14(bVar1, uVar36));
      auVar42._8_5_ = CONCAT14(bVar1, uVar36);
      auVar42._0_8_ = auVar44._0_8_;
      auVar42._13_3_ = 0;
      if (0xf < param_1) {
         for (int i = 0; i < 4; i++) {
            param_2[i] = 0;
         }

         *(undefined1(*) [16])( param_2 + 4 ) = (undefined1[16])0x0;
         return;
      }

      uVar11 = (uint)bVar10;
      uVar24 = (uint)bVar10;
      uVar21 = (uint)bVar10;
      uVar26 = (uint)bVar1;
      uVar14 = (uint)bVar1;
      uVar33 = (uint)bVar1;
      switch (param_1) {
         case 0:
    uVar37 = CONCAT44(_LC19._4_4_,(uint)_LC19);
    *(undefined1 (*) [16])param_2 = auVar42;
    *(ulong *)(param_2 + 4) = auVar44._0_8_;
    *(undefined8 *)(param_2 + 6) = uVar37;
    break;
         case 1:
    uVar19 = (int)uVar21 >> 2 | uVar33 & 0xc0;
    uVar32 = (uVar32 & 0x3f) + uVar19;
    param_2[4] = uVar19;
    if (0xff < uVar32) {
      uVar32 = 0xff;
    }
    uVar37 = CONCAT44(_LC19._4_4_,(uint)_LC19);
    param_2[5] = uVar32;
    *(undefined8 *)(param_2 + 6) = uVar37;
    *(ulong *)param_2 = CONCAT44(uVar32,uVar19);
    *(ulong *)(param_2 + 2) = CONCAT44(uVar32,uVar19);
    break;
         case 2:
    iVar12 = uVar26 * 0x10;
    iVar31 = uVar21 * 0x10;
    if (uVar33 < uVar21) {
      iVar31 = iVar12 + 8;
      iVar12 = uVar21 * 0x10 + -8;
    }
    *param_2 = iVar31;
    param_2[1] = iVar12;
    param_2[2] = iVar31;
    param_2[3] = iVar12;
    param_2[4] = iVar31;
    param_2[5] = iVar12;
    *(undefined8 *)(param_2 + 6) = uVar37;
    break;
         case 3:
    if ((char)bVar10 < '\0') {
      uVar32 = (bVar1 & 0x1f) << 2;
      uVar19 = uVar14 << 4 & 0xe00 | (uint)bVar10 * 4 & 0x1fc;
    }
    else {
      uVar19 = uVar24 + uVar21 | uVar14 << 4 & 0xf00;
      uVar32 = uVar14 * 2 & 0x1e;
    }
    uVar32 = uVar32 + uVar19;
    param_2[4] = uVar19;
    if (0xfff < uVar32) {
      uVar32 = 0xfff;
    }
    param_2[5] = uVar32;
    *(undefined8 *)(param_2 + 6) = _LC21;
    *(ulong *)param_2 = CONCAT44(uVar32,uVar19);
    *(ulong *)(param_2 + 2) = CONCAT44(uVar32,uVar19);
    break;
         case 4:
    bVar10 = param_3[2];
    bVar1 = param_3[3];
    param_2[4] = uVar24;
    param_2[5] = uVar33;
    param_2[6] = (uint)bVar10;
    param_2[7] = (uint)bVar1;
    *(undefined1 (*) [16])param_2 = auVar42;
    break;
         case 5:
    uVar33 = (int)uVar33 >> 1;
    auVar9._4_4_ = _LC19._4_4_;
    auVar9._0_4_ = (uint)_LC19;
    auVar9._8_4_ = _UNK_001811e8;
    auVar9._12_4_ = _UNK_001811ec;
    uVar35 = (int)uVar24 >> 1 | uVar32 & 0x80;
    uVar32 = uVar33 & 0x3f;
    if ((uVar33 & 0x20) != 0) {
      uVar32 = uVar33 | 0xffffffc0;
    }
    uVar34 = (int)(uint)param_3[3] >> 1;
    uVar15 = (int)(uint)param_3[2] >> 1 | param_3[3] & 0x80;
    uVar16 = uVar34 & 0x3f;
    if ((uVar34 & 0x20) != 0) {
      uVar16 = uVar34 | 0xffffffc0;
    }
    iVar31 = uVar32 + uVar35;
    uVar37 = CONCAT44(iVar31,uVar35);
    auVar47._8_8_ = uVar37;
    auVar47._0_8_ = uVar37;
    auVar43._0_4_ = -(uint)((int)(uint)_LC19 < (int)uVar35);
    auVar43._4_4_ = -(uint)((int)_LC19._4_4_ < iVar31);
    auVar43._8_4_ = -(uint)((int)_UNK_001811e8 < (int)uVar35);
    auVar43._12_4_ = -(uint)((int)_UNK_001811ec < iVar31);
    auVar44 = ~auVar43 & auVar47 | auVar9 & auVar43;
    auVar48._0_4_ = -(uint)(0 < auVar44._0_4_);
    auVar48._4_4_ = -(uint)(0 < auVar44._4_4_);
    auVar48._8_4_ = -(uint)(0 < auVar44._8_4_);
    auVar48._12_4_ = -(uint)(0 < auVar44._12_4_);
    *(undefined1 (*) [16])param_2 = auVar44 & auVar48;
    auVar45._12_4_ = uVar16 + uVar15;
    auVar45._8_4_ = uVar15;
    auVar45._0_8_ = uVar37;
    auVar39._0_4_ = -(uint)((int)uVar19 < (int)uVar35);
    auVar39._4_4_ = -(uint)((int)uVar22 < iVar31);
    auVar39._8_4_ = -(uint)((int)uVar13 < (int)uVar15);
    auVar39._12_4_ = -(uint)((int)uVar18 < (int)(uVar16 + uVar15));
    auVar44 = ~auVar39 & auVar45 | auVar9 & auVar39;
    auVar46._0_4_ = -(uint)(0 < auVar44._0_4_);
    auVar46._4_4_ = -(uint)(0 < auVar44._4_4_);
    auVar46._8_4_ = -(uint)(0 < auVar44._8_4_);
    auVar46._12_4_ = -(uint)(0 < auVar44._12_4_);
    *(undefined1 (*) [16])(param_2 + 4) = auVar44 & auVar46;
    break;
         case 6:
    bVar2 = param_3[3];
    bVar3 = param_3[2];
    param_2[5] = (uint)bVar3;
    auVar40[4] = bVar10;
    auVar40._0_4_ = (int)(uVar24 * bVar2) >> 8;
    auVar40._5_3_ = 0;
    *(ulong *)(param_2 + 6) = CONCAT44(_LC19._4_4_,(uint)_LC19);
    auVar40[0xc] = bVar1;
    auVar40._8_4_ = (int)(uVar14 * bVar2) >> 8;
    param_2[4] = (int)((uint)bVar2 * (uint)bVar3) >> 8;
    auVar40._13_3_ = 0;
    *(undefined1 (*) [16])param_2 = auVar40;
    break;
         case 7:
    uVar13 = (uint)param_3[2];
    uVar18 = (uint)param_3[3];
    uVar24 = (int)uVar24 >> 6;
    uVar19 = (int)uVar13 >> 4 & 8U | (int)uVar14 >> 5 & 4U;
    uVar22 = uVar24 | uVar19;
    if (uVar19 == 0xc) {
      if (uVar22 == 0xf) {
        uVar11 = 0x20;
        uVar33 = 0x20;
        iVar31 = 0x20;
        uVar24 = 0;
        uVar19 = 0x20;
        uVar26 = 5;
      }
      else {
        uVar11 = 0x10;
        uVar19 = 0;
        uVar33 = 0x10;
        iVar31 = 0x10;
        uVar26 = 4;
      }
    }
    else {
      iVar31 = 0;
      uVar19 = 1 << (sbyte)uVar24;
      uVar33 = uVar19 & 0x3d;
      uVar11 = uVar19 & 0x3a;
      uVar26 = uVar24;
      uVar24 = (int)uVar22 >> 2;
    }
    uVar21 = (int)uVar14 >> 5 & 1;
    uVar32 = uVar32 & 0x1f;
    uVar22 = param_3[2] & 0x1f;
    uVar14 = (int)uVar14 >> 6 & 1;
    uVar27 = (int)uVar13 >> 6 & 1;
    uVar29 = (int)uVar13 >> 5 & 1;
    uVar13 = (int)(uint)param_3[3] >> 6 & 1;
    uVar28 = (int)uVar18 >> 5 & 1;
    if (iVar31 != 0) {
      uVar32 = uVar32 | uVar14 << 6;
      uVar22 = uVar22 | uVar27 << 6;
    }
    if (uVar11 != 0) {
      uVar32 = uVar32 | uVar21 << 5;
      uVar22 = uVar22 | uVar29 << 5;
    }
    uVar11 = uVar18 & 0x1f;
    if (uVar33 != 0) {
      uVar11 = uVar18 & 0x1f | uVar28 << 5;
      if ((uVar19 & 0x2d) != 0) {
        uVar11 = uVar13 << 6 | uVar11;
      }
    }
    if (uVar26 == 2) {
      uVar11 = uVar11 | uVar18 & 0xffffff80;
      uVar18 = uVar29 << 6 | uVar27 << 7 | uVar36 & 0x3f;
LAB_00108012:
      uVar18 = uVar21 << 8 | uVar18;
      if ((uVar19 & 10) != 0) {
        uVar18 = uVar14 << 8 | uVar18;
      }
      uVar18 = uVar14 << 9 | uVar18;
LAB_00107a38:
      if (uVar26 == 1) {
        uVar32 = uVar32 * 2;
        uVar22 = uVar22 * 2;
        iVar31 = uVar11 * 2;
        uVar18 = (uVar28 << 9 | uVar13 << 10 | uVar18) * 2;
        goto LAB_00107a59;
      }
      bVar10 = (byte)*(undefined4 *)
                      (basist::decode_mode7_to_qlog12_ise20(unsigned_char_const*,int*[],int*)::
                       s_shamts + (long)(int)uVar26 * 4);
      uVar32 = uVar32 << (bVar10 & 0x1f);
      uVar22 = uVar22 << (bVar10 & 0x1f);
      iVar31 = uVar11 << (bVar10 & 0x1f);
      if (uVar26 == 0) {
        uVar18 = (uVar29 << 10 | uVar18) * 2;
        goto LAB_00107a59;
      }
      uVar18 = uVar18 << (bVar10 & 0x1f);
      if (uVar26 != 5) goto LAB_00107a59;
    }
    else {
      uVar18 = ((int)uVar18 >> 7) << 6 | uVar36 & 0x3f;
      if (uVar26 != 4) {
        if ((uVar19 & 0xf) != 0) {
          uVar18 = uVar18 | uVar27 << 7;
          if ((uVar19 & 5) != 0) goto LAB_00108012;
          if ((uVar19 & 10) != 0) {
            uVar18 = uVar18 | uVar14 << 8;
          }
        }
        goto LAB_00107a38;
      }
      uVar32 = uVar32 << 4;
      uVar22 = uVar22 << 4;
      iVar31 = uVar11 << 4;
      uVar18 = (uVar13 << 7 | uVar18) << 4;
LAB_00107a59:
      uVar32 = uVar18 - uVar32;
      uVar22 = uVar18 - uVar22;
    }
    uVar19 = uVar18;
    uVar13 = uVar22;
    if ((uVar24 != 1) && (uVar19 = uVar32, uVar32 = uVar22, uVar13 = uVar18, uVar24 != 2)) {
      uVar32 = uVar18;
      uVar13 = uVar22;
    }
    uVar22 = 0xfff;
    if ((int)uVar13 < 0x1000) {
      uVar22 = uVar13;
    }
    if ((int)uVar22 < 0) {
      uVar22 = 0;
    }
    param_2[5] = uVar22;
    iVar12 = uVar13 - iVar31;
    if (0xfff < (int)(uVar13 - iVar31)) {
      iVar12 = 0xfff;
    }
    if (iVar12 < 0) {
      iVar12 = 0;
    }
    uVar22 = -(uint)((int)uVar35 < (int)(uVar32 - iVar31));
    uVar13 = -(uint)((int)uVar16 < (int)uVar32);
    uVar18 = -(uint)((int)uVar15 < (int)(uVar19 - iVar31));
    uVar36 = -(uint)((int)uVar34 < (int)uVar19);
    param_2[4] = iVar12;
    *(undefined8 *)(param_2 + 6) = _LC21;
    uVar22 = ~uVar22 & uVar32 - iVar31 | uVar35 & uVar22;
    uVar32 = ~uVar13 & uVar32 | uVar16 & uVar13;
    uVar13 = ~uVar18 & uVar19 - iVar31 | uVar15 & uVar18;
    uVar19 = ~uVar36 & uVar19 | uVar34 & uVar36;
    *param_2 = uVar22 & -(uint)(0 < (int)uVar22);
    param_2[1] = uVar32 & -(uint)(0 < (int)uVar32);
    param_2[2] = uVar13 & -(uint)(0 < (int)uVar13);
    param_2[3] = uVar19 & -(uint)(0 < (int)uVar19);
    break;
         case 8:
    bVar2 = param_3[2];
    bVar3 = param_3[3];
    bVar4 = param_3[4];
    bVar5 = param_3[5];
    uVar32 = (uint)bVar5;
    auVar44._9_3_ = 0;
    auVar44[8] = bVar2;
    if ((uint)bVar1 + (uint)bVar3 + uVar32 < (uint)bVar10 + (uint)bVar2 + (uint)bVar4) {
      param_2[4] = (uint)bVar5;
      uVar37 = CONCAT44(_LC19._4_4_,(uint)_LC19);
      param_2[5] = (uint)bVar4;
      *(undefined8 *)(param_2 + 6) = uVar37;
      *param_2 = (int)(uVar32 + uVar14) >> 1;
      param_2[1] = (int)((uint)bVar4 + (uint)bVar10) >> 1;
      param_2[2] = (int)(uVar32 + bVar3) >> 1;
      param_2[3] = (int)((uint)bVar4 + (uint)bVar2) >> 1;
    }
    else {
      uVar37 = CONCAT44(_LC19._4_4_,(uint)_LC19);
      param_2[4] = (uint)bVar4;
      auVar44[0xc] = bVar3;
      param_2[5] = (uint)bVar5;
      auVar44._13_3_ = 0;
      *(undefined8 *)(param_2 + 6) = uVar37;
      *(undefined1 (*) [16])param_2 = auVar44;
    }
    break;
         case 9:
    uVar14 = (int)uVar14 >> 1;
    uVar19 = (int)uVar24 >> 1 | uVar32 & 0x80;
    uVar32 = uVar14 & 0x3f;
    if ((uVar14 & 0x20) != 0) {
      uVar32 = uVar14 | 0xffffffc0;
    }
    uVar18 = (int)(uint)param_3[3] >> 1;
    uVar13 = (int)(uint)param_3[2] >> 1 | param_3[3] & 0x80;
    uVar22 = uVar18 & 0x3f;
    if ((uVar18 & 0x20) != 0) {
      uVar22 = uVar18 | 0xffffffc0;
    }
    uVar16 = (int)(uint)param_3[5] >> 1;
    uVar35 = (int)(uint)param_3[4] >> 1 | param_3[5] & 0x80;
    uVar18 = uVar16 & 0x3f;
    if ((uVar16 & 0x20) != 0) {
      uVar18 = uVar16 | 0xffffffc0;
    }
    iVar31 = uVar35 + uVar18;
    if ((int)(uVar32 + uVar22 + uVar18) < 0) {
      param_2[4] = iVar31;
      param_2[5] = uVar35;
      param_2[6] = 0xff;
      *(ulong *)param_2 = CONCAT44((int)(uVar19 + uVar35) >> 1,(int)(uVar19 + uVar32 + iVar31) >> 1)
      ;
      *(ulong *)(param_2 + 2) =
           CONCAT44((int)(uVar13 + uVar35) >> 1,(int)(iVar31 + uVar13 + uVar22) >> 1);
    }
    else {
      param_2[4] = uVar35;
      param_2[5] = iVar31;
      param_2[6] = 0xff;
      *(ulong *)param_2 = CONCAT44(uVar19 + uVar32,uVar19);
      *(ulong *)(param_2 + 2) = CONCAT44(uVar13 + uVar22,uVar13);
    }
    param_2[7] = 0xff;
    goto LAB_00107793;
         case 10:
    bVar10 = param_3[3];
    bVar1 = param_3[2];
    bVar2 = param_3[4];
    bVar3 = param_3[5];
    param_2[1] = uVar11;
    param_2[3] = uVar14;
    param_2[5] = (uint)bVar1;
    param_2[6] = (uint)bVar2;
    param_2[7] = (uint)bVar3;
    *param_2 = (int)(uVar11 * bVar10) >> 8;
    param_2[2] = (int)(uVar14 * bVar10) >> 8;
    param_2[4] = (int)((uint)bVar10 * (uint)bVar1) >> 8;
    break;
         default:
    bVar10 = param_3[5];
    bVar2 = param_3[4];
    bVar3 = param_3[2];
    bVar4 = param_3[3];
    uVar22 = (uint)bVar4;
    uVar13 = (uint)bVar10;
    uVar18 = (uint)bVar2;
    uVar19 = (int)(uint)bVar10 >> 6;
    uVar35 = (int)(uint)bVar2 >> 7 | uVar19 & 2;
    *(undefined8 *)(param_2 + 6) = _LC21;
    if (uVar35 == 3) {
      param_2[4] = (uVar18 & 0x7f) << 5;
      *param_2 = uVar36 << 4;
      param_2[1] = (uint)bVar1 << 4;
      param_2[2] = (uint)bVar3 << 4;
      param_2[3] = (uint)bVar4 << 4;
      param_2[5] = (uVar13 & 0x7f) << 5;
    }
    else {
      uVar15 = bVar2 & 0x7f;
      uVar11 = (bVar1 & 0x40) << 2 | uVar11;
      uVar34 = (int)(uint)bVar3 >> 6 & 2U | (int)uVar22 >> 5 & 4U | (int)uVar26 >> 7;
      local_4c = uVar22 & 0x3f;
      uVar36 = bVar3 & 0x3f;
      uVar32 = uVar32 & 0x3f;
      local_40 = bVar10 & 0x7f;
      uVar16 = *(int *)(decode_endpoint(unsigned_int,int*[],unsigned_char_const*)::s_dbitstab +
                       (long)(int)uVar34 * 4) - 1;
      iVar31 = 1 << ((byte)*(int *)(decode_endpoint(unsigned_int,int*[],unsigned_char_const*)::
                                    s_dbitstab + (long)(int)uVar34 * 4) & 0x1f);
      if ((uVar15 >> (uVar16 & 0x1f) & 1) == 0) {
        uVar15 = iVar31 - 1U & uVar15;
      }
      else {
        uVar15 = -iVar31 | uVar15;
      }
      if ((local_40 >> (uVar16 & 0x1f) & 1) == 0) {
        local_40 = iVar31 - 1U & local_40;
      }
      else {
        local_40 = -iVar31 | local_40;
      }
      uVar24 = 1 << (sbyte)uVar34;
      uVar16 = (int)(uint)bVar3 >> 6 & 1;
      uVar19 = uVar19 & 1;
      uVar26 = (int)uVar22 >> 6 & 1;
      uVar22 = (int)uVar18 >> 6 & 1;
      if ((uVar24 & 0xa4) == 0) {
        if (uVar34 == 3) {
LAB_00108140:
          uVar11 = uVar11 | uVar22 << 9;
          local_4c = local_4c | uVar26 << 6;
          uVar32 = uVar32 | uVar19 << 6;
          uVar36 = uVar36 | uVar16 << 6;
        }
        else {
          if ((uVar24 & 0x50) != 0) {
            uVar11 = uVar11 | (uVar13 & 0x20) << 5 | (uVar18 & 0x20) << 4;
            goto LAB_0010746e;
          }
LAB_001081c0:
          if (uVar34 == 2) goto LAB_001081a0;
          if ((uVar24 & 0xe8) != 0) {
LAB_00107488:
            uVar32 = uVar32 | uVar19 << 6;
          }
          if (uVar34 == 5) {
            uVar32 = uVar32 | uVar22 << 7;
          }
          else if ((uVar24 & 0x5b) != 0) {
            local_4c = local_4c | uVar26 << 6;
            uVar36 = uVar36 | uVar16 << 6;
            if ((uVar24 & 0x12) != 0) {
              uVar36 = uVar36 | uVar22 << 7;
              local_4c = local_4c | uVar19 << 7;
            }
          }
        }
      }
      else {
        uVar11 = uVar11 | uVar16 << 9;
        if (uVar34 == 3) goto LAB_00108140;
        if ((uVar24 & 0x50) == 0) {
          if ((uVar24 & 0xa0) == 0) goto LAB_001081c0;
        }
        else {
          uVar11 = uVar11 | (uVar18 & 0x20) << 4 | (uVar13 & 0x20) << 5;
          if ((uVar24 & 0xa0) == 0) goto LAB_0010746e;
        }
        uVar11 = uVar11 | uVar26 << 10;
LAB_0010746e:
        if ((uVar24 & 0xc0) == 0) goto LAB_001081c0;
        uVar11 = uVar11 | uVar22 << 0xb;
        if (uVar34 != 2) goto LAB_00107488;
LAB_001081a0:
        uVar32 = uVar32 | uVar26 << 6;
      }
      bVar10 = (byte)((int)uVar34 >> 1) ^ 3;
      iVar12 = uVar11 << bVar10;
      iVar17 = uVar32 << bVar10;
      iVar31 = 0xfff;
      if (iVar12 < 0x1000) {
        iVar31 = iVar12;
      }
      iVar23 = iVar12 - (uVar36 << bVar10);
      iVar20 = 0xfff;
      if (iVar23 < 0x1000) {
        iVar20 = iVar23;
      }
      if (iVar20 < 0) {
        iVar20 = 0 << bVar10;
      }
      iVar25 = iVar12 - (local_4c << bVar10);
      iVar30 = 0xfff;
      if (iVar25 < 0x1000) {
        iVar30 = iVar25;
      }
      if (iVar30 < 0) {
        iVar30 = 0;
      }
      iVar12 = iVar12 - iVar17;
      if (0xfff < iVar12) {
        iVar12 = 0xfff;
      }
      param_2[5] = iVar30;
      if (iVar12 < 0) {
        iVar12 = 0;
      }
      iVar23 = (iVar23 - iVar17) - (uVar15 << bVar10);
      if (0xfff < iVar23) {
        iVar23 = 0xfff;
      }
      if (iVar23 < 0) {
        iVar23 = 0;
      }
      iVar17 = (iVar25 - iVar17) - (local_40 << bVar10);
      if (0xfff < iVar17) {
        iVar17 = 0xfff;
      }
      *(ulong *)param_2 = CONCAT44(iVar31,iVar12);
      *(ulong *)(param_2 + 2) = CONCAT44(iVar20,iVar23);
      if (iVar17 < 0) {
        iVar17 = 0;
      }
      param_2[4] = iVar17;
      if (uVar35 == 1) {
        *(ulong *)param_2 = CONCAT44(iVar20,iVar23);
        *(ulong *)(param_2 + 2) = CONCAT44(iVar31,iVar12);
      }
      else if (uVar35 == 2) {
        param_2[4] = iVar12;
        param_2[5] = iVar31;
        *(ulong *)param_2 = CONCAT44(iVar30,iVar17);
      }
    }
    if (param_1 == 0xe) {
      bVar10 = param_3[6];
      param_2[7] = (uint)param_3[7];
      param_2[6] = (uint)bVar10;
    }
    else if (param_1 == 0xf) {
      bVar10 = param_3[7];
      bVar1 = param_3[6];
      uVar32 = bVar10 >> 6 & 2 | (int)(uint)bVar1 >> 7;
      if (uVar32 == 3) {
        uVar38 = (ulong)(CONCAT14(bVar10,(uint)bVar1) & 0xff0000007f) & 0x7fffffffff;
        *(ulong *)(param_2 + 6) = CONCAT44((int)(uVar38 >> 0x20) << 5,(int)uVar38 << 5);
      }
      else {
        sVar8 = (sbyte)uVar32;
        iVar31 = ((bVar10 & 0x7f) << sVar8 + 1 & 0x780 | bVar1 & 0x7f) << (4U - sVar8 & 0x1f);
        param_2[6] = iVar31;
        iVar31 = iVar31 + ((0x3f >> sVar8 & bVar10 & 0x7f ^ 0x20 >> sVar8) - (0x20 >> sVar8) <<
                          (4U - sVar8 & 0x1f));
        if (0xfff < iVar31) {
          iVar31 = 0xfff;
        }
        if (iVar31 < 0) {
          iVar31 = 0;
        }
        param_2[7] = iVar31;
      }
    }
    break;
         case 0xc:
    bVar2 = param_3[2];
    bVar3 = param_3[3];
    bVar4 = param_3[4];
    bVar5 = param_3[5];
    bVar6 = param_3[6];
    bVar7 = param_3[7];
    uVar32 = CONCAT31(0,bVar5);
    if ((uint)bVar1 + (uint)bVar3 + uVar32 < (uint)bVar10 + (uint)bVar2 + (uint)bVar4) {
      auVar41[4] = bVar4;
      auVar41._0_4_ = uVar32;
      auVar41._5_3_ = 0;
      *param_2 = (int)(uVar32 + uVar26) >> 1;
      param_2[1] = (int)((uint)bVar4 + (uint)bVar10) >> 1;
      param_2[2] = (int)(uVar32 + bVar3) >> 1;
      param_2[3] = (int)((uint)bVar4 + (uint)bVar2) >> 1;
      auVar41[0xc] = bVar6;
      auVar41._8_4_ = CONCAT31(0,bVar7);
      auVar41._13_3_ = 0;
      *(undefined1 (*) [16])(param_2 + 4) = auVar41;
    }
    else {
      *param_2 = uVar11;
      param_2[1] = uVar26;
      param_2[2] = (uint)bVar2;
      param_2[3] = (uint)bVar3;
      param_2[4] = (uint)bVar4;
      param_2[5] = (uint)bVar5;
      param_2[6] = (uint)bVar6;
      param_2[7] = CONCAT31(0,bVar7);
    }
    break;
         case 0xd:
    uVar26 = (int)uVar26 >> 1;
    uVar19 = (int)uVar11 >> 1 | uVar32 & 0x80;
    uVar32 = uVar26 & 0x3f;
    if ((uVar26 & 0x20) != 0) {
      uVar32 = uVar26 | 0xffffffc0;
    }
    uVar18 = (int)(uint)param_3[3] >> 1;
    uVar13 = (int)(uint)param_3[2] >> 1 | param_3[3] & 0x80;
    uVar22 = uVar18 & 0x3f;
    if ((uVar18 & 0x20) != 0) {
      uVar22 = uVar18 | 0xffffffc0;
    }
    uVar16 = (int)(uint)param_3[5] >> 1;
    uVar35 = (int)(uint)param_3[4] >> 1 | param_3[5] & 0x80;
    uVar18 = uVar16 & 0x3f;
    if ((uVar16 & 0x20) != 0) {
      uVar18 = uVar16 | 0xffffffc0;
    }
    uVar34 = (int)(uint)param_3[7] >> 1;
    uVar15 = (int)(uint)param_3[6] >> 1 | param_3[7] & 0x80;
    uVar16 = uVar34 & 0x3f;
    if ((uVar34 & 0x20) != 0) {
      uVar16 = uVar34 | 0xffffffc0;
    }
    iVar31 = uVar35 + uVar18;
    if ((int)(uVar22 + uVar32 + uVar18) < 0) {
      param_2[4] = iVar31;
      param_2[6] = uVar15 + uVar16;
      param_2[5] = uVar35;
      *(ulong *)param_2 = CONCAT44((int)(uVar19 + uVar35) >> 1,(int)(uVar19 + uVar32 + iVar31) >> 1)
      ;
      *(ulong *)(param_2 + 2) =
           CONCAT44((int)(uVar13 + uVar35) >> 1,(int)(iVar31 + uVar13 + uVar22) >> 1);
    }
    else {
      param_2[4] = uVar35;
      param_2[5] = iVar31;
      param_2[6] = uVar15;
      *(ulong *)param_2 = CONCAT44(uVar19 + uVar32,uVar19);
      *(ulong *)(param_2 + 2) = CONCAT44(uVar13 + uVar22,uVar13);
      uVar15 = uVar15 + uVar16;
    }
    param_2[7] = uVar15;
LAB_00107793:
    uVar13 = _UNK_001811ec;
    uVar22 = _UNK_001811e8;
    uVar19 = _LC19._4_4_;
    uVar32 = (uint)_LC19;
    uVar18 = ~-(uint)((int)(uint)_LC19 < *param_2) & *param_2 |
             (uint)_LC19 & -(uint)((int)(uint)_LC19 < *param_2);
    uVar35 = ~-(uint)((int)_LC19._4_4_ < param_2[1]) & param_2[1] |
             _LC19._4_4_ & -(uint)((int)_LC19._4_4_ < param_2[1]);
    uVar16 = ~-(uint)((int)_UNK_001811e8 < param_2[2]) & param_2[2] |
             _UNK_001811e8 & -(uint)((int)_UNK_001811e8 < param_2[2]);
    uVar15 = ~-(uint)((int)_UNK_001811ec < param_2[3]) & param_2[3] |
             _UNK_001811ec & -(uint)((int)_UNK_001811ec < param_2[3]);
    *param_2 = uVar18 & -(uint)(0 < (int)uVar18);
    param_2[1] = uVar35 & -(uint)(0 < (int)uVar35);
    param_2[2] = uVar16 & -(uint)(0 < (int)uVar16);
    param_2[3] = uVar15 & -(uint)(0 < (int)uVar15);
    uVar18 = -(uint)((int)uVar32 < param_2[4]);
    uVar35 = -(uint)((int)uVar19 < param_2[5]);
    uVar16 = -(uint)((int)uVar22 < param_2[6]);
    uVar15 = -(uint)((int)uVar13 < param_2[7]);
    uVar32 = ~uVar18 & param_2[4] | uVar32 & uVar18;
    uVar19 = ~uVar35 & param_2[5] | uVar19 & uVar35;
    uVar22 = ~uVar16 & param_2[6] | uVar22 & uVar16;
    uVar13 = ~uVar15 & param_2[7] | uVar13 & uVar15;
    param_2[4] = uVar32 & -(uint)(0 < (int)uVar32);
    param_2[5] = uVar19 & -(uint)(0 < (int)uVar19);
    param_2[6] = uVar22 & -(uint)(0 < (int)uVar22);
    param_2[7] = uVar13 & -(uint)(0 < (int)uVar13);
    return;
      }

      return;
   }
 else {
      if (0xf < (int)( uVar3 - 0x7f )) {
         return uVar1 << 0xf | 0x7c00;
      }

      if ((int)( uVar3 - 0x7f ) < -0xe) {
         fVar5 = (float)( (uint)param_1 & _LC26 ) * __LC23;
         if (param_2) {
            if ((float)( (uint)fVar5 & _LC26 ) < _LC24) {
               fVar5 = (float)( (uint)(float)(int)fVar5 | ~_LC26 & (uint)fVar5 );
            }

            uVar3 = (uint)fVar5;
            iVar4 = 0;
         }
 else {
            lVar2 = lrintf(fVar5);
            iVar4 = 0;
            uVar3 = (uint)lVar2;
         }

      }
 else {
         iVar4 = uVar3 - 0x70;
         fVar5 = (float)( (uint)param_1 & 0x7fffff ) * __LC25;
         if (param_2) {
            if ((float)( (uint)fVar5 & _LC26 ) < _LC24) {
               fVar5 = (float)( (uint)(float)(int)fVar5 | ~_LC26 & (uint)fVar5 );
            }

            uVar3 = (uint)fVar5;
         }
 else {
            lVar2 = lrintf(fVar5);
            uVar3 = (uint)lVar2;
         }

      }

      if (uVar3 != 0x400) {
         return uVar1 << 0xf | iVar4 << 10 | uVar3;
      }

      uVar3 = ( iVar4 + 1 ) * 0x400;
   }
 while ( ( uVar2 & 0x400 ) == 0 );
   uVar2 = uVar2 & 0xfffffbff;
}
else{uVar4 = (uint)uVar3;if (( param_1 >> 10 & 0x1f ) == 0x1f) {
   if (( param_1 & 0x3ff ) == 0) {
      return uVar5 | 0x7f800000;
   }

   return uVar2 << 0xd | uVar5 | 0x7f800000;
}
}return ( uVar4 + 0x70 ) * 0x800000 | uVar2 << 0xd | uVar5;}/* astc_helpers::unpack_rgb9e5(unsigned int, float&, float&, float&) */void astc_helpers::unpack_rgb9e5(uint param_1, float *param_2, float *param_3, float *param_4) {
   float fVar1;
   fVar1 = powf(_LC27, (float)(int)( ( param_1 >> 0x1b ) - 0x18 ));
   *param_2 = (float)( param_1 & 0x1ff ) * fVar1;
   *param_3 = (float)( param_1 >> 9 & 0x1ff ) * fVar1;
   *param_4 = (float)( param_1 >> 0x12 & 0x1ff ) * fVar1;
   return;
}
/* astc_helpers::pack_rgb9e5(float, float, float) */uint astc_helpers::pack_rgb9e5(float param_1, float param_2, float param_3) {
   int iVar1;
   int iVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   if (0.0 <= param_1) {
      if (param_1 <= _LC28) {
         if (0.0 <= param_2) goto LAB_00108900;
         param_2 = 0.0;
         LAB_001086bd:fVar4 = param_1;
         if (param_3 < 0.0) {
            if (param_2 < param_1) {
               param_3 = 0.0;
               iVar2 = ( (uint)param_1 >> 0x17 & 0xff ) - 0x7f;
               if (iVar2 < -0x10) {
                  iVar2 = -0x10;
               }

               iVar1 = iVar2 + 0x10;
               fVar5 = (float)( iVar2 + -8 );
               goto LAB_00108712;
            }

            param_3 = 0.0;
            fVar3 = param_2;
         }
 else {
            if (_LC28 < param_3) {
               fVar4 = param_1 * _LC30 + _LC2;
               if ((float)( (uint)fVar4 & _LC26 ) < _LC24) {
                  fVar4 = (float)( ( uint )((float)(int)fVar4 - (float)( -(uint)(fVar4 < (float)(int)fVar4) & _LC31 )) | ~_LC26 & (uint)fVar4 );
               }

               fVar5 = _LC30 * param_2 + _LC2;
               if ((float)( (uint)fVar5 & _LC26 ) < _LC24) {
                  fVar5 = (float)( ( uint )((float)(int)fVar5 - (float)( -(uint)(fVar5 < (float)(int)fVar5) & _LC31 )) | ~_LC26 & (uint)fVar5 );
               }

               return (int)fVar5 << 9 | (int)fVar4 | 0xfffc0000;
            }

            fVar3 = param_1;
            if (param_1 <= param_2) goto LAB_00108ab8;
         }

      }
 else {
         param_1 = _LC28;
         if (0.0 <= param_2) {
            LAB_00108900:if (_LC28 < param_2) goto joined_r0x00108914;
            goto LAB_001086bd;
         }

         if (param_3 < 0.0) {
            return 0xf80001ff;
         }

         if (_LC28 < param_3) {
            return 0xfffc01ff;
         }

         param_2 = 0.0;
         fVar3 = _LC28;
         fVar4 = _LC28;
      }

      LAB_001086e3:if (fVar3 <= param_3) {
         iVar2 = ( (uint)param_3 >> 0x17 & 0xff ) - 0x7f;
         if (iVar2 < -0x10) {
            iVar2 = -0x10;
         }

         iVar1 = iVar2 + 0x10;
         fVar5 = (float)( iVar2 + -8 );
         param_1 = param_3;
      }
 else {
         iVar2 = ( (uint)fVar3 >> 0x17 & 0xff ) - 0x7f;
         if (iVar2 < -0x10) {
            iVar2 = -0x10;
         }

         iVar1 = iVar2 + 0x10;
         fVar5 = (float)( iVar2 + -8 );
         param_1 = fVar3;
      }

      LAB_00108712:fVar3 = powf(_LC27, fVar5);
      fVar5 = param_1 / fVar3 + _LC2;
      if ((float)( (uint)fVar5 & _LC26 ) < _LC24) {
         fVar5 = (float)( ( uint )((float)(int)fVar5 - (float)( -(uint)(fVar5 < (float)(int)fVar5) & _LC31 )) | ~_LC26 & (uint)fVar5 );
      }

      if ((int)fVar5 == 0x200) {
         fVar3 = fVar3 + fVar3;
         fVar4 = fVar4 / fVar3 + _LC2;
         if ((float)( (uint)fVar4 & _LC26 ) < _LC24) {
            fVar4 = (float)( ( uint )((float)(int)fVar4 - (float)( -(uint)(fVar4 < (float)(int)fVar4) & _LC31 )) | ~_LC26 & (uint)fVar4 );
         }

         fVar5 = param_2 / fVar3 + _LC2;
         if ((float)( (uint)fVar5 & _LC26 ) < _LC24) {
            fVar5 = (float)( ( uint )((float)(int)fVar5 - (float)( -(uint)(fVar5 < (float)(int)fVar5) & _LC31 )) | ~_LC26 & (uint)fVar5 );
         }

         fVar3 = param_3 / fVar3 + _LC2;
         if ((float)( (uint)fVar3 & _LC26 ) < _LC24) {
            fVar3 = (float)( ( uint )((float)(int)fVar3 - (float)( -(uint)(fVar3 < (float)(int)fVar3) & _LC31 )) | ~_LC26 & (uint)fVar3 );
         }

         iVar1 = iVar2 + 0x11;
         goto LAB_001088a4;
      }

   }
 else {
      if (0.0 <= param_2) {
         if (_LC28 < param_2) {
            param_1 = 0.0;
            joined_r0x00108914:if (param_3 < 0.0) {
               fVar4 = param_1 * _LC30 + _LC2;
               if ((float)( (uint)fVar4 & _LC26 ) < _LC24) {
                  fVar4 = (float)( ( uint )((float)(int)fVar4 - (float)( -(uint)(fVar4 < (float)(int)fVar4) & _LC31 )) | ~_LC26 & (uint)fVar4 );
               }

               return (int)fVar4 | 0xf803fe00;
            }

            param_2 = _LC28;
            if (_LC28 < param_3) {
               fVar4 = param_1 * _LC30 + _LC2;
               if ((float)( (uint)fVar4 & _LC26 ) < _LC24) {
                  fVar4 = (float)( ( uint )((float)(int)fVar4 - (float)( -(uint)(fVar4 < (float)(int)fVar4) & _LC31 )) | ~_LC26 & (uint)fVar4 );
               }

               return (int)fVar4 | 0xfffffe00;
            }

         }
 else {
            if (param_3 < 0.0) {
               param_3 = 0.0;
               fVar3 = param_2;
               fVar4 = 0.0;
               goto LAB_001086e3;
            }

            if (_LC28 < param_3) {
               fVar4 = param_2 * _LC30 + _LC2;
               if ((float)( (uint)fVar4 & _LC26 ) < _LC24) {
                  fVar4 = (float)( ( uint )((float)(int)fVar4 - (float)( -(uint)(fVar4 < (float)(int)fVar4) & _LC31 )) | ~_LC26 & (uint)fVar4 );
               }

               return (int)fVar4 << 9 | 0xfffc0000;
            }

            param_1 = 0.0;
         }

         LAB_00108ab8:fVar3 = param_2;
         fVar4 = param_1;
         goto LAB_001086e3;
      }

      if (0.0 <= param_3) {
         if (_LC28 < param_3) {
            return 0xfffc0000;
         }

         param_2 = 0.0;
         iVar2 = ( (uint)param_3 >> 0x17 & 0xff ) - 0x7f;
         if (iVar2 < -0x10) {
            iVar2 = -0x10;
         }

         iVar1 = iVar2 + 0x10;
         fVar5 = (float)( iVar2 + -8 );
         param_1 = param_3;
         fVar4 = 0.0;
         goto LAB_00108712;
      }

      fVar4 = 0.0;
      iVar1 = 0;
      param_2 = 0.0;
      param_3 = 0.0;
      fVar3 = _LC29;
   }

   fVar4 = fVar4 / fVar3 + _LC2;
   if ((float)( (uint)fVar4 & _LC26 ) < _LC24) {
      fVar4 = (float)( ( uint )((float)(int)fVar4 - (float)( -(uint)(fVar4 < (float)(int)fVar4) & _LC31 )) | ~_LC26 & (uint)fVar4 );
   }

   fVar5 = param_2 / fVar3 + _LC2;
   if ((float)( (uint)fVar5 & _LC26 ) < _LC24) {
      fVar5 = (float)( ( uint )((float)(int)fVar5 - (float)( -(uint)(fVar5 < (float)(int)fVar5) & _LC31 )) | ~_LC26 & (uint)fVar5 );
   }

   fVar3 = param_3 / fVar3 + _LC2;
   if ((float)( (uint)fVar3 & _LC26 ) < _LC24) {
      fVar3 = (float)( ( uint )((float)(int)fVar3 - (float)( -(uint)(fVar3 < (float)(int)fVar3) & _LC31 )) | ~_LC26 & (uint)fVar3 );
   }

   LAB_001088a4:return iVar1 << 0x1b | (int)fVar4 | (int)fVar5 << 9 | (int)fVar3 << 0x12;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* astc_helpers::decode_block(astc_helpers::log_astc_block const&, void*, unsigned int, unsigned
   int, astc_helpers::decode_mode) */undefined1 astc_helpers::decode_block(char *param_1, undefined4 *param_2, uint param_3, uint param_4, int param_5) {
   long lVar1;
   char cVar2;
   char cVar3;
   char cVar4;
   bool bVar5;
   undefined1 uVar6;
   undefined2 uVar7;
   undefined4 uVar8;
   uint uVar9;
   uint uVar10;
   uint uVar11;
   undefined4 *puVar12;
   long lVar13;
   ulong uVar14;
   uint *puVar15;
   uint *puVar16;
   byte bVar17;
   uint uVar18;
   int iVar19;
   uint uVar20;
   ulong uVar21;
   uint uVar22;
   undefined4 *puVar23;
   uint uVar24;
   uint uVar25;
   char *pcVar26;
   char cVar27;
   byte bVar28;
   byte bVar29;
   uint uVar30;
   uint uVar31;
   uint uVar32;
   int iVar33;
   uint uVar34;
   long in_FS_OFFSET;
   bool bVar35;
   bool bVar36;
   bool bVar37;
   bool bVar38;
   float fVar39;
   float fVar40;
   float extraout_XMM1_Da;
   float fVar41;
   int local_388;
   int local_384;
   char acStack_328[4];
   uint local_324;
   uint local_320;
   uint local_31c;
   uint local_318[32];
   uchar local_298[144];
   uchar local_208[144];
   undefined8 local_178[18];
   uchar local_e8[144];
   uchar local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (g_dequant_tables._792_4_ != 0) {
      uVar24 = param_3 * param_4;
      if (param_5 == 2) {
         memset(param_2, 0xff, (ulong)uVar24 << 3);
         if (*param_1 == '\0') {
            if (param_1[1] == '\0') {
               if (param_1[2] == '\0') {
                  LAB_00108d16:uVar34 = *(uint*)( param_1 + 0xc );
                  if (( ( 1 < uVar34 ) && ( uVar25 = *(uint*)( param_1 + 0x10 ) ),1 < uVar25 && uVar25 <= param_4 )) {
                     uVar18 = *(uint*)( param_1 + 0x1c ) - 4;
                     if (( ( ( ( uVar18 < 0x11 ) && ( uVar10 = *(uint*)( param_1 + 0x18 ) ),uVar10 < 0xc ) ) && ( ( uVar20 = *(uint*)( param_1 + 0x24 ) ),uVar20 - 1 < 4 && ( ( bVar17 = param_1[0x14] ),uVar20 != 4 || ( bVar17 == 0 ) ) ) )) {
                        lVar13 = ( ulong ) * (uint*)( param_1 + 0x1c ) * 3;
                        cVar27 = ( &DAT_0017fe21 )[lVar13];
                        cVar2 = ( &DAT_0017fe22 )[lVar13];
                        bVar29 = ( &g_ise_range_table )[lVar13];
                        uVar21 = 0;
                        lVar13 = (ulong)uVar10 * 3;
                        cVar3 = ( &DAT_0017fe21 )[lVar13];
                        cVar4 = ( &DAT_0017fe22 )[lVar13];
                        bVar28 = ( &g_ise_range_table )[lVar13];
                        uVar14 = 0;
                        do {
                           uVar9 = *(uint*)( param_1 + uVar14 * 4 + 0x2c );
                           if (0xf < uVar9) goto LAB_00108d40;
                           uVar30 = (int)uVar21 + 2 + ( uVar9 >> 2 ) * 2;
                           uVar21 = (ulong)uVar30;
                           acStack_328[uVar14] = uVar9 < 0xe && ( 0x3773UL >> ( (ulong)uVar9 & 0x3f ) & 1 ) != 0;
                           uVar14 = uVar14 + 1;
                        }
 while ( uVar14 != uVar20 );
                        if (uVar30 < 0x13) {
                           lVar13 = *(long*)( g_dequant_tables + (ulong)uVar18 * 0x40 + 0x310 );
                           if (uVar30 != 0) {
                              uVar14 = ( ulong )(uint)(0 << ( bVar29 & 0x1f ));
                              do {
                                 if (( uint )(cVar2 * 4 + 1 + cVar27 * 2 << ( bVar29 & 0x1f )) <= (uint)(byte)param_1[uVar14 + 0x7c]) goto LAB_00108d40;
                                 local_58[uVar14] = *(uchar*)( lVar13 + (ulong)(byte)param_1[uVar14 + 0x7c] );
                                 uVar14 = uVar14 + 1;
                              }
 while ( uVar14 != uVar21 );
                           }

                           lVar13 = *(long*)( g_dequant_tables + (ulong)uVar10 * 0x40 + 0x10 );
                           uVar18 = ( bVar17 + 1 ) * uVar34 * uVar25;
                           if (uVar18 != 0) {
                              uVar14 = ( ulong )(uint)(0 << ( bVar28 & 0x1f ));
                              do {
                                 lVar1 = uVar14 + 0x3c;
                                 uVar10 = (uint)uVar14;
                                 if (( uint )(cVar4 * 4 + 1 + cVar3 * 2 << ( bVar28 & 0x1f )) <= (uint)(byte)param_1[lVar1]) goto LAB_00108d40;
                                 uVar21 = 0;
                                 uVar9 = uVar10;
                                 if (bVar17 != 0) {
                                    uVar9 = uVar10 >> 1;
                                    uVar21 = ( ulong )(uVar10 & 1);
                                 }

                                 uVar14 = uVar14 + 1;
                                 local_298[(ulong)uVar9 + uVar21 * 0x90] = *(uchar*)( lVar13 + (ulong)(byte)param_1[lVar1] );
                              }
 while ( uVar14 != uVar18 );
                           }

                           upsample_weight_grid(param_3, param_4, uVar34, uVar25, local_298, (uchar*)local_178);
                           if (bVar17 != 0) {
                              upsample_weight_grid(param_3, param_4, uVar34, uVar25, local_208, local_e8);
                           }

                           uVar14 = 0;
                           puVar15 = local_318;
                           pcVar26 = param_1;
                           do {
                              uVar34 = *(uint*)( pcVar26 + 0x2c );
                              pcVar26 = pcVar26 + 4;
                              decode_endpoint(uVar34, (int*)puVar15, local_58 + uVar14);
                              uVar14 = ( ulong )((int)uVar14 + 2 + ( uVar34 >> 2 ) * 2);
                              puVar15 = puVar15 + 8;
                           }
 while ( pcVar26 != param_1 + (ulong)uVar20 * 4 );
                           bVar5 = uVar24 < 0x1f;
                           bVar35 = uVar20 != 4;
                           bVar36 = uVar20 != 1;
                           bVar37 = param_4 == 4;
                           bVar38 = param_3 == 4;
                           uVar24 = 0xffffffff;
                           if (bVar17 != 0) {
                              uVar24 = uVar22;
                           }

                           if (param_5 == 3) {
                              local_384 = 0;
                              for (uVar14 = 0; uVar14 != param_4; uVar14 = uVar14 + 1) {
                                 local_388 = (uint)uVar14 * 8;
                                 uVar34 = 0;
                                 do {
                                    uVar25 = *(uint*)( param_1 + 0x24 );
                                    uVar18 = local_384 + uVar34;
                                    uVar10 = 0;
                                    if (1 < uVar25) {
                                       if (( ( bVar35 && bVar36 ) && bVar37 ) && bVar38) {
                                          uVar10 = *(uint*)( g_texel_partitions_4x4 + ( ( ulong )(uVar25 - 2) + ( ulong ) * (uint*)( param_1 + 0x28 ) * 2 ) * 4 ) >> ( (byte)local_388 & 0x1f ) & 3;
                                       }
 else {
                                          uVar10 = compute_texel_partition(*(uint*)( param_1 + 0x28 ), uVar34, (uint)uVar14, 0, uVar25, bVar5);
                                       }

                                    }

                                    uVar25 = 0;
                                    cVar27 = acStack_328[uVar10];
                                    puVar16 = local_318 + (ulong)uVar10 * 8;
                                    puVar15 = &local_324;
                                    do {
                                       uVar10 = puVar16[1];
                                       bVar17 = *(byte*)( (long)local_178 + (ulong)uVar18 + ( ulong )(uVar24 == uVar25) * 0x90 );
                                       uVar20 = *puVar16;
                                       iVar33 = 0x40 - (uint)bVar17;
                                       if (cVar27 == '\0') {
                                          uVar10 = uVar10 * 0x10 * (uint)bVar17 + 0x20 + uVar20 * 0x10 * iVar33;
                                          uVar31 = uVar10 >> 6;
                                          uVar20 = uVar31 & 0x7ff;
                                          if (( uVar31 & 0x600 ) == 0) {
                                             iVar33 = uVar20 * 3;
                                          }
 else if (uVar20 < 0x600) {
                                             iVar33 = uVar20 * 4 + -0x200;
                                          }
 else {
                                             iVar33 = uVar20 * 5 + -0x800;
                                          }

                                          uVar10 = ( uVar10 >> 0x11 & 0x1f ) * 0x400 + ( iVar33 >> 3 );
                                          if (( ~uVar10 & 0x7c00 ) == 0) {
                                             *puVar15 = 0x7bff;
                                          }
 else {
                                             *puVar15 = uVar10 & 0xffff;
                                          }

                                       }
 else {
                                          *puVar15 = ( uVar10 | uVar10 << 8 ) * (uint)bVar17 + 0x20 + ( uVar20 | uVar20 << 8 ) * iVar33 >> 6;
                                       }

                                       uVar25 = uVar25 + 1;
                                       puVar16 = puVar16 + 2;
                                       puVar15 = puVar15 + 1;
                                    }
 while ( uVar25 != 3 );
                                    if (cVar27 == '\0') {
                                       if ((int)local_324 < 0x7c01) {
                                          if (local_324 == 0x7c00) {
                                             uVar10 = 0x7ff;
                                             uVar20 = 0x1e;
                                             uVar25 = 0x7bff;
                                          }
 else {
                                             uVar20 = (int)local_324 >> 10 & 0x1f;
                                             uVar10 = ( uint )(uVar20 != 0) << 10 | local_324 & 0x3ff;
                                             uVar25 = local_324;
                                          }

                                       }
 else {
                                          uVar10 = 0;
                                          uVar20 = 0;
                                          uVar25 = 0;
                                       }

                                       if ((int)local_320 < 0x7c01) {
                                          if (local_320 == 0x7c00) {
                                             uVar25 = uVar25 | 0x7bff;
                                             uVar22 = 0x7ff;
                                             uVar31 = 0x1e;
                                          }
 else {
                                             uVar25 = uVar25 | local_320;
                                             uVar31 = (int)local_320 >> 10 & 0x1f;
                                             uVar22 = ( uint )(uVar31 != 0) << 10 | local_320 & 0x3ff;
                                          }

                                       }
 else {
                                          uVar22 = 0;
                                          uVar31 = 0;
                                       }

                                       if ((int)local_31c < 0x7c01) {
                                          if (local_31c == 0x7c00) {
                                             uVar25 = uVar25 | 0x7bff;
                                             uVar30 = 0x7ff;
                                             uVar9 = 0x1e;
                                          }
 else {
                                             uVar25 = uVar25 | local_31c;
                                             uVar9 = (int)local_31c >> 10 & 0x1f;
                                             uVar30 = ( uint )(uVar9 != 0) << 10 | local_31c & 0x3ff;
                                          }

                                       }
 else {
                                          uVar30 = 0;
                                          uVar9 = 0;
                                       }

                                       cVar27 = (char)uVar9;
                                       uVar32 = 1;
                                       if (uVar20 != 0) {
                                          uVar32 = uVar20;
                                       }

                                       uVar11 = 1;
                                       if (uVar31 != 0) {
                                          uVar11 = uVar31;
                                       }

                                       cVar3 = (char)uVar11;
                                       cVar2 = (char)uVar32;
                                       if (uVar9 == 0) {
                                          if (( uVar25 & 0x7c00 ) == 0) {
                                             LAB_00109b11:uVar11 = (int)uVar25 >> 9 & 1;
                                             bVar28 = (byte)uVar11;
                                             bVar17 = bVar28;
                                             bVar29 = bVar28;
                                          }
 else {
                                             cVar27 = '\x01';
                                             if (uVar20 < uVar31) {
                                                LAB_00109a98:uVar11 = uVar11 + 1;
                                                bVar28 = ( cVar3 - cVar27 ) + 2;
                                                bVar17 = ( cVar3 - cVar2 ) + 2;
                                                bVar29 = 2;
                                             }
 else {
                                                LAB_00109b80:uVar11 = uVar32 + 1;
                                                bVar28 = ( cVar2 - cVar27 ) + 2;
                                                bVar17 = 2;
                                                bVar29 = ( cVar2 - cVar3 ) + 2;
                                             }

                                          }

                                       }
 else {
                                          if (( uVar25 & 0x7c00 ) == 0) goto LAB_00109b11;
                                          uVar25 = uVar9;
                                          if (uVar9 <= uVar31) {
                                             uVar25 = uVar31;
                                          }

                                          if (uVar25 <= uVar20) goto LAB_00109b80;
                                          if (uVar9 <= uVar31) goto LAB_00109a98;
                                          uVar11 = uVar9 + 1;
                                          bVar29 = ( cVar27 - cVar3 ) + 2;
                                          bVar28 = 2;
                                          bVar17 = ( cVar27 - cVar2 ) + 2;
                                       }

                                       uVar25 = uVar11 << 0x1b | (int)uVar10 >> ( bVar17 & 0x1f ) & 0x1ffU | ( (int)uVar30 >> ( bVar28 & 0x1f ) & 0x1ffU ) << 0x12 | ( (int)uVar22 >> ( bVar29 & 0x1f ) & 0x1ffU ) << 9;
                                    }
 else {
                                       uVar10 = local_31c | local_320 | local_324;
                                       uVar25 = uVar10 & 0x1ffff | 1;
                                       iVar33 = 0;
                                       while (( uVar10 & 0x10000 ) == 0) {
                                          iVar33 = iVar33 + 1;
                                          uVar25 = uVar25 * 2;
                                          uVar10 = uVar25;
                                       }
;
                                       uVar25 = local_324;
                                       if (local_324 == 0xffff) {
                                          iVar33 = 0;
                                          uVar25 = 0x10000;
                                       }

                                       uVar10 = local_320;
                                       if (local_320 == 0xffff) {
                                          iVar33 = 0;
                                          uVar10 = 0x10000;
                                       }

                                       if (local_31c == 0xffff) {
                                          uVar31 = 0x80000000;
                                          uVar20 = 0x4000000;
                                       }
 else {
                                          bVar17 = (byte)iVar33;
                                          uVar25 = uVar25 << ( bVar17 & 0x1f );
                                          uVar10 = uVar10 << ( bVar17 & 0x1f );
                                          uVar20 = ( local_31c << ( bVar17 & 0x1f ) & 0x1ff00 ) << 10;
                                          uVar31 = ( 0x10 - iVar33 ) * 0x8000000;
                                       }

                                       uVar25 = (int)uVar25 >> 8 & 0x1ffU | uVar20 | uVar31 | uVar10 * 2 & 0x3fe00;
                                    }

                                    uVar34 = uVar34 + 1;
                                    local_388 = local_388 + 2;
                                    param_2[uVar18] = uVar25;
                                 }
 while ( uVar34 < param_3 );
                                 local_384 = local_384 + param_3;
                              }

                           }
 else if (param_5 == 2) {
                              uVar34 = 0;
                              for (uVar14 = 0; uVar14 != param_4; uVar14 = uVar14 + 1) {
                                 local_384 = (uint)uVar14 * 8;
                                 uVar18 = 0;
                                 uVar25 = uVar34;
                                 do {
                                    uVar10 = 0;
                                    if (uVar20 != 1) {
                                       if (( ( bVar35 && bVar36 ) && bVar37 ) && bVar38) {
                                          uVar10 = *(uint*)( g_texel_partitions_4x4 + ( ( ulong )(uVar20 - 2) + (ulong)uVar31 * 2 ) * 4 ) >> ( (byte)local_384 & 0x1f ) & 3;
                                       }
 else {
                                          uVar10 = compute_texel_partition(uVar31, uVar18, (uint)uVar14, 0, uVar20, bVar5);
                                       }

                                    }

                                    uVar21 = (ulong)uVar10;
                                    cVar27 = acStack_328[uVar21];
                                    uVar10 = 0;
                                    puVar15 = local_318 + uVar21 * 8;
                                    do {
                                       uVar22 = puVar15[1];
                                       bVar17 = *(byte*)( (long)local_178 + (ulong)uVar25 + ( ulong )(uVar24 == uVar10) * 0x90 );
                                       uVar9 = *puVar15;
                                       iVar33 = 0x40 - (uint)bVar17;
                                       if (( cVar27 == '\0' ) && ( ( *(int*)( param_1 + uVar21 * 4 + 0x2c ) != 0xe || ( uVar10 != 3 ) ) )) {
                                          uVar22 = uVar22 * 0x10 * (uint)bVar17 + 0x20 + uVar9 * 0x10 * iVar33;
                                          uVar30 = uVar22 >> 6;
                                          uVar9 = uVar30 & 0x7ff;
                                          if (( uVar30 & 0x600 ) == 0) {
                                             iVar33 = uVar9 * 3;
                                          }
 else if (uVar9 < 0x600) {
                                             iVar33 = uVar9 * 4 + -0x200;
                                          }
 else {
                                             iVar33 = uVar9 * 5 + -0x800;
                                          }

                                          iVar33 = ( uVar22 >> 0x11 & 0x1f ) * 0x400 + ( iVar33 >> 3 );
                                          uVar7 = (undefined2)iVar33;
                                          if (( ~(byte)((uint)iVar33 >> 8) & 0x7c ) == 0) {
                                             uVar7 = 0x7bff;
                                          }

                                       }
 else {
                                          uVar7 = 0x3c00;
                                          uVar22 = ( uVar9 << 8 | uVar9 ) * iVar33 + 0x20 + ( uVar22 << 8 | uVar22 ) * (uint)bVar17 >> 6;
                                          if (uVar22 != 0xffff) {
                                             uVar7 = float_to_half((float)uVar22 * __LC32, true);
                                          }

                                       }

                                       uVar22 = uVar25 * 4 + uVar10;
                                       uVar10 = uVar10 + 1;
                                       puVar15 = puVar15 + 2;
                                       *(undefined2*)( (long)param_2 + (ulong)uVar22 * 2 ) = uVar7;
                                    }
 while ( uVar10 != 4 );
                                    local_384 = local_384 + 2;
                                    uVar18 = uVar18 + 1;
                                    uVar25 = uVar25 + 1;
                                 }
 while ( uVar18 < param_3 );
                                 uVar34 = uVar34 + param_3;
                              }

                           }
 else if (param_4 != 0) {
                              uVar14 = 0;
                              uVar34 = 0;
                              uVar6 = 1;
                              do {
                                 iVar33 = uVar34 * 8;
                                 iVar19 = (int)uVar14;
                                 uVar25 = 0;
                                 do {
                                    uVar18 = *(uint*)( param_1 + 0x24 );
                                    uVar10 = 0;
                                    if (1 < uVar18) {
                                       if (( ( bVar35 && bVar36 ) && bVar37 ) && bVar38) {
                                          uVar10 = *(uint*)( g_texel_partitions_4x4 + ( ( ulong )(uVar18 - 2) + ( ulong ) * (uint*)( param_1 + 0x28 ) * 2 ) * 4 ) >> ( (byte)iVar33 & 0x1f ) & 3;
                                       }
 else {
                                          uVar10 = compute_texel_partition(*(uint*)( param_1 + 0x28 ), uVar25, uVar34, 0, uVar18, bVar5);
                                       }

                                    }

                                    uVar18 = (int)uVar14 * 4;
                                    if (acStack_328[uVar10] == '\0') {
                                       param_2[uVar18] = 0xffff00ff;
                                       uVar6 = 0;
                                    }
 else {
                                       uVar20 = 0;
                                       puVar15 = local_318 + (ulong)uVar10 * 8;
                                       do {
                                          uVar10 = *puVar15;
                                          uVar31 = puVar15[1];
                                          uVar9 = uVar10 << 8;
                                          uVar22 = uVar31 << 8;
                                          if (param_5 == 0) {
                                             uVar10 = 0x80;
                                             uVar31 = 0x80;
                                          }

                                          uVar32 = ( uint ) * (byte*)( (long)local_178 + uVar14 + ( ulong )(uVar24 == uVar20) * 0x90 );
                                          uVar30 = uVar18 + uVar20;
                                          uVar20 = uVar20 + 1;
                                          puVar15 = puVar15 + 2;
                                          *(char*)( (long)param_2 + (ulong)uVar30 ) = (char)( ( 0x40 - uVar32 ) * ( uVar9 | uVar10 ) + 0x20 + ( uVar22 | uVar31 ) * uVar32 >> 0xe );
                                       }
 while ( uVar20 != 4 );
                                    }

                                    uVar25 = uVar25 + 1;
                                    uVar14 = ( ulong )((int)uVar14 + 1);
                                    iVar33 = iVar33 + 2;
                                 }
 while ( uVar25 < param_3 );
                                 uVar34 = uVar34 + 1;
                                 uVar14 = ( ulong )(iVar19 + param_3);
                              }
 while ( param_4 != uVar34 );
                              goto LAB_00108d42;
                           }

                           goto LAB_00108f24;
                        }

                     }

                  }

                  goto LAB_00108d40;
               }

               if (uVar24 != 0) {
                  uVar34 = 0;
                  do {
                     uVar25 = uVar34 * 4;
                     uVar34 = uVar34 + 1;
                     *(undefined8*)( (long)param_2 + (ulong)uVar25 * 2 ) = *(undefined8*)( param_1 + 4 );
                  }
 while ( uVar24 != uVar34 );
               }

            }
 else {
               lVar13 = 0;
               do {
                  uVar7 = 0x3c00;
                  if (*(ushort*)( param_1 + lVar13 + 4 ) != 0xffff) {
                     uVar7 = float_to_half((float)*(ushort*)( param_1 + lVar13 + 4 ) * __LC32, true);
                  }

                  *(undefined2*)( (long)local_178 + lVar13 ) = uVar7;
                  lVar13 = lVar13 + 2;
               }
 while ( lVar13 != 8 );
               if (uVar24 != 0) {
                  uVar34 = 0;
                  do {
                     uVar25 = uVar34 * 4;
                     uVar34 = uVar34 + 1;
                     *(undefined8*)( (long)param_2 + (ulong)uVar25 * 2 ) = local_178[0];
                  }
 while ( uVar24 != uVar34 );
               }

            }

            LAB_00108f24:uVar6 = 1;
            goto LAB_00108d42;
         }

      }
 else if (param_5 == 3) {
         uVar8 = pack_rgb9e5(_LC31, 0.0, _LC31);
         if (uVar24 != 0) {
            puVar12 = param_2;
            if (( uVar24 & 1 ) != 0) {
               *param_2 = uVar8;
               puVar12 = param_2 + 1;
               if (param_2 + 1 == param_2 + uVar24) goto LAB_00108e2e;
            }

            do {
               *puVar12 = uVar8;
               puVar23 = puVar12 + 2;
               puVar12[1] = uVar8;
               puVar12 = puVar23;
            }
 while ( puVar23 != param_2 + uVar24 );
         }

         LAB_00108e2e:if (*param_1 == '\0') {
            if (param_1[1] == '\0') goto LAB_00108d0f;
            fVar39 = _LC31;
            if (*(ushort*)( param_1 + 4 ) != 0xffff) {
               fVar39 = (float)*(ushort*)( param_1 + 4 ) * __LC32;
            }

            fVar40 = _LC31;
            if (*(ushort*)( param_1 + 6 ) != 0xffff) {
               fVar40 = (float)*(ushort*)( param_1 + 6 ) * __LC32;
            }

            fVar41 = _LC31;
            if (*(ushort*)( param_1 + 8 ) != 0xffff) {
               fVar41 = (float)*(ushort*)( param_1 + 8 ) * __LC32;
            }

            uVar8 = pack_rgb9e5(fVar39, fVar40, fVar41);
            if (uVar24 != 0) {
               puVar12 = param_2;
               if (( uVar24 & 1 ) != 0) {
                  *param_2 = uVar8;
                  puVar12 = param_2 + 1;
                  if (param_2 + 1 == param_2 + uVar24) goto LAB_00108f24;
               }

               do {
                  *puVar12 = uVar8;
                  puVar23 = puVar12 + 2;
                  puVar12[1] = uVar8;
                  puVar12 = puVar23;
               }
 while ( puVar23 != param_2 + uVar24 );
            }

            goto LAB_00108f24;
         }

      }
 else if (uVar24 == 0) {
         if (*param_1 == '\0') {
            if (param_1[1] == '\0') goto LAB_00108d0f;
            goto LAB_00108f24;
         }

      }
 else {
         puVar12 = param_2;
         if (( uVar24 & 1 ) == 0) goto LAB_00108ce8;
         *param_2 = 0xffff00ff;
         for (puVar12 = param_2 + 1; puVar12 != param_2 + uVar24; puVar12 = puVar12 + 2) {
            LAB_00108ce8:*puVar12 = 0xffff00ff;
            puVar12[1] = 0xffff00ff;
         }

         if (*param_1 == '\0') {
            if (param_1[1] != '\0') {
               iVar33 = 0;
               uVar34 = 0;
               if (uVar24 != 0) {
                  do {
                     lVar13 = 0;
                     do {
                        lVar1 = lVar13 * 2;
                        iVar19 = (int)lVar13;
                        lVar13 = lVar13 + 1;
                        *(char*)( (long)param_2 + ( ulong )(uint)(iVar33 + iVar19) ) = param_1[lVar1 + 5];
                     }
 while ( lVar13 != 4 );
                     uVar34 = uVar34 + 1;
                     iVar33 = iVar33 + 4;
                  }
 while ( uVar24 != uVar34 );
               }

               goto LAB_00108f24;
            }

            LAB_00108d0f:if (param_1[2] == '\0') goto LAB_00108d16;
            if (param_5 == 3) {
               fVar39 = (float)half_to_float(*(ushort*)( param_1 + 4 ));
               half_to_float(*(ushort*)( param_1 + 6 ));
               fVar40 = (float)half_to_float(*(ushort*)( param_1 + 8 ));
               uVar8 = pack_rgb9e5(fVar39, extraout_XMM1_Da, fVar40);
               if (uVar24 != 0) {
                  puVar12 = param_2;
                  if (( uVar24 & 1 ) != 0) {
                     *param_2 = uVar8;
                     puVar12 = param_2 + 1;
                     if (param_2 + 1 == param_2 + uVar24) goto LAB_00108f24;
                  }

                  do {
                     *puVar12 = uVar8;
                     puVar23 = puVar12 + 2;
                     puVar12[1] = uVar8;
                     puVar12 = puVar23;
                  }
 while ( puVar23 != param_2 + uVar24 );
               }

               goto LAB_00108f24;
            }

         }

      }

   }

   LAB_00108d40:uVar6 = 0;
   LAB_00108d42:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar6;
}
/* astc_helpers::decode_bise(unsigned int, unsigned char*, unsigned int, unsigned char const*,
   unsigned int) */void astc_helpers::decode_bise(uint param_1, uchar *param_2, uint param_3, uchar *param_4, uint param_5) {
   long in_FS_OFFSET;
   undefined8 local_28;
   undefined8 uStack_20;
   long local_10;
   local_28 = *(undefined8*)param_4;
   uStack_20 = *(undefined8*)( param_4 + 8 );
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   decode_bise(param_1, param_2, param_3, (uint128*)&local_28, param_5);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* astc_helpers::unpack_block(void const*, astc_helpers::log_astc_block&, unsigned int, unsigned
   int) */undefined8 astc_helpers::unpack_block(void *param_1, log_astc_block *param_2, uint param_3, uint param_4) {
   long lVar1;
   log_astc_block lVar2;
   log_astc_block *plVar3;
   undefined8 uVar4;
   byte bVar5;
   uint uVar6;
   ulong uVar7;
   byte bVar8;
   char *pcVar9;
   uint uVar10;
   uint uVar11;
   uint uVar12;
   undefined8 *puVar13;
   int iVar14;
   int iVar15;
   long lVar16;
   byte bVar17;
   ulong uVar18;
   byte bVar19;
   byte bVar20;
   ulong uVar21;
   byte bVar22;
   byte bVar23;
   ulong uVar24;
   uint *puVar25;
   long in_FS_OFFSET;
   uint uVar26;
   undefined1 auVar27[16];
   uint uVar28;
   uint uVar30;
   uint uVar31;
   undefined1 auVar29[16];
   uint local_a0;
   uint128 local_88[8];
   ulong uStack_80;
   uint128 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   uint local_48[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( param_2 + 1 ) = 0;
   *(undefined8*)( param_2 + 0x88 ) = 0;
   puVar13 = (undefined8*)( ( ulong )(param_2 + 9) & 0xfffffffffffffff8 );
   for (uVar7 = ( ulong )(( (int)param_2 - (int)(undefined8*)( ( ulong )(param_2 + 9) & 0xfffffffffffffff8 ) ) + 0x90U >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
   }

   *param_2 = (log_astc_block)0x1;
   /* WARNING: Load size is inaccurate */
   _local_88 = *param_1;
   uVar7 = SUB168(_local_88, 0);
   uVar26 = (uint)SUB161(_local_88, 0xf) | ( SUB164(_local_88, 0xc) & 0xff0000 ) >> 8 | SUB164(_local_88, 0xb) & 0xff0000 | SUB164(_local_88, 9) & 0xff000000;
   uVar11 = SUB164(_local_88, 8);
   uVar6 = uVar11 >> 0x18 | ( uVar11 & 0xff0000 ) >> 8 | ( uVar11 & 0xff00 ) << 8 | uVar11 << 0x18;
   uVar11 = SUB164(_local_88, 4);
   uVar28 = (uint)SUB161(_local_88, 7) | ( uVar11 & 0xff0000 ) >> 8 | SUB164(_local_88, 3) & 0xff0000 | SUB164(_local_88, 1) & 0xff000000;
   uVar12 = SUB164(_local_88, 0);
   uVar10 = uVar12 >> 0x18 | ( uVar12 & 0xff0000 ) >> 8 | ( uVar12 & 0xff00 ) << 8 | uVar12 << 0x18;
   uVar26 = uVar26 >> 4 & __LC108 | uVar26 << 4 & __LC34;
   uVar30 = uVar6 >> 4 & _UNK_00181204 | uVar6 << 4 & _UNK_00181214;
   uVar28 = uVar28 >> 4 & _UNK_00181208 | uVar28 << 4 & _UNK_00181218;
   uVar31 = uVar10 >> 4 & _UNK_0018120c | uVar10 << 4 & _UNK_0018121c;
   uVar6 = uVar26 >> 2 & __LC35 | uVar26 << 2 & __LC36;
   uVar10 = uVar30 >> 2 & _UNK_00181224 | uVar30 << 2 & _UNK_00181234;
   uVar26 = uVar28 >> 2 & _UNK_00181228 | uVar28 << 2 & _UNK_00181238;
   uVar28 = uVar31 >> 2 & _UNK_0018122c | uVar31 << 2 & _UNK_0018123c;
   auVar27._0_4_ = uVar6 << 1;
   auVar27._4_4_ = uVar10 << 1;
   auVar27._8_4_ = uVar26 << 1;
   auVar27._12_4_ = uVar28 << 1;
   auVar29._0_4_ = uVar6 >> 1;
   auVar29._4_4_ = uVar10 >> 1;
   auVar29._8_4_ = uVar26 >> 1;
   auVar29._12_4_ = uVar28 >> 1;
   local_78 = ( uint128[16] )(auVar27 & __LC38 | auVar29 & __LC37);
   if (( _local_88 & (undefined1[16])0xf ) != (undefined1[16])0x0) {
      if (( _local_88 & (undefined1[16])0x3 ) == (undefined1[16])0x0) {
         if (( ( ~(uint)(uVar7 >> 6) & 7 ) != 0 ) || ( ( ~(uint)(uVar7 >> 2) & 0xf ) == 0 )) {
            if (( uVar12 & 0x1ff ) == 0x1fc) goto LAB_0010a2d0;
            uVar11 = ( uint )(uVar7 >> 7) & 3;
            if (( uVar7 >> 7 & 3 ) == 0) {
               bVar5 = 2;
               bVar17 = 2;
               bVar20 = 0;
               bVar19 = 3;
               local_a0 = 5;
               uVar6 = 2;
               uVar11 = 0xc;
            }
 else if (uVar11 == 1) {
               bVar5 = 0;
               bVar17 = 2;
               bVar19 = 3;
               bVar20 = 2;
               local_a0 = 6;
               uVar6 = 0xc;
               uVar11 = 2;
            }
 else {
               uVar6 = ( uint )(uVar7 >> 5) & 0xf;
               if (uVar6 == 0xc) {
                  bVar5 = 0;
                  bVar17 = 2;
                  bVar20 = 0;
                  bVar19 = 3;
                  local_a0 = 7;
                  uVar6 = 10;
                  uVar11 = 6;
               }
 else {
                  if (uVar6 != 0xd) {
                     if (uVar11 == 2) {
                        bVar5 = 2;
                        bVar8 = 4;
                        uVar10 = 0;
                        bVar17 = 2;
                        local_a0 = 9;
                        bVar20 = 2;
                        uVar11 = 6;
                        uVar6 = 6;
                        bVar19 = 3;
                        goto LAB_00109df3;
                     }

                     goto LAB_00109e18;
                  }

                  bVar5 = 0;
                  bVar17 = 2;
                  bVar20 = 0;
                  bVar19 = 3;
                  local_a0 = 8;
                  uVar6 = 6;
                  uVar11 = 10;
               }

            }

            LAB_00109dbc:bVar8 = 4;
            bVar23 = 9;
            bVar22 = 10;
            LAB_00109dcc:if ((char)bVar23 < '@') {
               uVar10 = ( uint )(uVar7 >> ( bVar23 & 0x3f ));
               if (bVar23 != 0) {
                  uVar10 = uVar10 | ( uint )(uStack_80 << ( 0x40 - bVar23 & 0x3f ));
               }

            }
 else {
               uVar10 = ( uint )(uStack_80 >> ( bVar23 - 0x40 & 0x3f ));
            }

            uVar10 = uVar10 & 1;
            if (-1 < (char)bVar22) goto LAB_00109ec4;
            LAB_00109df3:lVar2 = (log_astc_block)0x0;
            LAB_00109ee9:if (bVar20 != 0) {
               bVar23 = s_dec_rows[(long)(int)local_a0 * 0xb + 2];
               uVar24 = uVar7;
               if (-1 < (char)bVar23) {
                  if ((char)bVar23 < '@') {
                     uVar24 = uVar7 >> ( bVar23 & 0x3f );
                     if (bVar23 != 0) {
                        uVar24 = uVar24 | uStack_80 << ( 0x40 - bVar23 & 0x3f );
                     }

                  }
 else {
                     uVar24 = uStack_80 >> ( bVar23 - 0x40 & 0x3f );
                  }

               }

               uVar26 = (uint)uVar24;
               if (bVar20 != 0x40) {
                  uVar26 = uVar26 & ~(uint)(-1L << (bVar20 & 0x3f));
               }

               uVar11 = uVar11 + uVar26;
            }

            if (bVar5 != 0) {
               bVar20 = s_dec_rows[(long)(int)local_a0 * 0xb + 4];
               uVar24 = uVar7;
               if (-1 < (char)bVar20) {
                  if ((char)bVar20 < '@') {
                     uVar24 = uVar7 >> ( bVar20 & 0x3f );
                     if (bVar20 != 0) {
                        uVar24 = uVar24 | uStack_80 << ( 0x40 - bVar20 & 0x3f );
                     }

                  }
 else {
                     uVar24 = uStack_80 >> ( bVar20 - 0x40 & 0x3f );
                  }

               }

               uVar26 = (uint)uVar24;
               if (bVar5 != 0x40) {
                  uVar26 = uVar26 & ~(uint)(-1L << (bVar5 & 0x3f));
               }

               uVar6 = uVar6 + uVar26;
            }

            uVar24 = uVar7;
            if (-1 < (char)bVar8) {
               if ((char)bVar8 < '@') {
                  uVar24 = uVar7 >> ( bVar8 & 0x3f );
                  if (bVar8 != 0) {
                     uVar24 = uVar24 | uStack_80 << ( 0x40 - bVar8 & 0x3f );
                  }

               }
 else {
                  uVar24 = uStack_80 >> ( bVar8 - 0x40 & 0x3f );
               }

            }

            uVar21 = uVar7;
            if (-1 < (char)bVar17) {
               if ((char)bVar17 < '@') {
                  uVar21 = uVar7 >> ( bVar17 & 0x3f );
                  if (bVar17 != 0) {
                     uVar21 = uVar21 | uStack_80 << ( 0x40 - bVar17 & 0x3f );
                  }

               }
 else {
                  uVar21 = uStack_80 >> ( bVar17 - 0x40 & 0x3f );
               }

            }

            uVar18 = uVar7;
            if (-1 < (char)bVar19) {
               if ((char)bVar19 < '@') {
                  uVar18 = uVar7 >> ( bVar19 & 0x3f );
                  if (bVar19 != 0) {
                     uVar18 = uVar18 | uStack_80 << ( 0x40 - bVar19 & 0x3f );
                  }

               }
 else {
                  uVar18 = uStack_80 >> ( bVar19 - 0x40 & 0x3f );
               }

            }

            uVar26 = ( (uint)uVar21 & 1 ) * 2 | (uint)uVar24 & 1 | ( (uint)uVar18 & 1 ) << 2;
            if (1 < uVar26) {
               *(uint*)( param_2 + 0xc ) = uVar11;
               *(uint*)( param_2 + 0x10 ) = uVar6;
               param_2[0x14] = lVar2;
               iVar14 = ( uVar26 - 2 ) + ( -uVar10 & 6 );
               *(int*)( param_2 + 0x18 ) = iVar14;
               if (( uVar11 <= param_3 ) && ( uVar6 <= param_4 )) {
                  uVar11 = uVar11 * uVar6 * ( (byte)lVar2 + 1 );
                  lVar16 = (long)iVar14 * 3;
                  if (( uVar11 - 1 < 0x40 ) && ( iVar14 = (int)( (int)(char)( &DAT_0017fe22 )[lVar16] * uVar11 * 7 + 2 ) / 3 + (int)( (int)(char)( &DAT_0017fe21 )[lVar16] * uVar11 * 8 + 4 ) / 5 + (int)(char)( &g_ise_range_table )[lVar16] * uVar11 ),iVar14 - 0x18U < 0x49) {
                     uVar6 = ( ( uint )(uVar7 >> 0xb) & 3 ) + 1;
                     *(uint*)( param_2 + 0x24 ) = uVar6;
                     if (uVar6 == 1) {
                        iVar15 = 0;
                        *(uint*)( param_2 + 0x2c ) = ( uint )(uVar7 >> 0xd) & 0xf;
                        if (lVar2 != (log_astc_block)0x0) {
                           LAB_0010a620:iVar15 = 2;
                           LAB_0010a626:uVar12 = ( 0x80 - iVar14 ) - iVar15;
                           bVar5 = (byte)uVar12;
                           if (uVar12 < 0x40) {
                              uVar12 = ( uint )(uStack_80 << ( 0x40 - bVar5 & 0x3f )) | ( uint )(uVar7 >> ( bVar5 & 0x3f ));
                           }
 else {
                              uVar12 = ( uint )(uStack_80 >> ( bVar5 - 0x40 & 0x3f ));
                           }

                           *(uint*)( param_2 + 0x20 ) = uVar12 & 3;
                           if (uVar6 != 1) {
                              LAB_0010a647:iVar14 = ( 99 - iVar14 ) - iVar15;
                              if (iVar14 < 0) goto LAB_00109e18;
                              goto LAB_0010a177;
                           }

                        }

                        uVar6 = 0x11;
                        iVar14 = ( 0x6f - iVar14 ) - iVar15;
                        uVar12 = ( *(uint*)( param_2 + 0x2c ) >> 2 ) * 2 + 2;
                     }
 else {
                        if (( uVar6 == 4 ) && ( lVar2 != (log_astc_block)0x0 )) goto LAB_00109e18;
                        uVar10 = ( uint )(uVar7 >> 0x17);
                        *(uint*)( param_2 + 0x28 ) = ( uint )(uVar7 >> 0xd) & 0x3ff;
                        uVar26 = ( uVar10 & 0x3f ) >> 2;
                        if (( uVar7 >> 0x17 & 3 ) != 0) {
                           lVar16 = 0;
                           local_68 = (undefined1[16])0x0;
                           local_58 = (undefined1[16])0x0;
                           do {
                              uVar28 = uVar26 >> 1;
                              *(uint*)( local_68 + lVar16 * 4 ) = uVar26 & 1;
                              lVar16 = lVar16 + 1;
                              uVar26 = uVar28;
                           }
 while ( (uint)lVar16 < uVar6 );
                           iVar15 = uVar6 * 3 + -4;
                           uVar26 = ( 0x80 - iVar14 ) - iVar15;
                           bVar5 = (byte)uVar26;
                           if (uVar6 == 3) {
                              if (uVar26 < 0x40) {
                                 uVar12 = ( ( ( uint )(uVar7 >> ( bVar5 & 0x3f )) | ( uint )(uStack_80 << ( 0x40 - bVar5 & 0x3f )) ) & 1 ) * 2 | uVar28 & 1;
                                 if (uVar26 == 0x3f) goto LAB_0010a7f6;
                                 local_58._0_8_ = CONCAT44(( uint )(uVar7 >> ( bVar5 + 1 & 0x3f )) | ( uint )(uStack_80 << ( 0x40 - ( bVar5 + 1 ) & 0x3f )), uVar12) & 0x3ffffffff;
                                 if (0x3f < uVar26 + 3) goto LAB_0010a80a;
                                 bVar5 = ( byte )(uVar26 + 3);
                                 uVar12 = ( uint )(uVar7 >> ( bVar5 & 0x3f )) | ( uint )(uStack_80 << ( 0x40 - bVar5 & 0x3f ));
                              }
 else {
                                 uVar12 = ( ( uint )(uStack_80 >> ( bVar5 - 0x40 & 0x3f )) & 1 ) * 2 | uVar28 & 1;
                                 LAB_0010a7f6:local_58._0_8_ = CONCAT44((int)( uStack_80 >> ( bVar5 - 0x3f & 0x3f ) ), uVar12) & 0x3ffffffff;
                                 LAB_0010a80a:uVar12 = ( uint )(uStack_80 >> ( bVar5 - 0x3d & 0x3f ));
                              }

                              local_58._8_4_ = uVar12 & 3;
                           }
 else if (uVar6 == 4) {
                              puVar25 = (uint*)local_58;
                              local_a0 = uVar12 & 3;
                              do {
                                 uVar12 = local_a0;
                                 if (-1 < (int)uVar26) {
                                    bVar5 = (byte)uVar26;
                                    if ((int)uVar26 < 0x40) {
                                       uVar12 = ( uint )(uVar7 >> ( bVar5 & 0x3f ));
                                       if (uVar26 == 0) {
                                          uVar12 = uVar12 & 3;
                                       }
 else {
                                          uVar12 = ( ( uint )(uStack_80 << ( 0x40 - bVar5 & 0x3f )) | uVar12 ) & 3;
                                       }

                                    }
 else {
                                       uVar12 = 0;
                                       if ((int)uVar26 < 0x80) {
                                          uVar12 = ( uint )(uStack_80 >> ( bVar5 - 0x40 & 0x3f )) & 3;
                                       }

                                    }

                                 }

                                 *puVar25 = uVar12;
                                 puVar25 = puVar25 + 1;
                                 uVar26 = uVar26 + 2;
                              }
 while ( puVar25 != local_48 );
                           }
 else {
                              if (uVar26 < 0x40) {
                                 uVar12 = ( uint )(uVar7 >> ( bVar5 & 0x3f )) | ( uint )(uStack_80 << ( 0x40 - bVar5 & 0x3f ));
                              }
 else {
                                 uVar12 = ( uint )(uStack_80 >> ( bVar5 - 0x40 & 0x3f ));
                              }

                              local_58._0_8_ = CONCAT44(uVar12, uVar28) & 0x300000003;
                           }

                           lVar16 = 0;
                           do {
                              *(uint*)( param_2 + lVar16 * 4 + 0x2c ) = *(int*)( local_58 + lVar16 * 4 ) + ( *(int*)( local_68 + lVar16 * 4 ) + ( ( uVar10 & 3 ) - 1 ) ) * 4;
                              lVar16 = lVar16 + 1;
                           }
 while ( (uint)lVar16 < uVar6 );
                           if (lVar2 != (log_astc_block)0x0) {
                              iVar15 = uVar6 * 3 + -2;
                              goto LAB_0010a626;
                           }

                           goto LAB_0010a647;
                        }

                        lVar16 = 0;
                        do {
                           *(uint*)( param_2 + lVar16 * 4 + 0x2c ) = uVar26;
                           lVar16 = lVar16 + 1;
                        }
 while ( (uint)lVar16 < uVar6 );
                        if (lVar2 != (log_astc_block)0x0) goto LAB_0010a620;
                        iVar14 = 99 - iVar14;
                        LAB_0010a177:lVar16 = 0;
                        uVar12 = 0;
                        do {
                           lVar1 = lVar16 * 4;
                           lVar16 = lVar16 + 1;
                           uVar12 = uVar12 + 2 + ( *(uint*)( param_2 + lVar1 + 0x2c ) >> 2 ) * 2;
                        }
 while ( (uint)lVar16 < uVar6 );
                        uVar6 = 0x1d;
                     }

                     if (uVar12 < 0x13) {
                        pcVar9 = "\b";
                        uVar10 = 0x14;
                        do {
                           if ((int)( (int)( (int)pcVar9[2] * uVar12 * 7 + 2 ) / 3 + (int)( (int)pcVar9[1] * uVar12 * 8 + 4 ) / 5 + (int)*pcVar9 * uVar12 ) <= iVar14) {
                              if (3 < (int)uVar10) {
                                 *(uint*)( param_2 + 0x1c ) = uVar10;
                                 decode_bise(uVar10, (uchar*)( param_2 + 0x7c ), uVar12, local_88, uVar6);
                                 decode_bise(*(uint*)( param_2 + 0x18 ), (uchar*)( param_2 + 0x3c ), uVar11, local_78, 0);
                                 goto LAB_0010a379;
                              }

                              break;
                           }

                           pcVar9 = pcVar9 + -3;
                           uVar10 = uVar10 - 1;
                        }
 while ( uVar10 != 0 );
                     }

                  }

               }

            }

         }

      }
 else {
         if (( uVar12 & 0x1ff ) != 0x1fc) {
            local_a0 = ( uint )(uVar7 >> 2);
            uVar24 = ( ulong )(local_a0 & 3);
            if (uVar24 == 3) {
               if (( _local_88 & (undefined1[16])0x100 ) == (undefined1[16])0x0) {
                  bVar5 = 1;
                  bVar17 = 0;
                  bVar19 = 1;
                  bVar20 = 2;
                  local_a0 = 3;
                  uVar6 = 6;
                  uVar11 = 2;
               }
 else {
                  if (( _local_88 & (undefined1[16])0x100 ) == (undefined1[16])0x0) goto LAB_00109e18;
                  bVar5 = 2;
                  bVar17 = 0;
                  bVar19 = 1;
                  bVar20 = 1;
                  local_a0 = 4;
                  uVar6 = 2;
                  uVar11 = 2;
               }

               goto LAB_00109dbc;
            }

            local_a0 = local_a0 & 3;
            lVar16 = uVar24 * 0xb;
            bVar5 = s_dec_rows[lVar16 + 5];
            bVar23 = s_dec_rows[lVar16 + 1];
            uVar11 = (uint)(char)s_dec_rows[lVar16 + 6];
            uVar6 = (uint)(char)s_dec_rows[lVar16 + 7];
            bVar22 = s_dec_rows[lVar16];
            bVar20 = s_dec_rows[lVar16 + 3];
            bVar19 = s_dec_rows[lVar16 + 10];
            bVar17 = s_dec_rows[lVar16 + 9];
            bVar8 = s_dec_rows[lVar16 + 8];
            if (-1 < (char)bVar23) goto LAB_00109dcc;
            uVar10 = 0;
            if ((char)bVar22 < '\0') goto LAB_00109df3;
            LAB_00109ec4:if ((char)bVar22 < '@') {
               bVar23 = ( byte )(uVar7 >> ( bVar22 & 0x3f ));
               if (bVar22 != 0) {
                  bVar23 = bVar23 | ( byte )(uStack_80 << ( 0x40 - bVar22 & 0x3f ));
               }

            }
 else {
               bVar23 = ( byte )(uStack_80 >> ( bVar22 - 0x40 & 0x3f ));
            }

            lVar2 = ( log_astc_block )(bVar23 & 1);
            goto LAB_00109ee9;
         }

         LAB_0010a2d0:if (( ~(uint)(uVar7 >> 10) & 3 ) == 0) {
            uVar12 = ( uint )(uVar7 >> 0xc) & 0x1fff;
            uVar6 = ( uint )(uVar7 >> 0x19) & 0x1fff;
            uVar10 = uVar11 >> 6 & 0x1fff;
            if (( uVar12 == 0x1fff ) && ( uVar6 == 0x1fff )) {
               if (( uVar10 == 0x1fff ) && ( uVar7 >> 0x33 == 0x1fff )) {
                  LAB_0010a349:if (( _local_88 & (undefined1[16])0x200 ) == (undefined1[16])0x0) {
                     param_2[1] = (log_astc_block)0x1;
                     *(ulong*)( param_2 + 4 ) = uStack_80;
                  }
 else {
                     param_2[2] = (log_astc_block)0x1;
                     plVar3 = param_2 + 4;
                     *(ulong*)( param_2 + 4 ) = uStack_80;
                     do {
                        if (( ~(byte)((ushort)*(undefined2 *)plVar3 >> 8) & 0x7c ) == 0) goto LAB_00109e18;
                        plVar3 = plVar3 + 2;
                     }
 while ( plVar3 != param_2 + 0xc );
                  }

                  LAB_0010a379:*param_2 = (log_astc_block)0x0;
                  uVar4 = 1;
                  goto LAB_00109e1a;
               }

            }
 else if (( uVar12 < uVar6 ) && ( uVar10<uVar11> > 0x13 )) goto LAB_0010a349;
         }

      }

   }

   LAB_00109e18:uVar4 = 0;
   LAB_00109e1a:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
}
/* basisu::enable_debug_printf(bool) */void basisu::enable_debug_printf(bool param_1) {
   g_debug_printf = param_1;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* basisu::debug_printf(char const*, ...) */void basisu::debug_printf(char *param_1, ...) {
   char in_AL;
   undefined8 in_RCX;
   undefined8 in_RDX;
   undefined8 in_RSI;
   undefined8 in_R8;
   undefined8 in_R9;
   long in_FS_OFFSET;
   undefined8 in_XMM0_Qa;
   undefined8 in_XMM1_Qa;
   undefined8 in_XMM2_Qa;
   undefined8 in_XMM3_Qa;
   undefined8 in_XMM4_Qa;
   undefined8 in_XMM5_Qa;
   undefined8 in_XMM6_Qa;
   undefined8 in_XMM7_Qa;
   undefined4 local_d8;
   undefined4 local_d4;
   undefined1 *local_d0;
   undefined1 *local_c8;
   long local_c0;
   undefined1 local_b8[8];
   undefined8 local_b0;
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_68;
   undefined8 local_58;
   undefined8 local_48;
   undefined8 local_38;
   undefined8 local_28;
   undefined8 local_18;
   if (in_AL != '\0') {
      local_88 = in_XMM0_Qa;
      local_78 = in_XMM1_Qa;
      local_68 = in_XMM2_Qa;
      local_58 = in_XMM3_Qa;
      local_48 = in_XMM4_Qa;
      local_38 = in_XMM5_Qa;
      local_28 = in_XMM6_Qa;
      local_18 = in_XMM7_Qa;
   }

   local_c0 = *(long*)( in_FS_OFFSET + 0x28 );
   local_b0 = in_RSI;
   local_a8 = in_RDX;
   local_a0 = in_RCX;
   local_98 = in_R8;
   local_90 = in_R9;
   if (g_debug_printf != '\0') {
      local_d0 = &stack0x00000008;
      local_c8 = local_b8;
      local_d8 = 8;
      local_d4 = 0x30;
      __vfprintf_chk(_stdout, 2, param_1, &local_d8);
   }

   if (local_c0 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* basist::get_debug_flags() */undefined8 basist::get_debug_flags(void) {
   return 0;
}
/* basist::set_debug_flags(unsigned int) */void basist::set_debug_flags(uint param_1) {
   return;
}
/* basist::crc16(void const*, unsigned long, unsigned short) */ulong basist::crc16(void *param_1, ulong param_2, ushort param_3) {
   byte bVar1;
   undefined2 uVar2;
   uint uVar3;
   uint uVar4;
   undefined6 in_register_00000012;
   byte *pbVar5;
   uVar3 = ~(uint)CONCAT62(in_register_00000012,param_3);
   if (param_2 != 0) {
      pbVar5 = (byte*)( param_2 + (long)param_1 );
      do {
         /* WARNING: Load size is inaccurate */
         bVar1 = *param_1;
         param_1 = (void*)( (long)param_1 + 1 );
         uVar2 = ( undefined2 )(uVar3 >> 0x10);
         uVar4 = (uint)bVar1 ^ CONCAT22(uVar2, (ushort)uVar3 >> 8);
         uVar4 = CONCAT22(uVar2, (ushort)uVar4 >> 4) ^ uVar4;
         uVar3 = uVar3 << 8 ^ uVar4 ^ uVar4 << 5 ^ uVar4 << 0xc;
      }
 while ( (byte*)param_1 != pbVar5 );
      return (ulong)~uVar3;
   }

   return CONCAT62(in_register_00000012, param_3) & 0xffffffff;
}
/* basist::basisu_lowlevel_etc1s_transcoder::basisu_lowlevel_etc1s_transcoder() */void basist::basisu_lowlevel_etc1s_transcoder::basisu_lowlevel_etc1s_transcoder(basisu_lowlevel_etc1s_transcoder *this) {
   basisu_lowlevel_etc1s_transcoder *pbVar1;
   basisu_lowlevel_etc1s_transcoder *pbVar2;
   for (int i = 0; i < 27; i++) {
      *(undefined8*)( this + ( 8*i + 16 ) ) = 0;
   }

   *(undefined4*)( this + 0xe8 ) = 0;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 8*i + 240 ) ) = 0;
   }

   *(undefined1(*) [16])this = (undefined1[16])0x0;
   *(undefined8*)( this + 0x108 ) = 0;
   pbVar1 = this + 0x118;
   do {
      *(undefined8*)( pbVar1 + -8 ) = 0;
      pbVar2 = pbVar1 + 0x40;
      for (int i = 0; i < 3; i++) {
         *(undefined8*)( pbVar1 + ( 16*i + 8 ) ) = 0;
      }

      *(undefined8*)pbVar1 = 0;
      for (int i = 0; i < 3; i++) {
         *(undefined8*)( pbVar1 + ( 16*i + 16 ) ) = 0;
      }

      pbVar1 = pbVar2;
   }
 while ( this + 0x218 != pbVar2 );
   pbVar1 = this + 0x218;
   do {
      *(undefined8*)( pbVar1 + -8 ) = 0;
      pbVar2 = pbVar1 + 0x40;
      for (int i = 0; i < 3; i++) {
         *(undefined8*)( pbVar1 + ( 16*i + 8 ) ) = 0;
      }

      *(undefined8*)pbVar1 = 0;
      for (int i = 0; i < 3; i++) {
         *(undefined8*)( pbVar1 + ( 16*i + 16 ) ) = 0;
      }

      pbVar1 = pbVar2;
   }
 while ( pbVar2 != this + 0x318 );
   return;
}
/* basist::basisu_lowlevel_etc1s_transcoder::decode_palettes(unsigned int, unsigned char const*,
   unsigned int, unsigned int, unsigned char const*, unsigned int) */undefined8 basist::basisu_lowlevel_etc1s_transcoder::decode_palettes(basisu_lowlevel_etc1s_transcoder *this, uint param_1, uchar *param_2, uint param_3, uint param_4, uchar *param_5, uint param_6) {
   undefined8 uVar1;
   if (*(long*)this != 0) {
      return 0;
   }

   uVar1 = decode_palettes(this, param_1, param_2, param_3, param_4, param_5, param_6);
   return uVar1;
}
/* basist::basisu_lowlevel_etc1s_transcoder::decode_tables(unsigned char const*, unsigned int) */undefined8 basist::basisu_lowlevel_etc1s_transcoder::decode_tables(basisu_lowlevel_etc1s_transcoder *this, uchar *param_1, uint param_2) {
   byte bVar1;
   char cVar2;
   byte *pbVar3;
   undefined8 uVar4;
   uint uVar5;
   uint uVar6;
   long in_FS_OFFSET;
   uint local_48[2];
   undefined1 local_40[16];
   byte *local_30;
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = (undefined1[16])0x0;
   local_30 = (byte*)0x0;
   local_28 = 0;
   if (( param_1 != (uchar*)0x0 ) || ( param_2 == 0 )) {
      local_30 = param_1 + param_2;
      local_40._8_8_ = param_1;
      local_40._0_8_ = param_1;
      local_48[0] = param_2;
      cVar2 = bitwise_decoder::read_huffman_table((bitwise_decoder*)local_48, (huffman_decoding_table*)( this + 0x28 ));
      if (( cVar2 != '\0' ) && ( *(int*)( this + 0x30 ) != 0 )) {
         cVar2 = bitwise_decoder::read_huffman_table((bitwise_decoder*)local_48, (huffman_decoding_table*)( this + 0x58 ));
         if (( cVar2 != '\0' ) && ( *(int*)( this + 0x60 ) != 0 )) {
            cVar2 = bitwise_decoder::read_huffman_table((bitwise_decoder*)local_48, (huffman_decoding_table*)( this + 0x88 ));
            if (( cVar2 != '\0' ) && ( *(int*)( this + 0x90 ) != 0 )) {
               cVar2 = bitwise_decoder::read_huffman_table((bitwise_decoder*)local_48, (huffman_decoding_table*)( this + 0xb8 ));
               if (( cVar2 != '\0' ) && ( pbVar3 = (byte*)( ulong ) * (uint*)( this + 0xc0 ) * (uint*)( this + 0xc0 ) != 0 )) {
                  uVar6 = (uint)local_28;
                  if (local_28._4_4_ < 0xd) {
                     pbVar3 = (byte*)local_40._0_8_;
                     uVar5 = local_28._4_4_;
                     if (local_30 <= (ulong)local_40._0_8_) goto LAB_0010ad9b;
                     do {
                        bVar1 = *pbVar3;
                        pbVar3 = pbVar3 + 1;
                        uVar6 = uVar6 | (uint)bVar1 << ( (byte)uVar5 & 0x1f );
                        LAB_0010ad9b:uVar5 = uVar5 + 8;
                     }
 while ( ( uVar5 < 0xd ) && ( pbVar3 < local_30 ) );
                  }

                  *(uint*)( this + 0xe8 ) = uVar6 & 0x1fff;
                  uVar4 = CONCAT71(( int7 )((ulong)pbVar3 >> 8), ( uVar6 & 0x1fff ) != 0);
                  goto LAB_0010acc3;
               }

            }

         }

      }

   }

   uVar4 = 0;
   LAB_0010acc3:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Type propagation algorithm not settling *//* basist::basisu_lowlevel_etc1s_transcoder::transcode_slice(void*, unsigned int, unsigned int,
   unsigned char const*, unsigned int, basist::block_format, unsigned int, bool, bool, bool,
   unsigned int, unsigned int, unsigned int, unsigned int, basist::basisu_transcoder_state*, bool,
   void*, unsigned int) */byte basist::basisu_lowlevel_etc1s_transcoder::transcode_slice(basisu_lowlevel_etc1s_transcoder *this, long param_1, uint param_2, uint param_3, long param_4, uint param_5, int param_7, int param_8, undefined1 param_9, undefined4 param_10, uint param_11, uint param_12, uint param_13, uint param_14, uint param_15, elemental_vector *param_16, char param_17, undefined8 param_18, uint param_19) {
   endpoint *peVar1;
   byte *pbVar2;
   undefined1 uVar3;
   endpoint eVar4;
   selector sVar5;
   selector sVar6;
   endpoint eVar7;
   selector sVar8;
   undefined1 uVar9;
   endpoint eVar10;
   color32 cVar11;
   color32 cVar12;
   byte bVar13;
   selector sVar14;
   ushort uVar15;
   ushort uVar16;
   short sVar17;
   int iVar18;
   int iVar19;
   undefined4 uVar20;
   bool bVar21;
   undefined8 uVar22;
   undefined8 uVar23;
   bool bVar24;
   char cVar25;
   undefined2 uVar26;
   uint uVar27;
   uint uVar28;
   uint uVar29;
   uint uVar30;
   uint uVar31;
   uint uVar32;
   long lVar33;
   basisu_lowlevel_etc1s_transcoder *pbVar34;
   void *__ptr;
   long lVar35;
   ulong uVar36;
   byte *pbVar37;
   byte bVar38;
   sbyte sVar39;
   byte bVar40;
   int iVar41;
   uint uVar42;
   uint uVar43;
   int iVar44;
   long lVar45;
   byte *pbVar46;
   char cVar47;
   char cVar48;
   uint uVar49;
   int iVar50;
   undefined1 *puVar51;
   undefined1 *puVar52;
   byte bVar53;
   color32 *pcVar54;
   color32 *pcVar55;
   byte bVar56;
   uint uVar57;
   uint uVar58;
   uint uVar59;
   byte bVar60;
   uint uVar61;
   ulong uVar62;
   ushort *puVar63;
   ulong uVar64;
   int iVar65;
   selector *psVar66;
   uint *puVar67;
   long lVar68;
   int iVar69;
   ulong uVar70;
   uint uVar71;
   elemental_vector *this_00;
   byte bVar72;
   long in_FS_OFFSET;
   elemental_vector *local_1b0;
   long local_1a0;
   uint local_184;
   uint local_180;
   uint local_17c;
   uint local_170;
   uint local_16c;
   int local_168;
   int local_164;
   uint local_160;
   int local_ec;
   uint *local_e8;
   ulong local_e0;
   uint local_d8;
   uint local_c8[2];
   undefined1 local_c0[16];
   byte *local_b0;
   undefined8 local_a8;
   undefined8 local_a0;
   color32 local_98;
   byte abStack_97[15];
   undefined4 local_88;
   uint local_84;
   uint local_80;
   undefined4 local_7c;
   undefined4 local_78;
   undefined4 local_74;
   undefined4 local_70;
   undefined4 local_6c;
   color32 local_68[10];
   byte abStack_5e[16];
   byte local_4e;
   undefined1 local_4d[13];
   long local_40;
   cVar25 = param_17;
   bVar24 = (bool)param_9;
   bVar72 = g_transcoder_initialized;
   cVar47 = (char)param_10;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (g_transcoder_initialized != 0) {
      this_00 = param_16;
      if (param_16 == (elemental_vector*)0x0) {
         this_00 = (elemental_vector*)( this + 0xf0 );
      }

      uVar58 = param_2 * param_3;
      if (param_15 == 0) {
         if (param_7 - 0x15U < 0xc) {
            param_15 = param_13;
            goto LAB_0010b0b9;
         }

         param_15 = param_13 + 7 >> 3;
         if (param_7 != 0xf) {
            param_15 = param_2;
         }

         LAB_0010aeac:if (cVar47 == '\0') goto LAB_0010b0e0;
         LAB_0010aeb4:if (0xf < param_12) goto LAB_0010b078;
         lVar33 = ( ulong )(param_11 & 0xff) * 0x10;
         lVar68 = (ulong)param_12 + lVar33;
         local_1b0 = this_00 + ( (ulong)param_12 + 2 + lVar33 ) * 0x10;
         uVar27 = *(uint*)( this_00 + lVar68 * 0x10 + 0x28 );
         if (uVar27 < uVar58) {
            if (*(uint*)( this_00 + lVar68 * 0x10 + 0x2c ) < uVar58) {
               basisu::elemental_vector::increase_capacity(local_1b0, uVar58, uVar27 + 1 == uVar58, 4, (_func_void_void_ptr_void_ptr_uint*)0x0, false);
               uVar27 = *(uint*)( this_00 + lVar68 * 0x10 + 0x28 );
            }

            memset((void*)( *(long*)( this_00 + lVar68 * 0x10 + 0x20 ) + (ulong)uVar27 * 4 ), 0, ( ulong )(uVar58 - uVar27) << 2);
            *(uint*)( this_00 + lVar68 * 0x10 + 0x28 ) = uVar58;
         }

      }
 else {
         if (0xb < param_7 - 0x15U) goto LAB_0010aeac;
         LAB_0010b0b9:if (param_19 == 0) {
            param_19 = param_14;
         }

         if (cVar47 != '\0') goto LAB_0010aeb4;
         LAB_0010b0e0:local_1b0 = (elemental_vector*)0x0;
      }

      local_b0 = (byte*)0x0;
      local_a8 = 0;
      local_c0 = (undefined1[16])0x0;
      if (param_4 != 0 || param_5 == 0) {
         pbVar2 = (byte*)( param_4 + (ulong)param_5 );
         uVar27 = *(uint*)( this + 0xe8 );
         local_c0._8_8_ = param_4;
         local_c0._0_8_ = param_4;
         local_e8 = (uint*)0x0;
         local_e0 = 0;
         local_c8[0] = param_5;
         local_b0 = pbVar2;
         if (uVar27 != 0) {
            basisu::elemental_vector::increase_capacity((elemental_vector*)&local_e8, uVar27, uVar27 == 1, 4, (_func_void_void_ptr_void_ptr_uint*)0x0, false);
            memset(local_e8 + ( local_e0 & 0xffffffff ), 0, ( ulong )(uVar27 - (uint)local_e0) << 2);
            local_e0 = CONCAT44(local_e0._4_4_, uVar27);
         }

         local_d8 = uVar27 >> 1;
         __ptr = (void*)0x0;
         local_a0 = 0x2000000;
         if (( param_7 - 6U < 2 ) && ( __ptr = malloc((ulong)uVar58 * 0xc) ),__ptr == (void*)0x0) {
            LAB_0010b060:bVar72 = 0;
         }
 else {
            if (*(uint*)( this_00 + 8 ) < param_2) {
               if (*(uint*)( this_00 + 0xc ) < param_2) {
                  basisu::elemental_vector::increase_capacity(this_00, param_2, *(uint*)( this_00 + 8 ) + 1 == param_2, 4, (_func_void_void_ptr_void_ptr_uint*)0x0, false);
               }

               uVar27 = *(uint*)( this_00 + 0x18 );
               *(uint*)( this_00 + 8 ) = param_2;
               if (param_2 != uVar27) {
                  if (( uVar27 <= param_2 ) && ( *(uint*)( this_00 + 0x1c ) < param_2 )) {
                     basisu::elemental_vector::increase_capacity(this_00 + 0x10, param_2, uVar27 + 1 == param_2, 4, (_func_void_void_ptr_void_ptr_uint*)0x0, false);
                  }

                  *(uint*)( this_00 + 0x18 ) = param_2;
               }

            }

            pbVar34 = *(basisu_lowlevel_etc1s_transcoder**)this;
            if (*(basisu_lowlevel_etc1s_transcoder**)this == (basisu_lowlevel_etc1s_transcoder*)0x0) {
               pbVar34 = this;
            }

            if (( *(int*)( pbVar34 + 0x10 ) == 0 ) || ( iVar18 = iVar18 == 0 )) goto LAB_0010b060;
            iVar19 = *(int*)( this + 0xe8 );
            if (param_3 != 0) {
               uVar49 = 0;
               local_184 = 0;
               iVar69 = 0;
               uVar43 = 0;
               uVar71 = 0;
               iVar41 = param_8 * param_15;
               local_168 = 0;
               local_160 = 0;
               local_164 = 0;
               uVar27 = 0;
               do {
                  uVar28 = local_184 & 1;
                  if (param_2 != 0) {
                     local_170 = iVar69 * 4;
                     local_1a0 = 0;
                     local_16c = param_15;
                     uVar29 = 0;
                     uVar36 = (ulong)uVar43;
                     uVar30 = uVar71;
                     local_180 = uVar49;
                     local_17c = uVar27;
                     do {
                        if (( uVar29 & 1 ) == 0) {
                           if (uVar28 == 0) {
                              if (local_168 == 0) {
                                 if (local_a8._4_4_ < 0x10) {
                                    bVar53 = 0;
                                    pbVar37 = (byte*)local_c0._0_8_;
                                    uVar43 = local_a8._4_4_;
                                    do {
                                       if (pbVar37 < pbVar2) {
                                          bVar53 = *pbVar37;
                                          pbVar37 = pbVar37 + 1;
                                          local_a8._0_4_ = (uint)local_a8 | (uint)bVar53 << ( (byte)uVar43 & 0x1f );
                                          bVar53 = bVar72;
                                       }

                                       uVar43 = uVar43 + 8;
                                    }
 while ( uVar43 < 0x10 );
                                    local_a8._4_4_ = local_a8._4_4_ + 8 + ( 0xf - local_a8._4_4_ & 0xfffffff8 );
                                    if (bVar53 != 0) {
                                       local_c0._0_8_ = pbVar37;
                                    }

                                 }

                                 uVar43 = *(uint*)( *(long*)( this + 0x38 ) + ( ulong )((uint)local_a8 & 0x3ff) * 4 );
                                 if ((int)uVar43 < 0) {
                                    uVar71 = uVar43;
                                    iVar50 = 10;
                                    do {
                                       iVar65 = iVar50 + 1;
                                       sVar17 = *(short*)( *(long*)( this + 0x48 ) + ( ulong )(( ( (uint)local_a8 >> ( (byte)iVar50 & 0x1f ) & 1 ) - 1 ) - uVar71) * 2 );
                                       uVar71 = (uint)sVar17;
                                       iVar50 = iVar65;
                                    }
 while ( sVar17 < 0 );
                                 }
 else {
                                    uVar71 = uVar43 & 0xffff;
                                    iVar65 = (int)uVar43 >> 0x10;
                                 }

                                 local_a8 = CONCAT44(local_a8._4_4_ - iVar65, (uint)local_a8 >> ( (byte)iVar65 & 0x1f ));
                                 if (uVar71 == 0x100) {
                                    local_168 = bitwise_decoder::decode_vlc((bitwise_decoder*)local_c8, 4);
                                    local_168 = local_168 + 2;
                                    uVar71 = local_160;
                                 }

                              }
 else {
                                 local_168 = local_168 + -1;
                                 uVar71 = local_160;
                              }

                              local_160 = uVar71;
                              *(char*)( *(long*)( this_00 + 0x10 ) + 2 + local_1a0 ) = (char)( local_160 >> 4 );
                              uVar30 = local_160;
                           }
 else {
                              uVar30 = ( uint ) * (byte*)( *(long*)( this_00 + 0x10 ) + 2 + local_1a0 );
                           }

                           uVar71 = uVar30 >> 2;
                           uVar30 = uVar30 & 3;
                           if (uVar30 != 0) goto LAB_0010c868;
                           if (uVar29 != 0) goto LAB_0010b3e0;
                           goto joined_r0x0010cc79;
                        }

                        uVar71 = uVar30 >> 2;
                        uVar30 = uVar30 & 3;
                        if (uVar30 == 0) {
                           LAB_0010b3e0:*(short*)( *(long*)( this_00 + (ulong)uVar28 * 0x10 ) + local_1a0 ) = (short)uVar36;
                           uVar70 = uVar36;
                           if (local_164 == 0) {
                              uVar43 = local_a8._4_4_;
                              if (local_a8._4_4_ < 0x10) {
                                 bVar53 = 0;
                                 pbVar37 = (byte*)local_c0._0_8_;
                                 do {
                                    if (pbVar37 < pbVar2) {
                                       bVar53 = *pbVar37;
                                       pbVar37 = pbVar37 + 1;
                                       local_a8._0_4_ = (uint)local_a8 | (uint)bVar53 << ( (byte)uVar43 & 0x1f );
                                       bVar53 = bVar72;
                                    }

                                    uVar43 = uVar43 + 8;
                                 }
 while ( uVar43 < 0x10 );
                                 uVar43 = local_a8._4_4_ + 8 + ( 0xf - local_a8._4_4_ & 0xfffffff8 );
                                 if (bVar53 != 0) {
                                    local_c0._0_8_ = pbVar37;
                                 }

                              }

                              uVar30 = *(uint*)( *(long*)( this + 0x98 ) + ( ulong )((uint)local_a8 & 0x3ff) * 4 );
                              if ((int)uVar30 < 0) {
                                 iVar50 = 10;
                                 do {
                                    iVar65 = iVar50 + 1;
                                    sVar17 = *(short*)( *(long*)( this + 0xa8 ) + ( ulong )(( ( (uint)local_a8 >> ( (byte)iVar50 & 0x1f ) & 1 ) - 1 ) - uVar30) * 2 );
                                    uVar30 = (uint)sVar17;
                                    iVar50 = iVar65;
                                 }
 while ( sVar17 < 0 );
                              }
 else {
                                 iVar65 = (int)uVar30 >> 0x10;
                                 uVar30 = uVar30 & 0xffff;
                              }

                              local_a8._0_4_ = (uint)local_a8 >> ( (byte)iVar65 & 0x1f );
                              uVar61 = uVar43 - iVar65;
                              local_a8 = CONCAT44(uVar61, (uint)local_a8);
                              if (iVar18 + iVar19 != uVar30) {
                                 if ((int)uVar30 < *(int*)( pbVar34 + 0x20 )) {
                                    if (*(int*)( this + 0xe8 ) != 0) {
                                       uVar43 = local_d8 + 1;
                                       local_e8[local_d8] = uVar30;
                                       local_d8 = uVar43 >> 1;
                                       if (uVar43 != (uint)local_e0) {
                                          local_d8 = uVar43;
                                       }

                                    }

                                 }
 else {
                                    uVar43 = uVar30 - *(int*)( pbVar34 + 0x20 );
                                    if ((int)(uint)local_e0 <= (int)uVar43) goto joined_r0x0010cc79;
                                    uVar30 = local_e8[(int)uVar43];
                                    if (uVar43 != 0) {
                                       uVar61 = local_e8[uVar43 >> 1];
                                       local_e8[uVar43 >> 1] = uVar30;
                                       local_e8[(int)uVar43] = uVar61;
                                    }

                                 }

                                 goto LAB_0010b424;
                              }

                              if (uVar61 < 0x10) {
                                 bVar53 = 0;
                                 pbVar37 = (byte*)local_c0._0_8_;
                                 uVar30 = uVar61;
                                 do {
                                    if (pbVar37 < pbVar2) {
                                       bVar53 = *pbVar37;
                                       pbVar37 = pbVar37 + 1;
                                       local_a8._0_4_ = (uint)local_a8 | (uint)bVar53 << ( (byte)uVar30 & 0x1f );
                                       bVar53 = bVar72;
                                    }

                                    uVar30 = uVar30 + 8;
                                 }
 while ( uVar30 < 0x10 );
                                 local_a8 = (ulong)(uint)local_a8;
                                 uVar61 = uVar61 + 8 + ( ( iVar65 - uVar43 ) + 0xf & 0xfffffff8 );
                                 if (bVar53 != 0) {
                                    local_c0._0_8_ = pbVar37;
                                 }

                              }

                              uVar43 = *(uint*)( *(long*)( this + 200 ) + ( ulong )((uint)local_a8 & 0x3ff) * 4 );
                              if ((int)uVar43 < 0) {
                                 iVar50 = 10;
                                 do {
                                    iVar65 = iVar50 + 1;
                                    sVar17 = *(short*)( *(long*)( this + 0xd8 ) + ( ulong )(( ( (uint)local_a8 >> ( (byte)iVar50 & 0x1f ) & 1 ) - 1 ) - uVar43) * 2 );
                                    uVar43 = (uint)sVar17;
                                    iVar50 = iVar65;
                                 }
 while ( sVar17 < 0 );
                              }
 else {
                                 iVar65 = (int)uVar43 >> 0x10;
                                 uVar43 = uVar43 & 0xffff;
                              }

                              local_a8 = CONCAT44(uVar61 - iVar65, (uint)local_a8 >> ( (byte)iVar65 & 0x1f ));
                              if (uVar43 == 0x3f) {
                                 uVar43 = bitwise_decoder::decode_vlc((bitwise_decoder*)local_c8, 7);
                              }

                              if (uVar43 + 3 <= uVar58) {
                                 local_164 = uVar43 + 2;
                                 goto LAB_0010b40b;
                              }

                           }
 else {
                              local_164 = local_164 + -1;
                              LAB_0010b40b:if (0 < (int)(uint)local_e0) {
                                 uVar30 = *local_e8;
                                 goto LAB_0010b424;
                              }

                           }

                           joined_r0x0010cc79:if (__ptr != (void*)0x0) {
                              free(__ptr);
                           }

                           goto LAB_0010b060;
                        }

                        LAB_0010c868:if (uVar30 == 1) {
                           if (local_184 == 0) goto joined_r0x0010cc79;
                           uVar36 = ( ulong ) * (ushort*)( *(long*)( this_00 + ( ulong )(uVar28 ^ 1) * 0x10 ) + local_1a0 );
                           goto LAB_0010b3e0;
                        }

                        if (uVar30 != 2) {
                           if (local_a8._4_4_ < 0x10) {
                              bVar53 = 0;
                              pbVar37 = (byte*)local_c0._0_8_;
                              uVar43 = local_a8._4_4_;
                              do {
                                 if (pbVar37 < pbVar2) {
                                    bVar53 = *pbVar37;
                                    pbVar37 = pbVar37 + 1;
                                    local_a8._0_4_ = (uint)local_a8 | (uint)bVar53 << ( (byte)uVar43 & 0x1f );
                                    bVar53 = bVar72;
                                 }

                                 uVar43 = uVar43 + 8;
                              }
 while ( uVar43 < 0x10 );
                              local_a8._4_4_ = local_a8._4_4_ + 8 + ( 0xf - local_a8._4_4_ & 0xfffffff8 );
                              if (bVar53 != 0) {
                                 local_c0._0_8_ = pbVar37;
                              }

                           }

                           uVar43 = *(uint*)( *(long*)( this + 0x68 ) + ( ulong )((uint)local_a8 & 0x3ff) * 4 );
                           if ((int)uVar43 < 0) {
                              iVar50 = 10;
                              do {
                                 iVar65 = iVar50 + 1;
                                 uVar43 = ( uint ) * (short*)( *(long*)( this + 0x78 ) + ( ulong )(( ( (uint)local_a8 >> ( (byte)iVar50 & 0x1f ) & 1 ) - 1 ) - uVar43) * 2 );
                                 iVar50 = iVar65;
                              }
 while ( (int)uVar43 < 0 );
                           }
 else {
                              iVar65 = (int)uVar43 >> 0x10;
                              uVar43 = uVar43 & 0xffff;
                           }

                           uVar43 = (int)uVar36 + uVar43;
                           uVar36 = (ulong)uVar43;
                           local_a8 = CONCAT44(local_a8._4_4_ - iVar65, (uint)local_a8 >> ( (byte)iVar65 & 0x1f ));
                           if (*(uint*)( pbVar34 + 0x10 ) <= uVar43) {
                              uVar36 = ( ulong )(uVar43 - *(uint*)( pbVar34 + 0x10 ));
                           }

                           goto LAB_0010b3e0;
                        }

                        if (cVar47 == '\0') {
                           if (( uVar29 == 0 ) || ( local_184 == 0 )) goto joined_r0x0010cc79;
                           uVar36 = ( ulong ) * (ushort*)( *(long*)( this_00 + ( ulong )(uVar28 ^ 1) * 0x10 ) + ( ulong )(uVar29 - 1) * 4 );
                           goto LAB_0010b3e0;
                        }

                        uVar43 = *(uint*)( *(long*)local_1b0 + (ulong)local_17c * 4 );
                        uVar36 = (ulong)uVar43;
                        *(short*)( *(long*)( this_00 + (ulong)uVar28 * 0x10 ) + local_1a0 ) = (short)uVar43;
                        uVar30 = uVar43 >> 0x10;
                        uVar70 = ( ulong )(uVar43 & 0xffff);
                        LAB_0010b424:uVar23 = local_a0;
                        uVar43 = (uint)uVar70;
                        if (( *(uint*)( pbVar34 + 0x10 ) <= uVar43 ) || ( *(uint*)( pbVar34 + 0x20 ) <= uVar30 )) goto joined_r0x0010cc79;
                        if (cVar47 != '\0') {
                           *(uint*)( *(long*)local_1b0 + (ulong)local_17c * 4 ) = uVar30 << 0x10 | uVar43;
                        }

                        uVar22 = _LC40;
                        lVar68 = *(long*)( pbVar34 + 0x18 );
                        lVar33 = *(long*)( pbVar34 + 8 );
                        peVar1 = (endpoint*)( lVar33 + uVar70 * 8 );
                        psVar66 = (selector*)( (ulong)uVar30 * 0xb + lVar68 );
                        switch (param_7) {
                           case 0:
                  uVar30 = (uint)(byte)peVar1[1];
                  if (0x1f < uVar30) {
                    uVar30 = 0x1f;
                  }
                  uVar61 = (uint)(byte)*peVar1;
                  if (0x1f < uVar61) {
                    uVar61 = 0x1f;
                  }
                  uVar30 = uVar61 << 10 | uVar30 << 5;
                  uVar61 = (uint)(byte)peVar1[2];
                  if (0x1f < uVar61) {
                    uVar61 = 0x1f;
                  }
                  uVar61 = uVar61 | uVar30;
                  bVar53 = (byte)local_a0 & 7;
                  bVar38 = local_a0._1_1_ & 7;
                  local_a0._2_1_ = SUB81(uVar23,2);
                  bVar40 = local_a0._2_1_ & 7;
                  local_a0._3_1_ = SUB81(uVar23,3);
                  local_a0._4_4_ = SUB84(uVar23,4);
                  local_a0._0_4_ =
                       CONCAT13(local_a0._3_1_ & 3 | (char)peVar1[4] << 5 | (char)peVar1[4] << 2,
                                CONCAT12(bVar40 | (byte)(uVar61 << 3),
                                         CONCAT11(bVar38 | (char)((ushort)uVar61 >> 5) << 3,
                                                  bVar53 | ((byte)(uVar30 >> 8) >> 2) << 3)));
                  *(undefined4 *)((ulong)local_180 + param_1) = (undefined4)local_a0;
                  ((undefined4 *)((ulong)local_180 + param_1))[1] = *(undefined4 *)(psVar66 + 4);
                  break;
                           case 2:
                  convert_etc1s_to_dxt1
                            ((dxt1_block *)((ulong)local_180 + param_1),peVar1,psVar66,bVar24);
                  break;
                           case 4:
                  convert_etc1s_to_dxt5a((dxt5a_block *)((ulong)local_180 + param_1),peVar1,psVar66)
                  ;
                  break;
                           case 8:
                           case 9:
                  convert_etc1s_to_bc7_m5_color((void *)((ulong)local_180 + param_1),peVar1,psVar66)
                  ;
                  break;
                           case 10:
                  eVar4 = *peVar1;
                  uVar36 = (ulong)(byte)peVar1[4];
                  uVar30 = (uint)(byte)psVar66[8];
                  lVar33 = param_1 + (ulong)local_180;
                  if (psVar66[10] == (selector)0x1) {
                    uVar30 = ((uint)(byte)eVar4 * 8 | (uint)((byte)eVar4 >> 2)) +
                             (&g_etc1_inten_tables)[(ulong)(byte)psVar66[8] + uVar36 * 4];
                    if (0xff < uVar30) {
                      uVar30 = ~((int)uVar30 >> 0x1f) & 0xff;
                    }
                    *(uint *)(lVar33 + 6) =
                         ((uVar30 >> 6) << 0x10 | (uVar30 & 0x3f) << 10 | uVar30 * 4) & 0x3fffc |
                         *(uint *)(lVar33 + 6) & 0xfffc0003;
                  }
                  else if (psVar66[10] == (selector)0x2) {
                    local_6c = (uint)(byte)peVar1[1] << 3 | (uint)((byte)peVar1[1] >> 2);
                    local_78 = (&g_etc1_inten_tables)[uVar36 * 4] + local_6c;
                    if (0xff < local_78) {
                      local_78 = ~((int)local_78 >> 0x1f) & 0xff;
                    }
                    local_74 = (&DAT_0017f444)[uVar36 * 4] + local_6c;
                    if (0xff < local_74) {
                      local_74 = ~((int)local_74 >> 0x1f) & 0xff;
                    }
                    local_70 = (&DAT_0017f448)[uVar36 * 4] + local_6c;
                    if (0xff < local_70) {
                      local_70 = ~((int)local_70 >> 0x1f) & 0xff;
                    }
                    local_6c = local_6c + (&DAT_0017f44c)[uVar36 * 4];
                    if (0xff < local_6c) {
                      local_6c = ~((int)local_6c >> 0x1f) & 0xff;
                    }
                    lVar68 = 0;
                    bVar53 = 0;
                    uVar42 = 0;
                    uVar61 = (&local_78)[uVar30];
                    uVar59 = 0;
                    uVar31 = (&local_78)[(byte)psVar66[9]];
                    *(uint *)(lVar33 + 6) =
                         (uVar31 & 0xc0) << 10 | (uVar31 & 0x3f) << 10 | uVar61 * 4 & 0x3fc |
                         *(uint *)(lVar33 + 6) & 0xfffc0003;
                    do {
                      uVar57 = (uint)(byte)psVar66[lVar68];
                      iVar50 = 0;
                      bVar38 = bVar53;
                      do {
                        while( true ) {
                          uVar32 = uVar42 ^ 3;
                          if (uVar30 == ((int)uVar57 >> ((char)iVar50 * '\x02' & 0x1fU) & 3U)) {
                            uVar32 = uVar42;
                          }
                          if (iVar50 != 0 || (int)lVar68 != 0) break;
                          if ((uVar32 & 2) != 0) {
                            uVar42 = 3;
                            *(uint *)(lVar33 + 6) =
                                 *(uint *)(lVar33 + 6) & 0xfffc0003 |
                                 (uVar61 & 0x3f) << 10 | (uVar31 & 0xff) << 2 |
                                 (uVar61 & 0xc0) << 10;
                            uVar57 = (uint)(byte)psVar66[lVar68];
                            uVar32 = 0;
                          }
                          iVar50 = 1;
                          uVar59 = uVar59 | uVar32 << (bVar38 & 0x1f);
                          bVar38 = bVar38 + 1;
                        }
                        iVar50 = iVar50 + 1;
                        bVar53 = bVar38 + 2;
                        uVar59 = uVar59 | uVar32 << (bVar38 & 0x1f);
                        bVar38 = bVar53;
                      } while (iVar50 != 4);
                      lVar68 = lVar68 + 1;
                    } while (lVar68 != 4);
                    uVar31 = 0x7fffffff;
                    uVar61 = 0x1f;
                    uVar30 = 0x61;
                    do {
                      uVar42 = 8 - (uVar30 & 7);
                      if (uVar61 < uVar42) {
                        uVar42 = uVar61;
                      }
                      pbVar37 = (byte *)((ulong)(uVar30 >> 3) + lVar33);
                      sVar39 = (sbyte)(uVar30 & 7);
                      iVar50 = uVar31 << sVar39;
                      iVar65 = uVar59 << sVar39;
                      uVar59 = uVar59 >> ((byte)uVar42 & 0x1f);
                      uVar31 = uVar31 >> ((byte)uVar42 & 0x1f);
                      uVar30 = uVar30 + uVar42;
                      *pbVar37 = ~(byte)iVar50 & *pbVar37 | (byte)iVar65;
                      uVar61 = uVar61 - uVar42;
                    } while (uVar61 != 0);
                  }
                  else {
                    lVar45 = 0;
                    bVar40 = 0;
                    lVar68 = (ulong)((uint)(byte)peVar1[4] * 0xc0 +
                                     *(int *)(g_etc1_to_bc7_m5a_selector_range_index +
                                             ((ulong)(byte)psVar66[9] + (ulong)uVar30 * 4) * 4) +
                                    (uint)(byte)eVar4 * 6) * 3;
                    bVar53 = g_etc1_g_to_bc7_m5a[lVar68 + 1];
                    bVar38 = g_etc1_g_to_bc7_m5a[lVar68];
                    uVar61 = (uint)(byte)g_etc1_g_to_bc7_m5a[lVar68 + 2];
                    uVar30 = 0;
                    *(uint *)(lVar33 + 6) =
                         (uint)(bVar53 >> 6) << 0x10 | (bVar53 & 0x3f) << 10 | (uint)bVar38 << 2 |
                         *(uint *)(lVar33 + 6) & 0xfffc0003;
                    do {
                      uVar31 = (uint)(byte)psVar66[lVar45];
                      iVar50 = 0;
                      bVar60 = bVar40;
                      do {
                        while( true ) {
                          uVar42 = uVar61 >> ((byte)((int)uVar31 >> ((char)iVar50 * '\x02' & 0x1fU))
                                             & 3) * '\x02';
                          uVar59 = uVar42 & 3;
                          if (iVar50 != 0 || (int)lVar45 != 0) break;
                          if ((uVar42 & 2) != 0) {
                            uVar61 = uVar61 ^ 0xff;
                            uVar59 = uVar59 ^ 3;
                            *(uint *)(lVar33 + 6) =
                                 *(uint *)(lVar33 + 6) & 0xfffc0003 |
                                 (uint)bVar53 << 2 | (bVar38 & 0x3f) << 10 |
                                 (uint)(bVar38 >> 6) << 0x10;
                            uVar31 = (uint)(byte)psVar66[lVar45];
                          }
                          iVar50 = 1;
                          uVar30 = uVar30 | uVar59 << (bVar60 & 0x1f);
                          bVar60 = bVar60 + 1;
                        }
                        iVar50 = iVar50 + 1;
                        bVar40 = bVar60 + 2;
                        uVar30 = uVar30 | uVar59 << (bVar60 & 0x1f);
                        bVar60 = bVar40;
                      } while (iVar50 != 4);
                      lVar45 = lVar45 + 1;
                    } while (lVar45 != 4);
                    uVar42 = 0x7fffffff;
                    uVar61 = 0x1f;
                    uVar31 = 0x61;
                    do {
                      uVar59 = 8 - (uVar31 & 7);
                      if (uVar61 < uVar59) {
                        uVar59 = uVar61;
                      }
                      pbVar37 = (byte *)((ulong)(uVar31 >> 3) + lVar33);
                      sVar39 = (sbyte)(uVar31 & 7);
                      iVar50 = uVar42 << sVar39;
                      iVar65 = uVar30 << sVar39;
                      uVar30 = uVar30 >> ((byte)uVar59 & 0x1f);
                      uVar42 = uVar42 >> ((byte)uVar59 & 0x1f);
                      uVar31 = uVar31 + uVar59;
                      *pbVar37 = ~(byte)iVar50 & *pbVar37 | (byte)iVar65;
                      uVar61 = uVar61 - uVar59;
                    } while (uVar61 != 0);
                  }
                  break;
                           case 0xb:
                  eVar4 = peVar1[4];
                  sVar8 = psVar66[9];
                  puVar51 = (undefined1 *)(param_1 + (ulong)local_180);
                  sVar5 = psVar66[8];
                  uVar36 = (ulong)(byte)sVar5;
                  if (sVar5 == sVar8) goto LAB_0010d4b1;
                  if (sVar5 == (selector)0x0) {
                    if (sVar8 != (selector)0x3) {
                      uVar36 = (ulong)((uint)(sVar8 == (selector)0x2) * 2);
                    }
                  }
                  else if (sVar5 == (selector)0x1) {
                    if (sVar8 != (selector)0x3) {
                      uVar36 = (ulong)((uint)(sVar8 == (selector)0x2) * 3);
                    }
                  }
                  else {
                    uVar36 = 0;
                  }
                  bVar53 = 0x2d;
                  lVar68 = 0;
                  uVar62 = 0;
                  lVar33 = uVar36 + (ulong)((uint)(byte)*peVar1 + (uint)(byte)eVar4 * 0x20) * 4;
                  uVar15 = *(ushort *)(s_etc1_g_to_etc2_a8 + lVar33 * 4 + 2);
                  *puVar51 = s_etc1_g_to_etc2_a8[lVar33 * 4];
                  puVar51[1] = s_etc1_g_to_etc2_a8[lVar33 * 4 + 1] << 4 |
                               (byte)s_etc1_g_to_etc2_a8[lVar33 * 4 + 1] >> 4;
                  do {
                    iVar50 = 0;
                    bVar38 = bVar53;
                    do {
                      iVar65 = iVar50 + 2;
                      uVar62 = uVar62 | (ulong)((int)(uint)uVar15 >>
                                                ((byte)((int)(uint)(byte)psVar66[lVar68] >>
                                                       ((byte)iVar50 & 0x1f)) & 3) * '\x03' & 7) <<
                                        (bVar38 & 0x3f);
                      iVar50 = iVar65;
                      bVar38 = bVar38 - 0xc;
                    } while (iVar65 != 8);
                    lVar68 = lVar68 + 1;
                    bVar53 = bVar53 - 3;
                  } while (lVar68 != 4);
LAB_0010b56c:
                  uVar30 = (uint)(uVar62 >> 0x20);
                  *(ushort *)(puVar51 + 6) = (ushort)uVar62 << 8 | (ushort)uVar62 >> 8;
                  *(uint *)(puVar51 + 2) =
                       ((((uint)(uVar62 >> 0x10) & 0xff) << 8 | (uint)uVar62 >> 0x18) << 8 |
                       uVar30 & 0xff) << 8 | uVar30 >> 8 & 0xff;
                  break;
                           case 0xc:
                  local_70 = local_70 & 0xffff0000;
                  sVar8 = psVar66[8];
                  puVar67 = (uint *)((ulong)local_180 + param_1);
                  uVar61 = (uint)(byte)peVar1[4];
                  uVar36 = (ulong)uVar61;
                  sVar5 = psVar66[10];
                  uVar30 = (uint)(byte)sVar8;
                  sVar6 = psVar66[9];
                  uVar31 = (uint)(byte)sVar6;
                  if (cVar25 == '\0') {
                    uVar42 = 0xff;
LAB_0010cde8:
                    if (sVar5 == (selector)0x1) {
                      iVar50 = (&g_etc1_inten_tables)[(ulong)(byte)sVar8 + uVar36 * 4];
                      uVar30 = ((uint)(byte)*peVar1 << 3 | (uint)((byte)*peVar1 >> 2)) + iVar50;
                      if (0xff < uVar30) {
                        uVar30 = ~((int)uVar30 >> 0x1f) & 0xff;
                      }
                      uVar61 = ((uint)(byte)peVar1[1] << 3 | (uint)((byte)peVar1[1] >> 2)) + iVar50;
                      if (0xff < uVar61) {
                        uVar61 = ~((int)uVar61 >> 0x1f) & 0xff;
                      }
                      uVar31 = iVar50 + ((uint)(byte)peVar1[2] << 3 | (uint)((byte)peVar1[2] >> 2));
                      if (0xff < uVar31) {
                        uVar31 = ~((int)uVar31 >> 0x1f) & 0xff;
                      }
                      puVar67[0] = 0xfffffdfc;
                      puVar67[1] = 0xffffffff;
                      uVar30 = uVar30 * 0x101;
                      iVar50 = 0x40;
                      puVar67[2] = 0;
                      puVar67[3] = 0;
                      iVar65 = 0x10;
                      do {
                        iVar44 = 8;
                        if (iVar65 < 9) {
                          iVar44 = iVar65;
                        }
                        pbVar37 = (byte *)((long)puVar67 + (long)(iVar50 >> 3));
                        *pbVar37 = *pbVar37 | (byte)uVar30;
                        iVar50 = iVar50 + iVar44;
                        uVar30 = uVar30 >> ((byte)iVar44 & 0x1f);
                        iVar65 = iVar65 - iVar44;
                      } while (iVar65 != 0);
                      uVar61 = uVar61 * 0x101;
                      iVar65 = 0x10;
                      do {
                        iVar44 = 8;
                        if (iVar65 < 9) {
                          iVar44 = iVar65;
                        }
                        pbVar37 = (byte *)((long)puVar67 + (long)(iVar50 >> 3));
                        *pbVar37 = *pbVar37 | (byte)uVar61;
                        iVar50 = iVar50 + iVar44;
                        uVar61 = uVar61 >> ((byte)iVar44 & 0x1f);
                        iVar65 = iVar65 - iVar44;
                      } while (iVar65 != 0);
                      uVar31 = uVar31 * 0x101;
                      iVar65 = 0x10;
                      do {
                        iVar44 = 8;
                        if (iVar65 < 9) {
                          iVar44 = iVar65;
                        }
                        pbVar37 = (byte *)((long)puVar67 + (long)(iVar50 >> 3));
                        *pbVar37 = *pbVar37 | (byte)uVar31;
                        iVar50 = iVar50 + iVar44;
                        uVar31 = uVar31 >> ((byte)iVar44 & 0x1f);
                        iVar65 = iVar65 - iVar44;
                      } while (iVar65 != 0);
                      iVar65 = 0x10;
                      uVar42 = uVar42 << 8 | uVar42;
                      do {
                        iVar44 = 8;
                        if (iVar65 < 9) {
                          iVar44 = iVar65;
                        }
                        pbVar37 = (byte *)((long)puVar67 + (long)(iVar50 >> 3));
                        *pbVar37 = *pbVar37 | (byte)uVar42;
                        iVar50 = iVar50 + iVar44;
                        uVar42 = uVar42 >> ((byte)iVar44 & 0x1f);
                        iVar65 = iVar65 - iVar44;
                      } while (iVar65 != 0);
                    }
                    else {
                      if (2 < (byte)sVar5) {
                        bVar53 = 1;
                        goto LAB_0010ce09;
                      }
LAB_0010d5c9:
                      decoder_etc_block::get_block_colors5
                                (&local_98,(color32 *)(ulong)(byte)*peVar1,(uint)(byte)peVar1[1]);
                      uVar36 = (ulong)uVar31;
                      uVar62 = (ulong)uVar30;
                      bVar53 = abStack_97[uVar62 * 4];
                      bVar38 = abStack_97[uVar36 * 4];
                      cVar11 = (&local_98)[uVar36 * 4];
                      bVar40 = abStack_97[uVar36 * 4 + 1];
                      bVar60 = abStack_97[uVar62 * 4 + 1];
                      cVar12 = (&local_98)[uVar62 * 4];
                      local_78 = CONCAT31(CONCAT21(CONCAT11(bVar38,bVar53),cVar11),cVar12);
                      uVar26 = CONCAT11(bVar40,bVar60);
                      bVar56 = 0;
                      if ((uint)(byte)cVar11 + (uint)bVar38 + (uint)bVar40 <
                          (uint)(byte)cVar12 + (uint)bVar53 + (uint)bVar60) {
                        local_78 = CONCAT31(CONCAT21(CONCAT11(bVar53,bVar38),cVar12),cVar11);
                        uVar26 = CONCAT11(bVar60,bVar40);
                        bVar56 = bVar72;
                      }
                      if (cVar25 == '\0') {
                        local_74 = CONCAT22(0xffff,uVar26);
                        lVar33 = 0;
                        do {
                          *(undefined1 *)((long)&local_70 + lVar33 + 3) = 0;
                          lVar33 = lVar33 + 2;
                        } while (lVar33 != 0x20);
                      }
                      else {
                        lVar33 = lVar33 + (ulong)(ushort)*puVar67 * 8;
                        lVar68 = lVar68 + (ulong)*(ushort *)((long)puVar67 + 2) * 0xb;
                        bVar53 = *(byte *)(lVar33 + 1);
                        bVar38 = *(byte *)(lVar68 + 9);
                        local_7c = (uint)bVar53 << 3 | (uint)(bVar53 >> 2);
                        uVar36 = (ulong)*(byte *)(lVar33 + 4);
                        local_88 = (&g_etc1_inten_tables)[uVar36 * 4] + local_7c;
                        if (0xff < local_88) {
                          local_88 = ~((int)local_88 >> 0x1f) & 0xff;
                        }
                        local_84 = (&DAT_0017f444)[uVar36 * 4] + local_7c;
                        if (0xff < local_84) {
                          local_84 = ~((int)local_84 >> 0x1f) & 0xff;
                        }
                        local_80 = (&DAT_0017f448)[uVar36 * 4] + local_7c;
                        if (0xff < local_80) {
                          local_80 = ~((int)local_80 >> 0x1f) & 0xff;
                        }
                        local_7c = local_7c + (&DAT_0017f44c)[uVar36 * 4];
                        if (0xff < local_7c) {
                          local_7c = ~((int)local_7c >> 0x1f) & 0xff;
                        }
                        lVar33 = 0;
                        local_74._0_3_ = CONCAT12((char)(&local_88)[*(byte *)(lVar68 + 8)],uVar26);
                        local_74 = CONCAT13((char)(&local_88)[bVar38],(undefined3)local_74);
                        do {
                          bVar53 = *(byte *)(lVar68 + lVar33);
                          iVar50 = 0;
                          do {
                            *(bool *)((long)&local_70 +
                                     (ulong)(uint)((int)lVar33 * 8 + 1 + iVar50) + 2) =
                                 ((int)(uint)bVar53 >> ((byte)iVar50 & 0x1f) & 3U) == (uint)bVar38;
                            iVar50 = iVar50 + 2;
                          } while (iVar50 != 8);
                          lVar33 = lVar33 + 1;
                        } while (lVar33 != 4);
                      }
                      lVar33 = 0;
                      do {
                        sVar8 = psVar66[lVar33];
                        iVar50 = 0;
                        do {
                          uVar30 = (int)lVar33 * 8 + iVar50;
                          bVar53 = (byte)iVar50;
                          iVar50 = iVar50 + 2;
                          *(byte *)((long)&local_70 + (ulong)uVar30 + 2) =
                               ((int)(uint)(byte)sVar8 >> (bVar53 & 0x1f) & 3U) == uVar31 ^ bVar56;
                        } while (iVar50 != 8);
                        lVar33 = lVar33 + 1;
                      } while (lVar33 != 4);
                      puVar67[0] = 0x18441;
                      puVar67[1] = 0;
                      uVar30 = 0x11;
                      puVar67[2] = 0xc0000000;
                      puVar67[3] = 0;
                      lVar33 = 0;
                      do {
                        uVar61 = (uint)*(byte *)((long)&local_78 + lVar33);
                        iVar50 = 8;
                        do {
                          iVar65 = 8 - (uVar30 & 7);
                          if (iVar50 < iVar65) {
                            iVar65 = iVar50;
                          }
                          pbVar37 = (byte *)((long)puVar67 + (long)((int)uVar30 >> 3));
                          *pbVar37 = *pbVar37 | (byte)(uVar61 << (sbyte)(uVar30 & 7));
                          uVar30 = uVar30 + iVar65;
                          uVar61 = uVar61 >> ((byte)iVar65 & 0x1f);
                          iVar50 = iVar50 - iVar65;
                        } while (iVar50 != 0);
                        lVar33 = lVar33 + 1;
                      } while (lVar33 != 8);
                      pbVar37 = (byte *)((long)&local_70 + 2);
                      do {
                        bVar53 = *pbVar37;
                        uVar30 = ((int)&param_8 + 1) - (int)pbVar37;
                        pbVar37 = pbVar37 + 1;
                        pbVar46 = (byte *)((long)puVar67 + (ulong)(uVar30 >> 3));
                        *pbVar46 = *pbVar46 | bVar53 << ((byte)uVar30 & 7);
                      } while (&local_4e != pbVar37);
                    }
                  }
                  else {
                    lVar45 = (ulong)*(ushort *)((long)puVar67 + 2) * 0xb + lVar68;
                    bVar53 = *(byte *)(lVar45 + 10);
                    if (bVar53 == 1) {
                      lVar35 = lVar33 + (ulong)(ushort)*puVar67 * 8;
                      bVar53 = *(byte *)(lVar35 + 1);
                      local_7c = (uint)bVar53 << 3 | (uint)(bVar53 >> 2);
                      uVar62 = (ulong)*(byte *)(lVar35 + 4);
                      local_88 = (&g_etc1_inten_tables)[uVar62 * 4] + local_7c;
                      if (0xff < local_88) {
                        local_88 = ~((int)local_88 >> 0x1f) & 0xff;
                      }
                      local_84 = (&DAT_0017f444)[uVar62 * 4] + local_7c;
                      if (0xff < local_84) {
                        local_84 = ~((int)local_84 >> 0x1f) & 0xff;
                      }
                      local_80 = (&DAT_0017f448)[uVar62 * 4] + local_7c;
                      if (0xff < local_80) {
                        local_80 = ~((int)local_80 >> 0x1f) & 0xff;
                      }
                      local_7c = local_7c + (&DAT_0017f44c)[uVar62 * 4];
                      if (0xff < local_7c) {
                        local_7c = ~((int)local_7c >> 0x1f) & 0xff;
                      }
                      uVar42 = (&local_88)[*(byte *)(lVar45 + 8)];
                      goto LAB_0010cde8;
                    }
                    if ((sVar5 == (selector)0x1) || (uVar42 = 0xff, (byte)sVar5 < 3)) {
                      if (bVar53 < 3) goto LAB_0010d5c9;
                      eVar4 = *peVar1;
                      eVar7 = peVar1[1];
                      eVar10 = eVar4;
                      if (eVar7 == eVar4) {
                        uVar42 = 0xff;
                        goto LAB_0010d207;
                      }
                    }
                    else {
LAB_0010ce09:
                      eVar10 = *peVar1;
                      eVar4 = peVar1[1];
                      if (eVar10 == eVar4) {
LAB_0010d207:
                        eVar10 = eVar4;
                        if (peVar1[2] == eVar4) {
                          if (cVar25 == '\0') {
                            local_78 = CONCAT22(0xffff,(undefined2)local_78);
                            lVar33 = 0;
                            do {
                              *(undefined1 *)((long)&local_70 + lVar33 + 3) = 0;
                              lVar33 = lVar33 + 2;
                            } while (lVar33 != 0x20);
                          }
                          else {
                            lVar33 = lVar33 + (ulong)(ushort)*puVar67 * 8;
                            lVar68 = lVar68 + (ulong)*(ushort *)((long)puVar67 + 2) * 0xb;
                            bVar38 = *(byte *)(lVar33 + 4);
                            bVar40 = *(byte *)(lVar68 + 9);
                            if (bVar53 < 3) {
                              local_7c = (uint)*(byte *)(lVar33 + 1) << 3 |
                                         (uint)(*(byte *)(lVar33 + 1) >> 2);
                              uVar62 = (ulong)bVar38;
                              local_88 = (&g_etc1_inten_tables)[uVar62 * 4] + local_7c;
                              if (0xff < local_88) {
                                local_88 = ~((int)local_88 >> 0x1f) & 0xff;
                              }
                              local_84 = (&DAT_0017f444)[uVar62 * 4] + local_7c;
                              if (0xff < local_84) {
                                local_84 = ~((int)local_84 >> 0x1f) & 0xff;
                              }
                              local_80 = (&DAT_0017f448)[uVar62 * 4] + local_7c;
                              if (0xff < local_80) {
                                local_80 = ~((int)local_80 >> 0x1f) & 0xff;
                              }
                              local_7c = local_7c + (&DAT_0017f44c)[uVar62 * 4];
                              if (0xff < local_7c) {
                                local_7c = ~((int)local_7c >> 0x1f) & 0xff;
                              }
                              local_78._0_3_ =
                                   CONCAT12((char)(&local_88)[*(byte *)(lVar68 + 8)],
                                            (undefined2)local_78);
                              local_78 = CONCAT13((char)(&local_88)[bVar40],(undefined3)local_78);
                              uVar62 = 0;
                              do {
                                *(char *)((long)&local_70 + uVar62 * 2 + 3) =
                                     ((uint)bVar40 ==
                                     ((int)(uint)*(byte *)(lVar68 + (uVar62 >> 2 & 0x3fffffff)) >>
                                      ((byte)uVar62 & 3) * '\x02' & 3U)) * '\x03';
                                uVar62 = uVar62 + 1;
                              } while (uVar62 != 0x10);
                            }
                            else {
                              bVar53 = (&g_etc1_to_astc_best_grayscale_mapping_0_255)
                                       [(ulong)*(uint *)(g_etc1_to_astc_selector_range_index +
                                                        ((ulong)bVar40 +
                                                        (ulong)*(byte *)(lVar68 + 8) * 4) * 4) +
                                        (ulong)bVar38 * 6 + (ulong)*(byte *)(lVar33 + 1) * 0x30];
                              lVar45 = 0;
                              local_78 = CONCAT22(*(undefined2 *)
                                                   (g_etc1_to_astc_0_255 +
                                                   (ulong)bVar53 * 4 +
                                                   (ulong)(((uint)bVar38 * 0x20 +
                                                           (uint)*(byte *)(lVar33 + 1)) * 0x3c +
                                                          *(uint *)(
                                                  g_etc1_to_astc_selector_range_index +
                                                  ((ulong)bVar40 + (ulong)*(byte *)(lVar68 + 8) * 4)
                                                  * 4) * 10) * 4),(undefined2)local_78);
                              do {
                                bVar38 = *(byte *)(lVar68 + lVar45);
                                iVar50 = 0;
                                do {
                                  uVar42 = (int)lVar45 * 8 + 1 + iVar50;
                                  bVar40 = (byte)iVar50;
                                  iVar50 = iVar50 + 2;
                                  *(undefined1 *)((long)&local_70 + (ulong)uVar42 + 2) =
                                       g_etc1_to_astc_selector_mappings
                                       [(ulong)((int)(uint)bVar38 >> (bVar40 & 0x1f) & 3) +
                                        (ulong)bVar53 * 4];
                                } while (iVar50 != 8);
                                lVar45 = lVar45 + 1;
                              } while (lVar45 != 4);
                            }
                          }
                          uVar42 = (uint)(byte)eVar4;
                          uVar26 = local_78._2_2_;
                          if ((byte)sVar5 < 3) {
                            local_7c = uVar42 << 3 | (uint)((byte)eVar4 >> 2);
                            local_88 = (&g_etc1_inten_tables)[uVar36 * 4] + local_7c;
                            if (0xff < local_88) {
                              local_88 = ~((int)local_88 >> 0x1f) & 0xff;
                            }
                            local_84 = (&DAT_0017f444)[uVar36 * 4] + local_7c;
                            if (0xff < local_84) {
                              local_84 = ~((int)local_84 >> 0x1f) & 0xff;
                            }
                            local_80 = (&DAT_0017f448)[uVar36 * 4] + local_7c;
                            if (0xff < local_80) {
                              local_80 = ~((int)local_80 >> 0x1f) & 0xff;
                            }
                            local_7c = local_7c + (&DAT_0017f44c)[uVar36 * 4];
                            if (0xff < local_7c) {
                              local_7c = ~((int)local_7c >> 0x1f) & 0xff;
                            }
                            local_78 = CONCAT31(local_78._1_3_,(char)(&local_88)[uVar30]);
                            local_78._0_2_ =
                                 CONCAT11((char)(&local_88)[uVar31],(char)(&local_88)[uVar30]);
                            uVar36 = 0;
                            do {
                              *(char *)((long)&local_70 + uVar36 * 2 + 2) =
                                   (uVar31 ==
                                   ((int)(uint)(byte)psVar66[uVar36 >> 2 & 0x3fffffff] >>
                                    ((byte)uVar36 & 3) * '\x02' & 3U)) * '\x03';
                              uVar36 = uVar36 + 1;
                            } while (uVar36 != 0x10);
                          }
                          else {
                            bVar53 = (&g_etc1_to_astc_best_grayscale_mapping_0_255)
                                     [(ulong)*(uint *)(g_etc1_to_astc_selector_range_index +
                                                      ((ulong)uVar31 + (ulong)uVar30 * 4) * 4) +
                                      (ulong)uVar61 * 6 + (long)(int)uVar42 * 0x30];
                            lVar33 = 0;
                            local_78._0_2_ =
                                 *(undefined2 *)
                                  (g_etc1_to_astc_0_255 +
                                  (ulong)bVar53 * 4 +
                                  (ulong)((uVar42 + uVar61 * 0x20) * 0x3c +
                                         *(uint *)(g_etc1_to_astc_selector_range_index +
                                                  ((ulong)uVar31 + (ulong)uVar30 * 4) * 4) * 10) * 4
                                  );
                            do {
                              sVar8 = psVar66[lVar33];
                              iVar50 = 0;
                              do {
                                uVar30 = (int)lVar33 * 8 + iVar50;
                                bVar38 = (byte)iVar50;
                                iVar50 = iVar50 + 2;
                                *(undefined1 *)((long)&local_70 + (ulong)uVar30 + 2) =
                                     g_etc1_to_astc_selector_mappings
                                     [(ulong)((int)(uint)(byte)sVar8 >> (bVar38 & 0x1f) & 3) +
                                      (ulong)bVar53 * 4];
                              } while (iVar50 != 8);
                              lVar33 = lVar33 + 1;
                            } while (lVar33 != 4);
                          }
                          local_78 = CONCAT22(uVar26,(undefined2)local_78);
                          puVar67[2] = 0;
                          puVar67[3] = 0;
                          uVar30 = 0x11;
                          *(undefined8 *)puVar67 = uVar22;
                          lVar33 = 0;
                          do {
                            uVar61 = (uint)*(byte *)((long)&local_78 + lVar33);
                            iVar50 = 8;
                            do {
                              iVar65 = 8 - (uVar30 & 7);
                              if (iVar50 < iVar65) {
                                iVar65 = iVar50;
                              }
                              pbVar37 = (byte *)((long)puVar67 + (long)((int)uVar30 >> 3));
                              *pbVar37 = *pbVar37 | (byte)(uVar61 << (sbyte)(uVar30 & 7));
                              uVar30 = uVar30 + iVar65;
                              uVar61 = uVar61 >> ((byte)iVar65 & 0x1f);
                              iVar50 = iVar50 - iVar65;
                            } while (iVar50 != 0);
                            lVar33 = lVar33 + 1;
                          } while (lVar33 != 4);
                          pbVar37 = (byte *)((long)&local_70 + 2);
                          uVar30 = 0x7e;
                          do {
                            bVar53 = *pbVar37;
                            pbVar37 = pbVar37 + 1;
                            pbVar46 = (byte *)((long)puVar67 + (ulong)(uVar30 >> 3));
                            *pbVar46 = *pbVar46 |
                                       *(char *)((long)&
                                                  pack_astc_block(unsigned_int*,basist::astc_block_desc_const*,unsigned_int)
                                                  ::s_reverse_bits2 + (ulong)bVar53) <<
                                       ((byte)uVar30 & 7);
                            uVar30 = uVar30 - 2;
                          } while (&local_4e != pbVar37);
                          break;
                        }
                      }
                      eVar7 = eVar4;
                      if (bVar53 == 1 && uVar42 == 0xff) {
                        iVar50 = *(int *)(g_etc1_to_astc_selector_range_index +
                                         ((ulong)uVar31 + (ulong)uVar30 * 4) * 4) * 10;
                        iVar65 = uVar61 * 0x20;
                        uVar64 = (ulong)(((uint)(byte)eVar4 + iVar65) * 0x3c + iVar50);
                        uVar62 = (ulong)(((uint)(byte)eVar10 + iVar65) * 0x3c + iVar50);
                        lVar33 = uVar64 * 4;
                        uVar36 = (ulong)(((uint)(byte)peVar1[2] + iVar65) * 0x3c + iVar50);
                        lVar68 = uVar62 * 4;
                        lVar45 = uVar36 * 4;
                        uVar31 = (uint)*(ushort *)(g_etc1_to_astc_0_255 + uVar62 * 4 + 2) +
                                 (uint)*(ushort *)(g_etc1_to_astc_0_255 + uVar64 * 4 + 2) +
                                 (uint)*(ushort *)(g_etc1_to_astc_0_255 + uVar36 * 4 + 2);
                        uVar30 = (uint)*(ushort *)(g_etc1_to_astc_0_255 + lVar33 + 6) +
                                 (uint)*(ushort *)(g_etc1_to_astc_0_255 + lVar68 + 6) +
                                 (uint)*(ushort *)(g_etc1_to_astc_0_255 + lVar45 + 6);
                        uVar61 = uVar30;
                        if (uVar30 >= uVar31) {
                          uVar61 = uVar31;
                        }
                        uVar36 = (ulong)(uVar30 < uVar31);
                        uVar30 = (uint)*(ushort *)(g_etc1_to_astc_0_255 + lVar33 + 10) +
                                 (uint)*(ushort *)(g_etc1_to_astc_0_255 + lVar68 + 10) +
                                 (uint)*(ushort *)(g_etc1_to_astc_0_255 + lVar45 + 10);
                        if (uVar30 < uVar61) {
                          uVar36 = 2;
                          uVar61 = uVar30;
                        }
                        uVar30 = (uint)*(ushort *)(g_etc1_to_astc_0_255 + lVar33 + 0xe) +
                                 (uint)*(ushort *)(g_etc1_to_astc_0_255 + lVar68 + 0xe) +
                                 (uint)*(ushort *)(g_etc1_to_astc_0_255 + lVar45 + 0xe);
                        if (uVar30 < uVar61) {
                          uVar36 = 3;
                          uVar61 = uVar30;
                        }
                        uVar30 = (uint)*(ushort *)(g_etc1_to_astc_0_255 + lVar33 + 0x12) +
                                 (uint)*(ushort *)(g_etc1_to_astc_0_255 + lVar68 + 0x12) +
                                 (uint)*(ushort *)(g_etc1_to_astc_0_255 + lVar45 + 0x12);
                        if (uVar30 < uVar61) {
                          uVar36 = 4;
                          uVar61 = uVar30;
                        }
                        uVar30 = (uint)*(ushort *)(g_etc1_to_astc_0_255 + lVar33 + 0x16) +
                                 (uint)*(ushort *)(g_etc1_to_astc_0_255 + lVar68 + 0x16) +
                                 (uint)*(ushort *)(g_etc1_to_astc_0_255 + lVar45 + 0x16);
                        if (uVar30 < uVar61) {
                          uVar36 = 5;
                          uVar61 = uVar30;
                        }
                        uVar30 = (uint)*(ushort *)(g_etc1_to_astc_0_255 + lVar33 + 0x1a) +
                                 (uint)*(ushort *)(g_etc1_to_astc_0_255 + lVar68 + 0x1a) +
                                 (uint)*(ushort *)(g_etc1_to_astc_0_255 + lVar45 + 0x1a);
                        if (uVar30 < uVar61) {
                          uVar36 = 6;
                          uVar61 = uVar30;
                        }
                        uVar30 = (uint)*(ushort *)(g_etc1_to_astc_0_255 + lVar33 + 0x1e) +
                                 (uint)*(ushort *)(g_etc1_to_astc_0_255 + lVar68 + 0x1e) +
                                 (uint)*(ushort *)(g_etc1_to_astc_0_255 + lVar45 + 0x1e);
                        if (uVar30 < uVar61) {
                          uVar36 = 7;
                          uVar61 = uVar30;
                        }
                        uVar30 = (uint)*(ushort *)(g_etc1_to_astc_0_255 + lVar33 + 0x22) +
                                 (uint)*(ushort *)(g_etc1_to_astc_0_255 + lVar68 + 0x22) +
                                 (uint)*(ushort *)(g_etc1_to_astc_0_255 + lVar45 + 0x22);
                        if (uVar30 < uVar61) {
                          uVar36 = 8;
                          uVar61 = uVar30;
                        }
                        if ((uint)*(ushort *)(g_etc1_to_astc_0_255 + lVar33 + 0x26) +
                            (uint)*(ushort *)(g_etc1_to_astc_0_255 + lVar68 + 0x26) +
                            (uint)*(ushort *)(g_etc1_to_astc_0_255 + lVar45 + 0x26) < uVar61) {
                          uVar36 = 9;
                        }
                        lVar35 = uVar36 * 4;
                        pbVar37 = g_etc1_to_astc_0_255 + lVar35 + lVar33;
                        bVar38 = (g_etc1_to_astc_0_255 + lVar35 + lVar68)[1];
                        bVar40 = g_etc1_to_astc_0_255[lVar35 + lVar68];
                        uVar15 = *(ushort *)(g_etc1_to_astc_0_255 + lVar35 + lVar45);
                        local_78 = CONCAT31(CONCAT21(*(undefined2 *)pbVar37,bVar38),bVar40);
                        uVar16 = *(ushort *)(g_etc1_to_astc_0_255 + lVar35 + lVar45);
                        bVar21 = (uint)bVar38 + (uint)pbVar37[1] + (uint)(byte)(uVar16 >> 8) <
                                 (uint)bVar40 + (uint)*pbVar37 + (uint)(byte)uVar16;
                        if (bVar21) {
                          local_78 = CONCAT31(CONCAT21(CONCAT11(*pbVar37,pbVar37[1]),bVar40),bVar38)
                          ;
                          uVar16 = uVar15 << 8 | uVar15 >> 8;
                        }
                        local_74 = CONCAT22(local_74._2_2_,uVar16);
                        lVar33 = 0;
                        do {
                          sVar8 = psVar66[lVar33];
                          uVar30 = (int)lVar33 * 4;
                          iVar50 = 0;
                          do {
                            uVar36 = (ulong)uVar30;
                            cVar48 = g_etc1_to_astc_selector_mappings
                                     [(ulong)((int)(uint)(byte)sVar8 >> ((byte)iVar50 & 0x1f) & 3) +
                                      lVar35];
                            if (bVar21 && (bVar53 == 1 && uVar42 == 0xff)) {
                              cVar48 = '\x03' - g_etc1_to_astc_selector_mappings
                                                [(ulong)((int)(uint)(byte)sVar8 >>
                                                         ((byte)iVar50 & 0x1f) & 3) + lVar35];
                            }
                            iVar50 = iVar50 + 2;
                            uVar30 = uVar30 + 1;
                            *(char *)((long)&local_70 + uVar36 + 2) = cVar48;
                          } while (iVar50 != 8);
                          lVar33 = lVar33 + 1;
                        } while (lVar33 != 4);
                        puVar67[0] = 0x10042;
                        puVar67[1] = 0;
                        pbVar37 = (byte *)&local_78;
                        puVar67[2] = 0;
                        puVar67[3] = 0;
                        uVar30 = 0x11;
                        do {
                          uVar61 = (uint)*pbVar37;
                          iVar50 = 8;
                          do {
                            iVar65 = 8 - (uVar30 & 7);
                            if (iVar50 < iVar65) {
                              iVar65 = iVar50;
                            }
                            pbVar46 = (byte *)((long)puVar67 + (long)((int)uVar30 >> 3));
                            *pbVar46 = *pbVar46 | (byte)(uVar61 << (sbyte)(uVar30 & 7));
                            uVar30 = uVar30 + iVar65;
                            uVar61 = uVar61 >> ((byte)iVar65 & 0x1f);
                            iVar50 = iVar50 - iVar65;
                          } while (iVar50 != 0);
                          pbVar37 = pbVar37 + 1;
                        } while ((byte *)((long)&local_74 + 2) != pbVar37);
                        pbVar37 = (byte *)((long)&local_70 + 2);
                        uVar36 = 0x7e;
                        do {
                          bVar53 = *pbVar37;
                          pbVar37 = pbVar37 + 1;
                          pbVar46 = (byte *)((long)puVar67 + (uVar36 >> 3));
                          *pbVar46 = *pbVar46 |
                                     *(char *)((long)&
                                                  pack_astc_block(unsigned_int*,basist::astc_block_desc_const*,unsigned_int)
                                                  ::s_reverse_bits2 + (ulong)bVar53) <<
                                     ((byte)uVar36 & 7);
                          uVar36 = (ulong)((int)uVar36 - 2);
                        } while (abStack_5e != pbVar37);
                        break;
                      }
                    }
                    if (cVar25 == '\0') {
                      local_74._2_2_ = 0x101;
                      puVar51 = (undefined1 *)((long)&local_70 + 3);
                      do {
                        *puVar51 = 0;
                        puVar52 = puVar51 + 4;
                        puVar51[2] = 0;
                        puVar51 = puVar52;
                      } while (local_4d != puVar52);
                    }
                    else {
                      pbVar37 = (byte *)(lVar33 + (ulong)(ushort)*puVar67 * 8);
                      bVar53 = pbVar37[4];
                      lVar68 = lVar68 + (ulong)*(ushort *)((long)puVar67 + 2) * 0xb;
                      bVar38 = *(byte *)(lVar68 + 8);
                      bVar40 = *(byte *)(lVar68 + 9);
                      if (bVar38 == bVar40) {
                        local_7c = (uint)pbVar37[1] << 3 | (uint)(pbVar37[1] >> 2);
                        uVar36 = (ulong)(uint)bVar53;
                        local_88 = (&g_etc1_inten_tables)[uVar36 * 4] + local_7c;
                        if (0xff < local_88) {
                          local_88 = ~((int)local_88 >> 0x1f) & 0xff;
                        }
                        local_84 = (&DAT_0017f444)[uVar36 * 4] + local_7c;
                        if (0xff < local_84) {
                          local_84 = ~((int)local_84 >> 0x1f) & 0xff;
                        }
                        local_80 = (&DAT_0017f448)[uVar36 * 4] + local_7c;
                        if (0xff < local_80) {
                          local_80 = ~((int)local_80 >> 0x1f) & 0xff;
                        }
                        local_7c = local_7c + (&DAT_0017f44c)[uVar36 * 4];
                        if (0xff < local_7c) {
                          local_7c = ~((int)local_7c >> 0x1f) & 0xff;
                        }
                        local_74._2_2_ =
                             *(undefined2 *)
                              (&g_astc_single_color_encoding_1 +
                              (ulong)(uint)(&local_88)[bVar38] * 2);
                        lVar33 = 0;
                        do {
                          *(undefined1 *)((long)&local_70 + lVar33 + 3) = 1;
                          lVar33 = lVar33 + 2;
                        } while (lVar33 != 0x20);
                      }
                      else if ((((bVar53 < 7) || (*(char *)(lVar68 + 10) != '\x02')) ||
                               (bVar38 != 0)) || (bVar40 != 3)) {
                        lVar33 = 0;
                        bVar60 = (&g_etc1_to_astc_best_grayscale_mapping)
                                 [(ulong)*(uint *)(g_etc1_to_astc_selector_range_index +
                                                  ((ulong)bVar40 + (ulong)bVar38 * 4) * 4) +
                                  (ulong)(uint)bVar53 * 6 + (ulong)pbVar37[1] * 0x30];
                        local_74._2_2_ =
                             *(undefined2 *)
                              (g_etc1_to_astc +
                              (ulong)bVar60 * 4 +
                              (ulong)(((uint)bVar53 * 0x20 + (uint)pbVar37[1]) * 0x3c +
                                     *(uint *)(g_etc1_to_astc_selector_range_index +
                                              ((ulong)bVar40 + (ulong)bVar38 * 4) * 4) * 10) * 4);
                        do {
                          bVar53 = *(byte *)(lVar68 + lVar33);
                          iVar50 = 0;
                          do {
                            uVar42 = (int)lVar33 * 8 + 1 + iVar50;
                            bVar38 = (byte)iVar50;
                            iVar50 = iVar50 + 2;
                            *(undefined1 *)((long)&local_70 + (ulong)uVar42 + 2) =
                                 g_etc1_to_astc_selector_mappings
                                 [(ulong)((int)(uint)bVar53 >> (bVar38 & 0x1f) & 3) +
                                  (ulong)bVar60 * 4];
                          } while (iVar50 != 8);
                          lVar33 = lVar33 + 1;
                        } while (lVar33 != 4);
                      }
                      else {
                        decoder_etc_block::get_block_colors5
                                  ((color32 *)&local_88,(color32 *)(ulong)*pbVar37,(uint)pbVar37[1])
                        ;
                        uVar9 = (&g_astc_single_color_encoding_0)[local_88._1_1_];
                        uVar3 = (&g_astc_single_color_encoding_0)[local_7c._1_1_];
                        lVar33 = 0;
                        do {
                          bVar53 = *(byte *)(lVar68 + lVar33);
                          iVar50 = 0;
                          do {
                            uVar42 = (int)lVar33 * 8 + 1 + iVar50;
                            bVar38 = (byte)iVar50;
                            iVar50 = iVar50 + 2;
                            *(char *)((long)&local_70 + (ulong)uVar42 + 2) =
                                 ((~(byte)((int)(uint)bVar53 >> (bVar38 & 0x1f)) & 3) == 0) * '\x03'
                            ;
                          } while (iVar50 != 8);
                          lVar33 = lVar33 + 1;
                          local_74._2_2_ = CONCAT11(uVar3,uVar9);
                        } while (lVar33 != 4);
                      }
                    }
                    if (uVar30 == uVar31) {
                      decoder_etc_block::get_block_colors5
                                ((color32 *)&local_88,(color32 *)(ulong)(byte)eVar10,
                                 (uint)(byte)eVar7);
                      uVar36 = (ulong)uVar30;
                      uVar62 = (ulong)*(byte *)((long)&local_88 + uVar36 * 4 + 1);
                      bVar53 = (&DAT_00126ac1)[uVar62 * 2];
                      bVar38 = (&g_astc_single_color_encoding_1)[uVar62 * 2];
                      bVar40 = (&DAT_00126ac1)[(ulong)*(byte *)(&local_88 + uVar36) * 2];
                      bVar60 = (&g_astc_single_color_encoding_1)
                               [(ulong)*(byte *)(&local_88 + uVar36) * 2];
                      local_78 = CONCAT31(CONCAT21(CONCAT11(bVar53,bVar38),bVar40),bVar60);
                      uVar36 = (ulong)*(byte *)((long)&local_88 + uVar36 * 4 + 2);
                      uVar15 = *(ushort *)(&g_astc_single_color_encoding_1 + uVar36 * 2);
                      bVar56 = 0;
                      if ((int)((&g_ise_to_unquant)[(int)(uint)bVar53] +
                                (&g_ise_to_unquant)[(int)(uint)bVar40] +
                               (&g_ise_to_unquant)[(byte)(uVar15 >> 8)]) <
                          (int)((&g_ise_to_unquant)[(int)(uint)bVar38] +
                                (&g_ise_to_unquant)[(int)(uint)bVar60] +
                               (&g_ise_to_unquant)[(ulong)uVar15 & 0xff])) {
                        local_78 = CONCAT31(CONCAT21(CONCAT11(bVar38,bVar53),bVar60),bVar40);
                        bVar56 = bVar72;
                        uVar15 = *(ushort *)(&g_astc_single_color_encoding_1 + uVar36 * 2) << 8 |
                                 *(ushort *)(&g_astc_single_color_encoding_1 + uVar36 * 2) >> 8;
                      }
                      local_74 = CONCAT22(local_74._2_2_,uVar15);
                      pbVar37 = (byte *)((long)&local_70 + 2);
                      do {
                        *pbVar37 = bVar56 + 1;
                        pbVar46 = pbVar37 + 4;
                        pbVar37[2] = bVar56 + 1;
                        pbVar37 = pbVar46;
                      } while (&local_4e != pbVar46);
                    }
                    else {
                      bVar53 = ((sVar8 == (selector)0x0 && sVar5 == (selector)0x2) &&
                               sVar6 == (selector)0x3) && 6 < uVar61;
                      if ((bool)bVar53) {
                        decoder_etc_block::get_block_colors5
                                  ((color32 *)&local_88,(color32 *)(ulong)(byte)eVar10,
                                   (uint)(byte)eVar7);
                        bVar53 = (&g_astc_single_color_encoding_0)[local_7c._1_1_];
                        bVar38 = (&g_astc_single_color_encoding_0)[local_88._1_1_];
                        bVar40 = (&g_astc_single_color_encoding_0)[(byte)local_7c];
                        bVar60 = (&g_astc_single_color_encoding_0)[(byte)local_88._0_1_];
                        local_78 = CONCAT31(CONCAT21(CONCAT11(bVar53,bVar38),bVar40),bVar60);
                        bVar56 = (&g_astc_single_color_encoding_0)[local_88._2_1_];
                        bVar13 = (&g_astc_single_color_encoding_0)[local_7c._2_1_];
                        uVar26 = CONCAT11(bVar13,bVar56);
                        iVar50 = (&g_ise_to_unquant)[(int)(uint)bVar38] +
                                 (&g_ise_to_unquant)[bVar60] + (&g_ise_to_unquant)[bVar56];
                        iVar65 = (&g_ise_to_unquant)[(int)(uint)bVar53] +
                                 (&g_ise_to_unquant)[(int)(uint)bVar40] +
                                 (&g_ise_to_unquant)[bVar13];
                        if (iVar65 < iVar50) {
                          local_78 = CONCAT31(CONCAT21(CONCAT11(bVar38,bVar53),bVar60),bVar40);
                          uVar26 = CONCAT11(bVar56,bVar13);
                        }
                        local_74 = CONCAT22(local_74._2_2_,uVar26);
                        lVar33 = 0;
                        do {
                          sVar14 = psVar66[lVar33];
                          iVar44 = 0;
                          do {
                            bVar53 = -(((int)(uint)(byte)sVar14 >> ((byte)iVar44 & 0x1f) & 3U) != 0)
                                     & 3;
                            if (iVar65 < iVar50 &&
                                (((sVar8 == (selector)0x0 && sVar5 == (selector)0x2) &&
                                 sVar6 == (selector)0x3) && 6 < uVar61)) {
                              bVar53 = 3 - bVar53;
                            }
                            uVar30 = (int)lVar33 * 8 + iVar44;
                            iVar44 = iVar44 + 2;
                            *(byte *)((long)&local_70 + (ulong)uVar30 + 2) = bVar53;
                          } while (iVar44 != 8);
                          lVar33 = lVar33 + 1;
                        } while (lVar33 != 4);
                      }
                      else {
                        iVar65 = uVar61 * 0x20;
                        iVar50 = *(int *)(g_etc1_to_astc_selector_range_index +
                                         ((ulong)uVar31 + (ulong)uVar30 * 4) * 4) * 10;
                        uVar64 = (ulong)(((uint)(byte)eVar7 + iVar65) * 0x3c + iVar50);
                        uVar36 = (ulong)(((uint)(byte)peVar1[2] + iVar65) * 0x3c + iVar50);
                        lVar33 = uVar64 * 4;
                        uVar62 = (ulong)(((uint)(byte)eVar10 + iVar65) * 0x3c + iVar50);
                        lVar68 = uVar36 * 4;
                        lVar45 = uVar62 * 4;
                        uVar31 = (uint)*(ushort *)(g_etc1_to_astc + uVar62 * 4 + 2) +
                                 (uint)*(ushort *)(g_etc1_to_astc + uVar64 * 4 + 2) +
                                 (uint)*(ushort *)(g_etc1_to_astc + uVar36 * 4 + 2);
                        uVar30 = (uint)*(ushort *)(g_etc1_to_astc + lVar33 + 6) +
                                 (uint)*(ushort *)(g_etc1_to_astc + lVar45 + 6) +
                                 (uint)*(ushort *)(g_etc1_to_astc + lVar68 + 6);
                        uVar61 = uVar30;
                        if (uVar30 >= uVar31) {
                          uVar61 = uVar31;
                        }
                        uVar36 = (ulong)(uVar30 < uVar31);
                        uVar30 = (uint)*(ushort *)(g_etc1_to_astc + lVar68 + 10) +
                                 (uint)*(ushort *)(g_etc1_to_astc + lVar33 + 10) +
                                 (uint)*(ushort *)(g_etc1_to_astc + lVar45 + 10);
                        if (uVar30 < uVar61) {
                          uVar36 = 2;
                          uVar61 = uVar30;
                        }
                        uVar30 = (uint)*(ushort *)(g_etc1_to_astc + lVar68 + 0xe) +
                                 (uint)*(ushort *)(g_etc1_to_astc + lVar33 + 0xe) +
                                 (uint)*(ushort *)(g_etc1_to_astc + lVar45 + 0xe);
                        if (uVar30 < uVar61) {
                          uVar36 = 3;
                          uVar61 = uVar30;
                        }
                        uVar30 = (uint)*(ushort *)(g_etc1_to_astc + lVar68 + 0x12) +
                                 (uint)*(ushort *)(g_etc1_to_astc + lVar33 + 0x12) +
                                 (uint)*(ushort *)(g_etc1_to_astc + lVar45 + 0x12);
                        if (uVar30 < uVar61) {
                          uVar36 = 4;
                          uVar61 = uVar30;
                        }
                        uVar30 = (uint)*(ushort *)(g_etc1_to_astc + lVar68 + 0x16) +
                                 (uint)*(ushort *)(g_etc1_to_astc + lVar33 + 0x16) +
                                 (uint)*(ushort *)(g_etc1_to_astc + lVar45 + 0x16);
                        if (uVar30 < uVar61) {
                          uVar36 = 5;
                          uVar61 = uVar30;
                        }
                        uVar30 = (uint)*(ushort *)(g_etc1_to_astc + lVar68 + 0x1a) +
                                 (uint)*(ushort *)(g_etc1_to_astc + lVar33 + 0x1a) +
                                 (uint)*(ushort *)(g_etc1_to_astc + lVar45 + 0x1a);
                        if (uVar30 < uVar61) {
                          uVar36 = 6;
                          uVar61 = uVar30;
                        }
                        uVar30 = (uint)*(ushort *)(g_etc1_to_astc + lVar68 + 0x1e) +
                                 (uint)*(ushort *)(g_etc1_to_astc + lVar33 + 0x1e) +
                                 (uint)*(ushort *)(g_etc1_to_astc + lVar45 + 0x1e);
                        if (uVar30 < uVar61) {
                          uVar36 = 7;
                          uVar61 = uVar30;
                        }
                        uVar30 = (uint)*(ushort *)(g_etc1_to_astc + lVar68 + 0x22) +
                                 (uint)*(ushort *)(g_etc1_to_astc + lVar33 + 0x22) +
                                 (uint)*(ushort *)(g_etc1_to_astc + lVar45 + 0x22);
                        if (uVar30 < uVar61) {
                          uVar36 = 8;
                          uVar61 = uVar30;
                        }
                        if ((uint)*(ushort *)(g_etc1_to_astc + lVar33 + 0x26) +
                            (uint)*(ushort *)(g_etc1_to_astc + lVar45 + 0x26) +
                            (uint)*(ushort *)(g_etc1_to_astc + lVar68 + 0x26) < uVar61) {
                          uVar36 = 9;
                        }
                        lVar35 = uVar36 * 4;
                        pbVar37 = g_etc1_to_astc + lVar35 + lVar33;
                        bVar38 = (g_etc1_to_astc + lVar35 + lVar45)[1];
                        bVar40 = g_etc1_to_astc[lVar35 + lVar45];
                        uVar15 = *(ushort *)(g_etc1_to_astc + lVar35 + lVar68);
                        local_78 = CONCAT31(CONCAT21(*(undefined2 *)pbVar37,bVar38),bVar40);
                        uVar16 = *(ushort *)(g_etc1_to_astc + lVar35 + lVar68);
                        if ((int)((&g_ise_to_unquant)[(int)(uint)pbVar37[1]] +
                                  (&g_ise_to_unquant)[(int)(uint)bVar38] +
                                 (&g_ise_to_unquant)[uVar15 >> 8]) <
                            (int)((&g_ise_to_unquant)[(int)(uint)*pbVar37] +
                                  (&g_ise_to_unquant)[bVar40] + (&g_ise_to_unquant)[(byte)uVar15]))
                        {
                          local_78 = CONCAT31(CONCAT21(CONCAT11(*pbVar37,pbVar37[1]),bVar40),bVar38)
                          ;
                          bVar53 = bVar72;
                          uVar15 = uVar16 << 8 | uVar16 >> 8;
                        }
                        local_74 = CONCAT22(local_74._2_2_,uVar15);
                        iVar50 = 0;
                        lVar33 = 0;
                        do {
                          sVar8 = psVar66[lVar33];
                          iVar65 = 0;
                          do {
                            uVar30 = iVar50 + iVar65;
                            cVar48 = g_etc1_to_astc_selector_mappings
                                     [(ulong)((int)(uint)(byte)sVar8 >> ((byte)iVar65 & 0x1f) & 3) +
                                      lVar35];
                            if (bVar53 != 0) {
                              cVar48 = '\x03' - g_etc1_to_astc_selector_mappings
                                                [(ulong)((int)(uint)(byte)sVar8 >>
                                                         ((byte)iVar65 & 0x1f) & 3) + lVar35];
                            }
                            iVar65 = iVar65 + 2;
                            *(char *)((long)&local_70 + (ulong)uVar30 + 2) = cVar48;
                          } while (iVar65 != 8);
                          lVar33 = lVar33 + 1;
                          iVar50 = iVar50 + 8;
                        } while (lVar33 != 4);
                      }
                    }
                    uVar23 = _LC42;
                    pbVar37 = (byte *)((long)&local_70 + 2);
                    puVar67[2] = 0;
                    puVar67[3] = 0;
                    *(undefined8 *)puVar67 = uVar23;
                    local_ec = 0x11;
                    astc_encode_trits(puVar67,(uchar *)&local_78,&local_ec,4);
                    astc_encode_trits(puVar67,(uchar *)((long)&local_74 + 1),&local_ec,4);
                    uVar36 = 0x7e;
                    do {
                      bVar53 = *pbVar37;
                      pbVar37 = pbVar37 + 1;
                      pbVar46 = (byte *)((long)puVar67 + (uVar36 >> 3));
                      *pbVar46 = *pbVar46 |
                                 *(char *)((long)&pack_astc_block(unsigned_int*,basist::astc_block_desc_const*,unsigned_int)
                                                  ::s_reverse_bits2 + (ulong)bVar53) <<
                                 ((byte)uVar36 & 7);
                      uVar36 = (ulong)((int)uVar36 - 2);
                    } while (&local_4e != pbVar37);
                  }
                  break;
                           case 0x12:
                  eVar4 = peVar1[4];
                  sVar8 = psVar66[9];
                  puVar51 = (undefined1 *)(param_1 + (ulong)local_180);
                  sVar5 = psVar66[8];
                  uVar36 = (ulong)(byte)sVar5;
                  if (sVar5 != sVar8) {
                    if (sVar5 == (selector)0x0) {
                      if (sVar8 != (selector)0x3) {
                        uVar36 = (ulong)((uint)(sVar8 == (selector)0x2) * 2);
                      }
                    }
                    else if (sVar5 == (selector)0x1) {
                      if (sVar8 != (selector)0x3) {
                        uVar36 = (ulong)((uint)(sVar8 == (selector)0x2) * 3);
                      }
                    }
                    else {
                      uVar36 = 0;
                    }
                    bVar53 = 0x2d;
                    lVar68 = 0;
                    uVar62 = 0;
                    lVar33 = uVar36 + (ulong)((uint)(byte)*peVar1 + (uint)(byte)eVar4 * 0x20) * 4;
                    uVar15 = *(ushort *)(s_etc1_g_to_etc2_r11 + lVar33 * 4 + 2);
                    *puVar51 = s_etc1_g_to_etc2_r11[lVar33 * 4];
                    puVar51[1] = s_etc1_g_to_etc2_r11[lVar33 * 4 + 1] << 4 |
                                 (byte)s_etc1_g_to_etc2_r11[lVar33 * 4 + 1] >> 4;
                    do {
                      iVar50 = 0;
                      bVar38 = bVar53;
                      do {
                        iVar65 = iVar50 + 2;
                        uVar62 = uVar62 | (ulong)((int)(uint)uVar15 >>
                                                  ((byte)((int)(uint)(byte)psVar66[lVar68] >>
                                                         ((byte)iVar50 & 0x1f)) & 3) * '\x03' & 7)
                                          << (bVar38 & 0x3f);
                        iVar50 = iVar65;
                        bVar38 = bVar38 - 0xc;
                      } while (iVar65 != 8);
                      lVar68 = lVar68 + 1;
                      bVar53 = bVar53 - 3;
                    } while (lVar68 != 4);
                    goto LAB_0010b56c;
                  }
LAB_0010d4b1:
                  uVar30 = ((uint)(byte)*peVar1 << 3 | (uint)((byte)*peVar1 >> 2)) +
                           (&g_etc1_inten_tables)[uVar36 + (ulong)(byte)eVar4 * 4];
                  if (0xff < uVar30) {
                    uVar30 = ~((int)uVar30 >> 0x1f) & 0xff;
                  }
                  *puVar51 = (char)uVar30;
                  puVar51[1] = 0x1d;
                  *(undefined4 *)(puVar51 + 2) = 0x92244992;
                  *(undefined2 *)(puVar51 + 6) = 0x2449;
                  break;
                           case 0x14:
                  *(undefined2 *)((ulong)local_180 + param_1) = (short)uVar36;
                  ((undefined2 *)((ulong)local_180 + param_1))[1] = (short)uVar30;
                  break;
                           case 0x15:
                  uVar30 = 4;
                  if ((int)local_16c < 5) {
                    uVar30 = local_16c;
                  }
                  uVar61 = 4;
                  if ((int)param_19 < 5) {
                    uVar61 = param_19;
                  }
                  decoder_etc_block::get_block_colors5
                            ((color32 *)&local_78,(color32 *)(ulong)(byte)*peVar1,
                             (uint)(byte)peVar1[1]);
                  if (uVar61 != 0) {
                    sVar8 = *psVar66;
                    if (uVar30 != 0) {
                      lVar68 = 0;
                      lVar33 = param_1 + (ulong)local_170 * 4;
                      while( true ) {
                        uVar36 = 0;
                        uVar31 = 0;
                        do {
                          cVar48 = (char)uVar31;
                          uVar31 = uVar31 + 1;
                          iVar50 = (int)uVar36;
                          uVar62 = (ulong)((byte)sVar8 >> (cVar48 * '\x02' & 0x1fU) & 3);
                          uVar9 = *(undefined1 *)((long)&local_78 + uVar62 * 4 + 2);
                          *(undefined2 *)(lVar33 + uVar36) =
                               *(undefined2 *)((color32 *)&local_78 + uVar62 * 4);
                          uVar36 = (ulong)(iVar50 + 4);
                          *(undefined1 *)(lVar33 + (ulong)(iVar50 + 2)) = uVar9;
                        } while (uVar30 != uVar31);
                        lVar68 = lVar68 + 1;
                        lVar33 = lVar33 + (ulong)param_15 * 4;
                        if (uVar61 <= (uint)lVar68) break;
                        sVar8 = psVar66[lVar68];
                      }
                    }
                  }
                  break;
                           case 0x16:
                  uVar30 = 4;
                  if ((int)local_16c < 5) {
                    uVar30 = local_16c;
                  }
                  uVar61 = 4;
                  if ((int)param_19 < 5) {
                    uVar61 = param_19;
                  }
                  decoder_etc_block::get_block_colors5
                            ((color32 *)&local_78,(color32 *)(ulong)(byte)*peVar1,
                             (uint)(byte)peVar1[1]);
                  if (uVar61 != 0) {
                    sVar8 = *psVar66;
                    if (uVar30 != 0) {
                      lVar68 = 0;
                      lVar33 = param_1 + (ulong)local_170 * 4;
                      while( true ) {
                        uVar31 = 0;
                        uVar42 = 0;
                        do {
                          cVar48 = (char)uVar42;
                          uVar42 = uVar42 + 1;
                          uVar36 = (ulong)((byte)sVar8 >> (cVar48 * '\x02' & 0x1fU) & 3);
                          uVar9 = *(undefined1 *)((long)&local_78 + uVar36 * 4 + 2);
                          *(undefined2 *)(lVar33 + (ulong)uVar31) =
                               *(undefined2 *)((color32 *)&local_78 + uVar36 * 4);
                          *(undefined1 *)(lVar33 + (ulong)(uVar31 + 2)) = uVar9;
                          uVar59 = uVar31 + 3;
                          uVar31 = uVar31 + 4;
                          *(undefined1 *)(lVar33 + (ulong)uVar59) = 0xff;
                        } while (uVar30 != uVar42);
                        lVar68 = lVar68 + 1;
                        lVar33 = lVar33 + (ulong)param_15 * 4;
                        if (uVar61 <= (uint)lVar68) break;
                        sVar8 = psVar66[lVar68];
                      }
                    }
                  }
                  break;
                           case 0x17:
                  uVar36 = (ulong)(byte)peVar1[4];
                  lVar33 = param_1 + (ulong)local_170 * 4;
                  uVar30 = 4;
                  if ((int)local_16c < 5) {
                    uVar30 = local_16c;
                  }
                  uVar61 = 4;
                  if ((int)param_19 < 5) {
                    uVar61 = param_19;
                  }
                  local_6c = (uint)(byte)peVar1[1] << 3 | (uint)((byte)peVar1[1] >> 2);
                  local_78 = (&g_etc1_inten_tables)[uVar36 * 4] + local_6c;
                  if (0xff < local_78) {
                    local_78 = ~((int)local_78 >> 0x1f) & 0xff;
                  }
                  local_74 = (&DAT_0017f444)[uVar36 * 4] + local_6c;
                  if (0xff < local_74) {
                    local_74 = ~((int)local_74 >> 0x1f) & 0xff;
                  }
                  local_70 = (&DAT_0017f448)[uVar36 * 4] + local_6c;
                  if (0xff < local_70) {
                    local_70 = ~((int)local_70 >> 0x1f) & 0xff;
                  }
                  local_6c = local_6c + (&DAT_0017f44c)[uVar36 * 4];
                  if (0xff < local_6c) {
                    local_6c = ~((int)local_6c >> 0x1f) & 0xff;
                  }
                  if (uVar30 == 4) {
                    if (uVar61 != 0) {
                      lVar68 = 0;
                      do {
                        sVar8 = psVar66[lVar68];
                        lVar68 = lVar68 + 1;
                        *(char *)(lVar33 + 3) = (char)(&local_78)[(byte)sVar8 & 3];
                        *(char *)(lVar33 + 7) = (char)(&local_78)[(byte)sVar8 >> 2 & 3];
                        uVar20 = (&local_78)[(byte)sVar8 >> 4 & 3];
                        *(char *)(lVar33 + 0xf) = (char)(&local_78)[(byte)sVar8 >> 6];
                        *(char *)(lVar33 + 0xb) = (char)uVar20;
                        lVar33 = lVar33 + (ulong)param_15 * 4;
                      } while ((uint)lVar68 < uVar61);
                    }
                  }
                  else if (uVar61 != 0) {
                    lVar68 = 0;
                    if (uVar30 == 0) {
                      do {
                        lVar68 = lVar68 + 1;
                      } while ((uint)lVar68 < uVar61);
                    }
                    else {
                      sVar8 = *psVar66;
                      while( true ) {
                        uVar31 = 0;
                        uVar36 = 3;
                        do {
                          cVar48 = (char)uVar31;
                          uVar31 = uVar31 + 1;
                          *(char *)(lVar33 + uVar36) =
                               (char)(&local_78)[(byte)sVar8 >> (cVar48 * '\x02' & 0x1fU) & 3];
                          uVar36 = (ulong)((int)uVar36 + 4);
                        } while (uVar30 != uVar31);
                        lVar68 = lVar68 + 1;
                        lVar33 = lVar33 + (ulong)param_15 * 4;
                        if (uVar61 <= (uint)lVar68) break;
                        sVar8 = psVar66[lVar68];
                      }
                    }
                  }
                  break;
                           case 0x18:
                           case 0x19:
                  lVar33 = param_1 + (ulong)local_170 * 2;
                  uVar30 = 4;
                  if ((int)local_16c < 5) {
                    uVar30 = local_16c;
                  }
                  uVar61 = 4;
                  if ((int)param_19 < 5) {
                    uVar61 = param_19;
                  }
                  decoder_etc_block::get_block_colors5
                            ((color32 *)&local_78,(color32 *)(ulong)(byte)*peVar1,
                             (uint)(byte)peVar1[1]);
                  pcVar54 = (color32 *)&local_78;
                  puVar63 = (ushort *)&local_88;
                  if (param_7 == 0x18) {
                    do {
                      pcVar55 = pcVar54 + 4;
                      uVar31 = ((uint)(byte)*pcVar54 * 0x20 - (uint)(byte)*pcVar54) + 0x80;
                      uVar59 = (uint)(byte)pcVar54[1] * 0x3f + 0x80;
                      uVar42 = ((uint)(byte)pcVar54[2] * 0x20 - (uint)(byte)pcVar54[2]) + 0x80;
                      *puVar63 = (ushort)((uVar31 + (uVar31 >> 8) >> 8) << 0xb) |
                                 (ushort)(((uVar59 >> 8) + uVar59 >> 8) << 5) |
                                 (ushort)((uVar42 >> 8) + uVar42 >> 8);
                      pcVar54 = pcVar55;
                      puVar63 = puVar63 + 1;
                    } while (local_68 != pcVar55);
                  }
                  else {
                    do {
                      pcVar55 = pcVar54 + 4;
                      uVar31 = ((uint)(byte)pcVar54[2] * 0x20 - (uint)(byte)pcVar54[2]) + 0x80;
                      uVar59 = (uint)(byte)pcVar54[1] * 0x3f + 0x80;
                      uVar42 = ((uint)(byte)*pcVar54 * 0x20 - (uint)(byte)*pcVar54) + 0x80;
                      *puVar63 = (ushort)((uVar31 + (uVar31 >> 8) >> 8) << 0xb) |
                                 (ushort)(((uVar59 >> 8) + uVar59 >> 8) << 5) |
                                 (ushort)((uVar42 >> 8) + uVar42 >> 8);
                      pcVar54 = pcVar55;
                      puVar63 = puVar63 + 1;
                    } while (local_68 != pcVar55);
                  }
                  if (uVar61 != 0) {
                    lVar68 = 0;
                    if (uVar30 == 0) {
                      do {
                        lVar68 = lVar68 + 1;
                      } while ((uint)lVar68 < uVar61);
                    }
                    else {
                      sVar8 = *psVar66;
                      while( true ) {
                        uVar36 = 0;
                        do {
                          *(undefined2 *)(lVar33 + uVar36 * 2) =
                               *(undefined2 *)
                                ((long)&local_88 +
                                (ulong)((byte)sVar8 >> ((char)uVar36 * '\x02' & 0x1fU) & 3) * 2);
                          uVar36 = uVar36 + 1;
                        } while (uVar30 != uVar36);
                        lVar68 = lVar68 + 1;
                        lVar33 = lVar33 + (ulong)param_15 * 2;
                        if (uVar61 <= (uint)lVar68) break;
                        sVar8 = psVar66[lVar68];
                      }
                    }
                  }
                  break;
                           case 0x1a:
                  lVar33 = (ulong)local_170 * 2 + param_1;
                  uVar30 = 4;
                  if ((int)local_16c < 5) {
                    uVar30 = local_16c;
                  }
                  uVar61 = 4;
                  if ((int)param_19 < 5) {
                    uVar61 = param_19;
                  }
                  decoder_etc_block::get_block_colors5
                            ((color32 *)&local_78,(color32 *)(ulong)(byte)*peVar1,
                             (uint)(byte)peVar1[1]);
                  pcVar54 = (color32 *)&local_78;
                  puVar63 = (ushort *)&local_88;
                  do {
                    pcVar55 = pcVar54 + 4;
                    uVar31 = ((uint)(byte)*pcVar54 * 0x10 - (uint)(byte)*pcVar54) + 0x80;
                    iVar50 = (uint)(byte)pcVar54[1] * 0xf + 0x80;
                    uVar42 = ((uint)(byte)pcVar54[2] * 0x10 - (uint)(byte)pcVar54[2]) + 0x80;
                    *puVar63 = (ushort)((uVar31 + (uVar31 >> 8) >> 8) << 0xc) |
                               (short)iVar50 + (short)((uint)iVar50 >> 8) & 0xff00U |
                               (ushort)(((uVar42 >> 8) + uVar42 >> 8) << 4);
                    pcVar54 = pcVar55;
                    puVar63 = puVar63 + 1;
                  } while (local_68 != pcVar55);
                  if (uVar61 != 0) {
                    lVar68 = 0;
                    if (uVar30 == 0) {
                      do {
                        lVar68 = lVar68 + 1;
                      } while ((uint)lVar68 < uVar61);
                    }
                    else {
                      sVar8 = *psVar66;
                      while( true ) {
                        uVar36 = 0;
                        do {
                          *(ushort *)(lVar33 + uVar36 * 2) =
                               *(ushort *)(lVar33 + uVar36 * 2) & 0xf |
                               *(ushort *)
                                ((long)&local_88 +
                                (ulong)((byte)sVar8 >> ((char)uVar36 * '\x02' & 0x1fU) & 3) * 2);
                          uVar36 = uVar36 + 1;
                        } while (uVar30 != uVar36);
                        lVar68 = lVar68 + 1;
                        lVar33 = lVar33 + (ulong)param_15 * 2;
                        if (uVar61 <= (uint)lVar68) break;
                        sVar8 = psVar66[lVar68];
                      }
                    }
                  }
                  break;
                           case 0x1b:
                  lVar33 = (ulong)local_170 * 2 + param_1;
                  uVar30 = 4;
                  if ((int)local_16c < 5) {
                    uVar30 = local_16c;
                  }
                  uVar61 = 4;
                  if ((int)param_19 < 5) {
                    uVar61 = param_19;
                  }
                  decoder_etc_block::get_block_colors5
                            ((color32 *)&local_78,(color32 *)(ulong)(byte)*peVar1,
                             (uint)(byte)peVar1[1]);
                  lVar68 = 0;
                  do {
                    bVar53 = *(byte *)((long)&local_78 + lVar68 * 4 + 1);
                    uVar31 = ((uint)bVar53 * 0x10 - (uint)bVar53) + 0x80;
                    *(short *)((long)&local_88 + lVar68 * 2) = (short)(uVar31 + (uVar31 >> 8) >> 8);
                    lVar68 = lVar68 + 1;
                  } while (lVar68 != 4);
                  if (uVar61 != 0) {
                    lVar68 = 0;
                    if (uVar30 == 0) {
                      do {
                        lVar68 = lVar68 + 1;
                      } while ((uint)lVar68 < uVar61);
                    }
                    else {
                      sVar8 = *psVar66;
                      while( true ) {
                        uVar36 = 0;
                        do {
                          *(undefined2 *)(lVar33 + uVar36 * 2) =
                               *(undefined2 *)
                                ((long)&local_88 +
                                (ulong)((byte)sVar8 >> ((char)uVar36 * '\x02' & 0x1fU) & 3) * 2);
                          uVar36 = uVar36 + 1;
                        } while (uVar30 != uVar36);
                        lVar68 = lVar68 + 1;
                        lVar33 = lVar33 + (ulong)param_15 * 2;
                        if (uVar61 <= (uint)lVar68) break;
                        sVar8 = psVar66[lVar68];
                      }
                    }
                  }
                  break;
                           case 0x1c:
                  lVar33 = (ulong)local_170 * 2 + param_1;
                  uVar30 = 4;
                  if ((int)local_16c < 5) {
                    uVar30 = local_16c;
                  }
                  uVar61 = 4;
                  if ((int)param_19 < 5) {
                    uVar61 = param_19;
                  }
                  decoder_etc_block::get_block_colors5
                            ((color32 *)&local_78,(color32 *)(ulong)(byte)*peVar1,
                             (uint)(byte)peVar1[1]);
                  pcVar54 = (color32 *)&local_78;
                  puVar63 = (ushort *)&local_88;
                  do {
                    pcVar55 = pcVar54 + 4;
                    uVar31 = ((uint)(byte)*pcVar54 * 0x10 - (uint)(byte)*pcVar54) + 0x80;
                    uVar42 = ((uint)(byte)pcVar54[1] * 0x10 - (uint)(byte)pcVar54[1]) + 0x80;
                    uVar59 = (uint)(byte)pcVar54[2] * 0xf + 0x80;
                    *puVar63 = (ushort)((uVar31 + (uVar31 >> 8) >> 8) << 0xc) |
                               (ushort)(((uVar59 >> 8) + uVar59 >> 8) << 4) |
                               (short)((uVar42 >> 8) + uVar42 >> 8) << 8 | 0xf;
                    pcVar54 = pcVar55;
                    puVar63 = puVar63 + 1;
                  } while (local_68 != pcVar55);
                  if (uVar61 != 0) {
                    lVar68 = 0;
                    if (uVar30 == 0) {
                      do {
                        lVar68 = lVar68 + 1;
                      } while ((uint)lVar68 < uVar61);
                    }
                    else {
                      sVar8 = *psVar66;
                      while( true ) {
                        uVar36 = 0;
                        do {
                          *(undefined2 *)(lVar33 + uVar36 * 2) =
                               *(undefined2 *)
                                ((long)&local_88 +
                                (ulong)((byte)sVar8 >> ((char)uVar36 * '\x02' & 0x1fU) & 3) * 2);
                          uVar36 = uVar36 + 1;
                        } while (uVar30 != uVar36);
                        lVar68 = lVar68 + 1;
                        lVar33 = lVar33 + (ulong)param_15 * 2;
                        if (uVar61 <= (uint)lVar68) break;
                        sVar8 = psVar66[lVar68];
                      }
                    }
                  }
                        }

                        local_170 = local_170 + 4;
                        uVar29 = uVar29 + 1;
                        local_180 = local_180 + param_8;
                        local_16c = local_16c - 4;
                        local_17c = local_17c + 1;
                        local_1a0 = local_1a0 + 4;
                        uVar36 = uVar70;
                        uVar30 = uVar71;
                     }
 while ( param_2 != uVar29 );
                  }

                  local_184 = local_184 + 1;
                  iVar69 = iVar69 + param_15;
                  param_19 = param_19 - 4;
                  uVar49 = uVar49 + iVar41;
                  uVar27 = uVar27 + param_2;
               }
 while ( param_3 != local_184 );
               if (local_168 != 0) goto LAB_0010b060;
            }

            if (__ptr != (void*)0x0) {
               free(__ptr);
            }

         }

         if (local_e8 != (uint*)0x0) {
            free(local_e8);
         }

         goto LAB_0010b07b;
      }

   }

   LAB_0010b078:bVar72 = 0;
   LAB_0010b07b:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return bVar72;
}
/* basist::basis_validate_output_buffer_size(basist::transcoder_texture_format, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */ulong basist::basis_validate_output_buffer_size(int param_1, undefined8 param_2, int param_3, int param_4, int param_5, int param_6, uint param_7) {
   undefined7 uVar1;
   uint uVar2;
   uVar1 = ( undefined7 )((ulong)param_2 >> 8);
   uVar2 = (uint)param_2;
   if (param_1 < 0x11) {
      if (0xc < param_1) {
         LAB_0010e478:if (param_5 != 0) {
            param_3 = param_5;
         }

         if (param_6 != 0) {
            param_4 = param_6;
         }

         return CONCAT71(uVar1, ( uint )(param_3 * param_4) <= uVar2) & 0xffffffff;
      }

   }
 else {
      if (param_1 - 0x18U < 3) goto LAB_0010e478;
      if (param_1 == 0x11) {
         return CONCAT71(uVar1, ( param_3 + 7U >> 3 ) * ( param_4 + 3U >> 2 ) <= uVar2) & 0xffffffff;
      }

   }

   return CONCAT71(uVar1, param_7 <= uVar2) & 0xffffffff;
}
/* basist::basisu_lowlevel_uastc_transcoder::basisu_lowlevel_uastc_transcoder() */void basist::basisu_lowlevel_uastc_transcoder::basisu_lowlevel_uastc_transcoder(basisu_lowlevel_uastc_transcoder *this) {
   return;
}
/* basist::basisu_transcoder::basisu_transcoder() */void basist::basisu_transcoder::basisu_transcoder(basisu_transcoder *this) {
   basisu_lowlevel_etc1s_transcoder::basisu_lowlevel_etc1s_transcoder((basisu_lowlevel_etc1s_transcoder*)this);
   this[0x312] = (basisu_transcoder)0x0;
   return;
}
/* basist::basisu_transcoder::validate_file_checksums(void const*, unsigned int, bool) const */char basist::basisu_transcoder::validate_file_checksums(basisu_transcoder *this, void *param_1, uint param_2, bool param_3) {
   byte bVar1;
   char cVar2;
   uint uVar3;
   uint uVar4;
   byte *pbVar5;
   byte *pbVar6;
   cVar2 = '\0';
   if (0x4d < param_2) {
      cVar2 = validate_header(param_1, param_2);
      if (cVar2 != '\0') {
         pbVar5 = (byte*)( (long)param_1 + 8 );
         pbVar6 = (byte*)( (long)param_1 + 0x4d );
         uVar3 = 0xffffffff;
         do {
            bVar1 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            uVar4 = (uint)bVar1 ^ uVar3 >> 8 & 0xff;
            uVar4 = uVar4 >> 4 ^ uVar4;
            uVar3 = uVar3 << 8 ^ uVar4 ^ uVar4 << 5 ^ uVar4 << 0xc;
         }
 while ( pbVar5 != pbVar6 );
         if ((ushort)~(ushort)uVar3 != *(ushort*)( (long)param_1 + 6 )) {
            return '\0';
         }

         if (param_3 != false) {
            if (( ulong ) * (uint*)( (long)param_1 + 8 ) == 0) {
               uVar3 = 0;
            }
 else {
               uVar3 = 0xffffffff;
               do {
                  bVar1 = *pbVar6;
                  pbVar6 = pbVar6 + 1;
                  uVar4 = (uint)bVar1 ^ uVar3 >> 8 & 0xff;
                  uVar4 = uVar4 >> 4 ^ uVar4;
                  uVar3 = uVar3 << 8 ^ uVar4 ^ uVar4 << 5 ^ uVar4 << 0xc;
               }
 while ( (byte*)( (long)param_1 + ( ulong ) * (uint*)( (long)param_1 + 8 ) + 0x4d ) != pbVar6 );
               uVar3 = ~uVar3 & 0xffff;
            }

            cVar2 = *(ushort*)( (long)param_1 + 0xc ) == uVar3;
         }

      }

   }

   return cVar2;
}
/* basist::basisu_transcoder::validate_header_quick(void const*, unsigned int) const */undefined8 basist::basisu_transcoder::validate_header_quick(basisu_transcoder *this, void *param_1, uint param_2) {
   undefined8 uVar1;
   if (0x4d < param_2) {
      uVar1 = validate_header_quick(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* basist::basisu_transcoder::validate_header(void const*, unsigned int) const */undefined8 basist::basisu_transcoder::validate_header(basisu_transcoder *this, void *param_1, uint param_2) {
   undefined8 uVar1;
   if (0x4d < param_2) {
      uVar1 = validate_header(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* basist::basisu_transcoder::get_texture_type(void const*, unsigned int) const */ulong basist::basisu_transcoder::get_texture_type(basisu_transcoder *this, void *param_1, uint param_2) {
   char cVar1;
   ulong uVar2;
   uVar2 = 1;
   if (0x4d < param_2) {
      cVar1 = validate_header_quick(param_1, param_2);
      if (cVar1 != '\0') {
         uVar2 = uVar2 & 0xffffffff;
         if (*(byte*)( (long)param_1 + 0x17 ) < 5) {
            uVar2 = ( ulong ) * (byte*)( (long)param_1 + 0x17 );
         }

      }

   }

   return uVar2 & 0xffffffff;
}
/* basist::basisu_transcoder::get_userdata(void const*, unsigned int, unsigned int&, unsigned int&)
   const */undefined8 basist::basisu_transcoder::get_userdata(basisu_transcoder *this, void *param_1, uint param_2, uint *param_3, uint *param_4) {
   undefined8 uVar1;
   uVar1 = 0;
   if (0x4d < param_2) {
      uVar1 = validate_header_quick(param_1, param_2);
      if ((char)uVar1 != '\0') {
         *param_3 = *(uint*)( (long)param_1 + 0x1f );
         *param_4 = *(uint*)( (long)param_1 + 0x23 );
      }

   }

   return uVar1;
}
/* basist::basisu_transcoder::get_total_images(void const*, unsigned int) const */ulong basist::basisu_transcoder::get_total_images(basisu_transcoder *this, void *param_1, uint param_2) {
   char cVar1;
   ulong uVar2;
   uVar2 = 0;
   if (0x4d < param_2) {
      cVar1 = validate_header_quick(param_1, param_2);
      if (cVar1 != '\0') {
         uVar2 = ( ulong )(( uint ) * (byte*)( (long)param_1 + 0x13 ) << 0x10 | ( uint ) * (byte*)( (long)param_1 + 0x12 ) << 8 | ( uint ) * (byte*)( (long)param_1 + 0x11 ));
      }

   }

   return uVar2 & 0xffffffff;
}
/* basist::basisu_transcoder::get_tex_format(void const*, unsigned int) const */ulong basist::basisu_transcoder::get_tex_format(basisu_transcoder *this, void *param_1, uint param_2) {
   char cVar1;
   ulong uVar2;
   uVar2 = 0;
   if (0x4d < param_2) {
      cVar1 = validate_header_quick(param_1, param_2);
      if (cVar1 != '\0') {
         uVar2 = ( ulong ) * (byte*)( (long)param_1 + 0x14 );
      }

   }

   return uVar2 & 0xffffffff;
}
/* basist::basisu_transcoder::get_file_info(void const*, unsigned int, basist::basisu_file_info&)
   const */undefined4 basist::basisu_transcoder::get_file_info(basisu_transcoder *this, void *param_1, uint param_2, basisu_file_info *param_3) {
   uint *puVar1;
   byte bVar2;
   ushort uVar3;
   ushort uVar4;
   long lVar5;
   undefined4 uVar6;
   uint uVar7;
   byte *pbVar8;
   ulong uVar9;
   uint uVar10;
   uint uVar11;
   uint *puVar12;
   uint uVar13;
   uVar6 = validate_file_checksums(this, param_1, param_2, false);
   if ((char)uVar6 != '\0') {
      uVar11 = *(uint*)( (long)param_1 + 0x41 );
      *(uint*)param_3 = ( uint ) * (ushort*)( (long)param_1 + 2 );
      *(uint*)( param_3 + 4 ) = ( ( uint ) * (byte*)( (long)param_1 + 0x10 ) << 0x10 | ( uint ) * (byte*)( (long)param_1 + 0xf ) << 8 | ( uint ) * (byte*)( (long)param_1 + 0xe ) ) * 0x17 + 0x4d;
      *(uint*)( param_3 + 8 ) = ( uint ) * (ushort*)( (long)param_1 + 0x30 );
      *(undefined4*)( param_3 + 0xc ) = *(undefined4*)( (long)param_1 + 0x32 );
      *(uint*)( param_3 + 0x10 ) = ( uint ) * (byte*)( (long)param_1 + 0x38 ) << 0x10 | ( uint ) * (byte*)( (long)param_1 + 0x37 ) << 8 | ( uint ) * (byte*)( (long)param_1 + 0x36 );
      *(uint*)( param_3 + 0x14 ) = ( uint ) * (ushort*)( (long)param_1 + 0x27 );
      *(undefined4*)( param_3 + 0x18 ) = *(undefined4*)( (long)param_1 + 0x29 );
      *(uint*)( param_3 + 0x1c ) = ( uint ) * (byte*)( (long)param_1 + 0x2f ) << 0x10 | ( uint ) * (byte*)( (long)param_1 + 0x2e ) << 8 | ( uint ) * (byte*)( (long)param_1 + 0x2d );
      *(undefined4*)( param_3 + 0x20 ) = *(undefined4*)( (long)param_1 + 0x39 );
      *(undefined4*)( param_3 + 0x24 ) = *(undefined4*)( (long)param_1 + 0x3d );
      *(uint*)( param_3 + 0x68 ) = ( uint ) * (byte*)( (long)param_1 + 0x14 );
      param_3[0x6d] = ( basisu_file_info )(*(char*)( (long)param_1 + 0x14 ) == '\0');
      param_3[0x6c] = ( basisu_file_info )(( byte )(*(ushort*)( (long)param_1 + 0x15 ) >> 1) & 1);
      param_3[0x6e] = ( basisu_file_info )(( byte )(*(ushort*)( (long)param_1 + 0x15 ) >> 2) & 1);
      uVar13 = ( uint ) * (byte*)( (long)param_1 + 0xf ) << 8 | ( uint ) * (byte*)( (long)param_1 + 0x10 ) << 0x10 | ( uint ) * (byte*)( (long)param_1 + 0xe );
      uVar7 = *(uint*)( param_3 + 0x40 );
      if (uVar13 != uVar7) {
         if (( uVar7 <= uVar13 ) && ( *(uint*)( param_3 + 0x44 ) < uVar13 )) {
            basisu::elemental_vector::increase_capacity((elemental_vector*)( param_3 + 0x38 ), uVar13, uVar7 + 1 == uVar13, 0x34, (_func_void_void_ptr_void_ptr_uint*)0x0, false);
         }

         *(uint*)( param_3 + 0x40 ) = uVar13;
      }

      *(undefined4*)( param_3 + 0x28 ) = 0;
      bVar2 = *(byte*)( (long)param_1 + 0x17 );
      *(uint*)( param_3 + 0x2c ) = (uint)bVar2;
      if (bVar2 < 6) {
         *(uint*)( param_3 + 0x30 ) = ( uint ) * (byte*)( (long)param_1 + 0x1a ) << 0x10 | ( uint ) * (byte*)( (long)param_1 + 0x19 ) << 8 | ( uint ) * (byte*)( (long)param_1 + 0x18 );
         *(undefined4*)( param_3 + 0x60 ) = *(undefined4*)( (long)param_1 + 0x1f );
         *(undefined4*)( param_3 + 100 ) = *(undefined4*)( (long)param_1 + 0x23 );
         if (*(int*)( param_3 + 0x58 ) != 0) {
            *(undefined4*)( param_3 + 0x58 ) = 0;
         }

         uVar7 = ( uint ) * (byte*)( (long)param_1 + 0x13 ) << 0x10 | ( uint ) * (byte*)( (long)param_1 + 0x12 ) << 8 | ( uint ) * (byte*)( (long)param_1 + 0x11 );
         if (uVar7 == 0) {
            uVar7 = 0;
         }
 else {
            uVar9 = 0;
            if (*(uint*)( param_3 + 0x5c ) < uVar7) {
               basisu::elemental_vector::increase_capacity((elemental_vector*)( param_3 + 0x50 ), uVar7, uVar7 == 1, 4, (_func_void_void_ptr_void_ptr_uint*)0x0, false);
               uVar9 = ( ulong ) * (uint*)( param_3 + 0x58 );
            }

            memset((void*)( *(long*)( param_3 + 0x50 ) + uVar9 * 4 ), 0, ( ulong )(uVar7 - (int)uVar9) << 2);
            *(uint*)( param_3 + 0x58 ) = uVar7;
            uVar7 = ( uint ) * (byte*)( (long)param_1 + 0x13 ) << 0x10 | ( uint ) * (byte*)( (long)param_1 + 0x12 ) << 8 | ( uint ) * (byte*)( (long)param_1 + 0x11 );
         }

         *(uint*)( param_3 + 0x48 ) = uVar7;
         if (uVar13 == 0) {
            return uVar6;
         }

         puVar12 = *(uint**)( param_3 + 0x38 );
         uVar7 = 0;
         pbVar8 = (byte*)( (ulong)uVar11 + (long)param_1 );
         while (true) {
            *(int*)( param_3 + 0x28 ) = *(int*)( param_3 + 0x28 ) + *(int*)( pbVar8 + 0x11 );
            *puVar12 = ( uint ) * (ushort*)( pbVar8 + 5 );
            puVar12[1] = ( uint ) * (ushort*)( pbVar8 + 7 );
            puVar12[2] = ( uint ) * (ushort*)( pbVar8 + 9 ) << 2;
            puVar12[3] = ( uint ) * (ushort*)( pbVar8 + 0xb ) << 2;
            uVar3 = *(ushort*)( pbVar8 + 9 );
            puVar12[4] = (uint)uVar3;
            uVar4 = *(ushort*)( pbVar8 + 0xb );
            puVar12[5] = (uint)uVar4;
            puVar12[6] = (uint)uVar4 * (uint)uVar3;
            uVar11 = *(uint*)( pbVar8 + 0x11 );
            puVar12[8] = uVar7;
            puVar12[7] = uVar11;
            puVar12[9] = (uint)pbVar8[2] << 0x10 | (uint)pbVar8[1] << 8 | ( uint ) * pbVar8;
            puVar12[10] = (uint)pbVar8[3];
            puVar12[0xb] = ( uint ) * (ushort*)( pbVar8 + 0x15 );
            *(byte*)( puVar12 + 0xc ) = pbVar8[4] & 1;
            *(byte*)( (long)puVar12 + 0x31 ) = pbVar8[4] >> 1 & 1;
            uVar11 = (uint)pbVar8[2] << 0x10 | (uint)pbVar8[1] << 8 | ( uint ) * pbVar8;
            if (( ( uint ) * (byte*)( (long)param_1 + 0x13 ) << 0x10 | ( uint ) * (byte*)( (long)param_1 + 0x12 ) << 8 | ( uint ) * (byte*)( (long)param_1 + 0x11 ) ) <= uVar11) break;
            lVar5 = *(long*)( param_3 + 0x50 );
            puVar1 = (uint*)( lVar5 + (long)(int)uVar11 * 4 );
            uVar11 = *puVar1;
            uVar10 = pbVar8[3] + 1;
            if (pbVar8[3] + 1 < uVar11) {
               uVar10 = uVar11;
            }

            *puVar1 = uVar10;
            if (0x10 < *(uint*)( lVar5 + (long)(int)( (uint)pbVar8[2] << 0x10 | (uint)pbVar8[1] << 8 | ( uint ) * pbVar8 ) * 4 )) {
               return 0;
            }

            uVar7 = uVar7 + 1;
            pbVar8 = pbVar8 + 0x17;
            puVar12 = puVar12 + 0xd;
            if (uVar13 == uVar7) {
               return uVar6;
            }

         }
;
      }

   }

   return 0;
}
/* basist::basisu_transcoder::start_transcoding(void const*, unsigned int) */undefined4 basist::basisu_transcoder::start_transcoding(basisu_transcoder *this, void *param_1, uint param_2) {
   uint uVar1;
   uint uVar2;
   long lVar3;
   char cVar4;
   undefined4 uVar5;
   uint uVar6;
   uint uVar7;
   if (param_2 < 0x4e) {
      return 0;
   }

   uVar5 = validate_header_quick(param_1, param_2);
   if ((char)uVar5 == '\0') {
      return 0;
   }

   if (*(char*)( (long)param_1 + 0x14 ) == '\0') {
      if (*(int*)( this + 0x10 ) != 0) {
         if (*(void**)( this + 8 ) != (void*)0x0) {
            free(*(void**)( this + 8 ));
            *(undefined8*)( this + 8 ) = 0;
            *(undefined8*)( this + 0x10 ) = 0;
         }

         if (*(void**)( this + 0x18 ) != (void*)0x0) {
            free(*(void**)( this + 0x18 ));
            *(undefined8*)( this + 0x18 ) = 0;
            *(undefined8*)( this + 0x20 ) = 0;
         }

         for (int i = 0; i < 4; i++) {
            huffman_decoding_table::clear((huffman_decoding_table*)( this + ( 48*i + 40 ) ));
         }

         *(undefined4*)( this + 0xe8 ) = 0;
      }

      if (( *(byte*)( (long)param_1 + 0x15 ) & 8 ) == 0) {
         uVar6 = ( uint ) * (byte*)( (long)param_1 + 0x2f ) << 0x10 | ( uint ) * (byte*)( (long)param_1 + 0x2e ) << 8 | ( uint ) * (byte*)( (long)param_1 + 0x2d );
         if (uVar6 == 0) {
            return 0;
         }

         uVar7 = ( uint ) * (byte*)( (long)param_1 + 0x38 ) << 0x10 | ( uint ) * (byte*)( (long)param_1 + 0x37 ) << 8 | ( uint ) * (byte*)( (long)param_1 + 0x36 );
         if (uVar7 == 0) {
            return 0;
         }

         if (*(uint*)( (long)param_1 + 0x3d ) == 0) {
            return 0;
         }

         uVar1 = *(uint*)( (long)param_1 + 0x29 );
         if (param_2 < uVar1) {
            return 0;
         }

         uVar2 = *(uint*)( (long)param_1 + 0x32 );
         if (param_2 < uVar2) {
            return 0;
         }

         if (param_2 < *(uint*)( (long)param_1 + 0x39 )) {
            return 0;
         }

         if (param_2 - uVar1 < uVar6) {
            return 0;
         }

         if (param_2 - uVar2 < uVar7) {
            return 0;
         }

         if (param_2 - *(uint*)( (long)param_1 + 0x39 ) < *(uint*)( (long)param_1 + 0x3d )) {
            return 0;
         }

         if (*(long*)this != 0) {
            return 0;
         }

         cVar4 = basisu_lowlevel_etc1s_transcoder::decode_palettes((basisu_lowlevel_etc1s_transcoder*)this, ( uint ) * (ushort*)( (long)param_1 + 0x27 ), (uchar*)( (ulong)uVar1 + (long)param_1 ), uVar6, ( uint ) * (ushort*)( (long)param_1 + 0x30 ), (uchar*)( (long)param_1 + (ulong)uVar2 ), uVar7);
         if (cVar4 == '\0') {
            return 0;
         }

         uVar7 = *(uint*)( (long)param_1 + 0x39 );
         uVar6 = *(uint*)( (long)param_1 + 0x3d );
      }
 else {
         lVar3 = *(long*)this;
         if (lVar3 == 0) {
            return 0;
         }

         if (*(uint*)( lVar3 + 0x10 ) == 0) {
            return 0;
         }

         if (*(uint*)( lVar3 + 0x10 ) != ( uint ) * (ushort*)( (long)param_1 + 0x27 )) {
            return 0;
         }

         if (*(uint*)( lVar3 + 0x20 ) != ( uint ) * (ushort*)( (long)param_1 + 0x30 )) {
            return 0;
         }

         uVar6 = *(uint*)( (long)param_1 + 0x3d );
         if (uVar6 == 0) {
            return 0;
         }

         uVar7 = *(uint*)( (long)param_1 + 0x39 );
         if (param_2 < uVar7) {
            return 0;
         }

         if (param_2 - uVar7 < uVar6) {
            return 0;
         }

      }

      cVar4 = basisu_lowlevel_etc1s_transcoder::decode_tables((basisu_lowlevel_etc1s_transcoder*)this, (uchar*)( (long)param_1 + (ulong)uVar7 ), uVar6);
      if (cVar4 == '\0') {
         return 0;
      }

   }
 else if (*(int*)( this + 0x10 ) != 0) {
      if (*(void**)( this + 8 ) != (void*)0x0) {
         free(*(void**)( this + 8 ));
         *(undefined8*)( this + 8 ) = 0;
         *(undefined8*)( this + 0x10 ) = 0;
      }

      if (*(void**)( this + 0x18 ) != (void*)0x0) {
         free(*(void**)( this + 0x18 ));
         *(undefined8*)( this + 0x18 ) = 0;
         *(undefined8*)( this + 0x20 ) = 0;
      }

      for (int i = 0; i < 4; i++) {
         huffman_decoding_table::clear((huffman_decoding_table*)( this + ( 48*i + 40 ) ));
      }

      *(undefined4*)( this + 0xe8 ) = 0;
   }

   this[0x312] = (basisu_transcoder)0x1;
   return uVar5;
}
/* basist::basisu_transcoder::stop_transcoding() */undefined8 basist::basisu_transcoder::stop_transcoding(basisu_transcoder *this) {
   if (*(void**)( this + 8 ) != (void*)0x0) {
      free(*(void**)( this + 8 ));
      *(undefined8*)( this + 8 ) = 0;
      *(undefined8*)( this + 0x10 ) = 0;
   }

   if (*(void**)( this + 0x18 ) != (void*)0x0) {
      free(*(void**)( this + 0x18 ));
      *(undefined8*)( this + 0x18 ) = 0;
      *(undefined8*)( this + 0x20 ) = 0;
   }

   for (int i = 0; i < 4; i++) {
      huffman_decoding_table::clear((huffman_decoding_table*)( this + ( 48*i + 40 ) ));
   }

   this[0x312] = (basisu_transcoder)0x0;
   *(undefined4*)( this + 0xe8 ) = 0;
   return 1;
}
/* basist::basisu_transcoder::find_first_slice_index(void const*, unsigned int, unsigned int,
   unsigned int) const */undefined1  [16] __thiscallbasist::basisu_transcoder::find_first_slice_index(basisu_transcoder *this, void *param_1, uint param_2, uint param_3, uint param_4) {
   byte bVar1;
   ulong uVar2;
   uint uVar3;
   undefined4 in_register_00000014;
   ulong uVar4;
   byte *pbVar5;
   uint uVar6;
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   uVar4 = CONCAT44(in_register_00000014, param_2);
   uVar6 = ( uint ) * (byte*)( (long)param_1 + 0x10 ) << 0x10 | ( uint ) * (byte*)( (long)param_1 + 0xf ) << 8 | ( uint ) * (byte*)( (long)param_1 + 0xe );
   if (uVar6 != 0) {
      pbVar5 = (byte*)( (long)param_1 + ( ulong ) * (uint*)( (long)param_1 + 0x41 ) );
      uVar2 = 0;
      do {
         uVar3 = (uint)pbVar5[2] << 0x10 | (uint)pbVar5[1] << 8 | ( uint ) * pbVar5;
         uVar4 = (ulong)uVar3;
         if (param_3 == uVar3) {
            bVar1 = pbVar5[3];
            uVar4 = (ulong)bVar1;
            if (param_4 == bVar1) {
               auVar7[8] = bVar1;
               auVar7._0_8_ = uVar2;
               auVar7._9_7_ = 0;
               return auVar7;
            }

         }

         uVar3 = (int)uVar2 + 1;
         uVar2 = (ulong)uVar3;
         pbVar5 = pbVar5 + 0x17;
      }
 while ( uVar3 != uVar6 );
   }

   auVar8._8_8_ = uVar4;
   auVar8._0_8_ = 0xffffffff;
   return auVar8;
}
/* basist::basisu_transcoder::get_image_level_desc(void const*, unsigned int, unsigned int, unsigned
   int, unsigned int&, unsigned int&, unsigned int&) const */undefined4 basist::basisu_transcoder::get_image_level_desc(basisu_transcoder *this, void *param_1, uint param_2, uint param_3, uint param_4, uint *param_5, uint *param_6, uint *param_7) {
   long lVar1;
   undefined4 uVar2;
   int iVar3;
   uVar2 = 0;
   if (0x4d < param_2) {
      uVar2 = validate_header_quick(param_1, param_2);
      if ((char)uVar2 != '\0') {
         iVar3 = find_first_slice_index(this, param_1, param_2, param_3, param_4);
         if (( iVar3 < 0 ) || ( ( ( uint ) * (byte*)( (long)param_1 + 0x12 ) << 8 | ( uint ) * (byte*)( (long)param_1 + 0x13 ) << 0x10 | ( uint ) * (byte*)( (long)param_1 + 0x11 ) ) <= param_3 )) {
            return 0;
         }

         lVar1 = ( ulong ) * (uint*)( (long)param_1 + 0x41 ) + (long)iVar3 * 0x17;
         *param_5 = ( uint ) * (ushort*)( (long)param_1 + lVar1 + 5 );
         *param_6 = ( uint ) * (ushort*)( (long)param_1 + lVar1 + 7 );
         *param_7 = ( uint ) * (ushort*)( (long)param_1 + lVar1 + 0xb ) * ( uint ) * (ushort*)( (long)param_1 + lVar1 + 9 );
      }

   }

   return uVar2;
}
/* basist::basisu_transcoder::get_image_level_info(void const*, unsigned int,
   basist::basisu_image_level_info&, unsigned int, unsigned int) const */undefined4 basist::basisu_transcoder::get_image_level_info(basisu_transcoder *this, void *param_1, uint param_2, basisu_image_level_info *param_3, uint param_4, uint param_5) {
   byte bVar1;
   ushort uVar2;
   uint uVar3;
   undefined4 uVar4;
   long lVar5;
   undefined4 uVar6;
   int iVar7;
   uint uVar8;
   uint uVar9;
   uVar6 = 0;
   if (0x4d < param_2) {
      uVar6 = validate_header_quick(param_1, param_2);
      if ((char)uVar6 != '\0') {
         iVar7 = find_first_slice_index(this, param_1, param_2, param_4, param_5);
         if (( iVar7 < 0 ) || ( ( ( uint ) * (byte*)( (long)param_1 + 0x12 ) << 8 | ( uint ) * (byte*)( (long)param_1 + 0x13 ) << 0x10 | ( uint ) * (byte*)( (long)param_1 + 0x11 ) ) <= param_4 )) {
            return 0;
         }

         uVar3 = *(uint*)( (long)param_1 + 0x41 );
         *(uint*)param_3 = param_4;
         *(uint*)( param_3 + 4 ) = param_5;
         lVar5 = (long)iVar7 * 0x17 + (ulong)uVar3;
         if (*(char*)( (long)param_1 + 0x14 ) == '\0') {
            bVar1 = ( byte )(*(ushort*)( (long)param_1 + 0x15 ) >> 2);
         }
 else {
            bVar1 = *(byte*)( (long)param_1 + lVar5 + 4 );
         }

         param_3[0x38] = ( basisu_image_level_info )(bVar1 & 1);
         param_3[0x39] = ( basisu_image_level_info )(*(byte*)( (long)param_1 + lVar5 + 4 ) >> 1 & 1);
         *(uint*)( param_3 + 0x10 ) = ( uint ) * (ushort*)( (long)param_1 + lVar5 + 9 ) << 2;
         *(uint*)( param_3 + 0x14 ) = ( uint ) * (ushort*)( (long)param_1 + lVar5 + 0xb ) << 2;
         *(uint*)( param_3 + 8 ) = ( uint ) * (ushort*)( (long)param_1 + lVar5 + 5 );
         *(uint*)( param_3 + 0xc ) = ( uint ) * (ushort*)( (long)param_1 + lVar5 + 7 );
         uVar9 = ( uint ) * (ushort*)( (long)param_1 + lVar5 + 9 );
         *(uint*)( param_3 + 0x18 ) = uVar9;
         uVar2 = *(ushort*)( (long)param_1 + lVar5 + 0xb );
         *(int*)( param_3 + 0x24 ) = iVar7;
         uVar8 = (uint)uVar2;
         *(uint*)( param_3 + 0x1c ) = uVar8;
         *(uint*)( param_3 + 0x20 ) = uVar8 * uVar9;
         *(undefined4*)( param_3 + 0x28 ) = *(undefined4*)( (long)param_1 + lVar5 + 0xd );
         uVar4 = *(undefined4*)( (long)param_1 + lVar5 + 0x11 );
         *(undefined8*)( param_3 + 0x30 ) = 0;
         *(undefined4*)( param_3 + 0x2c ) = uVar4;
         if (( *(char*)( (long)param_1 + 0x14 ) == '\0' ) && ( ( *(byte*)( (long)param_1 + 0x15 ) & 4 ) != 0 )) {
            lVar5 = (long)iVar7 * 0x17 + (ulong)uVar3 + 0x17;
            *(undefined4*)( param_3 + 0x30 ) = *(undefined4*)( (long)param_1 + lVar5 + 0xd );
            *(undefined4*)( param_3 + 0x34 ) = *(undefined4*)( (long)param_1 + lVar5 + 0x11 );
         }

      }

   }

   return uVar6;
}
/* basist::basisu_transcoder::get_image_info(void const*, unsigned int, basist::basisu_image_info&,
   unsigned int) const */ulong basist::basisu_transcoder::get_image_info(basisu_transcoder *this, void *param_1, uint param_2, basisu_image_info *param_3, uint param_4) {
   ushort uVar1;
   long lVar2;
   uint uVar3;
   int iVar4;
   uint uVar5;
   byte bVar6;
   byte *pbVar7;
   uint uVar8;
   uint uVar9;
   ulong uVar10;
   if (param_2 < 0x4e) {
      return 0;
   }

   uVar3 = validate_header_quick(param_1, param_2);
   uVar10 = (ulong)uVar3;
   if ((char)uVar3 != '\0') {
      iVar4 = find_first_slice_index(this, param_1, param_2, param_4, 0);
      if (( iVar4 < 0 ) || ( ( ( uint ) * (byte*)( (long)param_1 + 0x12 ) << 8 | ( uint ) * (byte*)( (long)param_1 + 0x13 ) << 0x10 | ( uint ) * (byte*)( (long)param_1 + 0x11 ) ) <= param_4 )) {
         return 0;
      }

      uVar5 = iVar4 + 1;
      uVar3 = *(uint*)( (long)param_1 + 0x41 );
      uVar9 = ( uint ) * (byte*)( (long)param_1 + 0x10 ) << 0x10 | ( uint ) * (byte*)( (long)param_1 + 0xf ) << 8 | ( uint ) * (byte*)( (long)param_1 + 0xe );
      if (uVar5 < uVar9) {
         uVar8 = 1;
         pbVar7 = (byte*)( (long)param_1 + (long)(int)uVar5 * 0x17 + (ulong)uVar3 );
         do {
            if (param_4 != ( (uint)pbVar7[2] << 0x10 | (uint)pbVar7[1] << 8 | ( uint ) * pbVar7 )) break;
            if (uVar8 < pbVar7[3] + 1) {
               uVar8 = pbVar7[3] + 1;
            }

            uVar5 = uVar5 + 1;
            pbVar7 = pbVar7 + 0x17;
         }
 while ( uVar5 < uVar9 );
         if (0x10 < uVar8) {
            return 0;
         }

      }
 else {
         uVar8 = 1;
      }

      *(uint*)param_3 = param_4;
      *(uint*)( param_3 + 4 ) = uVar8;
      lVar2 = (long)iVar4 * 0x17 + (ulong)uVar3;
      param_3[0x28] = (basisu_image_info)0x0;
      if (*(char*)( (long)param_1 + 0x14 ) == '\0') {
         bVar6 = ( byte )(*(ushort*)( (long)param_1 + 0x15 ) >> 2);
      }
 else {
         bVar6 = *(byte*)( (long)param_1 + lVar2 + 4 );
      }

      param_3[0x28] = ( basisu_image_info )(bVar6 & 1);
      param_3[0x29] = ( basisu_image_info )(*(byte*)( (long)param_1 + lVar2 + 4 ) >> 1 & 1);
      *(uint*)( param_3 + 0x10 ) = ( uint ) * (ushort*)( (long)param_1 + lVar2 + 9 ) << 2;
      *(uint*)( param_3 + 0x14 ) = ( uint ) * (ushort*)( (long)param_1 + lVar2 + 0xb ) << 2;
      *(uint*)( param_3 + 8 ) = ( uint ) * (ushort*)( (long)param_1 + lVar2 + 5 );
      *(uint*)( param_3 + 0xc ) = ( uint ) * (ushort*)( (long)param_1 + lVar2 + 7 );
      uVar5 = ( uint ) * (ushort*)( (long)param_1 + lVar2 + 9 );
      *(uint*)( param_3 + 0x18 ) = uVar5;
      uVar1 = *(ushort*)( (long)param_1 + lVar2 + 0xb );
      *(int*)( param_3 + 0x24 ) = iVar4;
      uVar3 = (uint)uVar1;
      *(uint*)( param_3 + 0x1c ) = uVar3;
      *(uint*)( param_3 + 0x20 ) = uVar3 * uVar5;
   }

   return uVar10 & 0xffffffff;
}
/* basist::basisu_transcoder::get_total_image_levels(void const*, unsigned int, unsigned int) const
    */ulong basist::basisu_transcoder::get_total_image_levels(basisu_transcoder *this, void *param_1, uint param_2, uint param_3) {
   char cVar1;
   int iVar2;
   byte *pbVar3;
   uint uVar4;
   uint uVar5;
   uint uVar6;
   ulong uVar7;
   uVar7 = 0;
   if (param_2 < 0x4e) {
      return 0;
   }

   cVar1 = validate_header_quick(param_1, param_2);
   if (cVar1 != '\0') {
      iVar2 = find_first_slice_index(this, param_1, param_2, param_3, 0);
      if (( -1 < iVar2 ) && ( param_3 < ( ( uint ) * (byte*)( (long)param_1 + 0x12 ) << 8 | ( uint ) * (byte*)( (long)param_1 + 0x13 ) << 0x10 | ( uint ) * (byte*)( (long)param_1 + 0x11 ) ) )) {
         uVar4 = iVar2 + 1;
         uVar5 = ( uint ) * (byte*)( (long)param_1 + 0x10 ) << 0x10 | ( uint ) * (byte*)( (long)param_1 + 0xf ) << 8 | ( uint ) * (byte*)( (long)param_1 + 0xe );
         if (uVar4 < uVar5) {
            uVar6 = 1;
            pbVar3 = (byte*)( ( ulong ) * (uint*)( (long)param_1 + 0x41 ) + (long)(int)uVar4 * 0x17 + (long)param_1 );
            do {
               if (param_3 != ( (uint)pbVar3[2] << 0x10 | (uint)pbVar3[1] << 8 | ( uint ) * pbVar3 )) break;
               if (uVar6 < pbVar3[3] + 1) {
                  uVar6 = pbVar3[3] + 1;
               }

               uVar4 = uVar4 + 1;
               pbVar3 = pbVar3 + 0x17;
            }
 while ( uVar4 < uVar5 );
            uVar7 = (ulong)uVar6;
            if (0x10 < uVar6) {
               uVar7 = 0;
            }

         }
 else {
            uVar7 = 1;
         }

      }

   }

   return uVar7 & 0xffffffff;
}
/* basist::basisu_transcoder::find_slice(void const*, unsigned int, unsigned int, unsigned int,
   bool) const */uint basist::basisu_transcoder::find_slice(basisu_transcoder *this, void *param_1, uint param_2, uint param_3, uint param_4, bool param_5) {
   char cVar1;
   byte *pbVar2;
   uint uVar3;
   uint uVar4;
   if (( param_2 < 0x4e ) || ( cVar1 = validate_header_quick(param_1, param_2) ),cVar1 == '\0') {
      return 0;
   }

   uVar4 = ( uint ) * (byte*)( (long)param_1 + 0x10 ) << 0x10 | ( uint ) * (byte*)( (long)param_1 + 0xf ) << 8 | ( uint ) * (byte*)( (long)param_1 + 0xe );
   if (uVar4 != 0) {
      pbVar2 = (byte*)( ( ulong ) * (uint*)( (long)param_1 + 0x41 ) + (long)param_1 );
      uVar3 = 0;
      do {
         if (( param_3 == ( (uint)pbVar2[2] << 0x10 | (uint)pbVar2[1] << 8 | ( uint ) * pbVar2 ) ) && ( param_4 == pbVar2[3] )) {
            if (*(char*)( (long)param_1 + 0x14 ) != '\0') {
               return uVar3;
            }

            if ((bool)( pbVar2[4] & 1 ) == param_5) {
               return uVar3;
            }

         }

         uVar3 = uVar3 + 1;
         pbVar2 = pbVar2 + 0x17;
      }
 while ( uVar3 != uVar4 );
   }

   return 0xffffffff;
}
/* basist::basisu_transcoder::write_opaque_alpha_blocks(unsigned int, unsigned int, void*,
   basist::block_format, unsigned int, unsigned int) */void basist::basisu_transcoder::write_opaque_alpha_blocks(int param_1, int param_2, long param_3, int param_4, int param_5, int param_6) {
   int iVar1;
   ulong uVar2;
   uint uVar3;
   int iVar4;
   uint uVar5;
   if (param_6 == 0) {
      param_6 = param_1;
   }

   if (( param_4 == 0xb ) || ( param_4 == 0x12 )) {
      if (( param_2 != 0 ) && ( param_1 != 0 )) {
         iVar4 = 0;
         uVar5 = 0;
         do {
            iVar1 = 0;
            uVar3 = uVar5;
            do {
               uVar2 = (ulong)uVar3;
               iVar1 = iVar1 + 1;
               uVar3 = uVar3 + param_5;
               *(undefined8*)( param_3 + uVar2 ) = 0x2449922449921dff;
            }
 while ( param_1 != iVar1 );
            iVar4 = iVar4 + 1;
            uVar5 = uVar5 + param_6 * param_5;
         }
 while ( param_2 != iVar4 );
         return;
      }

   }
 else if (( ( param_4 == 4 ) && ( param_2 != 0 ) ) && ( param_1 != 0 )) {
      iVar4 = 0;
      uVar5 = 0;
      do {
         iVar1 = 0;
         uVar3 = uVar5;
         do {
            uVar2 = (ulong)uVar3;
            iVar1 = iVar1 + 1;
            uVar3 = uVar3 + param_5;
            *(undefined8*)( param_3 + uVar2 ) = 0xffff;
         }
 while ( param_1 != iVar1 );
         iVar4 = iVar4 + 1;
         uVar5 = uVar5 + param_6 * param_5;
      }
 while ( iVar4 != param_2 );
   }

   return;
}
/* basist::basisu_lowlevel_etc1s_transcoder::transcode_image(basist::transcoder_texture_format,
   void*, unsigned int, unsigned char const*, unsigned int, unsigned int, unsigned int, unsigned
   int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned
   int, bool, bool, unsigned int, basist::basisu_transcoder_state*, unsigned int) */ulong basist::basisu_lowlevel_etc1s_transcoder::transcode_image(basisu_lowlevel_etc1s_transcoder *this, uint param_2, long param_3, undefined4 param_4, long param_5, uint param_6, int param_7, int param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, uint param_12, uint param_13, uint param_14, uint param_15, uint param_16, char param_17, undefined1 param_18, int param_19, undefined8 param_20, undefined4 param_21) {
   char cVar1;
   uint uVar2;
   int iVar3;
   ulong uVar4;
   long lVar5;
   uint uVar6;
   ulong uVar7;
   int iVar8;
   long lVar9;
   byte bVar10;
   undefined4 local_3c;
   uVar4 = (ulong)param_12;
   if ((ulong)param_6 < param_13 + uVar4) {
      return 0;
   }

   uVar7 = (ulong)param_2;
   if (( param_15 != 0 ) && ( (ulong)param_6 < (ulong)param_15 + (ulong)param_14 )) {
      return 0;
   }

   if (param_2 - 8 < 2) {
      uVar2 = param_7 * 4;
      if (uVar2 == 0) {
         return 0;
      }

      if (( uVar2 - 1 & uVar2 ) != 0) {
         return 0;
      }

      uVar2 = param_8 * 4;
      if (uVar2 == 0) {
         return 0;
      }

      if (( uVar2 - 1 & uVar2 ) != 0) {
         return 0;
      }

      bVar10 = ( byte )(param_16 >> 2) & 1;
      if (( param_2 != 9 ) || ( param_17 == '\x01' )) goto LAB_001103d0;
      local_3c = 8;
      uVar7 = 8;
   }
 else {
      local_3c = 0;
      bVar10 = ( byte )(param_16 >> 2) & 1;
      if (param_2 < 0x1b) {
         LAB_001103d0:local_3c = *(undefined4*)( CSWTCH_1494 + uVar7 * 4 );
      }

   }

   cVar1 = basis_validate_output_buffer_size(uVar7, param_4, param_9, param_10, param_19, param_21, param_7 * param_8);
   if (cVar1 == '\0') {
      return 0;
   }

   lVar9 = uVar4 + param_5;
   if (( param_17 == '\0' ) || ( bVar10 == 0 )) {
      switch (uVar7 & 0xffffffff) {
         case 0:
      break;
         case 1:
      if (param_17 != '\0') {
        lVar5 = param_5 + (ulong)param_14;
        goto switchD_0010f576_caseD_1;
      }
      if (param_19 == 0) {
        param_19 = param_7;
      }
      if (param_8 != 0) {
        iVar8 = 0;
        uVar2 = 0;
        if (param_7 != 0) {
          do {
            iVar3 = 0;
            uVar6 = uVar2;
            do {
              uVar4 = (ulong)uVar6;
              iVar3 = iVar3 + 1;
              uVar6 = uVar6 + 0x10;
              *(undefined8 *)(param_3 + uVar4) = 0x2449922449921dff;
            } while (param_7 != iVar3);
            iVar8 = iVar8 + 1;
            uVar2 = uVar2 + param_19 * 0x10;
          } while (param_8 != iVar8);
        }
      }
      goto LAB_0010fd62;
         case 2:
      param_13 = param_13;
      break;
         case 3:
      if (param_17 != '\0') goto LAB_001101ab;
      basisu_transcoder::write_opaque_alpha_blocks(param_7,param_8,param_3,4,0x10,param_19);
      goto LAB_0010fb1e;
         case 4:
      param_13 = param_13;
      break;
         case 5:
      goto switchD_0010f576_caseD_5;
         case 6:
         case 7:
      goto switchD_0010f576_caseD_6;
         default:
      goto LAB_0010f592;
         case 10:
      param_13 = param_13;
      if (param_17 == '\0') break;
      goto LAB_001102ae;
         case 0xd:
      param_13 = param_13;
      if (param_17 == '\0') break;
      goto LAB_0011012b;
         case 0xe:
         case 0xf:
      param_13 = param_13;
      break;
         case 0x10:
      param_13 = param_13;
      if (param_17 == '\0') break;
      goto LAB_00110351;
         case 0x14:
      param_13 = param_13;
      break;
         case 0x15:
      if (param_17 == '\0') {
        if (param_19 == 0) {
          param_19 = param_7;
        }
        param_13 = param_13;
        if (param_8 != 0) {
          iVar8 = 0;
          uVar2 = 0;
          param_13 = param_13;
          if (param_7 != 0) {
            do {
              iVar3 = 0;
              uVar6 = uVar2;
              do {
                uVar4 = (ulong)uVar6;
                iVar3 = iVar3 + 1;
                uVar6 = uVar6 + 0x10;
                *(undefined8 *)(param_3 + 8 + uVar4) = 0x2449922449921dff;
              } while (param_7 != iVar3);
              iVar8 = iVar8 + 1;
              uVar2 = uVar2 + param_19 * 0x10;
              param_13 = param_13;
            } while (param_8 != iVar8);
          }
        }
        break;
      }
      goto LAB_0011022c;
      }

      goto LAB_0010f735;
   }

   lVar5 = param_5 + (ulong)param_14;
   switch (uVar7 & 0xffffffff) {
      case 0:
    lVar9 = lVar5;
    param_13 = param_15;
    break;
      case 1:
switchD_0010f576_caseD_1:
    cVar1 = transcode_slice(this,param_3,param_7,param_8,lVar5,param_15,0xb,local_3c,0,param_18,1,
                            param_11,param_9,param_10,param_19,param_20,0,0,param_21);
    if (cVar1 == '\0') {
      return 0;
    }
LAB_0010fd62:
    param_3 = param_3 + 8;
    param_13 = param_13;
    break;
      case 2:
    lVar9 = lVar5;
    param_13 = param_15;
    break;
      case 3:
LAB_001101ab:
    cVar1 = transcode_slice(this,param_3,param_7,param_8,param_5 + (ulong)param_14,param_15,4,
                            local_3c,0,param_18,1,param_11,param_9,param_10,param_19,param_20,0,0,
                            param_21);
    if (cVar1 == '\0') {
      return 0;
    }
LAB_0010fb1e:
    param_3 = param_3 + 8;
    param_13 = param_13;
    break;
      case 4:
    lVar9 = lVar5;
    param_13 = param_15;
    break;
      case 5:
switchD_0010f576_caseD_5:
    bVar10 = transcode_slice(this,param_3,param_7,param_8,lVar9,param_13,4,local_3c,0,param_18,0,
                             param_11,param_9,param_10,param_19,param_20,0,0,param_21);
    if (bVar10 == 0) {
      return 0;
    }
    param_3 = param_3 + 8;
    if (param_17 == '\0') {
      basisu_transcoder::write_opaque_alpha_blocks(param_7,param_8,param_3,4,0x10,param_19);
      return (ulong)bVar10;
    }
    lVar9 = param_5 + (ulong)param_14;
    param_13 = param_15;
    break;
      case 6:
      case 7:
switchD_0010f576_caseD_6:
    uVar4 = transcode_slice(this,param_3,param_7,param_8,lVar9,param_13,9,local_3c,0,param_18,0,
                            param_11,param_9,param_10,param_19,param_20,0,0,param_21);
    if (param_17 == '\0') {
      return uVar4;
    }
    if ((char)uVar4 == '\0') {
      return uVar4;
    }
    lVar9 = param_5 + (ulong)param_14;
    param_13 = param_15;
    break;
      default:
    goto LAB_0010f592;
      case 10:
LAB_001102ae:
    cVar1 = transcode_slice(this,param_3,param_7,param_8,param_5 + (ulong)param_14,param_15,0x14,
                            local_3c,0,param_18,1,param_11,param_9,param_10,param_19,param_20,0,0,
                            param_21);
    goto joined_r0x0011029d;
      case 0xd:
LAB_0011012b:
    cVar1 = transcode_slice(this,param_3,param_7,param_8,param_5 + (ulong)param_14,param_15,0x17,4,0
                            ,param_18,1,param_11,param_9,param_10,param_19,param_20,0,0,param_21);
    goto joined_r0x0011029d;
      case 0xe:
      case 0xf:
    lVar9 = lVar5;
    param_13 = param_15;
    break;
      case 0x10:
LAB_00110351:
    cVar1 = transcode_slice(this,param_3,param_7,param_8,param_5 + (ulong)param_14,param_15,0x1b,2,0
                            ,param_18,1,param_11,param_9,param_10,param_19,param_20,0,0,param_21);
    goto joined_r0x0011029d;
      case 0x14:
    lVar9 = lVar5;
    param_13 = param_15;
    break;
      case 0x15:
LAB_0011022c:
    cVar1 = transcode_slice(this,param_3 + 8,param_7,param_8,param_5 + (ulong)param_14,param_15,0x12
                            ,local_3c,0,param_18,1,param_11,param_9,param_10,param_19,param_20,0,0,
                            param_21);
joined_r0x0011029d:
    param_13 = param_13;
    if (cVar1 == '\0') {
LAB_0010f592:
      return 0;
    }
   }

   LAB_0010f735:uVar4 = transcode_slice(this, param_3, param_7, param_8, lVar9, param_13);
   return uVar4;
}
/* basist::basis_get_bytes_per_block_or_pixel(basist::transcoder_texture_format) */undefined4 basist::basis_get_bytes_per_block_or_pixel(uint param_1) {
   undefined4 uVar1;
   uVar1 = 0;
   if (param_1 < 0x1b) {
      uVar1 = *(undefined4*)( CSWTCH_1494 + (ulong)param_1 * 4 );
   }

   return uVar1;
}
/* basist::basis_get_format_name(basist::transcoder_texture_format) */char *basist::basis_get_format_name(undefined4 param_1) {
   switch (param_1) {
      case 0:
    return "ETC1_RGB";
      case 1:
    return "ETC2_RGBA";
      case 2:
    return "BC1_RGB";
      case 3:
    return "BC3_RGBA";
      case 4:
    return "BC4_R";
      case 5:
    return "BC5_RG";
      case 6:
      case 7:
    return "BC7_RGBA";
      case 8:
    return "PVRTC1_4_RGB";
      case 9:
    return "PVRTC1_4_RGBA";
      case 10:
    return "ASTC_RGBA";
      case 0xb:
    return "ATC_RGB";
      case 0xc:
    return "ATC_RGBA";
      case 0xd:
    return "RGBA32";
      case 0xe:
    return "RGB565";
      case 0xf:
    return "BGR565";
      case 0x10:
    return "RGBA4444";
      case 0x11:
    return "FXT1_RGB";
      case 0x12:
    return "PVRTC2_4_RGB";
      case 0x13:
    return "PVRTC2_4_RGBA";
      case 0x14:
    return "ETC2_EAC_R11";
      case 0x15:
    return "ETC2_EAC_RG11";
      case 0x16:
    return "BC6H";
      case 0x17:
    return "ASTC_HDR_RGBA";
      case 0x18:
    return "RGB_HALF";
      case 0x19:
    return "RGBA_HALF";
      case 0x1a:
    return "RGB_9E5";
      default:
    return "";
   }

}
/* basist::basis_get_block_format_name(basist::block_format) */char *basist::basis_get_block_format_name(undefined4 param_1) {
   switch (param_1) {
      case 0:
    return "ETC1";
      case 1:
    return "ETC2_RGBA";
      case 2:
    return "BC1";
      case 3:
    return "BC3";
      default:
    return "";
      case 6:
    return "PVRTC1_4_RGB";
      case 7:
    return "PVRTC1_4_RGBA";
      case 8:
    return "BC7";
      case 0xc:
    return "ASTC_4x4";
      case 0xd:
    return "ATC_RGB";
      case 0xf:
    return "FXT1_RGB";
      case 0x10:
    return "PVRTC2_4_RGB";
      case 0x11:
    return "PVRTC2_4_RGBA";
      case 0x12:
    return "ETC2_EAC_R11";
      case 0x13:
    return "ETC2_EAC_RG11";
      case 0x16:
    return "RGBA32";
      case 0x18:
    return "RGB565";
      case 0x19:
    return "BGR565";
      case 0x1d:
    return "RGBA4444";
      case 0x1e:
    return "RGBA_HALF";
      case 0x1f:
    return "RGB_HALF";
      case 0x20:
    return "RGB_9E5";
      case 0x21:
    return "UASTC_4x4";
      case 0x22:
    return "UASTC_HDR_4x4";
      case 0x23:
    return "BC6H";
      case 0x24:
    return "ASTC_HDR_4x4";
   }

}
/* basist::basis_get_texture_type_name(basist::basis_texture_type) */char *basist::basis_get_texture_type_name(undefined4 param_1) {
   switch (param_1) {
      case 0:
    return "2D";
      case 1:
    return "2D array";
      case 2:
    return "cubemap array";
      case 3:
    return "video";
      case 4:
    return "3D";
      default:
    return "";
   }

}
/* basist::basis_transcoder_format_has_alpha(basist::transcoder_texture_format) */undefined8 basist::basis_transcoder_format_has_alpha(uint param_1) {
   undefined8 uVar1;
   uVar1 = 0;
   if (param_1 < 0x1a) {
      uVar1 = CONCAT71(0x28936, ( 0x28936caUL >> ( (ulong)param_1 & 0x3f ) & 1 ) != 0);
   }

   return uVar1;
}
/* basist::basis_transcoder_format_is_hdr(basist::transcoder_texture_format) */bool basist::basis_transcoder_format_is_hdr(int param_1) {
   return param_1 - 0x16U < 5;
}
/* basist::basis_get_basisu_texture_format(basist::transcoder_texture_format) */undefined4 basist::basis_get_basisu_texture_format(uint param_1) {
   undefined4 uVar1;
   uVar1 = 0xffffffff;
   if (param_1 < 0x1b) {
      uVar1 = *(undefined4*)( CSWTCH_1501 + (ulong)param_1 * 4 );
   }

   return uVar1;
}
/* basist::basis_transcoder_format_is_uncompressed(basist::transcoder_texture_format) */bool basist::basis_transcoder_format_is_uncompressed(int param_1) {
   if (param_1 < 0x11) {
      return 0xc < param_1;
   }

   return param_1 - 0x18U < 3;
}
/* basist::basis_block_format_is_uncompressed(basist::block_format) */bool basist::basis_block_format_is_uncompressed(int param_1) {
   return param_1 - 0x15U < 0xc;
}
/* basist::basis_get_uncompressed_bytes_per_pixel(basist::transcoder_texture_format) */undefined4 basist::basis_get_uncompressed_bytes_per_pixel(int param_1) {
   undefined4 uVar1;
   uVar1 = 0;
   if (param_1 - 0xdU < 0xe) {
      uVar1 = *(undefined4*)( CSWTCH_1506 + ( ulong )(param_1 - 0xdU) * 4 );
   }

   return uVar1;
}
/* basist::basis_get_block_width(basist::transcoder_texture_format) */char basist::basis_get_block_width(int param_1) {
   return ( param_1 == 0x11 ) * '\x04' + '\x04';
}
/* basist::basis_get_block_height(basist::transcoder_texture_format) */undefined8 basist::basis_get_block_height(void) {
   return 4;
}
/* basist::basis_is_format_supported(basist::transcoder_texture_format, basist::basis_tex_format) */bool basist::basis_is_format_supported(ulong param_1, int param_2) {
   bool bVar1;
   uint uVar2;
   uVar2 = (uint)param_1;
   if (param_2 == 2) {
      return uVar2 - 0x16 < 5;
   }

   if (param_2 == 1) {
      bVar1 = true;
      if (uVar2 < 0x1b) {
         return ( 0x7ce1800UL >> ( param_1 & 0x3f ) & 1 ) == 0;
      }

   }
 else {
      if (uVar2 < 0x16) {
         return ( 0x31e4ffUL >> ( param_1 & 0x3f ) & 1 ) != 0;
      }

      bVar1 = false;
   }

   return bVar1;
}
/* basist::bc7_convert_partition_index_3_to_2(unsigned int, unsigned int) */uint basist::bc7_convert_partition_index_3_to_2(uint param_1, uint param_2) {
   uint uVar1;
   uVar1 = param_2 >> 1;
   if (uVar1 == 1) {
      uVar1 = ( uint )(param_1 != 0);
      if (( param_2 & 1 ) != 0) {
         uVar1 = 1 - ( param_1 != 0 );
      }

      return uVar1;
   }

   if (uVar1 != 2) {
      if (uVar1 == 0) {
         param_1 = ( uint )(1 < param_1);
      }

      if (( param_2 & 1 ) != 0) {
         param_1 = 1 - param_1;
      }

      return param_1;
   }

   uVar1 = ( uint )(( param_1 & 0xfffffffd ) != 0);
   if (( param_2 & 1 ) != 0) {
      uVar1 = 1 - uVar1;
   }

   return uVar1;
}
/* basist::astc_get_levels(int) */int basist::astc_get_levels(int param_1) {
   long lVar1;
   lVar1 = (long)param_1;
   return ( &DAT_0012eb08 )[lVar1 * 3] * 4 + 1 + *(int*)( &DAT_0012eb04 + lVar1 * 0xc ) * 2 << ( ( byte )(&g_astc_bise_range_table)[lVar1 * 3] & 0x1f );
}
/* basist::astc_is_valid_endpoint_range(unsigned int) */ulong basist::astc_is_valid_endpoint_range(uint param_1) {
   ulong uVar1;
   ulong uVar2;
   uVar2 = (ulong)param_1;
   uVar1 = uVar2 * 3;
   if (( *(int*)( &DAT_0012eb04 + uVar2 * 0xc ) != 0 ) || ( uVar1 = 1(&DAT_0012eb08)[uVar2 * 3] != 0 )) {
      uVar1 = CONCAT71(( int7 )(uVar1 >> 8), *(int*)( g_astc_endpoint_unquant_params + uVar2 * 0x10 + 8 ) != 0);
   }

   return uVar1 & 0xffffffff;
}
/* basist::unquant_astc_endpoint(unsigned int, unsigned int, unsigned int, unsigned int) */uint basist::unquant_astc_endpoint(uint param_1, uint param_2, uint param_3, uint param_4) {
   char *pcVar1;
   int iVar2;
   uint uVar3;
   ulong uVar4;
   int iVar5;
   char *pcVar6;
   uint uVar7;
   uint uVar8;
   int iVar9;
   uVar4 = (ulong)param_4;
   if (*(int*)( &DAT_0012eb04 + uVar4 * 0xc ) == 0 && ( &DAT_0012eb08 )[uVar4 * 3] == 0) {
      iVar2 = ( &g_astc_bise_range_table )[uVar4 * 3];
      iVar5 = 8;
      uVar3 = 0;
      do {
         iVar9 = iVar5;
         if (iVar2 <= iVar5) {
            iVar9 = iVar2;
         }

         uVar7 = param_1 >> ( (char)iVar2 - (char)iVar9 & 0x1fU );
         if (iVar2 <= iVar9) {
            uVar7 = param_1;
         }

         iVar5 = iVar5 - iVar9;
         uVar3 = uVar3 | uVar7 << ( (byte)iVar5 & 0x1f );
      }
 while ( 0 < iVar5 );
      return uVar3;
   }

   uVar7 = 0;
   uVar3 = param_1 & 1;
   if (uVar3 != 0) {
      uVar7 = 0x80;
      uVar3 = 0x1ff;
   }

   pcVar6 = *(char**)( g_astc_endpoint_unquant_params + uVar4 * 0x10 );
   if (*(int*)( &DAT_0012eb04 + uVar4 * 0xc ) != 0) {
      param_3 = param_2;
   }

   uVar8 = 0;
   pcVar1 = pcVar6 + 9;
   do {
      uVar8 = uVar8 * 2;
      if (*pcVar6 != '0') {
         uVar8 = uVar8 | param_1 >> ( *pcVar6 + 0x9fU & 0x1f ) & 1;
      }

      pcVar6 = pcVar6 + 1;
   }
 while ( pcVar1 != pcVar6 );
   return ( uVar3 ^ param_3 * *(int*)( g_astc_endpoint_unquant_params + uVar4 * 0x10 + 8 ) + uVar8 ) >> 2 | uVar7;
}
/* basist::unquant_astc_endpoint_val(unsigned int, unsigned int) */void basist::unquant_astc_endpoint_val(uint param_1, uint param_2) {
   ulong uVar1;
   uint uVar2;
   uint uVar3;
   uVar1 = (ulong)param_2;
   if (*(int*)( &DAT_0012eb04 + uVar1 * 0xc ) == 0 && ( &DAT_0012eb08 )[uVar1 * 3] == 0) {
      unquant_astc_endpoint(param_1, 0, 0, param_2);
      return;
   }

   uVar3 = param_1 >> ( ( byte )(&g_astc_bise_range_table)[uVar1 * 3] & 0x1f );
   uVar2 = param_1 & ( 1 << ( ( byte )(&g_astc_bise_range_table)[uVar1 * 3] & 0x1f ) ) - 1U;
   if (*(int*)( &DAT_0012eb04 + uVar1 * 0xc ) != 0) {
      unquant_astc_endpoint(uVar2, uVar3, 0, param_2);
      return;
   }

   unquant_astc_endpoint(uVar2, 0, uVar3, param_2);
   return;
}
/* basist::encode_bc7_block(void*, basist::bc7_optimization_results const*) */void basist::encode_bc7_block(void *param_1, bc7_optimization_results *param_2) {
   ulong *puVar1;
   char cVar2;
   undefined1 uVar3;
   undefined2 uVar4;
   undefined4 uVar5;
   undefined4 uVar6;
   uint uVar7;
   uint uVar8;
   uint uVar9;
   char *pcVar10;
   undefined8 *puVar11;
   uint uVar12;
   uint uVar13;
   long lVar14;
   ulong uVar15;
   byte *pbVar16;
   uint uVar17;
   int iVar18;
   int *piVar19;
   uint uVar20;
   uint uVar21;
   uint uVar22;
   ulong uVar23;
   byte bVar24;
   int iVar25;
   undefined8 *puVar26;
   ulong uVar27;
   long lVar28;
   long in_FS_OFFSET;
   byte *local_d8;
   undefined8 *local_d0;
   uint local_b0[4];
   undefined8 local_a0;
   undefined4 local_98;
   undefined8 local_94;
   undefined4 local_8c;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   char local_48[8];
   long local_40;
   uVar13 = *(uint*)param_2;
   uVar23 = (ulong)uVar13;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   bVar24 = *(byte*)( (long)&g_bc7_num_subsets + uVar23 );
   uVar7 = 1 << ( *(byte*)( (long)&g_bc7_partition_bits + uVar23 ) & 0x1f );
   uVar22 = (uint)bVar24;
   if (bVar24 == 1) {
      local_d8 = g_bc7_partition1;
      LAB_0011106d:local_a0 = *(undefined8*)( param_2 + 0x28 );
      local_68 = *(undefined8*)( param_2 + 8 );
      uStack_60 = *(undefined8*)( param_2 + 0x10 );
      local_98 = *(undefined4*)( param_2 + 0x30 );
      local_58 = *(undefined8*)( param_2 + 0x18 );
      uStack_50 = *(undefined8*)( param_2 + 0x20 );
      local_94 = *(undefined8*)( param_2 + 0x34 );
      local_88 = *(undefined8*)( param_2 + 0x40 );
      uStack_80 = *(undefined8*)( param_2 + 0x48 );
      local_8c = *(undefined4*)( param_2 + 0x3c );
      local_78 = *(undefined8*)( param_2 + 0x50 );
      LAB_001110d1:uVar5 = *(undefined4*)( param_2 + 0x58 );
      puVar26 = &local_a0;
      uVar20 = 1 << ( *(char*)( (long)&g_bc7_color_index_bitcount + (long)(int)uVar13 ) + (char)uVar5 & 0x1fU );
      puVar11 = &local_94;
      lVar14 = 0;
      do {
         uVar17 = (uint)lVar14;
         if (lVar14 == 0) {
            uVar8 = 0;
            uVar15 = 0;
         }
 else {
            uVar8 = *(uint*)( param_2 + 4 );
            if (( uVar17 != 1 ) || ( uVar22 != 3 )) {
               if (( uVar17 != 2 ) || ( uVar22 != 3 )) {
                  uVar15 = (ulong)(byte)g_bc7_table_anchor_index_second_subset[uVar8];
                  uVar8 = (uint)(byte)g_bc7_table_anchor_index_second_subset[uVar8];
               }
 else {
                  uVar15 = (ulong)(byte)g_bc7_table_anchor_index_third_subset_2[uVar8];
                  uVar8 = (uint)(byte)g_bc7_table_anchor_index_third_subset_2[uVar8];
               }

            }
 else {
               uVar15 = (ulong)(byte)g_bc7_table_anchor_index_third_subset_1[uVar8];
               uVar8 = (uint)(byte)g_bc7_table_anchor_index_third_subset_1[uVar8];
            }

         }

         local_b0[lVar14] = uVar8;
         if (( uVar20 >> 1 & ( uint ) * (byte*)( (long)&local_68 + uVar15 ) ) == 0) {
            if (uVar13 - 4 < 2) {
               LAB_0011118b:uVar8 = 1 << ( *(char*)( (long)&g_bc7_alpha_index_bitcount + (long)(int)uVar13 ) - (char)uVar5 & 0x1fU );
               if (( ( uint ) * (byte*)( (long)&local_58 + uVar15 ) & uVar8 >> 1 ) != 0) {
                  pcVar10 = (char*)&local_58;
                  pbVar16 = local_d8;
                  do {
                     if (*pbVar16 == uVar17) {
                        *pcVar10 = ( (char)uVar8 + -1 ) - *pcVar10;
                     }

                     pcVar10 = pcVar10 + 1;
                     pbVar16 = pbVar16 + 1;
                  }
 while ( local_48 != pcVar10 );
                  uVar3 = *(undefined1*)( (long)puVar11 + 3 );
                  *(undefined1*)( (long)puVar11 + 3 ) = *(undefined1*)( (long)puVar26 + 3 );
                  *(undefined1*)( (long)puVar26 + 3 ) = uVar3;
               }

            }

         }
 else {
            pcVar10 = (char*)&local_68;
            pbVar16 = local_d8;
            do {
               if (*pbVar16 == uVar17) {
                  *pcVar10 = ( (char)uVar20 + -1 ) - *pcVar10;
               }

               pcVar10 = pcVar10 + 1;
               pbVar16 = pbVar16 + 1;
            }
 while ( (char*)&local_58 != pcVar10 );
            cVar2 = *(char*)( (long)&g_bc7_mode_has_shared_p_bits + uVar23 );
            if (uVar13 - 4 < 2) {
               uVar4 = *(undefined2*)puVar26;
               *(undefined2*)puVar26 = *(undefined2*)puVar11;
               *(undefined2*)puVar11 = uVar4;
               uVar3 = *(undefined1*)( (long)puVar26 + 2 );
               *(undefined1*)( (long)puVar26 + 2 ) = *(undefined1*)( (long)puVar11 + 2 );
               *(undefined1*)( (long)puVar11 + 2 ) = uVar3;
               if (cVar2 == '\0') {
                  puVar1 = &local_88 + lVar14;
                  *puVar1 = *puVar1 << 0x20 | *puVar1 >> 0x20;
               }

               goto LAB_0011118b;
            }

            uVar6 = *(undefined4*)puVar11;
            *(undefined4*)puVar11 = *(undefined4*)puVar26;
            *(undefined4*)puVar26 = uVar6;
            if (cVar2 == '\0') {
               puVar1 = &local_88 + lVar14;
               *puVar1 = *puVar1 << 0x20 | *puVar1 >> 0x20;
            }

         }

         lVar14 = lVar14 + 1;
         puVar26 = (undefined8*)( (long)puVar26 + 4 );
         puVar11 = (undefined8*)( (long)puVar11 + 4 );
      }
 while ( (uint)lVar14 < uVar22 );
   }
 else {
      if (bVar24 == 2) {
         local_d8 = g_bc7_partition2 + ( uint )(*(int*)( param_2 + 4 ) << 4);
         goto LAB_0011106d;
      }

      local_a0 = *(undefined8*)( param_2 + 0x28 );
      local_68 = *(undefined8*)( param_2 + 8 );
      uStack_60 = *(undefined8*)( param_2 + 0x10 );
      local_98 = *(undefined4*)( param_2 + 0x30 );
      local_58 = *(undefined8*)( param_2 + 0x18 );
      uStack_50 = *(undefined8*)( param_2 + 0x20 );
      local_94 = *(undefined8*)( param_2 + 0x34 );
      local_88 = *(undefined8*)( param_2 + 0x40 );
      uStack_80 = *(undefined8*)( param_2 + 0x48 );
      local_8c = *(undefined4*)( param_2 + 0x3c );
      local_78 = *(undefined8*)( param_2 + 0x50 );
      if (uVar22 != 0) {
         local_d8 = g_bc7_partition3 + ( uint )(*(int*)( param_2 + 4 ) << 4);
         goto LAB_001110d1;
      }

   }

   local_b0[2] = 0xffffffff;
   local_b0[0] = 0xffffffff;
   local_b0[1] = 0xffffffff;
   local_d0 = &local_94;
   puVar26 = &local_a0;
   lVar14 = (long)(int)uVar13;
   *(undefined1(*) [16])param_1 = (undefined1[16])0x0;
   uVar20 = 1 << ( (byte)uVar13 & 0x1f );
   uVar17 = uVar13 + 1;
   if (uVar17 == 0) {
      uVar8 = 0;
      uVar20 = 0xfffffffb;
      if (1 < uVar7) {
         bVar24 = 0;
         uVar20 = 0xfffffffb;
         goto LAB_00110d54;
      }

   }
 else {
      *(char*)param_1 = (char)uVar20;
      uVar8 = 8;
      if (uVar17 < 9) {
         uVar8 = uVar17;
      }

      uVar20 = uVar20 >> ( (byte)uVar8 & 0x1f );
      for (uVar17 = uVar17 - uVar8; uVar17 != 0; uVar17 = uVar17 - uVar12) {
         uVar12 = 8 - ( uVar8 & 7 );
         if (uVar17 < uVar12) {
            uVar12 = uVar17;
         }

         pbVar16 = (byte*)( (long)param_1 + ( ulong )(uVar8 >> 3) );
         *pbVar16 = *pbVar16 | ( byte )(uVar20 << ( sbyte )(uVar8 & 7));
         uVar8 = uVar8 + uVar12;
         uVar20 = uVar20 >> ( (byte)uVar12 & 0x1f );
      }

      uVar20 = uVar13 - 4;
      if (uVar20 < 2) {
         uVar20 = *(uint*)( param_2 + 0x5c );
         uVar17 = 2;
         do {
            uVar12 = 8 - ( uVar8 & 7 );
            if (uVar17 < uVar12) {
               uVar12 = uVar17;
            }

            pbVar16 = (byte*)( (long)param_1 + ( ulong )(uVar8 >> 3) );
            *pbVar16 = *pbVar16 | ( byte )(uVar20 << ( sbyte )(uVar8 & 7));
            uVar8 = uVar8 + uVar12;
            uVar20 = uVar20 >> ( (byte)uVar12 & 0x1f );
            uVar17 = uVar17 - uVar12;
         }
 while ( uVar17 != 0 );
         if (uVar13 != 4) {
            if (uVar7 < 2) {
               iVar18 = 4;
               uVar20 = 1;
               goto LAB_00110df3;
            }

            bVar24 = *(byte*)( (long)param_1 + ( ulong )(uVar8 >> 3) );
            uVar20 = 1;
            goto LAB_00110d54;
         }

         uVar17 = uVar8 + 1;
         pbVar16 = (byte*)( (long)param_1 + ( ulong )(uVar8 >> 3) );
         *pbVar16 = *pbVar16 | ( byte )(*(int*)( param_2 + 0x58 ) << ( (byte)uVar8 & 7 ));
         uVar20 = 0;
         uVar8 = uVar17;
         if (uVar7 < 2) goto LAB_001114af;
         LAB_00110d45:bVar24 = *(byte*)( (long)param_1 + ( ulong )(uVar17 >> 3) );
         uVar8 = uVar17;
         LAB_00110d54:uVar17 = *(uint*)( param_2 + 4 );
         uVar9 = uVar8 & 7;
         uVar12 = 8 - uVar9;
         uVar7 = ( uVar7 == 0x40 ) + 4 + ( uint )(uVar7 == 0x40);
         if (uVar7 < uVar12) {
            uVar12 = uVar7;
         }

         uVar21 = uVar8 >> 3;
         uVar8 = uVar8 + uVar12;
         *(byte*)( (long)param_1 + (ulong)uVar21 ) = bVar24 | ( byte )(uVar17 << (sbyte)uVar9);
         uVar17 = uVar17 >> ( (byte)uVar12 & 0x1f );
         for (uVar7 = uVar7 - uVar12; uVar7 != 0; uVar7 = uVar7 - uVar12) {
            uVar12 = 8 - ( uVar8 & 7 );
            if (uVar7 < uVar12) {
               uVar12 = uVar7;
            }

            pbVar16 = (byte*)( (long)param_1 + ( ulong )(uVar8 >> 3) );
            *pbVar16 = *pbVar16 | ( byte )(uVar17 << ( sbyte )(uVar8 & 7));
            uVar8 = uVar8 + uVar12;
            uVar17 = uVar17 >> ( (byte)uVar12 & 0x1f );
         }

      }
 else {
         uVar17 = uVar8;
         if (1 < uVar7) goto LAB_00110d45;
      }

      iVar18 = 3;
      if (uVar13 < 4) goto LAB_00110df3;
   }

   LAB_001114af:iVar18 = 4;
   LAB_00110df3:iVar25 = 0;
   do {
      lVar28 = 0;
      if (uVar22 != 0) {
         do {
            if (iVar25 == 3) {
               uVar13 = ( uint ) * (char*)( (long)&g_bc7_alpha_precision_table + uVar23 );
            }
 else {
               uVar13 = ( uint ) * (byte*)( (long)&g_bc7_color_precision_table + uVar23 );
            }

            uVar17 = ( uint ) * (byte*)( (long)puVar26 + lVar28 * 4 );
            uVar7 = uVar13;
            if (uVar13 != 0) {
               do {
                  uVar12 = 8 - ( uVar8 & 7 );
                  if (uVar7 < uVar12) {
                     uVar12 = uVar7;
                  }

                  pbVar16 = (byte*)( (long)param_1 + ( ulong )(uVar8 >> 3) );
                  *pbVar16 = *pbVar16 | ( byte )(uVar17 << ( sbyte )(uVar8 & 7));
                  uVar8 = uVar8 + uVar12;
                  uVar17 = uVar17 >> ( (byte)uVar12 & 0x1f );
                  uVar7 = uVar7 - uVar12;
               }
 while ( uVar7 != 0 );
               uVar7 = ( uint ) * (byte*)( (long)local_d0 + lVar28 * 4 );
               do {
                  uVar17 = 8 - ( uVar8 & 7 );
                  if (uVar13 < uVar17) {
                     uVar17 = uVar13;
                  }

                  pbVar16 = (byte*)( (long)param_1 + ( ulong )(uVar8 >> 3) );
                  *pbVar16 = *pbVar16 | ( byte )(uVar7 << ( sbyte )(uVar8 & 7));
                  uVar8 = uVar8 + uVar17;
                  uVar7 = uVar7 >> ( (byte)uVar17 & 0x1f );
                  uVar13 = uVar13 - uVar17;
               }
 while ( uVar13 != 0 );
            }

            lVar28 = lVar28 + 1;
         }
 while ( (uint)lVar28 < uVar22 );
      }

      iVar25 = iVar25 + 1;
      puVar26 = (undefined8*)( (long)puVar26 + 1 );
      local_d0 = (undefined8*)( (long)local_d0 + 1 );
   }
 while ( iVar18 != iVar25 );
   if (( *(char*)( (long)&g_bc7_mode_has_p_bits + uVar23 ) != '\0' ) && ( uVar22 != 0 )) {
      cVar2 = *(char*)( (long)&g_bc7_mode_has_shared_p_bits + uVar23 );
      piVar19 = (int*)&local_88;
      do {
         uVar13 = uVar8 + 1;
         pbVar16 = (byte*)( (long)param_1 + ( ulong )(uVar8 >> 3) );
         *pbVar16 = *pbVar16 | ( byte )(*piVar19 << ( (byte)uVar8 & 7 ));
         if (cVar2 == '\0') {
            pbVar16 = (byte*)( (long)param_1 + ( ulong )(uVar13 >> 3) );
            *pbVar16 = *pbVar16 | ( byte )(piVar19[1] << ( (byte)uVar13 & 7 ));
            uVar13 = uVar8 + 2;
         }

         uVar8 = uVar13;
         piVar19 = piVar19 + 2;
      }
 while ( (int*)( &uStack_80 + ( uVar22 - 1 ) ) != piVar19 );
   }

   uVar23 = 0;
   do {
      uVar15 = uVar23 + 4;
      uVar27 = uVar23 & 0xffffffff;
      do {
         iVar18 = (int)uVar27;
         if (*(int*)( param_2 + 0x58 ) == 0) {
            if (( iVar18 == -1 ) || ( iVar18 == -1 )) {
               uVar13 = *(byte*)( (long)&g_bc7_color_index_bitcount + lVar14 ) - 1;
            }
 else {
               uVar13 = ( uint ) * (byte*)( (long)&g_bc7_color_index_bitcount + lVar14 ) - ( uint )(iVar18 == -1);
            }

            bVar24 = *(byte*)( (long)&local_68 + uVar23 );
         }
 else {
            if (( iVar18 == -1 ) || ( iVar18 == -1 )) {
               iVar25 = -1;
            }
 else {
               iVar25 = -(uint)(iVar18 == -1);
            }

            uVar13 = ( ( uint ) * (byte*)( (long)&g_bc7_alpha_index_bitcount + lVar14 ) - *(int*)( param_2 + 0x58 ) ) + iVar25;
            bVar24 = *(byte*)( (long)&local_58 + uVar23 );
         }

         uVar7 = (uint)bVar24;
         for (; uVar13 != 0; uVar13 = uVar13 - uVar22) {
            uVar22 = 8 - ( uVar8 & 7 );
            if (uVar13 < uVar22) {
               uVar22 = uVar13;
            }

            pbVar16 = (byte*)( (long)param_1 + ( ulong )(uVar8 >> 3) );
            *pbVar16 = *pbVar16 | ( byte )(uVar7 << ( sbyte )(uVar8 & 7));
            uVar8 = uVar8 + uVar22;
            uVar7 = uVar7 >> ( (byte)uVar22 & 0x1f );
         }

         uVar23 = uVar23 + 1;
         uVar27 = ( ulong )(iVar18 + 1);
      }
 while ( uVar15 != uVar23 );
      uVar23 = uVar15;
   }
 while ( uVar15 != 0x10 );
   if (uVar20 < 2) {
      uVar23 = 0;
      do {
         uVar15 = uVar23 + 4;
         uVar27 = uVar23 & 0xffffffff;
         do {
            iVar18 = (int)uVar27;
            if (*(int*)( param_2 + 0x58 ) == 0) {
               if (( iVar18 == -1 ) || ( iVar18 == -1 )) {
                  uVar13 = *(byte*)( (long)&g_bc7_alpha_index_bitcount + lVar14 ) - 1;
               }
 else {
                  uVar13 = ( uint ) * (byte*)( (long)&g_bc7_alpha_index_bitcount + lVar14 ) - ( uint )(iVar18 == -1);
               }

               bVar24 = *(byte*)( (long)&local_58 + uVar23 );
            }
 else {
               if (( iVar18 == -1 ) || ( iVar18 == -1 )) {
                  iVar25 = -1;
               }
 else {
                  iVar25 = -(uint)(iVar18 == -1);
               }

               uVar13 = ( uint ) * (byte*)( (long)&g_bc7_color_index_bitcount + lVar14 ) + *(int*)( param_2 + 0x58 ) + iVar25;
               bVar24 = *(byte*)( (long)&local_68 + uVar23 );
            }

            uVar7 = (uint)bVar24;
            for (; uVar13 != 0; uVar13 = uVar13 - uVar22) {
               uVar22 = 8 - ( uVar8 & 7 );
               if (uVar13 < uVar22) {
                  uVar22 = uVar13;
               }

               pbVar16 = (byte*)( (long)param_1 + ( ulong )(uVar8 >> 3) );
               *pbVar16 = *pbVar16 | ( byte )(uVar7 << ( sbyte )(uVar8 & 7));
               uVar8 = uVar8 + uVar22;
               uVar7 = uVar7 >> ( (byte)uVar22 & 0x1f );
            }

            uVar23 = uVar23 + 1;
            uVar27 = ( ulong )(iVar18 + 1);
         }
 while ( uVar23 != uVar15 );
      }
 while ( uVar23 != 0x10 );
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* basist::pack_astc_solid_block(void*, basist::color32 const&) */void basist::pack_astc_solid_block(void *param_1, color32 *param_2) {
   byte *pbVar1;
   color32 cVar2;
   color32 cVar3;
   color32 cVar4;
   color32 cVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   uint uVar9;
   cVar2 = *param_2;
   cVar3 = param_2[1];
   cVar4 = param_2[2];
   cVar5 = param_2[3];
   iVar8 = 0x10;
   *(undefined8*)param_1 = 0xfffffffffffffdfc;
   *(undefined8*)( (long)param_1 + 8 ) = 0;
   uVar9 = (uint)CONCAT11(cVar2, cVar2);
   iVar6 = 0x40;
   do {
      iVar7 = 8;
      if (iVar8 < 9) {
         iVar7 = iVar8;
      }

      pbVar1 = (byte*)( (long)param_1 + (long)( iVar6 >> 3 ) );
      *pbVar1 = *pbVar1 | (byte)uVar9;
      iVar6 = iVar6 + iVar7;
      uVar9 = uVar9 >> ( (byte)iVar7 & 0x1f );
      iVar8 = iVar8 - iVar7;
   }
 while ( iVar8 != 0 );
   iVar8 = 0x10;
   uVar9 = (uint)(byte)cVar3 * 0x100 + (uint)(byte)cVar3;
   do {
      iVar7 = 8;
      if (iVar8 < 9) {
         iVar7 = iVar8;
      }

      pbVar1 = (byte*)( (long)param_1 + (long)( iVar6 >> 3 ) );
      *pbVar1 = *pbVar1 | (byte)uVar9;
      iVar6 = iVar6 + iVar7;
      uVar9 = uVar9 >> ( (byte)iVar7 & 0x1f );
      iVar8 = iVar8 - iVar7;
   }
 while ( iVar8 != 0 );
   iVar8 = 0x10;
   uVar9 = (uint)(byte)cVar4 * 0x100 + (uint)(byte)cVar4;
   do {
      iVar7 = 8;
      if (iVar8 < 9) {
         iVar7 = iVar8;
      }

      pbVar1 = (byte*)( (long)param_1 + (long)( iVar6 >> 3 ) );
      *pbVar1 = *pbVar1 | (byte)uVar9;
      iVar6 = iVar6 + iVar7;
      uVar9 = uVar9 >> ( (byte)iVar7 & 0x1f );
      iVar8 = iVar8 - iVar7;
   }
 while ( iVar8 != 0 );
   iVar8 = 0x10;
   uVar9 = (uint)(byte)cVar5 + (uint)(byte)cVar5 * 0x100;
   do {
      iVar7 = 8;
      if (iVar8 < 9) {
         iVar7 = iVar8;
      }

      pbVar1 = (byte*)( (long)param_1 + (long)( iVar6 >> 3 ) );
      *pbVar1 = *pbVar1 | (byte)uVar9;
      iVar6 = iVar6 + iVar7;
      uVar9 = uVar9 >> ( (byte)iVar7 & 0x1f );
      iVar8 = iVar8 - iVar7;
   }
 while ( iVar8 != 0 );
   return;
}
/* basist::pack_astc_block(unsigned int*, basist::astc_block_desc const*, unsigned int) */undefined8 basist::pack_astc_block(uint *param_1, astc_block_desc *param_2, uint param_3) {
   byte *pbVar1;
   astc_block_desc aVar2;
   byte bVar3;
   undefined2 uVar4;
   byte bVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   astc_block_desc *paVar9;
   int iVar10;
   uint uVar11;
   long lVar12;
   astc_block_desc *paVar13;
   uint uVar14;
   ulong uVar15;
   int iVar16;
   uint uVar17;
   uint uVar18;
   uint uVar19;
   long in_FS_OFFSET;
   int local_b8;
   byte local_a8;
   byte local_a4;
   byte local_a0;
   uint local_78;
   uint local_74[3];
   undefined1 local_68[16];
   undefined4 local_58;
   undefined4 local_45;
   undefined1 local_41;
   long local_40;
   uVar15 = (ulong)param_3;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar4 = *(undefined2*)( g_uastc_mode_astc_block_mode + uVar15 * 4 );
   aVar2 = param_2[0x14];
   *(undefined8*)( (long)param_1 + 2 ) = 0;
   param_1[2] = 0;
   param_1[3] = 0;
   *(undefined2*)param_1 = uVar4;
   iVar16 = ( -(uint)(aVar2 == (astc_block_desc)0x0) & 0xfffffff0 ) + 0x20;
   iVar8 = ( &g_astc_bise_range_table )[(long)*(int*)param_2 * 3];
   bVar5 = (char)*(undefined4*)( param_2 + 4 ) * '\b' - 8U | g_uastc_mode_astc_block_mode[uVar15 * 4 + 1];
   *(byte*)( (long)param_1 + 1 ) = bVar5;
   if (*(int*)( param_2 + 4 ) == 1) {
      iVar10 = *(int*)( param_2 + 0xc );
      *(char*)( (long)param_1 + 2 ) = (char)( ( uint )(iVar10 << 5) >> 8 );
      *(byte*)( (long)param_1 + 1 ) = bVar5 | ( byte )(iVar10 << 5);
      aVar2 = param_2[0x14];
      local_78 = 0x11;
   }
 else {
      uVar18 = *(uint*)( param_2 + 8 );
      local_78 = 0xd;
      iVar10 = 10;
      do {
         iVar6 = 8 - ( local_78 & 7 );
         if (iVar10 < iVar6) {
            iVar6 = iVar10;
         }

         pbVar1 = (byte*)( (long)param_1 + (long)( (int)local_78 >> 3 ) );
         *pbVar1 = *pbVar1 | ( byte )(uVar18 << ( sbyte )(local_78 & 7));
         local_78 = local_78 + iVar6;
         uVar18 = uVar18 >> ( (byte)iVar6 & 0x1f );
         iVar10 = iVar10 - iVar6;
      }
 while ( iVar10 != 0 );
      iVar10 = ( ( *(uint*)( param_2 + 0xc ) & 0xf ) << 2 ) << ( sbyte )(local_78 & 7);
      pbVar1 = (byte*)( (long)param_1 + ( ulong )(uint)((int)local_78 >> 3) );
      *pbVar1 = *pbVar1 | (byte)iVar10;
      if (8 - ( local_78 & 7 ) < 6) {
         pbVar1 = (byte*)( (long)param_1 + ( ulong )(( (int)local_78 >> 3 ) + 1) );
         *pbVar1 = *pbVar1 | ( byte )((uint)iVar10 >> 8);
      }

      local_78 = local_78 + 6;
      aVar2 = param_2[0x14];
   }

   if (aVar2 != (astc_block_desc)0x0) {
      pbVar1 = (byte*)( (long)param_1 + ( ulong )(uint)(0x7e - iVar8 * iVar16 >> 3) );
      *pbVar1 = *pbVar1 | (char)param_2[0x10] << 6;
   }

   local_68._0_8_ = 0;
   local_68._8_8_ = 0;
   uVar15 = (ulong)(byte)g_uastc_mode_endpoint_ranges[uVar15];
   local_58 = 0;
   local_68 = (undefined1[16])0x0;
   uVar18 = ( &g_astc_bise_range_table )[uVar15 * 3];
   uVar19 = ( ( *(int*)( param_2 + 0xc ) >> 2 ) + 1 ) * *(int*)( param_2 + 4 ) * 2;
   if (*(int*)( &DAT_0012eb04 + uVar15 * 0xc ) == 0) {
      if (( &DAT_0012eb08 )[uVar15 * 3] == 0) {
         if (0 < (int)uVar19) {
            paVar9 = param_2 + 0x15;
            uVar14 = local_78;
            do {
               if (uVar18 != 0) {
                  iVar10 = ( uint )(byte) * paVar9 << ( sbyte )(uVar14 & 7);
                  local_68[( uint )((int)uVar14 >> 3)] = local_68[( uint )((int)uVar14 >> 3)] | (byte)iVar10;
                  if (8 - ( uVar14 & 7 ) < uVar18) {
                     local_68[( (int)uVar14 >> 3 ) + 1] = local_68[( (int)uVar14 >> 3 ) + 1] | ( byte )((uint)iVar10 >> 8);
                  }

                  uVar14 = uVar14 + uVar18;
               }

               paVar9 = paVar9 + 1;
            }
 while ( param_2 + ( ulong )(uVar19 - 1) + 0x16 != paVar9 );
         }

         goto LAB_00111aea;
      }

      uVar14 = 3;
      local_b8 = (int)( uVar19 + 2 ) / 3;
   }
 else {
      uVar14 = 5;
      local_b8 = (int)( uVar19 + 4 ) / 5;
   }

   if (local_b8 < 1) {
      local_68._0_8_ = 0;
      local_68._8_8_ = 0;
   }
 else {
      iVar10 = 0;
      bVar5 = (byte)uVar18;
      paVar9 = param_2 + 0x15;
      local_a8 = bVar5 * '\x02' + 3;
      local_a4 = bVar5 * '\x02' + 5;
      local_a0 = (char)( uVar18 * 3 ) + 5;
      do {
         local_45 = 0;
         uVar17 = uVar14;
         if ((int)uVar19 <= (int)uVar14) {
            uVar17 = uVar19;
         }

         local_41 = 0;
         uVar15 = 0;
         if (0 < (int)uVar17) {
            do {
               uVar11 = (int)uVar15 + 1;
               *(astc_block_desc*)( (long)&local_45 + uVar15 ) = paVar9[uVar15];
               uVar15 = (ulong)uVar11;
            }
 while ( uVar11 < uVar17 );
         }

         if (uVar14 == 5) {
            astc_encode_trits((uint*)local_68, (uchar*)&local_45, (int*)&local_78, uVar18);
         }
 else {
            lVar12 = 0;
            iVar6 = 0;
            do {
               uVar17 = ( uint ) * (byte*)( (long)&local_45 + lVar12 );
               iVar7 = ( &astc_encode_quints(unsigned_int * unsigned_char_const * ::s_muls)[lVar12] );
               local_74[lVar12] = uVar17 & ( 1 << ( bVar5 & 0x1f ) ) - 1U;
               lVar12 = lVar12 + 1;
               iVar6 = iVar6 + ( (int)uVar17 >> ( bVar5 & 0x1f ) ) * iVar7;
            }
 while ( lVar12 != 3 );
            bVar3 = g_astc_quint_encode[iVar6];
            uVar17 = ( bVar3 >> 3 & 3 ) << ( local_a8 & 0x1f ) | ( bVar3 & 7 ) << ( bVar5 & 0x1f ) | local_74[1] << ( bVar5 + 3 & 0x1f ) | local_74[0] | local_74[2] << ( local_a4 & 0x1f ) | ( bVar3 >> 5 & 3 ) << ( local_a0 & 0x1f );
            for (iVar6 = uVar18 * 3 + 7; iVar6 != 0; iVar6 = iVar6 - iVar7) {
               iVar7 = 8 - ( local_78 & 7 );
               if (iVar6 < iVar7) {
                  iVar7 = iVar6;
               }

               pbVar1 = (byte*)( (long)local_68 + (long)( (int)local_78 >> 3 ) );
               *pbVar1 = *pbVar1 | ( byte )(uVar17 << ( sbyte )(local_78 & 7));
               local_78 = local_78 + iVar7;
               uVar17 = uVar17 >> ( (byte)iVar7 & 0x1f );
            }

         }

         iVar10 = iVar10 + 1;
         uVar19 = uVar19 - uVar14;
         paVar9 = paVar9 + (int)uVar14;
      }
 while ( iVar10 != local_b8 );
   }

   LAB_00111aea:*(ulong*)param_1 = local_68._0_8_ | *(ulong*)param_1;
   *(ulong*)( param_1 + 2 ) = local_68._8_8_ | *(ulong*)( param_1 + 2 );
   switch (iVar8) {
      case 1:
    paVar9 = param_2 + 0x27;
    paVar13 = paVar9 + iVar16;
    iVar8 = (int)paVar9;
    do {
      aVar2 = *paVar9;
      uVar18 = (iVar8 + 0x7f) - (int)paVar9;
      paVar9 = paVar9 + 1;
      pbVar1 = (byte *)((long)param_1 + (ulong)(uVar18 >> 3));
      *pbVar1 = *pbVar1 | (char)aVar2 << ((byte)uVar18 & 7);
    } while (paVar9 != paVar13);
    break;
      case 2:
    paVar9 = param_2 + 0x27;
    paVar13 = paVar9 + iVar16;
    uVar15 = 0x7e;
    do {
      aVar2 = *paVar9;
      paVar9 = paVar9 + 1;
      pbVar1 = (byte *)((long)param_1 + (uVar15 >> 3));
      *pbVar1 = *pbVar1 | *(char *)((long)&pack_astc_block(unsigned_int*,basist::astc_block_desc_const*,unsigned_int)
                                           ::s_reverse_bits2 + (ulong)(byte)aVar2) <<
                          ((byte)uVar15 & 7);
      uVar15 = (ulong)((int)uVar15 - 2);
    } while (paVar9 != paVar13);
    break;
      case 3:
    paVar9 = param_2 + 0x27;
    uVar15 = 0x7d;
    paVar13 = paVar9 + iVar16;
    do {
      iVar8 = (uint)*(byte *)((long)&pack_astc_block(unsigned_int*,basist::astc_block_desc_const*,unsigned_int)
                                     ::s_reverse_bits3 + (ulong)(byte)*paVar9) << ((byte)uVar15 & 7)
      ;
      iVar16 = (int)(uVar15 >> 3);
      pbVar1 = (byte *)((long)param_1 + (uVar15 >> 3));
      *pbVar1 = *pbVar1 | (byte)iVar8;
      if (iVar16 != 0xf) {
        pbVar1 = (byte *)((long)param_1 + (ulong)(iVar16 + 1));
        *pbVar1 = *pbVar1 | (byte)((uint)iVar8 >> 8);
      }
      paVar9 = paVar9 + 1;
      uVar15 = (ulong)((int)uVar15 - 3);
    } while (paVar13 != paVar9);
    break;
      case 4:
    paVar9 = param_2 + 0x27;
    paVar13 = paVar9 + iVar16;
    iVar8 = 0x7c;
    do {
      aVar2 = *paVar9;
      paVar9 = paVar9 + 1;
      pbVar1 = (byte *)((long)param_1 + (long)(iVar8 >> 3));
      *pbVar1 = *pbVar1 | pack_astc_block(unsigned_int*,basist::astc_block_desc_const*,unsigned_int)
                          ::s_reverse_bits4[(byte)aVar2] << ((byte)iVar8 & 7);
      iVar8 = iVar8 + -4;
    } while (paVar13 != paVar9);
    break;
      case 5:
    paVar13 = param_2 + 0x27;
    uVar15 = 0x7b;
    paVar9 = paVar13 + iVar16;
    do {
      iVar8 = (uint)(byte)pack_astc_block(unsigned_int*,basist::astc_block_desc_const*,unsigned_int)
                          ::s_reverse_bits5[(byte)*paVar13] << ((byte)uVar15 & 7);
      uVar18 = (int)(uVar15 >> 3) + 1;
      pbVar1 = (byte *)((long)param_1 + (uVar15 >> 3));
      *pbVar1 = *pbVar1 | (byte)iVar8;
      if (uVar18 < 0x10) {
        pbVar1 = (byte *)((long)param_1 + (ulong)uVar18);
        *pbVar1 = *pbVar1 | (byte)((uint)iVar8 >> 8);
      }
      paVar13 = paVar13 + 1;
      uVar15 = (ulong)((int)uVar15 - 5);
    } while (paVar9 != paVar13);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return 1;
}
/* basist::get_anchor_indices(unsigned int, unsigned int, unsigned int, unsigned char const*&) */undefined1 *basist::get_anchor_indices(uint param_1, uint param_2, uint param_3, uchar **param_4) {
   long lVar1;
   undefined1 *puVar2;
   uchar *puVar3;
   long lVar4;
   puVar3 = "";
   puVar2 = &g_zero_pattern;
   if (1 < param_1) {
      lVar1 = (ulong)param_3 * 3;
      lVar4 = (ulong)param_3 * 0x10;
      if (param_1 == 3) {
         *param_4 = g_astc_bc7_patterns3 + lVar4;
         return g_astc_bc7_pattern3_anchors + lVar1;
      }

      if (param_2 == 7) {
         *param_4 = g_bc7_3_astc2_patterns2 + lVar4;
         return g_bc7_3_astc2_patterns2_anchors + lVar1;
      }

      puVar3 = g_astc_bc7_patterns2 + lVar4;
      puVar2 = g_astc_bc7_pattern2_anchors + lVar1;
   }

   *param_4 = puVar3;
   return puVar2;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* basist::unpack_uastc(basist::uastc_block const&, basist::unpacked_uastc_block&, bool, bool) */undefined8 basist::unpack_uastc(uastc_block *param_1, unpacked_uastc_block *param_2, bool param_3, bool param_4) {
   byte bVar1;
   byte bVar2;
   byte bVar3;
   ushort uVar4;
   ushort uVar5;
   int iVar6;
   int iVar7;
   byte bVar8;
   int iVar9;
   bool bVar10;
   undefined1 *puVar11;
   undefined1 *puVar12;
   uint uVar13;
   ulong uVar14;
   byte *pbVar15;
   undefined8 uVar16;
   unpacked_uastc_block *puVar17;
   byte bVar18;
   sbyte sVar19;
   byte bVar20;
   uint uVar21;
   int iVar22;
   char *pcVar23;
   uint uVar24;
   long lVar25;
   ulong uVar26;
   long lVar27;
   uastc_block *puVar28;
   uint uVar29;
   uint uVar30;
   int iVar31;
   ulong uVar32;
   int iVar33;
   byte bVar34;
   uint uVar35;
   ulong uVar36;
   ulong uVar37;
   unpacked_uastc_block uVar38;
   int iVar39;
   char cVar40;
   int iVar41;
   unpacked_uastc_block *puVar42;
   bool bVar43;
   uint uVar44;
   int iVar45;
   char *pcVar46;
   byte *pbVar47;
   long in_FS_OFFSET;
   undefined1 auVar48[16];
   uint local_c8;
   int local_b0;
   char local_6c[4];
   uint local_68[10];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   bVar20 = g_uastc_huff_modes[( byte ) * param_1 & 0x7f];
   if (0x12 < bVar20) {
      LAB_001121a8:uVar16 = 0;
      goto LAB_001121aa;
   }

   lVar25 = (long)(int)(uint)bVar20;
   uVar13 = (uint)bVar20;
   *(uint*)( param_2 + 0x68 ) = uVar13;
   uVar30 = *(uint*)( g_uastc_mode_huff_codes + lVar25 * 8 + 4 );
   *(undefined4*)( param_2 + 0x6c ) = 0;
   bVar18 = (byte)uVar30;
   if (uVar13 == 8) {
      bVar18 = bVar18 & 7;
      param_2[0x70] = SUB41((int)( uint ) * (ushort*)( param_1 + ( uVar30 >> 3 ) ) >> bVar18, 0);
      for (int i = 0; i < 3; i++) {
         param_2[( i + 113 )] = SUB41((int)( uint ) * (ushort*)( param_1 + ( uVar30 + ( 8*i + 8 ) >> 3 ) ) >> bVar18, 0);
      }

      if (param_4) {
         param_2[0x76] = (unpacked_uastc_block)0x0;
         param_2[0x77] = SUB41((int)(uint)(byte)param_1[uVar30 + 0x20 >> 3] >> bVar18, 0);
         param_2[0x77] = ( unpacked_uastc_block )((byte)param_2[0x77] & 1);
         *(uint*)( param_2 + 0x78 ) = (int)( uint ) * (ushort*)( param_1 + ( uVar30 + 0x21 >> 3 ) ) >> ( ( byte )(uVar30 + 0x21) & 7 ) & 7;
         uVar4 = *(ushort*)( param_1 + ( uVar30 + 0x30 >> 3 ) );
         *(uint*)( param_2 + 0x88 ) = (int)( uint ) * (ushort*)( param_1 + ( uVar30 + 0x24 >> 3 ) ) >> ( ( byte )(uVar30 + 0x24) & 7 ) & 3;
         *(uint*)( param_2 + 0x8c ) = (int)( uint ) * (ushort*)( param_1 + ( uVar30 + 0x26 >> 3 ) ) >> ( ( byte )(uVar30 + 0x26) & 7 ) & 0x1f;
         uVar5 = *(ushort*)( param_1 + ( uVar30 + 0x2b >> 3 ) );
         *(undefined8*)( param_2 + 0x7c ) = 0;
         *(undefined4*)( param_2 + 0x84 ) = 0;
         *(uint*)( param_2 + 0x90 ) = (int)(uint)uVar5 >> ( ( byte )(uVar30 + 0x2b) & 7 ) & 0x1f;
         *(uint*)( param_2 + 0x94 ) = (int)(uint)uVar4 >> bVar18 & 0x1f;
      }

   }
 else {
      if (param_4) {
         uVar38 = (unpacked_uastc_block)0x0;
         if (g_uastc_mode_has_bc1_hint0[lVar25] != '\0') {
            uVar44 = uVar30 >> 3;
            uVar30 = uVar30 + 1;
            uVar38 = ( unpacked_uastc_block )(( byte )((int)(uint)(byte)param_1[uVar44] >> ( bVar18 & 7 )) & 1);
         }

         param_2[0x74] = uVar38;
         uVar38 = (unpacked_uastc_block)0x0;
         uVar44 = uVar30;
         if (g_uastc_mode_has_bc1_hint1[lVar25] != '\0') {
            uVar44 = uVar30 + 1;
            uVar38 = ( unpacked_uastc_block )(( byte )((int)(uint)(byte)param_1[uVar30 >> 3] >> ( (byte)uVar30 & 7 )) & 1);
         }

         param_2[0x75] = uVar38;
         bVar18 = (byte)uVar44 & 7;
         param_2[0x76] = SUB41((int)(uint)(byte)param_1[uVar44 >> 3] >> bVar18, 0);
         param_2[0x76] = ( unpacked_uastc_block )((byte)param_2[0x76] & 1);
         param_2[0x77] = SUB41((int)(uint)(byte)param_1[uVar44 + 1 >> 3] >> ( ( byte )(uVar44 + 1) & 7 ), 0);
         uVar4 = *(ushort*)( param_1 + ( uVar44 + 2 >> 3 ) );
         param_2[0x77] = ( unpacked_uastc_block )((byte)param_2[0x77] & 1);
         uVar5 = *(ushort*)( param_1 + ( uVar44 + 5 >> 3 ) );
         *(uint*)( param_2 + 0x78 ) = (int)(uint)uVar4 >> ( ( byte )(uVar44 + 2) & 7 ) & 7;
         uVar35 = uVar44 + 8;
         uVar30 = 0;
         *(uint*)( param_2 + 0x7c ) = (int)(uint)uVar5 >> ( ( byte )(uVar44 + 5) & 7 ) & 7;
         if (g_uastc_mode_has_etc1_bias[lVar25] != '\0') {
            uVar30 = uVar35 >> 3;
            uVar35 = uVar44 + 0xd;
            uVar30 = (int)( uint ) * (ushort*)( param_1 + uVar30 ) >> bVar18 & 0x1f;
         }

         uVar37 = (ulong)uVar35;
         *(uint*)( param_2 + 0x80 ) = uVar30;
         if (g_uastc_mode_has_alpha[lVar25] == '\0') {
            *(undefined4*)( param_2 + 0x84 ) = 0;
         }
 else {
            uVar37 = ( ulong )(uVar35 + 8);
            *(uint*)( param_2 + 0x84 ) = (int)( uint ) * (ushort*)( param_1 + ( uVar35 >> 3 ) ) >> ( (byte)uVar35 & 7 ) & 0xff;
         }

      }
 else {
         uVar37 = ( ulong )((byte)g_uastc_mode_total_hint_bits[lVar25] + uVar30);
      }

      if (bVar20 < 0x11) {
         uVar14 = 1L << ( bVar20 & 0x3f );
         if (( uVar14 & 0x10294 ) == 0) {
            if (uVar13 == 3) {
               local_c8 = 3;
               uVar32 = ( ulong )((int)uVar37 + 4);
               uVar13 = (int)( uint ) * (ushort*)( param_1 + ( uVar37 >> 3 ) ) >> ( (byte)uVar37 & 7 );
               uVar30 = uVar13 & 0xf;
               *(uint*)( param_2 + 0x6c ) = uVar13 & 0xf;
            }
 else {
               uVar30 = 0;
               local_c8 = 1;
               uVar32 = uVar37;
               LAB_00112280:uVar37 = uVar32;
               if (bVar20 == 7) {
                  if (0x12 < uVar30) goto LAB_001121a8;
                  local_b0 = 1;
                  uVar44 = ( uint ) * (ushort*)( g_bc7_3_astc2_common_partitions + (ulong)uVar30 * 6 + 2 );
                  uVar38 = (unpacked_uastc_block)0x0;
                  goto LAB_00111f10;
               }

               uVar44 = 0;
               if (bVar20 != 3) goto LAB_0011222c;
            }

            if (10 < uVar30) goto LAB_001121a8;
            local_b0 = 1;
            uVar44 = ( uint ) * (ushort*)( g_astc_bc7_common_partitions3 + (ulong)uVar30 * 6 + 2 );
            uVar38 = (unpacked_uastc_block)0x0;
            uVar37 = uVar32;
         }
 else {
            uVar32 = ( ulong )((int)uVar37 + 5);
            uVar44 = (int)( uint ) * (ushort*)( param_1 + ( uVar37 >> 3 ) ) >> ( (byte)uVar37 & 7 );
            uVar30 = uVar44 & 0x1f;
            *(uint*)( param_2 + 0x6c ) = uVar44 & 0x1f;
            if (( uVar14 & 0x10214 ) == 0) {
               local_c8 = 2;
               goto LAB_00112280;
            }

            if (0x1d < uVar30) goto LAB_001121a8;
            local_c8 = 2;
            uVar44 = ( uint ) * (ushort*)( g_astc_bc7_common_partitions2 + ( (ulong)uVar44 & 0x1f ) * 6 + 2 );
            uVar37 = uVar32;
            LAB_0011222c:if (( ( uVar13 - 0xb & 0xfd ) == 0 ) || ( bVar20 == 6 )) {
               local_b0 = 2;
               *(uint*)( param_2 + 0x10 ) = (int)( uint ) * (ushort*)( param_1 + ( uVar37 >> 3 ) ) >> ( (byte)uVar37 & 7 ) & 3;
               uVar38 = (unpacked_uastc_block)0x1;
               uVar37 = ( ulong )((int)uVar37 + 2);
            }
 else {
               local_b0 = 1;
               uVar38 = (unpacked_uastc_block)0x0;
            }

         }

      }
 else if (bVar20 == 0x11) {
         *(undefined4*)( param_2 + 0x10 ) = 3;
         uVar44 = 0;
         uVar38 = (unpacked_uastc_block)0x1;
         uVar30 = 0;
         local_c8 = 1;
         local_b0 = 2;
      }
 else {
         local_c8 = 1;
         uVar44 = 0;
         uVar38 = (unpacked_uastc_block)0x0;
         uVar30 = 0;
         local_b0 = 1;
      }

      LAB_00111f10:param_2[0x14] = uVar38;
      bVar18 = g_uastc_mode_weight_bits[lVar25];
      uVar35 = (uint)bVar18;
      uVar13 = (uint)(byte)g_uastc_mode_comps[lVar25];
      auVar48._1_3_ = 0;
      auVar48[0] = g_uastc_mode_weight_ranges[lVar25];
      iVar7 = local_c8 * uVar13 * 2;
      auVar48._4_4_ = local_c8;
      uVar14 = (ulong)(byte)g_uastc_mode_endpoint_ranges[lVar25];
      auVar48[0xc] = g_uastc_mode_cem[lVar25];
      auVar48._8_4_ = uVar44;
      auVar48._13_3_ = 0;
      *(undefined1(*) [16])param_2 = auVar48;
      iVar33 = ( &DAT_0012eb08 )[uVar14 * 3];
      iVar22 = *(int*)( &DAT_0012eb04 + uVar14 * 0xc );
      iVar6 = ( &g_astc_bise_range_table )[uVar14 * 3];
      if (iVar22 == 0) {
         if (iVar33 != 0) {
            uVar44 = 5;
            iVar9 = 3;
            uVar32 = ( ulong )(iVar7 + 2) / 3;
            goto LAB_00111fbd;
         }

         uVar44 = 0;
         iVar31 = 0;
         iVar9 = 0;
      }
 else {
         uVar44 = 3;
         iVar9 = 5;
         uVar32 = ( ulong )(iVar7 + 4) / 5;
         LAB_00111fbd:iVar31 = (int)uVar32;
         if (iVar31 != 0) {
            iVar45 = iVar31 + -1;
            uVar21 = iVar7 - iVar9 * iVar45;
            iVar41 = 8 - ( uint )(iVar22 == 0);
            uVar24 = ~(-1 << ((byte)iVar41 & 0x1f));
            uVar26 = 0;
            uVar36 = uVar37;
            do {
               uVar29 = uVar24;
               iVar39 = iVar41;
               if (iVar22 == 0) {
                  if (iVar45 == (int)uVar26) {
                     if (iVar33 != 0) {
                        if (uVar21 == 1) {
                           uVar29 = 7;
                           iVar39 = 3;
                           goto LAB_0011202e;
                        }

                        if (uVar21 == 2) goto LAB_00112336;
                     }

                     uVar29 = 0x7f;
                     iVar39 = 7;
                  }

               }
 else if (iVar45 == (int)uVar26) {
                  if (uVar21 == 3) {
                     LAB_00112336:uVar29 = 0x1f;
                     iVar39 = 5;
                  }
 else if (uVar21 < 4) {
                     if (uVar21 == 1) {
                        uVar29 = 3;
                        iVar39 = 2;
                     }
 else {
                        uVar29 = 0xf;
                        if (uVar21 != 2) {
                           uVar29 = 0xff;
                        }

                        iVar39 = ( uint )(uVar21 != 2) * 4 + 4;
                     }

                  }
 else {
                     uVar29 = 0x7f;
                     if (uVar21 != 4) {
                        uVar29 = 0xff;
                     }

                     iVar39 = ( uVar21 != 4 ) + 7;
                  }

               }

               LAB_0011202e:uVar37 = ( ulong )(uint)((int)uVar36 + iVar39);
               local_68[uVar26] = (int)( uint ) * (ushort*)( param_1 + ( uVar36 >> 3 ) ) >> ( (byte)uVar36 & 7 ) & uVar29;
               uVar26 = uVar26 + 1;
               uVar36 = uVar37;
            }
 while ( uVar32 != uVar26 );
         }

      }

      if (local_c8 * uVar13 != 0) {
         iVar33 = 0;
         puVar42 = param_2 + 0x15;
         uVar21 = 0;
         uVar32 = uVar37;
         uVar36 = 0;
         do {
            uVar38 = (unpacked_uastc_block)0x0;
            uVar37 = uVar32;
            if (iVar6 != 0) {
               uVar37 = ( ulong )(uint)((int)uVar32 + iVar6);
               uVar38 = ( unpacked_uastc_block )(( byte )((int)( uint ) * (ushort*)( param_1 + ( uVar32 >> 3 ) ) >> ( (byte)uVar32 & 7 )) & ~(byte)(-1 << ((byte)iVar6 & 0x1f)));
            }

            uVar26 = uVar36;
            if (iVar31 != 0) {
               if (iVar33 == 0) {
                  uVar26 = ( ulong )((int)uVar36 + 1);
                  uVar21 = local_68[uVar36];
                  iVar33 = iVar9;
               }

               iVar33 = iVar33 + -1;
               uVar38 = ( unpacked_uastc_block )((byte)uVar38 | ( byte )(uVar21 % uVar44 << ( (byte)iVar6 & 0x1f )));
               uVar21 = uVar21 / uVar44;
            }

            *puVar42 = uVar38;
            puVar42 = puVar42 + 1;
            uVar32 = uVar37;
            uVar36 = uVar26;
         }
 while ( puVar42 != param_2 + ( ulong )(iVar7 - 1) + 0x16 );
      }

      if (local_c8 == 1) {
         pbVar15 = &g_zero_pattern;
         pbVar47 = pbVar15;
         if (bVar20 != 0x12) goto LAB_00112446;
         LAB_001126d4:lVar25 = 0;
         do {
            if ((int)lVar25 == 0) {
               uVar30 = uVar35 - 1;
               if (uVar35 - 1 == 0) {
                  do {
                     param_2[lVar25 + 0x27] = (unpacked_uastc_block)0x0;
                     lVar25 = lVar25 + 1;
                  }
 while ( (int)lVar25 == 0 );
                  uVar30 = 1;
               }

               LAB_001126fa:uVar44 = (uint)uVar37;
               puVar28 = param_1 + ( uVar37 >> 3 );
               bVar20 = ~(byte)(-1 << ((byte)uVar30 & 0x1f));
               sVar19 = ( sbyte )(uVar44 & 7);
               if (uVar44 < 0x70) {
                  uVar37 = ( ulong )(uVar30 + uVar44);
                  uVar38 = ( unpacked_uastc_block )(( byte )((int)( uint ) * (ushort*)puVar28 >> sVar19) & bVar20);
               }
 else {
                  bVar34 = ( byte )((int)( uint )(byte) * puVar28 >> sVar19);
                  uVar21 = 8 - ( uVar44 & 7 );
                  if ((int)uVar30 < (int)uVar21) {
                     uVar21 = uVar30;
                  }

                  if (uVar30 != uVar21) {
                     bVar34 = bVar34 | (char)puVar28[1] << ( (byte)uVar21 & 0x1f );
                  }

                  uVar37 = ( ulong )(uVar30 + uVar44);
                  uVar38 = ( unpacked_uastc_block )(bVar34 & bVar20);
               }

            }
 else {
               uVar38 = (unpacked_uastc_block)0x0;
               uVar30 = uVar35;
               if (uVar35 != 0) goto LAB_001126fa;
            }

            param_2[lVar25 + 0x27] = uVar38;
            lVar25 = lVar25 + 1;
         }
 while ( lVar25 != 0x10 );
      }
 else {
         lVar25 = (ulong)uVar30 * 3;
         lVar27 = (ulong)uVar30 * 0x10;
         if (local_c8 == 3) {
            puVar12 = g_astc_bc7_patterns3;
            puVar11 = g_astc_bc7_pattern3_anchors;
         }
 else {
            if (bVar20 == 7) {
               pbVar15 = g_bc7_3_astc2_patterns2_anchors + lVar25;
               pbVar47 = g_bc7_3_astc2_patterns2 + lVar27;
               goto LAB_00112446;
            }

            puVar12 = g_astc_bc7_patterns2;
            puVar11 = g_astc_bc7_pattern2_anchors;
         }

         pbVar15 = puVar11 + lVar25;
         pbVar47 = puVar12 + lVar27;
         if (bVar20 == 0x12) goto LAB_001126d4;
         LAB_00112446:cVar40 = (char)uVar37;
         if ((uint)uVar37 < 0x40) {
            uVar37 = (long)( (int)(uint)(byte)param_1[7] >> ( cVar40 - 0x38U & 0x1f ) ) | *(ulong*)( param_1 + 8 ) << ( 0x40U - cVar40 & 0x3f );
         }
 else {
            uVar37 = *(ulong*)( param_1 + 8 ) >> ( cVar40 - 0x40U & 0x3f );
         }

         iVar33 = bVar18 - 1;
         bVar34 = (char)( 1 << ( bVar18 & 0x1f ) ) - 1;
         bVar20 = (char)( 1 << ( (byte)iVar33 & 0x1f ) ) - 1;
         if (local_b0 == 2) {
            param_2[0x27] = ( unpacked_uastc_block )((byte)uVar37 & bVar20);
            iVar22 = iVar33 * 2;
            param_2[0x28] = ( unpacked_uastc_block )(( byte )(uVar37 >> ( (byte)iVar33 & 0x3f )) & bVar20);
            puVar42 = param_2 + 0x29;
            do {
               puVar17 = puVar42 + 1;
               bVar20 = (byte)iVar22;
               iVar22 = iVar22 + uVar35;
               *puVar42 = ( unpacked_uastc_block )(( byte )(uVar37 >> ( bVar20 & 0x3f )) & bVar34);
               puVar42 = puVar17;
            }
 while ( puVar17 != param_2 + 0x47 );
         }
 else if (local_c8 == 1) {
            if (uVar35 == 4) {
               uVar32 = ( ( ( ( ( ( ( ( uVar37 >> 0x3b ) << 8 | uVar37 >> 0x37 & 0xff ) << 8 | uVar37 >> 0x33 & 0xff ) << 8 | uVar37 >> 0x2f & 0xff ) << 8 | uVar37 >> 0x2b & 0xff ) << 8 | uVar37 >> 0x27 & 0xff ) << 8 | uVar37 >> 0x23 & 0xff ) << 8 | uVar37 >> 0x1f & 0xff ) & _UNK_00181268;
               *(ulong*)( param_2 + 0x27 ) = ( ( ( ( ( ( ( ( ulong )(( uint )(uVar37 >> 0x13) & 0xff00) | uVar37 >> 0x17 & 0xff ) << 8 | uVar37 >> 0x13 & 0xff ) << 8 | uVar37 >> 0xf & 0xff ) << 8 | uVar37 >> 0xb & 0xff ) << 8 | uVar37 >> 7 & 0xff ) << 8 | uVar37 >> 3 & 0xff ) << 8 | uVar37 & 0xff ) & __LC84;
               *(ulong*)( param_2 + 0x2f ) = uVar32;
            }
 else {
               param_2[0x27] = ( unpacked_uastc_block )((byte)uVar37 & bVar20);
               puVar42 = param_2 + 0x28;
               do {
                  puVar17 = puVar42 + 1;
                  bVar20 = (byte)iVar33;
                  iVar33 = iVar33 + uVar35;
                  *puVar42 = ( unpacked_uastc_block )(( byte )(uVar37 >> ( bVar20 & 0x3f )) & bVar34);
                  puVar42 = puVar17;
               }
 while ( puVar17 != param_2 + 0x37 );
            }

         }
 else {
            bVar1 = *pbVar15;
            bVar2 = pbVar15[1];
            iVar22 = 0;
            bVar3 = pbVar15[2];
            lVar25 = 0;
            do {
               while (true) {
                  uVar30 = (uint)lVar25;
                  bVar8 = ( byte )(uVar37 >> ( (byte)iVar22 & 0x3f ));
                  if (( bVar2 != uVar30 && bVar1 != uVar30 ) && ( bVar3 != uVar30 )) break;
                  iVar22 = iVar22 + iVar33;
                  param_2[lVar25 + 0x27] = ( unpacked_uastc_block )(bVar8 & bVar20);
                  lVar25 = lVar25 + 1;
                  if (lVar25 == 0x10) goto LAB_001124f8;
               }
;
               iVar22 = iVar22 + uVar35;
               param_2[lVar25 + 0x27] = ( unpacked_uastc_block )(bVar8 & bVar34);
               lVar25 = lVar25 + 1;
            }
 while ( lVar25 != 0x10 );
         }

      }

      LAB_001124f8:bVar43 = 2 < uVar13 && param_3;
      if (bVar43) {
         local_6c[0] = '\0';
         local_6c[1] = '\0';
         pcVar23 = local_6c;
         uVar30 = 0;
         uVar37 = 0;
         local_6c[2] = 0;
         pcVar46 = pcVar23 + local_c8;
         bVar10 = false;
         lVar25 = uVar14 * 0x100;
         do {
            iVar33 = (int)uVar37;
            if ((uint)(byte)g_astc_unquant[( (ulong)(byte)param_2[( ulong )(iVar33 + 1) + 0x15] + lVar25 ) * 2] + (uint)(byte)g_astc_unquant[( (ulong)(byte)param_2[( ulong )(iVar33 + 3) + 0x15] + lVar25 ) * 2] + (uint)(byte)g_astc_unquant[( (ulong)(byte)param_2[( ulong )(iVar33 + 5) + 0x15] + lVar25 ) * 2] < (uint)(byte)g_astc_unquant[( (ulong)(byte)param_2[( ulong )(iVar33 + 2) + 0x15] + lVar25 ) * 2] + (uint)(byte)g_astc_unquant[( (ulong)(byte)param_2[uVar37 + 0x15] + lVar25 ) * 2] + (uint)(byte)g_astc_unquant[( (ulong)(byte)param_2[( ulong )(iVar33 + 4) + 0x15] + lVar25 ) * 2]) {
               lVar27 = 0;
               do {
                  *(ushort*)( param_2 + lVar27 * 2 + (ulong)uVar30 * 2 + 0x15 ) = CONCAT11(param_2[uVar37 + 0x15], param_2[( ulong )((int)uVar37 + 1) + 0x15]);
                  lVar27 = lVar27 + 1;
                  uVar37 = ( ulong )((int)uVar37 + 2);
               }
 while ( (uint)lVar27 < uVar13 );
               *pcVar23 = '\x01';
               bVar10 = bVar43;
            }

            pcVar23 = pcVar23 + 1;
            uVar37 = ( ulong )(iVar33 + uVar13 * 2);
            uVar30 = uVar30 + uVar13;
         }
 while ( pcVar23 != pcVar46 );
         if (bVar10) {
            uVar30 = 1;
            pbVar15 = pbVar47 + 0x10;
            cVar40 = (char)( 1 << ( bVar18 & 0x1f ) ) + -1;
            do {
               if (( local_6c[*pbVar47] != '\0' ) && ( param_2[( ulong )(uVar30 - 1) + 0x27] = ( unpacked_uastc_block )(cVar40 - (char)param_2[( ulong )(uVar30 - 1) + 0x27]) ),local_b0 == 2) {
                  param_2[(ulong)uVar30 + 0x27] = ( unpacked_uastc_block )(cVar40 - (char)param_2[(ulong)uVar30 + 0x27]);
               }

               pbVar47 = pbVar47 + 1;
               uVar30 = uVar30 + local_b0;
            }
 while ( pbVar47 != pbVar15 );
         }

      }

   }

   uVar16 = 1;
   LAB_001121aa:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar16;
}
/* basist::unpack_uastc(unsigned int, unsigned int, basist::color32 const&, basist::astc_block_desc
   const&, basist::color32*, bool) */undefined8 basist::unpack_uastc(uint param_1, uint param_2, color32 *param_3, astc_block_desc *param_4, color32 *param_5, bool param_6) {
   char cVar1;
   byte bVar2;
   byte bVar3;
   undefined1 uVar4;
   byte bVar5;
   undefined1 uVar6;
   undefined1 uVar7;
   byte bVar8;
   byte bVar9;
   astc_block_desc aVar10;
   astc_block_desc aVar11;
   color32 cVar12;
   long lVar13;
   long lVar14;
   color32 *pcVar15;
   color32 *pcVar16;
   uint uVar17;
   undefined1 *puVar18;
   uint uVar19;
   ulong uVar20;
   long lVar21;
   int iVar22;
   byte *pbVar23;
   uint uVar24;
   long lVar25;
   uint uVar26;
   astc_block_desc *paVar27;
   int iVar28;
   uint uVar29;
   uint uVar30;
   long lVar31;
   int iVar32;
   uint uVar33;
   uint uVar34;
   long in_FS_OFFSET;
   byte *local_228;
   byte local_1e8[32];
   color32 local_1c8[392];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 8) {
      pcVar15 = param_5;
      do {
         pcVar16 = pcVar15 + 4;
         *(undefined4*)pcVar15 = *(undefined4*)param_3;
         pcVar15 = pcVar16;
      }
 while ( pcVar16 != param_5 + 0x40 );
      goto LAB_00112fb9;
   }

   cVar1 = g_uastc_mode_planes[param_1];
   bVar2 = g_uastc_mode_subsets[param_1];
   bVar3 = g_uastc_mode_comps[param_1];
   uVar4 = g_uastc_mode_endpoint_ranges[param_1];
   uVar24 = (uint)bVar2;
   bVar5 = g_uastc_mode_weight_bits[param_1];
   if (uVar24 == 0) {
      if (cVar1 == '\x01') {
         puVar18 = &g_zero_pattern;
         LAB_001131f9:lVar25 = 0;
         do {
            *(undefined4*)( param_5 + lVar25 * 4 ) = *(undefined4*)( local_1c8 + ( (ulong)(byte)puVar18[lVar25] * 0x20 + (ulong)(byte)param_4[lVar25 + 0x27] ) * 4 );
            lVar25 = lVar25 + 1;
         }
 while ( lVar25 != 0x10 );
         goto LAB_00112fb9;
      }

   }
 else {
      local_228 = local_1e8;
      uVar33 = (uint)bVar3;
      paVar27 = param_4 + 0x15;
      if (4 < uVar33) {
         uVar33 = 4;
      }

      iVar28 = 0;
      iVar22 = -uVar33;
      pbVar23 = local_228;
      do {
         if (bVar3 == 2) {
            uVar6 = g_astc_unquant[(ulong)CONCAT11(uVar4, paVar27[1]) * 2];
            uVar7 = g_astc_unquant[(ulong)CONCAT11(uVar4, *paVar27) * 2];
            *(ulong*)pbVar23 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(g_astc_unquant[(ulong)CONCAT11(uVar4, paVar27[3]) * 2], uVar6), uVar6), uVar6), g_astc_unquant[(ulong)CONCAT11(uVar4, paVar27[2]) * 2]), uVar7), uVar7), uVar7);
         }
 else {
            uVar29 = iVar28 * 2;
            lVar25 = 0;
            if (bVar3 != 0) {
               do {
                  pbVar23[lVar25] = g_astc_unquant[(ulong)CONCAT11(uVar4, param_4[(ulong)uVar29 + 0x15]) * 2];
                  uVar30 = uVar29 + 1;
                  uVar29 = uVar29 + 2;
                  pbVar23[lVar25 + 4] = g_astc_unquant[(ulong)CONCAT11(uVar4, param_4[(ulong)uVar30 + 0x15]) * 2];
                  lVar25 = lVar25 + 1;
               }
 while ( (uint)lVar25 < uVar33 );
               if (3 < bVar3) goto LAB_00112d53;
            }

            if (iVar22 != -4) {
               uVar29 = 0;
               do {
                  uVar20 = (ulong)uVar29;
                  uVar29 = uVar29 + 1;
                  pbVar23[uVar20 + uVar33] = 0xff;
               }
 while ( uVar29 < iVar22 + 4U );
            }

            if (iVar22 != -4) {
               uVar20 = 0;
               do {
                  uVar29 = (int)uVar20 + 1;
                  pbVar23[uVar20 + (ulong)uVar33 + 4] = 0xff;
                  uVar20 = (ulong)uVar29;
               }
 while ( uVar29 < iVar22 + 4U );
            }

         }

         LAB_00112d53:paVar27 = paVar27 + 4;
         pbVar23 = pbVar23 + 8;
         iVar28 = iVar28 + uVar33;
      }
 while ( paVar27 != param_4 + ( ulong )(bVar2 - 1) * 4 + 0x19 );
      iVar22 = 1 << ( bVar5 & 0x1f );
      uVar29 = 1;
      if (bVar3 != 0) {
         uVar29 = uVar33;
      }

      lVar25 = ( ulong )(iVar22 - 1) * 4 + 4;
      lVar13 = *(long*)( g_astc_weight_tables + (ulong)bVar5 * 8 );
      uVar30 = 0;
      if (bVar3 != 0) {
         uVar30 = uVar29;
      }

      uVar17 = 0;
      lVar31 = lVar13;
      do {
         if (iVar22 != 0) {
            lVar21 = lVar13 - lVar31;
            if (bVar3 == 2) {
               bVar2 = local_228[7];
               bVar5 = local_228[4];
               bVar8 = *local_228;
               bVar9 = local_228[3];
               do {
                  iVar28 = *(int*)( lVar31 + lVar21 );
                  iVar32 = 0x40 - iVar28;
                  if (param_6) {
                     uVar34 = (uint)bVar2 << 8 | 0x80;
                     uVar19 = ( (uint)bVar5 << 8 | 0x80 ) * iVar28 + 0x20 + ( (uint)bVar8 << 8 | 0x80 ) * iVar32;
                     uVar26 = (uint)bVar9 << 8 | 0x80;
                  }
 else {
                     uVar19 = ( (uint)bVar8 * iVar32 + iVar28 * (uint)bVar5 ) * 0x101 + 0x20;
                     uVar26 = (uint)CONCAT11(bVar9, bVar9);
                     uVar34 = (uint)CONCAT11(bVar2, bVar2);
                  }

                  uVar19 = uVar19 >> 0xe & 0xff;
                  *(uint*)( local_1c8 + lVar21 ) = ( ( uVar26 * iVar32 + 0x20 + iVar28 * uVar34 >> 6 & 0xff00 | uVar19 ) << 8 | uVar19 ) << 8 | uVar19;
                  lVar21 = lVar21 + 4;
               }
 while ( lVar25 != lVar21 );
            }
 else {
               do {
                  if (bVar3 != 0) {
                     while (true) {
                        iVar28 = *(int*)( lVar31 + lVar21 );
                        lVar14 = 0;
                        do {
                           bVar2 = local_228[lVar14];
                           if (param_6) {
                              uVar26 = (uint)bVar2 << 8 | 0x80;
                              uVar19 = (uint)local_228[lVar14 + 4] << 8 | 0x80;
                           }
 else {
                              uVar26 = (uint)bVar2 + (uint)bVar2 * 0x100;
                              uVar19 = (uint)local_228[lVar14 + 4] * 0x101;
                           }

                           local_1c8[lVar14 + lVar21] = SUB41(uVar19 * iVar28 + 0x20 + uVar26 * ( 0x40 - iVar28 ) >> 0xe, 0);
                           lVar14 = lVar14 + 1;
                        }
 while ( (uint)lVar14 < uVar33 );
                        if (uVar29 != 4) break;
                        lVar21 = lVar21 + 4;
                        if (lVar25 == lVar21) goto LAB_00112f04;
                     }
;
                  }

                  lVar14 = (ulong)uVar30 + lVar21;
                  lVar21 = lVar21 + 4;
                  memset(local_1c8 + lVar14, 0xff, ( ulong )(3 - uVar30) + 1);
               }
 while ( lVar21 != lVar25 );
            }

         }

         LAB_00112f04:uVar17 = uVar17 + 1;
         lVar25 = lVar25 + 0x80;
         lVar31 = lVar31 + -0x80;
         local_228 = local_228 + 8;
      }
 while ( uVar17 < uVar24 );
      if (uVar24 == 1) {
         if (cVar1 == '\x01') {
            lVar25 = 0;
            do {
               *(undefined4*)( param_5 + lVar25 * 4 ) = *(undefined4*)( local_1c8 + (ulong)(byte)param_4[lVar25 + 0x27] * 4 );
               lVar25 = lVar25 + 1;
            }
 while ( lVar25 != 0x10 );
            goto LAB_00112fb9;
         }

      }
 else {
         if (uVar24 == 3) {
            puVar18 = g_astc_bc7_patterns3;
         }
 else {
            if (param_1 == 7) {
               puVar18 = g_bc7_3_astc2_patterns2 + (ulong)param_2 * 0x10;
               goto LAB_001131f9;
            }

            puVar18 = g_astc_bc7_patterns2;
         }

         puVar18 = puVar18 + (ulong)param_2 * 0x10;
         if (cVar1 == '\x01') goto LAB_001131f9;
      }

   }

   paVar27 = param_4 + 0x28;
   do {
      aVar10 = paVar27[-1];
      aVar11 = *paVar27;
      lVar25 = 0;
      do {
         if (*(int*)( param_4 + 0x10 ) == (int)lVar25) {
            cVar12 = local_1c8[lVar25 + (ulong)(byte)aVar11 * 4];
         }
 else {
            cVar12 = local_1c8[lVar25 + (ulong)(byte)aVar10 * 4];
         }

         param_5[lVar25] = cVar12;
         lVar25 = lVar25 + 1;
      }
 while ( lVar25 != 4 );
      paVar27 = paVar27 + 2;
      param_5 = param_5 + 4;
   }
 while ( param_4 + 0x48 != paVar27 );
   LAB_00112fb9:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return 1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* basist::transcode_uastc_to_pvrtc1_4_rgb(basist::uastc_block const*, void*, unsigned int, unsigned
   int, bool, bool) [clone .part.0] */undefined8 basist::transcode_uastc_to_pvrtc1_4_rgb(uastc_block *param_1, void *param_2, uint param_3, uint param_4, bool param_5, bool param_6) {
   void *pvVar1;
   uint *puVar2;
   unpacked_uastc_block uVar3;
   char cVar4;
   char cVar10;
   byte bVar17;
   byte bVar22;
   byte bVar36;
   short sVar52;
   short sVar53;
   short sVar54;
   long lVar55;
   long lVar56;
   long lVar57;
   uint uVar58;
   uint uVar59;
   char cVar60;
   uint uVar61;
   int iVar62;
   int iVar63;
   int iVar64;
   uint uVar65;
   uint uVar66;
   int iVar67;
   int iVar68;
   unpacked_uastc_block *puVar69;
   unpacked_uastc_block *puVar70;
   undefined8 uVar71;
   uint uVar72;
   uint uVar73;
   uint uVar74;
   int iVar75;
   ulong uVar76;
   ulong uVar77;
   uint uVar78;
   uint uVar79;
   uint uVar80;
   int iVar81;
   unpacked_uastc_block *puVar82;
   uint uVar83;
   uint uVar84;
   uint uVar85;
   uint uVar86;
   uint uVar87;
   uint uVar88;
   ulong uVar89;
   uint uVar90;
   long lVar91;
   uint uVar92;
   uint uVar93;
   uint uVar94;
   uint uVar95;
   int iVar96;
   int iVar97;
   uint uVar98;
   uint uVar99;
   uint uVar100;
   ulong uVar101;
   long lVar102;
   int iVar103;
   uint uVar104;
   int iVar105;
   uint uVar106;
   uint uVar107;
   uint uVar108;
   uint uVar109;
   int iVar110;
   uint uVar111;
   long in_FS_OFFSET;
   byte bVar112;
   byte bVar113;
   byte bVar116;
   byte bVar117;
   byte bVar118;
   byte bVar119;
   byte bVar120;
   byte bVar121;
   byte bVar122;
   byte bVar123;
   undefined1 auVar114[16];
   undefined1 auVar115[16];
   byte bVar124;
   ushort uVar125;
   undefined4 uVar126;
   byte bVar133;
   byte bVar134;
   byte bVar136;
   byte bVar137;
   ushort uVar138;
   byte bVar139;
   byte bVar140;
   ushort uVar141;
   byte bVar142;
   byte bVar143;
   ushort uVar144;
   byte bVar145;
   byte bVar146;
   ushort uVar147;
   byte bVar148;
   byte bVar149;
   ushort uVar150;
   byte bVar151;
   byte bVar152;
   undefined1 auVar130[16];
   ushort uVar135;
   ushort uVar153;
   undefined1 auVar132[16];
   byte bVar154;
   byte bVar155;
   byte bVar156;
   byte bVar157;
   byte bVar158;
   byte bVar159;
   byte bVar160;
   byte bVar161;
   byte bVar162;
   byte bVar163;
   byte bVar164;
   byte bVar165;
   byte bVar166;
   byte bVar167;
   byte bVar168;
   byte bVar169;
   byte bVar170;
   ushort uVar171;
   byte bVar173;
   ushort uVar174;
   ushort uVar175;
   ushort uVar176;
   ushort uVar177;
   ushort uVar178;
   ushort uVar179;
   ushort uVar180;
   undefined1 auVar172[16];
   byte bVar181;
   byte bVar182;
   byte bVar183;
   byte bVar184;
   byte bVar185;
   byte bVar186;
   byte bVar187;
   byte bVar188;
   byte bVar189;
   byte bVar190;
   byte bVar191;
   byte bVar192;
   byte bVar193;
   byte bVar194;
   byte bVar195;
   byte bVar196;
   ushort uVar197;
   undefined4 uVar198;
   ushort uVar205;
   byte bVar206;
   ushort uVar207;
   byte bVar208;
   ushort uVar209;
   ushort uVar210;
   ushort uVar211;
   ushort uVar212;
   undefined1 auVar203[16];
   ushort uVar213;
   uint uStack_29c;
   uint uStack_290;
   void *local_278;
   int local_228;
   uint uStack_1f8;
   byte bStack_1f4;
   byte bStack_1f0;
   void *local_1c8;
   ulong local_1c0;
   long alStack_1b8[4];
   uint auStack_198[4];
   undefined8 uStack_188;
   uint uStack_180;
   uint auStack_158[4];
   undefined8 uStack_148;
   uint uStack_140;
   color32 local_118;
   byte bStack_117;
   unpacked_uastc_block auStack_116[2];
   byte bStack_114;
   byte bStack_113;
   byte bStack_112;
   byte bStack_111;
   byte bStack_110;
   byte bStack_10f;
   byte bStack_10e;
   byte bStack_10d;
   byte bStack_10c;
   byte bStack_10b;
   byte bStack_10a;
   byte bStack_109;
   byte local_108;
   byte bStack_107;
   byte bStack_106;
   byte bStack_105;
   byte bStack_104;
   byte bStack_103;
   byte bStack_102;
   byte bStack_101;
   byte bStack_100;
   byte bStack_ff;
   byte bStack_fe;
   byte bStack_fd;
   byte bStack_fc;
   byte bStack_fb;
   byte bStack_fa;
   byte bStack_f9;
   byte local_f8;
   byte bStack_f7;
   byte bStack_f6;
   byte bStack_f5;
   byte bStack_f4;
   byte bStack_f3;
   byte bStack_f2;
   byte bStack_f1;
   byte bStack_f0;
   byte bStack_ef;
   byte bStack_ee;
   byte bStack_ed;
   byte bStack_ec;
   byte bStack_eb;
   byte bStack_ea;
   byte bStack_e9;
   byte local_e8;
   byte bStack_e7;
   byte bStack_e6;
   byte bStack_e5;
   byte bStack_e4;
   byte bStack_e3;
   byte bStack_e2;
   byte bStack_e1;
   byte bStack_e0;
   byte bStack_df;
   byte bStack_de;
   byte bStack_dd;
   byte bStack_dc;
   byte bStack_db;
   byte bStack_da;
   byte bStack_d9;
   unpacked_uastc_block local_d8[3];
   unpacked_uastc_block local_d5[101];
   uint local_70;
   uint local_6c;
   color32 local_68[40];
   long local_40;
   char cVar5;
   char cVar6;
   char cVar7;
   char cVar8;
   char cVar9;
   char cVar11;
   char cVar12;
   char cVar13;
   char cVar14;
   char cVar15;
   char cVar16;
   byte bVar18;
   byte bVar19;
   byte bVar20;
   byte bVar21;
   byte bVar23;
   byte bVar24;
   byte bVar25;
   byte bVar26;
   byte bVar27;
   byte bVar28;
   byte bVar29;
   byte bVar30;
   byte bVar31;
   byte bVar32;
   byte bVar33;
   byte bVar34;
   byte bVar35;
   byte bVar37;
   byte bVar38;
   byte bVar39;
   byte bVar40;
   byte bVar41;
   byte bVar42;
   byte bVar43;
   byte bVar44;
   byte bVar45;
   byte bVar46;
   byte bVar47;
   byte bVar48;
   byte bVar49;
   byte bVar50;
   byte bVar51;
   undefined6 uVar127;
   undefined1 auVar128[12];
   undefined1 auVar129[14];
   undefined1 auVar131[16];
   undefined6 uVar199;
   undefined8 uVar200;
   undefined1 auVar201[12];
   undefined1 auVar202[14];
   undefined1 auVar204[16];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar71 = 0;
   uVar78 = param_3 * 4;
   if (( ( uVar78 != 0 ) && ( uVar72 = param_4 * 4 ),uVar72 != 0 )) {
      local_1c8 = (void*)0x0;
      local_1c0 = 0;
      local_278 = (void*)0x0;
      uVar78 = param_3 * param_4;
      if (uVar78 != 0) {
         basisu::elemental_vector::increase_capacity((elemental_vector*)&local_1c8, uVar78, uVar78 == 1, 4, (_func_void_void_ptr_void_ptr_uint*)0x0, false);
         local_278 = local_1c8;
         memset((void*)( (long)local_1c8 + ( local_1c0 & 0xffffffff ) * 4 ), 0, ( ulong )(uVar78 - (int)local_1c0) << 2);
         local_1c0 = CONCAT44(local_1c0._4_4_, uVar78);
      }

      if (param_4 != 0) {
         uVar78 = 0;
         if (param_3 == 0) {
            do {
               uVar78 = uVar78 + 1;
            }
 while ( param_4 != uVar78 );
         }
 else {
            uVar72 = param_3;
            do {
               uVar111 = uVar72 - param_3;
               do {
                  uVar77 = (ulong)uVar111;
                  cVar60 = unpack_uastc(param_1 + uVar77 * 0x10, auStack_116 + 0x3e, false, false);
                  if (( cVar60 == '\0' ) || ( cVar60 = unpack_uastc(local_70, local_6c, local_68, (astc_block_desc*)( auStack_116 + 0x3e ), &local_118, false) ),cVar60 == '\0') {
                     uVar71 = 0;
                     goto LAB_001133d4;
                  }

                  if (param_5) {
                     puVar82 = auStack_116 + 1;
                     uVar76 = 0;
                     uVar89 = 0xff;
                     do {
                        uVar3 = *puVar82;
                        if ((uint)(byte)uVar3 < (uint)uVar89) {
                           uVar89 = (ulong)(byte)uVar3;
                        }

                        if ((uint)uVar76 < (uint)(byte)uVar3) {
                           uVar76 = (ulong)(byte)uVar3;
                        }

                        puVar82 = puVar82 + 4;
                     }
 while ( puVar82 != local_d5 );
                     bVar206 = (byte)uVar89;
                     bVar117 = (byte)uVar76;
                     uVar101 = uVar89;
                     bVar113 = bVar117;
                  }
 else {
                     auVar203[1] = bStack_117;
                     auVar203[0] = local_118;
                     auVar203[2] = auStack_116[0];
                     auVar203[3] = auStack_116[1];
                     auVar203[4] = bStack_114;
                     auVar203[5] = bStack_113;
                     auVar203[6] = bStack_112;
                     auVar203[7] = bStack_111;
                     auVar203[8] = bStack_110;
                     auVar203[9] = bStack_10f;
                     auVar203[10] = bStack_10e;
                     auVar203[0xb] = bStack_10d;
                     auVar203[0xc] = bStack_10c;
                     auVar203[0xd] = bStack_10b;
                     auVar203[0xe] = bStack_10a;
                     auVar203[0xf] = bStack_109;
                     auVar114[1] = bStack_107;
                     auVar114[0] = local_108;
                     auVar114[2] = bStack_106;
                     auVar114[3] = bStack_105;
                     auVar114[4] = bStack_104;
                     auVar114[5] = bStack_103;
                     auVar114[6] = bStack_102;
                     auVar114[7] = bStack_101;
                     auVar114[8] = bStack_100;
                     auVar114[9] = bStack_ff;
                     auVar114[10] = bStack_fe;
                     auVar114[0xb] = bStack_fd;
                     auVar114[0xc] = bStack_fc;
                     auVar114[0xd] = bStack_fb;
                     auVar114[0xe] = bStack_fa;
                     auVar114[0xf] = bStack_f9;
                     auVar130[1] = bStack_f7;
                     auVar130[0] = local_f8;
                     auVar130[2] = bStack_f6;
                     auVar130[3] = bStack_f5;
                     auVar130[4] = bStack_f4;
                     auVar130[5] = bStack_f3;
                     auVar130[6] = bStack_f2;
                     auVar130[7] = bStack_f1;
                     auVar130[8] = bStack_f0;
                     auVar130[9] = bStack_ef;
                     auVar130[10] = bStack_ee;
                     auVar130[0xb] = bStack_ed;
                     auVar130[0xc] = bStack_ec;
                     auVar130[0xd] = bStack_eb;
                     auVar130[0xe] = bStack_ea;
                     auVar130[0xf] = bStack_e9;
                     auVar203 = auVar203 & __LC85;
                     auVar114 = auVar114 & __LC85;
                     auVar130 = auVar130 & __LC85;
                     sVar52 = auVar203._0_2_;
                     sVar53 = auVar203._2_2_;
                     bVar206 = ( 0 < sVar53 ) * ( sVar53 < 0x100 ) * auVar203[2] - ( 0xff < sVar53 );
                     sVar53 = auVar203._4_2_;
                     sVar54 = auVar203._6_2_;
                     cVar4 = ( 0 < sVar54 ) * ( sVar54 < 0x100 ) * auVar203[6] - ( 0xff < sVar54 );
                     uVar198 = CONCAT13(cVar4, CONCAT12(( 0 < sVar53 ) * ( sVar53 < 0x100 ) * auVar203[4] - ( 0xff < sVar53 ), CONCAT11(bVar206, ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar203[0] - ( 0xff < sVar52 ))));
                     sVar52 = auVar203._8_2_;
                     sVar53 = auVar203._10_2_;
                     cVar60 = ( 0 < sVar53 ) * ( sVar53 < 0x100 ) * auVar203[10] - ( 0xff < sVar53 );
                     uVar199 = CONCAT15(cVar60, CONCAT14(( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar203[8] - ( 0xff < sVar52 ), uVar198));
                     sVar52 = auVar203._12_2_;
                     sVar53 = auVar203._14_2_;
                     cVar5 = ( 0 < sVar53 ) * ( sVar53 < 0x100 ) * auVar203[0xe] - ( 0xff < sVar53 );
                     uVar200 = CONCAT17(cVar5, CONCAT16(( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar203[0xc] - ( 0xff < sVar52 ), uVar199));
                     sVar52 = auVar114._0_2_;
                     sVar53 = auVar114._2_2_;
                     cVar6 = ( 0 < sVar53 ) * ( sVar53 < 0x100 ) * auVar114[2] - ( 0xff < sVar53 );
                     auVar201._0_10_ = CONCAT19(cVar6, CONCAT18(( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar114[0] - ( 0xff < sVar52 ), uVar200));
                     sVar52 = auVar114._4_2_;
                     auVar201[10] = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar114[4] - ( 0xff < sVar52 );
                     sVar52 = auVar114._6_2_;
                     cVar7 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar114[6] - ( 0xff < sVar52 );
                     auVar201[0xb] = cVar7;
                     sVar52 = auVar114._8_2_;
                     auVar202[0xc] = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar114[8] - ( 0xff < sVar52 );
                     auVar202._0_12_ = auVar201;
                     sVar52 = auVar114._10_2_;
                     cVar8 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar114[10] - ( 0xff < sVar52 );
                     auVar202[0xd] = cVar8;
                     sVar52 = auVar114._12_2_;
                     auVar204[0xe] = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar114[0xc] - ( 0xff < sVar52 );
                     auVar204._0_14_ = auVar202;
                     sVar52 = auVar114._14_2_;
                     cVar9 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar114[0xe] - ( 0xff < sVar52 );
                     auVar204[0xf] = cVar9;
                     uVar171 = (ushort)bStack_117;
                     uVar174 = ( ushort )(( (uint)(byte)auStack_116[1] << 0x18 ) >> 0x18);
                     uVar175 = ( ushort )(( (uint6)bStack_113 << 0x28 ) >> 0x28);
                     uVar176 = ( ushort )(( (ulong)bStack_111 << 0x38 ) >> 0x38);
                     uVar177 = ( ushort )(( uint3 )((uint3)bStack_10f << 0x10) >> 0x10);
                     uVar178 = ( ushort )(( (uint5)bStack_10d << 0x20 ) >> 0x20);
                     uVar179 = ( ushort )(( (uint7)bStack_10b << 0x30 ) >> 0x30);
                     uVar180 = ( ushort )(( uint3 )((uint3)bStack_109 << 0x10) >> 0x10);
                     auVar115[1] = bStack_e7;
                     auVar115[0] = local_e8;
                     auVar115[2] = bStack_e6;
                     auVar115[3] = bStack_e5;
                     auVar115[4] = bStack_e4;
                     auVar115[5] = bStack_e3;
                     auVar115[6] = bStack_e2;
                     auVar115[7] = bStack_e1;
                     auVar115[8] = bStack_e0;
                     auVar115[9] = bStack_df;
                     auVar115[10] = bStack_de;
                     auVar115[0xb] = bStack_dd;
                     auVar115[0xc] = bStack_dc;
                     auVar115[0xd] = bStack_db;
                     auVar115[0xe] = bStack_da;
                     auVar115[0xf] = bStack_d9;
                     auVar115 = auVar115 & __LC85;
                     sVar52 = auVar130._0_2_;
                     sVar53 = auVar130._2_2_;
                     bVar208 = ( 0 < sVar53 ) * ( sVar53 < 0x100 ) * auVar130[2] - ( 0xff < sVar53 );
                     sVar53 = auVar130._4_2_;
                     sVar54 = auVar130._6_2_;
                     cVar10 = ( 0 < sVar54 ) * ( sVar54 < 0x100 ) * auVar130[6] - ( 0xff < sVar54 );
                     uVar126 = CONCAT13(cVar10, CONCAT12(( 0 < sVar53 ) * ( sVar53 < 0x100 ) * auVar130[4] - ( 0xff < sVar53 ), CONCAT11(bVar208, ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar130[0] - ( 0xff < sVar52 ))));
                     sVar52 = auVar130._8_2_;
                     sVar53 = auVar130._10_2_;
                     cVar11 = ( 0 < sVar53 ) * ( sVar53 < 0x100 ) * auVar130[10] - ( 0xff < sVar53 );
                     uVar127 = CONCAT15(cVar11, CONCAT14(( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar130[8] - ( 0xff < sVar52 ), uVar126));
                     sVar52 = auVar130._12_2_;
                     sVar53 = auVar130._14_2_;
                     cVar12 = ( 0 < sVar53 ) * ( sVar53 < 0x100 ) * auVar130[0xe] - ( 0xff < sVar53 );
                     uVar71 = CONCAT17(cVar12, CONCAT16(( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar130[0xc] - ( 0xff < sVar52 ), uVar127));
                     sVar52 = auVar115._0_2_;
                     sVar53 = auVar115._2_2_;
                     cVar13 = ( 0 < sVar53 ) * ( sVar53 < 0x100 ) * auVar115[2] - ( 0xff < sVar53 );
                     auVar128._0_10_ = CONCAT19(cVar13, CONCAT18(( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar115[0] - ( 0xff < sVar52 ), uVar71));
                     sVar52 = auVar115._4_2_;
                     auVar128[10] = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar115[4] - ( 0xff < sVar52 );
                     sVar52 = auVar115._6_2_;
                     cVar14 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar115[6] - ( 0xff < sVar52 );
                     auVar128[0xb] = cVar14;
                     sVar52 = auVar115._8_2_;
                     auVar129[0xc] = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar115[8] - ( 0xff < sVar52 );
                     auVar129._0_12_ = auVar128;
                     sVar52 = auVar115._10_2_;
                     cVar15 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar115[10] - ( 0xff < sVar52 );
                     auVar129[0xd] = cVar15;
                     sVar52 = auVar115._12_2_;
                     auVar131[0xe] = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar115[0xc] - ( 0xff < sVar52 );
                     auVar131._0_14_ = auVar129;
                     sVar52 = auVar115._14_2_;
                     cVar16 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar115[0xe] - ( 0xff < sVar52 );
                     auVar131[0xf] = cVar16;
                     auVar114 = __LC85 & auVar131;
                     uVar125 = (ushort)bVar208;
                     uVar135 = ( ushort )((uint)uVar126 >> 0x18);
                     uVar138 = ( ushort )((uint6)uVar127 >> 0x28);
                     uVar141 = ( ushort )((ulong)uVar71 >> 0x38);
                     uVar144 = ( ushort )((unkuint10)auVar128._0_10_ >> 0x48);
                     uVar147 = auVar128._10_2_ >> 8;
                     uVar150 = auVar129._12_2_ >> 8;
                     uVar153 = auVar131._14_2_ >> 8;
                     auVar203 = __LC85 & auVar204;
                     uVar197 = (ushort)bVar206;
                     uVar205 = ( ushort )((uint)uVar198 >> 0x18);
                     uVar207 = ( ushort )((uint6)uVar199 >> 0x28);
                     uVar209 = ( ushort )((ulong)uVar200 >> 0x38);
                     uVar210 = ( ushort )((unkuint10)auVar201._0_10_ >> 0x48);
                     uVar211 = auVar201._10_2_ >> 8;
                     uVar212 = auVar202._12_2_ >> 8;
                     uVar213 = auVar204._14_2_ >> 8;
                     sVar52 = auVar203._0_2_;
                     bVar17 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar203[0] - ( 0xff < sVar52 );
                     sVar52 = auVar203._2_2_;
                     bVar18 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar203[2] - ( 0xff < sVar52 );
                     sVar52 = auVar203._4_2_;
                     bVar19 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar203[4] - ( 0xff < sVar52 );
                     sVar52 = auVar203._6_2_;
                     bVar20 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar203[6] - ( 0xff < sVar52 );
                     sVar52 = auVar203._8_2_;
                     bVar21 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar203[8] - ( 0xff < sVar52 );
                     sVar52 = auVar203._10_2_;
                     bVar173 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar203[10] - ( 0xff < sVar52 );
                     sVar52 = auVar203._12_2_;
                     bVar123 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar203[0xc] - ( 0xff < sVar52 );
                     sVar52 = auVar203._14_2_;
                     bVar113 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar203[0xe] - ( 0xff < sVar52 );
                     sVar52 = auVar114._0_2_;
                     bVar112 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar114[0] - ( 0xff < sVar52 );
                     sVar52 = auVar114._2_2_;
                     bVar116 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar114[2] - ( 0xff < sVar52 );
                     sVar52 = auVar114._4_2_;
                     bVar118 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar114[4] - ( 0xff < sVar52 );
                     sVar52 = auVar114._6_2_;
                     bVar119 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar114[6] - ( 0xff < sVar52 );
                     sVar52 = auVar114._8_2_;
                     bVar120 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar114[8] - ( 0xff < sVar52 );
                     sVar52 = auVar114._10_2_;
                     bVar121 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar114[10] - ( 0xff < sVar52 );
                     sVar52 = auVar114._12_2_;
                     bVar122 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar114[0xc] - ( 0xff < sVar52 );
                     sVar52 = auVar114._14_2_;
                     bVar117 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar114[0xe] - ( 0xff < sVar52 );
                     bVar22 = ( uVar197 != 0 ) * ( uVar197 < 0x100 ) * bVar206 - ( 0xff < uVar197 );
                     bVar23 = ( uVar205 != 0 ) * ( uVar205 < 0x100 ) * cVar4 - ( 0xff < uVar205 );
                     bVar24 = ( uVar207 != 0 ) * ( uVar207 < 0x100 ) * cVar60 - ( 0xff < uVar207 );
                     bVar25 = ( uVar209 != 0 ) * ( uVar209 < 0x100 ) * cVar5 - ( 0xff < uVar209 );
                     bVar26 = ( uVar210 != 0 ) * ( uVar210 < 0x100 ) * cVar6 - ( 0xff < uVar210 );
                     bVar27 = ( uVar211 != 0 ) * ( uVar211 < 0x100 ) * cVar7 - ( 0xff < uVar211 );
                     bVar28 = ( uVar212 != 0 ) * ( uVar212 < 0x100 ) * cVar8 - ( 0xff < uVar212 );
                     bVar29 = ( uVar213 != 0 ) * ( uVar213 < 0x100 ) * cVar9 - ( 0xff < uVar213 );
                     bVar30 = ( uVar125 != 0 ) * ( uVar125 < 0x100 ) * bVar208 - ( 0xff < uVar125 );
                     bVar206 = ( uVar135 != 0 ) * ( uVar135 < 0x100 ) * cVar10 - ( 0xff < uVar135 );
                     bVar208 = ( uVar138 != 0 ) * ( uVar138 < 0x100 ) * cVar11 - ( 0xff < uVar138 );
                     bVar31 = ( uVar141 != 0 ) * ( uVar141 < 0x100 ) * cVar12 - ( 0xff < uVar141 );
                     bVar32 = ( uVar144 != 0 ) * ( uVar144 < 0x100 ) * cVar13 - ( 0xff < uVar144 );
                     bVar33 = ( uVar147 != 0 ) * ( uVar147 < 0x100 ) * cVar14 - ( 0xff < uVar147 );
                     bVar34 = ( uVar150 != 0 ) * ( uVar150 < 0x100 ) * cVar15 - ( 0xff < uVar150 );
                     bVar35 = ( uVar153 != 0 ) * ( uVar153 < 0x100 ) * cVar16 - ( 0xff < uVar153 );
                     uVar197 = (ushort)bStack_e7;
                     uVar205 = ( ushort )(( (uint)bStack_e5 << 0x18 ) >> 0x18);
                     uVar207 = ( ushort )(( (uint6)bStack_e3 << 0x28 ) >> 0x28);
                     uVar209 = ( ushort )(( (ulong)bStack_e1 << 0x38 ) >> 0x38);
                     uVar210 = ( ushort )(( uint3 )((uint3)bStack_df << 0x10) >> 0x10);
                     uVar211 = ( ushort )(( (uint5)bStack_dd << 0x20 ) >> 0x20);
                     uVar212 = ( ushort )(( (uint7)bStack_db << 0x30 ) >> 0x30);
                     uVar213 = ( ushort )(( uint3 )((uint3)bStack_d9 << 0x10) >> 0x10);
                     bVar181 = ( bVar22 < _LC86 ) * bVar22 | ( bVar22 >= _LC86 ) * _LC86;
                     bVar182 = ( bVar23 < UNK_00181281 ) * bVar23 | ( bVar23 >= UNK_00181281 ) * UNK_00181281;
                     bVar183 = ( bVar24 < UNK_00181282 ) * bVar24 | ( bVar24 >= UNK_00181282 ) * UNK_00181282;
                     bVar184 = ( bVar25 < UNK_00181283 ) * bVar25 | ( bVar25 >= UNK_00181283 ) * UNK_00181283;
                     bVar185 = ( bVar26 < UNK_00181284 ) * bVar26 | ( bVar26 >= UNK_00181284 ) * UNK_00181284;
                     bVar186 = ( bVar27 < UNK_00181285 ) * bVar27 | ( bVar27 >= UNK_00181285 ) * UNK_00181285;
                     bVar187 = ( bVar28 < UNK_00181286 ) * bVar28 | ( bVar28 >= UNK_00181286 ) * UNK_00181286;
                     bVar188 = ( bVar29 < UNK_00181287 ) * bVar29 | ( bVar29 >= UNK_00181287 ) * UNK_00181287;
                     bVar189 = ( bVar30 < UNK_00181288 ) * bVar30 | ( bVar30 >= UNK_00181288 ) * UNK_00181288;
                     bVar190 = ( bVar206 < UNK_00181289 ) * bVar206 | ( bVar206 >= UNK_00181289 ) * UNK_00181289;
                     bVar191 = ( bVar208 < UNK_0018128a ) * bVar208 | ( bVar208 >= UNK_0018128a ) * UNK_0018128a;
                     bVar192 = ( bVar31 < UNK_0018128b ) * bVar31 | ( bVar31 >= UNK_0018128b ) * UNK_0018128b;
                     bVar193 = ( bVar32 < UNK_0018128c ) * bVar32 | ( bVar32 >= UNK_0018128c ) * UNK_0018128c;
                     bVar194 = ( bVar33 < UNK_0018128d ) * bVar33 | ( bVar33 >= UNK_0018128d ) * UNK_0018128d;
                     bVar195 = ( bVar34 < UNK_0018128e ) * bVar34 | ( bVar34 >= UNK_0018128e ) * UNK_0018128e;
                     bVar196 = ( bVar35 < UNK_0018128f ) * bVar35 | ( bVar35 >= UNK_0018128f ) * UNK_0018128f;
                     uVar125 = (ushort)bStack_107;
                     uVar135 = ( ushort )(( (uint)bStack_105 << 0x18 ) >> 0x18);
                     uVar138 = ( ushort )(( (uint6)bStack_103 << 0x28 ) >> 0x28);
                     uVar141 = ( ushort )(( (ulong)bStack_101 << 0x38 ) >> 0x38);
                     uVar144 = ( ushort )(( uint3 )((uint3)bStack_ff << 0x10) >> 0x10);
                     uVar147 = ( ushort )(( (uint5)bStack_fd << 0x20 ) >> 0x20);
                     uVar150 = ( ushort )(( (uint7)bStack_fb << 0x30 ) >> 0x30);
                     uVar153 = ( ushort )(( uint3 )((uint3)bStack_f9 << 0x10) >> 0x10);
                     auVar172[1] = ( uVar174 != 0 ) * ( uVar174 < 0x100 ) * (char)auStack_116[1] - ( 0xff < uVar174 );
                     auVar172[0] = ( uVar171 != 0 ) * ( uVar171 < 0x100 ) * bStack_117 - ( 0xff < uVar171 );
                     auVar172[2] = ( uVar175 != 0 ) * ( uVar175 < 0x100 ) * bStack_113 - ( 0xff < uVar175 );
                     auVar172[3] = ( uVar176 != 0 ) * ( uVar176 < 0x100 ) * bStack_111 - ( 0xff < uVar176 );
                     auVar172[4] = ( uVar177 != 0 ) * ( uVar177 < 0x100 ) * bStack_10f - ( 0xff < uVar177 );
                     auVar172[5] = ( uVar178 != 0 ) * ( uVar178 < 0x100 ) * bStack_10d - ( 0xff < uVar178 );
                     auVar172[6] = ( uVar179 != 0 ) * ( uVar179 < 0x100 ) * bStack_10b - ( 0xff < uVar179 );
                     auVar172[7] = ( uVar180 != 0 ) * ( uVar180 < 0x100 ) * bStack_109 - ( 0xff < uVar180 );
                     auVar172[8] = ( uVar125 != 0 ) * ( uVar125 < 0x100 ) * bStack_107 - ( 0xff < uVar125 );
                     auVar172[9] = ( uVar135 != 0 ) * ( uVar135 < 0x100 ) * bStack_105 - ( 0xff < uVar135 );
                     auVar172[10] = ( uVar138 != 0 ) * ( uVar138 < 0x100 ) * bStack_103 - ( 0xff < uVar138 );
                     auVar172[0xb] = ( uVar141 != 0 ) * ( uVar141 < 0x100 ) * bStack_101 - ( 0xff < uVar141 );
                     auVar172[0xc] = ( uVar144 != 0 ) * ( uVar144 < 0x100 ) * bStack_ff - ( 0xff < uVar144 );
                     auVar172[0xd] = ( uVar147 != 0 ) * ( uVar147 < 0x100 ) * bStack_fd - ( 0xff < uVar147 );
                     auVar172[0xe] = ( uVar150 != 0 ) * ( uVar150 < 0x100 ) * bStack_fb - ( 0xff < uVar150 );
                     auVar172[0xf] = ( uVar153 != 0 ) * ( uVar153 < 0x100 ) * bStack_f9 - ( 0xff < uVar153 );
                     auVar172 = auVar172 & __LC85;
                     uVar125 = (ushort)bStack_f7;
                     uVar135 = ( ushort )(( (uint)bStack_f5 << 0x18 ) >> 0x18);
                     uVar138 = ( ushort )(( (uint6)bStack_f3 << 0x28 ) >> 0x28);
                     uVar141 = ( ushort )(( (ulong)bStack_f1 << 0x38 ) >> 0x38);
                     uVar144 = ( ushort )(( uint3 )((uint3)bStack_ef << 0x10) >> 0x10);
                     uVar147 = ( ushort )(( (uint5)bStack_ed << 0x20 ) >> 0x20);
                     uVar150 = ( ushort )(( (uint7)bStack_eb << 0x30 ) >> 0x30);
                     uVar153 = ( ushort )(( uint3 )((uint3)bStack_e9 << 0x10) >> 0x10);
                     auVar132[1] = ( uVar135 != 0 ) * ( uVar135 < 0x100 ) * bStack_f5 - ( 0xff < uVar135 );
                     auVar132[0] = ( uVar125 != 0 ) * ( uVar125 < 0x100 ) * bStack_f7 - ( 0xff < uVar125 );
                     auVar132[2] = ( uVar138 != 0 ) * ( uVar138 < 0x100 ) * bStack_f3 - ( 0xff < uVar138 );
                     auVar132[3] = ( uVar141 != 0 ) * ( uVar141 < 0x100 ) * bStack_f1 - ( 0xff < uVar141 );
                     auVar132[4] = ( uVar144 != 0 ) * ( uVar144 < 0x100 ) * bStack_ef - ( 0xff < uVar144 );
                     auVar132[5] = ( uVar147 != 0 ) * ( uVar147 < 0x100 ) * bStack_ed - ( 0xff < uVar147 );
                     auVar132[6] = ( uVar150 != 0 ) * ( uVar150 < 0x100 ) * bStack_eb - ( 0xff < uVar150 );
                     auVar132[7] = ( uVar153 != 0 ) * ( uVar153 < 0x100 ) * bStack_e9 - ( 0xff < uVar153 );
                     auVar132[8] = ( uVar197 != 0 ) * ( uVar197 < 0x100 ) * bStack_e7 - ( 0xff < uVar197 );
                     auVar132[9] = ( uVar205 != 0 ) * ( uVar205 < 0x100 ) * bStack_e5 - ( 0xff < uVar205 );
                     auVar132[10] = ( uVar207 != 0 ) * ( uVar207 < 0x100 ) * bStack_e3 - ( 0xff < uVar207 );
                     auVar132[0xb] = ( uVar209 != 0 ) * ( uVar209 < 0x100 ) * bStack_e1 - ( 0xff < uVar209 );
                     auVar132[0xc] = ( uVar210 != 0 ) * ( uVar210 < 0x100 ) * bStack_df - ( 0xff < uVar210 );
                     auVar132[0xd] = ( uVar211 != 0 ) * ( uVar211 < 0x100 ) * bStack_dd - ( 0xff < uVar211 );
                     auVar132[0xe] = ( uVar212 != 0 ) * ( uVar212 < 0x100 ) * bStack_db - ( 0xff < uVar212 );
                     auVar132[0xf] = ( uVar213 != 0 ) * ( uVar213 < 0x100 ) * bStack_d9 - ( 0xff < uVar213 );
                     auVar132 = auVar132 & __LC85;
                     sVar52 = auVar172._0_2_;
                     bVar36 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar172[0] - ( 0xff < sVar52 );
                     sVar52 = auVar172._2_2_;
                     bVar37 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar172[2] - ( 0xff < sVar52 );
                     sVar52 = auVar172._4_2_;
                     bVar38 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar172[4] - ( 0xff < sVar52 );
                     sVar52 = auVar172._6_2_;
                     bVar39 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar172[6] - ( 0xff < sVar52 );
                     sVar52 = auVar172._8_2_;
                     bVar40 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar172[8] - ( 0xff < sVar52 );
                     sVar52 = auVar172._10_2_;
                     bVar41 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar172[10] - ( 0xff < sVar52 );
                     sVar52 = auVar172._12_2_;
                     bVar42 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar172[0xc] - ( 0xff < sVar52 );
                     sVar52 = auVar172._14_2_;
                     bVar43 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar172[0xe] - ( 0xff < sVar52 );
                     sVar52 = auVar132._0_2_;
                     bVar44 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar132[0] - ( 0xff < sVar52 );
                     sVar52 = auVar132._2_2_;
                     bVar45 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar132[2] - ( 0xff < sVar52 );
                     sVar52 = auVar132._4_2_;
                     bVar46 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar132[4] - ( 0xff < sVar52 );
                     sVar52 = auVar132._6_2_;
                     bVar47 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar132[6] - ( 0xff < sVar52 );
                     sVar52 = auVar132._8_2_;
                     bVar48 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar132[8] - ( 0xff < sVar52 );
                     sVar52 = auVar132._10_2_;
                     bVar49 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar132[10] - ( 0xff < sVar52 );
                     sVar52 = auVar132._12_2_;
                     bVar50 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar132[0xc] - ( 0xff < sVar52 );
                     sVar52 = auVar132._14_2_;
                     bVar51 = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar132[0xe] - ( 0xff < sVar52 );
                     bVar155 = ( bVar17 < _LC86 ) * bVar17 | ( bVar17 >= _LC86 ) * _LC86;
                     bVar156 = ( bVar18 < UNK_00181281 ) * bVar18 | ( bVar18 >= UNK_00181281 ) * UNK_00181281;
                     bVar157 = ( bVar19 < UNK_00181282 ) * bVar19 | ( bVar19 >= UNK_00181282 ) * UNK_00181282;
                     bVar158 = ( bVar20 < UNK_00181283 ) * bVar20 | ( bVar20 >= UNK_00181283 ) * UNK_00181283;
                     bVar159 = ( bVar21 < UNK_00181284 ) * bVar21 | ( bVar21 >= UNK_00181284 ) * UNK_00181284;
                     bVar160 = ( bVar173 < UNK_00181285 ) * bVar173 | ( bVar173 >= UNK_00181285 ) * UNK_00181285;
                     bVar161 = ( bVar123 < UNK_00181286 ) * bVar123 | ( bVar123 >= UNK_00181286 ) * UNK_00181286;
                     bVar162 = ( bVar113 < UNK_00181287 ) * bVar113 | ( bVar113 >= UNK_00181287 ) * UNK_00181287;
                     bVar163 = ( bVar112 < UNK_00181288 ) * bVar112 | ( bVar112 >= UNK_00181288 ) * UNK_00181288;
                     bVar164 = ( bVar116 < UNK_00181289 ) * bVar116 | ( bVar116 >= UNK_00181289 ) * UNK_00181289;
                     bVar165 = ( bVar118 < UNK_0018128a ) * bVar118 | ( bVar118 >= UNK_0018128a ) * UNK_0018128a;
                     bVar166 = ( bVar119 < UNK_0018128b ) * bVar119 | ( bVar119 >= UNK_0018128b ) * UNK_0018128b;
                     bVar167 = ( bVar120 < UNK_0018128c ) * bVar120 | ( bVar120 >= UNK_0018128c ) * UNK_0018128c;
                     bVar168 = ( bVar121 < UNK_0018128d ) * bVar121 | ( bVar121 >= UNK_0018128d ) * UNK_0018128d;
                     bVar169 = ( bVar122 < UNK_0018128e ) * bVar122 | ( bVar122 >= UNK_0018128e ) * UNK_0018128e;
                     bVar170 = ( bVar117 < UNK_0018128f ) * bVar117 | ( bVar117 >= UNK_0018128f ) * UNK_0018128f;
                     bVar124 = ( bVar36 < _LC86 ) * bVar36 | ( bVar36 >= _LC86 ) * _LC86;
                     bVar133 = ( bVar37 < UNK_00181281 ) * bVar37 | ( bVar37 >= UNK_00181281 ) * UNK_00181281;
                     bVar134 = ( bVar38 < UNK_00181282 ) * bVar38 | ( bVar38 >= UNK_00181282 ) * UNK_00181282;
                     bVar136 = ( bVar39 < UNK_00181283 ) * bVar39 | ( bVar39 >= UNK_00181283 ) * UNK_00181283;
                     bVar137 = ( bVar40 < UNK_00181284 ) * bVar40 | ( bVar40 >= UNK_00181284 ) * UNK_00181284;
                     bVar139 = ( bVar41 < UNK_00181285 ) * bVar41 | ( bVar41 >= UNK_00181285 ) * UNK_00181285;
                     bVar140 = ( bVar42 < UNK_00181286 ) * bVar42 | ( bVar42 >= UNK_00181286 ) * UNK_00181286;
                     bVar142 = ( bVar43 < UNK_00181287 ) * bVar43 | ( bVar43 >= UNK_00181287 ) * UNK_00181287;
                     bVar143 = ( bVar44 < UNK_00181288 ) * bVar44 | ( bVar44 >= UNK_00181288 ) * UNK_00181288;
                     bVar145 = ( bVar45 < UNK_00181289 ) * bVar45 | ( bVar45 >= UNK_00181289 ) * UNK_00181289;
                     bVar146 = ( bVar46 < UNK_0018128a ) * bVar46 | ( bVar46 >= UNK_0018128a ) * UNK_0018128a;
                     bVar148 = ( bVar47 < UNK_0018128b ) * bVar47 | ( bVar47 >= UNK_0018128b ) * UNK_0018128b;
                     bVar149 = ( bVar48 < UNK_0018128c ) * bVar48 | ( bVar48 >= UNK_0018128c ) * UNK_0018128c;
                     bVar151 = ( bVar49 < UNK_0018128d ) * bVar49 | ( bVar49 >= UNK_0018128d ) * UNK_0018128d;
                     bVar152 = ( bVar50 < UNK_0018128e ) * bVar50 | ( bVar50 >= UNK_0018128e ) * UNK_0018128e;
                     bVar154 = ( bVar51 < UNK_0018128f ) * bVar51 | ( bVar51 >= UNK_0018128f ) * UNK_0018128f;
                     bVar112 = ( bVar17 < bVar112 ) * bVar112 | ( bVar17 >= bVar112 ) * bVar17;
                     bVar116 = ( bVar18 < bVar116 ) * bVar116 | ( bVar18 >= bVar116 ) * bVar18;
                     bVar118 = ( bVar19 < bVar118 ) * bVar118 | ( bVar19 >= bVar118 ) * bVar19;
                     bVar119 = ( bVar20 < bVar119 ) * bVar119 | ( bVar20 >= bVar119 ) * bVar20;
                     bVar120 = ( bVar21 < bVar120 ) * bVar120 | ( bVar21 >= bVar120 ) * bVar21;
                     bVar121 = ( bVar173 < bVar121 ) * bVar121 | ( bVar173 >= bVar121 ) * bVar173;
                     bVar122 = ( bVar123 < bVar122 ) * bVar122 | ( bVar123 >= bVar122 ) * bVar123;
                     bVar123 = ( bVar113 < bVar117 ) * bVar117 | ( bVar113 >= bVar117 ) * bVar113;
                     bVar113 = ( bVar112 < bVar120 ) * bVar120 | ( bVar112 >= bVar120 ) * bVar112;
                     bVar117 = ( bVar116 < bVar121 ) * bVar121 | ( bVar116 >= bVar121 ) * bVar116;
                     bVar122 = ( bVar118 < bVar122 ) * bVar122 | ( bVar118 >= bVar122 ) * bVar118;
                     bVar121 = ( bVar119 < bVar123 ) * bVar123 | ( bVar119 >= bVar123 ) * bVar119;
                     bVar113 = ( bVar113 < bVar122 ) * bVar122 | ( bVar113 >= bVar122 ) * bVar113;
                     bVar117 = ( bVar117 < bVar121 ) * bVar121 | ( bVar117 >= bVar121 ) * bVar117;
                     bVar117 = ( bVar113 < bVar117 ) * bVar117 | ( bVar113 >= bVar117 ) * bVar113;
                     bVar113 = ( bVar36 < bVar44 ) * bVar44 | ( bVar36 >= bVar44 ) * bVar36;
                     bVar122 = ( bVar37 < bVar45 ) * bVar45 | ( bVar37 >= bVar45 ) * bVar37;
                     bVar121 = ( bVar38 < bVar46 ) * bVar46 | ( bVar38 >= bVar46 ) * bVar38;
                     bVar120 = ( bVar39 < bVar47 ) * bVar47 | ( bVar39 >= bVar47 ) * bVar39;
                     bVar119 = ( bVar40 < bVar48 ) * bVar48 | ( bVar40 >= bVar48 ) * bVar40;
                     bVar118 = ( bVar41 < bVar49 ) * bVar49 | ( bVar41 >= bVar49 ) * bVar41;
                     bVar116 = ( bVar42 < bVar50 ) * bVar50 | ( bVar42 >= bVar50 ) * bVar42;
                     bVar112 = ( bVar43 < bVar51 ) * bVar51 | ( bVar43 >= bVar51 ) * bVar43;
                     bVar113 = ( bVar113 < bVar119 ) * bVar119 | ( bVar113 >= bVar119 ) * bVar113;
                     bVar122 = ( bVar122 < bVar118 ) * bVar118 | ( bVar122 >= bVar118 ) * bVar122;
                     bVar121 = ( bVar121 < bVar116 ) * bVar116 | ( bVar121 >= bVar116 ) * bVar121;
                     bVar120 = ( bVar120 < bVar112 ) * bVar112 | ( bVar120 >= bVar112 ) * bVar120;
                     bVar113 = ( bVar113 < bVar121 ) * bVar121 | ( bVar113 >= bVar121 ) * bVar113;
                     bVar122 = ( bVar122 < bVar120 ) * bVar120 | ( bVar122 >= bVar120 ) * bVar122;
                     bVar113 = ( bVar113 < bVar122 ) * bVar122 | ( bVar113 >= bVar122 ) * bVar113;
                     bVar122 = ( bVar22 < bVar30 ) * bVar30 | ( bVar22 >= bVar30 ) * bVar22;
                     bVar121 = ( bVar23 < bVar206 ) * bVar206 | ( bVar23 >= bVar206 ) * bVar23;
                     bVar120 = ( bVar24 < bVar208 ) * bVar208 | ( bVar24 >= bVar208 ) * bVar24;
                     bVar119 = ( bVar25 < bVar31 ) * bVar31 | ( bVar25 >= bVar31 ) * bVar25;
                     bVar206 = ( bVar26 < bVar32 ) * bVar32 | ( bVar26 >= bVar32 ) * bVar26;
                     bVar208 = ( bVar27 < bVar33 ) * bVar33 | ( bVar27 >= bVar33 ) * bVar27;
                     bVar118 = ( bVar28 < bVar34 ) * bVar34 | ( bVar28 >= bVar34 ) * bVar28;
                     bVar116 = ( bVar29 < bVar35 ) * bVar35 | ( bVar29 >= bVar35 ) * bVar29;
                     bVar206 = ( bVar122 < bVar206 ) * bVar206 | ( bVar122 >= bVar206 ) * bVar122;
                     bVar208 = ( bVar121 < bVar208 ) * bVar208 | ( bVar121 >= bVar208 ) * bVar121;
                     bVar122 = ( bVar120 < bVar118 ) * bVar118 | ( bVar120 >= bVar118 ) * bVar120;
                     bVar121 = ( bVar119 < bVar116 ) * bVar116 | ( bVar119 >= bVar116 ) * bVar119;
                     bVar123 = ( bVar206 < bVar122 ) * bVar122 | ( bVar206 >= bVar122 ) * bVar206;
                     bVar173 = ( bVar208 < bVar121 ) * bVar121 | ( bVar208 >= bVar121 ) * bVar208;
                     bVar206 = ( bVar163 < bVar155 ) * bVar163 | ( bVar163 >= bVar155 ) * bVar155;
                     bVar208 = ( bVar164 < bVar156 ) * bVar164 | ( bVar164 >= bVar156 ) * bVar156;
                     bVar122 = ( bVar165 < bVar157 ) * bVar165 | ( bVar165 >= bVar157 ) * bVar157;
                     bVar121 = ( bVar166 < bVar158 ) * bVar166 | ( bVar166 >= bVar158 ) * bVar158;
                     bVar120 = ( bVar167 < bVar159 ) * bVar167 | ( bVar167 >= bVar159 ) * bVar159;
                     bVar119 = ( bVar168 < bVar160 ) * bVar168 | ( bVar168 >= bVar160 ) * bVar160;
                     bVar118 = ( bVar169 < bVar161 ) * bVar169 | ( bVar169 >= bVar161 ) * bVar161;
                     bVar116 = ( bVar170 < bVar162 ) * bVar170 | ( bVar170 >= bVar162 ) * bVar162;
                     bVar206 = ( bVar120 < bVar206 ) * bVar120 | ( bVar120 >= bVar206 ) * bVar206;
                     bVar208 = ( bVar119 < bVar208 ) * bVar119 | ( bVar119 >= bVar208 ) * bVar208;
                     bVar122 = ( bVar118 < bVar122 ) * bVar118 | ( bVar118 >= bVar122 ) * bVar122;
                     bVar121 = ( bVar116 < bVar121 ) * bVar116 | ( bVar116 >= bVar121 ) * bVar121;
                     bVar206 = ( bVar122 < bVar206 ) * bVar122 | ( bVar122 >= bVar206 ) * bVar206;
                     bVar208 = ( bVar121 < bVar208 ) * bVar121 | ( bVar121 >= bVar208 ) * bVar208;
                     bVar206 = ( bVar208 < bVar206 ) * bVar208 | ( bVar208 >= bVar206 ) * bVar206;
                     bVar208 = ( bVar143 < bVar124 ) * bVar143 | ( bVar143 >= bVar124 ) * bVar124;
                     bVar122 = ( bVar145 < bVar133 ) * bVar145 | ( bVar145 >= bVar133 ) * bVar133;
                     bVar121 = ( bVar146 < bVar134 ) * bVar146 | ( bVar146 >= bVar134 ) * bVar134;
                     bVar120 = ( bVar148 < bVar136 ) * bVar148 | ( bVar148 >= bVar136 ) * bVar136;
                     bVar119 = ( bVar149 < bVar137 ) * bVar149 | ( bVar149 >= bVar137 ) * bVar137;
                     bVar118 = ( bVar151 < bVar139 ) * bVar151 | ( bVar151 >= bVar139 ) * bVar139;
                     bVar116 = ( bVar152 < bVar140 ) * bVar152 | ( bVar152 >= bVar140 ) * bVar140;
                     bVar112 = ( bVar154 < bVar142 ) * bVar154 | ( bVar154 >= bVar142 ) * bVar142;
                     bVar208 = ( bVar119 < bVar208 ) * bVar119 | ( bVar119 >= bVar208 ) * bVar208;
                     bVar122 = ( bVar118 < bVar122 ) * bVar118 | ( bVar118 >= bVar122 ) * bVar122;
                     bVar121 = ( bVar116 < bVar121 ) * bVar116 | ( bVar116 >= bVar121 ) * bVar121;
                     bVar120 = ( bVar112 < bVar120 ) * bVar112 | ( bVar112 >= bVar120 ) * bVar120;
                     bVar208 = ( bVar121 < bVar208 ) * bVar121 | ( bVar121 >= bVar208 ) * bVar208;
                     bVar122 = ( bVar120 < bVar122 ) * bVar120 | ( bVar120 >= bVar122 ) * bVar122;
                     uVar101 = ( ulong )(byte)(( bVar122 < bVar208 ) * bVar122 | ( bVar122 >= bVar208 ) * bVar208);
                     bVar208 = ( bVar181 < bVar189 ) * bVar181 | ( bVar181 >= bVar189 ) * bVar189;
                     bVar122 = ( bVar182 < bVar190 ) * bVar182 | ( bVar182 >= bVar190 ) * bVar190;
                     bVar121 = ( bVar183 < bVar191 ) * bVar183 | ( bVar183 >= bVar191 ) * bVar191;
                     bVar120 = ( bVar184 < bVar192 ) * bVar184 | ( bVar184 >= bVar192 ) * bVar192;
                     bVar119 = ( bVar185 < bVar193 ) * bVar185 | ( bVar185 >= bVar193 ) * bVar193;
                     bVar118 = ( bVar186 < bVar194 ) * bVar186 | ( bVar186 >= bVar194 ) * bVar194;
                     bVar116 = ( bVar187 < bVar195 ) * bVar187 | ( bVar187 >= bVar195 ) * bVar195;
                     bVar112 = ( bVar188 < bVar196 ) * bVar188 | ( bVar188 >= bVar196 ) * bVar196;
                     bVar208 = ( bVar119 < bVar208 ) * bVar119 | ( bVar119 >= bVar208 ) * bVar208;
                     bVar122 = ( bVar118 < bVar122 ) * bVar118 | ( bVar118 >= bVar122 ) * bVar122;
                     bVar121 = ( bVar116 < bVar121 ) * bVar116 | ( bVar116 >= bVar121 ) * bVar121;
                     bVar120 = ( bVar112 < bVar120 ) * bVar112 | ( bVar112 >= bVar120 ) * bVar120;
                     bVar208 = ( bVar121 < bVar208 ) * bVar121 | ( bVar121 >= bVar208 ) * bVar208;
                     bVar122 = ( bVar120 < bVar122 ) * bVar120 | ( bVar120 >= bVar122 ) * bVar122;
                     uVar76 = ( ulong )(byte)(( bVar123 < bVar173 ) * bVar173 | ( bVar123 >= bVar173 ) * bVar123);
                     uVar89 = ( ulong )(byte)(( bVar122 < bVar208 ) * bVar122 | ( bVar122 >= bVar208 ) * bVar208);
                  }

                  uVar111 = uVar111 + 1;
                  *(uint*)( (long)local_278 + uVar77 * 4 ) = ( (uint)(byte)g_pvrtc_5_ceil[bVar117] << 10 | (uint)(byte)g_pvrtc_5_ceil[bVar113] << 5 | (uint)(byte)g_pvrtc_5_ceil[uVar76] ) << 0x10 | ( (byte)g_pvrtc_5_floor[bVar206] & 0x3f ) << 10 | (uint)(byte)g_pvrtc_5_floor[uVar101] << 5 | (uint)(byte)g_pvrtc_4_floor[uVar89] * 2 | 0x80008000;
               }
 while ( uVar72 != uVar111 );
               uVar78 = uVar78 + 1;
               uVar72 = uVar72 + param_3;
            }
 while ( param_4 != uVar78 );
         }

         uVar78 = uVar78 - 1;
         uVar72 = param_3 - 1;
         if (uVar72 == 0) {
            uVar111 = 0;
         }
 else {
            iVar63 = 0x1f;
            if (uVar72 != 0) {
               for (; uVar72 >> iVar63 == 0; iVar63 = iVar63 + -1) {}
            }

            uVar111 = iVar63 + 1;
         }

         if (uVar78 == 0) {
            bStack_1f4 = 0;
            uVar111 = 1;
            bStack_1f0 = 0;
            uStack_1f8 = 0;
            LAB_0011356a:uVar79 = 0;
            uVar61 = 0;
            uVar73 = 0;
            local_228 = 0;
            do {
               uVar108 = uVar79 - 1;
               lVar102 = 0;
               do {
                  pvVar1 = (void*)( (long)local_278 + ( ulong )(( uVar78 & uVar108 ) * param_3) * 4 );
                  uVar85 = 0xffffffff;
                  *(void**)( (long)alStack_1b8 + lVar102 * 2 ) = pvVar1;
                  lVar57 = alStack_1b8[2];
                  lVar56 = alStack_1b8[1];
                  lVar55 = alStack_1b8[0];
                  lVar91 = lVar102;
                  do {
                     uVar66 = *(uint*)( (long)pvVar1 + ( ulong )(uVar72 & uVar85) * 4 );
                     *(uint*)( (long)auStack_198 + lVar91 ) = ( ( ( uVar66 & 0x1e | ( uVar66 & 0x1e ) >> 4 ) + ( uVar66 >> 10 & 0x1f ) + ( uVar66 >> 5 & 0x1f ) ) * 0xff ) / 0x1f;
                     uVar85 = uVar85 + 1;
                     *(uint*)( (long)auStack_158 + lVar91 ) = ( ( ( uVar66 >> 0x10 & 0x1f ) + ( uVar66 >> 0x15 & 0x1f ) + ( uVar66 >> 0x1a & 0x1f ) ) * 0xff ) / 0x1f;
                     lVar91 = lVar91 + 0x10;
                  }
 while ( uVar85 != 2 );
                  lVar102 = lVar102 + 4;
                  uVar108 = uVar108 + 1;
               }
 while ( lVar102 != 0xc );
               if (0 < (int)param_3) {
                  puVar82 = auStack_116 + 0x3e;
                  uStack_290 = (uint)uStack_148;
                  uStack_29c = (uint)uStack_188;
                  uVar108 = 0;
                  uVar85 = uStack_188._4_4_;
                  uVar66 = uStack_148._4_4_;
                  do {
                     uVar109 = uVar66;
                     uVar84 = uVar85;
                     uVar59 = uStack_140;
                     uVar100 = auStack_158[2];
                     uVar95 = auStack_158[1];
                     uVar90 = auStack_158[0];
                     uVar58 = uStack_180;
                     uVar99 = auStack_198[2];
                     uVar87 = auStack_198[1];
                     uVar104 = auStack_198[0];
                     cVar60 = unpack_uastc(param_1 + ( ulong )(local_228 + uVar108) * 0x10, puVar82, false, false);
                     if (cVar60 != '\0') {
                        unpack_uastc(local_70, local_6c, local_68, (astc_block_desc*)puVar82, &local_118, false);
                     }

                     if (param_5) {
                        puVar69 = (unpacked_uastc_block*)&local_118;
                        do {
                           uVar3 = puVar69[3];
                           puVar69[3] = (unpacked_uastc_block)0xff;
                           puVar70 = puVar69 + 4;
                           puVar69[2] = uVar3;
                           *(ushort*)puVar69 = CONCAT11(uVar3, uVar3);
                           puVar69 = puVar70;
                        }
 while ( puVar70 != puVar82 );
                     }

                     uVar85 = ( uint )(ushort)(&g_pvrtc_swizzle_table)[(int)uVar108 >> 8] << 0x11 | ( uint )(ushort)(&g_pvrtc_swizzle_table)[uVar108 & 0xff] * 2 | uVar73 << 0x10 | uVar61;
                     uVar77 = (ulong)uVar85;
                     if (param_3 != param_4) {
                        uVar85 = uVar85 & uStack_1f8;
                        uVar77 = ( ulong )(( (int)uVar79 >> ( bStack_1f0 & 0x1f ) ) << ( bStack_1f4 & 0x1f ) | uVar85);
                        if (param_4 < param_3) {
                           uVar77 = ( ulong )(( (int)uVar108 >> ( bStack_1f0 & 0x1f ) ) << ( bStack_1f4 & 0x1f ) | uVar85);
                        }

                     }

                     puVar2 = (uint*)( (long)param_2 + uVar77 * 8 );
                     puVar2[1] = *(uint*)( (long)local_278 + ( ulong )(local_228 + uVar108) * 4 );
                     uVar108 = uVar108 + 1;
                     uVar77 = ( ulong )(uVar72 & uVar108);
                     uVar85 = *(uint*)( lVar55 + uVar77 * 4 );
                     uVar66 = ( ( uVar85 >> 5 & 0x1f ) + ( uVar85 >> 10 & 0x1f ) + ( uVar85 & 0x1e | ( uVar85 & 0x1e ) >> 4 ) ) * 0xff;
                     uVar88 = uVar66 / 0x1f;
                     uVar83 = ( uVar66 - uVar88 >> 1 ) + uVar88 >> 4;
                     uVar65 = ( ( ( uVar85 >> 0x1a & 0x1f ) + ( uVar85 >> 0x15 & 0x1f ) + ( uVar85 >> 0x10 & 0x1f ) ) * 0xff ) / 0x1f;
                     uVar66 = *(uint*)( lVar56 + uVar77 * 4 );
                     uVar85 = ( ( ( uVar66 & 0x1e | ( uVar66 & 0x1e ) >> 4 ) + ( uVar66 >> 10 & 0x1f ) + ( uVar66 >> 5 & 0x1f ) ) * 0xff ) / 0x1f;
                     uStack_188 = CONCAT44(uVar85, uVar83);
                     uVar66 = ( ( ( uVar66 >> 0x10 & 0x1f ) + ( uVar66 >> 0x15 & 0x1f ) + ( uVar66 >> 0x1a & 0x1f ) ) * 0xff ) / 0x1f;
                     uStack_148 = CONCAT44(uVar66, uVar65);
                     uVar88 = *(uint*)( lVar57 + uVar77 * 4 );
                     uStack_180 = ( ( ( uVar88 & 0x1e | ( uVar88 & 0x1e ) >> 4 ) + ( uVar88 >> 10 & 0x1f ) + ( uVar88 >> 5 & 0x1f ) ) * 0xff ) / 0x1f;
                     uStack_140 = ( ( ( uVar88 >> 0x10 & 0x1f ) + ( uVar88 >> 0x15 & 0x1f ) + ( uVar88 >> 0x1a & 0x1f ) ) * 0xff ) / 0x1f;
                     iVar64 = uVar104 + uStack_29c;
                     iVar75 = iVar64 + uVar87 + uVar84;
                     iVar63 = uVar90 + uStack_290;
                     iVar81 = iVar63 + uVar95 + uVar109;
                     iVar67 = ( (uint)bStack_117 + (uint)(byte)local_118 + (uint)(byte)auStack_116[0] ) * 0x10 + iVar75 * -4;
                     iVar68 = iVar67 * 0x10;
                     if (iVar81 < iVar75) {
                        iVar68 = iVar67 * -0x10;
                        iVar67 = iVar75 * 4 + iVar81 * -4;
                        if (iVar68 == iVar67 * 8 || SBORROW4(iVar68, iVar67 * 8) != iVar68 + iVar67 * -8 < 0) goto LAB_00113805;
                        LAB_001144ed:uVar88 = 2;
                     }
 else {
                        iVar67 = iVar81 * 4 + iVar75 * -4;
                        if (iVar68 != iVar67 * 8 && SBORROW4(iVar68, iVar67 * 8) == iVar68 + iVar67 * -8 < 0) goto LAB_001144ed;
                        LAB_00113805:uVar88 = ( uint )(iVar67 * 3 < iVar68);
                     }

                     iVar75 = uVar84 * 3;
                     iVar81 = uVar109 * 3;
                     if (iVar67 * 0xd < iVar68) {
                        uVar88 = 3;
                     }

                     iVar110 = uVar104 + uStack_29c * 3;
                     iVar103 = iVar110 + uVar87 + iVar75;
                     iVar68 = uStack_290 * 3 + uVar90;
                     iVar96 = iVar68 + uVar95 + iVar81;
                     iVar67 = ( (uint)bStack_113 + (uint)bStack_114 + (uint)bStack_112 ) * 0x10 + iVar103 * -2;
                     iVar62 = iVar67 * 0x10;
                     if (iVar96 < iVar103) {
                        iVar96 = iVar103 * 2 + iVar96 * -2;
                        iVar62 = iVar67 * -0x10;
                     }
 else {
                        iVar96 = iVar96 * 2 + iVar103 * -2;
                     }

                     if (iVar62 == iVar96 * 8 || SBORROW4(iVar62, iVar96 * 8) != iVar62 + iVar96 * -8 < 0) {
                        uVar104 = ( uint )(iVar96 * 3 < iVar62) << 2;
                     }
 else {
                        uVar104 = 8;
                     }

                     if (iVar96 * 0xd < iVar62) {
                        uVar104 = 0xc;
                     }

                     iVar67 = uVar87 * 3;
                     iVar103 = iVar64 + iVar67 + iVar75;
                     iVar64 = uVar95 * 3;
                     iVar96 = iVar63 + iVar64 + iVar81;
                     iVar63 = ( (uint)bStack_107 + (uint)local_108 + (uint)bStack_106 ) * 0x10 + iVar103 * -2;
                     iVar62 = iVar63 * 0x10;
                     if (iVar96 < iVar103) {
                        iVar62 = iVar63 * -0x10;
                        iVar63 = iVar103 * 2 + iVar96 * -2;
                     }
 else {
                        iVar63 = iVar96 * 2 + iVar103 * -2;
                     }

                     if (iVar62 == iVar63 * 8 || SBORROW4(iVar62, iVar63 * 8) != iVar62 + iVar63 * -8 < 0) {
                        uVar90 = ( uint )(iVar63 * 3 < iVar62) << 8;
                     }
 else {
                        uVar90 = 0x200;
                     }

                     iVar96 = uVar84 * 9;
                     iVar103 = uVar109 * 9;
                     if (iVar63 * 0xd < iVar62) {
                        uVar90 = 0x300;
                     }

                     iVar110 = iVar110 + iVar67 + iVar96;
                     iVar62 = iVar68 + iVar64 + iVar103;
                     iVar63 = ( (uint)bStack_103 + (uint)bStack_104 + (uint)bStack_102 ) * 0x10 - iVar110;
                     iVar68 = iVar63 * 0x10;
                     if (iVar62 < iVar110) {
                        iVar68 = iVar63 * -0x10;
                        iVar62 = iVar110 - iVar62;
                     }
 else {
                        iVar62 = iVar62 - iVar110;
                     }

                     if (iVar68 == iVar62 * 8 || SBORROW4(iVar68, iVar62 * 8) != iVar68 + iVar62 * -8 < 0) {
                        uVar92 = ( uint )(iVar62 * 3 < iVar68) << 10;
                     }
 else {
                        uVar92 = 0x800;
                     }

                     if (iVar62 * 0xd < iVar68) {
                        uVar92 = 0xc00;
                     }

                     iVar63 = uStack_29c + uVar84;
                     iVar68 = uStack_290 + uVar109;
                     iVar62 = ( (uint)bStack_10f + (uint)bStack_110 + (uint)bStack_10e ) * 0x10 + iVar63 * -8;
                     iVar110 = iVar62 * 0x10;
                     if (iVar68 < iVar63) {
                        iVar110 = iVar62 * -0x10;
                        iVar63 = iVar63 * 8 + iVar68 * -8;
                     }
 else {
                        iVar63 = iVar68 * 8 + iVar63 * -8;
                     }

                     if (iVar110 == iVar63 * 8 || SBORROW4(iVar110, iVar63 * 8) != iVar110 + iVar63 * -8 < 0) {
                        uVar93 = ( uint )(iVar63 * 3 < iVar110) << 4;
                     }
 else {
                        uVar93 = 0x20;
                     }

                     if (iVar63 * 0xd < iVar110) {
                        uVar93 = 0x30;
                     }

                     iVar110 = uStack_29c * 3 + uVar83;
                     iVar105 = iVar75 + iVar110 + uVar85;
                     iVar97 = uStack_290 * 3 + uVar65;
                     iVar62 = iVar81 + iVar97 + uVar66;
                     iVar63 = ( (uint)bStack_10b + (uint)bStack_10c + (uint)bStack_10a ) * 0x10 + iVar105 * -2;
                     iVar68 = iVar63 * 0x10;
                     if (iVar62 < iVar105) {
                        iVar68 = iVar63 * -0x10;
                        iVar63 = iVar105 * 2 + iVar62 * -2;
                     }
 else {
                        iVar63 = iVar62 * 2 + iVar105 * -2;
                     }

                     if (iVar68 == iVar63 * 8 || SBORROW4(iVar68, iVar63 * 8) != iVar68 + iVar63 * -8 < 0) {
                        uVar86 = ( uint )(iVar63 * 3 < iVar68) << 6;
                     }
 else {
                        uVar86 = 0x80;
                     }

                     if (iVar63 * 0xd < iVar68) {
                        uVar86 = 0xc0;
                     }

                     iVar105 = iVar75 + uStack_29c;
                     iVar62 = iVar81 + uStack_290;
                     iVar63 = ( (uint)bStack_ff + (uint)bStack_100 + (uint)bStack_fe ) * 0x10 + iVar105 * -4;
                     iVar68 = iVar63 * 0x10;
                     if (iVar62 < iVar105) {
                        iVar68 = iVar63 * -0x10;
                        iVar63 = iVar105 * 4 + iVar62 * -4;
                     }
 else {
                        iVar63 = iVar62 * 4 + iVar105 * -4;
                     }

                     if (iVar68 == iVar63 * 8 || SBORROW4(iVar68, iVar63 * 8) != iVar68 + iVar63 * -8 < 0) {
                        uVar106 = ( uint )(iVar63 * 3 < iVar68) << 0xc;
                     }
 else {
                        uVar106 = 0x2000;
                     }

                     if (iVar63 * 0xd < iVar68) {
                        uVar106 = 0x3000;
                     }

                     iVar110 = iVar110 + iVar96 + uVar85 * 3;
                     iVar62 = iVar97 + iVar103 + uVar66 * 3;
                     iVar63 = ( (uint)bStack_fb + (uint)bStack_fc + (uint)bStack_fa ) * 0x10 - iVar110;
                     iVar68 = iVar63 * 0x10;
                     if (iVar62 < iVar110) {
                        iVar68 = iVar63 * -0x10;
                        iVar62 = iVar110 - iVar62;
                     }
 else {
                        iVar62 = iVar62 - iVar110;
                     }

                     if (iVar68 == iVar62 * 8 || SBORROW4(iVar68, iVar62 * 8) != iVar68 + iVar62 * -8 < 0) {
                        uVar94 = ( uint )(iVar62 * 3 < iVar68) << 0xe;
                     }
 else {
                        uVar94 = 0x8000;
                     }

                     if (iVar62 * 0xd < iVar68) {
                        uVar94 = 0xc000;
                     }

                     iVar63 = uVar87 + uVar84;
                     iVar68 = uVar95 + uVar109;
                     iVar62 = ( (uint)bStack_f7 + (uint)local_f8 + (uint)bStack_f6 ) * 0x10 + iVar63 * -8;
                     iVar110 = iVar62 * 0x10;
                     if (iVar68 < iVar63) {
                        iVar110 = iVar62 * -0x10;
                        iVar62 = iVar63 * 8 + iVar68 * -8;
                     }
 else {
                        iVar62 = iVar68 * 8 + iVar63 * -8;
                     }

                     if (iVar110 == iVar62 * 8 || SBORROW4(iVar110, iVar62 * 8) != iVar110 + iVar62 * -8 < 0) {
                        uVar98 = ( uint )(iVar62 * 3 < iVar110) << 0x10;
                     }
 else {
                        uVar98 = 0x20000;
                     }

                     if (iVar62 * 0xd < iVar110) {
                        uVar98 = 0x30000;
                     }

                     iVar105 = uVar87 + iVar75;
                     iVar97 = uVar95 + iVar81;
                     iVar62 = ( (uint)bStack_f3 + (uint)bStack_f4 + (uint)bStack_f2 ) * 0x10 + iVar105 * -4;
                     iVar110 = iVar62 * 0x10;
                     if (iVar97 < iVar105) {
                        iVar110 = iVar62 * -0x10;
                        iVar62 = iVar105 * 4 + iVar97 * -4;
                     }
 else {
                        iVar62 = iVar97 * 4 + iVar105 * -4;
                     }

                     if (iVar110 == iVar62 * 8 || SBORROW4(iVar110, iVar62 * 8) != iVar110 + iVar62 * -8 < 0) {
                        uVar87 = ( uint )(iVar62 * 3 < iVar110) << 0x12;
                     }
 else {
                        uVar87 = 0x80000;
                     }

                     if (iVar62 * 0xd < iVar110) {
                        uVar87 = 0xc0000;
                     }

                     iVar110 = iVar63 * 3 + uVar99 + uVar58;
                     iVar62 = iVar68 * 3 + uVar100 + uVar59;
                     iVar63 = ( (uint)bStack_e7 + (uint)local_e8 + (uint)bStack_e6 ) * 0x10 + iVar110 * -2;
                     iVar68 = iVar63 * 0x10;
                     if (iVar62 < iVar110) {
                        iVar68 = iVar63 * -0x10;
                        iVar63 = iVar110 * 2 + iVar62 * -2;
                     }
 else {
                        iVar63 = iVar62 * 2 + iVar110 * -2;
                     }

                     if (iVar68 == iVar63 * 8 || SBORROW4(iVar68, iVar63 * 8) != iVar68 + iVar63 * -8 < 0) {
                        uVar95 = ( uint )(iVar63 * 3 < iVar68) << 0x18;
                     }
 else {
                        uVar95 = 0x2000000;
                     }

                     if (iVar63 * 0xd < iVar68) {
                        uVar95 = 0x3000000;
                     }

                     iVar68 = iVar67 + iVar96 + uVar99 + uVar58 * 3;
                     iVar67 = iVar64 + iVar103 + uVar100 + uVar59 * 3;
                     iVar63 = ( (uint)bStack_e3 + (uint)bStack_e4 + (uint)bStack_e2 ) * 0x10 - iVar68;
                     iVar64 = iVar63 * 0x10;
                     if (iVar67 < iVar68) {
                        iVar64 = iVar63 * -0x10;
                        iVar67 = iVar68 - iVar67;
                     }
 else {
                        iVar67 = iVar67 - iVar68;
                     }

                     if (iVar64 == iVar67 * 8 || SBORROW4(iVar64, iVar67 * 8) != iVar64 + iVar67 * -8 < 0) {
                        uVar99 = ( uint )(iVar67 * 3 < iVar64) << 0x1a;
                     }
 else {
                        uVar99 = 0x8000000;
                     }

                     if (iVar67 * 0xd < iVar64) {
                        uVar99 = 0xc000000;
                     }

                     iVar63 = ( (uint)bStack_ef + (uint)bStack_f0 + (uint)bStack_ee ) * 0x10 + uVar84 * -0x10;
                     iVar64 = iVar63 * 0x10;
                     if ((int)uVar109 < (int)uVar84) {
                        iVar64 = iVar63 * -0x10;
                        iVar63 = uVar84 * 0x10 + uVar109 * -0x10;
                     }
 else {
                        iVar63 = uVar109 * 0x10 + uVar84 * -0x10;
                     }

                     if (iVar64 == iVar63 * 8 || SBORROW4(iVar64, iVar63 * 8) != iVar64 + iVar63 * -8 < 0) {
                        uVar100 = ( uint )(iVar63 * 3 < iVar64) << 0x14;
                     }
 else {
                        uVar100 = 0x200000;
                     }

                     if (iVar63 * 0xd < iVar64) {
                        uVar100 = 0x300000;
                     }

                     iVar67 = uVar85 + iVar75;
                     iVar68 = uVar66 + iVar81;
                     iVar63 = ( (uint)bStack_eb + (uint)bStack_ec + (uint)bStack_ea ) * 0x10 + iVar67 * -4;
                     iVar64 = iVar63 * 0x10;
                     if (iVar68 < iVar67) {
                        iVar68 = iVar67 * 4 + iVar68 * -4;
                        iVar64 = iVar63 * -0x10;
                     }
 else {
                        iVar68 = iVar68 * 4 + iVar67 * -4;
                     }

                     if (iVar64 == iVar68 * 8 || SBORROW4(iVar64, iVar68 * 8) != iVar64 + iVar68 * -8 < 0) {
                        uVar107 = ( uint )(iVar68 * 3 < iVar64) << 0x16;
                     }
 else {
                        uVar107 = 0x800000;
                     }

                     if (iVar68 * 0xd < iVar64) {
                        uVar107 = 0xc00000;
                     }

                     iVar75 = iVar75 + uVar58;
                     iVar81 = iVar81 + uVar59;
                     iVar63 = ( (uint)bStack_df + (uint)bStack_e0 + (uint)bStack_de ) * 0x10 + iVar75 * -4;
                     iVar64 = iVar63 * 0x10;
                     if (iVar81 < iVar75) {
                        iVar68 = iVar75 * 4 + iVar81 * -4;
                        iVar64 = iVar63 * -0x10;
                     }
 else {
                        iVar68 = iVar81 * 4 + iVar75 * -4;
                     }

                     if (iVar64 == iVar68 * 8 || SBORROW4(iVar64, iVar68 * 8) != iVar64 + iVar68 * -8 < 0) {
                        uVar74 = ( uint )(iVar68 * 3 < iVar64) << 0x1c;
                     }
 else {
                        uVar74 = 0x20000000;
                     }

                     if (iVar68 * 0xd < iVar64) {
                        uVar74 = 0x30000000;
                     }

                     iVar67 = iVar96 + uVar85 * 3 + uVar58 * 3 + uStack_180;
                     iVar63 = iVar103 + uVar66 * 3 + uVar59 * 3 + uStack_140;
                     iVar64 = ( (uint)bStack_db + (uint)bStack_dc + (uint)bStack_da ) * 0x10 - iVar67;
                     iVar68 = iVar64 * 0x10;
                     if (iVar63 < iVar67) {
                        iVar68 = iVar64 * -0x10;
                        iVar63 = iVar67 - iVar63;
                     }
 else {
                        iVar63 = iVar63 - iVar67;
                     }

                     if (iVar68 == iVar63 * 8 || SBORROW4(iVar68, iVar63 * 8) != iVar68 + iVar63 * -8 < 0) {
                        uVar80 = ( uint )(iVar63 * 3 < iVar68) << 0x1e;
                     }
 else {
                        uVar80 = 0x80000000;
                     }

                     if (iVar63 * 0xd < iVar68) {
                        uVar80 = 0xc0000000;
                     }

                     auStack_198[0] = uStack_29c;
                     auStack_158[0] = uStack_290;
                     *puVar2 = uVar107 | uVar87 | uVar98 | uVar86 | uVar90 | uVar104 | uVar88 | uVar92 | uVar93 | uVar106 | uVar94 | uVar95 | uVar99 | uVar100 | uVar74 | uVar80;
                     auStack_198[2] = uVar58;
                     auStack_158[2] = uVar59;
                     uStack_29c = uVar83;
                     uStack_290 = uVar65;
                     auStack_198[1] = uVar84;
                     auStack_158[1] = uVar109;
                  }
 while ( uVar108 != param_3 );
                  local_228 = local_228 + param_3;
               }

               uVar79 = uVar79 + 1;
               if ((int)uVar111 <= (int)uVar79) goto LAB_001149a9;
               uVar73 = ( uint )(ushort)(&g_pvrtc_swizzle_table)[(int)uVar79 >> 8];
               uVar61 = ( uint )(ushort)(&g_pvrtc_swizzle_table)[uVar79 & 0xff];
            }
 while ( true );
         }

         iVar63 = 0x1f;
         if (uVar78 != 0) {
            for (; uVar78 >> iVar63 == 0; iVar63 = iVar63 + -1) {}
         }

         if (iVar63 + 1U <= uVar111) {
            uVar111 = iVar63 + 1U;
         }

         bStack_1f0 = (byte)uVar111;
         bStack_1f4 = bStack_1f0 * '\x02';
         uStack_1f8 = ( 1 << ( bStack_1f4 & 0x1f ) ) - 1;
         uVar111 = param_4;
         if (0 < (int)param_4) goto LAB_0011356a;
      }

      LAB_001149a9:uVar71 = 1;
      LAB_001133d4:if (local_278 != (void*)0x0) {
         free(local_278);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar71;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* basist::transcode_uastc_to_pvrtc1_4_rgba(basist::uastc_block const*, void*, unsigned int,
   unsigned int, bool) [clone .part.0] */undefined8 basist::transcode_uastc_to_pvrtc1_4_rgba(uastc_block *param_1, void *param_2, uint param_3, uint param_4, bool param_5) {
   int iVar1;
   void *pvVar2;
   uint *puVar3;
   char cVar4;
   char cVar10;
   char cVar17;
   char cVar24;
   byte bVar31;
   byte bVar47;
   byte bVar60;
   byte bVar76;
   short sVar92;
   short sVar93;
   short sVar94;
   long lVar95;
   long lVar96;
   long lVar97;
   int iVar98;
   int iVar99;
   int iVar100;
   int iVar101;
   int iVar102;
   int iVar103;
   int iVar104;
   char cVar105;
   uint uVar106;
   undefined4 uVar107;
   int iVar108;
   int iVar109;
   int iVar110;
   uint uVar111;
   int iVar112;
   int iVar113;
   int iVar114;
   int iVar115;
   int iVar116;
   int iVar117;
   int iVar118;
   undefined8 uVar119;
   uint uVar120;
   uint uVar121;
   uint uVar122;
   int iVar123;
   uint uVar124;
   uint uVar125;
   int iVar126;
   ulong uVar127;
   undefined2 uVar128;
   long lVar129;
   uint uVar130;
   uint uVar131;
   uint uVar132;
   uint uVar133;
   uint uVar134;
   uint uVar135;
   int iVar136;
   uint uVar137;
   uint uVar138;
   uint uVar139;
   uint uVar140;
   uint uVar141;
   ulong uVar142;
   undefined2 uVar143;
   int iVar144;
   int iVar145;
   uint uVar146;
   int iVar147;
   int iVar148;
   long lVar149;
   int iVar150;
   uint uVar151;
   int iVar152;
   uint uVar153;
   long in_FS_OFFSET;
   ushort uVar154;
   undefined6 uVar155;
   ushort uVar161;
   ushort uVar163;
   ushort uVar164;
   ushort uVar165;
   ushort uVar166;
   undefined1 auVar158[16];
   ushort uVar162;
   ushort uVar167;
   undefined1 auVar159[16];
   byte bVar168;
   byte bVar169;
   byte bVar170;
   byte bVar171;
   ushort uVar172;
   byte bVar173;
   byte bVar174;
   byte bVar175;
   byte bVar176;
   ushort uVar177;
   byte bVar178;
   byte bVar179;
   ushort uVar180;
   byte bVar181;
   byte bVar182;
   ushort uVar183;
   byte bVar184;
   ushort uVar185;
   ushort uVar186;
   ushort uVar187;
   ushort uVar188;
   byte bVar189;
   ushort uVar190;
   byte bVar194;
   ushort uVar195;
   ushort uVar196;
   ushort uVar197;
   ushort uVar198;
   ushort uVar199;
   undefined1 auVar191[12];
   ushort uVar200;
   ushort uVar201;
   ushort uVar202;
   undefined1 auVar203[12];
   ushort uVar207;
   ushort uVar208;
   ushort uVar209;
   ushort uVar210;
   ushort uVar211;
   ushort uVar212;
   undefined1 auVar205[16];
   ushort uVar213;
   byte bVar214;
   byte bVar215;
   byte bVar216;
   byte bVar217;
   undefined4 uVar218;
   undefined1 auVar223[16];
   undefined1 auVar225[16];
   void *local_280;
   int local_228;
   uint uStack_1f8;
   byte bStack_1f4;
   byte bStack_1e8;
   void *local_1c8;
   ulong local_1c0;
   long alStack_1b8[4];
   int aiStack_198[4];
   int iStack_188;
   int iStack_184;
   int iStack_180;
   int aiStack_158[4];
   int iStack_148;
   int iStack_144;
   int iStack_140;
   color32 local_118;
   byte bStack_117;
   byte bStack_116;
   byte bStack_115;
   byte bStack_114;
   byte bStack_113;
   byte bStack_112;
   byte bStack_111;
   byte bStack_110;
   byte bStack_10f;
   byte bStack_10e;
   byte bStack_10d;
   byte bStack_10c;
   byte bStack_10b;
   byte bStack_10a;
   byte bStack_109;
   byte local_108;
   byte bStack_107;
   byte bStack_106;
   byte bStack_105;
   byte bStack_104;
   byte bStack_103;
   byte bStack_102;
   byte bStack_101;
   byte bStack_100;
   byte bStack_ff;
   byte bStack_fe;
   byte bStack_fd;
   byte bStack_fc;
   byte bStack_fb;
   byte bStack_fa;
   byte bStack_f9;
   byte local_f8;
   byte bStack_f7;
   byte bStack_f6;
   byte bStack_f5;
   byte bStack_f4;
   byte bStack_f3;
   byte bStack_f2;
   byte bStack_f1;
   byte bStack_f0;
   byte bStack_ef;
   byte bStack_ee;
   byte bStack_ed;
   byte bStack_ec;
   byte bStack_eb;
   byte bStack_ea;
   byte bStack_e9;
   byte local_e8;
   byte bStack_e7;
   byte bStack_e6;
   byte bStack_e5;
   byte bStack_e4;
   byte bStack_e3;
   byte bStack_e2;
   byte bStack_e1;
   byte bStack_e0;
   byte bStack_df;
   byte bStack_de;
   byte bStack_dd;
   byte bStack_dc;
   byte bStack_db;
   byte bStack_da;
   byte bStack_d9;
   unpacked_uastc_block local_d8[104];
   uint local_70;
   uint local_6c;
   color32 local_68[40];
   long local_40;
   char cVar5;
   char cVar6;
   char cVar7;
   char cVar8;
   char cVar9;
   char cVar11;
   char cVar12;
   char cVar13;
   char cVar14;
   char cVar15;
   char cVar16;
   char cVar18;
   char cVar19;
   char cVar20;
   char cVar21;
   char cVar22;
   char cVar23;
   char cVar25;
   char cVar26;
   char cVar27;
   char cVar28;
   char cVar29;
   char cVar30;
   byte bVar32;
   byte bVar33;
   byte bVar34;
   byte bVar35;
   byte bVar36;
   byte bVar37;
   byte bVar38;
   byte bVar39;
   byte bVar40;
   byte bVar41;
   byte bVar42;
   byte bVar43;
   byte bVar44;
   byte bVar45;
   byte bVar46;
   byte bVar48;
   byte bVar49;
   byte bVar50;
   byte bVar51;
   byte bVar52;
   byte bVar53;
   byte bVar54;
   byte bVar55;
   byte bVar56;
   byte bVar57;
   byte bVar58;
   byte bVar59;
   byte bVar61;
   byte bVar62;
   byte bVar63;
   byte bVar64;
   byte bVar65;
   byte bVar66;
   byte bVar67;
   byte bVar68;
   byte bVar69;
   byte bVar70;
   byte bVar71;
   byte bVar72;
   byte bVar73;
   byte bVar74;
   byte bVar75;
   byte bVar77;
   byte bVar78;
   byte bVar79;
   byte bVar80;
   byte bVar81;
   byte bVar82;
   byte bVar83;
   byte bVar84;
   byte bVar85;
   byte bVar86;
   byte bVar87;
   byte bVar88;
   byte bVar89;
   byte bVar90;
   byte bVar91;
   undefined1 auVar156[12];
   undefined1 auVar157[14];
   undefined1 auVar160[16];
   undefined1 auVar192[14];
   undefined1 auVar193[16];
   undefined1 auVar204[14];
   undefined1 auVar206[16];
   undefined6 uVar219;
   undefined8 uVar220;
   undefined1 auVar221[12];
   undefined1 auVar222[14];
   undefined1 auVar224[16];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar119 = 0;
   uVar124 = param_3 * 4;
   if (( ( uVar124 != 0 ) && ( uVar120 = param_4 * 4 ),uVar120 != 0 )) {
      local_1c8 = (void*)0x0;
      local_1c0 = 0;
      local_280 = (void*)0x0;
      uVar124 = param_4 * param_3;
      if (uVar124 != 0) {
         basisu::elemental_vector::increase_capacity((elemental_vector*)&local_1c8, uVar124, uVar124 == 1, 4, (_func_void_void_ptr_void_ptr_uint*)0x0, false);
         local_280 = local_1c8;
         memset((void*)( (long)local_1c8 + ( local_1c0 & 0xffffffff ) * 4 ), 0, ( ulong )(uVar124 - (int)local_1c0) << 2);
         local_1c0 = CONCAT44(local_1c0._4_4_, uVar124);
      }

      if (param_4 != 0) {
         uVar124 = 0;
         if (param_3 == 0) {
            do {
               uVar124 = uVar124 + 1;
            }
 while ( param_4 != uVar124 );
         }
 else {
            uVar120 = param_3;
            do {
               uVar153 = uVar120 - param_3;
               do {
                  uVar127 = (ulong)uVar153;
                  cVar105 = unpack_uastc(param_1 + uVar127 * 0x10, local_d8, false, false);
                  if (( cVar105 == '\0' ) || ( cVar105 = unpack_uastc(local_70, local_6c, local_68, (astc_block_desc*)local_d8, &local_118, false) ),cVar105 == '\0') {
                     uVar119 = 0;
                     goto LAB_00114b5f;
                  }

                  auVar223[1] = bStack_117;
                  auVar223[0] = local_118;
                  auVar223[2] = bStack_116;
                  auVar223[3] = bStack_115;
                  auVar223[4] = bStack_114;
                  auVar223[5] = bStack_113;
                  auVar223[6] = bStack_112;
                  auVar223[7] = bStack_111;
                  auVar223[8] = bStack_110;
                  auVar223[9] = bStack_10f;
                  auVar223[10] = bStack_10e;
                  auVar223[0xb] = bStack_10d;
                  auVar223[0xc] = bStack_10c;
                  auVar223[0xd] = bStack_10b;
                  auVar223[0xe] = bStack_10a;
                  auVar223[0xf] = bStack_109;
                  auVar158[1] = bStack_107;
                  auVar158[0] = local_108;
                  auVar158[2] = bStack_106;
                  auVar158[3] = bStack_105;
                  auVar158[4] = bStack_104;
                  auVar158[5] = bStack_103;
                  auVar158[6] = bStack_102;
                  auVar158[7] = bStack_101;
                  auVar158[8] = bStack_100;
                  auVar158[9] = bStack_ff;
                  auVar158[10] = bStack_fe;
                  auVar158[0xb] = bStack_fd;
                  auVar158[0xc] = bStack_fc;
                  auVar158[0xd] = bStack_fb;
                  auVar158[0xe] = bStack_fa;
                  auVar158[0xf] = bStack_f9;
                  auVar205[1] = bStack_f7;
                  auVar205[0] = local_f8;
                  auVar205[2] = bStack_f6;
                  auVar205[3] = bStack_f5;
                  auVar205[4] = bStack_f4;
                  auVar205[5] = bStack_f3;
                  auVar205[6] = bStack_f2;
                  auVar205[7] = bStack_f1;
                  auVar205[8] = bStack_f0;
                  auVar205[9] = bStack_ef;
                  auVar205[10] = bStack_ee;
                  auVar205[0xb] = bStack_ed;
                  auVar205[0xc] = bStack_ec;
                  auVar205[0xd] = bStack_eb;
                  auVar205[0xe] = bStack_ea;
                  auVar205[0xf] = bStack_e9;
                  auVar158 = auVar158 & __LC85;
                  auVar223 = auVar223 & __LC85;
                  sVar92 = auVar223._0_2_;
                  sVar93 = auVar223._2_2_;
                  bVar179 = ( 0 < sVar93 ) * ( sVar93 < 0x100 ) * auVar223[2] - ( 0xff < sVar93 );
                  sVar93 = auVar223._4_2_;
                  sVar94 = auVar223._6_2_;
                  cVar4 = ( 0 < sVar94 ) * ( sVar94 < 0x100 ) * auVar223[6] - ( 0xff < sVar94 );
                  uVar218 = CONCAT13(cVar4, CONCAT12(( 0 < sVar93 ) * ( sVar93 < 0x100 ) * auVar223[4] - ( 0xff < sVar93 ), CONCAT11(bVar179, ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar223[0] - ( 0xff < sVar92 ))));
                  sVar92 = auVar223._8_2_;
                  sVar93 = auVar223._10_2_;
                  cVar105 = ( 0 < sVar93 ) * ( sVar93 < 0x100 ) * auVar223[10] - ( 0xff < sVar93 );
                  uVar219 = CONCAT15(cVar105, CONCAT14(( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar223[8] - ( 0xff < sVar92 ), uVar218));
                  sVar92 = auVar223._12_2_;
                  sVar93 = auVar223._14_2_;
                  cVar5 = ( 0 < sVar93 ) * ( sVar93 < 0x100 ) * auVar223[0xe] - ( 0xff < sVar93 );
                  uVar220 = CONCAT17(cVar5, CONCAT16(( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar223[0xc] - ( 0xff < sVar92 ), uVar219));
                  sVar92 = auVar158._0_2_;
                  sVar93 = auVar158._2_2_;
                  cVar6 = ( 0 < sVar93 ) * ( sVar93 < 0x100 ) * auVar158[2] - ( 0xff < sVar93 );
                  auVar221._0_10_ = CONCAT19(cVar6, CONCAT18(( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar158[0] - ( 0xff < sVar92 ), uVar220));
                  sVar92 = auVar158._4_2_;
                  auVar221[10] = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar158[4] - ( 0xff < sVar92 );
                  sVar92 = auVar158._6_2_;
                  cVar7 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar158[6] - ( 0xff < sVar92 );
                  auVar221[0xb] = cVar7;
                  sVar92 = auVar158._8_2_;
                  auVar222[0xc] = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar158[8] - ( 0xff < sVar92 );
                  auVar222._0_12_ = auVar221;
                  sVar92 = auVar158._10_2_;
                  cVar8 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar158[10] - ( 0xff < sVar92 );
                  auVar222[0xd] = cVar8;
                  sVar92 = auVar158._12_2_;
                  auVar224[0xe] = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar158[0xc] - ( 0xff < sVar92 );
                  auVar224._0_14_ = auVar222;
                  sVar92 = auVar158._14_2_;
                  cVar9 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar158[0xe] - ( 0xff < sVar92 );
                  auVar224[0xf] = cVar9;
                  uVar190 = (ushort)bStack_117;
                  uVar195 = ( ushort )(( (uint)bStack_115 << 0x18 ) >> 0x18);
                  uVar196 = ( ushort )(( (uint6)bStack_113 << 0x28 ) >> 0x28);
                  uVar197 = ( ushort )(( (ulong)bStack_111 << 0x38 ) >> 0x38);
                  uVar198 = ( ushort )(( uint3 )((uint3)bStack_10f << 0x10) >> 0x10);
                  uVar199 = ( ushort )(( (uint5)bStack_10d << 0x20 ) >> 0x20);
                  uVar200 = ( ushort )(( (uint7)bStack_10b << 0x30 ) >> 0x30);
                  uVar201 = ( ushort )(( uint3 )((uint3)bStack_109 << 0x10) >> 0x10);
                  auVar205 = auVar205 & __LC85;
                  uVar172 = (ushort)bStack_e7;
                  uVar177 = ( ushort )(( (uint)bStack_e5 << 0x18 ) >> 0x18);
                  uVar180 = ( ushort )(( (uint6)bStack_e3 << 0x28 ) >> 0x28);
                  uVar183 = ( ushort )(( (ulong)bStack_e1 << 0x38 ) >> 0x38);
                  uVar185 = ( ushort )(( uint3 )((uint3)bStack_df << 0x10) >> 0x10);
                  uVar186 = ( ushort )(( (uint5)bStack_dd << 0x20 ) >> 0x20);
                  uVar187 = ( ushort )(( (uint7)bStack_db << 0x30 ) >> 0x30);
                  uVar188 = ( ushort )(( uint3 )((uint3)bStack_d9 << 0x10) >> 0x10);
                  uVar154 = (ushort)bStack_107;
                  uVar161 = ( ushort )(( (uint)bStack_105 << 0x18 ) >> 0x18);
                  uVar162 = ( ushort )(( (uint6)bStack_103 << 0x28 ) >> 0x28);
                  uVar163 = ( ushort )(( (ulong)bStack_101 << 0x38 ) >> 0x38);
                  uVar164 = ( ushort )(( uint3 )((uint3)bStack_ff << 0x10) >> 0x10);
                  uVar165 = ( ushort )(( (uint5)bStack_fd << 0x20 ) >> 0x20);
                  uVar166 = ( ushort )(( (uint7)bStack_fb << 0x30 ) >> 0x30);
                  uVar167 = ( ushort )(( uint3 )((uint3)bStack_f9 << 0x10) >> 0x10);
                  bVar168 = ( uVar195 != 0 ) * ( uVar195 < 0x100 ) * bStack_115 - ( 0xff < uVar195 );
                  cVar10 = ( uVar197 != 0 ) * ( uVar197 < 0x100 ) * bStack_111 - ( 0xff < uVar197 );
                  uVar107 = CONCAT13(cVar10, CONCAT12(( uVar196 != 0 ) * ( uVar196 < 0x100 ) * bStack_113 - ( 0xff < uVar196 ), CONCAT11(bVar168, ( uVar190 != 0 ) * ( uVar190 < 0x100 ) * bStack_117 - ( 0xff < uVar190 ))));
                  cVar11 = ( uVar199 != 0 ) * ( uVar199 < 0x100 ) * bStack_10d - ( 0xff < uVar199 );
                  uVar155 = CONCAT15(cVar11, CONCAT14(( uVar198 != 0 ) * ( uVar198 < 0x100 ) * bStack_10f - ( 0xff < uVar198 ), uVar107));
                  cVar12 = ( uVar201 != 0 ) * ( uVar201 < 0x100 ) * bStack_109 - ( 0xff < uVar201 );
                  uVar119 = CONCAT17(cVar12, CONCAT16(( uVar200 != 0 ) * ( uVar200 < 0x100 ) * bStack_10b - ( 0xff < uVar200 ), uVar155));
                  cVar13 = ( uVar161 != 0 ) * ( uVar161 < 0x100 ) * bStack_105 - ( 0xff < uVar161 );
                  auVar191._0_10_ = CONCAT19(cVar13, CONCAT18(( uVar154 != 0 ) * ( uVar154 < 0x100 ) * bStack_107 - ( 0xff < uVar154 ), uVar119));
                  auVar191[10] = ( uVar162 != 0 ) * ( uVar162 < 0x100 ) * bStack_103 - ( 0xff < uVar162 );
                  cVar14 = ( uVar163 != 0 ) * ( uVar163 < 0x100 ) * bStack_101 - ( 0xff < uVar163 );
                  auVar191[0xb] = cVar14;
                  auVar192[0xc] = ( uVar164 != 0 ) * ( uVar164 < 0x100 ) * bStack_ff - ( 0xff < uVar164 );
                  auVar192._0_12_ = auVar191;
                  cVar15 = ( uVar165 != 0 ) * ( uVar165 < 0x100 ) * bStack_fd - ( 0xff < uVar165 );
                  auVar192[0xd] = cVar15;
                  auVar193[0xe] = ( uVar166 != 0 ) * ( uVar166 < 0x100 ) * bStack_fb - ( 0xff < uVar166 );
                  auVar193._0_14_ = auVar192;
                  cVar16 = ( uVar167 != 0 ) * ( uVar167 < 0x100 ) * bStack_f9 - ( 0xff < uVar167 );
                  auVar193[0xf] = cVar16;
                  auVar159[1] = bStack_e7;
                  auVar159[0] = local_e8;
                  auVar159[2] = bStack_e6;
                  auVar159[3] = bStack_e5;
                  auVar159[4] = bStack_e4;
                  auVar159[5] = bStack_e3;
                  auVar159[6] = bStack_e2;
                  auVar159[7] = bStack_e1;
                  auVar159[8] = bStack_e0;
                  auVar159[9] = bStack_df;
                  auVar159[10] = bStack_de;
                  auVar159[0xb] = bStack_dd;
                  auVar159[0xc] = bStack_dc;
                  auVar159[0xd] = bStack_db;
                  auVar159[0xe] = bStack_da;
                  auVar159[0xf] = bStack_d9;
                  auVar225 = __LC85 & auVar193;
                  uVar190 = (ushort)bVar168;
                  uVar195 = ( ushort )((uint)uVar107 >> 0x18);
                  uVar196 = ( ushort )((uint6)uVar155 >> 0x28);
                  uVar197 = ( ushort )((ulong)uVar119 >> 0x38);
                  uVar198 = ( ushort )((unkuint10)auVar191._0_10_ >> 0x48);
                  uVar199 = auVar191._10_2_ >> 8;
                  uVar200 = auVar192._12_2_ >> 8;
                  uVar201 = auVar193._14_2_ >> 8;
                  auVar159 = auVar159 & __LC85;
                  sVar92 = auVar205._0_2_;
                  sVar93 = auVar205._2_2_;
                  bVar176 = ( 0 < sVar93 ) * ( sVar93 < 0x100 ) * auVar205[2] - ( 0xff < sVar93 );
                  sVar93 = auVar205._4_2_;
                  sVar94 = auVar205._6_2_;
                  cVar17 = ( 0 < sVar94 ) * ( sVar94 < 0x100 ) * auVar205[6] - ( 0xff < sVar94 );
                  uVar107 = CONCAT13(cVar17, CONCAT12(( 0 < sVar93 ) * ( sVar93 < 0x100 ) * auVar205[4] - ( 0xff < sVar93 ), CONCAT11(bVar176, ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar205[0] - ( 0xff < sVar92 ))));
                  sVar92 = auVar205._8_2_;
                  sVar93 = auVar205._10_2_;
                  cVar18 = ( 0 < sVar93 ) * ( sVar93 < 0x100 ) * auVar205[10] - ( 0xff < sVar93 );
                  uVar155 = CONCAT15(cVar18, CONCAT14(( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar205[8] - ( 0xff < sVar92 ), uVar107));
                  sVar92 = auVar205._12_2_;
                  sVar93 = auVar205._14_2_;
                  cVar19 = ( 0 < sVar93 ) * ( sVar93 < 0x100 ) * auVar205[0xe] - ( 0xff < sVar93 );
                  uVar119 = CONCAT17(cVar19, CONCAT16(( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar205[0xc] - ( 0xff < sVar92 ), uVar155));
                  sVar92 = auVar159._0_2_;
                  sVar93 = auVar159._2_2_;
                  cVar20 = ( 0 < sVar93 ) * ( sVar93 < 0x100 ) * auVar159[2] - ( 0xff < sVar93 );
                  auVar203._0_10_ = CONCAT19(cVar20, CONCAT18(( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar159[0] - ( 0xff < sVar92 ), uVar119));
                  sVar92 = auVar159._4_2_;
                  auVar203[10] = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar159[4] - ( 0xff < sVar92 );
                  sVar92 = auVar159._6_2_;
                  cVar21 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar159[6] - ( 0xff < sVar92 );
                  auVar203[0xb] = cVar21;
                  sVar92 = auVar159._8_2_;
                  auVar204[0xc] = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar159[8] - ( 0xff < sVar92 );
                  auVar204._0_12_ = auVar203;
                  sVar92 = auVar159._10_2_;
                  cVar22 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar159[10] - ( 0xff < sVar92 );
                  auVar204[0xd] = cVar22;
                  sVar92 = auVar159._12_2_;
                  auVar206[0xe] = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar159[0xc] - ( 0xff < sVar92 );
                  auVar206._0_14_ = auVar204;
                  sVar92 = auVar159._14_2_;
                  cVar23 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar159[0xe] - ( 0xff < sVar92 );
                  auVar206[0xf] = cVar23;
                  auVar205 = __LC85 & auVar206;
                  uVar202 = (ushort)bVar176;
                  uVar207 = ( ushort )((uint)uVar107 >> 0x18);
                  uVar208 = ( ushort )((uint6)uVar155 >> 0x28);
                  uVar209 = ( ushort )((ulong)uVar119 >> 0x38);
                  uVar210 = ( ushort )((unkuint10)auVar203._0_10_ >> 0x48);
                  uVar211 = auVar203._10_2_ >> 8;
                  uVar212 = auVar204._12_2_ >> 8;
                  uVar213 = auVar206._14_2_ >> 8;
                  uVar154 = (ushort)bStack_f7;
                  uVar161 = ( ushort )(( (uint)bStack_f5 << 0x18 ) >> 0x18);
                  uVar162 = ( ushort )(( (uint6)bStack_f3 << 0x28 ) >> 0x28);
                  uVar163 = ( ushort )(( (ulong)bStack_f1 << 0x38 ) >> 0x38);
                  uVar164 = ( ushort )(( uint3 )((uint3)bStack_ef << 0x10) >> 0x10);
                  uVar165 = ( ushort )(( (uint5)bStack_ed << 0x20 ) >> 0x20);
                  uVar166 = ( ushort )(( (uint7)bStack_eb << 0x30 ) >> 0x30);
                  uVar167 = ( ushort )(( uint3 )((uint3)bStack_e9 << 0x10) >> 0x10);
                  bVar182 = ( uVar161 != 0 ) * ( uVar161 < 0x100 ) * bStack_f5 - ( 0xff < uVar161 );
                  cVar24 = ( uVar163 != 0 ) * ( uVar163 < 0x100 ) * bStack_f1 - ( 0xff < uVar163 );
                  uVar107 = CONCAT13(cVar24, CONCAT12(( uVar162 != 0 ) * ( uVar162 < 0x100 ) * bStack_f3 - ( 0xff < uVar162 ), CONCAT11(bVar182, ( uVar154 != 0 ) * ( uVar154 < 0x100 ) * bStack_f7 - ( 0xff < uVar154 ))));
                  cVar25 = ( uVar165 != 0 ) * ( uVar165 < 0x100 ) * bStack_ed - ( 0xff < uVar165 );
                  uVar155 = CONCAT15(cVar25, CONCAT14(( uVar164 != 0 ) * ( uVar164 < 0x100 ) * bStack_ef - ( 0xff < uVar164 ), uVar107));
                  cVar26 = ( uVar167 != 0 ) * ( uVar167 < 0x100 ) * bStack_e9 - ( 0xff < uVar167 );
                  uVar119 = CONCAT17(cVar26, CONCAT16(( uVar166 != 0 ) * ( uVar166 < 0x100 ) * bStack_eb - ( 0xff < uVar166 ), uVar155));
                  cVar27 = ( uVar177 != 0 ) * ( uVar177 < 0x100 ) * bStack_e5 - ( 0xff < uVar177 );
                  auVar156._0_10_ = CONCAT19(cVar27, CONCAT18(( uVar172 != 0 ) * ( uVar172 < 0x100 ) * bStack_e7 - ( 0xff < uVar172 ), uVar119));
                  auVar156[10] = ( uVar180 != 0 ) * ( uVar180 < 0x100 ) * bStack_e3 - ( 0xff < uVar180 );
                  cVar28 = ( uVar183 != 0 ) * ( uVar183 < 0x100 ) * bStack_e1 - ( 0xff < uVar183 );
                  auVar156[0xb] = cVar28;
                  auVar157[0xc] = ( uVar185 != 0 ) * ( uVar185 < 0x100 ) * bStack_df - ( 0xff < uVar185 );
                  auVar157._0_12_ = auVar156;
                  cVar29 = ( uVar186 != 0 ) * ( uVar186 < 0x100 ) * bStack_dd - ( 0xff < uVar186 );
                  auVar157[0xd] = cVar29;
                  auVar160[0xe] = ( uVar187 != 0 ) * ( uVar187 < 0x100 ) * bStack_db - ( 0xff < uVar187 );
                  auVar160._0_14_ = auVar157;
                  cVar30 = ( uVar188 != 0 ) * ( uVar188 < 0x100 ) * bStack_d9 - ( 0xff < uVar188 );
                  auVar160[0xf] = cVar30;
                  auVar223 = __LC85 & auVar224;
                  uVar154 = (ushort)bVar179;
                  uVar161 = ( ushort )((uint)uVar218 >> 0x18);
                  uVar162 = ( ushort )((uint6)uVar219 >> 0x28);
                  uVar163 = ( ushort )((ulong)uVar220 >> 0x38);
                  uVar164 = ( ushort )((unkuint10)auVar221._0_10_ >> 0x48);
                  uVar165 = auVar221._10_2_ >> 8;
                  uVar166 = auVar222._12_2_ >> 8;
                  uVar167 = auVar224._14_2_ >> 8;
                  bVar31 = ( uVar154 != 0 ) * ( uVar154 < 0x100 ) * bVar179 - ( 0xff < uVar154 );
                  bVar32 = ( uVar161 != 0 ) * ( uVar161 < 0x100 ) * cVar4 - ( 0xff < uVar161 );
                  bVar33 = ( uVar162 != 0 ) * ( uVar162 < 0x100 ) * cVar105 - ( 0xff < uVar162 );
                  bVar34 = ( uVar163 != 0 ) * ( uVar163 < 0x100 ) * cVar5 - ( 0xff < uVar163 );
                  bVar35 = ( uVar164 != 0 ) * ( uVar164 < 0x100 ) * cVar6 - ( 0xff < uVar164 );
                  bVar36 = ( uVar165 != 0 ) * ( uVar165 < 0x100 ) * cVar7 - ( 0xff < uVar165 );
                  bVar37 = ( uVar166 != 0 ) * ( uVar166 < 0x100 ) * cVar8 - ( 0xff < uVar166 );
                  bVar38 = ( uVar167 != 0 ) * ( uVar167 < 0x100 ) * cVar9 - ( 0xff < uVar167 );
                  bVar39 = ( uVar202 != 0 ) * ( uVar202 < 0x100 ) * bVar176 - ( 0xff < uVar202 );
                  bVar40 = ( uVar207 != 0 ) * ( uVar207 < 0x100 ) * cVar17 - ( 0xff < uVar207 );
                  bVar41 = ( uVar208 != 0 ) * ( uVar208 < 0x100 ) * cVar18 - ( 0xff < uVar208 );
                  bVar42 = ( uVar209 != 0 ) * ( uVar209 < 0x100 ) * cVar19 - ( 0xff < uVar209 );
                  bVar43 = ( uVar210 != 0 ) * ( uVar210 < 0x100 ) * cVar20 - ( 0xff < uVar210 );
                  bVar44 = ( uVar211 != 0 ) * ( uVar211 < 0x100 ) * cVar21 - ( 0xff < uVar211 );
                  bVar45 = ( uVar212 != 0 ) * ( uVar212 < 0x100 ) * cVar22 - ( 0xff < uVar212 );
                  bVar46 = ( uVar213 != 0 ) * ( uVar213 < 0x100 ) * cVar23 - ( 0xff < uVar213 );
                  auVar158 = __LC85 & auVar160;
                  uVar154 = (ushort)bVar182;
                  uVar161 = ( ushort )((uint)uVar107 >> 0x18);
                  uVar162 = ( ushort )((uint6)uVar155 >> 0x28);
                  uVar163 = ( ushort )((ulong)uVar119 >> 0x38);
                  uVar164 = ( ushort )((unkuint10)auVar156._0_10_ >> 0x48);
                  uVar165 = auVar156._10_2_ >> 8;
                  uVar166 = auVar157._12_2_ >> 8;
                  uVar167 = auVar160._14_2_ >> 8;
                  sVar92 = auVar223._0_2_;
                  bVar47 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar223[0] - ( 0xff < sVar92 );
                  sVar92 = auVar223._2_2_;
                  bVar48 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar223[2] - ( 0xff < sVar92 );
                  sVar92 = auVar223._4_2_;
                  bVar49 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar223[4] - ( 0xff < sVar92 );
                  sVar92 = auVar223._6_2_;
                  bVar50 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar223[6] - ( 0xff < sVar92 );
                  sVar92 = auVar223._8_2_;
                  bVar51 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar223[8] - ( 0xff < sVar92 );
                  sVar92 = auVar223._10_2_;
                  bVar52 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar223[10] - ( 0xff < sVar92 );
                  sVar92 = auVar223._12_2_;
                  bVar53 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar223[0xc] - ( 0xff < sVar92 );
                  sVar92 = auVar223._14_2_;
                  bVar54 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar223[0xe] - ( 0xff < sVar92 );
                  sVar92 = auVar205._0_2_;
                  bVar55 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar205[0] - ( 0xff < sVar92 );
                  sVar92 = auVar205._2_2_;
                  bVar215 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar205[2] - ( 0xff < sVar92 );
                  sVar92 = auVar205._4_2_;
                  bVar56 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar205[4] - ( 0xff < sVar92 );
                  sVar92 = auVar205._6_2_;
                  bVar57 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar205[6] - ( 0xff < sVar92 );
                  sVar92 = auVar205._8_2_;
                  bVar58 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar205[8] - ( 0xff < sVar92 );
                  sVar92 = auVar205._10_2_;
                  bVar59 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar205[10] - ( 0xff < sVar92 );
                  sVar92 = auVar205._12_2_;
                  bVar217 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar205[0xc] - ( 0xff < sVar92 );
                  sVar92 = auVar205._14_2_;
                  bVar216 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar205[0xe] - ( 0xff < sVar92 );
                  sVar92 = auVar225._0_2_;
                  bVar60 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar225[0] - ( 0xff < sVar92 );
                  sVar92 = auVar225._2_2_;
                  bVar61 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar225[2] - ( 0xff < sVar92 );
                  sVar92 = auVar225._4_2_;
                  bVar62 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar225[4] - ( 0xff < sVar92 );
                  sVar92 = auVar225._6_2_;
                  bVar63 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar225[6] - ( 0xff < sVar92 );
                  sVar92 = auVar225._8_2_;
                  bVar64 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar225[8] - ( 0xff < sVar92 );
                  sVar92 = auVar225._10_2_;
                  bVar65 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar225[10] - ( 0xff < sVar92 );
                  sVar92 = auVar225._12_2_;
                  bVar66 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar225[0xc] - ( 0xff < sVar92 );
                  sVar92 = auVar225._14_2_;
                  bVar67 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar225[0xe] - ( 0xff < sVar92 );
                  sVar92 = auVar158._0_2_;
                  bVar68 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar158[0] - ( 0xff < sVar92 );
                  sVar92 = auVar158._2_2_;
                  bVar69 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar158[2] - ( 0xff < sVar92 );
                  sVar92 = auVar158._4_2_;
                  bVar70 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar158[4] - ( 0xff < sVar92 );
                  sVar92 = auVar158._6_2_;
                  bVar71 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar158[6] - ( 0xff < sVar92 );
                  sVar92 = auVar158._8_2_;
                  bVar72 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar158[8] - ( 0xff < sVar92 );
                  sVar92 = auVar158._10_2_;
                  bVar73 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar158[10] - ( 0xff < sVar92 );
                  sVar92 = auVar158._12_2_;
                  bVar74 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar158[0xc] - ( 0xff < sVar92 );
                  sVar92 = auVar158._14_2_;
                  bVar75 = ( 0 < sVar92 ) * ( sVar92 < 0x100 ) * auVar158[0xe] - ( 0xff < sVar92 );
                  bVar76 = ( uVar190 != 0 ) * ( uVar190 < 0x100 ) * bVar168 - ( 0xff < uVar190 );
                  bVar77 = ( uVar195 != 0 ) * ( uVar195 < 0x100 ) * cVar10 - ( 0xff < uVar195 );
                  bVar78 = ( uVar196 != 0 ) * ( uVar196 < 0x100 ) * cVar11 - ( 0xff < uVar196 );
                  bVar79 = ( uVar197 != 0 ) * ( uVar197 < 0x100 ) * cVar12 - ( 0xff < uVar197 );
                  bVar80 = ( uVar198 != 0 ) * ( uVar198 < 0x100 ) * cVar13 - ( 0xff < uVar198 );
                  bVar81 = ( uVar199 != 0 ) * ( uVar199 < 0x100 ) * cVar14 - ( 0xff < uVar199 );
                  bVar82 = ( uVar200 != 0 ) * ( uVar200 < 0x100 ) * cVar15 - ( 0xff < uVar200 );
                  bVar83 = ( uVar201 != 0 ) * ( uVar201 < 0x100 ) * cVar16 - ( 0xff < uVar201 );
                  bVar84 = ( uVar154 != 0 ) * ( uVar154 < 0x100 ) * bVar182 - ( 0xff < uVar154 );
                  bVar85 = ( uVar161 != 0 ) * ( uVar161 < 0x100 ) * cVar24 - ( 0xff < uVar161 );
                  bVar86 = ( uVar162 != 0 ) * ( uVar162 < 0x100 ) * cVar25 - ( 0xff < uVar162 );
                  bVar87 = ( uVar163 != 0 ) * ( uVar163 < 0x100 ) * cVar26 - ( 0xff < uVar163 );
                  bVar88 = ( uVar164 != 0 ) * ( uVar164 < 0x100 ) * cVar27 - ( 0xff < uVar164 );
                  bVar89 = ( uVar165 != 0 ) * ( uVar165 < 0x100 ) * cVar28 - ( 0xff < uVar165 );
                  bVar90 = ( uVar166 != 0 ) * ( uVar166 < 0x100 ) * cVar29 - ( 0xff < uVar166 );
                  bVar91 = ( uVar167 != 0 ) * ( uVar167 < 0x100 ) * cVar30 - ( 0xff < uVar167 );
                  bVar168 = ( bVar47 != 0 ) * bVar47;
                  bVar179 = ( bVar48 != 0 ) * bVar48;
                  bVar194 = ( bVar49 != 0 ) * bVar49;
                  bVar189 = ( bVar50 != 0 ) * bVar50;
                  bVar174 = ( bVar51 != 0 ) * bVar51;
                  bVar171 = ( bVar52 != 0 ) * bVar52;
                  bVar170 = ( bVar53 != 0 ) * bVar53;
                  bVar169 = ( bVar54 != 0 ) * bVar54;
                  bVar214 = ( bVar55 != 0 ) * bVar55;
                  bVar173 = ( bVar215 != 0 ) * bVar215;
                  bVar175 = ( bVar56 != 0 ) * bVar56;
                  bVar178 = ( bVar57 != 0 ) * bVar57;
                  bVar184 = ( bVar58 != 0 ) * bVar58;
                  bVar181 = ( bVar59 != 0 ) * bVar59;
                  bVar182 = ( bVar217 != 0 ) * bVar217;
                  bVar176 = ( bVar216 != 0 ) * bVar216;
                  bVar168 = ( bVar168 < bVar214 ) * bVar214 | ( bVar168 >= bVar214 ) * bVar168;
                  bVar173 = ( bVar179 < bVar173 ) * bVar173 | ( bVar179 >= bVar173 ) * bVar179;
                  bVar175 = ( bVar194 < bVar175 ) * bVar175 | ( bVar194 >= bVar175 ) * bVar194;
                  bVar178 = ( bVar189 < bVar178 ) * bVar178 | ( bVar189 >= bVar178 ) * bVar189;
                  bVar179 = ( bVar174 < bVar184 ) * bVar184 | ( bVar174 >= bVar184 ) * bVar174;
                  bVar181 = ( bVar171 < bVar181 ) * bVar181 | ( bVar171 >= bVar181 ) * bVar171;
                  bVar182 = ( bVar170 < bVar182 ) * bVar182 | ( bVar170 >= bVar182 ) * bVar170;
                  bVar184 = ( bVar169 < bVar176 ) * bVar176 | ( bVar169 >= bVar176 ) * bVar169;
                  bVar179 = ( bVar168 < bVar179 ) * bVar179 | ( bVar168 >= bVar179 ) * bVar168;
                  bVar168 = ( bVar173 < bVar181 ) * bVar181 | ( bVar173 >= bVar181 ) * bVar173;
                  bVar176 = ( bVar175 < bVar182 ) * bVar182 | ( bVar175 >= bVar182 ) * bVar175;
                  bVar182 = ( bVar178 < bVar184 ) * bVar184 | ( bVar178 >= bVar184 ) * bVar178;
                  bVar179 = ( bVar179 < bVar176 ) * bVar176 | ( bVar179 >= bVar176 ) * bVar179;
                  bVar168 = ( bVar168 < bVar182 ) * bVar182 | ( bVar168 >= bVar182 ) * bVar168;
                  bVar173 = ( bVar179 < bVar168 ) * bVar168 | ( bVar179 >= bVar168 ) * bVar179;
                  bVar179 = ( bVar68 < bVar60 ) * bVar60 | ( bVar68 >= bVar60 ) * bVar68;
                  bVar168 = ( bVar69 < bVar61 ) * bVar61 | ( bVar69 >= bVar61 ) * bVar69;
                  bVar176 = ( bVar70 < bVar62 ) * bVar62 | ( bVar70 >= bVar62 ) * bVar70;
                  bVar182 = ( bVar71 < bVar63 ) * bVar63 | ( bVar71 >= bVar63 ) * bVar71;
                  bVar181 = ( bVar72 < bVar64 ) * bVar64 | ( bVar72 >= bVar64 ) * bVar72;
                  bVar184 = ( bVar73 < bVar65 ) * bVar65 | ( bVar73 >= bVar65 ) * bVar73;
                  bVar178 = ( bVar74 < bVar66 ) * bVar66 | ( bVar74 >= bVar66 ) * bVar74;
                  bVar175 = ( bVar75 < bVar67 ) * bVar67 | ( bVar75 >= bVar67 ) * bVar75;
                  bVar179 = ( bVar179 < bVar181 ) * bVar181 | ( bVar179 >= bVar181 ) * bVar179;
                  bVar168 = ( bVar168 < bVar184 ) * bVar184 | ( bVar168 >= bVar184 ) * bVar168;
                  bVar176 = ( bVar176 < bVar178 ) * bVar178 | ( bVar176 >= bVar178 ) * bVar176;
                  bVar182 = ( bVar182 < bVar175 ) * bVar175 | ( bVar182 >= bVar175 ) * bVar182;
                  bVar179 = ( bVar179 < bVar176 ) * bVar176 | ( bVar179 >= bVar176 ) * bVar179;
                  bVar168 = ( bVar168 < bVar182 ) * bVar182 | ( bVar168 >= bVar182 ) * bVar168;
                  bVar169 = ( bVar179 < bVar168 ) * bVar168 | ( bVar179 >= bVar168 ) * bVar179;
                  bVar179 = ( bVar39 < bVar31 ) * bVar31 | ( bVar39 >= bVar31 ) * bVar39;
                  bVar168 = ( bVar40 < bVar32 ) * bVar32 | ( bVar40 >= bVar32 ) * bVar40;
                  bVar176 = ( bVar41 < bVar33 ) * bVar33 | ( bVar41 >= bVar33 ) * bVar41;
                  bVar182 = ( bVar42 < bVar34 ) * bVar34 | ( bVar42 >= bVar34 ) * bVar42;
                  bVar181 = ( bVar43 < bVar35 ) * bVar35 | ( bVar43 >= bVar35 ) * bVar43;
                  bVar184 = ( bVar44 < bVar36 ) * bVar36 | ( bVar44 >= bVar36 ) * bVar44;
                  bVar178 = ( bVar45 < bVar37 ) * bVar37 | ( bVar45 >= bVar37 ) * bVar45;
                  bVar175 = ( bVar46 < bVar38 ) * bVar38 | ( bVar46 >= bVar38 ) * bVar46;
                  bVar179 = ( bVar179 < bVar181 ) * bVar181 | ( bVar179 >= bVar181 ) * bVar179;
                  bVar168 = ( bVar168 < bVar184 ) * bVar184 | ( bVar168 >= bVar184 ) * bVar168;
                  bVar176 = ( bVar176 < bVar178 ) * bVar178 | ( bVar176 >= bVar178 ) * bVar176;
                  bVar182 = ( bVar182 < bVar175 ) * bVar175 | ( bVar182 >= bVar175 ) * bVar182;
                  bVar179 = ( bVar179 < bVar176 ) * bVar176 | ( bVar179 >= bVar176 ) * bVar179;
                  bVar168 = ( bVar168 < bVar182 ) * bVar182 | ( bVar168 >= bVar182 ) * bVar168;
                  bVar170 = ( bVar179 < bVar168 ) * bVar168 | ( bVar179 >= bVar168 ) * bVar179;
                  bVar179 = ( bVar76 < bVar84 ) * bVar84 | ( bVar76 >= bVar84 ) * bVar76;
                  bVar168 = ( bVar77 < bVar85 ) * bVar85 | ( bVar77 >= bVar85 ) * bVar77;
                  bVar176 = ( bVar78 < bVar86 ) * bVar86 | ( bVar78 >= bVar86 ) * bVar78;
                  bVar182 = ( bVar79 < bVar87 ) * bVar87 | ( bVar79 >= bVar87 ) * bVar79;
                  bVar181 = ( bVar80 < bVar88 ) * bVar88 | ( bVar80 >= bVar88 ) * bVar80;
                  bVar184 = ( bVar81 < bVar89 ) * bVar89 | ( bVar81 >= bVar89 ) * bVar81;
                  bVar178 = ( bVar82 < bVar90 ) * bVar90 | ( bVar82 >= bVar90 ) * bVar82;
                  bVar175 = ( bVar83 < bVar91 ) * bVar91 | ( bVar83 >= bVar91 ) * bVar83;
                  bVar179 = ( bVar179 < bVar181 ) * bVar181 | ( bVar179 >= bVar181 ) * bVar179;
                  bVar168 = ( bVar168 < bVar184 ) * bVar184 | ( bVar168 >= bVar184 ) * bVar168;
                  bVar176 = ( bVar176 < bVar178 ) * bVar178 | ( bVar176 >= bVar178 ) * bVar176;
                  bVar182 = ( bVar182 < bVar175 ) * bVar175 | ( bVar182 >= bVar175 ) * bVar182;
                  bVar189 = ( bVar179 < bVar176 ) * bVar176 | ( bVar179 >= bVar176 ) * bVar179;
                  bVar194 = ( bVar168 < bVar182 ) * bVar182 | ( bVar168 >= bVar182 ) * bVar168;
                  bVar179 = ( bVar55 < bVar47 ) * bVar55 | ( bVar55 >= bVar47 ) * bVar47;
                  bVar168 = ( bVar215 < bVar48 ) * bVar215 | ( bVar215 >= bVar48 ) * bVar48;
                  bVar176 = ( bVar56 < bVar49 ) * bVar56 | ( bVar56 >= bVar49 ) * bVar49;
                  bVar182 = ( bVar57 < bVar50 ) * bVar57 | ( bVar57 >= bVar50 ) * bVar50;
                  bVar181 = ( bVar58 < bVar51 ) * bVar58 | ( bVar58 >= bVar51 ) * bVar51;
                  bVar184 = ( bVar59 < bVar52 ) * bVar59 | ( bVar59 >= bVar52 ) * bVar52;
                  bVar178 = ( bVar217 < bVar53 ) * bVar217 | ( bVar217 >= bVar53 ) * bVar53;
                  bVar175 = ( bVar216 < bVar54 ) * bVar216 | ( bVar216 >= bVar54 ) * bVar54;
                  bVar179 = ( bVar181 < bVar179 ) * bVar181 | ( bVar181 >= bVar179 ) * bVar179;
                  bVar168 = ( bVar184 < bVar168 ) * bVar184 | ( bVar184 >= bVar168 ) * bVar168;
                  bVar176 = ( bVar178 < bVar176 ) * bVar178 | ( bVar178 >= bVar176 ) * bVar176;
                  bVar182 = ( bVar175 < bVar182 ) * bVar175 | ( bVar175 >= bVar182 ) * bVar182;
                  bVar216 = ( bVar176 < bVar179 ) * bVar176 | ( bVar176 >= bVar179 ) * bVar179;
                  bVar217 = ( bVar182 < bVar168 ) * bVar182 | ( bVar182 >= bVar168 ) * bVar168;
                  bVar179 = ( bVar68 < bVar60 ) * bVar68 | ( bVar68 >= bVar60 ) * bVar60;
                  bVar168 = ( bVar69 < bVar61 ) * bVar69 | ( bVar69 >= bVar61 ) * bVar61;
                  bVar176 = ( bVar70 < bVar62 ) * bVar70 | ( bVar70 >= bVar62 ) * bVar62;
                  bVar182 = ( bVar71 < bVar63 ) * bVar71 | ( bVar71 >= bVar63 ) * bVar63;
                  bVar181 = ( bVar72 < bVar64 ) * bVar72 | ( bVar72 >= bVar64 ) * bVar64;
                  bVar184 = ( bVar73 < bVar65 ) * bVar73 | ( bVar73 >= bVar65 ) * bVar65;
                  bVar178 = ( bVar74 < bVar66 ) * bVar74 | ( bVar74 >= bVar66 ) * bVar66;
                  bVar175 = ( bVar75 < bVar67 ) * bVar75 | ( bVar75 >= bVar67 ) * bVar67;
                  bVar179 = ( bVar181 < bVar179 ) * bVar181 | ( bVar181 >= bVar179 ) * bVar179;
                  bVar168 = ( bVar184 < bVar168 ) * bVar184 | ( bVar184 >= bVar168 ) * bVar168;
                  bVar176 = ( bVar178 < bVar176 ) * bVar178 | ( bVar178 >= bVar176 ) * bVar176;
                  bVar182 = ( bVar175 < bVar182 ) * bVar175 | ( bVar175 >= bVar182 ) * bVar182;
                  bVar214 = ( bVar176 < bVar179 ) * bVar176 | ( bVar176 >= bVar179 ) * bVar179;
                  bVar215 = ( bVar182 < bVar168 ) * bVar182 | ( bVar182 >= bVar168 ) * bVar168;
                  bVar179 = ( bVar31 < bVar39 ) * bVar31 | ( bVar31 >= bVar39 ) * bVar39;
                  bVar168 = ( bVar32 < bVar40 ) * bVar32 | ( bVar32 >= bVar40 ) * bVar40;
                  bVar176 = ( bVar33 < bVar41 ) * bVar33 | ( bVar33 >= bVar41 ) * bVar41;
                  bVar182 = ( bVar34 < bVar42 ) * bVar34 | ( bVar34 >= bVar42 ) * bVar42;
                  bVar181 = ( bVar35 < bVar43 ) * bVar35 | ( bVar35 >= bVar43 ) * bVar43;
                  bVar184 = ( bVar36 < bVar44 ) * bVar36 | ( bVar36 >= bVar44 ) * bVar44;
                  bVar178 = ( bVar37 < bVar45 ) * bVar37 | ( bVar37 >= bVar45 ) * bVar45;
                  bVar175 = ( bVar38 < bVar46 ) * bVar38 | ( bVar38 >= bVar46 ) * bVar46;
                  bVar179 = ( bVar181 < bVar179 ) * bVar181 | ( bVar181 >= bVar179 ) * bVar179;
                  bVar168 = ( bVar184 < bVar168 ) * bVar184 | ( bVar184 >= bVar168 ) * bVar168;
                  bVar176 = ( bVar178 < bVar176 ) * bVar178 | ( bVar178 >= bVar176 ) * bVar176;
                  bVar182 = ( bVar175 < bVar182 ) * bVar175 | ( bVar175 >= bVar182 ) * bVar182;
                  bVar171 = ( bVar176 < bVar179 ) * bVar176 | ( bVar176 >= bVar179 ) * bVar179;
                  bVar174 = ( bVar182 < bVar168 ) * bVar182 | ( bVar182 >= bVar168 ) * bVar168;
                  bVar179 = ( bVar84 < bVar76 ) * bVar84 | ( bVar84 >= bVar76 ) * bVar76;
                  bVar168 = ( bVar85 < bVar77 ) * bVar85 | ( bVar85 >= bVar77 ) * bVar77;
                  bVar176 = ( bVar86 < bVar78 ) * bVar86 | ( bVar86 >= bVar78 ) * bVar78;
                  bVar182 = ( bVar87 < bVar79 ) * bVar87 | ( bVar87 >= bVar79 ) * bVar79;
                  bVar181 = ( bVar88 < bVar80 ) * bVar88 | ( bVar88 >= bVar80 ) * bVar80;
                  bVar184 = ( bVar89 < bVar81 ) * bVar89 | ( bVar89 >= bVar81 ) * bVar81;
                  bVar178 = ( bVar90 < bVar82 ) * bVar90 | ( bVar90 >= bVar82 ) * bVar82;
                  bVar175 = ( bVar91 < bVar83 ) * bVar91 | ( bVar91 >= bVar83 ) * bVar83;
                  bVar179 = ( bVar181 < bVar179 ) * bVar181 | ( bVar181 >= bVar179 ) * bVar179;
                  bVar168 = ( bVar184 < bVar168 ) * bVar184 | ( bVar184 >= bVar168 ) * bVar168;
                  bVar176 = ( bVar178 < bVar176 ) * bVar178 | ( bVar178 >= bVar176 ) * bVar176;
                  bVar182 = ( bVar175 < bVar182 ) * bVar175 | ( bVar175 >= bVar182 ) * bVar182;
                  bVar179 = ( bVar176 < bVar179 ) * bVar176 | ( bVar176 >= bVar179 ) * bVar179;
                  bVar168 = ( bVar182 < bVar168 ) * bVar182 | ( bVar182 >= bVar168 ) * bVar168;
                  bVar181 = ( bVar217 < bVar216 ) * bVar217 | ( bVar217 >= bVar216 ) * bVar216;
                  bVar182 = ( bVar215 < bVar214 ) * bVar215 | ( bVar215 >= bVar214 ) * bVar214;
                  bVar176 = ( bVar174 < bVar171 ) * bVar174 | ( bVar174 >= bVar171 ) * bVar171;
                  if (g_pvrtc_alpha_floor[( byte )(( bVar168 < bVar179 ) * bVar168 | ( bVar168 >= bVar179 ) * bVar179)] == 8) {
                     uVar154 = (ushort)(byte)g_pvrtc_5_floor[bVar181] << 10 | (ushort)(byte)g_pvrtc_4_floor[bVar176] * 2 | (ushort)(byte)g_pvrtc_5_floor[bVar182] << 5 | 0x8000;
                  }
 else {
                     uVar154 = (ushort)(byte)g_pvrtc_4_floor[bVar181] << 8 | (ushort)(byte)g_pvrtc_alpha_floor[( byte )(( bVar168 < bVar179 ) * bVar168 | ( bVar168 >= bVar179 ) * bVar179)] << 0xc | (ushort)(byte)g_pvrtc_4_floor[bVar182] << 4 | (ushort)(byte)g_pvrtc_3_floor[bVar176] * 2;
                  }

                  if (g_pvrtc_alpha_ceil[( byte )(( bVar189 < bVar194 ) * bVar194 | ( bVar189 >= bVar194 ) * bVar189)] == 8) {
                     uVar106 = (uint)uVar154 | ( (uint)(byte)g_pvrtc_5_ceil[bVar173] << 10 | (uint)(byte)g_pvrtc_5_ceil[bVar169] << 5 | (uint)(byte)g_pvrtc_5_ceil[bVar170] ) << 0x10 | 0x80000000;
                  }
 else {
                     uVar106 = (uint)uVar154 | ( (uint)(byte)g_pvrtc_4_ceil[bVar173] << 8 | (uint)(byte)g_pvrtc_alpha_ceil[( byte )(( bVar189 < bVar194 ) * bVar194 | ( bVar189 >= bVar194 ) * bVar189)] << 0xc | (uint)(byte)g_pvrtc_4_ceil[bVar170] | (uint)(byte)g_pvrtc_4_ceil[bVar169] << 4 ) << 0x10;
                  }

                  uVar153 = uVar153 + 1;
                  *(uint*)( (long)local_280 + uVar127 * 4 ) = uVar106;
               }
 while ( uVar120 != uVar153 );
               uVar124 = uVar124 + 1;
               uVar120 = uVar120 + param_3;
            }
 while ( param_4 != uVar124 );
         }

         uVar124 = uVar124 - 1;
         uVar120 = param_3 - 1;
         if (uVar120 == 0) {
            uVar153 = 0;
         }
 else {
            iVar109 = 0x1f;
            if (uVar120 != 0) {
               for (; uVar120 >> iVar109 == 0; iVar109 = iVar109 + -1) {}
            }

            uVar153 = iVar109 + 1;
         }

         if (uVar124 == 0) {
            bStack_1f4 = 0;
            uVar153 = 1;
            bStack_1e8 = 0;
            uStack_1f8 = 0;
            LAB_00114fd5:uVar106 = 0;
            uVar128 = 0;
            uVar143 = 0;
            local_228 = 0;
            do {
               lVar129 = 0;
               uVar121 = uVar106 - 1;
               uVar127 = (ulong)uVar120;
               do {
                  uVar142 = 0xffffffff;
                  pvVar2 = (void*)( (long)local_280 + ( ulong )(( uVar124 & uVar121 ) * param_3) * 4 );
                  *(void**)( (long)alStack_1b8 + lVar129 * 2 ) = pvVar2;
                  lVar149 = lVar129;
                  do {
                     uVar111 = (uint)uVar142;
                     uVar142 = ( ulong )(uVar111 + 1);
                     uVar111 = *(uint*)( (long)pvVar2 + ( ulong )((uint)uVar127 & uVar111) * 4 );
                     uVar107 = get_endpoint_l8(uVar111, 0);
                     *(undefined4*)( (long)aiStack_198 + lVar149 ) = uVar107;
                     uVar107 = get_endpoint_l8(uVar111, 1);
                     lVar97 = alStack_1b8[2];
                     lVar96 = alStack_1b8[1];
                     lVar95 = alStack_1b8[0];
                     *(undefined4*)( (long)aiStack_158 + lVar149 ) = uVar107;
                     lVar149 = lVar149 + 0x10;
                  }
 while ( (int)uVar142 != 2 );
                  uVar121 = uVar121 + 1;
                  lVar129 = lVar129 + 4;
               }
 while ( lVar129 != 0xc );
               if (0 < (int)param_3) {
                  uVar121 = 0;
                  do {
                     iVar104 = iStack_140;
                     iVar103 = iStack_144;
                     iVar102 = iStack_148;
                     iVar101 = aiStack_158[2];
                     iVar147 = aiStack_158[1];
                     iVar110 = aiStack_158[0];
                     iVar100 = iStack_180;
                     iVar99 = iStack_184;
                     iVar98 = iStack_188;
                     iVar148 = aiStack_198[2];
                     iVar152 = aiStack_198[1];
                     iVar109 = aiStack_198[0];
                     cVar105 = unpack_uastc(param_1 + ( ulong )(local_228 + uVar121) * 0x10, local_d8, false, false);
                     if (cVar105 != '\0') {
                        unpack_uastc(local_70, local_6c, local_68, (astc_block_desc*)local_d8, &local_118, false);
                     }

                     uVar111 = ( uint )(ushort)(&g_pvrtc_swizzle_table)[(int)uVar121 >> 8] << 0x11 | ( uint )(ushort)(&g_pvrtc_swizzle_table)[uVar121 & 0xff] * 2 | CONCAT22(uVar143, uVar128);
                     uVar127 = (ulong)uVar111;
                     if (param_3 != param_4) {
                        uVar111 = uVar111 & uStack_1f8;
                        uVar127 = ( ulong )(( (int)uVar106 >> ( bStack_1e8 & 0x1f ) ) << ( bStack_1f4 & 0x1f ) | uVar111);
                        if (param_4 < param_3) {
                           uVar127 = ( ulong )(( (int)uVar121 >> ( bStack_1e8 & 0x1f ) ) << ( bStack_1f4 & 0x1f ) | uVar111);
                        }

                     }

                     puVar3 = (uint*)( (long)param_2 + uVar127 * 8 );
                     puVar3[1] = *(uint*)( (long)local_280 + ( ulong )(local_228 + uVar121) * 4 );
                     uVar121 = uVar121 + 1;
                     uVar127 = ( ulong )(uVar120 & uVar121);
                     uVar111 = *(uint*)( lVar95 + uVar127 * 4 );
                     iVar112 = get_endpoint_l8(uVar111, 0);
                     iVar113 = get_endpoint_l8(uVar111, 1);
                     uVar111 = *(uint*)( lVar96 + uVar127 * 4 );
                     iVar114 = get_endpoint_l8(uVar111, 0);
                     iVar115 = get_endpoint_l8(uVar111, 1);
                     uVar111 = *(uint*)( lVar97 + uVar127 * 4 );
                     iVar116 = get_endpoint_l8(uVar111, 0);
                     iStack_140 = get_endpoint_l8(uVar111, 1);
                     iVar1 = iVar109 + iVar98;
                     iVar123 = iVar1 + iVar152 + iVar99;
                     iVar108 = iVar110 + iVar102;
                     iVar126 = iVar108 + iVar147 + iVar103;
                     iVar117 = ( (uint)bStack_116 + (uint)bStack_117 + (uint)(byte)local_118 + (uint)bStack_115 ) * 0x10 + iVar123 * -4;
                     iVar118 = iVar117 * 0x10;
                     if (iVar126 < iVar123) {
                        iVar123 = iVar123 * 4 + iVar126 * -4;
                        iVar118 = iVar117 * -0x10;
                        if (iVar118 == iVar123 * 8 || SBORROW4(iVar118, iVar123 * 8) != iVar118 + iVar123 * -8 < 0) goto LAB_00115213;
                        LAB_00115e63:uVar111 = 2;
                     }
 else {
                        iVar123 = iVar126 * 4 + iVar123 * -4;
                        if (iVar118 != iVar123 * 8 && SBORROW4(iVar118, iVar123 * 8) == iVar118 + iVar123 * -8 < 0) goto LAB_00115e63;
                        LAB_00115213:uVar111 = ( uint )(iVar123 * 3 < iVar118);
                     }

                     iVar117 = iVar99 * 3;
                     iVar126 = iVar103 * 3;
                     if (iVar123 * 0xd < iVar118) {
                        uVar111 = 3;
                     }

                     iVar109 = iVar98 * 3 + iVar109;
                     iVar150 = iVar109 + iVar152 + iVar117;
                     iVar110 = iVar102 * 3 + iVar110;
                     iVar144 = iVar110 + iVar147 + iVar126;
                     iVar118 = ( (uint)bStack_112 + (uint)bStack_113 + (uint)bStack_114 + (uint)bStack_111 ) * 0x10 + iVar150 * -2;
                     iVar123 = iVar118 * 0x10;
                     if (iVar144 < iVar150) {
                        iVar123 = iVar118 * -0x10;
                        iVar118 = iVar150 * 2 + iVar144 * -2;
                     }
 else {
                        iVar118 = iVar144 * 2 + iVar150 * -2;
                     }

                     if (iVar123 == iVar118 * 8 || SBORROW4(iVar123, iVar118 * 8) != iVar123 + iVar118 * -8 < 0) {
                        uVar151 = ( uint )(iVar118 * 3 < iVar123) << 2;
                     }
 else {
                        uVar151 = 8;
                     }

                     if (iVar118 * 0xd < iVar123) {
                        uVar151 = 0xc;
                     }

                     iVar118 = iVar152 * 3;
                     iVar150 = iVar1 + iVar118 + iVar117;
                     iVar1 = iVar147 * 3;
                     iVar144 = iVar108 + iVar1 + iVar126;
                     iVar108 = ( (uint)bStack_106 + (uint)bStack_107 + (uint)local_108 + (uint)bStack_105 ) * 0x10 + iVar150 * -2;
                     iVar123 = iVar108 * 0x10;
                     if (iVar144 < iVar150) {
                        iVar123 = iVar108 * -0x10;
                        iVar108 = iVar150 * 2 + iVar144 * -2;
                     }
 else {
                        iVar108 = iVar144 * 2 + iVar150 * -2;
                     }

                     if (iVar123 == iVar108 * 8 || SBORROW4(iVar123, iVar108 * 8) != iVar123 + iVar108 * -8 < 0) {
                        uVar135 = ( uint )(iVar108 * 3 < iVar123) << 8;
                     }
 else {
                        uVar135 = 0x200;
                     }

                     iVar144 = iVar99 * 9;
                     iVar150 = iVar103 * 9;
                     if (iVar108 * 0xd < iVar123) {
                        uVar135 = 0x300;
                     }

                     iVar108 = iVar109 + iVar118 + iVar144;
                     iVar123 = iVar110 + iVar1 + iVar150;
                     iVar109 = ( (uint)bStack_102 + (uint)bStack_103 + (uint)bStack_104 + (uint)bStack_101 ) * 0x10 - iVar108;
                     iVar110 = iVar109 * 0x10;
                     if (iVar123 < iVar108) {
                        iVar123 = iVar108 - iVar123;
                        iVar110 = iVar109 * -0x10;
                     }
 else {
                        iVar123 = iVar123 - iVar108;
                     }

                     if (iVar110 == iVar123 * 8 || SBORROW4(iVar110, iVar123 * 8) != iVar110 + iVar123 * -8 < 0) {
                        uVar130 = ( uint )(iVar123 * 3 < iVar110) << 10;
                     }
 else {
                        uVar130 = 0x800;
                     }

                     if (iVar123 * 0xd < iVar110) {
                        uVar130 = 0xc00;
                     }

                     iVar109 = iVar98 + iVar99;
                     iVar123 = iVar102 + iVar103;
                     iVar110 = ( (uint)bStack_10e + (uint)bStack_10f + (uint)bStack_110 + (uint)bStack_10d ) * 0x10 + iVar109 * -8;
                     iVar108 = iVar110 * 0x10;
                     if (iVar123 < iVar109) {
                        iVar109 = iVar109 * 8 + iVar123 * -8;
                        iVar108 = iVar110 * -0x10;
                     }
 else {
                        iVar109 = iVar123 * 8 + iVar109 * -8;
                     }

                     if (iVar108 == iVar109 * 8 || SBORROW4(iVar108, iVar109 * 8) != iVar108 + iVar109 * -8 < 0) {
                        uVar132 = ( uint )(iVar109 * 3 < iVar108) << 4;
                     }
 else {
                        uVar132 = 0x20;
                     }

                     if (iVar109 * 0xd < iVar108) {
                        uVar132 = 0x30;
                     }

                     iVar108 = iVar98 * 3 + iVar112;
                     iVar145 = iVar117 + iVar108 + iVar114;
                     iVar123 = iVar102 * 3 + iVar113;
                     iVar136 = iVar126 + iVar123 + iVar115;
                     iVar109 = ( (uint)bStack_10a + (uint)bStack_10b + (uint)bStack_10c + (uint)bStack_109 ) * 0x10 + iVar145 * -2;
                     iVar110 = iVar109 * 0x10;
                     if (iVar136 < iVar145) {
                        iVar136 = iVar145 * 2 + iVar136 * -2;
                        iVar110 = iVar109 * -0x10;
                     }
 else {
                        iVar136 = iVar136 * 2 + iVar145 * -2;
                     }

                     if (iVar110 == iVar136 * 8 || SBORROW4(iVar110, iVar136 * 8) != iVar110 + iVar136 * -8 < 0) {
                        uVar146 = ( uint )(iVar136 * 3 < iVar110) << 6;
                     }
 else {
                        uVar146 = 0x80;
                     }

                     if (iVar136 * 0xd < iVar110) {
                        uVar146 = 0xc0;
                     }

                     iVar145 = iVar117 + iVar98;
                     iVar109 = iVar126 + iVar102;
                     iVar110 = ( (uint)bStack_fe + (uint)bStack_ff + (uint)bStack_100 + (uint)bStack_fd ) * 0x10 + iVar145 * -4;
                     iVar136 = iVar110 * 0x10;
                     if (iVar109 < iVar145) {
                        iVar136 = iVar110 * -0x10;
                        iVar109 = iVar145 * 4 + iVar109 * -4;
                     }
 else {
                        iVar109 = iVar109 * 4 + iVar145 * -4;
                     }

                     if (iVar136 == iVar109 * 8 || SBORROW4(iVar136, iVar109 * 8) != iVar136 + iVar109 * -8 < 0) {
                        uVar137 = ( uint )(iVar109 * 3 < iVar136) << 0xc;
                     }
 else {
                        uVar137 = 0x2000;
                     }

                     if (iVar109 * 0xd < iVar136) {
                        uVar137 = 0x3000;
                     }

                     iVar108 = iVar108 + iVar144 + iVar114 * 3;
                     iVar123 = iVar123 + iVar150 + iVar115 * 3;
                     iVar109 = ( (uint)bStack_fa + (uint)bStack_fb + (uint)bStack_fc + (uint)bStack_f9 ) * 0x10 - iVar108;
                     iVar110 = iVar109 * 0x10;
                     if (iVar123 < iVar108) {
                        iVar123 = iVar108 - iVar123;
                        iVar110 = iVar109 * -0x10;
                     }
 else {
                        iVar123 = iVar123 - iVar108;
                     }

                     if (iVar110 == iVar123 * 8 || SBORROW4(iVar110, iVar123 * 8) != iVar110 + iVar123 * -8 < 0) {
                        uVar133 = ( uint )(iVar123 * 3 < iVar110) << 0xe;
                     }
 else {
                        uVar133 = 0x8000;
                     }

                     if (iVar123 * 0xd < iVar110) {
                        uVar133 = 0xc000;
                     }

                     iVar109 = iVar152 + iVar99;
                     iVar123 = iVar147 + iVar103;
                     iVar110 = ( (uint)bStack_f6 + (uint)bStack_f7 + (uint)local_f8 + (uint)bStack_f5 ) * 0x10 + iVar109 * -8;
                     iVar108 = iVar110 * 0x10;
                     if (iVar123 < iVar109) {
                        iVar108 = iVar110 * -0x10;
                        iVar110 = iVar109 * 8 + iVar123 * -8;
                     }
 else {
                        iVar110 = iVar123 * 8 + iVar109 * -8;
                     }

                     if (iVar108 == iVar110 * 8 || SBORROW4(iVar108, iVar110 * 8) != iVar108 + iVar110 * -8 < 0) {
                        uVar138 = ( uint )(iVar110 * 3 < iVar108) << 0x10;
                     }
 else {
                        uVar138 = 0x20000;
                     }

                     if (iVar110 * 0xd < iVar108) {
                        uVar138 = 0x30000;
                     }

                     iVar152 = iVar152 + iVar117;
                     iVar147 = iVar147 + iVar126;
                     iVar110 = ( (uint)bStack_f2 + (uint)bStack_f3 + (uint)bStack_f4 + (uint)bStack_f1 ) * 0x10 + iVar152 * -4;
                     iVar108 = iVar110 * 0x10;
                     if (iVar147 < iVar152) {
                        iVar152 = iVar152 * 4 + iVar147 * -4;
                        iVar108 = iVar110 * -0x10;
                     }
 else {
                        iVar152 = iVar147 * 4 + iVar152 * -4;
                     }

                     if (iVar108 == iVar152 * 8 || SBORROW4(iVar108, iVar152 * 8) != iVar108 + iVar152 * -8 < 0) {
                        uVar131 = ( uint )(iVar152 * 3 < iVar108) << 0x12;
                     }
 else {
                        uVar131 = 0x80000;
                     }

                     if (iVar152 * 0xd < iVar108) {
                        uVar131 = 0xc0000;
                     }

                     iVar147 = iVar109 * 3 + iVar148 + iVar100;
                     iVar152 = iVar123 * 3 + iVar101 + iVar104;
                     iVar109 = ( (uint)bStack_e6 + (uint)bStack_e7 + (uint)local_e8 + (uint)bStack_e5 ) * 0x10 + iVar147 * -2;
                     iVar110 = iVar109 * 0x10;
                     if (iVar152 < iVar147) {
                        iVar110 = iVar109 * -0x10;
                        iVar109 = iVar147 * 2 + iVar152 * -2;
                     }
 else {
                        iVar109 = iVar152 * 2 + iVar147 * -2;
                     }

                     if (iVar110 == iVar109 * 8 || SBORROW4(iVar110, iVar109 * 8) != iVar110 + iVar109 * -8 < 0) {
                        uVar134 = ( uint )(iVar109 * 3 < iVar110) << 0x18;
                     }
 else {
                        uVar134 = 0x2000000;
                     }

                     if (iVar109 * 0xd < iVar110) {
                        uVar134 = 0x3000000;
                     }

                     iVar152 = iVar118 + iVar144 + iVar148 + iVar100 * 3;
                     iVar148 = iVar1 + iVar150 + iVar101 + iVar104 * 3;
                     iVar109 = ( (uint)bStack_e2 + (uint)bStack_e3 + (uint)bStack_e4 + (uint)bStack_e1 ) * 0x10 - iVar152;
                     iVar110 = iVar109 * 0x10;
                     if (iVar148 < iVar152) {
                        iVar110 = iVar109 * -0x10;
                        iVar148 = iVar152 - iVar148;
                     }
 else {
                        iVar148 = iVar148 - iVar152;
                     }

                     if (iVar110 == iVar148 * 8 || SBORROW4(iVar110, iVar148 * 8) != iVar110 + iVar148 * -8 < 0) {
                        uVar139 = ( uint )(iVar148 * 3 < iVar110) << 0x1a;
                     }
 else {
                        uVar139 = 0x8000000;
                     }

                     if (iVar148 * 0xd < iVar110) {
                        uVar139 = 0xc000000;
                     }

                     iVar109 = ( (uint)bStack_ee + (uint)bStack_ef + (uint)bStack_f0 + (uint)bStack_ed ) * 0x10 + iVar99 * -0x10;
                     iVar110 = iVar109 * 0x10;
                     if (iVar103 < iVar99) {
                        iVar110 = iVar109 * -0x10;
                        iVar109 = iVar99 * 0x10 + iVar103 * -0x10;
                     }
 else {
                        iVar109 = iVar103 * 0x10 + iVar99 * -0x10;
                     }

                     if (iVar110 == iVar109 * 8 || SBORROW4(iVar110, iVar109 * 8) != iVar110 + iVar109 * -8 < 0) {
                        uVar140 = ( uint )(iVar109 * 3 < iVar110) << 0x14;
                     }
 else {
                        uVar140 = 0x200000;
                     }

                     if (iVar109 * 0xd < iVar110) {
                        uVar140 = 0x300000;
                     }

                     iVar148 = iVar114 + iVar117;
                     iVar109 = iVar115 + iVar126;
                     iVar110 = ( (uint)bStack_ea + (uint)bStack_eb + (uint)bStack_ec + (uint)bStack_e9 ) * 0x10 + iVar148 * -4;
                     iVar152 = iVar110 * 0x10;
                     if (iVar109 < iVar148) {
                        iVar152 = iVar110 * -0x10;
                        iVar109 = iVar148 * 4 + iVar109 * -4;
                     }
 else {
                        iVar109 = iVar109 * 4 + iVar148 * -4;
                     }

                     if (iVar152 == iVar109 * 8 || SBORROW4(iVar152, iVar109 * 8) != iVar152 + iVar109 * -8 < 0) {
                        uVar141 = ( uint )(iVar109 * 3 < iVar152) << 0x16;
                     }
 else {
                        uVar141 = 0x800000;
                     }

                     if (iVar109 * 0xd < iVar152) {
                        uVar141 = 0xc00000;
                     }

                     iVar117 = iVar117 + iVar100;
                     iVar126 = iVar126 + iVar104;
                     iVar109 = ( (uint)bStack_de + (uint)bStack_df + (uint)bStack_e0 + (uint)bStack_dd ) * 0x10 + iVar117 * -4;
                     iVar110 = iVar109 * 0x10;
                     if (iVar126 < iVar117) {
                        iVar152 = iVar117 * 4 + iVar126 * -4;
                        iVar110 = iVar109 * -0x10;
                     }
 else {
                        iVar152 = iVar126 * 4 + iVar117 * -4;
                     }

                     if (iVar110 == iVar152 * 8 || SBORROW4(iVar110, iVar152 * 8) != iVar110 + iVar152 * -8 < 0) {
                        uVar122 = ( uint )(iVar152 * 3 < iVar110) << 0x1c;
                     }
 else {
                        uVar122 = 0x20000000;
                     }

                     if (iVar152 * 0xd < iVar110) {
                        uVar122 = 0x30000000;
                     }

                     iVar109 = iVar144 + iVar114 * 3 + iVar100 * 3 + iVar116;
                     iVar110 = iVar150 + iVar115 * 3 + iVar104 * 3 + iStack_140;
                     iVar152 = ( (uint)bStack_da + (uint)bStack_db + (uint)bStack_dc + (uint)bStack_d9 ) * 0x10 - iVar109;
                     iVar148 = iVar152 * 0x10;
                     if (iVar110 < iVar109) {
                        iVar110 = iVar109 - iVar110;
                        iVar148 = iVar152 * -0x10;
                     }
 else {
                        iVar110 = iVar110 - iVar109;
                     }

                     if (iVar148 == iVar110 * 8 || SBORROW4(iVar148, iVar110 * 8) != iVar148 + iVar110 * -8 < 0) {
                        uVar125 = ( uint )(iVar110 * 3 < iVar148) << 0x1e;
                     }
 else {
                        uVar125 = 0x80000000;
                     }

                     aiStack_198[0] = iVar98;
                     if (iVar110 * 0xd < iVar148) {
                        uVar125 = 0xc0000000;
                     }

                     aiStack_158[0] = iVar102;
                     *puVar3 = uVar122 | uVar141 | uVar131 | uVar138 | uVar130 | uVar135 | uVar151 | uVar111 | uVar132 | uVar146 | uVar137 | uVar133 | uVar134 | uVar139 | uVar140 | uVar125;
                     aiStack_198[2] = iVar100;
                     aiStack_158[2] = iVar104;
                     aiStack_198[1] = iVar99;
                     iStack_188 = iVar112;
                     iStack_184 = iVar114;
                     iStack_180 = iVar116;
                     aiStack_158[1] = iVar103;
                     iStack_148 = iVar113;
                     iStack_144 = iVar115;
                  }
 while ( uVar121 != param_3 );
                  local_228 = local_228 + param_3;
               }

               uVar106 = uVar106 + 1;
               if ((int)uVar153 <= (int)uVar106) goto LAB_00116106;
               uVar143 = ( &g_pvrtc_swizzle_table )[(int)uVar106 >> 8];
               uVar128 = ( &g_pvrtc_swizzle_table )[uVar106 & 0xff];
            }
 while ( true );
         }

         iVar109 = 0x1f;
         if (uVar124 != 0) {
            for (; uVar124 >> iVar109 == 0; iVar109 = iVar109 + -1) {}
         }

         if (iVar109 + 1U <= uVar153) {
            uVar153 = iVar109 + 1U;
         }

         bStack_1e8 = (byte)uVar153;
         bStack_1f4 = bStack_1e8 * '\x02';
         uStack_1f8 = ( 1 << ( bStack_1f4 & 0x1f ) ) - 1;
         uVar153 = param_4;
         if (0 < (int)param_4) goto LAB_00114fd5;
      }

      LAB_00116106:uVar119 = 1;
      LAB_00114b5f:if (local_280 != (void*)0x0) {
         free(local_280);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar119;
}
/* basist::unpack_uastc(basist::unpacked_uastc_block const&, basist::color32*, bool) */void basist::unpack_uastc(unpacked_uastc_block *param_1, color32 *param_2, bool param_3) {
   unpack_uastc(*(uint*)( param_1 + 0x68 ), *(uint*)( param_1 + 0x6c ), (color32*)( param_1 + 0x70 ), (astc_block_desc*)param_1, param_2, param_3);
   return;
}
/* basist::unpack_uastc(basist::uastc_block const&, basist::color32*, bool) */void basist::unpack_uastc(uastc_block *param_1, color32 *param_2, bool param_3) {
   char cVar1;
   long in_FS_OFFSET;
   unpacked_uastc_block auStack_b8[104];
   uint local_50;
   uint local_4c;
   color32 local_48[40];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar1 = unpack_uastc(param_1, auStack_b8, false, false);
   if (cVar1 != '\0') {
      unpack_uastc(local_50, local_4c, local_48, (astc_block_desc*)auStack_b8, param_2, param_3);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* basist::transcode_uastc_to_astc(basist::uastc_block const&, void*) */ulong basist::transcode_uastc_to_astc(uastc_block *param_1, void *param_2) {
   ulong uVar1;
   long in_FS_OFFSET;
   unpacked_uastc_block local_b8[104];
   uint local_50;
   color32 local_48[40];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = unpack_uastc(param_1, local_b8, true, false);
   if ((char)uVar1 != '\0') {
      if (local_50 == 8) {
         pack_astc_solid_block(param_2, local_48);
         uVar1 = uVar1 & 0xff;
      }
 else {
         uVar1 = pack_astc_block((uint*)param_2, (astc_block_desc*)local_b8, local_50);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WARNING: Restarted to delay deadcode elimination for space: stack *//* basist::transcode_uastc_to_bc7(basist::unpacked_uastc_block const&,
   basist::bc7_optimization_results&) */undefined8 basist::transcode_uastc_to_bc7(unpacked_uastc_block *param_1, bc7_optimization_results *param_2) {
   int iVar1;
   int iVar2;
   byte bVar3;
   color_quad_u8 cVar4;
   color_quad_u8 cVar5;
   unpacked_uastc_block uVar6;
   byte bVar7;
   uint uVar8;
   int iVar9;
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   float fVar14;
   float fVar15;
   undefined4 uVar16;
   bc7_optimization_results bVar17;
   uint uVar18;
   uint uVar19;
   int iVar20;
   undefined8 uVar21;
   uint uVar22;
   ulong uVar23;
   ulong uVar24;
   int iVar25;
   long lVar26;
   bc7_optimization_results *pbVar27;
   bc7_optimization_results *pbVar28;
   bc7_optimization_results *pbVar29;
   ulong uVar30;
   byte bVar31;
   long lVar32;
   uint uVar33;
   undefined8 *puVar34;
   byte *pbVar35;
   long lVar36;
   long in_FS_OFFSET;
   bool bVar37;
   float fVar38;
   undefined1 auVar39[16];
   undefined1 auVar40[16];
   undefined1 auVar41[16];
   undefined1 auVar42[16];
   undefined1 auVar43[16];
   undefined1 auVar44[16];
   undefined1 auVar45[16];
   undefined1 auVar46[16];
   undefined1 auVar47[16];
   float fVar48;
   float fVar49;
   undefined1 auVar50[16];
   undefined1 auVar51[16];
   float fVar52;
   float fVar53;
   undefined4 local_a4;
   undefined4 local_a0;
   byte local_9c[4];
   undefined4 local_98;
   undefined4 local_94;
   undefined8 local_90;
   undefined1 local_88[12];
   float fStack_7c;
   undefined1 local_78[12];
   float fStack_6c;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)param_2 = 0;
   *(undefined8*)( param_2 + 0x58 ) = 0;
   puVar34 = (undefined8*)( ( ulong )(param_2 + 8) & 0xfffffffffffffff8 );
   for (uVar23 = ( ulong )(( (int)param_2 - (int)(undefined8*)( ( ulong )(param_2 + 8) & 0xfffffffffffffff8 ) ) + 0x60U >> 3); uVar16 = _LC31,uVar23 != 0; uVar23 = uVar23 - 1) {
      *puVar34 = 0;
      puVar34 = puVar34 + 1;
   }

   uVar18 = *(uint*)( param_1 + 0x68 );
   uVar23 = (ulong)uVar18;
   bVar3 = g_uastc_mode_endpoint_ranges[uVar23];
   uVar30 = (ulong)bVar3;
   bVar31 = g_uastc_mode_comps[uVar23];
   uVar22 = (uint)bVar31;
   switch (uVar23) {
      case 0:
      case 5:
switchD_00116304_caseD_0:
    *(undefined4 *)param_2 = 6;
    if (uVar22 == 2) {
      bVar31 = g_astc_unquant[(ulong)CONCAT11(bVar3,param_1[0x15]) * 2];
      bVar7 = g_astc_unquant[(ulong)CONCAT11(bVar3,param_1[0x16]) * 2];
      auVar50._0_4_ = (float)bVar31;
      auVar50._4_4_ = (float)bVar31;
      auVar50._8_4_ = (float)bVar31;
      auVar50._12_4_ = (float)(byte)g_astc_unquant[(ulong)CONCAT11(bVar3,param_1[0x17]) * 2];
      auVar51._4_4_ = _LC3;
      auVar51._0_4_ = _LC3;
      auVar51._8_4_ = _LC3;
      auVar51._12_4_ = _LC3;
      _local_88 = divps(auVar50,auVar51);
      auVar47._0_4_ = (float)bVar7;
      auVar47._4_4_ = (float)bVar7;
      auVar47._8_4_ = (float)bVar7;
      auVar47._12_4_ = (float)(byte)g_astc_unquant[(ulong)CONCAT11(bVar3,param_1[0x18]) * 2];
      _local_78 = divps(auVar47,auVar51);
LAB_00117225:
      determine_unique_pbits
                (4,7,(float *)local_88,(float *)local_78,(color_quad_u8 *)&local_98,
                 (color_quad_u8 *)&local_94,(uint *)&local_90);
      *(undefined4 *)(param_2 + 0x28) = local_98;
      *(undefined4 *)(param_2 + 0x34) = local_94;
    }
    else {
      auVar12._8_4_ = _LC31;
      auVar12._0_8_ = __LC95;
      auVar12._12_4_ = _UNK_001812ec;
      auVar43._0_4_ = (float)(byte)g_astc_unquant[(ulong)CONCAT11(bVar3,param_1[0x15]) * 2];
      auVar43._4_4_ = (float)(byte)g_astc_unquant[(ulong)CONCAT11(bVar3,param_1[0x17]) * 2];
      auVar43._8_8_ = 0;
      auVar41 = divps(auVar43,auVar12);
      local_88._8_4_ = (float)(byte)g_astc_unquant[(ulong)CONCAT11(bVar3,param_1[0x19]) * 2] / _LC3;
      local_88._0_8_ = auVar41._0_8_;
      auVar44._0_4_ = (float)(byte)g_astc_unquant[(ulong)CONCAT11(bVar3,param_1[0x16]) * 2];
      auVar44._4_4_ = (float)(byte)g_astc_unquant[(ulong)CONCAT11(bVar3,param_1[0x18]) * 2];
      auVar44._8_8_ = 0;
      auVar41 = divps(auVar44,auVar12);
      local_78._8_4_ = (float)(byte)g_astc_unquant[(ulong)CONCAT11(bVar3,param_1[0x1a]) * 2] / _LC3;
      local_78._0_8_ = auVar41._0_8_;
      uVar22 = (uint)bVar31;
      if (uVar22 == 4) {
        fStack_7c = (float)(byte)g_astc_unquant[(ulong)CONCAT11(bVar3,param_1[0x1b]) * 2] / _LC3;
        fStack_6c = (float)(byte)g_astc_unquant[(ulong)CONCAT11(bVar3,param_1[0x1c]) * 2] / _LC3;
        goto LAB_00117225;
      }
      fStack_6c = (float)_LC31;
      fStack_7c = (float)_LC31;
      determine_unique_pbits
                (uVar22,7,(float *)local_88,(float *)local_78,(color_quad_u8 *)&local_98,
                 (color_quad_u8 *)&local_94,(uint *)&local_90);
      *(undefined4 *)(param_2 + 0x28) = local_98;
      *(undefined4 *)(param_2 + 0x34) = local_94;
      if (uVar22 == 3) {
        param_2[0x2b] = (bc7_optimization_results)0x7f;
        param_2[0x37] = (bc7_optimization_results)0x7f;
      }
    }
    *(undefined8 *)(param_2 + 0x40) = local_90;
    if (uVar18 == 0x12) {
      lVar36 = 0;
      local_68 = __LC93;
      uStack_60 = _UNK_001812c8;
      local_58 = __LC94;
      uStack_50 = _UNK_001812d8;
      do {
        param_2[lVar36 + 8] =
             *(bc7_optimization_results *)((long)&local_68 + (ulong)(byte)param_1[lVar36 + 0x27]);
        lVar36 = lVar36 + 1;
      } while (lVar36 != 0x10);
    }
    else if (uVar18 == 0xe) {
      local_68 = CONCAT44(local_68._4_4_,0xf0a0500);
      lVar36 = 0;
      do {
        param_2[lVar36 + 8] =
             *(bc7_optimization_results *)((long)&local_68 + (ulong)(byte)param_1[lVar36 + 0x27]);
        lVar36 = lVar36 + 1;
      } while (lVar36 != 0x10);
    }
    else if ((uVar18 == 5) || (lVar36 = 0, uVar18 == 0xc)) {
      local_68 = 0xf0d0b0906040200;
      lVar36 = 0;
      do {
        param_2[lVar36 + 8] =
             *(bc7_optimization_results *)((long)&local_68 + (ulong)(byte)param_1[lVar36 + 0x27]);
        lVar36 = lVar36 + 1;
      } while (lVar36 != 0x10);
    }
    else {
      do {
        param_2[lVar36 + 8] = *(bc7_optimization_results *)(param_1 + lVar36 + 0x27);
        lVar36 = lVar36 + 1;
      } while (lVar36 != 0x10);
    }
    break;
      case 1:
    *(undefined4 *)param_2 = 3;
    auVar13._8_4_ = _LC31;
    auVar13._0_8_ = __LC95;
    auVar13._12_4_ = _UNK_001812ec;
    local_98 = 0;
    local_94 = 0;
    auVar45._0_4_ = (float)(byte)param_1[0x15];
    auVar45._4_4_ = (float)(byte)param_1[0x17];
    auVar45._8_8_ = 0;
    auVar41 = divps(auVar45,auVar13);
    local_88._8_4_ = (float)(byte)param_1[0x19] / _LC3;
    local_88._0_8_ = auVar41._0_8_;
    fStack_7c = (float)_LC31;
    auVar46._0_4_ = (float)(byte)param_1[0x16];
    auVar46._4_4_ = (float)(byte)param_1[0x18];
    auVar46._8_8_ = 0;
    auVar41 = divps(auVar46,auVar13);
    local_78._8_4_ = (float)(byte)param_1[0x1a] / _LC3;
    local_78._0_8_ = auVar41._0_8_;
    fStack_6c = (float)_LC31;
    determine_unique_pbits
              (3,7,(float *)local_88,(float *)local_78,(color_quad_u8 *)&local_98,
               (color_quad_u8 *)&local_94,(uint *)&local_90);
    lVar36 = 0;
    do {
      cVar4 = ((color_quad_u8 *)&local_98)[lVar36];
      cVar5 = ((color_quad_u8 *)&local_94)[lVar36];
      *(color_quad_u8 *)(param_2 + lVar36 + 0x28) = cVar4;
      *(color_quad_u8 *)(param_2 + lVar36 + 0x34) = cVar5;
      *(color_quad_u8 *)(param_2 + lVar36 + 0x2c) = cVar4;
      *(color_quad_u8 *)(param_2 + lVar36 + 0x38) = cVar5;
      lVar36 = lVar36 + 1;
    } while (lVar36 != 3);
    lVar36 = 0;
    *(undefined8 *)(param_2 + 0x40) = local_90;
    *(undefined8 *)(param_2 + 0x48) = local_90;
    do {
      param_2[lVar36 + 8] = *(bc7_optimization_results *)(param_1 + lVar36 + 0x27);
      lVar36 = lVar36 + 1;
    } while (lVar36 != 0x10);
    break;
      case 2:
    *(undefined4 *)param_2 = 1;
    fVar15 = _LC3;
    fVar48 = _LC90;
    fVar14 = _LC2;
    uVar18 = 0;
    fStack_7c = (float)_LC31;
    fStack_6c = (float)_LC31;
    *(uint *)(param_2 + 4) =
         (uint)(byte)g_astc_bc7_common_partitions2[(ulong)*(uint *)(param_1 + 0x6c) * 6];
    bVar3 = g_astc_bc7_common_partitions2[(ulong)*(uint *)(param_1 + 0x6c) * 6 + 4];
    while( true ) {
      lVar36 = 0;
      uVar22 = -uVar18 & 6;
      do {
        uVar23 = (ulong)uVar22;
        uVar8 = uVar22 + 1;
        uVar22 = uVar22 + 2;
        uVar6 = param_1[(ulong)uVar8 + 0x15];
        *(float *)(local_88 + lVar36) =
             (float)((uint)(byte)param_1[uVar23 + 0x15] << 4 | (uint)(byte)param_1[uVar23 + 0x15]) /
             fVar15;
        *(float *)(local_78 + lVar36) = (float)((uint)(byte)uVar6 << 4 | (uint)(byte)uVar6) / fVar15
        ;
        lVar36 = lVar36 + 4;
      } while (lVar36 != 0xc);
      local_a4 = 0;
      iVar20 = 0;
      iVar25 = 0;
      local_a0 = 0;
      fVar53 = _LC1;
      while( true ) {
        iVar1 = iVar25 + 0x7e;
        lVar36 = 0;
        do {
          fVar52 = *(float *)(local_78 + lVar36 * 4);
          iVar2 = iVar25 + (int)((*(float *)(local_88 + lVar36 * 4) * fVar48 - (float)iVar25) *
                                 fVar14 + fVar14) * 2;
          iVar9 = iVar1;
          if (iVar2 <= iVar1) {
            iVar9 = iVar2;
          }
          bVar31 = (byte)iVar9;
          if (iVar2 < iVar25) {
            bVar31 = (byte)iVar25;
          }
          local_9c[lVar36] = bVar31;
          iVar2 = iVar25 + (int)((fVar52 * fVar48 - (float)iVar25) * fVar14 + fVar14) * 2;
          iVar9 = iVar1;
          if (iVar2 <= iVar1) {
            iVar9 = iVar2;
          }
          bVar31 = (byte)iVar9;
          if (iVar2 < iVar25) {
            bVar31 = (byte)iVar25;
          }
          *(byte *)((long)&local_98 + lVar36) = bVar31;
          lVar36 = lVar36 + 1;
        } while (lVar36 != 4);
        lVar36 = 0;
        do {
          *(byte *)((long)&local_94 + lVar36) =
               local_9c[lVar36] * '\x02' | local_9c[lVar36] >> 6 & 1;
          local_88[lVar36 + -8] =
               *(byte *)((long)&local_98 + lVar36) * '\x02' |
               *(byte *)((long)&local_98 + lVar36) >> 6 & 1;
          lVar36 = lVar36 + 1;
        } while (lVar36 != 4);
        lVar36 = 0;
        fVar52 = 0.0;
        do {
          fVar38 = (float)*(byte *)((long)&local_94 + lVar36) / fVar15 -
                   *(float *)(local_88 + lVar36 * 4);
          fVar49 = (float)(byte)local_88[lVar36 + -8] / fVar15 - *(float *)(local_78 + lVar36 * 4);
          lVar36 = lVar36 + 1;
          fVar52 = fVar52 + fVar38 * fVar38 + fVar49 * fVar49;
        } while (lVar36 != 3);
        if (fVar52 < fVar53) {
          lVar36 = 0;
          do {
            *(byte *)((long)&local_a4 + lVar36) = local_9c[lVar36] >> 1;
            local_9c[lVar36 + -4] = *(byte *)((long)&local_98 + lVar36) >> 1;
            lVar36 = lVar36 + 1;
            fVar53 = fVar52;
            iVar20 = iVar25;
          } while (lVar36 != 4);
        }
        if (iVar25 != 0) break;
        iVar25 = 1;
      }
      uVar23 = (ulong)(uVar18 ^ bVar3);
      *(undefined2 *)(param_2 + uVar23 * 4 + 0x28) = (undefined2)local_a4;
      (param_2 + uVar23 * 4 + 0x28)[2] = local_a4._2_1_;
      *(undefined2 *)(param_2 + uVar23 * 4 + 0x34) = (undefined2)local_a0;
      (param_2 + uVar23 * 4 + 0x34)[2] = local_a0._2_1_;
      *(int *)(param_2 + uVar23 * 8 + 0x40) = iVar20;
      if (uVar18 != 0) break;
      uVar18 = 1;
    }
    lVar36 = 0;
    do {
      param_2[lVar36 + 8] = *(bc7_optimization_results *)(param_1 + lVar36 + 0x27);
      lVar36 = lVar36 + 1;
    } while (lVar36 != 0x10);
    break;
      case 3:
    iVar20 = 0;
    *(undefined4 *)param_2 = 2;
    *(uint *)(param_2 + 4) =
         (uint)(byte)g_astc_bc7_common_partitions3[(ulong)*(uint *)(param_1 + 0x6c) * 6];
    pbVar35 = g_astc_to_bc7_partition_index_perm_tables +
              (ulong)(byte)g_astc_bc7_common_partitions3[(ulong)*(uint *)(param_1 + 0x6c) * 6 + 4] *
              3;
    do {
      bVar31 = *pbVar35;
      uVar18 = iVar20 * 2;
      pbVar27 = param_2 + (ulong)bVar31 * 4;
      do {
        uVar23 = (ulong)uVar18;
        pbVar28 = pbVar27 + 1;
        uVar22 = uVar18 + 1;
        uVar18 = uVar18 + 2;
        bVar7 = g_astc_unquant[(ulong)CONCAT11(bVar3,param_1[(ulong)uVar22 + 0x15]) * 2];
        pbVar27[0x28] =
             SUB41((((uint)(byte)g_astc_unquant[(ulong)CONCAT11(bVar3,param_1[uVar23 + 0x15]) * 2] *
                     0x20 - (uint)(byte)g_astc_unquant
                                        [(ulong)CONCAT11(bVar3,param_1[uVar23 + 0x15]) * 2]) + 0x7f)
                   / 0xff,0);
        pbVar27[0x34] = SUB81((ulong)(((uint)bVar7 * 0x20 - (uint)bVar7) + 0x7f) / 0xff,0);
        pbVar27 = pbVar28;
      } while (pbVar28 != param_2 + (ulong)bVar31 * 4 + 3);
      iVar20 = iVar20 + 3;
      pbVar35 = pbVar35 + 1;
    } while (iVar20 != 9);
    lVar36 = 0;
    do {
      param_2[lVar36 + 8] = *(bc7_optimization_results *)(param_1 + lVar36 + 0x27);
      lVar36 = lVar36 + 1;
    } while (lVar36 != 0x10);
    break;
      case 4:
    *(undefined4 *)param_2 = 3;
    fVar14 = _LC3;
    fStack_7c = (float)uVar16;
    fStack_6c = (float)uVar16;
    *(uint *)(param_2 + 4) =
         (uint)(byte)g_astc_bc7_common_partitions2[(ulong)*(uint *)(param_1 + 0x6c) * 6];
    bVar31 = g_astc_bc7_common_partitions2[(ulong)*(uint *)(param_1 + 0x6c) * 6 + 4];
    uVar18 = 0;
    while( true ) {
      lVar36 = 0;
      uVar22 = -uVar18 & 6;
      do {
        uVar23 = (ulong)uVar22;
        uVar8 = uVar22 + 1;
        uVar22 = uVar22 + 2;
        bVar7 = g_astc_unquant[(ulong)CONCAT11(bVar3,param_1[(ulong)uVar8 + 0x15]) * 2];
        *(float *)((long)local_88 + lVar36) =
             (float)(byte)g_astc_unquant[(ulong)CONCAT11(bVar3,param_1[uVar23 + 0x15]) * 2] / fVar14
        ;
        *(float *)((long)local_78 + lVar36) = (float)bVar7 / fVar14;
        lVar36 = lVar36 + 4;
      } while (lVar36 != 0xc);
      local_94 = 0;
      local_90 = 0;
      local_98 = 0;
      determine_unique_pbits
                (3,7,(float *)local_88,(float *)local_78,(color_quad_u8 *)&local_98,
                 (color_quad_u8 *)&local_94,(uint *)&local_90);
      uVar23 = (ulong)(bVar31 ^ uVar18);
      *(undefined2 *)(param_2 + uVar23 * 4 + 0x28) = (undefined2)local_98;
      (param_2 + uVar23 * 4 + 0x28)[2] = local_98._2_1_;
      *(undefined2 *)(param_2 + uVar23 * 4 + 0x34) = (undefined2)local_94;
      (param_2 + uVar23 * 4 + 0x34)[2] = local_94._2_1_;
      param_2[uVar23 * 4 + 0x2b] = (bc7_optimization_results)0x7f;
      param_2[uVar23 * 4 + 0x37] = (bc7_optimization_results)0x7f;
      *(undefined8 *)(param_2 + uVar23 * 8 + 0x40) = local_90;
      if (uVar18 != 0) break;
      uVar18 = 1;
    }
    lVar36 = 0;
    do {
      param_2[lVar36 + 8] = *(bc7_optimization_results *)(param_1 + lVar36 + 0x27);
      lVar36 = lVar36 + 1;
    } while (lVar36 != 0x10);
    break;
      case 6:
switchD_00116304_caseD_6:
    *(undefined4 *)param_2 = 5;
    lVar36 = (ulong)bVar3 * 0x100;
    *(uint *)(param_2 + 0x5c) = *(int *)(param_1 + 0x10) + 1U & 3;
    uVar23 = 0;
    if (uVar22 == 2) {
      bVar17 = SUB81((ulong)(((byte)g_astc_unquant[(ulong)CONCAT11(bVar3,param_1[0x15]) * 2] + 1) *
                            0x7f) / 0xff,0);
      param_2[0x28] = bVar17;
      bVar3 = g_astc_unquant[((ulong)(byte)param_1[0x16] + lVar36) * 2];
      param_2[0x29] = bVar17;
      param_2[0x2a] = bVar17;
      bVar17 = SUB41(((bVar3 + 1) * 0x7f) / 0xff,0);
      param_2[0x34] = bVar17;
      param_2[0x35] = bVar17;
      param_2[0x36] = bVar17;
      param_2[0x2b] =
           *(bc7_optimization_results *)(g_astc_unquant + ((ulong)(byte)param_1[0x17] + lVar36) * 2)
      ;
      param_2[0x37] =
           *(bc7_optimization_results *)(g_astc_unquant + (lVar36 + (ulong)(byte)param_1[0x18]) * 2)
      ;
    }
    else {
LAB_00116b3d:
      do {
        uVar8 = *(uint *)(param_1 + 0x10);
        uVar19 = (uint)uVar23;
        uVar30 = uVar23 & 0xffffffff;
        if (uVar8 == uVar19) {
          if (uVar19 < uVar22) {
            uVar33 = (uint)(byte)g_astc_unquant
                                 [(ulong)CONCAT11(bVar3,param_1[uVar23 * 2 + 0x15]) * 2];
            uVar19 = (uint)(byte)g_astc_unquant
                                 [(ulong)CONCAT11(bVar3,param_1[uVar23 * 2 + 0x16]) * 2];
            uVar30 = 3;
          }
          else {
            uVar19 = 0xffffffff;
            uVar33 = 0xffffffff;
            uVar30 = 3;
          }
        }
        else {
          if (uVar23 == 3) {
            if (uVar22 < 4) {
              uVar19 = 0xff;
              uVar33 = 0xff;
            }
            else {
              uVar33 = (uint)(byte)g_astc_unquant[(ulong)CONCAT11(bVar3,param_1[0x1b]) * 2];
              uVar19 = (uint)(byte)g_astc_unquant[(ulong)CONCAT11(bVar3,param_1[0x1c]) * 2];
            }
            uVar30 = (ulong)uVar8;
            if (2 < uVar8) goto LAB_00116ba9;
          }
          else {
            if (uVar22 <= uVar19) {
              param_2[uVar30 + 0x28] = (bc7_optimization_results)0x7f;
              uVar23 = uVar23 + 1;
              param_2[uVar30 + 0x34] = (bc7_optimization_results)0x7f;
              goto LAB_00116b3d;
            }
            uVar33 = (uint)(byte)g_astc_unquant
                                 [(ulong)CONCAT11(bVar3,param_1[uVar23 * 2 + 0x15]) * 2];
            uVar19 = (uint)(byte)g_astc_unquant
                                 [(ulong)CONCAT11(bVar3,param_1[uVar23 * 2 + 0x16]) * 2];
          }
          uVar33 = ((uVar33 + 1) * 0x7f) / 0xff;
          uVar19 = ((uVar19 + 1) * 0x7f) / 0xff;
        }
LAB_00116ba9:
        uVar23 = uVar23 + 1;
        param_2[uVar30 + 0x28] = SUB41(uVar33,0);
        param_2[uVar30 + 0x34] = SUB41(uVar19,0);
      } while (uVar23 != 4);
    }
    lVar36 = 0;
    if (uVar18 == 0xd) {
      do {
        param_2[lVar36 + 8] =
             (bc7_optimization_results)
             (-(param_1[lVar36 * 2 + 0x27] != (unpacked_uastc_block)0x0) & 3);
        param_2[lVar36 + 0x18] =
             (bc7_optimization_results)
             (-(param_1[lVar36 * 2 + 0x28] != (unpacked_uastc_block)0x0) & 3);
        lVar36 = lVar36 + 1;
      } while (lVar36 != 0x10);
    }
    else {
      do {
        param_2[lVar36 + 8] = *(bc7_optimization_results *)(param_1 + lVar36 * 2 + 0x27);
        param_2[lVar36 + 0x18] = *(bc7_optimization_results *)(param_1 + lVar36 * 2 + 0x28);
        lVar36 = lVar36 + 1;
      } while (lVar36 != 0x10);
    }
    break;
      case 7:
    *(undefined4 *)param_2 = 2;
    uVar18 = 0;
    pbVar27 = param_2 + 3;
    lVar36 = 0x80808081;
    lVar32 = uVar30 << 8;
    *(uint *)(param_2 + 4) =
         (uint)(byte)g_bc7_3_astc2_common_partitions[(ulong)*(uint *)(param_1 + 0x6c) * 6];
    uVar23 = (ulong)(byte)g_bc7_3_astc2_common_partitions[(ulong)*(uint *)(param_1 + 0x6c) * 6 + 4];
    do {
      iVar20 = bc7_convert_partition_index_3_to_2(uVar18,(uint)uVar23);
      uVar22 = iVar20 * 6;
      pbVar28 = pbVar27 + -3;
      do {
        pbVar29 = pbVar28;
        pbVar29[0x28] =
             SUB81((ulong)(((uint)(byte)g_astc_unquant
                                        [((ulong)(byte)param_1[(ulong)uVar22 + 0x15] + lVar32) * 2]
                            * 0x20 - (uint)(byte)g_astc_unquant
                                                 [((ulong)(byte)param_1[(ulong)uVar22 + 0x15] +
                                                  lVar32) * 2]) + 0x7f) * lVar36 >> 0x27,0);
        uVar8 = uVar22 + 1;
        uVar22 = uVar22 + 2;
        pbVar29[0x34] =
             SUB81((ulong)(((uint)(byte)g_astc_unquant
                                        [((ulong)(byte)param_1[(ulong)uVar8 + 0x15] + lVar32) * 2] *
                            0x20 - (uint)(byte)g_astc_unquant
                                               [((ulong)(byte)param_1[(ulong)uVar8 + 0x15] + lVar32)
                                                * 2]) + 0x7f) * lVar36 >> 0x27,0);
        pbVar28 = pbVar29 + 1;
      } while (pbVar29 + 1 != pbVar27);
      uVar18 = uVar18 + 1;
      pbVar27 = pbVar29 + 5;
    } while (uVar18 != 3);
    lVar36 = 0;
    do {
      param_2[lVar36 + 8] = *(bc7_optimization_results *)(param_1 + lVar36 + 0x27);
      lVar36 = lVar36 + 1;
    } while (lVar36 != 0x10);
    break;
      case 8:
    uVar22 = (uint)*(ushort *)(&DAT_00122d44 + (ulong)(byte)param_1[0x70] * 8) +
             (uint)*(ushort *)(&DAT_00122d44 + (ulong)(byte)param_1[0x71] * 8) +
             (uint)*(ushort *)(&DAT_00122d44 + (ulong)(byte)param_1[0x72] * 8) +
             (uint)*(ushort *)(&DAT_00122d44 + (ulong)(byte)param_1[0x73] * 8);
    uVar18 = (uint)(ushort)(&g_bc7_mode_6_optimal_endpoints)[(ulong)(byte)param_1[0x70] * 4] +
             (uint)(ushort)(&g_bc7_mode_6_optimal_endpoints)[(ulong)(byte)param_1[0x71] * 4] +
             (uint)(ushort)(&g_bc7_mode_6_optimal_endpoints)[(ulong)(byte)param_1[0x72] * 4] +
             (uint)(ushort)(&g_bc7_mode_6_optimal_endpoints)[(ulong)(byte)param_1[0x73] * 4];
    if ((uVar18 == 0) || (uVar22 == 0)) {
      bVar37 = uVar22 < uVar18;
      *(undefined4 *)param_2 = 6;
      lVar36 = 0;
      do {
        param_2[lVar36 + 0x28] =
             *(bc7_optimization_results *)
              (&DAT_00122d42 + ((ulong)bVar37 + (ulong)(byte)param_1[lVar36 + 0x70] * 2) * 4);
        param_2[lVar36 + 0x34] =
             *(bc7_optimization_results *)
              (&DAT_00122d43 + ((ulong)bVar37 + (ulong)(byte)param_1[lVar36 + 0x70] * 2) * 4);
        lVar36 = lVar36 + 1;
      } while (lVar36 != 4);
      *(ulong *)(param_2 + 0x40) = (ulong)CONCAT14(bVar37,(uint)bVar37);
      uVar21 = _UNK_001812b8;
      *(undefined8 *)(param_2 + 8) = __LC92;
      *(undefined8 *)(param_2 + 0x10) = uVar21;
    }
    else {
      *(undefined4 *)param_2 = 5;
      lVar36 = 0;
      do {
        param_2[lVar36 + 0x28] =
             *(bc7_optimization_results *)(&DAT_00122942 + (ulong)(byte)param_1[lVar36 + 0x70] * 4);
        param_2[lVar36 + 0x34] =
             *(bc7_optimization_results *)(&DAT_00122943 + (ulong)(byte)param_1[lVar36 + 0x70] * 4);
        uVar21 = _UNK_001812a8;
        lVar36 = lVar36 + 1;
      } while (lVar36 != 3);
      *(undefined8 *)(param_2 + 8) = __LC91;
      *(undefined8 *)(param_2 + 0x10) = uVar21;
      bVar17 = *(bc7_optimization_results *)(param_1 + 0x73);
      param_2[0x2b] = bVar17;
      param_2[0x37] = bVar17;
    }
    break;
      default:
    if (uVar18 - 9 < 10) {
      uVar23 = 1L << ((byte)uVar18 & 0x3f);
      if ((uVar23 & 0x4d400) != 0) goto switchD_00116304_caseD_0;
      uVar24 = (ulong)((uint)uVar23 & 0x22800);
      if ((uVar23 & 0x22800) != 0) goto switchD_00116304_caseD_6;
      if ((uVar23 & 0x10200) != 0) {
        *(undefined4 *)param_2 = 7;
        fVar14 = _LC3;
        lVar32 = uVar30 * 0x100;
        *(uint *)(param_2 + 4) =
             (uint)(byte)g_astc_bc7_common_partitions2[(ulong)*(uint *)(param_1 + 0x6c) * 6];
        bVar3 = g_astc_bc7_common_partitions2[(ulong)*(uint *)(param_1 + 0x6c) * 6 + 4];
        uVar18 = 0;
        lVar36 = 0;
        while( true ) {
          if (uVar22 == 2) {
            lVar26 = uVar30 * 0x100;
            bVar31 = g_astc_unquant[((ulong)(byte)param_1[lVar36 * 4 + 0x15] + lVar26) * 2];
            fVar48 = (float)(byte)g_astc_unquant
                                  [((ulong)(byte)param_1[lVar36 * 4 + 0x16] + lVar26) * 2] / fVar14;
            local_78._8_4_ = fVar48;
            auVar41 = _local_78;
            local_78._4_4_ = fVar48;
            local_78._0_4_ = fVar48;
            stack0xffffffffffffff90 = auVar41._8_8_;
            auVar42._0_4_ = (float)bVar31;
            auVar42._4_4_ = (float)bVar31;
            auVar42._8_4_ = (float)bVar31;
            auVar42._12_4_ =
                 (float)(byte)g_astc_unquant[((ulong)(byte)param_1[lVar36 * 4 + 0x17] + lVar26) * 2]
            ;
            auVar41._4_12_ = _UNK_00181294;
            auVar41._0_4_ = _LC3;
            _local_88 = divps(auVar42,auVar41);
            bVar31 = g_astc_unquant[(lVar26 + (ulong)(byte)param_1[lVar36 * 4 + 0x18]) * 2];
          }
          else {
            auVar39._0_4_ =
                 (float)(byte)g_astc_unquant[((ulong)(byte)param_1[lVar36 * 8 + 0x15] + lVar32) * 2]
            ;
            auVar39._4_4_ =
                 (float)(byte)g_astc_unquant[((ulong)(byte)param_1[lVar36 * 8 + 0x17] + lVar32) * 2]
            ;
            auVar39._8_4_ =
                 (float)(byte)g_astc_unquant[((ulong)(byte)param_1[lVar36 * 8 + 0x19] + lVar32) * 2]
            ;
            auVar39._12_4_ =
                 (float)(byte)g_astc_unquant[((ulong)(byte)param_1[lVar36 * 8 + 0x1b] + lVar32) * 2]
            ;
            auVar10._4_12_ = _UNK_00181294;
            auVar10._0_4_ = _LC3;
            _local_88 = divps(auVar39,auVar10);
            auVar40._0_4_ =
                 (float)(byte)g_astc_unquant[((ulong)(byte)param_1[lVar36 * 8 + 0x16] + lVar32) * 2]
            ;
            auVar40._4_4_ =
                 (float)(byte)g_astc_unquant[((ulong)(byte)param_1[lVar36 * 8 + 0x18] + lVar32) * 2]
            ;
            auVar40._8_8_ = 0;
            auVar11._8_4_ = _LC31;
            auVar11._0_8_ = __LC95;
            auVar11._12_4_ = _UNK_001812ec;
            auVar41 = divps(auVar40,auVar11);
            local_78._8_4_ =
                 (float)(byte)g_astc_unquant[((ulong)(byte)param_1[lVar36 * 8 + 0x1a] + lVar32) * 2]
                 / fVar14;
            local_78._0_8_ = auVar41._0_8_;
            bVar31 = g_astc_unquant[((ulong)(byte)param_1[lVar36 * 8 + 0x1c] + lVar32) * 2];
          }
          fStack_6c = (float)bVar31 / fVar14;
          local_90 = 0;
          local_98 = 0;
          local_94 = 0;
          determine_unique_pbits
                    (4,5,(float *)local_88,(float *)local_78,(color_quad_u8 *)&local_98,
                     (color_quad_u8 *)&local_94,(uint *)&local_90);
          lVar26 = (ulong)(uVar18 ^ bVar3) + 8;
          *(undefined4 *)(param_2 + lVar26 * 4 + 8) = local_98;
          *(undefined4 *)(param_2 + (ulong)(uVar18 ^ bVar3) * 4 + 0x34) = local_94;
          *(undefined8 *)(param_2 + lVar26 * 8) = local_90;
          if (lVar36 != 0) break;
          lVar36 = 1;
          uVar18 = 1;
        }
        do {
          param_2[uVar24 + 8] = *(bc7_optimization_results *)(param_1 + uVar24 + 0x27);
          uVar24 = uVar24 + 1;
        } while (uVar24 != 0x10);
        break;
      }
    }
    uVar21 = 0;
    goto LAB_001166b5;
   }

   uVar21 = 1;
   LAB_001166b5:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar21;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* basist::transcode_uastc_to_bc7(basist::uastc_block const&, basist::bc7_optimization_results&) */void basist::transcode_uastc_to_bc7(uastc_block *param_1, bc7_optimization_results *param_2) {
   char cVar1;
   long in_FS_OFFSET;
   unpacked_uastc_block auStack_b8[152];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar1 = unpack_uastc(param_1, auStack_b8, false, false);
   if (cVar1 != '\0') {
      transcode_uastc_to_bc7(auStack_b8, param_2);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* basist::transcode_uastc_to_bc7(basist::uastc_block const&, void*) */undefined4 basist::transcode_uastc_to_bc7(uastc_block *param_1, void *param_2) {
   char cVar1;
   undefined4 uVar2;
   long in_FS_OFFSET;
   bc7_optimization_results abStack_118[96];
   unpacked_uastc_block local_b8[152];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar1 = unpack_uastc(param_1, local_b8, false, false);
   if (cVar1 != '\0') {
      uVar2 = transcode_uastc_to_bc7(local_b8, abStack_118);
      if ((char)uVar2 != '\0') {
         encode_bc7_block(param_2, abStack_118);
         goto LAB_001175df;
      }

   }

   uVar2 = 0;
   LAB_001175df:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* basist::apply_etc1_bias(basist::color32 const&, unsigned int, unsigned int, unsigned int) */undefined4 basist::apply_etc1_bias(color32 *param_1, uint param_2, uint param_3, uint param_4) {
   color32 cVar1;
   ulong uVar2;
   int iVar3;
   long lVar4;
   uint uVar5;
   uint uVar6;
   long in_FS_OFFSET;
   undefined4 local_24;
   long local_20;
   lVar4 = 0;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      cVar1 = param_1[lVar4];
      uVar6 = (uint)(byte)cVar1;
      iVar3 = (int)lVar4;
      switch ((ulong)param_2) {
         default:
      uVar2 = (ulong)param_2 /
              (ulong)(uint)(&apply_etc1_bias(basist::color32_const&,unsigned_int,unsigned_int,unsigned_int)
                             ::s_divs)[lVar4];
      iVar3 = (int)uVar2 + (int)(uVar2 / 3) * -3;
      uVar5 = iVar3 - 1;
      if (cVar1 != (color32)0x0) goto LAB_00117690;
      goto LAB_001176b0;
         case 2:
      if (param_4 == 0) {
LAB_001176e5:
        if (iVar3 == 0) goto LAB_00117799;
      }
      break;
         case 5:
      if (param_4 == 0) {
LAB_00117705:
        if (iVar3 == 1) goto LAB_00117799;
      }
      break;
         case 6:
      if (param_4 == 0) {
        while ((int)lVar4 != 2) {
          if (uVar6 != 0) goto LAB_001176f9;
          *(undefined1 *)((long)&local_24 + lVar4) = 1;
          lVar4 = lVar4 + 1;
          uVar6 = (uint)(byte)param_1[lVar4];
        }
        goto LAB_00117799;
      }
      break;
         case 7:
      if (param_4 == 0) {
LAB_00117715:
        if (iVar3 == 0) goto LAB_00117720;
      }
      break;
         case 8:
      while (param_4 != 0) {
        if ((int)lVar4 == 2) goto LAB_00117720;
        if (uVar6 != 0) goto LAB_001176f9;
        *(undefined1 *)((long)&local_24 + lVar4) = 1;
        lVar4 = lVar4 + 1;
        uVar6 = (uint)(byte)param_1[lVar4];
      }
      break;
         case 10:
      while (cVar1 == (color32)0x0) {
        *(undefined1 *)((long)&local_24 + lVar4) = 3;
        lVar4 = lVar4 + 1;
        if (lVar4 == 3) goto LAB_001176bd;
        cVar1 = param_1[lVar4];
        uVar6 = (uint)(byte)cVar1;
      }
      uVar5 = 0xfffffffe;
      goto LAB_00117690;
         case 0xb:
      if (param_4 == 0) {
LAB_00117745:
        if (iVar3 == 1) goto LAB_00117720;
      }
      break;
         case 0xf:
      if (param_4 != 0) break;
      while ((int)lVar4 != 2) {
        if (uVar6 != 0) goto LAB_001176f9;
        *(undefined1 *)((long)&local_24 + lVar4) = 1;
        lVar4 = lVar4 + 1;
        uVar6 = (uint)(byte)param_1[lVar4];
      }
LAB_00117720:
      iVar3 = 2;
      uVar5 = 1;
      if (uVar6 == 0) goto LAB_001176b0;
      goto LAB_00117690;
         case 0x12:
      if (param_4 != 0) goto LAB_001176e5;
      break;
         case 0x13:
      if (param_4 != 0) goto LAB_00117705;
      break;
         case 0x14:
      while (param_4 != 0) {
        if ((int)lVar4 == 2) goto LAB_00117799;
        if (uVar6 != 0) goto LAB_001176f9;
        *(undefined1 *)((long)&local_24 + lVar4) = 1;
        lVar4 = lVar4 + 1;
        uVar6 = (uint)(byte)param_1[lVar4];
      }
      break;
         case 0x15:
      if (param_4 != 0) goto LAB_00117715;
      break;
         case 0x18:
      if (param_4 != 0) goto LAB_00117745;
      break;
         case 0x1b:
      if (param_4 == 0) goto LAB_00117799;
      break;
         case 0x1c:
      if (param_4 == 0) goto LAB_00117720;
LAB_00117799:
      iVar3 = 0;
      if (uVar6 == 0) goto LAB_001176b0;
      uVar5 = 0xffffffff;
      goto LAB_00117690;
         case 0x1d:
      if (param_4 != 0) goto LAB_00117720;
      break;
         case 0x1e:
      if (param_4 != 0) goto LAB_00117799;
      break;
         case 0x1f:
      uVar5 = (uint)(param_4 == 0);
      iVar3 = (param_4 == 0) + 1;
      if (cVar1 == (color32)0x0) goto LAB_001176b0;
      goto LAB_00117690;
      }

      iVar3 = 1;
      if (uVar6 != 0) {
         LAB_001176f9:uVar5 = 0;
         LAB_00117690:iVar3 = ( uVar5 - 1 ) + param_3;
         if (( uVar6 != param_3 ) && ( ( iVar3 = uVar6 + uVar5 ),iVar3 < 0 || ( (int)param_3 < iVar3 ) )) {
            iVar3 = uVar6 - uVar5;
         }

      }

      LAB_001176b0:*(char*)( (long)&local_24 + lVar4 ) = (char)iVar3;
      lVar4 = lVar4 + 1;
      if (lVar4 == 3) {
         LAB_001176bd:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return local_24;
      }

   }
 while ( true );
}
/* basist::transcode_uastc_to_etc1(basist::unpacked_uastc_block&, basist::color32 (*) [4], void*) */void basist::transcode_uastc_to_etc1(unpacked_uastc_block *param_1, color32 *param_2, void *param_3) {
   byte *pbVar1;
   unpacked_uastc_block uVar2;
   unpacked_uastc_block uVar3;
   char cVar4;
   char cVar5;
   ushort uVar6;
   undefined4 uVar7;
   uint uVar8;
   uint uVar9;
   color32 *pcVar10;
   byte bVar11;
   int iVar12;
   byte bVar13;
   int iVar14;
   byte *pbVar15;
   color32 *pcVar16;
   uint uVar17;
   byte *pbVar18;
   int iVar19;
   uint uVar20;
   int iVar21;
   uint uVar22;
   int iVar23;
   int iVar24;
   uint uVar25;
   long lVar26;
   color32 *pcVar27;
   long in_FS_OFFSET;
   bool bVar28;
   undefined2 local_70;
   color32 local_6e[2];
   ushort local_6c;
   byte local_6a;
   color32 local_68[16];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = param_1[0x77];
   bVar13 = ( byte )(*(int*)( param_1 + 0x78 ) << 5);
   if (*(int*)( param_1 + 0x68 ) == 8) {
      *(byte*)( (long)param_3 + 3 ) = (char)uVar2 * '\x02' | bVar13 | ( byte )(*(int*)( param_1 + 0x78 ) << 2);
      if (param_1[0x77] == (unpacked_uastc_block)0x0) {
         *(byte*)param_3 = ( byte )(*(int*)( param_1 + 0x8c ) << 4) | ( byte ) * (int*)( param_1 + 0x8c );
         *(byte*)( (long)param_3 + 1 ) = ( byte )(*(int*)( param_1 + 0x90 ) << 4) | ( byte ) * (int*)( param_1 + 0x90 );
         bVar13 = ( byte )(*(int*)( param_1 + 0x94 ) << 4) | ( byte ) * (int*)( param_1 + 0x94 );
      }
 else {
         *(char*)param_3 = (char)param_1[0x8c] * '\b';
         *(char*)( (long)param_3 + 1 ) = (char)param_1[0x90] * '\b';
         bVar13 = (char)param_1[0x94] * '\b';
      }

      *(byte*)( (long)param_3 + 2 ) = bVar13;
      *(undefined4*)( (long)param_3 + 4 ) = *(undefined4*)( s_etc1_solid_selectors + ( ulong ) * (uint*)( param_1 + 0x88 ) * 4 );
   }
 else {
      uVar3 = param_1[0x76];
      pcVar27 = (color32*)&local_70;
      *(byte*)( (long)param_3 + 3 ) = (char)param_1[0x7c] * '\x04' | bVar13 | (char)uVar2 * '\x02' | (byte)uVar3;
      uVar17 = *(uint*)( param_1 + 0x68 );
      uVar20 = 0;
      uVar22 = ( -(uint)(uVar2 == (unpacked_uastc_block)0x0) & 0xfffffff0 ) + 0x1f;
      pbVar18 = g_etc1_pixel_coords + (ulong)(byte)uVar3 * 0x20 + 0x10;
      while (true) {
         pbVar15 = pbVar18 + -0x10;
         iVar12 = 0;
         iVar19 = 0;
         iVar21 = 0;
         do {
            pbVar1 = pbVar15 + 1;
            bVar13 = *pbVar15;
            pbVar15 = pbVar15 + 2;
            pcVar10 = param_2 + ( ulong ) * pbVar1 * 0x10 + (ulong)bVar13 * 4;
            iVar21 = iVar21 + ( uint )(byte) * pcVar10;
            iVar19 = iVar19 + (uint)(byte)pcVar10[1];
            iVar12 = iVar12 + (uint)(byte)pcVar10[2];
         }
 while ( pbVar15 != pbVar18 );
         pcVar27[3] = (color32)0x0;
         *pcVar27 = SUB41(( iVar21 * uVar22 + 0x3fc ) / 0x7f8, 0);
         pcVar27[1] = SUB41(( iVar19 * uVar22 + 0x3fc ) / 0x7f8, 0);
         cVar4 = g_uastc_mode_has_etc1_bias[uVar17];
         pcVar27[2] = SUB41(( iVar12 * uVar22 + 0x3fc ) / 0x7f8, 0);
         if (cVar4 != '\0') {
            uVar7 = apply_etc1_bias(pcVar27, *(uint*)( param_1 + 0x80 ), uVar22, uVar20);
            *(undefined4*)( local_6e + (ulong)uVar20 * 4 + -2 ) = uVar7;
         }

         pcVar27 = pcVar27 + 4;
         pbVar18 = pbVar18 + 0x10;
         if (uVar20 != 0) break;
         uVar20 = 1;
      }
;
      bVar13 = ( byte )(local_70 >> 8);
      if (uVar2 == (unpacked_uastc_block)0x0) {
         bVar11 = (char)local_6e[0] << 4 | local_6a;
         uVar6 = CONCAT11(bVar13 << 4, (char)local_70 << 4) | local_6c;
      }
 else {
         iVar24 = (uint)(byte)local_6c - ( local_70 & 0xff );
         iVar19 = ( uint )(byte)(local_6c >> 8) - (uint)bVar13;
         iVar21 = (uint)local_6a - (uint)(byte)local_6e[0];
         iVar12 = 3;
         if (iVar24 < 4) {
            iVar12 = iVar24;
         }

         if (iVar12 < -4) {
            iVar12 = -4;
         }

         iVar14 = 3;
         if (iVar19 < 4) {
            iVar14 = iVar19;
         }

         if (iVar14 < -4) {
            iVar14 = -4;
         }

         iVar23 = 3;
         if (iVar21 < 4) {
            iVar23 = iVar21;
         }

         if (iVar23 < -4) {
            iVar23 = -4;
         }

         cVar4 = (char)iVar12;
         if (iVar24 < 0) {
            cVar4 = (char)iVar12 + '\b';
         }

         cVar5 = (char)iVar14;
         if (iVar19 < 0) {
            cVar5 = (char)iVar14 + '\b';
         }

         bVar11 = (byte)iVar23;
         if (iVar21 < 0) {
            bVar11 = (byte)iVar23 + 8;
         }

         bVar11 = (char)local_6e[0] << 3 | bVar11;
         uVar6 = CONCAT11(bVar13 << 3, (char)local_70 << 3) | CONCAT11(cVar5, cVar4);
      }

      *(byte*)( (long)param_3 + 2 ) = bVar11;
      lVar26 = 0;
      uVar22 = 0;
      *(ushort*)param_3 = uVar6;
      uVar17 = 0;
      while (true) {
         uVar25 = (uint)lVar26;
         decoder_etc_block::get_block_colors((decoder_etc_block*)param_3, local_68, uVar25);
         pcVar27 = local_68;
         pcVar10 = (color32*)local_58;
         do {
            pcVar16 = pcVar27 + 4;
            *(uint*)pcVar10 = ( uint )(byte) * pcVar27 * 0x36 + (uint)(byte)pcVar27[1] * 0xb7 + (uint)(byte)pcVar27[2] * 0x13;
            pcVar27 = pcVar16;
            pcVar10 = pcVar10 + 4;
         }
 while ( (color32*)local_58 != pcVar16 );
         if (( (byte)uVar3 & 1 ) == 0) {
            uVar8 = 0;
            iVar12 = uVar25 * 8;
            do {
               iVar19 = iVar12 + 4;
               pcVar27 = param_2 + ( ulong )(uVar8 + uVar25 * 2) * 4;
               do {
                  uVar9 = ( uint )(byte) * pcVar27 * 0x6c + (uint)(byte)pcVar27[1] * 0x16e + (uint)(byte)pcVar27[2] * 0x26;
                  pcVar27 = pcVar27 + 0x10;
                  bVar13 = *(byte*)( (long)&transcode_uastc_to_etc1(basist::uastc_block_const&,void*,unsigned_int)::s_table + (long)(int)( ( uint )(uVar9 < ( uint )(local_58[0] + local_58[1])) + ( uint )(uVar9 < ( uint )(local_58[1] + local_58[2])) + ( uint )(uVar9 < ( uint )(local_58[2] + local_58[3])) ) );
                  bVar11 = (byte)iVar12;
                  iVar12 = iVar12 + 1;
                  uVar17 = uVar17 | ( uint )(bVar13 >> 1) << ( bVar11 & 0x1f );
                  uVar22 = uVar22 | ( bVar13 & 1 ) << ( bVar11 & 0x1f );
               }
 while ( iVar12 != iVar19 );
               bVar28 = uVar8 == 0;
               uVar8 = uVar20;
               iVar12 = iVar19;
            }
 while ( bVar28 );
         }
 else {
            iVar12 = uVar25 * 2 + 0x10;
            pcVar27 = param_2 + lVar26 * 0x20;
            do {
               iVar19 = iVar12 + -0x10;
               pcVar10 = pcVar27;
               do {
                  uVar8 = ( uint )(byte) * pcVar10 * 0x6c + (uint)(byte)pcVar10[1] * 0x16e + (uint)(byte)pcVar10[2] * 0x26;
                  pcVar10 = pcVar10 + 4;
                  bVar13 = *(byte*)( (long)&transcode_uastc_to_etc1(basist::uastc_block_const&,void*,unsigned_int)::s_table + (long)(int)( ( uint )(uVar8 < ( uint )(local_58[0] + local_58[1])) + ( uint )(uVar8 < ( uint )(local_58[1] + local_58[2])) + ( uint )(uVar8 < ( uint )(local_58[2] + local_58[3])) ) );
                  bVar11 = (byte)iVar19;
                  iVar19 = iVar19 + 4;
                  uVar17 = uVar17 | ( uint )(bVar13 >> 1) << ( bVar11 & 0x1f );
                  uVar22 = uVar22 | ( bVar13 & 1 ) << ( bVar11 & 0x1f );
               }
 while ( iVar19 != iVar12 );
               iVar12 = iVar12 + 1;
               pcVar27 = pcVar27 + 0x10;
            }
 while ( ( -(uint)(uVar25 == 0) & 0xfffffffe ) + 0x14 != iVar12 );
         }

         if (lVar26 != 0) break;
         lVar26 = 1;
      }
;
      *(uint*)( (long)param_3 + 4 ) = ( ( ( uVar22 & 0xff ) << 8 | uVar22 >> 8 & 0xff ) << 8 | uVar17 & 0xff ) << 8 | uVar17 >> 8 & 0xff;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* basist::transcode_uastc_to_etc1(basist::uastc_block const&, void*) */undefined4 basist::transcode_uastc_to_etc1(uastc_block *param_1, void *param_2) {
   char cVar1;
   undefined4 uVar2;
   long in_FS_OFFSET;
   color32 acStack_108[64];
   unpacked_uastc_block local_c8[104];
   uint local_60;
   uint local_5c;
   color32 local_58[40];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = unpack_uastc(param_1, local_c8, false, true);
   if ((char)uVar2 == '\0') {
      LAB_00117ef8:uVar2 = 0;
   }
 else {
      if (local_60 != 8) {
         cVar1 = unpack_uastc(local_60, local_5c, local_58, (astc_block_desc*)local_c8, acStack_108, false);
         if (cVar1 == '\0') goto LAB_00117ef8;
      }

      transcode_uastc_to_etc1(local_c8, acStack_108, param_2);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* basist::transcode_uastc_to_etc1(basist::uastc_block const&, void*, unsigned int) */char basist::transcode_uastc_to_etc1(uastc_block *param_1, void *param_2, uint param_3) {
   color32 cVar1;
   color32 cVar2;
   int iVar3;
   int iVar4;
   long lVar5;
   ulong uVar6;
   byte bVar7;
   byte bVar8;
   byte bVar9;
   int iVar10;
   uint uVar11;
   color32 *pcVar12;
   int iVar13;
   int iVar14;
   int iVar15;
   ushort uVar16;
   uint uVar17;
   int iVar18;
   color32 *pcVar19;
   int iVar20;
   int iVar21;
   int iVar22;
   int iVar23;
   uint uVar24;
   color32 *pcVar25;
   byte *pbVar26;
   uint *puVar27;
   int iVar28;
   color32 *pcVar29;
   byte *pbVar30;
   ulong uVar31;
   int iVar32;
   uint uVar33;
   uint uVar34;
   int iVar35;
   uint uVar36;
   int iVar37;
   ulong uVar38;
   int iVar39;
   uint uVar40;
   int *piVar41;
   ushort uVar42;
   color32 *pcVar44;
   int iVar45;
   long in_FS_OFFSET;
   uint local_1e4;
   color32 *local_1c8;
   char local_1bd;
   int local_1bc;
   color32 *local_1b8;
   char local_1ad;
   undefined8 local_170;
   undefined8 local_168;
   uint local_160[6];
   color32 local_148[5];
   byte local_143;
   byte local_142;
   byte local_141;
   color32 local_140;
   byte local_13f;
   byte local_13e;
   byte local_13d;
   color32 local_13c;
   byte local_13b;
   byte local_13a;
   byte local_139;
   ulong local_138;
   ulong uStack_130;
   color32 local_128[64];
   unpacked_uastc_block local_e8[104];
   uint local_80;
   uint local_7c;
   color32 local_78[40];
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   uint uVar43;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_1bd = unpack_uastc(param_1, local_e8, false, true);
   if (local_1bd != '\0') {
      if (local_80 == 8) {
         uVar42 = *(ushort*)( g_etc1_y_solid_block_configs + (ulong)(byte)local_78[param_3] * 2 );
         uVar43 = ( uVar42 & 0x1f ) << 3;
         *(uint*)param_2 = ( ( ( ( ( uint )(uVar42 >> 7) << 5 | ( uint )(uVar42 >> 7) << 2 ) & 0xff | 2 ) << 8 | uVar43 ) << 8 | uVar43 ) << 8 | uVar43;
         *(undefined4*)( (long)param_2 + 4 ) = *(undefined4*)( s_etc1_solid_selectors + ( ulong )(uVar42 >> 5 & 3) * 4 );
         goto LAB_00118745;
      }

      local_1ad = unpack_uastc(local_80, local_7c, local_78, (astc_block_desc*)local_e8, local_128, false);
      if (local_1ad != '\0') {
         lVar5 = 0;
         do {
            local_148[lVar5] = local_128[lVar5 * 4 + (ulong)param_3];
            lVar5 = lVar5 + 1;
         }
 while ( lVar5 != 0x10 );
         pcVar44 = &local_140;
         iVar32 = 0;
         iVar35 = 0;
         iVar39 = 0;
         iVar23 = (uint)(byte)local_148[0] + (uint)(byte)local_148[4] + (uint)(byte)local_148[1] + (uint)local_143;
         iVar10 = (uint)(byte)local_148[2] + (uint)local_142 + (uint)(byte)local_148[3] + (uint)local_141;
         iVar45 = iVar23 + 4 + iVar10 >> 3;
         iVar20 = (uint)(byte)local_140 + (uint)(byte)local_13c + (uint)local_13f + (uint)local_13b;
         iVar23 = iVar23 + 4 + iVar20 >> 3;
         iVar4 = (uint)local_13e + (uint)local_13a + (uint)local_13d + (uint)local_139;
         iVar28 = 0;
         iVar21 = 0;
         iVar20 = iVar20 + 4 + iVar4 >> 3;
         iVar4 = iVar10 + 4 + iVar4 >> 3;
         pcVar19 = local_148;
         do {
            pcVar29 = pcVar44 + -8;
            pcVar25 = pcVar19;
            do {
               pcVar12 = pcVar29;
               iVar39 = iVar39 + ( ( uint )(byte) * pcVar12 - iVar45 ) * ( ( uint )(byte) * pcVar12 - iVar45 );
               iVar35 = iVar35 + ( (uint)(byte)pcVar12[8] - iVar20 ) * ( (uint)(byte)pcVar12[8] - iVar20 );
               iVar32 = iVar32 + ( ( uint )(byte) * pcVar25 - iVar23 ) * ( ( uint )(byte) * pcVar25 - iVar23 );
               iVar28 = iVar28 + ( (uint)(byte)pcVar25[2] - iVar4 ) * ( (uint)(byte)pcVar25[2] - iVar4 );
               pcVar29 = pcVar12 + 4;
               pcVar25 = pcVar25 + 1;
            }
 while ( pcVar12 + 4 != pcVar44 );
            iVar21 = iVar21 + 1;
            pcVar19 = pcVar19 + 4;
            pcVar44 = pcVar12 + 5;
         }
 while ( iVar21 != 4 );
         iVar39 = iVar39 + iVar35;
         iVar32 = iVar32 + iVar28;
         local_168 = 0;
         local_170 = _LC19;
         local_170._4_4_ = ( undefined4 )((ulong)_LC19 >> 0x20);
         if (iVar39 < iVar32) {
            pcVar44 = local_148 + 4;
            uVar17 = 0;
            uVar43 = 0xff;
            pcVar19 = local_148;
            do {
               uVar11 = ( uint )(byte) * pcVar19;
               if (( byte ) * pcVar19 < uVar43) {
                  uVar43 = uVar11;
               }

               if (uVar17 < uVar11) {
                  uVar17 = uVar11;
               }

               pcVar19 = pcVar19 + 1;
               pcVar29 = local_148;
            }
 while ( pcVar19 != pcVar44 );
            do {
               uVar11 = (uint)(byte)pcVar29[4];
               if ((byte)pcVar29[4] < uVar43) {
                  uVar43 = uVar11;
               }

               if (uVar17 < uVar11) {
                  uVar17 = uVar11;
               }

               pcVar29 = pcVar29 + 1;
            }
 while ( pcVar44 != pcVar29 );
            local_170 = CONCAT44(local_170._4_4_, uVar43);
            local_1e4 = 0;
            uVar11 = 0xff;
            local_168 = (ulong)uVar17;
            pcVar19 = local_148;
            do {
               uVar40 = (uint)(byte)pcVar19[8];
               if ((byte)pcVar19[8] < uVar11) {
                  uVar11 = uVar40;
               }

               if (local_1e4 < uVar40) {
                  local_1e4 = uVar40;
               }

               pcVar19 = pcVar19 + 1;
               pcVar29 = local_148;
            }
 while ( pcVar19 != pcVar44 );
            do {
               uVar40 = (uint)(byte)pcVar29[0xc];
               if ((byte)pcVar29[0xc] < uVar11) {
                  uVar11 = uVar40;
               }

               if (local_1e4 < uVar40) {
                  local_1e4 = uVar40;
               }

               pcVar29 = pcVar29 + 1;
            }
 while ( pcVar44 != pcVar29 );
            local_168 = CONCAT44(local_1e4, uVar17);
            local_160[0] = uVar17 - uVar43;
            local_170 = CONCAT44(uVar11, uVar43);
            local_160[1] = local_1e4 - uVar11;
            *(undefined1*)( (long)param_2 + 3 ) = 1;
            if (( uVar17 - uVar43 | local_1e4 - uVar11 ) < 4) {
               local_1e4._0_1_ = 1;
               LAB_00118f10:uVar43 = 0;
               lVar5 = 0;
               uVar6 = 0;
               puVar27 = (uint*)&local_170;
               uVar17 = 0;
               uVar11 = 0;
               iVar23 = 0xc;
               while (true) {
                  if (local_160[lVar5] == 0) {
                     uVar40 = ( uint ) * (ushort*)( g_etc1_y_solid_block_1i_configs + ( ulong ) * puVar27 * 2 );
                  }
 else if (local_160[lVar5] == 1) {
                     uVar40 = ( uint ) * (ushort*)( g_etc1_y_solid_block_2i_configs + ( ulong ) * puVar27 * 2 );
                  }
 else {
                     uVar40 = ( uint ) * (ushort*)( g_etc1_y_solid_block_4i_configs + ( ulong ) * puVar27 * 2 );
                  }

                  uVar33 = uVar40 >> 3 & 0x1f;
                  bVar7 = (byte)uVar33;
                  local_138 = CONCAT44(uVar40 >> 10, uVar40 >> 8) & 0x300000003;
                  uStack_130 = CONCAT44(uVar40 >> 0xe, uVar40 >> 0xc) & 0xffffffff00000003;
                  if (lVar5 == 0) {
                     bVar7 = ( byte )(uVar33 << 4);
                     bVar8 = ( byte )(( uVar40 & 7 ) << 5);
                  }
 else {
                     bVar8 = ( byte )(( uVar40 & 7 ) << 2);
                  }

                  local_1e4._0_1_ = (byte)local_1e4 | bVar8;
                  if (iVar39 < iVar32) {
                     uVar40 = uVar43 + 0x10;
                     uVar33 = uVar43;
                     do {
                        uVar38 = (ulong)uVar33;
                        pcVar44 = local_148 + uVar38 * 4;
                        do {
                           cVar1 = *pcVar44;
                           pcVar44 = pcVar44 + 1;
                           bVar8 = *(byte*)( (long)&g_selector_index_to_etc1 + ( ulong ) * (uint*)( (long)&local_138 + ( ulong )((uint)(byte)cVar1 - *puVar27) * 4 ) );
                           bVar9 = (byte)uVar38;
                           uVar36 = (int)uVar38 + 4;
                           uVar38 = (ulong)uVar36;
                           uVar17 = uVar17 | ( uint )(bVar8 >> 1) << ( bVar9 & 0x1f );
                           uVar11 = uVar11 | ( bVar8 & 1 ) << ( bVar9 & 0x1f );
                        }
 while ( uVar36 != uVar40 );
                        uVar33 = uVar33 + 1;
                        uVar40 = uVar40 + 1;
                     }
 while ( uVar33 != uVar43 + 2 );
                  }
 else {
                     iVar4 = iVar23 + -8;
                     pcVar44 = local_148 + lVar5 * 2;
                     do {
                        pcVar19 = pcVar44;
                        iVar10 = iVar4 + -4;
                        do {
                           iVar20 = iVar10;
                           cVar1 = *pcVar19;
                           pcVar19 = pcVar19 + 4;
                           bVar8 = *(byte*)( (long)&g_selector_index_to_etc1 + ( ulong ) * (uint*)( (long)&local_138 + ( ulong )((uint)(byte)cVar1 - *puVar27) * 4 ) );
                           uVar17 = uVar17 | ( uint )(bVar8 >> 1) << ( (byte)iVar20 & 0x1f );
                           uVar11 = uVar11 | ( bVar8 & 1 ) << ( (byte)iVar20 & 0x1f );
                           iVar10 = iVar20 + 1;
                        }
 while ( iVar20 + 1 != iVar4 );
                        iVar4 = iVar20 + 5;
                        pcVar44 = pcVar44 + 1;
                     }
 while ( iVar4 != iVar23 );
                  }

                  uVar43 = uVar43 + 2;
                  uVar6 = ( ulong )(byte)((byte)uVar6 | bVar7);
                  iVar23 = iVar23 + 8;
                  puVar27 = puVar27 + 1;
                  if (lVar5 != 0) break;
                  lVar5 = 1;
               }
;
               *(ulong*)param_2 = ( ( ( ( ( ( ulong )(CONCAT41(uVar11, (char)( uVar11 >> 8 )) & 0xffff) << 8 | ( ulong )(uVar17 & 0xff) ) << 8 | ( ulong )(uVar17 >> 8 & 0xff) ) << 8 | (ulong)(byte)local_1e4 ) << 8 | uVar6 ) << 8 | uVar6 ) << 8 | uVar6;
               goto LAB_00118745;
            }

            uVar36 = iVar20 * 0x1f + 0x7f;
            uVar33 = iVar45 * 0x1f + 0x7f;
            uVar40 = uVar36 / 0xff - uVar33 / 0xff;
            if (uVar40 + 4 < 8) {
               uVar24 = 1;
               LAB_00118884:if ((int)uVar40 < 0) {
                  uVar40 = uVar40 + 8;
               }

               uVar40 = ( ( uVar33 / 0xff ) * 8 | uVar40 ) & 0xff;
               *(uint*)param_2 = ( ( ( uVar24 | 2 ) << 8 | uVar40 ) << 8 | uVar40 ) << 8 | uVar40;
               local_160[2] = uVar33 / 0x3fc | ( uVar33 / 0xff ) * 8;
               local_160[3] = uVar36 / 0x3fc | ( uVar36 / 0xff ) * 8;
               goto LAB_001182aa;
            }

            uVar40 = ( uint )(( ulong )(iVar20 * 0xf + 0x7f) * 0x80808081 >> 0x20);
            iVar23 = iVar45;
         }
 else {
            uVar17 = 0;
            uVar43 = 0xff;
            pcVar44 = local_148;
            do {
               cVar1 = *pcVar44;
               uVar40 = (uint)(byte)pcVar44[1];
               uVar11 = uVar40;
               if ((uint)(byte)cVar1 <= (uint)(byte)pcVar44[1]) {
                  uVar11 = (uint)(byte)cVar1;
               }

               if (uVar11 < uVar43) {
                  uVar43 = uVar11;
               }

               uVar11 = (uint)(byte)cVar1;
               if ((byte)cVar1 < uVar40) {
                  uVar11 = uVar40;
               }

               if (uVar17 < uVar11) {
                  uVar17 = uVar11;
               }

               pcVar44 = pcVar44 + 4;
            }
 while ( (color32*)&local_138 != pcVar44 );
            local_170 = CONCAT44(local_170._4_4_, uVar43);
            local_1e4 = 0;
            uVar11 = 0xff;
            local_168 = (ulong)uVar17;
            pcVar44 = local_148;
            do {
               cVar1 = pcVar44[2];
               cVar2 = pcVar44[3];
               uVar40 = (uint)(byte)cVar2;
               if ((uint)(byte)cVar1 <= (uint)(byte)cVar2) {
                  uVar40 = (uint)(byte)cVar1;
               }

               if (uVar40 < uVar11) {
                  uVar11 = uVar40;
               }

               uVar40 = (uint)(byte)cVar1;
               if ((uint)(byte)cVar1 < (uint)(byte)cVar2) {
                  uVar40 = (uint)(byte)cVar2;
               }

               if (local_1e4 < uVar40) {
                  local_1e4 = uVar40;
               }

               pcVar44 = pcVar44 + 4;
            }
 while ( (color32*)&local_138 != pcVar44 );
            local_168 = CONCAT44(local_1e4, uVar17);
            local_170 = CONCAT44(uVar11, uVar43);
            local_160[0] = uVar17 - uVar43;
            local_160[1] = local_1e4 - uVar11;
            *(undefined1*)( (long)param_2 + 3 ) = 0;
            if (( local_1e4 - uVar11 | uVar17 - uVar43 ) < 4) {
               local_1e4._0_1_ = 0;
               goto LAB_00118f10;
            }

            uVar36 = iVar4 * 0x1f + 0x7f;
            uVar33 = iVar23 * 0x1f + 0x7f;
            uVar40 = uVar36 / 0xff - uVar33 / 0xff;
            if (uVar40 + 4 < 8) {
               uVar24 = 0;
               goto LAB_00118884;
            }

            uVar40 = ( uint )(( ulong )(iVar4 * 0xf + 0x7f) * 0x80808081 >> 0x20);
         }

         local_160[2] = ( iVar23 * 0xf + 0x7fU ) / 0xff;
         local_1ad = '\0';
         bVar7 = ( byte )(local_160[2] << 4) | ( byte )(uVar40 >> 7);
         *(ushort*)param_2 = CONCAT11(bVar7, bVar7);
         *(byte*)( (long)param_2 + 2 ) = bVar7;
         local_160[2] = local_160[2] * 0x11;
         local_160[3] = ( uVar40 >> 7 ) * 0x11;
         LAB_001182aa:local_160[4] = uVar17 - local_160[2];
         if ((int)local_160[4] < 1) {
            local_160[4] = -local_160[4];
         }

         iVar4 = local_160[2] - uVar43;
         iVar23 = -iVar4;
         if (0 < iVar4) {
            iVar23 = iVar4;
         }

         if ((int)local_160[4] < iVar23) {
            local_160[4] = iVar23;
         }

         iVar23 = local_1e4 - local_160[3];
         local_160[5] = -iVar23;
         if (0 < iVar23) {
            local_160[5] = iVar23;
         }

         iVar4 = local_160[3] - uVar11;
         iVar23 = -iVar4;
         if (0 < iVar4) {
            iVar23 = iVar4;
         }

         if ((int)local_160[5] < iVar23) {
            local_160[5] = iVar23;
         }

         uVar6 = 0;
         uVar43 = 0;
         uVar42 = 0;
         iVar4 = 0;
         uVar17 = 0;
         uVar16 = 0;
         iVar23 = 4;
         local_1c8 = local_148;
         local_1b8 = local_148;
         if (local_1ad != '\0') goto LAB_001184a6;
         do {
            uVar42 = (ushort)uVar43;
            uVar16 = (ushort)uVar17;
            uVar11 = *(uint*)( (long)local_160 + uVar6 * 2 );
            if (3 < uVar11) goto LAB_001184a6;
            uVar40 = *(uint*)( (long)&local_170 + uVar6 * 2 );
            if (uVar11 == 0) {
               uVar11 = ( uint ) * (ushort*)( g_etc1_y_solid_block_1i_configs + (ulong)uVar40 * 2 );
            }
 else if (uVar11 == 1) {
               uVar11 = ( uint ) * (ushort*)( g_etc1_y_solid_block_2i_configs + (ulong)uVar40 * 2 );
            }
 else {
               uVar11 = ( uint ) * (ushort*)( g_etc1_y_solid_block_4i_configs + (ulong)uVar40 * 2 );
            }

            uVar33 = uVar11 >> 3 & 0x1f;
            /* WARNING: Load size is inaccurate */
            local_138 = CONCAT44(uVar11 >> 10, uVar11 >> 8) & 0x300000003;
            uStack_130 = CONCAT44(uVar11 >> 0xe, uVar11 >> 0xc) & 0xffffffff00000003;
            if (iVar4 == 0) {
               uVar36 = ( uVar11 & 7 ) << 5;
               uVar11 = *param_2 & 0xf;
               uVar24 = *(byte*)( (long)param_2 + 1 ) & 0xf;
               uVar34 = *(byte*)( (long)param_2 + 2 ) & 0xf;
               uVar33 = uVar33 << 4;
            }
 else {
               uVar36 = ( uVar11 & 7 ) << 2;
               uVar11 = *param_2 & 0xfffffff0;
               uVar24 = *(byte*)( (long)param_2 + 1 ) & 0xfffffff0;
               uVar34 = *(byte*)( (long)param_2 + 2 ) & 0xfffffff0;
            }

            *(uint*)param_2 = ( ( ( uVar36 | *(byte*)( (long)param_2 + 3 ) ) << 8 | uVar34 | uVar33 & 0xff ) << 8 | uVar24 | uVar33 & 0xff ) << 8 | uVar11 | uVar33 & 0xff;
            if (iVar32 <= iVar39) {
               iVar10 = iVar23 + 8;
               pcVar44 = local_1b8;
               iVar20 = iVar23;
               do {
                  iVar23 = iVar20 + -4;
                  pcVar19 = pcVar44;
                  do {
                     cVar1 = *pcVar19;
                     pcVar19 = pcVar19 + 4;
                     bVar7 = *(byte*)( (long)&g_selector_index_to_etc1 + ( ulong ) * (uint*)( (long)&local_138 + ( ulong )((byte)cVar1 - uVar40) * 4 ) );
                     bVar8 = (byte)iVar23;
                     iVar23 = iVar23 + 1;
                     uVar43 = uVar43 | ( uint )(bVar7 >> 1) << ( bVar8 & 0x1f );
                     uVar17 = uVar17 | ( bVar7 & 1 ) << ( bVar8 & 0x1f );
                  }
 while ( iVar23 != iVar20 );
                  iVar20 = iVar20 + 4;
                  pcVar44 = pcVar44 + 1;
                  iVar23 = iVar10;
                  if (iVar10 == iVar20) goto LAB_0011847c;
               }
 while ( true );
            }

            uVar11 = (int)uVar6 + 0x10;
            uVar38 = uVar6;
            do {
               iVar10 = (int)uVar38;
               pcVar44 = local_148 + uVar38 * 4;
               do {
                  cVar1 = *pcVar44;
                  pcVar44 = pcVar44 + 1;
                  bVar7 = *(byte*)( (long)&g_selector_index_to_etc1 + ( ulong ) * (uint*)( (long)&local_138 + ( ulong )((byte)cVar1 - uVar40) * 4 ) );
                  bVar8 = (byte)uVar38;
                  iVar20 = (int)uVar38;
                  uVar33 = iVar20 + 4;
                  uVar38 = (ulong)uVar33;
                  uVar43 = uVar43 | ( uint )(bVar7 >> 1) << ( bVar8 & 0x1f );
                  uVar17 = uVar17 | ( bVar7 & 1 ) << ( bVar8 & 0x1f );
               }
 while ( uVar33 != uVar11 );
               uVar11 = iVar20 + 5;
               uVar33 = iVar10 + 1;
               uVar38 = (ulong)uVar33;
            }
 while ( uVar33 != (int)uVar6 + 2U );
            while (true) {
               iVar23 = iVar23 + 8;
               LAB_0011847c:uVar42 = (ushort)uVar43;
               uVar16 = (ushort)uVar17;
               local_1b8 = local_1b8 + 2;
               iVar4 = iVar4 + 1;
               local_1c8 = local_1c8 + 8;
               if (uVar6 == 2) {
                  *(uint*)( (long)param_2 + 4 ) = ( ( ( uVar17 & 0xff ) << 8 | uVar17 >> 8 & 0xff ) << 8 | uVar43 & 0xff ) << 8 | uVar43 >> 8 & 0xff;
                  goto LAB_00118745;
               }

               uVar6 = 2;
               if (local_1ad == '\0') break;
               LAB_001184a6:iVar10 = *(int*)( (long)local_160 + uVar6 * 2 + 8 );
               uVar43 = *(uint*)( (long)local_160 + uVar6 * 2 + 0x10 );
               iVar21 = 0xff - iVar10;
               iVar20 = -iVar10;
               if (uVar43 < 0x34) {
                  if (uVar43 < 0x17) {
                     local_1e4 = 1;
                     if (uVar43 - 4 < 0x24) {
                        if (uVar43 < 9) {
                           local_1e4 = 3;
                        }
 else {
                           local_1e4 = ( -(uint)(uVar43 < 0xc) & 0xfffffff8 ) + 0xf;
                        }

                     }

                  }
 else {
                     local_1e4 = ( -(uint)(uVar43 - 4 < 0x24) & 2 ) + 0xc;
                  }

               }
 else {
                  local_1e4 = 0xfc;
                  if (( ( ( 0x3c < uVar43 ) && ( local_1e4 = 0xf8 ),0x59 < uVar43 ) ) && ( local_1e4 = 0x78 < uVar43 )) {
                     local_1e4 = ( -(uint)(uVar43 < 0xaf) & 0x40 ) + 0x80;
                  }

               }

               iVar28 = (int)uVar6;
               piVar41 = &g_etc1_inten_tables;
               iVar35 = 0;
               uVar43 = 0xffffffff;
               local_1bc = 0;
               do {
                  if (( local_1e4 & 1 << ( (byte)iVar35 & 0x1f ) ) != 0) {
                     iVar45 = *piVar41;
                     if (*piVar41 <= iVar20) {
                        iVar45 = iVar20;
                     }

                     iVar15 = piVar41[1];
                     if (piVar41[1] <= iVar20) {
                        iVar15 = iVar20;
                     }

                     iVar14 = piVar41[2];
                     if (iVar21 <= piVar41[2]) {
                        iVar14 = iVar21;
                     }

                     iVar18 = iVar15 + iVar45;
                     iVar37 = piVar41[3];
                     if (iVar21 <= piVar41[3]) {
                        iVar37 = iVar21;
                     }

                     iVar22 = iVar15 + iVar14;
                     iVar3 = ( *(int*)( (long)&local_168 + uVar6 * 2 ) - iVar10 ) * 2;
                     iVar13 = iVar14 + iVar37;
                     local_138 = CONCAT44(iVar37, iVar14);
                     uStack_130 = CONCAT44(iVar45, iVar15);
                     if (iVar39 < iVar32) {
                        if (iVar3 < iVar18) {
                           lVar5 = 0;
                           uVar17 = 0;
                           local_48 = 0x303030303030303;
                           do {
                              iVar14 = iVar45 - ( (uint)(byte)local_1c8[lVar5] - iVar10 );
                              iVar15 = -iVar14;
                              if (0 < iVar14) {
                                 iVar15 = iVar14;
                              }

                              lVar5 = lVar5 + 1;
                              uVar17 = uVar17 + iVar15 * iVar15;
                           }
 while ( lVar5 != 4 );
                           if (uVar17 < uVar43) {
                              lVar5 = 0;
                              do {
                                 iVar14 = iVar45 - ( (uint)(byte)local_1c8[lVar5 + 4] - iVar10 );
                                 iVar15 = -iVar14;
                                 if (0 < iVar14) {
                                    iVar15 = iVar14;
                                 }

                                 lVar5 = lVar5 + 1;
                                 uVar17 = uVar17 + iVar15 * iVar15;
                              }
 while ( lVar5 != 4 );
                              LAB_00118ae0:if (uVar17 < uVar43) goto LAB_00118675;
                           }

                        }
 else if (( *(int*)( (long)&local_170 + uVar6 * 2 ) - iVar10 ) * 2 < iVar13) {
                           iVar45 = 0;
                           uVar17 = 0;
                           pcVar44 = local_1c8;
                           do {
                              lVar5 = 0;
                              do {
                                 iVar14 = (uint)(byte)pcVar44[lVar5] - iVar10;
                                 iVar15 = iVar14 * 2;
                                 bVar7 = *(byte*)( (long)&transcode_uastc_to_etc1(basist::uastc_block_const&,void*,unsigned_int)::s_table + (long)(int)( ( uint )(iVar22 != iVar15 && SBORROW4(iVar22, iVar15) == iVar22 + iVar14 * -2 < 0) + ( uint )(iVar18 != iVar15 && SBORROW4(iVar18, iVar15) == iVar18 + iVar14 * -2 < 0) + ( uint )(iVar13 != iVar15 && SBORROW4(iVar13, iVar15) == iVar13 + iVar14 * -2 < 0) ) );
                                 *(byte*)( (long)&local_48 + ( ulong )(uint)(iVar45 + (int)lVar5) ) = bVar7;
                                 iVar14 = *(int*)( (long)&local_138 + (ulong)bVar7 * 4 ) - iVar14;
                                 iVar15 = -iVar14;
                                 if (0 < iVar14) {
                                    iVar15 = iVar14;
                                 }

                                 lVar5 = lVar5 + 1;
                                 uVar17 = uVar17 + iVar15 * iVar15;
                              }
 while ( lVar5 != 4 );
                              if (uVar43 <= uVar17) goto LAB_00118689;
                              iVar45 = iVar45 + 4;
                              pcVar44 = pcVar44 + 4;
                           }
 while ( iVar45 != 8 );
                           LAB_00118675:local_50 = local_48;
                           local_1bc = iVar35;
                           uVar43 = uVar17;
                        }
 else {
                           lVar5 = 0;
                           uVar17 = 0;
                           local_48 = 0x101010101010101;
                           do {
                              iVar15 = iVar37 - ( (uint)(byte)local_1c8[lVar5] - iVar10 );
                              iVar45 = -iVar15;
                              if (0 < iVar15) {
                                 iVar45 = iVar15;
                              }

                              lVar5 = lVar5 + 1;
                              uVar17 = uVar17 + iVar45 * iVar45;
                           }
 while ( lVar5 != 4 );
                           if (uVar17 < uVar43) {
                              lVar5 = 0;
                              do {
                                 iVar15 = iVar37 - ( (uint)(byte)local_1c8[lVar5 + 4] - iVar10 );
                                 iVar45 = -iVar15;
                                 if (0 < iVar15) {
                                    iVar45 = iVar15;
                                 }

                                 lVar5 = lVar5 + 1;
                                 uVar17 = uVar17 + iVar45 * iVar45;
                              }
 while ( lVar5 != 4 );
                              goto LAB_00118ae0;
                           }

                        }

                     }
 else if (iVar3 < iVar18) {
                        local_48 = 0x303030303030303;
                        iVar14 = iVar45 - ( ( uint )(byte) * local_1b8 - iVar10 );
                        iVar15 = -iVar14;
                        if (0 < iVar14) {
                           iVar15 = iVar14;
                        }

                        iVar37 = iVar45 - ( (uint)(byte)local_1b8[1] - iVar10 );
                        iVar14 = -iVar37;
                        if (0 < iVar37) {
                           iVar14 = iVar37;
                        }

                        uVar17 = iVar14 * iVar14 + iVar15 * iVar15;
                        if (uVar17 < uVar43) {
                           pcVar44 = local_1b8;
                           do {
                              if (pcVar44 == local_1b8 + 0xc) goto LAB_00118ae0;
                              iVar14 = iVar45 - ( (uint)(byte)pcVar44[4] - iVar10 );
                              iVar15 = -iVar14;
                              if (0 < iVar14) {
                                 iVar15 = iVar14;
                              }

                              iVar37 = iVar45 - ( (uint)(byte)pcVar44[5] - iVar10 );
                              iVar14 = -iVar37;
                              if (0 < iVar37) {
                                 iVar14 = iVar37;
                              }

                              pcVar44 = pcVar44 + 4;
                              uVar17 = iVar14 * iVar14 + iVar15 * iVar15 + uVar17;
                           }
 while ( uVar17 < uVar43 );
                        }

                     }
 else {
                        uVar11 = 0;
                        uVar17 = 0;
                        if (( *(int*)( (long)&local_170 + uVar6 * 2 ) - iVar10 ) * 2 < iVar13) {
                           do {
                              iVar45 = 0;
                              while (true) {
                                 iVar14 = (uint)(byte)local_148[( ulong )(uint)(iVar28 + iVar45) + (ulong)uVar11 * 4] - iVar10;
                                 iVar15 = iVar14 * 2;
                                 bVar7 = *(byte*)( (long)&transcode_uastc_to_etc1(basist::uastc_block_const&,void*,unsigned_int)::s_table + (long)(int)( ( uint )(iVar22 != iVar15 && SBORROW4(iVar22, iVar15) == iVar22 + iVar14 * -2 < 0) + ( uint )(iVar18 != iVar15 && SBORROW4(iVar18, iVar15) == iVar18 + iVar14 * -2 < 0) + ( uint )(iVar13 != iVar15 && SBORROW4(iVar13, iVar15) == iVar13 + iVar14 * -2 < 0) ) );
                                 *(byte*)( (long)&local_48 + ( ulong )(iVar45 + uVar11 * 2) ) = bVar7;
                                 iVar14 = *(int*)( (long)&local_138 + (ulong)bVar7 * 4 ) - iVar14;
                                 iVar15 = -iVar14;
                                 if (0 < iVar14) {
                                    iVar15 = iVar14;
                                 }

                                 uVar17 = uVar17 + iVar15 * iVar15;
                                 if (iVar45 != 0) break;
                                 iVar45 = 1;
                              }
;
                              if (uVar43 <= uVar17) goto LAB_00118689;
                              uVar11 = uVar11 + 1;
                           }
 while ( uVar11 != 4 );
                           goto LAB_00118675;
                        }

                        local_48 = 0x101010101010101;
                        iVar15 = iVar37 - ( ( uint )(byte) * local_1b8 - iVar10 );
                        iVar45 = -iVar15;
                        if (0 < iVar15) {
                           iVar45 = iVar15;
                        }

                        iVar14 = iVar37 - ( (uint)(byte)local_1b8[1] - iVar10 );
                        iVar15 = -iVar14;
                        if (0 < iVar14) {
                           iVar15 = iVar14;
                        }

                        uVar17 = iVar45 * iVar45 + iVar15 * iVar15;
                        if (uVar17 < uVar43) {
                           pcVar44 = local_1b8;
                           do {
                              if (local_1b8 + 0xc == pcVar44) goto LAB_00118ae0;
                              iVar15 = iVar37 - ( (uint)(byte)pcVar44[4] - iVar10 );
                              iVar45 = -iVar15;
                              if (0 < iVar15) {
                                 iVar45 = iVar15;
                              }

                              iVar14 = iVar37 - ( (uint)(byte)pcVar44[5] - iVar10 );
                              iVar15 = -iVar14;
                              if (0 < iVar14) {
                                 iVar15 = iVar14;
                              }

                              pcVar44 = pcVar44 + 4;
                              uVar17 = iVar15 * iVar15 + iVar45 * iVar45 + uVar17;
                           }
 while ( uVar17 < uVar43 );
                        }

                     }

                  }

                  LAB_00118689:iVar35 = iVar35 + 1;
                  piVar41 = piVar41 + 4;
               }
 while ( iVar35 != 8 );
               uVar17 = (uint)uVar16;
               uVar43 = (uint)uVar42;
               *(byte*)( (long)param_2 + 3 ) = *(byte*)( (long)param_2 + 3 ) | ( byte )(local_1bc << ( -(iVar4 == 0) & 3U ) + 2);
               if (iVar39 < iVar32) {
                  pbVar26 = (byte*)&local_50;
                  pbVar30 = pbVar26;
                  iVar10 = iVar28;
                  do {
                     bVar7 = *pbVar30;
                     pbVar30 = pbVar30 + 1;
                     bVar8 = (byte)iVar10;
                     uVar43 = uVar43 | ( uint )(bVar7 >> 1) << ( bVar8 & 0x1f );
                     iVar10 = iVar10 + 4;
                     uVar17 = uVar17 | ( bVar7 & 1 ) << ( bVar8 & 0x1f );
                  }
 while ( (byte*)( (long)&local_50 + 4 ) != pbVar30 );
                  iVar28 = iVar28 + 1;
                  do {
                     pbVar30 = pbVar26 + 4;
                     pbVar26 = pbVar26 + 1;
                     bVar7 = (byte)iVar28;
                     uVar43 = uVar43 | ( uint )(*pbVar30 >> 1) << ( bVar7 & 0x1f );
                     iVar28 = iVar28 + 4;
                     uVar17 = uVar17 | ( *pbVar30 & 1 ) << ( bVar7 & 0x1f );
                  }
 while ( (byte*)( (long)&local_50 + 4 ) != pbVar26 );
               }
 else {
                  uVar38 = 0;
                  iVar10 = iVar23;
                  while (true) {
                     iVar20 = iVar10 + -4;
                     uVar31 = uVar38;
                     do {
                        bVar7 = (byte)iVar20;
                        iVar20 = iVar20 + 1;
                        uVar43 = uVar43 | ( uint )(*(byte*)( (long)&local_50 + uVar31 ) >> 1) << ( bVar7 & 0x1f );
                        uVar17 = uVar17 | ( *(byte*)( (long)&local_50 + uVar31 ) & 1 ) << ( bVar7 & 0x1f );
                        uVar31 = ( ulong )((int)uVar31 + 2);
                     }
 while ( iVar20 != iVar10 );
                     iVar10 = iVar10 + 4;
                     if ((int)uVar38 != 0) break;
                     uVar38 = 1;
                  }
;
               }

            }
;
         }
 while ( true );
      }

   }

   local_1bd = '\0';
   LAB_00118745:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_1bd;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* basist::transcode_uastc_to_etc2_eac_a8(basist::unpacked_uastc_block&, basist::color32 (*) [4],
   void*) */void basist::transcode_uastc_to_etc2_eac_a8(unpacked_uastc_block *param_1, color32 *param_2, void *param_3) {
   color32 cVar1;
   int iVar2;
   byte bVar3;
   uint uVar4;
   color32 cVar5;
   int iVar6;
   color32 *pcVar7;
   long lVar8;
   uint uVar9;
   color32 cVar10;
   ulong uVar11;
   uint uVar12;
   ulong uVar13;
   long in_FS_OFFSET;
   float fVar14;
   uint local_68[10];
   long local_40;
   uVar9 = *(uint*)( param_1 + 0x68 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (g_uastc_mode_has_alpha[uVar9] == '\0') {
      cVar5 = (color32)0xff;
      if (uVar9 == 8) goto LAB_00119448;
   }
 else if (uVar9 == 8) {
      LAB_00119448:cVar5 = *(color32*)( param_1 + 0x73 );
   }
 else {
      pcVar7 = param_2 + 3;
      cVar5 = (color32)0xff;
      cVar10 = (color32)0x0;
      do {
         cVar1 = *pcVar7;
         if ((byte)cVar1 < (byte)cVar5) {
            cVar5 = cVar1;
         }

         if ((byte)cVar10 < (byte)cVar1) {
            cVar10 = cVar1;
         }

         pcVar7 = pcVar7 + 4;
      }
 while ( param_2 + 0x43 != pcVar7 );
      if (cVar5 != cVar10) {
         uVar12 = *(uint*)( param_1 + 0x84 ) & 0xf;
         uVar9 = *(uint*)( param_1 + 0x84 ) >> 4;
         *(byte*)( (long)param_3 + 1 ) = ( byte )(uVar9 << 4) | (byte)uVar12;
         fVar14 = roundf(( (float)-(int)(char)(&DAT_00161383)[(long)(int)uVar12 * 8] / (float)( (int)(char)( &DAT_00161387 )[(long)(int)uVar12 * 8] - (int)(char)( &DAT_00161383 )[(long)(int)uVar12 * 8] ) ) * ( (float)(byte)cVar10 - (float)(byte)cVar5 ) + (float)(byte)cVar5);
         lVar8 = 0;
         *(char*)param_3 = (char)(int)fVar14;
         do {
            uVar4 = (int)(char)( &g_eac_modifier_table )[lVar8 + (ulong)uVar12 * 8] * uVar9 + (int)fVar14;
            bVar3 = (byte)uVar4;
            if (0xff < uVar4) {
               bVar3 = ~(byte)((int)uVar4 >> 0x1f);
            }

            local_68[lVar8] = (uint)bVar3;
            lVar8 = lVar8 + 1;
         }
 while ( lVar8 != 8 );
         uVar13 = 0;
         uVar11 = 0;
         do {
            cVar5 = param_2[( uVar11 & 0xfffffffffffffffc ) + ( ulong )((uint)uVar11 & 3) * 0x10 + 3];
            iVar6 = local_68[1] - (byte)cVar5;
            iVar2 = -iVar6;
            if (0 < iVar6) {
               iVar2 = iVar6;
            }

            iVar6 = local_68[2] - (byte)cVar5;
            uVar9 = iVar2 * 8 + 1;
            iVar2 = -iVar6;
            if (0 < iVar6) {
               iVar2 = iVar6;
            }

            uVar12 = iVar2 * 8 + 2;
            if (uVar9 <= uVar12) {
               uVar12 = uVar9;
            }

            uVar9 = (uint)(byte)cVar5;
            iVar6 = local_68[0] - uVar9;
            iVar2 = -iVar6;
            if (0 < iVar6) {
               iVar2 = iVar6;
            }

            uVar4 = iVar2 * 8;
            if (uVar12 <= ( uint )(iVar2 * 8)) {
               uVar4 = uVar12;
            }

            iVar6 = local_68[3] - uVar9;
            iVar2 = -iVar6;
            if (0 < iVar6) {
               iVar2 = iVar6;
            }

            uVar12 = iVar2 * 8 + 3;
            if (uVar4 <= uVar12) {
               uVar12 = uVar4;
            }

            iVar6 = local_68[4] - uVar9;
            iVar2 = -iVar6;
            if (0 < iVar6) {
               iVar2 = iVar6;
            }

            uVar4 = iVar2 * 8 + 4;
            if (uVar12 <= uVar4) {
               uVar4 = uVar12;
            }

            iVar6 = local_68[5] - uVar9;
            iVar2 = -iVar6;
            if (0 < iVar6) {
               iVar2 = iVar6;
            }

            uVar9 = iVar2 * 8 + 5;
            if (uVar4 <= uVar9) {
               uVar9 = uVar4;
            }

            iVar6 = local_68[6] - (byte)cVar5;
            iVar2 = -iVar6;
            if (0 < iVar6) {
               iVar2 = iVar6;
            }

            uVar12 = iVar2 * 8 + 6;
            if (uVar9 <= uVar12) {
               uVar12 = uVar9;
            }

            iVar6 = local_68[7] - (byte)cVar5;
            iVar2 = -iVar6;
            if (0 < iVar6) {
               iVar2 = iVar6;
            }

            uVar9 = iVar2 * 8 + 7;
            if (uVar9 < uVar12) {
               uVar12 = uVar9;
            }

            uVar9 = (uint)uVar11 + 1;
            uVar13 = uVar13 | ( ulong )(uVar12 & 7) << ( (char)uVar11 * -3 + 0x2dU & 0x3f );
            uVar11 = (ulong)uVar9;
         }
 while ( uVar9 != 0x10 );
         uVar9 = ( uint )(uVar13 >> 0x20);
         *(ushort*)( (long)param_3 + 6 ) = (ushort)uVar13 << 8 | (ushort)uVar13 >> 8;
         *(uint*)( (long)param_3 + 2 ) = ( ( ( ( uint )(uVar13 >> 0x10) & 0xff ) << 8 | (uint)uVar13 >> 0x18 ) << 8 | uVar9 & 0xff ) << 8 | uVar9 >> 8 & 0xff;
         goto LAB_00119424;
      }

   }

   *(color32*)param_3 = cVar5;
   *(undefined1*)( (long)param_3 + 1 ) = 0x1d;
   *(undefined4*)( (long)param_3 + 2 ) = 0x92244992;
   *(undefined2*)( (long)param_3 + 6 ) = 0x2449;
   LAB_00119424:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* basist::transcode_uastc_to_etc2_rgba(basist::uastc_block const&, void*) */undefined4 basist::transcode_uastc_to_etc2_rgba(uastc_block *param_1, void *param_2) {
   char cVar1;
   undefined4 uVar2;
   long in_FS_OFFSET;
   color32 acStack_108[64];
   unpacked_uastc_block local_c8[104];
   uint local_60;
   uint local_5c;
   color32 local_58[40];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = unpack_uastc(param_1, local_c8, false, true);
   if ((char)uVar2 == '\0') {
      LAB_00119518:uVar2 = 0;
   }
 else {
      if (local_60 != 8) {
         cVar1 = unpack_uastc(local_60, local_5c, local_58, (astc_block_desc*)local_c8, acStack_108, false);
         if (cVar1 == '\0') goto LAB_00119518;
      }

      transcode_uastc_to_etc2_eac_a8(local_c8, acStack_108, param_2);
      transcode_uastc_to_etc1(local_c8, acStack_108, (void*)( (long)param_2 + 8 ));
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* basist::encode_bc4(void*, unsigned char const*, unsigned int) */void basist::encode_bc4(void *param_1, uchar *param_2, uint param_3) {
   byte bVar1;
   byte bVar2;
   byte bVar3;
   byte bVar4;
   byte bVar5;
   byte bVar6;
   byte bVar7;
   byte bVar8;
   byte bVar9;
   byte bVar10;
   byte bVar11;
   int iVar12;
   int iVar13;
   int iVar14;
   int iVar15;
   int iVar16;
   int iVar17;
   uint uVar18;
   int iVar19;
   int iVar20;
   int iVar21;
   ulong uVar22;
   uint uVar23;
   int iVar24;
   uint uVar25;
   int iVar26;
   int iVar27;
   int iVar28;
   int iVar29;
   int iVar30;
   int iVar31;
   int iVar32;
   uint uVar33;
   uint uVar34;
   int iVar35;
   int iVar36;
   int iVar37;
   int iVar38;
   int iVar39;
   int iVar40;
   uint uVar41;
   uVar18 = ( uint ) * param_2;
   bVar1 = param_2[param_3];
   bVar2 = param_2[param_3 * 2];
   bVar3 = param_2[param_3 * 3];
   uVar25 = (uint)param_2[param_3 * 4];
   uVar34 = (uint)param_2[param_3 * 5];
   uVar33 = (uint)param_2[param_3 * 6];
   bVar4 = param_2[param_3 * 7];
   bVar5 = param_2[param_3 * 8];
   bVar6 = param_2[param_3 * 9];
   bVar7 = param_2[param_3 * 10];
   bVar8 = param_2[param_3 * 0xb];
   bVar9 = param_2[param_3 * 0xc];
   bVar10 = param_2[param_3 * 0xd];
   bVar11 = param_2[param_3 * 0xe];
   uVar41 = (uint)bVar1;
   uVar23 = (uint)bVar1;
   if (uVar18 < bVar1 || uVar18 == uVar41) {
      uVar23 = uVar18;
   }

   bVar1 = param_2[param_3 * 0xf];
   if (bVar2 < uVar23) {
      uVar23 = (uint)bVar2;
   }

   if (bVar3 < uVar23) {
      uVar23 = (uint)bVar3;
   }

   if (uVar25 < uVar23) {
      uVar23 = uVar25;
   }

   if (uVar34 < uVar23) {
      uVar23 = uVar34;
   }

   if (uVar33 < uVar23) {
      uVar23 = uVar33;
   }

   if (bVar4 < uVar23) {
      uVar23 = (uint)bVar4;
   }

   if (bVar5 < uVar23) {
      uVar23 = (uint)bVar5;
   }

   if (bVar6 < uVar23) {
      uVar23 = (uint)bVar6;
   }

   if (bVar7 < uVar23) {
      uVar23 = (uint)bVar7;
   }

   if (bVar8 < uVar23) {
      uVar23 = (uint)bVar8;
   }

   if (bVar9 < uVar23) {
      uVar23 = (uint)bVar9;
   }

   if (bVar10 < uVar23) {
      uVar23 = (uint)bVar10;
   }

   if (bVar11 < uVar23) {
      uVar23 = (uint)bVar11;
   }

   if (bVar1 < uVar23) {
      uVar23 = (uint)bVar1;
   }

   if (uVar18 < uVar41) {
      uVar18 = uVar41;
   }

   if (uVar18 < bVar2) {
      uVar18 = (uint)bVar2;
   }

   if (uVar18 < bVar3) {
      uVar18 = (uint)bVar3;
   }

   if (uVar18 < uVar25) {
      uVar18 = uVar25;
   }

   if (uVar18 < uVar34) {
      uVar18 = uVar34;
   }

   if (uVar18 < uVar33) {
      uVar18 = uVar33;
   }

   if (uVar18 < bVar4) {
      uVar18 = (uint)bVar4;
   }

   if (uVar18 < bVar5) {
      uVar18 = (uint)bVar5;
   }

   if (uVar18 < bVar6) {
      uVar18 = (uint)bVar6;
   }

   if (uVar18 < bVar7) {
      uVar18 = (uint)bVar7;
   }

   if (uVar18 < bVar8) {
      uVar18 = (uint)bVar8;
   }

   if (uVar18 < bVar9) {
      uVar18 = (uint)bVar9;
   }

   if (uVar18 < bVar10) {
      uVar18 = (uint)bVar10;
   }

   if (uVar18 < bVar11) {
      uVar18 = (uint)bVar11;
   }

   *(char*)( (long)param_1 + 1 ) = (char)uVar23;
   if (uVar18 < bVar1) {
      uVar18 = (uint)bVar1;
   }

   *(char*)param_1 = (char)uVar18;
   if (uVar23 != uVar18) {
      iVar19 = uVar18 - uVar23;
      iVar12 = iVar19 * 3;
      iVar13 = iVar19 * 5;
      iVar14 = iVar19 * 9;
      iVar15 = iVar19 * 7;
      iVar32 = uVar23 * -0xe + 4;
      iVar16 = iVar19 * 0xd;
      iVar17 = iVar19 * 0xb;
      iVar36 = (uint)param_2[param_3 * 4] * 0xe + iVar32;
      iVar35 = ( uint ) * param_2 * 0xe + iVar32;
      iVar24 = (uint)param_2[param_3] * 0xe + iVar32;
      iVar37 = (uint)param_2[param_3 * 2] * 0xe + iVar32;
      iVar20 = (uint)param_2[param_3 * 3] * 0xe + iVar32;
      iVar21 = (uint)param_2[param_3 * 5] * 0xe + iVar32;
      iVar39 = (uint)param_2[param_3 * 6] * 0xe + iVar32;
      iVar26 = (uint)param_2[param_3 * 7] * 0xe + iVar32;
      iVar30 = (uint)param_2[param_3 * 8] * 0xe + iVar32;
      iVar27 = (uint)param_2[param_3 * 9] * 0xe + iVar32;
      iVar31 = (uint)param_2[param_3 * 10] * 0xe + iVar32;
      iVar28 = (uint)param_2[param_3 * 0xb] * 0xe + iVar32;
      iVar40 = (uint)param_2[param_3 * 0xc] * 0xe + iVar32;
      iVar29 = (uint)param_2[param_3 * 0xf] * 0xe + iVar32;
      iVar38 = (uint)param_2[param_3 * 0xd] * 0xe + iVar32;
      iVar32 = (uint)param_2[param_3 * 0xe] * 0xe + iVar32;
      uVar22 = ( ulong )(*(int*)( encode_bc4(void*,unsigned_char_const*,unsigned_int):: ) << 0xc | *(uint*)( encode_bc4(void*,unsigned_char_const*,unsigned_int):: )) | ( ulong )(*(int*)( encode_bc4(void*,unsigned_char_const*,unsigned_int):: ) << 0xc | *(uint*)( encode_bc4(void*,unsigned_char_const*,unsigned_int):: )) | ( ulong )(*(int*)( encode_bc4(void*,unsigned_char_const*,unsigned_int):: ) << 0xc | *(uint*)( encode_bc4(void*,unsigned_char_const*,unsigned_int):: )) | ( ulong )(*(int*)( encode_bc4(void*,unsigned_char_const*,unsigned_int):: ) << 0xc | *(uint*)( encode_bc4(void*,unsigned_char_const*,unsigned_int):: )) | ( ulong )(*(uint*)( encode_bc4(void*,unsigned_char_const*,unsigned_int):: ) | *(uint*)( encode_bc4(void*,unsigned_char_const*,unsigned_int):: ) | *(uint*)( encode_bc4(void*,unsigned_char_const*,unsigned_int):: ) | *(uint*)( encode_bc4(void*,unsigned_char_const*,unsigned_int):: )) << 0x24 | ( ulong )(*(uint*)( encode_bc4(void*,unsigned_char_const*,unsigned_int):: ) | *(uint*)( encode_bc4(void*,unsigned_char_const*,unsigned_int):: ) | *(uint*)( encode_bc4(void*,unsigned_char_const*,unsigned_int):: ) | *(uint*)( encode_bc4(void*,unsigned_char_const*,unsigned_int):: )) << 0x18;
      *(int*)( (long)param_1 + 2 ) = (int)uVar22;
      *(char*)( (long)param_1 + 7 ) = (char)( uVar22 >> 0x28 );
      *(char*)( (long)param_1 + 6 ) = (char)( uVar22 >> 0x20 );
      return;
   }

   *(undefined4*)( (long)param_1 + 2 ) = 0;
   *(undefined2*)( (long)param_1 + 6 ) = 0;
   return;
}
/* basist::encode_bc1_solid_block(void*, unsigned int, unsigned int, unsigned int) */void basist::encode_bc1_solid_block(void *param_1, uint param_2, uint param_3, uint param_4) {
   uint uVar1;
   uint uVar2;
   uint uVar3;
   uint uVar4;
   byte bVar5;
   uint uVar6;
   ulong uVar7;
   byte bVar8;
   ulong uVar9;
   bool bVar10;
   uVar1 = ( uint )(byte)(&g_bc1_match6_equals_1)[(ulong)param_3 * 2] << 5 | ( uint )(byte)(&g_bc1_match5_equals_1)[(ulong)param_4 * 2];
   uVar2 = uVar1 | ( uint )(byte)(&g_bc1_match5_equals_1)[(ulong)param_2 * 2] << 0xb;
   uVar6 = ( uint )(byte)(&DAT_00127f61)[(ulong)param_3 * 2] << 5 | ( uint )(byte)(&DAT_00128161)[(ulong)param_4 * 2] | ( uint )(byte)(&DAT_00128161)[(ulong)param_2 * 2] << 0xb;
   if (uVar2 == uVar6) {
      if (uVar2 == 0) {
         uVar4 = 0;
         bVar5 = 1;
         uVar9 = 0;
         bVar8 = 0;
         uVar6 = 0x55;
      }
 else {
         uVar4 = uVar2 >> 8 & 0xff;
         bVar8 = ( byte )(uVar2 - 1);
         bVar5 = (byte)uVar1;
         uVar9 = ( ulong )(uVar2 - 1 >> 8 & 0xff);
         uVar6 = 0;
      }

   }
 else {
      bVar10 = uVar2 < uVar6;
      uVar3 = uVar2 >> 8 & 0xff;
      uVar1 = uVar2;
      if (!bVar10) {
         uVar1 = uVar6;
      }

      bVar8 = (byte)uVar1;
      uVar1 = uVar6 >> 8 & 0xff;
      uVar4 = uVar1;
      if (!bVar10) {
         uVar6 = uVar2;
         uVar4 = uVar3;
      }

      bVar5 = (byte)uVar6;
      if (!bVar10) {
         uVar3 = uVar1;
      }

      uVar9 = (ulong)uVar3;
      uVar6 = -(uint)bVar10 | 0xffffffaa;
   }

   uVar7 = ( ulong )(uVar6 & 0xff);
   *(ulong*)param_1 = ( ( ( ( ( ( uVar7 << 8 | uVar7 ) << 8 | uVar7 ) << 8 | uVar7 ) << 8 | uVar9 ) << 8 | (ulong)bVar8 ) << 8 | (ulong)uVar4 ) << 8 | (ulong)bVar5;
   return;
}
/* basist::encode_bc1(void*, unsigned char const*, unsigned int) */void basist::encode_bc1(void *param_1, uchar *param_2, uint param_3) {
   byte bVar1;
   byte bVar2;
   char cVar3;
   uint uVar4;
   int iVar5;
   int iVar6;
   byte *pbVar7;
   long lVar8;
   byte *pbVar9;
   byte bVar10;
   uint uVar11;
   uint uVar12;
   int iVar13;
   undefined1 uVar14;
   uint uVar15;
   uint uVar16;
   int iVar17;
   uint uVar18;
   uint uVar19;
   uint uVar20;
   int iVar21;
   int iVar22;
   int iVar23;
   uint uVar24;
   uint uVar25;
   uint uVar26;
   uint uVar27;
   byte *pbVar28;
   int iVar29;
   long in_FS_OFFSET;
   float fVar30;
   undefined8 extraout_XMM0_Qb;
   undefined1 auVar31[16];
   float fVar32;
   float fVar33;
   float fVar34;
   float fVar35;
   int local_c4;
   vec3F *local_b8;
   int local_ac;
   int local_a0;
   float local_98;
   float fStack_94;
   float local_90;
   int local_8c;
   int local_88;
   int local_84;
   float local_78;
   float fStack_74;
   float local_70;
   float local_6c;
   float local_68;
   float local_64;
   byte local_58[16];
   byte local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 & 4 ) == 0) {
      bVar10 = *param_2;
      bVar2 = param_2[1];
      lVar8 = 1;
      uVar19 = (uint)param_2[2];
      LAB_0011a2e0:if (( ( bVar10 == param_2[lVar8 * 4] ) && ( bVar2 == param_2[lVar8 * 4 + 1] ) ) && ( param_2[2] == param_2[lVar8 * 4 + 2] )) goto code_r0x0011a2fe;
      uVar11 = (uint)bVar10;
      uVar16 = (uint)bVar2;
      pbVar28 = param_2 + 4;
      uVar24 = (uint)bVar2;
      uVar25 = (uint)bVar10;
      uVar4 = uVar24;
      uVar18 = uVar25;
      uVar15 = uVar19;
      uVar26 = uVar19;
      do {
         bVar10 = *pbVar28;
         bVar2 = pbVar28[1];
         bVar1 = pbVar28[2];
         uVar27 = (uint)bVar10;
         if (uVar11 < bVar10) {
            uVar11 = uVar27;
         }

         uVar20 = (uint)bVar2;
         if (uVar16 < bVar2) {
            uVar16 = uVar20;
         }

         uVar12 = (uint)bVar1;
         if (uVar19 < bVar1) {
            uVar19 = uVar12;
         }

         if (uVar27 < uVar25) {
            uVar25 = uVar27;
         }

         if (uVar20 < uVar24) {
            uVar24 = uVar20;
         }

         if (uVar12 < uVar26) {
            uVar26 = uVar12;
         }

         pbVar28 = pbVar28 + 4;
         uVar18 = uVar18 + bVar10;
         uVar4 = uVar4 + bVar2;
         uVar15 = uVar15 + bVar1;
      }
 while ( pbVar28 != param_2 + 0x40 );
      local_ac = (int)( uVar15 + 8 ) >> 4;
      local_c4 = (int)( uVar18 + 8 ) >> 4;
      local_a0 = (int)( uVar4 + 8 ) >> 4;
      local_84 = 0;
      local_88 = 0;
      local_8c = 0;
      local_90 = 0.0;
      fStack_94 = 0.0;
      local_98 = 0.0;
      pbVar28 = param_2;
      do {
         pbVar7 = pbVar28 + 4;
         iVar29 = ( uint ) * pbVar28 - local_c4;
         iVar5 = (uint)pbVar28[2] - local_ac;
         iVar13 = (uint)pbVar28[1] - local_a0;
         local_98 = (float)( (int)local_98 + iVar29 * iVar29 );
         local_90 = (float)( (int)local_90 + iVar29 * iVar5 );
         fStack_94 = (float)( (int)fStack_94 + iVar29 * iVar13 );
         local_8c = local_8c + iVar13 * iVar13;
         local_88 = local_88 + iVar13 * iVar5;
         local_84 = local_84 + iVar5 * iVar5;
         pbVar28 = pbVar7;
      }
 while ( pbVar7 != param_2 + 0x40 );
      lVar8 = 0;
      do {
         *(ulong*)( (long)&local_78 + lVar8 ) = CONCAT44((float)(int)( ( ulong ) * (undefined8*)( (long)&local_98 + lVar8 ) >> 0x20 ) * _LC96._4_4_, (float)(int)*(undefined8*)( (long)&local_98 + lVar8 ) * (float)_LC96);
         lVar8 = lVar8 + 8;
      }
 while ( lVar8 != 0x18 );
      fVar35 = (float)(int)( uVar19 - uVar26 );
      fVar32 = (float)(int)( uVar16 - uVar24 );
      iVar5 = 4;
      fVar30 = (float)(int)( uVar11 - uVar25 );
      do {
         fVar33 = local_78 * fVar30 + fStack_74 * fVar32 + local_70 * fVar35;
         fVar34 = fVar32 * local_68;
         fVar32 = fStack_74 * fVar30 + local_6c * fVar32 + local_68 * fVar35;
         fVar35 = fVar35 * local_64 + fVar30 * local_70 + fVar34;
         iVar5 = iVar5 + -1;
         fVar30 = fVar33;
      }
 while ( iVar5 != 0 );
      fVar30 = (float)( _LC26 & (uint)fVar33 );
      if ((float)( _LC26 & (uint)fVar33 ) <= (float)( (uint)fVar32 & _LC26 )) {
         fVar30 = (float)( (uint)fVar32 & _LC26 );
      }

      if (fVar30 <= (float)( (uint)fVar35 & _LC26 )) {
         fVar30 = (float)( (uint)fVar35 & _LC26 );
      }

      if (fVar30 < _LC27) {
         iVar13 = 0x75;
         iVar29 = 0x259;
         iVar5 = 0x132;
      }
 else {
         fVar30 = _LC97 / fVar30;
         iVar5 = (int)( fVar33 * fVar30 );
         iVar29 = (int)( fVar32 * fVar30 );
         iVar13 = (int)( fVar30 * fVar35 );
      }

      lVar8 = 0;
      iVar22 = 0;
      iVar17 = 0;
      iVar23 = -0x80000000;
      iVar21 = 0x7fffffff;
      do {
         iVar6 = (uint)param_2[lVar8 * 4 + 1] * iVar29 + (uint)param_2[lVar8 * 4] * iVar5 + (uint)param_2[lVar8 * 4 + 2] * iVar13;
         if (iVar6 < iVar21) {
            iVar21 = iVar6;
            iVar17 = (int)lVar8;
         }

         if (iVar23 < iVar6) {
            iVar23 = iVar6;
            iVar22 = (int)lVar8;
         }

         lVar8 = lVar8 + 1;
      }
 while ( lVar8 != 0x10 );
      pbVar28 = param_2 + (long)iVar17 * 4;
      uVar25 = ( uint ) * pbVar28 * 0x1f + 0x80;
      uVar24 = (uint)pbVar28[1] * 0x3f + 0x80;
      pbVar7 = param_2 + (long)iVar22 * 4;
      uVar15 = (uint)pbVar28[2] * 0x1f + 0x80;
      uVar11 = ( ( uint ) * pbVar7 * 0x20 - ( uint ) * pbVar7 ) + 0x80;
      uVar4 = ( (uint)pbVar7[1] * 0x40 - (uint)pbVar7[1] ) + 0x80;
      uVar19 = ( (uint)pbVar7[2] * 0x20 - (uint)pbVar7[2] ) + 0x80;
      bc1_find_sels((color32*)param_2, ( uVar25 >> 8 ) + uVar25 >> 8, ( uVar24 >> 8 ) + uVar24 >> 8, ( uVar15 >> 8 ) + uVar15 >> 8, ( uVar11 >> 8 ) + uVar11 >> 8, ( uVar4 >> 8 ) + uVar4 >> 8, ( uVar19 >> 8 ) + uVar19 >> 8, local_58);
      goto LAB_0011a0e2;
   }

   uVar19 = *(uint*)( (long)param_1 + 4 );
   bVar10 = 0;
   pbVar28 = local_58;
   do {
      pbVar7 = pbVar28 + 1;
      bVar2 = bVar10 & 0x1f;
      bVar10 = bVar10 + 2;
      *pbVar28 = *(byte*)( (long)&encode_bc1_alt(void*,unsigned_char_const*,unsigned_int ) + ( ulong )(uVar19 >> bVar2 & 3);
      pbVar28 = pbVar7;
   }
 while ( pbVar7 != local_48 );
   local_ac = 0;
   local_a0 = 0;
   local_c4 = -1;
   LAB_0011a0e2:local_b8 = (vec3F*)&local_78;
   pbVar28 = local_58;
   iVar5 = 3;
   if (( param_3 & 2 ) == 0) {
      iVar5 = ( param_3 & 1 ) + 1;
   }

   iVar29 = 0;
   fVar30 = _LC2;
   fVar32 = _LC98;
   fVar35 = _LC99;
   do {
      cVar3 = compute_least_squares_endpoints_rgb((color32*)param_2, pbVar28, (vec3F*)&local_98, local_b8);
      if (cVar3 == '\0') {
         if (local_c4 < 0) {
            iVar17 = 0;
            iVar13 = 0;
            iVar22 = 0;
            pbVar7 = param_2;
            do {
               pbVar9 = pbVar7 + 4;
               iVar22 = iVar22 + ( uint ) * pbVar7;
               iVar13 = iVar13 + (uint)pbVar7[1];
               iVar17 = iVar17 + (uint)pbVar7[2];
               pbVar7 = pbVar9;
            }
 while ( pbVar9 != param_2 + 0x40 );
            local_c4 = iVar22 + 8 >> 4;
            local_a0 = iVar13 + 8 >> 4;
            local_ac = iVar17 + 8 >> 4;
         }

         uVar19 = ( uint )(byte)(&g_bc1_match5_equals_1)[(long)local_c4 * 2];
         uVar11 = ( uint )(byte)(&g_bc1_match6_equals_1)[(long)local_a0 * 2];
         uVar15 = ( uint )(byte)(&g_bc1_match5_equals_1)[(long)local_ac * 2];
         uVar24 = ( uint )(byte)(&DAT_00128161)[(long)local_c4 * 2];
         uVar25 = ( uint )(byte)(&DAT_00127f61)[(long)local_a0 * 2];
         uVar4 = ( uint )(byte)(&DAT_00128161)[(long)local_ac * 2];
      }
 else {
         uVar19 = ( uint )(local_98 * fVar32 + fVar30);
         if (0x1f < (int)uVar19) {
            uVar19 = 0x1f;
         }

         if ((int)uVar19 < 0) {
            uVar19 = 0;
         }

         uVar11 = ( uint )(fStack_94 * fVar35 + fVar30);
         if (0x3f < (int)uVar11) {
            uVar11 = 0x3f;
         }

         if ((int)uVar11 < 0) {
            uVar11 = 0;
         }

         uVar15 = ( uint )(local_90 * fVar32 + fVar30);
         if (0x1f < (int)uVar15) {
            uVar15 = 0x1f;
         }

         if ((int)uVar15 < 0) {
            uVar15 = 0;
         }

         uVar24 = ( uint )(local_78 * fVar32 + fVar30);
         if (0x1f < (int)uVar24) {
            uVar24 = 0x1f;
         }

         if ((int)uVar24 < 0) {
            uVar24 = 0;
         }

         uVar25 = ( uint )(fStack_74 * fVar35 + fVar30);
         if (0x3f < (int)uVar25) {
            uVar25 = 0x3f;
         }

         if ((int)uVar25 < 0) {
            uVar25 = 0;
         }

         uVar4 = ( uint )(local_70 * fVar32 + fVar30);
         if (0x1f < (int)uVar4) {
            uVar4 = 0x1f;
         }

         if ((int)uVar4 < 0) {
            uVar4 = 0;
         }

      }

      iVar29 = iVar29 + 1;
      auVar31._0_8_ = bc1_find_sels((color32*)param_2, uVar19, uVar11, uVar15, uVar24, uVar25, uVar4, pbVar28);
      auVar31._8_8_ = extraout_XMM0_Qb;
   }
 while ( iVar5 != iVar29 );
   uVar15 = uVar11 << 5 | uVar19 << 0xb | uVar15;
   uVar4 = uVar4 | uVar25 << 5 | uVar24 << 0xb;
   uVar11 = uVar15 & 0xffff;
   uVar19 = uVar4 & 0xffff;
   if (uVar11 == uVar19) {
      if (uVar11 == 0) {
         uVar14 = 0x55;
         uVar19 = _LC8;
      }
 else {
         uVar19 = ( ( uVar4 - 1 & 0xff00 | uVar11 - 1 & 0xff ) << 8 | uVar15 >> 8 & 0xff ) << 8 | uVar15 & 0xff;
         uVar14 = 0;
      }

      auVar31 = pshuflw(auVar31, ZEXT216(CONCAT11(uVar14, uVar14)), 0);
      *(uint*)param_1 = uVar19;
      uVar19 = auVar31._0_4_;
   }
 else {
      uVar18 = 0x55;
      uVar24 = uVar15;
      uVar25 = uVar11;
      if (uVar19 <= uVar11) {
         uVar18 = 0;
         uVar24 = uVar4;
         uVar4 = uVar15;
         uVar25 = uVar19;
         uVar19 = uVar11;
      }

      bVar10 = 0;
      uVar11 = 0;
      *(uint*)param_1 = ( uVar4 >> 8 & 0xff | ( uVar24 & 0xff00 | uVar25 & 0xff ) << 8 ) << 8 | uVar19 & 0xff;
      do {
         bVar2 = *pbVar28;
         pbVar28 = pbVar28 + 1;
         bVar1 = bVar10 & 0x1f;
         bVar10 = bVar10 + 2;
         uVar11 = uVar11 | ( uint ) * (byte*)( (long)&basisu_transcoder_init()::s_linear_dxt1_to_dxt1 + (ulong)bVar2 ) << bVar1;
      }
 while ( pbVar28 != local_48 );
      uVar19 = ( ( ( uVar18 ^ uVar11 >> 0x18 ) << 8 | ( uVar11 >> 0x10 ^ uVar18 ) & 0xff ) << 8 | ( uint )(byte)((byte)uVar18 ^ ( byte )(uVar11 >> 8)) ) << 8 | ( uVar18 ^ uVar11 ) & 0xff;
   }

   *(uint*)( (long)param_1 + 4 ) = uVar19;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0011a8d7:/* WARNING: Subroutine does not return */__stack_chk_fail();
   code_r0x0011a2fe:lVar8 = lVar8 + 1;
   if (lVar8 == 0x10) goto code_r0x0011a308;
   goto LAB_0011a2e0;
   code_r0x0011a308:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      encode_bc1_solid_block(param_1, (uint)bVar10, (uint)bVar2, uVar19);
      return;
   }

   goto LAB_0011a8d7;
}
/* basist::encode_bc1_alt(void*, unsigned char const*, unsigned int) */void basist::encode_bc1_alt(void *param_1, uchar *param_2, uint param_3) {
   byte bVar1;
   byte bVar2;
   char cVar3;
   uint uVar4;
   uint uVar5;
   uint uVar6;
   byte *pbVar7;
   byte *pbVar8;
   byte bVar9;
   int iVar10;
   uint uVar11;
   uint uVar12;
   undefined1 uVar13;
   int iVar14;
   int iVar15;
   uint uVar16;
   uint uVar17;
   uint uVar18;
   bool bVar19;
   uint uVar20;
   byte *pbVar21;
   int iVar22;
   int iVar23;
   uint uVar24;
   long lVar25;
   uint uVar26;
   int iVar27;
   int iVar28;
   uint uVar29;
   int iVar30;
   int iVar31;
   int iVar32;
   uint uVar33;
   uint uVar34;
   long in_FS_OFFSET;
   float fVar35;
   undefined8 extraout_XMM0_Qa;
   undefined8 extraout_XMM0_Qb;
   undefined8 extraout_XMM0_Qb_00;
   undefined1 auVar36[16];
   float fVar37;
   float fVar38;
   float fVar39;
   uint local_c8;
   uint local_b0;
   uint local_ac;
   uint local_a8;
   int local_a4;
   uint local_98;
   uint local_90;
   uint local_8c;
   int local_88;
   int local_84;
   float local_70;
   float local_6c;
   float local_68;
   float local_64;
   float local_60;
   float local_5c;
   byte local_58[16];
   byte local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 & 4 ) == 0) {
      bVar9 = *param_2;
      bVar2 = param_2[1];
      bVar1 = param_2[2];
      lVar25 = 1;
      local_90 = (uint)bVar9;
      local_98 = (uint)bVar2;
      local_8c = (uint)bVar1;
      LAB_0011ac20:uVar16 = (uint)bVar9;
      local_c8 = (uint)bVar1;
      if (( ( bVar9 == param_2[lVar25 * 4] ) && ( bVar2 == param_2[lVar25 * 4 + 1] ) ) && ( bVar1 == param_2[lVar25 * 4 + 2] )) goto code_r0x0011ac40;
      uVar6 = (uint)bVar9;
      uVar12 = (uint)bVar1;
      uVar18 = (uint)bVar2;
      bVar19 = uVar6 == uVar12 && uVar16 == bVar2;
      pbVar21 = param_2 + 4;
      uVar20 = uVar6;
      uVar11 = uVar18;
      uVar34 = uVar12;
      uVar33 = uVar12;
      uVar26 = uVar18;
      uVar29 = uVar6;
      uVar4 = uVar18;
      do {
         bVar9 = *pbVar21;
         bVar2 = pbVar21[1];
         bVar1 = pbVar21[2];
         bVar19 = (bool)( bVar19 & ( bVar9 == bVar1 && bVar9 == bVar2 ) );
         if (uVar20 < bVar9) {
            uVar20 = (uint)bVar9;
         }

         uVar24 = (uint)bVar2;
         if (uVar11 < uVar24) {
            uVar11 = uVar24;
         }

         uVar17 = (uint)bVar1;
         if (uVar34 < uVar17) {
            uVar34 = uVar17;
         }

         uVar5 = (uint)bVar9;
         if (uVar5 < uVar29) {
            uVar29 = uVar5;
         }

         if (uVar24 < uVar26) {
            uVar26 = (uint)bVar2;
         }

         if (uVar17 < uVar33) {
            uVar33 = (uint)bVar1;
         }

         uVar16 = uVar16 + uVar5;
         pbVar21 = pbVar21 + 4;
         local_c8 = local_c8 + bVar1;
         uVar4 = uVar4 + bVar2;
      }
 while ( pbVar21 != param_2 + 0x40 );
      if (bVar19) {
         if ((int)( uVar20 - uVar29 ) < 2) {
            local_84 = 0;
            local_88 = 0;
            local_a4 = -1;
            uVar16 = uVar6 * 0x1f + 0x80;
            uVar11 = ( uVar16 >> 8 ) + uVar16 >> 8;
            uVar16 = uVar6 * 0x3f + 0x80;
            uVar16 = ( uVar16 >> 8 ) + uVar16 >> 8;
            local_b0 = uVar11;
            local_ac = uVar11;
            local_a8 = uVar16;
            local_90 = uVar11;
         }
 else {
            local_84 = 0;
            local_88 = 0;
            local_a4 = -1;
            uVar16 = uVar29 * 0x1f + 0x80;
            uVar11 = ( uVar16 >> 8 ) + uVar16 >> 8;
            uVar16 = uVar29 * 0x3f + 0x80;
            uVar16 = ( uVar16 >> 8 ) + uVar16 >> 8;
            uVar34 = uVar20 * 0x1f + 0x80;
            local_ac = ( uVar34 >> 8 ) + uVar34 >> 8;
            uVar20 = uVar20 * 0x3f + 0x80;
            local_b0 = uVar11;
            local_a8 = ( uVar20 >> 8 ) + uVar20 >> 8;
            local_90 = local_ac;
         }

      }
 else {
         local_88 = (int)( uVar4 + 8 ) >> 4;
         local_a4 = (int)( uVar16 + 8 ) >> 4;
         iVar30 = uVar11 - local_88;
         iVar27 = uVar20 - local_a4;
         local_84 = (int)( local_c8 + 8 ) >> 4;
         iVar10 = ( uVar29 - local_a4 ) * ( uVar29 - local_a4 ) * 8;
         iVar15 = iVar27 * iVar27 * 8;
         iVar31 = iVar30 * iVar30 * 8;
         iVar32 = uVar34 - local_84;
         iVar28 = ( uVar26 - local_88 ) * ( uVar26 - local_88 ) * 8;
         iVar23 = ( uVar33 - local_84 ) * ( uVar33 - local_84 ) * 8;
         iVar22 = iVar15 + iVar31;
         iVar14 = iVar10 + iVar28;
         iVar28 = iVar28 + iVar15;
         iVar10 = iVar10 + iVar31;
         iVar15 = iVar32 * iVar32 * 8;
         uVar16 = iVar23 + iVar28 | 1;
         uVar20 = iVar15 + iVar14 | 4;
         if (uVar20 <= uVar16) {
            uVar16 = uVar20;
         }

         uVar20 = iVar14 + iVar23;
         if (uVar16 <= uVar20) {
            uVar20 = uVar16;
         }

         uVar16 = iVar28 + iVar15 | 5;
         if (uVar16 < uVar20) {
            uVar20 = uVar16;
         }

         uVar16 = iVar23 + iVar10 | 2;
         if (uVar20 <= uVar16) {
            uVar16 = uVar20;
         }

         uVar20 = iVar23 + iVar22 | 3;
         if (uVar16 <= uVar20) {
            uVar20 = uVar16;
         }

         uVar16 = iVar10 + iVar15 | 6;
         if (uVar16 < uVar20) {
            uVar20 = uVar16;
         }

         uVar16 = iVar15 + iVar22 | 7;
         if (uVar16 < uVar20) {
            uVar20 = uVar16;
         }

         iVar14 = local_a4 - uVar29;
         if (( uVar20 & 1 ) != 0) {
            iVar14 = iVar27;
         }

         iVar22 = local_88 - uVar26;
         if (( uVar20 & 2 ) != 0) {
            iVar22 = iVar30;
         }

         iVar10 = local_84 - uVar33;
         if (( uVar20 & 4 ) != 0) {
            iVar10 = iVar32;
         }

         if (( iVar14 != 0 || iVar22 != 0 ) || iVar10 != 0) {
            lVar25 = 0;
            uVar29 = 0x80000000;
            uVar26 = 0x7fffffff;
            uVar4 = 0x80000000;
            uVar33 = 0x7fffffff;
            uVar20 = 0x80000000;
            uVar16 = 0x7fffffff;
            uVar34 = 0x80000000;
            uVar11 = 0x7fffffff;
            do {
               iVar28 = (uint)param_2[lVar25 * 4 + 1] * iVar22;
               iVar15 = (uint)param_2[lVar25 * 4] * iVar14 + (uint)param_2[lVar25 * 4 + 2] * iVar10;
               iVar23 = (uint)param_2[lVar25 * 4 + 2] * iVar10 - (uint)param_2[lVar25 * 4] * iVar14;
               iVar27 = (int)lVar25;
               uVar24 = ( iVar15 + iVar28 ) * 0x10 + iVar27;
               uVar6 = ( iVar23 + iVar28 ) * 0x10 + iVar27;
               uVar12 = ( iVar23 - iVar28 ) * 0x10 + iVar27;
               uVar18 = ( iVar15 - iVar28 ) * 0x10 + iVar27;
               if ((int)uVar24 < (int)uVar11) {
                  uVar11 = uVar24;
               }

               if ((int)uVar34 < (int)( uVar24 ^ 0xf )) {
                  uVar34 = uVar24 ^ 0xf;
               }

               if ((int)uVar12 < (int)uVar16) {
                  uVar16 = uVar12;
               }

               if ((int)uVar20 < (int)( uVar12 ^ 0xf )) {
                  uVar20 = uVar12 ^ 0xf;
               }

               if ((int)uVar6 < (int)uVar33) {
                  uVar33 = uVar6;
               }

               if ((int)uVar4 < (int)( uVar6 ^ 0xf )) {
                  uVar4 = uVar6 ^ 0xf;
               }

               if ((int)uVar18 < (int)uVar26) {
                  uVar26 = uVar18;
               }

               if ((int)uVar29 < (int)( uVar18 ^ 0xf )) {
                  uVar29 = uVar18 ^ 0xf;
               }

               lVar25 = lVar25 + 1;
            }
 while ( lVar25 != 0x10 );
            uVar12 = ( uVar34 & 0xfffffff0 ) - ( uVar11 & 0xfffffff0 );
            uVar6 = ( uVar20 & 0xfffffff0 ) - ( uVar16 & 0xfffffff0 );
            if (uVar6 <= uVar12) {
               uVar6 = uVar12;
               uVar16 = uVar11;
               uVar20 = uVar34;
            }

            uVar11 = ( uVar4 & 0xfffffff0 ) - ( uVar33 & 0xfffffff0 );
            if (uVar6 < uVar11) {
               uVar6 = uVar11;
               uVar16 = uVar33;
               uVar20 = uVar4;
            }

            if (uVar6 < ( uVar29 & 0xfffffff0 ) - ( uVar26 & 0xfffffff0 )) {
               pbVar21 = param_2 + ( ulong )(uVar26 & 0xf) * 4;
               local_90 = ( uint ) * pbVar21;
               local_98 = (uint)pbVar21[1];
               local_8c = (uint)pbVar21[2];
               pbVar21 = param_2 + ( ulong )(~uVar29 & 0xf) * 4;
               uVar6 = ( uint ) * pbVar21;
               uVar18 = (uint)pbVar21[1];
               uVar12 = (uint)pbVar21[2];
            }
 else {
               pbVar21 = param_2 + ( ulong )(uVar16 & 0xf) * 4;
               local_90 = ( uint ) * pbVar21;
               local_98 = (uint)pbVar21[1];
               local_8c = (uint)pbVar21[2];
               pbVar21 = param_2 + ( ulong )(~uVar20 & 0xf) * 4;
               uVar6 = ( uint ) * pbVar21;
               uVar18 = (uint)pbVar21[1];
               uVar12 = (uint)pbVar21[2];
            }

         }

         uVar16 = local_90 * 0x1f + 0x80;
         uVar11 = ( uVar16 >> 8 ) + uVar16 >> 8;
         uVar16 = local_98 * 0x3f + 0x80;
         uVar16 = ( uVar16 >> 8 ) + uVar16 >> 8;
         uVar20 = local_8c * 0x1f + 0x80;
         local_b0 = ( uVar20 >> 8 ) + uVar20 >> 8;
         uVar20 = uVar6 * 0x1f + 0x80;
         local_ac = ( uVar20 >> 8 ) + uVar20 >> 8;
         uVar20 = uVar18 * 0x3f + 0x80;
         local_a8 = ( uVar20 >> 8 ) + uVar20 >> 8;
         uVar20 = uVar12 * 0x1f + 0x80;
         local_90 = ( uVar20 >> 8 ) + uVar20 >> 8;
      }

      bc1_find_sels_2((color32*)param_2, uVar11, uVar16, local_b0, local_ac, local_a8, local_90, local_58);
      goto LAB_0011a99e;
   }

   uVar16 = *(uint*)( (long)param_1 + 4 );
   bVar9 = 0;
   pbVar21 = local_58;
   do {
      pbVar7 = pbVar21 + 1;
      bVar2 = bVar9 & 0x1f;
      bVar9 = bVar9 + 2;
      *pbVar21 = *(byte*)( (long)&encode_bc1_alt(void*,unsigned_char_const*,unsigned_int ) + ( ulong )(uVar16 >> bVar2 & 3);
      pbVar21 = pbVar7;
   }
 while ( pbVar7 != local_48 );
   local_90 = 0;
   uVar11 = 0;
   local_a8 = 0;
   local_ac = 0;
   local_b0 = 0;
   uVar16 = 0;
   local_84 = 0;
   local_88 = 0;
   local_a4 = -1;
   LAB_0011a99e:pbVar21 = local_58;
   iVar14 = 3;
   if (( param_3 & 2 ) == 0) {
      iVar14 = ( param_3 & 1 ) + 1;
   }

   iVar22 = 0;
   fVar37 = _LC2;
   fVar38 = _LC98;
   fVar39 = _LC99;
   do {
      cVar3 = compute_least_squares_endpoints_rgb((color32*)param_2, pbVar21, (vec3F*)&local_70, (vec3F*)&local_64);
      auVar36._8_8_ = extraout_XMM0_Qb_00;
      auVar36._0_8_ = extraout_XMM0_Qa;
      if (cVar3 == '\0') {
         if (local_a4 < 0) {
            iVar15 = 0;
            iVar10 = 0;
            iVar23 = 0;
            pbVar7 = param_2;
            do {
               pbVar8 = pbVar7 + 4;
               iVar23 = iVar23 + ( uint ) * pbVar7;
               iVar10 = iVar10 + (uint)pbVar7[1];
               iVar15 = iVar15 + (uint)pbVar7[2];
               pbVar7 = pbVar8;
            }
 while ( pbVar8 != param_2 + 0x40 );
            local_a4 = iVar23 + 8 >> 4;
            local_88 = iVar10 + 8 >> 4;
            local_84 = iVar15 + 8 >> 4;
         }

         uVar20 = ( uint )(byte)(&g_bc1_match5_equals_1)[(long)local_a4 * 2];
         uVar34 = ( uint )(byte)(&g_bc1_match6_equals_1)[(long)local_88 * 2];
         uVar33 = ( uint )(byte)(&g_bc1_match5_equals_1)[(long)local_84 * 2];
         uVar26 = ( uint )(byte)(&DAT_00128161)[(long)local_a4 * 2];
         uVar29 = ( uint )(byte)(&DAT_00127f61)[(long)local_88 * 2];
         uVar4 = ( uint )(byte)(&DAT_00128161)[(long)local_84 * 2];
      }
 else {
         uVar20 = ( uint )(local_70 * fVar38 + fVar37);
         if (0x1f < (int)uVar20) {
            uVar20 = 0x1f;
         }

         if ((int)uVar20 < 0) {
            uVar20 = 0;
         }

         uVar34 = ( uint )(local_6c * fVar39 + fVar37);
         if (0x3f < (int)uVar34) {
            uVar34 = 0x3f;
         }

         if ((int)uVar34 < 0) {
            uVar34 = 0;
         }

         uVar33 = ( uint )(local_68 * fVar38 + fVar37);
         if (0x1f < (int)uVar33) {
            uVar33 = 0x1f;
         }

         if ((int)uVar33 < 0) {
            uVar33 = 0;
         }

         uVar26 = ( uint )(local_64 * fVar38 + fVar37);
         if (0x1f < (int)uVar26) {
            uVar26 = 0x1f;
         }

         if ((int)uVar26 < 0) {
            uVar26 = 0;
         }

         uVar29 = ( uint )(local_60 * fVar39 + fVar37);
         if (0x3f < (int)uVar29) {
            uVar29 = 0x3f;
         }

         fVar35 = local_5c * fVar38 + fVar37;
         auVar36 = ZEXT416((uint)fVar35);
         if ((int)uVar29 < 0) {
            uVar29 = 0;
         }

         uVar4 = (uint)fVar35;
         if (0x1f < (int)uVar4) {
            uVar4 = 0x1f;
         }

         if ((int)uVar4 < 0) {
            uVar4 = 0;
         }

      }

      if (( ( ( uVar20 == uVar11 ) && ( uVar34 == uVar16 ) ) && ( ( uVar33 == local_b0 && ( ( uVar26 == local_ac && ( uVar29 == local_a8 ) ) ) ) ) ) && ( uVar4 == local_90 )) break;
      iVar22 = iVar22 + 1;
      auVar36._0_8_ = bc1_find_sels_2((color32*)param_2, uVar20, uVar34, uVar33, uVar26, uVar29, uVar4, pbVar21);
      auVar36._8_8_ = extraout_XMM0_Qb;
      uVar11 = uVar20;
      local_b0 = uVar33;
      local_ac = uVar26;
      local_a8 = uVar29;
      local_90 = uVar4;
      uVar16 = uVar34;
   }
 while ( iVar14 != iVar22 );
   uVar4 = uVar29 << 5 | uVar26 << 0xb | uVar4;
   uVar33 = uVar34 << 5 | uVar20 << 0xb | uVar33;
   uVar16 = uVar4 & 0xffff;
   uVar20 = uVar33 & 0xffff;
   if (uVar20 == uVar16) {
      if (uVar20 == 0) {
         uVar13 = 0x55;
         uVar16 = _LC8;
      }
 else {
         uVar16 = ( ( uVar4 - 1 & 0xff00 | uVar20 - 1 & 0xff ) << 8 | uVar33 >> 8 & 0xff ) << 8 | uVar33 & 0xff;
         uVar13 = 0;
      }

      auVar36 = pshuflw(auVar36, ZEXT216(CONCAT11(uVar13, uVar13)), 0);
      *(uint*)param_1 = uVar16;
      uVar16 = auVar36._0_4_;
   }
 else {
      uVar26 = 0x55;
      uVar11 = uVar33;
      uVar34 = uVar20;
      if (uVar16 <= uVar20) {
         uVar26 = 0;
         uVar11 = uVar4;
         uVar34 = uVar16;
         uVar16 = uVar20;
         uVar4 = uVar33;
      }

      uVar20 = 0;
      *(uint*)param_1 = ( uVar4 >> 8 & 0xff | ( uVar11 & 0xff00 | uVar34 & 0xff ) << 8 ) << 8 | uVar16 & 0xff;
      bVar9 = 0;
      do {
         bVar2 = *pbVar21;
         pbVar21 = pbVar21 + 1;
         bVar1 = bVar9 & 0x1f;
         bVar9 = bVar9 + 2;
         uVar20 = uVar20 | ( uint ) * (byte*)( (long)&basisu_transcoder_init()::s_linear_dxt1_to_dxt1 + (ulong)bVar2 ) << bVar1;
      }
 while ( pbVar21 != local_48 );
      uVar16 = ( ( ( uVar26 ^ uVar20 >> 0x18 ) << 8 | ( uVar20 >> 0x10 ^ uVar26 ) & 0xff ) << 8 | ( uint )(byte)((byte)uVar26 ^ ( byte )(uVar20 >> 8)) ) << 8 | ( uVar26 ^ uVar20 ) & 0xff;
   }

   *(uint*)( (long)param_1 + 4 ) = uVar16;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0011b3e1:/* WARNING: Subroutine does not return */__stack_chk_fail();
   code_r0x0011ac40:lVar25 = lVar25 + 1;
   if (lVar25 == 0x10) goto code_r0x0011ac4a;
   goto LAB_0011ac20;
   code_r0x0011ac4a:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      encode_bc1_solid_block(param_1, uVar16, (uint)bVar2, local_c8);
      return;
   }

   goto LAB_0011b3e1;
}
/* basist::transcode_uastc_to_bc1_hint0(basist::unpacked_uastc_block const&, void*) */void basist::transcode_uastc_to_bc1_hint0(unpacked_uastc_block *param_1, void *param_2) {
   byte bVar1;
   byte bVar2;
   ushort uVar3;
   ushort uVar4;
   undefined1 uVar5;
   uint uVar6;
   uint uVar7;
   undefined1 uVar8;
   int iVar9;
   uint uVar10;
   uint uVar11;
   bool bVar12;
   undefined1 in_XMM0[16];
   undefined1 auVar13[16];
   uVar10 = *(uint*)( param_1 + 0x68 );
   uVar5 = g_uastc_mode_endpoint_ranges[uVar10];
   bVar1 = g_astc_unquant[(ulong)CONCAT11(uVar5, param_1[0x15]) * 2];
   uVar6 = ( ( (uint)bVar1 * 0x20 - (uint)bVar1 ) + 0x7f ) / 0xff;
   uVar11 = uVar6 << 0xb;
   if (g_uastc_mode_comps[uVar10] == '\x02') {
      bVar2 = g_astc_unquant[(ulong)CONCAT11(uVar5, param_1[0x16]) * 2];
      uVar6 = uVar6 | ( (uint)bVar1 * 0x3f + 0x7f ) / 0xff << 5 | uVar11;
      *(short*)param_2 = (short)uVar6;
      uVar8 = ( undefined1 )(uVar6 >> 8);
      uVar11 = ( (uint)bVar2 * 0x20 - (uint)bVar2 ) + 0x7f;
      uVar11 = ( (uint)bVar2 * 0x3f + 0x7f ) / 0xff << 5 | uVar11 / 0xff << 0xb | uVar11 / 0xff;
      uVar5 = ( undefined1 )(uVar11 >> 8);
   }
 else {
      uVar6 = ( ( (uint)(byte)g_astc_unquant[(ulong)CONCAT11(uVar5, param_1[0x17]) * 2] * 0x40 - (uint)(byte)g_astc_unquant[(ulong)CONCAT11(uVar5, param_1[0x17]) * 2] ) + 0x7f ) / 0xff << 5 | uVar11 | ( ( (uint)(byte)g_astc_unquant[(ulong)CONCAT11(uVar5, param_1[0x19]) * 2] * 0x20 - (uint)(byte)g_astc_unquant[(ulong)CONCAT11(uVar5, param_1[0x19]) * 2] ) + 0x7f ) / 0xff;
      *(short*)param_2 = (short)uVar6;
      uVar8 = ( undefined1 )(uVar6 >> 8);
      uVar7 = ( ( (uint)(byte)g_astc_unquant[(ulong)CONCAT11(uVar5, param_1[0x18]) * 2] * 0x40 - (uint)(byte)g_astc_unquant[(ulong)CONCAT11(uVar5, param_1[0x18]) * 2] ) + 0x7f ) / 0xff << 5 | ( (uint)(byte)g_astc_unquant[(ulong)CONCAT11(uVar5, param_1[0x16]) * 2] * 0x1f + 0x7f ) / 0xff << 0xb;
      uVar11 = uVar7 | ( (uint)(byte)g_astc_unquant[(ulong)CONCAT11(uVar5, param_1[0x1a]) * 2] * 0x1f + 0x7f ) / 0xff;
      uVar5 = ( undefined1 )(uVar7 >> 8);
   }

   *(char*)( (long)param_2 + 2 ) = (char)uVar11;
   /* WARNING: Load size is inaccurate */
   uVar3 = *param_2;
   *(undefined1*)( (long)param_2 + 3 ) = uVar5;
   uVar4 = *(ushort*)( (long)param_2 + 2 );
   if (uVar4 != uVar3) {
      if (uVar3 < uVar4) {
         *(char*)param_2 = (char)uVar11;
         *(char*)( (long)param_2 + 2 ) = (char)uVar6;
         *(undefined1*)( (long)param_2 + 1 ) = uVar5;
         *(undefined1*)( (long)param_2 + 3 ) = uVar8;
      }

      iVar9 = 0xf;
      uVar6 = 0;
      do {
         uVar6 = uVar6 << 2 | ( uint )(*(byte*)( *(long*)( s_uastc_to_bc1_weights + (ulong)(byte)g_uastc_mode_weight_bits[uVar10] * 8 ) + (ulong)(byte)param_1[(long)( iVar9 << ( g_uastc_mode_planes[uVar10] - 1 & 0x1f ) ) + 0x27] ) ^ uVar3 < uVar4);
         bVar12 = iVar9 != 0;
         iVar9 = iVar9 + -1;
      }
 while ( bVar12 );
      *(uint*)( (long)param_2 + 4 ) = uVar6;
      return;
   }

   if (uVar4 == 0) {
      uVar5 = 0x55;
      uVar10 = _LC8;
   }
 else {
      uVar5 = 0;
      uVar10 = ( ( uVar4 - 1 & 0xffff ) << 8 | ( uint )(byte)(uVar3 >> 8) ) << 8 | uVar3 & 0xff;
   }

   *(uint*)param_2 = uVar10;
   auVar13 = pshuflw(in_XMM0, ZEXT216(CONCAT11(uVar5, uVar5)), 0);
   *(int*)( (long)param_2 + 4 ) = auVar13._0_4_;
   return;
}
/* basist::transcode_uastc_to_bc1_hint1(basist::unpacked_uastc_block const&, basist::color32 const
   (*) [4], void*, bool) */void basist::transcode_uastc_to_bc1_hint1(unpacked_uastc_block *param_1, color32 *param_2, void *param_3, bool param_4) {
   uint uVar1;
   uint uVar2;
   int iVar3;
   bool bVar4;
   uVar1 = *(uint*)( param_1 + 0x68 );
   *(undefined4*)param_3 = 1;
   iVar3 = 0xf;
   uVar2 = 0;
   do {
      uVar2 = uVar2 << 2 | ( uint ) * (byte*)( *(long*)( s_uastc_to_bc1_weights + (ulong)(byte)g_uastc_mode_weight_bits[uVar1] * 8 ) + (ulong)(byte)param_1[(long)( iVar3 << ( g_uastc_mode_planes[uVar1] - 1 & 0x1f ) ) + 0x27] );
      bVar4 = iVar3 != 0;
      iVar3 = iVar3 + -1;
   }
 while ( bVar4 );
   *(uint*)( (long)param_3 + 4 ) = uVar2;
   encode_bc1(param_3, (uchar*)param_2, param_4 + 4);
   return;
}
/* basist::transcode_uastc_to_bc1(basist::uastc_block const&, void*, bool) */undefined4 basist::transcode_uastc_to_bc1(uastc_block *param_1, void *param_2, bool param_3) {
   char cVar1;
   undefined4 uVar2;
   long in_FS_OFFSET;
   color32 acStack_108[64];
   unpacked_uastc_block local_c8[104];
   uint local_60;
   uint local_5c;
   color32 local_58;
   byte local_57;
   byte local_56;
   char local_54;
   char local_53;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = unpack_uastc(param_1, local_c8, false, true);
   if ((char)uVar2 != '\0') {
      if (local_60 == 8) {
         encode_bc1_solid_block(param_2, (uint)(byte)local_58, (uint)local_57, (uint)local_56);
         goto LAB_0011b7a6;
      }

      if (( !param_3 ) && ( local_54 != '\0' )) {
         transcode_uastc_to_bc1_hint0(local_c8, param_2);
         goto LAB_0011b7a6;
      }

      cVar1 = unpack_uastc(local_60, local_5c, &local_58, (astc_block_desc*)local_c8, acStack_108, false);
      if (cVar1 != '\0') {
         if (local_53 == '\0') {
            encode_bc1(param_2, (uchar*)acStack_108, (uint)param_3);
         }
 else {
            transcode_uastc_to_bc1_hint1(local_c8, acStack_108, param_2, param_3);
         }

         goto LAB_0011b7a6;
      }

   }

   uVar2 = 0;
   LAB_0011b7a6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* basist::transcode_uastc_to_bc3(basist::uastc_block const&, void*, bool) */undefined4 basist::transcode_uastc_to_bc3(uastc_block *param_1, void *param_2, bool param_3) {
   void *pvVar1;
   char cVar2;
   undefined4 uVar3;
   uint uVar4;
   long in_FS_OFFSET;
   color32 acStack_118[3];
   uchar local_115[61];
   unpacked_uastc_block local_d8[104];
   uint local_70;
   uint local_6c;
   color32 local_68;
   byte local_67;
   byte local_66;
   undefined1 local_65;
   char local_64;
   char local_63;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = unpack_uastc(param_1, local_d8, false, true);
   if ((char)uVar3 != '\0') {
      pvVar1 = (void*)( (long)param_2 + 8 );
      if (local_70 == 8) {
         *(undefined4*)( (long)param_2 + 2 ) = 0;
         *(ushort*)param_2 = CONCAT11(local_65, local_65);
         *(undefined2*)( (long)param_2 + 6 ) = 0;
         encode_bc1_solid_block(pvVar1, (uint)(byte)local_68, (uint)local_67, (uint)local_66);
         goto LAB_0011b8b2;
      }

      cVar2 = unpack_uastc(local_70, local_6c, &local_68, (astc_block_desc*)local_d8, acStack_118, false);
      if (cVar2 != '\0') {
         encode_bc4(param_2, local_115, 4);
         if (param_3) {
            uVar4 = 1;
         }
 else {
            if (local_64 != '\0') {
               transcode_uastc_to_bc1_hint0(local_d8, pvVar1);
               goto LAB_0011b8b2;
            }

            uVar4 = 0;
         }

         if (local_63 == '\0') {
            encode_bc1(pvVar1, (uchar*)acStack_118, uVar4);
         }
 else {
            transcode_uastc_to_bc1_hint1(local_d8, acStack_118, pvVar1, param_3);
         }

         goto LAB_0011b8b2;
      }

   }

   uVar3 = 0;
   LAB_0011b8b2:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}
/* basist::transcode_uastc_to_bc4(basist::uastc_block const&, void*, bool, unsigned int) */undefined4 basist::transcode_uastc_to_bc4(uastc_block *param_1, void *param_2, bool param_3, uint param_4) {
   char cVar1;
   undefined4 uVar2;
   long in_FS_OFFSET;
   color32 acStack_108[64];
   unpacked_uastc_block local_c8[104];
   uint local_60;
   uint local_5c;
   color32 local_58[40];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = unpack_uastc(param_1, local_c8, false, true);
   if ((char)uVar2 != '\0') {
      if (local_60 == 8) {
         *(undefined4*)( (long)param_2 + 2 ) = 0;
         *(ushort*)param_2 = CONCAT11(local_58[param_4], local_58[param_4]);
         *(undefined2*)( (long)param_2 + 6 ) = 0;
         goto LAB_0011ba28;
      }

      cVar1 = unpack_uastc(local_60, local_5c, local_58, (astc_block_desc*)local_c8, acStack_108, false);
      if (cVar1 != '\0') {
         encode_bc4(param_2, (uchar*)( acStack_108 + param_4 ), 4);
         goto LAB_0011ba28;
      }

   }

   uVar2 = 0;
   LAB_0011ba28:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* basist::transcode_uastc_to_bc5(basist::uastc_block const&, void*, bool, unsigned int, unsigned
   int) */undefined4 basist::transcode_uastc_to_bc5(uastc_block *param_1, void *param_2, bool param_3, uint param_4, uint param_5) {
   color32 cVar1;
   color32 cVar2;
   char cVar3;
   undefined4 uVar4;
   long in_FS_OFFSET;
   color32 acStack_118[64];
   unpacked_uastc_block local_d8[104];
   uint local_70;
   uint local_6c;
   color32 local_68[40];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar4 = unpack_uastc(param_1, local_d8, false, true);
   if ((char)uVar4 != '\0') {
      if (local_70 == 8) {
         cVar1 = local_68[param_4];
         *(undefined4*)( (long)param_2 + 2 ) = 0;
         *(undefined4*)( (long)param_2 + 10 ) = 0;
         cVar2 = local_68[param_5];
         *(ushort*)param_2 = CONCAT11(cVar1, cVar1);
         *(undefined2*)( (long)param_2 + 6 ) = 0;
         *(ushort*)( (long)param_2 + 8 ) = CONCAT11(cVar2, cVar2);
         *(undefined2*)( (long)param_2 + 0xe ) = 0;
         goto LAB_0011bb21;
      }

      cVar3 = unpack_uastc(local_70, local_6c, local_68, (astc_block_desc*)local_d8, acStack_118, false);
      if (cVar3 != '\0') {
         encode_bc4(param_2, (uchar*)( acStack_118 + param_4 ), 4);
         encode_bc4((void*)( (long)param_2 + 8 ), (uchar*)( acStack_118 + param_5 ), 4);
         goto LAB_0011bb21;
      }

   }

   uVar4 = 0;
   LAB_0011bb21:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* basist::transcode_uastc_to_etc2_eac_r11(basist::uastc_block const&, void*, bool, unsigned int) */undefined4 basist::transcode_uastc_to_etc2_eac_r11(uastc_block *param_1, void *param_2, bool param_3, uint param_4) {
   color32 cVar1;
   char cVar2;
   undefined4 uVar3;
   code *pcVar4;
   long in_FS_OFFSET;
   color32 acStack_118[64];
   unpacked_uastc_block local_d8[104];
   uint local_70;
   uint local_6c;
   color32 local_68[40];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = unpack_uastc(param_1, local_d8, false, true);
   if ((char)uVar3 != '\0') {
      if (local_70 == 8) {
         cVar1 = local_68[param_4];
         *(undefined1*)( (long)param_2 + 1 ) = 0xd;
         *(undefined4*)( (long)param_2 + 2 ) = 0x92244992;
         *(color32*)param_2 = cVar1;
         *(undefined2*)( (long)param_2 + 6 ) = 0x2449;
         goto LAB_0011bc82;
      }

      cVar2 = unpack_uastc(local_70, local_6c, local_68, (astc_block_desc*)local_d8, acStack_118, false);
      if (cVar2 != '\0') {
         if (param_4 == 3) {
            transcode_uastc_to_etc2_eac_a8(local_d8, acStack_118, param_2);
         }
 else {
            pcVar4 = pack_eac;
            if (param_3) {
               pcVar4 = pack_eac_high_quality;
            }

            ( *pcVar4 )(param_2, acStack_118 + param_4, 4);
         }

         goto LAB_0011bc82;
      }

   }

   uVar3 = 0;
   LAB_0011bc82:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* basist::transcode_uastc_to_etc2_eac_rg11(basist::uastc_block const&, void*, bool, unsigned int,
   unsigned int) */undefined4 basist::transcode_uastc_to_etc2_eac_rg11(uastc_block *param_1, void *param_2, bool param_3, uint param_4, uint param_5) {
   color32 cVar1;
   char cVar2;
   undefined4 uVar3;
   code *pcVar4;
   long in_FS_OFFSET;
   color32 local_118[64];
   unpacked_uastc_block local_d8[104];
   uint local_70;
   uint local_6c;
   color32 local_68[40];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = unpack_uastc(param_1, local_d8, false, true);
   if ((char)uVar3 != '\0') {
      if (local_70 == 8) {
         cVar1 = local_68[param_4];
         *(undefined1*)( (long)param_2 + 1 ) = 0xd;
         *(undefined4*)( (long)param_2 + 2 ) = 0x92244992;
         *(color32*)param_2 = cVar1;
         *(undefined2*)( (long)param_2 + 6 ) = 0x2449;
         cVar1 = local_68[param_5];
         *(undefined1*)( (long)param_2 + 9 ) = 0xd;
         *(color32*)( (long)param_2 + 8 ) = cVar1;
         *(undefined4*)( (long)param_2 + 10 ) = 0x92244992;
         *(undefined2*)( (long)param_2 + 0xe ) = 0x2449;
         goto LAB_0011bdf3;
      }

      cVar2 = unpack_uastc(local_70, local_6c, local_68, (astc_block_desc*)local_d8, local_118, false);
      if (cVar2 != '\0') {
         if (param_4 == 3) {
            transcode_uastc_to_etc2_eac_a8(local_d8, local_118, param_2);
         }
 else {
            pcVar4 = pack_eac;
            if (param_3) {
               pcVar4 = pack_eac_high_quality;
            }

            ( *pcVar4 )(param_2, local_118 + param_4, 4);
         }

         if (param_5 == 3) {
            transcode_uastc_to_etc2_eac_a8(local_d8, local_118, (void*)( (long)param_2 + 8 ));
         }
 else {
            pcVar4 = pack_eac;
            if (param_3) {
               pcVar4 = pack_eac_high_quality;
            }

            ( *pcVar4 )((void*)( (long)param_2 + 8 ), local_118 + param_5, 4);
         }

         goto LAB_0011bdf3;
      }

   }

   uVar3 = 0;
   LAB_0011bdf3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* basist::basisu_lowlevel_uastc_transcoder::transcode_slice(void*, unsigned int, unsigned int,
   unsigned char const*, unsigned int, basist::block_format, unsigned int, bool, bool, unsigned int,
   unsigned int, unsigned int, basist::basisu_transcoder_state*, unsigned int, int, int, unsigned
   int) */char basist::basisu_lowlevel_uastc_transcoder::transcode_slice(undefined8 param_1_00, void *param_1, uint param_2, uint param_3, uastc_block *param_4, uint param_5, int param_7, uint param_8, undefined8 param_9, char param_10, uint param_11, uint param_12, uint param_13, undefined8 param_14, uint param_15, uint param_16, uint param_17, uint param_18) {
   undefined8 uVar1;
   undefined8 uVar2;
   char cVar3;
   bool bVar4;
   char cVar5;
   ushort uVar6;
   uastc_block *puVar7;
   long lVar8;
   bc7_optimization_results *pbVar9;
   void *pvVar10;
   int iVar11;
   uint uVar12;
   uint uVar13;
   undefined1 *puVar14;
   undefined1 *puVar15;
   undefined1 *puVar16;
   uint uVar17;
   uint uVar18;
   uint uVar19;
   uint uVar20;
   undefined1 *puVar21;
   uint uVar22;
   uint uVar23;
   bc7_optimization_results *pbVar24;
   uastc_block *puVar25;
   undefined8 *puVar26;
   long in_FS_OFFSET;
   bool bVar27;
   uastc_block *local_180;
   uint local_168;
   uint local_164;
   char local_147;
   bc7_optimization_results local_138[16];
   bc7_optimization_results abStack_128[80];
   unpacked_uastc_block local_d8[104];
   uint local_70;
   uint local_6c;
   color32 local_68[40];
   long local_40;
   cVar3 = g_transcoder_initialized;
   local_147 = g_transcoder_initialized;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (g_transcoder_initialized != '\0') {
      puVar25 = param_4;
      if (param_13 == 0) {
         param_13 = param_11;
         if (param_7 - 0x15U < 0xc) {
            LAB_0011c041:puVar25 = (uastc_block*)(ulong)param_15;
            if (param_15 == 0) {
               param_15 = param_12;
            }

         }
 else {
            param_13 = param_11 + 7 >> 3;
            if (param_7 != 0xf) {
               param_13 = param_2;
            }

         }

      }
 else if (param_7 - 0x15U < 0xc) goto LAB_0011c041;
      if (param_3 * param_2 * 0x10 <= param_5) {
         if (param_10 != '\0') {
            param_10 = ( byte )(param_18 >> 2) & 1;
         }

         if (param_7 - 6U < 2) {
            if (param_7 == 7) {
               if (param_2 != 0 && param_3 != 0) {
                  transcode_uastc_to_pvrtc1_4_rgba(param_4, param_1, param_2, param_3, SUB81(puVar25, 0));
               }

            }
 else if (param_2 != 0 && param_3 != 0) {
               transcode_uastc_to_pvrtc1_4_rgb(param_4, param_1, param_2, param_3, (bool)param_10, (bool)param_10);
            }

         }
 else if (param_3 != 0) {
            iVar11 = 0;
            uVar22 = 0;
            local_168 = 0;
            cVar5 = '\0';
            bVar4 = (bool)( ( byte )(param_18 >> 5) & 1 );
            local_180 = param_4;
            uVar13 = param_16;
            LAB_0011bfd4:puVar26 = (undefined8*)( (ulong)local_168 + (long)param_1 );
            puVar25 = local_180;
            if (param_2 != 0) {
               local_164 = iVar11 * 4;
               puVar7 = local_180 + (ulong)param_2 * 0x10;
               uVar23 = param_13;
               LAB_0011c017:switch (param_7) {
                  case 0:
            goto LAB_0011ca40;
                  case 1:
            goto LAB_0011c3f0;
                  case 2:
            goto LAB_0011c450;
                  case 3:
            goto LAB_0011c4b0;
                  case 4:
            goto LAB_0011c500;
                  case 5:
            goto LAB_0011c58e;
                  default:
            if (cVar5 != '\0') goto code_r0x0011c0bd;
            goto LAB_0011c080;
                  case 8:
                  case 9:
            goto LAB_0011c137;
                  case 0xc:
            goto LAB_0011c5d0;
                  case 0x12:
            goto LAB_0011c808;
                  case 0x13:
            goto LAB_0011c896;
                  case 0x16:
            uVar17 = 4;
            if ((int)param_15 < 5) {
              uVar17 = param_15;
            }
            goto LAB_0011c908;
                  case 0x18:
                  case 0x19:
            uVar17 = 4;
            if ((int)param_15 < 5) {
              uVar17 = param_15;
            }
            goto LAB_0011c260;
                  case 0x1d:
            uVar17 = 4;
            if ((int)param_15 < 5) {
              uVar17 = param_15;
            }
            break;
                  case 0x21:
            do {
              uVar1 = *(undefined8 *)local_180;
              uVar2 = *(undefined8 *)(local_180 + 8);
              local_180 = local_180 + 0x10;
              *puVar26 = uVar1;
              puVar26[1] = uVar2;
              puVar26 = (undefined8 *)((long)puVar26 + (ulong)param_8);
              puVar25 = local_180;
              cVar5 = cVar3;
            } while (local_180 != puVar7);
            goto LAB_0011c0d8;
               }

               goto LAB_0011c650;
            }

            goto LAB_0011c0d8;
         }

         goto LAB_0011c085;
      }

   }

   LAB_0011c080:local_147 = '\0';
   LAB_0011c085:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_147;
   while (true) {
      local_180 = local_180 + 0x10;
      uVar23 = uVar23 - 4;
      local_164 = local_164 + 4;
      puVar25 = local_180;
      uVar13 = param_16;
      if (local_180 == puVar7) break;
      LAB_0011c650:cVar5 = unpack_uastc(local_180, local_d8, false, false);
      if (cVar5 != '\0') {
         cVar5 = unpack_uastc(local_70, local_6c, local_68, (astc_block_desc*)local_d8, (color32*)local_138, false);
      }

      puVar14 = (undefined1*)( (long)param_1 + (ulong)local_164 * 2 );
      uVar13 = 4;
      if ((int)uVar23 < 5) {
         uVar13 = uVar23;
      }

      if (uVar17 != 0) {
         pbVar24 = local_138;
         puVar21 = puVar14 + ( ulong )(uVar13 - 1) * 2 + 2;
         do {
            pbVar9 = pbVar24;
            puVar15 = puVar14;
            if (uVar13 != 0) {
               do {
                  puVar16 = puVar15 + 2;
                  uVar20 = ( uint )(byte) * pbVar9 * 0xf + 0x80;
                  uVar19 = (uint)(byte)pbVar9[1] * 0xf + 0x80;
                  uVar18 = (uint)(byte)pbVar9[2] * 0xf + 0x80;
                  uVar12 = (uint)(byte)pbVar9[3] * 0xf + 0x80;
                  uVar12 = ( ( uVar20 >> 8 ) + uVar20 >> 8 ) << 0xc | uVar19 + ( uVar19 >> 8 ) & 0xffffff00 | uVar12 + ( uVar12 >> 8 ) >> 8 | ( ( uVar18 >> 8 ) + uVar18 >> 8 ) << 4;
                  *puVar15 = (char)uVar12;
                  puVar15[1] = (char)( uVar12 >> 8 );
                  pbVar9 = pbVar9 + 4;
                  puVar15 = puVar16;
               }
 while ( puVar21 != puVar16 );
            }

            pbVar24 = pbVar24 + 0x10;
            puVar14 = puVar14 + (ulong)param_13 * 2;
            puVar21 = puVar21 + (ulong)param_13 * 2;
         }
 while ( pbVar24 != abStack_128 + ( ulong )(uVar17 - 1) * 0x10 );
      }

      if (cVar5 == '\0') goto LAB_0011c080;
   }
;
   goto LAB_0011c0d8;
   while (true) {
      local_180 = local_180 + 0x10;
      local_164 = local_164 + 4;
      uVar23 = uVar23 - 4;
      puVar25 = local_180;
      uVar13 = param_16;
      if (local_180 == puVar7) break;
      LAB_0011c260:cVar5 = unpack_uastc(local_180, local_d8, false, false);
      if (cVar5 != '\0') {
         cVar5 = unpack_uastc(local_70, local_6c, local_68, (astc_block_desc*)local_d8, (color32*)local_138, false);
      }

      uVar13 = 4;
      if ((int)uVar23 < 5) {
         uVar13 = uVar23;
      }

      puVar14 = (undefined1*)( (long)param_1 + (ulong)local_164 * 2 );
      if (uVar17 != 0) {
         pbVar24 = local_138;
         puVar21 = puVar14 + ( ulong )(uVar13 - 1) * 2 + 2;
         do {
            pbVar9 = pbVar24;
            puVar15 = puVar14;
            if (uVar13 != 0) {
               do {
                  uVar12 = (uint)(byte)pbVar9[2] * 0x1f + 0x80;
                  uVar12 = ( uVar12 >> 8 ) + uVar12;
                  uVar18 = ( (uint)(byte)pbVar9[1] * 0x40 - (uint)(byte)pbVar9[1] ) + 0x80;
                  uVar19 = ( uint )(byte) * pbVar9 * 0x1f + 0x80;
                  uVar19 = ( uVar19 >> 8 ) + uVar19;
                  uVar6 = ( ushort )(( ( uVar18 >> 8 ) + uVar18 >> 8 ) << 5);
                  if (param_7 == 0x18) {
                     uVar6 = ( ushort )(uVar12 >> 8) | ( ushort )(( uVar19 >> 8 ) << 0xb) | uVar6;
                  }
 else {
                     uVar6 = ( ushort )(( uVar12 >> 8 ) << 0xb) | uVar6 | ( ushort )(uVar19 >> 8);
                  }

                  *puVar15 = (char)uVar6;
                  puVar16 = puVar15 + 2;
                  puVar15[1] = (char)( uVar6 >> 8 );
                  pbVar9 = pbVar9 + 4;
                  puVar15 = puVar16;
               }
 while ( puVar16 != puVar21 );
            }

            pbVar24 = pbVar24 + 0x10;
            puVar14 = puVar14 + (ulong)param_13 * 2;
            puVar21 = puVar21 + (ulong)param_13 * 2;
         }
 while ( abStack_128 + ( ulong )(uVar17 - 1) * 0x10 != pbVar24 );
      }

      if (cVar5 == '\0') goto LAB_0011c080;
   }
;
   goto LAB_0011c0d8;
   while (true) {
      local_180 = local_180 + 0x10;
      local_164 = local_164 + 4;
      uVar23 = uVar23 - 4;
      puVar25 = local_180;
      uVar13 = param_16;
      if (local_180 == puVar7) break;
      LAB_0011c908:cVar5 = unpack_uastc(local_180, local_d8, false, false);
      if (cVar5 != '\0') {
         cVar5 = unpack_uastc(local_70, local_6c, local_68, (astc_block_desc*)local_d8, (color32*)local_138, false);
      }

      pvVar10 = (void*)( (long)param_1 + (ulong)local_164 * 4 );
      uVar13 = 4;
      if ((int)uVar23 < 5) {
         uVar13 = uVar23;
      }

      if (uVar17 != 0) {
         pbVar24 = local_138;
         if (uVar13 == 0) {
            do {
               pbVar24 = pbVar24 + 0x10;
            }
 while ( abStack_128 + ( ulong )(uVar17 - 1) * 0x10 != pbVar24 );
         }
 else {
            do {
               lVar8 = 0;
               do {
                  *(undefined4*)( (long)pvVar10 + lVar8 * 4 ) = *(undefined4*)( pbVar24 + lVar8 * 4 );
                  lVar8 = lVar8 + 1;
               }
 while ( (uint)lVar8 < uVar13 );
               pbVar24 = pbVar24 + 0x10;
               pvVar10 = (void*)( (long)pvVar10 + (ulong)param_13 * 4 );
            }
 while ( pbVar24 != abStack_128 + ( ulong )(uVar17 - 1) * 0x10 );
         }

      }

      if (cVar5 == '\0') goto LAB_0011c080;
   }
;
   goto LAB_0011c0d8;
   while (true) {
      local_180 = local_180 + 0x10;
      puVar26 = (undefined8*)( (long)puVar26 + (ulong)param_8 );
      puVar25 = local_180;
      uVar13 = param_16;
      if (puVar7 == local_180) break;
      LAB_0011c896:bVar27 = (int)param_16 < 0;
      param_16 = uVar13;
      if (bVar27) {
         param_16 = 0;
      }

      if ((int)param_17 < 0) {
         param_17 = 3;
      }

      cVar5 = transcode_uastc_to_etc2_eac_rg11(local_180, puVar26, bVar4, param_16, param_17);
      if (cVar5 == '\0') goto LAB_0011c080;
   }
;
   goto LAB_0011c0d8;
   while (true) {
      local_180 = local_180 + 0x10;
      puVar26 = (undefined8*)( (long)puVar26 + (ulong)param_8 );
      puVar25 = local_180;
      uVar13 = param_16;
      if (local_180 == puVar7) break;
      LAB_0011c808:if ((int)param_16 < 0) {
         param_16 = 0;
      }

      cVar5 = transcode_uastc_to_etc2_eac_r11(local_180, puVar26, bVar4, param_16);
      if (cVar5 == '\0') goto LAB_0011c080;
   }
;
   goto LAB_0011c0d8;
   while (true) {
      local_180 = local_180 + 0x10;
      puVar26 = (undefined8*)( (long)puVar26 + (ulong)param_8 );
      puVar25 = local_180;
      uVar13 = param_16;
      if (local_180 == puVar7) break;
      LAB_0011c5d0:cVar5 = transcode_uastc_to_astc(local_180, puVar26);
      if (cVar5 == '\0') goto LAB_0011c080;
   }
;
   goto LAB_0011c0d8;
   while (true) {
      local_180 = local_180 + 0x10;
      encode_bc7_block(puVar26, local_138);
      puVar26 = (undefined8*)( (long)puVar26 + (ulong)param_8 );
      puVar25 = local_180;
      uVar13 = param_16;
      if (local_180 == puVar7) break;
      LAB_0011c137:cVar5 = unpack_uastc(local_180, local_d8, false, false);
      if (( cVar5 == '\0' ) || ( cVar5 = transcode_uastc_to_bc7(local_d8, local_138) ),cVar5 == '\0') goto LAB_0011c080;
   }
;
   goto LAB_0011c0d8;
   code_r0x0011c0bd:local_180 = local_180 + 0x10;
   puVar26 = (undefined8*)( (long)puVar26 + (ulong)param_8 );
   local_164 = local_164 + 4;
   uVar23 = uVar23 - 4;
   puVar25 = local_180;
   if (local_180 == puVar7) goto LAB_0011c0d8;
   goto LAB_0011c017;
   while (true) {
      local_180 = local_180 + 0x10;
      puVar26 = (undefined8*)( (long)puVar26 + (ulong)param_8 );
      puVar25 = local_180;
      uVar13 = param_16;
      if (local_180 == puVar7) break;
      LAB_0011c58e:if ((int)param_16 < 0) {
         param_16 = 0;
      }

      if ((int)param_17 < 0) {
         param_17 = 3;
      }

      cVar5 = transcode_uastc_to_bc5(local_180, puVar26, bVar4, param_16, param_17);
      if (cVar5 == '\0') goto LAB_0011c080;
   }
;
   goto LAB_0011c0d8;
   while (true) {
      local_180 = local_180 + 0x10;
      puVar26 = (undefined8*)( (long)puVar26 + (ulong)param_8 );
      puVar25 = local_180;
      uVar13 = param_16;
      if (local_180 == puVar7) break;
      LAB_0011c500:if ((int)param_16 < 0) {
         param_16 = 0;
      }

      cVar5 = transcode_uastc_to_bc4(local_180, puVar26, bVar4, param_16);
      if (cVar5 == '\0') goto LAB_0011c080;
   }
;
   goto LAB_0011c0d8;
   while (true) {
      local_180 = local_180 + 0x10;
      puVar26 = (undefined8*)( (long)puVar26 + (ulong)param_8 );
      puVar25 = local_180;
      uVar13 = param_16;
      if (local_180 == puVar7) break;
      LAB_0011c4b0:cVar5 = transcode_uastc_to_bc3(local_180, puVar26, bVar4);
      if (cVar5 == '\0') goto LAB_0011c080;
   }
;
   goto LAB_0011c0d8;
   while (true) {
      local_180 = local_180 + 0x10;
      puVar26 = (undefined8*)( (long)puVar26 + (ulong)param_8 );
      puVar25 = local_180;
      uVar13 = param_16;
      if (local_180 == puVar7) break;
      LAB_0011c450:cVar5 = transcode_uastc_to_bc1(local_180, puVar26, bVar4);
      if (cVar5 == '\0') goto LAB_0011c080;
   }
;
   goto LAB_0011c0d8;
   while (true) {
      local_180 = local_180 + 0x10;
      puVar26 = (undefined8*)( (long)puVar26 + (ulong)param_8 );
      puVar25 = local_180;
      uVar13 = param_16;
      if (puVar7 == local_180) break;
      LAB_0011c3f0:cVar5 = transcode_uastc_to_etc2_rgba(local_180, puVar26);
      if (cVar5 == '\0') goto LAB_0011c080;
   }
;
   goto LAB_0011c0d8;
   while (true) {
      cVar5 = transcode_uastc_to_etc1(local_180, puVar26, 3);
      if (cVar5 == '\0') goto LAB_0011c080;
      local_180 = local_180 + 0x10;
      puVar26 = (undefined8*)( (long)puVar26 + (ulong)param_8 );
      uVar13 = param_16;
      cVar5 = cVar3;
      if (local_180 == puVar7) break;
      LAB_0011ca40:puVar25 = puVar7;
      if ((bool)param_10 == false) goto LAB_0011cab6;
   }
;
   goto LAB_0011c0d8;
   while (true) {
      local_180 = local_180 + 0x10;
      puVar26 = (undefined8*)( (long)puVar26 + (ulong)param_8 );
      uVar13 = param_16;
      cVar5 = cVar3;
      if (puVar7 == local_180) break;
      LAB_0011cab6:cVar5 = transcode_uastc_to_etc1(local_180, puVar26);
      if (cVar5 == '\0') goto LAB_0011c080;
   }
;
   LAB_0011c0d8:uVar22 = uVar22 + 1;
   local_168 = local_168 + param_8 * param_13;
   param_15 = param_15 - 4;
   iVar11 = iVar11 + param_13;
   local_180 = puVar25;
   if (param_3 == uVar22) goto LAB_0011c085;
   goto LAB_0011bfd4;
}
/* basist::basisu_lowlevel_uastc_transcoder::transcode_image(basist::transcoder_texture_format,
   void*, unsigned int, unsigned char const*, unsigned int, unsigned int, unsigned int, unsigned
   int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, bool, bool, unsigned
   int, basist::basisu_transcoder_state*, unsigned int, int, int) */undefined1[16];basist::basisu_lowlevel_uastc_transcoder::transcode_image(undefined8 param_1, uint param_2, undefined8 param_3, undefined4 param_4, undefined8 param_5, ulong param_6, int param_7, int param_8, undefined4 param_9, undefined4 param_10, undefined8 param_11, uint param_12, uint param_13, undefined8 param_14, char param_15, undefined8 param_16, undefined4 param_17, undefined8 param_18, undefined4 param_19) {
   char cVar1;
   uint uVar2;
   ulong uVar3;
   undefined1 auVar4[16];
   param_6 = param_6 & 0xffffffff;
   uVar3 = (ulong)param_2;
   if ((ulong)param_13 + (ulong)param_12 <= param_6) {
      if (param_2 - 8 < 2) {
         uVar2 = param_7 * 4;
         if (( ( ( uVar2 == 0 ) || ( param_6 = ( ulong )(uVar2 - 1)(uVar2 - 1 & uVar2) != 0 ) ) || ( uVar2 = uVar2 == 0 ) ) || ( param_6 = ( ulong )(uVar2 - 1)(uVar2 - 1 & uVar2) != 0 )) goto LAB_0011cc07;
         if (( param_2 == 9 ) && ( param_15 != '\x01' )) {
            uVar3 = 8;
         }

      }

      param_6 = ( ulong )(uint)(param_7 * param_8);
      cVar1 = basis_validate_output_buffer_size(uVar3, param_4, param_9, param_10, param_17, param_19);
      if (( cVar1 != '\0' ) && ( (uint)uVar3 < 0x16 )) {
         /* WARNING: Could not recover jumptable at 0x0011cbf6. Too many branches */
         /* WARNING: Treating indirect jump as call */
         auVar4 = ( *(code*)( &DAT_0012cb5c + *(int*)( &DAT_0012cb5c + uVar3 * 4 ) ) )();
         return auVar4;
      }

   }

   LAB_0011cc07:auVar4._8_8_ = 0;
   auVar4._0_8_ = param_6;
   return auVar4 << 0x40;
}
/* basist::transcode_uastc_to_pvrtc1_4_rgb(basist::uastc_block const*, void*, unsigned int, unsigned
   int, bool, bool) */undefined8 basist::transcode_uastc_to_pvrtc1_4_rgb(uastc_block *param_1, void *param_2, uint param_3, uint param_4, bool param_5, bool param_6) {
   undefined8 uVar1;
   if (( param_3 != 0 ) && ( param_4 != 0 )) {
      uVar1 = transcode_uastc_to_pvrtc1_4_rgb(param_1, param_2, param_3, param_4, param_6, param_6);
      return uVar1;
   }

   return 0;
}
/* basist::transcode_uastc_to_pvrtc1_4_rgba(basist::uastc_block const*, void*, unsigned int,
   unsigned int, bool) */undefined8 basist::transcode_uastc_to_pvrtc1_4_rgba(uastc_block *param_1, void *param_2, uint param_3, uint param_4, bool param_5) {
   undefined8 uVar1;
   if (( param_3 != 0 ) && ( param_4 != 0 )) {
      uVar1 = transcode_uastc_to_pvrtc1_4_rgba(param_1, param_2, param_3, param_4, param_5);
      return uVar1;
   }

   return 0;
}
/* basist::uastc_init() */void basist::uastc_init(void) {
   uint *puVar1;
   int iVar2;
   int iVar3;
   uint uVar4;
   uint uVar5;
   int iVar6;
   long lVar7;
   ulong uVar8;
   int unaff_EBX;
   int unaff_EBP;
   int iVar9;
   ulong in_R8;
   ulong uVar10;
   undefined2 *puVar11;
   ulong unaff_R12;
   undefined4 *puVar12;
   undefined2 *puVar13;
   uint uVar14;
   long in_FS_OFFSET;
   bool bVar15;
   int *local_470;
   uint local_448[258];
   long local_40;
   uVar14 = 0;
   puVar12 = &g_astc_bise_range_table;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_470 = (int*)( g_astc_endpoint_unquant_params + 8 );
   do {
      if (( ( puVar12[1] == 0 ) && ( puVar12[2] == 0 ) ) || ( *local_470 != 0 )) {
         uVar5 = puVar12[2] * 4 + 1 + puVar12[1] * 2 << ( ( byte ) * puVar12 & 0x1f );
         if (uVar5 != 0) {
            uVar10 = 0;
            do {
               uVar8 = in_R8;
               iVar2 = unquant_astc_endpoint_val((uint)uVar10, uVar14);
               local_448[uVar10] = iVar2 << 8 | (uint)uVar10;
               uVar10 = uVar10 + 1;
               in_R8 = uVar8 & 0xff;
            }
 while ( uVar5 != uVar10 );
            puVar1 = local_448 + (int)uVar5;
            uVar10 = (long)(int)uVar5 * 4 >> 2;
            lVar7 = 0x3f;
            if (uVar10 != 0) {
               for (; uVar10 >> lVar7 == 0; lVar7 = lVar7 + -1) {}
            }

            std::__introsort_loop<unsigned_int*,long,__gnu_cxx::__ops::_Iter_less_iter>(local_448, puVar1, (long)(int)lVar7 * 2);
            std::__final_insertion_sort<unsigned_int*,__gnu_cxx::__ops::_Iter_less_iter>(local_448, puVar1);
            in_R8 = uVar8 & 0xff;
            uVar10 = 0;
            do {
               uVar4 = local_448[uVar10];
               lVar7 = ( ulong )(uVar4 & 0xff) + (ulong)uVar14 * 0x100;
               g_astc_unquant[lVar7 * 2 + 1] = (char)uVar10;
               g_astc_unquant[lVar7 * 2] = (char)( uVar4 >> 8 );
               bVar15 = uVar5 - 1 != uVar10;
               uVar10 = uVar10 + 1;
            }
 while ( bVar15 );
         }

      }

      uVar14 = uVar14 + 1;
      local_470 = local_470 + 4;
      puVar12 = puVar12 + 3;
   }
 while ( uVar14 != 0x15 );
   puVar13 = &g_bc7_mode_6_optimal_endpoints;
   iVar2 = 0;
   do {
      uVar14 = 0;
      puVar11 = puVar13;
      while (true) {
         uVar5 = 0xffffffff;
         iVar9 = 0;
         do {
            iVar6 = 0;
            do {
               iVar3 = ( ( iVar6 * 2 | uVar14 ) * 0x15 + ( iVar9 * 2 | uVar14 ) * 0x2b + 0x20 >> 6 ) - iVar2;
               uVar4 = iVar3 * iVar3;
               if ((int)uVar4 < (int)( uVar5 & 0xffff )) {
                  unaff_EBP = iVar6;
                  uVar5 = uVar4;
                  unaff_EBX = iVar9;
               }

               iVar6 = iVar6 + 1;
            }
 while ( iVar6 != 0x80 );
            iVar9 = iVar9 + 1;
         }
 while ( iVar9 != 0x80 );
         *puVar11 = (short)uVar5;
         *(char*)( puVar11 + 1 ) = (char)unaff_EBX;
         *(char*)( (long)puVar11 + 3 ) = (char)unaff_EBP;
         if (uVar14 != 0) break;
         uVar14 = 1;
         puVar11 = puVar11 + 2;
      }
;
      iVar2 = iVar2 + 1;
      puVar13 = puVar13 + 4;
   }
 while ( iVar2 != 0x100 );
   iVar2 = 0;
   puVar13 = &g_bc7_mode_5_optimal_endpoints;
   do {
      uVar14 = 0xffffffff;
      uVar10 = 0;
      do {
         uVar8 = 0;
         do {
            uVar4 = uVar14 & 0xffff;
            iVar9 = ( ( ( uint )(uVar8 >> 6) | (int)uVar8 * 2 ) * 0x15 + ( (int)uVar10 * 2 | ( uint )(uVar10 >> 6) ) * 0x2b + 0x20 >> 6 ) - iVar2;
            uVar5 = iVar9 * iVar9;
            if ((int)uVar5 < (int)uVar4) {
               uVar14 = uVar5;
            }

            in_R8 = in_R8 & 0xffffffff;
            if ((int)uVar5 < (int)uVar4) {
               in_R8 = uVar10;
            }

            unaff_R12 = unaff_R12 & 0xffffffff;
            if ((int)uVar5 < (int)uVar4) {
               unaff_R12 = uVar8;
            }

            uVar5 = (int)uVar8 + 1;
            uVar8 = (ulong)uVar5;
         }
 while ( uVar5 != 0x80 );
         uVar5 = (int)uVar10 + 1;
         uVar10 = (ulong)uVar5;
      }
 while ( uVar5 != 0x80 );
      iVar2 = iVar2 + 1;
      *puVar13 = (short)uVar14;
      *(char*)( puVar13 + 1 ) = (char)in_R8;
      *(char*)( (long)puVar13 + 3 ) = (char)unaff_R12;
      puVar13 = puVar13 + 2;
   }
 while ( iVar2 != 0x100 );
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* basist::basisu_transcoder_init() */void basist::basisu_transcoder_init(void) {
   byte bVar1;
   char cVar2;
   short sVar18;
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   int iVar28;
   int iVar29;
   int iVar30;
   int iVar31;
   int iVar32;
   int iVar33;
   int iVar34;
   int iVar35;
   int iVar36;
   int iVar37;
   int iVar38;
   int iVar39;
   int iVar40;
   int iVar41;
   int iVar42;
   int iVar43;
   uint uVar44;
   ulong uVar45;
   undefined1(*pauVar46)[16];
   undefined1(*pauVar47)[16];
   ulong uVar48;
   long lVar49;
   int iVar50;
   int iVar51;
   ushort *puVar52;
   uint uVar53;
   undefined8 *puVar54;
   undefined1 *puVar55;
   long lVar56;
   uint uVar57;
   uint uVar58;
   undefined1 *puVar59;
   uint uVar60;
   uint uVar61;
   undefined1 *puVar62;
   int iVar63;
   long in_FS_OFFSET;
   byte bVar64;
   ushort uVar65;
   undefined1 auVar70[12];
   undefined1 auVar73[16];
   undefined1 auVar77[16];
   undefined1 auVar81[16];
   undefined1 auVar84[16];
   undefined1 auVar86[16];
   undefined1 auVar87[16];
   undefined1 auVar91[16];
   undefined1 auVar95[16];
   undefined1 auVar98[16];
   undefined1 auVar100[16];
   undefined1 auVar101[12];
   undefined1 auVar102[16];
   undefined1 auVar103[16];
   undefined1 auVar104[16];
   undefined1 auVar108[16];
   undefined1 auVar112[16];
   undefined1 auVar115[16];
   undefined1 auVar116[16];
   undefined1 auVar118[16];
   int iVar119;
   undefined2 uVar133;
   undefined2 uVar134;
   int iVar135;
   undefined2 uVar136;
   undefined1 auVar121[16];
   undefined1 auVar124[16];
   undefined1 auVar128[16];
   undefined1 auVar131[16];
   undefined1 auVar132[16];
   byte local_b0[4];
   byte local_ac[4];
   byte local_a8[32];
   byte local_88[64];
   undefined1 local_48[8];
   long local_40;
   char cVar3;
   char cVar4;
   char cVar5;
   char cVar6;
   char cVar7;
   char cVar8;
   char cVar9;
   char cVar10;
   char cVar11;
   char cVar12;
   char cVar13;
   char cVar14;
   char cVar15;
   char cVar16;
   char cVar17;
   undefined4 uVar66;
   undefined6 uVar67;
   undefined1 auVar74[16];
   undefined1 auVar78[16];
   undefined8 uVar68;
   undefined1 auVar88[16];
   undefined1 auVar92[16];
   undefined1 auVar75[16];
   undefined1 auVar79[16];
   undefined1 auVar82[16];
   undefined1 auVar69[12];
   undefined1 auVar89[16];
   undefined1 auVar93[16];
   undefined1 auVar96[16];
   undefined1 auVar76[16];
   undefined1 auVar80[16];
   undefined1 auVar83[16];
   undefined1 auVar71[14];
   undefined1 auVar90[16];
   undefined1 auVar94[16];
   undefined1 auVar97[16];
   undefined1 auVar72[14];
   undefined1 auVar85[16];
   undefined1 auVar99[16];
   undefined1 auVar105[16];
   undefined1 auVar109[16];
   undefined1 auVar106[16];
   undefined1 auVar110[16];
   undefined1 auVar113[16];
   undefined1 auVar107[16];
   undefined1 auVar111[16];
   undefined1 auVar114[16];
   int iVar117;
   undefined1 auVar120[12];
   undefined1 auVar125[16];
   undefined1 auVar122[16];
   undefined1 auVar126[16];
   undefined1 auVar129[16];
   undefined1 auVar123[16];
   undefined1 auVar127[16];
   undefined1 auVar130[16];
   bVar64 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (g_transcoder_initialized == '\0') {
      uastc_init();
      astc_helpers::dequant_tables::init((dequant_tables*)astc_helpers::g_dequant_tables, false);
      astc_helpers::precompute_texel_partitions_4x4();
      if (g_astc_hdr_core_initialized == '\0') {
         puVar52 = (ushort*)( g_astc_bc7_common_partitions2 + 2 );
         puVar54 = &g_astc_partition_id_to_common_bc7_pat_index;
         for (lVar49 = 0x80; lVar49 != 0; lVar49 = lVar49 + -1) {
            *puVar54 = 0xffffffffffffffff;
            puVar54 = puVar54 + (ulong)bVar64 * -2 + 1;
         }

         iVar42 = 0;
         do {
            uVar65 = *puVar52;
            puVar52 = puVar52 + 3;
            *(char*)( (long)&g_astc_partition_id_to_common_bc7_pat_index + (ulong)uVar65 ) = (char)iVar42;
            iVar42 = iVar42 + 1;
         }
 while ( iVar42 != 0x1b );
         g_astc_hdr_core_initialized = '\x01';
      }

      lVar49 = 0;
      uVar53 = 0;
      iVar42 = 0;
      do {
         puVar59 = &g_etc1_to_astc_best_grayscale_mapping + lVar49;
         uVar61 = uVar53;
         do {
            lVar56 = 0;
            puVar55 = g_etc1_to_astc + (ulong)uVar61 * 4;
            do {
               uVar45 = 0;
               uVar48 = 0;
               uVar44 = 0xffffffff;
               do {
                  if (*(ushort*)( puVar55 + uVar45 * 4 + 2 ) < uVar44) {
                     uVar48 = uVar45 & 0xffffffff;
                     uVar44 = ( uint ) * (ushort*)( puVar55 + uVar45 * 4 + 2 );
                  }

                  uVar45 = uVar45 + 1;
               }
 while ( uVar45 != 10 );
               puVar59[lVar56] = (char)uVar48;
               lVar56 = lVar56 + 1;
               puVar55 = puVar55 + 0x28;
            }
 while ( lVar56 != 6 );
            uVar61 = uVar61 + 0x780;
            puVar59 = puVar59 + 6;
         }
 while ( uVar61 != iVar42 * 0x3c + 0x3c00U );
         iVar42 = iVar42 + 1;
         uVar53 = uVar53 + 0x3c;
         lVar49 = lVar49 + 0x30;
      }
 while ( iVar42 != 0x20 );
      lVar49 = 0;
      uVar53 = 0;
      iVar42 = 0;
      do {
         puVar59 = &g_etc1_to_astc_best_grayscale_mapping_0_255 + lVar49;
         uVar61 = uVar53;
         do {
            lVar56 = 0;
            puVar55 = g_etc1_to_astc_0_255 + (ulong)uVar61 * 4;
            do {
               uVar45 = 0;
               uVar48 = 0;
               uVar44 = 0xffffffff;
               do {
                  if (*(ushort*)( puVar55 + uVar45 * 4 + 2 ) < uVar44) {
                     uVar48 = uVar45 & 0xffffffff;
                     uVar44 = ( uint ) * (ushort*)( puVar55 + uVar45 * 4 + 2 );
                  }

                  uVar45 = uVar45 + 1;
               }
 while ( uVar45 != 10 );
               puVar59[lVar56] = (char)uVar48;
               g_etc1_to_dxt1_selector_range_index._4_8_ = _LC102;
               g_etc1_to_dxt1_selector_range_index._24_8_ = _LC12;
               lVar56 = lVar56 + 1;
               puVar55 = puVar55 + 0x28;
            }
 while ( lVar56 != 6 );
            uVar61 = uVar61 + 0x780;
            puVar59 = puVar59 + 6;
         }
 while ( iVar42 * 0x3c + 0x3c00U != uVar61 );
         iVar42 = iVar42 + 1;
         uVar53 = uVar53 + 0x3c;
         lVar49 = lVar49 + 0x30;
      }
 while ( iVar42 != 0x20 );
      g_etc1_to_bc7_m5a_selector_range_index._24_8_ = _LC12;
      uVar53 = 0;
      iVar42 = 0;
      g_etc1_to_bc7_m5a_selector_range_index._4_8_ = _LC102;
      g_etc1_to_astc_selector_range_index._12_4_ = 0;
      g_etc1_to_astc_selector_range_index._44_4_ = 4;
      g_etc1_to_astc_selector_range_index._24_8_ = _LC12;
      g_etc1_to_astc_selector_range_index._4_8_ = _LC102;
      do {
         uVar61 = 0;
         do {
            uVar44 = 0;
            uVar57 = uVar61 & 1;
            if (uVar57 != 0) {
               uVar44 = 0x80;
               uVar57 = 0x1ff;
            }

            uVar60 = uVar61 >> 1;
            uVar58 = uVar53 | uVar61;
            uVar61 = uVar61 + 1;
            ( &g_ise_to_unquant )[uVar58] = ( uVar60 * 0x41 + iVar42 ^ uVar57 ) >> 2 | uVar44;
         }
 while ( uVar61 != 0x10 );
         iVar42 = iVar42 + 0x16;
         uVar53 = uVar53 + 0x10;
      }
 while ( iVar42 != 0x42 );
      puVar59 = &g_astc_single_color_encoding_1;
      iVar42 = 0;
      do {
         lVar49 = 0;
         iVar117 = 0x7fffffff;
         do {
            uVar53 = ( &g_ise_to_unquant )[lVar49];
            lVar56 = 0;
            do {
               iVar50 = ( ( &g_ise_to_unquant )[lVar56] << 8 | ( &g_ise_to_unquant )[lVar56] ) * 0x15 + ( uVar53 << 8 | uVar53 ) * 0x2b;
               iVar51 = iVar50 + 0x20;
               iVar50 = iVar50 + 0x5f;
               if (-1 < iVar51) {
                  iVar50 = iVar51;
               }

               iVar50 = ( iVar50 >> 0xe ) - iVar42;
               if (iVar50 < 1) {
                  iVar50 = -iVar50;
               }

               if (iVar50 < iVar117) {
                  puVar59[1] = (char)lVar56;
                  *puVar59 = (char)lVar49;
                  iVar117 = iVar50;
               }

               lVar56 = lVar56 + 1;
            }
 while ( lVar56 != 0x30 );
            lVar49 = lVar49 + 1;
         }
 while ( lVar49 != 0x30 );
         iVar42 = iVar42 + 1;
         puVar59 = puVar59 + 2;
      }
 while ( iVar42 != 0x100 );
      puVar59 = &g_astc_single_color_encoding_0;
      iVar42 = 0;
      do {
         lVar49 = 0;
         iVar117 = 0x7fffffff;
         do {
            iVar50 = ( &g_ise_to_unquant )[lVar49] - iVar42;
            if (iVar50 < 1) {
               iVar50 = -iVar50;
            }

            if (iVar50 < iVar117) {
               *puVar59 = (char)lVar49;
               iVar117 = iVar50;
            }

            iVar41 = _UNK_0018133c;
            iVar40 = _UNK_00181338;
            iVar39 = _UNK_00181334;
            iVar38 = __LC106;
            iVar37 = _UNK_0018132c;
            iVar36 = _UNK_00181328;
            iVar35 = _UNK_00181324;
            iVar34 = __LC105;
            iVar33 = _UNK_0018131c;
            iVar32 = _UNK_00181318;
            iVar31 = _UNK_00181314;
            iVar30 = __LC104;
            iVar29 = _UNK_0018130c;
            iVar28 = _UNK_00181308;
            iVar51 = _UNK_00181304;
            iVar50 = __LC103;
            auVar104 = __LC100;
            auVar27 = __LC85;
            lVar49 = lVar49 + 1;
         }
 while ( lVar49 != 0x30 );
         iVar42 = iVar42 + 1;
         puVar59 = puVar59 + 1;
      }
 while ( iVar42 != 0x100 );
      pauVar47 = (undefined1(*) [16])local_a8;
      auVar102 = __LC100;
      do {
         pauVar46 = pauVar47 + 1;
         iVar42 = auVar102._0_4_;
         auVar103._0_4_ = iVar42 + __LC103;
         iVar117 = auVar102._4_4_;
         auVar103._4_4_ = iVar117 + _UNK_00181304;
         iVar63 = auVar102._8_4_;
         iVar43 = auVar102._12_4_;
         auVar103._8_4_ = iVar63 + _UNK_00181308;
         auVar103._12_4_ = iVar43 + _UNK_0018130c;
         auVar76._0_12_ = auVar102._0_12_;
         auVar76._12_2_ = auVar102._6_2_;
         auVar76._14_2_ = (short)( ( uint )(iVar117 + _UNK_00181314) >> 0x10 );
         auVar75._12_4_ = auVar76._12_4_;
         auVar75._0_10_ = auVar102._0_10_;
         uVar134 = ( undefined2 )(iVar117 + _UNK_00181314);
         auVar75._10_2_ = uVar134;
         auVar74._10_6_ = auVar75._10_6_;
         auVar74._0_8_ = auVar102._0_8_;
         auVar74._8_2_ = auVar102._4_2_;
         uVar133 = ( undefined2 )(( uint )(iVar42 + __LC104) >> 0x10);
         auVar19._2_8_ = auVar74._8_8_;
         auVar19._0_2_ = uVar133;
         auVar19._10_6_ = 0;
         auVar84._0_2_ = auVar102._0_2_;
         auVar73._12_4_ = 0;
         auVar73._0_12_ = SUB1612(auVar19 << 0x30, 4);
         auVar73 = auVar73 << 0x20;
         uVar136 = ( undefined2 )(iVar63 + _UNK_00181318);
         auVar80._0_12_ = auVar73._0_12_;
         auVar80._12_2_ = uVar133;
         auVar80._14_2_ = (short)( ( uint )(iVar63 + _UNK_00181318) >> 0x10 );
         auVar79._12_4_ = auVar80._12_4_;
         auVar79._0_10_ = auVar73._0_10_;
         auVar79._10_2_ = auVar102._10_2_;
         auVar78._10_6_ = auVar79._10_6_;
         auVar78._0_8_ = auVar73._0_8_;
         auVar78._8_2_ = auVar102._2_2_;
         auVar20._2_8_ = auVar78._8_8_;
         auVar20._0_2_ = uVar136;
         auVar20._10_6_ = 0;
         auVar77._12_4_ = 0;
         auVar77._0_12_ = SUB1612(auVar20 << 0x30, 4);
         auVar77 = auVar77 << 0x20;
         iVar119 = iVar42 + __LC105;
         iVar135 = iVar117 + _UNK_00181324;
         auVar120._0_8_ = CONCAT44(iVar135, iVar119);
         auVar120._8_4_ = iVar63 + _UNK_00181328;
         auVar83._0_12_ = auVar77._0_12_;
         auVar83._12_2_ = uVar136;
         auVar83._14_2_ = (short)( iVar43 + _UNK_0018131c );
         auVar82._12_4_ = auVar83._12_4_;
         auVar82._0_10_ = auVar77._0_10_;
         auVar82._10_2_ = uVar134;
         auVar81._10_6_ = auVar82._10_6_;
         auVar81._0_8_ = auVar77._0_8_;
         auVar81._8_2_ = (short)( iVar42 + __LC104 );
         auVar84._8_8_ = auVar81._8_8_;
         auVar84._6_2_ = auVar102._12_2_;
         auVar84._4_2_ = auVar102._8_2_;
         auVar84._2_2_ = auVar102._4_2_;
         auVar123._12_2_ = (short)( (uint)iVar135 >> 0x10 );
         auVar123._0_12_ = auVar120;
         auVar123._14_2_ = (short)( ( uint )(iVar117 + _UNK_00181334) >> 0x10 );
         auVar122._12_4_ = auVar123._12_4_;
         auVar122._0_10_ = auVar120._0_10_;
         uVar134 = ( undefined2 )(iVar117 + _UNK_00181334);
         auVar122._10_2_ = uVar134;
         auVar121._10_6_ = auVar122._10_6_;
         auVar121._8_2_ = (short)iVar135;
         auVar121._0_8_ = auVar120._0_8_;
         uVar133 = ( undefined2 )(( uint )(iVar42 + __LC106) >> 0x10);
         auVar21._2_8_ = auVar121._8_8_;
         auVar21._0_2_ = uVar133;
         auVar21._10_6_ = 0;
         auVar131._0_2_ = (undefined2)iVar119;
         auVar102._12_4_ = 0;
         auVar102._0_12_ = SUB1612(auVar21 << 0x30, 4);
         auVar102 = auVar102 << 0x20;
         auVar84 = auVar84 & __LC85;
         uVar136 = ( undefined2 )(iVar63 + _UNK_00181338);
         auVar127._0_12_ = auVar102._0_12_;
         auVar127._12_2_ = uVar133;
         auVar127._14_2_ = (short)( ( uint )(iVar63 + _UNK_00181338) >> 0x10 );
         auVar126._12_4_ = auVar127._12_4_;
         auVar126._0_10_ = auVar102._0_10_;
         auVar126._10_2_ = (short)( (uint)auVar120._8_4_ >> 0x10 );
         auVar125._10_6_ = auVar126._10_6_;
         auVar125._0_8_ = auVar102._0_8_;
         auVar125._8_2_ = (short)( (uint)iVar119 >> 0x10 );
         auVar22._2_8_ = auVar125._8_8_;
         auVar22._0_2_ = uVar136;
         auVar22._10_6_ = 0;
         auVar124._12_4_ = 0;
         auVar124._0_12_ = SUB1612(auVar22 << 0x30, 4);
         auVar124 = auVar124 << 0x20;
         auVar130._0_12_ = auVar124._0_12_;
         auVar130._12_2_ = uVar136;
         auVar130._14_2_ = (short)( iVar43 + _UNK_0018133c );
         auVar129._12_4_ = auVar130._12_4_;
         auVar129._0_10_ = auVar124._0_10_;
         auVar129._10_2_ = uVar134;
         auVar128._10_6_ = auVar129._10_6_;
         auVar128._0_8_ = auVar124._0_8_;
         auVar128._8_2_ = (short)( iVar42 + __LC106 );
         auVar131._8_8_ = auVar128._8_8_;
         auVar131._6_2_ = (short)( iVar43 + _UNK_0018132c );
         auVar131._4_2_ = (short)auVar120._8_4_;
         auVar131._2_2_ = (short)iVar135;
         auVar131 = auVar131 & __LC85;
         sVar18 = auVar84._0_2_;
         cVar2 = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * auVar84[0] - ( 0xff < sVar18 );
         sVar18 = auVar84._2_2_;
         cVar3 = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * auVar84[2] - ( 0xff < sVar18 );
         uVar65 = CONCAT11(cVar3, cVar2);
         sVar18 = auVar84._4_2_;
         cVar4 = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * auVar84[4] - ( 0xff < sVar18 );
         sVar18 = auVar84._6_2_;
         cVar5 = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * auVar84[6] - ( 0xff < sVar18 );
         uVar66 = CONCAT13(cVar5, CONCAT12(cVar4, uVar65));
         sVar18 = auVar84._8_2_;
         cVar6 = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * auVar84[8] - ( 0xff < sVar18 );
         sVar18 = auVar84._10_2_;
         cVar7 = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * auVar84[10] - ( 0xff < sVar18 );
         uVar67 = CONCAT15(cVar7, CONCAT14(cVar6, uVar66));
         sVar18 = auVar84._12_2_;
         cVar8 = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * auVar84[0xc] - ( 0xff < sVar18 );
         sVar18 = auVar84._14_2_;
         cVar9 = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * auVar84[0xe] - ( 0xff < sVar18 );
         uVar68 = CONCAT17(cVar9, CONCAT16(cVar8, uVar67));
         sVar18 = auVar131._0_2_;
         cVar10 = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * auVar131[0] - ( 0xff < sVar18 );
         sVar18 = auVar131._2_2_;
         cVar11 = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * auVar131[2] - ( 0xff < sVar18 );
         auVar69._0_10_ = CONCAT19(cVar11, CONCAT18(cVar10, uVar68));
         sVar18 = auVar131._4_2_;
         cVar12 = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * auVar131[4] - ( 0xff < sVar18 );
         auVar69[10] = cVar12;
         sVar18 = auVar131._6_2_;
         cVar13 = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * auVar131[6] - ( 0xff < sVar18 );
         auVar69[0xb] = cVar13;
         sVar18 = auVar131._8_2_;
         cVar14 = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * auVar131[8] - ( 0xff < sVar18 );
         auVar71[0xc] = cVar14;
         auVar71._0_12_ = auVar69;
         sVar18 = auVar131._10_2_;
         cVar15 = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * auVar131[10] - ( 0xff < sVar18 );
         auVar71[0xd] = cVar15;
         sVar18 = auVar131._12_2_;
         cVar16 = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * auVar131[0xc] - ( 0xff < sVar18 );
         auVar85[0xe] = cVar16;
         auVar85._0_14_ = auVar71;
         sVar18 = auVar131._14_2_;
         cVar17 = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * auVar131[0xe] - ( 0xff < sVar18 );
         auVar85[0xf] = cVar17;
         auVar132._0_2_ = uVar65 >> 2;
         auVar132._2_2_ = ( ushort )((uint)uVar66 >> 0x12);
         auVar132._4_2_ = ( ushort )((uint6)uVar67 >> 0x22);
         auVar132._6_2_ = ( ushort )((ulong)uVar68 >> 0x32);
         auVar132._8_2_ = ( ushort )((unkuint10)auVar69._0_10_ >> 0x42);
         auVar132._10_2_ = auVar69._10_2_ >> 2;
         auVar132._12_2_ = auVar71._12_2_ >> 2;
         auVar132._14_2_ = auVar85._14_2_ >> 2;
         auVar86[1] = cVar3 * '\b';
         auVar86[0] = cVar2 * '\b';
         auVar86[2] = cVar4 * '\b';
         auVar86[3] = cVar5 * '\b';
         auVar86[4] = cVar6 * '\b';
         auVar86[5] = cVar7 * '\b';
         auVar86[6] = cVar8 * '\b';
         auVar86[7] = cVar9 * '\b';
         auVar86[8] = cVar10 * '\b';
         auVar86[9] = cVar11 * '\b';
         auVar86[10] = cVar12 * '\b';
         auVar86[0xb] = cVar13 * '\b';
         auVar86[0xc] = cVar14 * '\b';
         auVar86[0xd] = cVar15 * '\b';
         auVar86[0xe] = cVar16 * '\b';
         auVar86[0xf] = cVar17 * '\b';
         *pauVar47 = auVar86 | auVar132 & __LC107;
         pauVar47 = pauVar46;
         auVar102 = auVar103;
      }
 while ( pauVar46 != (undefined1(*) [16])local_88 );
      puVar59 = &g_bc1_match5_equals_1;
      iVar42 = 0;
      do {
         iVar117 = 0x100;
         lVar49 = 0;
         do {
            bVar64 = ( *(undefined1(*) [16])local_a8 )[lVar49];
            lVar56 = 0;
            do {
               bVar1 = ( *(undefined1(*) [16])local_a8 )[lVar56];
               iVar43 = ( (uint)bVar64 + (uint)bVar1 * 2 ) / 3 - iVar42;
               iVar63 = -iVar43;
               if (0 < iVar43) {
                  iVar63 = iVar43;
               }

               iVar43 = (uint)bVar1 - (uint)bVar64;
               if (iVar43 < 1) {
                  iVar43 = -iVar43;
               }

               iVar63 = iVar63 + ( uint )(iVar43 * 3) / 100;
               if (iVar63 < iVar117) {
                  *puVar59 = (char)lVar56;
                  puVar59[1] = (char)lVar49;
                  iVar117 = iVar63;
               }

               lVar56 = lVar56 + 1;
            }
 while ( lVar56 != 0x20 );
            lVar49 = lVar49 + 1;
         }
 while ( lVar49 != 0x20 );
         iVar42 = iVar42 + 1;
         puVar59 = puVar59 + 2;
      }
 while ( iVar42 != 0x100 );
      puVar59 = &g_bc1_match5_equals_0;
      iVar42 = 0;
      do {
         iVar117 = 0x100;
         lVar49 = 0;
         do {
            iVar63 = ( uint )(byte)(*(undefined1(*) [16])local_a8)[lVar49] - iVar42;
            if (iVar63 < 1) {
               iVar63 = -iVar63;
            }

            if (iVar63 < iVar117) {
               *puVar59 = (char)lVar49;
               puVar59[1] = 0;
               iVar117 = iVar63;
            }

            lVar49 = lVar49 + 1;
         }
 while ( lVar49 != 0x20 );
         iVar42 = iVar42 + 1;
         puVar59 = puVar59 + 2;
      }
 while ( iVar42 != 0x100 );
      pauVar47 = (undefined1(*) [16])local_88;
      do {
         pauVar46 = pauVar47 + 1;
         iVar63 = auVar104._0_4_;
         auVar118._0_4_ = iVar63 + iVar50;
         iVar43 = auVar104._4_4_;
         auVar118._4_4_ = iVar43 + iVar51;
         iVar119 = auVar104._8_4_;
         iVar135 = auVar104._12_4_;
         auVar118._8_4_ = iVar119 + iVar28;
         auVar118._12_4_ = iVar135 + iVar29;
         auVar90._0_12_ = auVar104._0_12_;
         auVar90._12_2_ = auVar104._6_2_;
         auVar90._14_2_ = (short)( ( uint )(iVar43 + iVar31) >> 0x10 );
         auVar89._12_4_ = auVar90._12_4_;
         auVar89._0_10_ = auVar104._0_10_;
         uVar134 = ( undefined2 )(iVar43 + iVar31);
         auVar89._10_2_ = uVar134;
         auVar88._10_6_ = auVar89._10_6_;
         auVar88._0_8_ = auVar104._0_8_;
         auVar88._8_2_ = auVar104._4_2_;
         uVar133 = ( undefined2 )(( uint )(iVar63 + iVar30) >> 0x10);
         auVar23._2_8_ = auVar88._8_8_;
         auVar23._0_2_ = uVar133;
         auVar23._10_6_ = 0;
         auVar98._0_2_ = auVar104._0_2_;
         auVar87._12_4_ = 0;
         auVar87._0_12_ = SUB1612(auVar23 << 0x30, 4);
         auVar87 = auVar87 << 0x20;
         uVar136 = ( undefined2 )(iVar119 + iVar32);
         auVar94._0_12_ = auVar87._0_12_;
         auVar94._12_2_ = uVar133;
         auVar94._14_2_ = (short)( ( uint )(iVar119 + iVar32) >> 0x10 );
         auVar93._12_4_ = auVar94._12_4_;
         auVar93._0_10_ = auVar87._0_10_;
         auVar93._10_2_ = auVar104._10_2_;
         auVar92._10_6_ = auVar93._10_6_;
         auVar92._0_8_ = auVar87._0_8_;
         auVar92._8_2_ = auVar104._2_2_;
         auVar24._2_8_ = auVar92._8_8_;
         auVar24._0_2_ = uVar136;
         auVar24._10_6_ = 0;
         auVar91._12_4_ = 0;
         auVar91._0_12_ = SUB1612(auVar24 << 0x30, 4);
         auVar91 = auVar91 << 0x20;
         iVar42 = iVar63 + iVar34;
         iVar117 = iVar43 + iVar35;
         auVar101._0_8_ = CONCAT44(iVar117, iVar42);
         auVar101._8_4_ = iVar119 + iVar36;
         auVar97._0_12_ = auVar91._0_12_;
         auVar97._12_2_ = uVar136;
         auVar97._14_2_ = (short)( iVar135 + iVar33 );
         auVar96._12_4_ = auVar97._12_4_;
         auVar96._0_10_ = auVar91._0_10_;
         auVar96._10_2_ = uVar134;
         auVar95._10_6_ = auVar96._10_6_;
         auVar95._0_8_ = auVar91._0_8_;
         auVar95._8_2_ = (short)( iVar63 + iVar30 );
         auVar98._8_8_ = auVar95._8_8_;
         auVar98._6_2_ = auVar104._12_2_;
         auVar98._4_2_ = auVar104._8_2_;
         auVar98._2_2_ = auVar104._4_2_;
         auVar107._12_2_ = (short)( (uint)iVar117 >> 0x10 );
         auVar107._0_12_ = auVar101;
         auVar107._14_2_ = (short)( ( uint )(iVar43 + iVar39) >> 0x10 );
         auVar106._12_4_ = auVar107._12_4_;
         auVar106._0_10_ = auVar101._0_10_;
         uVar134 = ( undefined2 )(iVar43 + iVar39);
         auVar106._10_2_ = uVar134;
         auVar105._10_6_ = auVar106._10_6_;
         auVar105._8_2_ = (short)iVar117;
         auVar105._0_8_ = auVar101._0_8_;
         uVar133 = ( undefined2 )(( uint )(iVar63 + iVar38) >> 0x10);
         auVar25._2_8_ = auVar105._8_8_;
         auVar25._0_2_ = uVar133;
         auVar25._10_6_ = 0;
         auVar115._0_2_ = (undefined2)iVar42;
         auVar104._12_4_ = 0;
         auVar104._0_12_ = SUB1612(auVar25 << 0x30, 4);
         auVar104 = auVar104 << 0x20;
         auVar98 = auVar98 & auVar27;
         uVar136 = ( undefined2 )(iVar119 + iVar40);
         auVar111._0_12_ = auVar104._0_12_;
         auVar111._12_2_ = uVar133;
         auVar111._14_2_ = (short)( ( uint )(iVar119 + iVar40) >> 0x10 );
         auVar110._12_4_ = auVar111._12_4_;
         auVar110._0_10_ = auVar104._0_10_;
         auVar110._10_2_ = (short)( (uint)auVar101._8_4_ >> 0x10 );
         auVar109._10_6_ = auVar110._10_6_;
         auVar109._0_8_ = auVar104._0_8_;
         auVar109._8_2_ = (short)( (uint)iVar42 >> 0x10 );
         auVar26._2_8_ = auVar109._8_8_;
         auVar26._0_2_ = uVar136;
         auVar26._10_6_ = 0;
         auVar108._12_4_ = 0;
         auVar108._0_12_ = SUB1612(auVar26 << 0x30, 4);
         auVar108 = auVar108 << 0x20;
         auVar114._0_12_ = auVar108._0_12_;
         auVar114._12_2_ = uVar136;
         auVar114._14_2_ = (short)( iVar135 + iVar41 );
         auVar113._12_4_ = auVar114._12_4_;
         auVar113._0_10_ = auVar108._0_10_;
         auVar113._10_2_ = uVar134;
         auVar112._10_6_ = auVar113._10_6_;
         auVar112._0_8_ = auVar108._0_8_;
         auVar112._8_2_ = (short)( iVar63 + iVar38 );
         auVar115._8_8_ = auVar112._8_8_;
         auVar115._6_2_ = (short)( iVar135 + iVar37 );
         auVar115._4_2_ = (short)auVar101._8_4_;
         auVar115._2_2_ = (short)iVar117;
         auVar115 = auVar115 & auVar27;
         sVar18 = auVar98._0_2_;
         cVar7 = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * auVar98[0] - ( 0xff < sVar18 );
         sVar18 = auVar98._2_2_;
         cVar8 = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * auVar98[2] - ( 0xff < sVar18 );
         uVar65 = CONCAT11(cVar8, cVar7);
         sVar18 = auVar98._4_2_;
         cVar9 = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * auVar98[4] - ( 0xff < sVar18 );
         sVar18 = auVar98._6_2_;
         cVar11 = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * auVar98[6] - ( 0xff < sVar18 );
         uVar66 = CONCAT13(cVar11, CONCAT12(cVar9, uVar65));
         sVar18 = auVar98._8_2_;
         cVar6 = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * auVar98[8] - ( 0xff < sVar18 );
         sVar18 = auVar98._10_2_;
         cVar5 = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * auVar98[10] - ( 0xff < sVar18 );
         uVar67 = CONCAT15(cVar5, CONCAT14(cVar6, uVar66));
         sVar18 = auVar98._12_2_;
         cVar4 = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * auVar98[0xc] - ( 0xff < sVar18 );
         sVar18 = auVar98._14_2_;
         cVar2 = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * auVar98[0xe] - ( 0xff < sVar18 );
         uVar68 = CONCAT17(cVar2, CONCAT16(cVar4, uVar67));
         sVar18 = auVar115._0_2_;
         cVar10 = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * auVar115[0] - ( 0xff < sVar18 );
         sVar18 = auVar115._2_2_;
         cVar3 = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * auVar115[2] - ( 0xff < sVar18 );
         auVar70._0_10_ = CONCAT19(cVar3, CONCAT18(cVar10, uVar68));
         sVar18 = auVar115._4_2_;
         cVar12 = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * auVar115[4] - ( 0xff < sVar18 );
         auVar70[10] = cVar12;
         sVar18 = auVar115._6_2_;
         cVar13 = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * auVar115[6] - ( 0xff < sVar18 );
         auVar70[0xb] = cVar13;
         sVar18 = auVar115._8_2_;
         cVar14 = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * auVar115[8] - ( 0xff < sVar18 );
         auVar72[0xc] = cVar14;
         auVar72._0_12_ = auVar70;
         sVar18 = auVar115._10_2_;
         cVar15 = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * auVar115[10] - ( 0xff < sVar18 );
         auVar72[0xd] = cVar15;
         sVar18 = auVar115._12_2_;
         cVar16 = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * auVar115[0xc] - ( 0xff < sVar18 );
         auVar99[0xe] = cVar16;
         auVar99._0_14_ = auVar72;
         sVar18 = auVar115._14_2_;
         cVar17 = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * auVar115[0xe] - ( 0xff < sVar18 );
         auVar99[0xf] = cVar17;
         auVar116._0_2_ = uVar65 >> 4;
         auVar116._2_2_ = ( ushort )((uint)uVar66 >> 0x14);
         auVar116._4_2_ = ( ushort )((uint6)uVar67 >> 0x24);
         auVar116._6_2_ = ( ushort )((ulong)uVar68 >> 0x34);
         auVar116._8_2_ = ( ushort )((unkuint10)auVar70._0_10_ >> 0x44);
         auVar116._10_2_ = auVar70._10_2_ >> 4;
         auVar116._12_2_ = auVar72._12_2_ >> 4;
         auVar116._14_2_ = auVar99._14_2_ >> 4;
         auVar100[1] = cVar8 * '\x04';
         auVar100[0] = cVar7 * '\x04';
         auVar100[2] = cVar9 * '\x04';
         auVar100[3] = cVar11 * '\x04';
         auVar100[4] = cVar6 * '\x04';
         auVar100[5] = cVar5 * '\x04';
         auVar100[6] = cVar4 * '\x04';
         auVar100[7] = cVar2 * '\x04';
         auVar100[8] = cVar10 * '\x04';
         auVar100[9] = cVar3 * '\x04';
         auVar100[10] = cVar12 * '\x04';
         auVar100[0xb] = cVar13 * '\x04';
         auVar100[0xc] = cVar14 * '\x04';
         auVar100[0xd] = cVar15 * '\x04';
         auVar100[0xe] = cVar16 * '\x04';
         auVar100[0xf] = cVar17 * '\x04';
         *pauVar47 = auVar100 | auVar116 & __LC108;
         pauVar47 = pauVar46;
         auVar104 = auVar118;
      }
 while ( (undefined1(*) [16])local_48 != pauVar46 );
      puVar59 = &g_bc1_match6_equals_1;
      iVar42 = 0;
      do {
         iVar117 = 0x100;
         lVar49 = 0;
         do {
            bVar64 = ( *(undefined1(*) [16])local_88 )[lVar49];
            lVar56 = 0;
            do {
               bVar1 = ( *(undefined1(*) [16])local_88 )[lVar56];
               iVar51 = ( (uint)bVar64 + (uint)bVar1 * 2 ) / 3 - iVar42;
               iVar50 = -iVar51;
               if (0 < iVar51) {
                  iVar50 = iVar51;
               }

               iVar51 = (uint)bVar1 - (uint)bVar64;
               if (iVar51 < 1) {
                  iVar51 = -iVar51;
               }

               iVar50 = iVar50 + ( uint )(iVar51 * 3) / 100;
               if (iVar50 < iVar117) {
                  *puVar59 = (char)lVar56;
                  puVar59[1] = (char)lVar49;
                  iVar117 = iVar50;
               }

               lVar56 = lVar56 + 1;
            }
 while ( lVar56 != 0x40 );
            lVar49 = lVar49 + 1;
         }
 while ( lVar49 != 0x40 );
         iVar42 = iVar42 + 1;
         puVar59 = puVar59 + 2;
      }
 while ( iVar42 != 0x100 );
      puVar59 = &g_bc1_match6_equals_0;
      iVar42 = 0;
      do {
         iVar117 = 0x100;
         lVar49 = 0;
         do {
            iVar50 = ( uint )(byte)(*(undefined1(*) [16])local_88)[lVar49] - iVar42;
            if (iVar50 < 1) {
               iVar50 = -iVar50;
            }

            if (iVar50 < iVar117) {
               *puVar59 = (char)lVar49;
               puVar59[1] = 0;
               iVar117 = iVar50;
            }

            lVar49 = lVar49 + 1;
         }
 while ( lVar49 != 0x40 );
         iVar42 = iVar42 + 1;
         puVar59 = puVar59 + 2;
      }
 while ( iVar42 != 0x100 );
      puVar59 = g_etc1_to_dxt1_selector_mappings;
      local_ac[0] = 1;
      uVar48 = 0;
      g_etc1_to_dxt1_selector_range_index._12_4_ = 0;
      g_etc1_to_dxt1_selector_range_index._44_4_ = 4;
      puVar62 = &g_etc1_to_dxt1_selector_mappings_raw_dxt1_256;
      puVar55 = &g_etc1_to_dxt1_selector_mappings_raw_dxt1_inv_256;
      while (true) {
         local_b0[0] = (byte)uVar48;
         lVar49 = 1;
         do {
            bVar64 = *(byte*)( (long)&basisu_transcoder_init()::s_dxt1_inverted_xlat + ( ulong ) * (byte*)( (long)&basisu_transcoder_init()::s_linear_dxt1_to_dxt1 + (ulong)(byte)puVar59[lVar49] ) );
            local_b0[lVar49] = *(byte*)( (long)&basisu_transcoder_init()::s_linear_dxt1_to_dxt1 + (ulong)(byte)puVar59[lVar49] );
            local_ac[lVar49] = bVar64;
            lVar49 = lVar49 + 1;
         }
 while ( lVar49 != 4 );
         lVar49 = 0;
         do {
            iVar42 = 0;
            uVar61 = 0;
            uVar53 = 0;
            do {
               bVar64 = (byte)iVar42;
               uVar44 = (uint)lVar49 >> ( bVar64 & 0x1f ) & 3;
               iVar42 = iVar42 + 2;
               uVar53 = uVar53 | (uint)local_b0[uVar44] << ( bVar64 & 0x1f );
               uVar61 = uVar61 | (uint)local_ac[uVar44] << ( bVar64 & 0x1f );
            }
 while ( iVar42 != 8 );
            puVar62[lVar49] = (char)uVar53;
            puVar55[lVar49] = (char)uVar61;
            lVar49 = lVar49 + 1;
         }
 while ( lVar49 != 0x100 );
         puVar62 = puVar62 + 0x100;
         puVar55 = puVar55 + 0x100;
         puVar59 = puVar59 + 4;
         if ((undefined4*)puVar59 == &g_selector_index_to_etc1) break;
         uVar48 = ( ulong ) * (byte*)( (long)&basisu_transcoder_init()::s_linear_dxt1_to_dxt1 + ( ulong )(byte) * puVar59 );
         local_ac[0] = *(byte*)( (long)&basisu_transcoder_init()::s_dxt1_inverted_xlat + uVar48 );
      }
;
      g_etc1_to_bc7_m5_selector_range_index._12_4_ = 0;
      g_etc1_to_bc7_m5_selector_range_index._44_4_ = 4;
      g_etc1_to_bc7_m5a_selector_range_index._12_4_ = 0;
      g_etc1_to_bc7_m5a_selector_range_index._44_4_ = 4;
      if (g_bc6h_enc_initialized == '\0') {
         g_bc6h_enc_initialized = '\x01';
      }

      g_transcoder_initialized = '\x01';
      g_etc1_to_bc7_m5_selector_range_index._4_8_ = g_etc1_to_bc7_m5a_selector_range_index._4_8_;
      g_etc1_to_bc7_m5_selector_range_index._24_8_ = g_etc1_to_bc7_m5a_selector_range_index._24_8_;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* basist::ktx2_transcoder::clear() */void basist::ktx2_transcoder::clear(ktx2_transcoder *this) {
   bool bVar1;
   ktx2_transcoder *pkVar2;
   undefined8 *puVar3;
   ktx2_transcoder *pkVar4;
   undefined8 *__ptr;
   ktx2_transcoder *pkVar5;
   ktx2_transcoder *pkVar6;
   *(undefined8*)this = 0;
   *(undefined4*)( this + 8 ) = 0;
   for (int i = 0; i < 5; i++) {
      *(undefined1(*) [16])( this + ( 16*i + 12 ) ) = (undefined1[16])0;
   }

   if (*(void**)( this + 0x60 ) != (void*)0x0) {
      free(*(void**)( this + 0x60 ));
      *(undefined8*)( this + 0x60 ) = 0;
      *(undefined8*)( this + 0x68 ) = 0;
   }

   if (*(void**)( this + 0x70 ) != (void*)0x0) {
      free(*(void**)( this + 0x70 ));
      *(undefined8*)( this + 0x70 ) = 0;
      *(undefined8*)( this + 0x78 ) = 0;
   }

   puVar3 = *(undefined8**)( this + 0x80 );
   if (puVar3 != (undefined8*)0x0) {
      __ptr = puVar3 + ( ulong ) * (uint*)( this + 0x88 ) * 4;
      if (puVar3 != __ptr) {
         do {
            if ((void*)puVar3[2] != (void*)0x0) {
               free((void*)puVar3[2]);
            }

            if ((void*)*puVar3 != (void*)0x0) {
               free((void*)*puVar3);
            }

            puVar3 = puVar3 + 4;
         }
 while ( __ptr != puVar3 );
         __ptr = *(undefined8**)( this + 0x80 );
      }

      free(__ptr);
      *(undefined8*)( this + 0x80 ) = 0;
      *(undefined8*)( this + 0x88 ) = 0;
   }

   *(undefined4*)( this + 0xa0 ) = 0;
   *(undefined1(*) [16])( this + 0x90 ) = (undefined1[16])0x0;
   if (*(void**)( this + 0xa8 ) != (void*)0x0) {
      free(*(void**)( this + 0xa8 ));
      *(undefined8*)( this + 0xa8 ) = 0;
      *(undefined8*)( this + 0xb0 ) = 0;
   }

   *(undefined4*)( this + 0xb8 ) = 0;
   *(undefined8*)( this + 0xcc ) = 0;
   *(undefined4*)( this + 0xd4 ) = 0;
   *(undefined1(*) [16])( this + 0xbc ) = (undefined1[16])0x0;
   if (*(void**)( this + 0xe0 ) != (void*)0x0) {
      free(*(void**)( this + 0xe0 ));
      *(undefined8*)( this + 0xe0 ) = 0;
      *(undefined8*)( this + 0xe8 ) = 0;
   }

   if (*(void**)( this + 0xf0 ) != (void*)0x0) {
      free(*(void**)( this + 0xf0 ));
      *(undefined8*)( this + 0xf0 ) = 0;
      *(undefined8*)( this + 0xf8 ) = 0;
   }

   pkVar6 = this + 0x3f0;
   bVar1 = false;
   huffman_decoding_table::clear((huffman_decoding_table*)( this + 0x100 ));
   pkVar5 = this + 0x510;
   for (int i = 0; i < 3; i++) {
      huffman_decoding_table::clear((huffman_decoding_table*)( this + ( 48*i + 304 ) ));
   }

   *(undefined4*)( this + 0x1c0 ) = 0;
   while (true) {
      if (*(void**)pkVar6 != (void*)0x0) {
         free(*(void**)pkVar6);
         *(undefined8*)pkVar6 = 0;
         *(undefined8*)( pkVar6 + 8 ) = 0;
      }

      pkVar2 = pkVar5 + -0x100;
      do {
         pkVar4 = pkVar2;
         if (*(void**)pkVar4 != (void*)0x0) {
            free(*(void**)pkVar4);
            *(undefined8*)pkVar4 = 0;
            *(undefined8*)( pkVar4 + 8 ) = 0;
         }

         pkVar2 = pkVar4 + 0x10;
      }
 while ( pkVar4 + 0x10 != pkVar5 );
      pkVar6 = pkVar6 + 0x10;
      pkVar5 = pkVar4 + 0x110;
      if (bVar1) break;
      bVar1 = true;
   }
;
   if (*(void**)( this + 0x610 ) != (void*)0x0) {
      free(*(void**)( this + 0x610 ));
      *(undefined8*)( this + 0x610 ) = 0;
      *(undefined8*)( this + 0x618 ) = 0;
   }

   *(undefined4*)( this + 0x620 ) = 0xffffffff;
   *(undefined2*)( this + 0x628 ) = 0;
   return;
}
/* basist::ktx2_transcoder::ktx2_transcoder() */void basist::ktx2_transcoder::ktx2_transcoder(ktx2_transcoder *this) {
   ktx2_transcoder *pkVar1;
   ktx2_transcoder *pkVar2;
   *(undefined8*)( this + 0x60 ) = 0;
   *(undefined8*)( this + 0x68 ) = 0;
   *(undefined8*)( this + 0x70 ) = 0;
   *(undefined8*)( this + 0x78 ) = 0;
   *(undefined8*)( this + 0x80 ) = 0;
   *(undefined8*)( this + 0x88 ) = 0;
   *(undefined8*)( this + 0xa8 ) = 0;
   *(undefined8*)( this + 0xb0 ) = 0;
   basisu_lowlevel_etc1s_transcoder::basisu_lowlevel_etc1s_transcoder((basisu_lowlevel_etc1s_transcoder*)( this + 0xd8 ));
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i + 1008 ) ) = 0;
   }

   pkVar2 = this + 0x418;
   do {
      *(undefined8*)( pkVar2 + -8 ) = 0;
      pkVar1 = pkVar2 + 0x40;
      for (int i = 0; i < 3; i++) {
         *(undefined8*)( pkVar2 + ( 16*i + 8 ) ) = 0;
      }

      *(undefined8*)pkVar2 = 0;
      for (int i = 0; i < 3; i++) {
         *(undefined8*)( pkVar2 + ( 16*i + 16 ) ) = 0;
      }

      pkVar2 = pkVar1;
   }
 while ( pkVar1 != this + 0x518 );
   do {
      *(undefined8*)( pkVar1 + -8 ) = 0;
      pkVar2 = pkVar1 + 0x40;
      for (int i = 0; i < 3; i++) {
         *(undefined8*)( pkVar1 + ( 16*i + 8 ) ) = 0;
      }

      *(undefined8*)pkVar1 = 0;
      for (int i = 0; i < 3; i++) {
         *(undefined8*)( pkVar1 + ( 16*i + 16 ) ) = 0;
      }

      pkVar1 = pkVar2;
   }
 while ( this + 0x618 != pkVar2 );
   *(undefined8*)( this + 0x610 ) = 0;
   *(undefined8*)( this + 0x618 ) = 0;
   clear(this);
   return;
}
/* basist::ktx2_transcoder::get_etc1s_image_descs_image_flags(unsigned int, unsigned int, unsigned
   int) const */undefined4 basist::ktx2_transcoder::get_etc1s_image_descs_image_flags(ktx2_transcoder *this, uint param_1, uint param_2, uint param_3) {
   int iVar1;
   uint uVar2;
   undefined4 uVar3;
   iVar1 = *(int*)( this + 0x2c );
   if (iVar1 == 0) {
      iVar1 = 1;
   }

   uVar3 = 0;
   uVar2 = ( iVar1 * param_1 + param_2 ) * *(int*)( this + 0x30 ) + param_3;
   if (uVar2 < *(uint*)( this + 0xb0 )) {
      uVar3 = *(undefined4*)( *(long*)( this + 0xa8 ) + (ulong)uVar2 * 0x14 );
   }

   return uVar3;
}
/* basist::ktx2_transcoder::find_key(std::__cxx11::string const&) const */undefined8 * __thiscall basist::ktx2_transcoder::find_key(ktx2_transcoder *this,string *param_1){
   char *__s2;
   int iVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   if (*(uint*)( this + 0x88 ) != 0) {
      puVar2 = *(undefined8**)( this + 0x80 );
      __s2 = *(char**)param_1;
      puVar3 = puVar2 + ( ulong ) * (uint*)( this + 0x88 ) * 4;
      do {
         iVar1 = strcmp((char*)*puVar2, __s2);
         if (iVar1 == 0) {
            return puVar2 + 2;
         }

         puVar2 = puVar2 + 4;
      }
 while ( puVar2 != puVar3 );
   }

   return (undefined8*)0x0;
}
/* basist::ktx2_transcoder::get_image_level_info(basist::ktx2_image_level_info&, unsigned int,
   unsigned int, unsigned int) const */undefined8 basist::ktx2_transcoder::get_image_level_info(ktx2_transcoder *this, ktx2_image_level_info *param_1, uint param_2, uint param_3, uint param_4) {
   ktx2_image_level_info kVar1;
   byte bVar2;
   uint uVar3;
   int iVar4;
   uint uVar5;
   uint uVar6;
   uint uVar7;
   if (param_2 < *(uint*)( this + 0x68 )) {
      if (*(uint*)( this + 0x30 ) < 2) {
         if (param_4 != 0) {
            return 0;
         }

      }
 else if (5 < param_4) {
         return 0;
      }

      uVar5 = 1;
      if (*(uint*)( this + 0x2c ) != 0) {
         uVar5 = *(uint*)( this + 0x2c );
      }

      if (param_3 < uVar5) {
         uVar5 = *(uint*)( this + 0x20 );
         uVar6 = *(uint*)( this + 0x24 );
         *(uint*)( param_1 + 8 ) = param_4;
         bVar2 = (byte)param_2 & 0x1f;
         *(uint*)( param_1 + 4 ) = param_3;
         *(uint*)param_1 = param_2;
         uVar3 = uVar5 >> bVar2;
         if (uVar5 >> bVar2 == 0) {
            uVar3 = 1;
         }

         bVar2 = (byte)param_2 & 0x1f;
         uVar5 = uVar6 >> bVar2;
         *(uint*)( param_1 + 0xc ) = uVar3;
         if (uVar6 >> bVar2 == 0) {
            uVar5 = 1;
         }

         iVar4 = *(int*)( this + 0xb0 );
         uVar7 = uVar3 + 3 >> 2;
         *(uint*)( param_1 + 0x14 ) = uVar3 + 3 & 0xfffffffc;
         *(uint*)( param_1 + 0x1c ) = uVar7;
         *(uint*)( param_1 + 0x10 ) = uVar5;
         kVar1 = *(ktx2_image_level_info*)( this + 0x628 );
         uVar6 = uVar5 + 3 >> 2;
         *(uint*)( param_1 + 0x18 ) = uVar5 + 3 & 0xfffffffc;
         *(uint*)( param_1 + 0x20 ) = uVar6;
         param_1[0x28] = kVar1;
         param_1[0x29] = (ktx2_image_level_info)0x0;
         *(uint*)( param_1 + 0x24 ) = uVar7 * uVar6;
         if (iVar4 != 0) {
            iVar4 = *(int*)( this + 0x2c );
            if (iVar4 == 0) {
               iVar4 = 1;
            }

            param_1[0x29] = ( ktx2_image_level_info )(( ( byte )(*(uint*)( *(long*)( this + 0xa8 ) + ( ulong )(( iVar4 * param_2 + param_3 ) * *(int*)( this + 0x30 ) + param_4) * 0x14 ) >> 1) ^ 1 ) & 1);
         }

         return 1;
      }

   }

   return 0;
}
/* basist::ktx2_transcoder::decompress_level_data(unsigned int, basisu::vector<unsigned char>&) */bool basist::ktx2_transcoder::decompress_level_data(ktx2_transcoder *this, uint param_1, vector *param_2) {
   uint uVar1;
   uint uVar2;
   char cVar3;
   uVar1 = *(uint*)( param_2 + 8 );
   uVar2 = *(uint*)( *(long*)( this + 0x60 ) + (ulong)param_1 * 0x18 + 0x10 );
   if (uVar2 != uVar1) {
      if (uVar2 < uVar1) {
         *(uint*)( param_2 + 8 ) = uVar2;
      }
 else {
         if (*(uint*)( param_2 + 0xc ) < uVar2) {
            cVar3 = basisu::elemental_vector::increase_capacity((elemental_vector*)param_2, uVar2, uVar1 + 1 == uVar2, 1, (_func_void_void_ptr_void_ptr_uint*)0x0, true);
            if (cVar3 == '\0') {
               return false;
            }

            uVar1 = *(uint*)( param_2 + 8 );
         }

         memset((void*)( (ulong)uVar1 + *(long*)param_2 ), 0, ( ulong )(uVar2 - uVar1));
         *(uint*)( param_2 + 8 ) = uVar2;
      }

   }

   return *(int*)( this + 0x38 ) != 2;
}
/* basist::ktx2_transcoder::decompress_etc1s_global_data() */undefined8 basist::ktx2_transcoder::decompress_etc1s_global_data(ktx2_transcoder *this) {
   int *piVar1;
   uint uVar2;
   int iVar3;
   char cVar4;
   int *piVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   uint uVar8;
   long lVar9;
   uchar *puVar10;
   puVar7 = (undefined8*)( ( ulong ) * (uint*)( this + 0x4c ) + *(long*)this );
   uVar6 = puVar7[1];
   *(undefined8*)( this + 0x90 ) = *puVar7;
   *(undefined8*)( this + 0x98 ) = uVar6;
   *(undefined4*)( this + 0xa0 ) = *(undefined4*)( puVar7 + 2 );
   if (( ( ( *(uint*)( this + 0x94 ) != 0 ) && ( *(uint*)( this + 0x98 ) != 0 ) ) && ( *(uint*)( this + 0x9c ) != 0 ) ) && ( ( *(short*)( this + 0x90 ) != 0 && ( *(short*)( this + 0x92 ) != 0 ) ) )) {
      iVar3 = *(int*)( this + 0x2c );
      if (*(int*)( this + 0x2c ) == 0) {
         iVar3 = 1;
      }

      uVar8 = iVar3 * *(int*)( this + 0x34 ) * *(int*)( this + 0x30 );
      lVar9 = ( (ulong)uVar8 * 5 + 5 ) * 4;
      if (( ulong ) * (uint*)( this + 0x94 ) + ( ulong ) * (uint*)( this + 0x98 ) + ( ulong ) * (uint*)( this + 0x9c ) + ( ulong ) * (uint*)( this + 0xa0 ) + lVar9 <= ( ulong ) * (uint*)( this + 0x54 )) {
         uVar2 = *(uint*)( this + 0xb0 );
         if (uVar8 != uVar2) {
            if (( ( uVar2 <= uVar8 ) && ( *(uint*)( this + 0xb4 ) < uVar8 ) ) && ( cVar4 = basisu::elemental_vector::increase_capacity((elemental_vector*)( this + 0xa8 ), uVar8, uVar2 + 1 == uVar8, 0x14, basisu::vector<basist::ktx2_etc1s_image_desc>::object_mover, true) ),cVar4 == '\0') {
               return 0;
            }

            *(uint*)( this + 0xb0 ) = uVar8;
         }

         memcpy(*(void**)( this + 0xa8 ), (void*)( (long)puVar7 + 0x14 ), lVar9 - 0x14);
         if (uVar8 != 0) {
            piVar5 = (int*)( *(long*)( this + 0xa8 ) + 8 );
            piVar1 = piVar5 + (ulong)uVar8 * 5;
            do {
               if (*piVar5 == 0) {
                  return 0;
               }

               if (( this[0x628] != (ktx2_transcoder)0x0 ) && ( piVar5[2] == 0 )) {
                  return 0;
               }

               piVar5 = piVar5 + 5;
            }
 while ( piVar5 != piVar1 );
         }

         uVar8 = *(uint*)( this + 0x94 );
         puVar10 = (uchar*)( lVar9 + (long)puVar7 );
         cVar4 = basisu_lowlevel_etc1s_transcoder::decode_tables((basisu_lowlevel_etc1s_transcoder*)( this + 0xd8 ), puVar10 + ( ulong ) * (uint*)( this + 0x98 ) + (ulong)uVar8, *(uint*)( this + 0x9c ));
         if (cVar4 != '\0') {
            if (*(long*)( this + 0xd8 ) == 0) {
               uVar6 = basisu_lowlevel_etc1s_transcoder::decode_palettes((basisu_lowlevel_etc1s_transcoder*)( this + 0xd8 ), ( uint ) * (ushort*)( this + 0x90 ), puVar10, *(uint*)( this + 0x94 ), ( uint ) * (ushort*)( this + 0x92 ), puVar10 + uVar8, *(uint*)( this + 0x98 ));
               return uVar6;
            }

         }

      }

   }

   return 0;
}
/* basist::ktx2_transcoder::start_transcoding() */ulong basist::ktx2_transcoder::start_transcoding(void) {
   byte *pbVar1;
   char cVar2;
   byte *pbVar3;
   undefined8 in_RDX;
   ulong uVar4;
   ktx2_transcoder *in_RDI;
   if (*(long*)in_RDI == 0) {
      return 0;
   }

   uVar4 = CONCAT71(( int7 )((ulong)in_RDX >> 8), *(int*)( in_RDI + 0x38 ) != 2);
   if (( *(int*)( in_RDI + 0x38 ) != 1 ) || ( uVar4 = 1 * (int*)( in_RDI + 0xe8 ) != 0 )) {
      return uVar4 & 0xffffffff;
   }

   cVar2 = decompress_etc1s_global_data(in_RDI);
   uVar4 = 0;
   if (cVar2 != '\0') {
      if (( ( ( in_RDI[0x629] == (ktx2_transcoder)0x0 ) && ( *(int*)( in_RDI + 0x30 ) == 1 ) ) && ( 1 < *(uint*)( in_RDI + 0x2c ) ) ) && ( *(uint*)( in_RDI + 0xb0 ) != 0 )) {
         pbVar3 = *(byte**)( in_RDI + 0xa8 );
         pbVar1 = pbVar3 + ( ulong ) * (uint*)( in_RDI + 0xb0 ) * 0x14;
         do {
            if (( *pbVar3 & 2 ) != 0) {
               in_RDI[0x629] = (ktx2_transcoder)0x1;
               break;
            }

            pbVar3 = pbVar3 + 0x14;
         }
 while ( pbVar1 != pbVar3 );
      }

      uVar4 = 1;
   }

   return uVar4;
}
/* basist::basisu_transcoder_supports_ktx2() */undefined8 basist::basisu_transcoder_supports_ktx2(void) {
   return 1;
}
/* basist::basisu_transcoder_supports_ktx2_zstd() */undefined8 basist::basisu_transcoder_supports_ktx2_zstd(void) {
   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* basist::float_to_half(float) */uint basist::float_to_half(float param_1) {
   uint uVar1;
   long lVar2;
   uint uVar3;
   int iVar4;
   uVar1 = (uint)param_1 >> 0x1f;
   uVar3 = (int)param_1 >> 0x17 & 0xff;
   if (uVar3 == 0xff) {
      return uVar1 << 0xf | ( (uint)param_1 & 0x7fffff ) != 0 | 0x7c00;
   }

   if (uVar3 == 0) {
      uVar3 = 0;
   }
 else {
      if (0xf < (int)( uVar3 - 0x7f )) {
         return uVar1 << 0xf | 0x7c00;
      }

      if ((int)( uVar3 - 0x7f ) < -0xe) {
         iVar4 = 0;
         lVar2 = lrintf((float)( (uint)param_1 & _LC26 ) * __LC23);
         uVar3 = (uint)lVar2;
      }
 else {
         iVar4 = uVar3 - 0x70;
         lVar2 = lrintf((float)( (uint)param_1 & 0x7fffff ) * __LC25);
         uVar3 = (uint)lVar2;
      }

      if (uVar3 != 0x400) {
         return uVar1 << 0xf | iVar4 << 10 | uVar3;
      }

      uVar3 = ( iVar4 + 1 ) * 0x400;
   }

   return uVar1 << 0xf | uVar3;
}
/* basist::bc6h_enc_init() */void basist::bc6h_enc_init(void) {
   if (g_bc6h_enc_initialized == '\0') {
      g_bc6h_enc_initialized = '\x01';
   }

   return;
}
/* basist::bc6h_enc_block_mode10(basist::bc6h_block*, unsigned short const (*) [2], unsigned char
   const*) */void basist::bc6h_enc_block_mode10(bc6h_block *param_1, unsigned_short *param_2, uchar *param_3) {
   char cVar1;
   long lVar2;
   long in_FS_OFFSET;
   char cVar3;
   char cVar4;
   char cVar5;
   char cVar6;
   char cVar7;
   char cVar8;
   char cVar9;
   char cVar10;
   char cVar11;
   char cVar12;
   char cVar13;
   char cVar14;
   char cVar15;
   char cVar16;
   undefined1 local_58[8];
   uint auStack_50[2];
   undefined1 local_48[16];
   undefined1 local_38[16];
   undefined8 local_28;
   undefined1 local_20[16];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = 0;
   local_28 = 0;
   local_48 = (undefined1[16])0x0;
   local_38 = (undefined1[16])0x0;
   do {
      stack0xffffffffffffffac = SUB1612((undefined1[16])0x0, 4);
      auStack_50[lVar2] = *(ushort*)( param_2 + lVar2 ) / 0x1f;
      *(uint*)( local_48 + lVar2 * 4 + -4 ) = *(ushort*)( param_2 + lVar2 + 2 ) / 0x1f;
      lVar2 = lVar2 + 4;
   }
 while ( lVar2 != 0xc );
   local_20 = *(undefined1(*) [16])param_3;
   cVar1 = local_20[0];
   if (( local_20 & (undefined1[16])0x8 ) != (undefined1[16])0x0) {
      _local_58 = ZEXT816(0) << 0x40;
      local_48._8_8_ = local_48._8_8_ << 0x20 | (ulong)local_48._8_8_ >> 0x20;
      cVar3 = local_20[2];
      cVar4 = local_20[3];
      cVar5 = local_20[4];
      cVar6 = local_20[5];
      cVar7 = local_20[6];
      cVar8 = local_20[7];
      cVar9 = local_20[8];
      cVar10 = local_20[9];
      cVar11 = local_20[10];
      cVar12 = local_20[0xb];
      cVar13 = local_20[0xc];
      cVar14 = local_20[0xd];
      cVar15 = local_20[0xe];
      cVar16 = local_20[0xf];
      local_38._8_8_ = local_38._8_8_ << 0x20 | (ulong)local_38._8_8_ >> 0x20;
      local_20[1] = UNK_00181201 - local_20[1];
      local_20[0] = _LC108 - cVar1;
      local_20[2] = UNK_00181202 - cVar3;
      local_20[3] = UNK_00181203 - cVar4;
      local_20[4] = UNK_00181204 - cVar5;
      local_20[5] = UNK_00181205 - cVar6;
      local_20[6] = UNK_00181206 - cVar7;
      local_20[7] = UNK_00181207 - cVar8;
      local_20[8] = UNK_00181208 - cVar9;
      local_20[9] = UNK_00181209 - cVar10;
      local_20[10] = UNK_0018120a - cVar11;
      local_20[0xb] = UNK_0018120b - cVar12;
      local_20[0xc] = UNK_0018120c - cVar13;
      local_20[0xd] = UNK_0018120d - cVar14;
      local_20[0xe] = UNK_0018120e - cVar15;
      local_20[0xf] = UNK_0018120f - cVar16;
   }

   local_58._0_4_ = 10;
   pack_bc6h_block(param_1, (bc6h_logical_block*)local_58);
   if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* basist::bc6h_enc_block_1subset_4bit_weights(basist::bc6h_block*, unsigned short const (*) [2],
   unsigned char const*) */void basist::bc6h_enc_block_1subset_4bit_weights(bc6h_block *param_1, unsigned_short *param_2, uchar *param_3) {
   byte bVar1;
   char cVar2;
   ulong uVar3;
   undefined8 uVar4;
   uint uVar5;
   ulong *puVar6;
   bc6h_logical_block *pbVar7;
   uint uVar8;
   int iVar9;
   uint uVar10;
   int iVar11;
   unsigned_short *puVar12;
   undefined1 *puVar13;
   long in_FS_OFFSET;
   char local_e8;
   char cStack_e7;
   char cStack_e6;
   char cStack_e5;
   char cStack_e4;
   char cStack_e3;
   char cStack_e2;
   char cStack_e1;
   char cStack_e0;
   char cStack_df;
   char cStack_de;
   char cStack_dd;
   char cStack_dc;
   char cStack_db;
   char cStack_da;
   char cStack_d9;
   undefined8 local_a8;
   ulong local_90;
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined8 local_58;
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   iVar11 = 0xd;
   uVar3 = *(ulong*)param_3;
   uVar4 = *(undefined8*)( param_3 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_e8 = (char)uVar3;
   puVar13 = g_bc6h_mode_sig_bits;
   local_58 = 0;
   local_88 = (undefined1[16])0x0;
   local_78 = (undefined1[16])0x0;
   local_68 = (undefined1[16])0x0;
   do {
      bVar1 = puVar13[0x35];
      cVar2 = puVar13[0x34];
      iVar9 = 0x1f << ( 0x10U - cVar2 & 0x1f );
      puVar6 = &local_a8;
      puVar12 = param_2 + 2;
      do {
         if (cVar2 == '\x10') {
            uVar8 = ( uint ) * (ushort*)( puVar12 + -2 ) * 0x40 + 0x1e;
            uVar10 = uVar8 / 0x1f;
            uVar5 = ( uint ) * (ushort*)puVar12 * 0x40 + 0x1e;
            uVar10 = ( uVar8 - uVar10 >> 1 ) + uVar10 >> 4;
            uVar8 = uVar5 / 0x1f;
            uVar5 = ( uVar5 - uVar8 >> 1 ) + uVar8 >> 4;
         }
 else {
            uVar10 = (int)( ( uint ) * (ushort*)( puVar12 + -2 ) * 0x40 + 0x1e ) / iVar9;
            uVar5 = (int)( ( uint ) * (ushort*)puVar12 * 0x40 + 0x1e ) / iVar9;
         }

         *(uint*)puVar6 = uVar10;
         *(uint*)( (long)puVar6 + 4 ) = uVar5;
         puVar6 = puVar6 + 1;
         puVar12 = puVar12 + 4;
      }
 while ( &local_90 != puVar6 );
      local_50 = uVar3;
      uStack_48 = uVar4;
      if (( uVar3 & 8 ) != 0) {
         cStack_e7 = (char)( uVar3 >> 8 );
         cStack_e6 = (char)( uVar3 >> 0x10 );
         cStack_e5 = (char)( uVar3 >> 0x18 );
         cStack_e4 = (char)( uVar3 >> 0x20 );
         cStack_e3 = (char)( uVar3 >> 0x28 );
         cStack_e2 = (char)( uVar3 >> 0x30 );
         cStack_e1 = (char)( uVar3 >> 0x38 );
         cStack_e0 = (char)uVar4;
         cStack_df = (char)( (ulong)uVar4 >> 8 );
         cStack_de = (char)( (ulong)uVar4 >> 0x10 );
         cStack_dd = (char)( (ulong)uVar4 >> 0x18 );
         cStack_dc = (char)( (ulong)uVar4 >> 0x20 );
         cStack_db = (char)( (ulong)uVar4 >> 0x28 );
         cStack_da = (char)( (ulong)uVar4 >> 0x30 );
         cStack_d9 = (char)( (ulong)uVar4 >> 0x38 );
         local_50 = CONCAT17(UNK_00181207 - cStack_e1, CONCAT16(UNK_00181206 - cStack_e2, CONCAT15(UNK_00181205 - cStack_e3, CONCAT14(UNK_00181204 - cStack_e4, CONCAT13(UNK_00181203 - cStack_e5, CONCAT12(UNK_00181202 - cStack_e6, CONCAT11(UNK_00181201 - cStack_e7, _LC108 - local_e8)))))));
         uStack_48 = CONCAT17(UNK_0018120f - cStack_d9, CONCAT16(UNK_0018120e - cStack_da, CONCAT15(UNK_0018120d - cStack_db, CONCAT14(UNK_0018120c - cStack_dc, CONCAT13(UNK_0018120b - cStack_dd, CONCAT12(UNK_0018120a - cStack_de, CONCAT11(UNK_00181209 - cStack_df, UNK_00181208 - cStack_e0)))))));
         puVar6 = &local_a8;
         do {
            *puVar6 = *puVar6 << 0x20 | *puVar6 >> 0x20;
            puVar6 = puVar6 + 1;
         }
 while ( &local_90 != puVar6 );
      }

      iVar9 = 1 << ( bVar1 - 1 & 0x1f );
      pbVar7 = (bc6h_logical_block*)local_88;
      puVar6 = &local_a8;
      while (true) {
         uVar5 = *(int*)( (long)puVar6 + 4 ) - (int)*puVar6;
         *(int*)( pbVar7 + 8 ) = (int)*puVar6;
         if (( (int)uVar5 < -iVar9 ) || ( iVar9 <= (int)uVar5 )) break;
         puVar6 = puVar6 + 1;
         *(uint*)( pbVar7 + 0xc ) = uVar5 & ( 1 << ( bVar1 & 0x1f ) ) - 1U;
         pbVar7 = pbVar7 + 0x10;
         if (&local_90 == puVar6) {
            local_88._4_12_ = SUB1612((undefined1[16])0x0, 4);
            local_88._0_4_ = iVar11;
            pack_bc6h_block(param_1, (bc6h_logical_block*)local_88);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            goto LAB_0011ed02;
         }

      }
;
      iVar11 = iVar11 + -1;
      puVar13 = puVar13 + -4;
      if (iVar11 == 10) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            bc6h_enc_block_mode10(param_1, param_2, param_3);
            return;
         }

         LAB_0011ed02:/* WARNING: Subroutine does not return */__stack_chk_fail();
      }

   }
 while ( true );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* basist::bc6h_enc_block_1subset_mode9_3bit_weights(basist::bc6h_block*, unsigned short const (*)
   [2], unsigned char const*) */void basist::bc6h_enc_block_1subset_mode9_3bit_weights(bc6h_block *param_1, unsigned_short *param_2, uchar *param_3) {
   uint uVar1;
   uint uVar2;
   byte *pbVar3;
   long lVar4;
   ulong *puVar5;
   long in_FS_OFFSET;
   undefined1 auVar6[16];
   undefined1 local_58[8];
   int aiStack_50[2];
   undefined8 local_48;
   ulong uStack_40;
   ulong local_38;
   ulong uStack_30;
   ulong local_28;
   ulong local_20;
   ulong local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar4 = 0;
   local_28 = 0;
   auVar6._0_4_ = -(uint)((int)__LC110 < 0);
   auVar6._4_4_ = -(uint)(_UNK_00181354 < 0);
   auVar6._8_4_ = -(uint)((int)_UNK_00181358 < 0);
   auVar6._12_4_ = -(uint)(_UNK_0018135c < 0);
   stack0xffffffffffffffac = SUB1612((undefined1[16])0x0, 4);
   local_48 = 0;
   uStack_40 = 0;
   local_38 = 0;
   uStack_30 = 0;
   do {
      uVar1 = ( uint ) * (ushort*)( param_2 + lVar4 ) * 0x40 + 0x1e;
      uVar2 = ( uint ) * (ushort*)( param_2 + lVar4 + 2 ) * 0x40 + 0x1e;
      aiStack_50[lVar4] = (int)( uVar1 + (int)( (ulong)uVar1 * (ulong)__LC110 + ( (ulong)auVar6._0_4_ * (ulong)uVar1 << 0x20 ) >> 0x20 ) ) >> 0xe;
      aiStack_50[lVar4 + 1] = (int)( uVar2 + (int)( (ulong)uVar2 * (ulong)__LC110 + ( (ulong)auVar6._0_4_ * (ulong)uVar2 << 0x20 ) >> 0x20 ) ) >> 0xe;
      *(int*)( (long)&local_48 + lVar4 * 4 ) = (int)( uVar1 + (int)( (ulong)uVar1 * (ulong)_UNK_00181358 + ( ( auVar6._8_8_ & 0xffffffff ) * (ulong)uVar1 << 0x20 ) >> 0x20 ) ) >> 0xe;
      *(int*)( (long)&local_48 + lVar4 * 4 + 4 ) = (int)( uVar2 + (int)( (ulong)uVar2 * (ulong)_UNK_00181358 + ( ( auVar6._8_8_ & 0xffffffff ) * (ulong)uVar2 << 0x20 ) >> 0x20 ) ) >> 0xe;
      lVar4 = lVar4 + 4;
   }
 while ( lVar4 != 0xc );
   local_20 = *(ulong*)param_3;
   local_18 = *(ulong*)( param_3 + 8 );
   if (( *(ulong*)param_3 & 4 ) != 0) {
      pbVar3 = &g_bc6h_2subset_patterns;
      _local_58 = ZEXT816(0) << 0x40;
      puVar5 = &local_20;
      uStack_40 = uStack_40 << 0x20 | uStack_40 >> 0x20;
      uStack_30 = uStack_30 << 0x20 | uStack_30 >> 0x20;
      do {
         if (( *pbVar3 & 0x7f ) == 0) {
            *(char*)puVar5 = '\a' - (char)*puVar5;
         }

         pbVar3 = pbVar3 + 1;
         puVar5 = (ulong*)( (long)puVar5 + 1 );
      }
 while ( pbVar3 != &DAT_0012ce10 );
   }

   if (( local_18 & 0x400000000000000 ) != 0) {
      pbVar3 = &g_bc6h_2subset_patterns;
      local_48 = local_48 << 0x20 | local_48 >> 0x20;
      puVar5 = &local_20;
      local_38 = local_38 << 0x20 | local_38 >> 0x20;
      local_28 = local_28 << 0x20 | local_28 >> 0x20;
      do {
         if (( *pbVar3 & 0x7f ) == 1) {
            *(char*)puVar5 = '\a' - (char)*puVar5;
         }

         pbVar3 = pbVar3 + 1;
         puVar5 = (ulong*)( (long)puVar5 + 1 );
      }
 while ( pbVar3 != &DAT_0012ce10 );
   }

   local_58._0_4_ = 9;
   pack_bc6h_block(param_1, (bc6h_logical_block*)local_58);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* basist::bc6h_enc_block_1subset_3bit_weights(basist::bc6h_block*, unsigned short const (*) [2],
   unsigned char const*) */void basist::bc6h_enc_block_1subset_3bit_weights(bc6h_block *param_1, unsigned_short *param_2, uchar *param_3) {
   long lVar1;
   undefined8 uVar2;
   uint uVar3;
   undefined4 uVar4;
   ulong uVar5;
   ulong uVar6;
   byte bVar7;
   uint uVar8;
   int iVar9;
   byte *pbVar10;
   byte bVar11;
   uint uVar12;
   ulong *puVar13;
   byte bVar14;
   int iVar15;
   int *piVar16;
   ulong uVar17;
   long lVar18;
   int iVar19;
   bc6h_logical_block *pbVar20;
   uint *puVar21;
   char cVar22;
   long in_FS_OFFSET;
   int iVar23;
   int iVar24;
   undefined1 auVar25[16];
   uint local_d0[6];
   undefined1 local_b8[8];
   undefined8 uStack_b0;
   ulong local_a8;
   ulong local_a0;
   ulong local_98;
   ulong local_90;
   undefined1 local_88[16];
   undefined1 auStack_78[16];
   undefined1 local_68[16];
   undefined8 local_58;
   ulong local_50;
   ulong local_48;
   long local_40;
   bVar11 = 5;
   puVar21 = &bc6h_enc_block_2subset_3bit_weights(basist::bc6h_block * unsigned_int, unsigned_short_const * unsigned_char_const * ::s_mode_order);
   cVar22 = '\v';
   uVar5 = *(ulong*)param_3;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = *(ulong*)( param_3 + 8 );
   local_58 = 0;
   bVar14 = 4;
   auVar25._0_4_ = -(uint)((int)__LC110 < 0);
   auVar25._4_4_ = -(uint)(_UNK_00181354 < 0);
   auVar25._8_4_ = -(uint)((int)_UNK_00181358 < 0);
   auVar25._12_4_ = -(uint)(_UNK_0018135c < 0);
   local_88 = (undefined1[16])0x0;
   bVar7 = 4;
   auStack_78 = (undefined1[16])0x0;
   local_68 = (undefined1[16])0x0;
   do {
      uVar3 = *puVar21;
      local_d0[0] = (uint)bVar11;
      local_d0[1] = (uint)bVar7;
      local_d0[2] = (uint)bVar14;
      local_d0[3] = ( 1 << ( bVar11 & 0x1f ) ) + -1;
      lVar18 = 0;
      local_d0[4] = ( 1 << ( bVar7 & 0x1f ) ) + -1;
      local_d0[5] = ( 1 << ( bVar14 & 0x1f ) ) + -1;
      iVar19 = 0x1f << ( 0x10U - cVar22 & 0x1f );
      do {
         uVar8 = ( uint ) * (ushort*)( param_2 + lVar18 ) * 0x40 + 0x1e;
         uVar12 = ( uint ) * (ushort*)( param_2 + lVar18 + 2 ) * 0x40 + 0x1e;
         if (cVar22 == '\x10') {
            iVar15 = (int)( (int)( (ulong)uVar8 * (ulong)__LC110 + ( (ulong)auVar25._0_4_ * (ulong)uVar8 << 0x20 ) >> 0x20 ) + uVar8 ) >> 4;
            iVar9 = (int)( (int)( (ulong)uVar12 * (ulong)__LC110 + ( (ulong)auVar25._0_4_ * (ulong)uVar12 << 0x20 ) >> 0x20 ) + uVar12 ) >> 4;
            iVar23 = (int)( (int)( (ulong)uVar8 * (ulong)_UNK_00181358 + ( ( auVar25._8_8_ & 0xffffffff ) * (ulong)uVar8 << 0x20 ) >> 0x20 ) + uVar8 ) >> 4;
            iVar24 = (int)( (int)( (ulong)uVar12 * (ulong)_UNK_00181358 + ( ( auVar25._8_8_ & 0xffffffff ) * (ulong)uVar12 << 0x20 ) >> 0x20 ) + uVar12 ) >> 4;
         }
 else {
            iVar15 = (int)uVar8 / iVar19;
            iVar9 = (int)uVar12 / iVar19;
            iVar23 = iVar15;
            iVar24 = iVar9;
         }

         lVar1 = lVar18 * 4;
         *(int*)( (long)local_b8 + lVar18 * 4 ) = iVar15;
         *(int*)( local_b8 + lVar1 + 4 ) = iVar9;
         *(int*)( (long)&uStack_b0 + lVar1 ) = iVar23;
         *(int*)( (long)&uStack_b0 + lVar1 + 4 ) = iVar24;
         lVar18 = lVar18 + 4;
      }
 while ( lVar18 != 0xc );
      local_50 = uVar5;
      local_48 = uVar6;
      if (( uVar5 & 4 ) != 0) {
         pbVar10 = &g_bc6h_2subset_patterns;
         local_b8 = ( undefined1[8] )((long)local_b8 << 0x20 | (ulong)local_b8 >> 0x20);
         puVar13 = &local_50;
         local_a8 = local_a8 << 0x20 | local_a8 >> 0x20;
         local_98 = local_98 << 0x20 | local_98 >> 0x20;
         do {
            if (( *pbVar10 & 0x7f ) == 0) {
               *(char*)puVar13 = '\a' - (char)*puVar13;
            }

            pbVar10 = pbVar10 + 1;
            puVar13 = (ulong*)( (long)puVar13 + 1 );
         }
 while ( pbVar10 != &DAT_0012ce10 );
      }

      if (( local_48 & 0x400000000000000 ) != 0) {
         pbVar10 = &g_bc6h_2subset_patterns;
         uStack_b0 = uStack_b0 << 0x20 | uStack_b0 >> 0x20;
         puVar13 = &local_50;
         local_a0 = local_a0 << 0x20 | local_a0 >> 0x20;
         local_90 = local_90 << 0x20 | local_90 >> 0x20;
         do {
            if (( *pbVar10 & 0x7f ) == 1) {
               *(char*)puVar13 = '\a' - (char)*puVar13;
            }

            pbVar10 = pbVar10 + 1;
            puVar13 = (ulong*)( (long)puVar13 + 1 );
         }
 while ( pbVar10 != &DAT_0012ce10 );
      }

      lVar18 = 0;
      piVar16 = (int*)local_b8;
      pbVar20 = (bc6h_logical_block*)local_88;
      while (true) {
         uVar2 = *(undefined8*)( piVar16 + 1 );
         iVar23 = piVar16[3];
         iVar9 = 1 << ( (char)*(undefined4*)( (long)local_d0 + lVar18 ) - 1U & 0x1f );
         iVar24 = *piVar16;
         iVar19 = iVar9 + -1;
         iVar9 = -iVar9;
         *(int*)( pbVar20 + 8 ) = iVar24;
         uVar8 = iVar23 - iVar24;
         iVar23 = (int)uVar2 - iVar24;
         iVar24 = (int)( (ulong)uVar2 >> 0x20 ) - iVar24;
         if (( ( ( iVar23 < iVar9 ) || ( iVar19 < iVar23 ) ) || ( iVar24 < iVar9 ) ) || ( ( ( iVar19 < iVar24 || ( (int)uVar8 < iVar9 ) ) || ( iVar19 < (int)uVar8 ) ) )) break;
         uVar4 = *(undefined4*)( (long)local_d0 + lVar18 + 0xc );
         lVar1 = lVar18 + 0xc;
         lVar18 = lVar18 + 4;
         piVar16 = piVar16 + 4;
         *(uint*)( pbVar20 + 0x14 ) = *(uint*)( (long)local_d0 + lVar1 ) & uVar8;
         *(ulong*)( pbVar20 + 0xc ) = CONCAT44(iVar24, iVar23) & CONCAT44(uVar4, uVar4);
         pbVar20 = pbVar20 + 0x10;
         if (lVar18 == 0xc) {
            local_88._0_4_ = uVar3;
            pack_bc6h_block(param_1, (bc6h_logical_block*)local_88);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            goto LAB_0011f32f;
         }

      }
;
      puVar21 = puVar21 + 1;
      if (puVar21 == (uint*)&DAT_0012cdc4) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            bc6h_enc_block_1subset_mode9_3bit_weights(param_1, param_2, param_3);
            return;
         }

         LAB_0011f32f:/* WARNING: Subroutine does not return */__stack_chk_fail();
      }

      uVar17 = ( ulong ) * puVar21;
      cVar22 = g_bc6h_mode_sig_bits[uVar17 * 4];
      bVar11 = g_bc6h_mode_sig_bits[uVar17 * 4 + 1];
      bVar7 = g_bc6h_mode_sig_bits[uVar17 * 4 + 2];
      bVar14 = g_bc6h_mode_sig_bits[uVar17 * 4 + 3];
   }
 while ( true );
}
/* basist::bc6h_enc_block_2subset_mode9_3bit_weights(basist::bc6h_block*, unsigned int, unsigned
   short const (*) [3][2], unsigned char const*) */void basist::bc6h_enc_block_2subset_mode9_3bit_weights(bc6h_block *param_1, uint param_2, unsigned_short *param_3, uchar *param_4) {
   undefined1 auVar1[16];
   byte bVar2;
   long *plVar3;
   long lVar4;
   byte *pbVar5;
   bc6h_logical_block *pbVar6;
   bc6h_logical_block *pbVar7;
   byte *pbVar8;
   long in_FS_OFFSET;
   undefined1 auVar9[16];
   char local_5a[2];
   undefined1 local_58[16];
   undefined8 local_48;
   ulong uStack_40;
   ulong local_38;
   ulong uStack_30;
   ulong local_28;
   long local_20;
   undefined8 uStack_18;
   long local_10[2];
   local_10[0] = *(long*)( in_FS_OFFSET + 0x28 );
   lVar4 = 0;
   local_58 = (undefined1[16])0x0;
   local_28 = 0;
   local_48 = 0;
   uStack_40 = 0;
   local_38 = 0;
   uStack_30 = 0;
   do {
      *(int*)( local_58 + lVar4 * 4 + 8 ) = (int)( ( ulong )(*(ushort*)( param_3 + lVar4 ) >> 4) * 0x84210a5 >> 0x20 );
      *(int*)( local_58 + lVar4 * 4 + 0xc ) = (int)( ( ulong )(*(ushort*)( param_3 + lVar4 + 2 ) >> 4) * 0x84210a5 >> 0x20 );
      lVar4 = lVar4 + 4;
   }
 while ( lVar4 != 0xc );
   lVar4 = 0;
   do {
      *(int*)( (long)&local_48 + lVar4 * 4 ) = (int)( ( ulong )(*(ushort*)( param_3 + lVar4 + 0xc ) >> 4) * 0x84210a5 >> 0x20 );
      *(int*)( (long)&local_48 + lVar4 * 4 + 4 ) = (int)( ( ulong )(*(ushort*)( param_3 + lVar4 + 0xe ) >> 4) * 0x84210a5 >> 0x20 );
      lVar4 = lVar4 + 4;
   }
 while ( lVar4 != 0xc );
   local_20 = *(long*)param_4;
   uStack_18 = *(undefined8*)( param_4 + 8 );
   bVar2 = g_astc_bc7_common_partitions2[(ulong)param_2 * 6];
   if (g_astc_bc7_common_partitions2[(ulong)param_2 * 6 + 4] != '\0') {
      pbVar6 = (bc6h_logical_block*)local_58;
      do {
         auVar1 = *(undefined1(*) [16])( pbVar6 + 8 );
         pbVar7 = pbVar6 + 0x10;
         auVar9._0_8_ = auVar1._8_8_;
         auVar9._8_4_ = auVar1._0_4_;
         auVar9._12_4_ = auVar1._4_4_;
         *(undefined1(*) [16])( pbVar6 + 8 ) = auVar9;
         pbVar6 = pbVar7;
      }
 while ( (bc6h_logical_block*)&local_28 != pbVar7 );
   }

   pbVar8 = &g_bc6h_2subset_patterns + (ulong)bVar2 * 0x10;
   local_5a[0] = '\0';
   local_5a[1] = '\0';
   lVar4 = 0;
   do {
      if (( (char)pbVar8[lVar4] < '\0' ) && ( ( *(byte*)( (long)&local_20 + lVar4 ) & 4 ) != 0 )) {
         local_58[( ulong )(pbVar8[lVar4] & 1) - 2] = 1;
      }

      lVar4 = lVar4 + 1;
   }
 while ( lVar4 != 0x10 );
   if (local_5a[0] != '\0') {
      local_58._8_8_ = local_58._8_8_ << 0x20 | (ulong)local_58._8_8_ >> 0x20;
      plVar3 = &local_20;
      uStack_40 = uStack_40 << 0x20 | uStack_40 >> 0x20;
      uStack_30 = uStack_30 << 0x20 | uStack_30 >> 0x20;
      pbVar5 = pbVar8;
      do {
         if (( *pbVar5 & 0x7f ) == 0) {
            *(char*)plVar3 = '\a' - (char)*plVar3;
         }

         plVar3 = (long*)( (long)plVar3 + 1 );
         pbVar5 = pbVar5 + 1;
      }
 while ( local_10 != plVar3 );
   }

   if (local_5a[1] != '\0') {
      local_48 = local_48 << 0x20 | local_48 >> 0x20;
      plVar3 = &local_20;
      local_38 = local_38 << 0x20 | local_38 >> 0x20;
      local_28 = local_28 << 0x20 | local_28 >> 0x20;
      do {
         if (( *pbVar8 & 0x7f ) == 1) {
            *(char*)plVar3 = '\a' - (char)*plVar3;
         }

         plVar3 = (long*)( (long)plVar3 + 1 );
         pbVar8 = pbVar8 + 1;
      }
 while ( plVar3 != local_10 );
   }

   local_58[4] = bVar2;
   local_58._0_4_ = 9;
   local_58._5_3_ = 0;
   pack_bc6h_block(param_1, (bc6h_logical_block*)local_58);
   if (local_10[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* basist::bc6h_enc_block_2subset_3bit_weights(basist::bc6h_block*, unsigned int, unsigned short
   const (*) [3][2], unsigned char const*) */void basist::bc6h_enc_block_2subset_3bit_weights(bc6h_block *param_1, uint param_2, unsigned_short *param_3, uchar *param_4) {
   byte *pbVar1;
   undefined8 uVar2;
   undefined4 uVar3;
   byte bVar4;
   char cVar5;
   uint uVar6;
   undefined4 uVar7;
   long lVar8;
   undefined8 uVar9;
   long lVar10;
   byte bVar11;
   uint uVar12;
   int iVar13;
   int iVar14;
   byte bVar15;
   uint uVar16;
   byte *pbVar17;
   byte bVar18;
   long *plVar19;
   ulong uVar20;
   int iVar21;
   bc6h_logical_block *pbVar22;
   long lVar23;
   unsigned_short *puVar24;
   char cVar25;
   bc6h_logical_block *pbVar26;
   long in_FS_OFFSET;
   int iVar27;
   int iVar28;
   uint *local_110;
   char local_d2[2];
   uint local_d0[6];
   undefined1 local_b8[8];
   undefined8 uStack_b0;
   ulong local_a8;
   ulong local_a0;
   ulong local_98;
   ulong local_90;
   undefined1 local_88[16];
   undefined1 auStack_78[16];
   undefined1 local_68[16];
   undefined8 local_58;
   long local_50;
   undefined8 uStack_48;
   long local_40[2];
   cVar25 = '\v';
   lVar8 = *(long*)param_4;
   uVar9 = *(undefined8*)( param_4 + 8 );
   bVar15 = 5;
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   bVar4 = g_astc_bc7_common_partitions2[(ulong)param_2 * 6];
   cVar5 = g_astc_bc7_common_partitions2[(ulong)param_2 * 6 + 4];
   local_58 = 0;
   pbVar1 = &g_bc6h_2subset_patterns + (ulong)bVar4 * 0x10;
   local_88 = (undefined1[16])0x0;
   bVar18 = 4;
   local_110 = &bc6h_enc_block_2subset_3bit_weights(basist::bc6h_block * unsigned_int, unsigned_short_const * unsigned_char_const * ::s_mode_order);
   bVar11 = 4;
   auStack_78 = (undefined1[16])0x0;
   local_68 = (undefined1[16])0x0;
   do {
      uVar6 = *local_110;
      local_d0[0] = (uint)bVar15;
      local_d0[1] = (uint)bVar11;
      local_d0[2] = (uint)bVar18;
      local_d0[3] = ( 1 << ( bVar15 & 0x1f ) ) + -1;
      local_d0[4] = ( 1 << ( bVar11 & 0x1f ) ) + -1;
      local_d0[5] = ( 1 << ( bVar18 & 0x1f ) ) + -1;
      iVar21 = 0x1f << ( 0x10U - cVar25 & 0x1f );
      pbVar22 = (bc6h_logical_block*)local_b8;
      puVar24 = param_3 + 2;
      do {
         uVar12 = ( uint ) * (ushort*)( puVar24 + -2 ) * 0x40 + 0x1e;
         uVar16 = ( uint ) * (ushort*)puVar24 * 0x40 + 0x1e;
         if (cVar25 == '\x10') {
            uVar12 = uVar12 / 0x1f;
            uVar16 = uVar16 / 0x1f;
         }
 else {
            uVar12 = (int)uVar12 / iVar21;
            uVar16 = (int)uVar16 / iVar21;
         }

         *(uint*)pbVar22 = uVar12;
         *(uint*)( pbVar22 + 4 ) = uVar16;
         pbVar22 = pbVar22 + 0x10;
         puVar24 = puVar24 + 4;
      }
 while ( pbVar22 != (bc6h_logical_block*)local_88 );
      lVar23 = 0;
      do {
         uVar16 = ( uint ) * (ushort*)( param_3 + lVar23 + 0xc ) * 0x40 + 0x1e;
         uVar12 = ( uint ) * (ushort*)( param_3 + lVar23 + 0xe ) * 0x40 + 0x1e;
         if (cVar25 == '\x10') {
            uVar16 = uVar16 / 0x1f;
            uVar12 = uVar12 / 0x1f;
         }
 else {
            uVar16 = (int)uVar16 / iVar21;
            uVar12 = (int)uVar12 / iVar21;
         }

         *(uint*)( (long)&uStack_b0 + lVar23 * 4 ) = uVar16;
         *(uint*)( (long)&uStack_b0 + lVar23 * 4 + 4 ) = uVar12;
         lVar23 = lVar23 + 4;
      }
 while ( lVar23 != 0xc );
      local_50 = lVar8;
      uStack_48 = uVar9;
      pbVar22 = (bc6h_logical_block*)local_b8;
      if (cVar5 != '\0') {
         do {
            uVar7 = *(undefined4*)pbVar22;
            uVar3 = *(undefined4*)( pbVar22 + 4 );
            pbVar26 = pbVar22 + 0x10;
            *(undefined4*)pbVar22 = *(undefined4*)( pbVar22 + 8 );
            *(undefined4*)( pbVar22 + 4 ) = uVar3;
            *(undefined4*)( pbVar22 + 8 ) = uVar7;
            *(undefined4*)( pbVar22 + 0xc ) = uVar3;
            pbVar22 = pbVar26;
         }
 while ( pbVar26 != (bc6h_logical_block*)local_88 );
      }

      local_d2[0] = '\0';
      local_d2[1] = '\0';
      lVar23 = 0;
      do {
         if (( (char)pbVar1[lVar23] < '\0' ) && ( ( *(byte*)( (long)&local_50 + lVar23 ) & 4 ) != 0 )) {
            *(undefined1*)( (long)local_d0 + ( ( ulong )(pbVar1[lVar23] & 1) - 2 ) ) = 1;
         }

         lVar23 = lVar23 + 1;
      }
 while ( lVar23 != 0x10 );
      if (local_d2[0] != '\0') {
         local_b8 = ( undefined1[8] )((long)local_b8 << 0x20 | (ulong)local_b8 >> 0x20);
         local_a8 = local_a8 << 0x20 | local_a8 >> 0x20;
         plVar19 = &local_50;
         local_98 = local_98 << 0x20 | local_98 >> 0x20;
         pbVar17 = pbVar1;
         do {
            if (( *pbVar17 & 0x7f ) == 0) {
               *(char*)plVar19 = '\a' - (char)*plVar19;
            }

            plVar19 = (long*)( (long)plVar19 + 1 );
            pbVar17 = pbVar17 + 1;
         }
 while ( local_40 != plVar19 );
      }

      if (local_d2[1] != '\0') {
         uStack_b0 = uStack_b0 << 0x20 | uStack_b0 >> 0x20;
         local_a0 = local_a0 << 0x20 | local_a0 >> 0x20;
         plVar19 = &local_50;
         local_90 = local_90 << 0x20 | local_90 >> 0x20;
         pbVar17 = pbVar1;
         do {
            if (( *pbVar17 & 0x7f ) == 1) {
               *(char*)plVar19 = '\a' - (char)*plVar19;
            }

            plVar19 = (long*)( (long)plVar19 + 1 );
            pbVar17 = pbVar17 + 1;
         }
 while ( plVar19 != local_40 );
      }

      lVar23 = 0;
      pbVar22 = (bc6h_logical_block*)local_88;
      pbVar26 = (bc6h_logical_block*)local_b8;
      while (true) {
         uVar2 = *(undefined8*)( pbVar26 + 4 );
         iVar27 = *(int*)( pbVar26 + 0xc );
         iVar13 = 1 << ( (char)*(undefined4*)( (long)local_d0 + lVar23 ) - 1U & 0x1f );
         iVar28 = *(int*)pbVar26;
         iVar21 = iVar13 + -1;
         iVar14 = -iVar13;
         *(int*)( pbVar22 + 8 ) = iVar28;
         uVar16 = iVar27 - iVar28;
         iVar27 = (int)uVar2 - iVar28;
         iVar28 = (int)( (ulong)uVar2 >> 0x20 ) - iVar28;
         if (( ( ( iVar27 < iVar14 ) || ( iVar21 < iVar27 ) ) || ( SBORROW4(iVar28, iVar14) != iVar28 + iVar13 < 0 ) ) || ( ( ( iVar21 < iVar28 || ( (int)uVar16 < iVar14 ) ) || ( iVar21 < (int)uVar16 ) ) )) break;
         uVar7 = *(undefined4*)( (long)local_d0 + lVar23 + 0xc );
         lVar10 = lVar23 + 0xc;
         lVar23 = lVar23 + 4;
         pbVar26 = pbVar26 + 0x10;
         *(uint*)( pbVar22 + 0x14 ) = *(uint*)( (long)local_d0 + lVar10 ) & uVar16;
         *(ulong*)( pbVar22 + 0xc ) = CONCAT44(iVar28, iVar27) & CONCAT44(uVar7, uVar7);
         pbVar22 = pbVar22 + 0x10;
         if (lVar23 == 0xc) {
            local_88[4] = bVar4;
            local_88._0_4_ = uVar6;
            local_88._5_3_ = 0;
            pack_bc6h_block(param_1, (bc6h_logical_block*)local_88);
            if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            goto LAB_0011fa56;
         }

      }
;
      local_110 = local_110 + 1;
      if (local_110 == (uint*)&DAT_0012cdc4) {
         if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
            bc6h_enc_block_2subset_mode9_3bit_weights(param_1, param_2, param_3, param_4);
            return;
         }

         LAB_0011fa56:/* WARNING: Subroutine does not return */__stack_chk_fail();
      }

      uVar20 = ( ulong ) * local_110;
      cVar25 = g_bc6h_mode_sig_bits[uVar20 * 4];
      bVar15 = g_bc6h_mode_sig_bits[uVar20 * 4 + 1];
      bVar11 = g_bc6h_mode_sig_bits[uVar20 * 4 + 2];
      bVar18 = g_bc6h_mode_sig_bits[uVar20 * 4 + 3];
   }
 while ( true );
}
/* basist::bc6h_enc_block_solid_color(basist::bc6h_block*, unsigned short const*) */bool basist::bc6h_enc_block_solid_color(bc6h_block *param_1, ushort *param_2) {
   ushort uVar1;
   ushort uVar2;
   long in_FS_OFFSET;
   bool bVar3;
   undefined1 auVar4[16];
   undefined8 local_38;
   undefined4 local_30;
   undefined1 local_28[16];
   long local_10;
   uVar1 = *param_2;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = param_2[1];
   bVar3 = -1 < (short)( uVar1 | uVar2 | param_2[2] );
   if (bVar3) {
      local_28 = (undefined1[16])0x0;
      auVar4 = pshuflw((undefined1[16])0x0, ZEXT216(param_2[2]), 0);
      local_30 = auVar4._0_4_;
      local_38 = CONCAT62(CONCAT42(CONCAT22(uVar2, uVar2), uVar1), uVar1);
      bc6h_enc_block_1subset_4bit_weights(param_1, (unsigned_short*)&local_38, local_28);
   }

   if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return bVar3;
}
/* basist::astc_hdr_core_init() */void basist::astc_hdr_core_init(void) {
   ushort uVar1;
   int iVar2;
   long lVar3;
   ushort *puVar4;
   undefined8 *puVar5;
   if (g_astc_hdr_core_initialized != '\0') {
      return;
   }

   puVar4 = (ushort*)( g_astc_bc7_common_partitions2 + 2 );
   puVar5 = &g_astc_partition_id_to_common_bc7_pat_index;
   for (lVar3 = 0x80; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = 0xffffffffffffffff;
      puVar5 = puVar5 + 1;
   }

   iVar2 = 0;
   do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 3;
      *(char*)( (long)&g_astc_partition_id_to_common_bc7_pat_index + (ulong)uVar1 ) = (char)iVar2;
      iVar2 = iVar2 + 1;
   }
 while ( iVar2 != 0x1b );
   g_astc_hdr_core_initialized = 1;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* basist::decode_mode7_to_qlog12_ise20(unsigned char const*, int (*) [3], int*) */void basist::decode_mode7_to_qlog12_ise20(uchar *param_1, int *param_2, int *param_3) {
   byte bVar1;
   byte bVar2;
   uint uVar3;
   byte bVar4;
   uint uVar5;
   uint uVar6;
   uint uVar7;
   uint uVar8;
   uint uVar9;
   uint uVar10;
   int iVar11;
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
   uint local_3c;
   uVar22 = _UNK_001811fc;
   uVar21 = _UNK_001811f8;
   uVar20 = _UNK_001811f4;
   uVar18 = __LC22;
   bVar4 = param_1[1];
   bVar1 = param_1[2];
   bVar2 = param_1[3];
   uVar7 = (int)(uint)bVar4 >> 5;
   uVar5 = (int)(uint)bVar1 >> 4 & 8U | uVar7 & 4;
   local_3c = (int)( uint ) * param_1 >> 6;
   uVar13 = local_3c | uVar5;
   if (uVar5 == 0xc) {
      if (uVar13 == 0xf) {
         local_3c = 0;
         uVar17 = 0x20;
         uVar5 = 0x20;
         uVar16 = 0x20;
         iVar11 = 0x20;
         uVar19 = 5;
      }
 else {
         uVar17 = 0x10;
         uVar5 = 0;
         uVar16 = 0x10;
         iVar11 = 0x10;
         uVar19 = 4;
      }

   }
 else {
      iVar11 = 0;
      uVar5 = 1 << (sbyte)local_3c;
      uVar16 = uVar5 & 0x3d;
      uVar17 = uVar5 & 0x3a;
      uVar19 = local_3c;
      local_3c = (int)uVar13 >> 2;
   }

   uVar7 = uVar7 & 1;
   uVar13 = *param_1 & 0x3f;
   uVar6 = bVar4 & 0x1f;
   uVar12 = bVar1 & 0x1f;
   uVar10 = bVar2 & 0x1f;
   uVar8 = (int)(uint)bVar1 >> 6 & 1;
   uVar14 = (int)(uint)bVar4 >> 6 & 1;
   uVar3 = (int)(uint)bVar1 >> 5 & 1;
   uVar15 = (int)(uint)bVar2 >> 6 & 1;
   uVar9 = (int)(uint)bVar2 >> 5 & 1;
   if (iVar11 != 0) {
      uVar6 = uVar6 | uVar14 << 6;
      uVar12 = uVar12 | uVar8 << 6;
   }

   if (uVar17 != 0) {
      uVar6 = uVar6 | uVar7 << 5;
      uVar12 = uVar12 | uVar3 << 5;
   }

   if (uVar16 != 0) {
      uVar10 = uVar10 | uVar9 << 5;
      if (( uVar5 & 0x2d ) != 0) {
         uVar10 = uVar15 << 6 | uVar10;
      }

   }

   if (uVar19 == 2) {
      uVar10 = uVar10 | bVar2 & 0xffffff80;
      uVar13 = uVar3 << 6 | uVar8 << 7 | uVar13;
      LAB_0011fdee:uVar13 = uVar7 << 8 | uVar13;
      if (( uVar5 & 10 ) != 0) {
         uVar13 = uVar14 << 8 | uVar13;
      }

      uVar13 = uVar14 << 9 | uVar13;
      if (uVar19 == 1) {
         LAB_0011fce6:uVar6 = uVar6 * 2;
         uVar12 = uVar12 * 2;
         iVar11 = uVar10 * 2;
         uVar13 = ( uVar9 << 9 | uVar15 << 10 | uVar13 ) * 2;
      }
 else {
         LAB_0011fe1d:bVar4 = ( byte ) * (undefined4*)( decode_mode7_to_qlog12_ise20(unsigned_char_const*,int*[],int*):: );
         uVar6 = uVar6 << ( bVar4 & 0x1f );
         uVar12 = uVar12 << ( bVar4 & 0x1f );
         iVar11 = uVar10 << ( bVar4 & 0x1f );
         if (uVar19 == 0) {
            uVar13 = ( uVar3 << 10 | uVar13 ) * 2;
         }
 else {
            uVar13 = uVar13 << ( bVar4 & 0x1f );
            if (uVar19 == 5) goto LAB_0011fd23;
         }

      }

   }
 else {
      uVar13 = ( (int)(uint)bVar2 >> 7 ) << 6 | uVar13;
      if (uVar19 != 4) {
         if (( uVar5 & 0xf ) != 0) {
            uVar13 = uVar13 | uVar8 << 7;
            if (( uVar5 & 5 ) != 0) goto LAB_0011fdee;
            if (( uVar5 & 10 ) != 0) {
               uVar13 = uVar13 | uVar14 << 8;
            }

         }

         if (uVar19 != 1) goto LAB_0011fe1d;
         goto LAB_0011fce6;
      }

      uVar6 = uVar6 << 4;
      uVar12 = uVar12 << 4;
      iVar11 = uVar10 << 4;
      uVar13 = ( uVar15 << 7 | uVar13 ) << 4;
   }

   uVar6 = uVar13 - uVar6;
   uVar12 = uVar13 - uVar12;
   LAB_0011fd23:uVar5 = uVar13;
   uVar7 = uVar12;
   if (( local_3c != 1 ) && ( uVar5 = uVar6 ),uVar6 = uVar12,uVar7 = uVar13,local_3c != 2) {
      uVar6 = uVar13;
      uVar7 = uVar12;
   }

   uVar13 = 0xfff;
   if ((int)uVar5 < 0x1000) {
      uVar13 = uVar5;
   }

   if ((int)uVar13 < 0) {
      uVar13 = 0;
   }

   param_2[4] = uVar13;
   uVar13 = 0xfff;
   if ((int)uVar7 < 0x1000) {
      uVar13 = uVar7;
   }

   if ((int)uVar13 < 0) {
      uVar13 = 0;
   }

   param_2[5] = uVar13;
   uVar13 = -(uint)((int)uVar18 < (int)(uVar6 - iVar11));
   uVar19 = -(uint)((int)uVar20 < (int)(uVar5 - iVar11));
   uVar16 = -(uint)((int)uVar21 < (int)(uVar7 - iVar11));
   uVar17 = -(uint)((int)uVar22 < (int)uVar6);
   uVar18 = ~uVar13 & uVar6 - iVar11 | uVar18 & uVar13;
   uVar20 = ~uVar19 & uVar5 - iVar11 | uVar20 & uVar19;
   uVar21 = ~uVar16 & uVar7 - iVar11 | uVar21 & uVar16;
   uVar22 = ~uVar17 & uVar6 | uVar22 & uVar17;
   *param_2 = uVar18 & -(uint)(0 < (int)uVar18);
   param_2[1] = uVar20 & -(uint)(0 < (int)uVar20);
   param_2[2] = uVar21 & -(uint)(0 < (int)uVar21);
   param_2[3] = uVar22 & -(uint)(0 < (int)uVar22);
   if (param_3 != (int*)0x0) {
      *param_3 = iVar11;
   }

   return;
}
/* basist::decode_mode7_to_qlog12(unsigned char const*, int (*) [3], int*, unsigned int) */bool basist::decode_mode7_to_qlog12(uchar *param_1, int *param_2, int *param_3, uint param_4) {
   byte *pbVar1;
   byte *pbVar2;
   byte *pbVar3;
   byte bVar4;
   long lVar5;
   bool bVar6;
   long in_FS_OFFSET;
   undefined4 local_14;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_4 != 0x14) {
      pbVar1 = param_1 + 2;
      bVar4 = *param_1;
      pbVar2 = param_1 + 1;
      lVar5 = *(long*)( astc_helpers::g_dequant_tables + ( ulong )(param_4 - 4) * 0x40 + 0x310 );
      pbVar3 = param_1 + 3;
      param_1 = (uchar*)&local_14;
      local_14 = CONCAT31(CONCAT21(CONCAT11(*(undefined1*)( ( ulong ) * pbVar3 + lVar5 ), *(undefined1*)( ( ulong ) * pbVar1 + lVar5 )), *(undefined1*)( ( ulong ) * pbVar2 + lVar5 )), *(undefined1*)( (ulong)bVar4 + lVar5 ));
   }

   decode_mode7_to_qlog12_ise20(param_1, param_2, param_3);
   if (( ( ( *param_2 < 0xf80 ) && ( param_2[1] < 0xf80 ) ) && ( param_2[2] < 0xf80 ) ) && ( ( param_2[3] < 0xf80 && ( param_2[4] < 0xf80 ) ) )) {
      bVar6 = param_2[5] < 0xf80;
   }
 else {
      bVar6 = false;
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* basist::decode_mode11_to_qlog12_ise20(unsigned char const*, int (*) [3]) */void basist::decode_mode11_to_qlog12_ise20(uchar *param_1, int *param_2) {
   int *piVar1;
   byte bVar2;
   byte bVar3;
   byte bVar4;
   byte bVar5;
   uint uVar6;
   int iVar7;
   byte bVar8;
   uint uVar9;
   uint uVar10;
   int iVar11;
   uint uVar12;
   uint uVar13;
   uint uVar14;
   uint uVar15;
   int iVar16;
   uint uVar17;
   int iVar18;
   uint uVar19;
   uint uVar20;
   uint uVar21;
   int iVar22;
   uint uVar23;
   uint local_44;
   bVar8 = param_1[5];
   bVar2 = param_1[4];
   uVar14 = ( uint )(bVar8 >> 7) * 2 | ( uint )(bVar2 >> 7);
   if (uVar14 == 3) {
      *param_2 = ( uint ) * param_1 << 4;
      param_2[3] = (uint)param_1[1] << 4;
      param_2[1] = (uint)param_1[2] << 4;
      param_2[4] = (uint)param_1[3] << 4;
      param_2[2] = ( param_1[4] & 0x7f ) << 5;
      param_2[5] = ( param_1[5] & 0x7f ) << 5;
      return;
   }

   bVar3 = param_1[2];
   bVar4 = param_1[3];
   bVar5 = param_1[1];
   uVar12 = bVar2 & 0x7f;
   uVar20 = bVar8 & 0x7f;
   uVar19 = bVar3 & 0x3f;
   uVar15 = bVar5 & 0x3f;
   uVar10 = (uint)bVar5 * 4 & 0x100 | ( uint ) * param_1;
   uVar6 = ( uint )(bVar4 >> 7) << 2 | ( uint )(bVar3 >> 7) * 2 | ( uint )(bVar5 >> 7);
   local_44 = bVar4 & 0x3f;
   uVar9 = (int)(char)*(byte*)( (long)&decode_mode11_to_qlog12_ise20(unsigned_char_const * *[])::dbitstab + (long)(int)uVar6) - 1 );
   iVar22 = 1 << ( *(byte*)( (long)&decode_mode11_to_qlog12_ise20(unsigned_char_const * *[])::dbitstab + (long)(int)uVar6) & 0x1f ) );
   if (( uVar12 >> ( uVar9 & 0x1f ) & 1 ) == 0) {
      uVar12 = uVar12 & iVar22 - 1U;
      if (( uVar20 >> ( uVar9 & 0x1f ) & 1 ) != 0) goto LAB_001200a1;
      LAB_00120248:uVar20 = uVar20 & iVar22 - 1U;
   }
 else {
      uVar12 = uVar12 | -iVar22;
      if (( uVar20 >> ( uVar9 & 0x1f ) & 1 ) == 0) goto LAB_00120248;
      LAB_001200a1:uVar20 = uVar20 | -iVar22;
   }

   uVar9 = bVar8 >> 6 & 1;
   uVar13 = 1 << (sbyte)uVar6;
   uVar23 = bVar3 >> 6 & 1;
   uVar17 = bVar4 >> 6 & 1;
   uVar21 = bVar2 >> 6 & 1;
   if (( uVar13 & 0xa4 ) == 0) {
      if (uVar6 == 3) {
         uVar10 = uVar10 | uVar21 << 9;
         uVar15 = uVar15 | uVar9 << 6;
      }
 else {
         if (( ( uVar13 & 0x50 ) != 0 ) && ( uVar10 = uVar10 | ( bVar8 >> 5 & 1 ) << 10 | ( bVar2 >> 5 & 1 ) << 9(uVar13 & 0xc0) != 0 )) goto LAB_00120302;
         LAB_00120129:if (uVar6 == 2) goto LAB_00120132;
         if (( uVar13 & 0xe8 ) != 0) goto LAB_00120313;
         LAB_00120320:if (uVar6 == 5) {
            uVar15 = uVar15 | uVar21 << 7;
            goto LAB_00120139;
         }

      }

      if (( uVar13 & 0x5b ) != 0) {
         local_44 = local_44 | uVar17 << 6;
         uVar19 = uVar19 | uVar23 << 6;
         if (( uVar13 & 0x12 ) != 0) {
            uVar19 = uVar19 | uVar21 << 7;
            local_44 = local_44 | uVar9 << 7;
         }

      }

   }
 else {
      uVar10 = uVar10 | uVar23 << 9;
      if (uVar6 == 3) {
         local_44 = local_44 | uVar17 << 6;
         uVar10 = uVar10 | uVar21 << 9;
         uVar15 = uVar15 | uVar9 << 6;
         uVar19 = uVar19 | uVar23 << 6;
         goto LAB_00120139;
      }

      if (( uVar13 & 0x50 ) == 0) {
         if (( uVar13 & 0xa0 ) == 0) goto LAB_00120129;
         LAB_001202f1:uVar10 = uVar10 | uVar17 << 10;
      }
 else {
         uVar10 = uVar10 | ( bVar2 >> 5 & 1 ) << 9 | ( bVar8 >> 5 & 1 ) << 10;
         if (( uVar13 & 0xa0 ) != 0) goto LAB_001202f1;
      }

      if (( uVar13 & 0xc0 ) == 0) goto LAB_00120129;
      LAB_00120302:uVar10 = uVar10 | uVar21 << 0xb;
      if (uVar6 != 2) {
         LAB_00120313:uVar15 = uVar15 | uVar9 << 6;
         goto LAB_00120320;
      }

      LAB_00120132:uVar15 = uVar15 | uVar17 << 6;
   }

   LAB_00120139:bVar8 = ( byte )((int)uVar6 >> 1) ^ 3;
   iVar11 = uVar10 << bVar8;
   iVar16 = uVar15 << bVar8;
   iVar18 = iVar11 - ( uVar19 << bVar8 );
   iVar22 = 0xfff;
   if (iVar18 < 0x1000) {
      iVar22 = iVar18;
   }

   if (iVar22 < 0) {
      iVar22 = 0 << bVar8;
   }

   param_2[4] = iVar22;
   iVar7 = iVar11 - ( local_44 << bVar8 );
   iVar22 = 0xfff;
   if (iVar7 < 0x1000) {
      iVar22 = iVar7;
   }

   if (iVar22 < 0) {
      iVar22 = 0 << bVar8;
   }

   param_2[5] = iVar22;
   iVar22 = iVar11 - iVar16;
   if (0xfff < iVar11 - iVar16) {
      iVar22 = 0xfff;
   }

   if (iVar22 < 0) {
      iVar22 = 0;
   }

   iVar18 = ( iVar18 - iVar16 ) - ( uVar12 << bVar8 );
   if (0xfff < iVar18) {
      iVar18 = 0xfff;
   }

   if (iVar18 < 0) {
      iVar18 = 0;
   }

   iVar16 = ( iVar7 - iVar16 ) - ( uVar20 << bVar8 );
   if (0xfff < iVar16) {
      iVar16 = 0xfff;
   }

   if (iVar16 < 0) {
      iVar16 = 0;
   }

   if (0xfff < iVar11) {
      iVar11 = 0xfff;
   }

   *(ulong*)param_2 = CONCAT44(iVar18, iVar22);
   *(ulong*)( param_2 + 2 ) = CONCAT44(iVar11, iVar16);
   if (uVar14 == 0) {
      return;
   }

   piVar1 = param_2 + uVar14;
   *param_2 = *piVar1;
   *piVar1 = iVar22;
   iVar22 = param_2[3];
   param_2[3] = piVar1[3];
   piVar1[3] = iVar22;
   return;
}
/* basist::decode_mode11_to_qlog12(unsigned char const*, int (*) [3], unsigned int) */bool basist::decode_mode11_to_qlog12(uchar *param_1, int *param_2, uint param_3) {
   long lVar1;
   bool bVar2;
   long lVar3;
   uchar *puVar4;
   long in_FS_OFFSET;
   uchar local_16[6];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar4 = param_1;
   if (param_3 != 0x14) {
      puVar4 = local_16;
      lVar1 = *(long*)( astc_helpers::g_dequant_tables + ( ulong )(param_3 - 4) * 0x40 + 0x310 );
      lVar3 = 0;
      do {
         puVar4[lVar3] = *(uchar*)( lVar1 + (ulong)param_1[lVar3] );
         lVar3 = lVar3 + 1;
      }
 while ( lVar3 != 6 );
   }

   decode_mode11_to_qlog12_ise20(puVar4, param_2);
   if (( ( ( *param_2 < 0xf80 ) && ( param_2[1] < 0xf80 ) ) && ( param_2[2] < 0xf80 ) ) && ( ( param_2[3] < 0xf80 && ( param_2[4] < 0xf80 ) ) )) {
      bVar2 = param_2[5] < 0xf80;
   }
 else {
      bVar2 = false;
   }

   if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return bVar2;
}
/* basist::transcode_bc6h_1subset(unsigned short (*) [2], astc_helpers::log_astc_block const&,
   basist::bc6h_block&) */undefined8 basist::transcode_bc6h_1subset(unsigned_short *param_1, log_astc_block *param_2, bc6h_block *param_3) {
   undefined8 uVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined8 local_28;
   undefined8 uStack_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   switch (*(undefined4*)( param_2 + 0x18 )) {
      default:
    uVar1 = 0;
    goto LAB_0012061d;
      case 1:
    lVar2 = 0;
    do {
      *(undefined1 *)((long)&local_28 + lVar2) =
           *(undefined1 *)
            ((long)&transcode_bc6h_1subset(unsigned_short*[],astc_helpers::log_astc_block_const&,basist::bc6h_block&)
                    ::s_astc1_to_bc6h_3 + (ulong)(byte)param_2[lVar2 + 0x3c]);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x10);
    break;
      case 2:
    lVar2 = 0;
    do {
      *(undefined1 *)((long)&local_28 + lVar2) =
           *(undefined1 *)
            ((long)&transcode_bc6h_1subset(unsigned_short*[],astc_helpers::log_astc_block_const&,basist::bc6h_block&)
                    ::s_astc2_to_bc6h_4 + (ulong)(byte)param_2[lVar2 + 0x3c]);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x10);
    break;
      case 3:
    lVar2 = 0;
    do {
      *(undefined1 *)((long)&local_28 + lVar2) =
           *(undefined1 *)
            ((long)&transcode_bc6h_1subset(unsigned_short*[],astc_helpers::log_astc_block_const&,basist::bc6h_block&)
                    ::s_astc3_to_bc6h_4 + (ulong)(byte)param_2[lVar2 + 0x3c]);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x10);
    break;
      case 4:
    lVar2 = 0;
    do {
      *(undefined1 *)((long)&local_28 + lVar2) =
           *(undefined1 *)
            ((long)&transcode_bc6h_1subset(unsigned_short*[],astc_helpers::log_astc_block_const&,basist::bc6h_block&)
                    ::s_astc4_to_bc6h_4 + (ulong)(byte)param_2[lVar2 + 0x3c]);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x10);
    break;
      case 5:
    bc6h_enc_block_1subset_3bit_weights(param_3,param_1,(uchar *)(param_2 + 0x3c));
    goto LAB_00120618;
      case 6:
    lVar2 = 0;
    do {
      *(undefined1 *)((long)&local_28 + lVar2) =
           transcode_bc6h_1subset(unsigned_short*[],astc_helpers::log_astc_block_const&,basist::bc6h_block&)
           ::s_astc6_to_bc6h_4[(byte)param_2[lVar2 + 0x3c]];
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x10);
    break;
      case 7:
    lVar2 = 0;
    do {
      *(undefined1 *)((long)&local_28 + lVar2) =
           transcode_bc6h_1subset(unsigned_short*[],astc_helpers::log_astc_block_const&,basist::bc6h_block&)
           ::s_astc7_to_bc6h_4[(byte)param_2[lVar2 + 0x3c]];
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x10);
    break;
      case 8:
    local_28 = *(undefined8 *)(param_2 + 0x3c);
    uStack_20 = *(undefined8 *)(param_2 + 0x44);
   }

   bc6h_enc_block_1subset_4bit_weights(param_3, param_1, (uchar*)&local_28);
   LAB_00120618:uVar1 = 1;
   LAB_0012061d:if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* basist::transcode_bc6h_2subsets(unsigned int, astc_helpers::log_astc_block const&,
   basist::bc6h_block&) */undefined8 basist::transcode_bc6h_2subsets(uint param_1, log_astc_block *param_2, bc6h_block *param_3) {
   int iVar1;
   int iVar2;
   char cVar3;
   long lVar4;
   undefined8 uVar5;
   uint *puVar6;
   uint uVar7;
   uint uVar8;
   int iVar9;
   log_astc_block *plVar10;
   unsigned_short *puVar11;
   unsigned_short *puVar12;
   uint uVar13;
   log_astc_block *plVar14;
   long in_FS_OFFSET;
   unsigned_short local_98[32];
   uint local_78[3];
   uint local_6c[5];
   undefined8 local_58;
   undefined8 uStack_50;
   long local_40;
   iVar1 = *(int*)( param_2 + 0x2c );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( iVar1 == *(int*)( param_2 + 0x30 ) ) && ( ( iVar1 - 7U & 0xfffffffb ) == 0 )) {
      iVar2 = *(int*)( param_2 + 0x18 );
      if (iVar1 == 7) {
         if (iVar2 - 1U < 2) {
            if (*(int*)( param_2 + 0x1c ) == 0x14) {
               uVar13 = 0x14;
               goto LAB_001206e5;
            }

         }
 else if (iVar2 == 3) {
            if (*(int*)( param_2 + 0x1c ) == 0x13) {
               uVar13 = 0x13;
               goto LAB_001206e5;
            }

         }
 else if (iVar2 == 4) {
            if (*(int*)( param_2 + 0x1c ) == 0x11) {
               uVar13 = 0x11;
               goto LAB_001206e5;
            }

         }
 else if (( iVar2 == 5 ) && ( *(int*)( param_2 + 0x1c ) == 0xf )) {
            uVar13 = 0xf;
            goto LAB_001206e5;
         }

      }
 else if (iVar2 == 1) {
         if (*(int*)( param_2 + 0x1c ) == 0xe) {
            uVar13 = 0xe;
            goto LAB_001206e5;
         }

      }
 else if (( iVar2 == 2 ) && ( uVar13 = uVar13 == 0xc )) {
         LAB_001206e5:plVar10 = param_2 + 0x7c;
         puVar11 = local_98;
         plVar14 = plVar10;
         do {
            if (iVar1 == 7) {
               cVar3 = decode_mode7_to_qlog12((uchar*)plVar14, (int*)local_78, (int*)0x0, uVar13);
            }
 else {
               cVar3 = decode_mode11_to_qlog12((uchar*)plVar10, (int*)local_78, uVar13);
            }

            puVar6 = local_78;
            puVar12 = puVar11;
            if (cVar3 == '\0') goto switchD_00120821_caseD_0;
            do {
               uVar7 = *puVar6 << 4;
               uVar8 = uVar7 & 0x7ff;
               if (( *puVar6 & 0x60 ) == 0) {
                  iVar9 = uVar8 * 3;
               }
 else if (uVar8 < 0x600) {
                  iVar9 = uVar8 * 4 + -0x200;
               }
 else {
                  iVar9 = uVar8 * 5 + -0x800;
               }

               uVar7 = ( (int)uVar7 >> 0xb & 0x1fU ) * 0x400 + ( iVar9 >> 3 );
               *(short*)puVar12 = (short)uVar7;
               if (( ~uVar7 & 0x7c00 ) == 0) goto switchD_00120821_caseD_0;
               uVar7 = puVar6[3] << 4;
               uVar8 = uVar7 & 0x7ff;
               if (( puVar6[3] & 0x60 ) == 0) {
                  iVar9 = uVar8 * 3;
               }
 else if (uVar8 < 0x600) {
                  iVar9 = uVar8 * 4 + -0x200;
               }
 else {
                  iVar9 = uVar8 * 5 + -0x800;
               }

               uVar7 = ( (int)uVar7 >> 0xb & 0x1fU ) * 0x400 + ( iVar9 >> 3 );
               *(short*)( puVar12 + 2 ) = (short)uVar7;
               if (( ~uVar7 & 0x7c00 ) == 0) goto switchD_00120821_caseD_0;
               puVar6 = puVar6 + 1;
               puVar12 = puVar12 + 4;
            }
 while ( local_6c != puVar6 );
            puVar11 = puVar11 + 0xc;
            plVar14 = plVar14 + 4;
            plVar10 = plVar10 + 6;
         }
 while ( param_2 + 0x84 != plVar14 );
         switch (iVar2) {
            default:
        goto switchD_00120821_caseD_0;
            case 1:
        lVar4 = 0;
        do {
          *(undefined1 *)((long)&local_58 + lVar4) =
               *(undefined1 *)
                ((long)&transcode_bc6h_2subsets(unsigned_int,astc_helpers::log_astc_block_const&,basist::bc6h_block&)
                        ::s_astc1_to_bc6h_3 + (ulong)(byte)param_2[lVar4 + 0x3c]);
          lVar4 = lVar4 + 1;
        } while (lVar4 != 0x10);
        break;
            case 2:
        lVar4 = 0;
        do {
          *(undefined1 *)((long)&local_58 + lVar4) =
               *(undefined1 *)
                ((long)&transcode_bc6h_2subsets(unsigned_int,astc_helpers::log_astc_block_const&,basist::bc6h_block&)
                        ::s_astc2_to_bc6h_3 + (ulong)(byte)param_2[lVar4 + 0x3c]);
          lVar4 = lVar4 + 1;
        } while (lVar4 != 0x10);
        break;
            case 3:
        lVar4 = 0;
        do {
          *(undefined1 *)((long)&local_58 + lVar4) =
               *(undefined1 *)
                ((long)&transcode_bc6h_2subsets(unsigned_int,astc_helpers::log_astc_block_const&,basist::bc6h_block&)
                        ::s_astc3_to_bc6h_3 + (ulong)(byte)param_2[lVar4 + 0x3c]);
          lVar4 = lVar4 + 1;
        } while (lVar4 != 0x10);
        break;
            case 4:
        lVar4 = 0;
        do {
          *(undefined1 *)((long)&local_58 + lVar4) =
               *(undefined1 *)
                ((long)&transcode_bc6h_2subsets(unsigned_int,astc_helpers::log_astc_block_const&,basist::bc6h_block&)
                        ::s_astc4_to_bc6h_3 + (ulong)(byte)param_2[lVar4 + 0x3c]);
          lVar4 = lVar4 + 1;
        } while (lVar4 != 0x10);
        break;
            case 5:
        local_58 = *(undefined8 *)(param_2 + 0x3c);
        uStack_50 = *(undefined8 *)(param_2 + 0x44);
         }

         bc6h_enc_block_2subset_3bit_weights(param_3, param_1, local_98, (uchar*)&local_58);
         uVar5 = 1;
         goto LAB_00120684;
      }

   }

   switchD_00120821_caseD_0:uVar5 = 0;
   LAB_00120684:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* basist::astc_hdr_transcode_to_bc6h(astc_helpers::log_astc_block const&, basist::bc6h_block&) */undefined8 basist::astc_hdr_transcode_to_bc6h(log_astc_block *param_1, bc6h_block *param_2) {
   char cVar1;
   uint uVar2;
   int iVar3;
   undefined8 uVar4;
   int iVar5;
   int iVar6;
   uint uVar7;
   uint uVar8;
   uint uVar9;
   long in_FS_OFFSET;
   undefined2 local_44;
   undefined2 local_42;
   undefined2 local_40;
   undefined2 local_3e;
   undefined2 local_3c;
   undefined2 local_3a;
   uint local_38;
   uint local_34;
   uint local_30;
   uint local_2c;
   uint local_28;
   uint local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( g_astc_hdr_core_initialized == '\0' ) || ( param_1[1] != (log_astc_block)0x0 )) goto LAB_00120a70;
   if (param_1[2] != (log_astc_block)0x0) {
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar4 = bc6h_enc_block_solid_color(param_2, (ushort*)( param_1 + 4 ));
         return uVar4;
      }

      goto LAB_00120e6e;
   }

   if (( ( *(int*)( param_1 + 0xc ) == 4 ) && ( *(int*)( param_1 + 0x10 ) == 4 ) ) && ( param_1[0x14] == (log_astc_block)0x0 )) {
      if (*(int*)( param_1 + 0x24 ) != 1) {
         if (( *(int*)( param_1 + 0x24 ) == 2 ) && ( -1 < *(char*)( (long)&g_astc_partition_id_to_common_bc7_pat_index + ( ulong ) * (uint*)( param_1 + 0x28 ) ) )) {
            if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar4 = transcode_bc6h_2subsets((int)*(char*)( (long)&g_astc_partition_id_to_common_bc7_pat_index + ( ulong ) * (uint*)( param_1 + 0x28 ) ), param_1, param_2);
               return uVar4;
            }

            goto LAB_00120e6e;
         }

         goto LAB_00120a70;
      }

      if (7 < *(int*)( param_1 + 0x18 ) - 1U) goto LAB_00120a70;
      if (*(int*)( param_1 + 0x2c ) != 7) {
         if (*(int*)( param_1 + 0x2c ) == 0xb) {
            uVar2 = *(uint*)( param_1 + 0x1c );
            if (*(int*)( param_1 + 0x18 ) == 8) {
               if (uVar2 == 0x13) goto LAB_00120b49;
            }
 else if (uVar2 == 0x14) {
               LAB_00120b49:cVar1 = decode_mode11_to_qlog12((uchar*)( param_1 + 0x7c ), (int*)&local_38, uVar2);
               if (cVar1 != '\0') goto LAB_00120b7a;
            }

         }

         goto LAB_00120a70;
      }

      if (( ( *(int*)( param_1 + 0x1c ) != 0x14 ) || ( decode_mode7_to_qlog12_ise20((uchar*)( param_1 + 0x7c ), (int*)&local_38, (int*)0x0),0xf7f < (int)local_38 ) ) || ( ( 0xf7f < (int)local_34 || ( ( ( ( 0xf7f < (int)local_30 || ( 0xf7f < (int)local_2c ) ) || ( 0xf7f < (int)local_28 ) ) || ( 0xf7f < (int)local_24 ) ) ) ) )) goto LAB_00120a70;
      LAB_00120b7a:uVar2 = local_38 << 4 & 0x7ff;
      if (( local_38 & 0x60 ) == 0) {
         iVar6 = uVar2 * 3;
      }
 else if (uVar2 < 0x600) {
         iVar6 = uVar2 * 4 + -0x200;
      }
 else {
         iVar6 = uVar2 * 5 + -0x800;
      }

      iVar6 = ( (int)( local_38 << 4 ) >> 0xb & 0x1fU ) * 0x400 + ( iVar6 >> 3 );
      local_44 = (undefined2)iVar6;
      uVar2 = local_2c << 4 & 0x7ff;
      if (( local_2c & 0x60 ) == 0) {
         iVar5 = uVar2 * 3;
      }
 else if (uVar2 < 0x600) {
         iVar5 = uVar2 * 4 + -0x200;
      }
 else {
         iVar5 = uVar2 * 5 + -0x800;
      }

      uVar7 = ( (int)( local_2c << 4 ) >> 0xb & 0x1fU ) * 0x400 + ( iVar5 >> 3 );
      local_42 = (undefined2)uVar7;
      uVar2 = local_34 << 4 & 0x7ff;
      if (( local_34 & 0x60 ) == 0) {
         iVar5 = uVar2 * 3;
      }
 else if (uVar2 < 0x600) {
         iVar5 = uVar2 * 4 + -0x200;
      }
 else {
         iVar5 = uVar2 * 5 + -0x800;
      }

      uVar8 = ( (int)( local_34 << 4 ) >> 0xb & 0x1fU ) * 0x400 + ( iVar5 >> 3 );
      local_40 = (undefined2)uVar8;
      uVar2 = local_28 << 4 & 0x7ff;
      if (( local_28 & 0x60 ) == 0) {
         iVar5 = uVar2 * 3;
      }
 else if (uVar2 < 0x600) {
         iVar5 = uVar2 * 4 + -0x200;
      }
 else {
         iVar5 = uVar2 * 5 + -0x800;
      }

      iVar5 = ( (int)( local_28 << 4 ) >> 0xb & 0x1fU ) * 0x400 + ( iVar5 >> 3 );
      local_3e = (undefined2)iVar5;
      uVar2 = local_30 << 4 & 0x7ff;
      if (( local_30 & 0x60 ) == 0) {
         iVar3 = uVar2 * 3;
      }
 else if (uVar2 < 0x600) {
         iVar3 = uVar2 * 4 + -0x200;
      }
 else {
         iVar3 = uVar2 * 5 + -0x800;
      }

      uVar9 = ( (int)( local_30 << 4 ) >> 0xb & 0x1fU ) * 0x400 + ( iVar3 >> 3 );
      local_3c = (undefined2)uVar9;
      uVar2 = local_24 << 4 & 0x7ff;
      if (( local_24 & 0x60 ) == 0) {
         iVar3 = uVar2 * 3;
      }
 else if (uVar2 < 0x600) {
         iVar3 = uVar2 * 4 + -0x200;
      }
 else {
         iVar3 = uVar2 * 5 + -0x800;
      }

      uVar2 = ( iVar3 >> 3 ) + ( (int)( local_24 << 4 ) >> 0xb & 0x1fU ) * 0x400;
      local_3a = (undefined2)uVar2;
      if (( ( ( ( ~(byte)((uint)iVar6 >> 8) & 0x7c ) == 0 ) || ( ( ~uVar8 & 0x7c00 ) == 0 ) ) || ( ( ( ( ~uVar9 & 0x7c00 ) == 0 || ( ( ( ~uVar7 & 0x7c00 ) == 0 || ( ( ~(byte)((uint)iVar5 >> 8) & 0x7c ) == 0 ) ) ) ) || ( ( ~uVar2 & 0x7c00 ) == 0 ) ) ) ) || ( uVar4 = transcode_bc6h_1subset((unsigned_short*)&local_44, param_1, param_2) ),(char)uVar4 == '\0') goto LAB_00120a70;
   }
 else {
      LAB_00120a70:uVar4 = 0;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   LAB_00120e6e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* basist::astc_hdr_transcode_to_bc6h(basist::astc_blk const&, basist::bc6h_block&) */undefined8 basist::astc_hdr_transcode_to_bc6h(astc_blk *param_1, bc6h_block *param_2) {
   char cVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   log_astc_block alStack_b8[152];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (g_astc_hdr_core_initialized != '\0') {
      cVar1 = astc_helpers::unpack_block(param_1, alStack_b8, 4, 4);
      if (cVar1 != '\0') {
         uVar2 = astc_hdr_transcode_to_bc6h(alStack_b8, param_2);
         goto LAB_00120eab;
      }

   }

   uVar2 = 0;
   LAB_00120eab:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* basist::basisu_lowlevel_uastc_hdr_transcoder::transcode_slice(void*, unsigned int, unsigned int,
   unsigned char const*, unsigned int, basist::block_format, unsigned int, bool, bool, unsigned int,
   unsigned int, unsigned int, basist::basisu_transcoder_state*, unsigned int, int, int, unsigned
   int) */ulong basist::basisu_lowlevel_uastc_hdr_transcoder::transcode_slice(undefined8 param_1, undefined8 param_2, uint param_3, int param_4, long param_5, uint param_6, int param_7) {
   ulong uVar1;
   ulong uVar2;
   long lVar3;
   long in_FS_OFFSET;
   int local_1b0;
   uVar1 = (ulong)(uint)g_transcoder_initialized;
   if (( g_transcoder_initialized == 0 ) || ( param_6 < param_3 * param_4 * 0x10 )) {
      LAB_001210e0:uVar1 = 0;
   }
 else if (param_4 != 0) {
      uVar2 = 0;
      local_1b0 = 0;
      uVar1 = (ulong)(uint)g_transcoder_initialized;
      do {
         lVar3 = param_5;
         if (param_3 != 0) {
            lVar3 = param_5 + (ulong)param_3 * 0x10;
            do {
               if (param_7 - 0x1eU < 7) {
                  /* WARNING: Could not recover jumptable at 0x00121076. Too many branches */
                  /* WARNING: Treating indirect jump as call */
                  uVar1 = ( *(code*)( &DAT_0012cbf0 + *(int*)( &DAT_0012cbf0 + ( ulong )(param_7 - 0x1eU) * 4 ) ) )();
                  return uVar1;
               }

               if ((char)uVar2 == '\0') goto LAB_001210e0;
               param_5 = param_5 + 0x10;
               uVar2 = uVar1;
            }
 while ( param_5 != lVar3 );
         }

         local_1b0 = local_1b0 + 1;
         param_5 = lVar3;
      }
 while ( param_4 != local_1b0 );
   }

   if (*(long*)( in_FS_OFFSET + 0x28 ) == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* basist::basisu_lowlevel_uastc_hdr_transcoder::transcode_image(basist::transcoder_texture_format,
   void*, unsigned int, unsigned char const*, unsigned int, unsigned int, unsigned int, unsigned
   int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, bool, bool, unsigned
   int, basist::basisu_transcoder_state*, unsigned int, int, int) */undefined8 basist::basisu_lowlevel_uastc_hdr_transcoder::transcode_image(undefined8 param_1, uint param_2, undefined8 param_3, uint param_4, long param_5, ulong param_6, int param_7, int param_8, int param_9, int param_10, undefined8 param_11, uint param_12, uint param_13) {
   undefined8 uVar1;
   uint uVar2;
   undefined8 uStack0000000000000040;
   undefined4 uStack0000000000000050;
   int in_stack_00000058;
   undefined8 in_stack_00000060;
   int in_stack_00000068;
   undefined4 in_stack_00000070;
   uStack0000000000000040 = in_stack_00000060;
   if (( param_6 & 0xffffffff ) < (ulong)param_13 + (ulong)param_12) {
      return 0;
   }

   if (0x1a < param_2) {
      return 0;
   }

   if ((int)param_2 < 0x11) {
      if ((int)param_2 < 0xd) {
         return 0;
      }

      LAB_001215e1:if (in_stack_00000058 == 0) {
         in_stack_00000058 = param_9;
      }

      if (in_stack_00000068 == 0) {
         in_stack_00000068 = param_10;
      }

      uVar2 = in_stack_00000068 * in_stack_00000058;
   }
 else {
      if (param_2 - 0x18 < 3) goto LAB_001215e1;
      if (param_2 == 0x11) {
         return 0;
      }

      uVar2 = param_7 * param_8;
   }

   if (param_4 < uVar2) {
      switchD_0012161c_default:return 0;
   }

   switch (param_2) {
      case 0x16:
    uStack0000000000000050 = in_stack_00000070;
    break;
      case 0x17:
    uStack0000000000000050 = in_stack_00000070;
    break;
      case 0x18:
    uStack0000000000000050 = 0xffffffff;
    break;
      case 0x19:
    uStack0000000000000050 = 0xffffffff;
    break;
      case 0x1a:
    uStack0000000000000050 = 0xffffffff;
    break;
      default:
    goto switchD_0012161c_default;
   }

   param_11._0_4_ = param_9;
   uVar1 = transcode_slice(param_1, param_3, param_7, param_8, (ulong)param_12 + param_5, param_13);
   return uVar1;
}
/* basist::basisu_transcoder::transcode_image_level(void const*, unsigned int, unsigned int,
   unsigned int, void*, unsigned int, basist::transcoder_texture_format, unsigned int, unsigned int,
   basist::basisu_transcoder_state*, unsigned int) const */ulong basist::basisu_transcoder::transcode_image_level(basisu_transcoder *this, void *param_1, uint param_2, uint param_3, uint param_4, long param_5, uint param_6, uint param_8, uint param_9, undefined4 param_10, undefined8 param_11, undefined4 param_12) {
   undefined1 uVar1;
   ushort uVar2;
   undefined2 uVar3;
   undefined2 uVar4;
   uint uVar5;
   undefined4 uVar6;
   undefined4 uVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   ushort uVar11;
   int iVar12;
   ulong uVar13;
   undefined4 uVar14;
   ushort uVar15;
   char cVar16;
   undefined4 uVar17;
   uint uVar18;
   ushort uVar19;
   int iVar20;
   bool bVar21;
   bool bVar22;
   iVar20 = 0;
   if (param_8 < 0x1b) {
      iVar20 = *(int*)( CSWTCH_1494 + (ulong)param_8 * 4 );
   }

   if (this[0x312] == (basisu_transcoder)0x0) {
      return (ulong)(byte)this[0x312];
   }

   if (( param_9 >> 1 & 1 ) != 0 || param_2 < 0x4e) {
      return 0;
   }

   uVar13 = validate_header_quick(param_1, param_2);
   if ((char)uVar13 == '\0') {
      return uVar13;
   }

   iVar12 = find_first_slice_index(this, param_1, param_2, param_3, param_4);
   if (iVar12 < 0) {
      return 0;
   }

   uVar2 = *(ushort*)( (long)param_1 + 0x15 );
   uVar19 = uVar2 & 4;
   if (( param_8 == 9 ) && ( ( uVar2 & 4 ) == 0 )) {
      param_8 = 8;
   }

   uVar5 = *(uint*)( (long)param_1 + 0x41 );
   cVar16 = *(char*)( (long)param_1 + 0x14 );
   lVar8 = (long)iVar12 * 0x17;
   lVar9 = lVar8 + (ulong)uVar5;
   if (cVar16 == '\0') {
      if (( *(byte*)( (long)param_1 + lVar9 + 4 ) & 1 ) != 0) {
         return 0;
      }

      if (( uVar2 & 4 ) != 0) {
         if (( ( uint ) * (byte*)( (long)param_1 + 0xf ) << 8 | ( uint ) * (byte*)( (long)param_1 + 0x10 ) << 0x10 | ( uint ) * (byte*)( (long)param_1 + 0xe ) ) <= iVar12 + 1U) {
            return 0;
         }

         lVar10 = lVar8 + (ulong)uVar5 + 0x17;
         if (( *(byte*)( (long)param_1 + lVar10 + 4 ) & 1 ) == 0) {
            return 0;
         }

         uVar11 = *(ushort*)( (long)param_1 + lVar9 + 9 );
         if (uVar11 != *(ushort*)( (long)param_1 + lVar10 + 9 )) {
            return 0;
         }

         uVar15 = *(ushort*)( (long)param_1 + lVar9 + 0xb );
         if (uVar15 != *(ushort*)( (long)param_1 + lVar10 + 0xb )) {
            return 0;
         }

         goto LAB_00121972;
      }

   }

   uVar15 = *(ushort*)( (long)param_1 + lVar9 + 0xb );
   uVar11 = *(ushort*)( (long)param_1 + lVar9 + 9 );
   LAB_00121972:uVar18 = (uint)uVar15 * (uint)uVar11;
   if (( param_8 - 8 < 2 ) && ( uVar18 < param_6 )) {
      memset((void*)( ( ulong )(uVar18 * iVar20) + param_5 ), 0, ( ulong )(( param_6 - uVar18 ) * iVar20));
      cVar16 = *(char*)( (long)param_1 + 0x14 );
      uVar11 = *(ushort*)( (long)param_1 + lVar9 + 9 );
      uVar15 = *(ushort*)( (long)param_1 + lVar9 + 0xb );
   }

   bVar21 = ( uVar2 & 4 ) != 0;
   uVar3 = *(undefined2*)( (long)param_1 + lVar9 + 5 );
   uVar6 = *(undefined4*)( (long)param_1 + lVar9 + 0x11 );
   uVar4 = *(undefined2*)( (long)param_1 + lVar9 + 7 );
   uVar1 = *(undefined1*)( (long)param_1 + lVar9 + 3 );
   uVar7 = *(undefined4*)( (long)param_1 + lVar9 + 0xd );
   bVar22 = *(char*)( (long)param_1 + 0x17 ) == '\x03';
   if (cVar16 == '\x02') {
      uVar13 = basisu_lowlevel_uastc_hdr_transcoder::transcode_image(this + 0x311, param_8, param_5, param_6, param_1, param_2, uVar11, uVar15, uVar3, uVar4, uVar1, uVar7, uVar6, param_9, bVar21, bVar22, param_10, param_11, param_12, 0xffffffffffffffff, 0xffffffffffffffff);
   }
 else if (cVar16 == '\x01') {
      uVar13 = basisu_lowlevel_uastc_transcoder::transcode_image(this + 0x310, param_8, param_5, param_6, param_1, param_2, uVar11, uVar15, uVar3, uVar4, uVar1, uVar7, uVar6, param_9, bVar21, bVar22, param_10, param_11, param_12, 0xffffffffffffffff, 0xffffffffffffffff);
   }
 else {
      if (( uVar2 & 4 ) == 0) {
         uVar17 = 0;
         uVar14 = 0;
      }
 else {
         lVar8 = lVar8 + (ulong)uVar5 + 0x17;
         uVar19 = 1;
         uVar17 = *(undefined4*)( (long)param_1 + lVar8 + 0x11 );
         uVar14 = *(undefined4*)( (long)param_1 + lVar8 + 0xd );
      }

      uVar13 = basisu_lowlevel_etc1s_transcoder::transcode_image((basisu_lowlevel_etc1s_transcoder*)this, param_8, param_5, param_6, param_1, param_2, uVar11, uVar15, uVar3, uVar4, uVar1, uVar7, uVar6, uVar14, uVar17, param_9, uVar19, bVar22, param_10, param_11, param_12);
   }

   return uVar13;
}
/* basist::ktx2_transcoder::transcode_image_level(unsigned int, unsigned int, unsigned int, void*,
   unsigned int, basist::transcoder_texture_format, unsigned int, unsigned int, unsigned int, int,
   int, basist::ktx2_transcoder_state*) */undefined8 basist::ktx2_transcoder::transcode_image_level(ktx2_transcoder *this, uint param_1, uint param_2, uint param_3, undefined8 param_4, undefined4 param_5, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, ktx2_transcoder *param_13) {
   byte bVar1;
   uint uVar2;
   char cVar3;
   int iVar4;
   long lVar5;
   undefined8 uVar6;
   uint uVar7;
   uint *puVar8;
   ulong uVar9;
   uint uVar10;
   uint uVar11;
   uint uVar12;
   ulong uVar13;
   uint uVar14;
   int iVar15;
   if (*(long*)this != 0) {
      if (param_13 == (ktx2_transcoder*)0x0) {
         param_13 = this + 0x3f0;
      }

      uVar9 = (ulong)param_1;
      if (param_1 < *(uint*)( this + 0x68 )) {
         if (*(uint*)( this + 0x30 ) < 2) {
            if (param_3 != 0) {
               return 0;
            }

         }
 else if (5 < param_3) {
            return 0;
         }

         uVar7 = *(uint*)( this + 0x2c );
         if (uVar7 == 0) {
            uVar7 = 1;
         }

         if (param_2 < uVar7) {
            puVar8 = (uint*)( *(long*)( this + 0x60 ) + uVar9 * 0x18 );
            uVar7 = puVar8[2];
            lVar5 = *(long*)this + ( ulong ) * puVar8;
            if (*(int*)( this + 0x38 ) == 2) {
               if (*(uint*)( param_13 + 0x230 ) != param_1) {
                  cVar3 = decompress_level_data(this, param_1, (vector*)( param_13 + 0x220 ));
                  if (cVar3 == '\0') {
                     return 0;
                  }

                  *(uint*)( param_13 + 0x230 ) = param_1;
               }

               lVar5 = *(long*)( param_13 + 0x220 );
               uVar7 = *(uint*)( param_13 + 0x228 );
            }

            iVar4 = *(int*)( this + 0xb8 );
            bVar1 = (byte)param_1 & 0x1f;
            uVar2 = *(uint*)( this + 0x20 ) >> bVar1;
            if (*(uint*)( this + 0x20 ) >> bVar1 == 0) {
               uVar2 = 1;
            }

            bVar1 = (byte)param_1 & 0x1f;
            uVar11 = *(uint*)( this + 0x24 ) >> bVar1;
            if (*(uint*)( this + 0x24 ) >> bVar1 == 0) {
               uVar11 = 1;
            }

            uVar10 = uVar2 + 3 >> 2;
            uVar12 = uVar11 + 3 >> 2;
            if (iVar4 == 0) {
               if (*(int*)( this + 0xe8 ) != 0) {
                  iVar4 = *(int*)( this + 0x2c );
                  if (iVar4 == 0) {
                     iVar4 = 1;
                  }

                  param_3 = ( iVar4 * param_1 + param_2 ) * *(int*)( this + 0x30 ) + param_3;
                  if (param_3 < *(uint*)( this + 0xb0 )) {
                     lVar5 = *(long*)( this + 0xa8 ) + (ulong)param_3 * 0x14;
                     iVar4 = *(int*)( *(long*)( this + 0x60 ) + uVar9 * 0x18 );
                     iVar15 = 0;
                     if (*(int*)( lVar5 + 0x10 ) != 0) {
                        iVar15 = *(int*)( lVar5 + 0xc ) + iVar4;
                     }

                     uVar6 = basisu_lowlevel_etc1s_transcoder::transcode_image((basisu_lowlevel_etc1s_transcoder*)( this + 0xd8 ), param_7, param_4, param_5, *(undefined8*)this, *(undefined4*)( this + 8 ), uVar10, uVar12, uVar2, uVar11, uVar9, iVar4 + *(int*)( lVar5 + 4 ), *(undefined4*)( lVar5 + 8 ), iVar15, *(int*)( lVar5 + 0x10 ), param_8, this[0x628], this[0x629], param_9, param_13, param_10);
                     return uVar6;
                  }

               }

            }
 else if (iVar4 - 1U < 2) {
               uVar14 = uVar10 * uVar12 * 0x10;
               uVar13 = ( ulong )(( param_2 * *(int*)( this + 0x30 ) + param_3 ) * uVar14);
               if (( uVar13 < uVar7 ) && ( (ulong)uVar14 <= uVar7 - uVar13 )) {
                  if (iVar4 == 2) {
                     uVar6 = basisu_lowlevel_uastc_hdr_transcoder::transcode_image(this + 0x3e9, param_7, param_4, param_5, uVar13 + lVar5, uVar14, uVar10, uVar12, uVar2, uVar11, uVar9, 0, uVar14, param_8, this[0x628], this[0x629], param_9, 0, param_10, param_11, param_12);
                     return uVar6;
                  }

                  uVar6 = basisu_lowlevel_uastc_transcoder::transcode_image(this + 1000, param_7, param_4, param_5, uVar13 + lVar5, uVar14, uVar10, uVar12, uVar2, uVar11, uVar9, 0, uVar14, param_8, this[0x628], this[0x629], param_9, 0, param_10, param_11, param_12);
                  return uVar6;
               }

            }

         }

      }

   }

   return 0;
}
/* basist::basisu_transcoder::transcode_slice(void const*, unsigned int, unsigned int, void*,
   unsigned int, basist::block_format, unsigned int, unsigned int, unsigned int,
   basist::basisu_transcoder_state*, void*, unsigned int, int, int) const */ulong basist::basisu_transcoder::transcode_slice(basisu_transcoder *this, void *param_1, uint param_2, uint param_3, undefined8 param_4, uint param_5, int param_7, undefined4 param_8, uint param_9, uint param_10, undefined8 param_11, undefined8 param_12, uint param_13, undefined4 param_14, undefined4 param_15) {
   long lVar1;
   ushort uVar2;
   ushort uVar3;
   char cVar4;
   uint uVar5;
   uint uVar6;
   uint uVar7;
   byte bVar8;
   ulong uVar9;
   if (this[0x312] == (basisu_transcoder)0x0) {
      return (ulong)(byte)this[0x312];
   }

   bVar8 = ( byte )(param_9 >> 1) & 1 | param_2 < 0x4e;
   uVar9 = (ulong)bVar8;
   if (bVar8 != 0) {
      uVar9 = 0;
      goto LAB_00121f1b;
   }

   cVar4 = validate_header_quick(param_1, param_2);
   if (( cVar4 == '\0' ) || ( ( ( uint ) * (byte*)( (long)param_1 + 0xf ) << 8 | ( uint ) * (byte*)( (long)param_1 + 0x10 ) << 0x10 | ( uint ) * (byte*)( (long)param_1 + 0xe ) ) <= param_3 )) goto LAB_00121f1b;
   lVar1 = ( ulong ) * (uint*)( (long)param_1 + 0x41 ) + (ulong)param_3 * 0x17;
   uVar2 = *(ushort*)( (long)param_1 + lVar1 + 9 );
   uVar6 = (uint)uVar2;
   uVar3 = *(ushort*)( (long)param_1 + lVar1 + 0xb );
   if (param_7 - 0x15U < 0xc) {
      if (param_10 == 0) {
         param_10 = ( uint ) * (ushort*)( (long)param_1 + lVar1 + 5 );
      }

      if (param_13 == 0) {
         param_13 = ( uint ) * (ushort*)( (long)param_1 + lVar1 + 7 );
      }

      uVar7 = param_10 * param_13;
      joined_r0x001220d4:if (param_5 < uVar7) goto LAB_00121f1b;
   }
 else {
      if (param_7 == 0xf) {
         uVar7 = ( *(ushort*)( (long)param_1 + lVar1 + 5 ) + 7 >> 3 ) * ( *(ushort*)( (long)param_1 + lVar1 + 7 ) + 3 >> 2 );
         goto joined_r0x001220d4;
      }

      uVar7 = (uint)uVar3;
      if (( param_5 < uVar6 * uVar7 ) || ( ( param_7 - 6U < 2 && ( ( ( ( uVar5 = (uint)uVar2 * 4 ),uVar2 == 0 || ( ( uVar5 - 1 & uVar5 ) != 0 ) ) || ( uVar7 == 0 ) ) || ( ( uVar7 * 4 - 1 & uVar7 * 4 ) != 0 ) ) ) )) goto LAB_00121f1b;
   }

   uVar7 = *(uint*)( (long)param_1 + lVar1 + 0xd );
   if (( uVar7 <= param_2 ) && ( uVar5 = *(uint*)( (long)param_1 + lVar1 + 0x11 ) ),uVar5 <= param_2 - uVar7) {
      if (*(char*)( (long)param_1 + 0x14 ) == '\x02') {
         uVar6 = basisu_lowlevel_uastc_hdr_transcoder::transcode_slice(this + 0x311, param_4, uVar6, uVar3, (long)param_1 + (ulong)uVar7, uVar5, param_7, param_8, ( param_9 >> 3 ^ 1 ) & 1, *(ushort*)( (long)param_1 + 0x15 ) >> 2 & 1, *(undefined2*)( (long)param_1 + lVar1 + 5 ), *(undefined2*)( (long)param_1 + lVar1 + 7 ), param_10, param_11, param_13, param_14, param_15, param_9);
         uVar9 = (ulong)uVar6;
      }
 else if (*(char*)( (long)param_1 + 0x14 ) == '\x01') {
         uVar6 = basisu_lowlevel_uastc_transcoder::transcode_slice((basisu_lowlevel_uastc_transcoder*)( this + 0x310 ), param_4, uVar6);
         uVar9 = (ulong)uVar6;
      }
 else {
         uVar6 = basisu_lowlevel_etc1s_transcoder::transcode_slice((basisu_lowlevel_etc1s_transcoder*)this, param_4, uVar6);
         uVar9 = (ulong)uVar6;
      }

   }

   LAB_00121f1b:return uVar9 & 0xffffffff;
}
/* basist::ktx2_transcoder::read_key_values() */ulong basist::ktx2_transcoder::read_key_values(ktx2_transcoder *this) {
   elemental_vector *this_00;
   uint uVar1;
   char cVar2;
   uint uVar3;
   undefined8 *puVar4;
   long lVar5;
   long lVar6;
   undefined8 *puVar7;
   uint uVar8;
   uint uVar9;
   uint uVar10;
   uint uVar11;
   uint *puVar12;
   uint *__src;
   ulong uVar13;
   undefined8 unaff_R15;
   ulong uVar14;
   uVar11 = *(uint*)( this + 0x48 );
   uVar9 = *(uint*)( this + 0x44 );
   if (uVar11 == 0) {
      uVar14 = CONCAT71(( int7 )((ulong)unaff_R15 >> 8), uVar9 == 0);
   }
 else {
      if (( 0x4f < uVar9 ) && ( uVar11 + uVar9 <= *(uint*)( this + 8 ) )) {
         lVar5 = *(long*)this;
         uVar3 = basisu::vector<basist::ktx2_transcoder::key_value>::try_reserve((vector<basist::ktx2_transcoder::key_value>*)( this + 0x80 ), 8);
         uVar14 = (ulong)uVar3;
         if ((char)uVar3 != '\0') {
            if (uVar11 < 5) goto LAB_001221e4;
            puVar12 = (uint*)( lVar5 + (ulong)uVar9 );
            uVar11 = uVar11 - 4;
            uVar9 = *puVar12;
            if (( 1 < uVar9 ) && ( uVar9 <= uVar11 )) {
               do {
                  uVar3 = *(uint*)( this + 0x88 );
                  uVar13 = (ulong)uVar3;
                  uVar8 = uVar3 + 1;
                  if (uVar3 < 0xffffffff) {
                     if (*(uint*)( this + 0x8c ) < uVar8) {
                        cVar2 = basisu::elemental_vector::increase_capacity((elemental_vector*)( this + 0x80 ), uVar8, true, 0x20, basisu::vector<basist::ktx2_transcoder::key_value>::object_mover, true);
                        if (cVar2 == '\0') break;
                        uVar3 = *(uint*)( this + 0x88 );
                        lVar6 = ( ulong )(uVar8 - uVar3) << 5;
                     }
 else {
                        lVar6 = 0x20;
                     }

                     lVar5 = *(long*)( this + 0x80 );
                     puVar4 = (undefined8*)( (ulong)uVar3 * 0x20 + lVar5 );
                     puVar7 = (undefined8*)( lVar6 + (long)puVar4 );
                     for (; puVar4 != puVar7; puVar4 = puVar4 + 4) {
                        *puVar4 = 0;
                        for (int i = 0; i < 3; i++) {
                           puVar4[( i + 1 )] = 0;
                        }

                     }

                  }
 else {
                     puVar7 = *(undefined8**)( this + 0x80 );
                     puVar4 = puVar7 + 0x3fffffffc;
                     do {
                        if ((void*)puVar7[2] != (void*)0x0) {
                           free((void*)puVar7[2]);
                        }

                        if ((void*)*puVar7 != (void*)0x0) {
                           free((void*)*puVar7);
                        }

                        puVar7 = puVar7 + 4;
                     }
 while ( puVar7 != puVar4 );
                     lVar5 = *(long*)( this + 0x80 );
                  }

                  *(uint*)( this + 0x88 ) = uVar8;
                  this_00 = (elemental_vector*)( lVar5 + uVar13 * 0x20 );
                  uVar3 = *(uint*)( this_00 + 8 );
                  puVar12 = puVar12 + 1;
                  while (true) {
                     __src = (uint*)( (long)puVar12 + 1 );
                     if (*(uint*)( this_00 + 0xc ) <= uVar3) {
                        cVar2 = basisu::elemental_vector::increase_capacity(this_00, uVar3 + 1, true, 1, (_func_void_void_ptr_void_ptr_uint*)0x0, true);
                        if (cVar2 == '\0') {
                           uVar14 = 0;
                           goto LAB_001221e4;
                        }

                        uVar3 = *(uint*)( this_00 + 8 );
                     }

                     uVar10 = uVar11 - 1;
                     uVar8 = uVar9 - 1;
                     *(char*)( *(long*)this_00 + (ulong)uVar3 ) = (char)*puVar12;
                     uVar1 = *(uint*)( this_00 + 8 );
                     uVar3 = uVar1 + 1;
                     *(uint*)( this_00 + 8 ) = uVar3;
                     if (*(char*)( *(long*)this_00 + (ulong)uVar1 ) == '\0') break;
                     puVar12 = __src;
                     uVar11 = uVar10;
                     uVar9 = uVar8;
                     if (uVar8 == 0) goto LAB_00122211;
                  }
;
                  uVar3 = *(uint*)( this_00 + 0x18 );
                  if (uVar8 != uVar3) {
                     if (uVar3 <= uVar8) {
                        if (*(uint*)( this_00 + 0x1c ) < uVar8) {
                           cVar2 = basisu::elemental_vector::increase_capacity(this_00 + 0x10, uVar8, uVar3 + 1 == uVar8, 1, (_func_void_void_ptr_void_ptr_uint*)0x0, true);
                           if (cVar2 == '\0') break;
                           uVar3 = *(uint*)( this_00 + 0x18 );
                        }

                        memset((void*)( (ulong)uVar3 + *(long*)( this_00 + 0x10 ) ), 0, ( ulong )(uVar8 - uVar3));
                     }

                     *(uint*)( this_00 + 0x18 ) = uVar8;
                  }

                  puVar12 = __src;
                  if (uVar8 != 0) {
                     puVar12 = (uint*)( (long)__src + (ulong)uVar8 );
                     memcpy(*(void**)( this_00 + 0x10 ), __src, (ulong)uVar8);
                     uVar10 = uVar11 - uVar9;
                  }

                  uVar11 = -((int)puVar12 - (int)*(undefined8 *)this) & 3;
                  if (uVar10 < uVar11) break;
                  puVar12 = (uint*)( (ulong)uVar11 + (long)puVar12 );
                  if (uVar10 - uVar11 < 5) goto LAB_001221e4;
                  uVar9 = *puVar12;
                  uVar11 = ( uVar10 - uVar11 ) - 4;
                  if (( uVar11 < uVar9 ) || ( uVar9 < 2 )) break;
               }
 while ( true );
            }

         }

      }

      LAB_00122211:uVar14 = 0;
   }

   LAB_001221e4:return uVar14 & 0xffffffff;
}
/* basist::ktx2_transcoder::init(void const*, unsigned int) */undefined4 basist::ktx2_transcoder::init(ktx2_transcoder *this, void *param_1, uint param_2) {
   uint uVar1;
   undefined8 uVar2;
   char cVar3;
   uint uVar4;
   undefined4 uVar5;
   int iVar6;
   uint *puVar7;
   int *__src;
   uint uVar8;
   uint *puVar9;
   long lVar10;
   clear(this);
   /* WARNING: Load size is inaccurate */
   if (( ( ( 0x50 < param_2 ) && ( param_1 != (void*)0x0 ) ) && ( *param_1 == -0x44cfcddfa7abb455 ) ) && ( *(int*)( (long)param_1 + 8 ) == 0xa1a0a0d )) {
      *(void**)this = param_1;
      *(uint*)( this + 8 ) = param_2;
      /* WARNING: Load size is inaccurate */
      uVar2 = *(undefined8*)( (long)param_1 + 8 );
      *(undefined8*)( this + 0xc ) = *param_1;
      *(undefined8*)( this + 0x14 ) = uVar2;
      for (int i = 0; i < 4; i++) {
         uVar2 = *(undefined8*)( (long)param_1 + ( 16*i + 24 ) );
         *(undefined8*)( this + ( 16*i + 28 ) ) = *(undefined8*)( (long)param_1 + ( 16*i + 16 ) );
         *(undefined8*)( this + ( 16*i + 36 ) ) = uVar2;
      }

      if (( ( ( ( *(int*)( this + 0x18 ) == 0 ) || ( *(int*)( this + 0x18 ) == 0x3b9bcbd0 ) ) && ( ( *(int*)( this + 0x1c ) == 1 && ( ( *(int*)( this + 0x20 ) != 0 && ( *(int*)( this + 0x24 ) != 0 ) ) ) ) ) ) && ( *(int*)( this + 0x28 ) == 0 ) ) && ( ( ( ( *(int*)( this + 0x30 ) == 1 || ( ( *(int*)( this + 0x30 ) == 6 && ( *(int*)( this + 0x20 ) == *(int*)( this + 0x24 ) ) ) ) ) && ( uVar4 = *(uint*)( this + 0x34 ) ),uVar4 - 1 < 0x10 ) ) && ( ( *(uint*)( this + 0x38 ) < 3 && ( ( *(uint*)( this + 0x38 ) != 1 || ( ( ( 0x14 < *(uint*)( this + 0x54 ) && ( 0x4f < *(uint*)( this + 0x4c ) ) ) && ( *(uint*)( this + 0x54 ) + *(uint*)( this + 0x4c ) <= param_2 ) ) ) ) ) ) ) )) {
         uVar1 = *(uint*)( this + 0x68 );
         uVar8 = uVar4;
         if (uVar4 != uVar1) {
            if (( uVar1 <= uVar4 ) && ( *(uint*)( this + 0x6c ) < uVar4 )) {
               cVar3 = basisu::elemental_vector::increase_capacity((elemental_vector*)( this + 0x60 ), uVar4, uVar1 + 1 == uVar4, 0x18, basisu::vector<basist::ktx2_level_index>::object_mover, true);
               if (cVar3 == '\0') {
                  return 0;
               }

               uVar8 = *(uint*)( this + 0x34 );
            }

            *(uint*)( this + 0x68 ) = uVar4;
         }

         if (uVar8 == 0) {
            uVar8 = 1;
         }

         if (( ulong )(uVar8 * 0x18) + 0x50 <= ( ulong ) * (uint*)( this + 8 )) {
            memcpy(*(void**)( this + 0x60 ), (void*)( *(long*)this + 0x50 ), ( ulong )(uVar8 * 0x18));
            if (*(uint*)( this + 0x68 ) != 0) {
               puVar7 = *(uint**)( this + 0x60 );
               puVar9 = puVar7 + ( ulong ) * (uint*)( this + 0x68 ) * 6;
               do {
                  if (*puVar7 < 0x50) {
                     return 0;
                  }

                  if (*(uint*)( this + 8 ) < *puVar7 + puVar7[2]) {
                     return 0;
                  }

                  uVar4 = puVar7[4];
                  if ((int)uVar4 < 0) {
                     return 0;
                  }

                  if (*(uint*)( this + 0x38 ) == 1) {
                     if (uVar4 != 0) {
                        return 0;
                     }

                  }
 else if (( uVar4 == 0 ) && ( 1 < *(uint*)( this + 0x38 ) )) {
                     return 0;
                  }

                  puVar7 = puVar7 + 6;
               }
 while ( puVar7 != puVar9 );
            }

            uVar4 = *(uint*)( this + 0x40 );
            if (( uVar4 & 0xffffffef ) == 0x2c) {
               uVar1 = *(uint*)( this + 0x3c );
               if (( uVar4 + uVar1 <= *(uint*)( this + 8 ) ) && ( 0x4f < uVar1 )) {
                  uVar8 = *(uint*)( this + 0x78 );
                  lVar10 = *(long*)this;
                  if (uVar4 != uVar8) {
                     if (uVar8 <= uVar4) {
                        if (*(uint*)( this + 0x7c ) < uVar4) {
                           cVar3 = basisu::elemental_vector::increase_capacity((elemental_vector*)( this + 0x70 ), uVar4, uVar8 + 1 == uVar4, 1, (_func_void_void_ptr_void_ptr_uint*)0x0, true);
                           if (cVar3 == '\0') {
                              return 0;
                           }

                           uVar8 = *(uint*)( this + 0x78 );
                        }

                        memset((void*)( (ulong)uVar8 + *(long*)( this + 0x70 ) ), 0, ( ulong )(uVar4 - uVar8));
                     }

                     *(uint*)( this + 0x78 ) = uVar4;
                  }

                  __src = (int*)( (ulong)uVar1 + lVar10 );
                  memcpy(*(void**)( this + 0x70 ), __src, ( ulong ) * (uint*)( this + 0x40 ));
                  iVar6 = *(int*)( this + 0x40 );
                  if (( iVar6 == *__src ) && ( ( *(int*)( this + 0x48 ) == 0 || ( *(int*)( this + 0x44 ) - *(int*)( this + 0x3c ) == iVar6 ) ) )) {
                     uVar4 = __src[3];
                     uVar1 = __src[7];
                     uVar8 = uVar4 & 0xff;
                     *(ulong*)( this + 0xbc ) = CONCAT44(uVar4 >> 8, uVar4) & 0xff000000ff;
                     *(ulong*)( this + 0xc4 ) = CONCAT44(uVar4 >> 0x18, uVar4 >> 0x10) & 0xffffffff000000ff;
                     if (( uVar4 >> 0x10 & 0xff ) - 1 < 2) {
                        if (uVar8 == 0xa3) {
                           this[0x628] = ( ktx2_transcoder )(iVar6 == 0x3c);
                           *(undefined4*)( this + 0xb8 ) = 0;
                           uVar4 = uVar1 >> 0x18 & 0xf;
                           if (iVar6 == 0x3c) {
                              *(undefined4*)( this + 0xcc ) = 2;
                              *(uint*)( this + 0xd0 ) = uVar4;
                              *(uint*)( this + 0xd4 ) = *(byte*)( (long)__src + 0x2f ) & 0xf;
                           }
 else {
                              *(undefined4*)( this + 0xcc ) = 1;
                              *(uint*)( this + 0xd0 ) = uVar4;
                           }

                        }
 else {
                           if (uVar8 == 0xa6) {
                              *(undefined4*)( this + 0xb8 ) = 1;
                           }
 else {
                              if (uVar8 != 0xa7) {
                                 return 0;
                              }

                              *(undefined4*)( this + 0xb8 ) = 2;
                           }

                           *(undefined4*)( this + 0xcc ) = 1;
                           uVar4 = uVar1 >> 0x18 & 0xf;
                           *(uint*)( this + 0xd0 ) = uVar4;
                           this[0x628] = ( ktx2_transcoder )(( uVar4 - 3 & 0xfffffffd ) == 0);
                        }

                        uVar5 = read_key_values(this);
                        if ((char)uVar5 != '\0') {
                           uVar4 = *(uint*)( this + 0x88 );
                           lVar10 = 0;
                           do {
                              if (uVar4 <= (uint)lVar10) {
                                 return uVar5;
                              }

                              iVar6 = strcmp(*(char**)( lVar10 * 0x20 + *(long*)( this + 0x80 ) ), "KTXanimData");
                              lVar10 = lVar10 + 1;
                           }
 while ( iVar6 != 0 );
                           this[0x629] = (ktx2_transcoder)0x1;
                           return uVar5;
                        }

                     }

                  }

               }

            }

         }

      }

   }

   return 0;
}
/* basisu::vector<basist::ktx2_level_index>::object_mover(void*, void*, unsigned int) */void basisu::vector<basist::ktx2_level_index>::object_mover(void *param_1, void *param_2, uint param_3) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   puVar1 = (undefined8*)( (long)param_2 + (ulong)param_3 * 0x18 );
   if ((undefined8*)param_2 != puVar1) {
      do {
         /* WARNING: Load size is inaccurate */
         puVar2 = (undefined8*)( (long)param_2 + 0x18 );
         *(undefined8*)param_1 = *param_2;
         *(undefined8*)( (long)param_1 + 8 ) = *(undefined8*)( (long)param_2 + 8 );
         *(undefined8*)( (long)param_1 + 0x10 ) = *(undefined8*)( (long)param_2 + 0x10 );
         param_2 = puVar2;
         param_1 = (undefined8*)( (long)param_1 + 0x18 );
      }
 while ( puVar1 != puVar2 );
   }

   return;
}
/* astc_helpers::dequant_tables::~dequant_tables() */void astc_helpers::dequant_tables::~dequant_tables(dequant_tables *this) {
   dequant_tables *pdVar1;
   bool bVar2;
   pdVar1 = this + 0x700;
   do {
      if (*(void**)( pdVar1 + 0x30 ) != (void*)0x0) {
         free(*(void**)( pdVar1 + 0x30 ));
      }

      if (*(void**)( pdVar1 + 0x20 ) != (void*)0x0) {
         free(*(void**)( pdVar1 + 0x20 ));
      }

      if (*(void**)( pdVar1 + 0x10 ) != (void*)0x0) {
         free(*(void**)( pdVar1 + 0x10 ));
      }

      if (*(void**)pdVar1 != (void*)0x0) {
         free(*(void**)pdVar1);
      }

      pdVar1 = pdVar1 + -0x40;
   }
 while ( pdVar1 != this + 0x2c0 );
   do {
      if (*(void**)( pdVar1 + 0x30 ) != (void*)0x0) {
         free(*(void**)( pdVar1 + 0x30 ));
      }

      if (*(void**)( pdVar1 + 0x20 ) != (void*)0x0) {
         free(*(void**)( pdVar1 + 0x20 ));
      }

      if (*(void**)( pdVar1 + 0x10 ) != (void*)0x0) {
         free(*(void**)( pdVar1 + 0x10 ));
      }

      if (*(void**)pdVar1 != (void*)0x0) {
         free(*(void**)pdVar1);
      }

      bVar2 = pdVar1 != this;
      pdVar1 = pdVar1 + -0x40;
   }
 while ( bVar2 );
   return;
}
/* basisu::vector<basist::ktx2_etc1s_image_desc>::object_mover(void*, void*, unsigned int) */void basisu::vector<basist::ktx2_etc1s_image_desc>::object_mover(void *param_1, void *param_2, uint param_3) {
   undefined4 *puVar1;
   undefined4 *puVar2;
   puVar1 = (undefined4*)( (long)param_2 + (ulong)param_3 * 0x14 );
   if ((undefined4*)param_2 != puVar1) {
      do {
         /* WARNING: Load size is inaccurate */
         puVar2 = (undefined4*)( (long)param_2 + 0x14 );
         *(undefined4*)param_1 = *param_2;
         for (int i = 0; i < 4; i++) {
            *(undefined4*)( (long)param_1 + ( 4*i + 4 ) ) = *(undefined4*)( (long)param_2 + ( 4*i + 4 ) );
         }

         param_2 = puVar2;
         param_1 = (undefined4*)( (long)param_1 + 0x14 );
      }
 while ( puVar1 != puVar2 );
   }

   return;
}
/* basist::huffman_decoding_table::clear() */void basist::huffman_decoding_table::clear(huffman_decoding_table *this) {
   uint uVar1;
   if (*(int*)( this + 8 ) != 0) {
      *(undefined4*)( this + 8 ) = 0;
   }

   uVar1 = *(uint*)( this + 0x18 );
   if ((ulong)uVar1 != 0) {
      memmove(*(void**)( this + 0x10 ), (void*)( (ulong)uVar1 * 4 + (long)*(void**)( this + 0x10 ) ), 0);
      *(uint*)( this + 0x18 ) = *(int*)( this + 0x18 ) - uVar1;
   }

   uVar1 = *(uint*)( this + 0x28 );
   if ((ulong)uVar1 == 0) {
      return;
   }

   memmove(*(void**)( this + 0x20 ), (void*)( (ulong)uVar1 * 2 + (long)*(void**)( this + 0x20 ) ), 0);
   *(uint*)( this + 0x28 ) = *(int*)( this + 0x28 ) - uVar1;
   return;
}
/* basist::bitwise_decoder::decode_vlc(unsigned int) */uint basist::bitwise_decoder::decode_vlc(bitwise_decoder *this, uint param_1) {
   uint uVar1;
   uint uVar2;
   byte *pbVar3;
   uint uVar4;
   int iVar5;
   uint uVar6;
   uint uVar7;
   uint uVar8;
   uint uVar9;
   uint uVar10;
   uint uVar11;
   uint uVar12;
   uint uVar13;
   uVar8 = param_1 + 1;
   uVar10 = 1 << ( (byte)param_1 & 0x1f );
   uVar13 = 0;
   uVar1 = uVar10 - 1;
   uVar2 = param_1 - 0x18;
   uVar9 = 0;
   do {
      uVar12 = uVar9 + param_1;
      uVar4 = *(uint*)( this + 0x24 );
      uVar6 = *(uint*)( this + 0x20 );
      if (uVar8 < 0x1a) {
         if (uVar8 == 0) {
            return uVar13;
         }

         if (uVar4 < uVar8) {
            do {
               pbVar3 = *(byte**)( this + 8 );
               if (pbVar3 < *(byte**)( this + 0x18 )) {
                  *(byte**)( this + 8 ) = pbVar3 + 1;
                  uVar6 = uVar6 | ( uint ) * pbVar3 << ( (byte)uVar4 & 0x1f );
               }

               uVar4 = uVar4 + 8;
               *(uint*)( this + 0x20 ) = uVar6;
               *(uint*)( this + 0x24 ) = uVar4;
            }
 while ( uVar4 < uVar8 );
         }

         uVar11 = ( 1 << ( (byte)uVar8 & 0x1f ) ) - 1U & uVar6;
         uVar9 = ( uVar1 & uVar11 ) << ( (byte)uVar9 & 0x1f );
         iVar5 = uVar4 - uVar8;
         uVar4 = uVar6 >> ( (byte)uVar8 & 0x1f );
      }
 else {
         if (uVar4 < 0x19) {
            uVar11 = uVar4;
            do {
               pbVar3 = *(byte**)( this + 8 );
               if (pbVar3 < *(byte**)( this + 0x18 )) {
                  *(byte**)( this + 8 ) = pbVar3 + 1;
                  uVar6 = uVar6 | ( uint ) * pbVar3 << ( (byte)uVar11 & 0x1f );
               }

               uVar11 = uVar11 + 8;
               *(uint*)( this + 0x20 ) = uVar6;
               *(uint*)( this + 0x24 ) = uVar11;
            }
 while ( uVar11 < 0x19 );
            uVar4 = uVar4 + 8 + ( 0x18 - uVar4 & 0xfffffff8 );
         }

         uVar11 = uVar4 - 0x19;
         uVar7 = uVar6 >> 0x19;
         *(uint*)( this + 0x20 ) = uVar7;
         *(uint*)( this + 0x24 ) = uVar11;
         if (uVar11 < uVar2) {
            do {
               pbVar3 = *(byte**)( this + 8 );
               if (pbVar3 < *(byte**)( this + 0x18 )) {
                  *(byte**)( this + 8 ) = pbVar3 + 1;
                  uVar7 = uVar7 | ( uint ) * pbVar3 << ( (byte)uVar11 & 0x1f );
               }

               uVar11 = uVar11 + 8;
               *(uint*)( this + 0x20 ) = uVar7;
               *(uint*)( this + 0x24 ) = uVar11;
            }
 while ( uVar11 < uVar2 );
            uVar11 = ( uVar4 - 0x11 ) + ( param_1 - uVar4 & 0xfffffff8 );
         }

         iVar5 = uVar11 - uVar2;
         uVar4 = uVar7 >> ( (byte)uVar2 & 0x1f );
         uVar11 = ( uVar7 & ( 1 << ( (byte)uVar2 & 0x1f ) ) - 1U ) << 0x19 | uVar6 & 0x1ffffff;
         uVar9 = ( uVar1 & uVar11 ) << ( (byte)uVar9 & 0x1f );
      }

      uVar13 = uVar13 | uVar9;
      *(uint*)( this + 0x20 ) = uVar4;
      *(int*)( this + 0x24 ) = iVar5;
      uVar9 = uVar12;
   }
 while ( ( uVar10 & uVar11 ) != 0 && uVar12 < 0x20 );
   return uVar13;
}
/* basisu::vector<basist::ktx2_transcoder::key_value>::object_mover(void*, void*, unsigned int) */void basisu::vector<basist::ktx2_transcoder::key_value>::object_mover(void *param_1, void *param_2, uint param_3) {
   uint uVar1;
   undefined8 *puVar2;
   puVar2 = (undefined8*)( (ulong)param_3 * 0x20 + (long)param_2 );
   if ((undefined8*)param_2 != puVar2) {
      do {
         *(undefined8*)param_1 = 0;
         uVar1 = *(uint*)( (long)param_2 + 8 );
         *(undefined8*)( (long)param_1 + 8 ) = 0;
         elemental_vector::increase_capacity((elemental_vector*)param_1, uVar1, false, 1, (_func_void_void_ptr_void_ptr_uint*)0x0, false);
         uVar1 = *(uint*)( (long)param_2 + 8 );
         /* WARNING: Load size is inaccurate */
         *(uint*)( (long)param_1 + 8 ) = uVar1;
         /* WARNING: Load size is inaccurate */
         if (( *param_1 != (void*)0x0 ) && ( *param_2 != (void*)0x0 )) {
            memcpy(*param_1, *param_2, (ulong)uVar1);
         }

         *(undefined8*)( (long)param_1 + 0x10 ) = 0;
         uVar1 = *(uint*)( (long)param_2 + 0x18 );
         *(undefined8*)( (long)param_1 + 0x18 ) = 0;
         elemental_vector::increase_capacity((elemental_vector*)( (long)param_1 + 0x10 ), uVar1, false, 1, (_func_void_void_ptr_void_ptr_uint*)0x0, false);
         uVar1 = *(uint*)( (long)param_2 + 0x18 );
         *(uint*)( (long)param_1 + 0x18 ) = uVar1;
         if (*(void**)( (long)param_1 + 0x10 ) == (void*)0x0) {
            LAB_0012bcb1:if (*(void**)( (long)param_2 + 0x10 ) != (void*)0x0) {
               free(*(void**)( (long)param_2 + 0x10 ));
            }

         }
 else if (*(void**)( (long)param_2 + 0x10 ) != (void*)0x0) {
            memcpy(*(void**)( (long)param_1 + 0x10 ), *(void**)( (long)param_2 + 0x10 ), (ulong)uVar1);
            goto LAB_0012bcb1;
         }

         /* WARNING: Load size is inaccurate */
         if (*param_2 != (void*)0x0) {
            free(*param_2);
         }

         param_2 = (void*)( (long)param_2 + 0x20 );
         param_1 = (void*)( (long)param_1 + 0x20 );
      }
 while ( puVar2 != (undefined8*)param_2 );
   }

   return;
}
/* basist::huffman_decoding_table::init(unsigned int, unsigned char const*, unsigned int) */undefined8 basist::huffman_decoding_table::init(huffman_decoding_table *this, uint param_1, uchar *param_2, uint param_3) {
   int iVar1;
   elemental_vector *this_00;
   uint *puVar2;
   short *psVar3;
   short sVar4;
   uint uVar5;
   int iVar6;
   uint uVar7;
   undefined8 uVar8;
   long lVar9;
   uint uVar10;
   uint uVar11;
   byte *pbVar12;
   uint uVar13;
   int iVar14;
   int *piVar15;
   ulong uVar16;
   uint uVar17;
   int iVar18;
   long in_FS_OFFSET;
   byte bVar19;
   byte local_17c;
   int local_148[32];
   uint local_c8[34];
   long local_40;
   bVar19 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0) {
      clear(this);
   }
 else {
      uVar5 = *(uint*)( this + 8 );
      if (param_1 != uVar5) {
         if (uVar5 <= param_1) {
            if (*(uint*)( this + 0xc ) < param_1) {
               basisu::elemental_vector::increase_capacity((elemental_vector*)this, param_1, uVar5 + 1 == param_1, 1, (_func_void_void_ptr_void_ptr_uint*)0x0, false);
               uVar5 = *(uint*)( this + 8 );
            }

            memset((void*)( (ulong)uVar5 + *(long*)this ), 0, ( ulong )(param_1 - uVar5));
         }

         *(uint*)( this + 8 ) = param_1;
      }

      memcpy(*(void**)this, param_2, (ulong)param_1);
      local_17c = (byte)param_3;
      uVar5 = 1 << ( local_17c & 0x1f );
      if (*(int*)( this + 0x18 ) != 0) {
         *(undefined4*)( this + 0x18 ) = 0;
      }

      if (uVar5 != 0) {
         uVar11 = 0;
         if (*(uint*)( this + 0x1c ) < uVar5) {
            basisu::elemental_vector::increase_capacity((elemental_vector*)( this + 0x10 ), uVar5, uVar5 == 1, 4, (_func_void_void_ptr_void_ptr_uint*)0x0, false);
            uVar11 = *(uint*)( this + 0x18 );
         }

         memset((void*)( *(long*)( this + 0x10 ) + (ulong)uVar11 * 4 ), 0, ( ulong )(uVar5 - uVar11) << 2);
         *(uint*)( this + 0x18 ) = uVar5;
      }

      this_00 = (elemental_vector*)( this + 0x20 );
      if (*(int*)( this + 0x28 ) != 0) {
         *(undefined4*)( this + 0x28 ) = 0;
      }

      uVar11 = param_1 * 2;
      if (uVar11 != 0) {
         uVar16 = 0;
         if (*(uint*)( this + 0x2c ) < uVar11) {
            basisu::elemental_vector::increase_capacity(this_00, uVar11, false, 2, (_func_void_void_ptr_void_ptr_uint*)0x0, false);
            uVar16 = ( ulong ) * (uint*)( this + 0x28 );
         }

         memset((void*)( *(long*)( this + 0x20 ) + uVar16 * 2 ), 0, ( ulong )(uVar11 - (int)uVar16) * 2);
         *(uint*)( this + 0x28 ) = uVar11;
      }

      piVar15 = local_148;
      for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
         piVar15[0] = 0;
         piVar15[1] = 0;
         piVar15 = piVar15 + ( (ulong)bVar19 * -2 + 1 ) * 2;
      }

      pbVar12 = param_2;
      do {
         bVar19 = *pbVar12;
         if (0x1f < bVar19) goto LAB_0012be05;
         pbVar12 = pbVar12 + 1;
         local_148[bVar19] = local_148[bVar19] + 1;
      }
 while ( pbVar12 != param_2 + param_1 );
      lVar9 = 0;
      iVar6 = 0;
      iVar14 = 0;
      local_c8[0] = 0;
      local_c8[1] = 0;
      do {
         iVar18 = *(int*)( (long)local_148 + lVar9 + 4 );
         iVar14 = iVar14 + iVar18;
         iVar6 = ( iVar6 + iVar18 ) * 2;
         *(int*)( (long)local_c8 + lVar9 + 8 ) = iVar6;
         lVar9 = lVar9 + 4;
      }
 while ( lVar9 != 0x78 );
      if (( iVar6 != -0x80000000 ) && ( iVar14 != 1 )) {
         LAB_0012be05:uVar8 = 0;
         goto LAB_0012be07;
      }

      if (0 < (int)param_1) {
         uVar16 = 0;
         iVar6 = -1;
         do {
            bVar19 = param_2[uVar16];
            uVar11 = (uint)bVar19;
            if (bVar19 != 0) {
               uVar17 = local_c8[uVar11];
               local_c8[uVar11] = uVar17 + 1;
               uVar7 = 0;
               uVar10 = uVar11;
               do {
                  uVar7 = uVar7 * 2 | uVar17 & 1;
                  uVar10 = uVar10 - 1;
                  uVar17 = uVar17 >> 1;
               }
 while ( uVar10 != 0 );
               uVar17 = (uint)bVar19;
               if (param_3 < uVar11) {
                  piVar15 = (int*)( *(long*)( this + 0x10 ) + ( ulong )(uVar5 - 1 & uVar7) * 4 );
                  iVar14 = *piVar15;
                  iVar18 = iVar6;
                  if (iVar14 == 0) {
                     *piVar15 = iVar6;
                     iVar18 = iVar6 + -2;
                     iVar14 = iVar6;
                  }

                  if (-1 < iVar14) goto LAB_0012be05;
                  iVar1 = param_3 + 1;
                  uVar7 = uVar7 >> ( local_17c - 1 & 0x1f );
                  uVar10 = uVar7 >> 1;
                  uVar11 = iVar14 - ( uVar10 & 1 );
                  iVar6 = iVar18;
                  if (iVar1 < (int)uVar17) {
                     if ((int)uVar11 < 0) {
                        do {
                           uVar7 = *(uint*)( this + 0x28 );
                           if (( (int)uVar7 <= (int)~uVar11 ) && ( uVar13 = uVar7 != uVar13 )) {
                              if (uVar7 <= uVar13) {
                                 if (*(uint*)( this + 0x2c ) < uVar13) {
                                    basisu::elemental_vector::increase_capacity(this_00, uVar13, uVar7 + 1 == uVar13, 2, (_func_void_void_ptr_void_ptr_uint*)0x0, false);
                                    uVar7 = *(uint*)( this + 0x28 );
                                 }

                                 memset((void*)( *(long*)( this + 0x20 ) + (ulong)uVar7 * 2 ), 0, ( ulong )(uVar13 - uVar7) * 2);
                              }

                              *(uint*)( this + 0x28 ) = uVar13;
                           }

                           psVar3 = (short*)( *(long*)( this + 0x20 ) + (long)(int)~uVar11 * 2 );
                           sVar4 = *psVar3;
                           iVar14 = (int)sVar4;
                           uVar7 = uVar10;
                           if (sVar4 == 0) {
                              *psVar3 = (short)iVar18;
                              uVar11 = iVar18 - ( uVar10 >> 1 & 1 );
                              iVar6 = iVar18 + -2;
                              iVar14 = iVar18;
                              if (iVar1 == uVar17 - 1) goto LAB_0012c02d;
                              iVar18 = iVar18 + -2;
                              if (-1 < (int)uVar11) break;
                           }
 else {
                              if (-1 < sVar4) break;
                              uVar11 = iVar14 - ( uVar10 >> 1 & 1 );
                              iVar6 = iVar18;
                              if (iVar1 == uVar17 - 1) goto LAB_0012c02d;
                           }

                           uVar10 = uVar10 >> 1;
                           uVar17 = uVar17 - 1;
                        }
 while ( true );
                     }

                     goto LAB_0012be05;
                  }

                  LAB_0012c02d:uVar11 = iVar14 - ( uVar7 >> 1 & 1 );
                  uVar17 = uVar11 ^ 0xffffffff;
                  if ((int)uVar17 < 0) goto LAB_0012be05;
                  uVar10 = *(uint*)( this + 0x28 );
                  if (( (int)uVar10 <= (int)uVar17 ) && ( uVar11 = uVar10 != uVar11 )) {
                     if (uVar10 <= uVar11) {
                        if (*(uint*)( this + 0x2c ) < uVar11) {
                           basisu::elemental_vector::increase_capacity(this_00, uVar11, uVar10 + 1 == uVar11, 2, (_func_void_void_ptr_void_ptr_uint*)0x0, false);
                           uVar10 = *(uint*)( this + 0x28 );
                        }

                        memset((void*)( *(long*)( this + 0x20 ) + (ulong)uVar10 * 2 ), 0, ( ulong )(uVar11 - uVar10) * 2);
                     }

                     *(uint*)( this + 0x28 ) = uVar11;
                  }

                  psVar3 = (short*)( *(long*)( this + 0x20 ) + (long)(int)uVar17 * 2 );
                  if (*psVar3 != 0) goto LAB_0012be05;
                  *psVar3 = (short)uVar16;
               }
 else if (uVar7 < uVar5) {
                  lVar9 = *(long*)( this + 0x10 );
                  do {
                     puVar2 = (uint*)( lVar9 + (ulong)uVar7 * 4 );
                     if (*puVar2 != 0) goto LAB_0012be05;
                     uVar7 = uVar7 + ( 1 << ( bVar19 & 0x1f ) );
                     *puVar2 = (uint)bVar19 << 0x10 | (uint)uVar16;
                  }
 while ( uVar7 < uVar5 );
               }

            }

            uVar16 = uVar16 + 1;
         }
 while ( uVar16 != param_1 );
      }

   }

   uVar8 = 1;
   LAB_0012be07:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar8;
}
/* basist::bitwise_decoder::read_huffman_table(basist::huffman_decoding_table&) */ulong basist::bitwise_decoder::read_huffman_table(bitwise_decoder *this, huffman_decoding_table *param_1) {
   uchar uVar1;
   short sVar2;
   uchar *__ptr;
   void *__ptr_00;
   void *__ptr_01;
   int iVar3;
   ulong uVar4;
   byte bVar5;
   uint uVar6;
   uchar *puVar7;
   byte *pbVar8;
   byte *pbVar9;
   uint uVar10;
   uint uVar11;
   uint uVar12;
   ulong uVar13;
   int iVar14;
   int iVar15;
   uint uVar16;
   uint uVar17;
   long in_FS_OFFSET;
   uchar *local_98;
   undefined8 local_90;
   void *local_88;
   undefined8 local_80;
   void *local_78;
   undefined8 local_70;
   void *local_68;
   undefined8 local_60;
   undefined1 local_58[13];
   undefined3 uStack_4b;
   undefined5 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   huffman_decoding_table::clear(param_1);
   uVar11 = *(uint*)( this + 0x24 );
   if (uVar11 < 0xe) {
      uVar16 = *(uint*)( this + 0x20 );
      uVar6 = uVar11;
      do {
         pbVar8 = *(byte**)( this + 8 );
         if (pbVar8 < *(byte**)( this + 0x18 )) {
            *(byte**)( this + 8 ) = pbVar8 + 1;
            uVar16 = uVar16 | ( uint ) * pbVar8 << ( (byte)uVar6 & 0x1f );
         }

         uVar6 = uVar6 + 8;
         *(uint*)( this + 0x20 ) = uVar16;
         *(uint*)( this + 0x24 ) = uVar6;
      }
 while ( uVar6 < 0xe );
      uVar11 = uVar11 + 8 + ( 0xd - uVar11 & 0xfffffff8 );
   }
 else {
      uVar16 = *(uint*)( this + 0x20 );
   }

   uVar6 = uVar11 - 0xe;
   uVar4 = 1;
   uVar10 = uVar16 >> 0xe;
   *(uint*)( this + 0x24 ) = uVar6;
   *(uint*)( this + 0x20 ) = uVar10;
   uVar17 = uVar16 & 0x3fff;
   if (uVar17 != 0) {
      local_58 = SUB1613((undefined1[16])0x0, 0);
      uStack_4b = 0;
      uStack_48 = 0;
      if (uVar6 < 5) {
         pbVar8 = *(byte**)( this + 8 );
         if (pbVar8 < *(byte**)( this + 0x18 )) {
            *(byte**)( this + 8 ) = pbVar8 + 1;
            uVar10 = uVar10 | ( uint ) * pbVar8 << ( (byte)uVar6 & 0x1f );
         }

         uVar6 = uVar11 - 6;
      }

      uVar6 = uVar6 - 5;
      uVar11 = uVar10 >> 5;
      uVar4 = 0;
      *(uint*)( this + 0x20 ) = uVar11;
      *(uint*)( this + 0x24 ) = uVar6;
      if (( uVar10 & 0x1f ) - 1 < 0x15) {
         pbVar8 = &basisu::g_huffman_sorted_codelength_codes;
         do {
            uVar12 = uVar11;
            if (uVar6 < 3) {
               pbVar9 = *(byte**)( this + 8 );
               if (pbVar9 < *(byte**)( this + 0x18 )) {
                  *(byte**)( this + 8 ) = pbVar9 + 1;
                  uVar12 = uVar11 | ( uint ) * pbVar9 << ( (byte)uVar6 & 0x1f );
               }

               uVar6 = uVar6 + 8;
            }

            uVar6 = uVar6 - 3;
            uVar11 = uVar12 >> 3;
            pbVar9 = pbVar8 + 1;
            *(uint*)( this + 0x20 ) = uVar11;
            *(uint*)( this + 0x24 ) = uVar6;
            local_58[*pbVar8] = (byte)uVar12 & 7;
            pbVar8 = pbVar9;
         }
 while ( &basisu::g_huffman_sorted_codelength_codes + ( uVar10 & 0x1f ) != pbVar9 );
         local_88 = (void*)0x0;
         local_80 = 0;
         local_78 = (void*)0x0;
         local_70 = 0;
         local_68 = (void*)0x0;
         local_60 = 0;
         uVar4 = huffman_decoding_table::init((huffman_decoding_table*)&local_88, 0x15, local_58, 10);
         __ptr_01 = local_68;
         __ptr_00 = local_78;
         if ((char)uVar4 != '\0') {
            uVar4 = 0;
            if ((int)local_80 != 0) {
               local_98 = (uchar*)0x0;
               local_90 = 0;
               basisu::elemental_vector::increase_capacity((elemental_vector*)&local_98, uVar17, uVar17 == 1, 1, (_func_void_void_ptr_void_ptr_uint*)0x0, false);
               __ptr = local_98;
               memset(local_98 + ( local_90 & 0xffffffff ), 0, ( ulong )(uVar17 - (int)local_90));
               local_90 = CONCAT44(local_90._4_4_, uVar16) & 0xffffffff00003fff;
               uVar4 = 0;
               do {
                  uVar11 = *(uint*)( this + 0x24 );
                  uVar16 = *(uint*)( this + 0x20 );
                  if (uVar11 < 0x10) {
                     uVar6 = uVar11;
                     do {
                        pbVar8 = *(byte**)( this + 8 );
                        if (pbVar8 < *(byte**)( this + 0x18 )) {
                           *(byte**)( this + 8 ) = pbVar8 + 1;
                           uVar16 = uVar16 | ( uint ) * pbVar8 << ( (byte)uVar6 & 0x1f );
                        }

                        uVar6 = uVar6 + 8;
                        *(uint*)( this + 0x20 ) = uVar16;
                        *(uint*)( this + 0x24 ) = uVar6;
                     }
 while ( uVar6 < 0x10 );
                     uVar11 = uVar11 + 8 + ( 0xf - uVar11 & 0xfffffff8 );
                  }

                  uVar6 = *(uint*)( (long)__ptr_00 + ( ulong )(uVar16 & 0x3ff) * 4 );
                  if ((int)uVar6 < 0) {
                     iVar15 = 10;
                     do {
                        iVar14 = iVar15 + 1;
                        sVar2 = *(short*)( (long)__ptr_01 + ( ulong )(( ( uVar16 >> ( (byte)iVar15 & 0x1f ) & 1 ) - 1 ) - uVar6) * 2 );
                        uVar6 = (uint)sVar2;
                        iVar15 = iVar14;
                     }
 while ( sVar2 < 0 );
                  }
 else {
                     iVar14 = (int)uVar6 >> 0x10;
                     uVar6 = uVar6 & 0xffff;
                  }

                  uVar11 = uVar11 - iVar14;
                  uVar16 = uVar16 >> ( (byte)iVar14 & 0x1f );
                  *(uint*)( this + 0x24 ) = uVar11;
                  *(uint*)( this + 0x20 ) = uVar16;
                  iVar15 = (int)uVar4;
                  if ((int)uVar6 < 0x11) {
                     uVar13 = ( ulong )(iVar15 + 1);
                     __ptr[uVar4] = (uchar)uVar6;
                  }
 else {
                     bVar5 = (byte)uVar11;
                     if (uVar6 == 0x11) {
                        if (uVar11 < 3) {
                           pbVar8 = *(byte**)( this + 8 );
                           if (pbVar8 < *(byte**)( this + 0x18 )) {
                              *(byte**)( this + 8 ) = pbVar8 + 1;
                              uVar16 = uVar16 | ( uint ) * pbVar8 << ( bVar5 & 0x1f );
                           }

                           uVar11 = uVar11 + 8;
                        }

                        *(uint*)( this + 0x24 ) = uVar11 - 3;
                        uVar13 = ( ulong )(iVar15 + 3 + ( uVar16 & 7 ));
                        *(uint*)( this + 0x20 ) = uVar16 >> 3;
                     }
 else if (uVar6 == 0x12) {
                        if (uVar11 < 7) {
                           pbVar8 = *(byte**)( this + 8 );
                           if (pbVar8 < *(byte**)( this + 0x18 )) {
                              *(byte**)( this + 8 ) = pbVar8 + 1;
                              uVar16 = uVar16 | ( uint ) * pbVar8 << ( bVar5 & 0x1f );
                           }

                           uVar11 = uVar11 + 8;
                        }

                        *(uint*)( this + 0x24 ) = uVar11 - 7;
                        uVar13 = ( ulong )(iVar15 + 0xb + ( uVar16 & 0x7f ));
                        *(uint*)( this + 0x20 ) = uVar16 >> 7;
                     }
 else {
                        if (iVar15 == 0) goto LAB_0012c546;
                        if (uVar6 == 0x13) {
                           if (uVar11 < 2) {
                              pbVar8 = *(byte**)( this + 8 );
                              if (pbVar8 < *(byte**)( this + 0x18 )) {
                                 *(byte**)( this + 8 ) = pbVar8 + 1;
                                 uVar16 = uVar16 | ( uint ) * pbVar8 << ( bVar5 & 0x1f );
                              }

                              uVar11 = uVar11 + 8;
                           }

                           iVar14 = uVar11 - 2;
                           uVar11 = uVar16 >> 2;
                           iVar3 = ( uVar16 & 3 ) + 3;
                        }
 else {
                           if (uVar11 < 7) {
                              pbVar8 = *(byte**)( this + 8 );
                              if (pbVar8 < *(byte**)( this + 0x18 )) {
                                 *(byte**)( this + 8 ) = pbVar8 + 1;
                                 uVar16 = uVar16 | ( uint ) * pbVar8 << ( bVar5 & 0x1f );
                              }

                              uVar11 = uVar11 + 8;
                           }

                           iVar14 = uVar11 - 7;
                           uVar11 = uVar16 >> 7;
                           iVar3 = ( uVar16 & 0x7f ) + 7;
                        }

                        *(uint*)( this + 0x20 ) = uVar11;
                        *(int*)( this + 0x24 ) = iVar14;
                        uVar1 = __ptr[iVar15 - 1];
                        if (uVar1 == '\0') goto LAB_0012c546;
                        puVar7 = __ptr + uVar4;
                        uVar13 = uVar4;
                        do {
                           if (uVar17 <= (uint)uVar13) goto LAB_0012c546;
                           uVar11 = (uint)uVar13 + 1;
                           uVar13 = (ulong)uVar11;
                           *puVar7 = uVar1;
                           puVar7 = puVar7 + 1;
                        }
 while ( uVar11 != iVar3 + iVar15 );
                     }

                  }

                  uVar4 = uVar13;
               }
 while ( (uint)uVar13 < uVar17 );
               if (uVar17 == (uint)uVar13) {
                  uVar4 = huffman_decoding_table::init(param_1, uVar17, __ptr, 10);
               }
 else {
                  LAB_0012c546:uVar4 = 0;
               }

               if (__ptr != (uchar*)0x0) {
                  free(__ptr);
                  uVar4 = uVar4 & 0xff;
               }

            }

         }

         if (__ptr_01 != (void*)0x0) {
            free(__ptr_01);
            uVar4 = uVar4 & 0xff;
         }

         if (__ptr_00 != (void*)0x0) {
            free(__ptr_00);
            uVar4 = uVar4 & 0xff;
         }

         if (local_88 != (void*)0x0) {
            free(local_88);
            uVar4 = uVar4 & 0xff;
         }

      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
}
/* astc_helpers::dequant_bise_weight(unsigned int, unsigned int) [clone .cold] */void astc_helpers::dequant_bise_weight(uint param_1, uint param_2) {
   FUN_001066e6();
   return;
}
/* astc_helpers::dequant_tables::init(bool) */void astc_helpers::dequant_tables::init(dequant_tables *this, bool param_1) {
   elemental_vector *peVar1;
   uchar *puVar2;
   uchar *puVar3;
   uchar *puVar4;
   byte *pbVar5;
   elemental_vector *peVar6;
   dequant_tables *this_00;
   uint uVar7;
   uint uVar8;
   uint uVar9;
   pbVar5 = &g_ise_range_table;
   this_00 = this;
   uVar9 = 0;
   do {
      uVar8 = *(uint*)( (elemental_vector*)this_00 + 8 );
      uVar7 = (char)pbVar5[2] * 4 + 1 + (char)pbVar5[1] * 2 << ( *pbVar5 & 0x1f );
      if (uVar8 != 0x41) {
         if (uVar8 < 0x42) {
            if (*(uint*)( (elemental_vector*)this_00 + 0xc ) < 0x41) {
               basisu::elemental_vector::increase_capacity((elemental_vector*)this_00, 0x41, uVar8 == 0x40, 1, (_func_void_void_ptr_void_ptr_uint*)0x0, false);
               uVar8 = *(uint*)( (elemental_vector*)this_00 + 8 );
            }

            memset((void*)( (ulong)uVar8 + *(long*)this_00 ), 0, ( ulong )(0x41 - uVar8));
         }

         *(undefined4*)( (elemental_vector*)this_00 + 8 ) = 0x41;
      }

      uVar8 = *(uint*)( (elemental_vector*)this_00 + 0x18 );
      if (uVar7 != uVar8) {
         if (uVar8 <= uVar7) {
            if (*(uint*)( (elemental_vector*)this_00 + 0x1c ) < uVar7) {
               basisu::elemental_vector::increase_capacity((elemental_vector*)this_00 + 0x10, uVar7, uVar8 + 1 == uVar7, 1, (_func_void_void_ptr_void_ptr_uint*)0x0, false);
               uVar8 = *(uint*)( (elemental_vector*)this_00 + 0x18 );
            }

            memset((void*)( (ulong)uVar8 + *(long*)( (elemental_vector*)this_00 + 0x10 ) ), 0, ( ulong )(uVar7 - uVar8));
         }

         *(uint*)( (elemental_vector*)this_00 + 0x18 ) = uVar7;
      }

      puVar3 = (uchar*)0x0;
      puVar4 = (uchar*)0x0;
      if (param_1) {
         uVar8 = *(uint*)( (elemental_vector*)this_00 + 0x28 );
         if (uVar7 != uVar8) {
            if (uVar8 <= uVar7) {
               if (*(uint*)( (elemental_vector*)this_00 + 0x2c ) < uVar7) {
                  basisu::elemental_vector::increase_capacity((elemental_vector*)this_00 + 0x20, uVar7, uVar8 + 1 == uVar7, 1, (_func_void_void_ptr_void_ptr_uint*)0x0, false);
                  uVar8 = *(uint*)( (elemental_vector*)this_00 + 0x28 );
               }

               memset((void*)( (ulong)uVar8 + *(long*)( (elemental_vector*)this_00 + 0x20 ) ), 0, ( ulong )(uVar7 - uVar8));
            }

            *(uint*)( (elemental_vector*)this_00 + 0x28 ) = uVar7;
         }

         uVar8 = *(uint*)( (elemental_vector*)this_00 + 0x38 );
         if (uVar7 != uVar8) {
            if (uVar8 <= uVar7) {
               if (*(uint*)( (elemental_vector*)this_00 + 0x3c ) < uVar7) {
                  basisu::elemental_vector::increase_capacity((elemental_vector*)this_00 + 0x30, uVar7, uVar8 + 1 == uVar7, 1, (_func_void_void_ptr_void_ptr_uint*)0x0, false);
                  uVar8 = *(uint*)( (elemental_vector*)this_00 + 0x38 );
               }

               memset((void*)( (ulong)uVar8 + *(long*)( (elemental_vector*)this_00 + 0x30 ) ), 0, ( ulong )(uVar7 - uVar8));
            }

            *(uint*)( (elemental_vector*)this_00 + 0x38 ) = uVar7;
         }

         puVar3 = *(uchar**)( (elemental_vector*)this_00 + 0x30 );
         puVar4 = *(uchar**)( (elemental_vector*)this_00 + 0x20 );
      }

      peVar6 = (elemental_vector*)this_00 + 0x10;
      puVar2 = *(uchar**)this_00;
      uVar8 = uVar9 + 1;
      pbVar5 = pbVar5 + 3;
      this_00 = (dequant_tables*)( (elemental_vector*)this_00 + 0x40 );
      create_quant_tables(puVar2, *(uchar**)peVar6, puVar4, puVar3, uVar9, true);
      uVar9 = uVar8;
   }
 while ( uVar8 != 0xc );
   pbVar5 = &DAT_0017fe2c;
   peVar6 = (elemental_vector*)( this + 0x300 );
   uVar9 = 4;
   do {
      uVar8 = *(uint*)( peVar6 + 8 );
      uVar7 = (char)pbVar5[2] * 4 + 1 + (char)pbVar5[1] * 2 << ( *pbVar5 & 0x1f );
      if (uVar8 != 0x100) {
         if (uVar8 < 0x101) {
            if (*(uint*)( peVar6 + 0xc ) < 0x100) {
               basisu::elemental_vector::increase_capacity(peVar6, 0x100, uVar8 == 0xff, 1, (_func_void_void_ptr_void_ptr_uint*)0x0, false);
               uVar8 = *(uint*)( peVar6 + 8 );
            }

            memset((void*)( (ulong)uVar8 + *(long*)peVar6 ), 0, ( ulong )(0x100 - uVar8));
         }

         *(undefined4*)( peVar6 + 8 ) = 0x100;
      }

      uVar8 = *(uint*)( peVar6 + 0x18 );
      if (uVar7 != uVar8) {
         if (uVar8 <= uVar7) {
            if (*(uint*)( peVar6 + 0x1c ) < uVar7) {
               basisu::elemental_vector::increase_capacity(peVar6 + 0x10, uVar7, uVar8 + 1 == uVar7, 1, (_func_void_void_ptr_void_ptr_uint*)0x0, false);
               uVar8 = *(uint*)( peVar6 + 0x18 );
            }

            memset((void*)( (ulong)uVar8 + *(long*)( peVar6 + 0x10 ) ), 0, ( ulong )(uVar7 - uVar8));
         }

         *(uint*)( peVar6 + 0x18 ) = uVar7;
      }

      puVar3 = (uchar*)0x0;
      puVar4 = (uchar*)0x0;
      if (param_1) {
         uVar8 = *(uint*)( peVar6 + 0x28 );
         if (uVar7 != uVar8) {
            if (uVar8 <= uVar7) {
               if (*(uint*)( peVar6 + 0x2c ) < uVar7) {
                  basisu::elemental_vector::increase_capacity(peVar6 + 0x20, uVar7, uVar8 + 1 == uVar7, 1, (_func_void_void_ptr_void_ptr_uint*)0x0, false);
                  uVar8 = *(uint*)( peVar6 + 0x28 );
               }

               memset((void*)( (ulong)uVar8 + *(long*)( peVar6 + 0x20 ) ), 0, ( ulong )(uVar7 - uVar8));
            }

            *(uint*)( peVar6 + 0x28 ) = uVar7;
         }

         uVar8 = *(uint*)( peVar6 + 0x38 );
         if (uVar7 != uVar8) {
            if (uVar8 <= uVar7) {
               if (*(uint*)( peVar6 + 0x3c ) < uVar7) {
                  basisu::elemental_vector::increase_capacity(peVar6 + 0x30, uVar7, uVar8 + 1 == uVar7, 1, (_func_void_void_ptr_void_ptr_uint*)0x0, false);
                  uVar8 = *(uint*)( peVar6 + 0x38 );
               }

               memset((void*)( (ulong)uVar8 + *(long*)( peVar6 + 0x30 ) ), 0, ( ulong )(uVar7 - uVar8));
            }

            *(uint*)( peVar6 + 0x38 ) = uVar7;
         }

         puVar3 = *(uchar**)( peVar6 + 0x30 );
         puVar4 = *(uchar**)( peVar6 + 0x20 );
      }

      peVar1 = peVar6 + 0x10;
      puVar2 = *(uchar**)peVar6;
      uVar8 = uVar9 + 1;
      pbVar5 = pbVar5 + 3;
      peVar6 = peVar6 + 0x40;
      create_quant_tables(puVar2, *(uchar**)peVar1, puVar4, puVar3, uVar9, false);
      uVar9 = uVar8;
   }
 while ( uVar8 != 0x15 );
   return;
}
/* astc_helpers::dequant_tables::dequant_tables() */void astc_helpers::dequant_tables::dequant_tables(dequant_tables *this) {
   dequant_tables *pdVar1;
   dequant_tables *pdVar2;
   pdVar2 = this + 8;
   do {
      *(undefined8*)( pdVar2 + -8 ) = 0;
      pdVar1 = pdVar2 + 0x100;
      for (int i = 0; i < 3; i++) {
         *(undefined8*)( pdVar2 + ( 64*i + 56 ) ) = 0;
      }

      *(undefined8*)pdVar2 = 0;
      for (int i = 0; i < 3; i++) {
         *(undefined8*)( pdVar2 + ( 64*i + 64 ) ) = 0;
      }

      for (int i = 0; i < 6; i++) {
         for (int j = 0; j < 3; j++) {
            *(undefined8*)( pdVar2 + ( 8*i + ( 64*j + 8 ) ) ) = 0;
         }

         *(undefined8*)( pdVar2 + ( 8*i + 200 ) ) = 0;
      }

      pdVar2 = pdVar1;
   }
 while ( pdVar1 != this + 0x308 );
   pdVar2 = this + 0x300;
   do {
      *(undefined8*)pdVar2 = 0;
      pdVar1 = pdVar2 + 0x40;
      for (int i = 0; i < 7; i++) {
         *(undefined8*)( pdVar2 + ( 8*i + 8 ) ) = 0;
      }

      pdVar2 = pdVar1;
   }
 while ( this + 0x740 != pdVar1 );
   return;
}
/* basist::decoder_etc_block::get_block_colors(basist::color32*, unsigned int) const */void basist::decoder_etc_block::get_block_colors(decoder_etc_block *this, color32 *param_1, uint param_2) {
   decoder_etc_block dVar1;
   char cVar2;
   sbyte sVar3;
   ushort uVar4;
   ulong uVar5;
   uint uVar6;
   uint uVar7;
   ushort uVar8;
   uint uVar9;
   int iVar10;
   color32 cVar11;
   uint uVar12;
   int iVar13;
   uint uVar14;
   uint uVar15;
   if (( (byte)this[3] & 2 ) == 0) {
      if (param_2 == 0) {
         uVar9 = (int)( uint )(byte) * this >> 4;
         uVar14 = (int)(uint)(byte)this[2] >> 4;
         uVar6 = (int)(uint)(byte)this[1] >> 4;
      }
 else {
         uVar9 = ( byte ) * this & 0xf;
         uVar14 = (byte)this[2] & 0xf;
         uVar6 = (byte)this[1] & 0xf;
      }

      uVar6 = uVar6 * 0x11;
      uVar9 = uVar9 * 0x11;
      uVar14 = uVar14 * 0x11;
      sVar3 = ( -(param_2 == 0) & 3U ) + 2;
   }
 else if (param_2 == 0) {
      uVar8 = ( ushort )(( (int)( uint )(byte) * this >> 3 ) << 10);
      uVar6 = ( (int)(uint)(byte)this[1] >> 3 ) * 8 | ( uint )((int)(uint)(byte)this[1] >> 3) >> 2;
      uVar9 = ( uint )(uVar8 >> 10) * 8 | ( uint )(uVar8 >> 0xc);
      sVar3 = 5;
      uVar14 = (byte)this[2] & 0xf8 | ( uint )((byte)this[2] >> 5);
   }
 else {
      dVar1 = this[2];
      uVar6 = ( (byte)this[1] & 7 ) << 3;
      uVar8 = ( ushort )(( ( byte ) * this & 7 ) << 6);
      uVar4 = uVar8 >> 6;
      uVar8 = ( ushort )((ushort)uVar6 | uVar8) >> 3;
      uVar14 = (uint)uVar4;
      if (3 < uVar4) {
         uVar14 = uVar4 | 0xfffffff8;
      }

      uVar9 = uVar8 & 7;
      if (( uVar6 & 0x20 ) != 0) {
         uVar9 = uVar8 | 0xfffffff8;
      }

      uVar7 = (byte)dVar1 & 7;
      if (( (byte)dVar1 & 4 ) != 0) {
         uVar7 = (byte)dVar1 | 0xfffffff8;
      }

      uVar14 = ( ( ushort )(( ( byte ) * this & 0xf8 ) << 7) >> 10 ) + uVar14;
      uVar7 = ( (int)(uint)(byte)dVar1 >> 3 ) + uVar7;
      uVar9 = ( ( ushort )(( (byte)this[1] & 0xf8 ) << 2) >> 5 ) + uVar9;
      if (0x1f < ( uVar14 | uVar9 | uVar7 )) {
         if (0x1f < (int)uVar14) {
            uVar14 = 0x1f;
         }

         if ((int)uVar14 < 0) {
            uVar14 = 0;
         }

         if (0x1f < (int)uVar9) {
            uVar9 = 0x1f;
         }

         if ((int)uVar9 < 0) {
            uVar9 = 0;
         }

         if (0x1f < (int)uVar7) {
            uVar7 = 0x1f;
         }

         if ((int)uVar7 < 0) {
            uVar7 = 0;
         }

      }

      uVar6 = uVar9 * 8 | (int)uVar9 >> 2;
      uVar9 = uVar14 * 8 | (int)uVar14 >> 2;
      sVar3 = 2;
      uVar14 = uVar7 * 8 | (int)uVar7 >> 2;
   }

   uVar6 = uVar6 & 0xff;
   uVar5 = ( ulong )((int)(uint)(byte)this[3] >> sVar3 & 7);
   uVar14 = uVar14 & 0xff;
   iVar13 = ( &g_etc1_inten_tables )[uVar5 * 4];
   uVar7 = uVar14 + iVar13;
   uVar15 = iVar13 + uVar6;
   if (uVar7 < 0x100) {
      if (uVar15 < 0x100) {
         uVar12 = iVar13 + ( uVar9 & 0xff );
         if (uVar12 < 0x100) goto LAB_0018087d;
         cVar11 = (color32)0xff;
         if ((int)uVar12 < 0) goto LAB_001804cd;
      }
 else {
         if (-1 < (int)uVar15) goto LAB_00180552;
         LAB_00180573:uVar12 = iVar13 + ( uVar9 & 0xff );
         uVar15 = 0;
         if (uVar12 < 0x100) {
            uVar15 = uVar12;
         }

         cVar11 = SUB41(uVar15, 0);
         uVar15 = 0;
      }

   }
 else if ((int)uVar7 < 0) {
      if (0xff < uVar15) {
         uVar7 = 0;
         goto LAB_00180573;
      }

      uVar7 = 0;
      uVar12 = iVar13 + ( uVar9 & 0xff );
      if (uVar12 < 0x100) {
         LAB_0018087d:cVar11 = SUB41(uVar12, 0);
      }
 else {
         LAB_001804cd:cVar11 = (color32)0x0;
      }

   }
 else if ((int)uVar15 < 0x100) {
      uVar7 = 0xffffffff;
      cVar11 = (color32)0xff;
      uVar12 = iVar13 + ( uVar9 & 0xff );
      if ((int)uVar12 < 0x100) goto LAB_0018087d;
   }
 else {
      uVar7 = 0xffffffff;
      LAB_00180552:uVar15 = 0xffffffff;
      iVar13 = iVar13 + ( uVar9 & 0xff );
      iVar10 = 0xff;
      if (iVar13 < 0x100) {
         iVar10 = iVar13;
      }

      cVar11 = SUB41(iVar10, 0);
   }

   uVar12 = uVar9 & 0xff;
   param_1[1] = SUB41(uVar15, 0);
   param_1[2] = SUB41(uVar7, 0);
   *param_1 = cVar11;
   param_1[3] = (color32)0xff;
   iVar13 = ( &DAT_0017f444 )[uVar5 * 4];
   uVar7 = uVar14 + iVar13;
   uVar15 = iVar13 + uVar6;
   cVar2 = (char)uVar9;
   if (uVar7 < 0x100) {
      if (uVar15 < 0x100) {
         if (iVar13 + uVar12 < 0x100) goto LAB_00180819;
         cVar11 = (color32)0xff;
         if ((int)( iVar13 + uVar12 ) < 0) goto LAB_001805d4;
      }
 else {
         if (-1 < (int)uVar15) goto LAB_001805f2;
         LAB_00180613:uVar9 = 0;
         if (iVar13 + uVar12 < 0x100) {
            uVar9 = iVar13 + uVar12;
         }

         cVar11 = SUB41(uVar9, 0);
         uVar15 = 0;
      }

   }
 else if ((int)uVar7 < 0) {
      if (0xff < uVar15) {
         uVar7 = 0;
         goto LAB_00180613;
      }

      uVar7 = 0;
      if (iVar13 + uVar12 < 0x100) {
         LAB_00180819:cVar11 = ( color32 )((char)iVar13 + cVar2);
      }
 else {
         LAB_001805d4:cVar11 = (color32)0x0;
      }

   }
 else if ((int)uVar15 < 0x100) {
      uVar7 = 0xffffffff;
      cVar11 = (color32)0xff;
      if ((int)( iVar13 + uVar12 ) < 0x100) goto LAB_00180819;
   }
 else {
      uVar7 = 0xffffffff;
      LAB_001805f2:uVar15 = 0xffffffff;
      iVar10 = 0xff;
      if ((int)( iVar13 + uVar12 ) < 0x100) {
         iVar10 = iVar13 + uVar12;
      }

      cVar11 = SUB41(iVar10, 0);
   }

   param_1[5] = SUB41(uVar15, 0);
   param_1[6] = SUB41(uVar7, 0);
   param_1[4] = cVar11;
   param_1[7] = (color32)0xff;
   iVar13 = ( &DAT_0017f448 )[uVar5 * 4];
   uVar9 = uVar14 + iVar13;
   uVar7 = iVar13 + uVar6;
   if (uVar9 < 0x100) {
      if (uVar7 < 0x100) {
         if (iVar13 + uVar12 < 0x100) goto LAB_001807b9;
         cVar11 = (color32)0xff;
         if ((int)( iVar13 + uVar12 ) < 0) goto LAB_00180671;
      }
 else {
         if (-1 < (int)uVar7) goto LAB_00180692;
         LAB_001806b3:uVar7 = 0;
         if (iVar13 + uVar12 < 0x100) {
            uVar7 = iVar13 + uVar12;
         }

         cVar11 = SUB41(uVar7, 0);
         uVar7 = 0;
      }

   }
 else if ((int)uVar9 < 0) {
      if (0xff < uVar7) {
         uVar9 = 0;
         goto LAB_001806b3;
      }

      uVar9 = 0;
      if (iVar13 + uVar12 < 0x100) {
         LAB_001807b9:cVar11 = ( color32 )((char)iVar13 + cVar2);
      }
 else {
         LAB_00180671:cVar11 = (color32)0x0;
      }

   }
 else if ((int)uVar7 < 0x100) {
      uVar9 = 0xffffffff;
      cVar11 = (color32)0xff;
      if ((int)( iVar13 + uVar12 ) < 0x100) goto LAB_001807b9;
   }
 else {
      uVar9 = 0xffffffff;
      LAB_00180692:uVar7 = 0xffffffff;
      iVar10 = 0xff;
      if ((int)( iVar13 + uVar12 ) < 0x100) {
         iVar10 = iVar13 + uVar12;
      }

      cVar11 = SUB41(iVar10, 0);
   }

   param_1[8] = cVar11;
   param_1[9] = SUB41(uVar7, 0);
   param_1[10] = SUB41(uVar9, 0);
   param_1[0xb] = (color32)0xff;
   iVar13 = ( &DAT_0017f44c )[uVar5 * 4];
   uVar14 = uVar14 + iVar13;
   uVar6 = uVar6 + iVar13;
   if (uVar14 < 0x100) {
      if (0xff < uVar6) {
         if (-1 < (int)uVar6) goto LAB_0018072c;
         LAB_001806f8:uVar6 = 0;
         if (iVar13 + uVar12 < 0x100) {
            uVar6 = iVar13 + uVar12;
         }

         cVar11 = SUB41(uVar6, 0);
         uVar6 = 0;
         goto LAB_00180707;
      }

      if (0xff < iVar13 + uVar12) {
         cVar11 = (color32)0xff;
         if (-1 < (int)( iVar13 + uVar12 )) goto LAB_00180707;
         LAB_00180753:cVar11 = (color32)0x0;
         goto LAB_00180707;
      }

   }
 else if ((int)uVar14 < 0) {
      if (0xff < uVar6) {
         uVar14 = 0;
         goto LAB_001806f8;
      }

      uVar14 = 0;
      if (0xff < iVar13 + uVar12) goto LAB_00180753;
   }
 else {
      if (0xff < (int)uVar6) {
         uVar14 = 0xffffffff;
         LAB_0018072c:uVar6 = 0xffffffff;
         iVar10 = 0xff;
         if ((int)( iVar13 + uVar12 ) < 0x100) {
            iVar10 = iVar13 + uVar12;
         }

         cVar11 = SUB41(iVar10, 0);
         goto LAB_00180707;
      }

      uVar14 = 0xffffffff;
      cVar11 = (color32)0xff;
      if (0xff < (int)( iVar13 + uVar12 )) goto LAB_00180707;
   }

   cVar11 = ( color32 )((char)iVar13 + cVar2);
   LAB_00180707:param_1[0xc] = cVar11;
   param_1[0xd] = SUB41(uVar6, 0);
   param_1[0xe] = SUB41(uVar14, 0);
   param_1[0xf] = (color32)0xff;
   return;
}
/* basisu::vector<basist::ktx2_transcoder::key_value>::try_reserve(unsigned long) */undefined8 basisu::vector<basist::ktx2_transcoder::key_value>::try_reserve(vector<basist::ktx2_transcoder::key_value> *this, ulong param_1) {
   uint uVar1;
   char cVar2;
   uint uVar3;
   undefined8 uVar4;
   elemental_vector *peVar5;
   elemental_vector *peVar6;
   elemental_vector *peVar7;
   elemental_vector *peVar8;
   elemental_vector *peVar9;
   uint uVar10;
   ulong uVar11;
   long in_FS_OFFSET;
   elemental_vector *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 >> 0x20 == 0) {
      uVar10 = (uint)param_1;
      if (*(uint*)( this + 0xc ) < uVar10) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar4 = elemental_vector::increase_capacity((elemental_vector*)this, uVar10, false, 0x20, object_mover, true);
            return uVar4;
         }

         goto LAB_00180f5b;
      }

      if (uVar10 < *(uint*)( this + 0xc )) {
         local_58 = (elemental_vector*)0x0;
         local_50 = 0;
         uVar3 = *(uint*)( this + 8 );
         if (*(uint*)( this + 8 ) <= uVar10) {
            uVar3 = uVar10;
         }

         cVar2 = elemental_vector::increase_capacity((elemental_vector*)&local_58, uVar3, false, 0x20, object_mover, true);
         peVar7 = local_58;
         if (cVar2 == '\0') {
            if (local_58 != (elemental_vector*)0x0) {
               peVar5 = local_58 + ( local_50 & 0xffffffff ) * 0x20;
               for (peVar6 = local_58; peVar6 != peVar5; peVar6 = peVar6 + 0x20) {
                  if (*(void**)( peVar6 + 0x10 ) != (void*)0x0) {
                     free(*(void**)( peVar6 + 0x10 ));
                  }

                  if (*(void**)peVar6 != (void*)0x0) {
                     free(*(void**)peVar6);
                  }

               }

               free(peVar7);
            }

            goto LAB_00180d80;
         }

         uVar3 = local_50._4_4_;
         uVar10 = *(uint*)( this + 8 );
         if (local_50._4_4_ < uVar10) {
            if (local_58 != (elemental_vector*)0x0) {
               peVar5 = local_58 + ( local_50 & 0xffffffff ) * 0x20;
               for (peVar6 = local_58; peVar6 != peVar5; peVar6 = peVar6 + 0x20) {
                  if (*(void**)( peVar6 + 0x10 ) != (void*)0x0) {
                     free(*(void**)( peVar6 + 0x10 ));
                  }

                  if (*(void**)peVar6 != (void*)0x0) {
                     free(*(void**)peVar6);
                  }

               }

               free(peVar7);
               local_58 = (elemental_vector*)0x0;
               uVar10 = *(uint*)( this + 8 );
               local_50 = 0;
            }

            elemental_vector::increase_capacity((elemental_vector*)&local_58, uVar10, false, 0x20, object_mover, false);
            peVar7 = local_58;
            uVar3 = local_50._4_4_;
            LAB_00180e14:uVar10 = *(uint*)( this + 8 );
         }
 else if ((int)local_50 != 0) {
            peVar6 = local_58 + ( local_50 & 0xffffffff ) * 0x20;
            peVar5 = local_58;
            do {
               if (*(void**)( peVar5 + 0x10 ) != (void*)0x0) {
                  free(*(void**)( peVar5 + 0x10 ));
               }

               if (*(void**)peVar5 != (void*)0x0) {
                  free(*(void**)peVar5);
               }

               peVar5 = peVar5 + 0x20;
            }
 while ( peVar6 != peVar5 );
            goto LAB_00180e14;
         }

         peVar6 = *(elemental_vector**)this;
         if (uVar10 == 0) {
            *(elemental_vector**)this = peVar7;
            *(uint*)( this + 0xc ) = uVar3;
            if (peVar6 != (elemental_vector*)0x0) goto LAB_00180f34;
         }
 else {
            peVar5 = peVar7;
            peVar8 = peVar6;
            do {
               *(undefined8*)peVar5 = 0;
               uVar1 = *(uint*)( peVar8 + 8 );
               peVar9 = peVar8 + 0x20;
               *(undefined8*)( peVar5 + 8 ) = 0;
               elemental_vector::increase_capacity(peVar5, uVar1, false, 1, (_func_void_void_ptr_void_ptr_uint*)0x0, false);
               uVar1 = *(uint*)( peVar8 + 8 );
               *(uint*)( peVar5 + 8 ) = uVar1;
               if (( *(void**)peVar5 != (void*)0x0 ) && ( *(void**)peVar8 != (void*)0x0 )) {
                  memcpy(*(void**)peVar5, *(void**)peVar8, (ulong)uVar1);
               }

               *(undefined8*)( peVar5 + 0x10 ) = 0;
               uVar1 = *(uint*)( peVar8 + 0x18 );
               *(undefined8*)( peVar5 + 0x18 ) = 0;
               elemental_vector::increase_capacity(peVar5 + 0x10, uVar1, false, 1, (_func_void_void_ptr_void_ptr_uint*)0x0, false);
               uVar1 = *(uint*)( peVar8 + 0x18 );
               *(uint*)( peVar5 + 0x18 ) = uVar1;
               if (( *(void**)( peVar5 + 0x10 ) != (void*)0x0 ) && ( *(void**)( peVar8 + 0x10 ) != (void*)0x0 )) {
                  memcpy(*(void**)( peVar5 + 0x10 ), *(void**)( peVar8 + 0x10 ), (ulong)uVar1);
               }

               peVar5 = peVar5 + 0x20;
               peVar8 = peVar9;
            }
 while ( peVar9 != peVar6 + (ulong)uVar10 * 0x20 );
            local_50 = *(ulong*)( this + 8 );
            peVar6 = *(elemental_vector**)this;
            *(uint*)( this + 0xc ) = uVar3;
            *(elemental_vector**)this = peVar7;
            local_58 = peVar6;
            if (peVar6 != (elemental_vector*)0x0) {
               uVar11 = local_50 & 0xffffffff;
               for (peVar7 = peVar6; peVar7 != peVar6 + uVar11 * 0x20; peVar7 = peVar7 + 0x20) {
                  if (*(void**)( peVar7 + 0x10 ) != (void*)0x0) {
                     free(*(void**)( peVar7 + 0x10 ));
                  }

                  if (*(void**)peVar7 != (void*)0x0) {
                     free(*(void**)peVar7);
                  }

               }

               LAB_00180f34:free(peVar6);
            }

         }

      }

      uVar4 = 1;
   }
 else {
      LAB_00180d80:uVar4 = 0;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   LAB_00180f5b:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* basisu::elemental_vector::increase_capacity(unsigned int, bool, unsigned int, void (*)(void*,
   void*, unsigned int), bool) */void basisu::elemental_vector::_GLOBAL__sub_I_increase_capacity(void) {
   astc_helpers::dequant_tables::dequant_tables((dequant_tables*)astc_helpers::g_dequant_tables);
   __cxa_atexit(astc_helpers::dequant_tables::~dequant_tables, astc_helpers::g_dequant_tables, &__dso_handle);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* astc_helpers::dequant_tables::~dequant_tables() */void astc_helpers::dequant_tables::~dequant_tables(dequant_tables *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* astc_helpers::dequant_tables::dequant_tables() */void astc_helpers::dequant_tables::dequant_tables(dequant_tables *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

