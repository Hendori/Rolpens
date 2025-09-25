/* joining_type(unsigned int) */undefined8 joining_type(uint param_1) {
   undefined8 uVar1;
   undefined8 in_RSI;
   if (param_1 < 0x1f000) {
      /* WARNING: Could not recover jumptable at 0x0010001d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar1 = ( *(code*)( &DAT_00107080 + *(int*)( &DAT_00107080 + ( ulong )(param_1 >> 0xc) * 4 ) ) )(param_1, in_RSI, &DAT_00107080 + *(int*)( &DAT_00107080 + ( ulong )(param_1 >> 0xc) * 4 ));
      return uVar1;
   }

   return 8;
}
/* deallocate_buffer_var(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */undefined8 deallocate_buffer_var(hb_ot_shape_plan_t *param_1, hb_font_t *param_2, hb_buffer_t *param_3) {
   param_3[0xb8] = ( hb_buffer_t )((byte)param_3[0xb8] & 0x7f);
   return 0;
}
/* OT::match_always(hb_glyph_info_t&, unsigned int, void const*) */undefined8 OT::match_always(hb_glyph_info_t *param_1, uint param_2, void *param_3) {
   return 1;
}
/* OT::match_glyph(hb_glyph_info_t&, unsigned int, void const*) */bool OT::match_glyph(hb_glyph_info_t *param_1, uint param_2, void *param_3) {
   return *(uint*)param_1 == param_2;
}
/* reorder_marks_arabic(hb_ot_shape_plan_t const*, hb_buffer_t*, unsigned int, unsigned int) */void reorder_marks_arabic(hb_ot_shape_plan_t *param_1, hb_buffer_t *param_2, uint param_3, uint param_4) {
   int *piVar1;
   void *__src;
   long lVar2;
   uint uVar3;
   int iVar4;
   size_t __n;
   int *piVar5;
   uint uVar6;
   ushort *puVar7;
   ushort uVar8;
   int *piVar9;
   uint uVar10;
   byte bVar11;
   long in_FS_OFFSET;
   undefined1 local_2c8[648];
   long local_40;
   bVar11 = 0xdc;
   lVar2 = *(long*)( param_2 + 0x70 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar10 = param_3;
   do {
      if (param_3 < param_4) {
         puVar7 = (ushort*)( lVar2 + 0x10 + (ulong)param_3 * 0x14 );
         while (( ( 0x1c00U >> ( *puVar7 & 0x1f ) & 1 ) == 0 || ( ( byte )(*puVar7 >> 8) < bVar11 ) )) {
            param_3 = param_3 + 1;
            puVar7 = puVar7 + 10;
            if (param_4 == param_3) goto LAB_001002e0;
         }
;
      }

      if (param_4 == param_3) goto LAB_001002e0;
      piVar1 = (int*)( lVar2 + (ulong)param_3 * 0x14 );
      if (( ( ( 0x1c00U >> ( *(ushort*)( piVar1 + 4 ) & 0x1f ) & 1 ) == 0 ) || ( ( byte )(*(ushort*)( piVar1 + 4 ) >> 8) <= bVar11 ) ) && ( piVar9= piVar1,uVar6 = param_3,param_3 < param_4 )) {
         while (( ( 0x1c00U >> ( *(ushort*)( piVar9 + 4 ) & 0x1f ) & 1 ) != 0 && ( ( byte )(*(ushort*)( piVar9 + 4 ) >> 8) == bVar11 ) )) {
            piVar5 = &modifier_combining_marks;
            while (*piVar9 != *piVar5) {
               piVar5 = piVar5 + 1;
               if (piVar5 == (int*)&DAT_00107178) goto LAB_0010033d;
            }
;
            uVar6 = uVar6 + 1;
            piVar9 = piVar9 + 5;
            if (param_4 == uVar6) break;
         }
;
         LAB_0010033d:if (param_3 == uVar6) goto LAB_001002c5;
         if (1 < uVar6 - uVar10) {
            hb_buffer_t::merge_clusters_impl((uint)param_2, uVar10);
         }

         __n = ( ulong )(uVar6 - param_3) * 0x14;
         __memmove_chk(local_2c8, piVar1, __n, 0x280);
         uVar3 = ( uVar10 - param_3 ) + uVar6;
         __src = (void*)( lVar2 + (ulong)uVar10 * 0x14 );
         memmove((void*)( lVar2 + (ulong)uVar3 * 0x14 ), __src, ( ulong )(param_3 - uVar10) * 0x14);
         memcpy(__src, local_2c8, __n);
         param_3 = uVar6;
         if (bVar11 != 0xdc) {
            if (uVar10 < uVar3) {
               uVar8 = 0x1a00;
               LAB_00100443:puVar7 = (ushort*)( lVar2 + 0x10 + (ulong)uVar10 * 0x14 );
               uVar6 = uVar10;
               do {
                  if (( 0x1c00U >> ( *puVar7 & 0x1f ) & 1 ) != 0) {
                     *puVar7 = *puVar7 & 0xff | uVar8;
                  }

                  uVar6 = uVar6 + 1;
                  puVar7 = puVar7 + 10;
               }
 while ( uVar6 < uVar3 );
               iVar4 = ( uVar3 - uVar10 ) + -1;
               if (uVar3 < uVar10 + 1) {
                  iVar4 = 0;
               }

               uVar10 = uVar10 + 1 + iVar4;
               goto LAB_001002c5;
            }

            LAB_001002e0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            return;
         }

         uVar8 = 0x1900;
         if (uVar10 < uVar3) goto LAB_00100443;
      }
 else {
         LAB_001002c5:if (bVar11 == 0xe6) goto LAB_001002e0;
      }

      bVar11 = 0xe6;
   }
 while ( true );
}
/* collect_features_arabic(hb_ot_shape_planner_t*) */void collect_features_arabic(hb_ot_shape_planner_t *param_1) {
   hb_ot_shape_planner_t *phVar1;
   undefined4 uVar2;
   char cVar3;
   byte bVar4;
   char *pcVar5;
   uint uVar6;
   phVar1 = param_1 + 0x28;
   pcVar5 = "losianif2nif3nifidem2demtini";
   hb_ot_map_builder_t::add_feature(phVar1, 0x73746368, 1, 1);
   uVar6 = (uint)phVar1;
   hb_ot_map_builder_t::add_pause(uVar6, (_func_bool_hb_ot_shape_plan_t_ptr_hb_font_t_ptr_hb_buffer_t_ptr*)0x0);
   hb_ot_map_builder_t::add_feature(phVar1, 0x63636d70, 9, 1);
   hb_ot_map_builder_t::add_feature(phVar1, 0x6c6f636c, 9, 1);
   hb_ot_map_builder_t::add_pause(uVar6, (_func_bool_hb_ot_shape_plan_t_ptr_hb_font_t_ptr_hb_buffer_t_ptr*)0x0);
   do {
      bVar4 = 8;
      if (*(int*)( param_1 + 0xc ) == 0x41726162) {
         bVar4 = ( 1 < ( byte )(*pcVar5 - 0x32U) ) * '\x02' | 8;
      }

      uVar2 = *(undefined4*)pcVar5;
      pcVar5 = pcVar5 + 4;
      hb_ot_map_builder_t::add_feature(phVar1, uVar2, bVar4, 1);
      hb_ot_map_builder_t::add_pause(uVar6, (_func_bool_hb_ot_shape_plan_t_ptr_hb_font_t_ptr_hb_buffer_t_ptr*)0x0);
   }
 while ( pcVar5 != "" );
   hb_ot_map_builder_t::add_pause(uVar6, (_func_bool_hb_ot_shape_plan_t_ptr_hb_font_t_ptr_hb_buffer_t_ptr*)0x0);
   hb_ot_map_builder_t::add_feature(phVar1, 0x726c6967, 0xb, 1);
   if (*(int*)( param_1 + 0xc ) == 0x41726162) {
      hb_ot_map_builder_t::add_pause(uVar6, (_func_bool_hb_ot_shape_plan_t_ptr_hb_font_t_ptr_hb_buffer_t_ptr*)0x0);
   }

   hb_ot_map_builder_t::add_feature(phVar1, 0x63616c74, 9, 1);
   cVar3 = hb_ot_map_builder_t::has_feature(uVar6);
   if (cVar3 == '\0') {
      hb_ot_map_builder_t::add_pause(uVar6, (_func_bool_hb_ot_shape_plan_t_ptr_hb_font_t_ptr_hb_buffer_t_ptr*)0x0);
   }

   hb_ot_map_builder_t::add_feature(phVar1, 0x6c696761, 9, 1);
   hb_ot_map_builder_t::add_feature(phVar1, 0x636c6967, 9, 1);
   hb_ot_map_builder_t::add_feature(phVar1, 0x6d736574, 9, 1);
   return;
}
/* record_stch(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */undefined8 record_stch(hb_ot_shape_plan_t *param_1, hb_font_t *param_2, hb_buffer_t *param_3) {
   byte *pbVar1;
   byte *pbVar2;
   byte bVar3;
   if (( *(byte*)( *(long*)( param_1 + 0x88 ) + 0x28 ) & 2 ) != 0) {
      if (*(uint*)( param_3 + 0x60 ) != 0) {
         pbVar2 = (byte*)( *(long*)( param_3 + 0x70 ) + 0xc );
         pbVar1 = pbVar2 + ( ulong ) * (uint*)( param_3 + 0x60 ) * 0x14;
         do {
            if (( *pbVar2 & 0x40 ) != 0) {
               bVar3 = ( pbVar2[2] & 1 ) + 8;
               if (( pbVar2[2] & 0x10 ) != 0) {
                  bVar3 = 8;
               }

               pbVar2[7] = bVar3;
               *(uint*)( param_3 + 0xc0 ) = *(uint*)( param_3 + 0xc0 ) | 0x1000000;
            }

            pbVar2 = pbVar2 + 0x14;
         }
 while ( pbVar2 != pbVar1 );
      }

   }

   return 0;
}
/* arabic_fallback_plan_destroy(arabic_fallback_plan_t*) [clone .part.0] */void arabic_fallback_plan_destroy(arabic_fallback_plan_t *param_1) {
   long lVar1;
   long lVar2;
   if (*(int*)param_1 != 0) {
      lVar2 = 0;
      LAB_00100741:do {
         if (*(long*)( param_1 + lVar2 * 8 + 0x28 ) != 0) {
            free(*(void**)( param_1 + lVar2 * 8 + 0x60 ));
            if (param_1[4] != (arabic_fallback_plan_t)0x0) {
               lVar1 = lVar2 * 8;
               lVar2 = lVar2 + 1;
               free(*(void**)( param_1 + lVar1 + 0x28 ));
               if (*(uint*)param_1 <= (uint)lVar2) break;
               goto LAB_00100741;
            }

         }

         lVar2 = lVar2 + 1;
      }
 while ( (uint)lVar2 < *(uint*)param_1 );
   }

   free(param_1);
   return;
}
/* fasthash64(void const*, unsigned long, unsigned long) [clone .constprop.0] */ulong fasthash64(void *param_1, ulong param_2, ulong param_3) {
   ulong uVar1;
   ulong uVar2;
   ulong *puVar3;
   puVar3 = (ulong*)( ( param_2 & 0xfffffffffffffff8 ) + (long)param_1 );
   uVar1 = param_2 * -0x77fcaa0de192e69b ^ 0xf437ffe6;
   if (( (ulong)param_1 & 7 ) == 0) {
      if ((ulong*)param_1 != puVar3) {
         do {
            /* WARNING: Load size is inaccurate */
            uVar2 = *param_1;
            param_1 = (void*)( (long)param_1 + 8 );
            uVar2 = ( uVar2 >> 0x17 ^ uVar2 ) * 0x2127599bf4325c37;
            uVar1 = ( uVar2 ^ uVar2 >> 0x2f ^ uVar1 ) * -0x77fcaa0de192e69b;
         }
 while ( puVar3 != (ulong*)param_1 );
      }

   }
 else if ((ulong*)param_1 != puVar3) {
      do {
         /* WARNING: Load size is inaccurate */
         uVar2 = *param_1;
         param_1 = (void*)( (long)param_1 + 8 );
         uVar2 = ( uVar2 >> 0x17 ^ uVar2 ) * 0x2127599bf4325c37;
         uVar1 = ( uVar2 ^ uVar2 >> 0x2f ^ uVar1 ) * -0x77fcaa0de192e69b;
      }
 while ( puVar3 != (ulong*)param_1 );
   }

   switch ((uint)param_2 & 7) {
      case 0:
    goto switchD_00100800_caseD_0;
      case 1:
    uVar2 = 0;
    goto LAB_00100841;
      case 2:
    uVar2 = 0;
    goto LAB_00100836;
      case 3:
    uVar2 = 0;
    goto LAB_0010082b;
      case 4:
    uVar2 = 0;
    goto LAB_00100820;
      case 5:
    uVar2 = 0;
    goto LAB_00100815;
      case 6:
    uVar2 = 0;
    break;
      case 7:
    uVar2 = (ulong)*(byte *)((long)puVar3 + 6) << 0x30;
   }

   uVar2 = ( ulong ) * (byte*)( (long)puVar3 + 5 ) << 0x28 ^ uVar2;
   LAB_00100815:uVar2 = ( ulong ) * (byte*)( (long)puVar3 + 4 ) << 0x20 ^ uVar2;
   LAB_00100820:uVar2 = ( ulong ) * (byte*)( (long)puVar3 + 3 ) << 0x18 ^ uVar2;
   LAB_0010082b:uVar2 = ( ulong ) * (byte*)( (long)puVar3 + 2 ) << 0x10 ^ uVar2;
   LAB_00100836:uVar2 = ( ulong ) * (byte*)( (long)puVar3 + 1 ) << 8 ^ uVar2;
   LAB_00100841:uVar2 = ( uVar2 >> 0x17 ^ ( byte ) * puVar3 ^ uVar2 ) * 0x2127599bf4325c37;
   uVar1 = ( uVar2 ^ uVar1 ^ uVar2 >> 0x2f ) * -0x77fcaa0de192e69b;
   switchD_00100800_caseD_0:uVar1 = ( uVar1 >> 0x17 ^ uVar1 ) * 0x2127599bf4325c37;
   return uVar1 >> 0x2f ^ uVar1;
}
/* bool 
   OT::Layout::Common::Coverage::collect_coverage<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned
   long, 4u>, hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 0u>,
   hb_set_digest_bits_pattern_t<unsigned long, 9u> > >
   >(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 4u>,
   hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 0u>,
   hb_set_digest_bits_pattern_t<unsigned long, 9u> > >*) const [clone .isra.0] */bool OT::Layout::Common::Coverage::collect_coverage<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>(Coverage *this, hb_set_digest_combiner_t *param_1) {
   Coverage *pCVar1;
   Coverage *pCVar2;
   Coverage CVar3;
   ushort uVar4;
   long lVar5;
   ushort uVar6;
   ushort uVar7;
   bool bVar8;
   byte bVar9;
   byte bVar10;
   ushort uVar11;
   ushort uVar12;
   Coverage *pCVar13;
   Coverage *pCVar14;
   ushort uVar15;
   ulong uVar16;
   ulong uVar17;
   byte bVar18;
   ulong uVar19;
   if (*(short*)this == 0x100) {
      pCVar14 = this + 4;
      uVar12 = *(ushort*)( this + 2 ) << 8 | *(ushort*)( this + 2 ) >> 8;
      if (uVar12 != 0) {
         uVar17 = *(ulong*)param_1;
         pCVar2 = this + ( ulong )(uVar12 + 2) * 2;
         pCVar13 = pCVar14;
         do {
            uVar12 = *(ushort*)pCVar13;
            pCVar13 = pCVar13 + 2;
            uVar17 = uVar17 | 1L << ( ( byte )(( ushort )(uVar12 << 8 | uVar12 >> 8) >> 4) & 0x3f );
         }
 while ( pCVar13 != pCVar2 );
         *(ulong*)param_1 = uVar17;
         uVar17 = *(ulong*)( param_1 + 8 );
         pCVar13 = pCVar14;
         do {
            pCVar1 = pCVar13 + 1;
            pCVar13 = pCVar13 + 2;
            uVar17 = uVar17 | 1L << ( ( byte ) * pCVar1 & 0x3f );
         }
 while ( pCVar13 != pCVar2 );
         uVar19 = *(ulong*)( param_1 + 0x10 );
         *(ulong*)( param_1 + 8 ) = uVar17;
         do {
            CVar3 = *pCVar14;
            pCVar14 = pCVar14 + 2;
            uVar19 = uVar19 | 1L << ( (byte)CVar3 >> 1 & 0x3f );
         }
 while ( pCVar14 != pCVar2 );
         *(ulong*)( param_1 + 0x10 ) = uVar19;
      }

   }
 else if (*(short*)this == 0x200) {
      pCVar14 = this + 4;
      lVar5 = ( ulong )(ushort)(*(ushort*)( this + 2 ) << 8 | *(ushort*)( this + 2 ) >> 8) * 6;
      pCVar2 = pCVar14 + lVar5;
      if (lVar5 != 0) {
         do {
            uVar12 = *(ushort*)( pCVar14 + 2 );
            uVar4 = *(ushort*)pCVar14;
            uVar11 = uVar12 << 8 | uVar12 >> 8;
            uVar15 = uVar4 << 8 | uVar4 >> 8;
            if (*(ulong*)param_1 == 0xffffffffffffffff) {
               LAB_001009b7:uVar17 = *(ulong*)( param_1 + 8 );
               uVar19 = *(ulong*)( param_1 + 0x10 );
               bVar8 = false;
               if (uVar17 == 0xffffffffffffffff) {
                  if (uVar19 == 0xffffffffffffffff) break;
                  LAB_00100ba2:bVar9 = 0;
                  LAB_00100a10:bVar10 = (byte)uVar12 >> 1;
                  bVar18 = (byte)uVar4 >> 1;
                  if ((uint)bVar10 - (uint)bVar18 < 0x3f) {
                     bVar10 = bVar10 & 0x3f;
                     uVar17 = 1L << ( bVar18 & 0x3f );
                     *(ulong*)( param_1 + 0x10 ) = ( ( 2L << bVar10 ) - uVar17 ) - ( ulong )(( ulong )(1L << bVar10) < uVar17) | uVar19;
                     goto LAB_00100a3c;
                  }

                  *(undefined8*)( param_1 + 0x10 ) = 0xffffffffffffffff;
                  bVar8 = (bool)( bVar8 | bVar9 );
               }
 else {
                  LAB_001009cc:if ((uint)uVar11 - (uint)uVar15 < 0x3f) {
                     uVar16 = 1L << ( ( byte )(uVar4 >> 8) & 0x3f );
                     bVar10 = ( byte )(uVar12 >> 8);
                     bVar9 = 1;
                     *(ulong*)( param_1 + 8 ) = ( ( 2L << ( bVar10 & 0x3f ) ) - uVar16 ) - ( ulong )(( ulong )(1L << ( bVar10 & 0x3f )) < uVar16) | uVar17;
                     if (uVar19 == 0xffffffffffffffff) goto LAB_00100a3c;
                     goto LAB_00100a10;
                  }

                  *(undefined8*)( param_1 + 8 ) = 0xffffffffffffffff;
                  if (uVar19 != 0xffffffffffffffff) goto LAB_00100ba2;
               }

               if (!bVar8) break;
            }
 else {
               uVar6 = uVar11 >> 4;
               uVar7 = uVar15 >> 4;
               if (0x3e < (uint)uVar6 - (uint)uVar7) {
                  *(undefined8*)param_1 = 0xffffffffffffffff;
                  goto LAB_001009b7;
               }

               uVar19 = 1L << ( (byte)uVar7 & 0x3f );
               uVar17 = *(ulong*)( param_1 + 8 );
               bVar9 = (byte)uVar6;
               bVar8 = true;
               *(ulong*)param_1 = ( ( 2L << ( bVar9 & 0x3f ) ) - uVar19 ) - ( ulong )(( ulong )(1L << ( bVar9 & 0x3f )) < uVar19) | *(ulong*)param_1;
               uVar19 = *(ulong*)( param_1 + 0x10 );
               if (uVar17 != 0xffffffffffffffff) goto LAB_001009cc;
               if (uVar19 != 0xffffffffffffffff) goto LAB_00100ba2;
            }

            LAB_00100a3c:pCVar14 = pCVar14 + 6;
         }
 while ( pCVar2 != pCVar14 );
      }

   }

   return SUB81(param_1, 0);
}
/* data_destroy_arabic(void*) */void data_destroy_arabic(void *param_1) {
   arabic_fallback_plan_t *paVar1;
   paVar1 = *(arabic_fallback_plan_t**)( (long)param_1 + 0x20 );
   if (( paVar1 != (arabic_fallback_plan_t*)0x0 ) && ( *(int*)paVar1 != 0 )) {
      arabic_fallback_plan_destroy(paVar1);
   }

   free(param_1);
   return;
}
/* data_create_arabic(hb_ot_shape_plan_t const*) */void *data_create_arabic(hb_ot_shape_plan_t *param_1) {
   uint *puVar1;
   long lVar2;
   long lVar3;
   uint uVar4;
   uint uVar5;
   void *pvVar6;
   byte bVar7;
   int iVar8;
   int iVar9;
   int iVar10;
   uint uVar11;
   long lVar12;
   bool bVar13;
   pvVar6 = calloc(1, 0x30);
   if (pvVar6 != (void*)0x0) {
      lVar2 = *(long*)( param_1 + 0x40 );
      iVar8 = *(int*)( param_1 + 0x3c );
      *(byte*)( (long)pvVar6 + 0x28 ) = *(byte*)( (long)pvVar6 + 0x28 ) & 0xfe | *(int*)( param_1 + 4 ) == 0x41726162;
      iVar8 = iVar8 + -1;
      if (-1 < iVar8) {
         iVar10 = 0;
         iVar9 = iVar8;
         do {
            while (true) {
               uVar4 = ( uint )(iVar10 + iVar9) >> 1;
               puVar1 = (uint*)( lVar2 + (ulong)uVar4 * 0x24 );
               uVar11 = *puVar1;
               if (0x73746368 < uVar11) break;
               if (uVar11 == 0x73746368) {
                  bVar13 = puVar1[7] != 0;
                  goto LAB_00100ca8;
               }

               iVar10 = uVar4 + 1;
               if (iVar9 < iVar10) goto LAB_00100d73;
            }
;
            iVar9 = uVar4 - 1;
         }
 while ( iVar10 <= iVar9 );
      }

      LAB_00100d73:bVar13 = false;
      LAB_00100ca8:lVar12 = 0;
      *(byte*)( (long)pvVar6 + 0x28 ) = *(byte*)( (long)pvVar6 + 0x28 ) & 0xfd | bVar13 * '\x02';
      do {
         uVar11 = *(uint*)( "losianif2nif3nifidem2demtini" + lVar12 );
         if (-1 < iVar8) goto LAB_00100cd1;
         LAB_00100d4f:*(undefined4*)( (long)pvVar6 + lVar12 ) = 0;
         bVar7 = *(byte*)( (long)pvVar6 + 0x28 );
         lVar3 = lVar12;
         while (( bVar7 & 1 ) != 0) {
            if (( byte )((char)uVar11 - 0x32U) < 2) {
               bVar7 = 1;
               goto LAB_00100d20;
            }

            if (iVar8 < 0) {
               lVar12 = lVar3 + 4;
               *(byte*)( (long)pvVar6 + 0x28 ) = bVar7 & 0xfe;
               if (lVar12 == 0x1c) {
                  return pvVar6;
               }

               uVar11 = *(uint*)( "losianif2nif3nifidem2demtini" + lVar3 + 4 );
               uVar4 = 0;
            }
 else {
               iVar9 = 0;
               iVar10 = iVar8;
               do {
                  while (true) {
                     uVar5 = ( uint )(iVar9 + iVar10) >> 1;
                     puVar1 = (uint*)( lVar2 + (ulong)uVar5 * 0x24 );
                     uVar4 = *puVar1;
                     if (uVar11 < uVar4) break;
                     if (uVar11 <= uVar4) {
                        *(byte*)( (long)pvVar6 + 0x28 ) = *(byte*)( (long)pvVar6 + 0x28 ) & 0xfe | (byte)puVar1[8] & 1;
                        goto joined_r0x00100dcf;
                     }

                     iVar9 = uVar5 + 1;
                     if (iVar10 < iVar9) goto LAB_00100de7;
                  }
;
                  iVar10 = uVar5 - 1;
               }
 while ( iVar9 <= iVar10 );
               LAB_00100de7:*(byte*)( (long)pvVar6 + 0x28 ) = *(byte*)( (long)pvVar6 + 0x28 ) & 0xfe;
               joined_r0x00100dcf:if (lVar3 == 0x18) {
                  return pvVar6;
               }

               lVar12 = lVar3 + 4;
               uVar11 = *(uint*)( "losianif2nif3nifidem2demtini" + lVar3 + 4 );
               LAB_00100cd1:iVar10 = 0;
               iVar9 = iVar8;
               while (true) {
                  while (true) {
                     uVar5 = ( uint )(iVar10 + iVar9) >> 1;
                     puVar1 = (uint*)( lVar2 + (ulong)uVar5 * 0x24 );
                     uVar4 = *puVar1;
                     if (uVar4 <= uVar11) break;
                     iVar9 = uVar5 - 1;
                     if (iVar9 < iVar10) goto LAB_00100d4f;
                  }
;
                  if (uVar11 <= uVar4) break;
                  iVar10 = uVar5 + 1;
                  if (iVar9 < iVar10) goto LAB_00100d4f;
               }
;
               uVar4 = puVar1[7];
            }

            *(uint*)( (long)pvVar6 + lVar12 ) = uVar4;
            lVar3 = lVar12;
            bVar7 = *(byte*)( (long)pvVar6 + 0x28 );
         }
;
         bVar7 = 0;
         LAB_00100d20:lVar12 = lVar3 + 4;
         *(byte*)( (long)pvVar6 + 0x28 ) = *(byte*)( (long)pvVar6 + 0x28 ) & 0xfe | bVar7;
      }
 while ( lVar12 != 0x1c );
   }

   return pvVar6;
}
/* OT::hb_accelerate_subtables_context_t::return_t
   OT::Layout::GSUB_impl::SubstLookupSubTable::dispatch<OT::hb_accelerate_subtables_context_t>(OT::hb_accelerate_subtables_context_t*,
   unsigned int) const [clone .isra.0] */void OT::Layout::GSUB_impl::SubstLookupSubTable::dispatch<OT::hb_accelerate_subtables_context_t>(SubstLookupSubTable *this, hb_accelerate_subtables_context_t *param_1, uint param_2) {
   short sVar1;
   ushort uVar2;
   uint uVar3;
   undefined8 *puVar4;
   code *pcVar5;
   int iVar6;
   hb_set_digest_combiner_t *phVar7;
   SubstLookupSubTable *pSVar8;
   LAB_00100e33:switch (param_2) {
      default:
    return;
      case 1:
    if (*(short *)this == 0x100) {
      uVar3 = *(uint *)(param_1 + 0x10);
      pcVar5 = hb_accelerate_subtables_context_t::
               cache_func_to<OT::Layout::GSUB_impl::SingleSubstFormat1_3<OT::Layout::SmallTypes>>;
      *(uint *)(param_1 + 0x10) = uVar3 + 1;
      puVar4 = (undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar3 * 0x38);
      *puVar4 = this;
      puVar4[1] = hb_accelerate_subtables_context_t::
                  apply_to<OT::Layout::GSUB_impl::SingleSubstFormat1_3<OT::Layout::SmallTypes>>;
      puVar4[2] = hb_accelerate_subtables_context_t::
                  apply_cached_to<OT::Layout::GSUB_impl::SingleSubstFormat1_3<OT::Layout::SmallTypes>>
      ;
    }
    else {
      if (*(short *)this != 0x200) {
        return;
      }
      uVar3 = *(uint *)(param_1 + 0x10);
      pcVar5 = hb_accelerate_subtables_context_t::
               cache_func_to<OT::Layout::GSUB_impl::SingleSubstFormat2_4<OT::Layout::SmallTypes>>;
      *(uint *)(param_1 + 0x10) = uVar3 + 1;
      puVar4 = (undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar3 * 0x38);
      *puVar4 = this;
      puVar4[1] = hb_accelerate_subtables_context_t::
                  apply_to<OT::Layout::GSUB_impl::SingleSubstFormat2_4<OT::Layout::SmallTypes>>;
      puVar4[2] = hb_accelerate_subtables_context_t::
                  apply_cached_to<OT::Layout::GSUB_impl::SingleSubstFormat2_4<OT::Layout::SmallTypes>>
      ;
    }
    break;
      case 2:
    if (*(short *)this != 0x100) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = uVar3 + 1;
    puVar4 = (undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar3 * 0x38);
    *puVar4 = this;
    pcVar5 = hb_accelerate_subtables_context_t::
             cache_func_to<OT::Layout::GSUB_impl::MultipleSubstFormat1_2<OT::Layout::SmallTypes>>;
    puVar4[1] = hb_accelerate_subtables_context_t::
                apply_to<OT::Layout::GSUB_impl::MultipleSubstFormat1_2<OT::Layout::SmallTypes>>;
    puVar4[2] = hb_accelerate_subtables_context_t::
                apply_cached_to<OT::Layout::GSUB_impl::MultipleSubstFormat1_2<OT::Layout::SmallTypes>>
    ;
    break;
      case 3:
    if (*(short *)this != 0x100) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x10);
    pcVar5 = hb_accelerate_subtables_context_t::
             cache_func_to<OT::Layout::GSUB_impl::AlternateSubstFormat1_2<OT::Layout::SmallTypes>>;
    *(uint *)(param_1 + 0x10) = uVar3 + 1;
    puVar4 = (undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar3 * 0x38);
    *puVar4 = this;
    puVar4[1] = hb_accelerate_subtables_context_t::
                apply_to<OT::Layout::GSUB_impl::AlternateSubstFormat1_2<OT::Layout::SmallTypes>>;
    puVar4[2] = hb_accelerate_subtables_context_t::
                apply_cached_to<OT::Layout::GSUB_impl::AlternateSubstFormat1_2<OT::Layout::SmallTypes>>
    ;
    break;
      case 4:
    if (*(short *)this != 0x100) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x10);
    pcVar5 = hb_accelerate_subtables_context_t::
             cache_func_to<OT::Layout::GSUB_impl::LigatureSubstFormat1_2<OT::Layout::SmallTypes>>;
    *(uint *)(param_1 + 0x10) = uVar3 + 1;
    puVar4 = (undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar3 * 0x38);
    *puVar4 = this;
    puVar4[1] = hb_accelerate_subtables_context_t::
                apply_to<OT::Layout::GSUB_impl::LigatureSubstFormat1_2<OT::Layout::SmallTypes>>;
    puVar4[2] = hb_accelerate_subtables_context_t::
                apply_cached_to<OT::Layout::GSUB_impl::LigatureSubstFormat1_2<OT::Layout::SmallTypes>>
    ;
    break;
      case 5:
    sVar1 = *(short *)this;
    if (sVar1 == 0x200) {
      uVar3 = *(uint *)(param_1 + 0x10);
      pSVar8 = (SubstLookupSubTable *)&_hb_NullPool;
      *(uint *)(param_1 + 0x10) = uVar3 + 1;
      puVar4 = (undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar3 * 0x38);
      *puVar4 = this;
      puVar4[1] = hb_accelerate_subtables_context_t::
                  apply_to<OT::ContextFormat2_5<OT::Layout::SmallTypes>>;
      puVar4[2] = hb_accelerate_subtables_context_t::
                  apply_cached_to<OT::ContextFormat2_5<OT::Layout::SmallTypes>>;
      puVar4[3] = hb_accelerate_subtables_context_t::
                  cache_func_to<OT::ContextFormat2_5<OT::Layout::SmallTypes>>;
      puVar4[6] = 0;
      *(undefined1 (*) [16])(puVar4 + 4) = (undefined1  [16])0x0;
      uVar2 = *(ushort *)(this + 2);
      if (uVar2 != 0) {
        pSVar8 = this + (ushort)(uVar2 << 8 | uVar2 >> 8);
      }
      Common::Coverage::
      collect_coverage<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
                ((Coverage *)pSVar8,(hb_set_digest_combiner_t *)(puVar4 + 4));
      uVar2 = *(ushort *)(this + 4);
      pSVar8 = (SubstLookupSubTable *)&_hb_NullPool;
      if (uVar2 != 0) {
        pSVar8 = this + (ushort)(uVar2 << 8 | uVar2 >> 8);
      }
      if (*(short *)pSVar8 == 0x100) {
        iVar6 = 1;
      }
      else {
        if (*(short *)pSVar8 != 0x200) {
          return;
        }
        uVar2 = *(ushort *)(pSVar8 + 2) << 8 | *(ushort *)(pSVar8 + 2) >> 8;
        if (uVar2 == 0) {
          return;
        }
        iVar6 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        iVar6 = iVar6 + 1;
      }
      uVar2 = *(ushort *)(this + 6);
LAB_001012a5:
      uVar3 = (uint)(ushort)(uVar2 << 8 | uVar2 >> 8) * iVar6;
      if (uVar3 < 4) {
        return;
      }
      if (uVar3 <= *(uint *)(param_1 + 0x18)) {
        return;
      }
      *(uint *)(param_1 + 0x18) = uVar3;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + -1;
      return;
    }
    if (sVar1 != 0x300) {
      if (sVar1 != 0x100) {
        return;
      }
      uVar3 = *(uint *)(param_1 + 0x10);
      pcVar5 = hb_accelerate_subtables_context_t::
               cache_func_to<OT::ContextFormat1_4<OT::Layout::SmallTypes>>;
      *(uint *)(param_1 + 0x10) = uVar3 + 1;
      puVar4 = (undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar3 * 0x38);
      *puVar4 = this;
      puVar4[1] = hb_accelerate_subtables_context_t::
                  apply_to<OT::ContextFormat1_4<OT::Layout::SmallTypes>>;
      puVar4[2] = hb_accelerate_subtables_context_t::
                  apply_cached_to<OT::ContextFormat1_4<OT::Layout::SmallTypes>>;
      break;
    }
    uVar3 = *(uint *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = uVar3 + 1;
    puVar4 = (undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar3 * 0x38);
    *puVar4 = this;
    puVar4[1] = hb_accelerate_subtables_context_t::apply_to<OT::ContextFormat3>;
    puVar4[2] = hb_accelerate_subtables_context_t::apply_cached_to<OT::ContextFormat3>;
    puVar4[3] = hb_accelerate_subtables_context_t::cache_func_to<OT::ContextFormat3>;
    puVar4[6] = 0;
    *(undefined1 (*) [16])(puVar4 + 4) = (undefined1  [16])0x0;
    uVar2 = *(ushort *)(this + 6);
joined_r0x001013dc:
    pSVar8 = (SubstLookupSubTable *)&_hb_NullPool;
    phVar7 = (hb_set_digest_combiner_t *)(puVar4 + 4);
    if (uVar2 == 0) goto LAB_00100ef3;
    goto LAB_00100ee8;
      case 6:
    sVar1 = *(short *)this;
    if (sVar1 == 0x200) {
      uVar3 = *(uint *)(param_1 + 0x10);
      pSVar8 = (SubstLookupSubTable *)&_hb_NullPool;
      *(uint *)(param_1 + 0x10) = uVar3 + 1;
      puVar4 = (undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar3 * 0x38);
      *puVar4 = this;
      puVar4[1] = hb_accelerate_subtables_context_t::
                  apply_to<OT::ChainContextFormat2_5<OT::Layout::SmallTypes>>;
      puVar4[2] = hb_accelerate_subtables_context_t::
                  apply_cached_to<OT::ChainContextFormat2_5<OT::Layout::SmallTypes>>;
      puVar4[3] = hb_accelerate_subtables_context_t::
                  cache_func_to<OT::ChainContextFormat2_5<OT::Layout::SmallTypes>>;
      puVar4[6] = 0;
      *(undefined1 (*) [16])(puVar4 + 4) = (undefined1  [16])0x0;
      uVar2 = *(ushort *)(this + 2);
      if (uVar2 != 0) {
        pSVar8 = this + (ushort)(uVar2 << 8 | uVar2 >> 8);
      }
      Common::Coverage::
      collect_coverage<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
                ((Coverage *)pSVar8,(hb_set_digest_combiner_t *)(puVar4 + 4));
      uVar2 = *(ushort *)(this + 8);
      pSVar8 = (SubstLookupSubTable *)&_hb_NullPool;
      if (uVar2 != 0) {
        pSVar8 = this + (ushort)(uVar2 << 8 | uVar2 >> 8);
      }
      if (*(short *)pSVar8 == 0x100) {
        iVar6 = 1;
      }
      else {
        if (*(short *)pSVar8 != 0x200) {
          return;
        }
        uVar2 = *(ushort *)(pSVar8 + 2) << 8 | *(ushort *)(pSVar8 + 2) >> 8;
        if (uVar2 == 0) {
          return;
        }
        iVar6 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        iVar6 = iVar6 + 1;
      }
      uVar2 = *(ushort *)(this + 10);
      goto LAB_001012a5;
    }
    if (sVar1 == 0x300) {
      uVar3 = *(uint *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x10) = uVar3 + 1;
      puVar4 = (undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar3 * 0x38);
      *puVar4 = this;
      puVar4[3] = hb_accelerate_subtables_context_t::cache_func_to<OT::ChainContextFormat3>;
      puVar4[1] = hb_accelerate_subtables_context_t::apply_to<OT::ChainContextFormat3>;
      puVar4[2] = hb_accelerate_subtables_context_t::apply_cached_to<OT::ChainContextFormat3>;
      puVar4[6] = 0;
      *(undefined1 (*) [16])(puVar4 + 4) = (undefined1  [16])0x0;
      pSVar8 = (SubstLookupSubTable *)&_hb_NullPool;
      if (*(short *)(this + (ulong)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8)
                            * 2 + 4) != 0) {
        pSVar8 = this + (ulong)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) * 2
                        + 4 + 2;
      }
      uVar2 = *(ushort *)pSVar8;
      goto joined_r0x001013dc;
    }
    if (sVar1 != 0x100) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x10);
    pcVar5 = hb_accelerate_subtables_context_t::
             cache_func_to<OT::ChainContextFormat1_4<OT::Layout::SmallTypes>>;
    *(uint *)(param_1 + 0x10) = uVar3 + 1;
    puVar4 = (undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar3 * 0x38);
    *puVar4 = this;
    puVar4[1] = hb_accelerate_subtables_context_t::
                apply_to<OT::ChainContextFormat1_4<OT::Layout::SmallTypes>>;
    puVar4[2] = hb_accelerate_subtables_context_t::
                apply_cached_to<OT::ChainContextFormat1_4<OT::Layout::SmallTypes>>;
    break;
      case 7:
    goto switchD_00100e41_caseD_7;
      case 8:
    if (*(short *)this != 0x100) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x10);
    pcVar5 = hb_accelerate_subtables_context_t::
             cache_func_to<OT::Layout::GSUB_impl::ReverseChainSingleSubstFormat1>;
    *(uint *)(param_1 + 0x10) = uVar3 + 1;
    puVar4 = (undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar3 * 0x38);
    *puVar4 = this;
    puVar4[1] = hb_accelerate_subtables_context_t::
                apply_to<OT::Layout::GSUB_impl::ReverseChainSingleSubstFormat1>;
    puVar4[2] = hb_accelerate_subtables_context_t::
                apply_cached_to<OT::Layout::GSUB_impl::ReverseChainSingleSubstFormat1>;
   }

   puVar4[3] = pcVar5;
   phVar7 = (hb_set_digest_combiner_t*)( puVar4 + 4 );
   pSVar8 = (SubstLookupSubTable*)&_hb_NullPool;
   puVar4[6] = 0;
   *(undefined1(*) [16])( puVar4 + 4 ) = (undefined1[16])0x0;
   uVar2 = *(ushort*)( this + 2 );
   if (uVar2 != 0) {
      LAB_00100ee8:pSVar8 = this + ( ushort )(uVar2 << 8 | uVar2 >> 8);
   }

   LAB_00100ef3:Common::Coverage::collect_coverage<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>((Coverage*)pSVar8, phVar7);
   return;
   switchD_00100e41_caseD_7:if (*(short*)this != 0x100) {
      return;
   }

   uVar3 = *(uint*)( this + 4 );
   pSVar8 = (SubstLookupSubTable*)&_hb_NullPool;
   if (uVar3 != 0) {
      pSVar8 = this + ( uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18 );
   }

   param_2 = ( uint )(ushort)(*(ushort*)( this + 2 ) << 8 | *(ushort*)( this + 2 ) >> 8);
   this =
   pSVar8;
   goto LAB_00100e33;
}
/* void sort_r_simple<>(void*, unsigned long, unsigned long, int (*)(void const*, void const*))
   [clone .constprop.0] */void sort_r_simple<>(void *param_1, ulong param_2, ulong param_3, _func_int_void_ptr_void_ptr *param_4) {
   byte bVar1;
   code cVar2;
   int iVar3;
   _func_int_void_ptr_void_ptr *p_Var4;
   _func_int_void_ptr_void_ptr *p_Var5;
   _func_int_void_ptr_void_ptr *p_Var6;
   _func_int_void_ptr_void_ptr *p_Var7;
   ulong uVar8;
   ulong uVar9;
   ulong uVar10;
   _func_int_void_ptr_void_ptr *p_Var11;
   _func_int_void_ptr_void_ptr *p_Var12;
   _func_int_void_ptr_void_ptr *p_Var13;
   _func_int_void_ptr_void_ptr *p_Var14;
   _func_int_void_ptr_void_ptr *p_Var15;
   _func_int_void_ptr_void_ptr *local_58;
   _func_int_void_ptr_void_ptr *local_50;
   local_58 = (_func_int_void_ptr_void_ptr*)( (long)param_1 + param_2 * 6 );
   local_50 = (_func_int_void_ptr_void_ptr*)param_1;
   if (9 < param_2) {
      do {
         uVar9 = ( param_2 * 3 + -3 ) * 2;
         p_Var6 = local_50 + 6;
         p_Var7 = local_50 + uVar9;
         p_Var11 = local_50 + ( ( param_2 >> 1 ) + ( param_2 & 0xfffffffffffffffe ) ) * 2;
         p_Var15 = p_Var7 + -6;
         iVar3 = ( *(code*)param_3 )(p_Var6, p_Var11);
         p_Var12 = p_Var11;
         if (iVar3 < 1) {
            p_Var12 = p_Var6;
            p_Var6 = p_Var11;
         }

         iVar3 = ( *(code*)param_3 )(p_Var6, p_Var15);
         if (( 0 < iVar3 ) && ( iVar3 = ( *(code*)param_3 )(p_Var12, p_Var15) ),p_Var6 = p_Var15,0 < iVar3) {
            p_Var6 = p_Var12;
         }

         p_Var15 = p_Var7;
         p_Var11 = p_Var7;
         p_Var12 = local_50;
         p_Var14 = local_50;
         if (p_Var7 == p_Var6) {
            if (local_50 < p_Var7) goto LAB_001015b0;
            LAB_001017be:param_2 = 0;
            uVar10 = 0;
            param_1 = local_58;
         }
 else {
            p_Var4 = p_Var7;
            p_Var13 = p_Var6;
            do {
               param_4 = (_func_int_void_ptr_void_ptr*)( ulong )(byte) * p_Var4;
               bVar1 = ( byte ) * p_Var13;
               p_Var5 = p_Var13 + 1;
               *p_Var13 = *p_Var4;
               *p_Var4 = (_func_int_void_ptr_void_ptr)bVar1;
               p_Var4 = p_Var4 + 1;
               p_Var13 = p_Var5;
            }
 while ( p_Var5 != p_Var6 + 6 );
            if (p_Var7 <= local_50) goto LAB_001017be;
            LAB_001015b0:do {
               while (true) {
                  iVar3 = ( *(code*)param_3 )(p_Var12, p_Var7);
                  if (iVar3 < 1) break;
                  do {
                     while (true) {
                        p_Var6 = p_Var15;
                        p_Var15 = p_Var6;
                        if (p_Var6 <= p_Var12) goto LAB_00101640;
                        p_Var15 = p_Var6 + -6;
                        iVar3 = ( *(code*)param_3 )(p_Var15, p_Var7);
                        if (iVar3 != 0) break;
                        p_Var11 = p_Var11 + -6;
                        p_Var4 = p_Var15;
                        p_Var13 = p_Var11;
                        if (p_Var15 < p_Var11) {
                           do {
                              bVar1 = ( byte ) * p_Var4;
                              p_Var5 = p_Var4 + 1;
                              *p_Var4 = *p_Var13;
                              *p_Var13 = (_func_int_void_ptr_void_ptr)bVar1;
                              p_Var4 = p_Var5;
                              p_Var13 = p_Var13 + 1;
                           }
 while ( p_Var5 != p_Var6 );
                        }

                     }
;
                  }
 while ( -1 < iVar3 );
                  p_Var6 = p_Var12 + 6;
                  p_Var4 = p_Var15;
                  if (p_Var12 < p_Var15) {
                     do {
                        bVar1 = ( byte ) * p_Var12;
                        p_Var13 = p_Var12 + 1;
                        *p_Var12 = *p_Var4;
                        *p_Var4 = (_func_int_void_ptr_void_ptr)bVar1;
                        p_Var4 = p_Var4 + 1;
                        p_Var12 = p_Var13;
                     }
 while ( p_Var13 != p_Var6 );
                  }

                  p_Var12 = p_Var6;
                  if (p_Var15 <= p_Var6) goto LAB_00101640;
               }
;
               p_Var6 = p_Var14;
               if (( iVar3 == 0 ) && ( p_Var6 = p_Var14 + 6 ),p_Var4 = p_Var12,p_Var14 < p_Var12) {
                  do {
                     bVar1 = ( byte ) * p_Var14;
                     p_Var13 = p_Var14 + 1;
                     *p_Var14 = *p_Var4;
                     *p_Var4 = (_func_int_void_ptr_void_ptr)bVar1;
                     p_Var4 = p_Var4 + 1;
                     p_Var14 = p_Var13;
                  }
 while ( p_Var13 != p_Var6 );
               }

               p_Var12 = p_Var12 + 6;
               p_Var14 = p_Var6;
            }
 while ( p_Var12 < p_Var15 );
            LAB_00101640:uVar9 = (long)p_Var15 - (long)p_Var14;
            uVar10 = (long)p_Var11 - (long)p_Var15;
            uVar8 = (long)local_58 - (long)p_Var11;
            param_1 = local_58 + -uVar10;
            param_2 = uVar10 / 6;
            local_58 = (_func_int_void_ptr_void_ptr*)( (long)param_1 + param_2 * 6 );
            param_4 = local_50;
            if (( p_Var14 != local_50 ) && ( uVar9 != 0 )) {
               p_Var6 = local_50 + uVar9;
               if (uVar9 < ( ulong )((long)p_Var14 - (long)local_50)) {
                  p_Var7 = local_50;
                  if (local_50 < p_Var6) {
                     do {
                        bVar1 = ( byte ) * p_Var7;
                        p_Var12 = p_Var7 + 1;
                        *p_Var7 = *p_Var14;
                        *p_Var14 = (_func_int_void_ptr_void_ptr)bVar1;
                        param_4 = (_func_int_void_ptr_void_ptr*)(ulong)bVar1;
                        p_Var7 = p_Var12;
                        p_Var14 = p_Var14 + 1;
                     }
 while ( p_Var12 != p_Var6 );
                  }

               }
 else {
                  p_Var7 = local_50;
                  if (local_50 < p_Var14) {
                     do {
                        bVar1 = ( byte ) * p_Var7;
                        param_4 = (_func_int_void_ptr_void_ptr*)(ulong)bVar1;
                        p_Var12 = p_Var7 + 1;
                        *p_Var7 = *p_Var6;
                        *p_Var6 = (_func_int_void_ptr_void_ptr)bVar1;
                        p_Var6 = p_Var6 + 1;
                        p_Var7 = p_Var12;
                     }
 while ( p_Var14 != p_Var12 );
                  }

               }

            }

            if (uVar10 != 0 && uVar8 != 0) {
               p_Var6 = p_Var15 + uVar8;
               if (uVar8 < uVar10) {
                  if (p_Var15 < p_Var6) {
                     do {
                        param_4 = (_func_int_void_ptr_void_ptr*)( ulong )(byte) * p_Var11;
                        bVar1 = ( byte ) * p_Var15;
                        p_Var7 = p_Var15 + 1;
                        *p_Var15 = *p_Var11;
                        *p_Var11 = (_func_int_void_ptr_void_ptr)bVar1;
                        p_Var15 = p_Var7;
                        p_Var11 = p_Var11 + 1;
                     }
 while ( p_Var7 != p_Var6 );
                  }

               }
 else if (p_Var15 < p_Var11) {
                  do {
                     param_4 = (_func_int_void_ptr_void_ptr*)( ulong )(byte) * p_Var6;
                     bVar1 = ( byte ) * p_Var15;
                     p_Var7 = p_Var15 + 1;
                     *p_Var15 = *p_Var6;
                     *p_Var6 = (_func_int_void_ptr_void_ptr)bVar1;
                     p_Var6 = p_Var6 + 1;
                     p_Var15 = p_Var7;
                  }
 while ( p_Var7 != p_Var11 );
               }

            }

         }

         sort_r_simple<>(local_50, uVar9 / 6, param_3, param_4);
         local_50 = (_func_int_void_ptr_void_ptr*)param_1;
      }
 while ( 0x3b < uVar10 );
   }

   p_Var6 = (_func_int_void_ptr_void_ptr*)( (long)param_1 + 6 );
   do {
      do {
         p_Var7 = p_Var6;
         if (local_58 <= p_Var7) {
            return;
         }

         p_Var6 = p_Var7 + 6;
         p_Var11 = p_Var6;
      }
 while ( p_Var7 <= param_1 );
      do {
         p_Var15 = p_Var7 + -6;
         iVar3 = ( *(code*)param_3 )(p_Var15, p_Var7);
         if (iVar3 < 1) break;
         do {
            cVar2 = p_Var7[-6];
            p_Var12 = p_Var7 + 1;
            p_Var7[-6] = *p_Var7;
            *p_Var7 = cVar2;
            p_Var7 = p_Var12;
         }
 while ( p_Var12 != p_Var11 );
         p_Var11 = p_Var11 + -6;
         p_Var7 = p_Var15;
      }
 while ( param_1 < p_Var15 );
   }
 while ( true );
}
/* OT::match_class(hb_glyph_info_t&, unsigned int, void const*) */ushort OT::match_class(hb_glyph_info_t *param_1, uint param_2, void *param_3) {
   ushort uVar1;
   ushort *puVar2;
   uint uVar3;
   int iVar4;
   int iVar5;
   uint uVar6;
   /* WARNING: Load size is inaccurate */
   uVar6 = *(uint*)param_1;
   if (*param_3 == 0x100) {
      uVar6 = uVar6 - ( ushort )(*(ushort*)( (long)param_3 + 2 ) << 8 | *(ushort*)( (long)param_3 + 2 ) >> 8);
      puVar2 = (ushort*)&_hb_NullPool;
      if (uVar6 < ( ushort )(*(ushort*)( (long)param_3 + 4 ) << 8 | *(ushort*)( (long)param_3 + 4 ) >> 8)) {
         puVar2 = (ushort*)( (long)param_3 + (ulong)uVar6 * 2 + 6 );
      }

      uVar1 = *puVar2;
      return CONCAT11((char)uVar1, param_2 == ( ushort )(uVar1 << 8 | uVar1 >> 8));
   }

   if (*param_3 != 0x200) {
      return ( ushort )(param_2 == 0);
   }

   puVar2 = (ushort*)&_hb_Null_OT_RangeRecord;
   uVar1 = *(ushort*)( (long)param_3 + 2 ) << 8 | *(ushort*)( (long)param_3 + 2 ) >> 8;
   iVar5 = uVar1 - 1;
   if (uVar1 != 0) {
      iVar4 = 0;
      do {
         while (true) {
            uVar3 = ( uint )(iVar4 + iVar5) >> 1;
            puVar2 = (ushort*)( (long)param_3 + (ulong)uVar3 * 6 + 4 );
            if (uVar6 < ( ushort )(*puVar2 << 8 | *puVar2 >> 8)) break;
            if (uVar6 <= ( ushort )(puVar2[1] << 8 | puVar2[1] >> 8)) goto LAB_0010194b;
            iVar4 = uVar3 + 1;
            if (iVar5 < iVar4) goto LAB_00101944;
         }
;
         iVar5 = uVar3 - 1;
      }
 while ( iVar4 <= iVar5 );
      LAB_00101944:puVar2 = (ushort*)&_hb_Null_OT_RangeRecord;
   }

   LAB_0010194b:uVar1 = puVar2[2];
   return CONCAT11((char)uVar1, param_2 == ( ushort )(uVar1 << 8 | uVar1 >> 8));
}
/* OT::match_class_cached(hb_glyph_info_t&, unsigned int, void const*) */ulong OT::match_class_cached(hb_glyph_info_t *param_1, uint param_2, void *param_3) {
   ushort uVar1;
   ulong uVar2;
   hb_glyph_info_t hVar3;
   uint uVar4;
   ushort *puVar5;
   int iVar6;
   int iVar7;
   uint uVar8;
   if ((byte)param_1[0xf] != 0xff) {
      return ( ulong )((byte)param_1[0xf] == param_2);
   }

   /* WARNING: Load size is inaccurate */
   uVar8 = *(uint*)param_1;
   if (*param_3 == 0x100) {
      puVar5 = (ushort*)&_hb_NullPool;
      uVar8 = uVar8 - ( ushort )(*(ushort*)( (long)param_3 + 2 ) << 8 | *(ushort*)( (long)param_3 + 2 ) >> 8);
      if (uVar8 < ( ushort )(*(ushort*)( (long)param_3 + 4 ) << 8 | *(ushort*)( (long)param_3 + 4 ) >> 8)) {
         puVar5 = (ushort*)( (long)param_3 + (ulong)uVar8 * 2 + 6 );
      }

      uVar1 = *puVar5 << 8 | *puVar5 >> 8;
      LAB_00101a94:uVar2 = (ulong)uVar1;
      if (0xfe < uVar1) goto LAB_00101a57;
      hVar3 = SUB21(uVar1, 0);
   }
 else {
      if (*param_3 == 0x200) {
         puVar5 = (ushort*)&_hb_Null_OT_RangeRecord;
         uVar1 = *(ushort*)( (long)param_3 + 2 ) << 8 | *(ushort*)( (long)param_3 + 2 ) >> 8;
         iVar7 = uVar1 - 1;
         if (uVar1 != 0) {
            iVar6 = 0;
            do {
               uVar4 = ( uint )(iVar6 + iVar7) >> 1;
               puVar5 = (ushort*)( (long)param_3 + (ulong)uVar4 * 6 + 4 );
               if (uVar8 < ( ushort )(*puVar5 << 8 | *puVar5 >> 8)) {
                  iVar7 = uVar4 - 1;
               }
 else {
                  if (uVar8 <= ( ushort )(puVar5[1] << 8 | puVar5[1] >> 8)) goto LAB_00101aa7;
                  iVar6 = uVar4 + 1;
               }

            }
 while ( iVar6 <= iVar7 );
            puVar5 = (ushort*)&_hb_Null_OT_RangeRecord;
         }

         LAB_00101aa7:uVar1 = puVar5[2] << 8 | puVar5[2] >> 8;
         goto LAB_00101a94;
      }

      hVar3 = (hb_glyph_info_t)0x0;
      uVar2 = 0;
   }

   param_1[0xf] = hVar3;
   LAB_00101a57:return CONCAT71(( int7 )(uVar2 >> 8), param_2 == (uint)uVar2);
}
/* OT::match_class_cached1(hb_glyph_info_t&, unsigned int, void const*) */ulong OT::match_class_cached1(hb_glyph_info_t *param_1, uint param_2, void *param_3) {
   ushort uVar1;
   ulong uVar2;
   hb_glyph_info_t hVar3;
   uint uVar4;
   ushort *puVar5;
   int iVar6;
   uint uVar7;
   int iVar8;
   hVar3 = param_1[0xf];
   if ((char)( (byte)hVar3 & 0xf ) != '\x0f') {
      return ( ulong )(( (byte)hVar3 & 0xf ) == param_2);
   }

   /* WARNING: Load size is inaccurate */
   uVar7 = *(uint*)param_1;
   if (*param_3 == 0x100) {
      puVar5 = (ushort*)&_hb_NullPool;
      uVar7 = uVar7 - ( ushort )(*(ushort*)( (long)param_3 + 2 ) << 8 | *(ushort*)( (long)param_3 + 2 ) >> 8);
      if (uVar7 < ( ushort )(*(ushort*)( (long)param_3 + 4 ) << 8 | *(ushort*)( (long)param_3 + 4 ) >> 8)) {
         puVar5 = (ushort*)( (long)param_3 + (ulong)uVar7 * 2 + 6 );
      }

      uVar1 = *puVar5 << 8 | *puVar5 >> 8;
      LAB_00101bb4:uVar2 = (ulong)uVar1;
      if (0xe < uVar1) goto LAB_00101b74;
      hVar3 = param_1[0xf];
   }
 else {
      if (*param_3 == 0x200) {
         puVar5 = (ushort*)&_hb_Null_OT_RangeRecord;
         uVar1 = *(ushort*)( (long)param_3 + 2 ) << 8 | *(ushort*)( (long)param_3 + 2 ) >> 8;
         iVar8 = uVar1 - 1;
         if (uVar1 != 0) {
            iVar6 = 0;
            do {
               uVar4 = ( uint )(iVar6 + iVar8) >> 1;
               puVar5 = (ushort*)( (long)param_3 + (ulong)uVar4 * 6 + 4 );
               if (uVar7 < ( ushort )(*puVar5 << 8 | *puVar5 >> 8)) {
                  iVar8 = uVar4 - 1;
               }
 else {
                  if (uVar7 <= ( ushort )(puVar5[1] << 8 | puVar5[1] >> 8)) goto LAB_00101bcf;
                  iVar6 = uVar4 + 1;
               }

            }
 while ( iVar6 <= iVar8 );
            puVar5 = (ushort*)&_hb_Null_OT_RangeRecord;
         }

         LAB_00101bcf:uVar1 = puVar5[2] << 8 | puVar5[2] >> 8;
         goto LAB_00101bb4;
      }

      uVar1 = 0;
      uVar2 = 0;
   }

   param_1[0xf] = ( hb_glyph_info_t )((byte)hVar3 & 0xf0 | (byte)uVar1);
   LAB_00101b74:return CONCAT71(( int7 )(uVar2 >> 8), param_2 == (uint)uVar2);
}
/* OT::match_class_cached2(hb_glyph_info_t&, unsigned int, void const*) */ulong OT::match_class_cached2(hb_glyph_info_t *param_1, uint param_2, void *param_3) {
   hb_glyph_info_t hVar1;
   ushort uVar2;
   ulong uVar3;
   byte bVar4;
   uint uVar5;
   ushort *puVar6;
   int iVar7;
   uint uVar8;
   int iVar9;
   hVar1 = param_1[0xf];
   if ((byte)hVar1 >> 4 != 0xf) {
      return ( ulong )((byte)hVar1 >> 4 == param_2);
   }

   /* WARNING: Load size is inaccurate */
   uVar8 = *(uint*)param_1;
   if (*param_3 == 0x100) {
      puVar6 = (ushort*)&_hb_NullPool;
      uVar8 = uVar8 - ( ushort )(*(ushort*)( (long)param_3 + 2 ) << 8 | *(ushort*)( (long)param_3 + 2 ) >> 8);
      if (uVar8 < ( ushort )(*(ushort*)( (long)param_3 + 4 ) << 8 | *(ushort*)( (long)param_3 + 4 ) >> 8)) {
         puVar6 = (ushort*)( (long)param_3 + (ulong)uVar8 * 2 + 6 );
      }

      uVar2 = *puVar6 << 8 | *puVar6 >> 8;
      LAB_00101cd4:uVar3 = (ulong)uVar2;
      if (0xe < uVar2) goto LAB_00101c94;
      hVar1 = param_1[0xf];
      bVar4 = (char)uVar2 << 4;
   }
 else {
      if (*param_3 == 0x200) {
         puVar6 = (ushort*)&_hb_Null_OT_RangeRecord;
         uVar2 = *(ushort*)( (long)param_3 + 2 ) << 8 | *(ushort*)( (long)param_3 + 2 ) >> 8;
         iVar9 = uVar2 - 1;
         if (uVar2 != 0) {
            iVar7 = 0;
            do {
               uVar5 = ( uint )(iVar7 + iVar9) >> 1;
               puVar6 = (ushort*)( (long)param_3 + (ulong)uVar5 * 6 + 4 );
               if (uVar8 < ( ushort )(*puVar6 << 8 | *puVar6 >> 8)) {
                  iVar9 = uVar5 - 1;
               }
 else {
                  if (uVar8 <= ( ushort )(puVar6[1] << 8 | puVar6[1] >> 8)) goto LAB_00101cef;
                  iVar7 = uVar5 + 1;
               }

            }
 while ( iVar7 <= iVar9 );
            puVar6 = (ushort*)&_hb_Null_OT_RangeRecord;
         }

         LAB_00101cef:uVar2 = puVar6[2] << 8 | puVar6[2] >> 8;
         goto LAB_00101cd4;
      }

      bVar4 = 0;
      uVar3 = 0;
   }

   param_1[0xf] = ( hb_glyph_info_t )((byte)hVar1 & 0xf | bVar4);
   LAB_00101c94:return CONCAT71(( int7 )(uVar3 >> 8), param_2 == (uint)uVar3);
}
/* postprocess_glyphs_arabic(hb_ot_shape_plan_t const*, hb_buffer_t*, hb_font_t*) */void postprocess_glyphs_arabic(hb_ot_shape_plan_t *param_1, hb_buffer_t *param_2, hb_font_t *param_3) {
   undefined8 *puVar1;
   long lVar2;
   ushort uVar3;
   undefined4 uVar4;
   long lVar5;
   long lVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   uint uVar10;
   char cVar11;
   uint uVar12;
   uint uVar13;
   int iVar14;
   int iVar15;
   int iVar16;
   int iVar17;
   long lVar18;
   undefined8 *puVar19;
   ulong uVar20;
   undefined8 *puVar21;
   uint uVar22;
   int iVar23;
   int iVar24;
   uint uVar25;
   int iVar26;
   int iVar27;
   uint uVar28;
   uint uVar29;
   undefined8 *puVar30;
   uint uVar31;
   int iVar32;
   undefined8 *puVar33;
   long in_FS_OFFSET;
   bool bVar34;
   uint local_a0;
   int local_9c;
   int local_68;
   lVar5 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( (byte)param_2[0xc3] & 1 ) == 0) goto LAB_00101d2b;
   iVar23 = *(int*)( param_2 + 0x38 );
   uVar12 = *(uint*)( param_2 + 0x60 );
   puVar21 = *(undefined8**)( param_2 + 0x70 );
   uVar22 = uVar12;
   if (( iVar23 != 5 ) && ( 1 < uVar12 )) {
      uVar22 = 0;
      puVar30 = (undefined8*)( (long)puVar21 + ( ulong )(uVar12 - 1) * 0x14 );
      do {
         uVar7 = puVar21[1];
         uVar4 = *(undefined4*)( puVar30 + 2 );
         uVar22 = uVar22 + 1;
         uVar8 = *puVar30;
         uVar9 = puVar30[1];
         *puVar30 = *puVar21;
         puVar30[1] = uVar7;
         *(undefined4*)( puVar30 + 2 ) = *(undefined4*)( puVar21 + 2 );
         *(undefined4*)( puVar21 + 2 ) = uVar4;
         *puVar21 = uVar8;
         puVar21[1] = uVar9;
         puVar21 = (undefined8*)( (long)puVar21 + 0x14 );
         puVar30 = (undefined8*)( (long)puVar30 + -0x14 );
      }
 while ( uVar22 < ( uVar12 - 1 ) - uVar22 );
      uVar22 = *(uint*)( param_2 + 0x60 );
      if (param_2[0x5b] != (hb_buffer_t)0x0) {
         if (uVar22 <= uVar12) {
            uVar12 = uVar22;
         }

         if (1 < uVar12) {
            uVar22 = 0;
            puVar21 = *(undefined8**)( param_2 + 0x80 );
            puVar30 = (undefined8*)( (long)*(undefined8**)( param_2 + 0x80 ) + ( ulong )(uVar12 - 1) * 0x14 );
            do {
               uVar7 = puVar21[1];
               uVar4 = *(undefined4*)( puVar30 + 2 );
               uVar22 = uVar22 + 1;
               uVar8 = *puVar30;
               uVar9 = puVar30[1];
               *puVar30 = *puVar21;
               puVar30[1] = uVar7;
               *(undefined4*)( puVar30 + 2 ) = *(undefined4*)( puVar21 + 2 );
               *(undefined4*)( puVar21 + 2 ) = uVar4;
               *puVar21 = uVar8;
               puVar21[1] = uVar9;
               puVar21 = (undefined8*)( (long)puVar21 + 0x14 );
               puVar30 = (undefined8*)( (long)puVar30 + -0x14 );
            }
 while ( uVar22 < ( uVar12 - 1 ) - uVar22 );
            uVar22 = *(uint*)( param_2 + 0x60 );
            puVar21 = *(undefined8**)( param_2 + 0x70 );
            goto LAB_00101d6e;
         }

      }

      puVar21 = *(undefined8**)( param_2 + 0x70 );
   }

   LAB_00101d6e:local_9c = 0;
   local_68 = 0;
   uVar12 = *(int*)( param_3 + 0x28 ) >> 0x1f | 1;
   LAB_00101d9a:lVar6 = *(long*)( param_2 + 0x80 );
   uVar25 = local_68 + uVar22;
   local_a0 = uVar25;
   uVar10 = uVar22;
   if (uVar22 != 0) {
      LAB_00101de8:uVar13 = uVar10 - 1;
      lVar2 = (ulong)uVar13 * 0x14;
      puVar30 = (undefined8*)( (long)puVar21 + lVar2 );
      if (( byte )(*(char*)( (long)puVar30 + 0x13 ) - 8U) < 2) {
         iVar14 = 0;
         iVar24 = 0;
         iVar26 = 0;
         puVar33 = puVar30;
         uVar28 = uVar10;
         do {
            while (true) {
               uVar29 = uVar28 - 1;
               if (1 < ( byte )(*(char*)( (long)puVar33 + 0x13 ) - 8U)) {
                  iVar15 = 0;
                  lVar18 = (ulong)uVar29 * 0x14;
                  uVar29 = uVar28;
                  goto LAB_00101ffe;
               }

               lVar18 = *(long*)( *(long*)( param_3 + 0x90 ) + 0x10 );
               if (lVar18 != 0) {
                  lVar18 = *(long*)( lVar18 + 0x28 );
               }

               iVar15 = ( **(code**)( *(long*)( param_3 + 0x90 ) + 0x48 ) )(param_3, *(undefined8*)( param_3 + 0x98 ), *(undefined4*)puVar33, lVar18);
               uVar28 = uVar29;
               if (*(char*)( (long)puVar33 + 0x13 ) != '\b') break;
               iVar14 = iVar14 + iVar15;
               puVar33 = (undefined8*)( (long)puVar33 + -0x14 );
               if (uVar29 == 0) goto LAB_00101eab;
            }
;
            iVar26 = iVar26 + iVar15;
            iVar24 = iVar24 + 1;
            puVar33 = (undefined8*)( (long)puVar33 + -0x14 );
         }
 while ( uVar29 != 0 );
         LAB_00101eab:uVar28 = 0;
         iVar15 = 0;
         goto LAB_00101ed3;
      }

      if (local_9c == 1) {
         local_a0 = local_a0 - 1;
         uVar20 = (ulong)local_a0;
         uVar7 = puVar30[1];
         puVar33 = (undefined8*)( (long)puVar21 + uVar20 * 0x14 );
         *puVar33 = *puVar30;
         puVar33[1] = uVar7;
         *(undefined4*)( (long)puVar21 + uVar20 * 0x14 + 0x10 ) = *(undefined4*)( puVar30 + 2 );
         puVar30 = (undefined8*)( lVar6 + (ulong)uVar13 * 0x14 );
         uVar7 = puVar30[1];
         puVar33 = (undefined8*)( lVar6 + uVar20 * 0x14 );
         *puVar33 = *puVar30;
         puVar33[1] = uVar7;
         *(undefined4*)( lVar6 + 0x10 + uVar20 * 0x14 ) = *(undefined4*)( lVar6 + 0x10 + lVar2 );
         uVar28 = uVar13;
         goto LAB_001021d1;
      }

      goto joined_r0x00101f5b;
   }

   if (local_9c == 0) goto LAB_00101f6c;
   LAB_001021e4:*(uint*)( param_2 + 0x60 ) = uVar25;
   LAB_001021e8:if (iVar23 != 5) {
      uVar12 = *(uint*)( param_2 + 0x60 );
      if (1 < uVar12) {
         uVar22 = 0;
         puVar21 = *(undefined8**)( param_2 + 0x70 );
         puVar30 = (undefined8*)( (long)*(undefined8**)( param_2 + 0x70 ) + ( ulong )(uVar12 - 1) * 0x14 );
         do {
            uVar7 = puVar21[1];
            uVar4 = *(undefined4*)( puVar30 + 2 );
            uVar22 = uVar22 + 1;
            uVar8 = *puVar30;
            uVar9 = puVar30[1];
            *puVar30 = *puVar21;
            puVar30[1] = uVar7;
            *(undefined4*)( puVar30 + 2 ) = *(undefined4*)( puVar21 + 2 );
            *(undefined4*)( puVar21 + 2 ) = uVar4;
            *puVar21 = uVar8;
            puVar21[1] = uVar9;
            puVar21 = (undefined8*)( (long)puVar21 + 0x14 );
            puVar30 = (undefined8*)( (long)puVar30 + -0x14 );
         }
 while ( uVar22 < ( uVar12 - 1 ) - uVar22 );
         if (param_2[0x5b] != (hb_buffer_t)0x0) {
            if (*(uint*)( param_2 + 0x60 ) < uVar12) {
               uVar12 = *(uint*)( param_2 + 0x60 );
            }

            if (1 < uVar12) {
               uVar20 = ( ulong )(uVar12 - 1);
               puVar21 = *(undefined8**)( param_2 + 0x80 );
               puVar30 = (undefined8*)( (long)*(undefined8**)( param_2 + 0x80 ) + uVar20 * 0x14 );
               do {
                  uVar7 = puVar21[1];
                  uVar4 = *(undefined4*)( puVar30 + 2 );
                  uVar8 = *puVar30;
                  uVar9 = puVar30[1];
                  *puVar30 = *puVar21;
                  puVar30[1] = uVar7;
                  *(undefined4*)( puVar30 + 2 ) = *(undefined4*)( puVar21 + 2 );
                  iVar23 = (int)uVar20;
                  uVar22 = iVar23 - 1;
                  uVar20 = (ulong)uVar22;
                  *(undefined4*)( puVar21 + 2 ) = uVar4;
                  *puVar21 = uVar8;
                  puVar21[1] = uVar9;
                  puVar21 = (undefined8*)( (long)puVar21 + 0x14 );
                  puVar30 = (undefined8*)( (long)puVar30 + -0x14 );
               }
 while ( uVar12 - iVar23 < uVar22 );
            }

         }

      }

   }

   LAB_00101d2b:if (lVar5 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
   while (true) {
      iVar15 = iVar15 + *(int*)( lVar6 + lVar18 );
      lVar18 = lVar18 + -0x14;
      uVar29 = uVar31;
      if (uVar31 == 0) break;
      LAB_00101ffe:uVar31 = uVar29 - 1;
      if (( ( byte )(*(char*)( (long)puVar21 + lVar18 + 0x13 ) - 8U) < 2 ) || ( ( ( uVar3 = *(ushort*)( (long)puVar21 + lVar18 + 0x10 )(uVar3 & 0x20) == 0 || ( ( *(byte*)( (long)puVar21 + lVar18 + 0xc ) & 0x10 ) != 0 ) ) && ( ( 1 << ( (byte)uVar3 & 0x1f ) & 0x780fcccU ) == 0 ) ) )) goto LAB_00101ed3;
   }
;
   uVar29 = 0;
   LAB_00101ed3:iVar15 = iVar15 - iVar14;
   iVar14 = uVar12 * iVar26;
   iVar32 = uVar12 * iVar15;
   if (( iVar14 < iVar32 ) && ( 0 < iVar14 )) {
      iVar17 = iVar32 / iVar14;
      iVar16 = iVar17 + -1;
      iVar14 = iVar14 * iVar17;
   }
 else {
      iVar17 = 1;
      iVar16 = 0;
   }

   if (( ( iVar14 < iVar32 ) && ( 0 < iVar24 ) ) && ( iVar32 = ( iVar16 + 2 ) * uVar12 * iVar26 - iVar32 ),iVar16 = iVar17,0 < iVar32) {
      iVar15 = 0;
      iVar32 = iVar32 / ( iVar17 * iVar24 );
   }
 else {
      iVar32 = 0;
      iVar17 = iVar16;
   }

   if (local_9c != 0) {
      hb_buffer_t::_set_glyph_flags(param_2, 3, uVar29, uVar10, true, false);
      iVar15 = iVar15 / 2;
      bVar34 = uVar28 < uVar10;
      uVar10 = uVar28;
      if (bVar34) {
         puVar33 = (undefined8*)( lVar6 + lVar2 );
         do {
            iVar14 = ( **(code**)( *(long*)( param_3 + 0x90 ) + 0x48 ) )(param_3, *(undefined8*)( param_3 + 0x98 ), *(undefined4*)puVar30);
            if (*(char*)( (long)puVar30 + 0x13 ) == '\t') {
               *(undefined4*)puVar33 = 0;
               iVar26 = iVar17 + 1;
               if (iVar17 + 1 != 0) goto LAB_00102108;
            }
 else {
               *(undefined4*)puVar33 = 0;
               iVar26 = local_9c;
               LAB_00102108:iVar24 = 0;
               do {
                  lVar18 = ( ulong )(( local_a0 - 1 ) - iVar24) * 0x14;
                  puVar1 = (undefined8*)( lVar6 + lVar18 );
                  puVar19 = (undefined8*)( lVar18 + (long)puVar21 );
                  if (iVar23 == 5) {
                     iVar27 = iVar15 - iVar14;
                     iVar16 = iVar27;
                     if (iVar24 != 0) {
                        iVar16 = iVar27 + iVar32;
                        iVar27 = iVar27 + iVar32;
                     }

                  }
 else {
                     iVar16 = iVar14 + iVar15;
                     iVar27 = iVar15;
                     if (iVar24 != 0) {
                        iVar16 = ( iVar14 + iVar15 ) - iVar32;
                     }

                  }

                  iVar15 = iVar16;
                  *(int*)( puVar33 + 1 ) = iVar27;
                  uVar7 = puVar30[1];
                  iVar24 = iVar24 + 1;
                  *puVar19 = *puVar30;
                  puVar19[1] = uVar7;
                  *(undefined4*)( puVar19 + 2 ) = *(undefined4*)( puVar30 + 2 );
                  uVar7 = puVar33[1];
                  *puVar1 = *puVar33;
                  puVar1[1] = uVar7;
                  *(undefined4*)( puVar1 + 2 ) = *(undefined4*)( puVar33 + 2 );
               }
 while ( iVar24 != iVar26 );
               local_a0 = local_a0 - iVar24;
            }

            puVar30 = (undefined8*)( (long)puVar30 + -0x14 );
            puVar33 = (undefined8*)( (long)puVar33 + -0x14 );
         }
 while ( (undefined8*)( lVar6 + -0x14 + lVar2 + ( ulong )(uVar13 - uVar28) * -0x14 ) != puVar33 );
         LAB_001021d1:uVar10 = uVar28;
         if (uVar28 == 0) goto LAB_001021e4;
      }

      goto LAB_00101de8;
   }

   local_68 = local_68 + iVar17 * iVar24;
   uVar13 = uVar28;
   joined_r0x00101f5b:uVar10 = uVar13;
   if (uVar13 != 0) goto LAB_00101de8;
   uVar25 = local_68 + uVar22;
   LAB_00101f6c:if (( ( uVar25 != 0 ) && ( *(uint*)( param_2 + 0x68 ) <= uVar25 ) ) && ( cVar11 = hb_buffer_t::enlarge((uint)param_2) ),cVar11 == '\0') goto LAB_001021e8;
   local_9c = 1;
   uVar22 = *(uint*)( param_2 + 0x60 );
   puVar21 = *(undefined8**)( param_2 + 0x70 );
   goto LAB_00101d9a;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OT::apply_lookup(OT::hb_ot_apply_context_t*, unsigned int, unsigned int*, unsigned int,
   OT::LookupRecord const*, unsigned int) */void OT::apply_lookup(hb_ot_apply_context_t *param_1, uint param_2, uint *param_3, uint param_4, LookupRecord *param_5, uint param_6) {
   LookupRecord *pLVar1;
   int iVar2;
   long lVar3;
   code *pcVar4;
   char cVar5;
   uint uVar6;
   uint uVar7;
   uint *puVar8;
   uint *puVar9;
   uint uVar10;
   size_t __size;
   int iVar11;
   uint uVar12;
   ushort uVar13;
   ulong uVar14;
   hb_buffer_t *phVar15;
   uint uVar16;
   uint uVar17;
   uint *local_70;
   uint local_68;
   ulong local_58;
   uint local_48;
   iVar11 = 0;
   lVar3 = *(long*)( param_1 + 0xa0 );
   local_58 = (ulong)param_2;
   if (*(char*)( lVar3 + 0x5a ) != '\0') {
      iVar11 = *(int*)( lVar3 + 100 ) - *(int*)( lVar3 + 0x5c );
      param_6 = ( param_6 + *(int*)( lVar3 + 100 ) ) - *(int*)( lVar3 + 0x5c );
   }

   if (param_2 != 0) {
      puVar9 = param_3;
      if (( param_2 & 1 ) != 0) {
         puVar9 = param_3 + 1;
         *param_3 = *param_3 + iVar11;
         if (puVar9 == param_3 + param_2) goto LAB_001024ee;
      }

      do {
         *puVar9 = *puVar9 + iVar11;
         puVar9[1] = puVar9[1] + iVar11;
         puVar9 = puVar9 + 2;
      }
 while ( puVar9 != param_3 + param_2 );
   }

   LAB_001024ee:if (param_4 != 0) {
      pLVar1 = param_5 + (ulong)param_4 * 4;
      local_70 = param_3;
      local_68 = param_2;
      local_48 = param_6;
      do {
         if (*(char*)( lVar3 + 0x58 ) == '\0') break;
         uVar13 = *(ushort*)param_5 << 8 | *(ushort*)param_5 >> 8;
         uVar6 = (uint)uVar13;
         if (uVar6 < local_68) {
            iVar11 = *(int*)( lVar3 + 0x5c );
            if (*(char*)( lVar3 + 0x5a ) != '\0') {
               iVar11 = *(int*)( lVar3 + 100 );
            }

            uVar14 = (ulong)uVar13;
            uVar17 = ( iVar11 + *(int*)( lVar3 + 0x60 ) ) - *(int*)( lVar3 + 0x5c );
            if (local_70[uVar14] < uVar17) {
               cVar5 = hb_buffer_t::move_to((uint)lVar3);
               if (( cVar5 == '\0' ) || ( *(int*)( lVar3 + 200 ) < 1 )) break;
               phVar15 = *(hb_buffer_t**)( param_1 + 0xa0 );
               if (*(long*)( phVar15 + 0xd0 ) != 0) {
                  if (*(char*)( lVar3 + 0x5a ) != '\0') {
                     hb_buffer_t::sync_so_far();
                     phVar15 = *(hb_buffer_t**)( param_1 + 0xa0 );
                  }

                  hb_buffer_t::message(phVar15, *(hb_font_t**)( param_1 + 0x90 ), "recursing to lookup %u at %u", ( ulong )(ushort)(*(ushort*)( param_5 + 2 ) << 8 | *(ushort*)( param_5 + 2 ) >> 8), ( ulong ) * (uint*)( lVar3 + 0x5c ));
                  phVar15 = *(hb_buffer_t**)( param_1 + 0xa0 );
               }

               iVar11 = *(int*)( param_1 + 0x138 );
               uVar13 = *(ushort*)( param_5 + 2 );
               if (( ( iVar11 == 0 ) || ( pcVar4 = *(code**)( param_1 + 0xe8 ) ),pcVar4 == (code*)0x0 )) ( iVar2 = *(int*)( phVar15 + 200 ) ),*(int*)( phVar15 + 200 ) = iVar2 + -1,iVar2< 1)){phVar15[0x59] = (hb_buffer_t)0x1;
            }
 else {
               *(int*)( param_1 + 0x138 ) = iVar11 + -1;
               cVar5 = ( *pcVar4 )(param_1, uVar13 << 8 | uVar13 >> 8);
               *(int*)( param_1 + 0x138 ) = *(int*)( param_1 + 0x138 ) + 1;
               if (cVar5 != '\0') {
                  phVar15 = *(hb_buffer_t**)( param_1 + 0xa0 );
                  if (*(long*)( phVar15 + 0xd0 ) != 0) {
                     if (*(char*)( lVar3 + 0x5a ) != '\0') {
                        hb_buffer_t::sync_so_far();
                        phVar15 = *(hb_buffer_t**)( param_1 + 0xa0 );
                     }

                     hb_buffer_t::message(phVar15, *(hb_font_t**)( param_1 + 0x90 ), "recursed to lookup %u", ( ulong )(ushort)(*(ushort*)( param_5 + 2 ) << 8 | *(ushort*)( param_5 + 2 ) >> 8));
                  }

                  iVar11 = *(int*)( lVar3 + 0x5c );
                  if (*(char*)( lVar3 + 0x5a ) != '\0') {
                     iVar11 = *(int*)( lVar3 + 100 );
                  }

                  iVar11 = ( ( *(int*)( lVar3 + 0x60 ) - *(int*)( lVar3 + 0x5c ) ) - uVar17 ) + iVar11;
                  if (iVar11 != 0) {
                     local_48 = local_48 + iVar11;
                     uVar17 = local_70[uVar14];
                     if ((int)local_48 < (int)uVar17) {
                        iVar11 = ( iVar11 + uVar17 ) - local_48;
                        local_48 = uVar17;
                     }

                     uVar17 = uVar6 + 1;
                     if (iVar11 < 1) {
                        if (iVar11 < (int)( uVar17 - local_68 )) {
                           iVar11 = uVar17 - local_68;
                        }

                        uVar16 = iVar11 + local_68;
                        uVar12 = uVar17 - iVar11;
                        uVar10 = uVar17;
                     }
 else {
                        uVar16 = iVar11 + local_68;
                        if (0x40 < uVar16) break;
                        uVar10 = (uint)local_58;
                        uVar12 = uVar17;
                        if ((uint)local_58 < uVar16) {
                           local_58 = (ulong)uVar16;
                           uVar7 = 4;
                           if (3 < uVar10) {
                              uVar7 = uVar10;
                           }

                           if ((double)(int)uVar16 < (double)(int)uVar7 * __LC2) {
                              local_58 = ( ulong )((double)(int)uVar7 * __LC2);
                           }

                           if (param_3 == local_70) {
                              __size = ( local_58 & 0xffffffff ) << 2;
                              local_70 = (uint*)malloc(__size);
                              if (local_70 == (uint*)0x0) goto LAB_00102786;
                              __memcpy_chk(local_70, param_3, (ulong)local_68 << 2, __size);
                              uVar10 = iVar11 + uVar17;
                           }
 else {
                              puVar9 = (uint*)realloc(local_70, ( local_58 & 0xffffffff ) << 2);
                              if (puVar9 == (uint*)0x0) goto LAB_00102786;
                              uVar10 = iVar11 + uVar17;
                              local_70 = puVar9;
                           }

                        }
 else {
                           uVar10 = iVar11 + uVar17;
                        }

                     }

                     memmove(local_70 + (long)iVar11 + (ulong)uVar12, local_70 + uVar12, ( ulong )(local_68 - uVar12) * 4);
                     if (uVar17 < uVar10) {
                        uVar12 = local_70[uVar14];
                        puVar9 = local_70 + uVar17;
                        do {
                           uVar12 = uVar12 + 1;
                           puVar8 = puVar9 + 1;
                           *puVar9 = uVar12;
                           puVar9 = puVar8;
                        }
 while ( local_70 + ( ( -2 - uVar6 ) + uVar10 ) + uVar14 + 2 != puVar8 );
                     }

                     local_68 = uVar16;
                     if (uVar10 < uVar16) {
                        puVar9 = local_70 + uVar10;
                        puVar8 = local_70 + ( ulong )(( uVar16 - 1 ) - uVar10) + (ulong)uVar10 + 1;
                        if (( (int)puVar8 - (int)puVar9 & 4U ) != 0) {
                           *puVar9 = *puVar9 + iVar11;
                           puVar9 = puVar9 + 1;
                           if (puVar9 == puVar8) goto LAB_00102755;
                        }

                        do {
                           *puVar9 = *puVar9 + iVar11;
                           puVar9[1] = puVar9[1] + iVar11;
                           puVar9 = puVar9 + 2;
                        }
 while ( puVar9 != puVar8 );
                     }

                  }

               }

            }

         }

      }
 while ( param_5 != pLVar1 );
      if (local_70 != param_3) {
         LAB_00102786:free(local_70);
      }

   }

   hb_buffer_t::move_to((uint)lVar3);
   return;
}
/* OT::hb_ot_apply_context_t::match_properties_mark(unsigned int, unsigned int, unsigned int) const
   [clone .isra.0] */bool OT::hb_ot_apply_context_t::match_properties_mark(hb_ot_apply_context_t *this, uint param_1, uint param_2, uint param_3) {
   ushort uVar1;
   uint uVar2;
   int iVar3;
   char cVar5;
   undefined *puVar4;
   short *psVar6;
   uint *puVar7;
   Coverage *this_00;
   ulong *puVar8;
   if (( param_3 & 0x10 ) == 0) {
      cVar5 = (char)( param_3 >> 8 );
      if (cVar5 == '\0') {
         return true;
      }

      return cVar5 == (char)( param_2 >> 8 );
   }

   puVar8 = (ulong*)&_hb_NullPool;
   uVar2 = param_3 >> 0x10;
   if (uVar2 < *(uint*)( this + 0xc )) {
      puVar8 = (ulong*)( *(long*)( this + 0x10 ) + (ulong)uVar2 * 0x18 );
   }

   if (( ( ( 1L << ( ( byte )(param_1 >> 4) & 0x3f ) & *puVar8 ) != 0 ) && ( ( 1L << ( (byte)param_1 & 0x3f ) & puVar8[1] ) != 0 ) ) && ( ( 1L << ( ( byte )(param_1 >> 9) & 0x3f ) & puVar8[2] ) != 0 )) {
      puVar4 = *(undefined**)this;
      if (puVar4 == (undefined*)0x0) {
         puVar4 = &_hb_NullPool;
      }

      psVar6 = (short*)&_hb_NullPool;
      if (3 < *(uint*)( puVar4 + 0x18 )) {
         psVar6 = *(short**)( puVar4 + 0x10 );
      }

      if (( ( *psVar6 == 0x100 ) && ( 0x10001 < ( ushort )(psVar6[1] << 8 | (ushort)psVar6[1] >> 8) + 0x10000 ) ) && ( uVar1 = uVar1 != 0 )) {
         psVar6 = (short*)( (long)psVar6 + ( ulong )(ushort)(uVar1 << 8 | uVar1 >> 8) );
      }
 else {
         psVar6 = (short*)&_hb_NullPool;
      }

      if (*psVar6 == 0x100) {
         puVar7 = (uint*)&_hb_NullPool;
         if (uVar2 < ( ushort )(psVar6[1] << 8 | (ushort)psVar6[1] >> 8)) {
            puVar7 = (uint*)( psVar6 + ( ulong )(uVar2 + 1) * 2 );
         }

         uVar2 = *puVar7;
         this_00 = (Coverage*)&_hb_NullPool;
         if (uVar2 != 0) {
            this_00 = (Coverage*)( (long)psVar6 + ( ulong )(uVar2 >> 0x18 | ( uVar2 & 0xff0000 ) >> 8 | ( uVar2 & 0xff00 ) << 8 | uVar2 << 0x18) );
         }

         iVar3 = Layout::Common::Coverage::get_coverage(this_00, param_1);
         return iVar3 != -1;
      }

   }

   return false;
}
/* OT::match_coverage(hb_glyph_info_t&, unsigned int, void const*) */bool OT::match_coverage(hb_glyph_info_t *param_1, uint param_2, void *param_3) {
   int iVar1;
   Coverage *this;
   this(Coverage * ) & _hb_NullPool;
   if ((ushort)param_2 != 0) {
      this(Coverage * )((long)param_3 + (ulong)(ushort)param_2);
   }

   iVar1 = Layout::Common::Coverage::get_coverage(this, *(uint*)param_1);
   return iVar1 != -1;
}
/* setup_masks_arabic_plan(arabic_shape_plan_t const*, hb_buffer_t*, hb_script_t) */void setup_masks_arabic_plan(long param_1, hb_buffer_t *param_2, int param_3) {
   uint *puVar1;
   long lVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   uint *puVar6;
   char cVar7;
   ulong uVar8;
   undefined1 *puVar9;
   long lVar10;
   ulong uVar11;
   bool bVar12;
   byte bVar13;
   bool bVar14;
   ulong uVar15;
   ulong uVar16;
   uint uVar17;
   ulong local_50;
   lVar10 = 0;
   puVar1 = *(uint**)( param_2 + 0x70 );
   param_2[0xb8] = ( hb_buffer_t )((byte)param_2[0xb8] | 0x80);
   uVar5 = *(uint*)( param_2 + 0x60 );
   if (*(int*)( param_2 + 0xb0 ) != 0) {
      do {
         lVar2 = *(long*)( param_2 + 0x10 );
         uVar3 = ( **(code**)( lVar2 + 0x28 ) )(lVar2, *(undefined4*)( param_2 + lVar10 * 4 + 0x88 ), *(undefined8*)( lVar2 + 0x68 ));
         uVar4 = joining_type(*(uint*)( param_2 + lVar10 * 4 + 0x88 ));
         if (uVar4 == 8) {
            if (0x1f < uVar3) break;
            uVar3 = 1 << ( (byte)uVar3 & 0x1f ) & 0x1802;
            uVar8 = (ulong)uVar3;
            if (uVar3 == 0) goto LAB_00102b45;
         }
 else if (uVar4 != 7) {
            uVar8 = ( ulong ) * (ushort*)( arabic_state_table + (ulong)uVar4 * 4 + 2 );
            LAB_00102b45:uVar3 = (uint)uVar8;
            goto joined_r0x00102b4b;
         }

         lVar10 = lVar10 + 1;
      }
 while ( (uint)lVar10 < *(uint*)( param_2 + 0xb0 ) );
   }

   uVar8 = 0;
   uVar3 = 0;
   joined_r0x00102b4b:if (uVar5 == 0) {
      uVar4 = 0xffffffff;
   }
 else {
      uVar11 = 0xffffffff;
      puVar6 = puVar1;
      uVar16 = 0;
      do {
         bVar13 = (byte)(short)puVar6[4];
         uVar17 = (int)uVar16 + 1;
         uVar3 = joining_type(*puVar6);
         uVar4 = (uint)uVar11;
         if (uVar3 == 8) {
            if (( 1 << ( bVar13 & 0x1f ) & 0x1802U ) != 0) goto LAB_00102dc8;
            uVar15 = 0;
            local_50 = 0;
            cVar7 = arabic_state_table[( uVar8 & 0xffffffff ) * 0x18];
            if (cVar7 == '\a') {
               if (uVar4 != 0xffffffff) {
                  LAB_00102e28:local_50 = uVar15;
                  if ((int)uVar8 - 2U < 4) goto LAB_00102c5b;
               }

            }
 else if (uVar4 != 0xffffffff) goto LAB_00102b89;
            LAB_00102bdf:uVar11 = uVar16 & 0xffffffff;
            lVar10 = local_50 + ( uVar8 & 0xffffffff ) * 6;
            uVar8 = ( ulong ) * (ushort*)( arabic_state_table + lVar10 * 4 + 2 );
            *(undefined1*)( (long)puVar6 + 0x13 ) = arabic_state_table[lVar10 * 4 + 1];
         }
 else {
            if (uVar3 != 7) {
               local_50 = (ulong)uVar3;
               cVar7 = arabic_state_table[( local_50 + ( uVar8 & 0xffffffff ) * 6 ) * 4];
               uVar15 = local_50;
               if (cVar7 == '\a') {
                  if (uVar4 != 0xffffffff) {
                     if (uVar3 < 2) goto LAB_00102e28;
                     LAB_00102c5b:if (( (byte)param_2[0x18] & 0x40 ) != 0) {
                        hb_buffer_t::_set_glyph_flags(param_2, 2, uVar4, uVar17, false, false);
                        uVar16 = uVar16 & 0xffffffff;
                     }

                     goto LAB_00102bdf;
                  }

                  LAB_00102ca8:if (( uVar3 < 2 ) || ( ( (byte)param_2[0x18] & 0x40 ) == 0 )) goto LAB_00102bdf;
                  bVar14 = true;
                  bVar12 = false;
                  uVar4 = 0;
                  uVar3 = 2;
               }
 else {
                  if (uVar4 == 0xffffffff) goto LAB_00102ca8;
                  LAB_00102b89:bVar14 = false;
                  bVar12 = true;
                  *(char*)( (long)puVar1 + ( uVar11 & 0xffffffff ) * 0x14 + 0x13 ) = cVar7;
                  local_50 = uVar15;
                  if (( (byte)param_2[0x18] & 0x80 ) == 0) {
                     uVar3 = 3;
                  }
 else {
                     uVar3 = 4;
                  }

               }

               hb_buffer_t::_set_glyph_flags(param_2, uVar3, uVar4, uVar17, bVar12, bVar14);
               uVar16 = uVar16 & 0xffffffff;
               goto LAB_00102bdf;
            }

            LAB_00102dc8:*(undefined1*)( (long)puVar6 + 0x13 ) = 7;
         }

         uVar4 = (uint)uVar11;
         uVar3 = (uint)uVar8;
         puVar6 = puVar6 + 5;
         uVar16 = (ulong)uVar17;
      }
 while ( uVar5 != uVar17 );
   }

   lVar10 = 0;
   if (*(int*)( param_2 + 0xb4 ) != 0) {
      do {
         lVar2 = *(long*)( param_2 + 0x10 );
         uVar5 = ( **(code**)( lVar2 + 0x28 ) )(lVar2, *(undefined4*)( param_2 + lVar10 * 4 + 0x9c ), *(undefined8*)( lVar2 + 0x68 ));
         uVar17 = joining_type(*(uint*)( param_2 + lVar10 * 4 + 0x9c ));
         if (uVar17 == 8) {
            if (uVar5 < 0x20) {
               uVar17 = 1 << ( (byte)uVar5 & 0x1f ) & 0x1802;
               if (uVar17 != 0) goto LAB_00102fd0;
            }
 else {
               uVar17 = 0;
            }

            LAB_00102d46:if (( uVar4 != 0xffffffff ) && ( arabic_state_table[(ulong)uVar17 * 4 + (ulong)uVar3 * 0x18] != '\a' )) {
               *(undefined1*)( (long)puVar1 + (ulong)uVar4 * 0x14 + 0x13 ) = arabic_state_table[(ulong)uVar17 * 4 + (ulong)uVar3 * 0x18];
               if (( (byte)param_2[0x18] & 0x80 ) != 0) {
                  hb_buffer_t::_set_glyph_flags(param_2, 4, uVar4, *(uint*)( param_2 + 0x60 ), true, false);
                  uVar8 = ( ulong ) * (uint*)( param_2 + 0x60 );
                  lVar10 = *(long*)( param_2 + 0x70 );
                  goto joined_r0x00102eb5;
               }

               hb_buffer_t::_set_glyph_flags(param_2, 3, uVar4, *(uint*)( param_2 + 0x60 ), true, false);
               uVar8 = ( ulong ) * (uint*)( param_2 + 0x60 );
               goto LAB_00102d7d;
            }

            uVar8 = ( ulong ) * (uint*)( param_2 + 0x60 );
            if (( 3 < uVar3 - 2 ) || ( ( (byte)param_2[0x18] & 0x40 ) == 0 )) goto LAB_00102d7d;
            hb_buffer_t::_set_glyph_flags(param_2, 2, uVar4, *(uint*)( param_2 + 0x60 ), false, false);
            break;
         }

         if (uVar17 != 7) goto LAB_00102d46;
         LAB_00102fd0:lVar10 = lVar10 + 1;
      }
 while ( (uint)lVar10 < *(uint*)( param_2 + 0xb4 ) );
   }

   uVar8 = ( ulong ) * (uint*)( param_2 + 0x60 );
   LAB_00102d7d:lVar10 = *(long*)( param_2 + 0x70 );
   joined_r0x00102eb5:if (( param_3 == 0x4d6f6e67 ) && ( 1 < (uint)uVar8 )) {
      puVar9 = (undefined1*)( lVar10 + 0x13 );
      do {
         if (( *(int*)( puVar9 + 1 ) - 0x180bU < 3 ) || ( *(int*)( puVar9 + 1 ) == 0x180f )) {
            puVar9[0x14] = *puVar9;
         }

         puVar9 = puVar9 + 0x14;
      }
 while ( (undefined1*)( lVar10 + 0x27 + ( ulong )((uint)uVar8 - 2) * 0x14 ) != puVar9 );
      uVar8 = ( ulong ) * (uint*)( param_2 + 0x60 );
      lVar10 = *(long*)( param_2 + 0x70 );
   }

   if ((int)uVar8 != 0) {
      puVar6 = (uint*)( lVar10 + 4 );
      puVar1 = puVar6 + uVar8 * 5;
      do {
         *puVar6 = *puVar6 | *(uint*)( param_1 + ( ulong ) * (byte*)( (long)puVar6 + 0xf ) * 4 );
         puVar6 = puVar6 + 5;
      }
 while ( puVar1 != puVar6 );
   }

   return;
}
/* setup_masks_arabic(hb_ot_shape_plan_t const*, hb_buffer_t*, hb_font_t*) */void setup_masks_arabic(hb_ot_shape_plan_t *param_1, hb_buffer_t *param_2, hb_font_t *param_3) {
   setup_masks_arabic_plan(*(undefined8*)( param_1 + 0x88 ), param_2, *(undefined4*)( param_1 + 4 ));
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* bool OT::OffsetTo<OT::Layout::Common::Coverage, OT::IntType<unsigned short, 2u>, void,
   true>::serialize_serialize<hb_sorted_array_t<OT::HBGlyphID16 const>&>(hb_serialize_context_t*,
   hb_sorted_array_t<OT::HBGlyphID16 const>&) [clone .part.0] */bool OT::OffsetTo<OT::Layout::Common::Coverage,OT::IntType<unsigned_short,2u>,void,true>::serialize_serialize<hb_sorted_array_t<OT::HBGlyphID16_const>&>(hb_serialize_context_t *param_1, hb_sorted_array_t *param_2) {
   uint uVar1;
   undefined8 uVar2;
   uint uVar3;
   int iVar4;
   undefined4 *puVar5;
   void *pvVar6;
   uint uVar7;
   undefined8 *puVar8;
   uint uVar9;
   puVar5 = (undefined4*)hb_serialize_context_t::pop_pack((hb_serialize_context_t*)param_2, true);
   if (( *(int*)( param_2 + 0x2c ) != 0 ) || ( iVar4 = iVar4 == 0 )) goto LAB_001030dc;
   puVar8 = *(undefined8**)( param_2 + 0x48 );
   uVar7 = *(uint*)( puVar8 + 2 );
   uVar1 = *(uint*)( (long)puVar8 + 0x14 );
   if ((int)uVar7 < 0) {
      LAB_0010313e:__hb_CrapPool = __hb_NullPool;
      _memset = __hb_Null_OT_RangeRecord;
      puVar5 = (undefined4*)&_hb_CrapPool;
   }
 else {
      uVar3 = uVar1 + 1;
      if ((int)( uVar1 + 1 ) < 0) {
         uVar3 = 0;
      }

      uVar9 = uVar7;
      if (uVar7 < uVar3) {
         do {
            uVar9 = ( uVar9 >> 1 ) + 8 + uVar9;
         }
 while ( uVar9 < uVar3 );
         if (uVar9 < 0x15555556) {
            pvVar6 = realloc((void*)puVar8[3], (ulong)uVar9 * 0xc);
            if (pvVar6 != (void*)0x0) {
               puVar8[3] = pvVar6;
               uVar1 = *(uint*)( (long)puVar8 + 0x14 );
               *(uint*)( puVar8 + 2 ) = uVar9;
               goto LAB_00103084;
            }

            if (uVar9 <= *(uint*)( puVar8 + 2 )) {
               uVar1 = *(uint*)( (long)puVar8 + 0x14 );
               goto LAB_00103080;
            }

            *(uint*)( puVar8 + 2 ) = ~*(uint *)(puVar8 + 2);
            puVar8 = *(undefined8**)( param_2 + 0x48 );
         }
 else {
            *(uint*)( puVar8 + 2 ) = ~uVar7;
         }

         goto LAB_0010313e;
      }

      LAB_00103080:pvVar6 = (void*)puVar8[3];
      LAB_00103084:if (uVar1 < uVar3) {
         uVar7 = ( uVar3 - uVar1 ) * 0xc;
         if (uVar7 != 0) {
            memset((void*)( (long)pvVar6 + (ulong)uVar1 * 0xc ), 0, (ulong)uVar7);
            pvVar6 = (void*)puVar8[3];
         }

      }

      *(uint*)( (long)puVar8 + 0x14 ) = uVar3;
      puVar8 = *(undefined8**)( param_2 + 0x48 );
      puVar5 = (undefined4*)( (long)pvVar6 + ( ulong )(uVar3 - 1) * 0xc );
   }

   if (*(int*)( puVar8 + 2 ) < 0) {
      *(uint*)( param_2 + 0x2c ) = *(uint*)( param_2 + 0x2c ) | 1;
   }

   uVar2 = *puVar8;
   puVar5[2] = iVar4;
   puVar5[1] = (int)param_1 - (int)uVar2;
   *puVar5 = 2;
   LAB_001030dc:return SUB81(puVar5, 0);
}
/* arabic_fallback_plan_shape(arabic_fallback_plan_t*, hb_font_t*, hb_buffer_t*) */void arabic_fallback_plan_shape(arabic_fallback_plan_t *param_1, hb_font_t *param_2, hb_buffer_t *param_3) {
   hb_blob_t *phVar1;
   long lVar2;
   long in_FS_OFFSET;
   hb_ot_apply_context_t ahStack_188[16];
   undefined1 *local_178;
   undefined4 local_16c;
   undefined1 local_168;
   short local_166;
   undefined1 local_164;
   undefined8 local_160;
   undefined1 local_158[16];
   undefined4 local_148;
   hb_ot_apply_context_t *local_138;
   undefined4 local_12c;
   undefined1 local_128;
   undefined1 local_127;
   undefined1 local_126;
   byte local_125;
   undefined1 local_124;
   undefined8 local_120;
   undefined1 local_118[16];
   undefined4 local_108;
   int local_100;
   long local_e8;
   long local_b0;
   void *local_80;
   undefined4 local_5c;
   undefined1 local_4b;
   byte local_49;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   phVar1 = (hb_blob_t*)hb_blob_get_empty();
   lVar2 = 0;
   OT::hb_ot_apply_context_t::hb_ot_apply_context_t(ahStack_188, 0, param_2, param_3, phVar1);
   if (*(int*)param_1 != 0) {
      do {
         if (*(SubstLookup**)( param_1 + lVar2 * 8 + 0x28 ) != (SubstLookup*)0x0) {
            local_16c = *(undefined4*)( param_1 + lVar2 * 4 + 8 );
            local_40 = 0xffffffff;
            local_158 = (undefined1[16])0x0;
            local_160 = 0;
            local_148 = *(undefined4*)( local_e8 + 0x60 );
            if (local_100 == 1) {
               local_166 = 1;
               local_125 = 0;
               local_126 = 1;
               local_168 = 1;
               local_128 = 1;
            }
 else {
               local_168 = 0;
               local_125 = local_49;
               if (local_100 != 0) {
                  local_125 = 0;
               }

               local_166 = (ushort)local_125 << 8;
               local_126 = 0;
               local_128 = local_4b;
            }

            local_138 = ahStack_188;
            local_118 = (undefined1[16])0x0;
            local_120 = 0;
            local_164 = 0;
            local_127 = 1;
            local_12c = 0xffffffff;
            local_124 = 0;
            local_178 = ahStack_188;
            local_108 = local_148;
            local_5c = local_16c;
            if (*(hb_ot_layout_lookup_accelerator_t**)( param_1 + lVar2 * 8 + 0x60 ) != (hb_ot_layout_lookup_accelerator_t*)0x0) {
               local_178 = ahStack_188;
               hb_ot_layout_substitute_lookup(ahStack_188, *(SubstLookup**)( param_1 + lVar2 * 8 + 0x28 ), *(hb_ot_layout_lookup_accelerator_t**)( param_1 + lVar2 * 8 + 0x60 ));
            }

         }

         lVar2 = lVar2 + 1;
      }
 while ( (uint)lVar2 < *(uint*)param_1 );
   }

   free(local_80);
   if (local_b0 != 0) {
      hb_blob_destroy();
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OT::Layout::GSUB_impl::SubstLookup::serialize_ligature(hb_serialize_context_t*, unsigned int,
   hb_sorted_array_t<OT::HBGlyphID16 const>, hb_array_t<unsigned int const>,
   hb_array_t<OT::HBGlyphID16 const>, hb_array_t<unsigned int const>, hb_array_t<OT::HBGlyphID16
   const>) [clone .isra.0] */ulong OT::Layout::GSUB_impl::SubstLookup::serialize_ligature(Lookup *param_1, hb_serialize_context_t *param_2, uint param_3, undefined8 param_4, undefined8 param_5, uint *param_6, uint param_7, long param_8, uint param_9, int *param_10, uint param_11, undefined2 *param_12, uint param_13) {
   hb_pool_t<hb_serialize_context_t::object_t,32u> *this;
   hb_serialize_context_t *phVar1;
   undefined2 uVar2;
   undefined2 *puVar3;
   long lVar4;
   ushort *puVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   char cVar8;
   bool bVar9;
   ushort uVar10;
   int iVar11;
   undefined8 *puVar12;
   uint *puVar13;
   int *piVar14;
   undefined7 extraout_var;
   void *pvVar15;
   uint uVar16;
   uint uVar17;
   uint uVar18;
   uint uVar19;
   size_t sVar20;
   undefined2 *puVar21;
   uint uVar22;
   uint uVar23;
   ulong uVar24;
   hb_serialize_context_t *phVar25;
   ulong uVar26;
   ushort *puVar27;
   undefined4 *puVar28;
   undefined8 uVar29;
   undefined4 *puVar30;
   undefined4 *puVar31;
   uint uVar32;
   uint uVar33;
   uint uVar34;
   int *piVar35;
   int iVar36;
   undefined2 *local_f8;
   ushort *local_f0;
   ulong local_d0;
   long local_c8;
   int *local_b8;
   undefined2 *local_b0;
   uint local_a4;
   uint *local_a0;
   undefined2 *local_98;
   uint local_78;
   cVar8 = Lookup::serialize(param_1, param_2, 4, param_3, 1);
   if (cVar8 == '\0') {
      return 0;
   }

   if (*(int*)( param_2 + 0x2c ) != 0) {
      LAB_001035ed:hb_serialize_context_t::pop_discard(param_2);
      return 0;
   }

   this(hb_pool_t<hb_serialize_context_t::object_t,32u> * )(param_2 + 0x30);
   puVar12 = (undefined8*)hb_pool_t<hb_serialize_context_t::object_t,32u>::alloc(this);
   if (puVar12 == (undefined8*)0x0) {
      if (*(int*)( param_2 + 0x2c ) == 0) {
         *(undefined4*)( param_2 + 0x2c ) = 1;
      }

      goto LAB_001035ed;
   }

   uVar29 = *(undefined8*)( param_2 + 8 );
   uVar6 = *(undefined8*)( param_2 + 0x10 );
   local_b8 = param_10;
   puVar3 = *(undefined2**)( param_2 + 8 );
   iVar11 = *(int*)( param_2 + 0x2c );
   local_c8 = param_8;
   puVar12[6] = *(undefined8*)( param_2 + 0x48 );
   local_f0._0_4_ = (uint)param_5;
   uVar16 = (uint)local_f0;
   *puVar12 = uVar29;
   puVar12[1] = uVar6;
   *(undefined8**)( param_2 + 0x48 ) = puVar12;
   local_78 = param_11;
   local_a4 = param_9;
   local_f8 = param_12;
   if (iVar11 != 0) goto LAB_001035ed;
   pvVar15 = *(void**)( param_2 + 8 );
   phVar1 = (hb_serialize_context_t*)( puVar3 + 1 );
   uVar24 = (long)phVar1 - (long)pvVar15;
   if (( 0x7fffffff < uVar24 ) || ( *(hb_serialize_context_t**)( param_2 + 0x10 ) < phVar1 )) {
      LAB_0010360e:*(undefined4*)( param_2 + 0x2c ) = 4;
      hb_serialize_context_t::pop_discard(param_2);
      return 0;
   }

   phVar25 = phVar1;
   if ((int)uVar24 != 0) {
      memset(pvVar15, 0, uVar24);
      pvVar15 = *(void**)( param_2 + 8 );
      phVar25 = (hb_serialize_context_t*)( uVar24 + (long)pvVar15 );
   }

   *(hb_serialize_context_t**)( param_2 + 8 ) = phVar25;
   if (( ( pvVar15 == (void*)0x0 ) || ( puVar3 == (undefined2*)0x0 ) ) || ( *puVar3 = 0x100 * (int*)( param_2 + 0x2c ) != 0 )) goto LAB_001035ed;
   pvVar15 = *(void**)( param_2 + 8 );
   local_98 = puVar3 + 3;
   uVar24 = (long)local_98 - (long)pvVar15;
   if (( 0x7fffffff < uVar24 ) || ( *(undefined2**)( param_2 + 0x10 ) < local_98 )) goto LAB_0010360e;
   puVar21 = local_98;
   if ((int)uVar24 != 0) {
      memset(pvVar15, 0, uVar24);
      pvVar15 = *(void**)( param_2 + 8 );
      puVar21 = (undefined2*)( (long)pvVar15 + uVar24 );
   }

   *(undefined2**)( param_2 + 8 ) = puVar21;
   if (( pvVar15 == (void*)0x0 ) || ( *(int*)( param_2 + 0x2c ) != 0 )) goto LAB_001035ed;
   uVar24 = (long)local_98 - (long)puVar21;
   if (( 0x7fffffff < uVar24 ) || ( *(undefined2**)( param_2 + 0x10 ) < local_98 )) goto LAB_0010360e;
   if ((int)uVar24 == 0) {
      *(undefined2**)( param_2 + 8 ) = local_98;
   }
 else {
      memset(puVar21, 0, uVar24);
      lVar4 = *(long*)( param_2 + 8 );
      *(ulong*)( param_2 + 8 ) = uVar24 + lVar4;
      if (lVar4 == 0) goto LAB_001035ed;
   }

   uVar10 = (ushort)param_5;
   puVar3[2] = uVar10 << 8 | uVar10 >> 8;
   if ((uint)local_f0 != ( ushort )(( uVar10 >> 8 ) << 8 | uVar10 & 0xff)) {
      *(uint*)( param_2 + 0x2c ) = *(uint*)( param_2 + 0x2c ) | 0x10;
      goto LAB_001035ed;
   }

   if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_001035ed;
   pvVar15 = *(void**)( param_2 + 8 );
   uVar24 = (long)puVar3 + ( ulong )((uint)local_f0 * 2 + 2) + 4;
   uVar26 = uVar24 - (long)pvVar15;
   if (( 0x7fffffff < uVar26 ) || ( *(ulong*)( param_2 + 0x10 ) < uVar24 )) goto LAB_0010360e;
   if ((int)uVar26 != 0) {
      memset(pvVar15, 0, uVar26);
      pvVar15 = *(void**)( param_2 + 8 );
      uVar24 = (long)pvVar15 + uVar26;
   }

   *(ulong*)( param_2 + 8 ) = uVar24;
   if (pvVar15 == (void*)0x0) goto LAB_001035ed;
   if ((uint)local_f0 != 0) {
      uVar23 = 0;
      local_a0 = param_6;
      do {
         puVar13 = (uint*)&_hb_NullPool;
         if (uVar23 < param_7) {
            puVar13 = local_a0;
         }

         uVar33 = *puVar13;
         if (uVar23 < ( ushort )(puVar3[2] << 8 | (ushort)puVar3[2] >> 8)) {
            local_b0 = local_98;
         }
 else {
            local_b0 = (undefined2*)&_hb_CrapPool;
            __hb_CrapPool = CONCAT62(_hb_CrapPool_2, __hb_NullPool);
         }

         uVar17 = local_a4;
         if (uVar33 <= local_a4) {
            uVar17 = uVar33;
         }

         *local_b0 = 0;
         if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_00103800;
         puVar12 = (undefined8*)hb_pool_t<hb_serialize_context_t::object_t,32u>::alloc(this);
         if (puVar12 == (undefined8*)0x0) {
            if (*(int*)( param_2 + 0x2c ) == 0) {
               *(undefined4*)( param_2 + 0x2c ) = 1;
            }

            goto LAB_00103800;
         }

         uVar29 = *(undefined8*)( param_2 + 8 );
         uVar6 = *(undefined8*)( param_2 + 0x10 );
         puVar5 = *(ushort**)( param_2 + 8 );
         puVar12[6] = *(undefined8*)( param_2 + 0x48 );
         *puVar12 = uVar29;
         puVar12[1] = uVar6;
         *(undefined8**)( param_2 + 0x48 ) = puVar12;
         if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_00103800;
         local_f0 = puVar5 + 1;
         if (*(ushort**)( param_2 + 0x10 ) < local_f0) {
            LAB_00103fb4:*(undefined4*)( param_2 + 0x2c ) = 4;
            goto LAB_00103800;
         }

         *puVar5 = 0;
         lVar4 = *(long*)( param_2 + 8 );
         *(void**)( param_2 + 8 ) = (void*)( lVar4 + 2 );
         if (( lVar4 == 0 ) || ( *(int*)( param_2 + 0x2c ) != 0 )) goto LAB_00103800;
         uVar24 = (long)puVar5 - lVar4;
         if (( 0x7fffffff < uVar24 ) || ( *(ushort**)( param_2 + 0x10 ) < local_f0 )) goto LAB_00103fb4;
         if ((int)uVar24 == 0) {
            *(ushort**)( param_2 + 8 ) = local_f0;
         }
 else {
            memset((void*)( lVar4 + 2 ), 0, uVar24);
            lVar4 = *(long*)( param_2 + 8 );
            *(ulong*)( param_2 + 8 ) = uVar24 + lVar4;
            if (lVar4 == 0) goto LAB_00103800;
         }

         uVar10 = (ushort)uVar17;
         *puVar5 = uVar10 << 8 | uVar10 >> 8;
         if (( ushort )(( uVar10 >> 8 ) << 8 | uVar10 & 0xff) != uVar17) {
            *(uint*)( param_2 + 0x2c ) = *(uint*)( param_2 + 0x2c ) | 0x10;
            goto LAB_00103800;
         }

         if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_00103800;
         pvVar15 = *(void**)( param_2 + 8 );
         uVar24 = ( ulong )(uVar17 * 2 + 2) + (long)puVar5;
         sVar20 = uVar24 - (long)pvVar15;
         if (( 0x7fffffff < sVar20 ) || ( *(ulong*)( param_2 + 0x10 ) < uVar24 )) goto LAB_00103fb4;
         if ((int)sVar20 != 0) {
            memset(pvVar15, 0, sVar20);
            pvVar15 = *(void**)( param_2 + 8 );
            uVar24 = (long)pvVar15 + sVar20;
         }

         *(ulong*)( param_2 + 8 ) = uVar24;
         if (pvVar15 == (void*)0x0) goto LAB_00103800;
         if (local_78 < uVar33) {
            uVar33 = local_78;
         }

         if (uVar17 == 0) {
            local_d0 = 0;
         }
 else {
            local_d0 = (ulong)uVar17;
            uVar24 = 0;
            piVar35 = local_b8;
            do {
               piVar14 = (int*)&_hb_NullPool;
               if ((uint)uVar24 < uVar33) {
                  piVar14 = piVar35;
               }

               uVar22 = *piVar14 - 1;
               if ((int)uVar22 < 0) {
                  uVar22 = 0;
               }

               puVar27 = local_f0;
               if (( uint )(ushort)(*puVar5 << 8 | *puVar5 >> 8) <= (uint)uVar24) {
                  __hb_CrapPool = CONCAT62(_hb_CrapPool_2, __hb_NullPool);
                  puVar27 = (ushort*)&_hb_CrapPool;
               }

               if (param_13 < uVar22) {
                  uVar22 = param_13;
               }

               *puVar27 = 0;
               if (*(int*)( param_2 + 0x2c ) != 0) {
                  LAB_00103a0e:hb_serialize_context_t::pop_discard(param_2);
                  goto LAB_00103800;
               }

               puVar12 = (undefined8*)hb_pool_t<hb_serialize_context_t::object_t,32u>::alloc(this);
               if (puVar12 == (undefined8*)0x0) {
                  if (*(int*)( param_2 + 0x2c ) == 0) {
                     *(undefined4*)( param_2 + 0x2c ) = 1;
                  }

                  goto LAB_00103a0e;
               }

               uVar29 = *(undefined8*)( param_2 + 8 );
               uVar6 = *(undefined8*)( param_2 + 0x10 );
               puVar30 = *(undefined4**)( param_2 + 8 );
               iVar11 = *(int*)( param_2 + 0x2c );
               puVar12[6] = *(undefined8*)( param_2 + 0x48 );
               *puVar12 = uVar29;
               puVar12[1] = uVar6;
               *(undefined8**)( param_2 + 0x48 ) = puVar12;
               uVar2 = *(undefined2*)( local_c8 + uVar24 * 2 );
               if (iVar11 != 0) goto LAB_00103a0e;
               puVar28 = puVar30 + 1;
               if (*(undefined4**)( param_2 + 0x10 ) < puVar28) {
                  LAB_00103f40:*(undefined4*)( param_2 + 0x2c ) = 4;
                  goto LAB_00103a0e;
               }

               *puVar30 = 0;
               lVar4 = *(long*)( param_2 + 8 );
               *(long*)( param_2 + 8 ) = lVar4 + 4;
               if (( lVar4 == 0 ) || ( *(undefined2*)puVar30 = uVar2 * (int*)( param_2 + 0x2c ) != 0 )) goto LAB_00103a0e;
               pvVar15 = *(void**)( param_2 + 8 );
               sVar20 = (long)puVar28 - (long)pvVar15;
               if (( 0x7fffffff < sVar20 ) || ( *(undefined4**)( param_2 + 0x10 ) < puVar28 )) goto LAB_00103f40;
               if ((int)sVar20 != 0) {
                  memset(pvVar15, 0, sVar20);
                  pvVar15 = *(void**)( param_2 + 8 );
                  puVar28 = (undefined4*)( (long)pvVar15 + sVar20 );
               }

               *(undefined4**)( param_2 + 8 ) = puVar28;
               if (pvVar15 == (void*)0x0) goto LAB_00103a0e;
               uVar18 = uVar22 + 1;
               uVar10 = (ushort)uVar18;
               *(ushort*)( (long)puVar30 + 2 ) = uVar10 << 8 | uVar10 >> 8;
               if (uVar18 != ( ushort )(( uVar10 >> 8 ) << 8 | uVar10 & 0xff)) {
                  *(uint*)( param_2 + 0x2c ) = *(uint*)( param_2 + 0x2c ) | 0x10;
                  goto LAB_00103a0e;
               }

               if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_00103a0e;
               uVar26 = (long)puVar30 + ( ulong )(uVar18 * 2) + 2;
               lVar4 = *(long*)( param_2 + 8 );
               if (( 0x7fffffff < uVar26 - lVar4 ) || ( *(ulong*)( param_2 + 0x10 ) < uVar26 )) goto LAB_00103f40;
               *(ulong*)( param_2 + 8 ) = uVar26;
               if (lVar4 == 0) goto LAB_00103a0e;
               if (uVar22 == 0) {
                  uVar26 = 0;
               }
 else {
                  uVar26 = (ulong)uVar22;
                  puVar28 = (undefined4*)( (long)puVar30 + uVar26 * 2 );
                  puVar21 = local_f8;
                  uVar18 = uVar22;
                  do {
                     puVar31 = puVar30;
                     uVar2 = *puVar21;
                     puVar30 = (undefined4*)( (long)puVar31 + 2 );
                     uVar18 = uVar18 - 1;
                     puVar21 = puVar21 + 1;
                     *(undefined2*)( puVar31 + 1 ) = uVar2;
                     uVar2 = __hb_NullPool;
                     if (puVar30 == puVar28) goto LAB_00103a90;
                  }
 while ( uVar18 != 0 );
                  if (( (int)puVar28 - (int)puVar30 & 2U ) != 0) {
                     *(undefined2*)( (long)puVar31 + 6 ) = __hb_NullPool;
                     puVar30 = puVar31 + 1;
                     if (puVar31 + 1 == puVar28) goto LAB_00103a90;
                  }

                  do {
                     *(undefined2*)( puVar30 + 1 ) = uVar2;
                     puVar31 = puVar30 + 1;
                     *(undefined2*)( (long)puVar30 + 6 ) = uVar2;
                     puVar30 = puVar31;
                  }
 while ( puVar31 != puVar28 );
               }

               LAB_00103a90:iVar11 = hb_serialize_context_t::pop_pack(param_2, true);
               if (( *(int*)( param_2 + 0x2c ) == 0 ) && ( iVar11 != 0 )) {
                  puVar12 = *(undefined8**)( param_2 + 0x48 );
                  uVar18 = *(uint*)( puVar12 + 2 );
                  uVar34 = *(uint*)( (long)puVar12 + 0x14 );
                  if ((int)uVar18 < 0) {
                     LAB_00103f8f:__hb_CrapPool = CONCAT62(_DAT_00116052, __hb_NullPool);
                     _memset = __hb_Null_OT_RangeRecord;
                     puVar30 = (undefined4*)&_hb_CrapPool;
                  }
 else {
                     uVar32 = uVar34 + 1;
                     if ((int)uVar32 < 0) {
                        uVar32 = 0;
                     }

                     uVar19 = uVar18;
                     if (uVar18 < uVar32) {
                        do {
                           uVar19 = ( uVar19 >> 1 ) + 8 + uVar19;
                        }
 while ( uVar19 < uVar32 );
                        if (uVar19 < 0x15555556) {
                           pvVar15 = realloc((void*)puVar12[3], (ulong)uVar19 * 0xc);
                           if (pvVar15 != (void*)0x0) {
                              puVar12[3] = pvVar15;
                              uVar34 = *(uint*)( (long)puVar12 + 0x14 );
                              *(uint*)( puVar12 + 2 ) = uVar19;
                              goto LAB_00103aef;
                           }

                           if (uVar19 <= *(uint*)( puVar12 + 2 )) {
                              uVar34 = *(uint*)( (long)puVar12 + 0x14 );
                              goto LAB_00103aeb;
                           }

                           *(uint*)( puVar12 + 2 ) = ~*(uint *)(puVar12 + 2);
                           puVar12 = *(undefined8**)( param_2 + 0x48 );
                        }
 else {
                           *(uint*)( puVar12 + 2 ) = ~uVar18;
                        }

                        goto LAB_00103f8f;
                     }

                     LAB_00103aeb:pvVar15 = (void*)puVar12[3];
                     LAB_00103aef:if (uVar34 < uVar32) {
                        uVar18 = ( uVar32 - uVar34 ) * 0xc;
                        if (uVar18 != 0) {
                           memset((void*)( (long)pvVar15 + (ulong)uVar34 * 0xc ), 0, (ulong)uVar18);
                           pvVar15 = (void*)puVar12[3];
                        }

                     }

                     *(uint*)( (long)puVar12 + 0x14 ) = uVar32;
                     puVar12 = *(undefined8**)( param_2 + 0x48 );
                     puVar30 = (undefined4*)( (long)pvVar15 + ( ulong )(uVar32 - 1) * 0xc );
                  }

                  if (*(int*)( puVar12 + 2 ) < 0) {
                     *(uint*)( param_2 + 0x2c ) = *(uint*)( param_2 + 0x2c ) | 1;
                  }

                  uVar29 = *puVar12;
                  puVar30[2] = iVar11;
                  puVar30[1] = (int)puVar27 - (int)uVar29;
                  *puVar30 = 2;
               }

               uVar24 = uVar24 + 1;
               param_13 = param_13 - uVar22;
               piVar35 = piVar35 + 1;
               local_f0 = local_f0 + 1;
               local_f8 = local_f8 + uVar26;
            }
 while ( uVar24 != local_d0 );
         }

         iVar11 = hb_serialize_context_t::pop_pack(param_2, true);
         if (( *(int*)( param_2 + 0x2c ) == 0 ) && ( iVar11 != 0 )) {
            puVar12 = *(undefined8**)( param_2 + 0x48 );
            uVar22 = *(uint*)( puVar12 + 2 );
            uVar24 = (ulong)uVar22;
            uVar18 = *(uint*)( (long)puVar12 + 0x14 );
            if ((int)uVar22 < 0) {
               LAB_00104045:__hb_CrapPool = CONCAT62(_DAT_00116052, __hb_NullPool);
               _memset = __hb_Null_OT_RangeRecord;
               puVar30 = (undefined4*)&_hb_CrapPool;
            }
 else {
               uVar34 = uVar18 + 1;
               if ((int)uVar34 < 0) {
                  uVar34 = 0;
               }

               if (uVar22 < uVar34) {
                  do {
                     uVar32 = (int)uVar24 + 8 + (int)( uVar24 >> 1 );
                     uVar24 = (ulong)uVar32;
                  }
 while ( uVar32 < uVar34 );
                  if (uVar32 < 0x15555556) {
                     pvVar15 = realloc((void*)puVar12[3], uVar24 * 0xc);
                     if (pvVar15 != (void*)0x0) {
                        puVar12[3] = pvVar15;
                        uVar18 = *(uint*)( (long)puVar12 + 0x14 );
                        *(uint*)( puVar12 + 2 ) = uVar32;
                        goto LAB_00103c02;
                     }

                     if (uVar32 <= *(uint*)( puVar12 + 2 )) {
                        uVar18 = *(uint*)( (long)puVar12 + 0x14 );
                        goto LAB_00103bfe;
                     }

                     *(uint*)( puVar12 + 2 ) = ~*(uint *)(puVar12 + 2);
                     puVar12 = *(undefined8**)( param_2 + 0x48 );
                  }
 else {
                     *(uint*)( puVar12 + 2 ) = ~uVar22;
                  }

                  goto LAB_00104045;
               }

               LAB_00103bfe:pvVar15 = (void*)puVar12[3];
               LAB_00103c02:if (uVar18 < uVar34) {
                  uVar22 = ( uVar34 - uVar18 ) * 0xc;
                  if (uVar22 != 0) {
                     memset((void*)( (long)pvVar15 + (ulong)uVar18 * 0xc ), 0, (ulong)uVar22);
                     pvVar15 = (void*)puVar12[3];
                  }

               }

               *(uint*)( (long)puVar12 + 0x14 ) = uVar34;
               puVar12 = *(undefined8**)( param_2 + 0x48 );
               puVar30 = (undefined4*)( (long)pvVar15 + ( ulong )(uVar34 - 1) * 0xc );
            }

            if (*(int*)( puVar12 + 2 ) < 0) {
               *(uint*)( param_2 + 0x2c ) = *(uint*)( param_2 + 0x2c ) | 1;
            }

            uVar29 = *puVar12;
            puVar30[2] = iVar11;
            puVar30[1] = (int)local_b0 - (int)uVar29;
            *puVar30 = 2;
         }

         uVar23 = uVar23 + 1;
         local_a4 = local_a4 - uVar17;
         local_c8 = local_c8 + local_d0 * 2;
         local_98 = local_98 + 1;
         local_78 = local_78 - uVar33;
         local_b8 = local_b8 + uVar33;
         local_a0 = local_a0 + 1;
      }
 while ( uVar23 != uVar16 );
   }

   puVar3[1] = 0;
   if (*(int*)( param_2 + 0x2c ) == 0) {
      puVar12 = (undefined8*)hb_pool_t<hb_serialize_context_t::object_t,32u>::alloc(this);
      uVar29 = *(undefined8*)( param_2 + 8 );
      if (puVar12 == (undefined8*)0x0) {
         if (*(int*)( param_2 + 0x2c ) == 0) {
            *(undefined4*)( param_2 + 0x2c ) = 1;
         }

      }
 else {
         uVar7 = *(undefined8*)( param_2 + 0x10 );
         uVar6 = *(undefined8*)( param_2 + 0x48 );
         *puVar12 = *(undefined8*)( param_2 + 8 );
         puVar12[1] = uVar7;
         puVar12[6] = uVar6;
         *(undefined8**)( param_2 + 0x48 ) = puVar12;
      }

   }
 else {
      uVar29 = *(undefined8*)( param_2 + 8 );
   }

   bVar9 = Common::Coverage::serialize<hb_sorted_array_t<OT::HBGlyphID16_const>,(void*)0>(uVar29, param_2, param_4, param_5);
   uVar24 = CONCAT71(extraout_var, bVar9) & 0xffffffff;
   if (!bVar9) {
      LAB_00103800:hb_serialize_context_t::pop_discard(param_2);
      hb_serialize_context_t::pop_discard(param_2);
      return 0;
   }

   OffsetTo<OT::Layout::Common::Coverage,OT::IntType<unsigned_short,2u>,void,true>::serialize_serialize<hb_sorted_array_t<OT::HBGlyphID16_const>&>(phVar1, (hb_sorted_array_t*)param_2);
   iVar11 = hb_serialize_context_t::pop_pack(param_2, true);
   if (*(short*)( param_1 + 4 ) == 0) {
      iVar36 = 0x1160a0;
      __hb_CrapPool = CONCAT62(_hb_CrapPool_2, __hb_NullPool);
   }
 else {
      iVar36 = (int)param_1 + 6;
   }

   if (*(int*)( param_2 + 0x2c ) != 0) {
      return uVar24;
   }

   if (iVar11 == 0) {
      return uVar24;
   }

   puVar12 = *(undefined8**)( param_2 + 0x48 );
   uVar16 = *(uint*)( puVar12 + 2 );
   uVar23 = *(uint*)( (long)puVar12 + 0x14 );
   if (-1 < (int)uVar16) {
      uVar33 = uVar23 + 1;
      if ((int)( uVar23 + 1 ) < 0) {
         uVar33 = 0;
      }

      uVar17 = uVar16;
      if (uVar33 <= uVar16) {
         LAB_00103dbb:pvVar15 = (void*)puVar12[3];
         LAB_00103dbf:if (uVar23 < uVar33) {
            uVar16 = ( uVar33 - uVar23 ) * 0xc;
            if (uVar16 != 0) {
               memset((void*)( (long)pvVar15 + (ulong)uVar23 * 0xc ), 0, (ulong)uVar16);
               pvVar15 = (void*)puVar12[3];
            }

         }

         *(uint*)( (long)puVar12 + 0x14 ) = uVar33;
         puVar12 = *(undefined8**)( param_2 + 0x48 );
         puVar30 = (undefined4*)( (long)pvVar15 + ( ulong )(uVar33 - 1) * 0xc );
         goto LAB_00103dfb;
      }

      do {
         uVar17 = ( uVar17 >> 1 ) + 8 + uVar17;
      }
 while ( uVar17 < uVar33 );
      if (uVar17 < 0x15555556) {
         pvVar15 = realloc((void*)puVar12[3], (ulong)uVar17 * 0xc);
         if (pvVar15 != (void*)0x0) {
            puVar12[3] = pvVar15;
            uVar23 = *(uint*)( (long)puVar12 + 0x14 );
            *(uint*)( puVar12 + 2 ) = uVar17;
            goto LAB_00103dbf;
         }

         if (uVar17 <= *(uint*)( puVar12 + 2 )) {
            uVar23 = *(uint*)( (long)puVar12 + 0x14 );
            goto LAB_00103dbb;
         }

         *(uint*)( puVar12 + 2 ) = ~*(uint *)(puVar12 + 2);
         puVar12 = *(undefined8**)( param_2 + 0x48 );
      }
 else {
         *(uint*)( puVar12 + 2 ) = ~uVar16;
      }

   }

   __hb_CrapPool = CONCAT62(_DAT_00116052, __hb_NullPool);
   _memset = __hb_Null_OT_RangeRecord;
   puVar30 = (undefined4*)&_hb_CrapPool;
   LAB_00103dfb:if (*(int*)( puVar12 + 2 ) < 0) {
      *(uint*)( param_2 + 0x2c ) = *(uint*)( param_2 + 0x2c ) | 1;
   }

   uVar29 = *puVar12;
   puVar30[2] = iVar11;
   puVar30[1] = iVar36 - (int)uVar29;
   *puVar30 = 2;
   return uVar24;
}
/* WARNING: Removing unreachable block (ram,0x001045f2) *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OT::Layout::GSUB_impl::SubstLookup*
   arabic_fallback_synthesize_lookup_ligature<ligature_mark_set_t [1]>(hb_ot_shape_plan_t const*,
   hb_font_t*, ligature_mark_set_t const (&) [1], unsigned int) [clone .constprop.0] */SubstLookup *arabic_fallback_synthesize_lookup_ligature<ligature_mark_set_t[1]>(hb_ot_shape_plan_t *param_1, hb_font_t *param_2, ligature_mark_set_t *param_3, uint param_4) {
   undefined8 *puVar1;
   undefined1 *puVar2;
   char cVar3;
   int iVar4;
   ulong uVar5;
   long *plVar6;
   SubstLookup *pSVar7;
   void *pvVar8;
   uint uVar9;
   uint uVar10;
   ulong uVar11;
   undefined1 *puVar12;
   undefined8 *puVar13;
   long *plVar14;
   ulong uVar15;
   long lVar16;
   long in_FS_OFFSET;
   ushort local_1ec[2];
   undefined1 *local_1e8;
   undefined1 *local_1e0;
   undefined1 *puStack_1d8;
   undefined1 *puStack_1d0;
   undefined8 local_1c8;
   undefined8 local_1c0;
   undefined8 local_1b8;
   undefined8 local_1b0;
   undefined1 local_1a8[16];
   undefined8 local_198;
   void *local_190;
   undefined4 local_188;
   undefined4 local_184;
   undefined8 local_180;
   char local_178;
   undefined2 local_176;
   undefined1 local_174[16];
   undefined8 local_160;
   ushort local_152;
   int local_150;
   ushort local_14c[5];
   ushort local_142[5];
   undefined4 local_138[8];
   undefined1 local_118[208];
   undefined1 local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = hb_font_get_glyph(param_1, 0x651, 0, (hb_serialize_context_t*)&local_1e8);
   if (iVar4 != 0) {
      puVar12 = ligature_mark_table;
      local_150 = 0;
      local_152 = (ushort)local_1e8 << 8 | (ushort)local_1e8 >> 8;
      uVar15 = 0;
      do {
         while (( ( iVar4 = hb_font_get_glyph(param_1, *(undefined2*)( puVar12 + 4 ), 0, local_1ec) ),iVar4 == 0 || ( *(short*)( puVar12 + 2 ) == 0 ) ) || ( iVar4 = hb_font_get_nominal_glyph(param_1, *(short*)( puVar12 + 2 ), (hb_serialize_context_t*)&local_1e8) ),iVar4 == 0) {
            puVar12 = puVar12 + 4;
            if (puVar12 == (undefined1*)0x1072b4) goto LAB_00104276;
         }
;
         puVar12 = puVar12 + 4;
         local_150 = local_150 + 1;
         uVar11 = ( ulong )((int)uVar15 + 1);
         local_138[uVar15] = 2;
         local_142[uVar15] = (ushort)local_1e8 << 8 | (ushort)local_1e8 >> 8;
         local_14c[uVar15] = local_1ec[0] << 8 | local_1ec[0] >> 8;
         uVar15 = uVar11;
      }
 while ( puVar12 != (undefined1*)0x1072b4 );
      LAB_00104276:if ((int)uVar15 != 0) {
         local_1e8 = local_118;
         puStack_1d8 = local_48;
         local_160 = 0;
         local_174 = (undefined1[16])0x0;
         local_176 = 0;
         local_178 = 1;
         local_180 = 0;
         local_184 = 1;
         local_188 = 1;
         local_1a8 = (undefined1[16])0x0;
         local_1b0 = 0;
         local_1b8 = 0;
         local_1c0 = 0;
         local_1c8 = 0;
         local_198 = 0;
         local_190 = (void*)0x0;
         local_1e0 = local_1e8;
         puStack_1d0 = puStack_1d8;
         hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>::fini((hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>*)&local_188);
         lVar16 = local_1a8._8_8_;
         uVar11 = local_198;
         while (local_198 = uVar11,lVar16 != 0) {
            local_1a8._8_8_ = *(undefined8*)( lVar16 + 0x30 );
            if (*(int*)( lVar16 + 0x10 ) != 0) {
               free(*(void**)( lVar16 + 0x18 ));
            }

            *(undefined8*)( lVar16 + 0x10 ) = 0;
            *(undefined8*)( lVar16 + 0x18 ) = 0;
            if (*(int*)( lVar16 + 0x20 ) != 0) {
               free(*(void**)( lVar16 + 0x28 ));
            }

            *(undefined8*)( lVar16 + 0x20 ) = 0;
            *(undefined8*)( lVar16 + 0x28 ) = 0;
            uVar11 = local_198;
            lVar16 = local_1a8._8_8_;
         }
;
         local_198._4_4_ = ( uint )(uVar11 >> 0x20);
         uVar5 = (ulong)local_198._4_4_;
         local_198._0_4_ = (uint)uVar11;
         uVar9 = local_198._4_4_ + 1;
         if ((int)local_198._4_4_ < (int)(uint)local_198) {
            LAB_001043e3:local_198 = uVar11;
            local_198 = CONCAT44(uVar9, (uint)local_198);
            *(undefined8*)( (long)local_190 + uVar5 * 8 ) = 0;
         }
 else {
            if (-1 < (int)(uint)local_198) {
               uVar10 = (uint)local_198;
               if ((uint)local_198 < uVar9) {
                  do {
                     uVar10 = uVar10 + 8 + ( uVar10 >> 1 );
                  }
 while ( uVar10 < uVar9 );
                  if (0x1fffffff < uVar10) {
                     local_198 = CONCAT44(local_198._4_4_, ~(uint)local_198);
                     uVar11 = local_198;
                     goto LAB_00104887;
                  }

                  pvVar8 = realloc(local_190, (ulong)uVar10 << 3);
                  uVar9 = local_198._4_4_;
                  if (pvVar8 == (void*)0x0) {
                     if ((uint)local_198 < uVar10) {
                        local_198 = CONCAT44(local_198._4_4_, ~(uint)local_198);
                        uVar11 = local_198;
                        goto LAB_00104887;
                     }

                     uVar5 = (ulong)local_198._4_4_;
                     uVar9 = local_198._4_4_ + 1;
                     uVar11 = local_198;
                  }
 else {
                     uVar5 = (ulong)local_198._4_4_;
                     local_198 = (ulong)uVar10;
                     uVar9 = uVar9 + 1;
                     uVar11 = local_198;
                     local_190 = pvVar8;
                  }

               }

               goto LAB_001043e3;
            }

            LAB_00104887:local_198 = uVar11;
            __hb_CrapPool = __hb_NullPool;
         }

         local_188 = 1;
         local_184 = 1;
         local_180 = 0;
         local_178 = '\x01';
         local_176 = 0;
         local_160 = 0;
         local_174 = (undefined1[16])0x0;
         if (local_1c0._4_4_ == 0) {
            plVar6 = (long*)hb_pool_t<hb_serialize_context_t::object_t,32u>::alloc((hb_pool_t<hb_serialize_context_t::object_t,32u>*)&local_1b8);
            if (plVar6 == (long*)0x0) {
               if (local_1c0._4_4_ == 0) {
                  local_1c0 = CONCAT44(1, (undefined4)local_1c0);
               }

            }
 else {
               *plVar6 = (long)local_1e0;
               plVar6[1] = (long)puStack_1d8;
               plVar6[6] = local_1a8._8_8_;
               local_1a8._8_8_ = plVar6;
            }

         }

         cVar3 = OT::Layout::GSUB_impl::SubstLookup::serialize_ligature(local_1e0, (hb_serialize_context_t*)&local_1e8, 0, &local_152, 1, &local_150, 1, local_14c, uVar15, local_138, uVar15, local_142, uVar15);
         uVar9 = local_198._4_4_;
         if (local_1c0._4_4_ == 0) {
            if (( -1 < (int)(uint)local_198 ) && ( local_178 != '\0' )) {
               if (local_1a8._8_8_ == 0) goto LAB_0010451f;
               if (1 < local_198._4_4_) {
                  hb_serialize_context_t::pop_pack((hb_serialize_context_t*)&local_1e8, false);
                  hb_serialize_context_t::resolve_links((hb_serialize_context_t*)&local_1e8);
                  goto LAB_0010451f;
               }

               if (cVar3 == '\0') goto LAB_00104617;
               LAB_00104765:puVar2 = puStack_1d8;
               puVar12 = local_1e8;
               uVar15 = (long)local_1e0 - (long)local_1e8;
               lVar16 = (long)puStack_1d0 - (long)puStack_1d8;
               uVar10 = (int)uVar15 + (int)lVar16;
               if (uVar10 != 0) {
                  uVar11 = (ulong)uVar10;
                  pSVar7 = (SubstLookup*)malloc(uVar11);
                  if (pSVar7 != (SubstLookup*)0x0) {
                     if (uVar15 != 0) {
                        __memcpy_chk(pSVar7, puVar12, uVar15, uVar11);
                     }

                     if (uVar11 < uVar15) {
                        uVar11 = uVar15;
                     }

                     if (lVar16 != 0) {
                        __memcpy_chk(pSVar7 + uVar15, puVar2, lVar16, uVar11 - uVar15);
                     }

                     goto LAB_00104539;
                  }

               }

               goto LAB_00104617;
            }

            local_1c0 = CONCAT44(1, (undefined4)local_1c0);
            if (local_1a8._8_8_ != 0) goto LAB_00104617;
            LAB_0010451f:pSVar7 = (SubstLookup*)0x0;
            uVar9 = local_198._4_4_;
            if (( cVar3 != '\0' ) && ( local_1c0._4_4_ == 0 )) goto LAB_00104765;
         }
 else {
            if (local_1a8._8_8_ == 0) goto LAB_0010451f;
            if (( local_1c0 & 0x200000000 ) != 0) {
               local_1c0 = local_1c0 | 0x100000000;
            }

            LAB_00104617:pSVar7 = (SubstLookup*)0x0;
         }

         LAB_00104539:if (uVar9 != 0) {
            plVar14 = (long*)( (long)local_190 + 8 );
            plVar6 = plVar14 + ( uVar9 - 1 );
            for (; plVar6 != plVar14; plVar14 = plVar14 + 1) {
               lVar16 = *plVar14;
               if (*(int*)( lVar16 + 0x10 ) != 0) {
                  free(*(void**)( lVar16 + 0x18 ));
               }

               *(undefined8*)( lVar16 + 0x10 ) = 0;
               *(undefined8*)( lVar16 + 0x18 ) = 0;
               if (*(int*)( lVar16 + 0x20 ) != 0) {
                  free(*(void**)( lVar16 + 0x28 ));
               }

               *(undefined8*)( lVar16 + 0x20 ) = 0;
               *(undefined8*)( lVar16 + 0x28 ) = 0;
            }

         }

         if ((uint)local_198 != 0) {
            free(local_190);
         }

         local_198 = 0;
         local_190 = (void*)0x0;
         hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>::fini((hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>*)&local_188);
         lVar16 = local_1a8._8_8_;
         while (lVar16 != 0) {
            local_1a8._8_8_ = *(undefined8*)( lVar16 + 0x30 );
            if (*(int*)( lVar16 + 0x10 ) != 0) {
               free(*(void**)( lVar16 + 0x18 ));
            }

            *(undefined8*)( lVar16 + 0x10 ) = 0;
            *(undefined8*)( lVar16 + 0x18 ) = 0;
            if (*(int*)( lVar16 + 0x20 ) != 0) {
               free(*(void**)( lVar16 + 0x28 ));
            }

            *(undefined8*)( lVar16 + 0x20 ) = 0;
            *(undefined8*)( lVar16 + 0x28 ) = 0;
            lVar16 = local_1a8._8_8_;
         }
;
         hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>::fini((hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>*)&local_188);
         if ((uint)local_198 != 0) {
            free(local_190);
         }

         if (local_1b0._4_4_ != 0) {
            puVar1 = (undefined8*)( local_1a8._0_8_ + ( ( ulong )(local_1b0._4_4_ - 1) + 1 ) * 8 );
            puVar13 = (undefined8*)local_1a8._0_8_;
            do {
               pvVar8 = (void*)*puVar13;
               puVar13 = puVar13 + 1;
               free(pvVar8);
            }
 while ( puVar13 != puVar1 );
         }

         if ((int)local_1b0 != 0) {
            free((void*)local_1a8._0_8_);
         }

         goto LAB_00104709;
      }

   }

   pSVar7 = (SubstLookup*)0x0;
   LAB_00104709:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pSVar7;
}
/* WARNING: Removing unreachable block (ram,0x00104f7d) *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OT::Layout::GSUB_impl::SubstLookup* arabic_fallback_synthesize_lookup_ligature<ligature_set_t
   [18]>(hb_ot_shape_plan_t const*, hb_font_t*, ligature_set_t const (&) [18], unsigned int) [clone
   .constprop.0] */SubstLookup *arabic_fallback_synthesize_lookup_ligature<ligature_set_t[18]>(hb_ot_shape_plan_t *param_1, hb_font_t *param_2, ligature_set_t *param_3, uint param_4) {
   undefined8 *puVar1;
   ushort uVar2;
   ushort uVar3;
   undefined1 *puVar4;
   undefined1 *puVar5;
   char cVar6;
   int iVar7;
   ulong uVar8;
   ulong uVar9;
   long *plVar10;
   SubstLookup *pSVar11;
   void *pvVar12;
   ulong uVar13;
   uint *puVar14;
   uint uVar15;
   uint uVar16;
   undefined8 *puVar17;
   ulong uVar18;
   long *plVar19;
   ulong uVar20;
   ushort *puVar21;
   ulong uVar22;
   short *psVar23;
   undefined2 *puVar24;
   int *piVar25;
   long lVar26;
   long in_FS_OFFSET;
   ushort local_19dc[2];
   undefined1 *local_19d8;
   undefined1 *local_19d0;
   undefined1 *puStack_19c8;
   undefined1 *puStack_19c0;
   undefined8 local_19b8;
   undefined8 local_19b0;
   undefined8 local_19a8;
   undefined8 local_19a0;
   undefined1 local_1998[16];
   undefined8 local_1988;
   void *local_1980;
   undefined4 local_1978;
   undefined4 local_1974;
   undefined8 local_1970;
   char local_1968;
   undefined2 local_1966;
   undefined1 local_1964[16];
   undefined8 local_1950;
   ushort local_1948[24];
   uint local_1918[20];
   int local_18c8[20];
   ushort local_1878[256];
   ushort local_1678[256];
   undefined4 local_1478[252];
   undefined1 local_1088[4160];
   undefined1 local_48[8];
   long local_40;
   puVar24 = &ligature_table;
   uVar15 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar22 = 0;
   do {
      iVar7 = hb_font_get_glyph(param_1, *puVar24, 0, (hb_serialize_context_t*)&local_19d8);
      uVar13 = uVar22;
      if (iVar7 != 0) {
         uVar13 = ( ulong )((int)uVar22 + 1);
         local_18c8[uVar22] = 0;
         local_1918[uVar22] = uVar15;
         local_1948[uVar22] = (ushort)local_19d8 << 8 | (ushort)local_19d8 >> 8;
      }

      uVar15 = uVar15 + 1;
      puVar24 = puVar24 + 0x1d;
      uVar22 = uVar13;
   }
 while ( uVar15 != 0x12 );
   if ((uint)uVar13 < 2) {
      if ((uint)uVar13 != 0) goto LAB_00104ab1;
   }
 else {
      puVar21 = local_1948;
      uVar22 = 1;
      do {
         puVar21 = puVar21 + 1;
         uVar2 = *puVar21;
         uVar8 = uVar22 & 0xffffffff;
         do {
            uVar15 = (uint)uVar8;
            uVar16 = uVar15 - 1;
            uVar9 = (ulong)uVar16;
            uVar3 = local_1948[uVar9];
            if (( ( ushort )(uVar3 << 8 | uVar3 >> 8) < ( ushort )(uVar2 << 8 | uVar2 >> 8) ) || ( uVar3 == uVar2 )) {
               if (uVar15 == (uint)uVar22) goto LAB_001049b9;
               break;
            }

            uVar8 = uVar9;
            uVar15 = uVar16;
         }
 while ( uVar16 != 0 );
         uVar18 = ( ulong )(uVar15 + 1);
         uVar20 = ( ulong )((uint)uVar22 - uVar15);
         uVar2 = *puVar21;
         uVar9 = 0x24;
         if (0x23 < uVar18 * 2) {
            uVar9 = uVar18 * 2;
         }

         __memmove_chk(local_1948 + uVar18, local_1948 + uVar8, uVar20 * 2, uVar9 + uVar18 * -2);
         uVar9 = 0x48;
         if (0x47 < uVar18 * 4) {
            uVar9 = uVar18 * 4;
         }

         local_1948[uVar8] = uVar2;
         uVar15 = local_1918[uVar22];
         __memmove_chk(local_1918 + uVar18, local_1918 + uVar8, uVar20 * 4, uVar9 + uVar18 * -4);
         local_1918[uVar8] = uVar15;
         LAB_001049b9:uVar22 = uVar22 + 1;
      }
 while ( uVar22 != uVar13 );
      LAB_00104ab1:puVar14 = local_1918;
      uVar22 = 0;
      piVar25 = local_18c8;
      do {
         uVar15 = *puVar14;
         psVar23 = (short*)( &DAT_001072c2 + (ulong)uVar15 * 0x3a );
         do {
            while (( ( iVar7 = hb_font_get_glyph(param_1, psVar23[1], 0, local_19dc) ),iVar7 == 0 || ( *psVar23 == 0 ) ) || ( iVar7 = hb_font_get_nominal_glyph(param_1, *psVar23, (hb_serialize_context_t*)&local_19d8) ),iVar7 == 0) {
               psVar23 = psVar23 + 2;
               if (&DAT_001072fa + (ulong)uVar15 * 0x1d == psVar23) goto LAB_00104b94;
            }
;
            psVar23 = psVar23 + 2;
            *piVar25 = *piVar25 + 1;
            uVar8 = ( ulong )((int)uVar22 + 1);
            local_1478[uVar22] = 2;
            local_1678[uVar22] = (ushort)local_19d8 << 8 | (ushort)local_19d8 >> 8;
            local_1878[uVar22] = local_19dc[0] << 8 | local_19dc[0] >> 8;
            uVar22 = uVar8;
         }
 while ( &DAT_001072fa + (ulong)uVar15 * 0x1d != psVar23 );
         LAB_00104b94:piVar25 = piVar25 + 1;
         puVar14 = puVar14 + 1;
      }
 while ( local_18c8 + uVar13 != piVar25 );
      if ((int)uVar22 != 0) {
         local_19d8 = local_1088;
         puStack_19c8 = local_48;
         local_1950 = 0;
         local_1964 = (undefined1[16])0x0;
         local_1966 = 0;
         local_1968 = 1;
         local_1970 = 0;
         local_1974 = 1;
         local_1978 = 1;
         local_1998 = (undefined1[16])0x0;
         local_19a0 = 0;
         local_19a8 = 0;
         local_19b0 = 0;
         local_19b8 = 0;
         local_1988 = 0;
         local_1980 = (void*)0x0;
         local_19d0 = local_19d8;
         puStack_19c0 = puStack_19c8;
         hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>::fini((hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>*)&local_1978);
         lVar26 = local_1998._8_8_;
         uVar8 = local_1988;
         while (local_1988 = uVar8,lVar26 != 0) {
            local_1998._8_8_ = *(undefined8*)( lVar26 + 0x30 );
            if (*(int*)( lVar26 + 0x10 ) != 0) {
               free(*(void**)( lVar26 + 0x18 ));
            }

            *(undefined8*)( lVar26 + 0x10 ) = 0;
            *(undefined8*)( lVar26 + 0x18 ) = 0;
            if (*(int*)( lVar26 + 0x20 ) != 0) {
               free(*(void**)( lVar26 + 0x28 ));
            }

            *(undefined8*)( lVar26 + 0x20 ) = 0;
            *(undefined8*)( lVar26 + 0x28 ) = 0;
            uVar8 = local_1988;
            lVar26 = local_1998._8_8_;
         }
;
         local_1988._4_4_ = ( uint )(uVar8 >> 0x20);
         uVar9 = (ulong)local_1988._4_4_;
         local_1988._0_4_ = (uint)uVar8;
         uVar15 = local_1988._4_4_ + 1;
         if ((int)local_1988._4_4_ < (int)(uint)local_1988) {
            LAB_00104d54:local_1988 = uVar8;
            local_1988 = CONCAT44(uVar15, (uint)local_1988);
            *(undefined8*)( (long)local_1980 + uVar9 * 8 ) = 0;
         }
 else {
            if (-1 < (int)(uint)local_1988) {
               uVar18 = uVar8 & 0xffffffff;
               if ((uint)local_1988 < uVar15) {
                  do {
                     uVar16 = (int)uVar18 + 8 + (int)( uVar18 >> 1 );
                     uVar18 = (ulong)uVar16;
                  }
 while ( uVar16 < uVar15 );
                  if (0x1fffffff < uVar16) {
                     local_1988 = CONCAT44(local_1988._4_4_, ~(uint)local_1988);
                     uVar8 = local_1988;
                     goto LAB_00105272;
                  }

                  pvVar12 = realloc(local_1980, uVar18 << 3);
                  uVar15 = local_1988._4_4_;
                  if (pvVar12 == (void*)0x0) {
                     if ((uint)local_1988 < uVar16) {
                        local_1988 = CONCAT44(local_1988._4_4_, ~(uint)local_1988);
                        uVar8 = local_1988;
                        goto LAB_00105272;
                     }

                     uVar9 = (ulong)local_1988._4_4_;
                     uVar15 = local_1988._4_4_ + 1;
                     uVar8 = local_1988;
                  }
 else {
                     uVar9 = (ulong)local_1988._4_4_;
                     local_1988 = (ulong)uVar16;
                     uVar15 = uVar15 + 1;
                     uVar8 = local_1988;
                     local_1980 = pvVar12;
                  }

               }

               goto LAB_00104d54;
            }

            LAB_00105272:local_1988 = uVar8;
            __hb_CrapPool = __hb_NullPool;
         }

         local_1978 = 1;
         local_1974 = 1;
         local_1970 = 0;
         local_1968 = '\x01';
         local_1966 = 0;
         local_1950 = 0;
         local_1964 = (undefined1[16])0x0;
         if (local_19b0._4_4_ == 0) {
            plVar10 = (long*)hb_pool_t<hb_serialize_context_t::object_t,32u>::alloc((hb_pool_t<hb_serialize_context_t::object_t,32u>*)&local_19a8);
            if (plVar10 == (long*)0x0) {
               if (local_19b0._4_4_ == 0) {
                  local_19b0 = CONCAT44(1, (undefined4)local_19b0);
               }

            }
 else {
               *plVar10 = (long)local_19d0;
               plVar10[1] = (long)puStack_19c8;
               plVar10[6] = local_1998._8_8_;
               local_1998._8_8_ = plVar10;
            }

         }

         cVar6 = OT::Layout::GSUB_impl::SubstLookup::serialize_ligature(local_19d0, (hb_serialize_context_t*)&local_19d8, 8, local_1948, uVar13, local_18c8, uVar13, local_1878, uVar22, local_1478, uVar22, local_1678, uVar22);
         uVar15 = local_1988._4_4_;
         if (local_19b0._4_4_ == 0) {
            if (( -1 < (int)(uint)local_1988 ) && ( local_1968 != '\0' )) {
               if (local_1998._8_8_ == 0) goto LAB_00104e9d;
               if (1 < local_1988._4_4_) {
                  hb_serialize_context_t::pop_pack((hb_serialize_context_t*)&local_19d8, false);
                  hb_serialize_context_t::resolve_links((hb_serialize_context_t*)&local_19d8);
                  goto LAB_00104e9d;
               }

               if (cVar6 == '\0') goto LAB_00104fa8;
               LAB_00105129:puVar5 = puStack_19c8;
               puVar4 = local_19d8;
               uVar22 = (long)local_19d0 - (long)local_19d8;
               lVar26 = (long)puStack_19c0 - (long)puStack_19c8;
               uVar16 = (int)uVar22 + (int)lVar26;
               if (uVar16 != 0) {
                  uVar13 = (ulong)uVar16;
                  pSVar11 = (SubstLookup*)malloc(uVar13);
                  if (pSVar11 != (SubstLookup*)0x0) {
                     if (uVar22 != 0) {
                        __memcpy_chk(pSVar11, puVar4, uVar22, uVar13);
                     }

                     if (uVar13 < uVar22) {
                        uVar13 = uVar22;
                     }

                     if (lVar26 != 0) {
                        __memcpy_chk(pSVar11 + uVar22, puVar5, lVar26, uVar13 - uVar22);
                     }

                     goto LAB_00104eba;
                  }

               }

               goto LAB_00104fa8;
            }

            local_19b0 = CONCAT44(1, (undefined4)local_19b0);
            if (local_1998._8_8_ != 0) goto LAB_00104fa8;
            LAB_00104e9d:pSVar11 = (SubstLookup*)0x0;
            uVar15 = local_1988._4_4_;
            if (( cVar6 != '\0' ) && ( local_19b0._4_4_ == 0 )) goto LAB_00105129;
         }
 else {
            if (local_1998._8_8_ == 0) goto LAB_00104e9d;
            if (( local_19b0 & 0x200000000 ) != 0) {
               local_19b0 = local_19b0 | 0x100000000;
            }

            LAB_00104fa8:pSVar11 = (SubstLookup*)0x0;
         }

         LAB_00104eba:if (uVar15 != 0) {
            plVar19 = (long*)( (long)local_1980 + 8 );
            plVar10 = plVar19 + ( uVar15 - 1 );
            for (; plVar10 != plVar19; plVar19 = plVar19 + 1) {
               lVar26 = *plVar19;
               if (*(int*)( lVar26 + 0x10 ) != 0) {
                  free(*(void**)( lVar26 + 0x18 ));
               }

               *(undefined8*)( lVar26 + 0x10 ) = 0;
               *(undefined8*)( lVar26 + 0x18 ) = 0;
               if (*(int*)( lVar26 + 0x20 ) != 0) {
                  free(*(void**)( lVar26 + 0x28 ));
               }

               *(undefined8*)( lVar26 + 0x20 ) = 0;
               *(undefined8*)( lVar26 + 0x28 ) = 0;
            }

         }

         if ((uint)local_1988 != 0) {
            free(local_1980);
         }

         local_1988 = 0;
         local_1980 = (void*)0x0;
         hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>::fini((hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>*)&local_1978);
         lVar26 = local_1998._8_8_;
         while (lVar26 != 0) {
            local_1998._8_8_ = *(undefined8*)( lVar26 + 0x30 );
            if (*(int*)( lVar26 + 0x10 ) != 0) {
               free(*(void**)( lVar26 + 0x18 ));
            }

            *(undefined8*)( lVar26 + 0x10 ) = 0;
            *(undefined8*)( lVar26 + 0x18 ) = 0;
            if (*(int*)( lVar26 + 0x20 ) != 0) {
               free(*(void**)( lVar26 + 0x28 ));
            }

            *(undefined8*)( lVar26 + 0x20 ) = 0;
            *(undefined8*)( lVar26 + 0x28 ) = 0;
            lVar26 = local_1998._8_8_;
         }
;
         hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>::fini((hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>*)&local_1978);
         if ((uint)local_1988 != 0) {
            free(local_1980);
         }

         if (local_19a0._4_4_ != 0) {
            puVar1 = (undefined8*)( local_1998._0_8_ + ( ( ulong )(local_19a0._4_4_ - 1) + 1 ) * 8 );
            puVar17 = (undefined8*)local_1998._0_8_;
            do {
               pvVar12 = (void*)*puVar17;
               puVar17 = puVar17 + 1;
               free(pvVar12);
            }
 while ( puVar17 != puVar1 );
         }

         if ((int)local_19a0 != 0) {
            free((void*)local_1998._0_8_);
         }

         goto LAB_001050b4;
      }

   }

   pSVar11 = (SubstLookup*)0x0;
   LAB_001050b4:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pSVar11;
}
/* WARNING: Removing unreachable block (ram,0x0010578a) *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OT::Layout::GSUB_impl::SubstLookup* arabic_fallback_synthesize_lookup_ligature<ligature_3_set_t
   [1]>(hb_ot_shape_plan_t const*, hb_font_t*, ligature_3_set_t const (&) [1], unsigned int) [clone
   .constprop.0] */SubstLookup *arabic_fallback_synthesize_lookup_ligature<ligature_3_set_t[1]>(hb_ot_shape_plan_t *param_1, hb_font_t *param_2, ligature_3_set_t *param_3, uint param_4) {
   undefined8 *puVar1;
   ulong uVar2;
   char cVar3;
   int iVar4;
   ulong uVar5;
   long *plVar6;
   SubstLookup *pSVar7;
   void *pvVar8;
   uint uVar9;
   undefined1 *puVar10;
   ulong uVar11;
   undefined8 *puVar12;
   long *plVar13;
   ulong uVar14;
   uint uVar15;
   undefined1 *puVar16;
   long lVar17;
   long in_FS_OFFSET;
   ushort local_1bc[2];
   undefined1 *local_1b8;
   undefined1 *local_1b0;
   undefined1 *puStack_1a8;
   undefined1 *puStack_1a0;
   undefined8 local_198;
   undefined8 local_190;
   undefined8 local_188;
   undefined8 local_180;
   undefined1 local_178[16];
   undefined8 local_168;
   void *local_160;
   undefined4 local_158;
   undefined4 local_154;
   undefined8 local_150;
   char local_148;
   undefined2 local_146;
   undefined1 local_144[16];
   undefined8 local_130;
   ushort local_11e;
   int local_11c;
   ushort local_116[3];
   undefined4 local_110[3];
   ushort local_104[6];
   undefined1 local_f8[176];
   undefined1 local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = hb_font_get_glyph(param_1, 0xfedf, 0, (hb_serialize_context_t*)&local_1b8);
   if (iVar4 != 0) {
      uVar11 = 0;
      uVar14 = 0;
      local_11c = 0;
      puVar16 = ligature_3_table;
      local_11e = (ushort)local_1b8 << 8 | (ushort)local_1b8 >> 8;
      do {
         iVar4 = hb_font_get_glyph(param_1, *(undefined2*)( puVar16 + 6 ), 0, local_1bc);
         uVar15 = (int)uVar11 + 2;
         puVar10 = puVar16;
         if (iVar4 != 0) {
            while (true) {
               if (( *(short*)( puVar10 + 2 ) == 0 ) || ( iVar4 = hb_font_get_nominal_glyph(param_1, *(short*)( puVar10 + 2 ), (hb_serialize_context_t*)&local_1b8) ),iVar4 == 0) goto LAB_0010536c;
               uVar9 = (int)uVar11 + 1;
               puVar10 = puVar10 + 2;
               local_104[uVar11] = (ushort)local_1b8 << 8 | (ushort)local_1b8 >> 8;
               if (uVar9 == uVar15) break;
               uVar11 = (ulong)uVar9;
            }
;
            uVar11 = (ulong)uVar15;
            local_11c = local_11c + 1;
            local_110[uVar14] = 3;
            local_116[uVar14] = local_1bc[0] << 8 | local_1bc[0] >> 8;
            uVar14 = ( ulong )((int)uVar14 + 1);
         }

         LAB_0010536c:puVar16 = puVar16 + 6;
      }
 while ( puVar16 != (undefined1*)0x107292 );
      if ((int)uVar14 != 0) {
         local_1b8 = local_f8;
         puStack_1a8 = local_48;
         local_130 = 0;
         local_144 = (undefined1[16])0x0;
         local_146 = 0;
         local_148 = 1;
         local_150 = 0;
         local_154 = 1;
         local_158 = 1;
         local_178 = (undefined1[16])0x0;
         local_180 = 0;
         local_188 = 0;
         local_190 = 0;
         local_198 = 0;
         local_168 = 0;
         local_160 = (void*)0x0;
         local_1b0 = local_1b8;
         puStack_1a0 = puStack_1a8;
         hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>::fini((hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>*)&local_158);
         lVar17 = local_178._8_8_;
         uVar2 = local_168;
         while (local_168 = uVar2,lVar17 != 0) {
            local_178._8_8_ = *(undefined8*)( lVar17 + 0x30 );
            if (*(int*)( lVar17 + 0x10 ) != 0) {
               free(*(void**)( lVar17 + 0x18 ));
            }

            *(undefined8*)( lVar17 + 0x10 ) = 0;
            *(undefined8*)( lVar17 + 0x18 ) = 0;
            if (*(int*)( lVar17 + 0x20 ) != 0) {
               free(*(void**)( lVar17 + 0x28 ));
            }

            *(undefined8*)( lVar17 + 0x20 ) = 0;
            *(undefined8*)( lVar17 + 0x28 ) = 0;
            uVar2 = local_168;
            lVar17 = local_178._8_8_;
         }
;
         local_168._4_4_ = ( uint )(uVar2 >> 0x20);
         uVar5 = (ulong)local_168._4_4_;
         local_168._0_4_ = (uint)uVar2;
         uVar15 = local_168._4_4_ + 1;
         if ((int)local_168._4_4_ < (int)(uint)local_168) {
            LAB_00105567:local_168 = uVar2;
            local_168 = CONCAT44(uVar15, (uint)local_168);
            *(undefined8*)( (long)local_160 + uVar5 * 8 ) = 0;
         }
 else {
            if (-1 < (int)(uint)local_168) {
               uVar9 = (uint)local_168;
               if ((uint)local_168 < uVar15) {
                  do {
                     uVar9 = uVar9 + 8 + ( uVar9 >> 1 );
                  }
 while ( uVar9 < uVar15 );
                  if (0x1fffffff < uVar9) {
                     local_168 = CONCAT44(local_168._4_4_, ~(uint)local_168);
                     uVar2 = local_168;
                     goto LAB_00105a90;
                  }

                  pvVar8 = realloc(local_160, (ulong)uVar9 << 3);
                  uVar15 = local_168._4_4_;
                  if (pvVar8 == (void*)0x0) {
                     if ((uint)local_168 < uVar9) {
                        local_168 = CONCAT44(local_168._4_4_, ~(uint)local_168);
                        uVar2 = local_168;
                        goto LAB_00105a90;
                     }

                     uVar5 = (ulong)local_168._4_4_;
                     uVar15 = local_168._4_4_ + 1;
                     uVar2 = local_168;
                  }
 else {
                     uVar5 = (ulong)local_168._4_4_;
                     local_168 = (ulong)uVar9;
                     uVar15 = uVar15 + 1;
                     uVar2 = local_168;
                     local_160 = pvVar8;
                  }

               }

               goto LAB_00105567;
            }

            LAB_00105a90:local_168 = uVar2;
            __hb_CrapPool = __hb_NullPool;
         }

         local_158 = 1;
         local_154 = 1;
         local_150 = 0;
         local_148 = '\x01';
         local_146 = 0;
         local_130 = 0;
         local_144 = (undefined1[16])0x0;
         if (local_190._4_4_ == 0) {
            plVar6 = (long*)hb_pool_t<hb_serialize_context_t::object_t,32u>::alloc((hb_pool_t<hb_serialize_context_t::object_t,32u>*)&local_188);
            if (plVar6 == (long*)0x0) {
               if (local_190._4_4_ == 0) {
                  local_190 = CONCAT44(1, (undefined4)local_190);
               }

            }
 else {
               *plVar6 = (long)local_1b0;
               plVar6[1] = (long)puStack_1a8;
               plVar6[6] = local_178._8_8_;
               local_178._8_8_ = plVar6;
            }

         }

         cVar3 = OT::Layout::GSUB_impl::SubstLookup::serialize_ligature(local_1b0, (hb_serialize_context_t*)&local_1b8, 8, &local_11e, 1, &local_11c, 1, local_116, uVar14, local_110, uVar14, local_104, uVar11);
         uVar15 = local_168._4_4_;
         if (local_190._4_4_ == 0) {
            if (( -1 < (int)(uint)local_168 ) && ( local_148 != '\0' )) {
               if (local_178._8_8_ == 0) goto LAB_001056aa;
               if (1 < local_168._4_4_) {
                  hb_serialize_context_t::pop_pack((hb_serialize_context_t*)&local_1b8, false);
                  hb_serialize_context_t::resolve_links((hb_serialize_context_t*)&local_1b8);
                  goto LAB_001056aa;
               }

               if (cVar3 == '\0') goto LAB_001057b2;
               LAB_00105958:puVar10 = puStack_1a8;
               puVar16 = local_1b8;
               uVar14 = (long)local_1b0 - (long)local_1b8;
               lVar17 = (long)puStack_1a0 - (long)puStack_1a8;
               uVar9 = (int)uVar14 + (int)lVar17;
               if (uVar9 != 0) {
                  uVar11 = (ulong)uVar9;
                  pSVar7 = (SubstLookup*)malloc(uVar11);
                  if (pSVar7 != (SubstLookup*)0x0) {
                     if (uVar14 != 0) {
                        __memcpy_chk(pSVar7, puVar16, uVar14, uVar11);
                     }

                     if (uVar11 < uVar14) {
                        uVar11 = uVar14;
                     }

                     if (lVar17 != 0) {
                        __memcpy_chk(pSVar7 + uVar14, puVar10, lVar17, uVar11 - uVar14);
                     }

                     goto LAB_001056c7;
                  }

               }

               goto LAB_001057b2;
            }

            local_190 = CONCAT44(1, (undefined4)local_190);
            if (local_178._8_8_ != 0) goto LAB_001057b2;
            LAB_001056aa:pSVar7 = (SubstLookup*)0x0;
            uVar15 = local_168._4_4_;
            if (( cVar3 != '\0' ) && ( local_190._4_4_ == 0 )) goto LAB_00105958;
         }
 else {
            if (local_178._8_8_ == 0) goto LAB_001056aa;
            if (( local_190 & 0x200000000 ) != 0) {
               local_190 = local_190 | 0x100000000;
            }

            LAB_001057b2:pSVar7 = (SubstLookup*)0x0;
         }

         LAB_001056c7:if (uVar15 != 0) {
            plVar13 = (long*)( (long)local_160 + 8 );
            plVar6 = plVar13 + ( uVar15 - 1 );
            for (; plVar6 != plVar13; plVar13 = plVar13 + 1) {
               lVar17 = *plVar13;
               if (*(int*)( lVar17 + 0x10 ) != 0) {
                  free(*(void**)( lVar17 + 0x18 ));
               }

               *(undefined8*)( lVar17 + 0x10 ) = 0;
               *(undefined8*)( lVar17 + 0x18 ) = 0;
               if (*(int*)( lVar17 + 0x20 ) != 0) {
                  free(*(void**)( lVar17 + 0x28 ));
               }

               *(undefined8*)( lVar17 + 0x20 ) = 0;
               *(undefined8*)( lVar17 + 0x28 ) = 0;
            }

         }

         if ((uint)local_168 != 0) {
            free(local_160);
         }

         local_168 = 0;
         local_160 = (void*)0x0;
         hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>::fini((hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>*)&local_158);
         lVar17 = local_178._8_8_;
         while (lVar17 != 0) {
            local_178._8_8_ = *(undefined8*)( lVar17 + 0x30 );
            if (*(int*)( lVar17 + 0x10 ) != 0) {
               free(*(void**)( lVar17 + 0x18 ));
            }

            *(undefined8*)( lVar17 + 0x10 ) = 0;
            *(undefined8*)( lVar17 + 0x18 ) = 0;
            if (*(int*)( lVar17 + 0x20 ) != 0) {
               free(*(void**)( lVar17 + 0x28 ));
            }

            *(undefined8*)( lVar17 + 0x20 ) = 0;
            *(undefined8*)( lVar17 + 0x28 ) = 0;
            lVar17 = local_178._8_8_;
         }
;
         hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>::fini((hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>*)&local_158);
         if ((uint)local_168 != 0) {
            free(local_160);
         }

         if (local_180._4_4_ != 0) {
            puVar1 = (undefined8*)( local_178._0_8_ + ( ( ulong )(local_180._4_4_ - 1) + 1 ) * 8 );
            puVar12 = (undefined8*)local_178._0_8_;
            do {
               pvVar8 = (void*)*puVar12;
               puVar12 = puVar12 + 1;
               free(pvVar8);
            }
 while ( puVar12 != puVar1 );
         }

         if ((int)local_180 != 0) {
            free((void*)local_178._0_8_);
         }

         goto LAB_001058bd;
      }

   }

   pSVar7 = (SubstLookup*)0x0;
   LAB_001058bd:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pSVar7;
}
/* WARNING: Removing unreachable block (ram,0x001067d8) *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* arabic_fallback_synthesize_lookup_single(hb_ot_shape_plan_t const*, hb_font_t*, unsigned int)
   [clone .isra.0] */void *arabic_fallback_synthesize_lookup_single(hb_ot_shape_plan_t *param_1, hb_font_t *param_2, uint param_3) {
   short sVar1;
   ushort uVar2;
   ushort uVar3;
   undefined8 uVar4;
   Lookup *pLVar5;
   undefined1 *puVar6;
   char cVar7;
   char cVar8;
   int iVar9;
   long *plVar10;
   undefined8 *puVar11;
   void *pvVar12;
   uint uVar13;
   uint uVar14;
   uint uVar15;
   undefined4 *puVar17;
   ulong uVar18;
   ulong uVar19;
   ulong uVar20;
   long lVar21;
   int iVar22;
   ulong uVar23;
   ushort *puVar24;
   uint uVar25;
   long in_FS_OFFSET;
   ushort *local_728;
   int iStack_720;
   undefined4 uStack_71c;
   ushort *local_718;
   int iStack_710;
   undefined4 uStack_70c;
   Lookup *local_708;
   Lookup *local_700;
   undefined1 *puStack_6f8;
   undefined1 *puStack_6f0;
   undefined8 local_6e8;
   undefined8 local_6e0;
   undefined8 local_6d8;
   undefined8 local_6d0;
   undefined1 local_6c8[16];
   undefined8 local_6b8;
   void *local_6b0;
   undefined4 local_6a8;
   undefined4 local_6a4;
   undefined8 local_6a0;
   char local_698;
   undefined2 local_696;
   undefined1 local_694[16];
   undefined8 local_680;
   ushort local_678[184];
   ushort local_508[184];
   Lookup local_398[844];
   undefined1 local_4c[12];
   long local_40;
   ulong uVar16;
   uVar18 = 0x621;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar23 = 0;
   do {
      sVar1 = *(short*)( ( (ulong)param_2 & 0xffffffff ) * 2 + 0x1045d8 + uVar18 * 8 );
      uVar20 = uVar23;
      if (( ( sVar1 != 0 ) && ( iVar9 = hb_font_get_glyph(param_1, uVar18 & 0xffffffff, 0, &local_728) ),iVar9 != 0 )) {
         if (( ( (uint)local_728 | (uint)local_708 ) < 0x10000 ) && ( (uint)local_728 != (uint)local_708 )) {
            uVar20 = ( ulong )((int)uVar23 + 1);
            local_678[uVar23] = (ushort)local_728 << 8 | (ushort)local_728 >> 8;
            local_508[uVar23] = (ushort)local_708 << 8 | (ushort)local_708 >> 8;
         }

      }

      uVar18 = uVar18 + 1;
      uVar23 = uVar20;
   }
 while ( uVar18 != 0x6d4 );
   pvVar12 = (void*)0x0;
   iVar9 = (int)uVar20;
   if (iVar9 == 0) goto LAB_001065cd;
   puVar24 = local_678;
   uVar23 = 1;
   if (iVar9 != 1) {
      do {
         puVar24 = puVar24 + 1;
         uVar2 = *puVar24;
         uVar18 = uVar23 & 0xffffffff;
         do {
            uVar14 = (uint)uVar18;
            uVar13 = uVar14 - 1;
            uVar16 = (ulong)uVar13;
            uVar3 = local_678[uVar16];
            if (( ( ushort )(uVar3 << 8 | uVar3 >> 8) < ( ushort )(uVar2 << 8 | uVar2 >> 8) ) || ( uVar3 == uVar2 )) {
               if (uVar14 == (uint)uVar23) goto LAB_00106329;
               break;
            }

            uVar18 = uVar16;
            uVar14 = uVar13;
         }
 while ( uVar13 != 0 );
         uVar19 = ( ulong )(uVar14 + 1);
         uVar2 = *puVar24;
         uVar16 = 0x166;
         if (0x165 < uVar19 * 2) {
            uVar16 = uVar19 * 2;
         }

         __memmove_chk(local_678 + uVar19, local_678 + uVar18);
         local_678[uVar18] = uVar2;
         uVar2 = local_508[uVar23];
         __memmove_chk(local_508 + uVar19, local_508 + uVar18, ( ulong )((uint)uVar23 - uVar14) * 2, uVar16 + uVar19 * -2);
         local_508[uVar18] = uVar2;
         LAB_00106329:uVar23 = uVar23 + 1;
      }
 while ( uVar23 != uVar20 );
   }

   local_708 = local_398;
   puStack_6f8 = local_4c;
   local_680 = 0;
   local_694 = (undefined1[16])0x0;
   local_696 = 0;
   local_698 = 1;
   local_6a0 = 0;
   local_6a4 = 1;
   local_6a8 = 1;
   local_6c8 = (undefined1[16])0x0;
   local_6d0 = 0;
   local_6d8 = 0;
   local_6e0 = 0;
   local_6e8 = 0;
   local_6b8 = 0;
   local_6b0 = (void*)0x0;
   local_700 = local_708;
   puStack_6f0 = puStack_6f8;
   hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>::fini((hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>*)&local_6a8);
   lVar21 = local_6c8._8_8_;
   uVar23 = local_6b8;
   while (local_6b8 = uVar23,lVar21 != 0) {
      local_6c8._8_8_ = *(undefined8*)( lVar21 + 0x30 );
      if (*(int*)( lVar21 + 0x10 ) != 0) {
         free(*(void**)( lVar21 + 0x18 ));
      }

      *(undefined8*)( lVar21 + 0x10 ) = 0;
      *(undefined8*)( lVar21 + 0x18 ) = 0;
      if (*(int*)( lVar21 + 0x20 ) != 0) {
         free(*(void**)( lVar21 + 0x28 ));
      }

      *(undefined8*)( lVar21 + 0x20 ) = 0;
      *(undefined8*)( lVar21 + 0x28 ) = 0;
      uVar23 = local_6b8;
      lVar21 = local_6c8._8_8_;
   }
;
   local_6b8._4_4_ = ( uint )(uVar23 >> 0x20);
   uVar18 = (ulong)local_6b8._4_4_;
   local_6b8._0_4_ = (uint)uVar23;
   uVar14 = local_6b8._4_4_ + 1;
   if ((int)local_6b8._4_4_ < (int)(uint)local_6b8) {
      LAB_0010641c:local_6b8 = uVar23;
      local_6b8 = CONCAT44(uVar14, (uint)local_6b8);
      *(undefined8*)( (long)local_6b0 + uVar18 * 8 ) = 0;
   }
 else {
      if (-1 < (int)(uint)local_6b8) {
         uVar13 = (uint)local_6b8;
         if ((uint)local_6b8 < uVar14) {
            do {
               uVar13 = uVar13 + 8 + ( uVar13 >> 1 );
            }
 while ( uVar13 < uVar14 );
            if (0x1fffffff < uVar13) {
               local_6b8 = CONCAT44(local_6b8._4_4_, ~(uint)local_6b8);
               uVar23 = local_6b8;
               goto LAB_00106b58;
            }

            pvVar12 = realloc(local_6b0, (ulong)uVar13 << 3);
            uVar14 = local_6b8._4_4_;
            if (pvVar12 == (void*)0x0) {
               if ((uint)local_6b8 < uVar13) {
                  local_6b8 = CONCAT44(local_6b8._4_4_, ~(uint)local_6b8);
                  uVar23 = local_6b8;
                  goto LAB_00106b58;
               }

               uVar18 = (ulong)local_6b8._4_4_;
               uVar14 = local_6b8._4_4_ + 1;
               uVar23 = local_6b8;
            }
 else {
               uVar18 = (ulong)local_6b8._4_4_;
               local_6b8 = (ulong)uVar13;
               uVar14 = uVar14 + 1;
               uVar23 = local_6b8;
               local_6b0 = pvVar12;
            }

         }

         goto LAB_0010641c;
      }

      LAB_00106b58:local_6b8 = uVar23;
      __hb_CrapPool = CONCAT62(_DAT_00116052, __hb_NullPool);
   }

   local_6a8 = 1;
   local_6a4 = 1;
   local_6a0 = 0;
   local_698 = '\x01';
   local_696 = 0;
   local_680 = 0;
   local_694 = (undefined1[16])0x0;
   if (local_6e0._4_4_ == 0) {
      plVar10 = (long*)hb_pool_t<hb_serialize_context_t::object_t,32u>::alloc((hb_pool_t<hb_serialize_context_t::object_t,32u>*)&local_6d8);
      if (plVar10 == (long*)0x0) {
         if (local_6e0._4_4_ == 0) {
            local_6e0 = CONCAT44(1, (undefined4)local_6e0);
         }

      }
 else {
         *plVar10 = (long)local_700;
         plVar10[1] = (long)puStack_6f8;
         plVar10[6] = local_6c8._8_8_;
         local_6c8._8_8_ = plVar10;
      }

   }

   pLVar5 = local_700;
   cVar7 = OT::Lookup::serialize(local_700, (hb_serialize_context_t*)&local_708, 1, 8, 1);
   if (cVar7 == '\0') {
      LAB_0010659a:if (local_6e0._4_4_ == 0) {
         puVar11 = (undefined8*)local_6c8._8_8_;
         if ((int)(uint)local_6b8 < 0) {
            LAB_001067f2:local_6e0 = CONCAT44(1, (undefined4)local_6e0);
         }
 else {
            LAB_001068ee:cVar8 = cVar7;
            if (local_698 == '\0') {
               LAB_001069c5:cVar7 = cVar8;
               local_6e0 = CONCAT44(1, (undefined4)local_6e0);
               if (puVar11 == (undefined8*)0x0) goto LAB_0010691d;
            }
 else {
               if (puVar11 != (undefined8*)0x0) {
                  LAB_00106901:if (1 < local_6b8._4_4_) {
                     hb_serialize_context_t::pop_pack((hb_serialize_context_t*)&local_708, false);
                     hb_serialize_context_t::resolve_links((hb_serialize_context_t*)&local_708);
                     goto LAB_0010691d;
                  }

                  if (cVar7 == '\0') goto LAB_001065c2;
                  goto LAB_00106940;
               }

               LAB_0010691d:if (cVar7 != '\0') goto LAB_00106925;
            }

         }

      }
 else {
         joined_r0x001065bc:uVar14 = local_6e0._4_4_;
         if ((undefined8*)local_6c8._8_8_ != (undefined8*)0x0) {
            LAB_00106a6d:if (( uVar14 & 2 ) != 0) {
               local_6e0 = CONCAT44(uVar14, (undefined4)local_6e0) | 0x100000000;
            }

         }

      }

      LAB_001065c2:pvVar12 = (void*)0x0;
   }
 else {
      if (local_6e0._4_4_ == 0) {
         puVar11 = (undefined8*)hb_pool_t<hb_serialize_context_t::object_t,32u>::alloc((hb_pool_t<hb_serialize_context_t::object_t,32u>*)&local_6d8);
         if (puVar11 == (undefined8*)0x0) {
            if (local_6e0._4_4_ == 0) {
               local_6e0 = CONCAT44(1, (undefined4)local_6e0);
            }

         }
 else {
            *puVar11 = local_700;
            puVar11[1] = puStack_6f8;
            puVar11[6] = local_6c8._8_8_;
            local_6c8._8_8_ = puVar11;
         }

      }

      local_728 = local_678;
      local_718 = local_508;
      uStack_71c = 0;
      uStack_70c = 0;
      iStack_720 = iVar9;
      iStack_710 = iVar9;
      cVar8 = OT::Layout::GSUB_impl::SingleSubst::serialize<hb_zip_iter_t<hb_sorted_array_t<OT::HBGlyphID16>,hb_array_t<OT::HBGlyphID16>>,(void*)0>(local_700);
      if (!(bool)cVar8) {
         hb_serialize_context_t::pop_discard((hb_serialize_context_t*)&local_708);
         cVar7 = cVar8;
         goto LAB_0010659a;
      }

      iVar9 = hb_serialize_context_t::pop_pack((hb_serialize_context_t*)&local_708, true);
      if (*(short*)( pLVar5 + 4 ) == 0) {
         iVar22 = 0x1160a0;
         __hb_CrapPool = CONCAT62(_hb_CrapPool_2, __hb_NullPool);
      }
 else {
         iVar22 = (int)pLVar5 + 6;
      }

      uVar4 = local_6c8._8_8_;
      cVar7 = iVar9 == 0 || local_6e0._4_4_ != 0;
      if (iVar9 != 0 && local_6e0._4_4_ == 0) {
         uVar14 = *(uint*)( local_6c8._8_8_ + 0x10 );
         uVar23 = (ulong)uVar14;
         uVar13 = *(uint*)( local_6c8._8_8_ + 0x14 );
         if ((int)uVar14 < 0) {
            LAB_001068bc:uVar14 = local_6e0._4_4_;
            uVar13 = 0;
            LAB_001068be:__hb_CrapPool = CONCAT62(_DAT_00116052, __hb_NullPool);
            _memset = __hb_Null_OT_RangeRecord;
            puVar17 = (undefined4*)&_hb_CrapPool;
            puVar11 = (undefined8*)local_6c8._8_8_;
         }
 else {
            uVar25 = uVar13 + 1;
            if ((int)uVar25 < 0) {
               uVar25 = 0;
            }

            if (uVar14 < uVar25) {
               do {
                  uVar15 = (int)( uVar23 >> 1 ) + 8 + (int)uVar23;
                  uVar23 = (ulong)uVar15;
               }
 while ( uVar15 < uVar25 );
               if (0x15555555 < uVar15) {
                  *(uint*)( local_6c8._8_8_ + 0x10 ) = ~uVar14;
                  goto LAB_001068bc;
               }

               pvVar12 = realloc(*(void**)( local_6c8._8_8_ + 0x18 ), uVar23 * 0xc);
               if (pvVar12 != (void*)0x0) {
                  *(void**)( uVar4 + 0x18 ) = pvVar12;
                  uVar13 = *(uint*)( uVar4 + 0x14 );
                  *(uint*)( uVar4 + 0x10 ) = uVar15;
                  goto LAB_0010682a;
               }

               if (uVar15 <= *(uint*)( uVar4 + 0x10 )) {
                  uVar13 = *(uint*)( uVar4 + 0x14 );
                  goto LAB_00106825;
               }

               *(uint*)( uVar4 + 0x10 ) = ~*(uint *)(uVar4 + 0x10);
               uVar14 = local_6e0._4_4_;
               uVar13 = local_6e0._4_4_;
               goto LAB_001068be;
            }

            LAB_00106825:pvVar12 = *(void**)( uVar4 + 0x18 );
            LAB_0010682a:if (uVar13 < uVar25) {
               uVar14 = ( uVar25 - uVar13 ) * 0xc;
               if (uVar14 != 0) {
                  memset((void*)( (long)pvVar12 + (ulong)uVar13 * 0xc ), 0, (ulong)uVar14);
                  pvVar12 = *(void**)( uVar4 + 0x18 );
               }

            }

            *(uint*)( uVar4 + 0x14 ) = uVar25;
            puVar17 = (undefined4*)( (long)pvVar12 + ( ulong )(uVar25 - 1) * 0xc );
            puVar11 = (undefined8*)local_6c8._8_8_;
            uVar14 = local_6e0._4_4_;
            uVar13 = local_6e0._4_4_;
         }

         if (-1 < *(int*)( puVar11 + 2 )) {
            uVar4 = *puVar11;
            puVar17[2] = iVar9;
            puVar17[1] = iVar22 - (int)uVar4;
            *puVar17 = 2;
            if (uVar13 != 0) goto LAB_00106a6d;
            if ((int)(uint)local_6b8 < 0) goto LAB_001067f2;
            cVar7 = local_698;
            if (local_698 != '\0') goto LAB_00106901;
            goto LAB_001069c5;
         }

         uVar4 = *puVar11;
         local_6e0 = CONCAT44(uVar13, (undefined4)local_6e0) | 0x100000000;
         puVar17[2] = iVar9;
         puVar17[1] = iVar22 - (int)uVar4;
         *puVar17 = 2;
         uVar14 = local_6e0._4_4_;
         goto LAB_00106a6d;
      }

      if (local_6e0._4_4_ != 0) goto joined_r0x001065bc;
      puVar11 = (undefined8*)local_6c8._8_8_;
      if (-1 < (int)(uint)local_6b8) goto LAB_001068ee;
      local_6e0 = CONCAT44(1, (undefined4)local_6e0);
      if ((undefined8*)local_6c8._8_8_ != (undefined8*)0x0) goto LAB_001065c2;
      LAB_00106925:if (local_6e0._4_4_ != 0) goto LAB_001065c2;
      LAB_00106940:puVar6 = puStack_6f8;
      pLVar5 = local_708;
      uVar23 = (long)local_700 - (long)local_708;
      lVar21 = (long)puStack_6f0 - (long)puStack_6f8;
      uVar14 = (int)uVar23 + (int)lVar21;
      if (uVar14 == 0) goto LAB_001065c2;
      uVar18 = (ulong)uVar14;
      pvVar12 = malloc(uVar18);
      if (pvVar12 == (void*)0x0) goto LAB_001065c2;
      if (uVar23 != 0) {
         __memcpy_chk(pvVar12, pLVar5, uVar23, uVar18);
      }

      if (uVar18 < uVar23) {
         uVar18 = uVar23;
      }

      if (lVar21 != 0) {
         __memcpy_chk((long)pvVar12 + uVar23, puVar6, lVar21, uVar18 - uVar23);
      }

   }

   hb_serialize_context_t::~hb_serialize_context_t((hb_serialize_context_t*)&local_708);
   LAB_001065cd:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pvVar12;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* arabic_fallback_shape(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */undefined8 arabic_fallback_shape(hb_ot_shape_plan_t *param_1, hb_font_t *param_2, hb_buffer_t *param_3) {
   long *plVar1;
   undefined1(*pauVar2)[16];
   uint *puVar3;
   long lVar4;
   ushort uVar5;
   undefined1(*pauVar6)[16];
   ushort uVar7;
   uint uVar8;
   arabic_fallback_plan_t *__ptr;
   SubstLookup *pSVar9;
   undefined1(*pauVar10)[16];
   ulong uVar11;
   uint uVar12;
   undefined8 uVar13;
   ligature_set_t *plVar14;
   ushort uVar15;
   hb_font_t *phVar16;
   undefined1(*pauVar17)[16];
   undefined8 *puVar18;
   int iVar19;
   SubstLookup *pSVar20;
   int iVar21;
   SubstLookup *pSVar22;
   ulong uVar23;
   long in_FS_OFFSET;
   bool bVar24;
   ulong uVar25;
   ulong uVar26;
   uint local_98;
   undefined4 local_68[2];
   undefined1(*local_60)[16];
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(byte*)( *(long*)( param_1 + 0x88 ) + 0x28 ) & 1 ) == 0) {
      uVar13 = 0;
   }
 else {
      plVar1 = (long*)( *(long*)( param_1 + 0x88 ) + 0x20 );
      LAB_00106c16:__ptr = (arabic_fallback_plan_t*)*plVar1;
      if (__ptr == (arabic_fallback_plan_t*)0x0) {
         __ptr = (arabic_fallback_plan_t*)calloc(1, 0x98);
         if (__ptr != (arabic_fallback_plan_t*)0x0) {
            local_98 = 0;
            uVar23 = 0;
            plVar14 = (ligature_set_t*)0x0;
            LAB_00106cb0:do {
               iVar19 = *(int*)( param_1 + 0x3c ) + -1;
               if (-1 < iVar19) {
                  iVar21 = 0;
                  LAB_00106cdc:do {
                     uVar8 = ( uint )(iVar21 + iVar19) >> 1;
                     puVar3 = (uint*)( *(long*)( param_1 + 0x40 ) + (ulong)uVar8 * 0x24 );
                     uVar12 = *puVar3;
                     phVar16 = (hb_font_t*)(ulong)uVar12;
                     if (*(uint*)( "tiniidemaniflosigilrgilrgilr" + uVar23 * 4 ) < uVar12) goto LAB_00106cd0;
                     if (*(uint*)( "tiniidemaniflosigilrgilrgilr" + uVar23 * 4 ) <= uVar12) {
                        uVar12 = puVar3[7];
                        *(uint*)( __ptr + (long)plVar14 * 4 + 8 ) = uVar12;
                        if (uVar12 == 0) goto LAB_00106f53;
                        if (uVar23 < 4) {
                           pSVar9 = (SubstLookup*)arabic_fallback_synthesize_lookup_single((hb_ot_shape_plan_t*)param_2, (hb_font_t*)( uVar23 & 0xffffffff ), (uint)plVar14);
                           LAB_00106fcb:*(SubstLookup**)( __ptr + (long)plVar14 * 8 + 0x28 ) = pSVar9;
                           if (pSVar9 == (SubstLookup*)0x0) {
                              uVar23 = uVar23 + 1;
                              goto LAB_00106cb0;
                           }

                        }
 else {
                           uVar12 = (uint)param_1;
                           if (uVar23 == 5) {
                              pSVar9 = arabic_fallback_synthesize_lookup_ligature<ligature_set_t[18]>((hb_ot_shape_plan_t*)param_2, phVar16, plVar14, uVar12);
                              goto LAB_00106fcb;
                           }

                           if (uVar23 != 6) {
                              pSVar9 = arabic_fallback_synthesize_lookup_ligature<ligature_3_set_t[1]>((hb_ot_shape_plan_t*)param_2, phVar16, (ligature_3_set_t*)plVar14, uVar12);
                              goto LAB_00106fcb;
                           }

                           pSVar9 = arabic_fallback_synthesize_lookup_ligature<ligature_mark_set_t[1]>((hb_ot_shape_plan_t*)param_2, phVar16, (ligature_mark_set_t*)plVar14, uVar12);
                           *(SubstLookup**)( __ptr + (long)plVar14 * 8 + 0x28 ) = pSVar9;
                           if (pSVar9 == (SubstLookup*)0x0) goto LAB_00106f90;
                        }

                        uVar15 = *(ushort*)( pSVar9 + 4 ) << 8 | *(ushort*)( pSVar9 + 4 ) >> 8;
                        pauVar10 = (undefined1(*) [16])calloc(1, ( ulong )((uint)uVar15 * 0x38 + 0x20));
                        if (pauVar10 != (undefined1(*) [16])0x0) {
                           pauVar2 = pauVar10 + 2;
                           local_68[0] = 0;
                           local_58 = _LC17;
                           uVar5 = *(ushort*)pSVar9;
                           local_50 = 0;
                           local_60 = pauVar2;
                           if (uVar15 == 0) {
                              *(undefined8*)pauVar10[1] = 0;
                              *(undefined4*)( pauVar10[1] + 8 ) = 0xffffffff;
                              *pauVar10 = (undefined1[16])0x0;
                           }
 else {
                              pSVar22 = pSVar9 + 6;
                              uVar7 = uVar15;
                              uVar12 = 0;
                              while (true) {
                                 pSVar20 = (SubstLookup*)&_hb_NullPool;
                                 if (uVar12 < uVar7) {
                                    pSVar20 = pSVar22;
                                 }

                                 uVar7 = *(ushort*)pSVar20;
                                 pSVar20 = (SubstLookup*)&_hb_NullPool;
                                 if (uVar7 != 0) {
                                    pSVar20 = pSVar9 + ( ushort )(uVar7 << 8 | uVar7 >> 8);
                                 }

                                 pSVar22 = pSVar22 + 2;
                                 OT::Layout::GSUB_impl::SubstLookupSubTable::dispatch<OT::hb_accelerate_subtables_context_t>((SubstLookupSubTable*)pSVar20, (hb_accelerate_subtables_context_t*)local_68, ( uint )(ushort)(uVar5 << 8 | uVar5 >> 8));
                                 if ((uint)uVar15 == uVar12 + 1) break;
                                 uVar7 = *(ushort*)( pSVar9 + 4 ) << 8 | *(ushort*)( pSVar9 + 4 ) >> 8;
                                 uVar12 = uVar12 + 1;
                              }
;
                              uVar25 = 0;
                              uVar26 = 0;
                              *(undefined8*)pauVar10[1] = 0;
                              uVar11 = 0;
                              *pauVar10 = (undefined1[16])0x0;
                              pauVar17 = pauVar2;
                              do {
                                 pauVar6 = pauVar17 + 3;
                                 uVar25 = uVar25 | *(ulong*)pauVar17[2];
                                 uVar26 = uVar26 | *(ulong*)( pauVar17[2] + 8 );
                                 *(ulong*)*pauVar10 = uVar25;
                                 *(ulong*)( *pauVar10 + 8 ) = uVar26;
                                 uVar11 = uVar11 | *(ulong*)pauVar17[3];
                                 *(ulong*)pauVar10[1] = uVar11;
                                 pauVar17 = (undefined1(*) [16])( *pauVar6 + 8 );
                              }
 while ( (undefined1(*) [16])( *pauVar6 + 8 ) != (undefined1(*) [16])( (long)pauVar2 + (ulong)uVar15 * 0x38 ) );
                              *(uint*)( pauVar10[1] + 8 ) = local_58._4_4_;
                              puVar18 = (undefined8*)( pauVar10[2] + 8 );
                              uVar8 = 0;
                              do {
                                 if (local_58._4_4_ != uVar8) {
                                    puVar18[1] = *puVar18;
                                 }

                                 puVar18 = puVar18 + 7;
                                 bVar24 = uVar12 != uVar8;
                                 uVar8 = uVar8 + 1;
                              }
 while ( bVar24 );
                           }

                        }

                        local_98 = local_98 + 1;
                        *(undefined1(**) [16])( __ptr + (long)plVar14 * 8 + 0x60 ) = pauVar10;
                        goto LAB_00106f53;
                     }

                     iVar21 = uVar8 + 1;
                  }
 while ( iVar21 <= iVar19 );
               }

               LAB_00106f7d:*(undefined4*)( __ptr + (long)plVar14 * 4 + 8 ) = 0;
               LAB_00106f53:uVar23 = uVar23 + 1;
               if (uVar23 == 7) goto LAB_00106f90;
               plVar14 = (ligature_set_t*)(ulong)local_98;
            }
 while ( true );
         }

         goto LAB_00107010;
      }

      LAB_00106c27:arabic_fallback_plan_shape(__ptr, param_2, param_3);
      uVar13 = 1;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar13;
   LAB_00106cd0:iVar19 = uVar8 - 1;
   if (iVar19 < iVar21) goto LAB_00106f7d;
   goto LAB_00106cdc;
   LAB_00106f90:*(uint*)__ptr = local_98;
   if (local_98 == 0) {
      free(__ptr);
      LAB_00107010:__ptr = (arabic_fallback_plan_t*)&_hb_NullPool;
   }
 else {
      __ptr[4] = (arabic_fallback_plan_t)0x1;
   }

   LOCK();
   lVar4 = *plVar1;
   if (lVar4 == 0) {
      *plVar1 = (long)__ptr;
   }

   UNLOCK();
   if (lVar4 == 0) goto LAB_00106c27;
   if (*(int*)__ptr != 0) {
      arabic_fallback_plan_destroy(__ptr);
   }

   goto LAB_00106c16;
}
/* bool 
   OT::hb_accelerate_subtables_context_t::cache_func_to<OT::Layout::GSUB_impl::SingleSubstFormat1_3<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*, bool) */bool OT::hb_accelerate_subtables_context_t::cache_func_to<OT::Layout::GSUB_impl::SingleSubstFormat1_3<OT::Layout::SmallTypes>>(void *param_1, hb_ot_apply_context_t *param_2, bool param_3) {
   return false;
}
/* bool 
   OT::hb_accelerate_subtables_context_t::cache_func_to<OT::Layout::GSUB_impl::SingleSubstFormat2_4<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*, bool) */bool OT::hb_accelerate_subtables_context_t::cache_func_to<OT::Layout::GSUB_impl::SingleSubstFormat2_4<OT::Layout::SmallTypes>>(void *param_1, hb_ot_apply_context_t *param_2, bool param_3) {
   return false;
}
/* bool 
   OT::hb_accelerate_subtables_context_t::cache_func_to<OT::Layout::GSUB_impl::MultipleSubstFormat1_2<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*, bool) */bool OT::hb_accelerate_subtables_context_t::cache_func_to<OT::Layout::GSUB_impl::MultipleSubstFormat1_2<OT::Layout::SmallTypes>>(void *param_1, hb_ot_apply_context_t *param_2, bool param_3) {
   return false;
}
/* bool 
   OT::hb_accelerate_subtables_context_t::cache_func_to<OT::Layout::GSUB_impl::AlternateSubstFormat1_2<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*, bool) */bool OT::hb_accelerate_subtables_context_t::cache_func_to<OT::Layout::GSUB_impl::AlternateSubstFormat1_2<OT::Layout::SmallTypes>>(void *param_1, hb_ot_apply_context_t *param_2, bool param_3) {
   return false;
}
/* bool 
   OT::hb_accelerate_subtables_context_t::cache_func_to<OT::Layout::GSUB_impl::LigatureSubstFormat1_2<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*, bool) */bool OT::hb_accelerate_subtables_context_t::cache_func_to<OT::Layout::GSUB_impl::LigatureSubstFormat1_2<OT::Layout::SmallTypes>>(void *param_1, hb_ot_apply_context_t *param_2, bool param_3) {
   return false;
}
/* bool 
   OT::hb_accelerate_subtables_context_t::cache_func_to<OT::ContextFormat1_4<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*, bool) */bool OT::hb_accelerate_subtables_context_t::cache_func_to<OT::ContextFormat1_4<OT::Layout::SmallTypes>>(void *param_1, hb_ot_apply_context_t *param_2, bool param_3) {
   return false;
}
/* bool OT::hb_accelerate_subtables_context_t::cache_func_to<OT::ContextFormat3>(void const*,
   OT::hb_ot_apply_context_t*, bool) */bool OT::hb_accelerate_subtables_context_t::cache_func_to<OT::ContextFormat3>(void *param_1, hb_ot_apply_context_t *param_2, bool param_3) {
   return false;
}
/* bool 
   OT::hb_accelerate_subtables_context_t::cache_func_to<OT::ChainContextFormat1_4<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*, bool) */bool OT::hb_accelerate_subtables_context_t::cache_func_to<OT::ChainContextFormat1_4<OT::Layout::SmallTypes>>(void *param_1, hb_ot_apply_context_t *param_2, bool param_3) {
   return false;
}
/* bool OT::hb_accelerate_subtables_context_t::cache_func_to<OT::ChainContextFormat3>(void const*,
   OT::hb_ot_apply_context_t*, bool) */bool OT::hb_accelerate_subtables_context_t::cache_func_to<OT::ChainContextFormat3>(void *param_1, hb_ot_apply_context_t *param_2, bool param_3) {
   return false;
}
/* bool 
   OT::hb_accelerate_subtables_context_t::cache_func_to<OT::Layout::GSUB_impl::ReverseChainSingleSubstFormat1>(void
   const*, OT::hb_ot_apply_context_t*, bool) */bool OT::hb_accelerate_subtables_context_t::cache_func_to<OT::Layout::GSUB_impl::ReverseChainSingleSubstFormat1>(void *param_1, hb_ot_apply_context_t *param_2, bool param_3) {
   return false;
}
/* OT::Layout::Common::RangeRecord<OT::Layout::SmallTypes>::cmp_range(void const*, void const*) */ulong OT::Layout::Common::RangeRecord<OT::Layout::SmallTypes>::cmp_range(void *param_1, void *param_2) {
   ushort uVar1;
   ushort uVar2;
   ulong uVar3;
   /* WARNING: Load size is inaccurate */
   /* WARNING: Load size is inaccurate */
   uVar3 = 0xffffffff;
   uVar1 = *param_1 << 8 | *param_1 >> 8;
   uVar2 = *param_2 << 8 | *param_2 >> 8;
   if (( uVar2 <= uVar1 ) && ( uVar3 = uVar1 <= uVar2 )) {
      uVar3 = 0xffffffff;
      uVar1 = *(ushort*)( (long)param_1 + 2 ) << 8 | *(ushort*)( (long)param_1 + 2 ) >> 8;
      uVar2 = *(ushort*)( (long)param_2 + 2 ) << 8 | *(ushort*)( (long)param_2 + 2 ) >> 8;
      if (( uVar2 <= uVar1 ) && ( uVar3 = uVar1 <= uVar2 )) {
         uVar3 = 0xffffffff;
         uVar1 = *(ushort*)( (long)param_1 + 4 ) << 8 | *(ushort*)( (long)param_1 + 4 ) >> 8;
         uVar2 = *(ushort*)( (long)param_2 + 4 ) << 8 | *(ushort*)( (long)param_2 + 4 ) >> 8;
         if (uVar2 <= uVar1) {
            uVar3 = ( ulong )(uVar2 < uVar1);
         }

      }

   }

   return uVar3;
}
/* bool 
   OT::hb_accelerate_subtables_context_t::cache_func_to<OT::ChainContextFormat2_5<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*, bool) */bool OT::hb_accelerate_subtables_context_t::cache_func_to<OT::ChainContextFormat2_5<OT::Layout::SmallTypes>>(void *param_1, hb_ot_apply_context_t *param_2, bool param_3) {
   byte bVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   lVar3 = *(long*)( param_2 + 0xa0 );
   bVar1 = *(byte*)( lVar3 + 0xb8 );
   if (param_3) {
      if (( bVar1 & 8 ) != 0) {
         return false;
      }

      *(byte*)( lVar3 + 0xb8 ) = bVar1 | 8;
      uVar2 = *(uint*)( lVar3 + 0x60 );
      if (uVar2 != 0) {
         lVar4 = 0;
         do {
            *(undefined1*)( *(long*)( lVar3 + 0x70 ) + 0xf + lVar4 ) = 0xff;
            lVar4 = lVar4 + 0x14;
         }
 while ( lVar4 != (ulong)uVar2 * 0x14 );
      }

      *(undefined4*)( param_2 + 0x144 ) = 0xff;
   }
 else {
      *(undefined4*)( param_2 + 0x144 ) = 0xffffffff;
      *(byte*)( lVar3 + 0xb8 ) = bVar1 & 0xf7;
   }

   return true;
}
/* bool 
   OT::hb_accelerate_subtables_context_t::cache_func_to<OT::ContextFormat2_5<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*, bool) */bool OT::hb_accelerate_subtables_context_t::cache_func_to<OT::ContextFormat2_5<OT::Layout::SmallTypes>>(void *param_1, hb_ot_apply_context_t *param_2, bool param_3) {
   byte bVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   lVar3 = *(long*)( param_2 + 0xa0 );
   bVar1 = *(byte*)( lVar3 + 0xb8 );
   if (param_3) {
      if (( bVar1 & 8 ) != 0) {
         return false;
      }

      *(byte*)( lVar3 + 0xb8 ) = bVar1 | 8;
      uVar2 = *(uint*)( lVar3 + 0x60 );
      if (uVar2 != 0) {
         lVar4 = 0;
         do {
            *(undefined1*)( *(long*)( lVar3 + 0x70 ) + 0xf + lVar4 ) = 0xff;
            lVar4 = lVar4 + 0x14;
         }
 while ( lVar4 != (ulong)uVar2 * 0x14 );
      }

      *(undefined4*)( param_2 + 0x144 ) = 0xff;
   }
 else {
      *(undefined4*)( param_2 + 0x144 ) = 0xffffffff;
      *(byte*)( lVar3 + 0xb8 ) = bVar1 & 0xf7;
   }

   return true;
}
/* hb_buffer_t::_set_glyph_flags(unsigned int, unsigned int, unsigned int, bool, bool) */void hb_buffer_t::_set_glyph_flags(hb_buffer_t *this, uint param_1, uint param_2, uint param_3, bool param_4, bool param_5) {
   uint *puVar1;
   int iVar2;
   uint uVar3;
   long lVar4;
   uint *puVar5;
   uint *puVar6;
   ulong uVar7;
   uint uVar8;
   long lVar9;
   ulong uVar10;
   uint uVar11;
   long lVar12;
   uint uVar13;
   long lVar14;
   uint uVar15;
   long in_FS_OFFSET;
   long local_50;
   uint local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(uint*)( this + 0x60 ) < param_3) {
      param_3 = *(uint*)( this + 0x60 );
   }

   if (( param_5 ) || ( !param_4 )) {
      *(uint*)( this + 0xc0 ) = *(uint*)( this + 0xc0 ) | 0x20;
      if (( param_5 ) && ( this[0x5a] != (hb_buffer_t)0x0 )) {
         uVar11 = *(uint*)( this + 100 );
         if (!param_4) {
            if (param_2 < uVar11) {
               puVar5 = (uint*)( *(long*)( this + 0x78 ) + 4 + (ulong)param_2 * 0x14 );
               do {
                  *puVar5 = *puVar5 | param_1;
                  param_2 = param_2 + 1;
                  puVar5 = puVar5 + 5;
               }
 while ( param_2 < *(uint*)( this + 100 ) );
            }

            uVar11 = *(uint*)( this + 0x5c );
            if (uVar11 < param_3) {
               puVar5 = (uint*)( *(long*)( this + 0x70 ) + 4 + (ulong)uVar11 * 0x14 );
               puVar1 = (uint*)( *(long*)( this + 0x70 ) + 0x18 + ( ( ulong )(( param_3 - uVar11 ) - 1) + (ulong)uVar11 ) * 0x14 );
               if (( (int)puVar1 - (int)puVar5 & 4U ) != 0) {
                  *puVar5 = *puVar5 | param_1;
                  puVar5 = puVar5 + 5;
                  if (puVar1 == puVar5) goto LAB_00108510;
               }

               do {
                  *puVar5 = *puVar5 | param_1;
                  puVar5[5] = puVar5[5] | param_1;
                  puVar5 = puVar5 + 10;
               }
 while ( puVar1 != puVar5 );
            }

            goto LAB_00108510;
         }

         iVar2 = *(int*)( this + 0x1c );
         uVar13 = *(uint*)( this + 0x5c );
         lVar4 = *(long*)( this + 0x70 );
         lVar9 = *(long*)( this + 0x78 );
         if (uVar13 == param_3) {
            local_44 = 0xffffffff;
            if (param_2 == uVar11) goto LAB_00108510;
            if (iVar2 != 2) goto LAB_001086b5;
            LAB_0010891f:uVar7 = (ulong)param_2;
            uVar8 = local_44;
            if (param_2 < uVar11) {
               puVar5 = (uint*)( lVar9 + 8 + uVar7 * 0x14 );
               puVar1 = (uint*)( lVar9 + 0x1c + ( ( ( uVar11 - param_2 ) - 1 ) + uVar7 ) * 0x14 );
               if (( (int)puVar1 - (int)puVar5 & 4U ) == 0) goto LAB_00108968;
               if (*puVar5 < local_44) {
                  uVar8 = *puVar5;
               }

               for (puVar5 = puVar5 + 5; puVar5 != puVar1; puVar5 = puVar5 + 10) {
                  LAB_00108968:if (*puVar5 < uVar8) {
                     uVar8 = *puVar5;
                  }

                  if (puVar5[5] < uVar8) {
                     uVar8 = puVar5[5];
                  }

               }

               if (param_2 != uVar11) goto LAB_0010898c;
            }
 else {
               LAB_0010898c:local_50 = uVar7 * 0x14;
               LAB_0010899d:if (param_2 < uVar11) {
                  puVar5 = (uint*)( lVar9 + 4 + local_50 );
                  do {
                     if (puVar5[1] != uVar8) {
                        *(uint*)( this + 0xc0 ) = *(uint*)( this + 0xc0 ) | 0x20;
                        *puVar5 = *puVar5 | param_1;
                     }

                     puVar5 = puVar5 + 5;
                  }
 while ( puVar5 != (uint*)( lVar9 + 0x18 + ( ( ulong )(( uVar11 - param_2 ) - 1) + (ulong)param_2 ) * 0x14 ) );
                  uVar13 = *(uint*)( this + 0x5c );
               }

            }

            LAB_001089dd:if (param_3 == uVar13) goto LAB_00108510;
            LAB_001089e6:uVar10 = ( ulong )(param_3 - 1);
            uVar7 = (ulong)uVar13;
            LAB_001089ed:uVar11 = *(uint*)( lVar4 + 8 + uVar7 * 0x14 );
            uVar15 = *(uint*)( lVar4 + 8 + uVar10 * 0x14 );
            if (iVar2 != 2) goto LAB_001087a3;
            LAB_00108a0e:if (uVar13 < param_3) {
               puVar5 = (uint*)( lVar4 + 4 + uVar7 * 0x14 );
               do {
                  if (puVar5[1] != uVar8) {
                     *(uint*)( this + 0xc0 ) = *(uint*)( this + 0xc0 ) | 0x20;
                     *puVar5 = *puVar5 | param_1;
                  }

                  puVar5 = puVar5 + 5;
               }
 while ( (uint*)( lVar4 + 0x18 + ( ( (int)uVar10 - uVar13 ) + uVar7 ) * 0x14 ) != puVar5 );
            }

         }
 else {
            if (iVar2 == 2) {
               if (uVar13 < param_3) {
                  puVar5 = (uint*)( lVar4 + 8 + (ulong)uVar13 * 0x14 );
                  puVar1 = (uint*)( lVar4 + 0x1c + ( ( ulong )(( param_3 - uVar13 ) - 1) + (ulong)uVar13 ) * 0x14 );
                  local_44 = 0xffffffff;
                  if (( (int)puVar1 - (int)puVar5 & 4U ) != 0) {
                     local_44 = 0xffffffff;
                     if (*puVar5 != 0xffffffff) {
                        local_44 = *puVar5;
                     }

                     puVar5 = puVar5 + 5;
                     if (puVar5 == puVar1) goto LAB_00108912;
                  }

                  do {
                     if (*puVar5 < local_44) {
                        local_44 = *puVar5;
                     }

                     if (puVar5[5] < local_44) {
                        local_44 = puVar5[5];
                     }

                     puVar5 = puVar5 + 10;
                  }
 while ( puVar5 != puVar1 );
               }
 else {
                  local_44 = 0xffffffff;
               }

               LAB_00108912:uVar8 = local_44;
               if (param_2 != uVar11) goto LAB_0010891f;
               goto LAB_001089e6;
            }

            uVar10 = ( ulong )(param_3 - 1);
            uVar7 = (ulong)uVar13;
            uVar8 = *(uint*)( lVar4 + 8 + uVar10 * 0x14 );
            uVar15 = *(uint*)( lVar4 + 8 + uVar7 * 0x14 );
            if (uVar15 < uVar8) {
               uVar8 = uVar15;
            }

            local_44 = uVar8;
            if (param_2 == uVar11) goto LAB_001089ed;
            LAB_001086b5:lVar12 = lVar9 + ( ulong )(uVar11 - 1) * 0x14;
            uVar7 = (ulong)param_2;
            uVar8 = *(uint*)( lVar12 + 8 );
            lVar14 = lVar9 + uVar7 * 0x14;
            uVar15 = *(uint*)( lVar14 + 8 );
            if (uVar8 < uVar15) {
               uVar15 = uVar8;
               lVar14 = lVar12;
            }

            puVar5 = (uint*)( lVar14 + 8 );
            if (local_44 <= uVar15) {
               puVar5 = &local_44;
            }

            uVar8 = *puVar5;
            if (param_2 == uVar11) goto LAB_001089dd;
            local_50 = uVar7 * 0x14;
            lVar14 = ( ulong )(uVar11 - 1) * 0x14;
            uVar15 = *(uint*)( lVar9 + 8 + local_50 );
            lVar12 = lVar9 + lVar14;
            uVar3 = *(uint*)( lVar12 + 8 );
            if (uVar8 != uVar15) {
               if (uVar8 == uVar3) {
                  if (uVar8 == uVar15) goto LAB_0010885d;
                  if (param_2 < uVar11) {
                     puVar5 = (uint*)( lVar9 + 4 + local_50 );
                     do {
                        if (puVar5[1] == uVar3) break;
                        *(uint*)( this + 0xc0 ) = *(uint*)( this + 0xc0 ) | 0x20;
                        *puVar5 = *puVar5 | param_1;
                        puVar5 = puVar5 + 5;
                     }
 while ( puVar5 != (uint*)( lVar9 + 0x18 + ( ( ( uVar11 - param_2 ) - 1 ) + uVar7 ) * 0x14 ) );
                     goto LAB_00108779;
                  }

                  goto LAB_0010877d;
               }

               goto LAB_0010899d;
            }

            LAB_0010885d:if (param_2 < uVar11) {
               do {
                  if (*(uint*)( lVar12 + 8 ) == uVar8) break;
                  *(uint*)( this + 0xc0 ) = *(uint*)( this + 0xc0 ) | 0x20;
                  *(uint*)( lVar12 + 4 ) = *(uint*)( lVar12 + 4 ) | param_1;
                  lVar12 = lVar12 + -0x14;
               }
 while ( lVar12 != lVar9 + -0x14 + lVar14 + ( ulong )(( uVar11 - param_2 ) - 1) * -0x14 );
               LAB_00108779:uVar13 = *(uint*)( this + 0x5c );
            }

            LAB_0010877d:if (uVar13 == param_3) goto LAB_00108510;
            uVar10 = ( ulong )(param_3 - 1);
            uVar7 = (ulong)uVar13;
            uVar11 = *(uint*)( lVar4 + 8 + uVar7 * 0x14 );
            uVar15 = *(uint*)( lVar4 + 8 + uVar10 * 0x14 );
            LAB_001087a3:if (uVar11 != uVar8) {
               if (uVar15 != uVar8) goto LAB_00108a0e;
               if (uVar11 != uVar8) {
                  if (uVar13 < param_3) {
                     puVar5 = (uint*)( lVar4 + 4 + uVar7 * 0x14 );
                     do {
                        if (puVar5[1] == uVar15) break;
                        *(uint*)( this + 0xc0 ) = *(uint*)( this + 0xc0 ) | 0x20;
                        *puVar5 = *puVar5 | param_1;
                        puVar5 = puVar5 + 5;
                     }
 while ( puVar5 != (uint*)( lVar4 + 0x18 + ( ( (int)uVar10 - uVar13 ) + uVar7 ) * 0x14 ) );
                  }

                  goto LAB_00108510;
               }

            }

            if (uVar13 < param_3) {
               lVar9 = lVar4 + uVar10 * 0x14;
               do {
                  if (*(uint*)( lVar9 + 8 ) == uVar8) break;
                  *(uint*)( this + 0xc0 ) = *(uint*)( this + 0xc0 ) | 0x20;
                  *(uint*)( lVar9 + 4 ) = *(uint*)( lVar9 + 4 ) | param_1;
                  lVar9 = lVar9 + -0x14;
               }
 while ( lVar9 != lVar4 + -0x14 + uVar10 * 0x14 + ( ulong )((int)uVar10 - uVar13) * -0x14 );
            }

         }

         goto LAB_00108510;
      }

      if (!param_4) {
         if (param_2 < param_3) {
            puVar5 = (uint*)( *(long*)( this + 0x70 ) + 4 + (ulong)param_2 * 0x14 );
            puVar1 = (uint*)( *(long*)( this + 0x70 ) + 0x18 + ( ( ulong )(( param_3 - param_2 ) - 1) + (ulong)param_2 ) * 0x14 );
            if (( (int)puVar1 - (int)puVar5 & 4U ) != 0) {
               *puVar5 = *puVar5 | param_1;
               puVar5 = puVar5 + 5;
               if (puVar5 == puVar1) goto LAB_00108510;
            }

            do {
               *puVar5 = *puVar5 | param_1;
               puVar5[5] = puVar5[5] | param_1;
               puVar6 = puVar5 + 10;
               if (puVar6 == puVar1) break;
               *puVar6 = *puVar6 | param_1;
               puVar5[0xf] = puVar5[0xf] | param_1;
               puVar5 = puVar5 + 0x14;
            }
 while ( puVar5 != puVar1 );
         }

         goto LAB_00108510;
      }

   }
 else {
      if (param_3 - param_2 < 2) goto LAB_00108510;
      *(uint*)( this + 0xc0 ) = *(uint*)( this + 0xc0 ) | 0x20;
   }

   lVar4 = *(long*)( this + 0x70 );
   if (param_2 != param_3) {
      if (*(int*)( this + 0x1c ) == 2) {
         if (param_2 < param_3) {
            uVar7 = (ulong)param_2;
            puVar5 = (uint*)( lVar4 + 8 + uVar7 * 0x14 );
            puVar1 = (uint*)( lVar4 + 0x1c + ( ( ( param_3 - param_2 ) - 1 ) + uVar7 ) * 0x14 );
            uVar11 = 0xffffffff;
            if (( (int)puVar1 - (int)puVar5 & 4U ) == 0) goto LAB_00108ab0;
            uVar11 = 0xffffffff;
            if (*puVar5 != 0xffffffff) {
               uVar11 = *puVar5;
            }

            for (puVar5 = puVar5 + 5; puVar1 != puVar5; puVar5 = puVar5 + 10) {
               LAB_00108ab0:if (*puVar5 < uVar11) {
                  uVar11 = *puVar5;
               }

               if (puVar5[5] < uVar11) {
                  uVar11 = puVar5[5];
               }

            }

            puVar5 = (uint*)( lVar4 + 4 + uVar7 * 0x14 );
            do {
               if (uVar11 != puVar5[1]) {
                  *(uint*)( this + 0xc0 ) = *(uint*)( this + 0xc0 ) | 0x20;
                  *puVar5 = *puVar5 | param_1;
               }

               puVar5 = puVar5 + 5;
            }
 while ( puVar5 != (uint*)( lVar4 + 0x18 + ( ( ( param_3 - param_2 ) - 1 ) + uVar7 ) * 0x14 ) );
         }

      }
 else {
         lVar14 = ( ulong )(param_3 - 1) * 0x14;
         lVar12 = (ulong)param_2 * 0x14;
         lVar9 = lVar4 + lVar14;
         uVar11 = *(uint*)( lVar4 + 8 + lVar12 );
         uVar13 = *(uint*)( lVar9 + 8 );
         if (uVar13 < uVar11) {
            if (param_2 < param_3) {
               puVar5 = (uint*)( lVar4 + 4 + lVar12 );
               do {
                  if (puVar5[1] == uVar13) break;
                  *(uint*)( this + 0xc0 ) = *(uint*)( this + 0xc0 ) | 0x20;
                  *puVar5 = *puVar5 | param_1;
                  puVar5 = puVar5 + 5;
               }
 while ( (uint*)( lVar4 + 0x18 + ( ( ulong )(( param_3 - param_2 ) - 1) + (ulong)param_2 ) * 0x14 ) != puVar5 );
            }

         }
 else if (param_2 < param_3) {
            do {
               if (*(uint*)( lVar9 + 8 ) == uVar11) break;
               *(uint*)( this + 0xc0 ) = *(uint*)( this + 0xc0 ) | 0x20;
               *(uint*)( lVar9 + 4 ) = *(uint*)( lVar9 + 4 ) | param_1;
               lVar9 = lVar9 + -0x14;
            }
 while ( lVar4 + -0x14 + lVar14 + ( ulong )(( param_3 - param_2 ) - 1) * -0x14 != lVar9 );
         }

      }

   }

   LAB_00108510:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* hb_buffer_t::message(hb_font_t*, char const*, ...) */undefined8 hb_buffer_t::message(hb_buffer_t *this, hb_font_t *param_1, char *param_2, ...) {
   long lVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = 1;
   if (*(long*)( this + 0xd0 ) != 0) {
      uVar2 = hb_buffer_t::message_impl((hb_font_t*)this, (char*)param_1, (__va_list_tag*)param_2);
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* hb_serialize_context_t::pop_discard() */void hb_serialize_context_t::pop_discard(hb_serialize_context_t *this) {
   long *plVar1;
   long lVar2;
   byte bVar3;
   int iVar4;
   long *plVar5;
   void *__s2;
   void *__s2_00;
   undefined8 *puVar6;
   uint uVar7;
   int iVar8;
   int iVar9;
   uint uVar10;
   long lVar11;
   ulong uVar12;
   undefined8 uVar13;
   uint uVar14;
   long *plVar15;
   ulong uVar16;
   uint uVar17;
   int iVar18;
   undefined8 *puVar19;
   plVar5 = *(long**)( this + 0x48 );
   if (plVar5 != (long*)0x0) {
      uVar10 = *(uint*)( this + 0x2c );
      if (uVar10 == 0) {
         lVar2 = plVar5[1];
         *(long*)( this + 0x48 ) = plVar5[6];
         lVar11 = *(long*)( this + 0x20 );
         if (lVar11 == 0) {
            lVar11 = *plVar5;
         }

         uVar10 = *(uint*)( this + 0x54 );
         *(long*)( this + 8 ) = lVar11;
         *(long*)( this + 0x10 ) = lVar2;
         while (1 < uVar10) {
            plVar1 = (long*)( *(long*)( this + 0x58 ) + ( ulong )(uVar10 - 1) * 8 );
            puVar19 = (undefined8*)*plVar1;
            __s2 = (void*)*puVar19;
            if (*(void**)( this + 0x10 ) <= __s2) break;
            lVar2 = *(long*)( this + 0x88 );
            if (lVar2 == 0) {
               LAB_00108f1a:iVar4 = *(int*)( puVar19 + 2 );
            }
 else {
               uVar16 = puVar19[1] - (long)__s2;
               uVar12 = 0x80;
               if ((long)uVar16 < 0x81) {
                  uVar12 = uVar16;
               }

               uVar12 = fasthash64(__s2, uVar12 & 0xffffffff, ( ulong )(uVar10 - 1));
               __s2_00 = (void*)puVar19[3];
               iVar4 = *(int*)( (long)puVar19 + 0x14 );
               uVar7 = iVar4 * 0xc;
               uVar13 = fasthash64(__s2_00, (ulong)uVar7, uVar12 >> 0x20);
               uVar10 = *(uint*)( this + 0x7c );
               uVar17 = ( (int)uVar13 - (int)( (ulong)uVar13 >> 0x20 ) ^ (int)uVar12 - (int)( uVar12 >> 0x20 ) ) & 0x3fffffff;
               uVar12 = (ulong)uVar17 % ( ulong ) * (uint*)( this + 0x80 );
               plVar15 = (long*)( lVar2 + uVar12 * 0x10 );
               bVar3 = *(byte*)( plVar15 + 1 );
               if (( bVar3 & 2 ) == 0) goto LAB_00108f1a;
               iVar18 = 0;
               do bVar3 = *(byte*)( plVar15 + 1 ); while ( ( bVar3 & 2 ) != 0 );
               iVar4 = *(int*)( puVar19 + 2 );
            }

            if (iVar4 != 0) {
               free((void*)puVar19[3]);
            }

            puVar19[2] = 0;
            puVar19[3] = 0;
            if (*(int*)( puVar19 + 4 ) != 0) {
               free((void*)puVar19[5]);
            }

            puVar19[4] = 0;
            iVar4 = *(int*)( this + 0x54 );
            puVar19[5] = 0;
            if (iVar4 == 0) break;
            uVar10 = iVar4 - 1;
            *(uint*)( this + 0x54 ) = uVar10;
         }
;
      }
 else {
         if (0x10 < uVar10) {
            return;
         }

         if (( 0x10104UL >> ( (ulong)uVar10 & 0x3f ) & 1 ) == 0) {
            return;
         }

         *(long*)( this + 0x48 ) = plVar5[6];
      }

      lVar2 = plVar5[2];
      *(undefined8*)( this + 0x20 ) = 0;
      if ((int)lVar2 != 0) {
         free((void*)plVar5[3]);
      }

      plVar5[2] = 0;
      plVar5[3] = 0;
      if ((int)plVar5[4] != 0) {
         free((void*)plVar5[5]);
      }

      plVar5[4] = 0;
      lVar2 = *(long*)( this + 0x30 );
      plVar5[5] = 0;
      *plVar5 = lVar2;
      *(long**)( this + 0x30 ) = plVar5;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* hb_serialize_context_t::resolve_links() */void hb_serialize_context_t::resolve_links(hb_serialize_context_t *this) {
   long *plVar1;
   uint *puVar2;
   byte bVar3;
   long *plVar4;
   uint *puVar5;
   undefined8 *puVar6;
   ushort uVar7;
   int iVar8;
   uint uVar9;
   ulong uVar10;
   long *plVar11;
   byte bVar12;
   uint *puVar13;
   long *plVar14;
   if (*(int*)( this + 0x2c ) == 0) {
      if (*(int*)( this + 0x54 ) != 0) {
         plVar14 = (long*)( *(long*)( this + 0x58 ) + 8 );
         plVar1 = plVar14 + ( *(int*)( this + 0x54 ) - 1 );
         if (plVar1 != plVar14) {
            do {
               plVar4 = (long*)*plVar14;
               puVar5 = (uint*)plVar4[3];
               puVar2 = puVar5 + ( ulong ) * (uint*)( (long)plVar4 + 0x14 ) * 3;
               for (; puVar2 != puVar5; puVar5 = puVar5 + 3) {
                  if (puVar5[2] < *(uint*)( this + 0x54 )) {
                     plVar11 = (long*)( *(long*)( this + 0x58 ) + (ulong)puVar5[2] * 8 );
                  }
 else {
                     plVar11 = (long*)&_hb_CrapPool;
                     __hb_CrapPool = __hb_NullPool;
                  }

                  puVar6 = (undefined8*)*plVar11;
                  if (puVar6 == (undefined8*)0x0) {
                     *(uint*)( this + 0x2c ) = *(uint*)( this + 0x2c ) | 1;
                     return;
                  }

                  bVar3 = ( byte ) * puVar5;
                  bVar12 = bVar3 >> 4 & 3;
                  if (bVar12 == 1) {
                     iVar8 = (int)*puVar6 - (int)plVar4[1];
                  }
 else if (bVar12 == 2) {
                     iVar8 = ( (int)*(undefined8*)( this + 8 ) - (int)*(undefined8*)this ) + ( (int)*puVar6 - (int)*(undefined8*)( this + 0x10 ) );
                  }
 else {
                     iVar8 = 0;
                     if (bVar12 == 0) {
                        iVar8 = (int)*puVar6 - (int)*plVar4;
                     }

                  }

                  bVar12 = bVar3 & 7;
                  uVar9 = iVar8 - ( *puVar5 >> 6 );
                  puVar13 = (uint*)( (ulong)puVar5[1] + *plVar4 );
                  uVar7 = (ushort)uVar9;
                  if (( bVar3 & 8 ) == 0) {
                     if (bVar12 != 4) {
                        if (bVar12 != 3) {
                           *(ushort*)puVar13 = uVar7 << 8 | uVar7 >> 8;
                           uVar10 = ( ulong )(ushort)(( uVar7 >> 8 ) << 8 | uVar7 & 0xff);
                           goto joined_r0x001090d7;
                        }

                        *(char*)puVar13 = (char)( uVar9 >> 0x10 );
                        *(ushort*)( (long)puVar13 + 1 ) = uVar7 << 8 | uVar7 >> 8;
                        if (uVar9 < 0x1000000) goto joined_r0x001090e4;
                        goto LAB_001090d9;
                     }

                     *puVar13 = uVar9 >> 0x18 | ( uVar9 & 0xff0000 ) >> 8 | ( uVar9 & 0xff00 ) << 8 | uVar9 * 0x1000000;
                  }
 else {
                     if (bVar12 == 4) {
                        uVar10 = (ulong)(int)uVar9;
                        *puVar13 = uVar9 >> 0x18 | ( uVar9 & 0xff0000 ) >> 8 | ( uVar9 & 0xff00 ) << 8 | uVar9 * 0x1000000;
                     }
 else {
                        *(ushort*)puVar13 = uVar7 << 8 | uVar7 >> 8;
                        uVar10 = ( ulong )(short)(( uVar7 >> 8 ) << 8 | uVar7 & 0xff);
                     }

                     joined_r0x001090d7:if (uVar10 != uVar9) {
                        LAB_001090d9:*(uint*)( this + 0x2c ) = *(uint*)( this + 0x2c ) | 2;
                     }

                  }

                  joined_r0x001090e4:;
               }

               plVar14 = plVar14 + 1;
               if (plVar1 == plVar14) {
                  return;
               }

            }
 while ( true );
         }

      }

   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OT::Layout::Common::Coverage::get_coverage(unsigned int) const */uint OT::Layout::Common::Coverage::get_coverage(Coverage *this, uint param_1) {
   ushort uVar1;
   uint uVar2;
   uint uVar3;
   int iVar4;
   Coverage *pCVar5;
   int iVar6;
   if (*(short*)this == 0x100) {
      uVar1 = *(ushort*)( this + 2 ) << 8 | *(ushort*)( this + 2 ) >> 8;
      iVar6 = uVar1 - 1;
      if (uVar1 != 0) {
         iVar4 = 0;
         do {
            uVar2 = ( uint )(iVar4 + iVar6) >> 1;
            uVar3 = ( uint )(ushort)(*(ushort*)( this + (ulong)uVar2 * 2 + 4 ) << 8 | *(ushort*)( this + (ulong)uVar2 * 2 + 4 ) >> 8);
            if (param_1 < uVar3) {
               iVar6 = uVar2 - 1;
            }
 else {
               if (param_1 == uVar3) {
                  return uVar2;
               }

               iVar4 = uVar2 + 1;
            }

         }
 while ( iVar4 <= iVar6 );
      }

   }
 else if (*(short*)this == 0x200) {
      uVar1 = *(ushort*)( this + 2 ) << 8 | *(ushort*)( this + 2 ) >> 8;
      iVar6 = uVar1 - 1;
      if (uVar1 != 0) {
         iVar4 = 0;
         do {
            while (true) {
               uVar2 = ( uint )(iVar4 + iVar6) >> 1;
               pCVar5 = this + (ulong)uVar2 * 6 + 4;
               uVar1 = *(ushort*)pCVar5 << 8 | *(ushort*)pCVar5 >> 8;
               if (param_1 < uVar1) break;
               if (param_1 <= ( ushort )(*(ushort*)( pCVar5 + 2 ) << 8 | *(ushort*)( pCVar5 + 2 ) >> 8)) goto LAB_00109303;
               iVar4 = uVar2 + 1;
               if (iVar6 < iVar4) goto LAB_001092de;
            }
;
            iVar6 = uVar2 - 1;
         }
 while ( iVar4 <= iVar6 );
      }

      LAB_001092de:uVar1 = __hb_Null_OT_RangeRecord << 8 | __hb_Null_OT_RangeRecord >> 8;
      if (uVar1 <= ( ushort )(_DAT_0011605a << 8 | _DAT_0011605a >> 8)) {
         pCVar5 = (Coverage*)&_hb_Null_OT_RangeRecord;
         LAB_00109303:return ( ( uint )(ushort)(*(ushort*)( pCVar5 + 4 ) << 8 | *(ushort*)( pCVar5 + 4 ) >> 8) - (uint)uVar1 ) + param_1;
      }

   }

   return 0xffffffff;
}
/* OT::Rule<OT::Layout::SmallTypes>::apply(OT::hb_ot_apply_context_t*, OT::ContextApplyLookupContext
   const&) const [clone .isra.0] */undefined8 OT::Rule<OT::Layout::SmallTypes>::apply(hb_ot_apply_context_t *param_1, ContextApplyLookupContext *param_2) {
   hb_ot_apply_context_t *phVar1;
   uint *puVar2;
   byte bVar3;
   ushort uVar4;
   long lVar5;
   byte bVar6;
   bool bVar7;
   char cVar8;
   uint uVar9;
   uint *__ptr;
   ulong uVar11;
   short sVar12;
   int iVar13;
   undefined8 in_RCX;
   ushort uVar14;
   undefined8 in_RDX;
   ushort *puVar15;
   undefined8 uVar16;
   uint uVar17;
   uint *puVar18;
   ContextApplyLookupContext CVar19;
   byte bVar20;
   ushort uVar21;
   hb_buffer_t *phVar22;
   uint uVar23;
   byte bVar24;
   long in_FS_OFFSET;
   LookupRecord *local_68;
   uint local_58[6];
   long local_40;
   ulong uVar10;
   phVar1 = param_1 + 4;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar4 = *(ushort*)( param_1 + 2 );
   uVar14 = *(ushort*)param_1 << 8 | *(ushort*)param_1 >> 8;
   uVar17 = (uint)uVar14;
   if (uVar14 == 0) {
      __ptr = local_58;
      local_68 = (LookupRecord*)phVar1;
   }
 else {
      local_68 = (LookupRecord*)( phVar1 + ( ( uVar14 - 2 ) + (uint)uVar14 ) );
      if (( 0x40 < uVar17 ) || ( ( __ptr = local_58 ),4 < uVar17 && ( __ptr = (uint*)malloc((ulong)uVar14 * 4) ),__ptr == (uint*)0x0 )) {
         uVar16 = 0;
         goto LAB_0010960b;
      }

   }

   phVar22 = *(hb_buffer_t**)( param_2 + 0xa0 );
   CVar19 = (ContextApplyLookupContext)0x0;
   lVar5 = *(long*)( *(long*)( param_2 + 0x10 ) + 0xa0 );
   uVar9 = *(uint*)( phVar22 + 0x5c );
   uVar10 = (ulong)uVar9;
   iVar13 = *(int*)( lVar5 + 0x60 );
   *(uint*)( param_2 + 8 ) = uVar9;
   *(int*)( param_2 + 0x40 ) = iVar13;
   if (uVar9 == *(uint*)( lVar5 + 0x5c )) {
      CVar19 = *(ContextApplyLookupContext*)( *(long*)( lVar5 + 0x70 ) + uVar10 * 0x14 + 0xf );
   }

   *(undefined8*)( param_2 + 0x30 ) = in_RCX;
   if (param_2[0x23] == (ContextApplyLookupContext)0x0) {
      CVar19 = (ContextApplyLookupContext)0x0;
   }

   *(undefined8*)( param_2 + 0x28 ) = in_RDX;
   *(hb_ot_apply_context_t**)( param_2 + 0x38 ) = phVar1;
   param_2[0x24] = CVar19;
   bVar3 = *(byte*)( *(long*)( phVar22 + 0x70 ) + uVar10 * 0x14 + 0xe );
   bVar24 = bVar3 >> 5;
   bVar20 = 0;
   if (( bVar3 & 0x10 ) == 0) {
      bVar20 = bVar3 & 0xf;
   }

   uVar23 = uVar9;
   if (1 < uVar17) {
      puVar18 = __ptr + 1;
      bVar7 = false;
      LAB_00109482:LAB_0010948c:while (true) {
         do {
            if (iVar13 + -1 <= (int)uVar10) {
               uVar9 = *(uint*)( param_2 + 0x40 );
               goto LAB_001095ef;
            }

            uVar9 = (int)uVar10 + 1;
            uVar10 = (ulong)uVar9;
            *(uint*)( param_2 + 8 ) = uVar9;
            puVar2 = (uint*)( *(long*)( *(long*)( *(long*)( param_2 + 0x10 ) + 0xa0 ) + 0x70 ) + uVar10 * 0x14 );
            uVar21 = (ushort)puVar2[3];
            uVar23 = *(uint*)( param_2 + 0x18 ) & (uint)uVar21;
         }
 while ( ( uVar23 & 0xe ) != 0 );
         if (( ( uVar21 & 8 ) == 0 ) || ( cVar8 = hb_ot_apply_context_t::match_properties_mark(*(hb_ot_apply_context_t**)( *(long*)( param_2 + 0x10 ) + 0xf8 ), *puVar2, (uint)uVar21, *(uint*)( param_2 + 0x18 )) ),cVar8 != '\0') break;
         LAB_0010977b:uVar10 = ( ulong ) * (uint*)( param_2 + 8 );
      }
;
      uVar21 = (ushort)puVar2[4];
      sVar12 = 0;
      if (( ( uVar21 & 0x20 ) != 0 ) && ( ( puVar2[3] & 0x10 ) == 0 )) {
         if (param_2[0x20] == (ContextApplyLookupContext)0x0) {
            if (( uVar21 & 0x1f ) == 1) {
               sVar12 = 0;
               if (( uVar21 & 0x200 ) != 0) goto LAB_001094e9;
               if (param_2[0x21] == (ContextApplyLookupContext)0x0) goto LAB_0010979b;
            }

         }
 else if (( param_2[0x21] == (ContextApplyLookupContext)0x0 ) && ( ( uVar21 & 0x1f ) == 1 )) {
            LAB_0010979b:sVar12 = 0;
            if (( uVar21 & 0x100 ) != 0) goto LAB_001094e9;
         }

         if (param_2[0x22] == (ContextApplyLookupContext)0x0) {
            sVar12 = ( ( uVar21 >> 6 ^ 1 ) & 1 ) * 2;
         }
 else {
            sVar12 = 2;
         }

      }

      LAB_001094e9:puVar15 = *(ushort**)( param_2 + 0x38 );
      uVar21 = 0;
      if (puVar15 != (ushort*)0x0) {
         uVar21 = *puVar15 << 8 | *puVar15 >> 8;
      }

      if (( ( puVar2[1] & *(uint*)( param_2 + 0x1c ) ) != 0 ) && ( ( param_2[0x24] == (ContextApplyLookupContext)0x0 || ( param_2[0x24] == *(ContextApplyLookupContext*)( (long)puVar2 + 0xf ) ) ) )) {
         if (*(code**)( param_2 + 0x28 ) == (code*)0x0) {
            if (sVar12 != 0) goto LAB_0010977b;
            goto LAB_00109557;
         }

         cVar8 = ( **(code**)( param_2 + 0x28 ) )(puVar2, uVar21, *(undefined8*)( param_2 + 0x30 ));
         if (cVar8 != '\0') goto code_r0x0010954d;
      }

      uVar10 = ( ulong ) * (uint*)( param_2 + 8 );
      if (sVar12 == 0) {
         uVar9 = *(uint*)( param_2 + 8 ) + 1;
         goto LAB_001095ef;
      }

      goto LAB_0010948c;
   }

   goto LAB_001098af;
   code_r0x0010954d:puVar15 = *(ushort**)( param_2 + 0x38 );
   LAB_00109557:if (puVar15 != (ushort*)0x0) {
      *(ushort**)( param_2 + 0x38 ) = puVar15 + 1;
   }

   uVar10 = ( ulong ) * (uint*)( param_2 + 8 );
   lVar5 = *(long*)( phVar22 + 0x70 );
   *puVar18 = *(uint*)( param_2 + 8 );
   bVar3 = *(byte*)( lVar5 + uVar10 * 0x14 + 0xe );
   uVar9 = 0;
   if (( bVar3 & 0x10 ) == 0) {
      bVar6 = bVar3 >> 5;
      if (bVar24 == 0 || bVar20 == 0) {
         if (( bVar6 == 0 || ( bVar3 & 0xf ) == 0 ) || ( bVar24 == bVar6 )) goto LAB_001095bd;
         goto LAB_001095ef;
      }

      if (( ( bVar3 & 0xf ) == bVar20 ) && ( bVar24 == bVar6 )) goto LAB_001095bd;
   }
 else if (bVar24 == 0 || bVar20 == 0) goto LAB_001095bd;
   if (!bVar7) {
      uVar11 = ( ulong ) * (uint*)( phVar22 + 100 );
      do {
         if ((int)uVar11 == 0) goto LAB_001095ef;
         uVar11 = ( ulong )((int)uVar11 - 1);
         puVar2 = (uint*)( *(long*)( phVar22 + 0x78 ) + uVar11 * 0x14 );
         bVar3 = *(byte*)( (long)puVar2 + 0xe );
         if (bVar24 != bVar3 >> 5) goto LAB_001095ef;
      }
 while ( ( ( bVar3 & 0x10 ) == 0 ) && ( ( bVar3 & 0xf ) != 0 ) );
      uVar21 = (ushort)puVar2[3];
      if (( *(uint*)( param_2 + 0x18 ) & (uint)uVar21 & 0xe ) == 0) {
         if (( uVar21 & 8 ) == 0) {
            LAB_001095ef:phVar22 = *(hb_buffer_t**)( param_2 + 0xa0 );
            if (( (byte)phVar22[0x18] & 0x40 ) != 0) {
               hb_buffer_t::_set_glyph_flags(phVar22, 2, *(uint*)( phVar22 + 0x5c ), uVar9, false, false);
            }

            uVar16 = 0;
            goto LAB_00109602;
         }

         uVar9 = uVar23 & 0xe;
         cVar8 = hb_ot_apply_context_t::match_properties_mark(*(hb_ot_apply_context_t**)( *(long*)( param_2 + 0x10 ) + 0xf8 ), *puVar2, (uint)uVar21, *(uint*)( param_2 + 0x18 ));
         if (cVar8 != '\0') goto LAB_001095ef;
         bVar7 = true;
         uVar10 = ( ulong ) * (uint*)( param_2 + 8 );
         goto LAB_001095bd;
      }

   }

   bVar7 = true;
   LAB_001095bd:puVar18 = puVar18 + 1;
   if (__ptr + ( ulong )(uVar14 - 2) + 2 == puVar18) goto LAB_00109898;
   iVar13 = *(int*)( param_2 + 0x40 );
   goto LAB_00109482;
   LAB_00109898:uVar9 = *(uint*)( phVar22 + 0x5c );
   phVar22 = *(hb_buffer_t**)( param_2 + 0xa0 );
   uVar23 = (uint)uVar10;
   LAB_001098af:*__ptr = uVar9;
   hb_buffer_t::_set_glyph_flags(phVar22, 3, *(uint*)( phVar22 + 0x5c ), uVar23 + 1, true, false);
   uVar16 = 1;
   apply_lookup((hb_ot_apply_context_t*)param_2, uVar17, __ptr, ( uint )(ushort)(uVar4 << 8 | uVar4 >> 8), local_68, uVar23 + 1);
   LAB_00109602:if (__ptr != local_58) {
      free(__ptr);
   }

   LAB_0010960b:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar16;
}
/* OT::Lookup::serialize(hb_serialize_context_t*, unsigned int, unsigned int, unsigned int) */undefined8 OT::Lookup::serialize(Lookup *this, hb_serialize_context_t *param_1, uint param_2, uint param_3, uint param_4) {
   long lVar1;
   ushort uVar2;
   void *pvVar3;
   Lookup *pLVar4;
   Lookup *pLVar5;
   ushort uVar6;
   ulong uVar7;
   if (*(int*)( param_1 + 0x2c ) != 0) {
      return 0;
   }

   pLVar5 = this + 6;
   pvVar3 = *(void**)( param_1 + 8 );
   uVar7 = (long)pLVar5 - (long)pvVar3;
   if (( uVar7 < 0x80000000 ) && ( pLVar5 <= *(Lookup**)( param_1 + 0x10 ) )) {
      pLVar4 = pLVar5;
      if ((int)uVar7 != 0) {
         memset(pvVar3, 0, uVar7);
         pvVar3 = *(void**)( param_1 + 8 );
         pLVar4 = (Lookup*)( uVar7 + (long)pvVar3 );
      }

      *(Lookup**)( param_1 + 8 ) = pLVar4;
      if (pvVar3 == (void*)0x0) {
         return 0;
      }

      *(ushort*)this = (ushort)param_2 << 8 | (ushort)param_2 >> 8;
      *(ushort*)( this + 2 ) = (ushort)param_3 << 8 | (ushort)param_3 >> 8;
      if (*(int*)( param_1 + 0x2c ) != 0) {
         return 0;
      }

      pvVar3 = *(void**)( param_1 + 8 );
      uVar7 = (long)pLVar5 - (long)pvVar3;
      if (( uVar7 < 0x80000000 ) && ( pLVar5 <= *(Lookup**)( param_1 + 0x10 ) )) {
         if ((int)uVar7 != 0) {
            memset(pvVar3, 0, uVar7);
            pvVar3 = *(void**)( param_1 + 8 );
            pLVar5 = (Lookup*)( (long)pvVar3 + uVar7 );
         }

         *(Lookup**)( param_1 + 8 ) = pLVar5;
         if (pvVar3 == (void*)0x0) {
            return 0;
         }

         uVar2 = (ushort)param_4;
         *(ushort*)( this + 4 ) = uVar2 << 8 | uVar2 >> 8;
         if (param_4 != ( ushort )(( uVar2 >> 8 ) << 8 | uVar2 & 0xff)) {
            *(uint*)( param_1 + 0x2c ) = *(uint*)( param_1 + 0x2c ) | 0x10;
            return 0;
         }

         if (*(int*)( param_1 + 0x2c ) != 0) {
            return 0;
         }

         pvVar3 = *(void**)( param_1 + 8 );
         pLVar5 = this + 4 + ( param_4 * 2 + 2 );
         uVar7 = (long)pLVar5 - (long)pvVar3;
         if (( uVar7 < 0x80000000 ) && ( pLVar5 <= *(Lookup**)( param_1 + 0x10 ) )) {
            if ((int)uVar7 != 0) {
               memset(pvVar3, 0, uVar7);
               pvVar3 = *(void**)( param_1 + 8 );
               pLVar5 = (Lookup*)( (long)pvVar3 + uVar7 );
            }

            *(Lookup**)( param_1 + 8 ) = pLVar5;
            if (pvVar3 == (void*)0x0) {
               return 0;
            }

            if (( (byte)this[3] & 0x10 ) == 0) {
               return 1;
            }

            uVar2 = *(ushort*)( this + 4 ) << 8 | *(ushort*)( this + 4 ) >> 8;
            if (*(int*)( param_1 + 0x2c ) != 0) {
               return 0;
            }

            pLVar4 = this + ( ( (int)( this + 4 ) + 4 + (uint)uVar2 * 2 ) - (int)this );
            uVar7 = (long)pLVar4 - (long)pLVar5;
            if (( uVar7 < 0x80000000 ) && ( pLVar4 <= *(Lookup**)( param_1 + 0x10 ) )) {
               if ((int)uVar7 == 0) {
                  *(Lookup**)( param_1 + 8 ) = pLVar4;
               }
 else {
                  memset(pLVar5, 0, uVar7);
                  lVar1 = *(long*)( param_1 + 8 );
                  *(ulong*)( param_1 + 8 ) = uVar7 + lVar1;
                  if (lVar1 == 0) {
                     return 0;
                  }

                  uVar2 = *(ushort*)( this + 4 ) << 8 | *(ushort*)( this + 4 ) >> 8;
               }

               uVar6 = ( ushort )(param_3 >> 0x10);
               *(ushort*)( this + ( ulong )((uint)uVar2 * 2 + 2) + 4 ) = uVar6 << 8 | uVar6 >> 8;
               return 1;
            }

         }

      }

   }

   *(undefined4*)( param_1 + 0x2c ) = 4;
   return 0;
}
/* OT::ItemVariationStore::sanitize(hb_sanitize_context_t*) const */undefined8 OT::ItemVariationStore::sanitize(ItemVariationStore *this, hb_sanitize_context_t *param_1) {
   ItemVariationStore *pIVar1;
   ushort uVar2;
   uint uVar3;
   ushort uVar4;
   int iVar5;
   ulong uVar6;
   ItemVariationStore *pIVar7;
   long lVar8;
   ItemVariationStore *pIVar9;
   ushort uVar10;
   pIVar7 = this + 8;
   if (( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pIVar7 - *(long*)( param_1 + 8 ))) {
      return 0;
   }

   if (*(short*)this != 0x100) {
      return 0;
   }

   if ((ItemVariationStore*)( ulong ) * (uint*)( param_1 + 0x18 ) < this + ( 6 - *(long*)( param_1 + 8 ) )) {
      return 0;
   }

   uVar3 = *(uint*)( this + 2 );
   if (uVar3 != 0) {
      pIVar9 = this + ( uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18 );
      pIVar1 = pIVar9 + 4;
      if (( ( ulong )((long)pIVar1 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 ) ) && ( lVar8 = ( ulong )(( uint )(ushort)(*(ushort*)pIVar9 << 8 | *(ushort*)pIVar9 >> 8) * ( uint )(ushort)(*(ushort*)( pIVar9 + 2 ) << 8 | *(ushort*)( pIVar9 + 2 ) >> 8)) * 6 ),uVar3 = (uint)lVar8,(int)( (ulong)lVar8 >> 0x20 ) == 0) {
         lVar8 = *(long*)( param_1 + 8 );
         uVar6 = ( ulong ) * (uint*)( param_1 + 0x18 );
         if (( ( ulong )((long)pIVar1 - lVar8) <= uVar6 ) && ( ( uVar3 <= ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)pIVar1) && ( iVar5 = *(int*)( param_1 + 0x1c ) - uVar3 ),*(int*)( param_1 + 0x1c ) = iVar5,0 < iVar5 ) )) goto LAB_00109baa;
      }

      if (0x1f < *(uint*)( param_1 + 0x2c )) {
         return 0;
      }

      *(uint*)( param_1 + 0x2c ) = *(uint*)( param_1 + 0x2c ) + 1;
      if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
         return 0;
      }

      *(undefined4*)( this + 2 ) = 0;
   }

   lVar8 = *(long*)( param_1 + 8 );
   uVar6 = ( ulong ) * (uint*)( param_1 + 0x18 );
   LAB_00109baa:if (( ( ( uVar6 < ( ulong )((long)pIVar7 - lVar8) ) || ( ( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pIVar7 - *(long*)( param_1 + 8 )) ) ) || ( uVar3 = ( uint )(ushort)(*(ushort*)( this + 6 ) << 8 | *(ushort*)( this + 6 ) >> 8)(uint)((int)*(undefined8*)( param_1 + 0x10 ) - (int)pIVar7) < uVar3 * 4 ) ) || ( iVar5 = *(int*)( param_1 + 0x1c ) + uVar3 * -4 ),*(int*)( param_1 + 0x1c ) = iVar5,iVar5 < 1) {
      return 0;
   }

   uVar2 = *(ushort*)( this + 6 ) << 8 | *(ushort*)( this + 6 ) >> 8;
   if (uVar2 != 0) {
      pIVar7 = this + 0xc;
      do {
         if (( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pIVar7 - *(long*)( param_1 + 8 ))) {
            return 0;
         }

         uVar3 = *(uint*)( pIVar7 + -4 );
         if (uVar3 != 0) {
            pIVar9 = this + ( uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18 );
            pIVar1 = pIVar9 + 6;
            if (( ( ( ulong )((long)pIVar1 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 ) ) && ( ( ulong )((long)pIVar1 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 ) ) ) && ( ( uVar3 = ( uint )(ushort)(*(ushort*)( pIVar9 + 4 ) << 8 | *(ushort*)( pIVar9 + 4 ) >> 8) ),uVar3 * 2 <= ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)pIVar1) && ( iVar5 = *(int*)( param_1 + 0x1c ) + uVar3 * -2 ),*(int*)( param_1 + 0x1c ) = iVar5,0 < iVar5 )) {
               uVar4 = *(ushort*)( pIVar9 + 2 ) << 8 | *(ushort*)( pIVar9 + 2 ) >> 8;
               uVar10 = *(ushort*)( pIVar9 + 4 ) << 8 | *(ushort*)( pIVar9 + 4 ) >> 8;
               uVar3 = uVar4 & 0x7fff;
               if (uVar3 <= uVar10) {
                  uVar3 = uVar3 + uVar10;
                  if ((short)uVar4 < 0) {
                     uVar3 = uVar3 * 2;
                  }

                  lVar8 = (ulong)uVar3 * ( ulong )(ushort)(*(ushort*)pIVar9 << 8 | *(ushort*)pIVar9 >> 8);
                  uVar3 = (uint)lVar8;
                  if (( ( (int)( (ulong)lVar8 >> 0x20 ) == 0 ) && ( ( ulong )((long)( pIVar9 + ( ulong )(uVar10 + 2 + (uint)uVar10) + 4 ) - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 ) ) ) && ( ( uVar3 <= ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)( pIVar9 + ( ulong )(uVar10 + 2 + (uint)uVar10) + 4 )) && ( iVar5 = *(int*)( param_1 + 0x1c ) - uVar3 ),*(int*)( param_1 + 0x1c ) = iVar5,0 < iVar5 ) )) goto LAB_00109c10;
               }

            }

            if (0x1f < *(uint*)( param_1 + 0x2c )) {
               return 0;
            }

            *(uint*)( param_1 + 0x2c ) = *(uint*)( param_1 + 0x2c ) + 1;
            if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
               return 0;
            }

            *(undefined4*)( pIVar7 + -4 ) = 0;
         }

         LAB_00109c10:pIVar7 = pIVar7 + 4;
      }
 while ( this + ( ulong )(uVar2 - 1) * 4 + 0x10 != pIVar7 );
   }

   return 1;
}
/* OT::AttachList::sanitize(hb_sanitize_context_t*) const */undefined8 OT::AttachList::sanitize(AttachList *this, hb_sanitize_context_t *param_1) {
   ushort uVar1;
   AttachList *pAVar2;
   AttachList *pAVar3;
   ushort uVar4;
   int iVar5;
   uint uVar6;
   long lVar7;
   if ((AttachList*)( ulong ) * (uint*)( param_1 + 0x18 ) < this + ( 2 - *(long*)( param_1 + 8 ) )) {
      return 0;
   }

   uVar4 = *(ushort*)this;
   if (uVar4 != 0) {
      pAVar3 = this + ( ushort )(uVar4 << 8 | uVar4 >> 8);
      if (pAVar3 + ( 2 - *(long*)( param_1 + 8 ) ) <= (AttachList*)( ulong ) * (uint*)( param_1 + 0x18 )) {
         if (*(short*)pAVar3 == 0x100) {
            if (pAVar3 + ( 4 - *(long*)( param_1 + 8 ) ) <= (AttachList*)( ulong ) * (uint*)( param_1 + 0x18 )) {
               lVar7 = *(long*)( param_1 + 8 );
               pAVar2 = (AttachList*)( ulong ) * (uint*)( param_1 + 0x18 );
               if (pAVar3 + ( 4 - lVar7 ) <= pAVar2) {
                  uVar6 = ( uint )(ushort)(*(ushort*)( pAVar3 + 2 ) << 8 | *(ushort*)( pAVar3 + 2 ) >> 8);
                  LAB_00109f8e:if (( uVar6 * 2 <= ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - ( (int)pAVar3 + 4 )) ) && ( iVar5 = *(int*)( param_1 + 0x1c ) + uVar6 * -2 ),*(int*)( param_1 + 0x1c ) = iVar5,0 < iVar5) goto LAB_00109e21;
               }

            }

         }
 else {
            if (*(short*)pAVar3 != 0x200) goto LAB_00109e1a;
            if (pAVar3 + ( 4 - *(long*)( param_1 + 8 ) ) <= (AttachList*)( ulong ) * (uint*)( param_1 + 0x18 )) {
               lVar7 = *(long*)( param_1 + 8 );
               pAVar2 = (AttachList*)( ulong ) * (uint*)( param_1 + 0x18 );
               if (pAVar3 + ( 4 - lVar7 ) <= pAVar2) {
                  uVar4 = *(ushort*)( pAVar3 + 2 ) << 8 | *(ushort*)( pAVar3 + 2 ) >> 8;
                  uVar6 = (uint)uVar4 + (uint)uVar4 * 2;
                  goto LAB_00109f8e;
               }

            }

         }

      }

      if (0x1f < *(uint*)( param_1 + 0x2c )) {
         return 0;
      }

      *(uint*)( param_1 + 0x2c ) = *(uint*)( param_1 + 0x2c ) + 1;
      if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
         return 0;
      }

      *(undefined2*)this = 0;
   }

   LAB_00109e1a:lVar7 = *(long*)( param_1 + 8 );
   pAVar2 = (AttachList*)( ulong ) * (uint*)( param_1 + 0x18 );
   LAB_00109e21:pAVar3 = this + 4;
   if (( ( ( pAVar2 < pAVar3 + -lVar7 ) || ( ( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pAVar3 - *(long*)( param_1 + 8 )) ) ) || ( uVar6 = ( uint )(ushort)(*(ushort*)( this + 2 ) << 8 | *(ushort*)( this + 2 ) >> 8)(uint)((int)*(undefined8*)( param_1 + 0x10 ) - (int)pAVar3) < uVar6 * 2 ) ) || ( iVar5 = *(int*)( param_1 + 0x1c ) + uVar6 * -2 ),*(int*)( param_1 + 0x1c ) = iVar5,iVar5 < 1) {
      return 0;
   }

   uVar4 = *(ushort*)( this + 2 ) << 8 | *(ushort*)( this + 2 ) >> 8;
   if (uVar4 != 0) {
      pAVar3 = this + 6;
      do {
         if (( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pAVar3 - *(long*)( param_1 + 8 ))) {
            return 0;
         }

         uVar1 = *(ushort*)( pAVar3 + -2 );
         if (uVar1 != 0) {
            pAVar2 = this + ( ushort )(uVar1 << 8 | uVar1 >> 8) + 2;
            if (( ( ( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pAVar2 - *(long*)( param_1 + 8 )) ) || ( uVar1 = *(ushort*)( this + ( ushort )(uVar1 << 8 | uVar1 >> 8) )(ulong) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pAVar2 - *(long*)( param_1 + 8 )) ) ) || ( ( uVar6 = ( uint )(ushort)(uVar1 << 8 | uVar1 >> 8)(uint)((int)*(undefined8*)( param_1 + 0x10 ) - (int)pAVar2) < uVar6 * 2 || ( iVar5 = iVar5 < 1 ) ) )) {
               if (0x1f < *(uint*)( param_1 + 0x2c )) {
                  return 0;
               }

               *(uint*)( param_1 + 0x2c ) = *(uint*)( param_1 + 0x2c ) + 1;
               if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
                  return 0;
               }

               *(undefined2*)( pAVar3 + -2 ) = 0;
            }

         }

         pAVar3 = pAVar3 + 2;
      }
 while ( this + ( ulong )(uVar4 - 1) * 2 + 8 != pAVar3 );
   }

   return 1;
}
/* OT::LigGlyph::sanitize(hb_sanitize_context_t*) const */undefined8 OT::LigGlyph::sanitize(LigGlyph *this, hb_sanitize_context_t *param_1) {
   short sVar1;
   LigGlyph *pLVar2;
   ushort uVar4;
   ushort uVar5;
   int iVar6;
   uint uVar7;
   LigGlyph *pLVar8;
   LigGlyph *pLVar9;
   uint uVar10;
   LigGlyph *pLVar3;
   pLVar2 = this + 2;
   if (( ( ( ( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pLVar2 - *(long*)( param_1 + 8 )) ) || ( ( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pLVar2 - *(long*)( param_1 + 8 )) ) ) || ( uVar7 = ( uint )(ushort)(*(ushort*)this << 8 | *(ushort*)this >> 8) ),( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)pLVar2) < uVar7 * 2 )) ( iVar6 = *(int*)( param_1 + 0x1c ) + uVar7 * -2 ),*(int*)( param_1 + 0x1c ) = iVar6,iVar6< 1)){return0;};
   uVar4 = *(ushort*)this << 8 | *(ushort*)this >> 8;
   if (uVar4 != 0) {
      pLVar2 = this + 4;
      do {
         if (( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pLVar2 - *(long*)( param_1 + 8 ))) {
            return 0;
         }

         uVar5 = *(ushort*)( pLVar2 + -2 );
         if (uVar5 != 0) goto LAB_0010a0f9;
         pLVar2 = pLVar2 + 2;
      }
 while ( this + ( ulong )(uVar4 - 1) * 2 + 6 != pLVar2 );
   }

   return 1;
   LAB_0010a0f9:pLVar8 = this + ( ushort )(uVar5 << 8 | uVar5 >> 8);
   pLVar3 = pLVar2;
   if ((LigGlyph*)( ulong ) * (uint*)( param_1 + 0x18 ) < pLVar8 + ( 2 - *(long*)( param_1 + 8 ) )) {
      LAB_0010a178:uVar7 = *(uint*)( param_1 + 0x2c );
      LAB_0010a17b:if (0x1f < uVar7) {
         return 0;
      }

      *(uint*)( param_1 + 0x2c ) = uVar7 + 1;
      if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
         return 0;
      }

      *(ushort*)( pLVar2 + -2 ) = 0;
   }
 else {
      sVar1 = *(short*)pLVar8;
      if (sVar1 != 0x200) {
         if (sVar1 != 0x300) {
            if (sVar1 != 0x100) goto LAB_0010a130;
            goto LAB_0010a168;
         }

         if ((LigGlyph*)( ulong ) * (uint*)( param_1 + 0x18 ) < pLVar8 + ( 6 - *(long*)( param_1 + 8 ) )) goto LAB_0010a178;
         uVar5 = *(ushort*)( pLVar8 + 4 );
         if (uVar5 == 0) goto LAB_0010a130;
         pLVar9 = pLVar8 + ( ushort )(uVar5 << 8 | uVar5 >> 8);
         if (pLVar9 + ( 6 - *(long*)( param_1 + 8 ) ) <= (LigGlyph*)( ulong ) * (uint*)( param_1 + 0x18 )) {
            uVar5 = *(ushort*)( pLVar9 + 4 );
            if (( ushort )(( uVar5 << 8 | uVar5 >> 8 ) - 1) < 3) {
               uVar7 = ( uint )(ushort)(*(ushort*)( pLVar9 + 2 ) << 8 | *(ushort*)( pLVar9 + 2 ) >> 8);
               uVar10 = ( uint )(ushort)(*(ushort*)pLVar9 << 8 | *(ushort*)pLVar9 >> 8);
               if (uVar7 < uVar10) {
                  uVar7 = 6;
               }
 else {
                  uVar7 = ( uVar7 - uVar10 >> ( 4U - (char)( uVar5 >> 8 ) & 0x1f ) ) * 2 + 8;
               }

               if (( ( (LigGlyph*)( ulong ) * (uint*)( param_1 + 0x18 ) < pLVar9 + -*(long *)(param_1 + 8) ) || ( ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)pLVar9) < uVar7 ) ) || ( iVar6 = *(int*)( param_1 + 0x1c ) ),*(uint*)( param_1 + 0x1c ) = iVar6 - uVar7,(int)( iVar6 - uVar7 ) < 1) goto LAB_0010a260;
            }

            goto LAB_0010a130;
         }

         LAB_0010a260:if (0x1f < *(uint*)( param_1 + 0x2c )) {
            return 0;
         }

         uVar7 = *(uint*)( param_1 + 0x2c ) + 1;
         *(uint*)( param_1 + 0x2c ) = uVar7;
         if (param_1[0x28] != (hb_sanitize_context_t)0x0) {
            *(short*)( pLVar8 + 4 ) = 0;
            goto LAB_0010a130;
         }

         goto LAB_0010a17b;
      }

      LAB_0010a168:if ((LigGlyph*)( ulong ) * (uint*)( param_1 + 0x18 ) < pLVar8 + ( 4 - *(long*)( param_1 + 8 ) )) goto LAB_0010a178;
   }

   LAB_0010a130:do {
      pLVar2 = pLVar3 + 2;
      if (this + ( ulong )(uVar4 - 1) * 2 + 6 == pLVar2) {
         return 1;
      }

      if (( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pLVar2 - *(long*)( param_1 + 8 ))) {
         return 0;
      }

      uVar5 = *(ushort*)pLVar3;
      pLVar3 = pLVar2;
   }
 while ( uVar5 == 0 );
   goto LAB_0010a0f9;
}
/* OT::LigCaretList::sanitize(hb_sanitize_context_t*) const */undefined8 OT::LigCaretList::sanitize(LigCaretList *this, hb_sanitize_context_t *param_1) {
   ushort uVar1;
   char cVar2;
   ushort uVar3;
   LigCaretList *pLVar4;
   long lVar5;
   int iVar6;
   uint uVar7;
   LigCaretList *pLVar8;
   if ((LigCaretList*)( ulong ) * (uint*)( param_1 + 0x18 ) < this + ( 2 - *(long*)( param_1 + 8 ) )) {
      return 0;
   }

   uVar3 = *(ushort*)this;
   if (uVar3 != 0) {
      pLVar8 = this + ( ushort )(uVar3 << 8 | uVar3 >> 8);
      if (pLVar8 + ( 2 - *(long*)( param_1 + 8 ) ) <= (LigCaretList*)( ulong ) * (uint*)( param_1 + 0x18 )) {
         if (*(short*)pLVar8 == 0x100) {
            if (pLVar8 + ( 4 - *(long*)( param_1 + 8 ) ) <= (LigCaretList*)( ulong ) * (uint*)( param_1 + 0x18 )) {
               lVar5 = *(long*)( param_1 + 8 );
               pLVar4 = (LigCaretList*)( ulong ) * (uint*)( param_1 + 0x18 );
               if (pLVar8 + ( 4 - lVar5 ) <= pLVar4) {
                  uVar7 = ( uint )(ushort)(*(ushort*)( pLVar8 + 2 ) << 8 | *(ushort*)( pLVar8 + 2 ) >> 8);
                  LAB_0010a436:if (( uVar7 * 2 <= ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - ( (int)pLVar8 + 4 )) ) && ( iVar6 = *(int*)( param_1 + 0x1c ) + uVar7 * -2 ),*(int*)( param_1 + 0x1c ) = iVar6,0 < iVar6) goto LAB_0010a2eb;
               }

            }

         }
 else {
            if (*(short*)pLVar8 != 0x200) goto LAB_0010a2e4;
            if (pLVar8 + ( 4 - *(long*)( param_1 + 8 ) ) <= (LigCaretList*)( ulong ) * (uint*)( param_1 + 0x18 )) {
               lVar5 = *(long*)( param_1 + 8 );
               pLVar4 = (LigCaretList*)( ulong ) * (uint*)( param_1 + 0x18 );
               if (pLVar8 + ( 4 - lVar5 ) <= pLVar4) {
                  uVar3 = *(ushort*)( pLVar8 + 2 ) << 8 | *(ushort*)( pLVar8 + 2 ) >> 8;
                  uVar7 = (uint)uVar3 + (uint)uVar3 * 2;
                  goto LAB_0010a436;
               }

            }

         }

      }

      if (0x1f < *(uint*)( param_1 + 0x2c )) {
         return 0;
      }

      *(uint*)( param_1 + 0x2c ) = *(uint*)( param_1 + 0x2c ) + 1;
      if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
         return 0;
      }

      *(undefined2*)this = 0;
   }

   LAB_0010a2e4:lVar5 = *(long*)( param_1 + 8 );
   pLVar4 = (LigCaretList*)( ulong ) * (uint*)( param_1 + 0x18 );
   LAB_0010a2eb:pLVar8 = this + 4;
   if (( ( ( pLVar4 < pLVar8 + -lVar5 ) || ( ( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pLVar8 - *(long*)( param_1 + 8 )) ) ) || ( uVar7 = ( uint )(ushort)(*(ushort*)( this + 2 ) << 8 | *(ushort*)( this + 2 ) >> 8)(uint)((int)*(undefined8*)( param_1 + 0x10 ) - (int)pLVar8) < uVar7 * 2 ) ) || ( iVar6 = *(int*)( param_1 + 0x1c ) + uVar7 * -2 ),*(int*)( param_1 + 0x1c ) = iVar6,iVar6 < 1) {
      return 0;
   }

   uVar3 = *(ushort*)( this + 2 ) << 8 | *(ushort*)( this + 2 ) >> 8;
   if (uVar3 != 0) {
      pLVar8 = this + 6;
      do {
         if (( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pLVar8 - *(long*)( param_1 + 8 ))) {
            return 0;
         }

         uVar1 = *(ushort*)( pLVar8 + -2 );
         if (( uVar1 != 0 ) && ( cVar2 = LigGlyph::sanitize((LigGlyph*)( this + ( ushort )(uVar1 << 8 | uVar1 >> 8) ), param_1) ),cVar2 == '\0') {
            if (0x1f < *(uint*)( param_1 + 0x2c )) {
               return 0;
            }

            *(uint*)( param_1 + 0x2c ) = *(uint*)( param_1 + 0x2c ) + 1;
            if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
               return 0;
            }

            *(undefined2*)( pLVar8 + -2 ) = 0;
         }

         pLVar8 = pLVar8 + 2;
      }
 while ( this + ( ulong )(uVar3 - 1) * 2 + 8 != pLVar8 );
   }

   return 1;
}
/* OT::MarkGlyphSets::sanitize(hb_sanitize_context_t*) const */undefined8 OT::MarkGlyphSets::sanitize(MarkGlyphSets *this, hb_sanitize_context_t *param_1) {
   ushort uVar1;
   ushort uVar2;
   int iVar3;
   uint uVar4;
   MarkGlyphSets *pMVar5;
   MarkGlyphSets *pMVar6;
   if ((MarkGlyphSets*)( ulong ) * (uint*)( param_1 + 0x18 ) < this + ( 2 - *(long*)( param_1 + 8 ) )) {
      return 0;
   }

   if (*(short*)this == 0x100) {
      pMVar6 = this + 4;
      if (( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pMVar6 - *(long*)( param_1 + 8 ))) {
         return 0;
      }

      if (( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pMVar6 - *(long*)( param_1 + 8 ))) {
         return 0;
      }

      uVar4 = ( uint )(ushort)(*(ushort*)( this + 2 ) << 8 | *(ushort*)( this + 2 ) >> 8);
      if (( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)pMVar6) < uVar4 * 4) {
         return 0;
      }

      iVar3 = *(int*)( param_1 + 0x1c ) + uVar4 * -4;
      *(int*)( param_1 + 0x1c ) = iVar3;
      if (iVar3 < 1) {
         return 0;
      }

      uVar1 = *(ushort*)( this + 2 ) << 8 | *(ushort*)( this + 2 ) >> 8;
      if (uVar1 != 0) {
         pMVar6 = this + 8;
         do {
            if (( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pMVar6 - *(long*)( param_1 + 8 ))) {
               return 0;
            }

            uVar4 = *(uint*)( pMVar6 + -4 );
            if (uVar4 != 0) {
               pMVar5 = this + ( uVar4 >> 0x18 | ( uVar4 & 0xff0000 ) >> 8 | ( uVar4 & 0xff00 ) << 8 | uVar4 << 0x18 );
               if (pMVar5 + ( 2 - *(long*)( param_1 + 8 ) ) <= (MarkGlyphSets*)( ulong ) * (uint*)( param_1 + 0x18 )) {
                  if (*(short*)pMVar5 == 0x100) {
                     if (( pMVar5 + ( 4 - *(long*)( param_1 + 8 ) ) <= (MarkGlyphSets*)( ulong ) * (uint*)( param_1 + 0x18 ) ) && ( pMVar5 + ( 4 - *(long*)( param_1 + 8 ) ) <= (MarkGlyphSets*)( ulong ) * (uint*)( param_1 + 0x18 ) )) {
                        uVar4 = ( uint )(ushort)(*(ushort*)( pMVar5 + 2 ) << 8 | *(ushort*)( pMVar5 + 2 ) >> 8);
                        LAB_0010a602:if (( uVar4 * 2 <= ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - ( (int)pMVar5 + 4 )) ) && ( iVar3 = *(int*)( param_1 + 0x1c ) + uVar4 * -2 ),*(int*)( param_1 + 0x1c ) = iVar3,0 < iVar3) goto LAB_0010a580;
                     }

                  }
 else {
                     if (*(short*)pMVar5 != 0x200) goto LAB_0010a580;
                     if (( pMVar5 + ( 4 - *(long*)( param_1 + 8 ) ) <= (MarkGlyphSets*)( ulong ) * (uint*)( param_1 + 0x18 ) ) && ( pMVar5 + ( 4 - *(long*)( param_1 + 8 ) ) <= (MarkGlyphSets*)( ulong ) * (uint*)( param_1 + 0x18 ) )) {
                        uVar2 = *(ushort*)( pMVar5 + 2 ) << 8 | *(ushort*)( pMVar5 + 2 ) >> 8;
                        uVar4 = (uint)uVar2 + (uint)uVar2 * 2;
                        goto LAB_0010a602;
                     }

                  }

               }

               if (0x1f < *(uint*)( param_1 + 0x2c )) {
                  return 0;
               }

               *(uint*)( param_1 + 0x2c ) = *(uint*)( param_1 + 0x2c ) + 1;
               if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
                  return 0;
               }

               *(undefined4*)( pMVar6 + -4 ) = 0;
            }

            LAB_0010a580:pMVar6 = pMVar6 + 4;
         }
 while ( this + ( ulong )(uVar1 - 1) * 4 + 0xc != pMVar6 );
      }

   }

   return 1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OT::hb_ot_apply_context_t::_set_glyph_class(unsigned int, unsigned int, bool, bool) */void OT::hb_ot_apply_context_t::_set_glyph_class(hb_ot_apply_context_t *this, uint param_1, uint param_2, bool param_3, bool param_4) {
   long lVar1;
   undefined8 *puVar2;
   ushort uVar3;
   ushort uVar4;
   undefined *puVar5;
   ushort uVar6;
   short *psVar7;
   short sVar8;
   uint uVar9;
   long lVar10;
   undefined *puVar11;
   short *psVar12;
   ushort *puVar13;
   ushort *puVar14;
   int iVar15;
   int iVar16;
   *(ulong*)( this + 0x110 ) = *(ulong*)( this + 0x110 ) | 1L << ( ( byte )(param_1 >> 4) & 0x3f );
   *(ulong*)( this + 0x118 ) = *(ulong*)( this + 0x118 ) | 1L << ( (byte)param_1 & 0x3f );
   *(ulong*)( this + 0x120 ) = *(ulong*)( this + 0x120 ) | 1L << ( ( byte )(param_1 >> 9) & 0x3f );
   if (*(int*)( this + 0x144 ) != -1) {
      *(char*)( *(long*)( *(long*)( this + 0xa0 ) + 0x70 ) + ( ulong ) * (uint*)( *(long*)( this + 0xa0 ) + 0x5c ) * 0x14 + 0xf ) = (char)*(int*)( this + 0x144 );
   }

   lVar10 = *(long*)( this + 0xa0 );
   lVar1 = *(long*)( lVar10 + 0x70 ) + ( ulong ) * (uint*)( lVar10 + 0x5c ) * 0x14;
   uVar6 = *(ushort*)( lVar1 + 0xc );
   uVar4 = uVar6 | 0x10;
   if (param_3) {
      uVar4 = uVar6 & 0xffbf | 0x30;
   }

   uVar6 = -(ushort)param_4 & 0x40;
   if (this[0x13c] == (hb_ot_apply_context_t)0x0) {
      uVar3 = uVar6 | uVar4 & 0x70 | (ushort)param_2;
      if (param_2 == 0) {
         uVar3 = uVar6 | uVar4;
      }

      *(ushort*)( lVar1 + 0xc ) = uVar3;
      return;
   }

   puVar2 = *(undefined8**)( this + 0xf8 );
   uVar6 = uVar6 | uVar4 & 0x70;
   puVar13 = (ushort*)( (long)puVar2 + ( (ulong)param_1 & 0xff ) * 2 + 0x18 );
   uVar4 = *puVar13;
   if (( uVar4 != 0xffff ) && ( (uint)(int)(short)uVar4 >> 3 == param_1 >> 8 )) {
      uVar6 = uVar6 | uVar4 & 7;
      goto LAB_0010a77a;
   }

   puVar5 = (undefined*)*puVar2;
   psVar12 = (short*)&_hb_NullPool;
   puVar11 = &_hb_NullPool;
   if (puVar5 != (undefined*)0x0) {
      puVar11 = puVar5;
   }

   psVar7 = (short*)&_hb_NullPool;
   if (3 < *(uint*)( puVar11 + 0x18 )) {
      psVar7 = *(short**)( puVar11 + 0x10 );
   }

   if (( *psVar7 == 0x100 ) && ( uVar4 = uVar4 != 0 )) {
      psVar12 = (short*)( (long)psVar7 + ( ulong )(ushort)(uVar4 << 8 | uVar4 >> 8) );
      sVar8 = *psVar12;
      if (sVar8 != 0x100) goto LAB_0010a7cf;
      LAB_0010a8c0:puVar14 = (ushort*)&_hb_NullPool;
      uVar9 = param_1 - ( ushort )(psVar12[1] << 8 | (ushort)psVar12[1] >> 8);
      if (uVar9 < ( ushort )(psVar12[2] << 8 | (ushort)psVar12[2] >> 8)) {
         puVar14 = (ushort*)( psVar12 + (ulong)uVar9 + 3 );
      }

      uVar4 = *puVar14 << 8 | *puVar14 >> 8;
      if (uVar4 == 2) goto LAB_0010a8a9;
      LAB_0010a8fc:if (uVar4 == 3) {
         psVar12 = (short*)&_hb_NullPool;
         if (( *psVar7 == 0x100 ) && ( uVar4 = uVar4 != 0 )) {
            psVar12 = (short*)( (long)psVar7 + ( ulong )(ushort)(uVar4 << 8 | uVar4 >> 8) );
         }

         if (*psVar12 == 0x100) {
            puVar13 = (ushort*)&_hb_NullPool;
            uVar9 = param_1 - ( ushort )(psVar12[1] << 8 | (ushort)psVar12[1] >> 8);
            if (uVar9 < ( ushort )(psVar12[2] << 8 | (ushort)psVar12[2] >> 8)) {
               puVar13 = (ushort*)( psVar12 + (ulong)uVar9 + 3 );
            }

            uVar4 = *puVar13 & 0xff00 | 8;
         }
 else if (*psVar12 == 0x200) {
            puVar13 = (ushort*)&_hb_Null_OT_RangeRecord;
            uVar4 = psVar12[1] << 8 | (ushort)psVar12[1] >> 8;
            iVar15 = uVar4 - 1;
            if (uVar4 != 0) {
               iVar16 = 0;
               do {
                  uVar9 = ( uint )(iVar16 + iVar15) >> 1;
                  puVar13 = (ushort*)( psVar12 + (ulong)uVar9 * 3 + 2 );
                  if (param_1 < ( ushort )(*puVar13 << 8 | *puVar13 >> 8)) {
                     iVar15 = uVar9 - 1;
                  }
 else {
                     if (param_1 <= ( ushort )(puVar13[1] << 8 | puVar13[1] >> 8)) goto LAB_0010aa5f;
                     iVar16 = uVar9 + 1;
                  }

               }
 while ( iVar16 <= iVar15 );
               puVar13 = (ushort*)&_hb_Null_OT_RangeRecord;
            }

            LAB_0010aa5f:uVar4 = puVar13[2] & 0xff00 | 8;
         }
 else {
            uVar4 = 8;
         }

         lVar10 = *(long*)( this + 0xa0 );
         uVar6 = uVar6 | uVar4;
         goto LAB_0010a77a;
      }

      puVar5 = (undefined*)*puVar2;
      if (uVar4 != 1) goto LAB_0010a7d6;
      uVar6 = uVar6 | 2;
      uVar4 = 2;
   }
 else {
      sVar8 = __hb_NullPool;
      if (__hb_NullPool == 0x100) goto LAB_0010a8c0;
      LAB_0010a7cf:if (sVar8 == 0x200) {
         puVar14 = (ushort*)&_hb_Null_OT_RangeRecord;
         uVar4 = psVar12[1] << 8 | (ushort)psVar12[1] >> 8;
         iVar15 = uVar4 - 1;
         if (uVar4 != 0) {
            iVar16 = 0;
            do {
               while (true) {
                  uVar9 = ( uint )(iVar16 + iVar15) >> 1;
                  puVar14 = (ushort*)( psVar12 + (ulong)uVar9 * 3 + 2 );
                  if (param_1 < ( ushort )(*puVar14 << 8 | *puVar14 >> 8)) break;
                  if (param_1 <= ( ushort )(puVar14[1] << 8 | puVar14[1] >> 8)) goto LAB_0010a898;
                  iVar16 = uVar9 + 1;
                  if (iVar15 < iVar16) goto LAB_0010a891;
               }
;
               iVar15 = uVar9 - 1;
            }
 while ( iVar16 <= iVar15 );
            LAB_0010a891:puVar14 = (ushort*)&_hb_Null_OT_RangeRecord;
         }

         LAB_0010a898:uVar4 = puVar14[2] << 8 | puVar14[2] >> 8;
         if (uVar4 != 2) goto LAB_0010a8fc;
         LAB_0010a8a9:puVar5 = (undefined*)*puVar2;
         uVar6 = uVar6 | 4;
         uVar4 = 4;
      }
 else {
         LAB_0010a7d6:uVar4 = 0;
      }

   }

   if (( puVar5 != (undefined*)0x0 ) && ( param_1 >> 0x15 == 0 )) {
      *puVar13 = ( ushort )(( param_1 >> 8 ) << 3) | uVar4;
   }

   lVar10 = *(long*)( this + 0xa0 );
   LAB_0010a77a:*(ushort*)( *(long*)( lVar10 + 0x70 ) + ( ulong ) * (uint*)( lVar10 + 0x5c ) * 0x14 + 0xc ) = uVar6;
   return;
}
/* bool 
   OT::hb_accelerate_subtables_context_t::apply_to<OT::Layout::GSUB_impl::SingleSubstFormat1_3<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*) */bool OT::hb_accelerate_subtables_context_t::apply_to<OT::Layout::GSUB_impl::SingleSubstFormat1_3<OT::Layout::SmallTypes>>(void *param_1, hb_ot_apply_context_t *param_2) {
   uint *puVar1;
   ushort uVar2;
   uint uVar3;
   long lVar4;
   undefined8 *puVar5;
   hb_buffer_t *this;
   undefined8 uVar6;
   bool bVar7;
   char cVar8;
   int iVar9;
   undefined8 *puVar10;
   Coverage *this_00;
   uint uVar11;
   lVar4 = *(long*)( param_2 + 0xa0 );
   uVar11 = *(uint*)( *(long*)( lVar4 + 0x70 ) + ( ulong ) * (uint*)( lVar4 + 0x5c ) * 0x14 );
   uVar2 = *(ushort*)( (long)param_1 + 2 );
   this_00 = (Coverage*)&_hb_NullPool;
   if (uVar2 != 0) {
      this_00 = (Coverage*)( (long)param_1 + ( ulong )(ushort)(uVar2 << 8 | uVar2 >> 8) );
   }

   iVar9 = Layout::Common::Coverage::get_coverage(this_00, uVar11);
   bVar7 = false;
   if (iVar9 != -1) {
      uVar11 = uVar11 + ( ushort )(*(ushort*)( (long)param_1 + 4 ) << 8 | *(ushort*)( (long)param_1 + 4 ) >> 8) & 0xffff;
      if (*(long*)( lVar4 + 0xd0 ) != 0) {
         hb_buffer_t::sync_so_far();
         hb_buffer_t::message(*(hb_buffer_t**)( param_2 + 0xa0 ), *(hb_font_t**)( param_2 + 0x90 ), "replacing glyph at %u (single substitution)");
      }

      hb_ot_apply_context_t::_set_glyph_class(param_2, uVar11, 0, false, false);
      lVar4 = *(long*)( param_2 + 0xa0 );
      cVar8 = hb_buffer_t::make_room_for((uint)lVar4, 1);
      if (cVar8 != '\0') {
         puVar5 = *(undefined8**)( lVar4 + 0x78 );
         uVar3 = *(uint*)( lVar4 + 100 );
         if (*(uint*)( lVar4 + 0x5c ) < *(uint*)( lVar4 + 0x60 )) {
            puVar10 = (undefined8*)( *(long*)( lVar4 + 0x70 ) + ( ulong ) * (uint*)( lVar4 + 0x5c ) * 0x14 );
         }
 else {
            puVar10 = puVar5;
            if (uVar3 != 0) {
               puVar10 = (undefined8*)( (long)puVar5 + ( ulong )(uVar3 - 1) * 0x14 );
            }

         }

         uVar6 = puVar10[1];
         puVar1 = (uint*)( (long)puVar5 + (ulong)uVar3 * 0x14 );
         *(undefined8*)puVar1 = *puVar10;
         *(undefined8*)( puVar1 + 2 ) = uVar6;
         uVar3 = *(uint*)( puVar10 + 2 );
         *puVar1 = uVar11;
         puVar1[4] = uVar3;
         *(int*)( lVar4 + 0x5c ) = *(int*)( lVar4 + 0x5c ) + 1;
         *(int*)( lVar4 + 100 ) = *(int*)( lVar4 + 100 ) + 1;
      }

      this * (hb_buffer_t**)( param_2 + 0xa0 );
      if (*(long*)( this + 0xd0 ) != 0) {
         hb_buffer_t::message(this, *(hb_font_t**)( param_2 + 0x90 ), "replaced glyph at %u (single substitution)", ( ulong )(*(int*)( this + 0x5c ) - 1));
      }

      bVar7 = true;
   }

   return bVar7;
}
/* bool 
   OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::Layout::GSUB_impl::SingleSubstFormat1_3<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*) */bool OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::Layout::GSUB_impl::SingleSubstFormat1_3<OT::Layout::SmallTypes>>(void *param_1, hb_ot_apply_context_t *param_2) {
   uint *puVar1;
   ushort uVar2;
   uint uVar3;
   long lVar4;
   undefined8 *puVar5;
   hb_buffer_t *this;
   undefined8 uVar6;
   bool bVar7;
   char cVar8;
   int iVar9;
   undefined8 *puVar10;
   Coverage *this_00;
   uint uVar11;
   lVar4 = *(long*)( param_2 + 0xa0 );
   uVar11 = *(uint*)( *(long*)( lVar4 + 0x70 ) + ( ulong ) * (uint*)( lVar4 + 0x5c ) * 0x14 );
   uVar2 = *(ushort*)( (long)param_1 + 2 );
   this_00 = (Coverage*)&_hb_NullPool;
   if (uVar2 != 0) {
      this_00 = (Coverage*)( (long)param_1 + ( ulong )(ushort)(uVar2 << 8 | uVar2 >> 8) );
   }

   iVar9 = Layout::Common::Coverage::get_coverage(this_00, uVar11);
   bVar7 = false;
   if (iVar9 != -1) {
      uVar11 = uVar11 + ( ushort )(*(ushort*)( (long)param_1 + 4 ) << 8 | *(ushort*)( (long)param_1 + 4 ) >> 8) & 0xffff;
      if (*(long*)( lVar4 + 0xd0 ) != 0) {
         hb_buffer_t::sync_so_far();
         hb_buffer_t::message(*(hb_buffer_t**)( param_2 + 0xa0 ), *(hb_font_t**)( param_2 + 0x90 ), "replacing glyph at %u (single substitution)");
      }

      hb_ot_apply_context_t::_set_glyph_class(param_2, uVar11, 0, false, false);
      lVar4 = *(long*)( param_2 + 0xa0 );
      cVar8 = hb_buffer_t::make_room_for((uint)lVar4, 1);
      if (cVar8 != '\0') {
         puVar5 = *(undefined8**)( lVar4 + 0x78 );
         uVar3 = *(uint*)( lVar4 + 100 );
         if (*(uint*)( lVar4 + 0x5c ) < *(uint*)( lVar4 + 0x60 )) {
            puVar10 = (undefined8*)( *(long*)( lVar4 + 0x70 ) + ( ulong ) * (uint*)( lVar4 + 0x5c ) * 0x14 );
         }
 else {
            puVar10 = puVar5;
            if (uVar3 != 0) {
               puVar10 = (undefined8*)( (long)puVar5 + ( ulong )(uVar3 - 1) * 0x14 );
            }

         }

         uVar6 = puVar10[1];
         puVar1 = (uint*)( (long)puVar5 + (ulong)uVar3 * 0x14 );
         *(undefined8*)puVar1 = *puVar10;
         *(undefined8*)( puVar1 + 2 ) = uVar6;
         uVar3 = *(uint*)( puVar10 + 2 );
         *puVar1 = uVar11;
         puVar1[4] = uVar3;
         *(int*)( lVar4 + 0x5c ) = *(int*)( lVar4 + 0x5c ) + 1;
         *(int*)( lVar4 + 100 ) = *(int*)( lVar4 + 100 ) + 1;
      }

      this * (hb_buffer_t**)( param_2 + 0xa0 );
      if (*(long*)( this + 0xd0 ) != 0) {
         hb_buffer_t::message(this, *(hb_font_t**)( param_2 + 0x90 ), "replaced glyph at %u (single substitution)", ( ulong )(*(int*)( this + 0x5c ) - 1));
      }

      bVar7 = true;
   }

   return bVar7;
}
/* bool 
   OT::hb_accelerate_subtables_context_t::apply_to<OT::Layout::GSUB_impl::SingleSubstFormat2_4<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*) */bool OT::hb_accelerate_subtables_context_t::apply_to<OT::Layout::GSUB_impl::SingleSubstFormat2_4<OT::Layout::SmallTypes>>(void *param_1, hb_ot_apply_context_t *param_2) {
   uint *puVar1;
   long lVar2;
   undefined8 *puVar3;
   hb_buffer_t *this;
   undefined8 uVar4;
   char cVar5;
   uint uVar6;
   ushort *puVar7;
   undefined8 *puVar8;
   Coverage *this_00;
   ushort uVar9;
   uVar9 = *(ushort*)( (long)param_1 + 2 );
   this_00 = (Coverage*)&_hb_NullPool;
   if (uVar9 != 0) {
      this_00 = (Coverage*)( (long)param_1 + ( ulong )(ushort)(uVar9 << 8 | uVar9 >> 8) );
   }

   lVar2 = *(long*)( param_2 + 0xa0 );
   uVar6 = Layout::Common::Coverage::get_coverage(this_00, *(uint*)( *(long*)( lVar2 + 0x70 ) + ( ulong ) * (uint*)( lVar2 + 0x5c ) * 0x14 ));
   if (uVar6 == 0xffffffff) {
      return false;
   }

   if (( ushort )(*(ushort*)( (long)param_1 + 4 ) << 8 | *(ushort*)( (long)param_1 + 4 ) >> 8) <= uVar6) {
      return false;
   }

   if (*(long*)( lVar2 + 0xd0 ) != 0) {
      hb_buffer_t::sync_so_far();
      hb_buffer_t::message(*(hb_buffer_t**)( param_2 + 0xa0 ), *(hb_font_t**)( param_2 + 0x90 ), "replacing glyph at %u (single substitution)");
      if (( ushort )(*(ushort*)( (long)param_1 + 4 ) << 8 | *(ushort*)( (long)param_1 + 4 ) >> 8) <= uVar6) {
         puVar7 = (ushort*)&_hb_NullPool;
         goto LAB_0010ae6b;
      }

   }

   puVar7 = (ushort*)( (long)param_1 + (ulong)uVar6 * 2 + 6 );
   LAB_0010ae6b:uVar9 = *puVar7 << 8 | *puVar7 >> 8;
   hb_ot_apply_context_t::_set_glyph_class(param_2, (uint)uVar9, 0, false, false);
   lVar2 = *(long*)( param_2 + 0xa0 );
   cVar5 = hb_buffer_t::make_room_for((uint)lVar2, 1);
   if (cVar5 != '\0') {
      puVar3 = *(undefined8**)( lVar2 + 0x78 );
      uVar6 = *(uint*)( lVar2 + 100 );
      if (*(uint*)( lVar2 + 0x5c ) < *(uint*)( lVar2 + 0x60 )) {
         puVar8 = (undefined8*)( *(long*)( lVar2 + 0x70 ) + ( ulong ) * (uint*)( lVar2 + 0x5c ) * 0x14 );
      }
 else {
         puVar8 = puVar3;
         if (uVar6 != 0) {
            puVar8 = (undefined8*)( (long)puVar3 + ( ulong )(uVar6 - 1) * 0x14 );
         }

      }

      uVar4 = puVar8[1];
      puVar1 = (uint*)( (long)puVar3 + (ulong)uVar6 * 0x14 );
      *(undefined8*)puVar1 = *puVar8;
      *(undefined8*)( puVar1 + 2 ) = uVar4;
      uVar6 = *(uint*)( puVar8 + 2 );
      *puVar1 = (uint)uVar9;
      puVar1[4] = uVar6;
      *(int*)( lVar2 + 0x5c ) = *(int*)( lVar2 + 0x5c ) + 1;
      *(int*)( lVar2 + 100 ) = *(int*)( lVar2 + 100 ) + 1;
   }

   this * (hb_buffer_t**)( param_2 + 0xa0 );
   if (*(long*)( this + 0xd0 ) != 0) {
      hb_buffer_t::message(this, *(hb_font_t**)( param_2 + 0x90 ), "replaced glyph at %u (single substitution)", ( ulong )(*(int*)( this + 0x5c ) - 1));
   }

   return true;
}
/* bool 
   OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::Layout::GSUB_impl::SingleSubstFormat2_4<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*) */bool OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::Layout::GSUB_impl::SingleSubstFormat2_4<OT::Layout::SmallTypes>>(void *param_1, hb_ot_apply_context_t *param_2) {
   uint *puVar1;
   long lVar2;
   undefined8 *puVar3;
   hb_buffer_t *this;
   undefined8 uVar4;
   char cVar5;
   uint uVar6;
   ushort *puVar7;
   undefined8 *puVar8;
   Coverage *this_00;
   ushort uVar9;
   uVar9 = *(ushort*)( (long)param_1 + 2 );
   this_00 = (Coverage*)&_hb_NullPool;
   if (uVar9 != 0) {
      this_00 = (Coverage*)( (long)param_1 + ( ulong )(ushort)(uVar9 << 8 | uVar9 >> 8) );
   }

   lVar2 = *(long*)( param_2 + 0xa0 );
   uVar6 = Layout::Common::Coverage::get_coverage(this_00, *(uint*)( *(long*)( lVar2 + 0x70 ) + ( ulong ) * (uint*)( lVar2 + 0x5c ) * 0x14 ));
   if (uVar6 == 0xffffffff) {
      return false;
   }

   if (( ushort )(*(ushort*)( (long)param_1 + 4 ) << 8 | *(ushort*)( (long)param_1 + 4 ) >> 8) <= uVar6) {
      return false;
   }

   if (*(long*)( lVar2 + 0xd0 ) != 0) {
      hb_buffer_t::sync_so_far();
      hb_buffer_t::message(*(hb_buffer_t**)( param_2 + 0xa0 ), *(hb_font_t**)( param_2 + 0x90 ), "replacing glyph at %u (single substitution)");
      if (( ushort )(*(ushort*)( (long)param_1 + 4 ) << 8 | *(ushort*)( (long)param_1 + 4 ) >> 8) <= uVar6) {
         puVar7 = (ushort*)&_hb_NullPool;
         goto LAB_0010b00b;
      }

   }

   puVar7 = (ushort*)( (long)param_1 + (ulong)uVar6 * 2 + 6 );
   LAB_0010b00b:uVar9 = *puVar7 << 8 | *puVar7 >> 8;
   hb_ot_apply_context_t::_set_glyph_class(param_2, (uint)uVar9, 0, false, false);
   lVar2 = *(long*)( param_2 + 0xa0 );
   cVar5 = hb_buffer_t::make_room_for((uint)lVar2, 1);
   if (cVar5 != '\0') {
      puVar3 = *(undefined8**)( lVar2 + 0x78 );
      uVar6 = *(uint*)( lVar2 + 100 );
      if (*(uint*)( lVar2 + 0x5c ) < *(uint*)( lVar2 + 0x60 )) {
         puVar8 = (undefined8*)( *(long*)( lVar2 + 0x70 ) + ( ulong ) * (uint*)( lVar2 + 0x5c ) * 0x14 );
      }
 else {
         puVar8 = puVar3;
         if (uVar6 != 0) {
            puVar8 = (undefined8*)( (long)puVar3 + ( ulong )(uVar6 - 1) * 0x14 );
         }

      }

      uVar4 = puVar8[1];
      puVar1 = (uint*)( (long)puVar3 + (ulong)uVar6 * 0x14 );
      *(undefined8*)puVar1 = *puVar8;
      *(undefined8*)( puVar1 + 2 ) = uVar4;
      uVar6 = *(uint*)( puVar8 + 2 );
      *puVar1 = (uint)uVar9;
      puVar1[4] = uVar6;
      *(int*)( lVar2 + 0x5c ) = *(int*)( lVar2 + 0x5c ) + 1;
      *(int*)( lVar2 + 100 ) = *(int*)( lVar2 + 100 ) + 1;
   }

   this * (hb_buffer_t**)( param_2 + 0xa0 );
   if (*(long*)( this + 0xd0 ) != 0) {
      hb_buffer_t::message(this, *(hb_font_t**)( param_2 + 0x90 ), "replaced glyph at %u (single substitution)", ( ulong )(*(int*)( this + 0x5c ) - 1));
   }

   return true;
}
/* bool 
   OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::Layout::GSUB_impl::AlternateSubstFormat1_2<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*) */bool OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::Layout::GSUB_impl::AlternateSubstFormat1_2<OT::Layout::SmallTypes>>(void *param_1, hb_ot_apply_context_t *param_2) {
   uint *puVar1;
   hb_buffer_t *phVar2;
   long lVar3;
   undefined8 *puVar4;
   byte bVar5;
   undefined8 uVar6;
   char cVar7;
   uint uVar8;
   ushort *puVar9;
   undefined8 *puVar10;
   uint uVar11;
   ulong uVar12;
   Coverage *this;
   ushort uVar13;
   uVar13 = *(ushort*)( (long)param_1 + 2 );
   this(Coverage * ) & _hb_NullPool;
   if (uVar13 != 0) {
      this(Coverage * )((long)param_1 + ( ulong )(ushort)(uVar13 << 8 | uVar13 >> 8));
   }

   uVar8 = Layout::Common::Coverage::get_coverage(this, *(uint*)( *(long*)( *(long*)( param_2 + 0xa0 ) + 0x70 ) + ( ulong ) * (uint*)( *(long*)( param_2 + 0xa0 ) + 0x5c ) * 0x14 ));
   if (uVar8 == 0xffffffff) {
      return false;
   }

   puVar9 = (ushort*)&_hb_NullPool;
   if (uVar8 < ( ushort )(*(ushort*)( (long)param_1 + 4 ) << 8 | *(ushort*)( (long)param_1 + 4 ) >> 8)) {
      puVar9 = (ushort*)( (long)param_1 + (ulong)uVar8 * 2 + 6 );
   }

   uVar13 = *puVar9;
   puVar9 = (ushort*)&_hb_NullPool;
   if (uVar13 != 0) {
      puVar9 = (ushort*)( (long)param_1 + ( ulong )(ushort)(uVar13 << 8 | uVar13 >> 8) );
   }

   uVar13 = *puVar9 << 8 | *puVar9 >> 8;
   if (uVar13 == 0) {
      return false;
   }

   phVar2 = *(hb_buffer_t**)( param_2 + 0xa0 );
   uVar8 = *(uint*)( param_2 + 300 );
   if (uVar8 == 0) {
      return false;
   }

   uVar11 = *(uint*)( *(long*)( phVar2 + 0x70 ) + ( ulong ) * (uint*)( phVar2 + 0x5c ) * 0x14 + 4 ) & uVar8;
   bVar5 = 0;
   for (; ( uVar8 & 1 ) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      bVar5 = bVar5 + 1;
   }

   uVar11 = uVar11 >> ( bVar5 & 0x1f );
   if (uVar11 == 0xff) {
      uVar12 = 0xfe;
      if (param_2[0x140] != (hb_ot_apply_context_t)0x0) {
         hb_buffer_t::_set_glyph_flags(phVar2, 3, 0, *(uint*)( phVar2 + 0x60 ), true, false);
         uVar8 = ( uint )(*(int*)( phVar2 + 0xbc ) * 0xbc8f) % 0x7fffffff;
         *(uint*)( phVar2 + 0xbc ) = uVar8;
         uVar12 = (ulong)uVar8 % (ulong)(uint)uVar13;
      }

   }
 else {
      uVar12 = ( ulong )(uVar11 - 1);
   }

   if ((uint)uVar13 <= (uint)uVar12) {
      return false;
   }

   if (*(long*)( phVar2 + 0xd0 ) != 0) {
      hb_buffer_t::sync_so_far();
      hb_buffer_t::message(*(hb_buffer_t**)( param_2 + 0xa0 ), *(hb_font_t**)( param_2 + 0x90 ), "replacing glyph at %u (alternate substitution)");
      if (( uint )(ushort)(*puVar9 << 8 | *puVar9 >> 8) <= (uint)uVar12) {
         puVar9 = (ushort*)&_hb_NullPool;
         goto LAB_0010b283;
      }

   }

   puVar9 = puVar9 + uVar12 + 1;
   LAB_0010b283:uVar13 = *puVar9 << 8 | *puVar9 >> 8;
   hb_ot_apply_context_t::_set_glyph_class(param_2, (uint)uVar13, 0, false, false);
   lVar3 = *(long*)( param_2 + 0xa0 );
   cVar7 = hb_buffer_t::make_room_for((uint)lVar3, 1);
   if (cVar7 != '\0') {
      puVar4 = *(undefined8**)( lVar3 + 0x78 );
      uVar8 = *(uint*)( lVar3 + 100 );
      if (*(uint*)( lVar3 + 0x5c ) < *(uint*)( lVar3 + 0x60 )) {
         puVar10 = (undefined8*)( *(long*)( lVar3 + 0x70 ) + ( ulong ) * (uint*)( lVar3 + 0x5c ) * 0x14 );
      }
 else {
         puVar10 = puVar4;
         if (uVar8 != 0) {
            puVar10 = (undefined8*)( (long)puVar4 + ( ulong )(uVar8 - 1) * 0x14 );
         }

      }

      uVar6 = puVar10[1];
      puVar1 = (uint*)( (long)puVar4 + (ulong)uVar8 * 0x14 );
      *(undefined8*)puVar1 = *puVar10;
      *(undefined8*)( puVar1 + 2 ) = uVar6;
      uVar8 = *(uint*)( puVar10 + 2 );
      *puVar1 = (uint)uVar13;
      puVar1[4] = uVar8;
      *(int*)( lVar3 + 0x5c ) = *(int*)( lVar3 + 0x5c ) + 1;
      *(int*)( lVar3 + 100 ) = *(int*)( lVar3 + 100 ) + 1;
   }

   phVar2 = *(hb_buffer_t**)( param_2 + 0xa0 );
   if (*(long*)( phVar2 + 0xd0 ) != 0) {
      hb_buffer_t::message(phVar2, *(hb_font_t**)( param_2 + 0x90 ), "replaced glyph at %u (alternate substitution)", ( ulong )(*(int*)( phVar2 + 0x5c ) - 1));
   }

   return true;
}
/* bool 
   OT::hb_accelerate_subtables_context_t::apply_to<OT::Layout::GSUB_impl::AlternateSubstFormat1_2<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*) */bool OT::hb_accelerate_subtables_context_t::apply_to<OT::Layout::GSUB_impl::AlternateSubstFormat1_2<OT::Layout::SmallTypes>>(void *param_1, hb_ot_apply_context_t *param_2) {
   uint *puVar1;
   hb_buffer_t *phVar2;
   long lVar3;
   undefined8 *puVar4;
   byte bVar5;
   undefined8 uVar6;
   char cVar7;
   uint uVar8;
   ushort *puVar9;
   undefined8 *puVar10;
   uint uVar11;
   ulong uVar12;
   Coverage *this;
   ushort uVar13;
   uVar13 = *(ushort*)( (long)param_1 + 2 );
   this(Coverage * ) & _hb_NullPool;
   if (uVar13 != 0) {
      this(Coverage * )((long)param_1 + ( ulong )(ushort)(uVar13 << 8 | uVar13 >> 8));
   }

   uVar8 = Layout::Common::Coverage::get_coverage(this, *(uint*)( *(long*)( *(long*)( param_2 + 0xa0 ) + 0x70 ) + ( ulong ) * (uint*)( *(long*)( param_2 + 0xa0 ) + 0x5c ) * 0x14 ));
   if (uVar8 == 0xffffffff) {
      return false;
   }

   puVar9 = (ushort*)&_hb_NullPool;
   if (uVar8 < ( ushort )(*(ushort*)( (long)param_1 + 4 ) << 8 | *(ushort*)( (long)param_1 + 4 ) >> 8)) {
      puVar9 = (ushort*)( (long)param_1 + (ulong)uVar8 * 2 + 6 );
   }

   uVar13 = *puVar9;
   puVar9 = (ushort*)&_hb_NullPool;
   if (uVar13 != 0) {
      puVar9 = (ushort*)( (long)param_1 + ( ulong )(ushort)(uVar13 << 8 | uVar13 >> 8) );
   }

   uVar13 = *puVar9 << 8 | *puVar9 >> 8;
   if (uVar13 == 0) {
      return false;
   }

   phVar2 = *(hb_buffer_t**)( param_2 + 0xa0 );
   uVar8 = *(uint*)( param_2 + 300 );
   if (uVar8 == 0) {
      return false;
   }

   uVar11 = *(uint*)( *(long*)( phVar2 + 0x70 ) + ( ulong ) * (uint*)( phVar2 + 0x5c ) * 0x14 + 4 ) & uVar8;
   bVar5 = 0;
   for (; ( uVar8 & 1 ) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      bVar5 = bVar5 + 1;
   }

   uVar11 = uVar11 >> ( bVar5 & 0x1f );
   if (uVar11 == 0xff) {
      uVar12 = 0xfe;
      if (param_2[0x140] != (hb_ot_apply_context_t)0x0) {
         hb_buffer_t::_set_glyph_flags(phVar2, 3, 0, *(uint*)( phVar2 + 0x60 ), true, false);
         uVar8 = ( uint )(*(int*)( phVar2 + 0xbc ) * 0xbc8f) % 0x7fffffff;
         *(uint*)( phVar2 + 0xbc ) = uVar8;
         uVar12 = (ulong)uVar8 % (ulong)(uint)uVar13;
      }

   }
 else {
      uVar12 = ( ulong )(uVar11 - 1);
   }

   if ((uint)uVar13 <= (uint)uVar12) {
      return false;
   }

   if (*(long*)( phVar2 + 0xd0 ) != 0) {
      hb_buffer_t::sync_so_far();
      hb_buffer_t::message(*(hb_buffer_t**)( param_2 + 0xa0 ), *(hb_font_t**)( param_2 + 0x90 ), "replacing glyph at %u (alternate substitution)");
      if (( uint )(ushort)(*puVar9 << 8 | *puVar9 >> 8) <= (uint)uVar12) {
         puVar9 = (ushort*)&_hb_NullPool;
         goto LAB_0010b513;
      }

   }

   puVar9 = puVar9 + uVar12 + 1;
   LAB_0010b513:uVar13 = *puVar9 << 8 | *puVar9 >> 8;
   hb_ot_apply_context_t::_set_glyph_class(param_2, (uint)uVar13, 0, false, false);
   lVar3 = *(long*)( param_2 + 0xa0 );
   cVar7 = hb_buffer_t::make_room_for((uint)lVar3, 1);
   if (cVar7 != '\0') {
      puVar4 = *(undefined8**)( lVar3 + 0x78 );
      uVar8 = *(uint*)( lVar3 + 100 );
      if (*(uint*)( lVar3 + 0x5c ) < *(uint*)( lVar3 + 0x60 )) {
         puVar10 = (undefined8*)( *(long*)( lVar3 + 0x70 ) + ( ulong ) * (uint*)( lVar3 + 0x5c ) * 0x14 );
      }
 else {
         puVar10 = puVar4;
         if (uVar8 != 0) {
            puVar10 = (undefined8*)( (long)puVar4 + ( ulong )(uVar8 - 1) * 0x14 );
         }

      }

      uVar6 = puVar10[1];
      puVar1 = (uint*)( (long)puVar4 + (ulong)uVar8 * 0x14 );
      *(undefined8*)puVar1 = *puVar10;
      *(undefined8*)( puVar1 + 2 ) = uVar6;
      uVar8 = *(uint*)( puVar10 + 2 );
      *puVar1 = (uint)uVar13;
      puVar1[4] = uVar8;
      *(int*)( lVar3 + 0x5c ) = *(int*)( lVar3 + 0x5c ) + 1;
      *(int*)( lVar3 + 100 ) = *(int*)( lVar3 + 100 ) + 1;
   }

   phVar2 = *(hb_buffer_t**)( param_2 + 0xa0 );
   if (*(long*)( phVar2 + 0xd0 ) != 0) {
      hb_buffer_t::message(phVar2, *(hb_font_t**)( param_2 + 0x90 ), "replaced glyph at %u (alternate substitution)", ( ulong )(*(int*)( phVar2 + 0x5c ) - 1));
   }

   return true;
}
/* OT::ContextFormat3::apply(OT::hb_ot_apply_context_t*) const */undefined8 OT::ContextFormat3::apply(ContextFormat3 *this, hb_ot_apply_context_t *param_1) {
   uint *puVar1;
   byte bVar2;
   ushort uVar3;
   long lVar4;
   byte bVar5;
   bool bVar6;
   char cVar7;
   int iVar8;
   ulong uVar9;
   uint *__ptr;
   ushort uVar10;
   short sVar11;
   ulong uVar12;
   byte bVar13;
   uint uVar14;
   ushort *puVar15;
   ushort uVar16;
   hb_ot_apply_context_t hVar17;
   ContextFormat3 *this_00;
   byte bVar18;
   uint uVar19;
   hb_buffer_t *phVar20;
   uint *puVar21;
   undefined8 uVar22;
   long in_FS_OFFSET;
   uint local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = *(ushort*)( this + 6 );
   this_00 = (ContextFormat3*)&_hb_NullPool;
   if (uVar3 != 0) {
      this_00 = this + ( ushort )(uVar3 << 8 | uVar3 >> 8);
   }

   phVar20 = *(hb_buffer_t**)( param_1 + 0xa0 );
   uVar22 = 0;
   uVar14 = *(uint*)( phVar20 + 0x5c );
   puVar21 = (uint*)( *(long*)( phVar20 + 0x70 ) + (ulong)uVar14 * 0x14 );
   iVar8 = Layout::Common::Coverage::get_coverage((Coverage*)this_00, *puVar21);
   if (iVar8 == -1) goto LAB_0010b717;
   uVar3 = *(ushort*)( this + 4 );
   uVar10 = *(ushort*)( this + 2 ) << 8 | *(ushort*)( this + 2 ) >> 8;
   if (( 0x40 < uVar10 ) || ( ( __ptr = local_58 ),4 < uVar10 && ( __ptr = (uint*)malloc((ulong)uVar10 * 4) ),__ptr == (uint*)0x0 )) {
      uVar22 = 0;
      goto LAB_0010b717;
   }

   *(uint*)( param_1 + 8 ) = uVar14;
   hVar17 = (hb_ot_apply_context_t)0x0;
   lVar4 = *(long*)( *(long*)( param_1 + 0x10 ) + 0xa0 );
   iVar8 = *(int*)( lVar4 + 0x60 );
   *(int*)( param_1 + 0x40 ) = iVar8;
   if (*(uint*)( lVar4 + 0x5c ) == uVar14) {
      hVar17 = *(hb_ot_apply_context_t*)( *(long*)( lVar4 + 0x70 ) + (ulong)uVar14 * 0x14 + 0xf );
   }

   *(ContextFormat3**)( param_1 + 0x38 ) = this + 8;
   if (param_1[0x23] == (hb_ot_apply_context_t)0x0) {
      hVar17 = (hb_ot_apply_context_t)0x0;
   }

   *(ContextFormat3**)( param_1 + 0x30 ) = this;
   param_1[0x24] = hVar17;
   *(code**)( param_1 + 0x28 ) = match_coverage;
   bVar2 = *(byte*)( (long)puVar21 + 0xe );
   bVar18 = bVar2 >> 5;
   bVar13 = 0;
   if (( bVar2 & 0x10 ) == 0) {
      bVar13 = bVar2 & 0xf;
   }

   uVar19 = uVar14;
   if (1 < uVar10) {
      puVar21 = __ptr + 1;
      bVar6 = false;
      uVar9 = (ulong)uVar14;
      LAB_0010b829:LAB_0010b835:while (true) {
         do {
            if (iVar8 + -1 <= (int)uVar9) {
               uVar14 = *(uint*)( param_1 + 0x40 );
               goto LAB_0010b99d;
            }

            uVar14 = (int)uVar9 + 1;
            uVar9 = (ulong)uVar14;
            *(uint*)( param_1 + 8 ) = uVar14;
            puVar1 = (uint*)( *(long*)( *(long*)( *(long*)( param_1 + 0x10 ) + 0xa0 ) + 0x70 ) + uVar9 * 0x14 );
            uVar16 = (ushort)puVar1[3];
         }
 while ( ( *(uint*)( param_1 + 0x18 ) & (uint)uVar16 & 0xe ) != 0 );
         if (( ( uVar16 & 8 ) == 0 ) || ( cVar7 = hb_ot_apply_context_t::match_properties_mark(*(hb_ot_apply_context_t**)( *(long*)( param_1 + 0x10 ) + 0xf8 ), *puVar1, (uint)uVar16, *(uint*)( param_1 + 0x18 )) ),cVar7 != '\0') break;
         LAB_0010ba96:uVar9 = ( ulong ) * (uint*)( param_1 + 8 );
      }
;
      uVar16 = (ushort)puVar1[4];
      sVar11 = 0;
      if (( ( uVar16 & 0x20 ) != 0 ) && ( ( puVar1[3] & 0x10 ) == 0 )) {
         if (param_1[0x20] == (hb_ot_apply_context_t)0x0) {
            if (( uVar16 & 0x1f ) == 1) {
               sVar11 = 0;
               if (( uVar16 & 0x200 ) != 0) goto LAB_0010b890;
               if (param_1[0x21] == (hb_ot_apply_context_t)0x0) goto LAB_0010bab3;
            }

         }
 else if (( param_1[0x21] == (hb_ot_apply_context_t)0x0 ) && ( ( uVar16 & 0x1f ) == 1 )) {
            LAB_0010bab3:sVar11 = 0;
            if (( uVar16 & 0x100 ) != 0) goto LAB_0010b890;
         }

         if (param_1[0x22] == (hb_ot_apply_context_t)0x0) {
            sVar11 = ( ( uVar16 >> 6 ^ 1 ) & 1 ) * 2;
         }
 else {
            sVar11 = 2;
         }

      }

      LAB_0010b890:puVar15 = *(ushort**)( param_1 + 0x38 );
      uVar16 = 0;
      if (puVar15 != (ushort*)0x0) {
         uVar16 = *puVar15 << 8 | *puVar15 >> 8;
      }

      if (( ( puVar1[1] & *(uint*)( param_1 + 0x1c ) ) != 0 ) && ( ( param_1[0x24] == (hb_ot_apply_context_t)0x0 || ( param_1[0x24] == *(hb_ot_apply_context_t*)( (long)puVar1 + 0xf ) ) ) )) {
         if (*(code**)( param_1 + 0x28 ) == (code*)0x0) {
            if (sVar11 != 0) goto LAB_0010ba96;
            goto LAB_0010b901;
         }

         cVar7 = ( **(code**)( param_1 + 0x28 ) )(puVar1, uVar16, *(undefined8*)( param_1 + 0x30 ));
         if (cVar7 != '\0') goto code_r0x0010b8f4;
      }

      uVar9 = ( ulong ) * (uint*)( param_1 + 8 );
      if (sVar11 == 0) {
         uVar14 = *(uint*)( param_1 + 8 ) + 1;
         goto LAB_0010b99d;
      }

      goto LAB_0010b835;
   }

   LAB_0010bc05:*__ptr = uVar14;
   hb_buffer_t::_set_glyph_flags(phVar20, 3, *(uint*)( phVar20 + 0x5c ), uVar19 + 1, true, false);
   uVar22 = 1;
   apply_lookup(param_1, (uint)uVar10, __ptr, ( uint )(ushort)(uVar3 << 8 | uVar3 >> 8), (LookupRecord*)( this + ( ulong )((uint)uVar10 * 2) + 6 ), uVar19 + 1);
   LAB_0010b9b1:if (__ptr != local_58) {
      free(__ptr);
   }

   LAB_0010b717:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar22;
   code_r0x0010b8f4:puVar15 = *(ushort**)( param_1 + 0x38 );
   LAB_0010b901:if (puVar15 != (ushort*)0x0) {
      *(ushort**)( param_1 + 0x38 ) = puVar15 + 1;
   }

   uVar9 = ( ulong ) * (uint*)( param_1 + 8 );
   lVar4 = *(long*)( phVar20 + 0x70 );
   *puVar21 = *(uint*)( param_1 + 8 );
   bVar2 = *(byte*)( lVar4 + uVar9 * 0x14 + 0xe );
   if (( bVar2 & 0x10 ) == 0) {
      bVar5 = bVar2 >> 5;
      if (bVar18 == 0 || bVar13 == 0) {
         if (( ( bVar2 & 0xf ) == 0 || bVar5 == 0 ) || ( bVar18 == bVar5 )) goto LAB_0010b968;
         goto LAB_0010ba45;
      }

      if (( bVar13 == ( bVar2 & 0xf ) ) && ( bVar18 == bVar5 )) goto LAB_0010b968;
   }
 else if (bVar18 == 0 || bVar13 == 0) goto LAB_0010b968;
   if (!bVar6) {
      uVar12 = ( ulong ) * (uint*)( phVar20 + 100 );
      do {
         if ((int)uVar12 == 0) goto LAB_0010ba45;
         uVar12 = ( ulong )((int)uVar12 - 1);
         puVar1 = (uint*)( *(long*)( phVar20 + 0x78 ) + uVar12 * 0x14 );
         bVar2 = *(byte*)( (long)puVar1 + 0xe );
         if (bVar18 != bVar2 >> 5) goto LAB_0010ba45;
      }
 while ( ( ( bVar2 & 0x10 ) == 0 ) && ( ( bVar2 & 0xf ) != 0 ) );
      uVar16 = (ushort)puVar1[3];
      if (( *(uint*)( param_1 + 0x18 ) & (uint)uVar16 & 0xe ) == 0) {
         if (( ( uVar16 & 8 ) == 0 ) || ( cVar7 = hb_ot_apply_context_t::match_properties_mark(*(hb_ot_apply_context_t**)( *(long*)( param_1 + 0x10 ) + 0xf8 ), *puVar1, (uint)uVar16, *(uint*)( param_1 + 0x18 )) ),cVar7 != '\0') {
            LAB_0010ba45:uVar14 = 0;
            LAB_0010b99d:phVar20 = *(hb_buffer_t**)( param_1 + 0xa0 );
            if (( (byte)phVar20[0x18] & 0x40 ) != 0) {
               hb_buffer_t::_set_glyph_flags(phVar20, 2, *(uint*)( phVar20 + 0x5c ), uVar14, false, false);
            }

            uVar22 = 0;
            goto LAB_0010b9b1;
         }

         bVar6 = true;
         uVar9 = ( ulong ) * (uint*)( param_1 + 8 );
         goto LAB_0010b968;
      }

   }

   bVar6 = true;
   LAB_0010b968:puVar21 = puVar21 + 1;
   if (__ptr + ( ulong )(uVar10 - 2) + 2 == puVar21) goto LAB_0010bbe3;
   iVar8 = *(int*)( param_1 + 0x40 );
   goto LAB_0010b829;
   LAB_0010bbe3:uVar14 = *(uint*)( phVar20 + 0x5c );
   phVar20 = *(hb_buffer_t**)( param_1 + 0xa0 );
   uVar19 = (uint)uVar9;
   goto LAB_0010bc05;
}
/* bool OT::hb_accelerate_subtables_context_t::apply_to<OT::ContextFormat3>(void const*,
   OT::hb_ot_apply_context_t*) */bool OT::hb_accelerate_subtables_context_t::apply_to<OT::ContextFormat3>(void *param_1, hb_ot_apply_context_t *param_2) {
   bool bVar1;
   bVar1 = (bool)ContextFormat3::apply((ContextFormat3*)param_1, param_2);
   return bVar1;
}
/* bool OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::ContextFormat3>(void const*,
   OT::hb_ot_apply_context_t*) */bool OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::ContextFormat3>(void *param_1, hb_ot_apply_context_t *param_2) {
   bool bVar1;
   bVar1 = (bool)ContextFormat3::apply((ContextFormat3*)param_1, param_2);
   return bVar1;
}
/* OT::ChainContextFormat3::apply(OT::hb_ot_apply_context_t*) const */undefined8 OT::ChainContextFormat3::apply(ChainContextFormat3 *this, hb_ot_apply_context_t *param_1) {
   uint *puVar1;
   ChainContextFormat3 *pCVar2;
   byte bVar3;
   ushort uVar4;
   ushort uVar5;
   long lVar6;
   hb_buffer_t *this_00;
   byte bVar7;
   bool bVar8;
   byte bVar9;
   char cVar10;
   ushort uVar11;
   int iVar12;
   uint uVar13;
   ChainContextFormat3 *pCVar14;
   ulong uVar15;
   uint *__ptr;
   undefined8 uVar16;
   hb_ot_apply_context_t hVar17;
   ushort uVar18;
   ulong uVar19;
   uint uVar20;
   ushort *puVar21;
   uint uVar22;
   byte bVar23;
   long lVar24;
   short sVar25;
   uint uVar26;
   uint uVar27;
   uint uVar28;
   uint *puVar29;
   long in_FS_OFFSET;
   uint local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pCVar2 = this + ( ulong )(ushort)(*(ushort*)( this + 2 ) << 8 | *(ushort*)( this + 2 ) >> 8) * 2 + 4;
   pCVar14 = (ChainContextFormat3*)&_hb_NullPool;
   if (*(ushort*)pCVar2 != 0) {
      pCVar14 = pCVar2 + 2;
   }

   uVar4 = *(ushort*)pCVar14;
   pCVar14 = (ChainContextFormat3*)&_hb_NullPool;
   if (uVar4 != 0) {
      pCVar14 = this + ( ushort )(uVar4 << 8 | uVar4 >> 8);
   }

   lVar6 = *(long*)( param_1 + 0xa0 );
   uVar28 = *(uint*)( lVar6 + 0x5c );
   puVar29 = (uint*)( *(long*)( lVar6 + 0x70 ) + (ulong)uVar28 * 0x14 );
   iVar12 = Layout::Common::Coverage::get_coverage((Coverage*)pCVar14, *puVar29);
   uVar16 = 0;
   if (iVar12 == -1) goto LAB_0010bd6f;
   uVar11 = *(ushort*)pCVar2 << 8 | *(ushort*)pCVar2 >> 8;
   uVar22 = (uint)uVar11;
   pCVar14 = pCVar2 + ( uVar11 + 2 + (uint)uVar11 );
   uVar18 = *(ushort*)pCVar14 << 8 | *(ushort*)pCVar14 >> 8;
   uVar4 = *(ushort*)( pCVar14 + ( uVar18 + 2 + (uint)uVar18 ) );
   uVar5 = *(ushort*)( this + 2 );
   if (( 0x40 < uVar22 ) || ( ( __ptr = local_58 ),4 < uVar22 && ( __ptr = (uint*)malloc((ulong)uVar11 * 4) ),__ptr == (uint*)0x0 )) {
      uVar16 = 0;
      goto LAB_0010bd6f;
   }

   *(uint*)( param_1 + 8 ) = uVar28;
   lVar24 = *(long*)( *(long*)( param_1 + 0x10 ) + 0xa0 );
   hVar17 = (hb_ot_apply_context_t)0x0;
   iVar12 = *(int*)( lVar24 + 0x60 );
   *(int*)( param_1 + 0x40 ) = iVar12;
   if (*(uint*)( lVar24 + 0x5c ) == uVar28) {
      hVar17 = *(hb_ot_apply_context_t*)( *(long*)( lVar24 + 0x70 ) + (ulong)uVar28 * 0x14 + 0xf );
   }

   *(ChainContextFormat3**)( param_1 + 0x30 ) = this;
   if (param_1[0x23] == (hb_ot_apply_context_t)0x0) {
      hVar17 = (hb_ot_apply_context_t)0x0;
   }

   *(ChainContextFormat3**)( param_1 + 0x38 ) = pCVar2 + 4;
   param_1[0x24] = hVar17;
   *(code**)( param_1 + 0x28 ) = match_coverage;
   bVar3 = *(byte*)( (long)puVar29 + 0xe );
   bVar23 = bVar3 >> 5;
   bVar9 = 0;
   if (( bVar3 & 0x10 ) == 0) {
      bVar9 = bVar3 & 0xf;
   }

   uVar20 = uVar28;
   if (1 < uVar22) {
      puVar29 = __ptr + 1;
      bVar8 = false;
      uVar15 = (ulong)uVar28;
      do {
         LAB_0010beb6:do {
            if (iVar12 + -1 <= (int)uVar15) goto LAB_0010c040;
            uVar20 = (int)uVar15 + 1;
            uVar15 = (ulong)uVar20;
            *(uint*)( param_1 + 8 ) = uVar20;
            puVar1 = (uint*)( *(long*)( *(long*)( *(long*)( param_1 + 0x10 ) + 0xa0 ) + 0x70 ) + uVar15 * 0x14 );
            uVar11 = (ushort)puVar1[3];
            uVar20 = *(uint*)( param_1 + 0x18 ) & (uint)uVar11;
         }
 while ( ( uVar20 & 0xe ) != 0 );
         uVar13 = 0;
         if (( uVar11 & 8 ) != 0) {
            uVar13 = uVar20 & 0xe;
            cVar10 = hb_ot_apply_context_t::match_properties_mark(*(hb_ot_apply_context_t**)( *(long*)( param_1 + 0x10 ) + 0xf8 ), *puVar1, (uint)uVar11, *(uint*)( param_1 + 0x18 ));
            if (cVar10 != '\0') goto LAB_0010bf00;
            goto LAB_0010c015;
         }

         LAB_0010bf00:uVar11 = (ushort)puVar1[4];
         sVar25 = 0;
         if (( ( uVar11 & 0x20 ) != 0 ) && ( ( puVar1[3] & 0x10 ) == 0 )) {
            if (param_1[0x20] == (hb_ot_apply_context_t)0x0) {
               if (( uVar11 & 0x1f ) == 1) {
                  sVar25 = 0;
                  if (( uVar11 & 0x200 ) != 0) goto LAB_0010bf17;
                  if (param_1[0x21] == (hb_ot_apply_context_t)0x0) goto LAB_0010c14b;
               }

            }
 else if (( param_1[0x21] == (hb_ot_apply_context_t)0x0 ) && ( ( uVar11 & 0x1f ) == 1 )) {
               LAB_0010c14b:sVar25 = 0;
               if (( uVar11 & 0x100 ) != 0) goto LAB_0010bf17;
            }

            if (param_1[0x22] == (hb_ot_apply_context_t)0x0) {
               sVar25 = ( ( uVar11 >> 6 ^ 1 ) & 1 ) * 2;
            }
 else {
               sVar25 = 2;
            }

         }

         LAB_0010bf17:puVar21 = *(ushort**)( param_1 + 0x38 );
         if (puVar21 != (ushort*)0x0) {
            uVar13 = ( uint )(ushort)(*puVar21 << 8 | *puVar21 >> 8);
         }

         if (( ( puVar1[1] & *(uint*)( param_1 + 0x1c ) ) == 0 ) || ( ( param_1[0x24] != (hb_ot_apply_context_t)0x0 && ( param_1[0x24] != *(hb_ot_apply_context_t*)( (long)puVar1 + 0xf ) ) ) )) {
            LAB_0010c010:if (sVar25 == 0) goto LAB_0010c040;
            LAB_0010c015:uVar15 = ( ulong ) * (uint*)( param_1 + 8 );
            goto LAB_0010beb6;
         }

         if (*(code**)( param_1 + 0x28 ) == (code*)0x0) {
            if (sVar25 != 0) goto LAB_0010c015;
            goto LAB_0010bf79;
         }

         cVar10 = ( **(code**)( param_1 + 0x28 ) )(puVar1, uVar13, *(undefined8*)( param_1 + 0x30 ));
         if (cVar10 == '\0') goto LAB_0010c010;
         puVar21 = *(ushort**)( param_1 + 0x38 );
         LAB_0010bf79:if (puVar21 != (ushort*)0x0) {
            *(ushort**)( param_1 + 0x38 ) = puVar21 + 1;
         }

         uVar15 = ( ulong ) * (uint*)( param_1 + 8 );
         *puVar29 = *(uint*)( param_1 + 8 );
         bVar3 = *(byte*)( uVar15 * 0x14 + *(long*)( lVar6 + 0x70 ) + 0xe );
         if (( bVar3 & 0x10 ) == 0) {
            bVar7 = bVar3 >> 5;
            if (bVar23 == 0 || bVar9 == 0) {
               if (( bVar7 != 0 && ( bVar3 & 0xf ) != 0 ) && ( bVar23 != bVar7 )) goto LAB_0010c040;
            }
 else if (( bVar9 != ( bVar3 & 0xf ) ) || ( bVar23 != bVar7 )) goto LAB_0010bfe0;
         }
 else if (bVar23 != 0 && bVar9 != 0) {
            LAB_0010bfe0:if (!bVar8) {
               uVar19 = ( ulong ) * (uint*)( lVar6 + 100 );
               do {
                  if ((int)uVar19 == 0) goto LAB_0010c040;
                  uVar19 = ( ulong )((int)uVar19 - 1);
                  puVar1 = (uint*)( *(long*)( lVar6 + 0x78 ) + uVar19 * 0x14 );
                  bVar3 = *(byte*)( (long)puVar1 + 0xe );
                  if (bVar23 != bVar3 >> 5) goto LAB_0010c040;
               }
 while ( ( ( bVar3 & 0x10 ) == 0 ) && ( ( bVar3 & 0xf ) != 0 ) );
               uVar11 = (ushort)puVar1[3];
               if (( *(uint*)( param_1 + 0x18 ) & (uint)uVar11 & 0xe ) == 0) {
                  if (( ( uVar11 & 8 ) != 0 ) && ( cVar10 = hb_ot_apply_context_t::match_properties_mark(*(hb_ot_apply_context_t**)( *(long*)( param_1 + 0x10 ) + 0xf8 ), *puVar1, (uint)uVar11, *(uint*)( param_1 + 0x18 )) ),cVar10 == '\0') {
                     bVar8 = true;
                     uVar15 = ( ulong ) * (uint*)( param_1 + 8 );
                     goto LAB_0010bff4;
                  }

                  goto LAB_0010c040;
               }

            }

            bVar8 = true;
         }

         LAB_0010bff4:puVar29 = puVar29 + 1;
         if (__ptr + ( ulong )(uVar22 - 2) + 2 == puVar29) goto LAB_0010c24b;
         iVar12 = *(int*)( param_1 + 0x40 );
      }
 while ( true );
   }

   LAB_0010c26e:*__ptr = uVar28;
   if (uVar20 + 1 == 0) {
      uVar28 = 0;
      LAB_0010c040:this_00 = *(hb_buffer_t**)( param_1 + 0xa0 );
      if (( (byte)this_00[0x18] & 0x40 ) != 0) {
         hb_buffer_t::_set_glyph_flags(this_00, 2, *(uint*)( this_00 + 0x5c ), uVar28, false, false);
      }

      LAB_0010c050:uVar16 = 0;
   }
 else {
      lVar24 = *(long*)( param_1 + 0x50 );
      *(uint*)( param_1 + 0x48 ) = uVar20;
      hVar17 = (hb_ot_apply_context_t)0x0;
      lVar6 = *(long*)( lVar24 + 0xa0 );
      iVar12 = *(int*)( lVar6 + 0x60 );
      *(int*)( param_1 + 0x80 ) = iVar12;
      if (uVar20 == *(uint*)( lVar6 + 0x5c )) {
         hVar17 = *(hb_ot_apply_context_t*)( (ulong)uVar20 * 0x14 + *(long*)( lVar6 + 0x70 ) + 0xf );
      }

      *(ChainContextFormat3**)( param_1 + 0x70 ) = this;
      if (param_1[99] == (hb_ot_apply_context_t)0x0) {
         hVar17 = (hb_ot_apply_context_t)0x0;
      }

      *(ChainContextFormat3**)( param_1 + 0x78 ) = pCVar14 + 2;
      param_1[100] = hVar17;
      *(code**)( param_1 + 0x68 ) = match_coverage;
      if (uVar18 != 0) {
         uVar15 = (ulong)uVar20;
         uVar28 = 0;
         iVar12 = iVar12 + -1;
         LAB_0010c2f2:do {
            while (true) {
               do {
                  if (iVar12 <= (int)uVar15) {
                     uVar28 = *(uint*)( param_1 + 0x80 );
                     goto LAB_0010c040;
                  }

                  uVar13 = (int)uVar15 + 1;
                  uVar15 = (ulong)uVar13;
                  *(uint*)( param_1 + 0x48 ) = uVar13;
                  puVar29 = (uint*)( *(long*)( *(long*)( *(long*)( param_1 + 0x50 ) + 0xa0 ) + 0x70 ) + uVar15 * 0x14 );
                  uVar11 = (ushort)puVar29[3];
                  uVar13 = *(uint*)( param_1 + 0x58 ) & (uint)uVar11;
               }
 while ( ( uVar13 & 0xe ) != 0 );
               uVar26 = 0;
               if (( uVar11 & 8 ) == 0) break;
               uVar26 = uVar13 & 0xe;
               cVar10 = hb_ot_apply_context_t::match_properties_mark(*(hb_ot_apply_context_t**)( *(long*)( param_1 + 0x50 ) + 0xf8 ), *puVar29, (uint)uVar11, *(uint*)( param_1 + 0x58 ));
               if (cVar10 != '\0') break;
               LAB_0010c429:uVar15 = ( ulong ) * (uint*)( param_1 + 0x48 );
            }
;
            uVar11 = (ushort)puVar29[4];
            sVar25 = 0;
            if (( ( uVar11 & 0x20 ) != 0 ) && ( ( puVar29[3] & 0x10 ) == 0 )) {
               if (param_1[0x60] == (hb_ot_apply_context_t)0x0) {
                  if (( uVar11 & 0x1f ) == 1) {
                     sVar25 = 0;
                     if (( uVar11 & 0x200 ) != 0) goto LAB_0010c37b;
                     if (param_1[0x61] == (hb_ot_apply_context_t)0x0) goto LAB_0010c473;
                  }

               }
 else if (( param_1[0x61] == (hb_ot_apply_context_t)0x0 ) && ( ( uVar11 & 0x1f ) == 1 )) {
                  LAB_0010c473:sVar25 = 0;
                  if (( uVar11 & 0x100 ) != 0) goto LAB_0010c37b;
               }

               if (param_1[0x62] == (hb_ot_apply_context_t)0x0) {
                  sVar25 = ( ( uVar11 >> 6 ^ 1 ) & 1 ) * 2;
               }
 else {
                  sVar25 = 2;
               }

            }

            LAB_0010c37b:puVar21 = *(ushort**)( param_1 + 0x78 );
            if (puVar21 != (ushort*)0x0) {
               uVar26 = ( uint )(ushort)(*puVar21 << 8 | *puVar21 >> 8);
            }

            if (( ( puVar29[1] & *(uint*)( param_1 + 0x5c ) ) != 0 ) && ( ( param_1[100] == (hb_ot_apply_context_t)0x0 || ( param_1[100] == *(hb_ot_apply_context_t*)( (long)puVar29 + 0xf ) ) ) )) {
               if (*(code**)( param_1 + 0x68 ) == (code*)0x0) {
                  if (sVar25 != 0) goto LAB_0010c429;
               }
 else {
                  cVar10 = ( **(code**)( param_1 + 0x68 ) )(puVar29, uVar26, *(undefined8*)( param_1 + 0x70 ));
                  if (cVar10 == '\0') goto LAB_0010c3fb;
                  puVar21 = *(ushort**)( param_1 + 0x78 );
               }

               if (puVar21 != (ushort*)0x0) {
                  *(ushort**)( param_1 + 0x78 ) = puVar21 + 1;
               }

               uVar13 = *(uint*)( param_1 + 0x48 );
               uVar15 = (ulong)uVar13;
               uVar28 = uVar28 + 1;
               if (uVar28 == uVar18) {
                  lVar24 = *(long*)( param_1 + 0x50 );
                  goto LAB_0010c4b3;
               }

               iVar12 = *(int*)( param_1 + 0x80 ) + -1;
               goto LAB_0010c2f2;
            }

            LAB_0010c3fb:uVar15 = ( ulong ) * (uint*)( param_1 + 0x48 );
         }
 while ( sVar25 != 0 );
         uVar28 = *(uint*)( param_1 + 0x48 ) + 1;
         goto LAB_0010c040;
      }

      uVar13 = *(uint*)( param_1 + 0x48 );
      LAB_0010c4b3:lVar6 = *(long*)( param_1 + 0xa0 );
      if (*(char*)( lVar6 + 0x5a ) == '\0') {
         uVar28 = *(uint*)( lVar6 + 0x5c );
      }
 else {
         uVar28 = *(uint*)( lVar6 + 100 );
      }

      lVar6 = *(long*)( lVar24 + 0xa0 );
      *(uint*)( param_1 + 0x48 ) = uVar28;
      *(undefined4*)( param_1 + 0x80 ) = *(undefined4*)( lVar6 + 0x60 );
      if (*(uint*)( lVar6 + 0x5c ) == uVar28) {
         hVar17 = *(hb_ot_apply_context_t*)( (ulong)uVar28 * 0x14 + *(long*)( lVar6 + 0x70 ) + 0xf );
      }
 else {
         hVar17 = (hb_ot_apply_context_t)0x0;
      }

      *(ChainContextFormat3**)( param_1 + 0x70 ) = this;
      if (param_1[99] == (hb_ot_apply_context_t)0x0) {
         hVar17 = (hb_ot_apply_context_t)0x0;
      }

      *(ChainContextFormat3**)( param_1 + 0x78 ) = this + 4;
      param_1[100] = hVar17;
      *(code**)( param_1 + 0x68 ) = match_coverage;
      for (uVar28 = 0; uVar28 < ( ushort )(uVar5 << 8 | uVar5 >> 8); uVar28 = uVar28 + 1) {
         LAB_0010c531:do {
            do {
               if (*(int*)( param_1 + 0x48 ) == 0) {
                  uVar28 = 0;
                  LAB_0010c646:if (( ( byte )(*(hb_buffer_t**)( param_1 + 0xa0 ))[0x18] & 0x40 ) != 0) {
                     hb_buffer_t::_set_glyph_flags(*(hb_buffer_t**)( param_1 + 0xa0 ), 2, uVar28, uVar13 + 1, false, true);
                  }

                  goto LAB_0010c050;
               }

               uVar26 = *(int*)( param_1 + 0x48 ) - 1;
               *(uint*)( param_1 + 0x48 ) = uVar26;
               puVar29 = (uint*)( *(long*)( *(long*)( *(long*)( param_1 + 0x50 ) + 0xa0 ) + 0x78 ) + (ulong)uVar26 * 0x14 );
               uVar11 = (ushort)puVar29[3];
               uVar26 = *(uint*)( param_1 + 0x58 ) & (uint)uVar11;
            }
 while ( ( uVar26 & 0xe ) != 0 );
            uVar27 = 0;
            if (( uVar11 & 8 ) != 0) {
               uVar27 = uVar26 & 0xe;
               cVar10 = hb_ot_apply_context_t::match_properties_mark(*(hb_ot_apply_context_t**)( *(long*)( param_1 + 0x50 ) + 0xf8 ), *puVar29, (uint)uVar11, *(uint*)( param_1 + 0x58 ));
               if (cVar10 == '\0') goto LAB_0010c531;
            }

            uVar11 = (ushort)puVar29[4];
            sVar25 = 0;
            if (( ( uVar11 & 0x20 ) != 0 ) && ( ( puVar29[3] & 0x10 ) == 0 )) {
               if (param_1[0x60] == (hb_ot_apply_context_t)0x0) {
                  if (( uVar11 & 0x1f ) == 1) {
                     sVar25 = 0;
                     if (( uVar11 & 0x200 ) != 0) goto LAB_0010c5b8;
                     if (param_1[0x61] == (hb_ot_apply_context_t)0x0) goto LAB_0010c6a6;
                  }

               }
 else if (( param_1[0x61] == (hb_ot_apply_context_t)0x0 ) && ( ( uVar11 & 0x1f ) == 1 )) {
                  LAB_0010c6a6:sVar25 = 0;
                  if (( uVar11 & 0x100 ) != 0) goto LAB_0010c5b8;
               }

               if (param_1[0x62] == (hb_ot_apply_context_t)0x0) {
                  sVar25 = ( ( uVar11 >> 6 ^ 1 ) & 1 ) * 2;
               }
 else {
                  sVar25 = 2;
               }

            }

            LAB_0010c5b8:puVar21 = *(ushort**)( param_1 + 0x78 );
            if (puVar21 != (ushort*)0x0) {
               uVar27 = ( uint )(ushort)(*puVar21 << 8 | *puVar21 >> 8);
            }

            if (( ( puVar29[1] & *(uint*)( param_1 + 0x5c ) ) == 0 ) || ( ( param_1[100] != (hb_ot_apply_context_t)0x0 && ( param_1[100] != *(hb_ot_apply_context_t*)( (long)puVar29 + 0xf ) ) ) )) {
               LAB_0010c628:if (sVar25 == 0) {
                  iVar12 = *(int*)( param_1 + 0x48 );
                  if (iVar12 == 0) {
                     iVar12 = 1;
                  }

                  uVar28 = iVar12 - 1;
                  goto LAB_0010c646;
               }

               goto LAB_0010c531;
            }

            if (*(code**)( param_1 + 0x68 ) != (code*)0x0) {
               cVar10 = ( **(code**)( param_1 + 0x68 ) )(puVar29, uVar27, *(undefined8*)( param_1 + 0x70 ));
               if (cVar10 == '\0') goto LAB_0010c628;
               puVar21 = *(ushort**)( param_1 + 0x78 );
               break;
            }

         }
 while ( sVar25 != 0 );
         if (puVar21 != (ushort*)0x0) {
            *(ushort**)( param_1 + 0x78 ) = puVar21 + 1;
         }

      }

      hb_buffer_t::_set_glyph_flags(*(hb_buffer_t**)( param_1 + 0xa0 ), 3, *(uint*)( param_1 + 0x48 ), uVar13 + 1, true, true);
      apply_lookup(param_1, uVar22, __ptr, ( uint )(ushort)(uVar4 << 8 | uVar4 >> 8), (LookupRecord*)( pCVar14 + ( uVar18 + 2 + (uint)uVar18 ) + 2 ), uVar20 + 1);
      uVar16 = 1;
   }

   if (__ptr != local_58) {
      free(__ptr);
   }

   LAB_0010bd6f:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar16;
   LAB_0010c24b:uVar28 = *(uint*)( lVar6 + 0x5c );
   uVar20 = (uint)uVar15;
   goto LAB_0010c26e;
}
/* bool OT::hb_accelerate_subtables_context_t::apply_to<OT::ChainContextFormat3>(void const*,
   OT::hb_ot_apply_context_t*) */bool OT::hb_accelerate_subtables_context_t::apply_to<OT::ChainContextFormat3>(void *param_1, hb_ot_apply_context_t *param_2) {
   bool bVar1;
   bVar1 = (bool)ChainContextFormat3::apply((ChainContextFormat3*)param_1, param_2);
   return bVar1;
}
/* bool OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::ChainContextFormat3>(void const*,
   OT::hb_ot_apply_context_t*) */bool OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::ChainContextFormat3>(void *param_1, hb_ot_apply_context_t *param_2) {
   bool bVar1;
   bVar1 = (bool)ChainContextFormat3::apply((ChainContextFormat3*)param_1, param_2);
   return bVar1;
}
/* OT::Layout::GSUB_impl::ReverseChainSingleSubstFormat1::apply(OT::hb_ot_apply_context_t*) const */undefined8 OT::Layout::GSUB_impl::ReverseChainSingleSubstFormat1::apply(ReverseChainSingleSubstFormat1 *this, hb_ot_apply_context_t *param_1) {
   uint *puVar1;
   long lVar2;
   char cVar3;
   uint uVar4;
   uint uVar5;
   ulong uVar6;
   ReverseChainSingleSubstFormat1 *pRVar7;
   ushort *puVar8;
   hb_ot_apply_context_t hVar9;
   short sVar10;
   uint uVar11;
   hb_ot_apply_context_t hVar13;
   long lVar14;
   ReverseChainSingleSubstFormat1 *pRVar15;
   ushort uVar16;
   uint uVar17;
   int iVar18;
   ushort uVar19;
   hb_buffer_t *phVar20;
   ulong uVar12;
   uVar16 = *(ushort*)( this + 2 );
   pRVar15 = (ReverseChainSingleSubstFormat1*)&_hb_NullPool;
   if (uVar16 != 0) {
      pRVar15 = this + ( ushort )(uVar16 << 8 | uVar16 >> 8);
   }

   phVar20 = *(hb_buffer_t**)( param_1 + 0xa0 );
   uVar6 = ( ulong ) * (uint*)( phVar20 + 0x5c );
   uVar4 = Common::Coverage::get_coverage((Coverage*)pRVar15, *(uint*)( *(long*)( phVar20 + 0x70 ) + uVar6 * 0x14 ));
   if (( uVar4 != 0xffffffff ) && ( *(int*)( param_1 + 0x138 ) == 0x40 )) {
      uVar16 = *(ushort*)( this + 4 ) << 8 | *(ushort*)( this + 4 ) >> 8;
      pRVar15 = this + ( ulong )(uVar16 + 2 + (uint)uVar16) + 4;
      uVar19 = *(ushort*)pRVar15 << 8 | *(ushort*)pRVar15 >> 8;
      pRVar7 = pRVar15 + ( uVar19 + 2 + (uint)uVar19 );
      if (uVar4 < ( ushort )(*(ushort*)pRVar7 << 8 | *(ushort*)pRVar7 >> 8)) {
         uVar12 = uVar6;
         if (phVar20[0x5a] != (hb_buffer_t)0x0) {
            uVar12 = ( ulong ) * (uint*)( phVar20 + 100 );
         }

         lVar14 = *(long*)( param_1 + 0x50 );
         uVar11 = (uint)uVar12;
         *(uint*)( param_1 + 0x48 ) = uVar11;
         lVar2 = *(long*)( lVar14 + 0xa0 );
         *(undefined4*)( param_1 + 0x80 ) = *(undefined4*)( lVar2 + 0x60 );
         hVar13 = (hb_ot_apply_context_t)0x0;
         if (*(uint*)( lVar2 + 0x5c ) == uVar11) {
            hVar13 = *(hb_ot_apply_context_t*)( *(long*)( lVar2 + 0x70 ) + uVar12 * 0x14 + 0xf );
         }

         hVar9 = param_1[99];
         *(ReverseChainSingleSubstFormat1**)( param_1 + 0x70 ) = this;
         *(ReverseChainSingleSubstFormat1**)( param_1 + 0x78 ) = this + 6;
         if (hVar9 == (hb_ot_apply_context_t)0x0) {
            hVar13 = (hb_ot_apply_context_t)0x0;
         }

         uVar17 = 0;
         param_1[100] = hVar13;
         *(code**)( param_1 + 0x68 ) = match_coverage;
         if (uVar16 != 0) {
            LAB_0010c9ae:do {
               while (true) {
                  do {
                     if ((int)uVar12 == 0) {
                        uVar4 = 0;
                        uVar11 = 0;
                        goto LAB_0010ca58;
                     }

                     uVar11 = (int)uVar12 - 1;
                     uVar12 = (ulong)uVar11;
                     *(uint*)( param_1 + 0x48 ) = uVar11;
                     puVar1 = (uint*)( *(long*)( *(long*)( *(long*)( param_1 + 0x50 ) + 0xa0 ) + 0x78 ) + uVar12 * 0x14 );
                     uVar19 = (ushort)puVar1[3];
                  }
 while ( ( *(uint*)( param_1 + 0x58 ) & (uint)uVar19 & 0xe ) != 0 );
                  if (( ( uVar19 & 8 ) == 0 ) || ( cVar3 = hb_ot_apply_context_t::match_properties_mark(*(hb_ot_apply_context_t**)( *(long*)( param_1 + 0x50 ) + 0xf8 ), *puVar1, (uint)uVar19, *(uint*)( param_1 + 0x58 )) ),cVar3 != '\0') break;
                  LAB_0010cd21:uVar12 = ( ulong ) * (uint*)( param_1 + 0x48 );
               }
;
               uVar19 = (ushort)puVar1[4];
               sVar10 = 0;
               if (( ( uVar19 & 0x20 ) != 0 ) && ( ( puVar1[3] & 0x10 ) == 0 )) {
                  if (param_1[0x60] == (hb_ot_apply_context_t)0x0) {
                     if (( uVar19 & 0x1f ) == 1) {
                        sVar10 = 0;
                        if (( uVar19 & 0x200 ) != 0) goto LAB_0010ca0e;
                        if (param_1[0x61] == (hb_ot_apply_context_t)0x0) goto LAB_0010cd8b;
                     }

                  }
 else if (( param_1[0x61] == (hb_ot_apply_context_t)0x0 ) && ( ( uVar19 & 0x1f ) == 1 )) {
                     LAB_0010cd8b:sVar10 = 0;
                     if (( uVar19 & 0x100 ) != 0) goto LAB_0010ca0e;
                  }

                  if (param_1[0x62] == (hb_ot_apply_context_t)0x0) {
                     sVar10 = ( ( uVar19 >> 6 ^ 1 ) & 1 ) * 2;
                  }
 else {
                     sVar10 = 2;
                  }

               }

               LAB_0010ca0e:puVar8 = *(ushort**)( param_1 + 0x78 );
               uVar19 = 0;
               if (puVar8 != (ushort*)0x0) {
                  uVar19 = *puVar8 << 8 | *puVar8 >> 8;
               }

               if (( ( puVar1[1] & *(uint*)( param_1 + 0x5c ) ) == 0 ) || ( ( param_1[100] != (hb_ot_apply_context_t)0x0 && ( param_1[100] != *(hb_ot_apply_context_t*)( (long)puVar1 + 0xf ) ) ) )) {
                  LAB_0010ca3b:uVar5 = *(uint*)( param_1 + 0x48 );
                  uVar12 = (ulong)uVar5;
                  if (sVar10 == 0) {
                     uVar11 = 1;
                     if (uVar5 != 0) {
                        uVar11 = uVar5;
                     }

                     uVar11 = uVar11 - 1;
                     uVar4 = 0;
                     goto LAB_0010ca58;
                  }

                  goto LAB_0010c9ae;
               }

               if (*(code**)( param_1 + 0x68 ) == (code*)0x0) {
                  if (sVar10 != 0) goto LAB_0010cd21;
               }
 else {
                  cVar3 = ( **(code**)( param_1 + 0x68 ) )(puVar1, uVar19, *(undefined8*)( param_1 + 0x70 ));
                  if (cVar3 == '\0') goto LAB_0010ca3b;
                  puVar8 = *(ushort**)( param_1 + 0x78 );
               }

               if (puVar8 != (ushort*)0x0) {
                  *(ushort**)( param_1 + 0x78 ) = puVar8 + 1;
               }

               uVar17 = uVar17 + 1;
               uVar11 = *(uint*)( param_1 + 0x48 );
               uVar12 = (ulong)uVar11;
            }
 while ( uVar17 != uVar16 );
            phVar20 = *(hb_buffer_t**)( param_1 + 0xa0 );
            lVar14 = *(long*)( param_1 + 0x50 );
            hVar9 = param_1[99];
            uVar19 = *(ushort*)pRVar15 << 8 | *(ushort*)pRVar15 >> 8;
            uVar6 = ( ulong ) * (uint*)( phVar20 + 0x5c );
         }

         lVar14 = *(long*)( lVar14 + 0xa0 );
         *(int*)( param_1 + 0x48 ) = (int)uVar6;
         hVar13 = (hb_ot_apply_context_t)0x0;
         iVar18 = *(int*)( lVar14 + 0x60 );
         *(int*)( param_1 + 0x80 ) = iVar18;
         if (*(int*)( lVar14 + 0x5c ) == (int)uVar6) {
            hVar13 = *(hb_ot_apply_context_t*)( *(long*)( lVar14 + 0x70 ) + uVar6 * 0x14 + 0xf );
         }

         *(ReverseChainSingleSubstFormat1**)( param_1 + 0x70 ) = this;
         if (hVar9 == (hb_ot_apply_context_t)0x0) {
            hVar13 = (hb_ot_apply_context_t)0x0;
         }

         *(ReverseChainSingleSubstFormat1**)( param_1 + 0x78 ) = pRVar15 + 2;
         uVar17 = 0;
         *(code**)( param_1 + 0x68 ) = match_coverage;
         param_1[100] = hVar13;
         if (uVar19 == 0) {
            uVar5 = *(uint*)( param_1 + 0x48 );
            LAB_0010ce2b:hb_buffer_t::_set_glyph_flags(phVar20, 3, uVar11, uVar5 + 1, true, true);
            if (*(long*)( phVar20 + 0xd0 ) != 0) {
               hb_buffer_t::message(phVar20, *(hb_font_t**)( param_1 + 0x90 ), "replacing glyph at %u (reverse chaining substitution)", ( ulong ) * (uint*)( phVar20 + 0x5c ));
            }

            pRVar15 = (ReverseChainSingleSubstFormat1*)&_hb_NullPool;
            if (uVar4 < ( ushort )(*(ushort*)pRVar7 << 8 | *(ushort*)pRVar7 >> 8)) {
               pRVar15 = pRVar7 + (ulong)uVar4 * 2 + 2;
            }

            uVar4 = ( uint )(ushort)(*(ushort*)pRVar15 << 8 | *(ushort*)pRVar15 >> 8);
            hb_ot_apply_context_t::_set_glyph_class(param_1, uVar4, 0, false, false);
            phVar20 = *(hb_buffer_t**)( param_1 + 0xa0 );
            lVar14 = *(long*)( phVar20 + 0xd0 );
            *(uint*)( *(long*)( phVar20 + 0x70 ) + ( ulong ) * (uint*)( phVar20 + 0x5c ) * 0x14 ) = uVar4;
            if (lVar14 != 0) {
               hb_buffer_t::message(phVar20, *(hb_font_t**)( param_1 + 0x90 ), "replaced glyph at %u (reverse chaining substitution)", ( ulong ) * (uint*)( phVar20 + 0x5c ));
            }

            return 1;
         }

         iVar18 = iVar18 + -1;
         LAB_0010cb75:do {
            while (true) {
               do {
                  if (iVar18 <= (int)uVar6) {
                     uVar4 = *(uint*)( param_1 + 0x80 );
                     goto LAB_0010ca58;
                  }

                  uVar5 = (int)uVar6 + 1;
                  uVar6 = (ulong)uVar5;
                  *(uint*)( param_1 + 0x48 ) = uVar5;
                  puVar1 = (uint*)( *(long*)( *(long*)( *(long*)( param_1 + 0x50 ) + 0xa0 ) + 0x70 ) + uVar6 * 0x14 );
                  uVar16 = (ushort)puVar1[3];
               }
 while ( ( *(uint*)( param_1 + 0x58 ) & (uint)uVar16 & 0xe ) != 0 );
               if (( ( uVar16 & 8 ) == 0 ) || ( cVar3 = hb_ot_apply_context_t::match_properties_mark(*(hb_ot_apply_context_t**)( *(long*)( param_1 + 0x50 ) + 0xf8 ), *puVar1, (uint)uVar16, *(uint*)( param_1 + 0x58 )) ),cVar3 != '\0') break;
               LAB_0010cdac:uVar6 = ( ulong ) * (uint*)( param_1 + 0x48 );
            }
;
            uVar16 = (ushort)puVar1[4];
            sVar10 = 0;
            if (( ( uVar16 & 0x20 ) != 0 ) && ( ( puVar1[3] & 0x10 ) == 0 )) {
               if (param_1[0x60] == (hb_ot_apply_context_t)0x0) {
                  if (( uVar16 & 0x1f ) == 1) {
                     sVar10 = 0;
                     if (( uVar16 & 0x200 ) != 0) goto LAB_0010cc00;
                     if (param_1[0x61] == (hb_ot_apply_context_t)0x0) goto LAB_0010ce05;
                  }

               }
 else if (( param_1[0x61] == (hb_ot_apply_context_t)0x0 ) && ( ( uVar16 & 0x1f ) == 1 )) {
                  LAB_0010ce05:sVar10 = 0;
                  if (( uVar16 & 0x100 ) != 0) goto LAB_0010cc00;
               }

               if (param_1[0x62] == (hb_ot_apply_context_t)0x0) {
                  sVar10 = ( ( uVar16 >> 6 ^ 1 ) & 1 ) * 2;
               }
 else {
                  sVar10 = 2;
               }

            }

            LAB_0010cc00:puVar8 = *(ushort**)( param_1 + 0x78 );
            uVar16 = 0;
            if (puVar8 != (ushort*)0x0) {
               uVar16 = *puVar8 << 8 | *puVar8 >> 8;
            }

            if (( ( puVar1[1] & *(uint*)( param_1 + 0x5c ) ) != 0 ) && ( ( param_1[100] == (hb_ot_apply_context_t)0x0 || ( param_1[100] == *(hb_ot_apply_context_t*)( (long)puVar1 + 0xf ) ) ) )) {
               if (*(code**)( param_1 + 0x68 ) == (code*)0x0) {
                  if (sVar10 != 0) goto LAB_0010cdac;
               }
 else {
                  cVar3 = ( **(code**)( param_1 + 0x68 ) )(puVar1, uVar16, *(undefined8*)( param_1 + 0x70 ));
                  if (cVar3 == '\0') goto LAB_0010cd00;
                  puVar8 = *(ushort**)( param_1 + 0x78 );
               }

               if (puVar8 != (ushort*)0x0) {
                  *(ushort**)( param_1 + 0x78 ) = puVar8 + 1;
               }

               uVar5 = *(uint*)( param_1 + 0x48 );
               uVar6 = (ulong)uVar5;
               uVar17 = uVar17 + 1;
               if (uVar17 == uVar19) {
                  phVar20 = *(hb_buffer_t**)( param_1 + 0xa0 );
                  goto LAB_0010ce2b;
               }

               iVar18 = *(int*)( param_1 + 0x80 ) + -1;
               goto LAB_0010cb75;
            }

            LAB_0010cd00:uVar6 = ( ulong ) * (uint*)( param_1 + 0x48 );
         }
 while ( sVar10 != 0 );
         uVar4 = *(uint*)( param_1 + 0x48 ) + 1;
         LAB_0010ca58:if (( ( byte )(*(hb_buffer_t**)( param_1 + 0xa0 ))[0x18] & 0x40 ) != 0) {
            hb_buffer_t::_set_glyph_flags(*(hb_buffer_t**)( param_1 + 0xa0 ), 2, uVar11, uVar4, false, true);
         }

      }

   }

   return 0;
}
/* bool 
   OT::hb_accelerate_subtables_context_t::apply_to<OT::Layout::GSUB_impl::ReverseChainSingleSubstFormat1>(void
   const*, OT::hb_ot_apply_context_t*) */bool OT::hb_accelerate_subtables_context_t::apply_to<OT::Layout::GSUB_impl::ReverseChainSingleSubstFormat1>(void *param_1, hb_ot_apply_context_t *param_2) {
   bool bVar1;
   bVar1 = (bool)Layout::GSUB_impl::ReverseChainSingleSubstFormat1::apply((ReverseChainSingleSubstFormat1*)param_1, param_2);
   return bVar1;
}
/* bool 
   OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::Layout::GSUB_impl::ReverseChainSingleSubstFormat1>(void
   const*, OT::hb_ot_apply_context_t*) */bool OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::Layout::GSUB_impl::ReverseChainSingleSubstFormat1>(void *param_1, hb_ot_apply_context_t *param_2) {
   bool bVar1;
   bVar1 = (bool)Layout::GSUB_impl::ReverseChainSingleSubstFormat1::apply((ReverseChainSingleSubstFormat1*)param_1, param_2);
   return bVar1;
}
/* hb_hashmap_t<hb_serialize_context_t::object_t const*, unsigned int, false>::fini() */void hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>::fini(hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false> *this) {
   long lVar1;
   int iVar2;
   pthread_mutex_t *__mutex;
   code *pcVar3;
   undefined8 uVar4;
   *(undefined4*)this = 0xffff2153;
   __mutex = *(pthread_mutex_t**)( this + 8 );
   if (__mutex != (pthread_mutex_t*)0x0) {
      if (*(int*)( (long)__mutex + 0x2c ) != 0) {
         do {
            pthread_mutex_lock(__mutex);
            iVar2 = *(int*)( (long)__mutex + 0x2c );
            while (true) {
               if (iVar2 == 0) {
                  if (__mutex[1].__data.__lock != 0) {
                     free(*(void**)( (long)__mutex + 0x30 ));
                  }

                  __mutex[1].__align = 0;
                  *(undefined8*)( (long)__mutex + 0x30 ) = 0;
                  pthread_mutex_unlock(__mutex);
                  goto LAB_0010d038;
               }

               lVar1 = *(long*)( (long)__mutex + 0x30 ) + ( ulong )(iVar2 - 1U) * 0x18;
               pcVar3 = *(code**)( lVar1 + 0x10 );
               uVar4 = *(undefined8*)( lVar1 + 8 );
               *(uint*)( (long)__mutex + 0x2c ) = iVar2 - 1U;
               pthread_mutex_unlock(__mutex);
               if (pcVar3 == (code*)0x0) break;
               ( *pcVar3 )(uVar4);
               pthread_mutex_lock(__mutex);
               iVar2 = *(int*)( (long)__mutex + 0x2c );
            }
;
         }
 while ( true );
      }

      if (__mutex[1].__data.__lock != 0) {
         free(*(void**)( (long)__mutex + 0x30 ));
      }

      __mutex[1].__align = 0;
      *(undefined8*)( (long)__mutex + 0x30 ) = 0;
      LAB_0010d038:pthread_mutex_destroy(__mutex);
      free(__mutex);
      *(undefined8*)( this + 8 ) = 0;
   }

   if (*(void**)( this + 0x28 ) != (void*)0x0) {
      free(*(void**)( this + 0x28 ));
      *(undefined8*)( this + 0x28 ) = 0;
   }

   *(undefined8*)( this + 0x14 ) = 0;
   return;
}
/* hb_serialize_context_t::~hb_serialize_context_t() */void hb_serialize_context_t::~hb_serialize_context_t(hb_serialize_context_t *this) {
   undefined8 *puVar1;
   long *plVar2;
   int iVar3;
   long lVar4;
   void *__ptr;
   undefined8 *puVar5;
   long *plVar6;
   if (*(int*)( this + 0x54 ) != 0) {
      plVar6 = (long*)( *(long*)( this + 0x58 ) + 8 );
      plVar2 = plVar6 + ( *(int*)( this + 0x54 ) - 1 );
      for (; plVar2 != plVar6; plVar6 = plVar6 + 1) {
         lVar4 = *plVar6;
         if (*(int*)( lVar4 + 0x10 ) != 0) {
            free(*(void**)( lVar4 + 0x18 ));
         }

         *(undefined8*)( lVar4 + 0x10 ) = 0;
         *(undefined8*)( lVar4 + 0x18 ) = 0;
         if (*(int*)( lVar4 + 0x20 ) != 0) {
            free(*(void**)( lVar4 + 0x28 ));
         }

         *(undefined8*)( lVar4 + 0x20 ) = 0;
         *(undefined8*)( lVar4 + 0x28 ) = 0;
      }

   }

   if (*(int*)( this + 0x50 ) != 0) {
      free(*(void**)( this + 0x58 ));
   }

   *(undefined8*)( this + 0x50 ) = 0;
   *(undefined8*)( this + 0x58 ) = 0;
   hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>::fini((hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>*)( this + 0x60 ));
   lVar4 = *(long*)( this + 0x48 );
   while (lVar4 != 0) {
      iVar3 = *(int*)( lVar4 + 0x10 );
      *(undefined8*)( this + 0x48 ) = *(undefined8*)( lVar4 + 0x30 );
      if (iVar3 != 0) {
         free(*(void**)( lVar4 + 0x18 ));
      }

      *(undefined8*)( lVar4 + 0x10 ) = 0;
      *(undefined8*)( lVar4 + 0x18 ) = 0;
      if (*(int*)( lVar4 + 0x20 ) != 0) {
         free(*(void**)( lVar4 + 0x28 ));
      }

      *(undefined8*)( lVar4 + 0x20 ) = 0;
      *(undefined8*)( lVar4 + 0x28 ) = 0;
      lVar4 = *(long*)( this + 0x48 );
   }
;
   hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>::fini((hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>*)( this + 0x60 ));
   if (*(int*)( this + 0x50 ) != 0) {
      free(*(void**)( this + 0x58 ));
   }

   puVar5 = *(undefined8**)( this + 0x40 );
   if (*(int*)( this + 0x3c ) != 0) {
      puVar1 = puVar5 + ( ulong )(*(int*)( this + 0x3c ) - 1) + 1;
      do {
         __ptr = (void*)*puVar5;
         puVar5 = puVar5 + 1;
         free(__ptr);
      }
 while ( puVar5 != puVar1 );
   }

   if (*(int*)( this + 0x38 ) == 0) {
      return;
   }

   free(*(void**)( this + 0x40 ));
   return;
}
/* OT::GDEFVersion1_2<OT::Layout::SmallTypes>::sanitize(hb_sanitize_context_t*) const */undefined8 OT::GDEFVersion1_2<OT::Layout::SmallTypes>::sanitize(GDEFVersion1_2<OT::Layout::SmallTypes> *this, hb_sanitize_context_t *param_1) {
   char cVar1;
   ushort uVar2;
   uint uVar3;
   GDEFVersion1_2<OT::Layout::SmallTypes> *pGVar4;
   long lVar5;
   GDEFVersion1_2<OT::Layout::SmallTypes> *pGVar6;
   int iVar7;
   GDEFVersion1_2<OT::Layout::SmallTypes> *pGVar8;
   if ((GDEFVersion1_2<OT::Layout::SmallTypes>*)( ulong ) * (uint*)( param_1 + 0x18 ) < this + ( 4 - *(long*)( param_1 + 8 ) )) {
      return 0;
   }

   if ((GDEFVersion1_2<OT::Layout::SmallTypes>*)( ulong ) * (uint*)( param_1 + 0x18 ) < this + ( 6 - *(long*)( param_1 + 8 ) )) {
      return 0;
   }

   uVar2 = *(ushort*)( this + 4 );
   if (uVar2 == 0) {
      LAB_0010d2b0:lVar5 = *(long*)( param_1 + 8 );
      pGVar6 = (GDEFVersion1_2<OT::Layout::SmallTypes>*)( ulong ) * (uint*)( param_1 + 0x18 );
   }
 else {
      pGVar4 = this + ( ushort )(uVar2 << 8 | uVar2 >> 8);
      if ((GDEFVersion1_2<OT::Layout::SmallTypes>*)( ulong ) * (uint*)( param_1 + 0x18 ) < pGVar4 + ( 2 - *(long*)( param_1 + 8 ) )) {
         LAB_0010d3f8:if (0x1f < *(uint*)( param_1 + 0x2c )) {
            return 0;
         }

         *(uint*)( param_1 + 0x2c ) = *(uint*)( param_1 + 0x2c ) + 1;
         if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
            return 0;
         }

         *(undefined2*)( this + 4 ) = 0;
         goto LAB_0010d2b0;
      }

      if (*(short*)pGVar4 != 0x100) {
         if (*(short*)pGVar4 != 0x200) goto LAB_0010d2b0;
         pGVar8 = pGVar4 + 4;
         if (( ulong )((long)pGVar8 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 )) {
            lVar5 = *(long*)( param_1 + 8 );
            pGVar6 = (GDEFVersion1_2<OT::Layout::SmallTypes>*)( ulong ) * (uint*)( param_1 + 0x18 );
            if (pGVar8 + -lVar5 <= pGVar6) {
               uVar2 = *(ushort*)( pGVar4 + 2 ) << 8 | *(ushort*)( pGVar4 + 2 ) >> 8;
               uVar3 = (uint)uVar2 + (uint)uVar2 * 2;
               goto LAB_0010d3d6;
            }

         }

         goto LAB_0010d3f8;
      }

      pGVar8 = pGVar4 + 6;
      if (( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pGVar8 - *(long*)( param_1 + 8 ))) goto LAB_0010d3f8;
      lVar5 = *(long*)( param_1 + 8 );
      pGVar6 = (GDEFVersion1_2<OT::Layout::SmallTypes>*)( ulong ) * (uint*)( param_1 + 0x18 );
      if (pGVar6 < pGVar8 + -lVar5) goto LAB_0010d3f8;
      uVar3 = ( uint )(ushort)(*(ushort*)( pGVar4 + 4 ) << 8 | *(ushort*)( pGVar4 + 4 ) >> 8);
      LAB_0010d3d6:if (( ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)pGVar8) < uVar3 * 2 ) || ( iVar7 = *(int*)( param_1 + 0x1c ) + uVar3 * -2 ),*(int*)( param_1 + 0x1c ) = iVar7,iVar7 < 1) goto LAB_0010d3f8;
   }

   if (pGVar6 < this + ( 8 - lVar5 )) {
      return 0;
   }

   uVar2 = *(ushort*)( this + 6 );
   if (( uVar2 != 0 ) && ( cVar1 = AttachList::sanitize((AttachList*)( this + ( ushort )(uVar2 << 8 | uVar2 >> 8) ), param_1) ),cVar1 == '\0') {
      if (0x1f < *(uint*)( param_1 + 0x2c )) {
         return 0;
      }

      *(uint*)( param_1 + 0x2c ) = *(uint*)( param_1 + 0x2c ) + 1;
      if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
         return 0;
      }

      *(undefined2*)( this + 6 ) = 0;
   }

   if ((GDEFVersion1_2<OT::Layout::SmallTypes>*)( ulong ) * (uint*)( param_1 + 0x18 ) < this + ( 10 - *(long*)( param_1 + 8 ) )) {
      return 0;
   }

   uVar2 = *(ushort*)( this + 8 );
   if (( uVar2 != 0 ) && ( cVar1 = LigCaretList::sanitize((LigCaretList*)( this + ( ushort )(uVar2 << 8 | uVar2 >> 8) ), param_1) ),cVar1 == '\0') {
      if (0x1f < *(uint*)( param_1 + 0x2c )) {
         return 0;
      }

      *(uint*)( param_1 + 0x2c ) = *(uint*)( param_1 + 0x2c ) + 1;
      if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
         return 0;
      }

      *(undefined2*)( this + 8 ) = 0;
   }

   if ((GDEFVersion1_2<OT::Layout::SmallTypes>*)( ulong ) * (uint*)( param_1 + 0x18 ) < this + ( 0xc - *(long*)( param_1 + 8 ) )) {
      return 0;
   }

   uVar2 = *(ushort*)( this + 10 );
   if (uVar2 == 0) goto LAB_0010d316;
   pGVar4 = this + ( ushort )(uVar2 << 8 | uVar2 >> 8);
   if (pGVar4 + ( 2 - *(long*)( param_1 + 8 ) ) <= (GDEFVersion1_2<OT::Layout::SmallTypes>*)( ulong ) * (uint*)( param_1 + 0x18 )) {
      if (*(short*)pGVar4 == 0x100) {
         pGVar8 = pGVar4 + 6;
         if (( ( ( ulong )((long)pGVar8 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 ) ) && ( ( ulong )((long)pGVar8 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 ) ) ) && ( uVar3 = ( uint )(ushort)(*(ushort*)( pGVar4 + 4 ) << 8 | *(ushort*)( pGVar4 + 4 ) >> 8) * 2 ),uVar3 <= ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)pGVar8)) {
            LAB_0010d6b9:iVar7 = *(int*)( param_1 + 0x1c );
            *(uint*)( param_1 + 0x1c ) = iVar7 - uVar3;
            if (0 < (int)( iVar7 - uVar3 )) goto LAB_0010d316;
         }

      }
 else {
         if (*(short*)pGVar4 != 0x200) goto LAB_0010d316;
         pGVar8 = pGVar4 + 4;
         if (( ( ( ulong )((long)pGVar8 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 ) ) && ( ( ulong )((long)pGVar8 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 ) ) ) && ( uVar3 = ( uint )(ushort)(*(ushort*)( pGVar4 + 2 ) << 8 | *(ushort*)( pGVar4 + 2 ) >> 8) * 6 ),uVar3 <= ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)pGVar8)) goto LAB_0010d6b9;
      }

   }

   if (0x1f < *(uint*)( param_1 + 0x2c )) {
      return 0;
   }

   *(uint*)( param_1 + 0x2c ) = *(uint*)( param_1 + 0x2c ) + 1;
   if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
   }

   *(undefined2*)( this + 10 ) = 0;
   LAB_0010d316:if (0x10001 < ( uint )(ushort)(*(ushort*)this << 8 | *(ushort*)this >> 8) * 0x10000 + ( uint )(ushort)(*(ushort*)( this + 2 ) << 8 | *(ushort*)( this + 2 ) >> 8)) {
      if ((GDEFVersion1_2<OT::Layout::SmallTypes>*)( ulong ) * (uint*)( param_1 + 0x18 ) < this + ( 0xe - *(long*)( param_1 + 8 ) )) {
         return 0;
      }

      uVar2 = *(ushort*)( this + 0xc );
      if (( uVar2 != 0 ) && ( cVar1 = MarkGlyphSets::sanitize((MarkGlyphSets*)( this + ( ushort )(uVar2 << 8 | uVar2 >> 8) ), param_1) ),cVar1 == '\0') {
         if (0x1f < *(uint*)( param_1 + 0x2c )) {
            return 0;
         }

         *(uint*)( param_1 + 0x2c ) = *(uint*)( param_1 + 0x2c ) + 1;
         if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
            return 0;
         }

         *(undefined2*)( this + 0xc ) = 0;
      }

   }

   if (0x10002 < ( uint )(ushort)(*(ushort*)this << 8 | *(ushort*)this >> 8) * 0x10000 + ( uint )(ushort)(*(ushort*)( this + 2 ) << 8 | *(ushort*)( this + 2 ) >> 8)) {
      if ((GDEFVersion1_2<OT::Layout::SmallTypes>*)( ulong ) * (uint*)( param_1 + 0x18 ) < this + ( 0x12 - *(long*)( param_1 + 8 ) )) {
         return 0;
      }

      uVar3 = *(uint*)( this + 0xe );
      if (( uVar3 != 0 ) && ( cVar1 = ItemVariationStore::sanitize((ItemVariationStore*)( this + ( uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18 ) ), param_1) ),cVar1 == '\0') {
         if (0x1f < *(uint*)( param_1 + 0x2c )) {
            return 0;
         }

         *(uint*)( param_1 + 0x2c ) = *(uint*)( param_1 + 0x2c ) + 1;
         if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
            return 0;
         }

         *(undefined4*)( this + 0xe ) = 0;
      }

   }

   return 1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* hb_hashmap_t<hb_serialize_context_t::object_t const*, unsigned int, false>::alloc(unsigned int)
    */hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false> hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>::alloc(hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false> *this, uint param_1) {
   byte bVar1;
   int iVar2;
   long *__ptr;
   long lVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   char cVar6;
   int iVar7;
   void *pvVar8;
   int iVar9;
   undefined4 uVar10;
   ulong uVar11;
   uint uVar12;
   ulong uVar13;
   long *plVar14;
   uint uVar15;
   int iVar16;
   uint uVar17;
   hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false> hVar18;
   uint uVar19;
   size_t __size;
   short sVar20;
   ulong uVar21;
   long in_FS_OFFSET;
   long *local_118;
   undefined8 uStack_c8;
   undefined8 uStack_c0;
   undefined8 uStack_b8;
   undefined8 uStack_b0;
   undefined8 uStack_a8;
   undefined8 uStack_a0;
   undefined8 uStack_98;
   undefined8 uStack_90;
   undefined8 uStack_88;
   undefined8 uStack_80;
   undefined8 uStack_78;
   undefined8 uStack_70;
   undefined8 uStack_68;
   undefined8 uStack_60;
   undefined8 uStack_58;
   undefined8 uStack_50;
   long local_40;
   hVar18 = this[0x10];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (hVar18 == (hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>)0x0) {
      LAB_0010db77:hVar18 = (hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>)0x0;
   }
 else {
      if (param_1 == 0) {
         param_1 = *(uint*)( this + 0x14 );
      }
 else {
         if (( param_1 >> 1 ) + param_1 < *(uint*)( this + 0x1c )) goto LAB_0010daeb;
         if (param_1 < *(uint*)( this + 0x14 )) {
            param_1 = *(uint*)( this + 0x14 );
         }

      }

      uVar12 = param_1 * 2 + 8;
      uVar13 = (ulong)uVar12;
      if (uVar12 == 0) {
         pvVar8 = malloc(0x10);
         if (pvVar8 == (void*)0x0) goto LAB_0010db72;
         iVar16 = 0;
         sVar20 = 0;
         iVar9 = 0x10;
         __size = 0x10;
         LAB_0010d766:pvVar8 = (void*)__memset_chk(pvVar8, 0, iVar9, __size);
      }
 else {
         iVar9 = 0x1f;
         if (uVar12 != 0) {
            for (; uVar12 >> iVar9 == 0; iVar9 = iVar9 + -1) {}
         }

         uVar12 = iVar9 + 1;
         uVar13 = (ulong)uVar12;
         uVar15 = 1 << ( (byte)uVar12 & 0x1f );
         __size = (ulong)uVar15 << 4;
         pvVar8 = malloc(__size);
         if (pvVar8 == (void*)0x0) {
            LAB_0010db72:this[0x10] = (hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>)0x0;
            goto LAB_0010db77;
         }

         sVar20 = (short)uVar12 * 2;
         iVar16 = uVar15 - 1;
         iVar9 = 0x10 << ( (byte)uVar12 & 0x1f );
         if (iVar9 != 0) goto LAB_0010d766;
      }

      uStack_c0 = _UNK_00114468;
      uStack_c8 = __LC9;
      iVar9 = *(int*)( this + 0x1c );
      *(undefined8*)( this + 0x14 ) = 0;
      *(int*)( this + 0x1c ) = iVar16;
      __ptr = *(long**)( this + 0x28 );
      uVar12 = ( iVar9 + 1 ) - ( uint )(iVar9 == 0);
      uStack_b8 = __LC10;
      uStack_b0 = _UNK_00114478;
      uStack_a8 = __LC11;
      uStack_a0 = _UNK_00114488;
      uStack_98 = __LC12;
      uStack_90 = _UNK_00114498;
      uStack_88 = __LC13;
      uStack_80 = _UNK_001144a8;
      uStack_78 = __LC14;
      uStack_70 = _UNK_001144b8;
      uStack_68 = __LC15;
      uStack_60 = _UNK_001144c8;
      uStack_58 = __LC16;
      uStack_50 = _UNK_001144d8;
      if ((int)uVar13 == 0x20) {
         uVar10 = 0x7fffffff;
      }
 else {
         uVar10 = *(undefined4*)( (long)&uStack_c8 + uVar13 * 4 );
      }

      *(undefined4*)( this + 0x20 ) = uVar10;
      *(short*)( this + 0x12 ) = sVar20;
      *(void**)( this + 0x28 ) = pvVar8;
      if (uVar12 != 0) {
         local_118 = __ptr;
         do {
            if (( ( *(byte*)( local_118 + 1 ) & 1 ) != 0 ) && ( uVar15 = *(uint*)( local_118 + 1 ) >> 2 ),this[0x10] != (hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>)0x0) {
               uVar17 = *(uint*)( this + 0x18 );
               if (*(uint*)( this + 0x1c ) <= ( uVar17 >> 1 ) + uVar17) {
                  cVar6 = alloc(this, 0);
                  if (cVar6 == '\0') goto LAB_0010d850;
                  uVar17 = *(uint*)( this + 0x18 );
               }

               lVar3 = *(long*)( this + 0x28 );
               iVar9 = *(int*)( this + 0x14 );
               uVar13 = (ulong)uVar15 % ( ulong ) * (uint*)( this + 0x20 );
               puVar4 = (undefined8*)*local_118;
               plVar14 = (long*)( uVar13 * 0x10 + lVar3 );
               bVar1 = *(byte*)( plVar14 + 1 );
               if (( bVar1 & 2 ) == 0) {
                  *plVar14 = (long)puVar4;
                  *(undefined4*)( (long)plVar14 + 0xc ) = *(undefined4*)( (long)local_118 + 0xc );
                  *(uint*)( plVar14 + 1 ) = uVar15 * 4 + 3;
                  *(uint*)( this + 0x18 ) = uVar17 + 1;
                  *(int*)( this + 0x14 ) = iVar9 + 1;
               }
 else {
                  uVar19 = 0;
                  uVar21 = 0xffffffff;
                  do {
                     if (uVar15 == *(uint*)( plVar14 + 1 ) >> 2) {
                        puVar5 = (undefined8*)*plVar14;
                        uVar11 = puVar5[1] - (long)*puVar5;
                        if (uVar11 == puVar4[1] - (long)*puVar4) {
                           iVar16 = *(int*)( (long)puVar5 + 0x14 );
                           iVar2 = *(int*)( (long)puVar4 + 0x14 );
                           if (( iVar16 == iVar2 ) && ( ( (int)uVar11 == 0 || ( iVar7 = memcmp((void*)*puVar5, (void*)*puVar4, uVar11 & 0xffffffff) ),iVar7 == 0 ) )) {
                              if (( iVar2 * 0xc == iVar16 * 0xc ) && ( ( ( iVar2 * 3 & 0x3fffffffU ) == 0 || ( iVar16 = memcmp((void*)puVar5[3], (void*)puVar4[3], ( ulong )(uint)(iVar2 * 0xc)) ),iVar16 == 0 ) )) {
                                 if ((int)uVar21 == -1) goto LAB_0010da10;
                                 goto LAB_0010da06;
                              }

                           }

                        }

                     }

                     if (( (int)uVar21 == -1 ) && ( ( bVar1 & 1 ) == 0 )) {
                        uVar21 = uVar13;
                     }

                     uVar19 = uVar19 + 1;
                     uVar13 = ( ulong )((int)uVar13 + uVar19 & *(uint*)( this + 0x1c ));
                     plVar14 = (long*)( uVar13 * 0x10 + lVar3 );
                     bVar1 = *(byte*)( plVar14 + 1 );
                  }
 while ( ( bVar1 & 2 ) != 0 );
                  if ((int)uVar21 == -1) {
                     LAB_0010dac8:uVar17 = uVar17 + 1;
                  }
 else {
                     LAB_0010da06:plVar14 = (long*)( uVar21 * 0x10 + lVar3 );
                     LAB_0010da10:if (( *(byte*)( plVar14 + 1 ) & 2 ) == 0) goto LAB_0010dac8;
                     iVar9 = iVar9 - ( *(byte*)( plVar14 + 1 ) & 1 );
                     *(uint*)( this + 0x18 ) = uVar17 - 1;
                     *(int*)( this + 0x14 ) = iVar9;
                  }

                  *plVar14 = (long)puVar4;
                  *(undefined4*)( (long)plVar14 + 0xc ) = *(undefined4*)( (long)local_118 + 0xc );
                  *(uint*)( plVar14 + 1 ) = uVar15 * 4 + 3;
                  *(int*)( this + 0x14 ) = iVar9 + 1;
                  *(uint*)( this + 0x18 ) = uVar17;
                  if (( *(ushort*)( this + 0x12 ) < uVar19 ) && ( *(uint*)( this + 0x1c ) < uVar17 * 8 )) {
                     alloc(this, *(uint*)( this + 0x1c ) - 8);
                  }

               }

            }

            LAB_0010d850:local_118 = local_118 + 2;
         }
 while ( __ptr + (ulong)uVar12 * 2 != local_118 );
      }

      free(__ptr);
   }

   LAB_0010daeb:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return hVar18;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* hb_serialize_context_t::pop_pack(bool) */uint hb_serialize_context_t::pop_pack(hb_serialize_context_t *this, bool param_1) {
   undefined8 *puVar1;
   byte bVar2;
   long *plVar3;
   void *pvVar4;
   undefined8 *puVar5;
   char cVar6;
   int iVar7;
   int iVar8;
   int iVar9;
   long lVar10;
   undefined8 uVar11;
   void *pvVar12;
   uint uVar13;
   ulong uVar14;
   uint uVar15;
   uint uVar16;
   undefined8 *puVar17;
   int iVar18;
   long *plVar19;
   ulong uVar20;
   void *pvVar21;
   uint *puVar22;
   uint uVar23;
   hb_serialize_context_t *phVar24;
   ulong uVar25;
   uint local_88;
   plVar3 = *(long**)( this + 0x48 );
   if (plVar3 == (long*)0x0) {
      return 0;
   }

   uVar16 = *(uint*)( this + 0x2c );
   if (uVar16 != 0) {
      if (0x10 < uVar16) {
         return 0;
      }

      if (( 0x10104UL >> ( (ulong)uVar16 & 0x3f ) & 1 ) == 0) {
         return 0;
      }

   }

   pvVar12 = (void*)*plVar3;
   *(long*)( this + 0x48 ) = plVar3[6];
   lVar10 = *(long*)( this + 8 );
   pvVar4 = *(void**)( this + 0x20 );
   plVar3[6] = 0;
   plVar3[1] = lVar10;
   uVar20 = lVar10 - (long)pvVar12;
   pvVar21 = pvVar4;
   if (pvVar4 == (void*)0x0) {
      pvVar21 = pvVar12;
   }

   *(undefined8*)( this + 0x20 ) = 0;
   *(void**)( this + 8 ) = pvVar21;
   if ((int)lVar10 == (int)pvVar12) {
      return 0;
   }

   if (param_1) {
      uVar25 = 0x80;
      if ((long)uVar20 < 0x81) {
         uVar25 = uVar20;
      }

      phVar24 = this;
      uVar25 = fasthash64(pvVar12, uVar25 & 0xffffffff, (ulong)pvVar21);
      pvVar21 = (void*)plVar3[3];
      iVar18 = *(int*)( (long)plVar3 + 0x14 );
      uVar23 = iVar18 * 0xc;
      uVar11 = fasthash64(pvVar21, (ulong)uVar23, uVar25 >> 0x20);
      local_88 = (int)uVar11 - (int)( (ulong)uVar11 >> 0x20 ) ^ (int)uVar25 - (int)( uVar25 >> 0x20 );
      lVar10 = *(long*)( phVar24 + 0x88 );
      uVar16 = *(uint*)( phVar24 + 0x7c );
      puVar22 = (uint*)&_hb_NullPool;
      if (lVar10 == 0) {
         LAB_0010dee2:uVar13 = *puVar22;
      }
 else {
         uVar25 = ( ulong )(local_88 & 0x3fffffff) % ( ulong ) * (uint*)( phVar24 + 0x80 );
         plVar19 = (long*)( uVar25 * 0x10 + lVar10 );
         bVar2 = *(byte*)( plVar19 + 1 );
         if (( bVar2 & 2 ) == 0) goto LAB_0010dee2;
         iVar9 = 0;
         do {
            if (( local_88 & 0x3fffffff ) == *(uint*)( plVar19 + 1 ) >> 2) {
               puVar5 = (undefined8*)*plVar19;
               if (( ( ( ( uVar20 == puVar5[1] - (long)*puVar5 ) && ( iVar7 = *(int*)( (long)puVar5 + 0x14 ) ),iVar18 == iVar7 ) ) && ( ( (int)uVar20 == 0 || ( iVar8 = memcmp((void*)*puVar5, pvVar12, uVar20 & 0xffffffff) ),iVar8 == 0 ) ) )) {
                  puVar22 = (uint*)&_hb_NullPool;
                  if (( bVar2 & 1 ) != 0) {
                     puVar22 = (uint*)( (long)plVar19 + 0xc );
                  }

                  goto LAB_0010dee2;
               }

            }

            iVar9 = iVar9 + 1;
            uVar25 = ( ulong )((int)uVar25 + iVar9 & uVar16);
            plVar19 = (long*)( uVar25 * 0x10 + lVar10 );
            bVar2 = *(byte*)( plVar19 + 1 );
            uVar13 = __hb_NullPool;
         }
 while ( ( bVar2 & 2 ) != 0 );
      }

      if (uVar13 != 0) {
         if (uVar13 < *(uint*)( this + 0x54 )) {
            plVar19 = (long*)( *(long*)( this + 0x58 ) + (ulong)uVar13 * 8 );
         }
 else {
            __hb_CrapPool = CONCAT44(_DAT_00116054, __hb_NullPool);
            plVar19 = (long*)&_hb_CrapPool;
         }

         lVar10 = *plVar19;
         puVar17 = (undefined8*)plVar3[5];
         puVar5 = (undefined8*)( (long)puVar17 + ( ulong ) * (uint*)( (long)plVar3 + 0x24 ) * 0xc );
         do {
            if (puVar17 == puVar5) {
               if ((int)plVar3[2] != 0) {
                  free((void*)plVar3[3]);
               }

               plVar3[2] = 0;
               plVar3[3] = 0;
               if ((int)plVar3[4] != 0) {
                  free((void*)plVar3[5]);
               }

               plVar3[4] = 0;
               plVar3[5] = 0;
               return uVar13;
            }

            uVar16 = *(uint*)( lVar10 + 0x24 );
            uVar20 = (ulong)uVar16;
            uVar23 = *(uint*)( lVar10 + 0x20 );
            uVar15 = uVar16 + 1;
            if ((int)uVar16 < (int)uVar23) {
               LAB_0010df41:pvVar12 = *(void**)( lVar10 + 0x28 );
               LAB_0010df45:*(uint*)( lVar10 + 0x24 ) = uVar15;
               puVar1 = (undefined8*)( (long)pvVar12 + uVar20 * 0xc );
               *puVar1 = *puVar17;
               *(undefined4*)( puVar1 + 1 ) = *(undefined4*)( puVar17 + 1 );
            }
 else {
               if (-1 < (int)uVar23) {
                  uVar16 = uVar23;
                  if (uVar15 <= uVar23) goto LAB_0010df41;
                  do {
                     uVar16 = ( uVar16 >> 1 ) + 8 + uVar16;
                  }
 while ( uVar16 < uVar15 );
                  if (0x15555555 < uVar16) {
                     *(uint*)( lVar10 + 0x20 ) = ~uVar23;
                     goto LAB_0010e4c5;
                  }

                  pvVar12 = realloc(*(void**)( lVar10 + 0x28 ), (ulong)uVar16 * 0xc);
                  if (pvVar12 == (void*)0x0) {
                     if (*(uint*)( lVar10 + 0x20 ) < uVar16) {
                        *(uint*)( lVar10 + 0x20 ) = ~*(uint *)(lVar10 + 0x20);
                        goto LAB_0010e4c5;
                     }

                     uVar20 = ( ulong ) * (uint*)( lVar10 + 0x24 );
                     pvVar12 = *(void**)( lVar10 + 0x28 );
                     uVar15 = *(uint*)( lVar10 + 0x24 ) + 1;
                  }
 else {
                     *(void**)( lVar10 + 0x28 ) = pvVar12;
                     uVar20 = ( ulong ) * (uint*)( lVar10 + 0x24 );
                     *(uint*)( lVar10 + 0x20 ) = uVar16;
                     uVar15 = *(uint*)( lVar10 + 0x24 ) + 1;
                  }

                  goto LAB_0010df45;
               }

               LAB_0010e4c5:__hb_CrapPool = CONCAT44(_DAT_00116054, __hb_NullPool);
               _memset = __hb_Null_OT_RangeRecord;
            }

            puVar17 = (undefined8*)( (long)puVar17 + 0xc );
         }
 while ( true );
      }

   }
 else {
      local_88 = 0;
   }

   uVar20 = uVar20 & 0xffffffff;
   lVar10 = *(long*)( this + 0x10 );
   pvVar21 = (void*)( lVar10 - uVar20 );
   *(void**)( this + 0x10 ) = pvVar21;
   if (pvVar4 == (void*)0x0) {
      memmove(pvVar21, pvVar12, uVar20);
      pvVar21 = *(void**)( this + 0x10 );
      lVar10 = (long)pvVar21 + uVar20;
   }

   plVar3[1] = lVar10;
   *plVar3 = (long)pvVar21;
   uVar16 = *(uint*)( this + 0x54 );
   uVar20 = (ulong)uVar16;
   uVar23 = *(uint*)( this + 0x50 );
   uVar13 = uVar16 + 1;
   if ((int)uVar23 <= (int)uVar16) {
      if (-1 < (int)uVar23) {
         uVar16 = uVar23;
         if (uVar13 <= uVar23) goto LAB_0010dc96;
         do {
            uVar16 = ( uVar16 >> 1 ) + 8 + uVar16;
         }
 while ( uVar16 < uVar13 );
         if (0x1fffffff < uVar16) {
            LAB_0010e4e4:__hb_CrapPool = CONCAT44(_DAT_00116054, __hb_NullPool);
            iVar18 = *(int*)( this + 0x2c );
            *(uint*)( this + 0x50 ) = ~uVar23;
            goto joined_r0x0010e500;
         }

         pvVar12 = realloc(*(void**)( this + 0x58 ), (ulong)uVar16 << 3);
         if (pvVar12 == (void*)0x0) {
            uVar23 = *(uint*)( this + 0x50 );
            if (uVar23 < uVar16) goto LAB_0010e4e4;
            pvVar12 = *(void**)( this + 0x58 );
            uVar20 = ( ulong ) * (uint*)( this + 0x54 );
            uVar13 = *(uint*)( this + 0x54 ) + 1;
         }
 else {
            *(void**)( this + 0x58 ) = pvVar12;
            *(uint*)( this + 0x50 ) = uVar16;
            uVar20 = ( ulong ) * (uint*)( this + 0x54 );
            uVar13 = *(uint*)( this + 0x54 ) + 1;
            uVar23 = uVar16;
         }

         goto LAB_0010dc9f;
      }

      __hb_CrapPool = CONCAT44(_DAT_00116054, __hb_NullPool);
      iVar18 = *(int*)( this + 0x2c );
      joined_r0x0010e500:if (iVar18 != 0) goto LAB_0010dcb8;
      LAB_0010e020:*(undefined4*)( this + 0x2c ) = 1;
      LAB_0010dcb8:if ((int)plVar3[2] != 0) {
         free((void*)plVar3[3]);
      }

      plVar3[2] = 0;
      plVar3[3] = 0;
      if ((int)plVar3[4] != 0) {
         free((void*)plVar3[5]);
      }

      plVar3[4] = 0;
      plVar3[5] = 0;
      return 0;
   }

   LAB_0010dc96:pvVar12 = *(void**)( this + 0x58 );
   LAB_0010dc9f:iVar18 = *(int*)( this + 0x2c );
   *(uint*)( this + 0x54 ) = uVar13;
   *(long**)( (long)pvVar12 + uVar20 * 8 ) = plVar3;
   if (iVar18 != 0) goto LAB_0010dcb8;
   if ((int)uVar23 < 0) goto LAB_0010e020;
   uVar16 = *(int*)( this + 0x54 ) - 1;
   iVar18 = 0;
   if (param_1) {
      if (this[0x70] == (hb_serialize_context_t)0x0) goto LAB_0010dfdd;
      uVar23 = *(uint*)( this + 0x78 );
      if (( uVar23 >> 1 ) + uVar23 < *(uint*)( this + 0x7c )) {
         LAB_0010e064:lVar10 = *(long*)( this + 0x88 );
         iVar18 = *(int*)( this + 0x74 );
         uVar20 = ( ulong )(local_88 & 0x3fffffff) % ( ulong ) * (uint*)( this + 0x80 );
         plVar19 = (long*)( lVar10 + uVar20 * 0x10 );
         bVar2 = *(byte*)( plVar19 + 1 );
         if (( bVar2 & 2 ) == 0) {
            *plVar19 = (long)plVar3;
            *(uint*)( (long)plVar19 + 0xc ) = uVar16;
            *(uint*)( plVar19 + 1 ) = local_88 * 4 + 3;
            *(uint*)( this + 0x78 ) = uVar23 + 1;
            *(int*)( this + 0x74 ) = iVar18 + 1;
         }
 else {
            uVar25 = 0xffffffff;
            uVar13 = 0;
            do {
               if (( local_88 & 0x3fffffff ) == *(uint*)( plVar19 + 1 ) >> 2) {
                  puVar5 = (undefined8*)*plVar19;
                  uVar14 = puVar5[1] - (long)*puVar5;
                  if (uVar14 == plVar3[1] - *plVar3) {
                     iVar9 = *(int*)( (long)puVar5 + 0x14 );
                     iVar7 = *(int*)( (long)plVar3 + 0x14 );
                     if (( iVar9 == iVar7 ) && ( ( (int)uVar14 == 0 || ( iVar8 = memcmp((void*)*puVar5, (void*)*plVar3, uVar14 & 0xffffffff) ),iVar8 == 0 ) )) {
                        if (( iVar7 * 0xc == iVar9 * 0xc ) && ( ( ( iVar7 * 3 & 0x3fffffffU ) == 0 || ( iVar9 = memcmp((void*)puVar5[3], (void*)plVar3[3], ( ulong )(uint)(iVar7 * 0xc)) ),iVar9 == 0 ) )) {
                           if ((int)uVar25 == -1) goto LAB_0010e241;
                           goto LAB_0010e236;
                        }

                     }

                  }

               }

               if (( (int)uVar25 == -1 ) && ( ( bVar2 & 1 ) == 0 )) {
                  uVar25 = uVar20;
               }

               uVar13 = uVar13 + 1;
               uVar15 = (int)uVar20 + uVar13 & *(uint*)( this + 0x7c );
               uVar20 = (ulong)uVar15;
               plVar19 = (long*)( (ulong)uVar15 * 0x10 + lVar10 );
               bVar2 = *(byte*)( plVar19 + 1 );
            }
 while ( ( bVar2 & 2 ) != 0 );
            if ((int)uVar25 == -1) {
               LAB_0010e2d8:uVar23 = uVar23 + 1;
            }
 else {
               LAB_0010e236:plVar19 = (long*)( lVar10 + uVar25 * 0x10 );
               LAB_0010e241:if (( *(byte*)( plVar19 + 1 ) & 2 ) == 0) goto LAB_0010e2d8;
               iVar18 = iVar18 - ( *(byte*)( plVar19 + 1 ) & 1 );
            }

            *plVar19 = (long)plVar3;
            *(uint*)( (long)plVar19 + 0xc ) = uVar16;
            *(uint*)( plVar19 + 1 ) = local_88 * 4 + 3;
            *(int*)( this + 0x74 ) = iVar18 + 1;
            *(uint*)( this + 0x78 ) = uVar23;
            if (( *(ushort*)( this + 0x72 ) < uVar13 ) && ( *(uint*)( this + 0x7c ) < uVar23 * 8 )) {
               hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>::alloc((hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>*)( this + 0x60 ), *(uint*)( this + 0x7c ) - 8);
               iVar18 = *(int*)( this + 0x2c );
               goto LAB_0010dfc5;
            }

         }

      }
 else {
         cVar6 = hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>::alloc((hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>*)( this + 0x60 ), 0);
         if (cVar6 != '\0') {
            uVar23 = *(uint*)( this + 0x78 );
            goto LAB_0010e064;
         }

      }

      iVar18 = *(int*)( this + 0x2c );
   }

   LAB_0010dfc5:if (this[0x70] != (hb_serialize_context_t)0x0) {
      return uVar16;
   }

   if (iVar18 != 0) {
      return uVar16;
   }

   LAB_0010dfdd:*(undefined4*)( this + 0x2c ) = 1;
   return uVar16;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* hb_pool_t<hb_serialize_context_t::object_t, 32u>::alloc() */undefined1(*)[16];hb_pool_t<hb_serialize_context_t::object_t,32u>::alloc (hb_pool_t<hb_serialize_context_t::object_t,32u> *this) {
   undefined1(*pauVar1)[16];
   ulong uVar2;
   undefined1(*pauVar3)[16];
   undefined1(*pauVar4)[16];
   void *pvVar5;
   uint uVar6;
   uint uVar7;
   uint uVar8;
   pauVar1 = *(undefined1(**) [16])this;
   if (pauVar1 != (undefined1(*) [16])0x0) goto LAB_0010e553;
   uVar7 = *(uint*)( this + 8 );
   if ((int)uVar7 < 0) {
      return (undefined1(*) [16])0x0;
   }

   uVar8 = uVar7;
   if (uVar7 < *(int*)( this + 0xc ) + 1U) {
      do {
         uVar8 = ( uVar8 >> 1 ) + 8 + uVar8;
      }
 while ( uVar8 < *(int*)( this + 0xc ) + 1U );
      if (0x1fffffff < uVar8) {
         *(uint*)( this + 8 ) = ~uVar7;
         return (undefined1(*) [16])0x0;
      }

      pvVar5 = realloc(*(void**)( this + 0x10 ), (ulong)uVar8 << 3);
      if (pvVar5 == (void*)0x0) {
         if (*(uint*)( this + 8 ) < uVar8) {
            *(uint*)( this + 8 ) = ~*(uint *)(this + 8);
            return (undefined1(*) [16])0x0;
         }

      }
 else {
         *(void**)( this + 0x10 ) = pvVar5;
         *(uint*)( this + 8 ) = uVar8;
      }

   }

   pauVar1 = (undefined1(*) [16])malloc(0x700);
   if (pauVar1 == (undefined1(*) [16])0x0) {
      return (undefined1(*) [16])0x0;
   }

   uVar7 = *(uint*)( this + 0xc );
   uVar2 = (ulong)uVar7;
   uVar8 = *(uint*)( this + 8 );
   uVar6 = uVar7 + 1;
   if ((int)uVar7 < (int)uVar8) {
      LAB_0010e5b7:*(uint*)( this + 0xc ) = uVar6;
      *(undefined1(**) [16])( *(long*)( this + 0x10 ) + uVar2 * 8 ) = pauVar1;
   }
 else {
      if (-1 < (int)uVar8) {
         uVar7 = uVar8;
         if (uVar8 < uVar6) {
            do {
               uVar7 = uVar7 + 8 + ( uVar7 >> 1 );
            }
 while ( uVar7 < uVar6 );
            if (0x1fffffff < uVar7) {
               *(uint*)( this + 8 ) = ~uVar8;
               goto LAB_0010e6a7;
            }

            pvVar5 = realloc(*(void**)( this + 0x10 ), (ulong)uVar7 << 3);
            if (pvVar5 == (void*)0x0) {
               if (*(uint*)( this + 8 ) < uVar7) {
                  *(uint*)( this + 8 ) = ~*(uint *)(this + 8);
                  goto LAB_0010e6a7;
               }

            }
 else {
               *(void**)( this + 0x10 ) = pvVar5;
               *(uint*)( this + 8 ) = uVar7;
            }

            uVar2 = ( ulong ) * (uint*)( this + 0xc );
            uVar6 = *(uint*)( this + 0xc ) + 1;
         }

         goto LAB_0010e5b7;
      }

      LAB_0010e6a7:__hb_CrapPool = __hb_NullPool;
   }

   *(undefined1**)*pauVar1 = pauVar1[3] + 8;
   pauVar3 = pauVar1 + 7;
   do {
      *(undefined1(**) [16])( pauVar3[-4] + 8 ) = pauVar3;
      pauVar4 = pauVar3 + 7;
      *(undefined1**)*pauVar3 = pauVar3[3] + 8;
      pauVar3 = pauVar4;
   }
 while ( pauVar1 + 0x70 != pauVar4 );
   *(undefined8*)( pauVar1[0x6c] + 8 ) = 0;
   *(undefined1(**) [16])this = pauVar1;
   LAB_0010e553:*(undefined8*)this = *(undefined8*)*pauVar1;
   *(undefined8*)pauVar1[3] = 0;
   *pauVar1 = (undefined1[16])0x0;
   pauVar1[1] = (undefined1[16])0x0;
   pauVar1[2] = (undefined1[16])0x0;
   return pauVar1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* void 
   OT::MarkGlyphSetsFormat1::collect_coverage<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned
   long, 4u>, hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 0u>,
   hb_set_digest_bits_pattern_t<unsigned long, 9u> > >
   >(hb_vector_t<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 4u>,
   hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 0u>,
   hb_set_digest_bits_pattern_t<unsigned long, 9u> > >, false>&) const */void OT::MarkGlyphSetsFormat1::collect_coverage<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>(MarkGlyphSetsFormat1 *this, hb_vector_t *param_1) {
   MarkGlyphSetsFormat1 *pMVar1;
   undefined1(*pauVar2)[16];
   uint uVar3;
   ulong uVar4;
   undefined1(*pauVar5)[16];
   void *pvVar6;
   hb_set_digest_combiner_t *phVar7;
   uint uVar8;
   MarkGlyphSetsFormat1 *this_00;
   uint uVar9;
   MarkGlyphSetsFormat1 *pMVar10;
   uint uVar11;
   pMVar10 = this + 4;
   uVar4 = ( ulong )(ushort)(*(ushort*)( this + 2 ) << 8 | *(ushort*)( this + 2 ) >> 8);
   pMVar1 = pMVar10 + uVar4 * 4;
   if (uVar4 != 0) {
      do {
         uVar3 = *(uint*)pMVar10;
         this_00 = (MarkGlyphSetsFormat1*)&_hb_NullPool;
         if (uVar3 != 0) {
            this_00 = this + ( uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18 );
         }

         uVar3 = *(uint*)param_1;
         uVar8 = *(uint*)( param_1 + 4 );
         if ((int)uVar3 < 0) {
            LAB_0010e846:__hb_CrapPool = __hb_NullPool;
            _memset = __hb_Null_OT_RangeRecord;
            phVar7 = (hb_set_digest_combiner_t*)&_hb_CrapPool;
            _make_room_for = _enlarge;
         }
 else {
            uVar11 = uVar8 + 1;
            if ((int)uVar11 < 0) {
               uVar11 = 0;
            }

            uVar9 = uVar3;
            if (uVar3 < uVar11) {
               do {
                  uVar9 = uVar9 + 8 + ( uVar9 >> 1 );
               }
 while ( uVar9 < uVar11 );
               if (0xaaaaaaa < uVar9) {
                  LAB_0010e840:*(uint*)param_1 = ~uVar3;
                  goto LAB_0010e846;
               }

               pvVar6 = realloc(*(void**)( param_1 + 8 ), (ulong)uVar9 * 0x18);
               if (pvVar6 == (void*)0x0) {
                  uVar3 = *(uint*)param_1;
                  if (uVar3 < uVar9) goto LAB_0010e840;
                  pvVar6 = *(void**)( param_1 + 8 );
                  uVar8 = *(uint*)( param_1 + 4 );
               }
 else {
                  *(void**)( param_1 + 8 ) = pvVar6;
                  uVar8 = *(uint*)( param_1 + 4 );
                  *(uint*)param_1 = uVar9;
               }

            }
 else {
               pvVar6 = *(void**)( param_1 + 8 );
            }

            if (uVar8 < uVar11) {
               pauVar5 = (undefined1(*) [16])( (long)pvVar6 + (ulong)uVar8 * 0x18 );
               do {
                  *(undefined8*)pauVar5[1] = 0;
                  pauVar2 = pauVar5 + 1;
                  *pauVar5 = (undefined1[16])0x0;
                  pauVar5 = (undefined1(*) [16])( *pauVar2 + 8 );
               }
 while ( (undefined1(*) [16])( (long)pvVar6 + ( ( ulong )(( uVar11 - 1 ) - uVar8) + (ulong)uVar8 ) * 0x18 + 0x18 ) != (undefined1(*) [16])( *pauVar2 + 8 ) );
            }

            *(uint*)( param_1 + 4 ) = uVar11;
            phVar7 = (hb_set_digest_combiner_t*)( (long)pvVar6 + ( ulong )(uVar11 - 1) * 0x18 );
         }

         pMVar10 = pMVar10 + 4;
         Layout::Common::Coverage::collect_coverage<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t < unsigned_long,9u>>> > ( (Coverage*)this_00,phVar7 );
      }
 while ( pMVar1 != pMVar10 );
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OT::GDEF::accelerator_t::accelerator_t(hb_face_t*) */void OT::GDEF::accelerator_t::accelerator_t(accelerator_t *this, hb_face_t *param_1) {
   ushort uVar1;
   short sVar2;
   GDEFVersion1_2<OT::Layout::SmallTypes> *this_00;
   char cVar3;
   accelerator_t *paVar4;
   hb_face_t *phVar5;
   long lVar6;
   hb_face_t *phVar7;
   short *psVar8;
   ulong uVar9;
   undefined *puVar10;
   undefined8 *puVar11;
   hb_blob_t *phVar12;
   MarkGlyphSetsFormat1 *this_01;
   long in_FS_OFFSET;
   undefined4 local_78[2];
   undefined1 local_70[16];
   uint local_60;
   uint local_5c;
   undefined4 local_58;
   undefined4 local_54;
   char local_50;
   int local_4c;
   long local_48;
   undefined4 local_40;
   undefined1 local_3c;
   undefined1 local_3b;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   *(undefined8*)( this + 8 ) = 0;
   *(undefined8*)( this + 0x10 ) = 0;
   *(undefined8*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x210 ) = 0;
   puVar11 = (undefined8*)( ( ulong )(this + 0x20) & 0xfffffffffffffff8 );
   for (uVar9 = ( ulong )(( (int)this - (int)(undefined8*)( ( ulong )(this + 0x20) & 0xfffffffffffffff8 ) ) + 0x218U >> 3); uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
   }

   for (paVar4 = this + 0x18; paVar4 != this + 0x218; paVar4 = paVar4 + 4) {
      *(undefined2*)paVar4 = 0xffff;
      *(undefined2*)( paVar4 + 2 ) = 0xffff;
   }

   local_58 = 0;
   local_50 = '\0';
   local_3b = 0;
   local_40 = hb_face_get_glyph_count(param_1);
   local_3c = 1;
   phVar5 = (hb_face_t*)hb_face_reference_table(param_1, 0x47444546);
   lVar6 = hb_blob_reference(phVar5);
   local_48 = lVar6;
   while (true) {
      local_60 = *(uint*)( lVar6 + 0x18 );
      this_00 = *(GDEFVersion1_2<OT::Layout::SmallTypes>**)( lVar6 + 0x10 );
      local_5c = local_60 * 0x40;
      if (local_60 >> 0x1a == 0) {
         if (0x3fffffff < local_5c) {
            local_5c = 0x3fffffff;
         }

         if (local_5c < 0x4000) {
            local_5c = 0x4000;
         }

      }
 else {
         local_5c = 0x3fffffff;
      }

      local_70._8_8_ = this_00 + local_60;
      local_70._0_8_ = this_00;
      local_4c = 0;
      local_78[0] = 0;
      local_54 = 0;
      if (this_00 == (GDEFVersion1_2<OT::Layout::SmallTypes>*)0x0) {
         hb_blob_destroy(lVar6);
         goto LAB_0010ea0b;
      }

      if ((ulong)local_60 < 4) goto LAB_0010eb6a;
      if (( *(short*)this_00 != 0x100 ) || ( cVar3 = GDEFVersion1_2<OT::Layout::SmallTypes>::sanitize(this_00, (hb_sanitize_context_t*)local_78) ),lVar6 = local_48,cVar3 != '\0') break;
      if (( local_4c == 0 ) || ( local_50 != '\0' )) goto LAB_0010eb6a;
      local_70._0_8_ = hb_blob_get_data_writable(phVar5, 0);
      local_70._8_8_ = ( ulong ) * (uint*)( phVar5 + 0x18 ) + local_70._0_8_;
      if (local_70._0_8_ == 0) goto LAB_0010eb6a;
      local_50 = '\x01';
   }
;
   if (local_4c == 0) {
      LAB_0010e9fe:hb_blob_destroy(local_48);
   }
 else {
      local_4c = 0;
      if ((GDEFVersion1_2<OT::Layout::SmallTypes>*)(ulong)local_60 < this_00 + ( 4 - local_70._0_8_ )) {
         hb_blob_destroy(local_48);
         goto LAB_0010eb6f;
      }

      if (*(short*)this_00 != 0x100) goto LAB_0010e9fe;
      cVar3 = GDEFVersion1_2<OT::Layout::SmallTypes>::sanitize(this_00, (hb_sanitize_context_t*)local_78);
      lVar6 = local_48;
      if (local_4c != 0) {
         LAB_0010eb6a:hb_blob_destroy(lVar6);
         LAB_0010eb6f:hb_blob_destroy(phVar5);
         phVar5 = (hb_face_t*)hb_blob_get_empty();
         LAB_0010ea0b:*(hb_face_t**)this = phVar5;
         phVar7 = (hb_face_t*)&_hb_NullPool;
         if (phVar5 != (hb_face_t*)0x0) {
            phVar7 = phVar5;
         }

         phVar12 = (hb_blob_t*)&_hb_NullPool;
         if (3 < *(uint*)( phVar7 + 0x18 )) {
            phVar12 = *(hb_blob_t**)( phVar7 + 0x10 );
         }

         cVar3 = OT::GDEF::is_blocklisted(phVar12, phVar5);
         if (cVar3 == '\0') {
            puVar10 = *(undefined**)this;
         }
 else {
            hb_blob_destroy(*(undefined8*)this);
            puVar10 = (undefined*)hb_blob_get_empty();
            *(undefined**)this = puVar10;
         }

         if (puVar10 == (undefined*)0x0) {
            puVar10 = &_hb_NullPool;
         }

         psVar8 = (short*)&_hb_NullPool;
         if (3 < *(uint*)( puVar10 + 0x18 )) {
            psVar8 = *(short**)( puVar10 + 0x10 );
         }

         if (( ( *psVar8 == 0x100 ) && ( 0x10001 < ( ushort )(psVar8[1] << 8 | (ushort)psVar8[1] >> 8) + 0x10000 ) ) && ( uVar1 = uVar1 != 0 )) {
            this_01 = (MarkGlyphSetsFormat1*)( (long)psVar8 + ( ulong )(ushort)(uVar1 << 8 | uVar1 >> 8) );
            sVar2 = *(short*)this_01;
         }
 else {
            this_01 = (MarkGlyphSetsFormat1*)&_hb_NullPool;
            sVar2 = __hb_NullPool;
         }

         if (sVar2 == 0x100) {
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               MarkGlyphSetsFormat1::collect_coverage<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t < unsigned_long,9u>>> > ( this_01,(hb_vector_t*)( this + 8 ) );
               return;
            }

         }
 else if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      hb_blob_destroy(local_48);
      local_48 = 0;
      local_60 = 0;
      local_70 = (undefined1[16])0x0;
      if (cVar3 == '\0') goto LAB_0010eb6f;
   }

   hb_blob_make_immutable(phVar5);
   goto LAB_0010ea0b;
}
/* OT::hb_ot_apply_context_t::hb_ot_apply_context_t(unsigned int, hb_font_t*, hb_buffer_t*,
   hb_blob_t*) */void OT::hb_ot_apply_context_t::hb_ot_apply_context_t(hb_ot_apply_context_t *this, uint param_1, hb_font_t *param_2, hb_buffer_t *param_3, hb_blob_t *param_4) {
   undefined4 *puVar1;
   long *plVar2;
   uint *puVar3;
   undefined8 uVar4;
   uint uVar5;
   int iVar6;
   undefined4 uVar7;
   long lVar8;
   short *psVar9;
   hb_face_t *phVar10;
   undefined8 uVar11;
   ushort uVar12;
   uint uVar13;
   long lVar14;
   undefined *puVar15;
   uint *puVar16;
   undefined4 *puVar17;
   accelerator_t *paVar18;
   undefined *puVar19;
   uint *puVar20;
   undefined4 *puVar21;
   ulong uVar22;
   hb_ot_apply_context_t hVar23;
   this[0x24] = (hb_ot_apply_context_t)0x0;
   uVar11 = _LC17;
   this[100] = (hb_ot_apply_context_t)0x0;
   *(uint*)( this + 0x88 ) = param_1;
   *(hb_buffer_t**)( this + 0xa0 ) = param_3;
   uVar4 = *(undefined8*)( param_2 + 0x20 );
   *(undefined4*)this = 0;
   *(hb_font_t**)( this + 0x90 ) = param_2;
   *(undefined8*)( this + 0x98 ) = uVar4;
   *(undefined1(*) [16])( this + 0xb0 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x18 ) = uVar11;
   *(undefined4*)( this + 0x20 ) = 0;
   *(undefined8*)( this + 0x28 ) = 0;
   *(undefined8*)( this + 0x30 ) = 0;
   *(undefined8*)( this + 0x58 ) = uVar11;
   *(undefined4*)( this + 0x60 ) = 0;
   *(undefined8*)( this + 0x68 ) = 0;
   *(undefined8*)( this + 0x70 ) = 0;
   *(undefined4*)( this + 0xa8 ) = 0;
   *(undefined8*)( this + 0xc0 ) = 0;
   *(undefined8*)( this + 200 ) = 0;
   this[0xd0] = (hb_ot_apply_context_t)0x0;
   *(undefined8*)( this + 0xd4 ) = 0;
   *(undefined8*)( this + 0xdc ) = 0x1000000000000;
   *(undefined2*)( this + 0xe4 ) = 0;
   lVar14 = hb_blob_reference();
   this[0xd0] = (hb_ot_apply_context_t)0x0;
   *(long*)( this + 0xd8 ) = lVar14;
   if (lVar14 != 0) {
      lVar8 = *(long*)( lVar14 + 0x10 );
      uVar5 = *(uint*)( lVar14 + 0x18 );
      *(long*)( this + 0xb0 ) = lVar8;
      uVar13 = uVar5 * 0x40;
      if (uVar5 >> 0x1a == 0) {
         if (0x3fffffff < uVar13) {
            uVar13 = 0x3fffffff;
         }

         if (uVar13 < 0x4000) {
            uVar13 = 0x4000;
         }

      }
 else {
         uVar13 = 0x3fffffff;
      }

      *(ulong*)( this + 0xb8 ) = lVar8 + (ulong)uVar5;
      *(uint*)( this + 0xc0 ) = uVar5;
      *(uint*)( this + 0xc4 ) = uVar13;
      *(undefined4*)( this + 0xd4 ) = 0;
      *(undefined4*)( this + 0xa8 ) = 0;
      *(undefined4*)( this + 0xcc ) = 0;
   }

   lVar14 = *(long*)( this + 0x98 );
   *(undefined8*)( this + 0xe8 ) = 0;
   plVar2 = (long*)( lVar14 + 0x130 );
   do {
      while (true) {
         paVar18 = (accelerator_t*)*plVar2;
         if (paVar18 != (accelerator_t*)0x0) goto LAB_0010edd3;
         phVar10 = *(hb_face_t**)( lVar14 + 0x70 );
         if (phVar10 == (hb_face_t*)0x0) goto LAB_0010f20c;
         paVar18 = (accelerator_t*)calloc(1, 0x218);
         if (paVar18 == (accelerator_t*)0x0) break;
         GDEF::accelerator_t::accelerator_t(paVar18, phVar10);
         LOCK();
         lVar8 = *plVar2;
         if (lVar8 == 0) {
            *plVar2 = (long)paVar18;
         }

         UNLOCK();
         if (lVar8 == 0) goto LAB_0010edd3;
         if (paVar18 != (accelerator_t*)&_hb_NullPool) {
            hb_blob_destroy(*(undefined8*)paVar18);
            if (*(int*)( paVar18 + 8 ) != 0) {
               free(*(void**)( paVar18 + 0x10 ));
            }

            free(paVar18);
         }

      }
;
      LOCK();
      lVar8 = *plVar2;
      if (lVar8 == 0) {
         *plVar2 = (long)&_hb_NullPool;
      }

      UNLOCK();
   }
 while ( lVar8 != 0 );
   LAB_0010f20c:paVar18 = (accelerator_t*)&_hb_NullPool;
   LAB_0010edd3:puVar15 = *(undefined**)paVar18;
   if (puVar15 == (undefined*)0x0) {
      puVar15 = &_hb_NullPool;
   }

   puVar19 = &_hb_NullPool;
   if (3 < *(uint*)( puVar15 + 0x18 )) {
      puVar19 = *(undefined**)( puVar15 + 0x10 );
   }

   *(undefined**)( this + 0xf0 ) = puVar19;
   lVar14 = *(long*)( this + 0x98 );
   plVar2 = (long*)( lVar14 + 0x130 );
   do {
      while (true) {
         paVar18 = (accelerator_t*)*plVar2;
         if (paVar18 != (accelerator_t*)0x0) goto LAB_0010ee11;
         phVar10 = *(hb_face_t**)( lVar14 + 0x70 );
         if (phVar10 == (hb_face_t*)0x0) goto LAB_0010f22a;
         paVar18 = (accelerator_t*)calloc(1, 0x218);
         if (paVar18 == (accelerator_t*)0x0) break;
         GDEF::accelerator_t::accelerator_t(paVar18, phVar10);
         LOCK();
         lVar8 = *plVar2;
         if (lVar8 == 0) {
            *plVar2 = (long)paVar18;
         }

         UNLOCK();
         if (lVar8 == 0) goto LAB_0010ee11;
         if (paVar18 != (accelerator_t*)&_hb_NullPool) {
            hb_blob_destroy(*(undefined8*)paVar18);
            if (*(int*)( paVar18 + 8 ) != 0) {
               free(*(void**)( paVar18 + 0x10 ));
            }

            free(paVar18);
         }

      }
;
      LOCK();
      lVar8 = *plVar2;
      if (lVar8 == 0) {
         *plVar2 = (long)&_hb_NullPool;
      }

      UNLOCK();
   }
 while ( lVar8 != 0 );
   LAB_0010f22a:paVar18 = (accelerator_t*)&_hb_NullPool;
   LAB_0010ee11:psVar9 = *(short**)( this + 0xf0 );
   *(accelerator_t**)( this + 0xf8 ) = paVar18;
   if (( ( *psVar9 == 0x100 ) && ( 0x10002 < ( ushort )(psVar9[1] << 8 | (ushort)psVar9[1] >> 8) + 0x10000 ) ) && ( uVar5 = uVar5 != 0 )) {
      puVar15 = (undefined*)( (long)psVar9 + ( ulong )(uVar5 >> 0x18 | ( uVar5 & 0xff0000 ) >> 8 | ( uVar5 & 0xff00 ) << 8 | uVar5 << 0x18) );
   }
 else {
      puVar15 = &_hb_NullPool;
   }

   iVar6 = *(int*)( this + 0x88 );
   *(undefined**)( this + 0x100 ) = puVar15;
   if (( iVar6 == 1 ) && ( *(int*)( *(long*)( this + 0x90 ) + 0x78 ) != 0 )) {
      uVar5 = *(uint*)( puVar15 + 2 );
      puVar19 = &_hb_NullPool;
      if (uVar5 != 0) {
         puVar19 = puVar15 + ( uVar5 >> 0x18 | ( uVar5 & 0xff0000 ) >> 8 | ( uVar5 & 0xff00 ) << 8 | uVar5 << 0x18 );
      }

      uVar12 = *(ushort*)( puVar19 + 2 ) << 8 | *(ushort*)( puVar19 + 2 ) >> 8;
      puVar17 = (undefined4*)malloc((ulong)uVar12 * 4);
      uVar7 = _LC18;
      if (puVar17 != (undefined4*)0x0) {
         if (uVar12 != 0) {
            puVar1 = puVar17 + 1;
            puVar21 = puVar17;
            if (( (int)( puVar1 + ( uVar12 - 1 ) ) - (int)puVar17 & 4U ) == 0) goto LAB_0010f080;
            *puVar17 = _LC18;
            for (puVar21 = puVar1; puVar21 != puVar1 + ( uVar12 - 1 ); puVar21 = puVar21 + 2) {
               LAB_0010f080:*puVar21 = uVar7;
               puVar21[1] = uVar7;
            }

         }

         goto LAB_0010ee4b;
      }

   }

   puVar17 = (undefined4*)0x0;
   LAB_0010ee4b:*(undefined4**)( this + 0x108 ) = puVar17;
   uVar5 = *(uint*)( param_3 + 0x60 );
   puVar20 = *(uint**)( param_3 + 0x70 );
   *(undefined1(*) [16])( this + 0x110 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x120 ) = 0;
   if (uVar5 != 0) {
      uVar22 = 0;
      puVar3 = puVar20 + (ulong)uVar5 * 5;
      puVar16 = puVar20;
      do {
         uVar5 = *puVar16;
         puVar16 = puVar16 + 5;
         uVar22 = uVar22 | 1L << ( ( byte )(uVar5 >> 4) & 0x3f );
      }
 while ( puVar3 != puVar16 );
      *(ulong*)( this + 0x110 ) = uVar22;
      uVar22 = 0;
      puVar16 = puVar20;
      do {
         uVar5 = *puVar16;
         puVar16 = puVar16 + 5;
         uVar22 = uVar22 | 1L << ( (byte)uVar5 & 0x3f );
      }
 while ( puVar3 != puVar16 );
      *(ulong*)( this + 0x118 ) = uVar22;
      uVar22 = 0;
      do {
         uVar5 = *puVar20;
         puVar20 = puVar20 + 5;
         uVar22 = uVar22 | 1L << ( ( byte )(uVar5 >> 9) & 0x3f );
      }
 while ( puVar3 != puVar20 );
      *(ulong*)( this + 0x120 ) = uVar22;
   }

   *(undefined4*)( this + 0x128 ) = *(undefined4*)( param_3 + 0x38 );
   *(undefined8*)( this + 300 ) = 0xffffffff00000001;
   *(undefined8*)( this + 0x134 ) = 0x4000000000;
   hVar23 = (hb_ot_apply_context_t)0x0;
   if (**(short**)( this + 0xf0 ) == 0x100) {
      hVar23 = ( hb_ot_apply_context_t )(( *(short**)( this + 0xf0 ) )[2] != 0);
   }

   this[0x13c] = hVar23;
   uVar4 = _LC19;
   hVar23 = ( hb_ot_apply_context_t )(iVar6 == 1);
   *(undefined8*)( this + 0x148 ) = 0xffffffff;
   *(hb_ot_apply_context_t**)( this + 0x10 ) = this;
   *(undefined4*)( this + 0x13d ) = 0x101;
   *(undefined4*)( this + 0x144 ) = 0xffffffff;
   uVar7 = *(undefined4*)( *(long*)( this + 0xa0 ) + 0x60 );
   *(undefined8*)( this + 0x18 ) = uVar4;
   *(undefined4*)( this + 0x40 ) = uVar7;
   *(undefined8*)( this + 0x28 ) = 0;
   this[0x20] = hVar23;
   this[0x21] = (hb_ot_apply_context_t)0x1;
   this[0x22] = hVar23;
   *(undefined2*)( this + 0x23 ) = 0;
   *(hb_ot_apply_context_t**)( this + 0x50 ) = this;
   *(undefined4*)( this + 0x80 ) = uVar7;
   *(undefined8*)( this + 0x68 ) = 0;
   *(undefined2*)( this + 0x60 ) = 0x101;
   this[0x62] = hVar23;
   *(undefined8*)( this + 0x58 ) = uVar11;
   *(undefined2*)( this + 99 ) = 0;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x70 ) = (undefined1[16])0x0;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* bool OT::Layout::Common::Coverage::serialize<hb_sorted_array_t<OT::HBGlyphID16 const>,
   (void*)0>(hb_serialize_context_t*, hb_sorted_array_t<OT::HBGlyphID16 const>) */bool OT::Layout::Common::Coverage::serialize<hb_sorted_array_t<OT::HBGlyphID16_const>,(void*)0>(undefined2 *param_1, long param_2, ushort *param_3, uint param_4) {
   _func_int_void_ptr_void_ptr *p_Var1;
   ushort *puVar2;
   long lVar3;
   ushort uVar4;
   ushort uVar5;
   bool bVar6;
   undefined2 uVar7;
   ushort uVar8;
   void *pvVar9;
   undefined2 *puVar10;
   _func_int_void_ptr_void_ptr *p_Var11;
   uint uVar12;
   undefined2 *puVar13;
   uint uVar14;
   size_t sVar15;
   ushort *puVar16;
   int iVar17;
   uint uVar18;
   undefined2 *__s;
   ulong uVar19;
   bool bVar20;
   if (*(int*)( param_2 + 0x2c ) != 0) {
      return false;
   }

   puVar13 = param_1 + 1;
   pvVar9 = *(void**)( param_2 + 8 );
   uVar19 = (long)puVar13 - (long)pvVar9;
   if (( uVar19 < 0x80000000 ) && ( puVar13 <= *(undefined2**)( param_2 + 0x10 ) )) {
      puVar10 = puVar13;
      if ((int)uVar19 != 0) {
         memset(pvVar9, 0, uVar19);
         pvVar9 = *(void**)( param_2 + 8 );
         puVar10 = (undefined2*)( uVar19 + (long)pvVar9 );
      }

      *(undefined2**)( param_2 + 8 ) = puVar10;
      if (pvVar9 == (void*)0x0) {
         return false;
      }

      puVar2 = param_3 + param_4;
      uVar18 = 0;
      if (puVar2 != param_3) {
         uVar8 = *param_3;
         bVar6 = false;
         iVar17 = 0;
         puVar16 = param_3;
         do {
            iVar17 = iVar17 + 1;
            do {
               puVar16 = puVar16 + 1;
               uVar4 = uVar8 << 8;
               uVar5 = uVar8 >> 8;
               if (puVar2 == puVar16) {
                  if (bVar6) goto LAB_0010f379;
                  uVar18 = iVar17 * 3;
                  goto LAB_0010f49c;
               }

               uVar8 = *puVar16;
               uVar14 = ( uint )(ushort)(uVar8 << 8 | uVar8 >> 8);
               uVar18 = ( uint )(uVar4 | uVar5);
               if (uVar14 < uVar18) {
                  bVar6 = true;
               }

            }
 while ( uVar14 == uVar18 + 1 );
         }
 while ( true );
      }

      LAB_0010f49c:if (uVar18 < param_4) {
         LAB_0010f379:*param_1 = 0x200;
         if (*(int*)( param_2 + 0x2c ) != 0) {
            return false;
         }

         pvVar9 = *(void**)( param_2 + 8 );
         puVar10 = param_1 + 2;
         sVar15 = (long)puVar10 - (long)pvVar9;
         if (( sVar15 < 0x80000000 ) && ( puVar10 <= *(undefined2**)( param_2 + 0x10 ) )) {
            __s = puVar10;
            if ((int)sVar15 != 0) {
               memset(pvVar9, 0, sVar15);
               pvVar9 = *(void**)( param_2 + 8 );
               __s = (undefined2*)( (long)pvVar9 + sVar15 );
            }

            *(undefined2**)( param_2 + 8 ) = __s;
            if (pvVar9 == (void*)0x0) {
               return false;
            }

            uVar18 = 0;
            if (puVar2 != param_3) {
               uVar14 = 0xfffffffe;
               uVar18 = 0;
               puVar16 = param_3;
               do {
                  uVar12 = uVar14 + 1;
                  uVar8 = *puVar16 << 8 | *puVar16 >> 8;
                  uVar14 = (uint)uVar8;
                  puVar16 = puVar16 + 1;
                  uVar18 = uVar18 + ( uVar8 != uVar12 );
               }
 while ( puVar16 != puVar2 );
            }

            if (*(int*)( param_2 + 0x2c ) != 0) {
               return false;
            }

            sVar15 = (long)puVar10 - (long)__s;
            if (( sVar15 < 0x80000000 ) && ( puVar10 <= *(undefined2**)( param_2 + 0x10 ) )) {
               if ((int)sVar15 == 0) {
                  *(undefined2**)( param_2 + 8 ) = puVar10;
               }
 else {
                  memset(__s, 0, sVar15);
                  lVar3 = *(long*)( param_2 + 8 );
                  *(size_t*)( param_2 + 8 ) = sVar15 + lVar3;
                  if (lVar3 == 0) {
                     return false;
                  }

               }

               uVar8 = (ushort)uVar18;
               param_1[1] = uVar8 << 8 | uVar8 >> 8;
               if (uVar18 != ( ushort )(( uVar8 >> 8 ) << 8 | uVar8 & 0xff)) goto LAB_0010f48a;
               if (*(int*)( param_2 + 0x2c ) != 0) {
                  return false;
               }

               pvVar9 = *(void**)( param_2 + 8 );
               uVar19 = ( ulong )(uVar18 * 6 + 2) + (long)puVar13;
               sVar15 = uVar19 - (long)pvVar9;
               if (( sVar15 < 0x80000000 ) && ( uVar19 <= *(ulong*)( param_2 + 0x10 ) )) {
                  if ((int)sVar15 != 0) {
                     memset(pvVar9, 0, sVar15);
                     pvVar9 = *(void**)( param_2 + 8 );
                     uVar19 = (long)pvVar9 + sVar15;
                  }

                  *(ulong*)( param_2 + 8 ) = uVar19;
                  if (pvVar9 == (void*)0x0) {
                     return false;
                  }

                  if (uVar18 == 0) {
                     return true;
                  }

                  if (puVar2 == param_3) {
                     return true;
                  }

                  uVar19 = 0xffffffff;
                  bVar6 = false;
                  p_Var11 = (_func_int_void_ptr_void_ptr*)0x0;
                  uVar18 = 0xfffffffe;
                  do {
                     uVar8 = param_3[(long)p_Var11];
                     uVar14 = ( uint )(ushort)(uVar8 << 8 | uVar8 >> 8);
                     if (uVar18 + 1 != uVar14) {
                        if (( uVar18 != 0xfffffffe ) && ( uVar14 < uVar18 + 1 )) {
                           bVar6 = true;
                        }

                        uVar19 = ( ulong )((int)uVar19 + 1);
                        param_1[uVar19 * 3 + 2] = uVar8;
                        param_1[uVar19 * 3 + 4] = (ushort)p_Var11 << 8 | (ushort)p_Var11 >> 8;
                     }

                     param_1[uVar19 * 3 + 3] = uVar8;
                     p_Var1 = p_Var11 + 1;
                     bVar20 = (_func_int_void_ptr_void_ptr*)( ( ulong )((long)puVar2 + ( -2 - (long)param_3 )) >> 1 ) != p_Var11;
                     p_Var11 = p_Var1;
                     uVar18 = uVar14;
                  }
 while ( bVar20 );
                  if (!bVar6) {
                     return true;
                  }

                  uVar8 = param_1[1];
                  if (uVar8 == 0) {
                     return true;
                  }

                  sort_r_simple<>(puVar10, ( ulong )(ushort)(uVar8 << 8 | uVar8 >> 8), 0x1082c0, p_Var1);
                  return true;
               }

            }

         }

      }
 else {
         *param_1 = 0x100;
         if (*(int*)( param_2 + 0x2c ) != 0) {
            return false;
         }

         pvVar9 = *(void**)( param_2 + 8 );
         puVar10 = param_1 + 2;
         uVar19 = (long)puVar10 - (long)pvVar9;
         if (( uVar19 < 0x80000000 ) && ( puVar10 <= *(undefined2**)( param_2 + 0x10 ) )) {
            if ((int)uVar19 != 0) {
               memset(pvVar9, 0, uVar19);
               pvVar9 = *(void**)( param_2 + 8 );
               puVar10 = (undefined2*)( (long)pvVar9 + uVar19 );
            }

            *(undefined2**)( param_2 + 8 ) = puVar10;
            if (pvVar9 == (void*)0x0) {
               return false;
            }

            uVar8 = (ushort)param_4;
            param_1[1] = uVar8 << 8 | uVar8 >> 8;
            uVar8 = ( uVar8 >> 8 ) << 8 | uVar8 & 0xff;
            uVar18 = (uint)uVar8;
            if (param_4 != uVar8) {
               LAB_0010f48a:*(uint*)( param_2 + 0x2c ) = *(uint*)( param_2 + 0x2c ) | 0x10;
               return false;
            }

            if (*(int*)( param_2 + 0x2c ) != 0) {
               return false;
            }

            lVar3 = *(long*)( param_2 + 8 );
            uVar19 = ( ulong )(uVar8 + 2 + (uint)uVar8) + (long)puVar13;
            if (( uVar19 - lVar3 < 0x80000000 ) && ( uVar19 <= *(ulong*)( param_2 + 0x10 ) )) {
               *(ulong*)( param_2 + 8 ) = uVar19;
               if (lVar3 == 0) {
                  return false;
               }

               puVar13 = param_1 + param_4;
               if (uVar8 != 0) {
                  do {
                     puVar10 = param_1;
                     uVar8 = *param_3;
                     param_1 = puVar10 + 1;
                     uVar18 = uVar18 - 1;
                     param_3 = param_3 + 1;
                     puVar10[2] = uVar8;
                     uVar7 = __hb_NullPool;
                     if (puVar13 == param_1) {
                        return true;
                     }

                  }
 while ( uVar18 != 0 );
                  if (( (int)puVar13 - (int)param_1 & 2U ) != 0) {
                     puVar10[3] = __hb_NullPool;
                     param_1 = puVar10 + 2;
                     if (puVar10 + 2 == puVar13) {
                        return true;
                     }

                  }

                  do {
                     param_1[2] = uVar7;
                     puVar10 = param_1 + 2;
                     param_1[3] = uVar7;
                     param_1 = puVar10;
                  }
 while ( puVar10 != puVar13 );
               }

               return true;
            }

         }

      }

   }

   *(undefined4*)( param_2 + 0x2c ) = 4;
   return false;
}
/* OT::ArrayOf<OT::HBGlyphID16, OT::IntType<unsigned short, 2u>
   >::serialize(hb_serialize_context_t*, unsigned int, bool) */bool OT::ArrayOf<OT::HBGlyphID16,OT::IntType<unsigned_short,2u>>::serialize(ArrayOf<OT::HBGlyphID16,OT::IntType<unsigned_short,2u>> *this, hb_serialize_context_t *param_1, uint param_2, bool param_3) {
   ushort uVar1;
   ArrayOf<OT::HBGlyphID16,OT::IntType<unsigned_short,2u>> *pAVar2;
   void *pvVar3;
   ulong uVar4;
   if (*(int*)( param_1 + 0x2c ) != 0) {
      return false;
   }

   pAVar2 = this + 2;
   pvVar3 = *(void**)( param_1 + 8 );
   uVar4 = (long)pAVar2 - (long)pvVar3;
   if (( uVar4 < 0x80000000 ) && ( pAVar2 <= *(ArrayOf<OT::HBGlyphID16,OT::IntType<unsigned_short,2u>>**)( param_1 + 0x10 ) )) {
      if ((int)uVar4 != 0) {
         memset(pvVar3, 0, uVar4);
         pvVar3 = *(void**)( param_1 + 8 );
         pAVar2 = (ArrayOf<OT::HBGlyphID16,OT::IntType<unsigned_short,2u>>*)( (long)pvVar3 + uVar4 );
      }

      *(ArrayOf<OT::HBGlyphID16,OT::IntType<unsigned_short,2u>>**)( param_1 + 8 ) = pAVar2;
      if (pvVar3 == (void*)0x0) {
         return false;
      }

      uVar1 = (ushort)param_2;
      *(ushort*)this = uVar1 << 8 | uVar1 >> 8;
      if (( ushort )(( uVar1 >> 8 ) << 8 | uVar1 & 0xff) != param_2) {
         *(uint*)( param_1 + 0x2c ) = *(uint*)( param_1 + 0x2c ) | 0x10;
         return false;
      }

      if (*(int*)( param_1 + 0x2c ) != 0) {
         return false;
      }

      pvVar3 = *(void**)( param_1 + 8 );
      pAVar2 = this + ( param_2 * 2 + 2 );
      uVar4 = (long)pAVar2 - (long)pvVar3;
      if (( uVar4 < 0x80000000 ) && ( pAVar2 <= *(ArrayOf<OT::HBGlyphID16,OT::IntType<unsigned_short,2u>>**)( param_1 + 0x10 ) )) {
         if (( param_3 ) && ( (int)uVar4 != 0 )) {
            memset(pvVar3, 0, uVar4);
            pvVar3 = *(void**)( param_1 + 8 );
            *(ulong*)( param_1 + 8 ) = (long)pvVar3 + uVar4;
         }
 else {
            *(ArrayOf<OT::HBGlyphID16,OT::IntType<unsigned_short,2u>>**)( param_1 + 8 ) = pAVar2;
         }

         return pvVar3 != (void*)0x0;
      }

   }

   *(undefined4*)( param_1 + 0x2c ) = 4;
   return false;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* bool 
   OT::Layout::GSUB_impl::SingleSubstFormat2_4<OT::Layout::SmallTypes>::serialize<hb_zip_iter_t<hb_sorted_array_t<OT::HBGlyphID16>,
   hb_array_t<OT::HBGlyphID16> >, (void*)0>(hb_serialize_context_t*,
   hb_zip_iter_t<hb_sorted_array_t<OT::HBGlyphID16>, hb_array_t<OT::HBGlyphID16> >) */bool OT::Layout::GSUB_impl::SingleSubstFormat2_4<OT::Layout::SmallTypes>::serialize<hb_zip_iter_t<hb_sorted_array_t<OT::HBGlyphID16>,hb_array_t<OT::HBGlyphID16>>,(void*)0>(long param_1, hb_serialize_context_t *param_2) {
   uint uVar1;
   long lVar2;
   undefined8 uVar3;
   uint uVar4;
   undefined8 uVar5;
   undefined2 uVar6;
   char cVar7;
   ushort uVar8;
   int iVar9;
   void *__s;
   long lVar10;
   undefined8 *puVar11;
   undefined4 *puVar12;
   void *pvVar13;
   long lVar14;
   uint uVar15;
   uint uVar16;
   void *__s_00;
   undefined8 uVar17;
   ulong uVar18;
   uint in_stack_00000010;
   undefined2 *in_stack_00000018;
   uint in_stack_00000020;
   if (*(int*)( param_2 + 0x2c ) != 0) {
      return false;
   }

   __s = *(void**)( param_2 + 8 );
   pvVar13 = (void*)( param_1 + 6 );
   uVar18 = (long)pvVar13 - (long)__s;
   if (( 0x7fffffff < uVar18 ) || ( *(void**)( param_2 + 0x10 ) < pvVar13 )) {
      LAB_0010f9e0:*(undefined4*)( param_2 + 0x2c ) = 4;
      return false;
   }

   __s_00 = pvVar13;
   if ((int)uVar18 != 0) {
      memset(__s, 0, uVar18);
      __s = *(void**)( param_2 + 8 );
      __s_00 = (void*)( (long)__s + uVar18 );
   }

   *(void**)( param_2 + 8 ) = __s_00;
   if (__s == (void*)0x0) {
      return false;
   }

   uVar15 = in_stack_00000010;
   if (in_stack_00000020 < in_stack_00000010) {
      uVar15 = in_stack_00000020;
   }

   if (*(int*)( param_2 + 0x2c ) != 0) {
      return false;
   }

   uVar18 = (long)pvVar13 - (long)__s_00;
   if (( 0x7fffffff < uVar18 ) || ( *(void**)( param_2 + 0x10 ) < pvVar13 )) goto LAB_0010f9e0;
   if ((int)uVar18 == 0) {
      *(void**)( param_2 + 8 ) = pvVar13;
   }
 else {
      memset(__s_00, 0, uVar18);
      lVar2 = *(long*)( param_2 + 8 );
      *(ulong*)( param_2 + 8 ) = uVar18 + lVar2;
      if (lVar2 == 0) {
         return false;
      }

   }

   uVar8 = (ushort)uVar15;
   *(ushort*)( param_1 + 4 ) = uVar8 << 8 | uVar8 >> 8;
   if (( ushort )(( uVar8 >> 8 ) << 8 | uVar8 & 0xff) != uVar15) {
      *(uint*)( param_2 + 0x2c ) = *(uint*)( param_2 + 0x2c ) | 0x10;
      return false;
   }

   if (*(int*)( param_2 + 0x2c ) != 0) {
      return false;
   }

   lVar2 = *(long*)( param_2 + 8 );
   uVar18 = ( ulong )(uVar15 * 2 + 2) + param_1 + 4;
   if (( 0x7fffffff < uVar18 - lVar2 ) || ( *(ulong*)( param_2 + 0x10 ) < uVar18 )) goto LAB_0010f9e0;
   *(ulong*)( param_2 + 8 ) = uVar18;
   uVar6 = __hb_NullPool;
   if (lVar2 == 0) {
      return false;
   }

   if (uVar15 != 0) {
      lVar2 = param_1 + (ulong)uVar15 * 2;
      lVar10 = param_1;
      do {
         if (in_stack_00000020 == 0) goto LAB_0010fc68;
         if (in_stack_00000010 == 0) {
            __hb_CrapPool = CONCAT62(_hb_CrapPool_2, uVar6);
            *(undefined2*)( lVar10 + 6 ) = *in_stack_00000018;
         }
 else {
            in_stack_00000010 = in_stack_00000010 - 1;
            *(undefined2*)( lVar10 + 6 ) = *in_stack_00000018;
         }

         lVar10 = lVar10 + 2;
         in_stack_00000020 = in_stack_00000020 - 1;
         in_stack_00000018 = in_stack_00000018 + 1;
      }
 while ( lVar10 != lVar2 );
   }

   LAB_0010fa6a:*(undefined2*)( param_1 + 2 ) = 0;
   if (*(int*)( param_2 + 0x2c ) == 0) {
      puVar11 = (undefined8*)hb_pool_t<hb_serialize_context_t::object_t,32u>::alloc((hb_pool_t<hb_serialize_context_t::object_t,32u>*)( param_2 + 0x30 ));
      uVar17 = *(undefined8*)( param_2 + 8 );
      if (puVar11 == (undefined8*)0x0) {
         if (*(int*)( param_2 + 0x2c ) == 0) {
            *(undefined4*)( param_2 + 0x2c ) = 1;
         }

      }
 else {
         uVar5 = *(undefined8*)( param_2 + 0x10 );
         uVar3 = *(undefined8*)( param_2 + 0x48 );
         *puVar11 = *(undefined8*)( param_2 + 8 );
         puVar11[1] = uVar5;
         puVar11[6] = uVar3;
         *(undefined8**)( param_2 + 0x48 ) = puVar11;
      }

   }
 else {
      uVar17 = *(undefined8*)( param_2 + 8 );
   }

   cVar7 = _ZN2OT6Layout6Common8Coverage9serializeI13hb_map_iter_tI13hb_zip_iter_tI17hb_sorted_array_tINS_11HBGlyphID16EE10hb_array_tIS7_EERK10__anon_128L24hb_function_sortedness_t1ELPv0EELSG_0EEEbP22hb_serialize_context_tT_(uVar17, param_2);
   if (cVar7 == '\0') {
      hb_serialize_context_t::pop_discard(param_2);
      return false;
   }

   iVar9 = hb_serialize_context_t::pop_pack(param_2, true);
   if (*(int*)( param_2 + 0x2c ) != 0) {
      return (bool)cVar7;
   }

   if (iVar9 == 0) {
      return (bool)cVar7;
   }

   puVar11 = *(undefined8**)( param_2 + 0x48 );
   uVar15 = *(uint*)( puVar11 + 2 );
   uVar1 = *(uint*)( (long)puVar11 + 0x14 );
   if (-1 < (int)uVar15) {
      uVar4 = uVar1 + 1;
      if ((int)( uVar1 + 1 ) < 0) {
         uVar4 = 0;
      }

      uVar16 = uVar15;
      if (uVar4 <= uVar15) {
         LAB_0010fb2d:pvVar13 = (void*)puVar11[3];
         LAB_0010fb31:if (uVar1 < uVar4) {
            uVar15 = ( uVar4 - uVar1 ) * 0xc;
            if (uVar15 != 0) {
               memset((void*)( (long)pvVar13 + (ulong)uVar1 * 0xc ), 0, (ulong)uVar15);
               pvVar13 = (void*)puVar11[3];
            }

         }

         *(uint*)( (long)puVar11 + 0x14 ) = uVar4;
         puVar11 = *(undefined8**)( param_2 + 0x48 );
         puVar12 = (undefined4*)( (long)pvVar13 + ( ulong )(uVar4 - 1) * 0xc );
         goto LAB_0010fb6c;
      }

      do {
         uVar16 = ( uVar16 >> 1 ) + 8 + uVar16;
      }
 while ( uVar16 < uVar4 );
      if (uVar16 < 0x15555556) {
         pvVar13 = realloc((void*)puVar11[3], (ulong)uVar16 * 0xc);
         if (pvVar13 != (void*)0x0) {
            puVar11[3] = pvVar13;
            uVar1 = *(uint*)( (long)puVar11 + 0x14 );
            *(uint*)( puVar11 + 2 ) = uVar16;
            goto LAB_0010fb31;
         }

         if (uVar16 <= *(uint*)( puVar11 + 2 )) {
            uVar1 = *(uint*)( (long)puVar11 + 0x14 );
            goto LAB_0010fb2d;
         }

         *(uint*)( puVar11 + 2 ) = ~*(uint *)(puVar11 + 2);
         puVar11 = *(undefined8**)( param_2 + 0x48 );
      }
 else {
         *(uint*)( puVar11 + 2 ) = ~uVar15;
      }

   }

   __hb_CrapPool = CONCAT62(_DAT_00116052, __hb_NullPool);
   _memset = __hb_Null_OT_RangeRecord;
   puVar12 = (undefined4*)&_hb_CrapPool;
   LAB_0010fb6c:if (*(int*)( puVar11 + 2 ) < 0) {
      *(uint*)( param_2 + 0x2c ) = *(uint*)( param_2 + 0x2c ) | 1;
   }

   uVar17 = *puVar11;
   puVar12[2] = iVar9;
   puVar12[1] = ( (int)param_1 + 2 ) - (int)uVar17;
   *puVar12 = 2;
   return (bool)cVar7;
   LAB_0010fc68:do {
      __hb_CrapPool = CONCAT62(_hb_CrapPool_2, uVar6);
      lVar14 = lVar10 + 2;
      *(undefined2*)( lVar10 + 6 ) = uVar6;
      lVar10 = lVar14;
   }
 while ( lVar14 != lVar2 );
   goto LAB_0010fa6a;
}
/* bool 
   OT::Layout::GSUB_impl::SingleSubst::serialize<hb_zip_iter_t<hb_sorted_array_t<OT::HBGlyphID16>,
   hb_array_t<OT::HBGlyphID16> >, (void*)0>(hb_serialize_context_t*,
   hb_zip_iter_t<hb_sorted_array_t<OT::HBGlyphID16>, hb_array_t<OT::HBGlyphID16> >) */bool OT::Layout::GSUB_impl::SingleSubst::serialize<hb_zip_iter_t<hb_sorted_array_t<OT::HBGlyphID16>,hb_array_t<OT::HBGlyphID16>>,(void*)0>(undefined2 *param_1, hb_serialize_context_t *param_2) {
   hb_serialize_context_t *phVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   bool bVar4;
   char cVar5;
   undefined2 *puVar6;
   undefined8 *puVar7;
   ushort uVar8;
   void *pvVar9;
   undefined8 uVar10;
   ulong uVar11;
   hb_serialize_context_t *phVar12;
   ushort *in_stack_00000008;
   int in_stack_00000010;
   ushort *in_stack_00000018;
   int in_stack_00000020;
   if (*(int*)( param_2 + 0x2c ) != 0) {
      return false;
   }

   phVar1 = (hb_serialize_context_t*)( param_1 + 1 );
   pvVar9 = *(void**)( param_2 + 8 );
   uVar11 = (long)phVar1 - (long)pvVar9;
   if (( uVar11 < 0x80000000 ) && ( phVar1 <= *(hb_serialize_context_t**)( param_2 + 0x10 ) )) {
      phVar12 = phVar1;
      if ((int)uVar11 != 0) {
         memset(pvVar9, 0, uVar11);
         pvVar9 = *(void**)( param_2 + 8 );
         phVar12 = (hb_serialize_context_t*)( uVar11 + (long)pvVar9 );
      }

      *(hb_serialize_context_t**)( param_2 + 8 ) = phVar12;
      if (pvVar9 == (void*)0x0) {
         return false;
      }

      if (( in_stack_00000010 == 0 ) || ( in_stack_00000020 == 0 )) {
         LAB_0010fd67:*param_1 = 0x200;
         bVar4 = SingleSubstFormat2_4<OT::Layout::SmallTypes>::serialize<hb_zip_iter_t<hb_sorted_array_t<OT::HBGlyphID16>,hb_array_t<OT::HBGlyphID16>>,(void*)0>(param_1, param_2);
         return bVar4;
      }

      uVar8 = ( *in_stack_00000018 << 8 | *in_stack_00000018 >> 8 ) - ( *in_stack_00000008 << 8 | *in_stack_00000008 >> 8 );
      if (in_stack_00000010 != 1) {
         uVar11 = 0;
         do {
            if (in_stack_00000020 - 1 == uVar11) break;
            if (uVar8 != ( ushort )(( in_stack_00000018[uVar11 + 1] << 8 | in_stack_00000018[uVar11 + 1] >> 8 ) - ( in_stack_00000008[uVar11 + 1] << 8 | in_stack_00000008[uVar11 + 1] >> 8 ))) goto LAB_0010fd67;
            uVar11 = uVar11 + 1;
         }
 while ( uVar11 != in_stack_00000010 - 1 );
      }

      *param_1 = 0x100;
      if (*(int*)( param_2 + 0x2c ) != 0) {
         return false;
      }

      pvVar9 = *(void**)( param_2 + 8 );
      puVar6 = param_1 + 3;
      uVar11 = (long)puVar6 - (long)pvVar9;
      if (( uVar11 < 0x80000000 ) && ( puVar6 <= *(undefined2**)( param_2 + 0x10 ) )) {
         if ((int)uVar11 != 0) {
            memset(pvVar9, 0, uVar11);
            pvVar9 = *(void**)( param_2 + 8 );
            puVar6 = (undefined2*)( (long)pvVar9 + uVar11 );
         }

         *(undefined2**)( param_2 + 8 ) = puVar6;
         if (pvVar9 == (void*)0x0) {
            return false;
         }

         param_1[1] = 0;
         if (*(int*)( param_2 + 0x2c ) == 0) {
            puVar7 = (undefined8*)hb_pool_t<hb_serialize_context_t::object_t,32u>::alloc((hb_pool_t<hb_serialize_context_t::object_t,32u>*)( param_2 + 0x30 ));
            uVar10 = *(undefined8*)( param_2 + 8 );
            if (puVar7 == (undefined8*)0x0) {
               if (*(int*)( param_2 + 0x2c ) == 0) {
                  *(undefined4*)( param_2 + 0x2c ) = 1;
               }

            }
 else {
               uVar3 = *(undefined8*)( param_2 + 0x10 );
               uVar2 = *(undefined8*)( param_2 + 0x48 );
               *puVar7 = *(undefined8*)( param_2 + 8 );
               puVar7[1] = uVar3;
               puVar7[6] = uVar2;
               *(undefined8**)( param_2 + 0x48 ) = puVar7;
            }

         }
 else {
            uVar10 = *(undefined8*)( param_2 + 8 );
         }

         cVar5 = _ZN2OT6Layout6Common8Coverage9serializeI13hb_map_iter_tI13hb_zip_iter_tI17hb_sorted_array_tINS_11HBGlyphID16EE10hb_array_tIS7_EERK10__anon_128L24hb_function_sortedness_t1ELPv0EELSG_0EEEbP22hb_serialize_context_tT_(uVar10, param_2);
         if (cVar5 == '\0') {
            hb_serialize_context_t::pop_discard(param_2);
            return false;
         }

         OffsetTo<OT::Layout::Common::Coverage,OT::IntType<unsigned_short,2u>,void,true>::serialize_serialize<hb_sorted_array_t<OT::HBGlyphID16_const>&>(phVar1, (hb_sorted_array_t*)param_2);
         param_1[2] = uVar8 * 0x100 | uVar8 >> 8;
         if (uVar8 != ( ushort )(( uVar8 >> 8 ) << 8 | uVar8 & 0xff)) {
            *(uint*)( param_2 + 0x2c ) = *(uint*)( param_2 + 0x2c ) | 8;
            return (bool)cVar5;
         }

         return (bool)cVar5;
      }

   }

   *(undefined4*)( param_2 + 0x2c ) = 4;
   return false;
}
/* OT::Layout::GSUB_impl::Sequence<OT::Layout::SmallTypes>::apply(OT::hb_ot_apply_context_t*) const
    */undefined8 OT::Layout::GSUB_impl::Sequence<OT::Layout::SmallTypes>::apply(Sequence<OT::Layout::SmallTypes> *this, hb_ot_apply_context_t *param_1) {
   int *piVar1;
   uint *puVar2;
   byte bVar3;
   ushort uVar4;
   long lVar5;
   undefined8 *puVar6;
   undefined8 uVar7;
   char cVar8;
   ushort uVar9;
   size_t sVar10;
   ulong uVar11;
   ulong uVar12;
   undefined8 *puVar13;
   ulong uVar14;
   hb_buffer_t *phVar15;
   ushort uVar16;
   long lVar17;
   char *pcVar18;
   uint uVar19;
   long in_FS_OFFSET;
   byte bVar20;
   char local_448[1032];
   long local_40;
   bVar20 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar17 = *(long*)( param_1 + 0xa0 );
   uVar9 = *(ushort*)this << 8 | *(ushort*)this >> 8;
   lVar5 = *(long*)( lVar17 + 0xd0 );
   if (uVar9 == 1) {
      if (lVar5 != 0) {
         hb_buffer_t::sync_so_far();
         hb_buffer_t::message(*(hb_buffer_t**)( param_1 + 0xa0 ), *(hb_font_t**)( param_1 + 0x90 ), "replacing glyph at %u (multiple substitution)");
      }

      uVar9 = *(ushort*)( this + 2 ) << 8 | *(ushort*)( this + 2 ) >> 8;
      hb_ot_apply_context_t::_set_glyph_class(param_1, (uint)uVar9, 0, false, false);
      lVar17 = *(long*)( param_1 + 0xa0 );
      cVar8 = hb_buffer_t::make_room_for((uint)lVar17, 1);
      if (cVar8 != '\0') {
         puVar6 = *(undefined8**)( lVar17 + 0x78 );
         uVar19 = *(uint*)( lVar17 + 100 );
         if (*(uint*)( lVar17 + 0x5c ) < *(uint*)( lVar17 + 0x60 )) {
            puVar13 = (undefined8*)( *(long*)( lVar17 + 0x70 ) + ( ulong ) * (uint*)( lVar17 + 0x5c ) * 0x14 );
         }
 else {
            puVar13 = puVar6;
            if (uVar19 != 0) {
               puVar13 = (undefined8*)( (long)puVar6 + ( ulong )(uVar19 - 1) * 0x14 );
            }

         }

         uVar7 = puVar13[1];
         puVar2 = (uint*)( (long)puVar6 + (ulong)uVar19 * 0x14 );
         *(undefined8*)puVar2 = *puVar13;
         *(undefined8*)( puVar2 + 2 ) = uVar7;
         uVar19 = *(uint*)( puVar13 + 2 );
         *puVar2 = (uint)uVar9;
         puVar2[4] = uVar19;
         *(int*)( lVar17 + 0x5c ) = *(int*)( lVar17 + 0x5c ) + 1;
         *(int*)( lVar17 + 100 ) = *(int*)( lVar17 + 100 ) + 1;
      }

      phVar15 = *(hb_buffer_t**)( param_1 + 0xa0 );
      if (*(long*)( phVar15 + 0xd0 ) != 0) {
         hb_buffer_t::message(phVar15, *(hb_font_t**)( param_1 + 0x90 ), "replaced glyph at %u (multiple substitution)", ( ulong )(*(int*)( phVar15 + 0x5c ) - 1));
      }

   }
 else if (uVar9 == 0) {
      if (lVar5 != 0) {
         hb_buffer_t::sync_so_far();
         hb_buffer_t::message(*(hb_buffer_t**)( param_1 + 0xa0 ), *(hb_font_t**)( param_1 + 0x90 ), "deleting glyph at %u (multiple substitution)", ( ulong ) * (uint*)( *(hb_buffer_t**)( param_1 + 0xa0 ) + 0x5c ));
      }

      hb_buffer_t::delete_glyph();
      if (*(long*)( *(long*)( param_1 + 0xa0 ) + 0xd0 ) != 0) {
         hb_buffer_t::sync_so_far();
         hb_buffer_t::message(*(hb_buffer_t**)( param_1 + 0xa0 ), *(hb_font_t**)( param_1 + 0x90 ), "deleted glyph at %u (multiple substitution)", ( ulong ) * (uint*)( *(hb_buffer_t**)( param_1 + 0xa0 ) + 0x5c ));
      }

   }
 else {
      if (lVar5 != 0) {
         hb_buffer_t::sync_so_far();
         hb_buffer_t::message(*(hb_buffer_t**)( param_1 + 0xa0 ), *(hb_font_t**)( param_1 + 0x90 ), "multiplying glyph at %u");
         lVar17 = *(long*)( param_1 + 0xa0 );
      }

      lVar17 = *(long*)( lVar17 + 0x70 ) + ( ulong ) * (uint*)( lVar17 + 0x5c ) * 0x14;
      uVar4 = *(ushort*)( lVar17 + 0xc );
      bVar3 = *(byte*)( lVar17 + 0xe );
      lVar17 = 0;
      do {
         if (bVar3 >> 5 == 0) {
            *(byte*)( *(long*)( *(long*)( param_1 + 0xa0 ) + 0x70 ) + ( ulong ) * (uint*)( *(long*)( param_1 + 0xa0 ) + 0x5c ) * 0x14 + 0xe ) = (byte)lVar17 & 0xf;
         }

         uVar16 = *(ushort*)( this + lVar17 * 2 + 2 ) << 8 | *(ushort*)( this + lVar17 * 2 + 2 ) >> 8;
         hb_ot_apply_context_t::_set_glyph_class(param_1, (uint)uVar16, ( uVar4 >> 2 & 1 ) * 2, false, true);
         lVar5 = *(long*)( param_1 + 0xa0 );
         cVar8 = hb_buffer_t::make_room_for((uint)lVar5, 0);
         if (cVar8 != '\0') {
            puVar6 = *(undefined8**)( lVar5 + 0x78 );
            uVar19 = *(uint*)( lVar5 + 100 );
            if (*(uint*)( lVar5 + 0x5c ) < *(uint*)( lVar5 + 0x60 )) {
               puVar13 = (undefined8*)( *(long*)( lVar5 + 0x70 ) + ( ulong ) * (uint*)( lVar5 + 0x5c ) * 0x14 );
            }
 else {
               puVar13 = puVar6;
               if (uVar19 != 0) {
                  puVar13 = (undefined8*)( (long)puVar6 + ( ulong )(uVar19 - 1) * 0x14 );
               }

            }

            uVar7 = puVar13[1];
            puVar2 = (uint*)( (long)puVar6 + (ulong)uVar19 * 0x14 );
            *(undefined8*)puVar2 = *puVar13;
            *(undefined8*)( puVar2 + 2 ) = uVar7;
            uVar19 = *(uint*)( puVar13 + 2 );
            *puVar2 = (uint)uVar16;
            puVar2[4] = uVar19;
            *(int*)( lVar5 + 100 ) = *(int*)( lVar5 + 100 ) + 1;
         }

         lVar17 = lVar17 + 1;
      }
 while ( (uint)lVar17 < (uint)uVar9 );
      lVar17 = *(long*)( param_1 + 0xa0 );
      piVar1 = (int*)( lVar17 + 0x5c );
      *piVar1 = *piVar1 + 1;
      if (*(long*)( lVar17 + 0xd0 ) != 0) {
         hb_buffer_t::sync_so_far();
         uVar14 = 0x400;
         pcVar18 = local_448;
         for (lVar17 = 0x80; lVar17 != 0; lVar17 = lVar17 + -1) {
            for (int i = 0; i < 8; i++) {
               pcVar18[i] = '\0';
            }

            pcVar18 = pcVar18 + (ulong)bVar20 * -0x10 + 8;
         }

         phVar15 = *(hb_buffer_t**)( param_1 + 0xa0 );
         uVar19 = *(uint*)( phVar15 + 0x5c ) - (uint)uVar9;
         pcVar18 = local_448;
         if (uVar19 < *(uint*)( phVar15 + 0x5c )) {
            while (true) {
               __snprintf_chk(pcVar18, 0x400 - ( (long)pcVar18 - (long)local_448 ), 2, uVar14, &_LC29, uVar19);
               sVar10 = strlen(pcVar18);
               phVar15 = *(hb_buffer_t**)( param_1 + 0xa0 );
               uVar11 = 0x400;
               if (0x3ff < uVar14) {
                  uVar11 = uVar14;
               }

               uVar12 = ( sVar10 + uVar11 ) - uVar14;
               if (uVar12 < uVar11) {
                  uVar12 = uVar11;
               }

               pcVar18 = pcVar18 + sVar10;
               uVar19 = uVar19 + 1;
               uVar14 = ( uVar14 - ( sVar10 + uVar11 ) ) + uVar12;
               if (*(uint*)( phVar15 + 0x5c ) <= uVar19) break;
               if (local_448 < pcVar18) {
                  *pcVar18 = ',';
                  uVar11 = 0x400;
                  if (0x3ff < uVar14) {
                     uVar11 = uVar14;
                  }

                  uVar12 = ( uVar11 - uVar14 ) + 1;
                  if (uVar12 < uVar11) {
                     uVar12 = uVar11;
                  }

                  pcVar18 = pcVar18 + 1;
                  uVar14 = ( ( uVar14 - 1 ) - uVar11 ) + uVar12;
               }

            }
;
         }

         hb_buffer_t::message(phVar15, *(hb_font_t**)( param_1 + 0x90 ), "multiplied glyphs at %s", local_448);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* bool 
   OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::Layout::GSUB_impl::MultipleSubstFormat1_2<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*) */bool OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::Layout::GSUB_impl::MultipleSubstFormat1_2<OT::Layout::SmallTypes>>(void *param_1, hb_ot_apply_context_t *param_2) {
   ushort uVar1;
   undefined1 uVar2;
   uint uVar3;
   ushort *puVar4;
   Coverage *this;
   Sequence<OT::Layout::SmallTypes> *this_00;
   uVar1 = *(ushort*)( (long)param_1 + 2 );
   this(Coverage * ) & _hb_NullPool;
   if (uVar1 != 0) {
      this(Coverage * )((long)param_1 + ( ulong )(ushort)(uVar1 << 8 | uVar1 >> 8));
   }

   uVar3 = Layout::Common::Coverage::get_coverage(this, *(uint*)( *(long*)( *(long*)( param_2 + 0xa0 ) + 0x70 ) + ( ulong ) * (uint*)( *(long*)( param_2 + 0xa0 ) + 0x5c ) * 0x14 ));
   if (uVar3 == 0xffffffff) {
      return false;
   }

   puVar4 = (ushort*)&_hb_NullPool;
   if (uVar3 < ( ushort )(*(ushort*)( (long)param_1 + 4 ) << 8 | *(ushort*)( (long)param_1 + 4 ) >> 8)) {
      puVar4 = (ushort*)( (long)param_1 + (ulong)uVar3 * 2 + 6 );
   }

   uVar1 = *puVar4;
   this_00 = (Sequence<OT::Layout::SmallTypes>*)&_hb_NullPool;
   if (uVar1 != 0) {
      this_00 = (Sequence<OT::Layout::SmallTypes>*)( (long)param_1 + ( ulong )(ushort)(uVar1 << 8 | uVar1 >> 8) );
   }

   uVar2 = Layout::GSUB_impl::Sequence<OT::Layout::SmallTypes>::apply(this_00, param_2);
   return (bool)uVar2;
}
/* bool 
   OT::hb_accelerate_subtables_context_t::apply_to<OT::Layout::GSUB_impl::MultipleSubstFormat1_2<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*) */bool OT::hb_accelerate_subtables_context_t::apply_to<OT::Layout::GSUB_impl::MultipleSubstFormat1_2<OT::Layout::SmallTypes>>(void *param_1, hb_ot_apply_context_t *param_2) {
   ushort uVar1;
   undefined1 uVar2;
   uint uVar3;
   ushort *puVar4;
   Coverage *this;
   Sequence<OT::Layout::SmallTypes> *this_00;
   uVar1 = *(ushort*)( (long)param_1 + 2 );
   this(Coverage * ) & _hb_NullPool;
   if (uVar1 != 0) {
      this(Coverage * )((long)param_1 + ( ulong )(ushort)(uVar1 << 8 | uVar1 >> 8));
   }

   uVar3 = Layout::Common::Coverage::get_coverage(this, *(uint*)( *(long*)( *(long*)( param_2 + 0xa0 ) + 0x70 ) + ( ulong ) * (uint*)( *(long*)( param_2 + 0xa0 ) + 0x5c ) * 0x14 ));
   if (uVar3 == 0xffffffff) {
      return false;
   }

   puVar4 = (ushort*)&_hb_NullPool;
   if (uVar3 < ( ushort )(*(ushort*)( (long)param_1 + 4 ) << 8 | *(ushort*)( (long)param_1 + 4 ) >> 8)) {
      puVar4 = (ushort*)( (long)param_1 + (ulong)uVar3 * 2 + 6 );
   }

   uVar1 = *puVar4;
   this_00 = (Sequence<OT::Layout::SmallTypes>*)&_hb_NullPool;
   if (uVar1 != 0) {
      this_00 = (Sequence<OT::Layout::SmallTypes>*)( (long)param_1 + ( ulong )(ushort)(uVar1 << 8 | uVar1 >> 8) );
   }

   uVar2 = Layout::GSUB_impl::Sequence<OT::Layout::SmallTypes>::apply(this_00, param_2);
   return (bool)uVar2;
}
/* OT::RuleSet<OT::Layout::SmallTypes>::apply(OT::hb_ot_apply_context_t*,
   OT::ContextApplyLookupContext const&) const */ulong OT::RuleSet<OT::Layout::SmallTypes>::apply(RuleSet<OT::Layout::SmallTypes> *this, hb_ot_apply_context_t *param_1, ContextApplyLookupContext *param_2) {
   uint *puVar1;
   uint *puVar2;
   int iVar3;
   code *pcVar4;
   undefined8 uVar5;
   hb_buffer_t *phVar6;
   char cVar7;
   ushort uVar8;
   ushort *puVar9;
   ulong uVar10;
   short sVar11;
   hb_ot_apply_context_t hVar12;
   uint uVar13;
   hb_ot_apply_context_t *phVar14;
   RuleSet<OT::Layout::SmallTypes> *pRVar15;
   long lVar16;
   uint uVar17;
   ushort uVar18;
   RuleSet<OT::Layout::SmallTypes> *pRVar19;
   uint local_40;
   uint local_3c;
   uVar8 = *(ushort*)this << 8 | *(ushort*)this >> 8;
   if (uVar8 < 5) {
      LAB_00110c16:if (uVar8 == 0) {
         return 0;
      }

      pRVar19 = this + 2;
      while (true) {
         uVar18 = *(ushort*)pRVar19;
         pRVar15 = (RuleSet<OT::Layout::SmallTypes>*)&_hb_NullPool;
         if (uVar18 != 0) {
            pRVar15 = this + ( ushort )(uVar18 << 8 | uVar18 >> 8);
         }

         uVar10 = Rule<OT::Layout::SmallTypes>::apply((hb_ot_apply_context_t*)pRVar15, (ContextApplyLookupContext*)param_1);
         if ((char)uVar10 != '\0') break;
         pRVar19 = pRVar19 + 2;
         if (pRVar19 == this + ( ulong )(uVar8 - 1) * 2 + 4) {
            return 0;
         }

      }
;
      return uVar10;
   }

   lVar16 = *(long*)( *(long*)( param_1 + 0x10 ) + 0xa0 );
   uVar13 = *(uint*)( *(long*)( param_1 + 0xa0 ) + 0x5c );
   uVar10 = (ulong)uVar13;
   hVar12 = (hb_ot_apply_context_t)0x0;
   iVar3 = *(int*)( lVar16 + 0x60 );
   *(uint*)( param_1 + 8 ) = uVar13;
   *(int*)( param_1 + 0x40 ) = iVar3;
   if (uVar13 == *(uint*)( lVar16 + 0x5c )) {
      hVar12 = *(hb_ot_apply_context_t*)( *(long*)( lVar16 + 0x70 ) + (ulong)uVar13 * 0x14 + 0xf );
   }

   if (param_1[0x23] == (hb_ot_apply_context_t)0x0) {
      hVar12 = (hb_ot_apply_context_t)0x0;
   }

   *(code**)( param_1 + 0x28 ) = match_always;
   *(undefined1(*) [16])( param_1 + 0x30 ) = (undefined1[16])0x0;
   param_1[0x24] = hVar12;
   while ((int)uVar10 < iVar3 + -1) {
      uVar13 = (int)uVar10 + 1;
      uVar10 = (ulong)uVar13;
      *(uint*)( param_1 + 8 ) = uVar13;
      puVar1 = (uint*)( *(long*)( *(long*)( *(long*)( param_1 + 0x10 ) + 0xa0 ) + 0x70 ) + uVar10 * 0x14 );
      uVar18 = (ushort)puVar1[3];
      uVar13 = *(uint*)( param_1 + 0x18 ) & (uint)uVar18;
      if (( uVar13 & 0xe ) == 0) {
         uVar17 = 0;
         if (( uVar18 & 8 ) == 0) {
            LAB_00110709:uVar18 = (ushort)puVar1[4];
            sVar11 = 0;
            if (( ( uVar18 & 0x20 ) != 0 ) && ( ( puVar1[3] & 0x10 ) == 0 )) {
               if (param_1[0x20] == (hb_ot_apply_context_t)0x0) {
                  if (( uVar18 & 0x1f ) == 1) {
                     sVar11 = 0;
                     if (( uVar18 & 0x200 ) != 0) goto LAB_00110750;
                     if (param_1[0x21] == (hb_ot_apply_context_t)0x0) goto LAB_00110ddb;
                  }

               }
 else if (( param_1[0x21] == (hb_ot_apply_context_t)0x0 ) && ( ( uVar18 & 0x1f ) == 1 )) {
                  LAB_00110ddb:sVar11 = 0;
                  if (( uVar18 & 0x100 ) != 0) goto LAB_00110750;
               }

               if (param_1[0x22] == (hb_ot_apply_context_t)0x0) {
                  sVar11 = ( ( uVar18 >> 6 ^ 1 ) & 1 ) * 2;
               }
 else {
                  sVar11 = 2;
               }

            }

            LAB_00110750:puVar9 = *(ushort**)( param_1 + 0x38 );
            if (puVar9 != (ushort*)0x0) {
               uVar17 = ( uint )(ushort)(*puVar9 << 8 | *puVar9 >> 8);
            }

            if (( ( puVar1[1] & *(uint*)( param_1 + 0x1c ) ) != 0 ) && ( ( param_1[0x24] == (hb_ot_apply_context_t)0x0 || ( param_1[0x24] == *(hb_ot_apply_context_t*)( (long)puVar1 + 0xf ) ) ) )) {
               if (*(code**)( param_1 + 0x28 ) == (code*)0x0) {
                  if (sVar11 != 0) goto LAB_00110adf;
               }
 else {
                  cVar7 = ( **(code**)( param_1 + 0x28 ) )(puVar1, uVar17, *(undefined8*)( param_1 + 0x30 ));
                  if (cVar7 == '\0') goto LAB_00110adb;
                  puVar9 = *(ushort**)( param_1 + 0x38 );
               }

               if (puVar9 != (ushort*)0x0) {
                  *(ushort**)( param_1 + 0x38 ) = puVar9 + 1;
               }

               local_40 = *(uint*)( param_1 + 8 );
               puVar1 = (uint*)( *(long*)( *(long*)( param_1 + 0xa0 ) + 0x70 ) + (ulong)local_40 * 0x14 );
               uVar18 = (ushort)puVar1[3];
               if (( ( *(uint*)( param_1 + 0x18 ) & (uint)uVar18 & 0xe ) == 0 ) && ( ( ( uVar18 & 8 ) == 0 || ( cVar7 = hb_ot_apply_context_t::match_properties_mark(*(hb_ot_apply_context_t**)( *(long*)( param_1 + 0x10 ) + 0xf8 ), *puVar1, (uint)uVar18, *(uint*)( param_1 + 0x18 )) ),cVar7 != '\0' ) )) {
                  uVar13 = puVar1[4];
                  if (( ( uVar13 & 0x20 ) != 0 ) && ( ( puVar1[3] & 0x10 ) == 0 )) {
                     if (param_1[0x20] == (hb_ot_apply_context_t)0x0) {
                        if (( uVar13 & 0x1f ) == 1) {
                           if (( uVar13 & 0x200 ) != 0) goto LAB_00110830;
                           if (param_1[0x21] == (hb_ot_apply_context_t)0x0) goto LAB_00110d93;
                        }

                     }
 else if (( param_1[0x21] == (hb_ot_apply_context_t)0x0 ) && ( ( uVar13 & 0x1f ) == 1 )) {
                        LAB_00110d93:if (( uVar13 & 0x100 ) != 0) goto LAB_00110830;
                     }

                     if (( param_1[0x22] != (hb_ot_apply_context_t)0x0 ) || ( ( uVar13 & 0x40 ) == 0 )) goto LAB_00110c08;
                  }

                  LAB_00110830:iVar3 = *(int*)( param_1 + 0x40 );
                  goto LAB_00110837;
               }

               LAB_00110c08:uVar8 = *(ushort*)this << 8 | *(ushort*)this >> 8;
               goto LAB_00110c16;
            }

            LAB_00110adb:if (sVar11 == 0) break;
         }
 else {
            uVar17 = uVar13 & 0xe;
            cVar7 = hb_ot_apply_context_t::match_properties_mark(*(hb_ot_apply_context_t**)( *(long*)( param_1 + 0x10 ) + 0xf8 ), *puVar1, (uint)uVar18, *(uint*)( param_1 + 0x18 ));
            if (cVar7 != '\0') goto LAB_00110709;
         }

         LAB_00110adf:uVar10 = ( ulong ) * (uint*)( param_1 + 8 );
      }

   }
;
   pRVar19 = this + 2;
   uVar8 = *(ushort*)this << 8 | *(ushort*)this >> 8;
   uVar13 = (uint)uVar8;
   if (uVar8 == 0) {
      return 0;
   }

   while (true) {
      uVar8 = *(ushort*)pRVar19;
      pRVar15 = (RuleSet<OT::Layout::SmallTypes>*)&_hb_NullPool;
      if (uVar8 != 0) {
         pRVar15 = this + ( ushort )(uVar8 << 8 | uVar8 >> 8);
      }

      if (( ushort )(*(ushort*)pRVar15 << 8 | *(ushort*)pRVar15 >> 8) < 2) break;
      pRVar19 = pRVar19 + 2;
      uVar13 = uVar13 - 1;
      if (uVar13 == 0) {
         return 0;
      }

   }
;
   uVar8 = *(ushort*)pRVar19;
   while (true) {
      pRVar15 = (RuleSet<OT::Layout::SmallTypes>*)&_hb_NullPool;
      if (uVar8 != 0) {
         pRVar15 = this + ( ushort )(uVar8 << 8 | uVar8 >> 8);
      }

      uVar10 = Rule<OT::Layout::SmallTypes>::apply((hb_ot_apply_context_t*)pRVar15, (ContextApplyLookupContext*)param_1);
      if ((char)uVar10 != '\0') break;
      do {
         uVar13 = uVar13 - 1;
         if (uVar13 == 0) {
            return 0;
         }

         uVar8 = *(ushort*)( pRVar19 + 2 );
         pRVar19 = pRVar19 + 2;
         pRVar15 = (RuleSet<OT::Layout::SmallTypes>*)&_hb_NullPool;
         if (uVar8 != 0) {
            pRVar15 = this + ( ushort )(uVar8 << 8 | uVar8 >> 8);
         }

      }
 while ( 1 < ( ushort )(*(ushort*)pRVar15 << 8 | *(ushort*)pRVar15 >> 8) );
   }
;
   return uVar10;
   while (true) {
      if (*(code**)( param_1 + 0x28 ) != (code*)0x0) {
         cVar7 = ( **(code**)( param_1 + 0x28 ) )(puVar2, uVar18, *(undefined8*)( param_1 + 0x30 ));
         if (cVar7 == '\0') goto LAB_00110d00;
         puVar9 = *(ushort**)( param_1 + 0x38 );
         break;
      }

      if (sVar11 == 0) break;
      LAB_00110837:do {
         uVar10 = ( ulong ) * (uint*)( param_1 + 8 );
         do {
            if (iVar3 + -1 <= (int)uVar10) goto LAB_00110d08;
            uVar13 = (int)uVar10 + 1;
            uVar10 = (ulong)uVar13;
            *(uint*)( param_1 + 8 ) = uVar13;
            puVar2 = (uint*)( *(long*)( *(long*)( *(long*)( param_1 + 0x10 ) + 0xa0 ) + 0x70 ) + uVar10 * 0x14 );
            uVar18 = (ushort)puVar2[3];
         }
 while ( ( *(uint*)( param_1 + 0x18 ) & (uint)uVar18 & 0xe ) != 0 );
      }
 while ( ( ( uVar18 & 8 ) != 0 ) && ( cVar7 = hb_ot_apply_context_t::match_properties_mark(*(hb_ot_apply_context_t**)( *(long*)( param_1 + 0x10 ) + 0xf8 ), *puVar2, (uint)uVar18, *(uint*)( param_1 + 0x18 )) ),cVar7 == '\0' );
      uVar18 = (ushort)puVar2[4];
      sVar11 = 0;
      if (( ( uVar18 & 0x20 ) != 0 ) && ( ( puVar2[3] & 0x10 ) == 0 )) {
         if (param_1[0x20] == (hb_ot_apply_context_t)0x0) {
            if (( uVar18 & 0x1f ) == 1) {
               sVar11 = 0;
               if (( uVar18 & 0x200 ) != 0) goto LAB_001108c8;
               if (param_1[0x21] == (hb_ot_apply_context_t)0x0) goto LAB_00110db4;
            }

         }
 else if (( param_1[0x21] == (hb_ot_apply_context_t)0x0 ) && ( ( uVar18 & 0x1f ) == 1 )) {
            LAB_00110db4:sVar11 = 0;
            if (( uVar18 & 0x100 ) != 0) goto LAB_001108c8;
         }

         if (param_1[0x22] == (hb_ot_apply_context_t)0x0) {
            sVar11 = ( ( uVar18 >> 6 ^ 1 ) & 1 ) * 2;
         }
 else {
            sVar11 = 2;
         }

      }

      LAB_001108c8:puVar9 = *(ushort**)( param_1 + 0x38 );
      uVar18 = 0;
      if (puVar9 != (ushort*)0x0) {
         uVar18 = *puVar9 << 8 | *puVar9 >> 8;
      }

      if (( ( puVar2[1] & *(uint*)( param_1 + 0x1c ) ) == 0 ) || ( ( param_1[0x24] != (hb_ot_apply_context_t)0x0 && ( param_1[0x24] != *(hb_ot_apply_context_t*)( (long)puVar2 + 0xf ) ) ) )) {
         LAB_00110d00:if (sVar11 == 0) goto LAB_00110d08;
         goto LAB_00110837;
      }

   }
;
   if (puVar9 != (ushort*)0x0) {
      *(ushort**)( param_1 + 0x38 ) = puVar9 + 1;
   }

   puVar2 = (uint*)( *(long*)( *(long*)( param_1 + 0xa0 ) + 0x70 ) + ( ulong ) * (uint*)( param_1 + 8 ) * 0x14 );
   uVar18 = (ushort)puVar2[3];
   if (( ( *(uint*)( param_1 + 0x18 ) & (uint)uVar18 & 0xe ) == 0 ) && ( ( ( uVar18 & 8 ) == 0 || ( cVar7 = hb_ot_apply_context_t::match_properties_mark(*(hb_ot_apply_context_t**)( *(long*)( param_1 + 0x10 ) + 0xf8 ), *puVar2, (uint)uVar18, *(uint*)( param_1 + 0x18 )) ),cVar7 != '\0' ) )) {
      uVar13 = puVar2[4];
      if (( ( uVar13 & 0x20 ) != 0 ) && ( ( puVar2[3] & 0x10 ) == 0 )) {
         if (param_1[0x20] == (hb_ot_apply_context_t)0x0) {
            if (( uVar13 & 0x1f ) == 1) {
               if (( uVar13 & 0x200 ) != 0) goto LAB_0011099b;
               if (param_1[0x21] == (hb_ot_apply_context_t)0x0) goto LAB_00110e79;
            }

         }
 else if (( param_1[0x21] == (hb_ot_apply_context_t)0x0 ) && ( ( uVar13 & 0x1f ) == 1 )) {
            LAB_00110e79:if (( uVar13 & 0x100 ) != 0) goto LAB_0011099b;
         }

         if (( param_1[0x22] != (hb_ot_apply_context_t)0x0 ) || ( ( uVar13 & 0x40 ) == 0 )) goto LAB_00110d08;
      }

      LAB_0011099b:local_3c = *(uint*)( param_1 + 8 ) + 1;
      lVar16 = *(long*)( *(long*)( param_1 + 0xa0 ) + 0x70 ) + ( ulong ) * (uint*)( param_1 + 8 ) * 0x14;
   }
 else {
      LAB_00110d08:local_3c = 0;
      lVar16 = 0;
   }

   local_40 = local_40 + 1;
   pRVar19 = this + 2;
   pcVar4 = *(code**)param_2;
   uVar5 = *(undefined8*)( param_2 + 8 );
   do {
      while (true) {
         uVar18 = *(ushort*)pRVar19;
         phVar14 = (hb_ot_apply_context_t*)&_hb_NullPool;
         if (uVar18 != 0) {
            phVar14 = (hb_ot_apply_context_t*)( this + ( ushort )(uVar18 << 8 | uVar18 >> 8) );
         }

         if (( 1 < ( ushort )(*(ushort*)phVar14 << 8 | *(ushort*)phVar14 >> 8) ) && ( pcVar4 != (code*)0x0 )) break;
         LAB_00110a6c:uVar10 = Rule<OT::Layout::SmallTypes>::apply(phVar14, (ContextApplyLookupContext*)param_1);
         uVar13 = local_40;
         if ((char)uVar10 != '\0') {
            if (local_40 == 0xffffffff) {
               return uVar10;
            }

            phVar6 = *(hb_buffer_t**)( param_1 + 0xa0 );
            if (( (byte)phVar6[0x18] & 0x40 ) != 0) {
               hb_buffer_t::_set_glyph_flags(phVar6, 2, *(uint*)( phVar6 + 0x5c ), local_40, false, false);
               return uVar10 & 0xff;
            }

            return uVar10;
         }

         LAB_00110a35:local_40 = uVar13;
         pRVar19 = pRVar19 + 2;
         if (pRVar19 == this + ( ulong )(uVar8 - 1) * 2 + 4) goto LAB_00110cbf;
      }
;
      cVar7 = ( *pcVar4 )(puVar1, *(ushort*)( phVar14 + 4 ) << 8 | *(ushort*)( phVar14 + 4 ) >> 8, uVar5);
      if (cVar7 == '\0') {
         uVar13 = 0;
         if (local_40 != 0xffffffff) {
            uVar13 = local_40;
         }

         goto LAB_00110a35;
      }

      if (( ( lVar16 == 0 ) || ( ( ushort )(*(ushort*)phVar14 << 8 | *(ushort*)phVar14 >> 8) < 3 ) ) || ( cVar7 = ( *pcVar4 )(lVar16, *(ushort*)( phVar14 + 6 ) << 8 | *(ushort*)( phVar14 + 6 ) >> 8, uVar5) ),cVar7 != '\0') goto LAB_00110a6c;
      pRVar19 = pRVar19 + 2;
      local_40 = local_3c;
   }
 while ( pRVar19 != this + ( ulong )(uVar8 - 1) * 2 + 4 );
   LAB_00110cbf:if (( local_40 != 0xffffffff ) && ( phVar6 = *(hb_buffer_t**)( param_1 + 0xa0 )((byte)phVar6[0x18] & 0x40) != 0 )) {
      hb_buffer_t::_set_glyph_flags(phVar6, 2, *(uint*)( phVar6 + 0x5c ), local_40, false, false);
   }

   return 0;
}
/* bool OT::hb_accelerate_subtables_context_t::apply_to<OT::ContextFormat1_4<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*) */bool OT::hb_accelerate_subtables_context_t::apply_to<OT::ContextFormat1_4<OT::Layout::SmallTypes>>(void *param_1, hb_ot_apply_context_t *param_2) {
   ushort uVar1;
   undefined1 uVar2;
   uint uVar3;
   ushort *puVar4;
   Coverage *this;
   RuleSet<OT::Layout::SmallTypes> *this_00;
   long in_FS_OFFSET;
   code *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = *(ushort*)( (long)param_1 + 2 );
   this(Coverage * ) & _hb_NullPool;
   if (uVar1 != 0) {
      this(Coverage * )((long)param_1 + ( ulong )(ushort)(uVar1 << 8 | uVar1 >> 8));
   }

   uVar3 = Layout::Common::Coverage::get_coverage(this, *(uint*)( *(long*)( *(long*)( param_2 + 0xa0 ) + 0x70 ) + ( ulong ) * (uint*)( *(long*)( param_2 + 0xa0 ) + 0x5c ) * 0x14 ));
   uVar2 = 0;
   if (uVar3 != 0xffffffff) {
      puVar4 = (ushort*)&_hb_NullPool;
      if (uVar3 < ( ushort )(*(ushort*)( (long)param_1 + 4 ) << 8 | *(ushort*)( (long)param_1 + 4 ) >> 8)) {
         puVar4 = (ushort*)( (long)param_1 + (ulong)uVar3 * 2 + 6 );
      }

      uVar1 = *puVar4;
      this_00 = (RuleSet<OT::Layout::SmallTypes>*)&_hb_NullPool;
      if (uVar1 != 0) {
         this_00 = (RuleSet<OT::Layout::SmallTypes>*)( (long)param_1 + ( ulong )(ushort)(uVar1 << 8 | uVar1 >> 8) );
      }

      local_30 = 0;
      local_38 = match_glyph;
      uVar2 = RuleSet<OT::Layout::SmallTypes>::apply(this_00, param_2, (ContextApplyLookupContext*)&local_38);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (bool)uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* bool 
   OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::ContextFormat2_5<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*) */bool OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::ContextFormat2_5<OT::Layout::SmallTypes>>(void *param_1, hb_ot_apply_context_t *param_2) {
   uint *puVar1;
   byte bVar2;
   undefined1 uVar3;
   ushort uVar4;
   int iVar5;
   ushort *puVar6;
   uint uVar7;
   int iVar8;
   Coverage *this;
   RuleSet<OT::Layout::SmallTypes> *this_00;
   uint uVar9;
   long in_FS_OFFSET;
   code *local_48;
   short *local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar4 = *(ushort*)( (long)param_1 + 2 );
   this(Coverage * ) & _hb_NullPool;
   if (uVar4 != 0) {
      this(Coverage * )((long)param_1 + ( ulong )(ushort)(uVar4 << 8 | uVar4 >> 8));
   }

   puVar1 = (uint*)( *(long*)( *(long*)( param_2 + 0xa0 ) + 0x70 ) + ( ulong ) * (uint*)( *(long*)( param_2 + 0xa0 ) + 0x5c ) * 0x14 );
   uVar9 = *puVar1;
   iVar5 = Layout::Common::Coverage::get_coverage(this, uVar9);
   uVar3 = 0;
   if (iVar5 != -1) {
      uVar4 = *(ushort*)( (long)param_1 + 4 );
      local_40 = (short*)&_hb_NullPool;
      if (uVar4 != 0) {
         local_40 = (short*)( (long)param_1 + ( ulong )(ushort)(uVar4 << 8 | uVar4 >> 8) );
      }

      local_48 = match_class_cached;
      bVar2 = *(byte*)( (long)puVar1 + 0xf );
      uVar7 = (uint)bVar2;
      if (bVar2 == 0xff) {
         if (*local_40 == 0x100) {
            puVar6 = (ushort*)&_hb_NullPool;
            uVar9 = uVar9 - ( ushort )(local_40[1] << 8 | (ushort)local_40[1] >> 8);
            if (uVar9 < ( ushort )(local_40[2] << 8 | (ushort)local_40[2] >> 8)) {
               puVar6 = (ushort*)( local_40 + (ulong)uVar9 + 3 );
            }

            uVar7 = ( uint )(ushort)(*puVar6 << 8 | *puVar6 >> 8);
         }
 else if (*local_40 == 0x200) {
            puVar6 = (ushort*)&_hb_Null_OT_RangeRecord;
            uVar4 = local_40[1] << 8 | (ushort)local_40[1] >> 8;
            iVar5 = uVar4 - 1;
            if (uVar4 != 0) {
               iVar8 = 0;
               do {
                  uVar7 = ( uint )(iVar8 + iVar5) >> 1;
                  puVar6 = (ushort*)( local_40 + (ulong)uVar7 * 3 + 2 );
                  if (uVar9 < ( ushort )(*puVar6 << 8 | *puVar6 >> 8)) {
                     iVar5 = uVar7 - 1;
                  }
 else {
                     if (uVar9 <= ( ushort )(puVar6[1] << 8 | puVar6[1] >> 8)) goto LAB_001111c4;
                     iVar8 = uVar7 + 1;
                  }

               }
 while ( iVar8 <= iVar5 );
               puVar6 = (ushort*)&_hb_Null_OT_RangeRecord;
            }

            LAB_001111c4:uVar7 = ( uint )(ushort)(puVar6[2] << 8 | puVar6[2] >> 8);
         }
 else {
            uVar7 = 0;
         }

      }

      puVar6 = (ushort*)&_hb_NullPool;
      if (uVar7 < ( ushort )(*(ushort*)( (long)param_1 + 6 ) << 8 | *(ushort*)( (long)param_1 + 6 ) >> 8)) {
         puVar6 = (ushort*)( (long)param_1 + ( ulong )(uVar7 + 1) * 2 + 6 );
      }

      uVar4 = *puVar6;
      this_00 = (RuleSet<OT::Layout::SmallTypes>*)&_hb_NullPool;
      if (uVar4 != 0) {
         this_00 = (RuleSet<OT::Layout::SmallTypes>*)( (long)param_1 + ( ulong )(ushort)(uVar4 << 8 | uVar4 >> 8) );
      }

      uVar3 = RuleSet<OT::Layout::SmallTypes>::apply(this_00, param_2, (ContextApplyLookupContext*)&local_48);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (bool)uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* bool 
   OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::ContextFormat1_4<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*) */bool OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::ContextFormat1_4<OT::Layout::SmallTypes>>(void *param_1, hb_ot_apply_context_t *param_2) {
   ushort uVar1;
   undefined1 uVar2;
   uint uVar3;
   ushort *puVar4;
   Coverage *this;
   RuleSet<OT::Layout::SmallTypes> *this_00;
   long in_FS_OFFSET;
   code *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = *(ushort*)( (long)param_1 + 2 );
   this(Coverage * ) & _hb_NullPool;
   if (uVar1 != 0) {
      this(Coverage * )((long)param_1 + ( ulong )(ushort)(uVar1 << 8 | uVar1 >> 8));
   }

   uVar3 = Layout::Common::Coverage::get_coverage(this, *(uint*)( *(long*)( *(long*)( param_2 + 0xa0 ) + 0x70 ) + ( ulong ) * (uint*)( *(long*)( param_2 + 0xa0 ) + 0x5c ) * 0x14 ));
   uVar2 = 0;
   if (uVar3 != 0xffffffff) {
      puVar4 = (ushort*)&_hb_NullPool;
      if (uVar3 < ( ushort )(*(ushort*)( (long)param_1 + 4 ) << 8 | *(ushort*)( (long)param_1 + 4 ) >> 8)) {
         puVar4 = (ushort*)( (long)param_1 + (ulong)uVar3 * 2 + 6 );
      }

      uVar1 = *puVar4;
      this_00 = (RuleSet<OT::Layout::SmallTypes>*)&_hb_NullPool;
      if (uVar1 != 0) {
         this_00 = (RuleSet<OT::Layout::SmallTypes>*)( (long)param_1 + ( ulong )(ushort)(uVar1 << 8 | uVar1 >> 8) );
      }

      local_30 = 0;
      local_38 = match_glyph;
      uVar2 = RuleSet<OT::Layout::SmallTypes>::apply(this_00, param_2, (ContextApplyLookupContext*)&local_38);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (bool)uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* bool OT::hb_accelerate_subtables_context_t::apply_to<OT::ContextFormat2_5<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*) */bool OT::hb_accelerate_subtables_context_t::apply_to<OT::ContextFormat2_5<OT::Layout::SmallTypes>>(void *param_1, hb_ot_apply_context_t *param_2) {
   undefined1 uVar1;
   ushort uVar2;
   int iVar3;
   ushort *puVar4;
   uint uVar5;
   int iVar6;
   Coverage *this;
   RuleSet<OT::Layout::SmallTypes> *this_00;
   uint uVar7;
   long in_FS_OFFSET;
   code *local_38;
   short *local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = *(ushort*)( (long)param_1 + 2 );
   this(Coverage * ) & _hb_NullPool;
   if (uVar2 != 0) {
      this(Coverage * )((long)param_1 + ( ulong )(ushort)(uVar2 << 8 | uVar2 >> 8));
   }

   uVar7 = *(uint*)( *(long*)( *(long*)( param_2 + 0xa0 ) + 0x70 ) + ( ulong ) * (uint*)( *(long*)( param_2 + 0xa0 ) + 0x5c ) * 0x14 );
   iVar3 = Layout::Common::Coverage::get_coverage(this, uVar7);
   uVar1 = 0;
   if (iVar3 != -1) {
      uVar2 = *(ushort*)( (long)param_1 + 4 );
      local_30 = (short*)&_hb_NullPool;
      if (uVar2 != 0) {
         local_30 = (short*)( (long)param_1 + ( ulong )(ushort)(uVar2 << 8 | uVar2 >> 8) );
      }

      local_38 = match_class;
      if (*local_30 == 0x100) {
         puVar4 = (ushort*)&_hb_NullPool;
         uVar7 = uVar7 - ( ushort )(local_30[1] << 8 | (ushort)local_30[1] >> 8);
         if (uVar7 < ( ushort )(local_30[2] << 8 | (ushort)local_30[2] >> 8)) {
            puVar4 = (ushort*)( local_30 + (ulong)uVar7 + 3 );
         }

         uVar7 = ( uint )(ushort)(*puVar4 << 8 | *puVar4 >> 8);
      }
 else if (*local_30 == 0x200) {
         puVar4 = (ushort*)&_hb_Null_OT_RangeRecord;
         uVar2 = local_30[1] << 8 | (ushort)local_30[1] >> 8;
         iVar3 = uVar2 - 1;
         if (uVar2 != 0) {
            iVar6 = 0;
            do {
               uVar5 = ( uint )(iVar6 + iVar3) >> 1;
               puVar4 = (ushort*)( local_30 + (ulong)uVar5 * 3 + 2 );
               if (uVar7 < ( ushort )(*puVar4 << 8 | *puVar4 >> 8)) {
                  iVar3 = uVar5 - 1;
               }
 else {
                  if (uVar7 <= ( ushort )(puVar4[1] << 8 | puVar4[1] >> 8)) goto LAB_00111447;
                  iVar6 = uVar5 + 1;
               }

            }
 while ( iVar6 <= iVar3 );
            puVar4 = (ushort*)&_hb_Null_OT_RangeRecord;
         }

         LAB_00111447:uVar7 = ( uint )(ushort)(puVar4[2] << 8 | puVar4[2] >> 8);
      }
 else {
         uVar7 = 0;
      }

      puVar4 = (ushort*)&_hb_NullPool;
      if (uVar7 < ( ushort )(*(ushort*)( (long)param_1 + 6 ) << 8 | *(ushort*)( (long)param_1 + 6 ) >> 8)) {
         puVar4 = (ushort*)( (long)param_1 + ( ulong )(uVar7 + 1) * 2 + 6 );
      }

      uVar2 = *puVar4;
      this_00 = (RuleSet<OT::Layout::SmallTypes>*)&_hb_NullPool;
      if (uVar2 != 0) {
         this_00 = (RuleSet<OT::Layout::SmallTypes>*)( (long)param_1 + ( ulong )(ushort)(uVar2 << 8 | uVar2 >> 8) );
      }

      uVar1 = RuleSet<OT::Layout::SmallTypes>::apply(this_00, param_2, (ContextApplyLookupContext*)&local_38);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (bool)uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OT::Layout::GSUB_impl::Ligature<OT::Layout::SmallTypes>::apply(OT::hb_ot_apply_context_t*) const
    */undefined8 OT::Layout::GSUB_impl::Ligature<OT::Layout::SmallTypes>::apply(Ligature<OT::Layout::SmallTypes> *this, hb_ot_apply_context_t *param_1) {
   uint *puVar1;
   ushort uVar2;
   hb_buffer_t *phVar3;
   undefined8 *puVar4;
   bool bVar5;
   char cVar6;
   byte bVar7;
   undefined1 uVar8;
   char cVar9;
   ushort uVar10;
   uint uVar11;
   int iVar12;
   undefined8 uVar13;
   long lVar14;
   size_t sVar15;
   ulong uVar16;
   short sVar17;
   long lVar18;
   long lVar19;
   hb_ot_apply_context_t hVar20;
   byte bVar21;
   byte bVar22;
   uint uVar23;
   ushort *puVar24;
   undefined8 *puVar25;
   ulong uVar26;
   byte bVar27;
   char *pcVar28;
   byte bVar29;
   uint uVar30;
   bool bVar31;
   int iVar32;
   byte bVar33;
   long lVar34;
   ulong uVar35;
   char *__s;
   long in_FS_OFFSET;
   uint *local_4a0;
   uint *local_478;
   byte local_470;
   uint local_46c;
   uint local_458[4];
   char local_448[1032];
   long local_40;
   bVar7 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar10 = *(ushort*)( this + 2 ) << 8 | *(ushort*)( this + 2 ) >> 8;
   if (uVar10 != 0) {
      uVar30 = (uint)uVar10;
      if (uVar30 == 1) {
         if (*(long*)( *(long*)( param_1 + 0xa0 ) + 0xd0 ) != 0) {
            hb_buffer_t::sync_so_far();
            hb_buffer_t::message(*(hb_buffer_t**)( param_1 + 0xa0 ), *(hb_font_t**)( param_1 + 0x90 ), "replacing glyph at %u (ligature substitution)");
         }

         uVar10 = *(ushort*)this << 8 | *(ushort*)this >> 8;
         hb_ot_apply_context_t::_set_glyph_class(param_1, (uint)uVar10, 0, false, false);
         lVar19 = *(long*)( param_1 + 0xa0 );
         cVar9 = hb_buffer_t::make_room_for((uint)lVar19, 1);
         if (cVar9 != '\0') {
            puVar4 = *(undefined8**)( lVar19 + 0x78 );
            uVar30 = *(uint*)( lVar19 + 100 );
            if (*(uint*)( lVar19 + 0x5c ) < *(uint*)( lVar19 + 0x60 )) {
               puVar25 = (undefined8*)( *(long*)( lVar19 + 0x70 ) + ( ulong ) * (uint*)( lVar19 + 0x5c ) * 0x14 );
            }
 else {
               puVar25 = puVar4;
               if (uVar30 != 0) {
                  puVar25 = (undefined8*)( (long)puVar4 + ( ulong )(uVar30 - 1) * 0x14 );
               }

            }

            uVar13 = puVar25[1];
            puVar1 = (uint*)( (long)puVar4 + (ulong)uVar30 * 0x14 );
            *(undefined8*)puVar1 = *puVar25;
            *(undefined8*)( puVar1 + 2 ) = uVar13;
            uVar30 = *(uint*)( puVar25 + 2 );
            *puVar1 = (uint)uVar10;
            puVar1[4] = uVar30;
            *(int*)( lVar19 + 0x5c ) = *(int*)( lVar19 + 0x5c ) + 1;
            *(int*)( lVar19 + 100 ) = *(int*)( lVar19 + 100 ) + 1;
         }

         phVar3 = *(hb_buffer_t**)( param_1 + 0xa0 );
         if (*(long*)( phVar3 + 0xd0 ) != 0) {
            hb_buffer_t::message(phVar3, *(hb_font_t**)( param_1 + 0x90 ), "replaced glyph at %u (ligature substitution)", ( ulong )(*(int*)( phVar3 + 0x5c ) - 1));
         }

         goto LAB_00111ab3;
      }

      if (uVar30 < 0x41) {
         if (uVar30 < 5) {
            local_4a0 = local_458;
            LAB_0011159f:local_478 = local_458;
            lVar19 = *(long*)( param_1 + 0xa0 );
            lVar34 = *(long*)( *(long*)( param_1 + 0x10 ) + 0xa0 );
            uVar23 = *(uint*)( lVar19 + 0x5c );
            uVar35 = (ulong)uVar23;
            hVar20 = (hb_ot_apply_context_t)0x0;
            iVar32 = *(int*)( lVar34 + 0x60 );
            *(uint*)( param_1 + 8 ) = uVar23;
            *(int*)( param_1 + 0x40 ) = iVar32;
            if (uVar23 == *(uint*)( lVar34 + 0x5c )) {
               hVar20 = *(hb_ot_apply_context_t*)( *(long*)( lVar34 + 0x70 ) + uVar35 * 0x14 + 0xf );
            }

            *(Ligature<OT::Layout::SmallTypes>**)( param_1 + 0x38 ) = this + 4;
            if (param_1[0x23] == (hb_ot_apply_context_t)0x0) {
               hVar20 = (hb_ot_apply_context_t)0x0;
            }

            *(undefined8*)( param_1 + 0x30 ) = 0;
            *(code**)( param_1 + 0x28 ) = match_glyph;
            param_1[0x24] = hVar20;
            cVar9 = '\0';
            bVar5 = false;
            bVar27 = *(byte*)( *(long*)( lVar19 + 0x70 ) + uVar35 * 0x14 + 0xe );
            bVar33 = bVar27 >> 5;
            bVar21 = 0;
            if (( bVar27 & 0x10 ) == 0) {
               bVar21 = bVar27 & 0xf;
            }

            lVar34 = 1;
            LAB_00111648:LAB_00111655:while (true) {
               do {
                  if (iVar32 + -1 <= (int)uVar35) {
                     uVar30 = *(uint*)( param_1 + 0x40 );
                     goto LAB_001116f0;
                  }

                  uVar23 = (int)uVar35 + 1;
                  uVar35 = (ulong)uVar23;
                  *(uint*)( param_1 + 8 ) = uVar23;
                  puVar1 = (uint*)( *(long*)( *(long*)( *(long*)( param_1 + 0x10 ) + 0xa0 ) + 0x70 ) + uVar35 * 0x14 );
                  uVar10 = (ushort)puVar1[3];
                  uVar23 = *(uint*)( param_1 + 0x18 ) & (uint)uVar10;
               }
 while ( ( uVar23 & 0xe ) != 0 );
               if (( ( uVar10 & 8 ) == 0 ) || ( cVar6 = hb_ot_apply_context_t::match_properties_mark(*(hb_ot_apply_context_t**)( *(long*)( param_1 + 0x10 ) + 0xf8 ), *puVar1, (uint)uVar10, *(uint*)( param_1 + 0x18 )) ),cVar6 != '\0') break;
               LAB_001119cf:uVar35 = ( ulong ) * (uint*)( param_1 + 8 );
            }
;
            uVar10 = (ushort)puVar1[4];
            sVar17 = 0;
            if (( ( uVar10 & 0x20 ) != 0 ) && ( ( puVar1[3] & 0x10 ) == 0 )) {
               if (param_1[0x20] == (hb_ot_apply_context_t)0x0) {
                  if (( uVar10 & 0x1f ) == 1) {
                     sVar17 = 0;
                     if (( uVar10 & 0x200 ) != 0) goto LAB_001116b3;
                     if (param_1[0x21] == (hb_ot_apply_context_t)0x0) goto LAB_001119f3;
                  }

               }
 else if (( param_1[0x21] == (hb_ot_apply_context_t)0x0 ) && ( ( uVar10 & 0x1f ) == 1 )) {
                  LAB_001119f3:sVar17 = 0;
                  if (( uVar10 & 0x100 ) != 0) goto LAB_001116b3;
               }

               if (param_1[0x22] == (hb_ot_apply_context_t)0x0) {
                  sVar17 = ( ( uVar10 >> 6 ^ 1 ) & 1 ) * 2;
               }
 else {
                  sVar17 = 2;
               }

            }

            LAB_001116b3:puVar24 = *(ushort**)( param_1 + 0x38 );
            uVar10 = 0;
            if (puVar24 != (ushort*)0x0) {
               uVar10 = *puVar24 << 8 | *puVar24 >> 8;
            }

            if (( ( puVar1[1] & *(uint*)( param_1 + 0x1c ) ) != 0 ) && ( ( param_1[0x24] == (hb_ot_apply_context_t)0x0 || ( param_1[0x24] == *(hb_ot_apply_context_t*)( (long)puVar1 + 0xf ) ) ) )) {
               if (*(code**)( param_1 + 0x28 ) == (code*)0x0) {
                  if (sVar17 != 0) goto LAB_001119cf;
                  goto LAB_00111785;
               }

               cVar6 = ( **(code**)( param_1 + 0x28 ) )(puVar1, uVar10, *(undefined8*)( param_1 + 0x30 ));
               if (cVar6 != '\0') goto code_r0x00111778;
            }

            uVar35 = ( ulong ) * (uint*)( param_1 + 8 );
            if (sVar17 == 0) {
               uVar30 = *(uint*)( param_1 + 8 ) + 1;
               goto LAB_001116f0;
            }

            goto LAB_00111655;
         }

         local_4a0 = (uint*)malloc((ulong)uVar10 * 4);
         if (local_4a0 != (uint*)0x0) goto LAB_0011159f;
      }

   }

   LAB_00111718:uVar13 = 0;
   goto LAB_0011171a;
   code_r0x00111778:puVar24 = *(ushort**)( param_1 + 0x38 );
   LAB_00111785:if (puVar24 != (ushort*)0x0) {
      *(ushort**)( param_1 + 0x38 ) = puVar24 + 1;
   }

   uVar35 = ( ulong ) * (uint*)( param_1 + 8 );
   local_4a0[lVar34] = *(uint*)( param_1 + 8 );
   lVar18 = *(long*)( lVar19 + 0x70 );
   lVar14 = lVar18 + uVar35 * 0x14;
   bVar27 = *(byte*)( lVar14 + 0xe );
   if (( bVar27 & 0x10 ) == 0) {
      bVar29 = bVar27 >> 5;
      if (bVar33 == 0 || bVar21 == 0) {
         if (( ( bVar27 & 0xf ) == 0 || bVar29 == 0 ) || ( bVar33 == bVar29 )) goto LAB_001117ea;
         goto LAB_001118d0;
      }

      if (( bVar21 == ( bVar27 & 0xf ) ) && ( bVar33 == bVar29 )) goto LAB_001117ea;
   }
 else if (bVar33 == 0 || bVar21 == 0) goto LAB_001117ea;
   if (!bVar5) {
      uVar16 = ( ulong ) * (uint*)( lVar19 + 100 );
      do {
         if ((int)uVar16 == 0) goto LAB_001118d0;
         uVar16 = ( ulong )((int)uVar16 - 1);
         puVar1 = (uint*)( *(long*)( lVar19 + 0x78 ) + uVar16 * 0x14 );
         bVar27 = *(byte*)( (long)puVar1 + 0xe );
         if (bVar33 != bVar27 >> 5) goto LAB_001118d0;
      }
 while ( ( ( bVar27 & 0x10 ) == 0 ) && ( ( bVar27 & 0xf ) != 0 ) );
      uVar10 = (ushort)puVar1[3];
      if (( *(uint*)( param_1 + 0x18 ) & (uint)uVar10 & 0xe ) == 0) {
         if (( ( uVar10 & 8 ) == 0 ) || ( cVar6 = hb_ot_apply_context_t::match_properties_mark(*(hb_ot_apply_context_t**)( *(long*)( param_1 + 0x10 ) + 0xf8 ), *puVar1, (uint)uVar10, *(uint*)( param_1 + 0x18 )) ),cVar6 != '\0') {
            LAB_001118d0:uVar30 = 0;
            LAB_001116f0:phVar3 = *(hb_buffer_t**)( param_1 + 0xa0 );
            if (( (byte)phVar3[0x18] & 0x40 ) != 0) {
               hb_buffer_t::_set_glyph_flags(phVar3, 2, *(uint*)( phVar3 + 0x5c ), uVar30, false, false);
            }

            if (local_4a0 != local_478) {
               free(local_4a0);
            }

            goto LAB_00111718;
         }

         uVar35 = ( ulong ) * (uint*)( param_1 + 8 );
         lVar18 = *(long*)( lVar19 + 0x70 );
         bVar5 = true;
         lVar14 = uVar35 * 0x14 + lVar18;
         goto LAB_001117ea;
      }

   }

   bVar5 = true;
   LAB_001117ea:bVar27 = 1;
   if (( *(byte*)( lVar14 + 0xc ) & 4 ) != 0) {
      bVar27 = 1;
      if (( *(byte*)( lVar14 + 0xe ) & 0x10 ) != 0) {
         bVar27 = *(byte*)( lVar14 + 0xe ) & 0xf;
      }

   }

   lVar34 = lVar34 + 1;
   cVar9 = cVar9 + bVar27;
   if (uVar30 <= (uint)lVar34) goto LAB_00111b48;
   iVar32 = *(int*)( param_1 + 0x40 );
   goto LAB_00111648;
   LAB_00111b48:iVar32 = (int)uVar35 + 1;
   bVar27 = 1;
   lVar18 = lVar18 + ( ulong ) * (uint*)( lVar19 + 0x5c ) * 0x14;
   if (( ( *(byte*)( lVar18 + 0xc ) & 4 ) != 0 ) && ( bVar21 = *(byte*)( lVar18 + 0xe ) ),bVar27 = bVar21 & 0xf,( bVar21 & 0x10 ) == 0) {
      bVar27 = 1;
   }

   lVar34 = *(long*)( param_1 + 0xa0 );
   lVar14 = *(long*)( lVar34 + 0xd0 );
   *local_4a0 = *(uint*)( lVar19 + 0x5c );
   if (lVar14 == 0) {
      local_46c = 0;
   }
 else {
      lVar34 = 0;
      uVar35 = 0x400;
      iVar12 = hb_buffer_t::sync_so_far();
      iVar32 = iVar32 + iVar12;
      local_46c = *(uint*)( *(long*)( param_1 + 0xa0 ) + 0x5c );
      pcVar28 = local_448;
      for (lVar19 = 0x80; __s = local_448,lVar19 != 0; lVar19 = lVar19 + -1) {
         for (int i = 0; i < 8; i++) {
            pcVar28[i] = '\0';
         }

         pcVar28 = pcVar28 + ( (ulong)bVar7 * -2 + 1 ) * 8;
      }

      do {
         local_4a0[lVar34] = iVar12 + local_4a0[lVar34];
         if (lVar34 != 0) {
            *__s = ',';
            uVar16 = 0x400;
            if (0x3ff < uVar35) {
               uVar16 = uVar35;
            }

            uVar26 = ( uVar16 - uVar35 ) + 1;
            if (uVar26 < uVar16) {
               uVar26 = uVar16;
            }

            __s = __s + 1;
            uVar35 = uVar26 + ( ( uVar35 - 1 ) - uVar16 );
         }

         __snprintf_chk(__s, 0x400 - ( (long)__s - (long)local_448 ), 2, uVar35, &_LC29);
         sVar15 = strlen(__s);
         uVar16 = 0x400;
         if (0x3ff < uVar35) {
            uVar16 = uVar35;
         }

         uVar26 = ( sVar15 + uVar16 ) - uVar35;
         if (uVar26 < uVar16) {
            uVar26 = uVar16;
         }

         lVar34 = lVar34 + 1;
         __s = __s + sVar15;
         uVar35 = uVar26 + ( uVar35 - ( sVar15 + uVar16 ) );
      }
 while ( (uint)lVar34 < uVar30 );
      hb_buffer_t::message(*(hb_buffer_t**)( param_1 + 0xa0 ), *(hb_font_t**)( param_1 + 0x90 ), "ligating glyphs at %s", local_448);
      lVar34 = *(long*)( param_1 + 0xa0 );
   }

   uVar23 = uVar23 & 0xe;
   uVar11 = *(uint*)( lVar34 + 0x5c );
   uVar10 = *(ushort*)this << 8 | *(ushort*)this >> 8;
   if (1 < iVar32 - uVar11) {
      hb_buffer_t::merge_clusters_impl((uint)lVar34, uVar11);
      uVar11 = *(uint*)( lVar34 + 0x5c );
   }

   lVar19 = *(long*)( lVar34 + 0x70 );
   uVar2 = *(ushort*)( lVar19 + 0xc + ( ulong ) * local_4a0 * 0x14 );
   lVar14 = 1;
   do {
      if (( *(byte*)( lVar19 + 0xc + (ulong)local_4a0[lVar14] * 0x14 ) & 8 ) == 0) goto LAB_00111c1b;
      lVar14 = lVar14 + 1;
   }
 while ( (uint)lVar14 < uVar30 );
   local_470 = ( ( byte )(uVar2 >> 3) ^ 1 ) & 1;
   if (( uVar2 & 10 ) == 0) {
      LAB_00111c1b:bVar7 = *(char*)( lVar34 + 0xb9 ) + 1;
      uVar23 = (uint)bVar7;
      if (bVar7 == 0) {
         uVar8 = 1;
         bVar7 = 0x20;
      }
 else {
         while (true) {
            uVar8 = (undefined1)uVar23;
            if (( uVar23 & 7 ) != 0) break;
            uVar23 = uVar23 + 1;
         }
;
         bVar7 = ( byte )(( uVar23 & 7 ) << 5);
      }

      *(undefined1*)( lVar34 + 0xb9 ) = uVar8;
      lVar19 = lVar19 + (ulong)uVar11 * 0x14;
      local_470 = 1;
      bVar21 = *(byte*)( lVar19 + 0xe );
      if (( *(byte*)( lVar19 + 0xc ) & 4 ) != 0) {
         bVar5 = true;
         uVar23 = 4;
         bVar33 = bVar7;
         goto LAB_00111c64;
      }

      uVar23 = 4;
      bVar29 = 1;
      LAB_00111c7b:bVar31 = true;
      *(byte*)( lVar19 + 0xe ) = cVar9 + bVar27 & 0xf | bVar7 | 0x10;
      lVar19 = *(long*)( lVar34 + 0x70 ) + ( ulong ) * (uint*)( lVar34 + 0x5c ) * 0x14;
      uVar2 = *(ushort*)( lVar19 + 0x10 );
      if (( uVar2 & 0x1f ) == 0xc) {
         *(ushort*)( lVar19 + 0x10 ) = uVar2 & 0xe0 | 7;
      }

   }
 else {
      bVar7 = 0;
      bVar5 = false;
      bVar31 = false;
      bVar29 = 1;
      lVar19 = lVar19 + (ulong)uVar11 * 0x14;
      bVar21 = *(byte*)( lVar19 + 0xe );
      bVar33 = 0;
      if (( *(byte*)( lVar19 + 0xc ) & 4 ) != 0) {
         LAB_00111c64:bVar7 = bVar33;
         bVar29 = bVar21 & 0xf;
         if (( bVar21 & 0x10 ) == 0) {
            bVar29 = 1;
         }

         bVar31 = bVar5;
         if (bVar5) goto LAB_00111c7b;
      }

   }

   hb_ot_apply_context_t::_set_glyph_class(param_1, (uint)uVar10, uVar23, true, false);
   lVar19 = *(long*)( param_1 + 0xa0 );
   cVar9 = hb_buffer_t::make_room_for((uint)lVar19, 1);
   if (cVar9 != '\0') {
      puVar4 = *(undefined8**)( lVar19 + 0x78 );
      uVar23 = *(uint*)( lVar19 + 100 );
      if (*(uint*)( lVar19 + 0x5c ) < *(uint*)( lVar19 + 0x60 )) {
         puVar25 = (undefined8*)( *(long*)( lVar19 + 0x70 ) + ( ulong ) * (uint*)( lVar19 + 0x5c ) * 0x14 );
      }
 else {
         puVar25 = puVar4;
         if (uVar23 != 0) {
            puVar25 = (undefined8*)( (long)puVar4 + ( ulong )(uVar23 - 1) * 0x14 );
         }

      }

      uVar13 = puVar25[1];
      puVar1 = (uint*)( (long)puVar4 + (ulong)uVar23 * 0x14 );
      *(undefined8*)puVar1 = *puVar25;
      *(undefined8*)( puVar1 + 2 ) = uVar13;
      uVar23 = *(uint*)( puVar25 + 2 );
      *puVar1 = (uint)uVar10;
      puVar1[4] = uVar23;
      *(int*)( lVar19 + 0x5c ) = *(int*)( lVar19 + 0x5c ) + 1;
      *(int*)( lVar19 + 100 ) = *(int*)( lVar19 + 100 ) + 1;
   }

   uVar35 = ( ulong ) * (uint*)( lVar34 + 0x5c );
   lVar19 = *(long*)( lVar34 + 0x70 );
   lVar14 = 1;
   bVar27 = bVar29;
   do {
      bVar21 = bVar27;
      uVar23 = local_4a0[lVar14];
      uVar11 = (uint)uVar35;
      while (( uVar11 < uVar23 && ( *(char*)( lVar34 + 0x58 ) != '\0' ) )) {
         if (bVar31) {
            lVar19 = lVar19 + uVar35 * 0x14;
            bVar27 = *(byte*)( lVar19 + 0xe );
            bVar33 = bVar21;
            if (( ( bVar27 & 0x10 ) == 0 ) && ( ( bVar27 & 0xf ) != 0 )) {
               bVar33 = bVar27 & 0xf;
               if (bVar29 <= ( bVar27 & 0xf )) {
                  bVar33 = bVar29;
               }

               bVar33 = ( bVar21 - bVar29 ) + bVar33;
            }

            *(byte*)( lVar19 + 0xe ) = bVar33 & 0xf | bVar7;
            lVar19 = *(long*)( lVar34 + 0x70 );
         }

         if (*(char*)( lVar34 + 0x5a ) == '\0') {
            iVar32 = *(int*)( lVar34 + 0x5c );
            LAB_00111d94:uVar11 = iVar32 + 1;
            *(uint*)( lVar34 + 0x5c ) = uVar11;
         }
 else {
            if (( *(long*)( lVar34 + 0x78 ) == lVar19 ) && ( iVar32 = *(int*)( lVar34 + 0x5c ) ),iVar12 = iVar32,*(int*)( lVar34 + 100 ) == iVar32) {
               LAB_00111e48:*(int*)( lVar34 + 100 ) = iVar12 + 1;
               goto LAB_00111d94;
            }

            cVar9 = hb_buffer_t::make_room_for((uint)lVar34, 1);
            if (cVar9 != '\0') {
               puVar4 = (undefined8*)( *(long*)( lVar34 + 0x78 ) + ( ulong ) * (uint*)( lVar34 + 100 ) * 0x14 );
               puVar25 = (undefined8*)( *(long*)( lVar34 + 0x70 ) + ( ulong ) * (uint*)( lVar34 + 0x5c ) * 0x14 );
               uVar13 = puVar25[1];
               *puVar4 = *puVar25;
               puVar4[1] = uVar13;
               *(undefined4*)( puVar4 + 2 ) = *(undefined4*)( puVar25 + 2 );
               iVar32 = *(int*)( lVar34 + 0x5c );
               lVar19 = *(long*)( lVar34 + 0x70 );
               iVar12 = *(int*)( lVar34 + 100 );
               goto LAB_00111e48;
            }

            uVar11 = *(uint*)( lVar34 + 0x5c );
            lVar19 = *(long*)( lVar34 + 0x70 );
         }

         uVar35 = (ulong)uVar11;
      }
;
      lVar18 = lVar19 + uVar35 * 0x14;
      bVar33 = *(byte*)( lVar18 + 0xe );
      bVar29 = 1;
      if (( *(byte*)( lVar18 + 0xc ) & 4 ) != 0) {
         bVar29 = 1;
         if (( bVar33 & 0x10 ) != 0) {
            bVar29 = bVar33 & 0xf;
         }

      }

      uVar23 = (int)uVar35 + 1;
      uVar35 = (ulong)uVar23;
      lVar14 = lVar14 + 1;
      *(uint*)( lVar34 + 0x5c ) = uVar23;
      bVar27 = bVar21 + bVar29;
   }
 while ( (uint)lVar14 < uVar30 );
   if (( ( bVar33 >> 5 != 0 ) && ( local_470 != 0 ) ) && ( uVar23 < *(uint*)( lVar34 + 0x60 ) )) {
      lVar14 = (ulong)uVar23 * 0x14;
      while (true) {
         lVar19 = lVar19 + lVar14;
         bVar27 = *(byte*)( lVar19 + 0xe );
         if (( ( bVar33 >> 5 != bVar27 >> 5 ) || ( ( bVar27 & 0x10 ) != 0 ) ) || ( ( bVar27 & 0xf ) == 0 )) break;
         bVar22 = bVar27 & 0xf;
         if (bVar29 <= ( bVar27 & 0xf )) {
            bVar22 = bVar29;
         }

         uVar30 = (int)uVar35 + 1;
         uVar35 = (ulong)uVar30;
         lVar14 = lVar14 + 0x14;
         *(byte*)( lVar19 + 0xe ) = bVar22 + bVar21 & 0xf | bVar7;
         if (*(uint*)( lVar34 + 0x60 ) <= uVar30) break;
         lVar19 = *(long*)( lVar34 + 0x70 );
      }
;
   }

   if (*(long*)( *(long*)( param_1 + 0xa0 ) + 0xd0 ) != 0) {
      hb_buffer_t::sync_so_far();
      hb_buffer_t::message(*(hb_buffer_t**)( param_1 + 0xa0 ), *(hb_font_t**)( param_1 + 0x90 ), "ligated glyph at %u", (ulong)local_46c);
   }

   if (local_4a0 != local_478) {
      free(local_4a0);
   }

   LAB_00111ab3:uVar13 = 1;
   LAB_0011171a:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar13;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OT::Layout::GSUB_impl::LigatureSet<OT::Layout::SmallTypes>::apply(OT::hb_ot_apply_context_t*)
   const */undefined8 OT::Layout::GSUB_impl::LigatureSet<OT::Layout::SmallTypes>::apply(LigatureSet<OT::Layout::SmallTypes> *this, hb_ot_apply_context_t *param_1) {
   uint *puVar1;
   int iVar2;
   uint uVar3;
   long lVar4;
   hb_buffer_t *phVar5;
   bool bVar6;
   uint uVar7;
   char cVar8;
   ushort uVar9;
   ulong uVar10;
   ushort *puVar11;
   short sVar12;
   hb_ot_apply_context_t hVar13;
   ushort uVar14;
   uint uVar15;
   LigatureSet<OT::Layout::SmallTypes> *pLVar16;
   LigatureSet<OT::Layout::SmallTypes> *pLVar17;
   uVar9 = *(ushort*)this << 8 | *(ushort*)this >> 8;
   if (uVar9 < 5) {
      if (uVar9 == 0) {
         return 0;
      }

   }
 else {
      lVar4 = *(long*)( *(long*)( param_1 + 0x10 ) + 0xa0 );
      uVar15 = *(uint*)( *(long*)( param_1 + 0xa0 ) + 0x5c );
      uVar10 = (ulong)uVar15;
      hVar13 = (hb_ot_apply_context_t)0x0;
      iVar2 = *(int*)( lVar4 + 0x60 );
      *(uint*)( param_1 + 8 ) = uVar15;
      *(int*)( param_1 + 0x40 ) = iVar2;
      if (uVar15 == *(uint*)( lVar4 + 0x5c )) {
         hVar13 = *(hb_ot_apply_context_t*)( *(long*)( lVar4 + 0x70 ) + (ulong)uVar15 * 0x14 + 0xf );
      }

      if (param_1[0x23] == (hb_ot_apply_context_t)0x0) {
         hVar13 = (hb_ot_apply_context_t)0x0;
      }

      *(undefined1(*) [16])( param_1 + 0x30 ) = (undefined1[16])0x0;
      *(code**)( param_1 + 0x28 ) = match_always;
      param_1[0x24] = hVar13;
      while ((int)uVar10 < iVar2 + -1) {
         uVar15 = (int)uVar10 + 1;
         uVar10 = (ulong)uVar15;
         *(uint*)( param_1 + 8 ) = uVar15;
         puVar1 = (uint*)( *(long*)( *(long*)( *(long*)( param_1 + 0x10 ) + 0xa0 ) + 0x70 ) + uVar10 * 0x14 );
         uVar14 = (ushort)puVar1[3];
         if (( *(uint*)( param_1 + 0x18 ) & (uint)uVar14 & 0xe ) == 0) {
            if (( ( uVar14 & 8 ) == 0 ) || ( cVar8 = hb_ot_apply_context_t::match_properties_mark(*(hb_ot_apply_context_t**)( *(long*)( param_1 + 0x10 ) + 0xf8 ), *puVar1, (uint)uVar14, *(uint*)( param_1 + 0x18 )) ),cVar8 != '\0') {
               uVar14 = (ushort)puVar1[4];
               sVar12 = 0;
               if (( ( uVar14 & 0x20 ) != 0 ) && ( ( puVar1[3] & 0x10 ) == 0 )) {
                  if (param_1[0x20] == (hb_ot_apply_context_t)0x0) {
                     if (( uVar14 & 0x1f ) == 1) {
                        sVar12 = 0;
                        if (( uVar14 & 0x200 ) != 0) goto LAB_00112355;
                        if (param_1[0x21] == (hb_ot_apply_context_t)0x0) goto LAB_00112609;
                     }

                  }
 else if (( param_1[0x21] == (hb_ot_apply_context_t)0x0 ) && ( ( uVar14 & 0x1f ) == 1 )) {
                     LAB_00112609:sVar12 = 0;
                     if (( uVar14 & 0x100 ) != 0) goto LAB_00112355;
                  }

                  if (param_1[0x22] == (hb_ot_apply_context_t)0x0) {
                     sVar12 = ( ( uVar14 >> 6 ^ 1 ) & 1 ) * 2;
                  }
 else {
                     sVar12 = 2;
                  }

               }

               LAB_00112355:puVar11 = *(ushort**)( param_1 + 0x38 );
               uVar14 = 0;
               if (puVar11 != (ushort*)0x0) {
                  uVar14 = *puVar11 << 8 | *puVar11 >> 8;
               }

               if (( ( puVar1[1] & *(uint*)( param_1 + 0x1c ) ) != 0 ) && ( ( param_1[0x24] == (hb_ot_apply_context_t)0x0 || ( param_1[0x24] == *(hb_ot_apply_context_t*)( (long)puVar1 + 0xf ) ) ) )) {
                  if (*(code**)( param_1 + 0x28 ) == (code*)0x0) {
                     if (sVar12 != 0) goto LAB_0011238c;
                  }
 else {
                     cVar8 = ( **(code**)( param_1 + 0x28 ) )(puVar1, uVar14, *(undefined8*)( param_1 + 0x30 ));
                     if (cVar8 == '\0') goto LAB_00112384;
                     puVar11 = *(ushort**)( param_1 + 0x38 );
                  }

                  if (puVar11 != (ushort*)0x0) {
                     *(ushort**)( param_1 + 0x38 ) = puVar11 + 1;
                  }

                  uVar15 = *(uint*)( param_1 + 8 );
                  puVar1 = (uint*)( *(long*)( *(long*)( param_1 + 0xa0 ) + 0x70 ) + (ulong)uVar15 * 0x14 );
                  uVar14 = (ushort)puVar1[3];
                  uVar3 = *puVar1;
                  if (( ( *(uint*)( param_1 + 0x18 ) & (uint)uVar14 & 0xe ) == 0 ) && ( ( ( uVar14 & 8 ) == 0 || ( cVar8 = hb_ot_apply_context_t::match_properties_mark(*(hb_ot_apply_context_t**)( *(long*)( param_1 + 0x10 ) + 0xf8 ), uVar3, (uint)uVar14, *(uint*)( param_1 + 0x18 )) ),cVar8 != '\0' ) )) {
                     uVar7 = puVar1[4];
                     if (( ( uVar7 & 0x20 ) == 0 ) || ( ( puVar1[3] & 0x10 ) != 0 )) goto LAB_00112424;
                     if (param_1[0x20] == (hb_ot_apply_context_t)0x0) {
                        if (( uVar7 & 0x1f ) == 1) {
                           if (( uVar7 & 0x200 ) != 0) goto LAB_00112424;
                           if (param_1[0x21] == (hb_ot_apply_context_t)0x0) goto LAB_00112649;
                        }

                     }
 else if (( param_1[0x21] == (hb_ot_apply_context_t)0x0 ) && ( ( uVar7 & 0x1f ) == 1 )) {
                        LAB_00112649:if (( uVar7 & 0x100 ) != 0) goto LAB_00112424;
                     }

                     if (( param_1[0x22] == (hb_ot_apply_context_t)0x0 ) && ( ( uVar7 & 0x40 ) != 0 )) {
                        LAB_00112424:uVar15 = uVar15 + 1;
                        bVar6 = false;
                        pLVar17 = this + 2;
                        do {
                           uVar14 = *(ushort*)pLVar17;
                           pLVar16 = (LigatureSet<OT::Layout::SmallTypes>*)&_hb_NullPool;
                           if (uVar14 != 0) {
                              pLVar16 = this + ( ushort )(uVar14 << 8 | uVar14 >> 8);
                           }

                           if (( ( ushort )(*(ushort*)( (Ligature<OT::Layout::SmallTypes>*)pLVar16 + 2 ) << 8 | *(ushort*)( (Ligature<OT::Layout::SmallTypes>*)pLVar16 + 2 ) >> 8) < 2 ) || ( uVar3 == ( ushort )(*(ushort*)( (Ligature<OT::Layout::SmallTypes>*)pLVar16 + 4 ) << 8 | *(ushort*)( (Ligature<OT::Layout::SmallTypes>*)pLVar16 + 4 ) >> 8) )) {
                              cVar8 = Ligature<OT::Layout::SmallTypes>::apply((Ligature<OT::Layout::SmallTypes>*)pLVar16, param_1);
                              if (cVar8 != '\0') {
                                 if (!bVar6) {
                                    return 1;
                                 }

                                 phVar5 = *(hb_buffer_t**)( param_1 + 0xa0 );
                                 if (( (byte)phVar5[0x18] & 0x40 ) == 0) {
                                    return 1;
                                 }

                                 hb_buffer_t::_set_glyph_flags(phVar5, 2, *(uint*)( phVar5 + 0x5c ), uVar15, false, false);
                                 return 1;
                              }

                           }
 else {
                              bVar6 = true;
                           }

                           pLVar17 = pLVar17 + 2;
                           if (pLVar17 == this + ( ulong )(uVar9 - 1) * 2 + 4) {
                              if (bVar6) {
                                 phVar5 = *(hb_buffer_t**)( param_1 + 0xa0 );
                                 if (( (byte)phVar5[0x18] & 0x40 ) != 0) {
                                    hb_buffer_t::_set_glyph_flags(phVar5, 2, *(uint*)( phVar5 + 0x5c ), uVar15, false, false);
                                    return 0;
                                 }

                              }

                              return 0;
                           }

                        }
 while ( true );
                     }

                  }

                  break;
               }

               LAB_00112384:if (sVar12 == 0) break;
            }

            LAB_0011238c:uVar10 = ( ulong ) * (uint*)( param_1 + 8 );
         }

      }
;
   }

   pLVar17 = this + 2;
   while (true) {
      uVar14 = *(ushort*)pLVar17;
      pLVar16 = (LigatureSet<OT::Layout::SmallTypes>*)&_hb_NullPool;
      if (uVar14 != 0) {
         pLVar16 = this + ( ushort )(uVar14 << 8 | uVar14 >> 8);
      }

      cVar8 = Ligature<OT::Layout::SmallTypes>::apply((Ligature<OT::Layout::SmallTypes>*)pLVar16, param_1);
      if (cVar8 != '\0') break;
      pLVar17 = pLVar17 + 2;
      if (pLVar17 == this + ( ulong )(uVar9 - 1) * 2 + 4) {
         return 0;
      }

   }
;
   return 1;
}
/* bool 
   OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::Layout::GSUB_impl::LigatureSubstFormat1_2<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*) */bool OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::Layout::GSUB_impl::LigatureSubstFormat1_2<OT::Layout::SmallTypes>>(void *param_1, hb_ot_apply_context_t *param_2) {
   ushort uVar1;
   undefined1 uVar2;
   uint uVar3;
   ushort *puVar4;
   Coverage *this;
   LigatureSet<OT::Layout::SmallTypes> *this_00;
   uVar1 = *(ushort*)( (long)param_1 + 2 );
   this(Coverage * ) & _hb_NullPool;
   if (uVar1 != 0) {
      this(Coverage * )((long)param_1 + ( ulong )(ushort)(uVar1 << 8 | uVar1 >> 8));
   }

   uVar3 = Layout::Common::Coverage::get_coverage(this, *(uint*)( *(long*)( *(long*)( param_2 + 0xa0 ) + 0x70 ) + ( ulong ) * (uint*)( *(long*)( param_2 + 0xa0 ) + 0x5c ) * 0x14 ));
   if (uVar3 == 0xffffffff) {
      return false;
   }

   puVar4 = (ushort*)&_hb_NullPool;
   if (uVar3 < ( ushort )(*(ushort*)( (long)param_1 + 4 ) << 8 | *(ushort*)( (long)param_1 + 4 ) >> 8)) {
      puVar4 = (ushort*)( (long)param_1 + (ulong)uVar3 * 2 + 6 );
   }

   uVar1 = *puVar4;
   this_00 = (LigatureSet<OT::Layout::SmallTypes>*)&_hb_NullPool;
   if (uVar1 != 0) {
      this_00 = (LigatureSet<OT::Layout::SmallTypes>*)( (long)param_1 + ( ulong )(ushort)(uVar1 << 8 | uVar1 >> 8) );
   }

   uVar2 = Layout::GSUB_impl::LigatureSet<OT::Layout::SmallTypes>::apply(this_00, param_2);
   return (bool)uVar2;
}
/* bool 
   OT::hb_accelerate_subtables_context_t::apply_to<OT::Layout::GSUB_impl::LigatureSubstFormat1_2<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*) */bool OT::hb_accelerate_subtables_context_t::apply_to<OT::Layout::GSUB_impl::LigatureSubstFormat1_2<OT::Layout::SmallTypes>>(void *param_1, hb_ot_apply_context_t *param_2) {
   ushort uVar1;
   undefined1 uVar2;
   uint uVar3;
   ushort *puVar4;
   Coverage *this;
   LigatureSet<OT::Layout::SmallTypes> *this_00;
   uVar1 = *(ushort*)( (long)param_1 + 2 );
   this(Coverage * ) & _hb_NullPool;
   if (uVar1 != 0) {
      this(Coverage * )((long)param_1 + ( ulong )(ushort)(uVar1 << 8 | uVar1 >> 8));
   }

   uVar3 = Layout::Common::Coverage::get_coverage(this, *(uint*)( *(long*)( *(long*)( param_2 + 0xa0 ) + 0x70 ) + ( ulong ) * (uint*)( *(long*)( param_2 + 0xa0 ) + 0x5c ) * 0x14 ));
   if (uVar3 == 0xffffffff) {
      return false;
   }

   puVar4 = (ushort*)&_hb_NullPool;
   if (uVar3 < ( ushort )(*(ushort*)( (long)param_1 + 4 ) << 8 | *(ushort*)( (long)param_1 + 4 ) >> 8)) {
      puVar4 = (ushort*)( (long)param_1 + (ulong)uVar3 * 2 + 6 );
   }

   uVar1 = *puVar4;
   this_00 = (LigatureSet<OT::Layout::SmallTypes>*)&_hb_NullPool;
   if (uVar1 != 0) {
      this_00 = (LigatureSet<OT::Layout::SmallTypes>*)( (long)param_1 + ( ulong )(ushort)(uVar1 << 8 | uVar1 >> 8) );
   }

   uVar2 = Layout::GSUB_impl::LigatureSet<OT::Layout::SmallTypes>::apply(this_00, param_2);
   return (bool)uVar2;
}
/* OT::ChainRule<OT::Layout::SmallTypes>::apply(OT::hb_ot_apply_context_t*,
   OT::ChainContextApplyLookupContext const&) const */undefined8 OT::ChainRule<OT::Layout::SmallTypes>::apply(ChainRule<OT::Layout::SmallTypes> *this, hb_ot_apply_context_t *param_1, ChainContextApplyLookupContext *param_2) {
   uint *puVar1;
   byte bVar2;
   uint uVar3;
   long lVar4;
   undefined8 uVar5;
   byte bVar6;
   byte bVar7;
   char cVar8;
   ushort uVar9;
   uint uVar10;
   uint *__ptr;
   ulong uVar11;
   ushort *puVar12;
   hb_buffer_t *phVar13;
   undefined8 uVar14;
   ChainRule<OT::Layout::SmallTypes> *pCVar15;
   ulong uVar16;
   hb_ot_apply_context_t hVar17;
   ushort uVar18;
   uint uVar19;
   uint uVar20;
   int iVar21;
   ushort uVar22;
   long lVar23;
   bool bVar24;
   short sVar25;
   uint uVar26;
   uint uVar27;
   uint *puVar28;
   hb_ot_apply_context_t hVar29;
   int iVar30;
   byte bVar31;
   long in_FS_OFFSET;
   ChainRule<OT::Layout::SmallTypes> *local_c0;
   uint *local_98;
   ChainRule<OT::Layout::SmallTypes> *local_88;
   ushort local_7e;
   uint local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar9 = *(ushort*)this << 8 | *(ushort*)this >> 8;
   local_c0 = this + ( uVar9 + 2 + (uint)uVar9 );
   uVar18 = *(ushort*)local_c0 << 8 | *(ushort*)local_c0 >> 8;
   uVar26 = (uint)uVar18;
   if (uVar18 == 0) {
      pCVar15 = local_c0 + 2;
      __ptr = local_58;
      uVar22 = *(ushort*)( local_c0 + 2 ) << 8 | *(ushort*)( local_c0 + 2 ) >> 8;
      uVar20 = (uint)uVar22;
      local_88 = pCVar15 + ( uVar22 + 2 + (uint)uVar22 );
      local_7e = *(ushort*)local_88;
   }
 else {
      pCVar15 = local_c0 + ( (uint)uVar18 + (uint)uVar18 );
      uVar22 = *(ushort*)pCVar15 << 8 | *(ushort*)pCVar15 >> 8;
      uVar20 = (uint)uVar22;
      local_88 = pCVar15 + ( uVar22 + 2 + (uint)uVar22 );
      local_7e = *(ushort*)local_88;
      if (0x40 < uVar26) {
         LAB_001128d8:uVar14 = 0;
         goto LAB_00112ba3;
      }

      __ptr = local_58;
      if (4 < uVar26) {
         uVar20 = (uint)uVar22;
         __ptr = (uint*)malloc((ulong)uVar18 * 4);
         if (__ptr == (uint*)0x0) goto LAB_001128d8;
      }

   }

   local_98 = local_58;
   local_c0 = local_c0 + 2;
   lVar4 = *(long*)( param_1 + 0xa0 );
   uVar14 = *(undefined8*)( param_2 + 0x20 );
   uVar5 = *(undefined8*)( param_2 + 8 );
   lVar23 = *(long*)( *(long*)( param_1 + 0x10 ) + 0xa0 );
   uVar27 = *(uint*)( lVar4 + 0x5c );
   uVar11 = (ulong)uVar27;
   hVar17 = (hb_ot_apply_context_t)0x0;
   iVar21 = *(int*)( lVar23 + 0x60 );
   *(uint*)( param_1 + 8 ) = uVar27;
   *(int*)( param_1 + 0x40 ) = iVar21;
   if (uVar27 == *(uint*)( lVar23 + 0x5c )) {
      hVar17 = *(hb_ot_apply_context_t*)( uVar11 * 0x14 + *(long*)( lVar23 + 0x70 ) + 0xf );
   }

   *(undefined8*)( param_1 + 0x30 ) = uVar14;
   *(ChainRule<OT::Layout::SmallTypes>**)( param_1 + 0x38 ) = local_c0;
   if (param_1[0x23] == (hb_ot_apply_context_t)0x0) {
      hVar17 = (hb_ot_apply_context_t)0x0;
   }

   *(undefined8*)( param_1 + 0x28 ) = uVar5;
   param_1[0x24] = hVar17;
   bVar2 = *(byte*)( *(long*)( lVar4 + 0x70 ) + uVar11 * 0x14 + 0xe );
   bVar31 = bVar2 >> 5;
   bVar7 = 0;
   if (( bVar2 & 0x10 ) == 0) {
      bVar7 = bVar2 & 0xf;
   }

   if (1 < uVar26) {
      puVar28 = __ptr + 1;
      bVar24 = false;
      do {
         LAB_001129fc:do {
            if (iVar21 + -1 <= (int)uVar11) goto LAB_00112b7f;
            uVar19 = (int)uVar11 + 1;
            uVar11 = (ulong)uVar19;
            *(uint*)( param_1 + 8 ) = uVar19;
            puVar1 = (uint*)( *(long*)( *(long*)( *(long*)( param_1 + 0x10 ) + 0xa0 ) + 0x70 ) + uVar11 * 0x14 );
            uVar22 = (ushort)puVar1[3];
            uVar19 = *(uint*)( param_1 + 0x18 ) & (uint)uVar22;
         }
 while ( ( uVar19 & 0xe ) != 0 );
         uVar10 = 0;
         if (( uVar22 & 8 ) != 0) {
            uVar10 = uVar19 & 0xe;
            cVar8 = hb_ot_apply_context_t::match_properties_mark(*(hb_ot_apply_context_t**)( *(long*)( param_1 + 0x10 ) + 0xf8 ), *puVar1, (uint)uVar22, *(uint*)( param_1 + 0x18 ));
            if (cVar8 != '\0') goto LAB_00112a46;
            goto LAB_00112b55;
         }

         LAB_00112a46:uVar22 = (ushort)puVar1[4];
         sVar25 = 0;
         if (( ( uVar22 & 0x20 ) != 0 ) && ( ( puVar1[3] & 0x10 ) == 0 )) {
            if (param_1[0x20] == (hb_ot_apply_context_t)0x0) {
               if (( uVar22 & 0x1f ) == 1) {
                  sVar25 = 0;
                  if (( uVar22 & 0x200 ) != 0) goto LAB_00112a5d;
                  if (param_1[0x21] == (hb_ot_apply_context_t)0x0) goto LAB_00112cb3;
               }

            }
 else if (( param_1[0x21] == (hb_ot_apply_context_t)0x0 ) && ( ( uVar22 & 0x1f ) == 1 )) {
               LAB_00112cb3:sVar25 = 0;
               if (( uVar22 & 0x100 ) != 0) goto LAB_00112a5d;
            }

            if (param_1[0x22] == (hb_ot_apply_context_t)0x0) {
               sVar25 = ( ( uVar22 >> 6 ^ 1 ) & 1 ) * 2;
            }
 else {
               sVar25 = 2;
            }

         }

         LAB_00112a5d:puVar12 = *(ushort**)( param_1 + 0x38 );
         if (puVar12 != (ushort*)0x0) {
            uVar10 = ( uint )(ushort)(*puVar12 << 8 | *puVar12 >> 8);
         }

         if (( ( puVar1[1] & *(uint*)( param_1 + 0x1c ) ) == 0 ) || ( ( param_1[0x24] != (hb_ot_apply_context_t)0x0 && ( param_1[0x24] != *(hb_ot_apply_context_t*)( (long)puVar1 + 0xf ) ) ) )) {
            LAB_00112b50:if (sVar25 == 0) goto LAB_00112b7f;
            LAB_00112b55:uVar11 = ( ulong ) * (uint*)( param_1 + 8 );
            goto LAB_001129fc;
         }

         if (*(code**)( param_1 + 0x28 ) == (code*)0x0) {
            if (sVar25 != 0) goto LAB_00112b55;
            goto LAB_00112abf;
         }

         cVar8 = ( **(code**)( param_1 + 0x28 ) )(puVar1, uVar10, *(undefined8*)( param_1 + 0x30 ));
         if (cVar8 == '\0') goto LAB_00112b50;
         puVar12 = *(ushort**)( param_1 + 0x38 );
         LAB_00112abf:if (puVar12 != (ushort*)0x0) {
            *(ushort**)( param_1 + 0x38 ) = puVar12 + 1;
         }

         uVar11 = ( ulong ) * (uint*)( param_1 + 8 );
         *puVar28 = *(uint*)( param_1 + 8 );
         bVar2 = *(byte*)( uVar11 * 0x14 + *(long*)( lVar4 + 0x70 ) + 0xe );
         if (( bVar2 & 0x10 ) == 0) {
            bVar6 = bVar2 >> 5;
            if (bVar31 == 0 || bVar7 == 0) {
               if (( ( bVar2 & 0xf ) != 0 && bVar6 != 0 ) && ( bVar31 != bVar6 )) goto LAB_00112b7f;
            }
 else if (( bVar7 != ( bVar2 & 0xf ) ) || ( bVar31 != bVar6 )) goto LAB_00112bd9;
         }
 else if (bVar31 != 0 && bVar7 != 0) {
            LAB_00112bd9:if (!bVar24) {
               uVar16 = ( ulong ) * (uint*)( lVar4 + 100 );
               do {
                  if ((int)uVar16 == 0) goto LAB_00112b7f;
                  uVar16 = ( ulong )((int)uVar16 - 1);
                  puVar1 = (uint*)( *(long*)( lVar4 + 0x78 ) + uVar16 * 0x14 );
                  bVar2 = *(byte*)( (long)puVar1 + 0xe );
                  if (bVar31 != bVar2 >> 5) goto LAB_00112b7f;
               }
 while ( ( ( bVar2 & 0x10 ) == 0 ) && ( ( bVar2 & 0xf ) != 0 ) );
               uVar22 = (ushort)puVar1[3];
               if (( *(uint*)( param_1 + 0x18 ) & (uint)uVar22 & 0xe ) == 0) {
                  if (( ( uVar22 & 8 ) != 0 ) && ( cVar8 = hb_ot_apply_context_t::match_properties_mark(*(hb_ot_apply_context_t**)( *(long*)( param_1 + 0x10 ) + 0xf8 ), *puVar1, (uint)uVar22, *(uint*)( param_1 + 0x18 )) ),cVar8 == '\0') {
                     bVar24 = true;
                     uVar11 = ( ulong ) * (uint*)( param_1 + 8 );
                     goto LAB_00112b2e;
                  }

                  goto LAB_00112b7f;
               }

            }

            bVar24 = true;
         }

         LAB_00112b2e:puVar28 = puVar28 + 1;
         if (puVar28 == __ptr + ( ulong )(uVar18 - 2) + 2) goto LAB_00112d90;
         iVar21 = *(int*)( param_1 + 0x40 );
      }
 while ( true );
   }

   goto LAB_00112dbb;
   LAB_00112d90:uVar27 = *(uint*)( lVar4 + 0x5c );
   LAB_00112dbb:iVar21 = (int)uVar11;
   *__ptr = uVar27;
   uVar19 = iVar21 + 1;
   if (uVar19 == 0) {
      uVar27 = 0;
      LAB_00112b7f:phVar13 = *(hb_buffer_t**)( param_1 + 0xa0 );
      uVar20 = *(uint*)( phVar13 + 0x5c );
      if (( (byte)phVar13[0x18] & 0x40 ) != 0) {
         bVar24 = false;
         LAB_00112c50:hb_buffer_t::_set_glyph_flags(phVar13, 2, uVar20, uVar27, false, bVar24);
      }

      LAB_00112b93:uVar14 = 0;
   }
 else {
      lVar23 = *(long*)( param_1 + 0x50 );
      uVar14 = *(undefined8*)( param_2 + 0x28 );
      hVar17 = (hb_ot_apply_context_t)0x0;
      uVar5 = *(undefined8*)( param_2 + 0x10 );
      *(int*)( param_1 + 0x48 ) = iVar21;
      lVar4 = *(long*)( lVar23 + 0xa0 );
      iVar30 = *(int*)( lVar4 + 0x60 );
      *(int*)( param_1 + 0x80 ) = iVar30;
      if (*(int*)( lVar4 + 0x5c ) == iVar21) {
         hVar17 = *(hb_ot_apply_context_t*)( *(long*)( lVar4 + 0x70 ) + uVar11 * 0x14 + 0xf );
      }

      hVar29 = param_1[99];
      *(undefined8*)( param_1 + 0x68 ) = uVar5;
      if (hVar29 == (hb_ot_apply_context_t)0x0) {
         hVar17 = (hb_ot_apply_context_t)0x0;
      }

      param_1[100] = hVar17;
      *(undefined8*)( param_1 + 0x70 ) = uVar14;
      *(ChainRule<OT::Layout::SmallTypes>**)( param_1 + 0x78 ) = pCVar15 + 2;
      uVar27 = uVar19;
      if (uVar20 != 0) {
         uVar27 = 0;
         iVar30 = iVar30 + -1;
         LAB_00112e59:do {
            while (true) {
               do {
                  if (iVar30 <= (int)uVar11) {
                     uVar27 = *(uint*)( param_1 + 0x80 );
                     goto LAB_00112b7f;
                  }

                  uVar10 = (int)uVar11 + 1;
                  uVar11 = (ulong)uVar10;
                  *(uint*)( param_1 + 0x48 ) = uVar10;
                  puVar28 = (uint*)( *(long*)( *(long*)( *(long*)( param_1 + 0x50 ) + 0xa0 ) + 0x70 ) + uVar11 * 0x14 );
                  uVar18 = (ushort)puVar28[3];
               }
 while ( ( *(uint*)( param_1 + 0x58 ) & (uint)uVar18 & 0xe ) != 0 );
               if (( ( uVar18 & 8 ) == 0 ) || ( cVar8 = hb_ot_apply_context_t::match_properties_mark(*(hb_ot_apply_context_t**)( *(long*)( param_1 + 0x50 ) + 0xf8 ), *puVar28, (uint)uVar18, *(uint*)( param_1 + 0x58 )) ),cVar8 != '\0') break;
               LAB_00112f9a:uVar11 = ( ulong ) * (uint*)( param_1 + 0x48 );
            }
;
            uVar18 = (ushort)puVar28[4];
            sVar25 = 0;
            if (( ( uVar18 & 0x20 ) != 0 ) && ( ( puVar28[3] & 0x10 ) == 0 )) {
               if (param_1[0x60] == (hb_ot_apply_context_t)0x0) {
                  if (( uVar18 & 0x1f ) == 1) {
                     sVar25 = 0;
                     if (( uVar18 & 0x200 ) != 0) goto LAB_00112ee8;
                     if (param_1[0x61] == (hb_ot_apply_context_t)0x0) goto LAB_00112fea;
                  }

               }
 else if (( param_1[0x61] == (hb_ot_apply_context_t)0x0 ) && ( ( uVar18 & 0x1f ) == 1 )) {
                  LAB_00112fea:sVar25 = 0;
                  if (( uVar18 & 0x100 ) != 0) goto LAB_00112ee8;
               }

               if (param_1[0x62] == (hb_ot_apply_context_t)0x0) {
                  sVar25 = ( ( uVar18 >> 6 ^ 1 ) & 1 ) * 2;
               }
 else {
                  sVar25 = 2;
               }

            }

            LAB_00112ee8:puVar12 = *(ushort**)( param_1 + 0x78 );
            uVar18 = 0;
            if (puVar12 != (ushort*)0x0) {
               uVar18 = *puVar12 << 8 | *puVar12 >> 8;
            }

            if (( ( puVar28[1] & *(uint*)( param_1 + 0x5c ) ) != 0 ) && ( ( param_1[100] == (hb_ot_apply_context_t)0x0 || ( param_1[100] == *(hb_ot_apply_context_t*)( (long)puVar28 + 0xf ) ) ) )) {
               if (*(code**)( param_1 + 0x68 ) == (code*)0x0) {
                  if (sVar25 != 0) goto LAB_00112f9a;
               }
 else {
                  cVar8 = ( **(code**)( param_1 + 0x68 ) )(puVar28, uVar18, *(undefined8*)( param_1 + 0x70 ));
                  if (cVar8 == '\0') goto LAB_00112f70;
                  puVar12 = *(ushort**)( param_1 + 0x78 );
               }

               if (puVar12 != (ushort*)0x0) {
                  *(ushort**)( param_1 + 0x78 ) = puVar12 + 1;
               }

               uVar27 = uVar27 + 1;
               uVar11 = ( ulong ) * (uint*)( param_1 + 0x48 );
               if (uVar27 == uVar20) {
                  lVar23 = *(long*)( param_1 + 0x50 );
                  hVar29 = param_1[99];
                  uVar27 = *(uint*)( param_1 + 0x48 ) + 1;
                  goto LAB_0011302b;
               }

               iVar30 = *(int*)( param_1 + 0x80 ) + -1;
               goto LAB_00112e59;
            }

            LAB_00112f70:uVar11 = ( ulong ) * (uint*)( param_1 + 0x48 );
         }
 while ( sVar25 != 0 );
         uVar27 = *(uint*)( param_1 + 0x48 ) + 1;
         goto LAB_00112b7f;
      }

      LAB_0011302b:phVar13 = *(hb_buffer_t**)( param_1 + 0xa0 );
      uVar14 = *(undefined8*)( param_2 + 0x18 );
      uVar5 = *(undefined8*)param_2;
      if (phVar13[0x5a] == (hb_buffer_t)0x0) {
         uVar20 = *(uint*)( phVar13 + 0x5c );
      }
 else {
         uVar20 = *(uint*)( phVar13 + 100 );
      }

      uVar11 = (ulong)uVar20;
      lVar4 = *(long*)( lVar23 + 0xa0 );
      *(uint*)( param_1 + 0x48 ) = uVar20;
      *(undefined4*)( param_1 + 0x80 ) = *(undefined4*)( lVar4 + 0x60 );
      hVar17 = (hb_ot_apply_context_t)0x0;
      if (*(uint*)( lVar4 + 0x5c ) == uVar20) {
         hVar17 = *(hb_ot_apply_context_t*)( *(long*)( lVar4 + 0x70 ) + uVar11 * 0x14 + 0xf );
      }

      *(undefined8*)( param_1 + 0x68 ) = uVar5;
      if (hVar29 == (hb_ot_apply_context_t)0x0) {
         hVar17 = (hb_ot_apply_context_t)0x0;
      }

      uVar10 = 0;
      param_1[100] = hVar17;
      *(undefined8*)( param_1 + 0x70 ) = uVar14;
      *(ChainRule<OT::Layout::SmallTypes>**)( param_1 + 0x78 ) = this + 2;
      if (uVar9 == 0) {
         uVar20 = *(uint*)( param_1 + 0x48 );
      }
 else {
         LAB_001130a1:do {
            do {
               uVar20 = (uint)uVar11;
               if (uVar20 == 0) {
                  LAB_00113240:phVar13 = *(hb_buffer_t**)( param_1 + 0xa0 );
                  if (( (byte)phVar13[0x18] & 0x40 ) == 0) goto LAB_00112b93;
                  bVar24 = true;
                  goto LAB_00112c50;
               }

               uVar11 = ( ulong )(uVar20 - 1);
               *(uint*)( param_1 + 0x48 ) = uVar20 - 1;
               puVar28 = (uint*)( *(long*)( *(long*)( *(long*)( param_1 + 0x50 ) + 0xa0 ) + 0x78 ) + uVar11 * 0x14 );
               uVar18 = (ushort)puVar28[3];
            }
 while ( ( *(uint*)( param_1 + 0x58 ) & (uint)uVar18 & 0xe ) != 0 );
            if (( ( uVar18 & 8 ) != 0 ) && ( cVar8 = hb_ot_apply_context_t::match_properties_mark(*(hb_ot_apply_context_t**)( *(long*)( param_1 + 0x50 ) + 0xf8 ), *puVar28, (uint)uVar18, *(uint*)( param_1 + 0x58 )) ),cVar8 == '\0') {
               LAB_0011327a:uVar11 = ( ulong ) * (uint*)( param_1 + 0x48 );
               goto LAB_001130a1;
            }

            uVar18 = (ushort)puVar28[4];
            sVar25 = 0;
            if (( ( uVar18 & 0x20 ) != 0 ) && ( ( puVar28[3] & 0x10 ) == 0 )) {
               if (param_1[0x60] == (hb_ot_apply_context_t)0x0) {
                  if (( uVar18 & 0x1f ) == 1) {
                     sVar25 = 0;
                     if (( uVar18 & 0x200 ) != 0) goto LAB_00113129;
                     if (param_1[0x61] == (hb_ot_apply_context_t)0x0) goto LAB_001132c4;
                  }

               }
 else if (( param_1[0x61] == (hb_ot_apply_context_t)0x0 ) && ( ( uVar18 & 0x1f ) == 1 )) {
                  LAB_001132c4:sVar25 = 0;
                  if (( uVar18 & 0x100 ) != 0) goto LAB_00113129;
               }

               if (param_1[0x62] == (hb_ot_apply_context_t)0x0) {
                  sVar25 = ( ( uVar18 >> 6 ^ 1 ) & 1 ) * 2;
               }
 else {
                  sVar25 = 2;
               }

            }

            LAB_00113129:puVar12 = *(ushort**)( param_1 + 0x78 );
            uVar18 = 0;
            if (puVar12 != (ushort*)0x0) {
               uVar18 = *puVar12 << 8 | *puVar12 >> 8;
            }

            if (( ( puVar28[1] & *(uint*)( param_1 + 0x5c ) ) == 0 ) || ( ( param_1[100] != (hb_ot_apply_context_t)0x0 && ( param_1[100] != *(hb_ot_apply_context_t*)( (long)puVar28 + 0xf ) ) ) )) {
               LAB_00113228:uVar3 = *(uint*)( param_1 + 0x48 );
               uVar11 = (ulong)uVar3;
               if (sVar25 == 0) {
                  uVar20 = 1;
                  if (uVar3 != 0) {
                     uVar20 = uVar3;
                  }

                  uVar20 = uVar20 - 1;
                  goto LAB_00113240;
               }

               goto LAB_001130a1;
            }

            if (*(code**)( param_1 + 0x68 ) == (code*)0x0) {
               if (sVar25 != 0) goto LAB_0011327a;
            }
 else {
               cVar8 = ( **(code**)( param_1 + 0x68 ) )(puVar28, uVar18, *(undefined8*)( param_1 + 0x70 ));
               if (cVar8 == '\0') goto LAB_00113228;
               puVar12 = *(ushort**)( param_1 + 0x78 );
            }

            if (puVar12 != (ushort*)0x0) {
               *(ushort**)( param_1 + 0x78 ) = puVar12 + 1;
            }

            uVar20 = *(uint*)( param_1 + 0x48 );
            uVar10 = uVar10 + 1;
            uVar11 = (ulong)uVar20;
         }
 while ( uVar10 != uVar9 );
         phVar13 = *(hb_buffer_t**)( param_1 + 0xa0 );
      }

      hb_buffer_t::_set_glyph_flags(phVar13, 3, uVar20, uVar27, true, true);
      apply_lookup(param_1, uVar26, __ptr, ( uint )(ushort)(local_7e << 8 | local_7e >> 8), (LookupRecord*)( local_88 + 2 ), uVar19);
      uVar14 = 1;
   }

   if (__ptr != local_98) {
      free(__ptr);
   }

   LAB_00112ba3:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar14;
}
/* OT::ChainRuleSet<OT::Layout::SmallTypes>::apply(OT::hb_ot_apply_context_t*,
   OT::ChainContextApplyLookupContext const&) const */ulong __thiscall
OT::ChainRuleSet<OT::Layout::SmallTypes>::apply
          (ChainRuleSet<OT::Layout::SmallTypes> *this,hb_ot_apply_context_t *param_1,
          ChainContextApplyLookupContext *param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  hb_buffer_t *phVar8;
  char cVar9;
  ushort uVar10;
  ushort uVar11;
  ushort *puVar12;
  ulong uVar13;
  short sVar14;
  hb_ot_apply_context_t hVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  ChainRuleSet<OT::Layout::SmallTypes> *pCVar19;
  ChainRule<OT::Layout::SmallTypes> *pCVar20;
  ChainRuleSet<OT::Layout::SmallTypes> *pCVar21;
  uint uVar22;
  ChainRule<OT::Layout::SmallTypes> *pCVar23;
  uint local_58;
  uint local_3c;
  
  uVar10 = *(ushort *)this << 8 | *(ushort *)this >> 8;
  uVar22 = (uint)uVar10;
  if (uVar10 < 5) {
LAB_001136d0:
    if (uVar22 == 0) {
      return 0;
    }
  }
  else if ((param_1[0x13d] != (hb_ot_apply_context_t)0x0) &&
          (param_1[0x13e] != (hb_ot_apply_context_t)0x0)) {
    lVar18 = *(long *)(*(long *)(param_1 + 0x10) + 0xa0);
    uVar16 = *(uint *)(*(long *)(param_1 + 0xa0) + 0x5c);
    uVar13 = (ulong)uVar16;
    hVar15 = (hb_ot_apply_context_t)0x0;
    iVar3 = *(int *)(lVar18 + 0x60);
    *(uint *)(param_1 + 8) = uVar16;
    *(int *)(param_1 + 0x40) = iVar3;
    if (uVar16 == *(uint *)(lVar18 + 0x5c)) {
      hVar15 = *(hb_ot_apply_context_t *)(*(long *)(lVar18 + 0x70) + (ulong)uVar16 * 0x14 + 0xf);
    }
    if (param_1[0x23] == (hb_ot_apply_context_t)0x0) {
      hVar15 = (hb_ot_apply_context_t)0x0;
    }
    *(code **)(param_1 + 0x28) = match_always;
    *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
    param_1[0x24] = hVar15;
    while ((int)uVar13 < iVar3 + -1) {
      uVar16 = (int)uVar13 + 1;
      uVar13 = (ulong)uVar16;
      *(uint *)(param_1 + 8) = uVar16;
      puVar1 = (uint *)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0xa0) + 0x70) +
                       uVar13 * 0x14);
      uVar10 = (ushort)puVar1[3];
      uVar16 = *(uint *)(param_1 + 0x18) & (uint)uVar10;
      if ((uVar16 & 0xe) == 0) {
        uVar17 = 0;
        if ((uVar10 & 8) == 0) {
LAB_00113435:
          uVar10 = (ushort)puVar1[4];
          sVar14 = 0;
          if (((uVar10 & 0x20) != 0) && ((puVar1[3] & 0x10) == 0)) {
            if (param_1[0x20] == (hb_ot_apply_context_t)0x0) {
              if ((uVar10 & 0x1f) == 1) {
                sVar14 = 0;
                if ((uVar10 & 0x200) != 0) goto LAB_00113444;
                if (param_1[0x21] == (hb_ot_apply_context_t)0x0) goto LAB_00113beb;
              }
            }
            else if ((param_1[0x21] == (hb_ot_apply_context_t)0x0) && ((uVar10 & 0x1f) == 1)) {
LAB_00113beb:
              sVar14 = 0;
              if ((uVar10 & 0x100) != 0) goto LAB_00113444;
            }
            if (param_1[0x22] == (hb_ot_apply_context_t)0x0) {
              sVar14 = ((uVar10 >> 6 ^ 1) & 1) * 2;
            }
            else {
              sVar14 = 2;
            }
          }
LAB_00113444:
          puVar12 = *(ushort **)(param_1 + 0x38);
          if (puVar12 != (ushort *)0x0) {
            uVar17 = (uint)(ushort)(*puVar12 << 8 | *puVar12 >> 8);
          }
          if (((puVar1[1] & *(uint *)(param_1 + 0x1c)) != 0) &&
             ((param_1[0x24] == (hb_ot_apply_context_t)0x0 ||
              (param_1[0x24] == *(hb_ot_apply_context_t *)((long)puVar1 + 0xf))))) {
            if (*(code **)(param_1 + 0x28) == (code *)0x0) {
              if (sVar14 != 0) goto LAB_00113888;
            }
            else {
              cVar9 = (**(code **)(param_1 + 0x28))(puVar1,uVar17,*(undefined8 *)(param_1 + 0x30));
              if (cVar9 == '\0') goto LAB_00113742;
              puVar12 = *(ushort **)(param_1 + 0x38);
            }
            if (puVar12 != (ushort *)0x0) {
              *(ushort **)(param_1 + 0x38) = puVar12 + 1;
            }
            uVar16 = *(uint *)(param_1 + 8);
            puVar1 = (uint *)(*(long *)(*(long *)(param_1 + 0xa0) + 0x70) + (ulong)uVar16 * 0x14);
            uVar10 = (ushort)puVar1[3];
            if (((*(uint *)(param_1 + 0x18) & (uint)uVar10 & 0xe) == 0) &&
               (((uVar10 & 8) == 0 ||
                (cVar9 = hb_ot_apply_context_t::match_properties_mark
                                   (*(hb_ot_apply_context_t **)(*(long *)(param_1 + 0x10) + 0xf8),
                                    *puVar1,(uint)uVar10,*(uint *)(param_1 + 0x18)), cVar9 != '\0'))
               )) {
              uVar17 = puVar1[4];
              if (((uVar17 & 0x20) != 0) && ((puVar1[3] & 0x10) == 0)) {
                if (param_1[0x20] == (hb_ot_apply_context_t)0x0) {
                  if ((uVar17 & 0x1f) == 1) {
                    if ((uVar17 & 0x200) != 0) goto LAB_00113500;
                    if (param_1[0x21] == (hb_ot_apply_context_t)0x0) goto LAB_00113c69;
                  }
                }
                else if ((param_1[0x21] == (hb_ot_apply_context_t)0x0) && ((uVar17 & 0x1f) == 1)) {
LAB_00113c69:
                  if ((uVar17 & 0x100) != 0) goto LAB_00113500;
                }
                if ((param_1[0x22] != (hb_ot_apply_context_t)0x0) || ((uVar17 & 0x40) == 0))
                goto LAB_001136bd;
              }
LAB_00113500:
              iVar3 = *(int *)(param_1 + 0x40);
              goto LAB_00113507;
            }
LAB_001136bd:
            uVar22 = (uint)(ushort)(*(ushort *)this << 8 | *(ushort *)this >> 8);
            goto LAB_001136d0;
          }
LAB_00113742:
          if (sVar14 == 0) break;
        }
        else {
          uVar17 = uVar16 & 0xe;
          cVar9 = hb_ot_apply_context_t::match_properties_mark
                            (*(hb_ot_apply_context_t **)(*(long *)(param_1 + 0x10) + 0xf8),*puVar1,
                             (uint)uVar10,*(uint *)(param_1 + 0x18));
          if (cVar9 != '\0') goto LAB_00113435;
        }
LAB_00113888:
        uVar13 = (ulong)*(uint *)(param_1 + 8);
      }
    }
    pCVar19 = this + 2;
    uVar10 = *(ushort *)this << 8 | *(ushort *)this >> 8;
    uVar22 = (uint)uVar10;
    if (uVar10 == 0) {
      return 0;
    }
    while( true ) {
      uVar10 = *(ushort *)pCVar19;
      pCVar21 = (ChainRuleSet<OT::Layout::SmallTypes> *)&_hb_NullPool;
      if (uVar10 != 0) {
        pCVar21 = this + (ushort)(uVar10 << 8 | uVar10 >> 8);
      }
      uVar10 = *(ushort *)
                (pCVar21 +
                (ulong)(ushort)(*(ushort *)pCVar21 << 8 | *(ushort *)pCVar21 >> 8) * 2 + 2);
      uVar10 = uVar10 << 8 | uVar10 >> 8;
      if (((uVar10 == 0) || (uVar10 == 1)) &&
         (*(ushort *)
           (pCVar21 + (ulong)(ushort)(*(ushort *)pCVar21 << 8 | *(ushort *)pCVar21 >> 8) * 2 + 2 + 2
           ) == 0)) break;
      pCVar19 = pCVar19 + 2;
      uVar22 = uVar22 - 1;
      if (uVar22 == 0) {
        return 0;
      }
    }
    uVar10 = *(ushort *)pCVar19;
    while( true ) {
      pCVar20 = (ChainRule<OT::Layout::SmallTypes> *)&_hb_NullPool;
      if (uVar10 != 0) {
        pCVar20 = (ChainRule<OT::Layout::SmallTypes> *)(this + (ushort)(uVar10 << 8 | uVar10 >> 8));
      }
      uVar13 = ChainRule<OT::Layout::SmallTypes>::apply(pCVar20,param_1,param_2);
      if ((char)uVar13 != '\0') break;
      do {
        uVar22 = uVar22 - 1;
        if (uVar22 == 0) {
          return 0;
        }
        pCVar19 = pCVar19 + 2;
        uVar10 = *(ushort *)pCVar19;
        pCVar21 = (ChainRuleSet<OT::Layout::SmallTypes> *)&_hb_NullPool;
        if (uVar10 != 0) {
          pCVar21 = this + (ushort)(uVar10 << 8 | uVar10 >> 8);
        }
        uVar11 = *(ushort *)
                  (pCVar21 +
                  (ulong)(ushort)(*(ushort *)pCVar21 << 8 | *(ushort *)pCVar21 >> 8) * 2 + 2);
        uVar11 = uVar11 << 8 | uVar11 >> 8;
      } while (((uVar11 != 0) && (uVar11 != 1)) ||
              (*(ushort *)
                (pCVar21 + (ulong)(ushort)(*(ushort *)pCVar21 << 8 | *(ushort *)pCVar21 >> 8) * 2 +
                           2 + 2) != 0));
    }
    return uVar13;
  }
  pCVar19 = this + 2;
  while( true ) {
    uVar10 = *(ushort *)pCVar19;
    pCVar21 = (ChainRuleSet<OT::Layout::SmallTypes> *)&_hb_NullPool;
    if (uVar10 != 0) {
      pCVar21 = this + (ushort)(uVar10 << 8 | uVar10 >> 8);
    }
    uVar13 = ChainRule<OT::Layout::SmallTypes>::apply
                       ((ChainRule<OT::Layout::SmallTypes> *)pCVar21,param_1,param_2);
    if ((char)uVar13 != '\0') break;
    pCVar19 = pCVar19 + 2;
    if (pCVar19 == this + (ulong)(uVar22 - 1) * 2 + 4) {
      return 0;
    }
  }
  return uVar13;
LAB_00113507:
  do {
    do {
      uVar13 = (ulong)*(uint *)(param_1 + 8);
      do {
        if (iVar3 + -1 <= (int)uVar13) goto LAB_001138f9;
        uVar17 = (int)uVar13 + 1;
        uVar13 = (ulong)uVar17;
        *(uint *)(param_1 + 8) = uVar17;
        puVar2 = (uint *)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0xa0) + 0x70) +
                         uVar13 * 0x14);
        uVar10 = (ushort)puVar2[3];
      } while ((*(uint *)(param_1 + 0x18) & (uint)uVar10 & 0xe) != 0);
    } while (((uVar10 & 8) != 0) &&
            (cVar9 = hb_ot_apply_context_t::match_properties_mark
                               (*(hb_ot_apply_context_t **)(*(long *)(param_1 + 0x10) + 0xf8),
                                *puVar2,(uint)uVar10,*(uint *)(param_1 + 0x18)), cVar9 == '\0'));
    uVar10 = (ushort)puVar2[4];
    sVar14 = 0;
    if (((uVar10 & 0x20) != 0) && ((puVar2[3] & 0x10) == 0)) {
      if (param_1[0x20] == (hb_ot_apply_context_t)0x0) {
        if ((uVar10 & 0x1f) == 1) {
          sVar14 = 0;
          if ((uVar10 & 0x200) != 0) goto LAB_00113598;
          if (param_1[0x21] == (hb_ot_apply_context_t)0x0) goto LAB_00113c8a;
        }
      }
      else if ((param_1[0x21] == (hb_ot_apply_context_t)0x0) && ((uVar10 & 0x1f) == 1)) {
LAB_00113c8a:
        sVar14 = 0;
        if ((uVar10 & 0x100) != 0) goto LAB_00113598;
      }
      if (param_1[0x22] == (hb_ot_apply_context_t)0x0) {
        sVar14 = ((uVar10 >> 6 ^ 1) & 1) * 2;
      }
      else {
        sVar14 = 2;
      }
    }
LAB_00113598:
    puVar12 = *(ushort **)(param_1 + 0x38);
    uVar10 = 0;
    if (puVar12 != (ushort *)0x0) {
      uVar10 = *puVar12 << 8 | *puVar12 >> 8;
    }
    if (((puVar2[1] & *(uint *)(param_1 + 0x1c)) != 0) &&
       ((param_1[0x24] == (hb_ot_apply_context_t)0x0 ||
        (param_1[0x24] == *(hb_ot_apply_context_t *)((long)puVar2 + 0xf))))) {
      if (*(code **)(param_1 + 0x28) == (code *)0x0) {
        if (sVar14 != 0) goto LAB_00113507;
      }
      else {
        cVar9 = (**(code **)(param_1 + 0x28))(puVar2,uVar10,*(undefined8 *)(param_1 + 0x30));
        if (cVar9 == '\0') goto LAB_001138f1;
        puVar12 = *(ushort **)(param_1 + 0x38);
      }
      if (puVar12 != (ushort *)0x0) {
        *(ushort **)(param_1 + 0x38) = puVar12 + 1;
      }
      puVar2 = (uint *)(*(long *)(*(long *)(param_1 + 0xa0) + 0x70) +
                       (ulong)*(uint *)(param_1 + 8) * 0x14);
      uVar10 = (ushort)puVar2[3];
      if (((*(uint *)(param_1 + 0x18) & (uint)uVar10 & 0xe) != 0) ||
         (((uVar10 & 8) != 0 &&
          (cVar9 = hb_ot_apply_context_t::match_properties_mark
                             (*(hb_ot_apply_context_t **)(*(long *)(param_1 + 0x10) + 0xf8),*puVar2,
                              (uint)uVar10,*(uint *)(param_1 + 0x18)), cVar9 == '\0')))) break;
      uVar17 = puVar2[4];
      if (((uVar17 & 0x20) != 0) && ((puVar2[3] & 0x10) == 0)) {
        if (param_1[0x20] == (hb_ot_apply_context_t)0x0) {
          if ((uVar17 & 0x1f) == 1) {
            if ((uVar17 & 0x200) != 0) goto LAB_0011367d;
            if (param_1[0x21] == (hb_ot_apply_context_t)0x0) goto LAB_00113cca;
          }
        }
        else if ((param_1[0x21] == (hb_ot_apply_context_t)0x0) && ((uVar17 & 0x1f) == 1)) {
LAB_00113cca:
          if ((uVar17 & 0x100) != 0) goto LAB_0011367d;
        }
        if ((param_1[0x22] != (hb_ot_apply_context_t)0x0) || ((uVar17 & 0x40) == 0)) break;
      }
LAB_0011367d:
      local_3c = *(uint *)(param_1 + 8) + 1;
      lVar18 = *(long *)(*(long *)(param_1 + 0xa0) + 0x70) + (ulong)*(uint *)(param_1 + 8) * 0x14;
      goto LAB_00113903;
    }
LAB_001138f1:
  } while (sVar14 != 0);
LAB_001138f9:
  local_3c = 0;
  lVar18 = 0;
LAB_00113903:
  pCVar19 = this + 2;
  pcVar4 = *(code **)(param_2 + 8);
  pcVar5 = *(code **)(param_2 + 0x10);
  local_58 = 0xffffffff;
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  do {
    uVar10 = *(ushort *)pCVar19;
    pCVar21 = (ChainRuleSet<OT::Layout::SmallTypes> *)&_hb_NullPool;
    if (uVar10 != 0) {
      pCVar21 = this + (ushort)(uVar10 << 8 | uVar10 >> 8);
    }
    pCVar20 = (ChainRule<OT::Layout::SmallTypes> *)pCVar21 +
              (ulong)(ushort)(*(ushort *)pCVar21 << 8 | *(ushort *)pCVar21 >> 8) * 2 + 2;
    uVar10 = *(ushort *)pCVar20 << 8 | *(ushort *)pCVar20 >> 8;
    if (uVar10 == 0) {
      pCVar23 = pCVar20 + 2;
LAB_00113b24:
      if ((*(ushort *)pCVar23 == 0) || (pcVar5 == (code *)0x0)) goto LAB_00113a30;
      cVar9 = (*pcVar5)(puVar1,*(ushort *)(pCVar23 + 2) << 8 | *(ushort *)(pCVar23 + 2) >> 8,uVar7);
      if (cVar9 != '\0') {
        if (lVar18 != 0) {
          uVar17 = 1;
          goto LAB_001139f6;
        }
        goto LAB_00113a30;
      }
LAB_00113b70:
      if (local_58 == 0xffffffff) {
        local_58 = uVar16 + 1;
      }
    }
    else {
      pCVar23 = pCVar20 + ((uint)uVar10 + (uint)uVar10);
      if (uVar10 == 1) goto LAB_00113b24;
      if (pcVar4 == (code *)0x0) {
        if ((lVar18 != 0) && (uVar10 == 2)) {
LAB_001139f4:
          uVar17 = 0;
LAB_001139f6:
          if ((uVar17 < (ushort)(*(ushort *)pCVar23 << 8 | *(ushort *)pCVar23 >> 8)) &&
             (pcVar5 != (code *)0x0)) {
            cVar9 = (*pcVar5)(lVar18,*(ushort *)(pCVar23 + (ulong)(uVar17 + 1) * 2) << 8 |
                                     *(ushort *)(pCVar23 + (ulong)(uVar17 + 1) * 2) >> 8,uVar7);
            goto joined_r0x00113a2b;
          }
        }
      }
      else {
        cVar9 = (*pcVar4)(puVar1,*(ushort *)(pCVar20 + 2) << 8 | *(ushort *)(pCVar20 + 2) >> 8,uVar6
                         );
        if (cVar9 == '\0') goto LAB_00113b70;
        if (lVar18 == 0) goto LAB_00113a30;
        if (uVar10 == 2) goto LAB_001139f4;
        cVar9 = (*pcVar4)(lVar18,*(ushort *)(pCVar20 + 4) << 8 | *(ushort *)(pCVar20 + 4) >> 8,uVar6
                         );
joined_r0x00113a2b:
        if (cVar9 == '\0') {
          local_58 = local_3c;
          goto LAB_00113ab8;
        }
      }
LAB_00113a30:
      uVar13 = ChainRule<OT::Layout::SmallTypes>::apply
                         ((ChainRule<OT::Layout::SmallTypes> *)pCVar21,param_1,param_2);
      if ((char)uVar13 != '\0') {
        if (local_58 == 0xffffffff) {
          return uVar13;
        }
        phVar8 = *(hb_buffer_t **)(param_1 + 0xa0);
        if (((byte)phVar8[0x18] & 0x40) == 0) {
          return uVar13;
        }
        hb_buffer_t::_set_glyph_flags(phVar8,2,*(uint *)(phVar8 + 0x5c),local_58,false,false);
        return uVar13 & 0xff;
      }
    }
LAB_00113ab8:
    pCVar19 = pCVar19 + 2;
    if (pCVar19 == this + (ulong)(uVar22 - 1) * 2 + 4) {
      if ((local_58 != 0xffffffff) &&
         (phVar8 = *(hb_buffer_t **)(param_1 + 0xa0), ((byte)phVar8[0x18] & 0x40) != 0)) {
        hb_buffer_t::_set_glyph_flags(phVar8,2,*(uint *)(phVar8 + 0x5c),local_58,false,false);
      }
      return 0;
    }
  } while( true );
}



/* bool 
   OT::hb_accelerate_subtables_context_t::apply_to<OT::ChainContextFormat1_4<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*) */

bool OT::hb_accelerate_subtables_context_t::
     apply_to<OT::ChainContextFormat1_4<OT::Layout::SmallTypes>>
               (void *param_1,hb_ot_apply_context_t *param_2)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar3;
  ushort *puVar4;
  Coverage *this;
  ChainRuleSet<OT::Layout::SmallTypes> *this_00;
  long in_FS_OFFSET;
  code *local_58;
  code *pcStack_50;
  code *local_48;
  undefined1 local_40 [16];
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(ushort *)((long)param_1 + 2);
  this = (Coverage *)&_hb_NullPool;
  if (uVar1 != 0) {
    this = (Coverage *)((long)param_1 + (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8));
  }
  uVar3 = Layout::Common::Coverage::get_coverage
                    (this,*(uint *)(*(long *)(*(long *)(param_2 + 0xa0) + 0x70) +
                                   (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c) * 0x14));
  uVar2 = 0;
  if (uVar3 != 0xffffffff) {
    puVar4 = (ushort *)&_hb_NullPool;
    if (uVar3 < (ushort)(*(ushort *)((long)param_1 + 4) << 8 | *(ushort *)((long)param_1 + 4) >> 8))
    {
      puVar4 = (ushort *)((long)param_1 + (ulong)uVar3 * 2 + 6);
    }
    uVar1 = *puVar4;
    this_00 = (ChainRuleSet<OT::Layout::SmallTypes> *)&_hb_NullPool;
    if (uVar1 != 0) {
      this_00 = (ChainRuleSet<OT::Layout::SmallTypes> *)
                ((long)param_1 + (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8));
    }
    local_30 = 0;
    local_48 = match_glyph;
    local_58 = match_glyph;
    pcStack_50 = match_glyph;
    local_40 = (undefined1  [16])0x0;
    uVar2 = ChainRuleSet<OT::Layout::SmallTypes>::apply
                      (this_00,param_2,(ChainContextApplyLookupContext *)&local_58);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (bool)uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* bool 
   OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::ChainContextFormat2_5<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*) */

bool OT::hb_accelerate_subtables_context_t::
     apply_cached_to<OT::ChainContextFormat2_5<OT::Layout::SmallTypes>>
               (void *param_1,hb_ot_apply_context_t *param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined1 uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  Coverage *this;
  ChainRuleSet<OT::Layout::SmallTypes> *this_00;
  long in_FS_OFFSET;
  code *local_68;
  code *local_60;
  code *local_58;
  undefined *local_50;
  short *local_48;
  undefined *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = *(ushort *)((long)param_1 + 2);
  this = (Coverage *)&_hb_NullPool;
  if (uVar4 != 0) {
    this = (Coverage *)((long)param_1 + (ulong)(ushort)(uVar4 << 8 | uVar4 >> 8));
  }
  puVar1 = (uint *)(*(long *)(*(long *)(param_2 + 0xa0) + 0x70) +
                   (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c) * 0x14);
  uVar6 = *puVar1;
  iVar5 = Layout::Common::Coverage::get_coverage(this,uVar6);
  uVar3 = 0;
  if (iVar5 != -1) {
    uVar4 = *(ushort *)((long)param_1 + 4);
    local_50 = &_hb_NullPool;
    if (uVar4 != 0) {
      local_50 = (undefined *)((long)param_1 + (ulong)(ushort)(uVar4 << 8 | uVar4 >> 8));
    }
    uVar4 = *(ushort *)((long)param_1 + 6);
    local_48 = (short *)&_hb_NullPool;
    if (uVar4 != 0) {
      local_48 = (short *)((long)param_1 + (ulong)(ushort)(uVar4 << 8 | uVar4 >> 8));
    }
    uVar4 = *(ushort *)((long)param_1 + 8);
    local_40 = &_hb_NullPool;
    if (uVar4 != 0) {
      local_40 = (undefined *)((long)param_1 + (ulong)(ushort)(uVar4 << 8 | uVar4 >> 8));
    }
    local_68 = match_class;
    if (local_40 == local_50) {
      local_68 = match_class_cached1;
    }
    local_58 = match_class_cached1;
    local_60 = match_class_cached2;
    bVar2 = *(byte *)((long)puVar1 + 0xf) >> 4;
    if (bVar2 == 0xf) {
      if (*local_48 == 0x100) {
        puVar7 = (ushort *)&_hb_NullPool;
        uVar6 = uVar6 - (ushort)(local_48[1] << 8 | (ushort)local_48[1] >> 8);
        if (uVar6 < (ushort)(local_48[2] << 8 | (ushort)local_48[2] >> 8)) {
          puVar7 = (ushort *)(local_48 + (ulong)uVar6 + 3);
        }
        uVar6 = (uint)(ushort)(*puVar7 << 8 | *puVar7 >> 8);
      }
      else if (*local_48 == 0x200) {
        puVar7 = (ushort *)&_hb_Null_OT_RangeRecord;
        uVar4 = local_48[1] << 8 | (ushort)local_48[1] >> 8;
        iVar5 = uVar4 - 1;
        if (uVar4 != 0) {
          iVar9 = 0;
          do {
            uVar8 = (uint)(iVar9 + iVar5) >> 1;
            puVar7 = (ushort *)(local_48 + (ulong)uVar8 * 3 + 2);
            if (uVar6 < (ushort)(*puVar7 << 8 | *puVar7 >> 8)) {
              iVar5 = uVar8 - 1;
            }
            else {
              if (uVar6 <= (ushort)(puVar7[1] << 8 | puVar7[1] >> 8)) goto LAB_00114099;
              iVar9 = uVar8 + 1;
            }
          } while (iVar9 <= iVar5);
          puVar7 = (ushort *)&_hb_Null_OT_RangeRecord;
        }
LAB_00114099:
        uVar6 = (uint)(ushort)(puVar7[2] << 8 | puVar7[2] >> 8);
      }
      else {
        uVar6 = 0;
      }
    }
    else {
      uVar6 = (uint)bVar2;
    }
    puVar7 = (ushort *)&_hb_NullPool;
    if (uVar6 < (ushort)(*(ushort *)((long)param_1 + 10) << 8 | *(ushort *)((long)param_1 + 10) >> 8
                        )) {
      puVar7 = (ushort *)((long)param_1 + (ulong)(uVar6 + 1) * 2 + 10);
    }
    uVar4 = *puVar7;
    this_00 = (ChainRuleSet<OT::Layout::SmallTypes> *)&_hb_NullPool;
    if (uVar4 != 0) {
      this_00 = (ChainRuleSet<OT::Layout::SmallTypes> *)
                ((long)param_1 + (ulong)(ushort)(uVar4 << 8 | uVar4 >> 8));
    }
    uVar3 = ChainRuleSet<OT::Layout::SmallTypes>::apply
                      (this_00,param_2,(ChainContextApplyLookupContext *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (bool)uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* bool 
   OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::ChainContextFormat1_4<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*) */

bool OT::hb_accelerate_subtables_context_t::
     apply_cached_to<OT::ChainContextFormat1_4<OT::Layout::SmallTypes>>
               (void *param_1,hb_ot_apply_context_t *param_2)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar3;
  ushort *puVar4;
  Coverage *this;
  ChainRuleSet<OT::Layout::SmallTypes> *this_00;
  long in_FS_OFFSET;
  code *local_58;
  code *pcStack_50;
  code *local_48;
  undefined1 local_40 [16];
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(ushort *)((long)param_1 + 2);
  this = (Coverage *)&_hb_NullPool;
  if (uVar1 != 0) {
    this = (Coverage *)((long)param_1 + (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8));
  }
  uVar3 = Layout::Common::Coverage::get_coverage
                    (this,*(uint *)(*(long *)(*(long *)(param_2 + 0xa0) + 0x70) +
                                   (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c) * 0x14));
  uVar2 = 0;
  if (uVar3 != 0xffffffff) {
    puVar4 = (ushort *)&_hb_NullPool;
    if (uVar3 < (ushort)(*(ushort *)((long)param_1 + 4) << 8 | *(ushort *)((long)param_1 + 4) >> 8))
    {
      puVar4 = (ushort *)((long)param_1 + (ulong)uVar3 * 2 + 6);
    }
    uVar1 = *puVar4;
    this_00 = (ChainRuleSet<OT::Layout::SmallTypes> *)&_hb_NullPool;
    if (uVar1 != 0) {
      this_00 = (ChainRuleSet<OT::Layout::SmallTypes> *)
                ((long)param_1 + (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8));
    }
    local_30 = 0;
    local_48 = match_glyph;
    local_58 = match_glyph;
    pcStack_50 = match_glyph;
    local_40 = (undefined1  [16])0x0;
    uVar2 = ChainRuleSet<OT::Layout::SmallTypes>::apply
                      (this_00,param_2,(ChainContextApplyLookupContext *)&local_58);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (bool)uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* bool 
   OT::hb_accelerate_subtables_context_t::apply_to<OT::ChainContextFormat2_5<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*) */

bool OT::hb_accelerate_subtables_context_t::
     apply_to<OT::ChainContextFormat2_5<OT::Layout::SmallTypes>>
               (void *param_1,hb_ot_apply_context_t *param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  Coverage *this;
  ChainRuleSet<OT::Layout::SmallTypes> *this_00;
  uint uVar7;
  long in_FS_OFFSET;
  code *local_58;
  code *pcStack_50;
  code *local_48;
  undefined *local_40;
  short *local_38;
  undefined *local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(ushort *)((long)param_1 + 2);
  this = (Coverage *)&_hb_NullPool;
  if (uVar2 != 0) {
    this = (Coverage *)((long)param_1 + (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8));
  }
  uVar7 = *(uint *)(*(long *)(*(long *)(param_2 + 0xa0) + 0x70) +
                   (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 0x5c) * 0x14);
  iVar3 = Layout::Common::Coverage::get_coverage(this,uVar7);
  uVar1 = 0;
  if (iVar3 != -1) {
    uVar2 = *(ushort *)((long)param_1 + 4);
    local_40 = &_hb_NullPool;
    if (uVar2 != 0) {
      local_40 = (undefined *)((long)param_1 + (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8));
    }
    uVar2 = *(ushort *)((long)param_1 + 6);
    local_38 = (short *)&_hb_NullPool;
    if (uVar2 != 0) {
      local_38 = (short *)((long)param_1 + (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8));
    }
    uVar2 = *(ushort *)((long)param_1 + 8);
    local_30 = &_hb_NullPool;
    if (uVar2 != 0) {
      local_30 = (undefined *)((long)param_1 + (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8));
    }
    local_48 = match_class;
    local_58 = match_class;
    pcStack_50 = match_class;
    if (*local_38 == 0x100) {
      puVar4 = (ushort *)&_hb_NullPool;
      uVar7 = uVar7 - (ushort)(local_38[1] << 8 | (ushort)local_38[1] >> 8);
      if (uVar7 < (ushort)(local_38[2] << 8 | (ushort)local_38[2] >> 8)) {
        puVar4 = (ushort *)(local_38 + (ulong)uVar7 + 3);
      }
      uVar7 = (uint)(ushort)(*puVar4 << 8 | *puVar4 >> 8);
    }
    else if (*local_38 == 0x200) {
      puVar4 = (ushort *)&_hb_Null_OT_RangeRecord;
      uVar2 = local_38[1] << 8 | (ushort)local_38[1] >> 8;
      iVar3 = uVar2 - 1;
      if (uVar2 != 0) {
        iVar6 = 0;
        do {
          uVar5 = (uint)(iVar6 + iVar3) >> 1;
          puVar4 = (ushort *)(local_38 + (ulong)uVar5 * 3 + 2);
          if (uVar7 < (ushort)(*puVar4 << 8 | *puVar4 >> 8)) {
            iVar3 = uVar5 - 1;
          }
          else {
            if (uVar7 <= (ushort)(puVar4[1] << 8 | puVar4[1] >> 8)) goto LAB_0011437f;
            iVar6 = uVar5 + 1;
          }
        } while (iVar6 <= iVar3);
        puVar4 = (ushort *)&_hb_Null_OT_RangeRecord;
      }
LAB_0011437f:
      uVar7 = (uint)(ushort)(puVar4[2] << 8 | puVar4[2] >> 8);
    }
    else {
      uVar7 = 0;
    }
    puVar4 = (ushort *)&_hb_NullPool;
    if (uVar7 < (ushort)(*(ushort *)((long)param_1 + 10) << 8 | *(ushort *)((long)param_1 + 10) >> 8
                        )) {
      puVar4 = (ushort *)((long)param_1 + (ulong)(uVar7 + 1) * 2 + 10);
    }
    uVar2 = *puVar4;
    this_00 = (ChainRuleSet<OT::Layout::SmallTypes> *)&_hb_NullPool;
    if (uVar2 != 0) {
      this_00 = (ChainRuleSet<OT::Layout::SmallTypes> *)
                ((long)param_1 + (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8));
    }
    uVar1 = ChainRuleSet<OT::Layout::SmallTypes>::apply
                      (this_00,param_2,(ChainContextApplyLookupContext *)&local_58);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* OT::hb_ot_apply_context_t::hb_ot_apply_context_t(unsigned int, hb_font_t*, hb_buffer_t*,
   hb_blob_t*) */

void __thiscall
OT::hb_ot_apply_context_t::hb_ot_apply_context_t
          (hb_ot_apply_context_t *this,uint param_1,hb_font_t *param_2,hb_buffer_t *param_3,
          hb_blob_t *param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* OT::GDEF::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall OT::GDEF::accelerator_t::accelerator_t(accelerator_t *this,hb_face_t *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* hb_serialize_context_t::~hb_serialize_context_t() */

void __thiscall hb_serialize_context_t::~hb_serialize_context_t(hb_serialize_context_t *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
