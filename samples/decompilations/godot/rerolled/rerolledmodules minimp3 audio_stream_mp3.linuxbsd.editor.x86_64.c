/* get_bits(bs_t*, int) */uint get_bits(bs_t *param_1, int param_2) {
   uint uVar1;
   byte bVar2;
   int iVar3;
   byte *pbVar4;
   uint uVar5;
   int iVar6;
   int iVar7;
   uVar1 = *(uint*)( param_1 + 8 );
   uVar5 = 0;
   *(uint*)( param_1 + 8 ) = uVar1 + param_2;
   if ((int)( uVar1 + param_2 ) <= *(int*)( param_1 + 0xc )) {
      pbVar4 = (byte*)( *(long*)param_1 + (long)( (int)uVar1 >> 3 ) );
      iVar7 = param_2 + ( uVar1 & 7 );
      iVar6 = iVar7 + -8;
      uVar1 = ( uint ) * pbVar4 & 0xff >> ( sbyte )(uVar1 & 7);
      if (iVar6 < 1) {
         uVar5 = 0;
      }
 else {
         uVar5 = 0;
         iVar3 = iVar6;
         do {
            pbVar4 = pbVar4 + 1;
            bVar2 = (byte)iVar3;
            iVar3 = iVar3 + -8;
            uVar5 = uVar5 | uVar1 << ( bVar2 & 0x1f );
            uVar1 = ( uint ) * pbVar4;
         }
 while ( iVar3 != ( iVar7 + -0x10 ) - ( iVar7 - 9U & 0xfffffff8 ) );
         iVar7 = iVar6 - ( iVar7 - 9U & 0xfffffff8 );
      }

      uVar5 = uVar1 >> ( 8U - (char)iVar7 & 0x1f ) | uVar5;
   }

   return uVar5;
}
/* hdr_valid(unsigned char const*) */bool hdr_valid(uchar *param_1) {
   byte bVar1;
   if (*param_1 == 0xff) {
      bVar1 = param_1[1];
      if (( ~bVar1 & 0xf0 ) == 0) {
         if (( bVar1 & 6 ) == 0) {
            return false;
         }

      }
 else if (( bVar1 & 0xfe ) != 0xe2) {
         return false;
      }

      if (param_1[2] >> 4 != 0xf) {
         return ( ~param_1[2] & 0xc ) != 0;
      }

   }

   return false;
}
/* L3_read_side_info(bs_t*, L3_gr_info_t*, unsigned char const*) */uint L3_read_side_info(bs_t *param_1, L3_gr_info_t *param_2, uchar *param_3) {
   L3_gr_info_t *pLVar1;
   byte bVar2;
   undefined2 uVar3;
   L3_gr_info_t LVar4;
   ushort uVar5;
   int iVar6;
   uint uVar7;
   int iVar8;
   uint uVar9;
   long lVar10;
   long lVar11;
   uint uVar12;
   uint local_3c;
   bVar2 = param_3[1];
   iVar6 = ( ( bVar2 >> 3 & 1 ) + ( bVar2 >> 4 & 1 ) ) * 3 + ( param_3[2] >> 2 & 3 );
   uVar9 = ( uint )(( ~param_3[3] & 0xc0 ) != 0);
   uVar12 = uVar9 + 1;
   if (( bVar2 & 8 ) == 0) {
      uVar7 = 0;
      local_3c = get_bits(param_1, uVar9 + 9);
      local_3c = local_3c >> (sbyte)uVar12;
   }
 else {
      uVar12 = uVar12 * 2;
      local_3c = get_bits(param_1, 9);
      uVar7 = get_bits(param_1, uVar12 + 7);
   }

   lVar10 = (long)(int)( iVar6 - ( uint )(iVar6 != 0) );
   iVar6 = 0;
   lVar11 = lVar10 * 0x28;
   pLVar1 = param_2 + (ulong)uVar12 * 0x20;
   do {
      uVar12 = uVar7;
      if (( ~param_3[3] & 0xc0 ) == 0) {
         uVar12 = uVar7 << 4;
      }

      uVar5 = get_bits(param_1, 0xc);
      *(ushort*)( param_2 + 8 ) = uVar5;
      iVar6 = iVar6 + (uint)uVar5;
      uVar5 = get_bits(param_1, 9);
      *(ushort*)( param_2 + 10 ) = uVar5;
      if (0x120 < uVar5) goto LAB_00100438;
      LVar4 = (L3_gr_info_t)get_bits(param_1, 8);
      param_2[0xe] = LVar4;
      uVar5 = get_bits(param_1, ( -(uint)((param_3[1] & 8) == 0) & 5 ) + 4);
      *(ushort*)( param_2 + 0xc ) = uVar5;
      *(undefined1**)param_2 = L3_read_side_info(bs_t * L3_gr_info_t * unsigned_char_const * ::g_scf_long + lVar10 * 0x17);
      *(undefined2*)( param_2 + 0x11 ) = _LC0;
      iVar8 = get_bits(param_1, 1);
      if (iVar8 == 0) {
         *(undefined2*)( param_2 + 0xf ) = 0;
         uVar9 = get_bits(param_1, 0xf);
         LVar4 = (L3_gr_info_t)get_bits(param_1, 4);
         param_2[0x16] = LVar4;
         LVar4 = (L3_gr_info_t)get_bits(param_1, 3);
         param_2[0x18] = (L3_gr_info_t)0xff;
         param_2[0x17] = LVar4;
      }
 else {
         LVar4 = (L3_gr_info_t)get_bits(param_1, 2);
         param_2[0xf] = LVar4;
         if (LVar4 == (L3_gr_info_t)0x0) goto LAB_00100438;
         LVar4 = (L3_gr_info_t)get_bits(param_1, 1);
         uVar3 = _LC1;
         param_2[0x10] = LVar4;
         *(undefined2*)( param_2 + 0x16 ) = uVar3;
         if (param_2[0xf] == (L3_gr_info_t)0x2) {
            if (LVar4 == (L3_gr_info_t)0x0) {
               param_2[0x16] = (L3_gr_info_t)0x8;
               *(undefined2*)( param_2 + 0x11 ) = 0x2700;
               *(undefined1**)param_2 = L3_read_side_info(bs_t * L3_gr_info_t * unsigned_char_const * ::g_scf_short + lVar11);
            }
 else {
               *(undefined1**)param_2 = L3_read_side_info(bs_t * L3_gr_info_t * unsigned_char_const * ::g_scf_mixed + lVar11);
               bVar2 = param_3[1];
               param_2[0x12] = (L3_gr_info_t)0x1e;
               param_2[0x11] = ( L3_gr_info_t )(( -((bVar2 & 8) == 0) & 0xfeU ) + 8);
            }

            uVar12 = uVar12 & 0xf0f;
         }

         iVar8 = get_bits(param_1, 10);
         uVar9 = iVar8 << 5;
         for (int i = 0; i < 3; i++) {
            LVar4 = (L3_gr_info_t)get_bits(param_1, 3);
            param_2[( i + 25 )] = LVar4;
         }

      }

      param_2[0x13] = SUB41(uVar9 >> 10, 0);
      param_2[0x15] = ( L3_gr_info_t )((byte)uVar9 & 0x1f);
      param_2[0x14] = ( L3_gr_info_t )(( byte )(uVar9 >> 5) & 0x1f);
      LVar4 = ( L3_gr_info_t )(499 < uVar5);
      if (( param_3[1] & 8 ) != 0) {
         LVar4 = (L3_gr_info_t)get_bits(param_1, 1);
      }

      param_2[0x1c] = LVar4;
      param_2 = param_2 + 0x20;
      LVar4 = (L3_gr_info_t)get_bits(param_1, 1);
      param_2[-3] = LVar4;
      LVar4 = (L3_gr_info_t)get_bits(param_1, 1);
      param_2[-2] = LVar4;
      uVar7 = uVar12 << 4;
      param_2[-1] = ( L3_gr_info_t )(( byte )(uVar12 >> 0xc) & 0xf);
   }
 while ( param_2 != pLVar1 );
   if ((int)( *(int*)( param_1 + 0xc ) + local_3c * 8 ) < iVar6 + *(int*)( param_1 + 8 )) {
      LAB_00100438:local_3c = 0xffffffff;
   }

   return local_3c;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* L3_dct3_9(float*) */void L3_dct3_9(float *param_1) {
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   fVar12 = param_1[2];
   fVar6 = param_1[4];
   fVar9 = param_1[5];
   fVar10 = param_1[8];
   fVar11 = param_1[3] * _LC6;
   fVar8 = _LC3 * param_1[6] + *param_1;
   fVar7 = *param_1 - param_1[6];
   fVar5 = ( param_1[4] + fVar12 ) * __LC4;
   fVar4 = fVar6 + ( fVar10 - fVar12 );
   fVar1 = ( fVar12 + fVar10 ) * _UNK_00118718;
   fVar12 = param_1[7];
   fVar2 = ( fVar8 + fVar5 ) - ( fVar6 - fVar10 ) * __LC5;
   fVar3 = fVar7 - fVar4 * _LC3;
   fVar5 = ( fVar8 - fVar5 ) + fVar1;
   fVar6 = ( fVar8 - fVar1 ) + ( fVar6 - fVar10 ) * _UNK_0011871c;
   fVar10 = param_1[1];
   fVar8 = ( fVar9 - fVar12 ) * __LC8;
   fVar13 = ( fVar10 + fVar9 ) * __LC7;
   fVar1 = ( fVar10 + fVar12 ) * __LC9;
   fVar9 = ( ( fVar10 - fVar9 ) - fVar12 ) * _LC6;
   fVar10 = ( fVar8 - fVar11 ) - fVar13;
   fVar12 = ( fVar11 + fVar8 ) - fVar1;
   fVar1 = ( fVar13 - fVar11 ) - fVar1;
   *param_1 = fVar2 - fVar10;
   param_1[1] = fVar3 + fVar9;
   param_1[2] = fVar5 - fVar12;
   param_1[3] = fVar6 + fVar1;
   param_1[8] = fVar2 + fVar10;
   param_1[4] = fVar4 + fVar7;
   param_1[5] = fVar6 - fVar1;
   param_1[6] = fVar5 + fVar12;
   param_1[7] = fVar3 - fVar9;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* L3_imdct36(float*, float*, float const*, int) */void L3_imdct36(float *param_1, float *param_2, float *param_3, int param_4) {
   float *pfVar1;
   float *pfVar2;
   float *pfVar3;
   float *pfVar4;
   float *pfVar5;
   float *pfVar6;
   float *pfVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   float fVar19;
   float fVar20;
   float fVar21;
   float fVar22;
   float fVar23;
   float fVar24;
   float fVar25;
   float fVar26;
   float fVar27;
   float fVar28;
   float fVar29;
   float fVar30;
   long lVar31;
   float *pfVar32;
   float *pfVar33;
   float *pfVar34;
   float *pfVar35;
   float *pfVar36;
   long lVar37;
   undefined1 *puVar38;
   long in_FS_OFFSET;
   float fVar39;
   float fVar40;
   float fVar41;
   float fVar42;
   float fVar43;
   uint uVar44;
   float fVar45;
   undefined1 auVar46[16];
   float local_68;
   float local_64;
   uint uStack_60;
   float fStack_5c;
   uint uStack_58;
   float local_54;
   uint uStack_50;
   float fStack_4c;
   float fStack_48;
   float local_38;
   float local_34;
   float fStack_30;
   float fStack_2c;
   float fStack_28;
   float local_24;
   float fStack_20;
   float fStack_1c;
   float fStack_18;
   long local_10;
   pfVar36 = &local_68;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (0 < param_4) {
      puVar38 = L3_imdct36(float*,float*,float_const*,int)::g_twid9;
      lVar37 = 0x116c04;
      pfVar1 = param_1 + (long)param_4 * 0x12;
      pfVar32 = &local_38;
      pfVar33 = param_2;
      pfVar34 = param_1;
      uVar44 = _LC10;
      fVar45 = _LC13;
      do {
         local_68 = (float)( ( uint ) * pfVar34 ^ uVar44 );
         local_38 = pfVar34[0x11];
         local_64 = pfVar34[2] + pfVar34[1];
         fStack_5c = pfVar34[6] + pfVar34[5];
         local_54 = pfVar34[10] + pfVar34[9];
         fStack_4c = pfVar34[0xe] + pfVar34[0xd];
         fStack_1c = pfVar34[4] - pfVar34[3];
         fStack_18 = pfVar34[1] - pfVar34[2];
         local_24 = pfVar34[8] - pfVar34[7];
         fStack_20 = pfVar34[5] - pfVar34[6];
         uStack_60 = ( uint )(pfVar34[4] + pfVar34[3]) ^ __LC11;
         uStack_58 = ( uint )(pfVar34[8] + pfVar34[7]) ^ _UNK_00118734;
         uStack_50 = ( uint )(pfVar34[0xc] + pfVar34[0xb]) ^ _UNK_00118738;
         fStack_48 = (float)( ( uint )(pfVar34[0x10] + pfVar34[0xf]) ^ _UNK_0011873c );
         fStack_2c = pfVar34[0xc] - pfVar34[0xb];
         fStack_28 = pfVar34[9] - pfVar34[10];
         local_34 = pfVar34[0x10] - pfVar34[0xf];
         fStack_30 = pfVar34[0xd] - pfVar34[0xe];
         L3_dct3_9(pfVar36);
         auVar46 = L3_dct3_9(pfVar32);
         param_3 = auVar46._8_8_;
         lVar31 = auVar46._0_8_;
         local_34 = (float)( (uint)local_34 ^ uVar44 );
         fStack_2c = (float)( (uint)fStack_2c ^ uVar44 );
         local_24 = (float)( (uint)local_24 ^ uVar44 );
         fStack_1c = (float)( (uint)fStack_1c ^ uVar44 );
         do {
            pfVar35 = (float*)( (long)pfVar32 + lVar31 );
            pfVar2 = (float*)( lVar37 + lVar31 );
            pfVar3 = (float*)( (long)pfVar36 + lVar31 );
            pfVar4 = (float*)( lVar37 + lVar31 );
            fVar8 = pfVar4[1];
            fVar39 = pfVar4[2];
            fVar9 = pfVar4[3];
            param_1 = (float*)-lVar31;
            pfVar5 = (float*)( puVar38 + lVar31 );
            pfVar6 = (float*)( (long)pfVar33 + lVar31 );
            fVar10 = *pfVar6;
            fVar11 = pfVar6[1];
            fVar12 = pfVar6[2];
            fVar13 = pfVar6[3];
            pfVar6 = (float*)( (long)pfVar32 + lVar31 );
            fVar14 = pfVar6[1];
            fVar15 = pfVar6[2];
            fVar16 = pfVar6[3];
            pfVar7 = (float*)( (long)param_3 + lVar31 + 0x24 );
            fVar17 = *pfVar7;
            fVar18 = pfVar7[1];
            fVar19 = pfVar7[2];
            fVar20 = pfVar7[3];
            pfVar7 = (float*)( (long)param_3 + lVar31 );
            fVar21 = *pfVar7;
            fVar22 = pfVar7[1];
            fVar23 = pfVar7[2];
            fVar24 = pfVar7[3];
            fVar40 = *pfVar35 * *pfVar5 + *pfVar2 * *pfVar3;
            fVar41 = pfVar35[1] * pfVar5[1] + pfVar2[1] * pfVar3[1];
            fVar42 = pfVar35[2] * pfVar5[2] + pfVar2[2] * pfVar3[2];
            fVar43 = pfVar35[3] * pfVar5[3] + pfVar2[3] * pfVar3[3];
            pfVar35 = (float*)( (long)pfVar36 + lVar31 );
            fVar25 = pfVar35[1];
            fVar26 = pfVar35[2];
            fVar27 = pfVar35[3];
            pfVar2 = (float*)( puVar38 + lVar31 );
            fVar28 = pfVar2[1];
            fVar29 = pfVar2[2];
            fVar30 = pfVar2[3];
            pfVar3 = (float*)( (long)pfVar33 + lVar31 );
            *pfVar3 = *pfVar35 * *pfVar2 - *pfVar4 * *pfVar6;
            pfVar3[1] = fVar25 * fVar28 - fVar8 * fVar14;
            pfVar3[2] = fVar26 * fVar29 - fVar39 * fVar15;
            pfVar3[3] = fVar27 * fVar30 - fVar9 * fVar16;
            pfVar35 = (float*)( (long)pfVar34 + lVar31 );
            *pfVar35 = fVar10 * fVar21 - fVar17 * fVar40;
            pfVar35[1] = fVar11 * fVar22 - fVar18 * fVar41;
            pfVar35[2] = fVar12 * fVar23 - fVar19 * fVar42;
            pfVar35[3] = fVar13 * fVar24 - fVar20 * fVar43;
            lVar31 = lVar31 + 0x10;
            pfVar35 = (float*)( (long)( pfVar34 + 0xe ) + (long)param_1 );
            *pfVar35 = fVar24 * fVar43 + fVar13 * fVar20;
            pfVar35[1] = fVar23 * fVar42 + fVar12 * fVar19;
            pfVar35[2] = fVar22 * fVar41 + fVar11 * fVar18;
            pfVar35[3] = fVar21 * fVar40 + fVar10 * fVar17;
         }
 while ( lVar31 != 0x20 );
         pfVar35 = pfVar34 + 0x12;
         param_2 = pfVar33 + 9;
         fVar8 = pfVar33[8];
         fVar39 = fStack_48 * fVar45 + _LC14 * fStack_18;
         pfVar33[8] = fStack_48 * _LC14 - fStack_18 * fVar45;
         pfVar34[8] = param_3[8] * fVar8 - param_3[0x11] * fVar39;
         pfVar34[9] = fVar8 * param_3[0x11] + fVar39 * param_3[8];
         pfVar33 = param_2;
         pfVar34 = pfVar35;
      }
 while ( pfVar35 != pfVar1 );
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail(param_1, param_2, param_3);
}
/* L3_imdct12(float*, float*, float*) */void L3_imdct12(float *param_1, float *param_2, float *param_3) {
   long lVar1;
   long lVar2;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   float fVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   undefined8 local_30;
   float local_28;
   undefined8 local_20;
   float local_18;
   long local_10;
   fVar8 = param_1[0xc] + param_1[9];
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar5 = param_1[6] - param_1[3];
   fVar4 = ( param_1[0xc] - param_1[9] ) * _LC6;
   fVar7 = ( param_1[6] + param_1[3] ) * _LC6;
   fVar6 = (float)( ( uint ) * param_1 ^ _LC10 ) - fVar8 * _LC3;
   local_28 = fVar6 - fVar7;
   local_30 = CONCAT44(fVar8 - *param_1, fVar7 + fVar6);
   fVar6 = param_1[0xf] - _LC3 * fVar5;
   local_18 = fVar6 - fVar4;
   local_20 = CONCAT44(( uint )(fVar5 + param_1[0xf]) ^ _LC10, fVar4 + fVar6);
   lVar1 = 0;
   puVar3 = &L3_imdct12(float*,float*,float*), ::g_twid3);
   do if (Variant::needs_deinit[local_48[0]] != '\0') {
      float fVar1;
      undefined8 uVar2;
      char cVar3;
      RefCounted *this;
      Object *pOVar4;
      long lVar5;
      Object *in_RSI;
      long *in_RDI;
      RefCounted *pRVar6;
      Object *pOVar7;
      long in_FS_OFFSET;
      byte bVar8;
      int local_48[6];
      long local_30;
      bVar8 = 0;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *in_RDI = 0;
      this(RefCounted * operator_new(0x1b0, ""));
      pRVar6 = this;
      for (lVar5 = 0x36; lVar5 != 0; lVar5 = lVar5 + -1) {
         *(undefined8*)pRVar6 = 0;
         pRVar6 = pRVar6 + (ulong)bVar8 * -0x10 + 8;
      }

      RefCounted::RefCounted(this);
      *(undefined8*)( this + 0x180 ) = 0;
      *(undefined***)this = &PTR__initialize_classv_00115da0;
      uVar2 = _LC45;
      *(undefined8*)( this + 400 ) = 0;
      *(undefined8*)( this + 0x198 ) = uVar2;
      *(undefined4*)( this + 0x1a0 ) = 0;
      *(undefined8*)( this + 0x1a4 ) = 0;
      postinitialize_handler((Object*)this);
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') {
         pOVar7 = (Object*)*in_RDI;
         if (pOVar7 != (Object*)0x0) {
            *in_RDI = 0;
            cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
               this(RefCounted * 0x0);
               cVar3 = predelete_handler(pOVar7);
               if (cVar3 != '\0') goto LAB_00101453;
            }

         }

      }
 else {
         pOVar7 = (Object*)*in_RDI;
         pOVar4 = pOVar7;
         if (this != (RefCounted*)pOVar7) {
            *in_RDI = (long)this;
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
               *in_RDI = 0;
            }

            pOVar4 = (Object*)this;
            if (( ( pOVar7 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) {
               LAB_00101453:( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
               Memory::free_static(pOVar7, false);
               pOVar4 = (Object*)this;
               if (this == (RefCounted*)0x0) goto LAB_00101292;
            }

         }

         cVar3 = RefCounted::unreference();
         if (( cVar3 != '\0' ) && ( cVar3 = cVar3 != '\0' )) {
            ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
            Memory::free_static(pOVar4, false);
         }

      }

      LAB_00101292:Variant::Variant((Variant*)local_48, in_RSI);
      lVar5 = *in_RDI;
      pOVar4 = (Object*)Variant::get_validated_object();
      pOVar7 = *(Object**)( lVar5 + 0x180 );
      if (pOVar4 == pOVar7) goto LAB_0010130a;
      if (pOVar4 == (Object*)0x0) {
         if (pOVar7 == (Object*)0x0) goto LAB_0010130a;
         *(undefined8*)( lVar5 + 0x180 ) = 0;
      }
 else {
         pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &AudioStream::typeinfo, 0);
         if (pOVar7 == pOVar4) goto LAB_0010130a;
         *(Object**)( lVar5 + 0x180 ) = pOVar4;
         if (( pOVar4 != (Object*)0x0 ) && ( cVar3 = cVar3 == '\0' )) {
            *(undefined8*)( lVar5 + 0x180 ) = 0;
         }

         if (pOVar7 == (Object*)0x0) goto LAB_0010130a;
      }

      cVar3 = RefCounted::unreference();
      if (( cVar3 != '\0' ) && ( cVar3 = cVar3 != '\0' )) {
         ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
         Memory::free_static(pOVar7, false);
      }

      LAB_0010130a:if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

      lVar5 = *in_RDI;
      *(uint*)( lVar5 + 0x1a0 ) = (uint)(byte)in_RSI[0x368];
      fVar1 = *(float*)( in_RSI + 0x36c );
      *(undefined4*)( lVar5 + 0x1a8 ) = 0;
      *(int*)( lVar5 + 0x1a4 ) = (int)fVar1;
      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }
 else if (( bVar1 & 0xfe ) != 0xe2) {
      undefined4 *puVar1;
      undefined1 auVar2[16];
      byte bVar3;
      ushort uVar4;
      int *piVar5;
      undefined8 uVar6;
      undefined4 uVar7;
      undefined4 uVar8;
      undefined4 uVar9;
      undefined8 uVar10;
      undefined8 uVar11;
      undefined1 uVar12;
      long lVar13;
      uint *puVar14;
      byte bVar15;
      int iVar16;
      int iVar17;
      uint uVar18;
      uint uVar19;
      undefined4 uVar20;
      ulong uVar21;
      ulong uVar22;
      undefined8 *puVar23;
      uint *puVar24;
      float *pfVar25;
      float *pfVar26;
      float *pfVar27;
      float *pfVar28;
      char *pcVar29;
      undefined4 *puVar30;
      float *pfVar31;
      byte bVar32;
      byte bVar33;
      byte bVar34;
      sbyte sVar35;
      byte bVar36;
      undefined1 uVar37;
      uint uVar38;
      ulong uVar39;
      long lVar40;
      ulong uVar41;
      long lVar42;
      int iVar43;
      uint uVar44;
      uint uVar45;
      byte *pbVar46;
      float *pfVar47;
      byte *pbVar48;
      long lVar49;
      uint *puVar50;
      float *pfVar51;
      undefined4 *puVar52;
      char *pcVar53;
      undefined4 *puVar54;
      undefined2 *puVar55;
      float *pfVar56;
      undefined1 *puVar57;
      char cVar58;
      int iVar59;
      uint uVar60;
      long lVar61;
      int iVar62;
      float *pfVar63;
      long lVar64;
      undefined4 *puVar65;
      undefined8 *puVar66;
      long lVar67;
      undefined1 *puVar68;
      byte *pbVar69;
      uint uVar70;
      float *pfVar71;
      undefined4 *puVar72;
      byte *pbVar73;
      long *plVar74;
      uint *puVar75;
      long lVar76;
      int iVar77;
      uint uVar78;
      ulong uVar79;
      long in_FS_OFFSET;
      bool bVar80;
      byte bVar81;
      float fVar82;
      float fVar83;
      float fVar84;
      float fVar85;
      float fVar86;
      float fVar87;
      float fVar88;
      float fVar89;
      float fVar90;
      float fVar91;
      float fVar92;
      float fVar93;
      float fVar94;
      float fVar95;
      float fVar96;
      float fVar97;
      float fVar98;
      float fVar99;
      float fVar100;
      float fVar101;
      float fVar102;
      float fVar103;
      float fVar104;
      float fVar105;
      float fVar106;
      float fVar107;
      float fVar108;
      float fVar109;
      float fVar110;
      float fVar111;
      float fVar112;
      float fVar113;
      float fVar114;
      float fVar115;
      undefined1 local_4030[16384];
      bVar81 = 0;
      puVar68 = &stack0xffffffffffffffd0;
      do {
         puVar57 = puVar68;
         *(undefined8*)( puVar57 + -0x1000 ) = *(undefined8*)( puVar57 + -0x1000 );
         puVar68 = puVar57 + -0x1000;
      }
 while ( puVar57 + -0x1000 != local_4030 );
      *(long*)( puVar57 + -0x12b8 ) = param_1;
      *(uchar**)( puVar57 + -0x1298 ) = param_2;
      *(undefined8*)( puVar57 + -0x1268 ) = param_4;
      *(undefined8*)( puVar57 + -0x1280 ) = param_5;
      *(undefined8*)( puVar57 + 0x2ff0 ) = *(undefined8*)( in_FS_OFFSET + 0x28 );
      if (( param_3 < 5 ) || ( *(char*)( param_1 + 0x1808 ) != -1 )) {
         LAB_00101fe2:puVar23 = *(undefined8**)( puVar57 + -0x12b8 );
         *puVar23 = 0;
         *(undefined8*)( (long)puVar23 + 0x1a04 ) = 0;
         puVar66 = (undefined8*)( ( ulong )(puVar23 + 1) & 0xfffffffffffffff8 );
         for (uVar39 = ( ulong )(( (int)puVar23 - (int)(undefined8*)( ( ulong )(puVar23 + 1) & 0xfffffffffffffff8 ) ) + 0x1a0cU >> 3); uVar39 != 0; uVar39 = uVar39 - 1) {
            *puVar66 = 0;
            puVar66 = puVar66 + (ulong)bVar81 * -2 + 1;
         }

         *(undefined8*)( puVar57 + -0x1320 ) = 0x102033;
         iVar16 = mp3d_find_frame(*(uchar**)( puVar57 + -0x1298 ), param_3, (int*)( (long)puVar23 + 0x1804 ), (int*)( puVar57 + -0x11dc ));
         iVar62 = *(int*)( puVar57 + -0x11dc );
         if (( iVar62 == 0 ) || ( iVar43 = param_3 < iVar43 )) {
            **(int**)( puVar57 + -0x1280 ) = iVar16;
            uVar20 = 0;
            goto LAB_0010217b;
         }

         *(long*)( puVar57 + -0x1298 ) = *(long*)( puVar57 + -0x1298 ) + (long)iVar16;
      }
 else {
         *(undefined8*)( puVar57 + -0x1320 ) = 0x102a02;
         iVar43 = hdr_compare((uchar*)( param_1 + 0x1808 ), param_2);
         if (iVar43 == 0) goto LAB_00101fe2;
         iVar43 = *(int*)( param_1 + 0x1804 );
         *(undefined8*)( puVar57 + -0x1320 ) = 0x102a19;
         iVar62 = hdr_frame_bytes(param_2, iVar43);
         iVar43 = iVar62;
         if (( param_2[2] & 2 ) != 0) {
            bVar33 = param_2[1];
            puVar57[-0x1318] = bVar33;
            iVar43 = iVar62 + 1;
            if (( ~bVar33 & 6 ) == 0) {
               iVar43 = iVar62 + 4;
            }

         }

         *(int*)( puVar57 + -0x11dc ) = iVar43;
         if (param_3 != iVar43) {
            if (iVar43 + 3 < param_3) {
               *(undefined8*)( puVar57 + -0x1320 ) = 0x102a4f;
               iVar62 = hdr_compare(*(uchar**)( puVar57 + -0x1298 ), *(uchar**)( puVar57 + -0x1298 ) + iVar43);
               if (( iVar62 != 0 ) && ( iVar43 != 0 )) goto LAB_00102a60;
            }

            goto LAB_00101fe2;
         }

         LAB_00102a60:iVar16 = 0;
         iVar62 = iVar43;
      }

      puVar52 = *(undefined4**)( puVar57 + -0x1298 );
      *(undefined4*)( *(long*)( puVar57 + -0x12b8 ) + 0x1808 ) = *puVar52;
      piVar5 = *(int**)( puVar57 + -0x1280 );
      *piVar5 = iVar43;
      piVar5[1] = iVar16;
      piVar5[2] = ( ( ~*(byte *)((long)puVar52 + 3) & 0xc0 ) != 0 ) + 1;
      piVar5[3] = ( *(uint*)( hdr_sample_rate_hz(unsigned_char_const*):: ) >> ( ( *(byte*)( (long)puVar52 + 1 ) >> 3 ^ 1 ) & 1 ) ) >> ( ( *(byte*)( (long)puVar52 + 1 ) >> 4 ^ 1 ) & 1 );
      iVar43 = 4 - ( *(byte*)( (long)puVar52 + 1 ) >> 1 & 3 );
      piVar5[4] = iVar43;
      bVar33 = *(byte*)( (long)puVar52 + 1 );
      bVar34 = *(byte*)( (long)puVar52 + 2 );
      puVar57[-0x1318] = bVar34;
      lVar67 = *(long*)( puVar57 + -0x1268 );
      piVar5[5] = (uint)(byte)hdr_bitrate_kbps(unsigned_char_const * ::halfrate[( ulong )(bVar34 >> 4) + ( ulong )(bVar33 >> 3 & 1) * 0x2d + (long)(int)( ( bVar33 >> 1 & 3 ) - 1 ) * 0xf] * 2);
      if (lVar67 == 0) {
         uVar20 = 0x180;
         if (( ( ~*(byte *)(*(long *)(puVar57 + -0x1298) + 1) & 6 ) != 0 ) && ( uVar20 = 0x480(*(byte*)( *(long*)( puVar57 + -0x1298 ) + 1 ) & 0xe) == 2 )) {
            uVar20 = 0x240;
         }

         goto LAB_0010217b;
      }

      *(undefined4*)( puVar57 + -0x11d0 ) = 0;
      *(long*)( puVar57 + -0x11d8 ) = *(long*)( puVar57 + -0x1298 ) + 4;
      *(int*)( puVar57 + -0x11cc ) = iVar62 * 8 + -0x20;
      if (( *(byte*)( *(long*)( puVar57 + -0x1298 ) + 1 ) & 1 ) == 0) {
         *(undefined8*)( puVar57 + -0x1320 ) = 0x102a7c;
         get_bits((bs_t*)( puVar57 + -0x11d8 ), 0x10);
      }

      if (iVar43 != 3) {
         uVar20 = 0;
         goto LAB_0010217b;
      }

      *(L3_gr_info_t**)( puVar57 + -0x1200 ) = (L3_gr_info_t*)( puVar57 + -0x4b8 );
      *(undefined8*)( puVar57 + -0x1320 ) = 0x102209;
      iVar43 = L3_read_side_info((bs_t*)( puVar57 + -0x11d8 ), (L3_gr_info_t*)( puVar57 + -0x4b8 ), *(uchar**)( puVar57 + -0x1298 ));
      if (-1 < iVar43) {
         iVar62 = *(int*)( puVar57 + -0x11d0 );
         if (iVar62 <= *(int*)( puVar57 + -0x11cc )) {
            iVar17 = *(int*)( puVar57 + -0x11cc ) - iVar62 >> 3;
            iVar16 = *(int*)( *(long*)( puVar57 + -0x12b8 ) + 0x1800 );
            lVar67 = *(long*)( puVar57 + -0x12b8 ) + 0x180c;
            iVar77 = iVar16;
            if (iVar43 <= iVar16) {
               iVar77 = iVar43;
            }

            lVar49 = (long)( iVar16 - iVar43 );
            if (iVar16 - iVar43 < 0) {
               lVar49 = 0;
            }

            *(long*)( puVar57 + -0x1318 ) = (long)iVar77;
            *(undefined1**)( puVar57 + -0x1230 ) = puVar57 + -0xfb8;
            *(undefined8*)( puVar57 + -0x1320 ) = 0x10228a;
            __memcpy_chk(puVar57 + -0xfb8, lVar67 + lVar49, (long)iVar77, 0x3f70);
            iVar59 = iVar62 + 7;
            if (-1 < iVar62) {
               iVar59 = iVar62;
            }

            lVar49 = *(long*)( puVar57 + -0x1230 );
            *(undefined8*)( puVar57 + -0x1320 ) = 0x1022d6;
            __memcpy_chk(lVar49 + *(long*)( puVar57 + -0x1318 ), (long)( iVar59 >> 3 ) + *(long*)( puVar57 + -0x11d8 ), (long)iVar17);
            *(long*)( puVar57 + -0xfc8 ) = lVar49;
            *(undefined4*)( puVar57 + -0xfc0 ) = 0;
            uVar44 = ( iVar17 + iVar77 ) * 8;
            *(uint*)( puVar57 + -0xfbc ) = uVar44;
            cVar58 = iVar43 <= iVar16;
            if (iVar43 <= iVar16) {
               *(undefined4*)( puVar57 + -0x1274 ) = 0;
               *(undefined1**)( puVar57 + -0x12b0 ) = puVar57 + -0xfc8;
               *(undefined1**)( puVar57 + -0x1288 ) = puVar57 + -0x438;
               *(long*)( puVar57 + -0x1250 ) = *(long*)( puVar57 + -0x12b8 ) + 0x900;
               *(undefined1**)( puVar57 + -0x1208 ) = puVar57 + 0xf5c;
               uVar44 = *(uint*)( *(long*)( puVar57 + -0x1280 ) + 8 );
               *(undefined1**)( puVar57 + -0x1260 ) = puVar57 + 0xe68;
               *(undefined1**)( puVar57 + -0x11f8 ) = puVar57 + 0x215c;
               *(undefined1**)( puVar57 + -0x1220 ) = puVar57 + 0x2068;
               puVar57[-0x1215] = cVar58;
               LAB_00102398:lVar49 = *(long*)( puVar57 + -0x1200 );
               puVar23 = *(undefined8**)( puVar57 + -0x1288 );
               for (lVar40 = 0x240; lVar40 != 0; lVar40 = lVar40 + -1) {
                  *puVar23 = 0;
                  puVar23 = puVar23 + (ulong)bVar81 * -2 + 1;
               }

               *(long*)( puVar57 + -0x1270 ) = (long)(int)( -*(int *)(puVar57 + -0x1274) & uVar44 ) * 0x20 + lVar49;
               if (0 < (int)uVar44) {
                  *(undefined8*)( puVar57 + -0x1238 ) = 0x3f30;
                  *(undefined4*)( puVar57 + -0x1258 ) = 0;
                  *(undefined4*)( puVar57 + -0x1254 ) = *(undefined4*)( puVar57 + -0xfc0 );
                  *(long*)( puVar57 + -0x11f0 ) = lVar67;
                  *(undefined8*)( puVar57 + -0x1240 ) = *(undefined8*)( puVar57 + -0x1288 );
                  *(uint*)( puVar57 + -0x1214 ) = uVar44;
                  pbVar48 = (byte*)( *(long*)( puVar57 + -0x1270 ) + 0x13 );
                  *(undefined1**)( puVar57 + -0x1248 ) = puVar57 + 0x2fc8;
                  *(undefined1**)( puVar57 + -0x1228 ) = puVar57 + 0xdc8;
                  LAB_00102446:uVar39 = *(ulong*)( puVar57 + -0x1238 );
                  *(uint*)( puVar57 + -0x1254 ) = *(int*)( puVar57 + -0x1254 ) + ( uint ) * (ushort*)( pbVar48 + -0xb );
                  uVar4 = *(ushort*)( pbVar48 + -7 );
                  uVar21 = 0x3f80;
                  if (0x3f7f < uVar39) {
                     uVar21 = uVar39;
                  }

                  uVar21 = uVar21 - uVar39;
                  *(ulong*)( puVar57 + -0x1318 ) = *(long*)( puVar57 + -0x12b0 ) + uVar39;
                  *(undefined1**)( puVar57 + -0x1308 ) = L3_decode_scalefactors(unsigned_char_const * unsigned_char * bs_t * L3_gr_info_t_const * ::g_scf_partitions + ( ( ulong )(pbVar48[-1] != 0) + ( ulong )(pbVar48[-2] == 0) ) * 0x1c);
                  bVar33 = pbVar48[10];
                  if (( *(byte*)( *(long*)( puVar57 + -0x12b8 ) + 0x1809 ) & 8 ) == 0) {
                     bVar34 = *(byte*)( *(long*)( puVar57 + -0x12b8 ) + 0x180b );
                     puVar57[-0x12f8] = bVar34;
                     bVar34 = bVar34 >> 4 & *(int*)( puVar57 + -0x1258 ) != 0;
                     uVar44 = -(uint)bVar34;
                     iVar43 = (int)(uint)uVar4 >> bVar34;
                     uVar18 = uVar44 & 0xc;
                     puVar68 = L3_decode_scalefactors(unsigned_char_const * unsigned_char * bs_t * L3_gr_info_t_const * ::g_mod + ( uVar44 & 0xc ));
                     do {
                        lVar67 = 3;
                        iVar62 = 1;
                        do {
                           lVar49 = (long)iVar62;
                           iVar62 = iVar62 * (uint)(byte)puVar68[lVar67];
                           puVar57[lVar67 + 0x2fc4] = (char)( (long)( ( ulong )(uint)((int)( (long)iVar43 / lVar49 ) >> 0x1f) << 0x20 | (long)iVar43 / lVar49 & 0xffffffffU ) % (long)(int)(uint)(byte)puVar68[lVar67] );
                           bVar80 = lVar67 != 0;
                           lVar67 = lVar67 + -1;
                        }
 while ( bVar80 );
                        uVar18 = uVar18 + 4;
                        puVar68 = puVar68 + 4;
                        iVar43 = iVar43 - iVar62;
                     }
 while ( -1 < iVar43 );
                     uVar44 = 0xfffffff0;
                     *(long*)( puVar57 + -0x1308 ) = *(long*)( puVar57 + -0x1308 ) + (long)(int)uVar18;
                  }
 else {
                     uVar44 = (uint)pbVar48[0xc];
                     uVar18 = (byte)L3_decode_scalefactors(unsigned_char_const * unsigned_char * bs_t * L3_gr_info_t_const * ::g_scfc_decode[uVar4] & 3);
                     uVar45 = ( uint )((byte)L3_decode_scalefactors(unsigned_char_const * unsigned_char * bs_t * L3_gr_info_t_const * ::g_scfc_decode[uVar4] >> 2));
                     *(uint*)( puVar57 + 0x2fc4 ) = ( ( uVar18 | uVar18 << 8 ) << 8 | uVar45 ) << 8 | uVar45;
                  }

                  puVar55 = *(undefined2**)( puVar57 + -0x1248 );
                  *(uint*)( puVar57 + -0x12f8 ) = bVar33 + 1;
                  lVar67 = 0;
                  *(byte**)( puVar57 + -0x12e0 ) = pbVar48;
                  uVar39 = 0x28;
                  do {
                     bVar33 = *(byte*)( *(long*)( puVar57 + -0x1308 ) + lVar67 );
                     if (bVar33 == 0) break;
                     uVar79 = (ulong)bVar33;
                     if (( uVar44 & 8 ) == 0) {
                        bVar34 = puVar57[lVar67 + 0x2fc4];
                        if (bVar34 == 0) {
                           *(long*)( puVar57 + -0x12d0 ) = lVar67;
                           *(uint*)( puVar57 + -0x12d8 ) = uVar44;
                           *(undefined8*)( puVar57 + -0x1320 ) = 0x102563;
                           __memset_chk(puVar55, 0, uVar79, uVar39);
                           *(undefined8*)( puVar57 + -0x1320 ) = 0x102574;
                           __memset_chk(*(undefined8*)( puVar57 + -0x1318 ), 0, uVar79, uVar21);
                           iVar43 = *(int*)( puVar57 + -0x12d8 );
                           lVar67 = *(long*)( puVar57 + -0x12d0 );
                        }
 else {
                           iVar43 = -1;
                           if ((int)uVar44 < 0) {
                              iVar43 = ( 1 << ( bVar34 & 0x1f ) ) + -1;
                           }

                           *(uint*)( puVar57 + -0x12d0 ) = uVar44;
                           lVar49 = 0;
                           *(long*)( puVar57 + -0x12c0 ) = lVar67;
                           *(ulong*)( puVar57 + -0x12a8 ) = uVar79;
                           lVar67 = *(long*)( puVar57 + -0x1318 );
                           *(ulong*)( puVar57 + -0x12d8 ) = uVar21;
                           uVar21 = (ulong)bVar34;
                           *(ulong*)( puVar57 + -0x12c8 ) = uVar39;
                           do {
                              *(undefined8*)( puVar57 + -0x1320 ) = 0x103d73;
                              iVar62 = get_bits(*(bs_t**)( puVar57 + -0x12b0 ), (int)uVar21);
                              uVar37 = (undefined1)iVar62;
                              uVar12 = uVar37;
                              if (iVar62 == iVar43) {
                                 uVar37 = 0xff;
                                 uVar12 = (char)iVar43;
                              }

                              *(undefined1*)( lVar67 + lVar49 ) = uVar37;
                              *(undefined1*)( (long)puVar55 + lVar49 ) = uVar12;
                              lVar49 = lVar49 + 1;
                           }
 while ( (int)lVar49 < (int)(uint)bVar33 );
                           uVar21 = *(ulong*)( puVar57 + -0x12d8 );
                           iVar43 = *(int*)( puVar57 + -0x12d0 );
                           uVar39 = *(ulong*)( puVar57 + -0x12c8 );
                           lVar67 = *(long*)( puVar57 + -0x12c0 );
                           uVar79 = *(ulong*)( puVar57 + -0x12a8 );
                        }

                     }
 else {
                        *(long*)( puVar57 + -0x12d0 ) = lVar67;
                        *(uint*)( puVar57 + -0x12d8 ) = uVar44;
                        *(undefined8*)( puVar57 + -0x1320 ) = 0x103d0c;
                        __memcpy_chk(puVar55, *(undefined8*)( puVar57 + -0x1318 ), uVar79, uVar39);
                        iVar43 = *(int*)( puVar57 + -0x12d8 );
                        lVar67 = *(long*)( puVar57 + -0x12d0 );
                     }

                     uVar22 = 0x3f80;
                     if (0x3f7f < uVar21) {
                        uVar22 = uVar21;
                     }

                     uVar41 = ( uVar22 + uVar79 ) - uVar21;
                     if (uVar41 < uVar22) {
                        uVar41 = uVar22;
                     }

                     *(ulong*)( puVar57 + -0x1318 ) = *(long*)( puVar57 + -0x1318 ) + uVar79;
                     uVar21 = ( uVar21 - ( uVar22 + uVar79 ) ) + uVar41;
                     uVar22 = 0x28;
                     if (0x27 < uVar39) {
                        uVar22 = uVar39;
                     }

                     uVar41 = ( uVar22 + uVar79 ) - uVar39;
                     if (uVar41 < uVar22) {
                        uVar41 = uVar22;
                     }

                     lVar67 = lVar67 + 1;
                     puVar55 = (undefined2*)( (long)puVar55 + uVar79 );
                     uVar44 = iVar43 * 2;
                     uVar39 = ( uVar39 - ( uVar22 + uVar79 ) ) + uVar41;
                  }
 while ( lVar67 != 4 );
                  pbVar48 = *(byte**)( puVar57 + -0x12e0 );
                  uVar20 = *(undefined4*)( puVar57 + -0x12f8 );
                  *(undefined1*)( puVar55 + 1 ) = 0;
                  *puVar55 = 0;
                  bVar33 = pbVar48[-1];
                  uVar44 = (uint)bVar33;
                  if (bVar33 == 0) {
                     bVar34 = pbVar48[-2];
                     if (pbVar48[9] != 0) {
                        pcVar29 = puVar57 + 0x2fd3;
                        pcVar53 = "\x01\x01\x01\x01\x02\x02\x03\x03\x03\x02";
                        do {
                           *pcVar29 = *pcVar29 + *pcVar53;
                           pcVar29 = pcVar29 + 1;
                           pcVar53 = pcVar53 + 1;
                        }
 while ( puVar57 + 0x2fdd != pcVar29 );
                     }

                     uVar44 = 0;
                  }
 else {
                     bVar36 = pbVar48[6];
                     bVar34 = pbVar48[-2];
                     bVar32 = 3 - (byte)uVar20;
                     bVar15 = pbVar48[8];
                     bVar3 = pbVar48[7];
                     iVar43 = 0;
                     puVar55 = (undefined2*)( (ulong)bVar34 + *(long*)( puVar57 + -0x1248 ) );
                     do {
                        iVar43 = iVar43 + 3;
                        *(byte*)( puVar55 + 1 ) = *(char*)( puVar55 + 1 ) + ( bVar15 << ( bVar32 & 0x1f ) );
                        *puVar55 = CONCAT11((char)( ( ushort ) * puVar55 >> 8 ) + ( bVar3 << ( bVar32 & 0x1f ) ), (char)*puVar55 + ( bVar36 << ( bVar32 & 0x1f ) ));
                        puVar55 = (undefined2*)( (long)puVar55 + 3 );
                     }
 while ( iVar43 < (int)(uint)bVar33 );
                  }

                  bVar33 = pbVar48[-5];
                  bVar36 = *(byte*)( *(long*)( puVar57 + -0x12b8 ) + 0x180b );
                  puVar57[-0x1318] = bVar36;
                  uVar18 = ( ( uint )(( bVar36 & 0xe0 ) == 0x60) * 2 - (uint)bVar33 ) + 0x102;
                  fVar103 = _LC58;
                  do {
                     uVar45 = 0x78;
                     if ((int)uVar18 < 0x79) {
                        uVar45 = uVar18;
                     }

                     uVar18 = uVar18 - uVar45;
                     fVar103 = fVar103 * (float)( 0x40000000 >> ( ( byte )((int)uVar45 >> 2) & 0x1f ) ) * *(float*)( L3_ldexp_q2(float,int):: );
                  }
 while ( 0 < (int)uVar18 );
                  lVar67 = 0;
                  if (bVar34 + uVar44 != 0) {
                     lVar49 = *(long*)( puVar57 + -0x12b0 );
                     lVar40 = *(long*)( puVar57 + -0x1248 );
                     do {
                        uVar44 = ( uint ) * (byte*)( lVar40 + lVar67 ) << ( (byte)uVar20 & 0x1f );
                        fVar96 = fVar103;
                        do {
                           uVar18 = 0x78;
                           if ((int)uVar44 < 0x79) {
                              uVar18 = uVar44;
                           }

                           uVar44 = uVar44 - uVar18;
                           fVar96 = fVar96 * (float)( 0x40000000 >> ( ( byte )((int)uVar18 >> 2) & 0x1f ) ) * *(float*)( L3_ldexp_q2(float,int):: );
                        }
 while ( 0 < (int)uVar44 );
                        *(float*)( lVar49 + 0x1d90 + lVar67 * 4 ) = fVar96;
                        lVar67 = lVar67 + 1;
                     }
 while ( (int)lVar67 < (int)( (uint)pbVar48[-2] + (uint)pbVar48[-1] ) );
                  }

                  fVar99 = _LC65;
                  fVar96 = _LC64;
                  fVar103 = _LC63;
                  uVar44 = *(uint*)( puVar57 + -0xfc0 );
                  lVar67 = *(long*)( puVar57 + -0xfc8 );
                  uVar18 = ( uint ) * (ushort*)( pbVar48 + -9 );
                  pfVar56 = *(float**)( puVar57 + -0x1240 );
                  pbVar69 = *(byte**)( pbVar48 + -0x13 );
                  uVar45 = uVar44 + 7;
                  if (-1 < (int)uVar44) {
                     uVar45 = uVar44;
                  }

                  uVar78 = ( uVar44 & 7 ) - 8;
                  pbVar46 = (byte*)( ( (int)uVar45 >> 3 ) + lVar67 );
                  pbVar73 = pbVar46 + 4;
                  uVar44 = ( ( ( uint ) * pbVar46 * 0x100 + (uint)pbVar46[1] ) * 0x100 + (uint)pbVar46[2] ) * 0x100 + (uint)pbVar46[3] << ( sbyte )(uVar44 & 7);
                  if (*(ushort*)( pbVar48 + -9 ) != 0) {
                     *(long*)( puVar57 + -0x12a8 ) = lVar67;
                     pfVar31 = *(float**)( puVar57 + -0x1228 );
                     *(byte**)( puVar57 + -0x12a0 ) = pbVar48;
                     do {
                        bVar33 = pbVar48[3];
                        puVar68 = L3_huffman(float*,bs_t*,L3_gr_info_t_const*,float_const*,int)::tabs + (long)*(short*)( L3_huffman(float*,bs_t*,L3_gr_info_t_const*,float_const*,int)
                                         :: ) * 2;
                        bVar34 = L3_huffman(float*,bs_t*,L3_gr_info_t_const*,float_const*,int)::g_linbits[*pbVar48];
                        *(uint*)( puVar57 + -0x12e0 ) = (uint)bVar34;
                        if (bVar34 == 0) {
                           *(byte**)( puVar57 + -0x12d8 ) = pbVar48;
                           *(byte**)( puVar57 + -0x12e0 ) = pbVar69 + (ulong)bVar33 + 1;
                           do {
                              bVar33 = *pbVar69;
                              fVar97 = *pfVar31;
                              *(byte**)( puVar57 + -0x1308 ) = pbVar69 + 1;
                              pfVar71 = pfVar56 + 2;
                              bVar33 = bVar33 >> 1;
                              *(float**)( puVar57 + -0x1318 ) = pfVar31 + 1;
                              *(float**)( puVar57 + -0x12f8 ) = pfVar56;
                              uVar45 = uVar18;
                              if ((int)(uint)bVar33 <= (int)uVar18) {
                                 uVar45 = (uint)bVar33;
                              }

                              do {
                                 uVar19 = ( uint ) * (short*)( puVar68 + ( ulong )(uVar44 >> 0x1b) * 2 );
                                 if (*(short*)( puVar68 + ( ulong )(uVar44 >> 0x1b) * 2 ) < 0) {
                                    uVar60 = 5;
                                    do {
                                       uVar78 = uVar78 + uVar60;
                                       iVar43 = (int)uVar19 >> 3;
                                       uVar44 = uVar44 << (sbyte)uVar60;
                                       uVar60 = uVar19 & 7;
                                       uVar19 = ( uint ) * (short*)( puVar68 + ( ulong )(( uVar44 >> ( -(char)uVar60 & 0x1fU ) ) - iVar43) * 2 );
                                    }
 while ( *(short*)( puVar68 + ( ulong )(( uVar44 >> ( -(char)uVar60 & 0x1fU ) ) - iVar43) * 2 ) < 0 );
                                 }

                                 uVar44 = uVar44 << ( ( byte )(uVar19 >> 8) & 0x1f );
                                 uVar78 = uVar78 + ( (int)uVar19 >> 8 );
                                 pfVar31 = pfVar71 + -2;
                                 do {
                                    uVar60 = uVar19 & 0xf;
                                    iVar43 = (int)uVar44 >> 0x1f;
                                    uVar19 = (int)uVar19 >> 4;
                                    pfVar47 = pfVar31 + 1;
                                    uVar44 = uVar44 << ( uVar60 != 0 );
                                    uVar78 = uVar78 + ( uVar60 != 0 );
                                    *pfVar31 = fVar97 * *(float*)( g_pow43 + ( ulong )(uVar60 + 0x10 + iVar43 * 0x10) * 4 );
                                    pfVar31 = pfVar47;
                                 }
 while ( pfVar47 != pfVar71 );
                                 if (-1 < (int)uVar78) {
                                    pbVar48 = pbVar73;
                                    uVar19 = uVar78;
                                    do {
                                       bVar34 = *pbVar48;
                                       pbVar48 = pbVar48 + 1;
                                       bVar36 = (byte)uVar19;
                                       uVar19 = uVar19 - 8;
                                       uVar44 = uVar44 | (uint)bVar34 << ( bVar36 & 0x1f );
                                    }
 while ( uVar19 != ( uVar78 | 0xfffffff8 ) );
                                    pbVar73 = pbVar73 + ( ( uVar78 >> 3 ) + 1 );
                                    uVar78 = ( uVar78 - 8 ) + ( uVar78 >> 3 ) * -8;
                                 }

                                 pfVar71 = pfVar71 + 2;
                              }
 while ( pfVar56 + ( ulong )(uVar45 - 1) * 2 + 4 != pfVar71 );
                              pfVar31 = *(float**)( puVar57 + -0x1318 );
                              uVar18 = uVar18 - bVar33;
                              pbVar69 = *(byte**)( puVar57 + -0x1308 );
                              pfVar56 = (float*)( *(long*)( puVar57 + -0x12f8 ) + 8 + ( ulong )(uVar45 - 1) * 8 );
                              if ((int)uVar18 < 1) {
                                 lVar67 = *(long*)( puVar57 + -0x12a8 );
                                 pbVar48 = *(byte**)( puVar57 + -0x12a0 );
                                 goto LAB_00102caf;
                              }

                           }
 while ( pbVar69 != *(byte**)( puVar57 + -0x12e0 ) );
                           lVar67 = *(long*)( puVar57 + -0x12d8 );
                        }
 else {
                           *(byte**)( puVar57 + -0x1210 ) = pbVar48;
                           *(byte**)( puVar57 + -0x1290 ) = pbVar69 + (ulong)bVar33 + 1;
                           *(uint*)( puVar57 + -0x12d8 ) = 0x20 - (uint)bVar34;
                           do {
                              fVar97 = *pfVar31;
                              pfVar71 = pfVar56 + 2;
                              bVar33 = *pbVar69;
                              *(float**)( puVar57 + -0x12d0 ) = pfVar31 + 1;
                              *(byte**)( puVar57 + -0x12c8 ) = pbVar69 + 1;
                              bVar33 = bVar33 >> 1;
                              *(uint*)( puVar57 + -0x12c0 ) = (uint)bVar33;
                              uVar45 = uVar18;
                              if ((int)(uint)bVar33 <= (int)uVar18) {
                                 uVar45 = (uint)bVar33;
                              }

                              pfVar31 = pfVar56 + ( ulong )(uVar45 - 1) * 2 + 4;
                              do {
                                 pfVar47 = pfVar71 + -2;
                                 uVar19 = ( uint ) * (short*)( puVar68 + ( ulong )(uVar44 >> 0x1b) * 2 );
                                 if (*(short*)( puVar68 + ( ulong )(uVar44 >> 0x1b) * 2 ) < 0) {
                                    uVar60 = 5;
                                    do {
                                       uVar78 = uVar78 + uVar60;
                                       iVar43 = (int)uVar19 >> 3;
                                       uVar44 = uVar44 << (sbyte)uVar60;
                                       uVar60 = uVar19 & 7;
                                       uVar19 = ( uint ) * (short*)( puVar68 + ( ulong )(( uVar44 >> ( -(char)uVar60 & 0x1fU ) ) - iVar43) * 2 );
                                    }
 while ( *(short*)( puVar68 + ( ulong )(( uVar44 >> ( -(char)uVar60 & 0x1fU ) ) - iVar43) * 2 ) < 0 );
                                 }

                                 *(float**)( puVar57 + -0x1308 ) = pfVar56;
                                 *(undefined1**)( puVar57 + -0x1318 ) = puVar68;
                                 uVar44 = uVar44 << ( ( byte )(uVar19 >> 8) & 0x1f );
                                 uVar78 = uVar78 + ( (int)uVar19 >> 8 );
                                 do {
                                    uVar60 = uVar19 & 0xf;
                                    if (uVar60 == 0xf) {
                                       uVar60 = uVar44 >> ( puVar57[-0x12d8] & 0x1f );
                                       *(uint*)( puVar57 + -0x12f8 ) = uVar60;
                                       uVar44 = uVar44 << ( ( byte ) * (int*)( puVar57 + -0x12e0 ) & 0x1f );
                                       uVar60 = uVar60 + 0xf;
                                       uVar78 = uVar78 + *(int*)( puVar57 + -0x12e0 );
                                       if (-1 < (int)uVar78) {
                                          pbVar48 = pbVar73;
                                          uVar38 = uVar78;
                                          do {
                                             bVar33 = *pbVar48;
                                             pbVar48 = pbVar48 + 1;
                                             bVar34 = (byte)uVar38;
                                             uVar38 = uVar38 - 8;
                                             uVar44 = uVar44 | (uint)bVar33 << ( bVar34 & 0x1f );
                                          }
 while ( uVar38 != ( uVar78 | 0xfffffff8 ) );
                                          pbVar73 = pbVar73 + ( ( uVar78 >> 3 ) + 1 );
                                          uVar78 = ( uVar78 - 8 ) + ( uVar78 >> 3 ) * -8;
                                       }

                                       if ((int)uVar60 < 0x81) {
                                          fVar82 = *(float*)( g_pow43 + (long)( *(int*)( puVar57 + -0x12f8 ) + 0x1f ) * 4 );
                                       }
 else {
                                          fVar82 = _LC59;
                                          uVar38 = uVar60;
                                          if ((int)uVar60 < 0x400) {
                                             fVar82 = _LC60;
                                             uVar38 = uVar60 * 8;
                                          }

                                          uVar70 = uVar38 * 2 & 0x40;
                                          fVar104 = (float)(int)( ( uVar38 & 0x3f ) - uVar70 ) / (float)(int)( ( uVar38 & 0xffffffc0 ) + uVar70 );
                                          fVar82 = ( ( fVar104 * fVar96 + fVar99 ) * fVar104 + fVar103 ) * *(float*)( g_pow43 + (long)( ( (int)( uVar38 + uVar70 ) >> 6 ) + 0x10 ) * 4 ) * fVar82;
                                       }

                                       fVar82 = fVar82 * fVar97;
                                       if ((int)uVar44 < 0) {
                                          fVar82 = (float)( (uint)fVar82 ^ _LC10 );
                                       }

                                    }
 else {
                                       fVar82 = fVar97 * *(float*)( g_pow43 + ( ulong )(uVar60 + 0x10 + ( (int)uVar44 >> 0x1f ) * 0x10) * 4 );
                                    }

                                    *pfVar47 = fVar82;
                                    pfVar47 = pfVar47 + 1;
                                    uVar19 = (int)uVar19 >> 4;
                                    uVar44 = uVar44 << ( uVar60 != 0 );
                                    uVar78 = uVar78 + ( uVar60 != 0 );
                                 }
 while ( pfVar47 != pfVar71 );
                                 pfVar56 = *(float**)( puVar57 + -0x1308 );
                                 puVar68 = *(undefined1**)( puVar57 + -0x1318 );
                                 if (-1 < (int)uVar78) {
                                    pbVar48 = pbVar73;
                                    uVar19 = uVar78;
                                    do {
                                       bVar33 = *pbVar48;
                                       pbVar48 = pbVar48 + 1;
                                       bVar34 = (byte)uVar19;
                                       uVar19 = uVar19 - 8;
                                       uVar44 = uVar44 | (uint)bVar33 << ( bVar34 & 0x1f );
                                    }
 while ( uVar19 != ( uVar78 | 0xfffffff8 ) );
                                    pbVar73 = pbVar73 + ( ( uVar78 >> 3 ) + 1 );
                                    uVar78 = ( uVar78 - 8 ) + ( uVar78 >> 3 ) * -8;
                                 }

                                 pfVar71 = pfVar71 + 2;
                              }
 while ( pfVar31 != pfVar71 );
                              pfVar31 = *(float**)( puVar57 + -0x12d0 );
                              pbVar69 = *(byte**)( puVar57 + -0x12c8 );
                              pfVar56 = pfVar56 + ( ulong )(uVar45 - 1) * 2 + 2;
                              uVar18 = uVar18 - *(int*)( puVar57 + -0x12c0 );
                              if ((int)uVar18 < 1) {
                                 lVar67 = *(long*)( puVar57 + -0x12a8 );
                                 pbVar48 = *(byte**)( puVar57 + -0x12a0 );
                                 goto LAB_00102caf;
                              }

                           }
 while ( pbVar69 != *(byte**)( puVar57 + -0x1290 ) );
                           lVar67 = *(long*)( puVar57 + -0x1210 );
                        }

                        pbVar48 = (byte*)( lVar67 + 1 );
                     }
 while ( true );
                  }

                  pfVar31 = *(float**)( puVar57 + -0x1228 );
                  fVar97 = 0.0;
                  LAB_00102caf:uVar45 = _LC10;
                  *(long*)( puVar57 + -0x1318 ) = lVar67;
                  iVar43 = *(int*)( puVar57 + -0x1254 );
                  uVar18 = 1 - uVar18;
                  do {
                     puVar68 = L3_huffman(float*,bs_t*,L3_gr_info_t_const*,float_const*,int)::tab33;
                     if (pbVar48[0xb] == 0) {
                        puVar68 = L3_huffman(float*,bs_t*,L3_gr_info_t_const*,float_const*,int)::tab32;
                     }

                     bVar33 = puVar68[uVar44 >> 0x1c];
                     if (( bVar33 & 8 ) == 0) {
                        bVar33 = puVar68[( (int)(uint)bVar33 >> 3 ) + ( ( uVar44 << 4 ) >> ( 0x20 - ( bVar33 & 3 ) & 0x1f ) )];
                     }

                     uVar78 = uVar78 + ( bVar33 & 7 );
                     sVar35 = ( sbyte )(bVar33 & 7);
                     uVar19 = uVar44 << sVar35;
                     if ((long)iVar43 < (long)(int)uVar78 + -0x18 + ( (long)pbVar73 - *(long*)( puVar57 + -0x1318 ) ) * 8) goto LAB_00102fe2;
                     uVar18 = uVar18 - 1;
                     if (uVar18 == 0) {
                        bVar34 = *pbVar69;
                        pbVar69 = pbVar69 + 1;
                        uVar18 = ( uint )(bVar34 >> 1);
                        if (bVar34 >> 1 == 0) goto LAB_00102fe2;
                        fVar97 = *pfVar31;
                        pfVar31 = pfVar31 + 1;
                     }

                     if (( bVar33 & 0x80 ) != 0) {
                        fVar103 = fVar97;
                        if ((int)( uVar44 << sVar35 ) < 0) {
                           fVar103 = (float)( (uint)fVar97 ^ uVar45 );
                        }

                        *pfVar56 = fVar103;
                        uVar78 = uVar78 + 1;
                        uVar19 = uVar19 * 2;
                     }

                     uVar44 = uVar19;
                     if (( bVar33 & 0x40 ) != 0) {
                        fVar103 = fVar97;
                        if ((int)uVar44 < 0) {
                           fVar103 = (float)( (uint)fVar97 ^ uVar45 );
                        }

                        pfVar56[1] = fVar103;
                        uVar44 = uVar44 * 2;
                        uVar78 = uVar78 + 1;
                     }

                     uVar18 = uVar18 - 1;
                     if (uVar18 == 0) {
                        bVar34 = *pbVar69;
                        pbVar69 = pbVar69 + 1;
                        uVar18 = ( uint )(bVar34 >> 1);
                        if (bVar34 >> 1 == 0) goto LAB_00102fe2;
                        fVar97 = *pfVar31;
                        pfVar31 = pfVar31 + 1;
                     }

                     if (( bVar33 & 0x20 ) != 0) {
                        fVar103 = fVar97;
                        if ((int)uVar44 < 0) {
                           fVar103 = (float)( (uint)fVar97 ^ uVar45 );
                        }

                        pfVar56[2] = fVar103;
                        uVar44 = uVar44 * 2;
                        uVar78 = uVar78 + 1;
                     }

                     if (( bVar33 & 0x10 ) != 0) {
                        fVar103 = fVar97;
                        if ((int)uVar44 < 0) {
                           fVar103 = (float)( (uint)fVar97 ^ uVar45 );
                        }

                        pfVar56[3] = fVar103;
                        uVar44 = uVar44 * 2;
                        uVar78 = uVar78 + 1;
                     }

                     pbVar46 = pbVar73;
                     uVar19 = uVar78;
                     if (-1 < (int)uVar78) {
                        do {
                           uVar44 = uVar44 | ( uint ) * pbVar46 << ( (byte)uVar19 & 0x1f );
                           uVar19 = uVar19 - 8;
                           pbVar46 = pbVar46 + 1;
                        }
 while ( -1 < (int)uVar19 );
                        pbVar73 = pbVar73 + ( ( uVar78 >> 3 ) + 1 );
                        uVar78 = ( uVar78 - 8 ) + ( -(uVar78 >> 3) & 0xfffffff8 );
                     }

                     pfVar56 = pfVar56 + 4;
                  }
 while ( true );
               }

               bVar33 = *(byte*)( *(long*)( puVar57 + -0x12b8 ) + 0x180b );
               if (( bVar33 & 0x10 ) != 0) goto LAB_00104221;
               if (( bVar33 & 0xe0 ) == 0x60) goto LAB_001041dc;
               goto LAB_00104170;
            }

            uVar18 = 0;
            goto LAB_00102ab5;
         }

      }

      *(undefined1*)( *(long*)( puVar57 + -0x12b8 ) + 0x1808 ) = 0;
      uVar20 = 0;
      goto LAB_0010217b;
      LAB_00102fe2:pbVar48 = pbVar48 + 0x20;
      *(int*)( puVar57 + -0x1258 ) = *(int*)( puVar57 + -0x1258 ) + 1;
      *(long*)( puVar57 + -0x1238 ) = *(long*)( puVar57 + -0x1238 ) + 0x27;
      *(undefined4*)( puVar57 + -0xfc0 ) = *(undefined4*)( puVar57 + -0x1254 );
      *(long*)( puVar57 + -0x1240 ) = *(long*)( puVar57 + -0x1240 ) + 0x900;
      if (*(int*)( puVar57 + -0x1214 ) == *(int*)( puVar57 + -0x1258 )) goto code_r0x00103025;
      goto LAB_00102446;
      code_r0x00103025:lVar67 = *(long*)( puVar57 + -0x11f0 );
      uVar44 = *(uint*)( puVar57 + -0x1214 );
      bVar33 = *(byte*)( *(long*)( puVar57 + -0x12b8 ) + 0x180b );
      if (( bVar33 & 0x10 ) == 0) {
         if (( bVar33 & 0xe0 ) == 0x60) {
            LAB_001041dc:pfVar56 = *(float**)( puVar57 + -0x1288 );
            do {
               fVar103 = *pfVar56;
               fVar96 = pfVar56[1];
               fVar99 = pfVar56[2];
               fVar97 = pfVar56[3];
               pfVar31 = pfVar56 + 4;
               *pfVar56 = pfVar56[0x240] + fVar103;
               pfVar56[1] = pfVar56[0x241] + fVar96;
               pfVar56[2] = pfVar56[0x242] + fVar99;
               pfVar56[3] = pfVar56[0x243] + fVar97;
               pfVar56[0x240] = fVar103 - pfVar56[0x240];
               pfVar56[0x241] = fVar96 - pfVar56[0x241];
               pfVar56[0x242] = fVar99 - pfVar56[0x242];
               pfVar56[0x243] = fVar97 - pfVar56[0x243];
               pfVar56 = pfVar31;
            }
 while ( (float*)( puVar57 + 0x4c8 ) != pfVar31 );
            goto LAB_00104214;
         }

      }
 else {
         LAB_00104221:plVar74 = *(long**)( puVar57 + -0x1270 );
         *(undefined4*)( puVar57 + -0x11c0 ) = 0xffffffff;
         *(undefined8*)( puVar57 + -0x11c8 ) = 0xffffffffffffffff;
         bVar34 = *(byte*)( (long)plVar74 + 0x11 );
         lVar49 = *plVar74;
         iVar43 = ( -(uint)(*(byte *)((long)plVar74 + 0x12) == 0) & 0xfffffffe ) + 3;
         iVar62 = (uint)bVar34 + ( uint ) * (byte*)( (long)plVar74 + 0x12 );
         if (iVar62 != 0) {
            pfVar56 = (float*)( puVar57 + 0x4c8 );
            uVar39 = 0;
            do {
               bVar36 = *(byte*)( lVar49 + uVar39 );
               if (bVar36 != 0) {
                  pfVar31 = pfVar56;
                  do {
                     if (( *pfVar31 != 0.0 ) || ( pfVar31[1] != 0.0 )) {
                        pfVar56 = pfVar56 + bVar36;
                        *(int*)( puVar57 + (long)( (int)uVar39 + (int)( ( uVar39 & 0xffffffff ) / 3 ) * -3 ) * 4 + -0x11c8 ) = (int)uVar39;
                        goto LAB_001042d7;
                     }

                     pfVar31 = pfVar31 + 2;
                  }
 while ( pfVar56 + ( ulong )(bVar36 - 1 >> 1) * 2 + 2 != pfVar31 );
                  pfVar56 = pfVar56 + bVar36;
               }

               LAB_001042d7:uVar39 = uVar39 + 1;
            }
 while ( (long)iVar62 != uVar39 );
            if (bVar34 != 0) {
               iVar16 = *(int*)( puVar57 + -0x11c4 );
               if (*(int*)( puVar57 + -0x11c4 ) <= *(int*)( puVar57 + -0x11c8 )) {
                  iVar16 = *(int*)( puVar57 + -0x11c8 );
               }

               if (iVar16 < *(int*)( puVar57 + -0x11c0 )) {
                  iVar16 = *(int*)( puVar57 + -0x11c0 );
               }

               *(int*)( puVar57 + -0x11c0 ) = iVar16;
               *(int*)( puVar57 + -0x11c8 ) = iVar16;
               *(int*)( puVar57 + -0x11c4 ) = iVar16;
            }

         }

         lVar49 = *(long*)( puVar57 + -0x12b0 );
         bVar34 = *(byte*)( *(long*)( puVar57 + -0x12b8 ) + 0x1809 );
         bVar36 = bVar34 & 8;
         iVar62 = iVar62 - iVar43;
         lVar40 = 0;
         do {
            bVar15 = -(bVar36 != 0) & 3;
            if (*(int*)( puVar57 + lVar40 * 4 + -0x11c8 ) < ( iVar62 - iVar43 ) + (int)lVar40) {
               bVar15 = *(byte*)( lVar49 + ( (long)iVar62 - (long)iVar43 ) + 0x3f57 + lVar40 );
            }

            *(byte*)( lVar49 + iVar62 + 0x3f57 + lVar40 ) = bVar15;
            lVar40 = lVar40 + 1;
         }
 while ( iVar43 != lVar40 );
         pbVar48 = (byte*)**(undefined8**)( puVar57 + -0x1270 );
         bVar15 = *pbVar48;
         *(uint*)( puVar57 + -0x1318 ) = *(ushort*)( (long)*(undefined8**)( puVar57 + -0x1270 ) + 0x2c ) & 1;
         if (bVar15 != 0) {
            pfVar56 = *(float**)( puVar57 + -0x1288 );
            puVar57[-0x1308] = bVar34 & 8;
            uVar39 = 0;
            pbVar69 = pbVar48;
            do {
               bVar34 = puVar57[uVar39 + 0x2f8f];
               iVar43 = (int)uVar39;
               if (( *(int*)( puVar57 + ( ulong )(uint)(iVar43 + (int)( uVar39 / 3 ) * -3) * 4 + -0x11c8 ) < iVar43 ) && ( bVar34 < ( byte )(( -(bVar36 == 0) & 0x39U ) + 7) )) {
                  fVar103 = _LC63;
                  if (( bVar33 & 0x20 ) != 0) {
                     fVar103 = _LC62;
                  }

                  if (puVar57[-0x1308] == '\0') {
                     uVar18 = ( bVar34 + 1 >> 1 ) << ( puVar57[-0x1318] & 0x1f );
                     fVar96 = _LC63;
                     do {
                        uVar45 = 0x78;
                        if ((int)uVar18 < 0x79) {
                           uVar45 = uVar18;
                        }

                        uVar18 = uVar18 - uVar45;
                        fVar96 = fVar96 * (float)( 0x40000000 >> ( ( byte )((int)uVar45 >> 2) & 0x1f ) ) * *(float*)( L3_ldexp_q2(float,int):: );
                     }
 while ( 0 < (int)uVar18 );
                     fVar99 = fVar96 * fVar103;
                     if (( bVar34 & 1 ) == 0) {
                        fVar99 = fVar103;
                        fVar103 = fVar96 * fVar103;
                     }

                  }
 else {
                     uVar18 = (uint)bVar34 * 2;
                     fVar99 = *(float*)( L3_stereo_process(float*,unsigned_char_const*,unsigned_char_const*,unsigned_char_const*,int*,int)
                                :: ) * fVar103;
                     fVar103 = fVar103 * *(float*)( L3_stereo_process(float*,unsigned_char_const*,unsigned_char_const*,unsigned_char_const*,int*,int)
                                           :: );
                  }

                  pfVar31 = pfVar56;
                  do {
                     pfVar71 = pfVar31 + 1;
                     pfVar31[0x240] = *pfVar31 * fVar103;
                     *pfVar31 = *pfVar31 * fVar99;
                     pfVar31 = pfVar71;
                  }
 while ( pfVar71 != pfVar56 + ( ulong )(bVar15 - 1) + 1 );
               }
 else if (( bVar33 & 0x20 ) != 0) {
                  if (bVar15 < 4) {
                     iVar62 = 0;
                  }
 else {
                     uVar18 = bVar15 - 4 >> 2;
                     pfVar31 = pfVar56;
                     do {
                        fVar103 = *pfVar31;
                        fVar96 = pfVar31[1];
                        fVar99 = pfVar31[2];
                        fVar97 = pfVar31[3];
                        pfVar71 = pfVar31 + 4;
                        auVar2 = *(undefined1(*) [16])( pfVar31 + 0x240 );
                        *pfVar31 = pfVar31[0x240] + fVar103;
                        pfVar31[1] = pfVar31[0x241] + fVar96;
                        pfVar31[2] = pfVar31[0x242] + fVar99;
                        pfVar31[3] = pfVar31[0x243] + fVar97;
                        pfVar31[0x240] = fVar103 - auVar2._0_4_;
                        pfVar31[0x241] = fVar96 - auVar2._4_4_;
                        pfVar31[0x242] = fVar99 - auVar2._8_4_;
                        pfVar31[0x243] = fVar97 - auVar2._12_4_;
                        pfVar31 = pfVar71;
                     }
 while ( pfVar56 + (ulong)uVar18 * 4 + 4 != pfVar71 );
                     iVar62 = uVar18 * 4 + 4;
                     if ((int)(uint)bVar15 <= iVar62) goto LAB_001043e9;
                  }

                  pfVar31 = pfVar56 + iVar62;
                  do {
                     fVar103 = pfVar31[0x240];
                     pfVar71 = pfVar31 + 1;
                     pfVar31[0x240] = *pfVar31 - fVar103;
                     *pfVar31 = *pfVar31 + fVar103;
                     pfVar31 = pfVar71;
                  }
 while ( pfVar56 + ( ulong )(( bVar15 - 1 ) - iVar62) + (long)iVar62 + 1 != pfVar71 );
               }

               LAB_001043e9:uVar39 = ( ulong )(iVar43 + 1);
               bVar33 = *pbVar69;
               pbVar69 = pbVar48 + uVar39;
               bVar15 = *pbVar69;
               pfVar56 = pfVar56 + bVar33;
               if (bVar15 == 0) break;
               bVar33 = *(byte*)( *(long*)( puVar57 + -0x12b8 ) + 0x180b );
            }
 while ( true );
         }

         LAB_00104214:if ((int)uVar44 < 1) goto LAB_001032e4;
      }

      plVar74 = *(long**)( puVar57 + -0x1270 );
      *(undefined8*)( puVar57 + -0x12f8 ) = 0xb90;
      puVar75 = (uint*)( puVar57 + 0x55c );
      *(undefined8*)( puVar57 + -0x1308 ) = *(undefined8*)( puVar57 + -0x12b8 );
      *(long**)( puVar57 + -0x12c8 ) = plVar74 + (long)(int)uVar44 * 4;
      do {
         uVar79 = 0x1f;
         bVar33 = *(byte*)( *(long*)( puVar57 + -0x12b8 ) + 0x1809 );
         uVar21 = *(ulong*)( puVar57 + -0x12f8 );
         iVar43 = ( uint )((char)plVar74[2] != '\0') * 2 << ( ( byte )(( *(byte*)( *(long*)( puVar57 + -0x12b8 ) + 0x180a ) >> 2 & 3 ) + ( ( bVar33 >> 3 & 1 ) + ( bVar33 >> 4 & 1 ) ) * '\x03') == '\x02' );
         uVar39 = 0x3f80;
         if (0x3f7f < uVar21) {
            uVar39 = uVar21;
         }

         *(ulong*)( puVar57 + -0x12e0 ) = uVar39;
         uVar39 = uVar39 - uVar21;
         cVar58 = *(char*)( (long)plVar74 + 0x12 );
         *(uint**)( puVar57 + -0x1318 ) = puVar75 + -0x265;
         if (cVar58 == '\0') {
            LAB_00103129:fVar91 = _UNK_0011877c;
            fVar90 = _UNK_00118778;
            fVar88 = _UNK_00118774;
            fVar87 = __LC70;
            fVar85 = _UNK_0011876c;
            fVar84 = _UNK_00118768;
            fVar95 = _UNK_00118764;
            fVar92 = __LC69;
            fVar93 = _UNK_0011875c;
            fVar102 = _UNK_00118758;
            fVar104 = _UNK_00118754;
            fVar82 = __LC68;
            fVar97 = _UNK_0011874c;
            fVar99 = _UNK_00118748;
            fVar96 = _UNK_00118744;
            fVar103 = __LC67;
            pfVar56 = *(float**)( puVar57 + -0x1318 );
            pfVar31 = pfVar56;
            do {
               fVar94 = pfVar31[0xe];
               fVar83 = pfVar31[0xf];
               fVar86 = pfVar31[0x10];
               fVar89 = pfVar31[0x11];
               pfVar71 = pfVar31 + 0x12;
               fVar98 = pfVar31[0x16];
               fVar100 = pfVar31[0x17];
               fVar101 = pfVar31[0x18];
               fVar105 = pfVar31[0x19];
               pfVar31[0xe] = fVar94 * fVar97 + pfVar31[0x15] * fVar93;
               pfVar31[0xf] = fVar83 * fVar99 + pfVar31[0x14] * fVar102;
               pfVar31[0x10] = fVar86 * fVar96 + pfVar31[0x13] * fVar104;
               pfVar31[0x11] = fVar89 * fVar103 + pfVar31[0x12] * fVar82;
               *pfVar71 = pfVar31[0x12] * fVar103 - fVar89 * fVar82;
               pfVar31[0x13] = pfVar31[0x13] * fVar96 - fVar86 * fVar104;
               pfVar31[0x14] = pfVar31[0x14] * fVar99 - fVar83 * fVar102;
               pfVar31[0x15] = pfVar31[0x15] * fVar97 - fVar94 * fVar93;
               pfVar31[0x16] = fVar98 * fVar92 - pfVar31[0xd] * fVar87;
               pfVar31[0x17] = fVar100 * fVar95 - pfVar31[0xc] * fVar88;
               pfVar31[0x18] = fVar101 * fVar84 - pfVar31[0xb] * fVar90;
               pfVar31[0x19] = fVar105 * fVar85 - pfVar31[10] * fVar91;
               pfVar31[10] = pfVar31[10] * fVar85 + fVar105 * fVar91;
               pfVar31[0xb] = pfVar31[0xb] * fVar84 + fVar101 * fVar90;
               pfVar31[0xc] = pfVar31[0xc] * fVar95 + fVar100 * fVar88;
               pfVar31[0xd] = pfVar31[0xd] * fVar92 + fVar98 * fVar87;
               pfVar31 = pfVar71;
            }
 while ( pfVar71 != pfVar56 + uVar79 * 0x12 );
            bVar33 = *(byte*)( (long)plVar74 + 0xf );
            uVar44 = (uint)bVar33;
            pfVar56 = *(float**)( puVar57 + -0x1308 );
            iVar62 = 0;
            if (iVar43 != 0) {
               *(int*)( puVar57 + -0x12d8 ) = iVar43;
               pfVar31 = *(float**)( puVar57 + -0x1318 );
               *(uint*)( puVar57 + -0x12d0 ) = (uint)bVar33;
               *(undefined8*)( puVar57 + -0x1320 ) = 0x1031de;
               L3_imdct36(pfVar31, pfVar56, (float*)L3_imdct_gr(float*,float*,, unsigned_int, unsigned_int), ::g_mdct_window, iVar43);
               iVar62 = *(int*)( puVar57 + -0x12d8 );
               uVar44 = *(uint*)( puVar57 + -0x12d0 );
               pfVar56 = pfVar56 + ( uint )(iVar62 * 9);
               uVar21 = 0x3f80;
               if (0x3f7f < uVar39) {
                  uVar21 = uVar39;
               }

               lVar49 = ( ulong )(uint)(iVar62 * 0x12) * 4 + uVar21;
               uVar79 = ( *(long*)( puVar57 + -0x12f8 ) - *(long*)( puVar57 + -0x12e0 ) ) + lVar49;
               if (uVar79 < uVar21) {
                  uVar79 = uVar21;
               }

               *(float**)( puVar57 + -0x1318 ) = pfVar31 + ( uint )(iVar62 * 0x12);
               uVar39 = ( uVar39 - lVar49 ) + uVar79;
            }

         }
 else {
            uVar44 = iVar43 - 1;
            pbVar48 = (byte*)( ( ulong ) * (byte*)( (long)plVar74 + 0x11 ) + *plVar74 );
            puVar52 = *(undefined4**)( puVar57 + -0x1260 );
            lVar49 = (long)( iVar43 * 0x12 ) * 4;
            uVar79 = 0x3f80;
            if (0x3f7f < uVar39) {
               uVar79 = uVar39;
            }

            lVar40 = uVar79 + lVar49;
            uVar21 = ( uVar21 - *(long*)( puVar57 + -0x12e0 ) ) + lVar40;
            if (uVar21 < uVar79) {
               uVar21 = uVar79;
            }

            puVar65 = (undefined4*)( *(long*)( puVar57 + -0x1318 ) + lVar49 );
            lVar49 = uVar21 + ( uVar39 - lVar40 );
            bVar33 = *pbVar48;
            lVar40 = 0;
            if (bVar33 != 0) {
               *(uint*)( puVar57 + -0x12d8 ) = uVar44;
               *(long*)( puVar57 + -0x12d0 ) = lVar67;
               *(long*)( puVar57 + -0x12c0 ) = lVar49;
               puVar72 = puVar65;
               do {
                  uVar21 = (ulong)bVar33;
                  puVar30 = puVar72;
                  puVar54 = puVar52;
                  do {
                     *puVar54 = *puVar30;
                     puVar54[1] = puVar30[uVar21];
                     puVar1 = puVar30 + (long)(int)(uint)bVar33 * 2;
                     puVar30 = puVar30 + 1;
                     puVar54[2] = *puVar1;
                     puVar54 = puVar54 + 3;
                  }
 while ( puVar30 != puVar72 + (int)(uint)bVar33 );
                  pbVar48 = pbVar48 + 3;
                  puVar72 = puVar72 + uVar21 + (long)(int)( (uint)bVar33 * 2 );
                  bVar33 = *pbVar48;
                  puVar52 = puVar52 + uVar21 * 3;
               }
 while ( bVar33 != 0 );
               uVar44 = *(uint*)( puVar57 + -0x12d8 );
               lVar67 = *(long*)( puVar57 + -0x12d0 );
               lVar49 = *(long*)( puVar57 + -0x12c0 );
               lVar40 = (long)puVar52 - *(long*)( puVar57 + -0x1260 );
            }

            uVar79 = (ulong)uVar44;
            *(undefined8*)( puVar57 + -0x1320 ) = 0x1040b4;
            __memcpy_chk(puVar65, *(undefined8*)( puVar57 + -0x1260 ), lVar40, lVar49);
            if (0 < (int)uVar44) goto LAB_00103129;
            pfVar56 = *(float**)( puVar57 + -0x1308 );
            uVar44 = ( uint ) * (byte*)( (long)plVar74 + 0xf );
            iVar62 = 0;
         }

         if (uVar44 == 2) {
            puVar23 = *(undefined8**)( puVar57 + -0x1318 );
            *(long*)( puVar57 + -0x12c0 ) = lVar67;
            *(undefined8**)( puVar57 + -0x1318 ) = puVar23 + ( ulong )(0x20U - iVar62) * 9;
            *(undefined1**)( puVar57 + -0x12d0 ) = puVar57 + -0x11c8;
            *(undefined1**)( puVar57 + -0x12e0 ) = puVar57 + -0x11c4;
            *(undefined1**)( puVar57 + -0x12d8 ) = puVar57 + -0x11c0;
            do {
               uVar10 = puVar23[1];
               uVar6 = puVar23[8];
               pfVar31 = pfVar56 + 6;
               *(undefined8*)( puVar57 + -0x11c8 ) = *puVar23;
               *(undefined8*)( puVar57 + -0x11c0 ) = uVar10;
               uVar10 = puVar23[2];
               uVar11 = puVar23[3];
               *(undefined8*)( puVar57 + -0x1188 ) = uVar6;
               *(undefined8*)( puVar57 + -0x11b8 ) = uVar10;
               *(undefined8*)( puVar57 + -0x11b0 ) = uVar11;
               uVar6 = puVar23[5];
               *(undefined8*)( puVar57 + -0x11a8 ) = puVar23[4];
               *(undefined8*)( puVar57 + -0x11a0 ) = uVar6;
               *(undefined1(*) [16])( puVar57 + -0x1198 ) = *(undefined1(*) [16])( puVar23 + 6 );
               *(undefined8*)( puVar57 + -0x1320 ) = 0x103f14;
               __memcpy_chk(puVar23, pfVar56, 0x18, uVar39);
               *(undefined8*)( puVar57 + -0x1320 ) = 0x103f25;
               L3_imdct12(*(float**)( puVar57 + -0x12d0 ), (float*)( puVar23 + 3 ), pfVar31);
               *(undefined8*)( puVar57 + -0x1320 ) = 0x103f36;
               L3_imdct12(*(float**)( puVar57 + -0x12e0 ), (float*)( puVar23 + 6 ), pfVar31);
               *(undefined8*)( puVar57 + -0x1320 ) = 0x103f4a;
               L3_imdct12(*(float**)( puVar57 + -0x12d8 ), pfVar56, pfVar31);
               uVar21 = 0x3f80;
               if (0x3f7f < uVar39) {
                  uVar21 = uVar39;
               }

               uVar79 = ( uVar21 - uVar39 ) + 0x48;
               if (uVar79 < uVar21) {
                  uVar79 = uVar21;
               }

               puVar23 = puVar23 + 9;
               uVar39 = ( uVar39 - uVar21 ) + -0x48 + uVar79;
               pfVar56 = pfVar56 + 9;
            }
 while ( puVar23 != *(undefined8**)( puVar57 + -0x1318 ) );
            lVar67 = *(long*)( puVar57 + -0x12c0 );
         }
 else {
            lVar49 = 0x48;
            if (uVar44 != 3) {
               lVar49 = 0;
            }

            *(undefined8*)( puVar57 + -0x1320 ) = 0x103262;
            L3_imdct36(*(float**)( puVar57 + -0x1318 ), pfVar56, (float*)( L3_imdct_gr(float*,float*,unsigned_int,unsigned_int):: ), 0x20U - iVar62);
         }

         puVar50 = puVar75 + -0x240;
         do {
            puVar14 = puVar50 + -0x12;
            do {
               puVar24 = puVar14;
               *puVar24 = *puVar24 ^ _LC10;
               puVar14 = puVar24 + 2;
            }
 while ( puVar24 + 2 != puVar50 );
            puVar50 = puVar24 + 0x26;
         }
 while ( puVar75 != puVar50 );
         *(long*)( puVar57 + -0x12f8 ) = *(long*)( puVar57 + -0x12f8 ) + 0x900;
         plVar74 = plVar74 + 4;
         puVar75 = puVar24 + 0x266;
         *(long*)( puVar57 + -0x1308 ) = *(long*)( puVar57 + -0x1308 ) + 0x480;
      }
 while ( *(long**)( puVar57 + -0x12c8 ) != plVar74 );
      LAB_001032e4:fVar104 = _LC82;
      fVar82 = _LC80;
      fVar97 = _LC78;
      fVar99 = _LC76;
      fVar96 = _LC74;
      fVar103 = _LC72;
      uVar44 = *(uint*)( *(long*)( puVar57 + -0x1280 ) + 8 );
      if ((int)uVar44 < 1) {
         LAB_00104170:lVar40 = (long)(int)uVar44;
      }
 else {
         lVar40 = (long)(int)uVar44;
         lVar49 = 0;
         pfVar31 = *(float**)( puVar57 + -0x12b0 );
         pfVar56 = (float*)( puVar57 + -0x11c8 );
         pfVar71 = *(float**)( puVar57 + -0x1288 );
         do {
            *(uint*)( puVar57 + -0x1318 ) = uVar44;
            iVar43 = 0;
            pfVar47 = pfVar71;
            while (true) {
               pfVar27 = pfVar56;
               pfVar28 = pfVar47 + 0x10e;
               pfVar51 = (float*)&mp3d_DCT_II(float*,int)::g_sec;, pfVar63 = pfVar47);
               do {
                  fVar95 = *pfVar63;
                  fVar84 = pfVar63[1];
                  fVar85 = pfVar63[2];
                  fVar87 = pfVar63[3];
                  pfVar25 = pfVar27 + 4;
                  fVar102 = *pfVar51;
                  fVar88 = pfVar28[0x120];
                  fVar90 = pfVar28[0x121];
                  fVar91 = pfVar28[0x122];
                  fVar94 = pfVar28[0x123];
                  fVar93 = pfVar51[1];
                  fVar105 = *pfVar28 + pfVar63[0x120];
                  fVar106 = pfVar28[1] + pfVar63[0x121];
                  fVar107 = pfVar28[2] + pfVar63[0x122];
                  fVar108 = pfVar28[3] + pfVar63[0x123];
                  fVar98 = ( *pfVar28 - pfVar63[0x120] ) * fVar102;
                  fVar100 = ( pfVar28[1] - pfVar63[0x121] ) * fVar102;
                  fVar101 = ( pfVar28[2] - pfVar63[0x122] ) * fVar102;
                  fVar102 = ( pfVar28[3] - pfVar63[0x123] ) * fVar102;
                  fVar83 = ( *pfVar63 - pfVar28[0x120] ) * fVar93;
                  fVar86 = ( pfVar63[1] - pfVar28[0x121] ) * fVar93;
                  fVar89 = ( pfVar63[2] - pfVar28[0x122] ) * fVar93;
                  fVar93 = ( pfVar63[3] - pfVar28[0x123] ) * fVar93;
                  *pfVar27 = fVar95 + fVar88 + fVar105;
                  pfVar27[1] = fVar84 + fVar90 + fVar106;
                  pfVar27[2] = fVar85 + fVar91 + fVar107;
                  pfVar27[3] = fVar87 + fVar94 + fVar108;
                  fVar92 = pfVar51[2];
                  pfVar27[0x20] = ( ( fVar95 + fVar88 ) - fVar105 ) * fVar92;
                  pfVar27[0x21] = ( ( fVar84 + fVar90 ) - fVar106 ) * fVar92;
                  pfVar27[0x22] = ( ( fVar85 + fVar91 ) - fVar107 ) * fVar92;
                  pfVar27[0x23] = ( ( fVar87 + fVar94 ) - fVar108 ) * fVar92;
                  pfVar27[0x40] = fVar98 + fVar83;
                  pfVar27[0x41] = fVar100 + fVar86;
                  pfVar27[0x42] = fVar101 + fVar89;
                  pfVar27[0x43] = fVar102 + fVar93;
                  pfVar27[0x60] = ( fVar83 - fVar98 ) * fVar92;
                  pfVar27[0x61] = ( fVar86 - fVar100 ) * fVar92;
                  pfVar27[0x62] = ( fVar89 - fVar101 ) * fVar92;
                  pfVar27[99] = ( fVar93 - fVar102 ) * fVar92;
                  pfVar26 = pfVar56;
                  pfVar27 = pfVar25;
                  pfVar28 = pfVar28 + -0x12;
                  pfVar51 = pfVar51 + 3;
                  pfVar63 = pfVar63 + 0x12;
               }
 while ( pfVar25 != (float*)( puVar57 + -0x1148 ) );
               do {
                  fVar102 = pfVar26[0x10];
                  fVar93 = pfVar26[0x11];
                  fVar92 = pfVar26[0x12];
                  fVar95 = pfVar26[0x13];
                  pfVar27 = pfVar26 + 0x20;
                  fVar84 = pfVar26[0xc] + fVar102;
                  fVar87 = pfVar26[0xd] + fVar93;
                  fVar90 = pfVar26[0xe] + fVar92;
                  fVar94 = pfVar26[0xf] + fVar95;
                  fVar101 = ( *pfVar26 + pfVar26[0x1c] ) - fVar84;
                  fVar105 = ( pfVar26[1] + pfVar26[0x1d] ) - fVar87;
                  fVar106 = ( pfVar26[2] + pfVar26[0x1e] ) - fVar90;
                  fVar107 = ( pfVar26[3] + pfVar26[0x1f] ) - fVar94;
                  fVar84 = *pfVar26 + pfVar26[0x1c] + fVar84;
                  fVar87 = pfVar26[1] + pfVar26[0x1d] + fVar87;
                  fVar90 = pfVar26[2] + pfVar26[0x1e] + fVar90;
                  fVar94 = pfVar26[3] + pfVar26[0x1f] + fVar94;
                  fVar85 = pfVar26[4] + pfVar26[0x18] + pfVar26[8] + pfVar26[0x14];
                  fVar88 = pfVar26[5] + pfVar26[0x19] + pfVar26[9] + pfVar26[0x15];
                  fVar91 = pfVar26[6] + pfVar26[0x1a] + pfVar26[10] + pfVar26[0x16];
                  fVar83 = pfVar26[7] + pfVar26[0x1b] + pfVar26[0xb] + pfVar26[0x17];
                  fVar108 = *pfVar26 - pfVar26[0x1c];
                  fVar109 = pfVar26[1] - pfVar26[0x1d];
                  fVar110 = pfVar26[2] - pfVar26[0x1e];
                  fVar111 = pfVar26[3] - pfVar26[0x1f];
                  *pfVar26 = fVar84 + fVar85;
                  pfVar26[1] = fVar87 + fVar88;
                  pfVar26[2] = fVar90 + fVar91;
                  pfVar26[3] = fVar94 + fVar83;
                  fVar86 = ( ( ( pfVar26[4] + pfVar26[0x18] ) - ( pfVar26[8] + pfVar26[0x14] ) ) + fVar101 ) * fVar103;
                  fVar89 = ( ( ( pfVar26[5] + pfVar26[0x19] ) - ( pfVar26[9] + pfVar26[0x15] ) ) + fVar105 ) * fVar103;
                  fVar98 = ( ( ( pfVar26[6] + pfVar26[0x1a] ) - ( pfVar26[10] + pfVar26[0x16] ) ) + fVar106 ) * fVar103;
                  fVar100 = ( ( ( pfVar26[7] + pfVar26[0x1b] ) - ( pfVar26[0xb] + pfVar26[0x17] ) ) + fVar107 ) * fVar103;
                  pfVar26[0x10] = ( fVar84 - fVar85 ) * fVar103;
                  pfVar26[0x11] = ( fVar87 - fVar88 ) * fVar103;
                  pfVar26[0x12] = ( fVar90 - fVar91 ) * fVar103;
                  pfVar26[0x13] = ( fVar94 - fVar83 ) * fVar103;
                  fVar90 = ( pfVar26[4] - pfVar26[0x18] ) + fVar108;
                  fVar91 = ( pfVar26[5] - pfVar26[0x19] ) + fVar109;
                  fVar94 = ( pfVar26[6] - pfVar26[0x1a] ) + fVar110;
                  fVar83 = ( pfVar26[7] - pfVar26[0x1b] ) + fVar111;
                  fVar84 = ( ( pfVar26[4] - pfVar26[0x18] ) + ( pfVar26[8] - pfVar26[0x14] ) ) * fVar103;
                  fVar85 = ( ( pfVar26[5] - pfVar26[0x19] ) + ( pfVar26[9] - pfVar26[0x15] ) ) * fVar103;
                  fVar87 = ( ( pfVar26[6] - pfVar26[0x1a] ) + ( pfVar26[10] - pfVar26[0x16] ) ) * fVar103;
                  fVar88 = ( ( pfVar26[7] - pfVar26[0x1b] ) + ( pfVar26[0xb] - pfVar26[0x17] ) ) * fVar103;
                  fVar102 = ( ( pfVar26[0xc] - fVar102 ) + ( pfVar26[8] - pfVar26[0x14] ) ) - fVar90 * fVar96;
                  fVar93 = ( ( pfVar26[0xd] - fVar93 ) + ( pfVar26[9] - pfVar26[0x15] ) ) - fVar91 * fVar96;
                  fVar92 = ( ( pfVar26[0xe] - fVar92 ) + ( pfVar26[10] - pfVar26[0x16] ) ) - fVar94 * fVar96;
                  fVar95 = ( ( pfVar26[0xf] - fVar95 ) + ( pfVar26[0xb] - pfVar26[0x17] ) ) - fVar83 * fVar96;
                  fVar112 = fVar108 - fVar84;
                  fVar113 = fVar109 - fVar85;
                  fVar114 = fVar110 - fVar87;
                  fVar115 = fVar111 - fVar88;
                  fVar84 = fVar84 + fVar108;
                  fVar85 = fVar85 + fVar109;
                  fVar87 = fVar87 + fVar110;
                  fVar88 = fVar88 + fVar111;
                  fVar90 = fVar90 + fVar102 * fVar99;
                  fVar91 = fVar91 + fVar93 * fVar99;
                  fVar94 = fVar94 + fVar92 * fVar99;
                  fVar83 = fVar83 + fVar95 * fVar99;
                  fVar102 = fVar102 - fVar90 * fVar96;
                  fVar93 = fVar93 - fVar91 * fVar96;
                  fVar92 = fVar92 - fVar94 * fVar96;
                  fVar95 = fVar95 - fVar83 * fVar96;
                  pfVar26[0x1c] = ( fVar84 - fVar90 ) * __LC87;
                  pfVar26[0x1d] = ( fVar85 - fVar91 ) * _UNK_001187a4;
                  pfVar26[0x1e] = ( fVar87 - fVar94 ) * _UNK_001187a8;
                  pfVar26[0x1f] = ( fVar88 - fVar83 ) * _UNK_001187ac;
                  pfVar26[4] = ( fVar90 + fVar84 ) * fVar97;
                  pfVar26[5] = ( fVar91 + fVar85 ) * fVar97;
                  pfVar26[6] = ( fVar94 + fVar87 ) * fVar97;
                  pfVar26[7] = ( fVar83 + fVar88 ) * fVar97;
                  pfVar26[0x18] = ( fVar101 - fVar86 ) * __LC85;
                  pfVar26[0x19] = ( fVar105 - fVar89 ) * _UNK_00118794;
                  pfVar26[0x1a] = ( fVar106 - fVar98 ) * _UNK_00118798;
                  pfVar26[0x1b] = ( fVar107 - fVar100 ) * _UNK_0011879c;
                  pfVar26[8] = ( fVar101 + fVar86 ) * fVar82;
                  pfVar26[9] = ( fVar105 + fVar89 ) * fVar82;
                  pfVar26[10] = ( fVar106 + fVar98 ) * fVar82;
                  pfVar26[0xb] = ( fVar107 + fVar100 ) * fVar82;
                  pfVar26[0x14] = ( fVar102 + fVar112 ) * __LC83;
                  pfVar26[0x15] = ( fVar93 + fVar113 ) * _UNK_00118784;
                  pfVar26[0x16] = ( fVar92 + fVar114 ) * _UNK_00118788;
                  pfVar26[0x17] = ( fVar95 + fVar115 ) * _UNK_0011878c;
                  pfVar26[0xc] = ( fVar112 - fVar102 ) * fVar104;
                  pfVar26[0xd] = ( fVar113 - fVar93 ) * fVar104;
                  pfVar26[0xe] = ( fVar114 - fVar92 ) * fVar104;
                  pfVar26[0xf] = ( fVar115 - fVar95 ) * fVar104;
                  pfVar26 = pfVar27;
               }
 while ( pfVar27 != pfVar31 );
               if (iVar43 == 0x10) break;
               fVar102 = *(float*)( puVar57 + -0x10c8 );
               fVar93 = *(float*)( puVar57 + -0x10c4 );
               fVar92 = *(float*)( puVar57 + -0x10c0 );
               fVar95 = *(float*)( puVar57 + -0x10bc );
               pfVar27 = pfVar56;
               pfVar28 = pfVar47;
               fVar84 = *(float*)( puVar57 + -0x1148 );
               fVar85 = *(float*)( puVar57 + -0x1144 );
               fVar87 = *(float*)( puVar57 + -0x1140 );
               fVar88 = *(float*)( puVar57 + -0x113c );
               fVar90 = *(float*)( puVar57 + -0x1048 );
               fVar91 = *(float*)( puVar57 + -0x1044 );
               fVar94 = *(float*)( puVar57 + -0x1040 );
               fVar83 = *(float*)( puVar57 + -0x103c );
               do {
                  uVar6 = *(undefined8*)( pfVar27 + 2 );
                  fVar86 = pfVar27[100];
                  fVar89 = pfVar27[0x65];
                  fVar98 = pfVar27[0x66];
                  fVar100 = pfVar27[0x67];
                  pfVar51 = pfVar27 + 4;
                  fVar90 = fVar90 + fVar86;
                  fVar91 = fVar91 + fVar89;
                  fVar94 = fVar94 + fVar98;
                  fVar83 = fVar83 + fVar100;
                  *(undefined8*)pfVar28 = *(undefined8*)pfVar27;
                  *(undefined8*)( pfVar28 + 2 ) = uVar6;
                  pfVar28[0x12] = fVar102 + fVar90;
                  pfVar28[0x13] = fVar93 + fVar91;
                  pfVar28[0x14] = fVar92 + fVar94;
                  pfVar28[0x15] = fVar95 + fVar83;
                  fVar101 = pfVar27[0x24];
                  fVar105 = pfVar27[0x25];
                  fVar106 = pfVar27[0x26];
                  fVar107 = pfVar27[0x27];
                  pfVar28[0x24] = fVar84 + fVar101;
                  pfVar28[0x25] = fVar85 + fVar105;
                  pfVar28[0x26] = fVar87 + fVar106;
                  pfVar28[0x27] = fVar88 + fVar107;
                  fVar102 = pfVar27[0x44];
                  fVar93 = pfVar27[0x45];
                  fVar92 = pfVar27[0x46];
                  fVar95 = pfVar27[0x47];
                  pfVar28[0x36] = fVar90 + fVar102;
                  pfVar28[0x37] = fVar91 + fVar93;
                  pfVar28[0x38] = fVar94 + fVar92;
                  pfVar28[0x39] = fVar83 + fVar95;
                  pfVar27 = pfVar51;
                  pfVar28 = pfVar28 + 0x48;
                  fVar84 = fVar101;
                  fVar85 = fVar105;
                  fVar87 = fVar106;
                  fVar88 = fVar107;
                  fVar90 = fVar86;
                  fVar91 = fVar89;
                  fVar94 = fVar98;
                  fVar83 = fVar100;
               }
 while ( pfVar51 != (float*)( puVar57 + -0x1158 ) );
               fVar102 = *(float*)( puVar57 + -0xfd8 );
               fVar93 = *(float*)( puVar57 + -0xfd4 );
               fVar92 = *(float*)( puVar57 + -0xfd0 );
               fVar95 = *(float*)( puVar57 + -0xfcc );
               fVar84 = *(float*)( puVar57 + -0x1058 );
               fVar85 = *(float*)( puVar57 + -0x1054 );
               fVar87 = *(float*)( puVar57 + -0x1050 );
               fVar88 = *(float*)( puVar57 + -0x104c );
               iVar43 = iVar43 + 4;
               uVar6 = *(undefined8*)( puVar57 + -0x1158 );
               uVar10 = *(undefined8*)( puVar57 + -0x1150 );
               pfVar47[0x22e] = fVar102;
               pfVar47[0x22f] = fVar93;
               pfVar47[0x230] = fVar92;
               pfVar47[0x231] = fVar95;
               *(undefined8*)( pfVar47 + 0x1f8 ) = uVar6;
               *(undefined8*)( pfVar47 + 0x1fa ) = uVar10;
               uVar6 = *(undefined8*)( puVar57 + -0x10d8 );
               uVar10 = *(undefined8*)( puVar57 + -0x10d0 );
               pfVar47[0x20a] = fVar84 + fVar102;
               pfVar47[0x20b] = fVar85 + fVar93;
               pfVar47[0x20c] = fVar87 + fVar92;
               pfVar47[0x20d] = fVar88 + fVar95;
               *(undefined8*)( pfVar47 + 0x21c ) = uVar6;
               *(undefined8*)( pfVar47 + 0x21e ) = uVar10;
               pfVar47 = pfVar47 + 4;
            }
;
            uVar44 = *(uint*)( puVar57 + -0x1318 );
            pfVar27 = pfVar56;
            pfVar28 = pfVar47;
            do {
               fVar102 = pfVar27[100];
               fVar93 = pfVar27[0x65];
               pfVar51 = pfVar27 + 4;
               fVar92 = pfVar27[0x60];
               fVar95 = pfVar27[0x61];
               *(undefined8*)pfVar28 = *(undefined8*)pfVar27;
               *(ulong*)( pfVar28 + 0x12 ) = CONCAT44(pfVar27[0x41] + fVar93 + fVar95, pfVar27[0x40] + fVar102 + fVar92);
               *(ulong*)( pfVar28 + 0x24 ) = CONCAT44(pfVar27[0x25] + pfVar27[0x21], pfVar27[0x24] + pfVar27[0x20]);
               *(ulong*)( pfVar28 + 0x36 ) = CONCAT44(fVar93 + fVar95 + pfVar27[0x45], fVar102 + fVar92 + pfVar27[0x44]);
               pfVar27 = pfVar51;
               pfVar28 = pfVar28 + 0x48;
            }
 while ( pfVar51 != (float*)( puVar57 + -0x1158 ) );
            lVar49 = lVar49 + 0x240;
            pfVar71 = pfVar71 + 0x240;
            *(undefined8*)( pfVar47 + 0x1f8 ) = *(undefined8*)( puVar57 + -0x1158 );
            fVar102 = *(float*)( puVar57 + -0xfd8 );
            fVar93 = *(float*)( puVar57 + -0xfd4 );
            *(ulong*)( pfVar47 + 0x20a ) = CONCAT44(*(float*)( puVar57 + -0x1054 ) + fVar93, *(float*)( puVar57 + -0x1058 ) + fVar102);
            uVar6 = *(undefined8*)( puVar57 + -0x10d8 );
            pfVar47[0x22e] = fVar102;
            pfVar47[0x22f] = fVar93;
            *(undefined8*)( pfVar47 + 0x21c ) = uVar6;
         }
 while ( lVar49 != lVar40 * 0x240 );
      }

      *(long*)( puVar57 + -0x12a0 ) = lVar67;
      lVar49 = lVar40 * 4;
      puVar23 = *(undefined8**)( puVar57 + -0x1250 );
      puVar66 = *(undefined8**)( puVar57 + -0x1260 );
      for (lVar67 = 0x1e0; lVar67 != 0; lVar67 = lVar67 + -1) {
         *puVar66 = *puVar23;
         puVar23 = puVar23 + (ulong)bVar81 * -2 + 1;
         puVar66 = puVar66 + (ulong)bVar81 * -2 + 1;
      }

      pfVar71 = *(float**)( puVar57 + -0x1268 );
      pfVar47 = *(float**)( puVar57 + -0x1288 );
      pfVar27 = *(float**)( puVar57 + -0x1208 );
      *(long*)( puVar57 + -0x12e0 ) = (long)(int)( uVar44 * 0x20 ) * 4;
      pfVar31 = (float*)( *(long*)( puVar57 + -0x12b0 ) + 0xb90 + (long)(int)( ( uVar44 * 9 + -9 ) * 0x40 ) * 4 );
      pfVar56 = pfVar71 + lVar40 + -1;
      *(long*)( puVar57 + -0x12d0 ) = (long)(int)( uVar44 * 0x21 ) << 2;
      *(long*)( puVar57 + -0x12d8 ) = (long)(int)( uVar44 * 0x1f ) * 4;
      *(long*)( puVar57 + -0x12c8 ) = (long)(int)( uVar44 * 0x3f ) << 2;
      do {
         pfVar27[0x3bf] = pfVar47[0x120];
         pfVar27[0x3c0] = pfVar31[0x120];
         pfVar27[0x3c1] = *pfVar47;
         pfVar27[0x3c2] = *pfVar31;
         pfVar27[0x3ff] = pfVar47[0x121];
         pfVar27[0x400] = pfVar31[0x121];
         pfVar27[0x401] = pfVar47[1];
         pfVar27[0x402] = pfVar31[1];
         *(undefined8*)( puVar57 + -0x1320 ) = 0x103802;
         mp3d_synth_pair(pfVar56, uVar44, pfVar27);
         *(float**)( puVar57 + -0x12c0 ) = (float*)( *(long*)( puVar57 + -0x12e0 ) + (long)pfVar56 );
         lVar42 = 0x4c8;
         *(undefined8*)( puVar57 + -0x1320 ) = 0x10382b;
         mp3d_synth_pair((float*)( *(long*)( puVar57 + -0x12e0 ) + (long)pfVar56 ), uVar44, pfVar27 + 0x40);
         *(undefined8*)( puVar57 + -0x1320 ) = 0x10383a;
         pfVar28 = (float*)mp3d_synth_pair(pfVar71, uVar44, pfVar27 + -1);
         *(float**)( puVar57 + -0x12a8 ) = pfVar28;
         *(undefined8*)( puVar57 + -0x1320 ) = 0x103856;
         pfVar28 = (float*)mp3d_synth_pair(pfVar28, uVar44, pfVar27 + 0x3f);
         *(uint*)( puVar57 + -0x1290 ) = uVar44;
         lVar67 = *(long*)( puVar57 + -0x12c8 );
         lVar40 = *(long*)( puVar57 + -0x12d0 );
         lVar76 = *(long*)( puVar57 + -0x12d8 );
         lVar61 = 0x438;
         pfVar51 = (float*)&mp3d_synth(float*,float*,int,float*)::g_win;, lVar64 = lVar49);
         do {
            pfVar26 = pfVar51 + 0x10;
            pfVar28[0x3c0] = *(float*)( (long)pfVar47 + lVar42 );
            pfVar28[0x3c1] = *(float*)( (long)pfVar31 + lVar42 );
            pfVar28[0x3c2] = *(float*)( (long)pfVar47 + lVar42 + 4 );
            lVar13 = lVar42 + 4;
            lVar42 = lVar42 + 0x48;
            pfVar28[0x3c3] = *(float*)( (long)pfVar31 + lVar13 );
            pfVar28[0x400] = *(float*)( (long)pfVar47 + lVar61 + 4 );
            pfVar28[0x401] = *(float*)( (long)pfVar31 + lVar61 + 4 );
            pfVar28[0x382] = *(float*)( (long)pfVar47 + lVar61 );
            pfVar63 = (float*)( (long)pfVar31 + lVar61 );
            lVar61 = lVar61 + -0x48;
            pfVar28[899] = *pfVar63;
            fVar103 = pfVar51[0xd];
            fVar96 = pfVar51[0xe];
            fVar99 = *pfVar51;
            fVar97 = pfVar51[1];
            fVar82 = pfVar51[2];
            fVar104 = pfVar51[3];
            fVar102 = pfVar51[4];
            fVar93 = pfVar51[5];
            for (int i = 0; i < 4; i++) {
               *(float*)( puVar57 + ( 4*i + -4888 ) ) = fVar103;
            }

            fVar103 = pfVar51[6];
            fVar92 = pfVar51[7];
            fVar95 = pfVar51[8];
            fVar84 = pfVar51[9];
            fVar85 = pfVar51[10];
            fVar87 = pfVar51[0xb];
            fVar88 = pfVar51[0xc];
            for (int i = 0; i < 4; i++) {
               *(float*)( puVar57 + ( 4*i + -4872 ) ) = fVar96;
            }

            fVar90 = pfVar28[0x3c0];
            fVar91 = pfVar28[0x3c1];
            fVar94 = pfVar28[0x3c2];
            fVar83 = pfVar28[0x3c3];
            fVar86 = *pfVar28;
            fVar89 = pfVar28[1];
            fVar98 = pfVar28[2];
            fVar100 = pfVar28[3];
            fVar96 = pfVar51[0xf];
            fVar101 = *pfVar28;
            fVar105 = pfVar28[1];
            fVar106 = pfVar28[2];
            fVar107 = pfVar28[3];
            for (int i = 0; i < 4; i++) {
               *(float*)( puVar57 + ( 4*i + -4856 ) ) = fVar96;
            }

            fVar96 = ( ( fVar90 * fVar99 - fVar86 * fVar97 ) + ( pfVar28[0x40] * fVar104 - pfVar28[0x380] * fVar82 ) + ( pfVar28[0x340] * fVar102 - pfVar28[0x80] * fVar93 ) + ( pfVar28[0xc0] * fVar92 - pfVar28[0x300] * fVar103 ) + ( pfVar28[0x2c0] * fVar95 - pfVar28[0x100] * fVar84 ) + ( pfVar28[0x140] * fVar87 - pfVar28[0x280] * fVar85 ) + ( pfVar28[0x240] * fVar88 - *(float*)( puVar57 + -0x1318 ) * pfVar28[0x180] ) + ( *(float*)( puVar57 + -0x12f8 ) * pfVar28[0x1c0] - *(float*)( puVar57 + -0x1308 ) * pfVar28[0x200] ) ) * _LC23;
            fVar90 = ( ( fVar94 * fVar99 - fVar98 * fVar97 ) + ( pfVar28[0x42] * fVar104 - pfVar28[0x382] * fVar82 ) + ( pfVar28[0x342] * fVar102 - pfVar28[0x82] * fVar93 ) + ( pfVar28[0xc2] * fVar92 - pfVar28[0x302] * fVar103 ) + ( pfVar28[0x2c2] * fVar95 - pfVar28[0x102] * fVar84 ) + ( pfVar28[0x142] * fVar87 - pfVar28[0x282] * fVar85 ) + ( pfVar28[0x242] * fVar88 - *(float*)( puVar57 + -0x1310 ) * pfVar28[0x182] ) + ( *(float*)( puVar57 + -0x12f0 ) * pfVar28[0x1c2] - *(float*)( puVar57 + -0x1300 ) * pfVar28[0x202] ) ) * _UNK_001187b8;
            fVar94 = ( ( fVar83 * fVar99 - fVar100 * fVar97 ) + ( pfVar28[0x43] * fVar104 - pfVar28[899] * fVar82 ) + ( pfVar28[0x343] * fVar102 - pfVar28[0x83] * fVar93 ) + ( pfVar28[0xc3] * fVar92 - pfVar28[0x303] * fVar103 ) + ( pfVar28[0x2c3] * fVar95 - pfVar28[0x103] * fVar84 ) + ( pfVar28[0x143] * fVar87 - pfVar28[0x283] * fVar85 ) + ( pfVar28[0x243] * fVar88 - *(float*)( puVar57 + -0x130c ) * pfVar28[0x183] ) + ( *(float*)( puVar57 + -0x12ec ) * pfVar28[0x1c3] - *(float*)( puVar57 + -0x12fc ) * pfVar28[0x203] ) ) * _UNK_001187bc;
            fVar83 = ( fVar88 * pfVar28[0x180] + *(float*)( puVar57 + -0x1318 ) * pfVar28[0x240] + fVar85 * pfVar28[0x140] + fVar87 * pfVar28[0x280] + fVar95 * pfVar28[0x100] + fVar84 * pfVar28[0x2c0] + fVar103 * pfVar28[0xc0] + fVar92 * pfVar28[0x300] + fVar102 * pfVar28[0x80] + fVar93 * pfVar28[0x340] + pfVar28[0x40] * fVar82 + fVar104 * pfVar28[0x380] + fVar99 * fVar101 + fVar97 * pfVar28[0x3c0] + *(float*)( puVar57 + -0x1308 ) * pfVar28[0x1c0] + *(float*)( puVar57 + -0x12f8 ) * pfVar28[0x200] ) * _LC23;
            fVar86 = ( fVar88 * pfVar28[0x181] + *(float*)( puVar57 + -0x1314 ) * pfVar28[0x241] + fVar85 * pfVar28[0x141] + fVar87 * pfVar28[0x281] + fVar95 * pfVar28[0x101] + fVar84 * pfVar28[0x2c1] + fVar103 * pfVar28[0xc1] + fVar92 * pfVar28[0x301] + fVar102 * pfVar28[0x81] + fVar93 * pfVar28[0x341] + pfVar28[0x41] * fVar82 + fVar104 * pfVar28[0x381] + fVar99 * fVar105 + fVar97 * pfVar28[0x3c1] + *(float*)( puVar57 + -0x1304 ) * pfVar28[0x1c1] + *(float*)( puVar57 + -0x12f4 ) * pfVar28[0x201] ) * _UNK_001187b4;
            fVar98 = ( fVar88 * pfVar28[0x182] + *(float*)( puVar57 + -0x1310 ) * pfVar28[0x242] + fVar85 * pfVar28[0x142] + fVar87 * pfVar28[0x282] + fVar95 * pfVar28[0x102] + fVar84 * pfVar28[0x2c2] + fVar103 * pfVar28[0xc2] + fVar92 * pfVar28[0x302] + fVar102 * pfVar28[0x82] + fVar93 * pfVar28[0x342] + pfVar28[0x42] * fVar82 + fVar104 * pfVar28[0x382] + fVar99 * fVar106 + fVar97 * pfVar28[0x3c2] + *(float*)( puVar57 + -0x1300 ) * pfVar28[0x1c2] + *(float*)( puVar57 + -0x12f0 ) * pfVar28[0x202] ) * _UNK_001187b8;
            fVar100 = ( fVar88 * pfVar28[0x183] + *(float*)( puVar57 + -0x130c ) * pfVar28[0x243] + fVar85 * pfVar28[0x143] + fVar87 * pfVar28[0x283] + fVar95 * pfVar28[0x103] + fVar84 * pfVar28[0x2c3] + fVar103 * pfVar28[0xc3] + fVar92 * pfVar28[0x303] + fVar102 * pfVar28[0x83] + fVar93 * pfVar28[0x343] + pfVar28[0x43] * fVar82 + fVar104 * pfVar28[899] + fVar99 * fVar107 + fVar97 * pfVar28[0x3c3] + *(float*)( puVar57 + -0x12fc ) * pfVar28[0x1c3] + *(float*)( puVar57 + -0x12ec ) * pfVar28[0x203] ) * _UNK_001187bc;
            *(float*)( (long)pfVar56 + lVar64 ) = ( ( fVar91 * fVar99 - fVar89 * fVar97 ) + ( pfVar28[0x41] * fVar104 - pfVar28[0x381] * fVar82 ) + ( pfVar28[0x341] * fVar102 - pfVar28[0x81] * fVar93 ) + ( pfVar28[0xc1] * fVar92 - pfVar28[0x301] * fVar103 ) + ( pfVar28[0x2c1] * fVar95 - pfVar28[0x101] * fVar84 ) + ( pfVar28[0x141] * fVar87 - pfVar28[0x281] * fVar85 ) + ( pfVar28[0x241] * fVar88 - *(float*)( puVar57 + -0x1314 ) * pfVar28[0x181] ) + ( *(float*)( puVar57 + -0x12f4 ) * pfVar28[0x1c1] - *(float*)( puVar57 + -0x1304 ) * pfVar28[0x201] ) ) * _UNK_001187b4;
            *(float*)( (long)pfVar56 + lVar76 ) = fVar86;
            *(float*)( (long)pfVar71 + lVar64 ) = fVar96;
            lVar64 = lVar64 + lVar49;
            *(float*)( (long)pfVar71 + lVar76 ) = fVar83;
            lVar76 = lVar76 - lVar49;
            *(float*)( (long)pfVar56 + lVar40 ) = fVar94;
            *(float*)( (long)pfVar56 + lVar67 ) = fVar100;
            *(float*)( (long)pfVar71 + lVar40 ) = fVar90;
            lVar40 = lVar40 + lVar49;
            *(float*)( (long)pfVar71 + lVar67 ) = fVar98;
            lVar67 = lVar67 - lVar49;
            pfVar28 = pfVar28 + -4;
            pfVar51 = pfVar26;
         }
 while ( pfVar26 != (float*)&mp3d_DCT_II(float*,int), ::g_sec) );
         pfVar27 = pfVar27 + 0x80;
         pfVar47 = pfVar47 + 2;
         uVar44 = *(uint*)( puVar57 + -0x1290 );
         pfVar31 = pfVar31 + 2;
         pfVar56 = (float*)( *(long*)( puVar57 + -0x12c0 ) + *(long*)( puVar57 + -0x12e0 ) );
         pfVar71 = (float*)( *(long*)( puVar57 + -0x12a8 ) + *(long*)( puVar57 + -0x12e0 ) );
      }
 while ( pfVar27 != *(float**)( puVar57 + -0x11f8 ) );
      lVar67 = *(long*)( puVar57 + -0x12a0 );
      if (uVar44 == 1) {
         puVar52 = *(undefined4**)( puVar57 + -0x1220 );
         puVar65 = *(undefined4**)( puVar57 + -0x1250 );
         do {
            uVar20 = *puVar52;
            uVar7 = puVar52[2];
            uVar8 = puVar52[4];
            uVar9 = puVar52[6];
            puVar52 = puVar52 + 8;
            *puVar65 = uVar20;
            puVar65[4] = uVar8;
            puVar65[2] = uVar7;
            puVar65[6] = uVar9;
            puVar65 = puVar65 + 8;
         }
 while ( puVar52 != (undefined4*)( puVar57 + 0x2f68 ) );
      }
 else {
         puVar23 = *(undefined8**)( puVar57 + -0x1220 );
         puVar66 = *(undefined8**)( puVar57 + -0x1250 );
         *puVar66 = *puVar23;
         puVar66[0x1df] = *(undefined8*)( puVar57 + 0x2f60 );
         lVar49 = (long)puVar66 - (long)( ( ulong )(puVar66 + 1) & 0xfffffffffffffff8 );
         puVar23 = (undefined8*)( (long)puVar23 - lVar49 );
         puVar66 = (undefined8*)( ( ulong )(puVar66 + 1) & 0xfffffffffffffff8 );
         for (uVar39 = ( ulong )((int)lVar49 + 0xf00U >> 3); uVar39 != 0; uVar39 = uVar39 - 1) {
            *puVar66 = *puVar23;
            puVar23 = puVar23 + (ulong)bVar81 * -2 + 1;
            puVar66 = puVar66 + (ulong)bVar81 * -2 + 1;
         }

      }

      uVar44 = *(uint*)( *(long*)( puVar57 + -0x1280 ) + 8 );
      *(long*)( puVar57 + -0x1268 ) = *(long*)( puVar57 + -0x1268 ) + (long)(int)( uVar44 * 0x240 ) * 4;
      if (( ( *(byte*)( *(long*)( puVar57 + -0x1298 ) + 1 ) & 8 ) == 0 ) || ( *(int*)( puVar57 + -0x1274 ) = *(int*)( puVar57 + -0x1274 ) + 1 * (int*)( puVar57 + -0x1274 ) != 1 )) goto LAB_00103cc2;
      goto LAB_00102398;
      LAB_00103cc2:cVar58 = puVar57[-0x1215];
      uVar44 = *(uint*)( puVar57 + -0xfbc );
      uVar18 = *(int*)( puVar57 + -0xfc0 ) + 7U >> 3;
      LAB_00102ab5:uVar44 = ( uVar44 >> 3 ) - uVar18;
      if ((int)uVar44 < 0x200) {
         if (0 < (int)uVar44) {
            uVar39 = (ulong)uVar44;
            goto LAB_00102ad8;
         }

      }
 else {
         uVar18 = ( uVar44 - 0x1ff ) + uVar18;
         uVar39 = 0x1ff;
         uVar44 = 0x1ff;
         LAB_00102ad8:puVar23 = (undefined8*)( *(long*)( puVar57 + -0x1230 ) + (long)(int)uVar18 );
         uVar18 = (uint)uVar39;
         if (uVar18 < 8) {
            if (( uVar39 & 4 ) == 0) {
               if (( uVar18 != 0 ) && ( *(undefined1*)( *(long*)( puVar57 + -0x12b8 ) + 0x180c ) = *(undefined1*)puVar23(uVar39 & 2) != 0 )) {
                  *(undefined2*)( lVar67 + -2 + uVar39 ) = *(undefined2*)( (long)puVar23 + ( uVar39 - 2 ) );
               }

            }
 else {
               *(undefined4*)( *(long*)( puVar57 + -0x12b8 ) + 0x180c ) = *(undefined4*)puVar23;
               *(undefined4*)( lVar67 + -4 + uVar39 ) = *(undefined4*)( (long)puVar23 + ( uVar39 - 4 ) );
            }

         }
 else {
            *(undefined8*)( *(long*)( puVar57 + -0x12b8 ) + 0x180c ) = *puVar23;
            puVar66 = (undefined8*)( lVar67 + 8U & 0xfffffffffffffff8 );
            *(undefined8*)( lVar67 + -8 + uVar39 ) = *(undefined8*)( ( uVar39 - 8 ) + (long)puVar23 );
            lVar67 = lVar67 - (long)puVar66;
            puVar23 = (undefined8*)( (long)puVar23 - lVar67 );
            for (uVar39 = ( ulong )(uVar18 + (int)lVar67 >> 3); uVar39 != 0; uVar39 = uVar39 - 1) {
               *puVar66 = *puVar23;
               puVar23 = puVar23 + (ulong)bVar81 * -2 + 1;
               puVar66 = puVar66 + (ulong)bVar81 * -2 + 1;
            }

         }

      }

      lVar67 = *(long*)( puVar57 + -0x12b8 );
      *(uint*)( lVar67 + 0x1800 ) = uVar44;
      bVar81 = *(byte*)( lVar67 + 0x1809 );
      uVar20 = 0x180;
      if (( ( ~bVar81 & 6 ) != 0 ) && ( uVar20 = 0x480(bVar81 & 0xe) == 2 )) {
         uVar20 = 0x240;
      }

      if (cVar58 == '\0') {
         uVar20 = 0;
      }

      LAB_0010217b:if (*(long*)( puVar57 + 0x2ff0 ) != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         *(undefined**)( puVar57 + -0x1320 ) = &UNK_001045da;
         __stack_chk_fail();
      }

      return uVar20;
   }
 else {
      lVar5 = uVar1 * 2;
      __size = uVar1 << 5;
   }
 while ( (int)lVar9 < (int)uVar11 );
}
fVar8 = _LC3;fVar7 = _LC97;fVar4 = _LC91;lVar9 = (long)(int)uVar11;while ((int)uVar11 < (int)param_3) {
   sVar10 = 0x7fff;
   fVar12 = *(float*)( param_1 + lVar9 * 4 ) * fVar4;
   if (( fVar12 < __LC96 ) && ( sVar10 = fVar7 < fVar12 )) {
      sVar10 = (short)(int)( fVar12 + fVar8 ) - ( ( ushort )((uint)(int)( fVar12 + fVar8 ) >> 0xf) & 1 );
   }

   *(short*)( param_2 + lVar9 * 2 ) = sVar10;
   lVar9 = lVar9 + 1;
   uVar11 = (uint)lVar9;
}
;return;}undefined8 mp3dec_detect_cb(undefined8 *param_1, uchar *param_2, ulong param_3) {
   int iVar1;
   long lVar2;
   ulong uVar3;
   undefined8 uVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   int local_40;
   int local_3c;
   ulong local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 == (uchar*)0x0 ) || ( param_3 == 0xffffffffffffffff ) ) || ( ( param_1 != (undefined8*)0x0 && ( param_3 < 0x4000 ) ) )) {
      uVar4 = 0xffffffff;
      goto LAB_00104b23;
   }

   local_38 = param_3;
   if (( param_1 != (undefined8*)0x0 ) && ( ( iVar1 = ( *(code*)param_1[2] )(0, param_1[3]) ),iVar1 != 0 || ( local_38 = ( *(code*)*param_1 )(param_2, 10, param_1[1]) ),10 < local_38 )) {
      LAB_00104bc0:uVar4 = 0xfffffffd;
      goto LAB_00104b23;
   }

   uVar5 = local_38;
   if (local_38 < 10) {
      LAB_00104ba0:uVar4 = 0xfffffffc;
   }
 else {
      lVar2 = mp3dec_skip_id3v2(param_2, local_38);
      if (lVar2 == 0) {
         if (param_1 == (undefined8*)0x0) {
            mp3dec_skip_id3v1(param_2, &local_38);
            uVar5 = local_38;
            if (0x4000 < local_38) {
               local_38 = 0x4000;
               uVar5 = 0x4000;
            }

         }
 else {
            uVar3 = ( *(code*)*param_1 )(param_2 + 10, param_3 - 10, param_1[1]);
            if (param_3 - 10 < uVar3) goto LAB_00104bc0;
            local_38 = uVar5 + uVar3;
            uVar5 = local_38;
            if (local_38 < 0x4000) {
               mp3dec_skip_id3v1(param_2, &local_38);
               uVar5 = local_38 & 0xffffffff;
            }

         }

         mp3d_find_frame(param_2, (int)uVar5, &local_40, &local_3c);
         if (local_3c == 0) goto LAB_00104ba0;
      }

      uVar4 = 0;
   }

   LAB_00104b23:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
}
void mp3dec_detect_buf(undefined8 param_1, undefined8 param_2) {
   mp3dec_detect_cb(0, param_1, param_2);
   return;
}
int mp3dec_load_cb(long param_1, undefined8 *param_2, uchar *param_3, ulong param_4, undefined1 (*param_5)[16], code *param_6, undefined8 param_7) {
   byte bVar1;
   bool bVar2;
   undefined1 auVar3[16];
   int iVar4;
   uint uVar5;
   long lVar6;
   ulong uVar7;
   void *pvVar8;
   ulong uVar9;
   int iVar10;
   ulong uVar11;
   long lVar12;
   uchar *puVar13;
   size_t __size;
   long in_FS_OFFSET;
   ulong local_b0;
   ulong local_a8;
   int local_98;
   int local_94;
   ulong local_90;
   ulong local_80;
   uint local_78;
   int local_74;
   int local_70[2];
   ulong local_68;
   ulong local_60;
   undefined1 local_58[16];
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( ( param_4 == 0xffffffffffffffff || param_3 == (uchar*)0x0 ) || param_5 == (undefined1(*) [16])0x0 ) || ( param_1 == 0 ) ) || ( ( param_2 != (undefined8*)0x0 && ( param_4 < 0x4000 ) ) )) {
      local_94 = -1;
      goto LAB_00104cdc;
   }

   local_48 = 0;
   local_68 = 0;
   *param_5 = (undefined1[16])0x0;
   param_5[1] = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   if (param_2 != (undefined8*)0x0) {
      iVar4 = ( *(code*)param_2[2] )(0, param_2[3]);
      if (iVar4 == 0) {
         local_68 = ( *(code*)*param_2 )(param_3, 10, param_2[1]);
         if (local_68 < 0xb) {
            if (local_68 != 10) goto LAB_00104cd9;
            lVar6 = mp3dec_skip_id3v2(param_3, 10);
            if (lVar6 == 0) {
               uVar7 = ( *(code*)*param_2 )(param_3 + 10, param_4 - 10, param_2[1]);
               if (uVar7 <= param_4 - 10) {
                  local_68 = uVar7 + 10;
                  LAB_00104d50:local_90 = param_4;
                  if (local_68 < 0x4000) {
                     mp3dec_skip_id3v1(param_3, &local_68);
                  }

                  goto LAB_00104d66;
               }

            }
 else {
               iVar4 = ( *(code*)param_2[2] )(lVar6, param_2[3]);
               if (( iVar4 == 0 ) && ( local_68 = local_68 <= param_4 )) goto LAB_00104d50;
            }

         }

      }

      LAB_00105140:local_94 = -3;
      goto LAB_00104cdc;
   }

   uVar11 = param_4;
   local_60 = param_4;
   uVar7 = mp3dec_skip_id3v2(param_3, param_4);
   if (uVar7 != 0) {
      if (uVar11 < uVar7) {
         uVar7 = uVar11;
      }

      local_60 = uVar11 - uVar7;
      param_3 = param_3 + uVar7;
   }

   mp3dec_skip_id3v1(param_3, &local_60);
   local_90 = local_60;
   if (local_60 == 0) {
      LAB_00104cd9:local_94 = 0;
      goto LAB_00104cdc;
   }

   LAB_00104d66:bVar2 = false;
   lVar6 = 0;
   *(undefined1*)( param_1 + 0x1808 ) = 0;
   do {
      uVar7 = local_68;
      local_70[1] = 0;
      local_60 = local_60 & 0xffffffff00000000;
      if (param_2 == (undefined8*)0x0) {
         iVar4 = mp3d_find_frame(param_3, (int)local_90, local_70 + 1, (int*)&local_60);
         param_3 = param_3 + iVar4;
         local_90 = local_90 - (long)iVar4;
         puVar13 = param_3;
      }
 else {
         if (( bVar2 ) || ( uVar11 = 0x3fff < uVar11 )) {
            iVar4 = (int)lVar6;
            puVar13 = param_3 + lVar6;
         }
 else {
            memmove(param_3, param_3 + lVar6, uVar11);
            uVar7 = ( lVar6 + local_90 ) - uVar7;
            uVar9 = ( *(code*)*param_2 )(param_3 + uVar11, uVar7, param_2[1]);
            if (uVar7 < uVar9) goto LAB_00105140;
            local_68 = uVar11 + uVar9;
            puVar13 = param_3;
            if (uVar7 == uVar9) {
               iVar4 = 0;
               lVar6 = 0;
            }
 else {
               lVar6 = 0;
               mp3dec_skip_id3v1(param_3, &local_68);
               bVar2 = true;
               iVar4 = 0;
            }

         }

         iVar4 = mp3d_find_frame(puVar13, (int)local_68 - iVar4, local_70 + 1, (int*)&local_60);
         lVar6 = lVar6 + iVar4;
         puVar13 = param_3 + lVar6;
      }

      uVar7 = (ulong)(int)local_60;
      if (iVar4 == 0) {
         if ((int)local_60 == 0) goto LAB_00104cd9;
         break;
      }

   }
 while ( (int)local_60 == 0 );
   bVar1 = puVar13[1];
   local_58._0_4_ = (int)local_60;
   auVar3 = local_58;
   uVar5 = bVar1 >> 1 & 3;
   local_58._8_4_ = ( ( ~puVar13[3] & 0xc0 ) != 0 ) + 1;
   iVar10 = 4 - uVar5;
   local_58._12_4_ = ( *(uint*)( hdr_sample_rate_hz(unsigned_char_const*):: ) >> ( ( bVar1 & 8 ) == 0 ) ) >> ( ( bVar1 >> 4 ^ 1 ) & 1 );
   iVar4 = 0x180;
   local_48 = CONCAT44((uint)(byte)hdr_bitrate_kbps(unsigned_char_const * ::halfrate[( ulong )(puVar13[2] >> 4) + ( ulong )(( bVar1 & 8 ) != 0) * 0x2d + (long)(int)( uVar5 - 1 ) * 0xf] * 2, iVar10));
   local_58._0_8_ = auVar3._0_8_;
   if (( ( ~bVar1 & 6 ) != 0 ) && ( iVar4 = 0x480(bVar1 & 0xe) == 2 )) {
      iVar4 = 0x240;
   }

   uVar11 = ( ulong )(uint)(local_58._8_4_ * iVar4);
   local_94 = 0;
   if (iVar10 == 3) {
      local_94 = mp3dec_check_vbrtag(puVar13, (int)local_60, &local_78, &local_74, local_70);
      if (local_94 < 1) {
         if (local_94 != 0) {
            if (param_2 == (undefined8*)0x0) {
               local_90 = local_90 - uVar7;
               param_3 = param_3 + uVar7;
            }
 else {
               lVar6 = lVar6 + uVar7;
            }

         }

         uVar7 = (ulong)(int)local_58._0_4_;
         goto LAB_00104ef3;
      }

      local_70[0] = local_70[0] * local_58._8_4_;
      local_98 = local_74 * local_58._8_4_;
      uVar11 = local_78 * uVar11;
      uVar9 = uVar11 - (long)local_98;
      if (uVar11 < (ulong)(long)local_98) {
         uVar9 = uVar11;
      }

      local_80 = uVar9;
      if (( 0 < local_70[0] ) && ( local_80 = uVar9 - (long)local_70[0] ),uVar9 < (ulong)(long)local_70[0]) {
         local_80 = uVar9;
      }

      if (local_80 == 0) goto LAB_00104cd9;
      uVar11 = local_80;
      if (param_2 == (undefined8*)0x0) {
         local_90 = local_90 - uVar7;
         param_3 = param_3 + uVar7;
      }
 else {
         lVar6 = lVar6 + uVar7;
      }

   }
 else {
      LAB_00104ef3:local_98 = 0;
      local_80 = 0;
      uVar11 = ( local_90 / uVar7 ) * uVar11;
   }

   __size = uVar11 * 4 + 0x2400;
   pvVar8 = malloc(__size);
   *(void**)*param_5 = pvVar8;
   if (pvVar8 == (void*)0x0) {
      LAB_001054b2:local_94 = -2;
   }
 else {
      uVar7 = *(ulong*)( *param_5 + 8 );
      local_b0 = 0;
      *(undefined8*)param_5[1] = local_58._8_8_;
      local_a8 = 0;
      *(int*)( param_5[1] + 8 ) = (int)local_48;
      do {
      if (__size + uVar7 * -4 < 0x2400) {
        __size = __size * 2;
        pvVar8 = realloc(*(void **)*param_5,__size);
        if (pvVar8 == (void *)0x0) goto LAB_001054b2;
        *(void **)*param_5 = pvVar8;
        if (param_2 != (undefined8 *)0x0) goto LAB_00104f91;
LAB_001050cf:
        uVar7 = 0x7fffffff;
        if (local_90 < 0x80000000) {
          uVar7 = local_90;
        }
        iVar4 = mp3dec_decode_frame(param_1,param_3,uVar7,
                                    *(long *)*param_5 + *(long *)(*param_5 + 8) * 4,local_58);
        param_3 = param_3 + (int)local_58._0_4_;
        local_90 = local_90 - (long)(int)local_58._0_4_;
      }
      else {
        if (param_2 == (undefined8 *)0x0) goto LAB_001050cf;
LAB_00104f91:
        uVar7 = local_68;
        if ((bVar2) || (uVar11 = local_68 - lVar6, 0x3fff < uVar11)) {
          iVar4 = (int)lVar6;
          puVar13 = param_3 + lVar6;
        }
        else {
          memmove(param_3,param_3 + lVar6,uVar11);
          lVar12 = (lVar6 + local_90) - uVar7;
          lVar6 = (*(code *)*param_2)(param_3 + uVar11,lVar12,param_2[1]);
          puVar13 = param_3;
          if (lVar12 == lVar6) {
            local_68 = uVar11 + lVar12;
            iVar4 = 0;
            lVar6 = 0;
          }
          else {
            local_68 = lVar6 + uVar11;
            lVar6 = 0;
            mp3dec_skip_id3v1(param_3,&local_68);
            iVar4 = 0;
            bVar2 = true;
          }
        }
        iVar4 = mp3dec_decode_frame(param_1,puVar13,(int)local_68 - iVar4,
                                    *(long *)*param_5 + *(long *)(*param_5 + 8) * 4,local_58);
        lVar6 = lVar6 + (int)local_58._0_4_;
      }
      if (iVar4 != 0) {
        if ((*(int *)(param_5[1] + 4) == local_58._12_4_) &&
           (*(int *)(param_5[1] + 8) == (int)local_48)) {
          if ((*(int *)param_5[1] == 0) || (*(int *)param_5[1] == local_58._8_4_)) {
            iVar4 = iVar4 * local_58._8_4_;
            if (local_98 == 0) {
              lVar12 = (long)iVar4;
            }
            else {
              iVar10 = local_98;
              if (iVar4 < local_98) {
                iVar10 = iVar4;
              }
              local_98 = local_98 - iVar10;
              lVar12 = (long)(iVar4 - iVar10);
              memmove(*(void **)*param_5,(void *)((long)*(void **)*param_5 + (long)iVar10 * 4),
                      lVar12 * 4);
            }
            local_b0 = local_b0 + 1;
            uVar7 = *(long *)(*param_5 + 8) + lVar12;
            local_a8 = local_a8 + (long)local_48._4_4_;
            *(ulong *)(*param_5 + 8) = uVar7;
            if (param_6 == (code *)0x0) goto LAB_00105086;
            local_94 = (*param_6)(param_7,param_4,param_4 - local_90,local_58);
            if (local_94 == 0) goto LAB_00105082;
            uVar7 = *(ulong *)(*param_5 + 8);
            break;
          }
        }
        uVar7 = *(ulong *)(*param_5 + 8);
        local_94 = -5;
        break;
      }
LAB_00105082:
      uVar7 = *(ulong *)(*param_5 + 8);
LAB_00105086:
    } while (local_58._0_4_ != 0);
    if ((local_80 != 0) && (local_80 < uVar7)) {
      *(ulong *)(*param_5 + 8) = local_80;
      uVar7 = local_80;
    }
    if (uVar7 * 4 != __size) {
      pvVar8 = realloc(*(void **)*param_5,uVar7 * 4);
      if ((pvVar8 == (void *)0x0) && (*(long *)(*param_5 + 8) != 0)) goto LAB_001054b2;
      *(void **)*param_5 = pvVar8;
    }
    if (local_b0 != 0) {
      *(int *)(param_5[1] + 0xc) = (int)(local_a8 / local_b0);
    }
  }
LAB_00104cdc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_94;
   }

   void mp3dec_load_buf(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6) {
      mp3dec_load_cb(param_1, 0, param_2, param_3, param_4, param_5, param_6);
      return;
   }

   undefined8 mp3dec_iterate_buf(uchar *param_1, ulong param_2, code *param_3, undefined8 param_4) {
      byte bVar1;
      undefined1 auVar2[16];
      int iVar3;
      ulong uVar4;
      undefined8 uVar5;
      uint uVar6;
      uchar *puVar7;
      long lVar8;
      long in_FS_OFFSET;
      int local_60;
      int local_5c;
      undefined1 local_58[16];
      undefined8 local_48;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( param_1 == (uchar*)0x0 || param_2 == 0xffffffffffffffff ) || ( param_3 == (code*)0x0 )) {
         uVar5 = 0xffffffff;
      }
 else {
         local_58._0_8_ = param_2;
         uVar4 = mp3dec_skip_id3v2(param_1, param_2);
         puVar7 = param_1;
         if (uVar4 != 0) {
            if (param_2 < uVar4) {
               uVar4 = param_2;
            }

            puVar7 = param_1 + uVar4;
            local_58._0_8_ = param_2 - uVar4;
         }

         mp3dec_skip_id3v1(puVar7, (ulong*)local_58);
         uVar4 = local_58._0_8_;
         if (local_58._0_8_ != 0) {
            local_48 = 0;
            local_58 = (undefined1[16])0x0;
            LAB_001055f0:local_60 = 0;
            iVar3 = mp3d_find_frame(puVar7, (int)uVar4, &local_60, &local_5c);
            lVar8 = (long)local_5c;
            puVar7 = puVar7 + iVar3;
            uVar4 = uVar4 - (long)iVar3;
            if (iVar3 != 0) goto code_r0x00105623;
            if (local_5c != 0) goto LAB_00105628;
         }

         uVar5 = 0;
      }

      LAB_001055a0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar5;
      code_r0x00105623:if (local_5c != 0) {
         LAB_00105628:local_58._0_4_ = local_5c;
         auVar2 = local_58;
         bVar1 = puVar7[1];
         uVar6 = bVar1 >> 1 & 3;
         local_58._12_4_ = ( *(uint*)( hdr_sample_rate_hz(unsigned_char_const*):: ) >> ( ( bVar1 & 8 ) == 0 ) ) >> ( ( bVar1 >> 4 ^ 1 ) & 1 );
         local_58._8_4_ = ( ( ~puVar7[3] & 0xc0 ) != 0 ) + 1;
         local_48 = CONCAT44((uint)(byte)hdr_bitrate_kbps(unsigned_char_const * ::halfrate[( ulong )(puVar7[2] >> 4) + ( ulong )(( bVar1 & 8 ) != 0) * 0x2d + (long)(int)( uVar6 - 1 ) * 0xf] * 2, 4 - uVar6));
         local_58._0_8_ = auVar2._0_8_;
         uVar5 = ( *param_3 )(param_4, puVar7, local_5c, local_60, uVar4, (long)puVar7 - (long)param_1, local_58);
         if ((int)uVar5 == 0) {
            puVar7 = puVar7 + lVar8;
            uVar4 = uVar4 - lVar8;
            goto LAB_001055f0;
         }

         goto LAB_001055a0;
      }

      goto LAB_001055f0;
   }

   undefined8 mp3dec_iterate_cb(undefined8 *param_1, uchar *param_2, ulong param_3, code *param_4, undefined8 param_5) {
      byte bVar1;
      bool bVar2;
      undefined1 auVar3[16];
      int iVar4;
      int iVar5;
      ulong uVar6;
      undefined8 uVar7;
      uint uVar8;
      ulong __n;
      long lVar9;
      uchar *puVar10;
      long lVar11;
      ulong uVar12;
      long in_FS_OFFSET;
      int local_68;
      int local_64;
      ulong local_60;
      undefined1 local_58[16];
      undefined8 local_48;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( ( param_1 == (undefined8*)0x0 ) || ( param_2 == (uchar*)0x0 ) ) || ( 0xffffffffffffbffe < param_3 - 0x4000 ) ) || ( param_4 == (code*)0x0 )) {
         uVar7 = 0xffffffff;
         goto LAB_00105a4b;
      }

      local_60 = ( *(code*)*param_1 )(param_2, 10, param_1[1]);
      local_48 = 0;
      local_58 = (undefined1[16])0x0;
      if (10 < local_60) goto LAB_00105ad1;
      if (local_60 != 10) {
         LAB_00105a49:uVar7 = 0;
         goto LAB_00105a4b;
      }

      uVar6 = mp3dec_skip_id3v2(param_2, 10);
      if (uVar6 == 0) {
         uVar6 = ( *(code*)*param_1 )(param_2 + 10, param_3 - 10, param_1[1]);
         if (uVar6 <= param_3 - 10) {
            local_60 = uVar6 + 10;
            goto joined_r0x00105ab4;
         }

      }
 else {
         iVar4 = ( *(code*)param_1[2] )(uVar6, param_1[3]);
         if (( iVar4 == 0 ) && ( local_60 = local_60 <= param_3 )) {
            joined_r0x00105ab4:if (local_60 < 0x4000) {
               mp3dec_skip_id3v1(param_2, &local_60);
            }

            bVar2 = false;
            lVar11 = 0;
            uVar12 = local_60;
            LAB_00105870:while (true) {
               local_68 = 0;
               iVar5 = mp3d_find_frame(param_2 + lVar11, (int)uVar12 - (int)lVar11, &local_68, &local_64);
               iVar4 = local_64;
               if (iVar5 == 0) break;
               if (local_64 != 0) goto LAB_001058a9;
               lVar11 = lVar11 + iVar5;
            }
;
            if (local_64 == 0) goto LAB_00105a49;
            LAB_001058a9:local_58._0_4_ = local_64;
            auVar3 = local_58;
            puVar10 = param_2 + iVar5 + lVar11;
            bVar1 = puVar10[1];
            uVar8 = bVar1 >> 1 & 3;
            local_58._12_4_ = ( *(uint*)( hdr_sample_rate_hz(unsigned_char_const*):: ) >> ( ( bVar1 & 8 ) == 0 ) ) >> ( ( bVar1 >> 4 ^ 1 ) & 1 );
            local_58._8_4_ = ( ( ~puVar10[3] & 0xc0 ) != 0 ) + 1;
            lVar9 = uVar6 + (long)iVar5;
            local_48 = CONCAT44((uint)(byte)hdr_bitrate_kbps(unsigned_char_const * ::halfrate[( ulong )(puVar10[2] >> 4) + ( ulong )(( bVar1 & 8 ) != 0) * 0x2d + (long)(int)( uVar8 - 1 ) * 0xf] * 2, 4 - uVar8));
            local_58._0_8_ = auVar3._0_8_;
            uVar7 = ( *param_4 )(param_5, puVar10, local_64, local_68, uVar12 - lVar11, lVar9, local_58);
            if ((int)uVar7 == 0) {
               uVar6 = lVar9 + iVar4;
               lVar11 = lVar11 + ( iVar5 + iVar4 );
               if (( !bVar2 ) && ( __n = __n < 0x4000 )) {
                  memmove(param_2, param_2 + lVar11, __n);
                  uVar12 = lVar11 + ( param_3 - uVar12 );
                  uVar6 = ( *(code*)*param_1 )(param_2 + __n, uVar12, param_1[1]);
                  if (uVar12 < uVar6) goto LAB_00105ad1;
                  local_60 = __n + uVar6;
                  if (uVar12 != uVar6) {
                     mp3dec_skip_id3v1(param_2, &local_60);
                     bVar2 = true;
                  }

                  lVar11 = 0;
                  uVar12 = local_60;
               }

               goto LAB_00105870;
            }

            goto LAB_00105a4b;
         }

      }

      LAB_00105ad1:uVar7 = 0xfffffffd;
      LAB_00105a4b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return uVar7;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   undefined8 mp3dec_ex_open_buf(void *param_1, long param_2, long param_3, uint param_4) {
      undefined8 uVar1;
      if (param_1 != (void*)0x0) {
         if (( ( param_2 == 0 ) || ( param_3 == -1 ) ) || ( 3 < param_4 )) {
            uVar1 = 0xffffffff;
         }
 else {
            memset(param_1, 0, 0x3ec0);
            *(long*)( (long)param_1 + 0x1a10 ) = param_2;
            *(long*)( (long)param_1 + 0x1a18 ) = param_3;
            *(uint*)( (long)param_1 + 0x3e9c ) = param_4;
            uVar1 = mp3dec_iterate_buf(param_2, param_3, mp3dec_load_index, param_1);
            if (( (int)uVar1 + 4U & 0xfffffffb ) == 0) {
               *(undefined1*)( (long)param_1 + 0x1808 ) = 0;
               *(undefined4*)( (long)param_1 + 0x3eac ) = 0;
               *(uint*)( (long)param_1 + 0x3e9c ) = *(uint*)( (long)param_1 + 0x3e9c ) & 0xfffffffd;
               *(uint*)( (long)param_1 + 0x3ea4 ) = ( uint )(( param_4 & 2 ) == 0 && *(int*)( (long)param_1 + 0x3ea0 ) == 0);
               uVar1 = 0;
            }

         }

         return uVar1;
      }

      return 0xffffffff;
   }

   /* AudioStreamMP3::instantiate_playback() */
   void AudioStreamMP3::instantiate_playback(void) {
      Object *pOVar1;
      char cVar2;
      int iVar3;
      AudioStreamPlayback *this;
      long lVar4;
      ulong uVar5;
      Object *pOVar6;
      AudioStreamPlayback *pAVar7;
      Object *in_RSI;
      long *in_RDI;
      undefined8 *puVar8;
      byte bVar9;
      bVar9 = 0;
      if (*(int*)( in_RSI + 0x348 ) == 0) {
         _err_print_error("instantiate_playback", "modules/minimp3/audio_stream_mp3.cpp", 0xbf, "Condition \"data.is_empty()\" is true. Returning: mp3s", "This AudioStreamMP3 does not have an audio file assigned to it. AudioStreamMP3 should not be created from the inspector or with `.new()`. Instead, load an audio file.", 0, 0);
         *in_RDI = 0;
         return;
      }

      pAVar7 = (AudioStreamPlayback*)0x0;
      this(AudioStreamPlayback * operator_new(0x4dc0, ""));
      AudioStreamPlayback::AudioStreamPlayback(this);
      *(undefined**)this = &AudioStreamPlayback::typeinfo;
      *(undefined8*)( this + 0x270 ) = 0;
      *(undefined8*)( this + 0x688 ) = 0;
      puVar8 = (undefined8*)( ( ulong )(this + 0x278) & 0xfffffffffffffff8 );
      for (uVar5 = ( ulong )(( (int)this - (int)(undefined8*)( ( ulong )(this + 0x278) & 0xfffffffffffffff8 ) ) + 0x690U >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
         *puVar8 = 0;
         puVar8 = puVar8 + (ulong)bVar9 * -2 + 1;
      }

      *(undefined4*)( this + 0x690 ) = 0xffffffff;
      *(undefined8*)( this + 0x698 ) = 0;
      StringName::StringName((StringName*)( this + 0x6a0 ), "_mix_resampled", false);
      this[0x6a8] = (AudioStreamPlayback)0x0;
      *(undefined8*)( this + 0x6b0 ) = 0;
      StringName::StringName((StringName*)( this + 0x6b8 ), "_get_stream_sampling_rate", false);
      *(undefined***)this = &PTR__initialize_classv_00115f00;
      this[0x6c0] = (AudioStreamPlayback)0x0;
      *(undefined8*)( this + 0x6c8 ) = 0;
      *(undefined8*)( this + 0x698 ) = 0;
      *(undefined8*)( this + 0x6d0 ) = 0;
      *(undefined8*)( this + 0xec8 ) = 0;
      puVar8 = (undefined8*)( ( ulong )(this + 0x6d8) & 0xfffffffffffffff8 );
      for (uVar5 = ( ulong )(( (int)this - (int)(undefined8*)( ( ulong )(this + 0x6d8) & 0xfffffffffffffff8 ) ) + 0xed0U >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
         *puVar8 = 0;
         puVar8 = puVar8 + (ulong)bVar9 * -2 + 1;
      }

      *(undefined4*)( this + 0xed0 ) = 0x100;
      *(undefined2*)( this + 0xed4 ) = 0;
      memset(this + 0xed8, 0, 0x3ec0);
      this[0x4d9c] = (AudioStreamPlayback)0x0;
      *(undefined4*)( this + 0x4d98 ) = 0;
      *(undefined4*)( this + 0x4da0 ) = 0;
      *(undefined8*)( this + 0x4da8 ) = 0;
      this[0x4db0] = (AudioStreamPlayback)0x0;
      *(undefined8*)( this + 0x4db8 ) = 0;
      postinitialize_handler((Object*)this);
      cVar2 = RefCounted::init_ref();
      if (cVar2 != '\0') {
         cVar2 = RefCounted::reference();
         if (cVar2 != '\0') {
            pAVar7 = this;
         }

         cVar2 = RefCounted::unreference();
         if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler((Object*)this) ),cVar2 != '\0') {
            ( **(code**)( *(long*)this + 0x140 ) )(this);
            Memory::free_static(this, false);
         }

      }

      cVar2 = RefCounted::init_ref();
      pOVar1 = *(Object**)( (Object*)pAVar7 + 0x4da8 );
      if (cVar2 == '\0') {
         if (pOVar1 == (Object*)0x0) goto LAB_00105d8a;
         *(undefined8*)( (Object*)pAVar7 + 0x4da8 ) = 0;
         cVar2 = RefCounted::unreference();
      }
 else {
         pOVar6 = pOVar1;
         if (in_RSI != pOVar1) {
            *(Object**)( (Object*)pAVar7 + 0x4da8 ) = in_RSI;
            cVar2 = RefCounted::reference();
            if (cVar2 == '\0') {
               *(undefined8*)( (Object*)pAVar7 + 0x4da8 ) = 0;
            }

            pOVar6 = in_RSI;
            if (( ( pOVar1 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar1 + 0x140 ))(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

      cVar2 = RefCounted::unreference();
      pOVar1 = pOVar6;
   }

   if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
      ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
      Memory::free_static(pOVar1, false);
   }

   LAB_00105d8a:iVar3 = mp3dec_ex_open_buf((Object*)pAVar7 + 0xed8, *(undefined8*)( in_RSI + 0x350 ), *(undefined4*)( in_RSI + 0x358 ), 1);
   ( (Object*)pAVar7 )[0x4d9c] = (Object)0x0;
   *(undefined4*)( (Object*)pAVar7 + 0x4d98 ) = 0;
   *(undefined4*)( (Object*)pAVar7 + 0x4da0 ) = 0;
   if (iVar3 == 0) {
      *in_RDI = 0;
      lVar4 = __dynamic_cast(pAVar7, &Object::typeinfo, &AudioStreamPlayback::typeinfo, 0);
      if (lVar4 != 0) {
         *in_RDI = lVar4;
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *in_RDI = 0;
         }

      }

   }
 else {
      _err_print_error("instantiate_playback", "modules/minimp3/audio_stream_mp3.cpp", 0xce, "Condition \"errorcode\" is true. Returning: Ref<AudioStreamPlaybackMP3>()", 0, 0);
      *in_RDI = 0;
   }

   cVar2 = RefCounted::unreference();
   if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler((Object*)pAVar7) ),cVar2 != '\0') {
      ( **(code**)( *(long*)pAVar7 + 0x140 ) )(pAVar7);
      Memory::free_static(pAVar7, false);
      return;
   }

   return;
}
undefined8 mp3dec_ex_seek(long param_1, ulong param_2) {
   int iVar1;
   int iVar2;
   int iVar3;
   long *plVar4;
   long lVar5;
   undefined8 uVar6;
   byte bVar7;
   ulong uVar8;
   long *plVar9;
   ulong uVar10;
   ulong uVar11;
   ulong uVar12;
   ulong uVar13;
   long lVar14;
   uchar *puVar15;
   long in_FS_OFFSET;
   uchar *local_d8;
   int local_d0;
   int local_cc;
   L3_gr_info_t local_c8[136];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0) {
      uVar6 = 0xffffffff;
      goto LAB_00106213;
   }

   lVar5 = *(long*)( param_1 + 0x1a20 );
   if (( *(byte*)( param_1 + 0x3e9c ) & 1 ) != 0) {
      *(ulong*)( param_1 + 0x1a58 ) = param_2;
      param_2 = (long)*(int*)( param_1 + 0x3eb8 ) + param_2;
      if (param_2 == 0) {
         LAB_001061a8:*(undefined4*)( param_1 + 0x3eb4 ) = 0;
         *(undefined8*)( param_1 + 0x1a40 ) = *(undefined8*)( param_1 + 0x1a60 );
         goto LAB_001061c7;
      }

      if (*(int*)( param_1 + 0x3ea4 ) != 0) {
         plVar4 = *(long**)( param_1 + 0x1a28 );
         LAB_00106047:if (plVar4 != (long*)0x0) {
            uVar12 = *(ulong*)( param_1 + 0x1a30 );
            uVar8 = 0;
            uVar11 = uVar12;
            uVar13 = 0;
            do {
               while (true) {
                  uVar10 = uVar11 + uVar8 >> 1;
                  if (param_2 <= (ulong)plVar4[uVar10 * 2]) break;
                  uVar8 = uVar10 + 1;
                  if (( uVar12 == uVar8 ) || ( uVar13 = uVar11 < uVar8 )) goto LAB_001060a1;
               }
;
            }
 while ( ( param_2 != plVar4[uVar10 * 2] ) && ( uVar11 = uVar10 - 1 ),uVar10 = uVar13,uVar8 <= uVar11 );
            LAB_001060a1:if (uVar10 != 0) {
               uVar11 = 2;
               if (uVar10 < 3) {
                  uVar11 = uVar10;
               }

               uVar10 = uVar10 - uVar11;
               if (*(int*)( param_1 + 0x1a80 ) != 3) {
                  uVar11 = uVar10 + 1;
                  plVar9 = plVar4 + uVar10 * 2;
                  goto LAB_001060b2;
               }

               iVar1 = 0x1ff;
               uVar11 = uVar10;
               if (uVar10 != 0) {
                  do {
                     puVar15 = *(uchar**)( param_1 + 0x1a10 );
                     if (lVar5 == 0) {
                        puVar15 = puVar15 + plVar4[uVar11 * 2 + -1];
                        iVar3 = hdr_frame_bytes(puVar15, *(int*)( param_1 + 0x3ea8 ));
                        bVar7 = puVar15[1];
                        iVar2 = iVar3;
                        if (( puVar15[2] & 2 ) != 0) {
                           iVar2 = iVar3 + 1;
                           if (( ~bVar7 & 6 ) == 0) {
                              iVar2 = iVar3 + 4;
                           }

                        }

                        local_d8 = puVar15 + 4;
                        local_cc = iVar2 * 8 + -0x20;
                     }
 else {
                        iVar2 = ( **(code**)( lVar5 + 0x10 ) )(plVar4[uVar11 * 2 + -1], *(undefined8*)( lVar5 + 0x18 ));
                        if (( iVar2 != 0 ) || ( lVar5 = ( *(code*)**(undefined8**)( param_1 + 0x1a20 ) )(puVar15, 4, ( *(undefined8**)( param_1 + 0x1a20 ) )[1]) ),lVar5 != 4) goto LAB_001065b0;
                        iVar3 = hdr_frame_bytes(puVar15, *(int*)( param_1 + 0x3ea8 ));
                        iVar2 = iVar3;
                        if (( puVar15[2] & 2 ) != 0) {
                           iVar2 = iVar3 + 1;
                           if (( ~puVar15[1] & 6 ) == 0) {
                              iVar2 = iVar3 + 4;
                           }

                        }

                        iVar2 = iVar2 + -4;
                        lVar5 = ( *(code*)**(undefined8**)( param_1 + 0x1a20 ) )(puVar15 + 4, (long)iVar2, ( *(undefined8**)( param_1 + 0x1a20 ) )[1]);
                        if (iVar2 != lVar5) goto LAB_001065b0;
                        bVar7 = puVar15[1];
                        local_cc = iVar2 * 8;
                        local_d8 = puVar15 + 4;
                     }

                     local_d0 = 0;
                     if (( bVar7 & 1 ) == 0) {
                        get_bits((bs_t*)&local_d8, 0x10);
                     }

                     uVar10 = uVar11 - 1;
                     iVar2 = L3_read_side_info((bs_t*)&local_d8, local_c8, puVar15);
                     if (iVar2 < 0) {
                        LAB_00106510:plVar4 = *(long**)( param_1 + 0x1a28 );
                        uVar12 = *(ulong*)( param_1 + 0x1a30 );
                        lVar5 = *(long*)( param_1 + 0x1a20 );
                        plVar9 = plVar4 + uVar10 * 2;
                        goto LAB_001060b2;
                     }

                     iVar3 = local_cc - local_d0;
                     iVar2 = iVar3 + 7;
                     if (-1 < iVar3) {
                        iVar2 = iVar3;
                     }

                     if (iVar1 <= iVar2 >> 3) goto LAB_00106510;
                     iVar1 = iVar1 - ( iVar2 >> 3 );
                     plVar4 = *(long**)( param_1 + 0x1a28 );
                     if (uVar10 == 0) goto LAB_001065c4;
                     lVar5 = *(long*)( param_1 + 0x1a20 );
                     uVar11 = uVar10;
                  }
 while ( true );
               }

            }

            uVar11 = 1;
            plVar9 = plVar4;
            goto LAB_001060b2;
         }

         goto LAB_001061a8;
      }

      *(undefined4*)( param_1 + 0x3ea4 ) = 1;
      *(undefined8*)( param_1 + 0x1a48 ) = 0;
      *(undefined4*)( param_1 + 0x3eac ) = 0;
      lVar14 = *(long*)( param_1 + 0x1a60 );
      if (lVar5 == 0) {
         uVar6 = mp3dec_iterate_buf(lVar14 + *(long*)( param_1 + 0x1a10 ), *(long*)( param_1 + 0x1a18 ) - lVar14, mp3dec_load_index);
         iVar1 = (int)uVar6;
         joined_r0x001063ad:if (( iVar1 + 4U & 0xfffffffb ) != 0) goto LAB_00106213;
         plVar4 = *(long**)( param_1 + 0x1a28 );
         uVar11 = 0;
         plVar9 = plVar4 + 1;
         if (*(long*)( param_1 + 0x1a30 ) != 0) {
            do {
               uVar11 = uVar11 + 1;
               *plVar9 = *plVar9 + *(long*)( param_1 + 0x1a60 );
               plVar9 = plVar9 + 2;
            }
 while ( uVar11 < *(ulong*)( param_1 + 0x1a30 ) );
         }

         lVar5 = *(long*)( param_1 + 0x1a20 );
         *(undefined8*)( param_1 + 0x1a48 ) = *(undefined8*)( param_1 + 0x1a50 );
         goto LAB_00106047;
      }

      iVar1 = ( **(code**)( lVar5 + 0x10 ) )(lVar14, *(undefined8*)( lVar5 + 0x18 ));
      if (iVar1 == 0) {
         uVar6 = mp3dec_iterate_cb(*(undefined8*)( param_1 + 0x1a20 ), *(undefined8*)( param_1 + 0x1a10 ), *(undefined8*)( param_1 + 0x1a18 ), mp3dec_load_index, param_1);
         iVar1 = (int)uVar6;
         goto joined_r0x001063ad;
      }

      goto LAB_001065b0;
   }

   if (lVar5 != 0) {
      *(ulong*)( param_1 + 0x1a40 ) = param_2;
      *(undefined8*)( param_1 + 0x1a58 ) = 0;
      goto LAB_001061cc;
   }

   *(undefined8*)( param_1 + 0x1a58 ) = 0;
   uVar11 = *(ulong*)( param_1 + 0x1a18 );
   if (param_2 < *(ulong*)( param_1 + 0x1a18 )) {
      uVar11 = param_2;
   }

   *(ulong*)( param_1 + 0x1a40 ) = uVar11;
   goto LAB_001061e3;
   LAB_001065c4:uVar12 = *(ulong*)( param_1 + 0x1a30 );
   lVar5 = *(long*)( param_1 + 0x1a20 );
   uVar11 = 1;
   plVar9 = plVar4;
   LAB_001060b2:*(long*)( param_1 + 0x1a40 ) = plVar9[1];
   lVar14 = *plVar9;
   *(int*)( param_1 + 0x3eb4 ) = (int)param_2 - (int)lVar14;
   if (uVar11 < uVar12) {
      while (( lVar14 == 0 && ( plVar4[uVar11 * 2] == 0 ) )) {
         lVar14 = *(long*)( param_1 + 0x1a10 );
         if (lVar5 == 0) {
            lVar14 = lVar14 + plVar4[uVar10 * 2 + 1];
         }
 else {
            iVar1 = ( **(code**)( lVar5 + 0x10 ) )(plVar4[uVar10 * 2 + 1], *(undefined8*)( lVar5 + 0x18 ));
            if (( iVar1 != 0 ) || ( lVar5 = ( *(code*)**(undefined8**)( param_1 + 0x1a20 ) )(lVar14, 4, ( *(undefined8**)( param_1 + 0x1a20 ) )[1]) ),lVar5 != 4) goto LAB_001065b0;
            lVar5 = *(long*)( param_1 + 0x1a20 );
         }

         iVar1 = 0x180;
         if (( ( ~*(byte *)(lVar14 + 1) & 6 ) != 0 ) && ( iVar1 = 0x480(*(byte*)( lVar14 + 1 ) & 0xe) == 2 )) {
            iVar1 = 0x240;
         }

         *(int*)( param_1 + 0x3eb4 ) = *(int*)( param_1 + 0x3eb4 ) + iVar1 * *(int*)( param_1 + 0x1a78 );
         if (*(ulong*)( param_1 + 0x1a30 ) <= uVar11 + 1) break;
         plVar4 = *(long**)( param_1 + 0x1a28 );
         lVar14 = plVar4[uVar11 * 2];
         uVar10 = uVar11;
         uVar11 = uVar11 + 1;
      }
;
   }

   LAB_001061c7:if (lVar5 != 0) {
      LAB_001061cc:iVar1 = ( **(code**)( lVar5 + 0x10 ) )(*(undefined8*)( param_1 + 0x1a40 ), *(undefined8*)( lVar5 + 0x18 ));
      if (iVar1 != 0) {
         LAB_001065b0:uVar6 = 0xfffffffd;
         goto LAB_00106213;
      }

   }

   LAB_001061e3:*(undefined1*)( param_1 + 0x1808 ) = 0;
   uVar6 = 0;
   *(undefined8*)( param_1 + 0x3eac ) = 0;
   *(undefined4*)( param_1 + 0x3ebc ) = 0;
   *(undefined1(*) [16])( param_1 + 0x3e88 ) = (undefined1[16])0x0;
   LAB_00106213:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStreamPlaybackMP3::start(double) */void AudioStreamPlaybackMP3::start(AudioStreamPlaybackMP3 *this, double param_1) {
   ulong uVar1;
   long *plVar2;
   double dVar3;
   this[0x4d9c] = (AudioStreamPlaybackMP3)0x1;
   if (*(code**)( *(long*)this + 0x178 ) == seek) {
      plVar2 = *(long**)( this + 0x4da8 );
      if (*(code**)( *plVar2 + 0x1f8 ) == AudioStreamMP3::get_length) {
         dVar3 = (double)*(float*)( (long)plVar2 + 0x364 );
      }
 else {
         dVar3 = (double)( **(code**)( *plVar2 + 0x1f8 ) )();
         plVar2 = *(long**)( this + 0x4da8 );
      }

      if (dVar3 <= param_1) {
         param_1 = 0.0;
      }

      uVar1 = ( ulong )((double)*(float*)( (long)plVar2 + 0x35c ) * param_1);
      *(int*)( this + 0x4d98 ) = (int)uVar1;
      mp3dec_ex_seek(this + 0xed8, (long)(int)plVar2[0x6c] * ( uVar1 & 0xffffffff ));
   }
 else {
      ( **(code**)( *(long*)this + 0x178 ) )();
   }

   *(undefined4*)( this + 0x4da0 ) = 0;
   AudioStreamPlaybackResampled::begin_resample();
   return;
}
/* AudioStreamPlaybackMP3::seek(double) */void AudioStreamPlaybackMP3::seek(AudioStreamPlaybackMP3 *this, double param_1) {
   ulong uVar1;
   long *plVar2;
   double dVar3;
   if (this[0x4d9c] != (AudioStreamPlaybackMP3)0x0) {
      plVar2 = *(long**)( this + 0x4da8 );
      if (*(code**)( *plVar2 + 0x1f8 ) == AudioStreamMP3::get_length) {
         dVar3 = (double)*(float*)( (long)plVar2 + 0x364 );
      }
 else {
         dVar3 = (double)( **(code**)( *plVar2 + 0x1f8 ) )();
         plVar2 = *(long**)( this + 0x4da8 );
      }

      if (dVar3 <= param_1) {
         param_1 = 0.0;
      }

      uVar1 = ( ulong )((double)*(float*)( (long)plVar2 + 0x35c ) * param_1);
      *(int*)( this + 0x4d98 ) = (int)uVar1;
      mp3dec_ex_seek(this + 0xed8, (long)(int)plVar2[0x6c] * ( uVar1 & 0xffffffff ));
      return;
   }

   return;
}
ulong mp3dec_ex_read_frame(long param_1, long *param_2, int *param_3, ulong param_4) {
   int iVar1;
   undefined8 uVar2;
   bool bVar3;
   int iVar4;
   undefined4 uVar5;
   long lVar6;
   ulong uVar7;
   ulong uVar8;
   int iVar9;
   uchar *puVar10;
   long lVar11;
   ulong uVar12;
   long lVar13;
   long local_50;
   if (param_1 == 0) {
      return 0;
   }

   if (param_2 == (long*)0x0) {
      if (param_1 == 0) {
         return 0;
      }

   }
 else if (param_3 != (int*)0x0) {
      uVar8 = *(ulong*)( param_1 + 0x1a50 );
      if (( uVar8 != 0 ) && ( uVar8 <= *(ulong*)( param_1 + 0x1a58 ) )) {
         return 0;
      }

      if (*(int*)( param_1 + 0x3ebc ) != 0) {
         return 0;
      }

      *param_2 = 0;
      local_50 = *(long*)( param_1 + 0x1a68 );
      if (local_50 == 0) {
         local_50 = *(long*)( param_1 + 0x1a18 );
      }

      iVar9 = *(int*)( param_1 + 0x3eb0 );
      iVar4 = *(int*)( param_1 + 0x3eac );
      if (iVar9 == iVar4) {
         bVar3 = false;
         do {
            puVar10 = *(uchar**)( param_1 + 0x1a10 );
            if (*(long*)( param_1 + 0x1a20 ) == 0) {
               puVar10 = puVar10 + *(long*)( param_1 + 0x1a40 );
               uVar8 = local_50 - *(long*)( param_1 + 0x1a40 );
               if (uVar8 == 0) {
                  return 0;
               }

               if (0x7fffffff < uVar8) {
                  uVar8 = 0x7fffffff;
               }

               uVar5 = mp3dec_decode_frame(param_1, puVar10, uVar8, param_1 + 0x1a88, param_3);
               *(undefined4*)( param_1 + 0x3eac ) = uVar5;
            }
 else {
               lVar6 = *(long*)( param_1 + 0x3e90 );
               lVar11 = *(long*)( param_1 + 0x3e88 );
               if (( !bVar3 ) && ( ( ulong )(lVar6 - lVar11) < 0x4000 )) {
                  memmove(puVar10, puVar10 + lVar11, lVar6 - lVar11);
                  lVar6 = *(long*)( param_1 + 0x3e90 );
                  lVar11 = *(long*)( param_1 + 0x3e88 );
                  *(undefined8*)( param_1 + 0x3e88 ) = 0;
                  lVar13 = lVar6 - lVar11;
                  uVar2 = ( *(undefined8**)( param_1 + 0x1a20 ) )[1];
                  *(long*)( param_1 + 0x3e90 ) = lVar13;
                  uVar8 = ( *(code*)**(undefined8**)( param_1 + 0x1a20 ) )(lVar13 + *(long*)( param_1 + 0x1a10 ), ( lVar11 + *(long*)( param_1 + 0x1a18 ) ) - lVar6, uVar2);
                  lVar6 = *(long*)( param_1 + 0x3e90 );
                  uVar7 = *(long*)( param_1 + 0x1a18 ) - lVar6;
                  if (uVar7 < uVar8) {
                     *(undefined4*)( param_1 + 0x3ebc ) = 0xfffffffd;
                     uVar8 = 0;
                  }
 else {
                     lVar6 = lVar6 + uVar8;
                  }

                  *(long*)( param_1 + 0x3e90 ) = lVar6;
                  puVar10 = *(uchar**)( param_1 + 0x1a10 );
                  if (uVar7 == uVar8) {
                     lVar11 = *(long*)( param_1 + 0x3e88 );
                  }
 else {
                     bVar3 = true;
                     mp3dec_skip_id3v1(puVar10, (ulong*)( param_1 + 0x3e90 ));
                     lVar11 = *(long*)( param_1 + 0x3e88 );
                     lVar6 = *(long*)( param_1 + 0x3e90 );
                  }

               }

               puVar10 = puVar10 + lVar11;
               if (lVar11 == lVar6) {
                  return 0;
               }

               uVar5 = mp3dec_decode_frame(param_1, puVar10, (int)lVar6 - (int)lVar11, param_1 + 0x1a88, param_3);
               *(undefined4*)( param_1 + 0x3eac ) = uVar5;
               *(long*)( param_1 + 0x3e88 ) = *(long*)( param_1 + 0x3e88 ) + (long)*param_3;
            }

            *(undefined4*)( param_1 + 0x3eb0 ) = 0;
            if (( *(int*)( param_1 + 0x1a7c ) != param_3[3] ) || ( *(int*)( param_1 + 0x1a80 ) != param_3[4] )) goto LAB_00106b48;
            iVar1 = *(int*)( param_1 + 0x3eb4 );
            if (*(int*)( param_1 + 0x3eac ) == 0) {
               if (iVar1 == 0) goto LAB_00106846;
               iVar9 = 0x180;
               if (( ( ~puVar10[1] & 6 ) != 0 ) && ( iVar9 = 0x480(puVar10[1] & 0xe) == 2 )) {
                  iVar9 = 0x240;
               }

               iVar4 = 0;
               if (iVar9 * param_3[2] <= iVar1) {
                  iVar4 = iVar1 - iVar9 * param_3[2];
               }

               *(int*)( param_1 + 0x3eb4 ) = iVar4;
               lVar6 = (long)*param_3 + *(long*)( param_1 + 0x1a40 );
            }
 else {
               iVar4 = *(int*)( param_1 + 0x3eac ) * param_3[2];
               *(int*)( param_1 + 0x3eac ) = iVar4;
               iVar9 = iVar1;
               if (iVar1 == 0) {
                  if (iVar4 != 0) goto LAB_001069d8;
               }
 else {
                  if (iVar4 - iVar1 == 0 || iVar4 < iVar1) {
                     iVar9 = iVar4;
                  }

                  *(int*)( param_1 + 0x3eb0 ) = iVar9;
                  *(int*)( param_1 + 0x3eb4 ) = iVar1 - iVar9;
                  if (iVar4 - iVar1 != 0 && iVar1 <= iVar4) goto LAB_001069d8;
               }

               LAB_00106846:lVar6 = (long)*param_3 + *(long*)( param_1 + 0x1a40 );
            }

            *(long*)( param_1 + 0x1a40 ) = lVar6;
         }
 while ( true );
      }

      goto LAB_001069fc;
   }

   *(undefined4*)( param_1 + 0x3ebc ) = 0xffffffff;
   return 0;
   LAB_001069d8:if (*(int*)( param_1 + 0x1a78 ) != param_3[2]) {
      LAB_00106b48:*(undefined4*)( param_1 + 0x3ebc ) = 0xfffffffb;
      return 0;
   }

   *(long*)( param_1 + 0x1a40 ) = *(long*)( param_1 + 0x1a40 ) + (long)*param_3;
   uVar8 = *(ulong*)( param_1 + 0x1a50 );
   LAB_001069fc:uVar7 = (long)( iVar4 - iVar9 );
   if (param_4 < ( ulong )(long)(iVar4 - iVar9)) {
      uVar7 = param_4;
   }

   uVar12 = uVar7 + *(long*)( param_1 + 0x1a58 );
   if (( uVar8 != 0 ) && ( uVar8 <= uVar12 )) {
      uVar7 = uVar8 - *(long*)( param_1 + 0x1a58 );
      uVar12 = uVar8;
   }

   *(ulong*)( param_1 + 0x1a58 ) = uVar12;
   *param_2 = param_1 + 0x1a88 + (long)iVar9 * 4;
   *(int*)( param_1 + 0x3eb0 ) = iVar9 + (int)uVar7;
   return uVar7;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AudioStreamPlaybackMP3::_mix_internal(AudioFrame*, int) */int AudioStreamPlaybackMP3::_mix_internal(AudioStreamPlaybackMP3 *this, AudioFrame *param_1, int param_2) {
   float fVar1;
   code *pcVar2;
   AudioStreamPlaybackMP3 AVar3;
   int iVar4;
   AudioFrame *pAVar5;
   int iVar6;
   long lVar7;
   long *plVar8;
   ulong uVar9;
   AudioStreamPlaybackMP3 *pAVar10;
   long in_FS_OFFSET;
   float fVar11;
   double dVar12;
   float fVar13;
   AudioStreamPlaybackMP3 local_79;
   int local_70;
   float *local_60;
   undefined1 local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0x4d9c] != (AudioStreamPlaybackMP3)0x0) {
      if (this[0xed4] == (AudioStreamPlaybackMP3)0x0) {
         local_79 = *(AudioStreamPlaybackMP3*)( *(long*)( this + 0x4da8 ) + 0x368 );
         if (local_79 == (AudioStreamPlaybackMP3)0x0) goto LAB_00106cae;
         LAB_00106be4:pcVar2 = *(code**)( **(long**)( this + 0x4da8 ) + 0x1d8 );
         if (pcVar2 == AudioStreamMP3::get_bpm) {
            dVar12 = (double)( *(long**)( this + 0x4da8 ) )[0x6e];
         }
 else {
            dVar12 = (double)( *pcVar2 )();
         }

         if (dVar12 <= 0.0) goto LAB_00106cae;
         plVar8 = *(long**)( this + 0x4da8 );
         lVar7 = *plVar8;
         if (*(code**)( lVar7 + 0x1f0 ) == AudioStreamMP3::get_beat_count) {
            iVar4 = (int)plVar8[0x6f];
            if (iVar4 < 1) goto LAB_00106cae;
         }
 else {
            iVar4 = ( **(code**)( lVar7 + 0x1f0 ) )();
            if (iVar4 < 1) goto LAB_00106cae;
            plVar8 = *(long**)( this + 0x4da8 );
            lVar7 = *plVar8;
            if (*(code**)( lVar7 + 0x1f0 ) == AudioStreamMP3::get_beat_count) {
               iVar4 = (int)plVar8[0x6f];
            }
 else {
               iVar4 = ( **(code**)( lVar7 + 0x1f0 ) )();
               plVar8 = *(long**)( this + 0x4da8 );
               lVar7 = *plVar8;
            }

         }

         fVar13 = (float)iVar4 * *(float*)( (long)plVar8 + 0x35c ) * __LC104;
         if (*(code**)( lVar7 + 0x1d8 ) == AudioStreamMP3::get_bpm) {
            dVar12 = (double)plVar8[0x6e];
         }
 else {
            dVar12 = (double)( **(code**)( lVar7 + 0x1d8 ) )();
         }

         local_70 = (int)( (double)fVar13 / dVar12 );
         AVar3 = local_79;
      }
 else {
         local_79 = this[0xed5];
         if (local_79 != (AudioStreamPlaybackMP3)0x0) goto LAB_00106be4;
         LAB_00106cae:AVar3 = (AudioStreamPlaybackMP3)0x0;
         local_70 = -1;
      }

      if (param_2 != 0) {
         uVar9 = (ulong)(uint)param_2;
         do {
            while (true) {
               if (this[0x4d9c] == (AudioStreamPlaybackMP3)0x0) goto LAB_00106dc4;
               local_60 = (float*)0x0;
               iVar4 = mp3dec_ex_read_frame(this + 0xed8, &local_60, local_58, (long)*(int*)( *(long*)( this + 0x4da8 ) + 0x360 ));
               iVar6 = (int)uVar9;
               if (iVar4 != 0) break;
               if (local_79 == (AudioStreamPlaybackMP3)0x0) {
                  iVar6 = param_2 - iVar6;
                  if (iVar6 < param_2) {
                     pAVar5 = param_1 + (long)iVar6 * 8;
                     if (( (int)( param_1 + ( uVar9 + (long)iVar6 ) * 8 ) - (int)pAVar5 & 8U ) == 0) goto LAB_00106e68;
                     *(undefined8*)pAVar5 = 0;
                     for (pAVar5 = pAVar5 + 8; pAVar5 != param_1 + ( uVar9 + (long)iVar6 ) * 8; pAVar5 = pAVar5 + 0x10) {
                        LAB_00106e68:*(undefined8*)pAVar5 = 0;
                        *(undefined8*)( pAVar5 + 8 ) = 0;
                     }

                  }

                  this[0x4d9c] = (AudioStreamPlaybackMP3)0x0;
                  param_2 = iVar6;
                  goto LAB_00106dc4;
               }

               ( **(code**)( *(long*)this + 0x178 ) )((double)*(float*)( *(long*)( this + 0x4da8 ) + 0x36c ), this);
               *(int*)( this + 0x4da0 ) = *(int*)( this + 0x4da0 ) + 1;
            }
;
            fVar13 = local_60[(long)iVar4 + -1];
            fVar1 = *local_60;
            iVar4 = *(int*)( this + 0xed0 );
            *(ulong*)( param_1 + (long)( param_2 - iVar6 ) * 8 ) = CONCAT44(fVar13, fVar1);
            if (iVar4 < 0x100) {
               fVar11 = (float)( 0x100 - iVar4 ) * __LC105;
               *(ulong*)( param_1 + (long)( param_2 - iVar6 ) * 8 ) = CONCAT44(fVar11 * (float)( ( ulong ) * (undefined8*)( this + (long)iVar4 * 8 + 0x6d0 ) >> 0x20 ) + fVar13, fVar11 * (float)*(undefined8*)( this + (long)iVar4 * 8 + 0x6d0 ) + fVar1);
               *(int*)( this + 0xed0 ) = iVar4 + 1;
            }

            iVar4 = *(int*)( this + 0x4d98 );
            *(int*)( this + 0x4d98 ) = iVar4 + 1;
            if (( AVar3 != (AudioStreamPlaybackMP3)0x0 ) && ( local_70 <= iVar4 + 1 )) {
               pAVar10 = this + 0x6d0;
               do {
                  iVar4 = mp3dec_ex_read_frame(this + 0xed8, &local_60, local_58, (long)*(int*)( *(long*)( this + 0x4da8 ) + 0x360 ));
                  *(ulong*)pAVar10 = CONCAT44(local_60[(long)iVar4 + -1], *local_60);
                  if (iVar4 == 0) break;
                  pAVar10 = pAVar10 + 8;
               }
 while ( pAVar10 != this + 0xed0 );
               *(undefined4*)( this + 0xed0 ) = 0;
               ( **(code**)( *(long*)this + 0x178 ) )((double)*(float*)( *(long*)( this + 0x4da8 ) + 0x36c ), this);
               *(int*)( this + 0x4da0 ) = *(int*)( this + 0x4da0 ) + 1;
            }

            uVar9 = ( ulong )(iVar6 - 1U);
         }
 while ( iVar6 - 1U != 0 );
         goto LAB_00106dc4;
      }

   }

   param_2 = 0;
   LAB_00106dc4:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
long mp3dec_ex_read(long param_1, void *param_2, long param_3) {
   long lVar1;
   long lVar2;
   long in_FS_OFFSET;
   void *local_60;
   undefined1 local_58[16];
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != 0) {
      if (param_2 != (void*)0x0) {
         local_48 = 0;
         local_58 = (undefined1[16])0x0;
         lVar2 = param_3;
         if (param_3 != 0) {
            do {
               local_60 = (void*)0x0;
               lVar1 = mp3dec_ex_read_frame(param_1, &local_60, local_58, lVar2);
               if (lVar1 == 0) {
                  param_3 = param_3 - lVar2;
                  break;
               }

               memcpy(param_2, local_60, lVar1 * 4);
               lVar2 = lVar2 - lVar1;
               param_2 = (void*)( (long)param_2 + lVar1 * 4 );
            }
 while ( lVar2 != 0 );
         }

         goto LAB_00107079;
      }

      if (param_1 != 0) {
         *(undefined4*)( param_1 + 0x3ebc ) = 0xffffffff;
      }

   }

   param_3 = 0;
   LAB_00107079:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_3;
}
undefined8 mp3dec_ex_open_cb(void *param_1, long param_2, uint param_3) {
   int iVar1;
   void *pvVar2;
   undefined8 uVar3;
   if (param_1 == (void*)0x0) {
      return 0xffffffff;
   }

   if (( param_2 == 0 ) || ( 3 < param_3 )) {
      uVar3 = 0xffffffff;
   }
 else {
      memset(param_1, 0, 0x3ec0);
      *(undefined8*)( (long)param_1 + 0x1a18 ) = 0x20000;
      pvVar2 = malloc(0x20000);
      *(void**)( (long)param_1 + 0x1a10 ) = pvVar2;
      if (pvVar2 == (void*)0x0) {
         uVar3 = 0xfffffffe;
      }
 else {
         *(long*)( (long)param_1 + 0x1a20 ) = param_2;
         uVar3 = *(undefined8*)( param_2 + 0x18 );
         *(uint*)( (long)param_1 + 0x3e9c ) = param_3;
         iVar1 = ( **(code**)( param_2 + 0x10 ) )(0, uVar3);
         if (iVar1 == 0) {
            uVar3 = mp3dec_iterate_cb(param_2, *(undefined8*)( (long)param_1 + 0x1a10 ), *(undefined8*)( (long)param_1 + 0x1a18 ), mp3dec_load_index, param_1);
            if (( (int)uVar3 + 4U & 0xfffffffb ) != 0) {
               return uVar3;
            }

            uVar3 = ( **(code**)( *(long*)( (long)param_1 + 0x1a20 ) + 0x10 ) )(*(undefined8*)( (long)param_1 + 0x1a60 ), *(undefined8*)( *(long*)( (long)param_1 + 0x1a20 ) + 0x18 ));
            if ((int)uVar3 == 0) {
               *(undefined1*)( (long)param_1 + 0x1808 ) = 0;
               *(undefined4*)( (long)param_1 + 0x3eac ) = 0;
               *(uint*)( (long)param_1 + 0x3e9c ) = *(uint*)( (long)param_1 + 0x3e9c ) & 0xfffffffd;
               *(uint*)( (long)param_1 + 0x3ea4 ) = ( uint )(( param_3 & 2 ) == 0 && *(int*)( (long)param_1 + 0x3ea0 ) == 0);
               return uVar3;
            }

         }

         uVar3 = 0xfffffffd;
      }

   }

   return uVar3;
}
void mp3dec_ex_close(void *param_1) {
   if (( *(long*)( (long)param_1 + 0x1a20 ) != 0 ) && ( *(void**)( (long)param_1 + 0x1a10 ) != (void*)0x0 )) {
      free(*(void**)( (long)param_1 + 0x1a10 ));
   }

   if (*(void**)( (long)param_1 + 0x1a28 ) != (void*)0x0) {
      free(*(void**)( (long)param_1 + 0x1a28 ));
   }

   memset(param_1, 0, 0x3ec0);
   return;
}
/* AudioStreamPlaybackMP3::~AudioStreamPlaybackMP3() */void AudioStreamPlaybackMP3::~AudioStreamPlaybackMP3(AudioStreamPlaybackMP3 *this) {
   Object *pOVar1;
   char cVar2;
   bool bVar3;
   *(undefined***)this = &PTR__initialize_classv_00115f00;
   mp3dec_ex_close();
   if (*(long*)( this + 0x4db8 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x4db8 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0x4da8 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x4da8 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   bVar3 = StringName::configured != '\0';
   *(undefined**)this = &AudioStreamPlayback::typeinfo;
   if (bVar3) {
      if (*(long*)( this + 0x6b8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001072bd;
      }

      if (*(long*)( this + 0x6a0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_001072bd:AudioStreamPlayback::~AudioStreamPlayback((AudioStreamPlayback*)this);
   return;
}
/* AudioStreamPlaybackMP3::~AudioStreamPlaybackMP3() */void AudioStreamPlaybackMP3::~AudioStreamPlaybackMP3(AudioStreamPlaybackMP3 *this) {
   ~AudioStreamPlaybackMP3(this)
   ;;
   operator_delete(this, 0x4dc0);
   return;
}
/* AudioStreamMP3::set_data(Vector<unsigned char> const&) */void AudioStreamMP3::set_data(AudioStreamMP3 *this, Vector *param_1) {
   int iVar1;
   ulong uVar2;
   code *pcVar3;
   int iVar4;
   uint uVar5;
   void *pvVar6;
   long lVar7;
   long lVar8;
   int iVar9;
   uint uVar10;
   long lVar11;
   if (*(long*)( param_1 + 8 ) == 0) {
      lVar11 = 0;
      iVar9 = 0;
   }
 else {
      iVar9 = (int)*(undefined8*)( *(long*)( param_1 + 8 ) + -8 );
      lVar11 = (long)iVar9;
   }

   pvVar6 = operator_new(0x3ec0, "");
   iVar4 = mp3dec_ex_open_buf(pvVar6, *(undefined8*)( param_1 + 8 ), lVar11, 1);
   if (( iVar4 != 0 ) || ( *(int*)( (long)pvVar6 + 0x1a7c ) == 0 )) {
      Memory::free_static(pvVar6, false);
      _err_print_error("set_data", "modules/minimp3/audio_stream_mp3.cpp", 0xe3, "Method/function failed.", "Failed to decode mp3 file. Make sure it is a valid mp3 audio file.", 0, 0);
      return;
   }

   iVar4 = *(int*)( (long)pvVar6 + 0x1a78 );
   uVar2 = *(ulong*)( (long)pvVar6 + 0x1a48 );
   *(int*)( this + 0x360 ) = iVar4;
   iVar1 = *(int*)( (long)pvVar6 + 0x1a7c );
   *(float*)( this + 0x35c ) = (float)iVar1;
   *(float*)( this + 0x364 ) = (float)uVar2 / ( (float)iVar4 * (float)iVar1 );
   mp3dec_ex_close(pvVar6);
   Memory::free_static(pvVar6, false);
   lVar11 = *(long*)( param_1 + 8 );
   if (lVar11 == 0) {
      if (*(int*)( this + 0x348 ) != 0) {
         *(undefined4*)( this + 0x348 ) = 0;
      }

   }
 else {
      uVar5 = *(uint*)( this + 0x348 );
      uVar10 = ( uint ) * (undefined8*)( lVar11 + -8 );
      if (uVar10 < uVar5) {
         *(uint*)( this + 0x348 ) = uVar10;
         uVar5 = uVar10;
      }
 else if (uVar5 < uVar10) {
         if (*(uint*)( this + 0x34c ) < uVar10) {
            uVar5 = uVar10 - 1 | uVar10 - 1 >> 1;
            uVar5 = uVar5 | uVar5 >> 2;
            uVar5 = uVar5 | uVar5 >> 4;
            uVar5 = uVar5 | uVar5 >> 8;
            uVar5 = ( uVar5 | uVar5 >> 0x10 ) + 1;
            *(uint*)( this + 0x34c ) = uVar5;
            lVar11 = Memory::realloc_static(*(void**)( this + 0x350 ), (ulong)uVar5, false);
            *(long*)( this + 0x350 ) = lVar11;
            if (lVar11 == 0) {
               _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0, 0);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            *(uint*)( this + 0x348 ) = uVar10;
            lVar11 = *(long*)( param_1 + 8 );
         }
 else {
            *(uint*)( this + 0x348 ) = uVar10;
         }

         goto LAB_001074b5;
      }

      if (uVar5 != 0) {
         LAB_001074b5:lVar7 = 0;
         while (lVar11 != 0) {
            lVar8 = *(long*)( lVar11 + -8 );
            if (lVar8 <= lVar7) goto LAB_001074ef;
            *(undefined1*)( *(long*)( this + 0x350 ) + lVar7 ) = *(undefined1*)( lVar11 + lVar7 );
            lVar7 = lVar7 + 1;
            if (*(uint*)( this + 0x348 ) <= (uint)lVar7) goto LAB_0010753f;
            lVar11 = *(long*)( param_1 + 8 );
         }
;
         lVar8 = 0;
         LAB_001074ef:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar8, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

   }

   LAB_0010753f:*(int*)( this + 0x358 ) = iVar9;
   return;
}
/* AudioStreamMP3::clear_data() */void AudioStreamMP3::clear_data(AudioStreamMP3 *this) {
   if (*(int*)( this + 0x348 ) != 0) {
      *(undefined4*)( this + 0x348 ) = 0;
   }

   return;
}
/* AudioStreamMP3::AudioStreamMP3() */void AudioStreamMP3::AudioStreamMP3(AudioStreamMP3 *this) {
   undefined8 uVar1;
   Resource::Resource((Resource*)this);
   *(code**)this = strlen;
   *(undefined1(*) [16])( this + 0x240 ) = (undefined1[16])0x0;
   StringName::StringName((StringName*)( this + 0x270 ), "_instantiate_playback", false);
   this[0x278] = (AudioStreamMP3)0x0;
   *(undefined8*)( this + 0x280 ) = 0;
   StringName::StringName((StringName*)( this + 0x288 ), "_get_stream_name", false);
   this[0x290] = (AudioStreamMP3)0x0;
   *(undefined8*)( this + 0x298 ) = 0;
   StringName::StringName((StringName*)( this + 0x2a0 ), "_get_length", false);
   this[0x2a8] = (AudioStreamMP3)0x0;
   *(undefined8*)( this + 0x2b0 ) = 0;
   StringName::StringName((StringName*)( this + 0x2b8 ), "_is_monophonic", false);
   this[0x2c0] = (AudioStreamMP3)0x0;
   *(undefined8*)( this + 0x2c8 ) = 0;
   StringName::StringName((StringName*)( this + 0x2d0 ), "_get_bpm", false);
   this[0x2d8] = (AudioStreamMP3)0x0;
   *(undefined8*)( this + 0x2e0 ) = 0;
   StringName::StringName((StringName*)( this + 0x2e8 ), "_has_loop", false);
   this[0x2f0] = (AudioStreamMP3)0x0;
   *(undefined8*)( this + 0x2f8 ) = 0;
   StringName::StringName((StringName*)( this + 0x300 ), "_get_bar_beats", false);
   this[0x308] = (AudioStreamMP3)0x0;
   *(undefined8*)( this + 0x310 ) = 0;
   StringName::StringName((StringName*)( this + 0x318 ), "_get_beat_count", false);
   this[800] = (AudioStreamMP3)0x0;
   *(undefined8*)( this + 0x328 ) = 0;
   StringName::StringName((StringName*)( this + 0x330 ), "_get_parameter_list", false);
   this[0x338] = (AudioStreamMP3)0x0;
   *(undefined***)this = &PTR__initialize_classv_001160e0;
   *(undefined8*)( this + 0x358 ) = 0x3f80000000000000;
   uVar1 = _LC122;
   *(undefined8*)( this + 0x340 ) = 0;
   *(undefined8*)( this + 0x348 ) = 0;
   *(undefined8*)( this + 0x350 ) = 0;
   *(undefined8*)( this + 0x360 ) = 1;
   this[0x368] = (AudioStreamMP3)0x0;
   *(undefined4*)( this + 0x36c ) = 0;
   *(undefined8*)( this + 0x370 ) = 0;
   *(undefined8*)( this + 0x378 ) = uVar1;
   return;
}
/* AudioStreamMP3::get_parameter_list(List<AudioStream::Parameter, DefaultAllocator>*) */void AudioStreamMP3::get_parameter_list(AudioStreamMP3 *this, List *param_1) {
   undefined8 uVar1;
   long *plVar2;
   undefined4 *puVar3;
   undefined1(*pauVar4)[16];
   long in_FS_OFFSET;
   StringName *local_190;
   long local_140;
   long local_138;
   long local_130;
   undefined4 local_128;
   long local_120;
   char *local_118;
   int local_110;
   long local_108;
   undefined4 local_100;
   char *local_f8;
   undefined1 local_f0[16];
   undefined8 local_e0;
   long local_d8;
   undefined4 local_d0;
   int local_c8[2];
   undefined1 local_c0[16];
   int local_a8[2];
   undefined1 local_a0[16];
   undefined4 local_88;
   undefined1 local_80[16];
   int local_70;
   long local_68;
   undefined4 local_60;
   int local_58[2];
   undefined1 local_50[16];
   long local_40;
   local_f0._8_8_ = local_f0._0_8_;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_c0 = (undefined1[16])0x0;
   local_f8 = "";
   local_c8[0] = 0;
   local_c8[1] = 0;
   local_130 = 0;
   local_138 = 0;
   local_f0._0_8_ = 0;
   String::parse_latin1((StrRange*)&local_138);
   local_f8 = "looping";
   local_140 = 0;
   local_f0._0_8_ = 7;
   String::parse_latin1((StrRange*)&local_140);
   local_128 = 1;
   local_120 = 0;
   if (local_140 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_120, (CowData*)&local_140);
   }

   local_118 = (char*)0x0;
   local_110 = 0;
   local_108 = 0;
   if (local_138 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_108, (CowData*)&local_138);
      local_100 = 0x16;
      if (local_110 == 0x11) {
         StringName::StringName((StringName*)&local_f8, (String*)&local_108, false);
         if (local_118 == local_f8) {
            if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_118 = local_f8;
         }

         goto LAB_00107a0d;
      }

   }

   local_100 = 0x16;
   StringName::operator =((StringName*)&local_118, (StringName*)&local_130);
   LAB_00107a0d:local_190 = (StringName*)&local_118;
   local_70 = 0;
   local_80 = (undefined1[16])0x0;
   local_88 = local_128;
   local_68 = 0;
   local_60 = 6;
   local_58[0] = 0;
   local_50 = (undefined1[16])0x0;
   if (local_120 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)local_80, (CowData*)&local_120);
   }

   StringName::operator =((StringName*)( local_80 + 8 ), local_190);
   local_70 = local_110;
   if (local_68 != local_108) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_108);
   }

   local_60 = local_100;
   Variant::operator =((Variant*)local_58, (Variant*)local_c8);
   if (*(long*)param_1 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   puVar3 = (undefined4*)operator_new(0x60, DefaultAllocator::alloc);
   local_f8 = (char*)0x0;
   local_f0 = (undefined1[16])0x0;
   local_e0 = 0;
   local_d8 = 0;
   local_d0 = 6;
   local_a0 = (undefined1[16])0x0;
   local_a8[0] = 0;
   local_a8[1] = 0;
   puVar3[6] = 0;
   *puVar3 = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   puVar3[10] = 6;
   puVar3[0xc] = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar3 + 0xe ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)( local_f0 + 8 ));
   puVar3[6] = (undefined4)local_e0;
   if (*(long*)( puVar3 + 8 ) != local_d8) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_d8);
   }

   puVar3[10] = local_d0;
   Variant::operator =((Variant*)( puVar3 + 0xc ), (Variant*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (( StringName::configured != '\0' ) && ( local_f0._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_f0);
   if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
   }

   *(undefined8*)( puVar3 + 0x16 ) = 0;
   *(undefined1(*) [16])( puVar3 + 0x12 ) = (undefined1[16])0x0;
   *puVar3 = local_88;
   if (*(long*)( puVar3 + 2 ) != local_80._0_8_) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 2 ), (CowData*)local_80);
   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)( local_80 + 8 ));
   puVar3[6] = local_70;
   if (*(long*)( puVar3 + 8 ) != local_68) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_68);
   }

   puVar3[10] = local_60;
   Variant::operator =((Variant*)( puVar3 + 0xc ), (Variant*)local_58);
   uVar1 = *(undefined8*)( *(long*)param_1 + 8 );
   *(long*)( puVar3 + 0x16 ) = *(long*)param_1;
   *(undefined8*)( puVar3 + 0x12 ) = 0;
   plVar2 = *(long**)param_1;
   *(undefined8*)( puVar3 + 0x14 ) = uVar1;
   if (plVar2[1] != 0) {
      *(undefined4**)( plVar2[1] + 0x48 ) = puVar3;
   }

   plVar2[1] = (long)puVar3;
   if (*plVar2 == 0) {
      *plVar2 = (long)puVar3;
   }

   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_80._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[local_c8[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* AudioStreamMP3::_bind_methods() */void AudioStreamMP3::_bind_methods(void) {
   long lVar1;
   code *pcVar2;
   long *plVar3;
   MethodBind *pMVar4;
   uint uVar5;
   long *plVar6;
   long lVar7;
   long in_FS_OFFSET;
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   long local_c0;
   long local_b8;
   long local_b0;
   char *local_a8;
   undefined8 local_a0;
   char *local_98;
   undefined8 local_90;
   long *local_88;
   char *local_68;
   undefined8 local_60;
   char **local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = 0;
   local_68 = "stream_data";
   uVar5 = ( uint ) & local_58;
   local_58 = &local_68;
   D_METHODP((char*)&local_98, (char***)"load_from_buffer", uVar5);
   StringName::StringName((StringName*)&local_a8, "AudioStreamMP3", false);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = (MethodBind*)operator_new(0x60, "");
   MethodBind::MethodBind(pMVar4);
   *(undefined***)pMVar4 = &PTR__gen_argument_type_00116318;
   *(code**)( pMVar4 + 0x58 ) = load_from_buffer;
   MethodBind::_generate_argument_types((int)pMVar4);
   *(undefined4*)( pMVar4 + 0x34 ) = 1;
   MethodBind::_set_static(SUB81(pMVar4, 0));
   MethodBind::_set_returns(SUB81(pMVar4, 0));
   StringName::operator =((StringName*)( pMVar4 + 0x18 ), (StringName*)&local_a8);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar6 = local_88 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_88[-1];
         lVar7 = 0;
         local_88 = (long*)0x0;
         plVar6 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   local_60 = 0;
   local_68 = "path";
   local_58 = &local_68;
   D_METHODP((char*)&local_98, (char***)"load_from_file", uVar5);
   StringName::StringName((StringName*)&local_a8, "AudioStreamMP3", false);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = (MethodBind*)operator_new(0x60, "");
   MethodBind::MethodBind(pMVar4);
   *(undefined***)pMVar4 = &PTR__gen_argument_type_00116378;
   *(code**)( pMVar4 + 0x58 ) = load_from_file;
   MethodBind::_generate_argument_types((int)pMVar4);
   *(undefined4*)( pMVar4 + 0x34 ) = 1;
   MethodBind::_set_static(SUB81(pMVar4, 0));
   MethodBind::_set_returns(SUB81(pMVar4, 0));
   StringName::operator =((StringName*)( pMVar4 + 0x18 ), (StringName*)&local_a8);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar6 = local_88 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_88[-1];
         lVar7 = 0;
         local_88 = (long*)0x0;
         plVar6 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   local_68 = "data";
   local_60 = 0;
   local_58 = &local_68;
   D_METHODP((char*)&local_98, (char***)"set_data", uVar5);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<AudioStreamMP3,Vector<unsigned_char>const&>(set_data);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar6 = local_88 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_88[-1];
         lVar7 = 0;
         local_88 = (long*)0x0;
         plVar6 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_98, (char***)"get_data", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<AudioStreamMP3,Vector<unsigned_char>>(get_data);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar6 = local_88 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_88[-1];
         lVar7 = 0;
         local_88 = (long*)0x0;
         plVar6 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   local_68 = "enable";
   local_60 = 0;
   local_58 = &local_68;
   D_METHODP((char*)&local_98, (char***)"set_loop", uVar5);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<AudioStreamMP3,bool>(set_loop);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar6 = local_88 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_88[-1];
         lVar7 = 0;
         local_88 = (long*)0x0;
         plVar6 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_98, (char***)"has_loop", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<AudioStreamMP3,bool>((_func_bool*)0x1e1);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar6 = local_88 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_88[-1];
         lVar7 = 0;
         local_88 = (long*)0x0;
         plVar6 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   local_68 = "seconds";
   local_60 = 0;
   local_58 = &local_68;
   D_METHODP((char*)&local_98, (char***)"set_loop_offset", uVar5);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<AudioStreamMP3,double>(set_loop_offset);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar6 = local_88 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_88[-1];
         lVar7 = 0;
         local_88 = (long*)0x0;
         plVar6 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_98, (char***)"get_loop_offset", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<AudioStreamMP3,double>(get_loop_offset);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar6 = local_88 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_88[-1];
         lVar7 = 0;
         local_88 = (long*)0x0;
         plVar6 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   local_68 = "bpm";
   local_60 = 0;
   local_58 = &local_68;
   D_METHODP((char*)&local_98, (char***)"set_bpm", uVar5);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<AudioStreamMP3,double>(set_bpm);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar6 = local_88 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_88[-1];
         lVar7 = 0;
         local_88 = (long*)0x0;
         plVar6 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_98, (char***)"get_bpm", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<AudioStreamMP3,double>((_func_double*)0x1d9);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar6 = local_88 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_88[-1];
         lVar7 = 0;
         local_88 = (long*)0x0;
         plVar6 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   local_68 = "count";
   local_60 = 0;
   local_58 = &local_68;
   D_METHODP((char*)&local_98, (char***)"set_beat_count", uVar5);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<AudioStreamMP3,int>(set_beat_count);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar6 = local_88 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_88[-1];
         lVar7 = 0;
         local_88 = (long*)0x0;
         plVar6 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_98, (char***)"get_beat_count", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<AudioStreamMP3,int>((_func_int*)0x1f1);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar6 = local_88 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_88[-1];
         lVar7 = 0;
         local_88 = (long*)0x0;
         plVar6 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   local_68 = "count";
   local_60 = 0;
   local_58 = &local_68;
   D_METHODP((char*)&local_98, (char***)"set_bar_beats", uVar5);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<AudioStreamMP3,int>(set_bar_beats);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar6 = local_88 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_88[-1];
         lVar7 = 0;
         local_88 = (long*)0x0;
         plVar6 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_98, (char***)"get_bar_beats", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<AudioStreamMP3,int>((_func_int*)0x1e9);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar6 = local_88 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_88[-1];
         lVar7 = 0;
         local_88 = (long*)0x0;
         plVar6 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_b0, true);
   _scs_create((char*)&local_b8, true);
   local_98 = "";
   local_c0 = 0;
   local_c8 = 0;
   local_90 = 0;
   String::parse_latin1((StrRange*)&local_c8);
   local_98 = "data";
   local_d0 = 0;
   local_90 = 4;
   String::parse_latin1((StrRange*)&local_d0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_98, 0x1d, (StrRange*)&local_d0, 0, (StrRange*)&local_c8, 2, &local_c0);
   local_a8 = "AudioStreamMP3";
   local_d8 = 0;
   local_a0 = 0xe;
   String::parse_latin1((StrRange*)&local_d8);
   StringName::StringName((StringName*)&local_a8, (String*)&local_d8, false);
   ClassDB::add_property((StringName*)&local_a8, (PropertyInfo*)&local_98, (StringName*)&local_b8, (StringName*)&local_b0, -1);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_c0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_b8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_b0 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_b0, true);
   _scs_create((char*)&local_b8, true);
   local_98 = "0,400,0.01,or_greater";
   local_c0 = 0;
   local_c8 = 0;
   local_90 = 0x15;
   String::parse_latin1((StrRange*)&local_c8);
   local_98 = "bpm";
   local_d0 = 0;
   local_90 = 3;
   String::parse_latin1((StrRange*)&local_d0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_98, 3, (StrRange*)&local_d0, 1, (StrRange*)&local_c8, 6, &local_c0);
   local_a8 = "AudioStreamMP3";
   local_d8 = 0;
   local_a0 = 0xe;
   String::parse_latin1((StrRange*)&local_d8);
   StringName::StringName((StringName*)&local_a8, (String*)&local_d8, false);
   ClassDB::add_property((StringName*)&local_a8, (PropertyInfo*)&local_98, (StringName*)&local_b8, (StringName*)&local_b0, -1);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( ( StringName::configured != '\0' ) && ( ( local_c0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_b8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_b0 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_b0, true);
   _scs_create((char*)&local_b8, true);
   local_98 = "0,512,1,or_greater";
   local_c0 = 0;
   local_c8 = 0;
   local_90 = 0x12;
   String::parse_latin1((StrRange*)&local_c8);
   local_98 = "beat_count";
   local_d0 = 0;
   local_90 = 10;
   String::parse_latin1((StrRange*)&local_d0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_98, 2, (StrRange*)&local_d0, 1, (StrRange*)&local_c8, 6, &local_c0);
   local_a8 = "AudioStreamMP3";
   local_d8 = 0;
   local_a0 = 0xe;
   String::parse_latin1((StrRange*)&local_d8);
   StringName::StringName((StringName*)&local_a8, (String*)&local_d8, false);
   ClassDB::add_property((StringName*)&local_a8, (PropertyInfo*)&local_98, (StringName*)&local_b8, (StringName*)&local_b0, -1);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_c0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_b8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_b0 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_b0, true);
   _scs_create((char*)&local_b8, true);
   local_98 = "2,32,1,or_greater";
   local_c0 = 0;
   local_c8 = 0;
   local_90 = 0x11;
   String::parse_latin1((StrRange*)&local_c8);
   local_98 = "bar_beats";
   local_d0 = 0;
   local_90 = 9;
   String::parse_latin1((StrRange*)&local_d0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_98, 2, (StrRange*)&local_d0, 1, (StrRange*)&local_c8, 6, &local_c0);
   local_a8 = "AudioStreamMP3";
   local_d8 = 0;
   local_a0 = 0xe;
   String::parse_latin1((StrRange*)&local_d8);
   StringName::StringName((StringName*)&local_a8, (String*)&local_d8, false);
   ClassDB::add_property((StringName*)&local_a8, (PropertyInfo*)&local_98, (StringName*)&local_b8, (StringName*)&local_b0, -1);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_c0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_b8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_b0 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_b0, true);
   _scs_create((char*)&local_b8, true);
   local_98 = "";
   local_c0 = 0;
   local_c8 = 0;
   local_90 = 0;
   String::parse_latin1((StrRange*)&local_c8);
   local_98 = "loop";
   local_d0 = 0;
   local_90 = 4;
   String::parse_latin1((StrRange*)&local_d0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_98, 1, (StrRange*)&local_d0, 0, (StrRange*)&local_c8, 6, &local_c0);
   local_a8 = "AudioStreamMP3";
   local_d8 = 0;
   local_a0 = 0xe;
   String::parse_latin1((StrRange*)&local_d8);
   StringName::StringName((StringName*)&local_a8, (String*)&local_d8, false);
   ClassDB::add_property((StringName*)&local_a8, (PropertyInfo*)&local_98, (StringName*)&local_b8, (StringName*)&local_b0, -1);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_c0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_b8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_b0 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_b0, true);
   _scs_create((char*)&local_b8, true);
   local_98 = "";
   local_c0 = 0;
   local_c8 = 0;
   local_90 = 0;
   String::parse_latin1((StrRange*)&local_c8);
   local_98 = "loop_offset";
   local_d0 = 0;
   local_90 = 0xb;
   String::parse_latin1((StrRange*)&local_d0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_98, 3, (StrRange*)&local_d0, 0, (StrRange*)&local_c8, 6, &local_c0);
   local_a8 = "AudioStreamMP3";
   local_d8 = 0;
   local_a0 = 0xe;
   String::parse_latin1((StrRange*)&local_d8);
   StringName::StringName((StringName*)&local_a8, (String*)&local_d8, false);
   ClassDB::add_property((StringName*)&local_a8, (PropertyInfo*)&local_98, (StringName*)&local_b8, (StringName*)&local_b0, -1);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_c0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_b8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_b0 != 0 )) {
      StringName::unref();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */void CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this) {
   size_t __n;
   code *pcVar1;
   undefined8 *puVar2;
   ulong uVar3;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   __n = *(size_t*)( *(long*)this + -8 );
   uVar3 = 0x10;
   if (__n != 0) {
      uVar3 = __n - 1 | __n - 1 >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      uVar3 = ( uVar3 | uVar3 >> 0x20 ) + 0x11;
   }

   puVar2 = (undefined8*)Memory::alloc_static(uVar3, false);
   if (puVar2 != (undefined8*)0x0) {
      *puVar2 = 1;
      puVar2[1] = __n;
      memcpy(puVar2 + 2, *(void**)this, __n);
      _unref(this);
      *(undefined8**)this = puVar2 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */void CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this, long param_1) {
   CowData<unsigned_char> *pCVar1;
   long *plVar2;
   long lVar3;
   int iVar4;
   ulong uVar5;
   CowData<unsigned_char> *pCVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   CowData<unsigned_char> *pCVar9;
   long lVar10;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar3 = *(long*)this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      LAB_00109c46:lVar10 = 0;
      pCVar6 = (CowData<unsigned_char>*)0x0;
   }
 else {
      lVar10 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar10) {
         return;
      }

      if (param_1 == 0) {
         LOCK();
         plVar2 = (long*)( lVar3 + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 != 0) {
            *(undefined8*)this = 0;
            return;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
      }

      _copy_on_write(this);
      if (lVar10 == 0) goto LAB_00109c46;
      uVar5 = lVar10 - 1U | lVar10 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar6 = (CowData<unsigned_char>*)( ( uVar5 | uVar5 >> 0x20 ) + 1 );
   }

   uVar5 = param_1 - 1U | param_1 - 1U >> 1;
   uVar5 = uVar5 | uVar5 >> 2;
   uVar5 = uVar5 | uVar5 >> 4;
   uVar5 = uVar5 | uVar5 >> 8;
   uVar5 = uVar5 | uVar5 >> 0x10;
   pCVar9 = (CowData<unsigned_char>*)( uVar5 | uVar5 >> 0x20 );
   pCVar1 = pCVar9 + 1;
   if (param_1 <= lVar10) {
      if (( pCVar1 != pCVar6 ) && ( iVar4 = iVar4 != 0 )) {
         return;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return;
      }

      FUN_00111422();
      return;
   }

   if (pCVar1 != pCVar6) {
      if (lVar10 == 0) {
         puVar7 = (undefined8*)Memory::alloc_static(( ulong )(pCVar9 + 0x11), false);
         if (puVar7 == (undefined8*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
            return;
         }

         puVar8 = puVar7 + 2;
         *puVar7 = 1;
         puVar7[1] = 0;
         *(undefined8**)this = puVar8;
         goto LAB_00109b9c;
      }

      pCVar9 = this;
      iVar4 = _realloc(this, (long)pCVar1);
      if (iVar4 != 0) {
         return;
      }

   }

   puVar8 = *(undefined8**)this;
   if (puVar8 == (undefined8*)0x0) {
      resize<false>((long)pCVar9);
      return;
   }

   LAB_00109b9c:puVar8[-1] = param_1;
   return;
}
/* AudioStreamMP3::load_from_buffer(Vector<unsigned char> const&) */AudioStreamMP3 * __thiscall AudioStreamMP3::load_from_buffer(AudioStreamMP3 *this,Vector *param_1){
   long *plVar1;
   code *pcVar2;
   char cVar3;
   AudioStreamMP3 *this_00;
   void *pvVar4;
   AudioStreamMP3 *this_01;
   long in_FS_OFFSET;
   void *local_40[2];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (AudioStreamMP3*)operator_new(0x380, "");
   AudioStreamMP3(this_00);
   postinitialize_handler((Object*)this_00);
   cVar3 = RefCounted::init_ref();
   if (cVar3 == '\0') {
      set_data((AudioStreamMP3*)0x0, param_1);
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   cVar3 = RefCounted::reference();
   this_01 = (AudioStreamMP3*)0x0;
   if (cVar3 != '\0') {
      this_01 = this_00;
   }

   cVar3 = RefCounted::unreference();
   if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler((Object*)this_00) ),cVar3 != '\0') {
      ( **(code**)( *(long*)this_00 + 0x140 ) )(this_00);
      Memory::free_static(this_00, false);
   }

   set_data(this_01, param_1);
   local_40[0] = (void*)0x0;
   CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)local_40, ( ulong ) * (uint*)( this_01 + 0x348 ));
   CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)local_40);
   if (local_40[0] == (void*)0x0) {
      _err_print_error("load_from_buffer", "modules/minimp3/audio_stream_mp3.cpp", 0x13f, "Condition \"mp3_stream->get_data().is_empty()\" is true. Returning: Ref<AudioStreamMP3>()", "MP3 decoding failed. Check that your data is a valid MP3 audio stream.", 0, 0);
      *(undefined8*)this = 0;
      cVar3 = RefCounted::unreference();
   }
 else {
      pvVar4 = memcpy(local_40[0], *(void**)( this_01 + 0x350 ), ( ulong ) * (uint*)( this_01 + 0x348 ));
      LOCK();
      plVar1 = (long*)( (long)pvVar4 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( (long)local_40[0] + -0x10 ), false);
         *(AudioStreamMP3**)this = this_01;
         cVar3 = RefCounted::reference();
      }
 else {
         *(AudioStreamMP3**)this = this_01;
         cVar3 = RefCounted::reference();
      }

      if (cVar3 == '\0') {
         *(undefined8*)this = 0;
      }

      cVar3 = RefCounted::unreference();
   }

   if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler((Object*)this_01) ),cVar3 != '\0') {
      ( **(code**)( *(long*)this_01 + 0x140 ) )(this_01);
      Memory::free_static(this_01, false);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStreamMP3::load_from_file(String const&) */AudioStreamMP3 * __thiscall AudioStreamMP3::load_from_file(AudioStreamMP3 *this,String *param_1){
   long *plVar1;
   long lVar2;
   long lVar3;
   long in_FS_OFFSET;
   bool bVar4;
   undefined8 local_68;
   undefined8 local_60;
   String local_58[8];
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   FileAccess::get_file_as_bytes(local_58, param_1);
   if (local_50 == 0) {
      local_60 = 0;
      plVar1 = (long*)( *(long*)param_1 + -0x10 );
      if (*(long*)param_1 != 0) {
         do {
            lVar2 = *plVar1;
            if (lVar2 == 0) goto LAB_00109f78;
            LOCK();
            lVar3 = *plVar1;
            bVar4 = lVar2 == lVar3;
            if (bVar4) {
               *plVar1 = lVar2 + 1;
               lVar3 = lVar2;
            }

            UNLOCK();
         }
 while ( !bVar4 );
         if (lVar3 != -1) {
            local_60 = *(undefined8*)param_1;
         }

      }

      LAB_00109f78:local_40 = 0x16;
      local_48 = "Cannot open file \'%s\'.";
      local_68 = 0;
      String::parse_latin1((StrRange*)&local_68);
      vformat<String>((CowData<char32_t>*)&local_48, &local_68, (CowData<char32_t>*)&local_60);
      _err_print_error("load_from_file", "modules/minimp3/audio_stream_mp3.cpp", 0x145, "Condition \"stream_data.is_empty()\" is true. Returning: Ref<AudioStreamMP3>()", (CowData<char32_t>*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      *(undefined8*)this = 0;
   }
 else {
      load_from_buffer(this, (Vector*)local_58);
   }

   lVar2 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* AudioStreamMP3::get_data() const */void AudioStreamMP3::get_data(void) {
   uint uVar1;
   long in_RSI;
   long in_RDI;
   uVar1 = *(uint*)( in_RSI + 0x348 );
   *(undefined8*)( in_RDI + 8 ) = 0;
   CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)( in_RDI + 8 ), (ulong)uVar1);
   CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)( in_RDI + 8 ));
   if (*(void**)( in_RDI + 8 ) != (void*)0x0) {
      memcpy(*(void**)( in_RDI + 8 ), *(void**)( in_RSI + 0x350 ), ( ulong ) * (uint*)( in_RSI + 0x348 ));
   }

   return;
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   if (( configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }

   return;
}
/* Object::get_save_class() const */void Object::get_save_class(void) {
   long lVar1;
   long *in_RSI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *in_RSI + 0x48 ) )();
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind::is_valid() const */undefined8 MethodBind::is_valid(void) {
   return 1;
}
/* MethodBind::is_vararg() const */undefined8 MethodBind::is_vararg(void) {
   return 0;
}
/* RefCounted::is_class_ptr(void*) const */uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
   return (uint)CONCAT71(0x1185, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1185, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}
/* RefCounted::_getv(StringName const&, Variant&) const */undefined8 RefCounted::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_setv(StringName const&, Variant const&) */undefined8 RefCounted::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_validate_propertyv(PropertyInfo&) const */void RefCounted::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* RefCounted::_property_can_revertv(StringName const&) const */undefined8 RefCounted::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */undefined8 RefCounted::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_notificationv(int, bool) */void RefCounted::_notificationv(int param_1, bool param_2) {
   return;
}
/* Resource::set_last_modified_time(unsigned long) */void Resource::set_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x198 ) = param_1;
   return;
}
/* Resource::set_import_last_modified_time(unsigned long) */void Resource::set_import_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x1a0 ) = param_1;
   return;
}
/* AudioSample::is_class_ptr(void*) const */uint AudioSample::is_class_ptr(AudioSample *this, void *param_1) {
   return (uint)CONCAT71(0x1185, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1185, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1185, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* AudioSample::_getv(StringName const&, Variant&) const */undefined8 AudioSample::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AudioSample::_setv(StringName const&, Variant const&) */undefined8 AudioSample::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AudioSample::_validate_propertyv(PropertyInfo&) const */void AudioSample::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* AudioSample::_property_can_revertv(StringName const&) const */undefined8 AudioSample::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* AudioSample::_property_get_revertv(StringName const&, Variant&) const */undefined8 AudioSample::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AudioSample::_notificationv(int, bool) */void AudioSample::_notificationv(int param_1, bool param_2) {
   return;
}
/* AudioStream::is_meta_stream() const */undefined8 AudioStream::is_meta_stream(void) {
   return 0;
}
/* AudioStreamPlaybackMP3::is_class_ptr(void*) const */uint AudioStreamPlaybackMP3::is_class_ptr(AudioStreamPlaybackMP3 *this, void *param_1) {
   return (uint)CONCAT71(0x1185, (undefined4*)param_1 == &AudioStreamPlaybackResampled::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1166, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1185, (undefined4*)param_1 == &AudioStreamPlayback::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1185, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1185, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* AudioStreamPlaybackMP3::_getv(StringName const&, Variant&) const */undefined8 AudioStreamPlaybackMP3::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AudioStreamPlaybackMP3::_setv(StringName const&, Variant const&) */undefined8 AudioStreamPlaybackMP3::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AudioStreamPlaybackMP3::_validate_propertyv(PropertyInfo&) const */void AudioStreamPlaybackMP3::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* AudioStreamPlaybackMP3::_property_can_revertv(StringName const&) const */undefined8 AudioStreamPlaybackMP3::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* AudioStreamPlaybackMP3::_property_get_revertv(StringName const&, Variant&) const */undefined8 AudioStreamPlaybackMP3::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AudioStreamPlaybackMP3::_notificationv(int, bool) */void AudioStreamPlaybackMP3::_notificationv(int param_1, bool param_2) {
   return;
}
/* AudioStreamMP3::is_class_ptr(void*) const */uint AudioStreamMP3::is_class_ptr(AudioStreamMP3 *this, void *param_1) {
   return (uint)CONCAT71(0x1185, (undefined4*)param_1 == &AudioStream::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1166, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1185, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1185, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1185, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* AudioStreamMP3::_getv(StringName const&, Variant&) const */undefined8 AudioStreamMP3::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AudioStreamMP3::_setv(StringName const&, Variant const&) */undefined8 AudioStreamMP3::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AudioStreamMP3::_validate_propertyv(PropertyInfo&) const */void AudioStreamMP3::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* AudioStreamMP3::_property_can_revertv(StringName const&) const */undefined8 AudioStreamMP3::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* AudioStreamMP3::_property_get_revertv(StringName const&, Variant&) const */undefined8 AudioStreamMP3::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AudioStreamMP3::_notificationv(int, bool) */void AudioStreamMP3::_notificationv(int param_1, bool param_2) {
   return;
}
/* AudioStreamMP3::can_be_sampled() const */undefined8 AudioStreamMP3::can_be_sampled(void) {
   return 1;
}
/* MethodBindTRC<int>::_gen_argument_type(int) const */undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<int>::get_argument_meta(int) const */uint MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this, int param_1) {
   return param_1 >> 0x1f & 3;
}
/* MethodBindT<int>::_gen_argument_type(int) const */char MethodBindT<int>::_gen_argument_type(MethodBindT<int> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<int>::get_argument_meta(int) const */byte MethodBindT<int>::get_argument_meta(MethodBindT<int> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindTRC<double>::_gen_argument_type(int) const */undefined8 MethodBindTRC<double>::_gen_argument_type(int param_1) {
   return 3;
}
/* MethodBindTRC<double>::get_argument_meta(int) const */uint MethodBindTRC<double>::get_argument_meta(MethodBindTRC<double> *this, int param_1) {
   return param_1 >> 0x1f & 10;
}
/* MethodBindT<double>::_gen_argument_type(int) const */byte MethodBindT<double>::_gen_argument_type(MethodBindT<double> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindT<double>::get_argument_meta(int) const */byte MethodBindT<double>::get_argument_meta(MethodBindT<double> *this, int param_1) {
   return -(param_1 == 0) & 10;
}
/* MethodBindTRC<bool>::_gen_argument_type(int) const */undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1) {
   return 1;
}
/* MethodBindTRC<bool>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<bool>::_gen_argument_type(int) const */bool MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this, int param_1) {
   return param_1 == 0;
}
/* MethodBindT<bool>::get_argument_meta(int) const */undefined8 MethodBindT<bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<Vector<unsigned char>>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Vector<unsigned_char>>::_gen_argument_type(int param_1) {
   return 0x1d;
}
/* MethodBindTRC<Vector<unsigned char>>::get_argument_meta(int) const */undefined8 MethodBindTRC<Vector<unsigned_char>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Vector<unsigned char> const&>::_gen_argument_type(int) const */byte MethodBindT<Vector<unsigned_char>const&>::_gen_argument_type(MethodBindT<Vector<unsigned_char>const&> *this, int param_1) {
   return -(param_1 == 0) & 0x1d;
}
/* MethodBindT<Vector<unsigned char> const&>::get_argument_meta(int) const */undefined8 MethodBindT<Vector<unsigned_char>const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRS<Ref<AudioStreamMP3>, String const&>::_gen_argument_type(int) const */int MethodBindTRS<Ref<AudioStreamMP3>,String_const&>::_gen_argument_type(MethodBindTRS<Ref<AudioStreamMP3>,String_const&> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xffffffec ) + 0x18;
}
/* MethodBindTRS<Ref<AudioStreamMP3>, String const&>::get_argument_meta(int) const */undefined8 MethodBindTRS<Ref<AudioStreamMP3>,String_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRS<Ref<AudioStreamMP3>, Vector<unsigned char> const&>::_gen_argument_type(int) const
    */char MethodBindTRS<Ref<AudioStreamMP3>,Vector<unsigned_char>const&>::_gen_argument_type(MethodBindTRS<Ref<AudioStreamMP3>,Vector<unsigned_char>const&> *this, int param_1) {
   return ( -(param_1 == 0) & 5U ) + 0x18;
}
/* MethodBindTRS<Ref<AudioStreamMP3>, Vector<unsigned char> const&>::get_argument_meta(int) const */undefined8 MethodBindTRS<Ref<AudioStreamMP3>,Vector<unsigned_char>const&>::get_argument_meta(int param_1) {
   return 0;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00115c40;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00115c40;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* MethodBindTRS<Ref<AudioStreamMP3>, Vector<unsigned char> const&>::~MethodBindTRS() */void MethodBindTRS<Ref<AudioStreamMP3>,Vector<unsigned_char>const&>::~MethodBindTRS(MethodBindTRS<Ref<AudioStreamMP3>,Vector<unsigned_char>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116318;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRS<Ref<AudioStreamMP3>, Vector<unsigned char> const&>::~MethodBindTRS() */void MethodBindTRS<Ref<AudioStreamMP3>,Vector<unsigned_char>const&>::~MethodBindTRS(MethodBindTRS<Ref<AudioStreamMP3>,Vector<unsigned_char>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116318;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x60);
   return;
}
/* MethodBindTRS<Ref<AudioStreamMP3>, String const&>::~MethodBindTRS() */void MethodBindTRS<Ref<AudioStreamMP3>,String_const&>::~MethodBindTRS(MethodBindTRS<Ref<AudioStreamMP3>,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116378;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRS<Ref<AudioStreamMP3>, String const&>::~MethodBindTRS() */void MethodBindTRS<Ref<AudioStreamMP3>,String_const&>::~MethodBindTRS(MethodBindTRS<Ref<AudioStreamMP3>,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116378;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x60);
   return;
}
/* MethodBindT<Vector<unsigned char> const&>::~MethodBindT() */void MethodBindT<Vector<unsigned_char>const&>::~MethodBindT(MethodBindT<Vector<unsigned_char>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001163d8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Vector<unsigned char> const&>::~MethodBindT() */void MethodBindT<Vector<unsigned_char>const&>::~MethodBindT(MethodBindT<Vector<unsigned_char>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001163d8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Vector<unsigned char>>::~MethodBindTRC() */void MethodBindTRC<Vector<unsigned_char>>::~MethodBindTRC(MethodBindTRC<Vector<unsigned_char>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116438;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Vector<unsigned char>>::~MethodBindTRC() */void MethodBindTRC<Vector<unsigned_char>>::~MethodBindTRC(MethodBindTRC<Vector<unsigned_char>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116438;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116498;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116498;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001164f8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001164f8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<double>::~MethodBindT() */void MethodBindT<double>::~MethodBindT(MethodBindT<double> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116558;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<double>::~MethodBindT() */void MethodBindT<double>::~MethodBindT(MethodBindT<double> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116558;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<double>::~MethodBindTRC() */void MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001165b8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<double>::~MethodBindTRC() */void MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001165b8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116618;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116618;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116678;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116678;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* AudioStreamPlaybackMP3::_get_class_namev() const */undefined8 *AudioStreamPlaybackMP3::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010af03:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010af03;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AudioStreamPlaybackMP3");
         goto LAB_0010af6e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AudioStreamPlaybackMP3");
   LAB_0010af6e:return &_get_class_namev();
}
/* AudioSample::~AudioSample() */void AudioSample::~AudioSample(AudioSample *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   *(undefined***)this = &PTR__initialize_classv_00115da0;
   if (*(long*)( this + 400 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 400 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 400 );
         *(undefined8*)( this + 400 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x180 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0x180 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   *(undefined***)this = &PTR__initialize_classv_00115c40;
   Object::~Object((Object*)this);
   return;
}
/* AudioSample::~AudioSample() */void AudioSample::~AudioSample(AudioSample *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   *(undefined***)this = &PTR__initialize_classv_00115da0;
   if (*(long*)( this + 400 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 400 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 400 );
         *(undefined8*)( this + 400 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x180 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0x180 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   *(undefined***)this = &PTR__initialize_classv_00115c40;
   Object::~Object((Object*)this);
   operator_delete(this, 0x1b0);
   return;
}
/* MethodBindTRS<Ref<AudioStreamMP3>, String const&>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindTRS<Ref<AudioStreamMP3>,String_const&>::validated_call(MethodBindTRS<Ref<AudioStreamMP3>,String_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   char cVar1;
   long in_FS_OFFSET;
   Object *local_30;
   undefined8 local_28;
   Object *local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( this + 0x58 ) )(&local_30, *param_2 + 8, param_2, 0);
   if (local_30 == (Object*)0x0) {
      Variant::ObjData::unref();
   }
 else {
      local_28 = *(undefined8*)( local_30 + 0x60 );
      local_20 = local_30;
      Variant::ObjData::ref((ObjData*)( param_3 + 8 ));
   }

   if (local_30 != (Object*)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
         cVar1 = predelete_handler(local_30);
         if (cVar1 != '\0') {
            ( **(code**)( *(long*)local_30 + 0x140 ) )(local_30);
            Memory::free_static(local_30, false);
         }

      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRS<Ref<AudioStreamMP3>, Vector<unsigned char> const&>::validated_call(Object*, Variant
   const**, Variant*) const */void MethodBindTRS<Ref<AudioStreamMP3>,Vector<unsigned_char>const&>::validated_call(MethodBindTRS<Ref<AudioStreamMP3>,Vector<unsigned_char>const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   char cVar1;
   long in_FS_OFFSET;
   Object *local_30;
   undefined8 local_28;
   Object *local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( this + 0x58 ) )(&local_30, *(long*)( *param_2 + 8 ) + 0x10, *param_2, 0);
   if (local_30 == (Object*)0x0) {
      Variant::ObjData::unref();
   }
 else {
      local_28 = *(undefined8*)( local_30 + 0x60 );
      local_20 = local_30;
      Variant::ObjData::ref((ObjData*)( param_3 + 8 ));
   }

   if (local_30 != (Object*)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
         cVar1 = predelete_handler(local_30);
         if (cVar1 != '\0') {
            ( **(code**)( *(long*)local_30 + 0x140 ) )(local_30);
            Memory::free_static(local_30, false);
         }

      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStreamMP3::get_base_extension() const */AudioStreamMP3 * __thiscall AudioStreamMP3::get_base_extension(AudioStreamMP3 *this){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   String::parse_latin1((StrRange*)this);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStreamMP3::get_save_class() const */AudioStreamMP3 * __thiscall AudioStreamMP3::get_save_class(AudioStreamMP3 *this){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   String::parse_latin1((StrRange*)this);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRS<Ref<AudioStreamMP3>, String const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTRS<Ref<AudioStreamMP3>,String_const&>::ptrcall(MethodBindTRS<Ref<AudioStreamMP3>,String_const&> *this, Object *param_1, void **param_2, void *param_3) {
   char cVar1;
   Object *pOVar2;
   Object *pOVar3;
   long in_FS_OFFSET;
   Object *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( this + 0x58 ) )(&local_28, *param_2, param_2, 0);
   if (local_28 == (Object*)0x0) {
      /* WARNING: Load size is inaccurate */
      pOVar3 = *param_3;
      if (pOVar3 == (Object*)0x0) goto LAB_0010b401;
      *(undefined8*)param_3 = 0;
      goto LAB_0010b46f;
   }

   pOVar2 = (Object*)__dynamic_cast(local_28, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar3 = *param_3;
   if (pOVar3 != pOVar2) {
      *(Object**)param_3 = pOVar2;
      if (pOVar2 == (Object*)0x0) {
         if (pOVar3 != (Object*)0x0) goto LAB_0010b46f;
      }
 else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar3 != (Object*)0x0) {
            LAB_0010b46f:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar3);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  Memory::free_static(pOVar3, false);
               }

            }

         }

         if (local_28 == (Object*)0x0) goto LAB_0010b401;
      }

   }

   cVar1 = RefCounted::unreference();
   if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_28);
      if (cVar1 != '\0') {
         ( **(code**)( *(long*)local_28 + 0x140 ) )(local_28);
         Memory::free_static(local_28, false);
      }

   }

   LAB_0010b401:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRS<Ref<AudioStreamMP3>, Vector<unsigned char> const&>::ptrcall(Object*, void const**,
   void*) const */void MethodBindTRS<Ref<AudioStreamMP3>,Vector<unsigned_char>const&>::ptrcall(MethodBindTRS<Ref<AudioStreamMP3>,Vector<unsigned_char>const&> *this, Object *param_1, void **param_2, void *param_3) {
   char cVar1;
   Object *pOVar2;
   Object *pOVar3;
   long in_FS_OFFSET;
   Object *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( this + 0x58 ) )(&local_28, *param_2, param_2, 0);
   if (local_28 == (Object*)0x0) {
      /* WARNING: Load size is inaccurate */
      pOVar3 = *param_3;
      if (pOVar3 == (Object*)0x0) goto LAB_0010b531;
      *(undefined8*)param_3 = 0;
      goto LAB_0010b59f;
   }

   pOVar2 = (Object*)__dynamic_cast(local_28, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar3 = *param_3;
   if (pOVar3 != pOVar2) {
      *(Object**)param_3 = pOVar2;
      if (pOVar2 == (Object*)0x0) {
         if (pOVar3 != (Object*)0x0) goto LAB_0010b59f;
      }
 else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar3 != (Object*)0x0) {
            LAB_0010b59f:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar3);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  Memory::free_static(pOVar3, false);
               }

            }

         }

         if (local_28 == (Object*)0x0) goto LAB_0010b531;
      }

   }

   cVar1 = RefCounted::unreference();
   if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_28);
      if (cVar1 != '\0') {
         ( **(code**)( *(long*)local_28 + 0x140 ) )(local_28);
         Memory::free_static(local_28, false);
      }

   }

   LAB_0010b531:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioSample::_get_class_namev() const */undefined8 *AudioSample::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010b623:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010b623;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AudioSample");
         goto LAB_0010b68e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AudioSample");
   LAB_0010b68e:return &_get_class_namev();
}
/* RefCounted::_get_class_namev() const */undefined8 *RefCounted::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010b703:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010b703;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_0010b76e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_0010b76e:return &_get_class_namev();
}
/* AudioStreamMP3::_get_class_namev() const */undefined8 *AudioStreamMP3::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010b7f3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010b7f3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AudioStreamMP3");
         goto LAB_0010b85e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AudioStreamMP3");
   LAB_0010b85e:return &_get_class_namev();
}
/* AudioStreamMP3::get_class() const */void AudioStreamMP3::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI);
   }
 else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      }
 else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }

         }
 else {
            strlen(__s);
            String::parse_latin1(in_RDI);
         }

      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::get_class() const */void RefCounted::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI);
   }
 else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      }
 else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }

         }
 else {
            strlen(__s);
            String::parse_latin1(in_RDI);
         }

      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStreamPlaybackMP3::get_class() const */void AudioStreamPlaybackMP3::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI);
   }
 else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      }
 else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }

         }
 else {
            strlen(__s);
            String::parse_latin1(in_RDI);
         }

      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioSample::get_class() const */void AudioSample::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI);
   }
 else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      }
 else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }

         }
 else {
            strlen(__s);
            String::parse_latin1(in_RDI);
         }

      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long lVar4;
   long lVar5;
   char cVar6;
   undefined8 uVar7;
   long lVar8;
   long in_FS_OFFSET;
   bool bVar9;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar4 = *(long*)( lVar2 + 0x20 );
      if (lVar4 == 0) {
         local_60 = 0;
      }
 else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_0010bc5f;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0010bc5f:cVar6 = String::operator ==(param_1, (String*)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (cVar6 != '\0') goto LAB_0010bd13;
   }

   cVar6 = String::operator ==(param_1, "RefCounted");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_0010bdc3;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }

               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         LAB_0010bdc3:cVar6 = String::operator ==(param_1, (String*)&local_60);
         lVar4 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (cVar6 != '\0') goto LAB_0010bd13;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_0010bd13:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioSample::is_class(String const&) const */undefined8 AudioSample::is_class(AudioSample *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *__s;
   long lVar3;
   long lVar4;
   char cVar5;
   long lVar6;
   undefined8 uVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar3 = *(long*)( lVar2 + 0x20 );
      if (lVar3 == 0) {
         local_60 = 0;
      }
 else {
         __s = *(char**)( lVar3 + 8 );
         local_60 = 0;
         if (__s == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar3 + 0x10 ) + -0x10 );
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               do {
                  lVar4 = *plVar1;
                  if (lVar4 == 0) goto LAB_0010beef;
                  LOCK();
                  lVar6 = *plVar1;
                  bVar8 = lVar4 == lVar6;
                  if (bVar8) {
                     *plVar1 = lVar4 + 1;
                     lVar6 = lVar4;
                  }

                  UNLOCK();
               }
 while ( !bVar8 );
               if (lVar6 != -1) {
                  local_60 = *(long*)( lVar3 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0010beef:cVar5 = String::operator ==(param_1, (String*)&local_60);
      lVar3 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      if (cVar5 != '\0') goto LAB_0010bfa3;
   }

   cVar5 = String::operator ==(param_1, "AudioSample");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_0010bfa3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<bool>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC44;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 1;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0010c13c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010c13c:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector<unsigned char>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Vector<unsigned_char>>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC44;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 0x1d;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0010c2bc;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010c2bc:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<double>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<double>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC44;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 3;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0010c43c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010c43c:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<int>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC44;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 2;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0010c5bc;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010c5bc:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRS<Ref<AudioStreamMP3>, Vector<unsigned char> const&>::call(Object*, Variant const**,
   int, Callable::CallError&) const */Object *MethodBindTRS<Ref<AudioStreamMP3>,Vector<unsigned_char>const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long *plVar1;
   Variant *pVVar2;
   long lVar3;
   code *pcVar4;
   undefined8 uVar5;
   char cVar6;
   undefined4 uVar7;
   long lVar8;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar9;
   long in_FS_OFFSET;
   Object *local_60;
   Variant local_58[8];
   long local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   pVVar2 = param_2[0xb];
   *(undefined4*)param_1 = 0;
   if (in_R8D < 2) {
      pVVar9 = param_2[5];
      if (pVVar9 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0010c808;
         LAB_0010c788:pVVar9 = *(Variant**)param_4;
      }
 else {
         lVar3 = *(long*)( pVVar9 + -8 );
         if ((int)lVar3 < (int)( in_R8D ^ 1 )) {
            LAB_0010c808:uVar7 = 4;
            goto LAB_0010c795;
         }

         if (in_R8D == 1) goto LAB_0010c788;
         lVar8 = (long)( (int)lVar3 + -1 );
         if (lVar3 <= lVar8) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar3, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         pVVar9 = pVVar9 + lVar8 * 0x18;
      }

      *in_R9 = 0;
      cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar9, 0x1d);
      uVar5 = _LC56;
      if (cVar6 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar5;
      }

      Variant::operator_cast_to_Vector(local_58);
      ( *(code*)pVVar2 )(&local_60, local_58);
      Variant::Variant((Variant*)local_48, local_60);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_48[0];
      *(undefined8*)( param_1 + 8 ) = local_40;
      *(undefined8*)( param_1 + 0x10 ) = uStack_38;
      if (( ( local_60 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)local_60 + 0x140 ))(local_60);
      Memory::free_static(local_60, false);
   }

   lVar3 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

}
else{uVar7 = 3;LAB_0010c795:*in_R9 = uVar7;in_R9[2] = 1;}if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return param_1;}/* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   void *pvVar5;
   pvVar5 = *(void**)( this + 0x18 );
   if (pvVar5 != (void*)0x0) {
      if (*(int*)( this + 0x3c ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x38 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x3c ) = 0;
            *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x20 ) + lVar4 ) != 0) {
                  pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
                  *(int*)( *(long*)( this + 0x20 ) + lVar4 ) = 0;
                  if (Variant::needs_deinit[*(int*)( (long)pvVar5 + 0x48 )] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (*(long*)( (long)pvVar5 + 0x38 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x38 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x38 );
                        *(undefined8*)( (long)pvVar5 + 0x38 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar5 + 0x28 ) != 0 )) {
                     StringName::unref();
                  }

                  if (*(long*)( (long)pvVar5 + 0x20 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x20 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x20 );
                        *(undefined8*)( (long)pvVar5 + 0x20 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  if (*(long*)( (long)pvVar5 + 0x10 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x10 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x10 );
                        *(undefined8*)( (long)pvVar5 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar5, false);
                  pvVar5 = *(void**)( this + 0x18 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( lVar4 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x3c ) = 0;
            *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) goto LAB_0010c9b4;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_0010c9b4:if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar4 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* RefCounted::_initialize_classv() */void RefCounted::_initialize_classv(void) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      Object::initialize_class();
      local_48 = 0;
      local_38 = "Object";
      local_30 = 6;
      String::parse_latin1((StrRange*)&local_48);
      StringName::StringName((StringName*)&local_40, (String*)&local_48, false);
      local_38 = "RefCounted";
      local_50 = 0;
      local_30 = 10;
      String::parse_latin1((StrRange*)&local_50);
      StringName::StringName((StringName*)&local_38, (String*)&local_50, false);
      ClassDB::_add_class2((StringName*)&local_38, (StringName*)&local_40);
      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
      }

      lVar2 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_40 != 0 )) {
         StringName::unref();
      }

      lVar2 = local_48;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
         RefCounted::_bind_methods();
      }

      initialize_class()::initialized =
      '\x01';
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)( this + 0x20 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x20 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x20 );
         *(undefined8*)( this + 0x20 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x10 ) != 0 )) {
      StringName::unref();
   }

   if (*(long*)( this + 8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 8 );
         *(undefined8*)( this + 8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */void PropertyInfo::PropertyInfo(PropertyInfo *this, undefined4 param_2, CowData *param_3, int param_4, CowData *param_5, undefined4 param_6, StringName *param_7) {
   long lVar1;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 8 ) = 0;
   lVar1 = *(long*)param_3;
   *(undefined4*)this = param_2;
   if (lVar1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 8 ), param_3);
   }

   *(undefined8*)( this + 0x20 ) = 0;
   lVar1 = *(long*)param_5;
   *(undefined8*)( this + 0x10 ) = 0;
   *(int*)( this + 0x18 ) = param_4;
   if (lVar1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), param_5);
      param_4 = *(int*)( this + 0x18 );
   }

   *(undefined4*)( this + 0x28 ) = param_6;
   if (param_4 == 0x11) {
      StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
      if (*(long*)( this + 0x10 ) == local_48) {
         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(long*)( this + 0x10 ) = local_48;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      StringName::operator =((StringName*)( this + 0x10 ), param_7);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<char32_t>::_unref() */void CowData<char32_t>::_unref(CowData<char32_t> *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 != 0) {
      *(undefined8*)this = 0;
      return;
   }

   lVar2 = *(long*)this;
   *(undefined8*)this = 0;
   Memory::free_static((void*)( lVar2 + -0x10 ), false);
   return;
}
/* WARNING: Removing unreachable block (ram,0x0010cf68) *//* WARNING: Removing unreachable block (ram,0x0010d0fd) *//* WARNING: Removing unreachable block (ram,0x0010d109) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
   Variant *this;
   int iVar1;
   long in_FS_OFFSET;
   Array local_c8[8];
   undefined8 local_c0[9];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, param_3);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c8);
   iVar1 = (int)local_c8;
   Array::resize(iVar1);
   this(Variant * Array::operator [](iVar1));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, param_2);
   *param_1 = local_c0[0];
   Array::~Array(local_c8);
   if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
   undefined4 *puVar5;
   undefined7 in_register_00000031;
   List *pLVar6;
   long in_FS_OFFSET;
   StringName *local_a8;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   long local_70;
   long local_68;
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   pLVar6 = (List*)CONCAT71(in_register_00000031, param_2);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = "RefCounted";
   local_88 = 0;
   local_90 = 0;
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "RefCounted";
   local_98 = 0;
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_0010d2d8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010d2d8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x0010d2f9;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x0010d2f9:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])pLVar6 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   local_a8 = (StringName*)&local_68;
   puVar5 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   *(undefined8*)( puVar5 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0xc ) = (undefined1[16])0x0;
   *puVar5 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), local_a8);
   puVar5[6] = local_60;
   if (*(long*)( puVar5 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_58);
   }

   lVar3 = local_58;
   puVar5[10] = local_50;
   plVar1 = *(long**)pLVar6;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar5 + 0xc ) = 0;
   *(long**)( puVar5 + 0x10 ) = plVar1;
   *(long*)( puVar5 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar5;
   }

   plVar1[1] = (long)puVar5;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar5;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   lVar2 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "RefCounted", false);
   ClassDB::get_property_list((StringName*)&local_78, pLVar6, true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRS<Ref<AudioStreamMP3>, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRS<Ref<AudioStreamMP3>,String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   long lVar7;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar8;
   long in_FS_OFFSET;
   Object *local_58;
   Variant local_50[8];
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   pVVar1 = param_2[0xb];
   *(undefined4*)param_1 = 0;
   if (in_R8D < 2) {
      pVVar8 = param_2[5];
      if (pVVar8 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0010d6c8;
         LAB_0010d640:pVVar8 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar8 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0010d6c8:uVar6 = 4;
            goto LAB_0010d655;
         }

         if (in_R8D == 1) goto LAB_0010d640;
         lVar7 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar7) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar8 = pVVar8 + lVar7 * 0x18;
      }

      *in_R9 = 0;
      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar8, 4);
      uVar4 = _LC122;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_String(local_50);
      ( *(code*)pVVar1 )(&local_58, local_50);
      Variant::Variant((Variant*)local_48, local_58);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_48[0];
      *(undefined8*)( param_1 + 8 ) = local_40;
      *(undefined8*)( param_1 + 0x10 ) = uStack_38;
      if (( ( local_58 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)local_58 + 0x140 ))(local_58);
      Memory::free_static(local_58, false);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
}
else{uVar6 = 3;LAB_0010d655:*in_R9 = uVar6;in_R9[2] = 1;}if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return param_1;}/* AudioSample::_initialize_classv() */void AudioSample::_initialize_classv(void) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_60;
   undefined8 local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (RefCounted::initialize_class() == '\0') {
         Object::initialize_class();
         local_58 = 0;
         local_40 = 6;
         local_48 = "Object";
         String::parse_latin1((StrRange*)&local_58);
         StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
         local_48 = "RefCounted";
         local_60 = 0;
         local_40 = 10;
         String::parse_latin1((StrRange*)&local_60);
         StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
         ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
            RefCounted::_bind_methods();
         }

         RefCounted::initialize_class()::initialized =
         '\x01';
      }

      local_48 = "RefCounted";
      local_58 = 0;
      local_40 = 10;
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "AudioSample";
      local_60 = 0;
      local_40 = 0xb;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

      lVar2 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      initialize_class()::initialized =
      '\x01';
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* AudioStreamMP3::is_class(String const&) const */undefined8 AudioStreamMP3::is_class(AudioStreamMP3 *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long lVar4;
   long lVar5;
   char cVar6;
   undefined8 uVar7;
   long lVar8;
   long in_FS_OFFSET;
   bool bVar9;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar4 = *(long*)( lVar2 + 0x20 );
      if (lVar4 == 0) {
         local_60 = 0;
      }
 else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_0010d9ef;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0010d9ef:cVar6 = String::operator ==(param_1, (String*)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (cVar6 != '\0') goto LAB_0010daa3;
   }

   cVar6 = String::operator ==(param_1, "AudioStreamMP3");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_0010db8b;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }

               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         LAB_0010db8b:cVar6 = String::operator ==(param_1, (String*)&local_60);
         lVar4 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (cVar6 != '\0') goto LAB_0010daa3;
      }

      cVar6 = String::operator ==(param_1, "AudioStream");
      if (cVar6 == '\0') {
         for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
            lVar4 = *(long*)( lVar2 + 0x20 );
            if (lVar4 == 0) {
               local_60 = 0;
            }
 else {
               pcVar3 = *(char**)( lVar4 + 8 );
               local_60 = 0;
               if (pcVar3 == (char*)0x0) {
                  plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
                  if (*(long*)( lVar4 + 0x10 ) != 0) {
                     do {
                        lVar5 = *plVar1;
                        if (lVar5 == 0) goto LAB_0010dc67;
                        LOCK();
                        lVar8 = *plVar1;
                        bVar9 = lVar5 == lVar8;
                        if (bVar9) {
                           *plVar1 = lVar5 + 1;
                           lVar8 = lVar5;
                        }

                        UNLOCK();
                     }
 while ( !bVar9 );
                     if (lVar8 != -1) {
                        local_60 = *(long*)( lVar4 + 0x10 );
                     }

                  }

               }
 else {
                  local_50 = strlen(pcVar3);
                  local_58 = pcVar3;
                  String::parse_latin1((StrRange*)&local_60);
               }

            }

            LAB_0010dc67:cVar6 = String::operator ==(param_1, (String*)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (cVar6 != '\0') goto LAB_0010daa3;
         }

         cVar6 = String::operator ==(param_1, "Resource");
         if (cVar6 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
               return uVar7;
            }

            goto LAB_0010dce1;
         }

      }

   }

   LAB_0010daa3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010dce1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* AudioStreamPlaybackMP3::is_class(String const&) const */undefined8 AudioStreamPlaybackMP3::is_class(AudioStreamPlaybackMP3 *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long lVar4;
   long lVar5;
   char cVar6;
   undefined8 uVar7;
   long lVar8;
   long in_FS_OFFSET;
   bool bVar9;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar4 = *(long*)( lVar2 + 0x20 );
      if (lVar4 == 0) {
         local_60 = 0;
      }
 else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_0010dd8f;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0010dd8f:cVar6 = String::operator ==(param_1, (String*)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (cVar6 != '\0') goto LAB_0010de43;
   }

   cVar6 = String::operator ==(param_1, "AudioStreamPlaybackMP3");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_0010df2b;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }

               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         LAB_0010df2b:cVar6 = String::operator ==(param_1, (String*)&local_60);
         lVar4 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (cVar6 != '\0') goto LAB_0010de43;
      }

      cVar6 = String::operator ==(param_1, "AudioStreamPlaybackResampled");
      if (cVar6 == '\0') {
         for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
            lVar4 = *(long*)( lVar2 + 0x20 );
            if (lVar4 == 0) {
               local_60 = 0;
            }
 else {
               pcVar3 = *(char**)( lVar4 + 8 );
               local_60 = 0;
               if (pcVar3 == (char*)0x0) {
                  plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
                  if (*(long*)( lVar4 + 0x10 ) != 0) {
                     do {
                        lVar5 = *plVar1;
                        if (lVar5 == 0) goto LAB_0010e007;
                        LOCK();
                        lVar8 = *plVar1;
                        bVar9 = lVar5 == lVar8;
                        if (bVar9) {
                           *plVar1 = lVar5 + 1;
                           lVar8 = lVar5;
                        }

                        UNLOCK();
                     }
 while ( !bVar9 );
                     if (lVar8 != -1) {
                        local_60 = *(long*)( lVar4 + 0x10 );
                     }

                  }

               }
 else {
                  local_50 = strlen(pcVar3);
                  local_58 = pcVar3;
                  String::parse_latin1((StrRange*)&local_60);
               }

            }

            LAB_0010e007:cVar6 = String::operator ==(param_1, (String*)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (cVar6 != '\0') goto LAB_0010de43;
         }

         cVar6 = String::operator ==(param_1, "AudioStreamPlayback");
         if (cVar6 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
               return uVar7;
            }

            goto LAB_0010e081;
         }

      }

   }

   LAB_0010de43:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010e081:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* AudioStreamPlaybackMP3::_initialize_classv() */void AudioStreamPlaybackMP3::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (AudioStreamPlaybackResampled::initialize_class() == '\0') {
         if (AudioStreamPlayback::initialize_class() == '\0') {
            if (RefCounted::initialize_class() == '\0') {
               Object::initialize_class();
               local_68 = 0;
               local_50 = 6;
               local_58 = "Object";
               String::parse_latin1((StrRange*)&local_68);
               StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
               local_58 = "RefCounted";
               local_70 = 0;
               local_50 = 10;
               String::parse_latin1((StrRange*)&local_70);
               StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               if ((code*)PTR__bind_methods_0011d010 != RefCounted::_bind_methods) {
                  RefCounted::_bind_methods();
               }

               RefCounted::initialize_class()::initialized =
               '\x01';
            }

            local_68 = 0;
            local_58 = "RefCounted";
            local_50 = 10;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
            local_58 = "AudioStreamPlayback";
            local_70 = 0;
            local_50 = 0x13;
            String::parse_latin1((StrRange*)&local_70);
            StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            AudioStreamPlayback::_bind_methods();
            AudioStreamPlayback::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "AudioStreamPlayback";
         local_68 = 0;
         local_50 = 0x13;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "AudioStreamPlaybackResampled";
         local_70 = 0;
         local_50 = 0x1c;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         if ((code*)PTR__bind_methods_0011d008 != AudioStreamPlayback::_bind_methods) {
            AudioStreamPlaybackResampled::_bind_methods();
         }

         AudioStreamPlaybackResampled::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "AudioStreamPlaybackResampled";
      local_68 = 0;
      local_50 = 0x1c;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "AudioStreamPlaybackMP3";
      local_70 = 0;
      local_50 = 0x16;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<int>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   undefined8 local_88;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar5 = 0;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   puVar5[10] = 6;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_0010e51b;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC44;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 2);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010e610:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010e610;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *puVar5 = local_68._0_4_;
   if (*(long*)( puVar5 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 2 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
   }

   if (*(long*)( puVar5 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar5 + 4 ) = uVar3;
   }

   puVar5[6] = local_50;
   if (*(long*)( puVar5 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 8 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( puVar5 + 8 ) = lVar4;
   }

   puVar5[10] = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   LAB_0010e51b:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBindT<double>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<double>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   undefined8 local_88;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar5 = 0;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   puVar5[10] = 6;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_0010e75b;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC44;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 3);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010e850:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010e850;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *puVar5 = local_68._0_4_;
   if (*(long*)( puVar5 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 2 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
   }

   if (*(long*)( puVar5 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar5 + 4 ) = uVar3;
   }

   puVar5[6] = local_50;
   if (*(long*)( puVar5 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 8 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( puVar5 + 8 ) = lVar4;
   }

   puVar5[10] = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   LAB_0010e75b:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBindT<bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<bool>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   undefined8 local_88;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar5 = 0;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   puVar5[10] = 6;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_0010e99b;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC44;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 1);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010ea90:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010ea90;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *puVar5 = local_68._0_4_;
   if (*(long*)( puVar5 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 2 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
   }

   if (*(long*)( puVar5 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar5 + 4 ) = uVar3;
   }

   puVar5[6] = local_50;
   if (*(long*)( puVar5 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 8 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( puVar5 + 8 ) = lVar4;
   }

   puVar5[10] = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   LAB_0010e99b:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Resource::_get_property_listv(Resource *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   undefined4 *puVar4;
   long in_FS_OFFSET;
   StringName *local_a0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   long local_70;
   long local_68;
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "Resource";
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Resource";
   local_98 = 0;
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_0010ed2d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010ed2d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010ed4f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010ed4f:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   local_a0 = (StringName*)&local_68;
   puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   *(undefined8*)( puVar4 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
   *puVar4 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), local_a0);
   puVar4[6] = local_60;
   if (*(long*)( puVar4 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_58);
   }

   puVar4[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(long**)( puVar4 + 0x10 ) = plVar1;
   *(long*)( puVar4 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar4;
   }

   plVar1[1] = (long)puVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar4;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   lVar2 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "Resource", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioSample::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void AudioSample::_get_property_listv(AudioSample *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   undefined4 *puVar4;
   long in_FS_OFFSET;
   StringName *local_a8;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   long local_70;
   long local_68;
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "AudioSample";
   local_70 = 0xb;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "AudioSample";
   local_98 = 0;
   local_70 = 0xb;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_0010f115:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010f115;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010f137;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010f137:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   local_a8 = (StringName*)&local_68;
   puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   *(undefined8*)( puVar4 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
   *puVar4 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), local_a8);
   puVar4[6] = local_60;
   if (*(long*)( puVar4 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_58);
   }

   puVar4[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(long**)( puVar4 + 0x10 ) = plVar1;
   *(long*)( puVar4 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar4;
   }

   plVar1[1] = (long)puVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar4;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   lVar2 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "AudioSample", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStream::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void AudioStream::_get_property_listv(AudioStream *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   undefined4 *puVar4;
   long in_FS_OFFSET;
   StringName *local_a8;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   long local_70;
   long local_68;
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Resource::_get_property_listv((Resource*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "AudioStream";
   local_70 = 0xb;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "AudioStream";
   local_98 = 0;
   local_70 = 0xb;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_0010f505:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010f505;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010f527;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010f527:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   local_a8 = (StringName*)&local_68;
   puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   *(undefined8*)( puVar4 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
   *puVar4 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), local_a8);
   puVar4[6] = local_60;
   if (*(long*)( puVar4 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_58);
   }

   puVar4[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(long**)( puVar4 + 0x10 ) = plVar1;
   *(long*)( puVar4 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar4;
   }

   plVar1[1] = (long)puVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar4;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   lVar2 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "AudioStream", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Resource::_get_property_listv((Resource*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStreamMP3::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void AudioStreamMP3::_get_property_listv(AudioStreamMP3 *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
   undefined4 *puVar5;
   long in_FS_OFFSET;
   StringName *local_a0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   long local_70;
   long local_68;
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      AudioStream::_get_property_listv((AudioStream*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "AudioStreamMP3";
   local_70 = 0xe;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "AudioStreamMP3";
   local_98 = 0;
   local_70 = 0xe;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_0010f8f8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010f8f8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010f91a;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010f91a:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   local_a0 = (StringName*)&local_68;
   puVar5 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   *(undefined8*)( puVar5 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0xc ) = (undefined1[16])0x0;
   *puVar5 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), local_a0);
   puVar5[6] = local_60;
   if (*(long*)( puVar5 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_58);
   }

   lVar3 = local_58;
   puVar5[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar5 + 0xc ) = 0;
   *(long**)( puVar5 + 0x10 ) = plVar1;
   *(long*)( puVar5 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar5;
   }

   plVar1[1] = (long)puVar5;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar5;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "AudioStreamMP3", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         AudioStream::_get_property_listv((AudioStream*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStreamPlayback::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void AudioStreamPlayback::_get_property_listv(AudioStreamPlayback *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
   undefined4 *puVar5;
   long in_FS_OFFSET;
   StringName *local_a0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   long local_70;
   long local_68;
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "AudioStreamPlayback";
   local_70 = 0x13;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "AudioStreamPlayback";
   local_98 = 0;
   local_70 = 0x13;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_0010fce8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010fce8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010fd0a;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010fd0a:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   local_a0 = (StringName*)&local_68;
   puVar5 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   *(undefined8*)( puVar5 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0xc ) = (undefined1[16])0x0;
   *puVar5 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), local_a0);
   puVar5[6] = local_60;
   if (*(long*)( puVar5 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_58);
   }

   lVar3 = local_58;
   puVar5[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar5 + 0xc ) = 0;
   *(long**)( puVar5 + 0x10 ) = plVar1;
   *(long*)( puVar5 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar5;
   }

   plVar1[1] = (long)puVar5;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar5;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "AudioStreamPlayback", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStreamPlaybackResampled::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */void AudioStreamPlaybackResampled::_get_property_listv(AudioStreamPlaybackResampled *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   undefined4 *puVar4;
   long in_FS_OFFSET;
   StringName *local_a8;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   long local_70;
   long local_68;
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      AudioStreamPlayback::_get_property_listv((AudioStreamPlayback*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "AudioStreamPlaybackResampled";
   local_70 = 0x1c;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "AudioStreamPlaybackResampled";
   local_98 = 0;
   local_70 = 0x1c;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_001100cd:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001100cd;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x001100ef;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x001100ef:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   local_a8 = (StringName*)&local_68;
   puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   *(undefined8*)( puVar4 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
   *puVar4 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), local_a8);
   puVar4[6] = local_60;
   if (*(long*)( puVar4 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_58);
   }

   puVar4[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(long**)( puVar4 + 0x10 ) = plVar1;
   *(long*)( puVar4 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar4;
   }

   plVar1[1] = (long)puVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar4;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   lVar2 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "AudioStreamPlaybackResampled", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         AudioStreamPlayback::_get_property_listv((AudioStreamPlayback*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStreamPlaybackMP3::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void AudioStreamPlaybackMP3::_get_property_listv(AudioStreamPlaybackMP3 *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   undefined4 *puVar4;
   long in_FS_OFFSET;
   StringName *local_a0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   long local_70;
   long local_68;
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      AudioStreamPlaybackResampled::_get_property_listv((AudioStreamPlaybackResampled*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "AudioStreamPlaybackMP3";
   local_70 = 0x16;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "AudioStreamPlaybackMP3";
   local_98 = 0;
   local_70 = 0x16;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_001104bd:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001104bd;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x001104df;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x001104df:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   local_a0 = (StringName*)&local_68;
   puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   *(undefined8*)( puVar4 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
   *puVar4 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), local_a0);
   puVar4[6] = local_60;
   if (*(long*)( puVar4 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_58);
   }

   puVar4[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(long**)( puVar4 + 0x10 ) = plVar1;
   *(long*)( puVar4 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar4;
   }

   plVar1[1] = (long)puVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar4;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   lVar2 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "AudioStreamPlaybackMP3", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         AudioStreamPlaybackResampled::_get_property_listv((AudioStreamPlaybackResampled*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRS<Ref<AudioStreamMP3>, String const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRS<Ref<AudioStreamMP3>,String_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   undefined8 uVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_b0;
   undefined8 local_a8;
   long local_a0;
   long local_98;
   undefined1 local_90[16];
   undefined8 local_80;
   long local_78;
   undefined4 local_70;
   char *local_68;
   long local_60;
   ulong local_58;
   undefined4 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = 0;
   if (in_EDX == 0) {
      local_80 = 0;
      local_90._0_8_ = 0;
      local_90._8_8_ = 0;
      local_78 = 0;
      local_70 = 6;
      local_a0 = 0;
      local_a8 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_a8);
      local_b0 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_68, 4, (CowData<char32_t>*)&local_b0, 0, (StrRange*)&local_a8, 6, &local_a0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
         StringName::unref();
      }

      local_98 = CONCAT44(local_98._4_4_, local_68._0_4_);
      if (local_90._0_8_ != local_60) {
         CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
         local_90._0_8_ = local_60;
         local_60 = 0;
      }

      if (local_90._8_8_ != local_58) {
         StringName::unref();
         local_90._8_8_ = local_58;
         local_58 = 0;
      }

      local_80 = CONCAT44(local_80._4_4_, local_50);
      if (local_78 != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         local_78 = local_48;
         local_48 = 0;
      }

      local_70 = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
      uVar3 = local_90._8_8_;
      uVar2 = local_90._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_90._8_8_;
      local_90 = auVar1 << 0x40;
      *puVar4 = (undefined4)local_98;
      *(undefined8*)( puVar4 + 2 ) = uVar2;
      *(undefined8*)( puVar4 + 4 ) = uVar3;
      puVar4[6] = (undefined4)local_80;
      *(long*)( puVar4 + 8 ) = local_78;
      puVar4[10] = local_70;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
      goto LAB_001109a4;
   }

   local_a0 = 0;
   local_60 = 0xe;
   local_68 = "AudioStreamMP3";
   String::parse_latin1((StrRange*)&local_a0);
   local_a8 = 0;
   *puVar4 = 0x18;
   puVar4[6] = 0x11;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_a0 == 0) {
      puVar4[10] = 6;
      LAB_001109d7:StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
      if (*(char**)( puVar4 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(char**)( puVar4 + 4 ) = local_68;
      }

   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_a0);
      puVar4[10] = 6;
      if (puVar4[6] == 0x11) goto LAB_001109d7;
      StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_98);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   LAB_001109a4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<AudioStreamMP3, Vector<unsigned char> const&>(void
   (AudioStreamMP3::*)(Vector<unsigned char> const&)) */MethodBind *create_method_bind<AudioStreamMP3,Vector<unsigned_char>const&>(_func_void_Vector_ptr *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_Vector_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001163d8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AudioStreamMP3";
   local_30 = 0xe;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<AudioStreamMP3, Vector<unsigned char>>(Vector<unsigned char>
   (AudioStreamMP3::*)() const) */MethodBind *create_method_bind<AudioStreamMP3,Vector<unsigned_char>>(_func_Vector *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_Vector**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00116438;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AudioStreamMP3";
   local_30 = 0xe;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<AudioStreamMP3, bool>(void (AudioStreamMP3::*)(bool)) */MethodBind *create_method_bind<AudioStreamMP3,bool>(_func_void_bool *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00116498;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AudioStreamMP3";
   local_30 = 0xe;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<AudioStreamMP3, bool>(bool (AudioStreamMP3::*)() const) */MethodBind *create_method_bind<AudioStreamMP3,bool>(_func_bool *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001164f8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AudioStreamMP3";
   local_30 = 0xe;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<AudioStreamMP3, double>(void (AudioStreamMP3::*)(double)) */MethodBind *create_method_bind<AudioStreamMP3,double>(_func_void_double *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_double**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00116558;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AudioStreamMP3";
   local_30 = 0xe;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<AudioStreamMP3, double>(double (AudioStreamMP3::*)() const) */MethodBind *create_method_bind<AudioStreamMP3,double>(_func_double *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_double**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001165b8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AudioStreamMP3";
   local_30 = 0xe;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<AudioStreamMP3, int>(void (AudioStreamMP3::*)(int)) */MethodBind *create_method_bind<AudioStreamMP3,int>(_func_void_int *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00116618;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AudioStreamMP3";
   local_30 = 0xe;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<AudioStreamMP3, int>(int (AudioStreamMP3::*)() const) */MethodBind *create_method_bind<AudioStreamMP3,int>(_func_int *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00116678;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AudioStreamMP3";
   local_30 = 0xe;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStreamMP3::_bind_methods() [clone .cold] */void AudioStreamMP3::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::resize<false>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_00111422(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* AudioStreamMP3::load_from_buffer(Vector<unsigned char> const&) [clone .cold] */void AudioStreamMP3::load_from_buffer(Vector *param_1) {
   code *pcVar1;
   Vector *unaff_R13;
   set_data((AudioStreamMP3*)0x0, unaff_R13);
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* AudioStreamMP3::_initialize_classv() */void AudioStreamMP3::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (AudioStream::initialize_class() == '\0') {
         if (Resource::initialize_class() == '\0') {
            if (RefCounted::initialize_class() == '\0') {
               Object::initialize_class();
               local_68 = 0;
               local_50 = 6;
               local_58 = "Object";
               String::parse_latin1((StrRange*)&local_68);
               StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
               local_58 = "RefCounted";
               local_70 = 0;
               local_50 = 10;
               String::parse_latin1((StrRange*)&local_70);
               StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               if ((code*)PTR__bind_methods_0011d010 != RefCounted::_bind_methods) {
                  RefCounted::_bind_methods();
               }

               RefCounted::initialize_class()::initialized =
               '\x01';
            }

            local_68 = 0;
            local_58 = "RefCounted";
            local_50 = 10;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
            local_58 = "Resource";
            local_70 = 0;
            local_50 = 8;
            String::parse_latin1((StrRange*)&local_70);
            StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            Resource::_bind_methods();
            Resource::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "Resource";
         local_68 = 0;
         local_50 = 8;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "AudioStream";
         local_70 = 0;
         local_50 = 0xb;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         if ((code*)PTR__bind_methods_0011d018 != Resource::_bind_methods) {
            AudioStream::_bind_methods();
         }

         AudioStream::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "AudioStream";
      local_68 = 0;
      local_50 = 0xb;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "AudioStreamMP3";
      local_70 = 0;
      local_50 = 0xe;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      _bind_methods();
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<unsigned char>::_unref() */void CowData<unsigned_char>::_unref(CowData<unsigned_char> *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 != 0) {
      *(undefined8*)this = 0;
      return;
   }

   lVar2 = *(long*)this;
   *(undefined8*)this = 0;
   Memory::free_static((void*)( lVar2 + -0x10 ), false);
   return;
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
/* WARNING: Removing unreachable block (ram,0x00111a68) *//* WARNING: Removing unreachable block (ram,0x00111bfd) *//* WARNING: Removing unreachable block (ram,0x00111c09) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
   Variant *this;
   int iVar1;
   long in_FS_OFFSET;
   Array local_c8[8];
   undefined8 local_c0[9];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, param_3);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c8);
   iVar1 = (int)local_c8;
   Array::resize(iVar1);
   this(Variant * Array::operator [](iVar1));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, param_2);
   *param_1 = local_c0[0];
   Array::~Array(local_c8);
   if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   int iVar2;
   long *plVar4;
   undefined4 in_register_00000014;
   long *plVar5;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   Variant *pVVar3;
   plVar5 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar5 != (long*)0x0 ) && ( plVar5[1] != 0 ) ) && ( *(char*)( plVar5[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar5[1] == 0) {
         plVar4 = (long*)plVar5[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *plVar5 + 0x40 ) )(plVar5);
         }

      }
 else {
         plVar4 = (long*)( plVar5[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC172, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00111e00;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar3 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar3 & 1 ) != 0) {
            pVVar3 = *(Variant**)( pVVar3 + *(long*)( (long)plVar5 + (long)pVVar1 ) + -1 );
         }

         iVar2 = ( *(code*)pVVar3 )();
         Variant::Variant((Variant*)local_48, iVar2);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
      }
 else {
         *in_R9 = 4;
         in_R9[2] = 0;
      }

   }
 else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }

   LAB_00111e00:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<int>::validated_call(MethodBindTRC<int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   int iVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001120a4;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   iVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(long*)( param_3 + 8 ) = (long)iVar1;
   LAB_001120a4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<int>::ptrcall(MethodBindTRC<int> *this, Object *param_1, void **param_2, void *param_3) {
   int iVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00112263;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   iVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(long*)param_3 = (long)iVar1;
   LAB_00112263:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<int>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar1 = param_2[0x23];
         if (pVVar1 == (Variant*)0x0) {
            pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_001125a1;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0011242c. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_001125a1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */void MethodBindT<int>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar1 = (long*)param_2[0x23];
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar1 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00112781;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0011260b. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_00112781:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<double>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<double>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   long *plVar4;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   double dVar5;
   long local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar4[1] == 0) {
         plVar3 = (long*)plVar4[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
         }

      }
 else {
         plVar3 = (long*)( plVar4[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC172, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00112850;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar2 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar2 & 1 ) != 0) {
            pVVar2 = *(Variant**)( pVVar2 + *(long*)( (long)plVar4 + (long)pVVar1 ) + -1 );
         }

         dVar5 = (double)( *(code*)pVVar2 )();
         Variant::Variant((Variant*)local_48, dVar5);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
      }
 else {
         *in_R9 = 4;
         in_R9[2] = 0;
      }

   }
 else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }

   LAB_00112850:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<double>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<double>::validated_call(MethodBindTRC<double> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   undefined8 uVar3;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00112a64;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar3 = ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ));
   *(undefined8*)( param_3 + 8 ) = uVar3;
   LAB_00112a64:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<double>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<double>::ptrcall(MethodBindTRC<double> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   undefined8 uVar3;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00112c13;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar3 = ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ));
   *(undefined8*)param_3 = uVar3;
   LAB_00112c13:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<double>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<double>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar1 = param_2[0x23];
         if (pVVar1 == (Variant*)0x0) {
            pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00112f51;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00112dde. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( *(long*)param_3 + 8 ), (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_00112f51:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<double>::ptrcall(Object*, void const**, void*) const */void MethodBindT<double>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar1 = (long*)param_2[0x23];
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar1 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00113131;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00112fbd. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(**param_3, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_00113131:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   bool bVar2;
   long *plVar4;
   undefined4 in_register_00000014;
   long *plVar5;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   Variant *pVVar3;
   plVar5 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar5 != (long*)0x0 ) && ( plVar5[1] != 0 ) ) && ( *(char*)( plVar5[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar5[1] == 0) {
         plVar4 = (long*)plVar5[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *plVar5 + 0x40 ) )(plVar5);
         }

      }
 else {
         plVar4 = (long*)( plVar5[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC172, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00113200;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar3 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar3 & 1 ) != 0) {
            pVVar3 = *(Variant**)( pVVar3 + *(long*)( (long)plVar5 + (long)pVVar1 ) + -1 );
         }

         bVar2 = (bool)( *(code*)pVVar3 )();
         Variant::Variant((Variant*)local_48, bVar2);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
      }
 else {
         *in_R9 = 4;
         in_R9[2] = 0;
      }

   }
 else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }

   LAB_00113200:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<bool>::validated_call(MethodBindTRC<bool> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Variant VVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00113412;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   VVar1 = ( Variant )(*pcVar2)(param_1 + *(long*)( this + 0x60 ));
   param_3[8] = VVar1;
   LAB_00113412:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this, Object *param_1, void **param_2, void *param_3) {
   undefined1 uVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001135c1;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(undefined1*)param_3 = uVar1;
   LAB_001135c1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<bool>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar1 = param_2[0x23];
         if (pVVar1 == (Variant*)0x0) {
            pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00113901;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0011378d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined1*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_00113901:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */void MethodBindT<bool>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar1 = (long*)param_2[0x23];
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar1 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00113ae9;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00113972. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3 != '\0');
      return;
   }

   LAB_00113ae9:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<Vector<unsigned char>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTRC<Vector<unsigned_char>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   Variant *pVVar3;
   long *plVar4;
   undefined4 in_register_00000014;
   long *plVar5;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   char *local_58;
   long local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar5 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar5 != (long*)0x0 ) && ( plVar5[1] != 0 ) ) && ( *(char*)( plVar5[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar5[1] == 0) {
         plVar4 = (long*)plVar5[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *plVar5 + 0x40 ) )(plVar5);
         }

      }
 else {
         plVar4 = (long*)( plVar5[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC172, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00113bf0;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar3 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar3 & 1 ) != 0) {
            pVVar3 = *(Variant**)( pVVar3 + *(long*)( (long)plVar5 + (long)pVVar1 ) + -1 );
         }

         ( *(code*)pVVar3 )((Vector*)&local_58);
         Variant::Variant((Variant*)local_48, (Vector*)&local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         lVar2 = local_50;
         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         if (local_50 != 0) {
            LOCK();
            plVar5 = (long*)( local_50 + -0x10 );
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

      }
 else {
         *in_R9 = 4;
         in_R9[2] = 0;
      }

   }
 else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }

   LAB_00113bf0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector<unsigned char>>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Vector<unsigned_char>>::validated_call(MethodBindTRC<Vector<unsigned_char>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   code *pcVar2;
   long *plVar3;
   Variant **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Variant **local_48;
   long local_40[2];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (Variant**)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Variant**)0x111c58;
         local_40[0] = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00113e5b;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar2 = *(code**)( pcVar2 + (long)param_2 + -1 );
   }

   ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   if (*(long*)( *(long*)( param_3 + 8 ) + 0x18 ) != local_40[0]) {
      CowData<unsigned_char>::_ref((CowData<unsigned_char>*)( *(long*)( param_3 + 8 ) + 0x18 ), (CowData*)local_40);
   }

   lVar1 = local_40[0];
   if (local_40[0] != 0) {
      LOCK();
      plVar3 = (long*)( local_40[0] + -0x10 );
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
         local_40[0] = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   LAB_00113e5b:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector<unsigned char>>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Vector<unsigned_char>>::ptrcall(MethodBindTRC<Vector<unsigned_char>> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   code *pcVar2;
   long *plVar3;
   void **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   void **local_48;
   long local_40[2];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (void**)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (void**)0x111c58;
         local_40[0] = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00114057;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar2 = *(code**)( pcVar2 + (long)param_2 + -1 );
   }

   ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   if (*(long*)( (long)param_3 + 8 ) != local_40[0]) {
      CowData<unsigned_char>::_ref((CowData<unsigned_char>*)( (long)param_3 + 8 ), (CowData*)local_40);
   }

   lVar1 = local_40[0];
   if (local_40[0] != 0) {
      LOCK();
      plVar3 = (long*)( local_40[0] + -0x10 );
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
         local_40[0] = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   LAB_00114057:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Vector<unsigned char> const&>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindT<Vector<unsigned_char>const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar1 = param_2[0x23];
         if (pVVar1 == (Variant*)0x0) {
            pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00114399;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00114221. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)( *(long*)param_3 + 8 ) + 0x10);
      return;
   }

   LAB_00114399:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Vector<unsigned char> const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Vector<unsigned_char>const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar1 = (long*)param_2[0x23];
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar1 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00114571;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x001143f9. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }

   LAB_00114571:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Vector<unsigned char> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindT<Vector<unsigned_char>const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   long *plVar7;
   long lVar8;
   undefined4 in_register_00000014;
   long *plVar9;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar10;
   Variant *pVVar11;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40[2];
   long local_30;
   plVar9 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar9 != (long*)0x0 ) && ( plVar9[1] != 0 ) ) && ( *(char*)( plVar9[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (plVar9[1] == 0) {
         plVar7 = (long*)plVar9[0x23];
         if (plVar7 == (long*)0x0) {
            plVar7 = (long*)( **(code**)( *plVar9 + 0x40 ) )(plVar9);
         }

      }
 else {
         plVar7 = (long*)( plVar9[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar7) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40[0] = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC172, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00114720;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar11 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar10 = param_2[5];
      if (pVVar10 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_00114770;
         LAB_00114760:pVVar10 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00114770:uVar6 = 4;
            goto LAB_00114715;
         }

         if (in_R8D == 1) goto LAB_00114760;
         lVar8 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar8) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar10 = pVVar10 + lVar8 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar11 & 1 ) != 0) {
         pVVar11 = *(Variant**)( pVVar11 + *(long*)( (long)plVar9 + (long)pVVar1 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 0x1d);
      uVar4 = _LC56;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_Vector((Variant*)&local_48);
      ( *(code*)pVVar11 )((Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)&local_48);
      CowData<unsigned_char>::_unref((CowData<unsigned_char>*)local_40);
   }
 else {
      uVar6 = 3;
      LAB_00114715:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_00114720:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */void call_with_variant_args_dv<__UnexistingClass,int>(__UnexistingClass *param_1, _func_void_int *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   undefined4 in_register_0000000c;
   long lVar7;
   uint uVar8;
   Variant *this;
   long in_stack_00000008;
   uVar8 = (uint)param_5;
   if (1 < uVar8) {
      uVar6 = 3;
      goto LAB_00114a2d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_00114a90;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_00114a90:uVar6 = 4;
         LAB_00114a2d:*(undefined4*)param_6 = uVar6;
         *(undefined4*)( param_6 + 8 ) = 1;
         return;
      }

      if (uVar8 != 1) {
         lVar7 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar7) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this(Variant * )(lVar1 + lVar7 * 0x18);
         goto LAB_001149ab;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_001149ab:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_int**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC177;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_int(this);
   /* WARNING: Could not recover jumptable at 0x00114a06. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )((int)( param_1 + (long)param_3 ));
   return;
}
/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long *plVar1;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var2;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var2 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var2 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var2 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var2 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var2 + 8 ) == 0) {
         plVar1 = *(long**)( p_Var2 + 0x118 );
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( *(long*)p_Var2 + 0x40 ) )(p_Var2);
         }

      }
 else {
         plVar1 = (long*)( *(long*)( p_Var2 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC172, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00114af6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,int>(p_Var2, (_func_void_int*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_00114af6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, double>(__UnexistingClass*, void
   (__UnexistingClass::*)(double), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */void call_with_variant_args_dv<__UnexistingClass,double>(__UnexistingClass *param_1, _func_void_double *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   undefined4 in_register_0000000c;
   long lVar7;
   uint uVar8;
   Variant *this;
   double dVar9;
   long in_stack_00000008;
   uVar8 = (uint)param_5;
   if (1 < uVar8) {
      uVar6 = 3;
      goto LAB_00114dbd;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_00114e20;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_00114e20:uVar6 = 4;
         LAB_00114dbd:*(undefined4*)param_6 = uVar6;
         *(undefined4*)( param_6 + 8 ) = 1;
         return;
      }

      if (uVar8 != 1) {
         lVar7 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar7) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this(Variant * )(lVar1 + lVar7 * 0x18);
         goto LAB_00114d3b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_00114d3b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_double**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 3);
   uVar4 = _LC178;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   dVar9 = Variant::operator_cast_to_double(this);
   /* WARNING: Could not recover jumptable at 0x00114d94. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )(dVar9);
   return;
}
/* MethodBindT<double>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<double>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long *plVar1;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var2;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var2 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var2 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var2 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var2 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var2 + 8 ) == 0) {
         plVar1 = *(long**)( p_Var2 + 0x118 );
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( *(long*)p_Var2 + 0x40 ) )(p_Var2);
         }

      }
 else {
         plVar1 = (long*)( *(long*)( p_Var2 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC172, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00114e86;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,double>(p_Var2, (_func_void_double*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_00114e86:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */void call_with_variant_args_dv<__UnexistingClass,bool>(__UnexistingClass *param_1, _func_void_bool *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   undefined4 in_register_0000000c;
   long lVar7;
   uint uVar8;
   Variant *this;
   long in_stack_00000008;
   uVar8 = (uint)param_5;
   if (1 < uVar8) {
      uVar6 = 3;
      goto LAB_0011514d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_001151b0;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_001151b0:uVar6 = 4;
         LAB_0011514d:*(undefined4*)param_6 = uVar6;
         *(undefined4*)( param_6 + 8 ) = 1;
         return;
      }

      if (uVar8 != 1) {
         lVar7 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar7) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this(Variant * )(lVar1 + lVar7 * 0x18);
         goto LAB_001150cb;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_001150cb:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_bool**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 1);
   uVar4 = _LC179;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_bool(this);
   /* WARNING: Could not recover jumptable at 0x00115127. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )(SUB81(param_1 + (long)param_3, 0));
   return;
}
/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long *plVar1;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var2;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var2 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var2 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var2 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var2 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var2 + 8 ) == 0) {
         plVar1 = *(long**)( p_Var2 + 0x118 );
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( *(long*)p_Var2 + 0x40 ) )(p_Var2);
         }

      }
 else {
         plVar1 = (long*)( *(long*)( p_Var2 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC172, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00115216;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,bool>(p_Var2, (_func_void_bool*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_00115216:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<Vector<unsigned char> const&>(int, int&, PropertyInfo&)
    */void call_get_argument_type_info_helper<Vector<unsigned_char>const&>(int param_1, int *param_2, PropertyInfo *param_3) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int iVar5;
   long in_FS_OFFSET;
   undefined8 local_98;
   long local_90;
   long local_88;
   long local_80;
   undefined *local_78;
   undefined1 local_70[16];
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar5 = *param_2;
   if (iVar5 != param_1) goto LAB_00115419;
   local_88 = 0;
   local_90 = 0;
   local_78 = &_LC44;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_70._8_8_;
   local_70 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_90);
   local_98 = 0;
   local_78 = (undefined*)CONCAT44(local_78._4_4_, 0x1d);
   local_60 = 0;
   local_58 = 0;
   local_70 = (undefined1[16])0x0;
   if (local_90 == 0) {
      LAB_00115518:local_50 = 6;
      StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 6;
      if (local_60 != 0x11) goto LAB_00115518;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_70._8_8_ == local_80) {
         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_70._8_8_ = local_80;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   *(undefined4*)param_3 = local_78._0_4_;
   if (*(long*)( param_3 + 8 ) != local_70._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
      uVar3 = local_70._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_70._8_8_;
      local_70 = auVar2 << 0x40;
      *(undefined8*)( param_3 + 8 ) = uVar3;
   }

   if (*(long*)( param_3 + 0x10 ) != local_70._8_8_) {
      StringName::unref();
      uVar3 = local_70._8_8_;
      local_70._8_8_ = 0;
      *(undefined8*)( param_3 + 0x10 ) = uVar3;
   }

   *(int*)( param_3 + 0x18 ) = local_60;
   if (*(long*)( param_3 + 0x20 ) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
      lVar4 = local_58;
      local_58 = 0;
      *(long*)( param_3 + 0x20 ) = lVar4;
   }

   *(undefined4*)( param_3 + 0x28 ) = local_50;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   iVar5 = *param_2;
   LAB_00115419:*param_2 = iVar5 + 1;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindTRS<Ref<AudioStreamMP3>, Vector<unsigned char> const&>::_gen_argument_type_info(int)
   const */undefined4 *MethodBindTRS<Ref<AudioStreamMP3>,Vector<unsigned_char>const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   undefined8 uVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_80;
   long local_78;
   ulong local_70;
   char *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX == 0) {
      local_68 = (char*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      local_60 = (undefined1[16])0x0;
      call_get_argument_type_info_helper<Vector<unsigned_char>const&>(0, (int*)&local_70, (PropertyInfo*)&local_68);
      uVar2 = local_60._0_8_;
      uVar3 = local_60._8_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *puVar4 = local_68._0_4_;
      *(undefined8*)( puVar4 + 2 ) = uVar2;
      *(undefined8*)( puVar4 + 4 ) = uVar3;
      puVar4[6] = (undefined4)local_50;
      *(undefined8*)( puVar4 + 8 ) = local_48;
      puVar4[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      goto LAB_001156c8;
   }

   local_70 = 0;
   local_78 = 0;
   local_68 = "AudioStreamMP3";
   local_60._8_8_ = local_60._0_8_;
   local_60._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   *puVar4 = 0x18;
   puVar4[6] = 0x11;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar4[10] = 6;
      LAB_001157c7:StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
      if (*(char**)( puVar4 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(char**)( puVar4 + 4 ) = local_68;
      }

   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_78);
      puVar4[10] = 6;
      if (puVar4[6] == 0x11) goto LAB_001157c7;
      StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_70);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_001156c8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Vector<unsigned char> const&>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<Vector<unsigned_char>const&>::_gen_argument_type_info(int param_1) {
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar1;
   long in_FS_OFFSET;
   int local_14;
   long local_10;
   pPVar1 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)pPVar1 = 0;
   *(undefined4*)( pPVar1 + 0x18 ) = 0;
   *(undefined8*)( pPVar1 + 0x20 ) = 0;
   *(undefined4*)( pPVar1 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar1 + 8 ) = (undefined1[16])0x0;
   local_14 = 0;
   call_get_argument_type_info_helper<Vector<unsigned_char>const&>(in_EDX, &local_14, pPVar1);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pPVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */void PropertyInfo::PropertyInfo(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* AudioSample::~AudioSample() */void AudioSample::~AudioSample(AudioSample *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<double>::~MethodBindTRC() */void MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<double>::~MethodBindT() */void MethodBindT<double>::~MethodBindT(MethodBindT<double> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Vector<unsigned char>>::~MethodBindTRC() */void MethodBindTRC<Vector<unsigned_char>>::~MethodBindTRC(MethodBindTRC<Vector<unsigned_char>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Vector<unsigned char> const&>::~MethodBindT() */void MethodBindT<Vector<unsigned_char>const&>::~MethodBindT(MethodBindT<Vector<unsigned_char>const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRS<Ref<AudioStreamMP3>, String const&>::~MethodBindTRS() */void MethodBindTRS<Ref<AudioStreamMP3>,String_const&>::~MethodBindTRS(MethodBindTRS<Ref<AudioStreamMP3>,String_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRS<Ref<AudioStreamMP3>, Vector<unsigned char> const&>::~MethodBindTRS() */void MethodBindTRS<Ref<AudioStreamMP3>,Vector<unsigned_char>const&>::~MethodBindTRS(MethodBindTRS<Ref<AudioStreamMP3>,Vector<unsigned_char>const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

