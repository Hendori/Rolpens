/* StyleBox::set_content_margin_all(float) */void StyleBox::set_content_margin_all(StyleBox *this, float param_1) {
   for (int i = 0; i < 4; i++) {
      *(float*)( this + ( 4*i + 576 ) ) = param_1;
   }

   Resource::emit_changed();
   return;
}
/* StyleBox::get_current_item_drawn() const */void StyleBox::get_current_item_drawn(void) {
   CanvasItem::get_current_item_drawn();
   return;
}
/* StyleBox::get_content_margin(Side) const */undefined4 StyleBox::get_content_margin(StyleBox *this, uint param_2) {
   if (param_2 < 4) {
      return *(undefined4*)( this + (long)(int)param_2 * 4 + 0x240 );
   }

   _err_print_index_error("get_content_margin", "scene/resources/style_box.cpp", 0x49, (long)(int)param_2, 4, "(int)p_side", "4", "", false, false);
   return 0;
}
/* StyleBox::get_margin(Side) const */ulong StyleBox::get_margin(StyleBox *this, uint param_2) {
   ulong uVar1;
   if (3 < param_2) {
      _err_print_index_error("get_margin", "scene/resources/style_box.cpp", 0x4f, (long)(int)param_2, 4, "(int)p_side", "4", "", false, false);
      return 0;
   }

   if (*(float*)( this + (long)(int)param_2 * 4 + 0x240 ) < 0.0) {
      /* WARNING: Could not recover jumptable at 0x001000c1. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar1 = ( **(code**)( *(long*)this + 0x1c8 ) )();
      return uVar1;
   }

   return ( ulong )(uint) * (float*)( this + (long)(int)param_2 * 4 + 0x240 );
}
/* StyleBox::set_content_margin(Side, float) */void StyleBox::set_content_margin(undefined4 param_1, StyleBox *this, uint param_3) {
   if (param_3 < 4) {
      *(undefined4*)( this + (long)(int)param_3 * 4 + 0x240 ) = param_1;
      Resource::emit_changed();
      return;
   }

   _err_print_index_error("set_content_margin", "scene/resources/style_box.cpp", 0x33, (long)(int)param_3, 4, "(int)p_side", "4", "", false, false);
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
/* StyleBox::get_offset() const */void StyleBox::get_offset(StyleBox *this) {
   if (*(float*)( this + 0x244 ) < 0.0) {
      ( **(code**)( *(long*)this + 0x1c8 ) )(this, 1);
   }

   if (*(float*)( this + 0x240 ) < 0.0) {
      ( **(code**)( *(long*)this + 0x1c8 ) )(this, 0);
   }

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
/* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */void List<PropertyInfo,DefaultAllocator>::push_back(List<PropertyInfo,DefaultAllocator> *this, PropertyInfo *param_1) {
   long *plVar1;
   long lVar2;
   undefined4 *puVar3;
   undefined1(*pauVar4)[16];
   if (*(long*)this == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])this = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   puVar3 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   lVar2 = *(long*)( param_1 + 8 );
   *puVar3 = 0;
   puVar3[6] = 0;
   puVar3[10] = 6;
   *(undefined8*)( puVar3 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar3 + 0xc ) = (undefined1[16])0x0;
   *puVar3 = *(undefined4*)param_1;
   if (lVar2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 2 ), (CowData*)( param_1 + 8 ));
   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)( param_1 + 0x10 ));
   puVar3[6] = *(undefined4*)( param_1 + 0x18 );
   if (*(long*)( puVar3 + 8 ) != *(long*)( param_1 + 0x20 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)( param_1 + 0x20 ));
   }

   puVar3[10] = *(undefined4*)( param_1 + 0x28 );
   plVar1 = *(long**)this;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar3 + 0xc ) = 0;
   *(long**)( puVar3 + 0x10 ) = plVar1;
   *(long*)( puVar3 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar3;
   }

   plVar1[1] = (long)puVar3;
   if (*plVar1 != 0) {
      *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
      return;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   *plVar1 = (long)puVar3;
   return;
}
/* PropertyInfo::TEMPNAMEPLACEHOLDERVALUE(PropertyInfo&&) [clone .isra.0] */void PropertyInfo::operator =(PropertyInfo *this, PropertyInfo *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   lVar3 = *(long*)( param_1 + 8 );
   *(undefined4*)this = *(undefined4*)param_1;
   lVar2 = *(long*)( this + 8 );
   if (lVar2 != lVar3) {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( this + 8 );
            *(undefined8*)( this + 8 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
            lVar3 = *(long*)( param_1 + 8 );
         }
 else {
            *(undefined8*)( this + 8 ) = 0;
            lVar3 = *(long*)( param_1 + 8 );
         }

      }

      *(long*)( this + 8 ) = lVar3;
      *(undefined8*)( param_1 + 8 ) = 0;
   }

   if (*(long*)( this + 0x10 ) != *(long*)( param_1 + 0x10 )) {
      StringName::unref();
      *(undefined8*)( this + 0x10 ) = *(undefined8*)( param_1 + 0x10 );
      *(undefined8*)( param_1 + 0x10 ) = 0;
   }

   lVar3 = *(long*)( param_1 + 0x20 );
   *(undefined4*)( this + 0x18 ) = *(undefined4*)( param_1 + 0x18 );
   lVar2 = *(long*)( this + 0x20 );
   if (lVar2 != lVar3) {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( this + 0x20 );
            *(undefined8*)( this + 0x20 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
            lVar3 = *(long*)( param_1 + 0x20 );
         }
 else {
            *(undefined8*)( this + 0x20 ) = 0;
            lVar3 = *(long*)( param_1 + 0x20 );
         }

      }

      *(long*)( this + 0x20 ) = lVar3;
      *(undefined8*)( param_1 + 0x20 ) = 0;
   }

   *(undefined4*)( this + 0x28 ) = *(undefined4*)( param_1 + 0x28 );
   return;
}
/* StyleBox::set_content_margin_individual(float, float, float, float) */void StyleBox::set_content_margin_individual(StyleBox *this, float param_1, float param_2, float param_3, float param_4) {
   *(float*)( this + 0x240 ) = param_1;
   *(float*)( this + 0x244 ) = param_2;
   *(float*)( this + 0x248 ) = param_3;
   *(float*)( this + 0x24c ) = param_4;
   Resource::emit_changed();
   return;
}
/* StyleBox::StyleBox() */void StyleBox::StyleBox(StyleBox *this) {
   undefined4 uVar1;
   Resource::Resource((Resource*)this);
   *(undefined***)this = &PTR__initialize_classv_0010d990;
   StringName::StringName((StringName*)( this + 0x250 ), "_draw", false);
   this[600] = (StyleBox)0x0;
   *(undefined8*)( this + 0x260 ) = 0;
   StringName::StringName((StringName*)( this + 0x268 ), "_get_draw_rect", false);
   this[0x270] = (StyleBox)0x0;
   *(undefined8*)( this + 0x278 ) = 0;
   StringName::StringName((StringName*)( this + 0x280 ), "_get_minimum_size", false);
   this[0x288] = (StyleBox)0x0;
   *(undefined8*)( this + 0x290 ) = 0;
   StringName::StringName((StringName*)( this + 0x298 ), "_test_mask", false);
   uVar1 = _LC23;
   this[0x2a0] = (StyleBox)0x0;
   *(undefined8*)( this + 0x2a8 ) = 0;
   for (int i = 0; i < 4; i++) {
      *(undefined4*)( this + ( 4*i + 576 ) ) = uVar1;
   }

   return;
}
/* CowData<String>::_copy_on_write() [clone .isra.0] */void CowData<String>::_copy_on_write(CowData<String> *this) {
   CowData *pCVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   undefined8 *puVar5;
   long lVar6;
   ulong uVar7;
   CowData<char32_t> *this_00;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar7 = 0x10;
   if (lVar2 * 8 != 0) {
      uVar7 = lVar2 * 8 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
   }

   puVar5 = (undefined8*)Memory::alloc_static(uVar7, false);
   if (puVar5 != (undefined8*)0x0) {
      lVar6 = 0;
      *puVar5 = 1;
      puVar5[1] = lVar2;
      this_00 = (CowData<char32_t>*)( puVar5 + 2 );
      if (lVar2 != 0) {
         do {
            lVar3 = *(long*)this;
            *(undefined8*)this_00 = 0;
            pCVar1 = (CowData*)( lVar3 + lVar6 * 8 );
            if (*(long*)pCVar1 != 0) {
               CowData<char32_t>::_ref(this_00, pCVar1);
            }

            lVar6 = lVar6 + 1;
            this_00 = this_00 + 8;
         }
 while ( lVar2 != lVar6 );
      }

      _unref(this);
      *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar5 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* Vector<String>::push_back(String) [clone .isra.0] */void Vector<String>::push_back(Vector<String> *this, CowData *param_2) {
   CowData<char32_t> *this_00;
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<String>::resize<false>((CowData<String>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<String>::_copy_on_write((CowData<String>*)( this + 8 ));
            this_00 = (CowData<char32_t>*)( *(long*)( this + 8 ) + lVar3 * 8 );
            if (*(long*)this_00 == *(long*)param_2) {
               return;
            }

            CowData<char32_t>::_ref(this_00, param_2);
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* StyleBox::get_minimum_size() const */void StyleBox::get_minimum_size(StyleBox *this) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *pcVar5;
   long in_FS_OFFSET;
   undefined8 local_108;
   long local_100;
   GetTypeInfo<Vector2,void> local_f8[8];
   long local_f0[5];
   int local_c8[2];
   undefined4 uStack_c0;
   undefined4 uStack_bc;
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   ulong local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   get_margin(this, 1);
   get_margin(this, 3);
   get_margin(this, 0);
   get_margin(this, 2);
   plVar4 = *(long**)( this + 0x98 );
   if (plVar4 != (long*)0x0) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar4 + 0x60 ) )((Variant*)local_58, plVar4, this + 0x280, 0, 0, local_c8);
      if (local_c8[0] == 0) {
         Variant::operator_cast_to_Vector2((Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00100a1e;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x288] == (StyleBox)0x0 )) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_b8 = (undefined1[16])0x0;
      uStack_c0 = 0;
      uStack_bc = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((String*)local_c8, "_get_minimum_size");
      local_90 = CONCAT44(local_90._4_4_, 0xc);
      GetTypeInfo<Vector2,void>::get_class_info(local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_f8);
      local_70 = local_70 & 0xffffffff00000000;
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar3 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x290 ) = 0;
      pcVar5 = *(code**)( lVar3 + 0xd8 );
      if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xd0 ) ),pcVar5 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "StyleBox");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar3 = local_100 != 0 )) goto LAB_00100ca8;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_00100cbd:lVar3 = *(long*)( this + 8 );
            pcVar5 = *(code**)( lVar3 + 200 );
            if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_00100c00;
            uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x280);
            *(undefined8*)( this + 0x290 ) = uVar2;
         }
 else {
            lVar3 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_00100ca8:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar3 == 0) goto LAB_00100cbd;
         }

         lVar3 = *(long*)( this + 8 );
      }
 else {
         uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x280, uVar1);
         *(undefined8*)( this + 0x290 ) = uVar2;
         lVar3 = *(long*)( this + 8 );
      }

      LAB_00100c00:if (*(char*)( lVar3 + 0x29 ) != '\0') {
         plVar4 = (long*)operator_new(0x18, "");
         *plVar4 = (long)( this + 0x290 );
         plVar4[1] = (long)( this + 0x288 );
         plVar4[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar4;
      }

      this[0x288] = (StyleBox)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_c8);
   }

   pcVar5 = *(code**)( this + 0x290 );
   if (pcVar5 != (code*)0x0) {
      local_58[0] = 0;
      local_58[1] = 0;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar5 )(*(undefined8*)( this + 0x10 ), 0, local_58);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x280, pcVar5, 0, local_58);
      }

   }

   LAB_00100a1e:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Vector<int>::push_back(int) [clone .isra.0] */void Vector<int>::push_back(Vector<int> *this, int param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<int>::resize<false>((CowData<int>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<int>::_copy_on_write((CowData<int>*)( this + 8 ));
            *(int*)( *(long*)( this + 8 ) + lVar3 * 4 ) = param_1;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* StyleBox::_bind_methods() */void StyleBox::_bind_methods(void) {
   long lVar1;
   code *pcVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined *puVar15;
   undefined *puVar16;
   undefined *puVar17;
   undefined *puVar18;
   undefined8 uVar19;
   int *piVar20;
   MethodBind *pMVar21;
   uint uVar22;
   long lVar23;
   long *plVar24;
   int *piVar25;
   long in_FS_OFFSET;
   StringName *local_208;
   undefined8 local_190;
   long local_188;
   long local_180;
   long local_178;
   long local_170;
   long local_168;
   undefined8 local_160;
   char *local_158;
   undefined1 local_150[16];
   int local_140;
   long local_138;
   undefined4 local_130;
   char *local_128;
   undefined8 local_120;
   undefined1 local_118[16];
   int local_108[2];
   long local_100;
   undefined8 local_f8;
   undefined8 local_f0;
   undefined8 local_e8[2];
   int *local_d8;
   ulong local_d0;
   Vector<int> local_c8[8];
   long local_c0;
   char *local_b8;
   undefined *puStack_b0;
   undefined8 local_a8;
   char *local_98;
   undefined *puStack_90;
   undefined8 local_88;
   char *local_78;
   undefined *puStack_70;
   undefined8 local_68;
   char **local_58;
   undefined1 auStack_50[16];
   long local_40;
   puVar18 = PTR__LC49_0010dea8;
   puVar17 = PTR__LC48_0010dea0;
   puVar16 = PTR__LC45_0010de98;
   puVar15 = PTR__LC46_0010de90;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   D_METHODP((char*)&local_128, (char***)"get_minimum_size", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar21 = create_method_bind<StyleBox,Vector2>((_func_Vector2*)0x1d1);
   ClassDB::bind_methodfi(1, pMVar21, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   uVar19 = local_118._0_8_;
   if ((long*)local_118._0_8_ != (long*)0x0) {
      LOCK();
      plVar24 = (long*)( local_118._0_8_ + -0x10 );
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (*plVar24 == 0) {
         if ((long*)local_118._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_118._0_8_ + -8 );
         lVar23 = 0;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_118._8_8_;
         local_118 = auVar3 << 0x40;
         plVar24 = (long*)uVar19;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar24 != 0 )) {
                  StringName::unref();
               }

               lVar23 = lVar23 + 1;
               plVar24 = plVar24 + 1;
            }
 while ( lVar1 != lVar23 );
         }

         Memory::free_static((long*)( uVar19 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_128 != (char*)0x0 )) {
      StringName::unref();
   }

   local_68 = 0;
   local_78 = puVar17;
   puStack_70 = puVar18;
   auStack_50._0_8_ = &puStack_70;
   uVar22 = ( uint ) & local_58;
   local_58 = &local_78;
   D_METHODP((char*)&local_128, (char***)"set_content_margin", uVar22);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar21 = create_method_bind<StyleBox,Side,float>(set_content_margin);
   ClassDB::bind_methodfi(1, pMVar21, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   uVar19 = local_118._0_8_;
   if ((long*)local_118._0_8_ != (long*)0x0) {
      LOCK();
      plVar24 = (long*)( local_118._0_8_ + -0x10 );
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (*plVar24 == 0) {
         if ((long*)local_118._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_118._0_8_ + -8 );
         lVar23 = 0;
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_118._8_8_;
         local_118 = auVar4 << 0x40;
         plVar24 = (long*)uVar19;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar24 != 0 )) {
                  StringName::unref();
               }

               lVar23 = lVar23 + 1;
               plVar24 = plVar24 + 1;
            }
 while ( lVar1 != lVar23 );
         }

         Memory::free_static((long*)( uVar19 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_128 != (char*)0x0 )) {
      StringName::unref();
   }

   local_78 = "offset";
   puStack_70 = (undefined*)0x0;
   local_58 = &local_78;
   D_METHODP((char*)&local_128, (char***)"set_content_margin_all", uVar22);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar21 = create_method_bind<StyleBox,float>(set_content_margin_all);
   ClassDB::bind_methodfi(1, pMVar21, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   uVar19 = local_118._0_8_;
   if ((long*)local_118._0_8_ != (long*)0x0) {
      LOCK();
      plVar24 = (long*)( local_118._0_8_ + -0x10 );
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (*plVar24 == 0) {
         if ((long*)local_118._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_118._0_8_ + -8 );
         lVar23 = 0;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = local_118._8_8_;
         local_118 = auVar5 << 0x40;
         plVar24 = (long*)uVar19;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar24 != 0 )) {
                  StringName::unref();
               }

               lVar23 = lVar23 + 1;
               plVar24 = plVar24 + 1;
            }
 while ( lVar1 != lVar23 );
         }

         Memory::free_static((long*)( uVar19 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_128 != (char*)0x0 )) {
      StringName::unref();
   }

   local_78 = "margin";
   puStack_70 = (undefined*)0x0;
   local_58 = &local_78;
   D_METHODP((char*)&local_128, (char***)"get_content_margin", uVar22);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar21 = create_method_bind<StyleBox,float,Side>(get_content_margin);
   ClassDB::bind_methodfi(1, pMVar21, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   uVar19 = local_118._0_8_;
   if ((long*)local_118._0_8_ != (long*)0x0) {
      LOCK();
      plVar24 = (long*)( local_118._0_8_ + -0x10 );
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (*plVar24 == 0) {
         if ((long*)local_118._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_118._0_8_ + -8 );
         lVar23 = 0;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = local_118._8_8_;
         local_118 = auVar6 << 0x40;
         plVar24 = (long*)uVar19;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar24 != 0 )) {
                  StringName::unref();
               }

               lVar23 = lVar23 + 1;
               plVar24 = plVar24 + 1;
            }
 while ( lVar1 != lVar23 );
         }

         Memory::free_static((long*)( uVar19 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_128 != (char*)0x0 )) {
      StringName::unref();
   }

   local_78 = "margin";
   puStack_70 = (undefined*)0x0;
   local_58 = &local_78;
   D_METHODP((char*)&local_128, (char***)"get_margin", uVar22);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar21 = create_method_bind<StyleBox,float,Side>(get_margin);
   ClassDB::bind_methodfi(1, pMVar21, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   uVar19 = local_118._0_8_;
   if ((long*)local_118._0_8_ != (long*)0x0) {
      LOCK();
      plVar24 = (long*)( local_118._0_8_ + -0x10 );
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (*plVar24 == 0) {
         if ((long*)local_118._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_118._0_8_ + -8 );
         lVar23 = 0;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = local_118._8_8_;
         local_118 = auVar7 << 0x40;
         plVar24 = (long*)uVar19;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar24 != 0 )) {
                  StringName::unref();
               }

               lVar23 = lVar23 + 1;
               plVar24 = plVar24 + 1;
            }
 while ( lVar1 != lVar23 );
         }

         Memory::free_static((long*)( uVar19 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_128 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_128, (char***)"get_offset", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar21 = create_method_bind<StyleBox,Vector2>(get_offset);
   ClassDB::bind_methodfi(1, pMVar21, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   uVar19 = local_118._0_8_;
   if ((long*)local_118._0_8_ != (long*)0x0) {
      LOCK();
      plVar24 = (long*)( local_118._0_8_ + -0x10 );
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (*plVar24 == 0) {
         if ((long*)local_118._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_118._0_8_ + -8 );
         lVar23 = 0;
         auVar8._8_8_ = 0;
         auVar8._0_8_ = local_118._8_8_;
         local_118 = auVar8 << 0x40;
         plVar24 = (long*)uVar19;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar24 != 0 )) {
                  StringName::unref();
               }

               lVar23 = lVar23 + 1;
               plVar24 = plVar24 + 1;
            }
 while ( lVar1 != lVar23 );
         }

         Memory::free_static((long*)( uVar19 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_128 != (char*)0x0 )) {
      StringName::unref();
   }

   local_88 = 0;
   local_98 = "canvas_item";
   puStack_90 = puVar16;
   auStack_50._0_8_ = &puStack_90;
   local_58 = &local_98;
   D_METHODP((char*)&local_128, (char***)&_LC53, uVar22);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar21 = create_method_bind<StyleBox,RID,Rect2_const&>((_func_void_RID_Rect2_ptr*)0x1d9);
   ClassDB::bind_methodfi(1, pMVar21, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   uVar19 = local_118._0_8_;
   if ((long*)local_118._0_8_ != (long*)0x0) {
      LOCK();
      plVar24 = (long*)( local_118._0_8_ + -0x10 );
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (*plVar24 == 0) {
         if ((long*)local_118._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_118._0_8_ + -8 );
         lVar23 = 0;
         auVar9._8_8_ = 0;
         auVar9._0_8_ = local_118._8_8_;
         local_118 = auVar9 << 0x40;
         plVar24 = (long*)uVar19;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar24 != 0 )) {
                  StringName::unref();
               }

               lVar23 = lVar23 + 1;
               plVar24 = plVar24 + 1;
            }
 while ( lVar1 != lVar23 );
         }

         Memory::free_static((long*)( uVar19 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_128 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_128, (char***)"get_current_item_drawn", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar21 = create_method_bind<StyleBox,CanvasItem*>(get_current_item_drawn);
   ClassDB::bind_methodfi(1, pMVar21, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   uVar19 = local_118._0_8_;
   if ((long*)local_118._0_8_ != (long*)0x0) {
      LOCK();
      plVar24 = (long*)( local_118._0_8_ + -0x10 );
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (*plVar24 == 0) {
         if ((long*)local_118._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_118._0_8_ + -8 );
         lVar23 = 0;
         auVar10._8_8_ = 0;
         auVar10._0_8_ = local_118._8_8_;
         local_118 = auVar10 << 0x40;
         plVar24 = (long*)uVar19;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar24 != 0 )) {
                  StringName::unref();
               }

               lVar23 = lVar23 + 1;
               plVar24 = plVar24 + 1;
            }
 while ( lVar1 != lVar23 );
         }

         Memory::free_static((long*)( uVar19 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_128 != (char*)0x0 )) {
      StringName::unref();
   }

   local_a8 = 0;
   auStack_50._0_8_ = &puStack_b0;
   local_b8 = puVar15;
   puStack_b0 = puVar16;
   local_58 = &local_b8;
   D_METHODP((char*)&local_128, (char***)"test_mask", uVar22);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar21 = create_method_bind<StyleBox,bool,Vector2_const&,Rect2_const&>((_func_bool_Vector2_ptr_Rect2_ptr*)0x1e9);
   ClassDB::bind_methodfi(1, pMVar21, false, (MethodDefinition*)&local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   uVar19 = local_118._0_8_;
   if ((long*)local_118._0_8_ != (long*)0x0) {
      LOCK();
      plVar24 = (long*)( local_118._0_8_ + -0x10 );
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (*plVar24 == 0) {
         if ((long*)local_118._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_118._0_8_ + -8 );
         lVar23 = 0;
         auVar11._8_8_ = 0;
         auVar11._0_8_ = local_118._8_8_;
         local_118 = auVar11 << 0x40;
         plVar24 = (long*)uVar19;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar24 != 0 )) {
                  StringName::unref();
               }

               lVar23 = lVar23 + 1;
               plVar24 = plVar24 + 1;
            }
 while ( lVar1 != lVar23 );
         }

         Memory::free_static((long*)( uVar19 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_128 != (char*)0x0 )) {
      StringName::unref();
   }

   local_158 = (char*)0x0;
   local_128 = "content_margin_";
   local_120 = 0xf;
   String::parse_latin1((StrRange*)&local_158);
   local_128 = "Content Margins";
   local_168 = 0;
   local_120 = 0xf;
   String::parse_latin1((StrRange*)&local_168);
   local_128 = "StyleBox";
   local_170 = 0;
   local_120 = 8;
   String::parse_latin1((StrRange*)&local_170);
   StringName::StringName((StringName*)&local_128, (StrRange*)&local_170, false);
   ClassDB::add_property_group((StringName*)&local_128, (String*)&local_168, (String*)&local_158, 0);
   if (( StringName::configured != '\0' ) && ( local_128 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   _scs_create((char*)&local_168, true);
   _scs_create((char*)&local_170, true);
   local_178 = 0;
   local_128 = "-1,2048,1,suffix:px";
   local_180 = 0;
   local_120 = 0x13;
   String::parse_latin1((StrRange*)&local_180);
   local_188 = 0;
   local_128 = "content_margin_left";
   local_120 = 0x13;
   String::parse_latin1((StrRange*)&local_188);
   local_128 = (char*)CONCAT44(local_128._4_4_, 3);
   local_120 = 0;
   if (local_188 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_120, (CowData*)&local_188);
   }

   local_118._0_12_ = ZEXT412(1) << 0x40;
   local_108[0] = 0;
   local_108[1] = 0;
   if (local_180 == 0) {
      local_100 = CONCAT44(local_100._4_4_, 6);
      LAB_00101c53:StringName::operator =((StringName*)local_118, (StringName*)&local_178);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)local_108, (CowData*)&local_180);
      local_100 = CONCAT44(local_100._4_4_, 6);
      if (local_118._8_4_ != 0x11) goto LAB_00101c53;
      StringName::StringName((StringName*)&local_158, (CowData<char32_t>*)local_108, false);
      if ((char*)local_118._0_8_ == local_158) {
         if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_118._0_8_ = local_158;
      }

   }

   local_208 = (StringName*)&local_178;
   local_190 = 0;
   local_158 = "StyleBox";
   local_150._0_8_ = 8;
   String::parse_latin1((StrRange*)&local_190);
   StringName::StringName((StringName*)&local_158, (StrRange*)&local_190, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_128, (StringName*)&local_170, (StringName*)&local_168, 0);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_190);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_178 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_168 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_168, true);
   _scs_create((char*)&local_170, true);
   local_128 = "-1,2048,1,suffix:px";
   local_178 = 0;
   local_180 = 0;
   local_120 = 0x13;
   String::parse_latin1((StrRange*)&local_180);
   local_188 = 0;
   local_128 = "content_margin_top";
   local_120 = 0x12;
   String::parse_latin1((StrRange*)&local_188);
   local_128 = (char*)CONCAT44(local_128._4_4_, 3);
   local_120 = 0;
   if (local_188 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_120, (CowData*)&local_188);
   }

   local_118._0_12_ = ZEXT412(1) << 0x40;
   local_108[0] = 0;
   local_108[1] = 0;
   if (local_180 == 0) {
      local_100 = CONCAT44(local_100._4_4_, 6);
      LAB_00101edb:StringName::operator =((StringName*)local_118, local_208);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)local_108, (CowData*)&local_180);
      local_100 = CONCAT44(local_100._4_4_, 6);
      if (local_118._8_4_ != 0x11) goto LAB_00101edb;
      StringName::StringName((StringName*)&local_158, (CowData<char32_t>*)local_108, false);
      if ((char*)local_118._0_8_ == local_158) {
         if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_118._0_8_ = local_158;
      }

   }

   local_190 = 0;
   local_158 = "StyleBox";
   local_150._0_8_ = 8;
   String::parse_latin1((StrRange*)&local_190);
   StringName::StringName((StringName*)&local_158, (StrRange*)&local_190, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_128, (StringName*)&local_170, (StringName*)&local_168, 1);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_190);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   if (( ( StringName::configured != '\0' ) && ( ( local_178 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_168 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_168, true);
   _scs_create((char*)&local_170, true);
   local_128 = "-1,2048,1,suffix:px";
   local_178 = 0;
   local_180 = 0;
   local_120 = 0x13;
   String::parse_latin1((StrRange*)&local_180);
   local_188 = 0;
   local_128 = "content_margin_right";
   local_120 = 0x14;
   String::parse_latin1((StrRange*)&local_188);
   local_128 = (char*)CONCAT44(local_128._4_4_, 3);
   local_120 = 0;
   if (local_188 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_120, (CowData*)&local_188);
   }

   local_118._0_12_ = ZEXT412(1) << 0x40;
   local_108[0] = 0;
   local_108[1] = 0;
   if (local_180 == 0) {
      local_100 = CONCAT44(local_100._4_4_, 6);
      LAB_00102153:StringName::operator =((StringName*)local_118, local_208);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)local_108, (CowData*)&local_180);
      local_100 = CONCAT44(local_100._4_4_, 6);
      if (local_118._8_4_ != 0x11) goto LAB_00102153;
      StringName::StringName((StringName*)&local_158, (CowData<char32_t>*)local_108, false);
      if ((char*)local_118._0_8_ == local_158) {
         if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_118._0_8_ = local_158;
      }

   }

   local_190 = 0;
   local_158 = "StyleBox";
   local_150._0_8_ = 8;
   String::parse_latin1((StrRange*)&local_190);
   StringName::StringName((StringName*)&local_158, (StrRange*)&local_190, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_128, (StringName*)&local_170, (StringName*)&local_168, 2);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_190);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_178 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_168 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_168, true);
   _scs_create((char*)&local_170, true);
   local_128 = "-1,2048,1,suffix:px";
   local_178 = 0;
   local_180 = 0;
   local_120 = 0x13;
   String::parse_latin1((StrRange*)&local_180);
   local_188 = 0;
   local_128 = "content_margin_bottom";
   local_120 = 0x15;
   String::parse_latin1((StrRange*)&local_188);
   local_128 = (char*)CONCAT44(local_128._4_4_, 3);
   local_120 = 0;
   if (local_188 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_120, (CowData*)&local_188);
   }

   local_118._0_12_ = ZEXT412(1) << 0x40;
   local_108[0] = 0;
   local_108[1] = 0;
   if (local_180 == 0) {
      local_100 = CONCAT44(local_100._4_4_, 6);
      LAB_001023cb:StringName::operator =((StringName*)local_118, local_208);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)local_108, (CowData*)&local_180);
      local_100 = CONCAT44(local_100._4_4_, 6);
      if (local_118._8_4_ != 0x11) goto LAB_001023cb;
      StringName::StringName((StringName*)&local_158, (CowData<char32_t>*)local_108, false);
      if ((char*)local_118._0_8_ == local_158) {
         if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_118._0_8_ = local_158;
      }

   }

   local_190 = 0;
   local_158 = "StyleBox";
   local_150._0_8_ = 8;
   String::parse_latin1((StrRange*)&local_190);
   StringName::StringName((StringName*)&local_158, (StrRange*)&local_190, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_128, (StringName*)&local_170, (StringName*)&local_168, 3);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_190);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   if (( ( StringName::configured != '\0' ) && ( ( local_178 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_168 != 0 ) ) )) {
      StringName::unref();
   }

   local_160 = 0;
   local_158 = (char*)0x0;
   local_128 = "to_canvas_item";
   local_120 = 0xe;
   String::parse_latin1((StrRange*)&local_158);
   local_128 = (char*)0x0;
   if (local_158 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_128, (CowData*)&local_158);
   }

   Vector<String>::push_back((Vector<String>*)&local_168, (MethodDefinition*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   local_170 = 0;
   local_128 = "rect";
   local_120 = 4;
   String::parse_latin1((StrRange*)&local_170);
   local_128 = (char*)0x0;
   if (local_170 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_128, (CowData*)&local_170);
   }

   Vector<String>::push_back((Vector<String>*)&local_168, (MethodDefinition*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   local_118 = (undefined1[16])0x0;
   local_158 = "_draw";
   local_128 = (char*)0x0;
   local_120 = 0;
   local_108[0] = 0;
   local_108[1] = 0;
   local_100 = 0;
   local_f8 = 6;
   local_f0 = 1;
   local_e8[0] = 0;
   local_d8 = (int*)0x0;
   local_d0 = 0;
   local_c0 = 0;
   local_150._0_8_ = 5;
   String::parse_latin1((StrRange*)&local_128);
   local_f0 = CONCAT44(local_f0._4_4_, 0x8c);
   local_188 = 0;
   local_180 = 0;
   local_158 = "";
   auVar13._8_8_ = 0;
   auVar13._0_8_ = local_150._8_8_;
   local_150 = auVar13 << 0x40;
   String::parse_latin1((StrRange*)&local_180);
   local_178 = 0;
   local_158 = (char*)CONCAT44(local_158._4_4_, 0x17);
   local_140 = 0;
   local_138 = 0;
   local_150 = (undefined1[16])0x0;
   if (local_180 == 0) {
      LAB_0010276b:local_130 = 6;
      StringName::operator =((StringName*)( local_150 + 8 ), (StringName*)&local_188);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_138, (CowData*)&local_180);
      local_130 = 6;
      if (local_140 != 0x11) goto LAB_0010276b;
      StringName::StringName((StringName*)&local_170, (CowData<char32_t>*)&local_138, false);
      if (local_150._8_8_ == local_170) {
         if (( StringName::configured != '\0' ) && ( local_170 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_150._8_8_ = local_170;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_208);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   if (( StringName::configured != '\0' ) && ( local_188 != 0 )) {
      StringName::unref();
   }

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_e8, (PropertyInfo*)&local_158);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
   Vector<int>::push_back(local_c8, 0);
   GetTypeInfo<Rect2,void>::get_class_info((GetTypeInfo<Rect2,void>*)&local_158);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_e8, (PropertyInfo*)&local_158);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
   Vector<int>::push_back(local_c8, 0);
   local_158 = "StyleBox";
   local_170 = 0;
   local_150._0_8_ = 8;
   String::parse_latin1((StrRange*)&local_170);
   StringName::StringName((StringName*)&local_158, (StrRange*)&local_170, false);
   ClassDB::add_virtual_method((StringName*)&local_158, (MethodInfo*)&local_128, true, (Vector*)&local_168, false);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   lVar1 = local_c0;
   if (local_c0 != 0) {
      LOCK();
      plVar24 = (long*)( local_c0 + -0x10 );
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (*plVar24 == 0) {
         local_c0 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   piVar20 = local_d8;
   if (local_d8 != (int*)0x0) {
      LOCK();
      plVar24 = (long*)( local_d8 + -4 );
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (*plVar24 == 0) {
         if (local_d8 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_d8 + -2 );
         lVar23 = 0;
         local_d8 = (int*)0x0;
         piVar25 = piVar20;
         if (lVar1 != 0) {
            do {
               if (Variant::needs_deinit[*piVar25] != '\0') {
                  Variant::_clear_internal();
               }

               lVar23 = lVar23 + 1;
               piVar25 = piVar25 + 6;
            }
 while ( lVar1 != lVar23 );
         }

         Memory::free_static(piVar20 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   if (( StringName::configured != '\0' ) && ( local_118._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   CowData<String>::_unref((CowData<String>*)&local_160);
   local_160 = 0;
   local_158 = (char*)0x0;
   local_128 = "rect";
   local_120 = 4;
   String::parse_latin1((StrRange*)&local_158);
   local_128 = (char*)0x0;
   if (local_158 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_128, (CowData*)&local_158);
   }

   Vector<String>::push_back((Vector<String>*)&local_168, (MethodDefinition*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   local_118._0_8_ = 0;
   local_118._8_8_ = 0;
   local_158 = "_get_draw_rect";
   local_128 = (char*)0x0;
   local_120 = 0;
   local_108[0] = 0;
   local_108[1] = 0;
   local_100 = 0;
   local_f8 = 6;
   local_f0 = 1;
   local_e8[0] = 0;
   local_d8 = (int*)0x0;
   local_d0 = 0;
   local_c0 = 0;
   local_150._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_128);
   local_f0 = CONCAT44(local_f0._4_4_, 0xc);
   GetTypeInfo<Rect2,void>::get_class_info((GetTypeInfo<Rect2,void>*)&local_158);
   local_120 = CONCAT44(local_120._4_4_, local_158._0_4_);
   if (local_118._0_8_ != local_150._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)local_118);
      local_118._0_8_ = local_150._0_8_;
      local_150._0_8_ = 0;
   }

   if (local_118._8_8_ != local_150._8_8_) {
      StringName::unref();
      local_118._8_8_ = local_150._8_8_;
      local_150._8_8_ = 0;
   }

   local_108[0] = local_140;
   if (local_100 != local_138) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
      local_100 = local_138;
      local_138 = 0;
   }

   local_f8 = CONCAT44(local_f8._4_4_, local_130);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
   local_d0 = local_d0 & 0xffffffff00000000;
   GetTypeInfo<Rect2,void>::get_class_info((GetTypeInfo<Rect2,void>*)&local_158);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_e8, (PropertyInfo*)&local_158);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
   Vector<int>::push_back(local_c8, 0);
   local_158 = "StyleBox";
   local_170 = 0;
   local_150._0_8_ = 8;
   String::parse_latin1((StrRange*)&local_170);
   StringName::StringName((StringName*)&local_158, (StrRange*)&local_170, false);
   ClassDB::add_virtual_method((StringName*)&local_158, (MethodInfo*)&local_128, true, (Vector*)&local_168, false);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   lVar1 = local_c0;
   if (local_c0 != 0) {
      LOCK();
      plVar24 = (long*)( local_c0 + -0x10 );
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (*plVar24 == 0) {
         local_c0 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   piVar20 = local_d8;
   if (local_d8 != (int*)0x0) {
      LOCK();
      plVar24 = (long*)( local_d8 + -4 );
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (*plVar24 == 0) {
         if (local_d8 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_d8 + -2 );
         lVar23 = 0;
         local_d8 = (int*)0x0;
         piVar25 = piVar20;
         if (lVar1 != 0) {
            do {
               if (Variant::needs_deinit[*piVar25] != '\0') {
                  Variant::_clear_internal();
               }

               lVar23 = lVar23 + 1;
               piVar25 = piVar25 + 6;
            }
 while ( lVar1 != lVar23 );
         }

         Memory::free_static(piVar20 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   if (( StringName::configured != '\0' ) && ( local_118._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   CowData<String>::_unref((CowData<String>*)&local_160);
   local_118._0_8_ = 0;
   local_118._8_8_ = 0;
   local_158 = "_get_minimum_size";
   local_160 = 0;
   local_128 = (char*)0x0;
   local_120 = 0;
   local_108[0] = 0;
   local_108[1] = 0;
   local_100 = 0;
   local_f8 = 6;
   local_f0 = 1;
   local_e8[0] = 0;
   local_d8 = (int*)0x0;
   local_d0 = 0;
   local_c0 = 0;
   local_150._0_8_ = 0x11;
   String::parse_latin1((StrRange*)&local_128);
   local_f0 = CONCAT44(local_f0._4_4_, 0xc);
   GetTypeInfo<Vector2,void>::get_class_info((GetTypeInfo<Vector2,void>*)&local_158);
   local_120 = CONCAT44(local_120._4_4_, local_158._0_4_);
   if (local_118._0_8_ != local_150._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)local_118);
      local_118._0_8_ = local_150._0_8_;
      local_150._0_8_ = 0;
   }

   if (local_118._8_8_ != local_150._8_8_) {
      StringName::unref();
      local_118._8_8_ = local_150._8_8_;
      local_150._8_8_ = 0;
   }

   local_108[0] = local_140;
   if (local_100 != local_138) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
      local_100 = local_138;
      local_138 = 0;
   }

   local_f8 = CONCAT44(local_f8._4_4_, local_130);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
   local_158 = "StyleBox";
   local_d0 = local_d0 & 0xffffffff00000000;
   local_170 = 0;
   local_150._0_8_ = 8;
   String::parse_latin1((StrRange*)&local_170);
   StringName::StringName((StringName*)&local_158, (StrRange*)&local_170, false);
   ClassDB::add_virtual_method((StringName*)&local_158, (MethodInfo*)&local_128, true, (Vector*)&local_168, false);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   lVar1 = local_c0;
   if (local_c0 != 0) {
      LOCK();
      plVar24 = (long*)( local_c0 + -0x10 );
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (*plVar24 == 0) {
         local_c0 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   piVar20 = local_d8;
   if (local_d8 != (int*)0x0) {
      LOCK();
      plVar24 = (long*)( local_d8 + -4 );
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (*plVar24 == 0) {
         if (local_d8 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_d8 + -2 );
         lVar23 = 0;
         local_d8 = (int*)0x0;
         piVar25 = piVar20;
         if (lVar1 != 0) {
            do {
               if (Variant::needs_deinit[*piVar25] != '\0') {
                  Variant::_clear_internal();
               }

               lVar23 = lVar23 + 1;
               piVar25 = piVar25 + 6;
            }
 while ( lVar1 != lVar23 );
         }

         Memory::free_static(piVar20 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   if (( StringName::configured != '\0' ) && ( local_118._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   CowData<String>::_unref((CowData<String>*)&local_160);
   local_160 = 0;
   local_158 = (char*)0x0;
   local_128 = "point";
   local_120 = 5;
   String::parse_latin1((StrRange*)&local_158);
   local_128 = (char*)0x0;
   if (local_158 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_128, (CowData*)&local_158);
   }

   Vector<String>::push_back((Vector<String>*)&local_168, (MethodDefinition*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   local_170 = 0;
   local_128 = "rect";
   local_120 = 4;
   String::parse_latin1((StrRange*)&local_170);
   local_128 = (char*)0x0;
   if (local_170 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_128, (CowData*)&local_170);
   }

   Vector<String>::push_back((Vector<String>*)&local_168, (MethodDefinition*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   local_118._0_8_ = 0;
   local_118._8_8_ = 0;
   local_158 = "_test_mask";
   local_128 = (char*)0x0;
   local_120 = 0;
   local_108[0] = 0;
   local_108[1] = 0;
   local_100 = 0;
   local_f8 = 6;
   local_f0 = 1;
   local_e8[0] = 0;
   local_d8 = (int*)0x0;
   local_d0 = 0;
   local_c0 = 0;
   local_150._0_8_ = 10;
   String::parse_latin1((StrRange*)&local_128);
   local_f0 = CONCAT44(local_f0._4_4_, 0xc);
   local_188 = 0;
   local_180 = 0;
   local_158 = "";
   auVar14._8_8_ = 0;
   auVar14._0_8_ = local_150._8_8_;
   local_150 = auVar14 << 0x40;
   String::parse_latin1((StrRange*)&local_180);
   local_178 = 0;
   local_158 = (char*)CONCAT44(local_158._4_4_, 1);
   local_140 = 0;
   local_138 = 0;
   local_150 = (undefined1[16])0x0;
   if (local_180 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_138, (CowData*)&local_180);
      local_130 = 6;
      if (local_140 == 0x11) {
         StringName::StringName((StringName*)&local_170, (CowData<char32_t>*)&local_138, false);
         if (local_150._8_8_ == local_170) {
            if (( StringName::configured != '\0' ) && ( local_170 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_150._8_8_ = local_170;
         }

         goto LAB_00103385;
      }

   }

   local_130 = 6;
   StringName::operator =((StringName*)( local_150 + 8 ), (StringName*)&local_188);
   LAB_00103385:CowData<char32_t>::_unref((CowData<char32_t>*)local_208);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   if (( StringName::configured != '\0' ) && ( local_188 != 0 )) {
      StringName::unref();
   }

   local_120 = CONCAT44(local_120._4_4_, local_158._0_4_);
   if (local_118._0_8_ != local_150._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)local_118);
      local_118._0_8_ = local_150._0_8_;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = local_150._8_8_;
      local_150 = auVar12 << 0x40;
   }

   if (local_118._8_8_ != local_150._8_8_) {
      StringName::unref();
      local_118._8_8_ = local_150._8_8_;
      local_150._8_8_ = 0;
   }

   local_108[0] = local_140;
   if (local_100 != local_138) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
      local_100 = local_138;
      local_138 = 0;
   }

   local_f8 = CONCAT44(local_f8._4_4_, local_130);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
   local_d0 = local_d0 & 0xffffffff00000000;
   GetTypeInfo<Vector2,void>::get_class_info((GetTypeInfo<Vector2,void>*)&local_158);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_e8, (PropertyInfo*)&local_158);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
   Vector<int>::push_back(local_c8, 0);
   GetTypeInfo<Rect2,void>::get_class_info((GetTypeInfo<Rect2,void>*)&local_158);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_e8, (PropertyInfo*)&local_158);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
   Vector<int>::push_back(local_c8, 0);
   local_158 = "StyleBox";
   local_170 = 0;
   local_150._0_8_ = 8;
   String::parse_latin1((StrRange*)&local_170);
   StringName::StringName((StringName*)&local_158, (StrRange*)&local_170, false);
   ClassDB::add_virtual_method((StringName*)&local_158, (MethodInfo*)&local_128, true, (Vector*)&local_168, false);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   lVar1 = local_c0;
   if (local_c0 != 0) {
      LOCK();
      plVar24 = (long*)( local_c0 + -0x10 );
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (*plVar24 == 0) {
         local_c0 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   piVar20 = local_d8;
   if (local_d8 != (int*)0x0) {
      LOCK();
      plVar24 = (long*)( local_d8 + -4 );
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (*plVar24 == 0) {
         if (local_d8 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_d8 + -2 );
         lVar23 = 0;
         local_d8 = (int*)0x0;
         piVar25 = piVar20;
         if (lVar1 != 0) {
            do {
               if (Variant::needs_deinit[*piVar25] != '\0') {
                  Variant::_clear_internal();
               }

               lVar23 = lVar23 + 1;
               piVar25 = piVar25 + 6;
            }
 while ( lVar1 != lVar23 );
         }

         Memory::free_static(piVar20 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   if (( StringName::configured != '\0' ) && ( local_118._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   CowData<String>::_unref((CowData<String>*)&local_160);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* StyleBox::test_mask(Vector2 const&, Rect2 const&) const */bool StyleBox::test_mask(StyleBox *this, Vector2 *param_1, Rect2 *param_2) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *pcVar5;
   long in_FS_OFFSET;
   bool bVar6;
   undefined8 local_178;
   long local_170;
   GetTypeInfo<bool,void> local_168[8];
   long local_160[5];
   int local_138[2];
   undefined4 uStack_130;
   undefined4 uStack_12c;
   undefined1 local_128[16];
   undefined8 local_118;
   undefined8 local_110;
   undefined8 local_108;
   undefined8 local_100;
   undefined8 local_f8[2];
   undefined8 local_e8;
   ulong local_e0;
   Vector<int> local_d8[8];
   undefined8 local_d0;
   Variant *local_c0;
   undefined8 local_b8;
   undefined8 uStack_b0;
   Variant *local_a8;
   Variant *pVStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   Variant **local_78;
   undefined8 *puStack_70;
   int local_60[8];
   long local_40;
   local_b8 = *(undefined8*)param_2;
   uStack_b0 = *(undefined8*)( param_2 + 8 );
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_c0 = *(Variant**)param_1;
   if (plVar4 != (long*)0x0) {
      local_138[0] = 0;
      local_138[1] = 0;
      uStack_130 = 0;
      Variant::Variant((Variant*)&local_78, (Vector2*)&local_c0);
      Variant::Variant((Variant*)local_60, (Rect2*)&local_b8);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = (Variant*)local_60;
      ( **(code**)( *plVar4 + 0x60 ) )((Variant*)&local_98, plVar4, this + 0x298, &local_a8, 2, local_138);
      if (local_138[0] == 0) {
         bVar6 = Variant::operator_cast_to_bool((Variant*)&local_98);
         if (Variant::needs_deinit[(int)local_98] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00103ab2;
      }

      if (Variant::needs_deinit[(int)local_98] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_60[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x2a0] == (StyleBox)0x0 )) {
      local_138[0] = 0;
      local_138[1] = 0;
      local_128 = (undefined1[16])0x0;
      uStack_130 = 0;
      uStack_12c = 0;
      local_118 = 0;
      local_110 = 0;
      local_108 = 6;
      local_100 = 1;
      local_f8[0] = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_d0 = 0;
      String::parse_latin1((String*)local_138, "_test_mask");
      local_100 = CONCAT44(local_100._4_4_, 0xc);
      GetTypeInfo<bool,void>::get_class_info(local_168);
      PropertyInfo::operator =((PropertyInfo*)&uStack_130, (PropertyInfo*)local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_168);
      local_e0 = local_e0 & 0xffffffff00000000;
      GetTypeInfo<Vector2,void>::get_class_info((GetTypeInfo<Vector2,void>*)local_168);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_f8, (PropertyInfo*)local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_168);
      Vector<int>::push_back(local_d8, 0);
      GetTypeInfo<Rect2,void>::get_class_info((GetTypeInfo<Rect2,void>*)local_168);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_f8, (PropertyInfo*)local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_168);
      Vector<int>::push_back(local_d8, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      *(undefined8*)( this + 0x2a8 ) = 0;
      lVar3 = *(long*)( this + 8 );
      pcVar5 = *(code**)( lVar3 + 0xd8 );
      if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xd0 ) ),pcVar5 == (code*)0x0) {
         local_178 = 0;
         String::parse_latin1((String*)&local_178, "StyleBox");
         StringName::StringName((StringName*)&local_170, (String*)&local_178, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_168, (StringName*)&local_170);
         if (local_160[0] == 0) {
            lVar3 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_160);
            if (StringName::configured != '\0') goto LAB_00103dd0;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
            LAB_00103ded:lVar3 = *(long*)( this + 8 );
            pcVar5 = *(code**)( lVar3 + 200 );
            if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_00103cda;
            uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x298);
            *(undefined8*)( this + 0x2a8 ) = uVar2;
         }
 else {
            lVar3 = *(long*)( local_160[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_160);
            if (StringName::configured != '\0') {
               LAB_00103dd0:if (local_170 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
            if (lVar3 == 0) goto LAB_00103ded;
         }

         lVar3 = *(long*)( this + 8 );
      }
 else {
         uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x298, uVar1);
         *(undefined8*)( this + 0x2a8 ) = uVar2;
         lVar3 = *(long*)( this + 8 );
      }

      LAB_00103cda:if (*(char*)( lVar3 + 0x29 ) != '\0') {
         plVar4 = (long*)operator_new(0x18, "");
         *plVar4 = (long)( this + 0x2a8 );
         plVar4[1] = (long)( this + 0x2a0 );
         plVar4[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar4;
      }

      this[0x2a0] = (StyleBox)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_138);
   }

   pcVar5 = *(code**)( this + 0x2a8 );
   bVar6 = true;
   if (pcVar5 != (code*)0x0) {
      local_a8 = local_c0;
      local_78 = &local_a8;
      puStack_70 = &local_98;
      local_98 = local_b8;
      uStack_90 = uStack_b0;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar5 )(*(undefined8*)( this + 0x10 ), &local_78, local_138);
         bVar6 = local_138[0]._0_1_ != (String)0x0;
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x298, pcVar5, &local_78, local_138);
         bVar6 = local_138[0]._0_1_ != (String)0x0;
      }

   }

   LAB_00103ab2:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return bVar6;
}
/* StyleBox::get_draw_rect(Rect2 const&) const */undefined1  [16] __thiscallStyleBox::get_draw_rect(StyleBox *this, Rect2 *param_1) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *pcVar5;
   long in_FS_OFFSET;
   undefined1 auVar6[16];
   undefined8 local_148;
   long local_140;
   GetTypeInfo<Rect2,void> local_138[8];
   long local_130[5];
   int local_108[2];
   undefined4 uStack_100;
   undefined4 uStack_fc;
   undefined1 local_f8[16];
   undefined8 local_e8;
   undefined8 local_e0;
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8[2];
   undefined8 local_b8;
   ulong local_b0;
   Vector<int> local_a8[8];
   undefined8 local_a0;
   Variant *local_90;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_58;
   undefined8 local_50;
   long local_40;
   local_88 = *(undefined8*)param_1;
   uStack_80 = *(undefined8*)( param_1 + 8 );
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar4 != (long*)0x0) {
      local_108[0] = 0;
      local_108[1] = 0;
      uStack_100 = 0;
      Variant::Variant((Variant*)&local_78, (Rect2*)&local_88);
      local_90 = (Variant*)&local_78;
      ( **(code**)( *plVar4 + 0x60 ) )((Variant*)&local_58, plVar4, this + 0x268, &local_90, 1, local_108);
      if (local_108[0] == 0) {
         auVar6 = Variant::operator_cast_to_Rect2((Variant*)&local_58);
         if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00103fa5;
      }

      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x270] == (StyleBox)0x0 )) {
      local_108[0] = 0;
      local_108[1] = 0;
      local_f8 = (undefined1[16])0x0;
      uStack_100 = 0;
      uStack_fc = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_d8 = 6;
      local_d0 = 1;
      local_c8[0] = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_a0 = 0;
      String::parse_latin1((String*)local_108, "_get_draw_rect");
      local_d0 = CONCAT44(local_d0._4_4_, 0xc);
      GetTypeInfo<Rect2,void>::get_class_info(local_138);
      PropertyInfo::operator =((PropertyInfo*)&uStack_100, (PropertyInfo*)local_138);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_138);
      local_b0 = local_b0 & 0xffffffff00000000;
      GetTypeInfo<Rect2,void>::get_class_info(local_138);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_c8, (PropertyInfo*)local_138);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_138);
      Vector<int>::push_back(local_a8, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar3 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x278 ) = 0;
      pcVar5 = *(code**)( lVar3 + 0xd8 );
      if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xd0 ) ),pcVar5 == (code*)0x0) {
         local_148 = 0;
         String::parse_latin1((String*)&local_148, "StyleBox");
         StringName::StringName((StringName*)&local_140, (String*)&local_148, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_138, (StringName*)&local_140);
         if (local_130[0] == 0) {
            lVar3 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_130);
            if (StringName::configured != '\0') goto LAB_001042cf;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
            LAB_001042ee:lVar3 = *(long*)( this + 8 );
            pcVar5 = *(code**)( lVar3 + 200 );
            if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_00104207;
            uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x268);
            *(undefined8*)( this + 0x278 ) = uVar2;
         }
 else {
            lVar3 = *(long*)( local_130[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_130);
            if (StringName::configured != '\0') {
               LAB_001042cf:if (local_140 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
            if (lVar3 == 0) goto LAB_001042ee;
         }

         lVar3 = *(long*)( this + 8 );
      }
 else {
         uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x268, uVar1);
         *(undefined8*)( this + 0x278 ) = uVar2;
         lVar3 = *(long*)( this + 8 );
      }

      LAB_00104207:if (*(char*)( lVar3 + 0x29 ) != '\0') {
         plVar4 = (long*)operator_new(0x18, "");
         *plVar4 = (long)( this + 0x278 );
         plVar4[1] = (long)( this + 0x270 );
         plVar4[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar4;
      }

      this[0x270] = (StyleBox)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_108);
   }

   pcVar5 = *(code**)( this + 0x278 );
   if (pcVar5 == (code*)0x0) {
      auVar6 = *(undefined1(*) [16])param_1;
   }
 else {
      local_90 = (Variant*)&local_78;
      local_58 = 0;
      local_50 = 0;
      local_78 = local_88;
      uStack_70 = uStack_80;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar5 )(*(undefined8*)( this + 0x10 ), &local_90, &local_58);
         auVar6._8_8_ = local_50;
         auVar6._0_8_ = local_58;
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x268, pcVar5, &local_90, &local_58);
         auVar6._8_8_ = local_50;
         auVar6._0_8_ = local_58;
      }

   }

   LAB_00103fa5:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return auVar6;
}
/* StyleBox::draw(RID, Rect2 const&) const */void StyleBox::draw(StyleBox *this, undefined8 param_2, undefined8 *param_3) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *pcVar5;
   long in_FS_OFFSET;
   undefined8 local_190;
   CowData<char32_t> local_188[8];
   CowData<char32_t> local_180[8];
   undefined8 local_178;
   String local_170[8];
   undefined8 local_168;
   long local_160;
   undefined8 local_158;
   long local_150[5];
   int local_128;
   undefined4 uStack_124;
   undefined4 uStack_120;
   undefined4 uStack_11c;
   undefined1 local_118[16];
   undefined8 local_108;
   undefined8 local_100;
   undefined8 local_f8;
   undefined8 local_f0;
   undefined8 local_e8[2];
   undefined8 local_d8;
   undefined8 local_d0;
   Vector<int> local_c8[8];
   undefined8 local_c0;
   undefined8 local_b8;
   undefined8 uStack_b0;
   Variant *local_a8;
   Variant *pVStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   int *local_78;
   undefined8 *puStack_70;
   int local_60[8];
   long local_40;
   local_b8 = *param_3;
   uStack_b0 = param_3[1];
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_190 = param_2;
   if (plVar4 != (long*)0x0) {
      local_128 = 0;
      uStack_124 = 0;
      uStack_120 = 0;
      Variant::Variant((Variant*)&local_78, (RID*)&local_190);
      Variant::Variant((Variant*)local_60, (Rect2*)&local_b8);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = (Variant*)local_60;
      ( **(code**)( *plVar4 + 0x60 ) )(&local_98, plVar4, this + 0x250, &local_a8, 2, &local_128);
      if (Variant::needs_deinit[(int)local_98] != '\0') {
         Variant::_clear_internal();
      }

      if (local_128 == 0) {
         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00104554;
      }

      if (Variant::needs_deinit[local_60[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[600] == (StyleBox)0x0 )) {
      local_128 = 0;
      uStack_124 = 0;
      local_118 = (undefined1[16])0x0;
      uStack_120 = 0;
      uStack_11c = 0;
      local_108 = 0;
      local_100 = 0;
      local_f8 = 6;
      local_f0 = 1;
      local_e8[0] = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_c0 = 0;
      String::parse_latin1((String*)&local_128, "_draw");
      local_f0 = CONCAT44(local_f0._4_4_, 0x8c);
      GetTypeInfo<RID,void>::get_class_info((GetTypeInfo<RID,void>*)&local_158);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_e8, (PropertyInfo*)&local_158);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
      Vector<int>::push_back(local_c8, 0);
      GetTypeInfo<Rect2,void>::get_class_info((GetTypeInfo<Rect2,void>*)&local_158);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_e8, (PropertyInfo*)&local_158);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
      Vector<int>::push_back(local_c8, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar3 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x260 ) = 0;
      pcVar5 = *(code**)( lVar3 + 0xd8 );
      if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xd0 ) ),pcVar5 == (code*)0x0) {
         local_168 = 0;
         String::parse_latin1((String*)&local_168, "StyleBox");
         StringName::StringName((StringName*)&local_160, (String*)&local_168, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_158, (StringName*)&local_160);
         if (local_150[0] == 0) {
            lVar3 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_150);
            if (StringName::configured != '\0') goto LAB_00104988;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
            LAB_001049a5:lVar3 = *(long*)( this + 8 );
            pcVar5 = *(code**)( lVar3 + 200 );
            if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_001048c5;
            uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x250);
            *(undefined8*)( this + 0x260 ) = uVar2;
         }
 else {
            lVar3 = *(long*)( local_150[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_150);
            if (StringName::configured != '\0') {
               LAB_00104988:if (local_160 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
            if (lVar3 == 0) goto LAB_001049a5;
         }

         lVar3 = *(long*)( this + 8 );
      }
 else {
         uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x250, uVar1);
         *(undefined8*)( this + 0x260 ) = uVar2;
         lVar3 = *(long*)( this + 8 );
      }

      LAB_001048c5:if (*(char*)( lVar3 + 0x29 ) != '\0') {
         plVar4 = (long*)operator_new(0x18, "");
         *plVar4 = (long)( this + 0x260 );
         plVar4[1] = (long)( this + 600 );
         plVar4[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar4;
      }

      this[600] = (StyleBox)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_128);
   }

   pcVar5 = *(code**)( this + 0x260 );
   if (pcVar5 == (code*)0x0) {
      if (_gdvirtual__draw_call(RID, Rect2) != '\0') {
         local_158 = 0;
         local_128 = 0x108e10;
         uStack_124 = 0;
         uStack_120 = 0x23;
         uStack_11c = 0;
         String::parse_latin1((StrRange*)&local_158);
         local_168 = 0;
         local_128 = 0x10500c;
         uStack_124 = 0;
         uStack_120 = 5;
         uStack_11c = 0;
         String::parse_latin1((StrRange*)&local_168);
         local_128 = 0x10805f;
         uStack_124 = 0;
         local_178 = 0;
         uStack_120 = 2;
         uStack_11c = 0;
         String::parse_latin1((StrRange*)&local_178);
         ( **(code**)( *(long*)this + 0x48 ) )(local_188, this);
         operator+((char *)
         local_180,(String*)"Required virtual method ";
         String::operator +(local_170, (String*)local_180);
         String::operator +((String*)&local_160, local_170);
         String::operator +((String*)&local_128, (String*)&local_160);
         _err_print_error("_gdvirtual__draw_call", "scene/resources/style_box.h", 0x32, (String*)&local_128, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_170);
         CowData<char32_t>::_unref(local_180);
         CowData<char32_t>::_unref(local_188);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
         _gdvirtual__draw_call(RID,Rect2)::first_print =
         '\0';
      }

   }
 else {
      local_78 = &local_128;
      local_128 = (int)local_190;
      uStack_124 = ( undefined4 )((ulong)local_190 >> 0x20);
      puStack_70 = &local_98;
      local_98 = local_b8;
      uStack_90 = uStack_b0;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar5 )(*(undefined8*)( this + 0x10 ), &local_78, 0);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x250, pcVar5, &local_78, 0);
      }

   }

   LAB_00104554:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
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
/* StyleBox::is_class_ptr(void*) const */uint StyleBox::is_class_ptr(StyleBox *this, void *param_1) {
   return (uint)CONCAT71(0x10de, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10de, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10de, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10de, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* StyleBox::_getv(StringName const&, Variant&) const */undefined8 StyleBox::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* StyleBox::_setv(StringName const&, Variant const&) */undefined8 StyleBox::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* StyleBox::_validate_propertyv(PropertyInfo&) const */void StyleBox::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* StyleBox::_property_can_revertv(StringName const&) const */undefined8 StyleBox::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* StyleBox::_property_get_revertv(StringName const&, Variant&) const */undefined8 StyleBox::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* StyleBox::_notificationv(int, bool) */void StyleBox::_notificationv(int param_1, bool param_2) {
   return;
}
/* StyleBox::get_style_margin(Side) const */undefined8 StyleBox::get_style_margin(void) {
   return 0;
}
/* MethodBindTRC<bool, Vector2 const&, Rect2 const&>::_gen_argument_type(int) const */int MethodBindTRC<bool,Vector2_const&,Rect2_const&>::_gen_argument_type(MethodBindTRC<bool,Vector2_const&,Rect2_const&> *this, int param_1) {
   int iVar1;
   iVar1 = 1;
   if ((uint)param_1 < 2) {
      iVar1 = ( -(uint)(param_1 == 0) & 0xfffffffe ) + 7;
   }

   return iVar1;
}
/* MethodBindTRC<bool, Vector2 const&, Rect2 const&>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool,Vector2_const&,Rect2_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<CanvasItem*>::_gen_argument_type(int) const */undefined8 MethodBindTRC<CanvasItem*>::_gen_argument_type(int param_1) {
   return 0x18;
}
/* MethodBindTRC<CanvasItem*>::get_argument_meta(int) const */undefined8 MethodBindTRC<CanvasItem*>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTC<RID, Rect2 const&>::_gen_argument_type(int) const */char MethodBindTC<RID,Rect2_const&>::_gen_argument_type(MethodBindTC<RID,Rect2_const&> *this, int param_1) {
   char cVar1;
   cVar1 = '\0';
   if ((uint)param_1 < 2) {
      cVar1 = ( -(param_1 == 0) & 0x10U ) + 7;
   }

   return cVar1;
}
/* MethodBindTC<RID, Rect2 const&>::get_argument_meta(int) const */undefined8 MethodBindTC<RID,Rect2_const&>::get_argument_meta(int param_1) {
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
/* MethodBindTRC<Vector2>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Vector2>::_gen_argument_type(int param_1) {
   return 5;
}
/* MethodBindTRC<Vector2>::get_argument_meta(int) const */undefined8 MethodBindTRC<Vector2>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Side, float>::~MethodBindT() */void MethodBindT<Side,float>::~MethodBindT(MethodBindT<Side,float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010dbf0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Side, float>::~MethodBindT() */void MethodBindT<Side,float>::~MethodBindT(MethodBindT<Side,float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010dbf0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<float>::~MethodBindT() */void MethodBindT<float>::~MethodBindT(MethodBindT<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010dc50;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<float>::~MethodBindT() */void MethodBindT<float>::~MethodBindT(MethodBindT<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010dc50;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<float, Side>::~MethodBindTRC() */void MethodBindTRC<float,Side>::~MethodBindTRC(MethodBindTRC<float,Side> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010dcb0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<float, Side>::~MethodBindTRC() */void MethodBindTRC<float,Side>::~MethodBindTRC(MethodBindTRC<float,Side> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010dcb0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Vector2>::~MethodBindTRC() */void MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010db90;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Vector2>::~MethodBindTRC() */void MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010db90;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTC<RID, Rect2 const&>::~MethodBindTC() */void MethodBindTC<RID,Rect2_const&>::~MethodBindTC(MethodBindTC<RID,Rect2_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010dd10;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTC<RID, Rect2 const&>::~MethodBindTC() */void MethodBindTC<RID,Rect2_const&>::~MethodBindTC(MethodBindTC<RID,Rect2_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010dd10;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<CanvasItem*>::~MethodBindTRC() */void MethodBindTRC<CanvasItem*>::~MethodBindTRC(MethodBindTRC<CanvasItem*> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010dd70;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<CanvasItem*>::~MethodBindTRC() */void MethodBindTRC<CanvasItem*>::~MethodBindTRC(MethodBindTRC<CanvasItem*> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010dd70;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool, Vector2 const&, Rect2 const&>::~MethodBindTRC() */void MethodBindTRC<bool,Vector2_const&,Rect2_const&>::~MethodBindTRC(MethodBindTRC<bool,Vector2_const&,Rect2_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010ddd0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool, Vector2 const&, Rect2 const&>::~MethodBindTRC() */void MethodBindTRC<bool,Vector2_const&,Rect2_const&>::~MethodBindTRC(MethodBindTRC<bool,Vector2_const&,Rect2_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010ddd0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* StyleBox::~StyleBox() */void StyleBox::~StyleBox(StyleBox *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_0010d990;
   if (bVar1) {
      if (*(long*)( this + 0x298 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104f5e;
      }

      if (*(long*)( this + 0x280 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104f5e;
      }

      if (*(long*)( this + 0x268 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104f5e;
      }

      if (*(long*)( this + 0x250 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00104f5e:Resource::~Resource((Resource*)this);
   return;
}
/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<int>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<String>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* StyleBox::_bind_methods() [clone .cold] */void StyleBox::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* StyleBox::~StyleBox() */void StyleBox::~StyleBox(StyleBox *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_0010d990;
   if (bVar1) {
      if (*(long*)( this + 0x298 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001052ee;
      }

      if (*(long*)( this + 0x280 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001052ee;
      }

      if (*(long*)( this + 0x268 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001052ee;
      }

      if (*(long*)( this + 0x250 ) != 0) {
         StringName::unref();
      }

   }

   LAB_001052ee:Resource::~Resource((Resource*)this);
   operator_delete(this, 0x2b0);
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
/* StyleBox::_get_class_namev() const */undefined8 *StyleBox::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00105413:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00105413;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "StyleBox");
         goto LAB_0010547e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "StyleBox");
   LAB_0010547e:return &_get_class_namev();
}
/* StyleBox::get_class() const */void StyleBox::get_class(void) {
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
/* MethodBindTRC<CanvasItem*>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<CanvasItem*>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   bool bVar4;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_30 = 10;
   local_38 = "CanvasItem";
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   *puVar3 = 0x18;
   *(undefined8*)( puVar3 + 2 ) = 0;
   StringName::StringName((StringName*)( puVar3 + 4 ), (StringName*)&local_38);
   bVar4 = StringName::configured != '\0';
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   puVar3[10] = 6;
   if (( bVar4 ) && ( local_38 != (char*)0x0 )) {
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
   local_48 = &_LC4;
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
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( puVar3 + 8 ), false);
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

         goto joined_r0x001057dc;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x001057dc:local_58 = lVar2;
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
/* String::parse_latin1(char const*) */void String::parse_latin1(String *this, char *param_1) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != (char*)0x0) {
      strlen(param_1);
   }

   String::parse_latin1((StrRange*)this);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
/* GetTypeInfo<bool, void>::get_class_info() */GetTypeInfo<bool,void> * __thiscall
GetTypeInfo<bool,void>::get_class_info(GetTypeInfo<bool,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC4;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 1;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_58);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) == 0x11) {
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( this + 0x20 ), false);
         if (*(undefined**)( this + 0x10 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x00105a3c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00105a3c:local_58 = lVar2;
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
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<Vector2, void>::get_class_info() */GetTypeInfo<Vector2,void> * __thiscall
GetTypeInfo<Vector2,void>::get_class_info(GetTypeInfo<Vector2,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC4;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 5;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_58);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) == 0x11) {
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( this + 0x20 ), false);
         if (*(undefined**)( this + 0x10 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x00105bbc;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00105bbc:local_58 = lVar2;
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
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<Rect2, void>::get_class_info() */GetTypeInfo<Rect2,void> * __thiscall
GetTypeInfo<Rect2,void>::get_class_info(GetTypeInfo<Rect2,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC4;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 7;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_58);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) == 0x11) {
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( this + 0x20 ), false);
         if (*(undefined**)( this + 0x10 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x00105d3c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00105d3c:local_58 = lVar2;
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
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<RID, void>::get_class_info() */GetTypeInfo<RID,void> * __thiscall
GetTypeInfo<RID,void>::get_class_info(GetTypeInfo<RID,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC4;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 0x17;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_58);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) == 0x11) {
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( this + 0x20 ), false);
         if (*(undefined**)( this + 0x10 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x00105ebc;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00105ebc:local_58 = lVar2;
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
      return this;
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
                  if (lVar5 == 0) goto LAB_00105f7f;
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

      LAB_00105f7f:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00106033;
   }

   cVar6 = String::operator ==((String*)param_1, "RefCounted");
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
                     if (lVar5 == 0) goto LAB_001060e3;
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

         LAB_001060e3:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00106033;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==((String*)param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_00106033:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

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
                  if (lVar5 == 0) goto LAB_0010620f;
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

      LAB_0010620f:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
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

      if (cVar6 != '\0') goto LAB_001062c3;
   }

   cVar6 = String::operator ==((String*)param_1, "StyleBox");
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
                     if (lVar5 == 0) goto LAB_00106383;
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

         LAB_00106383:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
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

         if (cVar6 != '\0') goto LAB_001062c3;
      }

      cVar6 = String::operator ==((String*)param_1, "Resource");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
            return uVar7;
         }

         goto LAB_0010642c;
      }

   }

   LAB_001062c3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010642c:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
      LAB_001065a8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001065a8;
      StringName::StringName((StringName*)&local_80, (CowData<char32_t>*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x001065c6;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x001065c6:if (lVar2 == 0) {
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
      LAB_001069a8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001069a8;
      StringName::StringName((StringName*)&local_80, (CowData<char32_t>*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x001069c5;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x001069c5:if (lVar2 == 0) {
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
      LAB_00106df8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00106df8;
      StringName::StringName((StringName*)&local_80, (CowData<char32_t>*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00106e15;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00106e15:if (lVar2 == 0) {
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
/* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   long *plVar1;
   void *pvVar2;
   long lVar3;
   long lVar4;
   long *plVar5;
   plVar5 = *(long**)this;
   if (plVar5 == (long*)0x0) {
      return;
   }

   do {
      pvVar2 = (void*)*plVar5;
      if (pvVar2 == (void*)0x0) {
         if ((int)plVar5[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(long**)( (long)pvVar2 + 0x40 ) == plVar5) {
         lVar4 = *(long*)( (long)pvVar2 + 0x30 );
         lVar3 = *(long*)( (long)pvVar2 + 0x38 );
         *plVar5 = lVar4;
         if (pvVar2 == (void*)plVar5[1]) {
            plVar5[1] = lVar3;
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x30 ) = lVar4;
            lVar4 = *(long*)( (long)pvVar2 + 0x30 );
         }

         if (lVar4 != 0) {
            *(long*)( lVar4 + 0x38 ) = lVar3;
         }

         if (*(long*)( (long)pvVar2 + 0x20 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( (long)pvVar2 + 0x20 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar4 = *(long*)( (long)pvVar2 + 0x20 );
               *(undefined8*)( (long)pvVar2 + 0x20 ) = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar2 + 0x10 ) != 0 )) {
            StringName::unref();
         }

         if (*(long*)( (long)pvVar2 + 8 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( (long)pvVar2 + 8 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar4 = *(long*)( (long)pvVar2 + 8 );
               *(undefined8*)( (long)pvVar2 + 8 ) = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         Memory::free_static(pvVar2, false);
         *(int*)( plVar5 + 2 ) = (int)plVar5[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar5 = *(long**)this;
   }
 while ( (int)plVar5[2] != 0 );
   Memory::free_static(plVar5, false);
   return;
}
/* MethodInfo::~MethodInfo() */void MethodInfo::~MethodInfo(MethodInfo *this) {
   long *plVar1;
   int *piVar2;
   long lVar3;
   code *pcVar4;
   int *piVar5;
   long lVar6;
   if (*(long*)( this + 0x68 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x68 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( this + 0x68 );
         *(undefined8*)( this + 0x68 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x50 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x50 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         piVar2 = *(int**)( this + 0x50 );
         if (piVar2 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar3 = *(long*)( piVar2 + -2 );
         *(undefined8*)( this + 0x50 ) = 0;
         if (lVar3 != 0) {
            lVar6 = 0;
            piVar5 = piVar2;
            do {
               if (Variant::needs_deinit[*piVar5] != '\0') {
                  Variant::_clear_internal();
               }

               lVar6 = lVar6 + 1;
               piVar5 = piVar5 + 6;
            }
 while ( lVar3 != lVar6 );
         }

         Memory::free_static(piVar2 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)( this + 0x40 ));
   if (*(long*)( this + 0x28 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x28 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( this + 0x28 );
         *(undefined8*)( this + 0x28 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x18 ) != 0 )) {
      StringName::unref();
   }

   if (*(long*)( this + 0x10 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x10 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( this + 0x10 );
         *(undefined8*)( this + 0x10 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
      }

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
   if (in_EDX != 0) goto LAB_001074f9;
   local_78 = 0;
   local_68 = &_LC4;
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
      LAB_001075f0:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_001075f0;
      StringName::StringName((StringName*)&local_70, (CowData<char32_t>*)&local_48, false);
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

   LAB_001074f9:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar7;
}
/* MethodBind* create_method_bind<StyleBox, Vector2>(Vector2 (StyleBox::*)() const) */MethodBind *create_method_bind<StyleBox,Vector2>(_func_Vector2 *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0010db90;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "StyleBox";
   local_30 = 8;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<StyleBox, Side, float>(void (StyleBox::*)(Side, float)) */MethodBind *create_method_bind<StyleBox,Side,float>(_func_void_Side_float *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0010dbf0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "StyleBox";
   local_30 = 8;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<StyleBox, float>(void (StyleBox::*)(float)) */MethodBind *create_method_bind<StyleBox,float>(_func_void_float *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0010dc50;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "StyleBox";
   local_30 = 8;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<StyleBox, float, Side>(float (StyleBox::*)(Side) const) */MethodBind *create_method_bind<StyleBox,float,Side>(_func_float_Side *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0010dcb0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "StyleBox";
   local_30 = 8;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<StyleBox, RID, Rect2 const&>(void (StyleBox::*)(RID, Rect2 const&)
   const) */MethodBind *create_method_bind<StyleBox,RID,Rect2_const&>(_func_void_RID_Rect2_ptr *param_1) {
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
   *(_func_void_RID_Rect2_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010dd10;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "StyleBox";
   local_30 = 8;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<StyleBox, CanvasItem*>(CanvasItem* (StyleBox::*)() const) */MethodBind *create_method_bind<StyleBox,CanvasItem*>(_func_CanvasItem_ptr *param_1) {
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
   *(_func_CanvasItem_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010dd70;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "StyleBox";
   local_30 = 8;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<StyleBox, bool, Vector2 const&, Rect2 const&>(bool
   (StyleBox::*)(Vector2 const&, Rect2 const&) const) */MethodBind *create_method_bind<StyleBox,bool,Vector2_const&,Rect2_const&>(_func_bool_Vector2_ptr_Rect2_ptr *param_1) {
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
   *(_func_bool_Vector2_ptr_Rect2_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010ddd0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "StyleBox";
   local_30 = 8;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* CowData<String>::_unref() */void CowData<String>::_unref(CowData<String> *this) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long *plVar6;
   long lVar7;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      plVar1 = *(long**)this;
      if (plVar1 != (long*)0x0) {
         lVar3 = plVar1[-1];
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar7 = 0;
            plVar6 = plVar1;
            do {
               if (*plVar6 != 0) {
                  LOCK();
                  plVar2 = (long*)( *plVar6 + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = *plVar6;
                     *plVar6 = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar3 != lVar7 );
         }

         Memory::free_static(plVar1 + -2, false);
         return;
      }

      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* MethodBindTRC<float, Side>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<float,Side>::_gen_argument_type_info(int param_1) {
   code *pcVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined8 uVar5;
   undefined8 uVar6;
   long lVar7;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar8;
   long lVar9;
   long in_FS_OFFSET;
   undefined8 local_d8;
   undefined8 local_d0;
   Vector local_c8[8];
   undefined8 local_c0;
   long local_b8;
   long local_b0;
   long local_a8;
   undefined1 local_a0[16];
   undefined8 local_90;
   long local_88;
   undefined4 local_80;
   undefined *local_78;
   undefined1 local_70[16];
   undefined8 local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   puVar8 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a8 = 0;
   if (in_EDX == 0) {
      local_90 = 0;
      local_a0._0_8_ = 0;
      local_a0._8_8_ = 0;
      local_88 = 0;
      local_78 = &_LC29;
      local_80 = 6;
      local_d0 = 0;
      local_70._0_8_ = 4;
      String::parse_latin1((StrRange*)&local_d0);
      String::split((char*)&local_b8, SUB81((StrRange*)&local_d0, 0), 0x10805f);
      if (( local_b0 == 0 ) || ( *(long*)( local_b0 + -8 ) < 3 )) {
         local_c0 = 0;
         local_78 = &_LC31;
         local_70._0_8_ = 1;
         String::parse_latin1((StrRange*)&local_c0);
         String::join(local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
      }
 else {
         local_c0 = 0;
         String::parse_latin1((String*)&local_c0, ".");
         if (local_b0 == 0) {
            lVar7 = -2;
            lVar9 = 0;
            LAB_001084f1:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar9, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar1 = (code*)invalidInstructionException();
            ( *pcVar1 )();
         }

         lVar9 = *(long*)( local_b0 + -8 );
         lVar7 = lVar9 + -2;
         if (lVar7 < 0) goto LAB_001084f1;
         String::operator +((String*)&local_78, (String*)( local_b0 + lVar7 * 8 ));
         String::operator +((String*)local_c8, (String*)&local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
      }

      CowData<String>::_unref((CowData<String>*)&local_b0);
      StringName::StringName((StringName*)&local_b8, (CowData<char32_t>*)local_c8, false);
      local_70 = (undefined1[16])0x0;
      local_c0 = 0;
      local_d8 = 0;
      local_78 = (undefined*)0x2;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0x10006;
      StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
      if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
      local_a8 = CONCAT44(local_a8._4_4_, local_78._0_4_);
      if (local_a0._0_8_ != local_70._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
         local_a0._0_8_ = local_70._0_8_;
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_70._8_8_;
         local_70 = auVar2 << 0x40;
      }

      if (local_a0._8_8_ != local_70._8_8_) {
         StringName::unref();
         local_a0._8_8_ = local_70._8_8_;
         local_70._8_8_ = 0;
      }

      local_90 = CONCAT44(local_90._4_4_, (undefined4)local_60);
      if (local_88 != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         local_88 = local_58;
         local_58 = 0;
      }

      local_80 = local_50;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
      uVar6 = local_a0._8_8_;
      uVar5 = local_a0._0_8_;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_a0._8_8_;
      local_a0 = auVar4 << 0x40;
      *puVar8 = (undefined4)local_a8;
      *(undefined8*)( puVar8 + 2 ) = uVar5;
      *(undefined8*)( puVar8 + 4 ) = uVar6;
      puVar8[6] = (undefined4)local_90;
      *(long*)( puVar8 + 8 ) = local_88;
      puVar8[10] = local_80;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
      goto LAB_00108422;
   }

   local_b8 = 0;
   auVar3._8_8_ = 0;
   auVar3._0_8_ = local_70._0_8_;
   local_70 = auVar3 << 0x40;
   local_78 = &_LC4;
   String::parse_latin1((StrRange*)&local_b8);
   local_c0 = 0;
   *puVar8 = 3;
   puVar8[6] = 0;
   *(undefined8*)( puVar8 + 8 ) = 0;
   *(undefined1(*) [16])( puVar8 + 2 ) = (undefined1[16])0x0;
   if (local_b8 == 0) {
      puVar8[10] = 6;
      LAB_001083e7:StringName::operator =((StringName*)( puVar8 + 4 ), (StringName*)&local_a8);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar8 + 8 ), (CowData*)&local_b8);
      puVar8[10] = 6;
      if (puVar8[6] != 0x11) goto LAB_001083e7;
      StringName::StringName((StringName*)&local_78, (CowData<char32_t>*)( puVar8 + 8 ), false);
      if (*(undefined**)( puVar8 + 4 ) == local_78) {
         if (( StringName::configured != '\0' ) && ( local_78 != (undefined*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar8 + 4 ) = local_78;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
      StringName::unref();
   }

   LAB_00108422:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Side, float>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Side,float>::_gen_argument_type_info(int param_1) {
   code *pcVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined8 uVar4;
   long lVar5;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar6;
   long lVar7;
   long in_FS_OFFSET;
   undefined8 local_a8;
   undefined8 local_a0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   undefined *local_78;
   undefined1 local_70[16];
   ulong local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   puVar6 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar6 = 0;
   puVar6[6] = 0;
   *(undefined8*)( puVar6 + 8 ) = 0;
   puVar6[10] = 6;
   *(undefined1(*) [16])( puVar6 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_a0 = 0;
      local_78 = &_LC29;
      local_70._0_8_ = 4;
      String::parse_latin1((StrRange*)&local_a0);
      String::split((char*)&local_88, SUB81((StrRange*)&local_a0, 0), 0x10805f);
      if (( local_80 == 0 ) || ( *(long*)( local_80 + -8 ) < 3 )) {
         local_90 = 0;
         local_78 = &_LC31;
         local_70._0_8_ = 1;
         String::parse_latin1((StrRange*)&local_90);
         String::join((Vector*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      }
 else {
         local_90 = 0;
         local_78 = &_LC31;
         local_70._0_8_ = 1;
         String::parse_latin1((StrRange*)&local_90);
         if (local_80 == 0) {
            lVar5 = -2;
            lVar7 = 0;
            LAB_0010899d:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar5, lVar7, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar1 = (code*)invalidInstructionException();
            ( *pcVar1 )();
         }

         lVar7 = *(long*)( local_80 + -8 );
         lVar5 = lVar7 + -2;
         if (lVar5 < 0) goto LAB_0010899d;
         String::operator +((String*)&local_78, (String*)( local_80 + lVar5 * 8 ));
         String::operator +((String*)&local_98, (String*)&local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      }

      CowData<String>::_unref((CowData<String>*)&local_80);
      StringName::StringName((StringName*)&local_88, (CowData<char32_t>*)&local_98, false);
      local_70 = (undefined1[16])0x0;
      local_90 = 0;
      local_a8 = 0;
      local_78 = (undefined*)0x2;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0x10006;
      StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   }
 else {
      if (in_EDX != 1) goto LAB_0010859d;
      local_90 = 0;
      local_98 = 0;
      local_78 = &_LC4;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_70._8_8_;
      local_70 = auVar3 << 0x40;
      String::parse_latin1((StrRange*)&local_98);
      local_a0 = 0;
      local_78 = (undefined*)CONCAT44(local_78._4_4_, 3);
      local_60 = local_60 & 0xffffffff00000000;
      local_58 = 0;
      local_70 = (undefined1[16])0x0;
      if (local_98 == 0) {
         LAB_00108898:local_50 = 6;
         StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_90);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_98);
         local_50 = 6;
         if ((int)local_60 != 0x11) goto LAB_00108898;
         StringName::StringName((StringName*)&local_88, (CowData<char32_t>*)&local_58, false);
         if (local_70._8_8_ == local_88) {
            if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_70._8_8_ = local_88;
         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      if (( StringName::configured != '\0' ) && ( local_90 != 0 )) {
         StringName::unref();
      }

   }

   *puVar6 = local_78._0_4_;
   if (*(long*)( puVar6 + 2 ) != local_70._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar6 + 2 ));
      uVar4 = local_70._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_70._8_8_;
      local_70 = auVar2 << 0x40;
      *(undefined8*)( puVar6 + 2 ) = uVar4;
   }

   if (*(long*)( puVar6 + 4 ) != local_70._8_8_) {
      StringName::unref();
      uVar4 = local_70._8_8_;
      local_70._8_8_ = 0;
      *(undefined8*)( puVar6 + 4 ) = uVar4;
   }

   puVar6[6] = (int)local_60;
   if (*(long*)( puVar6 + 8 ) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar6 + 8 ));
      lVar7 = local_58;
      local_58 = 0;
      *(long*)( puVar6 + 8 ) = lVar7;
   }

   puVar6[10] = local_50;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   LAB_0010859d:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar6;
}
/* CowData<String>::_realloc(long) */undefined8 CowData<String>::_realloc(CowData<String> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<String>::resize<false>(long) */undefined8 CowData<String>::resize<false>(CowData<String> *this, long param_1) {
   long *plVar1;
   long *plVar2;
   code *pcVar3;
   undefined8 uVar4;
   undefined8 *puVar5;
   long lVar6;
   long lVar7;
   ulong uVar8;
   undefined8 *puVar9;
   long lVar10;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar6 = 0;
      lVar7 = 0;
   }
 else {
      lVar6 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar6) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar7 = lVar6 * 8;
      if (lVar7 != 0) {
         uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
         uVar8 = uVar8 | uVar8 >> 2;
         uVar8 = uVar8 | uVar8 >> 4;
         uVar8 = uVar8 | uVar8 >> 8;
         uVar8 = uVar8 | uVar8 >> 0x10;
         lVar7 = ( uVar8 | uVar8 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 == 0) {
      LAB_00108d80:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar8 = param_1 * 8 - 1;
   uVar8 = uVar8 >> 1 | uVar8;
   uVar8 = uVar8 | uVar8 >> 2;
   uVar8 = uVar8 | uVar8 >> 4;
   uVar8 = uVar8 | uVar8 >> 8;
   uVar8 = uVar8 | uVar8 >> 0x10;
   uVar8 = uVar8 | uVar8 >> 0x20;
   lVar10 = uVar8 + 1;
   if (lVar10 == 0) goto LAB_00108d80;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_00108c59:if (lVar10 != lVar7) {
               uVar4 = _realloc(this, lVar10);
               if ((int)uVar4 != 0) {
                  return uVar4;
               }

               lVar6 = *(long*)this;
               if (lVar6 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

            }

            *(long*)( lVar6 + -8 ) = param_1;
            return 0;
         }

         while (true) {
            plVar2 = (long*)( lVar6 + uVar8 * 8 );
            if (*plVar2 != 0) break;
            uVar8 = uVar8 + 1;
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_00108c59;
         }
;
         LOCK();
         plVar1 = (long*)( *plVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar6 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

         uVar8 = uVar8 + 1;
         lVar6 = *(long*)this;
      }
;
      goto LAB_00108dd6;
   }

   if (lVar10 == lVar7) {
      LAB_00108cff:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_00108dd6:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_00108cea;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_00108cff;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar8 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar9 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar9;
      lVar6 = 0;
   }

   memset(puVar9 + lVar6, 0, ( param_1 - lVar6 ) * 8);
   LAB_00108cea:puVar9[-1] = param_1;
   return 0;
}
/* CowData<unsigned int>::_unref() */void CowData<unsigned_int>::_unref(CowData<unsigned_int> *this) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<int>::resize<false>(long) */undefined8 CowData<int>::resize<false>(CowData<int> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   long lVar8;
   long lVar9;
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
      lVar9 = 0;
      lVar3 = 0;
   }
 else {
      lVar9 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar9) {
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
      lVar3 = lVar9 * 4;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 4 == 0) {
      LAB_00109100:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 4 - 1;
   uVar4 = uVar4 | uVar4 >> 1;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar8 = uVar4 + 1;
   if (lVar8 == 0) goto LAB_00109100;
   if (lVar9 < param_1) {
      if (lVar8 != lVar3) {
         if (lVar9 == 0) {
            puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
            if (puVar5 == (undefined8*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               return 6;
            }

            puVar7 = puVar5 + 2;
            *puVar5 = 1;
            puVar5[1] = 0;
            *(undefined8**)this = puVar7;
            goto LAB_00109011;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_00109011:puVar7[-1] = param_1;
         return 0;
      }

   }
 else {
      if (( lVar8 != lVar3 ) && ( uVar6 = _realloc(this, lVar8) ),(int)uVar6 != 0) {
         return uVar6;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return 0;
      }

   }

   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* StyleBox::_initialize_classv() */void StyleBox::_initialize_classv(void) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (Resource::initialize_class() == '\0') {
         if (RefCounted::initialize_class() == '\0') {
            Object::initialize_class();
            local_68 = 0;
            local_50 = 6;
            local_58 = "Object";
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (StrRange*)&local_68, false);
            local_58 = "RefCounted";
            local_70 = 0;
            local_50 = 10;
            String::parse_latin1((StrRange*)&local_70);
            StringName::StringName((StringName*)&local_58, (StrRange*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            if ((code*)PTR__bind_methods_00111008 != RefCounted::_bind_methods) {
               RefCounted::_bind_methods();
            }

            RefCounted::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "RefCounted";
         local_68 = 0;
         local_50 = 10;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (StrRange*)&local_68, false);
         local_58 = "Resource";
         local_70 = 0;
         local_50 = 8;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (StrRange*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         if ((code*)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
            Resource::_bind_methods();
         }

         Resource::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "Resource";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (StrRange*)&local_68, false);
      local_58 = "StyleBox";
      local_70 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (StrRange*)&local_70, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
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

      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      lVar2 = local_68;
      if (local_68 != 0) {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      _bind_methods();
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Removing unreachable block (ram,0x00109668) *//* WARNING: Removing unreachable block (ram,0x001097fd) *//* WARNING: Removing unreachable block (ram,0x00109809) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
/* MethodBindTRC<bool, Vector2 const&, Rect2 const&>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindTRC<bool,Vector2_const&,Rect2_const&>::validated_call(MethodBindTRC<bool,Vector2_const&,Rect2_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Variant VVar1;
   code *pcVar2;
   long *plVar3;
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

         goto LAB_00109997;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   VVar1 = ( Variant )(*pcVar2)(param_1 + *(long*)( this + 0x60 ), *param_2 + 8, param_2[1] + 8);
   param_3[8] = VVar1;
   LAB_00109997:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool, Vector2 const&, Rect2 const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<bool,Vector2_const&,Rect2_const&>::ptrcall(MethodBindTRC<bool,Vector2_const&,Rect2_const&> *this, Object *param_1, void **param_2, void *param_3) {
   undefined1 uVar1;
   code *pcVar2;
   long *plVar3;
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
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00109b5b;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), *param_2, param_2[1]);
   *(undefined1*)param_3 = uVar1;
   LAB_00109b5b:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<CanvasItem*>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<CanvasItem*>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   char *pcVar3;
   Object *pOVar4;
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
         _err_print_error(&_LC84, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
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

         goto LAB_00109e40;
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

         pOVar4 = (Object*)( *(code*)pVVar5 )();
         Variant::Variant((Variant*)local_48, pOVar4);
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

   LAB_00109e40:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTC<RID, Rect2 const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTC<RID,Rect2_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x1b4, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0010a21f;
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
      /* WARNING: Could not recover jumptable at 0x0010a0ca. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined8*)( *(long*)param_3 + 8 ), *(long*)( param_3 + 8 ) + 8);
      return;
   }

   LAB_0010a21f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTC<RID, Rect2 const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTC<RID,Rect2_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x1bf, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0010a409;
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
      /* WARNING: Could not recover jumptable at 0x0010a293. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3, *(undefined8*)( (long)param_3 + 8 ));
      return;
   }

   LAB_0010a409:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<float, Side>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<float,Side>::validated_call(MethodBindTRC<float,Side> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   float fVar3;
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
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010a45e;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   fVar3 = (float)( *pcVar1 )(param_1 + *(long*)( this + 0x60 ), *(undefined4*)( *param_2 + 8 ));
   *(double*)( param_3 + 8 ) = (double)fVar3;
   LAB_0010a45e:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<float, Side>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<float,Side>::ptrcall(MethodBindTRC<float,Side> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   float fVar3;
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
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010a63c;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   fVar3 = (float)( *pcVar1 )(param_1 + *(long*)( this + 0x60 ), **param_2);
   *(double*)param_3 = (double)fVar3;
   LAB_0010a63c:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<float>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<float>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   undefined1 auVar2[16];
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

         goto LAB_0010a9a9;
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
      auVar2._4_12_ = SUB1612((undefined1[16])0x0, 4);
      auVar2._0_4_ = (float)*(double*)( *(long*)param_3 + 8 );
      /* WARNING: Could not recover jumptable at 0x0010a832. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_0010a9a9:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<float>::ptrcall(Object*, void const**, void*) const */void MethodBindT<float>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   undefined1 auVar2[16];
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

         goto LAB_0010ab89;
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
      auVar2._4_12_ = SUB1612((undefined1[16])0x0, 4);
      auVar2._0_4_ = (float)**param_3;
      /* WARNING: Could not recover jumptable at 0x0010aa11. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_0010ab89:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Side, float>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Side,float>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   undefined1 auVar2[16];
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

         goto LAB_0010ad71;
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
      auVar2._4_12_ = SUB1612((undefined1[16])0x0, 4);
      auVar2._0_4_ = (float)*(double*)( *(long*)( param_3 + 8 ) + 8 );
      /* WARNING: Could not recover jumptable at 0x0010abf9. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_0010ad71:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Side, float>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Side,float>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   undefined1 auVar2[16];
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

         goto LAB_0010af61;
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
      auVar2._4_12_ = SUB1612((undefined1[16])0x0, 4);
      auVar2._0_4_ = (float)**(double**)( (long)param_3 + 8 );
      /* WARNING: Could not recover jumptable at 0x0010ade7. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_0010af61:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
         _err_print_error(&_LC84, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
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

         goto LAB_0010b040;
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

   LAB_0010b040:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector2>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Vector2>::validated_call(MethodBindTRC<Vector2> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_0010b2a4;
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
   LAB_0010b2a4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector2>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Vector2>::ptrcall(MethodBindTRC<Vector2> *this, Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_0010b453;
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
   LAB_0010b453:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<CanvasItem*>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<CanvasItem*>::validated_call(MethodBindTRC<CanvasItem*> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
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

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0010b77f;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ));
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      Variant::ObjData::ref_pointer((Object*)( param_3 + 8 ));
      return;
   }

   LAB_0010b77f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<CanvasItem*>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<CanvasItem*>::ptrcall(MethodBindTRC<CanvasItem*> *this, Object *param_1, void **param_2, void *param_3) {
   undefined8 uVar1;
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

         goto LAB_0010b7d1;
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
   *(undefined8*)param_3 = uVar1;
   LAB_0010b7d1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool, Vector2 const&, Rect2 const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<bool,Vector2_const&,Rect2_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   bool bVar6;
   int iVar7;
   undefined4 uVar8;
   long *plVar9;
   long lVar10;
   undefined4 in_register_00000014;
   long *plVar11;
   Variant *this;
   int iVar12;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar13;
   Variant *pVVar14;
   long in_FS_OFFSET;
   long local_98;
   undefined8 local_90;
   char *local_88;
   undefined8 local_80;
   undefined8 local_70;
   undefined8 local_68[2];
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_88, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar9 = (long*)plVar11[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }

      }
 else {
         plVar9 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_88 == (char*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_90 = 0;
         local_80 = 0x35;
         String::parse_latin1((StrRange*)&local_90);
         vformat<StringName>((StringName*)&local_88, (StrRange*)&local_90, &local_98);
         _err_print_error(&_LC84, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_88, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010bac1;
      }

      if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 3) {
      pVVar14 = param_2[5];
      iVar7 = 2 - in_R8D;
      if (pVVar14 == (Variant*)0x0) {
         if (iVar7 != 0) goto LAB_0010bb08;
         this * (Variant**)param_4;
         LAB_0010bb1d:pVVar14 = *(Variant**)( param_4 + 8 );
      }
 else {
         lVar2 = *(long*)( pVVar14 + -8 );
         iVar12 = (int)lVar2;
         if (iVar12 < iVar7) {
            LAB_0010bb08:uVar8 = 4;
            goto LAB_0010baf5;
         }

         if (in_R8D == 0) {
            lVar10 = (long)( iVar12 + -2 );
            if (lVar2 <= lVar10) goto LAB_0010bbe0;
            this =
            pVVar14 + lVar10 * 0x18;
         }
 else {
            this * (Variant**)param_4;
            if (in_R8D == 2) goto LAB_0010bb1d;
         }

         lVar10 = (long)(int)( ( in_R8D ^ 1 ) + ( iVar12 - iVar7 ) );
         if (lVar2 <= lVar10) {
            LAB_0010bbe0:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar14 = pVVar14 + lVar10 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar13 & 1 ) != 0) {
         pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar14, 7);
      uVar4 = _LC85;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      local_68[0] = Variant::operator_cast_to_Rect2(pVVar14);
      cVar5 = Variant::can_convert_strict(*(undefined4*)this, 5);
      uVar4 = _LC86;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      local_70 = Variant::operator_cast_to_Vector2(this);
      bVar6 = (bool)( *(code*)pVVar13 )((Variant*)( (long)plVar11 + (long)pVVar1 ), &local_70, local_68);
      Variant::Variant((Variant*)local_58, bVar6);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
   }
 else {
      uVar8 = 3;
      LAB_0010baf5:*in_R9 = uVar8;
      in_R9[2] = 2;
   }

   LAB_0010bac1:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
   undefined8 local_60;
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
         _err_print_error(&_LC84, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010be58;
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
         if (in_R8D != 1) goto LAB_0010bea0;
         LAB_0010be90:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0010bea0:uVar6 = 4;
            goto LAB_0010be4d;
         }

         if (in_R8D == 1) goto LAB_0010be90;
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
      uVar4 = _LC88;
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
      LAB_0010be4d:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_0010be58:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* void call_with_variant_argsc_dv<__UnexistingClass, RID, Rect2 const&>(__UnexistingClass*, void
   (__UnexistingClass::*)(RID, Rect2 const&) const, Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */void call_with_variant_argsc_dv<__UnexistingClass,RID,Rect2_const&>(__UnexistingClass *param_1, _func_void_RID_Rect2_ptr *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   undefined8 uVar5;
   char cVar6;
   int iVar7;
   undefined4 uVar8;
   Rect2 *pRVar9;
   undefined4 in_register_0000000c;
   long *plVar10;
   long lVar11;
   Variant *this;
   uint uVar12;
   int iVar13;
   Variant *this_00;
   long in_FS_OFFSET;
   long in_stack_00000008;
   plVar10 = (long*)CONCAT44(in_register_0000000c, param_4);
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar12 = (uint)param_5;
   if (uVar12 < 3) {
      lVar2 = *(long*)( in_stack_00000008 + 8 );
      iVar7 = 2 - uVar12;
      if (lVar2 == 0) {
         if (iVar7 != 0) goto LAB_0010c1e0;
         this(Variant * ) * plVar10;
         LAB_0010c22d:this_00 = (Variant*)plVar10[1];
      }
 else {
         lVar3 = *(long*)( lVar2 + -8 );
         iVar13 = (int)lVar3;
         if (iVar13 < iVar7) {
            LAB_0010c1e0:uVar8 = 4;
            goto LAB_0010c1e5;
         }

         if (uVar12 == 0) {
            lVar11 = (long)( iVar13 + -2 );
            if (lVar3 <= lVar11) goto LAB_0010c248;
            this(Variant * )(lVar2 + lVar11 * 0x18);
         }
 else {
            this(Variant * ) * plVar10;
            if (uVar12 == 2) goto LAB_0010c22d;
         }

         lVar11 = (long)(int)( ( uVar12 ^ 1 ) + ( iVar13 - iVar7 ) );
         if (lVar3 <= lVar11) {
            LAB_0010c248:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar11, lVar3, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         this_00 = (Variant*)( lVar2 + lVar11 * 0x18 );
      }

      *(undefined4*)param_6 = 0;
      if (( (ulong)param_2 & 1 ) != 0) {
         param_2 = *(_func_void_RID_Rect2_ptr**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
      }

      cVar6 = Variant::can_convert_strict(*(undefined4*)this_00, 7);
      uVar5 = _LC85;
      if (cVar6 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar5;
      }

      Variant::operator_cast_to_Rect2(this_00);
      cVar6 = Variant::can_convert_strict(*(undefined4*)this, 0x17);
      uVar5 = _LC89;
      if (cVar6 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar5;
      }

      pRVar9 = (Rect2*)Variant::operator_cast_to_RID(this);
      ( *param_2 )((char)( param_1 + (long)param_3 ), pRVar9);
   }
 else {
      uVar8 = 3;
      LAB_0010c1e5:*(undefined4*)param_6 = uVar8;
      *(undefined4*)( param_6 + 8 ) = 2;
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTC<RID, Rect2 const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */Object *MethodBindTC<RID,Rect2_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC84, "./core/object/method_bind.h", 0x1a8, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
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
         goto LAB_0010c386;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_argsc_dv<__UnexistingClass,RID,Rect2_const&>(p_Var4, (_func_void_RID_Rect2_ptr*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0010c386:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
      goto LAB_0010c68d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0010c6f0;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0010c6f0:uVar6 = 4;
         LAB_0010c68d:*(undefined4*)param_6 = uVar6;
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
         goto LAB_0010c60b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0010c60b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_float**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 3);
   uVar4 = _LC91;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   fVar9 = Variant::operator_cast_to_float(this);
   /* WARNING: Could not recover jumptable at 0x0010c664. Too many branches */
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
         _err_print_error(&_LC84, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
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
         goto LAB_0010c756;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,float>(p_Var4, (_func_void_float*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0010c756:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
      goto LAB_0010ca95;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   iVar6 = 2 - uVar10;
   if (lVar1 == 0) {
      if (iVar6 == 0) {
         this(Variant * ) * plVar8;
         LAB_0010cacd:this_00 = (Variant*)plVar8[1];
         goto LAB_0010c9f5;
      }

   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      iVar11 = (int)lVar2;
      if (iVar6 <= iVar11) {
         if (uVar10 == 0) {
            lVar9 = (long)( iVar11 + -2 );
            if (lVar2 <= lVar9) goto LAB_0010cae8;
            this(Variant * )(lVar1 + lVar9 * 0x18);
         }
 else {
            this(Variant * ) * plVar8;
            if (uVar10 == 2) goto LAB_0010cacd;
         }

         lVar9 = (long)(int)( ( uVar10 ^ 1 ) + ( iVar11 - iVar6 ) );
         if (lVar2 <= lVar9) {
            LAB_0010cae8:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this_00 = (Variant*)( lVar1 + lVar9 * 0x18 );
         LAB_0010c9f5:*(undefined4*)param_6 = 0;
         if (( (ulong)param_2 & 1 ) != 0) {
            param_2 = *(_func_void_Side_float**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
         }

         cVar5 = Variant::can_convert_strict(*(undefined4*)this_00, 3);
         uVar4 = _LC92;
         if (cVar5 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar4;
         }

         fVar12 = Variant::operator_cast_to_float(this_00);
         cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
         uVar4 = _LC88;
         if (cVar5 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar4;
         }

         Variant::operator_cast_to_long(this);
         /* WARNING: Could not recover jumptable at 0x0010ca7f. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *param_2 )((char)( param_1 + (long)param_3 ), fVar12);
         return;
      }

   }

   uVar7 = 4;
   LAB_0010ca95:*(undefined4*)param_6 = uVar7;
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
         _err_print_error(&_LC84, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
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
         goto LAB_0010cb86;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,Side,float>(p_Var4, (_func_void_Side_float*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0010cb86:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<Rect2 const&>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<Rect2_const&>(int param_1, int *param_2, PropertyInfo *param_3) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined8 uVar5;
   long lVar6;
   int iVar7;
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
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar7 = *param_2;
   if (iVar7 != param_1) goto LAB_0010cdc7;
   local_78 = 0;
   local_68 = &_LC4;
   local_80 = 0;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._8_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 7);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010cec0:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010cec0;
      StringName::StringName((StringName*)&local_70, (CowData<char32_t>*)&local_48, false);
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

   *(undefined4*)param_3 = local_68._0_4_;
   if (*(long*)( param_3 + 8 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
      uVar5 = local_60._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      *(undefined8*)( param_3 + 8 ) = uVar5;
   }

   if (*(long*)( param_3 + 0x10 ) != local_60._8_8_) {
      StringName::unref();
      uVar5 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( param_3 + 0x10 ) = uVar5;
   }

   lVar6 = local_48;
   *(int*)( param_3 + 0x18 ) = local_50;
   if (*(long*)( param_3 + 0x20 ) == local_48) {
      *(undefined4*)( param_3 + 0x28 ) = local_40;
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
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
      *(long*)( param_3 + 0x20 ) = local_48;
      *(undefined4*)( param_3 + 0x28 ) = local_40;
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

   iVar7 = *param_2;
   LAB_0010cdc7:*param_2 = iVar7 + 1;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void call_get_argument_type_info<Vector2 const&, Rect2 const&>(int, PropertyInfo&) */void call_get_argument_type_info<Vector2_const&,Rect2_const&>(int param_1, PropertyInfo *param_2) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined8 uVar5;
   long lVar6;
   int iVar7;
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
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_8c = 0;
   iVar7 = 1;
   if (param_1 != 0) goto LAB_0010d066;
   local_78 = 0;
   local_68 = &_LC4;
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
      LAB_0010d170:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010d170;
      StringName::StringName((StringName*)&local_70, (CowData<char32_t>*)&local_48, false);
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

   *(undefined4*)param_2 = local_68._0_4_;
   if (*(long*)( param_2 + 8 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 8 ));
      uVar5 = local_60._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      *(undefined8*)( param_2 + 8 ) = uVar5;
   }

   if (*(long*)( param_2 + 0x10 ) != local_60._8_8_) {
      StringName::unref();
      uVar5 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( param_2 + 0x10 ) = uVar5;
   }

   lVar6 = local_48;
   *(int*)( param_2 + 0x18 ) = local_50;
   if (*(long*)( param_2 + 0x20 ) == local_48) {
      *(undefined4*)( param_2 + 0x28 ) = local_40;
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
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 0x20 ));
      *(long*)( param_2 + 0x20 ) = local_48;
      *(undefined4*)( param_2 + 0x28 ) = local_40;
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

   iVar7 = local_8c + 1;
   LAB_0010d066:local_8c = iVar7;
   call_get_argument_type_info_helper<Rect2_const&>(param_1, &local_8c, param_2);
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindTRC<bool, Vector2 const&, Rect2 const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<bool,Vector2_const&,Rect2_const&>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   long lVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   uint in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar7;
   long in_FS_OFFSET;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar7 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 2) {
      local_68 = (undefined*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_60 = (undefined1[16])0x0;
      call_get_argument_type_info<Vector2_const&,Rect2_const&>(in_EDX, (PropertyInfo*)&local_68);
      uVar5 = local_60._0_8_;
      uVar6 = local_60._8_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *puVar7 = local_68._0_4_;
      *(undefined8*)( puVar7 + 2 ) = uVar5;
      *(undefined8*)( puVar7 + 4 ) = uVar6;
      puVar7[6] = (undefined4)local_50;
      *(undefined8*)( puVar7 + 8 ) = local_48;
      puVar7[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      goto LAB_0010d43a;
   }

   local_78 = 0;
   local_70 = 0;
   local_68 = &_LC4;
   auVar3._8_8_ = 0;
   auVar3._0_8_ = local_60._0_8_;
   local_60 = auVar3 << 0x40;
   String::parse_latin1((StrRange*)&local_70);
   *puVar7 = 1;
   puVar7[6] = 0;
   *(undefined8*)( puVar7 + 8 ) = 0;
   *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
   if (local_70 == 0) {
      puVar7[10] = 6;
      LAB_0010d467:StringName::operator =((StringName*)( puVar7 + 4 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar7 + 8 ), (CowData*)&local_70);
      puVar7[10] = 6;
      if (puVar7[6] != 0x11) goto LAB_0010d467;
      StringName::StringName((StringName*)&local_68, (CowData<char32_t>*)( puVar7 + 8 ), false);
      if (*(undefined**)( puVar7 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar7 + 4 ) = local_68;
      }

   }

   lVar4 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   LAB_0010d43a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar7;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTC<RID, Rect2 const&>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindTC<RID,Rect2_const&>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined8 uVar5;
   long lVar6;
   int iVar7;
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar8;
   long in_FS_OFFSET;
   int local_8c;
   long local_88;
   long local_80;
   undefined8 local_78;
   long local_70;
   undefined *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   pPVar8 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)pPVar8 = 0;
   iVar7 = 1;
   *(undefined4*)( pPVar8 + 0x18 ) = 0;
   *(undefined8*)( pPVar8 + 0x20 ) = 0;
   *(undefined4*)( pPVar8 + 0x28 ) = 6;
   local_8c = 0;
   *(undefined1(*) [16])( pPVar8 + 8 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_0010d53a;
   local_88 = 0;
   local_68 = &_LC4;
   local_80 = 0;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._8_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_78 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 0x17);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010d648:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010d648;
      StringName::StringName((StringName*)&local_70, (CowData<char32_t>*)&local_48, false);
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

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   *(undefined4*)pPVar8 = local_68._0_4_;
   if (*(long*)( pPVar8 + 8 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar8 + 8 ));
      uVar5 = local_60._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      *(undefined8*)( pPVar8 + 8 ) = uVar5;
   }

   if (*(long*)( pPVar8 + 0x10 ) != local_60._8_8_) {
      StringName::unref();
      uVar5 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( pPVar8 + 0x10 ) = uVar5;
   }

   lVar6 = local_48;
   *(int*)( pPVar8 + 0x18 ) = local_50;
   if (*(long*)( pPVar8 + 0x20 ) == local_48) {
      *(undefined4*)( pPVar8 + 0x28 ) = local_40;
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
      CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar8 + 0x20 ));
      *(long*)( pPVar8 + 0x20 ) = local_48;
      *(undefined4*)( pPVar8 + 0x28 ) = local_40;
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

   iVar7 = local_8c + 1;
   LAB_0010d53a:local_8c = iVar7;
   call_get_argument_type_info_helper<Rect2_const&>(in_EDX, &local_8c, pPVar8);
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pPVar8;
}
/* WARNING: Control flow encountered bad instruction data *//* StyleBox::~StyleBox() */void StyleBox::~StyleBox(StyleBox *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<bool, Vector2 const&, Rect2 const&>::~MethodBindTRC() */void MethodBindTRC<bool,Vector2_const&,Rect2_const&>::~MethodBindTRC(MethodBindTRC<bool,Vector2_const&,Rect2_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<CanvasItem*>::~MethodBindTRC() */void MethodBindTRC<CanvasItem*>::~MethodBindTRC(MethodBindTRC<CanvasItem*> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTC<RID, Rect2 const&>::~MethodBindTC() */void MethodBindTC<RID,Rect2_const&>::~MethodBindTC(MethodBindTC<RID,Rect2_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Vector2>::~MethodBindTRC() */void MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<float, Side>::~MethodBindTRC() */void MethodBindTRC<float,Side>::~MethodBindTRC(MethodBindTRC<float,Side> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<float>::~MethodBindT() */void MethodBindT<float>::~MethodBindT(MethodBindT<float> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Side, float>::~MethodBindT() */void MethodBindT<Side,float>::~MethodBindT(MethodBindT<Side,float> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodInfo::~MethodInfo() */void MethodInfo::~MethodInfo(MethodInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

