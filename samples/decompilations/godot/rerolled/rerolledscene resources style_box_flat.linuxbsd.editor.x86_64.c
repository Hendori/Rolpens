/* StyleBoxFlat::get_bg_color() const */undefined1  [16] __thiscallStyleBoxFlat::get_bg_color(StyleBoxFlat *this) {
   return *(undefined1(*) [16])( this + 0x2b0 );
}
/* StyleBoxFlat::get_border_color() const */undefined1  [16] __thiscallStyleBoxFlat::get_border_color(StyleBoxFlat *this) {
   return *(undefined1(*) [16])( this + 0x2d0 );
}
/* StyleBoxFlat::get_border_width_min() const */int StyleBoxFlat::get_border_width_min(StyleBoxFlat *this) {
   float fVar1;
   float fVar2;
   fVar1 = *(float*)( this + 0x2e8 );
   if (*(float*)( this + 0x2ec ) <= *(float*)( this + 0x2e8 )) {
      fVar1 = *(float*)( this + 0x2ec );
   }

   fVar2 = *(float*)( this + 0x2e0 );
   if (*(float*)( this + 0x2e4 ) <= *(float*)( this + 0x2e0 )) {
      fVar2 = *(float*)( this + 0x2e4 );
   }

   if (fVar1 <= fVar2) {
      fVar2 = fVar1;
   }

   return (int)fVar2;
}
/* StyleBoxFlat::get_border_blend() const */StyleBoxFlat StyleBoxFlat::get_border_blend(StyleBoxFlat *this) {
   return this[0x311];
}
/* StyleBoxFlat::get_corner_detail() const */undefined4 StyleBoxFlat::get_corner_detail(StyleBoxFlat *this) {
   return *(undefined4*)( this + 800 );
}
/* StyleBoxFlat::is_draw_center_enabled() const */StyleBoxFlat StyleBoxFlat::is_draw_center_enabled(StyleBoxFlat *this) {
   return this[0x310];
}
/* StyleBoxFlat::get_skew() const */undefined8 StyleBoxFlat::get_skew(StyleBoxFlat *this) {
   return *(undefined8*)( this + 0x314 );
}
/* StyleBoxFlat::get_shadow_color() const */undefined1  [16] __thiscallStyleBoxFlat::get_shadow_color(StyleBoxFlat *this) {
   return *(undefined1(*) [16])( this + 0x2c0 );
}
/* StyleBoxFlat::get_shadow_size() const */undefined4 StyleBoxFlat::get_shadow_size(StyleBoxFlat *this) {
   return *(undefined4*)( this + 0x324 );
}
/* StyleBoxFlat::get_shadow_offset() const */undefined8 StyleBoxFlat::get_shadow_offset(StyleBoxFlat *this) {
   return *(undefined8*)( this + 0x328 );
}
/* StyleBoxFlat::is_anti_aliased() const */StyleBoxFlat StyleBoxFlat::is_anti_aliased(StyleBoxFlat *this) {
   return this[0x31c];
}
/* StyleBoxFlat::get_aa_size() const */undefined4 StyleBoxFlat::get_aa_size(StyleBoxFlat *this) {
   return *(undefined4*)( this + 0x330 );
}
/* StyleBoxFlat::set_bg_color(Color const&) */void StyleBoxFlat::set_bg_color(StyleBoxFlat *this, Color *param_1) {
   undefined8 uVar1;
   uVar1 = *(undefined8*)( param_1 + 8 );
   *(undefined8*)( this + 0x2b0 ) = *(undefined8*)param_1;
   *(undefined8*)( this + 0x2b8 ) = uVar1;
   Resource::emit_changed();
   return;
}
/* StyleBoxFlat::set_border_color(Color const&) */void StyleBoxFlat::set_border_color(StyleBoxFlat *this, Color *param_1) {
   undefined8 uVar1;
   uVar1 = *(undefined8*)( param_1 + 8 );
   *(undefined8*)( this + 0x2d0 ) = *(undefined8*)param_1;
   *(undefined8*)( this + 0x2d8 ) = uVar1;
   Resource::emit_changed();
   return;
}
/* StyleBoxFlat::set_border_width_all(int) */void StyleBoxFlat::set_border_width_all(StyleBoxFlat *this, int param_1) {
   float fVar1;
   fVar1 = (float)param_1;
   for (int i = 0; i < 4; i++) {
      *(float*)( this + ( 4*i + 736 ) ) = fVar1;
   }

   Resource::emit_changed();
   return;
}
/* StyleBoxFlat::set_border_blend(bool) */void StyleBoxFlat::set_border_blend(StyleBoxFlat *this, bool param_1) {
   this[0x311] = (StyleBoxFlat)param_1;
   Resource::emit_changed();
   return;
}
/* StyleBoxFlat::set_corner_radius_all(int) */void StyleBoxFlat::set_corner_radius_all(StyleBoxFlat *this, int param_1) {
   float fVar1;
   fVar1 = (float)param_1;
   for (int i = 0; i < 4; i++) {
      *(float*)( this + ( 4*i + 768 ) ) = fVar1;
   }

   Resource::emit_changed();
   return;
}
/* StyleBoxFlat::set_expand_margin_all(float) */void StyleBoxFlat::set_expand_margin_all(StyleBoxFlat *this, float param_1) {
   for (int i = 0; i < 4; i++) {
      *(float*)( this + ( 4*i + 752 ) ) = param_1;
   }

   Resource::emit_changed();
   return;
}
/* StyleBoxFlat::set_draw_center(bool) */void StyleBoxFlat::set_draw_center(StyleBoxFlat *this, bool param_1) {
   this[0x310] = (StyleBoxFlat)param_1;
   Resource::emit_changed();
   return;
}
/* StyleBoxFlat::set_skew(Vector2) */void StyleBoxFlat::set_skew(undefined8 param_1, StyleBoxFlat *this) {
   *(undefined8*)( this + 0x314 ) = param_1;
   Resource::emit_changed();
   return;
}
/* StyleBoxFlat::set_shadow_color(Color const&) */void StyleBoxFlat::set_shadow_color(StyleBoxFlat *this, Color *param_1) {
   undefined8 uVar1;
   uVar1 = *(undefined8*)( param_1 + 8 );
   *(undefined8*)( this + 0x2c0 ) = *(undefined8*)param_1;
   *(undefined8*)( this + 0x2c8 ) = uVar1;
   Resource::emit_changed();
   return;
}
/* StyleBoxFlat::set_shadow_size(int const&) */void StyleBoxFlat::set_shadow_size(StyleBoxFlat *this, int *param_1) {
   *(int*)( this + 0x324 ) = *param_1;
   Resource::emit_changed();
   return;
}
/* StyleBoxFlat::set_shadow_offset(Vector2 const&) */void StyleBoxFlat::set_shadow_offset(StyleBoxFlat *this, Vector2 *param_1) {
   *(undefined8*)( this + 0x328 ) = *(undefined8*)param_1;
   Resource::emit_changed();
   return;
}
/* StyleBoxFlat::set_corner_detail(int const&) */void StyleBoxFlat::set_corner_detail(StyleBoxFlat *this, int *param_1) {
   int iVar1;
   iVar1 = *param_1;
   if (0x14 < iVar1) {
      iVar1 = 0x14;
   }

   if (iVar1 < 1) {
      iVar1 = 1;
   }

   *(int*)( this + 800 ) = iVar1;
   Resource::emit_changed();
   return;
}
/* StyleBoxFlat::set_aa_size(float) */void StyleBoxFlat::set_aa_size(StyleBoxFlat *this, float param_1) {
   if (_LC2 <= (double)param_1) {
      if (_LC1 < param_1) {
         param_1 = _LC1;
      }

      *(float*)( this + 0x330 ) = param_1;
      Resource::emit_changed();
      return;
   }

   *(undefined4*)( this + 0x330 ) = _LC0;
   Resource::emit_changed();
   return;
}
/* StyleBoxFlat::set_anti_aliased(bool const&) */void StyleBoxFlat::set_anti_aliased(StyleBoxFlat *this, bool *param_1) {
   this[0x31c] = ( StyleBoxFlat ) * param_1;
   Resource::emit_changed();
   Object::notify_property_list_changed();
   return;
}
/* StyleBoxFlat::get_style_margin(Side) const */undefined4 StyleBoxFlat::get_style_margin(StyleBoxFlat *this, uint param_2) {
   if (param_2 < 4) {
      return *(undefined4*)( this + (long)(int)param_2 * 4 + 0x2e0 );
   }

   _err_print_index_error("get_style_margin", "scene/resources/style_box_flat.cpp", 0x26, (long)(int)param_2, 4, "(int)p_side", "4", "", false, false);
   return 0;
}
/* StyleBoxFlat::get_border_width(Side) const */int StyleBoxFlat::get_border_width(StyleBoxFlat *this, uint param_2) {
   if (param_2 < 4) {
      return (int)*(float*)( this + (long)(int)param_2 * 4 + 0x2e0 );
   }

   _err_print_index_error("get_border_width", "scene/resources/style_box_flat.cpp", 0x55, (long)(int)param_2, 4, "(int)p_side", "4", "", false, false);
   return 0;
}
/* StyleBoxFlat::get_corner_radius(Corner) const */int StyleBoxFlat::get_corner_radius(StyleBoxFlat *this, uint param_2) {
   if (param_2 < 4) {
      return (int)*(float*)( this + (long)(int)param_2 * 4 + 0x300 );
   }

   _err_print_index_error("get_corner_radius", "scene/resources/style_box_flat.cpp", 0x7a, (long)(int)param_2, 4, "(int)p_corner", "4", "", false, false);
   return 0;
}
/* StyleBoxFlat::get_expand_margin(Side) const */undefined4 StyleBoxFlat::get_expand_margin(StyleBoxFlat *this, uint param_2) {
   if (param_2 < 4) {
      return *(undefined4*)( this + (long)(int)param_2 * 4 + 0x2f0 );
   }

   _err_print_index_error("get_expand_margin", "scene/resources/style_box_flat.cpp", 0x9d, (long)(int)param_2, 4, "(int)p_side", "4", "", false, false);
   return 0;
}
/* StyleBoxFlat::set_border_width(Side, int) */void StyleBoxFlat::set_border_width(StyleBoxFlat *this, uint param_2, int param_3) {
   if (param_2 < 4) {
      *(float*)( this + (long)(int)param_2 * 4 + 0x2e0 ) = (float)param_3;
      Resource::emit_changed();
      return;
   }

   _err_print_index_error("set_border_width", "scene/resources/style_box_flat.cpp", 0x4f, (long)(int)param_2, 4, "(int)p_side", "4", "", false, false);
   return;
}
/* StyleBoxFlat::set_corner_radius(Corner, int) */void StyleBoxFlat::set_corner_radius(StyleBoxFlat *this, uint param_2, int param_3) {
   if (param_2 < 4) {
      *(float*)( this + (long)(int)param_2 * 4 + 0x300 ) = (float)param_3;
      Resource::emit_changed();
      return;
   }

   _err_print_index_error("set_corner_radius", "scene/resources/style_box_flat.cpp", 99, (long)(int)param_2, 4, "(int)p_corner", "4", "", false, false);
   return;
}
/* StyleBoxFlat::set_expand_margin(Side, float) */void StyleBoxFlat::set_expand_margin(undefined4 param_1, StyleBoxFlat *this, uint param_3) {
   if (param_3 < 4) {
      *(undefined4*)( this + (long)(int)param_3 * 4 + 0x2f0 ) = param_1;
      Resource::emit_changed();
      return;
   }

   _err_print_index_error("set_expand_margin", "scene/resources/style_box_flat.cpp", 0x88, (long)(int)param_3, 4, "(int)p_side", "4", "", false, false);
   return;
}
/* StyleBoxFlat::get_draw_rect(Rect2 const&) const */undefined1  [16] __thiscallStyleBoxFlat::get_draw_rect(StyleBoxFlat *this, Rect2 *param_1) {
   undefined1 auVar1[16];
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   float local_38;
   float fStack_34;
   float fStack_30;
   float fStack_2c;
   fStack_30 = *(float*)( param_1 + 8 ) + *(float*)( this + 0x2f8 ) + *(float*)( this + 0x2f0 );
   fStack_2c = *(float*)( param_1 + 0xc ) + *(float*)( this + 0x2fc ) + *(float*)( this + 0x2f4 );
   local_38 = *(float*)param_1 - *(float*)( this + 0x2f0 );
   fStack_34 = *(float*)( param_1 + 4 ) - *(float*)( this + 0x2f4 );
   if (0 < *(int*)( this + 0x324 )) {
      fVar4 = (float)*(int*)( this + 0x324 );
      fVar2 = ( fStack_34 - fVar4 ) + *(float*)( this + 0x32c );
      fVar6 = fStack_30 + fVar4 + fVar4;
      fVar3 = fVar4 + fVar4 + fStack_2c;
      fVar4 = ( local_38 - fVar4 ) + *(float*)( this + 0x328 );
      if (( ( ( fStack_30 < 0.0 ) || ( fStack_2c < 0.0 ) ) || ( fVar6 < 0.0 ) ) || ( fVar3 < 0.0 )) {
         _err_print_error("merge", "./core/math/rect2.h", 0xa8, "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size.", 0, 0);
      }

      fVar3 = fVar2 + fVar3;
      if (fStack_34 <= fVar2) {
         fVar2 = fStack_34;
      }

      fVar5 = fVar4;
      if (local_38 <= fVar4) {
         fVar5 = local_38;
      }

      fVar4 = fVar4 + fVar6;
      if (fVar3 <= fStack_34 + fStack_2c) {
         fVar3 = fStack_34 + fStack_2c;
      }

      if (fVar4 <= local_38 + fStack_30) {
         fVar4 = local_38 + fStack_30;
      }

      fStack_2c = fVar3 - fVar2;
      fStack_30 = fVar4 - fVar5;
      local_38 = fVar5;
      fStack_34 = fVar2;
   }

   auVar1._4_4_ = fStack_34;
   auVar1._0_4_ = local_38;
   auVar1._8_4_ = fStack_30;
   auVar1._12_4_ = fStack_2c;
   return auVar1;
}
/* StyleBoxFlat::~StyleBoxFlat() */void StyleBoxFlat::~StyleBoxFlat(StyleBoxFlat *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = __cxa_guard_acquire;
   if (bVar1) {
      if (*(long*)( this + 0x298 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010085e;
      }

      if (*(long*)( this + 0x280 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010085e;
      }

      if (*(long*)( this + 0x268 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010085e;
      }

      if (*(long*)( this + 0x250 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010085e:Resource::~Resource((Resource*)this);
   return;
}
/* StyleBoxFlat::~StyleBoxFlat() */void StyleBoxFlat::~StyleBoxFlat(StyleBoxFlat *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = __cxa_guard_acquire;
   if (bVar1) {
      if (*(long*)( this + 0x298 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001008fe;
      }

      if (*(long*)( this + 0x280 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001008fe;
      }

      if (*(long*)( this + 0x268 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001008fe;
      }

      if (*(long*)( this + 0x250 ) != 0) {
         StringName::unref();
      }

   }

   LAB_001008fe:Resource::~Resource((Resource*)this);
   operator_delete(this, 0x338);
   return;
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
 else {
         *(undefined8*)this = 0;
      }

   }

   plVar1 = (long*)( *(long*)param_1 + -0x10 );
   if (*(long*)param_1 != 0) {
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) {
            return;
         }

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
         *(undefined8*)this = *(undefined8*)param_1;
      }

   }

   return;
}
/* CowData<Vector2>::_copy_on_write() [clone .isra.0] */void CowData<Vector2>::_copy_on_write(CowData<Vector2> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   size_t __n;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   __n = lVar2 * 8;
   if (__n != 0) {
      uVar5 = __n - 1 | __n - 1 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar5, false);
   if (puVar4 != (undefined8*)0x0) {
      *puVar4 = 1;
      puVar4[1] = lVar2;
      memcpy(puVar4 + 2, *(void**)this, __n);
      if (*(long*)this != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)this + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)this;
            *(undefined8*)this = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(undefined8**)this = puVar4 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* StyleBoxFlat::_validate_property(PropertyInfo&) const */void StyleBoxFlat::_validate_property(StyleBoxFlat *this, PropertyInfo *param_1) {
   char cVar1;
   if (this[0x31c] != (StyleBoxFlat)0x0) {
      return;
   }

   cVar1 = String::operator ==((String*)( param_1 + 8 ), "anti_aliasing_size");
   if (cVar1 != '\0') {
      *(undefined4*)( param_1 + 0x28 ) = 2;
   }

   return;
}
/* StyleBoxFlat::set_corner_radius_individual(int, int, int, int) */void StyleBoxFlat::set_corner_radius_individual(StyleBoxFlat *this, int param_1, int param_2, int param_3, int param_4) {
   *(float*)( this + 0x300 ) = (float)param_1;
   *(float*)( this + 0x304 ) = (float)param_2;
   *(float*)( this + 0x308 ) = (float)param_3;
   *(float*)( this + 0x30c ) = (float)param_4;
   Resource::emit_changed();
   return;
}
/* StyleBoxFlat::set_expand_margin_individual(float, float, float, float) */void StyleBoxFlat::set_expand_margin_individual(StyleBoxFlat *this, float param_1, float param_2, float param_3, float param_4) {
   *(float*)( this + 0x2f0 ) = param_1;
   *(float*)( this + 0x2f4 ) = param_2;
   *(float*)( this + 0x2f8 ) = param_3;
   *(float*)( this + 0x2fc ) = param_4;
   Resource::emit_changed();
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* StyleBoxFlat::StyleBoxFlat() */void StyleBoxFlat::StyleBoxFlat(StyleBoxFlat *this) {
   undefined8 uVar1;
   undefined8 uVar2;
   StyleBox::StyleBox((StyleBox*)this);
   uVar2 = _UNK_00119348;
   uVar1 = __LC30;
   *(undefined8*)( this + 0x314 ) = 0;
   *(undefined***)this = &PTR__initialize_classv_00118940;
   *(undefined8*)( this + 0x2b0 ) = uVar1;
   *(undefined8*)( this + 0x2b8 ) = uVar2;
   uVar2 = _UNK_00119358;
   uVar1 = __LC31;
   *(undefined2*)( this + 0x310 ) = 1;
   *(undefined8*)( this + 0x2c0 ) = uVar1;
   *(undefined8*)( this + 0x2c8 ) = uVar2;
   uVar2 = _UNK_00119368;
   uVar1 = __LC32;
   this[0x31c] = (StyleBoxFlat)0x1;
   *(undefined8*)( this + 0x2d0 ) = uVar1;
   *(undefined8*)( this + 0x2d8 ) = uVar2;
   *(undefined8*)( this + 800 ) = 8;
   *(undefined8*)( this + 0x328 ) = 0;
   *(undefined4*)( this + 0x330 ) = 0x3f800000;
   for (int i = 0; i < 3; i++) {
      *(undefined1(*) [16])( this + ( 16*i + 736 ) ) = (undefined1[16])0;
   }

   return;
}
/* StyleBoxFlat::_bind_methods() */void StyleBoxFlat::_bind_methods(void) {
   undefined *puVar1;
   undefined *puVar2;
   undefined *puVar3;
   undefined *puVar4;
   MethodBind *pMVar5;
   uint uVar6;
   long in_FS_OFFSET;
   undefined8 local_138;
   undefined8 local_130;
   undefined8 local_128;
   long local_120;
   long local_118;
   long local_110;
   char *local_108;
   undefined8 local_100;
   char *local_f8;
   undefined8 local_f0;
   char *local_c8;
   undefined8 local_c0;
   undefined *local_b8;
   undefined *puStack_b0;
   undefined8 local_a8;
   undefined *local_98;
   undefined *puStack_90;
   undefined8 local_88;
   char *local_78;
   undefined *puStack_70;
   undefined8 local_68;
   char **local_58;
   undefined1 auStack_50[16];
   long local_40;
   puVar4 = PTR__LC47_001193a8;
   puVar3 = PTR__LC46_001193a0;
   puVar2 = PTR__LC45_00119398;
   puVar1 = PTR__LC43_00119390;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_c0 = 0;
   local_c8 = "color";
   uVar6 = ( uint ) & local_58;
   local_58 = &local_c8;
   D_METHODP((char*)&local_f8, (char***)"set_bg_color", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<StyleBoxFlat,Color_const&>(set_bg_color);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"get_bg_color", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<StyleBoxFlat,Color>(get_bg_color);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   local_c0 = 0;
   local_c8 = "color";
   local_58 = &local_c8;
   D_METHODP((char*)&local_f8, (char***)"set_border_color", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<StyleBoxFlat,Color_const&>(set_border_color);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"get_border_color", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<StyleBoxFlat,Color>(get_border_color);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   local_c0 = 0;
   local_c8 = "width";
   local_58 = &local_c8;
   D_METHODP((char*)&local_f8, (char***)"set_border_width_all", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<StyleBoxFlat,int>(set_border_width_all);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"get_border_width_min", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<StyleBoxFlat,int>(get_border_width_min);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   local_68 = 0;
   local_78 = puVar1;
   puStack_70 = puVar4;
   auStack_50._0_8_ = &puStack_70;
   local_58 = &local_78;
   D_METHODP((char*)&local_f8, (char***)"set_border_width", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<StyleBoxFlat,Side,int>(set_border_width);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   puStack_70 = (undefined*)0x0;
   local_78 = "margin";
   local_58 = &local_78;
   D_METHODP((char*)&local_f8, (char***)"get_border_width", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<StyleBoxFlat,int,Side>(get_border_width);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   puStack_70 = (undefined*)0x0;
   local_78 = "blend";
   local_58 = &local_78;
   D_METHODP((char*)&local_f8, (char***)"set_border_blend", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<StyleBoxFlat,bool>(set_border_blend);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"get_border_blend", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<StyleBoxFlat,bool>(get_border_blend);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   puStack_70 = (undefined*)0x0;
   local_78 = "radius";
   local_58 = &local_78;
   D_METHODP((char*)&local_f8, (char***)"set_corner_radius_all", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<StyleBoxFlat,int>(set_corner_radius_all);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   local_88 = 0;
   local_98 = puVar2;
   puStack_90 = puVar3;
   auStack_50._0_8_ = &puStack_90;
   local_58 = &local_98;
   D_METHODP((char*)&local_f8, (char***)"set_corner_radius", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<StyleBoxFlat,Corner,int>(set_corner_radius);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   puStack_70 = (undefined*)0x0;
   local_78 = "corner";
   local_58 = &local_78;
   D_METHODP((char*)&local_f8, (char***)"get_corner_radius", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<StyleBoxFlat,int,Corner>(get_corner_radius);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   local_a8 = 0;
   local_b8 = puVar1;
   puStack_b0 = &_LC44;
   auStack_50._0_8_ = &puStack_b0;
   local_58 = &local_b8;
   D_METHODP((char*)&local_f8, (char***)"set_expand_margin", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<StyleBoxFlat,Side,float>(set_expand_margin);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   local_78 = "size";
   puStack_70 = (undefined*)0x0;
   local_58 = &local_78;
   D_METHODP((char*)&local_f8, (char***)"set_expand_margin_all", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<StyleBoxFlat,float>(set_expand_margin_all);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   puStack_70 = (undefined*)0x0;
   local_78 = "margin";
   local_58 = &local_78;
   D_METHODP((char*)&local_f8, (char***)"get_expand_margin", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<StyleBoxFlat,float,Side>(get_expand_margin);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   puStack_70 = (undefined*)0x0;
   local_78 = "draw_center";
   local_58 = &local_78;
   D_METHODP((char*)&local_f8, (char***)"set_draw_center", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<StyleBoxFlat,bool>(set_draw_center);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"is_draw_center_enabled", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<StyleBoxFlat,bool>(is_draw_center_enabled);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   puStack_70 = (undefined*)0x0;
   local_78 = "skew";
   local_58 = &local_78;
   D_METHODP((char*)&local_f8, (char***)"set_skew", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<StyleBoxFlat,Vector2>(set_skew);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"get_skew", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<StyleBoxFlat,Vector2>(get_skew);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   puStack_70 = (undefined*)0x0;
   local_78 = "color";
   local_58 = &local_78;
   D_METHODP((char*)&local_f8, (char***)"set_shadow_color", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<StyleBoxFlat,Color_const&>(set_shadow_color);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"get_shadow_color", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<StyleBoxFlat,Color>(get_shadow_color);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   local_78 = "size";
   puStack_70 = (undefined*)0x0;
   local_58 = &local_78;
   D_METHODP((char*)&local_f8, (char***)"set_shadow_size", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<StyleBoxFlat,int_const&>(set_shadow_size);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"get_shadow_size", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<StyleBoxFlat,int>(get_shadow_size);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   puStack_70 = (undefined*)0x0;
   local_78 = "offset";
   local_58 = &local_78;
   D_METHODP((char*)&local_f8, (char***)"set_shadow_offset", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<StyleBoxFlat,Vector2_const&>(set_shadow_offset);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"get_shadow_offset", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<StyleBoxFlat,Vector2>(get_shadow_offset);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   puStack_70 = (undefined*)0x0;
   local_78 = "anti_aliased";
   local_58 = &local_78;
   D_METHODP((char*)&local_f8, (char***)"set_anti_aliased", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<StyleBoxFlat,bool_const&>(set_anti_aliased);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"is_anti_aliased", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<StyleBoxFlat,bool>(is_anti_aliased);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   local_78 = "size";
   puStack_70 = (undefined*)0x0;
   local_58 = &local_78;
   D_METHODP((char*)&local_f8, (char***)"set_aa_size", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<StyleBoxFlat,float>(set_aa_size);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"get_aa_size", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<StyleBoxFlat,float>(get_aa_size);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   puStack_70 = (undefined*)0x0;
   local_78 = "detail";
   local_58 = &local_78;
   D_METHODP((char*)&local_f8, (char***)"set_corner_detail", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<StyleBoxFlat,int_const&>(set_corner_detail);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   D_METHODP((char*)&local_f8, (char***)"get_corner_detail", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<StyleBoxFlat,int>(get_corner_detail);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_f8);
   _scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_120 = 0;
   local_f8 = "";
   local_128 = 0;
   local_f0 = 0;
   String::parse_latin1((StrRange*)&local_128);
   local_130 = 0;
   local_f8 = "bg_color";
   local_f0 = 8;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 0x14, (StrRange*)&local_130, 0, (StrRange*)&local_128, 6, &local_120);
   local_108 = "StyleBoxFlat";
   local_138 = 0;
   local_100 = 0xc;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, -1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00101f30;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00101f30;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_00101f30:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "draw_center";
   local_130 = 0;
   local_f0 = 0xb;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 1, (StrRange*)&local_130, 0, (StrRange*)&local_128, 6, &local_120);
   local_108 = "StyleBoxFlat";
   local_138 = 0;
   local_100 = 0xc;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, -1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001020c4;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001020c4;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_001020c4:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "skew";
   local_130 = 0;
   local_f0 = 4;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 5, (StrRange*)&local_130, 0, (StrRange*)&local_128, 6, &local_120);
   local_108 = "StyleBoxFlat";
   local_138 = 0;
   local_100 = 0xc;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, -1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00102258;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00102258;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_00102258:local_108 = (char*)0x0;
   local_f8 = "border_width_";
   local_f0 = 0xd;
   String::parse_latin1((StrRange*)&local_108);
   local_f8 = "Border Width";
   local_110 = 0;
   local_f0 = 0xc;
   String::parse_latin1((StrRange*)&local_110);
   local_f8 = "StyleBoxFlat";
   local_118 = 0;
   local_f0 = 0xc;
   String::parse_latin1((StrRange*)&local_118);
   StringName::StringName((StringName*)&local_f8, (String*)&local_118, false);
   ClassDB::add_property_group((StringName*)&local_f8, (String*)&local_110, (String*)&local_108, 0);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   _scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "0,100,1,or_greater,suffix:px";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0x1c;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "border_width_left";
   local_130 = 0;
   local_f0 = 0x11;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 2, (StrRange*)&local_130, 1, (StrRange*)&local_128, 6, &local_120);
   local_108 = "StyleBoxFlat";
   local_138 = 0;
   local_100 = 0xc;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, 0);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001024d4;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001024d4;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_001024d4:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "0,100,1,or_greater,suffix:px";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0x1c;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "border_width_top";
   local_130 = 0;
   local_f0 = 0x10;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 2, (StrRange*)&local_130, 1, (StrRange*)&local_128, 6, &local_120);
   local_108 = "StyleBoxFlat";
   local_138 = 0;
   local_100 = 0xc;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, 1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010266d;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010266d;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_0010266d:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "0,100,1,or_greater,suffix:px";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0x1c;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "border_width_right";
   local_130 = 0;
   local_f0 = 0x12;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 2, (StrRange*)&local_130, 1, (StrRange*)&local_128, 6, &local_120);
   local_108 = "StyleBoxFlat";
   local_138 = 0;
   local_100 = 0xc;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, 2);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00102805;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00102805;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_00102805:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "0,100,1,or_greater,suffix:px";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0x1c;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "border_width_bottom";
   local_130 = 0;
   local_f0 = 0x13;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 2, (StrRange*)&local_130, 1, (StrRange*)&local_128, 6, &local_120);
   local_108 = "StyleBoxFlat";
   local_138 = 0;
   local_100 = 0xc;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, 3);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010299c;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010299c;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_0010299c:local_108 = (char*)0x0;
   local_f8 = "border_";
   local_f0 = 7;
   String::parse_latin1((StrRange*)&local_108);
   local_f8 = "Border";
   local_110 = 0;
   local_f0 = 6;
   String::parse_latin1((StrRange*)&local_110);
   local_f8 = "StyleBoxFlat";
   local_118 = 0;
   local_f0 = 0xc;
   String::parse_latin1((StrRange*)&local_118);
   StringName::StringName((StringName*)&local_f8, (String*)&local_118, false);
   ClassDB::add_property_group((StringName*)&local_f8, (String*)&local_110, (String*)&local_108, 0);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   _scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "border_color";
   local_130 = 0;
   local_f0 = 0xc;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 0x14, (StrRange*)&local_130, 0, (StrRange*)&local_128, 6, &local_120);
   local_108 = "StyleBoxFlat";
   local_138 = 0;
   local_100 = 0xc;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, -1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00102c17;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00102c17;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_00102c17:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "border_blend";
   local_130 = 0;
   local_f0 = 0xc;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 1, (StrRange*)&local_130, 0, (StrRange*)&local_128, 6, &local_120);
   local_108 = "StyleBoxFlat";
   local_138 = 0;
   local_100 = 0xc;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, -1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00102dac;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00102dac;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_00102dac:local_108 = (char*)0x0;
   local_f8 = "corner_radius_";
   local_f0 = 0xe;
   String::parse_latin1((StrRange*)&local_108);
   local_f8 = "Corner Radius";
   local_110 = 0;
   local_f0 = 0xd;
   String::parse_latin1((StrRange*)&local_110);
   local_f8 = "StyleBoxFlat";
   local_118 = 0;
   local_f0 = 0xc;
   String::parse_latin1((StrRange*)&local_118);
   StringName::StringName((StringName*)&local_f8, (String*)&local_118, false);
   ClassDB::add_property_group((StringName*)&local_f8, (String*)&local_110, (String*)&local_108, 0);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   _scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "0,100,1,or_greater,suffix:px";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0x1c;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "corner_radius_top_left";
   local_130 = 0;
   local_f0 = 0x16;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 2, (StrRange*)&local_130, 1, (StrRange*)&local_128, 6, &local_120);
   local_108 = "StyleBoxFlat";
   local_138 = 0;
   local_100 = 0xc;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, 0);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103029;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103029;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_00103029:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "0,100,1,or_greater,suffix:px";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0x1c;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "corner_radius_top_right";
   local_130 = 0;
   local_f0 = 0x17;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 2, (StrRange*)&local_130, 1, (StrRange*)&local_128, 6, &local_120);
   local_108 = "StyleBoxFlat";
   local_138 = 0;
   local_100 = 0xc;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, 1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001031c1;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001031c1;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_001031c1:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "0,100,1,or_greater,suffix:px";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0x1c;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "corner_radius_bottom_right";
   local_130 = 0;
   local_f0 = 0x1a;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 2, (StrRange*)&local_130, 1, (StrRange*)&local_128, 6, &local_120);
   local_108 = "StyleBoxFlat";
   local_138 = 0;
   local_100 = 0xc;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, 2);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103358;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103358;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_00103358:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "0,100,1,or_greater,suffix:px";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0x1c;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "corner_radius_bottom_left";
   local_130 = 0;
   local_f0 = 0x19;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 2, (StrRange*)&local_130, 1, (StrRange*)&local_128, 6, &local_120);
   local_108 = "StyleBoxFlat";
   local_138 = 0;
   local_100 = 0xc;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, 3);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001034ef;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001034ef;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_001034ef:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "1,20,1";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 6;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "corner_detail";
   local_130 = 0;
   local_f0 = 0xd;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 2, (StrRange*)&local_130, 1, (StrRange*)&local_128, 6, &local_120);
   local_108 = "StyleBoxFlat";
   local_138 = 0;
   local_100 = 0xc;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, -1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103687;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103687;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_00103687:local_108 = (char*)0x0;
   local_f8 = "expand_margin_";
   local_f0 = 0xe;
   String::parse_latin1((StrRange*)&local_108);
   local_f8 = "Expand Margins";
   local_110 = 0;
   local_f0 = 0xe;
   String::parse_latin1((StrRange*)&local_110);
   local_f8 = "StyleBoxFlat";
   local_118 = 0;
   local_f0 = 0xc;
   String::parse_latin1((StrRange*)&local_118);
   StringName::StringName((StringName*)&local_f8, (String*)&local_118, false);
   ClassDB::add_property_group((StringName*)&local_f8, (String*)&local_110, (String*)&local_108, 0);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   _scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "0,100,1,or_greater,suffix:px";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0x1c;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "expand_margin_left";
   local_130 = 0;
   local_f0 = 0x12;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 3, (StrRange*)&local_130, 1, (StrRange*)&local_128, 6, &local_120);
   local_108 = "StyleBoxFlat";
   local_138 = 0;
   local_100 = 0xc;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, 0);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103904;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103904;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_00103904:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "0,100,1,or_greater,suffix:px";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0x1c;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "expand_margin_top";
   local_130 = 0;
   local_f0 = 0x11;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 3, (StrRange*)&local_130, 1, (StrRange*)&local_128, 6, &local_120);
   local_108 = "StyleBoxFlat";
   local_138 = 0;
   local_100 = 0xc;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, 1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103a9c;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103a9c;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_00103a9c:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "0,100,1,or_greater,suffix:px";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0x1c;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "expand_margin_right";
   local_130 = 0;
   local_f0 = 0x13;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 3, (StrRange*)&local_130, 1, (StrRange*)&local_128, 6, &local_120);
   local_108 = "StyleBoxFlat";
   local_138 = 0;
   local_100 = 0xc;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, 2);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103c33;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103c33;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_00103c33:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "0,100,1,or_greater,suffix:px";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0x1c;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "expand_margin_bottom";
   local_130 = 0;
   local_f0 = 0x14;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 3, (StrRange*)&local_130, 1, (StrRange*)&local_128, 6, &local_120);
   local_108 = "StyleBoxFlat";
   local_138 = 0;
   local_100 = 0xc;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, 3);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103dca;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103dca;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_00103dca:local_108 = (char*)0x0;
   local_f8 = "shadow_";
   local_f0 = 7;
   String::parse_latin1((StrRange*)&local_108);
   local_f8 = "Shadow";
   local_110 = 0;
   local_f0 = 6;
   String::parse_latin1((StrRange*)&local_110);
   local_f8 = "StyleBoxFlat";
   local_118 = 0;
   local_f0 = 0xc;
   String::parse_latin1((StrRange*)&local_118);
   StringName::StringName((StringName*)&local_f8, (String*)&local_118, false);
   ClassDB::add_property_group((StringName*)&local_f8, (String*)&local_110, (String*)&local_108, 0);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   _scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "shadow_color";
   local_130 = 0;
   local_f0 = 0xc;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 0x14, (StrRange*)&local_130, 0, (StrRange*)&local_128, 6, &local_120);
   local_108 = "StyleBoxFlat";
   local_138 = 0;
   local_100 = 0xc;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, -1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104046;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104046;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_00104046:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "0,100,1,or_greater,suffix:px";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0x1c;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "shadow_size";
   local_130 = 0;
   local_f0 = 0xb;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 2, (StrRange*)&local_130, 1, (StrRange*)&local_128, 6, &local_120);
   local_108 = "StyleBoxFlat";
   local_138 = 0;
   local_100 = 0xc;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, -1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001041df;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001041df;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_001041df:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "suffix:px";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 9;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "shadow_offset";
   local_130 = 0;
   local_f0 = 0xd;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 5, (StrRange*)&local_130, 0, (StrRange*)&local_128, 6, &local_120);
   local_108 = "StyleBoxFlat";
   local_138 = 0;
   local_100 = 0xc;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, -1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104374;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104374;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_00104374:local_108 = (char*)0x0;
   local_f8 = "anti_aliasing_";
   local_f0 = 0xe;
   String::parse_latin1((StrRange*)&local_108);
   local_f8 = "Anti Aliasing";
   local_110 = 0;
   local_f0 = 0xd;
   String::parse_latin1((StrRange*)&local_110);
   local_f8 = "StyleBoxFlat";
   local_118 = 0;
   local_f0 = 0xc;
   String::parse_latin1((StrRange*)&local_118);
   StringName::StringName((StringName*)&local_f8, (String*)&local_118, false);
   ClassDB::add_property_group((StringName*)&local_f8, (String*)&local_110, (String*)&local_108, 0);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   _scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "anti_aliasing";
   local_130 = 0;
   local_f0 = 0xd;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 1, (StrRange*)&local_130, 0, (StrRange*)&local_128, 6, &local_120);
   local_108 = "StyleBoxFlat";
   local_138 = 0;
   local_100 = 0xc;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, -1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001045ef;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001045ef;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_001045ef:_scs_create((char*)&local_110, true);
   _scs_create((char*)&local_118, true);
   local_f8 = "0.01,10,0.001,suffix:px";
   local_120 = 0;
   local_128 = 0;
   local_f0 = 0x17;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = "anti_aliasing_size";
   local_130 = 0;
   local_f0 = 0x12;
   String::parse_latin1((StrRange*)&local_130);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 3, (StrRange*)&local_130, 1, (StrRange*)&local_128, 6, &local_120);
   local_108 = "StyleBoxFlat";
   local_138 = 0;
   local_100 = 0xc;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_108, (String*)&local_138, false);
   ClassDB::add_property((StringName*)&local_108, (PropertyInfo*)&local_f8, (StringName*)&local_118, (StringName*)&local_110, -1);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (StringName::configured != '\0') {
      if (local_120 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104786;
      }

      if (local_118 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104786;
      }

      if (local_110 != 0) {
         StringName::unref();
      }

   }

   LAB_00104786:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* StyleBoxFlat::draw(RID, Rect2 const&) const */void StyleBoxFlat::draw(StyleBoxFlat *this, undefined8 param_2, undefined8 *param_3) {
   Color *pCVar1;
   uint uVar2;
   byte bVar3;
   int iVar4;
   long lVar5;
   long *plVar6;
   long lVar7;
   StyleBoxFlat SVar8;
   StyleBoxFlat SVar9;
   Rect2 *pRVar10;
   StyleBoxFlat SVar11;
   StyleBoxFlat SVar12;
   long in_FS_OFFSET;
   uint uVar13;
   uint uVar14;
   uint uVar15;
   uint uVar16;
   float fVar17;
   float fVar18;
   float extraout_XMM0_Da;
   float extraout_XMM0_Db;
   undefined1 auVar19[16];
   float fVar20;
   float fVar21;
   undefined8 uVar22;
   undefined1 auVar23[16];
   float fVar24;
   float fVar25;
   float fVar26;
   float fVar27;
   float fVar28;
   float fVar29;
   float fVar30;
   float fVar31;
   float fVar32;
   float fVar33;
   float fVar34;
   float fVar35;
   float fVar36;
   Rect2 *pRVar37;
   Color *pCVar38;
   Vector *local_1f8;
   Vector *local_1f0;
   float local_1e8;
   StyleBoxFlat *local_1d8;
   Rect2 *local_1c8;
   Vector local_168[8];
   long local_160;
   Vector local_158[8];
   long local_150;
   Vector local_148[8];
   long local_140;
   undefined1 local_138[8];
   long local_130;
   undefined1 local_128[8];
   long local_120;
   undefined1 local_118[8];
   long local_110;
   undefined8 local_108;
   uint uStack_100;
   undefined4 uStack_fc;
   undefined8 local_f8;
   ulong uStack_f0;
   undefined8 local_e8;
   ulong uStack_e0;
   float local_d8;
   float local_d4;
   float local_d0;
   float local_cc;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined1 local_a8[8];
   uint uStack_a0;
   uint uStack_9c;
   undefined1 local_98[8];
   float fStack_90;
   float fStack_8c;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   float fStack_50;
   float fStack_4c;
   long local_40;
   SVar8 = (StyleBoxFlat)0x1;
   fVar17 = *(float*)( this + 0x2e0 );
   iVar4 = *(int*)( this + 0x324 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( ( fVar17 <= 0.0 ) && ( *(float*)( this + 0x2e4 ) <= 0.0 ) ) && ( *(float*)( this + 0x2e8 ) <= 0.0 ) ) && ( ( *(float*)( this + 0x2ec ) <= 0.0 && ( SVar8 = ( StyleBoxFlat )(( (byte)this[0x310] ^ 1 ) & iVar4 < 1) ),SVar8 != (StyleBoxFlat)0x0 ) )) goto LAB_00105490;
   fVar25 = *(float*)( this + 0x2f0 );
   fVar20 = *(float*)( this + 0x2f8 ) + fVar25 + *(float*)( param_3 + 1 );
   if (ABS(fVar20) < _LC133) goto LAB_00105490;
   fVar26 = *(float*)( this + 0x2f4 );
   fVar24 = *(float*)( this + 0x2fc ) + fVar26 + *(float*)( (long)param_3 + 0xc );
   if (ABS(fVar24) < _LC133) goto LAB_00105490;
   local_d8 = *(float*)( this + 0x300 );
   uVar22 = *param_3;
   local_d4 = *(float*)( this + 0x304 );
   local_d0 = *(float*)( this + 0x308 );
   local_cc = *(float*)( this + 0x30c );
   if (( ( 0.0 < local_d8 ) || ( 0.0 < local_d4 ) ) || ( ( 0.0 < local_d0 || ( 0.0 < local_cc ) ) )) {
      LAB_00104acc:SVar12 = this[0x31c];
      bVar3 = (byte)SVar12 ^ 1;
      SVar9 = ( StyleBoxFlat )((byte)SVar8 & bVar3);
   }
 else {
      bVar3 = Vector2::is_zero_approx();
      if (bVar3 == 0) {
         fVar17 = *(float*)( this + 0x2e0 );
         local_d8 = *(float*)( this + 0x300 );
         local_d4 = *(float*)( this + 0x304 );
         local_d0 = *(float*)( this + 0x308 );
         local_cc = *(float*)( this + 0x30c );
         goto LAB_00104acc;
      }

      SVar12 = (StyleBoxFlat)0x0;
      local_d0 = *(float*)( this + 0x308 );
      local_d8 = *(float*)( this + 0x300 );
      fVar17 = *(float*)( this + 0x2e0 );
      local_cc = *(float*)( this + 0x30c );
      local_d4 = *(float*)( this + 0x304 );
      SVar9 = SVar8;
   }

   local_1e8 = _LC35;
   uStack_100 = *(uint*)( this + 0x2d8 );
   uStack_fc = 0;
   local_108 = *(undefined8*)( this + 0x2d0 );
   SVar11 = this[0x311];
   if (this[0x311] != (StyleBoxFlat)0x0) {
      SVar11 = SVar8;
   }

   if (this[0x310] == (StyleBoxFlat)0x0) {
      uStack_f0 = (ulong)uStack_100;
      local_f8 = local_108;
   }
 else {
      local_f8 = *(undefined8*)( this + 0x2b0 );
      uStack_f0 = *(ulong*)( this + 0x2b8 );
   }

   if (SVar11 == (StyleBoxFlat)0x0) {
      local_e8 = *(undefined8*)( this + 0x2d0 );
      uStack_e0 = *(ulong*)( this + 0x2d8 );
   }
 else {
      local_e8 = local_f8;
      uStack_e0 = uStack_f0;
   }

   fVar35 = *(float*)( this + 0x2ec );
   fVar18 = *(float*)( this + 0x2e4 );
   fVar21 = (float)( -(uint)(0.0 < fVar20) & (uint)fVar20 );
   if (fVar24 <= 0.0) {
      fVar35 = 0.0;
      fVar32 = 0.0;
      fVar18 = 0.0;
   }
 else {
      fVar32 = fVar24 / ( fVar18 + fVar35 );
      if (fVar32 <= _LC35) {
         fVar18 = fVar18 * fVar32;
         fVar35 = fVar35 * fVar32;
      }

      if (fVar24 <= fVar18) {
         fVar18 = fVar24;
      }

      if (fVar24 <= fVar35) {
         fVar35 = fVar24;
      }

      fVar32 = fVar24;
      if (_LC131 <= fVar18) {
         fVar18 = _LC131;
      }

   }

   fVar28 = (float)( (uint)fVar35 ^ _LC134 );
   if (_LC131 <= fVar35) {
      fVar28 = _LC132;
      fVar35 = _LC131;
   }

   fVar36 = *(float*)( this + 0x2e8 );
   fVar33 = fVar21 / ( fVar17 + fVar36 );
   if (fVar33 <= _LC35) {
      fVar17 = fVar17 * fVar33;
      fVar36 = fVar36 * fVar33;
   }

   if (fVar21 <= fVar36) {
      fVar36 = fVar21;
   }

   if (fVar21 <= fVar17) {
      fVar17 = fVar21;
   }

   if (_LC131 <= fVar17) {
      fVar17 = _LC131;
   }

   fVar33 = (float)( (uint)fVar36 ^ _LC134 );
   if (_LC131 <= fVar36) {
      fVar36 = _LC131;
      fVar33 = _LC132;
   }

   fVar35 = fVar32 - fVar35;
   fVar34 = fVar32 - fVar18;
   fVar27 = fVar32 / ( local_d4 + local_d0 );
   fVar30 = local_d4;
   fVar31 = local_d0;
   if (fVar27 <= _LC35) {
      fVar30 = local_d4 * fVar27;
      fVar31 = fVar27 * local_d0;
   }

   if (fVar35 <= fVar30) {
      fVar30 = fVar35;
   }

   if (fVar34 <= fVar31) {
      fVar31 = fVar34;
   }

   if (_LC131 <= fVar30) {
      fVar30 = _LC131;
   }

   if (_LC131 <= fVar31) {
      fVar31 = _LC131;
   }

   fVar32 = fVar32 / ( local_d8 + local_cc );
   fVar27 = local_d8;
   fVar29 = local_cc;
   if (fVar32 <= _LC35) {
      fVar27 = local_d8 * fVar32;
      fVar29 = fVar32 * local_cc;
   }

   if (fVar35 <= fVar27) {
      fVar27 = fVar35;
   }

   if (fVar34 <= fVar29) {
      fVar29 = fVar34;
   }

   if (_LC131 <= fVar27) {
      fVar27 = _LC131;
   }

   if (_LC131 <= fVar29) {
      fVar29 = _LC131;
   }

   fVar35 = fVar21 - fVar17;
   fVar36 = fVar21 - fVar36;
   fVar32 = fVar21 / ( local_d4 + local_d8 );
   if (fVar32 <= _LC35) {
      local_d8 = local_d8 * fVar32;
      local_d4 = local_d4 * fVar32;
   }

   if (fVar36 <= local_d8) {
      local_d8 = fVar36;
   }

   if (fVar35 <= local_d4) {
      local_d4 = fVar35;
   }

   if (fVar27 <= local_d8) {
      local_d8 = fVar27;
   }

   if (fVar30 <= local_d4) {
      local_d4 = fVar30;
   }

   fVar21 = fVar21 / ( local_d0 + local_cc );
   if (fVar21 <= _LC35) {
      local_cc = local_cc * fVar21;
      local_d0 = local_d0 * fVar21;
   }

   if (fVar35 <= local_d0) {
      local_d0 = fVar35;
   }

   if (fVar36 <= local_cc) {
      local_cc = fVar36;
   }

   if (fVar31 <= local_d0) {
      local_d0 = fVar31;
   }

   if (fVar29 <= local_cc) {
      local_cc = fVar29;
   }

   fVar25 = (float)uVar22 - fVar25;
   fVar26 = (float)( (ulong)uVar22 >> 0x20 ) - fVar26;
   fVar21 = fVar25 + fVar17;
   fVar32 = fVar26 + fVar18;
   fVar35 = ( fVar33 - fVar17 ) + fVar20;
   fVar17 = ( fVar28 - fVar18 ) + fVar24;
   uStack_c0 = CONCAT44(fVar17, fVar35);
   local_c8 = CONCAT44(fVar32, fVar21);
   uVar22 = CONCAT44(fVar24, fVar20);
   local_b8 = CONCAT44(fVar26, fVar25);
   uStack_b0 = uVar22;
   if (SVar12 != (StyleBoxFlat)0x0) {
      plVar6 = (long*)OS::get_singleton();
      lVar7 = ( **(code**)( *plVar6 + 0x1d0 ) )(plVar6);
      if (( lVar7 != 0 ) && ( lVar7 = __dynamic_cast(lVar7, &Object::typeinfo, &SceneTree::typeinfo, 0) ),lVar7 != 0) {
         Viewport::get_stretch_transform();
         Transform2D::get_scale();
         local_1e8 = extraout_XMM0_Da;
         if (extraout_XMM0_Db <= extraout_XMM0_Da) {
            local_1e8 = extraout_XMM0_Db;
         }

      }

      lVar7 = 0;
      local_1e8 = *(float*)( this + 0x330 ) / local_1e8;
      LAB_00105984:do {
         fVar18 = *(float*)( this + lVar7 * 4 + 0x2e0 );
         while (0.0 < fVar18) {
            local_b8._4_4_ = (float)( (ulong)local_b8 >> 0x20 );
            fVar18 = 0.0 - local_1e8;
            uStack_b0._4_4_ = (float)( (ulong)uStack_b0 >> 0x20 );
            if (lVar7 == 3) {
               uStack_b0 = CONCAT44(uStack_b0._4_4_ + fVar18, (float)uStack_b0 + 0.0);
               goto LAB_00104e31;
            }

            if (lVar7 == 2) {
               lVar7 = 3;
               uStack_b0 = CONCAT44(uStack_b0._4_4_ + 0.0, fVar18 + (float)uStack_b0);
               goto LAB_00105984;
            }

            if (lVar7 == 1) {
               lVar7 = 2;
               uStack_b0 = CONCAT44(fVar18 + uStack_b0._4_4_, (float)uStack_b0 + 0.0);
               local_b8 = CONCAT44(local_b8._4_4_ + local_1e8, (float)local_b8);
               goto LAB_00105984;
            }

            lVar7 = 1;
            local_b8 = CONCAT44(local_b8._4_4_, (float)local_b8 + local_1e8);
            uStack_b0 = CONCAT44(uStack_b0._4_4_ + 0.0, fVar18 + (float)uStack_b0);
            fVar18 = *(float*)( this + 0x2e4 );
         }
;
         lVar7 = lVar7 + 1;
      }
 while ( lVar7 != 4 );
   }

   LAB_00104e31:local_160 = 0;
   local_150 = 0;
   local_140 = 0;
   local_130 = 0;
   if (0 < iVar4) {
      local_58 = *(undefined8*)( this + 0x2c0 );
      pCVar1 = (Color*)( this + 0x2c0 );
      fStack_4c = 0.0;
      local_78 = CONCAT44(fVar26 + *(float*)( this + 0x32c ), fVar25 + *(float*)( this + 0x328 ));
      fVar18 = (float)*(int*)( this + 0x324 );
      uStack_60 = CONCAT44(fVar18 + fVar18 + fVar24, fVar20 + fVar18 + fVar18);
      local_68 = CONCAT44(( fVar26 - fVar18 ) + *(float*)( this + 0x32c ), ( fVar25 - fVar18 ) + *(float*)( this + 0x328 ));
      fStack_50 = *(float*)( this + 0x2c8 );
      uStack_70 = uVar22;
      draw_rounded_rectangle(local_168, local_158, local_148, (Rect2*)&local_78, &local_d8, (Rect2*)&local_68, (Rect2*)&local_78, pCVar1, (Color*)&local_58, *(int*)( this + 800 ), this + 0x314, false);
      if (this[0x310] != (StyleBoxFlat)0x0) {
         draw_rounded_rectangle(local_168, local_158, local_148, (Rect2*)&local_78, &local_d8, (Rect2*)&local_78, (Rect2*)&local_78, pCVar1, pCVar1, *(int*)( this + 800 ), this + 0x314, true);
      }

   }

   local_1f0 = local_158;
   local_1f8 = local_168;
   if (SVar9 == (StyleBoxFlat)0x0) {
      SVar9 = this[0x310];
      if (SVar9 == (StyleBoxFlat)0x0) {
         LAB_00105591:if (SVar12 == (StyleBoxFlat)0x0) goto LAB_0010524f;
         SVar9 = this[0x310];
      }
 else if (( SVar11 != (StyleBoxFlat)0x0 ) || ( bVar3 != 0 )) goto LAB_00105551;
      uVar2 = _LC134;
      fVar18 = local_1e8 * (float)_LC135;
      if (SVar8 == (StyleBoxFlat)0x0) {
         _local_a8 = (undefined1[16])0x0;
         _local_98 = (undefined1[16])0x0;
         fVar28 = fVar18;
         fVar36 = fVar18;
         fVar33 = local_1e8;
         fVar30 = local_1e8;
         fVar31 = local_1e8;
         fVar27 = local_1e8;
         fVar34 = fVar18;
         fVar29 = fVar18;
         if (SVar9 != (StyleBoxFlat)0x0) {
            LAB_00104f1c:fVar18 = fVar34 + fVar28 + fVar35;
            fVar28 = fVar29 + fVar36 + fVar17;
            local_78 = CONCAT44(fVar32 - fVar29, fVar21 - fVar34);
            uStack_70 = CONCAT44(fVar28, fVar18);
            iVar4 = *(int*)( this + 800 );
            uStack_60 = CONCAT44(( (float)( (uint)fVar27 ^ _LC134 ) - fVar30 ) + fVar28, ( (float)( (uint)fVar31 ^ _LC134 ) - fVar33 ) + fVar18);
            local_68 = CONCAT44(( fVar32 - fVar29 ) + fVar30, ( fVar21 - fVar34 ) + fVar33);
            if (SVar11 == (StyleBoxFlat)0x0) {
               draw_rounded_rectangle(local_1f8, local_1f0, local_148, (Rect2*)&local_b8, &local_d8, (Rect2*)&local_68, (Rect2*)&local_68, (Color*)( this + 0x2b0 ), (Color*)( this + 0x2b0 ), iVar4, this + 0x314, true);
               iVar4 = *(int*)( this + 800 );
            }
 else if (SVar8 != (StyleBoxFlat)0x0) goto LAB_0010501a;
            local_1c8 = (Rect2*)&local_68;
            local_1d8 = this + 0x314;
            local_58 = *(undefined8*)( this + 0x2b0 );
            fStack_50 = *(float*)( this + 0x2b8 );
            fStack_4c = 0.0;
            draw_rounded_rectangle(local_1f8, local_1f0, local_148, (Rect2*)&local_b8, &local_d8, (Rect2*)&local_78, local_1c8, (Color*)( this + 0x2b0 ), (Color*)&local_58, iVar4, local_1d8, false);
            if (SVar8 != (StyleBoxFlat)0x0) {
               iVar4 = *(int*)( this + 800 );
               goto LAB_0010501a;
            }

         }

      }
 else {
         uVar13 = -(uint)(0.0 < *(float *)(this + 0x2e0));
         uVar14 = -(uint)(0.0 < *(float *)(this + 0x2e4));
         uVar15 = -(uint)(0.0 < *(float *)(this + 0x2e8));
         uVar16 = -(uint)(0.0 < *(float *)(this + 0x2ec));
         fVar34 = (float)( ~uVar13 & (uint)fVar18 );
         fVar29 = (float)( ~uVar14 & (uint)fVar18 );
         fVar28 = (float)( ~uVar15 & (uint)fVar18 );
         fVar36 = (float)( ~uVar16 & (uint)fVar18 );
         fVar33 = (float)( ~uVar13 & (uint)local_1e8 );
         fVar30 = (float)( ~uVar14 & (uint)local_1e8 );
         fVar31 = (float)( ~uVar15 & (uint)local_1e8 );
         fVar27 = (float)( ~uVar16 & (uint)local_1e8 );
         local_98._4_4_ = (uint)fVar18 & uVar14;
         local_98._0_4_ = (uint)fVar18 & uVar13;
         fStack_90 = (float)( (uint)fVar18 & uVar15 );
         fStack_8c = (float)( (uint)fVar18 & uVar16 );
         local_a8._4_4_ = (uint)local_1e8 & uVar14;
         local_a8._0_4_ = (uint)local_1e8 & uVar13;
         uStack_a0 = (uint)local_1e8 & uVar15;
         uStack_9c = (uint)local_1e8 & uVar16;
         if (SVar9 != (StyleBoxFlat)0x0) goto LAB_00104f1c;
         iVar4 = *(int*)( this + 800 );
         LAB_0010501a:local_1c8 = (Rect2*)&local_68;
         local_1d8 = this + 0x314;
         pCVar1 = (Color*)( this + 0x2d0 );
         fStack_50 = fStack_90 + (float)local_98._0_4_;
         fStack_4c = fStack_8c + (float)local_98._4_4_;
         local_88 = CONCAT44(fVar32 - (float)local_98._4_4_, fVar21 - (float)local_98._0_4_);
         uStack_80 = CONCAT44(fVar17 + fStack_4c, fVar35 + fStack_50);
         uStack_60 = CONCAT44(fStack_4c + fVar24, fStack_50 + fVar20);
         local_78 = CONCAT44(( fVar32 - (float)local_98._4_4_ ) + (float)local_a8._4_4_, ( fVar21 - (float)local_98._0_4_ ) + (float)local_a8._0_4_);
         uStack_70 = CONCAT44(( (float)( uStack_9c ^ uVar2 ) - (float)local_a8._4_4_ ) + fVar17 + fStack_4c, ( (float)( uStack_a0 ^ uVar2 ) - (float)local_a8._0_4_ ) + fVar35 + fStack_50);
         local_68 = CONCAT44(fVar26 - (float)local_98._4_4_, fVar25 - (float)local_98._0_4_);
         fStack_50 = fStack_50 + (float)uStack_b0;
         fStack_4c = fStack_4c + uStack_b0._4_4_;
         local_58 = CONCAT44(local_b8._4_4_ - (float)local_98._4_4_, (float)local_b8 - (float)local_98._0_4_);
         if (SVar11 == (StyleBoxFlat)0x0) {
            draw_rounded_rectangle(local_1f8, local_1f0, local_148, (Rect2*)&local_b8, &local_d8, (Rect2*)&local_58, (Rect2*)&local_88, (Color*)&local_e8, pCVar1, iVar4, local_1d8, false);
            iVar4 = *(int*)( this + 800 );
            pCVar38 = (Color*)&local_f8;
            pRVar37 = (Rect2*)&local_78;
            pRVar10 = (Rect2*)&local_88;
         }
 else {
            pCVar38 = (Color*)&local_e8;
            pRVar37 = (Rect2*)&local_c8;
            pRVar10 = (Rect2*)&local_58;
         }

         draw_rounded_rectangle(local_1f8, local_1f0, local_148, (Rect2*)&local_b8, &local_d8, pRVar10, pRVar37, pCVar38, pCVar1, iVar4, local_1d8, false);
         draw_rounded_rectangle(local_1f8, local_1f0, local_148, (Rect2*)&local_b8, &local_d8, local_1c8, (Rect2*)&local_58, pCVar1, (Color*)&local_108, *(int*)( this + 800 ), local_1d8, false);
      }

      if (SVar12 == (StyleBoxFlat)0x0) goto LAB_0010524f;
      fVar25 = fVar25 - local_1e8;
      fVar26 = fVar26 - local_1e8;
      local_1e8 = local_1e8 + local_1e8;
   }
 else {
      draw_rounded_rectangle(local_1f8, local_1f0, local_148, (Rect2*)&local_b8, &local_d8, (Rect2*)&local_b8, (Rect2*)&local_c8, (Color*)&local_e8, (Color*)( this + 0x2d0 ), *(int*)( this + 800 ), this + 0x314, false);
      if (this[0x310] != (StyleBoxFlat)0x0) {
         LAB_00105551:local_1d8 = this + 0x314;
         draw_rounded_rectangle(local_1f8, local_1f0, local_148, (Rect2*)&local_b8, &local_d8, (Rect2*)&local_c8, (Rect2*)&local_c8, (Color*)( this + 0x2b0 ), (Color*)( this + 0x2b0 ), *(int*)( this + 800 ), local_1d8, true);
         goto LAB_00105591;
      }

      LAB_0010524f:local_1e8 = 0.0;
   }

   if (local_160 == 0) {
      lVar7 = 0;
   }
 else {
      lVar7 = *(long*)( local_160 + -8 );
   }

   CowData<Vector2>::resize<false>((CowData<Vector2>*)&local_130, lVar7);
   CowData<Vector2>::_copy_on_write((CowData<Vector2>*)&local_130);
   if (( local_160 != 0 ) && ( lVar7= *(long *)(local_160 + -8),0 < lVar7 )) {
      lVar5 = 0;
      auVar23._4_4_ = local_1e8 + fVar24;
      auVar23._0_4_ = fVar20 + local_1e8;
      auVar23._8_8_ = _LC136;
      do {
         auVar19._0_4_ = (float)*(undefined8*)( local_160 + lVar5 ) - fVar25;
         auVar19._4_4_ = (float)( ( ulong ) * (undefined8*)( local_160 + lVar5 ) >> 0x20 ) - fVar26;
         auVar19._8_8_ = 0;
         auVar19 = divps(auVar19, auVar23);
         *(long*)( local_130 + lVar5 ) = auVar19._0_8_;
         lVar5 = lVar5 + 8;
      }
 while ( lVar7 << 3 != lVar5 );
   }

   plVar6 = (long*)RenderingServer::get_singleton();
   local_110 = 0;
   local_120 = 0;
   ( **(code**)( *plVar6 + 0xf58 ) )(plVar6, param_2, local_1f0, local_1f8, local_148, local_138, local_128, local_118, 0, 0xffffffffffffffff);
   lVar7 = local_120;
   if (local_120 != 0) {
      LOCK();
      plVar6 = (long*)( local_120 + -0x10 );
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         local_120 = 0;
         Memory::free_static((void*)( lVar7 + -0x10 ), false);
      }

   }

   lVar7 = local_110;
   if (local_110 != 0) {
      LOCK();
      plVar6 = (long*)( local_110 + -0x10 );
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         local_110 = 0;
         Memory::free_static((void*)( lVar7 + -0x10 ), false);
      }

   }

   lVar7 = local_130;
   if (local_130 != 0) {
      LOCK();
      plVar6 = (long*)( local_130 + -0x10 );
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         local_130 = 0;
         Memory::free_static((void*)( lVar7 + -0x10 ), false);
      }

   }

   lVar7 = local_140;
   if (local_140 != 0) {
      LOCK();
      plVar6 = (long*)( local_140 + -0x10 );
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         local_140 = 0;
         Memory::free_static((void*)( lVar7 + -0x10 ), false);
      }

   }

   lVar7 = local_150;
   if (local_150 != 0) {
      LOCK();
      plVar6 = (long*)( local_150 + -0x10 );
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         local_150 = 0;
         Memory::free_static((void*)( lVar7 + -0x10 ), false);
      }

   }

   lVar7 = local_160;
   if (local_160 != 0) {
      LOCK();
      plVar6 = (long*)( local_160 + -0x10 );
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         local_160 = 0;
         Memory::free_static((void*)( lVar7 + -0x10 ), false);
      }

   }

   LAB_00105490:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* MethodBind::is_valid() const */undefined8 MethodBind::is_valid(void) {
   return 1;
}
/* MethodBind::is_vararg() const */undefined8 MethodBind::is_vararg(void) {
   return 0;
}
/* Resource::set_last_modified_time(unsigned long) */void Resource::set_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x198 ) = param_1;
   return;
}
/* Resource::set_import_last_modified_time(unsigned long) */void Resource::set_import_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x1a0 ) = param_1;
   return;
}
/* StyleBoxFlat::is_class_ptr(void*) const */uint StyleBoxFlat::is_class_ptr(StyleBoxFlat *this, void *param_1) {
   return (uint)CONCAT71(0x1192, (undefined4*)param_1 == &StyleBox::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1192, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1192, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1192, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1192, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* StyleBoxFlat::_getv(StringName const&, Variant&) const */undefined8 StyleBoxFlat::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* StyleBoxFlat::_setv(StringName const&, Variant const&) */undefined8 StyleBoxFlat::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* StyleBoxFlat::_property_can_revertv(StringName const&) const */undefined8 StyleBoxFlat::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* StyleBoxFlat::_property_get_revertv(StringName const&, Variant&) const */undefined8 StyleBoxFlat::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* StyleBoxFlat::_notificationv(int, bool) */void StyleBoxFlat::_notificationv(int param_1, bool param_2) {
   return;
}
/* MethodBindTRC<float>::_gen_argument_type(int) const */undefined8 MethodBindTRC<float>::_gen_argument_type(int param_1) {
   return 3;
}
/* MethodBindTRC<float>::get_argument_meta(int) const */uint MethodBindTRC<float>::get_argument_meta(MethodBindTRC<float> *this, int param_1) {
   return param_1 >> 0x1f & 9;
}
/* MethodBindT<bool const&>::_gen_argument_type(int) const */bool MethodBindT<bool_const&>::_gen_argument_type(MethodBindT<bool_const&> *this, int param_1) {
   return param_1 == 0;
}
/* MethodBindT<bool const&>::get_argument_meta(int) const */undefined8 MethodBindT<bool_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Vector2 const&>::_gen_argument_type(int) const */byte MethodBindT<Vector2_const&>::_gen_argument_type(MethodBindT<Vector2_const&> *this, int param_1) {
   return -(param_1 == 0) & 5;
}
/* MethodBindT<Vector2 const&>::get_argument_meta(int) const */undefined8 MethodBindT<Vector2_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<int const&>::_gen_argument_type(int) const */char MethodBindT<int_const&>::_gen_argument_type(MethodBindT<int_const&> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<int const&>::get_argument_meta(int) const */byte MethodBindT<int_const&>::get_argument_meta(MethodBindT<int_const&> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindTRC<Vector2>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Vector2>::_gen_argument_type(int param_1) {
   return 5;
}
/* MethodBindTRC<Vector2>::get_argument_meta(int) const */undefined8 MethodBindTRC<Vector2>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Vector2>::_gen_argument_type(int) const */byte MethodBindT<Vector2>::_gen_argument_type(MethodBindT<Vector2> *this, int param_1) {
   return -(param_1 == 0) & 5;
}
/* MethodBindT<Vector2>::get_argument_meta(int) const */undefined8 MethodBindT<Vector2>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<float, Side>::_gen_argument_type(int) const */int MethodBindTRC<float,Side>::_gen_argument_type(MethodBindTRC<float,Side> *this, int param_1) {
   return 3 - ( uint )(param_1 == 0);
}
/* MethodBindTRC<float, Side>::get_argument_meta(int) const */uint MethodBindTRC<float,Side>::get_argument_meta(MethodBindTRC<float,Side> *this, int param_1) {
   return param_1 >> 0x1f & 9;
}
/* MethodBindT<float>::_gen_argument_type(int) const */byte MethodBindT<float>::_gen_argument_type(MethodBindT<float> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindT<float>::get_argument_meta(int) const */byte MethodBindT<float>::get_argument_meta(MethodBindT<float> *this, int param_1) {
   return -(param_1 == 0) & 9;
}
/* MethodBindT<Side, float>::_gen_argument_type(int) const */int MethodBindT<Side,float>::_gen_argument_type(MethodBindT<Side,float> *this, int param_1) {
   int iVar1;
   iVar1 = 3 - ( uint )(param_1 == 0);
   if (1 < (uint)param_1) {
      iVar1 = 0;
   }

   return iVar1;
}
/* MethodBindT<Side, float>::get_argument_meta(int) const */char MethodBindT<Side,float>::get_argument_meta(MethodBindT<Side,float> *this, int param_1) {
   return ( param_1 == 1 ) * '\t';
}
/* MethodBindTRC<int, Corner>::_gen_argument_type(int) const */undefined8 MethodBindTRC<int,Corner>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<int, Corner>::get_argument_meta(int) const */uint MethodBindTRC<int,Corner>::get_argument_meta(MethodBindTRC<int,Corner> *this, int param_1) {
   return param_1 >> 0x1f & 3;
}
/* MethodBindT<Corner, int>::_gen_argument_type(int) const */char MethodBindT<Corner,int>::_gen_argument_type(MethodBindT<Corner,int> *this, int param_1) {
   return ( (uint)param_1 < 2 ) * '\x02';
}
/* MethodBindT<Corner, int>::get_argument_meta(int) const */char MethodBindT<Corner,int>::get_argument_meta(MethodBindT<Corner,int> *this, int param_1) {
   return ( param_1 == 1 ) * '\x03';
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
/* MethodBindTRC<int, Side>::_gen_argument_type(int) const */undefined8 MethodBindTRC<int,Side>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<int, Side>::get_argument_meta(int) const */uint MethodBindTRC<int,Side>::get_argument_meta(MethodBindTRC<int,Side> *this, int param_1) {
   return param_1 >> 0x1f & 3;
}
/* MethodBindT<Side, int>::_gen_argument_type(int) const */char MethodBindT<Side,int>::_gen_argument_type(MethodBindT<Side,int> *this, int param_1) {
   return ( (uint)param_1 < 2 ) * '\x02';
}
/* MethodBindT<Side, int>::get_argument_meta(int) const */char MethodBindT<Side,int>::get_argument_meta(MethodBindT<Side,int> *this, int param_1) {
   return ( param_1 == 1 ) * '\x03';
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
/* MethodBindTRC<Color>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Color>::_gen_argument_type(int param_1) {
   return 0x14;
}
/* MethodBindTRC<Color>::get_argument_meta(int) const */undefined8 MethodBindTRC<Color>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Color const&>::_gen_argument_type(int) const */byte MethodBindT<Color_const&>::_gen_argument_type(MethodBindT<Color_const&> *this, int param_1) {
   return -(param_1 == 0) & 0x14;
}
/* MethodBindT<Color const&>::get_argument_meta(int) const */undefined8 MethodBindT<Color_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Side, int>::~MethodBindT() */void MethodBindT<Side,int>::~MethodBindT(MethodBindT<Side,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118cc0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Side, int>::~MethodBindT() */void MethodBindT<Side,int>::~MethodBindT(MethodBindT<Side,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118cc0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<int, Side>::~MethodBindTRC() */void MethodBindTRC<int,Side>::~MethodBindTRC(MethodBindTRC<int,Side> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118d20;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<int, Side>::~MethodBindTRC() */void MethodBindTRC<int,Side>::~MethodBindTRC(MethodBindTRC<int,Side> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118d20;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118c00;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118c00;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Corner, int>::~MethodBindT() */void MethodBindT<Corner,int>::~MethodBindT(MethodBindT<Corner,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118e40;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Corner, int>::~MethodBindT() */void MethodBindT<Corner,int>::~MethodBindT(MethodBindT<Corner,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118e40;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<int, Corner>::~MethodBindTRC() */void MethodBindTRC<int,Corner>::~MethodBindTRC(MethodBindTRC<int,Corner> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118ea0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<int, Corner>::~MethodBindTRC() */void MethodBindTRC<int,Corner>::~MethodBindTRC(MethodBindTRC<int,Corner> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118ea0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Side, float>::~MethodBindT() */void MethodBindT<Side,float>::~MethodBindT(MethodBindT<Side,float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118f00;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Side, float>::~MethodBindT() */void MethodBindT<Side,float>::~MethodBindT(MethodBindT<Side,float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118f00;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<float, Side>::~MethodBindTRC() */void MethodBindTRC<float,Side>::~MethodBindTRC(MethodBindTRC<float,Side> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118fc0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<float, Side>::~MethodBindTRC() */void MethodBindTRC<float,Side>::~MethodBindTRC(MethodBindTRC<float,Side> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118fc0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118d80;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118d80;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Vector2>::~MethodBindT() */void MethodBindT<Vector2>::~MethodBindT(MethodBindT<Vector2> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119020;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Vector2>::~MethodBindT() */void MethodBindT<Vector2>::~MethodBindT(MethodBindT<Vector2> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119020;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Color const&>::~MethodBindT() */void MethodBindT<Color_const&>::~MethodBindT(MethodBindT<Color_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118b40;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Color const&>::~MethodBindT() */void MethodBindT<Color_const&>::~MethodBindT(MethodBindT<Color_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118b40;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Color>::~MethodBindTRC() */void MethodBindTRC<Color>::~MethodBindTRC(MethodBindTRC<Color> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118ba0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Color>::~MethodBindTRC() */void MethodBindTRC<Color>::~MethodBindTRC(MethodBindTRC<Color> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118ba0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Vector2 const&>::~MethodBindT() */void MethodBindT<Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119140;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Vector2 const&>::~MethodBindT() */void MethodBindT<Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119140;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Vector2>::~MethodBindTRC() */void MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119080;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Vector2>::~MethodBindTRC() */void MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119080;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<bool const&>::~MethodBindT() */void MethodBindT<bool_const&>::~MethodBindT(MethodBindT<bool_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001191a0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<bool const&>::~MethodBindT() */void MethodBindT<bool_const&>::~MethodBindT(MethodBindT<bool_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001191a0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118de0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118de0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<float>::~MethodBindT() */void MethodBindT<float>::~MethodBindT(MethodBindT<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118f60;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<float>::~MethodBindT() */void MethodBindT<float>::~MethodBindT(MethodBindT<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118f60;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<float>::~MethodBindTRC() */void MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119200;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<float>::~MethodBindTRC() */void MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119200;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<int const&>::~MethodBindT() */void MethodBindT<int_const&>::~MethodBindT(MethodBindT<int_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001190e0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int const&>::~MethodBindT() */void MethodBindT<int_const&>::~MethodBindT(MethodBindT<int_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001190e0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118c60;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118c60;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* StyleBoxFlat::_validate_propertyv(PropertyInfo&) const */void StyleBoxFlat::_validate_propertyv(StyleBoxFlat *this, PropertyInfo *param_1) {
   char cVar1;
   if (this[0x31c] != (StyleBoxFlat)0x0) {
      return;
   }

   cVar1 = String::operator ==((String*)( param_1 + 8 ), "anti_aliasing_size");
   if (cVar1 != '\0') {
      *(undefined4*)( param_1 + 0x28 ) = 2;
   }

   return;
}
/* StyleBox::get_base_extension() const */StyleBox * __thiscall StyleBox::get_base_extension(StyleBox *this){
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
/* StyleBox::get_save_class() const */StyleBox * __thiscall StyleBox::get_save_class(StyleBox *this){
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
/* StyleBoxFlat::_get_class_namev() const */undefined8 *StyleBoxFlat::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00106df3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00106df3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "StyleBoxFlat");
         goto LAB_00106e5e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "StyleBoxFlat");
   LAB_00106e5e:return &_get_class_namev();
}
/* CowData<Color>::_copy_on_write() [clone .isra.0] */void CowData<Color>::_copy_on_write(CowData<Color> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   size_t __n;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   __n = lVar2 * 0x10;
   if (__n != 0) {
      uVar5 = __n - 1 | __n - 1 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar5, false);
   if (puVar4 != (undefined8*)0x0) {
      *puVar4 = 1;
      puVar4[1] = lVar2;
      memcpy(puVar4 + 2, *(void**)this, __n);
      if (*(long*)this != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)this + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)this;
            *(undefined8*)this = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(undefined8**)this = puVar4 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* CowData<int>::_copy_on_write() [clone .isra.0] */void CowData<int>::_copy_on_write(CowData<int> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   size_t __n;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   __n = lVar2 * 4;
   if (__n != 0) {
      uVar5 = __n - 1 | __n - 1 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar5, false);
   if (puVar4 != (undefined8*)0x0) {
      *puVar4 = 1;
      puVar4[1] = lVar2;
      memcpy(puVar4 + 2, *(void**)this, __n);
      if (*(long*)this != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)this + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)this;
            *(undefined8*)this = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(undefined8**)this = puVar4 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* StyleBoxFlat::get_class() const */void StyleBoxFlat::get_class(void) {
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
/* CowData<Vector2>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Vector2>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
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
   local_48 = &_LC7;
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

         goto joined_r0x0010733c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010733c:local_58 = lVar2;
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
/* MethodBindTRC<float>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<float>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC7;
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

         goto joined_r0x001074bc;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x001074bc:local_58 = lVar2;
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
   local_48 = &_LC7;
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

         goto joined_r0x0010763c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010763c:local_58 = lVar2;
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
/* MethodBindTRC<Color>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Color>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC7;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 0x14;
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

         goto joined_r0x001077bc;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x001077bc:local_58 = lVar2;
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
/* MethodBindTRC<Vector2>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Vector2>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC7;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 5;
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

         goto joined_r0x0010793c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010793c:local_58 = lVar2;
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
                  if (lVar5 == 0) goto LAB_00107baf;
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

      LAB_00107baf:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00107c63;
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
                     if (lVar5 == 0) goto LAB_00107d13;
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

         LAB_00107d13:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00107c63;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_00107c63:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
   local_88 = 0;
   local_90 = 0;
   local_78 = "RefCounted";
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
      LAB_00107f38:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00107f38;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x00107f56;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x00107f56:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])pLVar6 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

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

   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_68);
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
/* StyleBox::is_class(String const&) const */undefined8 StyleBox::is_class(StyleBox *this, String *param_1) {
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
                  if (lVar5 == 0) goto LAB_0010822f;
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

      LAB_0010822f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_001082e3;
   }

   cVar6 = String::operator ==(param_1, "StyleBox");
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
                     if (lVar5 == 0) goto LAB_001083a3;
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

         LAB_001083a3:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_001082e3;
      }

      cVar6 = String::operator ==(param_1, "Resource");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
            return uVar7;
         }

         goto LAB_0010844c;
      }

   }

   LAB_001082e3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010844c:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* StyleBoxFlat::is_class(String const&) const */undefined8 StyleBoxFlat::is_class(StyleBoxFlat *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_001084cf;
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

      LAB_001084cf:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00108583;
   }

   cVar5 = String::operator ==(param_1, "StyleBoxFlat");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = StyleBox::is_class((StyleBox*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00108583:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodDefinition::~MethodDefinition() */void MethodDefinition::~MethodDefinition(MethodDefinition *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   long *plVar4;
   long lVar5;
   if (*(long*)( this + 0x10 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x10 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( this + 0x10 );
         if (plVar1 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = plVar1[-1];
         *(undefined8*)( this + 0x10 ) = 0;
         if (lVar2 != 0) {
            lVar5 = 0;
            plVar4 = plVar1;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar4 != 0 )) {
                  StringName::unref();
               }

               lVar5 = lVar5 + 1;
               plVar4 = plVar4 + 1;
            }
 while ( lVar2 != lVar5 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }

   return;
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
/* godot::details::enum_qualified_name_to_class_info_name(String const&) */details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1){
   long *plVar1;
   long *plVar2;
   long lVar3;
   code *pcVar4;
   long *plVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   long local_60;
   char local_58[8];
   long *local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   String::split(local_58, SUB81(param_1, 0), 0x1086cd);
   if (( local_50 != (long*)0x0 ) && ( 2 < local_50[-1] )) {
      local_60 = 0;
      local_48 = &_LC38;
      local_40 = 1;
      String::parse_latin1((StrRange*)&local_60);
      if (local_50 == (long*)0x0) {
         lVar7 = 0;
         lVar6 = -2;
      }
 else {
         lVar7 = local_50[-1];
         lVar6 = lVar7 + -2;
         if (-1 < lVar6) {
            String::operator +((String*)&local_48, (String*)( local_50 + lVar6 ));
            String::operator +((String*)this, (String*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            goto LAB_001087ad;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar7, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   local_60 = 0;
   local_48 = &_LC38;
   local_40 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::join((Vector*)this);
   lVar7 = local_60;
   if (local_60 != 0) {
      LOCK();
      plVar1 = (long*)( local_60 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar7 + -0x10 ), false);
      }

   }

   LAB_001087ad:plVar1 = local_50;
   if (local_50 != (long*)0x0) {
      LOCK();
      plVar5 = local_50 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_50 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar7 = local_50[-1];
         local_50 = (long*)0x0;
         if (lVar7 != 0) {
            lVar6 = 0;
            plVar5 = plVar1;
            do {
               if (*plVar5 != 0) {
                  LOCK();
                  plVar2 = (long*)( *plVar5 + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar3 = *plVar5;
                     *plVar5 = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               lVar6 = lVar6 + 1;
               plVar5 = plVar5 + 1;
            }
 while ( lVar7 != lVar6 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<bool>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined8 uVar5;
   long lVar6;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar7;
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
   puVar7 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar7 = 0;
   puVar7[6] = 0;
   *(undefined8*)( puVar7 + 8 ) = 0;
   puVar7[10] = 6;
   *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_00108979;
   local_78 = 0;
   local_68 = &_LC7;
   local_80 = 0;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._8_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 1);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00108a70:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00108a70;
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

   *puVar7 = local_68._0_4_;
   if (*(long*)( puVar7 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 2 ));
      uVar5 = local_60._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      *(undefined8*)( puVar7 + 2 ) = uVar5;
   }

   if (*(long*)( puVar7 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar5 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar7 + 4 ) = uVar5;
   }

   lVar6 = local_48;
   puVar7[6] = local_50;
   if (*(long*)( puVar7 + 8 ) == local_48) {
      puVar7[10] = local_40;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

   }
 else {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 8 ));
      *(long*)( puVar7 + 8 ) = local_48;
      puVar7[10] = local_40;
   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar5 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_60._8_8_;
         local_60 = auVar4 << 0x40;
         Memory::free_static((void*)( uVar5 + -0x10 ), false);
      }

   }

   LAB_00108979:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar7;
}
/* MethodBindT<Vector2>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Vector2>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined8 uVar5;
   long lVar6;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar7;
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
   puVar7 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar7 = 0;
   puVar7[6] = 0;
   *(undefined8*)( puVar7 + 8 ) = 0;
   puVar7[10] = 6;
   *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_00108c29;
   local_78 = 0;
   local_68 = &_LC7;
   local_80 = 0;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._8_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 5);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00108d20:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00108d20;
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

   *puVar7 = local_68._0_4_;
   if (*(long*)( puVar7 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 2 ));
      uVar5 = local_60._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      *(undefined8*)( puVar7 + 2 ) = uVar5;
   }

   if (*(long*)( puVar7 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar5 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar7 + 4 ) = uVar5;
   }

   lVar6 = local_48;
   puVar7[6] = local_50;
   if (*(long*)( puVar7 + 8 ) == local_48) {
      puVar7[10] = local_40;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

   }
 else {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 8 ));
      *(long*)( puVar7 + 8 ) = local_48;
      puVar7[10] = local_40;
   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar5 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_60._8_8_;
         local_60 = auVar4 << 0x40;
         Memory::free_static((void*)( uVar5 + -0x10 ), false);
      }

   }

   LAB_00108c29:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar7;
}
/* MethodBindT<Color const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Color_const&>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined8 uVar5;
   long lVar6;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar7;
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
   puVar7 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar7 = 0;
   puVar7[6] = 0;
   *(undefined8*)( puVar7 + 8 ) = 0;
   puVar7[10] = 6;
   *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_00108ed9;
   local_78 = 0;
   local_68 = &_LC7;
   local_80 = 0;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._8_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 0x14);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00108fd0:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00108fd0;
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

   *puVar7 = local_68._0_4_;
   if (*(long*)( puVar7 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 2 ));
      uVar5 = local_60._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      *(undefined8*)( puVar7 + 2 ) = uVar5;
   }

   if (*(long*)( puVar7 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar5 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar7 + 4 ) = uVar5;
   }

   lVar6 = local_48;
   puVar7[6] = local_50;
   if (*(long*)( puVar7 + 8 ) == local_48) {
      puVar7[10] = local_40;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

   }
 else {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 8 ));
      *(long*)( puVar7 + 8 ) = local_48;
      puVar7[10] = local_40;
   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar5 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_60._8_8_;
         local_60 = auVar4 << 0x40;
         Memory::free_static((void*)( uVar5 + -0x10 ), false);
      }

   }

   LAB_00108ed9:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar7;
}
/* MethodBindT<float>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<float>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined8 uVar5;
   long lVar6;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar7;
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
   puVar7 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar7 = 0;
   puVar7[6] = 0;
   *(undefined8*)( puVar7 + 8 ) = 0;
   puVar7[10] = 6;
   *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_00109189;
   local_78 = 0;
   local_68 = &_LC7;
   local_80 = 0;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._8_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 3);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00109280:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00109280;
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

   *puVar7 = local_68._0_4_;
   if (*(long*)( puVar7 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 2 ));
      uVar5 = local_60._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      *(undefined8*)( puVar7 + 2 ) = uVar5;
   }

   if (*(long*)( puVar7 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar5 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar7 + 4 ) = uVar5;
   }

   lVar6 = local_48;
   puVar7[6] = local_50;
   if (*(long*)( puVar7 + 8 ) == local_48) {
      puVar7[10] = local_40;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

   }
 else {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 8 ));
      *(long*)( puVar7 + 8 ) = local_48;
      puVar7[10] = local_40;
   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar5 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_60._8_8_;
         local_60 = auVar4 << 0x40;
         Memory::free_static((void*)( uVar5 + -0x10 ), false);
      }

   }

   LAB_00109189:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar7;
}
/* MethodBindT<int const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<int_const&>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined8 uVar5;
   long lVar6;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar7;
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
   puVar7 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar7 = 0;
   puVar7[6] = 0;
   *(undefined8*)( puVar7 + 8 ) = 0;
   puVar7[10] = 6;
   *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_00109439;
   local_78 = 0;
   local_68 = &_LC7;
   local_80 = 0;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._8_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 2);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00109530:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00109530;
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

   *puVar7 = local_68._0_4_;
   if (*(long*)( puVar7 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 2 ));
      uVar5 = local_60._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      *(undefined8*)( puVar7 + 2 ) = uVar5;
   }

   if (*(long*)( puVar7 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar5 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar7 + 4 ) = uVar5;
   }

   lVar6 = local_48;
   puVar7[6] = local_50;
   if (*(long*)( puVar7 + 8 ) == local_48) {
      puVar7[10] = local_40;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

   }
 else {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 8 ));
      *(long*)( puVar7 + 8 ) = local_48;
      puVar7[10] = local_40;
   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar5 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_60._8_8_;
         local_60 = auVar4 << 0x40;
         Memory::free_static((void*)( uVar5 + -0x10 ), false);
      }

   }

   LAB_00109439:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar7;
}
/* MethodBindT<bool const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<bool_const&>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined8 uVar5;
   long lVar6;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar7;
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
   puVar7 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar7 = 0;
   puVar7[6] = 0;
   *(undefined8*)( puVar7 + 8 ) = 0;
   puVar7[10] = 6;
   *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_001096e9;
   local_78 = 0;
   local_68 = &_LC7;
   local_80 = 0;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._8_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 1);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_001097e0:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_001097e0;
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

   *puVar7 = local_68._0_4_;
   if (*(long*)( puVar7 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 2 ));
      uVar5 = local_60._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      *(undefined8*)( puVar7 + 2 ) = uVar5;
   }

   if (*(long*)( puVar7 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar5 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar7 + 4 ) = uVar5;
   }

   lVar6 = local_48;
   puVar7[6] = local_50;
   if (*(long*)( puVar7 + 8 ) == local_48) {
      puVar7[10] = local_40;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

   }
 else {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 8 ));
      *(long*)( puVar7 + 8 ) = local_48;
      puVar7[10] = local_40;
   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar5 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_60._8_8_;
         local_60 = auVar4 << 0x40;
         Memory::free_static((void*)( uVar5 + -0x10 ), false);
      }

   }

   LAB_001096e9:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar7;
}
/* MethodBindT<Vector2 const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Vector2_const&>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined8 uVar5;
   long lVar6;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar7;
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
   puVar7 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar7 = 0;
   puVar7[6] = 0;
   *(undefined8*)( puVar7 + 8 ) = 0;
   puVar7[10] = 6;
   *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_00109999;
   local_78 = 0;
   local_68 = &_LC7;
   local_80 = 0;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._8_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 5);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00109a90:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00109a90;
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

   *puVar7 = local_68._0_4_;
   if (*(long*)( puVar7 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 2 ));
      uVar5 = local_60._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      *(undefined8*)( puVar7 + 2 ) = uVar5;
   }

   if (*(long*)( puVar7 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar5 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar7 + 4 ) = uVar5;
   }

   lVar6 = local_48;
   puVar7[6] = local_50;
   if (*(long*)( puVar7 + 8 ) == local_48) {
      puVar7[10] = local_40;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

   }
 else {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 8 ));
      *(long*)( puVar7 + 8 ) = local_48;
      puVar7[10] = local_40;
   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar5 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_60._8_8_;
         local_60 = auVar4 << 0x40;
         Memory::free_static((void*)( uVar5 + -0x10 ), false);
      }

   }

   LAB_00109999:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar7;
}
/* MethodBindT<int>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<int>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined8 uVar5;
   long lVar6;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar7;
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
   puVar7 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar7 = 0;
   puVar7[6] = 0;
   *(undefined8*)( puVar7 + 8 ) = 0;
   puVar7[10] = 6;
   *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_00109c49;
   local_78 = 0;
   local_68 = &_LC7;
   local_80 = 0;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._8_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 2);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00109d40:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00109d40;
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

   *puVar7 = local_68._0_4_;
   if (*(long*)( puVar7 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 2 ));
      uVar5 = local_60._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      *(undefined8*)( puVar7 + 2 ) = uVar5;
   }

   if (*(long*)( puVar7 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar5 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar7 + 4 ) = uVar5;
   }

   lVar6 = local_48;
   puVar7[6] = local_50;
   if (*(long*)( puVar7 + 8 ) == local_48) {
      puVar7[10] = local_40;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

   }
 else {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 8 ));
      *(long*)( puVar7 + 8 ) = local_48;
      puVar7[10] = local_40;
   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar5 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_60._8_8_;
         local_60 = auVar4 << 0x40;
         Memory::free_static((void*)( uVar5 + -0x10 ), false);
      }

   }

   LAB_00109c49:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar7;
}
/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Resource::_get_property_listv(Resource *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
   undefined4 *puVar5;
   long in_FS_OFFSET;
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
      LAB_0010a040:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      LAB_0010a052:lVar2 = *(long*)param_1;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010a040;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 == local_80) {
         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010a052;
      }

      StringName::unref();
      lVar2 = *(long*)param_1;
      local_68 = local_80;
   }

   if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

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

   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_68);
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

   StringName::StringName((StringName*)&local_78, "Resource", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (!param_2) goto LAB_0010a1dd;
   local_98 = 0;
   local_90 = 0;
   local_78 = "RefCounted";
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_90);
   local_88 = 0;
   local_78 = "RefCounted";
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_88 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_88);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_0010a375:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_98);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010a375;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 == local_80) {
         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_68 = local_80;
      }

   }

   if (*(long*)param_1 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

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

   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_68);
   puVar5[6] = local_60;
   if (*(long*)( puVar5 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_58);
   }

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
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "RefCounted", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   LAB_0010a1dd:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* StyleBox::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void StyleBox::_get_property_listv(StyleBox *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
   undefined4 *puVar5;
   long in_FS_OFFSET;
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
   local_78 = "StyleBox";
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "StyleBox";
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
      LAB_0010a708:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010a708;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010a725;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010a725:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

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

   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_68);
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

   StringName::StringName((StringName*)&local_78, "StyleBox", false);
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
/* StyleBoxFlat::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void StyleBoxFlat::_get_property_listv(StyleBoxFlat *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
   undefined4 *puVar5;
   long in_FS_OFFSET;
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
      StyleBox::_get_property_listv((StyleBox*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "StyleBoxFlat";
   local_70 = 0xc;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "StyleBoxFlat";
   local_98 = 0;
   local_70 = 0xc;
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
      LAB_0010ab58:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010ab58;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010ab75;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010ab75:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

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

   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_68);
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

   StringName::StringName((StringName*)&local_78, "StyleBoxFlat", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         StyleBox::_get_property_listv((StyleBox*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Corner, int>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Corner,int>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   undefined8 local_a0;
   undefined8 local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined1 local_70[16];
   ulong local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar5 = 0;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   puVar5[10] = 6;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_90 = 0;
      local_70._0_8_ = 6;
      local_78 = "Corner";
      String::parse_latin1((StrRange*)&local_90);
      godot::details::enum_qualified_name_to_class_info_name((details*)&local_88, (String*)&local_90);
      StringName::StringName((StringName*)&local_80, (String*)&local_88, false);
      local_70 = (undefined1[16])0x0;
      local_98 = 0;
      local_a0 = 0;
      local_78 = (char*)0x2;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0x10006;
      StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   }
 else {
      if (in_EDX != 1) goto LAB_0010ae8a;
      local_88 = 0;
      local_90 = 0;
      local_78 = "";
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_70._8_8_;
      local_70 = auVar2 << 0x40;
      String::parse_latin1((StrRange*)&local_90);
      local_98 = 0;
      local_78 = (char*)CONCAT44(local_78._4_4_, 2);
      local_60 = local_60 & 0xffffffff00000000;
      local_58 = 0;
      local_70 = (undefined1[16])0x0;
      if (local_90 == 0) {
         LAB_0010b0f0:local_50 = 6;
         StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_88);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
         local_50 = 6;
         if ((int)local_60 != 0x11) goto LAB_0010b0f0;
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

   }

   *puVar5 = local_78._0_4_;
   if (*(long*)( puVar5 + 2 ) != local_70._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 2 ));
      uVar3 = local_70._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_70._8_8_;
      local_70 = auVar1 << 0x40;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
   }

   if (*(long*)( puVar5 + 4 ) != local_70._8_8_) {
      StringName::unref();
      uVar3 = local_70._8_8_;
      local_70._8_8_ = 0;
      *(undefined8*)( puVar5 + 4 ) = uVar3;
   }

   puVar5[6] = (int)local_60;
   if (*(long*)( puVar5 + 8 ) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 8 ));
      lVar4 = local_58;
      local_58 = 0;
      *(long*)( puVar5 + 8 ) = lVar4;
   }

   puVar5[10] = local_50;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   LAB_0010ae8a:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBindTRC<int, Corner>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<int,Corner>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   undefined8 uVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8;
   long local_b0;
   long local_a8;
   undefined1 local_a0[16];
   undefined8 local_90;
   long local_88;
   undefined4 local_80;
   char *local_78;
   long local_70;
   ulong local_68;
   undefined4 local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a8 = 0;
   if (in_EDX == 0) {
      local_90 = 0;
      local_a0._0_8_ = 0;
      local_a0._8_8_ = 0;
      local_88 = 0;
      local_78 = "Corner";
      local_80 = 6;
      local_c0 = 0;
      local_70 = 6;
      String::parse_latin1((StrRange*)&local_c0);
      godot::details::enum_qualified_name_to_class_info_name((details*)&local_b8, (String*)&local_c0);
      StringName::StringName((StringName*)&local_b0, (String*)&local_b8, false);
      local_c8 = 0;
      local_d0 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 2, (CowData<char32_t>*)&local_d0, 0, (CowData<char32_t>*)&local_c8, 0x10006, (StringName*)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
      local_a8 = CONCAT44(local_a8._4_4_, local_78._0_4_);
      if (local_a0._0_8_ != local_70) {
         CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
         local_a0._0_8_ = local_70;
         local_70 = 0;
      }

      if (local_a0._8_8_ != local_68) {
         StringName::unref();
         local_a0._8_8_ = local_68;
         local_68 = 0;
      }

      local_90 = CONCAT44(local_90._4_4_, local_60);
      if (local_88 != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         local_88 = local_58;
         local_58 = 0;
      }

      local_80 = local_50;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
      uVar3 = local_a0._8_8_;
      uVar2 = local_a0._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_a0._8_8_;
      local_a0 = auVar1 << 0x40;
      *puVar4 = (undefined4)local_a8;
      *(undefined8*)( puVar4 + 2 ) = uVar2;
      *(undefined8*)( puVar4 + 4 ) = uVar3;
      puVar4[6] = (undefined4)local_90;
      *(long*)( puVar4 + 8 ) = local_88;
      puVar4[10] = local_80;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
      goto LAB_0010b482;
   }

   local_b0 = 0;
   local_70 = 0;
   local_78 = "";
   String::parse_latin1((StrRange*)&local_b0);
   local_b8 = 0;
   *puVar4 = 2;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_b0 == 0) {
      puVar4[10] = 6;
      LAB_0010b447:StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_a8);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_b0);
      puVar4[10] = 6;
      if (puVar4[6] != 0x11) goto LAB_0010b447;
      StringName::StringName((StringName*)&local_78, (String*)( puVar4 + 8 ), false);
      if (*(char**)( puVar4 + 4 ) == local_78) {
         if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(char**)( puVar4 + 4 ) = local_78;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
      StringName::unref();
   }

   LAB_0010b482:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<StyleBoxFlat, Color const&>(void (StyleBoxFlat::*)(Color const&))
    */MethodBind *create_method_bind<StyleBoxFlat,Color_const&>(_func_void_Color_ptr *param_1) {
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
   *(_func_void_Color_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00118b40;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "StyleBoxFlat";
   local_30 = 0xc;
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
/* MethodBind* create_method_bind<StyleBoxFlat, Color>(Color (StyleBoxFlat::*)() const) */MethodBind *create_method_bind<StyleBoxFlat,Color>(_func_Color *param_1) {
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
   *(_func_Color**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00118ba0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "StyleBoxFlat";
   local_30 = 0xc;
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
/* MethodBind* create_method_bind<StyleBoxFlat, int>(void (StyleBoxFlat::*)(int)) */MethodBind *create_method_bind<StyleBoxFlat,int>(_func_void_int *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00118c00;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "StyleBoxFlat";
   local_30 = 0xc;
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
/* MethodBind* create_method_bind<StyleBoxFlat, int>(int (StyleBoxFlat::*)() const) */MethodBind *create_method_bind<StyleBoxFlat,int>(_func_int *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00118c60;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "StyleBoxFlat";
   local_30 = 0xc;
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
/* MethodBind* create_method_bind<StyleBoxFlat, Side, int>(void (StyleBoxFlat::*)(Side, int)) */MethodBind *create_method_bind<StyleBoxFlat,Side,int>(_func_void_Side_int *param_1) {
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
   *(_func_void_Side_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00118cc0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "StyleBoxFlat";
   local_30 = 0xc;
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
/* MethodBind* create_method_bind<StyleBoxFlat, int, Side>(int (StyleBoxFlat::*)(Side) const) */MethodBind *create_method_bind<StyleBoxFlat,int,Side>(_func_int_Side *param_1) {
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
   *(_func_int_Side**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00118d20;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "StyleBoxFlat";
   local_30 = 0xc;
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
/* MethodBind* create_method_bind<StyleBoxFlat, bool>(void (StyleBoxFlat::*)(bool)) */MethodBind *create_method_bind<StyleBoxFlat,bool>(_func_void_bool *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00118d80;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "StyleBoxFlat";
   local_30 = 0xc;
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
/* MethodBind* create_method_bind<StyleBoxFlat, bool>(bool (StyleBoxFlat::*)() const) */MethodBind *create_method_bind<StyleBoxFlat,bool>(_func_bool *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00118de0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "StyleBoxFlat";
   local_30 = 0xc;
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
/* MethodBind* create_method_bind<StyleBoxFlat, Corner, int>(void (StyleBoxFlat::*)(Corner, int)) */MethodBind *create_method_bind<StyleBoxFlat,Corner,int>(_func_void_Corner_int *param_1) {
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
   *(_func_void_Corner_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00118e40;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "StyleBoxFlat";
   local_30 = 0xc;
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
/* MethodBind* create_method_bind<StyleBoxFlat, int, Corner>(int (StyleBoxFlat::*)(Corner) const) */MethodBind *create_method_bind<StyleBoxFlat,int,Corner>(_func_int_Corner *param_1) {
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
   *(_func_int_Corner**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00118ea0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "StyleBoxFlat";
   local_30 = 0xc;
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
/* MethodBind* create_method_bind<StyleBoxFlat, Side, float>(void (StyleBoxFlat::*)(Side, float)) */MethodBind *create_method_bind<StyleBoxFlat,Side,float>(_func_void_Side_float *param_1) {
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
   *(_func_void_Side_float**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00118f00;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "StyleBoxFlat";
   local_30 = 0xc;
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
/* MethodBind* create_method_bind<StyleBoxFlat, float>(void (StyleBoxFlat::*)(float)) */MethodBind *create_method_bind<StyleBoxFlat,float>(_func_void_float *param_1) {
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
   *(_func_void_float**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00118f60;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "StyleBoxFlat";
   local_30 = 0xc;
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
/* MethodBind* create_method_bind<StyleBoxFlat, float, Side>(float (StyleBoxFlat::*)(Side) const) */MethodBind *create_method_bind<StyleBoxFlat,float,Side>(_func_float_Side *param_1) {
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
   *(_func_float_Side**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00118fc0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "StyleBoxFlat";
   local_30 = 0xc;
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
/* MethodBind* create_method_bind<StyleBoxFlat, Vector2>(void (StyleBoxFlat::*)(Vector2)) */MethodBind *create_method_bind<StyleBoxFlat,Vector2>(_func_void_Vector2 *param_1) {
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
   *(_func_void_Vector2**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00119020;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "StyleBoxFlat";
   local_30 = 0xc;
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
/* MethodBind* create_method_bind<StyleBoxFlat, Vector2>(Vector2 (StyleBoxFlat::*)() const) */MethodBind *create_method_bind<StyleBoxFlat,Vector2>(_func_Vector2 *param_1) {
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
   *(_func_Vector2**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00119080;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "StyleBoxFlat";
   local_30 = 0xc;
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
/* MethodBind* create_method_bind<StyleBoxFlat, int const&>(void (StyleBoxFlat::*)(int const&)) */MethodBind *create_method_bind<StyleBoxFlat,int_const&>(_func_void_int_ptr *param_1) {
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
   *(_func_void_int_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001190e0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "StyleBoxFlat";
   local_30 = 0xc;
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
/* MethodBind* create_method_bind<StyleBoxFlat, Vector2 const&>(void (StyleBoxFlat::*)(Vector2
   const&)) */MethodBind *create_method_bind<StyleBoxFlat,Vector2_const&>(_func_void_Vector2_ptr *param_1) {
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
   *(_func_void_Vector2_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00119140;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "StyleBoxFlat";
   local_30 = 0xc;
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
/* MethodBind* create_method_bind<StyleBoxFlat, bool const&>(void (StyleBoxFlat::*)(bool const&)) */MethodBind *create_method_bind<StyleBoxFlat,bool_const&>(_func_void_bool_ptr *param_1) {
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
   *(_func_void_bool_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001191a0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "StyleBoxFlat";
   local_30 = 0xc;
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
/* MethodBind* create_method_bind<StyleBoxFlat, float>(float (StyleBoxFlat::*)() const) */MethodBind *create_method_bind<StyleBoxFlat,float>(_func_float *param_1) {
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
   *(_func_float**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00119200;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "StyleBoxFlat";
   local_30 = 0xc;
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
/* StyleBoxFlat::_initialize_classv() */void StyleBoxFlat::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (StyleBox::initialize_class() == '\0') {
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
               if ((code*)PTR__bind_methods_0011e008 != RefCounted::_bind_methods) {
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
         local_58 = "StyleBox";
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
         if ((code*)_GLOBAL_OFFSET_TABLE_ != Resource::_bind_methods) {
            StyleBox::_bind_methods();
         }

         StyleBox::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "StyleBox";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "StyleBoxFlat";
      local_70 = 0;
      local_50 = 0xc;
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
/* CowData<Vector2>::_realloc(long) */undefined8 CowData<Vector2>::_realloc(CowData<Vector2> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Vector2>::resize<false>(long) */undefined8 CowData<Vector2>::resize<false>(CowData<Vector2> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 uVar6;
   long lVar7;
   long lVar8;
   undefined8 *puVar9;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   lVar3 = *(long*)this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar8 = 0;
      lVar3 = 0;
   }
 else {
      lVar8 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar8) {
         return 0;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return 0;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return 0;
      }

      _copy_on_write(this);
      lVar3 = lVar8 * 8;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 == 0) {
      LAB_0010d290:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 8 - 1;
   uVar4 = uVar4 >> 1 | uVar4;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar7 = uVar4 + 1;
   if (lVar7 == 0) goto LAB_0010d290;
   if (param_1 <= lVar8) {
      if (( lVar7 != lVar3 ) && ( uVar6 = _realloc(this, lVar7) ),(int)uVar6 != 0) {
         return uVar6;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return 0;
      }

      _DAT_00000000 = 0;
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   if (lVar7 == lVar3) {
      LAB_0010d1fc:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar9[-1];
      if (param_1 <= lVar3) goto LAB_0010d191;
   }
 else {
      if (lVar8 != 0) {
         uVar6 = _realloc(this, lVar7);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

         goto LAB_0010d1fc;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar9 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar9;
      lVar3 = 0;
   }

   memset(puVar9 + lVar3, 0, ( param_1 - lVar3 ) * 8);
   LAB_0010d191:puVar9[-1] = param_1;
   return 0;
}
/* CowData<int>::_realloc(long) */undefined8 CowData<int>::_realloc(CowData<int> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<int>::resize<false>(long) [clone .isra.0] */void CowData<int>::resize<false>(CowData<int> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   int iVar3;
   long lVar4;
   ulong uVar5;
   undefined8 *puVar6;
   char *pcVar7;
   undefined8 *puVar8;
   undefined8 uVar9;
   long lVar10;
   long lVar11;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar4 = *(long*)this;
   if (lVar4 == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      lVar11 = 0;
      lVar4 = 0;
   }
 else {
      lVar11 = *(long*)( lVar4 + -8 );
      if (param_1 == lVar11) {
         return;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar4 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return;
         }

         lVar4 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
         return;
      }

      _copy_on_write(this);
      lVar4 = lVar11 * 4;
      if (lVar4 != 0) {
         uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
         uVar5 = uVar5 | uVar5 >> 2;
         uVar5 = uVar5 | uVar5 >> 4;
         uVar5 = uVar5 | uVar5 >> 8;
         uVar5 = uVar5 | uVar5 >> 0x10;
         lVar4 = ( uVar5 | uVar5 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 4 != 0) {
      uVar5 = param_1 * 4 - 1;
      uVar5 = uVar5 | uVar5 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = uVar5 | uVar5 >> 0x20;
      lVar10 = uVar5 + 1;
      if (lVar10 != 0) {
         if (param_1 <= lVar11) {
            if (( lVar10 != lVar4 ) && ( iVar3 = iVar3 != 0 )) {
               return;
            }

            if (*(long*)this != 0) {
               *(long*)( *(long*)this + -8 ) = param_1;
               return;
            }

            _DAT_00000000 = 0;
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         if (lVar10 != lVar4) {
            if (lVar11 == 0) {
               puVar6 = (undefined8*)Memory::alloc_static(uVar5 + 0x11, false);
               if (puVar6 != (undefined8*)0x0) {
                  puVar8 = puVar6 + 2;
                  *puVar6 = 1;
                  puVar6[1] = 0;
                  *(undefined8**)this = puVar8;
                  goto LAB_0010d491;
               }

               uVar9 = 0x171;
               pcVar7 = "Parameter \"mem_new\" is null.";
               goto LAB_0010d592;
            }

            iVar3 = _realloc(this, lVar10);
            if (iVar3 != 0) {
               return;
            }

         }

         puVar8 = *(undefined8**)this;
         if (puVar8 == (undefined8*)0x0) {
            _DAT_00000000 = 0;
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         LAB_0010d491:puVar8[-1] = param_1;
         return;
      }

   }

   uVar9 = 0x16a;
   pcVar7 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_0010d592:_err_print_error("resize", "./core/templates/cowdata.h", uVar9, pcVar7, 0, 0);
   return;
}
/* CowData<Color>::_realloc(long) */undefined8 CowData<Color>::_realloc(CowData<Color> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* draw_rounded_rectangle(Vector<Vector2>&, Vector<int>&, Vector<Color>&, Rect2 const&, float
   const*, Rect2 const&, Rect2 const&, Color const&, Color const&, int, Vector2 const&, bool) */void draw_rounded_rectangle(Vector *param_1, Vector *param_2, Vector *param_3, Rect2 *param_4, float *param_5, Rect2 *param_6, Rect2 *param_7, Color *param_8, Color *param_9, int param_10, Vector2 *param_11, bool param_12) {
   CowData<Color> *this;
   long *plVar1;
   float *pfVar2;
   code *pcVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long lVar6;
   bool bVar7;
   int iVar8;
   int iVar9;
   ulong uVar10;
   undefined8 *puVar11;
   undefined8 *puVar12;
   long lVar13;
   undefined8 *puVar14;
   int iVar15;
   long lVar16;
   long lVar17;
   long lVar18;
   int iVar19;
   ulong uVar20;
   undefined8 *puVar21;
   int *piVar22;
   long lVar23;
   int iVar24;
   long lVar25;
   long in_FS_OFFSET;
   float fVar26;
   float fVar27;
   float fVar28;
   float fVar29;
   float fVar30;
   int local_118;
   int local_114;
   int local_d8;
   int local_d4;
   int local_c0;
   int local_b8;
   float local_b0;
   float local_ac[3];
   long local_a0[2];
   long local_90;
   float local_88[4];
   float local_78[4];
   undefined8 local_68[5];
   long local_40;
   local_118 = param_10;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( param_1 + 8 ) == 0) {
      local_c0 = 0;
   }
 else {
      local_c0 = (int)*(undefined8*)( *(long*)( param_1 + 8 ) + -8 );
   }

   if (( ( ( 0.0 < *param_5 ) || ( 0.0 < param_5[1] ) ) || ( 0.0 < param_5[2] ) ) || ( 0.0 < param_5[3] )) {
      local_d4 = param_10 + 1;
   }
 else {
      local_d4 = 2;
      local_118 = 1;
   }

   fVar26 = *(float*)( param_6 + 4 );
   fVar27 = *(float*)param_6;
   bVar7 = !param_12;
   local_88[1] = fVar26 - *(float*)( param_4 + 4 );
   fVar30 = fVar27 - *(float*)param_4;
   local_88[0] = local_88[1];
   if (fVar30 <= local_88[1]) {
      local_88[0] = fVar30;
   }

   fVar29 = ( *(float*)( param_4 + 8 ) - *(float*)( param_6 + 8 ) ) - fVar30;
   local_88[0] = *param_5 - local_88[0];
   local_88[3] = ( *(float*)( param_4 + 0xc ) - *(float*)( param_6 + 0xc ) ) - local_88[1];
   if (local_88[0] <= 0.0) {
      local_88[0] = 0.0;
   }

   if (fVar29 <= local_88[1]) {
      local_88[1] = fVar29;
   }

   local_88[1] = param_5[1] - local_88[1];
   if (local_88[1] <= 0.0) {
      local_88[1] = 0.0;
   }

   local_88[2] = local_88[3];
   if (fVar29 <= local_88[3]) {
      local_88[2] = fVar29;
   }

   local_88[2] = param_5[2] - local_88[2];
   if (local_88[2] <= 0.0) {
      local_88[2] = 0.0;
   }

   if (fVar30 <= local_88[3]) {
      local_88[3] = fVar30;
   }

   local_88[3] = param_5[3] - local_88[3];
   if (local_88[3] <= 0.0) {
      local_88[3] = 0.0;
   }

   fVar30 = *(float*)( param_6 + 8 ) + fVar27;
   fVar29 = *(float*)( param_6 + 0xc ) + fVar26;
   lVar18 = 0;
   local_a0[0] = 0;
   local_68[0] = CONCAT44(local_88[0] + fVar26, fVar27 + local_88[0]);
   local_68[1] = CONCAT44(fVar26 + local_88[1], fVar30 - local_88[1]);
   local_68[3] = CONCAT44(fVar29 - local_88[3], fVar27 + local_88[3]);
   local_68[2] = CONCAT44(fVar29 - local_88[2], fVar30 - local_88[2]);
   iVar8 = CowData<Vector2>::resize<false>((CowData<Vector2>*)local_a0, 4);
   if (iVar8 == 0) {
      do {
         if (local_a0[0] == 0) {
            lVar16 = 0;
            LAB_0010de83:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar18, lVar16, "p_index", "size()", "", false, false);
         }
 else {
            lVar16 = *(long*)( local_a0[0] + -8 );
            if (lVar16 <= lVar18) goto LAB_0010de83;
            CowData<Vector2>::_copy_on_write((CowData<Vector2>*)local_a0);
            *(undefined8*)( local_a0[0] + lVar18 * 8 ) = local_68[lVar18];
         }

         lVar18 = lVar18 + 1;
      }
 while ( lVar18 != 4 );
   }

   fVar26 = *(float*)( param_7 + 4 );
   fVar27 = *(float*)param_7;
   fVar30 = fVar26 - *(float*)( param_4 + 4 );
   fVar29 = fVar27 - *(float*)param_4;
   local_78[0] = fVar30;
   if (fVar29 <= fVar30) {
      local_78[0] = fVar29;
   }

   fVar28 = ( *(float*)( param_4 + 8 ) - *(float*)( param_7 + 8 ) ) - fVar29;
   local_78[0] = *param_5 - local_78[0];
   local_78[3] = ( *(float*)( param_4 + 0xc ) - *(float*)( param_7 + 0xc ) ) - fVar30;
   if (local_78[0] <= 0.0) {
      local_78[0] = 0.0;
   }

   if (fVar28 <= fVar30) {
      fVar30 = fVar28;
   }

   local_78[1] = param_5[1] - fVar30;
   if (param_5[1] - fVar30 <= 0.0) {
      local_78[1] = 0.0;
   }

   local_78[2] = local_78[3];
   if (fVar28 <= local_78[3]) {
      local_78[2] = fVar28;
   }

   local_78[2] = param_5[2] - local_78[2];
   if (local_78[2] <= 0.0) {
      local_78[2] = 0.0;
   }

   if (fVar29 <= local_78[3]) {
      local_78[3] = fVar29;
   }

   local_78[3] = param_5[3] - local_78[3];
   if (local_78[3] <= 0.0) {
      local_78[3] = 0.0;
   }

   fVar30 = *(float*)( param_7 + 8 ) + fVar27;
   fVar29 = *(float*)( param_7 + 0xc ) + fVar26;
   lVar18 = 0;
   local_90 = 0;
   local_68[0] = CONCAT44(local_78[0] + fVar26, fVar27 + local_78[0]);
   local_68[1] = CONCAT44(fVar26 + local_78[1], fVar30 - local_78[1]);
   local_68[3] = CONCAT44(fVar29 - local_78[3], fVar27 + local_78[3]);
   local_68[2] = CONCAT44(fVar29 - local_78[2], fVar30 - local_78[2]);
   iVar8 = CowData<Vector2>::resize<false>((CowData<Vector2>*)&local_90, 4);
   if (iVar8 == 0) {
      do {
         if (local_90 == 0) {
            lVar16 = 0;
            LAB_0010decb:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar18, lVar16, "p_index", "size()", "", false, false);
         }
 else {
            lVar16 = *(long*)( local_90 + -8 );
            if (lVar16 <= lVar18) goto LAB_0010decb;
            CowData<Vector2>::_copy_on_write((CowData<Vector2>*)&local_90);
            *(undefined8*)( local_90 + lVar18 * 8 ) = local_68[lVar18];
         }

         lVar18 = lVar18 + 1;
      }
 while ( lVar18 != 4 );
   }

   lVar18 = *(long*)( param_3 + 8 );
   fVar26 = (float)*(undefined8*)( param_4 + 8 ) * (float)_LC135 + (float)*(undefined8*)param_4;
   fVar27 = (float)( ( ulong ) * (undefined8*)( param_4 + 8 ) >> 0x20 ) * _LC135._4_4_ + (float)( ( ulong ) * (undefined8*)param_4 >> 0x20 );
   if (lVar18 == 0) {
      local_114 = 0;
      lVar16 = 0;
   }
 else {
      lVar16 = *(long*)( lVar18 + -8 );
      local_114 = (int)lVar16;
   }

   if (*(long*)( param_1 + 8 ) == 0) {
      local_d8 = 0;
   }
 else {
      local_d8 = *(int*)( *(long*)( param_1 + 8 ) + -8 );
   }

   iVar8 = ( ( -(uint)!bVar7 & 0xfffffffc ) + 8 ) * local_d4;
   lVar17 = (long)( iVar8 + local_114 );
   this(CowData<Color> * )(param_3 + 8);
   if (lVar17 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      goto LAB_0010dc5c;
   }

   if (lVar18 == 0) {
      if (( lVar17 == lVar16 ) || ( lVar17 == 0 )) goto LAB_0010dc5c;
   }
 else {
      if (lVar17 == lVar16) goto LAB_0010dc5c;
      if (lVar17 == 0) {
         LOCK();
         plVar1 = (long*)( lVar18 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar18 = *(long*)( param_3 + 8 );
            *(undefined8*)( param_3 + 8 ) = 0;
            Memory::free_static((void*)( lVar18 + -0x10 ), false);
         }
 else {
            *(undefined8*)( param_3 + 8 ) = 0;
         }

         goto LAB_0010dc5c;
      }

   }

   CowData<Color>::_copy_on_write(this);
   uVar20 = lVar17 * 0x10 - 1;
   uVar20 = uVar20 >> 1 | uVar20;
   uVar20 = uVar20 >> 2 | uVar20;
   uVar20 = uVar20 >> 4 | uVar20;
   uVar20 = uVar20 >> 8 | uVar20;
   uVar20 = uVar20 >> 0x10 | uVar20;
   uVar20 = uVar20 >> 0x20 | uVar20;
   lVar18 = uVar20 + 1;
   if (lVar16 * 0x10 == 0) {
      lVar25 = 0;
      if (lVar17 <= lVar16) goto LAB_0010e09c;
      LAB_0010e0ed:if (lVar16 != 0) {
         iVar19 = CowData<Color>::_realloc(this, lVar18);
         if (iVar19 != 0) goto LAB_0010dc5c;
         goto LAB_0010dbfb;
      }

      puVar14 = (undefined8*)Memory::alloc_static(uVar20 + 0x11, false);
      if (puVar14 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         goto LAB_0010dc5c;
      }

      puVar21 = puVar14 + 2;
      *puVar14 = 1;
      puVar14[1] = 0;
      *(undefined8**)( param_3 + 8 ) = puVar21;
      lVar18 = 0;
      LAB_0010dc15:uVar5 = _UNK_00119378;
      uVar4 = __LC127;
      puVar11 = puVar21 + lVar18 * 2;
      puVar14 = puVar11;
      if (( ( lVar17 - lVar18 ) * 0x10 & 0x10U ) != 0) {
         *puVar11 = __LC127;
         puVar11[1] = uVar5;
         puVar14 = puVar11 + 2;
         if (puVar11 + ( lVar17 - lVar18 ) * 2 == puVar11 + 2) goto LAB_0010dc58;
      }

      do {
         *puVar14 = uVar4;
         puVar14[1] = uVar5;
         puVar12 = puVar14 + 4;
         puVar14[2] = uVar4;
         puVar14[3] = uVar5;
         puVar14 = puVar12;
      }
 while ( puVar11 + ( lVar17 - lVar18 ) * 2 != puVar12 );
   }
 else {
      uVar10 = lVar16 * 0x10 - 1;
      uVar10 = uVar10 | uVar10 >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      uVar10 = uVar10 | uVar10 >> 0x20;
      if (lVar17 <= lVar16) {
         lVar25 = uVar10 + 1;
         LAB_0010e09c:if (( lVar25 == lVar18 ) || ( iVar19 = iVar19 == 0 )) {
            if (*(long*)( param_3 + 8 ) == 0) {
               _DAT_00000000 = 0;
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            *(long*)( *(long*)( param_3 + 8 ) + -8 ) = lVar17;
         }

         goto LAB_0010dc5c;
      }

      if (uVar10 != uVar20) goto LAB_0010e0ed;
      LAB_0010dbfb:puVar21 = *(undefined8**)( param_3 + 8 );
      if (puVar21 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar18 = puVar21[-1];
      if (lVar18 < lVar17) goto LAB_0010dc15;
   }

   LAB_0010dc58:puVar21[-1] = lVar17;
   LAB_0010dc5c:CowData<Vector2>::resize<false>((CowData<Vector2>*)( param_1 + 8 ), (long)( iVar8 + local_d8 ));
   lVar25 = 0;
   CowData<Color>::_copy_on_write(this);
   lVar18 = *(long*)( param_3 + 8 );
   CowData<Vector2>::_copy_on_write((CowData<Vector2>*)( param_1 + 8 ));
   lVar17 = local_90;
   lVar16 = *(long*)( param_1 + 8 );
   local_b8 = 0;
   while (local_118 < 0) {
      lVar25 = lVar25 + 1;
      local_b8 = local_b8 + local_d4;
      if (lVar25 == 4) goto LAB_0010e273;
   }
;
   do {
      lVar6 = local_a0[0];
      fVar30 = local_78[lVar25];
      pfVar2 = (float*)( local_a0[0] + lVar25 * 8 );
      iVar8 = local_b8;
      if (bVar7) {
         iVar19 = 0;
         goto LAB_0010df18;
      }

      iVar19 = 0;
      iVar24 = local_b8;
      LAB_0010dd74:do {
         sincosf((float)( ( (double)iVar19 / (double)local_118 + (double)(int)lVar25 ) * __LC128 + __LC129 ), local_ac, &local_b0);
         if (lVar17 == 0) {
            LAB_0010dff0:lVar23 = 0;
            LAB_0010dff6:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar25, lVar23, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar23 = *(long*)( lVar17 + -8 );
         if (lVar23 <= lVar25) goto LAB_0010dff6;
         fVar29 = fVar30 * local_b0 + *(float*)( lVar17 + lVar25 * 8 );
         fVar28 = fVar30 * local_ac[0] + *(float*)( lVar17 + 4 + lVar25 * 8 );
         uVar4 = *(undefined8*)param_8;
         uVar5 = *(undefined8*)( param_8 + 8 );
         *(ulong*)( lVar16 + (long)( local_d8 + iVar24 ) * 8 ) = CONCAT44(fVar28 - (float)( ( ulong ) * (undefined8*)param_11 >> 0x20 ) * ( fVar29 - fVar26 ), fVar29 - (float)*(undefined8*)param_11 * ( fVar28 - fVar27 ));
         lVar13 = (long)( local_114 + iVar24 ) * 0x10;
         puVar14 = (undefined8*)( lVar18 + lVar13 );
         *puVar14 = uVar4;
         puVar14[1] = uVar5;
         if (bVar7) {
            if (lVar6 == 0) goto LAB_0010dff0;
            lVar23 = *(long*)( lVar6 + -8 );
            if (lVar23 <= lVar25) goto LAB_0010dff6;
            iVar19 = iVar19 + 1;
            fVar29 = local_88[lVar25] * local_ac[0] + pfVar2[1];
            fVar28 = local_b0 * local_88[lVar25] + *pfVar2;
            *(ulong*)( lVar16 + 8 + (long)( local_d8 + iVar24 ) * 8 ) = CONCAT44(fVar29 - (float)( ( ulong ) * (undefined8*)param_11 >> 0x20 ) * ( fVar28 - fVar26 ), fVar28 - (float)*(undefined8*)param_11 * ( fVar29 - fVar27 ));
            uVar4 = *(undefined8*)( param_9 + 8 );
            puVar14 = (undefined8*)( lVar18 + 0x10 + lVar13 );
            *puVar14 = *(undefined8*)param_9;
            puVar14[1] = uVar4;
            iVar8 = iVar8 + 1;
            if (local_118 < iVar19) break;
            LAB_0010df18:iVar24 = iVar8 * 2;
            goto LAB_0010dd74;
         }

         iVar19 = iVar19 + 1;
         iVar24 = iVar8 + 1;
         iVar8 = iVar24;
      }
 while ( iVar19 <= local_118 );
      lVar25 = lVar25 + 1;
      local_b8 = local_b8 + local_d4;
   }
 while ( lVar25 != 4 );
   LAB_0010e273:if (lVar16 == 0) {
      iVar8 = 0;
   }
 else {
      iVar8 = *(int*)( lVar16 + -8 );
   }

   iVar8 = iVar8 - local_c0;
   lVar18 = *(long*)( param_2 + 8 );
   if (bVar7) {
      if (lVar18 == 0) {
         lVar18 = 0;
      }
 else {
         lVar18 = (long)*(int*)( lVar18 + -8 );
      }

      CowData<int>::resize<false>((CowData<int>*)( param_2 + 8 ), (long)( iVar8 * 3 + (int)lVar18 ));
      CowData<int>::_copy_on_write((CowData<int>*)( param_2 + 8 ));
      if (0 < iVar8) {
         iVar19 = 0;
         piVar22 = (int*)( *(long*)( param_2 + 8 ) + lVar18 * 4 );
         do {
            iVar9 = iVar19 % iVar8;
            iVar24 = iVar19 + 2;
            iVar19 = iVar19 + 1;
            *piVar22 = iVar9 + local_c0;
            piVar22[1] = iVar24 % iVar8 + local_c0;
            piVar22[2] = iVar19 % iVar8 + local_c0;
            piVar22 = piVar22 + 3;
         }
 while ( iVar19 != iVar8 );
      }

   }
 else {
      iVar19 = iVar8 / 2 + -1;
      if (lVar18 == 0) {
         lVar18 = 0;
      }
 else {
         lVar18 = (long)*(int*)( lVar18 + -8 );
      }

      CowData<int>::resize<false>((CowData<int>*)( param_2 + 8 ), (long)( (int)lVar18 + iVar19 * 6 ));
      CowData<int>::_copy_on_write((CowData<int>*)( param_2 + 8 ));
      if (0 < iVar19) {
         iVar24 = iVar8 + -1 + local_c0;
         puVar14 = (undefined8*)( *(long*)( param_2 + 8 ) + lVar18 * 4 );
         iVar19 = local_c0;
         do {
            iVar15 = ( iVar24 + local_c0 + -1 ) - iVar19;
            iVar9 = iVar19 + 1;
            *(int*)( puVar14 + 2 ) = ( iVar24 + local_c0 ) - iVar19;
            *(int*)( (long)puVar14 + 0x14 ) = iVar15;
            *puVar14 = CONCAT44(iVar15, iVar19);
            puVar14[1] = CONCAT44(iVar19, iVar9);
            puVar14 = puVar14 + 3;
            iVar19 = iVar9;
         }
 while ( iVar9 != iVar8 / 2 + local_c0 + -1 );
      }

   }

   if (lVar17 != 0) {
      LOCK();
      plVar1 = (long*)( lVar17 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_90 + -0x10 ), false);
      }

   }

   if (local_a0[0] != 0) {
      LOCK();
      plVar1 = (long*)( local_a0[0] + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static((void*)( local_a0[0] + -0x10 ), false);
            return;
         }

         goto LAB_0010e4c6;
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010e4c6:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x0010e678) *//* WARNING: Removing unreachable block (ram,0x0010e80d) *//* WARNING: Removing unreachable block (ram,0x0010e819) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
/* MethodBindTRC<float>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<float>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   char *pcVar3;
   Variant *pVVar4;
   long *plVar5;
   undefined4 in_register_00000014;
   long *plVar6;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   float fVar7;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar6 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar6 != (long*)0x0 ) && ( plVar6[1] != 0 ) ) && ( *(char*)( plVar6[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar6[1] == 0) {
         plVar5 = (long*)plVar6[0x23];
         if (plVar5 == (long*)0x0) {
            plVar5 = (long*)( **(code**)( *plVar6 + 0x40 ) )(plVar6);
         }

      }
 else {
         plVar5 = (long*)( plVar6[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar5) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC146, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         pcVar3 = local_58;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar6 = (long*)( local_58 + -0x10 );
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }

         }

         lVar2 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar6 = (long*)( local_60 + -0x10 );
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010ea10;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar4 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar4 & 1 ) != 0) {
            pVVar4 = *(Variant**)( pVVar4 + *(long*)( (long)plVar6 + (long)pVVar1 ) + -1 );
         }

         fVar7 = (float)( *(code*)pVVar4 )();
         Variant::Variant((Variant*)local_48, fVar7);
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

   LAB_0010ea10:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<float>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<float>::validated_call(MethodBindTRC<float> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   char *pcVar1;
   code *pcVar2;
   long *plVar3;
   long in_FS_OFFSET;
   float fVar4;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
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
         pcVar1 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar3 = (long*)( local_48 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar1 + -0x10, false);
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010ed08;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   fVar4 = (float)( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(double*)( param_3 + 8 ) = (double)fVar4;
   LAB_0010ed08:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<float>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<float>::ptrcall(MethodBindTRC<float> *this, Object *param_1, void **param_2, void *param_3) {
   char *pcVar1;
   code *pcVar2;
   long *plVar3;
   long in_FS_OFFSET;
   float fVar4;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
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
         pcVar1 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar3 = (long*)( local_48 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar1 + -0x10, false);
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010eef7;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   fVar4 = (float)( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(double*)param_3 = (double)fVar4;
   LAB_0010eef7:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<bool const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<bool_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   long *plVar1;
   char *pcVar2;
   code *pcVar3;
   Variant *pVVar4;
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
         pVVar4 = param_2[0x23];
         if (pVVar4 == (Variant*)0x0) {
            pVVar4 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar4 = param_2[1] + 0x20;
      }

      if (local_48 == (char*)*(long*)pVVar4) {
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
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010f0dd;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( param_1 + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   local_48 = (char*)CONCAT71(local_48._1_7_, *(undefined1*)( *(long*)param_3 + 8 ));
   ( *pcVar3 )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), (StringName*)&local_48);
   LAB_0010f0dd:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<bool const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<bool_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   code *pcVar2;
   long *plVar3;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_38, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar3 = (long*)param_2[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar3 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_38 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0;
         local_30 = 0x35;
         String::parse_latin1((StrRange*)&local_40);
         vformat<StringName>((StringName*)&local_38, (StrRange*)&local_40, &local_48);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
         lVar1 = local_40;
         if (local_40 != 0) {
            LOCK();
            plVar3 = (long*)( local_40 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_40 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010f2db;
      }

      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   local_38 = (char*)CONCAT71(local_38._1_7_, **param_3 != '\0');
   ( *pcVar2 )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), (StringName*)&local_38);
   LAB_0010f2db:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Vector2 const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Vector2_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   long *plVar1;
   long lVar2;
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar3;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_38, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar3 = param_2[0x23];
         if (pVVar3 == (Variant*)0x0) {
            pVVar3 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar3 = param_2[1] + 0x20;
      }

      if (local_38 == *(char**)pVVar3) {
         if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0;
         local_30 = 0x35;
         String::parse_latin1((StrRange*)&local_40);
         vformat<StringName>((StringName*)&local_38, (StrRange*)&local_40, &local_48);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
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

         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0010f682;
      }

      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0010f4e9. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
      return;
   }

   LAB_0010f682:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Vector2 const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Vector2_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   code *UNRECOVERED_JUMPTABLE;
   long *plVar2;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_38, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar2 = (long*)param_2[0x23];
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar2 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_38 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0;
         local_30 = 0x35;
         String::parse_latin1((StrRange*)&local_40);
         vformat<StringName>((StringName*)&local_38, (StrRange*)&local_40, &local_48);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
         lVar1 = local_40;
         if (local_40 != 0) {
            LOCK();
            plVar2 = (long*)( local_40 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               local_40 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0010f882;
      }

      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0010f6e5. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }

   LAB_0010f882:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<int const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<int_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   Variant *pVVar4;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_38, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar4 = param_2[0x23];
         if (pVVar4 == (Variant*)0x0) {
            pVVar4 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar4 = param_2[1] + 0x20;
      }

      if (local_38 == (char*)*(long*)pVVar4) {
         if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0;
         local_30 = 0x35;
         String::parse_latin1((StrRange*)&local_40);
         vformat<StringName>((StringName*)&local_38, (StrRange*)&local_40, &local_48);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
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

         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010f8db;
      }

      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( param_1 + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   local_38 = (char*)CONCAT44(local_38._4_4_, (int)*(undefined8*)( *(long*)param_3 + 8 ));
   ( *pcVar3 )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), (StringName*)&local_38);
   LAB_0010f8db:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<int_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   char *pcVar1;
   code *pcVar2;
   long *plVar3;
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
         plVar3 = (long*)param_2[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar3 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
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
         pcVar1 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar3 = (long*)( local_48 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar1 + -0x10, false);
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010fadc;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   local_48 = (char*)CONCAT44(local_48._4_4_, (int)**param_3);
   ( *pcVar2 )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), (StringName*)&local_48);
   LAB_0010fadc:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector2>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<Vector2>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   char *pcVar3;
   Variant *pVVar4;
   long *plVar5;
   undefined4 in_register_00000014;
   long *plVar6;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_78;
   long local_70;
   char *local_68;
   undefined8 local_60;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar6 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar6 != (long*)0x0 ) && ( plVar6[1] != 0 ) ) && ( *(char*)( plVar6[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar6[1] == 0) {
         plVar5 = (long*)plVar6[0x23];
         if (plVar5 == (long*)0x0) {
            plVar5 = (long*)( **(code**)( *plVar6 + 0x40 ) )(plVar6);
         }

      }
 else {
         plVar5 = (long*)( plVar6[1] + 0x20 );
      }

      if (local_68 == (char*)*plVar5) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC146, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         pcVar3 = local_68;
         if (local_68 != (char*)0x0) {
            LOCK();
            plVar6 = (long*)( local_68 + -0x10 );
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
               local_68 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }

         }

         lVar2 = local_70;
         if (local_70 != 0) {
            LOCK();
            plVar6 = (long*)( local_70 + -0x10 );
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
               local_70 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010fd60;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar4 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar4 & 1 ) != 0) {
            pVVar4 = *(Variant**)( pVVar4 + *(long*)( (long)plVar6 + (long)pVVar1 ) + -1 );
         }

         local_50 = ( *(code*)pVVar4 )();
         Variant::Variant((Variant*)local_48, (Vector2*)&local_50);
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

   LAB_0010fd60:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector2>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Vector2>::validated_call(MethodBindTRC<Vector2> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   char *pcVar1;
   code *pcVar2;
   long *plVar3;
   long in_FS_OFFSET;
   undefined8 uVar4;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
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
         pcVar1 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar3 = (long*)( local_48 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar1 + -0x10, false);
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010ffc4;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar4 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(undefined8*)( param_3 + 8 ) = uVar4;
   LAB_0010ffc4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector2>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Vector2>::ptrcall(MethodBindTRC<Vector2> *this, Object *param_1, void **param_2, void *param_3) {
   char *pcVar1;
   code *pcVar2;
   long *plVar3;
   long in_FS_OFFSET;
   undefined8 uVar4;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
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
         pcVar1 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar3 = (long*)( local_48 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar1 + -0x10, false);
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001101a3;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar4 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(undefined8*)param_3 = uVar4;
   LAB_001101a3:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Vector2>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Vector2>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   long *plVar1;
   long lVar2;
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar3;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_38, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar3 = param_2[0x23];
         if (pVVar3 == (Variant*)0x0) {
            pVVar3 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar3 = param_2[1] + 0x20;
      }

      if (local_38 == *(char**)pVVar3) {
         if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0;
         local_30 = 0x35;
         String::parse_latin1((StrRange*)&local_40);
         vformat<StringName>((StringName*)&local_38, (StrRange*)&local_40, &local_48);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
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

         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00110532;
      }

      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0011039a. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( *(long*)param_3 + 8 ), (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_00110532:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Vector2>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Vector2>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   code *UNRECOVERED_JUMPTABLE;
   long *plVar2;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_38, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar2 = (long*)param_2[0x23];
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar2 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_38 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0;
         local_30 = 0x35;
         String::parse_latin1((StrRange*)&local_40);
         vformat<StringName>((StringName*)&local_38, (StrRange*)&local_40, &local_48);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
         lVar1 = local_40;
         if (local_40 != 0) {
            LOCK();
            plVar2 = (long*)( local_40 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               local_40 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00110732;
      }

      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00110599. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(**param_3, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_00110732:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<float, Side>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<float,Side>::validated_call(MethodBindTRC<float,Side> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   char *pcVar1;
   code *pcVar2;
   long *plVar3;
   long in_FS_OFFSET;
   float fVar4;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
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

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         pcVar1 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar3 = (long*)( local_48 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar1 + -0x10, false);
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011078e;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   fVar4 = (float)( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), *(undefined4*)( *param_2 + 8 ));
   *(double*)( param_3 + 8 ) = (double)fVar4;
   LAB_0011078e:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<float, Side>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<float,Side>::ptrcall(MethodBindTRC<float,Side> *this, Object *param_1, void **param_2, void *param_3) {
   char *pcVar1;
   code *pcVar2;
   long *plVar3;
   long in_FS_OFFSET;
   float fVar4;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
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

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         pcVar1 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar3 = (long*)( local_48 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar1 + -0x10, false);
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011098c;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   fVar4 = (float)( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), **param_2);
   *(double*)param_3 = (double)fVar4;
   LAB_0011098c:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<float>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<float>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   long *plVar1;
   long lVar2;
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar3;
   long in_FS_OFFSET;
   undefined1 auVar4[16];
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_38, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar3 = param_2[0x23];
         if (pVVar3 == (Variant*)0x0) {
            pVVar3 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar3 = param_2[1] + 0x20;
      }

      if (local_38 == *(char**)pVVar3) {
         if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0;
         local_30 = 0x35;
         String::parse_latin1((StrRange*)&local_40);
         vformat<StringName>((StringName*)&local_38, (StrRange*)&local_40, &local_48);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
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

         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00110d32;
      }

      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar4._4_12_ = SUB1612((undefined1[16])0x0, 4);
      auVar4._0_4_ = (float)*(double*)( *(long*)param_3 + 8 );
      /* WARNING: Could not recover jumptable at 0x00110b9e. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(auVar4._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_00110d32:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<float>::ptrcall(Object*, void const**, void*) const */void MethodBindT<float>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   code *UNRECOVERED_JUMPTABLE;
   long *plVar2;
   long in_FS_OFFSET;
   undefined1 auVar3[16];
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_38, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar2 = (long*)param_2[0x23];
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar2 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_38 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0;
         local_30 = 0x35;
         String::parse_latin1((StrRange*)&local_40);
         vformat<StringName>((StringName*)&local_38, (StrRange*)&local_40, &local_48);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
         lVar1 = local_40;
         if (local_40 != 0) {
            LOCK();
            plVar2 = (long*)( local_40 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               local_40 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00110f32;
      }

      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar3._4_12_ = SUB1612((undefined1[16])0x0, 4);
      auVar3._0_4_ = (float)**param_3;
      /* WARNING: Could not recover jumptable at 0x00110d9d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(auVar3._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_00110f32:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Side, float>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Side,float>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   long *plVar1;
   long lVar2;
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar3;
   long in_FS_OFFSET;
   undefined1 auVar4[16];
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_38, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar3 = param_2[0x23];
         if (pVVar3 == (Variant*)0x0) {
            pVVar3 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar3 = param_2[1] + 0x20;
      }

      if (local_38 == *(char**)pVVar3) {
         if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0;
         local_30 = 0x35;
         String::parse_latin1((StrRange*)&local_40);
         vformat<StringName>((StringName*)&local_38, (StrRange*)&local_40, &local_48);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
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

         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00111142;
      }

      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar4._4_12_ = SUB1612((undefined1[16])0x0, 4);
      auVar4._0_4_ = (float)*(double*)( *(long*)( param_3 + 8 ) + 8 );
      /* WARNING: Could not recover jumptable at 0x00110fa5. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(auVar4._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_00111142:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Side, float>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Side,float>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   char *pcVar1;
   code *UNRECOVERED_JUMPTABLE;
   long *plVar2;
   long in_FS_OFFSET;
   undefined1 auVar3[16];
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar2 = (long*)param_2[0x23];
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar2 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar2) {
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
         pcVar1 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar2 = (long*)( local_48 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar1 + -0x10, false);
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00111354;
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
      /* WARNING: Load size is inaccurate */
      auVar3._4_12_ = SUB1612((undefined1[16])0x0, 4);
      auVar3._0_4_ = (float)**(double**)( (long)param_3 + 8 );
      /* WARNING: Could not recover jumptable at 0x001111b7. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(auVar3._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_00111354:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<int, Corner>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<int,Corner>::validated_call(MethodBindTRC<int,Corner> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   int iVar2;
   code *pcVar3;
   long *plVar4;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar4 = (long*)( local_50 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001113aa;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   iVar2 = ( *pcVar3 )(param_1 + *(long*)( this + 0x60 ), *(undefined4*)( *param_2 + 8 ));
   *(long*)( param_3 + 8 ) = (long)iVar2;
   LAB_001113aa:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int, Corner>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<int,Corner>::ptrcall(MethodBindTRC<int,Corner> *this, Object *param_1, void **param_2, void *param_3) {
   char *pcVar1;
   int iVar2;
   code *pcVar3;
   long *plVar4;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         pcVar1 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar4 = (long*)( local_48 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar1 + -0x10, false);
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001115a8;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   iVar2 = ( *pcVar3 )(param_1 + *(long*)( this + 0x60 ), **param_2);
   *(long*)param_3 = (long)iVar2;
   LAB_001115a8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Corner, int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Corner,int>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   long *plVar1;
   long lVar2;
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar3;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_38, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar3 = param_2[0x23];
         if (pVVar3 == (Variant*)0x0) {
            pVVar3 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar3 = param_2[1] + 0x20;
      }

      if (local_38 == *(char**)pVVar3) {
         if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0;
         local_30 = 0x35;
         String::parse_latin1((StrRange*)&local_40);
         vformat<StringName>((StringName*)&local_38, (StrRange*)&local_40, &local_48);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
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

         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0011195a;
      }

      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x001117bf. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ), *(undefined4*)( *(long*)( param_3 + 8 ) + 8 ));
      return;
   }

   LAB_0011195a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Corner, int>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Corner,int>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   char *pcVar1;
   code *UNRECOVERED_JUMPTABLE;
   long *plVar2;
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
         plVar2 = (long*)param_2[0x23];
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar2 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar2) {
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
         pcVar1 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar2 = (long*)( local_48 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar1 + -0x10, false);
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00111b5c;
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
      /* WARNING: Load size is inaccurate */
      /* WARNING: Could not recover jumptable at 0x001119c1. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3, **(undefined4**)( (long)param_3 + 8 ));
      return;
   }

   LAB_00111b5c:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   char *pcVar3;
   bool bVar4;
   long *plVar6;
   undefined4 in_register_00000014;
   long *plVar7;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   Variant *pVVar5;
   plVar7 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar7 != (long*)0x0 ) && ( plVar7[1] != 0 ) ) && ( *(char*)( plVar7[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar7[1] == 0) {
         plVar6 = (long*)plVar7[0x23];
         if (plVar6 == (long*)0x0) {
            plVar6 = (long*)( **(code**)( *plVar7 + 0x40 ) )(plVar7);
         }

      }
 else {
         plVar6 = (long*)( plVar7[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar6) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC146, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         pcVar3 = local_58;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar7 = (long*)( local_58 + -0x10 );
            *plVar7 = *plVar7 + -1;
            UNLOCK();
            if (*plVar7 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }

         }

         lVar2 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar7 = (long*)( local_60 + -0x10 );
            *plVar7 = *plVar7 + -1;
            UNLOCK();
            if (*plVar7 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00111c30;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar5 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar5 & 1 ) != 0) {
            pVVar5 = *(Variant**)( pVVar5 + *(long*)( (long)plVar7 + (long)pVVar1 ) + -1 );
         }

         bVar4 = (bool)( *(code*)pVVar5 )();
         Variant::Variant((Variant*)local_48, bVar4);
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

   LAB_00111c30:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<bool>::validated_call(MethodBindTRC<bool> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   Variant VVar2;
   long *plVar4;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar3;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar4) {
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
         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar4 = (long*)( local_50 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00111e92;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   VVar2 = ( Variant )(*pcVar3)(param_1 + *(long*)( this + 0x60 ));
   param_3[8] = VVar2;
   LAB_00111e92:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   undefined1 uVar2;
   long *plVar4;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar3;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar4) {
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
         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar4 = (long*)( local_50 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00112071;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar2 = ( *pcVar3 )(param_1 + *(long*)( this + 0x60 ));
   *(undefined1*)param_3 = uVar2;
   LAB_00112071:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<bool>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   long *plVar1;
   long lVar2;
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar3;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_38, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar3 = param_2[0x23];
         if (pVVar3 == (Variant*)0x0) {
            pVVar3 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar3 = param_2[1] + 0x20;
      }

      if (local_38 == *(char**)pVVar3) {
         if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0;
         local_30 = 0x35;
         String::parse_latin1((StrRange*)&local_40);
         vformat<StringName>((StringName*)&local_38, (StrRange*)&local_40, &local_48);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
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

         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_001123f2;
      }

      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00112259. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined1*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_001123f2:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */void MethodBindT<bool>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   code *UNRECOVERED_JUMPTABLE;
   long *plVar2;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_38, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar2 = (long*)param_2[0x23];
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar2 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_38 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0;
         local_30 = 0x35;
         String::parse_latin1((StrRange*)&local_40);
         vformat<StringName>((StringName*)&local_38, (StrRange*)&local_40, &local_48);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
         lVar1 = local_40;
         if (local_40 != 0) {
            LOCK();
            plVar2 = (long*)( local_40 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               local_40 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_001125f2;
      }

      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0011245e. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3 != '\0');
      return;
   }

   LAB_001125f2:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<int, Side>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<int,Side>::validated_call(MethodBindTRC<int,Side> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   char *pcVar1;
   int iVar2;
   code *pcVar3;
   long *plVar4;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         pcVar1 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar4 = (long*)( local_48 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar1 + -0x10, false);
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011264a;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   iVar2 = ( *pcVar3 )(param_1 + *(long*)( this + 0x60 ), *(undefined4*)( *param_2 + 8 ));
   *(long*)( param_3 + 8 ) = (long)iVar2;
   LAB_0011264a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int, Side>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<int,Side>::ptrcall(MethodBindTRC<int,Side> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   int iVar2;
   code *pcVar3;
   long *plVar4;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar4 = (long*)( local_50 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00112848;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   iVar2 = ( *pcVar3 )(param_1 + *(long*)( this + 0x60 ), **param_2);
   *(long*)param_3 = (long)iVar2;
   LAB_00112848:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Side, int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Side,int>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   long *plVar1;
   char *pcVar2;
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar3;
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
         pVVar3 = param_2[0x23];
         if (pVVar3 == (Variant*)0x0) {
            pVVar3 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar3 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar3) {
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
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00112bfc;
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
      /* WARNING: Could not recover jumptable at 0x00112a63. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ), *(undefined4*)( *(long*)( param_3 + 8 ) + 8 ));
      return;
   }

   LAB_00112bfc:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Side, int>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Side,int>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   code *UNRECOVERED_JUMPTABLE;
   long *plVar2;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_38, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar2 = (long*)param_2[0x23];
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar2 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_38 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0;
         local_30 = 0x35;
         String::parse_latin1((StrRange*)&local_40);
         vformat<StringName>((StringName*)&local_38, (StrRange*)&local_40, &local_48);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
         lVar1 = local_40;
         if (local_40 != 0) {
            LOCK();
            plVar2 = (long*)( local_40 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               local_40 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00112e02;
      }

      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Load size is inaccurate */
      /* WARNING: Could not recover jumptable at 0x00112c6d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3, **(undefined4**)( (long)param_3 + 8 ));
      return;
   }

   LAB_00112e02:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   char *pcVar3;
   int iVar4;
   long *plVar6;
   undefined4 in_register_00000014;
   long *plVar7;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   Variant *pVVar5;
   plVar7 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar7 != (long*)0x0 ) && ( plVar7[1] != 0 ) ) && ( *(char*)( plVar7[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar7[1] == 0) {
         plVar6 = (long*)plVar7[0x23];
         if (plVar6 == (long*)0x0) {
            plVar6 = (long*)( **(code**)( *plVar7 + 0x40 ) )(plVar7);
         }

      }
 else {
         plVar6 = (long*)( plVar7[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar6) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC146, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         pcVar3 = local_58;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar7 = (long*)( local_58 + -0x10 );
            *plVar7 = *plVar7 + -1;
            UNLOCK();
            if (*plVar7 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }

         }

         lVar2 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar7 = (long*)( local_60 + -0x10 );
            *plVar7 = *plVar7 + -1;
            UNLOCK();
            if (*plVar7 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00112ed0;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar5 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar5 & 1 ) != 0) {
            pVVar5 = *(Variant**)( pVVar5 + *(long*)( (long)plVar7 + (long)pVVar1 ) + -1 );
         }

         iVar4 = ( *(code*)pVVar5 )();
         Variant::Variant((Variant*)local_48, iVar4);
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

   LAB_00112ed0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<int>::validated_call(MethodBindTRC<int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   int iVar2;
   long *plVar4;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar3;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar4) {
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
         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar4 = (long*)( local_50 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00113134;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   iVar2 = ( *pcVar3 )(param_1 + *(long*)( this + 0x60 ));
   *(long*)( param_3 + 8 ) = (long)iVar2;
   LAB_00113134:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<int>::ptrcall(MethodBindTRC<int> *this, Object *param_1, void **param_2, void *param_3) {
   char *pcVar1;
   int iVar2;
   long *plVar4;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar3;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar4) {
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
         pcVar1 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar4 = (long*)( local_48 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar1 + -0x10, false);
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00113313;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   iVar2 = ( *pcVar3 )(param_1 + *(long*)( this + 0x60 ));
   *(long*)param_3 = (long)iVar2;
   LAB_00113313:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<int>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   long *plVar1;
   char *pcVar2;
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar3;
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
         pVVar3 = param_2[0x23];
         if (pVVar3 == (Variant*)0x0) {
            pVVar3 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar3 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar3) {
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
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_001136a4;
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
      /* WARNING: Could not recover jumptable at 0x0011350c. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_001136a4:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */void MethodBindT<int>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   code *UNRECOVERED_JUMPTABLE;
   long *plVar2;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_38, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar2 = (long*)param_2[0x23];
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar2 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_38 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0;
         local_30 = 0x35;
         String::parse_latin1((StrRange*)&local_40);
         vformat<StringName>((StringName*)&local_38, (StrRange*)&local_40, &local_48);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
         lVar1 = local_40;
         if (local_40 != 0) {
            LOCK();
            plVar2 = (long*)( local_40 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               local_40 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_001138a2;
      }

      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00113707. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_001138a2:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<Color>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<Color>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   char *pcVar3;
   Variant *pVVar4;
   long *plVar5;
   undefined4 in_register_00000014;
   long *plVar6;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_78;
   long local_70;
   char *local_68;
   undefined8 local_60;
   undefined8 local_58[2];
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar6 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar6 != (long*)0x0 ) && ( plVar6[1] != 0 ) ) && ( *(char*)( plVar6[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar6[1] == 0) {
         plVar5 = (long*)plVar6[0x23];
         if (plVar5 == (long*)0x0) {
            plVar5 = (long*)( **(code**)( *plVar6 + 0x40 ) )(plVar6);
         }

      }
 else {
         plVar5 = (long*)( plVar6[1] + 0x20 );
      }

      if (local_68 == (char*)*plVar5) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC146, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         pcVar3 = local_68;
         if (local_68 != (char*)0x0) {
            LOCK();
            plVar6 = (long*)( local_68 + -0x10 );
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
               local_68 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }

         }

         lVar2 = local_70;
         if (local_70 != 0) {
            LOCK();
            plVar6 = (long*)( local_70 + -0x10 );
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
               local_70 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_00113980;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar4 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar4 & 1 ) != 0) {
            pVVar4 = *(Variant**)( pVVar4 + *(long*)( (long)plVar6 + (long)pVVar1 ) + -1 );
         }

         local_58[0] = ( *(code*)pVVar4 )();
         Variant::Variant((Variant*)local_48, (Color*)local_58);
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

   LAB_00113980:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Color>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Color>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   long *plVar1;
   char *pcVar2;
   code *pcVar3;
   Variant *pVVar4;
   long in_RCX;
   long in_FS_OFFSET;
   undefined8 uVar5;
   undefined8 in_XMM1_Qa;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar4 = param_2[0x23];
         if (pVVar4 == (Variant*)0x0) {
            pVVar4 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar4 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar4) {
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
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00113beb;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( param_1 + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   uVar5 = ( *pcVar3 )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
   *(undefined8*)( in_RCX + 8 ) = uVar5;
   *(undefined8*)( in_RCX + 0x10 ) = in_XMM1_Qa;
   LAB_00113beb:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Color>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Color>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   code *pcVar2;
   long *plVar3;
   undefined8 *in_RCX;
   long in_FS_OFFSET;
   undefined8 uVar4;
   undefined8 in_XMM1_Qa;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar3 = (long*)param_2[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar3 = (long*)( (long)param_2[1] + 0x20 );
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
         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar3 = (long*)( local_50 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00113dca;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( param_1 + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   uVar4 = ( *pcVar2 )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
   *in_RCX = uVar4;
   in_RCX[1] = in_XMM1_Qa;
   LAB_00113dca:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Color const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Color_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   long *plVar1;
   long lVar2;
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar3;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_38, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar3 = param_2[0x23];
         if (pVVar3 == (Variant*)0x0) {
            pVVar3 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar3 = param_2[1] + 0x20;
      }

      if (local_38 == *(char**)pVVar3) {
         if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0;
         local_30 = 0x35;
         String::parse_latin1((StrRange*)&local_40);
         vformat<StringName>((StringName*)&local_38, (StrRange*)&local_40, &local_48);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
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

         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00114152;
      }

      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00113fb9. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
      return;
   }

   LAB_00114152:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Color const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Color_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   char *pcVar1;
   code *UNRECOVERED_JUMPTABLE;
   long *plVar2;
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
         plVar2 = (long*)param_2[0x23];
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar2 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar2) {
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
         pcVar1 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar2 = (long*)( local_48 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar1 + -0x10, false);
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00114354;
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
      /* WARNING: Could not recover jumptable at 0x001141b9. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }

   LAB_00114354:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Vector2>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<Vector2>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char *pcVar5;
   char cVar6;
   undefined4 uVar7;
   long *plVar8;
   long lVar9;
   undefined4 in_register_00000014;
   long *plVar10;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar11;
   Variant *pVVar12;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (plVar10[1] == 0) {
         plVar8 = (long*)plVar10[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
         }

      }
 else {
         plVar8 = (long*)( plVar10[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar8) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC146, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0);
         pcVar5 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar10 = (long*)( local_48 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

         lVar2 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar10 = (long*)( local_50 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001144f8;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar12 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar11 = param_2[5];
      if (pVVar11 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_00114550;
         LAB_00114540:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00114550:uVar7 = 4;
            goto LAB_001144ed;
         }

         if (in_R8D == 1) goto LAB_00114540;
         lVar9 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar9) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar11 = pVVar11 + lVar9 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar12 & 1 ) != 0) {
         pVVar12 = *(Variant**)( pVVar12 + *(long*)( (long)plVar10 + (long)pVVar1 ) + -1 );
      }

      cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar11, 5);
      uVar4 = _LC151;
      if (cVar6 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_Vector2(pVVar11);
      ( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ));
   }
 else {
      uVar7 = 3;
      LAB_001144ed:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_001144f8:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindT<Vector2 const&>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<Vector2_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char *pcVar5;
   char cVar6;
   undefined4 uVar7;
   long *plVar8;
   long lVar9;
   undefined4 in_register_00000014;
   long *plVar10;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar11;
   Variant *pVVar12;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   undefined8 local_38;
   long local_30;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (plVar10[1] == 0) {
         plVar8 = (long*)plVar10[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
         }

      }
 else {
         plVar8 = (long*)( plVar10[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar8) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC146, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0);
         pcVar5 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar10 = (long*)( local_48 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

         lVar2 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar10 = (long*)( local_50 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00114870;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar12 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar11 = param_2[5];
      if (pVVar11 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_001148c0;
         LAB_001148b0:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_001148c0:uVar7 = 4;
            goto LAB_00114865;
         }

         if (in_R8D == 1) goto LAB_001148b0;
         lVar9 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar9) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar11 = pVVar11 + lVar9 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar12 & 1 ) != 0) {
         pVVar12 = *(Variant**)( pVVar12 + *(long*)( (long)plVar10 + (long)pVVar1 ) + -1 );
      }

      cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar11, 5);
      uVar4 = _LC151;
      if (cVar6 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      local_38 = Variant::operator_cast_to_Vector2(pVVar11);
      ( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ), &local_38);
   }
 else {
      uVar7 = 3;
      LAB_00114865:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_00114870:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int, Side>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<int,Side>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   undefined4 uVar7;
   ulong uVar8;
   long *plVar9;
   long lVar10;
   undefined4 in_register_00000014;
   long *plVar11;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar12;
   Variant *pVVar13;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar9 = (long*)plVar11[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }

      }
 else {
         plVar9 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC146, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         lVar2 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar11 = (long*)( local_60 + -0x10 );
            *plVar11 = *plVar11 + -1;
            UNLOCK();
            if (*plVar11 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00114c10;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar12 = param_2[5];
      if (pVVar12 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_00114c50;
         LAB_00114c40:pVVar12 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar12 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00114c50:uVar7 = 4;
            goto LAB_00114c05;
         }

         if (in_R8D == 1) goto LAB_00114c40;
         lVar10 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar10) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar12 = pVVar12 + lVar10 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar13 & 1 ) != 0) {
         pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar12, 2);
      uVar4 = _LC152;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      uVar8 = Variant::operator_cast_to_long(pVVar12);
      iVar6 = ( *(code*)pVVar13 )((Variant*)( (long)plVar11 + (long)pVVar1 ), uVar8 & 0xffffffff);
      Variant::Variant((Variant*)local_48, iVar6);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_48[0];
      *(undefined8*)( param_1 + 8 ) = local_40;
      *(undefined8*)( param_1 + 0x10 ) = uStack_38;
   }
 else {
      uVar7 = 3;
      LAB_00114c05:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_00114c10:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<float, Side>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<float,Side>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   ulong uVar7;
   long *plVar8;
   long lVar9;
   undefined4 in_register_00000014;
   long *plVar10;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar11;
   Variant *pVVar12;
   long in_FS_OFFSET;
   float fVar13;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar10[1] == 0) {
         plVar8 = (long*)plVar10[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
         }

      }
 else {
         plVar8 = (long*)( plVar10[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar8) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC146, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         lVar2 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar10 = (long*)( local_60 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00114fa8;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar12 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar11 = param_2[5];
      if (pVVar11 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_00114ff0;
         LAB_00114fe0:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00114ff0:uVar6 = 4;
            goto LAB_00114f9d;
         }

         if (in_R8D == 1) goto LAB_00114fe0;
         lVar9 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar9) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar11 = pVVar11 + lVar9 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar12 & 1 ) != 0) {
         pVVar12 = *(Variant**)( pVVar12 + *(long*)( (long)plVar10 + (long)pVVar1 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 2);
      uVar4 = _LC152;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      uVar7 = Variant::operator_cast_to_long(pVVar11);
      fVar13 = (float)( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ), uVar7 & 0xffffffff);
      Variant::Variant((Variant*)local_48, fVar13);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_48[0];
      *(undefined8*)( param_1 + 8 ) = local_40;
      *(undefined8*)( param_1 + 0x10 ) = uStack_38;
   }
 else {
      uVar6 = 3;
      LAB_00114f9d:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_00114fa8:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTRC<int, Corner>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<int,Corner>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char *pcVar5;
   char cVar6;
   int iVar7;
   undefined4 uVar8;
   ulong uVar9;
   long *plVar10;
   long lVar11;
   undefined4 in_register_00000014;
   long *plVar12;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar13;
   Variant *pVVar14;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar12 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar12 != (long*)0x0 ) && ( plVar12[1] != 0 ) ) && ( *(char*)( plVar12[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar12[1] == 0) {
         plVar10 = (long*)plVar12[0x23];
         if (plVar10 == (long*)0x0) {
            plVar10 = (long*)( **(code**)( *plVar12 + 0x40 ) )(plVar12);
         }

      }
 else {
         plVar10 = (long*)( plVar12[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar10) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC146, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         pcVar5 = local_58;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar12 = (long*)( local_58 + -0x10 );
            *plVar12 = *plVar12 + -1;
            UNLOCK();
            if (*plVar12 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00115350;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar14 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar13 = param_2[5];
      if (pVVar13 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_00115390;
         LAB_00115380:pVVar13 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar13 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00115390:uVar8 = 4;
            goto LAB_00115345;
         }

         if (in_R8D == 1) goto LAB_00115380;
         lVar11 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar11) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar11, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar13 = pVVar13 + lVar11 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar14 & 1 ) != 0) {
         pVVar14 = *(Variant**)( pVVar14 + *(long*)( (long)plVar12 + (long)pVVar1 ) + -1 );
      }

      cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar13, 2);
      uVar4 = _LC152;
      if (cVar6 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      uVar9 = Variant::operator_cast_to_long(pVVar13);
      iVar7 = ( *(code*)pVVar14 )((Variant*)( (long)plVar12 + (long)pVVar1 ), uVar9 & 0xffffffff);
      Variant::Variant((Variant*)local_48, iVar7);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_48[0];
      *(undefined8*)( param_1 + 8 ) = local_40;
      *(undefined8*)( param_1 + 0x10 ) = uStack_38;
   }
 else {
      uVar8 = 3;
      LAB_00115345:*in_R9 = uVar8;
      in_R9[2] = 1;
   }

   LAB_00115350:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Color const&>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<Color_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char *pcVar5;
   char cVar6;
   undefined4 uVar7;
   long *plVar8;
   long lVar9;
   undefined4 in_register_00000014;
   long *plVar10;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar11;
   Variant *pVVar12;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   undefined8 local_48[3];
   long local_30;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar10[1] == 0) {
         plVar8 = (long*)plVar10[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
         }

      }
 else {
         plVar8 = (long*)( plVar10[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar8) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC146, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_58, 0);
         pcVar5 = local_58;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar10 = (long*)( local_58 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

         lVar2 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar10 = (long*)( local_60 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_001156c8;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar12 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar11 = param_2[5];
      if (pVVar11 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_00115720;
         LAB_00115710:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00115720:uVar7 = 4;
            goto LAB_001156bd;
         }

         if (in_R8D == 1) goto LAB_00115710;
         lVar9 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar9) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar11 = pVVar11 + lVar9 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar12 & 1 ) != 0) {
         pVVar12 = *(Variant**)( pVVar12 + *(long*)( (long)plVar10 + (long)pVVar1 ) + -1 );
      }

      cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar11, 0x14);
      uVar4 = _LC153;
      if (cVar6 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      local_48[0] = Variant::operator_cast_to_Color(pVVar11);
      ( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ), local_48);
   }
 else {
      uVar7 = 3;
      LAB_001156bd:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_001156c8:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* void call_with_variant_args_dv<__UnexistingClass, bool const&>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool const&), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */void call_with_variant_args_dv<__UnexistingClass,bool_const&>(__UnexistingClass *param_1, _func_void_bool_ptr *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   undefined8 uVar5;
   char cVar6;
   undefined4 uVar7;
   undefined4 in_register_0000000c;
   long lVar8;
   uint uVar9;
   Variant *this;
   long in_FS_OFFSET;
   long in_stack_00000008;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar9 = (uint)param_5;
   if (uVar9 < 2) {
      lVar2 = *(long*)( in_stack_00000008 + 8 );
      if (lVar2 == 0) {
         if (uVar9 != 1) goto LAB_00115aa8;
         LAB_00115a28:this * (Variant**)CONCAT44(in_register_0000000c, param_4);
      }
 else {
         lVar3 = *(long*)( lVar2 + -8 );
         if ((int)lVar3 < (int)( uVar9 ^ 1 )) {
            LAB_00115aa8:uVar7 = 4;
            goto LAB_00115a35;
         }

         if (uVar9 == 1) goto LAB_00115a28;
         lVar8 = (long)( (int)lVar3 + -1 );
         if (lVar3 <= lVar8) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar3, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         this(Variant * )(lVar2 + lVar8 * 0x18);
      }

      *(undefined4*)param_6 = 0;
      if (( (ulong)param_2 & 1 ) != 0) {
         param_2 = *(_func_void_bool_ptr**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
      }

      cVar6 = Variant::can_convert_strict(*(undefined4*)this, 1);
      uVar5 = _LC154;
      if (cVar6 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar5;
      }

      Variant::operator_cast_to_bool(this);
      ( *param_2 )((bool*)( param_1 + (long)param_3 ));
   }
 else {
      uVar7 = 3;
      LAB_00115a35:*(undefined4*)param_6 = uVar7;
      *(undefined4*)( param_6 + 8 ) = 1;
   }

   if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindT<bool const&>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<bool_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long lVar1;
   char *pcVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var4;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var4 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var4 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var4 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var4 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var4 + 8 ) == 0) {
         plVar3 = *(long**)( p_Var4 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)p_Var4 + 0x40 ) )(p_Var4);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( p_Var4 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC146, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar3 = (long*)( local_48 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar3 = (long*)( local_50 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00115b16;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,bool_const&>(p_Var4, (_func_void_bool_ptr*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_00115b16:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, int const&>(__UnexistingClass*, void
   (__UnexistingClass::*)(int const&), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */void call_with_variant_args_dv<__UnexistingClass,int_const&>(__UnexistingClass *param_1, _func_void_int_ptr *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   undefined8 uVar5;
   char cVar6;
   undefined4 uVar7;
   undefined4 in_register_0000000c;
   long lVar8;
   uint uVar9;
   Variant *this;
   long in_FS_OFFSET;
   long in_stack_00000008;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar9 = (uint)param_5;
   if (uVar9 < 2) {
      lVar2 = *(long*)( in_stack_00000008 + 8 );
      if (lVar2 == 0) {
         if (uVar9 != 1) goto LAB_00115e98;
         LAB_00115e18:this * (Variant**)CONCAT44(in_register_0000000c, param_4);
      }
 else {
         lVar3 = *(long*)( lVar2 + -8 );
         if ((int)lVar3 < (int)( uVar9 ^ 1 )) {
            LAB_00115e98:uVar7 = 4;
            goto LAB_00115e25;
         }

         if (uVar9 == 1) goto LAB_00115e18;
         lVar8 = (long)( (int)lVar3 + -1 );
         if (lVar3 <= lVar8) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar3, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         this(Variant * )(lVar2 + lVar8 * 0x18);
      }

      *(undefined4*)param_6 = 0;
      if (( (ulong)param_2 & 1 ) != 0) {
         param_2 = *(_func_void_int_ptr**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
      }

      cVar6 = Variant::can_convert_strict(*(undefined4*)this, 2);
      uVar5 = _LC152;
      if (cVar6 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar5;
      }

      Variant::operator_cast_to_int(this);
      ( *param_2 )((int*)( param_1 + (long)param_3 ));
   }
 else {
      uVar7 = 3;
      LAB_00115e25:*(undefined4*)param_6 = uVar7;
      *(undefined4*)( param_6 + 8 ) = 1;
   }

   if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindT<int const&>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<int_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long lVar1;
   char *pcVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var4;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var4 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var4 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var4 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var4 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var4 + 8 ) == 0) {
         plVar3 = *(long**)( p_Var4 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)p_Var4 + 0x40 ) )(p_Var4);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( p_Var4 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC146, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar3 = (long*)( local_48 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar3 = (long*)( local_50 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00115f06;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,int_const&>(p_Var4, (_func_void_int_ptr*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_00115f06:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, float>(__UnexistingClass*, void
   (__UnexistingClass::*)(float), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */void call_with_variant_args_dv<__UnexistingClass,float>(__UnexistingClass *param_1, _func_void_float *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
   float fVar9;
   long in_stack_00000008;
   uVar8 = (uint)param_5;
   if (1 < uVar8) {
      uVar6 = 3;
      goto LAB_0011620d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_00116270;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_00116270:uVar6 = 4;
         LAB_0011620d:*(undefined4*)param_6 = uVar6;
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
         goto LAB_0011618b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0011618b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_float**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 3);
   uVar4 = _LC155;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   fVar9 = Variant::operator_cast_to_float(this);
   /* WARNING: Could not recover jumptable at 0x001161e4. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )(fVar9);
   return;
}
/* MethodBindT<float>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<float>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long lVar1;
   char *pcVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var4;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var4 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var4 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var4 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var4 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var4 + 8 ) == 0) {
         plVar3 = *(long**)( p_Var4 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)p_Var4 + 0x40 ) )(p_Var4);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( p_Var4 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC146, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar3 = (long*)( local_48 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar3 = (long*)( local_50 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_001162d6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,float>(p_Var4, (_func_void_float*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_001162d6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, Side, float>(__UnexistingClass*, void
   (__UnexistingClass::*)(Side, float), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */void call_with_variant_args_dv<__UnexistingClass,Side,float>(__UnexistingClass *param_1, _func_void_Side_float *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   undefined4 uVar7;
   undefined4 in_register_0000000c;
   long *plVar8;
   long lVar9;
   Variant *this;
   uint uVar10;
   int iVar11;
   Variant *this_00;
   float fVar12;
   long in_stack_00000008;
   plVar8 = (long*)CONCAT44(in_register_0000000c, param_4);
   uVar10 = (uint)param_5;
   if (2 < uVar10) {
      uVar7 = 3;
      goto LAB_00116615;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   iVar6 = 2 - uVar10;
   if (lVar1 == 0) {
      if (iVar6 == 0) {
         this(Variant * ) * plVar8;
         LAB_0011664d:this_00 = (Variant*)plVar8[1];
         goto LAB_00116575;
      }

   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      iVar11 = (int)lVar2;
      if (iVar6 <= iVar11) {
         if (uVar10 == 0) {
            lVar9 = (long)( iVar11 + -2 );
            if (lVar2 <= lVar9) goto LAB_00116668;
            this(Variant * )(lVar1 + lVar9 * 0x18);
         }
 else {
            this(Variant * ) * plVar8;
            if (uVar10 == 2) goto LAB_0011664d;
         }

         lVar9 = (long)(int)( ( uVar10 ^ 1 ) + ( iVar11 - iVar6 ) );
         if (lVar2 <= lVar9) {
            LAB_00116668:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this_00 = (Variant*)( lVar1 + lVar9 * 0x18 );
         LAB_00116575:*(undefined4*)param_6 = 0;
         if (( (ulong)param_2 & 1 ) != 0) {
            param_2 = *(_func_void_Side_float**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
         }

         cVar5 = Variant::can_convert_strict(*(undefined4*)this_00, 3);
         uVar4 = _LC156;
         if (cVar5 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar4;
         }

         fVar12 = Variant::operator_cast_to_float(this_00);
         cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
         uVar4 = _LC152;
         if (cVar5 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar4;
         }

         Variant::operator_cast_to_long(this);
         /* WARNING: Could not recover jumptable at 0x001165ff. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *param_2 )((char)( param_1 + (long)param_3 ), fVar12);
         return;
      }

   }

   uVar7 = 4;
   LAB_00116615:*(undefined4*)param_6 = uVar7;
   *(undefined4*)( param_6 + 8 ) = 2;
   return;
}
/* MethodBindT<Side, float>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<Side,float>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long lVar1;
   char *pcVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var4;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var4 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var4 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var4 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var4 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var4 + 8 ) == 0) {
         plVar3 = *(long**)( p_Var4 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)p_Var4 + 0x40 ) )(p_Var4);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( p_Var4 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC146, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar3 = (long*)( local_48 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar3 = (long*)( local_50 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00116706;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,Side,float>(p_Var4, (_func_void_Side_float*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_00116706:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, Corner, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(Corner, int), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */void call_with_variant_args_dv<__UnexistingClass,Corner,int>(__UnexistingClass *param_1, _func_void_Corner_int *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   code *pcVar2;
   undefined8 uVar3;
   char cVar4;
   int iVar5;
   undefined4 uVar6;
   long lVar7;
   undefined4 in_register_0000000c;
   long *plVar8;
   long lVar9;
   Variant *this;
   uint uVar10;
   int iVar11;
   Variant *this_00;
   long in_stack_00000008;
   plVar8 = (long*)CONCAT44(in_register_0000000c, param_4);
   uVar10 = (uint)param_5;
   if (2 < uVar10) {
      uVar6 = 3;
      goto LAB_00116a3d;
   }

   lVar7 = *(long*)( in_stack_00000008 + 8 );
   iVar5 = 2 - uVar10;
   if (lVar7 == 0) {
      if (iVar5 == 0) {
         this(Variant * ) * plVar8;
         LAB_00116a6d:this_00 = (Variant*)plVar8[1];
         goto LAB_001169a5;
      }

   }
 else {
      lVar1 = *(long*)( lVar7 + -8 );
      iVar11 = (int)lVar1;
      if (iVar5 <= iVar11) {
         if (uVar10 == 0) {
            lVar9 = (long)( iVar11 + -2 );
            if (lVar1 <= lVar9) goto LAB_00116a88;
            this(Variant * )(lVar7 + lVar9 * 0x18);
         }
 else {
            this(Variant * ) * plVar8;
            if (uVar10 == 2) goto LAB_00116a6d;
         }

         lVar9 = (long)(int)( ( uVar10 ^ 1 ) + ( iVar11 - iVar5 ) );
         if (lVar1 <= lVar9) {
            LAB_00116a88:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar1, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         this_00 = (Variant*)( lVar7 + lVar9 * 0x18 );
         LAB_001169a5:*(undefined4*)param_6 = 0;
         if (( (ulong)param_2 & 1 ) != 0) {
            param_2 = *(_func_void_Corner_int**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
         }

         cVar4 = Variant::can_convert_strict(*(undefined4*)this_00, 2);
         uVar3 = _LC157;
         if (cVar4 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar3;
         }

         Variant::operator_cast_to_int(this_00);
         cVar4 = Variant::can_convert_strict(*(undefined4*)this, 2);
         uVar3 = _LC152;
         if (cVar4 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar3;
         }

         lVar7 = Variant::operator_cast_to_long(this);
         /* WARNING: Could not recover jumptable at 0x00116a2b. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *param_2 )((char)( param_1 + (long)param_3 ), (int)lVar7);
         return;
      }

   }

   uVar6 = 4;
   LAB_00116a3d:*(undefined4*)param_6 = uVar6;
   *(undefined4*)( param_6 + 8 ) = 2;
   return;
}
/* MethodBindT<Corner, int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<Corner,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long lVar1;
   char *pcVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var4;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var4 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var4 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var4 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var4 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var4 + 8 ) == 0) {
         plVar3 = *(long**)( p_Var4 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)p_Var4 + 0x40 ) )(p_Var4);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( p_Var4 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC146, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar3 = (long*)( local_48 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar3 = (long*)( local_50 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00116b26;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,Corner,int>(p_Var4, (_func_void_Corner_int*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_00116b26:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
      goto LAB_00116e2d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_00116e90;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_00116e90:uVar6 = 4;
         LAB_00116e2d:*(undefined4*)param_6 = uVar6;
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
         goto LAB_00116dab;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_00116dab:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_bool**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 1);
   uVar4 = _LC154;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_bool(this);
   /* WARNING: Could not recover jumptable at 0x00116e07. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )(SUB81(param_1 + (long)param_3, 0));
   return;
}
/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long lVar1;
   char *pcVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var4;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var4 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var4 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var4 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var4 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var4 + 8 ) == 0) {
         plVar3 = *(long**)( p_Var4 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)p_Var4 + 0x40 ) )(p_Var4);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( p_Var4 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC146, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar3 = (long*)( local_48 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar3 = (long*)( local_50 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00116ef6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,bool>(p_Var4, (_func_void_bool*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_00116ef6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, Side, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(Side, int), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */void call_with_variant_args_dv<__UnexistingClass,Side,int>(__UnexistingClass *param_1, _func_void_Side_int *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   code *pcVar2;
   undefined8 uVar3;
   char cVar4;
   int iVar5;
   undefined4 uVar6;
   long lVar7;
   undefined4 in_register_0000000c;
   long *plVar8;
   long lVar9;
   Variant *this;
   uint uVar10;
   int iVar11;
   Variant *this_00;
   long in_stack_00000008;
   plVar8 = (long*)CONCAT44(in_register_0000000c, param_4);
   uVar10 = (uint)param_5;
   if (2 < uVar10) {
      uVar6 = 3;
      goto LAB_0011722d;
   }

   lVar7 = *(long*)( in_stack_00000008 + 8 );
   iVar5 = 2 - uVar10;
   if (lVar7 == 0) {
      if (iVar5 == 0) {
         this(Variant * ) * plVar8;
         LAB_0011725d:this_00 = (Variant*)plVar8[1];
         goto LAB_00117195;
      }

   }
 else {
      lVar1 = *(long*)( lVar7 + -8 );
      iVar11 = (int)lVar1;
      if (iVar5 <= iVar11) {
         if (uVar10 == 0) {
            lVar9 = (long)( iVar11 + -2 );
            if (lVar1 <= lVar9) goto LAB_00117278;
            this(Variant * )(lVar7 + lVar9 * 0x18);
         }
 else {
            this(Variant * ) * plVar8;
            if (uVar10 == 2) goto LAB_0011725d;
         }

         lVar9 = (long)(int)( ( uVar10 ^ 1 ) + ( iVar11 - iVar5 ) );
         if (lVar1 <= lVar9) {
            LAB_00117278:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar1, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         this_00 = (Variant*)( lVar7 + lVar9 * 0x18 );
         LAB_00117195:*(undefined4*)param_6 = 0;
         if (( (ulong)param_2 & 1 ) != 0) {
            param_2 = *(_func_void_Side_int**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
         }

         cVar4 = Variant::can_convert_strict(*(undefined4*)this_00, 2);
         uVar3 = _LC157;
         if (cVar4 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar3;
         }

         Variant::operator_cast_to_int(this_00);
         cVar4 = Variant::can_convert_strict(*(undefined4*)this, 2);
         uVar3 = _LC152;
         if (cVar4 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar3;
         }

         lVar7 = Variant::operator_cast_to_long(this);
         /* WARNING: Could not recover jumptable at 0x0011721b. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *param_2 )((char)( param_1 + (long)param_3 ), (int)lVar7);
         return;
      }

   }

   uVar6 = 4;
   LAB_0011722d:*(undefined4*)param_6 = uVar6;
   *(undefined4*)( param_6 + 8 ) = 2;
   return;
}
/* MethodBindT<Side, int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<Side,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long lVar1;
   char *pcVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var4;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var4 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var4 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var4 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var4 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var4 + 8 ) == 0) {
         plVar3 = *(long**)( p_Var4 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)p_Var4 + 0x40 ) )(p_Var4);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( p_Var4 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC146, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar3 = (long*)( local_48 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar3 = (long*)( local_50 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00117316;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,Side,int>(p_Var4, (_func_void_Side_int*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_00117316:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
      goto LAB_0011761d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_00117680;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_00117680:uVar6 = 4;
         LAB_0011761d:*(undefined4*)param_6 = uVar6;
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
         goto LAB_0011759b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0011759b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_int**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC152;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_int(this);
   /* WARNING: Could not recover jumptable at 0x001175f6. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )((int)( param_1 + (long)param_3 ));
   return;
}
/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long lVar1;
   char *pcVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var4;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var4 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var4 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var4 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var4 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var4 + 8 ) == 0) {
         plVar3 = *(long**)( p_Var4 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)p_Var4 + 0x40 ) )(p_Var4);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( p_Var4 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC146, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar3 = (long*)( local_48 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar3 = (long*)( local_50 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_001176e6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,int>(p_Var4, (_func_void_int*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_001176e6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<Side>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<Side>(int param_1, int *param_2, PropertyInfo *param_3) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined8 uVar4;
   long lVar5;
   int iVar6;
   long in_FS_OFFSET;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   details local_88[8];
   long local_80;
   undefined *local_78;
   undefined1 local_70[16];
   undefined8 local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar6 = *param_2;
   if (iVar6 == param_1) {
      local_90 = 0;
      local_78 = &_LC158;
      local_70._0_8_ = 4;
      String::parse_latin1((StrRange*)&local_90);
      godot::details::enum_qualified_name_to_class_info_name(local_88, (String*)&local_90);
      StringName::StringName((StringName*)&local_80, (String*)local_88, false);
      local_70 = (undefined1[16])0x0;
      local_98 = 0;
      local_a0 = 0;
      local_78 = (undefined*)0x2;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0x10006;
      StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      *(undefined4*)param_3 = local_78._0_4_;
      if (*(long*)( param_3 + 8 ) != local_70._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
         uVar4 = local_70._0_8_;
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_70._8_8_;
         local_70 = auVar2 << 0x40;
         *(undefined8*)( param_3 + 8 ) = uVar4;
      }

      if (*(long*)( param_3 + 0x10 ) != local_70._8_8_) {
         StringName::unref();
         uVar4 = local_70._8_8_;
         local_70._8_8_ = 0;
         *(undefined8*)( param_3 + 0x10 ) = uVar4;
      }

      lVar5 = local_58;
      *(undefined4*)( param_3 + 0x18 ) = (undefined4)local_60;
      if (*(long*)( param_3 + 0x20 ) == local_58) {
         *(undefined4*)( param_3 + 0x28 ) = local_50;
         if (local_58 != 0) {
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = 0;
               Memory::free_static((void*)( lVar5 + -0x10 ), false);
            }

         }

      }
 else {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
         *(long*)( param_3 + 0x20 ) = local_58;
         *(undefined4*)( param_3 + 0x28 ) = local_50;
      }

      if (( StringName::configured != '\0' ) && ( local_70._8_8_ != 0 )) {
         StringName::unref();
      }

      uVar4 = local_70._0_8_;
      if (local_70._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_70._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_70._8_8_;
            local_70 = auVar3 << 0x40;
            Memory::free_static((void*)( uVar4 + -0x10 ), false);
         }

      }

      iVar6 = *param_2;
   }

   *param_2 = iVar6 + 1;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int, Side>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<int,Side>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   long lVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   long local_78;
   ulong local_70;
   undefined *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX == 0) {
      local_68 = (undefined*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      local_60 = (undefined1[16])0x0;
      call_get_argument_type_info_helper<Side>(0, (int*)&local_70, (PropertyInfo*)&local_68);
      *puVar4 = local_68._0_4_;
      *(undefined8*)( puVar4 + 2 ) = local_60._0_8_;
      *(undefined8*)( puVar4 + 4 ) = local_60._8_8_;
      puVar4[6] = (undefined4)local_50;
      *(undefined8*)( puVar4 + 8 ) = local_48;
      puVar4[10] = local_40;
      goto LAB_00117bd5;
   }

   local_70 = 0;
   local_68 = &_LC7;
   local_78 = 0;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_78);
   *puVar4 = 2;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar4[10] = 6;
      LAB_00117ce7:StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_70);
      lVar3 = local_78;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_78);
      puVar4[10] = 6;
      if (puVar4[6] != 0x11) goto LAB_00117ce7;
      StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
      if (*(undefined**)( puVar4 + 4 ) == local_68) {
         lVar3 = local_78;
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
            lVar3 = local_78;
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar4 + 4 ) = local_68;
         lVar3 = local_78;
      }

   }

   local_78 = lVar3;
   if (lVar3 != 0) {
      LOCK();
      plVar1 = (long*)( lVar3 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_00117bd5:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<float, Side>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<float,Side>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   long lVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   long local_78;
   ulong local_70;
   undefined *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX == 0) {
      local_68 = (undefined*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      local_60 = (undefined1[16])0x0;
      call_get_argument_type_info_helper<Side>(0, (int*)&local_70, (PropertyInfo*)&local_68);
      *puVar4 = local_68._0_4_;
      *(undefined8*)( puVar4 + 2 ) = local_60._0_8_;
      *(undefined8*)( puVar4 + 4 ) = local_60._8_8_;
      puVar4[6] = (undefined4)local_50;
      *(undefined8*)( puVar4 + 8 ) = local_48;
      puVar4[10] = local_40;
      goto LAB_00117dd5;
   }

   local_70 = 0;
   local_68 = &_LC7;
   local_78 = 0;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_78);
   *puVar4 = 3;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar4[10] = 6;
      LAB_00117ee7:StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_70);
      lVar3 = local_78;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_78);
      puVar4[10] = 6;
      if (puVar4[6] != 0x11) goto LAB_00117ee7;
      StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
      if (*(undefined**)( puVar4 + 4 ) == local_68) {
         lVar3 = local_78;
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
            lVar3 = local_78;
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar4 + 4 ) = local_68;
         lVar3 = local_78;
      }

   }

   local_78 = lVar3;
   if (lVar3 != 0) {
      LOCK();
      plVar1 = (long*)( lVar3 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_00117dd5:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Side, float>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<Side,float>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined8 uVar5;
   long lVar6;
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar7;
   long in_FS_OFFSET;
   int local_8c;
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
   pPVar7 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)pPVar7 = 0;
   *(undefined4*)( pPVar7 + 0x18 ) = 0;
   *(undefined8*)( pPVar7 + 0x20 ) = 0;
   *(undefined4*)( pPVar7 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar7 + 8 ) = (undefined1[16])0x0;
   local_8c = 0;
   call_get_argument_type_info_helper<Side>(in_EDX, &local_8c, pPVar7);
   if (in_EDX != local_8c) goto LAB_00117fa4;
   local_78 = 0;
   local_68 = &_LC7;
   local_80 = 0;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._8_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 3);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_001180a0:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_001180a0;
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

   *(undefined4*)pPVar7 = local_68._0_4_;
   if (*(long*)( pPVar7 + 8 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar7 + 8 ));
      uVar5 = local_60._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      *(undefined8*)( pPVar7 + 8 ) = uVar5;
   }

   if (*(long*)( pPVar7 + 0x10 ) != local_60._8_8_) {
      StringName::unref();
      uVar5 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( pPVar7 + 0x10 ) = uVar5;
   }

   lVar6 = local_48;
   *(int*)( pPVar7 + 0x18 ) = local_50;
   if (*(long*)( pPVar7 + 0x20 ) == local_48) {
      *(undefined4*)( pPVar7 + 0x28 ) = local_40;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

   }
 else {
      CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar7 + 0x20 ));
      *(long*)( pPVar7 + 0x20 ) = local_48;
      *(undefined4*)( pPVar7 + 0x28 ) = local_40;
   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar5 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_60._8_8_;
         local_60 = auVar4 << 0x40;
         Memory::free_static((void*)( uVar5 + -0x10 ), false);
      }

   }

   LAB_00117fa4:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pPVar7;
}
/* MethodBindT<Side, int>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<Side,int>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined8 uVar5;
   long lVar6;
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar7;
   long in_FS_OFFSET;
   int local_8c;
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
   pPVar7 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)pPVar7 = 0;
   *(undefined4*)( pPVar7 + 0x18 ) = 0;
   *(undefined8*)( pPVar7 + 0x20 ) = 0;
   *(undefined4*)( pPVar7 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar7 + 8 ) = (undefined1[16])0x0;
   local_8c = 0;
   call_get_argument_type_info_helper<Side>(in_EDX, &local_8c, pPVar7);
   if (in_EDX != local_8c) goto LAB_00118274;
   local_78 = 0;
   local_68 = &_LC7;
   local_80 = 0;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._8_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 2);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00118370:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00118370;
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

   *(undefined4*)pPVar7 = local_68._0_4_;
   if (*(long*)( pPVar7 + 8 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar7 + 8 ));
      uVar5 = local_60._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      *(undefined8*)( pPVar7 + 8 ) = uVar5;
   }

   if (*(long*)( pPVar7 + 0x10 ) != local_60._8_8_) {
      StringName::unref();
      uVar5 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( pPVar7 + 0x10 ) = uVar5;
   }

   lVar6 = local_48;
   *(int*)( pPVar7 + 0x18 ) = local_50;
   if (*(long*)( pPVar7 + 0x20 ) == local_48) {
      *(undefined4*)( pPVar7 + 0x28 ) = local_40;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

   }
 else {
      CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar7 + 0x20 ));
      *(long*)( pPVar7 + 0x20 ) = local_48;
      *(undefined4*)( pPVar7 + 0x28 ) = local_40;
   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar5 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_60._8_8_;
         local_60 = auVar4 << 0x40;
         Memory::free_static((void*)( uVar5 + -0x10 ), false);
      }

   }

   LAB_00118274:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pPVar7;
}
/* WARNING: Control flow encountered bad instruction data *//* MethodDefinition::~MethodDefinition() */void MethodDefinition::~MethodDefinition(MethodDefinition *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
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
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<int const&>::~MethodBindT() */void MethodBindT<int_const&>::~MethodBindT(MethodBindT<int_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<float>::~MethodBindTRC() */void MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<float>::~MethodBindT() */void MethodBindT<float>::~MethodBindT(MethodBindT<float> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<bool const&>::~MethodBindT() */void MethodBindT<bool_const&>::~MethodBindT(MethodBindT<bool_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Vector2>::~MethodBindTRC() */void MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Vector2 const&>::~MethodBindT() */void MethodBindT<Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Color>::~MethodBindTRC() */void MethodBindTRC<Color>::~MethodBindTRC(MethodBindTRC<Color> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Color const&>::~MethodBindT() */void MethodBindT<Color_const&>::~MethodBindT(MethodBindT<Color_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Vector2>::~MethodBindT() */void MethodBindT<Vector2>::~MethodBindT(MethodBindT<Vector2> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<float, Side>::~MethodBindTRC() */void MethodBindTRC<float,Side>::~MethodBindTRC(MethodBindTRC<float,Side> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Side, float>::~MethodBindT() */void MethodBindT<Side,float>::~MethodBindT(MethodBindT<Side,float> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<int, Corner>::~MethodBindTRC() */void MethodBindTRC<int,Corner>::~MethodBindTRC(MethodBindTRC<int,Corner> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Corner, int>::~MethodBindT() */void MethodBindT<Corner,int>::~MethodBindT(MethodBindT<Corner,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<int, Side>::~MethodBindTRC() */void MethodBindTRC<int,Side>::~MethodBindTRC(MethodBindTRC<int,Side> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Side, int>::~MethodBindT() */void MethodBindT<Side,int>::~MethodBindT(MethodBindT<Side,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

