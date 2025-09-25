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
/* Ref<EditorExportPreset>::TEMPNAMEPLACEHOLDERVALUE(Ref<EditorExportPreset> const&) [clone .isra.0]
    */void Ref<EditorExportPreset>::operator =(Ref<EditorExportPreset> *this, Ref *param_1) {
   Object *pOVar1;
   char cVar2;
   pOVar1 = *(Object**)this;
   if (pOVar1 != (Object*)param_1) {
      *(Ref**)this = param_1;
      if (param_1 != (Ref*)0x0) {
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *(undefined8*)this = 0;
         }

      }

      if (pOVar1 != (Object*)0x0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
               return;
            }

         }

      }

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
/* EditorExportPlatformExtension::EditorExportPlatformExtension() */void EditorExportPlatformExtension::EditorExportPlatformExtension(EditorExportPlatformExtension *this) {
   EditorExportPlatform::EditorExportPlatform((EditorExportPlatform*)this);
   this[0x198] = (EditorExportPlatformExtension)0x0;
   *(undefined***)this = &PTR__initialize_classv_0011ba70;
   *(undefined8*)( this + 400 ) = 0;
   StringName::StringName((StringName*)( this + 0x1a0 ), "_get_preset_features", false);
   this[0x1a8] = (EditorExportPlatformExtension)0x0;
   *(undefined8*)( this + 0x1b0 ) = 0;
   StringName::StringName((StringName*)( this + 0x1b8 ), "_is_executable", false);
   this[0x1c0] = (EditorExportPlatformExtension)0x0;
   *(undefined8*)( this + 0x1c8 ) = 0;
   StringName::StringName((StringName*)( this + 0x1d0 ), "_get_export_options", false);
   this[0x1d8] = (EditorExportPlatformExtension)0x0;
   *(undefined8*)( this + 0x1e0 ) = 0;
   StringName::StringName((StringName*)( this + 0x1e8 ), "_should_update_export_options", false);
   this[0x1f0] = (EditorExportPlatformExtension)0x0;
   *(undefined8*)( this + 0x1f8 ) = 0;
   StringName::StringName((StringName*)( this + 0x200 ), "_get_export_option_visibility", false);
   this[0x208] = (EditorExportPlatformExtension)0x0;
   *(undefined8*)( this + 0x210 ) = 0;
   StringName::StringName((StringName*)( this + 0x218 ), "_get_export_option_warning", false);
   this[0x220] = (EditorExportPlatformExtension)0x0;
   *(undefined8*)( this + 0x228 ) = 0;
   StringName::StringName((StringName*)( this + 0x230 ), "_get_os_name", false);
   this[0x238] = (EditorExportPlatformExtension)0x0;
   *(undefined8*)( this + 0x240 ) = 0;
   StringName::StringName((StringName*)( this + 0x248 ), "_get_name", false);
   this[0x250] = (EditorExportPlatformExtension)0x0;
   *(undefined8*)( this + 600 ) = 0;
   StringName::StringName((StringName*)( this + 0x260 ), "_get_logo", false);
   this[0x268] = (EditorExportPlatformExtension)0x0;
   *(undefined8*)( this + 0x270 ) = 0;
   StringName::StringName((StringName*)( this + 0x278 ), "_poll_export", false);
   this[0x280] = (EditorExportPlatformExtension)0x0;
   *(undefined8*)( this + 0x288 ) = 0;
   StringName::StringName((StringName*)( this + 0x290 ), "_get_options_count", false);
   this[0x298] = (EditorExportPlatformExtension)0x0;
   *(undefined8*)( this + 0x2a0 ) = 0;
   StringName::StringName((StringName*)( this + 0x2a8 ), "_get_options_tooltip", false);
   this[0x2b0] = (EditorExportPlatformExtension)0x0;
   *(undefined8*)( this + 0x2b8 ) = 0;
   StringName::StringName((StringName*)( this + 0x2c0 ), "_get_option_icon", false);
   this[0x2c8] = (EditorExportPlatformExtension)0x0;
   *(undefined8*)( this + 0x2d0 ) = 0;
   StringName::StringName((StringName*)( this + 0x2d8 ), "_get_option_label", false);
   this[0x2e0] = (EditorExportPlatformExtension)0x0;
   *(undefined8*)( this + 0x2e8 ) = 0;
   StringName::StringName((StringName*)( this + 0x2f0 ), "_get_option_tooltip", false);
   this[0x2f8] = (EditorExportPlatformExtension)0x0;
   *(undefined8*)( this + 0x300 ) = 0;
   StringName::StringName((StringName*)( this + 0x308 ), "_get_device_architecture", false);
   this[0x310] = (EditorExportPlatformExtension)0x0;
   *(undefined8*)( this + 0x318 ) = 0;
   StringName::StringName((StringName*)( this + 800 ), "_cleanup", false);
   this[0x328] = (EditorExportPlatformExtension)0x0;
   *(undefined8*)( this + 0x330 ) = 0;
   StringName::StringName((StringName*)( this + 0x338 ), "_run", false);
   this[0x340] = (EditorExportPlatformExtension)0x0;
   *(undefined8*)( this + 0x348 ) = 0;
   StringName::StringName((StringName*)( this + 0x350 ), "_get_run_icon", false);
   this[0x358] = (EditorExportPlatformExtension)0x0;
   *(undefined8*)( this + 0x360 ) = 0;
   StringName::StringName((StringName*)( this + 0x368 ), "_can_export", false);
   this[0x370] = (EditorExportPlatformExtension)0x0;
   *(undefined8*)( this + 0x378 ) = 0;
   StringName::StringName((StringName*)( this + 0x380 ), "_has_valid_export_configuration", false);
   this[0x388] = (EditorExportPlatformExtension)0x0;
   *(undefined8*)( this + 0x390 ) = 0;
   StringName::StringName((StringName*)( this + 0x398 ), "_has_valid_project_configuration", false);
   this[0x3a0] = (EditorExportPlatformExtension)0x0;
   *(undefined8*)( this + 0x3a8 ) = 0;
   StringName::StringName((StringName*)( this + 0x3b0 ), "_get_binary_extensions", false);
   this[0x3b8] = (EditorExportPlatformExtension)0x0;
   *(undefined8*)( this + 0x3c0 ) = 0;
   StringName::StringName((StringName*)( this + 0x3c8 ), "_export_project", false);
   this[0x3d0] = (EditorExportPlatformExtension)0x0;
   *(undefined8*)( this + 0x3d8 ) = 0;
   StringName::StringName((StringName*)( this + 0x3e0 ), "_export_pack", false);
   this[1000] = (EditorExportPlatformExtension)0x0;
   *(undefined8*)( this + 0x3f0 ) = 0;
   StringName::StringName((StringName*)( this + 0x3f8 ), "_export_zip", false);
   this[0x400] = (EditorExportPlatformExtension)0x0;
   *(undefined8*)( this + 0x408 ) = 0;
   StringName::StringName((StringName*)( this + 0x410 ), "_export_pack_patch", false);
   this[0x418] = (EditorExportPlatformExtension)0x0;
   *(undefined8*)( this + 0x420 ) = 0;
   StringName::StringName((StringName*)( this + 0x428 ), "_export_zip_patch", false);
   this[0x430] = (EditorExportPlatformExtension)0x0;
   *(undefined8*)( this + 0x438 ) = 0;
   StringName::StringName((StringName*)( this + 0x440 ), "_get_platform_features", false);
   this[0x448] = (EditorExportPlatformExtension)0x0;
   *(undefined8*)( this + 0x450 ) = 0;
   StringName::StringName((StringName*)( this + 0x458 ), "_get_debug_protocol", false);
   this[0x460] = (EditorExportPlatformExtension)0x0;
   *(undefined8*)( this + 0x468 ) = 0;
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
/* EditorExportPlatformExtension::get_export_options(List<EditorExportPlatform::ExportOption,
   DefaultAllocator>*) const */void EditorExportPlatformExtension::get_export_options(EditorExportPlatformExtension *this, List *param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   char cVar3;
   char cVar4;
   undefined4 uVar5;
   undefined4 *puVar6;
   Variant *pVVar7;
   undefined1(*pauVar8)[16];
   undefined8 uVar9;
   long lVar10;
   long *plVar11;
   code *pcVar12;
   long in_FS_OFFSET;
   Array *local_198;
   Array local_178[8];
   long local_170;
   Variant *local_168;
   Variant *local_160;
   Variant *local_158;
   long local_150[5];
   uint local_128;
   undefined4 uStack_124;
   undefined4 local_120;
   undefined4 uStack_11c;
   undefined1 local_118[16];
   long local_108;
   ulong local_100;
   undefined8 local_f8;
   undefined8 local_f0;
   undefined8 local_e8;
   undefined8 local_d8;
   ulong local_d0;
   undefined8 local_c0;
   undefined8 local_b8;
   undefined1 local_b0[16];
   undefined8 local_98;
   undefined1 local_90[16];
   undefined4 local_80;
   long local_78;
   undefined4 local_70;
   int local_68[6];
   char local_50;
   char local_4f;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Array::Array(local_178);
   local_98 = 0;
   local_128 = 0;
   uStack_124 = 0;
   local_90 = (undefined1[16])0x0;
   Array::set_typed((uint)local_178, (StringName*)0x1b, (Variant*)&local_128);
   if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_124, local_128) != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[(int)local_98] != '\0') {
      Variant::_clear_internal();
   }

   plVar11 = *(long**)( this + 0x98 );
   if (plVar11 == (long*)0x0) {
      LAB_00100c3c:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x1d8] == (EditorExportPlatformExtension)0x0 )) {
         local_128 = 0;
         uStack_124 = 0;
         local_118 = (undefined1[16])0x0;
         local_120 = 0;
         uStack_11c = 0;
         local_108 = 0;
         local_100 = 0;
         local_f8 = 6;
         local_f0 = 1;
         local_e8 = 0;
         local_d8 = 0;
         local_d0 = 0;
         local_c0 = 0;
         String::parse_latin1((String*)&local_128, "_get_export_options");
         local_f0 = CONCAT44(local_f0._4_4_, 0xc);
         GetTypeInfo<TypedArray<Dictionary>,void>::get_class_info((GetTypeInfo<TypedArray<Dictionary>,void>*)&local_158);
         PropertyInfo::operator =((PropertyInfo*)&local_120, (PropertyInfo*)&local_158);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
         local_d0 = local_d0 & 0xffffffff00000000;
         uVar5 = MethodInfo::get_compatibility_hash();
         lVar10 = *(long*)( this + 8 );
         *(undefined8*)( this + 0x1e0 ) = 0;
         pcVar12 = *(code**)( lVar10 + 0xd8 );
         if (( ( pcVar12 == (code*)0x0 ) || ( *(long*)( lVar10 + 0xe0 ) == 0 ) ) && ( pcVar12 = *(code**)( lVar10 + 0xd0 ) ),pcVar12 == (code*)0x0) {
            local_170 = 0;
            String::parse_latin1((String*)&local_170, "EditorExportPlatformExtension");
            StringName::StringName((StringName*)&local_168, (String*)&local_170, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_158, (StringName*)&local_168);
            if (local_150[0] == 0) {
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_150);
               local_198 = (Array*)0x0;
               if (StringName::configured != '\0') goto LAB_00101859;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
               LAB_00101879:lVar10 = *(long*)( this + 8 );
               pcVar12 = *(code**)( lVar10 + 200 );
               if (( ( pcVar12 == (code*)0x0 ) || ( *(long*)( lVar10 + 0xe0 ) == 0 ) ) && ( pcVar12 = *(code**)( lVar10 + 0xc0 ) ),pcVar12 == (code*)0x0) goto LAB_00101742;
               uVar9 = ( *pcVar12 )(*(undefined8*)( lVar10 + 0xa0 ), this + 0x1d0);
               *(undefined8*)( this + 0x1e0 ) = uVar9;
            }
 else {
               local_198 = *(Array**)( local_150[0] + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_150);
               if (StringName::configured != '\0') {
                  LAB_00101859:if (local_168 != (Variant*)0x0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
               if (local_198 == (Array*)0x0) goto LAB_00101879;
            }

            lVar10 = *(long*)( this + 8 );
         }
 else {
            uVar9 = ( *pcVar12 )(*(undefined8*)( lVar10 + 0xa0 ), this + 0x1d0, uVar5);
            *(undefined8*)( this + 0x1e0 ) = uVar9;
            lVar10 = *(long*)( this + 8 );
         }

         LAB_00101742:if (*(char*)( lVar10 + 0x29 ) != '\0') {
            plVar11 = (long*)operator_new(0x18, "");
            *plVar11 = (long)( this + 0x1e0 );
            plVar11[1] = (long)( this + 0x1d8 );
            plVar11[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar11;
         }

         this[0x1d8] = (EditorExportPlatformExtension)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_128);
      }

      if (*(long*)( this + 0x1e0 ) == 0) goto LAB_00100c51;
      Array::Array((Array*)&local_168);
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( this + 0x1e0 ) )(*(undefined8*)( this + 0x10 ), 0, (Array*)&local_168);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x1d0, *(undefined8*)( this + 0x1e0 ), 0, (Array*)&local_168);
      }

      Array::Array((Array*)&local_128);
      local_98 = 0;
      local_158 = (Variant*)0x0;
      local_90 = (undefined1[16])0x0;
      Array::set_typed((uint)(Variant*)&local_128, (StringName*)0x1b, (Variant*)&local_158);
      if (( StringName::configured != '\0' ) && ( local_158 != (Variant*)0x0 )) {
         StringName::unref();
      }

      if (Variant::needs_deinit[(int)local_98] != '\0') {
         Variant::_clear_internal();
      }

      cVar3 = Array::is_same_typed((Array*)&local_128);
      if (cVar3 == '\0') {
         Array::assign((Array*)&local_128);
      }
 else {
         Array::_ref((Array*)&local_128);
      }

      Array::operator =(local_178, (Array*)&local_128);
      Array::~Array((Array*)&local_128);
      Array::~Array((Array*)&local_168);
   }
 else {
      local_128 = 0;
      uStack_124 = 0;
      local_120 = 0;
      ( **(code**)( *plVar11 + 0x60 ) )(&local_b8, plVar11, this + 0x1d0, 0, 0, (Variant*)&local_128);
      if (local_128 != 0) {
         if (Variant::needs_deinit[(int)local_b8] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00100c3c;
      }

      Variant::operator_cast_to_Array((Variant*)&local_168);
      Array::Array((Array*)&local_158);
      local_98 = 0;
      local_170 = 0;
      local_90 = (undefined1[16])0x0;
      Array::set_typed((uint)(Array*)&local_158, (StringName*)0x1b, (Variant*)&local_170);
      if (( StringName::configured != '\0' ) && ( local_170 != 0 )) {
         StringName::unref();
      }

      if (Variant::needs_deinit[(int)local_98] != '\0') {
         Variant::_clear_internal();
      }

      local_198 = (Array*)&local_158;
      cVar3 = Array::is_same_typed(local_198);
      if (cVar3 == '\0') {
         Array::assign(local_198);
      }
 else {
         Array::_ref(local_198);
      }

      Array::~Array((Array*)&local_168);
      Array::operator =(local_178, local_198);
      Array::~Array(local_198);
      if (Variant::needs_deinit[(int)local_b8] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (param_1 != (List*)0x0) {
      Array::begin();
      Array::end();
      if (local_168 != local_158) {
         do {
            if (local_160 != (Variant*)0x0) {
               Variant::operator =(local_160, local_168);
            }

            Variant::operator_cast_to_Dictionary((Variant*)&local_170);
            Variant::Variant((Variant*)&local_98, "name");
            cVar3 = Dictionary::has((Variant*)&local_170);
            if (Variant::needs_deinit[(int)local_98] != '\0') {
               Variant::_clear_internal();
            }

            if (cVar3 == '\0') {
               _err_print_error("get_export_options", "editor/export/editor_export_platform_extension.cpp", 0x66, "Condition \"!d.has(\"name\")\" is true. Continuing.", 0, 0);
            }
 else {
               Variant::Variant((Variant*)&local_98, "type");
               cVar3 = Dictionary::has((Variant*)&local_170);
               if (Variant::needs_deinit[(int)local_98] != '\0') {
                  Variant::_clear_internal();
               }

               if (cVar3 == '\0') {
                  _err_print_error("get_export_options", "editor/export/editor_export_platform_extension.cpp", 0x67, "Condition \"!d.has(\"type\")\" is true. Continuing.", 0, 0);
               }
 else {
                  PropertyInfo::from_dict((Dictionary*)&local_128);
                  if (( ( CONCAT44(uStack_11c, local_120) == 0 ) || ( *(uint*)( CONCAT44(uStack_11c, local_120) + -8 ) < 2 ) ) && ( ( local_100 & 2 ) != 0 )) {
                     _err_print_error("get_export_options", "editor/export/editor_export_platform_extension.cpp", 0x6a, "Condition \"pinfo.name.is_empty() && (pinfo.usage & PROPERTY_USAGE_STORAGE)\" is true. Continuing.", 0, 0);
                  }
 else {
                     if (local_128 < 0x27) {
                        local_b8 = 0;
                        local_b0 = (undefined1[16])0x0;
                        Variant::Variant((Variant*)&local_98, "default_value");
                        cVar3 = Dictionary::has((Variant*)&local_170);
                        if (Variant::needs_deinit[(int)local_98] != '\0') {
                           Variant::_clear_internal();
                        }

                        if (cVar3 != '\0') {
                           Variant::Variant((Variant*)&local_98, "default_value");
                           pVVar7 = (Variant*)Dictionary::operator []((Variant*)&local_170);
                           Variant::operator =((Variant*)&local_b8, pVVar7);
                           if (Variant::needs_deinit[(int)local_98] != '\0') {
                              Variant::_clear_internal();
                           }

                        }

                        Variant::Variant((Variant*)&local_98, "update_visibility");
                        cVar3 = Dictionary::has((Variant*)&local_170);
                        if (Variant::needs_deinit[(int)local_98] != '\0') {
                           Variant::_clear_internal();
                        }

                        if (cVar3 != '\0') {
                           Variant::Variant((Variant*)&local_98, "update_visibility");
                           pVVar7 = (Variant*)Dictionary::operator []((Variant*)&local_170);
                           cVar3 = Variant::operator_cast_to_bool(pVVar7);
                           if (Variant::needs_deinit[(int)local_98] != '\0') {
                              Variant::_clear_internal();
                           }

                        }

                        Variant::Variant((Variant*)&local_98, "required");
                        cVar4 = Dictionary::has((Variant*)&local_170);
                        if (Variant::needs_deinit[(int)local_98] != '\0') {
                           Variant::_clear_internal();
                        }

                        if (cVar4 != '\0') {
                           Variant::Variant((Variant*)&local_98, "required");
                           pVVar7 = (Variant*)Dictionary::operator []((Variant*)&local_170);
                           cVar4 = Variant::operator_cast_to_bool(pVVar7);
                           if (Variant::needs_deinit[(int)local_98] != '\0') {
                              Variant::_clear_internal();
                           }

                        }

                        auVar2._8_8_ = 0;
                        auVar2._0_8_ = local_90._8_8_;
                        local_90 = auVar2 << 0x40;
                        local_98 = CONCAT44(local_98._4_4_, local_128);
                        if (CONCAT44(uStack_11c, local_120) != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)local_90, (CowData*)&local_120);
                        }

                        StringName::StringName((StringName*)( local_90 + 8 ), (StringName*)local_118);
                        local_78 = 0;
                        local_80 = local_118._8_4_;
                        if (local_108 != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)&local_108);
                        }

                        local_70 = (undefined4)local_100;
                        Variant::Variant((Variant*)local_68, (Variant*)&local_b8);
                        local_50 = cVar3;
                        local_4f = cVar4;
                        if (*(long*)param_1 == 0) {
                           pauVar8 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                           *(undefined1(**) [16])param_1 = pauVar8;
                           *(undefined4*)pauVar8[1] = 0;
                           *pauVar8 = (undefined1[16])0x0;
                        }

                        puVar6 = (undefined4*)operator_new(0x68, DefaultAllocator::alloc);
                        *(undefined8*)( puVar6 + 8 ) = 0;
                        *(undefined1(*) [16])( puVar6 + 2 ) = (undefined1[16])0x0;
                        *(undefined1(*) [16])( puVar6 + 0xe ) = (undefined1[16])0x0;
                        *puVar6 = 0;
                        puVar6[6] = 0;
                        puVar6[10] = 6;
                        puVar6[0xc] = 0;
                        *(undefined2*)( puVar6 + 0x12 ) = 0;
                        *(undefined8*)( puVar6 + 0x18 ) = 0;
                        *(undefined1(*) [16])( puVar6 + 0x14 ) = (undefined1[16])0x0;
                        *puVar6 = (int)local_98;
                        if (local_90._0_8_ != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)( puVar6 + 2 ), (CowData*)local_90);
                        }

                        StringName::operator =((StringName*)( puVar6 + 4 ), (StringName*)( local_90 + 8 ));
                        puVar6[6] = local_80;
                        if (*(long*)( puVar6 + 8 ) != local_78) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)( puVar6 + 8 ), (CowData*)&local_78);
                        }

                        puVar6[10] = local_70;
                        Variant::operator =((Variant*)( puVar6 + 0xc ), (Variant*)local_68);
                        *(char*)( puVar6 + 0x12 ) = local_50;
                        *(char*)( (long)puVar6 + 0x49 ) = local_4f;
                        uVar9 = *(undefined8*)( *(long*)param_1 + 8 );
                        *(long*)( puVar6 + 0x18 ) = *(long*)param_1;
                        plVar11 = *(long**)param_1;
                        *(undefined8*)( puVar6 + 0x14 ) = 0;
                        *(undefined8*)( puVar6 + 0x16 ) = uVar9;
                        if (plVar11[1] != 0) {
                           *(undefined4**)( plVar11[1] + 0x50 ) = puVar6;
                        }

                        plVar11[1] = (long)puVar6;
                        if (*plVar11 == 0) {
                           *plVar11 = (long)puVar6;
                        }

                        *(int*)( plVar11 + 2 ) = (int)plVar11[2] + 1;
                        if (Variant::needs_deinit[local_68[0]] != '\0') {
                           Variant::_clear_internal();
                        }

                        lVar10 = local_78;
                        if (local_78 != 0) {
                           LOCK();
                           plVar11 = (long*)( local_78 + -0x10 );
                           *plVar11 = *plVar11 + -1;
                           UNLOCK();
                           if (*plVar11 == 0) {
                              local_78 = 0;
                              Memory::free_static((void*)( lVar10 + -0x10 ), false);
                           }

                        }

                        if (( StringName::configured != '\0' ) && ( local_90._8_8_ != 0 )) {
                           StringName::unref();
                        }

                        uVar9 = local_90._0_8_;
                        if (local_90._0_8_ != 0) {
                           LOCK();
                           plVar11 = (long*)( local_90._0_8_ + -0x10 );
                           *plVar11 = *plVar11 + -1;
                           UNLOCK();
                           if (*plVar11 == 0) {
                              auVar1._8_8_ = 0;
                              auVar1._0_8_ = local_90._8_8_;
                              local_90 = auVar1 << 0x40;
                              Memory::free_static((void*)( uVar9 + -0x10 ), false);
                           }

                        }

                        if (Variant::needs_deinit[(int)local_b8] != '\0') {
                           Variant::_clear_internal();
                        }

                        lVar10 = local_108;
                        if (local_108 != 0) {
                           LOCK();
                           plVar11 = (long*)( local_108 + -0x10 );
                           *plVar11 = *plVar11 + -1;
                           UNLOCK();
                           if (*plVar11 == 0) {
                              local_108 = 0;
                              Memory::free_static((void*)( lVar10 + -0x10 ), false);
                           }

                        }

                        if (( StringName::configured != '\0' ) && ( local_118._0_8_ != 0 )) {
                           StringName::unref();
                        }

                        if (CONCAT44(uStack_11c, local_120) != 0) {
                           LOCK();
                           plVar11 = (long*)( CONCAT44(uStack_11c, local_120) + -0x10 );
                           *plVar11 = *plVar11 + -1;
                           UNLOCK();
                           if (*plVar11 == 0) {
                              lVar10 = CONCAT44(uStack_11c, local_120);
                              local_120 = 0;
                              uStack_11c = 0;
                              Memory::free_static((void*)( lVar10 + -0x10 ), false);
                           }

                        }

                        goto LAB_0010115d;
                     }

                     _err_print_error("get_export_options", "editor/export/editor_export_platform_extension.cpp", 0x6b, "Condition \"pinfo.type < 0 || pinfo.type >= Variant::VARIANT_MAX\" is true. Continuing.", 0, 0);
                  }

                  PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
               }

            }

            LAB_0010115d:Dictionary::~Dictionary((Dictionary*)&local_170);
            local_168 = local_168 + 0x18;
         }
 while ( local_168 != local_158 );
      }

   }

   LAB_00100c51:Array::~Array(local_178);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorExportPlatformExtension::should_update_export_options() */bool EditorExportPlatformExtension::should_update_export_options(EditorExportPlatformExtension *this) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *pcVar5;
   long in_FS_OFFSET;
   bool bVar6;
   undefined8 local_108;
   long local_100;
   GetTypeInfo<bool,void> local_f8[8];
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
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar4 != (long*)0x0) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar4 + 0x60 ) )((Variant*)local_58, plVar4, this + 0x1e8, 0, 0, local_c8);
      if (local_c8[0] == 0) {
         bVar6 = Variant::operator_cast_to_bool((Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00101a07;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x1f0] == (EditorExportPlatformExtension)0x0 )) {
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
      String::parse_latin1((String*)local_c8, "_should_update_export_options");
      local_90 = CONCAT44(local_90._4_4_, 8);
      GetTypeInfo<bool,void>::get_class_info(local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_f8);
      local_70 = local_70 & 0xffffffff00000000;
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar3 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x1f8 ) = 0;
      pcVar5 = *(code**)( lVar3 + 0xd8 );
      if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xd0 ) ),pcVar5 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "EditorExportPlatformExtension");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar3 = local_100 != 0 )) goto LAB_00101c38;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_00101c4d:lVar3 = *(long*)( this + 8 );
            pcVar5 = *(code**)( lVar3 + 200 );
            if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_00101b90;
            uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x1e8);
            *(undefined8*)( this + 0x1f8 ) = uVar2;
         }
 else {
            lVar3 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_00101c38:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar3 == 0) goto LAB_00101c4d;
         }

         lVar3 = *(long*)( this + 8 );
      }
 else {
         uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x1e8, uVar1);
         *(undefined8*)( this + 0x1f8 ) = uVar2;
         lVar3 = *(long*)( this + 8 );
      }

      LAB_00101b90:if (*(char*)( lVar3 + 0x29 ) != '\0') {
         plVar4 = (long*)operator_new(0x18, "");
         *plVar4 = (long)( this + 0x1f8 );
         plVar4[1] = (long)( this + 0x1f0 );
         plVar4[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar4;
      }

      this[0x1f0] = (EditorExportPlatformExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_c8);
   }

   pcVar5 = *(code**)( this + 0x1f8 );
   bVar6 = false;
   if (pcVar5 != (code*)0x0) {
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar5 )(*(undefined8*)( this + 0x10 ), 0, local_c8);
         bVar6 = local_c8[0]._0_1_ != (String)0x0;
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x1e8, pcVar5, 0, local_c8);
         bVar6 = local_c8[0]._0_1_ != (String)0x0;
      }

   }

   LAB_00101a07:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return bVar6;
}
/* EditorExportPlatformExtension::get_os_name() const */void EditorExportPlatformExtension::get_os_name(void) {
   undefined4 uVar1;
   long lVar2;
   long *plVar3;
   code *pcVar4;
   long *in_RSI;
   CowData<char32_t> *in_RDI;
   long in_FS_OFFSET;
   CowData<char32_t> local_128[8];
   CowData<char32_t> local_120[8];
   undefined8 local_118;
   String local_110[8];
   undefined8 local_108;
   long local_100;
   long local_f8;
   long local_f0[5];
   int local_c8;
   undefined4 uStack_c4;
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
   plVar3 = (long*)in_RSI[0x13];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)in_RDI = 0;
   if (plVar3 != (long*)0x0) {
      local_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar3 + 0x60 ) )(local_58, plVar3, in_RSI + 0x46, 0, 0, &local_c8);
      if (local_c8 == 0) {
         Variant::operator_cast_to_String((Variant*)&local_f8);
         if (*(long*)in_RDI != local_f8) {
            CowData<char32_t>::_unref(in_RDI);
            lVar2 = local_f8;
            local_f8 = 0;
            *(long*)in_RDI = lVar2;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00101e65;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( in_RSI[1] != 0 ) && ( (char)in_RSI[0x47] == '\0' )) {
      local_c8 = 0;
      uStack_c4 = 0;
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
      String::parse_latin1((String*)&local_c8, "_get_os_name");
      local_90 = CONCAT44(local_90._4_4_, 0x8c);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
      local_70 = local_70 & 0xffffffff00000000;
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar2 = in_RSI[1];
      in_RSI[0x48] = 0;
      pcVar4 = *(code**)( lVar2 + 0xd8 );
      if (( ( pcVar4 == (code*)0x0 ) || ( *(long*)( lVar2 + 0xe0 ) == 0 ) ) && ( pcVar4 = *(code**)( lVar2 + 0xd0 ) ),pcVar4 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "EditorExportPlatformExtension");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar2 = local_100 != 0 )) goto LAB_001022b7;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_001022cc:lVar2 = in_RSI[1];
            pcVar4 = *(code**)( lVar2 + 200 );
            if (( ( pcVar4 == (code*)0x0 ) || ( *(long*)( lVar2 + 0xe0 ) == 0 ) ) && ( pcVar4 = *(code**)( lVar2 + 0xc0 ) ),pcVar4 == (code*)0x0) goto LAB_00102206;
            lVar2 = ( *pcVar4 )(*(undefined8*)( lVar2 + 0xa0 ), in_RSI + 0x46);
            in_RSI[0x48] = lVar2;
         }
 else {
            lVar2 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_001022b7:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar2 == 0) goto LAB_001022cc;
         }

         lVar2 = in_RSI[1];
      }
 else {
         lVar2 = ( *pcVar4 )(*(undefined8*)( lVar2 + 0xa0 ), in_RSI + 0x46, uVar1);
         in_RSI[0x48] = lVar2;
         lVar2 = in_RSI[1];
      }

      LAB_00102206:if (*(char*)( lVar2 + 0x29 ) != '\0') {
         plVar3 = (long*)operator_new(0x18, "");
         *plVar3 = (long)( in_RSI + 0x48 );
         plVar3[1] = (long)( in_RSI + 0x47 );
         plVar3[2] = in_RSI[0x2d];
         in_RSI[0x2d] = (long)plVar3;
      }

      *(undefined1*)( in_RSI + 0x47 ) = 1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   }

   pcVar4 = (code*)in_RSI[0x48];
   if (pcVar4 == (code*)0x0) {
      if (_gdvirtual__get_os_name_call(String & ::first_print != '\0') {
         local_f8 = 0;
         local_c8 = 0x116438;
         uStack_c4 = 0;
         uStack_c0 = 0x23;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_f8);
         local_108 = 0;
         local_c8 = 0x1133bb;
         uStack_c4 = 0;
         uStack_c0 = 0xc;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_108);
         local_c8 = 0x117a80;
         uStack_c4 = 0;
         local_118 = 0;
         uStack_c0 = 2;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_118);
         ( **(code**)( *in_RSI + 0x48 ) )(local_128);
         operator+((char *)
         local_120,(String*)"Required virtual method ";
         String::operator +(local_110, (String*)local_120);
         String::operator +((String*)&local_100, local_110);
         String::operator +((String*)&local_c8, (String*)&local_100);
         _err_print_error("_gdvirtual__get_os_name_call", "editor/export/editor_export_platform_extension.h", 0x42, (String*)&local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
         CowData<char32_t>::_unref(local_120);
         CowData<char32_t>::_unref(local_128);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         _gdvirtual__get_os_name_call(String&)::first_print =
         '\0';
      }

      goto LAB_00101e65;
   }

   local_f8 = 0;
   if (*(code**)( in_RSI[1] + 0xe0 ) == (code*)0x0) {
      ( *pcVar4 )(in_RSI[2], 0, (CowData<char32_t>*)&local_f8);
      local_c8 = 0;
      uStack_c4 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_f8);
      lVar2 = CONCAT44(uStack_c4, local_c8);
      if (*(long*)in_RDI != lVar2) goto LAB_00101e3e;
   }
 else {
      ( **(code**)( in_RSI[1] + 0xe0 ) )(in_RSI[2], in_RSI + 0x46, pcVar4, 0, (CowData<char32_t>*)&local_f8);
      local_c8 = 0;
      uStack_c4 = 0;
      lVar2 = local_f8;
      if (local_f8 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_f8);
         lVar2 = CONCAT44(uStack_c4, local_c8);
      }

      if (lVar2 != *(long*)in_RDI) {
         LAB_00101e3e:CowData<char32_t>::_unref(in_RDI);
         *(long*)in_RDI = lVar2;
         local_c8 = 0;
         uStack_c4 = 0;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   LAB_00101e65:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* EditorExportPlatformExtension::get_name() const */void EditorExportPlatformExtension::get_name(void) {
   undefined4 uVar1;
   long lVar2;
   long *plVar3;
   code *pcVar4;
   long *in_RSI;
   CowData<char32_t> *in_RDI;
   long in_FS_OFFSET;
   CowData<char32_t> local_128[8];
   CowData<char32_t> local_120[8];
   undefined8 local_118;
   String local_110[8];
   undefined8 local_108;
   long local_100;
   long local_f8;
   long local_f0[5];
   int local_c8;
   undefined4 uStack_c4;
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
   plVar3 = (long*)in_RSI[0x13];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)in_RDI = 0;
   if (plVar3 != (long*)0x0) {
      local_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar3 + 0x60 ) )(local_58, plVar3, in_RSI + 0x49, 0, 0, &local_c8);
      if (local_c8 == 0) {
         Variant::operator_cast_to_String((Variant*)&local_f8);
         if (*(long*)in_RDI != local_f8) {
            CowData<char32_t>::_unref(in_RDI);
            lVar2 = local_f8;
            local_f8 = 0;
            *(long*)in_RDI = lVar2;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_001024e5;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( in_RSI[1] != 0 ) && ( (char)in_RSI[0x4a] == '\0' )) {
      local_c8 = 0;
      uStack_c4 = 0;
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
      String::parse_latin1((String*)&local_c8, "_get_name");
      local_90 = CONCAT44(local_90._4_4_, 0x8c);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
      local_70 = local_70 & 0xffffffff00000000;
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar2 = in_RSI[1];
      in_RSI[0x4b] = 0;
      pcVar4 = *(code**)( lVar2 + 0xd8 );
      if (( ( pcVar4 == (code*)0x0 ) || ( *(long*)( lVar2 + 0xe0 ) == 0 ) ) && ( pcVar4 = *(code**)( lVar2 + 0xd0 ) ),pcVar4 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "EditorExportPlatformExtension");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar2 = local_100 != 0 )) goto LAB_00102937;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_0010294c:lVar2 = in_RSI[1];
            pcVar4 = *(code**)( lVar2 + 200 );
            if (( ( pcVar4 == (code*)0x0 ) || ( *(long*)( lVar2 + 0xe0 ) == 0 ) ) && ( pcVar4 = *(code**)( lVar2 + 0xc0 ) ),pcVar4 == (code*)0x0) goto LAB_00102886;
            lVar2 = ( *pcVar4 )(*(undefined8*)( lVar2 + 0xa0 ), in_RSI + 0x49);
            in_RSI[0x4b] = lVar2;
         }
 else {
            lVar2 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_00102937:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar2 == 0) goto LAB_0010294c;
         }

         lVar2 = in_RSI[1];
      }
 else {
         lVar2 = ( *pcVar4 )(*(undefined8*)( lVar2 + 0xa0 ), in_RSI + 0x49, uVar1);
         in_RSI[0x4b] = lVar2;
         lVar2 = in_RSI[1];
      }

      LAB_00102886:if (*(char*)( lVar2 + 0x29 ) != '\0') {
         plVar3 = (long*)operator_new(0x18, "");
         *plVar3 = (long)( in_RSI + 0x4b );
         plVar3[1] = (long)( in_RSI + 0x4a );
         plVar3[2] = in_RSI[0x2d];
         in_RSI[0x2d] = (long)plVar3;
      }

      *(undefined1*)( in_RSI + 0x4a ) = 1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   }

   pcVar4 = (code*)in_RSI[0x4b];
   if (pcVar4 == (code*)0x0) {
      if (_gdvirtual__get_name_call(String & ::first_print != '\0') {
         local_f8 = 0;
         local_c8 = 0x116438;
         uStack_c4 = 0;
         uStack_c0 = 0x23;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_f8);
         local_108 = 0;
         local_c8 = 0x1133c8;
         uStack_c4 = 0;
         uStack_c0 = 9;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_108);
         local_c8 = 0x117a80;
         uStack_c4 = 0;
         local_118 = 0;
         uStack_c0 = 2;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_118);
         ( **(code**)( *in_RSI + 0x48 ) )(local_128);
         operator+((char *)
         local_120,(String*)"Required virtual method ";
         String::operator +(local_110, (String*)local_120);
         String::operator +((String*)&local_100, local_110);
         String::operator +((String*)&local_c8, (String*)&local_100);
         _err_print_error("_gdvirtual__get_name_call", "editor/export/editor_export_platform_extension.h", 0x45, (String*)&local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
         CowData<char32_t>::_unref(local_120);
         CowData<char32_t>::_unref(local_128);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         _gdvirtual__get_name_call(String&)::first_print =
         '\0';
      }

      goto LAB_001024e5;
   }

   local_f8 = 0;
   if (*(code**)( in_RSI[1] + 0xe0 ) == (code*)0x0) {
      ( *pcVar4 )(in_RSI[2], 0, (CowData<char32_t>*)&local_f8);
      local_c8 = 0;
      uStack_c4 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_f8);
      lVar2 = CONCAT44(uStack_c4, local_c8);
      if (*(long*)in_RDI != lVar2) goto LAB_001024be;
   }
 else {
      ( **(code**)( in_RSI[1] + 0xe0 ) )(in_RSI[2], in_RSI + 0x49, pcVar4, 0, (CowData<char32_t>*)&local_f8);
      local_c8 = 0;
      uStack_c4 = 0;
      lVar2 = local_f8;
      if (local_f8 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_f8);
         lVar2 = CONCAT44(uStack_c4, local_c8);
      }

      if (lVar2 != *(long*)in_RDI) {
         LAB_001024be:CowData<char32_t>::_unref(in_RDI);
         *(long*)in_RDI = lVar2;
         local_c8 = 0;
         uStack_c4 = 0;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   LAB_001024e5:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* EditorExportPlatformExtension::get_logo() const */void EditorExportPlatformExtension::get_logo(void) {
   char cVar1;
   undefined4 uVar2;
   Object *pOVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   Object *pOVar7;
   long *in_RSI;
   long *in_RDI;
   Object *pOVar8;
   long in_FS_OFFSET;
   CowData<char32_t> local_128[8];
   CowData<char32_t> local_120[8];
   undefined8 local_118;
   String local_110[8];
   undefined8 local_108;
   long local_100;
   undefined8 local_f8;
   long local_f0[5];
   int local_c8;
   undefined4 uStack_c4;
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
   plVar5 = (long*)in_RSI[0x13];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *in_RDI = 0;
   if (plVar5 != (long*)0x0) {
      local_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar5 + 0x60 ) )(local_58, plVar5, in_RSI + 0x4c, 0, 0, &local_c8);
      if (local_c8 == 0) {
         lVar4 = Variant::get_validated_object();
         if (lVar4 == 0) {
            pOVar7 = (Object*)*in_RDI;
            if (pOVar7 != (Object*)0x0) {
               *in_RDI = 0;
               cVar1 = RefCounted::unreference();
               if (cVar1 != '\0') {
                  cVar1 = predelete_handler(pOVar7);
                  joined_r0x001030f5:pOVar3 = (Object*)0x0;
                  if (cVar1 != '\0') goto LAB_00102d1a;
               }

            }

         }
 else {
            pOVar3 = (Object*)__dynamic_cast(lVar4, &Object::typeinfo, &Texture2D::typeinfo, 0);
            if (( pOVar3 == (Object*)0x0 ) || ( cVar1 = cVar1 == '\0' )) {
               pOVar7 = (Object*)*in_RDI;
               if (pOVar7 != (Object*)0x0) {
                  *in_RDI = 0;
                  cVar1 = RefCounted::unreference();
                  if (cVar1 != '\0') {
                     cVar1 = predelete_handler(pOVar7);
                     goto joined_r0x001030f5;
                  }

               }

            }
 else {
               pOVar7 = (Object*)*in_RDI;
               pOVar8 = pOVar7;
               if (pOVar3 != pOVar7) {
                  *in_RDI = (long)pOVar3;
                  cVar1 = RefCounted::reference();
                  if (cVar1 == '\0') {
                     *in_RDI = 0;
                  }

                  pOVar8 = pOVar3;
                  if (( ( pOVar7 != (Object*)0x0 ) && ( cVar1 = RefCounted::unreference() ),cVar1 != '\0' )) {
                     LAB_00102d1a:( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
                     Memory::free_static(pOVar7, false);
                     pOVar8 = pOVar3;
                     if (pOVar3 == (Object*)0x0) goto LAB_00102cc0;
                  }

               }

               cVar1 = RefCounted::unreference();
               if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
                  ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
                  Memory::free_static(pOVar8, false);
               }

            }

         }

         LAB_00102cc0:if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00102bc5;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( in_RSI[1] != 0 ) && ( (char)in_RSI[0x4d] == '\0' )) {
      local_c8 = 0;
      uStack_c4 = 0;
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
      String::parse_latin1((String*)&local_c8, "_get_logo");
      local_90 = CONCAT44(local_90._4_4_, 0x8c);
      GetTypeInfo<Ref<Texture2D>,void>::get_class_info((GetTypeInfo<Ref<Texture2D>,void>*)&local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
      local_70 = local_70 & 0xffffffff00000000;
      uVar2 = MethodInfo::get_compatibility_hash();
      lVar4 = in_RSI[1];
      in_RSI[0x4e] = 0;
      pcVar6 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "EditorExportPlatformExtension");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar4 = local_100 != 0 )) goto LAB_001031a1;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_001031b6:lVar4 = in_RSI[1];
            pcVar6 = *(code**)( lVar4 + 200 );
            if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_00103066;
            lVar4 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ));
            in_RSI[0x4e] = lVar4;
         }
 else {
            lVar4 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_001031a1:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar4 == 0) goto LAB_001031b6;
         }

         lVar4 = in_RSI[1];
      }
 else {
         lVar4 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), in_RSI + 0x4c, uVar2);
         in_RSI[0x4e] = lVar4;
         lVar4 = in_RSI[1];
      }

      LAB_00103066:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( in_RSI + 0x4e );
         plVar5[1] = (long)( in_RSI + 0x4d );
         plVar5[2] = in_RSI[0x2d];
         in_RSI[0x2d] = (long)plVar5;
      }

      *(undefined1*)( in_RSI + 0x4d ) = 1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   }

   pcVar6 = (code*)in_RSI[0x4e];
   if (pcVar6 == (code*)0x0) {
      if (_gdvirtual__get_logo_call(Ref<Texture2D> & ::first_print != '\0') {
         local_f8 = 0;
         local_c8 = 0x116438;
         uStack_c4 = 0;
         uStack_c0 = 0x23;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_f8);
         local_108 = 0;
         local_c8 = 0x1133d2;
         uStack_c4 = 0;
         uStack_c0 = 9;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_108);
         local_c8 = 0x117a80;
         uStack_c4 = 0;
         local_118 = 0;
         uStack_c0 = 2;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_118);
         ( **(code**)( *in_RSI + 0x48 ) )(local_128);
         operator+((char *)
         local_120,(String*)"Required virtual method ";
         String::operator +(local_110, (String*)local_120);
         String::operator +((String*)&local_100, local_110);
         String::operator +((String*)&local_c8, (String*)&local_100);
         _err_print_error("_gdvirtual__get_logo_call", "editor/export/editor_export_platform_extension.h", 0x48, (String*)&local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
         CowData<char32_t>::_unref(local_120);
         CowData<char32_t>::_unref(local_128);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         _gdvirtual__get_logo_call(Ref<Texture2D>&)::first_print =
         '\0';
      }

      goto LAB_00102bc5;
   }

   local_c8 = 0;
   uStack_c4 = 0;
   if (*(code**)( in_RSI[1] + 0xe0 ) == (code*)0x0) {
      ( *pcVar6 )(in_RSI[2], 0, &local_c8);
      pOVar7 = (Object*)CONCAT44(uStack_c4, local_c8);
      if (pOVar7 == (Object*)0x0) goto LAB_00102d5d;
      LAB_00102b1c:cVar1 = RefCounted::reference();
      if (cVar1 != '\0') {
         pOVar3 = (Object*)*in_RDI;
         if (pOVar3 != pOVar7) {
            *in_RDI = (long)pOVar7;
            cVar1 = RefCounted::reference();
            if (cVar1 == '\0') {
               *in_RDI = 0;
            }

            if (( ( pOVar3 != (Object*)0x0 ) && ( cVar1 = RefCounted::unreference() ),cVar1 != '\0' )) &&( cVar1 = cVar1 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

      goto LAB_00102b5f;
   }

   pOVar7 = (Object*)*in_RDI;
   if (pOVar7 != (Object*)0x0) goto LAB_00102c04;
}
else{( **(code**)( in_RSI[1] + 0xe0 ) )(in_RSI[2], in_RSI + 0x4c, pcVar6, 0, &local_c8);pOVar7 = (Object*)CONCAT44(uStack_c4, local_c8);if (pOVar7 != (Object*)0x0) goto LAB_00102b1c;LAB_00102d5d:pOVar7 = (Object*)*in_RDI;if (pOVar7 == (Object*)0x0) goto LAB_00102bc5;LAB_00102c04:*in_RDI = 0;LAB_00102b5f:cVar1 = RefCounted::unreference();if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
   ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
   Memory::free_static(pOVar7, false);
}
}if (( CONCAT44(uStack_c4, local_c8) != 0 ) && ( cVar1 = cVar1 != '\0' )) {
   pOVar7 = (Object*)CONCAT44(uStack_c4, local_c8);
   cVar1 = predelete_handler(pOVar7);
   if (cVar1 != '\0') {
      ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
      Memory::free_static(pOVar7, false);
   }

}
LAB_00102bc5:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* EditorExportPlatformExtension::poll_export() */bool EditorExportPlatformExtension::poll_export(EditorExportPlatformExtension *this) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *pcVar5;
   long in_FS_OFFSET;
   bool bVar6;
   undefined8 local_108;
   long local_100;
   GetTypeInfo<bool,void> local_f8[8];
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
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar4 != (long*)0x0) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar4 + 0x60 ) )((Variant*)local_58, plVar4, this + 0x278, 0, 0, local_c8);
      if (local_c8[0] == 0) {
         bVar6 = Variant::operator_cast_to_bool((Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00103347;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x280] == (EditorExportPlatformExtension)0x0 )) {
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
      String::parse_latin1((String*)local_c8, "_poll_export");
      local_90 = CONCAT44(local_90._4_4_, 8);
      GetTypeInfo<bool,void>::get_class_info(local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_f8);
      local_70 = local_70 & 0xffffffff00000000;
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar3 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x288 ) = 0;
      pcVar5 = *(code**)( lVar3 + 0xd8 );
      if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xd0 ) ),pcVar5 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "EditorExportPlatformExtension");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar3 = local_100 != 0 )) goto LAB_00103578;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_0010358d:lVar3 = *(long*)( this + 8 );
            pcVar5 = *(code**)( lVar3 + 200 );
            if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_001034d0;
            uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x278);
            *(undefined8*)( this + 0x288 ) = uVar2;
         }
 else {
            lVar3 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_00103578:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar3 == 0) goto LAB_0010358d;
         }

         lVar3 = *(long*)( this + 8 );
      }
 else {
         uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x278, uVar1);
         *(undefined8*)( this + 0x288 ) = uVar2;
         lVar3 = *(long*)( this + 8 );
      }

      LAB_001034d0:if (*(char*)( lVar3 + 0x29 ) != '\0') {
         plVar4 = (long*)operator_new(0x18, "");
         *plVar4 = (long)( this + 0x288 );
         plVar4[1] = (long)( this + 0x280 );
         plVar4[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar4;
      }

      this[0x280] = (EditorExportPlatformExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_c8);
   }

   pcVar5 = *(code**)( this + 0x288 );
   bVar6 = false;
   if (pcVar5 != (code*)0x0) {
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar5 )(*(undefined8*)( this + 0x10 ), 0, local_c8);
         bVar6 = local_c8[0]._0_1_ != (String)0x0;
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x278, pcVar5, 0, local_c8);
         bVar6 = local_c8[0]._0_1_ != (String)0x0;
      }

   }

   LAB_00103347:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return bVar6;
}
/* EditorExportPlatformExtension::get_options_count() const */int EditorExportPlatformExtension::get_options_count(EditorExportPlatformExtension *this) {
   int iVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   undefined8 local_108;
   long local_100;
   GetTypeInfo<int,void> local_f8[8];
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
   undefined8 local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar5 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar5 != (long*)0x0) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar5 + 0x60 ) )((Variant*)local_58, plVar5, this + 0x290, 0, 0, local_c8);
      if (local_c8[0] == 0) {
         iVar1 = Variant::operator_cast_to_int((Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00103723;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x298] == (EditorExportPlatformExtension)0x0 )) {
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
      String::parse_latin1((String*)local_c8, "_get_options_count");
      local_90 = CONCAT44(local_90._4_4_, 0xc);
      GetTypeInfo<int,void>::get_class_info(local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_f8);
      local_70 = CONCAT44(local_70._4_4_, 3);
      uVar2 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x2a0 ) = 0;
      pcVar6 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "EditorExportPlatformExtension");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar4 = local_100 != 0 )) goto LAB_00103958;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_0010396d:lVar4 = *(long*)( this + 8 );
            pcVar6 = *(code**)( lVar4 + 200 );
            if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_001038a8;
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x290);
            *(undefined8*)( this + 0x2a0 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_00103958:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar4 == 0) goto LAB_0010396d;
         }

         lVar4 = *(long*)( this + 8 );
      }
 else {
         uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x290, uVar2);
         *(undefined8*)( this + 0x2a0 ) = uVar3;
         lVar4 = *(long*)( this + 8 );
      }

      LAB_001038a8:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( this + 0x2a0 );
         plVar5[1] = (long)( this + 0x298 );
         plVar5[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar5;
      }

      this[0x298] = (EditorExportPlatformExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_c8);
   }

   pcVar6 = *(code**)( this + 0x2a0 );
   iVar1 = 0;
   if (pcVar6 != (code*)0x0) {
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar6 )(*(undefined8*)( this + 0x10 ), 0, local_c8);
         iVar1 = local_c8[0];
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x290, pcVar6, 0, local_c8);
         iVar1 = local_c8[0];
      }

   }

   LAB_00103723:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar1;
}
/* EditorExportPlatformExtension::get_options_tooltip() const */void EditorExportPlatformExtension::get_options_tooltip(void) {
   code *pcVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   long in_RSI;
   CowData<char32_t> *in_RDI;
   long in_FS_OFFSET;
   undefined8 local_108;
   long local_100;
   long local_f8;
   long local_f0[5];
   int local_c8;
   undefined4 uStack_c4;
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
   plVar5 = *(long**)( in_RSI + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)in_RDI = 0;
   if (plVar5 != (long*)0x0) {
      local_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar5 + 0x60 ) )(local_58, plVar5, in_RSI + 0x2a8, 0, 0, &local_c8);
      if (local_c8 == 0) {
         Variant::operator_cast_to_String((Variant*)&local_f8);
         if (*(long*)in_RDI != local_f8) {
            CowData<char32_t>::_unref(in_RDI);
            lVar4 = local_f8;
            local_f8 = 0;
            *(long*)in_RDI = lVar4;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00103b6d;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( in_RSI + 8 ) != 0 ) && ( *(char*)( in_RSI + 0x2b0 ) == '\0' )) {
      local_c8 = 0;
      uStack_c4 = 0;
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
      String::parse_latin1((String*)&local_c8, "_get_options_tooltip");
      local_90 = CONCAT44(local_90._4_4_, 0xc);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
      local_70 = local_70 & 0xffffffff00000000;
      uVar2 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long*)( in_RSI + 8 );
      *(undefined8*)( in_RSI + 0x2b8 ) = 0;
      pcVar6 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "EditorExportPlatformExtension");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar4 = local_100 != 0 )) goto LAB_00103e0f;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_00103e24:lVar4 = *(long*)( in_RSI + 8 );
            pcVar6 = *(code**)( lVar4 + 200 );
            if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_00103d61;
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), in_RSI + 0x2a8);
            *(undefined8*)( in_RSI + 0x2b8 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_00103e0f:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar4 == 0) goto LAB_00103e24;
         }

         lVar4 = *(long*)( in_RSI + 8 );
      }
 else {
         uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), in_RSI + 0x2a8, uVar2);
         *(undefined8*)( in_RSI + 0x2b8 ) = uVar3;
         lVar4 = *(long*)( in_RSI + 8 );
      }

      LAB_00103d61:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = in_RSI + 0x2b8;
         plVar5[1] = in_RSI + 0x2b0;
         plVar5[2] = *(long*)( in_RSI + 0x168 );
         *(long**)( in_RSI + 0x168 ) = plVar5;
      }

      *(undefined1*)( in_RSI + 0x2b0 ) = 1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   }

   pcVar6 = *(code**)( in_RSI + 0x2b8 );
   if (pcVar6 == (code*)0x0) goto LAB_00103b6d;
   local_f8 = 0;
   pcVar1 = *(code**)( *(long*)( in_RSI + 8 ) + 0xe0 );
   if (pcVar1 == (code*)0x0) {
      ( *pcVar6 )(*(undefined8*)( in_RSI + 0x10 ), 0, (CowData<char32_t>*)&local_f8);
      local_c8 = 0;
      uStack_c4 = 0;
      lVar4 = local_f8;
      if (local_f8 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_f8);
         lVar4 = CONCAT44(uStack_c4, local_c8);
      }

      if (lVar4 != *(long*)in_RDI) goto LAB_00103b49;
   }
 else {
      ( *pcVar1 )(*(undefined8*)( in_RSI + 0x10 ), in_RSI + 0x2a8, pcVar6, 0, (CowData<char32_t>*)&local_f8);
      local_c8 = 0;
      uStack_c4 = 0;
      lVar4 = local_f8;
      if (local_f8 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_f8);
         lVar4 = CONCAT44(uStack_c4, local_c8);
      }

      if (*(long*)in_RDI != lVar4) {
         LAB_00103b49:CowData<char32_t>::_unref(in_RDI);
         *(long*)in_RDI = lVar4;
         local_c8 = 0;
         uStack_c4 = 0;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   LAB_00103b6d:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* EditorExportPlatformExtension::cleanup() */void EditorExportPlatformExtension::cleanup(EditorExportPlatformExtension *this) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   undefined8 local_e8;
   long local_e0;
   StringName local_d8[8];
   long local_d0;
   int local_c8[4];
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar4 == (long*)0x0) {
      LAB_00103f6b:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x328] == (EditorExportPlatformExtension)0x0 )) {
         local_c8[0] = 0;
         local_c8[1] = 0;
         local_b8 = (undefined1[16])0x0;
         local_c8[2] = 0;
         local_c8[3] = 0;
         local_a8 = 0;
         local_a0 = 0;
         local_98 = 6;
         local_90 = 1;
         local_88 = 0;
         local_78 = 0;
         local_70 = 0;
         local_60 = 0;
         String::parse_latin1((String*)local_c8, "_cleanup");
         local_90 = CONCAT44(local_90._4_4_, 8);
         uVar1 = MethodInfo::get_compatibility_hash();
         lVar3 = *(long*)( this + 8 );
         *(undefined8*)( this + 0x330 ) = 0;
         UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd8 );
         if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) {
            local_e8 = 0;
            String::parse_latin1((String*)&local_e8, "EditorExportPlatformExtension");
            StringName::StringName((StringName*)&local_e0, (String*)&local_e8, false);
            ClassDB::get_virtual_method_compatibility_hashes(local_d8, (StringName*)&local_e0);
            if (local_d0 == 0) {
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( lVar3 = local_e0 != 0 )) goto LAB_001041b7;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               LAB_001041cc:lVar3 = *(long*)( this + 8 );
               UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 200 );
               if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xc0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) goto LAB_00104109;
               uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 800);
               *(undefined8*)( this + 0x330 ) = uVar2;
            }
 else {
               lVar3 = *(long*)( local_d0 + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
                  LAB_001041b7:StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               if (lVar3 == 0) goto LAB_001041cc;
            }

            lVar3 = *(long*)( this + 8 );
         }
 else {
            uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 800, uVar1);
            *(undefined8*)( this + 0x330 ) = uVar2;
            lVar3 = *(long*)( this + 8 );
         }

         LAB_00104109:if (*(char*)( lVar3 + 0x29 ) != '\0') {
            plVar4 = (long*)operator_new(0x18, "");
            *plVar4 = (long)( this + 0x330 );
            plVar4[1] = (long)( this + 0x328 );
            plVar4[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar4;
         }

         this[0x328] = (EditorExportPlatformExtension)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)local_c8);
      }

      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x330 );
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010402c. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( this + 0x10 ), 0, 0);
               return;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00103fcd. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 800, UNRECOVERED_JUMPTABLE, 0, 0);
            return;
         }

         goto LAB_0010423f;
      }

   }
 else {
      for (int i = 0; i < 3; i++) {
         local_c8[i] = 0;
      }

      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, this + 800, 0, 0, local_c8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_c8[0] != 0) goto LAB_00103f6b;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010423f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* EditorExportPlatformExtension::get_platform_features(List<String, DefaultAllocator>*) const */void EditorExportPlatformExtension::get_platform_features(EditorExportPlatformExtension *this, List *param_1) {
   undefined4 uVar1;
   undefined1(*pauVar2)[16];
   CowData<char32_t> *this_00;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   CowData *pCVar7;
   CowData *pCVar8;
   long in_FS_OFFSET;
   CowData<char32_t> local_138[8];
   CowData<char32_t> local_130[8];
   undefined8 local_128;
   String local_120[8];
   undefined8 local_118;
   long local_110[2];
   CowData *local_100;
   int local_f8[2];
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   char *local_c8;
   CowData *local_c0;
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
   plVar5 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_100 = (CowData*)0x0;
   if (plVar5 == (long*)0x0) {
      LAB_0010432b:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x448] == (EditorExportPlatformExtension)0x0 )) {
         local_c8 = (undefined*)0x0;
         local_b8 = (undefined1[16])0x0;
         local_c0 = (CowData*)0x0;
         local_a8 = 0;
         local_a0 = 0;
         local_98 = 6;
         local_90 = 1;
         local_88 = 0;
         local_78 = 0;
         local_70 = 0;
         local_60 = 0;
         String::parse_latin1((String*)&local_c8, "_get_platform_features");
         local_90 = CONCAT44(local_90._4_4_, 0x8c);
         GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void>*)local_f8);
         PropertyInfo::operator =((PropertyInfo*)&local_c0, (PropertyInfo*)local_f8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)local_f8);
         local_70 = local_70 & 0xffffffff00000000;
         uVar1 = MethodInfo::get_compatibility_hash();
         lVar4 = *(long*)( this + 8 );
         *(undefined8*)( this + 0x450 ) = 0;
         pcVar6 = *(code**)( lVar4 + 0xd8 );
         if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
            local_118 = 0;
            String::parse_latin1((String*)&local_118, "EditorExportPlatformExtension");
            StringName::StringName((StringName*)local_110, (String*)&local_118, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_f8, (StringName*)local_110);
            if (CONCAT44(uStack_ec, uStack_f0) == 0) {
               lVar4 = 0;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&uStack_f0);
               if (StringName::configured != '\0') goto LAB_001048f7;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
               LAB_00104914:lVar4 = *(long*)( this + 8 );
               pcVar6 = *(code**)( lVar4 + 200 );
               if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_0010484e;
               uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x440);
               *(undefined8*)( this + 0x450 ) = uVar3;
            }
 else {
               lVar4 = *(long*)( CONCAT44(uStack_ec, uStack_f0) + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&uStack_f0);
               if (StringName::configured != '\0') {
                  LAB_001048f7:if (local_110[0] != 0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
               if (lVar4 == 0) goto LAB_00104914;
            }

            lVar4 = *(long*)( this + 8 );
         }
 else {
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x440, uVar1);
            *(undefined8*)( this + 0x450 ) = uVar3;
            lVar4 = *(long*)( this + 8 );
         }

         LAB_0010484e:if (*(char*)( lVar4 + 0x29 ) != '\0') {
            plVar5 = (long*)operator_new(0x18, "");
            *plVar5 = (long)( this + 0x450 );
            plVar5[1] = (long)( this + 0x448 );
            plVar5[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar5;
         }

         this[0x448] = (EditorExportPlatformExtension)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
      }

      pcVar6 = *(code**)( this + 0x450 );
      if (pcVar6 == (code*)0x0) {
         if (_gdvirtual__get_platform_features_call(Vector<String> & ::first_print != '\0') {
            local_f8[0] = 0;
            local_f8[1] = 0;
            local_c8 = " must be overridden before calling.";
            local_c0 = (CowData*)0x23;
            String::parse_latin1((StrRange*)local_f8);
            local_118 = 0;
            local_c8 = "_get_platform_features";
            local_c0 = (CowData*)0x16;
            String::parse_latin1((StrRange*)&local_118);
            local_128 = 0;
            local_c8 = "::";
            local_c0 = (CowData*)0x2;
            String::parse_latin1((StrRange*)&local_128);
            ( **(code**)( *(long*)this + 0x48 ) )(local_138, this);
            operator+((char *)
            local_130,(String*)"Required virtual method ";
            String::operator +(local_120, (String*)local_130);
            String::operator +((String*)local_110, local_120);
            String::operator +((String*)&local_c8, (String*)local_110);
            _err_print_error("_gdvirtual__get_platform_features_call", "editor/export/editor_export_platform_extension.h", 0x92, (String*)&local_c8, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_120);
            CowData<char32_t>::_unref(local_130);
            CowData<char32_t>::_unref(local_138);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_f8);
            _gdvirtual__get_platform_features_call(Vector<String>&)::first_print =
            '\0';
         }

         goto LAB_001044ca;
      }

      uStack_f0 = 0;
      uStack_ec = 0;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar6 )(*(undefined8*)( this + 0x10 ), 0, local_f8);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x440, pcVar6, 0, local_f8);
      }

      local_c0 = (CowData*)0x0;
      CowData<String>::_ref((CowData<String>*)&local_c0, (CowData*)&uStack_f0);
      pCVar7 = local_c0;
      if (local_c0 != (CowData*)0x0) {
         CowData<String>::_unref((CowData<String>*)&local_100);
         local_100 = pCVar7;
         local_c0 = (CowData*)0x0;
      }

      CowData<String>::_unref((CowData<String>*)&local_c0);
      CowData<String>::_unref((CowData<String>*)&uStack_f0);
   }
 else {
      local_f8[0] = 0;
      local_f8[1] = 0;
      uStack_f0 = 0;
      ( **(code**)( *plVar5 + 0x60 ) )(local_58, plVar5, this + 0x440, 0, 0, local_f8);
      if (local_f8[0] != 0) {
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010432b;
      }

      Variant::operator_cast_to_Vector((Variant*)&local_c8);
      if (local_c0 != (CowData*)0x0) {
         CowData<String>::_unref((CowData<String>*)&local_100);
         local_100 = local_c0;
         local_c0 = (CowData*)0x0;
      }

      CowData<String>::_unref((CowData<String>*)&local_c0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (param_1 != (List*)0x0) {
      CowData<String>::_copy_on_write((CowData<String>*)&local_100);
      pCVar8 = local_100;
      CowData<String>::_copy_on_write((CowData<String>*)&local_100);
      pCVar7 = local_100;
      if (local_100 != (CowData*)0x0) {
         pCVar7 = local_100 + *(long*)( local_100 + -8 ) * 8;
      }

      if (pCVar8 != pCVar7) {
         if (*(long*)param_1 == 0) {
            pauVar2 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])param_1 = pauVar2;
            *(undefined4*)pauVar2[1] = 0;
            *pauVar2 = (undefined1[16])0x0;
         }

         do {
            this_00 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
            *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
            *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
            if (*(long*)pCVar8 != 0) {
               CowData<char32_t>::_ref(this_00, pCVar8);
            }

            plVar5 = *(long**)param_1;
            lVar4 = plVar5[1];
            *(undefined8*)( this_00 + 8 ) = 0;
            *(long**)( this_00 + 0x18 ) = plVar5;
            *(long*)( this_00 + 0x10 ) = lVar4;
            if (lVar4 != 0) {
               *(CowData<char32_t>**)( lVar4 + 8 ) = this_00;
            }

            plVar5[1] = (long)this_00;
            if (*plVar5 == 0) {
               *plVar5 = (long)this_00;
            }

            pCVar8 = pCVar8 + 8;
            *(int*)( plVar5 + 2 ) = (int)plVar5[2] + 1;
         }
 while ( pCVar7 != pCVar8 );
      }

   }

   LAB_001044ca:CowData<String>::_unref((CowData<String>*)&local_100);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* EditorExportPlatformExtension::get_debug_protocol() const */void EditorExportPlatformExtension::get_debug_protocol(void) {
   code *pcVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   long in_RSI;
   StrRange *in_RDI;
   long lVar7;
   long in_FS_OFFSET;
   long local_110;
   undefined8 local_108;
   long local_100;
   long local_f8;
   long local_f0[5];
   int local_c8;
   undefined4 uStack_c4;
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
   plVar5 = *(long**)( in_RSI + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_110 = 0;
   if (plVar5 == (long*)0x0) {
      LAB_00104a73:if (( *(long*)( in_RSI + 8 ) != 0 ) && ( *(char*)( in_RSI + 0x460 ) == '\0' )) {
         local_b8 = (undefined1[16])0x0;
         local_c8 = 0;
         uStack_c4 = 0;
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
         String::parse_latin1((String*)&local_c8, "_get_debug_protocol");
         local_90 = CONCAT44(local_90._4_4_, 0xc);
         GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_f8);
         PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)&local_f8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
         local_70 = local_70 & 0xffffffff00000000;
         uVar2 = MethodInfo::get_compatibility_hash();
         lVar4 = *(long*)( in_RSI + 8 );
         *(undefined8*)( in_RSI + 0x468 ) = 0;
         pcVar6 = *(code**)( lVar4 + 0xd8 );
         if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
            local_108 = 0;
            String::parse_latin1((String*)&local_108, "EditorExportPlatformExtension");
            StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_f8, (StringName*)&local_100);
            if (local_f0[0] == 0) {
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
               if (( StringName::configured != '\0' ) && ( lVar4 = local_100 != 0 )) goto LAB_00104def;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
               LAB_00104e04:lVar4 = *(long*)( in_RSI + 8 );
               pcVar6 = *(code**)( lVar4 + 200 );
               if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_00104d3a;
               uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), in_RSI + 0x458);
               *(undefined8*)( in_RSI + 0x468 ) = uVar3;
            }
 else {
               lVar4 = *(long*)( local_f0[0] + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
               if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
                  LAB_00104def:StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
               if (lVar4 == 0) goto LAB_00104e04;
            }

            lVar4 = *(long*)( in_RSI + 8 );
         }
 else {
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), in_RSI + 0x458, uVar2);
            *(undefined8*)( in_RSI + 0x468 ) = uVar3;
            lVar4 = *(long*)( in_RSI + 8 );
         }

         LAB_00104d3a:if (*(char*)( lVar4 + 0x29 ) != '\0') {
            plVar5 = (long*)operator_new(0x18, "");
            *plVar5 = in_RSI + 0x468;
            plVar5[1] = in_RSI + 0x460;
            plVar5[2] = *(long*)( in_RSI + 0x168 );
            *(long**)( in_RSI + 0x168 ) = plVar5;
         }

         *(undefined1*)( in_RSI + 0x460 ) = 1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
      }

      pcVar6 = *(code**)( in_RSI + 0x468 );
      if (pcVar6 == (code*)0x0) {
         *(undefined8*)in_RDI = 0;
         local_c8 = 0x1135f1;
         uStack_c4 = 0;
         uStack_c0 = 6;
         uStack_bc = 0;
         String::parse_latin1(in_RDI);
         goto LAB_00104b1a;
      }

      local_f8 = 0;
      pcVar1 = *(code**)( *(long*)( in_RSI + 8 ) + 0xe0 );
      if (pcVar1 == (code*)0x0) {
         ( *pcVar6 )(*(undefined8*)( in_RSI + 0x10 ), 0, (CowData<char32_t>*)&local_f8);
         local_c8 = 0;
         uStack_c4 = 0;
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_f8);
         lVar4 = CONCAT44(uStack_c4, local_c8);
         lVar7 = local_110;
         joined_r0x00104ba3:local_110 = lVar7;
         if (lVar4 != 0) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
            local_c8 = 0;
            uStack_c4 = 0;
            lVar7 = lVar4;
         }

      }
 else {
         ( *pcVar1 )(*(undefined8*)( in_RSI + 0x10 ), in_RSI + 0x458, pcVar6, 0, (CowData<char32_t>*)&local_f8);
         local_c8 = 0;
         uStack_c4 = 0;
         lVar7 = local_110;
         if (local_f8 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_f8);
            lVar4 = CONCAT44(uStack_c4, local_c8);
            lVar7 = local_110;
            goto joined_r0x00104ba3;
         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   }
 else {
      local_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar5 + 0x60 ) )(local_58, plVar5, in_RSI + 0x458, 0, 0, &local_c8);
      if (local_c8 != 0) {
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00104a73;
      }

      Variant::operator_cast_to_String((Variant*)&local_f8);
      lVar7 = local_f8;
      if (local_f8 != 0) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
         lVar7 = local_f8;
         local_f8 = 0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   *(long*)in_RDI = lVar7;
   LAB_00104b1a:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorExportPlatformExtension::get_run_icon() const */void EditorExportPlatformExtension::get_run_icon(void) {
   char cVar1;
   undefined4 uVar2;
   Object *pOVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   Object *pOVar7;
   long *in_RSI;
   undefined8 *in_RDI;
   long in_FS_OFFSET;
   undefined8 local_108;
   long local_100;
   GetTypeInfo<Ref<Texture2D>,void> local_f8[8];
   long local_f0[5];
   int local_c8;
   undefined4 uStack_c4;
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
   plVar5 = (long*)in_RSI[0x13];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar5 == (long*)0x0) {
      LAB_00104f52:if (( in_RSI[1] != 0 ) && ( (char)in_RSI[0x6b] == '\0' )) {
         local_c8 = 0;
         uStack_c4 = 0;
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
         String::parse_latin1((String*)&local_c8, "_get_run_icon");
         local_90 = CONCAT44(local_90._4_4_, 0xc);
         GetTypeInfo<Ref<Texture2D>,void>::get_class_info(local_f8);
         PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)local_f8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)local_f8);
         local_70 = local_70 & 0xffffffff00000000;
         uVar2 = MethodInfo::get_compatibility_hash();
         lVar4 = in_RSI[1];
         in_RSI[0x6c] = 0;
         pcVar6 = *(code**)( lVar4 + 0xd8 );
         if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
            local_108 = 0;
            String::parse_latin1((String*)&local_108, "EditorExportPlatformExtension");
            StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_f8, (StringName*)&local_100);
            if (local_f0[0] == 0) {
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
               if (( StringName::configured != '\0' ) && ( lVar4 = local_100 != 0 )) goto LAB_0010541a;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
               LAB_0010542f:lVar4 = in_RSI[1];
               pcVar6 = *(code**)( lVar4 + 200 );
               if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_00105335;
               lVar4 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ));
               in_RSI[0x6c] = lVar4;
            }
 else {
               lVar4 = *(long*)( local_f0[0] + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
               if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
                  LAB_0010541a:StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
               if (lVar4 == 0) goto LAB_0010542f;
            }

            lVar4 = in_RSI[1];
         }
 else {
            lVar4 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), in_RSI + 0x6a, uVar2);
            in_RSI[0x6c] = lVar4;
            lVar4 = in_RSI[1];
         }

         LAB_00105335:if (*(char*)( lVar4 + 0x29 ) != '\0') {
            plVar5 = (long*)operator_new(0x18, "");
            *plVar5 = (long)( in_RSI + 0x6c );
            plVar5[1] = (long)( in_RSI + 0x6b );
            plVar5[2] = in_RSI[0x2d];
            in_RSI[0x2d] = (long)plVar5;
         }

         *(undefined1*)( in_RSI + 0x6b ) = 1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
      }

      pcVar6 = (code*)in_RSI[0x6c];
      if (pcVar6 == (code*)0x0) {
         ( **(code**)( *in_RSI + 0x1e8 ) )();
         goto LAB_0010505f;
      }

      local_c8 = 0;
      uStack_c4 = 0;
      if (*(code**)( in_RSI[1] + 0xe0 ) == (code*)0x0) {
         ( *pcVar6 )(in_RSI[2], 0, &local_c8);
         pOVar3 = (Object*)CONCAT44(uStack_c4, local_c8);
         if (pOVar3 != (Object*)0x0) {
            cVar1 = RefCounted::reference();
            if (cVar1 == '\0') goto LAB_00105090;
            cVar1 = RefCounted::reference();
            pOVar7 = (Object*)0x0;
            if (cVar1 != '\0') {
               pOVar7 = pOVar3;
            }

            cVar1 = RefCounted::unreference();
            joined_r0x001051df:if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
               ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
               Memory::free_static(pOVar3, false);
            }

            if (CONCAT44(uStack_c4, local_c8) != 0) {
               LAB_00104fe9:cVar1 = RefCounted::unreference();
               if (cVar1 != '\0') {
                  pOVar3 = (Object*)CONCAT44(uStack_c4, local_c8);
                  cVar1 = predelete_handler(pOVar3);
                  if (cVar1 != '\0') {
                     ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                     Memory::free_static(pOVar3, false);
                  }

               }

            }

            goto LAB_00104ff6;
         }

      }
 else {
         ( **(code**)( in_RSI[1] + 0xe0 ) )(in_RSI[2], in_RSI + 0x6a, pcVar6, 0, &local_c8);
         pOVar3 = (Object*)CONCAT44(uStack_c4, local_c8);
         if (pOVar3 != (Object*)0x0) {
            cVar1 = RefCounted::reference();
            if (cVar1 != '\0') {
               cVar1 = RefCounted::reference();
               pOVar7 = (Object*)0x0;
               if (cVar1 != '\0') {
                  pOVar7 = pOVar3;
               }

               cVar1 = RefCounted::unreference();
               goto joined_r0x001051df;
            }

            LAB_00105090:pOVar7 = (Object*)0x0;
            if (CONCAT44(uStack_c4, local_c8) != 0) goto LAB_00104fe9;
         }

      }

   }
 else {
      local_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar5 + 0x60 ) )(local_58, plVar5, in_RSI + 0x6a, 0, 0, &local_c8);
      if (local_c8 != 0) {
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00104f52;
      }

      lVar4 = Variant::get_validated_object();
      if (( ( lVar4 == 0 ) || ( pOVar3 = (Object*)__dynamic_cast(lVar4, &Object::typeinfo, &Texture2D::typeinfo, 0) ),pOVar3 == (Object*)0x0 )) {
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_001050a0;
      }

      cVar1 = RefCounted::reference();
      pOVar7 = (Object*)0x0;
      if (cVar1 != '\0') {
         pOVar7 = pOVar3;
      }

      cVar1 = RefCounted::unreference();
      if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
         ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
         Memory::free_static(pOVar3, false);
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      LAB_00104ff6:if (pOVar7 != (Object*)0x0) {
         *in_RDI = pOVar7;
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *in_RDI = 0;
         }

         cVar1 = RefCounted::unreference();
         if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
            ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
            Memory::free_static(pOVar7, false);
         }

         goto LAB_0010505f;
      }

   }

   LAB_001050a0:*in_RDI = 0;
   LAB_0010505f:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* EditorExportPlatformExtension::_bind_methods() */void EditorExportPlatformExtension::_bind_methods(void) {
   long lVar1;
   code *pcVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined8 uVar7;
   MethodBind *pMVar8;
   long *plVar9;
   long lVar10;
   long in_FS_OFFSET;
   StringName *local_150;
   long local_138;
   long local_130;
   long local_128;
   long local_120;
   Vector local_118[8];
   undefined8 local_110;
   char *local_108;
   undefined8 local_100;
   long local_f8;
   int local_f0;
   undefined8 local_e8;
   undefined4 local_e0;
   char *local_d8;
   undefined8 local_d0;
   undefined1 local_c8[16];
   undefined8 local_b8;
   undefined8 local_b0;
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98[2];
   undefined8 local_88;
   ulong local_80;
   Vector<int> local_78[8];
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   char **local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = 0;
   local_68 = "error_text";
   local_58 = &local_68;
   D_METHODP((char*)&local_d8, (char***)"set_config_error", ( uint ) & local_58);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar8 = create_method_bind<EditorExportPlatformExtension,String_const&>(set_config_error);
   ClassDB::bind_methodfi(1, pMVar8, false, (MethodDefinition*)&local_d8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   uVar7 = local_c8._0_8_;
   if ((long*)local_c8._0_8_ != (long*)0x0) {
      LOCK();
      plVar9 = (long*)( local_c8._0_8_ + -0x10 );
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
         if ((long*)local_c8._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_c8._0_8_ + -8 );
         lVar10 = 0;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_c8._8_8_;
         local_c8 = auVar3 << 0x40;
         plVar9 = (long*)uVar7;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar9 != 0 )) {
                  StringName::unref();
               }

               lVar10 = lVar10 + 1;
               plVar9 = plVar9 + 1;
            }
 while ( lVar1 != lVar10 );
         }

         Memory::free_static((long*)( uVar7 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_d8, (char***)"get_config_error", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar8 = create_method_bind<EditorExportPlatformExtension,String>(get_config_error);
   ClassDB::bind_methodfi(1, pMVar8, false, (MethodDefinition*)&local_d8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   uVar7 = local_c8._0_8_;
   if ((long*)local_c8._0_8_ != (long*)0x0) {
      LOCK();
      plVar9 = (long*)( local_c8._0_8_ + -0x10 );
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
         if ((long*)local_c8._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_c8._0_8_ + -8 );
         lVar10 = 0;
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_c8._8_8_;
         local_c8 = auVar4 << 0x40;
         plVar9 = (long*)uVar7;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar9 != 0 )) {
                  StringName::unref();
               }

               lVar10 = lVar10 + 1;
               plVar9 = plVar9 + 1;
            }
 while ( lVar1 != lVar10 );
         }

         Memory::free_static((long*)( uVar7 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_68 = "missing_templates";
   local_60 = 0;
   local_58 = &local_68;
   D_METHODP((char*)&local_d8, (char***)"set_config_missing_templates", ( uint ) & local_58);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar8 = create_method_bind<EditorExportPlatformExtension,bool>(set_config_missing_templates);
   ClassDB::bind_methodfi(1, pMVar8, false, (MethodDefinition*)&local_d8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   uVar7 = local_c8._0_8_;
   if ((long*)local_c8._0_8_ != (long*)0x0) {
      LOCK();
      plVar9 = (long*)( local_c8._0_8_ + -0x10 );
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
         if ((long*)local_c8._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_c8._0_8_ + -8 );
         lVar10 = 0;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = local_c8._8_8_;
         local_c8 = auVar5 << 0x40;
         plVar9 = (long*)uVar7;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar9 != 0 )) {
                  StringName::unref();
               }

               lVar10 = lVar10 + 1;
               plVar9 = plVar9 + 1;
            }
 while ( lVar1 != lVar10 );
         }

         Memory::free_static((long*)( uVar7 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_d8, (char***)"get_config_missing_templates", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar8 = create_method_bind<EditorExportPlatformExtension,bool>(get_config_missing_templates);
   ClassDB::bind_methodfi(1, pMVar8, false, (MethodDefinition*)&local_d8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   uVar7 = local_c8._0_8_;
   if ((long*)local_c8._0_8_ != (long*)0x0) {
      LOCK();
      plVar9 = (long*)( local_c8._0_8_ + -0x10 );
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
         if ((long*)local_c8._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_c8._0_8_ + -8 );
         lVar10 = 0;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = local_c8._8_8_;
         local_c8 = auVar6 << 0x40;
         plVar9 = (long*)uVar7;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar9 != 0 )) {
                  StringName::unref();
               }

               lVar10 = lVar10 + 1;
               plVar9 = plVar9 + 1;
            }
 while ( lVar1 != lVar10 );
         }

         Memory::free_static((long*)( uVar7 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_110 = 0;
   local_108 = (char*)0x0;
   local_d8 = "preset";
   local_d0 = 6;
   String::parse_latin1((StrRange*)&local_108);
   local_d8 = (char*)0x0;
   if (local_108 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_108);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_get_preset_features";
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100 = 0x14;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 0x8c);
   GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void>*)&local_108);
   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_80 = local_80 & 0xffffffff00000000;
   GetTypeInfo<Ref<EditorExportPreset>,void>::get_class_info((GetTypeInfo<Ref<EditorExportPreset>,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   local_108 = "EditorExportPlatformExtension";
   local_120 = 0;
   local_100 = 0x1d;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (String*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_110 = 0;
   local_108 = (char*)0x0;
   local_d8 = "path";
   local_d0 = 4;
   String::parse_latin1((StrRange*)&local_108);
   local_d8 = (char*)0x0;
   if (local_108 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_108);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_is_executable";
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100 = 0xe;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 0xc);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_108);
   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_80 = local_80 & 0xffffffff00000000;
   GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   local_108 = "EditorExportPlatformExtension";
   local_120 = 0;
   local_100 = 0x1d;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (String*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_get_export_options";
   local_110 = 0;
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100 = 0x13;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 0xc);
   local_138 = 0;
   Variant::get_type_name((CowData*)&local_130, 0x1b);
   local_128 = 0;
   local_108 = (char*)CONCAT44(local_108._4_4_, 0x1c);
   local_100 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_100, (CowData*)&local_128);
   local_f8 = 0;
   local_f0 = 0x1f;
   local_e8 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_e8, (CowData*)&local_130);
   local_e0 = 6;
   if (local_f0 == 0x11) {
      StringName::StringName((StringName*)&local_120, (String*)&local_e8, false);
      if (local_f8 == local_120) {
         if (( StringName::configured != '\0' ) && ( local_120 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_f8 = local_120;
      }

   }
 else {
      StringName::operator =((StringName*)&local_f8, (StringName*)&local_138);
   }

   local_150 = (StringName*)&local_138;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   if (( StringName::configured != '\0' ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_108 = "EditorExportPlatformExtension";
   local_80 = local_80 & 0xffffffff00000000;
   local_120 = 0;
   local_100 = 0x1d;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (String*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_should_update_export_options";
   local_110 = 0;
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100 = 0x1d;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 8);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_108);
   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_108 = "EditorExportPlatformExtension";
   local_80 = local_80 & 0xffffffff00000000;
   local_120 = 0;
   local_100 = 0x1d;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (String*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_110 = 0;
   local_108 = (char*)0x0;
   local_d8 = "preset";
   local_d0 = 6;
   String::parse_latin1((StrRange*)&local_108);
   local_d8 = (char*)0x0;
   if (local_108 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_108);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_120 = 0;
   local_d8 = "option";
   local_d0 = 6;
   String::parse_latin1((StrRange*)&local_120);
   local_d8 = (char*)0x0;
   if (local_120 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_120);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_get_export_option_visibility";
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100 = 0x1d;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 0xc);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_108);
   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_80 = local_80 & 0xffffffff00000000;
   GetTypeInfo<Ref<EditorExportPreset>,void>::get_class_info((GetTypeInfo<Ref<EditorExportPreset>,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   local_108 = "EditorExportPlatformExtension";
   local_120 = 0;
   local_100 = 0x1d;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (String*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_110 = 0;
   local_108 = (char*)0x0;
   local_d8 = "preset";
   local_d0 = 6;
   String::parse_latin1((StrRange*)&local_108);
   local_d8 = (char*)0x0;
   if (local_108 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_108);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_120 = 0;
   local_d8 = "option";
   local_d0 = 6;
   String::parse_latin1((StrRange*)&local_120);
   local_d8 = (char*)0x0;
   if (local_120 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_120);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_get_export_option_warning";
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100 = 0x1a;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 0xc);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_108);
   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_80 = local_80 & 0xffffffff00000000;
   GetTypeInfo<Ref<EditorExportPreset>,void>::get_class_info((GetTypeInfo<Ref<EditorExportPreset>,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   local_108 = "";
   local_138 = 0;
   local_130 = 0;
   local_100 = 0;
   String::parse_latin1((StrRange*)&local_130);
   local_128 = 0;
   local_108 = (char*)CONCAT44(local_108._4_4_, 0x15);
   local_100 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_100, (CowData*)&local_128);
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_e8, (CowData*)&local_130);
   local_e0 = 6;
   if (local_f0 == 0x11) {
      StringName::StringName((StringName*)&local_120, (String*)&local_e8, false);
      if (local_f8 == local_120) {
         if (( StringName::configured != '\0' ) && ( local_120 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_f8 = local_120;
      }

   }
 else {
      StringName::operator =((StringName*)&local_f8, local_150);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   if (( StringName::configured != '\0' ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   local_108 = "EditorExportPlatformExtension";
   local_120 = 0;
   local_100 = 0x1d;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (String*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_get_os_name";
   local_110 = 0;
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100 = 0xc;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 0x8c);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_108);
   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_108 = "EditorExportPlatformExtension";
   local_80 = local_80 & 0xffffffff00000000;
   local_120 = 0;
   local_100 = 0x1d;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (String*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_get_name";
   local_110 = 0;
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100 = 9;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 0x8c);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_108);
   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_108 = "EditorExportPlatformExtension";
   local_80 = local_80 & 0xffffffff00000000;
   local_120 = 0;
   local_100 = 0x1d;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (String*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_get_logo";
   local_110 = 0;
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100 = 9;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 0x8c);
   GetTypeInfo<Ref<Texture2D>,void>::get_class_info((GetTypeInfo<Ref<Texture2D>,void>*)&local_108);
   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_108 = "EditorExportPlatformExtension";
   local_80 = local_80 & 0xffffffff00000000;
   local_120 = 0;
   local_100 = 0x1d;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (String*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_poll_export";
   local_110 = 0;
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100 = 0xc;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 8);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_108);
   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_108 = "EditorExportPlatformExtension";
   local_80 = local_80 & 0xffffffff00000000;
   local_120 = 0;
   local_100 = 0x1d;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (String*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_get_options_count";
   local_110 = 0;
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100 = 0x12;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 0xc);
   GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_108);
   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_108 = "EditorExportPlatformExtension";
   local_80 = CONCAT44(local_80._4_4_, 3);
   local_120 = 0;
   local_100 = 0x1d;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (String*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_get_options_tooltip";
   local_110 = 0;
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100 = 0x14;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 0xc);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_108);
   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_108 = "EditorExportPlatformExtension";
   local_80 = local_80 & 0xffffffff00000000;
   local_120 = 0;
   local_100 = 0x1d;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (String*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_110 = 0;
   local_108 = (char*)0x0;
   local_d8 = "device";
   local_d0 = 6;
   String::parse_latin1((StrRange*)&local_108);
   local_d8 = (char*)0x0;
   if (local_108 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_108);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_get_option_icon";
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100 = 0x10;
   String::parse_latin1((StrRange*)&local_d8);
   local_108 = "ImageTexture";
   local_a0 = CONCAT44(local_a0._4_4_, 0xc);
   local_138 = 0;
   local_130 = 0;
   local_100 = 0xc;
   String::parse_latin1((StrRange*)&local_130);
   local_128 = 0;
   local_108 = (char*)CONCAT44(local_108._4_4_, 0x18);
   local_100 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_100, (CowData*)&local_128);
   local_f8 = 0;
   local_f0 = 0x11;
   local_e8 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_e8, (CowData*)&local_130);
   local_e0 = 6;
   if (local_f0 == 0x11) {
      StringName::StringName((StringName*)&local_120, (String*)&local_e8, false);
      if (local_f8 == local_120) {
         if (( StringName::configured != '\0' ) && ( local_120 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_f8 = local_120;
      }

   }
 else {
      StringName::operator =((StringName*)&local_f8, local_150);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   if (( StringName::configured != '\0' ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_80 = local_80 & 0xffffffff00000000;
   GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 3);
   local_108 = "EditorExportPlatformExtension";
   local_120 = 0;
   local_100 = 0x1d;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (String*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_110 = 0;
   local_108 = (char*)0x0;
   local_d8 = "device";
   local_d0 = 6;
   String::parse_latin1((StrRange*)&local_108);
   local_d8 = (char*)0x0;
   if (local_108 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_108);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_get_option_label";
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100 = 0x11;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 0xc);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_108);
   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_80 = local_80 & 0xffffffff00000000;
   GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 3);
   local_108 = "EditorExportPlatformExtension";
   local_120 = 0;
   local_100 = 0x1d;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (String*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_110 = 0;
   local_108 = (char*)0x0;
   local_d8 = "device";
   local_d0 = 6;
   String::parse_latin1((StrRange*)&local_108);
   local_d8 = (char*)0x0;
   if (local_108 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_108);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_get_option_tooltip";
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100 = 0x13;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 0xc);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_108);
   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_80 = local_80 & 0xffffffff00000000;
   GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 3);
   local_108 = "EditorExportPlatformExtension";
   local_120 = 0;
   local_100 = 0x1d;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (String*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_110 = 0;
   local_108 = (char*)0x0;
   local_d8 = "device";
   local_d0 = 6;
   String::parse_latin1((StrRange*)&local_108);
   local_d8 = (char*)0x0;
   if (local_108 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_108);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_get_device_architecture";
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100 = 0x18;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 0xc);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_108);
   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_80 = local_80 & 0xffffffff00000000;
   GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 3);
   local_108 = "EditorExportPlatformExtension";
   local_120 = 0;
   local_100 = 0x1d;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (String*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_cleanup";
   local_110 = 0;
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100 = 8;
   String::parse_latin1((StrRange*)&local_d8);
   local_108 = "EditorExportPlatformExtension";
   local_a0 = CONCAT44(local_a0._4_4_, 8);
   local_120 = 0;
   local_100 = 0x1d;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (String*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_110 = 0;
   local_108 = (char*)0x0;
   local_d8 = "preset";
   local_d0 = 6;
   String::parse_latin1((StrRange*)&local_108);
   local_d8 = (char*)0x0;
   if (local_108 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_108);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_128 = 0;
   local_d8 = "device";
   local_d0 = 6;
   String::parse_latin1((StrRange*)&local_128);
   local_d8 = (char*)0x0;
   if (local_128 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_128);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_120 = 0;
   local_d8 = "debug_flags";
   local_d0 = 0xb;
   String::parse_latin1((StrRange*)&local_120);
   local_d8 = (char*)0x0;
   if (local_120 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_120);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_run";
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100 = 4;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 8);
   GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void>*)&local_108);
   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_80 = local_80 & 0xffffffff00000000;
   GetTypeInfo<Ref<EditorExportPreset>,void>::get_class_info((GetTypeInfo<Ref<EditorExportPreset>,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 3);
   GetTypeInfo<BitField<EditorExportPlatform::DebugFlags>,void>::get_class_info((GetTypeInfo<BitField<EditorExportPlatform::DebugFlags>,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   local_108 = "EditorExportPlatformExtension";
   local_120 = 0;
   local_100 = 0x1d;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (String*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_get_run_icon";
   local_110 = 0;
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100 = 0xd;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 0xc);
   GetTypeInfo<Ref<Texture2D>,void>::get_class_info((GetTypeInfo<Ref<Texture2D>,void>*)&local_108);
   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_108 = "EditorExportPlatformExtension";
   local_80 = local_80 & 0xffffffff00000000;
   local_120 = 0;
   local_100 = 0x1d;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (String*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_110 = 0;
   local_108 = (char*)0x0;
   local_d8 = "preset";
   local_d0 = 6;
   String::parse_latin1((StrRange*)&local_108);
   local_d8 = (char*)0x0;
   if (local_108 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_108);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_120 = 0;
   local_d8 = "debug";
   local_d0 = 5;
   String::parse_latin1((StrRange*)&local_120);
   local_d8 = (char*)0x0;
   if (local_120 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_120);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_can_export";
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100 = 0xb;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 0xc);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_108);
   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_80 = local_80 & 0xffffffff00000000;
   GetTypeInfo<Ref<EditorExportPreset>,void>::get_class_info((GetTypeInfo<Ref<EditorExportPreset>,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   local_108 = "EditorExportPlatformExtension";
   local_120 = 0;
   local_100 = 0x1d;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (String*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_110 = 0;
   local_108 = (char*)0x0;
   local_d8 = "preset";
   local_d0 = 6;
   String::parse_latin1((StrRange*)&local_108);
   local_d8 = (char*)0x0;
   if (local_108 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_108);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_120 = 0;
   local_d8 = "debug";
   local_d0 = 5;
   String::parse_latin1((StrRange*)&local_120);
   local_d8 = (char*)0x0;
   if (local_120 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_120);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_has_valid_export_configuration";
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100 = 0x1f;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 0x8c);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_108);
   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_80 = local_80 & 0xffffffff00000000;
   GetTypeInfo<Ref<EditorExportPreset>,void>::get_class_info((GetTypeInfo<Ref<EditorExportPreset>,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   local_108 = "EditorExportPlatformExtension";
   local_120 = 0;
   local_100 = 0x1d;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (String*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_110 = 0;
   local_108 = (char*)0x0;
   local_d8 = "preset";
   local_d0 = 6;
   String::parse_latin1((StrRange*)&local_108);
   local_d8 = (char*)0x0;
   if (local_108 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_108);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_has_valid_project_configuration";
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100 = 0x20;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 0x8c);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_108);
   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_80 = local_80 & 0xffffffff00000000;
   GetTypeInfo<Ref<EditorExportPreset>,void>::get_class_info((GetTypeInfo<Ref<EditorExportPreset>,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   local_108 = "EditorExportPlatformExtension";
   local_120 = 0;
   local_100 = 0x1d;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (String*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_110 = 0;
   local_108 = (char*)0x0;
   local_d8 = "preset";
   local_d0 = 6;
   String::parse_latin1((StrRange*)&local_108);
   local_d8 = (char*)0x0;
   if (local_108 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_108);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_get_binary_extensions";
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100 = 0x16;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 0x8c);
   GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void>*)&local_108);
   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_80 = local_80 & 0xffffffff00000000;
   GetTypeInfo<Ref<EditorExportPreset>,void>::get_class_info((GetTypeInfo<Ref<EditorExportPreset>,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   local_108 = "EditorExportPlatformExtension";
   local_120 = 0;
   local_100 = 0x1d;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (String*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_110 = 0;
   local_108 = (char*)0x0;
   local_d8 = "preset";
   local_d0 = 6;
   String::parse_latin1((StrRange*)&local_108);
   local_d8 = (char*)0x0;
   if (local_108 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_108);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_130 = 0;
   local_d8 = "debug";
   local_d0 = 5;
   String::parse_latin1((StrRange*)&local_130);
   local_d8 = (char*)0x0;
   if (local_130 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_130);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_120 = 0;
   local_d8 = "path";
   local_d0 = 4;
   String::parse_latin1((StrRange*)&local_120);
   local_d8 = (char*)0x0;
   if (local_120 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_120);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_128 = 0;
   local_d8 = "flags";
   local_d0 = 5;
   String::parse_latin1((StrRange*)&local_128);
   local_d8 = (char*)0x0;
   if (local_128 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_128);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_export_project";
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100 = 0xf;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 0x88);
   GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void>*)&local_108);
   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_80 = local_80 & 0xffffffff00000000;
   GetTypeInfo<Ref<EditorExportPreset>,void>::get_class_info((GetTypeInfo<Ref<EditorExportPreset>,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   GetTypeInfo<BitField<EditorExportPlatform::DebugFlags>,void>::get_class_info((GetTypeInfo<BitField<EditorExportPlatform::DebugFlags>,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   local_108 = "EditorExportPlatformExtension";
   local_120 = 0;
   local_100 = 0x1d;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (String*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_110 = 0;
   local_108 = (char*)0x0;
   local_d8 = "preset";
   local_d0 = 6;
   String::parse_latin1((StrRange*)&local_108);
   local_d8 = (char*)0x0;
   if (local_108 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_108);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_130 = 0;
   local_d8 = "debug";
   local_d0 = 5;
   String::parse_latin1((StrRange*)&local_130);
   local_d8 = (char*)0x0;
   if (local_130 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_130);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_120 = 0;
   local_d8 = "path";
   local_d0 = 4;
   String::parse_latin1((StrRange*)&local_120);
   local_d8 = (char*)0x0;
   if (local_120 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_120);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_128 = 0;
   local_d8 = "flags";
   local_d0 = 5;
   String::parse_latin1((StrRange*)&local_128);
   local_d8 = (char*)0x0;
   if (local_128 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_128);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_export_pack";
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100 = 0xc;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 8);
   GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void>*)&local_108);
   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_80 = local_80 & 0xffffffff00000000;
   GetTypeInfo<Ref<EditorExportPreset>,void>::get_class_info((GetTypeInfo<Ref<EditorExportPreset>,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   GetTypeInfo<BitField<EditorExportPlatform::DebugFlags>,void>::get_class_info((GetTypeInfo<BitField<EditorExportPlatform::DebugFlags>,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   local_108 = "EditorExportPlatformExtension";
   local_120 = 0;
   local_100 = 0x1d;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (String*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_110 = 0;
   local_108 = (char*)0x0;
   local_d8 = "preset";
   local_d0 = 6;
   String::parse_latin1((StrRange*)&local_108);
   local_d8 = (char*)0x0;
   if (local_108 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_108);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_130 = 0;
   local_d8 = "debug";
   local_d0 = 5;
   String::parse_latin1((StrRange*)&local_130);
   local_d8 = (char*)0x0;
   if (local_130 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_130);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_120 = 0;
   local_d8 = "path";
   local_d0 = 4;
   String::parse_latin1((StrRange*)&local_120);
   local_d8 = (char*)0x0;
   if (local_120 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_120);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_128 = 0;
   local_d8 = "flags";
   local_d0 = 5;
   String::parse_latin1((StrRange*)&local_128);
   local_d8 = (char*)0x0;
   if (local_128 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_128);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_export_zip";
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100 = 0xb;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 8);
   GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void>*)&local_108);
   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_80 = local_80 & 0xffffffff00000000;
   GetTypeInfo<Ref<EditorExportPreset>,void>::get_class_info((GetTypeInfo<Ref<EditorExportPreset>,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   GetTypeInfo<BitField<EditorExportPlatform::DebugFlags>,void>::get_class_info((GetTypeInfo<BitField<EditorExportPlatform::DebugFlags>,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   local_108 = "EditorExportPlatformExtension";
   local_120 = 0;
   local_100 = 0x1d;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (String*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_110 = 0;
   local_108 = (char*)0x0;
   local_d8 = "preset";
   local_d0 = 6;
   String::parse_latin1((StrRange*)&local_108);
   local_d8 = (char*)0x0;
   if (local_108 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_108);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_138 = 0;
   local_d8 = "debug";
   local_d0 = 5;
   String::parse_latin1((StrRange*)local_150);
   local_d8 = (char*)0x0;
   if (local_138 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)local_150);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_120 = 0;
   local_d8 = "path";
   local_d0 = 4;
   String::parse_latin1((StrRange*)&local_120);
   local_d8 = (char*)0x0;
   if (local_120 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_120);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_130 = 0;
   local_d8 = "patches";
   local_d0 = 7;
   String::parse_latin1((StrRange*)&local_130);
   local_d8 = (char*)0x0;
   if (local_130 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_130);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_128 = 0;
   local_d8 = "flags";
   local_d0 = 5;
   String::parse_latin1((StrRange*)&local_128);
   local_d8 = (char*)0x0;
   if (local_128 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_128);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_150);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_export_pack_patch";
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100 = 0x12;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 8);
   GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void>*)&local_108);
   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_80 = local_80 & 0xffffffff00000000;
   GetTypeInfo<Ref<EditorExportPreset>,void>::get_class_info((GetTypeInfo<Ref<EditorExportPreset>,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   GetTypeInfo<Vector<String>const&,void>::get_class_info((GetTypeInfo<Vector<String>const&,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   GetTypeInfo<BitField<EditorExportPlatform::DebugFlags>,void>::get_class_info((GetTypeInfo<BitField<EditorExportPlatform::DebugFlags>,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   local_108 = "EditorExportPlatformExtension";
   local_120 = 0;
   local_100 = 0x1d;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (String*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_110 = 0;
   local_108 = (char*)0x0;
   local_d8 = "preset";
   local_d0 = 6;
   String::parse_latin1((StrRange*)&local_108);
   local_d8 = (char*)0x0;
   if (local_108 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_108);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_138 = 0;
   local_d8 = "debug";
   local_d0 = 5;
   String::parse_latin1((StrRange*)local_150);
   local_d8 = (char*)0x0;
   if (local_138 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)local_150);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_120 = 0;
   local_d8 = "path";
   local_d0 = 4;
   String::parse_latin1((StrRange*)&local_120);
   local_d8 = (char*)0x0;
   if (local_120 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_120);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_130 = 0;
   local_d8 = "patches";
   local_d0 = 7;
   String::parse_latin1((StrRange*)&local_130);
   local_d8 = (char*)0x0;
   if (local_130 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_130);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_128 = 0;
   local_d8 = "flags";
   local_d0 = 5;
   String::parse_latin1((StrRange*)&local_128);
   local_d8 = (char*)0x0;
   if (local_128 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_128);
   }

   Vector<String>::push_back((Vector<String>*)local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_150);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_export_zip_patch";
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100 = 0x11;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 8);
   GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void>*)&local_108);
   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_80 = local_80 & 0xffffffff00000000;
   GetTypeInfo<Ref<EditorExportPreset>,void>::get_class_info((GetTypeInfo<Ref<EditorExportPreset>,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   GetTypeInfo<Vector<String>const&,void>::get_class_info((GetTypeInfo<Vector<String>const&,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   GetTypeInfo<BitField<EditorExportPlatform::DebugFlags>,void>::get_class_info((GetTypeInfo<BitField<EditorExportPlatform::DebugFlags>,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 0);
   local_108 = "EditorExportPlatformExtension";
   local_120 = 0;
   local_100 = 0x1d;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (String*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_get_platform_features";
   local_110 = 0;
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100 = 0x16;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 0x8c);
   GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void>*)&local_108);
   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_108 = "EditorExportPlatformExtension";
   local_80 = local_80 & 0xffffffff00000000;
   local_120 = 0;
   local_100 = 0x1d;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (String*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_get_debug_protocol";
   local_110 = 0;
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100 = 0x13;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 0xc);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_108);
   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_108 = "EditorExportPlatformExtension";
   local_80 = local_80 & 0xffffffff00000000;
   local_120 = 0;
   local_100 = 0x1d;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (String*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* EditorExportPlatformExtension::get_export_option_warning(EditorExportPreset const*, StringName
   const&) const */EditorExportPreset *EditorExportPlatformExtension::get_export_option_warning(EditorExportPreset *param_1, StringName *param_2) {
   Object *pOVar1;
   char cVar2;
   Object *pOVar3;
   undefined8 uVar4;
   long lVar5;
   long *plVar6;
   StringName *in_RCX;
   code *pcVar7;
   Object *in_RDX;
   long in_FS_OFFSET;
   long local_190;
   Object *local_178;
   long local_170;
   long local_168;
   long local_160[5];
   int local_138;
   undefined4 uStack_134;
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
   Variant *local_c8;
   Variant *pVStack_c0;
   int local_b8[8];
   int local_98[8];
   Object **local_78;
   StringName *pSStack_70;
   int local_60[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)param_1 = 0;
   Variant::Variant((Variant*)local_b8, in_RDX);
   pOVar3 = (Object*)Variant::get_validated_object();
   if (( ( pOVar3 != (Object*)0x0 ) && ( pOVar3 = (Object*)__dynamic_cast(pOVar3, &Object::typeinfo, &EditorExportPreset::typeinfo, 0) ),pOVar3 != (Object*)0x0 )) {
      pOVar3 = (Object*)0x0;
   }

   plVar6 = *(long**)( param_2 + 0x98 );
   if (plVar6 != (long*)0x0) {
      local_138 = 0;
      uStack_134 = 0;
      uStack_130 = 0;
      Variant::Variant((Variant*)&local_78, pOVar3);
      Variant::Variant((Variant*)local_60, in_RCX);
      local_c8 = (Variant*)&local_78;
      pVStack_c0 = (Variant*)local_60;
      ( **(code**)( *plVar6 + 0x60 ) )(local_98, plVar6, param_2 + 0x218, &local_c8, 2, &local_138);
      if (local_138 == 0) {
         Variant::operator_cast_to_String((Variant*)&local_168);
         if (*(long*)param_1 != local_168) {
            CowData<char32_t>::_unref((CowData<char32_t>*)param_1);
            lVar5 = local_168;
            local_168 = 0;
            *(long*)param_1 = lVar5;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010a046;
      }

      if (Variant::needs_deinit[local_98[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_60[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( param_2 + 8 ) != 0 ) && ( param_2[0x220] == (StringName)0x0 )) {
      local_138 = 0;
      uStack_134 = 0;
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
      String::parse_latin1((String*)&local_138, "_get_export_option_warning");
      local_100 = CONCAT44(local_100._4_4_, 0xc);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_168);
      PropertyInfo::operator =((PropertyInfo*)&uStack_130, (PropertyInfo*)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
      local_e0 = local_e0 & 0xffffffff00000000;
      GetTypeInfo<Ref<EditorExportPreset>,void>::get_class_info((GetTypeInfo<Ref<EditorExportPreset>,void>*)&local_168);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_f8, (PropertyInfo*)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
      Vector<int>::push_back(local_d8, 0);
      GetTypeInfo<StringName_const&,void>::get_class_info((GetTypeInfo<StringName_const&,void>*)&local_168);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_f8, (PropertyInfo*)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
      Vector<int>::push_back(local_d8, 0);
      MethodInfo::get_compatibility_hash();
      *(undefined8*)( param_2 + 0x228 ) = 0;
      lVar5 = *(long*)( param_2 + 8 );
      pcVar7 = *(code**)( lVar5 + 0xd8 );
      if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xd0 ) ),pcVar7 == (code*)0x0) {
         local_178 = (Object*)0x0;
         String::parse_latin1((String*)&local_178, "EditorExportPlatformExtension");
         StringName::StringName((StringName*)&local_170, (String*)&local_178, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_168, (StringName*)&local_170);
         if (local_160[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_160);
            local_190 = 0;
            if (StringName::configured != '\0') goto LAB_0010a5f0;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
            LAB_0010a614:lVar5 = *(long*)( param_2 + 8 );
            pcVar7 = *(code**)( lVar5 + 200 );
            if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xc0 ) ),pcVar7 == (code*)0x0) goto LAB_0010a4e5;
            uVar4 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ));
            *(undefined8*)( param_2 + 0x228 ) = uVar4;
         }
 else {
            local_190 = *(long*)( local_160[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_160);
            if (StringName::configured != '\0') {
               LAB_0010a5f0:if (local_170 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
            if (local_190 == 0) goto LAB_0010a614;
         }

         lVar5 = *(long*)( param_2 + 8 );
      }
 else {
         uVar4 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ));
         *(undefined8*)( param_2 + 0x228 ) = uVar4;
         lVar5 = *(long*)( param_2 + 8 );
      }

      LAB_0010a4e5:if (*(char*)( lVar5 + 0x29 ) != '\0') {
         plVar6 = (long*)operator_new(0x18, "");
         *plVar6 = (long)( param_2 + 0x228 );
         plVar6[1] = (long)( param_2 + 0x220 );
         plVar6[2] = *(long*)( param_2 + 0x168 );
         *(long**)( param_2 + 0x168 ) = plVar6;
      }

      param_2[0x220] = (StringName)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_138);
   }

   if (*(long*)( param_2 + 0x228 ) != 0) {
      if (( pOVar3 == (Object*)0x0 ) || ( local_178 = pOVar3 ),cVar2 = RefCounted::reference(),cVar2 == '\0') {
         local_178 = (Object*)0x0;
      }

      StringName::StringName((StringName*)&local_170, in_RCX);
      local_78 = &local_178;
      local_168 = 0;
      pSStack_70 = (StringName*)&local_170;
      if (*(code**)( *(long*)( param_2 + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( param_2 + 0x228 ) )(*(undefined8*)( param_2 + 0x10 ), &local_78, &local_168);
      }
 else {
         ( **(code**)( *(long*)( param_2 + 8 ) + 0xe0 ) )(*(undefined8*)( param_2 + 0x10 ), param_2 + 0x218, *(undefined8*)( param_2 + 0x228 ), &local_78, &local_168);
      }

      uStack_134 = 0;
      local_138 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_138, (CowData*)&local_168);
      lVar5 = CONCAT44(uStack_134, local_138);
      if (*(long*)param_1 != lVar5) {
         CowData<char32_t>::_unref((CowData<char32_t>*)param_1);
         *(long*)param_1 = lVar5;
         local_138 = 0;
         uStack_134 = 0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
      if (( StringName::configured != '\0' ) && ( local_170 != 0 )) {
         StringName::unref();
      }

      if (( ( local_178 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar1 = local_178,cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar1 + 0x140 ))(pOVar1);
      Memory::free_static(pOVar1, false);
   }

}
LAB_0010a046:if (( ( pOVar3 == (Object*)0x0 ) || ( cVar2 = RefCounted::unreference() ),cVar2 == '\0' )) {
   cVar2 = Variant::needs_deinit[local_b8[0]];
}
 else {
   ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
   Memory::free_static(pOVar3, false);
   cVar2 = Variant::needs_deinit[local_b8[0]];
}
if (cVar2 != '\0') {
   Variant::_clear_internal();
}
if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return param_1;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* EditorExportPlatformExtension::get_export_option_visibility(EditorExportPreset const*, String
   const&) const */ulong EditorExportPlatformExtension::get_export_option_visibility(EditorExportPlatformExtension *this, EditorExportPreset *param_1, String *param_2) {
   Object *pOVar1;
   char cVar2;
   bool bVar3;
   undefined4 uVar4;
   Object *pOVar5;
   undefined7 extraout_var;
   undefined8 uVar6;
   long lVar7;
   long *plVar8;
   code *pcVar9;
   ulong uVar10;
   long in_FS_OFFSET;
   Variant *this_00;
   CowData<char32_t> *this_01;
   String *this_02;
   Variant *this_03;
   Vector<int> *this_04;
   Variant *pVVar11;
   List<PropertyInfo,DefaultAllocator> *this_05;
   String *this_06;
   undefined8 local_178;
   StringName local_170;
   undefined7 uStack_16f;
   Object *local_168;
   long local_160[5];
   int local_138;
   undefined4 uStack_134;
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
   Variant *local_c8;
   Variant *pVStack_c0;
   int local_b8[8];
   int local_98[8];
   Object **local_78;
   CowData<char32_t> *pCStack_70;
   int local_60[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_b8, (Object*)param_1);
   pOVar5 = (Object*)Variant::get_validated_object();
   if (( ( pOVar5 != (Object*)0x0 ) && ( pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &EditorExportPreset::typeinfo, 0) ),pOVar5 != (Object*)0x0 )) {
      pOVar5 = (Object*)0x0;
   }

   plVar8 = *(long**)( this + 0x98 );
   if (plVar8 != (long*)0x0) {
      local_138 = 0;
      uStack_134 = 0;
      uStack_130 = 0;
      pVVar11 = (Variant*)&local_78;
      Variant::Variant((Variant*)&local_78, pOVar5);
      this_00 = (Variant*)local_60;
      Variant::Variant(this_00, (String*)param_2);
      this_03 = (Variant*)local_98;
      local_c8 = (Variant*)&local_78;
      pVStack_c0 = this_00;
      ( **(code**)( *plVar8 + 0x60 ) )(this_03, plVar8, this + 0x200, &local_c8, 2, &local_138, this_00, this_03, pVVar11);
      if (local_138 == 0) {
         bVar3 = Variant::operator_cast_to_bool(this_03);
         uVar10 = CONCAT71(extraout_var, bVar3) & 0xffffffff;
         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010a84d;
      }

      if (Variant::needs_deinit[local_98[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_60[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x208] == (EditorExportPlatformExtension)0x0 )) {
      this_02 = (String*)&local_138;
      local_138 = 0;
      uStack_134 = 0;
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
      String::parse_latin1(this_02, "_get_export_option_visibility");
      local_100 = CONCAT44(local_100._4_4_, 0xc);
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_168);
      PropertyInfo::operator =((PropertyInfo*)&uStack_130, (PropertyInfo*)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
      local_e0 = local_e0 & 0xffffffff00000000;
      GetTypeInfo<Ref<EditorExportPreset>,void>::get_class_info((GetTypeInfo<Ref<EditorExportPreset>,void>*)&local_168);
      this_05 = (List<PropertyInfo,DefaultAllocator>*)local_f8;
      List<PropertyInfo,DefaultAllocator>::push_back(this_05, (PropertyInfo*)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
      this_04 = local_d8;
      Vector<int>::push_back(this_04, 0);
      GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void>*)&local_168);
      List<PropertyInfo,DefaultAllocator>::push_back(this_05, (PropertyInfo*)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
      Vector<int>::push_back(this_04, 0);
      uVar4 = MethodInfo::get_compatibility_hash();
      *(undefined8*)( this + 0x210 ) = 0;
      lVar7 = *(long*)( this + 8 );
      pcVar9 = *(code**)( lVar7 + 0xd8 );
      if (( ( pcVar9 == (code*)0x0 ) || ( *(long*)( lVar7 + 0xe0 ) == 0 ) ) && ( pcVar9 = *(code**)( lVar7 + 0xd0 ) ),pcVar9 == (code*)0x0) {
         local_178 = 0;
         this_06 = (String*)&local_178;
         String::parse_latin1(this_06, "EditorExportPlatformExtension");
         StringName::StringName(&local_170, this_06, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_168, &local_170);
         if (local_160[0] == 0) {
            lVar7 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_160);
            if (StringName::configured != '\0') goto LAB_0010ad28;
            CowData<char32_t>::_unref((CowData<char32_t>*)this_06);
            LAB_0010ad49:lVar7 = *(long*)( this + 8 );
            pcVar9 = *(code**)( lVar7 + 200 );
            if (( ( pcVar9 == (code*)0x0 ) || ( *(long*)( lVar7 + 0xe0 ) == 0 ) ) && ( pcVar9 = *(code**)( lVar7 + 0xc0 ) ),pcVar9 == (code*)0x0) goto LAB_0010ac23;
            uVar6 = ( *pcVar9 )(*(undefined8*)( lVar7 + 0xa0 ));
            *(undefined8*)( this + 0x210 ) = uVar6;
         }
 else {
            lVar7 = *(long*)( local_160[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_160);
            if (StringName::configured != '\0') {
               LAB_0010ad28:if (CONCAT71(uStack_16f, local_170) != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)this_06);
            if (lVar7 == 0) goto LAB_0010ad49;
         }

         lVar7 = *(long*)( this + 8 );
      }
 else {
         uVar6 = ( *pcVar9 )(*(undefined8*)( lVar7 + 0xa0 ), this + 0x200, uVar4);
         *(undefined8*)( this + 0x210 ) = uVar6;
         lVar7 = *(long*)( this + 8 );
      }

      LAB_0010ac23:if (*(char*)( lVar7 + 0x29 ) != '\0') {
         plVar8 = (long*)operator_new(0x18, "");
         *plVar8 = (long)( this + 0x210 );
         plVar8[1] = (long)( this + 0x208 );
         plVar8[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar8;
      }

      this[0x208] = (EditorExportPlatformExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)this_02);
   }

   uVar10 = 1;
   if (*(long*)( this + 0x210 ) != 0) {
      if (( pOVar5 == (Object*)0x0 ) || ( local_168 = pOVar5 ),cVar2 = RefCounted::reference(),cVar2 == '\0') {
         local_168 = (Object*)0x0;
      }

      this_01 = (CowData<char32_t>*)&local_138;
      local_138 = 0;
      uStack_134 = 0;
      if (*(long*)param_2 != 0) {
         CowData<char32_t>::_ref(this_01, (CowData*)param_2);
      }

      local_78 = &local_168;
      pCStack_70 = this_01;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( this + 0x210 ) )(*(undefined8*)( this + 0x10 ), &local_78, &local_170);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x200, *(code**)( this + 0x210 ), &local_78, &local_170);
      }

      uVar10 = ( ulong )(local_170 != (StringName)0x0);
      CowData<char32_t>::_unref(this_01);
      if (( ( local_168 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar1 = local_168,cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar1 + 0x140 ))(pOVar1);
      Memory::free_static(pOVar1, false);
   }

}
LAB_0010a84d:if (( ( pOVar5 == (Object*)0x0 ) || ( cVar2 = RefCounted::unreference() ),cVar2 == '\0' )) {
   cVar2 = Variant::needs_deinit[local_b8[0]];
}
 else {
   ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
   Memory::free_static(pOVar5, false);
   cVar2 = Variant::needs_deinit[local_b8[0]];
}
if (cVar2 != '\0') {
   Variant::_clear_internal();
}
if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return uVar10;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* EditorExportPlatformExtension::export_zip_patch(Ref<EditorExportPreset> const&, bool, String
   const&, Vector<String> const&, BitField<EditorExportPlatform::DebugFlags>) */ulong EditorExportPlatformExtension::export_zip_patch(EditorExportPlatformExtension *this, long *param_1, bool param_2, String *param_3, Vector *param_4, long param_6) {
   Variant *pVVar1;
   char cVar2;
   uint uVar3;
   undefined4 uVar4;
   ulong uVar5;
   undefined8 uVar6;
   long lVar7;
   long *plVar8;
   code *pcVar9;
   Variant *pVVar10;
   Object *pOVar11;
   long in_FS_OFFSET;
   String *local_218;
   ExportNotifier local_1c2;
   undefined1 local_1c1;
   undefined8 local_1c0;
   undefined8 local_1b8;
   long local_1b0;
   uint local_1a8[2];
   long local_1a0[5];
   int local_178[2];
   undefined4 local_170;
   undefined4 uStack_16c;
   undefined1 local_168[16];
   undefined8 local_158;
   undefined8 local_150;
   undefined8 local_148;
   undefined8 local_140;
   undefined8 local_138[2];
   undefined8 local_128;
   ulong local_120;
   Vector<int> local_118[8];
   undefined8 local_110;
   int local_108[8];
   Variant *local_e8;
   Variant *pVStack_e0;
   Variant *local_d8;
   Variant *pVStack_d0;
   Variant *local_c8;
   Ref<EditorExportPreset> *local_b8;
   undefined1 *puStack_b0;
   CowData<char32_t> *local_a8;
   String *pSStack_a0;
   long *local_98;
   Variant local_88[24];
   Variant local_70[24];
   Variant local_58[24];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   EditorExportPlatform::ExportNotifier::ExportNotifier(&local_1c2, this, param_1, (uint)param_2, param_3);
   if (*(long*)( param_4 + 8 ) == 0) {
      EditorExportPreset::get_patches();
   }
 else {
      local_170 = 0;
      uStack_16c = 0;
      CowData<String>::_ref((CowData<String>*)&local_170, (CowData*)( param_4 + 8 ));
   }

   local_218 = (String*)local_178;
   uVar3 = EditorExportPlatform::_load_patches((Vector*)this);
   uVar5 = (ulong)uVar3;
   CowData<String>::_unref((CowData<String>*)&local_170);
   if (uVar3 != 0) goto LAB_0010aeb6;
   pOVar11 = (Object*)*param_1;
   if (( pOVar11 != (Object*)0x0 ) && ( cVar2 = cVar2 == '\0' )) {
      pOVar11 = (Object*)0x0;
   }

   plVar8 = *(long**)( this + 0x98 );
   if (plVar8 == (long*)0x0) {
      LAB_0010b08c:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x430] == (EditorExportPlatformExtension)0x0 )) {
         local_168 = (undefined1[16])0x0;
         local_178[0] = 0;
         local_178[1] = 0;
         local_170 = 0;
         uStack_16c = 0;
         local_158 = 0;
         local_150 = 0;
         local_148 = 6;
         local_140 = 1;
         local_138[0] = 0;
         local_128 = 0;
         local_120 = 0;
         local_110 = 0;
         String::parse_latin1(local_218, "_export_zip_patch");
         local_140 = CONCAT44(local_140._4_4_, 8);
         GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void>*)local_1a8);
         PropertyInfo::operator =((PropertyInfo*)&local_170, (PropertyInfo*)local_1a8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)local_1a8);
         local_120 = local_120 & 0xffffffff00000000;
         GetTypeInfo<Ref<EditorExportPreset>,void>::get_class_info((GetTypeInfo<Ref<EditorExportPreset>,void>*)local_1a8);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_138, (PropertyInfo*)local_1a8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)local_1a8);
         Vector<int>::push_back(local_118, 0);
         GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)local_1a8);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_138, (PropertyInfo*)local_1a8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)local_1a8);
         Vector<int>::push_back(local_118, 0);
         GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void>*)local_1a8);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_138, (PropertyInfo*)local_1a8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)local_1a8);
         Vector<int>::push_back(local_118, 0);
         GetTypeInfo<Vector<String>const&,void>::get_class_info((GetTypeInfo<Vector<String>const&,void>*)local_1a8);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_138, (PropertyInfo*)local_1a8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)local_1a8);
         Vector<int>::push_back(local_118, 0);
         GetTypeInfo<BitField<EditorExportPlatform::DebugFlags>,void>::get_class_info((GetTypeInfo<BitField<EditorExportPlatform::DebugFlags>,void>*)local_1a8);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_138, (PropertyInfo*)local_1a8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)local_1a8);
         Vector<int>::push_back(local_118, 0);
         uVar4 = MethodInfo::get_compatibility_hash();
         lVar7 = *(long*)( this + 8 );
         *(undefined8*)( this + 0x438 ) = 0;
         pcVar9 = *(code**)( lVar7 + 0xd8 );
         if (( ( pcVar9 == (code*)0x0 ) || ( *(long*)( lVar7 + 0xe0 ) == 0 ) ) && ( pcVar9 = *(code**)( lVar7 + 0xd0 ) ),pcVar9 == (code*)0x0) {
            local_1b8 = 0;
            String::parse_latin1((String*)&local_1b8, "EditorExportPlatformExtension");
            StringName::StringName((StringName*)&local_1b0, (String*)&local_1b8, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_1a8, (StringName*)&local_1b0);
            if (local_1a0[0] == 0) {
               lVar7 = 0;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_1a0);
               if (StringName::configured != '\0') goto LAB_0010b60c;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
               LAB_0010b62d:lVar7 = *(long*)( this + 8 );
               pcVar9 = *(code**)( lVar7 + 200 );
               if (( ( pcVar9 == (code*)0x0 ) || ( *(long*)( lVar7 + 0xe0 ) == 0 ) ) && ( pcVar9 = *(code**)( lVar7 + 0xc0 ) ),pcVar9 == (code*)0x0) goto LAB_0010b565;
               uVar6 = ( *pcVar9 )(*(undefined8*)( lVar7 + 0xa0 ));
               *(undefined8*)( this + 0x438 ) = uVar6;
            }
 else {
               lVar7 = *(long*)( local_1a0[0] + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_1a0);
               if (StringName::configured != '\0') {
                  LAB_0010b60c:if (local_1b0 != 0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
               if (lVar7 == 0) goto LAB_0010b62d;
            }

            lVar7 = *(long*)( this + 8 );
         }
 else {
            uVar6 = ( *pcVar9 )(*(undefined8*)( lVar7 + 0xa0 ), this + 0x428, uVar4);
            *(undefined8*)( this + 0x438 ) = uVar6;
            lVar7 = *(long*)( this + 8 );
         }

         LAB_0010b565:if (*(char*)( lVar7 + 0x29 ) != '\0') {
            plVar8 = (long*)operator_new(0x18, "");
            *plVar8 = (long)( this + 0x438 );
            plVar8[1] = (long)( this + 0x430 );
            plVar8[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar8;
         }

         this[0x430] = (EditorExportPlatformExtension)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)local_218);
      }

      if (*(long*)( this + 0x438 ) != 0) {
         local_1c0 = 0;
         Ref<EditorExportPreset>::operator =((Ref<EditorExportPreset>*)&local_1c0, (Ref*)pOVar11);
         local_1b8 = 0;
         local_1c1 = param_2;
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_1b8, (CowData*)param_3);
         local_170 = 0;
         uStack_16c = 0;
         CowData<String>::_ref((CowData<String>*)&local_170, (CowData*)( param_4 + 8 ));
         puStack_b0 = &local_1c1;
         local_98 = &local_1b0;
         pSStack_a0 = local_218;
         local_1b0 = param_6;
         local_b8 = (Ref<EditorExportPreset>*)&local_1c0;
         local_a8 = (CowData<char32_t>*)&local_1b8;
         if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
            ( **(code**)( this + 0x438 ) )(*(undefined8*)( this + 0x10 ), &local_b8, local_1a8);
         }
 else {
            ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x428, *(undefined8*)( this + 0x438 ), &local_b8, local_1a8);
         }

         uVar5 = (ulong)local_1a8[0];
         CowData<String>::_unref((CowData<String>*)&local_170);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
         Ref<EditorExportPreset>::unref((Ref<EditorExportPreset>*)&local_1c0);
         goto LAB_0010b1f9;
      }

      if (( ( pOVar11 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar11 + 0x140 ))(pOVar11);
      Memory::free_static(pOVar11, false);
   }

   uVar3 = EditorExportPlatform::save_zip_patch((Ref*)this, SUB81(param_1, 0), (String*)(ulong)(uint)param_2, (Vector*)param_3);
   uVar5 = (ulong)uVar3;
}
else{local_178[0] = 0;local_178[1] = 0;local_170 = 0;Variant::Variant((Variant*)&local_b8, pOVar11);Variant::Variant((Variant*)&pSStack_a0, param_2);Variant::Variant(local_88, param_3);Variant::Variant(local_70, param_4);Variant::Variant(local_58, param_6);local_e8 = (Variant*)&local_b8;pVStack_e0 = (Variant*)&pSStack_a0;local_d8 = local_88;pVStack_d0 = local_70;local_c8 = local_58;( **(code**)( *plVar8 + 0x60 ) )((Variant*)local_108, plVar8, this + 0x428, &local_e8, 5, local_218);if (local_178[0] != 0) {
   if (Variant::needs_deinit[local_108[0]] != '\0') {
      Variant::_clear_internal();
   }

   pVVar10 = (Variant*)local_40;
   do {
      pVVar1 = pVVar10 + -0x18;
      pVVar10 = pVVar10 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar10 != (Variant*)&local_b8 );
   goto LAB_0010b08c;
}
uVar5 = Variant::operator_cast_to_long((Variant*)local_108);uVar5 = uVar5 & 0xffffffff;if (Variant::needs_deinit[local_108[0]] != '\0') {
   Variant::_clear_internal();
}
pVVar10 = (Variant*)local_40;do {
   pVVar1 = pVVar10 + -0x18;
   pVVar10 = pVVar10 + -0x18;
   if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
      Variant::_clear_internal();
   }

}
 while ( pVVar10 != (Variant*)&local_b8 );LAB_0010b1f9:if (( ( pOVar11 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar11 + 0x140 ))(pOVar11);Memory::free_static(pOVar11, false);}
  }EditorExportPlatform::_unload_patches();LAB_0010aeb6:EditorExportPlatform::ExportNotifier::~ExportNotifier(&local_1c2);if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return uVar5;}/* EditorExportPlatformExtension::export_pack_patch(Ref<EditorExportPreset> const&, bool, String
   const&, Vector<String> const&, BitField<EditorExportPlatform::DebugFlags>) */ulong EditorExportPlatformExtension::export_pack_patch(EditorExportPlatformExtension *this, long *param_1, bool param_2, String *param_3, Vector *param_4, long param_6) {
   Variant *pVVar1;
   char cVar2;
   uint uVar3;
   undefined4 uVar4;
   ulong uVar5;
   undefined8 uVar6;
   long lVar7;
   long *plVar8;
   code *pcVar9;
   Variant *pVVar10;
   Object *pOVar11;
   long in_FS_OFFSET;
   String *local_218;
   ExportNotifier local_1c2;
   undefined1 local_1c1;
   undefined8 local_1c0;
   undefined8 local_1b8;
   long local_1b0;
   uint local_1a8[2];
   long local_1a0[5];
   int local_178[2];
   undefined4 local_170;
   undefined4 uStack_16c;
   undefined1 local_168[16];
   undefined8 local_158;
   undefined8 local_150;
   undefined8 local_148;
   undefined8 local_140;
   undefined8 local_138[2];
   undefined8 local_128;
   ulong local_120;
   Vector<int> local_118[8];
   undefined8 local_110;
   int local_108[8];
   Variant *local_e8;
   Variant *pVStack_e0;
   Variant *local_d8;
   Variant *pVStack_d0;
   Variant *local_c8;
   Ref<EditorExportPreset> *local_b8;
   undefined1 *puStack_b0;
   CowData<char32_t> *local_a8;
   String *pSStack_a0;
   long *local_98;
   Variant local_88[24];
   Variant local_70[24];
   Variant local_58[24];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   EditorExportPlatform::ExportNotifier::ExportNotifier(&local_1c2, this, param_1, (uint)param_2);
   if (*(long*)( param_4 + 8 ) == 0) {
      EditorExportPreset::get_patches();
   }
 else {
      local_170 = 0;
      uStack_16c = 0;
      CowData<String>::_ref((CowData<String>*)&local_170, (CowData*)( param_4 + 8 ));
   }

   local_218 = (String*)local_178;
   uVar3 = EditorExportPlatform::_load_patches((Vector*)this);
   uVar5 = (ulong)uVar3;
   CowData<String>::_unref((CowData<String>*)&local_170);
   if (uVar3 != 0) goto LAB_0010b796;
   pOVar11 = (Object*)*param_1;
   if (( pOVar11 != (Object*)0x0 ) && ( cVar2 = cVar2 == '\0' )) {
      pOVar11 = (Object*)0x0;
   }

   plVar8 = *(long**)( this + 0x98 );
   if (plVar8 == (long*)0x0) {
      LAB_0010b96c:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x418] == (EditorExportPlatformExtension)0x0 )) {
         local_168 = (undefined1[16])0x0;
         local_178[0] = 0;
         local_178[1] = 0;
         local_170 = 0;
         uStack_16c = 0;
         local_158 = 0;
         local_150 = 0;
         local_148 = 6;
         local_140 = 1;
         local_138[0] = 0;
         local_128 = 0;
         local_120 = 0;
         local_110 = 0;
         String::parse_latin1(local_218, "_export_pack_patch");
         local_140 = CONCAT44(local_140._4_4_, 8);
         GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void>*)local_1a8);
         PropertyInfo::operator =((PropertyInfo*)&local_170, (PropertyInfo*)local_1a8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)local_1a8);
         local_120 = local_120 & 0xffffffff00000000;
         GetTypeInfo<Ref<EditorExportPreset>,void>::get_class_info((GetTypeInfo<Ref<EditorExportPreset>,void>*)local_1a8);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_138, (PropertyInfo*)local_1a8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)local_1a8);
         Vector<int>::push_back(local_118, 0);
         GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)local_1a8);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_138, (PropertyInfo*)local_1a8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)local_1a8);
         Vector<int>::push_back(local_118, 0);
         GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void>*)local_1a8);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_138, (PropertyInfo*)local_1a8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)local_1a8);
         Vector<int>::push_back(local_118, 0);
         GetTypeInfo<Vector<String>const&,void>::get_class_info((GetTypeInfo<Vector<String>const&,void>*)local_1a8);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_138, (PropertyInfo*)local_1a8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)local_1a8);
         Vector<int>::push_back(local_118, 0);
         GetTypeInfo<BitField<EditorExportPlatform::DebugFlags>,void>::get_class_info((GetTypeInfo<BitField<EditorExportPlatform::DebugFlags>,void>*)local_1a8);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_138, (PropertyInfo*)local_1a8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)local_1a8);
         Vector<int>::push_back(local_118, 0);
         uVar4 = MethodInfo::get_compatibility_hash();
         lVar7 = *(long*)( this + 8 );
         *(undefined8*)( this + 0x420 ) = 0;
         pcVar9 = *(code**)( lVar7 + 0xd8 );
         if (( ( pcVar9 == (code*)0x0 ) || ( *(long*)( lVar7 + 0xe0 ) == 0 ) ) && ( pcVar9 = *(code**)( lVar7 + 0xd0 ) ),pcVar9 == (code*)0x0) {
            local_1b8 = 0;
            String::parse_latin1((String*)&local_1b8, "EditorExportPlatformExtension");
            StringName::StringName((StringName*)&local_1b0, (String*)&local_1b8, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_1a8, (StringName*)&local_1b0);
            if (local_1a0[0] == 0) {
               lVar7 = 0;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_1a0);
               if (StringName::configured != '\0') goto LAB_0010bf0b;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
               LAB_0010bf2c:lVar7 = *(long*)( this + 8 );
               pcVar9 = *(code**)( lVar7 + 200 );
               if (( ( pcVar9 == (code*)0x0 ) || ( *(long*)( lVar7 + 0xe0 ) == 0 ) ) && ( pcVar9 = *(code**)( lVar7 + 0xc0 ) ),pcVar9 == (code*)0x0) goto LAB_0010be35;
               uVar6 = ( *pcVar9 )(*(undefined8*)( lVar7 + 0xa0 ));
               *(undefined8*)( this + 0x420 ) = uVar6;
            }
 else {
               lVar7 = *(long*)( local_1a0[0] + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_1a0);
               if (StringName::configured != '\0') {
                  LAB_0010bf0b:if (local_1b0 != 0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
               if (lVar7 == 0) goto LAB_0010bf2c;
            }

            lVar7 = *(long*)( this + 8 );
         }
 else {
            uVar6 = ( *pcVar9 )(*(undefined8*)( lVar7 + 0xa0 ), this + 0x410, uVar4);
            *(undefined8*)( this + 0x420 ) = uVar6;
            lVar7 = *(long*)( this + 8 );
         }

         LAB_0010be35:if (*(char*)( lVar7 + 0x29 ) != '\0') {
            plVar8 = (long*)operator_new(0x18, "");
            *plVar8 = (long)( this + 0x420 );
            plVar8[1] = (long)( this + 0x418 );
            plVar8[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar8;
         }

         this[0x418] = (EditorExportPlatformExtension)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)local_218);
      }

      if (*(long*)( this + 0x420 ) == 0) {
         if (( ( pOVar11 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar11 + 0x140 ))(pOVar11);
         Memory::free_static(pOVar11, false);
      }

      uVar3 = EditorExportPlatform::save_pack_patch((Ref*)this, SUB81(param_1, 0), (String*)(ulong)(uint)param_2, (Vector*)param_3, false, (long*)0x0, (long*)0x0);
      uVar5 = (ulong)uVar3;
      EditorExportPlatform::_unload_patches();
      goto LAB_0010b796;
   }

   local_1c0 = 0;
   Ref<EditorExportPreset>::operator =((Ref<EditorExportPreset>*)&local_1c0, (Ref*)pOVar11);
   local_1b8 = 0;
   local_1c1 = param_2;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_1b8, (CowData*)param_3);
   local_170 = 0;
   uStack_16c = 0;
   CowData<String>::_ref((CowData<String>*)&local_170, (CowData*)( param_4 + 8 ));
   puStack_b0 = &local_1c1;
   local_98 = &local_1b0;
   pSStack_a0 = local_218;
   local_1b0 = param_6;
   local_b8 = (Ref<EditorExportPreset>*)&local_1c0;
   local_a8 = (CowData<char32_t>*)&local_1b8;
   if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
      ( **(code**)( this + 0x420 ) )(*(undefined8*)( this + 0x10 ), &local_b8, local_1a8);
   }
 else {
      ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x410, *(undefined8*)( this + 0x420 ), &local_b8, local_1a8);
   }

   uVar5 = (ulong)local_1a8[0];
   CowData<String>::_unref((CowData<String>*)&local_170);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
   Ref<EditorExportPreset>::unref((Ref<EditorExportPreset>*)&local_1c0);
}
else{local_178[0] = 0;local_178[1] = 0;local_170 = 0;Variant::Variant((Variant*)&local_b8, pOVar11);Variant::Variant((Variant*)&pSStack_a0, param_2);Variant::Variant(local_88, param_3);Variant::Variant(local_70, param_4);Variant::Variant(local_58, param_6);local_e8 = (Variant*)&local_b8;pVStack_e0 = (Variant*)&pSStack_a0;local_d8 = local_88;pVStack_d0 = local_70;local_c8 = local_58;( **(code**)( *plVar8 + 0x60 ) )((Variant*)local_108, plVar8, this + 0x410, &local_e8);if (local_178[0] != 0) {
   if (Variant::needs_deinit[local_108[0]] != '\0') {
      Variant::_clear_internal();
   }

   pVVar10 = (Variant*)local_40;
   do {
      pVVar1 = pVVar10 + -0x18;
      pVVar10 = pVVar10 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar10 != (Variant*)&local_b8 );
   goto LAB_0010b96c;
}
uVar5 = Variant::operator_cast_to_long((Variant*)local_108);uVar5 = uVar5 & 0xffffffff;if (Variant::needs_deinit[local_108[0]] != '\0') {
   Variant::_clear_internal();
}
pVVar10 = (Variant*)local_40;do {
   pVVar1 = pVVar10 + -0x18;
   pVVar10 = pVVar10 + -0x18;
   if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
      Variant::_clear_internal();
   }

}
 while ( pVVar10 != (Variant*)&local_b8 );}if (( ( pOVar11 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar11 + 0x140 ))(pOVar11);Memory::free_static(pOVar11, false);}EditorExportPlatform::_unload_patches();LAB_0010b796:EditorExportPlatform::ExportNotifier::~ExportNotifier(&local_1c2);if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return uVar5;}/* EditorExportPlatformExtension::export_zip(Ref<EditorExportPreset> const&, bool, String const&,
   BitField<EditorExportPlatform::DebugFlags>) */ulong EditorExportPlatformExtension::export_zip(EditorExportPlatformExtension *this, long *param_1, bool param_2, String *param_3, long param_5) {
   Variant *pVVar1;
   Object *pOVar2;
   char cVar3;
   uint uVar4;
   undefined4 uVar5;
   ulong uVar6;
   undefined8 uVar7;
   long lVar8;
   long *plVar9;
   code *pcVar10;
   Object *pOVar11;
   Variant *pVVar12;
   long in_FS_OFFSET;
   ExportNotifier local_19a;
   undefined1 local_199;
   Object *local_198;
   long local_190;
   long local_188;
   long local_180[5];
   uint local_158[2];
   undefined4 uStack_150;
   undefined4 uStack_14c;
   undefined1 local_148[16];
   undefined8 local_138;
   undefined8 local_130;
   undefined8 local_128;
   undefined8 local_120;
   undefined8 local_118[2];
   undefined8 local_108;
   ulong local_100;
   Vector<int> local_f8[8];
   undefined8 local_f0;
   int local_e8[8];
   Variant *local_c8;
   Variant *pVStack_c0;
   Variant *local_b8;
   Variant *pVStack_b0;
   Object **local_a8;
   undefined1 *puStack_a0;
   CowData<char32_t> *local_98;
   long *aplStack_90[3];
   Variant local_78[24];
   Variant local_60[24];
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   EditorExportPlatform::ExportNotifier::ExportNotifier(&local_19a, this, param_1, (uint)param_2, param_3, param_5);
   pOVar11 = (Object*)*param_1;
   if (( pOVar11 != (Object*)0x0 ) && ( cVar3 = cVar3 == '\0' )) {
      pOVar11 = (Object*)0x0;
   }

   plVar9 = *(long**)( this + 0x98 );
   if (plVar9 == (long*)0x0) {
      LAB_0010c17e:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x400] == (EditorExportPlatformExtension)0x0 )) {
         local_158[0] = 0;
         local_158[1] = 0;
         local_148 = (undefined1[16])0x0;
         uStack_150 = 0;
         uStack_14c = 0;
         local_138 = 0;
         local_130 = 0;
         local_128 = 6;
         local_120 = 1;
         local_118[0] = 0;
         local_108 = 0;
         local_100 = 0;
         local_f0 = 0;
         String::parse_latin1((String*)local_158, "_export_zip");
         local_120 = CONCAT44(local_120._4_4_, 8);
         GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void>*)&local_188);
         PropertyInfo::operator =((PropertyInfo*)&uStack_150, (PropertyInfo*)&local_188);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
         local_100 = local_100 & 0xffffffff00000000;
         GetTypeInfo<Ref<EditorExportPreset>,void>::get_class_info((GetTypeInfo<Ref<EditorExportPreset>,void>*)&local_188);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_118, (PropertyInfo*)&local_188);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
         Vector<int>::push_back(local_f8, 0);
         GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_188);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_118, (PropertyInfo*)&local_188);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
         Vector<int>::push_back(local_f8, 0);
         GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void>*)&local_188);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_118, (PropertyInfo*)&local_188);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
         Vector<int>::push_back(local_f8, 0);
         GetTypeInfo<BitField<EditorExportPlatform::DebugFlags>,void>::get_class_info((GetTypeInfo<BitField<EditorExportPlatform::DebugFlags>,void>*)&local_188);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_118, (PropertyInfo*)&local_188);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
         Vector<int>::push_back(local_f8, 0);
         uVar5 = MethodInfo::get_compatibility_hash();
         *(undefined8*)( this + 0x408 ) = 0;
         lVar8 = *(long*)( this + 8 );
         pcVar10 = *(code**)( lVar8 + 0xd8 );
         if (( ( pcVar10 == (code*)0x0 ) || ( *(long*)( lVar8 + 0xe0 ) == 0 ) ) && ( pcVar10 = *(code**)( lVar8 + 0xd0 ) ),pcVar10 == (code*)0x0) {
            local_198 = (Object*)0x0;
            String::parse_latin1((String*)&local_198, "EditorExportPlatformExtension");
            StringName::StringName((StringName*)&local_190, (String*)&local_198, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_188, (StringName*)&local_190);
            if (local_180[0] == 0) {
               lVar8 = 0;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_180);
               if (StringName::configured != '\0') goto LAB_0010c6c4;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
               LAB_0010c6e1:lVar8 = *(long*)( this + 8 );
               pcVar10 = *(code**)( lVar8 + 200 );
               if (( ( pcVar10 == (code*)0x0 ) || ( *(long*)( lVar8 + 0xe0 ) == 0 ) ) && ( pcVar10 = *(code**)( lVar8 + 0xc0 ) ),pcVar10 == (code*)0x0) goto LAB_0010c5f8;
               uVar7 = ( *pcVar10 )(*(undefined8*)( lVar8 + 0xa0 ));
               *(undefined8*)( this + 0x408 ) = uVar7;
            }
 else {
               lVar8 = *(long*)( local_180[0] + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_180);
               if (StringName::configured != '\0') {
                  LAB_0010c6c4:if (local_190 != 0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
               if (lVar8 == 0) goto LAB_0010c6e1;
            }

            lVar8 = *(long*)( this + 8 );
         }
 else {
            uVar7 = ( *pcVar10 )(*(undefined8*)( lVar8 + 0xa0 ), this + 0x3f8, uVar5);
            *(undefined8*)( this + 0x408 ) = uVar7;
            lVar8 = *(long*)( this + 8 );
         }

         LAB_0010c5f8:if (*(char*)( lVar8 + 0x29 ) != '\0') {
            plVar9 = (long*)operator_new(0x18, "");
            *plVar9 = (long)( this + 0x408 );
            plVar9[1] = (long)( this + 0x400 );
            plVar9[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar9;
         }

         this[0x400] = (EditorExportPlatformExtension)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)local_158);
      }

      if (*(long*)( this + 0x408 ) == 0) {
         if (( ( pOVar11 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar11 + 0x140 ))(pOVar11);
         Memory::free_static(pOVar11, false);
      }

      uVar4 = EditorExportPlatform::save_zip((Ref*)this, SUB81(param_1, 0), (String*)(ulong)(uint)param_2, (Vector*)param_3, (_func_Error_void_ptr_String_ptr_Vector_ptr_int_int_Vector_ptr_Vector_ptr_Vector_ptr_ulong*)0x0);
      uVar6 = (ulong)uVar4;
      goto LAB_0010c1c3;
   }

   if (( pOVar11 == (Object*)0x0 ) || ( local_198 = pOVar11 ),cVar3 = RefCounted::reference(),cVar3 == '\0') {
      local_198 = (Object*)0x0;
   }

   local_190 = 0;
   local_199 = param_2;
   if (*(long*)param_3 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_190, (CowData*)param_3);
   }

   local_a8 = &local_198;
   puStack_a0 = &local_199;
   aplStack_90[0] = &local_188;
   local_188 = param_5;
   local_98 = (CowData<char32_t>*)&local_190;
   if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
      ( **(code**)( this + 0x408 ) )(*(undefined8*)( this + 0x10 ), &local_a8, local_158);
   }
 else {
      ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x3f8, *(code**)( this + 0x408 ), &local_a8, local_158);
   }

   uVar6 = (ulong)local_158[0];
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_190);
   if (( ( local_198 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),pOVar2 = local_198,cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
   Memory::free_static(pOVar2, false);
}
}
  else{
   local_158[0] = 0;
   local_158[1] = 0;
   uStack_150 = 0;
   Variant::Variant((Variant*)&local_a8, pOVar11);
   Variant::Variant((Variant*)aplStack_90, param_2);
   Variant::Variant(local_78, param_3);
   Variant::Variant(local_60, param_5);
   local_c8 = (Variant*)&local_a8;
   pVStack_c0 = (Variant*)aplStack_90;
   local_b8 = local_78;
   pVStack_b0 = local_60;
   ( **(code**)( *plVar9 + 0x60 ) )((Variant*)local_e8, plVar9, this + 0x3f8, &local_c8, 4, local_158);
   if (local_158[0] != 0) {
      if (Variant::needs_deinit[local_e8[0]] != '\0') {
         Variant::_clear_internal();
      }

      pVVar12 = local_48;
      do {
         pVVar1 = pVVar12 + -0x18;
         pVVar12 = pVVar12 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar12 != (Variant*)&local_a8 );
      goto LAB_0010c17e;
   }

   uVar6 = Variant::operator_cast_to_long((Variant*)local_e8);
   uVar6 = uVar6 & 0xffffffff;
   if (Variant::needs_deinit[local_e8[0]] != '\0') {
      Variant::_clear_internal();
   }

   pVVar12 = local_48;
   do {
      pVVar1 = pVVar12 + -0x18;
      pVVar12 = pVVar12 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar12 != (Variant*)&local_a8 );
}
if (( ( pOVar11 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar11 + 0x140 ))(pOVar11);Memory::free_static(pOVar11, false);}LAB_0010c1c3:EditorExportPlatform::ExportNotifier::~ExportNotifier(&local_19a);if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return uVar6;}/* EditorExportPlatformExtension::export_pack(Ref<EditorExportPreset> const&, bool, String const&,
   BitField<EditorExportPlatform::DebugFlags>) */ulong EditorExportPlatformExtension::export_pack(EditorExportPlatformExtension *this, long *param_1, bool param_2, String *param_3, long param_5) {
   Variant *pVVar1;
   Object *pOVar2;
   char cVar3;
   uint uVar4;
   undefined4 uVar5;
   ulong uVar6;
   undefined8 uVar7;
   long lVar8;
   long *plVar9;
   code *pcVar10;
   Object *pOVar11;
   Variant *pVVar12;
   long in_FS_OFFSET;
   ExportNotifier local_19a;
   undefined1 local_199;
   Object *local_198;
   long local_190;
   long local_188;
   long local_180[5];
   uint local_158[2];
   undefined4 uStack_150;
   undefined4 uStack_14c;
   undefined1 local_148[16];
   undefined8 local_138;
   undefined8 local_130;
   undefined8 local_128;
   undefined8 local_120;
   undefined8 local_118[2];
   undefined8 local_108;
   ulong local_100;
   Vector<int> local_f8[8];
   undefined8 local_f0;
   int local_e8[8];
   Variant *local_c8;
   Variant *pVStack_c0;
   Variant *local_b8;
   Variant *pVStack_b0;
   Object **local_a8;
   undefined1 *puStack_a0;
   CowData<char32_t> *local_98;
   long *aplStack_90[3];
   Variant local_78[24];
   Variant local_60[24];
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   EditorExportPlatform::ExportNotifier::ExportNotifier(&local_19a, this, param_1, (uint)param_2);
   pOVar11 = (Object*)*param_1;
   if (( pOVar11 != (Object*)0x0 ) && ( cVar3 = cVar3 == '\0' )) {
      pOVar11 = (Object*)0x0;
   }

   plVar9 = *(long**)( this + 0x98 );
   if (plVar9 == (long*)0x0) {
      LAB_0010c93e:if (( *(long*)( this + 8 ) != 0 ) && ( this[1000] == (EditorExportPlatformExtension)0x0 )) {
         local_158[0] = 0;
         local_158[1] = 0;
         local_148 = (undefined1[16])0x0;
         uStack_150 = 0;
         uStack_14c = 0;
         local_138 = 0;
         local_130 = 0;
         local_128 = 6;
         local_120 = 1;
         local_118[0] = 0;
         local_108 = 0;
         local_100 = 0;
         local_f0 = 0;
         String::parse_latin1((String*)local_158, "_export_pack");
         local_120 = CONCAT44(local_120._4_4_, 8);
         GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void>*)&local_188);
         PropertyInfo::operator =((PropertyInfo*)&uStack_150, (PropertyInfo*)&local_188);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
         local_100 = local_100 & 0xffffffff00000000;
         GetTypeInfo<Ref<EditorExportPreset>,void>::get_class_info((GetTypeInfo<Ref<EditorExportPreset>,void>*)&local_188);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_118, (PropertyInfo*)&local_188);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
         Vector<int>::push_back(local_f8, 0);
         GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_188);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_118, (PropertyInfo*)&local_188);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
         Vector<int>::push_back(local_f8, 0);
         GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void>*)&local_188);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_118, (PropertyInfo*)&local_188);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
         Vector<int>::push_back(local_f8, 0);
         GetTypeInfo<BitField<EditorExportPlatform::DebugFlags>,void>::get_class_info((GetTypeInfo<BitField<EditorExportPlatform::DebugFlags>,void>*)&local_188);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_118, (PropertyInfo*)&local_188);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
         Vector<int>::push_back(local_f8, 0);
         uVar5 = MethodInfo::get_compatibility_hash();
         *(undefined8*)( this + 0x3f0 ) = 0;
         lVar8 = *(long*)( this + 8 );
         pcVar10 = *(code**)( lVar8 + 0xd8 );
         if (( ( pcVar10 == (code*)0x0 ) || ( *(long*)( lVar8 + 0xe0 ) == 0 ) ) && ( pcVar10 = *(code**)( lVar8 + 0xd0 ) ),pcVar10 == (code*)0x0) {
            local_198 = (Object*)0x0;
            String::parse_latin1((String*)&local_198, "EditorExportPlatformExtension");
            StringName::StringName((StringName*)&local_190, (String*)&local_198, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_188, (StringName*)&local_190);
            if (local_180[0] == 0) {
               lVar8 = 0;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_180);
               if (StringName::configured != '\0') goto LAB_0010ce94;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
               LAB_0010ceb1:lVar8 = *(long*)( this + 8 );
               pcVar10 = *(code**)( lVar8 + 200 );
               if (( ( pcVar10 == (code*)0x0 ) || ( *(long*)( lVar8 + 0xe0 ) == 0 ) ) && ( pcVar10 = *(code**)( lVar8 + 0xc0 ) ),pcVar10 == (code*)0x0) goto LAB_0010cdc8;
               uVar7 = ( *pcVar10 )(*(undefined8*)( lVar8 + 0xa0 ));
               *(undefined8*)( this + 0x3f0 ) = uVar7;
            }
 else {
               lVar8 = *(long*)( local_180[0] + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_180);
               if (StringName::configured != '\0') {
                  LAB_0010ce94:if (local_190 != 0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
               if (lVar8 == 0) goto LAB_0010ceb1;
            }

            lVar8 = *(long*)( this + 8 );
         }
 else {
            uVar7 = ( *pcVar10 )(*(undefined8*)( lVar8 + 0xa0 ), this + 0x3e0, uVar5);
            *(undefined8*)( this + 0x3f0 ) = uVar7;
            lVar8 = *(long*)( this + 8 );
         }

         LAB_0010cdc8:if (*(char*)( lVar8 + 0x29 ) != '\0') {
            plVar9 = (long*)operator_new(0x18, "");
            *plVar9 = (long)( this + 0x3f0 );
            plVar9[1] = (long)( this + 1000 );
            plVar9[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar9;
         }

         this[1000] = (EditorExportPlatformExtension)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)local_158);
      }

      if (*(long*)( this + 0x3f0 ) == 0) {
         if (( ( pOVar11 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar11 + 0x140 ))(pOVar11);
         Memory::free_static(pOVar11, false);
      }

      uVar4 = EditorExportPlatform::save_pack((Ref*)this, SUB81(param_1, 0), (String*)(ulong)(uint)param_2, (Vector*)param_3, (_func_Error_void_ptr_String_ptr_Vector_ptr_int_int_Vector_ptr_Vector_ptr_Vector_ptr_ulong*)0x0, (_func_Error_void_ptr_String_ptr*)0x0, false, (long*)0x0, (long*)0x0);
      uVar6 = (ulong)uVar4;
      goto LAB_0010c990;
   }

   if (( pOVar11 == (Object*)0x0 ) || ( local_198 = pOVar11 ),cVar3 = RefCounted::reference(),cVar3 == '\0') {
      local_198 = (Object*)0x0;
   }

   local_190 = 0;
   local_199 = param_2;
   if (*(long*)param_3 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_190, (CowData*)param_3);
   }

   local_a8 = &local_198;
   puStack_a0 = &local_199;
   aplStack_90[0] = &local_188;
   local_188 = param_5;
   local_98 = (CowData<char32_t>*)&local_190;
   if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
      ( **(code**)( this + 0x3f0 ) )(*(undefined8*)( this + 0x10 ), &local_a8, local_158);
   }
 else {
      ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x3e0, *(code**)( this + 0x3f0 ), &local_a8, local_158);
   }

   uVar6 = (ulong)local_158[0];
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_190);
   if (( ( local_198 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),pOVar2 = local_198,cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
   Memory::free_static(pOVar2, false);
}
}
  else{
   local_158[0] = 0;
   local_158[1] = 0;
   uStack_150 = 0;
   Variant::Variant((Variant*)&local_a8, pOVar11);
   Variant::Variant((Variant*)aplStack_90, param_2);
   Variant::Variant(local_78, param_3);
   Variant::Variant(local_60, param_5);
   local_c8 = (Variant*)&local_a8;
   pVStack_c0 = (Variant*)aplStack_90;
   local_b8 = local_78;
   pVStack_b0 = local_60;
   ( **(code**)( *plVar9 + 0x60 ) )((Variant*)local_e8, plVar9, this + 0x3e0, &local_c8);
   if (local_158[0] != 0) {
      if (Variant::needs_deinit[local_e8[0]] != '\0') {
         Variant::_clear_internal();
      }

      pVVar12 = local_48;
      do {
         pVVar1 = pVVar12 + -0x18;
         pVVar12 = pVVar12 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar12 != (Variant*)&local_a8 );
      goto LAB_0010c93e;
   }

   uVar6 = Variant::operator_cast_to_long((Variant*)local_e8);
   uVar6 = uVar6 & 0xffffffff;
   if (Variant::needs_deinit[local_e8[0]] != '\0') {
      Variant::_clear_internal();
   }

   pVVar12 = local_48;
   do {
      pVVar1 = pVVar12 + -0x18;
      pVVar12 = pVVar12 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar12 != (Variant*)&local_a8 );
}
if (( ( pOVar11 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar11 + 0x140 ))(pOVar11);Memory::free_static(pOVar11, false);}LAB_0010c990:EditorExportPlatform::ExportNotifier::~ExportNotifier(&local_19a);if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return uVar6;}/* EditorExportPlatformExtension::export_project(Ref<EditorExportPreset> const&, bool, String
   const&, BitField<EditorExportPlatform::DebugFlags>) */ulong EditorExportPlatformExtension::export_project(EditorExportPlatformExtension *this, long *param_1, String param_2, String *param_3, long param_5) {
   Variant *pVVar1;
   Object *pOVar2;
   char cVar3;
   undefined4 uVar4;
   undefined8 uVar5;
   long lVar6;
   long *plVar7;
   code *pcVar8;
   ulong uVar9;
   Object *pOVar10;
   Variant *pVVar11;
   long in_FS_OFFSET;
   ExportNotifier local_1b9;
   CowData<char32_t> local_1b8[8];
   CowData<char32_t> local_1b0[8];
   undefined8 local_1a8;
   String local_1a0[8];
   Object *local_198;
   long local_190;
   long local_188;
   long local_180[5];
   uint local_158[2];
   undefined4 uStack_150;
   undefined4 uStack_14c;
   undefined1 local_148[16];
   undefined8 local_138;
   undefined8 local_130;
   undefined8 local_128;
   undefined8 local_120;
   undefined8 local_118[2];
   undefined8 local_108;
   ulong local_100;
   Vector<int> local_f8[8];
   undefined8 local_f0;
   int local_e8[8];
   Variant *local_c8;
   Variant *pVStack_c0;
   Variant *local_b8;
   Variant *pVStack_b0;
   Object **local_a8;
   String *pSStack_a0;
   CowData<char32_t> *local_98;
   long *aplStack_90[3];
   Variant local_78[24];
   Variant local_60[24];
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   EditorExportPlatform::ExportNotifier::ExportNotifier(&local_1b9, this, param_1, param_2, param_3, param_5);
   pOVar10 = (Object*)*param_1;
   if (( pOVar10 != (Object*)0x0 ) && ( cVar3 = cVar3 == '\0' )) {
      pOVar10 = (Object*)0x0;
   }

   plVar7 = *(long**)( this + 0x98 );
   if (plVar7 != (long*)0x0) {
      local_158[0] = 0;
      local_158[1] = 0;
      uStack_150 = 0;
      Variant::Variant((Variant*)&local_a8, pOVar10);
      Variant::Variant((Variant*)aplStack_90, (bool)param_2);
      Variant::Variant(local_78, param_3);
      Variant::Variant(local_60, param_5);
      local_c8 = (Variant*)&local_a8;
      pVStack_c0 = (Variant*)aplStack_90;
      local_b8 = local_78;
      pVStack_b0 = local_60;
      ( **(code**)( *plVar7 + 0x60 ) )((Variant*)local_e8, plVar7, this + 0x3c8, &local_c8, 4, local_158);
      if (local_158[0] == 0) {
         uVar9 = Variant::operator_cast_to_long((Variant*)local_e8);
         uVar9 = uVar9 & 0xffffffff;
         if (Variant::needs_deinit[local_e8[0]] != '\0') {
            Variant::_clear_internal();
         }

         pVVar11 = local_48;
         do {
            pVVar1 = pVVar11 + -0x18;
            pVVar11 = pVVar11 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( pVVar11 != (Variant*)&local_a8 );
         goto LAB_0010d14f;
      }

      if (Variant::needs_deinit[local_e8[0]] != '\0') {
         Variant::_clear_internal();
      }

      pVVar11 = local_48;
      do {
         pVVar1 = pVVar11 + -0x18;
         pVVar11 = pVVar11 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar11 != (Variant*)&local_a8 );
   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x3d0] == (EditorExportPlatformExtension)0x0 )) {
      local_158[0] = 0;
      local_158[1] = 0;
      local_148 = (undefined1[16])0x0;
      uStack_150 = 0;
      uStack_14c = 0;
      local_138 = 0;
      local_130 = 0;
      local_128 = 6;
      local_120 = 1;
      local_118[0] = 0;
      local_108 = 0;
      local_100 = 0;
      local_f0 = 0;
      String::parse_latin1((String*)local_158, "_export_project");
      local_120 = CONCAT44(local_120._4_4_, 0x88);
      GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void>*)&local_188);
      PropertyInfo::operator =((PropertyInfo*)&uStack_150, (PropertyInfo*)&local_188);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
      local_100 = local_100 & 0xffffffff00000000;
      GetTypeInfo<Ref<EditorExportPreset>,void>::get_class_info((GetTypeInfo<Ref<EditorExportPreset>,void>*)&local_188);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_118, (PropertyInfo*)&local_188);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
      Vector<int>::push_back(local_f8, 0);
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_188);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_118, (PropertyInfo*)&local_188);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
      Vector<int>::push_back(local_f8, 0);
      GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void>*)&local_188);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_118, (PropertyInfo*)&local_188);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
      Vector<int>::push_back(local_f8, 0);
      GetTypeInfo<BitField<EditorExportPlatform::DebugFlags>,void>::get_class_info((GetTypeInfo<BitField<EditorExportPlatform::DebugFlags>,void>*)&local_188);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_118, (PropertyInfo*)&local_188);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
      Vector<int>::push_back(local_f8, 0);
      uVar4 = MethodInfo::get_compatibility_hash();
      *(undefined8*)( this + 0x3d8 ) = 0;
      lVar6 = *(long*)( this + 8 );
      pcVar8 = *(code**)( lVar6 + 0xd8 );
      if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar6 + 0xd0 ) ),pcVar8 == (code*)0x0) {
         local_198 = (Object*)0x0;
         String::parse_latin1((String*)&local_198, "EditorExportPlatformExtension");
         StringName::StringName((StringName*)&local_190, (String*)&local_198, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_188, (StringName*)&local_190);
         if (local_180[0] == 0) {
            lVar6 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_180);
            if (StringName::configured != '\0') goto LAB_0010d7e2;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
            LAB_0010d801:lVar6 = *(long*)( this + 8 );
            pcVar8 = *(code**)( lVar6 + 200 );
            if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar6 + 0xc0 ) ),pcVar8 == (code*)0x0) goto LAB_0010d70b;
            uVar5 = ( *pcVar8 )(*(undefined8*)( lVar6 + 0xa0 ));
            *(undefined8*)( this + 0x3d8 ) = uVar5;
         }
 else {
            lVar6 = *(long*)( local_180[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_180);
            if (StringName::configured != '\0') {
               LAB_0010d7e2:if (local_190 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
            if (lVar6 == 0) goto LAB_0010d801;
         }

         lVar6 = *(long*)( this + 8 );
      }
 else {
         uVar5 = ( *pcVar8 )(*(undefined8*)( lVar6 + 0xa0 ), this + 0x3c8, uVar4);
         *(undefined8*)( this + 0x3d8 ) = uVar5;
         lVar6 = *(long*)( this + 8 );
      }

      LAB_0010d70b:if (*(char*)( lVar6 + 0x29 ) != '\0') {
         plVar7 = (long*)operator_new(0x18, "");
         *plVar7 = (long)( this + 0x3d8 );
         plVar7[1] = (long)( this + 0x3d0 );
         plVar7[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar7;
      }

      this[0x3d0] = (EditorExportPlatformExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_158);
   }

   if (*(long*)( this + 0x3d8 ) == 0) {
      if (_gdvirtual__export_project_call(Ref<EditorExportPreset>, ,bool, String_const, &, BitField<EditorExportPlatform::DebugFlags>, Error & ::first_print != '\0') {
         local_188 = 0;
         local_158[0] = 0x116438;
         local_158[1] = 0;
         uStack_150 = 0x23;
         uStack_14c = 0;
         String::parse_latin1((StrRange*)&local_188);
         local_198 = (Object*)0x0;
         local_158[0] = 0x1134a0;
         local_158[1] = 0;
         uStack_150 = 0xf;
         uStack_14c = 0;
         String::parse_latin1((StrRange*)&local_198);
         local_1a8 = 0;
         local_158[0] = 0x117a80;
         local_158[1] = 0;
         uStack_150 = 2;
         uStack_14c = 0;
         String::parse_latin1((StrRange*)&local_1a8);
         ( **(code**)( *(long*)this + 0x48 ) )(local_1b8, this);
         operator+((char *)
         local_1b0,(String*)"Required virtual method ";
         String::operator +(local_1a0, (String*)local_1b0);
         String::operator +((String*)&local_190, local_1a0);
         String::operator +((String*)local_158, (String*)&local_190);
         _err_print_error("_gdvirtual__export_project_call", "editor/export/editor_export_platform_extension.h", 0x83, (String*)local_158, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_158);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_190);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_1a0);
         CowData<char32_t>::_unref(local_1b0);
         CowData<char32_t>::_unref(local_1b8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
         _gdvirtual__export_project_call(Ref<EditorExportPreset>,bool,String_const&,BitField<EditorExportPlatform::DebugFlags>,Error&)
      ::first_print =
         '\0';
      }

      uVar9 = 1;
   }
 else {
      if (( pOVar10 == (Object*)0x0 ) || ( local_198 = pOVar10 ),cVar3 = RefCounted::reference(),cVar3 == '\0') {
         local_198 = (Object*)0x0;
      }

      local_190 = 0;
      local_1a0[0] = param_2;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_190, (CowData*)param_3);
      local_a8 = &local_198;
      pSStack_a0 = local_1a0;
      aplStack_90[0] = &local_188;
      local_188 = param_5;
      local_98 = (CowData<char32_t>*)&local_190;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( this + 0x3d8 ) )(*(undefined8*)( this + 0x10 ), &local_a8, local_158);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x3c8, *(undefined8*)( this + 0x3d8 ), &local_a8, local_158);
      }

      uVar9 = (ulong)local_158[0];
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_190);
      if (( ( local_198 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),pOVar2 = local_198,cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
      Memory::free_static(pOVar2, false);
   }

}
LAB_0010d14f:if (( ( pOVar10 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar10 + 0x140 ))(pOVar10);Memory::free_static(pOVar10, false);}EditorExportPlatform::ExportNotifier::~ExportNotifier(&local_1b9);if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return uVar9;}/* EditorExportPlatformExtension::get_binary_extensions(Ref<EditorExportPreset> const&) const */Ref *EditorExportPlatformExtension::get_binary_extensions(Ref *param_1) {
   Object *pOVar1;
   char cVar2;
   undefined4 uVar3;
   undefined1(*pauVar4)[16];
   CowData<char32_t> *this;
   long lVar5;
   long *plVar6;
   code *pcVar7;
   long *in_RDX;
   Object *pOVar8;
   long *in_RSI;
   CowData *pCVar9;
   CowData *pCVar10;
   long in_FS_OFFSET;
   StrRange *this_00;
   CowData<char32_t> local_168[8];
   CowData<char32_t> local_160[8];
   undefined8 local_158;
   String local_150[8];
   undefined8 local_148;
   Object *local_140[2];
   CowData *local_130;
   int local_128;
   undefined4 uStack_124;
   undefined4 uStack_120;
   undefined4 uStack_11c;
   char *local_f8;
   CowData *local_f0;
   undefined1 local_e8[16];
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8[2];
   undefined8 local_a8;
   ulong local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   Ref<EditorExportPreset> *local_58[3];
   long local_40;
   pOVar8 = (Object*)*in_RDX;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)param_1 = 0;
   local_130 = (CowData*)0x0;
   if (( pOVar8 != (Object*)0x0 ) && ( cVar2 = cVar2 == '\0' )) {
      pOVar8 = (Object*)0x0;
   }

   plVar6 = (long*)in_RSI[0x13];
   if (plVar6 == (long*)0x0) {
      LAB_0010d9c1:if (( in_RSI[1] != 0 ) && ( (char)in_RSI[0x77] == '\0' )) {
         local_f8 = (undefined*)0x0;
         local_e8 = (undefined1[16])0x0;
         local_f0 = (CowData*)0x0;
         local_d8 = 0;
         local_d0 = 0;
         local_c8 = 6;
         local_c0 = 1;
         local_b8[0] = 0;
         local_a8 = 0;
         local_a0 = 0;
         local_90 = 0;
         String::parse_latin1((String*)&local_f8, "_get_binary_extensions");
         local_c0 = CONCAT44(local_c0._4_4_, 0x8c);
         GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void>*)&local_128);
         PropertyInfo::operator =((PropertyInfo*)&local_f0, (PropertyInfo*)&local_128);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
         local_a0 = local_a0 & 0xffffffff00000000;
         GetTypeInfo<Ref<EditorExportPreset>,void>::get_class_info((GetTypeInfo<Ref<EditorExportPreset>,void>*)&local_128);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
         Vector<int>::push_back(local_98, 0);
         uVar3 = MethodInfo::get_compatibility_hash();
         lVar5 = in_RSI[1];
         in_RSI[0x78] = 0;
         pcVar7 = *(code**)( lVar5 + 0xd8 );
         if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xd0 ) ),pcVar7 == (code*)0x0) {
            local_148 = 0;
            String::parse_latin1((String*)&local_148, "EditorExportPlatformExtension");
            StringName::StringName((StringName*)local_140, (String*)&local_148, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)local_140);
            if (CONCAT44(uStack_11c, uStack_120) == 0) {
               lVar5 = 0;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&uStack_120);
               if (StringName::configured != '\0') goto LAB_0010e113;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
               LAB_0010e132:lVar5 = in_RSI[1];
               pcVar7 = *(code**)( lVar5 + 200 );
               if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xc0 ) ),pcVar7 == (code*)0x0) goto LAB_0010e045;
               lVar5 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ));
               in_RSI[0x78] = lVar5;
            }
 else {
               lVar5 = *(long*)( CONCAT44(uStack_11c, uStack_120) + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&uStack_120);
               if (StringName::configured != '\0') {
                  LAB_0010e113:if (local_140[0] != (Object*)0x0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
               if (lVar5 == 0) goto LAB_0010e132;
            }

            lVar5 = in_RSI[1];
         }
 else {
            lVar5 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ), in_RSI + 0x76, uVar3);
            in_RSI[0x78] = lVar5;
            lVar5 = in_RSI[1];
         }

         LAB_0010e045:if (*(char*)( lVar5 + 0x29 ) != '\0') {
            plVar6 = (long*)operator_new(0x18, "");
            *plVar6 = (long)( in_RSI + 0x78 );
            plVar6[1] = (long)( in_RSI + 0x77 );
            plVar6[2] = in_RSI[0x2d];
            in_RSI[0x2d] = (long)plVar6;
         }

         *(undefined1*)( in_RSI + 0x77 ) = 1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
      }

      if (in_RSI[0x78] == 0) {
         if (_gdvirtual__get_binary_extensions_call(Ref<EditorExportPreset>, Vector<String> & ::first_print == '\0') {
            if (pOVar8 == (Object*)0x0) goto LAB_0010da00;
            cVar2 = RefCounted::unreference();
         }
 else {
            local_128 = 0;
            uStack_124 = 0;
            local_f8 = " must be overridden before calling.";
            this_00 = (StrRange*)&local_128;
            local_f0 = (CowData*)0x23;
            String::parse_latin1(this_00);
            local_148 = 0;
            local_f8 = "_get_binary_extensions";
            local_f0 = (CowData*)0x16;
            String::parse_latin1((StrRange*)&local_148);
            local_158 = 0;
            local_f8 = "::";
            local_f0 = (CowData*)0x2;
            String::parse_latin1((StrRange*)&local_158);
            ( **(code**)( *in_RSI + 0x48 ) )(local_168);
            operator+((char *)
            local_160,(String*)"Required virtual method ";
            String::operator +(local_150, (String*)local_160);
            String::operator +((String*)local_140, local_150);
            String::operator +((String*)&local_f8, (String*)local_140);
            _err_print_error("_gdvirtual__get_binary_extensions_call", "editor/export/editor_export_platform_extension.h", 0x80, (String*)&local_f8, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_140);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_150);
            CowData<char32_t>::_unref(local_160);
            CowData<char32_t>::_unref(local_168);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
            CowData<char32_t>::_unref((CowData<char32_t>*)this_00);
            _gdvirtual__get_binary_extensions_call(Ref<EditorExportPreset>,Vector<String>&)::first_print
             =
            '\0';
            if (pOVar8 == (Object*)0x0) goto LAB_0010da00;
            cVar2 = RefCounted::unreference();
         }

         if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
            ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
            Memory::free_static(pOVar8, false);
         }

         goto LAB_0010da00;
      }

      local_140[0] = (Object*)0x0;
      Ref<EditorExportPreset>::operator =((Ref<EditorExportPreset>*)local_140, (Ref*)pOVar8);
      uStack_120 = 0;
      uStack_11c = 0;
      local_58[0] = (Ref<EditorExportPreset>*)local_140;
      if (*(code**)( in_RSI[1] + 0xe0 ) == (code*)0x0) {
         ( *(code*)in_RSI[0x78] )(in_RSI[2], local_58, &local_128);
      }
 else {
         ( **(code**)( in_RSI[1] + 0xe0 ) )(in_RSI[2], in_RSI + 0x76, in_RSI[0x78], local_58, &local_128);
      }

      local_f0 = (CowData*)0x0;
      CowData<String>::_ref((CowData<String>*)&local_f0, (CowData*)&uStack_120);
      pCVar10 = local_f0;
      if (local_f0 != (CowData*)0x0) {
         CowData<String>::_unref((CowData<String>*)&local_130);
         local_130 = pCVar10;
         local_f0 = (CowData*)0x0;
      }

      CowData<String>::_unref((CowData<String>*)&local_f0);
      CowData<String>::_unref((CowData<String>*)&uStack_120);
      if (( ( local_140[0] != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar1 = local_140[0],cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar1 + 0x140 ))(pOVar1);
      Memory::free_static(pOVar1, false);
   }

}
else{local_128 = 0;uStack_124 = 0;uStack_120 = 0;Variant::Variant((Variant*)local_78, pOVar8);local_80 = (Variant*)local_78;( **(code**)( *plVar6 + 0x60 ) )(local_58, plVar6, in_RSI + 0x76, &local_80, 1, &local_128, local_58);if (local_128 != 0) {
   if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   goto LAB_0010d9c1;
}
Variant::operator_cast_to_Vector((Variant*)&local_f8);if (local_f0 != (CowData*)0x0) {
   CowData<String>::_unref((CowData<String>*)&local_130);
   local_130 = local_f0;
   local_f0 = (CowData*)0x0;
}
CowData<String>::_unref((CowData<String>*)&local_f0);if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
   Variant::_clear_internal();
}
if (Variant::needs_deinit[local_78[0]] != '\0') {
   Variant::_clear_internal();
}
}if (( ( pOVar8 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar8 + 0x140 ))(pOVar8);Memory::free_static(pOVar8, false);}CowData<String>::_copy_on_write((CowData<String>*)&local_130);pCVar9 = local_130;CowData<String>::_copy_on_write((CowData<String>*)&local_130);pCVar10 = local_130;if (local_130 != (CowData*)0x0) {
   pCVar10 = local_130 + *(long*)( local_130 + -8 ) * 8;
}
if (pCVar9 != pCVar10) {
   if (*(long*)param_1 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   do {
      this(CowData<char32_t> * operator_new(0x20, DefaultAllocator::alloc));
      *(undefined1(*) [16])this = (undefined1[16])0x0;
      *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
      if (*(long*)pCVar9 != 0) {
         CowData<char32_t>::_ref(this, pCVar9);
      }

      plVar6 = *(long**)param_1;
      lVar5 = plVar6[1];
      *(undefined8*)( this + 8 ) = 0;
      *(long**)( this + 0x18 ) = plVar6;
      *(long*)( this + 0x10 ) = lVar5;
      if (lVar5 != 0) {
         *(CowData<char32_t>**)( lVar5 + 8 ) = this;
      }

      plVar6[1] = (long)this;
      if (*plVar6 == 0) {
         *plVar6 = (long)this;
      }

      pCVar9 = pCVar9 + 8;
      *(int*)( plVar6 + 2 ) = (int)plVar6[2] + 1;
   }
 while ( pCVar10 != pCVar9 );
}
LAB_0010da00:CowData<String>::_unref((CowData<String>*)&local_130);if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return param_1;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* EditorExportPlatformExtension::has_valid_project_configuration(Ref<EditorExportPreset> const&,
   String&) const */ulong EditorExportPlatformExtension::has_valid_project_configuration(EditorExportPlatformExtension *this, Ref *param_1, String *param_2) {
   Object *pOVar1;
   char cVar2;
   bool bVar3;
   undefined4 uVar4;
   code *pcVar5;
   undefined7 extraout_var;
   undefined8 uVar6;
   long lVar7;
   long *plVar8;
   ulong uVar9;
   GetTypeInfo<bool,void> *this_00;
   Object *pOVar10;
   long in_FS_OFFSET;
   CowData<char32_t> local_158[8];
   CowData<char32_t> local_150[8];
   undefined8 local_148;
   String local_140[8];
   undefined8 local_138;
   long local_130;
   undefined8 local_128;
   long local_120[5];
   int local_f8;
   undefined4 uStack_f4;
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   undefined1 local_e8[16];
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8[2];
   undefined8 local_a8;
   ulong local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   int *local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 400 ) != *(long*)param_2) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 400 ), (CowData*)param_2);
   }

   pOVar10 = *(Object**)param_1;
   if (( pOVar10 != (Object*)0x0 ) && ( cVar2 = cVar2 == '\0' )) {
      pOVar10 = (Object*)0x0;
   }

   this_00 = *(GetTypeInfo<bool,void>**)( this + 0x98 );
   if (this_00 == (GetTypeInfo<bool,void>*)0x0) {
      LAB_0010e30e:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x3a0] == (EditorExportPlatformExtension)0x0 )) {
         this_00 = (GetTypeInfo<bool,void>*)&local_128;
         local_f8 = 0;
         uStack_f4 = 0;
         local_e8 = (undefined1[16])0x0;
         uStack_f0 = 0;
         uStack_ec = 0;
         local_d8 = 0;
         local_d0 = 0;
         local_c8 = 6;
         local_c0 = 1;
         local_b8[0] = 0;
         local_a8 = 0;
         local_a0 = 0;
         local_90 = 0;
         String::parse_latin1((String*)&local_f8, "_has_valid_project_configuration");
         local_c0 = CONCAT44(local_c0._4_4_, 0x8c);
         GetTypeInfo<bool,void>::get_class_info(this_00);
         PropertyInfo::operator =((PropertyInfo*)&uStack_f0, (PropertyInfo*)this_00);
         PropertyInfo::~PropertyInfo((PropertyInfo*)this_00);
         local_a0 = local_a0 & 0xffffffff00000000;
         GetTypeInfo<Ref<EditorExportPreset>,void>::get_class_info((GetTypeInfo<Ref<EditorExportPreset>,void>*)this_00);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)this_00);
         PropertyInfo::~PropertyInfo((PropertyInfo*)this_00);
         Vector<int>::push_back(local_98, 0);
         uVar4 = MethodInfo::get_compatibility_hash();
         lVar7 = *(long*)( this + 8 );
         *(undefined8*)( this + 0x3a8 ) = 0;
         pcVar5 = *(code**)( lVar7 + 0xd8 );
         if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar7 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar7 + 0xd0 ) ),pcVar5 == (code*)0x0) {
            local_138 = 0;
            String::parse_latin1((String*)&local_138, "EditorExportPlatformExtension");
            StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)this_00, (StringName*)&local_130);
            if (local_120[0] == 0) {
               this_00 = (GetTypeInfo<bool,void>*)0x0;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
               if (StringName::configured != '\0') goto LAB_0010e95d;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
               LAB_0010e97e:lVar7 = *(long*)( this + 8 );
               pcVar5 = *(code**)( lVar7 + 200 );
               if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar7 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar7 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_0010e84d;
               uVar6 = ( *pcVar5 )(*(undefined8*)( lVar7 + 0xa0 ));
               *(undefined8*)( this + 0x3a8 ) = uVar6;
            }
 else {
               this_00 = *(GetTypeInfo<bool,void>**)( local_120[0] + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
               if (StringName::configured != '\0') {
                  LAB_0010e95d:if (local_130 != 0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
               if (this_00 == (GetTypeInfo<bool,void>*)0x0) goto LAB_0010e97e;
            }

            lVar7 = *(long*)( this + 8 );
         }
 else {
            uVar6 = ( *pcVar5 )(*(undefined8*)( lVar7 + 0xa0 ), this + 0x398, uVar4);
            *(undefined8*)( this + 0x3a8 ) = uVar6;
            lVar7 = *(long*)( this + 8 );
         }

         LAB_0010e84d:if (*(char*)( lVar7 + 0x29 ) != '\0') {
            plVar8 = (long*)operator_new(0x18, "");
            *plVar8 = (long)( this + 0x3a8 );
            plVar8[1] = (long)( this + 0x3a0 );
            plVar8[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar8;
         }

         this[0x3a0] = (EditorExportPlatformExtension)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
      }

      pcVar5 = *(code**)( this + 0x3a8 );
      if (pcVar5 == (code*)0x0) {
         if (_gdvirtual__has_valid_project_configuration_call(Ref<EditorExportPreset>, bool&), ::first_print != '\0') {
            local_128 = 0;
            local_f8 = 0x116438;
            uStack_f4 = 0;
            uStack_f0 = 0x23;
            uStack_ec = 0;
            String::parse_latin1((StrRange*)&local_128);
            local_138 = 0;
            local_f8 = 0x116288;
            uStack_f4 = 0;
            uStack_f0 = 0x20;
            uStack_ec = 0;
            String::parse_latin1((StrRange*)&local_138);
            local_148 = 0;
            local_f8 = 0x117a80;
            uStack_f4 = 0;
            uStack_f0 = 2;
            uStack_ec = 0;
            String::parse_latin1((StrRange*)&local_148);
            ( **(code**)( *(long*)this + 0x48 ) )(local_158, this);
            operator+((char *)
            local_150,(String*)"Required virtual method ";
            String::operator +(local_140, (String*)local_150);
            String::operator +((String*)&local_130, local_140);
            String::operator +((String*)&local_f8, (String*)&local_130);
            _err_print_error("_gdvirtual__has_valid_project_configuration_call", "editor/export/editor_export_platform_extension.h", 0x7d, (String*)&local_f8, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_140);
            CowData<char32_t>::_unref(local_150);
            CowData<char32_t>::_unref(local_158);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
            _gdvirtual__has_valid_project_configuration_call(Ref<EditorExportPreset>,bool&)::first_print
             =
            '\0';
         }

         if (( ( pOVar10 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar10 + 0x140 ))(pOVar10);
         Memory::free_static(pOVar10, false);
      }

      uVar9 = 0;
      goto LAB_0010e350;
   }

   if (pOVar10 == (Object*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
   }
 else {
      local_f8 = (int)pOVar10;
      uStack_f4 = ( undefined4 )((ulong)pOVar10 >> 0x20);
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
         local_f8 = 0;
         uStack_f4 = 0;
      }

      pcVar5 = *(code**)( this + 0x3a8 );
   }

   local_58[0] = &local_f8;
   if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
      ( *pcVar5 )(*(undefined8*)( this + 0x10 ), local_58, &local_128);
   }
 else {
      ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x398, pcVar5, local_58, &local_128);
   }

   uVar9 = CONCAT71(( int7 )((ulong)this_00 >> 8), local_128._0_1_ != (StrRange)0x0);
   if (( CONCAT44(uStack_f4, local_f8) != 0 ) && ( cVar2 = cVar2 != '\0' )) {
      pOVar1 = (Object*)CONCAT44(uStack_f4, local_f8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

}
else{local_f8 = 0;uStack_f4 = 0;uStack_f0 = 0;Variant::Variant((Variant*)local_78, pOVar10);local_80 = (Variant*)local_78;( **(code**)( *(long*)this_00 + 0x60 ) )((Variant*)local_58, this_00, this + 0x398, &local_80, 1, &local_f8);if (local_f8 != 0) {
   if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   goto LAB_0010e30e;
}
bVar3 = Variant::operator_cast_to_bool((Variant*)local_58);uVar9 = CONCAT71(extraout_var, bVar3) & 0xffffffff;if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
   Variant::_clear_internal();
}
if (Variant::needs_deinit[local_78[0]] != '\0') {
   Variant::_clear_internal();
}
}if (( ( pOVar10 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar10 + 0x140 ))(pOVar10);Memory::free_static(pOVar10, false);}if (*(long*)param_2 != *(long*)( this + 400 )) {
   CowData<char32_t>::_ref((CowData<char32_t>*)param_2, (CowData*)( this + 400 ));
}
LAB_0010e350:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return uVar9 & 0xffffffff;}/* EditorExportPlatformExtension::has_valid_export_configuration(Ref<EditorExportPreset> const&,
   String&, bool&, bool) const */ulong EditorExportPlatformExtension::has_valid_export_configuration(EditorExportPlatformExtension *this, Ref *param_1, String *param_2, bool *param_3, bool param_4) {
   Object *pOVar1;
   char cVar2;
   bool bVar3;
   code *pcVar4;
   undefined7 extraout_var;
   undefined8 uVar5;
   long lVar6;
   long *plVar7;
   Object *pOVar8;
   undefined7 in_register_00000081;
   String SVar9;
   ulong uVar10;
   long in_FS_OFFSET;
   long local_1a0;
   CowData<char32_t> local_178[8];
   CowData<char32_t> local_170[8];
   undefined8 local_168;
   String local_160[8];
   undefined8 local_158;
   String local_150;
   undefined7 uStack_14f;
   undefined8 local_148;
   long local_140[5];
   int local_118;
   undefined4 uStack_114;
   undefined4 uStack_110;
   undefined4 uStack_10c;
   undefined1 local_108[16];
   undefined8 local_f8;
   undefined8 local_f0;
   undefined8 local_e8;
   undefined8 local_e0;
   undefined8 local_d8[2];
   undefined8 local_c8;
   ulong local_c0;
   Vector<int> local_b8[8];
   undefined8 local_b0;
   Variant *local_a8;
   Variant *pVStack_a0;
   int local_98[8];
   int *local_78;
   String *pSStack_70;
   int local_60[8];
   long local_40;
   uVar10 = CONCAT71(in_register_00000081, param_4) & 0xffffffff;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 400 ) != *(long*)param_2) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 400 ), (CowData*)param_2);
   }

   pOVar8 = *(Object**)param_1;
   this[0x198] = ( EditorExportPlatformExtension ) * param_3;
   if (( pOVar8 != (Object*)0x0 ) && ( cVar2 = cVar2 == '\0' )) {
      pOVar8 = (Object*)0x0;
   }

   plVar7 = *(long**)( this + 0x98 );
   SVar9 = SUB81(uVar10, 0);
   if (plVar7 == (long*)0x0) {
      LAB_0010ebb1:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x388] == (EditorExportPlatformExtension)0x0 )) {
         local_118 = 0;
         uStack_114 = 0;
         local_108 = (undefined1[16])0x0;
         uStack_110 = 0;
         uStack_10c = 0;
         local_f8 = 0;
         local_f0 = 0;
         local_e8 = 6;
         local_e0 = 1;
         local_d8[0] = 0;
         local_c8 = 0;
         local_c0 = 0;
         local_b0 = 0;
         String::parse_latin1((String*)&local_118, "_has_valid_export_configuration");
         local_e0 = CONCAT44(local_e0._4_4_, 0x8c);
         GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_148);
         PropertyInfo::operator =((PropertyInfo*)&uStack_110, (PropertyInfo*)&local_148);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
         local_c0 = local_c0 & 0xffffffff00000000;
         GetTypeInfo<Ref<EditorExportPreset>,void>::get_class_info((GetTypeInfo<Ref<EditorExportPreset>,void>*)&local_148);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
         Vector<int>::push_back(local_b8, 0);
         GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_148);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
         Vector<int>::push_back(local_b8, 0);
         MethodInfo::get_compatibility_hash();
         *(undefined8*)( this + 0x390 ) = 0;
         lVar6 = *(long*)( this + 8 );
         pcVar4 = *(code**)( lVar6 + 0xd8 );
         if (( ( pcVar4 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar4 = *(code**)( lVar6 + 0xd0 ) ),pcVar4 == (code*)0x0) {
            local_158 = 0;
            String::parse_latin1((String*)&local_158, "EditorExportPlatformExtension");
            StringName::StringName((StringName*)&local_150, (String*)&local_158, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_148, (StringName*)&local_150);
            if (local_140[0] == 0) {
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
               local_1a0 = 0;
               if (StringName::configured != '\0') goto LAB_0010f2de;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
               LAB_0010f302:lVar6 = *(long*)( this + 8 );
               pcVar4 = *(code**)( lVar6 + 200 );
               if (( ( pcVar4 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar4 = *(code**)( lVar6 + 0xc0 ) ),pcVar4 == (code*)0x0) goto LAB_0010f18a;
               uVar5 = ( *pcVar4 )(*(undefined8*)( lVar6 + 0xa0 ));
               *(undefined8*)( this + 0x390 ) = uVar5;
            }
 else {
               local_1a0 = *(long*)( local_140[0] + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
               if (StringName::configured != '\0') {
                  LAB_0010f2de:if (CONCAT71(uStack_14f, local_150) != 0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
               if (local_1a0 == 0) goto LAB_0010f302;
            }

            lVar6 = *(long*)( this + 8 );
         }
 else {
            uVar5 = ( *pcVar4 )(*(undefined8*)( lVar6 + 0xa0 ));
            *(undefined8*)( this + 0x390 ) = uVar5;
            lVar6 = *(long*)( this + 8 );
         }

         LAB_0010f18a:if (*(char*)( lVar6 + 0x29 ) != '\0') {
            plVar7 = (long*)operator_new(0x18, "");
            *plVar7 = (long)( this + 0x390 );
            plVar7[1] = (long)( this + 0x388 );
            plVar7[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar7;
         }

         this[0x388] = (EditorExportPlatformExtension)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_118);
      }

      pcVar4 = *(code**)( this + 0x390 );
      if (pcVar4 == (code*)0x0) {
         if (_gdvirtual__has_valid_export_configuration_call(Ref<EditorExportPreset>, bool,bool&), ::first_print != '\0') {
            local_148 = 0;
            local_118 = 0x116438;
            uStack_114 = 0;
            uStack_110 = 0x23;
            uStack_10c = 0;
            String::parse_latin1((StrRange*)&local_148);
            local_158 = 0;
            local_118 = 0x116268;
            uStack_114 = 0;
            uStack_110 = 0x1f;
            uStack_10c = 0;
            String::parse_latin1((StrRange*)&local_158);
            local_168 = 0;
            local_118 = 0x117a80;
            uStack_114 = 0;
            uStack_110 = 2;
            uStack_10c = 0;
            String::parse_latin1((StrRange*)&local_168);
            ( **(code**)( *(long*)this + 0x48 ) )(local_178, this);
            operator+((char *)
            local_170,(String*)"Required virtual method ";
            String::operator +(local_160, (String*)local_170);
            String::operator +(&local_150, local_160);
            String::operator +((String*)&local_118, &local_150);
            _err_print_error("_gdvirtual__has_valid_export_configuration_call", "editor/export/editor_export_platform_extension.h", 0x7a, (String*)&local_118, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_160);
            CowData<char32_t>::_unref(local_170);
            CowData<char32_t>::_unref(local_178);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
            _gdvirtual__has_valid_export_configuration_call(Ref<EditorExportPreset>,bool,bool&)::
        first_print =
            '\0';
         }

         if (( ( pOVar8 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar8 + 0x140 ))(pOVar8);
         Memory::free_static(pOVar8, false);
      }

      uVar10 = 0;
      goto LAB_0010ebf0;
   }

   if (pOVar8 == (Object*)0x0) {
      local_118 = 0;
      uStack_114 = 0;
   }
 else {
      local_118 = (int)pOVar8;
      uStack_114 = ( undefined4 )((ulong)pOVar8 >> 0x20);
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
         local_118 = 0;
         uStack_114 = 0;
      }

      pcVar4 = *(code**)( this + 0x390 );
   }

   pSStack_70 = &local_150;
   local_78 = &local_118;
   local_150 = SVar9;
   if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
      ( *pcVar4 )(*(undefined8*)( this + 0x10 ), &local_78, &local_148);
   }
 else {
      ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x380, pcVar4, &local_78, &local_148);
   }

   uVar10 = CONCAT71(( int7 )(uVar10 >> 8), local_148._0_1_ != (StrRange)0x0);
   if (( CONCAT44(uStack_114, local_118) != 0 ) && ( cVar2 = cVar2 != '\0' )) {
      pOVar1 = (Object*)CONCAT44(uStack_114, local_118);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )();
         Memory::free_static(pOVar1, false);
      }

   }

}
else{local_118 = 0;uStack_114 = 0;uStack_110 = 0;Variant::Variant((Variant*)&local_78, pOVar8);Variant::Variant((Variant*)local_60, (bool)SVar9);local_a8 = (Variant*)&local_78;pVStack_a0 = (Variant*)local_60;( **(code**)( *plVar7 + 0x60 ) )((Variant*)local_98, plVar7, this + 0x380, &local_a8, 2, &local_118);if (local_118 != 0) {
   if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_60[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   goto LAB_0010ebb1;
}
bVar3 = Variant::operator_cast_to_bool((Variant*)local_98);uVar10 = CONCAT71(extraout_var, bVar3) & 0xffffffff;if (Variant::needs_deinit[local_98[0]] != '\0') {
   Variant::_clear_internal();
}
if (Variant::needs_deinit[local_60[0]] != '\0') {
   Variant::_clear_internal();
}
if (Variant::needs_deinit[(int)local_78] != '\0') {
   Variant::_clear_internal();
}
}if (( ( pOVar8 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar8 + 0x140 ))(pOVar8);Memory::free_static(pOVar8, false);}if (*(long*)param_2 != *(long*)( this + 400 )) {
   CowData<char32_t>::_ref((CowData<char32_t>*)param_2, (CowData*)( this + 400 ));
}
*param_3 = (bool)this[0x198];LAB_0010ebf0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return uVar10;}/* EditorExportPlatformExtension::can_export(Ref<EditorExportPreset> const&, String&, bool&, bool)
   const */ulong EditorExportPlatformExtension::can_export(EditorExportPlatformExtension *this, Ref *param_1, String *param_2, bool *param_3, bool param_4) {
   Object *pOVar1;
   char cVar2;
   bool bVar3;
   ulong uVar4;
   code *pcVar5;
   undefined7 extraout_var;
   undefined8 uVar6;
   long lVar7;
   long *plVar8;
   Object *pOVar9;
   long in_FS_OFFSET;
   long local_188;
   undefined8 local_158;
   StringName local_150;
   undefined7 uStack_14f;
   GetTypeInfo<bool,void> local_148[8];
   long local_140[5];
   int local_118;
   undefined4 uStack_114;
   undefined4 uStack_110;
   undefined4 uStack_10c;
   undefined1 local_108[16];
   undefined8 local_f8;
   undefined8 local_f0;
   undefined8 local_e8;
   undefined8 local_e0;
   undefined8 local_d8[2];
   undefined8 local_c8;
   ulong local_c0;
   Vector<int> local_b8[8];
   undefined8 local_b0;
   Variant *local_a8;
   Variant *pVStack_a0;
   int local_98[8];
   int *local_78;
   StringName *pSStack_70;
   int local_60[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 400 ) != *(long*)param_2) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 400 ), (CowData*)param_2);
   }

   pOVar9 = *(Object**)param_1;
   this[0x198] = ( EditorExportPlatformExtension ) * param_3;
   if (( pOVar9 != (Object*)0x0 ) && ( cVar2 = cVar2 == '\0' )) {
      pOVar9 = (Object*)0x0;
   }

   plVar8 = *(long**)( this + 0x98 );
   if (plVar8 == (long*)0x0) {
      LAB_0010f528:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x370] == (EditorExportPlatformExtension)0x0 )) {
         local_118 = 0;
         uStack_114 = 0;
         local_108 = (undefined1[16])0x0;
         uStack_110 = 0;
         uStack_10c = 0;
         local_f8 = 0;
         local_f0 = 0;
         local_e8 = 6;
         local_e0 = 1;
         local_d8[0] = 0;
         local_c8 = 0;
         local_c0 = 0;
         local_b0 = 0;
         String::parse_latin1((String*)&local_118, "_can_export");
         local_e0 = CONCAT44(local_e0._4_4_, 0xc);
         GetTypeInfo<bool,void>::get_class_info(local_148);
         PropertyInfo::operator =((PropertyInfo*)&uStack_110, (PropertyInfo*)local_148);
         PropertyInfo::~PropertyInfo((PropertyInfo*)local_148);
         local_c0 = local_c0 & 0xffffffff00000000;
         GetTypeInfo<Ref<EditorExportPreset>,void>::get_class_info((GetTypeInfo<Ref<EditorExportPreset>,void>*)local_148);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)local_148);
         PropertyInfo::~PropertyInfo((PropertyInfo*)local_148);
         Vector<int>::push_back(local_b8, 0);
         GetTypeInfo<bool,void>::get_class_info(local_148);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)local_148);
         PropertyInfo::~PropertyInfo((PropertyInfo*)local_148);
         Vector<int>::push_back(local_b8, 0);
         MethodInfo::get_compatibility_hash();
         *(undefined8*)( this + 0x378 ) = 0;
         lVar7 = *(long*)( this + 8 );
         pcVar5 = *(code**)( lVar7 + 0xd8 );
         if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar7 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar7 + 0xd0 ) ),pcVar5 == (code*)0x0) {
            local_158 = 0;
            String::parse_latin1((String*)&local_158, "EditorExportPlatformExtension");
            StringName::StringName(&local_150, (String*)&local_158, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_148, &local_150);
            if (local_140[0] == 0) {
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
               local_188 = 0;
               if (StringName::configured != '\0') goto LAB_0010faa6;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
               LAB_0010fac9:lVar7 = *(long*)( this + 8 );
               pcVar5 = *(code**)( lVar7 + 200 );
               if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar7 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar7 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_0010f964;
               uVar6 = ( *pcVar5 )(*(undefined8*)( lVar7 + 0xa0 ));
               *(undefined8*)( this + 0x378 ) = uVar6;
            }
 else {
               local_188 = *(long*)( local_140[0] + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
               if (StringName::configured != '\0') {
                  LAB_0010faa6:if (CONCAT71(uStack_14f, local_150) != 0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
               if (local_188 == 0) goto LAB_0010fac9;
            }

            lVar7 = *(long*)( this + 8 );
         }
 else {
            uVar6 = ( *pcVar5 )(*(undefined8*)( lVar7 + 0xa0 ));
            *(undefined8*)( this + 0x378 ) = uVar6;
            lVar7 = *(long*)( this + 8 );
         }

         LAB_0010f964:if (*(char*)( lVar7 + 0x29 ) != '\0') {
            plVar8 = (long*)operator_new(0x18, "");
            *plVar8 = (long)( this + 0x378 );
            plVar8[1] = (long)( this + 0x370 );
            plVar8[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar8;
         }

         this[0x370] = (EditorExportPlatformExtension)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_118);
      }

      pcVar5 = *(code**)( this + 0x378 );
      if (pcVar5 == (code*)0x0) {
         if (( ( pOVar9 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar9 + 0x140 ))(pOVar9);
         Memory::free_static(pOVar9, false);
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar4 = EditorExportPlatform::can_export((Ref*)this, (String*)param_1, (bool*)param_2, SUB81(param_3, 0));
         return uVar4;
      }

      goto LAB_0010fb3e;
   }

   if (pOVar9 == (Object*)0x0) {
      local_118 = 0;
      uStack_114 = 0;
   }
 else {
      local_118 = (int)pOVar9;
      uStack_114 = ( undefined4 )((ulong)pOVar9 >> 0x20);
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
         local_118 = 0;
         uStack_114 = 0;
      }

      pcVar5 = *(code**)( this + 0x378 );
   }

   pSStack_70 = &local_150;
   local_78 = &local_118;
   local_150 = (StringName)param_4;
   if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
      ( *pcVar5 )(*(undefined8*)( this + 0x10 ), &local_78, local_148);
   }
 else {
      ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x368, pcVar5, &local_78, local_148);
   }

   uVar4 = CONCAT71(( int7 )((ulong)param_1 >> 8), local_148[0] != (GetTypeInfo<bool,void>)0x0);
   if (( CONCAT44(uStack_114, local_118) != 0 ) && ( cVar2 = cVar2 != '\0' )) {
      pOVar1 = (Object*)CONCAT44(uStack_114, local_118);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

}
else{local_118 = 0;uStack_114 = 0;uStack_110 = 0;Variant::Variant((Variant*)&local_78, pOVar9);Variant::Variant((Variant*)local_60, param_4);local_a8 = (Variant*)&local_78;pVStack_a0 = (Variant*)local_60;( **(code**)( *plVar8 + 0x60 ) )((Variant*)local_98, plVar8, this + 0x368, &local_a8, 2, &local_118);if (local_118 != 0) {
   if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_60[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   goto LAB_0010f528;
}
bVar3 = Variant::operator_cast_to_bool((Variant*)local_98);uVar4 = CONCAT71(extraout_var, bVar3) & 0xffffffff;if (Variant::needs_deinit[local_98[0]] != '\0') {
   Variant::_clear_internal();
}
if (Variant::needs_deinit[local_60[0]] != '\0') {
   Variant::_clear_internal();
}
if (Variant::needs_deinit[(int)local_78] != '\0') {
   Variant::_clear_internal();
}
}if (( ( pOVar9 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar9 + 0x140 ))(pOVar9);Memory::free_static(pOVar9, false);}if (*(long*)param_2 != *(long*)( this + 400 )) {
   CowData<char32_t>::_ref((CowData<char32_t>*)param_2, (CowData*)( this + 400 ));
}
*param_3 = (bool)this[0x198];if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return uVar4 & 0xffffffff;
}
LAB_0010fb3e:/* WARNING: Subroutine does not return */__stack_chk_fail();}/* EditorExportPlatformExtension::run(Ref<EditorExportPreset> const&, int,
   BitField<EditorExportPlatform::DebugFlags>) */ulong EditorExportPlatformExtension::run(EditorExportPlatformExtension *this, long *param_1, int param_2, long param_4) {
   Variant *pVVar1;
   Object *pOVar2;
   char cVar3;
   undefined4 uVar4;
   code *pcVar5;
   ulong uVar6;
   undefined8 uVar7;
   long lVar8;
   long *plVar9;
   Object *pOVar10;
   Variant *pVVar11;
   long in_FS_OFFSET;
   Object *local_178;
   long local_170;
   long local_168;
   long local_160[5];
   uint local_138[2];
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
   Variant *local_c8;
   Variant *pVStack_c0;
   Variant *local_b8;
   int local_a8[8];
   Object **local_88;
   long *plStack_80;
   long *local_78;
   Variant local_70[24];
   Variant local_58[24];
   long local_40[2];
   pOVar10 = (Object*)*param_1;
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   if (( pOVar10 != (Object*)0x0 ) && ( cVar3 = cVar3 == '\0' )) {
      pOVar10 = (Object*)0x0;
   }

   plVar9 = *(long**)( this + 0x98 );
   if (plVar9 != (long*)0x0) {
      local_138[0] = 0;
      local_138[1] = 0;
      uStack_130 = 0;
      Variant::Variant((Variant*)&local_88, pOVar10);
      Variant::Variant(local_70, param_2);
      Variant::Variant(local_58, param_4);
      local_c8 = (Variant*)&local_88;
      pVStack_c0 = local_70;
      local_b8 = local_58;
      ( **(code**)( *plVar9 + 0x60 ) )((Variant*)local_a8, plVar9, this + 0x338, &local_c8, 3, local_138);
      if (local_138[0] == 0) {
         uVar6 = Variant::operator_cast_to_long((Variant*)local_a8);
         uVar6 = uVar6 & 0xffffffff;
         if (Variant::needs_deinit[local_a8[0]] != '\0') {
            Variant::_clear_internal();
         }

         pVVar11 = (Variant*)local_40;
         do {
            pVVar1 = pVVar11 + -0x18;
            pVVar11 = pVVar11 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( pVVar11 != (Variant*)&local_88 );
         goto LAB_0010fcd8;
      }

      if (Variant::needs_deinit[local_a8[0]] != '\0') {
         Variant::_clear_internal();
      }

      pVVar11 = (Variant*)local_40;
      do {
         pVVar1 = pVVar11 + -0x18;
         pVVar11 = pVVar11 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar11 != (Variant*)&local_88 );
   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x340] == (EditorExportPlatformExtension)0x0 )) {
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
      String::parse_latin1((String*)local_138, "_run");
      local_100 = CONCAT44(local_100._4_4_, 8);
      GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void>*)&local_168);
      PropertyInfo::operator =((PropertyInfo*)&uStack_130, (PropertyInfo*)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
      local_e0 = local_e0 & 0xffffffff00000000;
      GetTypeInfo<Ref<EditorExportPreset>,void>::get_class_info((GetTypeInfo<Ref<EditorExportPreset>,void>*)&local_168);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_f8, (PropertyInfo*)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
      Vector<int>::push_back(local_d8, 0);
      GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_168);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_f8, (PropertyInfo*)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
      Vector<int>::push_back(local_d8, 3);
      GetTypeInfo<BitField<EditorExportPlatform::DebugFlags>,void>::get_class_info((GetTypeInfo<BitField<EditorExportPlatform::DebugFlags>,void>*)&local_168);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_f8, (PropertyInfo*)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
      Vector<int>::push_back(local_d8, 0);
      uVar4 = MethodInfo::get_compatibility_hash();
      *(undefined8*)( this + 0x348 ) = 0;
      lVar8 = *(long*)( this + 8 );
      pcVar5 = *(code**)( lVar8 + 0xd8 );
      if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar8 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar8 + 0xd0 ) ),pcVar5 == (code*)0x0) {
         local_178 = (Object*)0x0;
         String::parse_latin1((String*)&local_178, "EditorExportPlatformExtension");
         StringName::StringName((StringName*)&local_170, (String*)&local_178, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_168, (StringName*)&local_170);
         if (local_160[0] == 0) {
            lVar8 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_160);
            if (StringName::configured != '\0') goto LAB_00110148;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
            LAB_00110165:lVar8 = *(long*)( this + 8 );
            pcVar5 = *(code**)( lVar8 + 200 );
            if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar8 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar8 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_00110070;
            uVar7 = ( *pcVar5 )(*(undefined8*)( lVar8 + 0xa0 ));
            *(undefined8*)( this + 0x348 ) = uVar7;
         }
 else {
            lVar8 = *(long*)( local_160[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_160);
            if (StringName::configured != '\0') {
               LAB_00110148:if (local_170 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
            if (lVar8 == 0) goto LAB_00110165;
         }

         lVar8 = *(long*)( this + 8 );
      }
 else {
         uVar7 = ( *pcVar5 )(*(undefined8*)( lVar8 + 0xa0 ), this + 0x338, uVar4);
         *(undefined8*)( this + 0x348 ) = uVar7;
         lVar8 = *(long*)( this + 8 );
      }

      LAB_00110070:if (*(char*)( lVar8 + 0x29 ) != '\0') {
         plVar9 = (long*)operator_new(0x18, "");
         *plVar9 = (long)( this + 0x348 );
         plVar9[1] = (long)( this + 0x340 );
         plVar9[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar9;
      }

      this[0x340] = (EditorExportPlatformExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_138);
   }

   pcVar5 = *(code**)( this + 0x348 );
   uVar6 = 0;
   if (pcVar5 != (code*)0x0) {
      if (pOVar10 == (Object*)0x0) {
         local_178 = (Object*)0x0;
      }
 else {
         local_178 = pOVar10;
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            local_178 = (Object*)0x0;
         }

         pcVar5 = *(code**)( this + 0x348 );
      }

      local_170 = (long)param_2;
      plStack_80 = &local_170;
      local_78 = &local_168;
      local_88 = &local_178;
      local_168 = param_4;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar5 )(*(undefined8*)( this + 0x10 ), &local_88, local_138);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x338, pcVar5, &local_88, local_138);
      }

      uVar6 = (ulong)local_138[0];
      if (( ( local_178 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),pOVar2 = local_178,cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
      Memory::free_static(pOVar2, false);
   }

}
LAB_0010fcd8:if (( ( pOVar10 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar10 + 0x140 ))(pOVar10);Memory::free_static(pOVar10, false);}if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return uVar6;}/* EditorExportPlatformExtension::get_preset_features(Ref<EditorExportPreset> const&, List<String,
   DefaultAllocator>*) const */void EditorExportPlatformExtension::get_preset_features(EditorExportPlatformExtension *this, Ref *param_1, List *param_2) {
   Object *pOVar1;
   char cVar2;
   undefined4 uVar3;
   undefined1(*pauVar4)[16];
   CowData<char32_t> *this_00;
   undefined8 uVar5;
   long lVar6;
   long *plVar7;
   code *pcVar8;
   Object *pOVar9;
   CowData *pCVar10;
   CowData *pCVar11;
   long in_FS_OFFSET;
   CowData<char32_t> local_168[8];
   CowData<char32_t> local_160[8];
   undefined8 local_158;
   String local_150[8];
   undefined8 local_148;
   Object *local_140[2];
   CowData *local_130;
   int local_128;
   undefined4 uStack_124;
   undefined4 uStack_120;
   undefined4 uStack_11c;
   char *local_f8;
   CowData *local_f0;
   undefined1 local_e8[16];
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8[2];
   undefined8 local_a8;
   ulong local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   Ref<EditorExportPreset> *local_58[3];
   long local_40;
   pOVar9 = *(Object**)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_130 = (CowData*)0x0;
   if (( pOVar9 != (Object*)0x0 ) && ( cVar2 = cVar2 == '\0' )) {
      pOVar9 = (Object*)0x0;
   }

   plVar7 = *(long**)( this + 0x98 );
   if (plVar7 == (long*)0x0) {
      LAB_0011031b:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x1a8] == (EditorExportPlatformExtension)0x0 )) {
         local_f8 = (undefined*)0x0;
         local_e8 = (undefined1[16])0x0;
         local_f0 = (CowData*)0x0;
         local_d8 = 0;
         local_d0 = 0;
         local_c8 = 6;
         local_c0 = 1;
         local_b8[0] = 0;
         local_a8 = 0;
         local_a0 = 0;
         local_90 = 0;
         String::parse_latin1((String*)&local_f8, "_get_preset_features");
         local_c0 = CONCAT44(local_c0._4_4_, 0x8c);
         GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void>*)&local_128);
         PropertyInfo::operator =((PropertyInfo*)&local_f0, (PropertyInfo*)&local_128);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
         local_a0 = local_a0 & 0xffffffff00000000;
         GetTypeInfo<Ref<EditorExportPreset>,void>::get_class_info((GetTypeInfo<Ref<EditorExportPreset>,void>*)&local_128);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
         Vector<int>::push_back(local_98, 0);
         uVar3 = MethodInfo::get_compatibility_hash();
         lVar6 = *(long*)( this + 8 );
         *(undefined8*)( this + 0x1b0 ) = 0;
         pcVar8 = *(code**)( lVar6 + 0xd8 );
         if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar6 + 0xd0 ) ),pcVar8 == (code*)0x0) {
            local_148 = 0;
            String::parse_latin1((String*)&local_148, "EditorExportPlatformExtension");
            StringName::StringName((StringName*)local_140, (String*)&local_148, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)local_140);
            if (CONCAT44(uStack_11c, uStack_120) == 0) {
               lVar6 = 0;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&uStack_120);
               if (StringName::configured != '\0') goto LAB_00110a5f;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
               LAB_00110a7e:lVar6 = *(long*)( this + 8 );
               pcVar8 = *(code**)( lVar6 + 200 );
               if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar6 + 0xc0 ) ),pcVar8 == (code*)0x0) goto LAB_0011098d;
               uVar5 = ( *pcVar8 )(*(undefined8*)( lVar6 + 0xa0 ));
               *(undefined8*)( this + 0x1b0 ) = uVar5;
            }
 else {
               lVar6 = *(long*)( CONCAT44(uStack_11c, uStack_120) + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&uStack_120);
               if (StringName::configured != '\0') {
                  LAB_00110a5f:if (local_140[0] != (Object*)0x0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
               if (lVar6 == 0) goto LAB_00110a7e;
            }

            lVar6 = *(long*)( this + 8 );
         }
 else {
            uVar5 = ( *pcVar8 )(*(undefined8*)( lVar6 + 0xa0 ), this + 0x1a0, uVar3);
            *(undefined8*)( this + 0x1b0 ) = uVar5;
            lVar6 = *(long*)( this + 8 );
         }

         LAB_0011098d:if (*(char*)( lVar6 + 0x29 ) != '\0') {
            plVar7 = (long*)operator_new(0x18, "");
            *plVar7 = (long)( this + 0x1b0 );
            plVar7[1] = (long)( this + 0x1a8 );
            plVar7[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar7;
         }

         this[0x1a8] = (EditorExportPlatformExtension)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
      }

      if (*(long*)( this + 0x1b0 ) != 0) {
         local_140[0] = (Object*)0x0;
         Ref<EditorExportPreset>::operator =((Ref<EditorExportPreset>*)local_140, (Ref*)pOVar9);
         uStack_120 = 0;
         uStack_11c = 0;
         local_58[0] = (Ref<EditorExportPreset>*)local_140;
         if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
            ( **(code**)( this + 0x1b0 ) )(*(undefined8*)( this + 0x10 ), local_58, &local_128);
         }
 else {
            ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x1a0, *(undefined8*)( this + 0x1b0 ), local_58, &local_128);
         }

         local_f0 = (CowData*)0x0;
         CowData<String>::_ref((CowData<String>*)&local_f0, (CowData*)&uStack_120);
         pCVar10 = local_f0;
         if (local_f0 != (CowData*)0x0) {
            CowData<String>::_unref((CowData<String>*)&local_130);
            local_130 = pCVar10;
            local_f0 = (CowData*)0x0;
         }

         CowData<String>::_unref((CowData<String>*)&local_f0);
         CowData<String>::_unref((CowData<String>*)&uStack_120);
         if (( ( local_140[0] != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar1 = local_140[0],cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar1 + 0x140 ))(pOVar1);
         Memory::free_static(pOVar1, false);
      }

      goto LAB_00110490;
   }

   if (_gdvirtual__get_preset_features_call(Ref<EditorExportPreset>, Vector<String> & ::first_print != '\0') {
      local_128 = 0;
      uStack_124 = 0;
      local_f8 = " must be overridden before calling.";
      local_f0 = (CowData*)0x23;
      String::parse_latin1((StrRange*)&local_128);
      local_148 = 0;
      local_f8 = "_get_preset_features";
      local_f0 = (CowData*)0x14;
      String::parse_latin1((StrRange*)&local_148);
      local_158 = 0;
      local_f8 = "::";
      local_f0 = (CowData*)0x2;
      String::parse_latin1((StrRange*)&local_158);
      ( **(code**)( *(long*)this + 0x48 ) )(local_168, this);
      operator+((char *)
      local_160,(String*)"Required virtual method ";
      String::operator +(local_150, (String*)local_160);
      String::operator +((String*)local_140, local_150);
      String::operator +((String*)&local_f8, (String*)local_140);
      _err_print_error("_gdvirtual__get_preset_features_call", "editor/export/editor_export_platform_extension.h", 0x30, (String*)&local_f8, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_140);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_150);
      CowData<char32_t>::_unref(local_160);
      CowData<char32_t>::_unref(local_168);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
      _gdvirtual__get_preset_features_call(Ref<EditorExportPreset>,Vector<String>&)::first_print =
      '\0';
      goto LAB_00110726;
   }

   if (pOVar9 == (Object*)0x0) goto LAB_00110357;
   cVar2 = RefCounted::unreference();
}
else{local_128 = 0;uStack_124 = 0;uStack_120 = 0;Variant::Variant((Variant*)local_78, pOVar9);local_80 = (Variant*)local_78;( **(code**)( *plVar7 + 0x60 ) )(local_58, plVar7, this + 0x1a0, &local_80, 1, &local_128);if (local_128 != 0) {
   if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   goto LAB_0011031b;
}
Variant::operator_cast_to_Vector((Variant*)&local_f8);if (local_f0 != (CowData*)0x0) {
   CowData<String>::_unref((CowData<String>*)&local_130);
   local_130 = local_f0;
   local_f0 = (CowData*)0x0;
}
CowData<String>::_unref((CowData<String>*)&local_f0);if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
   Variant::_clear_internal();
}
if (Variant::needs_deinit[local_78[0]] != '\0') {
   Variant::_clear_internal();
}
LAB_00110490:if (param_2 != (List*)0x0) {
   if (( ( pOVar9 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar9 + 0x140 ))(pOVar9);
   Memory::free_static(pOVar9, false);
}
CowData<String>::_copy_on_write((CowData<String>*)&local_130);pCVar11 = local_130;CowData<String>::_copy_on_write((CowData<String>*)&local_130);pCVar10 = local_130;if (local_130 != (CowData*)0x0) {
   pCVar10 = local_130 + *(long*)( local_130 + -8 ) * 8;
}
if (pCVar10 != pCVar11) {
   if (*(long*)param_2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_2 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   do {
      this_00 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
      *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
      if (*(long*)pCVar11 != 0) {
         CowData<char32_t>::_ref(this_00, pCVar11);
      }

      plVar7 = *(long**)param_2;
      lVar6 = plVar7[1];
      *(undefined8*)( this_00 + 8 ) = 0;
      *(long**)( this_00 + 0x18 ) = plVar7;
      *(long*)( this_00 + 0x10 ) = lVar6;
      if (lVar6 != 0) {
         *(CowData<char32_t>**)( lVar6 + 8 ) = this_00;
      }

      plVar7[1] = (long)this_00;
      if (*plVar7 == 0) {
         *plVar7 = (long)this_00;
      }

      pCVar11 = pCVar11 + 8;
      *(int*)( plVar7 + 2 ) = (int)plVar7[2] + 1;
   }
 while ( pCVar10 != pCVar11 );
}
goto LAB_00110357;}LAB_00110726:if (pOVar9 == (Object*)0x0) goto LAB_00110357;cVar2 = RefCounted::unreference();}if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
   ( **(code**)( *(long*)pOVar9 + 0x140 ) )(pOVar9);
   Memory::free_static(pOVar9, false);
}
LAB_00110357:CowData<String>::_unref((CowData<String>*)&local_130);if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* EditorExportPlatformExtension::get_option_icon(int) const */undefined8 *EditorExportPlatformExtension::get_option_icon(int param_1) {
   code *pcVar1;
   char cVar2;
   undefined4 uVar3;
   long lVar4;
   Object *pOVar5;
   undefined8 uVar6;
   long *plVar7;
   code *pcVar8;
   int in_EDX;
   Object *pOVar9;
   long in_RSI;
   undefined4 in_register_0000003c;
   undefined8 *puVar10;
   long in_FS_OFFSET;
   long lVar11;
   undefined8 local_138;
   long local_130;
   long local_128;
   long local_120[5];
   int local_f8;
   undefined4 uStack_f4;
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   undefined1 local_e8[16];
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8[2];
   undefined8 local_a8;
   ulong local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   long *local_58[3];
   long local_40;
   puVar10 = (undefined8*)CONCAT44(in_register_0000003c, param_1);
   plVar7 = *(long**)( in_RSI + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar7 == (long*)0x0) {
      LAB_00110c08:if (( *(long*)( in_RSI + 8 ) != 0 ) && ( *(char*)( in_RSI + 0x2c8 ) == '\0' )) {
         local_f8 = 0;
         uStack_f4 = 0;
         local_e8 = (undefined1[16])0x0;
         uStack_f0 = 0;
         uStack_ec = 0;
         local_d8 = 0;
         local_d0 = 0;
         local_c8 = 6;
         local_c0 = 1;
         local_b8[0] = 0;
         local_a8 = 0;
         local_a0 = 0;
         local_90 = 0;
         String::parse_latin1((String*)&local_f8, "_get_option_icon");
         local_c0 = CONCAT44(local_c0._4_4_, 0xc);
         GetTypeInfo<Ref<ImageTexture>,void>::get_class_info((GetTypeInfo<Ref<ImageTexture>,void>*)&local_128);
         PropertyInfo::operator =((PropertyInfo*)&uStack_f0, (PropertyInfo*)&local_128);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
         local_a0 = local_a0 & 0xffffffff00000000;
         GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_128);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
         Vector<int>::push_back(local_98, 3);
         uVar3 = MethodInfo::get_compatibility_hash();
         lVar4 = *(long*)( in_RSI + 8 );
         *(undefined8*)( in_RSI + 0x2d0 ) = 0;
         pcVar8 = *(code**)( lVar4 + 0xd8 );
         if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar4 + 0xd0 ) ),pcVar8 == (code*)0x0) {
            lVar11 = in_RSI + 0x2c0;
            local_138 = 0;
            String::parse_latin1((String*)&local_138, "EditorExportPlatformExtension");
            StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
            if (local_120[0] == 0) {
               lVar4 = 0;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
               if (StringName::configured != '\0') goto LAB_00111151;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
               LAB_00111170:lVar4 = *(long*)( in_RSI + 8 );
               pcVar8 = *(code**)( lVar4 + 200 );
               if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar4 + 0xc0 ) ),pcVar8 == (code*)0x0) goto LAB_00111043;
               uVar6 = ( *pcVar8 )(*(undefined8*)( lVar4 + 0xa0 ), lVar11);
               *(undefined8*)( in_RSI + 0x2d0 ) = uVar6;
            }
 else {
               lVar4 = *(long*)( local_120[0] + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
               if (StringName::configured != '\0') {
                  LAB_00111151:if (local_130 != 0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
               if (lVar4 == 0) goto LAB_00111170;
            }

            lVar4 = *(long*)( in_RSI + 8 );
         }
 else {
            uVar6 = ( *pcVar8 )(*(undefined8*)( lVar4 + 0xa0 ), in_RSI + 0x2c0, uVar3);
            *(undefined8*)( in_RSI + 0x2d0 ) = uVar6;
            lVar4 = *(long*)( in_RSI + 8 );
         }

         LAB_00111043:if (*(char*)( lVar4 + 0x29 ) != '\0') {
            plVar7 = (long*)operator_new(0x18, "");
            *plVar7 = in_RSI + 0x2d0;
            plVar7[1] = in_RSI + 0x2c8;
            plVar7[2] = *(long*)( in_RSI + 0x168 );
            *(long**)( in_RSI + 0x168 ) = plVar7;
         }

         *(undefined1*)( in_RSI + 0x2c8 ) = 1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
      }

      pcVar8 = *(code**)( in_RSI + 0x2d0 );
      if (pcVar8 == (code*)0x0) {
         EditorExportPlatform::get_option_icon(param_1);
         goto LAB_00110cbe;
      }

      local_58[0] = &local_128;
      local_128 = (long)in_EDX;
      local_f8 = 0;
      uStack_f4 = 0;
      pcVar1 = *(code**)( *(long*)( in_RSI + 8 ) + 0xe0 );
      if (pcVar1 == (code*)0x0) {
         ( *pcVar8 )(*(undefined8*)( in_RSI + 0x10 ), local_58, &local_f8);
         pOVar5 = (Object*)CONCAT44(uStack_f4, local_f8);
         if (pOVar5 != (Object*)0x0) {
            cVar2 = RefCounted::reference();
            if (cVar2 != '\0') {
               cVar2 = RefCounted::reference();
               pOVar9 = (Object*)0x0;
               if (cVar2 != '\0') {
                  pOVar9 = pOVar5;
               }

               cVar2 = RefCounted::unreference();
               goto joined_r0x00110eb5;
            }

            LAB_00110c88:if (CONCAT44(uStack_f4, local_f8) != 0) {
               cVar2 = RefCounted::unreference();
               pOVar9 = (Object*)0x0;
               if (cVar2 != '\0') goto LAB_00110e30;
            }

         }

      }
 else {
         ( *pcVar1 )(*(undefined8*)( in_RSI + 0x10 ), in_RSI + 0x2c0, pcVar8, local_58, &local_f8);
         pOVar5 = (Object*)CONCAT44(uStack_f4, local_f8);
         if (pOVar5 != (Object*)0x0) {
            cVar2 = RefCounted::reference();
            if (cVar2 == '\0') goto LAB_00110c88;
            cVar2 = RefCounted::reference();
            pOVar9 = (Object*)0x0;
            if (cVar2 != '\0') {
               pOVar9 = pOVar5;
            }

            cVar2 = RefCounted::unreference();
            joined_r0x00110eb5:if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
               ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
               Memory::free_static(pOVar5, false);
            }

            if (( CONCAT44(uStack_f4, local_f8) == 0 ) || ( cVar2 = cVar2 == '\0' )) goto LAB_00110d27;
            LAB_00110e30:pOVar5 = (Object*)CONCAT44(uStack_f4, local_f8);
            cVar2 = predelete_handler(pOVar5);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
               Memory::free_static(pOVar5, false);
            }

            goto LAB_00110d27;
         }

      }

   }
 else {
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, in_EDX);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar7 + 0x60 ) )(local_58, plVar7, in_RSI + 0x2c0, &local_80, 1, &local_f8, local_58);
      if (local_f8 != 0) {
         if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00110c08;
      }

      lVar4 = Variant::get_validated_object();
      if (( ( lVar4 == 0 ) || ( pOVar5 = (Object*)__dynamic_cast(lVar4, &Object::typeinfo, &ImageTexture::typeinfo, 0) ),pOVar5 == (Object*)0x0 )) {
         pOVar9 = (Object*)0x0;
      }
 else {
         cVar2 = RefCounted::reference();
         pOVar9 = (Object*)0x0;
         if (cVar2 != '\0') {
            pOVar9 = pOVar5;
         }

         cVar2 = RefCounted::unreference();
         if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
            ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
            Memory::free_static(pOVar5, false);
         }

      }

      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      LAB_00110d27:if (pOVar9 != (Object*)0x0) {
         *puVar10 = pOVar9;
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *puVar10 = 0;
         }

         cVar2 = RefCounted::unreference();
         if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
            ( **(code**)( *(long*)pOVar9 + 0x140 ) )(pOVar9);
            Memory::free_static(pOVar9, false);
         }

         goto LAB_00110cbe;
      }

   }

   *puVar10 = 0;
   LAB_00110cbe:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar10;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorExportPlatformExtension::get_device_architecture(int) const */CowData<char32_t> *EditorExportPlatformExtension::get_device_architecture(int param_1) {
   code *pcVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   int in_EDX;
   long in_RSI;
   undefined4 in_register_0000003c;
   CowData<char32_t> *this;
   long in_FS_OFFSET;
   undefined8 local_138;
   long local_130;
   long local_128;
   long local_120[5];
   int local_f8;
   undefined4 uStack_f4;
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   undefined1 local_e8[16];
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8[2];
   undefined8 local_a8;
   ulong local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   long *local_58[3];
   long local_40;
   this(CowData<char32_t> * CONCAT44(in_register_0000003c, param_1));
   plVar5 = *(long**)( in_RSI + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   if (plVar5 != (long*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, in_EDX);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar5 + 0x60 ) )(local_58, plVar5, in_RSI + 0x308, &local_80, 1, &local_f8);
      if (local_f8 == 0) {
         Variant::operator_cast_to_String((Variant*)&local_128);
         if (*(long*)this != local_128) {
            CowData<char32_t>::_unref(this);
            lVar4 = local_128;
            local_128 = 0;
            *(long*)this = lVar4;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
         if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_001113ba;
      }

      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( in_RSI + 8 ) != 0 ) && ( *(char*)( in_RSI + 0x310 ) == '\0' )) {
      local_f8 = 0;
      uStack_f4 = 0;
      local_e8 = (undefined1[16])0x0;
      uStack_f0 = 0;
      uStack_ec = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 6;
      local_c0 = 1;
      local_b8[0] = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_90 = 0;
      String::parse_latin1((String*)&local_f8, "_get_device_architecture");
      local_c0 = CONCAT44(local_c0._4_4_, 0xc);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_128);
      PropertyInfo::operator =((PropertyInfo*)&uStack_f0, (PropertyInfo*)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
      local_a0 = local_a0 & 0xffffffff00000000;
      GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
      Vector<int>::push_back(local_98, 3);
      uVar2 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long*)( in_RSI + 8 );
      *(undefined8*)( in_RSI + 0x318 ) = 0;
      pcVar6 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "EditorExportPlatformExtension");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
         if (local_120[0] == 0) {
            lVar4 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') goto LAB_001116bc;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_001116db:lVar4 = *(long*)( in_RSI + 8 );
            pcVar6 = *(code**)( lVar4 + 200 );
            if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_001115eb;
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), in_RSI + 0x308);
            *(undefined8*)( in_RSI + 0x318 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_120[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') {
               LAB_001116bc:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar4 == 0) goto LAB_001116db;
         }

         lVar4 = *(long*)( in_RSI + 8 );
      }
 else {
         uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), in_RSI + 0x308, uVar2);
         *(undefined8*)( in_RSI + 0x318 ) = uVar3;
         lVar4 = *(long*)( in_RSI + 8 );
      }

      LAB_001115eb:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = in_RSI + 0x318;
         plVar5[1] = in_RSI + 0x310;
         plVar5[2] = *(long*)( in_RSI + 0x168 );
         *(long**)( in_RSI + 0x168 ) = plVar5;
      }

      *(undefined1*)( in_RSI + 0x310 ) = 1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   pcVar6 = *(code**)( in_RSI + 0x318 );
   if (pcVar6 != (code*)0x0) {
      local_58[0] = &local_130;
      local_130 = (long)in_EDX;
      local_128 = 0;
      pcVar1 = *(code**)( *(long*)( in_RSI + 8 ) + 0xe0 );
      if (pcVar1 == (code*)0x0) {
         ( *pcVar6 )(*(undefined8*)( in_RSI + 0x10 ), local_58, (CowData<char32_t>*)&local_128);
         local_f8 = 0;
         uStack_f4 = 0;
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)&local_128);
         lVar4 = CONCAT44(uStack_f4, local_f8);
      }
 else {
         ( *pcVar1 )(*(undefined8*)( in_RSI + 0x10 ), in_RSI + 0x308, pcVar6, local_58, (CowData<char32_t>*)&local_128);
         local_f8 = 0;
         uStack_f4 = 0;
         lVar4 = local_128;
         if (local_128 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)&local_128);
            lVar4 = CONCAT44(uStack_f4, local_f8);
         }

      }

      if (*(long*)this != lVar4) {
         CowData<char32_t>::_unref(this);
         *(long*)this = lVar4;
         local_f8 = 0;
         uStack_f4 = 0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   }

   LAB_001113ba:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* EditorExportPlatformExtension::get_option_tooltip(int) const */CowData<char32_t> *EditorExportPlatformExtension::get_option_tooltip(int param_1) {
   code *pcVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   int in_EDX;
   long in_RSI;
   undefined4 in_register_0000003c;
   CowData<char32_t> *this;
   long in_FS_OFFSET;
   undefined8 local_138;
   long local_130;
   long local_128;
   long local_120[5];
   int local_f8;
   undefined4 uStack_f4;
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   undefined1 local_e8[16];
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8[2];
   undefined8 local_a8;
   ulong local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   long *local_58[3];
   long local_40;
   this(CowData<char32_t> * CONCAT44(in_register_0000003c, param_1));
   plVar5 = *(long**)( in_RSI + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   if (plVar5 != (long*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, in_EDX);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar5 + 0x60 ) )(local_58, plVar5, in_RSI + 0x2f0, &local_80, 1, &local_f8);
      if (local_f8 == 0) {
         Variant::operator_cast_to_String((Variant*)&local_128);
         if (*(long*)this != local_128) {
            CowData<char32_t>::_unref(this);
            lVar4 = local_128;
            local_128 = 0;
            *(long*)this = lVar4;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
         if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0011192a;
      }

      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( in_RSI + 8 ) != 0 ) && ( *(char*)( in_RSI + 0x2f8 ) == '\0' )) {
      local_f8 = 0;
      uStack_f4 = 0;
      local_e8 = (undefined1[16])0x0;
      uStack_f0 = 0;
      uStack_ec = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 6;
      local_c0 = 1;
      local_b8[0] = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_90 = 0;
      String::parse_latin1((String*)&local_f8, "_get_option_tooltip");
      local_c0 = CONCAT44(local_c0._4_4_, 0xc);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_128);
      PropertyInfo::operator =((PropertyInfo*)&uStack_f0, (PropertyInfo*)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
      local_a0 = local_a0 & 0xffffffff00000000;
      GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
      Vector<int>::push_back(local_98, 3);
      uVar2 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long*)( in_RSI + 8 );
      *(undefined8*)( in_RSI + 0x300 ) = 0;
      pcVar6 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "EditorExportPlatformExtension");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
         if (local_120[0] == 0) {
            lVar4 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') goto LAB_00111c2c;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_00111c4b:lVar4 = *(long*)( in_RSI + 8 );
            pcVar6 = *(code**)( lVar4 + 200 );
            if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_00111b5b;
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), in_RSI + 0x2f0);
            *(undefined8*)( in_RSI + 0x300 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_120[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') {
               LAB_00111c2c:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar4 == 0) goto LAB_00111c4b;
         }

         lVar4 = *(long*)( in_RSI + 8 );
      }
 else {
         uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), in_RSI + 0x2f0, uVar2);
         *(undefined8*)( in_RSI + 0x300 ) = uVar3;
         lVar4 = *(long*)( in_RSI + 8 );
      }

      LAB_00111b5b:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = in_RSI + 0x300;
         plVar5[1] = in_RSI + 0x2f8;
         plVar5[2] = *(long*)( in_RSI + 0x168 );
         *(long**)( in_RSI + 0x168 ) = plVar5;
      }

      *(undefined1*)( in_RSI + 0x2f8 ) = 1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   pcVar6 = *(code**)( in_RSI + 0x300 );
   if (pcVar6 != (code*)0x0) {
      local_58[0] = &local_130;
      local_130 = (long)in_EDX;
      local_128 = 0;
      pcVar1 = *(code**)( *(long*)( in_RSI + 8 ) + 0xe0 );
      if (pcVar1 == (code*)0x0) {
         ( *pcVar6 )(*(undefined8*)( in_RSI + 0x10 ), local_58, (CowData<char32_t>*)&local_128);
         local_f8 = 0;
         uStack_f4 = 0;
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)&local_128);
         lVar4 = CONCAT44(uStack_f4, local_f8);
      }
 else {
         ( *pcVar1 )(*(undefined8*)( in_RSI + 0x10 ), in_RSI + 0x2f0, pcVar6, local_58, (CowData<char32_t>*)&local_128);
         local_f8 = 0;
         uStack_f4 = 0;
         lVar4 = local_128;
         if (local_128 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)&local_128);
            lVar4 = CONCAT44(uStack_f4, local_f8);
         }

      }

      if (*(long*)this != lVar4) {
         CowData<char32_t>::_unref(this);
         *(long*)this = lVar4;
         local_f8 = 0;
         uStack_f4 = 0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   }

   LAB_0011192a:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* EditorExportPlatformExtension::get_option_label(int) const */CowData<char32_t> *EditorExportPlatformExtension::get_option_label(int param_1) {
   code *pcVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   int in_EDX;
   long in_RSI;
   undefined4 in_register_0000003c;
   CowData<char32_t> *this;
   long in_FS_OFFSET;
   undefined8 local_138;
   long local_130;
   long local_128;
   long local_120[5];
   int local_f8;
   undefined4 uStack_f4;
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   undefined1 local_e8[16];
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8[2];
   undefined8 local_a8;
   ulong local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   long *local_58[3];
   long local_40;
   this(CowData<char32_t> * CONCAT44(in_register_0000003c, param_1));
   plVar5 = *(long**)( in_RSI + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   if (plVar5 != (long*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, in_EDX);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar5 + 0x60 ) )(local_58, plVar5, in_RSI + 0x2d8, &local_80, 1, &local_f8);
      if (local_f8 == 0) {
         Variant::operator_cast_to_String((Variant*)&local_128);
         if (*(long*)this != local_128) {
            CowData<char32_t>::_unref(this);
            lVar4 = local_128;
            local_128 = 0;
            *(long*)this = lVar4;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
         if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00111e9a;
      }

      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( in_RSI + 8 ) != 0 ) && ( *(char*)( in_RSI + 0x2e0 ) == '\0' )) {
      local_f8 = 0;
      uStack_f4 = 0;
      local_e8 = (undefined1[16])0x0;
      uStack_f0 = 0;
      uStack_ec = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 6;
      local_c0 = 1;
      local_b8[0] = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_90 = 0;
      String::parse_latin1((String*)&local_f8, "_get_option_label");
      local_c0 = CONCAT44(local_c0._4_4_, 0xc);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_128);
      PropertyInfo::operator =((PropertyInfo*)&uStack_f0, (PropertyInfo*)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
      local_a0 = local_a0 & 0xffffffff00000000;
      GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
      Vector<int>::push_back(local_98, 3);
      uVar2 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long*)( in_RSI + 8 );
      *(undefined8*)( in_RSI + 0x2e8 ) = 0;
      pcVar6 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "EditorExportPlatformExtension");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
         if (local_120[0] == 0) {
            lVar4 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') goto LAB_0011219c;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_001121bb:lVar4 = *(long*)( in_RSI + 8 );
            pcVar6 = *(code**)( lVar4 + 200 );
            if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_001120cb;
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), in_RSI + 0x2d8);
            *(undefined8*)( in_RSI + 0x2e8 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_120[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') {
               LAB_0011219c:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar4 == 0) goto LAB_001121bb;
         }

         lVar4 = *(long*)( in_RSI + 8 );
      }
 else {
         uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), in_RSI + 0x2d8, uVar2);
         *(undefined8*)( in_RSI + 0x2e8 ) = uVar3;
         lVar4 = *(long*)( in_RSI + 8 );
      }

      LAB_001120cb:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = in_RSI + 0x2e8;
         plVar5[1] = in_RSI + 0x2e0;
         plVar5[2] = *(long*)( in_RSI + 0x168 );
         *(long**)( in_RSI + 0x168 ) = plVar5;
      }

      *(undefined1*)( in_RSI + 0x2e0 ) = 1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   pcVar6 = *(code**)( in_RSI + 0x2e8 );
   if (pcVar6 != (code*)0x0) {
      local_58[0] = &local_130;
      local_130 = (long)in_EDX;
      local_128 = 0;
      pcVar1 = *(code**)( *(long*)( in_RSI + 8 ) + 0xe0 );
      if (pcVar1 == (code*)0x0) {
         ( *pcVar6 )(*(undefined8*)( in_RSI + 0x10 ), local_58, (CowData<char32_t>*)&local_128);
         local_f8 = 0;
         uStack_f4 = 0;
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)&local_128);
         lVar4 = CONCAT44(uStack_f4, local_f8);
      }
 else {
         ( *pcVar1 )(*(undefined8*)( in_RSI + 0x10 ), in_RSI + 0x2d8, pcVar6, local_58, (CowData<char32_t>*)&local_128);
         local_f8 = 0;
         uStack_f4 = 0;
         lVar4 = local_128;
         if (local_128 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)&local_128);
            lVar4 = CONCAT44(uStack_f4, local_f8);
         }

      }

      if (*(long*)this != lVar4) {
         CowData<char32_t>::_unref(this);
         *(long*)this = lVar4;
         local_f8 = 0;
         uStack_f4 = 0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   }

   LAB_00111e9a:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* EditorExportPlatformExtension::is_executable(String const&) const */ulong EditorExportPlatformExtension::is_executable(EditorExportPlatformExtension *this, String *param_1) {
   bool bVar1;
   undefined4 uVar2;
   code *pcVar3;
   undefined7 extraout_var;
   undefined8 uVar4;
   long lVar5;
   long *plVar6;
   ulong uVar7;
   long in_FS_OFFSET;
   undefined8 local_138;
   long local_130;
   GetTypeInfo<bool,void> local_128[8];
   long local_120[5];
   int local_f8[2];
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   undefined1 local_e8[16];
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8[2];
   undefined8 local_a8;
   ulong local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   CowData<char32_t> *local_58[3];
   long local_40;
   plVar6 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar6 != (long*)0x0) {
      local_f8[0] = 0;
      local_f8[1] = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, (String*)param_1);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar6 + 0x60 ) )((Variant*)local_58, plVar6, this + 0x1b8, &local_80, 1, local_f8);
      if (local_f8[0] == 0) {
         bVar1 = Variant::operator_cast_to_bool((Variant*)local_58);
         uVar7 = CONCAT71(extraout_var, bVar1) & 0xffffffff;
         if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00112359;
      }

      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x1c0] == (EditorExportPlatformExtension)0x0 )) {
      local_f8[0] = 0;
      local_f8[1] = 0;
      local_e8 = (undefined1[16])0x0;
      uStack_f0 = 0;
      uStack_ec = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 6;
      local_c0 = 1;
      local_b8[0] = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_90 = 0;
      String::parse_latin1((String*)local_f8, "_is_executable");
      local_c0 = CONCAT44(local_c0._4_4_, 0xc);
      GetTypeInfo<bool,void>::get_class_info(local_128);
      PropertyInfo::operator =((PropertyInfo*)&uStack_f0, (PropertyInfo*)local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_128);
      local_a0 = local_a0 & 0xffffffff00000000;
      GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void>*)local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_128);
      Vector<int>::push_back(local_98, 0);
      uVar2 = MethodInfo::get_compatibility_hash();
      lVar5 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x1c8 ) = 0;
      pcVar3 = *(code**)( lVar5 + 0xd8 );
      if (( ( pcVar3 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar3 = *(code**)( lVar5 + 0xd0 ) ),pcVar3 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "EditorExportPlatformExtension");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_128, (StringName*)&local_130);
         if (local_120[0] == 0) {
            lVar5 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') goto LAB_00112677;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_00112696:lVar5 = *(long*)( this + 8 );
            pcVar3 = *(code**)( lVar5 + 200 );
            if (( ( pcVar3 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar3 = *(code**)( lVar5 + 0xc0 ) ),pcVar3 == (code*)0x0) goto LAB_001125af;
            uVar4 = ( *pcVar3 )(*(undefined8*)( lVar5 + 0xa0 ), this + 0x1b8);
            *(undefined8*)( this + 0x1c8 ) = uVar4;
         }
 else {
            lVar5 = *(long*)( local_120[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') {
               LAB_00112677:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar5 == 0) goto LAB_00112696;
         }

         lVar5 = *(long*)( this + 8 );
      }
 else {
         uVar4 = ( *pcVar3 )(*(undefined8*)( lVar5 + 0xa0 ), this + 0x1b8, uVar2);
         *(undefined8*)( this + 0x1c8 ) = uVar4;
         lVar5 = *(long*)( this + 8 );
      }

      LAB_001125af:if (*(char*)( lVar5 + 0x29 ) != '\0') {
         plVar6 = (long*)operator_new(0x18, "");
         *plVar6 = (long)( this + 0x1c8 );
         plVar6[1] = (long)( this + 0x1c0 );
         plVar6[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar6;
      }

      this[0x1c0] = (EditorExportPlatformExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_f8);
   }

   pcVar3 = *(code**)( this + 0x1c8 );
   uVar7 = 0;
   if (pcVar3 != (code*)0x0) {
      local_f8[0] = 0;
      local_f8[1] = 0;
      if (*(long*)param_1 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)local_f8, (CowData*)param_1);
         pcVar3 = *(code**)( this + 0x1c8 );
      }

      local_58[0] = (CowData<char32_t>*)local_f8;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar3 )(*(undefined8*)( this + 0x10 ), local_58, local_128);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x1b8, pcVar3, local_58, local_128);
      }

      uVar7 = ( ulong )(local_128[0] != (GetTypeInfo<bool,void>)0x0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_f8);
   }

   LAB_00112359:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar7;
}
/* CowData<EditorExportPlatform::ExportMessage>::_copy_on_write() [clone .isra.0] */void CowData<EditorExportPlatform::ExportMessage>::_copy_on_write(CowData<EditorExportPlatform::ExportMessage> *this) {
   undefined4 uVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   undefined8 *puVar5;
   undefined4 *puVar6;
   ulong uVar7;
   long lVar8;
   undefined8 *puVar9;
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
   if (lVar2 * 0x18 != 0) {
      uVar7 = lVar2 * 0x18 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
   }

   puVar5 = (undefined8*)Memory::alloc_static(uVar7, false);
   if (puVar5 != (undefined8*)0x0) {
      lVar8 = 0;
      *puVar5 = 1;
      puVar5[1] = lVar2;
      puVar9 = puVar5 + 2;
      if (lVar2 != 0) {
         do {
            puVar6 = (undefined4*)( (long)puVar9 + *(long*)this + ( -0x10 - (long)puVar5 ) );
            uVar1 = *puVar6;
            puVar9[1] = 0;
            lVar3 = *(long*)( puVar6 + 2 );
            *(undefined4*)puVar9 = uVar1;
            if (lVar3 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar9 + 1 ), (CowData*)( puVar6 + 2 ));
            }

            puVar9[2] = 0;
            if (*(long*)( puVar6 + 4 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar9 + 2 ), (CowData*)( puVar6 + 4 ));
            }

            lVar8 = lVar8 + 1;
            puVar9 = puVar9 + 3;
         }
 while ( lVar2 != lVar8 );
      }

      _unref(this);
      *(undefined8**)this = puVar5 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* EditorExportPlatformExtension::~EditorExportPlatformExtension() */void EditorExportPlatformExtension::~EditorExportPlatformExtension(EditorExportPlatformExtension *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_0011ba70;
   if (bVar1) {
      if (*(long*)( this + 0x458 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112cdc;
      }

      if (*(long*)( this + 0x440 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112cdc;
      }

      if (*(long*)( this + 0x428 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112cdc;
      }

      if (*(long*)( this + 0x410 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112cdc;
      }

      if (*(long*)( this + 0x3f8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112cdc;
      }

      if (*(long*)( this + 0x3e0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112cdc;
      }

      if (*(long*)( this + 0x3c8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112cdc;
      }

      if (*(long*)( this + 0x3b0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112cdc;
      }

      if (*(long*)( this + 0x398 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112cdc;
      }

      if (*(long*)( this + 0x380 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112cdc;
      }

      if (*(long*)( this + 0x368 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112cdc;
      }

      if (*(long*)( this + 0x350 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112cdc;
      }

      if (*(long*)( this + 0x338 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112cdc;
      }

      if (*(long*)( this + 800 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112cdc;
      }

      if (*(long*)( this + 0x308 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112cdc;
      }

      if (*(long*)( this + 0x2f0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112cdc;
      }

      if (*(long*)( this + 0x2d8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112cdc;
      }

      if (*(long*)( this + 0x2c0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112cdc;
      }

      if (*(long*)( this + 0x2a8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112cdc;
      }

      if (*(long*)( this + 0x290 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112cdc;
      }

      if (*(long*)( this + 0x278 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112cdc;
      }

      if (*(long*)( this + 0x260 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112cdc;
      }

      if (*(long*)( this + 0x248 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112cdc;
      }

      if (*(long*)( this + 0x230 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112cdc;
      }

      if (*(long*)( this + 0x218 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112cdc;
      }

      if (*(long*)( this + 0x200 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112cdc;
      }

      if (*(long*)( this + 0x1e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112cdc;
      }

      if (*(long*)( this + 0x1d0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112cdc;
      }

      if (*(long*)( this + 0x1b8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00112cdc;
      }

      if (*(long*)( this + 0x1a0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00112cdc:CowData<char32_t>::_unref((CowData<char32_t>*)( this + 400 ));
   *(code**)this = __print_line;
   CowData<EditorExportPlatform::ExportMessage>::_unref((CowData<EditorExportPlatform::ExportMessage>*)( this + 0x188 ));
   *(undefined***)this = &PTR__initialize_classv_0011b910;
   Object::~Object((Object*)this);
   return;
}
/* EditorExportPlatformExtension::~EditorExportPlatformExtension() */void EditorExportPlatformExtension::~EditorExportPlatformExtension(EditorExportPlatformExtension *this) {
   ~EditorExportPlatformExtension(this)
   ;;
   operator_delete(this, 0x470);
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
   return (uint)CONCAT71(0x11bf, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11bf, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
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
/* EditorExportPlatform::get_message_count() const */undefined4 EditorExportPlatform::get_message_count(EditorExportPlatform *this) {
   if (*(long*)( this + 0x188 ) != 0) {
      return *(undefined4*)( *(long*)( this + 0x188 ) + -8 );
   }

   return 0;
}
/* EditorExportPlatform::get_worst_message_type() const */int EditorExportPlatform::get_worst_message_type(EditorExportPlatform *this) {
   int *piVar1;
   long lVar2;
   int *piVar3;
   int iVar4;
   piVar3 = *(int**)( this + 0x188 );
   if (( piVar3 == (int*)0x0 ) || ( lVar2 = lVar2 < 1 )) {
      return 0;
   }

   iVar4 = 0;
   piVar1 = piVar3 + lVar2 * 6;
   if (( (int)lVar2 * 3 & 1U ) != 0) {
      iVar4 = 0;
      if (0 < *piVar3) {
         iVar4 = *piVar3;
      }

      piVar3 = piVar3 + 6;
      if (piVar1 == piVar3) {
         return iVar4;
      }

   }

   do {
      if (iVar4 < *piVar3) {
         iVar4 = *piVar3;
      }

      if (iVar4 < piVar3[6]) {
         iVar4 = piVar3[6];
      }

      piVar3 = piVar3 + 0xc;
   }
 while ( piVar1 != piVar3 );
   return iVar4;
}
/* EditorExportPlatform::resolve_platform_feature_priorities(Ref<EditorExportPreset> const&,
   HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >&) */void EditorExportPlatform::resolve_platform_feature_priorities(Ref *param_1, HashSet *param_2) {
   return;
}
/* EditorExportPlatform::get_custom_project_settings(Ref<EditorExportPreset> const&) const */Ref *EditorExportPlatform::get_custom_project_settings(Ref *param_1) {
   *(undefined8*)( param_1 + 0x28 ) = 2;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( param_1 + 0x18 ) = (undefined1[16])0x0;
   return param_1;
}
/* EditorExportPlatformExtension::is_class_ptr(void*) const */uint EditorExportPlatformExtension::is_class_ptr(EditorExportPlatformExtension *this, void *param_1) {
   return (uint)CONCAT71(0x11be, (undefined4*)param_1 == &EditorExportPlatform::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11be, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11bf, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11bf, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* EditorExportPlatformExtension::_getv(StringName const&, Variant&) const */undefined8 EditorExportPlatformExtension::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorExportPlatformExtension::_setv(StringName const&, Variant const&) */undefined8 EditorExportPlatformExtension::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorExportPlatformExtension::_validate_propertyv(PropertyInfo&) const */void EditorExportPlatformExtension::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* EditorExportPlatformExtension::_property_can_revertv(StringName const&) const */undefined8 EditorExportPlatformExtension::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* EditorExportPlatformExtension::_property_get_revertv(StringName const&, Variant&) const */undefined8 EditorExportPlatformExtension::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorExportPlatformExtension::_notificationv(int, bool) */void EditorExportPlatformExtension::_notificationv(int param_1, bool param_2) {
   return;
}
/* EditorExportPlatformExtension::set_config_missing_templates(bool) const */void EditorExportPlatformExtension::set_config_missing_templates(EditorExportPlatformExtension *this, bool param_1) {
   this[0x198] = (EditorExportPlatformExtension)param_1;
   return;
}
/* EditorExportPlatformExtension::get_config_missing_templates() const */EditorExportPlatformExtension EditorExportPlatformExtension::get_config_missing_templates(EditorExportPlatformExtension *this) {
   return this[0x198];
}
/* MethodBindTRC<bool>::_gen_argument_type(int) const */undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1) {
   return 1;
}
/* MethodBindTRC<bool>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTC<bool>::_gen_argument_type(int) const */bool MethodBindTC<bool>::_gen_argument_type(MethodBindTC<bool> *this, int param_1) {
   return param_1 == 0;
}
/* MethodBindTC<bool>::get_argument_meta(int) const */undefined8 MethodBindTC<bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<String>::_gen_argument_type(int) const */undefined8 MethodBindTRC<String>::_gen_argument_type(int param_1) {
   return 4;
}
/* MethodBindTRC<String>::get_argument_meta(int) const */undefined8 MethodBindTRC<String>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTC<String const&>::_gen_argument_type(int) const */long MethodBindTC<String_const&>::_gen_argument_type(MethodBindTC<String_const&> *this, int param_1) {
   return ( ulong )(param_1 == 0) << 2;
}
/* MethodBindTC<String const&>::get_argument_meta(int) const */undefined8 MethodBindTC<String_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTC<String const&>::~MethodBindTC() */void MethodBindTC<String_const&>::~MethodBindTC(MethodBindTC<String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011bd28;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTC<String const&>::~MethodBindTC() */void MethodBindTC<String_const&>::~MethodBindTC(MethodBindTC<String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011bd28;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<String>::~MethodBindTRC() */void MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011bd88;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<String>::~MethodBindTRC() */void MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011bd88;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTC<bool>::~MethodBindTC() */void MethodBindTC<bool>::~MethodBindTC(MethodBindTC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011bde8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTC<bool>::~MethodBindTC() */void MethodBindTC<bool>::~MethodBindTC(MethodBindTC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011bde8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011be48;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011be48;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_0011b910;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_0011b910;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* EditorExportPlatform::_get_message_type(int) const */undefined4 EditorExportPlatform::_get_message_type(EditorExportPlatform *this, int param_1) {
   long lVar1;
   long lVar2;
   long lVar3;
   lVar1 = *(long*)( this + 0x188 );
   lVar2 = (long)param_1;
   if (param_1 < 0) {
      if (lVar1 != 0) {
         lVar3 = *(long*)( lVar1 + -8 );
         goto LAB_00113299;
      }

   }
 else if (lVar1 != 0) {
      lVar3 = *(long*)( lVar1 + -8 );
      if (lVar2 < lVar3) {
         return *(undefined4*)( lVar1 + lVar2 * 0x18 );
      }

      goto LAB_00113299;
   }

   lVar3 = 0;
   LAB_00113299:_err_print_index_error("_get_message_type", "editor/export/editor_export_platform.h", 0x104, lVar2, lVar3, "p_index", "messages.size()", "", false, false);
   return 0;
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
/* EditorExportPlatformExtension::_bind_methods() [clone .cold] */void EditorExportPlatformExtension::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<EditorExportPlatform::ExportMessage>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<EditorExportPlatform::ExportMessage>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* EditorExportPlatformExtension::_get_class_namev() const */undefined8 *EditorExportPlatformExtension::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00113763:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00113763;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorExportPlatformExtension");
         goto LAB_001137ce;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorExportPlatformExtension");
   LAB_001137ce:return &_get_class_namev();
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
         LAB_00113843:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00113843;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_001138ae;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_001138ae:return &_get_class_namev();
}
/* String::~String() */void String::~String(String *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* EditorExportPlatformExtension::set_config_error(String const&) const */void EditorExportPlatformExtension::set_config_error(EditorExportPlatformExtension *this, String *param_1) {
   if (*(long*)( this + 400 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 400 ), (CowData*)param_1);
      return;
   }

   return;
}
/* EditorExportPlatformExtension::get_config_error() const */void EditorExportPlatformExtension::get_config_error(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 400 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 400 ));
   }

   return;
}
/* EditorExportPlatform::_get_message_category(int) const */CowData<char32_t> *EditorExportPlatform::_get_message_category(int param_1) {
   long lVar1;
   long lVar2;
   int in_EDX;
   long in_RSI;
   undefined4 in_register_0000003c;
   CowData<char32_t> *this;
   long lVar3;
   this(CowData<char32_t> * CONCAT44(in_register_0000003c, param_1));
   lVar2 = (long)in_EDX;
   lVar1 = *(long*)( in_RSI + 0x188 );
   if (in_EDX < 0) {
      if (lVar1 != 0) {
         lVar3 = *(long*)( lVar1 + -8 );
         goto LAB_001139e9;
      }

   }
 else if (lVar1 != 0) {
      lVar3 = *(long*)( lVar1 + -8 );
      if (lVar2 < lVar3) {
         *(undefined8*)this = 0;
         lVar1 = lVar1 + lVar2 * 0x18;
         if (*(long*)( lVar1 + 8 ) != 0) {
            CowData<char32_t>::_ref(this, (CowData*)( lVar1 + 8 ));
         }

         return this;
      }

      goto LAB_001139e9;
   }

   lVar3 = 0;
   LAB_001139e9:_err_print_index_error("_get_message_category", "editor/export/editor_export_platform.h", 0x109, lVar2, lVar3, "p_index", "messages.size()", "", false, false);
   *(undefined8*)this = 0;
   return this;
}
/* EditorExportPlatform::_get_message_text(int) const */CowData<char32_t> *EditorExportPlatform::_get_message_text(int param_1) {
   long lVar1;
   long lVar2;
   int in_EDX;
   long in_RSI;
   undefined4 in_register_0000003c;
   CowData<char32_t> *this;
   long lVar3;
   this(CowData<char32_t> * CONCAT44(in_register_0000003c, param_1));
   lVar2 = (long)in_EDX;
   lVar1 = *(long*)( in_RSI + 0x188 );
   if (in_EDX < 0) {
      if (lVar1 != 0) {
         lVar3 = *(long*)( lVar1 + -8 );
         goto LAB_00113aa9;
      }

   }
 else if (lVar1 != 0) {
      lVar3 = *(long*)( lVar1 + -8 );
      if (lVar2 < lVar3) {
         *(undefined8*)this = 0;
         lVar1 = lVar1 + lVar2 * 0x18;
         if (*(long*)( lVar1 + 0x10 ) != 0) {
            CowData<char32_t>::_ref(this, (CowData*)( lVar1 + 0x10 ));
         }

         return this;
      }

      goto LAB_00113aa9;
   }

   lVar3 = 0;
   LAB_00113aa9:_err_print_index_error("_get_message_text", "editor/export/editor_export_platform.h", 0x10e, lVar2, lVar3, "p_index", "messages.size()", "", false, false);
   *(undefined8*)this = 0;
   return this;
}
/* EditorExportPlatform::get_message(int) const */undefined4 *EditorExportPlatform::get_message(int param_1) {
   undefined4 *puVar1;
   undefined4 uVar2;
   long lVar3;
   long lVar4;
   int in_EDX;
   long in_RSI;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long lVar6;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   lVar4 = (long)in_EDX;
   lVar3 = *(long*)( in_RSI + 0x188 );
   if (in_EDX < 0) {
      if (lVar3 != 0) {
         lVar6 = *(long*)( lVar3 + -8 );
         goto LAB_00113b99;
      }

   }
 else if (lVar3 != 0) {
      lVar6 = *(long*)( lVar3 + -8 );
      if (lVar4 < lVar6) {
         puVar1 = (undefined4*)( lVar3 + lVar4 * 0x18 );
         uVar2 = *puVar1;
         *(undefined8*)( puVar5 + 2 ) = 0;
         lVar3 = *(long*)( puVar1 + 2 );
         *puVar5 = uVar2;
         if (lVar3 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)( puVar1 + 2 ));
         }

         *(undefined8*)( puVar5 + 4 ) = 0;
         if (*(long*)( puVar1 + 4 ) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 4 ), (CowData*)( puVar1 + 4 ));
         }

         return puVar5;
      }

      goto LAB_00113b99;
   }

   lVar6 = 0;
   LAB_00113b99:_err_print_index_error("get_message", "editor/export/editor_export_platform.h", 0xff, lVar4, lVar6, "p_index", "messages.size()", "", false, false);
   *puVar5 = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   return puVar5;
}
/* EditorExportPlatformExtension::get_class() const */void EditorExportPlatformExtension::get_class(void) {
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
   local_48 = &_LC5;
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

         goto joined_r0x00113edc;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00113edc:local_58 = lVar2;
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
/* MethodBindTRC<String>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<String>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC5;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 4;
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

         goto joined_r0x0011405c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0011405c:local_58 = lVar2;
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
/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   char *pcVar4;
   long lVar5;
   char cVar6;
   long lVar7;
   undefined8 uVar8;
   long in_FS_OFFSET;
   bool bVar9;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar5 = *(long*)( lVar2 + 0x20 );
      if (lVar5 == 0) {
         local_60 = 0;
      }
 else {
         pcVar4 = *(char**)( lVar5 + 8 );
         local_60 = 0;
         if (pcVar4 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar5 + 0x10 ) + -0x10 );
            if (*(long*)( lVar5 + 0x10 ) != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_0011411f;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar3 == lVar7;
                  if (bVar9) {
                     *plVar1 = lVar3 + 1;
                     lVar7 = lVar3;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar7 != -1) {
                  local_60 = *(long*)( lVar5 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0011411f:cVar6 = String::operator ==((String*)param_1, (String*)&local_60);
      lVar5 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      if (cVar6 != '\0') goto LAB_001141d3;
   }

   cVar6 = String::operator ==((String*)param_1, "RefCounted");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar5 = *(long*)( lVar2 + 0x20 );
         if (lVar5 == 0) {
            local_60 = 0;
         }
 else {
            pcVar4 = *(char**)( lVar5 + 8 );
            local_60 = 0;
            if (pcVar4 == (char*)0x0) {
               if (*(long*)( lVar5 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar5 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(pcVar4);
               local_58 = pcVar4;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar6 = String::operator ==((String*)param_1, (String*)&local_60);
         lVar5 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar5 + -0x10 ), false);
            }

         }

         if (cVar6 != '\0') goto LAB_001141d3;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar8 = String::operator ==((String*)param_1, "Object");
         return uVar8;
      }

   }
 else {
      LAB_001141d3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorExportPlatformExtension::is_class(String const&) const */undefined8 EditorExportPlatformExtension::is_class(EditorExportPlatformExtension *this, String *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   char *pcVar4;
   long lVar5;
   char cVar6;
   long lVar7;
   undefined8 uVar8;
   long in_FS_OFFSET;
   bool bVar9;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar5 = *(long*)( lVar2 + 0x20 );
      if (lVar5 == 0) {
         local_60 = 0;
      }
 else {
         pcVar4 = *(char**)( lVar5 + 8 );
         local_60 = 0;
         if (pcVar4 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar5 + 0x10 ) + -0x10 );
            if (*(long*)( lVar5 + 0x10 ) != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_0011439f;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar3 == lVar7;
                  if (bVar9) {
                     *plVar1 = lVar3 + 1;
                     lVar7 = lVar3;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar7 != -1) {
                  local_60 = *(long*)( lVar5 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0011439f:cVar6 = String::operator ==((String*)param_1, (String*)&local_60);
      lVar5 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      if (cVar6 != '\0') goto LAB_00114453;
   }

   cVar6 = String::operator ==((String*)param_1, "EditorExportPlatformExtension");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar5 = *(long*)( lVar2 + 0x20 );
         if (lVar5 == 0) {
            local_60 = 0;
         }
 else {
            pcVar4 = *(char**)( lVar5 + 8 );
            local_60 = 0;
            if (pcVar4 == (char*)0x0) {
               if (*(long*)( lVar5 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar5 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(pcVar4);
               local_58 = pcVar4;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar6 = String::operator ==((String*)param_1, (String*)&local_60);
         lVar5 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar5 + -0x10 ), false);
            }

         }

         if (cVar6 != '\0') goto LAB_00114453;
      }

      cVar6 = String::operator ==((String*)param_1, "EditorExportPlatform");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar8 = RefCounted::is_class((RefCounted*)this, param_1);
            return uVar8;
         }

         goto LAB_00114598;
      }

   }

   LAB_00114453:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00114598:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
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
            if (pvVar5 == (void*)0x0) goto LAB_001146f4;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_001146f4:if (*(long*)this != 0) {
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
      LAB_00114a88:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00114a88;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x00114aa6;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x00114aa6:if (lVar2 == 0) {
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
   local_48 = &_LC5;
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
         StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
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

         goto joined_r0x00114f2c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00114f2c:local_58 = lVar2;
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
/* GetTypeInfo<int, void>::get_class_info() */GetTypeInfo<int,void> * __thiscall
GetTypeInfo<int,void>::get_class_info(GetTypeInfo<int,void> *this){
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
   local_48 = &_LC5;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 2;
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
         StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
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

         goto joined_r0x001150ac;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x001150ac:local_58 = lVar2;
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
/* GetTypeInfo<String, void>::get_class_info() */GetTypeInfo<String,void> * __thiscall
GetTypeInfo<String,void>::get_class_info(GetTypeInfo<String,void> *this){
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
   local_48 = &_LC5;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 4;
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
         StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
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

         goto joined_r0x0011522c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0011522c:local_58 = lVar2;
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
/* GetTypeInfo<String const&, void>::get_class_info() */GetTypeInfo<String_const&,void> * __thiscall
GetTypeInfo<String_const&,void>::get_class_info(GetTypeInfo<String_const&,void> *this){
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
   local_48 = &_LC5;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 4;
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
         StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
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

         goto joined_r0x001153ac;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x001153ac:local_58 = lVar2;
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
/* GetTypeInfo<StringName const&, void>::get_class_info() */GetTypeInfo<StringName_const&,void> * __thiscall
GetTypeInfo<StringName_const&,void>::get_class_info(GetTypeInfo<StringName_const&,void> *this){
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
   local_48 = &_LC5;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 0x15;
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
         StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
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

         goto joined_r0x0011552c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0011552c:local_58 = lVar2;
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
/* GetTypeInfo<Vector<String>, void>::get_class_info() */GetTypeInfo<Vector<String>,void> * __thiscall
GetTypeInfo<Vector<String>,void>::get_class_info(GetTypeInfo<Vector<String>,void> *this){
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
   local_48 = &_LC5;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 0x22;
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
         StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
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

         goto joined_r0x001156ac;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x001156ac:local_58 = lVar2;
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
/* GetTypeInfo<Vector<String> const&, void>::get_class_info() */GetTypeInfo<Vector<String>const&,void> * __thiscall
GetTypeInfo<Vector<String>const&,void>::get_class_info(GetTypeInfo<Vector<String>const&,void> *this){
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
   local_48 = &_LC5;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 0x22;
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
         StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
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

         goto joined_r0x0011582c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0011582c:local_58 = lVar2;
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
/* GetTypeInfo<TypedArray<Dictionary>, void>::get_class_info() */GetTypeInfo<TypedArray<Dictionary>,void> * __thiscall
GetTypeInfo<TypedArray<Dictionary>,void>::get_class_info
          (GetTypeInfo<TypedArray<Dictionary>,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_30 = 0;
   Variant::get_type_name(&local_38, 0x1b);
   *(undefined4*)this = 0x1c;
   *(undefined4*)( this + 0x18 ) = 0x1f;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_38 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_38);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) == 0x11) {
         StringName::StringName((StringName*)&local_28, (String*)( this + 0x20 ), false);
         if (*(long*)( this + 0x10 ) == local_28) {
            lVar2 = local_38;
            if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
               StringName::unref();
               lVar2 = local_38;
            }

         }
 else {
            StringName::unref();
            *(long*)( this + 0x10 ) = local_28;
            lVar2 = local_38;
         }

         goto joined_r0x0011598c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_30);
   lVar2 = local_38;
   joined_r0x0011598c:local_38 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_38 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_30 != 0 )) {
      StringName::unref();
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorExportPlatform::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void EditorExportPlatform::_get_property_listv(EditorExportPlatform *this, List *param_1, bool param_2) {
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
   local_78 = "EditorExportPlatform";
   local_70 = 0x14;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "EditorExportPlatform";
   local_98 = 0;
   local_70 = 0x14;
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
      LAB_00115b48:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00115b48;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00115b65;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00115b65:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "EditorExportPlatform", false);
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
/* EditorExportPlatformExtension::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */void EditorExportPlatformExtension::_get_property_listv(EditorExportPlatformExtension *this, List *param_1, bool param_2) {
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
      EditorExportPlatform::_get_property_listv((EditorExportPlatform*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "EditorExportPlatformExtension";
   local_70 = 0x1d;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "EditorExportPlatformExtension";
   local_98 = 0;
   local_70 = 0x1d;
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
      LAB_00115f98:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00115f98;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00115fb5;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00115fb5:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "EditorExportPlatformExtension", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         EditorExportPlatform::_get_property_listv((EditorExportPlatform*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }

   return;
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
/* GetTypeInfo<Ref<EditorExportPreset>, void>::get_class_info() */GetTypeInfo<Ref<EditorExportPreset>,void> * __thiscall
GetTypeInfo<Ref<EditorExportPreset>,void>::get_class_info
          (GetTypeInfo<Ref<EditorExportPreset>,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = "EditorExportPreset";
   local_40 = 0x12;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 0x18;
   *(undefined4*)( this + 0x18 ) = 0x11;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_58);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) != 0x11) {
         StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
         goto LAB_00116a40;
      }

   }

   StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
   if (*(char**)( this + 0x10 ) == local_48) {
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::unref();
      *(char**)( this + 0x10 ) = local_48;
   }

   LAB_00116a40:lVar2 = local_58;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
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
/* GetTypeInfo<Ref<Texture2D>, void>::get_class_info() */GetTypeInfo<Ref<Texture2D>,void> * __thiscall
GetTypeInfo<Ref<Texture2D>,void>::get_class_info(GetTypeInfo<Ref<Texture2D>,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = "Texture2D";
   local_40 = 9;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 0x18;
   *(undefined4*)( this + 0x18 ) = 0x11;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_58);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) != 0x11) {
         StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
         goto LAB_00116be0;
      }

   }

   StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
   if (*(char**)( this + 0x10 ) == local_48) {
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::unref();
      *(char**)( this + 0x10 ) = local_48;
   }

   LAB_00116be0:lVar2 = local_58;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
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
/* GetTypeInfo<Ref<ImageTexture>, void>::get_class_info() */GetTypeInfo<Ref<ImageTexture>,void> * __thiscall
GetTypeInfo<Ref<ImageTexture>,void>::get_class_info(GetTypeInfo<Ref<ImageTexture>,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = "ImageTexture";
   local_40 = 0xc;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 0x18;
   *(undefined4*)( this + 0x18 ) = 0x11;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_58);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) != 0x11) {
         StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
         goto LAB_00116d80;
      }

   }

   StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
   if (*(char**)( this + 0x10 ) == local_48) {
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::unref();
      *(char**)( this + 0x10 ) = local_48;
   }

   LAB_00116d80:lVar2 = local_58;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
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
/* WARNING: Removing unreachable block (ram,0x00117060) *//* WARNING: Removing unreachable block (ram,0x001171f5) *//* WARNING: Removing unreachable block (ram,0x00117201) *//* String vformat<String, String>(String const&, String const, String const) */undefined8 *vformat<String,String>(undefined8 *param_1, bool *param_2, String *param_3, String *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   int iVar3;
   long in_FS_OFFSET;
   Array local_d8[8];
   undefined8 local_d0[9];
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_88, param_3);
   Variant::Variant(local_70, param_4);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_d8);
   iVar3 = (int)local_d8;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, param_2);
   *param_1 = local_d0[0];
   pVVar2 = (Variant*)local_40;
   Array::~Array(local_d8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_88 );
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTC<bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindTC<bool>::_gen_argument_type_info(int param_1) {
   long lVar1;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar2;
   long in_FS_OFFSET;
   undefined4 local_48[2];
   long local_40;
   long local_38;
   undefined4 local_30;
   long local_28;
   undefined4 local_20;
   long local_10;
   puVar2 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar2 = 0;
   puVar2[6] = 0;
   *(undefined8*)( puVar2 + 8 ) = 0;
   puVar2[10] = 6;
   *(undefined1(*) [16])( puVar2 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)local_48);
      *puVar2 = local_48[0];
      if (*(long*)( puVar2 + 2 ) != local_40) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 2 ));
         lVar1 = local_40;
         local_40 = 0;
         *(long*)( puVar2 + 2 ) = lVar1;
      }

      if (*(long*)( puVar2 + 4 ) != local_38) {
         StringName::unref();
         lVar1 = local_38;
         local_38 = 0;
         *(long*)( puVar2 + 4 ) = lVar1;
      }

      puVar2[6] = local_30;
      if (*(long*)( puVar2 + 8 ) != local_28) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 8 ));
         lVar1 = local_28;
         local_28 = 0;
         *(long*)( puVar2 + 8 ) = lVar1;
      }

      puVar2[10] = local_20;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_28);
      if (( StringName::configured != '\0' ) && ( local_38 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTC<String const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTC<String_const&>::_gen_argument_type_info(int param_1) {
   long lVar1;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar2;
   long in_FS_OFFSET;
   undefined4 local_48[2];
   long local_40;
   long local_38;
   undefined4 local_30;
   long local_28;
   undefined4 local_20;
   long local_10;
   puVar2 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar2 = 0;
   puVar2[6] = 0;
   *(undefined8*)( puVar2 + 8 ) = 0;
   puVar2[10] = 6;
   *(undefined1(*) [16])( puVar2 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void>*)local_48);
      *puVar2 = local_48[0];
      if (*(long*)( puVar2 + 2 ) != local_40) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 2 ));
         lVar1 = local_40;
         local_40 = 0;
         *(long*)( puVar2 + 2 ) = lVar1;
      }

      if (*(long*)( puVar2 + 4 ) != local_38) {
         StringName::unref();
         lVar1 = local_38;
         local_38 = 0;
         *(long*)( puVar2 + 4 ) = lVar1;
      }

      puVar2[6] = local_30;
      if (*(long*)( puVar2 + 8 ) != local_28) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 8 ));
         lVar1 = local_28;
         local_28 = 0;
         *(long*)( puVar2 + 8 ) = lVar1;
      }

      puVar2[10] = local_20;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_28);
      if (( StringName::configured != '\0' ) && ( local_38 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Ref<EditorExportPreset>::unref() */void Ref<EditorExportPreset>::unref(Ref<EditorExportPreset> *this) {
   Object *pOVar1;
   char cVar2;
   if (*(long*)this != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)this;
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            *(undefined8*)this = 0;
            return;
         }

      }

   }

   *(undefined8*)this = 0;
   return;
}
/* MethodBind* create_method_bind<EditorExportPlatformExtension, String const&>(void
   (EditorExportPlatformExtension::*)(String const&) const) */MethodBind *create_method_bind<EditorExportPlatformExtension,String_const&>(_func_void_String_ptr *param_1) {
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
   *(_func_void_String_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011bd28;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "EditorExportPlatformExtension";
   local_30 = 0x1d;
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
/* MethodBind* create_method_bind<EditorExportPlatformExtension, String>(String
   (EditorExportPlatformExtension::*)() const) */MethodBind *create_method_bind<EditorExportPlatformExtension,String>(_func_String *param_1) {
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
   *(_func_String**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011bd88;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "EditorExportPlatformExtension";
   local_30 = 0x1d;
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
/* MethodBind* create_method_bind<EditorExportPlatformExtension, bool>(void
   (EditorExportPlatformExtension::*)(bool) const) */MethodBind *create_method_bind<EditorExportPlatformExtension,bool>(_func_void_bool *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011bde8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "EditorExportPlatformExtension";
   local_30 = 0x1d;
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
/* MethodBind* create_method_bind<EditorExportPlatformExtension, bool>(bool
   (EditorExportPlatformExtension::*)() const) */MethodBind *create_method_bind<EditorExportPlatformExtension,bool>(_func_bool *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011be48;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "EditorExportPlatformExtension";
   local_30 = 0x1d;
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
/* GetTypeInfo<Error, void>::get_class_info() */GetTypeInfo<Error,void> * __thiscall
GetTypeInfo<Error,void>::get_class_info(GetTypeInfo<Error,void> *this){
   long *plVar1;
   code *pcVar2;
   long lVar3;
   long lVar4;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   long local_60;
   char local_58[8];
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 0;
   local_48 = "Error";
   local_40 = 5;
   String::parse_latin1((StrRange*)&local_70);
   String::split(local_58, SUB81((StrRange*)&local_70, 0), 0x117a80);
   if (( local_50 != 0 ) && ( 2 < *(long*)( local_50 + -8 ) )) {
      local_60 = 0;
      local_40 = 1;
      local_48 = ".";
      String::parse_latin1((StrRange*)&local_60);
      if (local_50 == 0) {
         lVar3 = -2;
         lVar4 = 0;
      }
 else {
         lVar4 = *(long*)( local_50 + -8 );
         lVar3 = lVar4 + -2;
         if (-1 < lVar3) {
            String::operator +((String*)&local_48, (String*)( local_50 + lVar3 * 8 ));
            String::operator +((String*)&local_68, (String*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            goto LAB_00117b86;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar3, lVar4, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   local_60 = 0;
   local_48 = ".";
   local_40 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::join((Vector*)&local_68);
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

   LAB_00117b86:CowData<String>::_unref((CowData<String>*)&local_50);
   StringName::StringName((StringName*)&local_48, (String*)&local_68, false);
   *(undefined4*)this = 2;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x28 ) = 0x10006;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
      StringName::unref();
   }

   lVar4 = local_68;
   if (local_68 != 0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
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

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<String>::_ref(CowData<String> const&) */void CowData<String>::_ref(CowData<String> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   if (*(long*)this == *(long*)param_1) {
      return;
   }

   _unref(this);
   if (*(long*)param_1 != 0) {
      plVar1 = (long*)( *(long*)param_1 + -0x10 );
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
/* GetTypeInfo<BitField<EditorExportPlatform::DebugFlags>, void>::get_class_info() */GetTypeInfo<BitField<EditorExportPlatform::DebugFlags>,void> * __thiscall
GetTypeInfo<BitField<EditorExportPlatform::DebugFlags>,void>::get_class_info
          (GetTypeInfo<BitField<EditorExportPlatform::DebugFlags>,void> *this){
   long *plVar1;
   code *pcVar2;
   long lVar3;
   long lVar4;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   long local_60;
   char local_58[8];
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 0;
   local_48 = "EditorExportPlatform::DebugFlags";
   local_40 = 0x20;
   String::parse_latin1((StrRange*)&local_70);
   String::split(local_58, SUB81((StrRange*)&local_70, 0), 0x117a80);
   if (( local_50 != 0 ) && ( 2 < *(long*)( local_50 + -8 ) )) {
      local_60 = 0;
      local_40 = 1;
      local_48 = ".";
      String::parse_latin1((StrRange*)&local_60);
      if (local_50 == 0) {
         lVar3 = -2;
         lVar4 = 0;
      }
 else {
         lVar4 = *(long*)( local_50 + -8 );
         lVar3 = lVar4 + -2;
         if (-1 < lVar3) {
            String::operator +((String*)&local_48, (String*)( local_50 + lVar3 * 8 ));
            String::operator +((String*)&local_68, (String*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            goto LAB_00117ed6;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar3, lVar4, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   local_60 = 0;
   local_48 = ".";
   local_40 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::join((Vector*)&local_68);
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

   LAB_00117ed6:CowData<String>::_unref((CowData<String>*)&local_50);
   StringName::StringName((StringName*)&local_48, (String*)&local_68, false);
   *(undefined4*)this = 2;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x28 ) = 0x206;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
      StringName::unref();
   }

   lVar4 = local_68;
   if (local_68 != 0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
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

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
      LAB_00118430:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar10 == 0) goto LAB_00118430;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_00118309:if (lVar10 != lVar7) {
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
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_00118309;
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
      goto LAB_00118486;
   }

   if (lVar10 == lVar7) {
      LAB_001183af:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_00118486:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_0011839a;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_001183af;
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
   LAB_0011839a:puVar9[-1] = param_1;
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
      LAB_00118750:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar8 == 0) goto LAB_00118750;
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
            goto LAB_00118661;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_00118661:puVar7[-1] = param_1;
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
/* EditorExportPlatformExtension::_initialize_classv() */void EditorExportPlatformExtension::_initialize_classv(void) {
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
      if (EditorExportPlatform::initialize_class() == '\0') {
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
            if ((code*)PTR__bind_methods_00120010 != RefCounted::_bind_methods) {
               RefCounted::_bind_methods();
            }

            RefCounted::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "RefCounted";
         local_68 = 0;
         local_50 = 10;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "EditorExportPlatform";
         local_70 = 0;
         local_50 = 0x14;
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
         if ((code*)PTR__bind_methods_00120008 != RefCounted::_bind_methods) {
            EditorExportPlatform::_bind_methods();
         }

         EditorExportPlatform::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "EditorExportPlatform";
      local_68 = 0;
      local_50 = 0x14;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "EditorExportPlatformExtension";
      local_70 = 0;
      local_50 = 0x1d;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
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
/* CowData<EditorExportPlatform::ExportMessage>::_unref() */void CowData<EditorExportPlatform::ExportMessage>::_unref(CowData<EditorExportPlatform::ExportMessage> *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long lVar6;
   long lVar7;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      lVar2 = *(long*)this;
      if (lVar2 != 0) {
         lVar3 = *(long*)( lVar2 + -8 );
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar7 = 0;
            lVar6 = lVar2;
            do {
               if (*(long*)( lVar6 + 0x10 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 0x10 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( lVar6 + 0x10 );
                     *(undefined8*)( lVar6 + 0x10 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               if (*(long*)( lVar6 + 8 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 8 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( lVar6 + 8 );
                     *(undefined8*)( lVar6 + 8 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               lVar7 = lVar7 + 1;
               lVar6 = lVar6 + 0x18;
            }
 while ( lVar3 != lVar7 );
         }

         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }

      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* EditorExportPlatform::clear_messages() */void EditorExportPlatform::clear_messages(EditorExportPlatform *this) {
   if (( *(long*)( this + 0x188 ) != 0 ) && ( *(long*)( *(long*)( this + 0x188 ) + -8 ) != 0 )) {
      CowData<EditorExportPlatform::ExportMessage>::_unref((CowData<EditorExportPlatform::ExportMessage>*)( this + 0x188 ));
      return;
   }

   return;
}
/* CowData<EditorExportPlatform::ExportMessage>::_realloc(long) */undefined8 CowData<EditorExportPlatform::ExportMessage>::_realloc(CowData<EditorExportPlatform::ExportMessage> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<EditorExportPlatform::ExportMessage>::resize<false>(long) */undefined8 CowData<EditorExportPlatform::ExportMessage>::resize<false>(CowData<EditorExportPlatform::ExportMessage> *this, long param_1) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   undefined8 uVar6;
   long lVar7;
   undefined8 *puVar8;
   long lVar9;
   ulong uVar10;
   ulong uVar11;
   undefined8 *puVar12;
   long lVar13;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar7 = 0;
      lVar9 = 0;
   }
 else {
      lVar7 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar7) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar9 = lVar7 * 0x18;
      if (lVar9 != 0) {
         uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
         uVar10 = uVar10 | uVar10 >> 2;
         uVar10 = uVar10 | uVar10 >> 4;
         uVar10 = uVar10 | uVar10 >> 8;
         uVar10 = uVar10 | uVar10 >> 0x10;
         lVar9 = ( uVar10 | uVar10 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x18 == 0) {
      LAB_00118fb0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar10 = param_1 * 0x18 - 1;
   uVar10 = uVar10 >> 1 | uVar10;
   uVar10 = uVar10 | uVar10 >> 2;
   uVar10 = uVar10 | uVar10 >> 4;
   uVar10 = uVar10 | uVar10 >> 8;
   uVar10 = uVar10 | uVar10 >> 0x10;
   uVar10 = uVar10 | uVar10 >> 0x20;
   lVar13 = uVar10 + 1;
   if (lVar13 == 0) goto LAB_00118fb0;
   uVar11 = param_1;
   if (param_1 <= lVar7) {
      while (lVar7 = *(long*)this,lVar7 != 0) {
         if (*(ulong*)( lVar7 + -8 ) <= uVar11) {
            if (lVar13 != lVar9) {
               uVar6 = _realloc(this, lVar13);
               if ((int)uVar6 != 0) {
                  return uVar6;
               }

               lVar7 = *(long*)this;
               if (lVar7 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

            }

            *(long*)( lVar7 + -8 ) = param_1;
            return 0;
         }

         lVar7 = lVar7 + uVar11 * 0x18;
         if (*(long*)( lVar7 + 0x10 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( lVar7 + 0x10 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( lVar7 + 0x10 );
               *(undefined8*)( lVar7 + 0x10 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (*(long*)( lVar7 + 8 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( lVar7 + 8 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( lVar7 + 8 );
               *(undefined8*)( lVar7 + 8 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         uVar11 = uVar11 + 1;
      }
;
      goto LAB_00119006;
   }

   if (lVar13 == lVar9) {
      LAB_00118f1b:puVar8 = *(undefined8**)this;
      if (puVar8 == (undefined8*)0x0) {
         LAB_00119006:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar7 = puVar8[-1];
      if (param_1 <= lVar7) goto LAB_00118e31;
   }
 else {
      if (lVar7 != 0) {
         uVar6 = _realloc(this, lVar13);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

         goto LAB_00118f1b;
      }

      puVar4 = (undefined8*)Memory::alloc_static(uVar10 + 0x11, false);
      if (puVar4 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar8 = puVar4 + 2;
      *puVar4 = 1;
      puVar4[1] = 0;
      *(undefined8**)this = puVar8;
      lVar7 = 0;
   }

   puVar12 = puVar8 + param_1 * 3;
   puVar4 = puVar8 + lVar7 * 3;
   puVar5 = puVar4;
   if (( (int)puVar12 - (int)puVar4 & 8U ) != 0) {
      *(undefined1(*) [16])( puVar4 + 1 ) = (undefined1[16])0x0;
      puVar5 = puVar4 + 3;
      if (puVar4 + 3 == puVar12) goto LAB_00118e31;
   }

   do {
      *(undefined1(*) [16])( puVar5 + 1 ) = (undefined1[16])0x0;
      puVar4 = puVar5 + 6;
      *(undefined1(*) [16])( puVar5 + 4 ) = (undefined1[16])0x0;
      puVar5 = puVar4;
   }
 while ( puVar4 != puVar12 );
   LAB_00118e31:puVar8[-1] = param_1;
   return 0;
}
/* EditorExportPlatform::add_message(EditorExportPlatform::ExportMessageType, String const&, String
   const&) */void EditorExportPlatform::add_message(EditorExportPlatform *this, int param_2, CowData *param_3, CowData *param_4) {
   long *plVar1;
   undefined4 *puVar2;
   int iVar3;
   undefined8 uVar4;
   long lVar5;
   long lVar6;
   undefined8 uVar7;
   long lVar8;
   long in_FS_OFFSET;
   undefined8 local_b8;
   undefined8 local_b0;
   undefined8 local_a8;
   undefined8 local_a0;
   int local_98;
   undefined1 local_90[16];
   char *local_78;
   long local_70;
   long local_68[2];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_90 = (undefined1[16])0x0;
   lVar5 = *(long*)param_3;
   if (*(long*)param_3 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)local_90, param_3);
      lVar5 = local_90._8_8_;
   }

   if (*(long*)param_4 != lVar5) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( local_90 + 8 ), param_4);
      lVar5 = local_90._8_8_;
   }

   local_78 = (char*)CONCAT44(local_78._4_4_, param_2);
   local_70 = 0;
   local_98 = param_2;
   if (local_90._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)local_90);
   }

   local_68[0] = 0;
   if (lVar5 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)local_68, (CowData*)( local_90 + 8 ));
      lVar5 = local_68[0];
   }

   if (*(long*)( this + 0x188 ) == 0) {
      lVar6 = 1;
   }
 else {
      lVar6 = *(long*)( *(long*)( this + 0x188 ) + -8 ) + 1;
   }

   iVar3 = CowData<EditorExportPlatform::ExportMessage>::resize<false>((CowData<EditorExportPlatform::ExportMessage>*)( this + 0x188 ), lVar6);
   if (iVar3 == 0) {
      if (*(long*)( this + 0x188 ) == 0) {
         lVar8 = -1;
         lVar6 = 0;
      }
 else {
         lVar6 = *(long*)( *(long*)( this + 0x188 ) + -8 );
         lVar8 = lVar6 + -1;
         if (-1 < lVar8) {
            CowData<EditorExportPlatform::ExportMessage>::_copy_on_write((CowData<EditorExportPlatform::ExportMessage>*)( this + 0x188 ));
            puVar2 = (undefined4*)( *(long*)( this + 0x188 ) + lVar8 * 0x18 );
            *puVar2 = local_78._0_4_;
            if (*(long*)( puVar2 + 2 ) != local_70) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar2 + 2 ), (CowData*)&local_70);
            }

            if (lVar5 != *(long*)( puVar2 + 4 )) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar2 + 4 ), (CowData*)local_68);
            }

            goto LAB_00119189;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar8, lVar6, "p_index", "size()", "", false, false);
   }
 else {
      _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   }

   LAB_00119189:if (lVar5 != 0) {
      LOCK();
      plVar1 = (long*)( lVar5 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_68[0] + -0x10 ), false);
      }

   }

   if (local_70 == 0) {
      LAB_001191b0:lVar5 = local_90._8_8_;
      if (param_2 != 2) goto LAB_001191be;
      LAB_001192ee:local_a0 = 0;
      if (lVar5 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_a0, (CowData*)( local_90 + 8 ));
      }

      local_a8 = 0;
      if (local_90._0_8_ != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)local_90);
      }

      local_b0 = 0;
      local_70 = 6;
      local_78 = "%s: %s";
      String::parse_latin1((StrRange*)&local_b0);
      vformat<String,String>(&local_78, (StrRange*)&local_b0, (CowData<char32_t>*)&local_a8, (CowData<char32_t>*)&local_a0);
      uVar4 = 0xf0;
      uVar7 = 1;
      LAB_0011943d:_err_print_error("add_message", "editor/export/editor_export_platform.h", uVar4, (CowData<char32_t>*)&local_78, 0, uVar7);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   }
 else {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_001191b0;
      Memory::free_static((void*)( local_70 + -0x10 ), false);
      lVar5 = local_90._8_8_;
      if (param_2 == 2) goto LAB_001192ee;
      LAB_001191be:if (param_2 == 3) {
         local_a0 = 0;
         if (lVar5 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_a0, (CowData*)( local_90 + 8 ));
         }

         local_a8 = 0;
         if (local_90._0_8_ != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)local_90);
         }

         local_b0 = 0;
         local_70 = 6;
         local_78 = "%s: %s";
         String::parse_latin1((StrRange*)&local_b0);
         vformat<String,String>(&local_78, (StrRange*)&local_b0, (CowData<char32_t>*)&local_a8, (CowData<char32_t>*)&local_a0);
         uVar7 = 0;
         uVar4 = 0xf3;
         goto LAB_0011943d;
      }

      if (param_2 == 1) {
         local_a8 = 0;
         if (lVar5 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( local_90 + 8 ));
         }

         local_b0 = 0;
         if (local_90._0_8_ != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_b0, (CowData*)local_90);
         }

         local_b8 = 0;
         local_78 = "%s: %s";
         local_70 = 6;
         String::parse_latin1((StrRange*)&local_b8);
         vformat<String,String>((CowData<char32_t>*)&local_a0, (StrRange*)&local_b8, (CowData<char32_t>*)&local_b0, (CowData<char32_t>*)&local_a8);
         Variant::Variant((Variant*)local_58, (String*)&local_a0);
         stringify_variants((Variant*)&local_78);
         __print_line((String*)&local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      }

   }

   if (lVar5 != 0) {
      LOCK();
      plVar1 = (long*)( lVar5 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_90._8_8_ + -0x10 ), false);
      }

   }

   if (local_90._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_90._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static((void*)( local_90._0_8_ + -0x10 ), false);
            return;
         }

         goto LAB_001195af;
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001195af:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x001196d8) *//* WARNING: Removing unreachable block (ram,0x0011986d) *//* WARNING: Removing unreachable block (ram,0x00119879) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
         _err_print_error(&_LC121, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
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

         goto LAB_00119a70;
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

   LAB_00119a70:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00119d62;
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
   LAB_00119d62:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00119f21;
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
   LAB_00119f21:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTC<bool>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTC<bool>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x1b4, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0011a281;
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
      /* WARNING: Could not recover jumptable at 0x0011a10d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined1*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_0011a281:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTC<bool>::ptrcall(Object*, void const**, void*) const */void MethodBindTC<bool>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_0011a469;
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
      /* WARNING: Could not recover jumptable at 0x0011a2f2. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3 != '\0');
      return;
   }

   LAB_0011a469:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<String>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<String>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC121, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
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

         goto LAB_0011a540;
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

         ( *(code*)pVVar4 )((CowData<char32_t>*)&local_58);
         Variant::Variant((Variant*)local_48, (String*)&local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
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

   LAB_0011a540:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<String>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<String>::validated_call(MethodBindTRC<String> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Variant **ppVVar1;
   Variant **ppVVar2;
   code *pcVar3;
   long *plVar4;
   Variant **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Variant **local_48;
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

      if (local_48 == (Variant**)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Variant**)0x1198c8;
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

         goto LAB_0011a7f1;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar3 = *(code**)( pcVar3 + (long)param_2 + -1 );
   }

   ( *pcVar3 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   if (*(Variant***)( param_3 + 8 ) != local_48) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( param_3 + 8 ), (CowData*)&local_48);
   }

   ppVVar2 = local_48;
   if (local_48 != (Variant**)0x0) {
      LOCK();
      ppVVar1 = local_48 + -2;
      *ppVVar1 = *ppVVar1 + -1;
      UNLOCK();
      if (*ppVVar1 == (Variant*)0x0) {
         local_48 = (Variant**)0x0;
         Memory::free_static(ppVVar2 + -2, false);
      }

   }

   LAB_0011a7f1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<String>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<String>::ptrcall(MethodBindTRC<String> *this, Object *param_1, void **param_2, void *param_3) {
   void **ppvVar1;
   void **ppvVar2;
   code *pcVar3;
   long *plVar4;
   void **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   void **local_48;
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

      if (local_48 == (void**)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (void**)0x1198c8;
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

         goto LAB_0011a9de;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar3 = *(code**)( pcVar3 + (long)param_2 + -1 );
   }

   ( *pcVar3 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   /* WARNING: Load size is inaccurate */
   if (*param_3 != local_48) {
      CowData<char32_t>::_ref((CowData<char32_t>*)param_3, (CowData*)&local_48);
   }

   ppvVar2 = local_48;
   if (local_48 != (void**)0x0) {
      LOCK();
      ppvVar1 = local_48 + -2;
      *ppvVar1 = (void*)( (long)*ppvVar1 + -1 );
      UNLOCK();
      if (*ppvVar1 == (void*)0x0) {
         local_48 = (void**)0x0;
         Memory::free_static(ppvVar2 + -2, false);
      }

   }

   LAB_0011a9de:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTC<String const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTC<String_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x1b4, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0011ad11;
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
      /* WARNING: Could not recover jumptable at 0x0011ab9d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
      return;
   }

   LAB_0011ad11:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTC<String const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTC<String_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x1bf, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
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

         goto LAB_0011af14;
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
      /* WARNING: Could not recover jumptable at 0x0011ad79. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }

   LAB_0011af14:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTC<String const&>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTC<String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   undefined8 local_40;
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
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC121, "./core/object/method_bind.h", 0x1a8, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011b0d0;
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
         if (in_R8D != 1) goto LAB_0011b120;
         LAB_0011b110:pVVar10 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0011b120:uVar6 = 4;
            goto LAB_0011b0c5;
         }

         if (in_R8D == 1) goto LAB_0011b110;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 4);
      uVar4 = _LC126;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_String((Variant*)&local_48);
      ( *(code*)pVVar11 )((Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   }
 else {
      uVar6 = 3;
      LAB_0011b0c5:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_0011b0d0:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_argsc_dv<__UnexistingClass, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool) const, Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */void call_with_variant_argsc_dv<__UnexistingClass,bool>(__UnexistingClass *param_1, _func_void_bool *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
      goto LAB_0011b3dd;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0011b440;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0011b440:uVar6 = 4;
         LAB_0011b3dd:*(undefined4*)param_6 = uVar6;
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
         goto LAB_0011b35b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0011b35b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_bool**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 1);
   uVar4 = _LC128;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_bool(this);
   /* WARNING: Could not recover jumptable at 0x0011b3b7. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )(SUB81(param_1 + (long)param_3, 0));
   return;
}
/* MethodBindTC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTC<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC121, "./core/object/method_bind.h", 0x1a8, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
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
         goto LAB_0011b4a6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_argsc_dv<__UnexistingClass,bool>(p_Var4, (_func_void_bool*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0011b4a6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorExportPlatformExtension::_bind_methods() */void EditorExportPlatformExtension::_GLOBAL__sub_I__bind_methods(void) {
   if (PopupMenu::base_property_helper == '\0') {
      PopupMenu::base_property_helper = '\x01';
      PopupMenu::base_property_helper._0_16_ = (undefined1[16])0x0;
      PopupMenu::base_property_helper._24_16_ = (undefined1[16])0x0;
      PopupMenu::base_property_helper._40_16_ = (undefined1[16])0x0;
      PopupMenu::base_property_helper._56_8_ = 2;
      PopupMenu::base_property_helper._64_8_ = 0;
      __cxa_atexit(PropertyListHelper::~PropertyListHelper, PopupMenu::base_property_helper, &__dso_handle);
   }

   ENV_SCRIPT_ENCRYPTION_KEY = 0;
   String::parse_latin1((String*)&ENV_SCRIPT_ENCRYPTION_KEY, "GODOT_SCRIPT_ENCRYPTION_KEY");
   __cxa_atexit(String::~String, &ENV_SCRIPT_ENCRYPTION_KEY, &__dso_handle);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* String::~String() */void String::~String(String *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTC<bool>::~MethodBindTC() */void MethodBindTC<bool>::~MethodBindTC(MethodBindTC<bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<String>::~MethodBindTRC() */void MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTC<String const&>::~MethodBindTC() */void MethodBindTC<String_const&>::~MethodBindTC(MethodBindTC<String_const&> *this) {
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

