/* hb_font_get_nominal_glyph_nil(hb_font_t*, void*, unsigned int, unsigned int*, void*) */undefined8 hb_font_get_nominal_glyph_nil(hb_font_t *param_1, void *param_2, uint param_3, uint *param_4, void *param_5) {
   *param_4 = 0;
   return 0;
}/* hb_font_get_variation_glyph_nil(hb_font_t*, void*, unsigned int, unsigned int, unsigned int*,
   void*) */undefined8 hb_font_get_variation_glyph_nil(hb_font_t *param_1, void *param_2, uint param_3, uint param_4, uint *param_5, void *param_6) {
   *param_5 = 0;
   return 0;
}/* hb_font_get_glyph_h_advance_nil(hb_font_t*, void*, unsigned int, void*) */undefined4 hb_font_get_glyph_h_advance_nil(hb_font_t *param_1, void *param_2, uint param_3, void *param_4) {
   return *(undefined4*)( param_1 + 0x28 );
}/* hb_font_get_glyph_v_advance_nil(hb_font_t*, void*, unsigned int, void*) */int hb_font_get_glyph_v_advance_nil(hb_font_t *param_1, void *param_2, uint param_3, void *param_4) {
   return -*(int *)(param_1 + 0x2c);
}/* hb_font_get_glyph_h_origin_nil(hb_font_t*, void*, unsigned int, int*, int*, void*) */undefined8 hb_font_get_glyph_h_origin_nil(hb_font_t *param_1, void *param_2, uint param_3, int *param_4, int *param_5, void *param_6) {
   *param_5 = 0;
   *param_4 = 0;
   return 1;
}/* hb_font_get_glyph_v_origin_nil(hb_font_t*, void*, unsigned int, int*, int*, void*) */undefined8 hb_font_get_glyph_v_origin_nil(hb_font_t *param_1, void *param_2, uint param_3, int *param_4, int *param_5, void *param_6) {
   *param_5 = 0;
   *param_4 = 0;
   return 0;
}/* hb_font_get_glyph_h_kerning_nil(hb_font_t*, void*, unsigned int, unsigned int, void*) */undefined8 hb_font_get_glyph_h_kerning_nil(hb_font_t *param_1, void *param_2, uint param_3, uint param_4, void *param_5) {
   return 0;
}/* hb_font_get_glyph_contour_point_nil(hb_font_t*, void*, unsigned int, unsigned int, int*, int*,
   void*) */undefined8 hb_font_get_glyph_contour_point_nil(hb_font_t *param_1, void *param_2, uint param_3, uint param_4, int *param_5, int *param_6, void *param_7) {
   *param_6 = 0;
   *param_5 = 0;
   return 0;
}/* hb_font_get_glyph_name_nil(hb_font_t*, void*, unsigned int, char*, unsigned int, void*) */undefined8 hb_font_get_glyph_name_nil(hb_font_t *param_1, void *param_2, uint param_3, char *param_4, uint param_5, void *param_6) {
   if (param_5 != 0) {
      *param_4 = '\0';
   }
   return 0;
}/* hb_font_get_glyph_from_name_nil(hb_font_t*, void*, char const*, int, unsigned int*, void*) */undefined8 hb_font_get_glyph_from_name_nil(hb_font_t *param_1, void *param_2, char *param_3, int param_4, uint *param_5, void *param_6) {
   *param_5 = 0;
   return 0;
}/* hb_font_draw_glyph_nil(hb_font_t*, void*, unsigned int, hb_draw_funcs_t*, void*, void*) */void hb_font_draw_glyph_nil(hb_font_t *param_1, void *param_2, uint param_3, hb_draw_funcs_t *param_4, void *param_5, void *param_6) {
   return;
}/* hb_font_paint_glyph_nil(hb_font_t*, void*, unsigned int, hb_paint_funcs_t*, void*, unsigned int,
   unsigned int, void*) */void hb_font_paint_glyph_nil(hb_font_t *param_1, void *param_2, uint param_3, hb_paint_funcs_t *param_4, void *param_5, uint param_6, uint param_7, void *param_8) {
   return;
}/* hb_draw_move_to_default(hb_draw_funcs_t*, void*, hb_draw_state_t*, float, float, void*) */void hb_draw_move_to_default(hb_draw_funcs_t *param_1, void *param_2, hb_draw_state_t *param_3, float param_4, float param_5, void *param_6) {
   long lVar1;
   long *plVar2;
   /* WARNING: Load size is inaccurate */
   lVar1 = *param_2;
   plVar2 = *(long**)( lVar1 + 0x38 );
   if (plVar2 != (long*)0x0) {
      plVar2 = (long*)*plVar2;
   }
   for (int i_333 = 0; i_333 < 2; i_333++) {
      /* WARNING: Could not recover jumptable at 0x00100125. Too many branches */
   }
   ( **(code**)( lVar1 + 0x10 ) )(param_4 * *(float*)( (long)param_2 + 0x10 ) + param_5 * *(float*)( (long)param_2 + 0x18 ), *(float*)( (long)param_2 + 0x14 ) * param_5, lVar1, *(undefined8*)( (long)param_2 + 8 ), param_3, plVar2);
   return;
}/* hb_draw_line_to_default(hb_draw_funcs_t*, void*, hb_draw_state_t*, float, float, void*) */void hb_draw_line_to_default(hb_draw_funcs_t *param_1, void *param_2, hb_draw_state_t *param_3, float param_4, float param_5, void *param_6) {
   float fVar1;
   float fVar2;
   float fVar3;
   long lVar4;
   undefined8 uVar5;
   code *UNRECOVERED_JUMPTABLE;
   long lVar6;
   fVar1 = *(float*)( (long)param_2 + 0x18 );
   fVar2 = *(float*)( (long)param_2 + 0x10 );
   fVar3 = *(float*)( (long)param_2 + 0x14 );
   /* WARNING: Load size is inaccurate */
   lVar4 = *param_2;
   uVar5 = *(undefined8*)( (long)param_2 + 8 );
   lVar6 = *(long*)( lVar4 + 0x38 );
   UNRECOVERED_JUMPTABLE = *(code**)( lVar4 + 0x18 );
   *(ulong*)( param_3 + 0xc ) = CONCAT44(*(float*)( param_3 + 0x10 ) * fVar3, *(float*)( param_3 + 0xc ) * fVar2 + *(float*)( param_3 + 0x10 ) * fVar1);
   if (lVar6 != 0) {
      lVar6 = *(long*)( lVar6 + 8 );
   }
   for (int i_334 = 0; i_334 < 2; i_334++) {
      /* WARNING: Could not recover jumptable at 0x00100198. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )(fVar2 * param_4 + fVar1 * param_5, fVar3 * param_5, lVar4, uVar5, param_3, lVar6);
   return;
}/* hb_draw_quadratic_to_default(hb_draw_funcs_t*, void*, hb_draw_state_t*, float, float, float,
   float, void*) */void hb_draw_quadratic_to_default(hb_draw_funcs_t *param_1, void *param_2, hb_draw_state_t *param_3, float param_4, float param_5, float param_6, float param_7, void *param_8) {
   float fVar1;
   float fVar2;
   float fVar3;
   long lVar4;
   undefined8 uVar5;
   code *UNRECOVERED_JUMPTABLE;
   long lVar6;
   fVar1 = *(float*)( (long)param_2 + 0x10 );
   fVar2 = *(float*)( (long)param_2 + 0x18 );
   fVar3 = *(float*)( (long)param_2 + 0x14 );
   /* WARNING: Load size is inaccurate */
   lVar4 = *param_2;
   uVar5 = *(undefined8*)( (long)param_2 + 8 );
   lVar6 = *(long*)( lVar4 + 0x38 );
   UNRECOVERED_JUMPTABLE = *(code**)( lVar4 + 0x20 );
   *(ulong*)( param_3 + 0xc ) = CONCAT44(*(float*)( param_3 + 0x10 ) * fVar3, *(float*)( param_3 + 0xc ) * fVar1 + *(float*)( param_3 + 0x10 ) * fVar2);
   if (lVar6 != 0) {
      lVar6 = *(long*)( lVar6 + 0x10 );
   }
   for (int i_335 = 0; i_335 < 2; i_335++) {
      /* WARNING: Could not recover jumptable at 0x00100221. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )(fVar1 * param_4 + fVar2 * param_5, fVar3 * param_5, param_6 * fVar1 + param_7 * fVar2, fVar3 * param_7, lVar4, uVar5, param_3, lVar6);
   return;
}/* hb_draw_cubic_to_default(hb_draw_funcs_t*, void*, hb_draw_state_t*, float, float, float, float,
   float, float, void*) */void hb_draw_cubic_to_default(hb_draw_funcs_t *param_1, void *param_2, hb_draw_state_t *param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9, void *param_10) {
   float fVar1;
   float fVar2;
   float fVar3;
   long lVar4;
   undefined8 uVar5;
   code *UNRECOVERED_JUMPTABLE;
   long lVar6;
   fVar1 = *(float*)( (long)param_2 + 0x10 );
   fVar2 = *(float*)( (long)param_2 + 0x18 );
   fVar3 = *(float*)( (long)param_2 + 0x14 );
   /* WARNING: Load size is inaccurate */
   lVar4 = *param_2;
   uVar5 = *(undefined8*)( (long)param_2 + 8 );
   lVar6 = *(long*)( lVar4 + 0x38 );
   UNRECOVERED_JUMPTABLE = *(code**)( lVar4 + 0x28 );
   *(ulong*)( param_3 + 0xc ) = CONCAT44(*(float*)( param_3 + 0x10 ) * fVar3, *(float*)( param_3 + 0xc ) * fVar1 + *(float*)( param_3 + 0x10 ) * fVar2);
   if (lVar6 != 0) {
      lVar6 = *(long*)( lVar6 + 0x18 );
   }
   for (int i_336 = 0; i_336 < 2; i_336++) {
      /* WARNING: Could not recover jumptable at 0x001002cc. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )(fVar1 * param_4 + fVar2 * param_5, fVar3 * param_5, param_6 * fVar1 + param_7 * fVar2, fVar3 * param_7, param_8 * fVar1 + param_9 * fVar2, fVar3 * param_9, lVar4, uVar5, param_3, lVar6);
   return;
}/* hb_draw_close_path_default(hb_draw_funcs_t*, void*, hb_draw_state_t*, void*) */void hb_draw_close_path_default(hb_draw_funcs_t *param_1, void *param_2, hb_draw_state_t *param_3, void *param_4) {
   long lVar1;
   long lVar2;
   /* WARNING: Load size is inaccurate */
   lVar1 = *param_2;
   lVar2 = *(long*)( lVar1 + 0x38 );
   if (lVar2 != 0) {
      lVar2 = *(long*)( lVar2 + 0x20 );
   }
   for (int i_337 = 0; i_337 < 2; i_337++) {
      /* WARNING: Could not recover jumptable at 0x001002ec. Too many branches */
   }
   ( **(code**)( lVar1 + 0x30 ) )(lVar1, *(undefined8*)( (long)param_2 + 8 ), param_3, lVar2);
   return;
}/* hb_font_draw_glyph_default(hb_font_t*, void*, unsigned int, hb_draw_funcs_t*, void*, void*) */void hb_font_draw_glyph_default(hb_font_t *param_1, void *param_2, uint param_3, hb_draw_funcs_t *param_4, void *param_5, void *param_6) {
   long lVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   hb_draw_funcs_t *local_38;
   void *local_30;
   float local_28;
   undefined8 local_24;
   long local_10;
   lVar1 = *(long*)( param_1 + 0x18 );
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = 0.0;
   if (*(int*)( lVar1 + 0x28 ) != 0) {
      local_28 = (float)*(int*)( param_1 + 0x28 ) / (float)*(int*)( lVar1 + 0x28 );
   }
   local_24 = 0;
   if (*(int*)( lVar1 + 0x2c ) != 0) {
      auVar4._0_4_ = (float)*(int*)( lVar1 + 0x2c );
      auVar3._0_4_ = (float)*(int*)( param_1 + 0x2c );
      auVar4._4_4_ = auVar4._0_4_;
      auVar4._8_8_ = _LC8;
      auVar3._4_4_ = ( *(float*)( param_1 + 0x44 ) - *(float*)( lVar1 + 0x44 ) ) * (float)*(int*)( param_1 + 0x28 );
      auVar3._8_8_ = 0;
      auVar3 = divps(auVar3, auVar4);
      local_24 = auVar3._0_8_;
   }
   lVar2 = *(long*)( *(long*)( lVar1 + 0x90 ) + 0x10 );
   if (lVar2 != 0) {
      lVar2 = *(long*)( lVar2 + 0x88 );
   }
   local_38 = param_4;
   local_30 = param_5;
   ( **(code**)( *(long*)( lVar1 + 0x90 ) + 0xa8 ) )(lVar1, *(undefined8*)( lVar1 + 0x98 ), param_3, _hb_draw_funcs_default, &local_38, lVar2);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* hb_font_paint_glyph_default(hb_font_t*, void*, unsigned int, hb_paint_funcs_t*, void*, unsigned
   int, unsigned int, void*) */void hb_font_paint_glyph_default(hb_font_t *param_1, void *param_2, uint param_3, hb_paint_funcs_t *param_4, void *param_5, uint param_6, uint param_7, void *param_8) {
   long lVar1;
   long *plVar2;
   long lVar3;
   ulong uVar4;
   undefined8 uVar5;
   undefined1 auVar6[16];
   float fVar7;
   lVar3 = *(long*)( param_1 + 0x18 );
   uVar4 = (ulong)param_7;
   if (*(int*)( lVar3 + 0x2c ) == 0) {
      fVar7 = 0.0;
   } else {
      fVar7 = ( ( *(float*)( param_1 + 0x44 ) - *(float*)( lVar3 + 0x44 ) ) * (float)*(int*)( param_1 + 0x28 ) ) / (float)*(int*)( lVar3 + 0x2c );
   }
   uVar5 = 0;
   if (*(int*)( lVar3 + 0x28 ) != 0) {
      auVar6._4_12_ = SUB1612((undefined1[16])0x0, 4);
      auVar6._0_4_ = (float)*(int*)( param_1 + 0x28 ) / (float)*(int*)( lVar3 + 0x28 );
      uVar5 = auVar6._0_8_;
   }
   plVar2 = *(long**)( param_4 + 0x80 );
   if (plVar2 != (long*)0x0) {
      plVar2 = (long*)*plVar2;
   }
   ( **(code**)( param_4 + 0x10 ) )(uVar5, fVar7, param_4, param_5, plVar2);
   lVar3 = *(long*)( param_1 + 0x18 );
   lVar1 = *(long*)( *(long*)( lVar3 + 0x90 ) + 0x10 );
   if (lVar1 != 0) {
      lVar1 = *(long*)( lVar1 + 0x90 );
   }
   ( **(code**)( *(long*)( lVar3 + 0x90 ) + 0xb0 ) )(lVar3, *(undefined8*)( lVar3 + 0x98 ), param_3, param_4, param_5, param_6, uVar4, lVar1);
   lVar3 = *(long*)( param_4 + 0x80 );
   if (lVar3 != 0) {
      lVar3 = *(long*)( lVar3 + 8 );
   }
   for (int i_338 = 0; i_338 < 2; i_338++) {
      /* WARNING: Could not recover jumptable at 0x001004ef. Too many branches */
   }
   ( **(code**)( param_4 + 0x18 ) )(param_4, param_5, lVar3, uVar4);
   return;
}/* hb_font_get_nominal_glyph_trampoline(hb_font_t*, void*, unsigned int, unsigned int*, void*) */void hb_font_get_nominal_glyph_trampoline(hb_font_t *param_1, void *param_2, uint param_3, uint *param_4, void *param_5) {
   for (int i_339 = 0; i_339 < 2; i_339++) {
      /* WARNING: Could not recover jumptable at 0x00100520. Too many branches */
   }
   ( **(code**)( (long)param_5 + 0x18 ) )();
   return;
}/* hb_font_get_variation_glyph_trampoline(hb_font_t*, void*, unsigned int, unsigned int, unsigned
   int*, void*) */void hb_font_get_variation_glyph_trampoline(hb_font_t *param_1, void *param_2, uint param_3, uint param_4, uint *param_5, void *param_6) {
   for (int i_340 = 0; i_340 < 2; i_340++) {
      /* WARNING: Could not recover jumptable at 0x0010053b. Too many branches */
   }
   ( **(code**)( (long)param_6 + 0x18 ) )();
   return;
}/* trampoline_destroy(void*) */void trampoline_destroy(void *param_1) {
   int *piVar1;
   piVar1 = (int*)( (long)param_1 + 0x10 );
   *piVar1 = *piVar1 + -1;
   if (*piVar1 == 0) {
      if (*(code**)( (long)param_1 + 8 ) != (code*)0x0) {
         /* WARNING: Load size is inaccurate */
         ( **(code**)( (long)param_1 + 8 ) )(*param_1);
      }
      free(param_1);
      return;
   }
   return;
}void hb_font_funcs_destroy_part_0(void *param_1) {
   long *plVar1;
   long lVar2;
   undefined8 *__ptr;
   __ptr = *(undefined8**)( (long)param_1 + 0x18 );
   if (__ptr != (undefined8*)0x0) {
      if ((code*)*__ptr != (code*)0x0) {
         plVar1 = *(long**)( (long)param_1 + 0x10 );
         if (plVar1 != (long*)0x0) {
            plVar1 = (long*)*plVar1;
         }
         ( *(code*)*__ptr )(plVar1);
         __ptr = *(undefined8**)( (long)param_1 + 0x18 );
      }
      for (int i_341 = 0; i_341 < 18; i_341++) {
         if ((code*)__ptr[( i_341 + 1 )] != (code*)0) {
            lVar2 = *(long*)( (long)param_1 + 16 );
            if (lVar2 != 0) {
               lVar2 = *(long*)( lVar2 + ( 8*i_341 + 8 ) );
            }
            ( *(code*)__ptr[( i_341 + 1 )] )(lVar2);
            __ptr = *(undefined8**)( (long)param_1 + 24 );
         }
      }
   }
   free(__ptr);
   free(*(void**)( (long)param_1 + 0x10 ));
   free(param_1);
   return;
}/* hb_font_get_glyph_v_kerning_nil(hb_font_t*, void*, unsigned int, unsigned int, void*) */undefined8 hb_font_get_glyph_v_kerning_nil(hb_font_t *param_1, void *param_2, uint param_3, uint param_4, void *param_5) {
   return 0;
}/* hb_font_get_glyph_extents_default(hb_font_t*, void*, unsigned int, hb_glyph_extents_t*, void*) */int hb_font_get_glyph_extents_default(hb_font_t *param_1, void *param_2, uint param_3, hb_glyph_extents_t *param_4, void *param_5) {
   long lVar1;
   int iVar2;
   int iVar3;
   undefined4 in_register_00000014;
   int iVar4;
   long lVar5;
   int iVar6;
   lVar1 = *(long*)( param_1 + 0x18 );
   *(undefined1(*) [16])param_4 = (undefined1[16])0x0;
   lVar5 = *(long*)( *(long*)( lVar1 + 0x90 ) + 0x10 );
   if (lVar5 != 0) {
      lVar5 = *(long*)( lVar5 + 0x68 );
   }
   iVar2 = ( **(code**)( *(long*)( lVar1 + 0x90 ) + 0x88 ) )(lVar1, *(undefined8*)( lVar1 + 0x98 ), CONCAT44(in_register_00000014, param_3), param_4, lVar5);
   if (iVar2 == 0) {
      return 0;
   }
   lVar1 = *(long*)( param_1 + 0x18 );
   iVar4 = *(int*)( param_4 + 0xc );
   if (lVar1 != 0) {
      iVar3 = *(int*)param_4;
      iVar6 = *(int*)( param_4 + 4 );
      if (*(int*)( lVar1 + 0x28 ) != *(int*)( param_1 + 0x28 )) {
         iVar3 = (int)( ( (long)iVar3 * (long)*(int*)( param_1 + 0x28 ) ) / (long)*(int*)( lVar1 + 0x28 ) );
      }
      *(int*)param_4 = iVar3;
      iVar3 = *(int*)( param_4 + 8 );
      if (*(int*)( lVar1 + 0x2c ) != *(int*)( param_1 + 0x2c )) {
         iVar6 = (int)( ( (long)iVar6 * (long)*(int*)( param_1 + 0x2c ) ) / (long)*(int*)( lVar1 + 0x2c ) );
      }
      *(int*)( param_4 + 4 ) = iVar6;
      if (*(int*)( lVar1 + 0x28 ) != *(int*)( param_1 + 0x28 )) {
         iVar3 = (int)( ( (long)iVar3 * (long)*(int*)( param_1 + 0x28 ) ) / (long)*(int*)( lVar1 + 0x28 ) );
      }
      *(int*)( param_4 + 8 ) = iVar3;
      if (*(int*)( lVar1 + 0x2c ) != *(int*)( param_1 + 0x2c )) {
         iVar4 = (int)( ( (long)iVar4 * (long)*(int*)( param_1 + 0x2c ) ) / (long)*(int*)( lVar1 + 0x2c ) );
      }
   }
   *(int*)( param_4 + 0xc ) = iVar4;
   return iVar2;
}/* bool hb_object_destroy<hb_font_t>(hb_font_t*) */bool hb_object_destroy<hb_font_t>(hb_font_t *param_1) {
   long lVar1;
   int iVar2;
   pthread_mutex_t *__mutex;
   code *pcVar3;
   undefined8 uVar4;
   if (param_1 == (hb_font_t*)0x0) {
      return false;
   }
   if (*(int*)param_1 != 0) {
      LOCK();
      *(int*)param_1 = *(int*)param_1 + -1;
      UNLOCK();
      if (*(int*)param_1 == 0) {
         *(undefined4*)param_1 = 0xffff2153;
         __mutex = *(pthread_mutex_t**)( param_1 + 8 );
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
                        goto LAB_00100b90;
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
                  };
               } while ( true );
            }
            if (__mutex[1].__data.__lock != 0) {
               free(*(void**)( (long)__mutex + 0x30 ));
            }
            __mutex[1].__align = 0;
            *(undefined8*)( (long)__mutex + 0x30 ) = 0;
            LAB_00100b90:pthread_mutex_destroy(__mutex);
            free(__mutex);
            *(undefined8*)( param_1 + 8 ) = 0;
         }
         return true;
      }
   }
   return false;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* bool hb_object_set_user_data<hb_font_t>(hb_font_t*, hb_user_data_key_t*, void*, void (*)(void*),
   int) */bool hb_object_set_user_data<hb_font_t>(hb_font_t *param_1, hb_user_data_key_t *param_2, void *param_3, _func_void_void_ptr *param_4, int param_5) {
   hb_font_t *phVar1;
   uint uVar2;
   long lVar3;
   code *pcVar4;
   long lVar5;
   uint uVar6;
   pthread_mutex_t *__mutex;
   long *plVar7;
   ulong uVar8;
   uint uVar9;
   ulong uVar10;
   long *plVar11;
   undefined8 uVar12;
   if (( param_1 == (hb_font_t*)0x0 ) || ( *(int*)param_1 == 0 )) {
      return false;
   }
   phVar1 = param_1 + 8;
   while (__mutex = *(pthread_mutex_t**)phVar1,__mutex == (pthread_mutex_t*)0x0) {
      __mutex = (pthread_mutex_t*)calloc(1, 0x38);
      if (__mutex == (pthread_mutex_t*)0x0) {
         return false;
      }
      pthread_mutex_init(__mutex, (pthread_mutexattr_t*)0x0);
      __mutex[1].__align = 0;
      *(undefined8*)( (long)__mutex + 0x30 ) = 0;
      LOCK();
      lVar3 = *(long*)phVar1;
      if (lVar3 == 0) {
         *(pthread_mutex_t**)phVar1 = __mutex;
      }
      UNLOCK();
      if (lVar3 == 0) break;
      if (*(int*)( (long)__mutex + 0x2c ) == 0) {
         if (__mutex[1].__data.__lock != 0) {
            free(*(void**)( (long)__mutex + 0x30 ));
         }
         __mutex[1].__align = 0;
         *(undefined8*)( (long)__mutex + 0x30 ) = 0;
      } else {
         while (true) {
            pthread_mutex_lock(__mutex);
            if (*(int*)( (long)__mutex + 0x2c ) == 0) break;
            uVar9 = *(int*)( (long)__mutex + 0x2c ) - 1;
            lVar3 = *(long*)( (long)__mutex + 0x30 ) + (ulong)uVar9 * 0x18;
            uVar12 = *(undefined8*)( lVar3 + 8 );
            pcVar4 = *(code**)( lVar3 + 0x10 );
            *(uint*)( (long)__mutex + 0x2c ) = uVar9;
            pthread_mutex_unlock(__mutex);
            if (pcVar4 != (code*)0x0) {
               ( *pcVar4 )(uVar12);
            }
         };
         if (__mutex[1].__data.__lock != 0) {
            free(*(void**)( (long)__mutex + 0x30 ));
         }
         __mutex[1].__align = 0;
         *(undefined8*)( (long)__mutex + 0x30 ) = 0;
         pthread_mutex_unlock(__mutex);
      }
      pthread_mutex_destroy(__mutex);
      free(__mutex);
   };
   if (param_2 == (hb_user_data_key_t*)0x0) {
      return false;
   }
   if (( param_5 != 0 ) && ( param_3 == (void*)0x0 && param_4 == (_func_void_void_ptr*)0x0 )) {
      pthread_mutex_lock(__mutex);
      uVar9 = *(uint*)( (long)__mutex + 0x2c );
      plVar7 = *(long**)( (long)__mutex + 0x30 );
      if (uVar9 != 0) {
         uVar6 = 0;
         plVar11 = plVar7;
         do {
            if (param_2 == (hb_user_data_key_t*)*plVar11) {
               plVar11 = plVar7 + (ulong)uVar6 * 3;
               if (plVar11 != (long*)0x0) {
                  lVar3 = plVar11[1];
                  pcVar4 = (code*)plVar11[2];
                  plVar7 = plVar7 + ( ulong )(uVar9 - 1) * 3;
                  lVar5 = plVar7[1];
                  *plVar11 = *plVar7;
                  plVar11[1] = lVar5;
                  plVar11[2] = plVar7[2];
                  *(uint*)( (long)__mutex + 0x2c ) = uVar9 - 1;
                  pthread_mutex_unlock(__mutex);
                  if (pcVar4 == (code*)0x0) {
                     return true;
                  }
                  ( *pcVar4 )(lVar3);
                  return true;
               }
               break;
            }
            uVar6 = uVar6 + 1;
            plVar11 = plVar11 + 3;
         } while ( uVar9 != uVar6 );
      }
      pthread_mutex_unlock(__mutex);
      return true;
   }
   pthread_mutex_lock(__mutex);
   uVar9 = *(uint*)( (long)__mutex + 0x2c );
   uVar8 = (ulong)uVar9;
   plVar7 = *(long**)( (long)__mutex + 0x30 );
   if (uVar9 == 0) {
      uVar6 = 1;
      if (__mutex[1].__data.__lock < 1) {
         if (__mutex[1].__data.__lock != 0) goto LAB_00100f10;
         uVar10 = 8;
         LAB_00100ea4:plVar7 = (long*)realloc(plVar7, uVar10 * 0x18);
         if (plVar7 == (long*)0x0) {
            if ((uint)__mutex[1].__data.__lock < (uint)uVar10) {
               __mutex[1].__data.__lock = ~__mutex[1].__data.__lock;
               goto LAB_00100f10;
            }
            uVar8 = ( ulong ) * (uint*)( (long)__mutex + 0x2c );
            plVar7 = *(long**)( (long)__mutex + 0x30 );
            uVar6 = *(uint*)( (long)__mutex + 0x2c ) + 1;
         } else {
            uVar6 = *(uint*)( (long)__mutex + 0x2c );
            uVar8 = (ulong)uVar6;
            *(long**)( (long)__mutex + 0x30 ) = plVar7;
            __mutex[1].__data.__lock = (uint)uVar10;
            uVar6 = uVar6 + 1;
         }
      }
   } else {
      uVar6 = 0;
      plVar11 = plVar7;
      do {
         if (param_2 == (hb_user_data_key_t*)*plVar11) {
            plVar11 = plVar7 + (ulong)uVar6 * 3;
            if (plVar11 != (long*)0x0) {
               if (param_5 == 0) {
                  plVar11 = (long*)0x0;
                  pthread_mutex_unlock(__mutex);
               } else {
                  lVar3 = plVar11[1];
                  pcVar4 = (code*)plVar11[2];
                  *plVar11 = (long)param_2;
                  plVar11[1] = (long)param_3;
                  plVar11[2] = (long)param_4;
                  pthread_mutex_unlock(__mutex);
                  if (pcVar4 != (code*)0x0) {
                     ( *pcVar4 )(lVar3);
                  }
               }
               goto LAB_00100cc5;
            }
            break;
         }
         uVar6 = uVar6 + 1;
         plVar11 = plVar11 + 3;
      } while ( uVar9 != uVar6 );
      uVar2 = __mutex[1].__data.__lock;
      uVar6 = uVar9 + 1;
      if ((int)uVar2 <= (int)uVar9) {
         if (-1 < (int)uVar2) {
            uVar10 = (ulong)uVar2;
            if (uVar6 <= uVar2) goto LAB_00100e6b;
            do {
               uVar9 = (int)( uVar10 >> 1 ) + 8 + (int)uVar10;
               uVar10 = (ulong)uVar9;
            } while ( uVar9 < uVar6 );
            if (uVar9 < 0xaaaaaab) goto LAB_00100ea4;
            __mutex[1].__data.__lock = ~uVar2;
         }
         LAB_00100f10:uVar12 = __hb_CrapPool;
         __hb_graphite2_shaper_font_data_destroy = _strlen;
         plVar11 = (long*)&_hb_CrapPool;
         __hb_CrapPool = __hb_NullPool;
         _strlen = uVar12;
         goto LAB_00100e82;
      }
   }
   LAB_00100e6b:*(uint*)( (long)__mutex + 0x2c ) = uVar6;
   plVar11 = plVar7 + uVar8 * 3;
   *plVar11 = (long)param_2;
   plVar11[1] = (long)param_3;
   plVar11[2] = (long)param_4;
   LAB_00100e82:pthread_mutex_unlock(__mutex);
   LAB_00100cc5:return -1 < __mutex[1].__data.__lock && plVar11 != (long*)0x0;
}/* hb_font_get_font_v_extents_nil(hb_font_t*, void*, hb_font_extents_t*, void*) */undefined8 hb_font_get_font_v_extents_nil(hb_font_t *param_1, void *param_2, hb_font_extents_t *param_3, void *param_4) {
   *(undefined1(*) [16])param_3 = (undefined1[16])0x0;
   *(undefined1(*) [16])( param_3 + 0x10 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( param_3 + 0x20 ) = (undefined1[16])0x0;
   return 0;
}/* hb_font_get_glyph_extents_nil(hb_font_t*, void*, unsigned int, hb_glyph_extents_t*, void*) */undefined8 hb_font_get_glyph_extents_nil(hb_font_t *param_1, void *param_2, uint param_3, hb_glyph_extents_t *param_4, void *param_5) {
   *(undefined1(*) [16])param_4 = (undefined1[16])0x0;
   return 0;
}/* hb_font_get_font_h_extents_nil(hb_font_t*, void*, hb_font_extents_t*, void*) */undefined8 hb_font_get_font_h_extents_nil(hb_font_t *param_1, void *param_2, hb_font_extents_t *param_3, void *param_4) {
   *(undefined1(*) [16])param_3 = (undefined1[16])0x0;
   *(undefined1(*) [16])( param_3 + 0x10 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( param_3 + 0x20 ) = (undefined1[16])0x0;
   return 0;
}/* hb_font_get_variation_glyph_default(hb_font_t*, void*, unsigned int, unsigned int, unsigned int*,
   void*) */void hb_font_get_variation_glyph_default(hb_font_t *param_1, void *param_2, uint param_3, uint param_4, uint *param_5, void *param_6) {
   long lVar1;
   lVar1 = *(long*)( param_1 + 0x18 );
   *param_5 = 0;
   for (int i_342 = 0; i_342 < 2; i_342++) {
      /* WARNING: Could not recover jumptable at 0x0010106e. Too many branches */
   }
   ( **(code**)( *(long*)( lVar1 + 0x90 ) + 0x40 ) )(lVar1, *(undefined8*)( lVar1 + 0x98 ));
   return;
}/* hb_font_get_nominal_glyphs_default(hb_font_t*, void*, unsigned int, unsigned int const*, unsigned
   int, unsigned int*, unsigned int, void*) */ulong hb_font_get_nominal_glyphs_default(hb_font_t *param_1, void *param_2, uint param_3, uint *param_4, uint param_5, uint *param_6, uint param_7, void *param_8) {
   uint uVar1;
   int iVar2;
   long lVar3;
   ulong uVar4;
   undefined4 in_register_00000084;
   code *pcVar5;
   uint uVar6;
   lVar3 = *(long*)( param_1 + 0x90 );
   pcVar5 = *(code**)( lVar3 + 0x30 );
   if ((code*)_hb_font_funcs_default._48_8_ == pcVar5) {
      lVar3 = *(long*)( param_1 + 0x18 );
      for (int i_343 = 0; i_343 < 2; i_343++) {
         /* WARNING: Could not recover jumptable at 0x00101177. Too many branches */
      }
      uVar4 = ( **(code**)( *(long*)( lVar3 + 0x90 ) + 0x38 ) )(lVar3, *(undefined8*)( lVar3 + 0x98 ), param_3, param_4, CONCAT44(in_register_00000084, param_5), param_6);
      return uVar4;
   }
   uVar6 = 0;
   if (param_3 != 0) {
      while (true) {
         lVar3 = *(long*)( lVar3 + 0x10 );
         uVar1 = *param_4;
         *param_6 = 0;
         if (lVar3 != 0) {
            lVar3 = *(long*)( lVar3 + 0x10 );
         }
         iVar2 = ( *pcVar5 )(param_1, *(undefined8*)( param_1 + 0x98 ), uVar1, param_6, lVar3);
         if (iVar2 == 0) break;
         uVar6 = uVar6 + 1;
         param_4 = (uint*)( (long)param_4 + (ulong)param_5 );
         param_6 = (uint*)( (long)param_6 + (ulong)param_7 );
         if (param_3 == uVar6) break;
         lVar3 = *(long*)( param_1 + 0x90 );
         pcVar5 = *(code**)( lVar3 + 0x30 );
      };
   }
   return (ulong)uVar6;
}/* hb_font_get_glyph_v_kerning_default(hb_font_t*, void*, unsigned int, unsigned int, void*) */long hb_font_get_glyph_v_kerning_default(hb_font_t *param_1, void *param_2, uint param_3, uint param_4, void *param_5) {
   int iVar1;
   long lVar2;
   undefined4 in_register_0000000c;
   undefined4 in_register_00000014;
   long lVar3;
   lVar2 = *(long*)( param_1 + 0x18 );
   lVar3 = *(long*)( *(long*)( lVar2 + 0x90 ) + 0x10 );
   if (lVar3 != 0) {
      lVar3 = *(long*)( lVar3 + 0x60 );
   }
   lVar2 = ( **(code**)( *(long*)( lVar2 + 0x90 ) + 0x80 ) )(lVar2, *(undefined8*)( lVar2 + 0x98 ), CONCAT44(in_register_00000014, param_3), CONCAT44(in_register_0000000c, param_4), lVar3);
   if (*(long*)( param_1 + 0x18 ) != 0) {
      iVar1 = *(int*)( *(long*)( param_1 + 0x18 ) + 0x2c );
      if (iVar1 != *(int*)( param_1 + 0x2c )) {
         return ( (long)(int)lVar2 * (long)*(int*)( param_1 + 0x2c ) ) / (long)iVar1;
      }
   }
   return lVar2;
}/* hb_font_get_glyph_h_kerning_default(hb_font_t*, void*, unsigned int, unsigned int, void*) */long hb_font_get_glyph_h_kerning_default(hb_font_t *param_1, void *param_2, uint param_3, uint param_4, void *param_5) {
   int iVar1;
   long lVar2;
   undefined4 in_register_0000000c;
   undefined4 in_register_00000014;
   long lVar3;
   lVar2 = *(long*)( param_1 + 0x18 );
   lVar3 = *(long*)( *(long*)( lVar2 + 0x90 ) + 0x10 );
   if (lVar3 != 0) {
      lVar3 = *(long*)( lVar3 + 0x58 );
   }
   lVar2 = ( **(code**)( *(long*)( lVar2 + 0x90 ) + 0x78 ) )(lVar2, *(undefined8*)( lVar2 + 0x98 ), CONCAT44(in_register_00000014, param_3), CONCAT44(in_register_0000000c, param_4), lVar3);
   if (*(long*)( param_1 + 0x18 ) != 0) {
      iVar1 = *(int*)( *(long*)( param_1 + 0x18 ) + 0x28 );
      if (iVar1 != *(int*)( param_1 + 0x28 )) {
         return ( (long)(int)lVar2 * (long)*(int*)( param_1 + 0x28 ) ) / (long)iVar1;
      }
   }
   return lVar2;
}/* hb_font_get_glyph_h_advances_default(hb_font_t*, void*, unsigned int, unsigned int const*,
   unsigned int, int*, unsigned int, void*) */ulong hb_font_get_glyph_h_advances_default(hb_font_t *param_1, void *param_2, uint param_3, uint *param_4, uint param_5, int *param_6, uint param_7, void *param_8) {
   uint uVar1;
   int iVar2;
   long lVar3;
   ulong uVar4;
   long lVar5;
   undefined4 in_register_00000084;
   code *pcVar6;
   uint uVar7;
   uVar4 = *(ulong*)( param_1 + 0x90 );
   pcVar6 = *(code**)( uVar4 + 0x48 );
   if (pcVar6 == (code*)_hb_font_funcs_default._72_8_) {
      lVar5 = *(long*)( param_1 + 0x18 );
      lVar3 = *(long*)( *(long*)( lVar5 + 0x90 ) + 0x10 );
      if (lVar3 != 0) {
         lVar3 = *(long*)( lVar3 + 0x38 );
      }
      uVar4 = (ulong)param_7;
      ( **(code**)( *(long*)( lVar5 + 0x90 ) + 0x58 ) )(lVar5, *(undefined8*)( lVar5 + 0x98 ), param_3, param_4, CONCAT44(in_register_00000084, param_5), param_6, uVar4, lVar3);
      if (param_3 != 0) {
         lVar5 = *(long*)( param_1 + 0x18 );
         uVar7 = 0;
         iVar2 = *param_6;
         while (true) {
            uVar4 = (ulong)iVar2;
            if (lVar5 != 0) {
               iVar2 = *(int*)( lVar5 + 0x28 );
               if (iVar2 != *(int*)( param_1 + 0x28 )) {
                  uVar4 = (long)( uVar4 * (long)*(int*)( param_1 + 0x28 ) ) / (long)iVar2;
               }
            }
            uVar7 = uVar7 + 1;
            *param_6 = (int)uVar4;
            param_6 = (int*)( (long)param_6 + (ulong)param_7 );
            if (param_3 == uVar7) break;
            iVar2 = *param_6;
         };
      }
   } else {
      uVar7 = 0;
      if (param_3 != 0) {
         while (true) {
            lVar5 = *(long*)( uVar4 + 0x10 );
            uVar1 = *param_4;
            if (lVar5 != 0) {
               lVar5 = *(long*)( lVar5 + 0x28 );
            }
            uVar7 = uVar7 + 1;
            param_4 = (uint*)( (long)param_4 + (ulong)param_5 );
            iVar2 = ( *pcVar6 )(param_1, *(undefined8*)( param_1 + 0x98 ), uVar1, lVar5);
            *param_6 = iVar2;
            param_6 = (int*)( (long)param_6 + (ulong)param_7 );
            uVar4 = (ulong)param_7;
            if (param_3 == uVar7) break;
            uVar4 = *(ulong*)( param_1 + 0x90 );
            pcVar6 = *(code**)( uVar4 + 0x48 );
         };
      }
   }
   return uVar4;
}/* hb_font_get_glyph_name_default(hb_font_t*, void*, unsigned int, char*, unsigned int, void*) */void hb_font_get_glyph_name_default(hb_font_t *param_1, void *param_2, uint param_3, char *param_4, uint param_5, void *param_6) {
   long lVar1;
   lVar1 = *(long*)( param_1 + 0x18 );
   if (param_5 != 0) {
      *param_4 = '\0';
   }
   for (int i_344 = 0; i_344 < 2; i_344++) {
      /* WARNING: Could not recover jumptable at 0x00101392. Too many branches */
   }
   ( **(code**)( *(long*)( lVar1 + 0x90 ) + 0x98 ) )(lVar1, *(undefined8*)( lVar1 + 0x98 ));
   return;
}/* hb_font_get_glyph_from_name_default(hb_font_t*, void*, char const*, int, unsigned int*, void*) */void hb_font_get_glyph_from_name_default(hb_font_t *param_1, void *param_2, char *param_3, int param_4, uint *param_5, void *param_6) {
   long lVar1;
   size_t sVar2;
   undefined4 in_register_0000000c;
   ulong uVar3;
   long lVar4;
   uVar3 = CONCAT44(in_register_0000000c, param_4);
   lVar1 = *(long*)( param_1 + 0x18 );
   *param_5 = 0;
   if (param_4 == -1) {
      sVar2 = strlen(param_3);
      uVar3 = sVar2 & 0xffffffff;
   }
   lVar4 = *(long*)( *(long*)( lVar1 + 0x90 ) + 0x10 );
   if (lVar4 != 0) {
      lVar4 = *(long*)( lVar4 + 0x80 );
   }
   for (int i_345 = 0; i_345 < 2; i_345++) {
      /* WARNING: Could not recover jumptable at 0x00101402. Too many branches */
   }
   ( **(code**)( *(long*)( lVar1 + 0x90 ) + 0xa0 ) )(lVar1, *(undefined8*)( lVar1 + 0x98 ), param_3, uVar3, param_5, lVar4);
   return;
}/* hb_font_get_font_v_extents_default(hb_font_t*, void*, hb_font_extents_t*, void*) */int hb_font_get_font_v_extents_default(hb_font_t *param_1, void *param_2, hb_font_extents_t *param_3, void *param_4) {
   int iVar1;
   int iVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   lVar4 = *(long*)( param_1 + 0x18 );
   *(undefined1(*) [16])param_3 = (undefined1[16])0x0;
   *(undefined1(*) [16])( param_3 + 0x10 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( param_3 + 0x20 ) = (undefined1[16])0x0;
   lVar5 = *(long*)( *(long*)( lVar4 + 0x90 ) + 0x10 );
   if (lVar5 != 0) {
      lVar5 = *(long*)( lVar5 + 8 );
   }
   iVar2 = ( **(code**)( *(long*)( lVar4 + 0x90 ) + 0x28 ) )(lVar4, *(undefined8*)( lVar4 + 0x98 ), param_3, lVar5);
   if (iVar2 != 0) {
      iVar3 = *(int*)( param_3 + 8 );
      if (*(long*)( param_1 + 0x18 ) != 0) {
         iVar1 = *(int*)( *(long*)( param_1 + 0x18 ) + 0x28 );
         if (iVar1 != *(int*)( param_1 + 0x28 )) {
            lVar5 = (long)*(int*)( param_1 + 0x28 );
            lVar4 = (long)iVar1;
            *(int*)param_3 = (int)( ( *(int*)param_3 * lVar5 ) / lVar4 );
            *(int*)( param_3 + 4 ) = (int)( ( *(int*)( param_3 + 4 ) * lVar5 ) / lVar4 );
            iVar3 = (int)( ( iVar3 * lVar5 ) / lVar4 );
         }
      }
      *(int*)( param_3 + 8 ) = iVar3;
   }
   return iVar2;
}/* hb_font_get_font_h_extents_default(hb_font_t*, void*, hb_font_extents_t*, void*) */int hb_font_get_font_h_extents_default(hb_font_t *param_1, void *param_2, hb_font_extents_t *param_3, void *param_4) {
   int iVar1;
   int iVar2;
   long *plVar3;
   int iVar4;
   long lVar5;
   long lVar6;
   lVar5 = *(long*)( param_1 + 0x18 );
   *(undefined1(*) [16])param_3 = (undefined1[16])0x0;
   *(undefined1(*) [16])( param_3 + 0x10 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( param_3 + 0x20 ) = (undefined1[16])0x0;
   plVar3 = *(long**)( *(long*)( lVar5 + 0x90 ) + 0x10 );
   if (plVar3 != (long*)0x0) {
      plVar3 = (long*)*plVar3;
   }
   iVar2 = ( **(code**)( *(long*)( lVar5 + 0x90 ) + 0x20 ) )(lVar5, *(undefined8*)( lVar5 + 0x98 ), param_3, plVar3);
   if (iVar2 != 0) {
      iVar4 = *(int*)( param_3 + 8 );
      if (*(long*)( param_1 + 0x18 ) != 0) {
         iVar1 = *(int*)( *(long*)( param_1 + 0x18 ) + 0x2c );
         if (iVar1 != *(int*)( param_1 + 0x2c )) {
            lVar6 = (long)*(int*)( param_1 + 0x2c );
            lVar5 = (long)iVar1;
            *(int*)param_3 = (int)( ( *(int*)param_3 * lVar6 ) / lVar5 );
            *(int*)( param_3 + 4 ) = (int)( ( *(int*)( param_3 + 4 ) * lVar6 ) / lVar5 );
            iVar4 = (int)( ( iVar4 * lVar6 ) / lVar5 );
         }
      }
      *(int*)( param_3 + 8 ) = iVar4;
   }
   return iVar2;
}/* hb_font_get_glyph_v_advance_default(hb_font_t*, void*, unsigned int, void*) */ulong hb_font_get_glyph_v_advance_default(hb_font_t *param_1, void *param_2, uint param_3, void *param_4) {
   int iVar1;
   code *pcVar2;
   ulong uVar3;
   long lVar4;
   long lVar5;
   long in_FS_OFFSET;
   uint local_1c[2];
   uint local_14;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar2 = *(code**)( *(long*)( param_1 + 0x90 ) + 0x60 );
   local_1c[0] = param_3;
   if (pcVar2 == (code*)_hb_font_funcs_default._96_8_) {
      lVar5 = *(long*)( param_1 + 0x18 );
      lVar4 = *(long*)( *(long*)( lVar5 + 0x90 ) + 0x10 );
      if (lVar4 != 0) {
         lVar4 = *(long*)( lVar4 + 0x30 );
      }
      uVar3 = ( **(code**)( *(long*)( lVar5 + 0x90 ) + 0x50 ) )(lVar5, *(undefined8*)( lVar5 + 0x98 ), param_3, lVar4);
      if (*(long*)( param_1 + 0x18 ) != 0) {
         iVar1 = *(int*)( *(long*)( param_1 + 0x18 ) + 0x2c );
         if (iVar1 != *(int*)( param_1 + 0x2c )) {
            uVar3 = ( (long)(int)uVar3 * (long)*(int*)( param_1 + 0x2c ) ) / (long)iVar1;
         }
      }
   } else {
      lVar5 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
      if (lVar5 != 0) {
         lVar5 = *(long*)( lVar5 + 0x40 );
      }
      ( *pcVar2 )(param_1, *(undefined8*)( param_1 + 0x98 ), 1, local_1c, 0, &local_14, 0, lVar5);
      uVar3 = (ulong)local_14;
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* hb_font_get_glyph_v_advances_default(hb_font_t*, void*, unsigned int, unsigned int const*,
   unsigned int, int*, unsigned int, void*) */ulong hb_font_get_glyph_v_advances_default(hb_font_t *param_1, void *param_2, uint param_3, uint *param_4, uint param_5, int *param_6, uint param_7, void *param_8) {
   uint uVar1;
   int iVar2;
   long lVar3;
   ulong uVar4;
   long lVar5;
   undefined4 in_register_00000084;
   code *pcVar6;
   uint uVar7;
   uVar4 = *(ulong*)( param_1 + 0x90 );
   pcVar6 = *(code**)( uVar4 + 0x50 );
   if (pcVar6 == (code*)_hb_font_funcs_default._80_8_) {
      lVar5 = *(long*)( param_1 + 0x18 );
      lVar3 = *(long*)( *(long*)( lVar5 + 0x90 ) + 0x10 );
      if (lVar3 != 0) {
         lVar3 = *(long*)( lVar3 + 0x40 );
      }
      uVar4 = (ulong)param_7;
      ( **(code**)( *(long*)( lVar5 + 0x90 ) + 0x60 ) )(lVar5, *(undefined8*)( lVar5 + 0x98 ), param_3, param_4, CONCAT44(in_register_00000084, param_5), param_6, uVar4, lVar3);
      if (param_3 != 0) {
         lVar5 = *(long*)( param_1 + 0x18 );
         uVar7 = 0;
         iVar2 = *param_6;
         while (true) {
            uVar4 = (ulong)iVar2;
            if (lVar5 != 0) {
               iVar2 = *(int*)( lVar5 + 0x2c );
               if (iVar2 != *(int*)( param_1 + 0x2c )) {
                  uVar4 = (long)( uVar4 * (long)*(int*)( param_1 + 0x2c ) ) / (long)iVar2;
               }
            }
            uVar7 = uVar7 + 1;
            *param_6 = (int)uVar4;
            param_6 = (int*)( (long)param_6 + (ulong)param_7 );
            if (param_3 == uVar7) break;
            iVar2 = *param_6;
         };
      }
   } else {
      uVar7 = 0;
      if (param_3 != 0) {
         while (true) {
            lVar5 = *(long*)( uVar4 + 0x10 );
            uVar1 = *param_4;
            if (lVar5 != 0) {
               lVar5 = *(long*)( lVar5 + 0x30 );
            }
            uVar7 = uVar7 + 1;
            param_4 = (uint*)( (long)param_4 + (ulong)param_5 );
            iVar2 = ( *pcVar6 )(param_1, *(undefined8*)( param_1 + 0x98 ), uVar1, lVar5);
            *param_6 = iVar2;
            param_6 = (int*)( (long)param_6 + (ulong)param_7 );
            uVar4 = (ulong)param_7;
            if (param_3 == uVar7) break;
            uVar4 = *(ulong*)( param_1 + 0x90 );
            pcVar6 = *(code**)( uVar4 + 0x50 );
         };
      }
   }
   return uVar4;
}/* hb_font_get_glyph_h_advance_default(hb_font_t*, void*, unsigned int, void*) */ulong hb_font_get_glyph_h_advance_default(hb_font_t *param_1, void *param_2, uint param_3, void *param_4) {
   int iVar1;
   code *pcVar2;
   ulong uVar3;
   long lVar4;
   long lVar5;
   long in_FS_OFFSET;
   uint local_1c[2];
   uint local_14;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar2 = *(code**)( *(long*)( param_1 + 0x90 ) + 0x58 );
   local_1c[0] = param_3;
   if (pcVar2 == (code*)_hb_font_funcs_default._88_8_) {
      lVar5 = *(long*)( param_1 + 0x18 );
      lVar4 = *(long*)( *(long*)( lVar5 + 0x90 ) + 0x10 );
      if (lVar4 != 0) {
         lVar4 = *(long*)( lVar4 + 0x28 );
      }
      uVar3 = ( **(code**)( *(long*)( lVar5 + 0x90 ) + 0x48 ) )(lVar5, *(undefined8*)( lVar5 + 0x98 ), param_3, lVar4);
      if (*(long*)( param_1 + 0x18 ) != 0) {
         iVar1 = *(int*)( *(long*)( param_1 + 0x18 ) + 0x28 );
         if (iVar1 != *(int*)( param_1 + 0x28 )) {
            uVar3 = ( (long)(int)uVar3 * (long)*(int*)( param_1 + 0x28 ) ) / (long)iVar1;
         }
      }
   } else {
      lVar5 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
      if (lVar5 != 0) {
         lVar5 = *(long*)( lVar5 + 0x38 );
      }
      ( *pcVar2 )(param_1, *(undefined8*)( param_1 + 0x98 ), 1, local_1c, 0, &local_14, 0, lVar5);
      uVar3 = (ulong)local_14;
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* hb_font_get_nominal_glyph_default(hb_font_t*, void*, unsigned int, unsigned int*, void*) */void hb_font_get_nominal_glyph_default(hb_font_t *param_1, void *param_2, uint param_3, uint *param_4, void *param_5) {
   code *pcVar1;
   long lVar2;
   long lVar3;
   uint local_c[3];
   pcVar1 = *(code**)( *(long*)( param_1 + 0x90 ) + 0x38 );
   local_c[0] = param_3;
   if (pcVar1 != (code*)_hb_font_funcs_default._56_8_) {
      lVar2 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
      if (lVar2 != 0) {
         lVar2 = *(long*)( lVar2 + 0x18 );
      }
      ( *pcVar1 )(param_1, *(undefined8*)( param_1 + 0x98 ), 1, local_c, 0, param_4, 0, lVar2);
      return;
   }
   lVar2 = *(long*)( param_1 + 0x18 );
   *param_4 = 0;
   lVar3 = *(long*)( *(long*)( lVar2 + 0x90 ) + 0x10 );
   if (lVar3 != 0) {
      lVar3 = *(long*)( lVar3 + 0x10 );
   }
   ( **(code**)( *(long*)( lVar2 + 0x90 ) + 0x30 ) )(lVar2, *(undefined8*)( lVar2 + 0x98 ), param_3, param_4, lVar3);
   return;
}/* hb_font_get_glyph_h_origin_default(hb_font_t*, void*, unsigned int, int*, int*, void*) */int hb_font_get_glyph_h_origin_default(hb_font_t *param_1, void *param_2, uint param_3, int *param_4, int *param_5, void *param_6) {
   long lVar1;
   long lVar2;
   int iVar3;
   int iVar4;
   undefined4 in_register_00000014;
   long lVar5;
   lVar1 = *(long*)( param_1 + 0x18 );
   *param_5 = 0;
   lVar2 = *(long*)( lVar1 + 0x90 );
   *param_4 = 0;
   lVar5 = *(long*)( lVar2 + 0x10 );
   if (lVar5 != 0) {
      lVar5 = *(long*)( lVar5 + 0x48 );
   }
   iVar3 = ( **(code**)( lVar2 + 0x68 ) )(lVar1, *(undefined8*)( lVar1 + 0x98 ), CONCAT44(in_register_00000014, param_3), param_4, param_5, lVar5);
   if (iVar3 == 0) {
      return 0;
   }
   lVar1 = *(long*)( param_1 + 0x18 );
   if (lVar1 == 0) {
      iVar4 = *param_5;
   } else {
      if (*(int*)( lVar1 + 0x28 ) == *(int*)( param_1 + 0x28 )) {
         iVar4 = *param_5;
      } else {
         *param_4 = (int)( ( (long)*param_4 * (long)*(int*)( param_1 + 0x28 ) ) / (long)*(int*)( lVar1 + 0x28 ) );
         iVar4 = *param_5;
      }
      if (*(int*)( lVar1 + 0x2c ) != *(int*)( param_1 + 0x2c )) {
         *param_5 = (int)( ( (long)iVar4 * (long)*(int*)( param_1 + 0x2c ) ) / (long)*(int*)( lVar1 + 0x2c ) );
         return iVar3;
      }
   }
   *param_5 = iVar4;
   return iVar3;
}/* hb_font_get_glyph_v_origin_default(hb_font_t*, void*, unsigned int, int*, int*, void*) */int hb_font_get_glyph_v_origin_default(hb_font_t *param_1, void *param_2, uint param_3, int *param_4, int *param_5, void *param_6) {
   long lVar1;
   long lVar2;
   int iVar3;
   int iVar4;
   undefined4 in_register_00000014;
   long lVar5;
   lVar1 = *(long*)( param_1 + 0x18 );
   *param_5 = 0;
   lVar2 = *(long*)( lVar1 + 0x90 );
   *param_4 = 0;
   lVar5 = *(long*)( lVar2 + 0x10 );
   if (lVar5 != 0) {
      lVar5 = *(long*)( lVar5 + 0x50 );
   }
   iVar3 = ( **(code**)( lVar2 + 0x70 ) )(lVar1, *(undefined8*)( lVar1 + 0x98 ), CONCAT44(in_register_00000014, param_3), param_4, param_5, lVar5);
   if (iVar3 == 0) {
      return 0;
   }
   lVar1 = *(long*)( param_1 + 0x18 );
   if (lVar1 == 0) {
      iVar4 = *param_5;
   } else {
      if (*(int*)( lVar1 + 0x28 ) == *(int*)( param_1 + 0x28 )) {
         iVar4 = *param_5;
      } else {
         *param_4 = (int)( ( (long)*param_4 * (long)*(int*)( param_1 + 0x28 ) ) / (long)*(int*)( lVar1 + 0x28 ) );
         iVar4 = *param_5;
      }
      if (*(int*)( lVar1 + 0x2c ) != *(int*)( param_1 + 0x2c )) {
         *param_5 = (int)( ( (long)iVar4 * (long)*(int*)( param_1 + 0x2c ) ) / (long)*(int*)( lVar1 + 0x2c ) );
         return iVar3;
      }
   }
   *param_5 = iVar4;
   return iVar3;
}/* hb_font_get_glyph_contour_point_default(hb_font_t*, void*, unsigned int, unsigned int, int*,
   int*, void*) */undefined1[16];hb_font_get_glyph_contour_point_default(hb_font_t *param_1, void *param_2, uint param_3, uint param_4, int *param_5, int *param_6, void *param_7) {
   uint uVar1;
   long lVar2;
   undefined1 auVar3[16];
   int iVar4;
   long lVar5;
   long lVar6;
   undefined4 in_register_0000000c;
   undefined4 in_register_00000014;
   undefined1 auVar7[16];
   ulong uStack_20;
   lVar6 = *(long*)( param_1 + 0x18 );
   *param_6 = 0;
   lVar2 = *(long*)( lVar6 + 0x90 );
   *param_5 = 0;
   lVar5 = *(long*)( lVar2 + 0x10 );
   if (lVar5 != 0) {
      lVar5 = *(long*)( lVar5 + 0x70 );
   }
   auVar7._0_4_ = ( **(code**)( lVar2 + 0x90 ) )(lVar6, *(undefined8*)( lVar6 + 0x98 ), CONCAT44(in_register_00000014, param_3), CONCAT44(in_register_0000000c, param_4), param_5, param_6, lVar5);
   if (auVar7._0_4_ == 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uStack_20;
      return auVar3 << 0x40;
   }
   lVar6 = *(long*)( param_1 + 0x18 );
   if (lVar6 == 0) {
      iVar4 = *param_6;
   } else {
      if (*(int*)( lVar6 + 0x28 ) == *(int*)( param_1 + 0x28 )) {
         iVar4 = *param_6;
      } else {
         *param_5 = (int)( ( (long)*param_5 * (long)*(int*)( param_1 + 0x28 ) ) / (long)*(int*)( lVar6 + 0x28 ) );
         iVar4 = *param_6;
      }
      uVar1 = *(uint*)( lVar6 + 0x2c );
      uStack_20 = (ulong)uVar1;
      if (uVar1 != *(uint*)( param_1 + 0x2c )) {
         lVar6 = (long)iVar4 * (long)(int)*(uint*)( param_1 + 0x2c );
         uStack_20 = lVar6 % (long)(int)uVar1;
         *param_6 = (int)( lVar6 / (long)(int)uVar1 );
         goto LAB_00101ad6;
      }
   }
   *param_6 = iVar4;
   LAB_00101ad6:auVar7._4_4_ = 0;
   auVar7._8_8_ = uStack_20;
   return auVar7;
}void hb_font_destroy_part_0(void *param_1) {
   hb_font_t *phVar1;
   bool bVar2;
   if (*(long*)( (long)param_1 + 0xb0 ) != 0) {
      _hb_graphite2_shaper_font_data_destroy();
   }
   *(undefined8*)( (long)param_1 + 0xb0 ) = 0;
   if (*(long*)( (long)param_1 + 0xb8 ) != 0) {
      _hb_ot_shaper_font_data_destroy();
   }
   *(undefined8*)( (long)param_1 + 0xb8 ) = 0;
   if (*(long*)( (long)param_1 + 0xc0 ) != 0) {
      _hb_fallback_shaper_font_data_destroy();
   }
   *(undefined8*)( (long)param_1 + 0xc0 ) = 0;
   if (*(code**)( (long)param_1 + 0xa0 ) != (code*)0x0) {
      ( **(code**)( (long)param_1 + 0xa0 ) )(*(undefined8*)( (long)param_1 + 0x98 ));
   }
   phVar1 = *(hb_font_t**)( (long)param_1 + 0x18 );
   bVar2 = hb_object_destroy<hb_font_t>(phVar1);
   if (bVar2) {
      hb_font_destroy_part_0(phVar1);
   }
   hb_face_destroy(*(undefined8*)( (long)param_1 + 0x20 ));
   phVar1 = *(hb_font_t**)( (long)param_1 + 0x90 );
   bVar2 = hb_object_destroy<hb_font_t>(phVar1);
   if (bVar2) {
      hb_font_funcs_destroy_part_0(phVar1);
   }
   free(*(void**)( (long)param_1 + 0x80 ));
   free(*(void**)( (long)param_1 + 0x88 ));
   free(param_1);
   return;
}undefined4 *hb_font_funcs_create(void) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   undefined8 uVar11;
   undefined8 uVar12;
   undefined8 uVar13;
   undefined8 uVar14;
   undefined4 *puVar15;
   puVar15 = (undefined4*)calloc(1, 0xb8);
   if (puVar15 != (undefined4*)0x0) {
      *puVar15 = 1;
      puVar15[1] = 1;
      *(undefined8*)( puVar15 + 2 ) = 0;
      uVar9 = _hb_font_funcs_default._104_8_;
      uVar8 = _hb_font_funcs_default._96_8_;
      uVar7 = _hb_font_funcs_default._88_8_;
      uVar6 = _hb_font_funcs_default._80_8_;
      uVar5 = _hb_font_funcs_default._72_8_;
      uVar4 = _hb_font_funcs_default._64_8_;
      uVar3 = _hb_font_funcs_default._56_8_;
      uVar2 = _hb_font_funcs_default._48_8_;
      uVar1 = _hb_font_funcs_default._40_8_;
      *(undefined8*)( puVar15 + 8 ) = _hb_font_funcs_default._32_8_;
      *(undefined8*)( puVar15 + 10 ) = uVar1;
      uVar12 = _hb_font_funcs_default._136_8_;
      uVar11 = _hb_font_funcs_default._128_8_;
      uVar10 = _hb_font_funcs_default._120_8_;
      uVar1 = _hb_font_funcs_default._112_8_;
      *(undefined8*)( puVar15 + 0xc ) = uVar2;
      *(undefined8*)( puVar15 + 0xe ) = uVar3;
      uVar14 = _hb_font_funcs_default._168_8_;
      uVar13 = _hb_font_funcs_default._160_8_;
      uVar3 = _hb_font_funcs_default._152_8_;
      uVar2 = _hb_font_funcs_default._144_8_;
      *(undefined8*)( puVar15 + 0x10 ) = uVar4;
      *(undefined8*)( puVar15 + 0x12 ) = uVar5;
      uVar4 = _hb_font_funcs_default._176_8_;
      *(undefined8*)( puVar15 + 0x14 ) = uVar6;
      *(undefined8*)( puVar15 + 0x16 ) = uVar7;
      *(undefined8*)( puVar15 + 0x18 ) = uVar8;
      *(undefined8*)( puVar15 + 0x1a ) = uVar9;
      *(undefined8*)( puVar15 + 0x2c ) = uVar4;
      *(undefined8*)( puVar15 + 0x1c ) = uVar1;
      *(undefined8*)( puVar15 + 0x1e ) = uVar10;
      *(undefined8*)( puVar15 + 0x20 ) = uVar11;
      *(undefined8*)( puVar15 + 0x22 ) = uVar12;
      *(undefined8*)( puVar15 + 0x24 ) = uVar2;
      *(undefined8*)( puVar15 + 0x26 ) = uVar3;
      *(undefined8*)( puVar15 + 0x28 ) = uVar13;
      *(undefined8*)( puVar15 + 0x2a ) = uVar14;
      return puVar15;
   }
   return (undefined4*)_hb_font_funcs_default;
}undefined1 *hb_font_funcs_get_empty(void) {
   return _hb_font_funcs_default;
}int *hb_font_funcs_reference(int *param_1) {
   if (( param_1 != (int*)0x0 ) && ( *param_1 != 0 )) {
      LOCK();
      *param_1 = *param_1 + 1;
      UNLOCK();
   }
   return param_1;
}void hb_font_funcs_destroy(hb_font_t *param_1) {
   bool bVar1;
   bVar1 = hb_object_destroy<hb_font_t>(param_1);
   if (bVar1) {
      hb_font_funcs_destroy_part_0(param_1);
      return;
   }
   return;
}bool hb_font_funcs_set_user_data(hb_font_t *param_1, hb_user_data_key_t *param_2, void *param_3, _func_void_void_ptr *param_4, int param_5) {
   bool bVar1;
   bVar1 = hb_object_set_user_data<hb_font_t>(param_1, param_2, param_3, param_4, param_5);
   return bVar1;
}long hb_font_funcs_get_user_data(int *param_1, long param_2) {
   pthread_mutex_t *__mutex;
   long lVar1;
   uint uVar2;
   long *plVar3;
   if (( ( param_1 != (int*)0x0 ) && ( *param_1 != 0 ) ) && ( __mutex = *(pthread_mutex_t**)( param_1 + 2 ) ),__mutex != (pthread_mutex_t*)0x0) {
      pthread_mutex_lock(__mutex);
      if (*(uint*)( (long)__mutex + 0x2c ) != 0) {
         uVar2 = 0;
         plVar3 = *(long**)( (long)__mutex + 0x30 );
         do {
            if (param_2 == *plVar3) {
               plVar3 = *(long**)( (long)__mutex + 0x30 ) + (ulong)uVar2 * 3;
               if (plVar3 != (long*)0x0) {
                  lVar1 = plVar3[1];
                  pthread_mutex_unlock(__mutex);
                  return lVar1;
               }
               break;
            }
            uVar2 = uVar2 + 1;
            plVar3 = plVar3 + 3;
         } while ( *(uint*)( (long)__mutex + 0x2c ) != uVar2 );
      }
      pthread_mutex_unlock(__mutex);
   }
   return 0;
}void hb_font_funcs_make_immutable(long param_1) {
   if (*(int*)( param_1 + 4 ) == 0) {
      return;
   }
   *(undefined4*)( param_1 + 4 ) = 0;
   return;
}bool hb_font_funcs_is_immutable(long param_1) {
   return *(int*)( param_1 + 4 ) == 0;
}void hb_font_funcs_set_font_h_extents_func(hb_font_funcs_t *param_1, code *param_2, void *param_3, _func_void_void_ptr *param_4) {
   code *pcVar1;
   _func_void_void_ptr *p_Var2;
   void *pvVar3;
   char cVar4;
   long *plVar5;
   _func_void_void_ptr *local_38;
   void *local_30[2];
   local_38 = param_4;
   local_30[0] = param_3;
   cVar4 = _hb_font_funcs_set_preamble(param_1, param_2 == (code*)0x0, local_30, (_func_void_void_ptr*)&local_38);
   if (cVar4 != '\0') {
      if (( *(undefined8**)( param_1 + 0x18 ) != (undefined8*)0x0 ) && ( pcVar1 = (code*)**(undefined8**)( param_1 + 0x18 ) ),pcVar1 != (code*)0x0) {
         plVar5 = *(long**)( param_1 + 0x10 );
         if (plVar5 != (long*)0x0) {
            plVar5 = (long*)*plVar5;
         }
         ( *pcVar1 )(plVar5);
      }
      pvVar3 = local_30[0];
      p_Var2 = local_38;
      cVar4 = _hb_font_funcs_set_middle(param_1, local_30[0], local_38);
      if (cVar4 != '\0') {
         if (param_2 == (code*)0x0) {
            param_2 = hb_font_get_font_h_extents_default;
         }
         *(code**)( param_1 + 0x20 ) = param_2;
         if (*(undefined8**)( param_1 + 0x10 ) != (undefined8*)0x0) {
            **(undefined8**)( param_1 + 0x10 ) = pvVar3;
         }
         if (*(undefined8**)( param_1 + 0x18 ) != (undefined8*)0x0) {
            **(undefined8**)( param_1 + 0x18 ) = p_Var2;
         }
      }
   }
   return;
}void hb_font_funcs_set_font_v_extents_func(hb_font_funcs_t *param_1, code *param_2, void *param_3, _func_void_void_ptr *param_4) {
   code *pcVar1;
   _func_void_void_ptr *p_Var2;
   void *pvVar3;
   char cVar4;
   long lVar5;
   _func_void_void_ptr *local_38;
   void *local_30[2];
   local_38 = param_4;
   local_30[0] = param_3;
   cVar4 = _hb_font_funcs_set_preamble(param_1, param_2 == (code*)0x0, local_30, (_func_void_void_ptr*)&local_38);
   if (cVar4 != '\0') {
      if (( *(long*)( param_1 + 0x18 ) != 0 ) && ( pcVar1 = *(code**)( *(long*)( param_1 + 0x18 ) + 8 ) ),pcVar1 != (code*)0x0) {
         lVar5 = *(long*)( param_1 + 0x10 );
         if (lVar5 != 0) {
            lVar5 = *(long*)( lVar5 + 8 );
         }
         ( *pcVar1 )(lVar5);
      }
      pvVar3 = local_30[0];
      p_Var2 = local_38;
      cVar4 = _hb_font_funcs_set_middle(param_1, local_30[0], local_38);
      if (cVar4 != '\0') {
         if (param_2 == (code*)0x0) {
            param_2 = hb_font_get_font_v_extents_default;
         }
         *(code**)( param_1 + 0x28 ) = param_2;
         if (*(long*)( param_1 + 0x10 ) != 0) {
            *(void**)( *(long*)( param_1 + 0x10 ) + 8 ) = pvVar3;
         }
         if (*(long*)( param_1 + 0x18 ) != 0) {
            *(_func_void_void_ptr**)( *(long*)( param_1 + 0x18 ) + 8 ) = p_Var2;
         }
      }
   }
   return;
}void hb_font_funcs_set_nominal_glyph_func(hb_font_funcs_t *param_1, code *param_2, void *param_3, _func_void_void_ptr *param_4) {
   code *pcVar1;
   _func_void_void_ptr *p_Var2;
   void *pvVar3;
   char cVar4;
   long lVar5;
   _func_void_void_ptr *local_38;
   void *local_30[2];
   local_38 = param_4;
   local_30[0] = param_3;
   cVar4 = _hb_font_funcs_set_preamble(param_1, param_2 == (code*)0x0, local_30, (_func_void_void_ptr*)&local_38);
   if (cVar4 != '\0') {
      if (( *(long*)( param_1 + 0x18 ) != 0 ) && ( pcVar1 = *(code**)( *(long*)( param_1 + 0x18 ) + 0x10 ) ),pcVar1 != (code*)0x0) {
         lVar5 = *(long*)( param_1 + 0x10 );
         if (lVar5 != 0) {
            lVar5 = *(long*)( lVar5 + 0x10 );
         }
         ( *pcVar1 )(lVar5);
      }
      pvVar3 = local_30[0];
      p_Var2 = local_38;
      cVar4 = _hb_font_funcs_set_middle(param_1, local_30[0], local_38);
      if (cVar4 != '\0') {
         if (param_2 == (code*)0x0) {
            param_2 = hb_font_get_nominal_glyph_default;
         }
         *(code**)( param_1 + 0x30 ) = param_2;
         if (*(long*)( param_1 + 0x10 ) != 0) {
            *(void**)( *(long*)( param_1 + 0x10 ) + 0x10 ) = pvVar3;
         }
         if (*(long*)( param_1 + 0x18 ) != 0) {
            *(_func_void_void_ptr**)( *(long*)( param_1 + 0x18 ) + 0x10 ) = p_Var2;
         }
      }
   }
   return;
}void hb_font_funcs_set_nominal_glyphs_func(hb_font_funcs_t *param_1, code *param_2, void *param_3, _func_void_void_ptr *param_4) {
   code *pcVar1;
   _func_void_void_ptr *p_Var2;
   void *pvVar3;
   char cVar4;
   long lVar5;
   _func_void_void_ptr *local_38;
   void *local_30[2];
   local_38 = param_4;
   local_30[0] = param_3;
   cVar4 = _hb_font_funcs_set_preamble(param_1, param_2 == (code*)0x0, local_30, (_func_void_void_ptr*)&local_38);
   if (cVar4 != '\0') {
      if (( *(long*)( param_1 + 0x18 ) != 0 ) && ( pcVar1 = *(code**)( *(long*)( param_1 + 0x18 ) + 0x18 ) ),pcVar1 != (code*)0x0) {
         lVar5 = *(long*)( param_1 + 0x10 );
         if (lVar5 != 0) {
            lVar5 = *(long*)( lVar5 + 0x18 );
         }
         ( *pcVar1 )(lVar5);
      }
      pvVar3 = local_30[0];
      p_Var2 = local_38;
      cVar4 = _hb_font_funcs_set_middle(param_1, local_30[0], local_38);
      if (cVar4 != '\0') {
         if (param_2 == (code*)0x0) {
            param_2 = hb_font_get_nominal_glyphs_default;
         }
         *(code**)( param_1 + 0x38 ) = param_2;
         if (*(long*)( param_1 + 0x10 ) != 0) {
            *(void**)( *(long*)( param_1 + 0x10 ) + 0x18 ) = pvVar3;
         }
         if (*(long*)( param_1 + 0x18 ) != 0) {
            *(_func_void_void_ptr**)( *(long*)( param_1 + 0x18 ) + 0x18 ) = p_Var2;
         }
      }
   }
   return;
}void hb_font_funcs_set_variation_glyph_func(hb_font_funcs_t *param_1, code *param_2, void *param_3, _func_void_void_ptr *param_4) {
   code *pcVar1;
   _func_void_void_ptr *p_Var2;
   void *pvVar3;
   char cVar4;
   long lVar5;
   _func_void_void_ptr *local_38;
   void *local_30[2];
   local_38 = param_4;
   local_30[0] = param_3;
   cVar4 = _hb_font_funcs_set_preamble(param_1, param_2 == (code*)0x0, local_30, (_func_void_void_ptr*)&local_38);
   if (cVar4 != '\0') {
      if (( *(long*)( param_1 + 0x18 ) != 0 ) && ( pcVar1 = *(code**)( *(long*)( param_1 + 0x18 ) + 0x20 ) ),pcVar1 != (code*)0x0) {
         lVar5 = *(long*)( param_1 + 0x10 );
         if (lVar5 != 0) {
            lVar5 = *(long*)( lVar5 + 0x20 );
         }
         ( *pcVar1 )(lVar5);
      }
      pvVar3 = local_30[0];
      p_Var2 = local_38;
      cVar4 = _hb_font_funcs_set_middle(param_1, local_30[0], local_38);
      if (cVar4 != '\0') {
         if (param_2 == (code*)0x0) {
            param_2 = hb_font_get_variation_glyph_default;
         }
         *(code**)( param_1 + 0x40 ) = param_2;
         if (*(long*)( param_1 + 0x10 ) != 0) {
            *(void**)( *(long*)( param_1 + 0x10 ) + 0x20 ) = pvVar3;
         }
         if (*(long*)( param_1 + 0x18 ) != 0) {
            *(_func_void_void_ptr**)( *(long*)( param_1 + 0x18 ) + 0x20 ) = p_Var2;
         }
      }
   }
   return;
}void hb_font_funcs_set_glyph_h_advance_func(hb_font_funcs_t *param_1, code *param_2, void *param_3, _func_void_void_ptr *param_4) {
   code *pcVar1;
   _func_void_void_ptr *p_Var2;
   void *pvVar3;
   char cVar4;
   long lVar5;
   _func_void_void_ptr *local_38;
   void *local_30[2];
   local_38 = param_4;
   local_30[0] = param_3;
   cVar4 = _hb_font_funcs_set_preamble(param_1, param_2 == (code*)0x0, local_30, (_func_void_void_ptr*)&local_38);
   if (cVar4 != '\0') {
      if (( *(long*)( param_1 + 0x18 ) != 0 ) && ( pcVar1 = *(code**)( *(long*)( param_1 + 0x18 ) + 0x28 ) ),pcVar1 != (code*)0x0) {
         lVar5 = *(long*)( param_1 + 0x10 );
         if (lVar5 != 0) {
            lVar5 = *(long*)( lVar5 + 0x28 );
         }
         ( *pcVar1 )(lVar5);
      }
      pvVar3 = local_30[0];
      p_Var2 = local_38;
      cVar4 = _hb_font_funcs_set_middle(param_1, local_30[0], local_38);
      if (cVar4 != '\0') {
         if (param_2 == (code*)0x0) {
            param_2 = hb_font_get_glyph_h_advance_default;
         }
         *(code**)( param_1 + 0x48 ) = param_2;
         if (*(long*)( param_1 + 0x10 ) != 0) {
            *(void**)( *(long*)( param_1 + 0x10 ) + 0x28 ) = pvVar3;
         }
         if (*(long*)( param_1 + 0x18 ) != 0) {
            *(_func_void_void_ptr**)( *(long*)( param_1 + 0x18 ) + 0x28 ) = p_Var2;
         }
      }
   }
   return;
}void hb_font_funcs_set_glyph_v_advance_func(hb_font_funcs_t *param_1, code *param_2, void *param_3, _func_void_void_ptr *param_4) {
   code *pcVar1;
   _func_void_void_ptr *p_Var2;
   void *pvVar3;
   char cVar4;
   long lVar5;
   _func_void_void_ptr *local_38;
   void *local_30[2];
   local_38 = param_4;
   local_30[0] = param_3;
   cVar4 = _hb_font_funcs_set_preamble(param_1, param_2 == (code*)0x0, local_30, (_func_void_void_ptr*)&local_38);
   if (cVar4 != '\0') {
      if (( *(long*)( param_1 + 0x18 ) != 0 ) && ( pcVar1 = *(code**)( *(long*)( param_1 + 0x18 ) + 0x30 ) ),pcVar1 != (code*)0x0) {
         lVar5 = *(long*)( param_1 + 0x10 );
         if (lVar5 != 0) {
            lVar5 = *(long*)( lVar5 + 0x30 );
         }
         ( *pcVar1 )(lVar5);
      }
      pvVar3 = local_30[0];
      p_Var2 = local_38;
      cVar4 = _hb_font_funcs_set_middle(param_1, local_30[0], local_38);
      if (cVar4 != '\0') {
         if (param_2 == (code*)0x0) {
            param_2 = hb_font_get_glyph_v_advance_default;
         }
         *(code**)( param_1 + 0x50 ) = param_2;
         if (*(long*)( param_1 + 0x10 ) != 0) {
            *(void**)( *(long*)( param_1 + 0x10 ) + 0x30 ) = pvVar3;
         }
         if (*(long*)( param_1 + 0x18 ) != 0) {
            *(_func_void_void_ptr**)( *(long*)( param_1 + 0x18 ) + 0x30 ) = p_Var2;
         }
      }
   }
   return;
}void hb_font_funcs_set_glyph_h_advances_func(hb_font_funcs_t *param_1, code *param_2, void *param_3, _func_void_void_ptr *param_4) {
   code *pcVar1;
   _func_void_void_ptr *p_Var2;
   void *pvVar3;
   char cVar4;
   long lVar5;
   _func_void_void_ptr *local_38;
   void *local_30[2];
   local_38 = param_4;
   local_30[0] = param_3;
   cVar4 = _hb_font_funcs_set_preamble(param_1, param_2 == (code*)0x0, local_30, (_func_void_void_ptr*)&local_38);
   if (cVar4 != '\0') {
      if (( *(long*)( param_1 + 0x18 ) != 0 ) && ( pcVar1 = *(code**)( *(long*)( param_1 + 0x18 ) + 0x38 ) ),pcVar1 != (code*)0x0) {
         lVar5 = *(long*)( param_1 + 0x10 );
         if (lVar5 != 0) {
            lVar5 = *(long*)( lVar5 + 0x38 );
         }
         ( *pcVar1 )(lVar5);
      }
      pvVar3 = local_30[0];
      p_Var2 = local_38;
      cVar4 = _hb_font_funcs_set_middle(param_1, local_30[0], local_38);
      if (cVar4 != '\0') {
         if (param_2 == (code*)0x0) {
            param_2 = hb_font_get_glyph_h_advances_default;
         }
         *(code**)( param_1 + 0x58 ) = param_2;
         if (*(long*)( param_1 + 0x10 ) != 0) {
            *(void**)( *(long*)( param_1 + 0x10 ) + 0x38 ) = pvVar3;
         }
         if (*(long*)( param_1 + 0x18 ) != 0) {
            *(_func_void_void_ptr**)( *(long*)( param_1 + 0x18 ) + 0x38 ) = p_Var2;
         }
      }
   }
   return;
}void hb_font_funcs_set_glyph_v_advances_func(hb_font_funcs_t *param_1, code *param_2, void *param_3, _func_void_void_ptr *param_4) {
   code *pcVar1;
   _func_void_void_ptr *p_Var2;
   void *pvVar3;
   char cVar4;
   long lVar5;
   _func_void_void_ptr *local_38;
   void *local_30[2];
   local_38 = param_4;
   local_30[0] = param_3;
   cVar4 = _hb_font_funcs_set_preamble(param_1, param_2 == (code*)0x0, local_30, (_func_void_void_ptr*)&local_38);
   if (cVar4 != '\0') {
      if (( *(long*)( param_1 + 0x18 ) != 0 ) && ( pcVar1 = *(code**)( *(long*)( param_1 + 0x18 ) + 0x40 ) ),pcVar1 != (code*)0x0) {
         lVar5 = *(long*)( param_1 + 0x10 );
         if (lVar5 != 0) {
            lVar5 = *(long*)( lVar5 + 0x40 );
         }
         ( *pcVar1 )(lVar5);
      }
      pvVar3 = local_30[0];
      p_Var2 = local_38;
      cVar4 = _hb_font_funcs_set_middle(param_1, local_30[0], local_38);
      if (cVar4 != '\0') {
         if (param_2 == (code*)0x0) {
            param_2 = hb_font_get_glyph_v_advances_default;
         }
         *(code**)( param_1 + 0x60 ) = param_2;
         if (*(long*)( param_1 + 0x10 ) != 0) {
            *(void**)( *(long*)( param_1 + 0x10 ) + 0x40 ) = pvVar3;
         }
         if (*(long*)( param_1 + 0x18 ) != 0) {
            *(_func_void_void_ptr**)( *(long*)( param_1 + 0x18 ) + 0x40 ) = p_Var2;
         }
      }
   }
   return;
}void hb_font_funcs_set_glyph_h_origin_func(hb_font_funcs_t *param_1, code *param_2, void *param_3, _func_void_void_ptr *param_4) {
   code *pcVar1;
   _func_void_void_ptr *p_Var2;
   void *pvVar3;
   char cVar4;
   long lVar5;
   _func_void_void_ptr *local_38;
   void *local_30[2];
   local_38 = param_4;
   local_30[0] = param_3;
   cVar4 = _hb_font_funcs_set_preamble(param_1, param_2 == (code*)0x0, local_30, (_func_void_void_ptr*)&local_38);
   if (cVar4 != '\0') {
      if (( *(long*)( param_1 + 0x18 ) != 0 ) && ( pcVar1 = *(code**)( *(long*)( param_1 + 0x18 ) + 0x48 ) ),pcVar1 != (code*)0x0) {
         lVar5 = *(long*)( param_1 + 0x10 );
         if (lVar5 != 0) {
            lVar5 = *(long*)( lVar5 + 0x48 );
         }
         ( *pcVar1 )(lVar5);
      }
      pvVar3 = local_30[0];
      p_Var2 = local_38;
      cVar4 = _hb_font_funcs_set_middle(param_1, local_30[0], local_38);
      if (cVar4 != '\0') {
         if (param_2 == (code*)0x0) {
            param_2 = hb_font_get_glyph_h_origin_default;
         }
         *(code**)( param_1 + 0x68 ) = param_2;
         if (*(long*)( param_1 + 0x10 ) != 0) {
            *(void**)( *(long*)( param_1 + 0x10 ) + 0x48 ) = pvVar3;
         }
         if (*(long*)( param_1 + 0x18 ) != 0) {
            *(_func_void_void_ptr**)( *(long*)( param_1 + 0x18 ) + 0x48 ) = p_Var2;
         }
      }
   }
   return;
}void hb_font_funcs_set_glyph_v_origin_func(hb_font_funcs_t *param_1, code *param_2, void *param_3, _func_void_void_ptr *param_4) {
   code *pcVar1;
   _func_void_void_ptr *p_Var2;
   void *pvVar3;
   char cVar4;
   long lVar5;
   _func_void_void_ptr *local_38;
   void *local_30[2];
   local_38 = param_4;
   local_30[0] = param_3;
   cVar4 = _hb_font_funcs_set_preamble(param_1, param_2 == (code*)0x0, local_30, (_func_void_void_ptr*)&local_38);
   if (cVar4 != '\0') {
      if (( *(long*)( param_1 + 0x18 ) != 0 ) && ( pcVar1 = *(code**)( *(long*)( param_1 + 0x18 ) + 0x50 ) ),pcVar1 != (code*)0x0) {
         lVar5 = *(long*)( param_1 + 0x10 );
         if (lVar5 != 0) {
            lVar5 = *(long*)( lVar5 + 0x50 );
         }
         ( *pcVar1 )(lVar5);
      }
      pvVar3 = local_30[0];
      p_Var2 = local_38;
      cVar4 = _hb_font_funcs_set_middle(param_1, local_30[0], local_38);
      if (cVar4 != '\0') {
         if (param_2 == (code*)0x0) {
            param_2 = hb_font_get_glyph_v_origin_default;
         }
         *(code**)( param_1 + 0x70 ) = param_2;
         if (*(long*)( param_1 + 0x10 ) != 0) {
            *(void**)( *(long*)( param_1 + 0x10 ) + 0x50 ) = pvVar3;
         }
         if (*(long*)( param_1 + 0x18 ) != 0) {
            *(_func_void_void_ptr**)( *(long*)( param_1 + 0x18 ) + 0x50 ) = p_Var2;
         }
      }
   }
   return;
}void hb_font_funcs_set_glyph_h_kerning_func(hb_font_funcs_t *param_1, code *param_2, void *param_3, _func_void_void_ptr *param_4) {
   code *pcVar1;
   _func_void_void_ptr *p_Var2;
   void *pvVar3;
   char cVar4;
   long lVar5;
   _func_void_void_ptr *local_38;
   void *local_30[2];
   local_38 = param_4;
   local_30[0] = param_3;
   cVar4 = _hb_font_funcs_set_preamble(param_1, param_2 == (code*)0x0, local_30, (_func_void_void_ptr*)&local_38);
   if (cVar4 != '\0') {
      if (( *(long*)( param_1 + 0x18 ) != 0 ) && ( pcVar1 = *(code**)( *(long*)( param_1 + 0x18 ) + 0x58 ) ),pcVar1 != (code*)0x0) {
         lVar5 = *(long*)( param_1 + 0x10 );
         if (lVar5 != 0) {
            lVar5 = *(long*)( lVar5 + 0x58 );
         }
         ( *pcVar1 )(lVar5);
      }
      pvVar3 = local_30[0];
      p_Var2 = local_38;
      cVar4 = _hb_font_funcs_set_middle(param_1, local_30[0], local_38);
      if (cVar4 != '\0') {
         if (param_2 == (code*)0x0) {
            param_2 = hb_font_get_glyph_h_kerning_default;
         }
         *(code**)( param_1 + 0x78 ) = param_2;
         if (*(long*)( param_1 + 0x10 ) != 0) {
            *(void**)( *(long*)( param_1 + 0x10 ) + 0x58 ) = pvVar3;
         }
         if (*(long*)( param_1 + 0x18 ) != 0) {
            *(_func_void_void_ptr**)( *(long*)( param_1 + 0x18 ) + 0x58 ) = p_Var2;
         }
      }
   }
   return;
}void hb_font_funcs_set_glyph_v_kerning_func(hb_font_funcs_t *param_1, code *param_2, void *param_3, _func_void_void_ptr *param_4) {
   code *pcVar1;
   _func_void_void_ptr *p_Var2;
   void *pvVar3;
   char cVar4;
   long lVar5;
   _func_void_void_ptr *local_38;
   void *local_30[2];
   local_38 = param_4;
   local_30[0] = param_3;
   cVar4 = _hb_font_funcs_set_preamble(param_1, param_2 == (code*)0x0, local_30, (_func_void_void_ptr*)&local_38);
   if (cVar4 != '\0') {
      if (( *(long*)( param_1 + 0x18 ) != 0 ) && ( pcVar1 = *(code**)( *(long*)( param_1 + 0x18 ) + 0x60 ) ),pcVar1 != (code*)0x0) {
         lVar5 = *(long*)( param_1 + 0x10 );
         if (lVar5 != 0) {
            lVar5 = *(long*)( lVar5 + 0x60 );
         }
         ( *pcVar1 )(lVar5);
      }
      pvVar3 = local_30[0];
      p_Var2 = local_38;
      cVar4 = _hb_font_funcs_set_middle(param_1, local_30[0], local_38);
      if (cVar4 != '\0') {
         if (param_2 == (code*)0x0) {
            param_2 = hb_font_get_glyph_v_kerning_default;
         }
         *(code**)( param_1 + 0x80 ) = param_2;
         if (*(long*)( param_1 + 0x10 ) != 0) {
            *(void**)( *(long*)( param_1 + 0x10 ) + 0x60 ) = pvVar3;
         }
         if (*(long*)( param_1 + 0x18 ) != 0) {
            *(_func_void_void_ptr**)( *(long*)( param_1 + 0x18 ) + 0x60 ) = p_Var2;
         }
      }
   }
   return;
}void hb_font_funcs_set_glyph_extents_func(hb_font_funcs_t *param_1, code *param_2, void *param_3, _func_void_void_ptr *param_4) {
   code *pcVar1;
   _func_void_void_ptr *p_Var2;
   void *pvVar3;
   char cVar4;
   long lVar5;
   _func_void_void_ptr *local_38;
   void *local_30[2];
   local_38 = param_4;
   local_30[0] = param_3;
   cVar4 = _hb_font_funcs_set_preamble(param_1, param_2 == (code*)0x0, local_30, (_func_void_void_ptr*)&local_38);
   if (cVar4 != '\0') {
      if (( *(long*)( param_1 + 0x18 ) != 0 ) && ( pcVar1 = *(code**)( *(long*)( param_1 + 0x18 ) + 0x68 ) ),pcVar1 != (code*)0x0) {
         lVar5 = *(long*)( param_1 + 0x10 );
         if (lVar5 != 0) {
            lVar5 = *(long*)( lVar5 + 0x68 );
         }
         ( *pcVar1 )(lVar5);
      }
      pvVar3 = local_30[0];
      p_Var2 = local_38;
      cVar4 = _hb_font_funcs_set_middle(param_1, local_30[0], local_38);
      if (cVar4 != '\0') {
         if (param_2 == (code*)0x0) {
            param_2 = hb_font_get_glyph_extents_default;
         }
         *(code**)( param_1 + 0x88 ) = param_2;
         if (*(long*)( param_1 + 0x10 ) != 0) {
            *(void**)( *(long*)( param_1 + 0x10 ) + 0x68 ) = pvVar3;
         }
         if (*(long*)( param_1 + 0x18 ) != 0) {
            *(_func_void_void_ptr**)( *(long*)( param_1 + 0x18 ) + 0x68 ) = p_Var2;
         }
      }
   }
   return;
}void hb_font_funcs_set_glyph_contour_point_func(hb_font_funcs_t *param_1, code *param_2, void *param_3, _func_void_void_ptr *param_4) {
   code *pcVar1;
   _func_void_void_ptr *p_Var2;
   void *pvVar3;
   char cVar4;
   long lVar5;
   _func_void_void_ptr *local_38;
   void *local_30[2];
   local_38 = param_4;
   local_30[0] = param_3;
   cVar4 = _hb_font_funcs_set_preamble(param_1, param_2 == (code*)0x0, local_30, (_func_void_void_ptr*)&local_38);
   if (cVar4 != '\0') {
      if (( *(long*)( param_1 + 0x18 ) != 0 ) && ( pcVar1 = *(code**)( *(long*)( param_1 + 0x18 ) + 0x70 ) ),pcVar1 != (code*)0x0) {
         lVar5 = *(long*)( param_1 + 0x10 );
         if (lVar5 != 0) {
            lVar5 = *(long*)( lVar5 + 0x70 );
         }
         ( *pcVar1 )(lVar5);
      }
      pvVar3 = local_30[0];
      p_Var2 = local_38;
      cVar4 = _hb_font_funcs_set_middle(param_1, local_30[0], local_38);
      if (cVar4 != '\0') {
         if (param_2 == (code*)0x0) {
            param_2 = hb_font_get_glyph_contour_point_default;
         }
         *(code**)( param_1 + 0x90 ) = param_2;
         if (*(long*)( param_1 + 0x10 ) != 0) {
            *(void**)( *(long*)( param_1 + 0x10 ) + 0x70 ) = pvVar3;
         }
         if (*(long*)( param_1 + 0x18 ) != 0) {
            *(_func_void_void_ptr**)( *(long*)( param_1 + 0x18 ) + 0x70 ) = p_Var2;
         }
      }
   }
   return;
}void hb_font_funcs_set_glyph_name_func(hb_font_funcs_t *param_1, code *param_2, void *param_3, _func_void_void_ptr *param_4) {
   code *pcVar1;
   _func_void_void_ptr *p_Var2;
   void *pvVar3;
   char cVar4;
   long lVar5;
   _func_void_void_ptr *local_38;
   void *local_30[2];
   local_38 = param_4;
   local_30[0] = param_3;
   cVar4 = _hb_font_funcs_set_preamble(param_1, param_2 == (code*)0x0, local_30, (_func_void_void_ptr*)&local_38);
   if (cVar4 != '\0') {
      if (( *(long*)( param_1 + 0x18 ) != 0 ) && ( pcVar1 = *(code**)( *(long*)( param_1 + 0x18 ) + 0x78 ) ),pcVar1 != (code*)0x0) {
         lVar5 = *(long*)( param_1 + 0x10 );
         if (lVar5 != 0) {
            lVar5 = *(long*)( lVar5 + 0x78 );
         }
         ( *pcVar1 )(lVar5);
      }
      pvVar3 = local_30[0];
      p_Var2 = local_38;
      cVar4 = _hb_font_funcs_set_middle(param_1, local_30[0], local_38);
      if (cVar4 != '\0') {
         if (param_2 == (code*)0x0) {
            param_2 = hb_font_get_glyph_name_default;
         }
         *(code**)( param_1 + 0x98 ) = param_2;
         if (*(long*)( param_1 + 0x10 ) != 0) {
            *(void**)( *(long*)( param_1 + 0x10 ) + 0x78 ) = pvVar3;
         }
         if (*(long*)( param_1 + 0x18 ) != 0) {
            *(_func_void_void_ptr**)( *(long*)( param_1 + 0x18 ) + 0x78 ) = p_Var2;
         }
      }
   }
   return;
}void hb_font_funcs_set_glyph_from_name_func(hb_font_funcs_t *param_1, code *param_2, void *param_3, _func_void_void_ptr *param_4) {
   code *pcVar1;
   _func_void_void_ptr *p_Var2;
   void *pvVar3;
   char cVar4;
   long lVar5;
   _func_void_void_ptr *local_38;
   void *local_30[2];
   local_38 = param_4;
   local_30[0] = param_3;
   cVar4 = _hb_font_funcs_set_preamble(param_1, param_2 == (code*)0x0, local_30, (_func_void_void_ptr*)&local_38);
   if (cVar4 != '\0') {
      if (( *(long*)( param_1 + 0x18 ) != 0 ) && ( pcVar1 = *(code**)( *(long*)( param_1 + 0x18 ) + 0x80 ) ),pcVar1 != (code*)0x0) {
         lVar5 = *(long*)( param_1 + 0x10 );
         if (lVar5 != 0) {
            lVar5 = *(long*)( lVar5 + 0x80 );
         }
         ( *pcVar1 )(lVar5);
      }
      pvVar3 = local_30[0];
      p_Var2 = local_38;
      cVar4 = _hb_font_funcs_set_middle(param_1, local_30[0], local_38);
      if (cVar4 != '\0') {
         if (param_2 == (code*)0x0) {
            param_2 = hb_font_get_glyph_from_name_default;
         }
         *(code**)( param_1 + 0xa0 ) = param_2;
         if (*(long*)( param_1 + 0x10 ) != 0) {
            *(void**)( *(long*)( param_1 + 0x10 ) + 0x80 ) = pvVar3;
         }
         if (*(long*)( param_1 + 0x18 ) != 0) {
            *(_func_void_void_ptr**)( *(long*)( param_1 + 0x18 ) + 0x80 ) = p_Var2;
         }
      }
   }
   return;
}void hb_font_funcs_set_draw_glyph_func(hb_font_funcs_t *param_1, code *param_2, void *param_3, _func_void_void_ptr *param_4) {
   code *pcVar1;
   _func_void_void_ptr *p_Var2;
   void *pvVar3;
   char cVar4;
   long lVar5;
   _func_void_void_ptr *local_38;
   void *local_30[2];
   local_38 = param_4;
   local_30[0] = param_3;
   cVar4 = _hb_font_funcs_set_preamble(param_1, param_2 == (code*)0x0, local_30, (_func_void_void_ptr*)&local_38);
   if (cVar4 != '\0') {
      if (( *(long*)( param_1 + 0x18 ) != 0 ) && ( pcVar1 = *(code**)( *(long*)( param_1 + 0x18 ) + 0x88 ) ),pcVar1 != (code*)0x0) {
         lVar5 = *(long*)( param_1 + 0x10 );
         if (lVar5 != 0) {
            lVar5 = *(long*)( lVar5 + 0x88 );
         }
         ( *pcVar1 )(lVar5);
      }
      pvVar3 = local_30[0];
      p_Var2 = local_38;
      cVar4 = _hb_font_funcs_set_middle(param_1, local_30[0], local_38);
      if (cVar4 != '\0') {
         if (param_2 == (code*)0x0) {
            param_2 = hb_font_draw_glyph_default;
         }
         *(code**)( param_1 + 0xa8 ) = param_2;
         if (*(long*)( param_1 + 0x10 ) != 0) {
            *(void**)( *(long*)( param_1 + 0x10 ) + 0x88 ) = pvVar3;
         }
         if (*(long*)( param_1 + 0x18 ) != 0) {
            *(_func_void_void_ptr**)( *(long*)( param_1 + 0x18 ) + 0x88 ) = p_Var2;
         }
      }
   }
   return;
}void hb_font_funcs_set_paint_glyph_func(hb_font_funcs_t *param_1, code *param_2, void *param_3, _func_void_void_ptr *param_4) {
   code *pcVar1;
   _func_void_void_ptr *p_Var2;
   void *pvVar3;
   char cVar4;
   long lVar5;
   _func_void_void_ptr *local_38;
   void *local_30[2];
   local_38 = param_4;
   local_30[0] = param_3;
   cVar4 = _hb_font_funcs_set_preamble(param_1, param_2 == (code*)0x0, local_30, (_func_void_void_ptr*)&local_38);
   if (cVar4 != '\0') {
      if (( *(long*)( param_1 + 0x18 ) != 0 ) && ( pcVar1 = *(code**)( *(long*)( param_1 + 0x18 ) + 0x90 ) ),pcVar1 != (code*)0x0) {
         lVar5 = *(long*)( param_1 + 0x10 );
         if (lVar5 != 0) {
            lVar5 = *(long*)( lVar5 + 0x90 );
         }
         ( *pcVar1 )(lVar5);
      }
      pvVar3 = local_30[0];
      p_Var2 = local_38;
      cVar4 = _hb_font_funcs_set_middle(param_1, local_30[0], local_38);
      if (cVar4 != '\0') {
         if (param_2 == (code*)0x0) {
            param_2 = hb_font_paint_glyph_default;
         }
         *(code**)( param_1 + 0xb0 ) = param_2;
         if (*(long*)( param_1 + 0x10 ) != 0) {
            *(void**)( *(long*)( param_1 + 0x10 ) + 0x90 ) = pvVar3;
         }
         if (*(long*)( param_1 + 0x18 ) != 0) {
            *(_func_void_void_ptr**)( *(long*)( param_1 + 0x18 ) + 0x90 ) = p_Var2;
         }
      }
   }
   return;
}/* hb_font_t::has_func_set(unsigned int) */undefined8 hb_font_t::has_func_set(hb_font_t *this, uint param_1) {
   return CONCAT71(( int7 )(( ulong ) * (long*)( _hb_font_funcs_default + (ulong)param_1 * 8 + 0x20 ) >> 8), *(long*)( *(long*)( this + 0x90 ) + 0x20 + (ulong)param_1 * 8 ) != *(long*)( _hb_font_funcs_default + (ulong)param_1 * 8 + 0x20 ));
}/* hb_font_t::has_func(unsigned int) */undefined8 hb_font_t::has_func(hb_font_t *this, uint param_1) {
   undefined1 *puVar1;
   undefined7 uVar3;
   undefined8 uVar2;
   long lVar4;
   lVar4 = (ulong)param_1 + 4;
   do {
      if (*(long*)( *(long*)( this + 0x90 ) + lVar4 * 8 ) != *(long*)( _hb_font_funcs_default + lVar4 * 8 )) {
         return 1;
      }
      puVar1 = *(undefined1**)( this + 0x18 );
      uVar3 = ( undefined7 )(( ulong ) * (long*)( this + 0x90 ) >> 8);
      uVar2 = CONCAT71(uVar3, puVar1 != _hb_Null_hb_font_t && puVar1 != (undefined1*)0x0);
      if (puVar1 == _hb_Null_hb_font_t || puVar1 == (undefined1*)0x0) {
         return uVar2;
      }
      if (*(long*)( _hb_font_funcs_default + lVar4 * 8 ) != *(long*)( *(long*)( puVar1 + 0x90 ) + lVar4 * 8 )) {
         return uVar2;
      }
      this * (hb_font_t**)( puVar1 + 0x18 );
   } while ( this != (hb_font_t*)_hb_Null_hb_font_t && this != (hb_font_t*)0x0 );
   return CONCAT71(uVar3, this != (hb_font_t*)_hb_Null_hb_font_t && this != (hb_font_t*)0x0);
}void hb_font_get_h_extents(long param_1, undefined1 (*param_2)[16]) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   *param_2 = (undefined1[16])0x0;
   param_2[1] = (undefined1[16])0x0;
   param_2[2] = (undefined1[16])0x0;
   plVar1 = *(long**)( *(long*)( param_1 + 0x90 ) + 0x10 );
   UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( param_1 + 0x90 ) + 0x20 );
   if (plVar1 != (long*)0x0) {
      plVar1 = (long*)*plVar1;
   }
   for (int i_346 = 0; i_346 < 2; i_346++) {
      /* WARNING: Could not recover jumptable at 0x00102c34. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, plVar1, UNRECOVERED_JUMPTABLE);
   return;
}void hb_font_get_v_extents(long param_1, undefined1 (*param_2)[16]) {
   code *UNRECOVERED_JUMPTABLE;
   long lVar1;
   *param_2 = (undefined1[16])0x0;
   param_2[1] = (undefined1[16])0x0;
   param_2[2] = (undefined1[16])0x0;
   lVar1 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
   UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( param_1 + 0x90 ) + 0x28 );
   if (lVar1 != 0) {
      lVar1 = *(long*)( lVar1 + 8 );
   }
   for (int i_347 = 0; i_347 < 2; i_347++) {
      /* WARNING: Could not recover jumptable at 0x00102c75. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, lVar1, UNRECOVERED_JUMPTABLE);
   return;
}void hb_font_get_glyph(long param_1, undefined4 param_2, int param_3, undefined4 *param_4) {
   long lVar1;
   long lVar2;
   lVar1 = *(long*)( param_1 + 0x90 );
   lVar2 = *(long*)( lVar1 + 0x10 );
   *param_4 = 0;
   if (param_3 == 0) {
      if (lVar2 != 0) {
         lVar2 = *(long*)( lVar2 + 0x10 );
      }
      for (int i_349 = 0; i_349 < 2; i_349++) {
         /* WARNING: Could not recover jumptable at 0x00102cb1. Too many branches */
      }
      ( **(code**)( lVar1 + 0x30 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, param_4, lVar2, *(code**)( lVar1 + 0x30 ));
      return;
   }
   if (lVar2 != 0) {
      lVar2 = *(long*)( lVar2 + 0x20 );
   }
   for (int i_348 = 0; i_348 < 2; i_348++) {
      /* WARNING: Could not recover jumptable at 0x00102cd6. Too many branches */
   }
   ( **(code**)( lVar1 + 0x40 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, param_3, param_4, lVar2);
   return;
}void hb_font_get_nominal_glyph(long param_1, undefined4 param_2, undefined4 *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long lVar1;
   *param_3 = 0;
   lVar1 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
   UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( param_1 + 0x90 ) + 0x30 );
   if (lVar1 != 0) {
      lVar1 = *(long*)( lVar1 + 0x10 );
   }
   for (int i_350 = 0; i_350 < 2; i_350++) {
      /* WARNING: Could not recover jumptable at 0x00102d0e. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, param_3, lVar1, UNRECOVERED_JUMPTABLE);
   return;
}void hb_font_get_nominal_glyphs(long param_1, undefined4 param_2, undefined8 param_3, undefined4 param_4, undefined8 param_5, undefined8 param_6) {
   long lVar1;
   lVar1 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
   if (lVar1 != 0) {
      lVar1 = *(long*)( lVar1 + 0x18 );
   }
   ( **(code**)( *(long*)( param_1 + 0x90 ) + 0x38 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, param_3, param_4, param_5, param_6, lVar1);
   return;
}void hb_font_get_variation_glyph(long param_1, undefined4 param_2, undefined4 param_3, undefined4 *param_4) {
   long lVar1;
   *param_4 = 0;
   lVar1 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
   if (lVar1 != 0) {
      lVar1 = *(long*)( lVar1 + 0x20 );
   }
   for (int i_351 = 0; i_351 < 2; i_351++) {
      /* WARNING: Could not recover jumptable at 0x00102d90. Too many branches */
   }
   ( **(code**)( *(long*)( param_1 + 0x90 ) + 0x40 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, param_3, param_4, lVar1);
   return;
}void hb_font_get_glyph_h_advance(long param_1, undefined4 param_2) {
   code *UNRECOVERED_JUMPTABLE;
   long lVar1;
   lVar1 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
   UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( param_1 + 0x90 ) + 0x48 );
   if (lVar1 != 0) {
      lVar1 = *(long*)( lVar1 + 0x28 );
   }
   for (int i_352 = 0; i_352 < 2; i_352++) {
      /* WARNING: Could not recover jumptable at 0x00102dc5. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, lVar1, UNRECOVERED_JUMPTABLE);
   return;
}void hb_font_get_glyph_v_advance(long param_1, undefined4 param_2) {
   code *UNRECOVERED_JUMPTABLE;
   long lVar1;
   lVar1 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
   UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( param_1 + 0x90 ) + 0x50 );
   if (lVar1 != 0) {
      lVar1 = *(long*)( lVar1 + 0x30 );
   }
   for (int i_353 = 0; i_353 < 2; i_353++) {
      /* WARNING: Could not recover jumptable at 0x00102df5. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, lVar1, UNRECOVERED_JUMPTABLE);
   return;
}void hb_font_get_glyph_h_advances(long param_1, undefined4 param_2, undefined8 param_3, undefined4 param_4, undefined8 param_5, undefined8 param_6) {
   long lVar1;
   lVar1 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
   if (lVar1 != 0) {
      lVar1 = *(long*)( lVar1 + 0x38 );
   }
   ( **(code**)( *(long*)( param_1 + 0x90 ) + 0x58 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, param_3, param_4, param_5, param_6, lVar1);
   return;
}void hb_font_get_glyph_v_advances(long param_1, undefined4 param_2, undefined8 param_3, undefined4 param_4, undefined8 param_5, undefined8 param_6) {
   long lVar1;
   lVar1 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
   if (lVar1 != 0) {
      lVar1 = *(long*)( lVar1 + 0x40 );
   }
   ( **(code**)( *(long*)( param_1 + 0x90 ) + 0x60 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, param_3, param_4, param_5, param_6, lVar1);
   return;
}void hb_font_get_glyph_h_origin(long param_1, undefined4 param_2, undefined4 *param_3, undefined4 *param_4) {
   long lVar1;
   long lVar2;
   *param_4 = 0;
   lVar1 = *(long*)( param_1 + 0x90 );
   *param_3 = 0;
   lVar2 = *(long*)( lVar1 + 0x10 );
   if (lVar2 != 0) {
      lVar2 = *(long*)( lVar2 + 0x48 );
   }
   for (int i_354 = 0; i_354 < 2; i_354++) {
      /* WARNING: Could not recover jumptable at 0x00102eb7. Too many branches */
   }
   ( **(code**)( lVar1 + 0x68 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, param_3, param_4, lVar2);
   return;
}void hb_font_get_glyph_v_origin(long param_1, undefined4 param_2, undefined4 *param_3, undefined4 *param_4) {
   long lVar1;
   long lVar2;
   *param_4 = 0;
   lVar1 = *(long*)( param_1 + 0x90 );
   *param_3 = 0;
   lVar2 = *(long*)( lVar1 + 0x10 );
   if (lVar2 != 0) {
      lVar2 = *(long*)( lVar2 + 0x50 );
   }
   for (int i_355 = 0; i_355 < 2; i_355++) {
      /* WARNING: Could not recover jumptable at 0x00102ef7. Too many branches */
   }
   ( **(code**)( lVar1 + 0x70 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, param_3, param_4, lVar2);
   return;
}void hb_font_get_glyph_h_kerning(long param_1, undefined4 param_2, undefined4 param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long lVar1;
   lVar1 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
   UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( param_1 + 0x90 ) + 0x78 );
   if (lVar1 != 0) {
      lVar1 = *(long*)( lVar1 + 0x58 );
   }
   for (int i_356 = 0; i_356 < 2; i_356++) {
      /* WARNING: Could not recover jumptable at 0x00102f27. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, param_3, lVar1, UNRECOVERED_JUMPTABLE);
   return;
}void hb_font_get_glyph_v_kerning(long param_1, undefined4 param_2, undefined4 param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long lVar1;
   lVar1 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
   UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( param_1 + 0x90 ) + 0x80 );
   if (lVar1 != 0) {
      lVar1 = *(long*)( lVar1 + 0x60 );
   }
   for (int i_357 = 0; i_357 < 2; i_357++) {
      /* WARNING: Could not recover jumptable at 0x00102f5a. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, param_3, lVar1, UNRECOVERED_JUMPTABLE);
   return;
}void hb_font_get_glyph_extents(long param_1, undefined4 param_2, undefined1 (*param_3)[16]) {
   code *UNRECOVERED_JUMPTABLE;
   long lVar1;
   *param_3 = (undefined1[16])0x0;
   lVar1 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
   UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( param_1 + 0x90 ) + 0x88 );
   if (lVar1 != 0) {
      lVar1 = *(long*)( lVar1 + 0x68 );
   }
   for (int i_358 = 0; i_358 < 2; i_358++) {
      /* WARNING: Could not recover jumptable at 0x00102f92. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, param_3, lVar1, UNRECOVERED_JUMPTABLE);
   return;
}void hb_font_get_glyph_contour_point(long param_1, undefined4 param_2, undefined4 param_3, undefined4 *param_4, undefined4 *param_5) {
   long lVar1;
   long lVar2;
   lVar1 = *(long*)( param_1 + 0x90 );
   *param_5 = 0;
   *param_4 = 0;
   lVar2 = *(long*)( lVar1 + 0x10 );
   if (lVar2 != 0) {
      lVar2 = *(long*)( lVar2 + 0x70 );
   }
   ( **(code**)( lVar1 + 0x90 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, param_3, param_4, param_5, lVar2);
   return;
}void hb_font_get_glyph_name(long param_1, undefined4 param_2, undefined1 *param_3, int param_4) {
   long lVar1;
   if (param_4 != 0) {
      *param_3 = 0;
   }
   lVar1 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
   if (lVar1 != 0) {
      lVar1 = *(long*)( lVar1 + 0x78 );
   }
   for (int i_359 = 0; i_359 < 2; i_359++) {
      /* WARNING: Could not recover jumptable at 0x00103025. Too many branches */
   }
   ( **(code**)( *(long*)( param_1 + 0x90 ) + 0x98 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, param_3, param_4, lVar1);
   return;
}void hb_font_get_glyph_from_name(long param_1, char *param_2, int param_3, undefined4 *param_4) {
   size_t sVar1;
   long lVar2;
   *param_4 = 0;
   if (param_3 == -1) {
      sVar1 = strlen(param_2);
      param_3 = (int)sVar1;
   }
   lVar2 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
   if (lVar2 != 0) {
      lVar2 = *(long*)( lVar2 + 0x80 );
   }
   for (int i_360 = 0; i_360 < 2; i_360++) {
      /* WARNING: Could not recover jumptable at 0x0010308a. Too many branches */
   }
   ( **(code**)( *(long*)( param_1 + 0x90 ) + 0xa0 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, param_3, param_4, lVar2);
   return;
}void hb_font_get_glyph_shape(long param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4) {
   long lVar1;
   lVar1 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
   if (lVar1 != 0) {
      lVar1 = *(long*)( lVar1 + 0x88 );
   }
   for (int i_361 = 0; i_361 < 2; i_361++) {
      /* WARNING: Could not recover jumptable at 0x001030c1. Too many branches */
   }
   ( **(code**)( *(long*)( param_1 + 0x90 ) + 0xa8 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, param_3, param_4, lVar1);
   return;
}void hb_font_draw_glyph(long param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4) {
   long lVar1;
   lVar1 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
   if (lVar1 != 0) {
      lVar1 = *(long*)( lVar1 + 0x88 );
   }
   for (int i_362 = 0; i_362 < 2; i_362++) {
      /* WARNING: Could not recover jumptable at 0x00103101. Too many branches */
   }
   ( **(code**)( *(long*)( param_1 + 0x90 ) + 0xa8 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, param_3, param_4, lVar1);
   return;
}void hb_font_paint_glyph(long param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4, undefined4 param_5, undefined8 param_6) {
   long lVar1;
   lVar1 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
   if (lVar1 != 0) {
      lVar1 = *(long*)( lVar1 + 0x90 );
   }
   ( **(code**)( *(long*)( param_1 + 0x90 ) + 0xb0 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, param_3, param_4, param_5, param_6, lVar1);
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void hb_font_get_extents_for_direction(long param_1, uint param_2, undefined1 (*param_3)[16]) {
   long lVar1;
   int iVar2;
   int iVar3;
   long *plVar4;
   long lVar5;
   *param_3 = (undefined1[16])0x0;
   param_3[1] = (undefined1[16])0x0;
   param_3[2] = (undefined1[16])0x0;
   lVar1 = *(long*)( param_1 + 0x90 );
   if (( param_2 & 0xfffffffe ) == 4) {
      plVar4 = *(long**)( lVar1 + 0x10 );
      if (plVar4 != (long*)0x0) {
         plVar4 = (long*)*plVar4;
      }
      iVar2 = ( **(code**)( lVar1 + 0x20 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_3, plVar4);
      if (iVar2 == 0) {
         iVar2 = *(int*)( param_1 + 0x2c );
         *(undefined4*)( *param_3 + 8 ) = 0;
         iVar3 = (int)( (double)iVar2 * __LC3 );
         *(int*)*param_3 = iVar3;
         *(int*)( *param_3 + 4 ) = iVar3 - iVar2;
      }
   } else {
      lVar5 = *(long*)( lVar1 + 0x10 );
      if (lVar5 != 0) {
         lVar5 = *(long*)( lVar5 + 8 );
      }
      iVar2 = ( **(code**)( lVar1 + 0x28 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_3, lVar5);
      if (iVar2 == 0) {
         iVar2 = *(int*)( param_1 + 0x28 );
         *(undefined4*)( *param_3 + 8 ) = 0;
         iVar3 = iVar2 / 2;
         *(int*)*param_3 = iVar3;
         *(int*)( *param_3 + 4 ) = iVar3 - iVar2;
      }
   }
   return;
}void hb_font_get_glyph_advance_for_direction(long param_1, undefined4 param_2, uint param_3, undefined4 *param_4, undefined4 *param_5) {
   long lVar1;
   undefined4 uVar2;
   long lVar3;
   lVar1 = *(long*)( param_1 + 0x90 );
   *param_5 = 0;
   *param_4 = 0;
   lVar3 = *(long*)( lVar1 + 0x10 );
   if (( param_3 & 0xfffffffe ) == 4) {
      if (lVar3 != 0) {
         lVar3 = *(long*)( lVar3 + 0x28 );
      }
      uVar2 = ( **(code**)( lVar1 + 0x48 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, lVar3);
      *param_4 = uVar2;
      return;
   }
   if (lVar3 != 0) {
      lVar3 = *(long*)( lVar3 + 0x30 );
   }
   uVar2 = ( **(code**)( lVar1 + 0x50 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, lVar3);
   *param_5 = uVar2;
   return;
}undefined1[16];hb_font_get_glyph_advances_for_direction(long param_1, uint param_2) {
   long lVar1;
   undefined1 auVar2[16];
   long lVar3;
   code *pcVar4;
   uint in_stack_00000008;
   lVar1 = *(long*)( param_1 + 0x90 );
   auVar2._4_4_ = 0;
   auVar2._0_4_ = in_stack_00000008;
   lVar3 = *(long*)( lVar1 + 0x10 );
   if (( param_2 & 0xfffffffe ) == 4) {
      pcVar4 = *(code**)( lVar1 + 0x58 );
      if (lVar3 != 0) {
         lVar3 = *(long*)( lVar3 + 0x38 );
      }
   } else {
      pcVar4 = *(code**)( lVar1 + 0x60 );
      if (lVar3 != 0) {
         lVar3 = *(long*)( lVar3 + 0x40 );
      }
   }
   ( *pcVar4 )(param_1, *(undefined8*)( param_1 + 0x98 ));
   auVar2._8_8_ = lVar3;
   return auVar2;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void hb_font_get_glyph_origin_for_direction(long param_1, undefined4 param_2, uint param_3, int *param_4, int *param_5) {
   int iVar1;
   ulong uVar2;
   long lVar3;
   long *plVar4;
   long lVar5;
   long in_FS_OFFSET;
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined1 local_48[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = *(long*)( param_1 + 0x90 );
   lVar5 = *(long*)( lVar3 + 0x10 );
   *param_5 = 0;
   *param_4 = 0;
   if (( param_3 & 0xfffffffe ) == 4) {
      if (lVar5 != 0) {
         lVar5 = *(long*)( lVar5 + 0x48 );
      }
      iVar1 = ( **(code**)( lVar3 + 0x68 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, param_4, param_5, lVar5);
      if (iVar1 == 0) {
         lVar3 = *(long*)( param_1 + 0x90 );
         *param_5 = 0;
         *param_4 = 0;
         lVar5 = *(long*)( lVar3 + 0x10 );
         if (lVar5 != 0) {
            lVar5 = *(long*)( lVar5 + 0x50 );
         }
         iVar1 = ( **(code**)( lVar3 + 0x70 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, param_4, param_5, lVar5);
         if (iVar1 != 0) {
            lVar3 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
            if (lVar3 != 0) {
               lVar3 = *(long*)( lVar3 + 0x28 );
            }
            uVar2 = ( **(code**)( *(long*)( param_1 + 0x90 ) + 0x48 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, lVar3);
            local_68 = (undefined1[16])0x0;
            local_58 = (undefined1[16])0x0;
            local_48 = (undefined1[16])0x0;
            plVar4 = *(long**)( *(long*)( param_1 + 0x90 ) + 0x10 );
            if (plVar4 != (long*)0x0) {
               plVar4 = (long*)*plVar4;
            }
            iVar1 = ( **(code**)( *(long*)( param_1 + 0x90 ) + 0x20 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), local_68, plVar4);
            if (iVar1 == 0) {
               iVar1 = (int)( (double)*(int*)( param_1 + 0x2c ) * __LC3 );
            } else {
               iVar1 = local_68._0_4_;
            }
            *param_4 = *param_4 - ( (int)( ( ( uint )(uVar2 >> 0x1f) & 1 ) + (int)uVar2 ) >> 1 );
            *param_5 = *param_5 - iVar1;
         }
      }
   } else {
      if (lVar5 != 0) {
         lVar5 = *(long*)( lVar5 + 0x50 );
      }
      iVar1 = ( **(code**)( lVar3 + 0x70 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, param_4, param_5, lVar5);
      if (iVar1 == 0) {
         lVar3 = *(long*)( param_1 + 0x90 );
         *param_5 = 0;
         *param_4 = 0;
         lVar5 = *(long*)( lVar3 + 0x10 );
         if (lVar5 != 0) {
            lVar5 = *(long*)( lVar5 + 0x48 );
         }
         iVar1 = ( **(code**)( lVar3 + 0x68 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, param_4, param_5, lVar5);
         if (iVar1 != 0) {
            lVar3 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
            if (lVar3 != 0) {
               lVar3 = *(long*)( lVar3 + 0x28 );
            }
            uVar2 = ( **(code**)( *(long*)( param_1 + 0x90 ) + 0x48 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, lVar3);
            local_68 = (undefined1[16])0x0;
            local_58 = (undefined1[16])0x0;
            local_48 = (undefined1[16])0x0;
            plVar4 = *(long**)( *(long*)( param_1 + 0x90 ) + 0x10 );
            if (plVar4 != (long*)0x0) {
               plVar4 = (long*)*plVar4;
            }
            iVar1 = ( **(code**)( *(long*)( param_1 + 0x90 ) + 0x20 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), local_68, plVar4);
            if (iVar1 == 0) {
               iVar1 = (int)( (double)*(int*)( param_1 + 0x2c ) * __LC3 );
            } else {
               iVar1 = local_68._0_4_;
            }
            *param_4 = *param_4 + ( (int)( ( ( uint )(uVar2 >> 0x1f) & 1 ) + (int)uVar2 ) >> 1 );
            *param_5 = *param_5 + iVar1;
         }
      }
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void hb_font_add_glyph_origin_for_direction(long param_1, undefined4 param_2, uint param_3, int *param_4, int *param_5) {
   int iVar1;
   int iVar2;
   int iVar3;
   ulong uVar4;
   long lVar5;
   long *plVar6;
   long lVar7;
   long in_FS_OFFSET;
   int local_80;
   int local_7c;
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar5 = *(long*)( param_1 + 0x90 );
   local_7c = 0;
   local_80 = 0;
   lVar7 = *(long*)( lVar5 + 0x10 );
   if (( param_3 & 0xfffffffe ) == 4) {
      if (lVar7 != 0) {
         lVar7 = *(long*)( lVar7 + 0x48 );
      }
      iVar1 = ( **(code**)( lVar5 + 0x68 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, &local_80, &local_7c, lVar7);
      iVar2 = local_7c;
      iVar3 = local_80;
      if (iVar1 == 0) {
         local_7c = 0;
         local_80 = 0;
         lVar5 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
         if (lVar5 != 0) {
            lVar5 = *(long*)( lVar5 + 0x50 );
         }
         iVar1 = ( **(code**)( *(long*)( param_1 + 0x90 ) + 0x70 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, &local_80, &local_7c, lVar5);
         iVar2 = local_7c;
         iVar3 = local_80;
         if (iVar1 != 0) {
            lVar5 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
            if (lVar5 != 0) {
               lVar5 = *(long*)( lVar5 + 0x28 );
            }
            uVar4 = ( **(code**)( *(long*)( param_1 + 0x90 ) + 0x48 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, lVar5);
            local_78 = (undefined1[16])0x0;
            local_68 = (undefined1[16])0x0;
            local_58 = (undefined1[16])0x0;
            plVar6 = *(long**)( *(long*)( param_1 + 0x90 ) + 0x10 );
            if (plVar6 != (long*)0x0) {
               plVar6 = (long*)*plVar6;
            }
            iVar2 = ( **(code**)( *(long*)( param_1 + 0x90 ) + 0x20 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), local_78, plVar6);
            if (iVar2 == 0) {
               iVar2 = (int)( (double)*(int*)( param_1 + 0x2c ) * __LC3 );
            } else {
               iVar2 = local_78._0_4_;
            }
            iVar2 = local_7c - iVar2;
            iVar3 = local_80 - ( (int)( ( ( uint )(uVar4 >> 0x1f) & 1 ) + (int)uVar4 ) >> 1 );
         }
      }
   } else {
      if (lVar7 != 0) {
         lVar7 = *(long*)( lVar7 + 0x50 );
      }
      iVar1 = ( **(code**)( lVar5 + 0x70 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, &local_80, &local_7c, lVar7);
      iVar2 = local_7c;
      iVar3 = local_80;
      if (iVar1 == 0) {
         local_7c = 0;
         local_80 = 0;
         lVar5 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
         if (lVar5 != 0) {
            lVar5 = *(long*)( lVar5 + 0x48 );
         }
         iVar1 = ( **(code**)( *(long*)( param_1 + 0x90 ) + 0x68 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, &local_80, &local_7c, lVar5);
         iVar2 = local_7c;
         iVar3 = local_80;
         if (iVar1 != 0) {
            lVar5 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
            if (lVar5 != 0) {
               lVar5 = *(long*)( lVar5 + 0x28 );
            }
            iVar3 = ( **(code**)( *(long*)( param_1 + 0x90 ) + 0x48 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, lVar5);
            local_78 = (undefined1[16])0x0;
            local_68 = (undefined1[16])0x0;
            local_58 = (undefined1[16])0x0;
            plVar6 = *(long**)( *(long*)( param_1 + 0x90 ) + 0x10 );
            if (plVar6 != (long*)0x0) {
               plVar6 = (long*)*plVar6;
            }
            iVar2 = ( **(code**)( *(long*)( param_1 + 0x90 ) + 0x20 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), local_78, plVar6);
            if (iVar2 == 0) {
               iVar2 = (int)( (double)*(int*)( param_1 + 0x2c ) * __LC3 );
            } else {
               iVar2 = local_78._0_4_;
            }
            iVar2 = iVar2 + local_7c;
            iVar3 = local_80 + iVar3 / 2;
         }
      }
   }
   *param_4 = *param_4 + iVar3;
   *param_5 = *param_5 + iVar2;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void hb_font_subtract_glyph_origin_for_direction(long param_1, undefined4 param_2, uint param_3, int *param_4, int *param_5) {
   int iVar1;
   int iVar2;
   int iVar3;
   ulong uVar4;
   long lVar5;
   long *plVar6;
   long lVar7;
   long in_FS_OFFSET;
   int local_80;
   int local_7c;
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar5 = *(long*)( param_1 + 0x90 );
   local_7c = 0;
   local_80 = 0;
   lVar7 = *(long*)( lVar5 + 0x10 );
   if (( param_3 & 0xfffffffe ) == 4) {
      if (lVar7 != 0) {
         lVar7 = *(long*)( lVar7 + 0x48 );
      }
      iVar1 = ( **(code**)( lVar5 + 0x68 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, &local_80, &local_7c, lVar7);
      iVar2 = local_7c;
      iVar3 = local_80;
      if (iVar1 == 0) {
         local_7c = 0;
         local_80 = 0;
         lVar5 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
         if (lVar5 != 0) {
            lVar5 = *(long*)( lVar5 + 0x50 );
         }
         iVar1 = ( **(code**)( *(long*)( param_1 + 0x90 ) + 0x70 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, &local_80, &local_7c, lVar5);
         iVar2 = local_7c;
         iVar3 = local_80;
         if (iVar1 != 0) {
            lVar5 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
            if (lVar5 != 0) {
               lVar5 = *(long*)( lVar5 + 0x28 );
            }
            uVar4 = ( **(code**)( *(long*)( param_1 + 0x90 ) + 0x48 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, lVar5);
            local_78 = (undefined1[16])0x0;
            local_68 = (undefined1[16])0x0;
            local_58 = (undefined1[16])0x0;
            plVar6 = *(long**)( *(long*)( param_1 + 0x90 ) + 0x10 );
            if (plVar6 != (long*)0x0) {
               plVar6 = (long*)*plVar6;
            }
            iVar2 = ( **(code**)( *(long*)( param_1 + 0x90 ) + 0x20 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), local_78, plVar6);
            if (iVar2 == 0) {
               iVar2 = (int)( (double)*(int*)( param_1 + 0x2c ) * __LC3 );
            } else {
               iVar2 = local_78._0_4_;
            }
            iVar2 = local_7c - iVar2;
            iVar3 = local_80 - ( (int)( ( ( uint )(uVar4 >> 0x1f) & 1 ) + (int)uVar4 ) >> 1 );
         }
      }
   } else {
      if (lVar7 != 0) {
         lVar7 = *(long*)( lVar7 + 0x50 );
      }
      iVar1 = ( **(code**)( lVar5 + 0x70 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, &local_80, &local_7c, lVar7);
      iVar2 = local_7c;
      iVar3 = local_80;
      if (iVar1 == 0) {
         local_7c = 0;
         local_80 = 0;
         lVar5 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
         if (lVar5 != 0) {
            lVar5 = *(long*)( lVar5 + 0x48 );
         }
         iVar1 = ( **(code**)( *(long*)( param_1 + 0x90 ) + 0x68 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, &local_80, &local_7c, lVar5);
         iVar2 = local_7c;
         iVar3 = local_80;
         if (iVar1 != 0) {
            lVar5 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
            if (lVar5 != 0) {
               lVar5 = *(long*)( lVar5 + 0x28 );
            }
            iVar3 = ( **(code**)( *(long*)( param_1 + 0x90 ) + 0x48 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, lVar5);
            local_78 = (undefined1[16])0x0;
            local_68 = (undefined1[16])0x0;
            local_58 = (undefined1[16])0x0;
            plVar6 = *(long**)( *(long*)( param_1 + 0x90 ) + 0x10 );
            if (plVar6 != (long*)0x0) {
               plVar6 = (long*)*plVar6;
            }
            iVar2 = ( **(code**)( *(long*)( param_1 + 0x90 ) + 0x20 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), local_78, plVar6);
            if (iVar2 == 0) {
               iVar2 = (int)( (double)*(int*)( param_1 + 0x2c ) * __LC3 );
            } else {
               iVar2 = local_78._0_4_;
            }
            iVar2 = iVar2 + local_7c;
            iVar3 = local_80 + iVar3 / 2;
         }
      }
   }
   *param_4 = *param_4 - iVar3;
   *param_5 = *param_5 - iVar2;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}void hb_font_get_glyph_kerning_for_direction(long param_1, undefined4 param_2, undefined4 param_3, uint param_4, undefined4 *param_5, undefined4 *param_6) {
   long lVar1;
   undefined4 uVar2;
   long lVar3;
   lVar1 = *(long*)( param_1 + 0x90 );
   lVar3 = *(long*)( lVar1 + 0x10 );
   if (( param_4 & 0xfffffffe ) == 4) {
      *param_6 = 0;
      if (lVar3 != 0) {
         lVar3 = *(long*)( lVar3 + 0x58 );
      }
      uVar2 = ( **(code**)( lVar1 + 0x78 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, param_3, lVar3);
      *param_5 = uVar2;
      return;
   }
   *param_5 = 0;
   if (lVar3 != 0) {
      lVar3 = *(long*)( lVar3 + 0x60 );
   }
   uVar2 = ( **(code**)( lVar1 + 0x80 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, param_3, lVar3);
   *param_6 = uVar2;
   return;
}int hb_font_get_glyph_extents_for_origin(hb_font_t *param_1, undefined4 param_2, undefined4 param_3, undefined1 (*param_4)[16]) {
   int iVar1;
   long lVar2;
   long in_FS_OFFSET;
   int local_38;
   int local_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_4 = (undefined1[16])0x0;
   lVar2 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
   if (lVar2 != 0) {
      lVar2 = *(long*)( lVar2 + 0x68 );
   }
   iVar1 = ( **(code**)( *(long*)( param_1 + 0x90 ) + 0x88 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, param_4, lVar2);
   if (iVar1 != 0) {
      hb_font_t::get_glyph_origin_for_direction(param_1, param_2, param_3, &local_38, &local_34);
      *(ulong*)*param_4 = CONCAT44((int)( ( ulong ) * (undefined8*)*param_4 >> 0x20 ) - local_34, (int)*(undefined8*)*param_4 - local_38);
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int hb_font_get_glyph_contour_point_for_origin(hb_font_t *param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int *param_5, int *param_6) {
   long lVar1;
   int iVar2;
   long lVar3;
   long in_FS_OFFSET;
   int local_48;
   int local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar1 = *(long*)( param_1 + 0x90 );
   *param_6 = 0;
   *param_5 = 0;
   lVar3 = *(long*)( lVar1 + 0x10 );
   if (lVar3 != 0) {
      lVar3 = *(long*)( lVar3 + 0x70 );
   }
   iVar2 = ( **(code**)( lVar1 + 0x90 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, param_3, param_5, param_6, lVar3);
   if (iVar2 != 0) {
      hb_font_t::get_glyph_origin_for_direction(param_1, param_2, param_4, &local_48, &local_44);
      *param_5 = *param_5 - local_48;
      *param_6 = *param_6 - local_44;
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void hb_font_glyph_to_string(long param_1, undefined4 param_2, undefined1 *param_3, int param_4) {
   int iVar1;
   code *UNRECOVERED_JUMPTABLE;
   undefined8 uVar2;
   long lVar3;
   if (param_4 == 0) {
      uVar2 = *(undefined8*)( param_1 + 0x98 );
      lVar3 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
      UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( param_1 + 0x90 ) + 0x98 );
      if (lVar3 == 0) {
         for (int i_363 = 0; i_363 < 2; i_363++) {
            /* WARNING: Could not recover jumptable at 0x00103e06. Too many branches */
         }
         ( *UNRECOVERED_JUMPTABLE )(param_1, uVar2, param_2, param_3, 0, 0);
         return;
      }
   } else {
      *param_3 = 0;
      uVar2 = *(undefined8*)( param_1 + 0x98 );
      lVar3 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
      UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( param_1 + 0x90 ) + 0x98 );
      if (lVar3 == 0) goto LAB_00103db9;
   }
   lVar3 = *(long*)( lVar3 + 0x78 );
   LAB_00103db9:iVar1 = ( *UNRECOVERED_JUMPTABLE )(param_1, uVar2, param_2, param_3, param_4, lVar3);
   if (( param_4 != 0 ) && ( iVar1 == 0 )) {
      iVar1 = __snprintf_chk(param_3, param_4, 2, 0xffffffffffffffff, "gid%u", param_2);
      if (iVar1 < 0) {
         *param_3 = 0;
      }
   }
   return;
}bool hb_font_glyph_from_string(long param_1, char *param_2, uint param_3, uint *param_4) {
   char *pcVar1;
   char cVar2;
   int iVar3;
   size_t sVar4;
   ulong uVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   bool bVar8;
   uint local_4c;
   char *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_4 = 0;
   uVar5 = (ulong)param_3;
   if (param_3 == 0xffffffff) {
      sVar4 = strlen(param_2);
      uVar5 = sVar4 & 0xffffffff;
   }
   lVar7 = *(long*)( *(long*)( param_1 + 0x90 ) + 0x10 );
   if (lVar7 != 0) {
      lVar7 = *(long*)( lVar7 + 0x80 );
   }
   iVar3 = ( **(code**)( *(long*)( param_1 + 0x90 ) + 0xa0 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), param_2, uVar5, param_4, lVar7);
   if (iVar3 == 0) {
      if (param_3 == 0xffffffff) {
         sVar4 = strlen(param_2);
         param_3 = (uint)sVar4;
      }
      pcVar1 = param_2 + param_3;
      local_48 = param_2;
      cVar2 = hb_parse_uint(&local_48, pcVar1, &local_4c, true, 10);
      if (cVar2 == '\0') {
         bVar8 = false;
         if ((int)param_3 < 4) goto LAB_00103f09;
         cVar2 = *param_2;
         if (( ( cVar2 == 'g' ) && ( param_2[1] == 'i' ) ) && ( param_2[2] == 'd' )) {
            local_48 = param_2 + 3;
            cVar2 = hb_parse_uint(&local_48, pcVar1, &local_4c, true, 10);
            if (cVar2 != '\0') goto LAB_00103efb;
            cVar2 = *param_2;
         }
         if (( ( cVar2 == 'u' ) && ( param_2[1] == 'n' ) ) && ( param_2[2] == 'i' )) {
            local_48 = param_2 + 3;
            cVar2 = hb_parse_uint(&local_48, pcVar1, &local_4c, true, 0x10);
            if (cVar2 != '\0') {
               lVar7 = *(long*)( param_1 + 0x90 );
               *param_4 = 0;
               lVar6 = *(long*)( lVar7 + 0x10 );
               if (lVar6 != 0) {
                  lVar6 = *(long*)( lVar6 + 0x10 );
               }
               iVar3 = ( **(code**)( lVar7 + 0x30 ) )(param_1, *(undefined8*)( param_1 + 0x98 ), local_4c, param_4, lVar6);
               bVar8 = iVar3 != 0;
            }
         }
         goto LAB_00103f09;
      }
      LAB_00103efb:*param_4 = local_4c;
   }
   bVar8 = true;
   LAB_00103f09:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar8;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}hb_font_t *hb_font_create_sub_font(undefined1 *param_1) {
   long lVar1;
   int iVar2;
   uint uVar3;
   undefined8 uVar4;
   hb_font_t *this;
   void *__ptr;
   void *__ptr_00;
   ulong __nmemb;
   if ((int*)param_1 == (int*)0x0) {
      param_1 = _hb_Null_hb_font_t;
   }
   this(hb_font_t * _hb_font_create(*(hb_face_t**)( (long)param_1 + 0x20 )));
   if (*(int*)( this + 4 ) != 0) {
      if (*(int*)param_1 != 0) {
         LOCK();
         *(int*)param_1 = *(int*)param_1 + 1;
         UNLOCK();
      }
      uVar4 = *(undefined8*)( (long)param_1 + 0x28 );
      *(undefined1**)( this + 0x18 ) = param_1;
      *(undefined8*)( this + 0x28 ) = uVar4;
      *(undefined8*)( this + 0x30 ) = *(undefined8*)( (long)param_1 + 0x30 );
      iVar2 = *(int*)( (long)param_1 + 0x44 );
      this[0x38] = *(hb_font_t*)( (long)param_1 + 0x38 );
      uVar4 = *(undefined8*)( (long)param_1 + 0x68 );
      *(int*)( this + 0x44 ) = iVar2;
      iVar2 = *(int*)( (long)param_1 + 0x70 );
      *(undefined8*)( this + 0x68 ) = uVar4;
      uVar3 = *(uint*)( (long)param_1 + 0x78 );
      *(int*)( this + 0x70 ) = iVar2;
      if (uVar3 != 0) {
         __nmemb = (ulong)uVar3;
         lVar1 = __nmemb * 4;
         __ptr = calloc(__nmemb, 4);
         __ptr_00 = calloc(__nmemb, 4);
         if (( __ptr == (void*)0x0 ) || ( __ptr_00 == (void*)0x0 )) {
            free(__ptr);
            free(__ptr_00);
         } else {
            __memcpy_chk(__ptr, *(undefined8*)( (long)param_1 + 0x80 ), lVar1, lVar1);
            __memcpy_chk(__ptr_00, *(undefined8*)( (long)param_1 + 0x88 ), lVar1, lVar1);
            free(*(void**)( this + 0x80 ));
            free(*(void**)( this + 0x88 ));
            *(void**)( this + 0x80 ) = __ptr;
            *(void**)( this + 0x88 ) = __ptr_00;
            *(uint*)( this + 0x78 ) = uVar3;
            hb_font_t::mults_changed(this);
         }
      }
      hb_font_t::mults_changed(this);
   }
   return this;
}undefined1 *hb_font_get_empty(void) {
   return _hb_Null_hb_font_t;
}int *hb_font_reference(int *param_1) {
   if (( param_1 != (int*)0x0 ) && ( *param_1 != 0 )) {
      LOCK();
      *param_1 = *param_1 + 1;
      UNLOCK();
   }
   return param_1;
}void hb_font_destroy(hb_font_t *param_1) {
   bool bVar1;
   bVar1 = hb_object_destroy<hb_font_t>(param_1);
   if (!bVar1) {
      return;
   }
   hb_font_destroy_part_0(param_1);
   return;
}bool hb_font_set_user_data(hb_font_t *param_1, hb_user_data_key_t *param_2, void *param_3, _func_void_void_ptr *param_4, int param_5) {
   bool bVar1;
   if (*(int*)( param_1 + 4 ) != 0) {
      *(int*)( param_1 + 0x10 ) = *(int*)( param_1 + 0x10 ) + 1;
   }
   bVar1 = hb_object_set_user_data<hb_font_t>(param_1, param_2, param_3, param_4, param_5);
   return bVar1;
}long hb_font_get_user_data(int *param_1, long param_2) {
   pthread_mutex_t *__mutex;
   long lVar1;
   uint uVar2;
   long *plVar3;
   if (( ( param_1 != (int*)0x0 ) && ( *param_1 != 0 ) ) && ( __mutex = *(pthread_mutex_t**)( param_1 + 2 ) ),__mutex != (pthread_mutex_t*)0x0) {
      pthread_mutex_lock(__mutex);
      if (*(uint*)( (long)__mutex + 0x2c ) != 0) {
         uVar2 = 0;
         plVar3 = *(long**)( (long)__mutex + 0x30 );
         do {
            if (param_2 == *plVar3) {
               plVar3 = *(long**)( (long)__mutex + 0x30 ) + (ulong)uVar2 * 3;
               if (plVar3 != (long*)0x0) {
                  lVar1 = plVar3[1];
                  pthread_mutex_unlock(__mutex);
                  return lVar1;
               }
               break;
            }
            uVar2 = uVar2 + 1;
            plVar3 = plVar3 + 3;
         } while ( *(uint*)( (long)__mutex + 0x2c ) != uVar2 );
      }
      pthread_mutex_unlock(__mutex);
   }
   return 0;
}void hb_font_make_immutable(long param_1) {
   long lVar1;
   long lVar2;
   if (*(int*)( param_1 + 4 ) != 0) {
      lVar1 = *(long*)( param_1 + 0x18 );
      if (( lVar1 != 0 ) && ( *(int*)( lVar1 + 4 ) != 0 )) {
         lVar2 = *(long*)( lVar1 + 0x18 );
         if (( lVar2 != 0 ) && ( *(int*)( lVar2 + 4 ) != 0 )) {
            if (*(long*)( lVar2 + 0x18 ) != 0) {
               hb_font_make_immutable();
            }
            *(undefined4*)( lVar2 + 4 ) = 0;
         }
         *(undefined4*)( lVar1 + 4 ) = 0;
      }
      *(undefined4*)( param_1 + 4 ) = 0;
      return;
   }
   return;
}bool hb_font_is_immutable(long param_1) {
   return *(int*)( param_1 + 4 ) == 0;
}undefined4 hb_font_get_serial(long param_1) {
   return *(undefined4*)( param_1 + 0x10 );
}void hb_font_changed(hb_font_t *param_1) {
   if (*(int*)( param_1 + 4 ) == 0) {
      return;
   }
   *(int*)( param_1 + 0x10 ) = *(int*)( param_1 + 0x10 ) + 1;
   hb_font_t::mults_changed(param_1);
   return;
}void hb_font_set_parent(long param_1, undefined1 *param_2) {
   hb_font_t *phVar1;
   bool bVar2;
   if (*(int*)( param_1 + 4 ) == 0) {
      return;
   }
   phVar1 = *(hb_font_t**)( param_1 + 0x18 );
   if (phVar1 != (hb_font_t*)param_2) {
      *(int*)( param_1 + 0x10 ) = *(int*)( param_1 + 0x10 ) + 1;
      if ((hb_font_t*)param_2 == (hb_font_t*)0x0) {
         param_2 = _hb_Null_hb_font_t;
      }
      if (*(int*)param_2 != 0) {
         LOCK();
         *(int*)param_2 = *(int*)param_2 + 1;
         UNLOCK();
      }
      *(undefined1**)( param_1 + 0x18 ) = param_2;
      bVar2 = hb_object_destroy<hb_font_t>(phVar1);
      if (bVar2) {
         hb_font_destroy_part_0(phVar1);
         return;
      }
   }
   return;
}undefined8 hb_font_get_parent(long param_1) {
   return *(undefined8*)( param_1 + 0x18 );
}void hb_font_set_face(hb_font_t *param_1, long param_2) {
   undefined8 uVar1;
   long lVar2;
   if (*(int*)( param_1 + 4 ) == 0) {
      return;
   }
   lVar2 = *(long*)( param_1 + 0x20 );
   if (lVar2 != param_2) {
      *(int*)( param_1 + 0x10 ) = *(int*)( param_1 + 0x10 ) + 1;
      if (param_2 == 0) {
         param_2 = hb_face_get_empty();
         lVar2 = *(long*)( param_1 + 0x20 );
      }
      hb_face_make_immutable(param_2);
      uVar1 = hb_face_reference(param_2);
      *(undefined8*)( param_1 + 0x20 ) = uVar1;
      hb_font_t::mults_changed(param_1);
      hb_face_destroy(lVar2);
      return;
   }
   return;
}undefined8 hb_font_get_face(long param_1) {
   return *(undefined8*)( param_1 + 0x20 );
}void hb_font_set_funcs(long param_1, undefined1 *param_2, undefined8 param_3, code *UNRECOVERED_JUMPTABLE) {
   hb_font_t *phVar1;
   bool bVar2;
   if (*(int*)( param_1 + 4 ) == 0) {
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         for (int i_364 = 0; i_364 < 2; i_364++) {
            /* WARNING: Could not recover jumptable at 0x001044e0. Too many branches */
         }
         ( *UNRECOVERED_JUMPTABLE )(param_3);
         return;
      }
   } else {
      *(int*)( param_1 + 0x10 ) = *(int*)( param_1 + 0x10 ) + 1;
      if (*(code**)( param_1 + 0xa0 ) != (code*)0x0) {
         ( **(code**)( param_1 + 0xa0 ) )(*(undefined8*)( param_1 + 0x98 ));
      }
      if ((int*)param_2 == (int*)0x0) {
         param_2 = _hb_font_funcs_default;
      }
      if (*(int*)param_2 != 0) {
         LOCK();
         *(int*)param_2 = *(int*)param_2 + 1;
         UNLOCK();
      }
      phVar1 = *(hb_font_t**)( param_1 + 0x90 );
      bVar2 = hb_object_destroy<hb_font_t>(phVar1);
      if (bVar2) {
         hb_font_funcs_destroy_part_0(phVar1);
      }
      *(undefined1**)( param_1 + 0x90 ) = param_2;
      *(undefined8*)( param_1 + 0x98 ) = param_3;
      *(code**)( param_1 + 0xa0 ) = UNRECOVERED_JUMPTABLE;
   }
   return;
}void hb_font_set_funcs_data(long param_1, undefined8 param_2, code *UNRECOVERED_JUMPTABLE) {
   if (*(int*)( param_1 + 4 ) == 0) {
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         for (int i_365 = 0; i_365 < 2; i_365++) {
            /* WARNING: Could not recover jumptable at 0x00104544. Too many branches */
         }
         ( *UNRECOVERED_JUMPTABLE )(param_2);
         return;
      }
   } else {
      *(int*)( param_1 + 0x10 ) = *(int*)( param_1 + 0x10 ) + 1;
      if (*(code**)( param_1 + 0xa0 ) != (code*)0x0) {
         ( **(code**)( param_1 + 0xa0 ) )(*(undefined8*)( param_1 + 0x98 ));
      }
      *(undefined8*)( param_1 + 0x98 ) = param_2;
      *(code**)( param_1 + 0xa0 ) = UNRECOVERED_JUMPTABLE;
   }
   return;
}void hb_font_set_scale(hb_font_t *param_1, int param_2, int param_3) {
   if (( *(int*)( param_1 + 4 ) != 0 ) && ( ( *(int*)( param_1 + 0x28 ) != param_2 || ( *(int*)( param_1 + 0x2c ) != param_3 ) ) )) {
      *(int*)( param_1 + 0x10 ) = *(int*)( param_1 + 0x10 ) + 1;
      *(int*)( param_1 + 0x28 ) = param_2;
      *(int*)( param_1 + 0x2c ) = param_3;
      hb_font_t::mults_changed(param_1);
      return;
   }
   return;
}void hb_font_get_scale(long param_1, undefined4 *param_2, undefined4 *param_3) {
   if (param_2 != (undefined4*)0x0) {
      *param_2 = *(undefined4*)( param_1 + 0x28 );
   }
   if (param_3 != (undefined4*)0x0) {
      *param_3 = *(undefined4*)( param_1 + 0x2c );
   }
   return;
}void hb_font_set_ppem(long param_1, int param_2, int param_3) {
   if (*(int*)( param_1 + 4 ) != 0) {
      if (*(int*)( param_1 + 0x68 ) == param_2) {
         if (*(int*)( param_1 + 0x6c ) != param_3) {
            *(int*)( param_1 + 0x10 ) = *(int*)( param_1 + 0x10 ) + 1;
            *(int*)( param_1 + 0x68 ) = param_2;
            *(int*)( param_1 + 0x6c ) = param_3;
            return;
         }
      } else {
         *(int*)( param_1 + 0x10 ) = *(int*)( param_1 + 0x10 ) + 1;
         *(int*)( param_1 + 0x68 ) = param_2;
         *(int*)( param_1 + 0x6c ) = param_3;
      }
   }
   return;
}void hb_font_get_ppem(long param_1, undefined4 *param_2, undefined4 *param_3) {
   if (param_2 != (undefined4*)0x0) {
      *param_2 = *(undefined4*)( param_1 + 0x68 );
   }
   if (param_3 != (undefined4*)0x0) {
      *param_3 = *(undefined4*)( param_1 + 0x6c );
   }
   return;
}void hb_font_set_ptem(float param_1, long param_2) {
   if (( *(int*)( param_2 + 4 ) != 0 ) && ( param_1 != *(float*)( param_2 + 0x70 ) )) {
      *(int*)( param_2 + 0x10 ) = *(int*)( param_2 + 0x10 ) + 1;
      *(float*)( param_2 + 0x70 ) = param_1;
   }
   return;
}undefined4 hb_font_get_ptem(long param_1) {
   return *(undefined4*)( param_1 + 0x70 );
}void hb_font_set_synthetic_bold(float param_1, float param_2, hb_font_t *param_3, int param_4) {
   if (( *(int*)( param_3 + 4 ) != 0 ) && ( ( ( param_1 != *(float*)( param_3 + 0x30 ) || ( param_2 != *(float*)( param_3 + 0x34 ) ) ) || ( param_3[0x38] != ( hb_font_t )(param_4 != 0) ) ) )) {
      *(int*)( param_3 + 0x10 ) = *(int*)( param_3 + 0x10 ) + 1;
      param_3[0x38] = ( hb_font_t )(param_4 != 0);
      *(ulong*)( param_3 + 0x30 ) = CONCAT44(param_2, param_1);
      hb_font_t::mults_changed(param_3);
      return;
   }
   return;
}void hb_font_get_synthetic_bold(long param_1, undefined4 *param_2, undefined4 *param_3, uint *param_4) {
   if (param_2 != (undefined4*)0x0) {
      *param_2 = *(undefined4*)( param_1 + 0x30 );
   }
   if (param_3 != (undefined4*)0x0) {
      *param_3 = *(undefined4*)( param_1 + 0x34 );
   }
   if (param_4 != (uint*)0x0) {
      *param_4 = ( uint ) * (byte*)( param_1 + 0x38 );
   }
   return;
}void hb_font_set_synthetic_slant(float param_1, hb_font_t *param_2) {
   if (( *(int*)( param_2 + 4 ) != 0 ) && ( param_1 != *(float*)( param_2 + 0x44 ) )) {
      *(int*)( param_2 + 0x10 ) = *(int*)( param_2 + 0x10 ) + 1;
      *(float*)( param_2 + 0x44 ) = param_1;
      hb_font_t::mults_changed(param_2);
      return;
   }
   return;
}undefined4 hb_font_get_synthetic_slant(long param_1) {
   return *(undefined4*)( param_1 + 0x44 );
}void hb_font_set_var_coords_design(hb_font_t *param_1, void *param_2, uint param_3) {
   void *__ptr;
   void *__ptr_00;
   ulong __nmemb;
   if (*(int*)( param_1 + 4 ) == 0) {
      return;
   }
   __ptr_00 = (void*)0x0;
   __ptr = (void*)0x0;
   *(ulong*)( param_1 + 0x10 ) = CONCAT44(*(int*)( param_1 + 0x10 ) + 1, *(int*)( param_1 + 0x10 ) + 1);
   if (param_3 != 0) {
      __nmemb = (ulong)param_3;
      __ptr = calloc(__nmemb, 4);
      __ptr_00 = calloc(__nmemb, 4);
      if (( __ptr == (void*)0x0 ) || ( __ptr_00 == (void*)0x0 )) {
         free(__ptr);
         free(__ptr_00);
         return;
      }
      memcpy(__ptr_00, param_2, __nmemb * 4);
   }
   hb_ot_var_normalize_coords(*(undefined8*)( param_1 + 0x20 ), param_3, param_2, __ptr);
   free(*(void**)( param_1 + 0x80 ));
   free(*(void**)( param_1 + 0x88 ));
   *(void**)( param_1 + 0x80 ) = __ptr;
   *(void**)( param_1 + 0x88 ) = __ptr_00;
   *(uint*)( param_1 + 0x78 ) = param_3;
   hb_font_t::mults_changed(param_1);
   return;
}undefined4 hb_font_get_var_named_instance(long param_1) {
   return *(undefined4*)( param_1 + 0x74 );
}undefined8 hb_font_get_var_coords_normalized(long param_1, undefined4 *param_2) {
   if (param_2 != (undefined4*)0x0) {
      *param_2 = *(undefined4*)( param_1 + 0x78 );
   }
   return *(undefined8*)( param_1 + 0x80 );
}undefined8 hb_font_get_var_coords_design(long param_1, undefined4 *param_2) {
   if (param_2 != (undefined4*)0x0) {
      *param_2 = *(undefined4*)( param_1 + 0x78 );
   }
   return *(undefined8*)( param_1 + 0x88 );
}void hb_font_funcs_set_glyph_func(long param_1, undefined8 param_2, undefined8 param_3, code *UNRECOVERED_JUMPTABLE) {
   undefined8 *puVar1;
   if (*(int*)( param_1 + 4 ) != 0) {
      puVar1 = (undefined8*)calloc(1, 0x20);
      if (puVar1 != (undefined8*)0x0) {
         *puVar1 = param_3;
         puVar1[1] = UNRECOVERED_JUMPTABLE;
         puVar1[3] = param_2;
         *(undefined4*)( puVar1 + 2 ) = 2;
         hb_font_funcs_set_nominal_glyph_func(param_1, hb_font_get_nominal_glyph_trampoline, puVar1, trampoline_destroy);
         hb_font_funcs_set_variation_glyph_func(param_1, hb_font_get_variation_glyph_trampoline, puVar1, trampoline_destroy);
         return;
      }
   }
   if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
      for (int i_366 = 0; i_366 < 2; i_366++) {
         /* WARNING: Could not recover jumptable at 0x00104870. Too many branches */
      }
      ( *UNRECOVERED_JUMPTABLE )(param_3);
      return;
   }
   return;
}void hb_font_funcs_set_glyph_shape_func(void) {
   hb_font_funcs_set_draw_glyph_func();
   return;
}void hb_font_set_variation(float param_1, hb_font_t *param_2, uint param_3) {
   long *plVar1;
   ushort uVar2;
   uint uVar3;
   int iVar4;
   long lVar5;
   hb_face_t *phVar6;
   float fVar7;
   void *__ptr;
   float *__ptr_00;
   long lVar8;
   long lVar9;
   float *pfVar10;
   float *pfVar11;
   uint *puVar12;
   undefined *puVar13;
   ulong __nmemb;
   ushort uVar14;
   uint uVar15;
   uint *puVar16;
   long in_FS_OFFSET;
   uint local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( param_2 + 4 ) == 0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      goto LAB_00104c6e;
   }
   lVar5 = *(long*)( param_2 + 0x20 );
   plVar1 = (long*)( lVar5 + 0x100 );
   *(ulong*)( param_2 + 0x10 ) = CONCAT44(*(int*)( param_2 + 0x10 ) + 1, *(int*)( param_2 + 0x10 ) + 1);
   LAB_00104975:lVar8 = *plVar1;
   if (lVar8 == 0) {
      phVar6 = *(hb_face_t**)( lVar5 + 0x70 );
      if (phVar6 == (hb_face_t*)0x0) {
         lVar8 = hb_blob_get_empty();
      } else {
         lVar8 = hb_table_lazy_loader_t<OT::fvar,18u,true>::create(phVar6);
         if (lVar8 == 0) {
            lVar8 = hb_blob_get_empty();
            LOCK();
            lVar9 = *plVar1;
            if (lVar9 == 0) {
               *plVar1 = lVar8;
            }
            UNLOCK();
            if (lVar9 != 0) goto code_r0x00104c60;
         } else {
            LOCK();
            lVar9 = *plVar1;
            if (lVar9 == 0) {
               *plVar1 = lVar8;
            }
            UNLOCK();
            if (lVar9 != 0) goto LAB_00104b76;
         }
      }
   }
   puVar13 = &_hb_NullPool;
   if (0xf < *(uint*)( lVar8 + 0x18 )) {
      puVar13 = *(undefined**)( lVar8 + 0x10 );
   }
   puVar16 = (uint*)&_hb_NullPool;
   uVar2 = *(ushort*)( puVar13 + 4 );
   uVar14 = *(ushort*)( puVar13 + 8 ) << 8 | *(ushort*)( puVar13 + 8 ) >> 8;
   if (uVar2 != 0) {
      puVar16 = (uint*)( puVar13 + ( ushort )(uVar2 << 8 | uVar2 >> 8) );
   }
   uVar15 = (uint)uVar14;
   if (uVar14 == 0) {
      if (*(long*)( param_2 + 0x88 ) == 0) {
         iVar4 = *(int*)( param_2 + 0x74 );
         __ptr = (void*)0x0;
         __ptr_00 = (float*)0x0;
         if (iVar4 != -1) {
            LAB_00104afe:local_44 = (uint)uVar14;
            hb_ot_var_named_instance_get_design_coords(*(undefined8*)( param_2 + 0x20 ), iVar4, &local_44, __ptr_00);
            if (uVar15 != 0) goto LAB_00104abd;
         }
      } else {
         __ptr = (void*)0x0;
         __ptr_00 = (float*)0x0;
      }
   } else {
      __nmemb = (ulong)uVar14;
      __ptr = calloc(__nmemb, 4);
      __ptr_00 = (float*)calloc(__nmemb, 4);
      fVar7 = _LC12;
      if (( __ptr == (void*)0x0 ) || ( __ptr_00 == (float*)0x0 )) {
         free(__ptr);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            free(__ptr_00);
            return;
         }
         goto LAB_00104c6e;
      }
      lVar5 = *(long*)( param_2 + 0x88 );
      lVar8 = 0;
      if (lVar5 == 0) {
         puVar12 = puVar16 + 2;
         pfVar10 = __ptr_00;
         do {
            uVar3 = *puVar12;
            pfVar11 = pfVar10 + 1;
            puVar12 = puVar12 + 5;
            *pfVar10 = ( (float)(int)( uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18 ) + 0.0 ) * fVar7;
            pfVar10 = pfVar11;
         } while ( pfVar11 != __ptr_00 + __nmemb );
         iVar4 = *(int*)( param_2 + 0x74 );
         if (iVar4 != -1) goto LAB_00104afe;
      } else {
         do {
            __ptr_00[lVar8] = *(float*)( lVar5 + lVar8 * 4 );
            lVar8 = lVar8 + 1;
         } while ( (uint)lVar8 < (uint)uVar14 );
      }
      LAB_00104abd:pfVar10 = __ptr_00;
      do {
         uVar3 = *puVar16;
         if (param_3 == ( uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18 )) {
            *pfVar10 = param_1;
         }
         pfVar10 = pfVar10 + 1;
         puVar16 = puVar16 + 5;
      } while ( pfVar10 != __ptr_00 + uVar14 );
   }
   hb_ot_var_normalize_coords(*(undefined8*)( param_2 + 0x20 ), uVar15, __ptr_00, __ptr);
   free(*(void**)( param_2 + 0x80 ));
   free(*(void**)( param_2 + 0x88 ));
   *(void**)( param_2 + 0x80 ) = __ptr;
   *(float**)( param_2 + 0x88 ) = __ptr_00;
   *(uint*)( param_2 + 0x78 ) = uVar15;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      hb_font_t::mults_changed(param_2);
      return;
   }
   LAB_00104c6e:/* WARNING: Subroutine does not return */__stack_chk_fail();
   code_r0x00104c60:if (lVar8 != 0) {
      LAB_00104b76:lVar9 = hb_blob_get_empty();
      if (lVar8 != lVar9) {
         hb_blob_destroy(lVar8);
      }
   }
   goto LAB_00104975;
}void hb_font_set_var_coords_normalized_part_0(hb_font_t *param_1, void *param_2, uint param_3) {
   long *plVar1;
   int iVar2;
   uint uVar3;
   long lVar4;
   hb_face_t *phVar5;
   ushort uVar6;
   int iVar7;
   undefined *puVar8;
   long lVar9;
   long lVar10;
   void *__ptr;
   int *__ptr_00;
   void *__ptr_01;
   int iVar11;
   undefined *puVar12;
   ushort *puVar13;
   int *piVar14;
   undefined *puVar15;
   uint uVar16;
   int iVar17;
   ulong uVar18;
   uint uVar19;
   float fVar20;
   float fVar21;
   float fVar22;
   float fVar23;
   float fVar24;
   *(ulong*)( param_1 + 0x10 ) = CONCAT44(*(int*)( param_1 + 0x10 ) + 1, *(int*)( param_1 + 0x10 ) + 1);
   if (param_3 == 0) {
      __ptr = (void*)0x0;
      __ptr_00 = (int*)0x0;
      __ptr_01 = (void*)0x0;
   } else {
      uVar18 = (ulong)param_3;
      __ptr = calloc(uVar18, 4);
      __ptr_00 = (int*)calloc(uVar18, 4);
      __ptr_01 = calloc(uVar18, 4);
      if (( __ptr == (void*)0x0 || __ptr_00 == (int*)0x0 ) || ( __ptr_01 == (void*)0x0 )) {
         free(__ptr);
         free(__ptr_00);
         free(__ptr_01);
         return;
      }
      memcpy(__ptr, param_2, uVar18 << 2);
      memcpy(__ptr_00, param_2, uVar18 << 2);
   }
   lVar4 = *(long*)( param_1 + 0x20 );
   plVar1 = (long*)( lVar4 + 0x108 );
   LAB_00104cc4:lVar9 = *plVar1;
   if (lVar9 == 0) {
      phVar5 = *(hb_face_t**)( lVar4 + 0x70 );
      if (phVar5 == (hb_face_t*)0x0) {
         lVar9 = hb_blob_get_empty();
      } else {
         lVar9 = hb_table_lazy_loader_t<OT::avar,19u,true>::create(phVar5);
         if (lVar9 == 0) {
            lVar9 = hb_blob_get_empty();
            LOCK();
            lVar10 = *plVar1;
            if (lVar10 == 0) {
               *plVar1 = lVar9;
            }
            UNLOCK();
            if (lVar10 != 0) goto code_r0x00105372;
         } else {
            LOCK();
            lVar10 = *plVar1;
            if (lVar10 == 0) {
               *plVar1 = lVar9;
            }
            UNLOCK();
            if (lVar10 != 0) goto LAB_0010524d;
         }
      }
   }
   fVar24 = _LC6;
   fVar23 = _LC5;
   uVar19 = _LC10;
   puVar12 = &_hb_NullPool;
   if (7 < *(uint*)( lVar9 + 0x18 )) {
      puVar12 = *(undefined**)( lVar9 + 0x10 );
   }
   uVar6 = *(ushort*)( puVar12 + 6 ) << 8 | *(ushort*)( puVar12 + 6 ) >> 8;
   uVar18 = (ulong)uVar6;
   if (param_3 < uVar6) {
      uVar18 = (ulong)param_3;
   }
   puVar13 = (ushort*)( puVar12 + 8 );
   if ((int)uVar18 != 0) {
      piVar14 = __ptr_00;
      do {
         iVar2 = *piVar14;
         uVar6 = *puVar13 << 8 | *puVar13 >> 8;
         uVar16 = (uint)uVar6;
         if (uVar6 < 2) {
            iVar11 = iVar2;
            if (uVar6 != 0) {
               iVar11 = ( iVar2 - (short)( puVar13[2] << 8 | puVar13[2] >> 8 ) ) + (int)(short)( puVar13[1] << 8 | puVar13[1] >> 8 );
            }
         } else {
            iVar7 = (int)(short)( puVar13[2] << 8 | puVar13[2] >> 8 );
            if (iVar7 < iVar2) {
               lVar4 = 1;
               if (uVar16 == 2) {
                  uVar6 = puVar13[4];
                  iVar11 = 1;
                  lVar9 = 4;
                  iVar7 = (int)(short)( uVar6 << 8 | uVar6 >> 8 );
               } else {
                  do {
                     lVar9 = lVar4;
                     uVar6 = puVar13[lVar9 * 2 + 2];
                     iVar11 = (int)lVar9;
                     iVar7 = (int)(short)( uVar6 << 8 | uVar6 >> 8 );
                     if (iVar2 <= iVar7) {
                        lVar9 = lVar9 << 2;
                        goto LAB_00104dd7;
                     }
                     lVar4 = lVar9 + 1;
                  } while ( ( uint )(lVar9 + 1) < uVar16 - 1 );
                  iVar11 = iVar11 + 1;
                  uVar6 = puVar13[( lVar9 + 2 ) * 2];
                  lVar9 = ( lVar9 + 2 ) * 4 + -4;
                  iVar7 = (int)(short)( uVar6 << 8 | uVar6 >> 8 );
               }
               LAB_00104dd7:if (iVar2 < iVar7) {
                  iVar11 = (int)(short)( puVar13[( ulong )(iVar11 - 1) * 2 + 1] << 8 | puVar13[( ulong )(iVar11 - 1) * 2 + 1] >> 8 );
                  if (*(ushort*)( (long)puVar13 + lVar9 ) != uVar6) {
                     uVar6 = *(ushort*)( (long)puVar13 + lVar9 + 2 );
                     iVar17 = (int)(short)( *(ushort*)( (long)puVar13 + lVar9 ) << 8 | *(ushort*)( (long)puVar13 + lVar9 ) >> 8 );
                     fVar20 = ( (float)( (short)( uVar6 << 8 | uVar6 >> 8 ) - iVar11 ) * (float)( iVar2 - iVar17 ) ) / (float)( iVar7 - iVar17 ) + (float)iVar11 + fVar23;
                     if ((float)( (uint)fVar20 & uVar19 ) < fVar24) {
                        fVar20 = (float)( ( uint )((float)(int)fVar20 - (float)( -(uint)(fVar20 < (float)(int)fVar20) & (uint)_LC8 )) | ~uVar19 & (uint)fVar20 );
                     }
                     iVar11 = (int)fVar20;
                  }
               } else {
                  uVar6 = *(ushort*)( (long)puVar13 + lVar9 + 2 );
                  iVar11 = ( iVar2 - iVar7 ) + (int)(short)( uVar6 << 8 | uVar6 >> 8 );
               }
            } else {
               iVar11 = ( iVar2 - iVar7 ) + (int)(short)( puVar13[1] << 8 | puVar13[1] >> 8 );
            }
         }
         *piVar14 = iVar11;
         piVar14 = piVar14 + 1;
         puVar13 = (ushort*)( (long)puVar13 + ( ulong )(uVar16 * 4 + 2) );
      } while ( piVar14 != __ptr_00 + uVar18 );
   }
   uVar18 = 0;
   fVar23 = _LC12;
   fVar24 = _LC15;
   if (param_3 != 0) {
      LAB_00104f33:do {
         lVar4 = *(long*)( param_1 + 0x20 );
         plVar1 = (long*)( lVar4 + 0x100 );
         LAB_00104f3e:lVar9 = *plVar1;
         if (lVar9 == 0) {
            phVar5 = *(hb_face_t**)( lVar4 + 0x70 );
            if (phVar5 == (hb_face_t*)0x0) {
               lVar9 = hb_blob_get_empty();
               fVar23 = _LC12;
               fVar24 = _LC15;
            } else {
               lVar9 = hb_table_lazy_loader_t<OT::fvar,18u,true>::create(phVar5);
               fVar24 = _LC15;
               fVar23 = _LC12;
               if (lVar9 == 0) {
                  lVar9 = hb_blob_get_empty();
                  LOCK();
                  lVar10 = *plVar1;
                  if (lVar10 == 0) {
                     *plVar1 = lVar9;
                  }
                  UNLOCK();
                  fVar23 = _LC12;
                  fVar24 = _LC15;
                  if (lVar10 != 0) goto code_r0x001052fc;
               } else {
                  LOCK();
                  lVar10 = *plVar1;
                  if (lVar10 == 0) {
                     *plVar1 = lVar9;
                  }
                  UNLOCK();
                  if (lVar10 != 0) goto LAB_001050e5;
               }
            }
         }
         puVar12 = &_hb_NullPool;
         if (0xf < *(uint*)( lVar9 + 0x18 )) {
            puVar12 = *(undefined**)( lVar9 + 0x10 );
         }
         puVar15 = &_hb_NullPool;
         iVar2 = __ptr_00[uVar18];
         uVar6 = *(ushort*)( puVar12 + 4 );
         if (uVar6 != 0) {
            puVar15 = puVar12 + ( ushort )(uVar6 << 8 | uVar6 >> 8);
         }
         puVar8 = &_hb_NullPool;
         if ((uint)uVar18 < ( uint )(ushort)(*(ushort*)( puVar12 + 8 ) << 8 | *(ushort*)( puVar12 + 8 ) >> 8)) {
            puVar8 = puVar15 + uVar18 * 0x14;
         }
         uVar19 = *(uint*)( puVar8 + 8 );
         uVar16 = *(uint*)( puVar8 + 4 );
         uVar3 = *(uint*)( puVar8 + 0xc );
         fVar21 = ( (float)(int)( uVar19 >> 0x18 | ( uVar19 & 0xff0000 ) >> 8 | ( uVar19 & 0xff00 ) << 8 | uVar19 << 0x18 ) + 0.0 ) * fVar23;
         fVar22 = ( (float)(int)( uVar16 >> 0x18 | ( uVar16 & 0xff0000 ) >> 8 | ( uVar16 & 0xff00 ) << 8 | uVar16 << 0x18 ) + 0.0 ) * fVar23;
         uVar19 = -(uint)(fVar22 < fVar21);
         fVar20 = ( (float)(int)( uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18 ) + 0.0 ) * fVar23;
         uVar16 = -(uint)(fVar21 < fVar20);
         if (iVar2 == 0) {
            LAB_00104f20:*(float*)( (long)__ptr_01 + uVar18 * 4 ) = fVar21;
            uVar18 = uVar18 + 1;
            if (uVar18 == param_3) break;
            goto LAB_00104f33;
         }
         if (-1 < iVar2) {
            fVar21 = fVar21 + ( (float)( (uint)fVar20 & uVar16 | ~uVar16 & (uint)fVar21 ) - fVar21 ) * (float)iVar2 * fVar24;
            goto LAB_00104f20;
         }
         *(float*)( (long)__ptr_01 + uVar18 * 4 ) = fVar21 + ( fVar21 - (float)( (uint)fVar22 & uVar19 | ~uVar19 & (uint)fVar21 ) ) * (float)iVar2 * fVar24;
         uVar18 = uVar18 + 1;
      } while ( uVar18 != param_3 );
   }
   free(__ptr_00);
   free(*(void**)( param_1 + 0x80 ));
   free(*(void**)( param_1 + 0x88 ));
   *(void**)( param_1 + 0x80 ) = __ptr;
   *(void**)( param_1 + 0x88 ) = __ptr_01;
   *(uint*)( param_1 + 0x78 ) = param_3;
   hb_font_t::mults_changed(param_1);
   return;
   code_r0x00105372:if (lVar9 != 0) {
      LAB_0010524d:lVar10 = hb_blob_get_empty();
      if (lVar9 != lVar10) {
         hb_blob_destroy(lVar9);
      }
   }
   goto LAB_00104cc4;
   code_r0x001052fc:if (lVar9 != 0) {
      LAB_001050e5:lVar10 = hb_blob_get_empty();
      fVar23 = _LC12;
      fVar24 = _LC15;
      if (lVar9 != lVar10) {
         hb_blob_destroy();
         fVar23 = _LC12;
         fVar24 = _LC15;
      }
   }
   goto LAB_00104f3e;
}void hb_font_set_var_coords_normalized(long param_1) {
   if (*(int*)( param_1 + 4 ) != 0) {
      hb_font_set_var_coords_normalized_part_0();
      return;
   }
   return;
}void hb_font_set_variations(hb_font_t *param_1, uint *param_2, uint param_3) {
   long *plVar1;
   float fVar2;
   ushort uVar3;
   int iVar4;
   uint uVar5;
   uint uVar6;
   long lVar7;
   hb_face_t *phVar8;
   void *__ptr;
   float *__ptr_00;
   float *pfVar9;
   float *pfVar10;
   long lVar11;
   long lVar12;
   uint *puVar13;
   uint *puVar14;
   undefined *puVar15;
   uint *puVar16;
   uint uVar17;
   ushort uVar18;
   ulong __nmemb;
   long in_FS_OFFSET;
   uint local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( param_1 + 4 ) != 0) {
      *(ulong*)( param_1 + 0x10 ) = CONCAT44(*(int*)( param_1 + 0x10 ) + 1, *(int*)( param_1 + 0x10 ) + 1);
      if (( param_3 != 0 ) || ( *(int*)( param_1 + 0x74 ) != -1 )) {
         lVar7 = *(long*)( param_1 + 0x20 );
         plVar1 = (long*)( lVar7 + 0x100 );
         LAB_00105402:lVar11 = *plVar1;
         if (lVar11 == 0) {
            phVar8 = *(hb_face_t**)( lVar7 + 0x70 );
            if (phVar8 == (hb_face_t*)0x0) {
               lVar11 = hb_blob_get_empty();
            } else {
               lVar11 = hb_table_lazy_loader_t<OT::fvar,18u,true>::create(phVar8);
               if (lVar11 == 0) {
                  lVar11 = hb_blob_get_empty();
                  LOCK();
                  lVar12 = *plVar1;
                  if (lVar12 == 0) {
                     *plVar1 = lVar11;
                  }
                  UNLOCK();
                  if (lVar12 != 0) goto code_r0x00105732;
               } else {
                  LOCK();
                  lVar12 = *plVar1;
                  if (lVar12 == 0) {
                     *plVar1 = lVar11;
                  }
                  UNLOCK();
                  if (lVar12 != 0) goto LAB_00105674;
               }
            }
         }
         puVar16 = (uint*)&_hb_NullPool;
         puVar15 = &_hb_NullPool;
         if (0xf < *(uint*)( lVar11 + 0x18 )) {
            puVar15 = *(undefined**)( lVar11 + 0x10 );
         }
         uVar3 = *(ushort*)( puVar15 + 4 );
         uVar18 = *(ushort*)( puVar15 + 8 ) << 8 | *(ushort*)( puVar15 + 8 ) >> 8;
         if (uVar3 != 0) {
            puVar16 = (uint*)( puVar15 + ( ushort )(uVar3 << 8 | uVar3 >> 8) );
         }
         __ptr = (void*)0x0;
         __ptr_00 = (float*)0x0;
         uVar17 = (uint)uVar18;
         if (uVar18 == 0) {
            iVar4 = *(int*)( param_1 + 0x74 );
         } else {
            __nmemb = (ulong)uVar18;
            __ptr = calloc(__nmemb, 4);
            __ptr_00 = (float*)calloc(__nmemb, 4);
            fVar2 = _LC12;
            if (( __ptr == (void*)0x0 ) || ( __ptr_00 == (float*)0x0 )) {
               free(__ptr);
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  free(__ptr_00);
                  return;
               }
               goto LAB_00105756;
            }
            puVar14 = puVar16 + 2;
            pfVar9 = __ptr_00;
            do {
               uVar5 = *puVar14;
               pfVar10 = pfVar9 + 1;
               puVar14 = puVar14 + 5;
               *pfVar9 = ( (float)(int)( uVar5 >> 0x18 | ( uVar5 & 0xff0000 ) >> 8 | ( uVar5 & 0xff00 ) << 8 | uVar5 << 0x18 ) + 0.0 ) * fVar2;
               pfVar9 = pfVar10;
            } while ( pfVar10 != __ptr_00 + __nmemb );
            iVar4 = *(int*)( param_1 + 0x74 );
         }
         if (iVar4 != -1) {
            local_44 = uVar17;
            hb_ot_var_named_instance_get_design_coords(*(undefined8*)( param_1 + 0x20 ), iVar4, &local_44, __ptr_00);
         }
         if (param_3 != 0) {
            puVar14 = param_2 + (ulong)param_3 * 2;
            if (uVar17 == 0) {
               do {
                  if (param_2 + 2 == puVar14) break;
                  param_2 = param_2 + 4;
               } while ( param_2 != puVar14 );
            } else {
               do {
                  uVar5 = *param_2;
                  fVar2 = (float)param_2[1];
                  puVar13 = puVar16;
                  pfVar9 = __ptr_00;
                  do {
                     uVar6 = *puVar13;
                     if (uVar5 == ( uVar6 >> 0x18 | ( uVar6 & 0xff0000 ) >> 8 | ( uVar6 & 0xff00 ) << 8 | uVar6 << 0x18 )) {
                        *pfVar9 = fVar2;
                     }
                     pfVar9 = pfVar9 + 1;
                     puVar13 = puVar13 + 5;
                  } while ( __ptr_00 + ( ulong )(uVar18 - 1) + 1 != pfVar9 );
                  param_2 = param_2 + 2;
               } while ( puVar14 != param_2 );
            }
         }
         hb_ot_var_normalize_coords(*(undefined8*)( param_1 + 0x20 ), uVar17, __ptr_00, __ptr);
         free(*(void**)( param_1 + 0x80 ));
         free(*(void**)( param_1 + 0x88 ));
         *(void**)( param_1 + 0x80 ) = __ptr;
         *(float**)( param_1 + 0x88 ) = __ptr_00;
         *(uint*)( param_1 + 0x78 ) = uVar17;
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            hb_font_t::mults_changed(param_1);
            return;
         }
         goto LAB_00105756;
      }
      if (*(int*)( param_1 + 4 ) != 0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            hb_font_set_var_coords_normalized_part_0(param_1, 0, 0);
            return;
         }
         goto LAB_00105756;
      }
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_00105756:/* WARNING: Subroutine does not return */__stack_chk_fail();
   code_r0x00105732:if (lVar11 != 0) {
      LAB_00105674:lVar12 = hb_blob_get_empty();
      if (lVar11 != lVar12) {
         hb_blob_destroy(lVar11);
      }
   }
   goto LAB_00105402;
}void hb_font_set_var_named_instance(long param_1, int param_2) {
   int iVar1;
   if (( *(int*)( param_1 + 4 ) != 0 ) && ( *(int*)( param_1 + 0x74 ) != param_2 )) {
      *(int*)( param_1 + 0x74 ) = param_2;
      iVar1 = *(int*)( param_1 + 0x10 ) + 1;
      *(ulong*)( param_1 + 0x10 ) = CONCAT44(iVar1, iVar1);
      hb_font_set_variations(param_1, 0, 0);
      return;
   }
   return;
}long hb_font_create(hb_face_t *param_1) {
   int iVar1;
   long lVar2;
   lVar2 = _hb_font_create(param_1);
   hb_ot_font_set_funcs(lVar2);
   if (( ( ( param_1 != (hb_face_t*)0x0 ) && ( *(ushort*)( param_1 + 0x12 ) != 0 ) ) && ( *(int*)( lVar2 + 4 ) != 0 ) ) && ( iVar1 = *(ushort*)( param_1 + 0x12 ) - 1 ),iVar1 != *(int*)( lVar2 + 0x74 )) {
      *(int*)( lVar2 + 0x74 ) = iVar1;
      iVar1 = *(int*)( lVar2 + 0x10 ) + 1;
      *(ulong*)( lVar2 + 0x10 ) = CONCAT44(iVar1, iVar1);
      hb_font_set_variations(lVar2, 0, 0);
   }
   return lVar2;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* hb_font_t::get_glyph_origin_for_direction(unsigned int, hb_direction_t, int*, int*) */void hb_font_t::get_glyph_origin_for_direction(hb_font_t *this, undefined4 param_1, uint param_3, int *param_4, int *param_5) {
   int iVar1;
   ulong uVar2;
   long lVar3;
   long *plVar4;
   long lVar5;
   long in_FS_OFFSET;
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined1 local_48[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = *(long*)( this + 0x90 );
   lVar5 = *(long*)( lVar3 + 0x10 );
   *param_5 = 0;
   *param_4 = 0;
   if (( param_3 & 0xfffffffe ) == 4) {
      if (lVar5 != 0) {
         lVar5 = *(long*)( lVar5 + 0x48 );
      }
      iVar1 = ( **(code**)( lVar3 + 0x68 ) )(this, *(undefined8*)( this + 0x98 ), param_1, param_4, param_5, lVar5);
      if (iVar1 == 0) {
         lVar3 = *(long*)( this + 0x90 );
         *param_5 = 0;
         *param_4 = 0;
         lVar5 = *(long*)( lVar3 + 0x10 );
         if (lVar5 != 0) {
            lVar5 = *(long*)( lVar5 + 0x50 );
         }
         iVar1 = ( **(code**)( lVar3 + 0x70 ) )(this, *(undefined8*)( this + 0x98 ), param_1, param_4, param_5, lVar5);
         if (iVar1 != 0) {
            lVar3 = *(long*)( *(long*)( this + 0x90 ) + 0x10 );
            if (lVar3 != 0) {
               lVar3 = *(long*)( lVar3 + 0x28 );
            }
            uVar2 = ( **(code**)( *(long*)( this + 0x90 ) + 0x48 ) )(this, *(undefined8*)( this + 0x98 ), param_1, lVar3);
            local_68 = (undefined1[16])0x0;
            local_58 = (undefined1[16])0x0;
            local_48 = (undefined1[16])0x0;
            plVar4 = *(long**)( *(long*)( this + 0x90 ) + 0x10 );
            if (plVar4 != (long*)0x0) {
               plVar4 = (long*)*plVar4;
            }
            iVar1 = ( **(code**)( *(long*)( this + 0x90 ) + 0x20 ) )(this, *(undefined8*)( this + 0x98 ), local_68, plVar4);
            if (iVar1 == 0) {
               iVar1 = (int)( (double)*(int*)( this + 0x2c ) * __LC3 );
            } else {
               iVar1 = local_68._0_4_;
            }
            *param_4 = *param_4 - ( (int)( ( ( uint )(uVar2 >> 0x1f) & 1 ) + (int)uVar2 ) >> 1 );
            *param_5 = *param_5 - iVar1;
         }
      }
   } else {
      if (lVar5 != 0) {
         lVar5 = *(long*)( lVar5 + 0x50 );
      }
      iVar1 = ( **(code**)( lVar3 + 0x70 ) )(this, *(undefined8*)( this + 0x98 ), param_1, param_4, param_5, lVar5);
      if (iVar1 == 0) {
         lVar3 = *(long*)( this + 0x90 );
         *param_5 = 0;
         *param_4 = 0;
         lVar5 = *(long*)( lVar3 + 0x10 );
         if (lVar5 != 0) {
            lVar5 = *(long*)( lVar5 + 0x48 );
         }
         iVar1 = ( **(code**)( lVar3 + 0x68 ) )(this, *(undefined8*)( this + 0x98 ), param_1, param_4, param_5, lVar5);
         if (iVar1 != 0) {
            lVar3 = *(long*)( *(long*)( this + 0x90 ) + 0x10 );
            if (lVar3 != 0) {
               lVar3 = *(long*)( lVar3 + 0x28 );
            }
            uVar2 = ( **(code**)( *(long*)( this + 0x90 ) + 0x48 ) )(this, *(undefined8*)( this + 0x98 ), param_1, lVar3);
            local_68 = (undefined1[16])0x0;
            local_58 = (undefined1[16])0x0;
            local_48 = (undefined1[16])0x0;
            plVar4 = *(long**)( *(long*)( this + 0x90 ) + 0x10 );
            if (plVar4 != (long*)0x0) {
               plVar4 = (long*)*plVar4;
            }
            iVar1 = ( **(code**)( *(long*)( this + 0x90 ) + 0x20 ) )(this, *(undefined8*)( this + 0x98 ), local_68, plVar4);
            if (iVar1 == 0) {
               iVar1 = (int)( (double)*(int*)( this + 0x2c ) * __LC3 );
            } else {
               iVar1 = local_68._0_4_;
            }
            *param_4 = *param_4 + ( (int)( ( ( uint )(uVar2 >> 0x1f) & 1 ) + (int)uVar2 ) >> 1 );
            *param_5 = *param_5 + iVar1;
         }
      }
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* hb_font_t::mults_changed() */void hb_font_t::mults_changed(hb_font_t *this) {
   float fVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   int iVar5;
   float fVar6;
   int iVar7;
   float fVar8;
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   float fVar11;
   float fVar12;
   uVar2 = *(uint*)( *(long*)( this + 0x20 ) + 0x14 );
   if (uVar2 == 0) {
      uVar2 = hb_face_t::load_upem();
   }
   lVar4 = *(long*)( this + 0x28 );
   fVar11 = (float)uVar2;
   iVar5 = (int)lVar4;
   iVar7 = (int)( (ulong)lVar4 >> 0x20 );
   auVar9._4_4_ = (float)iVar7;
   auVar9._0_4_ = (float)iVar5;
   auVar9._8_8_ = 0;
   auVar10._4_4_ = fVar11;
   auVar10._0_4_ = fVar11;
   auVar10._8_4_ = (uint)_LC8;
   auVar10._12_4_ = _LC8._4_4_;
   auVar10 = divps(auVar9, auVar10);
   *(long*)( this + 0x4c ) = auVar10._0_8_;
   if (iVar5 < 0) {
      lVar3 = (long)-iVar5 * -0x10000;
   } else {
      lVar3 = (long)iVar5 << 0x10;
   }
   *(long*)( this + 0x58 ) = (long)( (float)lVar3 / fVar11 );
   fVar1 = _LC6;
   fVar8 = _LC5;
   uVar2 = _LC10;
   if (lVar4 < 0) {
      lVar4 = (long)-iVar7 * -0x10000;
   } else {
      lVar4 = (long)iVar7 << 0x10;
   }
   fVar6 = (float)*(int*)( this + 0x28 ) * *(float*)( this + 0x30 ) + _LC5;
   fVar12 = (float)( (uint)fVar6 & _LC10 );
   *(long*)( this + 0x60 ) = (long)( (float)lVar4 / fVar11 );
   if (fVar12 < fVar1) {
      fVar6 = (float)( ( uint )((float)(int)fVar6 - (float)( -(uint)(fVar6 < (float)(int)fVar6) & (uint)_LC8 )) | ~uVar2 & (uint)fVar6 );
   }
   fVar8 = (float)*(int*)( this + 0x2c ) * *(float*)( this + 0x34 ) + fVar8;
   if ((float)( (uint)fVar8 & uVar2 ) < fVar1) {
      fVar8 = (float)( ( uint )((float)(int)fVar8 - (float)( -(uint)(fVar8 < (float)(int)fVar8) & (uint)_LC8 )) | ~uVar2 & (uint)fVar8 );
   }
   *(ulong*)( this + 0x3c ) = CONCAT44((int)(float)( (uint)fVar8 & ( uint )((ulong)_LC9 >> 0x20) ), (int)(float)( (uint)fVar6 & (uint)_LC9 ));
   fVar11 = 0.0;
   if (iVar7 != 0) {
      fVar11 = ( *(float*)( this + 0x44 ) * (float)iVar5 ) / (float)iVar7;
   }
   *(float*)( this + 0x48 ) = fVar11;
   if (*(long*)( this + 0xb0 ) != 0) {
      _hb_graphite2_shaper_font_data_destroy();
   }
   *(undefined8*)( this + 0xb0 ) = 0;
   if (*(long*)( this + 0xb8 ) != 0) {
      _hb_ot_shaper_font_data_destroy();
   }
   *(undefined8*)( this + 0xb8 ) = 0;
   if (*(long*)( this + 0xc0 ) != 0) {
      _hb_fallback_shaper_font_data_destroy();
   }
   *(undefined8*)( this + 0xc0 ) = 0;
   return;
}/* OT::ItemVariationStore::sanitize(hb_sanitize_context_t*) const */undefined8 OT::ItemVariationStore::sanitize(ItemVariationStore *this, hb_sanitize_context_t *param_1) {
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
         if (( ( ulong )((long)pIVar1 - lVar8) <= uVar6 ) && ( ( uVar3 <= ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)pIVar1) && ( iVar5 = *(int*)( param_1 + 0x1c ) - uVar3 ),*(int*)( param_1 + 0x1c ) = iVar5,0 < iVar5 ) )) goto LAB_00105d1a;
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
   LAB_00105d1a:if (( ( ( uVar6 < ( ulong )((long)pIVar7 - lVar8) ) || ( ( ulong ) * (uint*)( param_1 + 0x18 ) < ( ulong )((long)pIVar7 - *(long*)( param_1 + 8 )) ) ) || ( uVar3 = ( uint )(ushort)(*(ushort*)( this + 6 ) << 8 | *(ushort*)( this + 6 ) >> 8)(uint)((int)*(undefined8*)( param_1 + 0x10 ) - (int)pIVar7) < uVar3 * 4 ) ) || ( iVar5 = *(int*)( param_1 + 0x1c ) + uVar3 * -4 ),*(int*)( param_1 + 0x1c ) = iVar5,iVar5 < 1) {
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
                  if (( ( (int)( (ulong)lVar8 >> 0x20 ) == 0 ) && ( ( ulong )((long)( pIVar9 + ( ulong )(uVar10 + 2 + (uint)uVar10) + 4 ) - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 ) ) ) && ( ( uVar3 <= ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)( pIVar9 + ( ulong )(uVar10 + 2 + (uint)uVar10) + 4 )) && ( iVar5 = *(int*)( param_1 + 0x1c ) - uVar3 ),*(int*)( param_1 + 0x1c ) = iVar5,0 < iVar5 ) )) goto LAB_00105d80;
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
         LAB_00105d80:pIVar7 = pIVar7 + 4;
      } while ( this + ( ulong )(uVar2 - 1) * 4 + 0x10 != pIVar7 );
   }
   return 1;
}/* OT::avarV2Tail::sanitize(hb_sanitize_context_t*, void const*) const */undefined8 OT::avarV2Tail::sanitize(avarV2Tail *this, hb_sanitize_context_t *param_1, void *param_2) {
   char *pcVar1;
   char cVar2;
   uint uVar3;
   long lVar4;
   char *pcVar5;
   avarV2Tail *paVar6;
   int iVar7;
   if ((avarV2Tail*)( ulong ) * (uint*)( param_1 + 0x18 ) < this + ( 4 - *(long*)( param_1 + 8 ) )) {
      return 0;
   }
   uVar3 = *(uint*)this;
   if (uVar3 != 0) {
      pcVar5 = (char*)( ( ulong )(uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18) + (long)param_2 );
      if (pcVar5 + ( 1 - *(long*)( param_1 + 8 ) ) <= (char*)( ulong ) * (uint*)( param_1 + 0x18 )) {
         if (*pcVar5 == '\0') {
            pcVar1 = pcVar5 + 4;
            if (( ulong )((long)pcVar1 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 )) {
               lVar4 = *(long*)( param_1 + 8 );
               paVar6 = (avarV2Tail*)( ulong ) * (uint*)( param_1 + 0x18 );
               if (( (avarV2Tail*)( pcVar1 + -lVar4 ) <= paVar6 ) && ( uVar3 = ( ( (byte)pcVar5[1] >> 4 & 3 ) + 1 ) * ( uint )(ushort)(*(ushort*)( pcVar5 + 2 ) << 8 | *(ushort*)( pcVar5 + 2 ) >> 8) ),uVar3 <= ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)pcVar1)) {
                  iVar7 = *(int*)( param_1 + 0x1c ) - uVar3;
                  *(int*)( param_1 + 0x1c ) = iVar7;
                  joined_r0x0010603b:if (0 < iVar7) goto LAB_00105f91;
               }
            }
         } else {
            if (*pcVar5 != '\x01') goto LAB_00105f8a;
            pcVar1 = pcVar5 + 6;
            if (( ulong )((long)pcVar1 - *(long*)( param_1 + 8 )) <= ( ulong ) * (uint*)( param_1 + 0x18 )) {
               uVar3 = *(uint*)( pcVar5 + 2 );
               lVar4 = ( ulong )(( (byte)pcVar5[1] >> 4 & 3 ) + 1) * ( ulong )(uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18);
               uVar3 = (uint)lVar4;
               if ((int)( (ulong)lVar4 >> 0x20 ) == 0) {
                  lVar4 = *(long*)( param_1 + 8 );
                  paVar6 = (avarV2Tail*)( ulong ) * (uint*)( param_1 + 0x18 );
                  if (( (avarV2Tail*)( pcVar1 + -lVar4 ) <= paVar6 ) && ( uVar3 <= ( uint )((int)*(undefined8*)( param_1 + 0x10 ) - (int)pcVar1) )) {
                     iVar7 = *(int*)( param_1 + 0x1c ) - uVar3;
                     *(int*)( param_1 + 0x1c ) = iVar7;
                     goto joined_r0x0010603b;
                  }
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
      *(undefined4*)this = 0;
   }
   LAB_00105f8a:lVar4 = *(long*)( param_1 + 8 );
   paVar6 = (avarV2Tail*)( ulong ) * (uint*)( param_1 + 0x18 );
   LAB_00105f91:if (paVar6 < this + ( 8 - lVar4 )) {
      return 0;
   }
   uVar3 = *(uint*)( this + 4 );
   if (( uVar3 != 0 ) && ( cVar2 = ItemVariationStore::sanitize((ItemVariationStore*)( (long)param_2 + ( ulong )(uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18) ), param_1) ),cVar2 == '\0') {
      if (0x1f < *(uint*)( param_1 + 0x2c )) {
         return 0;
      }
      *(uint*)( param_1 + 0x2c ) = *(uint*)( param_1 + 0x2c ) + 1;
      if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
         return 0;
      }
      *(undefined4*)( this + 4 ) = 0;
   }
   return 1;
}/* hb_table_lazy_loader_t<OT::fvar, 18u, true>::create(hb_face_t*) */undefined8 hb_table_lazy_loader_t<OT::fvar,18u,true>::create(hb_face_t *param_1) {
   ushort uVar1;
   short *psVar2;
   int iVar3;
   uint uVar4;
   undefined8 uVar5;
   long lVar6;
   ushort uVar7;
   int iVar8;
   uint uVar9;
   ulong uVar10;
   uint uVar11;
   undefined *puVar12;
   uVar5 = hb_face_reference_table(param_1, 0x66766172);
   lVar6 = hb_blob_reference(uVar5);
   psVar2 = *(short**)( lVar6 + 0x10 );
   uVar9 = *(uint*)( lVar6 + 0x18 );
   uVar10 = (ulong)uVar9;
   if (uVar9 >> 0x1a == 0) {
      uVar11 = uVar9 << 6;
      if (0x3fffffff < uVar9 << 6) {
         uVar11 = 0x3fffffff;
      }
      if (uVar11 < 0x4000) {
         uVar11 = 0x4000;
      }
   } else {
      uVar11 = 0x3fffffff;
   }
   if (psVar2 == (short*)0x0) {
      hb_blob_destroy();
      return uVar5;
   }
   if (( ( ( 3 < uVar10 ) && ( *psVar2 == 0x100 ) ) && ( 0xf < uVar10 ) ) && ( psVar2[5] == 0x1400 )) {
      uVar7 = psVar2[4] << 8 | (ushort)psVar2[4] >> 8;
      uVar4 = ( uint )(ushort)(psVar2[7] << 8 | (ushort)psVar2[7] >> 8);
      if ((uint)uVar7 * 4 + 4 <= uVar4) {
         uVar1 = psVar2[2];
         puVar12 = &_hb_NullPool;
         if (uVar1 != 0) {
            puVar12 = (undefined*)( (long)psVar2 + ( ulong )(ushort)(uVar1 << 8 | uVar1 >> 8) );
         }
         if (( ulong )((long)puVar12 - (long)psVar2) <= uVar10) {
            iVar3 = (int)psVar2 + uVar9;
            iVar8 = (uint)uVar7 + (uint)uVar7 * 4;
            uVar9 = iVar8 * 4;
            if (( uVar9 <= ( uint )(iVar3 - (int)puVar12) ) && ( iVar8= uVar11 + iVar8 * -4,0 < iVar8 )) {
               if (( ( ulong )((long)( puVar12 + uVar9 ) - (long)psVar2) <= uVar10 ) && ( ( uVar4 = ( ushort )(psVar2[6] << 8 | (ushort)psVar2[6] >> 8) * uVar4 ),uVar4 <= ( uint )(iVar3 - (int)( puVar12 + uVar9 )) && ( 0 < (int)( iVar8 - uVar4 ) ) )) {
                  hb_blob_destroy();
                  hb_blob_make_immutable(uVar5);
                  return uVar5;
               }
            }
         }
      }
   }
   hb_blob_destroy();
   hb_blob_destroy(uVar5);
   uVar5 = hb_blob_get_empty();
   return uVar5;
}/* hb_table_lazy_loader_t<OT::avar, 19u, true>::create(hb_face_t*) */long hb_table_lazy_loader_t<OT::avar,19u,true>::create(hb_face_t *param_1) {
   avarV2Tail *paVar1;
   ushort *puVar2;
   uint uVar3;
   char cVar4;
   ushort uVar5;
   uint uVar6;
   long lVar7;
   long lVar8;
   avarV2Tail *this;
   avarV2Tail *paVar9;
   uint uVar10;
   ushort uVar11;
   long in_FS_OFFSET;
   undefined4 local_68[2];
   undefined1 local_60[16];
   uint local_50;
   uint local_4c;
   undefined4 local_48;
   undefined4 local_44;
   char local_40;
   int local_3c;
   long local_38;
   undefined4 local_30;
   undefined2 local_2c;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_2c = 1;
   local_48 = 0;
   local_40 = '\0';
   local_30 = 0;
   lVar7 = hb_face_reference_table(param_1, 0x61766172);
   lVar8 = hb_blob_reference(lVar7);
   local_38 = lVar8;
   while (true) {
      local_50 = *(uint*)( lVar8 + 0x18 );
      puVar2 = *(ushort**)( lVar8 + 0x10 );
      local_4c = local_50 * 0x40;
      local_60._8_8_ = (long)puVar2 + (ulong)local_50;
      if (local_50 >> 0x1a == 0) {
         if (0x3fffffff < local_4c) {
            local_4c = 0x3fffffff;
         }
         if (local_4c < 0x4000) {
            local_4c = 0x4000;
         }
      } else {
         local_4c = 0x3fffffff;
      }
      local_60._0_8_ = puVar2;
      local_3c = 0;
      local_68[0] = 0;
      local_44 = 0;
      if (puVar2 == (ushort*)0x0) {
         hb_blob_destroy(lVar8);
         goto LAB_001064a1;
      }
      if ((ulong)local_50 < 4) goto LAB_001065c3;
      uVar5 = *puVar2 << 8 | *puVar2 >> 8;
      if (( uVar5 - 1 < 2 ) && ( this = (avarV2Tail*)( puVar2 + 4 )(ulong)((long)this - (long)puVar2) <= (ulong)local_50 )) break;
      LAB_0010642a:lVar8 = local_38;
      if (( local_3c == 0 ) || ( local_40 != '\0' )) goto LAB_001065c3;
      local_60._0_8_ = hb_blob_get_data_writable(lVar7, 0);
      local_60._8_8_ = ( ulong ) * (uint*)( lVar7 + 0x18 ) + local_60._0_8_;
      if (local_60._0_8_ == 0) goto LAB_001065c3;
      local_40 = '\x01';
   };
   uVar11 = puVar2[3] << 8 | puVar2[3] >> 8;
   paVar9 = this;
   if (uVar11 != 0) {
      uVar10 = 0;
      do {
         paVar1 = paVar9 + 2;
         if (( (ulong)local_50 < ( ulong )((long)paVar1 - (long)puVar2) ) || ( (ulong)local_50 < ( ulong )((long)paVar1 - (long)puVar2) )) goto LAB_0010642a;
         uVar3 = ( uint )(ushort)(*(ushort*)paVar9 << 8 | *(ushort*)paVar9 >> 8);
         uVar6 = uVar3 * 4;
         if (( ( uint )((int)local_60._8_8_ - (int)paVar1) < uVar6 ) || ( local_4c = local_4c + uVar3 * -4 ),(int)local_4c < 1) goto LAB_0010642a;
         uVar10 = uVar10 + 1;
         paVar9 = paVar9 + ( uVar6 + 2 );
      } while ( uVar11 != uVar10 );
      uVar5 = *puVar2 << 8 | *puVar2 >> 8;
   }
   if (uVar5 < 2) {
      LAB_0010648f:hb_blob_destroy(local_38);
      goto LAB_00106499;
   }
   cVar4 = OT::avarV2Tail::sanitize(paVar9, (hb_sanitize_context_t*)local_68, puVar2);
   if (cVar4 == '\0') goto LAB_0010642a;
   if (local_3c == 0) goto LAB_0010648f;
   local_3c = 0;
   if ((ulong)local_50 < ( ulong )((long)puVar2 + ( 4 - local_60._0_8_ ))) {
      hb_blob_destroy(local_38);
      goto LAB_001065c8;
   }
   uVar5 = *puVar2;
   lVar8 = local_38;
   if (( ( ushort )(uVar5 << 8 | uVar5 >> 8) - 1 < 2 ) && ( ( ulong )((long)this - local_60._0_8_) <= (ulong)local_50 )) {
      uVar11 = puVar2[3] << 8 | puVar2[3] >> 8;
      if (uVar11 == 0) goto LAB_001065f6;
      uVar10 = 0;
      goto LAB_0010658f;
   }
   LAB_001065c3:hb_blob_destroy(lVar8);
   goto LAB_001065c8;
   while (true) {
      uVar3 = ( uint )(ushort)(*(ushort*)this << 8 | *(ushort*)this >> 8);
      uVar6 = uVar3 * 4;
      if (( ( uint )(local_60._8_4_ - (int)paVar9) < uVar6 ) || ( local_4c = local_4c + uVar3 * -4 ),(int)local_4c < 1) goto LAB_001065c3;
      uVar10 = uVar10 + 1;
      this =
      this + ( uVar6 + 2 );
      if (uVar11 == uVar10) break;
      LAB_0010658f:paVar9 = this + 2;
      if (( (ulong)local_50 < ( ulong )((long)paVar9 - local_60._0_8_) ) || ( (ulong)local_50 < ( ulong )((long)paVar9 - local_60._0_8_) )) goto LAB_001065c3;
   };
   uVar5 = *puVar2;
   LAB_001065f6:if (( ushort )(uVar5 << 8 | uVar5 >> 8) < 2) {
      hb_blob_destroy(local_38);
      LAB_00106499:hb_blob_make_immutable(lVar7);
      LAB_001064a1:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return lVar7;
      }
      goto LAB_0010667b;
   }
   cVar4 = OT::avarV2Tail::sanitize(this, (hb_sanitize_context_t*)local_68, puVar2);
   lVar8 = local_38;
   if (local_3c != 0) goto LAB_001065c3;
   hb_blob_destroy(local_38);
   local_38 = 0;
   local_50 = 0;
   local_60 = (undefined1[16])0x0;
   if (cVar4 != '\0') goto LAB_00106499;
   LAB_001065c8:hb_blob_destroy(lVar7);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      lVar8 = hb_blob_get_empty();
      return lVar8;
   }
   LAB_0010667b:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
