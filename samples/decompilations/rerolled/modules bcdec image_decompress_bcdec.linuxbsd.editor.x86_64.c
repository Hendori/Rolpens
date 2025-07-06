/* bcdec__color_block(void const*, void*, int, int) */void bcdec__color_block(void *param_1, void *param_2, int param_3, int param_4) {
   ushort uVar1;
   ushort uVar2;
   ushort uVar3;
   ushort uVar4;
   ulong uVar5;
   uint uVar6;
   uint uVar7;
   uint *puVar8;
   ulong uVar9;
   uint uVar10;
   uint uVar11;
   uint *puVar12;
   uint *puVar13;
   int iVar14;
   uint uVar15;
   long in_FS_OFFSET;
   uint local_48[6];
   long local_30;
   /* WARNING: Load size is inaccurate */
   uVar1 = *param_1;
   uVar2 = *(ushort*)( (long)param_1 + 2 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = uVar1 >> 0xb;
   uVar11 = uVar1 & 0x1f;
   uVar6 = uVar1 >> 5 & 0x3f;
   uVar4 = uVar2 >> 0xb;
   uVar15 = uVar2 & 0x1f;
   uVar10 = uVar2 >> 5 & 0x3f;
   local_48[0] = uVar6 * 0x40c + 0x84 & 0x3ff00 | (uint)uVar3 * 0x20f + 0x17 >> 6 | ( uVar11 * 0x20f + 0x17 >> 6 ) << 0x10 | 0xff000000;
   local_48[1] = uVar10 * 0x40c + 0x84 & 0x3ff00 | (uint)uVar4 * 0x20f + 0x17 >> 6 | ( uVar15 * 0x20f + 0x17 >> 6 ) << 0x10 | 0xff000000;
   if (( uVar2 < uVar1 ) || ( ( param_4 & 1U ) != 0 )) {
      uVar7 = ( ( uVar10 + uVar6 * 2 ) * 0xacb + 0x40f >> 0xb ) << 8 | ( (uint)uVar4 + (uint)uVar3 * 2 ) * 0x15f + 0x3d >> 7 | ( ( uVar15 + uVar11 * 2 ) * 0x15f + 0x3d >> 7 ) << 0x10;
      local_48[3] = ( ( uVar6 + uVar10 * 2 ) * 0xacb + 0x40f >> 0xb ) << 8 | ( (uint)uVar3 + (uint)uVar4 * 2 ) * 0x15f + 0x3d >> 7 | ( ( uVar11 + uVar15 * 2 ) * 0x15f + 0x3d >> 7 ) << 0x10 | 0xff000000;
   }
 else {
      uVar7 = ( ( uVar6 + uVar10 ) * 0x1031 + 0x3fb >> 0xb ) << 8 | ( (uint)uVar3 + (uint)uVar4 ) * 0x41d + 0x7d >> 8 | ( ( uVar11 + uVar15 ) * 0x41d + 0x7d >> 8 ) << 0x10;
      local_48[3] = 0;
   }

   puVar12 = (uint*)( (long)param_2 + 0x10 );
   local_48[2] = uVar7 | 0xff000000;
   iVar14 = 4;
   uVar9 = ( ulong ) * (uint*)( (long)param_1 + 4 );
   puVar13 = (uint*)param_2;
   do {
      do {
         puVar8 = (uint*)( (long)param_2 + 4 );
         uVar5 = uVar9 >> 2;
         *(uint*)param_2 = local_48[(uint)uVar9 & 3];
         param_2 = puVar8;
         uVar9 = uVar5;
      }
 while ( puVar12 != puVar8 );
      param_2 = (void*)( (long)puVar13 + (long)param_3 );
      puVar12 = (uint*)( (long)puVar12 + (long)param_3 );
      iVar14 = iVar14 + -1;
      puVar13 = (uint*)param_2;
   }
 while ( iVar14 != 0 );
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* bcdec__smooth_alpha_block(void const*, void*, int, int) */void bcdec__smooth_alpha_block(void *param_1, void *param_2, int param_3, int param_4) {
   byte bVar3;
   ulong uVar1;
   ulong uVar2;
   undefined1 *puVar4;
   uint uVar5;
   uint uVar6;
   uint uVar7;
   byte bVar8;
   byte bVar9;
   int iVar10;
   byte bVar11;
   int iVar12;
   int iVar13;
   uint uVar14;
   uint uVar15;
   uint uVar16;
   long in_FS_OFFSET;
   ulong local_48;
   long local_40;
   /* WARNING: Load size is inaccurate */
   uVar2 = *param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   bVar3 = ( byte )(uVar2 >> 8);
   uVar6 = (uint)uVar2 & 0xff;
   iVar10 = (uint)bVar3 + (uint)bVar3;
   iVar12 = iVar10 + (uint)bVar3;
   iVar13 = (uint)bVar3 * 4;
   if (bVar3 < (byte)uVar2) {
      uVar5 = bVar3 + 1 + uVar6 * 6;
      uVar16 = iVar13 + 1 + uVar6 * 3;
      uVar14 = uVar6 * 2 + 1 + iVar13 + (uint)bVar3;
      uVar7 = uVar5 / 7;
      uVar15 = uVar14 / 7;
      bVar8 = ( byte )(( uVar5 - uVar7 >> 1 ) + uVar7 >> 2);
      uVar7 = ( uVar14 - uVar15 >> 1 ) + uVar15 >> 2;
      uVar5 = uVar6 * 4 + 1 + iVar12;
      uVar14 = uVar6 + 1 + iVar12 * 2;
      bVar9 = ( byte )(( iVar10 + 1 + uVar6 * 5 ) / 7);
      uVar6 = uVar5 / 7;
      bVar11 = ( byte )(( uVar5 - uVar6 >> 1 ) + uVar6 >> 2);
      uVar6 = uVar16 / 7;
      bVar3 = ( byte )(( uVar16 - uVar6 >> 1 ) + uVar6 >> 2);
      uVar6 = uVar14 / 7;
      uVar5 = ( uVar14 - uVar6 >> 1 ) + uVar6 >> 2;
   }
 else {
      uVar5 = 0xffffffff;
      bVar8 = ( byte )(( bVar3 + 1 + uVar6 * 4 ) / 5);
      uVar7 = 0;
      bVar9 = ( byte )(( ulong )(iVar10 + 1 + uVar6 * 3) / 5);
      bVar11 = ( byte )(( uVar6 * 2 + 1 + iVar12 ) / 5);
      bVar3 = ( byte )(( uVar6 + 1 + iVar13 ) / 5);
   }

   iVar10 = 4;
   uVar1 = uVar2 >> 0x10;
   local_48 = ( ( ( ( ( ( ( ulong )(uVar5 & 0xff) << 8 | ( ulong )(uVar7 & 0xff) ) << 8 | (ulong)bVar3 ) << 8 | (ulong)bVar11 ) << 8 | (ulong)bVar9 ) << 8 | (ulong)bVar8 ) << 8 | uVar2 >> 8 & 0xff ) << 8 | uVar2 & 0xff;
   do {
      iVar12 = 4;
      uVar2 = uVar1;
      puVar4 = (undefined1*)param_2;
      do {
         uVar1 = uVar2 >> 3;
         *puVar4 = *(undefined1*)( (long)&local_48 + ( ulong )((uint)uVar2 & 7) );
         puVar4 = puVar4 + param_4;
         iVar12 = iVar12 + -1;
         uVar2 = uVar1;
      }
 while ( iVar12 != 0 );
      param_2 = (void*)( (long)param_2 + (long)param_3 );
      iVar10 = iVar10 + -1;
   }
 while ( iVar10 != 0 );
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* bcdec__unquantize(int, int, int) */int bcdec__unquantize(int param_1, int param_2, int param_3) {
   byte bVar1;
   int iVar2;
   bVar1 = (byte)param_2;
   iVar2 = param_1;
   if (param_3 == 0) {
      if (( param_2 < 0xf ) && ( param_1 != 0 )) {
         if (( 1 << ( bVar1 & 0x1f ) ) + -1 != param_1) {
            return param_1 * 0x10000 + 0x8000 >> ( bVar1 & 0x1f );
         }

         return 0xffff;
      }

   }
 else if (param_2 < 0x10) {
      if (param_1 < 0) {
         iVar2 = -0x7fff;
         if (-param_1 < ( 1 << ( bVar1 - 1 & 0x1f ) ) + -1) {
            return -(param_1 * -0x8000 + 0x4000 >> (bVar1 - 1 & 0x1f));
         }

      }
 else if (param_1 != 0) {
         if (( 1 << ( bVar1 - 1 & 0x1f ) ) + -1 <= param_1) {
            return 0x7fff;
         }

         return param_1 * 0x8000 + 0x4000 >> ( bVar1 - 1 & 0x1f );
      }

   }

   return iVar2;
}
void bcdec_bc1(void *param_1, void *param_2, int param_3) {
   bcdec__color_block(param_1, param_2, param_3, 0);
   return;
}
void bcdec_bc2(ushort *param_1, void *param_2, int param_3) {
   ushort *puVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   puVar1 = param_1 + 4;
   bcdec__color_block(puVar1, param_2, param_3, 1);
   lVar4 = (long)param_2 + 3;
   do {
      lVar3 = 0;
      do {
         iVar2 = (int)( uint ) * param_1 >> ( (char)lVar3 * '\x04' & 0x1fU );
         *(byte*)( lVar4 + lVar3 * 4 ) = (char)( iVar2 << 4 ) + ( (byte)iVar2 & 0xf );
         lVar3 = lVar3 + 1;
      }
 while ( lVar3 != 4 );
      param_1 = param_1 + 1;
      lVar4 = lVar4 + param_3;
   }
 while ( puVar1 != param_1 );
   return;
}
void bcdec_bc3(void *param_1, void *param_2, int param_3) {
   bcdec__color_block((void*)( (long)param_1 + 8 ), param_2, param_3, 1);
   bcdec__smooth_alpha_block(param_1, (void*)( (long)param_2 + 3 ), param_3, 4);
   return;
}
void bcdec_bc4(void *param_1, void *param_2, int param_3) {
   bcdec__smooth_alpha_block(param_1, param_2, param_3, 1);
   return;
}
void bcdec_bc5(void *param_1, void *param_2, int param_3) {
   bcdec__smooth_alpha_block(param_1, param_2, param_3, 2);
   bcdec__smooth_alpha_block((void*)( (long)param_1 + 8 ), (void*)( (long)param_2 + 1 ), param_3, 2);
   return;
}
void bcdec_bc6h_half(ulong *param_1, ushort *param_2, int param_3, int param_4) {
   ulong uVar1;
   ulong uVar2;
   ulong uVar3;
   ulong uVar4;
   ulong uVar5;
   bool bVar6;
   ushort uVar7;
   int iVar8;
   undefined4 uVar9;
   uint uVar10;
   ulong uVar11;
   ulong uVar12;
   byte bVar13;
   byte bVar14;
   int iVar15;
   ulong uVar16;
   ushort uVar17;
   long lVar18;
   ulong uVar19;
   ulong uVar20;
   ulong uVar21;
   ulong uVar22;
   ulong uVar23;
   ushort uVar24;
   long lVar25;
   byte bVar26;
   int iVar27;
   uint uVar28;
   int iVar29;
   ulong uVar30;
   ulong uVar31;
   undefined1 *puVar32;
   ushort *puVar33;
   ushort *puVar34;
   ulong uVar35;
   ulong uVar36;
   ulong uVar37;
   byte bVar38;
   uint uVar39;
   long lVar40;
   uint uVar41;
   uint uVar42;
   undefined1 *puVar43;
   long in_FS_OFFSET;
   ulong local_c8;
   undefined1 *local_c0;
   uint local_b4;
   uint local_b0;
   uint local_a8;
   ulong local_a0;
   uint local_88;
   uint local_80;
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   uVar37 = *param_1;
   uVar36 = param_1[1];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar35 = uVar36 >> 2;
   local_c8 = uVar37 & 3;
   uVar11 = uVar37 >> 2 | uVar36 << 0x3e;
   local_78 = (undefined1[16])0x0;
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   if (( uVar37 & 2 ) != 0) {
      uVar11 = uVar11 >> 3 | uVar35 << 0x3d;
      uVar35 = uVar36 >> 5;
      local_c8 = ( ulong )((uint)uVar37 & 3 | ( ( uint )(uVar37 >> 2) & 7 ) << 2);
   }

   bVar14 = (byte)uVar11;
   uVar10 = (uint)uVar11;
   uVar41 = ( uint )(uVar11 >> 8);
   switch (local_c8) {
      case 0:
    uVar11 = uVar11 >> 1;
    uVar37 = (uVar35 << 0x3f | uVar11) >> 1;
    uVar36 = (uVar37 | (uVar35 >> 1) << 0x3f) >> 1;
    uVar30 = (uVar36 | (uVar35 >> 2) << 0x3f) >> 10;
    uVar19 = (uVar35 >> 3) << 0x36;
    uVar28 = (uint)uVar36;
    uVar42 = uVar28 & 0x3ff;
    uVar36 = (uVar30 | uVar19) >> 10;
    uVar21 = (uVar35 >> 0xd) << 0x36;
    uVar41 = (uint)uVar30;
    local_b4 = uVar41 & 0x3ff;
    uVar30 = (uVar36 | uVar21) >> 10;
    uVar1 = (uVar30 | (uVar35 >> 0x17) << 0x36) >> 5;
    local_78._0_8_ = CONCAT44((int)uVar30,uVar28) & 0x1f000003ff;
    local_c0._0_4_ = (uint)((uVar11 & 0x3fffffffc00000) >> 0x16) & 0x3ff;
    uVar30 = (uVar1 | (uVar35 >> 0x21) << 0x3b) >> 1;
    uVar20 = (uVar30 | (uVar35 >> 0x26) << 0x3f) >> 4;
    uVar2 = (uVar20 | (uVar35 >> 0x27) << 0x3c) >> 5;
    uVar22 = (uVar2 | (uVar35 >> 0x2b) << 0x3b) >> 1;
    uVar16 = (uVar22 | (uVar35 >> 0x30) << 0x3f) >> 4;
    uVar31 = (uVar16 | (uVar35 >> 0x31) << 0x3c) >> 5;
    local_68._12_4_ = ((uint)uVar1 & 1) << 4 | (uint)uVar22 & 0xf;
    local_68._8_4_ = (uVar10 & 1) << 4 | (uint)uVar30 & 0xf;
    uVar1 = (uVar31 | (uVar35 >> 0x35) << 0x3b) >> 1;
    local_68._0_8_ = CONCAT44((int)uVar20,uVar41) & 0x1f000003ff;
    uVar30 = (uVar1 | (uVar35 >> 0x3a) << 0x3f) >> 4;
    uVar35 = uVar30 | (uVar35 >> 0x3b) << 0x3c;
    local_78._8_4_ = (uint)uVar30 & 0x1f;
    local_78._12_4_ = (uint)(uVar35 >> 6) & 0x1f;
    uVar30 = uVar35 >> 0x11;
    local_58._12_4_ =
         ((uint)uVar37 & 1) << 4 | (uint)uVar2 & 1 | (int)uVar31 * 2 & 2U |
         ((uint)(uVar35 >> 5) & 1) << 2 | ((uint)(uVar35 >> 0xb) & 1) << 3;
    local_58._8_4_ = ((uint)uVar11 & 1) << 4 | (uint)uVar1 & 0xf;
    local_a8 = (((uint)(uVar19 >> 0x20) & 0xc0000000) >> 10 | (uint)(uVar21 >> 0x20) & 0x1f00000) >>
               0x14;
    local_58._0_8_ = CONCAT44((int)uVar16,(int)uVar36) & 0x1f000003ff;
    if (param_4 != 0) {
      bVar6 = false;
      bVar26 = 0x1b;
      bVar13 = 0x16;
      bVar14 = 0x1b;
      local_a0._0_4_ = 0xfffffff7;
      bVar38 = 0x1b;
      uVar36 = 0;
      iVar8 = 10;
      goto LAB_00100efa;
    }
    local_c8._0_4_ = 0;
    bVar38 = 0x1b;
    bVar14 = 0x1b;
    bVar26 = 0x1b;
    bVar6 = false;
    uVar36 = 0;
    iVar8 = 10;
    local_a0._0_4_ = 0xfffffff7;
    goto LAB_00100f28;
      case 1:
    uVar11 = uVar11 >> 1;
    uVar37 = (uVar35 << 0x3f | uVar11) >> 1;
    uVar36 = (uVar37 | (uVar35 >> 1) << 0x3f) >> 1;
    uVar30 = (uVar36 | (uVar35 >> 2) << 0x3f) >> 7;
    uVar28 = (uint)uVar36;
    uVar42 = uVar28 & 0x7f;
    uVar1 = (uVar30 | (uVar35 >> 3) << 0x39) >> 1;
    uVar23 = uVar1 | (uVar35 >> 10) << 0x3f;
    uVar5 = (uVar35 >> 0xd) << 0x39;
    uVar41 = (uint)(uVar23 >> 2);
    local_b4 = uVar41 & 0x7f;
    uVar36 = (uVar23 >> 9 | uVar5) >> 1;
    uVar20 = (uVar36 | (uVar35 >> 0x14) << 0x3f) >> 1;
    uVar2 = ((uVar20 | (uVar35 >> 0x15) << 0x3f) >> 1 | (uVar35 >> 0x16) << 0x3f) >> 7;
    local_c0 = (undefined1 *)(((uVar11 & 0x3fffffffc00000) >> 0x13 & 0xfffffff8000003f8) >> 3);
    uVar22 = (uVar2 | (uVar35 >> 0x17) << 0x39) >> 1;
    uVar16 = (uVar22 | (uVar35 >> 0x1e) << 0x3f) >> 1;
    uVar31 = (uVar16 | (uVar35 >> 0x1f) << 0x3f) >> 1;
    uVar19 = (uVar31 | (uVar35 >> 0x20) << 0x3f) >> 6;
    local_78._0_8_ = CONCAT44((int)uVar31,uVar28) & 0x3f0000007f;
    uVar31 = (uVar19 | (uVar35 >> 0x21) << 0x3a) >> 4;
    uVar21 = (uVar31 | (uVar35 >> 0x27) << 0x3c) >> 6;
    uVar3 = (uVar21 | (uVar35 >> 0x2b) << 0x3a) >> 4;
    uVar4 = (uVar3 | (uVar35 >> 0x31) << 0x3c) >> 6;
    local_80 = (uint)uVar30;
    local_68._12_4_ = ((uint)uVar37 & 1) << 5 | ((uint)uVar11 & 1) << 4 | (uint)uVar21 & 0xf;
    local_68._8_4_ = ((uint)uVar20 & 1) << 4 | (uVar10 & 1) << 5 | (uint)uVar19 & 0xf;
    uVar37 = (uVar4 | (uVar35 >> 0x35) << 0x3a) >> 4;
    uVar11 = uVar37 | (uVar35 >> 0x3b) << 0x3c;
    local_88 = (uint)uVar36;
    local_a0._0_4_ = (uint)uVar2;
    uVar10 = (uint)local_a0;
    uVar30 = uVar11 >> 0x11;
    uVar36 = 0;
    local_68._0_8_ = CONCAT44((int)uVar31,uVar41) & 0x3f0000007f;
    iVar8 = 7;
    local_a0._0_4_ = 0xfffffff8;
    local_a8 = (uint)uVar22;
    local_b0 = (uint)uVar16;
    bVar6 = false;
    local_58._12_4_ =
         (local_88 & 1) << 2 | (int)uVar1 * 2 & 2U | local_80 & 1 | (uVar10 & 1) << 3 |
         (local_a8 & 1) << 5 | (local_b0 & 1) << 4;
    local_58._8_4_ =
         ((uint)(uVar23 >> 9) & 1) << 5 | ((uint)(uVar23 >> 1) & 1) << 4 | (uint)uVar4 & 0xf;
    local_78._8_4_ = (uint)uVar37 & 0x3f;
    local_58._0_8_ = CONCAT44((int)uVar3,(uint)local_c0) & 0x3fffffffff;
    local_a8 = (((uint)(((uVar35 >> 0xb) << 0x3f) >> 0x21) |
                (uint)(((uVar35 >> 0xc) << 0x3f) >> 0x20)) >> 7 | (uint)(uVar5 >> 0x20) & 0xf800000)
               >> 0x17;
    local_78._12_4_ = (uint)(uVar11 >> 6) & 0x3f;
    break;
      case 2:
    bVar6 = false;
    iVar8 = 0xb;
    local_a0._0_4_ = 0xfffffff9;
    uVar37 = (uVar11 >> 10 | uVar35 << 0x36) >> 10;
    uVar31 = (uVar35 >> 10) << 0x36;
    uVar1 = (uVar37 | uVar31) >> 10;
    uVar36 = (uVar1 | (uVar35 >> 0x14) << 0x36) >> 5;
    uVar30 = (uVar36 | (uVar35 >> 0x1e) << 0x3b) >> 1;
    uVar42 = ((uint)uVar36 & 1) << 10 | uVar10 & 0x3ff;
    uVar36 = (uVar30 | (uVar35 >> 0x23) << 0x3f) >> 4;
    uVar20 = (uVar36 | (uVar35 >> 0x24) << 0x3c) >> 4;
    uVar2 = (uVar20 | (uVar35 >> 0x28) << 0x3c) >> 1;
    local_b4 = ((uint)uVar20 & 1) << 10 | (uint)(uVar11 >> 10) & 0x3ff;
    uVar11 = (uVar2 | (uVar35 >> 0x2c) << 0x3f) >> 1;
    uVar20 = (uVar11 | (uVar35 >> 0x2d) << 0x3f) >> 4;
    uVar22 = (uVar20 | (uVar35 >> 0x2e) << 0x3c) >> 4;
    uVar16 = (uVar22 | (uVar35 >> 0x32) << 0x3c) >> 1;
    local_68._8_8_ = CONCAT44((int)uVar11,(int)uVar30) & 0xf0000000f;
    local_68._0_8_ = CONCAT44((int)uVar36,local_b4) & 0xfffffffff;
    local_c0._0_4_ = ((uint)uVar22 & 1) << 10 | (uint)uVar37 & 0x3ff;
    uVar37 = (uVar16 | (uVar35 >> 0x36) << 0x3f) >> 1;
    uVar11 = (uVar37 | (uVar35 >> 0x37) << 0x3f) >> 4;
    uVar22 = (uVar11 | (uVar35 >> 0x38) << 0x3c) >> 5;
    uVar19 = uVar22 | (uVar35 >> 0x3c) << 0x3b;
    uVar36 = 0;
    uVar30 = uVar19 >> 0xc;
    local_78._8_8_ = CONCAT44((int)(uVar19 >> 1),(int)uVar11) & 0x1f0000001f;
    local_78._0_8_ = CONCAT44((int)uVar1,uVar42) & 0x1fffffffff;
    local_a8 = (((uint)((uVar35 << 0x36) >> 0x20) & 0xc0000000) >> 10 |
               (uint)(uVar31 >> 0x20) & 0x1f00000) >> 0x14;
    local_58._8_8_ =
         CONCAT44((int)uVar16 * 2 & 2U | (uint)uVar2 & 1 | (int)uVar22 * 4 & 4U |
                  ((uint)(uVar19 >> 6) & 1) << 3,(int)uVar37) & 0xffffffff0000000f;
    local_58._0_8_ = CONCAT44((int)uVar20,(uint)local_c0) & 0xfffffffff;
    break;
      case 3:
    bVar6 = true;
    iVar8 = 10;
    uVar11 = uVar11 >> 10;
    uVar42 = uVar10 & 0x3ff;
    local_a0 = 1;
    local_a8 = 0;
    uVar37 = (uVar11 | uVar35 << 0x36) >> 10;
    local_c8._0_4_ = 10;
    local_b4 = (uint)uVar11 & 0x3ff;
    uVar36 = (uVar37 | (uVar35 >> 10) << 0x36) >> 10;
    local_c0 = (undefined1 *)((uVar11 & 0xffc00) >> 10);
    uVar30 = (uVar36 | (uVar35 >> 0x14) << 0x36) >> 10;
    local_78._0_8_ = CONCAT44((int)uVar36,uVar10) & 0x3ff000003ff;
    local_78._8_8_ = 0;
    uVar1 = (uVar30 | (uVar35 >> 0x1e) << 0x36) >> 10;
    local_68._0_8_ = CONCAT44((int)uVar30,(uint)uVar11) & 0x3ff000003ff;
    local_68._8_8_ = 0;
    uVar36 = uVar35 >> 0x3c;
    local_58._0_8_ = CONCAT44((int)uVar1,(int)uVar37) & 0x3ff000003ff;
    local_58._8_8_ = 0;
    uVar30 = (uVar1 | (uVar35 >> 0x28) << 0x36) >> 10 | (uVar35 >> 0x32) << 0x36;
    goto LAB_00100995;
      default:
    iVar8 = 4;
    do {
      param_2[0] = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2 = param_2 + param_3;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
LAB_001006e0:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
      case 6:
    bVar6 = false;
    local_a0._0_4_ = 0xfffffffa;
    uVar37 = (uVar11 >> 10 | uVar35 << 0x36) >> 10;
    uVar19 = uVar37 | (uVar35 >> 10) << 0x36;
    local_c8._0_4_ = 3;
    uVar36 = uVar19 >> 10;
    uVar30 = (uVar36 | (uVar35 >> 0x14) << 0x36) >> 4;
    uVar1 = (uVar30 | (uVar35 >> 0x1e) << 0x3c) >> 1;
    uVar42 = ((uint)uVar30 & 1) << 10 | uVar10 & 0x3ff;
    uVar30 = (uVar1 | (uVar35 >> 0x22) << 0x3f) >> 1;
    uVar20 = (uVar30 | (uVar35 >> 0x23) << 0x3f) >> 4;
    uVar2 = (uVar20 | (uVar35 >> 0x24) << 0x3c) >> 5;
    uVar22 = (uVar2 | (uVar35 >> 0x28) << 0x3b) >> 1;
    local_b4 = ((uint)uVar2 & 1) << 10 | (uint)(uVar11 >> 10) & 0x3ff;
    uVar11 = (uVar22 | (uVar35 >> 0x2d) << 0x3f) >> 4;
    uVar2 = (uVar11 | (uVar35 >> 0x2e) << 0x3c) >> 4;
    uVar16 = (uVar2 | (uVar35 >> 0x32) << 0x3c) >> 1;
    local_c0._0_4_ = ((uint)uVar2 & 1) << 10 | (uint)uVar37 & 0x3ff;
    uVar37 = (uVar16 | (uVar35 >> 0x36) << 0x3f) >> 1;
    uVar2 = (uVar37 | (uVar35 >> 0x37) << 0x3f) >> 4;
    iVar8 = 0xb;
    uVar31 = (uVar2 | (uVar35 >> 0x38) << 0x3c) >> 4;
    uVar35 = uVar31 | uVar35 & 0xf000000000000000;
    local_78._8_8_ = CONCAT44((int)(uVar35 >> 2),(int)uVar2) & 0xf0000000f;
    local_78._0_8_ = CONCAT44((int)uVar36,uVar42) & 0xfffffffff;
    local_68._12_4_ = ((uint)uVar1 & 1) << 4 | (uint)uVar22 & 0xf;
    local_68._8_4_ = ((uint)(uVar35 >> 6) & 1) << 4 | (uint)uVar30 & 0xf;
    local_68._0_8_ = CONCAT44((int)uVar20,local_b4) & 0x1fffffffff;
    uVar36 = 0;
    local_a8 = ((uint)(uVar19 >> 0x2a) & 0x7c00) >> 10;
    uVar30 = uVar35 >> 0xd;
    local_58._8_8_ =
         CONCAT44((int)uVar16 * 2 & 2U | (uint)uVar31 & 1 | ((uint)(uVar35 >> 1) & 1) << 2 |
                  ((uint)(uVar35 >> 7) & 1) << 3,(int)uVar37) & 0xffffffff0000000f;
    local_58._0_8_ = CONCAT44((int)uVar11,(uint)local_c0) & 0xfffffffff;
    break;
      case 7:
    bVar6 = true;
    iVar8 = 0xb;
    uVar37 = (uVar11 >> 10 | uVar35 << 0x36) >> 10;
    local_a0._0_4_ = 2;
    local_a8 = 0;
    uVar36 = (uVar37 | (uVar35 >> 10) << 0x36) >> 10;
    local_c8._0_4_ = 0xb;
    uVar30 = (uVar36 | (uVar35 >> 0x14) << 0x36) >> 9;
    uVar1 = (uVar30 | (uVar35 >> 0x1e) << 0x37) >> 1;
    uVar42 = ((uint)uVar30 & 1) << 10 | uVar10 & 0x3ff;
    local_78._8_8_ = 0;
    local_78._0_8_ = CONCAT44((int)uVar36,uVar42) & 0x1ffffffffff;
    uVar36 = (uVar1 | (uVar35 >> 0x27) << 0x3f) >> 9;
    uVar20 = (uVar36 | (uVar35 >> 0x28) << 0x37) >> 1;
    local_b4 = ((uint)uVar36 & 1) << 10 | (uint)(uVar11 >> 10) & 0x3ff;
    local_68._8_8_ = 0;
    local_68._0_8_ = CONCAT44((int)uVar1,local_b4) & 0x1ffffffffff;
    uVar11 = (uVar20 | (uVar35 >> 0x31) << 0x3f) >> 9;
    uVar36 = uVar35 >> 0x3c;
    uVar30 = (uVar11 | (uVar35 >> 0x32) << 0x37) >> 1 | (uVar35 >> 0x3b) << 0x3f;
    local_c0._0_4_ = ((uint)uVar11 & 1) << 10 | (uint)uVar37 & 0x3ff;
    local_58._8_8_ = 0;
    local_58._0_8_ = CONCAT44((int)uVar20,(uint)local_c0) & 0x1ffffffffff;
    break;
      case 10:
    bVar6 = false;
    uVar37 = (uVar11 >> 10 | uVar35 << 0x36) >> 10;
    uVar31 = uVar37 | (uVar35 >> 10) << 0x36;
    local_a0._0_4_ = 0xfffffffb;
    uVar36 = uVar31 >> 10;
    local_c8._0_4_ = 4;
    uVar30 = (uVar36 | (uVar35 >> 0x14) << 0x36) >> 4;
    uVar1 = (uVar30 | (uVar35 >> 0x1e) << 0x3c) >> 1;
    uVar42 = ((uint)uVar30 & 1) << 10 | uVar10 & 0x3ff;
    uVar30 = (uVar1 | (uVar35 >> 0x22) << 0x3f) >> 1;
    uVar20 = (uVar30 | (uVar35 >> 0x23) << 0x3f) >> 4;
    uVar2 = (uVar20 | (uVar35 >> 0x24) << 0x3c) >> 4;
    uVar22 = (uVar2 | (uVar35 >> 0x28) << 0x3c) >> 1;
    local_b4 = ((uint)uVar2 & 1) << 10 | (uint)(uVar11 >> 10) & 0x3ff;
    uVar11 = (uVar22 | (uVar35 >> 0x2c) << 0x3f) >> 1;
    iVar8 = 0xb;
    uVar2 = (uVar11 | (uVar35 >> 0x2d) << 0x3f) >> 4;
    uVar16 = (uVar2 | (uVar35 >> 0x2e) << 0x3c) >> 5;
    local_c0._0_4_ = ((uint)uVar16 & 1) << 10 | (uint)uVar37 & 0x3ff;
    uVar37 = (uVar16 | (uVar35 >> 0x32) << 0x3b) >> 1;
    local_68._8_8_ = CONCAT44((int)uVar11,(int)uVar30) & 0xf0000000f;
    local_68._0_8_ = CONCAT44((int)uVar20,local_b4) & 0xfffffffff;
    uVar11 = (uVar37 | (uVar35 >> 0x37) << 0x3f) >> 4;
    uVar20 = (uVar11 | (uVar35 >> 0x38) << 0x3c) >> 4;
    uVar35 = uVar20 | uVar35 & 0xf000000000000000;
    local_78._8_8_ = CONCAT44((int)(uVar35 >> 2),(int)uVar11) & 0xf0000000f;
    local_78._0_8_ = CONCAT44((int)uVar36,uVar42) & 0xfffffffff;
    uVar36 = 0;
    uVar30 = uVar35 >> 0xd;
    local_a8 = ((uint)(uVar31 >> 0x2a) & 0x7c00) >> 10;
    local_58._12_4_ =
         (int)uVar20 * 2 & 2U | (uint)uVar22 & 1 | ((uint)(uVar35 >> 1) & 1) << 2 |
         ((uint)(uVar35 >> 6) & 1) << 4 | ((uint)(uVar35 >> 7) & 1) << 3;
    local_58._8_4_ = ((uint)uVar1 & 1) << 4 | (uint)uVar37 & 0xf;
    local_58._0_8_ = CONCAT44((int)uVar2,(uint)local_c0) & 0x1fffffffff;
    break;
      case 0xb:
    bVar6 = true;
    iVar8 = 0xc;
    uVar37 = (uVar11 >> 10 | uVar35 << 0x36) >> 10;
    local_a0._0_4_ = 3;
    local_a8 = 0;
    uVar36 = (uVar37 | (uVar35 >> 10) << 0x36) >> 10;
    local_c8._0_4_ = 0xc;
    uVar30 = ((uVar36 | (uVar35 >> 0x14) << 0x36) >> 8 | (uVar35 >> 0x1e) << 0x38) >> 2;
    iVar15 = (int)(uVar36 >> 8);
    uVar42 = (iVar15 >> 1 & 1U | iVar15 * 2 & 2U) << 10 | uVar10 & 0x3ff;
    local_78._8_8_ = 0;
    local_78._0_8_ = CONCAT44((int)uVar36,uVar42) & 0xffffffffff;
    uVar1 = ((uVar30 | (uVar35 >> 0x26) << 0x3e) >> 8 | (uVar35 >> 0x28) << 0x38) >> 2;
    iVar15 = (int)(uVar30 >> 8);
    local_b4 = (iVar15 >> 1 & 1U | iVar15 * 2 & 2U) << 10 | (uint)(uVar11 >> 10) & 0x3ff;
    local_68._8_8_ = 0;
    local_68._0_8_ = CONCAT44((int)uVar30,local_b4) & 0xffffffffff;
    uVar36 = uVar35 >> 0x3c;
    uVar30 = ((uVar1 | (uVar35 >> 0x30) << 0x3e) >> 8 | (uVar35 >> 0x32) << 0x38) >> 2 |
             (uVar35 >> 0x3a) << 0x3e;
    iVar15 = (int)(uVar1 >> 8);
    local_c0._0_4_ = (iVar15 >> 1 & 1U | iVar15 * 2 & 2U) << 10 | (uint)uVar37 & 0x3ff;
    local_58._8_8_ = 0;
    local_58._0_8_ = CONCAT44((int)uVar1,(uint)local_c0) & 0xffffffffff;
    break;
      case 0xe:
    uVar11 = uVar11 >> 9;
    uVar36 = uVar11 | uVar35 << 0x37;
    bVar6 = false;
    uVar42 = uVar10 & 0x1ff;
    local_a0._0_4_ = 0xfffffffc;
    uVar37 = uVar36 >> 10;
    uVar21 = (uVar35 >> 10) << 0x37;
    uVar41 = (uint)(uVar36 >> 1);
    local_b4 = uVar41 & 0x1ff;
    uVar1 = (uVar37 | uVar21) >> 1;
    uVar20 = (uVar1 | (uVar35 >> 0x13) << 0x3f) >> 9;
    local_c8._0_4_ = 5;
    uVar36 = (uVar20 | (uVar35 >> 0x14) << 0x37) >> 1;
    uVar30 = (uVar36 | (uVar35 >> 0x1d) << 0x3f) >> 5;
    local_c0 = (undefined1 *)((uVar11 & 0xff800) >> 0xb);
    local_78._0_8_ = CONCAT44((int)uVar36,uVar10) & 0x1f000001ff;
    uVar36 = (uVar30 | (uVar35 >> 0x1e) << 0x3b) >> 1;
    uVar2 = (uVar36 | (uVar35 >> 0x23) << 0x3f) >> 4;
    uVar22 = (uVar2 | (uVar35 >> 0x24) << 0x3c) >> 5;
    uVar16 = (uVar22 | (uVar35 >> 0x28) << 0x3b) >> 1;
    uVar31 = (uVar16 | (uVar35 >> 0x2d) << 0x3f) >> 4;
    iVar8 = 9;
    uVar19 = (uVar31 | (uVar35 >> 0x2e) << 0x3c) >> 5;
    local_68._12_4_ = ((uint)uVar30 & 1) << 4 | (uint)uVar16 & 0xf;
    local_68._8_4_ = ((uint)uVar37 & 1) << 4 | (uint)uVar36 & 0xf;
    uVar37 = (uVar19 | (uVar35 >> 0x32) << 0x3b) >> 1;
    uVar36 = (uVar37 | (uVar35 >> 0x37) << 0x3f) >> 4;
    local_68._0_8_ = CONCAT44((int)uVar2,uVar41) & 0x1f000001ff;
    uVar2 = (uVar36 | (uVar35 >> 0x38) << 0x3c) >> 5;
    uVar16 = uVar2 | (uVar35 >> 0x3c) << 0x3b;
    local_78._8_4_ = (uint)uVar36 & 0x1f;
    local_78._12_4_ = (uint)(uVar16 >> 1) & 0x1f;
    uVar36 = 0;
    uVar30 = uVar16 >> 0xc;
    local_58._12_4_ =
         ((uint)uVar20 & 1) << 4 | (uint)uVar22 & 1 | (int)uVar19 * 2 & 2U | (int)uVar2 * 4 & 4U |
         ((uint)(uVar16 >> 6) & 1) << 3;
    local_58._8_4_ = ((uint)uVar11 & 1) << 4 | (uint)uVar37 & 0xf;
    local_a8 = ((((uint)((uVar35 << 0x37) >> 0x20) & 0x80000000) >> 1 |
                (uint)(((uVar35 >> 9) << 0x3f) >> 0x20)) >> 9 | (uint)(uVar21 >> 0x20) & 0x3e00000)
               >> 0x15;
    local_58._0_8_ = CONCAT44((int)uVar31,(int)uVar1) & 0x1f000001ff;
    break;
      case 0xf:
    iVar8 = 6;
    uVar37 = (uVar11 >> 10 | uVar35 << 0x36) >> 10;
    uVar36 = (uVar37 | (uVar35 >> 10) << 0x36) >> 10;
    uVar30 = (uVar36 | (uVar35 >> 0x14) << 0x36) >> 4;
    uVar1 = (uVar30 | (uVar35 >> 0x1e) << 0x3c) >> 6;
    uVar42 = 0;
    uVar41 = (uint)uVar30 & 0x3f;
    do {
      uVar42 = uVar42 * 2 | uVar41 & 1;
      iVar8 = iVar8 + -1;
      uVar41 = (int)uVar41 >> 1;
    } while (iVar8 != 0);
    uVar42 = uVar42 << 10 | uVar10 & 0x3ff;
    local_78._8_8_ = 0;
    local_78._0_8_ = CONCAT44((int)uVar36,uVar42) & 0xfffffffff;
    uVar36 = (uVar1 | (uVar35 >> 0x22) << 0x3a) >> 4;
    iVar8 = 6;
    uVar20 = (uVar36 | (uVar35 >> 0x28) << 0x3c) >> 6;
    uVar41 = 0;
    uVar10 = (uint)uVar36 & 0x3f;
    do {
      uVar41 = uVar41 * 2 | uVar10 & 1;
      iVar8 = iVar8 + -1;
      uVar10 = (int)uVar10 >> 1;
    } while (iVar8 != 0);
    local_b4 = uVar41 << 10 | (uint)(uVar11 >> 10) & 0x3ff;
    uVar11 = (uVar20 | (uVar35 >> 0x2c) << 0x3a) >> 4;
    iVar8 = 6;
    local_68._8_8_ = 0;
    local_68._0_8_ = CONCAT44((int)uVar1,local_b4) & 0xfffffffff;
    uVar36 = uVar35 >> 0x3c;
    uVar30 = (uVar11 | (uVar35 >> 0x32) << 0x3c) >> 6 | (uVar35 >> 0x36) << 0x3a;
    uVar41 = 0;
    uVar10 = (uint)uVar11 & 0x3f;
    do {
      uVar41 = uVar41 * 2 | uVar10 & 1;
      iVar8 = iVar8 + -1;
      uVar10 = (int)uVar10 >> 1;
    } while (iVar8 != 0);
    bVar6 = true;
    iVar8 = 0x10;
    local_c0._0_4_ = uVar41 << 10 | (uint)uVar37 & 0x3ff;
    local_a0._0_4_ = 4;
    local_58._8_8_ = 0;
    local_58._0_8_ = CONCAT44((int)uVar20,(uint)local_c0) & 0xfffffffff;
    local_a8 = 0;
    local_c8._0_4_ = 0xd;
    break;
      case 0x12:
    uVar42 = (uint)bVar14;
    uVar19 = uVar11 >> 8 | uVar35 << 0x38;
    bVar6 = false;
    local_a0._0_4_ = 0xfffffffd;
    local_c8._0_4_ = 6;
    uVar31 = (uVar35 >> 10) << 0x38;
    uVar10 = (uint)(uVar19 >> 2);
    local_b4 = uVar10 & 0xff;
    uVar37 = (uVar19 >> 10 | uVar31) >> 1;
    uVar1 = (uVar37 | (uVar35 >> 0x12) << 0x3f) >> 1;
    local_c0 = (undefined1 *)(((uVar11 >> 8 & 0xffffffff000) >> 2 & 0xfffffc000003fc00) >> 10);
    uVar11 = ((uVar1 | (uVar35 >> 0x13) << 0x3f) >> 8 | (uVar35 >> 0x14) << 0x38) >> 1;
    uVar36 = (uVar11 | (uVar35 >> 0x1c) << 0x3f) >> 1;
    uVar30 = (uVar36 | (uVar35 >> 0x1d) << 0x3f) >> 6;
    local_78._0_8_ = CONCAT44((int)uVar36,uVar42) & 0x3fffffffff;
    uVar36 = (uVar30 | (uVar35 >> 0x1e) << 0x3a) >> 4;
    uVar20 = (uVar36 | (uVar35 >> 0x24) << 0x3c) >> 5;
    uVar2 = (uVar20 | (uVar35 >> 0x28) << 0x3b) >> 1;
    uVar22 = (uVar2 | (uVar35 >> 0x2d) << 0x3f) >> 4;
    local_68._12_4_ = (uVar41 & 1) << 4 | (uint)uVar2 & 0xf;
    local_68._8_4_ = ((uint)uVar37 & 1) << 4 | (uint)uVar30 & 0xf;
    uVar37 = (uVar22 | (uVar35 >> 0x2e) << 0x3c) >> 5;
    uVar2 = (uVar37 | (uVar35 >> 0x32) << 0x3b) >> 1;
    local_68._0_8_ = CONCAT44((int)uVar36,uVar10) & 0x1f000000ff;
    uVar36 = (uVar2 | (uVar35 >> 0x37) << 0x3f) >> 4;
    iVar8 = 8;
    uVar16 = (uVar36 | (uVar35 >> 0x38) << 0x3c) >> 6;
    local_78._8_4_ = (uint)uVar36 & 0x3f;
    uVar30 = (uVar16 | (uVar35 >> 0x3c) << 0x3a) >> 0xb;
    uVar36 = 0;
    local_58._12_4_ =
         (int)(uVar1 >> 8) * 8 & 8U | ((uint)((uVar19 >> 2) >> 8) & 1) << 2 |
         ((uint)uVar11 & 1) << 4 | (uint)uVar20 & 1 | (int)uVar37 * 2 & 2U;
    local_58._8_4_ = ((uint)(uVar19 >> 1) & 1) << 4 | (uint)uVar2 & 0xf;
    local_78._12_4_ = (uint)uVar16 & 0x3f;
    local_a8 = (((uint)(((uVar35 >> 8) << 0x3f) >> 0x21) | (uint)(((uVar35 >> 9) << 0x3f) >> 0x20))
                >> 8 | (uint)(uVar31 >> 0x20) & 0x7c00000) >> 0x16;
    local_58._0_8_ = CONCAT44((int)uVar22,(uint)local_c0) & 0x1fffffffff;
    break;
      case 0x16:
    uVar42 = (uint)bVar14;
    uVar19 = uVar11 >> 8 | uVar35 << 0x38;
    bVar6 = false;
    local_a0._0_4_ = 0xfffffffe;
    local_c8._0_4_ = 7;
    uVar10 = (uint)(uVar19 >> 2);
    local_b4 = uVar10 & 0xff;
    uVar31 = (uVar35 >> 10) << 0x38;
    uVar37 = (uVar19 >> 10 | uVar31) >> 1;
    uVar36 = (uVar37 | (uVar35 >> 0x12) << 0x3f) >> 1;
    local_c0 = (undefined1 *)(((uVar11 >> 8 & 0xffffffff000) >> 2 & 0xfffffc000003fc00) >> 10);
    uVar11 = ((uVar36 | (uVar35 >> 0x13) << 0x3f) >> 8 | (uVar35 >> 0x14) << 0x38) >> 1;
    uVar30 = (uVar11 | (uVar35 >> 0x1c) << 0x3f) >> 1;
    uVar1 = (uVar30 | (uVar35 >> 0x1d) << 0x3f) >> 5;
    local_78._0_8_ = CONCAT44((int)uVar30,uVar42) & 0x1fffffffff;
    uVar30 = (uVar1 | (uVar35 >> 0x1e) << 0x3b) >> 1;
    uVar20 = (uVar30 | (uVar35 >> 0x23) << 0x3f) >> 4;
    uVar2 = (uVar20 | (uVar35 >> 0x24) << 0x3c) >> 6;
    uVar22 = (uVar2 | (uVar35 >> 0x28) << 0x3a) >> 4;
    uVar16 = (uVar22 | (uVar35 >> 0x2e) << 0x3c) >> 5;
    local_68._12_4_ = ((uint)uVar1 & 1) << 4 | ((uint)(uVar36 >> 8) & 1) << 5 | (uint)uVar2 & 0xf;
    local_68._8_4_ =
         ((uint)uVar37 & 1) << 4 | ((uint)((uVar19 >> 2) >> 8) & 1) << 5 | (uint)uVar30 & 0xf;
    uVar37 = (uVar16 | (uVar35 >> 0x32) << 0x3b) >> 1;
    local_68._0_8_ = CONCAT44((int)uVar20,uVar10) & 0x3f000000ff;
    uVar36 = (uVar37 | (uVar35 >> 0x37) << 0x3f) >> 4;
    uVar1 = (uVar36 | (uVar35 >> 0x38) << 0x3c) >> 5;
    uVar20 = uVar1 | (uVar35 >> 0x3c) << 0x3b;
    local_78._8_4_ = (uint)uVar36 & 0x1f;
    iVar8 = 8;
    uVar30 = uVar20 >> 0xc;
    uVar36 = 0;
    local_78._12_4_ = (uint)(uVar20 >> 1) & 0x1f;
    local_58._12_4_ =
         ((uint)uVar11 & 1) << 4 | uVar41 & 1 | (int)uVar16 * 2 & 2U | (int)uVar1 * 4 & 4U |
         ((uint)(uVar20 >> 6) & 1) << 3;
    local_58._8_4_ = ((uint)(uVar19 >> 1) & 1) << 4 | (uint)uVar37 & 0xf;
    local_a8 = (((uint)(((uVar35 >> 8) << 0x3f) >> 0x21) | (uint)(((uVar35 >> 9) << 0x3f) >> 0x20))
                >> 8 | (uint)(uVar31 >> 0x20) & 0x7c00000) >> 0x16;
    local_58._0_8_ = CONCAT44((int)uVar22,(uint)local_c0) & 0x1fffffffff;
    break;
      case 0x1a:
    uVar42 = (uint)bVar14;
    uVar21 = uVar11 >> 8 | uVar35 << 0x38;
    bVar6 = false;
    local_a0._0_4_ = 0xffffffff;
    uVar19 = (uVar35 >> 10) << 0x38;
    uVar10 = (uint)(uVar21 >> 2);
    local_b4 = uVar10 & 0xff;
    uVar37 = (uVar21 >> 10 | uVar19) >> 1;
    uVar1 = (uVar37 | (uVar35 >> 0x12) << 0x3f) >> 1;
    local_c0 = (undefined1 *)(((uVar11 >> 8 & 0xffffffff000) >> 2 & 0xfffffc000003fc00) >> 10);
    uVar11 = ((uVar1 | (uVar35 >> 0x13) << 0x3f) >> 8 | (uVar35 >> 0x14) << 0x38) >> 1;
    uVar36 = (uVar11 | (uVar35 >> 0x1c) << 0x3f) >> 1;
    uVar30 = (uVar36 | (uVar35 >> 0x1d) << 0x3f) >> 5;
    local_78._0_8_ = CONCAT44((int)uVar36,uVar42) & 0x1fffffffff;
    uVar36 = (uVar30 | (uVar35 >> 0x1e) << 0x3b) >> 1;
    uVar20 = (uVar36 | (uVar35 >> 0x23) << 0x3f) >> 4;
    uVar2 = (uVar20 | (uVar35 >> 0x24) << 0x3c) >> 5;
    uVar22 = (uVar2 | (uVar35 >> 0x28) << 0x3b) >> 1;
    uVar16 = (uVar22 | (uVar35 >> 0x2d) << 0x3f) >> 4;
    uVar31 = (uVar16 | (uVar35 >> 0x2e) << 0x3c) >> 6;
    local_68._12_4_ = ((uint)uVar30 & 1) << 4 | (uint)uVar22 & 0xf;
    local_68._8_4_ = ((uint)uVar37 & 1) << 4 | (uint)uVar36 & 0xf;
    uVar37 = (uVar31 | (uVar35 >> 0x32) << 0x3a) >> 4;
    local_68._0_8_ = CONCAT44((int)uVar20,uVar10) & 0x1f000000ff;
    uVar20 = (uVar37 | (uVar35 >> 0x38) << 0x3c) >> 5;
    uVar22 = uVar20 | (uVar35 >> 0x3c) << 0x3b;
    local_78._8_4_ = (uint)uVar37 & 0x1f;
    local_c8._0_4_ = (uint)(uVar21 >> 1);
    uVar10 = (uint)local_c8;
    local_c8._0_4_ = 8;
    local_78._12_4_ = (uint)(uVar22 >> 1) & 0x1f;
    iVar8 = 8;
    uVar30 = uVar22 >> 0xc;
    uVar36 = 0;
    local_58._12_4_ =
         uVar41 * 2 & 2 | ((uint)(uVar1 >> 8) & 1) << 5 | ((uint)uVar11 & 1) << 4 | (uint)uVar2 & 1
         | (int)uVar20 * 4 & 4U | ((uint)(uVar22 >> 6) & 1) << 3;
    local_58._8_4_ = (uVar10 & 1) << 4 | ((uint)((uVar21 >> 2) >> 8) & 1) << 5 | (uint)uVar31 & 0xf;
    local_a8 = (((uint)(((uVar35 >> 8) << 0x3f) >> 0x21) | (uint)(((uVar35 >> 9) << 0x3f) >> 0x20))
                >> 8 | (uint)(uVar19 >> 0x20) & 0x7c00000) >> 0x16;
    local_58._0_8_ = CONCAT44((int)uVar16,(uint)local_c0) & 0x3fffffffff;
    break;
      case 0x1e:
    uVar11 = uVar11 >> 6;
    uVar42 = uVar10 & 0x3f;
    uVar37 = (uVar11 | uVar35 << 0x3a) >> 1;
    uVar5 = (uVar35 >> 6) << 0x3f;
    uVar36 = (uVar37 | uVar5) >> 1;
    uVar12 = uVar36 | (uVar35 >> 7) << 0x3f;
    uVar23 = (uVar35 >> 10) << 0x3a;
    uVar41 = (uint)(uVar12 >> 2);
    local_b4 = uVar41 & 0x3f;
    uVar30 = (uVar12 >> 8 | uVar23) >> 1;
    uVar1 = (uVar30 | (uVar35 >> 0x10) << 0x3f) >> 1;
    uVar20 = (uVar1 | (uVar35 >> 0x11) << 0x3f) >> 1;
    uVar2 = ((uVar20 | (uVar35 >> 0x12) << 0x3f) >> 1 | (uVar35 >> 0x13) << 0x3f) >> 6;
    local_c0 = (undefined1 *)(((uVar11 & 0x3fffffffc000) >> 0xb & 0xfffffff8000001f8) >> 3);
    uVar22 = (uVar2 | (uVar35 >> 0x14) << 0x3a) >> 1;
    uVar16 = (uVar22 | (uVar35 >> 0x1a) << 0x3f) >> 1;
    uVar31 = (uVar16 | (uVar35 >> 0x1b) << 0x3f) >> 1;
    uVar19 = (uVar31 | (uVar35 >> 0x1c) << 0x3f) >> 1;
    uVar21 = (uVar19 | (uVar35 >> 0x1d) << 0x3f) >> 6;
    local_78._0_8_ = CONCAT44((int)uVar19,uVar10) & 0x3f0000003f;
    uVar19 = (uVar21 | (uVar35 >> 0x1e) << 0x3a) >> 4;
    uVar3 = (uVar19 | (uVar35 >> 0x24) << 0x3c) >> 6;
    uVar4 = (uVar3 | (uVar35 >> 0x28) << 0x3a) >> 4;
    local_88 = (uint)uVar11;
    local_68._12_4_ = ((uint)uVar2 & 1) << 5 | (local_88 & 1) << 4 | (uint)uVar3 & 0xf;
    local_68._8_4_ = ((uint)uVar20 & 1) << 4 | ((uint)(uVar36 >> 8) & 1) << 5 | (uint)uVar21 & 0xf;
    uVar11 = (uVar4 | (uVar35 >> 0x2e) << 0x3c) >> 6;
    local_68._0_8_ = CONCAT44((int)uVar19,uVar41) & 0x3f0000003f;
    uVar20 = (uVar11 | (uVar35 >> 0x32) << 0x3a) >> 4;
    iVar8 = 6;
    local_a0._0_4_ = (uint)uVar37;
    local_a8 = (uint)uVar1;
    local_b0 = (uint)uVar22;
    bVar6 = false;
    local_c8._0_4_ = (uint)uVar16;
    uVar10 = (uint)local_c8;
    local_c8._0_4_ = 9;
    uVar37 = (uVar20 | (uVar35 >> 0x38) << 0x3c) >> 6;
    local_78._8_4_ = (uint)uVar20 & 0x3f;
    local_58._12_4_ =
         (local_a8 & 1) << 2 | (int)uVar36 * 2 & 2U | (uint)local_a0 & 1 | (local_b0 & 1) << 3 |
         (uVar10 & 1) << 5 | ((uint)uVar31 & 1) << 4;
    local_58._8_4_ = ((uint)uVar30 & 1) << 5 | ((uint)(uVar12 >> 1) & 1) << 4 | (uint)uVar11 & 0xf;
    uVar36 = 0;
    local_58._0_8_ = CONCAT44((int)uVar4,(uint)local_c0) & 0x3fffffffff;
    uVar30 = (uVar37 | (uVar35 >> 0x3c) << 0x3a) >> 0xb;
    local_78._12_4_ = (uint)uVar37 & 0x3f;
    local_a8 = (((uint)(((uVar35 >> 8) << 0x3f) >> 0x21) | (uint)(((uVar35 >> 9) << 0x3f) >> 0x20))
                >> 6 | (uint)(uVar23 >> 0x20) & 0x1f000000) >> 0x18;
    local_a0 = uVar5;
LAB_00100995:
    if (param_4 == 0) goto LAB_001009b0;
    goto LAB_00100ec9;
   }

   if (param_4 == 0) {
      lVar40 = (long)(int)(uint)local_c8;
      bVar26 = -bcdec_bc6h_half::actual_bits_count[lVar40 + 0x2a];
      bVar14 = -bcdec_bc6h_half::actual_bits_count[lVar40 + 0x1c];
      bVar38 = 0x20 - bcdec_bc6h_half::actual_bits_count[lVar40 + 0xe];
   }
 else {
      LAB_00100ec9:lVar40 = (long)(int)(uint)local_c8;
      bVar13 = -(char)iVar8;
      bVar38 = 0x20 - bcdec_bc6h_half::actual_bits_count[lVar40 + 0xe];
      bVar14 = -bcdec_bc6h_half::actual_bits_count[lVar40 + 0x1c];
      bVar26 = 0x20 - bcdec_bc6h_half::actual_bits_count[lVar40 + 0x2a];
      LAB_00100efa:uVar42 = (int)( uVar42 << ( bVar13 & 0x1f ) ) >> ( bVar13 & 0x1f );
      local_78._0_4_ = uVar42;
      local_b4 = (int)( local_b4 << ( bVar13 & 0x1f ) ) >> ( bVar13 & 0x1f );
      local_68._0_4_ = local_b4;
      local_c0._0_4_ = (int)( (uint)local_c0 << ( bVar13 & 0x1f ) ) >> ( bVar13 & 0x1f );
      local_58._0_4_ = (uint)local_c0;
   }

   LAB_00100f28:lVar40 = 1;
   iVar15 = ( -(uint)!bVar6 & 2 ) + 2;
   do {
      *(int*)( local_78 + lVar40 * 4 ) = ( *(int*)( local_78 + lVar40 * 4 ) << ( bVar38 & 0x1f ) ) >> ( bVar38 & 0x1f );
      *(int*)( local_68 + lVar40 * 4 ) = ( *(int*)( local_68 + lVar40 * 4 ) << ( bVar14 & 0x1f ) ) >> ( bVar14 & 0x1f );
      *(int*)( local_58 + lVar40 * 4 ) = ( *(int*)( local_58 + lVar40 * 4 ) << ( bVar26 & 0x1f ) ) >> ( bVar26 & 0x1f );
      lVar40 = lVar40 + 1;
   }
 while ( (int)lVar40 < iVar15 );
   if (1 < (uint)local_a0) {
      lVar40 = 1;
      uVar10 = ( 1 << (sbyte)iVar8 ) - 1;
      bVar14 = 0x20 - (sbyte)iVar8;
      do {
         uVar39 = local_b4 + *(int*)( local_68 + lVar40 * 4 ) & uVar10;
         uVar28 = *(int*)( local_78 + lVar40 * 4 ) + uVar42 & uVar10;
         uVar41 = (uint)local_c0 + *(int*)( local_58 + lVar40 * 4 ) & uVar10;
         if (param_4 != 0) {
            uVar28 = (int)( uVar28 << ( bVar14 & 0x1f ) ) >> ( bVar14 & 0x1f );
            uVar39 = (int)( uVar39 << ( bVar14 & 0x1f ) ) >> ( bVar14 & 0x1f );
            uVar41 = (int)( uVar41 << ( bVar14 & 0x1f ) ) >> ( bVar14 & 0x1f );
         }

         *(uint*)( local_68 + lVar40 * 4 ) = uVar39;
         *(uint*)( local_78 + lVar40 * 4 ) = uVar28;
         *(uint*)( local_58 + lVar40 * 4 ) = uVar41;
         lVar40 = lVar40 + 1;
      }
 while ( (int)lVar40 < iVar15 );
   }

   LAB_001009b0:puVar32 = local_68;
   puVar43 = local_58;
   lVar40 = 0;
   do {
      uVar9 = bcdec__unquantize(*(int*)( local_78 + lVar40 * 4 ), iVar8, param_4);
      iVar15 = *(int*)( puVar32 + lVar40 * 4 );
      *(undefined4*)( local_78 + lVar40 * 4 ) = uVar9;
      uVar9 = bcdec__unquantize(iVar15, iVar8, param_4);
      iVar15 = *(int*)( puVar43 + lVar40 * 4 );
      *(undefined4*)( puVar32 + lVar40 * 4 ) = uVar9;
      uVar9 = bcdec__unquantize(iVar15, iVar8, param_4);
      *(undefined4*)( puVar43 + lVar40 * 4 ) = uVar9;
      lVar40 = lVar40 + 1;
   }
 while ( lVar40 != ( ulong )(-(uint)!bVar6 & 2) + 2 );
   puVar43 = bcdec_bc6h_half::aWeight3;
   if (9 < (uint)local_c8) {
      puVar43 = bcdec_bc6h_half::aWeight4;
   }

   bVar14 = 3 - !bVar6;
   local_c0 = bcdec_bc6h_half::partition_sets + (long)(int)local_a8 * 0x10;
   uVar41 = 0;
   uVar10 = ( 1 << ( bVar14 & 0x1f ) ) - 1;
   LAB_00100a69:lVar40 = 0;
   puVar33 = param_2;
   if ((uint)local_c8 < 10) goto LAB_00100b6b;
   do {
      iVar8 = 1;
      uVar42 = uVar41 | (uint)lVar40;
      uVar37 = uVar36;
      if (uVar42 == 0) goto LAB_001024d0;
      uVar42 = 0;
      iVar8 = 1;
      puVar34 = puVar33;
      uVar28 = 0xf;
      bVar26 = 4;
      bVar38 = 0x3c;
      while (true) {
         lVar18 = (long)(int)uVar42;
         lVar25 = (long)iVar8;
         iVar8 = *(int*)( puVar43 + (long)(int)( uVar28 & (uint)uVar30 ) * 4 );
         uVar30 = uVar30 >> ( bVar26 & 0x3f ) | uVar36 << ( bVar38 & 0x3f );
         uVar36 = uVar37 >> ( bVar26 & 0x3f );
         iVar15 = 0x40 - iVar8;
         iVar27 = *(int*)( local_78 + lVar18 * 4 ) * iVar15 + 0x20 + *(int*)( local_78 + lVar25 * 4 ) * iVar8 >> 6;
         iVar29 = *(int*)( local_68 + lVar25 * 4 ) * iVar8 + 0x20 + *(int*)( local_68 + lVar18 * 4 ) * iVar15 >> 6;
         iVar8 = iVar8 * *(int*)( local_58 + lVar25 * 4 ) + 0x20 + iVar15 * *(int*)( local_58 + lVar18 * 4 ) >> 6;
         if (param_4 == 0) {
            uVar17 = ( ushort )(iVar27 * 0x1f >> 6);
            uVar24 = ( ushort )(iVar29 * 0x1f >> 6);
            uVar7 = ( ushort )(iVar8 * 0x1f >> 6);
         }
 else {
            if (iVar27 < 0) {
               iVar15 = iVar27 * -0x1f >> 5;
               uVar17 = ( ushort )(iVar15 != 0) << 0xf;
            }
 else {
               uVar17 = 0;
               iVar15 = iVar27 * 0x1f >> 5;
            }

            uVar17 = uVar17 | (ushort)iVar15;
            if (iVar29 < 0) {
               iVar15 = iVar29 * -0x1f >> 5;
               uVar24 = ( ushort )(iVar15 != 0) << 0xf;
            }
 else {
               uVar24 = 0;
               iVar15 = iVar29 * 0x1f >> 5;
            }

            uVar24 = uVar24 | (ushort)iVar15;
            if (iVar8 < 0) {
               iVar8 = iVar8 * -0x1f >> 5;
               uVar7 = ( ushort )(iVar8 != 0) << 0xf | (ushort)iVar8;
            }
 else {
               uVar7 = ( ushort )(iVar8 * 0x1f >> 5);
            }

         }

         lVar40 = lVar40 + 1;
         *puVar34 = uVar17;
         puVar33 = puVar34 + 3;
         puVar34[1] = uVar24;
         puVar34[2] = uVar7;
         if (lVar40 == 4) {
            uVar41 = uVar41 + 1;
            local_c0 = local_c0 + 4;
            param_2 = param_2 + param_3;
            if (uVar41 != 4) goto LAB_00100a69;
            goto LAB_001006e0;
         }

         if (9 < (uint)local_c8) break;
         LAB_00100b6b:uVar42 = ( (byte)local_c0[lVar40] & 1 ) * 2;
         iVar8 = uVar42 + 1;
         uVar37 = uVar36;
         if ((char)local_c0[lVar40] < '\0') {
            LAB_001024d0:uVar36 = uVar10 & uVar37;
            puVar34 = puVar33;
            uVar28 = uVar10;
            bVar26 = bVar14;
            bVar38 = 0x40 - bVar14;
         }
 else {
            puVar34 = puVar33;
            uVar28 = 7;
            bVar26 = 3;
            bVar38 = 0x3d;
         }

      }
;
   }
 while ( true );
}
void bcdec_bc6h_float(undefined8 param_1, long param_2, int param_3) {
   float fVar1;
   long lVar2;
   undefined1 *puVar3;
   uint uVar4;
   uint uVar5;
   float fVar6;
   long in_FS_OFFSET;
   undefined1 local_88[96];
   undefined1 local_28[8];
   long local_20;
   puVar3 = local_88;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   bcdec_bc6h_half(param_1, local_88, 0xc);
   fVar1 = _LC0;
   do {
      lVar2 = 0;
      do {
         uVar4 = ( uint ) * (ushort*)( puVar3 + lVar2 ) << 0xd;
         uVar5 = uVar4 & 0xf800000;
         uVar4 = uVar4 & 0xfffe000;
         if (uVar5 == 0xf800000) {
            fVar6 = (float)( uVar4 + 0x70000000 );
         }
 else if (uVar5 == 0) {
            fVar6 = (float)( uVar4 + 0x38800000 ) - fVar1;
         }
 else {
            fVar6 = (float)( uVar4 + 0x38000000 );
         }

         *(uint*)( param_2 + lVar2 * 2 ) = ( *(ushort*)( puVar3 + lVar2 ) & 0x8000 ) << 0x10 | (uint)fVar6;
         uVar4 = ( uint ) * (ushort*)( puVar3 + lVar2 + 2 ) << 0xd;
         uVar5 = uVar4 & 0xf800000;
         uVar4 = uVar4 & 0xfffe000;
         if (uVar5 == 0xf800000) {
            fVar6 = (float)( uVar4 + 0x70000000 );
         }
 else if (uVar5 == 0) {
            fVar6 = (float)( uVar4 + 0x38800000 ) - fVar1;
         }
 else {
            fVar6 = (float)( uVar4 + 0x38000000 );
         }

         *(uint*)( param_2 + 4 + lVar2 * 2 ) = ( *(ushort*)( puVar3 + lVar2 + 2 ) & 0x8000 ) << 0x10 | (uint)fVar6;
         uVar4 = ( uint ) * (ushort*)( puVar3 + lVar2 + 4 ) << 0xd;
         uVar5 = uVar4 & 0xf800000;
         uVar4 = uVar4 & 0xfffe000;
         if (uVar5 == 0xf800000) {
            fVar6 = (float)( uVar4 + 0x70000000 );
         }
 else if (uVar5 == 0) {
            fVar6 = (float)( uVar4 + 0x38800000 ) - fVar1;
         }
 else {
            fVar6 = (float)( uVar4 + 0x38000000 );
         }

         *(uint*)( param_2 + 8 + lVar2 * 2 ) = ( *(ushort*)( puVar3 + lVar2 + 4 ) & 0x8000 ) << 0x10 | (uint)fVar6;
         lVar2 = lVar2 + 6;
      }
 while ( lVar2 != 0x18 );
      puVar3 = puVar3 + 0x18;
      param_2 = param_2 + (long)param_3 * 4;
   }
 while ( puVar3 != local_28 );
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void bcdec_bc7(ulong *param_1, undefined1 (*param_2)[16], int param_3) {
   uint *puVar1;
   int iVar2;
   uint uVar3;
   int iVar4;
   int iVar5;
   uint *puVar6;
   byte bVar7;
   byte bVar8;
   long lVar9;
   uint uVar10;
   uint uVar11;
   long lVar12;
   uint *puVar13;
   ulong uVar14;
   uint *puVar15;
   undefined1 *puVar16;
   long lVar17;
   int iVar18;
   int iVar19;
   int iVar20;
   ulong uVar21;
   ulong uVar22;
   long lVar23;
   uint uVar24;
   ulong uVar25;
   byte bVar26;
   int iVar27;
   uint uVar28;
   uint uVar29;
   uint *puVar30;
   uint uVar31;
   char *pcVar32;
   int iVar33;
   uint *puVar34;
   uint *puVar35;
   long in_FS_OFFSET;
   bool bVar36;
   ulong local_118;
   undefined1(*local_108)[16];
   char *local_100;
   undefined1 *local_f8;
   ulong local_f0;
   undefined1 *local_e0;
   int local_d8;
   uint local_d4;
   undefined1 *local_d0;
   uint local_bc;
   char local_b8[16];
   uint local_a8[8];
   uint local_88[4];
   uint local_78[14];
   long local_40;
   uVar21 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar22 = param_1[1];
   uVar25 = *param_1;
   do {
      local_118 = uVar25 >> 1 | uVar22 << 0x3f;
      local_f0 = uVar22 >> 1;
      iVar5 = (int)uVar21;
      if (( uVar25 & 1 ) != 0) {
         local_bc = ( uint )(uVar25 >> 1);
         if (( 0x8fUL >> ( uVar21 & 0x3f ) & 1 ) == 0) {
            if (iVar5 == 6) {
               lVar12 = 2;
               local_d8 = 1;
               uVar11 = 0;
               local_d4 = 0;
               local_bc = 0;
            }
 else {
               uVar14 = local_118 >> 2;
               local_118 = uVar14 | local_f0 << 0x3e;
               local_f0 = uVar22 >> 3;
               local_bc = local_bc & 3;
               if (iVar5 == 4) {
                  local_d8 = 1;
                  uVar11 = 0;
                  local_118 = local_118 >> 1 | local_f0 << 0x3f;
                  local_d4 = (uint)uVar14 & 1;
                  local_f0 = uVar22 >> 4;
                  lVar12 = 2;
               }
 else {
                  local_d8 = 1;
                  lVar12 = 2;
                  uVar11 = 0;
                  local_d4 = 0;
               }

            }

         }
 else {
            if (( uVar21 & 0xfffffffd ) == 0) {
               local_d8 = 3;
               lVar12 = 6;
               bVar8 = ( -(iVar5 == 0) & 2U ) + 0x3a;
               uVar22 = ( -(ulong)(iVar5 == 0) & 0xffffffffffffffd0 ) + 0x3f;
               uVar11 = ( -(uint)(iVar5 == 0) & 0xffffffd0 ) + 0x3f;
               bVar26 = ( -(iVar5 == 0) & 0xfeU ) + 6;
            }
 else {
               bVar8 = 0x3a;
               uVar22 = 0x3f;
               lVar12 = 4;
               local_d8 = 2;
               uVar11 = 0x3f;
               bVar26 = 6;
            }

            uVar22 = uVar22 & local_f0;
            uVar11 = uVar11 & local_bc;
            local_d4 = 0;
            local_bc = 0;
            local_f0 = local_f0 >> ( bVar26 & 0x3f );
            local_118 = uVar22 << ( bVar8 & 0x3f ) | local_118 >> ( bVar26 & 0x3f );
         }

         puVar34 = local_a8;
         puVar1 = puVar34 + lVar12 * 4;
         bVar8 = ( &bcdec_bc7::actual_bits_count )[iVar5];
         puVar35 = local_a8 + 3;
         uVar10 = ( 1 << ( bVar8 & 0x1f ) ) - 1;
         puVar15 = puVar34;
         puVar6 = puVar34;
         puVar30 = puVar1;
         do {
            do {
               puVar13 = puVar15 + 4;
               uVar22 = local_f0 & uVar10;
               *puVar15 = uVar10 & (uint)local_118;
               local_f0 = local_f0 >> ( bVar8 & 0x3f );
               local_118 = local_118 >> ( bVar8 & 0x3f ) | uVar22 << ( 0x40 - bVar8 & 0x3f );
               puVar15 = puVar13;
            }
 while ( puVar30 != puVar13 );
            puVar15 = puVar6 + 1;
            puVar30 = puVar30 + 1;
            puVar6 = puVar15;
         }
 while ( puVar35 != puVar15 );
         bVar26 = ( &DAT_00106968 )[iVar5];
         if ('\0' < (char)bVar26) {
            uVar10 = ( 1 << ( bVar26 & 0x1f ) ) - 1;
            puVar15 = puVar34;
            do {
               puVar6 = puVar15 + 4;
               uVar22 = local_f0 & uVar10;
               puVar15[3] = uVar10 & (uint)local_118;
               local_f0 = local_f0 >> ( bVar26 & 0x3f );
               local_118 = local_118 >> ( bVar26 & 0x3f ) | uVar22 << ( 0x40 - bVar26 & 0x3f );
               puVar15 = puVar6;
            }
 while ( puVar1 != puVar6 );
         }

         puVar15 = puVar34;
         if (( 0xcbUL >> ( uVar21 & 0x3f ) & 1 ) != 0) {
            do {
               puVar6 = puVar15 + 4;
               *puVar15 = *puVar15 << 1;
               for (int i = 0; i < 3; i++) {
                  puVar15[( i + 1 )] = puVar15[( i + 1 )] << 1;
               }

               puVar15 = puVar6;
            }
 while ( puVar1 != puVar6 );
            uVar22 = local_118;
            puVar15 = puVar34;
            if (iVar5 == 1) {
               uVar22 = local_f0 << 0x3f;
               uVar14 = local_f0 >> 1;
               uVar31 = (uint)local_118 & 1;
               local_f0 = local_f0 >> 2;
               uVar10 = ( uint )(local_118 >> 1) & 1;
               local_118 = ( local_118 >> 1 | uVar22 ) >> 1 | uVar14 << 0x3f;
               do {
                  *puVar15 = *puVar15 | uVar31;
                  puVar15[4] = puVar15[4] | uVar31;
                  puVar15[8] = puVar15[8] | uVar10;
                  puVar15[0xc] = puVar15[0xc] | uVar10;
                  puVar15 = puVar15 + 1;
               }
 while ( puVar35 != puVar15 );
            }
 else {
               do {
                  puVar6 = puVar15 + 4;
                  local_118 = uVar22 >> 1 | local_f0 << 0x3f;
                  uVar10 = (uint)uVar22;
                  local_f0 = local_f0 >> 1;
                  *puVar15 = uVar10 & 1 | *puVar15;
                  for (int i = 0; i < 3; i++) {
                     puVar15[( i + 1 )] = uVar10 & 1 | puVar15[( i + 1 )];
                  }

                  uVar22 = local_118;
                  puVar15 = puVar6;
               }
 while ( puVar1 != puVar6 );
            }

         }

         uVar22 = local_118;
         bVar7 = ( byte )(0xcb >> ( (byte)uVar21 & 0x1f )) & 1;
         bVar8 = bVar8 + bVar7;
         bVar7 = bVar7 + bVar26;
         puVar15 = puVar35;
         do {
            puVar6 = puVar15 + -3;
            do {
               puVar30 = puVar6 + 1;
               uVar10 = *puVar6 << ( 8 - bVar8 & 0x1f );
               *puVar6 = uVar10 | (int)uVar10 >> ( bVar8 & 0x1f );
               puVar6 = puVar30;
            }
 while ( puVar15 != puVar30 );
            puVar6 = puVar15 + 4;
            uVar10 = *puVar15 << ( 8 - bVar7 & 0x1f );
            *puVar15 = uVar10 | (int)uVar10 >> ( bVar7 & 0x1f );
            puVar15 = puVar6;
         }
 while ( puVar35 + lVar12 * 4 != puVar6 );
         if (bVar26 == 0) {
            if (( (int)puVar1 - (int)puVar34 & 0x10U ) != 0) {
               local_a8[3] = 0xff;
               puVar34 = local_a8 + 4;
               if (puVar1 == puVar34) goto LAB_00102b14;
            }

            do {
               puVar34[3] = 0xff;
               puVar35 = puVar34 + 8;
               puVar34[7] = 0xff;
               puVar34 = puVar35;
            }
 while ( puVar1 != puVar35 );
         }

         LAB_00102b14:if (iVar5 < 2) {
            bVar8 = 0;
            local_f8 = bcdec_bc7::aWeight3;
            local_d0 = bcdec_bc7::aWeight3;
         }
 else if (iVar5 == 6) {
            bVar8 = 0;
            local_f8 = bcdec_bc7::aWeight4;
            local_d0 = bcdec_bc7::aWeight3;
         }
 else {
            local_f8 = bcdec_bc7::aWeight2;
            if (iVar5 == 4) {
               bVar8 = 3;
               local_d0 = bcdec_bc7::aWeight3;
            }
 else if (iVar5 == 5) {
               bVar8 = 2;
               local_d0 = bcdec_bc7::aWeight2;
            }
 else {
               bVar8 = 0;
               local_d0 = bcdec_bc7::aWeight3;
            }

         }

         local_100 = local_b8;
         iVar33 = 0;
         local_118._0_4_ = (uint)uVar25 & 1;
         local_e0 = bcdec_bc7::partition_sets + ( (long)( local_d8 + -2 ) * 0x40 + (long)(int)uVar11 ) * 0x10;
         puVar16 = local_e0;
         pcVar32 = local_100;
         do {
            lVar12 = 0;
            do {
               if (local_d8 == 1) {
                  if (iVar33 == 0 && (int)lVar12 == 0) {
                     if (iVar5 < 2) {
                        bVar7 = 0x3e;
                        uVar25 = 3;
                        uVar11 = 3;
                        bVar26 = 2;
                     }
 else {
                        bVar36 = iVar5 == 6;
                        uVar25 = 1;
                        uVar11 = (uint)local_118;
                        if (bVar36) {
                           uVar25 = 7;
                           uVar11 = 7;
                        }

                        bVar26 = bVar36 * '\x02' + 1;
                        bVar7 = !bVar36 * '\x02' + 0x3d;
                     }

                  }
 else if (iVar5 < 2) {
                     bVar7 = 0x3d;
                     uVar25 = 7;
                     uVar11 = 7;
                     bVar26 = 3;
                  }
 else {
                     uVar25 = 0xf;
                     bVar36 = iVar5 == 6;
                     if (!bVar36) {
                        uVar25 = 3;
                     }

                     uVar11 = 0xf;
                     if (!bVar36) {
                        uVar11 = 3;
                     }

                     bVar7 = !bVar36 * '\x02' + 0x3c;
                     bVar26 = bVar36 * '\x02' + 2;
                  }

               }
 else {
                  bVar26 = 3;
                  if (1 < iVar5) {
                     bVar26 = ( iVar5 == 6 ) * '\x02' + 2;
                  }

                  if ((char)puVar16[lVar12] < '\0') {
                     bVar26 = bVar26 - 1;
                  }

                  uVar11 = ( 1 << ( bVar26 & 0x1f ) ) - 1;
                  bVar7 = -bVar26;
                  uVar25 = (ulong)(int)uVar11;
               }

               uVar25 = uVar25 & local_f0;
               pcVar32[lVar12] = (byte)uVar11 & (byte)uVar22;
               lVar12 = lVar12 + 1;
               local_f0 = local_f0 >> ( bVar26 & 0x3f );
               uVar22 = uVar22 >> ( bVar26 & 0x3f ) | uVar25 << ( bVar7 & 0x3f );
            }
 while ( lVar12 != 4 );
            iVar33 = iVar33 + 1;
            pcVar32 = pcVar32 + 4;
            puVar16 = puVar16 + 4;
         }
 while ( iVar33 != 4 );
         iVar5 = 0;
         local_108 = param_2;
         do {
            lVar12 = 0;
            do {
               if (local_d8 == 1) {
                  if (iVar5 != 0 || (int)lVar12 != 0) {
                     iVar33 = 1;
                     iVar27 = 0;
                     goto LAB_00102ceb;
                  }

                  lVar23 = (long)local_b8[0];
                  iVar33 = 1;
                  iVar27 = 0;
                  iVar4 = 0;
                  iVar2 = 1;
                  if (bVar8 != 0) goto LAB_00102f2e;
                  LAB_00102e70:lVar9 = (long)iVar33;
                  iVar33 = *(int*)( local_f8 + lVar23 * 4 );
                  lVar23 = (long)iVar27;
                  iVar20 = 0x40 - iVar33;
                  iVar2 = local_a8[lVar23 * 4] * iVar20 + 0x20 + local_a8[lVar9 * 4] * iVar33;
                  iVar4 = local_a8[lVar23 * 4 + 1] * iVar20 + 0x20 + local_a8[lVar9 * 4 + 1] * iVar33;
                  iVar27 = local_a8[lVar23 * 4 + 2] * iVar20 + 0x20 + local_a8[lVar9 * 4 + 2] * iVar33;
                  iVar33 = iVar20 * local_a8[lVar23 * 4 + 3] + 0x20 + iVar33 * local_a8[lVar9 * 4 + 3];
               }
 else {
                  iVar27 = ( (byte)local_e0[lVar12] & 3 ) * 2;
                  iVar33 = iVar27 + 1;
                  LAB_00102ceb:lVar23 = (long)local_100[lVar12];
                  if (bVar8 == 0) goto LAB_00102e70;
                  iVar4 = iVar27;
                  iVar2 = iVar33;
                  bVar26 = bVar8;
                  if ((int)lVar12 == 0 && iVar5 == 0) {
                     LAB_00102f2e:iVar33 = iVar2;
                     iVar27 = iVar4;
                     bVar26 = bVar8 - 1;
                  }

                  lVar17 = (long)iVar33;
                  uVar11 = ( 1 << ( bVar26 & 0x1f ) ) - 1;
                  uVar25 = (long)(int)uVar11 & local_f0;
                  iVar33 = *(int*)( local_d0 + (long)(int)( uVar11 & (uint)uVar22 ) * 4 );
                  local_f0 = local_f0 >> ( bVar26 & 0x3f );
                  lVar9 = (long)iVar27;
                  uVar22 = uVar25 << ( -bVar26 & 0x3f ) | uVar22 >> ( bVar26 & 0x3f );
                  iVar18 = 0x40 - iVar33;
                  iVar20 = *(int*)( local_f8 + lVar23 * 4 );
                  iVar19 = 0x40 - iVar20;
                  if (local_d4 == 0) {
                     iVar2 = local_a8[lVar9 * 4] * iVar19 + 0x20 + local_a8[lVar17 * 4] * iVar20;
                     iVar4 = local_a8[lVar9 * 4 + 1] * iVar19 + 0x20 + local_a8[lVar17 * 4 + 1] * iVar20;
                     iVar27 = iVar19 * local_a8[lVar9 * 4 + 2] + 0x20 + iVar20 * local_a8[lVar17 * 4 + 2];
                     iVar33 = iVar18 * local_a8[lVar9 * 4 + 3] + 0x20 + iVar33 * local_a8[lVar17 * 4 + 3];
                  }
 else {
                     iVar2 = local_a8[lVar9 * 4] * iVar18 + 0x20 + local_a8[lVar17 * 4] * iVar33;
                     iVar4 = local_a8[lVar9 * 4 + 1] * iVar18 + 0x20 + local_a8[lVar17 * 4 + 1] * iVar33;
                     iVar27 = local_a8[lVar9 * 4 + 2] * iVar18 + 0x20 + local_a8[lVar17 * 4 + 2] * iVar33;
                     iVar33 = local_a8[lVar9 * 4 + 3] * iVar19 + 0x20 + local_a8[lVar17 * 4 + 3] * iVar20;
                  }

               }

               uVar3 = iVar33 >> 6;
               uVar31 = iVar27 >> 6;
               uVar10 = iVar4 >> 6;
               uVar11 = iVar2 >> 6;
               uVar29 = uVar11;
               uVar24 = uVar3;
               uVar28 = uVar31;
               if (( ( local_bc != 2 ) && ( uVar24 = uVar10 ),uVar28 = uVar3,uVar10 = uVar31,local_bc != 3 )) {
                  uVar29 = uVar3;
                  uVar10 = uVar11;
               }

               *(uint*)( *local_108 + lVar12 * 4 ) = ( ( ( uVar10 & 0xff ) << 8 | uVar28 & 0xff ) << 8 | uVar24 & 0xff ) << 8 | uVar29 & 0xff;
               lVar12 = lVar12 + 1;
            }
 while ( lVar12 != 4 );
            iVar5 = iVar5 + 1;
            local_100 = local_100 + 4;
            local_108 = (undefined1(*) [16])( *local_108 + param_3 );
            local_e0 = local_e0 + 4;
         }
 while ( iVar5 != 4 );
         goto LAB_0010285b;
      }

      uVar21 = ( ulong )(iVar5 + 1U);
      uVar22 = local_f0;
      uVar25 = local_118;
   }
 while ( iVar5 + 1U != 8 );
   iVar5 = 4;
   do {
      *param_2 = (undefined1[16])0x0;
      param_2 = (undefined1(*) [16])( *param_2 + param_3 );
      iVar5 = iVar5 + -1;
   }
 while ( iVar5 != 0 );
   LAB_0010285b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* image_decompress_bcdec(Image*) */void image_decompress_bcdec(Image *param_1) {
   long *plVar1;
   undefined8 *__dest;
   size_t __n;
   code *pcVar2;
   char *pcVar3;
   char cVar4;
   undefined1 uVar5;
   uint uVar6;
   uint uVar7;
   uint uVar8;
   int iVar9;
   int iVar10;
   undefined4 uVar11;
   undefined4 uVar12;
   undefined4 uVar13;
   long lVar14;
   long lVar15;
   ulong uVar16;
   undefined8 *puVar17;
   undefined8 *puVar18;
   long in_FS_OFFSET;
   undefined4 local_1a8;
   uint local_1a4;
   uint local_128;
   uint local_124;
   long local_100;
   long local_f8;
   ulong local_f0;
   long local_e8;
   undefined8 *local_e0;
   char *local_d8;
   long local_d0;
   int local_c8[34];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   OS::get_singleton();
   lVar14 = OS::get_ticks_msec();
   uVar6 = Image::get_width();
   uVar7 = Image::get_height();
   local_1a4 = uVar7;
   local_124 = uVar6;
   if (( ( uVar6 | uVar7 ) & 3 ) != 0) {
      if (( uVar6 & 3 ) != 0) {
         uVar8 = ( uint )((int)uVar6 >> 0x1f) >> 0x1e;
         local_124 = uVar6 + 4 + ( uVar8 - ( uVar6 + uVar8 & 3 ) );
      }

      if (( uVar7 & 3 ) != 0) {
         uVar8 = ( uint )((int)uVar7 >> 0x1f) >> 0x1e;
         local_1a4 = uVar7 + 4 + ( uVar8 - ( uVar7 + uVar8 & 3 ) );
      }

      cVar4 = is_print_verbose_enabled();
      if (cVar4 != '\0') {
         local_f0 = 0;
         local_d8 = "Compressed image\'s dimensions are not multiples of 4 (%dx%d), aligning to (%dx%d)";
         local_d0 = 0x51;
         String::parse_latin1((StrRange*)&local_f0);
         vformat<int,int,int,int>((String_conflict*)&local_e8, (int)(StrRange*)&local_f0, uVar6, uVar7, local_124);
         Variant::Variant((Variant*)local_c8, (String_conflict*)&local_e8);
         stringify_variants((Variant*)&local_d8);
         __print_line((String_conflict*)&local_d8);
         pcVar3 = local_d8;
         if (local_d8 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_d8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_d8 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }

         }

         if (Variant::needs_deinit[local_c8[0]] != '\0') {
            Variant::_clear_internal();
         }

         lVar15 = local_e8;
         if (local_e8 != 0) {
            LOCK();
            plVar1 = (long*)( local_e8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_e8 = 0;
               Memory::free_static((void*)( lVar15 + -0x10 ), false);
            }

         }

         uVar16 = local_f0;
         if (local_f0 != 0) {
            LOCK();
            plVar1 = (long*)( local_f0 - 0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_f0 = 0;
               Memory::free_static((void*)( uVar16 - 0x10 ), false);
            }

         }

      }

   }

   iVar9 = Image::get_format();
   switch (iVar9) {
      case 0x11:
    local_128 = 0;
    local_1a8 = 5;
    break;
      case 0x12:
    local_128 = 1;
    local_1a8 = 5;
    break;
      case 0x13:
      case 0x22:
    local_128 = 2;
    local_1a8 = 5;
    break;
      case 0x14:
    local_128 = 3;
    local_1a8 = 2;
    break;
      case 0x15:
    local_128 = 4;
    local_1a8 = 3;
    break;
      case 0x16:
    local_128 = 7;
    local_1a8 = 5;
    break;
      case 0x17:
    local_128 = 5;
    local_1a8 = 0xe;
    break;
      case 0x18:
    local_128 = 6;
    local_1a8 = 0xe;
    break;
      default:
    local_e8 = 0;
    local_d0 = 1;
    local_d8 = ".";
    String::parse_latin1((StrRange *)&local_e8);
    Image::get_format_name(&local_f8,iVar9);
      operator+((char *)&
      local_f0,(String_conflict*)"bcdec: Can\'t decompress unknown format: ";
      String::operator +((String_conflict*)&local_d8, (String_conflict*)&local_f0);
      _err_print_error("image_decompress_bcdec", "modules/bcdec/image_decompress_bcdec.cpp", 0xde, "Method/function failed.", (String_conflict*)&local_d8, 0, 0);
      pcVar3 = local_d8;
      if (local_d8 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_d8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_d8 = (char*)0x0;
            Memory::free_static(pcVar3 + -0x10, false);
         }

      }

      uVar16 = local_f0;
      if (local_f0 != 0) {
         LOCK();
         plVar1 = (long*)( local_f0 - 0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_f0 = 0;
            Memory::free_static((void*)( uVar16 - 0x10 ), false);
         }

      }

      lVar14 = local_f8;
      if (local_f8 != 0) {
         LOCK();
         plVar1 = (long*)( local_f8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_f8 = 0;
            Memory::free_static((void*)( lVar14 + -0x10 ), false);
         }

      }

      lVar14 = local_e8;
      if (local_e8 != 0) {
         LOCK();
         plVar1 = (long*)( local_e8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_e8 = 0;
            Memory::free_static((void*)( lVar14 + -0x10 ), false);
         }

      }

      goto LAB_001033e9;
   }

   iVar10 = Image::get_mipmap_count();
   uVar5 = Image::has_mipmaps();
   lVar15 = Image::get_image_data_size(local_124, local_1a4, local_1a8, uVar5);
   local_e0 = (undefined8*)0x0;
   if (lVar15 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      LAB_00105745:if (local_e0 != (undefined8*)0x0) {
         LAB_00103630:if (1 < (ulong)local_e0[-2]) {
            if (local_e0 == (undefined8*)0x0) {
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            __n = local_e0[-1];
            uVar16 = 0x10;
            if (__n != 0) {
               uVar16 = __n - 1 | __n - 1 >> 1;
               uVar16 = uVar16 | uVar16 >> 2;
               uVar16 = uVar16 | uVar16 >> 4;
               uVar16 = uVar16 | uVar16 >> 8;
               uVar16 = uVar16 | uVar16 >> 0x10;
               uVar16 = ( uVar16 | uVar16 >> 0x20 ) + 0x11;
            }

            puVar18 = (undefined8*)Memory::alloc_static(uVar16, false);
            puVar17 = local_e0;
            if (puVar18 == (undefined8*)0x0) {
               _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
            }
 else {
               __dest = puVar18 + 2;
               *puVar18 = 1;
               puVar18[1] = __n;
               memcpy(__dest, local_e0, __n);
               puVar18 = local_e0;
               LOCK();
               plVar1 = puVar17 + -2;
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               local_e0 = __dest;
               if (*plVar1 == 0) {
                  local_e0 = (undefined8*)0x0;
                  Memory::free_static(puVar18 + -2, false);
                  local_e0 = __dest;
               }

            }

         }

      }

   }
 else if (lVar15 != 0) {
      uVar16 = lVar15 - 1U | lVar15 - 1U >> 1;
      uVar16 = uVar16 | uVar16 >> 2;
      uVar16 = uVar16 | uVar16 >> 4;
      uVar16 = uVar16 | uVar16 >> 8;
      uVar16 = uVar16 | uVar16 >> 0x10;
      puVar17 = (undefined8*)Memory::alloc_static(( uVar16 | uVar16 >> 0x20 ) + 0x11, false);
      if (puVar17 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         goto LAB_00105745;
      }

      local_e0 = puVar17 + 2;
      *puVar17 = 1;
      puVar17[1] = lVar15;
      goto LAB_00103630;
   }

   Image::get_data();
   lVar15 = local_d0;
   if (local_d0 != 0) {
      LOCK();
      plVar1 = (long*)( local_d0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_d0 = 0;
         Memory::free_static((void*)( lVar15 + -0x10 ), false);
      }

   }

   if (-1 < iVar10) {
      local_f0 = local_f0 & 0xffffffff00000000;
      local_d8 = (char*)( (ulong)local_d8 & 0xffffffff00000000 );
      Image::get_image_mipmap_offset_and_dimensions(local_124, local_1a4, iVar9, 0, &local_f0, (Variant*)&local_d8);
      Image::get_image_mipmap_offset(local_124, local_1a4, local_1a8, 0);
      if (( ( (uint)local_d8 | (uint)local_f0 ) & 3 ) != 0) {
         /* WARNING: Could not recover jumptable at 0x00103779. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *(code*)( &DAT_00106104 + *(int*)( &DAT_00106104 + (ulong)local_128 * 4 ) ) )();
         return;
      }

      /* WARNING: Could not recover jumptable at 0x00104ba0. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *(code*)( &DAT_00106124 + *(int*)( &DAT_00106124 + (ulong)local_128 * 4 ) ) )(&DAT_00106124, local_f0 & 0xffffffff, &DAT_00106124 + *(int*)( &DAT_00106124 + (ulong)local_128 * 4 ));
      return;
   }

   uVar5 = Image::has_mipmaps();
   Image::set_data(param_1, local_124, local_1a4, uVar5, local_1a8, &local_e8);
   if (iVar9 == 0x22) {
      Image::convert_ra_rgba8_to_rg();
   }

   cVar4 = is_print_verbose_enabled();
   if (cVar4 != '\0') {
      OS::get_singleton();
      lVar15 = OS::get_ticks_msec();
      uVar11 = Image::get_mipmap_count();
      Image::get_format_name(&local_100, iVar9);
      uVar12 = Image::get_height();
      uVar13 = Image::get_width();
      local_f8 = 0;
      local_d0 = 0x44;
      local_d8 = "bcdec: Decompression of a %dx%d %s image with %d mipmaps took %d ms.";
      String::parse_latin1((StrRange*)&local_f8);
      vformat<int,int,String,int,unsigned_long>((String_conflict*)&local_f0, (StrRange*)&local_f8, uVar13, uVar12, &local_100, uVar11, lVar15 - lVar14);
      Variant::Variant((Variant*)local_c8, (String_conflict*)&local_f0);
      stringify_variants((Variant*)&local_d8);
      __print_line((String_conflict*)&local_d8);
      pcVar3 = local_d8;
      if (local_d8 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_d8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_d8 = (char*)0x0;
            Memory::free_static(pcVar3 + -0x10, false);
         }

      }

      if (Variant::needs_deinit[local_c8[0]] != '\0') {
         Variant::_clear_internal();
      }

      uVar16 = local_f0;
      if (local_f0 != 0) {
         LOCK();
         plVar1 = (long*)( local_f0 - 0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_f0 = 0;
            Memory::free_static((void*)( uVar16 - 0x10 ), false);
         }

      }

      lVar14 = local_f8;
      if (local_f8 != 0) {
         LOCK();
         plVar1 = (long*)( local_f8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_f8 = 0;
            Memory::free_static((void*)( lVar14 + -0x10 ), false);
         }

      }

      lVar14 = local_100;
      if (local_100 != 0) {
         LOCK();
         plVar1 = (long*)( local_100 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_100 = 0;
            Memory::free_static((void*)( lVar14 + -0x10 ), false);
         }

      }

   }

   puVar17 = local_e0;
   if (local_e0 != (undefined8*)0x0) {
      LOCK();
      plVar1 = local_e0 + -2;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_e0 = (undefined8*)0x0;
         Memory::free_static(puVar17 + -2, false);
      }

   }

   LAB_001033e9:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x00106da0) *//* WARNING: Removing unreachable block (ram,0x00106ed0) *//* WARNING: Removing unreachable block (ram,0x00107048) *//* WARNING: Removing unreachable block (ram,0x00106edc) *//* WARNING: Removing unreachable block (ram,0x00106ee6) *//* WARNING: Removing unreachable block (ram,0x0010702a) *//* WARNING: Removing unreachable block (ram,0x00106ef2) *//* WARNING: Removing unreachable block (ram,0x00106efc) *//* WARNING: Removing unreachable block (ram,0x0010700c) *//* WARNING: Removing unreachable block (ram,0x00106f08) *//* WARNING: Removing unreachable block (ram,0x00106f12) *//* WARNING: Removing unreachable block (ram,0x00106fee) *//* WARNING: Removing unreachable block (ram,0x00106f1e) *//* WARNING: Removing unreachable block (ram,0x00106f28) *//* WARNING: Removing unreachable block (ram,0x00106fd0) *//* WARNING: Removing unreachable block (ram,0x00106f34) *//* WARNING: Removing unreachable block (ram,0x00106f3e) *//* WARNING: Removing unreachable block (ram,0x00106fb2) *//* WARNING: Removing unreachable block (ram,0x00106f46) *//* WARNING: Removing unreachable block (ram,0x00106f50) *//* WARNING: Removing unreachable block (ram,0x00106f97) *//* WARNING: Removing unreachable block (ram,0x00106f58) *//* WARNING: Removing unreachable block (ram,0x00106f6d) *//* WARNING: Removing unreachable block (ram,0x00106f79) *//* String vformat<int, int, int, int>(String const&, int const, int const, int const, int const) */String_conflict *vformat<int,int,int,int>(String_conflict *param_1, int param_2, int param_3, int param_4, int param_5) {
   Variant *pVVar1;
   int iVar2;
   Variant *pVVar3;
   undefined4 in_register_00000034;
   int iVar4;
   int in_R9D;
   long in_FS_OFFSET;
   Array local_108[8];
   undefined8 local_100[9];
   Variant local_b8[24];
   Variant local_a0[24];
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_b8, param_3);
   Variant::Variant(local_a0, param_4);
   Variant::Variant(local_88, param_5);
   iVar2 = 0;
   Variant::Variant(local_70, in_R9D);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_108);
   iVar4 = (int)local_108;
   Array::resize(iVar4);
   pVVar3 = local_b8;
   do {
      iVar2 = iVar2 + 1;
      pVVar1 = (Variant*)Array::operator [](iVar4);
      Variant::operator =(pVVar1, pVVar3);
      pVVar3 = pVVar3 + 0x18;
   }
 while ( iVar2 != 4 );
   String::sprintf((Array*)local_100, (bool*)CONCAT44(in_register_00000034, param_2));
   *(undefined8*)param_1 = local_100[0];
   pVVar3 = (Variant*)local_40;
   Array::~Array(local_108);
   do {
      pVVar1 = pVVar3 + -0x18;
      pVVar3 = pVVar3 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar3 != local_b8 );
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x001071f0) *//* WARNING: Removing unreachable block (ram,0x00107320) *//* WARNING: Removing unreachable block (ram,0x00107498) *//* WARNING: Removing unreachable block (ram,0x0010732c) *//* WARNING: Removing unreachable block (ram,0x00107336) *//* WARNING: Removing unreachable block (ram,0x0010747a) *//* WARNING: Removing unreachable block (ram,0x00107342) *//* WARNING: Removing unreachable block (ram,0x0010734c) *//* WARNING: Removing unreachable block (ram,0x0010745c) *//* WARNING: Removing unreachable block (ram,0x00107358) *//* WARNING: Removing unreachable block (ram,0x00107362) *//* WARNING: Removing unreachable block (ram,0x0010743e) *//* WARNING: Removing unreachable block (ram,0x0010736e) *//* WARNING: Removing unreachable block (ram,0x00107378) *//* WARNING: Removing unreachable block (ram,0x00107420) *//* WARNING: Removing unreachable block (ram,0x00107384) *//* WARNING: Removing unreachable block (ram,0x0010738e) *//* WARNING: Removing unreachable block (ram,0x00107402) *//* WARNING: Removing unreachable block (ram,0x00107396) *//* WARNING: Removing unreachable block (ram,0x001073a0) *//* WARNING: Removing unreachable block (ram,0x001073e7) *//* WARNING: Removing unreachable block (ram,0x001073a8) *//* WARNING: Removing unreachable block (ram,0x001073bd) *//* WARNING: Removing unreachable block (ram,0x001073c9) *//* String vformat<int, int, String, int, unsigned long>(String const&, int const, int const, String
   const, int const, unsigned long const) */undefined8 *vformat<int,int,String,int,unsigned_long>(undefined8 *param_1, bool *param_2, int param_3, int param_4, String_conflict *param_5, int param_6, ulong param_7) {
   Variant *pVVar1;
   int iVar2;
   Variant *pVVar3;
   int iVar4;
   long in_FS_OFFSET;
   Array local_128[8];
   undefined8 local_120[9];
   Variant local_d8[24];
   Variant local_c0[24];
   Variant local_a8[24];
   Variant local_90[24];
   Variant local_78[24];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_d8, param_3);
   Variant::Variant(local_c0, param_4);
   Variant::Variant(local_a8, param_5);
   iVar2 = 0;
   Variant::Variant(local_90, param_6);
   Variant::Variant(local_78, param_7);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_128);
   iVar4 = (int)local_128;
   Array::resize(iVar4);
   pVVar3 = local_d8;
   do {
      iVar2 = iVar2 + 1;
      pVVar1 = (Variant*)Array::operator [](iVar4);
      Variant::operator =(pVVar1, pVVar3);
      pVVar3 = pVVar3 + 0x18;
   }
 while ( iVar2 != 5 );
   String::sprintf((Array*)local_120, param_2);
   *param_1 = local_120[0];
   pVVar3 = local_48;
   Array::~Array(local_128);
   do {
      pVVar1 = pVVar3 + -0x18;
      pVVar3 = pVVar3 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar3 != local_d8 );
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* CowData<unsigned char>::_realloc(long) */undefined8 CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }

   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}
/* image_decompress_bcdec(Image*) [clone .cold] */void image_decompress_bcdec(Image *param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}

