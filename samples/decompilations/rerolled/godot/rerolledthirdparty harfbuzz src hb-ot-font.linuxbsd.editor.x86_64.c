/* hb_ot_get_font_v_extents(hb_font_t*, void*, hb_font_extents_t*, void*) */undefined1 hb_ot_get_font_v_extents(hb_font_t *param_1, void *param_2, hb_font_extents_t *param_3, void *param_4) {
   char cVar1;
   undefined1 uVar2;
   cVar1 = _hb_ot_metrics_get_position_common(param_1, 0x76617363);
   if (cVar1 != '\0') {
      cVar1 = _hb_ot_metrics_get_position_common(param_1, 0x76647363, param_3 + 4);
      if (cVar1 != '\0') {
         uVar2 = _hb_ot_metrics_get_position_common(param_1, 0x766c6770, param_3 + 8);
         return uVar2;
      }

   }

   return 0;
}
/* hb_ot_get_font_h_extents(hb_font_t*, void*, hb_font_extents_t*, void*) */undefined1 hb_ot_get_font_h_extents(hb_font_t *param_1, void *param_2, hb_font_extents_t *param_3, void *param_4) {
   char cVar1;
   undefined1 uVar2;
   int iVar3;
   cVar1 = _hb_ot_metrics_get_position_common(param_1, 0x68617363);
   if (cVar1 != '\0') {
      cVar1 = _hb_ot_metrics_get_position_common(param_1, 0x68647363, param_3 + 4);
      if (cVar1 != '\0') {
         uVar2 = _hb_ot_metrics_get_position_common(param_1, 0x686c6770, param_3 + 8);
         goto LAB_001000a0;
      }

   }

   uVar2 = 0;
   LAB_001000a0:iVar3 = *(int*)( param_1 + 0x40 );
   if (*(int*)( param_1 + 0x2c ) < 0) {
      iVar3 = -iVar3;
   }

   *(int*)param_3 = *(int*)param_3 + iVar3;
   return uVar2;
}
void hb_ot_font_set_funcs(long param_1) {
   int iVar1;
   long *plVar2;
   undefined8 *puVar3;
   undefined8 *__ptr;
   long lVar4;
   long lVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   bool bVar8;
   byte bVar9;
   bVar9 = 0;
   plVar2 = (long*)calloc(1, 0x20);
   if (plVar2 == (long*)0x0) {
      return;
   }

   lVar4 = *(long*)( param_1 + 0x20 );
   *plVar2 = lVar4 + 0x70;
   puVar3 = (undefined8*)hb_face_get_user_data(lVar4, &hb_ot_font_cmap_cache_user_data_key);
   puVar6 = puVar3;
   if (( puVar3 == (undefined8*)0x0 ) && ( __ptr = (undefined8*)malloc(0x400) ),__ptr != (undefined8*)0x0) {
      puVar6 = __ptr;
      for (lVar4 = 0x80; lVar4 != 0; lVar4 = lVar4 + -1) {
         *puVar6 = 0;
         puVar6 = puVar6 + (ulong)bVar9 * -2 + 1;
      }

      puVar6 = __ptr;
      do {
         *(undefined4*)puVar6 = 0xffffffff;
         puVar7 = puVar6 + 1;
         *(undefined4*)( (long)puVar6 + 4 ) = 0xffffffff;
         puVar6 = puVar7;
      }
 while ( puVar7 != __ptr + 0x80 );
      iVar1 = hb_face_set_user_data(*(undefined8*)( param_1 + 0x20 ), &hb_ot_font_cmap_cache_user_data_key, __ptr, free, 0);
      puVar6 = __ptr;
      if (iVar1 == 0) {
         free(__ptr);
         puVar6 = puVar3;
      }

   }

   plVar2[1] = (long)puVar6;
   LAB_00100140:lVar4 = static_ot_funcs;
   if (static_ot_funcs == 0) {
      lVar4 = hb_font_funcs_create();
      hb_font_funcs_set_nominal_glyph_func(lVar4, hb_ot_get_nominal_glyph, 0, 0);
      hb_font_funcs_set_nominal_glyphs_func(lVar4, hb_ot_get_nominal_glyphs, 0);
      hb_font_funcs_set_variation_glyph_func(lVar4, hb_ot_get_variation_glyph, 0);
      hb_font_funcs_set_font_h_extents_func(lVar4, hb_ot_get_font_h_extents, 0);
      hb_font_funcs_set_glyph_h_advances_func(lVar4, hb_ot_get_glyph_h_advances, 0);
      hb_font_funcs_set_font_v_extents_func(lVar4, hb_ot_get_font_v_extents, 0);
      hb_font_funcs_set_glyph_v_advances_func(lVar4, hb_ot_get_glyph_v_advances, 0);
      hb_font_funcs_set_glyph_v_origin_func(lVar4, hb_ot_get_glyph_v_origin, 0);
      hb_font_funcs_set_draw_glyph_func(lVar4, hb_ot_draw_glyph, 0);
      hb_font_funcs_set_paint_glyph_func(lVar4, hb_ot_paint_glyph, 0);
      hb_font_funcs_set_glyph_extents_func(lVar4, hb_ot_get_glyph_extents, 0);
      hb_font_funcs_set_glyph_name_func(lVar4, hb_ot_get_glyph_name, 0);
      hb_font_funcs_set_glyph_from_name_func(lVar4, hb_ot_get_glyph_from_name, 0);
      hb_font_funcs_make_immutable(lVar4);
      if (lVar4 == 0) {
         lVar4 = hb_font_funcs_get_empty();
         LOCK();
         bVar8 = static_ot_funcs != 0;
         lVar5 = lVar4;
         if (bVar8) {
            lVar5 = static_ot_funcs;
         }

         static_ot_funcs = lVar5;
         UNLOCK();
         if (bVar8) goto code_r0x00100348;
      }
 else {
         LOCK();
         bVar8 = static_ot_funcs != 0;
         lVar5 = lVar4;
         if (bVar8) {
            lVar5 = static_ot_funcs;
         }

         static_ot_funcs = lVar5;
         UNLOCK();
         if (bVar8) goto LAB_00100306;
      }

   }

   hb_font_set_funcs(param_1, lVar4, plVar2, 0x100000);
   return;
   code_r0x00100348:if (lVar4 != 0) {
      LAB_00100306:lVar5 = hb_font_funcs_get_empty();
      if (lVar4 != lVar5) {
         hb_font_funcs_destroy(lVar4);
      }

   }

   goto LAB_00100140;
}
/* hb_ot_get_glyph_from_name(hb_font_t*, void*, char const*, int, unsigned int*, void*) */undefined1 hb_ot_get_glyph_from_name(hb_font_t *param_1, void *param_2, char *param_3, int param_4, uint *param_5, void *param_6) {
   long *plVar1;
   long lVar2;
   undefined8 *puVar3;
   hb_face_t *phVar4;
   char cVar5;
   undefined1 uVar6;
   accelerator_t *this;
   accelerator_t *this_00;
   /* WARNING: Load size is inaccurate */
   puVar3 = *param_2;
   plVar1 = puVar3 + 7;
   do {
      while (true) {
         this_00 = (accelerator_t*)*plVar1;
         if (this_00 != (accelerator_t*)0x0) goto LAB_0010038c;
         phVar4 = (hb_face_t*)*puVar3;
         if (phVar4 == (hb_face_t*)0x0) goto LAB_00100480;
         this_00 = (accelerator_t*)calloc(1, 0x38);
         if (this_00 == (accelerator_t*)0x0) break;
         OT::post::accelerator_t::accelerator_t(this_00, phVar4);
         LOCK();
         lVar2 = *plVar1;
         if (lVar2 == 0) {
            *plVar1 = (long)this_00;
         }

         UNLOCK();
         if (lVar2 == 0) goto LAB_0010038c;
         if (this_00 != (accelerator_t*)&_hb_NullPool) {
            free(*(void**)( this_00 + 0x30 ));
            hb_blob_destroy(*(undefined8*)this_00);
            if (*(int*)( this_00 + 0x18 ) != 0) {
               free(*(void**)( this_00 + 0x20 ));
            }

            free(this_00);
         }

      }
;
      LOCK();
      lVar2 = *plVar1;
      if (lVar2 == 0) {
         *plVar1 = (long)&_hb_NullPool;
      }

      UNLOCK();
   }
 while ( lVar2 != 0 );
   LAB_00100480:this_00 = (accelerator_t*)&_hb_NullPool;
   LAB_0010038c:cVar5 = OT::post::accelerator_t::get_glyph_from_name((char*)this_00, (int)param_3, (uint*)(ulong)(uint)param_4);
   uVar6 = 1;
   if (cVar5 == '\0') {
      this(accelerator_t * hb_lazy_loader_t<OT::cff1_accelerator_t,hb_face_lazy_loader_t<OT::cff1_accelerator_t,16u>,hb_face_t,16u,OT::cff1_accelerator_t>::get_stored((hb_lazy_loader_t<OT::cff1_accelerator_t,hb_face_lazy_loader_t<OT::cff1_accelerator_t,16u>,hb_face_t,16u,OT::cff1_accelerator_t>*)( puVar3 + 0x10 )));
      uVar6 = OT::cff1::accelerator_t::get_glyph_from_name(this, param_3, param_4, param_5);
   }

   return uVar6;
}
/* hb_ot_get_glyph_name(hb_font_t*, void*, unsigned int, char*, unsigned int, void*) */undefined8 hb_ot_get_glyph_name(hb_font_t *param_1, void *param_2, uint param_3, char *param_4, uint param_5, void *param_6) {
   long *plVar1;
   char cVar2;
   int iVar3;
   undefined8 *puVar4;
   hb_face_t *phVar5;
   ushort uVar6;
   uint uVar7;
   long lVar8;
   accelerator_t *this;
   ulong uVar9;
   ushort *puVar10;
   ulong uVar11;
   byte *pbVar12;
   char *pcVar13;
   long lVar14;
   uint uVar15;
   undefined1 auVar16[12];
   /* WARNING: Load size is inaccurate */
   puVar4 = *param_2;
   plVar1 = puVar4 + 7;
   do {
      while (true) {
         this(accelerator_t * ) * plVar1;
         if (this != (accelerator_t*)0x0) goto LAB_001004d1;
         phVar5 = (hb_face_t*)*puVar4;
         if (phVar5 == (hb_face_t*)0x0) goto LAB_001008af;
         this(accelerator_t * calloc(1, 0x38));
         if (this == (accelerator_t*)0x0) break;
         OT::post::accelerator_t::accelerator_t(this, phVar5);
         LOCK();
         lVar8 = *plVar1;
         if (lVar8 == 0) {
            *plVar1 = (long)this;
         }

         UNLOCK();
         if (lVar8 == 0) goto LAB_001004d1;
         if (this != (accelerator_t*)&_hb_NullPool) {
            free(*(void**)( this + 0x30 ));
            hb_blob_destroy(*(undefined8*)this);
            if (*(int*)( this + 0x18 ) != 0) {
               free(*(void**)( this + 0x20 ));
            }

            free(this);
         }

      }
;
      LOCK();
      lVar8 = *plVar1;
      if (lVar8 == 0) {
         *plVar1 = (long)&_hb_NullPool;
      }

      UNLOCK();
   }
 while ( lVar8 != 0 );
   LAB_001008af = (accelerator_t*)&_hb_NullPool;
   LAB_001004d1:if (*(int*)( this + 8 ) == 0x10000) {
      if (param_3 < 0x102) {
         uVar15 = param_3 + 1;
         uVar7 = *(uint*)( format1_names_msgidx + (ulong)param_3 * 4 );
         LAB_0010061e:uVar9 = ( ulong )(~uVar7 + *(int*)( format1_names_msgidx + (ulong)uVar15 * 4 ));
         pbVar12 = (byte*)( ".notdef" + uVar7 );
         LAB_0010062f:if ((uint)uVar9 != 0) {
            if (param_5 == 0) {
               return 1;
            }

            uVar11 = ( ulong )(param_5 - 1);
            if ((uint)uVar9 < param_5 - 1) {
               uVar11 = uVar9;
            }

            strncpy(param_4, (char*)pbVar12, uVar11);
            param_4[uVar11] = '\0';
            return 1;
         }

      }

   }
 else if (( *(int*)( this + 8 ) == 0x20000 ) && ( uVar6 = **(ushort**)( this + 0x10 ) ),param_3 < ( ushort )(uVar6 << 8 | uVar6 >> 8)) {
      uVar6 = ( *(ushort**)( this + 0x10 ) )[(ulong)param_3 + 1];
      uVar6 = uVar6 << 8 | uVar6 >> 8;
      if (uVar6 < 0x102) {
         uVar7 = *(uint*)( format1_names_msgidx + (ulong)uVar6 * 4 );
         uVar15 = uVar6 + 1;
         goto LAB_0010061e;
      }

      if (uVar6 - 0x102 < *(uint*)( this + 0x1c )) {
         pbVar12 = (byte*)( ( ulong ) * (uint*)( *(long*)( this + 0x20 ) + ( ulong )(uVar6 - 0x102) * 4 ) + *(long*)( this + 0x28 ) );
         uVar9 = ( ulong ) * pbVar12;
         pbVar12 = pbVar12 + 1;
         goto LAB_0010062f;
      }

   }

   lVar8 = hb_lazy_loader_t<OT::cff1_accelerator_t,hb_face_lazy_loader_t<OT::cff1_accelerator_t,16u>,hb_face_t,16u,OT::cff1_accelerator_t>::get_stored((hb_lazy_loader_t<OT::cff1_accelerator_t,hb_face_lazy_loader_t<OT::cff1_accelerator_t,16u>,hb_face_t,16u,OT::cff1_accelerator_t>*)( puVar4 + 0x10 ));
   if (*(uint*)( lVar8 + 0x128 ) <= param_3) {
      return 0;
   }

   if (*(long*)( lVar8 + 0x40 ) == 0) {
      return 0;
   }

   if (*(int*)( lVar8 + 0xdc ) != -1) {
      return 0;
   }

   if (param_5 == 0) {
      return 1;
   }

   pcVar13 = *(char**)( lVar8 + 0x50 );
   iVar3 = *(int*)( lVar8 + 0xf4 );
   if (pcVar13 != &_hb_NullPool) {
      cVar2 = *pcVar13;
      if (cVar2 == '\x01') {
         if (param_3 != 0) {
            uVar7 = (uint)(byte)pcVar13[3];
            uVar15 = param_3 - 1;
            uVar9 = 0;
            if ((byte)pcVar13[3] < uVar15) {
               do {
                  uVar15 = ( uVar15 - 1 ) - uVar7;
                  uVar9 = ( ulong )((int)uVar9 + 1);
                  lVar14 = uVar9 * 3;
                  uVar7 = (uint)(byte)pcVar13[lVar14 + 3];
               }
 while ( uVar7 < uVar15 );
               goto LAB_00100836;
            }

            LAB_001008bb:uVar15 = param_3 - 1;
            puVar10 = (ushort*)( pcVar13 + 1 );
            LAB_0010083b:uVar15 = ( ushort )(*puVar10 << 8 | *puVar10 >> 8) + uVar15;
            goto LAB_00100576;
         }

      }
 else if (cVar2 == '\x02') {
         if (param_3 != 0) {
            uVar15 = param_3 - 1;
            uVar9 = 0;
            uVar6 = *(ushort*)( pcVar13 + 3 ) << 8 | *(ushort*)( pcVar13 + 3 ) >> 8;
            uVar7 = (uint)uVar6;
            if (uVar15 <= uVar6) goto LAB_001008bb;
            do {
               uVar15 = ( uVar15 - 1 ) - uVar7;
               uVar9 = ( ulong )((int)uVar9 + 1);
               lVar14 = uVar9 * 4;
               uVar7 = ( uint )(ushort)(*(ushort*)( pcVar13 + uVar9 * 4 + 3 ) << 8 | *(ushort*)( pcVar13 + uVar9 * 4 + 3 ) >> 8);
            }
 while ( uVar7 < uVar15 );
            LAB_00100836:puVar10 = (ushort*)( pcVar13 + lVar14 + 1 );
            goto LAB_0010083b;
         }

      }
 else if (( cVar2 == '\0' ) && ( param_3 != 0 )) {
         uVar15 = ( uint )(ushort)(*(ushort*)( pcVar13 + ( ulong )(param_3 - 1) * 2 + 1 ) << 8 | *(ushort*)( pcVar13 + ( ulong )(param_3 - 1) * 2 + 1 ) >> 8);
         goto LAB_00100576;
      }

      LAB_001007a0:pcVar13 = ".notdef";
      uVar9 = 7;
      goto LAB_00100779;
   }

   if (iVar3 == 1) {
      uVar15 = OT::cff1::lookup_expert_charset_for_sid(param_3);
      LAB_00100576:if (uVar15 < 0x187) {
         uVar9 = ( ulong )(uint)(~(&cff1_std_strings_msgidx)[uVar15] + ( &cff1_std_strings_msgidx )[uVar15 + 1]);
         pcVar13 = ".notdef" + ( uint )(&cff1_std_strings_msgidx)[uVar15];
      }
 else {
         auVar16 = OT::CFFIndex<OT::IntType<unsigned_short,2u>>::operator [](*(CFFIndex<OT::IntType<unsigned_short,2u>>**)( lVar8 + 0x68 ), uVar15 - 0x187);
         pcVar13 = auVar16._0_8_;
         uVar9 = (ulong)auVar16._8_4_;
      }

   }
 else {
      if (iVar3 == 2) {
         uVar15 = OT::cff1::lookup_expert_subset_charset_for_sid(param_3);
         goto LAB_00100576;
      }

      if (( iVar3 != 0 ) || ( 0xe4 < param_3 )) goto LAB_001007a0;
      uVar9 = ( ulong )(uint)(~(&cff1_std_strings_msgidx)[param_3] + ( &cff1_std_strings_msgidx )[param_3 + 1]);
      pcVar13 = ".notdef" + ( uint )(&cff1_std_strings_msgidx)[param_3];
   }

   if (uVar9 == 0) {
      return 0;
   }

   LAB_00100779:uVar11 = ( ulong )(param_5 - 1);
   if (uVar9 < param_5 - 1) {
      uVar11 = uVar9;
   }

   strncpy(param_4, pcVar13, uVar11);
   param_4[uVar11] = '\0';
   return 1;
}
/* OT::hb_paint_context_t::return_t
   OT::Paint::dispatch<OT::hb_paint_context_t>(OT::hb_paint_context_t*) const [clone .isra.0] */void OT::Paint::dispatch<OT::hb_paint_context_t>(Paint *this, hb_paint_context_t *param_1) {
   long lVar1;
   bool bVar2;
   int iVar3;
   undefined8 uVar4;
   long lVar5;
   uint uVar6;
   long *plVar7;
   ushort uVar8;
   Paint *pPVar9;
   Affine2x3 *pAVar10;
   ItemVarStoreInstancer *this_00;
   undefined4 uVar11;
   long in_FS_OFFSET;
   float fVar12;
   float local_40;
   float local_3c;
   uint local_38;
   undefined4 local_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   switch (*this) {
      default:
    goto switchD_00100916_caseD_0;
      case (Paint)0x1:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      PaintColrLayers::paint_glyph((PaintColrLayers *)this,param_1);
      return;
    }
    break;
      case (Paint)0x2:
    this_00 = *(ItemVarStoreInstancer **)(param_1 + 0x30);
    uVar6 = 0xffffffff;
    goto LAB_0010135b;
      case (Paint)0x3:
    uVar6 = *(uint *)(this + 5);
    this_00 = *(ItemVarStoreInstancer **)(param_1 + 0x30);
    uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
LAB_0010135b:
    fVar12 = (float)ItemVarStoreInstancer::operator()(this_00,uVar6,0);
    uVar11 = 1;
    uVar8 = *(ushort *)(this + 1) << 8 | *(ushort *)(this + 1) >> 8;
    local_38 = *(uint *)(param_1 + 0x2c);
    fVar12 = ((float)(int)(short)(*(ushort *)(this + 3) << 8 | *(ushort *)(this + 3) >> 8) + fVar12)
             * _LC6;
    if (uVar8 != 0xffff) {
      lVar1 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(lVar1 + 0x80);
      if (lVar5 != 0) {
        lVar5 = *(long *)(lVar5 + 0x68);
      }
      iVar3 = (**(code **)(lVar1 + 0x78))
                        (lVar1,*(undefined8 *)(param_1 + 0x18),uVar8,&local_38,lVar5);
      if (iVar3 == 0) {
        local_34 = 1;
        uVar4 = hb_font_get_face(*(undefined8 *)(param_1 + 0x20));
        hb_ot_color_palette_get_colors
                  (uVar4,*(undefined4 *)(param_1 + 0x28),uVar8,&local_34,&local_38);
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
      }
    }
    lVar1 = *(long *)(param_1 + 0x10);
    lVar5 = *(long *)(lVar1 + 0x80);
    if (lVar5 != 0) {
      lVar5 = *(long *)(lVar5 + 0x30);
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010143a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x40))
                (lVar1,*(undefined8 *)(param_1 + 0x18),uVar11,
                 (uint)(long)((float)(local_38 & 0xff) * fVar12) & 0xff | local_38 & 0xffffff00,
                 lVar5);
      return;
    }
    break;
      case (Paint)0x4:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      PaintLinearGradient<OT::NoVariable>::paint_glyph
                ((PaintLinearGradient<OT::NoVariable> *)this,param_1,0xffffffff);
      return;
    }
    break;
      case (Paint)0x5:
    uVar6 = *(uint *)(this + 0x10);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      PaintLinearGradient<OT::Variable>::paint_glyph
                ((PaintLinearGradient<OT::Variable> *)this,param_1,
                 uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18);
      return;
    }
    break;
      case (Paint)0x6:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      PaintRadialGradient<OT::NoVariable>::paint_glyph
                ((PaintRadialGradient<OT::NoVariable> *)this,param_1,0xffffffff);
      return;
    }
    break;
      case (Paint)0x7:
    uVar6 = *(uint *)(this + 0x10);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      PaintRadialGradient<OT::Variable>::paint_glyph
                ((PaintRadialGradient<OT::Variable> *)this,param_1,
                 uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18);
      return;
    }
    break;
      case (Paint)0x8:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      PaintSweepGradient<OT::NoVariable>::paint_glyph
                ((PaintSweepGradient<OT::NoVariable> *)this,param_1,0xffffffff);
      return;
    }
    break;
      case (Paint)0x9:
    uVar6 = *(uint *)(this + 0xc);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      PaintSweepGradient<OT::Variable>::paint_glyph
                ((PaintSweepGradient<OT::Variable> *)this,param_1,
                 uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18);
      return;
    }
    break;
      case (Paint)0xa:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      PaintGlyph::paint_glyph((PaintGlyph *)this,param_1);
      return;
    }
    break;
      case (Paint)0xb:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      PaintColrGlyph::paint_glyph((PaintColrGlyph *)this,param_1);
      return;
    }
    break;
      case (Paint)0xc:
    iVar3 = (uint)(byte)this[4] * 0x10000 + (uint)(byte)this[5] * 0x100 + (uint)(byte)this[6];
    pAVar10 = (Affine2x3 *)&_hb_NullPool;
    if (iVar3 != 0) {
      pAVar10 = (Affine2x3 *)(this + iVar3);
    }
    Affine2x3::paint_glyph(pAVar10,param_1,0xffffffff);
    iVar3 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
    pPVar9 = this + iVar3;
    if (iVar3 == 0) {
      pPVar9 = (Paint *)&_hb_NullPool;
    }
    if (0 < *(int *)(param_1 + 0x98)) {
      iVar3 = *(int *)(param_1 + 0x9c);
      uVar4 = CONCAT44(_LC37._4_4_ + (int)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20),
                       (int)_LC37 + (int)*(undefined8 *)(param_1 + 0x98));
joined_r0x00101132:
      if (0 < iVar3) {
        *(undefined8 *)(param_1 + 0x98) = uVar4;
        dispatch<OT::hb_paint_context_t>(pPVar9,param_1);
        *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
      }
    }
    goto LAB_00100c75;
      case (Paint)0xd:
    iVar3 = (uint)(byte)this[4] * 0x10000 + (uint)(byte)this[5] * 0x100 + (uint)(byte)this[6];
    pAVar10 = (Affine2x3 *)&_hb_NullPool;
    if (iVar3 != 0) {
      pAVar10 = (Affine2x3 *)(this + iVar3);
    }
    uVar6 = *(uint *)(pAVar10 + 0x18);
    Affine2x3::paint_glyph
              (pAVar10,param_1,
               uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18);
    iVar3 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
    pPVar9 = this + iVar3;
    if (iVar3 == 0) {
      pPVar9 = (Paint *)&_hb_NullPool;
    }
    if (0 < *(int *)(param_1 + 0x98)) {
      iVar3 = *(int *)(param_1 + 0x9c);
      uVar4 = CONCAT44(_LC37._4_4_ + (int)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20),
                       (int)_LC37 + (int)*(undefined8 *)(param_1 + 0x98));
      goto joined_r0x00101132;
    }
    goto LAB_00100c75;
      case (Paint)0xe:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0xffffffff;
LAB_00101079:
      PaintTranslate::paint_glyph((PaintTranslate *)this,param_1,uVar6);
      return;
    }
    break;
      case (Paint)0xf:
    uVar6 = *(uint *)(this + 8);
    uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00101079;
    break;
      case (Paint)0x10:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0xffffffff;
LAB_00101029:
      PaintScale::paint_glyph((PaintScale *)this,param_1,uVar6);
      return;
    }
    break;
      case (Paint)0x11:
    uVar6 = *(uint *)(this + 8);
    uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00101029;
    break;
      case (Paint)0x12:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0xffffffff;
LAB_00100fd9:
      PaintScaleAroundCenter::paint_glyph((PaintScaleAroundCenter *)this,param_1,uVar6);
      return;
    }
    break;
      case (Paint)0x13:
    uVar6 = *(uint *)(this + 0xc);
    uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00100fd9;
    break;
      case (Paint)0x14:
    fVar12 = (float)ItemVarStoreInstancer::operator()
                              (*(ItemVarStoreInstancer **)(param_1 + 0x30),0xffffffff,0);
    bVar2 = false;
    if (((float)(int)(short)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8) + fVar12) *
        _LC6 != _LC3) {
      lVar1 = *(long *)(param_1 + 0x10);
      plVar7 = *(long **)(lVar1 + 0x80);
      if (plVar7 != (long *)0x0) {
        plVar7 = (long *)*plVar7;
      }
      bVar2 = true;
      (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x18),plVar7);
    }
    iVar3 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
    pPVar9 = (Paint *)&_hb_NullPool;
    if (iVar3 != 0) {
      pPVar9 = this + iVar3;
    }
    if (0 < *(int *)(param_1 + 0x98)) {
      iVar3 = *(int *)(param_1 + 0x9c);
      uVar4 = CONCAT44(_LC37._4_4_ + (int)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20),
                       (int)_LC37 + (int)*(undefined8 *)(param_1 + 0x98));
joined_r0x00100c53:
      if (0 < iVar3) {
        *(undefined8 *)(param_1 + 0x98) = uVar4;
        dispatch<OT::hb_paint_context_t>(pPVar9,param_1);
        *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
      }
    }
    goto LAB_00100c6c;
      case (Paint)0x15:
    uVar6 = *(uint *)(this + 6);
    fVar12 = (float)ItemVarStoreInstancer::operator()
                              (*(ItemVarStoreInstancer **)(param_1 + 0x30),
                               uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                               uVar6 << 0x18,0);
    bVar2 = false;
    if (((float)(int)(short)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8) + fVar12) *
        _LC6 != _LC3) {
      lVar1 = *(long *)(param_1 + 0x10);
      plVar7 = *(long **)(lVar1 + 0x80);
      if (plVar7 != (long *)0x0) {
        plVar7 = (long *)*plVar7;
      }
      bVar2 = true;
      (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x18),plVar7);
    }
    iVar3 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
    pPVar9 = (Paint *)&_hb_NullPool;
    if (iVar3 != 0) {
      pPVar9 = this + iVar3;
    }
    if (0 < *(int *)(param_1 + 0x98)) {
      iVar3 = *(int *)(param_1 + 0x9c);
      uVar4 = CONCAT44(_LC37._4_4_ + (int)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20),
                       (int)_LC37 + (int)*(undefined8 *)(param_1 + 0x98));
      goto joined_r0x00100c53;
    }
    goto LAB_00100c6c;
      case (Paint)0x16:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0xffffffff;
LAB_00100dd9:
      PaintScaleUniformAroundCenter::paint_glyph
                ((PaintScaleUniformAroundCenter *)this,param_1,uVar6);
      return;
    }
    break;
      case (Paint)0x17:
    uVar6 = *(uint *)(this + 10);
    uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00100dd9;
    break;
      case (Paint)0x18:
    fVar12 = (float)ItemVarStoreInstancer::operator()
                              (*(ItemVarStoreInstancer **)(param_1 + 0x30),0xffffffff,0);
    fVar12 = ((float)(int)(short)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8) + fVar12)
             * _LC6;
    bVar2 = false;
    if (fVar12 != 0.0) {
      lVar1 = *(long *)(param_1 + 0x10);
      sincosf(fVar12 * _LC35,&local_3c,&local_40);
      plVar7 = *(long **)(lVar1 + 0x80);
      if (plVar7 != (long *)0x0) {
        plVar7 = (long *)*plVar7;
      }
      bVar2 = true;
      (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x18),plVar7);
    }
    iVar3 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
    pPVar9 = (Paint *)&_hb_NullPool;
    if (iVar3 != 0) {
      pPVar9 = this + iVar3;
    }
    if (0 < *(int *)(param_1 + 0x98)) {
      iVar3 = *(int *)(param_1 + 0x9c);
      uVar4 = CONCAT44(_LC37._4_4_ + (int)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20),
                       (int)_LC37 + (int)*(undefined8 *)(param_1 + 0x98));
      goto joined_r0x00100c53;
    }
    goto LAB_00100c6c;
      case (Paint)0x19:
    uVar6 = *(uint *)(this + 6);
    fVar12 = (float)ItemVarStoreInstancer::operator()
                              (*(ItemVarStoreInstancer **)(param_1 + 0x30),
                               uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                               uVar6 << 0x18,0);
    fVar12 = ((float)(int)(short)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8) + fVar12)
             * _LC6;
    bVar2 = false;
    if (fVar12 != 0.0) {
      lVar1 = *(long *)(param_1 + 0x10);
      sincosf(fVar12 * _LC35,&local_3c,&local_40);
      plVar7 = *(long **)(lVar1 + 0x80);
      if (plVar7 != (long *)0x0) {
        plVar7 = (long *)*plVar7;
      }
      bVar2 = true;
      (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x18),plVar7);
    }
    iVar3 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
    pPVar9 = (Paint *)&_hb_NullPool;
    if (iVar3 != 0) {
      pPVar9 = this + iVar3;
    }
    if (0 < *(int *)(param_1 + 0x98)) {
      iVar3 = *(int *)(param_1 + 0x9c);
      uVar4 = CONCAT44(_LC37._4_4_ + (int)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20),
                       (int)_LC37 + (int)*(undefined8 *)(param_1 + 0x98));
      goto joined_r0x00100c53;
    }
LAB_00100c6c:
    if (bVar2) {
LAB_00100c75:
      lVar1 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(lVar1 + 0x80);
      if (lVar5 != 0) {
        lVar5 = *(long *)(lVar5 + 8);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100caf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar1 + 0x18))(lVar1,*(undefined8 *)(param_1 + 0x18),lVar5);
        return;
      }
    }
    else {
switchD_00100916_caseD_0:
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    break;
      case (Paint)0x1a:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0xffffffff;
LAB_00100b29:
      PaintRotateAroundCenter::paint_glyph((PaintRotateAroundCenter *)this,param_1,uVar6);
      return;
    }
    break;
      case (Paint)0x1b:
    uVar6 = *(uint *)(this + 10);
    uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00100b29;
    break;
      case (Paint)0x1c:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0xffffffff;
LAB_00100ad9:
      PaintSkew::paint_glyph((PaintSkew *)this,param_1,uVar6);
      return;
    }
    break;
      case (Paint)0x1d:
    uVar6 = *(uint *)(this + 8);
    uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00100ad9;
    break;
      case (Paint)0x1e:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0xffffffff;
LAB_00100a89:
      PaintSkewAroundCenter::paint_glyph((PaintSkewAroundCenter *)this,param_1,uVar6);
      return;
    }
    break;
      case (Paint)0x1f:
    uVar6 = *(uint *)(this + 0xc);
    uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00100a89;
    break;
      case (Paint)0x20:
    iVar3 = (uint)(byte)this[5] * 0x10000 + (uint)(byte)this[6] * 0x100 + (uint)(byte)this[7];
    pPVar9 = (Paint *)&_hb_NullPool;
    if (iVar3 != 0) {
      pPVar9 = this + iVar3;
    }
    if ((0 < *(int *)(param_1 + 0x98)) && (0 < *(int *)(param_1 + 0x9c))) {
      *(ulong *)(param_1 + 0x98) =
           CONCAT44(_LC37._4_4_ + (int)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20),
                    (int)_LC37 + (int)*(undefined8 *)(param_1 + 0x98));
      dispatch<OT::hb_paint_context_t>(pPVar9,param_1);
      *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
    }
    lVar1 = *(long *)(param_1 + 0x10);
    lVar5 = *(long *)(lVar1 + 0x80);
    if (lVar5 != 0) {
      lVar5 = *(long *)(lVar5 + 0x58);
    }
    (**(code **)(lVar1 + 0x68))(lVar1,*(undefined8 *)(param_1 + 0x18),lVar5);
    iVar3 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
    pPVar9 = (Paint *)&_hb_NullPool;
    if (iVar3 != 0) {
      pPVar9 = this + iVar3;
    }
    if ((0 < *(int *)(param_1 + 0x98)) && (0 < *(int *)(param_1 + 0x9c))) {
      *(ulong *)(param_1 + 0x98) =
           CONCAT44(_LC37._4_4_ + (int)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20),
                    (int)_LC37 + (int)*(undefined8 *)(param_1 + 0x98));
      dispatch<OT::hb_paint_context_t>(pPVar9,param_1);
      *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
    }
    lVar1 = *(long *)(param_1 + 0x10);
    lVar5 = *(long *)(lVar1 + 0x80);
    if (lVar5 != 0) {
      lVar5 = *(long *)(lVar5 + 0x60);
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x70))(lVar1,*(undefined8 *)(param_1 + 0x18),this[4],lVar5);
      return;
    }
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* hb_ot_get_variation_glyph(hb_font_t*, void*, unsigned int, unsigned int, unsigned int*, void*) */undefined1 hb_ot_get_variation_glyph(hb_font_t *param_1, void *param_2, uint param_3, uint param_4, uint *param_5, void *param_6) {
   long *plVar1;
   uint *puVar2;
   long lVar3;
   undefined8 *puVar4;
   long lVar5;
   code *pcVar6;
   hb_face_t *phVar7;
   undefined1 uVar8;
   char cVar9;
   ushort uVar10;
   uint uVar11;
   accelerator_t *this;
   undefined *puVar12;
   byte *pbVar13;
   uint uVar14;
   int iVar15;
   int iVar16;
   uint *puVar17;
   /* WARNING: Load size is inaccurate */
   puVar4 = *param_2;
   lVar5 = *(long*)( (long)param_2 + 8 );
   plVar1 = puVar4 + 3;
   do {
      while (true) {
         this(accelerator_t * ) * plVar1;
         if (this != (accelerator_t*)0x0) goto LAB_001014e4;
         phVar7 = (hb_face_t*)*puVar4;
         if (phVar7 == (hb_face_t*)0x0) goto LAB_001017d6;
         this(accelerator_t * calloc(1, 0x58));
         if (this == (accelerator_t*)0x0) break;
         OT::cmap::accelerator_t::accelerator_t(this, phVar7);
         LOCK();
         lVar3 = *plVar1;
         if (lVar3 == 0) {
            *plVar1 = (long)this;
         }

         UNLOCK();
         if (lVar3 == 0) goto LAB_001014e4;
         if (this != (accelerator_t*)&_hb_NullPool) {
            hb_blob_destroy(*(undefined8*)( this + 0x50 ));
            free(this);
         }

      }
;
      LOCK();
      lVar3 = *plVar1;
      if (lVar3 == 0) {
         *plVar1 = (long)&_hb_NullPool;
      }

      UNLOCK();
   }
 while ( lVar3 != 0 );
   LAB_001017d6 = (accelerator_t*)&_hb_NullPool;
   LAB_001014e4:puVar12 = *(undefined**)( this + 8 );
   pbVar13 = &_hb_NullPool;
   if (puVar12 == (undefined*)0x0) {
      puVar12 = &_hb_NullPool;
   }

   uVar11 = *(uint*)( puVar12 + 6 );
   iVar15 = ( uVar11 >> 0x18 | ( uVar11 & 0xff0000 ) >> 8 | ( uVar11 & 0xff00 ) << 8 | uVar11 << 0x18 ) - 1;
   if (-1 < iVar15) {
      iVar16 = 0;
      do {
         while (true) {
            uVar14 = ( uint )(iVar16 + iVar15) >> 1;
            pbVar13 = puVar12 + (ulong)uVar14 * 0xb + 10;
            uVar11 = ( uint ) * pbVar13 * 0x10000 + (uint)pbVar13[1] * 0x100 + (uint)pbVar13[2];
            if (param_4 < uVar11) break;
            if (param_4 == uVar11) goto LAB_0010155c;
            iVar16 = uVar14 + 1;
            if (iVar15 < iVar16) goto LAB_00101555;
         }
;
         iVar15 = uVar14 - 1;
      }
 while ( iVar16 <= iVar15 );
      LAB_00101555:pbVar13 = &_hb_NullPool;
   }

   LAB_0010155c:uVar11 = *(uint*)( pbVar13 + 3 );
   puVar17 = (uint*)&_hb_NullPool;
   if (uVar11 != 0) {
      puVar17 = (uint*)( puVar12 + ( uVar11 >> 0x18 | ( uVar11 & 0xff0000 ) >> 8 | ( uVar11 & 0xff00 ) << 8 | uVar11 << 0x18 ) );
   }

   uVar11 = *puVar17;
   iVar15 = ( uVar11 >> 0x18 | ( uVar11 & 0xff0000 ) >> 8 | ( uVar11 & 0xff00 ) << 8 | uVar11 << 0x18 ) - 1;
   if (-1 < iVar15) {
      iVar16 = 0;
      do {
         uVar14 = ( uint )(iVar16 + iVar15) >> 1;
         puVar2 = puVar17 + (ulong)uVar14 + 1;
         uVar11 = ( uint )(byte) * puVar2 * 0x10000 + ( uint ) * (byte*)( (long)puVar2 + 1 ) * 0x100 + ( uint ) * (byte*)( (long)puVar2 + 2 );
         if (param_3 < uVar11) {
            iVar15 = uVar14 - 1;
         }
 else {
            if (param_3 <= uVar11 + *(byte*)( (long)puVar2 + 3 )) {
               pcVar6 = *(code**)( this + 0x10 );
               if (pcVar6 == (code*)0x0) goto LAB_001016a1;
               if (lVar5 == 0) {
                  uVar8 = ( *pcVar6 )(*(undefined8*)( this + 0x18 ), param_3, param_5);
                  return uVar8;
               }

               puVar17 = (uint*)( lVar5 + ( ulong )(param_3 & 0xff) * 4 );
               uVar11 = *puVar17;
               if (uVar11 >> 0x10 == param_3 >> 8) {
                  *param_5 = uVar11 & 0xffff;
               }
 else {
                  cVar9 = ( *pcVar6 )(*(undefined8*)( this + 0x18 ), param_3, param_5);
                  if (cVar9 == '\0') goto LAB_001016a1;
                  if (param_3 >> 0x15 == 0 && *param_5 >> 0x10 == 0) {
                     *puVar17 = ( param_3 >> 8 ) << 0x10 | *param_5;
                  }

               }

               goto LAB_001016bb;
            }

            iVar16 = uVar14 + 1;
         }

      }
 while ( iVar16 <= iVar15 );
   }

   uVar11 = *(uint*)( pbVar13 + 7 );
   puVar17 = (uint*)&_hb_NullPool;
   if (uVar11 != 0) {
      puVar17 = (uint*)( puVar12 + ( uVar11 >> 0x18 | ( uVar11 & 0xff0000 ) >> 8 | ( uVar11 & 0xff00 ) << 8 | uVar11 << 0x18 ) );
   }

   uVar11 = *puVar17;
   pbVar13 = &_hb_NullPool;
   iVar15 = ( uVar11 >> 0x18 | ( uVar11 & 0xff0000 ) >> 8 | ( uVar11 & 0xff00 ) << 8 | uVar11 << 0x18 ) - 1;
   if (-1 < iVar15) {
      iVar16 = 0;
      do {
         while (true) {
            uVar14 = ( uint )(iVar16 + iVar15) >> 1;
            pbVar13 = (byte*)( (long)puVar17 + (ulong)uVar14 * 5 + 4 );
            uVar11 = ( uint ) * pbVar13 * 0x10000 + (uint)pbVar13[1] * 0x100 + (uint)pbVar13[2];
            if (param_3 < uVar11) break;
            if (param_3 == uVar11) goto LAB_00101692;
            iVar16 = uVar14 + 1;
            if (iVar15 < iVar16) goto LAB_0010168b;
         }
;
         iVar15 = uVar14 - 1;
      }
 while ( iVar16 <= iVar15 );
      LAB_0010168b:pbVar13 = &_hb_NullPool;
   }

   LAB_00101692:uVar10 = *(ushort*)( pbVar13 + 3 ) << 8 | *(ushort*)( pbVar13 + 3 ) >> 8;
   if (uVar10 == 0) {
      LAB_001016a1:uVar8 = 0;
   }
 else {
      *param_5 = (uint)uVar10;
      LAB_001016bb:uVar8 = 1;
   }

   return uVar8;
}
/* hb_ot_get_nominal_glyph(hb_font_t*, void*, unsigned int, unsigned int*, void*) */undefined1 hb_ot_get_nominal_glyph(hb_font_t *param_1, void *param_2, uint param_3, uint *param_4, void *param_5) {
   long *plVar1;
   uint *puVar2;
   long lVar3;
   uint uVar4;
   undefined8 *puVar5;
   long lVar6;
   code *pcVar7;
   hb_face_t *phVar8;
   undefined1 uVar9;
   char cVar10;
   accelerator_t *this;
   /* WARNING: Load size is inaccurate */
   puVar5 = *param_2;
   lVar6 = *(long*)( (long)param_2 + 8 );
   plVar1 = puVar5 + 3;
   do {
      while (true) {
         this(accelerator_t * ) * plVar1;
         if (this != (accelerator_t*)0x0) goto LAB_00101821;
         phVar8 = (hb_face_t*)*puVar5;
         if (phVar8 == (hb_face_t*)0x0) goto LAB_00101973;
         this(accelerator_t * calloc(1, 0x58));
         if (this == (accelerator_t*)0x0) break;
         OT::cmap::accelerator_t::accelerator_t(this, phVar8);
         LOCK();
         lVar3 = *plVar1;
         if (lVar3 == 0) {
            *plVar1 = (long)this;
         }

         UNLOCK();
         if (lVar3 == 0) goto LAB_00101821;
         if (this != (accelerator_t*)&_hb_NullPool) {
            hb_blob_destroy(*(undefined8*)( this + 0x50 ));
            free(this);
         }

      }
;
      LOCK();
      lVar3 = *plVar1;
      if (lVar3 == 0) {
         *plVar1 = (long)&_hb_NullPool;
      }

      UNLOCK();
   }
 while ( lVar3 != 0 );
   LAB_00101973 = (accelerator_t*)&_hb_NullPool;
   LAB_00101821:pcVar7 = *(code**)( this + 0x10 );
   if (pcVar7 == (code*)0x0) {
      return 0;
   }

   if (lVar6 == 0) {
      uVar9 = ( *pcVar7 )(*(undefined8*)( this + 0x18 ), param_3, param_4);
   }
 else {
      puVar2 = (uint*)( lVar6 + ( ulong )(param_3 & 0xff) * 4 );
      uVar4 = *puVar2;
      if (uVar4 >> 0x10 == param_3 >> 8) {
         *param_4 = uVar4 & 0xffff;
      }
 else {
         cVar10 = ( *pcVar7 )(*(undefined8*)( this + 0x18 ), param_3, param_4);
         if (cVar10 == '\0') {
            return 0;
         }

         if (param_3 >> 0x15 == 0 && *param_4 >> 0x10 == 0) {
            *puVar2 = ( param_3 >> 8 ) << 0x10 | *param_4;
         }

      }

      uVar9 = 1;
   }

   return uVar9;
}
/* hb_ot_get_nominal_glyphs(hb_font_t*, void*, unsigned int, unsigned int const*, unsigned int,
   unsigned int*, unsigned int, void*) */uint hb_ot_get_nominal_glyphs(hb_font_t *param_1, void *param_2, uint param_3, uint *param_4, uint param_5, uint *param_6, uint param_7, void *param_8) {
   long *plVar1;
   uint *puVar2;
   long lVar3;
   uint uVar4;
   long lVar5;
   undefined8 *puVar6;
   hb_face_t *phVar7;
   char cVar8;
   accelerator_t *this;
   uint uVar9;
   uint uVar10;
   lVar5 = *(long*)( (long)param_2 + 8 );
   /* WARNING: Load size is inaccurate */
   puVar6 = *param_2;
   plVar1 = puVar6 + 3;
   do {
      while (true) {
         this(accelerator_t * ) * plVar1;
         if (this != (accelerator_t*)0x0) goto LAB_001019b9;
         phVar7 = (hb_face_t*)*puVar6;
         if (phVar7 == (hb_face_t*)0x0) goto LAB_00101b3f;
         this(accelerator_t * calloc(1, 0x58));
         if (this == (accelerator_t*)0x0) break;
         OT::cmap::accelerator_t::accelerator_t(this, phVar7);
         LOCK();
         lVar3 = *plVar1;
         if (lVar3 == 0) {
            *plVar1 = (long)this;
         }

         UNLOCK();
         if (lVar3 == 0) goto LAB_001019b9;
         if (this != (accelerator_t*)&_hb_NullPool) {
            hb_blob_destroy(*(undefined8*)( this + 0x50 ));
            free(this);
         }

      }
;
      LOCK();
      lVar3 = *plVar1;
      if (lVar3 == 0) {
         *plVar1 = (long)&_hb_NullPool;
      }

      UNLOCK();
   }
 while ( lVar3 != 0 );
   LAB_00101b3f = (accelerator_t*)&_hb_NullPool;
   LAB_001019b9:uVar9 = 0;
   uVar10 = uVar9;
   if (( *(long*)( this + 0x10 ) != 0 ) && ( uVar10 = param_3 != 0 )) {
      do {
         uVar10 = *param_4;
         if (lVar5 == 0) {
            cVar8 = ( **(code**)( this + 0x10 ) )(*(undefined8*)( this + 0x18 ), uVar10, param_6);
            if (cVar8 == '\0') {
               return uVar9;
            }

         }
 else {
            puVar2 = (uint*)( lVar5 + ( (ulong)uVar10 & 0xff ) * 4 );
            uVar4 = *puVar2;
            if (uVar4 >> 0x10 == uVar10 >> 8) {
               *param_6 = uVar4 & 0xffff;
            }
 else {
               cVar8 = ( **(code**)( this + 0x10 ) )(*(undefined8*)( this + 0x18 ), uVar10, param_6);
               if (cVar8 == '\0') {
                  return uVar9;
               }

               if (uVar10 >> 0x15 == 0 && *param_6 >> 0x10 == 0) {
                  *puVar2 = ( uVar10 >> 8 ) << 0x10 | *param_6;
               }

            }

         }

         uVar9 = uVar9 + 1;
         param_4 = (uint*)( (long)param_4 + (ulong)param_5 );
         param_6 = (uint*)( (long)param_6 + (ulong)param_7 );
         uVar10 = uVar9;
      }
 while ( param_3 != uVar9 );
   }

   return uVar10;
}
/* hb_ot_get_glyph_h_advances(hb_font_t*, void*, unsigned int, unsigned int const*, unsigned int,
   int*, unsigned int, void*) */void hb_ot_get_glyph_h_advances(hb_font_t *param_1, void *param_2, uint param_3, uint *param_4, uint param_5, int *param_6, uint param_7, void *param_8) {
   long *plVar1;
   float *pfVar2;
   byte bVar3;
   undefined4 *puVar4;
   hb_face_t *phVar5;
   uint uVar6;
   int iVar7;
   undefined *puVar8;
   undefined8 *puVar9;
   ulong uVar10;
   long lVar11;
   float *pfVar12;
   undefined4 *puVar13;
   undefined4 *puVar14;
   accelerator_t *this;
   undefined8 *puVar15;
   sbyte sVar16;
   ushort uVar17;
   ushort uVar18;
   uint uVar19;
   int iVar20;
   undefined *puVar21;
   uint uVar22;
   undefined *puVar23;
   char *pcVar24;
   ulong uVar25;
   byte *pbVar26;
   byte *pbVar27;
   ItemVariationStore *this_00;
   undefined8 *puVar28;
   uint uVar29;
   int *piVar30;
   byte bVar31;
   float fVar32;
   float *local_58;
   bVar31 = 0;
   /* WARNING: Load size is inaccurate */
   puVar9 = *param_2;
   plVar1 = puVar9 + 5;
   do {
      while (true) {
         this(accelerator_t * ) * plVar1;
         if (this != (accelerator_t*)0x0) goto LAB_00101b87;
         phVar5 = (hb_face_t*)*puVar9;
         if (phVar5 == (hb_face_t*)0x0) goto LAB_001021bd;
         this(accelerator_t * calloc(1, 0x28));
         if (this == (accelerator_t*)0x0) break;
         OT::hmtxvmtx<OT::hmtx,OT::hhea,OT::HVAR>::accelerator_t::accelerator_t(this, phVar5);
         LOCK();
         lVar11 = *plVar1;
         if (lVar11 == 0) {
            *plVar1 = (long)this;
         }

         UNLOCK();
         if (lVar11 == 0) goto LAB_00101b87;
         if (this != (accelerator_t*)&_hb_NullPool) {
            hb_blob_destroy(*(undefined8*)( this + 0x18 ));
            *(undefined8*)( this + 0x18 ) = 0;
            hb_blob_destroy(*(undefined8*)( this + 0x20 ));
            free(this);
         }

      }
;
      LOCK();
      lVar11 = *plVar1;
      if (lVar11 == 0) {
         *plVar1 = (long)&_hb_NullPool;
      }

      UNLOCK();
   }
 while ( lVar11 != 0 );
   LAB_001021bd = (accelerator_t*)&_hb_NullPool;
   LAB_00101b87:puVar8 = *(undefined**)( this + 0x20 );
   puVar23 = &_hb_NullPool;
   if (puVar8 == (undefined*)0x0) {
      puVar8 = &_hb_NullPool;
   }

   puVar21 = &_hb_NullPool;
   if (0x13 < *(uint*)( puVar8 + 0x18 )) {
      puVar21 = *(undefined**)( puVar8 + 0x10 );
   }

   uVar29 = *(uint*)( puVar21 + 4 );
   if (uVar29 != 0) {
      puVar23 = puVar21 + ( uVar29 >> 0x18 | ( uVar29 & 0xff0000 ) >> 8 | ( uVar29 & 0xff00 ) << 8 | uVar29 << 0x18 );
   }

   iVar20 = *(int*)( param_1 + 0x78 );
   if (0x7f < iVar20 * param_3) {
      uVar29 = *(uint*)( puVar23 + 2 );
      puVar8 = &_hb_NullPool;
      if (uVar29 != 0) {
         puVar8 = puVar23 + ( uVar29 >> 0x18 | ( uVar29 & 0xff0000 ) >> 8 | ( uVar29 & 0xff00 ) << 8 | uVar29 << 0x18 );
      }

      uVar17 = *(ushort*)( puVar8 + 2 ) << 8 | *(ushort*)( puVar8 + 2 ) >> 8;
      local_58 = (float*)malloc((ulong)uVar17 * 4);
      fVar32 = _LC5;
      if (local_58 != (float*)0x0) {
         if (uVar17 != 0) {
            pfVar2 = local_58 + 1;
            pfVar12 = local_58;
            if (( (int)( pfVar2 + ( uVar17 - 1 ) ) - (int)local_58 & 4U ) == 0) goto LAB_00102088;
            *local_58 = _LC5;
            for (pfVar12 = pfVar2; pfVar12 != pfVar2 + ( uVar17 - 1 ); pfVar12 = pfVar12 + 2) {
               LAB_00102088:*pfVar12 = fVar32;
               pfVar12[1] = fVar32;
            }

         }

         goto LAB_00101bd0;
      }

   }

   local_58 = (float*)0x0;
   LAB_00101bd0:if (iVar20 == 0) {
      LAB_00101cf0:uVar29 = 0;
      piVar30 = param_6;
      if (param_3 != 0) {
         do {
            uVar22 = *param_4;
            uVar25 = (ulong)uVar22;
            if (uVar22 < *(uint*)( this + 4 )) {
               puVar23 = *(undefined**)( this + 0x18 );
               pcVar24 = &_hb_NullPool;
               if (puVar23 == (undefined*)0x0) {
                  puVar23 = &_hb_NullPool;
               }

               uVar10 = ( ulong )(*(int*)this - 1U);
               if (uVar22 < *(int*)this - 1U) {
                  uVar10 = uVar25;
               }

               uVar17 = *(ushort*)( *(long*)( puVar23 + 0x10 ) + uVar10 * 4 );
               uVar17 = uVar17 << 8 | uVar17 >> 8;
               lVar11 = (long)(short)uVar17;
               if (*(uint*)( param_1 + 0x78 ) != 0) {
                  puVar23 = *(undefined**)( this + 0x20 );
                  if (puVar23 == (undefined*)0x0) {
                     puVar23 = &_hb_NullPool;
                  }

                  if (*(uint*)( puVar23 + 0x18 ) == 0) {
                     iVar20 = _glyf_get_advance_with_var_unscaled(param_1, uVar22, false);
                     uVar18 = (ushort)iVar20;
                     if (iVar20 == 0) {
                        uVar18 = uVar17;
                     }

                     lVar11 = (long)(short)uVar18;
                  }
 else {
                     puVar8 = &_hb_NullPool;
                     if (0x13 < *(uint*)( puVar23 + 0x18 )) {
                        puVar8 = *(undefined**)( puVar23 + 0x10 );
                     }

                     uVar19 = *(uint*)( puVar8 + 8 );
                     if (uVar19 != 0) {
                        pcVar24 = puVar8 + ( uVar19 >> 0x18 | ( uVar19 & 0xff0000 ) >> 8 | ( uVar19 & 0xff00 ) << 8 | uVar19 << 0x18 );
                     }

                     if (*pcVar24 == '\0') {
                        uVar18 = *(ushort*)( pcVar24 + 2 ) << 8 | *(ushort*)( pcVar24 + 2 ) >> 8;
                        if (uVar18 != 0) {
                           bVar31 = pcVar24[1];
                           if (uVar18 <= uVar22) {
                              uVar22 = uVar18 - 1;
                           }

                           uVar19 = ( bVar31 >> 4 & 3 ) + 1;
                           pbVar26 = (byte*)( pcVar24 + ( ulong )(uVar22 * uVar19) + 4 );
                           uVar22 = 0;
                           pbVar27 = pbVar26 + uVar19;
                           do {
                              bVar3 = *pbVar26;
                              pbVar26 = pbVar26 + 1;
                              uVar22 = uVar22 * 0x100 + (uint)bVar3;
                           }
 while ( pbVar27 != pbVar26 );
                           goto LAB_00101e0a;
                        }

                     }
 else if (( *pcVar24 == '\x01' ) && ( uVar19 = uVar19 != 0 )) {
                        uVar19 = uVar19 >> 0x18 | ( uVar19 & 0xff0000 ) >> 8 | ( uVar19 & 0xff00 ) << 8 | uVar19 << 0x18;
                        bVar31 = pcVar24[1];
                        if (uVar19 <= uVar22) {
                           uVar22 = uVar19 - 1;
                        }

                        uVar19 = ( bVar31 >> 4 & 3 ) + 1;
                        pbVar26 = (byte*)( pcVar24 + ( ulong )(uVar22 * uVar19) + 6 );
                        uVar22 = 0;
                        pbVar27 = pbVar26 + uVar19;
                        do {
                           bVar3 = *pbVar26;
                           pbVar26 = pbVar26 + 1;
                           uVar22 = uVar22 * 0x100 + (uint)bVar3;
                        }
 while ( pbVar27 != pbVar26 );
                        LAB_00101e0a:sVar16 = ( bVar31 & 0xf ) + 1;
                        uVar25 = ( ulong )(( 1 << sVar16 ) - 1U & uVar22 | ( uVar22 >> sVar16 ) << 0x10);
                     }

                     uVar22 = *(uint*)( puVar8 + 4 );
                     this_00 = (ItemVariationStore*)&_hb_NullPool;
                     if (uVar22 != 0) {
                        this_00 = (ItemVariationStore*)( puVar8 + ( uVar22 >> 0x18 | ( uVar22 & 0xff0000 ) >> 8 | ( uVar22 & 0xff00 ) << 8 | uVar22 << 0x18 ) );
                     }

                     fVar32 = (float)OT::ItemVariationStore::get_delta(this_00, ( uint )(uVar25 >> 0x10), (uint)uVar25 & 0xffff, *(int**)( param_1 + 0x80 ), *(uint*)( param_1 + 0x78 ), local_58);
                     fVar32 = fVar32 + _LC9;
                     if ((float)( (uint)fVar32 & _LC4 ) < _LC1) {
                        fVar32 = (float)( ( uint )((float)(int)fVar32 - (float)( -(uint)(fVar32 < (float)(int)fVar32) & _LC3 )) | ~_LC4 & (uint)fVar32 );
                     }

                     lVar11 = (long)(short)(long)( fVar32 + (float)uVar17 );
                  }

               }

            }
 else {
               lVar11 = 0;
               if (*(int*)( this + 8 ) == 0) {
                  lVar11 = (long)*(short*)( this + 0x10 );
               }

            }

            uVar29 = uVar29 + 1;
            *piVar30 = (int)( ( ulong )(lVar11 * *(long*)( param_1 + 0x58 ) + 0x8000) >> 0x10 );
            param_4 = (uint*)( (long)param_4 + (ulong)param_5 );
            piVar30 = (int*)( (long)piVar30 + (ulong)param_7 );
         }
 while ( param_3 != uVar29 );
      }

   }
 else {
      plVar1 = (long*)( (long)param_2 + 0x18 );
      while (*plVar1 == 0) {
         puVar9 = (undefined8*)malloc(0x400);
         if (puVar9 == (undefined8*)0x0) goto LAB_00101cf0;
         puVar28 = puVar9;
         for (lVar11 = 0x80; puVar15 = puVar9,lVar11 != 0; lVar11 = lVar11 + -1) {
            *puVar28 = 0;
            puVar28 = puVar28 + (ulong)bVar31 * -2 + 1;
         }

         do {
            *(undefined4*)puVar15 = 0xffffffff;
            puVar28 = puVar15 + 1;
            *(undefined4*)( (long)puVar15 + 4 ) = 0xffffffff;
            puVar15 = puVar28;
         }
 while ( puVar28 != puVar9 + 0x80 );
         LOCK();
         lVar11 = *plVar1;
         if (lVar11 == 0) {
            *plVar1 = (long)puVar9;
         }

         UNLOCK();
         if (lVar11 == 0) {
            *(undefined4*)( (long)param_2 + 0x10 ) = *(undefined4*)( param_1 + 0x14 );
            break;
         }

         free(puVar9);
      }
;
      if (*(int*)( param_1 + 0x14 ) != *(int*)( (long)param_2 + 0x10 )) {
         puVar4 = *(undefined4**)( (long)param_2 + 0x18 );
         puVar13 = puVar4;
         do {
            *puVar13 = 0xffffffff;
            puVar14 = puVar13 + 2;
            puVar13[1] = 0xffffffff;
            puVar13 = puVar14;
         }
 while ( puVar14 != puVar4 + 0x100 );
         *(undefined4*)( (long)param_2 + 0x10 ) = *(undefined4*)( param_1 + 0x14 );
      }

      uVar29 = 0;
      piVar30 = param_6;
      if (param_3 != 0) {
         do {
            uVar22 = *param_4;
            uVar19 = *(uint*)( *plVar1 + ( ulong )(uVar22 & 0xff) * 4 );
            if (( uVar19 == 0xffffffff ) || ( uVar6 = uVar19 & 0xffff ),uVar19 >> 0x10 != uVar22 >> 8) {
               uVar6 = OT::hmtxvmtx<OT::hmtx,OT::hhea,OT::HVAR>::accelerator_t::get_advance_with_var_unscaled(this, uVar22, param_1, local_58);
               uVar22 = *param_4;
               if (( uVar6 & 0xffff0000 ) == 0 && uVar22 >> 0x18 == 0) {
                  *(uint*)( *plVar1 + ( ulong )(uVar22 & 0xff) * 4 ) = ( uVar22 >> 8 ) << 0x10 | uVar6;
               }

            }

            uVar29 = uVar29 + 1;
            param_4 = (uint*)( (long)param_4 + (ulong)param_5 );
            *piVar30 = (int)( ( ulong )((long)(short)uVar6 * *(long*)( param_1 + 0x58 ) + 0x8000) >> 0x10 );
            piVar30 = (int*)( (long)piVar30 + (ulong)param_7 );
         }
 while ( param_3 != uVar29 );
      }

   }

   free(local_58);
   iVar20 = *(int*)( param_1 + 0x3c );
   if (( iVar20 != 0 ) && ( param_1[0x38] == (hb_font_t)0x0 )) {
      if (*(int*)( param_1 + 0x28 ) < 0) {
         iVar20 = -iVar20;
      }

      if (param_3 != 0) {
         uVar29 = 0;
         do {
            iVar7 = *param_6;
            if (iVar7 != 0) {
               iVar7 = iVar7 + iVar20;
            }

            uVar29 = uVar29 + 1;
            *param_6 = iVar7;
            param_6 = (int*)( (long)param_6 + (ulong)param_7 );
         }
 while ( param_3 != uVar29 );
      }

   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* hb_ot_get_glyph_v_advances(hb_font_t*, void*, unsigned int, unsigned int const*, unsigned int,
   int*, unsigned int, void*) */void hb_ot_get_glyph_v_advances(hb_font_t *param_1, void *param_2, uint param_3, uint *param_4, uint param_5, int *param_6, uint param_7, void *param_8) {
   float *pfVar1;
   byte bVar2;
   byte bVar3;
   undefined8 *puVar4;
   hb_face_t *phVar5;
   int iVar6;
   undefined *puVar7;
   ulong uVar8;
   long lVar9;
   float *__ptr;
   float *pfVar10;
   accelerator_t *this;
   sbyte sVar11;
   ushort uVar12;
   ushort uVar13;
   uint uVar14;
   int iVar15;
   undefined *puVar16;
   long *plVar17;
   undefined *puVar18;
   char *pcVar19;
   uint uVar20;
   ulong uVar21;
   byte *pbVar22;
   uint uVar23;
   byte *pbVar24;
   ItemVariationStore *this_00;
   uint uVar25;
   int *piVar26;
   long in_FS_OFFSET;
   float fVar27;
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   /* WARNING: Load size is inaccurate */
   puVar4 = *param_2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar17 = puVar4 + 0xc;
   do {
      while (true) {
         this(accelerator_t * ) * plVar17;
         if (this != (accelerator_t*)0x0) goto LAB_00102284;
         phVar5 = (hb_face_t*)*puVar4;
         if (phVar5 == (hb_face_t*)0x0) goto LAB_0010280d;
         this(accelerator_t * calloc(1, 0x28));
         if (this == (accelerator_t*)0x0) break;
         OT::hmtxvmtx<OT::vmtx,OT::vhea,OT::VVAR>::accelerator_t::accelerator_t(this, phVar5);
         LOCK();
         lVar9 = *plVar17;
         if (lVar9 == 0) {
            *plVar17 = (long)this;
         }

         UNLOCK();
         if (lVar9 == 0) goto LAB_00102284;
         if (this != (accelerator_t*)&_hb_NullPool) {
            hb_blob_destroy(*(undefined8*)( this + 0x18 ));
            *(undefined8*)( this + 0x18 ) = 0;
            hb_blob_destroy(*(undefined8*)( this + 0x20 ));
            free(this);
         }

      }
;
      LOCK();
      lVar9 = *plVar17;
      if (lVar9 == 0) {
         *plVar17 = (long)&_hb_NullPool;
      }

      UNLOCK();
   }
 while ( lVar9 != 0 );
   LAB_0010280d = (accelerator_t*)&_hb_NullPool;
   LAB_00102284:uVar14 = *(uint*)( this + 4 );
   if (uVar14 == 0) {
      local_78 = (undefined1[16])0x0;
      local_68 = (undefined1[16])0x0;
      local_58 = (undefined1[16])0x0;
      plVar17 = *(long**)( *(long*)( param_1 + 0x90 ) + 0x10 );
      if (plVar17 != (long*)0x0) {
         plVar17 = (long*)*plVar17;
      }

      iVar15 = ( **(code**)( *(long*)( param_1 + 0x90 ) + 0x20 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), local_78, plVar17);
      if (iVar15 == 0) {
         iVar6 = (int)( (double)*(int*)( param_1 + 0x2c ) * __LC40 );
         iVar15 = iVar6 - *(int*)( param_1 + 0x2c );
         local_78._4_4_ = iVar15;
         local_78._0_4_ = iVar6;
      }
 else {
         iVar15 = local_78._4_4_;
         iVar6 = local_78._0_4_;
      }

      if (param_3 != 0) {
         uVar14 = 0;
         piVar26 = param_6;
         do {
            uVar14 = uVar14 + 1;
            *piVar26 = iVar15 - iVar6;
            piVar26 = (int*)( (long)piVar26 + (ulong)param_7 );
         }
 while ( param_3 != uVar14 );
      }

      goto LAB_0010263f;
   }

   puVar18 = *(undefined**)( this + 0x20 );
   puVar7 = &_hb_NullPool;
   if (puVar18 == (undefined*)0x0) {
      puVar18 = &_hb_NullPool;
   }

   puVar16 = &_hb_NullPool;
   if (0x17 < *(uint*)( puVar18 + 0x18 )) {
      puVar16 = *(undefined**)( puVar18 + 0x10 );
   }

   uVar20 = *(uint*)( puVar16 + 4 );
   if (uVar20 != 0) {
      puVar7 = puVar16 + ( uVar20 >> 0x18 | ( uVar20 & 0xff0000 ) >> 8 | ( uVar20 & 0xff00 ) << 8 | uVar20 << 0x18 );
   }

   if (*(int*)( param_1 + 0x78 ) == 0) {
      LAB_001022cb:__ptr = (float*)0x0;
   }
 else {
      uVar20 = *(uint*)( puVar7 + 2 );
      puVar18 = &_hb_NullPool;
      if (uVar20 != 0) {
         puVar18 = puVar7 + ( uVar20 >> 0x18 | ( uVar20 & 0xff0000 ) >> 8 | ( uVar20 & 0xff00 ) << 8 | uVar20 << 0x18 );
      }

      uVar12 = *(ushort*)( puVar18 + 2 ) << 8 | *(ushort*)( puVar18 + 2 ) >> 8;
      __ptr = (float*)malloc((ulong)uVar12 * 4);
      fVar27 = _LC5;
      if (__ptr == (float*)0x0) goto LAB_001022cb;
      if (uVar12 != 0) {
         pfVar1 = __ptr + 1;
         pfVar10 = __ptr;
         if (( (int)( pfVar1 + ( uVar12 - 1 ) ) - (int)__ptr & 4U ) == 0) goto LAB_00102578;
         *__ptr = _LC5;
         for (pfVar10 = pfVar1; pfVar10 != pfVar1 + ( uVar12 - 1 ); pfVar10 = pfVar10 + 2) {
            LAB_00102578:*pfVar10 = fVar27;
            pfVar10[1] = fVar27;
         }

      }

   }

   if (param_3 != 0) {
      uVar25 = 0;
      uVar20 = *param_4;
      piVar26 = param_6;
      if (uVar14 <= uVar20) goto LAB_001024ce;
      do {
         uVar21 = (ulong)uVar20;
         puVar7 = *(undefined**)( this + 0x18 );
         pcVar19 = &_hb_NullPool;
         if (puVar7 == (undefined*)0x0) {
            puVar7 = &_hb_NullPool;
         }

         uVar8 = ( ulong )(*(int*)this - 1U);
         if (uVar20 < *(int*)this - 1U) {
            uVar8 = uVar21;
         }

         uVar12 = *(ushort*)( *(long*)( puVar7 + 0x10 ) + uVar8 * 4 );
         uVar12 = uVar12 << 8 | uVar12 >> 8;
         if (*(uint*)( param_1 + 0x78 ) == 0) {
            LAB_00102590:lVar9 = (long)(short)-uVar12;
         }
 else {
            puVar7 = *(undefined**)( this + 0x20 );
            if (puVar7 == (undefined*)0x0) {
               puVar7 = &_hb_NullPool;
            }

            if (*(uint*)( puVar7 + 0x18 ) == 0) {
               iVar15 = _glyf_get_advance_with_var_unscaled(param_1, uVar20, true);
               if (iVar15 == 0) goto LAB_00102590;
               lVar9 = (long)(short)-(short)iVar15;
            }
 else {
               puVar18 = &_hb_NullPool;
               if (0x17 < *(uint*)( puVar7 + 0x18 )) {
                  puVar18 = *(undefined**)( puVar7 + 0x10 );
               }

               uVar14 = *(uint*)( puVar18 + 8 );
               if (uVar14 != 0) {
                  pcVar19 = puVar18 + ( uVar14 >> 0x18 | ( uVar14 & 0xff0000 ) >> 8 | ( uVar14 & 0xff00 ) << 8 | uVar14 << 0x18 );
               }

               if (*pcVar19 == '\0') {
                  uVar13 = *(ushort*)( pcVar19 + 2 ) << 8 | *(ushort*)( pcVar19 + 2 ) >> 8;
                  if (uVar13 != 0) {
                     bVar2 = pcVar19[1];
                     if (uVar13 <= uVar20) {
                        uVar20 = uVar13 - 1;
                     }

                     uVar23 = ( bVar2 >> 4 & 3 ) + 1;
                     pbVar22 = (byte*)( pcVar19 + ( ulong )(uVar20 * uVar23) + 4 );
                     uVar14 = 0;
                     pbVar24 = pbVar22 + uVar23;
                     do {
                        bVar3 = *pbVar22;
                        pbVar22 = pbVar22 + 1;
                        uVar14 = uVar14 * 0x100 + (uint)bVar3;
                     }
 while ( pbVar24 != pbVar22 );
                     goto LAB_001023eb;
                  }

               }
 else if (( *pcVar19 == '\x01' ) && ( uVar14 = uVar14 != 0 )) {
                  uVar14 = uVar14 >> 0x18 | ( uVar14 & 0xff0000 ) >> 8 | ( uVar14 & 0xff00 ) << 8 | uVar14 << 0x18;
                  bVar2 = pcVar19[1];
                  if (uVar14 <= uVar20) {
                     uVar20 = uVar14 - 1;
                  }

                  uVar23 = ( bVar2 >> 4 & 3 ) + 1;
                  pbVar22 = (byte*)( pcVar19 + ( ulong )(uVar20 * uVar23) + 6 );
                  uVar14 = 0;
                  pbVar24 = pbVar22 + uVar23;
                  do {
                     bVar3 = *pbVar22;
                     pbVar22 = pbVar22 + 1;
                     uVar14 = uVar14 * 0x100 + (uint)bVar3;
                  }
 while ( pbVar24 != pbVar22 );
                  LAB_001023eb:sVar11 = ( bVar2 & 0xf ) + 1;
                  uVar21 = ( ulong )(( 1 << sVar11 ) - 1U & uVar14 | ( uVar14 >> sVar11 ) << 0x10);
               }

               uVar14 = *(uint*)( puVar18 + 4 );
               this_00 = (ItemVariationStore*)&_hb_NullPool;
               if (uVar14 != 0) {
                  this_00 = (ItemVariationStore*)( puVar18 + ( uVar14 >> 0x18 | ( uVar14 & 0xff0000 ) >> 8 | ( uVar14 & 0xff00 ) << 8 | uVar14 << 0x18 ) );
               }

               fVar27 = (float)OT::ItemVariationStore::get_delta(this_00, ( uint )(uVar21 >> 0x10), (uint)uVar21 & 0xffff, *(int**)( param_1 + 0x80 ), *(uint*)( param_1 + 0x78 ), __ptr);
               fVar27 = fVar27 + _LC9;
               if ((float)( (uint)fVar27 & _LC4 ) < _LC1) {
                  fVar27 = (float)( ( uint )((float)(int)fVar27 - (float)( -(uint)(fVar27 < (float)(int)fVar27) & _LC3 )) | ~_LC4 & (uint)fVar27 );
               }

               lVar9 = (long)(short)-(short)(long)(fVar27 + (float)uVar12);
            }

         }

         while (true) {
            uVar25 = uVar25 + 1;
            *piVar26 = (int)( ( ulong )(lVar9 * *(long*)( param_1 + 0x60 ) + 0x8000) >> 0x10 );
            param_4 = (uint*)( (long)param_4 + (ulong)param_5 );
            piVar26 = (int*)( (long)piVar26 + (ulong)param_7 );
            if (param_3 == uVar25) goto LAB_0010262d;
            uVar20 = *param_4;
            if (uVar20 < *(uint*)( this + 4 )) break;
            LAB_001024ce:lVar9 = 0;
            if (*(int*)( this + 8 ) == 0) {
               lVar9 = (long)-*(short *)(this + 0x10);
            }

         }
;
      }
 while ( true );
   }

   LAB_0010262d:free(__ptr);
   LAB_0010263f:iVar15 = *(int*)( param_1 + 0x40 );
   if (( iVar15 != 0 ) && ( param_1[0x38] == (hb_font_t)0x0 )) {
      if (*(int*)( param_1 + 0x2c ) < 0) {
         iVar15 = -iVar15;
      }

      if (param_3 != 0) {
         uVar14 = 0;
         do {
            iVar6 = *param_6;
            if (iVar6 != 0) {
               iVar6 = iVar6 + iVar15;
            }

            uVar14 = uVar14 + 1;
            *param_6 = iVar6;
            param_6 = (int*)( (long)param_6 + (ulong)param_7 );
         }
 while ( param_3 != uVar14 );
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* hb_ot_draw_glyph(hb_font_t*, void*, unsigned int, hb_draw_funcs_t*, void*, void*) */void hb_ot_draw_glyph(hb_font_t *param_1, void *param_2, uint param_3, hb_draw_funcs_t *param_4, void *param_5, void *param_6) {
   long *plVar1;
   long lVar2;
   hb_face_t *phVar3;
   bool bVar4;
   uint uVar5;
   uint uVar6;
   hb_draw_funcs_t *phVar7;
   int *piVar8;
   bool bVar9;
   char cVar10;
   hb_font_t *phVar11;
   glyf_accelerator_t *this;
   long lVar12;
   long in_FS_OFFSET;
   float fVar13;
   float fVar14;
   int local_f8[2];
   void *local_f0;
   undefined8 local_e8;
   void *local_e0;
   hb_font_t *local_d8;
   float *pfStack_d0;
   undefined1 local_c8;
   uint7 uStack_c7;
   undefined4 uStack_c0;
   uint uStack_bc;
   undefined8 local_b8;
   undefined1 uStack_b0;
   uint7 uStack_af;
   undefined4 local_a8;
   uint uStack_a4;
   undefined8 uStack_a0;
   undefined1 local_98;
   uint7 uStack_97;
   undefined8 uStack_90;
   float local_88;
   undefined1 local_84;
   hb_draw_funcs_t *local_80;
   int *local_78;
   undefined1 local_70[8];
   float fStack_68;
   float fStack_64;
   undefined1 local_60[16];
   undefined1 local_50[16];
   long local_40;
   fVar13 = *(float*)( param_1 + 0x48 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(int*)( param_1 + 0x3c ) == 0 ) && ( *(int*)( param_1 + 0x40 ) == 0 )) {
      local_f8[0] = 0;
      local_f8[1] = 0;
      bVar4 = false;
      local_f0 = (void*)0x0;
      local_e8 = 0;
      local_e0 = (void*)0x0;
      local_80 = param_4;
   }
 else {
      bVar4 = true;
      local_f8[0] = 0;
      local_f8[1] = 0;
      local_f0 = (void*)0x0;
      local_e8 = 0;
      local_e0 = (void*)0x0;
      local_80 = (hb_draw_funcs_t*)hb_outline_recording_pen_get_funcs();
      param_5 = local_f8;
   }

   local_84 = fVar13 == 0.0;
   _local_70 = (undefined1[16])0x0;
   local_60 = (undefined1[16])0x0;
   lVar12 = *(long*)( param_1 + 0x20 );
   local_50 = (undefined1[16])0x0;
   plVar1 = (long*)( lVar12 + 0xe8 );
   local_88 = fVar13;
   local_78 = (int*)param_5;
   do {
      while (true) {
         this(glyf_accelerator_t * ) * plVar1;
         if (this != (glyf_accelerator_t*)0x0) goto LAB_00102966;
         phVar3 = *(hb_face_t**)( lVar12 + 0x70 );
         if (phVar3 == (hb_face_t*)0x0) goto LAB_00102ceb;
         this(glyf_accelerator_t * calloc(1, 0x30));
         if (this == (glyf_accelerator_t*)0x0) break;
         OT::glyf_accelerator_t::glyf_accelerator_t(this, phVar3);
         LOCK();
         lVar2 = *plVar1;
         if (lVar2 == 0) {
            *plVar1 = (long)this;
         }

         UNLOCK();
         if (lVar2 == 0) goto LAB_00102966;
         if (this != (glyf_accelerator_t*)&_hb_NullPool) {
            hb_blob_destroy(*(undefined8*)( this + 0x28 ));
            free(this);
         }

      }
;
      LOCK();
      lVar2 = *plVar1;
      if (lVar2 == 0) {
         *plVar1 = (long)&_hb_NullPool;
      }

      UNLOCK();
   }
 while ( lVar2 != 0 );
   LAB_00102ceb = (glyf_accelerator_t*)&_hb_NullPool;
   LAB_00102966:uVar6 = uStack_a4;
   uVar5 = uStack_bc;
   pfStack_d0 = &local_88;
   local_c8 = 0;
   uStack_bc = uStack_bc & 0xffffff00;
   uStack_b0 = 0;
   uStack_a4 = uStack_a4 & 0xffffff00;
   local_98 = 0;
   local_d8 = param_1;
   bVar9 = OT::glyf_accelerator_t::get_points<OT::glyf_impl::path_builder_t>(this, param_1, param_3, 0, 0, this, param_1, pfStack_d0, (ulong)uStack_c7 << 8, CONCAT44(uVar5, uStack_c0) & 0xffffff00ffffffff, local_b8, (ulong)uStack_af << 8, CONCAT44(uVar6, local_a8) & 0xffffff00ffffffff, uStack_a0, (ulong)uStack_97 << 8, uStack_90);
   if (!bVar9) {
      phVar11 = (hb_font_t*)hb_lazy_loader_t<OT::cff2_accelerator_t,hb_face_lazy_loader_t<OT::cff2_accelerator_t,17u>,hb_face_t,17u,OT::cff2_accelerator_t>::get_stored((hb_lazy_loader_t<OT::cff2_accelerator_t,hb_face_lazy_loader_t<OT::cff2_accelerator_t,17u>,hb_face_t,17u,OT::cff2_accelerator_t>*)( *(long*)( param_1 + 0x20 ) + 0xf8 ));
      cVar10 = OT::cff2::accelerator_t::get_path(phVar11, (uint)param_1, (hb_draw_session_t*)(ulong)param_3);
      if (cVar10 == '\0') {
         phVar11 = (hb_font_t*)hb_lazy_loader_t<OT::cff1_accelerator_t,hb_face_lazy_loader_t<OT::cff1_accelerator_t,16u>,hb_face_t,16u,OT::cff1_accelerator_t>::get_stored((hb_lazy_loader_t<OT::cff1_accelerator_t,hb_face_lazy_loader_t<OT::cff1_accelerator_t,16u>,hb_face_t,16u,OT::cff1_accelerator_t>*)( *(long*)( param_1 + 0x20 ) + 0xf0 ));
         OT::cff1::accelerator_t::get_path(phVar11, (uint)param_1, (hb_draw_session_t*)(ulong)param_3);
      }

   }

   piVar8 = local_78;
   phVar7 = local_80;
   if (local_70._0_4_ != 0) {
      if (( (float)local_70._4_4_ != fStack_64 ) || ( fStack_68 != (float)local_60._0_4_ )) {
         lVar12 = *(long*)( local_80 + 0x38 );
         if (lVar12 != 0) {
            lVar12 = *(long*)( lVar12 + 8 );
         }

         ( **(code**)( local_80 + 0x18 ) )(local_80, local_78, local_70, lVar12);
      }

      lVar12 = *(long*)( phVar7 + 0x38 );
      if (lVar12 != 0) {
         lVar12 = *(long*)( lVar12 + 0x20 );
      }

      ( **(code**)( phVar7 + 0x30 ) )(phVar7, piVar8, local_70, lVar12);
   }

   if (bVar4) {
      if (param_1[0x38] == (hb_font_t)0x0) {
         fVar13 = (float)*(int*)( param_1 + 0x3c ) * _LC9;
      }
 else {
         fVar13 = 0.0;
      }

      fVar14 = _LC9 * (float)*(int*)( param_1 + 0x40 );
      if (*(int*)( param_1 + 0x28 ) < 0) {
         fVar13 = (float)( (uint)fVar13 ^ _LC38 );
      }

      if (*(int*)( param_1 + 0x2c ) < 0) {
         fVar14 = (float)( (uint)fVar14 ^ _LC38 );
      }

      hb_outline_t::embolden((float)*(int*)( param_1 + 0x3c ), (float)*(int*)( param_1 + 0x40 ), fVar13, fVar14);
      hb_outline_t::replay((hb_draw_funcs_t*)local_f8, param_4);
   }

   if ((int)local_e8 != 0) {
      free(local_e0);
   }

   if (local_f8[0] != 0) {
      free(local_f0);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* hb_ot_get_glyph_v_origin(hb_font_t*, void*, unsigned int, int*, int*, void*) */undefined8 hb_ot_get_glyph_v_origin(hb_font_t *param_1, void *param_2, uint param_3, int *param_4, int *param_5, void *param_6) {
   byte bVar1;
   undefined8 *puVar2;
   hb_face_t *phVar3;
   char cVar4;
   ushort uVar5;
   int iVar6;
   undefined *puVar7;
   ushort *puVar8;
   long lVar9;
   long lVar10;
   glyf_accelerator_t *this;
   accelerator_t *paVar11;
   sbyte sVar12;
   int iVar13;
   uint uVar14;
   long *plVar15;
   byte *pbVar16;
   undefined *puVar17;
   char *pcVar18;
   ulong uVar19;
   byte *pbVar20;
   ulong uVar21;
   byte bVar22;
   uint uVar23;
   ItemVariationStore *pIVar24;
   ushort *puVar25;
   long in_FS_OFFSET;
   float fVar26;
   int local_8c;
   hb_glyph_extents_t local_88[4];
   int iStack_84;
   int iStack_7c;
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   uVar21 = (ulong)param_3;
   /* WARNING: Load size is inaccurate */
   puVar2 = *param_2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar9 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
   if (lVar9 != 0) {
      lVar9 = *(long*)( lVar9 + 0x28 );
   }

   iVar6 = ( **(code**)( *(long*)( param_1 + 0x90 ) + 0x48 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), uVar21, lVar9);
   plVar15 = puVar2 + 0xd;
   *param_4 = iVar6 / 2;
   LAB_00102d6d:lVar9 = *plVar15;
   if (lVar9 == 0) {
      if ((hb_face_t*)*puVar2 == (hb_face_t*)0x0) {
         lVar9 = hb_blob_get_empty();
      }
 else {
         lVar9 = hb_table_lazy_loader_t<OT::VORG,13u,true>::create((hb_face_t*)*puVar2);
         if (lVar9 == 0) {
            lVar9 = hb_blob_get_empty();
            LOCK();
            lVar10 = *plVar15;
            if (lVar10 == 0) {
               *plVar15 = lVar9;
            }

            UNLOCK();
            if (lVar10 != 0) goto code_r0x001036ca;
         }
 else {
            LOCK();
            lVar10 = *plVar15;
            if (lVar10 == 0) {
               *plVar15 = lVar9;
            }

            UNLOCK();
            if (lVar10 != 0) goto LAB_0010327b;
         }

      }

   }

   puVar25 = (ushort*)&_hb_NullPool;
   if (7 < *(uint*)( lVar9 + 0x18 )) {
      puVar25 = *(ushort**)( lVar9 + 0x10 );
   }

   if (( uint )(ushort)(*puVar25 << 8 | *puVar25 >> 8) * 0x10000 + ( uint )(ushort)(puVar25[1] << 8 | puVar25[1] >> 8) == 0) {
      plVar15 = puVar2 + 0xf;
      _local_88 = (undefined1[16])0x0;
      do {
         while (true) {
            this(glyf_accelerator_t * ) * plVar15;
            if (this != (glyf_accelerator_t*)0x0) goto LAB_00102dcc;
            phVar3 = (hb_face_t*)*puVar2;
            if (phVar3 == (hb_face_t*)0x0) goto LAB_001036f2;
            this(glyf_accelerator_t * calloc(1, 0x30));
            if (this == (glyf_accelerator_t*)0x0) break;
            OT::glyf_accelerator_t::glyf_accelerator_t(this, phVar3);
            LOCK();
            lVar9 = *plVar15;
            if (lVar9 == 0) {
               *plVar15 = (long)this;
            }

            UNLOCK();
            if (lVar9 == 0) goto LAB_00102dcc;
            if (this != (glyf_accelerator_t*)&_hb_NullPool) {
               hb_blob_destroy(*(undefined8*)( this + 0x28 ));
               free(this);
            }

         }
;
         LOCK();
         lVar9 = *plVar15;
         if (lVar9 == 0) {
            *plVar15 = (long)&_hb_NullPool;
         }

         UNLOCK();
      }
 while ( lVar9 != 0 );
      LAB_001036f2 = (glyf_accelerator_t*)&_hb_NullPool;
      LAB_00102dcc:cVar4 = OT::glyf_accelerator_t::get_extents(this, param_1, param_3, local_88);
      if (cVar4 == '\0') {
         local_78 = (undefined1[16])0x0;
         local_68 = (undefined1[16])0x0;
         local_58 = (undefined1[16])0x0;
         plVar15 = *(long**)( *(long*)( param_1 + 0x90 ) + 0x10 );
         if (plVar15 != (long*)0x0) {
            plVar15 = (long*)*plVar15;
         }

         iVar6 = ( **(code**)( *(long*)( param_1 + 0x90 ) + 0x20 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), local_78, plVar15);
         if (iVar6 == 0) {
            iVar6 = (int)( (double)*(int*)( param_1 + 0x2c ) * __LC40 );
         }
 else {
            iVar6 = local_78._0_4_;
         }

      }
 else {
         plVar15 = puVar2 + 0xc;
         do {
            while (true) {
               paVar11 = (accelerator_t*)*plVar15;
               if (paVar11 != (accelerator_t*)0x0) goto LAB_00102dfa;
               phVar3 = (hb_face_t*)*puVar2;
               if (phVar3 == (hb_face_t*)0x0) goto LAB_0010372e;
               paVar11 = (accelerator_t*)calloc(1, 0x28);
               if (paVar11 == (accelerator_t*)0x0) break;
               OT::hmtxvmtx<OT::vmtx,OT::vhea,OT::VVAR>::accelerator_t::accelerator_t(paVar11, phVar3);
               LOCK();
               lVar9 = *plVar15;
               if (lVar9 == 0) {
                  *plVar15 = (long)paVar11;
               }

               UNLOCK();
               if (lVar9 == 0) goto LAB_00102dfa;
               if (paVar11 != (accelerator_t*)&_hb_NullPool) {
                  hb_blob_destroy(*(undefined8*)( paVar11 + 0x18 ));
                  *(undefined8*)( paVar11 + 0x18 ) = 0;
                  hb_blob_destroy(*(undefined8*)( paVar11 + 0x20 ));
                  free(paVar11);
               }

            }
;
            LOCK();
            lVar9 = *plVar15;
            if (lVar9 == 0) {
               *plVar15 = (long)&_hb_NullPool;
            }

            UNLOCK();
         }
 while ( lVar9 != 0 );
         LAB_0010372e:paVar11 = (accelerator_t*)&_hb_NullPool;
         LAB_00102dfa:local_8c = 0;
         if (*(uint*)( param_1 + 0x78 ) == 0) {
            uVar23 = *(uint*)paVar11;
            if (param_3 < uVar23) {
               puVar7 = *(undefined**)( paVar11 + 0x18 );
               if (puVar7 == (undefined*)0x0) {
                  puVar7 = &_hb_NullPool;
               }

               uVar5 = *(ushort*)( *(long*)( puVar7 + 0x10 ) + 2 + uVar21 * 4 );
               uVar5 = uVar5 << 8 | uVar5 >> 8;
            }
 else {
               if (*(uint*)( paVar11 + 4 ) <= param_3) goto LAB_00102e5c;
               puVar7 = *(undefined**)( paVar11 + 0x18 );
               if (puVar7 == (undefined*)0x0) {
                  puVar7 = &_hb_NullPool;
               }

               uVar5 = *(ushort*)( (ulong)uVar23 * 4 + ( ulong )(param_3 - uVar23) * 2 + *(long*)( puVar7 + 0x10 ) );
               uVar5 = uVar5 << 8 | uVar5 >> 8;
            }

         }
 else {
            puVar7 = *(undefined**)( paVar11 + 0x20 );
            if (puVar7 == (undefined*)0x0) {
               puVar7 = &_hb_NullPool;
            }

            puVar17 = &_hb_NullPool;
            if (0x17 < *(uint*)( puVar7 + 0x18 )) {
               puVar17 = *(undefined**)( puVar7 + 0x10 );
            }

            uVar23 = *(uint*)( puVar17 + 0xc );
            if (uVar23 == 0) {
               LAB_00102e3f:cVar4 = _glyf_get_leading_bearing_with_var_unscaled(param_1, param_3, true, &local_8c);
               if (cVar4 == '\0') {
                  LAB_00102e5c:local_78 = (undefined1[16])0x0;
                  local_68 = (undefined1[16])0x0;
                  local_58 = (undefined1[16])0x0;
                  plVar15 = *(long**)( *(long*)( param_1 + 0x90 ) + 0x10 );
                  if (plVar15 != (long*)0x0) {
                     plVar15 = (long*)*plVar15;
                  }

                  iVar6 = ( **(code**)( *(long*)( param_1 + 0x90 ) + 0x20 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), local_78, plVar15);
                  if (iVar6 == 0) {
                     iVar6 = *(int*)( param_1 + 0x2c );
                  }
 else {
                     iVar6 = local_78._0_4_ - local_78._4_4_;
                  }

                  iVar6 = ( iVar6 + iStack_7c >> 1 ) + iStack_84;
                  goto LAB_00102f00;
               }

               uVar5 = (ushort)local_8c;
            }
 else {
               pcVar18 = puVar17 + ( uVar23 >> 0x18 | ( uVar23 & 0xff0000 ) >> 8 | ( uVar23 & 0xff00 ) << 8 | uVar23 << 0x18 );
               uVar19 = uVar21;
               if (*pcVar18 == '\0') {
                  uVar5 = *(ushort*)( pcVar18 + 2 ) << 8 | *(ushort*)( pcVar18 + 2 ) >> 8;
                  if (uVar5 != 0) {
                     bVar22 = pcVar18[1];
                     uVar23 = uVar5 - 1;
                     if (param_3 < uVar5) {
                        uVar23 = param_3;
                     }

                     uVar14 = ( bVar22 >> 4 & 3 ) + 1;
                     pbVar16 = (byte*)( pcVar18 + ( ulong )(uVar23 * uVar14) + 4 );
                     pbVar20 = pbVar16 + uVar14;
                     uVar23 = 0;
                     do {
                        bVar1 = *pbVar16;
                        pbVar16 = pbVar16 + 1;
                        uVar23 = (uint)bVar1 + uVar23 * 0x100;
                     }
 while ( pbVar16 != pbVar20 );
                     goto LAB_001033ac;
                  }

               }
 else if (( *pcVar18 == '\x01' ) && ( uVar23 = uVar23 != 0 )) {
                  uVar14 = uVar23 >> 0x18 | ( uVar23 & 0xff0000 ) >> 8 | ( uVar23 & 0xff00 ) << 8 | uVar23 << 0x18;
                  bVar22 = pcVar18[1];
                  uVar23 = uVar14 - 1;
                  if (param_3 < uVar14) {
                     uVar23 = param_3;
                  }

                  uVar14 = ( bVar22 >> 4 & 3 ) + 1;
                  pbVar16 = (byte*)( pcVar18 + ( ulong )(uVar23 * uVar14) + 6 );
                  pbVar20 = pbVar16 + uVar14;
                  uVar23 = 0;
                  do {
                     bVar1 = *pbVar16;
                     pbVar16 = pbVar16 + 1;
                     uVar23 = (uint)bVar1 + uVar23 * 0x100;
                  }
 while ( pbVar16 != pbVar20 );
                  LAB_001033ac:sVar12 = ( bVar22 & 0xf ) + 1;
                  uVar19 = ( ulong )(( 1 << sVar12 ) - 1U & uVar23 | ( uVar23 >> sVar12 ) << 0x10);
               }

               uVar23 = *(uint*)( puVar17 + 4 );
               pIVar24 = (ItemVariationStore*)&_hb_NullPool;
               if (uVar23 != 0) {
                  pIVar24 = (ItemVariationStore*)( puVar17 + ( uVar23 >> 0x18 | ( uVar23 & 0xff0000 ) >> 8 | ( uVar23 & 0xff00 ) << 8 | uVar23 << 0x18 ) );
               }

               fVar26 = (float)OT::ItemVariationStore::get_delta(pIVar24, ( uint )(uVar19 >> 0x10), (uint)uVar19 & 0xffff, *(int**)( param_1 + 0x80 ), *(uint*)( param_1 + 0x78 ), (float*)0x0);
               uVar23 = *(uint*)paVar11;
               if (param_3 < uVar23) {
                  puVar7 = *(undefined**)( paVar11 + 0x18 );
                  if (puVar7 == (undefined*)0x0) {
                     puVar7 = &_hb_NullPool;
                  }

                  uVar5 = *(ushort*)( *(long*)( puVar7 + 0x10 ) + 2 + uVar21 * 4 );
                  uVar5 = uVar5 << 8 | uVar5 >> 8;
               }
 else {
                  if (*(uint*)( paVar11 + 4 ) <= param_3) goto LAB_00102e3f;
                  puVar7 = *(undefined**)( paVar11 + 0x18 );
                  if (puVar7 == (undefined*)0x0) {
                     puVar7 = &_hb_NullPool;
                  }

                  uVar5 = *(ushort*)( (ulong)uVar23 * 4 + ( ulong )(param_3 - uVar23) * 2 + *(long*)( puVar7 + 0x10 ) );
                  uVar5 = uVar5 << 8 | uVar5 >> 8;
               }

               fVar26 = fVar26 + _LC9;
               if ((float)( (uint)fVar26 & _LC4 ) < _LC1) {
                  fVar26 = (float)( ( uint )((float)(int)fVar26 - (float)( -(uint)(fVar26 < (float)(int)fVar26) & _LC3 )) | ~_LC4 & (uint)fVar26 );
               }

               uVar5 = (ushort)(int)( (float)(int)(short)uVar5 + fVar26 );
            }

         }

         iVar6 = (int)( ( ulong )((long)(short)uVar5 * *(long*)( param_1 + 0x60 ) + 0x8000) >> 0x10 ) + iStack_84;
      }

      LAB_00102f00:*param_5 = iVar6;
      goto LAB_00102fe8;
   }

   plVar15 = puVar2 + 0xc;
   do {
      while (true) {
         paVar11 = (accelerator_t*)*plVar15;
         if (paVar11 != (accelerator_t*)0x0) goto LAB_00102f23;
         phVar3 = (hb_face_t*)*puVar2;
         if (phVar3 == (hb_face_t*)0x0) goto LAB_00103710;
         paVar11 = (accelerator_t*)calloc(1, 0x28);
         if (paVar11 == (accelerator_t*)0x0) break;
         OT::hmtxvmtx<OT::vmtx,OT::vhea,OT::VVAR>::accelerator_t::accelerator_t(paVar11, phVar3);
         LOCK();
         lVar9 = *plVar15;
         if (lVar9 == 0) {
            *plVar15 = (long)paVar11;
         }

         UNLOCK();
         if (lVar9 == 0) goto LAB_00102f23;
         if (paVar11 != (accelerator_t*)&_hb_NullPool) {
            hb_blob_destroy(*(undefined8*)( paVar11 + 0x18 ));
            *(undefined8*)( paVar11 + 0x18 ) = 0;
            hb_blob_destroy(*(undefined8*)( paVar11 + 0x20 ));
            free(paVar11);
         }

      }
;
      LOCK();
      lVar9 = *plVar15;
      if (lVar9 == 0) {
         *plVar15 = (long)&_hb_NullPool;
      }

      UNLOCK();
   }
 while ( lVar9 != 0 );
   LAB_00103710:paVar11 = (accelerator_t*)&_hb_NullPool;
   LAB_00102f23:puVar7 = *(undefined**)( paVar11 + 0x20 );
   fVar26 = 0.0;
   if (puVar7 == (undefined*)0x0) {
      puVar7 = &_hb_NullPool;
   }

   puVar17 = &_hb_NullPool;
   if (0x17 < *(uint*)( puVar7 + 0x18 )) {
      puVar17 = *(undefined**)( puVar7 + 0x10 );
   }

   if (( *(uint*)( param_1 + 0x78 ) != 0 ) && ( uVar23 = uVar23 != 0 )) {
      pcVar18 = puVar17 + ( uVar23 >> 0x18 | ( uVar23 & 0xff0000 ) >> 8 | ( uVar23 & 0xff00 ) << 8 | uVar23 << 0x18 );
      if (*pcVar18 == '\0') {
         uVar5 = *(ushort*)( pcVar18 + 2 ) << 8 | *(ushort*)( pcVar18 + 2 ) >> 8;
         if (uVar5 != 0) {
            bVar22 = pcVar18[1];
            uVar23 = uVar5 - 1;
            if (param_3 < uVar5) {
               uVar23 = param_3;
            }

            uVar14 = ( bVar22 >> 4 & 3 ) + 1;
            pbVar16 = (byte*)( pcVar18 + ( ulong )(uVar23 * uVar14) + 4 );
            uVar23 = 0;
            pbVar20 = pbVar16 + uVar14;
            do {
               bVar1 = *pbVar16;
               pbVar16 = pbVar16 + 1;
               uVar23 = uVar23 * 0x100 + (uint)bVar1;
            }
 while ( pbVar16 != pbVar20 );
            goto LAB_00103420;
         }

      }
 else if (( *pcVar18 == '\x01' ) && ( uVar23 = uVar23 != 0 )) {
         bVar22 = pcVar18[1];
         uVar14 = uVar23 >> 0x18 | ( uVar23 & 0xff0000 ) >> 8 | ( uVar23 & 0xff00 ) << 8 | uVar23 << 0x18;
         uVar23 = uVar14 - 1;
         if (param_3 < uVar14) {
            uVar23 = param_3;
         }

         uVar14 = ( bVar22 >> 4 & 3 ) + 1;
         pbVar16 = (byte*)( pcVar18 + ( ulong )(uVar23 * uVar14) + 6 );
         uVar23 = 0;
         pbVar20 = pbVar16 + uVar14;
         do {
            bVar1 = *pbVar16;
            pbVar16 = pbVar16 + 1;
            uVar23 = uVar23 * 0x100 + (uint)bVar1;
         }
 while ( pbVar16 != pbVar20 );
         LAB_00103420:sVar12 = ( bVar22 & 0xf ) + 1;
         uVar21 = ( ulong )(( 1 << sVar12 ) - 1U & uVar23 | ( uVar23 >> sVar12 ) << 0x10);
      }

      uVar23 = *(uint*)( puVar17 + 4 );
      pIVar24 = (ItemVariationStore*)&_hb_NullPool;
      if (uVar23 != 0) {
         pIVar24 = (ItemVariationStore*)( puVar17 + ( uVar23 >> 0x18 | ( uVar23 & 0xff0000 ) >> 8 | ( uVar23 & 0xff00 ) << 8 | uVar23 << 0x18 ) );
      }

      fVar26 = (float)OT::ItemVariationStore::get_delta(pIVar24, ( uint )(uVar21 >> 0x10), (uint)uVar21 & 0xffff, *(int**)( param_1 + 0x80 ), *(uint*)( param_1 + 0x78 ), (float*)0x0);
   }

   uVar5 = puVar25[3] << 8 | puVar25[3] >> 8;
   iVar6 = uVar5 - 1;
   if (uVar5 != 0) {
      iVar13 = 0;
      do {
         while (true) {
            uVar14 = ( uint )(iVar13 + iVar6) >> 1;
            uVar23 = ( uint )(ushort)(puVar25[(ulong)uVar14 * 2 + 4] << 8 | puVar25[(ulong)uVar14 * 2 + 4] >> 8);
            if (param_3 < uVar23) break;
            if (param_3 == uVar23) {
               puVar8 = (ushort*)&_hb_NullPool;
               if (uVar14 < uVar5) {
                  puVar8 = puVar25 + (ulong)uVar14 * 2 + 4;
               }

               uVar5 = puVar8[1] << 8 | puVar8[1] >> 8;
               goto LAB_00102fad;
            }

            iVar13 = uVar14 + 1;
            if (iVar6 < iVar13) goto LAB_00102fa3;
         }
;
         iVar6 = uVar14 - 1;
      }
 while ( iVar13 <= iVar6 );
   }

   LAB_00102fa3:uVar5 = puVar25[2] << 8 | puVar25[2] >> 8;
   LAB_00102fad:fVar26 = ( (float)(int)(short)uVar5 + fVar26 ) * *(float*)( param_1 + 0x50 ) + _LC9;
   if ((float)( (uint)fVar26 & _LC4 ) < _LC1) {
      fVar26 = (float)( ( uint )((float)(int)fVar26 - (float)( -(uint)(fVar26 < (float)(int)fVar26) & _LC3 )) | ~_LC4 & (uint)fVar26 );
   }

   *param_5 = (int)fVar26;
   LAB_00102fe8:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return 1;
   code_r0x001036ca:if (lVar9 != 0) {
      LAB_0010327b:lVar10 = hb_blob_get_empty();
      if (lVar9 != lVar10) {
         hb_blob_destroy(lVar9);
      }

   }

   goto LAB_00102d6d;
}
/* hb_ot_paint_glyph(hb_font_t*, void*, unsigned int, hb_paint_funcs_t*, void*, unsigned int,
   unsigned int, void*) */void hb_ot_paint_glyph(hb_font_t *param_1, void *param_2, uint param_3, hb_paint_funcs_t *param_4, void *param_5, uint param_6, uint param_7, void *param_8) {
   long *plVar1;
   uint uVar2;
   undefined *puVar3;
   hb_face_t *phVar4;
   char cVar5;
   ushort uVar6;
   undefined *puVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   undefined8 *__ptr;
   accelerator_t *this;
   glyf_accelerator_t *this_00;
   ushort *puVar11;
   uint uVar12;
   uint uVar13;
   int iVar14;
   COLR *this_01;
   int iVar15;
   undefined *puVar16;
   long in_FS_OFFSET;
   accelerator_t *local_80;
   undefined1 local_68[16];
   hb_glyph_extents_t local_58[8];
   undefined4 local_50;
   int local_4c;
   long local_40;
   lVar8 = *(long*)( param_1 + 0x20 );
   plVar1 = (long*)( lVar8 + 0x188 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   LAB_00103784:lVar9 = *plVar1;
   if (lVar9 == 0) {
      phVar4 = *(hb_face_t**)( lVar8 + 0x70 );
      if (phVar4 == (hb_face_t*)0x0) {
         lVar9 = hb_blob_get_empty();
      }
 else {
         lVar9 = hb_table_lazy_loader_t<OT::COLR,35u,true>::create(phVar4);
         if (lVar9 == 0) {
            lVar9 = hb_blob_get_empty();
            LOCK();
            lVar10 = *plVar1;
            if (lVar10 == 0) {
               *plVar1 = lVar9;
            }

            UNLOCK();
            if (lVar10 != 0) goto code_r0x00103d73;
         }
 else {
            LOCK();
            lVar10 = *plVar1;
            if (lVar10 == 0) {
               *plVar1 = lVar9;
            }

            UNLOCK();
            if (lVar10 != 0) goto LAB_00103b2a;
         }

      }

   }

   this_01 = (COLR*)&_hb_NullPool;
   if (0xd < *(uint*)( lVar9 + 0x18 )) {
      this_01 = *(COLR**)( lVar9 + 0x10 );
   }

   cVar5 = OT::COLR::paint_glyph(this_01, param_1, param_3, param_4, param_5, param_6, param_7, true);
   if (cVar5 == '\0') {
      lVar8 = *(long*)( param_1 + 0x20 );
      plVar1 = (long*)( lVar8 + 0x1a8 );
      do {
         while (true) {
            __ptr = (undefined8*)*plVar1;
            if (__ptr != (undefined8*)0x0) goto LAB_0010380a;
            phVar4 = *(hb_face_t**)( lVar8 + 0x70 );
            if (phVar4 == (hb_face_t*)0x0) goto LAB_00103e22;
            __ptr = (undefined8*)hb_lazy_loader_t<OT::SVG_accelerator_t,hb_face_lazy_loader_t<OT::SVG_accelerator_t,39u>,hb_face_t,39u,OT::SVG_accelerator_t>::create(phVar4);
            if (__ptr == (undefined8*)0x0) break;
            LOCK();
            lVar9 = *plVar1;
            if (lVar9 == 0) {
               *plVar1 = (long)__ptr;
            }

            UNLOCK();
            if (lVar9 == 0) goto LAB_0010380a;
            if (__ptr != (undefined8*)&_hb_NullPool) {
               hb_blob_destroy(*__ptr);
               free(__ptr);
            }

         }
;
         LOCK();
         lVar9 = *plVar1;
         if (lVar9 == 0) {
            *plVar1 = (long)&_hb_NullPool;
         }

         UNLOCK();
      }
 while ( lVar9 != 0 );
      LAB_00103e22:__ptr = (undefined8*)&_hb_NullPool;
      LAB_0010380a:puVar3 = (undefined*)*__ptr;
      puVar11 = (ushort*)&_hb_NullPool;
      puVar7 = &_hb_NullPool;
      if (puVar3 != (undefined*)0x0) {
         puVar7 = puVar3;
      }

      puVar16 = &_hb_NullPool;
      if (9 < *(uint*)( puVar7 + 0x18 )) {
         puVar16 = *(undefined**)( puVar7 + 0x10 );
      }

      uVar13 = *(uint*)( puVar16 + 2 );
      if (uVar13 != 0) {
         uVar13 = uVar13 >> 0x18 | ( uVar13 & 0xff0000 ) >> 8 | ( uVar13 & 0xff00 ) << 8 | uVar13 << 0x18;
         uVar6 = *(ushort*)( puVar16 + uVar13 );
         uVar6 = uVar6 << 8 | uVar6 >> 8;
         iVar15 = uVar6 - 1;
         if (uVar6 != 0) {
            iVar14 = 0;
            do {
               while (true) {
                  uVar12 = ( uint )(iVar14 + iVar15) >> 1;
                  puVar11 = (ushort*)( (long)( puVar16 + uVar13 ) + ( (ulong)uVar12 * 6 + 1 ) * 2 );
                  if (param_3 < ( ushort )(*puVar11 << 8 | *puVar11 >> 8)) break;
                  if (param_3 <= ( ushort )(puVar11[1] << 8 | puVar11[1] >> 8)) goto LAB_001038a0;
                  iVar14 = uVar12 + 1;
                  if (iVar15 < iVar14) goto LAB_00103acc;
               }
;
               iVar15 = uVar12 - 1;
            }
 while ( iVar14 <= iVar15 );
            LAB_00103acc:puVar11 = (ushort*)&_hb_NullPool;
         }

         LAB_001038a0:uVar12 = *(uint*)( puVar11 + 2 );
         uVar2 = *(uint*)( puVar11 + 4 );
         lVar8 = hb_blob_create_sub_blob(puVar3, uVar13 + ( uVar12 >> 0x18 | ( uVar12 & 0xff0000 ) >> 8 | ( uVar12 & 0xff00 ) << 8 | uVar12 << 0x18 ), uVar2 >> 0x18 | ( uVar2 & 0xff0000 ) >> 8 | ( uVar2 & 0xff00 ) << 8 | uVar2 << 0x18);
         lVar9 = hb_blob_get_empty();
         if (lVar8 != lVar9) {
            ( **(code**)( param_4 + 0x48 ) )(*(undefined4*)( param_1 + 0x48 ), param_4, param_5, lVar8, 0, 0, 0x73766720, 0);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               hb_blob_destroy(lVar8);
               return;
            }

            goto LAB_00103e86;
         }

      }

      lVar8 = *(long*)( param_1 + 0x20 );
      plVar1 = (long*)( lVar8 + 0x198 );
      do {
         while (true) {
            local_80 = (accelerator_t*)*plVar1;
            if (local_80 != (accelerator_t*)0x0) goto LAB_00103944;
            phVar4 = *(hb_face_t**)( lVar8 + 0x70 );
            if (phVar4 == (hb_face_t*)0x0) goto LAB_00103e40;
            local_80 = (accelerator_t*)calloc(1, 0x18);
            if (local_80 == (accelerator_t*)0x0) break;
            OT::CBDT::accelerator_t::accelerator_t(local_80, phVar4);
            LOCK();
            lVar9 = *plVar1;
            if (lVar9 == 0) {
               *plVar1 = (long)local_80;
            }

            UNLOCK();
            if (lVar9 == 0) goto LAB_00103944;
            if (local_80 != (accelerator_t*)&_hb_NullPool) {
               hb_blob_destroy(*(undefined8*)local_80);
               *(undefined8*)local_80 = 0;
               hb_blob_destroy(*(undefined8*)( local_80 + 8 ));
               free(local_80);
            }

         }
;
         LOCK();
         lVar9 = *plVar1;
         if (lVar9 == 0) {
            *plVar1 = (long)&_hb_NullPool;
         }

         UNLOCK();
      }
 while ( lVar9 != 0 );
      LAB_00103e40:local_80 = (accelerator_t*)&_hb_NullPool;
      LAB_00103944:lVar8 = OT::CBDT::accelerator_t::reference_png(local_80, param_1, param_3);
      lVar9 = hb_blob_get_empty();
      if (lVar8 != lVar9) {
         iVar15 = hb_font_get_glyph_extents(param_1, param_3, local_68);
         if (( iVar15 != 0 ) && ( cVar5 = OT::CBDT::accelerator_t::get_extents(local_80, param_1, param_3, local_58, false) ),cVar5 != '\0') {
            iVar15 = ( **(code**)( param_4 + 0x48 ) )(*(undefined4*)( param_1 + 0x48 ), param_4, param_5, lVar8, local_50, -local_4c, 0x706e6720, local_68);
            hb_blob_destroy(lVar8);
            if (iVar15 != 0) goto LAB_001037c4;
         }

      }

      lVar8 = *(long*)( param_1 + 0x20 );
      plVar1 = (long*)( lVar8 + 0x1a0 );
      do {
         while (true) {
            this(accelerator_t * ) * plVar1;
            if (this != (accelerator_t*)0x0) goto LAB_00103a02;
            phVar4 = *(hb_face_t**)( lVar8 + 0x70 );
            if (phVar4 == (hb_face_t*)0x0) goto LAB_00103e63;
            this(accelerator_t * hb_lazy_loader_t<OT::sbix_accelerator_t,hb_face_lazy_loader_t<OT::sbix_accelerator_t,38u>,hb_face_t,38u,OT::sbix_accelerator_t>::create(phVar4));
            if (this == (accelerator_t*)0x0) break;
            LOCK();
            lVar9 = *plVar1;
            if (lVar9 == 0) {
               *plVar1 = (long)this;
            }

            UNLOCK();
            if (lVar9 == 0) goto LAB_00103a02;
            if (this != (accelerator_t*)&_hb_NullPool) {
               hb_blob_destroy(*(undefined8*)this);
               free(this);
            }

         }
;
         LOCK();
         lVar9 = *plVar1;
         if (lVar9 == 0) {
            *plVar1 = (long)&_hb_NullPool;
         }

         UNLOCK();
      }
 while ( lVar9 != 0 );
      LAB_00103e63 = (accelerator_t*)&_hb_NullPool;
      LAB_00103a02:cVar5 = OT::sbix::accelerator_t::paint_glyph(this, param_1, param_3, param_4, param_5);
      if (cVar5 == '\0') {
         lVar8 = *(long*)( param_1 + 0x20 );
         plVar1 = (long*)( lVar8 + 0xe8 );
         do {
            while (true) {
               if (( *plVar1 != 0 ) || ( phVar4 = *(hb_face_t**)( lVar8 + 0x70 ) ),phVar4 == (hb_face_t*)0x0) goto LAB_00103a35;
               this_00 = (glyf_accelerator_t*)calloc(1, 0x30);
               if (this_00 == (glyf_accelerator_t*)0x0) break;
               OT::glyf_accelerator_t::glyf_accelerator_t(this_00, phVar4);
               LOCK();
               lVar9 = *plVar1;
               if (lVar9 == 0) {
                  *plVar1 = (long)this_00;
               }

               UNLOCK();
               if (lVar9 == 0) goto LAB_00103a35;
               if (this_00 != (glyf_accelerator_t*)&_hb_NullPool) {
                  hb_blob_destroy(*(undefined8*)( this_00 + 0x28 ));
                  free(this_00);
               }

            }
;
            LOCK();
            lVar9 = *plVar1;
            if (lVar9 == 0) {
               *plVar1 = (long)&_hb_NullPool;
            }

            UNLOCK();
         }
 while ( lVar9 != 0 );
         LAB_00103a35:lVar8 = *(long*)( param_4 + 0x80 );
         if (lVar8 != 0) {
            lVar8 = *(long*)( lVar8 + 0x18 );
         }

         ( **(code**)( param_4 + 0x28 ) )(param_4, param_5, param_3, param_1, lVar8);
         lVar8 = *(long*)( param_4 + 0x80 );
         if (lVar8 != 0) {
            lVar8 = *(long*)( lVar8 + 0x30 );
         }

         ( **(code**)( param_4 + 0x40 ) )(param_4, param_5, 1, param_7, lVar8);
         lVar8 = *(long*)( param_4 + 0x80 );
         if (lVar8 != 0) {
            lVar8 = *(long*)( lVar8 + 0x28 );
         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00103ab8. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( param_4 + 0x38 ) )(param_4, param_5, lVar8);
            return;
         }

         goto LAB_00103e86;
      }

   }

   LAB_001037c4:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00103e86:/* WARNING: Subroutine does not return */__stack_chk_fail();
   code_r0x00103d73:if (lVar9 != 0) {
      LAB_00103b2a:lVar10 = hb_blob_get_empty();
      if (lVar9 != lVar10) {
         hb_blob_destroy(lVar9);
      }

   }

   goto LAB_00103784;
}
/* hb_ot_get_glyph_extents(hb_font_t*, void*, unsigned int, hb_glyph_extents_t*, void*) */undefined1 hb_ot_get_glyph_extents(hb_font_t *param_1, void *param_2, uint param_3, hb_glyph_extents_t *param_4, void *param_5) {
   long *plVar1;
   undefined8 *puVar2;
   hb_face_t *phVar3;
   char cVar4;
   undefined1 uVar5;
   accelerator_t *this;
   hb_font_t *phVar6;
   accelerator_t *this_00;
   long lVar7;
   long lVar8;
   glyf_accelerator_t *this_01;
   COLR *this_02;
   /* WARNING: Load size is inaccurate */
   puVar2 = *param_2;
   plVar1 = puVar2 + 0x26;
   do {
      while (true) {
         this_00 = (accelerator_t*)*plVar1;
         if (this_00 != (accelerator_t*)0x0) goto LAB_00103ec3;
         if ((hb_face_t*)*puVar2 == (hb_face_t*)0x0) goto LAB_001041d2;
         this_00 = (accelerator_t*)hb_lazy_loader_t<OT::sbix_accelerator_t,hb_face_lazy_loader_t<OT::sbix_accelerator_t,38u>,hb_face_t,38u,OT::sbix_accelerator_t>::create((hb_face_t*)*puVar2);
         if (this_00 == (accelerator_t*)0x0) break;
         LOCK();
         lVar7 = *plVar1;
         if (lVar7 == 0) {
            *plVar1 = (long)this_00;
         }

         UNLOCK();
         if (lVar7 == 0) goto LAB_00103ec3;
         if (this_00 != (accelerator_t*)&_hb_NullPool) {
            hb_blob_destroy(*(undefined8*)this_00);
            free(this_00);
         }

      }
;
      LOCK();
      lVar7 = *plVar1;
      if (lVar7 == 0) {
         *plVar1 = (long)&_hb_NullPool;
      }

      UNLOCK();
   }
 while ( lVar7 != 0 );
   LAB_001041d2:this_00 = (accelerator_t*)&_hb_NullPool;
   LAB_00103ec3:plVar1 = puVar2 + 0x25;
   cVar4 = OT::sbix::accelerator_t::get_png_extents(this_00, param_1, param_3, param_4, true);
   if (cVar4 == '\0') {
      do {
         while (true) {
            this(accelerator_t * ) * plVar1;
            if (this != (accelerator_t*)0x0) goto LAB_00103f9f;
            phVar3 = (hb_face_t*)*puVar2;
            if (phVar3 == (hb_face_t*)0x0) goto LAB_001041f0;
            this(accelerator_t * calloc(1, 0x18));
            if (this == (accelerator_t*)0x0) break;
            OT::CBDT::accelerator_t::accelerator_t(this, phVar3);
            LOCK();
            lVar7 = *plVar1;
            if (lVar7 == 0) {
               *plVar1 = (long)this;
            }

            UNLOCK();
            if (lVar7 == 0) goto LAB_00103f9f;
            if (this != (accelerator_t*)&_hb_NullPool) {
               hb_blob_destroy(*(undefined8*)this);
               *(undefined8*)this = 0;
               hb_blob_destroy(*(undefined8*)( this + 8 ));
               free(this);
            }

         }
;
         LOCK();
         lVar7 = *plVar1;
         if (lVar7 == 0) {
            *plVar1 = (long)&_hb_NullPool;
         }

         UNLOCK();
      }
 while ( lVar7 != 0 );
      LAB_001041f0 = (accelerator_t*)&_hb_NullPool;
      LAB_00103f9f:cVar4 = OT::CBDT::accelerator_t::get_extents(this, param_1, param_3, param_4, true);
      if (cVar4 == '\0') {
         plVar1 = puVar2 + 0x23;
         LAB_00103fc4:lVar7 = *plVar1;
         if (lVar7 == 0) {
            if ((hb_face_t*)*puVar2 == (hb_face_t*)0x0) {
               lVar7 = hb_blob_get_empty();
            }
 else {
               lVar7 = hb_table_lazy_loader_t<OT::COLR,35u,true>::create((hb_face_t*)*puVar2);
               if (lVar7 == 0) {
                  lVar7 = hb_blob_get_empty();
                  LOCK();
                  lVar8 = *plVar1;
                  if (lVar8 == 0) {
                     *plVar1 = lVar7;
                  }

                  UNLOCK();
                  if (lVar8 != 0) goto code_r0x00104227;
               }
 else {
                  LOCK();
                  lVar8 = *plVar1;
                  if (lVar8 == 0) {
                     *plVar1 = lVar7;
                  }

                  UNLOCK();
                  if (lVar8 != 0) goto LAB_0010410c;
               }

            }

         }

         this_02 = (COLR*)&_hb_NullPool;
         if (0xd < *(uint*)( lVar7 + 0x18 )) {
            this_02 = *(COLR**)( lVar7 + 0x10 );
         }

         cVar4 = OT::COLR::get_extents(this_02, param_1, param_3, param_4);
         if (cVar4 == '\0') {
            plVar1 = puVar2 + 0xf;
            do {
               while (true) {
                  this_01 = (glyf_accelerator_t*)*plVar1;
                  if (this_01 != (glyf_accelerator_t*)0x0) goto LAB_0010400c;
                  phVar3 = (hb_face_t*)*puVar2;
                  if (phVar3 == (hb_face_t*)0x0) goto LAB_0010424a;
                  this_01 = (glyf_accelerator_t*)calloc(1, 0x30);
                  if (this_01 == (glyf_accelerator_t*)0x0) break;
                  OT::glyf_accelerator_t::glyf_accelerator_t(this_01, phVar3);
                  LOCK();
                  lVar7 = *plVar1;
                  if (lVar7 == 0) {
                     *plVar1 = (long)this_01;
                  }

                  UNLOCK();
                  if (lVar7 == 0) goto LAB_0010400c;
                  if (this_01 != (glyf_accelerator_t*)&_hb_NullPool) {
                     hb_blob_destroy(*(undefined8*)( this_01 + 0x28 ));
                     free(this_01);
                  }

               }
;
               LOCK();
               lVar7 = *plVar1;
               if (lVar7 == 0) {
                  *plVar1 = (long)&_hb_NullPool;
               }

               UNLOCK();
            }
 while ( lVar7 != 0 );
            LAB_0010424a:this_01 = (glyf_accelerator_t*)&_hb_NullPool;
            LAB_0010400c:cVar4 = OT::glyf_accelerator_t::get_extents(this_01, param_1, param_3, param_4);
            if (cVar4 == '\0') {
               phVar6 = (hb_font_t*)hb_lazy_loader_t<OT::cff2_accelerator_t,hb_face_lazy_loader_t<OT::cff2_accelerator_t,17u>,hb_face_t,17u,OT::cff2_accelerator_t>::get_stored((hb_lazy_loader_t<OT::cff2_accelerator_t,hb_face_lazy_loader_t<OT::cff2_accelerator_t,17u>,hb_face_t,17u,OT::cff2_accelerator_t>*)( puVar2 + 0x11 ));
               cVar4 = OT::cff2::accelerator_t::get_extents(phVar6, (uint)param_1, (hb_glyph_extents_t*)(ulong)param_3);
               if (cVar4 == '\0') {
                  phVar6 = (hb_font_t*)hb_lazy_loader_t<OT::cff1_accelerator_t,hb_face_lazy_loader_t<OT::cff1_accelerator_t,16u>,hb_face_t,16u,OT::cff1_accelerator_t>::get_stored((hb_lazy_loader_t<OT::cff1_accelerator_t,hb_face_lazy_loader_t<OT::cff1_accelerator_t,16u>,hb_face_t,16u,OT::cff1_accelerator_t>*)( puVar2 + 0x10 ));
                  uVar5 = OT::cff1::accelerator_t::get_extents(phVar6, (uint)param_1, (hb_glyph_extents_t*)(ulong)param_3);
                  return uVar5;
               }

            }

         }

      }

   }

   return 1;
   code_r0x00104227:if (lVar7 != 0) {
      LAB_0010410c:lVar8 = hb_blob_get_empty();
      if (lVar7 != lVar8) {
         hb_blob_destroy(lVar7);
      }

   }

   goto LAB_00103fc4;
}
/* OT::ColorLine<OT::NoVariable>::static_get_extend(hb_color_line_t*, void*, void*) */undefined1 OT::ColorLine<OT::NoVariable>::static_get_extend(hb_color_line_t *param_1, void *param_2, void *param_3) {
   /* WARNING: Load size is inaccurate */
   return *param_2;
}
/* OT::ColorLine<OT::Variable>::static_get_extend(hb_color_line_t*, void*, void*) */undefined1 OT::ColorLine<OT::Variable>::static_get_extend(hb_color_line_t *param_1, void *param_2, void *param_3) {
   /* WARNING: Load size is inaccurate */
   return *param_2;
}
/* OT::cff1::accelerator_t::gname_t::cmp(void const*, void const*) */int OT::cff1::accelerator_t::gname_t::cmp(void *param_1, void *param_2) {
   uint uVar1;
   uint uVar2;
   uint uVar3;
   int iVar4;
   uVar1 = *(uint*)( (long)param_2 + 8 );
   uVar2 = *(uint*)( (long)param_1 + 8 );
   /* WARNING: Load size is inaccurate */
   /* WARNING: Load size is inaccurate */
   uVar3 = uVar1;
   if (uVar2 <= uVar1) {
      uVar3 = uVar2;
   }

   iVar4 = strncmp(*param_1, *param_2, (ulong)uVar3);
   if (iVar4 == 0) {
      iVar4 = uVar2 - uVar1;
   }

   return iVar4;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* bool OT::cmap::accelerator_t::get_glyph_from<OT::CmapSubtableFormat12>(void const*, unsigned int,
   unsigned int*) */bool OT::cmap::accelerator_t::get_glyph_from<OT::CmapSubtableFormat12>(void *param_1, uint param_2, uint *param_3) {
   uint uVar1;
   uint uVar2;
   int iVar3;
   uint uVar4;
   uint *puVar5;
   int iVar6;
   uVar4 = *(uint*)( (long)param_1 + 0xc );
   iVar3 = ( uVar4 >> 0x18 | ( uVar4 & 0xff0000 ) >> 8 | ( uVar4 & 0xff00 ) << 8 | uVar4 << 0x18 ) - 1;
   if (-1 < iVar3) {
      iVar6 = 0;
      do {
         uVar2 = ( uint )(iVar6 + iVar3) >> 1;
         puVar5 = (uint*)( (long)param_1 + (ulong)uVar2 * 0xc + 0x10 );
         uVar4 = *puVar5;
         uVar4 = uVar4 >> 0x18 | ( uVar4 & 0xff0000 ) >> 8 | ( uVar4 & 0xff00 ) << 8 | uVar4 << 0x18;
         if (param_2 < uVar4) {
            iVar3 = uVar2 - 1;
         }
 else {
            uVar1 = puVar5[1];
            if (param_2 <= ( uVar1 >> 0x18 | ( uVar1 & 0xff0000 ) >> 8 | ( uVar1 & 0xff00 ) << 8 | uVar1 << 0x18 )) goto LAB_00104335;
            iVar6 = uVar2 + 1;
         }

      }
 while ( iVar6 <= iVar3 );
   }

   uVar4 = __hb_Null_OT_CmapSubtableLongGroup >> 0x18 | ( __hb_Null_OT_CmapSubtableLongGroup & 0xff0000 ) >> 8 | ( __hb_Null_OT_CmapSubtableLongGroup & 0xff00 ) << 8 | __hb_Null_OT_CmapSubtableLongGroup << 0x18;
   if (uVar4 <= ( _DAT_0012401c >> 0x18 | ( _DAT_0012401c & 0xff0000 ) >> 8 | ( _DAT_0012401c & 0xff00 ) << 8 | _DAT_0012401c << 0x18 )) {
      puVar5 = (uint*)&_hb_Null_OT_CmapSubtableLongGroup;
      LAB_00104335:uVar2 = puVar5[2];
      uVar4 = ( ( uVar2 >> 0x18 | ( uVar2 & 0xff0000 ) >> 8 | ( uVar2 & 0xff00 ) << 8 | uVar2 << 0x18 ) + param_2 ) - uVar4;
      if (uVar4 != 0) {
         *param_3 = uVar4;
         return true;
      }

   }

   return false;
}
/* WARNING: Type propagation algorithm not settling *//* void sort_r_simple<>(void*, unsigned long, unsigned long, int (*)(void const*, void const*))
   [clone .constprop.0] */void sort_r_simple<>(void *param_1, ulong param_2, ulong param_3, _func_int_void_ptr_void_ptr *param_4) {
   code cVar1;
   undefined1 uVar2;
   undefined8 uVar3;
   int iVar4;
   long lVar5;
   long lVar6;
   _func_int_void_ptr_void_ptr *p_Var7;
   _func_int_void_ptr_void_ptr *p_Var8;
   _func_int_void_ptr_void_ptr *p_Var9;
   _func_int_void_ptr_void_ptr *p_Var10;
   _func_int_void_ptr_void_ptr *p_Var11;
   _func_int_void_ptr_void_ptr *p_Var12;
   _func_int_void_ptr_void_ptr *p_Var13;
   ulong uVar14;
   _func_int_void_ptr_void_ptr *p_Var15;
   _func_int_void_ptr_void_ptr *local_48;
   _func_int_void_ptr_void_ptr *local_40;
   local_40 = (_func_int_void_ptr_void_ptr*)( (long)param_1 + param_2 * 0x18 );
   local_48 = (_func_int_void_ptr_void_ptr*)param_1;
   p_Var13 = (_func_int_void_ptr_void_ptr*)param_1;
   if (9 < param_2) {
      do {
         lVar5 = param_2 * 3 + -3;
         uVar14 = lVar5 * 8;
         p_Var13 = local_48 + 0x18;
         p_Var10 = local_48 + lVar5 * 8;
         p_Var7 = local_48 + ( ( param_2 & 0xfffffffffffffffe ) + ( param_2 >> 1 ) ) * 8;
         p_Var9 = p_Var10 + 0xffffffffffffffe8;
         iVar4 = ( *(code*)param_3 )(p_Var13, p_Var7);
         p_Var8 = p_Var7;
         if (iVar4 < 1) {
            p_Var8 = p_Var13;
            p_Var13 = p_Var7;
         }

         iVar4 = ( *(code*)param_3 )(p_Var13, p_Var9);
         if (( 0 < iVar4 ) && ( iVar4 = ( *(code*)param_3 )(p_Var8, p_Var9) ),p_Var13 = p_Var9,0 < iVar4) {
            p_Var13 = p_Var8;
         }

         p_Var9 = local_48;
         p_Var8 = local_48;
         p_Var7 = p_Var10;
         p_Var15 = p_Var10;
         if (p_Var10 == p_Var13) {
            if (p_Var10 <= local_48) goto LAB_0010469b;
            LAB_00104474:do {
               while (true) {
                  iVar4 = ( *(code*)param_3 )(p_Var8, p_Var10);
                  p_Var13 = p_Var7;
                  if (iVar4 < 1) break;
                  do {
                     while (true) {
                        p_Var12 = p_Var15;
                        p_Var7 = p_Var13;
                        p_Var15 = p_Var12;
                        if (p_Var12 <= p_Var8) goto LAB_001044e8;
                        p_Var15 = p_Var12 + 0xffffffffffffffe8;
                        iVar4 = ( *(code*)param_3 )(p_Var15, p_Var10);
                        if (iVar4 != 0) break;
                        p_Var13 = p_Var7 + 0xffffffffffffffe8;
                        if (p_Var15 < p_Var13) {
                           lVar5 = -0x18;
                           do {
                              uVar3 = *(undefined8*)( p_Var12 + lVar5 );
                              *(undefined8*)( p_Var12 + lVar5 ) = *(undefined8*)( p_Var7 + lVar5 );
                              *(undefined8*)( p_Var7 + lVar5 ) = uVar3;
                              lVar5 = lVar5 + 8;
                           }
 while ( lVar5 != 0 );
                        }

                     }
;
                     p_Var13 = p_Var7;
                  }
 while ( -1 < iVar4 );
                  p_Var13 = p_Var8 + 0x18;
                  if (p_Var8 < p_Var15) {
                     lVar5 = 0;
                     do {
                        uVar3 = *(undefined8*)( p_Var15 + lVar5 );
                        *(undefined8*)( p_Var15 + lVar5 ) = *(undefined8*)( p_Var8 + lVar5 );
                        *(undefined8*)( p_Var8 + lVar5 ) = uVar3;
                        lVar5 = lVar5 + 8;
                     }
 while ( lVar5 != 0x18 );
                  }

                  p_Var8 = p_Var13;
                  if (p_Var15 <= p_Var13) goto LAB_001044e8;
               }
;
               p_Var13 = p_Var9;
               if (( iVar4 == 0 ) && ( p_Var13 = p_Var9 < p_Var8 )) {
                  lVar5 = 0;
                  do {
                     uVar3 = *(undefined8*)( p_Var8 + lVar5 );
                     *(undefined8*)( p_Var8 + lVar5 ) = *(undefined8*)( p_Var9 + lVar5 );
                     *(undefined8*)( p_Var9 + lVar5 ) = uVar3;
                     lVar5 = lVar5 + 8;
                  }
 while ( lVar5 != 0x18 );
               }

               p_Var8 = p_Var8 + 0x18;
               p_Var9 = p_Var13;
            }
 while ( p_Var8 < p_Var15 );
            LAB_001044e8:uVar14 = (long)p_Var15 - (long)p_Var9;
            p_Var10 = p_Var7 + -(long)p_Var15;
            p_Var13 = local_40 + -(long)p_Var7;
            param_1 = local_40 + -(long)p_Var10;
            param_2 = (ulong)p_Var10 / 0x18;
            local_40 = (_func_int_void_ptr_void_ptr*)( (long)param_1 + param_2 * 0x18 );
            if (( p_Var9 != local_48 ) && ( uVar14 != 0 )) {
               p_Var8 = local_48 + uVar14;
               if (uVar14 < ( ulong )((long)p_Var9 - (long)local_48)) {
                  p_Var12 = local_48;
                  if (local_48 < p_Var8) {
                     do {
                        cVar1 = *p_Var12;
                        p_Var11 = p_Var12 + 1;
                        *p_Var12 = *p_Var9;
                        *p_Var9 = cVar1;
                        p_Var12 = p_Var11;
                        p_Var9 = p_Var9 + 1;
                     }
 while ( p_Var11 != p_Var8 );
                  }

               }
 else {
                  p_Var12 = local_48;
                  if (local_48 < p_Var9) {
                     do {
                        cVar1 = *p_Var12;
                        p_Var11 = p_Var12 + 1;
                        *p_Var12 = *p_Var8;
                        *p_Var8 = cVar1;
                        p_Var8 = p_Var8 + 1;
                        p_Var12 = p_Var11;
                     }
 while ( p_Var9 != p_Var11 );
                  }

               }

            }

            if (p_Var10 != (_func_int_void_ptr_void_ptr*)0x0 && p_Var13 != (_func_int_void_ptr_void_ptr*)0x0) {
               p_Var9 = p_Var15 + (long)p_Var13;
               if (p_Var13 < p_Var10) {
                  if (p_Var15 < p_Var9) {
                     do {
                        uVar2 = *p_Var15;
                        p_Var13 = p_Var15 + 1;
                        *p_Var15 = *p_Var7;
                        *p_Var7 = (_func_int_void_ptr_void_ptr)uVar2;
                        p_Var7 = p_Var7 + 1;
                        p_Var15 = p_Var13;
                     }
 while ( p_Var13 != p_Var9 );
                  }

               }
 else if (p_Var15 < p_Var7) {
                  do {
                     uVar2 = *p_Var15;
                     p_Var13 = p_Var15 + 1;
                     *p_Var15 = *p_Var9;
                     *p_Var9 = (_func_int_void_ptr_void_ptr)uVar2;
                     p_Var9 = p_Var9 + 1;
                     p_Var15 = p_Var13;
                  }
 while ( p_Var13 != p_Var7 );
               }

            }

         }
 else {
            lVar5 = param_2 * 0x18 + -0x18;
            lVar6 = 0;
            do {
               uVar3 = *(undefined8*)( local_48 + lVar6 + lVar5 );
               *(undefined8*)( local_48 + lVar6 + lVar5 ) = *(undefined8*)( p_Var13 + lVar6 );
               *(undefined8*)( p_Var13 + lVar6 ) = uVar3;
               lVar6 = lVar6 + 8;
            }
 while ( lVar6 != 0x18 );
            if (local_48 < p_Var10) goto LAB_00104474;
            LAB_0010469b:param_2 = 0;
            p_Var10 = (_func_int_void_ptr_void_ptr*)0x0;
            param_1 = local_40;
         }

         sort_r_simple<>(local_48, uVar14 / 0x18, param_3, p_Var10);
         local_48 = (_func_int_void_ptr_void_ptr*)param_1;
         p_Var13 = (_func_int_void_ptr_void_ptr*)param_1;
      }
 while ( (_func_int_void_ptr_void_ptr*)0xef < p_Var10 );
   }

   joined_r0x001046ba:do {
      param_1 = (void*)( (long)param_1 + 0x18 );
      while (true) {
         if (local_40 <= param_1) {
            return;
         }

         p_Var10 = (_func_int_void_ptr_void_ptr*)param_1;
         if (param_1 <= p_Var13) break;
         do {
            p_Var9 = p_Var10 + 0xffffffffffffffe8;
            iVar4 = ( *(code*)param_3 )(p_Var9, p_Var10);
            p_Var7 = p_Var9;
            if (iVar4 < 1) goto joined_r0x001046ba;
            do {
               uVar3 = *(undefined8*)p_Var7;
               p_Var8 = p_Var7 + 8;
               *(undefined8*)p_Var7 = *(undefined8*)( p_Var7 + 0x18 );
               *(undefined8*)( p_Var7 + 0x18 ) = uVar3;
               p_Var7 = p_Var8;
            }
 while ( p_Var8 != p_Var10 );
            p_Var10 = p_Var9;
         }
 while ( p_Var13 < p_Var9 );
         param_1 = (void*)( (long)param_1 + 0x18 );
      }
;
   }
 while ( true );
}
/* OT::post::accelerator_t::cmp_gids(void const*, void const*, void*) */int OT::post::accelerator_t::cmp_gids(void *param_1, void *param_2, void *param_3) {
   ushort uVar1;
   int iVar2;
   uint uVar3;
   uint uVar4;
   ushort uVar5;
   byte *pbVar6;
   ushort uVar7;
   byte *pbVar8;
   /* WARNING: Load size is inaccurate */
   uVar5 = *param_2;
   /* WARNING: Load size is inaccurate */
   uVar7 = *param_1;
   uVar4 = (uint)uVar5;
   uVar3 = (uint)uVar7;
   if (*(int*)( (long)param_3 + 8 ) == 0x10000) {
      if (uVar4 < 0x102) {
         uVar4 = ~*(uint *)(format1_names_msgidx + (ulong)uVar5 * 4) + *(int*)( format1_names_msgidx + ( ulong )(uVar4 + 1) * 4 );
         iVar2 = *(int*)( (long)param_3 + 8 );
         pbVar6 = (byte*)( ".notdef" + *(uint*)( format1_names_msgidx + (ulong)uVar5 * 4 ) );
         goto LAB_00104898;
      }

      LAB_00104818:iVar2 = *(int*)( (long)param_3 + 8 );
      joined_r0x00104825:uVar4 = 0;
      pbVar6 = (byte*)0x0;
      if (iVar2 == 0x10000) goto LAB_0010482b;
      uVar4 = 0;
      pbVar6 = (byte*)0x0;
      if (iVar2 != 0x20000) {
         return 0;
      }

      LAB_001048aa:uVar5 = **(ushort**)( (long)param_3 + 0x10 );
      if (( ushort )(uVar5 << 8 | uVar5 >> 8) <= uVar3) {
         LAB_001048e2:uVar3 = 0;
         if (uVar4 == 0) {
            return 0;
         }

         goto LAB_001048ec;
      }

      uVar5 = ( *(ushort**)( (long)param_3 + 0x10 ) )[uVar3 + 1];
      uVar7 = uVar5 << 8 | uVar5 >> 8;
      if (uVar7 < 0x102) goto LAB_00104837;
      if (*(uint*)( (long)param_3 + 0x1c ) <= uVar7 - 0x102) goto LAB_001048e2;
      pbVar8 = (byte*)( ( ulong ) * (uint*)( *(long*)( (long)param_3 + 0x20 ) + ( ulong )(uVar7 - 0x102) * 4 ) + *(long*)( (long)param_3 + 0x28 ) );
      uVar3 = ( uint ) * pbVar8;
      pbVar8 = pbVar8 + 1;
   }
 else {
      if (*(int*)( (long)param_3 + 8 ) != 0x20000) {
         return 0;
      }

      uVar1 = **(ushort**)( (long)param_3 + 0x10 );
      if (( ushort )(uVar1 << 8 | uVar1 >> 8) <= uVar4) goto LAB_00104818;
      uVar5 = ( *(ushort**)( (long)param_3 + 0x10 ) )[(ulong)uVar5 + 1];
      iVar2 = *(int*)( (long)param_3 + 8 );
      uVar5 = uVar5 << 8 | uVar5 >> 8;
      if (0x101 < uVar5) {
         if (uVar5 - 0x102 < *(uint*)( (long)param_3 + 0x1c )) {
            pbVar6 = (byte*)( ( ulong ) * (uint*)( *(long*)( (long)param_3 + 0x20 ) + ( ulong )(uVar5 - 0x102) * 4 ) + *(long*)( (long)param_3 + 0x28 ) );
            uVar4 = ( uint ) * pbVar6;
            pbVar6 = pbVar6 + 1;
            goto LAB_00104898;
         }

         goto joined_r0x00104825;
      }

      uVar4 = ~*(uint *)(format1_names_msgidx + (ulong)uVar5 * 4) + *(int*)( format1_names_msgidx + ( ulong )(uVar5 + 1) * 4 );
      pbVar6 = (byte*)( ".notdef" + *(uint*)( format1_names_msgidx + (ulong)uVar5 * 4 ) );
      LAB_00104898:if (iVar2 != 0x10000) {
         if (iVar2 == 0x20000) goto LAB_001048aa;
         goto LAB_001048e2;
      }

      LAB_0010482b:if (uVar3 < 0x102) {
         LAB_00104837:uVar3 = ~*(uint *)(format1_names_msgidx + (ulong)uVar7 * 4) + *(int*)( format1_names_msgidx + ( ulong )(uVar7 + 1) * 4 );
         pbVar8 = (byte*)( ".notdef" + *(uint*)( format1_names_msgidx + (ulong)uVar7 * 4 ) );
      }
 else {
         uVar3 = 0;
         pbVar8 = (byte*)0x0;
      }

   }

   if (uVar3 == uVar4) {
      if (uVar3 == 0) {
         return 0;
      }

      iVar2 = memcmp(pbVar8, pbVar6, (ulong)uVar3);
      return iVar2;
   }

   LAB_001048ec:return uVar3 - uVar4;
}
/* void sort_r_simple<void*>(void*, unsigned long, unsigned long, int (*)(void const*, void const*,
   void*), void*) [clone .constprop.0] */void sort_r_simple<void*>(void *param_1, ulong param_2, ulong param_3, _func_int_void_ptr_void_ptr_void_ptr *param_4, void *param_5) {
   byte bVar1;
   byte bVar2;
   int iVar3;
   int iVar4;
   uint uVar5;
   ulong uVar6;
   ushort *puVar7;
   ushort uVar8;
   uint uVar9;
   ushort uVar10;
   ushort uVar11;
   char *pcVar12;
   char *extraout_RDX;
   char *extraout_RDX_00;
   ushort *puVar13;
   size_t __n;
   ushort *puVar14;
   ushort *puVar15;
   ushort *puVar16;
   uint uVar17;
   byte *pbVar18;
   byte *pbVar19;
   ulong uVar20;
   undefined1 *puVar21;
   char *pcVar22;
   ulong uVar23;
   ulong uVar24;
   ushort *puVar25;
   ushort *local_58;
   ushort *local_48;
   ushort *local_40;
   local_40 = (ushort*)( (long)param_1 + param_2 * 2 );
   puVar21 = (undefined1*)param_5;
   local_48 = (ushort*)param_1;
   puVar16 = (ushort*)param_1;
   if (param_2 < 10) {
      joined_r0x00105227:do {
         param_1 = (void*)( (long)param_1 + 2 );
         puVar7 = (ushort*)param_1;
         if (local_40 <= param_1) {
            return;
         }

         while (puVar16 < puVar7) {
            puVar15 = puVar7 + -1;
            uVar11 = *puVar15;
            uVar10 = *puVar7;
            uVar9 = (uint)uVar10;
            if (*(int*)( param_3 + 8 ) == 0x10000) {
               if (uVar9 < 0x102) {
                  iVar3 = *(int*)( param_3 + 8 );
                  uVar9 = ~*(uint *)(format1_names_msgidx + (ulong)uVar10 * 4) + *(int*)( format1_names_msgidx + ( ulong )(uVar9 + 1) * 4 );
                  pbVar18 = (byte*)( ".notdef" + *(uint*)( format1_names_msgidx + (ulong)uVar10 * 4 ) );
                  goto LAB_001052a3;
               }

               LAB_00105320:iVar3 = *(int*)( param_3 + 8 );
               LAB_00105323:pbVar18 = (byte*)0x0;
               uVar9 = 0;
               if (iVar3 == 0x10000) goto LAB_001052ae;
               if (iVar3 != 0x20000) break;
               LAB_00105343:uVar10 = **(ushort**)( param_3 + 0x10 );
               if ((uint)uVar11 < ( uint )(ushort)(uVar10 << 8 | uVar10 >> 8)) {
                  uVar11 = ( *(ushort**)( param_3 + 0x10 ) )[uVar11 + 1];
                  uVar11 = uVar11 << 8 | uVar11 >> 8;
                  if (uVar11 < 0x102) goto LAB_00105390;
                  if (*(uint*)( param_3 + 0x1c ) <= uVar11 - 0x102) goto LAB_00105310;
                  pbVar19 = (byte*)( ( ulong ) * (uint*)( *(long*)( param_3 + 0x20 ) + ( ulong )(uVar11 - 0x102) * 4 ) + *(long*)( param_3 + 0x28 ) );
                  uVar5 = ( uint ) * pbVar19;
                  pbVar19 = pbVar19 + 1;
                  goto LAB_001052bd;
               }

               LAB_00105310:if (uVar9 == 0) break;
               uVar5 = 0;
               LAB_0010531b:iVar3 = uVar5 - uVar9;
            }
 else {
               if (*(int*)( param_3 + 8 ) != 0x20000) break;
               uVar8 = **(ushort**)( param_3 + 0x10 );
               if (( ushort )(uVar8 << 8 | uVar8 >> 8) <= uVar9) goto LAB_00105320;
               uVar10 = ( *(ushort**)( param_3 + 0x10 ) )[(ulong)uVar10 + 1];
               iVar3 = *(int*)( param_3 + 8 );
               uVar10 = uVar10 << 8 | uVar10 >> 8;
               if (0x101 < uVar10) {
                  uVar9 = uVar10 - 0x102;
                  if (uVar9 < *(uint*)( param_3 + 0x1c )) {
                     pbVar18 = (byte*)( ( ulong ) * (uint*)( *(long*)( param_3 + 0x20 ) + (ulong)uVar9 * 4 ) + *(long*)( param_3 + 0x28 ) );
                     uVar9 = ( uint ) * pbVar18;
                     pbVar18 = pbVar18 + 1;
                     goto LAB_001052a3;
                  }

                  goto LAB_00105323;
               }

               pbVar18 = (byte*)( ".notdef" + *(uint*)( format1_names_msgidx + (ulong)uVar10 * 4 ) );
               uVar9 = ~*(uint *)(format1_names_msgidx + (ulong)uVar10 * 4) + *(int*)( format1_names_msgidx + ( ulong )(uVar10 + 1) * 4 );
               LAB_001052a3:if (iVar3 != 0x10000) {
                  if (iVar3 == 0x20000) goto LAB_00105343;
                  goto LAB_00105310;
               }

               LAB_001052ae:if (uVar11 < 0x102) {
                  LAB_00105390:pbVar19 = (byte*)( ".notdef" + *(uint*)( format1_names_msgidx + (ulong)uVar11 * 4 ) );
                  uVar5 = ~*(uint *)(format1_names_msgidx + (ulong)uVar11 * 4) + *(int*)( format1_names_msgidx + ( ulong )(uVar11 + 1) * 4 );
               }
 else {
                  uVar5 = 0;
                  pbVar19 = (byte*)0x0;
               }

               LAB_001052bd:if (uVar5 != uVar9) goto LAB_0010531b;
               if (uVar5 == 0) break;
               iVar3 = memcmp(pbVar19, pbVar18, (ulong)uVar5);
            }

            if (iVar3 < 1) break;
            *(uint*)puVar15 = CONCAT31(CONCAT21(*puVar15, *(byte*)( (long)puVar7 + 1 )), ( byte ) * puVar7);
            puVar7 = puVar15;
         }
;
      }
 while ( true );
   }

   LAB_001049b6:uVar23 = param_2 * 2 - 2;
   puVar16 = (ushort*)( (long)local_48 + ( param_2 & 0xfffffffffffffffe ) );
   uVar11 = local_48[1];
   puVar7 = local_48 + ( param_2 - 1 );
   uVar10 = *puVar16;
   pcVar12 = (char*)(ulong)uVar10;
   if (*(int*)( param_3 + 8 ) == 0x10000) {
      if (uVar10 < 0x102) {
         __n = (size_t)( ~*(uint *)(format1_names_msgidx + (ulong)(uint)uVar10 * 4) + *(int*)( format1_names_msgidx + ( ulong )(uVar10 + 1) * 4 ) );
         pcVar12 = ".notdef";
         pbVar18 = (byte*)( ".notdef" + *(uint*)( format1_names_msgidx + (ulong)(uint)uVar10 * 4 ) );
      }
 else {
         __n = 0;
         pbVar18 = (byte*)0x0;
      }

      iVar3 = *(int*)( param_3 + 8 );
      LAB_00105058:uVar9 = (uint)__n;
      pcVar22 = puVar21;
      if (iVar3 == 0x10000) {
         if (uVar11 < 0x102) {
            uVar5 = ~*(uint *)(format1_names_msgidx + (ulong)uVar11 * 4) + *(int*)( format1_names_msgidx + ( ulong )(uVar11 + 1) * 4 );
            pcVar12 = ".notdef";
            pbVar19 = (byte*)( ".notdef" + *(uint*)( format1_names_msgidx + (ulong)uVar11 * 4 ) );
            pcVar22 = format1_names_msgidx;
         }
 else {
            uVar5 = 0;
            pbVar19 = (byte*)0x0;
         }

         iVar3 = *(int*)( param_3 + 8 );
         LAB_001050dd:if (uVar9 == uVar5) {
            if (uVar9 == 0) goto LAB_001050a1;
            iVar4 = memcmp(pbVar19, pbVar18, __n);
         }
 else {
            LAB_0010509b:iVar4 = uVar5 - uVar9;
         }

         puVar15 = puVar16;
         puVar21 = pcVar22;
         puVar14 = local_48 + 1;
         if (iVar4 < 1) goto LAB_001050a1;
      }
 else {
         if (iVar3 != 0x20000) {
            if (uVar9 == 0) goto LAB_001049f2;
            uVar5 = 0;
            goto LAB_0010509b;
         }

         pcVar22 = *(char**)( param_3 + 0x10 );
         uVar10 = *(ushort*)pcVar22 << 8 | *(ushort*)pcVar22 >> 8;
         pcVar12 = (char*)(ulong)uVar10;
         if (uVar11 < uVar10) {
            iVar3 = *(int*)( param_3 + 8 );
            uVar11 = *(ushort*)( (long)pcVar22 + ( (ulong)uVar11 + 1 ) * 2 ) << 8 | *(ushort*)( (long)pcVar22 + ( (ulong)uVar11 + 1 ) * 2 ) >> 8;
            if (uVar11 < 0x102) {
               uVar5 = ~*(uint *)(format1_names_msgidx + (ulong)uVar11 * 4) + *(int*)( format1_names_msgidx + ( ulong )(uVar11 + 1) * 4 );
               pcVar22 = ".notdef";
               pbVar19 = (byte*)( ".notdef" + *(uint*)( format1_names_msgidx + (ulong)uVar11 * 4 ) );
            }
 else {
               if (*(uint*)( param_3 + 0x1c ) <= uVar11 - 0x102) {
                  if (uVar9 != 0) {
                     uVar5 = 0;
                     goto LAB_0010509b;
                  }

                  goto LAB_001050a1;
               }

               pbVar19 = (byte*)( ( ulong ) * (uint*)( *(long*)( param_3 + 0x20 ) + ( ulong )(uVar11 - 0x102) * 4 ) + *(long*)( param_3 + 0x28 ) );
               uVar5 = ( uint ) * pbVar19;
               pbVar19 = pbVar19 + 1;
            }

            goto LAB_001050dd;
         }

         iVar3 = *(int*)( param_3 + 8 );
         if (uVar9 != 0) {
            uVar5 = 0;
            goto LAB_0010509b;
         }

         LAB_001050a1:puVar15 = local_48 + 1;
         puVar21 = pcVar22;
         puVar14 = puVar16;
      }

      puVar16 = puVar14;
      uVar11 = *puVar16;
      uVar6 = (ulong)uVar11;
      uVar10 = puVar7[-1];
      if (iVar3 == 0x10000) {
         if (uVar10 < 0x102) {
            puVar21 = format1_names_msgidx;
            pcVar12 = (char*)( ulong )(~*(uint *)(format1_names_msgidx + (ulong)(uint)uVar10 * 4) + *(int*)( format1_names_msgidx + ( ulong )(uVar10 + 1) * 4 ));
            pbVar18 = (byte*)( ".notdef" + *(uint*)( format1_names_msgidx + (ulong)(uint)uVar10 * 4 ) );
         }
 else {
            pcVar12 = (char*)0x0;
            pbVar18 = (byte*)0x0;
         }

         iVar3 = *(int*)( param_3 + 8 );
      }
 else {
         if (iVar3 != 0x20000) goto LAB_001049f2;
         uVar8 = **(ushort**)( param_3 + 0x10 );
         if (uVar10 < ( ushort )(uVar8 << 8 | uVar8 >> 8)) {
            uVar10 = ( *(ushort**)( param_3 + 0x10 ) )[(ulong)uVar10 + 1];
            iVar3 = *(int*)( param_3 + 8 );
            uVar10 = uVar10 << 8 | uVar10 >> 8;
            uVar9 = (uint)uVar10;
            if (uVar10 < 0x102) {
               puVar21 = format1_names_msgidx;
               pcVar12 = (char*)( ulong )(~*(uint *)(format1_names_msgidx + (ulong)uVar9 * 4) + *(int*)( format1_names_msgidx + ( ulong )(uVar9 + 1) * 4 ));
               pbVar18 = (byte*)( ".notdef" + *(uint*)( format1_names_msgidx + (ulong)uVar9 * 4 ) );
            }
 else if (uVar9 - 0x102 < *(uint*)( param_3 + 0x1c )) {
               pbVar18 = (byte*)( ( ulong ) * (uint*)( *(long*)( param_3 + 0x20 ) + ( ulong )(uVar9 - 0x102) * 4 ) + *(long*)( param_3 + 0x28 ) );
               pcVar12 = (char*)( ulong ) * pbVar18;
               pbVar18 = pbVar18 + 1;
            }
 else {
               pcVar12 = (char*)0x0;
               pbVar18 = (byte*)0x0;
            }

         }
 else {
            iVar3 = *(int*)( param_3 + 8 );
            pcVar12 = (char*)0x0;
            pbVar18 = (byte*)0x0;
         }

      }

      uVar9 = (uint)pcVar12;
      if (iVar3 == 0x10000) {
         if (uVar11 < 0x102) {
            LAB_001054d9:puVar21 = format1_names_msgidx;
            uVar5 = ~*(uint *)(format1_names_msgidx + uVar6 * 4) + *(int*)( format1_names_msgidx + ( ulong )((int)uVar6 + 1) * 4 );
            pbVar19 = (byte*)( ".notdef" + *(uint*)( format1_names_msgidx + uVar6 * 4 ) );
         }
 else {
            uVar5 = 0;
            pbVar19 = (byte*)0x0;
         }

         LAB_00105155:if (uVar5 != uVar9) goto LAB_00105211;
         if (uVar5 == 0) goto LAB_001049f2;
         iVar3 = memcmp(pbVar19, pbVar18, (ulong)uVar5);
      }
 else {
         if (( iVar3 == 0x20000 ) && ( puVar21 = *(undefined1**)( param_3 + 0x10 ) ),uVar11 < ( ushort )(*(ushort*)puVar21 << 8 | *(ushort*)puVar21 >> 8)) {
            uVar11 = *(ushort*)( (long)puVar21 + ( uVar6 + 1 ) * 2 ) << 8 | *(ushort*)( (long)puVar21 + ( uVar6 + 1 ) * 2 ) >> 8;
            uVar6 = (ulong)uVar11;
            if (uVar11 < 0x102) goto LAB_001054d9;
            if (uVar11 - 0x102 < *(uint*)( param_3 + 0x1c )) {
               pbVar19 = (byte*)( ( ulong ) * (uint*)( *(long*)( param_3 + 0x20 ) + ( ulong )(uVar11 - 0x102) * 4 ) + *(long*)( param_3 + 0x28 ) );
               uVar5 = ( uint ) * pbVar19;
               pbVar19 = pbVar19 + 1;
               goto LAB_00105155;
            }

         }

         uVar5 = 0;
         if (uVar9 == 0) goto LAB_001049f2;
         LAB_00105211:iVar3 = uVar5 - uVar9;
      }

      if (0 < iVar3) {
         uVar9 = *(uint*)( param_3 + 8 );
         pcVar12 = (char*)(ulong)uVar9;
         uVar11 = *puVar15;
         uVar10 = puVar7[-1];
         if (uVar9 == 0x10000) {
            if (uVar10 < 0x102) {
               pcVar12 = (char*)( ulong )(~*(uint *)(format1_names_msgidx + (ulong)(uint)uVar10 * 4) + *(int*)( format1_names_msgidx + ( ulong )(uVar10 + 1) * 4 ));
               iVar3 = *(int*)( param_3 + 8 );
               pbVar18 = (byte*)( ".notdef" + *(uint*)( format1_names_msgidx + (ulong)(uint)uVar10 * 4 ) );
               goto LAB_0010552b;
            }

            LAB_00105541:iVar3 = *(int*)( param_3 + 8 );
            if (iVar3 == 0x10000) {
               LAB_001056a5:pcVar12 = (char*)0x0;
               pbVar18 = (byte*)0x0;
               LAB_001056a9:if (uVar11 < 0x102) {
                  LAB_001056f9:puVar21 = format1_names_msgidx;
                  uVar9 = ~*(uint *)(format1_names_msgidx + (ulong)uVar11 * 4) + *(int*)( format1_names_msgidx + ( ulong )(uVar11 + 1) * 4 );
                  pbVar19 = (byte*)( ".notdef" + *(uint*)( format1_names_msgidx + (ulong)uVar11 * 4 ) );
               }
 else {
                  uVar9 = 0;
                  pbVar19 = (byte*)0x0;
               }

               LAB_001056b4:if (uVar9 != (uint)pcVar12) goto LAB_00105580;
               if (uVar9 == 0) goto LAB_0010519f;
               iVar3 = memcmp(pbVar19, pbVar18, (ulong)uVar9);
            }
 else {
               joined_r0x00105556:if (iVar3 != 0x20000) goto LAB_0010519f;
               pcVar12 = (char*)0x0;
               pbVar18 = (byte*)0x0;
               LAB_00105560:uVar10 = **(ushort**)( param_3 + 0x10 );
               if ((uint)uVar11 < ( uint )(ushort)(uVar10 << 8 | uVar10 >> 8)) {
                  uVar11 = ( *(ushort**)( param_3 + 0x10 ) )[uVar11 + 1];
                  uVar11 = uVar11 << 8 | uVar11 >> 8;
                  if (uVar11 < 0x102) goto LAB_001056f9;
                  if (*(uint*)( param_3 + 0x1c ) <= uVar11 - 0x102) goto LAB_00105576;
                  pbVar19 = (byte*)( ( ulong ) * (uint*)( *(long*)( param_3 + 0x20 ) + ( ulong )(uVar11 - 0x102) * 4 ) + *(long*)( param_3 + 0x28 ) );
                  uVar9 = ( uint ) * pbVar19;
                  pbVar19 = pbVar19 + 1;
                  goto LAB_001056b4;
               }

               LAB_00105576:if ((int)pcVar12 == 0) goto LAB_0010519f;
               uVar9 = 0;
               LAB_00105580:iVar3 = uVar9 - (int)pcVar12;
            }

            puVar16 = puVar15;
            if (0 < iVar3) goto LAB_001049f2;
         }
 else if (uVar9 == 0x20000) {
            uVar8 = **(ushort**)( param_3 + 0x10 );
            uVar8 = uVar8 << 8 | uVar8 >> 8;
            pcVar12 = (char*)(ulong)uVar8;
            if ((uint)uVar8 <= (uint)uVar10) goto LAB_00105541;
            uVar10 = ( *(ushort**)( param_3 + 0x10 ) )[(ulong)uVar10 + 1];
            iVar3 = *(int*)( param_3 + 8 );
            uVar10 = uVar10 << 8 | uVar10 >> 8;
            pcVar12 = (char*)(ulong)uVar10;
            if (uVar10 < 0x102) {
               puVar21 = format1_names_msgidx;
               pcVar12 = (char*)( ulong )(~*(uint *)(format1_names_msgidx + (ulong)uVar10 * 4) + *(int*)( format1_names_msgidx + ( ulong )(uVar10 + 1) * 4 ));
               pbVar18 = (byte*)( ".notdef" + *(uint*)( format1_names_msgidx + (ulong)uVar10 * 4 ) );
            }
 else {
               if (*(uint*)( param_3 + 0x1c ) <= uVar10 - 0x102) {
                  if (iVar3 != 0x10000) goto joined_r0x00105556;
                  goto LAB_001056a5;
               }

               pbVar18 = (byte*)( ( ulong ) * (uint*)( *(long*)( param_3 + 0x20 ) + ( ulong )(uVar10 - 0x102) * 4 ) + *(long*)( param_3 + 0x28 ) );
               pcVar12 = (char*)( ulong ) * pbVar18;
               pbVar18 = pbVar18 + 1;
            }

            LAB_0010552b:if (iVar3 != 0x10000) {
               if (iVar3 == 0x20000) goto LAB_00105560;
               goto LAB_00105576;
            }

            goto LAB_001056a9;
         }

         LAB_0010519f:puVar16 = puVar7 + -1;
      }

   }
 else if (*(int*)( param_3 + 8 ) == 0x20000) {
      uVar8 = **(ushort**)( param_3 + 0x10 );
      if ((uint)uVar10 < ( uint )(ushort)(uVar8 << 8 | uVar8 >> 8)) {
         uVar10 = ( *(ushort**)( param_3 + 0x10 ) )[(long)( (_func_int_void_ptr_void_ptr_void_ptr*)pcVar12 + 1 )];
         iVar3 = *(int*)( param_3 + 8 );
         uVar10 = uVar10 << 8 | uVar10 >> 8;
         uVar9 = (uint)uVar10;
         if (uVar10 < 0x102) {
            puVar21 = format1_names_msgidx;
            __n = (size_t)( ~*(uint *)(format1_names_msgidx + (ulong)uVar9 * 4) + *(int*)( format1_names_msgidx + ( ulong )(uVar9 + 1) * 4 ) );
            pbVar18 = (byte*)( ".notdef" + *(uint*)( format1_names_msgidx + (ulong)uVar9 * 4 ) );
         }
 else if (uVar9 - 0x102 < *(uint*)( param_3 + 0x1c )) {
            pbVar18 = (byte*)( ( ulong ) * (uint*)( *(long*)( param_3 + 0x20 ) + ( ulong )(uVar9 - 0x102) * 4 ) + *(long*)( param_3 + 0x28 ) );
            __n = (size_t)*pbVar18;
            pbVar18 = pbVar18 + 1;
         }
 else {
            __n = 0;
            pbVar18 = (byte*)0x0;
         }

      }
 else {
         iVar3 = *(int*)( param_3 + 8 );
         __n = 0;
         pbVar18 = (byte*)0x0;
      }

      goto LAB_00105058;
   }

   LAB_001049f2:if (puVar7 != puVar16) {
      uVar11 = *puVar7;
      *puVar7 = *puVar16;
      *puVar16 = uVar11;
   }

   puVar16 = puVar7;
   puVar15 = local_48;
   puVar14 = local_48;
   local_58 = puVar7;
   if (local_48 < puVar7) {
      LAB_00104a51:uVar9 = *(uint*)( param_3 + 8 );
      pcVar12 = (char*)(ulong)uVar9;
      uVar11 = *puVar15;
      pcVar22 = (char*)(ulong)uVar11;
      uVar10 = *puVar7;
      if (uVar9 == 0x10000) {
         if (uVar10 < 0x102) {
            pbVar18 = (byte*)( ".notdef" + *(uint*)( format1_names_msgidx + (ulong)uVar10 * 4 ) );
            uVar9 = ~*(uint *)(format1_names_msgidx + (ulong)uVar10 * 4) + *(int*)( format1_names_msgidx + ( ulong )(uVar10 + 1) * 4 );
            pcVar12 = (char*)( ulong ) * (uint*)( param_3 + 8 );
            goto LAB_00104cd6;
         }

         pcVar12 = (char*)( ulong ) * (uint*)( param_3 + 8 );
         if (*(uint*)( param_3 + 8 ) == 0x10000) {
            uVar9 = 0;
            pbVar18 = (byte*)0x0;
            LAB_00104b14:if (0x101 < uVar11) goto LAB_00104cf0;
            LAB_00104b1f:puVar21 = (undefined1*)( ulong )((int)pcVar22 + 1);
            pcVar12 = ".notdef";
            pbVar19 = (byte*)( ".notdef" + *(uint*)( format1_names_msgidx + (long)pcVar22 * 4 ) );
            uVar5 = ~*(uint *)(format1_names_msgidx + (long)pcVar22 * 4) + *(int*)( format1_names_msgidx + (long)puVar21 * 4 );
            if (uVar5 == uVar9) {
               LAB_00104b3f:if (uVar5 == 0) goto joined_r0x00104aef;
               iVar3 = memcmp(pbVar19, pbVar18, (ulong)uVar5);
               pcVar12 = extraout_RDX;
            }
 else {
               LAB_00104ae0:iVar3 = uVar5 - uVar9;
            }

            if (iVar3 < 1) {
               if (iVar3 == 0) goto joined_r0x00104aef;
               goto LAB_00104a44;
            }

            LAB_00104b52:puVar13 = puVar16;
            if (puVar15 < puVar16) {
               do {
                  uVar9 = *(uint*)( param_3 + 8 );
                  pcVar12 = (char*)(ulong)uVar9;
                  uVar11 = *puVar7;
                  puVar16 = puVar13 + -1;
                  uVar10 = *puVar16;
                  uVar17 = (uint)uVar11;
                  uVar5 = (uint)uVar10;
                  puVar25 = local_58;
                  if (uVar9 == 0x10000) {
                     if (uVar17 < 0x102) {
                        pcVar12 = (char*)( ulong )(~*(uint *)(format1_names_msgidx + (ulong)uVar11 * 4) + *(int*)( format1_names_msgidx + ( ulong )(uVar17 + 1) * 4 ));
                        pbVar18 = (byte*)( ".notdef" + *(uint*)( format1_names_msgidx + (ulong)uVar11 * 4 ) );
                        iVar3 = *(int*)( param_3 + 8 );
                        goto LAB_00104dc8;
                     }

                     pcVar12 = (char*)( ulong ) * (uint*)( param_3 + 8 );
                     if (*(uint*)( param_3 + 8 ) == 0x10000) {
                        pcVar12 = (char*)0x0;
                        pbVar18 = (byte*)0x0;
                        LAB_00104d84:if (uVar5 < 0x102) {
                           LAB_00104d40:pbVar19 = (byte*)( ".notdef" + *(uint*)( format1_names_msgidx + (ulong)uVar10 * 4 ) );
                           uVar9 = ~*(uint *)(format1_names_msgidx + (ulong)uVar10 * 4) + *(int*)( format1_names_msgidx + ( ulong )(uVar10 + 1) * 4 );
                           if ((uint)pcVar12 != uVar9) goto LAB_00104c2a;
                           LAB_00104d64:if ((int)pcVar12 == 0) goto LAB_00104b7c;
                           iVar3 = memcmp(pbVar19, pbVar18, (size_t)pcVar12);
                           pcVar12 = extraout_RDX_00;
                           goto LAB_00104c2c;
                        }

                        LAB_00104d8b:if ((int)pcVar12 == 0) goto LAB_00104b7c;
                        if (0 < (int)pcVar12) goto LAB_00104c3c;
                     }
 else {
                        LAB_00104bc9:iVar3 = (int)pcVar12;
                        joined_r0x00104e91:if (iVar3 != 0x20000) goto LAB_00104b7c;
                        pcVar12 = (char*)0x0;
                        pbVar18 = (byte*)0x0;
                        LAB_00104bd5:uVar11 = **(ushort**)( param_3 + 0x10 );
                        if (( ushort )(uVar11 << 8 | uVar11 >> 8) <= uVar5) goto LAB_00104d8b;
                        uVar11 = ( *(ushort**)( param_3 + 0x10 ) )[uVar5 + 1];
                        uVar11 = uVar11 << 8 | uVar11 >> 8;
                        if (uVar11 < 0x102) {
                           pbVar19 = (byte*)( ".notdef" + *(uint*)( format1_names_msgidx + (ulong)uVar11 * 4 ) );
                           uVar9 = ~*(uint *)(format1_names_msgidx + (ulong)uVar11 * 4) + *(int*)( format1_names_msgidx + ( ulong )(uVar11 + 1) * 4 );
                        }
 else {
                           if (*(uint*)( param_3 + 0x1c ) <= uVar11 - 0x102) goto LAB_00104d8b;
                           pbVar19 = (byte*)( ( ulong ) * (uint*)( *(long*)( param_3 + 0x20 ) + ( ulong )(uVar11 - 0x102) * 4 ) + *(long*)( param_3 + 0x28 ) );
                           uVar9 = ( uint ) * pbVar19;
                           pbVar19 = pbVar19 + 1;
                        }

                        if ((uint)pcVar12 == uVar9) goto LAB_00104d64;
                        LAB_00104c2a:iVar3 = uVar9 - (int)pcVar12;
                        LAB_00104c2c:if (iVar3 == 0) goto LAB_00104b7c;
                        if (iVar3 < 0) goto LAB_00104c3c;
                     }

                  }
 else {
                     if (uVar9 == 0x20000) {
                        uVar8 = **(ushort**)( param_3 + 0x10 );
                        if (uVar17 < ( ushort )(uVar8 << 8 | uVar8 >> 8)) {
                           uVar11 = ( *(ushort**)( param_3 + 0x10 ) )[(ulong)uVar11 + 1];
                           iVar3 = *(int*)( param_3 + 8 );
                           uVar11 = uVar11 << 8 | uVar11 >> 8;
                           if (uVar11 < 0x102) {
                              pbVar18 = (byte*)( ".notdef" + *(uint*)( format1_names_msgidx + (ulong)uVar11 * 4 ) );
                              pcVar12 = (char*)( ulong )(~*(uint *)(format1_names_msgidx + (ulong)uVar11 * 4) + *(int*)( format1_names_msgidx + ( ulong )(uVar11 + 1) * 4 ));
                           }
 else {
                              pcVar12 = (char*)( ulong )(uVar11 - 0x102);
                              if (*(uint*)( param_3 + 0x1c ) <= uVar11 - 0x102) {
                                 if (iVar3 != 0x10000) goto joined_r0x00104e91;
                                 goto LAB_00104d2e;
                              }

                              pbVar18 = (byte*)( ( ulong ) * (uint*)( *(long*)( param_3 + 0x20 ) + (long)pcVar12 * 4 ) + *(long*)( param_3 + 0x28 ) );
                              pcVar12 = (char*)( ulong ) * pbVar18;
                              pbVar18 = pbVar18 + 1;
                           }

                           LAB_00104dc8:if (iVar3 != 0x10000) {
                              if (iVar3 == 0x20000) goto LAB_00104bd5;
                              goto LAB_00104d8b;
                           }

                           goto LAB_00104d84;
                        }

                        pcVar12 = (char*)( ulong ) * (uint*)( param_3 + 8 );
                        if (*(uint*)( param_3 + 8 ) != 0x10000) goto LAB_00104bc9;
                        LAB_00104d2e:if (uVar5 < 0x102) {
                           pcVar12 = (char*)0x0;
                           pbVar18 = (byte*)0x0;
                           goto LAB_00104d40;
                        }

                     }

                     LAB_00104b7c:puVar25 = local_58 + -1;
                     if (puVar16 < puVar25) {
                        pcVar12 = (char*)( ulong ) * puVar16;
                        uVar11 = local_58[-1];
                        local_58[-1] = *puVar16;
                        *puVar16 = uVar11;
                     }

                  }

                  puVar13 = puVar16;
                  local_58 = puVar25;
                  if (puVar16 <= puVar15) break;
               }
 while ( true );
            }

            goto LAB_00104ed1;
         }

         LAB_00104a80:if ((int)pcVar12 != 0x20000) goto joined_r0x00104aef;
         uVar9 = 0;
         pbVar18 = (byte*)0x0;
         LAB_00104a8c:uVar10 = **(ushort**)( param_3 + 0x10 );
         uVar10 = uVar10 << 8 | uVar10 >> 8;
         pcVar12 = (char*)(ulong)uVar10;
         if ((uint)uVar11 < (uint)uVar10) {
            uVar11 = ( *(ushort**)( param_3 + 0x10 ) )[uVar11 + 1];
            uVar11 = uVar11 << 8 | uVar11 >> 8;
            pcVar22 = (char*)(ulong)uVar11;
            if (uVar11 < 0x102) goto LAB_00104b1f;
            pcVar12 = pcVar22;
            if (uVar11 - 0x102 < *(uint*)( param_3 + 0x1c )) {
               pcVar12 = *(char**)( param_3 + 0x20 );
               pbVar19 = (byte*)( ( ulong ) * (uint*)( pcVar12 + ( ulong )(uVar11 - 0x102) * 4 ) + *(long*)( param_3 + 0x28 ) );
               bVar1 = *pbVar19;
               uVar5 = (uint)bVar1;
               pbVar19 = pbVar19 + 1;
               if (bVar1 == uVar9) goto LAB_00104b3f;
               goto LAB_00104ae0;
            }

         }

         LAB_00104cf0:if (uVar9 == 0) goto joined_r0x00104aef;
         if ((int)uVar9 < 0) goto LAB_00104b52;
      }
 else {
         if (uVar9 == 0x20000) {
            uVar8 = **(ushort**)( param_3 + 0x10 );
            if (uVar10 < ( ushort )(uVar8 << 8 | uVar8 >> 8)) {
               uVar10 = ( *(ushort**)( param_3 + 0x10 ) )[(ulong)uVar10 + 1];
               uVar9 = *(uint*)( param_3 + 8 );
               pcVar12 = (char*)(ulong)uVar9;
               uVar10 = uVar10 << 8 | uVar10 >> 8;
               if (uVar10 < 0x102) {
                  uVar9 = ~*(uint *)(format1_names_msgidx + (ulong)uVar10 * 4) + *(int*)( format1_names_msgidx + ( ulong )(uVar10 + 1) * 4 );
                  pbVar18 = (byte*)( ".notdef" + *(uint*)( format1_names_msgidx + (ulong)uVar10 * 4 ) );
               }
 else {
                  if (*(uint*)( param_3 + 0x1c ) <= uVar10 - 0x102) goto joined_r0x00104fe1;
                  pbVar18 = (byte*)( ( ulong ) * (uint*)( *(long*)( param_3 + 0x20 ) + ( ulong )(uVar10 - 0x102) * 4 ) + *(long*)( param_3 + 0x28 ) );
                  uVar9 = ( uint ) * pbVar18;
                  pbVar18 = pbVar18 + 1;
               }

               LAB_00104cd6:if ((int)pcVar12 != 0x10000) {
                  if ((int)pcVar12 == 0x20000) goto LAB_00104a8c;
                  goto LAB_00104cf0;
               }

               goto LAB_00104b14;
            }

            uVar9 = *(uint*)( param_3 + 8 );
            pcVar12 = (char*)(ulong)uVar9;
            joined_r0x00104fe1:if (uVar9 != 0x10000) goto LAB_00104a80;
            if (uVar11 < 0x102) {
               uVar9 = 0;
               pbVar18 = (byte*)0x0;
               goto LAB_00104b1f;
            }

         }

         joined_r0x00104aef:if (puVar14 < puVar15) {
            uVar11 = *puVar15;
            pcVar12 = (char*)(ulong)uVar11;
            *puVar15 = *puVar14;
            *puVar14 = uVar11;
         }

         puVar14 = puVar14 + 1;
      }

      goto LAB_00104a44;
   }

   param_2 = 0;
   param_1 = local_40;
   goto LAB_00104f9a;
   LAB_00104c3c:if (puVar15 < puVar16) {
      uVar11 = *puVar16;
      bVar2 = *(byte*)( (long)puVar15 + 1 );
      *(byte*)puVar16 = ( byte ) * puVar15;
      bVar1 = *(byte*)( (long)puVar13 + -1 );
      *(byte*)( (long)puVar13 + -1 ) = bVar2;
      *puVar15 = CONCAT11(bVar1, (byte)uVar11);
   }

   LAB_00104a44:puVar15 = puVar15 + 1;
   if (puVar16 <= puVar15) goto LAB_00104ed1;
   goto LAB_00104a51;
   LAB_00104ed1:uVar23 = (long)puVar16 - (long)puVar14;
   uVar20 = (long)local_40 - (long)local_58;
   uVar6 = (long)local_58 - (long)puVar16;
   param_1 = (void*)( (long)local_40 - uVar6 );
   uVar9 = (uint)CONCAT71(( int7 )((ulong)pcVar12 >> 8), uVar20 != 0) & (uint)CONCAT71(( int7 )(uVar6 >> 8), uVar6 != 0);
   pcVar12 = (char*)(ulong)uVar9;
   param_2 = uVar6 >> 1;
   local_40 = (ushort*)( (long)param_1 + ( uVar6 & 0xfffffffffffffffe ) );
   uVar24 = (long)puVar14 - (long)local_48;
   if (( uVar24 != 0 ) && ( uVar23 != 0 )) {
      puVar7 = (ushort*)( (long)local_48 + uVar23 );
      if (uVar23 < uVar24) {
         puVar15 = local_48;
         if (local_48 < puVar7) {
            do {
               uVar11 = *puVar15;
               puVar21 = (undefined1*)(ulong)(byte)uVar11;
               puVar13 = (ushort*)( (long)puVar15 + 1 );
               *(byte*)puVar15 = ( byte ) * puVar14;
               *(byte*)puVar14 = (byte)uVar11;
               puVar15 = puVar13;
               puVar14 = (ushort*)( (long)puVar14 + 1 );
            }
 while ( puVar13 != puVar7 );
         }

      }
 else if (local_48 < puVar14) {
         puVar15 = puVar7;
         puVar14 = local_48;
         do {
            uVar11 = *puVar14;
            puVar21 = (undefined1*)(ulong)(byte)uVar11;
            puVar13 = (ushort*)( (long)puVar15 + 1 );
            *(byte*)puVar14 = ( byte ) * puVar15;
            *(byte*)puVar15 = (byte)uVar11;
            puVar15 = puVar13;
            puVar14 = (ushort*)( (long)puVar14 + 1 );
         }
 while ( puVar13 != (ushort*)( uVar24 + (long)puVar7 ) );
      }

   }

   if ((char)uVar9 != '\0') {
      puVar7 = (ushort*)( (long)puVar16 + uVar20 );
      if (uVar20 < uVar6) {
         if (puVar16 < puVar7) {
            do {
               uVar11 = *puVar16;
               pcVar12 = (char*)(ulong)(byte)uVar11;
               puVar15 = (ushort*)( (long)puVar16 + 1 );
               *(byte*)puVar16 = ( byte ) * local_58;
               *(byte*)local_58 = (byte)uVar11;
               local_58 = (ushort*)( (long)local_58 + 1 );
               puVar16 = puVar15;
            }
 while ( puVar15 != puVar7 );
         }

      }
 else if (puVar16 < local_58) {
         do {
            pcVar12 = (char*)( ulong )(byte) * puVar7;
            uVar11 = *puVar16;
            puVar15 = (ushort*)( (long)puVar16 + 1 );
            *(byte*)puVar16 = ( byte ) * puVar7;
            *(byte*)puVar7 = (byte)uVar11;
            puVar7 = (ushort*)( (long)puVar7 + 1 );
            puVar16 = puVar15;
         }
 while ( local_58 != puVar15 );
      }

   }

   LAB_00104f9a:sort_r_simple<void*>(local_48, uVar23 >> 1, param_3, (_func_int_void_ptr_void_ptr_void_ptr*)pcVar12, puVar21);
   local_48 = (ushort*)param_1;
   puVar16 = (ushort*)param_1;
   if (param_2 < 10) goto joined_r0x00105227;
   goto LAB_001049b6;
}
/* CFF::Subrs<OT::IntType<unsigned short, 2u> > const&
   CFF::StructAtOffsetOrNull<CFF::Subrs<OT::IntType<unsigned short, 2u> >>(void const*, int,
   hb_sanitize_context_t&) */Subrs *CFF::StructAtOffsetOrNull<CFF::Subrs<OT::IntType<unsigned_short,2u>>>(void *param_1, int param_2, hb_sanitize_context_t *param_3) {
   Subrs *pSVar1;
   Subrs SVar2;
   ushort uVar3;
   ulong uVar4;
   Subrs *pSVar5;
   int iVar6;
   uint uVar7;
   uint uVar8;
   if (param_2 != 0) {
      pSVar1 = (Subrs*)( (long)param_1 + (long)param_2 );
      if (( pSVar1 + -*(long *)(param_3 + 8) <= (Subrs*)( ulong ) * (uint*)( param_3 + 0x18 ) ) && ( pSVar1 + ( 2 - *(long*)( param_3 + 8 ) ) <= (Subrs*)( ulong ) * (uint*)( param_3 + 0x18 ) )) {
         uVar3 = *(ushort*)pSVar1 << 8 | *(ushort*)pSVar1 >> 8;
         if (uVar3 == 0) {
            return pSVar1;
         }

         pSVar5 = pSVar1 + 3;
         if (( ulong )((long)pSVar5 - *(long*)( param_3 + 8 )) <= ( ulong ) * (uint*)( param_3 + 0x18 )) {
            SVar2 = pSVar1[2];
            if ((byte)SVar2 - 1 < 4) {
               uVar7 = ( uVar3 + 1 ) * (uint)(byte)SVar2;
               if (uVar7 <= ( uint )((int)*(undefined8*)( param_3 + 0x10 ) - (int)pSVar5)) {
                  iVar6 = *(int*)( param_3 + 0x1c ) - uVar7;
                  *(int*)( param_3 + 0x1c ) = iVar6;
                  if (0 < iVar6) {
                     uVar4 = (ulong)uVar3;
                     if (SVar2 == (Subrs)0x3) {
                        pSVar5 = pSVar5 + uVar4 * 3;
                        uVar8 = ( uint )(byte) * pSVar5 * 0x10000 + (uint)(byte)pSVar5[1] * 0x100 + (uint)(byte)pSVar5[2];
                     }
 else if (SVar2 == (Subrs)0x4) {
                        uVar8 = *(uint*)( pSVar5 + uVar4 * 4 );
                        uVar8 = uVar8 >> 0x18 | ( uVar8 & 0xff0000 ) >> 8 | ( uVar8 & 0xff00 ) << 8 | uVar8 << 0x18;
                     }
 else if (SVar2 == (Subrs)0x2) {
                        uVar8 = ( uint )(ushort)(*(ushort*)( pSVar5 + uVar4 * 2 ) << 8 | *(ushort*)( pSVar5 + uVar4 * 2 ) >> 8);
                     }
 else {
                        uVar8 = (uint)(byte)pSVar5[uVar4];
                     }

                     if (( ( ( ulong )((long)( pSVar1 + ( uVar7 + 2 ) ) - *(long*)( param_3 + 8 )) <= ( ulong ) * (uint*)( param_3 + 0x18 ) ) && ( uVar8 <= ( uint )((int)*(undefined8*)( param_3 + 0x10 ) - (int)( pSVar1 + ( uVar7 + 2 ) )) ) ) && ( *(uint*)( param_3 + 0x1c ) = iVar6 - uVar8 ),0 < (int)( iVar6 - uVar8 )) {
                        return pSVar1;
                     }

                  }

               }

            }

            return (Subrs*)&_hb_NullPool;
         }

      }

   }

   return (Subrs*)&_hb_NullPool;
}
/* hb_font_t::scale_glyph_extents(hb_glyph_extents_t*) */void hb_font_t::scale_glyph_extents(hb_font_t *this, hb_glyph_extents_t *param_1) {
   hb_font_t hVar1;
   int iVar2;
   int iVar3;
   float fVar4;
   int iVar5;
   int iVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   fVar4 = (float)(int)(short)*(undefined4*)param_1 * *(float*)( this + 0x4c );
   fVar7 = (float)(int)(short)( (short)*(undefined4*)param_1 + *(short*)( param_1 + 8 ) ) * *(float*)( this + 0x4c );
   fVar10 = (float)(int)(short)*(undefined4*)( param_1 + 4 ) * *(float*)( this + 0x50 );
   fVar8 = (float)(int)(short)( (short)*(undefined4*)( param_1 + 4 ) + *(short*)( param_1 + 0xc ) ) * *(float*)( this + 0x50 );
   fVar11 = *(float*)( this + 0x48 );
   if (fVar11 != 0.0) {
      fVar9 = fVar11 * fVar10;
      fVar11 = fVar11 * fVar8;
      fVar4 = fVar4 + (float)( ~-(uint)(fVar9 <= fVar11) & (uint)fVar11 | (uint)fVar9 & -(uint)(fVar9 <= fVar11) );
      fVar7 = fVar7 + (float)( (uint)fVar9 & -(uint)(fVar11 <= fVar9) | ~-(uint)(fVar11 <= fVar9) & (uint)fVar11 );
   }

   if ((float)( (uint)fVar4 & _LC4 ) < _LC1) {
      fVar4 = (float)( ( uint )((float)(int)fVar4 - (float)( -(uint)(fVar4 < (float)(int)fVar4) & _LC3 )) | ~_LC4 & (uint)fVar4 );
   }

   if ((float)( (uint)fVar10 & _LC4 ) < _LC1) {
      fVar10 = (float)( ( uint )((float)(int)fVar10 - (float)( -(uint)(fVar10 < (float)(int)fVar10) & _LC3 )) | ~_LC4 & (uint)fVar10 );
   }

   if ((float)( (uint)fVar7 & _LC4 ) < _LC1) {
      fVar7 = (float)( ( uint )((float)(int)fVar7 + (float)( -(uint)((float)(int)fVar7 < fVar7) & _LC3 )) | ~_LC4 & (uint)fVar7 );
   }

   if ((float)( (uint)fVar8 & _LC4 ) < _LC1) {
      fVar8 = (float)( ( uint )((float)(int)fVar8 + (float)( -(uint)((float)(int)fVar8 < fVar8) & _LC3 )) | ~_LC4 & (uint)fVar8 );
   }

   iVar5 = (int)( fVar7 - (float)(int)fVar4 );
   iVar6 = (int)( fVar8 - (float)(int)fVar10 );
   *(int*)param_1 = (int)fVar4;
   *(int*)( param_1 + 4 ) = (int)fVar10;
   *(int*)( param_1 + 8 ) = iVar5;
   *(int*)( param_1 + 0xc ) = iVar6;
   iVar2 = *(int*)( this + 0x3c );
   iVar3 = *(int*)( this + 0x40 );
   if (iVar2 != 0 || iVar3 != 0) {
      if (*(int*)( this + 0x2c ) < 0) {
         iVar3 = -iVar3;
      }

      *(int*)( param_1 + 0xc ) = iVar6 - iVar3;
      iVar6 = *(int*)( this + 0x28 );
      *(int*)( param_1 + 4 ) = (int)fVar10 + iVar3;
      if (iVar6 < 0) {
         iVar2 = -iVar2;
         hVar1 = this[0x38];
      }
 else {
         hVar1 = this[0x38];
      }

      if (hVar1 != (hb_font_t)0x0) {
         *(int*)param_1 = (int)fVar4 - iVar2 / 2;
      }

      *(int*)( param_1 + 8 ) = iVar2 + iVar5;
   }

   return;
}
/* hb_draw_funcs_t::emit_close_path(void*, hb_draw_state_t&) */void hb_draw_funcs_t::emit_close_path(void *param_1, hb_draw_state_t *param_2) {
   /* WARNING: Could not recover jumptable at 0x00105c15. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( (long)param_1 + 0x30 ) )();
   return;
}
/* hb_draw_funcs_t::start_path(void*, hb_draw_state_t&) */void hb_draw_funcs_t::start_path(hb_draw_funcs_t *this, void *param_1, hb_draw_state_t *param_2) {
   long *plVar1;
   plVar1 = *(long**)( this + 0x38 );
   if (plVar1 != (long*)0x0) {
      plVar1 = (long*)*plVar1;
   }

   ( **(code**)( this + 0x10 ) )(*(undefined4*)( param_2 + 0xc ), *(undefined4*)( param_2 + 0x10 ), this, param_1, param_2, plVar1);
   *(undefined4*)param_2 = 1;
   *(undefined8*)( param_2 + 4 ) = *(undefined8*)( param_2 + 0xc );
   return;
}
/* contour_point_vector_t::extend(hb_array_t<contour_point_t> const&) */void contour_point_vector_t::extend(contour_point_vector_t *this, hb_array_t *param_1) {
   uint uVar1;
   uint uVar2;
   ulong uVar3;
   void *pvVar4;
   uint uVar5;
   uint uVar6;
   uVar1 = *(uint*)this;
   uVar2 = *(uint*)( this + 4 );
   uVar3 = ( ulong ) * (uint*)( param_1 + 8 );
   if (-1 < (int)uVar1) {
      uVar5 = *(uint*)( param_1 + 8 ) + uVar2;
      if ((int)uVar5 < 0) {
         uVar5 = 0;
      }

      uVar6 = uVar1;
      if (uVar1 < uVar5) {
         do {
            uVar6 = ( uVar6 >> 1 ) + 8 + uVar6;
         }
 while ( uVar6 < uVar5 );
         if (0x15555555 < uVar6) {
            *(uint*)this = ~uVar1;
            return;
         }

         pvVar4 = realloc(*(void**)( this + 8 ), (ulong)uVar6 * 0xc);
         if (pvVar4 == (void*)0x0) {
            if (*(uint*)this < uVar6) {
               *(uint*)this = ~*(uint *)this;
               return;
            }

            pvVar4 = *(void**)( this + 8 );
            uVar3 = ( ulong ) * (uint*)( param_1 + 8 );
         }
 else {
            *(void**)( this + 8 ) = pvVar4;
            uVar3 = ( ulong ) * (uint*)( param_1 + 8 );
            *(uint*)this = uVar6;
         }

      }
 else {
         pvVar4 = *(void**)( this + 8 );
      }

      *(uint*)( this + 4 ) = uVar5;
      if (uVar3 * 0xc != 0) {
         memcpy((void*)( (long)pvVar4 + (ulong)uVar2 * 0xc ), *(void**)param_1, uVar3 * 0xc);
         return;
      }

   }

   return;
}
/* OT::ItemVariationStore::get_delta(unsigned int, unsigned int, int const*, unsigned int, float*)
   const */undefined8 OT::ItemVariationStore::get_delta(ItemVariationStore *this, uint param_1, uint param_2, int *param_3, uint param_4, float *param_5) {
   long lVar1;
   int iVar2;
   ushort uVar3;
   uint uVar4;
   ulong uVar5;
   uint uVar6;
   int iVar7;
   ushort uVar8;
   ItemVariationStore *pIVar9;
   uint uVar10;
   ushort uVar11;
   uint uVar12;
   int iVar13;
   ItemVariationStore *pIVar14;
   ushort uVar15;
   ItemVariationStore *pIVar16;
   ushort uVar17;
   int iVar18;
   long lVar19;
   ulong uVar20;
   ItemVariationStore *pIVar21;
   float *pfVar22;
   ulong uVar23;
   bool bVar24;
   undefined8 uVar25;
   undefined1 auVar26[16];
   float fVar27;
   float fVar28;
   if (( ushort )(*(ushort*)( this + 6 ) << 8 | *(ushort*)( this + 6 ) >> 8) <= param_1) {
      return 0;
   }

   pIVar21 = (ItemVariationStore*)&_hb_NullPool;
   uVar4 = *(uint*)( this + (ulong)param_1 * 4 + 8 );
   if (uVar4 != 0) {
      pIVar21 = this + ( uVar4 >> 0x18 | ( uVar4 & 0xff0000 ) >> 8 | ( uVar4 & 0xff00 ) << 8 | uVar4 << 0x18 );
   }

   uVar4 = *(uint*)( this + 2 );
   pIVar16 = (ItemVariationStore*)&_hb_NullPool;
   if (uVar4 != 0) {
      pIVar16 = this + ( uVar4 >> 0x18 | ( uVar4 & 0xff0000 ) >> 8 | ( uVar4 & 0xff00 ) << 8 | uVar4 << 0x18 );
   }

   if (param_2 < ( ushort )(*(ushort*)pIVar21 << 8 | *(ushort*)pIVar21 >> 8)) {
      uVar3 = *(ushort*)( pIVar21 + 2 ) << 8;
      uVar8 = *(ushort*)( pIVar21 + 2 ) >> 8;
      uVar17 = uVar3 | uVar8;
      uVar4 = ( uint )(ushort)(*(ushort*)( pIVar21 + 4 ) << 8 | *(ushort*)( pIVar21 + 4 ) >> 8);
      uVar6 = uVar17 & 0x7fff;
      uVar8 = uVar3 & 0x7fff | uVar8;
      uVar20 = ( ulong )(uVar4 * 2 + 2);
      uVar12 = ( uVar4 + uVar6 ) * param_2;
      if ((short)uVar17 < 0) {
         pIVar14 = pIVar21 + uVar12 * 2 + uVar20 + 4;
         if (uVar8 == 0) {
            uVar23 = (ulong)uVar4;
            auVar26 = (undefined1[16])0x0;
            uVar6 = 0;
         }
 else {
            uVar3 = *(ushort*)( pIVar16 + 2 );
            auVar26 = (undefined1[16])0x0;
            lVar19 = 0;
            do {
               uVar17 = *(ushort*)( pIVar21 + lVar19 * 2 + 6 ) << 8 | *(ushort*)( pIVar21 + lVar19 * 2 + 6 ) >> 8;
               if ((uint)uVar17 < ( uint )(ushort)(uVar3 << 8 | uVar3 >> 8)) {
                  if (param_5 == (float*)0x0) {
                     pfVar22 = (float*)0x0;
                     uVar11 = *(ushort*)pIVar16 << 8 | *(ushort*)pIVar16 >> 8;
                     uVar12 = (uint)uVar11;
                     fVar27 = _LC3;
                     if (uVar12 != 0) {
                        LAB_00105ed6:pIVar9 = pIVar16 + ( ulong )(uVar17 * uVar12) * 6 + 4;
                        uVar20 = 0;
                        fVar27 = _LC3;
                        do {
                           uVar17 = *(ushort*)( pIVar9 + 2 );
                           if ((uint)uVar20 < param_4) {
                              iVar2 = param_3[uVar20];
                              iVar18 = (int)(short)( uVar17 << 8 | uVar17 >> 8 );
                              if (( uVar17 != 0 ) && ( iVar2 != iVar18 )) {
                                 if (iVar2 != 0) {
                                    uVar17 = *(ushort*)pIVar9 << 8 | *(ushort*)pIVar9 >> 8;
                                    uVar15 = *(ushort*)( pIVar9 + 4 ) << 8 | *(ushort*)( pIVar9 + 4 ) >> 8;
                                    iVar7 = (int)(short)uVar17;
                                    iVar13 = (int)(short)uVar15;
                                    if (( ( iVar18 < iVar7 ) || ( iVar13 < iVar18 ) ) || ( ( (short)uVar17 < 0 && ( 0 < (short)uVar15 ) ) )) goto LAB_00105f6e;
                                    if (( iVar7 < iVar2 ) && ( iVar2 < iVar13 )) {
                                       if (iVar2 < iVar18) {
                                          fVar28 = (float)( iVar2 - iVar7 ) / (float)( iVar18 - iVar7 );
                                       }
 else {
                                          fVar28 = (float)( iVar13 - iVar2 ) / (float)( iVar13 - iVar18 );
                                       }

                                       if (fVar28 != 0.0) {
                                          fVar27 = fVar27 * fVar28;
                                          goto LAB_00105f6e;
                                       }

                                    }

                                 }

                                 LAB_00105f8d:if (param_5 != (float*)0x0) {
                                    *pfVar22 = 0.0;
                                 }

                                 goto LAB_00105f9e;
                              }

                           }
 else if (uVar17 != 0) goto LAB_00105f8d;
                           LAB_00105f6e:uVar20 = uVar20 + 1;
                           pIVar9 = pIVar9 + 6;
                        }
 while ( uVar11 != uVar20 );
                        if (param_5 != (float*)0x0) goto LAB_00105fde;
                     }

                  }
 else {
                     pfVar22 = param_5 + uVar17;
                     fVar27 = *pfVar22;
                     if (fVar27 == _LC5) {
                        uVar11 = *(ushort*)pIVar16 << 8 | *(ushort*)pIVar16 >> 8;
                        uVar12 = (uint)uVar11;
                        fVar27 = _LC3;
                        if (uVar12 != 0) goto LAB_00105ed6;
                        LAB_00105fde:*pfVar22 = fVar27;
                     }

                  }

               }
 else {
                  LAB_00105f9e:fVar27 = 0.0;
               }

               uVar12 = *(uint*)( pIVar14 + lVar19 * 4 );
               lVar19 = lVar19 + 1;
               auVar26._0_4_ = auVar26._0_4_ + fVar27 * (float)(int)( uVar12 >> 0x18 | ( uVar12 & 0xff0000 ) >> 8 | ( uVar12 & 0xff00 ) << 8 | uVar12 << 0x18 );
            }
 while ( (uint)lVar19 < uVar6 );
            pIVar14 = pIVar14 + (ulong)uVar8 * 4;
            uVar23 = (ulong)uVar4;
         }

      }
 else {
         uVar23 = (ulong)uVar6;
         auVar26 = (undefined1[16])0x0;
         uVar6 = 0;
         pIVar14 = pIVar21 + uVar12 + uVar20 + 4;
      }

      uVar12 = (uint)uVar23;
      if (uVar6 < uVar12) {
         uVar3 = *(ushort*)( pIVar16 + 2 );
         uVar20 = (ulong)uVar6;
         lVar19 = uVar20 * -2;
         do {
            uVar8 = *(ushort*)( pIVar21 + uVar20 * 2 + 6 ) << 8 | *(ushort*)( pIVar21 + uVar20 * 2 + 6 ) >> 8;
            if ((uint)uVar8 < ( uint )(ushort)(uVar3 << 8 | uVar3 >> 8)) {
               if (param_5 == (float*)0x0) {
                  pfVar22 = (float*)0x0;
                  uVar17 = *(ushort*)pIVar16 << 8 | *(ushort*)pIVar16 >> 8;
                  uVar10 = (uint)uVar17;
                  fVar27 = _LC3;
                  if (uVar10 != 0) {
                     LAB_001060d6:pIVar9 = pIVar16 + ( ulong )(uVar8 * uVar10) * 6 + 4;
                     uVar5 = 0;
                     fVar27 = _LC3;
                     do {
                        uVar8 = *(ushort*)( pIVar9 + 2 );
                        if ((uint)uVar5 < param_4) {
                           iVar2 = param_3[uVar5];
                           iVar18 = (int)(short)( uVar8 << 8 | uVar8 >> 8 );
                           if (( uVar8 != 0 ) && ( iVar2 != iVar18 )) {
                              if (iVar2 != 0) {
                                 uVar8 = *(ushort*)pIVar9 << 8 | *(ushort*)pIVar9 >> 8;
                                 uVar11 = *(ushort*)( pIVar9 + 4 ) << 8 | *(ushort*)( pIVar9 + 4 ) >> 8;
                                 iVar7 = (int)(short)uVar8;
                                 iVar13 = (int)(short)uVar11;
                                 if (( ( iVar18 < iVar7 ) || ( iVar13 < iVar18 ) ) || ( ( (short)uVar8 < 0 && ( 0 < (short)uVar11 ) ) )) goto LAB_00106173;
                                 if (( iVar7 < iVar2 ) && ( iVar2 < iVar13 )) {
                                    if (iVar2 < iVar18) {
                                       fVar28 = (float)( iVar2 - iVar7 ) / (float)( iVar18 - iVar7 );
                                    }
 else {
                                       fVar28 = (float)( iVar13 - iVar2 ) / (float)( iVar13 - iVar18 );
                                    }

                                    if (fVar28 != 0.0) {
                                       fVar27 = fVar27 * fVar28;
                                       goto LAB_00106173;
                                    }

                                 }

                              }

                              LAB_00106192:if (param_5 != (float*)0x0) {
                                 *pfVar22 = 0.0;
                              }

                              goto LAB_001061a3;
                           }

                        }
 else if (uVar8 != 0) goto LAB_00106192;
                        LAB_00106173:uVar5 = uVar5 + 1;
                        pIVar9 = pIVar9 + 6;
                     }
 while ( uVar17 != uVar5 );
                     if (param_5 != (float*)0x0) goto LAB_001061de;
                  }

               }
 else {
                  pfVar22 = param_5 + uVar8;
                  fVar27 = *pfVar22;
                  if (fVar27 == _LC5) {
                     uVar17 = *(ushort*)pIVar16 << 8 | *(ushort*)pIVar16 >> 8;
                     uVar10 = (uint)uVar17;
                     fVar27 = _LC3;
                     if (uVar10 != 0) goto LAB_001060d6;
                     LAB_001061de:*pfVar22 = fVar27;
                  }

               }

            }
 else {
               LAB_001061a3:fVar27 = 0.0;
            }

            lVar1 = uVar20 * 2;
            uVar20 = uVar20 + 1;
            auVar26._0_4_ = auVar26._0_4_ + fVar27 * (float)(int)(short)( *(ushort*)( pIVar14 + lVar1 + lVar19 ) << 8 | *(ushort*)( pIVar14 + lVar1 + lVar19 ) >> 8 );
         }
 while ( (uint)uVar20 < uVar12 );
         pIVar14 = pIVar14 + ( ulong )(( uVar12 - 1 ) - uVar6) * 2 + 2;
      }
 else {
         uVar23 = (ulong)uVar6;
      }

      uVar25 = auVar26._0_8_;
      if ((uint)uVar23 < uVar4) {
         uVar3 = *(ushort*)( pIVar16 + 2 );
         uVar20 = 0;
         do {
            uVar8 = *(ushort*)( pIVar21 + uVar20 * 2 + uVar23 * 2 + 6 ) << 8 | *(ushort*)( pIVar21 + uVar20 * 2 + uVar23 * 2 + 6 ) >> 8;
            if ((uint)uVar8 < ( uint )(ushort)(uVar3 << 8 | uVar3 >> 8)) {
               if (param_5 == (float*)0x0) {
                  pfVar22 = (float*)0x0;
                  uVar17 = *(ushort*)pIVar16 << 8 | *(ushort*)pIVar16 >> 8;
                  uVar6 = (uint)uVar8 * (uint)uVar17;
                  fVar27 = _LC3;
                  if (uVar17 != 0) {
                     LAB_001062db:pIVar9 = pIVar16 + (ulong)uVar6 * 6 + 4;
                     uVar5 = 0;
                     fVar27 = _LC3;
                     do {
                        uVar8 = *(ushort*)( pIVar9 + 2 );
                        if ((uint)uVar5 < param_4) {
                           iVar2 = param_3[uVar5];
                           iVar18 = (int)(short)( uVar8 << 8 | uVar8 >> 8 );
                           if (( uVar8 != 0 ) && ( iVar2 != iVar18 )) {
                              if (iVar2 != 0) {
                                 uVar8 = *(ushort*)pIVar9 << 8 | *(ushort*)pIVar9 >> 8;
                                 uVar11 = *(ushort*)( pIVar9 + 4 ) << 8 | *(ushort*)( pIVar9 + 4 ) >> 8;
                                 iVar7 = (int)(short)uVar8;
                                 iVar13 = (int)(short)uVar11;
                                 if (( ( iVar18 < iVar7 ) || ( iVar13 < iVar18 ) ) || ( ( (short)uVar8 < 0 && ( 0 < (short)uVar11 ) ) )) goto LAB_00106375;
                                 if (( iVar7 < iVar2 ) && ( iVar2 < iVar13 )) {
                                    if (iVar2 < iVar18) {
                                       fVar28 = (float)( iVar2 - iVar7 ) / (float)( iVar18 - iVar7 );
                                    }
 else {
                                       fVar28 = (float)( iVar13 - iVar2 ) / (float)( iVar13 - iVar18 );
                                    }

                                    if (fVar28 != 0.0) {
                                       fVar27 = fVar27 * fVar28;
                                       goto LAB_00106375;
                                    }

                                 }

                              }

                              LAB_00106394:if (param_5 != (float*)0x0) {
                                 *pfVar22 = 0.0;
                              }

                              goto LAB_001063a1;
                           }

                        }
 else if (uVar8 != 0) goto LAB_00106394;
                        LAB_00106375:uVar5 = uVar5 + 1;
                        pIVar9 = pIVar9 + 6;
                     }
 while ( uVar17 != uVar5 );
                     if (param_5 != (float*)0x0) goto LAB_001063d9;
                  }

               }
 else {
                  pfVar22 = param_5 + uVar8;
                  fVar27 = *pfVar22;
                  if (fVar27 == _LC5) {
                     uVar17 = *(ushort*)pIVar16 << 8 | *(ushort*)pIVar16 >> 8;
                     uVar6 = (uint)uVar8 * (uint)uVar17;
                     fVar27 = _LC3;
                     if (uVar17 != 0) goto LAB_001062db;
                     LAB_001063d9:*pfVar22 = fVar27;
                  }

               }

            }
 else {
               LAB_001063a1:fVar27 = 0.0;
            }

            auVar26._0_4_ = auVar26._0_4_ + fVar27 * (float)(int)(char)pIVar14[uVar20];
            uVar25 = auVar26._0_8_;
            bVar24 = ( uVar4 - 1 ) - (uint)uVar23 != uVar20;
            uVar20 = uVar20 + 1;
         }
 while ( bVar24 );
      }

   }
 else {
      uVar25 = 0;
   }

   return uVar25;
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
         if (( ( ulong )((long)pIVar1 - lVar8) <= uVar6 ) && ( ( uVar3 <= ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)pIVar1) && ( iVar5 = *(int*)( param_1 + 0x1c ) - uVar3 ),*(int*)( param_1 + 0x1c ) = iVar5,0 < iVar5 ) )) goto LAB_001064fa;
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
   LAB_001064fa:if (( ( ( uVar6 < ( ulong )((long)pIVar7 - lVar8) ) || ( ( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pIVar7 - *(long*)( param_1 + 8 )) ) ) || ( uVar3 = ( uint )(ushort)(*(ushort*)( this + 6 ) << 8 | *(ushort*)( this + 6 ) >> 8)(uint)((int)*(undefined8*)( param_1 + 0x10 ) - (int)pIVar7) < uVar3 * 4 ) ) || ( iVar5 = *(int*)( param_1 + 0x1c ) + uVar3 * -4 ),*(int*)( param_1 + 0x1c ) = iVar5,iVar5 < 1) {
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
                  if (( ( (int)( (ulong)lVar8 >> 0x20 ) == 0 ) && ( ( ulong )((long)( pIVar9 + ( ulong )(uVar10 + 2 + (uint)uVar10) + 4 ) - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 ) ) ) && ( ( uVar3 <= ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)( pIVar9 + ( ulong )(uVar10 + 2 + (uint)uVar10) + 4 )) && ( iVar5 = *(int*)( param_1 + 0x1c ) - uVar3 ),*(int*)( param_1 + 0x1c ) = iVar5,0 < iVar5 ) )) goto LAB_00106560;
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

         LAB_00106560:pIVar7 = pIVar7 + 4;
      }
 while ( pIVar7 != this + ( ulong )(uVar2 - 1) * 4 + 0x10 );
   }

   return 1;
}
/* OT::ItemVarStoreInstancer::TEMPNAMEPLACEHOLDERVALUE(unsigned int, unsigned short) const */undefined8 OT::ItemVarStoreInstancer::operator ()(ItemVarStoreInstancer *this, uint param_1, ushort param_2) {
   byte bVar1;
   char *pcVar2;
   byte bVar3;
   sbyte sVar4;
   ushort uVar5;
   uint uVar6;
   uint uVar7;
   ulong uVar8;
   byte *pbVar9;
   byte *pbVar10;
   undefined8 uVar11;
   pcVar2 = *(char**)( this + 8 );
   if (pcVar2 == (char*)0x0) {
      uVar8 = ( ulong )(param_1 + param_2);
   }
 else {
      uVar8 = (ulong)param_1;
      if (param_1 != 0xffffffff) {
         uVar8 = ( ulong )(param_2 + param_1);
      }

      uVar7 = (uint)uVar8;
      if (*pcVar2 == '\0') {
         uVar5 = *(ushort*)( pcVar2 + 2 ) << 8 | *(ushort*)( pcVar2 + 2 ) >> 8;
         if (uVar5 == 0) goto LAB_001067c6;
         if (uVar5 <= uVar7) {
            uVar7 = uVar5 - 1;
         }

         bVar3 = pcVar2[1];
         uVar6 = ( bVar3 >> 4 & 3 ) + 1;
         pbVar9 = (byte*)( pcVar2 + ( ulong )(uVar7 * uVar6) + 4 );
         uVar7 = 0;
         pbVar10 = pbVar9 + uVar6;
         do {
            bVar1 = *pbVar9;
            pbVar9 = pbVar9 + 1;
            uVar7 = uVar7 * 0x100 + (uint)bVar1;
         }
 while ( pbVar9 != pbVar10 );
      }
 else {
         if (( *pcVar2 != '\x01' ) || ( uVar6 = uVar6 == 0 )) goto LAB_001067c6;
         uVar6 = uVar6 >> 0x18 | ( uVar6 & 0xff0000 ) >> 8 | ( uVar6 & 0xff00 ) << 8 | uVar6 << 0x18;
         if (uVar6 <= uVar7) {
            uVar7 = uVar6 - 1;
         }

         bVar3 = pcVar2[1];
         uVar6 = ( bVar3 >> 4 & 3 ) + 1;
         pbVar9 = (byte*)( pcVar2 + ( ulong )(uVar7 * uVar6) + 6 );
         uVar7 = 0;
         pbVar10 = pbVar9 + uVar6;
         do {
            bVar1 = *pbVar9;
            pbVar9 = pbVar9 + 1;
            uVar7 = uVar7 * 0x100 + (uint)bVar1;
         }
 while ( pbVar9 != pbVar10 );
      }

      sVar4 = ( bVar3 & 0xf ) + 1;
      uVar8 = ( ulong )(( 1 << sVar4 ) - 1U & uVar7 | ( uVar7 >> sVar4 ) << 0x10);
   }

   LAB_001067c6:if (*(uint*)( this + 0x18 ) != 0) {
      uVar11 = ItemVariationStore::get_delta(*(ItemVariationStore**)this, ( uint )(uVar8 >> 0x10), (uint)uVar8 & 0xffff, *(int**)( this + 0x10 ), *(uint*)( this + 0x18 ), *(float**)( this + 0x20 ));
      return uVar11;
   }

   return 0;
}
/* WARNING: Type propagation algorithm not settling *//* OT::ColorLine<OT::Variable>::static_get_color_stops(hb_color_line_t*, void*, unsigned int,
   unsigned int*, hb_color_stop_t*, void*) */ushort OT::ColorLine<OT::Variable>::static_get_color_stops(hb_color_line_t *param_1, void *param_2, uint param_3, uint *param_4, hb_color_stop_t *param_5, void *param_6) {
   ItemVarStoreInstancer *this;
   long lVar1;
   int iVar2;
   undefined8 uVar3;
   ushort uVar4;
   ushort uVar5;
   ushort uVar6;
   ushort *puVar7;
   uint uVar8;
   long lVar9;
   uint uVar10;
   ushort *puVar11;
   long in_FS_OFFSET;
   float fVar12;
   uint local_48[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar4 = *(ushort*)( (long)param_2 + 1 ) << 8 | *(ushort*)( (long)param_2 + 1 ) >> 8;
   if (( param_4 != (uint*)0x0 ) && ( param_5 != (hb_color_stop_t*)0x0 )) {
      uVar10 = *param_4;
      if (uVar10 != 0) {
         if (param_3 < uVar4) {
            this * (ItemVarStoreInstancer**)( (long)param_6 + 0x30 );
            puVar11 = (ushort*)( (long)param_2 + (ulong)param_3 * 10 + 3 );
            uVar10 = 0;
            uVar5 = uVar4;
            while (true) {
               puVar7 = (ushort*)&_hb_NullPool;
               if (param_3 + uVar10 < (uint)uVar5) {
                  puVar7 = puVar11;
               }

               uVar8 = *(uint*)( puVar7 + 3 );
               uVar8 = uVar8 >> 0x18 | ( uVar8 & 0xff0000 ) >> 8 | ( uVar8 & 0xff00 ) << 8 | uVar8 << 0x18;
               fVar12 = (float)ItemVarStoreInstancer::operator ()(this, uVar8, 0);
               *(float*)param_5 = ( (float)(int)(short)( *puVar7 << 8 | *puVar7 >> 8 ) + fVar12 ) * _LC6;
               fVar12 = (float)ItemVarStoreInstancer::operator ()(this, uVar8, 1);
               uVar5 = puVar7[2];
               uVar6 = puVar7[1] << 8 | puVar7[1] >> 8;
               local_48[0] = *(uint*)( (long)param_6 + 0x2c );
               *(undefined4*)( param_5 + 4 ) = 1;
               fVar12 = ( (float)(int)(short)( uVar5 << 8 | uVar5 >> 8 ) + fVar12 ) * _LC6;
               if (uVar6 != 0xffff) {
                  lVar1 = *(long*)( (long)param_6 + 0x10 );
                  lVar9 = *(long*)( lVar1 + 0x80 );
                  if (lVar9 != 0) {
                     lVar9 = *(long*)( lVar9 + 0x68 );
                  }

                  iVar2 = ( **(code**)( lVar1 + 0x78 ) )(lVar1, *(undefined8*)( (long)param_6 + 0x18 ), uVar6, local_48, lVar9);
                  if (iVar2 == 0) {
                     local_48[1] = 1;
                     uVar3 = hb_font_get_face(*(undefined8*)( (long)param_6 + 0x20 ));
                     hb_ot_color_palette_get_colors(uVar3, *(undefined4*)( (long)param_6 + 0x28 ), uVar6, local_48 + 1, local_48);
                  }

                  *(undefined4*)( param_5 + 4 ) = 0;
               }

               uVar10 = uVar10 + 1;
               *(uint*)( param_5 + 8 ) = local_48[0] & 0xffffff00 | ( uint )(long)(fVar12 * (float)( local_48[0] & 0xff )) & 0xff;
               if (*param_4 <= uVar10) break;
               param_5 = param_5 + 0xc;
               puVar11 = puVar11 + 5;
               if (uVar4 - param_3 == uVar10) break;
               uVar5 = *(ushort*)( (long)param_2 + 1 ) << 8 | *(ushort*)( (long)param_2 + 1 ) >> 8;
            }
;
         }
 else {
            uVar10 = 0;
         }

      }

      *param_4 = uVar10;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
}
/* WARNING: Type propagation algorithm not settling *//* OT::ColorLine<OT::NoVariable>::static_get_color_stops(hb_color_line_t*, void*, unsigned int,
   unsigned int*, hb_color_stop_t*, void*) */ushort OT::ColorLine<OT::NoVariable>::static_get_color_stops(hb_color_line_t *param_1, void *param_2, uint param_3, uint *param_4, hb_color_stop_t *param_5, void *param_6) {
   ItemVarStoreInstancer *this;
   long lVar1;
   int iVar2;
   undefined8 uVar3;
   ushort uVar4;
   ushort uVar5;
   ushort uVar6;
   ushort *puVar7;
   long lVar8;
   uint uVar9;
   ushort *puVar10;
   long in_FS_OFFSET;
   float fVar11;
   uint local_48[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar4 = *(ushort*)( (long)param_2 + 1 ) << 8 | *(ushort*)( (long)param_2 + 1 ) >> 8;
   if (( param_4 != (uint*)0x0 ) && ( param_5 != (hb_color_stop_t*)0x0 )) {
      uVar9 = *param_4;
      if (uVar9 != 0) {
         if (param_3 < uVar4) {
            this * (ItemVarStoreInstancer**)( (long)param_6 + 0x30 );
            puVar10 = (ushort*)( (long)param_2 + (ulong)param_3 * 6 + 3 );
            uVar9 = 0;
            uVar5 = uVar4;
            while (true) {
               puVar7 = (ushort*)&_hb_NullPool;
               if (param_3 + uVar9 < (uint)uVar5) {
                  puVar7 = puVar10;
               }

               fVar11 = (float)ItemVarStoreInstancer::operator ()(this, 0xffffffff, 0);
               *(float*)param_5 = ( (float)(int)(short)( *puVar7 << 8 | *puVar7 >> 8 ) + fVar11 ) * _LC6;
               fVar11 = (float)ItemVarStoreInstancer::operator ()(this, 0xffffffff, 1);
               uVar5 = puVar7[2];
               uVar6 = puVar7[1] << 8 | puVar7[1] >> 8;
               local_48[0] = *(uint*)( (long)param_6 + 0x2c );
               *(undefined4*)( param_5 + 4 ) = 1;
               fVar11 = ( (float)(int)(short)( uVar5 << 8 | uVar5 >> 8 ) + fVar11 ) * _LC6;
               if (uVar6 != 0xffff) {
                  lVar1 = *(long*)( (long)param_6 + 0x10 );
                  lVar8 = *(long*)( lVar1 + 0x80 );
                  if (lVar8 != 0) {
                     lVar8 = *(long*)( lVar8 + 0x68 );
                  }

                  iVar2 = ( **(code**)( lVar1 + 0x78 ) )(lVar1, *(undefined8*)( (long)param_6 + 0x18 ), uVar6, local_48, lVar8);
                  if (iVar2 == 0) {
                     local_48[1] = 1;
                     uVar3 = hb_font_get_face(*(undefined8*)( (long)param_6 + 0x20 ));
                     hb_ot_color_palette_get_colors(uVar3, *(undefined4*)( (long)param_6 + 0x28 ), uVar6, local_48 + 1, local_48);
                  }

                  *(undefined4*)( param_5 + 4 ) = 0;
               }

               uVar9 = uVar9 + 1;
               *(uint*)( param_5 + 8 ) = local_48[0] & 0xffffff00 | ( uint )(long)(fVar11 * (float)( local_48[0] & 0xff )) & 0xff;
               if (*param_4 <= uVar9) break;
               param_5 = param_5 + 0xc;
               puVar10 = puVar10 + 3;
               if (uVar4 - param_3 == uVar9) break;
               uVar5 = *(ushort*)( (long)param_2 + 1 ) << 8 | *(ushort*)( (long)param_2 + 1 ) >> 8;
            }
;
         }
 else {
            uVar9 = 0;
         }

      }

      *param_4 = uVar9;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
}
/* OT::TupleVariationData::decompile_points(OT::IntType<unsigned char, 1u> const*&,
   hb_vector_t<unsigned int, false>&, OT::IntType<unsigned char, 1u> const*) */undefined8 OT::TupleVariationData::decompile_points(IntType **param_1, hb_vector_t *param_2, IntType *param_3) {
   IntType IVar1;
   IntType *pIVar2;
   IntType *pIVar3;
   int iVar4;
   int iVar5;
   void *pvVar6;
   ulong uVar7;
   uint uVar8;
   byte bVar9;
   ulong uVar10;
   long lVar11;
   uint uVar12;
   uint uVar13;
   long lVar14;
   uint uVar15;
   ulong uVar16;
   bool bVar17;
   pIVar2 = *param_1;
   if (param_3 < pIVar2 + 1) {
      return 0;
   }

   *param_1 = pIVar2 + 1;
   IVar1 = *pIVar2;
   uVar8 = (uint)(byte)IVar1;
   if ((char)IVar1 < '\0') {
      if (param_3 < pIVar2 + 2) {
         return 0;
      }

      *param_1 = pIVar2 + 2;
      uVar8 = ( (byte)IVar1 & 0x7f ) << 8 | (uint)(byte)pIVar2[1];
   }

   uVar15 = *(uint*)param_2;
   if ((int)uVar15 < 0) {
      return 0;
   }

   if (uVar15 < uVar8) {
      do {
         uVar15 = ( uVar15 >> 1 ) + 8 + uVar15;
      }
 while ( uVar15 < uVar8 );
      pvVar6 = realloc(*(void**)( param_2 + 8 ), (ulong)uVar15 << 2);
      if (pvVar6 == (void*)0x0) {
         if (*(uint*)param_2 < uVar15) {
            *(uint*)param_2 = ~*(uint *)param_2;
            return 0;
         }

         *(uint*)( param_2 + 4 ) = uVar8;
      }
 else {
         *(void**)( param_2 + 8 ) = pvVar6;
         *(uint*)param_2 = uVar15;
         *(uint*)( param_2 + 4 ) = uVar8;
      }

   }
 else {
      *(uint*)( param_2 + 4 ) = uVar8;
      if (uVar8 == 0) {
         return 1;
      }

   }

   uVar15 = 0;
   iVar5 = 0;
   do {
      pIVar3 = *param_1;
      pIVar2 = pIVar3 + 1;
      if (param_3 < pIVar2) {
         return 0;
      }

      *param_1 = pIVar2;
      bVar9 = ( ( byte ) * pIVar3 & 0x7f ) + 1;
      uVar12 = bVar9 + uVar15;
      if (uVar8 < uVar12) {
         return 0;
      }

      if ((char)*pIVar3 < '\0') {
         if (param_3 < pIVar2 + ( (uint)bVar9 + (uint)bVar9 )) {
            return 0;
         }

         uVar10 = (ulong)uVar15;
         lVar14 = *(long*)( param_2 + 8 );
         lVar11 = uVar10 * -2;
         do {
            iVar5 = iVar5 + ( uint )(ushort)(*(ushort*)( pIVar3 + uVar10 * 2 + lVar11 + 1 ) << 8 | *(ushort*)( pIVar3 + uVar10 * 2 + lVar11 + 1 ) >> 8);
            *(int*)( lVar14 + uVar10 * 4 ) = iVar5;
            uVar10 = uVar10 + 1;
         }
 while ( (uint)uVar10 < uVar12 );
         uVar13 = uVar15 + 1;
         iVar4 = bVar9 - 1;
         if (uVar12 < uVar13) {
            iVar4 = 0;
         }

         lVar11 = (ulong)bVar9 * 2;
         uVar15 = uVar13 + iVar4;
         if (uVar12 < uVar13) {
            lVar11 = 2;
         }

         *param_1 = pIVar2 + lVar11;
      }
 else {
         uVar10 = (ulong)bVar9;
         if (param_3 < pIVar2 + uVar10) {
            return 0;
         }

         uVar16 = (ulong)uVar15;
         lVar11 = *(long*)( param_2 + 8 );
         uVar7 = uVar16;
         do {
            iVar5 = iVar5 + (uint)(byte)pIVar3[uVar7 + ( 1 - uVar16 )];
            *(int*)( lVar11 + uVar7 * 4 ) = iVar5;
            uVar7 = uVar7 + 1;
         }
 while ( (uint)uVar7 < uVar12 );
         bVar17 = uVar15 + 1 <= uVar12;
         uVar13 = bVar9 - 1;
         uVar12 = 0;
         if (bVar17) {
            uVar12 = uVar13;
         }

         uVar15 = uVar15 + 1 + uVar12;
         if (!bVar17) {
            uVar10 = 1;
         }

         lVar14 = (ulong)uVar13 << 2;
         if (!bVar17) {
            lVar14 = 0;
         }

         *param_1 = pIVar2 + uVar10;
         *(int*)( lVar11 + uVar16 * 4 + lVar14 ) = iVar5;
      }

   }
 while ( uVar15 < uVar8 );
   return 1;
}
/* OT::CmapSubtableFormat4::accelerator_t::get_glyph(unsigned int, unsigned int*) const */undefined8 OT::CmapSubtableFormat4::accelerator_t::get_glyph(accelerator_t *this, uint param_1, uint *param_2) {
   ushort *puVar1;
   ushort uVar2;
   int iVar3;
   int iVar4;
   ushort uVar5;
   uint uVar6;
   long lVar7;
   int iVar8;
   iVar3 = *(int*)( this + 0x28 );
   iVar8 = iVar3 + -1;
   if (-1 < iVar8) {
      iVar4 = 0;
      do {
         uVar6 = ( uint )(iVar4 + iVar8) >> 1;
         puVar1 = (ushort*)( *(long*)this + ( ulong )(uVar6 * 2) );
         uVar5 = *puVar1;
         if (( ushort )(uVar5 << 8 | uVar5 >> 8) < param_1) {
            iVar4 = uVar6 + 1;
         }
 else {
            uVar5 = puVar1[iVar3 + 1];
            if (( ushort )(uVar5 << 8 | uVar5 >> 8) <= param_1) {
               lVar7 = (long)( ulong )(uVar6 * 2) >> 1;
               uVar5 = *(ushort*)( *(long*)( this + 0x18 ) + lVar7 * 2 );
               uVar5 = uVar5 << 8 | uVar5 >> 8;
               if (uVar5 == 0) {
                  uVar5 = *(ushort*)( *(long*)( this + 0x10 ) + lVar7 * 2 );
                  uVar6 = ( ushort )(uVar5 << 8 | uVar5 >> 8) + param_1;
               }
 else {
                  uVar2 = *(ushort*)( *(long*)( this + 8 ) + lVar7 * 2 );
                  uVar6 = ( ( param_1 - iVar3 ) + (int)lVar7 + ( uint )(uVar5 >> 1) ) - ( uint )(ushort)(uVar2 << 8 | uVar2 >> 8);
                  if (*(uint*)( this + 0x2c ) <= uVar6) {
                     return 0;
                  }

                  uVar5 = *(ushort*)( *(long*)( this + 0x20 ) + (ulong)uVar6 * 2 );
                  uVar5 = uVar5 << 8 | uVar5 >> 8;
                  if (uVar5 == 0) {
                     return 0;
                  }

                  uVar2 = *(ushort*)( *(long*)( this + 0x10 ) + lVar7 * 2 );
                  uVar6 = ( uint )(ushort)(uVar2 << 8 | uVar2 >> 8) + (uint)uVar5;
               }

               if (( uVar6 & 0xffff ) == 0) {
                  return 0;
               }

               *param_2 = uVar6 & 0xffff;
               return 1;
            }

            iVar8 = uVar6 - 1;
         }

      }
 while ( iVar4 <= iVar8 );
   }

   return 0;
}
/* OT::CmapSubtableFormat4::accelerator_t::get_glyph_func(void const*, unsigned int, unsigned int*)
    */void OT::CmapSubtableFormat4::accelerator_t::get_glyph_func(void *param_1, uint param_2, uint *param_3) {
   get_glyph((accelerator_t*)param_1, param_2, param_3);
   return;
}
/* OT::VariationSelectorRecord::sanitize(hb_sanitize_context_t*, void const*) const */undefined8 OT::VariationSelectorRecord::sanitize(VariationSelectorRecord *this, hb_sanitize_context_t *param_1, void *param_2) {
   uint *puVar1;
   uint uVar2;
   uint uVar3;
   VariationSelectorRecord *pVVar4;
   uint *puVar5;
   int iVar6;
   long lVar7;
   if ((VariationSelectorRecord*)( ulong ) * (uint*)( param_1 + 0x18 ) < this + ( 0xb - *(long*)( param_1 + 8 ) )) {
      return 0;
   }

   if ((VariationSelectorRecord*)( ulong ) * (uint*)( param_1 + 0x18 ) < this + ( 7 - *(long*)( param_1 + 8 ) )) {
      return 0;
   }

   uVar3 = *(uint*)( this + 3 );
   if (uVar3 == 0) {
      lVar7 = *(long*)( param_1 + 8 );
      pVVar4 = (VariationSelectorRecord*)( ulong ) * (uint*)( param_1 + 0x18 );
   }
 else {
      puVar5 = (uint*)( ( ulong )(uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18) + (long)param_2 );
      puVar1 = puVar5 + 1;
      if (( ulong )((long)puVar1 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 )) {
         uVar3 = *puVar5;
         uVar2 = uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18;
         if (( uVar3 << 0x18 ) >> 0x1e == 0) {
            lVar7 = *(long*)( param_1 + 8 );
            pVVar4 = (VariationSelectorRecord*)( ulong ) * (uint*)( param_1 + 0x18 );
            if (( ( (VariationSelectorRecord*)( (long)puVar1 - lVar7 ) <= pVVar4 ) && ( uVar2 * 4 <= ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)puVar1) ) ) && ( iVar6 = *(int*)( param_1 + 0x1c ) + uVar2 * -4 ),*(int*)( param_1 + 0x1c ) = iVar6,0 < iVar6) goto LAB_00107092;
         }

      }

      if (0x1f < *(uint*)( param_1 + 0x2c )) {
         return 0;
      }

      *(uint*)( param_1 + 0x2c ) = *(uint*)( param_1 + 0x2c ) + 1;
      if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
         return 0;
      }

      *(undefined4*)( this + 3 ) = 0;
      lVar7 = *(long*)( param_1 + 8 );
      pVVar4 = (VariationSelectorRecord*)( ulong ) * (uint*)( param_1 + 0x18 );
   }

   LAB_00107092:if (pVVar4 < this + ( 0xb - lVar7 )) {
      return 0;
   }

   uVar3 = *(uint*)( this + 7 );
   if (uVar3 != 0) {
      puVar5 = (uint*)( (long)param_2 + ( ulong )(uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18) );
      puVar1 = puVar5 + 1;
      if (( ulong )((long)puVar1 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 )) {
         uVar3 = *puVar5;
         lVar7 = ( ulong )(uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18) * 5;
         uVar3 = (uint)lVar7;
         if (( ( (int)( (ulong)lVar7 >> 0x20 ) == 0 ) && ( ( ulong )((long)puVar1 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 ) ) ) && ( ( uVar3 <= ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)puVar1) && ( iVar6 = *(int*)( param_1 + 0x1c ) - uVar3 ),*(int*)( param_1 + 0x1c ) = iVar6,0 < iVar6 ) )) {
            return 1;
         }

      }

      if (0x1f < *(uint*)( param_1 + 0x2c )) {
         return 0;
      }

      *(uint*)( param_1 + 0x2c ) = *(uint*)( param_1 + 0x2c ) + 1;
      if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
         return 0;
      }

      *(undefined4*)( this + 7 ) = 0;
   }

   return 1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OT::CmapSubtable::get_glyph(unsigned int, unsigned int*) const */undefined8 OT::CmapSubtable::get_glyph(CmapSubtable *this, uint param_1, uint *param_2) {
   ushort uVar1;
   undefined8 uVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   int iVar6;
   long lVar7;
   CmapSubtable *pCVar8;
   int iVar9;
   long in_FS_OFFSET;
   CmapSubtable *local_48;
   CmapSubtable *local_40;
   CmapSubtable *local_38;
   CmapSubtable *local_30;
   CmapSubtable *local_28;
   uint local_20;
   uint local_1c;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   switch (*(ushort*)this << 8 | *(ushort*)this >> 8) {
      case 0:
    if ((0xff < param_1) ||
       (uVar4 = (uint)(byte)this[(ulong)param_1 + 6], this[(ulong)param_1 + 6] == (CmapSubtable)0x0)
       ) break;
    goto LAB_00107288;
      case 4:
    local_48 = this + 0xe;
    local_20 = (uint)((ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8) >> 1);
    lVar7 = (ulong)(local_20 + 1) * 2;
    local_40 = local_48 + lVar7;
    lVar7 = lVar7 + -2;
    local_1c = ((ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) - 0x10) +
               local_20 * -8 >> 1;
    local_38 = local_40 + lVar7;
    local_30 = local_38 + lVar7;
    local_28 = local_30 + lVar7;
    uVar2 = CmapSubtableFormat4::accelerator_t::get_glyph
                      ((accelerator_t *)&local_48,param_1,param_2);
    goto LAB_00107252;
      case 6:
    pCVar8 = (CmapSubtable *)&_hb_NullPool;
    uVar5 = param_1 - (ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8);
    if (uVar5 < (ushort)(*(ushort *)(this + 8) << 8 | *(ushort *)(this + 8) >> 8)) {
      pCVar8 = this + (ulong)uVar5 * 2 + 10;
    }
    goto LAB_00107238;
      case 10:
    uVar5 = *(uint *)(this + 0xc);
    pCVar8 = (CmapSubtable *)&_hb_NullPool;
    uVar4 = param_1 - (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                      uVar5 << 0x18);
    uVar5 = *(uint *)(this + 0x10);
    if (uVar4 < (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18)) {
      pCVar8 = this + (ulong)uVar4 * 2 + 0x14;
    }
LAB_00107238:
    uVar1 = *(ushort *)pCVar8 << 8 | *(ushort *)pCVar8 >> 8;
    uVar4 = (uint)uVar1;
    if (uVar1 != 0) {
LAB_00107288:
      *param_2 = uVar4;
      uVar2 = 1;
      goto LAB_00107252;
    }
    break;
      case 0xc:
    uVar5 = *(uint *)(this + 0xc);
    iVar6 = (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) - 1;
    if (-1 < iVar6) {
      iVar9 = 0;
      do {
        uVar3 = (uint)(iVar9 + iVar6) >> 1;
        pCVar8 = this + (ulong)uVar3 * 0xc + 0x10;
        uVar5 = *(uint *)pCVar8;
        uVar4 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
        if (param_1 < uVar4) {
          iVar6 = uVar3 - 1;
        }
        else {
          uVar5 = *(uint *)(pCVar8 + 4);
          if (param_1 <=
              (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18))
          goto LAB_00107379;
          iVar9 = uVar3 + 1;
        }
      } while (iVar9 <= iVar6);
    }
    uVar4 = __hb_Null_OT_CmapSubtableLongGroup >> 0x18 |
            (__hb_Null_OT_CmapSubtableLongGroup & 0xff0000) >> 8 |
            (__hb_Null_OT_CmapSubtableLongGroup & 0xff00) << 8 |
            __hb_Null_OT_CmapSubtableLongGroup << 0x18;
    if (uVar4 <= (_DAT_0012401c >> 0x18 | (_DAT_0012401c & 0xff0000) >> 8 |
                  (_DAT_0012401c & 0xff00) << 8 | _DAT_0012401c << 0x18)) {
      pCVar8 = (CmapSubtable *)&_hb_Null_OT_CmapSubtableLongGroup;
LAB_00107379:
      uVar5 = *(uint *)(pCVar8 + 8);
      uVar4 = ((uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) +
              param_1) - uVar4;
      uVar5 = uVar4;
      goto joined_r0x001073e1;
    }
    break;
      case 0xd:
    uVar5 = *(uint *)(this + 0xc);
    pCVar8 = (CmapSubtable *)&_hb_Null_OT_CmapSubtableLongGroup;
    iVar6 = (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) - 1;
    if (-1 < iVar6) {
      iVar9 = 0;
      do {
        uVar4 = (uint)(iVar9 + iVar6) >> 1;
        pCVar8 = this + (ulong)uVar4 * 0xc + 0x10;
        uVar5 = *(uint *)pCVar8;
        if (param_1 < (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                      uVar5 << 0x18)) {
          iVar6 = uVar4 - 1;
        }
        else {
          uVar5 = *(uint *)(pCVar8 + 4);
          if (param_1 <=
              (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18))
          goto LAB_001073d7;
          iVar9 = uVar4 + 1;
        }
      } while (iVar9 <= iVar6);
      pCVar8 = (CmapSubtable *)&_hb_Null_OT_CmapSubtableLongGroup;
    }
LAB_001073d7:
    uVar5 = *(uint *)(pCVar8 + 8);
    uVar4 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
joined_r0x001073e1:
    if (uVar5 != 0) goto LAB_00107288;
   }

   uVar2 = 0;
   LAB_00107252:if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* bool OT::cmap::accelerator_t::get_glyph_from_ascii<OT::CmapSubtable>(void const*, unsigned int,
   unsigned int*) */bool OT::cmap::accelerator_t::get_glyph_from_ascii<OT::CmapSubtable>(void *param_1, uint param_2, uint *param_3) {
   undefined1 uVar1;
   if (0x7f < param_2) {
      return false;
   }

   uVar1 = CmapSubtable::get_glyph((CmapSubtable*)param_1, param_2, param_3);
   return (bool)uVar1;
}
/* bool OT::cmap::accelerator_t::get_glyph_from<OT::CmapSubtable>(void const*, unsigned int,
   unsigned int*) */bool OT::cmap::accelerator_t::get_glyph_from<OT::CmapSubtable>(void *param_1, uint param_2, uint *param_3) {
   bool bVar1;
   bVar1 = (bool)CmapSubtable::get_glyph((CmapSubtable*)param_1, param_2, param_3);
   return bVar1;
}
/* bool OT::cmap::accelerator_t::get_glyph_from_symbol<OT::CmapSubtable,
   &(_hb_arabic_pua_trad_map(unsigned int))>(void const*, unsigned int, unsigned int*) */bool OT::cmap::accelerator_t::get_glyph_from_symbol<OT::CmapSubtable,&( _hb_arabic_pua_trad_map(unsigned_int) )>(void *param_1, uint param_2, uint *param_3) {
   bool bVar1;
   uint uVar2;
   bVar1 = (bool)CmapSubtable::get_glyph((CmapSubtable*)param_1, param_2, param_3);
   if (( ( bVar1 == false ) && ( param_2 < 0xfefd ) ) && ( uVar2 = ( (int)(uint)(byte)_hb_arabic_u8[( ulong )(param_2 >> 0xb) + 0x88] >> ( ( byte )(param_2 >> 8) & 4 ) & 0xfU ) << 4 | param_2 >> 6 & 0xf * (ushort*)( _hb_arabic_u16 + ( ulong )(( param_2 & 3 ) + 0x140 + (uint)(byte)_hb_arabic_u8[( ( (int)(uint)(byte)_hb_arabic_u8[( ulong )(uVar2 >> 1) + 0xa8] >> ( (char)uVar2 * '\x04' & 4U ) & 0xfU ) << 4 | param_2 >> 2 & 0xf ) + 0xd0] * 4) * 2 ) != 0 )) {
      bVar1 = (bool)CmapSubtable::get_glyph((CmapSubtable*)param_1, ( uint ) * (ushort*)( _hb_arabic_u16 + ( ulong )(( param_2 & 3 ) + 0x140 + (uint)(byte)_hb_arabic_u8[( ( (int)(uint)(byte)_hb_arabic_u8[( ulong )(uVar2 >> 1) + 0xa8] >> ( (char)uVar2 * '\x04' & 4U ) & 0xfU ) << 4 | param_2 >> 2 & 0xf ) + 0xd0] * 4) * 2 ), param_3);
      return bVar1;
   }

   return bVar1;
}
/* bool OT::cmap::accelerator_t::get_glyph_from_symbol<OT::CmapSubtable,
   &(_hb_arabic_pua_simp_map(unsigned int))>(void const*, unsigned int, unsigned int*) */bool OT::cmap::accelerator_t::get_glyph_from_symbol<OT::CmapSubtable,&( _hb_arabic_pua_simp_map(unsigned_int) )>(void *param_1, uint param_2, uint *param_3) {
   bool bVar1;
   uint uVar2;
   bVar1 = (bool)CmapSubtable::get_glyph((CmapSubtable*)param_1, param_2, param_3);
   if (( ( bVar1 == false ) && ( param_2 < 0xfefd ) ) && ( uVar2 = ( (int)(uint)(byte)_hb_arabic_u8[param_2 >> 0xd] >> ( ( byte )(param_2 >> 10) & 6 ) & 3U ) << 4 | param_2 >> 7 & 0xf * (ushort*)( _hb_arabic_u16 + ( ulong )(( param_2 & 7 ) + (uint)(byte)_hb_arabic_u8[( ( (int)(uint)(byte)_hb_arabic_u8[( ulong )(uVar2 >> 1) + 8] >> ( (char)uVar2 * '\x04' & 4U ) & 0xfU ) << 4 | param_2 >> 3 & 0xf ) + 0x28] * 8) * 2 ) != 0 )) {
      bVar1 = (bool)CmapSubtable::get_glyph((CmapSubtable*)param_1, ( uint ) * (ushort*)( _hb_arabic_u16 + ( ulong )(( param_2 & 7 ) + (uint)(byte)_hb_arabic_u8[( ( (int)(uint)(byte)_hb_arabic_u8[( ulong )(uVar2 >> 1) + 8] >> ( (char)uVar2 * '\x04' & 4U ) & 0xfU ) << 4 | param_2 >> 3 & 0xf ) + 0x28] * 8) * 2 ), param_3);
      return bVar1;
   }

   return bVar1;
}
/* bool OT::cmap::accelerator_t::get_glyph_from_symbol<OT::CmapSubtable,
   &OT::_hb_symbol_pua_map>(void const*, unsigned int, unsigned int*) */bool OT::cmap::accelerator_t::get_glyph_from_symbol<OT::CmapSubtable,&OT::_hb_symbol_pua_map>(void *param_1, uint param_2, uint *param_3) {
   bool bVar1;
   bVar1 = (bool)CmapSubtable::get_glyph((CmapSubtable*)param_1, param_2, param_3);
   if (( bVar1 == false ) && ( param_2 < 0x100 )) {
      bVar1 = (bool)CmapSubtable::get_glyph((CmapSubtable*)param_1, param_2 + 0xf000, param_3);
      return bVar1;
   }

   return bVar1;
}
/* bool OT::cmap::accelerator_t::get_glyph_from_macroman<OT::CmapSubtable>(void const*, unsigned
   int, unsigned int*) */bool OT::cmap::accelerator_t::get_glyph_from_macroman<OT::CmapSubtable>(void *param_1, uint param_2, uint *param_3) {
   undefined1 uVar1;
   char cVar2;
   uint uVar3;
   int iVar4;
   int iVar5;
   if (( param_2 < 0x80 ) && ( cVar2 = CmapSubtable::get_glyph((CmapSubtable*)param_1, param_2, param_3) ),cVar2 != '\0') {
      return (bool)cVar2;
   }

   iVar5 = 0x7f;
   iVar4 = 0;
   do {
      uVar3 = ( uint )(iVar4 + iVar5) >> 1;
      if ((ushort)param_2<*(ushort*)( unicode_to_macroman(unsigned_int) )) {
         iVar5 = uVar3 - 1;
      }
 else {
         if ((ushort)param_2 <= *(ushort*)( unicode_to_macroman(unsigned_int) )) {
            if (unicode_to_macroman(unsigned_int)::mapping[(ulong)uVar3 * 4 + 2] == 0) {
               return false;
            }

            uVar1 = CmapSubtable::get_glyph((CmapSubtable*)param_1, (uint)(byte)unicode_to_macroman(unsigned_int)::mapping[(ulong)uVar3 * 4 + 2], param_3);
            return (bool)uVar1;
         }

         iVar4 = uVar3 + 1;
      }

   }
 while ( iVar4 <= iVar5 );
   return false;
}
/* OT::CmapSubtable::sanitize(hb_sanitize_context_t*) const */ulong OT::CmapSubtable::sanitize(CmapSubtable *this, hb_sanitize_context_t *param_1) {
   long lVar1;
   ushort uVar2;
   uint uVar3;
   ulong uVar4;
   ulong uVar5;
   int iVar6;
   CmapSubtable *pCVar7;
   uint uVar8;
   bool bVar9;
   if ((CmapSubtable*)( ulong ) * (uint*)( param_1 + 0x18 ) < this + ( 2 - *(long*)( param_1 + 8 ) )) {
      return 0;
   }

   switch (*(ushort*)this << 8 | *(ushort*)this >> 8) {
      case 0:
    return (ulong)CONCAT31((int3)(*(uint *)(param_1 + 0x18) >> 8),
                           this + (0x106 - *(long *)(param_1 + 8)) <=
                           (CmapSubtable *)(ulong)*(uint *)(param_1 + 0x18));
      default:
    return 1;
      case 4:
    if ((CmapSubtable *)(ulong)*(uint *)(param_1 + 0x18) < this + (0xe - *(long *)(param_1 + 8))) {
      return 0;
    }
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)this - *(long *)(param_1 + 8))) {
      uVar4 = *(long *)(param_1 + 0x10) - (long)this;
    }
    else {
      uVar2 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
      uVar4 = *(long *)(param_1 + 0x10) - (long)this;
      if (((uint)uVar2 <= (uint)uVar4) &&
         (iVar6 = *(int *)(param_1 + 0x1c) - (uint)uVar2, *(int *)(param_1 + 0x1c) = iVar6,
         0 < iVar6)) goto LAB_001079ae;
    }
    if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
       (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
       param_1[0x28] == (hb_sanitize_context_t)0x0)) {
      return 0;
    }
    if (0xffff < uVar4) {
      uVar4 = 0xffff;
    }
    uVar2 = (ushort)uVar4;
    *(ushort *)(this + 2) = uVar2 << 8 | uVar2 >> 8;
    uVar2 = (uVar2 >> 8) << 8 | uVar2 & 0xff;
LAB_001079ae:
    uVar3 = (uint)(ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8) * 4 + 0x10;
    return (ulong)CONCAT31((int3)(uVar3 >> 8),uVar3 <= uVar2);
      case 6:
    pCVar7 = this + 10;
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pCVar7 - *(long *)(param_1 + 8))) {
      return 0;
    }
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pCVar7 - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar3 = (uint)(ushort)(*(ushort *)(this + 8) << 8 | *(ushort *)(this + 8) >> 8) * 2;
    uVar5 = (ulong)uVar3;
    if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pCVar7) < uVar3) {
      return 0;
    }
    break;
      case 10:
    pCVar7 = this + 0x14;
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pCVar7 - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar3 = *(uint *)(this + 0x10);
    uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    if ((int)uVar3 < 0) {
      return 0;
    }
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pCVar7 - *(long *)(param_1 + 8))) {
      return 0;
    }
    if (uVar3 * 2 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pCVar7)) {
      iVar6 = *(int *)(param_1 + 0x1c) + uVar3 * -2;
      *(int *)(param_1 + 0x1c) = iVar6;
      return (ulong)CONCAT31((int3)((uint)iVar6 >> 8),0 < iVar6);
    }
    return 0;
      case 0xc:
      case 0xd:
    pCVar7 = this + 0x10;
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pCVar7 - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar3 = *(uint *)(this + 0xc);
    uVar4 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18)
            * 0xc;
    uVar5 = uVar4 & 0xffffffff;
    if ((int)(uVar4 >> 0x20) != 0) {
      return 0;
    }
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pCVar7 - *(long *)(param_1 + 8))) {
      return 0;
    }
    if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pCVar7) < (uint)uVar4) {
      return 0;
    }
    break;
      case 0xe:
    pCVar7 = this + 10;
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pCVar7 - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar3 = *(uint *)(this + 6);
    lVar1 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18)
            * 0xb;
    bVar9 = (int)((ulong)lVar1 >> 0x20) != 0;
    uVar3 = (uint)lVar1;
    uVar8 = (uint)bVar9;
    if (bVar9) {
      return 0;
    }
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pCVar7 - *(long *)(param_1 + 8))) {
      return 0;
    }
    if (uVar3 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pCVar7)) {
      iVar6 = *(int *)(param_1 + 0x1c) - uVar3;
      *(int *)(param_1 + 0x1c) = iVar6;
      if (iVar6 < 1) {
        return 0;
      }
      uVar3 = *(uint *)(this + 6);
      if (uVar3 == 0) {
        return 1;
      }
      do {
        uVar4 = VariationSelectorRecord::sanitize((VariationSelectorRecord *)pCVar7,param_1,this);
        if ((char)uVar4 == '\0') {
          return uVar4;
        }
        uVar8 = uVar8 + 1;
        pCVar7 = (CmapSubtable *)((VariationSelectorRecord *)pCVar7 + 0xb);
      } while (uVar8 < (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                       uVar3 << 0x18));
      return 1;
    }
    return 0;
   }

   iVar6 = *(int*)( param_1 + 0x1c ) - (int)uVar5;
   *(int*)( param_1 + 0x1c ) = iVar6;
   return CONCAT71(( int7 )(uVar5 >> 8), 0 < iVar6);
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OT::cmap::find_subtable(unsigned int, unsigned int) const */cmap * __thiscall OT::cmap::find_subtable(cmap *this,uint param_1,uint param_2){
   ushort uVar1;
   ushort uVar2;
   uint uVar3;
   cmap *pcVar4;
   int iVar5;
   int iVar6;
   ushort uVar7;
   uVar1 = (ushort)param_1;
   pcVar4 = (cmap*)&_hb_NullPool;
   uVar7 = (ushort)param_2;
   uVar2 = *(ushort*)( this + 2 ) << 8 | *(ushort*)( this + 2 ) >> 8;
   if (uVar2 == 0) {
      LAB_00107aa5:uVar3 = *(uint*)( pcVar4 + 4 );
      if (*(uint*)( pcVar4 + 4 ) == 0) {
         return (cmap*)0x0;
      }

   }
 else {
      iVar5 = 0;
      iVar6 = uVar2 - 1;
      do {
         while (true) {
            uVar3 = ( uint )(iVar5 + iVar6) >> 1;
            pcVar4 = this + (ulong)uVar3 * 8 + 4;
            uVar2 = *(ushort*)pcVar4;
            if (( ushort )(( uVar1 >> 8 ) << 8 | uVar1 & 0xff) < ( ushort )(uVar2 << 8 | uVar2 >> 8)) break;
            if (( ushort )(uVar1 << 8 | uVar1 >> 8) == uVar2) {
               if (uVar7 == 0xffff) goto LAB_00107aa5;
               uVar2 = *(ushort*)( pcVar4 + 2 );
               if (( ushort )(( uVar7 >> 8 ) << 8 | uVar7 & 0xff) < ( ushort )(uVar2 << 8 | uVar2 >> 8)) break;
               if (( ushort )(uVar7 << 8 | uVar7 >> 8) == uVar2) goto LAB_00107aa5;
            }

            iVar5 = uVar3 + 1;
            if (iVar6 < iVar5) goto LAB_00107ac9;
         }
;
         iVar6 = uVar3 - 1;
      }
 while ( iVar5 <= iVar6 );
      LAB_00107ac9:uVar3 = _DAT_0012402c;
      if (_DAT_0012402c == 0) {
         return (cmap*)0x0;
      }

   }

   return this + ( uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18 );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OT::cmap::find_best_subtable(bool*, bool*, bool*) const */cmap * __thiscall OT::cmap::find_best_subtable(cmap *this,bool *param_1,bool *param_2,bool *param_3){
   ushort uVar1;
   uint uVar2;
   uint uVar3;
   cmap *pcVar4;
   int iVar5;
   int iVar6;
   int iVar7;
   if (param_1 != (bool*)0x0) {
      *param_1 = false;
   }

   if (param_2 != (bool*)0x0) {
      *param_2 = false;
   }

   if (param_3 != (bool*)0x0) {
      *param_3 = false;
   }

   uVar1 = *(ushort*)( this + 2 ) << 8 | *(ushort*)( this + 2 ) >> 8;
   iVar7 = uVar1 - 1;
   uVar3 = _DAT_0012402c;
   if (uVar1 == 0) {
      if (_DAT_0012402c == 0) {
         LAB_00107d59:pcVar4 = (cmap*)find_subtable(this, 0, 2);
         if (pcVar4 != (cmap*)0x0) {
            return pcVar4;
         }

         pcVar4 = (cmap*)find_subtable(this, 0, 1);
         if (pcVar4 != (cmap*)0x0) {
            return pcVar4;
         }

         pcVar4 = (cmap*)find_subtable(this, 0, 0);
         if (pcVar4 != (cmap*)0x0) {
            return pcVar4;
         }

         pcVar4 = (cmap*)find_subtable(this, 1, 0);
         if (pcVar4 != (cmap*)0x0) {
            if (param_2 != (bool*)0x0) {
               *param_2 = true;
            }

            if (param_3 == (bool*)0x0) {
               return pcVar4;
            }

            *param_3 = true;
            return pcVar4;
         }

         pcVar4 = (cmap*)find_subtable(this, 1, 0xffff);
         if (pcVar4 == (cmap*)0x0) {
            return (cmap*)&_hb_NullPool;
         }

         if (param_2 == (bool*)0x0) {
            return pcVar4;
         }

         *param_2 = true;
         return pcVar4;
      }

   }
 else {
      iVar5 = 0;
      iVar6 = iVar7;
      do {
         while (true) {
            uVar2 = ( uint )(iVar5 + iVar6) >> 1;
            pcVar4 = this + (ulong)uVar2 * 8 + 4;
            uVar1 = *(ushort*)pcVar4;
            if (( ushort )(uVar1 << 8 | uVar1 >> 8) < 4) break;
            LAB_00107b38:iVar6 = uVar2 - 1;
            if (iVar6 < iVar5) goto joined_r0x00107ba3;
         }
;
         if (uVar1 == 0x300) {
            if (*(ushort*)( pcVar4 + 2 ) != 0) goto LAB_00107b38;
            uVar3 = *(uint*)( pcVar4 + 4 );
            break;
         }

         iVar5 = uVar2 + 1;
      }
 while ( iVar5 <= iVar6 );
      joined_r0x00107ba3:if (uVar3 == 0) {
         iVar5 = 0;
         iVar6 = iVar7;
         do {
            while (true) {
               uVar3 = ( uint )(iVar5 + iVar6) >> 1;
               pcVar4 = this + (ulong)uVar3 * 8 + 4;
               uVar1 = *(ushort*)pcVar4;
               if (3 < ( ushort )(uVar1 << 8 | uVar1 >> 8)) break;
               if (uVar1 == 0x300) {
                  uVar1 = *(ushort*)( pcVar4 + 2 );
                  if (10 < ( ushort )(uVar1 << 8 | uVar1 >> 8)) break;
                  if (uVar1 == 0xa00) goto LAB_00107c01;
               }

               iVar5 = uVar3 + 1;
               if (iVar6 < iVar5) goto LAB_00107de3;
            }
;
            iVar6 = uVar3 - 1;
         }
 while ( iVar5 <= iVar6 );
         LAB_00107de3:pcVar4 = (cmap*)&_hb_NullPool;
         LAB_00107c01:uVar3 = *(uint*)( pcVar4 + 4 );
         if (uVar3 == 0) {
            iVar5 = 0;
            iVar6 = iVar7;
            do {
               uVar3 = ( uint )(iVar5 + iVar6) >> 1;
               pcVar4 = this + (ulong)uVar3 * 8 + 4;
               if (( *(short*)pcVar4 == 0 ) && ( uVar1 = *(ushort*)( pcVar4 + 2 )(ushort)(uVar1 << 8 | uVar1 >> 8) < 7 )) {
                  if (uVar1 == 0x600) goto LAB_00107c52;
                  iVar5 = uVar3 + 1;
               }
 else {
                  iVar6 = uVar3 - 1;
               }

            }
 while ( iVar5 <= iVar6 );
            pcVar4 = (cmap*)&_hb_NullPool;
            LAB_00107c52:uVar3 = *(uint*)( pcVar4 + 4 );
            if (uVar3 == 0) {
               iVar5 = 0;
               iVar6 = iVar7;
               do {
                  uVar3 = ( uint )(iVar5 + iVar6) >> 1;
                  pcVar4 = this + (ulong)uVar3 * 8 + 4;
                  if (( *(short*)pcVar4 == 0 ) && ( uVar1 = *(ushort*)( pcVar4 + 2 )(ushort)(uVar1 << 8 | uVar1 >> 8) < 5 )) {
                     if (uVar1 == 0x400) goto LAB_00107ca2;
                     iVar5 = uVar3 + 1;
                  }
 else {
                     iVar6 = uVar3 - 1;
                  }

               }
 while ( iVar5 <= iVar6 );
               pcVar4 = (cmap*)&_hb_NullPool;
               LAB_00107ca2:uVar3 = *(uint*)( pcVar4 + 4 );
               if (uVar3 == 0) {
                  iVar5 = 0;
                  iVar6 = iVar7;
                  do {
                     uVar3 = ( uint )(iVar5 + iVar6) >> 1;
                     pcVar4 = this + (ulong)uVar3 * 8 + 4;
                     uVar1 = *(ushort*)pcVar4;
                     if (( ushort )(uVar1 << 8 | uVar1 >> 8) < 4) {
                        if (uVar1 == 0x300) {
                           uVar1 = *(ushort*)( pcVar4 + 2 );
                           if (1 < ( ushort )(uVar1 << 8 | uVar1 >> 8)) goto LAB_00107cb4;
                           if (uVar1 == 0x100) goto LAB_00107d05;
                        }

                        iVar5 = uVar3 + 1;
                     }
 else {
                        LAB_00107cb4:iVar6 = uVar3 - 1;
                     }

                  }
 while ( iVar5 <= iVar6 );
                  pcVar4 = (cmap*)&_hb_NullPool;
                  LAB_00107d05:uVar3 = *(uint*)( pcVar4 + 4 );
                  if (uVar3 == 0) {
                     iVar5 = 0;
                     do {
                        uVar3 = ( uint )(iVar5 + iVar7) >> 1;
                        pcVar4 = this + (ulong)uVar3 * 8 + 4;
                        if (( *(short*)pcVar4 == 0 ) && ( uVar1 = *(ushort*)( pcVar4 + 2 )(ushort)(uVar1 << 8 | uVar1 >> 8) < 4 )) {
                           if (uVar1 == 0x300) goto LAB_00107d4e;
                           iVar5 = uVar3 + 1;
                        }
 else {
                           iVar7 = uVar3 - 1;
                        }

                     }
 while ( iVar5 <= iVar7 );
                     pcVar4 = (cmap*)&_hb_NullPool;
                     LAB_00107d4e:uVar3 = *(uint*)( pcVar4 + 4 );
                     if (uVar3 == 0) goto LAB_00107d59;
                  }

               }

            }

         }

         goto LAB_00107b7a;
      }

   }

   if (param_1 != (bool*)0x0) {
      *param_1 = true;
   }

   LAB_00107b7a:return this + ( uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18 );
}
/* OT::cmap::sanitize(hb_sanitize_context_t*) const */undefined8 OT::cmap::sanitize(cmap *this, hb_sanitize_context_t *param_1) {
   uint uVar1;
   char cVar2;
   ushort uVar3;
   int iVar4;
   cmap *pcVar5;
   pcVar5 = this + 4;
   if (( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pcVar5 - *(long*)( param_1 + 8 ))) {
      return 0;
   }

   if (( ( ( *(short*)this != 0 ) || ( ( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pcVar5 - *(long*)( param_1 + 8 )) ) ) || ( ( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pcVar5 - *(long*)( param_1 + 8 )) ) ) || ( ( uVar1 = ( uint )(ushort)(*(ushort*)( this + 2 ) << 8 | *(ushort*)( this + 2 ) >> 8)(uint)((int)*(undefined8*)( param_1 + 0x10 ) - (int)pcVar5) < uVar1 * 8 || ( iVar4 = iVar4 < 1 ) ) )) {
      return 0;
   }

   uVar3 = *(ushort*)( this + 2 ) << 8 | *(ushort*)( this + 2 ) >> 8;
   if (uVar3 != 0) {
      pcVar5 = this + 0xc;
      do {
         if (( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pcVar5 - *(long*)( param_1 + 8 ))) {
            return 0;
         }

         uVar1 = *(uint*)( pcVar5 + -4 );
         if (( uVar1 != 0 ) && ( cVar2 = CmapSubtable::sanitize((CmapSubtable*)( this + ( uVar1 >> 0x18 | ( uVar1 & 0xff0000 ) >> 8 | ( uVar1 & 0xff00 ) << 8 | uVar1 << 0x18 ) ), param_1) ),cVar2 == '\0') {
            if (0x1f < *(uint*)( param_1 + 0x2c )) {
               return 0;
            }

            *(uint*)( param_1 + 0x2c ) = *(uint*)( param_1 + 0x2c ) + 1;
            if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
               return 0;
            }

            *(undefined4*)( pcVar5 + -4 ) = 0;
         }

         pcVar5 = pcVar5 + 8;
      }
 while ( pcVar5 != this + ( ulong )(uVar3 - 1) * 8 + 0x14 );
   }

   return 1;
}
/* OT::HVARVVAR::sanitize(hb_sanitize_context_t*) const */undefined8 OT::HVARVVAR::sanitize(HVARVVAR *this, hb_sanitize_context_t *param_1) {
   HVARVVAR *pHVar1;
   long lVar2;
   char cVar3;
   uint uVar4;
   HVARVVAR *pHVar5;
   int iVar6;
   if ((HVARVVAR*)( ulong ) * (uint*)( param_1 + 0x18 ) < this + ( 4 - *(long*)( param_1 + 8 ) )) {
      return 0;
   }

   if (*(short*)this != 0x100) {
      return 0;
   }

   if ((HVARVVAR*)( ulong ) * (uint*)( param_1 + 0x18 ) < this + ( 8 - *(long*)( param_1 + 8 ) )) {
      return 0;
   }

   uVar4 = *(uint*)( this + 4 );
   if (( uVar4 != 0 ) && ( cVar3 = ItemVariationStore::sanitize((ItemVariationStore*)( this + ( uVar4 >> 0x18 | ( uVar4 & 0xff0000 ) >> 8 | ( uVar4 & 0xff00 ) << 8 | uVar4 << 0x18 ) ), param_1) ),cVar3 == '\0') {
      if (0x1f < *(uint*)( param_1 + 0x2c )) {
         return 0;
      }

      *(uint*)( param_1 + 0x2c ) = *(uint*)( param_1 + 0x2c ) + 1;
      if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
         return 0;
      }

      *(undefined4*)( this + 4 ) = 0;
   }

   if ((HVARVVAR*)( ulong ) * (uint*)( param_1 + 0x18 ) < this + ( 0xc - *(long*)( param_1 + 8 ) )) {
      return 0;
   }

   uVar4 = *(uint*)( this + 8 );
   if (uVar4 != 0) {
      pHVar5 = this + ( uVar4 >> 0x18 | ( uVar4 & 0xff0000 ) >> 8 | ( uVar4 & 0xff00 ) << 8 | uVar4 << 0x18 );
      if (pHVar5 + ( 1 - *(long*)( param_1 + 8 ) ) <= (HVARVVAR*)( ulong ) * (uint*)( param_1 + 0x18 )) {
         if (*pHVar5 == (HVARVVAR)0x0) {
            pHVar1 = pHVar5 + 4;
            if (( ulong )((long)pHVar1 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 )) {
               if (( ( ulong )((long)pHVar1 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 ) ) && ( uVar4 = ( ( (byte)pHVar5[1] >> 4 & 3 ) + 1 ) * ( uint )(ushort)(*(ushort*)( pHVar5 + 2 ) << 8 | *(ushort*)( pHVar5 + 2 ) >> 8) ),uVar4 <= ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)pHVar1)) {
                  iVar6 = *(int*)( param_1 + 0x1c ) - uVar4;
                  *(int*)( param_1 + 0x1c ) = iVar6;
                  joined_r0x0010825c:if (0 < iVar6) goto LAB_00108009;
               }

            }

         }
 else {
            if (*pHVar5 != (HVARVVAR)0x1) goto LAB_00108009;
            pHVar1 = pHVar5 + 6;
            if (( ulong )((long)pHVar1 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 )) {
               uVar4 = *(uint*)( pHVar5 + 2 );
               lVar2 = ( ulong )(( (byte)pHVar5[1] >> 4 & 3 ) + 1) * ( ulong )(uVar4 >> 0x18 | ( uVar4 & 0xff0000 ) >> 8 | ( uVar4 & 0xff00 ) << 8 | uVar4 << 0x18);
               uVar4 = (uint)lVar2;
               if (( ( (int)( (ulong)lVar2 >> 0x20 ) == 0 ) && ( ( ulong )((long)pHVar1 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 ) ) ) && ( uVar4 <= ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)pHVar1) )) {
                  iVar6 = *(int*)( param_1 + 0x1c ) - uVar4;
                  *(int*)( param_1 + 0x1c ) = iVar6;
                  goto joined_r0x0010825c;
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

      *(undefined4*)( this + 8 ) = 0;
   }

   LAB_00108009:if ((HVARVVAR*)( ulong ) * (uint*)( param_1 + 0x18 ) < this + ( 0x10 - *(long*)( param_1 + 8 ) )) {
      return 0;
   }

   uVar4 = *(uint*)( this + 0xc );
   if (uVar4 != 0) {
      pHVar5 = this + ( uVar4 >> 0x18 | ( uVar4 & 0xff0000 ) >> 8 | ( uVar4 & 0xff00 ) << 8 | uVar4 << 0x18 );
      if (pHVar5 + ( 1 - *(long*)( param_1 + 8 ) ) <= (HVARVVAR*)( ulong ) * (uint*)( param_1 + 0x18 )) {
         if (*pHVar5 == (HVARVVAR)0x0) {
            pHVar1 = pHVar5 + 4;
            if (( ulong )((long)pHVar1 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 )) {
               if (( ( ulong )((long)pHVar1 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 ) ) && ( uVar4 = ( ( (byte)pHVar5[1] >> 4 & 3 ) + 1 ) * ( uint )(ushort)(*(ushort*)( pHVar5 + 2 ) << 8 | *(ushort*)( pHVar5 + 2 ) >> 8) ),uVar4 <= ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)pHVar1)) {
                  LAB_001081bd:iVar6 = *(int*)( param_1 + 0x1c );
                  *(uint*)( param_1 + 0x1c ) = iVar6 - uVar4;
                  if (0 < (int)( iVar6 - uVar4 )) goto LAB_00108024;
               }

            }

         }
 else {
            if (*pHVar5 != (HVARVVAR)0x1) goto LAB_00108024;
            pHVar1 = pHVar5 + 6;
            if (( ulong )((long)pHVar1 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 )) {
               uVar4 = *(uint*)( pHVar5 + 2 );
               lVar2 = ( ulong )(( (byte)pHVar5[1] >> 4 & 3 ) + 1) * ( ulong )(uVar4 >> 0x18 | ( uVar4 & 0xff0000 ) >> 8 | ( uVar4 & 0xff00 ) << 8 | uVar4 << 0x18);
               uVar4 = (uint)lVar2;
               if (( ( (int)( (ulong)lVar2 >> 0x20 ) == 0 ) && ( ( ulong )((long)pHVar1 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 ) ) ) && ( uVar4 <= ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)pHVar1) )) goto LAB_001081bd;
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

      *(undefined4*)( this + 0xc ) = 0;
   }

   LAB_00108024:if ((HVARVVAR*)( ulong ) * (uint*)( param_1 + 0x18 ) < this + ( 0x14 - *(long*)( param_1 + 8 ) )) {
      return 0;
   }

   uVar4 = *(uint*)( this + 0x10 );
   if (uVar4 == 0) {
      return 1;
   }

   pHVar5 = this + ( uVar4 >> 0x18 | ( uVar4 & 0xff0000 ) >> 8 | ( uVar4 & 0xff00 ) << 8 | uVar4 << 0x18 );
   if ((HVARVVAR*)( ulong ) * (uint*)( param_1 + 0x18 ) < pHVar5 + ( 1 - *(long*)( param_1 + 8 ) )) goto LAB_001082e5;
   if (*pHVar5 == (HVARVVAR)0x0) {
      pHVar1 = pHVar5 + 4;
      if (( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pHVar1 - *(long*)( param_1 + 8 ))) goto LAB_001082e5;
      if (( ( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pHVar1 - *(long*)( param_1 + 8 )) ) || ( uVar4 = ( ( (byte)pHVar5[1] >> 4 & 3 ) + 1 ) * ( uint )(ushort)(*(ushort*)( pHVar5 + 2 ) << 8 | *(ushort*)( pHVar5 + 2 ) >> 8)(uint)((int)*(undefined8*)( param_1 + 0x10 ) - (int)pHVar1) < uVar4 )) goto LAB_001082e5;
   }
 else {
      if (*pHVar5 != (HVARVVAR)0x1) {
         return 1;
      }

      pHVar1 = pHVar5 + 6;
      if (( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pHVar1 - *(long*)( param_1 + 8 ))) goto LAB_001082e5;
      uVar4 = *(uint*)( pHVar5 + 2 );
      lVar2 = ( ulong )(( (byte)pHVar5[1] >> 4 & 3 ) + 1) * ( ulong )(uVar4 >> 0x18 | ( uVar4 & 0xff0000 ) >> 8 | ( uVar4 & 0xff00 ) << 8 | uVar4 << 0x18);
      uVar4 = (uint)lVar2;
      if (( ( (int)( (ulong)lVar2 >> 0x20 ) != 0 ) || ( ( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pHVar1 - *(long*)( param_1 + 8 )) ) ) || ( ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)pHVar1) < uVar4 )) goto LAB_001082e5;
   }

   iVar6 = *(int*)( param_1 + 0x1c );
   *(uint*)( param_1 + 0x1c ) = iVar6 - uVar4;
   if (0 < (int)( iVar6 - uVar4 )) {
      return 1;
   }

   LAB_001082e5:if (( *(uint*)( param_1 + 0x2c ) < 0x20 ) && ( *(uint*)( param_1 + 0x2c ) = *(uint*)( param_1 + 0x2c ) + 1 ),param_1[0x28] != (hb_sanitize_context_t)0x0) {
      *(undefined4*)( this + 0x10 ) = 0;
      return 1;
   }

   return 0;
}
/* OT::VVAR::sanitize(hb_sanitize_context_t*) const */undefined4 OT::VVAR::sanitize(VVAR *this, hb_sanitize_context_t *param_1) {
   VVAR *pVVar1;
   long lVar2;
   undefined4 uVar3;
   uint uVar4;
   int iVar5;
   VVAR *pVVar6;
   uVar3 = HVARVVAR::sanitize((HVARVVAR*)this, param_1);
   if ((char)uVar3 == '\0') {
      return 0;
   }

   if ((VVAR*)( ulong ) * (uint*)( param_1 + 0x18 ) < this + ( 0x18 - *(long*)( param_1 + 8 ) )) {
      return 0;
   }

   uVar4 = *(uint*)( this + 0x14 );
   if (uVar4 == 0) {
      return uVar3;
   }

   pVVar6 = this + ( uVar4 >> 0x18 | ( uVar4 & 0xff0000 ) >> 8 | ( uVar4 & 0xff00 ) << 8 | uVar4 << 0x18 );
   if ((VVAR*)( ulong ) * (uint*)( param_1 + 0x18 ) < pVVar6 + ( 1 - *(long*)( param_1 + 8 ) )) goto LAB_00108490;
   if (*pVVar6 == (VVAR)0x0) {
      pVVar1 = pVVar6 + 4;
      if (( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pVVar1 - *(long*)( param_1 + 8 ))) goto LAB_00108490;
      if (( ( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pVVar1 - *(long*)( param_1 + 8 )) ) || ( uVar4 = ( ( (byte)pVVar6[1] >> 4 & 3 ) + 1 ) * ( uint )(ushort)(*(ushort*)( pVVar6 + 2 ) << 8 | *(ushort*)( pVVar6 + 2 ) >> 8)(uint)((int)*(undefined8*)( param_1 + 0x10 ) - (int)pVVar1) < uVar4 )) goto LAB_00108490;
      iVar5 = *(int*)( param_1 + 0x1c ) - uVar4;
      *(int*)( param_1 + 0x1c ) = iVar5;
   }
 else {
      if (*pVVar6 != (VVAR)0x1) {
         return uVar3;
      }

      pVVar1 = pVVar6 + 6;
      if (( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pVVar1 - *(long*)( param_1 + 8 ))) goto LAB_00108490;
      uVar4 = *(uint*)( pVVar6 + 2 );
      lVar2 = ( ulong )(( (byte)pVVar6[1] >> 4 & 3 ) + 1) * ( ulong )(uVar4 >> 0x18 | ( uVar4 & 0xff0000 ) >> 8 | ( uVar4 & 0xff00 ) << 8 | uVar4 << 0x18);
      uVar4 = (uint)lVar2;
      if (( ( (int)( (ulong)lVar2 >> 0x20 ) != 0 ) || ( ( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pVVar1 - *(long*)( param_1 + 8 )) ) ) || ( ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)pVVar1) < uVar4 )) goto LAB_00108490;
      iVar5 = *(int*)( param_1 + 0x1c ) - uVar4;
      *(int*)( param_1 + 0x1c ) = iVar5;
   }

   if (0 < iVar5) {
      return uVar3;
   }

   LAB_00108490:if (( *(uint*)( param_1 + 0x2c ) < 0x20 ) && ( *(uint*)( param_1 + 0x2c ) = *(uint*)( param_1 + 0x2c ) + 1 ),param_1[0x28] != (hb_sanitize_context_t)0x0) {
      *(undefined4*)( this + 0x14 ) = 0;
      return uVar3;
   }

   return 0;
}
/* OT::gvar::sanitize_shallow(hb_sanitize_context_t*) const */undefined8 OT::gvar::sanitize_shallow(gvar *this, hb_sanitize_context_t *param_1) {
   gvar *pgVar1;
   ulong uVar2;
   int iVar3;
   uint uVar4;
   uint uVar5;
   pgVar1 = this + 0x14;
   if (( ( ( ulong )((long)pgVar1 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 ) ) && ( *(short*)this == 0x100 ) ) && ( iVar3 = ( uint )(ushort)(*(ushort*)( this + 6 ) << 8 | *(ushort*)( this + 6 ) >> 8) * ( uint )(ushort)(*(ushort*)( this + 4 ) << 8 | *(ushort*)( this + 4 ) >> 8) ),this + ( 0xc - *(long*)( param_1 + 8 ) ) <= (gvar*)( ulong ) * (uint*)( param_1 + 0x18 )) {
      uVar4 = *(uint*)( this + 8 );
      if (-1 < iVar3) {
         if (( ( ulong )((long)( this + ( uVar4 >> 0x18 | ( uVar4 & 0xff0000 ) >> 8 | ( uVar4 & 0xff00 ) << 8 | uVar4 << 0x18 ) ) - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 ) ) && ( ( uint )(iVar3 * 2) <= ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)( this + ( uVar4 >> 0x18 | ( uVar4 & 0xff0000 ) >> 8 | ( uVar4 & 0xff00 ) << 8 | uVar4 << 0x18 ) )) )) {
            iVar3 = *(int*)( param_1 + 0x1c ) + iVar3 * -2;
            *(int*)( param_1 + 0x1c ) = iVar3;
            if (0 < iVar3) {
               uVar4 = *(int*)( param_1 + 0x38 ) + 1;
               if (( (byte)this[0xf] & 1 ) == 0) {
                  uVar5 = uVar4 * 2;
                  if ((int)uVar4 < 0) {
                     return 0;
                  }

               }
 else {
                  uVar5 = uVar4 * 4;
                  if (uVar4 >> 0x1e != 0) {
                     return 0;
                  }

               }

               uVar2 = (long)pgVar1 - *(long*)( param_1 + 8 );
               if (( uVar2 <= *(uint*)( param_1 + 0x18 ) ) && ( uVar5 <= ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)pgVar1) )) {
                  *(uint*)( param_1 + 0x1c ) = iVar3 - uVar5;
                  return CONCAT71(( int7 )(uVar2 >> 8), 0 < (int)( iVar3 - uVar5 ));
               }

            }

         }

      }

   }

   return 0;
}
/* OT::gvar::accelerator_t::accelerator_t(hb_face_t*) */void OT::gvar::accelerator_t::accelerator_t(accelerator_t *this, hb_face_t *param_1) {
   int *piVar1;
   uint uVar2;
   gvar *this_00;
   char cVar3;
   int iVar4;
   int iVar5;
   undefined *puVar6;
   long lVar7;
   undefined *puVar8;
   void *pvVar9;
   ushort uVar10;
   ushort *puVar11;
   int iVar12;
   int *piVar13;
   int *piVar14;
   int *piVar15;
   ulong uVar16;
   undefined *puVar17;
   uint uVar18;
   ushort uVar19;
   long in_FS_OFFSET;
   bool bVar20;
   undefined4 local_88[2];
   undefined1 local_80[16];
   uint local_70;
   uint local_6c;
   undefined4 local_68;
   undefined4 local_64;
   char local_60;
   int local_5c;
   long local_58;
   undefined4 local_50;
   undefined1 local_4c;
   undefined1 local_4b;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   *(undefined8*)( this + 0x10 ) = 0;
   *(undefined8*)( this + 0x18 ) = 0;
   local_68 = 0;
   local_60 = '\0';
   local_4b = 0;
   local_50 = hb_face_get_glyph_count(param_1);
   local_4c = 1;
   puVar6 = (undefined*)hb_face_reference_table(param_1, 0x67766172);
   lVar7 = hb_blob_reference(puVar6);
   local_58 = lVar7;
   while (true) {
      local_70 = *(uint*)( lVar7 + 0x18 );
      this_00 = *(gvar**)( lVar7 + 0x10 );
      local_6c = local_70 * 0x40;
      if (local_70 >> 0x1a == 0) {
         if (0x3fffffff < local_6c) {
            local_6c = 0x3fffffff;
         }

         if (local_6c < 0x4000) {
            local_6c = 0x4000;
         }

      }
 else {
         local_6c = 0x3fffffff;
      }

      local_80._8_8_ = this_00 + local_70;
      local_80._0_8_ = this_00;
      local_5c = 0;
      local_88[0] = 0;
      local_64 = 0;
      if (this_00 == (gvar*)0x0) {
         hb_blob_destroy(lVar7);
         goto LAB_00108773;
      }

      cVar3 = sanitize_shallow(this_00, (hb_sanitize_context_t*)local_88);
      lVar7 = local_58;
      if (cVar3 != '\0') {
         if (local_5c == 0) {
            hb_blob_destroy(local_58);
         }
 else {
            local_5c = 0;
            cVar3 = sanitize_shallow(this_00, (hb_sanitize_context_t*)local_88);
            if (local_5c != 0) {
               hb_blob_destroy(local_58);
               goto LAB_0010893f;
            }

            hb_blob_destroy(local_58);
            local_58 = 0;
            local_70 = 0;
            local_80 = (undefined1[16])0x0;
            if (cVar3 == '\0') goto LAB_0010893f;
         }

         hb_blob_make_immutable(puVar6);
         goto LAB_00108773;
      }

      if (( local_5c == 0 ) || ( local_60 != '\0' )) break;
      local_80._0_8_ = hb_blob_get_data_writable(puVar6, 0);
      local_80._8_8_ = ( ulong ) * (uint*)( puVar6 + 0x18 ) + local_80._0_8_;
      if (local_80._0_8_ == 0) break;
      local_60 = '\x01';
   }
;
   hb_blob_destroy(lVar7);
   LAB_0010893f:hb_blob_destroy(puVar6);
   puVar6 = (undefined*)hb_blob_get_empty();
   LAB_00108773:*(undefined**)this = puVar6;
   puVar8 = &_hb_NullPool;
   if (puVar6 != (undefined*)0x0) {
      puVar8 = puVar6;
   }

   puVar11 = (ushort*)&_hb_NullPool;
   if (0x13 < *(uint*)( puVar8 + 0x18 )) {
      puVar11 = *(ushort**)( puVar8 + 0x10 );
   }

   iVar4 = ( uint )(ushort)(*puVar11 << 8 | *puVar11 >> 8) * 0x10000 + ( uint )(ushort)(puVar11[1] << 8 | puVar11[1] >> 8);
   if (( iVar4 != 0 ) && ( iVar4 = iVar4 == -1 )) {
      iVar4 = hb_face_t::load_num_glyphs();
      puVar6 = *(undefined**)this;
   }

   *(int*)( this + 8 ) = iVar4;
   uVar18 = *(uint*)( this + 0x10 );
   puVar8 = &_hb_NullPool;
   if (puVar6 != (undefined*)0x0) {
      puVar8 = puVar6;
   }

   puVar17 = &_hb_NullPool;
   if (0x13 < *(uint*)( puVar8 + 0x18 )) {
      puVar17 = *(undefined**)( puVar8 + 0x10 );
   }

   uVar2 = *(uint*)( puVar17 + 8 );
   if (-1 < (int)uVar18) {
      uVar19 = *(ushort*)( puVar17 + 6 ) << 8 | *(ushort*)( puVar17 + 6 ) >> 8;
      if (uVar18 < uVar19) {
         do {
            uVar18 = ( uVar18 >> 1 ) + 8 + uVar18;
         }
 while ( uVar18 < uVar19 );
         pvVar9 = realloc(*(void**)( this + 0x18 ), (ulong)uVar18 << 3);
         if (pvVar9 == (void*)0x0) {
            if (*(uint*)( this + 0x10 ) < uVar18) {
               *(uint*)( this + 0x10 ) = ~*(uint *)(this + 0x10);
               goto LAB_001088c1;
            }

         }
 else {
            *(void**)( this + 0x18 ) = pvVar9;
            *(uint*)( this + 0x10 ) = uVar18;
         }

         puVar6 = *(undefined**)this;
      }

      *(uint*)( this + 0x14 ) = (uint)uVar19;
      if (puVar6 == (undefined*)0x0) {
         puVar6 = &_hb_NullPool;
      }

      puVar8 = &_hb_NullPool;
      if (0x13 < *(uint*)( puVar6 + 0x18 )) {
         puVar8 = *(undefined**)( puVar6 + 0x10 );
      }

      uVar10 = *(ushort*)( puVar8 + 4 ) << 8 | *(ushort*)( puVar8 + 4 ) >> 8;
      if (uVar19 != 0) {
         piVar15 = *(int**)( this + 0x18 );
         uVar16 = 0;
         piVar13 = piVar15 + 2;
         piVar1 = piVar13 + ( ulong )(uVar19 - 1) * 2;
         if (uVar10 == 0) goto LAB_001088a8;
         LAB_00108848:iVar4 = -1;
         lVar7 = 0;
         iVar12 = -1;
         do {
            while (piVar14 = piVar13,*(short*)( puVar17 + lVar7 * 2 + ( ulong )(uVar2 >> 0x18 | ( uVar2 & 0xff0000 ) >> 8 | ( uVar2 & 0xff00 ) << 8 | uVar2 << 0x18) + uVar16 * 2 ) == 0) {
               LAB_00108867:lVar7 = lVar7 + 1;
               if ((uint)uVar10 <= (uint)lVar7) goto LAB_00108888;
            }
;
            iVar5 = (int)lVar7;
            if (iVar12 != -1) {
               bVar20 = iVar4 != -1;
               iVar4 = iVar5;
               if (bVar20) goto LAB_001088a8;
               goto LAB_00108867;
            }

            lVar7 = lVar7 + 1;
            iVar12 = iVar5;
         }
 while ( (uint)lVar7 < (uint)uVar10 );
         LAB_00108888:do {
            *piVar15 = iVar12;
            uVar16 = ( ulong )((int)uVar16 + (uint)uVar10);
            piVar15[1] = iVar4;
            if (piVar14 == piVar1) break;
            piVar13 = piVar14 + 2;
            piVar15 = piVar14;
            if (uVar10 != 0) goto LAB_00108848;
            LAB_001088a8:iVar4 = -1;
            iVar12 = -1;
            piVar14 = piVar13;
         }
 while ( true );
      }

   }

   LAB_001088c1:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* OT::glyf_impl::SimpleGlyph::trim_padding() const */undefined1[16];OT::glyf_impl::SimpleGlyph::trim_padding (SimpleGlyph *this) {
   byte bVar1;
   long lVar2;
   int iVar3;
   ushort *puVar4;
   uint uVar5;
   int iVar6;
   ushort *puVar7;
   int iVar8;
   uint uVar9;
   int iVar10;
   ushort *puVar11;
   uint uVar12;
   undefined1 auVar13[16];
   lVar2 = *(long*)( this + 8 );
   uVar5 = *(uint*)( this + 0x10 );
   puVar11 = (ushort*)( (ulong)uVar5 + lVar2 );
   puVar4 = (ushort*)( ( ulong )((short)( **(ushort**)this << 8 | **(ushort**)this >> 8 ) * 2 + 10) + lVar2 );
   if (puVar4 + 1 < puVar11) {
      uVar9 = 0;
      iVar10 = 0;
      uVar12 = ( ushort )(puVar4[-1] << 8 | puVar4[-1] >> 8) + 1;
      puVar4 = (ushort*)( (long)puVar4 + ( ulong )(ushort)(*puVar4 << 8 | *puVar4 >> 8) + 2 );
      do {
         puVar7 = puVar4;
         if (puVar11 <= puVar4) break;
         bVar1 = ( byte ) * puVar4;
         puVar7 = (ushort*)( (long)puVar4 + 1 );
         if (( bVar1 & 8 ) == 0) {
            iVar8 = 1;
         }
 else {
            if (puVar11 <= puVar7) goto LAB_00108ad0;
            puVar7 = puVar4 + 1;
            iVar8 = *(byte*)( (long)puVar4 + 1 ) + 1;
         }

         iVar3 = 1;
         if (( bVar1 & 2 ) == 0) {
            iVar3 = ( ( bVar1 >> 4 ^ 1 ) & 1 ) * 2;
         }

         iVar6 = 1;
         if (( bVar1 & 4 ) == 0) {
            iVar6 = ( ( bVar1 >> 5 ^ 1 ) & 1 ) * 2;
         }

         uVar9 = uVar9 + iVar8;
         iVar10 = iVar10 + ( iVar3 + iVar6 ) * iVar8;
         puVar4 = puVar7;
      }
 while ( uVar9 < uVar12 );
      if (uVar9 == uVar12) {
         uVar9 = ( iVar10 + uVar5 ) - ( (int)puVar11 - (int)puVar7 );
         if (uVar9 <= uVar5) {
            uVar5 = uVar9;
         }

         auVar13._8_4_ = uVar5;
         auVar13._0_8_ = lVar2;
         auVar13._12_4_ = 0;
         return auVar13;
      }

   }

   LAB_00108ad0:return ZEXT816(0);
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OT::glyf_impl::SimpleGlyph::get_contour_points(contour_point_vector_t&, bool) const */ulong OT::glyf_impl::SimpleGlyph::get_contour_points(SimpleGlyph *this, contour_point_vector_t *param_1, bool param_2) {
   byte bVar1;
   float fVar2;
   ushort uVar3;
   ushort *puVar4;
   void *pvVar5;
   float *pfVar6;
   ushort *puVar7;
   float *pfVar8;
   ushort *puVar9;
   uint uVar10;
   long lVar11;
   undefined7 in_register_00000011;
   float *pfVar12;
   float *pfVar13;
   uint uVar14;
   uint uVar15;
   uint uVar16;
   ulong uVar17;
   ulong uVar18;
   ushort *puVar19;
   int iVar20;
   ushort uVar21;
   byte local_49;
   puVar9 = *(ushort**)this;
   puVar7 = puVar9 + 5;
   uVar21 = *puVar9 << 8 | *puVar9 >> 8;
   lVar11 = (long)(short)uVar21;
   puVar19 = puVar7 + lVar11;
   if (puVar19 < *(ushort**)( this + 8 )) {
      return 0;
   }

   uVar18 = CONCAT71(in_register_00000011, param_2) & 0xffffffff;
   puVar4 = (ushort*)( (long)*(ushort**)( this + 8 ) + ( ulong ) * (uint*)( this + 0x10 ) );
   if (puVar4 < puVar19) {
      return 0;
   }

   if (( uint )((int)puVar4 - (int)puVar19) < 2) {
      return 0;
   }

   uVar16 = *(uint*)( param_1 + 4 );
   uVar3 = puVar9[lVar11 + 4] << 8 | puVar9[lVar11 + 4] >> 8;
   iVar20 = uVar3 + 1;
   uVar14 = uVar16 + 5 + (uint)uVar3;
   uVar10 = *(uint*)param_1;
   if ((int)uVar10 < 0) {
      return 0;
   }

   if (uVar14 < uVar16) {
      uVar14 = uVar16;
   }

   if (uVar10 < uVar14) {
      if (0x15555555 < uVar14) goto LAB_00108b6b;
      pvVar5 = *(void**)( param_1 + 8 );
      LAB_00108be4:pvVar5 = realloc(pvVar5, (ulong)uVar14 * 0xc);
      if (pvVar5 != (void*)0x0) {
         LAB_00108c2e:*(void**)( param_1 + 8 ) = pvVar5;
         *(uint*)param_1 = uVar14;
         uVar10 = uVar14;
         uVar15 = *(uint*)( param_1 + 4 );
         goto LAB_00108c3c;
      }

      uVar10 = *(uint*)param_1;
      if (uVar10 < uVar14) goto LAB_00108b6b;
      uVar17 = ( ulong )(uint)(iVar20 + *(int*)( param_1 + 4 ));
      if (iVar20 + *(int*)( param_1 + 4 ) < 0) {
         uVar17 = 0;
      }

      if ((int)uVar10 < 0) {
         return 0;
      }

   }
 else {
      uVar15 = uVar16;
      if (uVar14<uVar10> > 2) {
         if (0x15555555 < uVar14) goto LAB_00108b6b;
         pvVar5 = *(void**)( param_1 + 8 );
         if (uVar14 != 0) goto LAB_00108be4;
         free(pvVar5);
         pvVar5 = (void*)0x0;
         goto LAB_00108c2e;
      }

      LAB_00108c3c:uVar17 = ( ulong )(uVar15 + iVar20);
      if ((int)( uVar15 + iVar20 ) < 0) {
         uVar17 = 0;
      }

   }

   uVar15 = (uint)uVar17;
   uVar14 = uVar10;
   if (uVar10 < uVar15) {
      do {
         uVar14 = uVar14 + 8 + ( uVar14 >> 1 );
      }
 while ( uVar14 < uVar15 );
      if (0x15555555 < uVar14) {
         LAB_00108b6b:*(uint*)param_1 = ~uVar10;
         return 0;
      }

      pvVar5 = realloc(*(void**)( param_1 + 8 ), (ulong)uVar14 * 0xc);
      if (pvVar5 != (void*)0x0) {
         *(void**)( param_1 + 8 ) = pvVar5;
         *(uint*)param_1 = uVar14;
         goto LAB_00108c54;
      }

      uVar10 = *(uint*)param_1;
      if (uVar10 < uVar14) goto LAB_00108b6b;
   }

   pvVar5 = *(void**)( param_1 + 8 );
   LAB_00108c54:*(uint*)( param_1 + 4 ) = uVar15;
   if (uVar16 != 0) {
      uVar17 = 0;
      if (uVar16 <= uVar15) {
         uVar17 = ( ulong )(uVar15 - uVar16);
      }

      pvVar5 = (void*)( (long)pvVar5 + (ulong)uVar16 * 0xc );
   }

   if ((char)uVar18 != '\0') {
      return uVar18;
   }

   pfVar6 = (float*)memset(pvVar5, 0, ( ulong )(uint)(iVar20 * 0xc));
   uVar16 = (uint)uVar17;
   if (0 < (short)uVar21) {
      puVar4 = puVar7;
      do {
         uVar3 = *puVar4 << 8 | *puVar4 >> 8;
         if (uVar3 < uVar16) {
            pfVar8 = pfVar6 + (ulong)uVar3 * 3;
         }
 else {
            __hb_CrapPool = __hb_NullPool;
            _strlen = _memcpy;
            pfVar8 = (float*)&_hb_CrapPool;
         }

         puVar4 = puVar4 + 1;
         *(undefined1*)( (long)pfVar8 + 9 ) = 1;
      }
 while ( puVar9 + ( ulong )(uVar21 - 1) + 6 != puVar4 );
   }

   puVar7 = (ushort*)( lVar11 * 2 + 2 + ( ulong )(ushort)(*puVar19 << 8 | *puVar19 >> 8) + (long)puVar7 );
   if (puVar7 < *(ushort**)( this + 8 )) {
      return 0;
   }

   puVar19 = (ushort*)( (long)*(ushort**)( this + 8 ) + ( ulong ) * (uint*)( this + 0x10 ) );
   if (puVar19 <= puVar7) {
      return 0;
   }

   uVar10 = 0;
   LAB_00108d2c:pfVar8 = pfVar6 + (ulong)uVar10 * 3 + 2;
   while (puVar9 = puVar7,uVar10 < uVar16) {
      puVar4 = (ushort*)( (long)puVar9 + 1 );
      if (puVar19 < puVar4) {
         return 0;
      }

      bVar1 = ( byte ) * puVar9;
      uVar10 = uVar10 + 1;
      *(byte*)pfVar8 = bVar1;
      puVar7 = puVar4;
      pfVar8 = pfVar8 + 3;
      if (( bVar1 & 8 ) != 0) goto LAB_00108ec0;
   }
;
   iVar20 = 0;
   pfVar8 = pfVar6 + uVar17 * 3;
   pfVar12 = pfVar6;
   if (pfVar8 == pfVar6) goto LAB_00108f9f;
   do {
      fVar2 = pfVar12[2];
      if (( (uint)fVar2 & 2 ) == 0) {
         puVar7 = puVar9;
         if (( (uint)fVar2 & 0x10 ) == 0) {
            puVar7 = puVar9 + 1;
            if (puVar19 < puVar7) {
               return 0;
            }

            iVar20 = iVar20 + (short)( *puVar9 << 8 | *puVar9 >> 8 );
         }

      }
 else {
         puVar7 = (ushort*)( (long)puVar9 + 1 );
         if (puVar19 < puVar7) {
            return 0;
         }

         if (( (uint)fVar2 & 0x10 ) == 0) {
            iVar20 = iVar20 - ( uint )(byte) * puVar9;
         }
 else {
            iVar20 = iVar20 + ( uint )(byte) * puVar9;
         }

      }

      pfVar13 = pfVar12 + 3;
      *pfVar12 = (float)iVar20;
      puVar9 = puVar7;
      pfVar12 = pfVar13;
   }
 while ( pfVar8 != pfVar13 );
   iVar20 = 0;
   do {
      fVar2 = pfVar6[2];
      local_49 = param_2;
      if (( (uint)fVar2 & 4 ) == 0) {
         puVar9 = puVar7;
         if (( (uint)fVar2 & 0x20 ) == 0) {
            puVar9 = puVar7 + 1;
            if (puVar19 < puVar9) goto LAB_00108fa4;
            iVar20 = iVar20 + (short)( *puVar7 << 8 | *puVar7 >> 8 );
         }

      }
 else {
         puVar9 = (ushort*)( (long)puVar7 + 1 );
         if (puVar19 < puVar9) goto LAB_00108fa4;
         if (( (uint)fVar2 & 0x20 ) == 0) {
            iVar20 = iVar20 - ( uint )(byte) * puVar7;
         }
 else {
            iVar20 = iVar20 + ( uint )(byte) * puVar7;
         }

      }

      pfVar12 = pfVar6 + 3;
      pfVar6[1] = (float)iVar20;
      puVar7 = puVar9;
      pfVar6 = pfVar12;
   }
 while ( pfVar8 != pfVar12 );
   LAB_00108f9f:local_49 = 1;
   LAB_00108fa4:return (ulong)local_49;
   LAB_00108ec0:puVar7 = puVar9 + 1;
   if (puVar19 < puVar7) {
      return 0;
   }

   uVar18 = ( ulong )(*(byte*)puVar4 + uVar10);
   if (uVar16 < *(byte*)puVar4 + uVar10) {
      uVar18 = uVar17;
   }

   uVar14 = (uint)uVar18;
   if (uVar10 < uVar14) {
      pfVar8 = pfVar6 + (ulong)uVar10 * 3 + 2;
      pfVar12 = pfVar6 + ( ( ulong )(( uVar14 - uVar10 ) - 1) + (ulong)uVar10 ) * 3 + 5;
      pfVar13 = pfVar8;
      uVar10 = uVar14;
      if (( (int)pfVar12 - (int)pfVar8 & 4U ) != 0) {
         *(byte*)pfVar8 = bVar1;
         pfVar13 = pfVar8 + 3;
         if (pfVar12 == pfVar8 + 3) goto LAB_00108d2c;
      }

      do {
         *(byte*)pfVar13 = bVar1;
         pfVar8 = pfVar13 + 6;
         *(byte*)( pfVar13 + 3 ) = bVar1;
         pfVar13 = pfVar8;
      }
 while ( pfVar12 != pfVar8 );
   }

   goto LAB_00108d2c;
}
/* OT::glyf_accelerator_t::glyph_for_gid(unsigned int, bool) const */undefined1(*)[16];OT::glyf_accelerator_t::glyph_for_gid(uint param_1, bool param_2) {
   ushort uVar1;
   long lVar2;
   undefined1 auVar3[12];
   undefined8 uVar4;
   uint uVar5;
   undefined *puVar6;
   ushort *puVar7;
   ushort *puVar8;
   char in_CL;
   ushort uVar9;
   int iVar10;
   undefined4 uVar11;
   uint in_EDX;
   uint uVar12;
   undefined7 in_register_00000031;
   long lVar13;
   undefined4 in_register_0000003c;
   undefined1(*pauVar14)[16];
   long in_FS_OFFSET;
   undefined1 auVar15[16];
   ushort *local_38;
   ushort *local_30;
   uint local_28;
   undefined4 local_24;
   long local_20;
   pauVar14 = (undefined1(*) [16])CONCAT44(in_register_0000003c, param_1);
   lVar13 = CONCAT71(in_register_00000031, param_2);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < *(uint*)( lVar13 + 0x1c )) {
      puVar6 = *(undefined**)( lVar13 + 0x20 );
      if (puVar6 == (undefined*)0x0) {
         puVar6 = &_hb_NullPool;
      }

      lVar2 = *(long*)( puVar6 + 0x10 );
      if (*(char*)( lVar13 + 0x18 ) == '\0') {
         uVar5 = *(uint*)( lVar2 + (ulong)in_EDX * 4 );
         uVar12 = *(uint*)( lVar2 + ( ulong )(in_EDX + 1) * 4 );
         uVar5 = uVar5 >> 0x18 | ( uVar5 & 0xff0000 ) >> 8 | ( uVar5 & 0xff00 ) << 8 | uVar5 << 0x18;
         uVar12 = uVar12 >> 0x18 | ( uVar12 & 0xff0000 ) >> 8 | ( uVar12 & 0xff00 ) << 8 | uVar12 << 0x18;
      }
 else {
         uVar9 = *(ushort*)( lVar2 + (ulong)in_EDX * 2 );
         uVar1 = *(ushort*)( lVar2 + ( ulong )(in_EDX + 1) * 2 );
         uVar5 = ( uint )(ushort)(uVar9 << 8 | uVar9 >> 8) * 2;
         uVar12 = ( uint )(ushort)(uVar1 << 8 | uVar1 >> 8) * 2;
      }

      if (uVar5 <= uVar12) {
         puVar6 = *(undefined**)( lVar13 + 0x28 );
         if (puVar6 == (undefined*)0x0) {
            puVar6 = &_hb_NullPool;
         }

         if (uVar12 <= *(uint*)( puVar6 + 0x18 )) {
            uVar12 = uVar12 - uVar5;
            puVar7 = (ushort*)( (ulong)uVar5 + *(long*)( puVar6 + 0x10 ) );
            auVar3._8_4_ = uVar12;
            auVar3._0_8_ = puVar7;
            puVar8 = (ushort*)&_hb_NullPool;
            if (9 < uVar12) {
               puVar8 = puVar7;
            }

            uVar9 = *puVar8 << 8 | *puVar8 >> 8;
            iVar10 = (int)(short)uVar9;
            if (uVar9 == 0) {
               joined_r0x001091c3:if (in_CL != '\0') {
                  uVar11 = 0;
                  LAB_00109150:puVar8 = auVar3._0_8_;
                  *(uint*)( *pauVar14 + 8 ) = auVar3._8_4_;
                  *(ushort**)*pauVar14 = puVar8;
                  if (auVar3._8_4_ < 10) {
                     puVar8 = (ushort*)&_hb_NullPool;
                  }

                  *(undefined4*)( *pauVar14 + 0xc ) = uVar11;
                  *(ushort**)pauVar14[1] = puVar8;
                  uVar9 = *puVar8;
                  *(uint*)( pauVar14[1] + 8 ) = in_EDX;
                  uVar9 = uVar9 << 8 | uVar9 >> 8;
                  if (uVar9 == 0) {
                     iVar10 = 0;
                  }
 else {
                     iVar10 = ( (short)uVar9 < 1 ) + 1;
                  }

                  *(int*)( pauVar14[1] + 0xc ) = iVar10;
                  goto LAB_001090c8;
               }

            }
 else {
               if ((short)uVar9 < 1) {
                  iVar10 = 2;
                  goto joined_r0x001091c3;
               }

               iVar10 = 1;
               if (in_CL != '\0') {
                  local_24 = 0;
                  local_38 = puVar8;
                  local_30 = puVar7;
                  local_28 = uVar12;
                  auVar15 = glyf_impl::SimpleGlyph::trim_padding((SimpleGlyph*)&local_38);
                  auVar3 = auVar15._0_12_;
                  uVar11 = auVar15._12_4_;
                  goto LAB_00109150;
               }

            }

            *(ushort**)*pauVar14 = puVar7;
            *(uint*)( *pauVar14 + 8 ) = uVar12;
            *(undefined4*)( *pauVar14 + 0xc ) = 0;
            *(ushort**)pauVar14[1] = puVar8;
            *(uint*)( pauVar14[1] + 8 ) = in_EDX;
            *(int*)( pauVar14[1] + 0xc ) = iVar10;
            goto LAB_001090c8;
         }

      }

   }

   *(undefined**)pauVar14[1] = &_hb_NullPool;
   uVar4 = _LC7;
   *pauVar14 = (undefined1[16])0x0;
   *(undefined8*)( pauVar14[1] + 8 ) = uVar4;
   LAB_001090c8:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pauVar14;
}
/* CFF::Encoding::sanitize(hb_sanitize_context_t*) const */undefined4 CFF::Encoding::sanitize(Encoding *this, hb_sanitize_context_t *param_1) {
   Encoding *pEVar1;
   Encoding EVar2;
   int iVar3;
   Encoding *pEVar4;
   uint uVar5;
   ulong uVar6;
   if ((Encoding*)( ulong ) * (uint*)( param_1 + 0x18 ) < this + ( 1 - *(long*)( param_1 + 8 ) )) {
      return 0;
   }

   if (( ( byte ) * this & 0x7f ) == 0) {
      pEVar4 = this + 2;
      if (( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pEVar4 - *(long*)( param_1 + 8 ))) {
         return 0;
      }

      uVar6 = ( ulong ) * (uint*)( param_1 + 0x18 );
      if (uVar6 < ( ulong )((long)pEVar4 - *(long*)( param_1 + 8 ))) {
         return 0;
      }

      if (( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)pEVar4) < (uint)(byte)this[1]) {
         return 0;
      }

      iVar3 = *(int*)( param_1 + 0x1c ) - (uint)(byte)this[1];
      *(int*)( param_1 + 0x1c ) = iVar3;
   }
 else {
      if (( ( byte ) * this & 0x7f ) != 1) {
         return 0;
      }

      pEVar4 = this + 2;
      if (( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pEVar4 - *(long*)( param_1 + 8 ))) {
         return 0;
      }

      uVar6 = ( ulong ) * (uint*)( param_1 + 0x18 );
      if (uVar6 < ( ulong )((long)pEVar4 - *(long*)( param_1 + 8 ))) {
         return 0;
      }

      if (( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)pEVar4) < (uint)(byte)this[1] * 2) {
         return 0;
      }

      iVar3 = *(int*)( param_1 + 0x1c ) + (uint)(byte)this[1] * -2;
      *(int*)( param_1 + 0x1c ) = iVar3;
   }

   if (0 < iVar3) {
      EVar2 = *this;
      if (-1 < (char)EVar2) {
         return 1;
      }

      if (( (byte)EVar2 & 0x7f ) == 0) {
         if ((byte)this[1] == 0) {
            pEVar4 = (Encoding*)&_hb_NullPool;
         }
 else {
            pEVar4 = this + ( ulong )((byte)this[1] - 1) + 2;
         }

         uVar6 = ( ulong ) * (uint*)( param_1 + 0x18 );
         pEVar4 = pEVar4 + 1;
      }
 else {
         pEVar4 = (Encoding*)&_hb_NullPool;
         if (( (byte)EVar2 & 0x7f ) == 1) {
            if ((byte)this[1] == 0) {
               pEVar4 = (Encoding*)&_hb_NullPool;
            }
 else {
               pEVar4 = this + ( ulong )((byte)this[1] - 1) * 2 + 2;
            }

            uVar6 = ( ulong ) * (uint*)( param_1 + 0x18 );
            pEVar4 = pEVar4 + 2;
         }

      }

      pEVar1 = pEVar4 + 1;
      if (( ( ( ulong )((long)pEVar1 - *(long*)( param_1 + 8 )) <= uVar6 ) && ( ( ulong )((long)pEVar1 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 ) ) ) && ( uVar5 = ( uint )(byte) * pEVar4 + ( uint )(byte) * pEVar4 * 2 ),uVar5 <= ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)pEVar1)) {
         iVar3 = *(int*)( param_1 + 0x1c ) - uVar5;
         *(int*)( param_1 + 0x1c ) = iVar3;
         return CONCAT31(( int3 )((uint)iVar3 >> 8), 0 < iVar3);
      }

   }

   return 0;
}
/* CFF::Charset::sanitize(hb_sanitize_context_t*, unsigned int*) const */bool CFF::Charset::sanitize(Charset *this, hb_sanitize_context_t *param_1, uint *param_2) {
   Charset *pCVar1;
   Charset CVar2;
   long lVar3;
   uint uVar4;
   int iVar5;
   uint uVar6;
   uint uVar7;
   ulong uVar8;
   pCVar1 = this + 1;
   if (( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pCVar1 - *(long*)( param_1 + 8 ))) {
      return false;
   }

   CVar2 = *this;
   if (CVar2 == (Charset)0x1) {
      uVar8 = 0;
      uVar7 = 0;
      for (uVar6 = *(int*)( param_1 + 0x38 ) - 1; uVar6 != 0; uVar6 = uVar6 - ( (byte)this[lVar3 + 3] + 1 )) {
         lVar3 = uVar8 * 3;
         if ((Charset*)( ulong ) * (uint*)( param_1 + 0x18 ) < this + ( ( lVar3 + 4 ) - *(long*)( param_1 + 8 ) )) {
            return false;
         }

         if (uVar6 < (byte)this[lVar3 + 3] + 1) {
            return false;
         }

         uVar7 = (int)uVar8 + 1;
         uVar8 = (ulong)uVar7;
      }

   }
 else {
      if (CVar2 != (Charset)0x2) {
         if (CVar2 != (Charset)0x0) {
            return false;
         }

         uVar7 = *(uint*)( param_1 + 0x38 );
         if (param_2 != (uint*)0x0) {
            *param_2 = uVar7;
         }

         iVar5 = uVar7 - 1;
         if (iVar5 < 0) {
            return false;
         }

         if (( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pCVar1 - *(long*)( param_1 + 8 ))) {
            return false;
         }

         if (( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)pCVar1) < ( uint )(iVar5 * 2)) {
            return false;
         }

         iVar5 = *(int*)( param_1 + 0x1c ) + iVar5 * -2;
         *(int*)( param_1 + 0x1c ) = iVar5;
         return 0 < iVar5;
      }

      uVar8 = 0;
      uVar7 = 0;
      for (uVar6 = *(int*)( param_1 + 0x38 ) - 1; uVar6 != 0; uVar6 = uVar6 - uVar4) {
         if ((Charset*)( ulong ) * (uint*)( param_1 + 0x18 ) < this + ( ( uVar8 * 4 + 5 ) - *(long*)( param_1 + 8 ) )) {
            return false;
         }

         uVar4 = ( ushort )(*(ushort*)( this + uVar8 * 4 + 3 ) << 8 | *(ushort*)( this + uVar8 * 4 + 3 ) >> 8) + 1;
         if (uVar6 < uVar4) {
            return false;
         }

         uVar7 = (int)uVar8 + 1;
         uVar8 = (ulong)uVar7;
      }

   }

   if (param_2 != (uint*)0x0) {
      *param_2 = uVar7;
   }

   return true;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OT::post::accelerator_t::accelerator_t(hb_face_t*) */void OT::post::accelerator_t::accelerator_t(accelerator_t *this, hb_face_t *param_1) {
   ushort uVar1;
   uint uVar2;
   int iVar3;
   uint uVar4;
   uint uVar5;
   undefined *puVar6;
   long lVar7;
   byte *pbVar8;
   void *pvVar9;
   uint uVar10;
   ushort *puVar11;
   byte *pbVar12;
   undefined *puVar13;
   byte *pbVar14;
   *(undefined8*)this = 0;
   *(undefined8*)( this + 0x10 ) = 0;
   *(undefined8*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x30 ) = 0;
   *(undefined1(*) [16])( this + 0x20 ) = (undefined1[16])0x0;
   hb_face_get_glyph_count(param_1);
   puVar6 = (undefined*)hb_face_reference_table(param_1, 0x706f7374);
   lVar7 = hb_blob_reference(puVar6);
   uVar10 = *(uint*)( lVar7 + 0x18 );
   puVar11 = *(ushort**)( lVar7 + 0x10 );
   if (uVar10 >> 0x1a == 0) {
      uVar5 = uVar10 * 0x40;
      if (0x3fffffff < uVar10 * 0x40) {
         uVar5 = 0x3fffffff;
      }

      if (uVar5 < 0x4000) {
         uVar5 = 0x4000;
      }

   }
 else {
      uVar5 = 0x3fffffff;
   }

   if (puVar11 == (ushort*)0x0) {
      hb_blob_destroy(lVar7);
      goto LAB_0010957d;
   }

   if (uVar10 < 0x20) {
      LAB_00109568:hb_blob_destroy(lVar7);
      hb_blob_destroy(puVar6);
      puVar6 = (undefined*)hb_blob_get_empty();
   }
 else {
      iVar3 = ( uint )(ushort)(*puVar11 << 8 | *puVar11 >> 8) * 0x10000 + ( uint )(ushort)(puVar11[1] << 8 | puVar11[1] >> 8);
      if (iVar3 != 0x10000) {
         if (iVar3 == 0x20000) {
            if (( ( 0x21 < uVar10 ) && ( uVar4 = ( uint )(ushort)(puVar11[0x10] << 8 | puVar11[0x10] >> 8) ),uVar4 * 2 <= uVar10 - 0x22 )) goto LAB_00109730;
            iVar3 = ( uint )(ushort)(*puVar11 << 8 | *puVar11 >> 8) * 0x10000 + ( uint )(ushort)(puVar11[1] << 8 | puVar11[1] >> 8);
         }

         if (iVar3 != 0x30000) goto LAB_00109568;
      }

      LAB_00109730:hb_blob_destroy(lVar7);
      hb_blob_make_immutable(puVar6);
   }

   LAB_0010957d:*(undefined**)this = puVar6;
   if (puVar6 == (undefined*)0x0) {
      puVar6 = &_hb_NullPool;
   }

   uVar10 = *(uint*)( puVar6 + 0x18 );
   puVar11 = (ushort*)&_hb_NullPool;
   if (0x1f < uVar10) {
      puVar11 = *(ushort**)( puVar6 + 0x10 );
   }

   iVar3 = ( uint )(ushort)(*puVar11 << 8 | *puVar11 >> 8) * 0x10000 + ( uint )(ushort)(puVar11[1] << 8 | puVar11[1] >> 8);
   *(int*)( this + 8 ) = iVar3;
   if (iVar3 == 0x20000) {
      puVar6 = *(undefined**)this;
      if (puVar6 == (undefined*)0x0) {
         puVar6 = &_hb_NullPool;
      }

      puVar13 = &_hb_NullPool;
      if (0x1f < *(uint*)( puVar6 + 0x18 )) {
         puVar13 = *(undefined**)( puVar6 + 0x10 );
      }

      uVar1 = *(ushort*)( puVar13 + 0x20 );
      *(undefined**)( this + 0x10 ) = puVar13 + 0x20;
      *(undefined**)( this + 0x28 ) = puVar13 + ( ulong )(ushort)(uVar1 << 8 | uVar1 >> 8) * 2 + 0x22;
      pbVar14 = puVar13 + uVar10;
      uVar5 = *(uint*)( param_1 + 0x18 );
      if (uVar5 == 0xffffffff) {
         uVar5 = hb_face_t::load_num_glyphs();
      }

      uVar4 = *(uint*)( this + 0x18 );
      uVar2 = uVar10 >> 3;
      if (uVar5<uVar10> > 3) {
         uVar2 = uVar5;
      }

      if (( -1 < (int)uVar4 ) && ( uVar4 < uVar2 )) {
         do {
            uVar4 = uVar4 + 8 + ( uVar4 >> 1 );
         }
 while ( uVar4 < uVar2 );
         pvVar9 = realloc(*(void**)( this + 0x20 ), (ulong)uVar4 << 2);
         if (pvVar9 == (void*)0x0) {
            if (*(uint*)( this + 0x18 ) < uVar4) {
               *(uint*)( this + 0x18 ) = ~*(uint *)(this + 0x18);
            }

         }
 else {
            *(void**)( this + 0x20 ) = pvVar9;
            *(uint*)( this + 0x18 ) = uVar4;
         }

      }

      uVar10 = *(uint*)( this + 0x1c );
      pbVar8 = *(byte**)( this + 0x28 );
      if (( ( uVar10 < 0xffff ) && ( pbVar8 < pbVar14 ) ) && ( pbVar12 = pbVar8 ),pbVar8 + *pbVar8 < pbVar14) {
         do {
            uVar5 = *(uint*)( this + 0x18 );
            if ((int)uVar10 < (int)uVar5) {
               LAB_00109658:pvVar9 = *(void**)( this + 0x20 );
               LAB_0010965d:uVar10 = *(uint*)( this + 0x1c ) + 1;
               *(int*)( (long)pvVar9 + ( ulong ) * (uint*)( this + 0x1c ) * 4 ) = (int)pbVar12 - (int)pbVar8;
               *(uint*)( this + 0x1c ) = uVar10;
            }
 else {
               if (-1 < (int)uVar5) {
                  pvVar9 = *(void**)( this + 0x20 );
                  if (uVar5 < uVar10 + 1) {
                     do {
                        uVar5 = uVar5 + 8 + ( uVar5 >> 1 );
                     }
 while ( uVar5 < uVar10 + 1 );
                     pvVar9 = realloc(pvVar9, (ulong)uVar5 << 2);
                     if (pvVar9 == (void*)0x0) {
                        if (uVar5 <= *(uint*)( this + 0x18 )) goto LAB_00109658;
                        *(uint*)( this + 0x18 ) = ~*(uint *)(this + 0x18);
                        goto LAB_001097d5;
                     }

                     *(void**)( this + 0x20 ) = pvVar9;
                     *(uint*)( this + 0x18 ) = uVar5;
                  }

                  goto LAB_0010965d;
               }

               LAB_001097d5:__hb_CrapPool = __hb_NullPool;
               uVar10 = *(uint*)( this + 0x1c );
            }

            pbVar12 = pbVar12 + ( ulong ) * pbVar12 + 1;
            if (pbVar14 <= pbVar12) {
               return;
            }

            if (0xfffe < uVar10) {
               return;
            }

            if (pbVar14 <= pbVar12 + *pbVar12) {
               return;
            }

            pbVar8 = *(byte**)( this + 0x28 );
         }
 while ( true );
      }

   }

   return;
}
/* OT::post::accelerator_t::get_glyph_from_name(char const*, int, unsigned int*) const */undefined8 OT::post::accelerator_t::get_glyph_from_name(char *param_1, int param_2, uint *param_3) {
   long *plVar1;
   long lVar2;
   ushort uVar3;
   uint uVar4;
   int iVar5;
   size_t sVar6;
   undefined2 *__ptr;
   ushort uVar7;
   _func_int_void_ptr_void_ptr_void_ptr *in_RCX;
   _func_int_void_ptr_void_ptr_void_ptr *p_Var8;
   uint uVar9;
   uint uVar10;
   ulong uVar11;
   ushort *puVar12;
   undefined4 in_register_00000034;
   byte *pbVar13;
   void *in_R8;
   int iVar14;
   int iVar15;
   ulong uVar16;
   uint uVar17;
   uVar17 = (uint)param_3;
   if (*(int*)( param_1 + 8 ) == 0x10000) {
      uVar10 = 0x102;
      p_Var8 = in_RCX;
   }
 else {
      if (*(int*)( param_1 + 8 ) != 0x20000) {
         return 0;
      }

      uVar7 = **(ushort**)( param_1 + 0x10 ) << 8 | **(ushort**)( param_1 + 0x10 ) >> 8;
      uVar10 = (uint)uVar7;
      p_Var8 = (_func_int_void_ptr_void_ptr_void_ptr*)(ulong)uVar7;
      if (uVar7 == 0) {
         return 0;
      }

   }

   if ((int)uVar17 < 0) {
      sVar6 = strlen((char*)CONCAT44(in_register_00000034, param_2));
      uVar17 = (uint)sVar6;
   }

   if (uVar17 != 0) {
      plVar1 = (long*)( param_1 + 0x30 );
      while (__ptr = (undefined2*)*plVar1,__ptr == (undefined2*)0x0) {
         uVar16 = (ulong)uVar10;
         __ptr = (undefined2*)malloc(uVar16 * 2);
         if (__ptr == (undefined2*)0x0) {
            return 0;
         }

         uVar11 = 0;
         if (( uVar10 & 1 ) == 0) {
            LAB_00109a28:do {
               __ptr[uVar11] = (short)uVar11;
               lVar2 = uVar11 + 1;
               uVar11 = uVar11 + 2;
               __ptr[lVar2] = (short)lVar2;
            }
 while ( uVar16 != uVar11 );
         }
 else {
            uVar11 = 1;
            *__ptr = 0;
            if (uVar16 != 1) goto LAB_00109a28;
         }

         sort_r_simple<void*>(__ptr, uVar16, (ulong)param_1, p_Var8, in_R8);
         LOCK();
         lVar2 = *plVar1;
         if (lVar2 == 0) {
            *plVar1 = (long)__ptr;
         }

         UNLOCK();
         if (lVar2 == 0) break;
         free(__ptr);
      }
;
      iVar14 = uVar10 - 1;
      iVar15 = 0;
      do {
         uVar10 = ( uint )(iVar15 + iVar14) >> 1;
         puVar12 = (ushort*)( ( ulong )(uVar10 * 2) + (long)__ptr );
         uVar7 = *puVar12;
         if (*(int*)( param_1 + 8 ) == 0x10000) {
            if (0x101 < uVar7) goto LAB_001098cb;
            uVar4 = *(uint*)( format1_names_msgidx + (ulong)uVar7 * 4 );
            uVar9 = (uint)uVar7;
            LAB_00109912:uVar9 = ~uVar4 + *(int*)( format1_names_msgidx + ( ulong )(uVar9 + 1) * 4 );
            pbVar13 = (byte*)( ".notdef" + uVar4 );
            LAB_00109923:if (uVar17 == uVar9) {
               iVar5 = memcmp((char*)CONCAT44(in_register_00000034, param_2), pbVar13, (ulong)uVar17);
            }
 else {
               iVar5 = uVar17 - uVar9;
            }

            if (iVar5 < 0) goto LAB_00109968;
            if (iVar5 == 0) {
               *(uint*)in_RCX = ( uint ) * puVar12;
               return 1;
            }

            LAB_001098d3:iVar15 = uVar10 + 1;
         }
 else {
            if (( *(int*)( param_1 + 8 ) == 0x20000 ) && ( uVar3 = **(ushort**)( param_1 + 0x10 ) ),uVar7 < ( ushort )(uVar3 << 8 | uVar3 >> 8)) {
               uVar7 = ( *(ushort**)( param_1 + 0x10 ) )[(ulong)uVar7 + 1];
               uVar7 = uVar7 << 8 | uVar7 >> 8;
               uVar9 = (uint)uVar7;
               if (uVar7 < 0x102) {
                  uVar4 = *(uint*)( format1_names_msgidx + (ulong)uVar7 * 4 );
                  goto LAB_00109912;
               }

               if (uVar9 - 0x102 < *(uint*)( param_1 + 0x1c )) {
                  pbVar13 = (byte*)( ( ulong ) * (uint*)( *(long*)( param_1 + 0x20 ) + ( ulong )(uVar9 - 0x102) * 4 ) + *(long*)( param_1 + 0x28 ) );
                  uVar9 = ( uint ) * pbVar13;
                  pbVar13 = pbVar13 + 1;
                  goto LAB_00109923;
               }

            }

            LAB_001098cb:if (-1 < (int)uVar17) goto LAB_001098d3;
            LAB_00109968:iVar14 = uVar10 - 1;
         }

      }
 while ( iVar15 <= iVar14 );
   }

   return 0;
}
/* OT::CBLC::sanitize(hb_sanitize_context_t*) const */undefined8 OT::CBLC::sanitize(CBLC *this, hb_sanitize_context_t *param_1) {
   CBLC *pCVar1;
   short sVar2;
   uint uVar3;
   CBLC *pCVar4;
   uint uVar5;
   CBLC *pCVar6;
   int iVar7;
   uint uVar8;
   uint uVar9;
   uint uVar10;
   CBLC *pCVar11;
   CBLC *pCVar12;
   CBLC *pCVar13;
   uint uVar14;
   uint uVar15;
   long lVar16;
   bool bVar17;
   pCVar6 = this + 8;
   if (( ( ( ulong )((long)pCVar6 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 ) ) && ( ( ushort )(*(ushort*)this << 8 | *(ushort*)this >> 8) - 2 < 2 ) ) && ( ( ulong )((long)pCVar6 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 ) )) {
      uVar5 = *(uint*)( this + 4 );
      lVar16 = ( ulong )(uVar5 >> 0x18 | ( uVar5 & 0xff0000 ) >> 8 | ( uVar5 & 0xff00 ) << 8 | uVar5 << 0x18) * 0x30;
      bVar17 = (int)( (ulong)lVar16 >> 0x20 ) != 0;
      uVar5 = (uint)lVar16;
      uVar15 = (uint)bVar17;
      if (( ( !bVar17 ) && ( ( ulong )((long)pCVar6 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 ) ) ) && ( ( uVar5 <= ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)pCVar6) && ( iVar7 = *(int*)( param_1 + 0x1c ) - uVar5 ),*(int*)( param_1 + 0x1c ) = iVar7,0 < iVar7 ) )) {
         uVar5 = *(uint*)( this + 4 );
         if (uVar5 == 0) {
            return 1;
         }

         pCVar12 = (CBLC*)( ulong ) * (uint*)( param_1 + 0x18 );
         pCVar6 = this + 0x38;
         lVar16 = *(long*)( param_1 + 8 );
         do {
            if (( pCVar12 < pCVar6 + -lVar16 ) || ( (CBLC*)( ulong ) * (uint*)( param_1 + 0x18 ) < pCVar6 + ( -0x2c - *(long*)( param_1 + 8 ) ) )) {
               return 0;
            }

            uVar8 = *(uint*)( pCVar6 + -0x28 );
            uVar9 = *(uint*)( pCVar6 + -0x30 );
            uVar14 = uVar8 >> 0x18 | ( uVar8 & 0xff0000 ) >> 8 | ( uVar8 & 0xff00 ) << 8 | uVar8 << 0x18;
            bVar17 = ( uVar8 << 0x18 ) >> 0x1d != 0;
            uVar10 = (uint)bVar17;
            if (bVar17) {
               return 0;
            }

            pCVar11 = this + ( uVar9 >> 0x18 | ( uVar9 & 0xff0000 ) >> 8 | ( uVar9 & 0xff00 ) << 8 | uVar9 << 0x18 );
            if (( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pCVar11 - *(long*)( param_1 + 8 ))) {
               return 0;
            }

            if (( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)pCVar11) < uVar14 * 8) {
               return 0;
            }

            iVar7 = *(int*)( param_1 + 0x1c ) + uVar14 * -8;
            *(int*)( param_1 + 0x1c ) = iVar7;
            if (iVar7 < 1) {
               return 0;
            }

            lVar16 = *(long*)( param_1 + 8 );
            if (uVar8 == 0) {
               pCVar12 = (CBLC*)( ulong ) * (uint*)( param_1 + 0x18 );
            }
 else {
               pCVar12 = (CBLC*)( ulong ) * (uint*)( param_1 + 0x18 );
               pCVar4 = pCVar11;
               do {
                  pCVar13 = pCVar4 + 8;
                  if (pCVar12 < pCVar13 + -lVar16) {
                     return 0;
                  }

                  uVar8 = ( uint )(ushort)(*(ushort*)( pCVar4 + 2 ) << 8 | *(ushort*)( pCVar4 + 2 ) >> 8);
                  uVar9 = ( uint )(ushort)(*(ushort*)pCVar4 << 8 | *(ushort*)pCVar4 >> 8);
                  if (uVar8 < uVar9) {
                     return 0;
                  }

                  if (( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pCVar13 - *(long*)( param_1 + 8 ))) {
                     return 0;
                  }

                  uVar3 = *(uint*)( pCVar4 + 4 );
                  if (uVar3 == 0) {
                     LAB_00109bed:lVar16 = *(long*)( param_1 + 8 );
                     pCVar12 = (CBLC*)( ulong ) * (uint*)( param_1 + 0x18 );
                  }
 else {
                     pCVar1 = pCVar11 + ( uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18 ) + 8;
                     if (( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pCVar1 - *(long*)( param_1 + 8 ))) {
                        LAB_00109cef:if (0x1f < *(uint*)( param_1 + 0x2c )) {
                           return 0;
                        }

                        *(uint*)( param_1 + 0x2c ) = *(uint*)( param_1 + 0x2c ) + 1;
                        if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
                           return 0;
                        }

                        *(undefined4*)( pCVar4 + 4 ) = 0;
                        goto LAB_00109bed;
                     }

                     iVar7 = uVar8 - uVar9;
                     sVar2 = *(short*)( pCVar11 + ( uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18 ) );
                     lVar16 = *(long*)( param_1 + 8 );
                     if (sVar2 == 0x100) {
                        pCVar12 = (CBLC*)( ulong ) * (uint*)( param_1 + 0x18 );
                        if (( pCVar1 + -lVar16 <= pCVar12 ) && ( uVar9 = iVar7 + 2 ),uVar8 = uVar9 * 4,uVar9 >> 0x1e == 0) {
                           LAB_00109cd2:if (( uVar8 <= ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)pCVar1) ) && ( iVar7 = *(int*)( param_1 + 0x1c ) ),*(uint*)( param_1 + 0x1c ) = iVar7 - uVar8,0 < (int)( iVar7 - uVar8 )) goto LAB_00109bf4;
                        }

                        goto LAB_00109cef;
                     }

                     pCVar12 = (CBLC*)( ulong ) * (uint*)( param_1 + 0x18 );
                     if (sVar2 == 0x300) {
                        if (( pCVar1 + -lVar16 <= pCVar12 ) && ( iVar7 = iVar7 + 2 ),uVar8 = iVar7 * 2,-1 < iVar7) goto LAB_00109cd2;
                        goto LAB_00109cef;
                     }

                  }

                  LAB_00109bf4:uVar10 = uVar10 + 1;
                  pCVar4 = pCVar13;
               }
 while ( uVar10 < uVar14 );
            }

            if (pCVar12 < pCVar6 + ( -0x14 - lVar16 )) {
               return 0;
            }

            if (pCVar12 < pCVar6 + ( -8 - lVar16 )) {
               return 0;
            }

            uVar15 = uVar15 + 1;
            pCVar6 = pCVar6 + 0x30;
            if (( uVar5 >> 0x18 | ( uVar5 & 0xff0000 ) >> 8 | ( uVar5 & 0xff00 ) << 8 | uVar5 << 0x18 ) <= uVar15) {
               return 1;
            }

         }
 while ( true );
      }

   }

   return 0;
}
/* OT::CBDT::accelerator_t::accelerator_t(hb_face_t*) */void OT::CBDT::accelerator_t::accelerator_t(accelerator_t *this, hb_face_t *param_1) {
   ushort uVar1;
   CBLC *this_00;
   char cVar2;
   undefined4 uVar3;
   long lVar4;
   long lVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
   undefined4 local_88[2];
   undefined1 local_80[16];
   uint local_70;
   uint local_6c;
   undefined4 local_68;
   undefined4 local_64;
   char local_60;
   int local_5c;
   long local_58;
   undefined4 local_50;
   undefined1 local_4c;
   undefined1 local_4b;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])this = (undefined1[16])0x0;
   local_68 = 0;
   local_60 = '\0';
   local_4b = 0;
   local_50 = hb_face_get_glyph_count(param_1);
   local_4c = 1;
   lVar4 = hb_face_reference_table(param_1, 0x43424c43);
   lVar5 = hb_blob_reference(lVar4);
   local_58 = lVar5;
   while (true) {
      local_70 = *(uint*)( lVar5 + 0x18 );
      this_00 = *(CBLC**)( lVar5 + 0x10 );
      local_6c = local_70 * 0x40;
      if (local_70 >> 0x1a == 0) {
         if (0x3fffffff < local_6c) {
            local_6c = 0x3fffffff;
         }

         if (local_6c < 0x4000) {
            local_6c = 0x4000;
         }

      }
 else {
         local_6c = 0x3fffffff;
      }

      local_80._8_8_ = this_00 + local_70;
      local_80._0_8_ = this_00;
      local_5c = 0;
      local_88[0] = 0;
      local_64 = 0;
      if (this_00 == (CBLC*)0x0) {
         hb_blob_destroy(lVar5);
         goto LAB_00109e95;
      }

      cVar2 = CBLC::sanitize(this_00, (hb_sanitize_context_t*)local_88);
      lVar5 = local_58;
      if (cVar2 != '\0') {
         if (local_5c == 0) {
            hb_blob_destroy(local_58);
         }
 else {
            local_5c = 0;
            cVar2 = CBLC::sanitize(this_00, (hb_sanitize_context_t*)local_88);
            if (local_5c != 0) {
               hb_blob_destroy(local_58);
               goto LAB_00109f58;
            }

            hb_blob_destroy(local_58);
            local_58 = 0;
            local_70 = 0;
            local_80 = (undefined1[16])0x0;
            if (cVar2 == '\0') goto LAB_00109f58;
         }

         hb_blob_make_immutable(lVar4);
         goto LAB_00109e95;
      }

      if (( local_5c == 0 ) || ( local_60 != '\0' )) break;
      local_80._0_8_ = hb_blob_get_data_writable(lVar4, 0);
      local_80._8_8_ = ( ulong ) * (uint*)( lVar4 + 0x18 ) + local_80._0_8_;
      if (local_80._0_8_ == 0) break;
      local_60 = '\x01';
   }
;
   hb_blob_destroy(lVar5);
   LAB_00109f58:hb_blob_destroy(lVar4);
   lVar4 = hb_blob_get_empty();
   LAB_00109e95:*(long*)this = lVar4;
   hb_face_get_glyph_count(param_1);
   uVar6 = hb_face_reference_table(param_1, 0x43424454);
   lVar5 = hb_blob_reference(uVar6);
   if (*(ushort**)( lVar5 + 0x10 ) == (ushort*)0x0) {
      hb_blob_destroy();
   }
 else if (( *(uint*)( lVar5 + 0x18 ) < 4 ) || ( uVar1 = **(ushort**)( lVar5 + 0x10 ) ),1 < ( ushort )(uVar1 << 8 | uVar1 >> 8) - 2) {
      hb_blob_destroy();
      hb_blob_destroy(uVar6);
      uVar6 = hb_blob_get_empty();
   }
 else {
      hb_blob_destroy();
      hb_blob_make_immutable(uVar6);
   }

   *(undefined8*)( this + 8 ) = uVar6;
   uVar3 = hb_face_get_upem(param_1);
   *(undefined4*)( this + 0x10 ) = uVar3;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* OT::CBDT::accelerator_t::get_extents(hb_font_t*, unsigned int, hb_glyph_extents_t*, bool) const
    */ulong OT::CBDT::accelerator_t::get_extents(accelerator_t *this, hb_font_t *param_1, uint param_2, hb_glyph_extents_t *param_3, bool param_4) {
   byte bVar1;
   byte bVar2;
   byte bVar3;
   uint uVar4;
   ulong uVar5;
   ushort uVar6;
   uint uVar7;
   uint uVar8;
   byte *pbVar9;
   uint uVar10;
   ushort *puVar11;
   short *psVar12;
   uint uVar13;
   undefined *puVar14;
   ushort uVar15;
   undefined *puVar16;
   uint uVar17;
   undefined *puVar18;
   uint *puVar19;
   undefined *in_R11;
   ulong uVar20;
   ulong uVar21;
   uint uVar22;
   float fVar23;
   float fVar24;
   float fVar25;
   float fVar26;
   puVar19 = (uint*)&_hb_NullPool;
   puVar16 = *(undefined**)this;
   puVar14 = &_hb_NullPool;
   if (puVar16 != (undefined*)0x0) {
      puVar14 = puVar16;
   }

   puVar18 = &_hb_NullPool;
   if (7 < *(uint*)( puVar14 + 0x18 )) {
      puVar18 = *(undefined**)( puVar14 + 0x10 );
   }

   uVar17 = *(uint*)( puVar18 + 4 );
   if (uVar17 != 0) {
      uVar7 = *(uint*)( param_1 + 0x68 );
      uVar22 = uVar17 >> 0x18 | ( uVar17 & 0xff0000 ) >> 8 | ( uVar17 & 0xff00 ) << 8 | uVar17 << 0x18;
      uVar17 = *(uint*)( param_1 + 0x6c );
      if (( *(uint*)( param_1 + 0x6c ) <= uVar7 ) && ( uVar17 = uVar7 != 0 )) {
         uVar17 = uVar7;
      }

      puVar16 = puVar18 + 8;
      if (*(int*)( puVar18 + 4 ) == 0) {
         puVar16 = &_hb_NullPool;
         uVar7 = 0;
      }
 else {
         uVar7 = *(uint*)( puVar18 + 4 );
      }

      uVar7 = uVar7 >> 0x18 | ( uVar7 & 0xff0000 ) >> 8 | ( uVar7 & 0xff00 ) << 8 | uVar7 << 0x18;
      bVar1 = puVar16[0x2c];
      if ((byte)puVar16[0x2c] < (byte)puVar18[0x35]) {
         bVar1 = puVar18[0x35];
      }

      if (uVar22 < 2) {
         uVar21 = 0;
      }
 else {
         puVar16 = puVar18 + 0x38;
         uVar5 = 1;
         uVar20 = 0;
         uVar8 = (uint)bVar1;
         do {
            while (true) {
               uVar21 = uVar5;
               uVar10 = (uint)uVar21;
               if (uVar10 < uVar7) {
                  uVar7 = *(uint*)( puVar18 + 4 );
                  pbVar9 = puVar16 + 0x2d;
                  uVar7 = uVar7 >> 0x18 | ( uVar7 & 0xff0000 ) >> 8 | ( uVar7 & 0xff00 ) << 8 | uVar7 << 0x18;
                  in_R11 = puVar16;
                  if (uVar10 < uVar7) {
                     uVar7 = *(uint*)( puVar18 + 4 );
                     uVar7 = uVar7 >> 0x18 | ( uVar7 & 0xff0000 ) >> 8 | ( uVar7 & 0xff00 ) << 8 | uVar7 << 0x18;
                     puVar14 = puVar16;
                  }
 else {
                     puVar14 = &_hb_NullPool;
                  }

               }
 else {
                  pbVar9 = &DAT_00124055;
                  puVar14 = &_hb_NullPool;
                  in_R11 = &_hb_NullPool;
               }

               bVar1 = puVar14[0x2c];
               if (bVar1 < (byte)in_R11[0x2d]) {
                  bVar1 = *pbVar9;
               }

               uVar13 = (uint)bVar1;
               if (( uVar13 < uVar17 ) || ( uVar8 <= uVar13 )) break;
               LAB_0010a0b0:puVar16 = puVar16 + 0x30;
               uVar5 = ( ulong )(uVar10 + 1);
               uVar20 = uVar21;
               uVar8 = uVar13;
               if (uVar22 == uVar10 + 1) goto LAB_0010a11f;
            }
;
            uVar4 = uVar17;
            if (uVar13 <= uVar17) {
               uVar4 = uVar13;
            }

            in_R11 = (undefined*)(ulong)uVar4;
            if (uVar8 < uVar4) goto LAB_0010a0b0;
            puVar16 = puVar16 + 0x30;
            uVar5 = ( ulong )(uVar10 + 1);
            uVar21 = uVar20;
         }
 while ( uVar22 != uVar10 + 1 );
      }

      LAB_0010a11f:if ((uint)uVar21 < uVar7) {
         puVar19 = (uint*)( puVar18 + uVar21 * 0x30 + 8 );
         puVar16 = *(undefined**)this;
      }
 else {
         puVar16 = *(undefined**)this;
         puVar19 = (uint*)&_hb_NullPool;
      }

   }

   if (puVar16 == (undefined*)0x0) {
      puVar16 = &_hb_NullPool;
   }

   puVar14 = &_hb_NullPool;
   if (7 < *(uint*)( puVar16 + 0x18 )) {
      puVar14 = *(undefined**)( puVar16 + 0x10 );
   }

   uVar17 = *puVar19;
   uVar7 = puVar19[2];
   if (uVar7 == 0) {
      LAB_0010a1bd:uVar21 = 0;
   }
 else {
      uVar22 = 0;
      puVar11 = (ushort*)( puVar14 + ( uVar17 >> 0x18 | ( uVar17 & 0xff0000 ) >> 8 | ( uVar17 & 0xff00 ) << 8 | uVar17 << 0x18 ) );
      do {
         uVar6 = *puVar11 << 8 | *puVar11 >> 8;
         uVar8 = (uint)uVar6;
         uVar10 = ( uint )(ushort)(puVar11[1] << 8 | puVar11[1] >> 8);
         in_R11 = (undefined*)CONCAT71(( int7 )((ulong)in_R11 >> 8), uVar8 <= param_2 && param_2 <= uVar10);
         if (uVar8 <= param_2 && param_2 <= uVar10) {
            uVar7 = puVar19[0xb];
            if (( ( ( (byte)uVar7 == 0 ) || ( bVar1 = *(byte*)( (long)puVar19 + 0x2d ) ),bVar1 == 0 ) ) || ( param_2 < uVar8 )) goto LAB_0010a1bd;
            uVar22 = *(uint*)( puVar11 + 2 );
            psVar12 = (short*)&_hb_NullPool;
            if (uVar22 != 0) {
               psVar12 = (short*)( (long)( puVar14 + ( uVar17 >> 0x18 | ( uVar17 & 0xff0000 ) >> 8 | ( uVar17 & 0xff00 ) << 8 | uVar17 << 0x18 ) ) + ( ulong )(uVar22 >> 0x18 | ( uVar22 & 0xff0000 ) >> 8 | ( uVar22 & 0xff00 ) << 8 | uVar22 << 0x18) );
            }

            uVar17 = param_2 - uVar6;
            if (*psVar12 == 0x100) {
               uVar22 = *(uint*)( psVar12 + ( ulong )(uVar17 + 1) * 2 + 4 );
               uVar17 = *(uint*)( psVar12 + (ulong)uVar17 * 2 + 4 );
               uVar22 = uVar22 >> 0x18 | ( uVar22 & 0xff0000 ) >> 8 | ( uVar22 & 0xff00 ) << 8 | uVar22 << 0x18;
               uVar17 = uVar17 >> 0x18 | ( uVar17 & 0xff0000 ) >> 8 | ( uVar17 & 0xff00 ) << 8 | uVar17 << 0x18;
               if (uVar22 <= uVar17) goto LAB_0010a1bd;
            }
 else {
               if (*psVar12 != 0x300) goto LAB_0010a1bd;
               uVar15 = psVar12[( ulong )(uVar17 + 1) + 4] << 8 | (ushort)psVar12[( ulong )(uVar17 + 1) + 4] >> 8;
               uVar6 = psVar12[(ulong)uVar17 + 4] << 8 | (ushort)psVar12[(ulong)uVar17 + 4] >> 8;
               uVar22 = (uint)uVar15;
               uVar17 = (uint)uVar6;
               if (uVar15 <= uVar6) goto LAB_0010a1bd;
            }

            puVar16 = *(undefined**)( this + 8 );
            uVar8 = *(uint*)( psVar12 + 2 );
            uVar22 = uVar22 - uVar17;
            uVar17 = ( uVar8 >> 0x18 | ( uVar8 & 0xff0000 ) >> 8 | ( uVar8 & 0xff00 ) << 8 | uVar8 << 0x18 ) + uVar17;
            if (puVar16 == (undefined*)0x0) {
               puVar16 = &_hb_NullPool;
            }

            uVar8 = *(uint*)( puVar16 + 0x18 );
            if (( uVar8 < uVar17 ) || ( uVar8 - uVar17 < uVar22 )) goto LAB_0010a1bd;
            if (psVar12[1] == 0x1100) {
               if (uVar22 < 9) goto LAB_0010a1bd;
               puVar14 = &_hb_NullPool;
               if (3 < uVar8) {
                  puVar14 = *(undefined**)( puVar16 + 0x10 );
               }

               pbVar9 = puVar14 + uVar17;
               bVar2 = pbVar9[1];
               bVar3 = *pbVar9;
               *(ulong*)param_3 = CONCAT44((int)(char)pbVar9[3], (int)(char)pbVar9[2]);
               *(ulong*)( param_3 + 8 ) = CONCAT44(-(uint)bVar3, (uint)bVar2);
            }
 else {
               if (( psVar12[1] != 0x1200 ) || ( uVar22 < 0xc )) goto LAB_0010a1bd;
               puVar14 = &_hb_NullPool;
               if (3 < uVar8) {
                  puVar14 = *(undefined**)( puVar16 + 0x10 );
               }

               pbVar9 = puVar14 + uVar17;
               bVar2 = pbVar9[1];
               bVar3 = *pbVar9;
               *(ulong*)param_3 = CONCAT44((int)(char)pbVar9[3], (int)(char)pbVar9[2]);
               *(ulong*)( param_3 + 8 ) = CONCAT44(-(uint)bVar3, (uint)bVar2);
            }

            if (!param_4) {
               return (ulong)in_R11 & 0xffffffff;
            }

            hb_font_t::scale_glyph_extents(param_1, param_3);
            fVar26 = (float)*(uint*)( this + 0x10 ) / (float)(byte)uVar7;
            fVar25 = (float)*(uint*)( this + 0x10 ) / (float)bVar1;
            fVar23 = (float)*(int*)param_3 * fVar26 + _LC9;
            if ((float)( (uint)fVar23 & _LC4 ) < _LC1) {
               fVar23 = (float)( ( uint )((float)(int)fVar23 - (float)( -(uint)(fVar23 < (float)(int)fVar23) & _LC3 )) | ~_LC4 & (uint)fVar23 );
            }

            fVar24 = (float)*(int*)( param_3 + 4 ) * fVar25 + _LC9;
            if ((float)( (uint)fVar24 & _LC4 ) < _LC1) {
               fVar24 = (float)( ( uint )((float)(int)fVar24 - (float)( -(uint)(fVar24 < (float)(int)fVar24) & _LC3 )) | ~_LC4 & (uint)fVar24 );
            }

            fVar26 = (float)*(int*)( param_3 + 8 ) * fVar26 + _LC9;
            if ((float)( (uint)fVar26 & _LC4 ) < _LC1) {
               fVar26 = (float)( ( uint )((float)(int)fVar26 - (float)( -(uint)(fVar26 < (float)(int)fVar26) & _LC3 )) | ~_LC4 & (uint)fVar26 );
            }

            fVar25 = (float)*(int*)( param_3 + 0xc ) * fVar25 + _LC9;
            if ((float)( (uint)fVar25 & _LC4 ) < _LC1) {
               fVar25 = (float)( ( uint )((float)(int)fVar25 - (float)( -(uint)(fVar25 < (float)(int)fVar25) & _LC3 )) | ~_LC4 & (uint)fVar25 );
            }

            *(int*)param_3 = (int)fVar23;
            *(int*)( param_3 + 4 ) = (int)fVar24;
            *(int*)( param_3 + 8 ) = (int)fVar26;
            *(int*)( param_3 + 0xc ) = (int)fVar25;
            return (ulong)in_R11 & 0xffffffff;
         }

         uVar22 = uVar22 + 1;
         puVar11 = puVar11 + 4;
      }
 while ( uVar22 < ( uVar7 >> 0x18 | ( uVar7 & 0xff0000 ) >> 8 | ( uVar7 & 0xff00 ) << 8 | uVar7 << 0x18 ) );
      uVar21 = (ulong)in_R11 & 0xffffffff;
   }

   return uVar21;
}
/* OT::CBDT::accelerator_t::reference_png(hb_font_t*, unsigned int) const */void OT::CBDT::accelerator_t::reference_png(accelerator_t *this, hb_font_t *param_1, uint param_2) {
   byte bVar1;
   short sVar2;
   ulong uVar3;
   ushort uVar4;
   uint uVar5;
   uint uVar6;
   ushort *puVar7;
   short *psVar8;
   uint uVar9;
   uint uVar10;
   undefined *puVar11;
   uint uVar12;
   undefined *puVar13;
   ulong uVar14;
   ulong uVar15;
   ushort uVar16;
   int iVar17;
   undefined *puVar18;
   undefined *puVar19;
   uint uVar20;
   uint *puVar21;
   uint uVar22;
   byte *pbVar23;
   puVar21 = (uint*)&_hb_NullPool;
   puVar18 = *(undefined**)this;
   puVar11 = &_hb_NullPool;
   if (puVar18 != (undefined*)0x0) {
      puVar11 = puVar18;
   }

   puVar19 = &_hb_NullPool;
   if (7 < *(uint*)( puVar11 + 0x18 )) {
      puVar19 = *(undefined**)( puVar11 + 0x10 );
   }

   uVar20 = *(uint*)( puVar19 + 4 );
   if (uVar20 != 0) {
      uVar5 = *(uint*)( param_1 + 0x68 );
      uVar22 = uVar20 >> 0x18 | ( uVar20 & 0xff0000 ) >> 8 | ( uVar20 & 0xff00 ) << 8 | uVar20 << 0x18;
      uVar20 = *(uint*)( param_1 + 0x6c );
      if (( *(uint*)( param_1 + 0x6c ) <= uVar5 ) && ( uVar20 = uVar5 != 0 )) {
         uVar20 = uVar5;
      }

      puVar18 = puVar19 + 8;
      if (*(int*)( puVar19 + 4 ) == 0) {
         puVar18 = &_hb_NullPool;
         uVar5 = 0;
      }
 else {
         uVar5 = *(uint*)( puVar19 + 4 );
      }

      uVar5 = uVar5 >> 0x18 | ( uVar5 & 0xff0000 ) >> 8 | ( uVar5 & 0xff00 ) << 8 | uVar5 << 0x18;
      bVar1 = puVar18[0x2c];
      if ((byte)puVar18[0x2c] < (byte)puVar19[0x35]) {
         bVar1 = puVar19[0x35];
      }

      if (uVar22 < 2) {
         uVar15 = 0;
      }
 else {
         puVar18 = puVar19 + 0x38;
         uVar3 = 1;
         uVar14 = 0;
         uVar10 = (uint)bVar1;
         do {
            while (true) {
               uVar15 = uVar3;
               uVar6 = (uint)uVar15;
               if (uVar6 < uVar5) {
                  uVar5 = *(uint*)( puVar19 + 4 );
                  pbVar23 = puVar18 + 0x2d;
                  uVar5 = uVar5 >> 0x18 | ( uVar5 & 0xff0000 ) >> 8 | ( uVar5 & 0xff00 ) << 8 | uVar5 << 0x18;
                  puVar13 = puVar18;
                  if (uVar6 < uVar5) {
                     uVar5 = *(uint*)( puVar19 + 4 );
                     uVar5 = uVar5 >> 0x18 | ( uVar5 & 0xff0000 ) >> 8 | ( uVar5 & 0xff00 ) << 8 | uVar5 << 0x18;
                     puVar11 = puVar18;
                  }
 else {
                     puVar11 = &_hb_NullPool;
                  }

               }
 else {
                  pbVar23 = &DAT_00124055;
                  puVar11 = &_hb_NullPool;
                  puVar13 = &_hb_NullPool;
               }

               bVar1 = puVar11[0x2c];
               if (bVar1 < (byte)puVar13[0x2d]) {
                  bVar1 = *pbVar23;
               }

               uVar9 = (uint)bVar1;
               if (( uVar9 < uVar20 ) || ( uVar10 <= uVar9 )) break;
               LAB_0010a610:puVar18 = puVar18 + 0x30;
               uVar3 = ( ulong )(uVar6 + 1);
               uVar14 = uVar15;
               uVar10 = uVar9;
               if (uVar22 == uVar6 + 1) goto LAB_0010a679;
            }
;
            uVar12 = uVar20;
            if (uVar9 <= uVar20) {
               uVar12 = uVar9;
            }

            if (uVar10 < uVar12) goto LAB_0010a610;
            puVar18 = puVar18 + 0x30;
            uVar3 = ( ulong )(uVar6 + 1);
            uVar15 = uVar14;
         }
 while ( uVar22 != uVar6 + 1 );
      }

      LAB_0010a679:if ((uint)uVar15 < uVar5) {
         puVar21 = (uint*)( puVar19 + uVar15 * 0x30 + 8 );
         puVar18 = *(undefined**)this;
      }
 else {
         puVar18 = *(undefined**)this;
         puVar21 = (uint*)&_hb_NullPool;
      }

   }

   if (puVar18 == (undefined*)0x0) {
      puVar18 = &_hb_NullPool;
   }

   puVar11 = &_hb_NullPool;
   if (7 < *(uint*)( puVar18 + 0x18 )) {
      puVar11 = *(undefined**)( puVar18 + 0x10 );
   }

   uVar20 = *puVar21;
   uVar5 = puVar21[2];
   if (uVar5 != 0) {
      uVar22 = 0;
      puVar7 = (ushort*)( puVar11 + ( uVar20 >> 0x18 | ( uVar20 & 0xff0000 ) >> 8 | ( uVar20 & 0xff00 ) << 8 | uVar20 << 0x18 ) );
      do {
         uVar4 = *puVar7 << 8 | *puVar7 >> 8;
         if (( uVar4 <= param_2 ) && ( uVar10 = ( uint )(ushort)(puVar7[1] << 8 | puVar7[1] >> 8) ),param_2 <= uVar10) {
            if (( (char)puVar21[0xb] == '\0' ) || ( ( ( *(char*)( (long)puVar21 + 0x2d ) == '\0' || ( param_2 < uVar4 ) ) || ( uVar10 < param_2 ) ) )) break;
            uVar5 = *(uint*)( puVar7 + 2 );
            psVar8 = (short*)&_hb_NullPool;
            if (uVar5 != 0) {
               psVar8 = (short*)( (long)( puVar11 + ( uVar20 >> 0x18 | ( uVar20 & 0xff0000 ) >> 8 | ( uVar20 & 0xff00 ) << 8 | uVar20 << 0x18 ) ) + ( ulong )(uVar5 >> 0x18 | ( uVar5 & 0xff0000 ) >> 8 | ( uVar5 & 0xff00 ) << 8 | uVar5 << 0x18) );
            }

            uVar20 = param_2 - uVar4;
            sVar2 = psVar8[1];
            if (*psVar8 == 0x100) {
               uVar5 = *(uint*)( psVar8 + ( ulong )(uVar20 + 1) * 2 + 4 );
               uVar20 = *(uint*)( psVar8 + (ulong)uVar20 * 2 + 4 );
               uVar5 = uVar5 >> 0x18 | ( uVar5 & 0xff0000 ) >> 8 | ( uVar5 & 0xff00 ) << 8 | uVar5 << 0x18;
               uVar20 = uVar20 >> 0x18 | ( uVar20 & 0xff0000 ) >> 8 | ( uVar20 & 0xff00 ) << 8 | uVar20 << 0x18;
               if (uVar5 <= uVar20) break;
            }
 else {
               if (*psVar8 != 0x300) break;
               uVar16 = psVar8[(ulong)uVar20 + 4] << 8 | (ushort)psVar8[(ulong)uVar20 + 4] >> 8;
               uVar4 = psVar8[( ulong )(uVar20 + 1) + 4] << 8 | (ushort)psVar8[( ulong )(uVar20 + 1) + 4] >> 8;
               uVar20 = (uint)uVar16;
               uVar5 = (uint)uVar4;
               if (uVar4 <= uVar16) break;
            }

            uVar22 = *(uint*)( psVar8 + 2 );
            puVar18 = *(undefined**)( this + 8 );
            uVar5 = uVar5 - uVar20;
            uVar20 = ( uVar22 >> 0x18 | ( uVar22 & 0xff0000 ) >> 8 | ( uVar22 & 0xff00 ) << 8 | uVar22 << 0x18 ) + uVar20;
            puVar11 = &_hb_NullPool;
            if (puVar18 != (undefined*)0x0) {
               puVar11 = puVar18;
            }

            uVar22 = *(uint*)( puVar11 + 0x18 );
            if (( uVar22 < uVar20 ) || ( uVar22 - uVar20 < uVar5 )) break;
            if (sVar2 == 0x1200) {
               if (uVar5 < 0xc) break;
               puVar19 = &_hb_NullPool;
               if (3 < uVar22) {
                  puVar19 = *(undefined**)( puVar11 + 0x10 );
               }

               uVar5 = *(uint*)( puVar19 + (ulong)uVar20 + 8 );
               iVar17 = uVar20 + 0xc;
               uVar20 = uVar5 >> 0x18 | ( uVar5 & 0xff0000 ) >> 8 | ( uVar5 & 0xff00 ) << 8 | uVar5 << 0x18;
            }
 else if (sVar2 == 0x1300) {
               if (uVar5 < 4) break;
               puVar19 = &_hb_NullPool;
               if (3 < uVar22) {
                  puVar19 = *(undefined**)( puVar11 + 0x10 );
               }

               uVar5 = *(uint*)( puVar19 + uVar20 );
               iVar17 = uVar20 + 4;
               uVar20 = uVar5 >> 0x18 | ( uVar5 & 0xff0000 ) >> 8 | ( uVar5 & 0xff00 ) << 8 | uVar5 << 0x18;
            }
 else {
               if (( sVar2 != 0x1100 ) || ( uVar5 < 9 )) break;
               puVar19 = &_hb_NullPool;
               if (3 < uVar22) {
                  puVar19 = *(undefined**)( puVar11 + 0x10 );
               }

               uVar5 = *(uint*)( puVar19 + (ulong)uVar20 + 5 );
               iVar17 = uVar20 + 9;
               uVar20 = uVar5 >> 0x18 | ( uVar5 & 0xff0000 ) >> 8 | ( uVar5 & 0xff00 ) << 8 | uVar5 << 0x18;
            }

            hb_blob_create_sub_blob(puVar18, iVar17, uVar20);
            return;
         }

         uVar22 = uVar22 + 1;
         puVar7 = puVar7 + 4;
      }
 while ( uVar22 < ( uVar5 >> 0x18 | ( uVar5 & 0xff0000 ) >> 8 | ( uVar5 & 0xff00 ) << 8 | uVar5 << 0x18 ) );
   }

   hb_blob_get_empty();
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* hb_paint_extents_context_t::hb_paint_extents_context_t() */void hb_paint_extents_context_t::hb_paint_extents_context_t(hb_paint_extents_context_t *this) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined4 uVar5;
   undefined8 *puVar6;
   undefined4 *puVar7;
   *(undefined4*)( this + 4 ) = 0;
   for (int i = 0; i < 5; i++) {
      *(undefined8*)( this + ( 8*i + 8 ) ) = 0;
   }

   puVar6 = (undefined8*)malloc(0xc0);
   uVar2 = _UNK_00120fb8;
   uVar1 = __LC3;
   if (puVar6 == (undefined8*)0x0) {
      __hb_CrapPool = __hb_NullPool;
      _strlen = _memcpy;
      _malloc = CONCAT44(uRam000000000012403c, _realloc);
      *(undefined4*)this = 0xffffffff;
   }
 else {
      *(undefined8**)( this + 8 ) = puVar6;
      *(undefined8*)this = 0x100000008;
      puVar6[2] = 0;
      *puVar6 = uVar1;
      puVar6[1] = uVar2;
   }

   puVar7 = (undefined4*)malloc(0xa0);
   uVar5 = _realloc;
   uVar2 = _UNK_00120fc8;
   uVar1 = __LC11;
   if (puVar7 == (undefined4*)0x0) {
      __hb_CrapPool = __hb_NullPool;
      _strlen = _memcpy;
      *(undefined4*)( this + 0x10 ) = 0xffffffff;
      _malloc = CONCAT44(malloc_4, uVar5);
   }
 else {
      *(undefined4**)( this + 0x18 ) = puVar7;
      *(undefined8*)( this + 0x10 ) = 0x100000008;
      *puVar7 = 0;
      *(undefined8*)( puVar7 + 1 ) = uVar1;
      *(undefined8*)( puVar7 + 3 ) = uVar2;
   }

   puVar7 = (undefined4*)malloc(0xa0);
   uVar5 = _realloc;
   uVar4 = _memcpy;
   uVar3 = __hb_NullPool;
   uVar2 = _UNK_00120fc8;
   uVar1 = __LC11;
   if (puVar7 != (undefined4*)0x0) {
      *(undefined4**)( this + 0x28 ) = puVar7;
      *(undefined8*)( this + 0x20 ) = 0x100000008;
      *puVar7 = 2;
      *(undefined8*)( puVar7 + 1 ) = uVar1;
      *(undefined8*)( puVar7 + 3 ) = uVar2;
      return;
   }

   *(undefined4*)( this + 0x20 ) = 0xffffffff;
   _malloc = CONCAT44(malloc_4, uVar5);
   __hb_CrapPool = uVar3;
   _strlen = uVar4;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OT::Affine2x3::paint_glyph(OT::hb_paint_context_t*, unsigned int) const */void OT::Affine2x3::paint_glyph(Affine2x3 *this, hb_paint_context_t *param_1, uint param_2) {
   uint uVar1;
   long lVar2;
   long *plVar3;
   float fVar4;
   undefined1 auVar5[16];
   lVar2 = *(long*)( param_1 + 0x10 );
   for (int i = 0; i < 5; i++) {
      ItemVarStoreInstancer::operator ()(*(ItemVarStoreInstancer**)( param_1 + 48 ), param_2, ( 5 - i ));
   }

   fVar4 = (float)ItemVarStoreInstancer::operator ()(*(ItemVarStoreInstancer**)( param_1 + 0x30 ), param_2, 0);
   uVar1 = *(uint*)this;
   plVar3 = *(long**)( lVar2 + 0x80 );
   auVar5._4_12_ = SUB1612((undefined1[16])0x0, 4);
   auVar5._0_4_ = ( (float)(int)( uVar1 >> 0x18 | ( uVar1 & 0xff0000 ) >> 8 | ( uVar1 & 0xff00 ) << 8 | uVar1 << 0x18 ) + fVar4 ) * __LC12;
   if (plVar3 != (long*)0x0) {
      plVar3 = (long*)*plVar3;
   }

   /* WARNING: Could not recover jumptable at 0x0010ab9b. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( lVar2 + 0x10 ) )(auVar5._0_8_, lVar2, *(undefined8*)( param_1 + 0x18 ), plVar3);
   return;
}
/* OT::ClipList::sanitize(hb_sanitize_context_t*) const */undefined8 OT::ClipList::sanitize(ClipList *this, hb_sanitize_context_t *param_1) {
   long lVar1;
   uint uVar2;
   ClipList *pCVar3;
   int iVar4;
   ClipList *pCVar5;
   uint uVar6;
   bool bVar7;
   pCVar5 = this + 5;
   if (( ulong )((long)pCVar5 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 )) {
      uVar2 = *(uint*)( this + 1 );
      lVar1 = ( ulong )(uVar2 >> 0x18 | ( uVar2 & 0xff0000 ) >> 8 | ( uVar2 & 0xff00 ) << 8 | uVar2 << 0x18) * 7;
      bVar7 = (int)( (ulong)lVar1 >> 0x20 ) != 0;
      uVar2 = (uint)lVar1;
      uVar6 = (uint)bVar7;
      if (( ( ( !bVar7 ) && ( ( ulong )((long)pCVar5 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 ) ) ) && ( uVar2 <= ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)pCVar5) ) ) && ( iVar4 = *(int*)( param_1 + 0x1c ) - uVar2 ),*(int*)( param_1 + 0x1c ) = iVar4,0 < iVar4) {
         uVar2 = *(uint*)( this + 1 );
         pCVar5 = this + 0xc;
         if (uVar2 != 0) {
            do {
               if (( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pCVar5 - *(long*)( param_1 + 8 ))) {
                  return 0;
               }

               iVar4 = (uint)(byte)pCVar5[-3] * 0x10000 + (uint)(byte)pCVar5[-2] * 0x100 + (uint)(byte)pCVar5[-1];
               if (iVar4 != 0) {
                  pCVar3 = this + iVar4;
                  if ((ClipList*)( ulong ) * (uint*)( param_1 + 0x18 ) < pCVar3 + ( 1 - *(long*)( param_1 + 8 ) )) {
                     LAB_0010acb0:if (0x1f < *(uint*)( param_1 + 0x2c )) {
                        return 0;
                     }

                     *(uint*)( param_1 + 0x2c ) = *(uint*)( param_1 + 0x2c ) + 1;
                     if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
                        return 0;
                     }

                     pCVar5[-1] = (ClipList)0x0;
                     *(undefined2*)( pCVar5 + -3 ) = 0;
                  }
 else if (*pCVar3 == (ClipList)0x1) {
                     if ((ClipList*)( ulong ) * (uint*)( param_1 + 0x18 ) < pCVar3 + ( 9 - *(long*)( param_1 + 8 ) )) goto LAB_0010acb0;
                  }
 else if (*pCVar3 == (ClipList)0x2) {
                     if (( (ClipList*)( ulong ) * (uint*)( param_1 + 0x18 ) < pCVar3 + ( 0xd - *(long*)( param_1 + 8 ) ) ) || ( (ClipList*)( ulong ) * (uint*)( param_1 + 0x18 ) < pCVar3 + ( 9 - *(long*)( param_1 + 8 ) ) )) goto LAB_0010acb0;
                  }

               }

               uVar6 = uVar6 + 1;
               pCVar5 = pCVar5 + 7;
            }
 while ( uVar6 < ( uVar2 >> 0x18 | ( uVar2 & 0xff0000 ) >> 8 | ( uVar2 & 0xff00 ) << 8 | uVar2 << 0x18 ) );
         }

         return 1;
      }

   }

   return 0;
}
/* OT::ClipList::get_extents(unsigned int, hb_glyph_extents_t*, OT::ItemVarStoreInstancer const&)
   const */undefined8 OT::ClipList::get_extents(ClipList *this, uint param_1, hb_glyph_extents_t *param_2, ItemVarStoreInstancer *param_3) {
   int iVar1;
   uint uVar2;
   int iVar3;
   int iVar4;
   ClipList *pCVar5;
   int iVar6;
   float fVar7;
   uVar2 = *(uint*)( this + 1 );
   iVar3 = ( uVar2 >> 0x18 | ( uVar2 & 0xff0000 ) >> 8 | ( uVar2 & 0xff00 ) << 8 | uVar2 << 0x18 ) - 1;
   if (iVar3 < 0) {
      return 0;
   }

   iVar1 = 0;
   while (true) {
      while (true) {
         uVar2 = ( uint )(iVar1 + iVar3) >> 1;
         pCVar5 = this + (ulong)uVar2 * 7 + 5;
         if (( ushort )(*(ushort*)pCVar5 << 8 | *(ushort*)pCVar5 >> 8) <= param_1) break;
         iVar3 = uVar2 - 1;
         if (iVar3 < iVar1) {
            return 0;
         }

      }
;
      if (param_1 <= ( ushort )(*(ushort*)( pCVar5 + 2 ) << 8 | *(ushort*)( pCVar5 + 2 ) >> 8)) break;
      iVar1 = uVar2 + 1;
      if (iVar3 < iVar1) {
         return 0;
      }

   }
;
   iVar3 = (uint)(byte)pCVar5[4] * 0x10000 + (uint)(byte)pCVar5[5] * 0x100 + (uint)(byte)pCVar5[6];
   pCVar5 = (ClipList*)&_hb_NullPool;
   if (iVar3 != 0) {
      pCVar5 = this + iVar3;
   }

   if (*pCVar5 == (ClipList)0x1) {
      iVar4 = (int)(short)( *(ushort*)( pCVar5 + 1 ) << 8 | *(ushort*)( pCVar5 + 1 ) >> 8 );
      iVar3 = (int)(short)( *(ushort*)( pCVar5 + 3 ) << 8 | *(ushort*)( pCVar5 + 3 ) >> 8 );
      iVar1 = (int)(short)( *(ushort*)( pCVar5 + 5 ) << 8 | *(ushort*)( pCVar5 + 5 ) >> 8 );
      iVar6 = (int)(short)( *(ushort*)( pCVar5 + 7 ) << 8 | *(ushort*)( pCVar5 + 7 ) >> 8 );
   }
 else {
      if (*pCVar5 != (ClipList)0x2) {
         return 1;
      }

      iVar4 = (int)(short)( *(ushort*)( pCVar5 + 1 ) << 8 | *(ushort*)( pCVar5 + 1 ) >> 8 );
      iVar3 = (int)(short)( *(ushort*)( pCVar5 + 3 ) << 8 | *(ushort*)( pCVar5 + 3 ) >> 8 );
      iVar1 = (int)(short)( *(ushort*)( pCVar5 + 5 ) << 8 | *(ushort*)( pCVar5 + 5 ) >> 8 );
      iVar6 = (int)(short)( *(ushort*)( pCVar5 + 7 ) << 8 | *(ushort*)( pCVar5 + 7 ) >> 8 );
      if (( *(long*)param_3 != 0 ) && ( *(int*)( param_3 + 0x18 ) != 0 )) {
         uVar2 = *(uint*)( pCVar5 + 9 );
         fVar7 = (float)ItemVarStoreInstancer::operator ()(param_3, uVar2 >> 0x18 | ( uVar2 & 0xff0000 ) >> 8 | ( uVar2 & 0xff00 ) << 8 | uVar2 << 0x18, 0);
         fVar7 = fVar7 + _LC9;
         if ((float)( (uint)fVar7 & _LC4 ) < _LC1) {
            fVar7 = (float)( ( uint )((float)(int)fVar7 - (float)( -(uint)(fVar7 < (float)(int)fVar7) & _LC3 )) | ~_LC4 & (uint)fVar7 );
         }

         uVar2 = *(uint*)( pCVar5 + 9 );
         iVar4 = (int)( (float)iVar4 + fVar7 );
         fVar7 = (float)ItemVarStoreInstancer::operator ()(param_3, uVar2 >> 0x18 | ( uVar2 & 0xff0000 ) >> 8 | ( uVar2 & 0xff00 ) << 8 | uVar2 << 0x18, 1);
         fVar7 = fVar7 + _LC9;
         if ((float)( (uint)fVar7 & _LC4 ) < _LC1) {
            fVar7 = (float)( ( uint )((float)(int)fVar7 - (float)( -(uint)(fVar7 < (float)(int)fVar7) & _LC3 )) | ~_LC4 & (uint)fVar7 );
         }

         uVar2 = *(uint*)( pCVar5 + 9 );
         iVar3 = (int)( (float)iVar3 + fVar7 );
         fVar7 = (float)ItemVarStoreInstancer::operator ()(param_3, uVar2 >> 0x18 | ( uVar2 & 0xff0000 ) >> 8 | ( uVar2 & 0xff00 ) << 8 | uVar2 << 0x18, 2);
         fVar7 = fVar7 + _LC9;
         if ((float)( (uint)fVar7 & _LC4 ) < _LC1) {
            fVar7 = (float)( ( uint )((float)(int)fVar7 - (float)( -(uint)(fVar7 < (float)(int)fVar7) & _LC3 )) | ~_LC4 & (uint)fVar7 );
         }

         uVar2 = *(uint*)( pCVar5 + 9 );
         iVar1 = (int)( (float)iVar1 + fVar7 );
         fVar7 = (float)ItemVarStoreInstancer::operator ()(param_3, uVar2 >> 0x18 | ( uVar2 & 0xff0000 ) >> 8 | ( uVar2 & 0xff00 ) << 8 | uVar2 << 0x18, 3);
         fVar7 = fVar7 + _LC9;
         if ((float)( (uint)fVar7 & _LC4 ) < _LC1) {
            fVar7 = (float)( ( uint )((float)(int)fVar7 - (float)( -(uint)(fVar7 < (float)(int)fVar7) & _LC3 )) | ~_LC4 & (uint)fVar7 );
         }

         iVar6 = (int)( (float)iVar6 + fVar7 );
      }

   }

   *(ulong*)param_2 = CONCAT44(iVar6, iVar4);
   *(ulong*)( param_2 + 8 ) = CONCAT44(iVar3 - iVar6, iVar1 - iVar4);
   return 1;
}
/* OT::sbix::accelerator_t::get_png_extents(hb_font_t*, unsigned int, hb_glyph_extents_t*, bool)
   const */bool OT::sbix::accelerator_t::get_png_extents(accelerator_t *this, hb_font_t *param_1, uint param_2, hb_glyph_extents_t *param_3, bool param_4) {
   uint uVar1;
   uint uVar2;
   ushort *puVar3;
   undefined *puVar4;
   uint *puVar5;
   uint uVar6;
   int iVar7;
   short *psVar8;
   undefined *puVar9;
   long lVar10;
   ushort *puVar11;
   undefined *puVar12;
   uint uVar13;
   int iVar14;
   uint uVar15;
   ulong uVar16;
   ushort uVar17;
   int iVar18;
   int iVar19;
   ulong uVar20;
   uint uVar21;
   float fVar22;
   float fVar23;
   float fVar24;
   float fVar25;
   puVar3 = (ushort*)&_hb_NullPool;
   uVar16 = (ulong)param_2;
   puVar12 = *(undefined**)this;
   puVar4 = &_hb_NullPool;
   if (puVar12 != (undefined*)0x0) {
      puVar4 = puVar12;
   }

   psVar8 = (short*)&_hb_NullPool;
   if (7 < *(uint*)( puVar4 + 0x18 )) {
      psVar8 = *(short**)( puVar4 + 0x10 );
   }

   if (*psVar8 != 0) {
      uVar2 = *(uint*)( psVar8 + 2 );
      uVar21 = uVar2 >> 0x18 | ( uVar2 & 0xff0000 ) >> 8 | ( uVar2 & 0xff00 ) << 8 | uVar2 << 0x18;
      if (uVar2 != 0) {
         uVar2 = *(uint*)( param_1 + 0x68 );
         uVar15 = *(uint*)( param_1 + 0x6c );
         if (( *(uint*)( param_1 + 0x6c ) <= uVar2 ) && ( uVar15 = uVar2 != 0 )) {
            uVar15 = uVar2;
         }

         uVar2 = *(uint*)( psVar8 + 4 );
         puVar3 = (ushort*)&_hb_NullPool;
         if (uVar2 != 0) {
            puVar3 = (ushort*)( (long)psVar8 + ( ulong )(uVar2 >> 0x18 | ( uVar2 & 0xff0000 ) >> 8 | ( uVar2 & 0xff00 ) << 8 | uVar2 << 0x18) );
         }

         puVar12 = *(undefined**)this;
         if (uVar21 < 2) {
            uVar20 = 0;
         }
 else {
            lVar10 = 8;
            uVar20 = 0;
            uVar6 = 1;
            uVar2 = ( uint )(ushort)(*puVar3 << 8 | *puVar3 >> 8);
            do {
               while (true) {
                  puVar4 = &_hb_NullPool;
                  if (puVar12 != (undefined*)0x0) {
                     puVar4 = puVar12;
                  }

                  puVar9 = &_hb_NullPool;
                  if (7 < *(uint*)( puVar4 + 0x18 )) {
                     puVar9 = *(undefined**)( puVar4 + 0x10 );
                  }

                  uVar1 = *(uint*)( puVar9 + 4 );
                  if (uVar6 < ( uVar1 >> 0x18 | ( uVar1 & 0xff0000 ) >> 8 | ( uVar1 & 0xff00 ) << 8 | uVar1 << 0x18 )) {
                     puVar12 = *(undefined**)this;
                     puVar5 = (uint*)( puVar9 + lVar10 + 4 );
                  }
 else {
                     puVar5 = (uint*)&_hb_NullPool;
                  }

                  lVar10 = lVar10 + 4;
                  uVar1 = *puVar5;
                  puVar3 = (ushort*)&_hb_NullPool;
                  if (uVar1 != 0) {
                     puVar3 = (ushort*)( puVar9 + ( uVar1 >> 0x18 | ( uVar1 & 0xff0000 ) >> 8 | ( uVar1 & 0xff00 ) << 8 | uVar1 << 0x18 ) );
                  }

                  uVar1 = ( uint )(ushort)(*puVar3 << 8 | *puVar3 >> 8);
                  if (( uVar1 < uVar15 ) || ( uVar2 <= uVar1 )) break;
                  LAB_0010b1a8:uVar20 = (ulong)uVar6;
                  uVar6 = uVar6 + 1;
                  uVar2 = uVar1;
                  if (uVar21 == uVar6) goto LAB_0010b223;
               }
;
               uVar13 = uVar15;
               if (uVar1 <= uVar15) {
                  uVar13 = uVar1;
               }

               if (uVar2 < uVar13) goto LAB_0010b1a8;
               uVar6 = uVar6 + 1;
            }
 while ( uVar21 != uVar6 );
         }

         LAB_0010b223:puVar5 = (uint*)&_hb_NullPool;
         puVar4 = &_hb_NullPool;
         if (puVar12 != (undefined*)0x0) {
            puVar4 = puVar12;
         }

         puVar9 = &_hb_NullPool;
         if (7 < *(uint*)( puVar4 + 0x18 )) {
            puVar9 = *(undefined**)( puVar4 + 0x10 );
         }

         uVar2 = *(uint*)( puVar9 + 4 );
         if ((uint)uVar20 < ( uVar2 >> 0x18 | ( uVar2 & 0xff0000 ) >> 8 | ( uVar2 & 0xff00 ) << 8 | uVar2 << 0x18 )) {
            puVar12 = *(undefined**)this;
            puVar5 = (uint*)( puVar9 + uVar20 * 4 + 8 );
         }

         uVar2 = *puVar5;
         puVar3 = (ushort*)&_hb_NullPool;
         if (uVar2 != 0) {
            puVar3 = (ushort*)( puVar9 + ( uVar2 >> 0x18 | ( uVar2 & 0xff0000 ) >> 8 | ( uVar2 & 0xff00 ) << 8 | uVar2 << 0x18 ) );
         }

      }

      uVar17 = *puVar3 << 8 | *puVar3 >> 8;
      if (uVar17 != 0) {
         iVar19 = (int)puVar3 - (int)*(undefined8*)( puVar12 + 0x10 );
         iVar14 = 9;
         do {
            if (*(uint*)( this + 8 ) <= (uint)uVar16) break;
            uVar2 = *(uint*)( puVar3 + uVar16 * 2 + 2 );
            uVar21 = *(uint*)( puVar3 + ( ulong )((uint)uVar16 + 1) * 2 + 2 );
            uVar21 = uVar21 >> 0x18 | ( uVar21 & 0xff0000 ) >> 8 | ( uVar21 & 0xff00 ) << 8 | uVar21 << 0x18;
            uVar15 = uVar2 >> 0x18 | ( uVar2 & 0xff0000 ) >> 8 | ( uVar2 & 0xff00 ) << 8 | uVar2 << 0x18;
            if (( ( uVar21 <= uVar15 ) || ( uVar21 - uVar15 < 9 ) ) || ( ( uint )(*(int*)( puVar12 + 0x18 ) - iVar19) < uVar21 )) break;
            iVar7 = ( uVar21 - uVar15 ) - 8;
            puVar11 = (ushort*)( (ulong)uVar15 + (long)puVar3 );
            if (uVar2 == 0) {
               puVar11 = (ushort*)&_hb_NullPool;
            }

            if (*(int*)( puVar11 + 2 ) != 0x65707564) {
               if (*(int*)( puVar11 + 2 ) == 0x20676e70) {
                  iVar14 = (int)(short)( *puVar11 << 8 | *puVar11 >> 8 );
                  iVar18 = (int)(short)( puVar11[1] << 8 | puVar11[1] >> 8 );
                  lVar10 = hb_blob_create_sub_blob(puVar12, uVar15 + 8 + iVar19, iVar7);
                  goto LAB_0010b322;
               }

               break;
            }

            if (iVar7 == 1) break;
            uVar16 = ( ulong )(ushort)(puVar11[4] << 8 | puVar11[4] >> 8);
            iVar14 = iVar14 + -1;
         }
 while ( iVar14 != 0 );
      }

      uVar17 = 0;
      iVar18 = 0;
      lVar10 = hb_blob_get_empty();
      iVar14 = 0;
      LAB_0010b322:puVar12 = &_hb_NullPool;
      if (0x1c < *(uint*)( lVar10 + 0x18 )) {
         puVar12 = *(undefined**)( lVar10 + 0x10 );
      }

      uVar2 = *(uint*)( puVar12 + 0x14 );
      uVar2 = uVar2 >> 0x18 | ( uVar2 & 0xff0000 ) >> 8 | ( uVar2 & 0xff00 ) << 8 | uVar2 << 0x18;
      if (uVar2 < 0x10000) {
         uVar21 = *(uint*)( puVar12 + 0x10 );
         uVar21 = uVar21 >> 0x18 | ( uVar21 & 0xff0000 ) >> 8 | ( uVar21 & 0xff00 ) << 8 | uVar21 << 0x18;
         if (uVar21 < 0x10000) {
            *(ulong*)param_3 = CONCAT44(iVar18 + uVar2, iVar14);
            *(ulong*)( param_3 + 8 ) = CONCAT44(-uVar2, uVar21);
            if (uVar17 == 0) {
               if (!param_4) goto LAB_0010b37c;
            }
 else {
               if (!param_4) goto LAB_0010b37c;
               uVar2 = *(uint*)( *(long*)( param_1 + 0x20 ) + 0x14 );
               if (uVar2 == 0) {
                  uVar2 = hb_face_t::load_upem();
               }

               fVar25 = (float)uVar2 / (float)uVar17;
               fVar22 = (float)*(int*)param_3 * fVar25 + _LC9;
               if ((float)( (uint)fVar22 & _LC4 ) < _LC1) {
                  fVar22 = (float)( ( uint )((float)(int)fVar22 - (float)( -(uint)(fVar22 < (float)(int)fVar22) & _LC3 )) | ~_LC4 & (uint)fVar22 );
               }

               fVar24 = (float)*(int*)( param_3 + 4 ) * fVar25 + _LC9;
               if ((float)( (uint)fVar24 & _LC4 ) < _LC1) {
                  fVar24 = (float)( ( uint )((float)(int)fVar24 - (float)( -(uint)(fVar24 < (float)(int)fVar24) & _LC3 )) | ~_LC4 & (uint)fVar24 );
               }

               fVar23 = (float)*(int*)( param_3 + 8 ) * fVar25 + _LC9;
               if ((float)( (uint)fVar23 & _LC4 ) < _LC1) {
                  fVar23 = (float)( ( uint )((float)(int)fVar23 - (float)( -(uint)(fVar23 < (float)(int)fVar23) & _LC3 )) | ~_LC4 & (uint)fVar23 );
               }

               fVar25 = (float)*(int*)( param_3 + 0xc ) * fVar25 + _LC9;
               if ((float)( (uint)fVar25 & _LC4 ) < _LC1) {
                  fVar25 = (float)( ( uint )((float)(int)fVar25 - (float)( -(uint)(fVar25 < (float)(int)fVar25) & _LC3 )) | ~_LC4 & (uint)fVar25 );
               }

               *(int*)param_3 = (int)fVar22;
               *(int*)( param_3 + 4 ) = (int)fVar24;
               *(int*)( param_3 + 8 ) = (int)fVar23;
               *(int*)( param_3 + 0xc ) = (int)fVar25;
            }

            hb_font_t::scale_glyph_extents(param_1, param_3);
            LAB_0010b37c:hb_blob_destroy(lVar10);
            return uVar17 != 0;
         }

      }

      hb_blob_destroy(lVar10);
   }

   return false;
}
/* OT::sbix::accelerator_t::paint_glyph(hb_font_t*, unsigned int, hb_paint_funcs_t*, void*) const */bool OT::sbix::accelerator_t::paint_glyph(accelerator_t *this, hb_font_t *param_1, uint param_2, hb_paint_funcs_t *param_3, void *param_4) {
   uint uVar1;
   char cVar2;
   uint uVar3;
   short *psVar4;
   uint *puVar5;
   long lVar6;
   uint uVar7;
   int iVar8;
   short *psVar9;
   ushort *puVar10;
   undefined *puVar11;
   ulong uVar12;
   long lVar13;
   undefined *puVar14;
   uint uVar15;
   undefined *puVar16;
   int iVar17;
   uint uVar18;
   uint uVar19;
   int iVar20;
   long in_FS_OFFSET;
   bool bVar21;
   undefined1 local_68[16];
   hb_glyph_extents_t local_58[8];
   undefined4 local_50;
   int local_4c;
   long local_40;
   puVar16 = *(undefined**)this;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   psVar4 = (short*)&_hb_NullPool;
   puVar14 = &_hb_NullPool;
   if (puVar16 != (undefined*)0x0) {
      puVar14 = puVar16;
   }

   psVar9 = (short*)&_hb_NullPool;
   if (7 < *(uint*)( puVar14 + 0x18 )) {
      psVar9 = *(short**)( puVar14 + 0x10 );
   }

   if (*psVar9 != 0) {
      uVar18 = *(uint*)( psVar9 + 2 );
      uVar19 = uVar18 >> 0x18 | ( uVar18 & 0xff0000 ) >> 8 | ( uVar18 & 0xff00 ) << 8 | uVar18 << 0x18;
      if (uVar18 != 0) {
         uVar18 = *(uint*)( param_1 + 0x68 );
         uVar15 = *(uint*)( param_1 + 0x6c );
         if (( *(uint*)( param_1 + 0x6c ) <= uVar18 ) && ( uVar15 = uVar18 != 0 )) {
            uVar15 = uVar18;
         }

         uVar18 = *(uint*)( psVar9 + 4 );
         puVar10 = (ushort*)&_hb_NullPool;
         if (uVar18 != 0) {
            puVar10 = (ushort*)( (long)psVar9 + ( ulong )(uVar18 >> 0x18 | ( uVar18 & 0xff0000 ) >> 8 | ( uVar18 & 0xff00 ) << 8 | uVar18 << 0x18) );
         }

         puVar16 = *(undefined**)this;
         if (uVar19 < 2) {
            uVar12 = 0;
         }
 else {
            lVar13 = 8;
            uVar12 = 0;
            uVar7 = 1;
            uVar18 = ( uint )(ushort)(*puVar10 << 8 | *puVar10 >> 8);
            do {
               while (true) {
                  puVar14 = &_hb_NullPool;
                  if (puVar16 != (undefined*)0x0) {
                     puVar14 = puVar16;
                  }

                  puVar11 = &_hb_NullPool;
                  if (7 < *(uint*)( puVar14 + 0x18 )) {
                     puVar11 = *(undefined**)( puVar14 + 0x10 );
                  }

                  uVar3 = *(uint*)( puVar11 + 4 );
                  if (uVar7 < ( uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18 )) {
                     puVar16 = *(undefined**)this;
                     puVar5 = (uint*)( puVar11 + lVar13 + 4 );
                  }
 else {
                     puVar5 = (uint*)&_hb_NullPool;
                  }

                  lVar13 = lVar13 + 4;
                  uVar3 = *puVar5;
                  puVar10 = (ushort*)&_hb_NullPool;
                  if (uVar3 != 0) {
                     puVar10 = (ushort*)( puVar11 + ( uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18 ) );
                  }

                  uVar3 = ( uint )(ushort)(*puVar10 << 8 | *puVar10 >> 8);
                  if (( uVar3 < uVar15 ) || ( uVar18 <= uVar3 )) break;
                  LAB_0010b6c0:uVar12 = (ulong)uVar7;
                  uVar7 = uVar7 + 1;
                  uVar18 = uVar3;
                  if (uVar19 == uVar7) goto LAB_0010b739;
               }
;
               uVar1 = uVar15;
               if (uVar3 <= uVar15) {
                  uVar1 = uVar3;
               }

               if (uVar18 < uVar1) goto LAB_0010b6c0;
               uVar7 = uVar7 + 1;
            }
 while ( uVar19 != uVar7 );
         }

         LAB_0010b739:puVar5 = (uint*)&_hb_NullPool;
         puVar14 = &_hb_NullPool;
         if (puVar16 != (undefined*)0x0) {
            puVar14 = puVar16;
         }

         puVar11 = &_hb_NullPool;
         if (7 < *(uint*)( puVar14 + 0x18 )) {
            puVar11 = *(undefined**)( puVar14 + 0x10 );
         }

         uVar18 = *(uint*)( puVar11 + 4 );
         if ((uint)uVar12 < ( uVar18 >> 0x18 | ( uVar18 & 0xff0000 ) >> 8 | ( uVar18 & 0xff00 ) << 8 | uVar18 << 0x18 )) {
            puVar16 = *(undefined**)this;
            puVar5 = (uint*)( puVar11 + uVar12 * 4 + 8 );
         }

         uVar18 = *puVar5;
         psVar4 = (short*)&_hb_NullPool;
         if (uVar18 != 0) {
            psVar4 = (short*)( puVar11 + ( uVar18 >> 0x18 | ( uVar18 & 0xff0000 ) >> 8 | ( uVar18 & 0xff00 ) << 8 | uVar18 << 0x18 ) );
         }

      }

      if (*psVar4 != 0) {
         iVar20 = (int)psVar4 - (int)*(undefined8*)( puVar16 + 0x10 );
         uVar12 = (ulong)param_2;
         iVar17 = 9;
         do {
            if (*(uint*)( this + 8 ) <= (uint)uVar12) break;
            uVar18 = *(uint*)( psVar4 + uVar12 * 2 + 2 );
            uVar19 = *(uint*)( psVar4 + ( ulong )((uint)uVar12 + 1) * 2 + 2 );
            uVar19 = uVar19 >> 0x18 | ( uVar19 & 0xff0000 ) >> 8 | ( uVar19 & 0xff00 ) << 8 | uVar19 << 0x18;
            uVar15 = uVar18 >> 0x18 | ( uVar18 & 0xff0000 ) >> 8 | ( uVar18 & 0xff00 ) << 8 | uVar18 << 0x18;
            if (( ( uVar19 <= uVar15 ) || ( uVar19 - uVar15 < 9 ) ) || ( ( uint )(*(int*)( puVar16 + 0x18 ) - iVar20) < uVar19 )) break;
            iVar8 = ( uVar19 - uVar15 ) - 8;
            puVar14 = (undefined*)( (ulong)uVar15 + (long)psVar4 );
            if (uVar18 == 0) {
               puVar14 = &_hb_NullPool;
            }

            if (*(int*)( puVar14 + 4 ) != 0x65707564) {
               if (*(int*)( puVar14 + 4 ) == 0x20676e70) {
                  lVar13 = hb_blob_create_sub_blob(puVar16, uVar15 + 8 + iVar20, iVar8);
                  goto LAB_0010b818;
               }

               break;
            }

            if (iVar8 == 1) break;
            uVar12 = ( ulong )(ushort)(*(ushort*)( puVar14 + 8 ) << 8 | *(ushort*)( puVar14 + 8 ) >> 8);
            iVar17 = iVar17 + -1;
         }
 while ( iVar17 != 0 );
      }

      lVar13 = hb_blob_get_empty();
      LAB_0010b818:lVar6 = hb_blob_get_empty();
      if (( ( lVar13 != lVar6 ) && ( iVar17 = hb_font_get_glyph_extents(param_1, param_2, local_68) ),iVar17 != 0 )) {
         iVar17 = ( **(code**)( param_3 + 0x48 ) )(*(undefined4*)( param_1 + 0x48 ), param_3, param_4, lVar13, local_50, -local_4c, 0x706e6720);
         bVar21 = iVar17 != 0;
         hb_blob_destroy(lVar13);
         goto LAB_0010b617;
      }

   }

   bVar21 = false;
   LAB_0010b617:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar21;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OT::sbix::sanitize(hb_sanitize_context_t*) const */undefined8 OT::sbix::sanitize(sbix *this, hb_sanitize_context_t *param_1) {
   uint uVar1;
   bool bVar2;
   uint uVar3;
   uint uVar4;
   int iVar5;
   sbix *psVar6;
   uint uVar7;
   psVar6 = this + 8;
   if (( ( ( ulong )((long)psVar6 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 ) ) && ( *(short*)this != 0 ) ) && ( ( ulong )((long)psVar6 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 ) )) {
      uVar3 = *(uint*)( this + 4 );
      uVar4 = uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18;
      bVar2 = ( uVar3 << 0x18 ) >> 0x1e != 0;
      uVar3 = (uint)bVar2;
      if (( ( !bVar2 ) && ( ( ulong )((long)psVar6 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 ) ) ) && ( ( uVar4 * 4 <= ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)psVar6) && ( iVar5 = *(int*)( param_1 + 0x1c ) + uVar4 * -4 ),*(int*)( param_1 + 0x1c ) = iVar5,0 < iVar5 ) )) {
         uVar4 = *(uint*)( this + 4 );
         psVar6 = this + 0xc;
         if (uVar4 != 0) {
            do {
               if (( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)psVar6 - *(long*)( param_1 + 8 ))) {
                  return 0;
               }

               uVar1 = *(uint*)( psVar6 + -4 );
               if (uVar1 != 0) {
                  if (( ulong )((long)( this + ( ulong )(uVar1 >> 0x18 | ( uVar1 & 0xff0000 ) >> 8 | ( uVar1 & 0xff00 ) << 8 | uVar1 << 0x18) + 4 ) - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 )) {
                     uVar7 = *(int*)( param_1 + 0x38 ) + 1;
                     if (( ( uVar7 >> 0x1e == 0 ) && ( uVar7 * 4 <= ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)( this + ( ulong )(uVar1 >> 0x18 | ( uVar1 & 0xff0000 ) >> 8 | ( uVar1 & 0xff00 ) << 8 | uVar1 << 0x18) + 4 )) ) ) && ( iVar5 = *(int*)( param_1 + 0x1c ) + uVar7 * -4 ),*(int*)( param_1 + 0x1c ) = iVar5,0 < iVar5) goto LAB_0010b9a8;
                  }

                  if (0x1f < *(uint*)( param_1 + 0x2c )) {
                     return 0;
                  }

                  *(uint*)( param_1 + 0x2c ) = *(uint*)( param_1 + 0x2c ) + 1;
                  if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
                     return 0;
                  }

                  *(undefined4*)( psVar6 + -4 ) = 0;
               }

               LAB_0010b9a8:uVar3 = uVar3 + 1;
               psVar6 = psVar6 + 4;
            }
 while ( uVar3 < ( uVar4 >> 0x18 | ( uVar4 & 0xff0000 ) >> 8 | ( uVar4 & 0xff00 ) << 8 | uVar4 << 0x18 ) );
         }

         return 1;
      }

   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* hb_hashmap_t<unsigned int, unsigned int, true>::alloc(unsigned int) */hb_hashmap_t<unsigned_int,unsigned_int,true> hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc(hb_hashmap_t<unsigned_int,unsigned_int,true> *this, uint param_1) {
   byte bVar1;
   int *__ptr;
   long lVar2;
   char cVar3;
   void *pvVar4;
   long lVar5;
   int *piVar6;
   int iVar7;
   undefined4 uVar8;
   ulong uVar9;
   hb_hashmap_t<unsigned_int,unsigned_int,true> hVar10;
   uint uVar11;
   uint uVar12;
   uint uVar13;
   uint uVar14;
   int *piVar15;
   size_t __size;
   uint uVar16;
   int iVar17;
   short sVar18;
   long in_FS_OFFSET;
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
   hVar10 = this[0x10];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (hVar10 == (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0) {
      LAB_0010bda3:hVar10 = (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0;
   }
 else {
      if (param_1 == 0) {
         param_1 = *(uint*)( this + 0x14 );
      }
 else {
         if (( param_1 >> 1 ) + param_1 < *(uint*)( this + 0x1c )) goto LAB_0010bd0d;
         if (param_1 < *(uint*)( this + 0x14 )) {
            param_1 = *(uint*)( this + 0x14 );
         }

      }

      uVar14 = param_1 * 2 + 8;
      uVar9 = (ulong)uVar14;
      if (uVar14 == 0) {
         pvVar4 = malloc(0xc);
         if (pvVar4 == (void*)0x0) goto LAB_0010bd9f;
         iVar17 = 0;
         sVar18 = 0;
         iVar7 = 0xc;
         __size = 0xc;
         LAB_0010bae9:pvVar4 = (void*)__memset_chk(pvVar4, 0, iVar7, __size);
      }
 else {
         iVar7 = 0x1f;
         if (uVar14 != 0) {
            for (; uVar14 >> iVar7 == 0; iVar7 = iVar7 + -1) {}
         }

         uVar14 = iVar7 + 1;
         uVar9 = (ulong)uVar14;
         uVar16 = 1 << ( (byte)uVar14 & 0x1f );
         __size = (ulong)uVar16 * 0xc;
         pvVar4 = malloc(__size);
         if (pvVar4 == (void*)0x0) {
            LAB_0010bd9f:this[0x10] = (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0;
            goto LAB_0010bda3;
         }

         sVar18 = (short)uVar14 * 2;
         iVar17 = uVar16 - 1;
         iVar7 = 0xc << ( (byte)uVar14 & 0x1f );
         if (iVar7 != 0) goto LAB_0010bae9;
      }

      uStack_c0 = _UNK_00120fd8;
      uStack_c8 = __LC13;
      iVar7 = *(int*)( this + 0x1c );
      *(undefined8*)( this + 0x14 ) = 0;
      *(int*)( this + 0x1c ) = iVar17;
      __ptr = *(int**)( this + 0x28 );
      uVar14 = ( iVar7 + 1 ) - ( uint )(iVar7 == 0);
      uStack_b8 = __LC14;
      uStack_b0 = _UNK_00120fe8;
      uStack_a8 = __LC15;
      uStack_a0 = _UNK_00120ff8;
      uStack_98 = __LC16;
      uStack_90 = _UNK_00121008;
      uStack_88 = __LC17;
      uStack_80 = _UNK_00121018;
      uStack_78 = __LC18;
      uStack_70 = _UNK_00121028;
      uStack_68 = __LC19;
      uStack_60 = _UNK_00121038;
      uStack_58 = __LC20;
      uStack_50 = _UNK_00121048;
      if ((int)uVar9 == 0x20) {
         uVar8 = 0x7fffffff;
      }
 else {
         uVar8 = *(undefined4*)( (long)&uStack_c8 + uVar9 * 4 );
      }

      *(undefined4*)( this + 0x20 ) = uVar8;
      *(short*)( this + 0x12 ) = sVar18;
      *(void**)( this + 0x28 ) = pvVar4;
      if (uVar14 != 0) {
         piVar15 = __ptr;
         do {
            if (( ( *(byte*)( piVar15 + 1 ) & 1 ) != 0 ) && ( uVar16 = (uint)piVar15[1] >> 2 ),this[0x10] != (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0) {
               uVar13 = *(uint*)( this + 0x18 );
               if (*(uint*)( this + 0x1c ) <= ( uVar13 >> 1 ) + uVar13) {
                  cVar3 = alloc(this, 0);
                  if (cVar3 == '\0') goto LAB_0010bbb0;
                  uVar13 = *(uint*)( this + 0x18 );
               }

               lVar2 = *(long*)( this + 0x28 );
               iVar17 = *piVar15;
               uVar9 = (ulong)uVar16 % ( ulong ) * (uint*)( this + 0x20 );
               iVar7 = *(int*)( this + 0x14 );
               lVar5 = uVar9 * 0xc;
               piVar6 = (int*)( lVar2 + lVar5 );
               bVar1 = *(byte*)( piVar6 + 1 );
               if (( bVar1 & 2 ) == 0) {
                  *piVar6 = iVar17;
                  piVar6[2] = piVar15[2];
                  piVar6[1] = uVar16 * 4 + 3;
                  *(uint*)( this + 0x18 ) = uVar13 + 1;
                  *(int*)( this + 0x14 ) = iVar7 + 1;
               }
 else {
                  uVar11 = 0;
                  uVar12 = 0xffffffff;
                  do {
                     if (*piVar6 == iVar17) {
                        if (uVar12 == 0xffffffff) goto LAB_0010bc6f;
                        goto LAB_0010bc64;
                     }

                     if (( ( bVar1 & 1 ) == 0 ) && ( uVar12 == 0xffffffff )) {
                        uVar12 = (uint)uVar9;
                     }

                     uVar11 = uVar11 + 1;
                     uVar9 = ( ulong )((uint)uVar9 + uVar11 & *(uint*)( this + 0x1c ));
                     lVar5 = uVar9 * 0xc;
                     piVar6 = (int*)( lVar2 + lVar5 );
                     bVar1 = *(byte*)( piVar6 + 1 );
                  }
 while ( ( bVar1 & 2 ) != 0 );
                  if (uVar12 == 0xffffffff) {
                     LAB_0010bd4a:uVar13 = uVar13 + 1;
                  }
 else {
                     LAB_0010bc64:lVar5 = (ulong)uVar12 * 0xc;
                     LAB_0010bc6f:piVar6 = (int*)( lVar2 + lVar5 );
                     if (( *(byte*)( piVar6 + 1 ) & 2 ) == 0) goto LAB_0010bd4a;
                     iVar7 = iVar7 - ( *(byte*)( piVar6 + 1 ) & 1 );
                     *(uint*)( this + 0x18 ) = uVar13 - 1;
                     *(int*)( this + 0x14 ) = iVar7;
                     iVar17 = *piVar15;
                  }

                  *piVar6 = iVar17;
                  iVar17 = piVar15[2];
                  piVar6[1] = uVar16 * 4 + 3;
                  piVar6[2] = iVar17;
                  *(uint*)( this + 0x18 ) = uVar13;
                  *(int*)( this + 0x14 ) = iVar7 + 1;
                  if (( *(ushort*)( this + 0x12 ) < uVar11 ) && ( *(uint*)( this + 0x1c ) < uVar13 << 3 )) {
                     alloc(this, *(uint*)( this + 0x1c ) - 8);
                  }

               }

            }

            LAB_0010bbb0:piVar15 = piVar15 + 3;
         }
 while ( __ptr + (ulong)uVar14 * 3 != piVar15 );
      }

      free(__ptr);
   }

   LAB_0010bd0d:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return hVar10;
}
/* OT::CFFIndex<OT::IntType<unsigned int, 4u> >::sanitize(hb_sanitize_context_t*) const */undefined8 OT::CFFIndex<OT::IntType<unsigned_int,4u>>::sanitize(CFFIndex<OT::IntType<unsigned_int,4u>> *this, hb_sanitize_context_t *param_1) {
   CFFIndex<OT::IntType<unsigned_int,4u>> CVar1;
   uint uVar2;
   uint uVar3;
   CFFIndex<OT::IntType<unsigned_int,4u>> *pCVar4;
   ulong uVar5;
   uint uVar6;
   int iVar7;
   if ((CFFIndex<OT::IntType<unsigned_int,4u>>*)( ulong ) * (uint*)( param_1 + 0x18 ) < this + ( 4 - *(long*)( param_1 + 8 ) )) {
      return 0;
   }

   uVar2 = *(uint*)this;
   if (uVar2 != 0) {
      uVar6 = uVar2 >> 0x18 | ( uVar2 & 0xff0000 ) >> 8 | ( uVar2 & 0xff00 ) << 8 | uVar2 << 0x18;
      uVar2 = uVar6 + 1;
      if (uVar2 <= uVar6) {
         return 0;
      }

      pCVar4 = this + 5;
      if (( ulong )((long)pCVar4 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 )) {
         CVar1 = this[4];
         if (( ( (byte)CVar1 - 1 < 4 ) && ( uVar3 = ( uint )((ulong)uVar2 * (ulong)(byte)CVar1) ),(int)( (ulong)uVar2 * (ulong)(byte)CVar1 >> 0x20 ) == 0 )) {
            iVar7 = *(int*)( param_1 + 0x1c ) - uVar3;
            *(int*)( param_1 + 0x1c ) = iVar7;
            if (0 < iVar7) {
               uVar5 = (ulong)uVar6;
               if (CVar1 == (CFFIndex<OT::IntType<unsigned_int,4u>>)0x3) {
                  pCVar4 = pCVar4 + uVar5 * 3;
                  uVar6 = ( uint )(byte) * pCVar4 * 0x10000 + (uint)(byte)pCVar4[1] * 0x100 + (uint)(byte)pCVar4[2];
               }
 else if (CVar1 == (CFFIndex<OT::IntType<unsigned_int,4u>>)0x4) {
                  uVar6 = *(uint*)( pCVar4 + uVar5 * 4 );
                  uVar6 = uVar6 >> 0x18 | ( uVar6 & 0xff0000 ) >> 8 | ( uVar6 & 0xff00 ) << 8 | uVar6 << 0x18;
               }
 else if (CVar1 == (CFFIndex<OT::IntType<unsigned_int,4u>>)0x2) {
                  uVar6 = ( uint )(ushort)(*(ushort*)( pCVar4 + uVar5 * 2 ) << 8 | *(ushort*)( pCVar4 + uVar5 * 2 ) >> 8);
               }
 else {
                  uVar6 = (uint)(byte)this[uVar5 + 5];
               }

               pCVar4 = this + ( ulong )(uVar2 * (byte)CVar1) + 4;
               if (( ( ulong )((long)pCVar4 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 ) ) && ( uVar6 <= ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)pCVar4) )) {
                  *(uint*)( param_1 + 0x1c ) = iVar7 - uVar6;
                  return CONCAT71(( int7 )((ulong)pCVar4 >> 8), 0 < (int)( iVar7 - uVar6 ));
               }

            }

         }

      }

      return 0;
   }

   return 1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CFF::opset_t<CFF::number_t>::process_op(unsigned int, CFF::interp_env_t<CFF::number_t>&) */void CFF::opset_t<CFF::number_t>::process_op(uint param_1, interp_env_t *param_2) {
   undefined1 uVar1;
   undefined1 uVar2;
   byte bVar3;
   uint uVar4;
   uint uVar5;
   byte *pbVar6;
   undefined *puVar7;
   interp_env_t *piVar8;
   if (param_1 < 0xfb) {
      if (0xf6 < param_1) {
         uVar5 = *(uint*)( param_2 + 0xc );
         if (uVar5 < *(uint*)( param_2 + 8 )) {
            pbVar6 = (byte*)( (ulong)uVar5 + *(long*)param_2 );
         }
 else {
            uVar5 = *(uint*)( param_2 + 8 ) + 1;
            pbVar6 = &_hb_NullPool;
            *(uint*)( param_2 + 0xc ) = uVar5;
         }

         bVar3 = *pbVar6;
         uVar4 = *(uint*)( param_2 + 0x14 );
         if (uVar4 < 0x201) {
            piVar8 = param_2 + (ulong)uVar4 * 8 + 0x18;
            *(uint*)( param_2 + 0x14 ) = uVar4 + 1;
         }
 else {
            __hb_CrapPool = __hb_NullPool;
            param_2[0x10] = (interp_env_t)0x1;
            piVar8 = (interp_env_t*)&_hb_CrapPool;
         }

         *(double*)piVar8 = (double)(int)(short)( ( (short)param_1 + -0xf7 ) * 0x100 + 0x6c + (ushort)bVar3 );
         *(uint*)( param_2 + 0xc ) = uVar5 + 1;
         return;
      }

      if (param_1 == 0x1c) {
         uVar5 = *(uint*)( param_2 + 0xc );
         uVar4 = *(uint*)( param_2 + 8 );
         if (uVar5 < uVar4) {
            puVar7 = (undefined*)( (ulong)uVar5 + *(long*)param_2 );
         }
 else {
            uVar5 = uVar4 + 1;
            puVar7 = &_hb_NullPool;
            *(uint*)( param_2 + 0xc ) = uVar5;
         }

         uVar1 = *puVar7;
         if (uVar5 + 1 < uVar4) {
            puVar7 = (undefined*)( ( ulong )(uVar5 + 1) + *(long*)param_2 );
         }
 else {
            uVar5 = uVar4 + 1;
            puVar7 = &_hb_NullPool;
            *(uint*)( param_2 + 0xc ) = uVar5;
         }

         uVar2 = *puVar7;
         uVar4 = *(uint*)( param_2 + 0x14 );
         if (uVar4 < 0x201) {
            piVar8 = param_2 + (ulong)uVar4 * 8 + 0x18;
            *(uint*)( param_2 + 0x14 ) = uVar4 + 1;
         }
 else {
            __hb_CrapPool = __hb_NullPool;
            param_2[0x10] = (interp_env_t)0x1;
            piVar8 = (interp_env_t*)&_hb_CrapPool;
         }

         *(double*)piVar8 = (double)(int)CONCAT11(uVar1, uVar2);
         *(uint*)( param_2 + 0xc ) = uVar5 + 2;
         return;
      }

      if (param_1 - 0x20 < 0xd7) {
         uVar5 = *(uint*)( param_2 + 0x14 );
         if (uVar5 < 0x201) {
            piVar8 = param_2 + (ulong)uVar5 * 8 + 0x18;
            *(uint*)( param_2 + 0x14 ) = uVar5 + 1;
         }
 else {
            __hb_CrapPool = __hb_NullPool;
            param_2[0x10] = (interp_env_t)0x1;
            piVar8 = (interp_env_t*)&_hb_CrapPool;
         }

         *(double*)piVar8 = (double)(int)( param_1 - 0x8b );
         return;
      }

   }
 else if (param_1 - 0xfb < 4) {
      uVar5 = *(uint*)( param_2 + 0xc );
      if (uVar5 < *(uint*)( param_2 + 8 )) {
         pbVar6 = (byte*)( (ulong)uVar5 + *(long*)param_2 );
      }
 else {
         uVar5 = *(uint*)( param_2 + 8 ) + 1;
         pbVar6 = &_hb_NullPool;
         *(uint*)( param_2 + 0xc ) = uVar5;
      }

      bVar3 = *pbVar6;
      uVar4 = *(uint*)( param_2 + 0x14 );
      if (uVar4 < 0x201) {
         piVar8 = param_2 + (ulong)uVar4 * 8 + 0x18;
         *(uint*)( param_2 + 0x14 ) = uVar4 + 1;
      }
 else {
         __hb_CrapPool = __hb_NullPool;
         param_2[0x10] = (interp_env_t)0x1;
         piVar8 = (interp_env_t*)&_hb_CrapPool;
      }

      *(double*)piVar8 = (double)(int)( ( ( param_1 - 0xfb & 0xffff ) * -0x100 - (uint)bVar3 ) + -0x6c );
      *(uint*)( param_2 + 0xc ) = uVar5 + 1;
      return;
   }

   *(undefined4*)( param_2 + 0x14 ) = 0;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CFF::dict_opset_t::process_op(unsigned int, CFF::interp_env_t<CFF::number_t>&) */void CFF::dict_opset_t::process_op(uint param_1, interp_env_t *param_2) {
   byte bVar1;
   byte bVar2;
   byte bVar3;
   char cVar4;
   byte *pbVar5;
   ulong uVar6;
   interp_env_t *piVar7;
   byte bVar8;
   uint uVar9;
   uint uVar10;
   uint uVar11;
   long in_FS_OFFSET;
   char *local_48;
   double local_40;
   undefined1 local_38[16];
   undefined1 local_28[16];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0x1d) {
      uVar9 = *(uint*)( param_2 + 0xc );
      uVar11 = *(uint*)( param_2 + 8 );
      if (uVar9 < uVar11) {
         pbVar5 = (byte*)( (ulong)uVar9 + *(long*)param_2 );
      }
 else {
         uVar9 = uVar11 + 1;
         pbVar5 = &_hb_NullPool;
         *(uint*)( param_2 + 0xc ) = uVar9;
      }

      bVar8 = *pbVar5;
      if (uVar9 + 1 < uVar11) {
         pbVar5 = (byte*)( ( ulong )(uVar9 + 1) + *(long*)param_2 );
      }
 else {
         uVar9 = uVar11 + 1;
         pbVar5 = &_hb_NullPool;
         *(uint*)( param_2 + 0xc ) = uVar9;
      }

      bVar1 = *pbVar5;
      if (uVar9 + 2 < uVar11) {
         pbVar5 = (byte*)( ( ulong )(uVar9 + 2) + *(long*)param_2 );
      }
 else {
         uVar9 = uVar11 + 1;
         pbVar5 = &_hb_NullPool;
         *(uint*)( param_2 + 0xc ) = uVar9;
      }

      bVar2 = *pbVar5;
      if (uVar9 + 3 < uVar11) {
         pbVar5 = (byte*)( ( ulong )(uVar9 + 3) + *(long*)param_2 );
      }
 else {
         uVar9 = uVar11 + 1;
         pbVar5 = &_hb_NullPool;
         *(uint*)( param_2 + 0xc ) = uVar9;
      }

      bVar3 = *pbVar5;
      uVar11 = *(uint*)( param_2 + 0x14 );
      if (uVar11 < 0x201) {
         piVar7 = param_2 + (ulong)uVar11 * 8 + 0x18;
         *(uint*)( param_2 + 0x14 ) = uVar11 + 1;
      }
 else {
         __hb_CrapPool = __hb_NullPool;
         param_2[0x10] = (interp_env_t)0x1;
         piVar7 = (interp_env_t*)&_hb_CrapPool;
      }

      *(double*)piVar7 = (double)(int)( (uint)bVar2 << 8 | (uint)bVar1 << 0x10 | (uint)bVar8 << 0x18 | (uint)bVar3 );
      *(uint*)( param_2 + 0xc ) = uVar9 + 4;
   }
 else {
      if (param_1 != 0x1e) {
         if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
            opset_t<CFF::number_t>::process_op(param_1, param_2);
            return;
         }

         goto LAB_0010c498;
      }

      uVar9 = *(uint*)( param_2 + 8 );
      if (*(uint*)( param_2 + 0xc ) <= uVar9) {
         uVar6 = 0;
         uVar11 = 0;
         bVar8 = 0;
         local_38 = (undefined1[16])0x0;
         local_28 = (undefined1[16])0x0;
         do {
            if ((bool)( bVar8 & 1 )) {
               uVar10 = uVar11 & 0xf;
            }
 else {
               uVar11 = *(uint*)( param_2 + 0xc );
               uVar10 = uVar11 + 1;
               if (uVar9 < uVar10) break;
               if (uVar11 < uVar9) {
                  pbVar5 = (byte*)( (ulong)uVar11 + *(long*)param_2 );
               }
 else {
                  uVar10 = uVar9 + 2;
                  *(uint*)( param_2 + 0xc ) = uVar9 + 1;
                  pbVar5 = &_hb_NullPool;
               }

               bVar1 = *pbVar5;
               uVar11 = (uint)bVar1;
               *(uint*)( param_2 + 0xc ) = uVar10;
               uVar10 = ( uint )(bVar1 >> 4);
            }

            if (uVar10 == 0xd) break;
            if (uVar10 == 0xf) {
               local_48 = local_38;
               cVar4 = hb_parse_double(&local_48, local_48 + uVar6, &local_40, true);
               if (cVar4 != '\0') goto LAB_0010c292;
               uVar9 = *(uint*)( param_2 + 8 );
               break;
            }

            local_38[uVar6] = "0123456789.EE?-?"[uVar10];
            if (uVar10 == 0xc) {
               if ((int)uVar6 == 0x1f) break;
               uVar6 = ( ulong )((int)uVar6 + 1);
               local_38[uVar6] = 0x2d;
            }

            uVar10 = (int)uVar6 + 1;
            uVar6 = (ulong)uVar10;
            bVar8 = bVar8 + 1;
         }
 while ( uVar10 != 0x20 );
         *(uint*)( param_2 + 0xc ) = uVar9 + 1;
      }

      local_40 = 0.0;
      LAB_0010c292:uVar9 = *(uint*)( param_2 + 0x14 );
      if (uVar9 < 0x201) {
         piVar7 = param_2 + (ulong)uVar9 * 8 + 0x18;
         *(uint*)( param_2 + 0x14 ) = uVar9 + 1;
      }
 else {
         __hb_CrapPool = __hb_NullPool;
         param_2[0x10] = (interp_env_t)0x1;
         piVar7 = (interp_env_t*)&_hb_CrapPool;
      }

      *(double*)piVar7 = local_40;
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010c498:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CFF::cff1_top_dict_opset_t::process_op(unsigned int, CFF::cff1_top_dict_interp_env_t&,
   CFF::cff1_top_dict_values_t&) */void CFF::cff1_top_dict_opset_t::process_op(uint param_1, cff1_top_dict_interp_env_t *param_2, cff1_top_dict_values_t *param_3) {
   int iVar1;
   int iVar2;
   long lVar3;
   int iVar4;
   ulong uVar5;
   void *pvVar6;
   double dVar7;
   cff1_top_dict_interp_env_t *pcVar8;
   long *plVar9;
   uint uVar10;
   uint uVar11;
   uint uVar12;
   undefined1 uVar13;
   uint uVar14;
   dVar7 = __hb_NullPool;
   iVar1 = *(int*)( param_2 + 0x1024 );
   iVar2 = *(int*)param_3;
   if (0x116 < param_1) {
      switch (param_1) {
         case 0x117:
         case 0x11f:
         case 0x120:
         case 0x121:
         case 0x123:
      goto switchD_0010c4f2_caseD_5;
         case 0x118:
         case 0x119:
         case 0x11a:
         case 0x11b:
         case 0x11c:
         case 0x11d:
         case 0x124:
switchD_0010c4f2_caseD_6:
      uVar12 = *(uint *)(param_2 + 0xc);
      *(uint *)(param_2 + 0x1024) = uVar12;
      if (param_1 == 0x124) {
        if (*(uint *)(param_2 + 0x14) == 0) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff1_top_dict_interp_env_t)0x1;
          pcVar8 = (cff1_top_dict_interp_env_t *)&_hb_CrapPool;
        }
        else {
          pcVar8 = param_2 + (ulong)*(uint *)(param_2 + 0x14) * 8 + 0x10;
        }
        *(int *)(param_3 + 0x1c) = (int)*(double *)pcVar8;
      }
      else {
        if (param_1 != 0x11) goto LAB_0010c8a1;
        if (*(uint *)(param_2 + 0x14) == 0) {
          __hb_CrapPool = __hb_NullPool;
          param_2[0x10] = (cff1_top_dict_interp_env_t)0x1;
          pcVar8 = (cff1_top_dict_interp_env_t *)&_hb_CrapPool;
        }
        else {
          pcVar8 = param_2 + (ulong)*(uint *)(param_2 + 0x14) * 8 + 0x10;
        }
        *(int *)(param_3 + 0x18) = (int)*(double *)pcVar8;
      }
LAB_0010c68d:
      *(undefined4 *)(param_2 + 0x14) = 0;
      break;
         case 0x11e:
      uVar12 = *(uint *)(param_2 + 0x14);
      if (uVar12 == 0) {
        __hb_CrapPool = __hb_NullPool;
        param_2[0x10] = (cff1_top_dict_interp_env_t)0x1;
        if ((int)dVar7 < 0) {
          uVar5 = 0;
          goto LAB_0010c9d0;
        }
        *(int *)(param_3 + 0x50) = (int)dVar7;
LAB_0010ca01:
        pcVar8 = (cff1_top_dict_interp_env_t *)&_hb_CrapPool;
        __hb_CrapPool = dVar7;
        param_2[0x10] = (cff1_top_dict_interp_env_t)0x1;
      }
      else {
        uVar5 = (ulong)(uVar12 - 1);
        iVar4 = (int)*(double *)(param_2 + (ulong)uVar12 * 8 + 0x10);
        *(uint *)(param_2 + 0x14) = uVar12 - 1;
        if (iVar4 < 0) {
LAB_0010c9d0:
          param_2[0x10] = (cff1_top_dict_interp_env_t)0x1;
          iVar4 = 0;
        }
        *(int *)(param_3 + 0x50) = iVar4;
        dVar7 = __hb_NullPool;
        if ((int)uVar5 == 0) goto LAB_0010ca01;
        pcVar8 = param_2 + uVar5 * 8 + 0x10;
        *(int *)(param_2 + 0x14) = (int)uVar5 + -1;
      }
      iVar4 = (int)*(double *)pcVar8;
      if (iVar4 < 0) {
        param_2[0x10] = (cff1_top_dict_interp_env_t)0x1;
        iVar4 = 0;
      }
      *(int *)(param_3 + 0x48) = iVar4;
      if (*(uint *)(param_2 + 0x14) == 0) {
        __hb_CrapPool = __hb_NullPool;
        param_2[0x10] = (cff1_top_dict_interp_env_t)0x1;
        pcVar8 = (cff1_top_dict_interp_env_t *)&_hb_CrapPool;
      }
      else {
        pcVar8 = param_2 + (ulong)*(uint *)(param_2 + 0x14) * 8 + 0x10;
      }
      iVar4 = (int)*(double *)pcVar8;
      if (iVar4 < 0) {
        param_2[0x10] = (cff1_top_dict_interp_env_t)0x1;
        iVar4 = 0;
      }
      *(int *)(param_3 + 0x44) = iVar4;
      uVar12 = *(uint *)(param_2 + 0xc);
      *(undefined4 *)(param_2 + 0x14) = 0;
      break;
         case 0x122:
      if (*(uint *)(param_2 + 0x14) == 0) {
        __hb_CrapPool = __hb_NullPool;
        param_2[0x10] = (cff1_top_dict_interp_env_t)0x1;
        pcVar8 = (cff1_top_dict_interp_env_t *)&_hb_CrapPool;
      }
      else {
        pcVar8 = param_2 + (ulong)*(uint *)(param_2 + 0x14) * 8 + 0x10;
      }
      iVar4 = (int)*(double *)pcVar8;
      if (iVar4 < 0) {
        param_2[0x10] = (cff1_top_dict_interp_env_t)0x1;
        iVar4 = 0;
      }
      *(int *)(param_3 + 0x54) = iVar4;
      uVar12 = *(uint *)(param_2 + 0xc);
      *(undefined4 *)(param_2 + 0x14) = 0;
      break;
         case 0x125:
      if (*(uint *)(param_2 + 0x14) == 0) {
        __hb_CrapPool = __hb_NullPool;
        param_2[0x10] = (cff1_top_dict_interp_env_t)0x1;
        pcVar8 = (cff1_top_dict_interp_env_t *)&_hb_CrapPool;
      }
      else {
        pcVar8 = param_2 + (ulong)*(uint *)(param_2 + 0x14) * 8 + 0x10;
      }
      uVar12 = *(uint *)(param_2 + 0xc);
      *(int *)(param_3 + 0x60) = (int)*(double *)pcVar8;
      *(undefined4 *)(param_2 + 0x14) = 0;
      break;
         case 0x126:
switchD_0010c4f2_caseD_0:
      if (*(uint *)(param_2 + 0x14) == 0) {
        __hb_CrapPool = __hb_NullPool;
        param_2[0x10] = (cff1_top_dict_interp_env_t)0x1;
        pcVar8 = (cff1_top_dict_interp_env_t *)&_hb_CrapPool;
      }
      else {
        pcVar8 = param_2 + (ulong)*(uint *)(param_2 + 0x14) * 8 + 0x10;
      }
      iVar4 = (int)*(double *)pcVar8;
      if (iVar4 < 0) {
        param_2[0x10] = (cff1_top_dict_interp_env_t)0x1;
        iVar4 = 0;
      }
      if (param_1 == 0x100) {
        uVar5 = 2;
      }
      else if (param_1 < 0x101) {
        uVar5 = 4;
        if (((param_1 != 3) && (uVar5 = 5, param_1 != 4)) && (uVar5 = 1, param_1 != 1)) {
          uVar5 = (ulong)((uint)(param_1 == 2) * 3);
        }
      }
      else {
        uVar5 = 8;
        if (((param_1 != 0x116) && (uVar5 = 7, param_1 != 0x126)) && (uVar5 = 0, param_1 == 0x115))
        {
          uVar5 = 6;
        }
      }
      *(int *)(param_3 + uVar5 * 4 + 0x20) = iVar4;
      uVar12 = *(uint *)(param_2 + 0xc);
      *(undefined4 *)(param_2 + 0x14) = 0;
      break;
         default:
switchD_0010c4f2_default:
      *(undefined4 *)(param_2 + 0x1024) = *(undefined4 *)(param_2 + 0xc);
LAB_0010c8a1:
      dict_opset_t::process_op(param_1,(interp_env_t *)param_2);
      if (*(int *)(param_2 + 0x14) != 0) {
        return;
      }
      goto LAB_0010c79e;
      }

      goto LAB_0010c53a;
   }

   if (0xff < param_1) {
      uVar5 = 1L << ( (byte)param_1 & 0x3f );
      if (( uVar5 & 0x10017e ) == 0) {
         if (( uVar5 & 0x600001 ) != 0) goto switchD_0010c4f2_caseD_0;
         uVar12 = *(uint*)( param_2 + 0xc );
         *(uint*)( param_2 + 0x1024 ) = uVar12;
         if (param_1 != 0x107) goto LAB_0010c8a1;
         goto LAB_0010c68d;
      }

      goto switchD_0010c4f2_caseD_5;
   }

   switch (param_1) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
    goto switchD_0010c4f2_caseD_0;
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0x11:
    goto switchD_0010c4f2_caseD_6;
      case 0xf:
    if (*(uint *)(param_2 + 0x14) == 0) {
      __hb_CrapPool = __hb_NullPool;
      param_2[0x10] = (cff1_top_dict_interp_env_t)0x1;
      pcVar8 = (cff1_top_dict_interp_env_t *)&_hb_CrapPool;
    }
    else {
      pcVar8 = param_2 + (ulong)*(uint *)(param_2 + 0x14) * 8 + 0x10;
    }
    iVar4 = (int)*(double *)pcVar8;
    *(int *)(param_3 + 0x5c) = iVar4;
    *(undefined4 *)(param_2 + 0x14) = 0;
    goto joined_r0x0010c7d0;
      case 0x10:
    if (*(uint *)(param_2 + 0x14) == 0) {
      __hb_CrapPool = __hb_NullPool;
      param_2[0x10] = (cff1_top_dict_interp_env_t)0x1;
      pcVar8 = (cff1_top_dict_interp_env_t *)&_hb_CrapPool;
    }
    else {
      pcVar8 = param_2 + (ulong)*(uint *)(param_2 + 0x14) * 8 + 0x10;
    }
    iVar4 = (int)*(double *)pcVar8;
    *(int *)(param_3 + 0x58) = iVar4;
    *(undefined4 *)(param_2 + 0x14) = 0;
joined_r0x0010c7d0:
    if (iVar4 == 0) {
      return;
    }
LAB_0010c79e:
    uVar12 = *(uint *)(param_2 + 0xc);
    break;
      case 0x12:
    uVar12 = *(uint *)(param_2 + 0x14);
    if (uVar12 == 0) {
      *(int *)(param_3 + 100) = (int)__hb_NullPool;
LAB_0010c959:
      pcVar8 = (cff1_top_dict_interp_env_t *)&_hb_CrapPool;
      __hb_CrapPool = dVar7;
      param_2[0x10] = (cff1_top_dict_interp_env_t)0x1;
    }
    else {
      uVar11 = uVar12 - 1;
      dVar7 = *(double *)(param_2 + (ulong)uVar12 * 8 + 0x10);
      *(uint *)(param_2 + 0x14) = uVar11;
      *(int *)(param_3 + 100) = (int)dVar7;
      pcVar8 = param_2 + (ulong)uVar11 * 8 + 0x10;
      dVar7 = __hb_NullPool;
      if (uVar11 == 0) goto LAB_0010c959;
    }
    iVar4 = (int)*(double *)pcVar8;
    if (iVar4 < 0) {
      param_2[0x10] = (cff1_top_dict_interp_env_t)0x1;
      iVar4 = 0;
    }
    *(int *)(param_3 + 0x68) = iVar4;
      case 5:
      case 0xd:
      case 0xe:
switchD_0010c4f2_caseD_5:
    *(undefined4 *)(param_2 + 0x14) = 0;
    uVar12 = *(uint *)(param_2 + 0xc);
    break;
      default:
    goto switchD_0010c4f2_default;
   }

   LAB_0010c53a:if (*(uint*)( param_2 + 8 ) < uVar12) {
      return;
   }

   if (param_2[0x10] != (cff1_top_dict_interp_env_t)0x0) {
      return;
   }

   uVar11 = *(uint*)( param_3 + 0xc );
   uVar5 = (ulong)uVar11;
   uVar14 = *(uint*)( param_3 + 8 );
   uVar10 = uVar11 + 1;
   if ((int)uVar11 < (int)uVar14) {
      LAB_0010c556:pvVar6 = *(void**)( param_3 + 0x10 );
   }
 else {
      if ((int)uVar14 < 0) {
         LAB_0010caa3:_malloc = _realloc;
         __hb_CrapPool = __hb_NullPool;
         _strlen = _memcpy;
         plVar9 = (long*)&_hb_CrapPool;
         uVar12 = *(uint*)( param_2 + 0xc );
         goto LAB_0010c57b;
      }

      uVar11 = uVar14;
      if (uVar10 <= uVar14) goto LAB_0010c556;
      do {
         uVar11 = ( uVar11 >> 1 ) + 8 + uVar11;
      }
 while ( uVar11 < uVar10 );
      if (0xaaaaaaa < uVar11) {
         LAB_0010ca9e:*(uint*)( param_3 + 8 ) = ~uVar14;
         goto LAB_0010caa3;
      }

      pvVar6 = realloc(*(void**)( param_3 + 0x10 ), (ulong)uVar11 * 0x18);
      if (pvVar6 == (void*)0x0) {
         uVar14 = *(uint*)( param_3 + 8 );
         if (uVar14 < uVar11) goto LAB_0010ca9e;
         uVar5 = ( ulong ) * (uint*)( param_3 + 0xc );
         pvVar6 = *(void**)( param_3 + 0x10 );
         uVar12 = *(uint*)( param_2 + 0xc );
         uVar10 = *(uint*)( param_3 + 0xc ) + 1;
      }
 else {
         uVar5 = ( ulong ) * (uint*)( param_3 + 0xc );
         uVar12 = *(uint*)( param_2 + 0xc );
         *(void**)( param_3 + 0x10 ) = pvVar6;
         *(uint*)( param_3 + 8 ) = uVar11;
         uVar10 = *(uint*)( param_3 + 0xc ) + 1;
      }

   }

   *(uint*)( param_3 + 0xc ) = uVar10;
   plVar9 = (long*)( (long)pvVar6 + uVar5 * 0x18 );
   *plVar9 = 0;
   *(undefined4*)( plVar9 + 1 ) = 0xffff;
   *(undefined1*)( (long)plVar9 + 0xc ) = 0;
   *(int*)( plVar9 + 2 ) = ( iVar1 - iVar2 ) + -1;
   LAB_0010c57b:uVar11 = *(uint*)param_3;
   lVar3 = *(long*)param_2;
   *(uint*)( plVar9 + 1 ) = param_1;
   if (*(uint*)( param_2 + 8 ) < uVar11) {
      uVar13 = 0;
   }
 else {
      uVar14 = *(uint*)( param_2 + 8 ) - uVar11;
      uVar13 = (undefined1)uVar14;
      if (uVar12 - uVar11 <= uVar14) {
         uVar13 = ( undefined1 )(uVar12 - uVar11);
      }

   }

   *(undefined1*)( (long)plVar9 + 0xc ) = uVar13;
   *plVar9 = (ulong)uVar11 + lVar3;
   *(uint*)param_3 = uVar12;
   return;
}
/* CFF::FDSelect3_4<OT::IntType<unsigned short, 2u>, OT::IntType<unsigned char, 1u>
   >::sanitize(hb_sanitize_context_t*, unsigned int) const */undefined2 CFF::FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>>::sanitize(FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>> *this, hb_sanitize_context_t *param_1, uint param_2) {
   ushort uVar1;
   int iVar2;
   FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>> *pFVar3;
   uint uVar4;
   FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>> *pFVar5;
   FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>> *pFVar6;
   pFVar3 = this + 2;
   if (( ( ( ( ulong )((long)pFVar3 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 ) ) && ( ( ulong )((long)pFVar3 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 ) ) ) && ( uVar1 = *(ushort*)this << 8 | *(ushort*)this >> 8 ),uVar4 = (uint)uVar1 + (uint)uVar1 * 2,uVar4 <= ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)pFVar3) )) {
      uVar1 = *(ushort*)this << 8 | *(ushort*)this >> 8;
      if (uVar1 != 0) {
         pFVar5 = this + 5;
         do {
            if (( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pFVar5 - *(long*)( param_1 + 8 ))) {
               return 0;
            }

            if (*(uint*)( param_1 + 0x38 ) <= ( uint )(ushort)(*(ushort*)( pFVar5 + -3 ) << 8 | *(ushort*)( pFVar5 + -3 ) >> 8)) {
               return 0;
            }

            if (param_2 <= (byte)pFVar5[-1]) {
               return 0;
            }

            pFVar5 = pFVar5 + 3;
         }
 while ( this + ( ulong )(uVar1 - 1) * 3 + 8 != pFVar5 );
      }

      if (*(short*)this != 0) {
         if (*(short*)this == 0) {
            pFVar3 = (FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>>*)&_hb_NullPool;
         }

         if (*(short*)pFVar3 == 0) {
            uVar1 = *(ushort*)this;
            pFVar3 = this + 5;
            uVar4 = 1;
            if (1 < ( ushort )(uVar1 << 8 | uVar1 >> 8)) {
               do {
                  pFVar5 = (FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>>*)&_hb_NullPool;
                  uVar1 = *(ushort*)this << 8 | *(ushort*)this >> 8;
                  if (uVar4 - 1 < (uint)uVar1) {
                     pFVar5 = pFVar3 + -3;
                     uVar1 = *(ushort*)this << 8 | *(ushort*)this >> 8;
                  }

                  pFVar6 = (FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>>*)&_hb_NullPool;
                  if (uVar4 < uVar1) {
                     pFVar6 = pFVar3;
                  }

                  if (( ushort )(*(ushort*)pFVar6 << 8 | *(ushort*)pFVar6 >> 8) <= ( ushort )(*(ushort*)pFVar5 << 8 | *(ushort*)pFVar5 >> 8)) {
                     return 0;
                  }

                  uVar1 = *(ushort*)this;
                  uVar4 = uVar4 + 1;
                  pFVar3 = pFVar3 + 3;
               }
 while ( uVar4 < ( ushort )(uVar1 << 8 | uVar1 >> 8) );
            }

            uVar4 = ( uint )(ushort)(uVar1 << 8 | uVar1 >> 8);
            if (uVar4 == 0) {
               pFVar3 = (FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>>*)&_hb_NullPool;
            }
 else {
               pFVar3 = this + ( ulong )(uVar4 - 1) * 3 + 2;
            }

            if (pFVar3 + ( 5 - *(long*)( param_1 + 8 ) ) <= (FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>>*)( ulong ) * (uint*)( param_1 + 0x18 )) {
               pFVar3 = (FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>>*)&_hb_NullPool;
               uVar4 = ( ushort )(*(ushort*)this << 8 | *(ushort*)this >> 8) - 1;
               if (uVar4 < ( ushort )(*(ushort*)this << 8 | *(ushort*)this >> 8)) {
                  pFVar3 = this + (ulong)uVar4 * 3 + 2;
               }

               uVar1 = *(ushort*)( pFVar3 + 3 );
               return CONCAT11((char)uVar1, *(uint*)( param_1 + 0x38 ) == ( uint )(ushort)(uVar1 << 8 | uVar1 >> 8));
            }

         }

      }

   }

   return 0;
}
/* CFF::FDSelect3_4<OT::IntType<unsigned int, 4u>, OT::IntType<unsigned short, 2u>
   >::sanitize(hb_sanitize_context_t*, unsigned int) const */undefined4 CFF::FDSelect3_4<OT::IntType<unsigned_int,4u>,OT::IntType<unsigned_short,2u>>::sanitize(FDSelect3_4<OT::IntType<unsigned_int,4u>,OT::IntType<unsigned_short,2u>> *this, hb_sanitize_context_t *param_1, uint param_2) {
   uint uVar1;
   long lVar2;
   uint uVar3;
   FDSelect3_4<OT::IntType<unsigned_int,4u>,OT::IntType<unsigned_short,2u>> *pFVar4;
   int iVar5;
   uint uVar6;
   FDSelect3_4<OT::IntType<unsigned_int,4u>,OT::IntType<unsigned_short,2u>> *pFVar7;
   bool bVar8;
   pFVar4 = this + 4;
   if (( ulong )((long)pFVar4 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 )) {
      uVar3 = *(uint*)this;
      lVar2 = ( ulong )(uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18) * 6;
      bVar8 = (int)( (ulong)lVar2 >> 0x20 ) != 0;
      uVar3 = (uint)lVar2;
      uVar6 = (uint)bVar8;
      if (( ( ( !bVar8 ) && ( ( ulong )((long)pFVar4 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 ) ) ) && ( uVar3 <= ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)pFVar4) ) ) && ( iVar5 = *(int*)( param_1 + 0x1c ) - uVar3 ),*(int*)( param_1 + 0x1c ) = iVar5,0 < iVar5) {
         uVar3 = *(uint*)this;
         pFVar7 = this + 10;
         if (uVar3 != 0) {
            do {
               if (( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pFVar7 - *(long*)( param_1 + 8 ))) {
                  return 0;
               }

               uVar1 = *(uint*)( pFVar7 + -6 );
               if (*(uint*)( param_1 + 0x38 ) <= ( uVar1 >> 0x18 | ( uVar1 & 0xff0000 ) >> 8 | ( uVar1 & 0xff00 ) << 8 | uVar1 << 0x18 )) {
                  return 0;
               }

               if (param_2 <= ( ushort )(*(ushort*)( pFVar7 + -2 ) << 8 | *(ushort*)( pFVar7 + -2 ) >> 8)) {
                  return 0;
               }

               uVar6 = uVar6 + 1;
               pFVar7 = pFVar7 + 6;
            }
 while ( uVar6 < ( uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18 ) );
         }

         if (*(int*)this != 0) {
            if (*(int*)this == 0) {
               pFVar4 = (FDSelect3_4<OT::IntType<unsigned_int,4u>,OT::IntType<unsigned_short,2u>>*)&_hb_NullPool;
            }

            if (*(int*)pFVar4 == 0) {
               uVar3 = *(uint*)this;
               pFVar4 = this + 10;
               uVar6 = 1;
               if (1 < ( uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18 )) {
                  do {
                     uVar3 = *(uint*)this;
                     pFVar7 = (FDSelect3_4<OT::IntType<unsigned_int,4u>,OT::IntType<unsigned_short,2u>>*)&_hb_NullPool;
                     uVar3 = uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18;
                     if (uVar6 - 1 < uVar3) {
                        uVar3 = *(uint*)this;
                        pFVar7 = pFVar4 + -6;
                        uVar3 = uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18;
                     }

                     uVar1 = *(uint*)pFVar7;
                     pFVar7 = (FDSelect3_4<OT::IntType<unsigned_int,4u>,OT::IntType<unsigned_short,2u>>*)&_hb_NullPool;
                     if (uVar6 < uVar3) {
                        pFVar7 = pFVar4;
                     }

                     uVar3 = *(uint*)pFVar7;
                     if (( uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18 ) <= ( uVar1 >> 0x18 | ( uVar1 & 0xff0000 ) >> 8 | ( uVar1 & 0xff00 ) << 8 | uVar1 << 0x18 )) {
                        return 0;
                     }

                     uVar3 = *(uint*)this;
                     uVar6 = uVar6 + 1;
                     pFVar4 = pFVar4 + 6;
                  }
 while ( uVar6 < ( uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18 ) );
               }

               uVar3 = uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18;
               if (uVar3 == 0) {
                  pFVar4 = (FDSelect3_4<OT::IntType<unsigned_int,4u>,OT::IntType<unsigned_short,2u>>*)&_hb_NullPool;
               }
 else {
                  pFVar4 = this + ( ulong )(uVar3 - 1) * 6 + 4;
               }

               if (pFVar4 + ( 10 - *(long*)( param_1 + 8 ) ) <= (FDSelect3_4<OT::IntType<unsigned_int,4u>,OT::IntType<unsigned_short,2u>>*)( ulong ) * (uint*)( param_1 + 0x18 )) {
                  uVar3 = *(uint*)this;
                  pFVar4 = (FDSelect3_4<OT::IntType<unsigned_int,4u>,OT::IntType<unsigned_short,2u>>*)&_hb_NullPool;
                  uVar3 = uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18;
                  if (uVar3 != 0) {
                     pFVar4 = this + ( ulong )(uVar3 - 1) * 6 + 4;
                  }

                  uVar3 = *(uint*)( pFVar4 + 6 );
                  uVar3 = uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18;
                  return CONCAT31(( int3 )(uVar3 >> 8), *(uint*)( param_1 + 0x38 ) == uVar3);
               }

            }

         }

      }

   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CFF::parsed_values_t<CFF::op_str_t>::add_op(unsigned int, CFF::byte_str_ref_t const&,
   CFF::op_str_t const&) */void CFF::parsed_values_t<CFF::op_str_t>::add_op(parsed_values_t<CFF::op_str_t> *this, uint param_1, byte_str_ref_t *param_2, op_str_t *param_3) {
   int iVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   void *pvVar5;
   uint uVar6;
   ulong uVar7;
   undefined1 uVar8;
   uint uVar9;
   uint uVar10;
   uVar10 = *(uint*)( this + 0xc );
   uVar7 = (ulong)uVar10;
   uVar9 = *(uint*)( this + 8 );
   uVar6 = uVar10 + 1;
   if ((int)uVar10 < (int)uVar9) {
      LAB_0010cf85:pvVar5 = *(void**)( this + 0x10 );
   }
 else {
      if ((int)uVar9 < 0) {
         LAB_0010d039:__hb_CrapPool = __hb_NullPool;
         _strlen = _memcpy;
         plVar4 = (long*)&_hb_CrapPool;
         goto LAB_0010cf9c;
      }

      uVar10 = uVar9;
      if (uVar6 <= uVar9) goto LAB_0010cf85;
      do {
         uVar10 = ( uVar10 >> 1 ) + 8 + uVar10;
      }
 while ( uVar10 < uVar6 );
      if (0xfffffff < uVar10) {
         LAB_0010d034:*(uint*)( this + 8 ) = ~uVar9;
         goto LAB_0010d039;
      }

      pvVar5 = realloc(*(void**)( this + 0x10 ), (ulong)uVar10 << 4);
      if (pvVar5 == (void*)0x0) {
         uVar9 = *(uint*)( this + 8 );
         if (uVar9 < uVar10) goto LAB_0010d034;
         uVar7 = ( ulong ) * (uint*)( this + 0xc );
         pvVar5 = *(void**)( this + 0x10 );
         uVar6 = *(uint*)( this + 0xc ) + 1;
      }
 else {
         uVar7 = ( ulong ) * (uint*)( this + 0xc );
         *(void**)( this + 0x10 ) = pvVar5;
         *(uint*)( this + 8 ) = uVar10;
         uVar6 = *(uint*)( this + 0xc ) + 1;
      }

   }

   lVar2 = *(long*)param_3;
   lVar3 = *(long*)( param_3 + 8 );
   *(uint*)( this + 0xc ) = uVar6;
   plVar4 = (long*)( (long)pvVar5 + uVar7 * 0x10 );
   *plVar4 = lVar2;
   plVar4[1] = lVar3;
   LAB_0010cf9c:uVar10 = *(uint*)this;
   iVar1 = *(int*)( param_2 + 0xc );
   *(uint*)( plVar4 + 1 ) = param_1;
   lVar2 = *(long*)param_2;
   if (*(uint*)( param_2 + 8 ) < uVar10) {
      uVar8 = 0;
   }
 else {
      uVar9 = *(uint*)( param_2 + 8 ) - uVar10;
      uVar6 = iVar1 - uVar10;
      uVar8 = (undefined1)uVar9;
      if (uVar6 <= uVar9) {
         uVar8 = (undefined1)uVar6;
      }

   }

   *(undefined1*)( (long)plVar4 + 0xc ) = uVar8;
   *plVar4 = (ulong)uVar10 + lVar2;
   *(int*)this = iVar1;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CFF::parsed_values_t<CFF::dict_val_t>::add_op(unsigned int, CFF::byte_str_ref_t const&,
   CFF::dict_val_t const&) */void CFF::parsed_values_t<CFF::dict_val_t>::add_op(parsed_values_t<CFF::dict_val_t> *this, uint param_1, byte_str_ref_t *param_2, dict_val_t *param_3) {
   int iVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   void *pvVar5;
   uint uVar6;
   ulong uVar7;
   undefined1 uVar8;
   uint uVar9;
   uint uVar10;
   uVar10 = *(uint*)( this + 0xc );
   uVar7 = (ulong)uVar10;
   uVar9 = *(uint*)( this + 8 );
   uVar6 = uVar10 + 1;
   if ((int)uVar10 < (int)uVar9) {
      LAB_0010d095:pvVar5 = *(void**)( this + 0x10 );
   }
 else {
      if ((int)uVar9 < 0) {
         LAB_0010d149:__hb_CrapPool = __hb_NullPool;
         _strlen = _memcpy;
         plVar4 = (long*)&_hb_CrapPool;
         goto LAB_0010d0ac;
      }

      uVar10 = uVar9;
      if (uVar6 <= uVar9) goto LAB_0010d095;
      do {
         uVar10 = ( uVar10 >> 1 ) + 8 + uVar10;
      }
 while ( uVar10 < uVar6 );
      if (0xfffffff < uVar10) {
         LAB_0010d144:*(uint*)( this + 8 ) = ~uVar9;
         goto LAB_0010d149;
      }

      pvVar5 = realloc(*(void**)( this + 0x10 ), (ulong)uVar10 << 4);
      if (pvVar5 == (void*)0x0) {
         uVar9 = *(uint*)( this + 8 );
         if (uVar9 < uVar10) goto LAB_0010d144;
         uVar7 = ( ulong ) * (uint*)( this + 0xc );
         pvVar5 = *(void**)( this + 0x10 );
         uVar6 = *(uint*)( this + 0xc ) + 1;
      }
 else {
         uVar7 = ( ulong ) * (uint*)( this + 0xc );
         *(void**)( this + 0x10 ) = pvVar5;
         *(uint*)( this + 8 ) = uVar10;
         uVar6 = *(uint*)( this + 0xc ) + 1;
      }

   }

   lVar2 = *(long*)param_3;
   lVar3 = *(long*)( param_3 + 8 );
   *(uint*)( this + 0xc ) = uVar6;
   plVar4 = (long*)( (long)pvVar5 + uVar7 * 0x10 );
   *plVar4 = lVar2;
   plVar4[1] = lVar3;
   LAB_0010d0ac:uVar10 = *(uint*)this;
   iVar1 = *(int*)( param_2 + 0xc );
   *(uint*)( plVar4 + 1 ) = param_1;
   lVar2 = *(long*)param_2;
   if (*(uint*)( param_2 + 8 ) < uVar10) {
      uVar8 = 0;
   }
 else {
      uVar9 = *(uint*)( param_2 + 8 ) - uVar10;
      uVar6 = iVar1 - uVar10;
      uVar8 = (undefined1)uVar9;
      if (uVar6 <= uVar9) {
         uVar8 = (undefined1)uVar6;
      }

   }

   *(undefined1*)( (long)plVar4 + 0xc ) = uVar8;
   *plVar4 = (ulong)uVar10 + lVar2;
   *(int*)this = iVar1;
   return;
}
/* OT::CFFIndex<OT::IntType<unsigned short, 2u> >::operator[](unsigned int) const */undefined1[16];OT::CFFIndex<OT::IntType<unsigned_short,2u>>::operator (CFFIndex<OT::IntType<unsigned_short,2u>> *this,uint param_1) {
   CFFIndex<OT::IntType<unsigned_short,2u>> CVar1;
   uint uVar2;
   ushort uVar3;
   uint uVar4;
   CFFIndex<OT::IntType<unsigned_short,2u>> *pCVar5;
   ushort uVar6;
   uint uVar7;
   uint uVar8;
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   if (param_1 < ( ushort )(*(ushort*)this << 8 | *(ushort*)this >> 8)) {
      CVar1 = this[2];
      if (CVar1 == (CFFIndex<OT::IntType<unsigned_short,2u>>)0x3) {
         pCVar5 = this + (ulong)param_1 * 3 + 3;
         uVar7 = ( uint )(byte) * pCVar5 * 0x10000 + (uint)(byte)pCVar5[1] * 0x100 + (uint)(byte)pCVar5[2];
         pCVar5 = this + ( ulong )(param_1 + 1) * 3 + 3;
         uVar4 = ( uint )(byte) * pCVar5 * 0x10000 + (uint)(byte)pCVar5[1] * 0x100 + (uint)(byte)pCVar5[2];
         if (uVar4 < uVar7) goto LAB_0010d258;
         uVar3 = *(ushort*)this << 8 | *(ushort*)this >> 8;
         uVar2 = (uint)uVar3;
         pCVar5 = this + (ulong)uVar3 * 3 + 3;
         uVar8 = ( uint )(byte) * pCVar5 * 0x10000 + (uint)(byte)pCVar5[1] * 0x100 + (uint)(byte)pCVar5[2];
      }
 else if ((byte)CVar1 < 4) {
         if (CVar1 == (CFFIndex<OT::IntType<unsigned_short,2u>>)0x1) {
            uVar7 = (uint)(byte)this[(ulong)param_1 + 3];
            uVar4 = (uint)(byte)this[( ulong )(param_1 + 1) + 3];
            if (uVar4 < uVar7) goto LAB_0010d258;
            uVar3 = *(ushort*)this << 8 | *(ushort*)this >> 8;
            uVar2 = (uint)uVar3;
            uVar8 = (uint)(byte)this[(ulong)uVar3 + 3];
         }
 else {
            if (CVar1 != (CFFIndex<OT::IntType<unsigned_short,2u>>)0x2) goto LAB_0010d260;
            uVar6 = *(ushort*)( this + (ulong)param_1 * 2 + 3 ) << 8 | *(ushort*)( this + (ulong)param_1 * 2 + 3 ) >> 8;
            uVar3 = *(ushort*)( this + ( ulong )(param_1 + 1) * 2 + 3 ) << 8 | *(ushort*)( this + ( ulong )(param_1 + 1) * 2 + 3 ) >> 8;
            uVar7 = (uint)uVar6;
            uVar4 = (uint)uVar3;
            if (uVar3 < uVar6) goto LAB_0010d258;
            uVar3 = *(ushort*)this << 8 | *(ushort*)this >> 8;
            uVar2 = (uint)uVar3;
            uVar8 = ( uint )(ushort)(*(ushort*)( this + (ulong)uVar3 * 2 + 3 ) << 8 | *(ushort*)( this + (ulong)uVar3 * 2 + 3 ) >> 8);
         }

      }
 else {
         if (CVar1 != (CFFIndex<OT::IntType<unsigned_short,2u>>)0x4) {
            LAB_0010d260:auVar11._0_8_ = this + ( ( ( ushort )(*(ushort*)this << 8 | *(ushort*)this >> 8) + 1 ) * (uint)(byte)CVar1 + 2 );
            auVar11._8_8_ = 0;
            return auVar11;
         }

         uVar4 = *(uint*)( this + (ulong)param_1 * 4 + 3 );
         uVar2 = *(uint*)( this + ( ulong )(param_1 + 1) * 4 + 3 );
         uVar7 = uVar4 >> 0x18 | ( uVar4 & 0xff0000 ) >> 8 | ( uVar4 & 0xff00 ) << 8 | uVar4 << 0x18;
         uVar4 = uVar2 >> 0x18 | ( uVar2 & 0xff0000 ) >> 8 | ( uVar2 & 0xff00 ) << 8 | uVar2 << 0x18;
         if (uVar4 < uVar7) goto LAB_0010d258;
         uVar3 = *(ushort*)this << 8 | *(ushort*)this >> 8;
         uVar2 = (uint)uVar3;
         uVar8 = *(uint*)( this + (ulong)uVar3 * 4 + 3 );
         uVar8 = uVar8 >> 0x18 | ( uVar8 & 0xff0000 ) >> 8 | ( uVar8 & 0xff00 ) << 8 | uVar8 << 0x18;
      }

      if (uVar4 <= uVar8) {
         auVar9._8_4_ = uVar4 - uVar7;
         auVar9._0_8_ = this + ( ulong )(( uVar2 + 1 ) * (uint)(byte)CVar1 + 2) + (ulong)uVar7;
         auVar9._12_4_ = 0;
         return auVar9;
      }

   }

   LAB_0010d258:auVar10._12_4_ = 0;
   auVar10._0_12_ = ZEXT812(0);
   return auVar10;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OT::cff1::accelerator_t::get_glyph_from_name(char const*, int, unsigned int*) const */undefined8 OT::cff1::accelerator_t::get_glyph_from_name(accelerator_t *this, char *param_1, int param_2, uint *param_3) {
   accelerator_t *paVar1;
   undefined8 *puVar2;
   undefined1(*pauVar3)[12];
   char cVar4;
   char *pcVar5;
   int iVar6;
   size_t sVar7;
   uint *__ptr;
   ulong uVar8;
   void *pvVar9;
   long lVar10;
   uint uVar11;
   _func_int_void_ptr_void_ptr *p_Var12;
   uint uVar13;
   int iVar14;
   ulong uVar15;
   uint uVar16;
   long lVar17;
   int iVar18;
   uint uVar19;
   uint uVar20;
   ushort uVar21;
   uint uVar22;
   undefined1 auVar23[12];
   if (( *(long*)( this + 0x40 ) == 0 ) || ( *(int*)( this + 0xdc ) != -1 )) {
      return 0;
   }

   sVar7 = (size_t)(uint)param_2;
   p_Var12 = (_func_int_void_ptr_void_ptr*)param_3;
   if (param_2 < 0) {
      sVar7 = strlen(param_1);
      sVar7 = sVar7 & 0xffffffff;
   }

   uVar13 = (uint)sVar7;
   if (uVar13 == 0) {
      return 0;
   }

   paVar1 = this + 0x130;
   while (__ptr = *(uint**)paVar1,__ptr == (uint*)0x0) {
      __ptr = (uint*)calloc(1, 0x10);
      if (__ptr == (uint*)0x0) {
         LOCK();
         lVar10 = *(long*)paVar1;
         if (lVar10 == 0) {
            *(long*)paVar1 = 0;
         }

         UNLOCK();
         if (lVar10 == 0) {
            return 0;
         }

      }
 else {
         iVar18 = *(int*)( this + 0x128 );
         __ptr[2] = 0;
         __ptr[3] = 0;
         if (iVar18 == 0) {
            pvVar9 = (void*)0x0;
         }
 else {
            uVar8 = 0;
            uVar16 = 0xffffffff;
            uVar15 = 0;
            do {
               pcVar5 = *(char**)( this + 0x50 );
               uVar22 = (uint)uVar15;
               iVar18 = *(int*)( this + 0xf4 );
               uVar19 = uVar22 + 1;
               if (pcVar5 == &_hb_NullPool) {
                  if (iVar18 == 1) {
                     uVar22 = OT::cff1::lookup_expert_charset_for_sid(uVar22);
                     uVar21 = (ushort)uVar22;
                     goto LAB_0010d6ad;
                  }

                  if (iVar18 == 2) {
                     uVar22 = OT::cff1::lookup_expert_subset_charset_for_sid(uVar22);
                     uVar21 = (ushort)uVar22;
                     goto LAB_0010d6ad;
                  }

                  if (( iVar18 != 0 ) || ( 0xe4 < uVar22 )) goto LAB_0010d5cb;
                  uVar21 = (ushort)uVar15;
                  auVar23._8_4_ = ~(&cff1_std_strings_msgidx)[uVar15] + ( &cff1_std_strings_msgidx )[uVar19];
                  auVar23._0_8_ = ".notdef" + ( uint )(&cff1_std_strings_msgidx)[uVar15];
               }
 else {
                  cVar4 = *pcVar5;
                  if (cVar4 == '\x01') {
                     if (uVar22 < uVar16) {
                        if (uVar22 == 0) goto LAB_0010d5cb;
                        lVar17 = 0;
                        lVar10 = 2;
                        uVar16 = 1;
                        uVar8 = 0;
                     }
 else {
                        lVar17 = uVar8 * 3;
                        lVar10 = lVar17 + 2;
                     }

                     uVar20 = (uint)(byte)pcVar5[lVar10 + 1];
                     uVar22 = uVar22 - uVar16;
                     if ((byte)pcVar5[lVar10 + 1] < uVar22) {
                        do {
                           uVar16 = uVar16 + uVar20 + 1;
                           uVar22 = uVar22 - ( uVar20 + 1 );
                           uVar8 = ( ulong )((int)uVar8 + 1);
                           lVar17 = uVar8 * 3;
                           uVar20 = (uint)(byte)pcVar5[lVar17 + 3];
                        }
 while ( uVar20 < uVar22 );
                     }

                  }
 else {
                     if (cVar4 != '\x02') {
                        if (( cVar4 == '\0' ) && ( uVar22 != 0 )) {
                           uVar21 = *(ushort*)( pcVar5 + ( ulong )(uVar22 - 1) * 2 + 1 ) << 8 | *(ushort*)( pcVar5 + ( ulong )(uVar22 - 1) * 2 + 1 ) >> 8;
                           uVar22 = (uint)uVar21;
                           goto LAB_0010d6ad;
                        }

                        LAB_0010d5cb:auVar23._8_4_ = 7;
                        auVar23._0_8_ = ".notdef";
                        uVar21 = 0;
                        goto LAB_0010d5db;
                     }

                     if (uVar22 < uVar16) {
                        if (uVar22 == 0) goto LAB_0010d5cb;
                        lVar17 = 0;
                        lVar10 = 2;
                        uVar16 = 1;
                        uVar8 = 0;
                     }
 else {
                        lVar17 = uVar8 * 4;
                        lVar10 = lVar17 + 2;
                     }

                     uVar22 = uVar22 - uVar16;
                     uVar21 = *(ushort*)( pcVar5 + lVar10 + 1 ) << 8 | *(ushort*)( pcVar5 + lVar10 + 1 ) >> 8;
                     uVar20 = (uint)uVar21;
                     if (uVar21 < uVar22) {
                        do {
                           uVar16 = uVar16 + uVar20 + 1;
                           uVar22 = uVar22 - ( uVar20 + 1 );
                           uVar8 = ( ulong )((int)uVar8 + 1);
                           lVar17 = uVar8 * 4;
                           uVar20 = ( uint )(ushort)(*(ushort*)( pcVar5 + uVar8 * 4 + 3 ) << 8 | *(ushort*)( pcVar5 + uVar8 * 4 + 3 ) >> 8);
                        }
 while ( uVar20 < uVar22 );
                     }

                  }

                  uVar22 = ( ushort )(*(ushort*)( pcVar5 + lVar17 + 1 ) << 8 | *(ushort*)( pcVar5 + lVar17 + 1 ) >> 8) + uVar22;
                  uVar21 = (ushort)uVar22;
                  LAB_0010d6ad:if (uVar22 < 0x187) {
                     auVar23._8_4_ = ~(&cff1_std_strings_msgidx)[uVar22] + ( &cff1_std_strings_msgidx )[uVar22 + 1];
                     auVar23._0_8_ = ".notdef" + ( uint )(&cff1_std_strings_msgidx)[uVar22];
                  }
 else {
                     auVar23 = CFFIndex<OT::IntType<unsigned_short,2u>>::operator [](*(CFFIndex<OT::IntType<unsigned_short,2u>>**)( this + 0x68 ), uVar22 - 0x187);
                     if (auVar23._0_8_ == 0) {
                        auVar23 = ZEXT812(0x10d334);
                     }

                  }

               }

               LAB_0010d5db:uVar22 = __ptr[1];
               uVar15 = (ulong)uVar22;
               uVar20 = *__ptr;
               uVar11 = uVar22 + 1;
               if ((int)uVar22 < (int)uVar20) {
                  LAB_0010d5ed:p_Var12 = *(_func_int_void_ptr_void_ptr**)( __ptr + 2 );
                  __ptr[1] = uVar11;
                  pauVar3 = (undefined1(*) [12])( p_Var12 + uVar15 * 0x18 );
                  *pauVar3 = auVar23;
                  *(undefined4*)pauVar3[1] = 0;
                  *(ushort*)( pauVar3[1] + 4 ) = uVar21;
               }
 else {
                  if (-1 < (int)uVar20) {
                     uVar22 = uVar20;
                     if (uVar20 < uVar11) {
                        do {
                           uVar22 = ( uVar22 >> 1 ) + 8 + uVar22;
                        }
 while ( uVar22 < uVar11 );
                        if (0xaaaaaaa < uVar22) {
                           *__ptr = ~uVar20;
                           goto LAB_0010da0e;
                        }

                        pvVar9 = realloc(*(void**)( __ptr + 2 ), (ulong)uVar22 * 0x18);
                        if (pvVar9 == (void*)0x0) {
                           if (*__ptr < uVar22) {
                              *__ptr = ~*__ptr;
                              goto LAB_0010da0e;
                           }

                        }
 else {
                           *(void**)( __ptr + 2 ) = pvVar9;
                           *__ptr = uVar22;
                        }

                        uVar15 = (ulong)__ptr[1];
                        uVar11 = __ptr[1] + 1;
                     }

                     goto LAB_0010d5ed;
                  }

                  LAB_0010da0e:__hb_CrapPool = __hb_NullPool;
                  _strlen = _memcpy;
                  _malloc = _realloc;
               }

               uVar15 = (ulong)uVar19;
            }
 while ( uVar19 < *(uint*)( this + 0x128 ) );
            pvVar9 = *(void**)( __ptr + 2 );
         }

         if (__ptr[1] != 0) {
            sort_r_simple<>(pvVar9, (ulong)__ptr[1], 0x1042b0, p_Var12);
         }

         LOCK();
         lVar10 = *(long*)paVar1;
         if (lVar10 == 0) {
            *(uint**)paVar1 = __ptr;
         }

         UNLOCK();
         if (lVar10 == 0) break;
         if (*__ptr != 0) {
            free(*(void**)( __ptr + 2 ));
         }

         free(__ptr);
      }

   }
;
   lVar10 = *(long*)( __ptr + 2 );
   iVar18 = __ptr[1] - 1;
   if (iVar18 < 0) {
      return 0;
   }

   iVar14 = 0;
   do {
      while (true) {
         uVar22 = ( uint )(iVar14 + iVar18) >> 1;
         puVar2 = (undefined8*)( lVar10 + (ulong)uVar22 * 0x18 );
         uVar16 = *(uint*)( puVar2 + 1 );
         uVar15 = (ulong)uVar16;
         if (uVar13 <= uVar16) {
            uVar15 = sVar7;
         }

         iVar6 = strncmp(param_1, (char*)*puVar2, uVar15);
         if (iVar6 == 0) break;
         if (iVar6 < 0) goto LAB_0010d439;
         LAB_0010d3f7:iVar14 = uVar22 + 1;
         if (iVar18 < iVar14) {
            return 0;
         }

      }
;
      if (-1 < (int)( uVar13 - uVar16 )) {
         if (uVar13 != uVar16) goto LAB_0010d3f7;
         uVar21 = *(ushort*)( puVar2 + 2 );
         uVar16 = (uint)uVar21;
         pcVar5 = *(char**)( this + 0x50 );
         uVar13 = *(uint*)( this + 0x128 );
         iVar18 = *(int*)( this + 0xf4 );
         uVar22 = (uint)uVar21;
         if (pcVar5 == &_hb_NullPool) {
            if (iVar18 == 1) {
               uVar16 = OT::cff1::lookup_expert_charset_for_glyph((uint)uVar21);
               goto LAB_0010d508;
            }

            if (iVar18 == 2) {
               uVar16 = OT::cff1::lookup_expert_subset_charset_for_glyph(uVar22);
            }
 else {
               if (iVar18 != 0) goto LAB_0010d515;
               if (0xe4 < uVar22) {
                  return 0;
               }

            }

            goto LAB_0010d508;
         }

         cVar4 = *pcVar5;
         if (cVar4 == '\x01') {
            if (uVar22 == 0) goto LAB_0010d510;
            uVar20 = 0;
            uVar19 = 1;
            if (1 < uVar13) break;
            goto LAB_0010d510;
         }

         if (cVar4 == '\x02') {
            if (uVar22 == 0) goto LAB_0010d510;
            uVar20 = 0;
            uVar19 = 1;
            if (1 < uVar13) goto LAB_0010d7f2;
            goto LAB_0010d510;
         }

         if (cVar4 != '\0') goto LAB_0010d515;
         if (uVar22 == 0) goto LAB_0010d510;
         uVar15 = 1;
         if (1 < uVar13) goto LAB_0010d4c9;
         goto LAB_0010d510;
      }

      LAB_0010d439:iVar18 = uVar22 - 1;
      if (iVar18 < iVar14) {
         return 0;
      }

   }
 while ( true );
   while (true) {
      uVar19 = uVar19 + 1 + (uint)(byte)pcVar5[(ulong)uVar20 * 3 + 3];
      uVar20 = uVar20 + 1;
      if (uVar13 <= uVar19) break;
      uVar16 = ( uint )(ushort)(*(ushort*)( pcVar5 + (ulong)uVar20 * 3 + 1 ) << 8 | *(ushort*)( pcVar5 + (ulong)uVar20 * 3 + 1 ) >> 8);
      if (( uVar16 <= uVar22 ) && ( uVar22 <= uVar16 + (byte)pcVar5[(ulong)uVar20 * 3 + 3] )) {
         uVar16 = ( uVar19 + uVar22 ) - uVar16;
         goto LAB_0010d508;
      }

   }
;
   goto LAB_0010d510;
   LAB_0010d7f2:uVar16 = ( uint )(ushort)(*(ushort*)( pcVar5 + (ulong)uVar20 * 4 + 1 ) << 8 | *(ushort*)( pcVar5 + (ulong)uVar20 * 4 + 1 ) >> 8);
   uVar11 = ( uint )(ushort)(*(ushort*)( pcVar5 + (ulong)uVar20 * 4 + 3 ) << 8 | *(ushort*)( pcVar5 + (ulong)uVar20 * 4 + 3 ) >> 8);
   if (( uVar22 < uVar16 ) || ( uVar16 + uVar11 < uVar22 )) goto LAB_0010d7e0;
   uVar16 = ( uVar19 + uVar22 ) - uVar16;
   LAB_0010d508:if (uVar16 != 0) goto LAB_0010d520;
   goto LAB_0010d510;
   LAB_0010d7e0:uVar19 = uVar19 + 1 + uVar11;
   uVar20 = uVar20 + 1;
   if (uVar13 <= uVar19) goto LAB_0010d510;
   goto LAB_0010d7f2;
   while (uVar15 = uVar15 + 1,uVar15 != uVar13) {
      LAB_0010d4c9:if (uVar22 == ( ushort )(*(ushort*)( pcVar5 + uVar15 * 2 + -1 ) << 8 | *(ushort*)( pcVar5 + uVar15 * 2 + -1 ) >> 8)) {
         uVar16 = (uint)uVar15;
         goto LAB_0010d520;
      }

   }
;
   LAB_0010d510:uVar21 = *(ushort*)( puVar2 + 2 );
   LAB_0010d515:if (uVar21 != 0) {
      return 0;
   }

   uVar16 = 0;
   LAB_0010d520:*param_3 = uVar16;
   return 1;
}
/* OT::hmtxvmtx<OT::hmtx, OT::hhea, OT::HVAR>::accelerator_t::get_advance_with_var_unscaled(unsigned
   int, hb_font_t*, float*) const */ulong OT::hmtxvmtx<OT::hmtx,OT::hhea,OT::HVAR>::accelerator_t::get_advance_with_var_unscaled(accelerator_t *this, uint param_1, hb_font_t *param_2, float *param_3) {
   byte bVar1;
   ushort uVar2;
   uint uVar3;
   uint uVar4;
   ulong uVar5;
   byte bVar6;
   sbyte sVar7;
   undefined *puVar8;
   char *pcVar9;
   byte *pbVar10;
   ushort uVar11;
   byte *pbVar12;
   ItemVariationStore *this_00;
   undefined *puVar13;
   float fVar14;
   if (*(uint*)( this + 4 ) <= param_1) {
      if (*(int*)( this + 8 ) != 0) {
         return 0;
      }

      return ( ulong ) * (uint*)( this + 0x10 );
   }

   pcVar9 = &_hb_NullPool;
   puVar8 = *(undefined**)( this + 0x18 );
   if (puVar8 == (undefined*)0x0) {
      puVar8 = &_hb_NullPool;
   }

   uVar3 = *(int*)this - 1U;
   if (param_1 < *(int*)this - 1U) {
      uVar3 = param_1;
   }

   uVar11 = *(ushort*)( *(long*)( puVar8 + 0x10 ) + (ulong)uVar3 * 4 );
   uVar11 = uVar11 << 8 | uVar11 >> 8;
   if (*(uint*)( param_2 + 0x78 ) == 0) {
      LAB_0010dbce:return (ulong)uVar11;
   }

   puVar8 = *(undefined**)( this + 0x20 );
   if (puVar8 == (undefined*)0x0) {
      puVar8 = &_hb_NullPool;
   }

   if (*(uint*)( puVar8 + 0x18 ) == 0) {
      uVar5 = _glyf_get_advance_with_var_unscaled(param_2, param_1, false);
      if ((int)uVar5 != 0) {
         return uVar5;
      }

      goto LAB_0010dbce;
   }

   puVar13 = &_hb_NullPool;
   if (0x13 < *(uint*)( puVar8 + 0x18 )) {
      puVar13 = *(undefined**)( puVar8 + 0x10 );
   }

   uVar3 = *(uint*)( puVar13 + 8 );
   if (uVar3 != 0) {
      pcVar9 = puVar13 + ( uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18 );
   }

   if (*pcVar9 == '\0') {
      uVar2 = *(ushort*)( pcVar9 + 2 ) << 8 | *(ushort*)( pcVar9 + 2 ) >> 8;
      if (uVar2 == 0) goto LAB_0010db1d;
      if (uVar2 <= param_1) {
         param_1 = uVar2 - 1;
      }

      bVar6 = pcVar9[1];
      uVar3 = ( bVar6 >> 4 & 3 ) + 1;
      pbVar10 = (byte*)( pcVar9 + ( ulong )(param_1 * uVar3) + 4 );
      uVar4 = 0;
      pbVar12 = pbVar10 + uVar3;
      do {
         bVar1 = *pbVar10;
         pbVar10 = pbVar10 + 1;
         uVar4 = uVar4 * 0x100 + (uint)bVar1;
      }
 while ( pbVar12 != pbVar10 );
   }
 else {
      if (( *pcVar9 != '\x01' ) || ( uVar3 = uVar3 == 0 )) goto LAB_0010db1d;
      uVar3 = uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18;
      if (uVar3 <= param_1) {
         param_1 = uVar3 - 1;
      }

      bVar6 = pcVar9[1];
      uVar3 = ( bVar6 >> 4 & 3 ) + 1;
      pbVar10 = (byte*)( pcVar9 + ( ulong )(param_1 * uVar3) + 6 );
      uVar4 = 0;
      pbVar12 = pbVar10 + uVar3;
      do {
         bVar1 = *pbVar10;
         pbVar10 = pbVar10 + 1;
         uVar4 = uVar4 * 0x100 + (uint)bVar1;
      }
 while ( pbVar12 != pbVar10 );
   }

   sVar7 = ( bVar6 & 0xf ) + 1;
   param_1 = ( 1 << sVar7 ) - 1U & uVar4 | ( uVar4 >> sVar7 ) << 0x10;
   LAB_0010db1d:uVar3 = *(uint*)( puVar13 + 4 );
   this_00 = (ItemVariationStore*)&_hb_NullPool;
   if (uVar3 != 0) {
      this_00 = (ItemVariationStore*)( puVar13 + ( uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18 ) );
   }

   fVar14 = (float)ItemVariationStore::get_delta(this_00, param_1 >> 0x10, param_1 & 0xffff, *(int**)( param_2 + 0x80 ), *(uint*)( param_2 + 0x78 ), param_3);
   fVar14 = fVar14 + _LC9;
   if ((float)( (uint)fVar14 & _LC4 ) < _LC1) {
      fVar14 = (float)( ( uint )((float)(int)fVar14 - (float)( -(uint)(fVar14 < (float)(int)fVar14) & _LC3 )) | ~_LC4 & (uint)fVar14 );
   }

   return (long)( fVar14 + (float)uVar11 );
}
/* hb_hashmap_t<unsigned int, unsigned int, true>::fini() */void hb_hashmap_t<unsigned_int,unsigned_int,true>::fini(hb_hashmap_t<unsigned_int,unsigned_int,true> *this) {
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
                  goto LAB_0010dd68;
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
      LAB_0010dd68:pthread_mutex_destroy(__mutex);
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
/* bool OT::TupleValues::decompile<int>(OT::IntType<unsigned char, 1u> const*&, hb_vector_t<int,
   false>&, OT::IntType<unsigned char, 1u> const*, bool) */bool OT::TupleValues::decompile<int>(IntType **param_1, hb_vector_t *param_2, IntType *param_3, bool param_4) {
   IntType IVar1;
   long lVar2;
   byte bVar3;
   IntType *pIVar4;
   ulong uVar5;
   long lVar6;
   void *pvVar7;
   uint uVar8;
   long lVar9;
   uint uVar10;
   uint uVar11;
   byte bVar12;
   ulong uVar13;
   uint uVar14;
   uint uVar15;
   uint uVar16;
   bool bVar17;
   if (param_4) {
      pIVar4 = *param_1;
      uVar8 = *(uint*)param_2;
      uVar10 = ( uint )(( (long)param_3 - (long)pIVar4 ) / 2);
      if ((int)uVar8 < 0) {
         uVar16 = 0xffffffff;
      }
 else {
         uVar16 = 0xffffffff;
         uVar11 = uVar8;
         if (uVar8 < uVar10) {
            do {
               uVar11 = ( uVar11 >> 1 ) + 8 + uVar11;
            }
 while ( uVar11 < uVar10 );
            if (uVar11 < 0x40000000) {
               pvVar7 = realloc(*(void**)( param_2 + 8 ), (ulong)uVar11 << 2);
               if (pvVar7 == (void*)0x0) {
                  pIVar4 = *param_1;
                  uVar16 = 0xffffffff;
                  if (*(uint*)param_2 < uVar11) {
                     *(uint*)param_2 = ~*(uint *)param_2;
                  }

               }
 else {
                  *(void**)( param_2 + 8 ) = pvVar7;
                  uVar16 = 0xffffffff;
                  pIVar4 = *param_1;
                  *(uint*)param_2 = uVar11;
               }

            }
 else {
               uVar16 = 0xffffffff;
               *(uint*)param_2 = ~uVar8;
            }

         }

      }

   }
 else {
      uVar16 = *(uint*)( param_2 + 4 );
      if (uVar16 == 0) {
         return true;
      }

      pIVar4 = *param_1;
   }

   uVar8 = 0;
   do {
      if (param_3 < pIVar4 + 1) {
         return param_4;
      }

      *param_1 = pIVar4 + 1;
      IVar1 = *pIVar4;
      bVar12 = ( (byte)IVar1 & 0x3f ) + 1;
      uVar10 = (uint)bVar12;
      if (param_4) {
         uVar11 = *(uint*)param_2;
         if ((int)uVar11 < 0) {
            return false;
         }

         uVar15 = *(int*)( param_2 + 4 ) + uVar10;
         if ((int)uVar15 < 0) {
            uVar15 = 0;
         }

         uVar14 = uVar11;
         if (uVar11 < uVar15) {
            do {
               uVar14 = uVar14 + 8 + ( uVar14 >> 1 );
            }
 while ( uVar14 < uVar15 );
            if (0x3fffffff < uVar14) {
               LAB_0010e138:*(uint*)param_2 = ~uVar11;
               return false;
            }

            pvVar7 = realloc(*(void**)( param_2 + 8 ), (ulong)uVar14 << 2);
            if (pvVar7 != (void*)0x0) {
               *(void**)( param_2 + 8 ) = pvVar7;
               *(uint*)param_2 = uVar14;
               *(uint*)( param_2 + 4 ) = uVar15;
               goto joined_r0x0010df26;
            }

            uVar11 = *(uint*)param_2;
            if (uVar11 < uVar14) goto LAB_0010e138;
         }

         *(uint*)( param_2 + 4 ) = uVar15;
      }

      joined_r0x0010df26:uVar11 = bVar12 + uVar8;
      if (uVar16 < uVar11) {
         return false;
      }

      bVar3 = (byte)IVar1 & 0xc0;
      if (bVar3 == 0x80) {
         if (uVar8 < uVar11) {
            memset((void*)( *(long*)( param_2 + 8 ) + (ulong)uVar8 * 4 ), 0, ( ulong )(uVar10 - 1) * 4 + 4);
            uVar8 = uVar11;
         }

      }
 else {
         pIVar4 = *param_1;
         if (bVar3 == 0x40) {
            if (param_3 < pIVar4 + uVar10 * 2) {
               return false;
            }

            if (uVar8 < uVar11) {
               lVar9 = 0;
               lVar2 = *(long*)( param_2 + 8 );
               do {
                  *(int*)( lVar2 + (ulong)uVar8 * 4 + lVar9 * 2 ) = (int)(short)( *(ushort*)( pIVar4 + lVar9 ) << 8 | *(ushort*)( pIVar4 + lVar9 ) >> 8 );
                  lVar9 = lVar9 + 2;
               }
 while ( lVar9 != ( ulong )(uVar10 - 1) * 2 + 2 );
               *param_1 = pIVar4 + lVar9;
               uVar8 = uVar11;
            }

         }
 else if (bVar3 == 0xc0) {
            if (param_3 < pIVar4 + uVar10 * 4) {
               return false;
            }

            if (uVar8 < uVar11) {
               lVar2 = ( ulong )(uVar10 - 1) * 4 + 4;
               lVar9 = *(long*)( param_2 + 8 );
               lVar6 = 0;
               do {
                  uVar10 = *(uint*)( pIVar4 + lVar6 );
                  *(uint*)( lVar9 + (ulong)uVar8 * 4 + lVar6 ) = uVar10 >> 0x18 | ( uVar10 & 0xff0000 ) >> 8 | ( uVar10 & 0xff00 ) << 8 | uVar10 << 0x18;
                  lVar6 = lVar6 + 4;
               }
 while ( lVar2 != lVar6 );
               *param_1 = pIVar4 + lVar2;
               uVar8 = uVar11;
            }

         }
 else {
            if (param_3 < pIVar4 + bVar12) {
               return false;
            }

            if (uVar8 < uVar11) {
               lVar2 = *(long*)( param_2 + 8 );
               uVar13 = ( ulong )(uVar10 - 1);
               uVar5 = 0;
               do {
                  IVar1 = pIVar4[uVar5];
                  *(int*)( lVar2 + (ulong)uVar8 * 4 + uVar5 * 4 ) = (int)(char)IVar1;
                  bVar17 = uVar5 != uVar13;
                  uVar5 = uVar5 + 1;
               }
 while ( bVar17 );
               *param_1 = pIVar4 + uVar13 + 1;
               *(int*)( lVar2 + ( uVar8 + uVar13 ) * 4 ) = (int)(char)IVar1;
               uVar8 = uVar11;
            }

         }

      }

      if (uVar16 <= uVar8) {
         return true;
      }

      pIVar4 = *param_1;
   }
 while ( true );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OT::gvar::accelerator_t::apply_deltas_to_points(unsigned int, hb_array_t<int const>,
   hb_array_t<contour_point_t>, bool) const [clone .isra.0] */void OT::gvar::accelerator_t::apply_deltas_to_points
               (undefined8 *param_1,uint param_2,long param_3,uint param_4,long param_5,
               undefined8 param_6,char param_7)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  char cVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  uint uVar18;
  int iVar19;
  hb_vector_t *phVar20;
  long lVar21;
  void *pvVar22;
  ulong uVar23;
  uint *puVar24;
  undefined *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined *puVar33;
  undefined *puVar34;
  size_t sVar35;
  long lVar36;
  undefined8 *puVar37;
  ulong uVar38;
  ushort uVar39;
  int iVar40;
  IntType *pIVar41;
  int iVar42;
  IntType *pIVar43;
  uint uVar44;
  int *piVar45;
  byte *pbVar46;
  ulong uVar47;
  ushort uVar48;
  uint uVar49;
  int iVar50;
  int iVar51;
  long lVar52;
  int iVar53;
  char cVar54;
  ushort uVar55;
  void *pvVar56;
  IntType *pIVar57;
  char *pcVar58;
  ulong uVar59;
  void *pvVar60;
  long in_FS_OFFSET;
  bool bVar61;
  double dVar62;
  float fVar63;
  float fVar64;
  IntType *local_168;
  IntType *local_160;
  IntType *local_150;
  uint local_148;
  uint local_118;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_fc;
  uint *local_e8;
  IntType *local_e0;
  uint local_d0;
  int local_c8;
  int local_c4;
  long local_b8;
  undefined8 local_b0;
  IntType *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = param_5;
  local_b0 = param_6;
  if (*(uint *)(param_1 + 1) <= param_2) goto LAB_0010e2e0;
  puVar34 = (undefined *)*param_1;
  puVar25 = &_hb_NullPool;
  if (puVar34 != (undefined *)0x0) {
    puVar25 = puVar34;
  }
  puVar33 = &_hb_NullPool;
  if (0x13 < *(uint *)(puVar25 + 0x18)) {
    puVar33 = *(undefined **)(puVar25 + 0x10);
  }
  if ((puVar33[0xf] & 1) == 0) {
    uVar29 = (uint)(ushort)(*(ushort *)(puVar33 + (ulong)param_2 * 2 + 0x14) << 8 |
                           *(ushort *)(puVar33 + (ulong)param_2 * 2 + 0x14) >> 8) * 2;
  }
  else {
    uVar29 = *(uint *)(puVar33 + (ulong)param_2 * 4 + 0x14);
    uVar29 = uVar29 >> 0x18 | (uVar29 & 0xff0000) >> 8 | (uVar29 & 0xff00) << 8 | uVar29 << 0x18;
  }
  param_2 = param_2 + 1;
  if (*(uint *)(param_1 + 1) < param_2) {
    uVar18 = 0;
  }
  else if ((puVar33[0xf] & 1) == 0) {
    uVar18 = (uint)(ushort)(*(ushort *)(puVar33 + (ulong)param_2 * 2 + 0x14) << 8 |
                           *(ushort *)(puVar33 + (ulong)param_2 * 2 + 0x14) >> 8) * 2;
  }
  else {
    uVar18 = *(uint *)(puVar33 + (ulong)param_2 * 4 + 0x14);
    uVar18 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
  }
  if (uVar18 < uVar29) {
LAB_0010eb51:
    uVar59 = 0;
    local_160 = (IntType *)0x0;
    local_168 = (IntType *)&_hb_NullPool;
  }
  else {
    uVar28 = *(uint *)(puVar33 + 0x10);
    uVar28 = (uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18) +
             uVar29;
    if (*(uint *)(puVar34 + 0x18) < uVar28) goto LAB_0010eb51;
    uVar49 = *(uint *)(puVar34 + 0x18) - uVar28;
    if (uVar18 - uVar29 < uVar49) {
      uVar49 = uVar18 - uVar29;
    }
    uVar59 = (ulong)uVar49;
    local_168 = (IntType *)(*(long *)(puVar34 + 0x10) + (ulong)uVar28);
    local_160 = local_168;
    if (uVar49 < 4) goto LAB_0010eb51;
  }
  uVar15 = *(ushort *)local_168;
  if (uVar15 == 0) goto LAB_0010e2e0;
  pIVar43 = (IntType *)&_hb_NullPool;
  local_98 = 0;
  local_90 = (void *)0x0;
  puVar34 = (undefined *)*param_1;
  if (puVar34 == (undefined *)0x0) {
    puVar34 = &_hb_NullPool;
  }
  puVar25 = &_hb_NullPool;
  if (0x13 < *(uint *)(puVar34 + 0x18)) {
    puVar25 = *(undefined **)(puVar34 + 0x10);
  }
  uVar39 = *(ushort *)(puVar25 + 4);
  if ((short)(uVar15 << 8 | uVar15 >> 8) < 0) {
    uVar15 = *(ushort *)(local_168 + 2);
    if (uVar15 != 0) {
      pIVar43 = local_160 + (ushort)(uVar15 << 8 | uVar15 >> 8);
    }
    local_58 = pIVar43;
    cVar14 = TupleVariationData::decompile_points
                       ((IntType **)&local_58,(hb_vector_t *)&local_98,local_160 + uVar59);
    if (cVar14 == '\0') {
      local_c4 = (int)local_98;
    }
    else {
      local_c4 = (int)local_98;
      if ((((*(ushort *)local_168 & 0xf) != 0 || *(ushort *)local_168 >> 8 != 0) &&
          (local_160 <= local_168 + 4)) && (local_168 + 4 <= local_160 + uVar59)) {
        local_110 = (int)local_58 - (int)pIVar43;
        goto LAB_0010e42a;
      }
    }
  }
  else {
    if ((((uVar15 << 8 & 0xfff) == 0 && uVar15 >> 8 == 0) || (local_168 + 4 < local_160)) ||
       (local_160 + uVar59 < local_168 + 4)) goto LAB_0010e2e0;
    local_c4 = 0;
    local_110 = 0;
LAB_0010e42a:
    local_e0 = local_160 + uVar59;
    local_150 = local_168 + 4;
    iVar40 = (int)local_e0;
    uVar29 = iVar40 - (int)local_150;
    if (3 < uVar29) {
      uVar15 = uVar39 << 8 | uVar39 >> 8;
      iVar50 = (uint)uVar15 + (uint)uVar15;
      uVar15 = *(ushort *)(local_168 + 6) << 8;
      uVar28 = (uint)(short)(uVar15 | *(ushort *)(local_168 + 6) >> 8);
      uVar39 = *(ushort *)(local_168 + 4) << 8 | *(ushort *)(local_168 + 4) >> 8;
      uVar18 = ((uVar15 >> 0xe & 1) * 2 - ((int)uVar28 >> 0x1f)) * iVar50 + 4;
      if (uVar18 < uVar39) {
        uVar18 = (uint)uVar39;
      }
      if (uVar18 <= uVar29) {
        local_88 = 0;
        local_80 = (void *)0x0;
        puVar34 = (undefined *)*param_1;
        local_78 = 0;
        local_70 = (void *)0x0;
        local_68 = 0;
        if (puVar34 == (undefined *)0x0) {
          puVar34 = &_hb_NullPool;
        }
        local_60 = (void *)0x0;
        local_58 = (IntType *)0x0;
        puVar25 = &_hb_NullPool;
        if (0x13 < *(uint *)(puVar34 + 0x18)) {
          puVar25 = *(undefined **)(puVar34 + 0x10);
        }
        local_50 = (void *)0x0;
        pvVar56 = (void *)0x0;
        local_104 = 1;
        pvVar60 = (void *)0x0;
        uVar15 = *(ushort *)(puVar25 + 6);
        local_118 = 0;
        local_148 = 0;
        local_e8 = (uint *)0x0;
        uVar29 = *(uint *)(puVar25 + 8);
        local_d0 = 0;
        uVar49 = (uint)(ushort)(*(ushort *)(puVar25 + 4) << 8 | *(ushort *)(puVar25 + 4) >> 8);
        uVar18 = uVar29 >> 0x18 | (uVar29 & 0xff0000) >> 8 | (uVar29 & 0xff00) << 8 | uVar29 << 0x18
        ;
        local_108 = 0;
        bVar61 = false;
        uVar29 = (uint)local_b0;
        local_fc = 0;
        local_10c = 0;
        local_c8 = 0;
        do {
          uVar30 = (uint)uVar39;
          uVar17 = (ushort)uVar28;
          uVar55 = uVar17 & 0x4000;
          uVar31 = uVar49;
          dVar62 = _LC24;
          if ((short)uVar17 < 0) {
            pIVar43 = local_150 + 4;
            if ((uVar28 & 0x4000) == 0) {
              uVar32 = 0;
              iVar53 = 1;
              pIVar57 = (IntType *)0x0;
              pIVar41 = (IntType *)0x0;
            }
            else {
              uVar59 = (ulong)uVar49;
              iVar19 = 1;
              uVar32 = 0;
              iVar53 = 1;
LAB_0010ef20:
              pIVar41 = local_150 + uVar59 * 2 + 4;
              pIVar57 = local_150 + (ulong)((iVar19 + 1) * uVar49) * 2 + 4;
            }
LAB_0010e668:
            fVar4 = _LC3;
            if (uVar32 < uVar31) {
LAB_0010e700:
              do {
                uVar59 = (ulong)uVar32;
                uVar16 = *(ushort *)(pIVar43 + uVar59 * 2) << 8 |
                         *(ushort *)(pIVar43 + uVar59 * 2) >> 8;
                iVar19 = (int)(short)uVar16;
                if (iVar19 != 0) {
                  piVar45 = (int *)(param_3 + uVar59 * 4);
                  if (param_4 <= uVar32) {
                    piVar45 = (int *)&_hb_NullPool;
                  }
                  iVar12 = *piVar45;
                  if (iVar19 != iVar12) {
                    if ((uVar28 & 0x4000) == 0) {
                      if (iVar12 == 0) goto LAB_0010eb8e;
                      if ((short)uVar16 < 0) {
                        if (iVar12 < iVar19) goto LAB_0010eb8e;
                        iVar42 = 0;
                      }
                      else {
                        iVar42 = iVar19;
                        if (iVar12 < 0) goto LAB_0010eb8e;
                      }
                      if (iVar42 < iVar12) goto LAB_0010eb8e;
                      dVar62 = dVar62 * ((double)iVar12 / (double)iVar19);
                    }
                    else {
                      uVar48 = *(ushort *)(pIVar57 + uVar59 * 2) << 8 |
                               *(ushort *)(pIVar57 + uVar59 * 2) >> 8;
                      uVar16 = *(ushort *)(pIVar41 + uVar59 * 2) << 8 |
                               *(ushort *)(pIVar41 + uVar59 * 2) >> 8;
                      iVar51 = (int)(short)uVar48;
                      iVar42 = (int)(short)uVar16;
                      if (((iVar19 <= iVar51) && (iVar42 <= iVar19)) &&
                         ((-1 < (short)uVar16 || ((short)uVar48 < 1)))) {
                        if ((iVar12 < iVar42) || (iVar51 < iVar12)) goto LAB_0010eb8e;
                        if (iVar12 < iVar19) {
                          dVar62 = dVar62 * ((double)(iVar12 - iVar42) / (double)(iVar19 - iVar42));
                        }
                        else {
                          dVar62 = dVar62 * ((double)(iVar51 - iVar12) / (double)(iVar51 - iVar19));
                        }
                      }
                    }
                  }
                }
                uVar32 = uVar32 + iVar53;
              } while (uVar32 < uVar31);
              uVar28 = uVar28 & 0xffff;
              fVar4 = (float)dVar62;
              if ((float)dVar62 == 0.0) goto LAB_0010eb8e;
            }
            pIVar43 = (IntType *)&_hb_NullPool;
            uVar55 = *(ushort *)(local_168 + 2);
            if (uVar55 != 0) {
              pIVar43 = local_160 + (ushort)(uVar55 << 8 | uVar55 >> 8);
            }
            pIVar43 = pIVar43 + local_110;
            local_a0 = pIVar43;
            if (((local_160 <= pIVar43) && (pIVar43 <= local_e0)) &&
               ((uint)uVar39 <= (uint)(iVar40 - (int)pIVar43))) {
              if (local_10c == 0) {
                local_10c = 0;
                if (-1 < (int)uVar29) {
                  local_10c = uVar29;
                }
                pvVar22 = pvVar56;
                uVar31 = local_fc;
                if (local_fc < local_10c) {
                  do {
                    uVar31 = (uVar31 >> 1) + 8 + uVar31;
                  } while (uVar31 < local_10c);
                  if ((0x15555555 < uVar31) ||
                     (pvVar22 = realloc(pvVar56,(ulong)uVar31 * 0xc), pvVar22 == (void *)0x0)) {
                    local_fc = ~local_fc;
                    goto LAB_0010eac0;
                  }
                }
                local_fc = uVar31;
                pvVar56 = pvVar22;
                if (param_7 == '\0') {
                  if (uVar29 * 0xc == 0) goto LAB_0010e815;
                  sVar35 = (size_t)(uVar29 * 0xc);
                }
                else {
                  sVar35 = 0x30;
                  pvVar22 = (void *)((long)pvVar22 + (ulong)(uVar29 - 4) * 0xc);
                }
                memset(pvVar22,0,sVar35);
              }
LAB_0010e815:
              pIVar43 = pIVar43 + uVar39;
              phVar20 = (hb_vector_t *)&local_98;
              if ((uVar28 & 0x2000) != 0) {
                phVar20 = (hb_vector_t *)&local_78;
                cVar14 = TupleVariationData::decompile_points(&local_a0,phVar20,pIVar43);
                if (cVar14 == '\0') goto LAB_0010ed28;
              }
              uVar28 = *(uint *)(phVar20 + 4);
              lVar36 = *(long *)(phVar20 + 8);
              uVar31 = uVar29;
              if (uVar28 != 0) {
                uVar31 = uVar28;
              }
              if (-1 < (int)local_148) {
                uVar30 = 0;
                if (-1 < (int)uVar31) {
                  uVar30 = uVar31;
                }
                uVar32 = local_148;
                if (local_148 < uVar30) {
                  do {
                    uVar32 = (uVar32 >> 1) + 8 + uVar32;
                  } while (uVar32 < uVar30);
                  if ((0x3fffffff < uVar32) ||
                     (pvVar22 = realloc(local_60,(ulong)uVar32 << 2), pvVar22 == (void *)0x0)) {
                    local_148 = ~local_148;
                    goto LAB_0010eac0;
                  }
                  local_68 = (ulong)uVar32;
                  local_60 = pvVar22;
                }
                local_68 = CONCAT44(uVar30,(uint)local_68);
                bVar13 = TupleValues::decompile<int>
                                   (&local_a0,(hb_vector_t *)&local_68,pIVar43,false);
                if (!bVar13) {
                  local_148 = (uint)local_68;
                  goto LAB_0010eac0;
                }
                if (-1 < (int)local_118) {
                  if (local_118 < uVar30) {
                    do {
                      local_118 = (local_118 >> 1) + 8 + local_118;
                    } while (local_118 < uVar30);
                    if ((0x3fffffff < local_118) ||
                       (pvVar22 = realloc(local_50,(ulong)local_118 << 2), pvVar22 == (void *)0x0))
                    goto LAB_0010f04f;
                    local_58 = (IntType *)(ulong)local_118;
                    local_50 = pvVar22;
                  }
                  local_58 = (IntType *)CONCAT44(uVar30,(uint)local_58);
                  bVar13 = TupleValues::decompile<int>
                                     (&local_a0,(hb_vector_t *)&local_58,pIVar43,false);
                  if (!bVar13) goto LAB_0010ea9e;
                  if (uVar28 == 0) {
                    if (fVar4 == _LC3) {
                      uVar28 = 0;
                      if (param_7 != '\0') {
                        uVar28 = uVar29 - 4;
                      }
                      uVar59 = (ulong)uVar28;
                      if (uVar28 < uVar29) {
                        lVar36 = uVar59 * 4;
                        puVar27 = (undefined8 *)((long)pvVar56 + uVar59 * 0xc);
                        do {
                          piVar45 = (int *)((long)local_60 + lVar36);
                          piVar1 = (int *)((long)local_50 + lVar36);
                          lVar36 = lVar36 + 4;
                          *puVar27 = CONCAT44((float)*piVar1 + (float)((ulong)*puVar27 >> 0x20),
                                              (float)*piVar45 + (float)*puVar27);
                          puVar27 = (undefined8 *)((long)puVar27 + 0xc);
                        } while (lVar36 != (uVar59 + 1 + (ulong)((uVar29 - 1) - uVar28)) * 4);
                      }
                    }
                    else {
                      uVar28 = 0;
                      if (param_7 != '\0') {
                        uVar28 = uVar29 - 4;
                      }
                      uVar59 = (ulong)uVar28;
                      if (uVar28 < uVar29) {
                        lVar36 = uVar59 * 4;
                        puVar27 = (undefined8 *)((long)pvVar56 + uVar59 * 0xc);
                        do {
                          piVar45 = (int *)((long)local_60 + lVar36);
                          piVar1 = (int *)((long)local_50 + lVar36);
                          lVar36 = lVar36 + 4;
                          *puVar27 = CONCAT44((float)*piVar1 * fVar4 +
                                              (float)((ulong)*puVar27 >> 0x20),
                                              (float)*piVar45 * fVar4 + (float)*puVar27);
                          puVar27 = (undefined8 *)((long)puVar27 + 0xc);
                        } while (lVar36 != (uVar59 + 1 + (ulong)((uVar29 - 1) - uVar28)) * 4);
                      }
                    }
                  }
                  else {
                    if (local_c8 == 0) {
                      if (param_7 != '\0') {
                        if (bVar61 != false) {
LAB_0010f633:
                          uVar59 = (ulong)(uVar29 - 4);
                          if (3 < uVar29) goto LAB_0010f640;
                        }
                        goto LAB_0010e940;
                      }
                      contour_point_vector_t::extend
                                ((contour_point_vector_t *)&local_88,(hb_array_t *)&local_b8);
                      if ((int)local_88 < 0) {
                        local_118 = (uint)local_58;
                        local_148 = (uint)local_68;
                        goto LAB_0010eac0;
                      }
                      local_c8 = local_88._4_4_;
                      pvVar60 = local_80;
                      if (bVar61 == false) goto LAB_0010f49b;
                      uVar59 = 0;
                      if (uVar29 != 0) goto LAB_0010f640;
LAB_0010f4b4:
                      if (fVar4 != _LC3) {
                        if (uVar31 == 0) goto LAB_0010ea19;
LAB_0010f4ff:
                        lVar21 = 0;
                        do {
                          if ((uint)lVar21 < uVar28) {
                            uVar30 = *(uint *)(lVar36 + lVar21 * 4);
                          }
                          else {
                            __hb_CrapPool = __hb_NullPool;
                            uVar30 = __hb_NullPool;
                          }
                          if ((uVar30 < local_10c) && ((param_7 == '\0' || (uVar29 - 4 <= uVar30))))
                          {
                            iVar19 = *(int *)((long)local_60 + lVar21 * 4);
                            iVar53 = *(int *)((long)local_50 + lVar21 * 4);
                            puVar27 = (undefined8 *)((long)pvVar56 + (ulong)uVar30 * 0xc);
                            *(undefined1 *)(puVar27 + 1) = 1;
                            *puVar27 = CONCAT44((float)iVar53 * fVar4 +
                                                (float)((ulong)*puVar27 >> 0x20),
                                                (float)iVar19 * fVar4 + (float)*puVar27);
                          }
                          lVar21 = lVar21 + 1;
                        } while ((uint)lVar21 < uVar31);
                        goto LAB_0010ea0b;
                      }
                      if (uVar31 != 0) goto LAB_0010e994;
                    }
                    else {
                      if (bVar61 != false) {
                        if (param_7 != '\0') goto LAB_0010f633;
                        uVar59 = 0;
                        if (uVar29 == 0) goto LAB_0010f4b4;
LAB_0010f640:
                        puVar27 = (undefined8 *)(uVar59 * 0xc + (long)pvVar56);
                        puVar37 = (undefined8 *)(local_b8 + uVar59 * 0xc);
                        do {
                          uVar30 = (int)uVar59 + 1;
                          uVar59 = (ulong)uVar30;
                          *puVar37 = CONCAT44((float)((ulong)*puVar27 >> 0x20) +
                                              (float)((ulong)*puVar37 >> 0x20),
                                              (float)*puVar27 + (float)*puVar37);
                          puVar27 = (undefined8 *)((long)puVar27 + 0xc);
                          puVar37 = (undefined8 *)((long)puVar37 + 0xc);
                        } while (uVar30 < uVar29);
                      }
                      if (param_7 == '\0') {
LAB_0010f49b:
                        sVar35 = (size_t)(uVar29 * 0xc);
                        pvVar22 = pvVar56;
                        if (uVar29 * 0xc == 0) goto LAB_0010f4b4;
                      }
                      else {
LAB_0010e940:
                        sVar35 = 0x30;
                        pvVar22 = (void *)((long)pvVar56 + (ulong)(uVar29 - 4) * 0xc);
                      }
                      memset(pvVar22,0,sVar35);
                      if (fVar4 == _LC3) {
                        if (uVar31 != 0) {
LAB_0010e994:
                          lVar21 = 0;
                          do {
                            if ((uint)lVar21 < uVar28) {
                              uVar30 = *(uint *)(lVar36 + lVar21 * 4);
                            }
                            else {
                              __hb_CrapPool = __hb_NullPool;
                              uVar30 = __hb_NullPool;
                            }
                            if ((uVar30 < local_10c) &&
                               ((param_7 == '\0' || (uVar29 - 4 <= uVar30)))) {
                              iVar19 = *(int *)((long)local_60 + lVar21 * 4);
                              iVar53 = *(int *)((long)local_50 + lVar21 * 4);
                              puVar27 = (undefined8 *)((long)pvVar56 + (ulong)uVar30 * 0xc);
                              *(undefined1 *)(puVar27 + 1) = 1;
                              *puVar27 = CONCAT44((float)iVar53 + (float)((ulong)*puVar27 >> 0x20),
                                                  (float)iVar19 + (float)*puVar27);
                            }
                            lVar21 = lVar21 + 1;
                          } while ((uint)lVar21 < uVar31);
                        }
                      }
                      else if (uVar31 != 0) goto LAB_0010f4ff;
LAB_0010ea0b:
                      if (param_7 != '\0') goto LAB_0010ee14;
                    }
LAB_0010ea19:
                    uVar59 = (ulong)local_d0;
                    if (local_d0 == 0) {
                      if (uVar29 == 0) {
                        if (-1 < (int)local_108) goto LAB_0010ee14;
                      }
                      else {
                        uVar28 = 0;
                        pcVar58 = (char *)(local_b8 + 9);
LAB_0010ea5d:
                        do {
                          if (*pcVar58 != '\0') {
                            uVar30 = (int)uVar59 + 1;
                            uVar31 = local_108;
                            puVar24 = local_e8;
                            if ((int)local_108 <= (int)uVar59) {
                              if ((int)local_108 < 0) {
LAB_0010f7e0:
                                __hb_CrapPool = __hb_NullPool;
                                uVar28 = uVar28 + 1;
                                pcVar58 = pcVar58 + 0xc;
                                if (uVar29 == uVar28) goto LAB_0010ea9e;
                                goto LAB_0010ea5d;
                              }
                              if (local_108 < uVar30) {
                                do {
                                  uVar31 = (uVar31 >> 1) + 8 + uVar31;
                                } while (uVar31 < uVar30);
                                if ((0x3fffffff < uVar31) ||
                                   (puVar24 = (uint *)realloc(local_e8,(ulong)uVar31 << 2),
                                   puVar24 == (uint *)0x0)) {
                                  local_108 = ~local_108;
                                  goto LAB_0010f7e0;
                                }
                              }
                            }
                            local_e8 = puVar24;
                            local_108 = uVar31;
                            pcVar58 = pcVar58 + 0xc;
                            local_e8[uVar59] = uVar28;
                            uVar59 = (ulong)uVar30;
                            uVar28 = uVar28 + 1;
                            if (uVar29 == uVar28) break;
                            goto LAB_0010ea5d;
                          }
                          uVar28 = uVar28 + 1;
                          pcVar58 = pcVar58 + 0xc;
                        } while (uVar29 != uVar28);
                        local_d0 = (uint)uVar59;
                        if (-1 < (int)local_108) goto LAB_0010ed6a;
                      }
LAB_0010ea9e:
                      local_118 = (uint)local_58;
                      local_148 = (uint)local_68;
                      goto LAB_0010eac0;
                    }
LAB_0010ed6a:
                    if (local_e8 + local_d0 != local_e8) {
                      uVar59 = 0;
                      puVar24 = local_e8;
                      do {
                        uVar28 = *puVar24;
                        uVar31 = (uint)uVar59;
                        if (uVar31 < uVar28 + 1) {
                          uVar30 = uVar28 - uVar31;
                          lVar36 = uVar59 * 0xc;
                          pbVar46 = (byte *)((long)pvVar56 + lVar36 + 8);
                          iVar19 = 0;
                          do {
                            bVar9 = *pbVar46;
                            pbVar46 = pbVar46 + 0xc;
                            iVar19 = iVar19 + (uint)bVar9;
                          } while (pbVar46 !=
                                   (byte *)((long)pvVar56 + (uVar30 + uVar59) * 0xc + 0x14));
                          if (uVar30 - iVar19 < uVar30) {
                            iVar19 = (uVar30 - iVar19) + 1;
                            cVar14 = *(char *)((float *)((long)pvVar56 + lVar36) + 2);
                            uVar47 = uVar59;
                            cVar54 = cVar14;
LAB_0010f118:
                            uVar23 = (ulong)((uint)uVar47 + 1);
                            if (uVar28 <= (uint)uVar47) {
                              uVar23 = uVar59;
                            }
                            uVar30 = (uint)uVar23;
                            cVar10 = *(char *)((long)pvVar56 + uVar23 * 0xc + 8);
                            if ((cVar54 != '\0') && (uVar23 = uVar47, cVar10 == '\0')) {
                              do {
                                uVar38 = uVar59;
                                if (uVar28 <= (uint)uVar23) goto LAB_0010f156;
                                while( true ) {
                                  uVar38 = (ulong)((int)uVar23 + 1);
LAB_0010f156:
                                  pfVar2 = (float *)((long)pvVar56 + uVar38 * 0xc);
                                  cVar10 = *(char *)(pfVar2 + 2);
                                  bVar61 = cVar54 != '\0';
                                  uVar23 = uVar38;
                                  cVar54 = cVar10;
                                  uVar32 = (uint)uVar38;
                                  lVar21 = uVar38 * 0xc;
                                  if (bVar61) break;
                                  do {
                                    uVar23 = uVar38;
                                    if (cVar10 != '\0') {
                                      lVar52 = uVar47 * 0xc;
                                      goto LAB_0010f25f;
                                    }
                                    cVar54 = '\0';
                                    uVar32 = uVar31;
                                    lVar21 = lVar36;
                                    pfVar2 = (float *)((long)pvVar56 + lVar36);
                                    cVar10 = cVar14;
                                    uVar38 = uVar59;
                                  } while (uVar28 <= (uint)uVar23);
                                }
                              } while( true );
                            }
                            goto LAB_0010f330;
                          }
                        }
LAB_0010edff:
                        uVar59 = (ulong)(uVar28 + 1);
                        puVar24 = puVar24 + 1;
                      } while (puVar24 != local_e8 + local_d0);
                    }
                  }
LAB_0010ee14:
                  local_118 = (uint)local_58;
                  local_148 = (uint)local_68;
                  uVar55 = *(ushort *)(local_150 + 2) << 8;
                  uVar17 = uVar55 | *(ushort *)(local_150 + 2) >> 8;
                  uVar55 = uVar55 & 0x4000;
                  uVar30 = (uint)(ushort)(*(ushort *)local_150 << 8 | *(ushort *)local_150 >> 8);
                  bVar61 = bVar13;
                  goto LAB_0010eb8e;
                }
LAB_0010f04f:
                local_148 = (uint)local_68;
                iVar40 = (int)local_88;
                goto LAB_0010f064;
              }
            }
LAB_0010ed28:
            goto LAB_0010eac0;
          }
          uVar44 = ((uVar28 & 0xfff) + 1) * uVar49;
          if ((uVar44 <= (ushort)(uVar15 << 8 | uVar15 >> 8) * uVar49) &&
             ((uVar28 & 0xfff) < *(uint *)((long)param_1 + 0x14))) {
            puVar24 = (uint *)(param_1[3] + (ulong)(uVar17 & 0xfff) * 8);
            uVar11 = puVar24[1];
            uVar32 = *puVar24;
            if (uVar11 != 0xffffffff) {
              iVar53 = uVar11 - uVar32;
              uVar31 = uVar11 + 1;
LAB_0010e643:
              pIVar43 = (IntType *)(puVar25 + (ulong)(uVar44 - uVar49) * 2 + (ulong)uVar18);
              if ((uVar28 & 0x4000) == 0) {
                pIVar57 = (IntType *)0x0;
                pIVar41 = (IntType *)0x0;
                goto LAB_0010e668;
              }
LAB_0010f3a1:
              iVar19 = 0;
              uVar59 = 0;
              goto LAB_0010ef20;
            }
            if (uVar32 == 0xffffffff) {
              iVar53 = 1;
              uVar32 = 0;
              goto LAB_0010e643;
            }
            uVar31 = uVar32 + 1;
            pIVar43 = (IntType *)(puVar25 + (ulong)(uVar44 - uVar49) * 2 + (ulong)uVar18);
            if ((uVar28 & 0x4000) != 0) {
              iVar53 = 1;
              goto LAB_0010f3a1;
            }
            pIVar57 = (IntType *)0x0;
            pIVar41 = (IntType *)0x0;
            iVar53 = 1;
            goto LAB_0010e700;
          }
LAB_0010eb8e:
          local_110 = local_110 + uVar30;
          if ((((((ushort)(*(ushort *)local_168 << 8 | *(ushort *)local_168 >> 8) & 0xfff) <=
                 local_104) ||
               (local_150 = local_150 +
                            (((uint)(uVar55 != 0) * 2 - ((int)(short)uVar17 >> 0x1f)) * iVar50 + 4),
               local_150 < local_160)) || (local_e0 < local_150)) ||
             (uVar31 = iVar40 - (int)local_150, uVar31 < 4)) break;
          local_104 = local_104 + 1;
          uVar55 = *(ushort *)(local_150 + 2) << 8;
          uVar17 = uVar55 | *(ushort *)(local_150 + 2) >> 8;
          uVar28 = (uint)uVar17;
          uVar39 = *(ushort *)local_150 << 8 | *(ushort *)local_150 >> 8;
          uVar30 = ((uVar55 >> 0xe & 1) * 2 - ((int)(short)uVar17 >> 0x1f)) * iVar50 + 4;
          if (uVar30 < uVar39) {
            uVar30 = (uint)uVar39;
          }
        } while (uVar30 <= uVar31);
        if (bVar61 != false) {
          uVar18 = uVar29 - 4;
          if (param_7 == '\0') {
            uVar18 = 0;
          }
          if (uVar18 < uVar29) {
            lVar36 = (ulong)uVar18 * 0xc;
            puVar37 = (undefined8 *)(lVar36 + (long)pvVar56);
            puVar27 = (undefined8 *)(local_b8 + lVar36);
            do {
              uVar8 = *puVar37;
              puVar26 = (undefined8 *)((long)puVar27 + 0xc);
              puVar37 = (undefined8 *)((long)puVar37 + 0xc);
              *puVar27 = CONCAT44((float)((ulong)uVar8 >> 0x20) + (float)((ulong)*puVar27 >> 0x20),
                                  (float)uVar8 + (float)*puVar27);
              puVar27 = puVar26;
            } while (puVar26 !=
                     (undefined8 *)
                     (local_b8 + 0xc + ((ulong)((uVar29 - 1) - uVar18) + (ulong)uVar18) * 0xc));
          }
        }
LAB_0010eac0:
        iVar40 = (int)local_88;
        if (local_118 == 0) {
          if (local_148 == 0) goto LAB_0010eadc;
LAB_0010f07f:
          free(local_60);
        }
        else {
LAB_0010f064:
          free(local_50);
          if (local_148 != 0) goto LAB_0010f07f;
LAB_0010eadc:
        }
        if ((int)local_78 != 0) {
          free(local_70);
        }
        if (local_108 != 0) {
          free(local_e8);
        }
        if (local_fc != 0) {
          free(pvVar56);
        }
        if (iVar40 != 0) {
          free(local_80);
        }
      }
    }
  }
  if (local_c4 != 0) {
    free(local_90);
  }
LAB_0010e2e0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010f25f:
  uVar30 = (uint)uVar47;
  uVar47 = (ulong)(uVar30 + 1);
  if (uVar28 <= uVar30) {
    uVar47 = uVar59;
  }
  uVar30 = (uint)uVar47;
  pfVar3 = (float *)((long)pvVar56 + uVar47 * 0xc);
  if (uVar30 == uVar32) goto LAB_0010f320;
  fVar4 = *(float *)((long)pvVar60 + lVar52);
  fVar5 = *(float *)((long)pvVar60 + lVar21);
  fVar6 = *(float *)((long)pvVar60 + uVar47 * 0xc);
  fVar64 = *(float *)((long)pvVar56 + lVar52);
  fVar7 = *pfVar2;
  fVar63 = fVar64;
  if (NAN(fVar4) || NAN(fVar5)) {
LAB_0010f1b8:
    if (fVar6 <= fVar5) {
      fVar63 = (float)((uint)fVar64 & -(uint)(fVar4 < fVar5) | ~-(uint)(fVar4 < fVar5) & (uint)fVar7
                      );
    }
    else if (fVar4 < fVar5) {
      if (fVar6 < fVar5) goto LAB_0010f1cf;
      fVar63 = (float)((uint)fVar64 & -(uint)(fVar5 < fVar4) | ~-(uint)(fVar5 < fVar4) & (uint)fVar7
                      );
    }
    else if (fVar6 < fVar4) {
LAB_0010f1cf:
      fVar63 = fVar64 + ((fVar6 - fVar4) / (fVar5 - fVar4)) * (fVar7 - fVar64);
    }
  }
  else {
    if (fVar4 != fVar5) {
      if (fVar5 < fVar4) goto LAB_0010f1b8;
      if ((fVar6 <= fVar4) || (fVar63 = fVar7, fVar5 <= fVar6)) goto LAB_0010f1e7;
      goto LAB_0010f1cf;
    }
    if (fVar64 != fVar7) {
      fVar63 = 0.0;
    }
  }
LAB_0010f1e7:
  fVar4 = *(float *)((long)pvVar60 + lVar52 + 4);
  fVar5 = *(float *)((long)pvVar60 + lVar21 + 4);
  *pfVar3 = fVar63;
  fVar6 = *(float *)((long)pvVar60 + uVar47 * 0xc + 4);
  fVar64 = *(float *)((long)pvVar56 + lVar52 + 4);
  fVar7 = *(float *)((long)pvVar56 + lVar21 + 4);
  if (NAN(fVar4) || NAN(fVar5)) {
LAB_0010f220:
    if (fVar6 <= fVar5) {
      fVar64 = (float)((uint)fVar64 & -(uint)(fVar4 < fVar5) | ~-(uint)(fVar4 < fVar5) & (uint)fVar7
                      );
    }
    else if (fVar4 < fVar5) {
      if (fVar6 < fVar5) goto LAB_0010f237;
      fVar64 = (float)((uint)fVar64 & -(uint)(fVar5 < fVar4) | ~-(uint)(fVar5 < fVar4) & (uint)fVar7
                      );
    }
    else if (fVar6 < fVar4) {
LAB_0010f237:
      fVar64 = fVar64 + ((fVar6 - fVar4) / (fVar5 - fVar4)) * (fVar7 - fVar64);
    }
LAB_0010f24f:
    pfVar3[1] = fVar64;
  }
  else {
    if (fVar4 == fVar5) {
      if (fVar64 != fVar7) {
        fVar64 = 0.0;
      }
      goto LAB_0010f24f;
    }
    if (fVar5 < fVar4) goto LAB_0010f220;
    if (fVar6 <= fVar4) goto LAB_0010f24f;
    if (fVar6 < fVar5) goto LAB_0010f237;
    pfVar3[1] = fVar7;
  }
  iVar19 = iVar19 + -1;
  if (iVar19 == 0) goto LAB_0010edff;
  goto LAB_0010f25f;
LAB_0010f320:
  cVar10 = *(char *)(pfVar3 + 2);
LAB_0010f330:
  cVar54 = cVar10;
  uVar47 = (ulong)uVar30;
  goto LAB_0010f118;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool OT::glyf_impl::Glyph::get_points<OT::glyf_accelerator_t>(hb_font_t*, OT::glyf_accelerator_t
   const&, contour_point_vector_t&, contour_point_vector_t*, head_maxp_info_t*, unsigned int*, bool,
   bool, bool, hb_array_t<int const>, hb_map_t*, unsigned int, unsigned int*) const */

bool OT::glyf_impl::Glyph::get_points<OT::glyf_accelerator_t>
               (undefined8 *param_1,long param_2,undefined8 *param_3,contour_point_vector_t *param_4
               ,uint *param_5,long param_6,uint *param_7,char param_8,char param_9,bool param_10,
               undefined8 param_11,ulong param_12,
               hb_hashmap_t<unsigned_int,unsigned_int,true> *param_13,uint param_14,uint *param_15)

{
  float *pfVar1;
  undefined8 uVar2;
  uint *puVar3;
  ushort *puVar4;
  byte bVar5;
  char cVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  void *pvVar11;
  undefined *puVar12;
  ulong uVar13;
  float *pfVar14;
  uint *puVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  ushort uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  float *pfVar25;
  ushort *puVar26;
  ulong uVar27;
  float *pfVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  long lVar32;
  ushort *puVar33;
  float *pfVar34;
  undefined2 uVar35;
  int iVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  ushort *puVar40;
  long in_FS_OFFSET;
  bool bVar41;
  bool bVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  uint local_164;
  uint *local_160;
  contour_point_vector_t *local_158;
  undefined8 local_138;
  uint local_120;
  uint local_fc;
  float *local_f8;
  uint local_bc;
  undefined8 local_b8;
  void *local_b0;
  float *local_a8;
  uint local_a0;
  undefined4 local_9c;
  ushort *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined1 local_68;
  undefined2 local_66;
  undefined1 local_64 [16];
  undefined8 local_50;
  long local_40;
  
  local_160 = param_15;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_138 = param_11;
  local_164 = (uint)param_12;
  if (0x40 < param_14) {
LAB_00110078:
    bVar5 = 0;
    goto LAB_0010fda1;
  }
  local_bc = 0;
  if (param_15 == (uint *)0x0) {
    local_160 = &local_bc;
    uVar23 = 0;
  }
  else {
    uVar23 = *param_15;
    if (0x800 < uVar23) goto LAB_00110078;
  }
  *local_160 = uVar23 + 1;
  local_78 = 1;
  local_74 = 1;
  local_70 = 0;
  local_68 = 1;
  local_66 = 0;
  local_50 = 0;
  local_64 = (undefined1  [16])0x0;
  if (param_13 == (hb_hashmap_t<unsigned_int,unsigned_int,true> *)0x0) {
    param_13 = (hb_hashmap_t<unsigned_int,unsigned_int,true> *)&local_78;
  }
  if (param_6 != 0) {
    uVar23 = *(uint *)(param_6 + 0x24);
    if (*(uint *)(param_6 + 0x24) < param_14) {
      uVar23 = param_14;
    }
    *(uint *)(param_6 + 0x24) = uVar23;
  }
  if ((uint)param_12 == 0) {
    local_164 = *(uint *)(param_2 + 0x78);
    local_138 = *(undefined8 *)(param_2 + 0x80);
    param_12 = 0;
  }
  local_b8 = 0;
  local_b0 = (void *)0x0;
  if (*(int *)((long)param_1 + 0x1c) != 1) {
    if (*(int *)((long)param_1 + 0x1c) == 2) {
      puVar4 = (ushort *)*param_1;
      puVar40 = (ushort *)(param_1[2] + 10);
      if ((puVar4 <= puVar40) &&
         (puVar26 = (ushort *)((long)puVar4 + (ulong)*(uint *)(param_1 + 1)), puVar40 <= puVar26)) {
        uVar23 = (int)puVar26 - (int)puVar40;
        if (3 < uVar23) {
          uVar7 = *(ushort *)(param_1[2] + 10);
          uVar20 = uVar7 >> 8;
          uVar31 = -(uint)((uVar20 & 1) == 0) & 0xfffffffe;
          if ((uVar20 & 8) == 0) {
            if ((uVar20 & 0x40) == 0) {
              uVar18 = uVar31 + 8;
              if ((uVar20 & 0x80) != 0) {
                uVar18 = uVar31 + 0x10;
              }
              uVar39 = (ulong)uVar18;
            }
            else {
              uVar39 = (ulong)(uVar31 + 0xc);
            }
          }
          else {
            uVar39 = (ulong)(uVar31 + 10);
          }
          if ((uint)uVar39 <= uVar23) {
            uVar23 = 0;
            uVar31 = 0;
            uVar20 = uVar7 >> 8;
            uVar35 = _LC25;
            if ((uVar7 & 0x100) == 0) goto LAB_00111250;
LAB_0011116a:
            iVar29 = (int)(short)(puVar40[2] << 8 | puVar40[2] >> 8);
            iVar36 = (int)(short)(puVar40[3] << 8 | puVar40[3] >> 8);
            if ((uVar20 & 2) == 0) goto LAB_00111263;
LAB_00111189:
            fVar45 = (float)iVar36;
            fVar47 = (float)iVar29;
            do {
              uVar18 = uVar31 + 4;
              if ((int)uVar23 < 0) {
LAB_00110060:
                bVar5 = 0;
                goto LAB_00110063;
              }
              if (uVar23 < uVar18) {
                do {
                  uVar23 = uVar23 + 8 + (uVar23 >> 1);
                } while (uVar23 < uVar18);
                if ((0x15555555 < uVar23) ||
                   (pvVar11 = realloc(local_b0,(ulong)uVar23 * 0xc), pvVar11 == (void *)0x0))
                goto LAB_00110060;
                local_b0 = pvVar11;
                local_b8 = CONCAT44(local_b8._4_4_,uVar23);
                uVar35 = _LC25;
              }
              uVar8 = uVar31 + 1;
              if (((int)uVar31 < (int)uVar23) || (uVar13 = (ulong)uVar23, uVar8 <= uVar23)) {
LAB_001111c6:
                local_b8 = CONCAT44(uVar8,(int)local_b8);
                uVar18 = uVar31 + 5;
                pfVar1 = (float *)((long)local_b0 + (ulong)uVar31 * 0xc);
                *(undefined2 *)(pfVar1 + 2) = uVar35;
                *pfVar1 = fVar47;
                pfVar1[1] = fVar45;
                uVar31 = uVar8;
              }
              else {
                do {
                  uVar21 = (int)uVar13 + 8 + (int)(uVar13 >> 1);
                  uVar13 = (ulong)uVar21;
                } while (uVar21 < uVar8);
                if ((uVar21 < 0x15555556) &&
                   (pvVar11 = realloc(local_b0,uVar13 * 0xc), uVar35 = _LC25, pvVar11 != (void *)0x0
                   )) {
                  local_b0 = pvVar11;
                  local_b8 = (ulong)uVar21;
                  uVar23 = uVar21;
                  goto LAB_001111c6;
                }
                __hb_CrapPool = __hb_NullPool;
                uVar23 = ~uVar23;
                local_b8 = CONCAT44(local_b8._4_4_,uVar23);
                _strlen = _memcpy;
              }
              if (((((*puVar40 & 0x2000) == 0) ||
                   (puVar40 = (ushort *)((long)puVar40 + uVar39), puVar40 < puVar4)) ||
                  (puVar26 < puVar40)) || (uVar8 = (int)puVar26 - (int)puVar40, uVar8 < 4)) {
LAB_00111270:
                uVar31 = 0;
                if (-1 < (int)uVar18) {
                  uVar31 = uVar18;
                }
                if ((int)uVar23 < 0) goto LAB_00110060;
                local_158 = (contour_point_vector_t *)&local_b8;
                local_fc = 0;
                goto LAB_0010fe95;
              }
              uVar7 = *puVar40;
              uVar20 = uVar7 >> 8;
              uVar21 = -(uint)((uVar20 & 1) == 0) & 0xfffffffe;
              if ((uVar20 & 8) == 0) {
                if ((uVar20 & 0x40) == 0) {
                  uVar10 = uVar21 + 8;
                  if ((uVar20 & 0x80) != 0) {
                    uVar10 = uVar21 + 0x10;
                  }
                  uVar39 = (ulong)uVar10;
                }
                else {
                  uVar39 = (ulong)(uVar21 + 0xc);
                }
              }
              else {
                uVar39 = (ulong)(uVar21 + 10);
              }
              if (uVar8 < (uint)uVar39) goto LAB_00111270;
              uVar20 = uVar7 >> 8;
              if ((uVar7 & 0x100) != 0) goto LAB_0011116a;
LAB_00111250:
              iVar29 = (int)(char)puVar40[2];
              iVar36 = (int)*(char *)((long)puVar40 + 5);
              if ((uVar20 & 2) != 0) goto LAB_00111189;
LAB_00111263:
              fVar47 = 0.0;
              fVar45 = 0.0;
            } while( true );
          }
        }
      }
      local_158 = (contour_point_vector_t *)&local_b8;
      uVar31 = 4;
      uVar39 = 0;
      uVar23 = 0;
      local_fc = 0;
LAB_0010ff20:
      do {
        uVar18 = (int)(uVar39 >> 1) + 8 + (int)uVar39;
        uVar39 = (ulong)uVar18;
      } while (uVar18 < uVar31);
      if (uVar18 < 0x15555556) goto LAB_0010fa04;
      bVar5 = 0;
      *(uint *)local_158 = ~uVar23;
      iVar29 = (int)local_b8;
    }
    else {
      local_158 = (contour_point_vector_t *)&local_b8;
      local_fc = 0;
      uVar31 = 4;
      uVar39 = 8;
LAB_0010fa04:
      pvVar11 = realloc(*(void **)(local_158 + 8),uVar39 * 0xc);
      if (pvVar11 == (void *)0x0) {
        if (*(uint *)local_158 < (uint)uVar39) {
          bVar5 = 0;
          *(uint *)local_158 = ~*(uint *)local_158;
          iVar29 = (int)local_b8;
          goto LAB_0010fd8e;
        }
        pvVar11 = *(void **)(local_158 + 8);
      }
      else {
        *(void **)(local_158 + 8) = pvVar11;
        *(uint *)local_158 = (uint)uVar39;
      }
LAB_0010fa3f:
      uVar23 = *(uint *)(local_158 + 4);
      if (uVar23 < uVar31) {
        uVar18 = (uVar31 - uVar23) * 0xc;
        if (uVar18 != 0) {
          memset((void *)((long)pvVar11 + (ulong)uVar23 * 0xc),0,(ulong)uVar18);
          pvVar11 = *(void **)(local_158 + 8);
        }
      }
      uVar23 = uVar31 - 4;
      lVar32 = param_1[2];
      local_9c = 0;
      *(uint *)(local_158 + 4) = uVar31;
      uVar21 = (uint)(uVar23 <= uVar31) * 4;
      pfVar1 = (float *)((long)pvVar11 + (ulong)uVar23 * 0xc);
      local_a0 = uVar21;
      uVar18 = *(uint *)(param_1 + 3);
      uVar39 = (ulong)uVar18;
      local_a8 = pfVar1;
      puVar15 = (uint *)param_3[1];
      uVar8 = *puVar15;
      if (uVar18 < uVar8) {
        puVar12 = *(undefined **)(puVar15 + 6);
        if (puVar12 == (undefined *)0x0) {
          puVar12 = &_hb_NullPool;
        }
        uVar7 = *(ushort *)(*(long *)(puVar12 + 0x10) + 2 + (ulong)uVar18 * 4);
        uVar7 = uVar7 << 8 | uVar7 >> 8;
LAB_0010fb21:
        uVar20 = *(ushort *)(lVar32 + 2);
        iVar29 = (int)(short)(uVar20 << 8 | uVar20 >> 8) - (int)(short)uVar7;
        fVar45 = (float)iVar29;
      }
      else {
        if (uVar18 < puVar15[1]) {
          puVar12 = *(undefined **)(puVar15 + 6);
          if (puVar12 == (undefined *)0x0) {
            puVar12 = &_hb_NullPool;
          }
          uVar7 = *(ushort *)
                   ((ulong)uVar8 * 4 + (ulong)(uVar18 - uVar8) * 2 + *(long *)(puVar12 + 0x10));
          uVar7 = uVar7 << 8 | uVar7 >> 8;
          goto LAB_0010fb21;
        }
        iVar29 = 0;
        fVar45 = 0.0;
      }
      puVar3 = (uint *)param_3[2];
      uVar10 = *puVar3;
      if (uVar18 < uVar10) {
        puVar12 = *(undefined **)(puVar3 + 6);
        if (puVar12 == (undefined *)0x0) {
          puVar12 = &_hb_NullPool;
        }
        uVar7 = *(ushort *)(*(long *)(puVar12 + 0x10) + 2 + uVar39 * 4);
        iVar36 = (int)(short)(uVar7 << 8 | uVar7 >> 8);
      }
      else if (uVar18 < puVar3[1]) {
        puVar12 = *(undefined **)(puVar3 + 6);
        if (puVar12 == (undefined *)0x0) {
          puVar12 = &_hb_NullPool;
        }
        uVar7 = *(ushort *)
                 ((ulong)uVar10 * 4 + (ulong)(uVar18 - uVar10) * 2 + *(long *)(puVar12 + 0x10));
        iVar36 = (int)(short)(uVar7 << 8 | uVar7 >> 8);
      }
      else {
        iVar36 = 0;
      }
      uVar7 = *(ushort *)(lVar32 + 8);
      iVar36 = (short)(uVar7 << 8 | uVar7 >> 8) + iVar36;
      if (uVar18 < puVar15[1]) {
        puVar12 = *(undefined **)(puVar15 + 6);
        if (puVar12 == (undefined *)0x0) {
          puVar12 = &_hb_NullPool;
        }
        uVar13 = (ulong)(uVar8 - 1);
        if (uVar18 < uVar8 - 1) {
          uVar13 = uVar39;
        }
        uVar7 = *(ushort *)(*(long *)(puVar12 + 0x10) + uVar13 * 4);
        uVar8 = (uint)(ushort)(uVar7 << 8 | uVar7 >> 8);
      }
      else {
        uVar8 = 0;
        if (puVar15[2] == 0) {
          uVar8 = puVar15[4];
        }
      }
      if (uVar18 < puVar3[1]) {
        puVar12 = *(undefined **)(puVar3 + 6);
        if (puVar12 == (undefined *)0x0) {
          puVar12 = &_hb_NullPool;
        }
        uVar13 = (ulong)(uVar10 - 1);
        if (uVar18 < uVar10 - 1) {
          uVar13 = uVar39;
        }
        uVar7 = *(ushort *)(*(long *)(puVar12 + 0x10) + uVar13 * 4);
        iVar9 = iVar36 - (uint)(ushort)(uVar7 << 8 | uVar7 >> 8);
      }
      else {
        iVar9 = iVar36;
        if (puVar3[2] == 0) {
          iVar9 = iVar36 - puVar3[4];
        }
      }
      if (uVar31 < uVar23) {
        __hb_CrapPool = __hb_NullPool;
        _strlen = _memcpy;
        pfVar14 = (float *)&_hb_CrapPool;
        local_f8 = (float *)&_hb_CrapPool;
      }
      else {
        *pfVar1 = fVar45;
        pfVar14 = pfVar1 + 9;
        pfVar1[3] = (float)(int)(uVar8 + iVar29);
        pfVar1[7] = (float)iVar36;
        local_f8 = pfVar1;
      }
      pfVar14[1] = (float)iVar9;
      if (local_164 != 0) {
        bVar42 = false;
        if (param_10 != false) {
          bVar42 = *(int *)((long)param_1 + 0x1c) == 1;
        }
        uVar18 = *(uint *)(local_158 + 4);
        lVar32 = *(long *)(local_158 + 8);
        if (local_fc != 0) {
          uVar8 = uVar18 - local_fc;
          bVar41 = local_fc <= uVar18;
          uVar18 = 0;
          if (bVar41) {
            uVar18 = uVar8;
          }
          lVar32 = lVar32 + (ulong)local_fc * 0xc;
        }
        gvar::accelerator_t::apply_deltas_to_points
                  (*param_3,uVar39,local_138,local_164,lVar32,uVar18,bVar42);
      }
      iVar29 = (int)local_b8;
      iVar36 = *(int *)((long)param_1 + 0x1c);
      if ((param_5 == (uint *)0x0) || (param_14 != 0)) {
        if (iVar36 == 1) {
          if (param_14 == 0) goto LAB_00110311;
        }
        else {
          if (iVar36 == 2) {
LAB_001100e0:
            puVar4 = (ushort *)*param_1;
            puVar40 = (ushort *)(param_1[2] + 10);
            if ((puVar40 < puVar4) ||
               (puVar26 = (ushort *)((long)puVar4 + (ulong)*(uint *)(param_1 + 1)),
               puVar26 < puVar40)) {
LAB_00110270:
              local_120 = 0;
            }
            else {
              uVar18 = (int)puVar26 - (int)puVar40;
              if (uVar18 < 4) goto LAB_00110270;
              bVar5 = *(byte *)(param_1[2] + 0xb);
              uVar8 = -(uint)((bVar5 & 1) == 0) & 0xfffffffe;
              if ((bVar5 & 8) == 0) {
                if ((bVar5 & 0x40) == 0) {
                  uVar10 = uVar8 + 0x10;
                  if ((bVar5 & 0x80) == 0) {
                    uVar10 = uVar8 + 8;
                  }
                }
                else {
                  uVar10 = uVar8 + 0xc;
                }
              }
              else {
                uVar10 = uVar8 + 10;
              }
              local_120 = 0;
              if (uVar10 <= uVar18) {
                do {
                  lVar32 = *(long *)(param_13 + 0x28);
                  uVar18 = *(uint *)(param_13 + 0x20);
                  uVar7 = puVar40[1] << 8 | puVar40[1] >> 8;
                  uVar8 = (uint)uVar7;
                  uVar38 = uVar8 * -0x61c8864f;
                  if (lVar32 != 0) {
                    uVar39 = (ulong)(uVar38 & 0x3fffffff) % (ulong)uVar18;
                    puVar15 = (uint *)(lVar32 + uVar39 * 0xc);
                    bVar5 = (byte)puVar15[1];
                    if ((bVar5 & 2) != 0) {
                      iVar36 = 0;
                      do {
                        if (uVar8 == *puVar15) {
                          if ((bVar5 & 1) != 0) goto LAB_001101ff;
                          break;
                        }
                        iVar36 = iVar36 + 1;
                        uVar39 = (ulong)((int)uVar39 + iVar36 & *(uint *)(param_13 + 0x1c));
                        puVar15 = (uint *)(lVar32 + uVar39 * 0xc);
                        bVar5 = (byte)puVar15[1];
                      } while ((bVar5 & 2) != 0);
                    }
                  }
                  uVar37 = (uint)uVar7;
                  if (param_13[0x10] != (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0) {
                    uVar30 = *(uint *)(param_13 + 0x18);
                    if (*(uint *)(param_13 + 0x1c) <= (uVar30 >> 1) + uVar30) {
                      cVar6 = hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc(param_13,0);
                      if (cVar6 == '\0') goto LAB_0011049d;
                      lVar32 = *(long *)(param_13 + 0x28);
                      uVar18 = *(uint *)(param_13 + 0x20);
                      uVar30 = *(uint *)(param_13 + 0x18);
                    }
                    uVar19 = _minus_1;
                    iVar36 = *(int *)(param_13 + 0x14);
                    uVar39 = (ulong)(uVar38 & 0x3fffffff) % (ulong)uVar18;
                    lVar17 = uVar39 * 0xc;
                    puVar15 = (uint *)(lVar32 + lVar17);
                    bVar5 = (byte)puVar15[1];
                    if ((bVar5 & 2) == 0) {
                      *puVar15 = uVar37;
                      puVar15[2] = uVar19;
                      puVar15[1] = uVar8 * 0x78dde6c4 + 3;
                      *(uint *)(param_13 + 0x18) = uVar30 + 1;
                      *(int *)(param_13 + 0x14) = iVar36 + 1;
                    }
                    else {
                      uVar22 = 0;
                      uVar18 = 0xffffffff;
                      do {
                        if (uVar37 == *puVar15) {
                          if (uVar18 == 0xffffffff) goto LAB_00110457;
                          goto LAB_0011044c;
                        }
                        if ((uVar18 == 0xffffffff) && ((bVar5 & 1) == 0)) {
                          uVar18 = (uint)uVar39;
                        }
                        uVar22 = uVar22 + 1;
                        uVar39 = (ulong)((uint)uVar39 + uVar22 & *(uint *)(param_13 + 0x1c));
                        lVar17 = uVar39 * 0xc;
                        puVar15 = (uint *)(lVar32 + lVar17);
                        bVar5 = (byte)puVar15[1];
                      } while ((bVar5 & 2) != 0);
                      if (uVar18 == 0xffffffff) {
LAB_0011061a:
                        uVar30 = uVar30 + 1;
                      }
                      else {
LAB_0011044c:
                        lVar17 = (ulong)uVar18 * 0xc;
LAB_00110457:
                        puVar15 = (uint *)(lVar32 + lVar17);
                        if (((byte)puVar15[1] & 2) == 0) goto LAB_0011061a;
                        iVar36 = iVar36 - ((byte)puVar15[1] & 1);
                      }
                      *puVar15 = uVar37;
                      puVar15[2] = uVar19;
                      puVar15[1] = uVar8 * 0x78dde6c4 + 3;
                      *(uint *)(param_13 + 0x18) = uVar30;
                      *(int *)(param_13 + 0x14) = iVar36 + 1;
                      if ((*(ushort *)(param_13 + 0x12) < uVar22) &&
                         (*(uint *)(param_13 + 0x1c) < uVar30 << 3)) {
                        hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                                  (param_13,*(uint *)(param_13 + 0x1c) - 8);
                      }
                    }
                  }
LAB_0011049d:
                  uVar18 = *(uint *)(param_4 + 4);
                  if (param_10 == false) {
LAB_00110638:
                    glyf_accelerator_t::glyph_for_gid((uint)&local_98,SUB81(param_3,0));
                    param_12 = param_12 & 0xffffffff00000000 | (ulong)local_164;
                    bVar42 = get_points<OT::glyf_accelerator_t>
                                       (&local_98,param_2,param_3,param_4,param_5,param_6,param_7,
                                        param_8,param_9,param_10,local_138,param_12,param_13,
                                        param_14 + 1,local_160);
                    if (!bVar42) {
                      lVar32 = *(long *)(param_13 + 0x28);
                      if (lVar32 == 0) goto LAB_00110c8f;
                      uVar39 = (ulong)(uVar38 & 0x3fffffff) % (ulong)*(uint *)(param_13 + 0x20);
                      puVar15 = (uint *)(lVar32 + uVar39 * 0xc);
                      bVar5 = (byte)puVar15[1];
                      if ((bVar5 & 2) == 0) goto LAB_00110c8f;
                      iVar36 = 0;
                      goto LAB_00111533;
                    }
                    uVar30 = *(uint *)(param_4 + 4);
                    uVar8 = (uint)*puVar40;
                    pfVar14 = *(float **)(param_4 + 8);
                    if (uVar18 == 0) {
LAB_0011072c:
                      uVar39 = (ulong)uVar30;
                      if (param_9 == '\0') goto LAB_00110742;
                      goto LAB_00110731;
                    }
                    if (uVar18 <= uVar30) goto LAB_00110721;
                    pfVar14 = pfVar14 + (ulong)uVar18 * 3;
                    if (param_9 != '\0') goto LAB_00110b97;
                    uVar39 = 0;
                    uVar18 = (uint)(*puVar40 >> 8);
LAB_0011074f:
                    uVar13 = (ulong)*(uint *)(param_4 + 4);
                    if (((uVar18 & 2) == 0) && (param_10 == false)) {
                      if ((uVar18 & 1) == 0) {
                        uVar27 = (ulong)(byte)puVar40[2];
                        uVar24 = (ulong)*(byte *)((long)puVar40 + 5);
                      }
                      else {
                        uVar27 = (ulong)(ushort)(puVar40[2] << 8 | puVar40[2] >> 8);
                        uVar24 = (ulong)(ushort)(puVar40[3] << 8 | puVar40[3] >> 8);
                      }
                      if (((uint)uVar24 < (uint)uVar39) && ((uint)uVar27 < *(uint *)(param_4 + 4)))
                      {
                        uVar2 = *(undefined8 *)(*(long *)(param_4 + 8) + uVar27 * 0xc);
                        fVar45 = (float)uVar2 - (float)*(undefined8 *)(pfVar14 + uVar24 * 3);
                        fVar47 = (float)((ulong)uVar2 >> 0x20) -
                                 (float)((ulong)*(undefined8 *)(pfVar14 + uVar24 * 3) >> 0x20);
                        if (fVar45 == 0.0) {
                          if (fVar47 != 0.0) {
                            pfVar25 = pfVar14;
                            do {
                              pfVar34 = pfVar25 + 3;
                              pfVar25[1] = pfVar25[1] + fVar47;
                              pfVar25 = pfVar34;
                            } while (pfVar14 + uVar39 * 3 != pfVar34);
                          }
                        }
                        else {
                          pfVar25 = pfVar14;
                          if (fVar47 == 0.0) {
                            do {
                              pfVar34 = pfVar25 + 3;
                              *pfVar25 = *pfVar25 + fVar45;
                              pfVar25 = pfVar34;
                            } while (pfVar14 + uVar39 * 3 != pfVar34);
                          }
                          else {
                            do {
                              pfVar34 = pfVar25 + 3;
                              *(ulong *)pfVar25 =
                                   CONCAT44((float)((ulong)*(undefined8 *)pfVar25 >> 0x20) + fVar47,
                                            (float)*(undefined8 *)pfVar25 + fVar45);
                              pfVar25 = pfVar34;
                            } while (pfVar14 + uVar39 * 3 != pfVar34);
                          }
                        }
                      }
                    }
                  }
                  else {
                    uVar8 = (uint)*puVar40;
                    if (param_9 != '\0') {
                      if ((*puVar40 & 2) != 0) goto LAB_00110638;
                      pfVar14 = *(float **)(param_4 + 8);
                      uVar30 = uVar18;
                      if (uVar18 != 0) {
LAB_00110721:
                        uVar30 = uVar30 - uVar18;
                        pfVar14 = pfVar14 + (ulong)uVar18 * 3;
                        goto LAB_0011072c;
                      }
LAB_00110b97:
                      uVar39 = 0;
LAB_00110731:
                      if ((uVar8 & 2) != 0) {
                        uVar18 = (uint)uVar39;
                        uVar8 = uVar18 - 4;
                        pfVar25 = pfVar1;
                        do {
                          if (uVar8 < uVar18) {
                            pfVar34 = pfVar14 + (ulong)uVar8 * 3;
                          }
                          else {
                            __hb_CrapPool = __hb_NullPool;
                            pfVar34 = (float *)&_hb_CrapPool;
                            _strlen = _memcpy;
                          }
                          pfVar28 = pfVar25;
                          if (uVar21 <= (4 - uVar18) + uVar8) {
                            __hb_CrapPool = __hb_NullPool;
                            _strlen = _memcpy;
                            pfVar28 = (float *)&_hb_CrapPool;
                          }
                          uVar8 = uVar8 + 1;
                          pfVar25 = pfVar25 + 3;
                          *(undefined8 *)pfVar28 = *(undefined8 *)pfVar34;
                          pfVar28[2] = pfVar34[2];
                        } while (uVar8 != uVar18);
                        uVar8 = (uint)*puVar40;
                      }
LAB_00110742:
                      fVar45 = _LC3;
                      uVar7 = (ushort)uVar8;
                      uVar18 = uVar8 >> 8;
                      if ((int)uVar39 != 0) {
                        puVar33 = puVar40 + 3;
                        if ((uVar18 & 1) != 0) {
                          puVar33 = puVar40 + 4;
                        }
                        if ((uVar8 & 0x800) == 0) {
                          if ((uVar8 & 0x4000) == 0) {
                            if ((uVar18 & 0x80) == 0) {
                              fVar49 = 0.0;
                              fVar48 = 0.0;
                              fVar47 = _LC3;
                              fVar46 = _LC3;
                            }
                            else {
                              fVar48 = ((float)(int)(short)(puVar33[1] << 8 | puVar33[1] >> 8) + 0.0
                                       ) * _LC6;
                              fVar49 = ((float)(int)(short)(puVar33[2] << 8 | puVar33[2] >> 8) + 0.0
                                       ) * _LC6;
                              fVar47 = ((float)(int)(short)(puVar33[3] << 8 | puVar33[3] >> 8) + 0.0
                                       ) * _LC6;
                              fVar46 = ((float)(int)(short)(*puVar33 << 8 | *puVar33 >> 8) + 0.0) *
                                       _LC6;
                            }
                          }
                          else {
                            fVar49 = 0.0;
                            fVar48 = 0.0;
                            fVar47 = ((float)(int)(short)(puVar33[1] << 8 | puVar33[1] >> 8) + 0.0)
                                     * _LC6;
                            fVar46 = ((float)(int)(short)(*puVar33 << 8 | *puVar33 >> 8) + 0.0) *
                                     _LC6;
                          }
                        }
                        else {
                          fVar49 = 0.0;
                          fVar48 = 0.0;
                          fVar47 = ((float)(int)(short)(*puVar33 << 8 | *puVar33 >> 8) + 0.0) * _LC6
                          ;
                          fVar46 = fVar47;
                        }
                        if (local_120 < *(uint *)(local_158 + 4)) {
                          pfVar25 = (float *)(*(long *)(local_158 + 8) + (ulong)local_120 * 0xc);
                        }
                        else {
                          __hb_CrapPool = __hb_NullPool;
                          _strlen = _memcpy;
                          uVar7 = *puVar40;
                          pfVar25 = (float *)&_hb_CrapPool;
                          uVar18 = (uint)(uVar7 >> 8);
                        }
                        if ((uVar7 & 0x18) == 8) {
                          fVar43 = (float)*(undefined8 *)pfVar25;
                          fVar44 = (float)((ulong)*(undefined8 *)pfVar25 >> 0x20);
                          if (fVar43 == 0.0) {
                            if (fVar44 != 0.0) {
                              pfVar14[1] = fVar44 + pfVar14[1];
                              pfVar34 = pfVar14;
                              while (pfVar14 + uVar39 * 3 != pfVar34 + 3) {
                                pfVar34[4] = pfVar34[4] + pfVar25[1];
                                pfVar34 = pfVar34 + 3;
                              }
                            }
                          }
                          else if (fVar44 == 0.0) {
                            *pfVar14 = fVar43 + *pfVar14;
                            pfVar34 = pfVar14;
                            while (pfVar34 = pfVar34 + 3, pfVar34 != pfVar14 + uVar39 * 3) {
                              *pfVar34 = *pfVar34 + *pfVar25;
                            }
                          }
                          else {
                            *(ulong *)pfVar14 =
                                 CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)pfVar14 >> 0x20),
                                          fVar43 + (float)*(undefined8 *)pfVar14);
                            pfVar34 = pfVar14;
                            while (pfVar34 = pfVar34 + 3, pfVar34 != pfVar14 + uVar39 * 3) {
                              *(ulong *)pfVar34 =
                                   CONCAT44((float)((ulong)*(undefined8 *)pfVar25 >> 0x20) +
                                            (float)((ulong)*(undefined8 *)pfVar34 >> 0x20),
                                            (float)*(undefined8 *)pfVar25 +
                                            (float)*(undefined8 *)pfVar34);
                            }
                          }
                          if ((((fVar46 != fVar45) || (fVar48 != 0.0)) || (fVar49 != 0.0)) ||
                             (fVar47 != fVar45)) {
                            pfVar25 = pfVar14;
                            do {
                              pfVar34 = pfVar25 + 3;
                              fVar45 = (float)*(undefined8 *)pfVar25;
                              fVar43 = (float)((ulong)*(undefined8 *)pfVar25 >> 0x20);
                              *(ulong *)pfVar25 =
                                   CONCAT44(fVar43 * fVar47 + fVar45 * fVar48,
                                            fVar43 * fVar49 + fVar45 * fVar46);
                              pfVar25 = pfVar34;
                            } while (pfVar14 + uVar39 * 3 != pfVar34);
                          }
                        }
                        else {
                          if (((fVar46 != _LC3) || (fVar48 != 0.0)) ||
                             ((fVar49 != 0.0 || (fVar47 != _LC3)))) {
                            pfVar34 = pfVar14;
                            do {
                              pfVar28 = pfVar34 + 3;
                              fVar45 = (float)*(undefined8 *)pfVar34;
                              fVar43 = (float)((ulong)*(undefined8 *)pfVar34 >> 0x20);
                              *(ulong *)pfVar34 =
                                   CONCAT44(fVar43 * fVar47 + fVar45 * fVar48,
                                            fVar43 * fVar49 + fVar45 * fVar46);
                              pfVar34 = pfVar28;
                            } while (pfVar14 + uVar39 * 3 != pfVar28);
                          }
                          fVar45 = (float)*(undefined8 *)pfVar25;
                          fVar47 = (float)((ulong)*(undefined8 *)pfVar25 >> 0x20);
                          if (fVar45 == 0.0) {
                            if (fVar47 != 0.0) {
                              pfVar14[1] = fVar47 + pfVar14[1];
                              pfVar34 = pfVar14;
                              while (pfVar34 = pfVar34 + 3, pfVar14 + uVar39 * 3 != pfVar34) {
                                pfVar34[1] = pfVar34[1] + pfVar25[1];
                              }
                            }
                          }
                          else if (fVar47 == 0.0) {
                            *pfVar14 = fVar45 + *pfVar14;
                            pfVar34 = pfVar14;
                            while (pfVar34 = pfVar34 + 3, pfVar14 + uVar39 * 3 != pfVar34) {
                              *pfVar34 = *pfVar34 + *pfVar25;
                            }
                          }
                          else {
                            *(ulong *)pfVar14 =
                                 CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)pfVar14 >> 0x20),
                                          fVar45 + (float)*(undefined8 *)pfVar14);
                            pfVar34 = pfVar14;
                            while (pfVar34 = pfVar34 + 3, pfVar14 + uVar39 * 3 != pfVar34) {
                              *(ulong *)pfVar34 =
                                   CONCAT44((float)((ulong)*(undefined8 *)pfVar34 >> 0x20) +
                                            (float)((ulong)*(undefined8 *)pfVar25 >> 0x20),
                                            (float)*(undefined8 *)pfVar34 +
                                            (float)*(undefined8 *)pfVar25);
                            }
                          }
                        }
                      }
                      goto LAB_0011074f;
                    }
                    if (uVar18 != 0) {
                      pfVar14 = (float *)(*(long *)(param_4 + 8) + (ulong)uVar18 * 0xc);
                      uVar39 = 0;
                      goto LAB_00110742;
                    }
                    uVar13 = 0;
                  }
                  uVar18 = *(uint *)param_4;
                  uVar8 = (uint)uVar13;
                  if (-1 < (int)uVar18) {
                    uVar30 = uVar8 - 4;
                    if ((int)uVar30 < 0) {
                      uVar30 = 0;
                    }
                    uVar39 = (ulong)uVar18;
                    if (uVar18 < uVar30) {
                      do {
                        uVar19 = (int)uVar39 + 8 + (int)(uVar39 >> 1);
                        uVar39 = (ulong)uVar19;
                      } while (uVar19 < uVar30);
                      if (0x15555555 < uVar19) {
                        *(uint *)param_4 = ~uVar18;
                        goto LAB_00110520;
                      }
                      pvVar11 = realloc(*(void **)(param_4 + 8),uVar39 * 0xc);
                      if (pvVar11 == (void *)0x0) {
                        if (*(uint *)param_4 < uVar19) {
                          uVar8 = *(uint *)(param_4 + 4);
                          *(uint *)param_4 = ~*(uint *)param_4;
                          goto LAB_00110520;
                        }
                      }
                      else {
                        *(void **)(param_4 + 8) = pvVar11;
                        *(uint *)param_4 = uVar19;
                      }
                      uVar13 = (ulong)*(uint *)(param_4 + 4);
                    }
                    if ((uint)uVar13 < uVar30) {
                      uVar18 = (uVar30 - (uint)uVar13) * 0xc;
                      if (uVar18 != 0) {
                        memset((void *)(*(long *)(param_4 + 8) + uVar13 * 0xc),0,(ulong)uVar18);
                      }
                    }
                    *(uint *)(param_4 + 4) = uVar30;
                    uVar8 = uVar30;
                  }
LAB_00110520:
                  lVar32 = *(long *)(param_13 + 0x28);
                  if (200000 < uVar8) {
                    if (lVar32 == 0) goto LAB_00110c8f;
                    uVar39 = (ulong)(uVar38 & 0x3fffffff) % (ulong)*(uint *)(param_13 + 0x20);
                    puVar15 = (uint *)(lVar32 + uVar39 * 0xc);
                    bVar5 = (byte)puVar15[1];
                    if ((bVar5 & 2) == 0) goto LAB_00110c8f;
                    iVar36 = 0;
                    goto LAB_00110c7c;
                  }
                  local_120 = local_120 + 1;
                  if (lVar32 != 0) {
                    uVar39 = (ulong)(uVar38 & 0x3fffffff) % (ulong)*(uint *)(param_13 + 0x20);
                    puVar15 = (uint *)(lVar32 + uVar39 * 0xc);
                    bVar5 = (byte)puVar15[1];
                    if ((bVar5 & 2) != 0) {
                      iVar36 = 0;
                      do {
                        if (uVar37 == *puVar15) {
                          if ((bVar5 & 1) != 0) {
                            *(byte *)(puVar15 + 1) = (byte)puVar15[1] & 0xfe;
                            *(int *)(param_13 + 0x14) = *(int *)(param_13 + 0x14) + -1;
                          }
                          break;
                        }
                        iVar36 = iVar36 + 1;
                        uVar39 = (ulong)((int)uVar39 + iVar36 & *(uint *)(param_13 + 0x1c));
                        puVar15 = (uint *)(lVar32 + uVar39 * 0xc);
                        bVar5 = (byte)puVar15[1];
                      } while ((bVar5 & 2) != 0);
                    }
                  }
LAB_001101ff:
                  if (((((*puVar40 & 0x2000) == 0) ||
                       (puVar40 = (ushort *)((long)puVar40 + (ulong)uVar10), puVar40 < puVar4)) ||
                      (puVar26 < puVar40)) || (uVar18 = (int)puVar26 - (int)puVar40, uVar18 < 4))
                  break;
                  uVar7 = *puVar40;
                  uVar8 = -(uint)((uVar7 & 0x100) == 0) & 0xfffffffe;
                  if ((uVar7 & 0x800) == 0) {
                    if ((uVar7 & 0x4000) == 0) {
                      uVar10 = uVar8 + 0x10;
                      if ((uVar7 & 0x8000) == 0) {
                        uVar10 = uVar8 + 8;
                      }
                    }
                    else {
                      uVar10 = uVar8 + 0xc;
                    }
                  }
                  else {
                    uVar10 = uVar8 + 10;
                  }
                } while (uVar10 <= uVar18);
              }
            }
            if (param_6 != 0) {
              if (param_14 == 0) {
                if (param_7 != (uint *)0x0) {
                  uVar18 = *(uint *)(param_6 + 0x1c);
                  if (*(uint *)(param_6 + 0x1c) < *param_7) {
                    uVar18 = *param_7;
                  }
                  *(uint *)(param_6 + 0x1c) = uVar18;
                }
                uVar18 = *(uint *)(param_6 + 0x18);
                if (*(uint *)(param_6 + 0x18) < *(uint *)(param_4 + 4)) {
                  uVar18 = *(uint *)(param_4 + 4);
                }
                *(uint *)(param_6 + 0x18) = uVar18;
                uVar18 = *(uint *)(param_6 + 0x20);
                if (*(uint *)(param_6 + 0x20) < local_120) {
                  uVar18 = local_120;
                }
                *(uint *)(param_6 + 0x20) = uVar18;
                goto LAB_001102db;
              }
              contour_point_vector_t::extend(param_4,(hb_array_t *)&local_a8);
              iVar29 = (int)local_b8;
              goto LAB_0010fd80;
            }
LAB_0010ffa6:
            contour_point_vector_t::extend(param_4,(hb_array_t *)&local_a8);
            iVar29 = (int)local_b8;
          }
          else if (iVar36 == 0) goto LAB_0010ffa6;
          if (param_14 == 0) goto LAB_0010fd20;
        }
      }
      else {
        if (iVar36 == 2) {
          uVar18 = *param_5;
          if (-1 < (int)uVar18) {
            uVar8 = *(uint *)(local_158 + 4);
            if ((int)*(uint *)(local_158 + 4) < 0) {
              uVar8 = 0;
            }
            uVar10 = uVar18;
            if (uVar8 <= uVar18) {
LAB_00110e3e:
              uVar38 = param_5[1];
              uVar10 = uVar18;
              if (uVar38 < uVar8) {
LAB_00110e4b:
                uVar18 = (uVar8 - uVar38) * 0xc;
                if (uVar18 == 0) {
                  uVar10 = *param_5;
                }
                else {
                  memset((void *)(*(long *)(param_5 + 2) + (ulong)uVar38 * 0xc),0,(ulong)uVar18);
                  uVar10 = *param_5;
                }
              }
              if ((int)uVar10 < 0) {
                uVar10 = ~uVar10;
                *param_5 = uVar10;
              }
LAB_00110e8f:
              param_5[1] = 0;
              uVar18 = *(uint *)(local_158 + 4);
              uVar39 = (ulong)uVar18;
              if (uVar10 < uVar18) {
                if (0x15555555 < uVar18) goto LAB_00110366;
                pvVar11 = *(void **)(param_5 + 2);
LAB_00110ed6:
                pvVar11 = realloc(pvVar11,uVar39 * 0xc);
                if (pvVar11 != (void *)0x0) {
LAB_00110ef9:
                  *(void **)(param_5 + 2) = pvVar11;
                  *param_5 = uVar18;
                  uVar39 = (ulong)*(uint *)(local_158 + 4);
                  goto LAB_00110f0e;
                }
                uVar8 = *param_5;
                if (uVar8 < uVar18) {
                  *param_5 = ~uVar8;
                }
                else if (-1 < (int)uVar8) {
                  uVar39 = (ulong)*(uint *)(local_158 + 4);
                  goto LAB_00110f0e;
                }
LAB_0011036f:
                iVar36 = *(int *)((long)param_1 + 0x1c);
                if (iVar36 == 1) {
LAB_00111546:
                  goto LAB_00110311;
                }
                if (iVar36 == 2) goto LAB_001100e0;
                if (iVar36 == 0) goto LAB_001102db;
              }
              else {
                if (uVar18 < uVar10 >> 2) {
                  if (uVar18 < 0x15555556) {
                    pvVar11 = *(void **)(param_5 + 2);
                    if (uVar18 != 0) goto LAB_00110ed6;
                    free(pvVar11);
                    pvVar11 = (void *)0x0;
                    goto LAB_00110ef9;
                  }
LAB_00110366:
                  *param_5 = ~uVar10;
                  goto LAB_0011036f;
                }
LAB_00110f0e:
                lVar32 = *(long *)(local_158 + 8);
                param_5[1] = (uint)uVar39;
                if ((uint)uVar39 == 0) goto LAB_0011036f;
                lVar17 = *(long *)(param_5 + 2);
                lVar16 = 0;
                do {
                  *(undefined8 *)(lVar17 + lVar16) = *(undefined8 *)(lVar32 + lVar16);
                  *(undefined4 *)(lVar17 + 8 + lVar16) = *(undefined4 *)(lVar32 + 8 + lVar16);
                  lVar16 = lVar16 + 0xc;
                } while (lVar16 != uVar39 * 0xc);
                iVar36 = *(int *)((long)param_1 + 0x1c);
                if (iVar36 == 1) goto LAB_00111546;
                if (iVar36 == 2) goto LAB_001100e0;
                if (iVar36 == 0) goto LAB_0010ffa6;
              }
              iVar29 = (int)local_b8;
              goto LAB_0010fd20;
            }
            do {
              uVar10 = uVar10 + 8 + (uVar10 >> 1);
            } while (uVar10 < uVar8);
            if (uVar10 < 0x15555556) {
              pvVar11 = realloc(*(void **)(param_5 + 2),(ulong)uVar10 * 0xc);
              if (pvVar11 != (void *)0x0) {
                uVar38 = param_5[1];
                *(void **)(param_5 + 2) = pvVar11;
                *param_5 = uVar10;
                if (uVar38 < uVar8) goto LAB_00110e4b;
                goto LAB_00110e8f;
              }
              uVar18 = *param_5;
              if (uVar10 <= uVar18) goto LAB_00110e3e;
              *param_5 = ~uVar18;
            }
            else {
              *param_5 = ~uVar18;
            }
          }
          goto LAB_00110c8f;
        }
        if (iVar36 == 1) {
LAB_00110311:
          iVar29 = (int)local_b8;
          if (param_6 != 0) {
            local_fc = (*(int *)(param_4 + 4) + -4) - local_fc;
            if (local_fc < *(uint *)(param_6 + 0x10)) {
              local_fc = *(uint *)(param_6 + 0x10);
            }
            *(uint *)(param_6 + 0x10) = local_fc;
          }
        }
        else if (iVar36 == 0) {
LAB_001102db:
          contour_point_vector_t::extend(param_4,(hb_array_t *)&local_a8);
          iVar29 = (int)local_b8;
        }
LAB_0010fd20:
        if (param_8 != '\0') {
          if (uVar31 < uVar23) {
            __hb_CrapPool = __hb_NullPool;
            _strlen = _memcpy;
          }
          fVar45 = *local_f8;
          if (fVar45 != 0.0) {
            pfVar14 = *(float **)(param_4 + 8);
            pfVar1 = pfVar14 + (ulong)*(uint *)(param_4 + 4) * 3;
            for (; pfVar1 != pfVar14; pfVar14 = pfVar14 + 3) {
              *pfVar14 = *pfVar14 - fVar45;
            }
          }
        }
      }
LAB_0010fd80:
      bVar5 = (byte)~(byte)((uint)*(undefined4 *)param_4 >> 0x18) >> 7;
    }
    goto LAB_0010fd8e;
  }
  local_fc = *(uint *)(param_4 + 4);
  local_98 = (ushort *)param_1[2];
  if (param_14 == 0) {
    if (param_6 != 0) {
      uVar23 = (uint)(short)(*local_98 << 8 | *local_98 >> 8);
      if (uVar23 < *(uint *)(param_6 + 0x14)) {
        uVar23 = *(uint *)(param_6 + 0x14);
      }
      *(uint *)(param_6 + 0x14) = uVar23;
    }
  }
  else if (param_7 != (uint *)0x0) {
    *param_7 = *param_7 + (int)(short)(*local_98 << 8 | *local_98 >> 8);
  }
  local_88 = param_1[1];
  uStack_90 = *param_1;
  bVar5 = SimpleGlyph::get_contour_points((SimpleGlyph *)&local_98,param_4,param_10);
  if (bVar5 != 0) {
    uVar23 = *(uint *)param_4;
    uVar31 = *(int *)(param_4 + 4) + 4U;
    if ((int)(*(int *)(param_4 + 4) + 4U) < 0) {
      uVar31 = 0;
    }
    local_158 = param_4;
    if (-1 < (int)uVar23) {
LAB_0010fe95:
      uVar39 = (ulong)uVar23;
      if (uVar23 < uVar31) goto LAB_0010ff20;
      pvVar11 = *(void **)(local_158 + 8);
      goto LAB_0010fa3f;
    }
    bVar5 = 0;
  }
  goto LAB_0010fd97;
  while( true ) {
    iVar36 = iVar36 + 1;
    uVar39 = (ulong)((int)uVar39 + iVar36 & *(uint *)(param_13 + 0x1c));
    puVar15 = (uint *)(lVar32 + uVar39 * 0xc);
    bVar5 = (byte)puVar15[1];
    if ((bVar5 & 2) == 0) break;
LAB_00111533:
    if (uVar37 == *puVar15) goto joined_r0x0011153b;
  }
  goto LAB_00110c8f;
joined_r0x0011153b:
  if ((bVar5 & 1) != 0) {
    *(byte *)(puVar15 + 1) = (byte)puVar15[1] & 0xfe;
    *(int *)(param_13 + 0x14) = *(int *)(param_13 + 0x14) + -1;
  }
  goto LAB_00110c8f;
  while( true ) {
    iVar36 = iVar36 + 1;
    uVar39 = (ulong)((int)uVar39 + iVar36 & *(uint *)(param_13 + 0x1c));
    puVar15 = (uint *)(lVar32 + uVar39 * 0xc);
    bVar5 = (byte)puVar15[1];
    if ((bVar5 & 2) == 0) break;
LAB_00110c7c:
    if (uVar37 == *puVar15) goto joined_r0x0011153b;
  }
LAB_00110c8f:
  bVar5 = 0;
LAB_0010fd8e:
  if (iVar29 != 0) {
LAB_00110063:
    free(local_b0);
  }
LAB_0010fd97:
  hb_hashmap_t<unsigned_int,unsigned_int,true>::fini
            ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)&local_78);
LAB_0010fda1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (bool)bVar5;
}



/* bool OT::glyf_accelerator_t::get_points<OT::glyf_accelerator_t::points_aggregator_t>(hb_font_t*,
   unsigned int, OT::glyf_accelerator_t::points_aggregator_t, hb_array_t<int const>) const */

bool OT::glyf_accelerator_t::get_points<OT::glyf_accelerator_t::points_aggregator_t>
               (long param_1,long param_2,uint param_3,undefined8 param_4,ulong param_5,
               undefined8 param_6,hb_font_t *param_7,hb_glyph_extents_t *param_8,undefined8 *param_9
               ,undefined8 param_10,undefined8 param_11,float param_12)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  float *pfVar5;
  uint uVar6;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  undefined8 local_78;
  float *local_70;
  undefined1 local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = param_5;
  if ((int)param_5 == 0) {
    param_5 = (ulong)*(uint *)(param_2 + 0x78);
    param_4 = *(undefined8 *)(param_2 + 0x80);
    uVar4 = 0;
  }
  bVar3 = false;
  if (param_3 < *(uint *)(param_1 + 0x1c)) {
    local_78 = 0;
    local_70 = (float *)0x0;
    glyph_for_gid((uint)local_68,SUB81(param_1,0));
    bVar3 = glyf_impl::Glyph::get_points<OT::glyf_accelerator_t>
                      (local_68,param_2,param_1,&local_78,0,0,0,1,1,
                       param_8 == (hb_glyph_extents_t *)0x0,param_4,
                       uVar4 & 0xffffffff00000000 | param_5 & 0xffffffff,0,0,0);
    if (bVar3) {
      uVar2 = local_78._4_4_;
      uVar6 = local_78._4_4_ - 4;
      if (param_8 != (hb_glyph_extents_t *)0x0) {
        uVar1 = uVar6;
        if (local_78._4_4_ <= uVar6) {
          uVar1 = local_78._4_4_;
        }
        for (pfVar5 = local_70; local_70 + (ulong)uVar1 * 3 != pfVar5; pfVar5 = pfVar5 + 3) {
          fVar7 = *pfVar5;
          fVar8 = pfVar5[1];
          param_10._4_4_ =
               (float)((uint)param_10._4_4_ & -(uint)(param_10._4_4_ <= fVar7) |
                      ~-(uint)(param_10._4_4_ <= fVar7) & (uint)fVar7);
          param_11._0_4_ =
               (float)((uint)(float)param_11 & -(uint)((float)param_11 <= fVar8) |
                      ~-(uint)((float)param_11 <= fVar8) & (uint)fVar8);
          param_11._4_4_ =
               (float)((uint)param_11._4_4_ & -(uint)(fVar7 <= param_11._4_4_) |
                      ~-(uint)(fVar7 <= param_11._4_4_) & (uint)fVar7);
          param_12 = (float)((uint)param_12 & -(uint)(fVar8 <= param_12) |
                            ~-(uint)(fVar8 <= param_12) & (uint)fVar8);
        }
        if ((param_11._4_4_ <= param_10._4_4_) || (param_12 <= (float)param_11)) {
          *(undefined1 (*) [16])param_8 = (undefined1  [16])0x0;
        }
        else {
          param_10._4_4_ = param_10._4_4_ + _LC9;
          if ((float)((uint)param_10._4_4_ & _LC4) < _LC1) {
            param_10._4_4_ =
                 (float)((uint)((float)(int)param_10._4_4_ -
                               (float)(-(uint)(param_10._4_4_ < (float)(int)param_10._4_4_) & _LC3))
                        | ~_LC4 & (uint)param_10._4_4_);
          }
          fVar7 = (param_11._4_4_ - (float)(int)param_10._4_4_) + _LC9;
          if ((float)((uint)fVar7 & _LC4) < _LC1) {
            fVar7 = (float)((uint)((float)(int)fVar7 -
                                  (float)(-(uint)(fVar7 < (float)(int)fVar7) & _LC3)) |
                           ~_LC4 & (uint)fVar7);
          }
          param_12 = param_12 + _LC9;
          if ((float)((uint)param_12 & _LC4) < _LC1) {
            param_12 = (float)((uint)((float)(int)param_12 -
                                     (float)(-(uint)(param_12 < (float)(int)param_12) & _LC3)) |
                              ~_LC4 & (uint)param_12);
          }
          fVar8 = ((float)param_11 - (float)(int)param_12) + _LC9;
          if ((float)((uint)fVar8 & _LC4) < _LC1) {
            fVar8 = (float)((uint)((float)(int)fVar8 -
                                  (float)(-(uint)(fVar8 < (float)(int)fVar8) & _LC3)) |
                           ~_LC4 & (uint)fVar8);
          }
          *(int *)param_8 = (int)param_10._4_4_;
          *(int *)(param_8 + 4) = (int)param_12;
          *(int *)(param_8 + 8) = (int)fVar7;
          *(int *)(param_8 + 0xc) = (int)fVar8;
          if ((char)param_10 != '\0') {
            hb_font_t::scale_glyph_extents(param_7,param_8);
          }
        }
      }
      if (param_9 != (undefined8 *)0x0) {
        do {
          uVar4 = (ulong)uVar6;
          uVar6 = uVar6 + 1;
          *param_9 = *(undefined8 *)(local_70 + uVar4 * 3);
          *(float *)(param_9 + 1) = (local_70 + uVar4 * 3)[2];
          param_9 = (undefined8 *)((long)param_9 + 0xc);
        } while (uVar6 != uVar2);
      }
    }
    if ((int)local_78 != 0) {
      free(local_70);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::glyf_accelerator_t::get_extents(hb_font_t*, unsigned int, hb_glyph_extents_t*) const */

bool __thiscall
OT::glyf_accelerator_t::get_extents
          (glyf_accelerator_t *this,hb_font_t *param_1,uint param_2,hb_glyph_extents_t *param_3)

{
  uint uVar1;
  uint *puVar2;
  bool bVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  ushort uVar8;
  int iVar9;
  undefined *puVar10;
  long in_FS_OFFSET;
  hb_font_t *local_58;
  hb_glyph_extents_t *phStack_50;
  long local_48;
  uint uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < *(uint *)(this + 0x1c)) {
    if (*(int *)(param_1 + 0x78) == 0) {
      glyph_for_gid((uint)&local_58,SUB81(this,0));
      if (iStack_3c != 0) {
        puVar2 = *(uint **)(this + 8);
        uVar1 = *puVar2;
        uVar5 = *(ushort *)(local_48 + 2) << 8 | *(ushort *)(local_48 + 2) >> 8;
        uVar6 = *(ushort *)(local_48 + 6) << 8 | *(ushort *)(local_48 + 6) >> 8;
        uVar4 = uVar6;
        if ((short)uVar5 <= (short)uVar6) {
          uVar4 = uVar5;
        }
        iVar7 = (int)(short)uVar4;
        if (uStack_40 < uVar1) {
          puVar10 = *(undefined **)(puVar2 + 6);
          if (puVar10 == (undefined *)0x0) {
            puVar10 = &_hb_NullPool;
          }
          uVar4 = *(ushort *)(*(long *)(puVar10 + 0x10) + 2 + (ulong)uStack_40 * 4);
          iVar9 = (int)(short)(uVar4 << 8 | uVar4 >> 8);
        }
        else {
          iVar9 = iVar7;
          if (uStack_40 < puVar2[1]) {
            puVar10 = *(undefined **)(puVar2 + 6);
            if (puVar10 == (undefined *)0x0) {
              puVar10 = &_hb_NullPool;
            }
            uVar4 = *(ushort *)
                     ((ulong)uVar1 * 4 + (ulong)(uStack_40 - uVar1) * 2 + *(long *)(puVar10 + 0x10))
            ;
            iVar9 = (int)(short)(uVar4 << 8 | uVar4 >> 8);
          }
        }
        *(int *)param_3 = iVar9;
        uVar4 = *(ushort *)(local_48 + 4) << 8 | *(ushort *)(local_48 + 4) >> 8;
        uVar8 = *(ushort *)(local_48 + 8) << 8 | *(ushort *)(local_48 + 8) >> 8;
        if ((short)uVar4 < (short)uVar8) {
          iVar9 = (int)(short)uVar8;
          if ((short)uVar5 < (short)uVar6) {
            iVar7 = (short)uVar6 - iVar7;
          }
          else {
            iVar7 = (short)uVar5 - iVar7;
          }
        }
        else {
          iVar9 = (int)(short)uVar4;
          if ((short)uVar6 <= (short)uVar5) {
            uVar6 = uVar5;
          }
          iVar7 = (short)uVar6 - iVar7;
          if ((short)uVar8 < (short)uVar4) {
            uVar4 = uVar8;
          }
        }
        *(int *)(param_3 + 4) = iVar9;
        *(int *)(param_3 + 8) = iVar7;
        *(int *)(param_3 + 0xc) = (short)uVar4 - iVar9;
        hb_font_t::scale_glyph_extents(param_1,param_3);
      }
      bVar3 = true;
    }
    else {
      iStack_3c = __LC27;
      uStack_38 = _UNK_00121054;
      uStack_34 = _UNK_00121058;
      uStack_30 = _UNK_0012105c;
      local_48 = 0;
      uStack_40 = CONCAT31(uStack_40._1_3_,1);
      local_58 = param_1;
      phStack_50 = param_3;
      bVar3 = get_points<OT::glyf_accelerator_t::points_aggregator_t>();
    }
  }
  else {
    bVar3 = false;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool OT::glyf_accelerator_t::get_points<OT::glyf_impl::path_builder_t>(hb_font_t*, unsigned int,
   OT::glyf_impl::path_builder_t, hb_array_t<int const>) const */

bool OT::glyf_accelerator_t::get_points<OT::glyf_impl::path_builder_t>
               (long param_1,long param_2,uint param_3,undefined8 param_4,ulong param_5,
               undefined8 param_6,long param_7,float *param_8,undefined8 param_9,undefined8 param_10
               ,undefined8 param_11,char param_12,undefined8 param_13,undefined8 param_14,
               undefined8 param_15,undefined4 param_16)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  byte bVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  hb_draw_state_t *phVar14;
  hb_draw_state_t *phVar15;
  void *pvVar16;
  hb_draw_funcs_t *phVar17;
  ulong uVar18;
  undefined8 uVar19;
  long in_FS_OFFSET;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_b8;
  undefined8 local_78;
  undefined8 *local_70;
  undefined1 local_68 [40];
  long local_40;
  
  uVar18 = param_5 & 0xffffffff;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)param_5 == 0) {
    uVar18 = (ulong)*(uint *)(param_2 + 0x78);
    param_4 = *(undefined8 *)(param_2 + 0x80);
    param_5 = 0;
  }
  bVar7 = false;
  if (param_3 < *(uint *)(param_1 + 0x1c)) {
    local_78 = 0;
    local_70 = (undefined8 *)0x0;
    glyph_for_gid((uint)local_68,SUB81(param_1,0));
    bVar7 = glyf_impl::Glyph::get_points<OT::glyf_accelerator_t>
                      (local_68,param_2,param_1,&local_78,0,0,0,1,1,0,param_4,
                       param_5 & 0xffffffff00000000 | uVar18,0,0,0);
    if (bVar7) {
      uVar5 = local_78._4_4_ - 4;
      if (local_78._4_4_ < local_78._4_4_ - 4) {
        uVar5 = local_78._4_4_;
      }
      puVar1 = (undefined8 *)((long)local_70 + (ulong)uVar5 * 0xc);
      puVar13 = local_70;
joined_r0x00111d21:
      if (puVar1 != puVar13) {
        do {
          bVar8 = *(byte *)(puVar13 + 1) & 1;
          fVar23 = (float)*(undefined8 *)(param_7 + 0x4c) * (float)*puVar13;
          fVar24 = (float)((ulong)*(undefined8 *)(param_7 + 0x4c) >> 0x20) *
                   (float)((ulong)*puVar13 >> 0x20);
          if ((char)param_9 == '\0') {
            if (bVar8 != 0) {
              param_9._0_1_ = '\x01';
              lVar10 = *(long *)(param_8 + 2);
              uVar19 = *(undefined8 *)(param_8 + 4);
              param_9._4_4_ = fVar23;
              param_10._0_4_ = fVar24;
              if (*(char *)(param_8 + 1) == '\0') {
                fVar20 = *param_8;
                if (param_8[6] != 0.0) {
                  if ((param_8[7] != param_8[9]) || (param_8[8] != param_8[10])) {
                    lVar11 = *(long *)(lVar10 + 0x38);
                    if (lVar11 != 0) {
                      lVar11 = *(long *)(lVar11 + 8);
                    }
                    (**(code **)(lVar10 + 0x18))(lVar10,uVar19,param_8 + 6,lVar11);
                  }
                  lVar11 = *(long *)(lVar10 + 0x38);
                  if (lVar11 != 0) {
                    lVar11 = *(long *)(lVar11 + 0x20);
                  }
                  (**(code **)(lVar10 + 0x30))(lVar10,uVar19,param_8 + 6,lVar11);
                  param_8[6] = 0.0;
                  param_8[7] = 0.0;
                  param_8[8] = 0.0;
                }
                *(ulong *)(param_8 + 9) = CONCAT44(fVar24,fVar23 + fVar20 * fVar24);
              }
              else {
                if (param_8[6] != 0.0) {
                  if ((param_8[7] != param_8[9]) || (param_8[8] != param_8[10])) {
                    lVar11 = *(long *)(lVar10 + 0x38);
                    if (lVar11 != 0) {
                      lVar11 = *(long *)(lVar11 + 8);
                    }
                    (**(code **)(lVar10 + 0x18))(lVar10,uVar19,param_8 + 6,lVar11);
                  }
                  lVar11 = *(long *)(lVar10 + 0x38);
                  if (lVar11 != 0) {
                    lVar11 = *(long *)(lVar11 + 0x20);
                  }
                  (**(code **)(lVar10 + 0x30))(lVar10,uVar19,param_8 + 6,lVar11);
                  param_8[6] = 0.0;
                  param_8[7] = 0.0;
                  param_8[8] = 0.0;
                }
                param_8[9] = fVar23;
                param_8[10] = fVar24;
              }
LAB_00111e08:
              cVar6 = (char)param_9;
              if (*(char *)((long)puVar13 + 9) != '\0') goto LAB_00111ece;
              goto LAB_00111e12;
            }
            if (param_10._4_1_ == '\0') {
              param_10._4_4_ = CONCAT31(param_10._5_3_,1);
              param_11._0_4_ = fVar23;
              param_11._4_4_ = fVar24;
              goto LAB_00111e08;
            }
            cVar6 = '\x01';
            param_13._4_4_ = CONCAT31(param_13._5_3_,1);
            pvVar16 = *(void **)(param_8 + 2);
            phVar15 = *(hb_draw_state_t **)(param_8 + 4);
            param_9._4_4_ = ((float)param_11 + fVar23) * _LC9;
            param_10._0_4_ = (param_11._4_4_ + fVar24) * _UNK_00121094;
            if (*(char *)(param_8 + 1) == '\0') {
              fVar20 = param_9._4_4_ + *param_8 * (float)param_10;
              param_14._0_4_ = fVar23;
              param_14._4_4_ = fVar24;
              if (param_8[6] != 0.0) {
                if ((param_8[7] != param_8[9]) || (param_8[8] != param_8[10])) {
                  lVar10 = *(long *)((long)pvVar16 + 0x38);
                  if (lVar10 != 0) {
                    lVar10 = *(long *)(lVar10 + 8);
                  }
                  (**(code **)((long)pvVar16 + 0x18))(pvVar16,phVar15,param_8 + 6,lVar10);
                }
                hb_draw_funcs_t::emit_close_path(pvVar16,phVar15);
                param_8[6] = 0.0;
                param_8[7] = 0.0;
                param_8[8] = 0.0;
              }
            }
            else {
              fVar20 = param_9._4_4_;
              param_14._0_4_ = fVar23;
              param_14._4_4_ = fVar24;
              if (param_8[6] != 0.0) {
                if ((param_8[7] != param_8[9]) || (param_8[8] != param_8[10])) {
                  lVar10 = *(long *)((long)pvVar16 + 0x38);
                  if (lVar10 != 0) {
                    lVar10 = *(long *)(lVar10 + 8);
                  }
                  (**(code **)((long)pvVar16 + 0x18))(pvVar16,phVar15,param_8 + 6,lVar10);
                }
                lVar10 = *(long *)((long)pvVar16 + 0x38);
                if (lVar10 != 0) {
                  lVar10 = *(long *)(lVar10 + 0x20);
                }
                (**(code **)((long)pvVar16 + 0x30))(pvVar16,phVar15,param_8 + 6,lVar10);
                param_8[6] = 0.0;
                param_8[7] = 0.0;
                param_8[8] = 0.0;
              }
            }
            param_9._0_1_ = *(char *)((long)puVar13 + 9);
            *(ulong *)(param_8 + 9) = CONCAT44((float)param_10,fVar20);
            if ((char)param_9 == '\0') goto LAB_00111e12;
LAB_001121e0:
            cVar2 = param_12;
            phVar17 = *(hb_draw_funcs_t **)(param_8 + 2);
            pvVar16 = *(void **)(param_8 + 4);
            puVar12 = (undefined1 *)((long)&param_10 + 4);
            if (param_12 != '\0') {
              puVar12 = &param_12;
            }
            fVar23 = param_8[6];
            fVar20 = (*(float *)(puVar12 + 8) + param_14._4_4_) * _LC9;
            fVar24 = (*(float *)(puVar12 + 4) + (float)param_14) * _LC9;
            if ((char)param_15 == '\0') {
              if (*(char *)(param_8 + 1) == '\0') {
                fVar24 = fVar24 + *param_8 * fVar20;
                if (fVar23 == 0.0) {
                  hb_draw_funcs_t::start_path(phVar17,pvVar16,(hb_draw_state_t *)(param_8 + 6));
                }
                (**(code **)(phVar17 + 0x20))(phVar17,pvVar16,(hb_draw_state_t *)(param_8 + 6));
              }
              else {
                if (fVar23 == 0.0) {
                  plVar9 = *(long **)(phVar17 + 0x38);
                  if (plVar9 != (long *)0x0) {
                    plVar9 = (long *)*plVar9;
                  }
                  (**(code **)(phVar17 + 0x10))(phVar17,pvVar16,param_8 + 6,plVar9);
                  param_8[6] = 1.4013e-45;
                  *(undefined8 *)(param_8 + 7) = *(undefined8 *)(param_8 + 9);
                }
                (**(code **)(phVar17 + 0x20))(phVar17,pvVar16,param_8 + 6);
              }
            }
            else if (*(char *)(param_8 + 1) == '\0') {
              fVar24 = fVar24 + *param_8 * fVar20;
              if (fVar23 == 0.0) {
                hb_draw_funcs_t::start_path(phVar17,pvVar16,(hb_draw_state_t *)(param_8 + 6));
              }
              (**(code **)(phVar17 + 0x28))(phVar17,pvVar16,(hb_draw_state_t *)(param_8 + 6));
            }
            else {
              if (fVar23 == 0.0) {
                plVar9 = *(long **)(phVar17 + 0x38);
                if (plVar9 != (long *)0x0) {
                  plVar9 = (long *)*plVar9;
                }
                (**(code **)(phVar17 + 0x10))(phVar17,pvVar16,param_8 + 6,plVar9);
                param_8[6] = 1.4013e-45;
                *(undefined8 *)(param_8 + 7) = *(undefined8 *)(param_8 + 9);
              }
              (**(code **)(phVar17 + 0x28))(phVar17,pvVar16,param_8 + 6);
            }
            param_13._4_4_ = param_13._4_4_ & 0xffffff00;
            param_14._0_4_ = 0.0;
            param_14._4_4_ = 0.0;
            *(ulong *)(param_8 + 9) = CONCAT44(fVar20,fVar24);
            fVar23 = (float)param_11;
            fVar24 = param_11._4_4_;
joined_r0x001123bf:
            param_11._0_4_ = fVar23;
            param_11._4_4_ = fVar24;
            if ((char)param_9 == '\0') {
              phVar14 = (hb_draw_state_t *)(param_8 + 6);
              uVar19 = CONCAT44(fVar24,fVar23);
              phVar17 = *(hb_draw_funcs_t **)(param_8 + 2);
              phVar15 = *(hb_draw_state_t **)(param_8 + 4);
              if (*(char *)(param_8 + 1) == '\0') {
                fVar20 = *param_8 * fVar24;
                if (param_8[6] != 0.0) {
                  if ((param_8[7] != param_8[9]) || (param_8[8] != param_8[10])) {
                    (**(code **)(phVar17 + 0x18))(phVar17,phVar15,phVar14);
                  }
                  hb_draw_funcs_t::emit_close_path(phVar17,phVar15);
                  cVar2 = *(char *)(param_8 + 1);
                  param_8[7] = 0.0;
                  param_8[8] = 0.0;
                  phVar17 = *(hb_draw_funcs_t **)(param_8 + 2);
                  phVar15 = *(hb_draw_state_t **)(param_8 + 4);
                  param_8[6] = 0.0;
                  *(ulong *)(param_8 + 9) = CONCAT44(fVar24,fVar20 + fVar23);
                  goto joined_r0x001138f8;
                }
                *(ulong *)(param_8 + 9) = CONCAT44(fVar24,fVar20 + fVar23);
LAB_00112973:
                hb_draw_funcs_t::start_path(phVar17,phVar15,phVar14);
                lVar10 = *(long *)(phVar17 + 0x38);
                if (lVar10 != 0) {
                  lVar10 = *(long *)(lVar10 + 0x10);
                }
                (**(code **)(phVar17 + 0x20))(phVar17,phVar15,phVar14,lVar10);
                *(ulong *)(param_8 + 9) = CONCAT44(fVar24,fVar23 + fVar20);
              }
              else {
                if (param_8[6] == 0.0) {
                  *(undefined8 *)(param_8 + 9) = uVar19;
                }
                else {
                  if ((param_8[7] != param_8[9]) || (param_8[8] != param_8[10])) {
                    lVar10 = *(long *)(phVar17 + 0x38);
                    if (lVar10 != 0) {
                      lVar10 = *(long *)(lVar10 + 8);
                    }
                    (**(code **)(phVar17 + 0x18))(phVar17,phVar15,phVar14,lVar10);
                  }
                  lVar10 = *(long *)(phVar17 + 0x38);
                  if (lVar10 != 0) {
                    lVar10 = *(long *)(lVar10 + 0x20);
                  }
                  (**(code **)(phVar17 + 0x30))(phVar17,phVar15,phVar14,lVar10);
                  cVar2 = *(char *)(param_8 + 1);
                  param_8[6] = 0.0;
                  phVar17 = *(hb_draw_funcs_t **)(param_8 + 2);
                  param_8[7] = 0.0;
                  param_8[8] = 0.0;
                  phVar15 = *(hb_draw_state_t **)(param_8 + 4);
                  *(undefined8 *)(param_8 + 9) = uVar19;
joined_r0x001138f8:
                  if (cVar2 == '\0') {
                    fVar20 = *param_8 * fVar24;
                    goto LAB_00112973;
                  }
                }
                plVar9 = *(long **)(phVar17 + 0x38);
                if (plVar9 != (long *)0x0) {
                  plVar9 = (long *)*plVar9;
                }
                (**(code **)(phVar17 + 0x10))(phVar17,phVar15,phVar14,plVar9);
                lVar10 = *(long *)(phVar17 + 0x38);
                param_8[6] = 1.4013e-45;
                pcVar4 = *(code **)(phVar17 + 0x20);
                *(undefined8 *)(param_8 + 7) = *(undefined8 *)(param_8 + 9);
                if (lVar10 != 0) {
                  lVar10 = *(long *)(lVar10 + 0x10);
                }
                (*pcVar4)(phVar17,phVar15,phVar14,lVar10);
                *(undefined8 *)(param_8 + 9) = uVar19;
              }
            }
            else {
              uVar19 = CONCAT44((float)param_10,param_9._4_4_);
              phVar17 = *(hb_draw_funcs_t **)(param_8 + 2);
              pvVar16 = *(void **)(param_8 + 4);
              phVar15 = (hb_draw_state_t *)(param_8 + 6);
              iVar3 = *(int *)phVar15;
              if (cVar2 == '\0') {
                if (*(char *)(param_8 + 1) == '\0') {
                  uVar19 = CONCAT44((float)param_10,param_9._4_4_ + *param_8 * (float)param_10);
                  if (iVar3 == 0) {
                    hb_draw_funcs_t::start_path(phVar17,pvVar16,phVar15);
                  }
LAB_00113038:
                  lVar10 = *(long *)(phVar17 + 0x38);
                  if (lVar10 != 0) {
                    lVar10 = *(long *)(lVar10 + 0x10);
                  }
                  (**(code **)(phVar17 + 0x20))(phVar17,pvVar16,param_8 + 6,lVar10);
                  *(undefined8 *)(param_8 + 9) = uVar19;
                }
                else {
                  if (iVar3 == 0) {
                    plVar9 = *(long **)(phVar17 + 0x38);
                    if (plVar9 != (long *)0x0) {
                      plVar9 = (long *)*plVar9;
                    }
                    (**(code **)(phVar17 + 0x10))(phVar17,pvVar16,phVar15,plVar9);
                    param_8[6] = 1.4013e-45;
                    *(undefined8 *)(param_8 + 7) = *(undefined8 *)(param_8 + 9);
                  }
LAB_0011286e:
                  lVar10 = *(long *)(phVar17 + 0x38);
                  if (lVar10 != 0) {
                    lVar10 = *(long *)(lVar10 + 0x10);
                  }
                  (**(code **)(phVar17 + 0x20))(phVar17,pvVar16,param_8 + 6,lVar10);
                  *(undefined8 *)(param_8 + 9) = uVar19;
                }
              }
              else {
                if (*(char *)(param_8 + 1) == '\0') {
                  uVar19 = CONCAT44((float)param_10,*param_8 * (float)param_10 + param_9._4_4_);
                  if (iVar3 == 0) {
                    hb_draw_funcs_t::start_path(phVar17,pvVar16,phVar15);
                  }
                  goto LAB_001130f5;
                }
                if (iVar3 == 0) {
                  plVar9 = *(long **)(phVar17 + 0x38);
                  if (plVar9 != (long *)0x0) {
                    plVar9 = (long *)*plVar9;
                  }
                  (**(code **)(phVar17 + 0x10))(phVar17,pvVar16,phVar15,plVar9);
                  param_8[6] = 1.4013e-45;
                  *(undefined8 *)(param_8 + 7) = *(undefined8 *)(param_8 + 9);
                }
LAB_0011232c:
                lVar10 = *(long *)(phVar17 + 0x38);
                if (lVar10 != 0) {
                  lVar10 = *(long *)(lVar10 + 0x18);
                }
                (**(code **)(phVar17 + 0x28))(phVar17,pvVar16,param_8 + 6,lVar10);
                *(undefined8 *)(param_8 + 9) = uVar19;
              }
            }
          }
          else {
            if (param_13._4_1_ != '\0') {
              lVar10 = *(long *)(param_8 + 2);
              cVar2 = *(char *)(param_8 + 1);
              uVar19 = *(undefined8 *)(param_8 + 4);
              fVar20 = param_8[6];
              plVar9 = *(long **)(lVar10 + 0x38);
              if (bVar8 == 0) {
                fVar22 = (fVar24 + param_14._4_4_) * _LC9;
                fVar21 = (fVar23 + (float)param_14) * _LC9;
                if (cVar2 == '\0') {
                  fVar21 = fVar21 + *param_8 * fVar22;
                  if (fVar20 == 0.0) {
                    if (plVar9 != (long *)0x0) {
                      plVar9 = (long *)*plVar9;
                    }
                    (**(code **)(lVar10 + 0x10))(lVar10,uVar19,param_8 + 6,plVar9);
                    param_8[6] = 1.4013e-45;
                    plVar9 = *(long **)(lVar10 + 0x38);
                    *(undefined8 *)(param_8 + 7) = *(undefined8 *)(param_8 + 9);
                  }
                  if (plVar9 != (long *)0x0) {
                    plVar9 = *(long **)((long)plVar9 + 0x10);
                  }
                  (**(code **)(lVar10 + 0x20))(lVar10,uVar19,param_8 + 6,plVar9);
                }
                else {
                  if (fVar20 == 0.0) {
                    if (plVar9 != (long *)0x0) {
                      plVar9 = (long *)*plVar9;
                    }
                    (**(code **)(lVar10 + 0x10))(lVar10,uVar19,param_8 + 6,plVar9);
                    param_8[6] = 1.4013e-45;
                    plVar9 = *(long **)(lVar10 + 0x38);
                    *(undefined8 *)(param_8 + 7) = *(undefined8 *)(param_8 + 9);
                  }
                  if (plVar9 != (long *)0x0) {
                    plVar9 = *(long **)((long)plVar9 + 0x10);
                  }
                  (**(code **)(lVar10 + 0x20))(lVar10,uVar19,param_8 + 6,plVar9);
                }
                param_13._4_4_ = CONCAT31(param_13._5_3_,1);
                *(ulong *)(param_8 + 9) = CONCAT44(fVar22,fVar21);
                param_14._0_4_ = fVar23;
                param_14._4_4_ = fVar24;
              }
              else {
                if ((char)param_15 == '\0') {
                  if (cVar2 == '\0') {
                    fVar21 = *param_8;
                    if (fVar20 == 0.0) {
                      if (plVar9 != (long *)0x0) {
                        plVar9 = (long *)*plVar9;
                      }
                      (**(code **)(lVar10 + 0x10))(lVar10,uVar19,param_8 + 6,plVar9);
                      param_8[6] = 1.4013e-45;
                      plVar9 = *(long **)(lVar10 + 0x38);
                      *(undefined8 *)(param_8 + 7) = *(undefined8 *)(param_8 + 9);
                    }
                    if (plVar9 != (long *)0x0) {
                      plVar9 = (long *)plVar9[2];
                    }
                    (**(code **)(lVar10 + 0x20))(lVar10,uVar19,param_8 + 6,plVar9);
                    *(ulong *)(param_8 + 9) = CONCAT44(fVar24,fVar21 * fVar24 + fVar23);
                  }
                  else {
                    if (fVar20 == 0.0) {
                      if (plVar9 != (long *)0x0) {
                        plVar9 = (long *)*plVar9;
                      }
                      (**(code **)(lVar10 + 0x10))(lVar10,uVar19,param_8 + 6,plVar9);
                      param_8[6] = 1.4013e-45;
                      plVar9 = *(long **)(lVar10 + 0x38);
                      *(undefined8 *)(param_8 + 7) = *(undefined8 *)(param_8 + 9);
                    }
                    if (plVar9 != (long *)0x0) {
                      plVar9 = *(long **)((long)plVar9 + 0x10);
                    }
                    local_b8 = CONCAT44(fVar24,fVar23);
                    (**(code **)(lVar10 + 0x20))(lVar10,uVar19,param_8 + 6,plVar9);
                    *(undefined8 *)(param_8 + 9) = local_b8;
                  }
                }
                else {
                  if (cVar2 == '\0') {
                    fVar23 = fVar23 + *param_8 * fVar24;
                    if (fVar20 == 0.0) {
                      if (plVar9 != (long *)0x0) {
                        plVar9 = (long *)*plVar9;
                      }
                      (**(code **)(lVar10 + 0x10))(lVar10,uVar19,param_8 + 6,plVar9);
                      param_8[6] = 1.4013e-45;
                      plVar9 = *(long **)(lVar10 + 0x38);
                      *(undefined8 *)(param_8 + 7) = *(undefined8 *)(param_8 + 9);
                    }
                    if (plVar9 != (long *)0x0) {
                      plVar9 = (long *)plVar9[3];
                    }
                    (**(code **)(lVar10 + 0x28))(lVar10,uVar19,param_8 + 6,plVar9);
                  }
                  else {
                    if (fVar20 == 0.0) {
                      if (plVar9 != (long *)0x0) {
                        plVar9 = (long *)*plVar9;
                      }
                      (**(code **)(lVar10 + 0x10))(lVar10,uVar19,param_8 + 6,plVar9);
                      param_8[6] = 1.4013e-45;
                      plVar9 = *(long **)(lVar10 + 0x38);
                      *(undefined8 *)(param_8 + 7) = *(undefined8 *)(param_8 + 9);
                    }
                    if (plVar9 != (long *)0x0) {
                      plVar9 = *(long **)((long)plVar9 + 0x18);
                    }
                    (**(code **)(lVar10 + 0x28))(lVar10,uVar19,param_8 + 6,plVar9);
                  }
                  param_15._0_4_ = (uint)param_15 & 0xffffff00;
                  param_15._4_4_ = 0;
                  param_16 = 0;
                  *(ulong *)(param_8 + 9) = CONCAT44(fVar24,fVar23);
                }
                param_13._4_4_ = param_13._4_4_ & 0xffffff00;
                param_14._0_4_ = 0.0;
                param_14._4_4_ = 0.0;
              }
              goto LAB_00111e08;
            }
            if (bVar8 == 0) {
              param_13._4_4_ = CONCAT31(param_13._5_3_,1);
              param_14._0_4_ = fVar23;
              param_14._4_4_ = fVar24;
              goto LAB_00111e08;
            }
            lVar10 = *(long *)(param_8 + 2);
            uVar19 = *(undefined8 *)(param_8 + 4);
            plVar9 = *(long **)(lVar10 + 0x38);
            if (*(char *)(param_8 + 1) == '\0') {
              fVar20 = *param_8;
              if (param_8[6] == 0.0) {
                if (plVar9 != (long *)0x0) {
                  plVar9 = (long *)*plVar9;
                }
                (**(code **)(lVar10 + 0x10))(lVar10,uVar19,param_8 + 6,plVar9);
                param_8[6] = 1.4013e-45;
                *(undefined8 *)(param_8 + 7) = *(undefined8 *)(param_8 + 9);
                plVar9 = *(long **)(lVar10 + 0x38);
              }
              if (plVar9 != (long *)0x0) {
                plVar9 = *(long **)((long)plVar9 + 8);
              }
              (**(code **)(lVar10 + 0x18))(lVar10,uVar19,param_8 + 6,plVar9);
              *(ulong *)(param_8 + 9) = CONCAT44(fVar24,fVar20 * fVar24 + fVar23);
              goto LAB_00111e08;
            }
            if (param_8[6] == 0.0) {
              if (plVar9 != (long *)0x0) {
                plVar9 = (long *)*plVar9;
              }
              (**(code **)(lVar10 + 0x10))(lVar10,uVar19,param_8 + 6,plVar9);
              param_8[6] = 1.4013e-45;
              *(undefined8 *)(param_8 + 7) = *(undefined8 *)(param_8 + 9);
              plVar9 = *(long **)(lVar10 + 0x38);
            }
            if (plVar9 != (long *)0x0) {
              plVar9 = *(long **)((long)plVar9 + 8);
            }
            local_b8 = CONCAT44(fVar24,fVar23);
            (**(code **)(lVar10 + 0x18))(lVar10,uVar19,param_8 + 6,plVar9);
            cVar2 = *(char *)((long)puVar13 + 9);
            *(undefined8 *)(param_8 + 9) = local_b8;
            cVar6 = (char)param_9;
            if (cVar2 == '\0') goto LAB_00111e12;
LAB_00111ece:
            phVar17 = *(hb_draw_funcs_t **)(param_8 + 2);
            pvVar16 = *(void **)(param_8 + 4);
            fVar23 = param_8[6];
            if (param_10._4_1_ != '\0') {
              fVar23 = (float)param_11;
              fVar24 = param_11._4_4_;
              cVar2 = param_12;
              if (param_13._4_1_ != '\0') goto LAB_001121e0;
              goto joined_r0x001123bf;
            }
            if (param_13._4_1_ == '\0') {
              if ((char)param_9 != '\0') {
                plVar9 = *(long **)(phVar17 + 0x38);
                if (*(char *)(param_8 + 1) == '\0') {
                  fVar24 = *param_8;
                  if (fVar23 == 0.0) {
                    if (plVar9 != (long *)0x0) {
                      plVar9 = (long *)*plVar9;
                    }
                    (**(code **)(phVar17 + 0x10))(phVar17,pvVar16,param_8 + 6,plVar9);
                    param_8[6] = 1.4013e-45;
                    *(undefined8 *)(param_8 + 7) = *(undefined8 *)(param_8 + 9);
                    plVar9 = *(long **)(phVar17 + 0x38);
                  }
                  if (plVar9 != (long *)0x0) {
                    plVar9 = *(long **)((long)plVar9 + 8);
                  }
                  (**(code **)(phVar17 + 0x18))(phVar17,pvVar16,param_8 + 6,plVar9);
                  *(ulong *)(param_8 + 9) =
                       CONCAT44((float)param_10,fVar24 * (float)param_10 + param_9._4_4_);
                }
                else {
                  if (fVar23 == 0.0) {
                    if (plVar9 != (long *)0x0) {
                      plVar9 = (long *)*plVar9;
                    }
                    (**(code **)(phVar17 + 0x10))(phVar17,pvVar16,param_8 + 6,plVar9);
                    param_8[6] = 1.4013e-45;
                    *(undefined8 *)(param_8 + 7) = *(undefined8 *)(param_8 + 9);
                    plVar9 = *(long **)(phVar17 + 0x38);
                  }
                  if (plVar9 != (long *)0x0) {
                    plVar9 = *(long **)((long)plVar9 + 8);
                  }
                  (**(code **)(phVar17 + 0x18))(phVar17,pvVar16,param_8 + 6,plVar9);
                  *(ulong *)(param_8 + 9) = CONCAT44((float)param_10,param_9._4_4_);
                }
              }
            }
            else {
              phVar15 = (hb_draw_state_t *)(param_8 + 6);
              if ((char)param_9 == '\0') goto LAB_00111f20;
              uVar19 = CONCAT44((float)param_10,param_9._4_4_);
              if ((char)param_15 == '\0') {
                if (*(char *)(param_8 + 1) == '\0') {
                  uVar19 = CONCAT44((float)param_10,param_9._4_4_ + (float)param_10 * *param_8);
                  if (fVar23 == 0.0) {
                    hb_draw_funcs_t::start_path(phVar17,pvVar16,phVar15);
                  }
                  goto LAB_00113038;
                }
                if (fVar23 == 0.0) {
                  plVar9 = *(long **)(phVar17 + 0x38);
                  if (plVar9 != (long *)0x0) {
                    plVar9 = (long *)*plVar9;
                  }
                  (**(code **)(phVar17 + 0x10))(phVar17,pvVar16,phVar15,plVar9);
                  param_8[6] = 1.4013e-45;
                  *(undefined8 *)(param_8 + 7) = *(undefined8 *)(param_8 + 9);
                }
                goto LAB_0011286e;
              }
              if (*(char *)(param_8 + 1) != '\0') {
                if (fVar23 == 0.0) {
                  plVar9 = *(long **)(phVar17 + 0x38);
                  if (plVar9 != (long *)0x0) {
                    plVar9 = (long *)*plVar9;
                  }
                  (**(code **)(phVar17 + 0x10))(phVar17,pvVar16,phVar15,plVar9);
                  param_8[6] = 1.4013e-45;
                  *(undefined8 *)(param_8 + 7) = *(undefined8 *)(param_8 + 9);
                }
                goto LAB_0011232c;
              }
              uVar19 = CONCAT44((float)param_10,(float)param_10 * *param_8 + param_9._4_4_);
              if (fVar23 == 0.0) {
                hb_draw_funcs_t::start_path(phVar17,pvVar16,phVar15);
              }
LAB_001130f5:
              lVar10 = *(long *)(phVar17 + 0x38);
              if (lVar10 != 0) {
                lVar10 = *(long *)(lVar10 + 0x18);
              }
              (**(code **)(phVar17 + 0x28))(phVar17,pvVar16,param_8 + 6,lVar10);
              *(undefined8 *)(param_8 + 9) = uVar19;
            }
          }
LAB_00111f20:
          lVar10 = *(long *)(param_8 + 2);
          uVar19 = *(undefined8 *)(param_8 + 4);
          param_15._0_4_ = (uint)param_15 & 0xffffff00;
          param_15._4_4_ = 0;
          param_16 = 0;
          param_14._4_4_ = 0.0;
          param_11._4_4_ = 0.0;
          param_10._0_4_ = 0.0;
          param_13._4_4_ = (uint)param_15;
          param_14._0_4_ = 0.0;
          param_10._4_4_ = (uint)param_15;
          param_11._0_4_ = 0.0;
          param_9._0_1_ = '\0';
          param_9._4_4_ = 0.0;
          if (param_8[6] != 0.0) {
            if ((param_8[7] != param_8[9]) || (param_8[8] != param_8[10])) {
              lVar11 = *(long *)(lVar10 + 0x38);
              if (lVar11 != 0) {
                lVar11 = *(long *)(lVar11 + 8);
              }
              (**(code **)(lVar10 + 0x18))(lVar10,uVar19,param_8 + 6,lVar11);
            }
            lVar11 = *(long *)(lVar10 + 0x38);
            if (lVar11 != 0) {
              lVar11 = *(long *)(lVar11 + 0x20);
            }
            (**(code **)(lVar10 + 0x30))(lVar10,uVar19,param_8 + 6,lVar11);
          }
          puVar13 = (undefined8 *)((long)puVar13 + 0xc);
          param_8[6] = 0.0;
          *(undefined1 (*) [16])(param_8 + 7) = (undefined1  [16])0x0;
          if (puVar1 == puVar13) break;
        } while( true );
      }
    }
    if ((int)local_78 != 0) {
      free(local_70);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00111e12:
  puVar13 = (undefined8 *)((long)puVar13 + 0xc);
  param_9._0_1_ = cVar6;
  goto joined_r0x00111d21;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CFF::dict_interpreter_t<CFF::cff2_top_dict_opset_t, CFF::cff2_top_dict_values_t,
   CFF::interp_env_t<CFF::number_t> >::interpret(CFF::cff2_top_dict_values_t&) */

undefined8 __thiscall
CFF::
dict_interpreter_t<CFF::cff2_top_dict_opset_t,CFF::cff2_top_dict_values_t,CFF::interp_env_t<CFF::number_t>>
::interpret(dict_interpreter_t<CFF::cff2_top_dict_opset_t,CFF::cff2_top_dict_values_t,CFF::interp_env_t<CFF::number_t>>
            *this,cff2_top_dict_values_t *param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  interp_env_t *piVar5;
  uint uVar6;
  interp_env_t *piVar7;
  uint uVar8;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_1 + 8) = 0;
  piVar7 = *(interp_env_t **)this;
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 (*) [16])(param_1 + 0x18) = (undefined1  [16])0x0;
  uVar3 = *(uint *)(piVar7 + 0xc);
  uVar6 = *(uint *)(piVar7 + 8);
  do {
    uVar1 = uVar3 + 1;
    if (uVar6 < uVar1) {
      uVar4 = 1;
      goto LAB_001139f2;
    }
    bVar2 = *(byte *)(*(long *)piVar7 + (ulong)uVar3);
    uVar8 = (uint)bVar2;
    *(uint *)(piVar7 + 0xc) = uVar1;
    if (bVar2 == 0xc) {
      if (uVar6 < uVar3 + 2) {
        uVar8 = 0xffff;
        goto LAB_00113b06;
      }
      bVar2 = *(byte *)(*(long *)piVar7 + (ulong)uVar1);
      *(uint *)(piVar7 + 0xc) = uVar3 + 2;
      uVar8 = bVar2 + 0x100;
      if (bVar2 == 7) {
        local_48 = 0;
        uVar8 = 0x107;
        local_3c = 0;
        local_40 = 0xffff;
        parsed_values_t<CFF::op_str_t>::add_op
                  ((parsed_values_t<CFF::op_str_t> *)param_1,0x107,(byte_str_ref_t *)piVar7,
                   (op_str_t *)&local_48);
        *(undefined4 *)(piVar7 + 0x14) = 0;
        uVar6 = *(uint *)(piVar7 + 8);
      }
      else {
        if (uVar8 != 0x125) {
          if (uVar8 == 0x124) {
            if (*(uint *)(piVar7 + 0x14) == 0) {
              __hb_CrapPool = __hb_NullPool;
              piVar7[0x10] = (interp_env_t)0x1;
              piVar5 = (interp_env_t *)&_hb_CrapPool;
            }
            else {
              piVar5 = piVar7 + (ulong)*(uint *)(piVar7 + 0x14) * 8 + 0x10;
            }
            *(int *)(param_1 + 0x1c) = (int)*(double *)piVar5;
            goto LAB_00113aa9;
          }
          goto LAB_00113b06;
        }
        if (*(uint *)(piVar7 + 0x14) == 0) {
          __hb_CrapPool = __hb_NullPool;
          piVar7[0x10] = (interp_env_t)0x1;
          piVar5 = (interp_env_t *)&_hb_CrapPool;
        }
        else {
          piVar5 = piVar7 + (ulong)*(uint *)(piVar7 + 0x14) * 8 + 0x10;
        }
        uVar8 = 0x125;
        *(int *)(param_1 + 0x24) = (int)*(double *)piVar5;
        *(undefined4 *)(piVar7 + 0x14) = 0;
      }
LAB_00113a6e:
      if (*(uint *)(piVar7 + 0xc) <= uVar6) {
LAB_001139aa:
        if (piVar7[0x10] == (interp_env_t)0x0) {
          local_48 = 0;
          local_3c = 0;
          local_40 = 0xffff;
          parsed_values_t<CFF::op_str_t>::add_op
                    ((parsed_values_t<CFF::op_str_t> *)param_1,uVar8,(byte_str_ref_t *)piVar7,
                     (op_str_t *)&local_48);
        }
      }
    }
    else {
      if (bVar2 == 0x18) {
        if (*(uint *)(piVar7 + 0x14) == 0) {
          __hb_CrapPool = __hb_NullPool;
          piVar7[0x10] = (interp_env_t)0x1;
          piVar5 = (interp_env_t *)&_hb_CrapPool;
        }
        else {
          piVar5 = piVar7 + (ulong)*(uint *)(piVar7 + 0x14) * 8 + 0x10;
        }
        *(int *)(param_1 + 0x20) = (int)*(double *)piVar5;
        *(undefined4 *)(piVar7 + 0x14) = 0;
        goto LAB_001139aa;
      }
      if (uVar8 == 0x11) {
        if (*(uint *)(piVar7 + 0x14) == 0) {
          __hb_CrapPool = __hb_NullPool;
          piVar7[0x10] = (interp_env_t)0x1;
          piVar5 = (interp_env_t *)&_hb_CrapPool;
        }
        else {
          piVar5 = piVar7 + (ulong)*(uint *)(piVar7 + 0x14) * 8 + 0x10;
        }
        *(int *)(param_1 + 0x18) = (int)*(double *)piVar5;
LAB_00113aa9:
        *(undefined4 *)(piVar7 + 0x14) = 0;
        goto LAB_00113a6e;
      }
LAB_00113b06:
      dict_opset_t::process_op(uVar8,piVar7);
      if (*(int *)(piVar7 + 0x14) == 0) {
        uVar6 = *(uint *)(piVar7 + 8);
        goto LAB_00113a6e;
      }
    }
    piVar7 = *(interp_env_t **)this;
    uVar3 = *(uint *)(piVar7 + 0xc);
    uVar6 = *(uint *)(piVar7 + 8);
  } while ((uVar3 <= uVar6) && (piVar7[0x10] == (interp_env_t)0x0));
  uVar4 = 0;
LAB_001139f2:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* hb_vector_t<CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>, false>::resize(int, bool,
   bool) */

undefined8 __thiscall
hb_vector_t<CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>,false>::resize
          (hb_vector_t<CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>,false> *this,
          int param_1,bool param_2,bool param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 *__ptr;
  uint uVar3;
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  uVar4 = 0;
  uVar2 = *(uint *)this;
  if (-1 < param_1) {
    uVar4 = (ulong)(uint)param_1;
  }
  if ((int)uVar2 < 0) {
    return 0;
  }
  uVar3 = (uint)uVar4;
  if (param_3) {
    uVar9 = *(uint *)(this + 4);
    uVar11 = (ulong)uVar9;
    if (uVar9 <= uVar3) {
      uVar11 = uVar4;
    }
    uVar10 = (uint)uVar11;
    if (uVar2 < uVar10) {
      if ((0x5555555 < uVar10) ||
         (pauVar7 = (undefined1 (*) [16])malloc(uVar11 * 0x30), pauVar7 == (undefined1 (*) [16])0x0)
         ) goto LAB_00113c42;
LAB_00113d4c:
      uVar2 = *(uint *)(this + 4);
      __ptr = *(undefined4 **)(this + 8);
      if (uVar2 != 0) {
        pauVar5 = pauVar7;
        puVar8 = __ptr;
        do {
          *pauVar5 = (undefined1  [16])0x0;
          pauVar6 = pauVar5 + 3;
          pauVar5[1] = (undefined1  [16])0x0;
          pauVar5[2] = (undefined1  [16])0x0;
          *(undefined4 *)*pauVar5 = *puVar8;
          *(undefined4 *)(*pauVar5 + 8) = puVar8[2];
          *(undefined4 *)(*pauVar5 + 0xc) = puVar8[3];
          *(undefined8 *)pauVar5[1] = *(undefined8 *)(puVar8 + 4);
          *(undefined4 *)(pauVar5[1] + 8) = puVar8[6];
          *(undefined8 *)pauVar5[2] = *(undefined8 *)(puVar8 + 8);
          *(undefined4 *)(pauVar5[2] + 8) = puVar8[10];
          pauVar5 = pauVar6;
          puVar8 = puVar8 + 0xc;
        } while (pauVar6 != pauVar7 + (ulong)uVar2 * 3);
      }
      free(__ptr);
    }
    else {
      if (uVar2 >> 2 <= uVar10) goto LAB_00113bf9;
      if (0x5555555 < uVar10) goto LAB_00113c42;
      if (uVar10 != 0) goto LAB_00113df4;
      pauVar7 = (undefined1 (*) [16])0x0;
      free(*(void **)(this + 8));
    }
    *(undefined1 (**) [16])(this + 8) = pauVar7;
    *(uint *)this = uVar10;
  }
  else if (uVar2 < uVar3) {
    uVar11 = (ulong)uVar2;
    do {
      uVar9 = (int)uVar11 + 8 + (int)(uVar11 >> 1);
      uVar11 = (ulong)uVar9;
    } while (uVar9 < uVar3);
    if (0x5555555 < uVar9) goto LAB_00113c42;
LAB_00113df4:
    uVar10 = (uint)uVar11;
    pauVar7 = (undefined1 (*) [16])malloc(uVar11 * 0x30);
    if (pauVar7 != (undefined1 (*) [16])0x0) goto LAB_00113d4c;
    if (uVar2 < uVar10) {
LAB_00113c42:
      *(uint *)this = ~uVar2;
      return 0;
    }
  }
  uVar9 = *(uint *)(this + 4);
LAB_00113bf9:
  if (uVar9 < uVar3) {
    if (param_2) {
      memset((void *)((ulong)uVar9 * 0x30 + *(long *)(this + 8)),0,
             ((ulong)((uVar3 - 1) - uVar9) * 3 + 3) * 0x10);
    }
  }
  else if ((uVar3 < uVar9) && (param_2)) {
    lVar1 = *(long *)(this + 8) + -0x30 + (ulong)uVar9 * 0x30;
    lVar12 = lVar1;
    do {
      lVar13 = lVar12 + -0x30;
      if (*(int *)(lVar12 + 8) != 0) {
        free(*(void **)(lVar12 + 0x10));
      }
      lVar12 = lVar13;
    } while (lVar1 + (ulong)(uVar9 - uVar3) * -0x30 != lVar13);
  }
  *(uint *)(this + 4) = uVar3;
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_vector_t<CFF::cff2_font_dict_values_t, false>::push() */

undefined * __thiscall
hb_vector_t<CFF::cff2_font_dict_values_t,false>::push
          (hb_vector_t<CFF::cff2_font_dict_values_t,false> *this)

{
  uint uVar1;
  undefined4 *__ptr;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  
  uVar6 = *(uint *)this;
  uVar1 = *(uint *)(this + 4);
  uVar7 = (ulong)uVar1;
  if ((int)uVar6 < 0) {
    _hb_blob_create_sub_blob = _hb_ot_color_palette_get_colors;
    __hb_CrapPool = __hb_NullPool;
    _strlen = _memcpy;
    _malloc = _realloc;
    _hb_face_get_upem = _hb_font_get_face;
    return &_hb_CrapPool;
  }
  uVar11 = uVar1 + 1;
  if ((int)uVar11 < 0) {
    uVar11 = 0;
  }
  uVar12 = uVar6;
  if (uVar6 < uVar11) {
    do {
      uVar12 = uVar12 + 8 + (uVar12 >> 1);
    } while (uVar12 < uVar11);
    if ((0x6666666 < uVar12) ||
       (pauVar3 = (undefined1 (*) [16])malloc((ulong)uVar12 * 0x28),
       pauVar3 == (undefined1 (*) [16])0x0)) {
      *(uint *)this = ~uVar6;
      __hb_CrapPool = __hb_NullPool;
      _strlen = _memcpy;
      _malloc = _realloc;
      _hb_face_get_upem = _hb_font_get_face;
      _hb_blob_create_sub_blob = _hb_ot_color_palette_get_colors;
      return &_hb_CrapPool;
    }
    __ptr = *(undefined4 **)(this + 8);
    if (uVar1 != 0) {
      pauVar4 = pauVar3;
      puVar5 = __ptr;
      do {
        *pauVar4 = (undefined1  [16])0x0;
        pauVar2 = pauVar4 + 2;
        pauVar4[1] = (undefined1  [16])0x0;
        *(undefined8 *)pauVar4[2] = 0;
        *(undefined4 *)*pauVar4 = *puVar5;
        *(undefined4 *)(*pauVar4 + 8) = puVar5[2];
        *(undefined4 *)(*pauVar4 + 0xc) = puVar5[3];
        *(undefined8 *)pauVar4[1] = *(undefined8 *)(puVar5 + 4);
        *(undefined8 *)(pauVar4[1] + 8) = *(undefined8 *)(puVar5 + 6);
        *(undefined4 *)pauVar4[2] = puVar5[8];
        pauVar4 = (undefined1 (*) [16])(*pauVar2 + 8);
        puVar5 = puVar5 + 10;
      } while ((undefined1 (*) [16])(*pauVar2 + 8) !=
               (undefined1 (*) [16])((long)pauVar3 + uVar7 * 0x28));
    }
    free(__ptr);
    uVar1 = *(uint *)(this + 4);
    uVar7 = (ulong)uVar1;
    *(undefined1 (**) [16])(this + 8) = pauVar3;
    *(uint *)this = uVar12;
  }
  else {
    pauVar3 = *(undefined1 (**) [16])(this + 8);
  }
  uVar6 = (uint)uVar7;
  if (uVar1 < uVar11) {
    memset((void *)((long)pauVar3 + uVar7 * 0x28),0,((ulong)((uVar11 - 1) - uVar6) * 5 + 5) * 8);
  }
  else if (uVar11 < uVar6) {
    lVar9 = (long)pauVar3 + uVar7 * 0x28 + -0x28;
    lVar8 = lVar9 + (ulong)(uVar6 - uVar11) * -0x28;
    do {
      while (lVar10 = lVar9 + -0x28, *(int *)(lVar9 + 8) != 0) {
        free(*(void **)(lVar9 + 0x10));
        lVar9 = lVar10;
        if (lVar8 == lVar10) goto LAB_00113fa1;
      }
      lVar9 = lVar10;
    } while (lVar8 != lVar10);
LAB_00113fa1:
    pauVar3 = *(undefined1 (**) [16])(this + 8);
  }
  *(uint *)(this + 4) = uVar11;
  return (undefined *)((long)pauVar3 + (ulong)(uVar11 - 1) * 0x28);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* OT::cff2::accelerator_templ_t<CFF::cff2_private_dict_opset_t,
   CFF::cff2_private_dict_values_base_t<CFF::dict_val_t> >::accelerator_templ_t(hb_face_t*) */

void __thiscall
OT::cff2::
accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
::accelerator_templ_t
          (accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
           *this,hb_face_t *param_1)

{
  ItemVariationStore *this_00;
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  uint *puVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  parsed_values_t<CFF::op_str_t> *this_01;
  undefined *puVar14;
  byte *pbVar15;
  ushort uVar16;
  uint uVar17;
  uint uVar18;
  double *pdVar19;
  ushort uVar20;
  uint uVar21;
  void *pvVar22;
  undefined *puVar23;
  uint uVar24;
  CFFIndex<OT::IntType<unsigned_int,4u>> *pCVar25;
  ushort *puVar26;
  char *pcVar27;
  parsed_values_t<CFF::dict_val_t> *this_02;
  long in_FS_OFFSET;
  byte bVar28;
  long local_20d0;
  long local_20b8;
  byte_str_ref_t *local_2098;
  undefined4 local_2090;
  undefined1 local_208c;
  long local_2088;
  undefined8 local_2080;
  undefined8 local_2078;
  double local_2070 [513];
  undefined *local_1068;
  undefined8 local_1060;
  undefined8 local_1058;
  double local_1050 [513];
  int local_48;
  char local_44;
  long local_40;
  
  bVar28 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)this = 0;
  *(undefined8 *)(this + 0x34) = 0x1000000000000;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  this[0x28] = (accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
                )0x0;
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined2 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
  if (param_1 == (hb_face_t *)0x0) goto LAB_00114373;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
  uVar7 = hb_face_get_glyph_count(param_1);
  this[0x3c] = (accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
                )0x1;
  *(undefined4 *)(this + 0x38) = uVar7;
  lVar11 = hb_face_reference_table(param_1,0x43464632);
  lVar12 = hb_blob_reference(lVar11);
  this[0x28] = (accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
                )0x0;
  *(long *)(this + 0x30) = lVar12;
  while( true ) {
    uVar24 = *(uint *)(lVar12 + 0x18);
    pcVar27 = *(char **)(lVar12 + 0x10);
    *(char **)(this + 8) = pcVar27;
    uVar18 = uVar24 << 6;
    if (uVar24 >> 0x1a == 0) {
      if (0x3fffffff < uVar18) {
        uVar18 = 0x3fffffff;
      }
      if (uVar18 < 0x4000) {
        uVar18 = 0x4000;
      }
    }
    else {
      uVar18 = 0x3fffffff;
    }
    *(char **)(this + 0x10) = pcVar27 + uVar24;
    *(uint *)(this + 0x18) = uVar24;
    *(uint *)(this + 0x1c) = uVar18;
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 0x24) = 0;
    if (pcVar27 == (char *)0x0) {
      hb_blob_destroy();
      *(undefined8 *)(this + 0x30) = 0;
      *(undefined4 *)(this + 0x18) = 0;
      *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
      goto LAB_00114201;
    }
    if (uVar24 < 5) goto LAB_001143d6;
    if (*pcVar27 == '\x02') break;
    if ((*(int *)(this + 0x2c) == 0) ||
       (this[0x28] !=
        (accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
         )0x0)) goto LAB_00114fd0;
    lVar12 = hb_blob_get_data_writable(lVar11,0);
    uVar24 = *(uint *)(lVar11 + 0x18);
    *(long *)(this + 8) = lVar12;
    *(ulong *)(this + 0x10) = (ulong)uVar24 + lVar12;
    if (lVar12 == 0) goto LAB_00114fd0;
    this[0x28] = (accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
                  )0x1;
    lVar12 = *(long *)(this + 0x30);
  }
  if (*(int *)(this + 0x2c) == 0) {
    hb_blob_destroy(*(undefined8 *)(this + 0x30));
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
LAB_001141f9:
    hb_blob_make_immutable(lVar11);
    goto LAB_00114201;
  }
  *(undefined4 *)(this + 0x2c) = 0;
  if (pcVar27 + (5 - *(long *)(this + 8)) <= (char *)(ulong)*(uint *)(this + 0x18)) {
    cVar6 = *pcVar27;
    lVar12 = *(long *)(this + 0x30);
    if (*(int *)(this + 0x2c) != 0) goto LAB_001143d6;
    hb_blob_destroy(lVar12);
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
    if (cVar6 != '\x02') goto LAB_001143f7;
    goto LAB_001141f9;
  }
LAB_00114fd0:
  lVar12 = *(long *)(this + 0x30);
LAB_001143d6:
  hb_blob_destroy(lVar12);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
LAB_001143f7:
  hb_blob_destroy(lVar11);
  lVar11 = hb_blob_get_empty();
LAB_00114201:
  *(long *)(this + 0x40) = lVar11;
  lVar13 = hb_blob_reference(lVar11);
  this[0x28] = (accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
                )0x0;
  uVar24 = *(uint *)(lVar13 + 0x18);
  lVar11 = *(long *)(lVar13 + 0x10);
  *(long *)(this + 0x30) = lVar13;
  *(long *)(this + 8) = lVar11;
  uVar18 = uVar24 << 6;
  lVar12 = lVar11 + (ulong)uVar24;
  if (uVar24 >> 0x1a == 0) {
    if (0x3fffffff < uVar18) {
      uVar18 = 0x3fffffff;
    }
    if (uVar18 < 0x4000) {
      uVar18 = 0x4000;
    }
  }
  else {
    uVar18 = 0x3fffffff;
  }
  *(uint *)(this + 0x18) = uVar24;
  *(long *)(this + 0x10) = lVar12;
  uVar21 = *(uint *)(*(long *)(this + 0x40) + 0x18);
  *(uint *)(this + 0x1c) = uVar18;
  *(undefined4 *)(this + 0x2c) = 0;
  puVar4 = *(undefined **)(*(long *)(this + 0x40) + 0x10);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x24) = 0;
  if ((4 < uVar21) && (puVar4 != &_hb_NullPool)) {
    puVar23 = puVar4 + (byte)puVar4[2];
    if ((ulong)((long)puVar23 - lVar11) <= (ulong)uVar24) {
      uVar16 = *(ushort *)(puVar4 + 3) << 8 | *(ushort *)(puVar4 + 3) >> 8;
      if (((uint)uVar16 <= (uint)((int)lVar12 - (int)puVar23)) &&
         (iVar8 = uVar18 - uVar16, *(int *)(this + 0x1c) = iVar8, 0 < iVar8)) {
        *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
        local_1058 = 0;
        pdVar19 = local_1050;
        for (lVar12 = 0x201; lVar12 != 0; lVar12 = lVar12 + -1) {
          *pdVar19 = 0.0;
          pdVar19 = pdVar19 + (ulong)bVar28 * -2 + 1;
        }
        *(undefined4 *)(this + 0x48) = 0;
        *(undefined8 *)(this + 0x50) = 0;
        *(undefined8 *)(this + 0x58) = 0;
        local_1060 = (ulong)uVar16;
        local_2098 = (byte_str_ref_t *)&local_1068;
        local_1068 = puVar23;
        cVar6 = CFF::
                dict_interpreter_t<CFF::cff2_top_dict_opset_t,CFF::cff2_top_dict_values_t,CFF::interp_env_t<CFF::number_t>>
                ::interpret((dict_interpreter_t<CFF::cff2_top_dict_opset_t,CFF::cff2_top_dict_values_t,CFF::interp_env_t<CFF::number_t>>
                             *)&local_2098,(cff2_top_dict_values_t *)(this + 0x48));
        if (cVar6 != '\0') {
          uVar24 = (uint)(byte)puVar4[2] +
                   (uint)(ushort)(*(ushort *)(puVar4 + 3) << 8 | *(ushort *)(puVar4 + 3) >> 8);
          if (((uVar24 == 0) ||
              (pCVar25 = (CFFIndex<OT::IntType<unsigned_int,4u>> *)(puVar4 + uVar24),
              (ulong)*(uint *)(this + 0x18) < (ulong)((long)pCVar25 - *(long *)(this + 8)))) ||
             (cVar6 = CFFIndex<OT::IntType<unsigned_int,4u>>::sanitize
                                (pCVar25,(hb_sanitize_context_t *)this), cVar6 == '\0')) {
            pCVar25 = (CFFIndex<OT::IntType<unsigned_int,4u>> *)&_hb_NullPool;
          }
          *(CFFIndex<OT::IntType<unsigned_int,4u>> **)(this + 0x70) = pCVar25;
          if (*(int *)(this + 0x68) == 0) {
LAB_00114688:
            puVar26 = (ushort *)&_hb_NullPool;
          }
          else {
            puVar26 = (ushort *)(puVar4 + *(int *)(this + 0x68));
            if (((undefined *)(ulong)*(uint *)(this + 0x18) <
                 (undefined *)((long)puVar26 - *(long *)(this + 8))) ||
               ((undefined *)(ulong)*(uint *)(this + 0x18) <
                (undefined *)((long)puVar26 + (10 - *(long *)(this + 8))))) goto LAB_00114688;
            this_00 = (ItemVariationStore *)(puVar26 + 1);
            if ((((ulong)*(uint *)(this + 0x18) < (ulong)((long)this_00 - *(long *)(this + 8))) ||
                ((uVar24 = (uint)(ushort)(*puVar26 << 8 | *puVar26 >> 8),
                 (uint)((int)*(undefined8 *)(this + 0x10) - (int)this_00) < uVar24 ||
                 (iVar8 = *(int *)(this + 0x1c) - uVar24, *(int *)(this + 0x1c) = iVar8, iVar8 < 1))
                )) || (cVar6 = ItemVariationStore::sanitize(this_00,(hb_sanitize_context_t *)this),
                      cVar6 == '\0')) goto LAB_00114688;
          }
          *(ushort **)(this + 0x78) = puVar26;
          if (((*(int *)(this + 0x60) == 0) ||
              (pCVar25 = (CFFIndex<OT::IntType<unsigned_int,4u>> *)(puVar4 + *(int *)(this + 0x60)),
              (ulong)*(uint *)(this + 0x18) < (ulong)((long)pCVar25 - *(long *)(this + 8)))) ||
             (cVar6 = CFFIndex<OT::IntType<unsigned_int,4u>>::sanitize
                                (pCVar25,(hb_sanitize_context_t *)this), cVar6 == '\0')) {
            pCVar25 = (CFFIndex<OT::IntType<unsigned_int,4u>> *)&_hb_NullPool;
          }
          *(CFFIndex<OT::IntType<unsigned_int,4u>> **)(this + 0x80) = pCVar25;
          if (((*(int *)(this + 100) == 0) ||
              (pCVar25 = (CFFIndex<OT::IntType<unsigned_int,4u>> *)(puVar4 + *(int *)(this + 100)),
              (ulong)*(uint *)(this + 0x18) < (ulong)((long)pCVar25 - *(long *)(this + 8)))) ||
             (cVar6 = CFFIndex<OT::IntType<unsigned_int,4u>>::sanitize
                                (pCVar25,(hb_sanitize_context_t *)this), cVar6 == '\0')) {
            pCVar25 = (CFFIndex<OT::IntType<unsigned_int,4u>> *)&_hb_NullPool;
          }
          *(CFFIndex<OT::IntType<unsigned_int,4u>> **)(this + 0x88) = pCVar25;
          if (*(int *)(this + 0x6c) == 0) {
LAB_0011472b:
            pcVar27 = &_hb_NullPool;
          }
          else {
            pcVar27 = puVar4 + *(int *)(this + 0x6c);
            if ((char *)(ulong)*(uint *)(this + 0x18) < pcVar27 + -*(long *)(this + 8))
            goto LAB_0011472b;
            uVar24 = *(uint *)pCVar25;
            uVar24 = uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8 |
                     uVar24 << 0x18;
            if ((char *)(ulong)*(uint *)(this + 0x18) < pcVar27 + (2 - *(long *)(this + 8)))
            goto LAB_0011472b;
            cVar6 = *pcVar27;
            if (cVar6 == '\x03') {
              cVar6 = CFF::FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>>
                      ::sanitize((FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>>
                                  *)(pcVar27 + 1),(hb_sanitize_context_t *)this,uVar24);
LAB_00114fa6:
              if (cVar6 == '\0') goto LAB_0011472b;
            }
            else {
              if (cVar6 == '\x04') {
                cVar6 = CFF::
                        FDSelect3_4<OT::IntType<unsigned_int,4u>,OT::IntType<unsigned_short,2u>>::
                        sanitize((FDSelect3_4<OT::IntType<unsigned_int,4u>,OT::IntType<unsigned_short,2u>>
                                  *)(pcVar27 + 1),(hb_sanitize_context_t *)this,uVar24);
                goto LAB_00114fa6;
              }
              if (((cVar6 != '\0') ||
                  (pcVar1 = pcVar27 + 1,
                  (ulong)*(uint *)(this + 0x18) < (ulong)((long)pcVar1 - *(long *)(this + 8)))) ||
                 (((ulong)*(uint *)(this + 0x18) < (ulong)((long)pcVar1 - *(long *)(this + 8)) ||
                  (((uint)((int)*(undefined8 *)(this + 0x10) - (int)pcVar1) < *(uint *)(this + 0x38)
                   || (iVar8 = *(int *)(this + 0x1c) - *(uint *)(this + 0x38),
                      *(int *)(this + 0x1c) = iVar8, iVar8 < 1)))))) goto LAB_0011472b;
            }
          }
          *(char **)(this + 0x90) = pcVar27;
          if (((*(uint **)(this + 0x80) != (uint *)&_hb_NullPool) &&
              (*(undefined **)(this + 0x70) != &_hb_NullPool)) &&
             (*(uint **)(this + 0x88) != (uint *)&_hb_NullPool)) {
            uVar24 = **(uint **)(this + 0x80);
            uVar24 = uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8 |
                     uVar24 << 0x18;
            *(uint *)(this + 0xc0) = uVar24;
            if (*(uint *)(this + 0x38) == uVar24) {
              uVar24 = **(uint **)(this + 0x88);
              uVar24 = uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8 |
                       uVar24 << 0x18;
              *(uint *)(this + 0x98) = uVar24;
              cVar6 = hb_vector_t<CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>,false>::
                      resize((hb_vector_t<CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>,false>
                              *)(this + 0xb0),uVar24,true,false);
              if (cVar6 != '\0') {
                if (*(int *)(this + 0x98) != 0) {
                  local_20d0 = 0;
                  uVar24 = 0;
                  local_20b8 = 0;
                  do {
                    puVar5 = *(uint **)(this + 0x88);
                    uVar18 = *puVar5;
                    if (uVar24 < (uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8
                                 | uVar18 << 0x18)) {
                      bVar2 = (byte)puVar5[1];
                      if (bVar2 == 3) {
                        pbVar15 = (byte *)((long)puVar5 + local_20b8 * 3 + 5);
                        uVar18 = (uint)*pbVar15 * 0x10000 + (uint)pbVar15[1] * 0x100 +
                                 (uint)pbVar15[2];
                        pbVar15 = (byte *)((long)puVar5 + (ulong)(uVar24 + 1) * 3 + 5);
                        uVar21 = (uint)*pbVar15 * 0x10000 + (uint)pbVar15[1] * 0x100 +
                                 (uint)pbVar15[2];
                        if (uVar18 <= uVar21) {
                          uVar9 = *puVar5;
                          uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                                  uVar9 << 0x18;
                          pbVar15 = (byte *)((long)puVar5 + (ulong)uVar9 * 3 + 5);
                          uVar17 = (uint)*pbVar15 * 0x10000 + (uint)pbVar15[1] * 0x100 +
                                   (uint)pbVar15[2];
                          goto LAB_00114990;
                        }
                        goto LAB_00115058;
                      }
                      if (bVar2 < 4) {
                        if (bVar2 == 1) {
                          uVar18 = (uint)*(byte *)((long)puVar5 + local_20b8 + 5);
                          bVar3 = *(byte *)((long)puVar5 + (ulong)(uVar24 + 1) + 5);
                          uVar21 = (uint)bVar3;
                          if (uVar18 <= bVar3) {
                            uVar9 = *puVar5;
                            uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8
                                    | uVar9 << 0x18;
                            uVar17 = (uint)*(byte *)((long)puVar5 + (ulong)uVar9 + 5);
LAB_00114990:
                            if (uVar21 <= uVar17) {
                              uVar21 = uVar21 - uVar18;
                              lVar12 = (ulong)uVar18 + 4;
                              goto LAB_001149a0;
                            }
                          }
                        }
                        else {
                          if (bVar2 != 2) goto LAB_00115120;
                          uVar16 = *(ushort *)((long)puVar5 + local_20b8 * 2 + 5);
                          uVar20 = *(ushort *)((long)puVar5 + (ulong)(uVar24 + 1) * 2 + 5);
                          uVar16 = uVar16 << 8 | uVar16 >> 8;
                          uVar20 = uVar20 << 8 | uVar20 >> 8;
                          uVar18 = (uint)uVar16;
                          uVar21 = (uint)uVar20;
                          if (uVar16 <= uVar20) {
                            uVar9 = *puVar5;
                            uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8
                                    | uVar9 << 0x18;
                            uVar16 = *(ushort *)((long)puVar5 + (ulong)uVar9 * 2 + 5);
                            uVar17 = (uint)(ushort)(uVar16 << 8 | uVar16 >> 8);
                            goto LAB_00114990;
                          }
                        }
                        goto LAB_00115058;
                      }
                      if (bVar2 == 4) {
                        uVar18 = *(uint *)((long)puVar5 + local_20b8 * 4 + 5);
                        uVar21 = *(uint *)((long)puVar5 + (ulong)(uVar24 + 1) * 4 + 5);
                        uVar18 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8
                                 | uVar18 << 0x18;
                        uVar21 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8
                                 | uVar21 << 0x18;
                        if (uVar18 <= uVar21) {
                          uVar9 = *puVar5;
                          uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                                  uVar9 << 0x18;
                          uVar17 = *(uint *)((long)puVar5 + (ulong)uVar9 * 4 + 5);
                          uVar17 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 |
                                   (uVar17 & 0xff00) << 8 | uVar17 << 0x18;
                          goto LAB_00114990;
                        }
                        goto LAB_00115058;
                      }
LAB_00115120:
                      uVar18 = *puVar5;
                      lVar12 = 4;
                      uVar21 = 0;
                      uVar9 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                              uVar18 << 0x18;
LAB_001149a0:
                      lVar12 = (ulong)((uVar9 + 1) * (uint)bVar2) + lVar12 + (long)puVar5;
                      if (((ulong)*(uint *)(this + 0x18) < (ulong)(lVar12 - *(long *)(this + 8))) ||
                         ((uint)((int)*(undefined8 *)(this + 0x10) - (int)lVar12) < uVar21))
                      goto LAB_00114778;
                    }
                    else {
LAB_00115058:
                      lVar12 = 0;
                      uVar21 = 0;
                      if ((ulong)*(uint *)(this + 0x18) < (ulong)-*(long *)(this + 8))
                      goto LAB_00114778;
                    }
                    iVar8 = *(int *)(this + 0x1c);
                    *(uint *)(this + 0x1c) = iVar8 - uVar21;
                    if ((int)(iVar8 - uVar21) < 1) goto LAB_00114778;
                    pdVar19 = local_2070;
                    for (lVar11 = 0x201; lVar11 != 0; lVar11 = lVar11 + -1) {
                      *pdVar19 = 0.0;
                      pdVar19 = pdVar19 + (ulong)bVar28 * -2 + 1;
                    }
                    local_2078 = 0;
                    local_2080 = (ulong)uVar21;
                    local_2088 = lVar12;
                    this_01 = (parsed_values_t<CFF::op_str_t> *)
                              hb_vector_t<CFF::cff2_font_dict_values_t,false>::push
                                        ((hb_vector_t<CFF::cff2_font_dict_values_t,false> *)
                                         (this + 0xa0));
                    __hb_CrapPool = __hb_NullPool;
                    _strlen = _memcpy;
                    _malloc = _realloc;
                    _hb_face_get_upem = _hb_font_get_face;
                    _hb_blob_create_sub_blob = _hb_ot_color_palette_get_colors;
                    if (this_01 == (parsed_values_t<CFF::op_str_t> *)&_hb_CrapPool)
                    goto LAB_00114778;
                    *(undefined4 *)this_01 = 0;
                    *(undefined8 *)(this_01 + 8) = 0;
                    *(undefined8 *)(this_01 + 0x10) = 0;
                    *(undefined8 *)(this_01 + 0x18) = 0;
                    *(undefined4 *)(this_01 + 0x20) = 0;
                    uVar18 = 0;
LAB_00114a94:
                    uVar21 = uVar18 + 1;
                    uVar9 = (uint)local_2080;
                    if (uVar21 <= (uint)local_2080) {
                      do {
                        local_2080 = CONCAT44(uVar21,(uint)local_2080);
                        bVar2 = *(byte *)(local_2088 + (ulong)uVar18);
                        uVar17 = (uint)bVar2;
                        if (bVar2 == 0xc) {
                          if (uVar9 < uVar18 + 2) {
                            uVar17 = 0xffff;
                          }
                          else {
                            local_2080 = CONCAT44(uVar18 + 2,(uint)local_2080);
                            uVar17 = *(byte *)(local_2088 + (ulong)uVar21) + 0x100;
                          }
LAB_00114e32:
                          CFF::dict_opset_t::process_op(uVar17,(interp_env_t *)&local_2088);
                          if (local_2078._4_4_ != 0) goto LAB_00114f60;
                          cVar6 = (char)local_2078;
                          if ((uint)local_2080 < local_2080._4_4_) goto LAB_00114778;
                        }
                        else {
                          if (bVar2 != 0x12) goto LAB_00114e32;
                          if (local_2078._4_4_ == 0) {
                            __hb_CrapPool = __hb_NullPool;
                            uVar18 = 0;
                            if ((int)__hb_NullPool < 0) goto LAB_00115176;
                            *(int *)(this_01 + 0x18) = (int)__hb_NullPool;
LAB_00115155:
                            local_2078 = CONCAT71(local_2078._1_7_,1);
                            __hb_CrapPool = __hb_NullPool;
                            pdVar19 = (double *)&_hb_CrapPool;
                          }
                          else {
                            uVar18 = local_2078._4_4_ - 1;
                            local_2078 = CONCAT44(uVar18,(undefined4)local_2078);
                            iVar8 = (int)local_2070[uVar18];
                            if (iVar8 < 0) {
LAB_00115176:
                              local_2078 = CONCAT71(local_2078._1_7_,1);
                              iVar8 = 0;
                            }
                            *(int *)(this_01 + 0x18) = iVar8;
                            if (uVar18 == 0) goto LAB_00115155;
                            pdVar19 = local_2070 + (uVar18 - 1);
                          }
                          if ((int)*pdVar19 < 0) {
                            *(undefined4 *)(this_01 + 0x1c) = 0;
                            goto LAB_00114778;
                          }
                          *(int *)(this_01 + 0x1c) = (int)*pdVar19;
                          cVar6 = (char)local_2078;
                          local_2078 = local_2078 & 0xffffffff;
                        }
                        if (cVar6 != '\0') goto LAB_00114778;
                        local_2098 = (byte_str_ref_t *)0x0;
                        local_208c = 0;
                        local_2090 = 0xffff;
                        CFF::parsed_values_t<CFF::op_str_t>::add_op
                                  (this_01,uVar17,(byte_str_ref_t *)&local_2088,
                                   (op_str_t *)&local_2098);
                        uVar21 = local_2080._4_4_ + 1;
                        uVar9 = (uint)local_2080;
                        uVar18 = local_2080._4_4_;
                        if ((uint)local_2080 < uVar21) break;
                      } while( true );
                    }
                    if ((((*(int *)(this_01 + 0x18) == 0) ||
                         (puVar23 = puVar4 + *(int *)(this_01 + 0x18),
                         (ulong)*(uint *)(this + 0x18) <
                         (ulong)((long)puVar23 - *(long *)(this + 8)))) ||
                        (uVar18 = *(uint *)(this_01 + 0x1c),
                        (uint)((int)*(undefined8 *)(this + 0x10) - (int)puVar23) < uVar18)) ||
                       ((iVar8 = *(int *)(this + 0x1c), *(uint *)(this + 0x1c) = iVar8 - uVar18,
                        (int)(iVar8 - uVar18) < 1 || (puVar23 == &_hb_NullPool))))
                    goto LAB_00114778;
                    local_1058 = 0;
                    pdVar19 = local_1050;
                    for (lVar12 = 0x201; lVar12 != 0; lVar12 = lVar12 + -1) {
                      *pdVar19 = 0.0;
                      pdVar19 = pdVar19 + (ulong)bVar28 * -2 + 1;
                    }
                    local_48 = 0;
                    local_44 = '\0';
                    if (uVar24 < *(uint *)(this + 0xb4)) {
                      this_02 = (parsed_values_t<CFF::dict_val_t> *)
                                (local_20d0 + *(long *)(this + 0xb8));
                    }
                    else {
                      _malloc = _realloc;
                      _hb_face_get_upem = _hb_font_get_face;
                      _hb_blob_create_sub_blob = _hb_ot_color_palette_get_colors;
                      _load_upem = ___stack_chk_fail;
                      __hb_CrapPool = __hb_NullPool;
                      _strlen = _memcpy;
                      this_02 = (parsed_values_t<CFF::dict_val_t> *)&_hb_CrapPool;
                    }
                    *(undefined8 *)(this_02 + 8) = 0;
                    *(undefined4 *)this_02 = 0;
                    *(undefined8 *)(this_02 + 0x10) = 0;
                    *(undefined4 *)(this_02 + 0x18) = 0;
                    *(undefined **)(this_02 + 0x20) = &_hb_NullPool;
                    *(undefined4 *)(this_02 + 0x28) = 0;
                    uVar21 = uVar18;
                    local_1068 = puVar23;
                    local_1060 = (ulong)uVar18;
                    while( true ) {
                      uVar17 = local_1060._4_4_ + 1;
                      uVar9 = local_1060._4_4_;
                      if (uVar21 < uVar17) break;
LAB_00114c6d:
                      bVar2 = local_1068[uVar9];
                      uVar10 = (uint)bVar2;
                      local_1060 = CONCAT44(uVar17,(uint)local_1060);
                      if (bVar2 == 0xc) {
                        if (uVar21 < uVar9 + 2) {
                          uVar10 = 0xffff;
                        }
                        else {
                          local_1060 = CONCAT44(uVar9 + 2,(uint)local_1060);
                          uVar10 = (byte)local_1068[uVar17] + 0x100;
                          if (uVar10 < 0x10e) {
                            if (0x108 < uVar10) goto LAB_00114eb0;
                          }
                          else if ((byte)local_1068[uVar17] - 0x11 < 2) {
LAB_00114eb0:
                            local_208c = 0;
                            local_2090 = 0xffff;
                            local_2098 = (byte_str_ref_t *)0x0;
                            local_1058 = local_1058 & 0xffffffff;
                            goto LAB_00114ebb;
                          }
                        }
                        goto LAB_00114ed5;
                      }
                      local_2098 = (byte_str_ref_t *)0x0;
                      local_2090 = 0xffff;
                      local_208c = 0;
                      iVar8 = local_1058._4_4_;
                      if (bVar2 == 0x16) {
                        if (local_44 == '\0') {
                          if (iVar8 == 0) {
                            local_1058 = CONCAT71(local_1058._1_7_,1);
                            __hb_CrapPool = __hb_NullPool;
                            pdVar19 = (double *)&_hb_CrapPool;
                          }
                          else {
                            pdVar19 = local_1050 + (iVar8 - 1);
                          }
                          local_48 = (int)*pdVar19;
                          if (local_48 < 0) {
                            local_1058 = CONCAT71(local_1058._1_7_,1);
                            local_48 = 0;
                          }
                        }
                        local_44 = '\x01';
                        *(int *)(this_02 + 0x28) = local_48;
                        goto LAB_00114eb0;
                      }
                      if (0x16 < bVar2) {
                        if (bVar2 != 0x17) goto LAB_00114ed5;
LAB_00114ebb:
                        if (uVar21 < local_1060._4_4_) goto LAB_00114778;
LAB_00114cf1:
                        if ((char)local_1058 != '\0') goto LAB_00114fee;
                        CFF::parsed_values_t<CFF::dict_val_t>::add_op
                                  (this_02,uVar10,(byte_str_ref_t *)&local_1068,
                                   (dict_val_t *)&local_2098);
                        uVar17 = local_1060._4_4_ + 1;
                        uVar21 = (uint)local_1060;
                        uVar9 = local_1060._4_4_;
                        if ((uint)local_1060 < uVar17) break;
                        goto LAB_00114c6d;
                      }
                      if (0xb < bVar2) {
                        if (bVar2 != 0x13) goto LAB_00114ed5;
                        if (iVar8 == 0) {
                          local_1058 = CONCAT71(local_1058._1_7_,1);
                          __hb_CrapPool = __hb_NullPool;
                          pdVar19 = (double *)&_hb_CrapPool;
                        }
                        else {
                          pdVar19 = local_1050 + (iVar8 - 1);
                        }
                        *(int *)(this_02 + 0x18) = (int)*pdVar19;
                        local_1058 = local_1058 & 0xffffffff;
                        goto LAB_00114cf1;
                      }
                      if (5 < bVar2) goto LAB_00114eb0;
LAB_00114ed5:
                      local_208c = 0;
                      local_2090 = 0xffff;
                      local_2098 = (byte_str_ref_t *)0x0;
                      CFF::dict_opset_t::process_op(uVar10,(interp_env_t *)&local_1068);
                      uVar21 = (uint)local_1060;
                      if (local_1058._4_4_ == 0) goto LAB_00114ebb;
                      if ((uint)local_1060 < local_1060._4_4_) goto LAB_00114778;
LAB_00114fee:
                      if ((char)local_1058 != '\0') goto LAB_00114778;
                    }
                    uVar21 = *(uint *)(this + 0xb4);
                    if (uVar24 < uVar21) {
                      puVar14 = (undefined *)(local_20d0 + *(long *)(this + 0xb8));
                    }
                    else {
                      _malloc = _realloc;
                      _hb_face_get_upem = _hb_font_get_face;
                      _hb_blob_create_sub_blob = _hb_ot_color_palette_get_colors;
                      _load_upem = ___stack_chk_fail;
                      __hb_CrapPool = __hb_NullPool;
                      _strlen = _memcpy;
                      puVar14 = &_hb_CrapPool;
                    }
                    if (uVar18 == 0) {
                      puVar23 = &_hb_NullPool;
                    }
                    pCVar25 = (CFFIndex<OT::IntType<unsigned_int,4u>> *)&_hb_NullPool;
                    if (*(int *)(puVar14 + 0x18) != 0) {
                      pCVar25 = (CFFIndex<OT::IntType<unsigned_int,4u>> *)
                                (puVar23 + *(int *)(puVar14 + 0x18));
                      if ((ulong)((long)pCVar25 - *(long *)(this + 8)) <=
                          (ulong)*(uint *)(this + 0x18)) {
                        cVar6 = CFFIndex<OT::IntType<unsigned_int,4u>>::sanitize
                                          (pCVar25,(hb_sanitize_context_t *)this);
                        uVar21 = *(uint *)(this + 0xb4);
                        if (cVar6 != '\0') goto LAB_00114d9b;
                      }
                      pCVar25 = (CFFIndex<OT::IntType<unsigned_int,4u>> *)&_hb_NullPool;
                    }
LAB_00114d9b:
                    if (uVar24 < uVar21) {
                      puVar23 = (undefined *)(local_20d0 + *(long *)(this + 0xb8));
                    }
                    else {
                      _malloc = _realloc;
                      _hb_face_get_upem = _hb_font_get_face;
                      _hb_blob_create_sub_blob = _hb_ot_color_palette_get_colors;
                      _load_upem = ___stack_chk_fail;
                      __hb_CrapPool = __hb_NullPool;
                      _strlen = _memcpy;
                      puVar23 = &_hb_CrapPool;
                    }
                    local_20b8 = local_20b8 + 1;
                    uVar24 = uVar24 + 1;
                    local_20d0 = local_20d0 + 0x30;
                    *(CFFIndex<OT::IntType<unsigned_int,4u>> **)(puVar23 + 0x20) = pCVar25;
                    if (*(uint *)(this + 0x98) <= uVar24) break;
                  } while( true );
                }
                goto LAB_00114373;
              }
            }
          }
        }
LAB_00114778:
        lVar13 = *(long *)(this + 0x30);
      }
    }
  }
  hb_blob_destroy(lVar13);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (*(int *)(this + 0x50) != 0) {
    free(*(void **)(this + 0x58));
  }
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  if (*(int *)(this + 0xa0) != 0) {
    uVar24 = *(uint *)(this + 0xa4);
    pvVar22 = *(void **)(this + 0xa8);
    lVar12 = (long)pvVar22 + (ulong)uVar24 * 0x28 + -0x28;
    if (uVar24 != 0) {
      lVar11 = ((ulong)(uVar24 - 1) + 1) * -0x28 + lVar12;
      do {
        while (lVar13 = lVar12 + -0x28, *(int *)(lVar12 + 8) == 0) {
          lVar12 = lVar13;
          if (lVar11 == lVar13) goto LAB_001144e6;
        }
        free(*(void **)(lVar12 + 0x10));
        lVar12 = lVar13;
      } while (lVar11 != lVar13);
LAB_001144e6:
      pvVar22 = *(void **)(this + 0xa8);
    }
    free(pvVar22);
  }
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  if (*(int *)(this + 0xb0) != 0) {
    uVar24 = *(uint *)(this + 0xb4);
    pvVar22 = *(void **)(this + 0xb8);
    lVar12 = (long)pvVar22 + (ulong)uVar24 * 0x30 + -0x30;
    if (uVar24 != 0) {
      lVar11 = ((ulong)(uVar24 - 1) + 1) * -0x30 + lVar12;
      do {
        while (lVar13 = lVar12 + -0x30, *(int *)(lVar12 + 8) == 0) {
          lVar12 = lVar13;
          if (lVar11 == lVar13) goto LAB_0011447e;
        }
        free(*(void **)(lVar12 + 0x10));
        lVar12 = lVar13;
      } while (lVar11 != lVar13);
LAB_0011447e:
      pvVar22 = *(void **)(this + 0xb8);
    }
    free(pvVar22);
  }
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  hb_blob_destroy(*(undefined8 *)(this + 0x40));
  *(undefined8 *)(this + 0x40) = 0;
LAB_00114373:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00114f60:
  if (((uint)local_2080 < local_2080._4_4_) || (uVar18 = local_2080._4_4_, (char)local_2078 != '\0')
     ) goto LAB_00114778;
  goto LAB_00114a94;
}



/* OT::CFFIndex<OT::IntType<unsigned short, 2u> >::sanitize(hb_sanitize_context_t*) const */

ulong __thiscall
OT::CFFIndex<OT::IntType<unsigned_short,2u>>::sanitize
          (CFFIndex<OT::IntType<unsigned_short,2u>> *this,hb_sanitize_context_t *param_1)

{
  CFFIndex<OT::IntType<unsigned_short,2u>> CVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  CFFIndex<OT::IntType<unsigned_short,2u>> *pCVar6;
  uint uVar7;
  
  if ((CFFIndex<OT::IntType<unsigned_short,2u>> *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (2 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar2 = *(ushort *)this << 8 | *(ushort *)this >> 8;
  if (uVar2 == 0) {
    return 1;
  }
  pCVar6 = this + 3;
  if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pCVar6 - *(long *)(param_1 + 8))) {
    return 0;
  }
  CVar1 = this[2];
  if ((byte)CVar1 - 1 < 4) {
    uVar7 = (uVar2 + 1) * (uint)(byte)CVar1;
    if (uVar7 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pCVar6)) {
      iVar4 = *(int *)(param_1 + 0x1c) - uVar7;
      *(int *)(param_1 + 0x1c) = iVar4;
      if (0 < iVar4) {
        uVar5 = (ulong)uVar2;
        if (CVar1 == (CFFIndex<OT::IntType<unsigned_short,2u>>)0x3) {
          pCVar6 = pCVar6 + uVar5 * 3;
          uVar3 = (uint)(byte)*pCVar6 * 0x10000 + (uint)(byte)pCVar6[1] * 0x100 +
                  (uint)(byte)pCVar6[2];
        }
        else if (CVar1 == (CFFIndex<OT::IntType<unsigned_short,2u>>)0x4) {
          uVar3 = *(uint *)(pCVar6 + uVar5 * 4);
          uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
        }
        else if (CVar1 == (CFFIndex<OT::IntType<unsigned_short,2u>>)0x2) {
          uVar3 = (uint)(ushort)(*(ushort *)(pCVar6 + uVar5 * 2) << 8 |
                                *(ushort *)(pCVar6 + uVar5 * 2) >> 8);
        }
        else {
          uVar3 = (uint)(byte)this[uVar5 + 3];
        }
        uVar5 = (long)(this + (uVar7 + 2)) - *(long *)(param_1 + 8);
        if ((uVar5 <= *(uint *)(param_1 + 0x18)) &&
           (uVar3 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)(this + (uVar7 + 2))))) {
          *(uint *)(param_1 + 0x1c) = iVar4 - uVar3;
          uVar5 = CONCAT71((int7)(uVar5 >> 8),0 < (int)(iVar4 - uVar3));
          goto LAB_001153b2;
        }
      }
    }
  }
  uVar5 = 0;
LAB_001153b2:
  return uVar5 & 0xffffffff;
}



/* hb_vector_t<CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>, false>::resize(int, bool,
   bool) */

undefined8 __thiscall
hb_vector_t<CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>,false>::resize
          (hb_vector_t<CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>,false> *this,
          int param_1,bool param_2,bool param_3)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  uVar5 = 0;
  uVar1 = *(uint *)this;
  if (-1 < param_1) {
    uVar5 = (ulong)(uint)param_1;
  }
  if ((int)uVar1 < 0) {
    return 0;
  }
  uVar4 = (uint)uVar5;
  if (param_3) {
    uVar11 = *(uint *)(this + 4);
    uVar15 = (ulong)uVar11;
    if (uVar11 <= uVar4) {
      uVar15 = uVar5;
    }
    uVar12 = (uint)uVar15;
    if (uVar1 < uVar12) {
      if ((0x6666666 < uVar12) ||
         (puVar9 = (undefined4 *)malloc(uVar15 * 0x28), puVar9 == (undefined4 *)0x0))
      goto LAB_0011549e;
LAB_0011556c:
      uVar1 = *(uint *)(this + 4);
      puVar8 = *(undefined4 **)(this + 8);
      if (uVar1 != 0) {
        puVar6 = puVar9;
        puVar10 = puVar8;
        do {
          *puVar6 = 0;
          puVar7 = puVar6 + 10;
          puVar6[2] = 0;
          puVar6[3] = 0;
          puVar6[6] = 0;
          uVar2 = *puVar10;
          *(undefined8 *)(puVar6 + 8) = 0;
          *puVar6 = uVar2;
          uVar2 = puVar10[2];
          *(undefined8 *)(puVar6 + 4) = 0;
          puVar6[2] = uVar2;
          puVar6[3] = puVar10[3];
          *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(puVar10 + 4);
          puVar6[6] = puVar10[6];
          *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(puVar10 + 8);
          puVar6 = puVar7;
          puVar10 = puVar10 + 10;
        } while (puVar9 + (ulong)uVar1 * 10 != puVar7);
      }
      free(puVar8);
    }
    else {
      if (uVar1 >> 2 <= uVar12) goto LAB_00115459;
      if (0x6666666 < uVar12) goto LAB_0011549e;
      if (uVar12 != 0) goto LAB_00115684;
      puVar9 = (undefined4 *)0x0;
      free(*(void **)(this + 8));
    }
    *(undefined4 **)(this + 8) = puVar9;
    *(uint *)this = uVar12;
  }
  else if (uVar1 < uVar4) {
    uVar15 = (ulong)uVar1;
    do {
      uVar11 = (int)uVar15 + 8 + (int)(uVar15 >> 1);
      uVar15 = (ulong)uVar11;
    } while (uVar11 < uVar4);
    if (0x6666666 < uVar11) goto LAB_0011549e;
LAB_00115684:
    uVar12 = (uint)uVar15;
    puVar9 = (undefined4 *)malloc(uVar15 * 0x28);
    if (puVar9 != (undefined4 *)0x0) goto LAB_0011556c;
    if (uVar1 < uVar12) {
LAB_0011549e:
      *(uint *)this = ~uVar1;
      return 0;
    }
  }
  uVar11 = *(uint *)(this + 4);
LAB_00115459:
  if (uVar11 < uVar4) {
    if (param_2) {
      lVar3 = *(long *)(this + 8);
      puVar9 = (undefined4 *)(lVar3 + (ulong)uVar11 * 0x28);
      do {
        *puVar9 = 0;
        puVar8 = puVar9 + 10;
        puVar9[2] = 0;
        puVar9[3] = 0;
        *(undefined8 *)(puVar9 + 4) = 0;
        puVar9[6] = 0;
        *(undefined8 *)(puVar9 + 8) = 0;
        puVar9 = puVar8;
      } while ((undefined4 *)(lVar3 + 0x28 + ((ulong)((uVar4 - 1) - uVar11) + (ulong)uVar11) * 0x28)
               != puVar8);
    }
  }
  else if ((uVar4 < uVar11) && (param_2)) {
    lVar3 = *(long *)(this + 8) + -0x28 + (ulong)uVar11 * 0x28;
    lVar13 = lVar3;
    do {
      lVar14 = lVar13 + -0x28;
      if (*(int *)(lVar13 + 8) != 0) {
        free(*(void **)(lVar13 + 0x10));
      }
      lVar13 = lVar14;
    } while (lVar14 != (ulong)(uVar11 - uVar4) * -0x28 + lVar3);
  }
  *(uint *)(this + 4) = uVar4;
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_vector_t<CFF::cff1_font_dict_values_t, false>::push() */

undefined * __thiscall
hb_vector_t<CFF::cff1_font_dict_values_t,false>::push
          (hb_vector_t<CFF::cff1_font_dict_values_t,false> *this)

{
  uint uVar1;
  undefined4 *__ptr;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  
  uVar6 = *(uint *)this;
  uVar1 = *(uint *)(this + 4);
  uVar7 = (ulong)uVar1;
  if ((int)uVar6 < 0) {
    _hb_blob_create_sub_blob = _hb_ot_color_palette_get_colors;
    __hb_CrapPool = __hb_NullPool;
    _strlen = _memcpy;
    _malloc = _realloc;
    _hb_face_get_upem = _hb_font_get_face;
    return &_hb_CrapPool;
  }
  uVar11 = uVar1 + 1;
  if ((int)uVar11 < 0) {
    uVar11 = 0;
  }
  uVar12 = uVar6;
  if (uVar6 < uVar11) {
    do {
      uVar12 = uVar12 + 8 + (uVar12 >> 1);
    } while (uVar12 < uVar11);
    if ((0x6666666 < uVar12) ||
       (pauVar3 = (undefined1 (*) [16])malloc((ulong)uVar12 * 0x28),
       pauVar3 == (undefined1 (*) [16])0x0)) {
      *(uint *)this = ~uVar6;
      __hb_CrapPool = __hb_NullPool;
      _strlen = _memcpy;
      _malloc = _realloc;
      _hb_face_get_upem = _hb_font_get_face;
      _hb_blob_create_sub_blob = _hb_ot_color_palette_get_colors;
      return &_hb_CrapPool;
    }
    __ptr = *(undefined4 **)(this + 8);
    if (uVar1 != 0) {
      pauVar4 = pauVar3;
      puVar5 = __ptr;
      do {
        *pauVar4 = (undefined1  [16])0x0;
        pauVar2 = pauVar4 + 2;
        pauVar4[1] = (undefined1  [16])0x0;
        *(undefined8 *)pauVar4[2] = 0;
        *(undefined4 *)*pauVar4 = *puVar5;
        *(undefined4 *)(*pauVar4 + 8) = puVar5[2];
        *(undefined4 *)(*pauVar4 + 0xc) = puVar5[3];
        *(undefined8 *)pauVar4[1] = *(undefined8 *)(puVar5 + 4);
        *(undefined8 *)(pauVar4[1] + 8) = *(undefined8 *)(puVar5 + 6);
        *(undefined4 *)pauVar4[2] = puVar5[8];
        *(undefined4 *)(pauVar4[2] + 4) = puVar5[9];
        pauVar4 = (undefined1 (*) [16])(*pauVar2 + 8);
        puVar5 = puVar5 + 10;
      } while ((undefined1 (*) [16])(*pauVar2 + 8) !=
               (undefined1 (*) [16])((long)pauVar3 + uVar7 * 0x28));
    }
    free(__ptr);
    uVar1 = *(uint *)(this + 4);
    uVar7 = (ulong)uVar1;
    *(undefined1 (**) [16])(this + 8) = pauVar3;
    *(uint *)this = uVar12;
  }
  else {
    pauVar3 = *(undefined1 (**) [16])(this + 8);
  }
  uVar6 = (uint)uVar7;
  if (uVar1 < uVar11) {
    memset((void *)((long)pauVar3 + uVar7 * 0x28),0,((ulong)((uVar11 - 1) - uVar6) * 5 + 5) * 8);
  }
  else if (uVar11 < uVar6) {
    lVar9 = (long)pauVar3 + uVar7 * 0x28 + -0x28;
    lVar8 = lVar9 + (ulong)(uVar6 - uVar11) * -0x28;
    do {
      while (lVar10 = lVar9 + -0x28, *(int *)(lVar9 + 8) != 0) {
        free(*(void **)(lVar9 + 0x10));
        lVar9 = lVar10;
        if (lVar8 == lVar10) goto LAB_00115841;
      }
      lVar9 = lVar10;
    } while (lVar8 != lVar10);
LAB_00115841:
    pauVar3 = *(undefined1 (**) [16])(this + 8);
  }
  *(uint *)(this + 4) = uVar11;
  return (undefined *)((long)pauVar3 + (ulong)(uVar11 - 1) * 0x28);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CFF::dict_interpreter_t<CFF::cff1_private_dict_opset_t,
   CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>, CFF::interp_env_t<CFF::number_t>
   >::interpret(CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>&) */

undefined8 __thiscall
CFF::
dict_interpreter_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>,CFF::interp_env_t<CFF::number_t>>
::interpret(dict_interpreter_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>,CFF::interp_env_t<CFF::number_t>>
            *this,cff1_private_dict_values_base_t *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  interp_env_t *piVar10;
  uint uVar11;
  interp_env_t *piVar12;
  interp_env_t *piVar13;
  byte *pbVar14;
  byte bVar15;
  uint uVar16;
  long in_FS_OFFSET;
  double dVar17;
  char *local_88;
  double local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_1 + 8) = 0;
  piVar13 = *(interp_env_t **)this;
  *(undefined4 *)param_1 = 0;
  uVar16 = *(uint *)(piVar13 + 0xc);
  uVar11 = *(uint *)(piVar13 + 8);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined **)(param_1 + 0x20) = &_hb_NullPool;
  do {
    uVar7 = uVar16 + 1;
    uVar8 = (ulong)uVar7;
    if (uVar11 < uVar7) {
      uVar9 = 1;
      goto LAB_00115982;
    }
    lVar4 = *(long *)piVar13;
    bVar15 = *(byte *)(lVar4 + (ulong)uVar16);
    uVar6 = (uint)bVar15;
    *(uint *)(piVar13 + 0xc) = uVar7;
    if (bVar15 == 0xc) {
      uVar7 = uVar16 + 2;
      if (uVar11 < uVar7) {
        uVar6 = 0xffff;
      }
      else {
        bVar15 = *(byte *)(lVar4 + uVar8);
        *(uint *)(piVar13 + 0xc) = uVar7;
        uVar6 = bVar15 + 0x100;
        if (uVar6 < 0x10f) {
          if (0x108 < uVar6) goto LAB_00115953;
        }
        else if (bVar15 - 0x11 < 3) goto LAB_00115953;
      }
LAB_00115ad9:
      local_6c = 0;
      local_70 = 0xffff;
      local_78 = 0;
      opset_t<CFF::number_t>::process_op(uVar6,piVar13);
      if (*(int *)(piVar13 + 0x14) == 0) {
        uVar7 = *(uint *)(piVar13 + 0xc);
        uVar11 = *(uint *)(piVar13 + 8);
LAB_0011595a:
        if (uVar7 <= uVar11) goto LAB_00115a66;
      }
LAB_00115962:
      piVar10 = *(interp_env_t **)this;
    }
    else {
      local_78 = 0;
      local_70 = 0xffff;
      local_6c = 0;
      if (bVar15 == 0x13) {
        if (*(uint *)(piVar13 + 0x14) == 0) {
          __hb_CrapPool = __hb_NullPool;
          piVar13[0x10] = (interp_env_t)0x1;
          piVar10 = (interp_env_t *)&_hb_CrapPool;
        }
        else {
          piVar10 = piVar13 + (ulong)*(uint *)(piVar13 + 0x14) * 8 + 0x10;
        }
        *(int *)(param_1 + 0x18) = (int)*(double *)piVar10;
        *(undefined4 *)(piVar13 + 0x14) = 0;
LAB_00115a66:
        if (piVar13[0x10] == (interp_env_t)0x0) {
          parsed_values_t<CFF::dict_val_t>::add_op
                    ((parsed_values_t<CFF::dict_val_t> *)param_1,uVar6,(byte_str_ref_t *)piVar13,
                     (dict_val_t *)&local_78);
        }
        goto LAB_00115962;
      }
      if (bVar15 < 0x14) {
        if (5 < uVar6 - 6) goto LAB_00115ad9;
LAB_00115953:
        local_6c = 0;
        local_70 = 0xffff;
        local_78 = 0;
        *(undefined4 *)(piVar13 + 0x14) = 0;
        goto LAB_0011595a;
      }
      if (bVar15 - 0x14 < 2) goto LAB_00115953;
      piVar10 = piVar13;
      if (bVar15 == 0x1d) {
        pbVar14 = (byte *)((ulong)uVar7 + lVar4);
        if (uVar7 == uVar11) {
          uVar7 = uVar16 + 2;
          pbVar14 = &_hb_NullPool;
          *(uint *)(piVar13 + 0xc) = uVar7;
        }
        bVar15 = *pbVar14;
        pbVar14 = (byte *)((ulong)(uVar7 + 1) + lVar4);
        if (uVar11 <= uVar7 + 1) {
          uVar7 = uVar11 + 1;
          pbVar14 = &_hb_NullPool;
          *(uint *)(piVar13 + 0xc) = uVar7;
        }
        bVar1 = *pbVar14;
        pbVar14 = (byte *)((ulong)(uVar7 + 2) + lVar4);
        if (uVar11 <= uVar7 + 2) {
          uVar7 = uVar11 + 1;
          pbVar14 = &_hb_NullPool;
          *(uint *)(piVar13 + 0xc) = uVar7;
        }
        bVar2 = *pbVar14;
        pbVar14 = (byte *)((ulong)(uVar7 + 3) + lVar4);
        if (uVar11 <= uVar7 + 3) {
          uVar7 = uVar11 + 1;
          pbVar14 = &_hb_NullPool;
          *(uint *)(piVar13 + 0xc) = uVar7;
        }
        bVar3 = *pbVar14;
        uVar16 = *(uint *)(piVar13 + 0x14);
        if (uVar16 < 0x201) {
          piVar12 = piVar13 + (ulong)uVar16 * 8 + 0x18;
          *(uint *)(piVar13 + 0x14) = uVar16 + 1;
        }
        else {
          __hb_CrapPool = __hb_NullPool;
          piVar13[0x10] = (interp_env_t)0x1;
          piVar12 = (interp_env_t *)&_hb_CrapPool;
          piVar10 = *(interp_env_t **)this;
        }
        *(double *)piVar12 =
             (double)(int)((uint)bVar3 |
                          (uint)bVar2 << 8 | (uint)bVar1 << 0x10 | (uint)bVar15 << 0x18);
        *(uint *)(piVar13 + 0xc) = uVar7 + 4;
      }
      else {
        if (bVar15 != 0x1e) goto LAB_00115ad9;
        uVar8 = 0;
        uVar16 = 0;
        bVar15 = 0;
        local_68 = (undefined1  [16])0x0;
        local_58 = (undefined1  [16])0x0;
        do {
          uVar7 = (uint)uVar8;
          if ((bool)(bVar15 & 1)) {
            uVar6 = uVar16 & 0xf;
          }
          else {
            uVar16 = *(uint *)(piVar13 + 0xc);
            uVar6 = uVar16 + 1;
            if (uVar11 < uVar6) break;
            if (uVar16 < uVar11) {
              pbVar14 = (byte *)((ulong)uVar16 + *(long *)piVar13);
            }
            else {
              pbVar14 = &_hb_NullPool;
              *(uint *)(piVar13 + 0xc) = uVar11 + 1;
              uVar6 = uVar11 + 2;
            }
            bVar1 = *pbVar14;
            uVar16 = (uint)bVar1;
            *(uint *)(piVar13 + 0xc) = uVar6;
            uVar6 = (uint)(bVar1 >> 4);
          }
          if (uVar6 == 0xd) break;
          if (uVar6 == 0xf) {
            local_88 = local_68;
            cVar5 = hb_parse_double(&local_88,local_88 + uVar8,&local_80,true);
            if (cVar5 != '\0') {
              piVar10 = *(interp_env_t **)this;
              dVar17 = local_80;
              goto LAB_00115b9f;
            }
            piVar10 = *(interp_env_t **)this;
            break;
          }
          local_68[uVar8] = "0123456789.EE?-?"[uVar6];
          if (uVar6 == 0xc) {
            if (uVar7 == 0x1f) break;
            uVar7 = uVar7 + 1;
            local_68[uVar7] = 0x2d;
          }
          uVar8 = (ulong)(uVar7 + 1);
          bVar15 = bVar15 + 1;
        } while (uVar7 + 1 != 0x20);
        *(int *)(piVar13 + 0xc) = *(int *)(piVar13 + 8) + 1;
        dVar17 = 0.0;
LAB_00115b9f:
        uVar16 = *(uint *)(piVar13 + 0x14);
        if (uVar16 < 0x201) {
          *(uint *)(piVar13 + 0x14) = uVar16 + 1;
          *(double *)(piVar13 + (ulong)uVar16 * 8 + 0x18) = dVar17;
        }
        else {
          piVar13[0x10] = (interp_env_t)0x1;
          __hb_CrapPool = dVar17;
        }
      }
    }
    uVar16 = *(uint *)(piVar10 + 0xc);
    uVar11 = *(uint *)(piVar10 + 8);
  } while ((uVar16 <= uVar11) && (piVar13 = piVar10, piVar10[0x10] == (interp_env_t)0x0));
  uVar9 = 0;
LAB_00115982:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::cff1::accelerator_templ_t<CFF::cff1_private_dict_opset_t,
   CFF::cff1_private_dict_values_base_t<CFF::dict_val_t> >::accelerator_templ_t(hb_face_t*) */

void __thiscall
OT::cff1::
accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
::accelerator_templ_t
          (accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
           *this,hb_face_t *param_1)

{
  FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>> *this_00;
  undefined *puVar1;
  Charset *this_01;
  Encoding *this_02;
  CFFIndex<OT::IntType<unsigned_short,2u>> CVar2;
  byte bVar3;
  char *pcVar4;
  ushort *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  CFFIndex<OT::IntType<unsigned_short,2u>> *pCVar13;
  undefined4 *puVar14;
  parsed_values_t<CFF::op_str_t> *this_03;
  Subrs *pSVar15;
  ulong uVar16;
  byte *pbVar17;
  double *pdVar18;
  uint uVar19;
  CFFIndex<OT::IntType<unsigned_short,2u>> *pCVar20;
  ushort uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  void *pvVar26;
  undefined8 *puVar27;
  undefined4 *puVar28;
  cff1_private_dict_values_base_t *pcVar29;
  undefined *puVar30;
  long in_FS_OFFSET;
  byte bVar31;
  undefined1 auVar32 [16];
  uint local_20b4;
  long local_20b0;
  undefined **local_2098;
  undefined4 local_2090;
  undefined1 local_208c;
  undefined *local_2088;
  ulong local_2080;
  undefined8 local_2078;
  undefined8 local_2070 [513];
  undefined *local_1068;
  undefined8 local_1060;
  undefined8 local_1058;
  double local_1050 [513];
  undefined8 local_48;
  long local_40;
  
  bVar31 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  this[0x28] = (accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
                )0x0;
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x34) = 0x1000000000000;
  *(undefined2 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
  uVar6 = _LC30;
  if (param_1 == (hb_face_t *)0x0) goto LAB_001160e1;
  *(undefined4 *)(this + 0xb8) = 0xffffffff;
  *(undefined4 *)(this + 0xbc) = 0xffffffff;
  *(undefined4 *)(this + 0xc0) = 0xffffffff;
  *(undefined4 *)(this + 0xc4) = 0xffffffff;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 200) = 0xffffffff;
  *(undefined4 *)(this + 0xcc) = 0xffffffff;
  *(undefined4 *)(this + 0xd0) = 0xffffffff;
  *(undefined4 *)(this + 0xd4) = 0xffffffff;
  *(undefined4 *)(this + 0xd4) = 0xffffffff;
  *(undefined4 *)(this + 0xd8) = 0xffffffff;
  *(undefined4 *)(this + 0xdc) = 0xffffffff;
  *(undefined4 *)(this + 0xe0) = 0xffffffff;
  *(undefined8 *)(this + 0xe8) = uVar6;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  uVar9 = hb_face_get_glyph_count(param_1);
  this[0x3c] = (accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
                )0x1;
  *(undefined4 *)(this + 0x38) = uVar9;
  lVar11 = hb_face_reference_table(param_1,0x43464620);
  lVar12 = hb_blob_reference(lVar11);
  this[0x28] = (accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
                )0x0;
  *(long *)(this + 0x30) = lVar12;
  while( true ) {
    uVar19 = *(uint *)(lVar12 + 0x18);
    pcVar4 = *(char **)(lVar12 + 0x10);
    *(char **)(this + 8) = pcVar4;
    uVar22 = uVar19 << 6;
    if (uVar19 >> 0x1a == 0) {
      if (0x3fffffff < uVar22) {
        uVar22 = 0x3fffffff;
      }
      if (uVar22 < 0x4000) {
        uVar22 = 0x4000;
      }
    }
    else {
      uVar22 = 0x3fffffff;
    }
    *(char **)(this + 0x10) = pcVar4 + uVar19;
    *(uint *)(this + 0x18) = uVar19;
    *(uint *)(this + 0x1c) = uVar22;
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 0x24) = 0;
    if (pcVar4 == (char *)0x0) {
      hb_blob_destroy();
      *(undefined8 *)(this + 0x30) = 0;
      *(undefined4 *)(this + 0x18) = 0;
      *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
      goto LAB_00115f9c;
    }
    if (uVar19 < 4) goto LAB_00116140;
    if (*pcVar4 == '\x01') break;
    if ((*(int *)(this + 0x2c) == 0) ||
       (this[0x28] !=
        (accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
         )0x0)) goto LAB_00116610;
    lVar12 = hb_blob_get_data_writable(lVar11,0);
    uVar19 = *(uint *)(lVar11 + 0x18);
    *(long *)(this + 8) = lVar12;
    *(ulong *)(this + 0x10) = (ulong)uVar19 + lVar12;
    if (lVar12 == 0) goto LAB_00116610;
    this[0x28] = (accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
                  )0x1;
    lVar12 = *(long *)(this + 0x30);
  }
  if (*(int *)(this + 0x2c) == 0) {
    hb_blob_destroy(*(undefined8 *)(this + 0x30));
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
LAB_00115f94:
    hb_blob_make_immutable(lVar11);
    goto LAB_00115f9c;
  }
  *(undefined4 *)(this + 0x2c) = 0;
  if (pcVar4 + (4 - *(long *)(this + 8)) <= (char *)(ulong)*(uint *)(this + 0x18)) {
    cVar8 = *pcVar4;
    lVar12 = *(long *)(this + 0x30);
    if (*(int *)(this + 0x2c) != 0) goto LAB_00116140;
    hb_blob_destroy(lVar12);
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
    if (cVar8 != '\x01') goto LAB_0011615c;
    goto LAB_00115f94;
  }
LAB_00116610:
  lVar12 = *(long *)(this + 0x30);
LAB_00116140:
  hb_blob_destroy(lVar12);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
LAB_0011615c:
  hb_blob_destroy(lVar11);
  lVar11 = hb_blob_get_empty();
LAB_00115f9c:
  *(long *)(this + 0x40) = lVar11;
  lVar11 = hb_blob_reference(lVar11);
  this[0x28] = (accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
                )0x0;
  *(long *)(this + 0x30) = lVar11;
  lVar12 = *(long *)(lVar11 + 0x10);
  uVar19 = *(uint *)(lVar11 + 0x18);
  *(long *)(this + 8) = lVar12;
  uVar22 = uVar19 << 6;
  if (uVar19 >> 0x1a == 0) {
    if (0x3fffffff < uVar22) {
      uVar22 = 0x3fffffff;
    }
    if (uVar22 < 0x4000) {
      uVar22 = 0x4000;
    }
  }
  else {
    uVar22 = 0x3fffffff;
  }
  *(uint *)(this + 0x1c) = uVar22;
  *(ulong *)(this + 0x10) = (ulong)uVar19 + lVar12;
  uVar22 = *(uint *)(*(long *)(this + 0x40) + 0x18);
  *(uint *)(this + 0x18) = uVar19;
  *(undefined4 *)(this + 0x2c) = 0;
  puVar30 = *(undefined **)(*(long *)(this + 0x40) + 0x10);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x24) = 0;
  if ((3 < uVar22) && (puVar30 != &_hb_NullPool)) {
    pCVar13 = (CFFIndex<OT::IntType<unsigned_short,2u>> *)(puVar30 + (byte)puVar30[2]);
    *(CFFIndex<OT::IntType<unsigned_short,2u>> **)(this + 0x58) = pCVar13;
    if (pCVar13 != (CFFIndex<OT::IntType<unsigned_short,2u>> *)&_hb_NullPool) {
      cVar8 = CFFIndex<OT::IntType<unsigned_short,2u>>::sanitize
                        (pCVar13,(hb_sanitize_context_t *)this);
      if (cVar8 == '\0') {
LAB_00116044:
        lVar11 = *(long *)(this + 0x30);
      }
      else {
        puVar5 = *(ushort **)(this + 0x58);
        uVar21 = *puVar5 << 8 | *puVar5 >> 8;
        if (uVar21 == 0) {
          uVar16 = 2;
LAB_00116356:
          pCVar13 = (CFFIndex<OT::IntType<unsigned_short,2u>> *)((long)puVar5 + uVar16);
          if (((ulong)((long)pCVar13 - *(long *)(this + 8)) <= (ulong)*(uint *)(this + 0x18)) &&
             (cVar8 = CFFIndex<OT::IntType<unsigned_short,2u>>::sanitize
                                (pCVar13,(hb_sanitize_context_t *)this), cVar8 != '\0')) {
            *(CFFIndex<OT::IntType<unsigned_short,2u>> **)(this + 0x60) = pCVar13;
            if ((pCVar13 != (CFFIndex<OT::IntType<unsigned_short,2u>> *)&_hb_NullPool) &&
               (*(short *)pCVar13 != 0)) {
              auVar32 = CFFIndex<OT::IntType<unsigned_short,2u>>::operator[]
                                  (*(CFFIndex<OT::IntType<unsigned_short,2u>> **)(this + 0x60),0);
              if ((((ulong)(auVar32._0_8_ - *(long *)(this + 8)) <= (ulong)*(uint *)(this + 0x18))
                  && (auVar32._8_4_ <= (uint)((int)*(undefined8 *)(this + 0x10) - auVar32._0_4_)))
                 && (iVar10 = *(int *)(this + 0x1c) - auVar32._8_4_, *(int *)(this + 0x1c) = iVar10,
                    0 < iVar10)) {
                uVar16 = 0;
                local_1058 = 0;
                pdVar18 = local_1050;
                for (lVar12 = 0x201; lVar12 != 0; lVar12 = lVar12 + -1) {
                  *pdVar18 = 0.0;
                  pdVar18 = pdVar18 + (ulong)bVar31 * -2 + 1;
                }
                *(undefined4 *)(this + 0x98) = 0;
                local_48 = 0;
                *(undefined8 *)(this + 0xa0) = 0;
                *(undefined8 *)(this + 0xa8) = 0;
                *(undefined8 *)(this + 0xb0) = 0;
                *(undefined4 *)(this + 0xb8) = 0xffffffff;
                *(undefined4 *)(this + 0xbc) = 0xffffffff;
                *(undefined4 *)(this + 0xc0) = 0xffffffff;
                *(undefined4 *)(this + 0xc4) = 0xffffffff;
                *(undefined4 *)(this + 200) = 0xffffffff;
                *(undefined4 *)(this + 0xcc) = 0xffffffff;
                *(undefined4 *)(this + 0xd0) = 0xffffffff;
                *(undefined4 *)(this + 0xd4) = 0xffffffff;
                *(undefined4 *)(this + 0xd4) = 0xffffffff;
                *(undefined4 *)(this + 0xd8) = 0xffffffff;
                *(undefined4 *)(this + 0xdc) = 0xffffffff;
                *(undefined4 *)(this + 0xe0) = 0xffffffff;
                *(undefined8 *)(this + 0xf0) = 0;
                *(undefined8 *)(this + 0xf8) = 0;
                *(undefined8 *)(this + 0x100) = 0;
                *(undefined8 *)(this + 0xe8) = uVar6;
                local_1060 = auVar32._8_8_;
LAB_0011648b:
                local_1068 = auVar32._0_8_;
                uVar19 = (int)uVar16 + 1;
                if (uVar19 <= auVar32._8_4_) goto code_r0x00116496;
                if (*(int *)(this + 0xf4) < 3) {
                  *(undefined **)(this + 0x50) = &_hb_NullPool;
                }
                else {
                  this_01 = (Charset *)(puVar30 + *(int *)(this + 0xf4));
                  if (((ulong)*(uint *)(this + 0x18) < (ulong)((long)this_01 - *(long *)(this + 8)))
                     || (cVar8 = CFF::Charset::sanitize
                                           (this_01,(hb_sanitize_context_t *)this,
                                            (uint *)(this + 300)), cVar8 == '\0')) {
                    *(undefined **)(this + 0x50) = &_hb_NullPool;
                    goto LAB_00116044;
                  }
                  *(Charset **)(this + 0x50) = this_01;
                  if (this_01 == (Charset *)&_hb_NullPool) goto LAB_00116044;
                }
                *(undefined4 *)(this + 0x90) = 1;
                if (*(int *)(this + 0xdc) != -1) {
                  if (((*(int *)(this + 0xb4) == 0) ||
                      (pCVar13 = (CFFIndex<OT::IntType<unsigned_short,2u>> *)
                                 (puVar30 + *(int *)(this + 0xb4)),
                      (ulong)*(uint *)(this + 0x18) < (ulong)((long)pCVar13 - *(long *)(this + 8))))
                     || (cVar8 = CFFIndex<OT::IntType<unsigned_short,2u>>::sanitize
                                           (pCVar13,(hb_sanitize_context_t *)this), cVar8 == '\0'))
                  {
                    pCVar13 = (CFFIndex<OT::IntType<unsigned_short,2u>> *)&_hb_NullPool;
                  }
                  *(CFFIndex<OT::IntType<unsigned_short,2u>> **)(this + 0x80) = pCVar13;
                  if (*(int *)(this + 0xf8) != 0) {
                    pcVar4 = puVar30 + *(int *)(this + 0xf8);
                    if ((ulong)((long)pcVar4 - *(long *)(this + 8)) <= (ulong)*(uint *)(this + 0x18)
                       ) {
                      this_00 = (FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>>
                                 *)(pcVar4 + 1);
                      if ((ulong)((long)this_00 - *(long *)(this + 8)) <=
                          (ulong)*(uint *)(this + 0x18)) {
                        if (*pcVar4 == '\0') {
                          if ((((ulong)((long)this_00 - *(long *)(this + 8)) <=
                                (ulong)*(uint *)(this + 0x18)) &&
                              ((ulong)((long)this_00 - *(long *)(this + 8)) <=
                               (ulong)*(uint *)(this + 0x18))) &&
                             ((*(uint *)(this + 0x38) <=
                               (uint)((int)*(undefined8 *)(this + 0x10) - (int)this_00) &&
                              (iVar10 = *(int *)(this + 0x1c) - *(uint *)(this + 0x38),
                              *(int *)(this + 0x1c) = iVar10, 0 < iVar10)))) {
LAB_00116e47:
                            *(char **)(this + 0x88) = pcVar4;
                            if ((*(ushort **)(this + 0x80) != (ushort *)&_hb_NullPool) &&
                               (pcVar4 != &_hb_NullPool)) {
                              uVar21 = **(ushort **)(this + 0x80);
                              *(undefined **)(this + 0x48) = &_hb_NullPool;
                              *(uint *)(this + 0x90) = (uint)(ushort)(uVar21 << 8 | uVar21 >> 8);
                              if (*(int *)(this + 0xdc) == -1) goto LAB_0011662d;
                              if (*(undefined **)(this + 0x50) != &_hb_NullPool) goto LAB_0011663d;
                            }
                            goto LAB_00116044;
                          }
                        }
                        else {
                          if (*pcVar4 != '\x03') {
                            *(undefined **)(this + 0x88) = &_hb_NullPool;
                            goto LAB_00116044;
                          }
                          cVar8 = CFF::
                                  FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>>
                                  ::sanitize(this_00,(hb_sanitize_context_t *)this,
                                             (uint)(ushort)(*(ushort *)pCVar13 << 8 |
                                                           *(ushort *)pCVar13 >> 8));
                          if (cVar8 != '\0') goto LAB_00116e47;
                        }
                      }
                    }
                  }
                  *(undefined **)(this + 0x88) = &_hb_NullPool;
                  lVar11 = *(long *)(this + 0x30);
                  goto LAB_00116048;
                }
                *(undefined **)(this + 0x48) = &_hb_NullPool;
                *(undefined **)(this + 0x80) = &_hb_NullPool;
                *(undefined **)(this + 0x88) = &_hb_NullPool;
LAB_0011662d:
                if (1 < *(int *)(this + 0xf0)) {
                  this_02 = (Encoding *)(puVar30 + *(int *)(this + 0xf0));
                  if (((ulong)*(uint *)(this + 0x18) < (ulong)((long)this_02 - *(long *)(this + 8)))
                     || (cVar8 = CFF::Encoding::sanitize(this_02,(hb_sanitize_context_t *)this),
                        cVar8 == '\0')) {
                    *(undefined **)(this + 0x48) = &_hb_NullPool;
                    lVar11 = *(long *)(this + 0x30);
                    goto LAB_00116048;
                  }
                  *(Encoding **)(this + 0x48) = this_02;
                  if (this_02 == (Encoding *)&_hb_NullPool) goto LAB_00116044;
                }
LAB_0011663d:
                puVar5 = *(ushort **)(this + 0x60);
                uVar21 = *puVar5 << 8 | *puVar5 >> 8;
                if (uVar21 != 0) {
                  bVar3 = (byte)puVar5[1];
                  uVar19 = (uVar21 + 1) * (uint)bVar3 + 2;
                  uVar16 = (ulong)uVar19;
                  if (bVar3 == 3) {
                    pbVar17 = (byte *)((long)puVar5 + (ulong)uVar21 * 3 + 3);
                    uVar16 = (ulong)((uint)*pbVar17 * 0x10000 + (uint)pbVar17[1] * 0x100 +
                                     (uint)pbVar17[2] + uVar19);
                    goto LAB_0011669e;
                  }
                  if (bVar3 < 4) {
                    if (bVar3 == 1) {
                      uVar16 = (ulong)(*(byte *)((long)puVar5 + (ulong)uVar21 + 3) + uVar19);
                    }
                    else if (bVar3 == 2) {
                      uVar21 = *(ushort *)((long)puVar5 + (ulong)uVar21 * 2 + 3);
                      uVar16 = (ulong)((ushort)(uVar21 << 8 | uVar21 >> 8) + uVar19);
                    }
                    goto LAB_0011669e;
                  }
                  if (bVar3 != 4) goto LAB_0011669e;
                  uVar22 = *(uint *)((long)puVar5 + (ulong)uVar21 * 4 + 3);
                  iVar10 = (uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                           uVar22 << 0x18) + uVar19;
                  uVar16 = (ulong)iVar10;
                  if (iVar10 != 0) goto LAB_0011669e;
LAB_001166bf:
                  *(undefined **)(this + 0x68) = &_hb_NullPool;
                  lVar11 = *(long *)(this + 0x30);
                  goto LAB_00116048;
                }
                uVar16 = 2;
LAB_0011669e:
                pCVar13 = (CFFIndex<OT::IntType<unsigned_short,2u>> *)(uVar16 + (long)puVar5);
                if (((ulong)*(uint *)(this + 0x18) < (ulong)((long)pCVar13 - *(long *)(this + 8)))
                   || (cVar8 = CFFIndex<OT::IntType<unsigned_short,2u>>::sanitize
                                         (pCVar13,(hb_sanitize_context_t *)this), cVar8 == '\0'))
                goto LAB_001166bf;
                *(CFFIndex<OT::IntType<unsigned_short,2u>> **)(this + 0x68) = pCVar13;
                if (pCVar13 != (CFFIndex<OT::IntType<unsigned_short,2u>> *)&_hb_NullPool) {
                  uVar21 = *(ushort *)pCVar13 << 8 | *(ushort *)pCVar13 >> 8;
                  if (uVar21 == 0) {
                    uVar16 = 2;
LAB_00116735:
                    pCVar13 = pCVar13 + uVar16;
                    if (((ulong)*(uint *)(this + 0x18) <
                         (ulong)((long)pCVar13 - *(long *)(this + 8))) ||
                       (cVar8 = CFFIndex<OT::IntType<unsigned_short,2u>>::sanitize
                                          (pCVar13,(hb_sanitize_context_t *)this), cVar8 == '\0'))
                    goto LAB_00116756;
                  }
                  else {
                    CVar2 = pCVar13[2];
                    uVar19 = (uVar21 + 1) * (uint)(byte)CVar2 + 2;
                    uVar16 = (ulong)uVar19;
                    if (CVar2 == (CFFIndex<OT::IntType<unsigned_short,2u>>)0x3) {
                      pCVar20 = pCVar13 + (ulong)uVar21 * 3 + 3;
                      uVar16 = (ulong)((uint)(byte)*pCVar20 * 0x10000 +
                                       (uint)(byte)pCVar20[1] * 0x100 + (uint)(byte)pCVar20[2] +
                                      uVar19);
                      goto LAB_00116735;
                    }
                    if ((byte)CVar2 < 4) {
                      if (CVar2 == (CFFIndex<OT::IntType<unsigned_short,2u>>)0x1) {
                        uVar16 = (ulong)((byte)pCVar13[(ulong)uVar21 + 3] + uVar19);
                      }
                      else if (CVar2 == (CFFIndex<OT::IntType<unsigned_short,2u>>)0x2) {
                        uVar16 = (ulong)((ushort)(*(ushort *)(pCVar13 + (ulong)uVar21 * 2 + 3) << 8
                                                 | *(ushort *)(pCVar13 + (ulong)uVar21 * 2 + 3) >> 8
                                                 ) + uVar19);
                      }
                      goto LAB_00116735;
                    }
                    if (CVar2 != (CFFIndex<OT::IntType<unsigned_short,2u>>)0x4) goto LAB_00116735;
                    uVar22 = *(uint *)(pCVar13 + (ulong)uVar21 * 4 + 3);
                    iVar10 = (uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                             uVar22 << 0x18) + uVar19;
                    if (iVar10 != 0) {
                      uVar16 = (ulong)iVar10;
                      goto LAB_00116735;
                    }
LAB_00116756:
                    pCVar13 = (CFFIndex<OT::IntType<unsigned_short,2u>> *)&_hb_NullPool;
                  }
                  *(CFFIndex<OT::IntType<unsigned_short,2u>> **)(this + 0x70) = pCVar13;
                  if (((*(int *)(this + 0xb0) == 0) ||
                      (pCVar13 = (CFFIndex<OT::IntType<unsigned_short,2u>> *)
                                 (puVar30 + *(int *)(this + 0xb0)),
                      (ulong)*(uint *)(this + 0x18) < (ulong)((long)pCVar13 - *(long *)(this + 8))))
                     || (cVar8 = CFFIndex<OT::IntType<unsigned_short,2u>>::sanitize
                                           (pCVar13,(hb_sanitize_context_t *)this), cVar8 == '\0'))
                  {
                    *(undefined **)(this + 0x78) = &_hb_NullPool;
                    lVar11 = *(long *)(this + 0x30);
                    goto LAB_00116048;
                  }
                  *(CFFIndex<OT::IntType<unsigned_short,2u>> **)(this + 0x78) = pCVar13;
                  if (((pCVar13 != (CFFIndex<OT::IntType<unsigned_short,2u>> *)&_hb_NullPool) &&
                      (uVar19 = (uint)(ushort)(*(ushort *)pCVar13 << 8 | *(ushort *)pCVar13 >> 8),
                      *(uint *)(this + 0x128) = uVar19, uVar19 == *(uint *)(this + 0x38))) &&
                     (cVar8 = hb_vector_t<CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>,false>
                              ::resize((hb_vector_t<CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>,false>
                                        *)(this + 0x118),*(int *)(this + 0x90),true,false),
                     cVar8 != '\0')) {
                    uVar19 = *(uint *)(this + 0x90);
                    if (uVar19 == 0) {
                      if (*(int *)(this + 0xdc) != -1) goto LAB_001160e1;
                      uVar22 = *(uint *)(this + 0x11c);
                      goto LAB_00116eaf;
                    }
                    uVar22 = *(uint *)(this + 0x11c);
                    lVar12 = 0;
                    uVar23 = 0;
                    do {
                      if (uVar23 < uVar22) {
                        puVar14 = (undefined4 *)(*(long *)(this + 0x120) + lVar12);
                      }
                      else {
                        _hb_blob_create_sub_blob = _hb_ot_color_palette_get_colors;
                        __hb_CrapPool = __hb_NullPool;
                        _strlen = _memcpy;
                        _malloc = _realloc;
                        _hb_face_get_upem = _hb_font_get_face;
                        puVar14 = (undefined4 *)&_hb_CrapPool;
                      }
                      uVar23 = uVar23 + 1;
                      *puVar14 = 0;
                      lVar12 = lVar12 + 0x28;
                      *(undefined8 *)(puVar14 + 2) = 0;
                      *(undefined8 *)(puVar14 + 4) = 0;
                      puVar14[6] = 0;
                      *(undefined **)(puVar14 + 8) = &_hb_NullPool;
                    } while (uVar23 != uVar19);
                    if (*(int *)(this + 0xdc) == -1) {
LAB_00116eaf:
                      if (uVar22 == 0) {
                        pcVar29 = (cff1_private_dict_values_base_t *)&_hb_CrapPool;
                        puVar14 = (undefined4 *)&_hb_NullPool;
                        puVar28 = (undefined4 *)&_hb_CrapPool;
                        for (lVar12 = 10; lVar12 != 0; lVar12 = lVar12 + -1) {
                          *puVar28 = *puVar14;
                          puVar14 = puVar14 + (ulong)bVar31 * -2 + 1;
                          puVar28 = puVar28 + (ulong)bVar31 * -2 + 1;
                        }
                      }
                      else {
                        pcVar29 = *(cff1_private_dict_values_base_t **)(this + 0x120);
                      }
                      if (((*(int *)(this + 0xfc) != 0) &&
                          (puVar30 = puVar30 + *(int *)(this + 0xfc),
                          (ulong)((long)puVar30 - *(long *)(this + 8)) <=
                          (ulong)*(uint *)(this + 0x18))) &&
                         ((uVar19 = *(uint *)(this + 0x100),
                          uVar19 <= (uint)((int)*(undefined8 *)(this + 0x10) - (int)puVar30) &&
                          ((iVar10 = *(int *)(this + 0x1c), *(uint *)(this + 0x1c) = iVar10 - uVar19
                           , 0 < (int)(iVar10 - uVar19) && (puVar30 != &_hb_NullPool)))))) {
                        local_1058 = 0;
                        pdVar18 = local_1050;
                        for (lVar12 = 0x201; lVar12 != 0; lVar12 = lVar12 + -1) {
                          *pdVar18 = 0.0;
                          pdVar18 = pdVar18 + (ulong)bVar31 * -2 + 1;
                        }
                        local_2098 = &local_1068;
                        *(undefined4 *)pcVar29 = 0;
                        *(undefined8 *)(pcVar29 + 8) = 0;
                        *(undefined8 *)(pcVar29 + 0x10) = 0;
                        *(undefined4 *)(pcVar29 + 0x18) = 0;
                        *(undefined **)(pcVar29 + 0x20) = &_hb_NullPool;
                        local_1068 = puVar30;
                        local_1060 = (ulong)uVar19;
                        cVar8 = CFF::
                                dict_interpreter_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>,CFF::interp_env_t<CFF::number_t>>
                                ::interpret((dict_interpreter_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>,CFF::interp_env_t<CFF::number_t>>
                                             *)&local_2098,pcVar29);
                        if (cVar8 != '\0') {
                          pSVar15 = CFF::
                                    StructAtOffsetOrNull<CFF::Subrs<OT::IntType<unsigned_short,2u>>>
                                              (puVar30,*(int *)(pcVar29 + 0x18),
                                               (hb_sanitize_context_t *)this);
                          *(Subrs **)(pcVar29 + 0x20) = pSVar15;
                          goto LAB_001160e1;
                        }
                      }
                    }
                    else {
                      local_20b4 = 0;
                      local_20b0 = 0;
                      while( true ) {
                        auVar32 = CFFIndex<OT::IntType<unsigned_short,2u>>::operator[]
                                            (*(CFFIndex<OT::IntType<unsigned_short,2u>> **)
                                              (this + 0x80),local_20b4);
                        if ((((ulong)*(uint *)(this + 0x18) <
                              (ulong)((long)auVar32._0_8_ - *(long *)(this + 8))) ||
                            ((uint)((int)*(undefined8 *)(this + 0x10) - auVar32._0_4_) <
                             auVar32._8_4_)) ||
                           (iVar10 = *(int *)(this + 0x1c) - auVar32._8_4_,
                           *(int *)(this + 0x1c) = iVar10, iVar10 < 1)) break;
                        local_1058 = 0;
                        pdVar18 = local_1050;
                        for (lVar12 = 0x201; lVar12 != 0; lVar12 = lVar12 + -1) {
                          *pdVar18 = 0.0;
                          pdVar18 = pdVar18 + (ulong)bVar31 * -2 + 1;
                        }
                        local_1060 = auVar32._8_8_ & 0xffffffff;
                        local_48 = 0;
                        local_1068 = auVar32._0_8_;
                        this_03 = (parsed_values_t<CFF::op_str_t> *)
                                  hb_vector_t<CFF::cff1_font_dict_values_t,false>::push
                                            ((hb_vector_t<CFF::cff1_font_dict_values_t,false> *)
                                             (this + 0x108));
                        uVar7 = _UNK_00121068;
                        uVar6 = __LC31;
                        if (*(int *)(this + 0x108) < 0) break;
                        *(undefined4 *)this_03 = 0;
                        *(undefined8 *)(this_03 + 8) = 0;
                        *(undefined8 *)(this_03 + 0x10) = 0;
                        *(undefined8 *)(this_03 + 0x18) = uVar6;
                        *(undefined8 *)(this_03 + 0x20) = uVar7;
                        uVar19 = 0;
LAB_0011692b:
                        uVar22 = uVar19 + 1;
                        uVar23 = (uint)local_1060;
                        if (uVar22 <= (uint)local_1060) {
                          do {
                            bVar3 = local_1068[uVar19];
                            uVar24 = (uint)bVar3;
                            local_1060 = CONCAT44(uVar22,(uint)local_1060);
                            if (bVar3 == 0xc) {
                              if (uVar23 < uVar19 + 2) {
                                uVar24 = 0xffff;
LAB_00116964:
                                CFF::dict_opset_t::process_op(uVar24,(interp_env_t *)&local_1068);
                                uVar23 = (uint)local_1060;
                                if (local_1058._4_4_ != 0) goto LAB_00116fa0;
                              }
                              else {
                                local_1060 = CONCAT44(uVar19 + 2,(uint)local_1060);
                                uVar24 = (byte)local_1068[uVar22] + 0x100;
                                if (uVar24 != 0x107) {
                                  if (uVar24 < 0x108) {
                                    if (uVar24 == 0x105) goto LAB_00116bf8;
                                  }
                                  else if (uVar24 == 0x126) {
                                    if (local_1058._4_4_ == 0) {
                                      __hb_CrapPool = __hb_NullPool;
                                      local_1058 = CONCAT71(local_1058._1_7_,1);
                                      pdVar18 = (double *)&_hb_CrapPool;
                                    }
                                    else {
                                      pdVar18 = local_1050 + (local_1058._4_4_ - 1);
                                    }
                                    iVar10 = (int)*pdVar18;
                                    if (iVar10 < 0) {
                                      local_1058 = CONCAT71(local_1058._1_7_,1);
                                      iVar10 = 0;
                                    }
                                    *(int *)(this_03 + 0x24) = iVar10;
                                    uVar24 = 0x126;
                                    local_1058 = (ulong)(uint)local_1058;
                                    goto LAB_00116991;
                                  }
                                  goto LAB_00116964;
                                }
LAB_00116bf8:
                                local_1058 = local_1058 & 0xffffffff;
                              }
LAB_00116991:
                              if (uVar23 < local_1060._4_4_) goto LAB_00116044;
                            }
                            else {
                              if (bVar3 != 0x12) goto LAB_00116964;
                              if (local_1058._4_4_ == 0) {
                                __hb_CrapPool = __hb_NullPool;
                                uVar19 = 0;
                                if ((int)__hb_NullPool < 0) goto LAB_00117016;
                                *(int *)(this_03 + 0x18) = (int)__hb_NullPool;
LAB_00117046:
                                __hb_CrapPool = __hb_NullPool;
                                local_1058 = CONCAT71(local_1058._1_7_,1);
                                pdVar18 = (double *)&_hb_CrapPool;
                              }
                              else {
                                uVar19 = local_1058._4_4_ - 1;
                                local_1058 = local_1058 & 0xffffffff;
                                iVar10 = (int)local_1050[uVar19];
                                if (iVar10 < 0) {
LAB_00117016:
                                  local_1058 = CONCAT71(local_1058._1_7_,1);
                                  iVar10 = 0;
                                }
                                *(int *)(this_03 + 0x18) = iVar10;
                                if (uVar19 == 0) goto LAB_00117046;
                                pdVar18 = local_1050 + (uVar19 - 1);
                              }
                              iVar10 = (int)*pdVar18;
                              if (iVar10 < 0) {
                                local_1058 = CONCAT71(local_1058._1_7_,1);
                                iVar10 = 0;
                              }
                              *(int *)(this_03 + 0x1c) = iVar10;
                              local_1058 = (ulong)(uint)local_1058;
                            }
                            if ((char)local_1058 != '\0') goto LAB_00116044;
                            local_2098 = (undefined **)0x0;
                            local_208c = 0;
                            local_2090 = 0xffff;
                            CFF::parsed_values_t<CFF::op_str_t>::add_op
                                      (this_03,uVar24,(byte_str_ref_t *)&local_1068,
                                       (op_str_t *)&local_2098);
                            uVar22 = local_1060._4_4_ + 1;
                            uVar23 = (uint)local_1060;
                            uVar19 = local_1060._4_4_;
                            if ((uint)local_1060 < uVar22) break;
                          } while( true );
                        }
                        if (local_20b4 < *(uint *)(this + 0x11c)) {
                          pcVar29 = (cff1_private_dict_values_base_t *)
                                    (local_20b0 + *(long *)(this + 0x120));
                        }
                        else {
                          pcVar29 = (cff1_private_dict_values_base_t *)&_hb_CrapPool;
                          puVar14 = (undefined4 *)&_hb_NullPool;
                          puVar28 = (undefined4 *)&_hb_CrapPool;
                          for (lVar12 = 10; lVar12 != 0; lVar12 = lVar12 + -1) {
                            *puVar28 = *puVar14;
                            puVar14 = puVar14 + (ulong)bVar31 * -2 + 1;
                            puVar28 = puVar28 + (ulong)bVar31 * -2 + 1;
                          }
                        }
                        if (((*(int *)(this_03 + 0x18) == 0) ||
                            (puVar1 = puVar30 + *(int *)(this_03 + 0x18),
                            (ulong)*(uint *)(this + 0x18) <
                            (ulong)((long)puVar1 - *(long *)(this + 8)))) ||
                           ((uVar19 = *(uint *)(this_03 + 0x1c),
                            (uint)((int)*(undefined8 *)(this + 0x10) - (int)puVar1) < uVar19 ||
                            ((iVar10 = *(int *)(this + 0x1c),
                             *(uint *)(this + 0x1c) = iVar10 - uVar19, (int)(iVar10 - uVar19) < 1 ||
                             (puVar1 == &_hb_NullPool)))))) break;
                        puVar27 = local_2070;
                        for (lVar12 = 0x201; lVar12 != 0; lVar12 = lVar12 + -1) {
                          *puVar27 = 0;
                          puVar27 = puVar27 + (ulong)bVar31 * -2 + 1;
                        }
                        local_2098 = &local_2088;
                        local_2078 = 0;
                        *(undefined8 *)(pcVar29 + 0x10) = 0;
                        *(undefined4 *)pcVar29 = 0;
                        *(undefined8 *)(pcVar29 + 8) = 0;
                        *(undefined4 *)(pcVar29 + 0x18) = 0;
                        *(undefined **)(pcVar29 + 0x20) = &_hb_NullPool;
                        local_2088 = puVar1;
                        local_2080 = (ulong)uVar19;
                        cVar8 = CFF::
                                dict_interpreter_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>,CFF::interp_env_t<CFF::number_t>>
                                ::interpret((dict_interpreter_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>,CFF::interp_env_t<CFF::number_t>>
                                             *)&local_2098,pcVar29);
                        if (cVar8 == '\0') break;
                        pSVar15 = CFF::
                                  StructAtOffsetOrNull<CFF::Subrs<OT::IntType<unsigned_short,2u>>>
                                            (puVar1,*(int *)(pcVar29 + 0x18),
                                             (hb_sanitize_context_t *)this);
                        local_20b4 = local_20b4 + 1;
                        *(Subrs **)(pcVar29 + 0x20) = pSVar15;
                        local_20b0 = local_20b0 + 0x28;
                        if (*(uint *)(this + 0x90) <= local_20b4) goto LAB_001160e1;
                      }
                    }
                  }
                }
              }
            }
            goto LAB_00116044;
          }
        }
        else {
          bVar3 = (byte)puVar5[1];
          uVar19 = (uVar21 + 1) * (uint)bVar3 + 2;
          if (bVar3 == 3) {
            pbVar17 = (byte *)((long)puVar5 + (ulong)uVar21 * 3 + 3);
            uVar16 = (ulong)((uint)*pbVar17 * 0x10000 + (uint)pbVar17[1] * 0x100 + (uint)pbVar17[2]
                            + uVar19);
            goto LAB_00116356;
          }
          if (bVar3 < 4) {
            if (bVar3 == 1) {
              uVar16 = (ulong)(*(byte *)((long)puVar5 + (ulong)uVar21 + 3) + uVar19);
            }
            else {
              if (bVar3 != 2) goto LAB_00116b15;
              uVar21 = *(ushort *)((long)puVar5 + (ulong)uVar21 * 2 + 3);
              uVar16 = (ulong)((ushort)(uVar21 << 8 | uVar21 >> 8) + uVar19);
            }
            goto LAB_00116356;
          }
          if (bVar3 != 4) {
LAB_00116b15:
            uVar16 = (ulong)uVar19;
            goto LAB_00116356;
          }
          uVar22 = *(uint *)((long)puVar5 + (ulong)uVar21 * 4 + 3);
          iVar10 = (uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                   uVar22 << 0x18) + uVar19;
          if (iVar10 != 0) {
            uVar16 = (ulong)iVar10;
            goto LAB_00116356;
          }
        }
        *(undefined **)(this + 0x60) = &_hb_NullPool;
        lVar11 = *(long *)(this + 0x30);
      }
    }
  }
LAB_00116048:
  hb_blob_destroy(lVar11);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (*(int *)(this + 0xa0) != 0) {
    free(*(void **)(this + 0xa8));
  }
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  if (*(int *)(this + 0x108) != 0) {
    uVar19 = *(uint *)(this + 0x10c);
    pvVar26 = *(void **)(this + 0x110);
    lVar12 = (long)pvVar26 + (ulong)uVar19 * 0x28 + -0x28;
    if (uVar19 != 0) {
      lVar11 = ((ulong)(uVar19 - 1) + 1) * -0x28 + lVar12;
      do {
        while (lVar25 = lVar12 + -0x28, *(int *)(lVar12 + 8) == 0) {
          lVar12 = lVar25;
          if (lVar11 == lVar25) goto LAB_0011622e;
        }
        free(*(void **)(lVar12 + 0x10));
        lVar12 = lVar25;
      } while (lVar11 != lVar25);
LAB_0011622e:
      pvVar26 = *(void **)(this + 0x110);
    }
    free(pvVar26);
  }
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  if (*(int *)(this + 0x118) != 0) {
    uVar19 = *(uint *)(this + 0x11c);
    pvVar26 = *(void **)(this + 0x120);
    lVar12 = (long)pvVar26 + (ulong)uVar19 * 0x28 + -0x28;
    if (uVar19 != 0) {
      lVar11 = ((ulong)(uVar19 - 1) + 1) * -0x28 + lVar12;
      do {
        while (lVar25 = lVar12 + -0x28, *(int *)(lVar12 + 8) == 0) {
          lVar12 = lVar25;
          if (lVar11 == lVar25) goto LAB_001161ce;
        }
        free(*(void **)(lVar12 + 0x10));
        lVar12 = lVar25;
      } while (lVar11 != lVar25);
LAB_001161ce:
      pvVar26 = *(void **)(this + 0x120);
    }
    free(pvVar26);
  }
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  hb_blob_destroy(*(undefined8 *)(this + 0x40));
  *(undefined8 *)(this + 0x40) = 0;
LAB_001160e1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
code_r0x00116496:
  uVar22 = (uint)(byte)local_1068[uVar16];
  local_1060 = CONCAT44(uVar19,(uint)local_1060);
  if (local_1068[uVar16] == 0xc) {
    uVar22 = (int)uVar16 + 2;
    if (auVar32._8_4_ < uVar22) {
      uVar22 = 0xffff;
    }
    else {
      local_1060 = CONCAT44(uVar22,(uint)local_1060);
      uVar22 = (byte)local_1068[uVar19] + 0x100;
    }
  }
  CFF::cff1_top_dict_opset_t::process_op
            (uVar22,(cff1_top_dict_interp_env_t *)&local_1068,
             (cff1_top_dict_values_t *)(this + 0x98));
  uVar16 = (ulong)local_1060._4_4_;
  auVar32._8_8_ = local_1060 & 0xffffffff;
  auVar32._0_8_ = local_1068;
  if (((uint)local_1060 < local_1060._4_4_) || ((char)local_1058 != '\0')) goto LAB_00116044;
  goto LAB_0011648b;
LAB_00116fa0:
  if (((uint)local_1060 < local_1060._4_4_) || (uVar19 = local_1060._4_4_, (char)local_1058 != '\0')
     ) goto LAB_00116044;
  goto LAB_0011692b;
}



/* hb_lazy_loader_t<OT::cff2_accelerator_t, hb_face_lazy_loader_t<OT::cff2_accelerator_t, 17u>,
   hb_face_t, 17u, OT::cff2_accelerator_t>::get_stored() const */

accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
* __thiscall
hb_lazy_loader_t<OT::cff2_accelerator_t,hb_face_lazy_loader_t<OT::cff2_accelerator_t,17u>,hb_face_t,17u,OT::cff2_accelerator_t>
::get_stored(hb_lazy_loader_t<OT::cff2_accelerator_t,hb_face_lazy_loader_t<OT::cff2_accelerator_t,17u>,hb_face_t,17u,OT::cff2_accelerator_t>
             *this)

{
  long lVar1;
  uint uVar2;
  hb_face_t *phVar3;
  accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
  *this_00;
  long lVar4;
  long lVar5;
  void *pvVar6;
  
  do {
    while( true ) {
      if (*(accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
            **)this !=
          (accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
           *)0x0) {
        return *(accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
                 **)this;
      }
      phVar3 = *(hb_face_t **)(this + -0x88);
      if (phVar3 == (hb_face_t *)0x0) goto LAB_00117241;
      this_00 = (accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
                 *)calloc(1,200);
      if (this_00 ==
          (accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
           *)0x0) break;
      OT::cff2::
      accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
      ::accelerator_templ_t(this_00,phVar3);
      LOCK();
      lVar1 = *(long *)this;
      if (lVar1 == 0) {
        *(accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
          **)this = this_00;
      }
      UNLOCK();
      if (lVar1 == 0) {
        return this_00;
      }
      if (this_00 !=
          (accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
           *)&_hb_NullPool) {
        hb_blob_destroy(*(undefined8 *)(this_00 + 0x30));
        *(undefined8 *)(this_00 + 0x30) = 0;
        *(undefined4 *)(this_00 + 0x18) = 0;
        *(undefined1 (*) [16])(this_00 + 8) = (undefined1  [16])0x0;
        if (*(int *)(this_00 + 0x50) != 0) {
          free(*(void **)(this_00 + 0x58));
        }
        *(undefined8 *)(this_00 + 0x50) = 0;
        *(undefined8 *)(this_00 + 0x58) = 0;
        if (*(int *)(this_00 + 0xa0) != 0) {
          uVar2 = *(uint *)(this_00 + 0xa4);
          pvVar6 = *(void **)(this_00 + 0xa8);
          lVar1 = (long)pvVar6 + (ulong)uVar2 * 0x28 + -0x28;
          if (uVar2 != 0) {
            lVar4 = lVar1;
            do {
              lVar5 = lVar4 + -0x28;
              if (*(int *)(lVar4 + 8) != 0) {
                free(*(void **)(lVar4 + 0x10));
              }
              lVar4 = lVar5;
            } while (lVar5 != ((ulong)(uVar2 - 1) + 1) * -0x28 + lVar1);
            pvVar6 = *(void **)(this_00 + 0xa8);
          }
          free(pvVar6);
        }
        *(undefined8 *)(this_00 + 0xa0) = 0;
        *(undefined8 *)(this_00 + 0xa8) = 0;
        if (*(int *)(this_00 + 0xb0) != 0) {
          uVar2 = *(uint *)(this_00 + 0xb4);
          pvVar6 = *(void **)(this_00 + 0xb8);
          lVar1 = (long)pvVar6 + (ulong)uVar2 * 0x30 + -0x30;
          if (uVar2 != 0) {
            lVar4 = lVar1;
            do {
              lVar5 = lVar4 + -0x30;
              if (*(int *)(lVar4 + 8) != 0) {
                free(*(void **)(lVar4 + 0x10));
              }
              lVar4 = lVar5;
            } while (((ulong)(uVar2 - 1) + 1) * -0x30 + lVar1 != lVar5);
            pvVar6 = *(void **)(this_00 + 0xb8);
          }
          free(pvVar6);
        }
        *(undefined8 *)(this_00 + 0xb0) = 0;
        *(undefined8 *)(this_00 + 0xb8) = 0;
        hb_blob_destroy(*(undefined8 *)(this_00 + 0x40));
        *(undefined8 *)(this_00 + 0x40) = 0;
        if (*(int *)(this_00 + 0xb0) != 0) {
          uVar2 = *(uint *)(this_00 + 0xb4);
          pvVar6 = *(void **)(this_00 + 0xb8);
          lVar1 = (long)pvVar6 + (ulong)uVar2 * 0x30 + -0x30;
          if (uVar2 != 0) {
            lVar4 = lVar1;
            do {
              lVar5 = lVar4 + -0x30;
              if (*(int *)(lVar4 + 8) != 0) {
                free(*(void **)(lVar4 + 0x10));
              }
              lVar4 = lVar5;
            } while (((ulong)(uVar2 - 1) + 1) * -0x30 + lVar1 != lVar5);
            pvVar6 = *(void **)(this_00 + 0xb8);
          }
          free(pvVar6);
        }
        if (*(int *)(this_00 + 0xa0) != 0) {
          uVar2 = *(uint *)(this_00 + 0xa4);
          pvVar6 = *(void **)(this_00 + 0xa8);
          lVar1 = (long)pvVar6 + (ulong)uVar2 * 0x28 + -0x28;
          if (uVar2 != 0) {
            lVar4 = lVar1;
            do {
              lVar5 = lVar4 + -0x28;
              if (*(int *)(lVar4 + 8) != 0) {
                free(*(void **)(lVar4 + 0x10));
              }
              lVar4 = lVar5;
            } while (lVar5 != ((ulong)(uVar2 - 1) + 1) * -0x28 + lVar1);
            pvVar6 = *(void **)(this_00 + 0xa8);
          }
          free(pvVar6);
        }
        if (*(int *)(this_00 + 0x50) != 0) {
          free(*(void **)(this_00 + 0x58));
        }
        if (*(long *)(this_00 + 0x30) != 0) {
          hb_blob_destroy();
        }
        free(this_00);
      }
    }
    LOCK();
    lVar1 = *(long *)this;
    if (lVar1 == 0) {
      *(undefined **)this = &_hb_NullPool;
    }
    UNLOCK();
  } while (lVar1 != 0);
LAB_00117241:
  return (accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
          *)&_hb_NullPool;
}



/* hb_lazy_loader_t<OT::cff1_accelerator_t, hb_face_lazy_loader_t<OT::cff1_accelerator_t, 16u>,
   hb_face_t, 16u, OT::cff1_accelerator_t>::get_stored() const */

accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
* __thiscall
hb_lazy_loader_t<OT::cff1_accelerator_t,hb_face_lazy_loader_t<OT::cff1_accelerator_t,16u>,hb_face_t,16u,OT::cff1_accelerator_t>
::get_stored(hb_lazy_loader_t<OT::cff1_accelerator_t,hb_face_lazy_loader_t<OT::cff1_accelerator_t,16u>,hb_face_t,16u,OT::cff1_accelerator_t>
             *this)

{
  long lVar1;
  uint uVar2;
  hb_face_t *phVar3;
  int *__ptr;
  accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
  *this_00;
  long lVar4;
  long lVar5;
  void *pvVar6;
  
  do {
    while( true ) {
      if (*(accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
            **)this !=
          (accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
           *)0x0) {
        return *(accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
                 **)this;
      }
      phVar3 = *(hb_face_t **)(this + -0x80);
      if (phVar3 == (hb_face_t *)0x0) goto LAB_001175a3;
      this_00 = (accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
                 *)calloc(1,0x138);
      if (this_00 ==
          (accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
           *)0x0) break;
      OT::cff1::
      accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
      ::accelerator_templ_t(this_00,phVar3);
      *(undefined8 *)(this_00 + 0x130) = 0;
      LOCK();
      lVar1 = *(long *)this;
      if (lVar1 == 0) {
        *(accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
          **)this = this_00;
      }
      UNLOCK();
      if (lVar1 == 0) {
        return this_00;
      }
      if (this_00 !=
          (accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
           *)&_hb_NullPool) {
        __ptr = *(int **)(this_00 + 0x130);
        if (__ptr != (int *)0x0) {
          if (*__ptr != 0) {
            free(*(void **)(__ptr + 2));
          }
          free(__ptr);
        }
        hb_blob_destroy(*(undefined8 *)(this_00 + 0x30));
        *(undefined8 *)(this_00 + 0x30) = 0;
        *(undefined4 *)(this_00 + 0x18) = 0;
        *(undefined1 (*) [16])(this_00 + 8) = (undefined1  [16])0x0;
        if (*(int *)(this_00 + 0xa0) != 0) {
          free(*(void **)(this_00 + 0xa8));
        }
        *(undefined8 *)(this_00 + 0xa0) = 0;
        *(undefined8 *)(this_00 + 0xa8) = 0;
        if (*(int *)(this_00 + 0x108) != 0) {
          uVar2 = *(uint *)(this_00 + 0x10c);
          pvVar6 = *(void **)(this_00 + 0x110);
          lVar1 = (long)pvVar6 + (ulong)uVar2 * 0x28 + -0x28;
          if (uVar2 != 0) {
            lVar4 = lVar1;
            do {
              lVar5 = lVar4 + -0x28;
              if (*(int *)(lVar4 + 8) != 0) {
                free(*(void **)(lVar4 + 0x10));
              }
              lVar4 = lVar5;
            } while (((ulong)(uVar2 - 1) + 1) * -0x28 + lVar1 != lVar5);
            pvVar6 = *(void **)(this_00 + 0x110);
          }
          free(pvVar6);
        }
        *(undefined8 *)(this_00 + 0x108) = 0;
        *(undefined8 *)(this_00 + 0x110) = 0;
        if (*(int *)(this_00 + 0x118) != 0) {
          uVar2 = *(uint *)(this_00 + 0x11c);
          pvVar6 = *(void **)(this_00 + 0x120);
          lVar1 = (long)pvVar6 + (ulong)uVar2 * 0x28 + -0x28;
          if (uVar2 != 0) {
            lVar4 = lVar1;
            do {
              lVar5 = lVar4 + -0x28;
              if (*(int *)(lVar4 + 8) != 0) {
                free(*(void **)(lVar4 + 0x10));
              }
              lVar4 = lVar5;
            } while (((ulong)(uVar2 - 1) + 1) * -0x28 + lVar1 != lVar5);
            pvVar6 = *(void **)(this_00 + 0x120);
          }
          free(pvVar6);
        }
        *(undefined8 *)(this_00 + 0x118) = 0;
        *(undefined8 *)(this_00 + 0x120) = 0;
        hb_blob_destroy(*(undefined8 *)(this_00 + 0x40));
        *(undefined8 *)(this_00 + 0x40) = 0;
        if (*(int *)(this_00 + 0x118) != 0) {
          uVar2 = *(uint *)(this_00 + 0x11c);
          pvVar6 = *(void **)(this_00 + 0x120);
          lVar1 = (long)pvVar6 + (ulong)uVar2 * 0x28 + -0x28;
          if (uVar2 != 0) {
            lVar4 = lVar1;
            do {
              lVar5 = lVar4 + -0x28;
              if (*(int *)(lVar4 + 8) != 0) {
                free(*(void **)(lVar4 + 0x10));
              }
              lVar4 = lVar5;
            } while (((ulong)(uVar2 - 1) + 1) * -0x28 + lVar1 != lVar5);
            pvVar6 = *(void **)(this_00 + 0x120);
          }
          free(pvVar6);
        }
        if (*(int *)(this_00 + 0x108) != 0) {
          uVar2 = *(uint *)(this_00 + 0x10c);
          pvVar6 = *(void **)(this_00 + 0x110);
          lVar1 = (long)pvVar6 + (ulong)uVar2 * 0x28 + -0x28;
          if (uVar2 != 0) {
            lVar4 = lVar1;
            do {
              lVar5 = lVar4 + -0x28;
              if (*(int *)(lVar4 + 8) != 0) {
                free(*(void **)(lVar4 + 0x10));
              }
              lVar4 = lVar5;
            } while (lVar5 != ((ulong)(uVar2 - 1) + 1) * -0x28 + lVar1);
            pvVar6 = *(void **)(this_00 + 0x110);
          }
          free(pvVar6);
        }
        if (*(int *)(this_00 + 0xa0) != 0) {
          free(*(void **)(this_00 + 0xa8));
        }
        if (*(long *)(this_00 + 0x30) != 0) {
          hb_blob_destroy();
        }
        free(this_00);
      }
    }
    LOCK();
    lVar1 = *(long *)this;
    if (lVar1 == 0) {
      *(undefined **)this = &_hb_NullPool;
    }
    UNLOCK();
  } while (lVar1 != 0);
LAB_001175a3:
  return (accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
          *)&_hb_NullPool;
}



/* OT::PaintLinearGradient<OT::NoVariable>::paint_glyph(OT::hb_paint_context_t*, unsigned int) const
    */

void __thiscall
OT::PaintLinearGradient<OT::NoVariable>::paint_glyph
          (PaintLinearGradient<OT::NoVariable> *this,hb_paint_context_t *param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long in_FS_OFFSET;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  PaintLinearGradient<OT::NoVariable> *local_98;
  code *local_90;
  hb_paint_context_t *local_88;
  code *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  long local_30;
  undefined8 extraout_XMM0_Qb;
  
  lVar7 = *(long *)(param_1 + 0x10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_38 = 0;
  iVar8 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  local_48 = (undefined1  [16])0x0;
  local_90 = ColorLine<OT::NoVariable>::static_get_color_stops;
  local_98 = (PaintLinearGradient<OT::NoVariable> *)&_hb_NullPool;
  if (iVar8 != 0) {
    local_98 = this + iVar8;
  }
  local_80 = ColorLine<OT::NoVariable>::static_get_extend;
  uVar1 = *(ushort *)(this + 0xe);
  local_88 = param_1;
  fVar10 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,5);
  uVar2 = *(ushort *)(this + 0xc);
  fVar11 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,4);
  uVar3 = *(ushort *)(this + 10);
  fVar12 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,3);
  uVar4 = *(ushort *)(this + 8);
  fVar13 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,2);
  uVar5 = *(ushort *)(this + 6);
  fVar14 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,1);
  uVar6 = *(ushort *)(this + 4);
  auVar15._0_8_ =
       ItemVarStoreInstancer::operator()(*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,0);
  auVar15._8_8_ = extraout_XMM0_Qb;
  lVar9 = *(long *)(lVar7 + 0x80);
  auVar16._4_12_ = auVar15._4_12_;
  auVar16._0_4_ = (float)auVar15._0_8_ + (float)(int)(short)(uVar6 << 8 | uVar6 >> 8);
  if (lVar9 != 0) {
    lVar9 = *(long *)(lVar9 + 0x40);
  }
  (**(code **)(lVar7 + 0x50))
            (auVar16._0_8_,(float)(int)(short)(uVar5 << 8 | uVar5 >> 8) + fVar14,
             (float)(int)(short)(uVar4 << 8 | uVar4 >> 8) + fVar13,
             (float)(int)(short)(uVar3 << 8 | uVar3 >> 8) + fVar12,
             (float)(int)(short)(uVar2 << 8 | uVar2 >> 8) + fVar11,
             (float)(int)(short)(uVar1 << 8 | uVar1 >> 8) + fVar10,lVar7,
             *(undefined8 *)(param_1 + 0x18),&local_98,lVar9);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OT::PaintLinearGradient<OT::Variable>::paint_glyph(OT::hb_paint_context_t*, unsigned int) const
    */

void __thiscall
OT::PaintLinearGradient<OT::Variable>::paint_glyph
          (PaintLinearGradient<OT::Variable> *this,hb_paint_context_t *param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long in_FS_OFFSET;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  PaintLinearGradient<OT::Variable> *local_98;
  code *local_90;
  hb_paint_context_t *local_88;
  code *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  long local_30;
  undefined8 extraout_XMM0_Qb;
  
  lVar7 = *(long *)(param_1 + 0x10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_38 = 0;
  iVar8 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  local_48 = (undefined1  [16])0x0;
  local_90 = ColorLine<OT::Variable>::static_get_color_stops;
  local_98 = (PaintLinearGradient<OT::Variable> *)&_hb_NullPool;
  if (iVar8 != 0) {
    local_98 = this + iVar8;
  }
  local_80 = ColorLine<OT::Variable>::static_get_extend;
  uVar1 = *(ushort *)(this + 0xe);
  local_88 = param_1;
  fVar10 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,5);
  uVar2 = *(ushort *)(this + 0xc);
  fVar11 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,4);
  uVar3 = *(ushort *)(this + 10);
  fVar12 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,3);
  uVar4 = *(ushort *)(this + 8);
  fVar13 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,2);
  uVar5 = *(ushort *)(this + 6);
  fVar14 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,1);
  uVar6 = *(ushort *)(this + 4);
  auVar15._0_8_ =
       ItemVarStoreInstancer::operator()(*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,0);
  auVar15._8_8_ = extraout_XMM0_Qb;
  lVar9 = *(long *)(lVar7 + 0x80);
  auVar16._4_12_ = auVar15._4_12_;
  auVar16._0_4_ = (float)auVar15._0_8_ + (float)(int)(short)(uVar6 << 8 | uVar6 >> 8);
  if (lVar9 != 0) {
    lVar9 = *(long *)(lVar9 + 0x40);
  }
  (**(code **)(lVar7 + 0x50))
            (auVar16._0_8_,(float)(int)(short)(uVar5 << 8 | uVar5 >> 8) + fVar14,
             (float)(int)(short)(uVar4 << 8 | uVar4 >> 8) + fVar13,
             (float)(int)(short)(uVar3 << 8 | uVar3 >> 8) + fVar12,
             (float)(int)(short)(uVar2 << 8 | uVar2 >> 8) + fVar11,
             (float)(int)(short)(uVar1 << 8 | uVar1 >> 8) + fVar10,lVar7,
             *(undefined8 *)(param_1 + 0x18),&local_98,lVar9);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OT::PaintRadialGradient<OT::NoVariable>::paint_glyph(OT::hb_paint_context_t*, unsigned int) const
    */

void __thiscall
OT::PaintRadialGradient<OT::NoVariable>::paint_glyph
          (PaintRadialGradient<OT::NoVariable> *this,hb_paint_context_t *param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long in_FS_OFFSET;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  PaintRadialGradient<OT::NoVariable> *local_98;
  code *local_90;
  hb_paint_context_t *local_88;
  code *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  long local_30;
  undefined8 extraout_XMM0_Qb;
  
  lVar7 = *(long *)(param_1 + 0x10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_38 = 0;
  iVar8 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  local_48 = (undefined1  [16])0x0;
  local_90 = ColorLine<OT::NoVariable>::static_get_color_stops;
  local_98 = (PaintRadialGradient<OT::NoVariable> *)&_hb_NullPool;
  if (iVar8 != 0) {
    local_98 = this + iVar8;
  }
  local_80 = ColorLine<OT::NoVariable>::static_get_extend;
  uVar1 = *(ushort *)(this + 0xe);
  local_88 = param_1;
  fVar10 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,5);
  uVar2 = *(ushort *)(this + 0xc);
  fVar11 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,4);
  uVar3 = *(ushort *)(this + 10);
  fVar12 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,3);
  uVar4 = *(ushort *)(this + 8);
  fVar13 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,2);
  uVar5 = *(ushort *)(this + 6);
  fVar14 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,1);
  uVar6 = *(ushort *)(this + 4);
  auVar15._0_8_ =
       ItemVarStoreInstancer::operator()(*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,0);
  auVar15._8_8_ = extraout_XMM0_Qb;
  lVar9 = *(long *)(lVar7 + 0x80);
  auVar16._4_12_ = auVar15._4_12_;
  auVar16._0_4_ = (float)auVar15._0_8_ + (float)(int)(short)(uVar6 << 8 | uVar6 >> 8);
  if (lVar9 != 0) {
    lVar9 = *(long *)(lVar9 + 0x48);
  }
  (**(code **)(lVar7 + 0x58))
            (auVar16._0_8_,(float)(int)(short)(uVar5 << 8 | uVar5 >> 8) + fVar14,
             (float)(ushort)(uVar4 << 8 | uVar4 >> 8) + fVar13,
             (float)(int)(short)(uVar3 << 8 | uVar3 >> 8) + fVar12,
             (float)(int)(short)(uVar2 << 8 | uVar2 >> 8) + fVar11,
             (float)(ushort)(uVar1 << 8 | uVar1 >> 8) + fVar10,lVar7,*(undefined8 *)(param_1 + 0x18)
             ,&local_98,lVar9);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OT::PaintRadialGradient<OT::Variable>::paint_glyph(OT::hb_paint_context_t*, unsigned int) const
    */

void __thiscall
OT::PaintRadialGradient<OT::Variable>::paint_glyph
          (PaintRadialGradient<OT::Variable> *this,hb_paint_context_t *param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long in_FS_OFFSET;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  PaintRadialGradient<OT::Variable> *local_98;
  code *local_90;
  hb_paint_context_t *local_88;
  code *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  long local_30;
  undefined8 extraout_XMM0_Qb;
  
  lVar7 = *(long *)(param_1 + 0x10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_38 = 0;
  iVar8 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  local_48 = (undefined1  [16])0x0;
  local_90 = ColorLine<OT::Variable>::static_get_color_stops;
  local_98 = (PaintRadialGradient<OT::Variable> *)&_hb_NullPool;
  if (iVar8 != 0) {
    local_98 = this + iVar8;
  }
  local_80 = ColorLine<OT::Variable>::static_get_extend;
  uVar1 = *(ushort *)(this + 0xe);
  local_88 = param_1;
  fVar10 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,5);
  uVar2 = *(ushort *)(this + 0xc);
  fVar11 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,4);
  uVar3 = *(ushort *)(this + 10);
  fVar12 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,3);
  uVar4 = *(ushort *)(this + 8);
  fVar13 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,2);
  uVar5 = *(ushort *)(this + 6);
  fVar14 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,1);
  uVar6 = *(ushort *)(this + 4);
  auVar15._0_8_ =
       ItemVarStoreInstancer::operator()(*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,0);
  auVar15._8_8_ = extraout_XMM0_Qb;
  lVar9 = *(long *)(lVar7 + 0x80);
  auVar16._4_12_ = auVar15._4_12_;
  auVar16._0_4_ = (float)auVar15._0_8_ + (float)(int)(short)(uVar6 << 8 | uVar6 >> 8);
  if (lVar9 != 0) {
    lVar9 = *(long *)(lVar9 + 0x48);
  }
  (**(code **)(lVar7 + 0x58))
            (auVar16._0_8_,(float)(int)(short)(uVar5 << 8 | uVar5 >> 8) + fVar14,
             (float)(ushort)(uVar4 << 8 | uVar4 >> 8) + fVar13,
             (float)(int)(short)(uVar3 << 8 | uVar3 >> 8) + fVar12,
             (float)(int)(short)(uVar2 << 8 | uVar2 >> 8) + fVar11,
             (float)(ushort)(uVar1 << 8 | uVar1 >> 8) + fVar10,lVar7,*(undefined8 *)(param_1 + 0x18)
             ,&local_98,lVar9);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OT::PaintSweepGradient<OT::NoVariable>::paint_glyph(OT::hb_paint_context_t*, unsigned int) const
    */

void __thiscall
OT::PaintSweepGradient<OT::NoVariable>::paint_glyph
          (PaintSweepGradient<OT::NoVariable> *this,hb_paint_context_t *param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long in_FS_OFFSET;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  PaintSweepGradient<OT::NoVariable> *local_98;
  code *local_90;
  hb_paint_context_t *local_88;
  code *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  long local_30;
  undefined8 extraout_XMM0_Qb;
  
  lVar3 = *(long *)(param_1 + 0x10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_38 = 0;
  iVar4 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  local_48 = (undefined1  [16])0x0;
  local_98 = (PaintSweepGradient<OT::NoVariable> *)&_hb_NullPool;
  if (iVar4 != 0) {
    local_98 = this + iVar4;
  }
  local_90 = ColorLine<OT::NoVariable>::static_get_color_stops;
  local_80 = ColorLine<OT::NoVariable>::static_get_extend;
  local_88 = param_1;
  ItemVarStoreInstancer::operator()(*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,3);
  ItemVarStoreInstancer::operator()(*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,2);
  uVar1 = *(ushort *)(this + 6);
  fVar6 = (float)ItemVarStoreInstancer::operator()
                           (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,1);
  uVar2 = *(ushort *)(this + 4);
  auVar7._0_8_ = ItemVarStoreInstancer::operator()
                           (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,0);
  auVar7._8_8_ = extraout_XMM0_Qb;
  lVar5 = *(long *)(lVar3 + 0x80);
  auVar8._4_12_ = auVar7._4_12_;
  auVar8._0_4_ = (float)auVar7._0_8_ + (float)(int)(short)(uVar2 << 8 | uVar2 >> 8);
  if (lVar5 != 0) {
    lVar5 = *(long *)(lVar5 + 0x50);
  }
  (**(code **)(lVar3 + 0x60))
            (auVar8._0_8_,(float)(int)(short)(uVar1 << 8 | uVar1 >> 8) + fVar6,lVar3,
             *(undefined8 *)(param_1 + 0x18),&local_98,lVar5);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OT::PaintSweepGradient<OT::Variable>::paint_glyph(OT::hb_paint_context_t*, unsigned int) const */

void __thiscall
OT::PaintSweepGradient<OT::Variable>::paint_glyph
          (PaintSweepGradient<OT::Variable> *this,hb_paint_context_t *param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long in_FS_OFFSET;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  PaintSweepGradient<OT::Variable> *local_98;
  code *local_90;
  hb_paint_context_t *local_88;
  code *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  long local_30;
  undefined8 extraout_XMM0_Qb;
  
  lVar3 = *(long *)(param_1 + 0x10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_38 = 0;
  iVar4 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  local_48 = (undefined1  [16])0x0;
  local_98 = (PaintSweepGradient<OT::Variable> *)&_hb_NullPool;
  if (iVar4 != 0) {
    local_98 = this + iVar4;
  }
  local_90 = ColorLine<OT::Variable>::static_get_color_stops;
  local_80 = ColorLine<OT::Variable>::static_get_extend;
  local_88 = param_1;
  ItemVarStoreInstancer::operator()(*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,3);
  ItemVarStoreInstancer::operator()(*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,2);
  uVar1 = *(ushort *)(this + 6);
  fVar6 = (float)ItemVarStoreInstancer::operator()
                           (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,1);
  uVar2 = *(ushort *)(this + 4);
  auVar7._0_8_ = ItemVarStoreInstancer::operator()
                           (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,0);
  auVar7._8_8_ = extraout_XMM0_Qb;
  lVar5 = *(long *)(lVar3 + 0x80);
  auVar8._4_12_ = auVar7._4_12_;
  auVar8._0_4_ = (float)auVar7._0_8_ + (float)(int)(short)(uVar2 << 8 | uVar2 >> 8);
  if (lVar5 != 0) {
    lVar5 = *(long *)(lVar5 + 0x50);
  }
  (**(code **)(lVar3 + 0x60))
            (auVar8._0_8_,(float)(int)(short)(uVar1 << 8 | uVar1 >> 8) + fVar6,lVar3,
             *(undefined8 *)(param_1 + 0x18),&local_98,lVar5);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::PaintColrLayers::paint_glyph(OT::hb_paint_context_t*) const */

void __thiscall OT::PaintColrLayers::paint_glyph(PaintColrLayers *this,hb_paint_context_t *param_1)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  Paint *this_00;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  
  puVar15 = (uint *)&_hb_NullPool;
  uVar5 = *(uint *)(*(long *)(param_1 + 8) + 0x12);
  if (uVar5 != 0) {
    puVar15 = (uint *)(*(long *)(param_1 + 8) +
                      (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                             uVar5 << 0x18));
  }
  uVar5 = *(uint *)(this + 2);
  uVar12 = (uint)(byte)this[1];
  uVar7 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  if (uVar7 < uVar12 + uVar7) {
    uVar14 = uVar7 * -0x61c8864f;
    puVar13 = puVar15 + (ulong)uVar7 + 1;
    do {
      lVar8 = *(long *)(param_1 + 0x90);
      uVar10 = *(uint *)(param_1 + 0x88);
      if (lVar8 != 0) {
        uVar6 = (ulong)(uVar14 & 0x3fffffff) % (ulong)uVar10;
        puVar4 = (uint *)(lVar8 + uVar6 * 0xc);
        bVar1 = (byte)puVar4[1];
        if ((bVar1 & 2) != 0) {
          iVar11 = 0;
          do {
            if (*puVar4 == uVar7) {
              if ((bVar1 & 1) != 0) goto LAB_0011ae70;
              break;
            }
            iVar11 = iVar11 + 1;
            uVar6 = (ulong)((int)uVar6 + iVar11 & *(uint *)(param_1 + 0x84));
            puVar4 = (uint *)(lVar8 + uVar6 * 0xc);
            bVar1 = (byte)puVar4[1];
          } while ((bVar1 & 2) != 0);
        }
      }
      if (param_1[0x78] != (hb_paint_context_t)0x0) {
        uVar5 = *(uint *)(param_1 + 0x80);
        if (*(uint *)(param_1 + 0x84) <= (uVar5 >> 1) + uVar5) {
          cVar2 = hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                            ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)(param_1 + 0x68),0);
          if (cVar2 == '\0') goto LAB_0011af92;
          lVar8 = *(long *)(param_1 + 0x90);
          uVar10 = *(uint *)(param_1 + 0x88);
          uVar5 = *(uint *)(param_1 + 0x80);
        }
        uVar12 = _minus_1;
        uVar6 = (ulong)(uVar14 & 0x3fffffff) % (ulong)uVar10;
        iVar11 = *(int *)(param_1 + 0x7c);
        lVar3 = uVar6 * 0xc;
        puVar4 = (uint *)(lVar8 + lVar3);
        bVar1 = (byte)puVar4[1];
        if ((bVar1 & 2) == 0) {
          *puVar4 = uVar7;
          puVar4[2] = uVar12;
          puVar4[1] = uVar14 * 4 + 3;
          *(uint *)(param_1 + 0x80) = uVar5 + 1;
          *(int *)(param_1 + 0x7c) = iVar11 + 1;
        }
        else {
          uVar9 = 0;
          uVar10 = 0xffffffff;
          do {
            if (uVar7 == *puVar4) {
              if (uVar10 != 0xffffffff) goto LAB_0011af41;
              goto LAB_0011af4c;
            }
            if ((uVar10 == 0xffffffff) && ((bVar1 & 1) == 0)) {
              uVar10 = (uint)uVar6;
            }
            uVar9 = uVar9 + 1;
            uVar6 = (ulong)((uint)uVar6 + uVar9 & *(uint *)(param_1 + 0x84));
            lVar3 = uVar6 * 0xc;
            puVar4 = (uint *)(lVar8 + lVar3);
            bVar1 = (byte)puVar4[1];
          } while ((bVar1 & 2) != 0);
          if (uVar10 == 0xffffffff) {
LAB_0011b0dd:
            uVar5 = uVar5 + 1;
          }
          else {
LAB_0011af41:
            lVar3 = (ulong)uVar10 * 0xc;
LAB_0011af4c:
            puVar4 = (uint *)(lVar3 + lVar8);
            if (((byte)puVar4[1] & 2) == 0) goto LAB_0011b0dd;
            iVar11 = iVar11 - ((byte)puVar4[1] & 1);
          }
          *puVar4 = uVar7;
          puVar4[1] = uVar14 * 4 + 3;
          puVar4[2] = uVar12;
          *(uint *)(param_1 + 0x80) = uVar5;
          *(int *)(param_1 + 0x7c) = iVar11 + 1;
          if ((*(ushort *)(param_1 + 0x7a) < uVar9) && (*(uint *)(param_1 + 0x84) < uVar5 << 3)) {
            hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                      ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)(param_1 + 0x68),
                       *(uint *)(param_1 + 0x84) - 8);
          }
        }
      }
LAB_0011af92:
      uVar5 = *puVar15;
      puVar4 = (uint *)&_hb_NullPool;
      if (uVar7 < (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18))
      {
        puVar4 = puVar13;
      }
      uVar5 = *puVar4;
      this_00 = (Paint *)&_hb_NullPool;
      if (uVar5 != 0) {
        this_00 = (Paint *)((long)puVar15 +
                           (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                                  uVar5 << 0x18));
      }
      lVar8 = *(long *)(param_1 + 0x10);
      lVar3 = *(long *)(lVar8 + 0x80);
      if (lVar3 != 0) {
        lVar3 = *(long *)(lVar3 + 0x58);
      }
      (**(code **)(lVar8 + 0x68))(lVar8,*(undefined8 *)(param_1 + 0x18),lVar3);
      if ((0 < *(int *)(param_1 + 0x98)) && (0 < *(int *)(param_1 + 0x9c))) {
        *(ulong *)(param_1 + 0x98) =
             CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) +
                      (int)((ulong)_LC37 >> 0x20),(int)*(undefined8 *)(param_1 + 0x98) + (int)_LC37)
        ;
        Paint::dispatch<OT::hb_paint_context_t>(this_00,param_1);
        *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
      }
      (**(code **)(*(long *)(param_1 + 0x10) + 0x70))
                (*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),3);
      lVar8 = *(long *)(param_1 + 0x90);
      if (lVar8 != 0) {
        iVar11 = 0;
        uVar6 = (ulong)(uVar14 & 0x3fffffff) % (ulong)*(uint *)(param_1 + 0x88);
        puVar4 = (uint *)(lVar8 + uVar6 * 0xc);
        bVar1 = (byte)puVar4[1];
        while ((bVar1 & 2) != 0) {
          if (uVar7 == *puVar4) {
            if ((bVar1 & 1) != 0) {
              *(byte *)(puVar4 + 1) = (byte)puVar4[1] & 0xfe;
              uVar5 = *(uint *)(this + 2);
              *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
              uVar12 = (uint)(byte)this[1];
              goto LAB_0011ae70;
            }
            break;
          }
          iVar11 = iVar11 + 1;
          uVar6 = (ulong)((int)uVar6 + iVar11 & *(uint *)(param_1 + 0x84));
          puVar4 = (uint *)(lVar8 + uVar6 * 0xc);
          bVar1 = (byte)puVar4[1];
        }
      }
      uVar5 = *(uint *)(this + 2);
      uVar12 = (uint)(byte)this[1];
LAB_0011ae70:
      uVar7 = uVar7 + 1;
      uVar14 = uVar14 + 0x9e3779b1;
      puVar13 = puVar13 + 1;
    } while (uVar7 < (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                     uVar5 << 0x18) + uVar12);
  }
  return;
}



/* OT::PaintTranslate::paint_glyph(OT::hb_paint_context_t*, unsigned int) const */

void __thiscall
OT::PaintTranslate::paint_glyph(PaintTranslate *this,hb_paint_context_t *param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  Paint *this_00;
  float fVar8;
  float fVar9;
  
  uVar1 = *(ushort *)(this + 4);
  fVar8 = (float)ItemVarStoreInstancer::operator()
                           (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,0);
  uVar2 = *(ushort *)(this + 6);
  fVar9 = (float)ItemVarStoreInstancer::operator()
                           (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,1);
  if (((float)(int)(short)(uVar1 << 8 | uVar1 >> 8) + fVar8 != 0.0) ||
     (bVar4 = false, (float)(int)(short)(uVar2 << 8 | uVar2 >> 8) + fVar9 != 0.0)) {
    lVar3 = *(long *)(param_1 + 0x10);
    plVar6 = *(long **)(lVar3 + 0x80);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
    }
    bVar4 = true;
    (**(code **)(lVar3 + 0x10))(lVar3,*(undefined8 *)(param_1 + 0x18),plVar6);
  }
  iVar5 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  this_00 = (Paint *)&_hb_NullPool;
  if (iVar5 != 0) {
    this_00 = (Paint *)(this + iVar5);
  }
  if ((0 < *(int *)(param_1 + 0x98)) && (0 < *(int *)(param_1 + 0x9c))) {
    *(ulong *)(param_1 + 0x98) =
         CONCAT44(_LC37._4_4_ + (int)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20),
                  (int)_LC37 + (int)*(undefined8 *)(param_1 + 0x98));
    Paint::dispatch<OT::hb_paint_context_t>(this_00,param_1);
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  }
  if (bVar4) {
    lVar3 = *(long *)(param_1 + 0x10);
    lVar7 = *(long *)(lVar3 + 0x80);
    if (lVar7 != 0) {
      lVar7 = *(long *)(lVar7 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x0011b2fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x18))(lVar3,*(undefined8 *)(param_1 + 0x18),lVar7);
    return;
  }
  return;
}



/* OT::PaintScale::paint_glyph(OT::hb_paint_context_t*, unsigned int) const */

void __thiscall
OT::PaintScale::paint_glyph(PaintScale *this,hb_paint_context_t *param_1,uint param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  Paint *this_00;
  float fVar6;
  float fVar7;
  
  fVar6 = (float)ItemVarStoreInstancer::operator()
                           (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,0);
  fVar7 = ((float)(int)(short)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8) + fVar6) *
          _LC6;
  fVar6 = (float)ItemVarStoreInstancer::operator()
                           (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,1);
  if ((fVar7 != _LC3) ||
     (bVar2 = false,
     ((float)(int)(short)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8) + fVar6) * _LC6
     != _LC3)) {
    lVar1 = *(long *)(param_1 + 0x10);
    plVar4 = *(long **)(lVar1 + 0x80);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)*plVar4;
    }
    bVar2 = true;
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x18),plVar4);
  }
  iVar3 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  this_00 = (Paint *)&_hb_NullPool;
  if (iVar3 != 0) {
    this_00 = (Paint *)(this + iVar3);
  }
  if ((0 < *(int *)(param_1 + 0x98)) && (0 < *(int *)(param_1 + 0x9c))) {
    *(ulong *)(param_1 + 0x98) =
         CONCAT44(_LC37._4_4_ + (int)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20),
                  (int)_LC37 + (int)*(undefined8 *)(param_1 + 0x98));
    Paint::dispatch<OT::hb_paint_context_t>(this_00,param_1);
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  }
  if (bVar2) {
    lVar1 = *(long *)(param_1 + 0x10);
    lVar5 = *(long *)(lVar1 + 0x80);
    if (lVar5 != 0) {
      lVar5 = *(long *)(lVar5 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x0011b484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(lVar1,*(undefined8 *)(param_1 + 0x18),lVar5);
    return;
  }
  return;
}



/* OT::PaintSkew::paint_glyph(OT::hb_paint_context_t*, unsigned int) const */

void __thiscall OT::PaintSkew::paint_glyph(PaintSkew *this,hb_paint_context_t *param_1,uint param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  Paint *this_00;
  float fVar6;
  float fVar7;
  
  fVar6 = (float)ItemVarStoreInstancer::operator()
                           (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,0);
  fVar7 = ((float)(int)(short)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8) + fVar6) *
          _LC6;
  fVar6 = (float)ItemVarStoreInstancer::operator()
                           (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,1);
  fVar6 = ((float)(int)(short)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8) + fVar6) *
          _LC6;
  if ((fVar7 != 0.0) || (bVar2 = false, fVar6 != 0.0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    tanf(_LC35 * (float)((uint)fVar7 ^ _LC38));
    tanf(_LC35 * fVar6);
    plVar4 = *(long **)(lVar1 + 0x80);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)*plVar4;
    }
    bVar2 = true;
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x18),plVar4);
  }
  iVar3 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  this_00 = (Paint *)&_hb_NullPool;
  if (iVar3 != 0) {
    this_00 = (Paint *)(this + iVar3);
  }
  if ((0 < *(int *)(param_1 + 0x98)) && (0 < *(int *)(param_1 + 0x9c))) {
    *(ulong *)(param_1 + 0x98) =
         CONCAT44(_LC37._4_4_ + (int)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20),
                  (int)_LC37 + (int)*(undefined8 *)(param_1 + 0x98));
    Paint::dispatch<OT::hb_paint_context_t>(this_00,param_1);
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  }
  if (bVar2) {
    lVar1 = *(long *)(param_1 + 0x10);
    lVar5 = *(long *)(lVar1 + 0x80);
    if (lVar5 != 0) {
      lVar5 = *(long *)(lVar5 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x0011b65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(lVar1,*(undefined8 *)(param_1 + 0x18),lVar5);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::PaintGlyph::paint_glyph(OT::hb_paint_context_t*) const */

void __thiscall OT::PaintGlyph::paint_glyph(PaintGlyph *this,hb_paint_context_t *param_1)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  Paint *this_00;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar7 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(uint *)(*(long *)(lVar1 + 0x20) + 0x14);
  if (uVar5 == 0) {
    uVar5 = hb_face_t::load_upem();
  }
  auVar8._4_12_ = SUB1612((undefined1  [16])0x0,4);
  iVar4 = *(int *)(lVar1 + 0x28);
  fVar3 = (float)uVar5;
  if (iVar4 != 0) {
    fVar3 = (float)iVar4;
  }
  plVar6 = *(long **)(lVar7 + 0x80);
  auVar8._0_4_ = (float)uVar5 / (float)(int)fVar3;
  if (plVar6 != (long *)0x0) {
    plVar6 = (long *)*plVar6;
  }
  (**(code **)(lVar7 + 0x10))(auVar8._0_8_,lVar7,uVar2,plVar6);
  lVar1 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar1 + 0x80);
  if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 0x18);
  }
  (**(code **)(lVar1 + 0x28))
            (lVar1,*(undefined8 *)(param_1 + 0x18),
             *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8,*(undefined8 *)(param_1 + 0x20)
             ,lVar7);
  lVar1 = *(long *)(param_1 + 0x20);
  lVar7 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(uint *)(*(long *)(lVar1 + 0x20) + 0x14);
  if (uVar5 == 0) {
    uVar5 = hb_face_t::load_upem();
  }
  plVar6 = *(long **)(lVar7 + 0x80);
  auVar9._4_12_ = SUB1612((undefined1  [16])0x0,4);
  auVar9._0_4_ = (float)*(int *)(lVar1 + 0x28) / (float)uVar5;
  if (plVar6 != (long *)0x0) {
    plVar6 = (long *)*plVar6;
  }
  (**(code **)(lVar7 + 0x10))(auVar9._0_8_,lVar7,uVar2,plVar6);
  iVar4 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  this_00 = (Paint *)&_hb_NullPool;
  if (iVar4 != 0) {
    this_00 = (Paint *)(this + iVar4);
  }
  if ((0 < *(int *)(param_1 + 0x98)) && (0 < *(int *)(param_1 + 0x9c))) {
    *(ulong *)(param_1 + 0x98) =
         CONCAT44(_LC37._4_4_ + (int)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20),
                  (int)_LC37 + (int)*(undefined8 *)(param_1 + 0x98));
    Paint::dispatch<OT::hb_paint_context_t>(this_00,param_1);
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar1 + 0x80);
  if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 8);
  }
  (**(code **)(lVar1 + 0x18))(lVar1,*(undefined8 *)(param_1 + 0x18),lVar7);
  lVar1 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar1 + 0x80);
  if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 0x28);
  }
  (**(code **)(lVar1 + 0x38))(lVar1,*(undefined8 *)(param_1 + 0x18),lVar7);
  lVar1 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar1 + 0x80);
  if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0011b88a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x18))(lVar1,*(undefined8 *)(param_1 + 0x18),lVar7);
  return;
}



/* OT::PaintScaleUniformAroundCenter::paint_glyph(OT::hb_paint_context_t*, unsigned int) const */

void __thiscall
OT::PaintScaleUniformAroundCenter::paint_glyph
          (PaintScaleUniformAroundCenter *this,hb_paint_context_t *param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  code *pcVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  Paint *this_00;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar13 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,0);
  uVar1 = *(ushort *)(this + 6);
  fVar14 = ((float)(int)(short)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8) + fVar13) *
           _LC6;
  fVar15 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,1);
  uVar2 = *(ushort *)(this + 8);
  fVar16 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,2);
  fVar13 = _LC3;
  lVar12 = *(long *)(param_1 + 0x10);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  bVar3 = fVar15 + (float)(int)(short)(uVar1 << 8 | uVar1 >> 8) == 0.0;
  bVar4 = (float)(int)(short)(uVar2 << 8 | uVar2 >> 8) + fVar16 == 0.0;
  bVar5 = bVar3 && bVar4;
  if (bVar3 && bVar4) {
    if (fVar14 == _LC3) {
      bVar3 = false;
      bVar5 = false;
      goto LAB_0011b9e8;
    }
    puVar7 = *(undefined8 **)(lVar12 + 0x80);
    pcVar8 = *(code **)(lVar12 + 0x10);
    bVar3 = false;
    bVar4 = false;
    if (puVar7 == (undefined8 *)0x0) {
      (*pcVar8)(fVar14,lVar12,uVar11,0);
      goto LAB_0011b9e8;
    }
LAB_0011ba87:
    bVar3 = bVar4;
    (*pcVar8)(fVar14,lVar12,uVar11,*puVar7);
    if (bVar5) goto LAB_0011b9e8;
LAB_0011bac4:
    lVar12 = *(long *)(param_1 + 0x10);
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    bVar5 = true;
  }
  else {
    plVar9 = *(long **)(lVar12 + 0x80);
    if (plVar9 != (long *)0x0) {
      plVar9 = (long *)*plVar9;
    }
    (**(code **)(lVar12 + 0x10))(lVar12,uVar11,plVar9);
    lVar12 = *(long *)(param_1 + 0x10);
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    if (fVar14 != fVar13) {
      puVar7 = *(undefined8 **)(lVar12 + 0x80);
      pcVar8 = *(code **)(lVar12 + 0x10);
      bVar3 = true;
      bVar4 = bVar3;
      if (puVar7 != (undefined8 *)0x0) goto LAB_0011ba87;
      (*pcVar8)(fVar14,lVar12,uVar11,0);
      goto LAB_0011bac4;
    }
    bVar3 = true;
  }
  plVar9 = *(long **)(lVar12 + 0x80);
  if (plVar9 != (long *)0x0) {
    plVar9 = (long *)*plVar9;
  }
  (**(code **)(lVar12 + 0x10))(lVar12,uVar11,plVar9);
LAB_0011b9e8:
  iVar6 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  this_00 = (Paint *)&_hb_NullPool;
  if (iVar6 != 0) {
    this_00 = (Paint *)(this + iVar6);
  }
  if ((0 < *(int *)(param_1 + 0x98)) && (0 < *(int *)(param_1 + 0x9c))) {
    *(ulong *)(param_1 + 0x98) =
         CONCAT44(_LC37._4_4_ + (int)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20),
                  (int)_LC37 + (int)*(undefined8 *)(param_1 + 0x98));
    Paint::dispatch<OT::hb_paint_context_t>(this_00,param_1);
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  }
  if (bVar3) {
    lVar12 = *(long *)(param_1 + 0x10);
    lVar10 = *(long *)(lVar12 + 0x80);
    if (lVar10 != 0) {
      lVar10 = *(long *)(lVar10 + 8);
    }
    (**(code **)(lVar12 + 0x18))(lVar12,*(undefined8 *)(param_1 + 0x18),lVar10);
    if (bVar5) {
      lVar12 = *(long *)(param_1 + 0x10);
      if (*(long *)(lVar12 + 0x80) == 0) {
        (**(code **)(lVar12 + 0x18))(lVar12,*(undefined8 *)(param_1 + 0x18),0);
      }
      else {
        (**(code **)(lVar12 + 0x18))
                  (lVar12,*(undefined8 *)(param_1 + 0x18),
                   *(undefined8 *)(*(long *)(lVar12 + 0x80) + 8));
      }
    }
    lVar12 = *(long *)(param_1 + 0x10);
    lVar10 = *(long *)(lVar12 + 0x80);
    if (lVar10 != 0) {
      lVar10 = *(long *)(lVar10 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x0011bbff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar12 + 0x18))(lVar12,*(undefined8 *)(param_1 + 0x18),lVar10);
    return;
  }
  if (bVar5) {
    lVar12 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar12 + 0x80) == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x80) + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x0011bc88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar12 + 0x18))
              (lVar12,*(undefined8 *)(param_1 + 0x18),uVar11,*(code **)(lVar12 + 0x18));
    return;
  }
  return;
}



/* OT::PaintRotateAroundCenter::paint_glyph(OT::hb_paint_context_t*, unsigned int) const */

void __thiscall
OT::PaintRotateAroundCenter::paint_glyph
          (PaintRotateAroundCenter *this,hb_paint_context_t *param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  code *pcVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  Paint *this_00;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_40;
  float local_3c [3];
  
  fVar13 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,0);
  uVar1 = *(ushort *)(this + 6);
  fVar13 = ((float)(int)(short)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8) + fVar13) *
           _LC6;
  fVar14 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,1);
  uVar2 = *(ushort *)(this + 8);
  fVar15 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,2);
  lVar12 = *(long *)(param_1 + 0x10);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  bVar3 = fVar14 + (float)(int)(short)(uVar1 << 8 | uVar1 >> 8) == 0.0;
  bVar4 = (float)(int)(short)(uVar2 << 8 | uVar2 >> 8) + fVar15 == 0.0;
  bVar5 = bVar3 && bVar4;
  if (bVar3 && bVar4) {
    if (fVar13 == 0.0) {
      bVar3 = false;
      bVar5 = false;
      goto LAB_0011bdf2;
    }
    bVar3 = false;
    sincosf(fVar13 * _LC35,local_3c,&local_40);
    puVar7 = *(undefined8 **)(lVar12 + 0x80);
    pcVar8 = *(code **)(lVar12 + 0x10);
    if (puVar7 == (undefined8 *)0x0) {
      (*pcVar8)(lVar12,uVar11,0);
      goto LAB_0011bdf2;
    }
LAB_0011bee2:
    (*pcVar8)(lVar12,uVar11,*puVar7);
    if (bVar5) goto LAB_0011bdf2;
LAB_0011bf24:
    lVar12 = *(long *)(param_1 + 0x10);
    bVar5 = true;
    uVar11 = *(undefined8 *)(param_1 + 0x18);
  }
  else {
    plVar9 = *(long **)(lVar12 + 0x80);
    if (plVar9 != (long *)0x0) {
      plVar9 = (long *)*plVar9;
    }
    (**(code **)(lVar12 + 0x10))(lVar12,uVar11,plVar9);
    lVar12 = *(long *)(param_1 + 0x10);
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    if (fVar13 != 0.0) {
      bVar3 = true;
      sincosf(fVar13 * _LC35,local_3c,&local_40);
      puVar7 = *(undefined8 **)(lVar12 + 0x80);
      pcVar8 = *(code **)(lVar12 + 0x10);
      if (puVar7 != (undefined8 *)0x0) goto LAB_0011bee2;
      (*pcVar8)(lVar12,uVar11,0);
      goto LAB_0011bf24;
    }
    bVar3 = true;
  }
  plVar9 = *(long **)(lVar12 + 0x80);
  if (plVar9 != (long *)0x0) {
    plVar9 = (long *)*plVar9;
  }
  (**(code **)(lVar12 + 0x10))(lVar12,uVar11,plVar9);
LAB_0011bdf2:
  iVar6 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  this_00 = (Paint *)&_hb_NullPool;
  if (iVar6 != 0) {
    this_00 = (Paint *)(this + iVar6);
  }
  if ((0 < *(int *)(param_1 + 0x98)) && (0 < *(int *)(param_1 + 0x9c))) {
    *(ulong *)(param_1 + 0x98) =
         CONCAT44(_LC37._4_4_ + (int)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20),
                  (int)_LC37 + (int)*(undefined8 *)(param_1 + 0x98));
    Paint::dispatch<OT::hb_paint_context_t>(this_00,param_1);
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  }
  if (bVar3) {
    lVar12 = *(long *)(param_1 + 0x10);
    lVar10 = *(long *)(lVar12 + 0x80);
    if (lVar10 != 0) {
      lVar10 = *(long *)(lVar10 + 8);
    }
    (**(code **)(lVar12 + 0x18))(lVar12,*(undefined8 *)(param_1 + 0x18),lVar10);
    if (bVar5) {
      lVar12 = *(long *)(param_1 + 0x10);
      if (*(long *)(lVar12 + 0x80) == 0) {
        (**(code **)(lVar12 + 0x18))(lVar12,*(undefined8 *)(param_1 + 0x18),0);
      }
      else {
        (**(code **)(lVar12 + 0x18))
                  (lVar12,*(undefined8 *)(param_1 + 0x18),
                   *(undefined8 *)(*(long *)(lVar12 + 0x80) + 8));
      }
    }
    lVar12 = *(long *)(param_1 + 0x10);
    lVar10 = *(long *)(lVar12 + 0x80);
    if (lVar10 != 0) {
      lVar10 = *(long *)(lVar10 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x0011c061. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar12 + 0x18))(lVar12,*(undefined8 *)(param_1 + 0x18),lVar10);
    return;
  }
  if (bVar5) {
    lVar12 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar12 + 0x80) == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x80) + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x0011c12a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar12 + 0x18))
              (lVar12,*(undefined8 *)(param_1 + 0x18),uVar11,*(code **)(lVar12 + 0x18));
    return;
  }
  return;
}



/* OT::PaintScaleAroundCenter::paint_glyph(OT::hb_paint_context_t*, unsigned int) const */

void __thiscall
OT::PaintScaleAroundCenter::paint_glyph
          (PaintScaleAroundCenter *this,hb_paint_context_t *param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  code *pcVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  Paint *this_00;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar13 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,0);
  fVar14 = ((float)(int)(short)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8) + fVar13) *
           _LC6;
  fVar13 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,1);
  uVar1 = *(ushort *)(this + 8);
  fVar15 = ((float)(int)(short)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8) + fVar13) *
           _LC6;
  fVar16 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,2);
  uVar2 = *(ushort *)(this + 10);
  fVar17 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,3);
  fVar13 = _LC3;
  lVar12 = *(long *)(param_1 + 0x10);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  bVar3 = fVar16 + (float)(int)(short)(uVar1 << 8 | uVar1 >> 8) == 0.0;
  bVar4 = (float)(int)(short)(uVar2 << 8 | uVar2 >> 8) + fVar17 == 0.0;
  bVar5 = bVar3 && bVar4;
  if (bVar3 && bVar4) {
    bVar3 = fVar14 == _LC3 && fVar15 == _LC3;
    if (fVar14 == _LC3 && fVar15 == _LC3) {
      bVar3 = false;
      bVar5 = false;
      goto LAB_0011c2dc;
    }
    puVar7 = *(undefined8 **)(lVar12 + 0x80);
    pcVar8 = *(code **)(lVar12 + 0x10);
    if (puVar7 == (undefined8 *)0x0) {
      (*pcVar8)(fVar14,0,lVar12,uVar11,0);
      goto LAB_0011c2dc;
    }
LAB_0011c384:
    (*pcVar8)(fVar14,0,lVar12,uVar11,*puVar7);
    if (bVar5) goto LAB_0011c2dc;
LAB_0011c3c1:
    lVar12 = *(long *)(param_1 + 0x10);
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    bVar5 = true;
  }
  else {
    plVar9 = *(long **)(lVar12 + 0x80);
    if (plVar9 != (long *)0x0) {
      plVar9 = (long *)*plVar9;
    }
    (**(code **)(lVar12 + 0x10))(lVar12,uVar11,plVar9);
    lVar12 = *(long *)(param_1 + 0x10);
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    bVar3 = fVar14 == fVar13 && fVar15 == fVar13;
    if (fVar14 != fVar13 || fVar15 != fVar13) {
      puVar7 = *(undefined8 **)(lVar12 + 0x80);
      pcVar8 = *(code **)(lVar12 + 0x10);
      bVar3 = true;
      if (puVar7 != (undefined8 *)0x0) goto LAB_0011c384;
      (*pcVar8)(fVar14,0,lVar12,uVar11,0);
      goto LAB_0011c3c1;
    }
  }
  plVar9 = *(long **)(lVar12 + 0x80);
  if (plVar9 != (long *)0x0) {
    plVar9 = (long *)*plVar9;
  }
  (**(code **)(lVar12 + 0x10))(lVar12,uVar11,plVar9);
LAB_0011c2dc:
  iVar6 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  this_00 = (Paint *)&_hb_NullPool;
  if (iVar6 != 0) {
    this_00 = (Paint *)(this + iVar6);
  }
  if ((0 < *(int *)(param_1 + 0x98)) && (0 < *(int *)(param_1 + 0x9c))) {
    *(ulong *)(param_1 + 0x98) =
         CONCAT44(_LC37._4_4_ + (int)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20),
                  (int)_LC37 + (int)*(undefined8 *)(param_1 + 0x98));
    Paint::dispatch<OT::hb_paint_context_t>(this_00,param_1);
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  }
  if (!bVar3) {
    if (!bVar5) {
      return;
    }
    lVar12 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar12 + 0x80) == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x80) + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x0011c58a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar12 + 0x18))
              (lVar12,*(undefined8 *)(param_1 + 0x18),uVar11,*(code **)(lVar12 + 0x18));
    return;
  }
  lVar12 = *(long *)(param_1 + 0x10);
  lVar10 = *(long *)(lVar12 + 0x80);
  if (lVar10 != 0) {
    lVar10 = *(long *)(lVar10 + 8);
  }
  (**(code **)(lVar12 + 0x18))(lVar12,*(undefined8 *)(param_1 + 0x18),lVar10);
  if (bVar5) {
    lVar12 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar12 + 0x80) == 0) {
      (**(code **)(lVar12 + 0x18))(lVar12,*(undefined8 *)(param_1 + 0x18),0);
    }
    else {
      (**(code **)(lVar12 + 0x18))
                (lVar12,*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)(*(long *)(lVar12 + 0x80) + 8));
    }
  }
  lVar12 = *(long *)(param_1 + 0x10);
  lVar10 = *(long *)(lVar12 + 0x80);
  if (lVar10 != 0) {
    lVar10 = *(long *)(lVar10 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0011c501. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar12 + 0x18))(lVar12,*(undefined8 *)(param_1 + 0x18),lVar10);
  return;
}



/* OT::PaintSkewAroundCenter::paint_glyph(OT::hb_paint_context_t*, unsigned int) const */

void __thiscall
OT::PaintSkewAroundCenter::paint_glyph
          (PaintSkewAroundCenter *this,hb_paint_context_t *param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  Paint *this_00;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar13 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,0);
  fVar13 = ((float)(int)(short)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8) + fVar13) *
           _LC6;
  fVar14 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,1);
  uVar1 = *(ushort *)(this + 8);
  fVar14 = ((float)(int)(short)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8) + fVar14) *
           _LC6;
  fVar15 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,2);
  uVar2 = *(ushort *)(this + 10);
  fVar16 = (float)ItemVarStoreInstancer::operator()
                            (*(ItemVarStoreInstancer **)(param_1 + 0x30),param_2,3);
  lVar12 = *(long *)(param_1 + 0x10);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  bVar3 = fVar15 + (float)(int)(short)(uVar1 << 8 | uVar1 >> 8) == 0.0;
  bVar4 = (float)(int)(short)(uVar2 << 8 | uVar2 >> 8) + fVar16 == 0.0;
  bVar5 = bVar3 && bVar4;
  if (bVar3 && bVar4) {
    bVar3 = fVar13 == 0.0 && fVar14 == 0.0;
    if (fVar13 == 0.0 && fVar14 == 0.0) {
      bVar3 = false;
      bVar5 = false;
      goto LAB_0011c738;
    }
    tanf((float)((uint)fVar13 ^ _LC38) * _LC35);
    tanf(_LC35 * fVar14);
    puVar8 = *(undefined8 **)(lVar12 + 0x80);
    pcVar7 = *(code **)(lVar12 + 0x10);
    if (puVar8 == (undefined8 *)0x0) {
      (*pcVar7)(lVar12,uVar11,0);
      goto LAB_0011c738;
    }
LAB_0011c843:
    (*pcVar7)(lVar12,uVar11,*puVar8);
    if (bVar5) goto LAB_0011c738;
LAB_0011c878:
    lVar12 = *(long *)(param_1 + 0x10);
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    bVar5 = true;
  }
  else {
    plVar9 = *(long **)(lVar12 + 0x80);
    if (plVar9 != (long *)0x0) {
      plVar9 = (long *)*plVar9;
    }
    (**(code **)(lVar12 + 0x10))(lVar12,uVar11,plVar9);
    lVar12 = *(long *)(param_1 + 0x10);
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    bVar3 = fVar13 == 0.0 && fVar14 == 0.0;
    if (fVar13 != 0.0 || fVar14 != 0.0) {
      bVar3 = true;
      tanf((float)((uint)fVar13 ^ _LC38) * _LC35);
      tanf(_LC35 * fVar14);
      puVar8 = *(undefined8 **)(lVar12 + 0x80);
      pcVar7 = *(code **)(lVar12 + 0x10);
      if (puVar8 != (undefined8 *)0x0) goto LAB_0011c843;
      (*pcVar7)(lVar12,uVar11,0);
      goto LAB_0011c878;
    }
  }
  plVar9 = *(long **)(lVar12 + 0x80);
  if (plVar9 != (long *)0x0) {
    plVar9 = (long *)*plVar9;
  }
  (**(code **)(lVar12 + 0x10))(lVar12,uVar11,plVar9);
LAB_0011c738:
  iVar6 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  this_00 = (Paint *)&_hb_NullPool;
  if (iVar6 != 0) {
    this_00 = (Paint *)(this + iVar6);
  }
  if ((0 < *(int *)(param_1 + 0x98)) && (0 < *(int *)(param_1 + 0x9c))) {
    *(ulong *)(param_1 + 0x98) =
         CONCAT44(_LC37._4_4_ + (int)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20),
                  (int)_LC37 + (int)*(undefined8 *)(param_1 + 0x98));
    Paint::dispatch<OT::hb_paint_context_t>(this_00,param_1);
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  }
  if (!bVar3) {
    if (!bVar5) {
      return;
    }
    lVar12 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar12 + 0x80) == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x80) + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x0011ca8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar12 + 0x18))
              (lVar12,*(undefined8 *)(param_1 + 0x18),uVar11,*(code **)(lVar12 + 0x18));
    return;
  }
  lVar12 = *(long *)(param_1 + 0x10);
  lVar10 = *(long *)(lVar12 + 0x80);
  if (lVar10 != 0) {
    lVar10 = *(long *)(lVar10 + 8);
  }
  (**(code **)(lVar12 + 0x18))(lVar12,*(undefined8 *)(param_1 + 0x18),lVar10);
  if (bVar5) {
    lVar12 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar12 + 0x80) == 0) {
      (**(code **)(lVar12 + 0x18))(lVar12,*(undefined8 *)(param_1 + 0x18),0);
    }
    else {
      (**(code **)(lVar12 + 0x18))
                (lVar12,*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)(*(long *)(lVar12 + 0x80) + 8));
    }
  }
  lVar12 = *(long *)(param_1 + 0x10);
  lVar10 = *(long *)(lVar12 + 0x80);
  if (lVar10 != 0) {
    lVar10 = *(long *)(lVar10 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0011c9c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar12 + 0x18))(lVar12,*(undefined8 *)(param_1 + 0x18),lVar10);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::PaintColrGlyph::paint_glyph(OT::hb_paint_context_t*) const */

void __thiscall OT::PaintColrGlyph::paint_glyph(PaintColrGlyph *this,hb_paint_context_t *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  short *psVar3;
  undefined8 *puVar4;
  float fVar5;
  uint uVar6;
  char cVar7;
  ushort uVar8;
  int iVar9;
  long lVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  uint uVar18;
  ClipList *this_00;
  int iVar19;
  uint uVar20;
  ushort *puVar21;
  ushort uVar22;
  uint uVar23;
  Paint *this_01;
  long in_FS_OFFSET;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_30;
  
  lVar17 = *(long *)(param_1 + 0x60);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar15 = (ulong)*(uint *)(param_1 + 0x58);
  uVar22 = *(ushort *)(this + 1) << 8 | *(ushort *)(this + 1) >> 8;
  uVar13 = (uint)uVar22;
  if (lVar17 != 0) {
    uVar14 = (ulong)(uVar13 * -0x61c8864f & 0x3fffffff) % uVar15;
    puVar11 = (uint *)(lVar17 + uVar14 * 0xc);
    bVar1 = (byte)puVar11[1];
    if ((bVar1 & 2) != 0) {
      iVar19 = 0;
      do {
        if (uVar13 == *puVar11) {
          if ((bVar1 & 1) != 0) goto LAB_0011cb90;
          break;
        }
        iVar19 = iVar19 + 1;
        uVar14 = (ulong)((int)uVar14 + iVar19 & *(uint *)(param_1 + 0x54));
        puVar11 = (uint *)(lVar17 + uVar14 * 0xc);
        bVar1 = (byte)puVar11[1];
      } while ((bVar1 & 2) != 0);
    }
  }
  if (param_1[0x48] != (hb_paint_context_t)0x0) {
    uVar12 = *(uint *)(param_1 + 0x50);
    if (*(uint *)(param_1 + 0x54) <= (uVar12 >> 1) + uVar12) {
      cVar7 = hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                        ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)(param_1 + 0x38),0);
      if (cVar7 == '\0') goto LAB_0011cc9e;
      uVar15 = (ulong)*(uint *)(param_1 + 0x58);
      lVar17 = *(long *)(param_1 + 0x60);
      uVar12 = *(uint *)(param_1 + 0x50);
    }
    uVar6 = _minus_1;
    iVar19 = *(int *)(param_1 + 0x4c);
    uVar15 = (ulong)(uVar13 * -0x61c8864f & 0x3fffffff) % uVar15;
    lVar10 = uVar15 * 0xc;
    puVar11 = (uint *)(lVar17 + lVar10);
    bVar1 = (byte)puVar11[1];
    uVar23 = (uint)uVar22;
    if ((bVar1 & 2) == 0) {
      *puVar11 = uVar23;
      puVar11[2] = uVar6;
      puVar11[1] = uVar13 * 0x78dde6c4 + 3;
      *(uint *)(param_1 + 0x50) = uVar12 + 1;
      *(int *)(param_1 + 0x4c) = iVar19 + 1;
    }
    else {
      uVar18 = 0;
      uVar20 = 0xffffffff;
      do {
        if (uVar23 == *puVar11) {
          if (uVar20 != 0xffffffff) goto LAB_0011cc4e;
          goto LAB_0011cc59;
        }
        if (((bVar1 & 1) == 0) && (uVar20 == 0xffffffff)) {
          uVar20 = (uint)uVar15;
        }
        uVar18 = uVar18 + 1;
        uVar15 = (ulong)((uint)uVar15 + uVar18 & *(uint *)(param_1 + 0x54));
        lVar10 = uVar15 * 0xc;
        puVar11 = (uint *)(lVar17 + lVar10);
        bVar1 = (byte)puVar11[1];
      } while ((bVar1 & 2) != 0);
      if (uVar20 == 0xffffffff) {
LAB_0011cfad:
        uVar12 = uVar12 + 1;
      }
      else {
LAB_0011cc4e:
        lVar10 = (ulong)uVar20 * 0xc;
LAB_0011cc59:
        puVar11 = (uint *)(lVar10 + lVar17);
        if (((byte)puVar11[1] & 2) == 0) goto LAB_0011cfad;
        iVar19 = iVar19 - ((byte)puVar11[1] & 1);
      }
      *puVar11 = uVar23;
      puVar11[1] = uVar13 * 0x78dde6c4 + 3;
      puVar11[2] = uVar6;
      *(uint *)(param_1 + 0x50) = uVar12;
      *(int *)(param_1 + 0x4c) = iVar19 + 1;
      if ((*(ushort *)(param_1 + 0x4a) < uVar18) && (*(uint *)(param_1 + 0x54) < uVar12 << 3)) {
        hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                  ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)(param_1 + 0x38),
                   *(uint *)(param_1 + 0x54) - 8);
      }
    }
  }
LAB_0011cc9e:
  lVar17 = *(long *)(param_1 + 0x20);
  lVar10 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar13 = *(uint *)(*(long *)(lVar17 + 0x20) + 0x14);
  if (uVar13 == 0) {
    uVar13 = hb_face_t::load_upem();
  }
  auVar24._4_12_ = SUB1612((undefined1  [16])0x0,4);
  iVar19 = *(int *)(lVar17 + 0x28);
  fVar5 = (float)uVar13;
  if (iVar19 != 0) {
    fVar5 = (float)iVar19;
  }
  plVar16 = *(long **)(lVar10 + 0x80);
  auVar24._0_4_ = (float)uVar13 / (float)(int)fVar5;
  if (plVar16 != (long *)0x0) {
    plVar16 = (long *)*plVar16;
  }
  (**(code **)(lVar10 + 0x10))(auVar24._0_8_,lVar10,uVar2,plVar16);
  lVar17 = *(long *)(param_1 + 0x10);
  lVar10 = *(long *)(lVar17 + 0x80);
  if (lVar10 != 0) {
    lVar10 = *(long *)(lVar10 + 0x18);
  }
  iVar19 = (**(code **)(lVar17 + 0x20))
                     (lVar17,*(undefined8 *)(param_1 + 0x18),
                      *(ushort *)(this + 1) << 8 | *(ushort *)(this + 1) >> 8,
                      *(undefined8 *)(param_1 + 0x20),lVar10);
  lVar17 = *(long *)(param_1 + 0x10);
  lVar10 = *(long *)(lVar17 + 0x80);
  if (iVar19 == 0) {
    if (lVar10 != 0) {
      lVar10 = *(long *)(lVar10 + 8);
    }
    (**(code **)(lVar17 + 0x18))(lVar17,*(undefined8 *)(param_1 + 0x18),lVar10);
    psVar3 = *(short **)(param_1 + 8);
    puVar11 = (uint *)&_hb_NullPool;
    uVar13 = *(uint *)(psVar3 + 7);
    uVar22 = *(ushort *)(this + 1) << 8 | *(ushort *)(this + 1) >> 8;
    if (uVar13 != 0) {
      puVar11 = (uint *)((long)psVar3 +
                        (ulong)(uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                               uVar13 << 0x18));
    }
    uVar13 = *puVar11;
    iVar9 = (uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18) -
            1;
    iVar19 = 0;
    if (-1 < iVar9) {
      do {
        while( true ) {
          uVar13 = (uint)(iVar19 + iVar9) >> 1;
          puVar21 = (ushort *)((long)puVar11 + (ulong)uVar13 * 6 + 4);
          uVar8 = *puVar21 << 8 | *puVar21 >> 8;
          if (uVar22 < uVar8) break;
          if (uVar22 <= uVar8) goto LAB_0011ce0b;
          iVar19 = uVar13 + 1;
          if (iVar9 < iVar19) goto LAB_0011cf75;
        }
        iVar9 = uVar13 - 1;
      } while (iVar19 <= iVar9);
    }
LAB_0011cf75:
    this_01 = (Paint *)0x0;
    if ((uint)uVar22 == (uint)(ushort)(__hb_NullPool << 8 | __hb_NullPool >> 8)) {
      puVar21 = (ushort *)&_hb_NullPool;
LAB_0011ce0b:
      uVar13 = *(uint *)(puVar21 + 1);
      this_01 = (Paint *)&_hb_NullPool;
      if (uVar13 != 0) {
        this_01 = (Paint *)((long)puVar11 +
                           (ulong)(uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 |
                                   (uVar13 & 0xff00) << 8 | uVar13 << 0x18));
      }
    }
    puVar4 = *(undefined8 **)(param_1 + 0x30);
    local_68 = (undefined1  [16])0x0;
    local_58 = *puVar4;
    uStack_50 = puVar4[1];
    local_48 = puVar4[2];
    uStack_40 = puVar4[3];
    local_38 = puVar4[4];
    if (((*psVar3 == 0) || (*(int *)(psVar3 + 0xb) == 0)) ||
       (uVar13 = *(uint *)(psVar3 + 0xb), uVar13 == 0)) {
      this_00 = (ClipList *)&_hb_NullPool;
    }
    else {
      this_00 = (ClipList *)
                ((long)psVar3 +
                (ulong)(uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                       uVar13 << 0x18));
    }
    cVar7 = ClipList::get_extents
                      (this_00,(uint)uVar22,(hb_glyph_extents_t *)local_68,
                       (ItemVarStoreInstancer *)&local_58);
    if (cVar7 == '\0') {
      if (((this_01 != (Paint *)0x0) && (0 < *(int *)(param_1 + 0x98))) &&
         (0 < *(int *)(param_1 + 0x9c))) {
        *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
        *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
        Paint::dispatch<OT::hb_paint_context_t>(this_01,param_1);
        *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
      }
    }
    else {
      lVar17 = *(long *)(param_1 + 0x10);
      auVar25._4_12_ = SUB1612((undefined1  [16])0x0,4);
      auVar25._0_4_ = (float)(int)local_68._0_4_;
      lVar10 = *(long *)(lVar17 + 0x80);
      auVar28._4_12_ = SUB1612((undefined1  [16])0x0,4);
      auVar28._0_4_ = (float)(int)local_68._4_4_;
      auVar26._4_12_ = SUB1612((undefined1  [16])0x0,4);
      auVar26._0_4_ = (float)(int)(local_68._4_4_ + local_68._12_4_);
      auVar27._4_12_ = SUB1612((undefined1  [16])0x0,4);
      auVar27._0_4_ = (float)(int)(local_68._8_4_ + local_68._0_4_);
      if (lVar10 != 0) {
        lVar10 = *(long *)(lVar10 + 0x20);
      }
      (**(code **)(lVar17 + 0x30))
                (auVar25._0_8_,auVar26._0_8_,auVar27._0_8_,auVar28._0_8_,lVar17,
                 *(undefined8 *)(param_1 + 0x18),lVar10);
      if (((this_01 != (Paint *)0x0) && (0 < *(int *)(param_1 + 0x98))) &&
         (0 < *(int *)(param_1 + 0x9c))) {
        *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
        *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
        Paint::dispatch<OT::hb_paint_context_t>(this_01,param_1);
        *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
      }
      lVar17 = *(long *)(param_1 + 0x10);
      lVar10 = *(long *)(lVar17 + 0x80);
      if (lVar10 != 0) {
        lVar10 = *(long *)(lVar10 + 0x28);
      }
      (**(code **)(lVar17 + 0x38))(lVar17,*(undefined8 *)(param_1 + 0x18),lVar10);
    }
    lVar17 = *(long *)(param_1 + 0x60);
    if (lVar17 != 0) {
      uVar13 = (uint)(ushort)(*(ushort *)(this + 1) << 8 | *(ushort *)(this + 1) >> 8);
      uVar15 = (ulong)(uVar13 * -0x61c8864f & 0x3fffffff) % (ulong)*(uint *)(param_1 + 0x58);
      puVar11 = (uint *)(lVar17 + uVar15 * 0xc);
      bVar1 = (byte)puVar11[1];
      if ((bVar1 & 2) != 0) {
        iVar19 = 0;
        do {
          if (uVar13 == *puVar11) goto LAB_0011cf24;
          iVar19 = iVar19 + 1;
          uVar15 = (ulong)((int)uVar15 + iVar19 & *(uint *)(param_1 + 0x54));
          puVar11 = (uint *)(lVar17 + uVar15 * 0xc);
          bVar1 = (byte)puVar11[1];
        } while ((bVar1 & 2) != 0);
      }
    }
  }
  else {
    if (lVar10 != 0) {
      lVar10 = *(long *)(lVar10 + 8);
    }
    (**(code **)(lVar17 + 0x18))(lVar17,*(undefined8 *)(param_1 + 0x18),lVar10);
    lVar17 = *(long *)(param_1 + 0x60);
    if (lVar17 != 0) {
      uVar13 = (uint)(ushort)(*(ushort *)(this + 1) << 8 | *(ushort *)(this + 1) >> 8);
      uVar15 = (ulong)(uVar13 * -0x61c8864f & 0x3fffffff) % (ulong)*(uint *)(param_1 + 0x58);
      puVar11 = (uint *)(lVar17 + uVar15 * 0xc);
      bVar1 = (byte)puVar11[1];
      if ((bVar1 & 2) != 0) {
        iVar19 = 0;
        do {
          if (uVar13 == *puVar11) goto LAB_0011cf24;
          iVar19 = iVar19 + 1;
          uVar15 = (ulong)((int)uVar15 + iVar19 & *(uint *)(param_1 + 0x54));
          puVar11 = (uint *)(lVar17 + uVar15 * 0xc);
          bVar1 = (byte)puVar11[1];
        } while ((bVar1 & 2) != 0);
      }
    }
  }
LAB_0011cb90:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0011cf24:
  if ((bVar1 & 1) != 0) {
    *(byte *)(puVar11 + 1) = (byte)puVar11[1] & 0xfe;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
  }
  goto LAB_0011cb90;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::COLR::paint_glyph(hb_font_t*, unsigned int, hb_paint_funcs_t*, void*, unsigned int, unsigned
   int, bool) const */

undefined8 __thiscall
OT::COLR::paint_glyph
          (COLR *this,hb_font_t *param_1,uint param_2,hb_paint_funcs_t *param_3,void *param_4,
          uint param_5,uint param_6,bool param_7)

{
  byte bVar1;
  void *pvVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  hb_paint_funcs_t *phVar8;
  int *piVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  long *plVar14;
  undefined8 uVar15;
  uint uVar16;
  int iVar17;
  ushort uVar18;
  ClipList *this_00;
  COLR *pCVar19;
  undefined4 uVar20;
  COLR *pCVar21;
  long in_FS_OFFSET;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  uint local_158;
  int local_154;
  int local_150;
  int local_14c;
  COLR *local_148;
  COLR *pCStack_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  COLR *local_118;
  COLR *pCStack_110;
  undefined8 local_108;
  void *pvStack_100;
  undefined8 local_f8;
  void *local_f0;
  undefined4 local_e8 [2];
  COLR *local_e0;
  hb_paint_funcs_t *local_d8;
  void *local_d0;
  hb_font_t *local_c8;
  uint local_c0;
  uint local_bc;
  COLR **local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined1 local_a0;
  ushort local_9e;
  undefined1 local_9c [8];
  undefined8 uStack_94;
  long local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined1 local_70;
  undefined2 local_6e;
  undefined1 local_6c [16];
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_148 = (COLR *)&_hb_NullPool;
  local_138 = *(undefined8 *)(param_1 + 0x80);
  uStack_130 = *(undefined4 *)(param_1 + 0x78);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pCStack_140 = (COLR *)&_hb_NullPool;
  if (*(short *)this != 0) {
    if ((*(int *)(this + 0x1a) == 0) || (uVar5 = *(uint *)(this + 0x1a), uVar5 == 0)) {
      pCStack_140 = (COLR *)&_hb_NullPool;
    }
    else {
      pCStack_140 = this + (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                           uVar5 << 0x18);
    }
    if (((*(short *)this == 0) || (*(int *)(this + 0x1e) == 0)) ||
       (uVar5 = *(uint *)(this + 0x1e), uVar5 == 0)) {
      local_148 = (COLR *)&_hb_NullPool;
    }
    else {
      local_148 = this + (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                         uVar5 << 0x18);
    }
  }
  local_bc = param_6;
  local_b8 = &local_148;
  uStack_12c = 0;
  local_128 = 0;
  local_e8[0] = 0;
  local_b0 = 1;
  local_ac = 1;
  local_a8 = 0;
  _local_9c = (undefined1  [16])0x0;
  local_9e = 0;
  local_a0 = 1;
  local_88 = 0;
  local_80 = 1;
  local_7c = 1;
  local_78 = 0;
  local_70 = 1;
  local_6e = 0;
  local_58 = 0;
  local_6c = (undefined1  [16])0x0;
  local_50 = _LC39;
  local_e0 = this;
  local_d8 = param_3;
  local_d0 = param_4;
  local_c8 = param_1;
  local_c0 = param_5;
  cVar3 = hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                    ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)&local_b0,0);
  uVar5 = _minus_1;
  if (cVar3 != '\0') {
    uVar7 = (ulong)(param_2 * -0x61c8864f & 0x3fffffff) % (ulong)uStack_94._4_4_;
    lVar6 = uVar7 * 0xc;
    puVar11 = (uint *)(local_88 + lVar6);
    bVar1 = (byte)puVar11[1];
    uVar15 = uStack_94;
    if ((bVar1 & 2) == 0) {
      *puVar11 = param_2;
      puVar11[2] = uVar5;
      puVar11[1] = param_2 * 0x78dde6c4 + 3;
      local_9c._4_4_ = local_9c._4_4_ + 1;
      local_9c._0_4_ = local_9c._0_4_ + 1;
    }
    else {
      uVar12 = (uint)uStack_94;
      uVar16 = 0;
      uVar13 = 0xffffffff;
      do {
        if (*puVar11 == param_2) {
          if (uVar13 == 0xffffffff) goto LAB_0011d416;
          goto LAB_0011d40b;
        }
        if ((uVar13 == 0xffffffff) && ((bVar1 & 1) == 0)) {
          uVar13 = (uint)uVar7;
        }
        uVar16 = uVar16 + 1;
        uVar7 = (ulong)((uint)uVar7 + uVar16 & (uint)uStack_94);
        lVar6 = uVar7 * 0xc;
        puVar11 = (uint *)(local_88 + lVar6);
        bVar1 = (byte)puVar11[1];
      } while ((bVar1 & 2) != 0);
      if (uVar13 == 0xffffffff) {
LAB_0011d872:
        local_9c._4_4_ = local_9c._4_4_ + 1;
      }
      else {
LAB_0011d40b:
        lVar6 = (ulong)uVar13 * 0xc;
LAB_0011d416:
        puVar11 = (uint *)(local_88 + lVar6);
        if (((byte)puVar11[1] & 2) == 0) goto LAB_0011d872;
        local_9c._0_4_ = local_9c._0_4_ - ((byte)puVar11[1] & 1);
      }
      *puVar11 = param_2;
      puVar11[1] = param_2 * 0x78dde6c4 + 3;
      puVar11[2] = uVar5;
      stack0xffffffffffffff68 = CONCAT84(uVar15,local_9c._4_4_);
      local_9c._0_4_ = local_9c._0_4_ + 1;
      if ((local_9e < uVar16) && (uVar12 < (uint)(local_9c._4_4_ << 3))) {
        hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                  ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)&local_b0,uVar12 - 8);
      }
    }
  }
  if (*(short *)this != 0) {
    uVar5 = *(uint *)(this + 0xe);
    pCVar19 = (COLR *)&_hb_NullPool;
    if (uVar5 != 0) {
      pCVar19 = this + (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                       uVar5 << 0x18);
    }
    uVar5 = *(uint *)pCVar19;
    iVar10 = (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) - 1;
    if (-1 < iVar10) {
      iVar17 = 0;
      do {
        while( true ) {
          uVar12 = (uint)(iVar17 + iVar10) >> 1;
          pCVar21 = pCVar19 + (ulong)uVar12 * 6 + 4;
          uVar5 = (uint)(ushort)(*(ushort *)pCVar21 << 8 | *(ushort *)pCVar21 >> 8);
          if (param_2 < uVar5) break;
          if (param_2 <= uVar5) goto LAB_0011d4d0;
          iVar17 = uVar12 + 1;
          if (iVar10 < iVar17) goto LAB_0011d61b;
        }
        iVar10 = uVar12 - 1;
      } while (iVar17 <= iVar10);
    }
LAB_0011d61b:
    if ((ushort)(__hb_NullPool << 8 | __hb_NullPool >> 8) == param_2) {
      pCVar21 = (COLR *)&_hb_NullPool;
LAB_0011d4d0:
      uVar5 = *(uint *)(pCVar21 + 2);
      pCVar21 = (COLR *)&_hb_NullPool;
      if (uVar5 != 0) {
        pCVar21 = pCVar19 + (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                            uVar5 << 0x18);
      }
      cVar3 = '\x01';
      if (param_7) {
        pvStack_100 = (void *)CONCAT44(uStack_12c,uStack_130);
        local_118 = local_148;
        pCStack_110 = pCStack_140;
        local_f8 = local_128;
        local_108 = local_138;
        if (((*(short *)this == 0) || (*(int *)(this + 0x16) == 0)) ||
           (uVar5 = *(uint *)(this + 0x16), uVar5 == 0)) {
          this_00 = (ClipList *)&_hb_NullPool;
        }
        else {
          this_00 = (ClipList *)
                    (this + (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                            uVar5 << 0x18));
        }
        cVar3 = ClipList::get_extents
                          (this_00,param_2,(hb_glyph_extents_t *)&local_158,
                           (ItemVarStoreInstancer *)&local_118);
        if (cVar3 == '\0') {
          phVar8 = (hb_paint_funcs_t *)hb_paint_extents_get_funcs();
          hb_paint_extents_context_t::hb_paint_extents_context_t
                    ((hb_paint_extents_context_t *)&local_118);
          paint_glyph(this,param_1,param_2,phVar8,(hb_paint_extents_context_t *)&local_118,param_5,
                      param_6,false);
          if (local_f8._4_4_ == 0) {
            __hb_CrapPool = CONCAT62(_DAT_0012402a,__hb_NullPool);
            _malloc = _realloc;
            piVar9 = (int *)&_hb_CrapPool;
            _strlen = _memcpy;
          }
          else {
            piVar9 = (int *)((long)local_f0 + (ulong)(local_f8._4_4_ - 1) * 0x14);
          }
          lVar6 = *(long *)(local_d8 + 0x80);
          cVar3 = *piVar9 != 0;
          if (lVar6 != 0) {
            lVar6 = *(long *)(lVar6 + 0x20);
          }
          (**(code **)(local_d8 + 0x30))(local_d8,local_d0,lVar6);
          if ((int)local_f8 != 0) {
            free(local_f0);
          }
          if ((int)local_108 != 0) {
            free(pvStack_100);
          }
          if ((int)local_118 != 0) {
            free(pCStack_110);
          }
        }
        else {
          hb_font_t::scale_glyph_extents(param_1,(hb_glyph_extents_t *)&local_158);
          auVar23._4_12_ = SUB1612((undefined1  [16])0x0,4);
          auVar23._0_4_ = (float)(int)local_158;
          auVar26._4_12_ = SUB1612((undefined1  [16])0x0,4);
          auVar26._0_4_ = (float)local_154;
          lVar6 = *(long *)(local_d8 + 0x80);
          auVar24._4_12_ = SUB1612((undefined1  [16])0x0,4);
          auVar24._0_4_ = (float)(local_154 + local_14c);
          auVar25._4_12_ = SUB1612((undefined1  [16])0x0,4);
          auVar25._0_4_ = (float)(int)(local_150 + local_158);
          if (lVar6 != 0) {
            lVar6 = *(long *)(lVar6 + 0x20);
          }
          (**(code **)(local_d8 + 0x30))
                    (auVar23._0_8_,auVar24._0_8_,auVar25._0_8_,auVar26._0_8_,local_d8,local_d0,lVar6
                    );
        }
      }
      pvVar2 = local_d0;
      phVar8 = local_d8;
      uVar5 = *(uint *)(*(long *)(param_1 + 0x20) + 0x14);
      if (uVar5 == 0) {
        uVar5 = hb_face_t::load_upem();
      }
      plVar14 = *(long **)(phVar8 + 0x80);
      auVar22._4_12_ = SUB1612((undefined1  [16])0x0,4);
      auVar22._0_4_ = (float)*(int *)(param_1 + 0x28) / (float)uVar5;
      if (plVar14 != (long *)0x0) {
        plVar14 = (long *)*plVar14;
      }
      (**(code **)(phVar8 + 0x10))(auVar22._0_8_,phVar8,pvVar2,plVar14);
      if ((cVar3 != '\0') && (0 < (int)local_50)) {
        if (0 < local_50._4_4_) {
          local_50._0_4_ = (int)_LC37 + (int)local_50;
          local_50._4_4_ = _LC37._4_4_ + local_50._4_4_;
          Paint::dispatch<OT::hb_paint_context_t>((Paint *)pCVar21,(hb_paint_context_t *)local_e8);
          local_50 = CONCAT44(local_50._4_4_,(int)local_50 + 1);
        }
      }
      lVar6 = *(long *)(local_d8 + 0x80);
      if (lVar6 != 0) {
        lVar6 = *(long *)(lVar6 + 8);
      }
      (**(code **)(local_d8 + 0x18))(local_d8,local_d0,lVar6);
      uVar5 = local_158;
      if (param_7) {
        lVar6 = *(long *)(local_d8 + 0x80);
        if (lVar6 != 0) {
          lVar6 = *(long *)(lVar6 + 0x28);
        }
        (**(code **)(local_d8 + 0x38))(local_d8,local_d0,lVar6);
        uVar5 = local_158;
      }
LAB_0011d5aa:
      local_158 = uVar5;
      uVar15 = 1;
      goto LAB_0011d5af;
    }
  }
  uVar5 = *(uint *)(this + 4);
  uVar4 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
  iVar10 = uVar4 - 1;
  if (uVar4 != 0) {
    iVar17 = 0;
    do {
      while( true ) {
        uVar13 = (uint)(iVar17 + iVar10) >> 1;
        pCVar19 = this + (ulong)uVar13 * 6 +
                         (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                                uVar5 << 0x18);
        uVar12 = (uint)(ushort)(*(ushort *)pCVar19 << 8 | *(ushort *)pCVar19 >> 8);
        if (param_2 < uVar12) break;
        if (param_2 <= uVar12) {
          if (pCVar19 != (COLR *)&_hb_NullPool) {
            uVar4 = *(ushort *)(pCVar19 + 2) << 8 | *(ushort *)(pCVar19 + 2) >> 8;
            uVar12 = (uint)(ushort)(*(ushort *)(this + 0xc) << 8 | *(ushort *)(this + 0xc) >> 8);
            uVar5 = local_158;
            if (uVar4 <= uVar12) {
              uVar13 = *(uint *)(this + 8);
              uVar12 = uVar12 - uVar4;
              uVar18 = *(ushort *)(pCVar19 + 4) << 8 | *(ushort *)(pCVar19 + 4) >> 8;
              pCVar19 = this + (ulong)uVar4 * 4 +
                               (ulong)(uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 |
                                       (uVar13 & 0xff00) << 8 | uVar13 << 0x18);
              uVar7 = (ulong)uVar12;
              if (uVar18 < uVar12) {
                uVar7 = (ulong)uVar18;
              }
              pCVar21 = pCVar19 + uVar7 * 4;
              local_158 = local_bc;
              for (; local_bc = local_158, pCVar21 != pCVar19; pCVar19 = pCVar19 + 4) {
                uVar20 = 1;
                uVar4 = *(ushort *)(pCVar19 + 2) << 8 | *(ushort *)(pCVar19 + 2) >> 8;
                if (uVar4 != 0xffff) {
                  lVar6 = *(long *)(local_d8 + 0x80);
                  if (lVar6 != 0) {
                    lVar6 = *(long *)(lVar6 + 0x68);
                  }
                  iVar10 = (**(code **)(local_d8 + 0x78))(local_d8,local_d0,uVar4,&local_158,lVar6);
                  if (iVar10 == 0) {
                    local_118 = (COLR *)CONCAT44(local_118._4_4_,1);
                    uVar15 = hb_font_get_face(local_c8);
                    hb_ot_color_palette_get_colors(uVar15,local_c0,uVar4,&local_118,&local_158);
                    uVar20 = 0;
                  }
                  else {
                    uVar20 = 0;
                  }
                }
                uVar12 = local_158 & 0xff;
                uVar5 = local_158 & 0xffffff00;
                lVar6 = *(long *)(local_d8 + 0x80);
                if (lVar6 != 0) {
                  lVar6 = *(long *)(lVar6 + 0x18);
                }
                (**(code **)(local_d8 + 0x28))
                          (local_d8,local_d0,*(ushort *)pCVar19 << 8 | *(ushort *)pCVar19 >> 8,
                           local_c8,lVar6);
                lVar6 = *(long *)(local_d8 + 0x80);
                if (lVar6 != 0) {
                  lVar6 = *(long *)(lVar6 + 0x30);
                }
                (**(code **)(local_d8 + 0x40))
                          (local_d8,local_d0,uVar20,(uint)(long)(float)uVar12 & 0xff | uVar5,lVar6);
                lVar6 = *(long *)(local_d8 + 0x80);
                if (lVar6 != 0) {
                  lVar6 = *(long *)(lVar6 + 0x28);
                }
                (**(code **)(local_d8 + 0x38))(local_d8,local_d0,lVar6);
                uVar5 = local_158;
                local_158 = local_bc;
              }
            }
            goto LAB_0011d5aa;
          }
          goto LAB_0011d85b;
        }
        iVar17 = uVar13 + 1;
        if (iVar10 < iVar17) goto LAB_0011d85b;
      }
      iVar10 = uVar13 - 1;
    } while (iVar17 <= iVar10);
  }
LAB_0011d85b:
  uVar15 = 0;
LAB_0011d5af:
  hb_hashmap_t<unsigned_int,unsigned_int,true>::fini
            ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)&local_80);
  hb_hashmap_t<unsigned_int,unsigned_int,true>::fini
            ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)&local_b0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar15;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::COLR::get_extents(hb_font_t*, unsigned int, hb_glyph_extents_t*) const */

undefined4 __thiscall
OT::COLR::get_extents(COLR *this,hb_font_t *param_1,uint param_2,hb_glyph_extents_t *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  undefined4 uVar6;
  hb_paint_funcs_t *phVar7;
  undefined *puVar8;
  short sVar9;
  ClipList *this_00;
  long in_FS_OFFSET;
  COLR *local_78;
  COLR *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  void *local_50;
  long local_40;
  
  local_60 = *(undefined4 *)(param_1 + 0x78);
  local_68 = *(undefined8 *)(param_1 + 0x80);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(short *)this == 0) {
    local_70 = (COLR *)&_hb_NullPool;
LAB_0011dcd2:
    local_78 = (COLR *)&_hb_NullPool;
LAB_0011dcf5:
    this_00 = (ClipList *)&_hb_NullPool;
  }
  else {
    if ((*(int *)(this + 0x1a) == 0) || (uVar5 = *(uint *)(this + 0x1a), uVar5 == 0)) {
      local_70 = (COLR *)&_hb_NullPool;
    }
    else {
      local_70 = this + (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                        uVar5 << 0x18);
    }
    if (*(short *)this == 0) goto LAB_0011dcd2;
    if ((*(int *)(this + 0x1e) == 0) || (uVar5 = *(uint *)(this + 0x1e), uVar5 == 0)) {
      sVar9 = *(short *)this;
      local_78 = (COLR *)&_hb_NullPool;
    }
    else {
      sVar9 = *(short *)this;
      local_78 = this + (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                        uVar5 << 0x18);
    }
    if (((sVar9 == 0) || (*(int *)(this + 0x16) == 0)) ||
       (uVar5 = *(uint *)(this + 0x16), uVar5 == 0)) goto LAB_0011dcf5;
    this_00 = (ClipList *)
              (this + (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                      uVar5 << 0x18));
  }
  local_58 = 0;
  uStack_5c = 0;
  uVar6 = ClipList::get_extents(this_00,param_2,param_3,(ItemVarStoreInstancer *)&local_78);
  if ((char)uVar6 != '\0') {
    hb_font_t::scale_glyph_extents(param_1,param_3);
    goto LAB_0011ddb2;
  }
  phVar7 = (hb_paint_funcs_t *)hb_paint_extents_get_funcs();
  hb_paint_extents_context_t::hb_paint_extents_context_t((hb_paint_extents_context_t *)&local_78);
  uVar6 = paint_glyph(this,param_1,param_2,phVar7,&local_78,0,0,true);
  if (local_58._4_4_ == 0) {
    _malloc = _realloc;
    puVar8 = &_hb_CrapPool;
    __hb_CrapPool = __hb_NullPool;
    _strlen = _memcpy;
  }
  else {
    puVar8 = (undefined *)((long)local_50 + (ulong)(local_58._4_4_ - 1) * 0x14);
  }
  fVar1 = *(float *)(puVar8 + 4);
  fVar2 = *(float *)(puVar8 + 0xc);
  if (fVar1 <= fVar2) {
    fVar3 = *(float *)(puVar8 + 0x10);
    fVar4 = *(float *)(puVar8 + 8);
    *(int *)param_3 = (int)fVar1;
    *(int *)(param_3 + 4) = (int)fVar3;
    *(int *)(param_3 + 8) = (int)(fVar2 - fVar1);
    *(int *)(param_3 + 0xc) = (int)(fVar4 - fVar3);
    if ((int)local_58 != 0) goto LAB_0011de60;
LAB_0011dd9f:
    if ((int)local_68 == 0) goto LAB_0011ddab;
LAB_0011de40:
    free((void *)CONCAT44(uStack_5c,local_60));
  }
  else {
    *(undefined1 (*) [16])param_3 = (undefined1  [16])0x0;
    if ((int)local_58 == 0) goto LAB_0011dd9f;
LAB_0011de60:
    free(local_50);
    if ((int)local_68 != 0) goto LAB_0011de40;
LAB_0011ddab:
  }
  if ((int)local_78 != 0) {
    free(local_70);
  }
LAB_0011ddb2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* hb_table_lazy_loader_t<OT::OS2, 6u, true>::create(hb_face_t*) */

undefined8 hb_table_lazy_loader_t<OT::OS2,6u,true>::create(hb_face_t *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ushort uVar4;
  
  uVar2 = hb_face_reference_table(param_1,0x4f532f32);
  lVar3 = hb_blob_reference(uVar2);
  uVar1 = *(uint *)(lVar3 + 0x18);
  if (*(ushort **)(lVar3 + 0x10) == (ushort *)0x0) {
    hb_blob_destroy(lVar3);
    return uVar2;
  }
  if ((0x4d < uVar1) &&
     ((uVar4 = **(ushort **)(lVar3 + 0x10), uVar4 = uVar4 << 8 | uVar4 >> 8, uVar4 == 0 ||
      ((0x55 < uVar1 && ((uVar4 == 1 || ((0x5f < uVar1 && ((uVar4 < 5 || (99 < uVar1)))))))))))) {
    hb_blob_destroy(lVar3);
    hb_blob_make_immutable(uVar2);
    return uVar2;
  }
  hb_blob_destroy(lVar3);
  hb_blob_destroy(uVar2);
  uVar2 = hb_blob_get_empty();
  return uVar2;
}



/* OT::cmap::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall OT::cmap::accelerator_t::accelerator_t(accelerator_t *this,hb_face_t *param_1)

{
  hb_face_t *phVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  cmap *pcVar7;
  short *psVar8;
  code *pcVar9;
  short *psVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  short sVar14;
  cmap *pcVar15;
  int iVar16;
  long in_FS_OFFSET;
  bool local_8a;
  bool local_89;
  undefined4 local_88 [2];
  undefined1 local_80 [16];
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  char local_60;
  int local_5c;
  long local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  local_68 = 0;
  local_60 = '\0';
  local_4b = 0;
  local_50 = hb_face_get_glyph_count(param_1);
  local_4c = 1;
  puVar5 = (undefined *)hb_face_reference_table(param_1,0x636d6170);
  lVar6 = hb_blob_reference(puVar5);
  local_58 = lVar6;
  while( true ) {
    local_70 = *(uint *)(lVar6 + 0x18);
    pcVar7 = *(cmap **)(lVar6 + 0x10);
    local_6c = local_70 * 0x40;
    if (local_70 >> 0x1a == 0) {
      if (0x3fffffff < local_6c) {
        local_6c = 0x3fffffff;
      }
      if (local_6c < 0x4000) {
        local_6c = 0x4000;
      }
    }
    else {
      local_6c = 0x3fffffff;
    }
    local_80._8_8_ = pcVar7 + local_70;
    local_80._0_8_ = pcVar7;
    local_5c = 0;
    local_88[0] = 0;
    local_64 = 0;
    if (pcVar7 == (cmap *)0x0) {
      hb_blob_destroy(lVar6);
      goto LAB_0011e09e;
    }
    cVar2 = cmap::sanitize(pcVar7,(hb_sanitize_context_t *)local_88);
    lVar6 = local_58;
    if (cVar2 != '\0') {
      if (local_5c == 0) {
        hb_blob_destroy(local_58);
      }
      else {
        local_5c = 0;
        cVar2 = cmap::sanitize(pcVar7,(hb_sanitize_context_t *)local_88);
        if (local_5c != 0) {
          hb_blob_destroy(local_58);
          goto LAB_0011e278;
        }
        hb_blob_destroy(local_58);
        local_58 = 0;
        local_70 = 0;
        local_80 = (undefined1  [16])0x0;
        if (cVar2 == '\0') goto LAB_0011e278;
      }
      hb_blob_make_immutable(puVar5);
      goto LAB_0011e09e;
    }
    if ((local_5c == 0) || (local_60 != '\0')) break;
    local_80._0_8_ = hb_blob_get_data_writable(puVar5,0);
    local_80._8_8_ = (ulong)*(uint *)(puVar5 + 0x18) + local_80._0_8_;
    if (local_80._0_8_ == 0) break;
    local_60 = '\x01';
  }
  hb_blob_destroy(lVar6);
LAB_0011e278:
  hb_blob_destroy(puVar5);
  puVar5 = (undefined *)hb_blob_get_empty();
LAB_0011e09e:
  *(undefined **)(this + 0x50) = puVar5;
  if (puVar5 == (undefined *)0x0) {
    puVar5 = &_hb_NullPool;
  }
  pcVar7 = (cmap *)&_hb_NullPool;
  if (3 < *(uint *)(puVar5 + 0x18)) {
    pcVar7 = *(cmap **)(puVar5 + 0x10);
  }
  psVar8 = (short *)find_best_subtable(pcVar7,&local_8a,&local_89,(bool *)local_88);
  *(undefined **)(this + 8) = &_hb_NullPool;
  pcVar15 = (cmap *)&_hb_NullPool;
  *(short **)this = psVar8;
  uVar3 = *(ushort *)(pcVar7 + 2) << 8 | *(ushort *)(pcVar7 + 2) >> 8;
  iVar16 = uVar3 - 1;
  if (uVar3 != 0) {
    iVar12 = 0;
    do {
      while( true ) {
        uVar4 = (uint)(iVar12 + iVar16) >> 1;
        pcVar15 = pcVar7 + (ulong)uVar4 * 8 + 4;
        if ((*(short *)pcVar15 != 0) ||
           (uVar3 = *(ushort *)(pcVar15 + 2), 5 < (ushort)(uVar3 << 8 | uVar3 >> 8))) break;
        if (uVar3 == 0x500) goto LAB_0011e142;
        iVar12 = uVar4 + 1;
        if (iVar16 < iVar12) goto LAB_0011e1eb;
      }
      iVar16 = uVar4 - 1;
    } while (iVar12 <= iVar16);
LAB_0011e1eb:
    pcVar15 = (cmap *)&_hb_NullPool;
  }
LAB_0011e142:
  uVar4 = *(uint *)(pcVar15 + 4);
  if ((uVar4 != 0) &&
     (*(short *)(pcVar7 + (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                          uVar4 << 0x18)) == 0xe00)) {
    *(cmap **)(this + 8) =
         pcVar7 + (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18);
  }
  if (psVar8 == (short *)0x0) {
    psVar8 = (short *)&_hb_NullPool;
  }
  *(short **)(this + 0x18) = psVar8;
  if (local_8a == false) {
    pcVar9 = get_glyph_from_macroman<OT::CmapSubtable>;
    if ((local_88[0]._0_1_ != (hb_sanitize_context_t)0x0) ||
       (pcVar9 = get_glyph_from_ascii<OT::CmapSubtable>, local_89 != false)) goto LAB_0011e1b6;
    if (*psVar8 == 0x400) {
      uVar3 = psVar8[3];
      psVar10 = psVar8 + 7;
      *(short **)(this + 0x20) = psVar10;
      uVar4 = (uint)((ushort)(uVar3 << 8 | uVar3 >> 8) >> 1);
      uVar13 = (ulong)(uVar4 + 1);
      *(uint *)(this + 0x48) = uVar4;
      psVar10 = psVar10 + uVar13;
      *(short **)(this + 0x28) = psVar10;
      psVar10 = psVar10 + (uVar13 - 1);
      *(short **)(this + 0x30) = psVar10;
      *(short **)(this + 0x38) = psVar10 + (uVar13 - 1);
      *(short **)(this + 0x40) = psVar10 + (uVar13 - 1) + (uVar13 - 1);
      *(uint *)(this + 0x4c) =
           ((ushort)(psVar8[1] << 8 | (ushort)psVar8[1] >> 8) - 0x10) + uVar4 * -8 >> 1;
      *(accelerator_t **)(this + 0x18) = this + 0x20;
      pcVar9 = CmapSubtableFormat4::accelerator_t::get_glyph_func;
      goto LAB_0011e1b6;
    }
    pcVar9 = get_glyph_from<OT::CmapSubtableFormat12>;
    if (*psVar8 == 0xc00) goto LAB_0011e1b6;
  }
  else {
    phVar1 = param_1 + 0xa0;
LAB_0011e2c3:
    lVar6 = *(long *)phVar1;
    if (lVar6 == 0) {
      if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
        lVar6 = hb_blob_get_empty();
      }
      else {
        lVar6 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create(*(hb_face_t **)(param_1 + 0x70));
        if (lVar6 == 0) {
          lVar6 = hb_blob_get_empty();
          LOCK();
          lVar11 = *(long *)phVar1;
          if (lVar11 == 0) {
            *(long *)phVar1 = lVar6;
          }
          UNLOCK();
          if (lVar11 != 0) goto code_r0x0011e400;
        }
        else {
          LOCK();
          lVar11 = *(long *)phVar1;
          if (lVar11 == 0) {
            *(long *)phVar1 = lVar6;
          }
          UNLOCK();
          if (lVar11 != 0) goto LAB_0011e3bc;
        }
      }
    }
    psVar8 = (short *)&_hb_NullPool;
    if (0x4d < *(uint *)(lVar6 + 0x18)) {
      psVar8 = *(short **)(lVar6 + 0x10);
    }
    pcVar9 = get_glyph_from_symbol<OT::CmapSubtable,&OT::_hb_symbol_pua_map>;
    if (*psVar8 != 0) goto LAB_0011e1b6;
    pcVar9 = get_glyph_from_symbol<OT::CmapSubtable,&(_hb_arabic_pua_simp_map(unsigned_int))>;
    sVar14 = psVar8[0x1f] << 8;
    if (((sVar14 == -0x4e00) ||
        (pcVar9 = get_glyph_from_symbol<OT::CmapSubtable,&(_hb_arabic_pua_trad_map(unsigned_int))>,
        sVar14 == -0x4d00)) ||
       (pcVar9 = get_glyph_from_symbol<OT::CmapSubtable,&OT::_hb_symbol_pua_map>, sVar14 == 0))
    goto LAB_0011e1b6;
  }
  pcVar9 = get_glyph_from<OT::CmapSubtable>;
LAB_0011e1b6:
  *(code **)(this + 0x10) = pcVar9;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
code_r0x0011e400:
  if (lVar6 != 0) {
LAB_0011e3bc:
    lVar11 = hb_blob_get_empty();
    if (lVar6 != lVar11) {
      hb_blob_destroy(lVar6);
    }
  }
  goto LAB_0011e2c3;
}



/* hb_table_lazy_loader_t<OT::head, 1u, true>::create(hb_face_t*) */

undefined8 hb_table_lazy_loader_t<OT::head,1u,true>::create(hb_face_t *param_1)

{
  short *psVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = hb_face_reference_table(param_1,0x68656164);
  lVar3 = hb_blob_reference(uVar2);
  psVar1 = *(short **)(lVar3 + 0x10);
  if (psVar1 == (short *)0x0) {
    hb_blob_destroy();
  }
  else {
    if (((*(uint *)(lVar3 + 0x18) < 0x36) || (*psVar1 != 0x100)) ||
       (*(int *)(psVar1 + 6) != -0xac3f0a1)) {
      hb_blob_destroy();
      hb_blob_destroy(uVar2);
      uVar2 = hb_blob_get_empty();
      return uVar2;
    }
    hb_blob_destroy();
    hb_blob_make_immutable(uVar2);
  }
  return uVar2;
}



/* hb_table_lazy_loader_t<OT::VORG, 13u, true>::create(hb_face_t*) */

undefined8 hb_table_lazy_loader_t<OT::VORG,13u,true>::create(hb_face_t *param_1)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  
  uVar4 = hb_face_reference_table(param_1,0x564f5247);
  lVar5 = hb_blob_reference(uVar4);
  psVar2 = *(short **)(lVar5 + 0x10);
  uVar1 = *(uint *)(lVar5 + 0x18);
  uVar6 = uVar1 << 6;
  if (uVar1 >> 0x1a == 0) {
    if (0x3fffffff < uVar6) {
      uVar6 = 0x3fffffff;
    }
    if (uVar6 < 0x4000) {
      uVar6 = 0x4000;
    }
  }
  else {
    uVar6 = 0x3fffffff;
  }
  if (psVar2 == (short *)0x0) {
    hb_blob_destroy(lVar5);
    return uVar4;
  }
  if ((((7 < uVar1) && (*psVar2 == 0x100)) &&
      (uVar3 = (uint)(ushort)(psVar2[3] << 8 | (ushort)psVar2[3] >> 8), uVar3 * 4 <= uVar1 - 8)) &&
     (0 < (int)(uVar6 + uVar3 * -4))) {
    hb_blob_destroy(lVar5);
    hb_blob_make_immutable(uVar4);
    return uVar4;
  }
  hb_blob_destroy(lVar5);
  hb_blob_destroy(uVar4);
  uVar4 = hb_blob_get_empty();
  return uVar4;
}



/* hb_lazy_loader_t<OT::sbix_accelerator_t, hb_face_lazy_loader_t<OT::sbix_accelerator_t, 38u>,
   hb_face_t, 38u, OT::sbix_accelerator_t>::create(hb_face_t*) */

long * hb_lazy_loader_t<OT::sbix_accelerator_t,hb_face_lazy_loader_t<OT::sbix_accelerator_t,38u>,hb_face_t,38u,OT::sbix_accelerator_t>
       ::create(hb_face_t *param_1)

{
  sbix *this;
  char cVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined4 local_88 [2];
  undefined1 local_80 [16];
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  char local_60;
  int local_5c;
  long local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar3 = (long *)calloc(1,0x10);
  if (plVar3 != (long *)0x0) {
    *plVar3 = 0;
    local_68 = 0;
    local_60 = '\0';
    local_4b = 0;
    local_50 = hb_face_get_glyph_count(param_1);
    local_4c = 1;
    lVar4 = hb_face_reference_table(param_1,0x73626978);
    lVar5 = hb_blob_reference(lVar4);
    local_58 = lVar5;
    while( true ) {
      local_70 = *(uint *)(lVar5 + 0x18);
      this = *(sbix **)(lVar5 + 0x10);
      local_6c = local_70 * 0x40;
      if (local_70 >> 0x1a == 0) {
        if (0x3fffffff < local_6c) {
          local_6c = 0x3fffffff;
        }
        if (local_6c < 0x4000) {
          local_6c = 0x4000;
        }
      }
      else {
        local_6c = 0x3fffffff;
      }
      local_80._8_8_ = this + local_70;
      local_80._0_8_ = this;
      local_5c = 0;
      local_88[0] = 0;
      local_64 = 0;
      if (this == (sbix *)0x0) {
        hb_blob_destroy(lVar5);
        goto LAB_0011e6c3;
      }
      cVar1 = OT::sbix::sanitize(this,(hb_sanitize_context_t *)local_88);
      lVar5 = local_58;
      if (cVar1 != '\0') {
        if (local_5c == 0) {
          hb_blob_destroy(local_58);
        }
        else {
          local_5c = 0;
          cVar1 = OT::sbix::sanitize(this,(hb_sanitize_context_t *)local_88);
          if (local_5c != 0) {
            hb_blob_destroy(local_58);
            goto LAB_0011e708;
          }
          hb_blob_destroy(local_58);
          local_58 = 0;
          local_70 = 0;
          local_80 = (undefined1  [16])0x0;
          if (cVar1 == '\0') goto LAB_0011e708;
        }
        hb_blob_make_immutable(lVar4);
        goto LAB_0011e6c3;
      }
      if ((local_5c == 0) || (local_60 != '\0')) break;
      local_80._0_8_ = hb_blob_get_data_writable(lVar4,0);
      local_80._8_8_ = (ulong)*(uint *)(lVar4 + 0x18) + local_80._0_8_;
      if (local_80._0_8_ == 0) break;
      local_60 = '\x01';
    }
    hb_blob_destroy(lVar5);
LAB_0011e708:
    hb_blob_destroy(lVar4);
    lVar4 = hb_blob_get_empty();
LAB_0011e6c3:
    *plVar3 = lVar4;
    iVar2 = *(int *)(param_1 + 0x18);
    if (iVar2 == -1) {
      iVar2 = hb_face_t::load_num_glyphs();
    }
    *(int *)(plVar3 + 1) = iVar2;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar3;
}



/* hb_lazy_loader_t<OT::SVG_accelerator_t, hb_face_lazy_loader_t<OT::SVG_accelerator_t, 39u>,
   hb_face_t, 39u, OT::SVG_accelerator_t>::create(hb_face_t*) */

undefined8 *
hb_lazy_loader_t<OT::SVG_accelerator_t,hb_face_lazy_loader_t<OT::SVG_accelerator_t,39u>,hb_face_t,39u,OT::SVG_accelerator_t>
::create(hb_face_t *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ushort uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ushort *puVar9;
  uint uVar10;
  
  puVar6 = (undefined8 *)calloc(1,8);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    hb_face_get_glyph_count(param_1);
    uVar7 = hb_face_reference_table(param_1,0x53564720);
    lVar8 = hb_blob_reference(uVar7);
    uVar1 = *(uint *)(lVar8 + 0x18);
    lVar3 = *(long *)(lVar8 + 0x10);
    if (uVar1 >> 0x1a == 0) {
      uVar10 = uVar1 * 0x40;
      if (0x3fffffff < uVar1 * 0x40) {
        uVar10 = 0x3fffffff;
      }
      if (uVar10 < 0x4000) {
        uVar10 = 0x4000;
      }
    }
    else {
      uVar10 = 0x3fffffff;
    }
    if (lVar3 != 0) {
      if (9 < (ulong)uVar1) {
        uVar2 = *(uint *)(lVar3 + 2);
        puVar9 = (ushort *)&_hb_NullPool;
        if (uVar2 != 0) {
          puVar9 = (ushort *)
                   (lVar3 + (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8
                                   | uVar2 << 0x18));
        }
        if ((((ulong)((long)(puVar9 + 1) - lVar3) <= (ulong)uVar1) &&
            (uVar4 = *puVar9 << 8 | *puVar9 >> 8, iVar5 = (uint)uVar4 + (uint)uVar4 * 2,
            (uint)(iVar5 * 4) <= ((int)lVar3 + uVar1) - (int)(puVar9 + 1))) &&
           (0 < (int)(uVar10 + iVar5 * -4))) {
          hb_blob_destroy(lVar8);
          hb_blob_make_immutable(uVar7);
          *puVar6 = uVar7;
          return puVar6;
        }
      }
      hb_blob_destroy(lVar8);
      hb_blob_destroy(uVar7);
      uVar7 = hb_blob_get_empty();
      *puVar6 = uVar7;
      return puVar6;
    }
    hb_blob_destroy(lVar8);
    *puVar6 = uVar7;
  }
  return puVar6;
}



/* hb_table_lazy_loader_t<OT::hhea, 4u, true>::create(hb_face_t*) */

undefined8 hb_table_lazy_loader_t<OT::hhea,4u,true>::create(hb_face_t *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = hb_face_reference_table(param_1,0x68686561);
  lVar2 = hb_blob_reference(uVar1);
  if (*(short **)(lVar2 + 0x10) == (short *)0x0) {
    hb_blob_destroy();
    return uVar1;
  }
  if ((0x23 < *(uint *)(lVar2 + 0x18)) && (**(short **)(lVar2 + 0x10) == 0x100)) {
    hb_blob_destroy();
    hb_blob_make_immutable(uVar1);
    return uVar1;
  }
  hb_blob_destroy();
  hb_blob_destroy(uVar1);
  uVar1 = hb_blob_get_empty();
  return uVar1;
}



/* hb_table_lazy_loader_t<OT::vhea, 11u, true>::create(hb_face_t*) */

undefined8 hb_table_lazy_loader_t<OT::vhea,11u,true>::create(hb_face_t *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = hb_face_reference_table(param_1,0x76686561);
  lVar2 = hb_blob_reference(uVar1);
  if (*(short **)(lVar2 + 0x10) == (short *)0x0) {
    hb_blob_destroy();
    return uVar1;
  }
  if ((0x23 < *(uint *)(lVar2 + 0x18)) && (**(short **)(lVar2 + 0x10) == 0x100)) {
    hb_blob_destroy();
    hb_blob_make_immutable(uVar1);
    return uVar1;
  }
  hb_blob_destroy();
  hb_blob_destroy(uVar1);
  uVar1 = hb_blob_get_empty();
  return uVar1;
}



/* hb_table_lazy_loader_t<OT::maxp, 2u, true>::create(hb_face_t*) */

undefined8 hb_table_lazy_loader_t<OT::maxp,2u,true>::create(hb_face_t *param_1)

{
  ushort *puVar1;
  undefined8 uVar2;
  long lVar3;
  ushort uVar4;
  
  uVar2 = hb_face_reference_table(param_1,0x6d617870);
  lVar3 = hb_blob_reference(uVar2);
  puVar1 = *(ushort **)(lVar3 + 0x10);
  if (puVar1 == (ushort *)0x0) {
    hb_blob_destroy();
  }
  else {
    if (*(uint *)(lVar3 + 0x18) < 6) {
LAB_0011ea65:
      hb_blob_destroy();
      hb_blob_destroy(uVar2);
      uVar2 = hb_blob_get_empty();
      return uVar2;
    }
    uVar4 = *puVar1 << 8 | *puVar1 >> 8;
    if (uVar4 == 1) {
      if (*(uint *)(lVar3 + 0x18) < 0x20) goto LAB_0011ea65;
    }
    else if ((uVar4 != 0) || (puVar1[1] != 0x50)) goto LAB_0011ea65;
    hb_blob_destroy();
    hb_blob_make_immutable(uVar2);
  }
  return uVar2;
}



/* OT::hmtxvmtx<OT::hmtx, OT::hhea, OT::HVAR>::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall
OT::hmtxvmtx<OT::hmtx,OT::hhea,OT::HVAR>::accelerator_t::accelerator_t
          (accelerator_t *this,hb_face_t *param_1)

{
  hb_face_t *phVar1;
  HVARVVAR *this_00;
  bool bVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  uint uVar12;
  long in_FS_OFFSET;
  undefined4 local_88 [2];
  undefined1 local_80 [16];
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  char local_60;
  int local_5c;
  long local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  hb_face_get_glyph_count(param_1);
  uVar8 = hb_face_reference_table(param_1,0x686d7478);
  lVar9 = hb_blob_reference(uVar8);
  if (*(long *)(lVar9 + 0x10) == 0) {
    hb_blob_destroy(lVar9);
  }
  else {
    hb_blob_destroy(lVar9);
    hb_blob_make_immutable(uVar8);
  }
  *(undefined8 *)(this + 0x18) = uVar8;
  local_68 = 0;
  local_60 = '\0';
  local_4b = 0;
  local_50 = hb_face_get_glyph_count(param_1);
  local_4c = 1;
  lVar10 = hb_face_reference_table(param_1,0x48564152);
  lVar9 = hb_blob_reference(lVar10);
  local_58 = lVar9;
  while( true ) {
    local_70 = *(uint *)(lVar9 + 0x18);
    this_00 = *(HVARVVAR **)(lVar9 + 0x10);
    local_6c = local_70 * 0x40;
    if (local_70 >> 0x1a == 0) {
      if (0x3fffffff < local_6c) {
        local_6c = 0x3fffffff;
      }
      if (local_6c < 0x4000) {
        local_6c = 0x4000;
      }
    }
    else {
      local_6c = 0x3fffffff;
    }
    local_80._8_8_ = this_00 + local_70;
    local_80._0_8_ = this_00;
    local_5c = 0;
    local_88[0] = 0;
    local_64 = 0;
    if (this_00 == (HVARVVAR *)0x0) {
      hb_blob_destroy(lVar9);
      goto LAB_0011ec13;
    }
    cVar3 = HVARVVAR::sanitize(this_00,(hb_sanitize_context_t *)local_88);
    lVar9 = local_58;
    if (cVar3 != '\0') {
      if (local_5c == 0) {
        hb_blob_destroy(local_58);
      }
      else {
        local_5c = 0;
        cVar3 = HVARVVAR::sanitize(this_00,(hb_sanitize_context_t *)local_88);
        if (local_5c != 0) {
          hb_blob_destroy(local_58);
          goto LAB_0011ed30;
        }
        hb_blob_destroy(local_58);
        local_58 = 0;
        local_70 = 0;
        local_80 = (undefined1  [16])0x0;
        if (cVar3 == '\0') goto LAB_0011ed30;
      }
      hb_blob_make_immutable(lVar10);
      goto LAB_0011ec13;
    }
    if ((local_5c == 0) || (local_60 != '\0')) break;
    local_80._0_8_ = hb_blob_get_data_writable(lVar10,0);
    local_80._8_8_ = (ulong)*(uint *)(lVar10 + 0x18) + local_80._0_8_;
    if (local_80._0_8_ == 0) break;
    local_60 = '\x01';
  }
  hb_blob_destroy(lVar9);
LAB_0011ed30:
  hb_blob_destroy(lVar10);
  lVar10 = hb_blob_get_empty();
LAB_0011ec13:
  *(long *)(this + 0x20) = lVar10;
  phVar1 = param_1 + 0x90;
  uVar5 = hb_face_get_upem(param_1);
  *(uint *)(this + 0x10) = uVar5 >> 1;
  puVar11 = *(undefined **)(this + 0x18);
  if (puVar11 == (undefined *)0x0) {
    puVar11 = &_hb_NullPool;
  }
  uVar5 = (*(uint *)(puVar11 + 0x18) - 1) + (uint)((*(uint *)(puVar11 + 0x18) & 1) == 0);
LAB_0011ec4c:
  lVar9 = *(long *)phVar1;
  if (lVar9 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar9 = hb_blob_get_empty();
    }
    else {
      lVar9 = hb_table_lazy_loader_t<OT::hhea,4u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar9 == 0) {
        lVar9 = hb_blob_get_empty();
        LOCK();
        lVar10 = *(long *)phVar1;
        if (lVar10 == 0) {
          *(long *)phVar1 = lVar9;
        }
        UNLOCK();
        if (lVar10 != 0) goto code_r0x0011ef36;
      }
      else {
        LOCK();
        lVar10 = *(long *)phVar1;
        if (lVar10 == 0) {
          *(long *)phVar1 = lVar9;
        }
        UNLOCK();
        if (lVar10 != 0) goto LAB_0011ed9d;
      }
    }
  }
  puVar11 = &_hb_NullPool;
  if (0x23 < *(uint *)(lVar9 + 0x18)) {
    puVar11 = *(undefined **)(lVar9 + 0x10);
  }
  uVar4 = *(ushort *)(puVar11 + 0x22) << 8 | *(ushort *)(puVar11 + 0x22) >> 8;
  *(uint *)this = (uint)uVar4;
  uVar7 = (uint)uVar4 << 2;
  if (uVar5 < uVar7) {
    *(uint *)this = uVar5 >> 2;
    uVar7 = (uVar5 >> 2) << 2;
  }
  uVar5 = uVar5 - uVar7;
  phVar1 = param_1 + 0x80;
LAB_0011ec8f:
  lVar9 = *(long *)phVar1;
  if (lVar9 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar9 = hb_blob_get_empty();
    }
    else {
      lVar9 = hb_table_lazy_loader_t<OT::maxp,2u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar9 == 0) {
        lVar9 = hb_blob_get_empty();
        LOCK();
        lVar10 = *(long *)phVar1;
        if (lVar10 == 0) {
          *(long *)phVar1 = lVar9;
        }
        UNLOCK();
        if (lVar10 != 0) goto code_r0x0011ef09;
      }
      else {
        LOCK();
        lVar10 = *(long *)phVar1;
        if (lVar10 == 0) {
          *(long *)phVar1 = lVar9;
        }
        UNLOCK();
        if (lVar10 != 0) goto LAB_0011eded;
      }
    }
  }
  uVar7 = *(uint *)this;
  puVar11 = &_hb_NullPool;
  if (5 < *(uint *)(lVar9 + 0x18)) {
    puVar11 = *(undefined **)(lVar9 + 0x10);
  }
  uVar4 = *(ushort *)(puVar11 + 4) << 8 | *(ushort *)(puVar11 + 4) >> 8;
  uVar6 = (uint)uVar4;
  if (uVar4 < uVar7) {
    *(uint *)(this + 4) = uVar7;
  }
  else {
    *(uint *)(this + 4) = (uint)uVar4;
    uVar12 = uVar4 - uVar7;
    if (uVar5 < uVar12 * 2) {
      uVar12 = uVar5 >> 1;
      uVar6 = uVar7 + uVar12;
      *(uint *)(this + 4) = uVar6;
    }
    bVar2 = uVar7 == 0;
    uVar5 = uVar5 + uVar12 * -2;
    uVar7 = uVar6;
    if (bVar2) {
      *(undefined8 *)this = 0;
      uVar7 = 0;
    }
  }
  *(uint *)(this + 8) = (uVar5 >> 1) + uVar7;
  uVar5 = *(uint *)(param_1 + 0x18);
  if (uVar5 == 0xffffffff) {
    uVar5 = hb_face_t::load_num_glyphs();
  }
  uVar7 = *(uint *)(this + 8);
  if (*(uint *)(this + 8) < uVar5) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0xc) = uVar7;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
code_r0x0011ef36:
  if (lVar9 != 0) {
LAB_0011ed9d:
    lVar10 = hb_blob_get_empty();
    if (lVar9 != lVar10) {
      hb_blob_destroy(lVar9);
    }
  }
  goto LAB_0011ec4c;
code_r0x0011ef09:
  if (lVar9 != 0) {
LAB_0011eded:
    lVar10 = hb_blob_get_empty();
    if (lVar9 != lVar10) {
      hb_blob_destroy(lVar9);
    }
  }
  goto LAB_0011ec8f;
}



/* OT::hmtxvmtx<OT::vmtx, OT::vhea, OT::VVAR>::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall
OT::hmtxvmtx<OT::vmtx,OT::vhea,OT::VVAR>::accelerator_t::accelerator_t
          (accelerator_t *this,hb_face_t *param_1)

{
  HVARVVAR *pHVar1;
  hb_face_t *phVar2;
  HVARVVAR *this_00;
  long lVar3;
  bool bVar4;
  char cVar5;
  ushort uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  HVARVVAR *pHVar14;
  uint uVar15;
  uint uVar16;
  long in_FS_OFFSET;
  undefined4 local_88 [2];
  undefined1 local_80 [16];
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  char local_60;
  uint local_5c;
  long local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  hb_face_get_glyph_count(param_1);
  uVar10 = hb_face_reference_table(param_1,0x766d7478);
  lVar11 = hb_blob_reference(uVar10);
  if (*(long *)(lVar11 + 0x10) == 0) {
    hb_blob_destroy(lVar11);
  }
  else {
    hb_blob_destroy(lVar11);
    hb_blob_make_immutable(uVar10);
  }
  *(undefined8 *)(this + 0x18) = uVar10;
  local_68 = 0;
  local_60 = '\0';
  local_4b = 0;
  local_50 = hb_face_get_glyph_count(param_1);
  local_4c = 1;
  lVar12 = hb_face_reference_table(param_1,0x56564152);
  lVar11 = hb_blob_reference(lVar12);
  local_58 = lVar11;
  do {
    local_70 = *(uint *)(lVar11 + 0x18);
    this_00 = *(HVARVVAR **)(lVar11 + 0x10);
    local_6c = local_70 * 0x40;
    if (local_70 >> 0x1a == 0) {
      if (0x3fffffff < local_6c) {
        local_6c = 0x3fffffff;
      }
      if (local_6c < 0x4000) {
        local_6c = 0x4000;
      }
    }
    else {
      local_6c = 0x3fffffff;
    }
    local_80._8_8_ = this_00 + local_70;
    local_80._0_8_ = this_00;
    local_5c = 0;
    local_88[0] = 0;
    local_64 = 0;
    if (this_00 == (HVARVVAR *)0x0) {
      hb_blob_destroy(lVar11);
      goto LAB_0011f128;
    }
    cVar5 = HVARVVAR::sanitize(this_00,(hb_sanitize_context_t *)local_88);
    lVar11 = local_58;
    if ((cVar5 == '\0') || ((HVARVVAR *)(ulong)local_70 < this_00 + (0x18 - local_80._0_8_))) {
      if (local_5c == 0) goto LAB_0011f245;
LAB_0011f031:
      if (local_60 != '\0') goto LAB_0011f245;
    }
    else {
      uVar16 = *(uint *)(this_00 + 0x14);
      if (uVar16 == 0) {
LAB_0011f0fe:
        if (local_5c == 0) {
          hb_blob_destroy(local_58);
        }
        else {
LAB_0011f4a8:
          local_5c = 0;
          cVar5 = VVAR::sanitize((VVAR *)this_00,(hb_sanitize_context_t *)local_88);
          if (local_5c != 0) goto LAB_0011f245;
          hb_blob_destroy(local_58);
          local_58 = 0;
          local_70 = 0;
          local_80 = (undefined1  [16])0x0;
          if (cVar5 == '\0') goto LAB_0011f24a;
        }
        hb_blob_make_immutable(lVar12);
        goto LAB_0011f128;
      }
      pHVar14 = this_00 + (uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                          uVar16 << 0x18);
      if (pHVar14 + (1 - local_80._0_8_) <= (HVARVVAR *)(ulong)local_70) {
        if (*pHVar14 == (HVARVVAR)0x0) {
          pHVar1 = pHVar14 + 4;
          if ((ulong)((long)pHVar1 - local_80._0_8_) <= (ulong)local_70) {
            if (((ulong)((long)pHVar1 - local_80._0_8_) <= (ulong)local_70) &&
               (uVar16 = (((byte)pHVar14[1] >> 4 & 3) + 1) *
                         (uint)(ushort)(*(ushort *)(pHVar14 + 2) << 8 |
                                       *(ushort *)(pHVar14 + 2) >> 8),
               uVar16 <= (uint)(local_80._8_4_ - (int)pHVar1))) {
joined_r0x0011f48f:
              local_6c = local_6c - uVar16;
              if (0 < (int)local_6c) goto LAB_0011f0fe;
            }
          }
        }
        else {
          if (*pHVar14 != (HVARVVAR)0x1) goto LAB_0011f0fe;
          pHVar1 = pHVar14 + 6;
          if ((ulong)((long)pHVar1 - local_80._0_8_) <= (ulong)local_70) {
            uVar16 = *(uint *)(pHVar14 + 2);
            lVar3 = (ulong)(((byte)pHVar14[1] >> 4 & 3) + 1) *
                    (ulong)(uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                           uVar16 << 0x18);
            uVar16 = (uint)lVar3;
            if ((((int)((ulong)lVar3 >> 0x20) == 0) &&
                ((ulong)((long)pHVar1 - local_80._0_8_) <= (ulong)local_70)) &&
               (uVar16 <= (uint)(local_80._8_4_ - (int)pHVar1))) goto joined_r0x0011f48f;
          }
        }
      }
      if (0x1f < local_5c) goto LAB_0011f031;
      local_5c = local_5c + 1;
      if (local_60 != '\0') {
        *(undefined4 *)(this_00 + 0x14) = 0;
        goto LAB_0011f4a8;
      }
    }
    local_80._0_8_ = hb_blob_get_data_writable(lVar12,0);
    local_80._8_8_ = (ulong)*(uint *)(lVar12 + 0x18) + local_80._0_8_;
    if (local_80._0_8_ == 0) goto LAB_0011f245;
    local_60 = '\x01';
  } while( true );
code_r0x0011f556:
  if (lVar11 != 0) {
LAB_0011f34d:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_0011f15f;
code_r0x0011f52c:
  if (lVar11 != 0) {
LAB_0011f39d:
    lVar12 = hb_blob_get_empty();
    if (lVar11 != lVar12) {
      hb_blob_destroy(lVar11);
    }
  }
  goto LAB_0011f1a2;
LAB_0011f245:
  hb_blob_destroy(local_58);
LAB_0011f24a:
  hb_blob_destroy(lVar12);
  lVar12 = hb_blob_get_empty();
LAB_0011f128:
  *(long *)(this + 0x20) = lVar12;
  phVar2 = param_1 + 200;
  uVar7 = hb_face_get_upem(param_1);
  *(undefined4 *)(this + 0x10) = uVar7;
  puVar13 = *(undefined **)(this + 0x18);
  if (puVar13 == (undefined *)0x0) {
    puVar13 = &_hb_NullPool;
  }
  uVar16 = (*(uint *)(puVar13 + 0x18) - 1) + (uint)((*(uint *)(puVar13 + 0x18) & 1) == 0);
LAB_0011f15f:
  lVar11 = *(long *)phVar2;
  if (lVar11 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar11 = hb_blob_get_empty();
    }
    else {
      lVar11 = hb_table_lazy_loader_t<OT::vhea,11u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar11 == 0) {
        lVar11 = hb_blob_get_empty();
        LOCK();
        lVar12 = *(long *)phVar2;
        if (lVar12 == 0) {
          *(long *)phVar2 = lVar11;
        }
        UNLOCK();
        if (lVar12 != 0) goto code_r0x0011f556;
      }
      else {
        LOCK();
        lVar12 = *(long *)phVar2;
        if (lVar12 == 0) {
          *(long *)phVar2 = lVar11;
        }
        UNLOCK();
        if (lVar12 != 0) goto LAB_0011f34d;
      }
    }
  }
  puVar13 = &_hb_NullPool;
  if (0x23 < *(uint *)(lVar11 + 0x18)) {
    puVar13 = *(undefined **)(lVar11 + 0x10);
  }
  uVar6 = *(ushort *)(puVar13 + 0x22) << 8 | *(ushort *)(puVar13 + 0x22) >> 8;
  *(uint *)this = (uint)uVar6;
  uVar9 = (uint)uVar6 << 2;
  if (uVar16 < uVar9) {
    *(uint *)this = uVar16 >> 2;
    uVar9 = (uVar16 >> 2) << 2;
  }
  uVar16 = uVar16 - uVar9;
  phVar2 = param_1 + 0x80;
LAB_0011f1a2:
  lVar11 = *(long *)phVar2;
  if (lVar11 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar11 = hb_blob_get_empty();
    }
    else {
      lVar11 = hb_table_lazy_loader_t<OT::maxp,2u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar11 == 0) {
        lVar11 = hb_blob_get_empty();
        LOCK();
        lVar12 = *(long *)phVar2;
        if (lVar12 == 0) {
          *(long *)phVar2 = lVar11;
        }
        UNLOCK();
        if (lVar12 != 0) goto code_r0x0011f52c;
      }
      else {
        LOCK();
        lVar12 = *(long *)phVar2;
        if (lVar12 == 0) {
          *(long *)phVar2 = lVar11;
        }
        UNLOCK();
        if (lVar12 != 0) goto LAB_0011f39d;
      }
    }
  }
  uVar9 = *(uint *)this;
  puVar13 = &_hb_NullPool;
  if (5 < *(uint *)(lVar11 + 0x18)) {
    puVar13 = *(undefined **)(lVar11 + 0x10);
  }
  uVar6 = *(ushort *)(puVar13 + 4) << 8 | *(ushort *)(puVar13 + 4) >> 8;
  uVar8 = (uint)uVar6;
  if (uVar6 < uVar9) {
    *(uint *)(this + 4) = uVar9;
  }
  else {
    *(uint *)(this + 4) = (uint)uVar6;
    uVar15 = uVar6 - uVar9;
    if (uVar16 < uVar15 * 2) {
      uVar15 = uVar16 >> 1;
      uVar8 = uVar9 + uVar15;
      *(uint *)(this + 4) = uVar8;
    }
    bVar4 = uVar9 == 0;
    uVar16 = uVar16 + uVar15 * -2;
    uVar9 = uVar8;
    if (bVar4) {
      *(undefined8 *)this = 0;
      uVar9 = 0;
    }
  }
  *(uint *)(this + 8) = (uVar16 >> 1) + uVar9;
  uVar16 = *(uint *)(param_1 + 0x18);
  if (uVar16 == 0xffffffff) {
    uVar16 = hb_face_t::load_num_glyphs();
  }
  uVar9 = *(uint *)(this + 8);
  if (*(uint *)(this + 8) < uVar16) {
    uVar9 = uVar16;
  }
  *(uint *)(this + 0xc) = uVar9;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* OT::glyf_accelerator_t::glyf_accelerator_t(hb_face_t*) */

void __thiscall
OT::glyf_accelerator_t::glyf_accelerator_t(glyf_accelerator_t *this,hb_face_t *param_1)

{
  hb_face_t *phVar1;
  hb_face_t *phVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  accelerator_t *this_00;
  long lVar7;
  accelerator_t *this_01;
  accelerator_t *this_02;
  uint uVar8;
  undefined *puVar9;
  
  phVar1 = param_1 + 0x78;
  this[0x18] = (glyf_accelerator_t)0x0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
LAB_0011f5ba:
  lVar6 = *(long *)phVar1;
  if (lVar6 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar6 = hb_blob_get_empty();
    }
    else {
      lVar6 = hb_table_lazy_loader_t<OT::head,1u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar6 == 0) {
        lVar6 = hb_blob_get_empty();
        LOCK();
        lVar7 = *(long *)phVar1;
        if (lVar7 == 0) {
          *(long *)phVar1 = lVar6;
        }
        UNLOCK();
        if (lVar7 != 0) goto code_r0x0011fa47;
      }
      else {
        LOCK();
        lVar7 = *(long *)phVar1;
        if (lVar7 == 0) {
          *(long *)phVar1 = lVar6;
        }
        UNLOCK();
        if (lVar7 != 0) goto LAB_0011f7b5;
      }
    }
  }
  puVar9 = &_hb_NullPool;
  if (*(uint *)(lVar6 + 0x18) < 0x36) goto LAB_0011f5d8;
  puVar9 = *(undefined **)(lVar6 + 0x10);
  lVar6 = *(long *)phVar1;
  while (lVar6 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar6 = hb_blob_get_empty();
      break;
    }
    lVar6 = hb_table_lazy_loader_t<OT::head,1u,true>::create(*(hb_face_t **)(param_1 + 0x70));
    if (lVar6 == 0) {
      lVar6 = hb_blob_get_empty();
      LOCK();
      lVar7 = *(long *)phVar1;
      if (lVar7 == 0) {
        *(long *)phVar1 = lVar6;
      }
      UNLOCK();
      if (lVar7 == 0) break;
      if (lVar6 != 0) goto LAB_0011f64e;
    }
    else {
      LOCK();
      lVar7 = *(long *)phVar1;
      if (lVar7 == 0) {
        *(long *)phVar1 = lVar6;
      }
      UNLOCK();
      if (lVar7 == 0) break;
LAB_0011f64e:
      lVar7 = hb_blob_get_empty();
      if (lVar6 != lVar7) {
        hb_blob_destroy(lVar6);
      }
    }
LAB_0011f5d8:
    lVar6 = *(long *)phVar1;
  }
  puVar4 = &_hb_NullPool;
  if (0x35 < *(uint *)(lVar6 + 0x18)) {
    puVar4 = *(undefined **)(lVar6 + 0x10);
  }
  if ((1 < (ushort)(*(ushort *)(puVar4 + 0x32) << 8 | *(ushort *)(puVar4 + 0x32) >> 8)) ||
     (1 < (ushort)(*(ushort *)(puVar4 + 0x34) << 8 | *(ushort *)(puVar4 + 0x34) >> 8))) {
    return;
  }
  phVar1 = param_1 + 0xe0;
  this[0x18] = (glyf_accelerator_t)(*(short *)(puVar9 + 0x32) == 0);
LAB_0011f687:
  lVar6 = *(long *)phVar1;
  if (lVar6 == 0) {
    if (*(long *)(param_1 + 0x70) == 0) {
      lVar6 = hb_blob_get_empty();
    }
    else {
      lVar6 = hb_face_reference_table(*(long *)(param_1 + 0x70),0x6c6f6361);
      lVar7 = hb_blob_reference(lVar6);
      if (*(long *)(lVar7 + 0x10) == 0) {
        hb_blob_destroy(lVar7);
      }
      else {
        hb_blob_destroy(lVar7);
        hb_blob_make_immutable(lVar6);
      }
      if (lVar6 == 0) {
        lVar6 = hb_blob_get_empty();
        LOCK();
        lVar7 = *(long *)phVar1;
        if (lVar7 == 0) {
          *(long *)phVar1 = lVar6;
        }
        UNLOCK();
        if (lVar7 != 0) goto code_r0x0011fae1;
      }
      else {
        LOCK();
        lVar7 = *(long *)phVar1;
        if (lVar7 == 0) {
          *(long *)phVar1 = lVar6;
        }
        UNLOCK();
        if (lVar7 != 0) goto LAB_0011f89c;
      }
    }
  }
  *(long *)(this + 0x20) = lVar6;
  hb_face_get_glyph_count(param_1);
  uVar5 = hb_face_reference_table(param_1,0x676c7966);
  lVar6 = hb_blob_reference(uVar5);
  if (*(long *)(lVar6 + 0x10) == 0) {
    hb_blob_destroy(lVar6);
  }
  else {
    hb_blob_destroy(lVar6);
    hb_blob_make_immutable(uVar5);
  }
  *(undefined8 *)(this + 0x28) = uVar5;
  phVar1 = param_1 + 0x118;
  do {
    while( true ) {
      this_00 = *(accelerator_t **)phVar1;
      if (this_00 != (accelerator_t *)0x0) goto LAB_0011f6f0;
      phVar2 = *(hb_face_t **)(param_1 + 0x70);
      if (phVar2 == (hb_face_t *)0x0) goto LAB_0011fa89;
      this_00 = (accelerator_t *)calloc(1,0x20);
      if (this_00 == (accelerator_t *)0x0) break;
      gvar::accelerator_t::accelerator_t(this_00,phVar2);
      LOCK();
      lVar6 = *(long *)phVar1;
      if (lVar6 == 0) {
        *(accelerator_t **)phVar1 = this_00;
      }
      UNLOCK();
      if (lVar6 == 0) goto LAB_0011f6f0;
      if (this_00 != (accelerator_t *)&_hb_NullPool) {
        hb_blob_destroy(*(undefined8 *)this_00);
        if (*(int *)(this_00 + 0x10) != 0) {
          free(*(void **)(this_00 + 0x18));
        }
        free(this_00);
      }
    }
    LOCK();
    lVar6 = *(long *)phVar1;
    if (lVar6 == 0) {
      *(undefined **)phVar1 = &_hb_NullPool;
    }
    UNLOCK();
  } while (lVar6 != 0);
LAB_0011fa89:
  this_00 = (accelerator_t *)&_hb_NullPool;
LAB_0011f6f0:
  *(accelerator_t **)this = this_00;
  phVar1 = param_1 + 0x98;
  do {
    while( true ) {
      this_01 = *(accelerator_t **)phVar1;
      if (this_01 != (accelerator_t *)0x0) goto LAB_0011f70a;
      phVar2 = *(hb_face_t **)(param_1 + 0x70);
      if (phVar2 == (hb_face_t *)0x0) goto LAB_0011fab5;
      this_01 = (accelerator_t *)calloc(1,0x28);
      if (this_01 == (accelerator_t *)0x0) break;
      hmtxvmtx<OT::hmtx,OT::hhea,OT::HVAR>::accelerator_t::accelerator_t(this_01,phVar2);
      LOCK();
      lVar6 = *(long *)phVar1;
      if (lVar6 == 0) {
        *(accelerator_t **)phVar1 = this_01;
      }
      UNLOCK();
      if (lVar6 == 0) goto LAB_0011f70a;
      if (this_01 != (accelerator_t *)&_hb_NullPool) {
        hb_blob_destroy(*(undefined8 *)(this_01 + 0x18));
        *(undefined8 *)(this_01 + 0x18) = 0;
        hb_blob_destroy(*(undefined8 *)(this_01 + 0x20));
        free(this_01);
      }
    }
    LOCK();
    lVar6 = *(long *)phVar1;
    if (lVar6 == 0) {
      *(undefined **)phVar1 = &_hb_NullPool;
    }
    UNLOCK();
  } while (lVar6 != 0);
LAB_0011fab5:
  this_01 = (accelerator_t *)&_hb_NullPool;
LAB_0011f70a:
  *(accelerator_t **)(this + 8) = this_01;
  phVar1 = param_1 + 0xd0;
  do {
    while( true ) {
      this_02 = *(accelerator_t **)phVar1;
      if (this_02 != (accelerator_t *)0x0) goto LAB_0011f725;
      phVar2 = *(hb_face_t **)(param_1 + 0x70);
      if (phVar2 == (hb_face_t *)0x0) goto LAB_0011fa6b;
      this_02 = (accelerator_t *)calloc(1,0x28);
      if (this_02 == (accelerator_t *)0x0) break;
      hmtxvmtx<OT::vmtx,OT::vhea,OT::VVAR>::accelerator_t::accelerator_t(this_02,phVar2);
      LOCK();
      lVar6 = *(long *)phVar1;
      if (lVar6 == 0) {
        *(accelerator_t **)phVar1 = this_02;
      }
      UNLOCK();
      if (lVar6 == 0) goto LAB_0011f725;
      if (this_02 != (accelerator_t *)&_hb_NullPool) {
        hb_blob_destroy(*(undefined8 *)(this_02 + 0x18));
        *(undefined8 *)(this_02 + 0x18) = 0;
        hb_blob_destroy(*(undefined8 *)(this_02 + 0x20));
        free(this_02);
      }
    }
    LOCK();
    lVar6 = *(long *)phVar1;
    if (lVar6 == 0) {
      *(undefined **)phVar1 = &_hb_NullPool;
    }
    UNLOCK();
  } while (lVar6 != 0);
LAB_0011fa6b:
  this_02 = (accelerator_t *)&_hb_NullPool;
LAB_0011f725:
  puVar9 = *(undefined **)(this + 0x20);
  *(accelerator_t **)(this + 0x10) = this_02;
  if (puVar9 == (undefined *)0x0) {
    puVar9 = &_hb_NullPool;
  }
  uVar3 = *(uint *)(puVar9 + 0x18) / ((-(uint)(this[0x18] == (glyf_accelerator_t)0x0) & 2) + 2);
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  *(uint *)(this + 0x1c) = uVar3 - 1;
  uVar3 = *(uint *)(param_1 + 0x18);
  if (uVar3 == 0xffffffff) {
    uVar3 = hb_face_t::load_num_glyphs();
  }
  uVar8 = *(uint *)(this + 0x1c);
  if (uVar3 < *(uint *)(this + 0x1c)) {
    uVar8 = uVar3;
  }
  *(uint *)(this + 0x1c) = uVar8;
  return;
code_r0x0011fa47:
  if (lVar6 != 0) {
LAB_0011f7b5:
    lVar7 = hb_blob_get_empty();
    if (lVar6 != lVar7) {
      hb_blob_destroy(lVar6);
    }
  }
  goto LAB_0011f5ba;
code_r0x0011fae1:
  if (lVar6 != 0) {
LAB_0011f89c:
    lVar7 = hb_blob_get_empty();
    if (lVar6 != lVar7) {
      hb_blob_destroy(lVar6);
    }
  }
  goto LAB_0011f687;
}



/* OT::NoVariable<OT::PaintLinearGradient<OT::NoVariable> >::sanitize(hb_sanitize_context_t*) const
    */

undefined8 __thiscall
OT::NoVariable<OT::PaintLinearGradient<OT::NoVariable>>::sanitize
          (NoVariable<OT::PaintLinearGradient<OT::NoVariable>> *this,hb_sanitize_context_t *param_1)

{
  NoVariable<OT::PaintLinearGradient<OT::NoVariable>> *pNVar1;
  ushort uVar2;
  int iVar3;
  
  if (((NoVariable<OT::PaintLinearGradient<OT::NoVariable>> *)(ulong)*(uint *)(param_1 + 0x18) <
       this + (0x10 - *(long *)(param_1 + 8))) ||
     ((NoVariable<OT::PaintLinearGradient<OT::NoVariable>> *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (4 - *(long *)(param_1 + 8)))) {
    return 0;
  }
  iVar3 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  if ((iVar3 != 0) &&
     ((((pNVar1 = this + (long)iVar3 + 3,
        (ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pNVar1 - *(long *)(param_1 + 8)) ||
        ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pNVar1 - *(long *)(param_1 + 8)))) ||
       (uVar2 = *(ushort *)(this + (long)iVar3 + 1) << 8 | *(ushort *)(this + (long)iVar3 + 1) >> 8,
       iVar3 = (uint)uVar2 + (uint)uVar2 * 2,
       (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pNVar1) < (uint)(iVar3 * 2))) ||
      (iVar3 = *(int *)(param_1 + 0x1c) + iVar3 * -2, *(int *)(param_1 + 0x1c) = iVar3, iVar3 < 1)))
     ) {
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    this[3] = (NoVariable<OT::PaintLinearGradient<OT::NoVariable>>)0x0;
    *(undefined2 *)(this + 1) = 0;
  }
  return 1;
}



/* OT::Variable<OT::PaintLinearGradient<OT::Variable> >::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::Variable<OT::PaintLinearGradient<OT::Variable>>::sanitize
          (Variable<OT::PaintLinearGradient<OT::Variable>> *this,hb_sanitize_context_t *param_1)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  Variable<OT::PaintLinearGradient<OT::Variable>> *pVVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  pVVar4 = (Variable<OT::PaintLinearGradient<OT::Variable>> *)(ulong)*(uint *)(param_1 + 0x18);
  if (((pVVar4 < this + (0x14 - lVar1)) || (pVVar4 < this + (0x10 - lVar1))) ||
     (pVVar4 < this + (4 - lVar1))) {
    return 0;
  }
  iVar3 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  if ((iVar3 != 0) &&
     (((pVVar4 = this + (long)iVar3 + 3,
       (ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pVVar4 - *(long *)(param_1 + 8)) ||
       ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pVVar4 - *(long *)(param_1 + 8)))) ||
      ((uVar2 = *(ushort *)(this + (long)iVar3 + 1) << 8 | *(ushort *)(this + (long)iVar3 + 1) >> 8,
       iVar3 = (uint)uVar2 + (uint)uVar2 * 4,
       (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pVVar4) < (uint)(iVar3 * 2) ||
       (iVar3 = *(int *)(param_1 + 0x1c) + iVar3 * -2, *(int *)(param_1 + 0x1c) = iVar3, iVar3 < 1))
      )))) {
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    this[3] = (Variable<OT::PaintLinearGradient<OT::Variable>>)0x0;
    *(undefined2 *)(this + 1) = 0;
  }
  return 1;
}



/* OT::NoVariable<OT::PaintRadialGradient<OT::NoVariable> >::sanitize(hb_sanitize_context_t*) const
    */

undefined8 __thiscall
OT::NoVariable<OT::PaintRadialGradient<OT::NoVariable>>::sanitize
          (NoVariable<OT::PaintRadialGradient<OT::NoVariable>> *this,hb_sanitize_context_t *param_1)

{
  NoVariable<OT::PaintRadialGradient<OT::NoVariable>> *pNVar1;
  ushort uVar2;
  int iVar3;
  
  if (((NoVariable<OT::PaintRadialGradient<OT::NoVariable>> *)(ulong)*(uint *)(param_1 + 0x18) <
       this + (0x10 - *(long *)(param_1 + 8))) ||
     ((NoVariable<OT::PaintRadialGradient<OT::NoVariable>> *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (4 - *(long *)(param_1 + 8)))) {
    return 0;
  }
  iVar3 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  if ((iVar3 != 0) &&
     ((((pNVar1 = this + (long)iVar3 + 3,
        (ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pNVar1 - *(long *)(param_1 + 8)) ||
        ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pNVar1 - *(long *)(param_1 + 8)))) ||
       (uVar2 = *(ushort *)(this + (long)iVar3 + 1) << 8 | *(ushort *)(this + (long)iVar3 + 1) >> 8,
       iVar3 = (uint)uVar2 + (uint)uVar2 * 2,
       (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pNVar1) < (uint)(iVar3 * 2))) ||
      (iVar3 = *(int *)(param_1 + 0x1c) + iVar3 * -2, *(int *)(param_1 + 0x1c) = iVar3, iVar3 < 1)))
     ) {
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    this[3] = (NoVariable<OT::PaintRadialGradient<OT::NoVariable>>)0x0;
    *(undefined2 *)(this + 1) = 0;
  }
  return 1;
}



/* OT::Variable<OT::PaintRadialGradient<OT::Variable> >::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::Variable<OT::PaintRadialGradient<OT::Variable>>::sanitize
          (Variable<OT::PaintRadialGradient<OT::Variable>> *this,hb_sanitize_context_t *param_1)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  Variable<OT::PaintRadialGradient<OT::Variable>> *pVVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  pVVar4 = (Variable<OT::PaintRadialGradient<OT::Variable>> *)(ulong)*(uint *)(param_1 + 0x18);
  if (((pVVar4 < this + (0x14 - lVar1)) || (pVVar4 < this + (0x10 - lVar1))) ||
     (pVVar4 < this + (4 - lVar1))) {
    return 0;
  }
  iVar3 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  if ((iVar3 != 0) &&
     (((pVVar4 = this + (long)iVar3 + 3,
       (ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pVVar4 - *(long *)(param_1 + 8)) ||
       ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pVVar4 - *(long *)(param_1 + 8)))) ||
      ((uVar2 = *(ushort *)(this + (long)iVar3 + 1) << 8 | *(ushort *)(this + (long)iVar3 + 1) >> 8,
       iVar3 = (uint)uVar2 + (uint)uVar2 * 4,
       (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pVVar4) < (uint)(iVar3 * 2) ||
       (iVar3 = *(int *)(param_1 + 0x1c) + iVar3 * -2, *(int *)(param_1 + 0x1c) = iVar3, iVar3 < 1))
      )))) {
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    this[3] = (Variable<OT::PaintRadialGradient<OT::Variable>>)0x0;
    *(undefined2 *)(this + 1) = 0;
  }
  return 1;
}



/* OT::NoVariable<OT::PaintSweepGradient<OT::NoVariable> >::sanitize(hb_sanitize_context_t*) const
    */

undefined8 __thiscall
OT::NoVariable<OT::PaintSweepGradient<OT::NoVariable>>::sanitize
          (NoVariable<OT::PaintSweepGradient<OT::NoVariable>> *this,hb_sanitize_context_t *param_1)

{
  NoVariable<OT::PaintSweepGradient<OT::NoVariable>> *pNVar1;
  ushort uVar2;
  int iVar3;
  
  if (((NoVariable<OT::PaintSweepGradient<OT::NoVariable>> *)(ulong)*(uint *)(param_1 + 0x18) <
       this + (0xc - *(long *)(param_1 + 8))) ||
     ((NoVariable<OT::PaintSweepGradient<OT::NoVariable>> *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (4 - *(long *)(param_1 + 8)))) {
    return 0;
  }
  iVar3 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  if ((iVar3 != 0) &&
     ((((pNVar1 = this + (long)iVar3 + 3,
        (ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pNVar1 - *(long *)(param_1 + 8)) ||
        ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pNVar1 - *(long *)(param_1 + 8)))) ||
       (uVar2 = *(ushort *)(this + (long)iVar3 + 1) << 8 | *(ushort *)(this + (long)iVar3 + 1) >> 8,
       iVar3 = (uint)uVar2 + (uint)uVar2 * 2,
       (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pNVar1) < (uint)(iVar3 * 2))) ||
      (iVar3 = *(int *)(param_1 + 0x1c) + iVar3 * -2, *(int *)(param_1 + 0x1c) = iVar3, iVar3 < 1)))
     ) {
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    this[3] = (NoVariable<OT::PaintSweepGradient<OT::NoVariable>>)0x0;
    *(undefined2 *)(this + 1) = 0;
  }
  return 1;
}



/* OT::Variable<OT::PaintSweepGradient<OT::Variable> >::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::Variable<OT::PaintSweepGradient<OT::Variable>>::sanitize
          (Variable<OT::PaintSweepGradient<OT::Variable>> *this,hb_sanitize_context_t *param_1)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  Variable<OT::PaintSweepGradient<OT::Variable>> *pVVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  pVVar4 = (Variable<OT::PaintSweepGradient<OT::Variable>> *)(ulong)*(uint *)(param_1 + 0x18);
  if (((pVVar4 < this + (0x10 - lVar1)) || (pVVar4 < this + (0xc - lVar1))) ||
     (pVVar4 < this + (4 - lVar1))) {
    return 0;
  }
  iVar3 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  if ((iVar3 != 0) &&
     (((pVVar4 = this + (long)iVar3 + 3,
       (ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pVVar4 - *(long *)(param_1 + 8)) ||
       ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pVVar4 - *(long *)(param_1 + 8)))) ||
      ((uVar2 = *(ushort *)(this + (long)iVar3 + 1) << 8 | *(ushort *)(this + (long)iVar3 + 1) >> 8,
       iVar3 = (uint)uVar2 + (uint)uVar2 * 4,
       (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pVVar4) < (uint)(iVar3 * 2) ||
       (iVar3 = *(int *)(param_1 + 0x1c) + iVar3 * -2, *(int *)(param_1 + 0x1c) = iVar3, iVar3 < 1))
      )))) {
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    this[3] = (Variable<OT::PaintSweepGradient<OT::Variable>>)0x0;
    *(undefined2 *)(this + 1) = 0;
  }
  return 1;
}



/* OT::PaintTransform<OT::Variable>::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::PaintTransform<OT::Variable>::sanitize
          (PaintTransform<OT::Variable> *this,hb_sanitize_context_t *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if ((PaintTransform<OT::Variable> *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (7 - *(long *)(param_1 + 8))) {
    return 0;
  }
  if ((PaintTransform<OT::Variable> *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (4 - *(long *)(param_1 + 8))) {
    return 0;
  }
  iVar3 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  if (iVar3 != 0) {
    if ((*(int *)(param_1 + 0x24) < 0x40) &&
       (iVar2 = *(int *)(param_1 + 0x24) + 1, *(int *)(param_1 + 0x24) = iVar2, iVar2 != 0)) {
      cVar1 = Paint::dispatch<hb_sanitize_context_t>((Paint *)(this + iVar3),param_1);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
      if (cVar1 != '\0') goto LAB_00120090;
    }
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    this[3] = (PaintTransform<OT::Variable>)0x0;
    *(undefined2 *)(this + 1) = 0;
  }
LAB_00120090:
  if ((PaintTransform<OT::Variable> *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (7 - *(long *)(param_1 + 8))) {
    return 0;
  }
  iVar3 = (uint)(byte)this[4] * 0x10000 + (uint)(byte)this[5] * 0x100 + (uint)(byte)this[6];
  if (iVar3 != 0) {
    if (((PaintTransform<OT::Variable> *)(ulong)*(uint *)(param_1 + 0x18) <
         this + (((long)iVar3 + 0x1c) - *(long *)(param_1 + 8))) ||
       ((PaintTransform<OT::Variable> *)(ulong)*(uint *)(param_1 + 0x18) <
        this + (((long)iVar3 + 0x18) - *(long *)(param_1 + 8)))) {
      if (0x1f < *(uint *)(param_1 + 0x2c)) {
        return 0;
      }
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
      if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
        return 0;
      }
      this[6] = (PaintTransform<OT::Variable>)0x0;
      *(undefined2 *)(this + 4) = 0;
    }
  }
  return 1;
}



/* hb_sanitize_context_t::return_t
   OT::Paint::dispatch<hb_sanitize_context_t>(hb_sanitize_context_t*) const */

ulong __thiscall
OT::Paint::dispatch<hb_sanitize_context_t>(Paint *this,hb_sanitize_context_t *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  Paint *pPVar6;
  
  if ((Paint *)(ulong)*(uint *)(param_1 + 0x18) < this + (1 - *(long *)(param_1 + 8))) {
    return 0;
  }
  switch(*this) {
  default:
    goto LAB_00120222;
  case (Paint)0x1:
    return (ulong)CONCAT31((int3)(*(uint *)(param_1 + 0x18) >> 8),
                           this + (6 - *(long *)(param_1 + 8)) <=
                           (Paint *)(ulong)*(uint *)(param_1 + 0x18));
  case (Paint)0x2:
    return (ulong)CONCAT31((int3)(*(uint *)(param_1 + 0x18) >> 8),
                           this + (5 - *(long *)(param_1 + 8)) <=
                           (Paint *)(ulong)*(uint *)(param_1 + 0x18));
  case (Paint)0x3:
    if ((Paint *)(ulong)*(uint *)(param_1 + 0x18) < this + (9 - *(long *)(param_1 + 8))) {
      return 0;
    }
    return CONCAT71((int7)((ulong)(this + (9 - *(long *)(param_1 + 8))) >> 8),
                    this + (5 - *(long *)(param_1 + 8)) <= (Paint *)(ulong)*(uint *)(param_1 + 0x18)
                   );
  case (Paint)0x4:
    uVar4 = NoVariable<OT::PaintLinearGradient<OT::NoVariable>>::sanitize
                      ((NoVariable<OT::PaintLinearGradient<OT::NoVariable>> *)this,param_1);
    return uVar4;
  case (Paint)0x5:
    uVar4 = Variable<OT::PaintLinearGradient<OT::Variable>>::sanitize
                      ((Variable<OT::PaintLinearGradient<OT::Variable>> *)this,param_1);
    return uVar4;
  case (Paint)0x6:
    uVar4 = NoVariable<OT::PaintRadialGradient<OT::NoVariable>>::sanitize
                      ((NoVariable<OT::PaintRadialGradient<OT::NoVariable>> *)this,param_1);
    return uVar4;
  case (Paint)0x7:
    uVar4 = Variable<OT::PaintRadialGradient<OT::Variable>>::sanitize
                      ((Variable<OT::PaintRadialGradient<OT::Variable>> *)this,param_1);
    return uVar4;
  case (Paint)0x8:
    uVar4 = NoVariable<OT::PaintSweepGradient<OT::NoVariable>>::sanitize
                      ((NoVariable<OT::PaintSweepGradient<OT::NoVariable>> *)this,param_1);
    return uVar4;
  case (Paint)0x9:
    uVar4 = Variable<OT::PaintSweepGradient<OT::Variable>>::sanitize
                      ((Variable<OT::PaintSweepGradient<OT::Variable>> *)this,param_1);
    return uVar4;
  case (Paint)0xa:
  case (Paint)0x14:
  case (Paint)0x18:
    lVar5 = *(long *)(param_1 + 8);
    pPVar6 = (Paint *)(ulong)*(uint *)(param_1 + 0x18);
    goto LAB_001201b7;
  case (Paint)0xb:
    return (ulong)CONCAT31((int3)(*(uint *)(param_1 + 0x18) >> 8),
                           this + (3 - *(long *)(param_1 + 8)) <=
                           (Paint *)(ulong)*(uint *)(param_1 + 0x18));
  case (Paint)0xc:
    uVar4 = PaintTransform<OT::NoVariable>::sanitize((PaintTransform<OT::NoVariable> *)this,param_1)
    ;
    return uVar4;
  case (Paint)0xd:
    uVar4 = PaintTransform<OT::Variable>::sanitize((PaintTransform<OT::Variable> *)this,param_1);
    return uVar4;
  case (Paint)0xe:
  case (Paint)0x10:
    lVar5 = *(long *)(param_1 + 8);
    pPVar6 = (Paint *)(ulong)*(uint *)(param_1 + 0x18);
    goto LAB_0012020b;
  case (Paint)0xf:
  case (Paint)0x11:
  case (Paint)0x1d:
    lVar5 = *(long *)(param_1 + 8);
    pPVar6 = (Paint *)(ulong)*(uint *)(param_1 + 0x18);
    if (pPVar6 < this + (0xc - lVar5)) {
      return 0;
    }
LAB_0012020b:
    if (pPVar6 < this + (8 - lVar5)) {
      return 0;
    }
    break;
  case (Paint)0x12:
  case (Paint)0x1e:
    lVar5 = *(long *)(param_1 + 8);
    pPVar6 = (Paint *)(ulong)*(uint *)(param_1 + 0x18);
    if (pPVar6 < this + (0xc - lVar5)) {
      return 0;
    }
    break;
  case (Paint)0x13:
  case (Paint)0x1f:
    lVar5 = *(long *)(param_1 + 8);
    pPVar6 = (Paint *)(ulong)*(uint *)(param_1 + 0x18);
    if (pPVar6 < this + (0x10 - lVar5)) {
      return 0;
    }
    if (pPVar6 < this + (0xc - lVar5)) {
      return 0;
    }
    break;
  case (Paint)0x15:
  case (Paint)0x19:
    lVar5 = *(long *)(param_1 + 8);
    pPVar6 = (Paint *)(ulong)*(uint *)(param_1 + 0x18);
    if (pPVar6 < this + (10 - lVar5)) {
      return 0;
    }
LAB_001201b7:
    if (pPVar6 < this + (6 - lVar5)) {
      return 0;
    }
    break;
  case (Paint)0x16:
  case (Paint)0x1a:
    lVar5 = *(long *)(param_1 + 8);
    pPVar6 = (Paint *)(ulong)*(uint *)(param_1 + 0x18);
    if (pPVar6 < this + (10 - lVar5)) {
      return 0;
    }
    break;
  case (Paint)0x17:
  case (Paint)0x1b:
    lVar5 = *(long *)(param_1 + 8);
    pPVar6 = (Paint *)(ulong)*(uint *)(param_1 + 0x18);
    if (pPVar6 < this + (0xe - lVar5)) {
      return 0;
    }
    if (pPVar6 < this + (10 - lVar5)) {
      return 0;
    }
    break;
  case (Paint)0x1c:
    lVar5 = *(long *)(param_1 + 8);
    pPVar6 = (Paint *)(ulong)*(uint *)(param_1 + 0x18);
    if (pPVar6 < this + (8 - lVar5)) {
      return 0;
    }
    break;
  case (Paint)0x20:
    uVar4 = PaintComposite::sanitize((PaintComposite *)this,param_1);
    return uVar4;
  }
  if (pPVar6 < this + (4 - lVar5)) {
    return 0;
  }
  iVar2 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  if (iVar2 != 0) {
    if ((*(int *)(param_1 + 0x24) < 0x40) &&
       (iVar3 = *(int *)(param_1 + 0x24) + 1, *(int *)(param_1 + 0x24) = iVar3, iVar3 != 0)) {
      cVar1 = dispatch<hb_sanitize_context_t>(this + iVar2,param_1);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
      if (cVar1 != '\0') {
        return 1;
      }
    }
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    this[3] = (Paint)0x0;
    *(undefined2 *)(this + 1) = 0;
  }
LAB_00120222:
  return 1;
}



/* OT::BaseGlyphList::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::BaseGlyphList::sanitize(BaseGlyphList *this,hb_sanitize_context_t *param_1)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  BaseGlyphList *pBVar6;
  uint uVar7;
  bool bVar8;
  
  pBVar6 = this + 4;
  if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pBVar6 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar4 = *(uint *)this;
  lVar2 = (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) *
          6;
  bVar8 = (int)((ulong)lVar2 >> 0x20) != 0;
  uVar4 = (uint)lVar2;
  uVar7 = (uint)bVar8;
  if ((((bVar8) ||
       ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pBVar6 - *(long *)(param_1 + 8)))) ||
      ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pBVar6) < uVar4)) ||
     (iVar5 = *(int *)(param_1 + 0x1c) - uVar4, *(int *)(param_1 + 0x1c) = iVar5, iVar5 < 1)) {
    return 0;
  }
  uVar4 = *(uint *)this;
  pBVar6 = this + 10;
  if (uVar4 != 0) {
    do {
      if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pBVar6 - *(long *)(param_1 + 8))) {
        return 0;
      }
      uVar1 = *(uint *)(pBVar6 + -4);
      if (uVar1 != 0) {
        if ((*(int *)(param_1 + 0x24) < 0x40) &&
           (iVar5 = *(int *)(param_1 + 0x24) + 1, *(int *)(param_1 + 0x24) = iVar5, iVar5 != 0)) {
          cVar3 = Paint::dispatch<hb_sanitize_context_t>
                            ((Paint *)(this + (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 |
                                               (uVar1 & 0xff00) << 8 | uVar1 << 0x18)),param_1);
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
          if (cVar3 != '\0') goto LAB_001205a0;
        }
        if (0x1f < *(uint *)(param_1 + 0x2c)) {
          return 0;
        }
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
        if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
          return 0;
        }
        *(undefined4 *)(pBVar6 + -4) = 0;
      }
LAB_001205a0:
      uVar7 = uVar7 + 1;
      pBVar6 = pBVar6 + 6;
    } while (uVar7 < (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                     uVar4 << 0x18));
  }
  return 1;
}



/* OT::COLR::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall OT::COLR::sanitize(COLR *this,hb_sanitize_context_t *param_1)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  COLR *pCVar7;
  COLR *pCVar8;
  ushort uVar9;
  int iVar10;
  COLR *pCVar11;
  
  if ((COLR *)(ulong)*(uint *)(param_1 + 0x18) < this + (0xe - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar6 = *(uint *)(this + 4);
  if ((ulong)*(uint *)(param_1 + 0x18) <
      (ulong)((long)(this + (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                            uVar6 << 0x18)) - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar9 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
  iVar10 = (uint)uVar9 + (uint)uVar9 * 2;
  if ((uint)((int)*(undefined8 *)(param_1 + 0x10) -
            (int)(this + (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                         uVar6 << 0x18))) < (uint)(iVar10 * 2)) {
    return 0;
  }
  iVar10 = *(int *)(param_1 + 0x1c) + iVar10 * -2;
  *(int *)(param_1 + 0x1c) = iVar10;
  if (iVar10 < 1) {
    return 0;
  }
  uVar6 = *(uint *)(this + 8);
  if ((ulong)*(uint *)(param_1 + 0x18) <
      (ulong)((long)(this + (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                            uVar6 << 0x18)) - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar5 = (uint)(ushort)(*(ushort *)(this + 0xc) << 8 | *(ushort *)(this + 0xc) >> 8);
  if ((uint)((int)*(undefined8 *)(param_1 + 0x10) -
            (int)(this + (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                         uVar6 << 0x18))) < uVar5 * 4) {
    return 0;
  }
  iVar10 = iVar10 + uVar5 * -4;
  *(int *)(param_1 + 0x1c) = iVar10;
  if (iVar10 < 1) {
    return 0;
  }
  if (*(short *)this == 0) {
    return 1;
  }
  if ((COLR *)(ulong)*(uint *)(param_1 + 0x18) < this + (0x12 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar6 = *(uint *)(this + 0xe);
  if ((uVar6 != 0) &&
     (cVar4 = BaseGlyphList::sanitize
                        ((BaseGlyphList *)
                         (this + (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                                 uVar6 << 0x18)),param_1), cVar4 == '\0')) {
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    *(undefined4 *)(this + 0xe) = 0;
  }
  if ((COLR *)(ulong)*(uint *)(param_1 + 0x18) < this + (0x16 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar6 = *(uint *)(this + 0x12);
  if (uVar6 != 0) {
    pCVar11 = this + (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                     uVar6 << 0x18);
    pCVar7 = pCVar11 + 4;
    if ((ulong)((long)pCVar7 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
      uVar6 = *(uint *)pCVar11;
      uVar5 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      bVar2 = (uVar6 << 0x18) >> 0x1e != 0;
      uVar6 = (uint)bVar2;
      if ((((!bVar2) &&
           ((ulong)((long)pCVar7 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
          (uVar5 * 4 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pCVar7))) &&
         (iVar10 = *(int *)(param_1 + 0x1c) + uVar5 * -4, *(int *)(param_1 + 0x1c) = iVar10,
         0 < iVar10)) {
        uVar5 = *(uint *)pCVar11;
        if (uVar5 != 0) {
          pCVar7 = pCVar11 + 8;
          do {
            if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pCVar7 - *(long *)(param_1 + 8)))
            goto LAB_001208f0;
            uVar1 = *(uint *)(pCVar7 + -4);
            if (uVar1 != 0) {
              if ((*(int *)(param_1 + 0x24) < 0x40) &&
                 (iVar10 = *(int *)(param_1 + 0x24) + 1, *(int *)(param_1 + 0x24) = iVar10,
                 iVar10 != 0)) {
                cVar4 = Paint::dispatch<hb_sanitize_context_t>
                                  ((Paint *)(pCVar11 +
                                            (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 |
                                             (uVar1 & 0xff00) << 8 | uVar1 << 0x18)),param_1);
                *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
                if (cVar4 != '\0') goto LAB_00120880;
              }
              if (0x1f < *(uint *)(param_1 + 0x2c)) {
                return 0;
              }
              *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
              if (param_1[0x28] == (hb_sanitize_context_t)0x0) goto LAB_001208f0;
              *(uint *)(pCVar7 + -4) = 0;
            }
LAB_00120880:
            uVar6 = uVar6 + 1;
            pCVar7 = pCVar7 + 4;
          } while (uVar6 < (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                           uVar5 << 0x18));
        }
        goto LAB_0012074e;
      }
    }
LAB_001208f0:
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    *(undefined4 *)(this + 0x12) = 0;
  }
LAB_0012074e:
  if ((COLR *)(ulong)*(uint *)(param_1 + 0x18) < this + (0x1a - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar6 = *(uint *)(this + 0x16);
  if ((uVar6 != 0) &&
     (cVar4 = ClipList::sanitize((ClipList *)
                                 (this + (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 |
                                          (uVar6 & 0xff00) << 8 | uVar6 << 0x18)),param_1),
     cVar4 == '\0')) {
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    *(undefined4 *)(this + 0x16) = 0;
  }
  if ((COLR *)(ulong)*(uint *)(param_1 + 0x18) < this + (0x1e - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar6 = *(uint *)(this + 0x1a);
  if (uVar6 != 0) {
    pCVar7 = this + (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18
                    );
    if (pCVar7 + (1 - *(long *)(param_1 + 8)) <= (COLR *)(ulong)*(uint *)(param_1 + 0x18)) {
      if (*pCVar7 == (COLR)0x0) {
        pCVar11 = pCVar7 + 4;
        if ((ulong)((long)pCVar11 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
          pCVar8 = (COLR *)(ulong)*(uint *)(param_1 + 0x18);
          if ((pCVar11 + -*(long *)(param_1 + 8) <= pCVar8) &&
             (uVar6 = (((byte)pCVar7[1] >> 4 & 3) + 1) *
                      (uint)(ushort)(*(ushort *)(pCVar7 + 2) << 8 | *(ushort *)(pCVar7 + 2) >> 8),
             uVar6 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pCVar11))) {
LAB_00120a0e:
            iVar10 = *(int *)(param_1 + 0x1c);
            *(uint *)(param_1 + 0x1c) = iVar10 - uVar6;
            if (0 < (int)(iVar10 - uVar6)) goto LAB_0012078f;
          }
        }
      }
      else {
        if (*pCVar7 != (COLR)0x1) goto LAB_0012078c;
        pCVar11 = pCVar7 + 6;
        if ((ulong)((long)pCVar11 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
          uVar6 = *(uint *)(pCVar7 + 2);
          lVar3 = (ulong)(((byte)pCVar7[1] >> 4 & 3) + 1) *
                  (ulong)(uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                         uVar6 << 0x18);
          uVar6 = (uint)lVar3;
          if ((((int)((ulong)lVar3 >> 0x20) == 0) &&
              (pCVar8 = (COLR *)(ulong)*(uint *)(param_1 + 0x18),
              pCVar11 + -*(long *)(param_1 + 8) <= pCVar8)) &&
             (uVar6 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pCVar11)))
          goto LAB_00120a0e;
        }
      }
    }
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    *(undefined4 *)(this + 0x1a) = 0;
  }
LAB_0012078c:
  pCVar8 = (COLR *)(ulong)*(uint *)(param_1 + 0x18);
LAB_0012078f:
  if (pCVar8 < this + (0x22 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar6 = *(uint *)(this + 0x1e);
  if ((uVar6 != 0) &&
     (cVar4 = ItemVariationStore::sanitize
                        ((ItemVariationStore *)
                         (this + (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                                 uVar6 << 0x18)),param_1), cVar4 == '\0')) {
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    *(undefined4 *)(this + 0x1e) = 0;
  }
  return 1;
}



/* hb_table_lazy_loader_t<OT::COLR, 35u, true>::create(hb_face_t*) */

long hb_table_lazy_loader_t<OT::COLR,35u,true>::create(hb_face_t *param_1)

{
  uint uVar1;
  COLR *this;
  char cVar2;
  long lVar3;
  uint uVar4;
  long in_FS_OFFSET;
  ulong local_68;
  COLR *local_60;
  COLR *pCStack_58;
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  long local_38;
  undefined4 local_30;
  undefined2 local_2c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c = 1;
  local_60 = (COLR *)0x0;
  pCStack_58 = (COLR *)0x0;
  local_68 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  lVar3 = hb_face_reference_table(param_1,0x434f4c52);
  local_38 = hb_blob_reference(lVar3);
  local_40 = local_40 & 0xffffffffffffff00;
  while( true ) {
    uVar1 = *(uint *)(local_38 + 0x18);
    this = *(COLR **)(local_38 + 0x10);
    pCStack_58 = this + uVar1;
    if (uVar1 >> 0x1a == 0) {
      uVar4 = uVar1 << 6;
      if (0x3fffffff < uVar1 << 6) {
        uVar4 = 0x3fffffff;
      }
      if (uVar4 < 0x4000) {
        uVar4 = 0x4000;
      }
    }
    else {
      uVar4 = 0x3fffffff;
    }
    local_50 = CONCAT44(uVar4,uVar1);
    local_40 = local_40 & 0xffffffff;
    local_68 = local_68 & 0xffffffff00000000;
    local_48 = local_48 & 0xffffffff;
    local_60 = this;
    if (this == (COLR *)0x0) goto LAB_00120bfa;
    cVar2 = OT::COLR::sanitize(this,(hb_sanitize_context_t *)&local_68);
    if (cVar2 != '\0') break;
    if ((local_40._4_4_ == 0) || ((char)local_40 != '\0')) goto LAB_00120c20;
    local_60 = (COLR *)hb_blob_get_data_writable(lVar3,0);
    pCStack_58 = local_60 + *(uint *)(lVar3 + 0x18);
    if (local_60 == (COLR *)0x0) goto LAB_00120c20;
    local_40 = CONCAT71(local_40._1_7_,1);
  }
  if (local_40._4_4_ == 0) {
    hb_blob_destroy(local_38);
    local_50 = local_50 & 0xffffffff00000000;
  }
  else {
    local_40 = local_40 & 0xffffffff;
    cVar2 = OT::COLR::sanitize(this,(hb_sanitize_context_t *)&local_68);
    if (local_40._4_4_ != 0) {
LAB_00120c20:
      hb_blob_destroy(local_38);
      local_50 = local_50 & 0xffffffff00000000;
LAB_00120c44:
      pCStack_58 = (COLR *)0x0;
      local_60 = (COLR *)0x0;
      local_38 = 0;
      hb_blob_destroy(lVar3);
      lVar3 = hb_blob_get_empty();
LAB_00120c54:
      if (local_38 != 0) {
LAB_00120bfa:
        hb_blob_destroy();
      }
      if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return lVar3;
    }
    hb_blob_destroy(local_38);
    local_50 = local_50 & 0xffffffff00000000;
    if (cVar2 == '\0') goto LAB_00120c44;
  }
  pCStack_58 = (COLR *)0x0;
  local_60 = (COLR *)0x0;
  local_38 = 0;
  hb_blob_make_immutable(lVar3);
  goto LAB_00120c54;
}



/* OT::PaintTransform<OT::NoVariable>::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::PaintTransform<OT::NoVariable>::sanitize
          (PaintTransform<OT::NoVariable> *this,hb_sanitize_context_t *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if ((PaintTransform<OT::NoVariable> *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (7 - *(long *)(param_1 + 8))) {
    return 0;
  }
  if ((PaintTransform<OT::NoVariable> *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (4 - *(long *)(param_1 + 8))) {
    return 0;
  }
  iVar3 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  if (iVar3 != 0) {
    if ((*(int *)(param_1 + 0x24) < 0x40) &&
       (iVar2 = *(int *)(param_1 + 0x24) + 1, *(int *)(param_1 + 0x24) = iVar2, iVar2 != 0)) {
      cVar1 = Paint::dispatch<hb_sanitize_context_t>((Paint *)(this + iVar3),param_1);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
      if (cVar1 != '\0') goto LAB_00120d50;
    }
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    this[3] = (PaintTransform<OT::NoVariable>)0x0;
    *(undefined2 *)(this + 1) = 0;
  }
LAB_00120d50:
  if ((PaintTransform<OT::NoVariable> *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (7 - *(long *)(param_1 + 8))) {
    return 0;
  }
  iVar3 = (uint)(byte)this[4] * 0x10000 + (uint)(byte)this[5] * 0x100 + (uint)(byte)this[6];
  if ((iVar3 != 0) &&
     ((PaintTransform<OT::NoVariable> *)(ulong)*(uint *)(param_1 + 0x18) <
      this + ((long)(iVar3 + 0x18) - *(long *)(param_1 + 8)))) {
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    this[6] = (PaintTransform<OT::NoVariable>)0x0;
    *(undefined2 *)(this + 4) = 0;
  }
  return 1;
}



/* OT::PaintComposite::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::PaintComposite::sanitize(PaintComposite *this,hb_sanitize_context_t *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if ((PaintComposite *)(ulong)*(uint *)(param_1 + 0x18) < this + (8 - *(long *)(param_1 + 8))) {
    return 0;
  }
  if (*(int *)(param_1 + 0x1c) < 9) {
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    return 0;
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -8;
  if ((PaintComposite *)(ulong)*(uint *)(param_1 + 0x18) < this + (4 - *(long *)(param_1 + 8))) {
    return 0;
  }
  iVar3 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  if (iVar3 != 0) {
    if ((*(int *)(param_1 + 0x24) < 0x40) &&
       (iVar2 = *(int *)(param_1 + 0x24) + 1, *(int *)(param_1 + 0x24) = iVar2, iVar2 != 0)) {
      cVar1 = Paint::dispatch<hb_sanitize_context_t>((Paint *)(this + iVar3),param_1);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
      if (cVar1 != '\0') goto LAB_00120e76;
    }
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    this[3] = (PaintComposite)0x0;
    *(undefined2 *)(this + 1) = 0;
  }
LAB_00120e76:
  if ((PaintComposite *)(ulong)*(uint *)(param_1 + 0x18) < this + (8 - *(long *)(param_1 + 8))) {
    return 0;
  }
  iVar3 = (uint)(byte)this[5] * 0x10000 + (uint)(byte)this[6] * 0x100 + (uint)(byte)this[7];
  if (iVar3 != 0) {
    if ((*(int *)(param_1 + 0x24) < 0x40) &&
       (iVar2 = *(int *)(param_1 + 0x24) + 1, *(int *)(param_1 + 0x24) = iVar2, iVar2 != 0)) {
      cVar1 = Paint::dispatch<hb_sanitize_context_t>((Paint *)(this + iVar3),param_1);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
      if (cVar1 != '\0') {
        return 1;
      }
    }
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    this[7] = (PaintComposite)0x0;
    *(undefined2 *)(this + 5) = 0;
  }
  return 1;
}



/* WARNING: Control flow encountered bad instruction data */
/* OT::cff1::accelerator_templ_t<CFF::cff1_private_dict_opset_t,
   CFF::cff1_private_dict_values_base_t<CFF::dict_val_t> >::accelerator_templ_t(hb_face_t*) */

void OT::cff1::
     accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
     ::accelerator_templ_t(hb_face_t *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* OT::glyf_accelerator_t::glyf_accelerator_t(hb_face_t*) */

void __thiscall
OT::glyf_accelerator_t::glyf_accelerator_t(glyf_accelerator_t *this,hb_face_t *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* OT::hmtxvmtx<OT::vmtx, OT::vhea, OT::VVAR>::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall
OT::hmtxvmtx<OT::vmtx,OT::vhea,OT::VVAR>::accelerator_t::accelerator_t
          (accelerator_t *this,hb_face_t *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* OT::hmtxvmtx<OT::hmtx, OT::hhea, OT::HVAR>::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall
OT::hmtxvmtx<OT::hmtx,OT::hhea,OT::HVAR>::accelerator_t::accelerator_t
          (accelerator_t *this,hb_face_t *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* OT::cff2::accelerator_templ_t<CFF::cff2_private_dict_opset_t,
   CFF::cff2_private_dict_values_base_t<CFF::dict_val_t> >::accelerator_templ_t(hb_face_t*) */

void OT::cff2::
     accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
     ::accelerator_templ_t(hb_face_t *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* hb_paint_extents_context_t::hb_paint_extents_context_t() */

void __thiscall
hb_paint_extents_context_t::hb_paint_extents_context_t(hb_paint_extents_context_t *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* OT::CBDT::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall OT::CBDT::accelerator_t::accelerator_t(accelerator_t *this,hb_face_t *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* OT::post::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall OT::post::accelerator_t::accelerator_t(accelerator_t *this,hb_face_t *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* OT::gvar::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall OT::gvar::accelerator_t::accelerator_t(accelerator_t *this,hb_face_t *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* OT::cmap::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall OT::cmap::accelerator_t::accelerator_t(accelerator_t *this,hb_face_t *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
