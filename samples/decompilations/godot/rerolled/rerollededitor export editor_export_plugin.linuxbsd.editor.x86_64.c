/* EditorExportPlugin::_export_file(String const&, String const&, HashSet<String,
   HashMapHasherDefault, HashMapComparatorDefault<String> > const&) */void EditorExportPlugin::_export_file(String *param_1, String *param_2, HashSet *param_3) {
   return;
}
/* EditorExportPlugin::_export_begin(HashSet<String, HashMapHasherDefault,
   HashMapComparatorDefault<String> > const&, bool, String const&, int) */void EditorExportPlugin::_export_begin(HashSet *param_1, bool param_2, String *param_3, int param_4) {
   return;
}
/* EditorExportPlugin::_export_end() */void EditorExportPlugin::_export_end(void) {
   return;
}
/* EditorExportPlugin::skip() */void EditorExportPlugin::skip(EditorExportPlugin *this) {
   this[0x1a8] = (EditorExportPlugin)0x1;
   return;
}
/* EditorExportPlugin::get_export_platform() const */void EditorExportPlugin::get_export_platform(void) {
   long lVar1;
   long in_RSI;
   undefined8 *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 0x180 ) == 0) {
      *in_RDI = 0;
   }
 else {
      EditorExportPreset::get_platform();
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorExportPlugin::add_ios_cpp_code(String const&) */void EditorExportPlugin::add_ios_cpp_code(EditorExportPlugin *this, String *param_1) {
   String::operator +=((String*)( this + 0x200 ), param_1);
   return;
}
/* EditorExportPlugin::add_ios_linker_flags(String const&) */void EditorExportPlugin::add_ios_linker_flags(EditorExportPlugin *this, String *param_1) {
   String *this_00;
   this_00 = (String*)( this + 0x1e8 );
   if (( *(long*)this_00 != 0 ) && ( 1 < *(int*)( *(long*)this_00 + -8 ) )) {
      String::operator +=(this_00, L' ');
      String::operator +=(this_00, param_1);
      return;
   }

   String::operator +=(this_00, param_1);
   return;
}
/* EditorExportPlugin::get_option(StringName const&) const */EditorExportPlugin * __thiscall
EditorExportPlugin::get_option(EditorExportPlugin *this,StringName *param_1){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(bool**)( param_1 + 0x180 ) == (bool*)0x0) {
      _err_print_error("get_option", "editor/export/editor_export_plugin.cpp", 0x8a, "Condition \"export_preset.is_null()\" is true. Returning: Variant()", 0, 0);
      *(undefined4*)this = 0;
      *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   }
 else {
      Object::get((StringName*)this, *(bool**)( param_1 + 0x180 ));
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* EditorExportPlugin::get_export_preset() const */void EditorExportPlugin::get_export_preset(void) {
   char cVar1;
   long in_RSI;
   long *in_RDI;
   *in_RDI = 0;
   if (*(long*)( in_RSI + 0x180 ) != 0) {
      *in_RDI = *(long*)( in_RSI + 0x180 );
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *in_RDI = 0;
      }

   }

   return;
}
/* CowData<unsigned char>::_ref(CowData<unsigned char> const&) [clone .part.0] */void CowData<unsigned_char>::_ref(CowData<unsigned_char> *this, CowData *param_1) {
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
/* EditorExportPlugin::add_ios_plist_content(String const&) */void EditorExportPlugin::add_ios_plist_content(EditorExportPlugin *this, String *param_1) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   long in_FS_OFFSET;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_40 = 1;
   local_48 = &_LC9;
   String::parse_latin1((StrRange*)&local_50);
   String::operator +((String*)&local_48, param_1);
   String::operator +=((String*)( this + 0x1e0 ), (String*)&local_48);
   puVar3 = local_48;
   if (local_48 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = (undefined*)0x0;
         Memory::free_static(puVar3 + -0x10, false);
      }

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

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* EditorExportPlugin::set_export_preset(Ref<EditorExportPreset> const&) */void EditorExportPlugin::set_export_preset(EditorExportPlugin *this, Ref *param_1) {
   Object *pOVar1;
   Object *pOVar2;
   char cVar3;
   pOVar1 = *(Object**)param_1;
   if (( pOVar1 != (Object*)0x0 ) && ( pOVar2 = pOVar1 != pOVar2 )) {
      *(Object**)( this + 0x180 ) = pOVar1;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
         *(undefined8*)( this + 0x180 ) = 0;
      }

      if (pOVar2 != (Object*)0x0) {
         cVar3 = RefCounted::unreference();
         if (cVar3 != '\0') {
            cVar3 = predelete_handler(pOVar2);
            if (cVar3 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
               return;
            }

         }

      }

   }

   return;
}
/* EditorExportPlugin::get_ios_plist_content() const */void EditorExportPlugin::get_ios_plist_content(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0x1e0 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x1e0 ));
   }

   return;
}
/* EditorExportPlugin::get_ios_linker_flags() const */void EditorExportPlugin::get_ios_linker_flags(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0x1e8 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x1e8 ));
   }

   return;
}
/* EditorExportPlugin::get_ios_cpp_code() const */void EditorExportPlugin::get_ios_cpp_code(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0x200 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x200 ));
   }

   return;
}
/* EditorExportPlugin::get_macos_plugin_files() const */EditorExportPlugin * __thiscall EditorExportPlugin::get_macos_plugin_files(EditorExportPlugin *this){
   return this + 0x208;
}
/* EditorExportPlugin::get_export_features(Ref<EditorExportPlatform> const&, bool) const */Ref *EditorExportPlugin::get_export_features(Ref *param_1, bool param_2) {
   long lVar1;
   undefined7 in_register_00000031;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *(long*)CONCAT71(in_register_00000031, param_2) + 0x1a0 ) )();
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorExportPlugin::_has_valid_export_configuration(Ref<EditorExportPlatform> const&,
   Ref<EditorExportPreset> const&) */Ref *EditorExportPlugin::_has_valid_export_configuration(Ref *param_1, Ref *param_2) {
   long *plVar1;
   Object *pOVar2;
   Object *pOVar3;
   long lVar4;
   char *pcVar5;
   char cVar6;
   long *in_RCX;
   undefined8 *in_RDX;
   long lVar7;
   long in_FS_OFFSET;
   undefined8 local_80;
   undefined8 local_78;
   long *local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar7 = *(long*)param_2;
   *(undefined8*)param_1 = 0;
   cVar6 = ( **(code**)( lVar7 + 0x1d8 ) )(param_2);
   if (cVar6 == '\0') {
      ( **(code**)( *(long*)*in_RDX + 0x1e0 ) )((CowData<char32_t>*)&local_60);
      ( **(code**)( *(long*)param_2 + 0x1d0 ) )((CowData<char32_t>*)&local_68, param_2);
      local_58 = "";
      local_78 = 0;
      local_50 = 0;
      String::parse_latin1((StrRange*)&local_78);
      local_58 = "Plugin \"%s\" is not supported on \"%s\"";
      local_80 = 0;
      local_50 = 0x24;
      String::parse_latin1((StrRange*)&local_80);
      TTR((String*)&local_70, (String*)&local_80);
      vformat<String,String>((CowData<char32_t>*)&local_58, (String*)&local_70, (CowData<char32_t>*)&local_68, (CowData<char32_t>*)&local_60);
      String::operator +=((String*)param_1, (String*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      String::operator +=((String*)param_1, "\n");
   }
 else {
      pOVar2 = (Object*)*in_RCX;
      if (( pOVar2 != (Object*)0x0 ) && ( pOVar3 = pOVar2 != pOVar3 )) {
         *(Object**)( param_2 + 0x180 ) = pOVar2;
         cVar6 = RefCounted::reference();
         if (cVar6 == '\0') {
            *(undefined8*)( param_2 + 0x180 ) = 0;
         }

         if (( ( pOVar3 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);
         Memory::free_static(pOVar3, false);
      }

   }

   local_70 = (long*)0x0;
   ( **(code**)( *(long*)param_2 + 0x1a8 ) )(param_2);
   if (( local_70 != (long*)0x0 ) && ( lVar7 = lVar7 != 0 )) {
      do {
         while (( **(code**)( *(long*)param_2 + 0x1c8 ) )((String*)&local_68),local_68 == 0) {
            LAB_00100ab1:lVar7 = *(long*)( lVar7 + 0x50 );
            if (lVar7 == 0) goto LAB_00100bb0;
         }
;
         if (*(uint*)( local_68 + -8 ) < 2) {
            LAB_00100a90:lVar4 = local_68;
            LOCK();
            plVar1 = (long*)( local_68 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_68 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

            goto LAB_00100ab1;
         }

         local_60 = 0;
         local_58 = "\n";
         local_50 = 1;
         String::parse_latin1((StrRange*)&local_60);
         String::operator +((String*)&local_58, (String*)&local_68);
         String::operator +=((String*)param_1, (String*)&local_58);
         pcVar5 = local_58;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

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

         if (local_68 != 0) goto LAB_00100a90;
         lVar7 = *(long*)( lVar7 + 0x50 );
      }
 while ( lVar7 != 0 );
   }

   LAB_00100bb0:List<EditorExportPlatform::ExportOption,DefaultAllocator>::~List((List<EditorExportPlatform::ExportOption,DefaultAllocator>*)&local_70);
}
if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return param_1;}/* MethodBind* ClassDB::bind_method<MethodDefinition, void (EditorExportPlugin::*)(String
   const&)>(MethodDefinition, void (EditorExportPlugin::*)(String const&)) [clone .isra.0] */MethodBind *ClassDB::bind_method<MethodDefinition,void(EditorExportPlugin::*)(String_const & )>(MethodDefinition *param_1, _func_void_String_ptr *param_2) {
   long lVar1;
   MethodBind *pMVar2;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   pMVar2 = create_method_bind<EditorExportPlugin,String_const&>(param_2);
   ClassDB::bind_methodfi(1, pMVar2, false, param_1, (Variant**)0x0, 0);
   if (Variant::needs_deinit[0] != '\0') {
      Variant::_clear_internal();
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (MethodBind*)0x0;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<String>::_ref(CowData<String> const&) [clone .part.0] */void CowData<String>::_ref(CowData<String> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
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
/* EditorExportPlugin::get_ios_bundle_files() const */void EditorExportPlugin::get_ios_bundle_files(void) {
   long in_RSI;
   long in_RDI;
   *(undefined8*)( in_RDI + 8 ) = 0;
   if (*(long*)( in_RSI + 0x1f8 ) != 0) {
      CowData<String>::_ref((CowData<String>*)( in_RDI + 8 ), (CowData*)( in_RSI + 0x1f8 ));
   }

   return;
}
/* EditorExportPlugin::get_ios_frameworks() const */void EditorExportPlugin::get_ios_frameworks(void) {
   long in_RSI;
   long in_RDI;
   *(undefined8*)( in_RDI + 8 ) = 0;
   if (*(long*)( in_RSI + 0x1b8 ) != 0) {
      CowData<String>::_ref((CowData<String>*)( in_RDI + 8 ), (CowData*)( in_RSI + 0x1b8 ));
   }

   return;
}
/* EditorExportPlugin::get_ios_embedded_frameworks() const */void EditorExportPlugin::get_ios_embedded_frameworks(void) {
   long in_RSI;
   long in_RDI;
   *(undefined8*)( in_RDI + 8 ) = 0;
   if (*(long*)( in_RSI + 0x1c8 ) != 0) {
      CowData<String>::_ref((CowData<String>*)( in_RDI + 8 ), (CowData*)( in_RSI + 0x1c8 ));
   }

   return;
}
/* EditorExportPlugin::get_ios_project_static_libs() const */void EditorExportPlugin::get_ios_project_static_libs(void) {
   long in_RSI;
   long in_RDI;
   *(undefined8*)( in_RDI + 8 ) = 0;
   if (*(long*)( in_RSI + 0x1d8 ) != 0) {
      CowData<String>::_ref((CowData<String>*)( in_RDI + 8 ), (CowData*)( in_RSI + 0x1d8 ));
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
/* EditorExportPlugin::add_ios_project_static_lib(String const&) */void EditorExportPlugin::add_ios_project_static_lib(EditorExportPlugin *this, String *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long in_FS_OFFSET;
   bool bVar4;
   long local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_18 = 0;
   plVar1 = (long*)( *(long*)param_1 + -0x10 );
   if (*(long*)param_1 == 0) {
      Vector<String>::push_back((Vector<String>*)( this + 0x1d0 ), &local_18);
   }
 else {
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_00101014;
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
         local_18 = *(long*)param_1;
      }

      LAB_00101014:lVar2 = local_18;
      Vector<String>::push_back((Vector<String>*)( this + 0x1d0 ));
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
               Memory::free_static((void*)( local_18 + -0x10 ), false);
               return;
            }

            goto LAB_0010107e;
         }

      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010107e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* EditorExportPlugin::add_macos_plugin_file(String const&) */void EditorExportPlugin::add_macos_plugin_file(EditorExportPlugin *this, String *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long in_FS_OFFSET;
   bool bVar4;
   long local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_18 = 0;
   plVar1 = (long*)( *(long*)param_1 + -0x10 );
   if (*(long*)param_1 == 0) {
      Vector<String>::push_back((Vector<String>*)( this + 0x208 ), &local_18);
   }
 else {
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_001010e4;
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
         local_18 = *(long*)param_1;
      }

      LAB_001010e4:lVar2 = local_18;
      Vector<String>::push_back((Vector<String>*)( this + 0x208 ));
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
               Memory::free_static((void*)( local_18 + -0x10 ), false);
               return;
            }

            goto LAB_0010114e;
         }

      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010114e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* EditorExportPlugin::add_ios_bundle_file(String const&) */void EditorExportPlugin::add_ios_bundle_file(EditorExportPlugin *this, String *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long in_FS_OFFSET;
   bool bVar4;
   long local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_18 = 0;
   plVar1 = (long*)( *(long*)param_1 + -0x10 );
   if (*(long*)param_1 == 0) {
      Vector<String>::push_back((Vector<String>*)( this + 0x1f0 ), &local_18);
   }
 else {
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_001011b4;
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
         local_18 = *(long*)param_1;
      }

      LAB_001011b4:lVar2 = local_18;
      Vector<String>::push_back((Vector<String>*)( this + 0x1f0 ));
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
               Memory::free_static((void*)( local_18 + -0x10 ), false);
               return;
            }

            goto LAB_0010121e;
         }

      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010121e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* EditorExportPlugin::add_ios_embedded_framework(String const&) */void EditorExportPlugin::add_ios_embedded_framework(EditorExportPlugin *this, String *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long in_FS_OFFSET;
   bool bVar4;
   long local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_18 = 0;
   plVar1 = (long*)( *(long*)param_1 + -0x10 );
   if (*(long*)param_1 == 0) {
      Vector<String>::push_back((Vector<String>*)( this + 0x1c0 ), &local_18);
   }
 else {
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_00101284;
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
         local_18 = *(long*)param_1;
      }

      LAB_00101284:lVar2 = local_18;
      Vector<String>::push_back((Vector<String>*)( this + 0x1c0 ));
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
               Memory::free_static((void*)( local_18 + -0x10 ), false);
               return;
            }

            goto LAB_001012ee;
         }

      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001012ee:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* EditorExportPlugin::add_ios_framework(String const&) */void EditorExportPlugin::add_ios_framework(EditorExportPlugin *this, String *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long in_FS_OFFSET;
   bool bVar4;
   long local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_18 = 0;
   plVar1 = (long*)( *(long*)param_1 + -0x10 );
   if (*(long*)param_1 == 0) {
      Vector<String>::push_back((Vector<String>*)( this + 0x1b0 ), &local_18);
   }
 else {
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_00101354;
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
         local_18 = *(long*)param_1;
      }

      LAB_00101354:lVar2 = local_18;
      Vector<String>::push_back((Vector<String>*)( this + 0x1b0 ));
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
               Memory::free_static((void*)( local_18 + -0x10 ), false);
               return;
            }

            goto LAB_001013be;
         }

      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001013be:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* EditorExportPlugin::_export_end_script() */void EditorExportPlugin::_export_end_script(EditorExportPlugin *this) {
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
      LAB_0010145b:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x250] == (EditorExportPlugin)0x0 )) {
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
         String::parse_latin1((String*)local_c8, "_export_end");
         local_90 = CONCAT44(local_90._4_4_, 8);
         uVar1 = MethodInfo::get_compatibility_hash();
         lVar3 = *(long*)( this + 8 );
         *(undefined8*)( this + 600 ) = 0;
         UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd8 );
         if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) {
            local_e8 = 0;
            String::parse_latin1((String*)&local_e8, "EditorExportPlugin");
            StringName::StringName((StringName*)&local_e0, (String*)&local_e8, false);
            ClassDB::get_virtual_method_compatibility_hashes(local_d8, (StringName*)&local_e0);
            if (local_d0 == 0) {
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( lVar3 = local_e0 != 0 )) goto LAB_001016a7;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               LAB_001016bc:lVar3 = *(long*)( this + 8 );
               UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 200 );
               if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xc0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) goto LAB_001015f9;
               uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x248);
               *(undefined8*)( this + 600 ) = uVar2;
            }
 else {
               lVar3 = *(long*)( local_d0 + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
                  LAB_001016a7:StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               if (lVar3 == 0) goto LAB_001016bc;
            }

            lVar3 = *(long*)( this + 8 );
         }
 else {
            uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x248, uVar1);
            *(undefined8*)( this + 600 ) = uVar2;
            lVar3 = *(long*)( this + 8 );
         }

         LAB_001015f9:if (*(char*)( lVar3 + 0x29 ) != '\0') {
            plVar4 = (long*)operator_new(0x18, "");
            *plVar4 = (long)( this + 600 );
            plVar4[1] = (long)( this + 0x250 );
            plVar4[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar4;
         }

         this[0x250] = (EditorExportPlugin)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)local_c8);
      }

      UNRECOVERED_JUMPTABLE = *(code**)( this + 600 );
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010151c. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( this + 0x10 ), 0, 0);
               return;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x001014bd. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x248, UNRECOVERED_JUMPTABLE, 0, 0);
            return;
         }

         goto LAB_0010172f;
      }

   }
 else {
      for (int i = 0; i < 3; i++) {
         local_c8[i] = 0;
      }

      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, this + 0x248, 0, 0, local_c8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_c8[0] != 0) goto LAB_0010145b;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010172f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* EditorExportPlugin::_get_customization_configuration_hash() const */ulong EditorExportPlugin::_get_customization_configuration_hash(EditorExportPlugin *this) {
   char *__s;
   undefined4 uVar1;
   size_t sVar2;
   ulong uVar3;
   undefined8 uVar4;
   long lVar5;
   long *plVar6;
   code *pcVar7;
   long in_FS_OFFSET;
   CowData<char32_t> *local_130;
   undefined8 local_128;
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
   undefined8 local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar6 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar6 != (long*)0x0) {
      local_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar6 + 0x60 ) )((Variant*)local_58, plVar6, this + 0x2c0, 0, 0, &local_c8);
      if (local_c8 == 0) {
         uVar3 = Variant::operator_cast_to_unsigned_long((Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00101857;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x2c8] == (EditorExportPlugin)0x0 )) {
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
      String::parse_latin1((String*)&local_c8, "_get_customization_configuration_hash");
      local_90 = CONCAT44(local_90._4_4_, 0x8c);
      GetTypeInfo<unsigned_long,void>::get_class_info((GetTypeInfo<unsigned_long,void>*)&local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
      local_70 = CONCAT44(local_70._4_4_, 8);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar5 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x2d0 ) = 0;
      pcVar7 = *(code**)( lVar5 + 0xd8 );
      if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xd0 ) ),pcVar7 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "EditorExportPlugin");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar5 = local_100 != 0 )) goto LAB_00101d14;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_00101d29:lVar5 = *(long*)( this + 8 );
            pcVar7 = *(code**)( lVar5 + 200 );
            if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xc0 ) ),pcVar7 == (code*)0x0) goto LAB_00101bd2;
            uVar4 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ), this + 0x2c0);
            *(undefined8*)( this + 0x2d0 ) = uVar4;
         }
 else {
            lVar5 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_00101d14:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar5 == 0) goto LAB_00101d29;
         }

         lVar5 = *(long*)( this + 8 );
      }
 else {
         uVar4 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ), this + 0x2c0, uVar1);
         *(undefined8*)( this + 0x2d0 ) = uVar4;
         lVar5 = *(long*)( this + 8 );
      }

      LAB_00101bd2:if (*(char*)( lVar5 + 0x29 ) != '\0') {
         plVar6 = (long*)operator_new(0x18, "");
         *plVar6 = (long)( this + 0x2d0 );
         plVar6[1] = (long)( this + 0x2c8 );
         plVar6[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar6;
      }

      this[0x2c8] = (EditorExportPlugin)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   }

   pcVar7 = *(code**)( this + 0x2d0 );
   if (pcVar7 == (code*)0x0) {
      if (_gdvirtual__get_customization_configuration_hash_call(unsigned_long & ::first_print == '\0') {
         uVar3 = 0;
      }
 else {
         local_f8 = 0;
         local_c8 = 0x110638;
         uStack_c4 = 0;
         uStack_c0 = 0x23;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_f8);
         local_c8 = 0x110610;
         uStack_c4 = 0;
         local_108 = 0;
         uStack_c0 = 0x25;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_108);
         local_118 = 0;
         local_c8 = 0x11092b;
         uStack_c4 = 0;
         uStack_c0 = 2;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_118);
         if (*(code**)( *(long*)this + 0x48 ) == get_class) {
            if (*(long*)( this + 8 ) == 0) {
               local_128 = 0;
               local_c8 = 0x110f44;
               uStack_c4 = 0;
               uStack_c0 = 0x12;
               uStack_bc = 0;
               String::parse_latin1((StrRange*)&local_128);
            }
 else {
               lVar5 = *(long*)( *(long*)( this + 8 ) + 0x20 );
               if (lVar5 == 0) {
                  local_128 = 0;
               }
 else {
                  __s = *(char**)( lVar5 + 8 );
                  local_128 = 0;
                  if (__s == (char*)0x0) {
                     if (*(long*)( lVar5 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_128, (CowData*)( lVar5 + 0x10 ));
                     }

                  }
 else {
                     sVar2 = strlen(__s);
                     local_c8 = (int)__s;
                     uStack_c4 = ( undefined4 )((ulong)__s >> 0x20);
                     uStack_c0 = (undefined4)sVar2;
                     uStack_bc = ( undefined4 )(sVar2 >> 0x20);
                     String::parse_latin1((StrRange*)&local_128);
                  }

               }

            }

         }
 else {
            ( **(code**)( *(long*)this + 0x48 ) )(&local_128, this);
         }

         local_130 = (CowData<char32_t>*)&local_128;
         operator+((char *)
         local_120,(String*)"Required virtual method ";
         String::operator +(local_110, (String*)local_120);
         String::operator +((String*)&local_100, local_110);
         String::operator +((String*)&local_c8, (String*)&local_100);
         _err_print_error("_gdvirtual__get_customization_configuration_hash_call", "editor/export/editor_export_plugin.h", 0x7d, (String*)&local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
         CowData<char32_t>::_unref(local_120);
         CowData<char32_t>::_unref(local_130);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         _gdvirtual__get_customization_configuration_hash_call(unsigned_long&)::first_print =
         '\0';
         uVar3 = 0;
      }

   }
 else if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
      ( *pcVar7 )(*(undefined8*)( this + 0x10 ), 0, &local_c8);
      uVar3 = CONCAT44(uStack_c4, local_c8);
   }
 else {
      ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x2c0, pcVar7, 0, &local_c8);
      uVar3 = CONCAT44(uStack_c4, local_c8);
   }

   LAB_00101857:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}
/* EditorExportPlugin::_end_customize_scenes() */void EditorExportPlugin::_end_customize_scenes(EditorExportPlugin *this) {
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
      LAB_00101e6b:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x2e0] == (EditorExportPlugin)0x0 )) {
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
         String::parse_latin1((String*)local_c8, "_end_customize_scenes");
         local_90 = CONCAT44(local_90._4_4_, 8);
         uVar1 = MethodInfo::get_compatibility_hash();
         lVar3 = *(long*)( this + 8 );
         *(undefined8*)( this + 0x2e8 ) = 0;
         UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd8 );
         if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) {
            local_e8 = 0;
            String::parse_latin1((String*)&local_e8, "EditorExportPlugin");
            StringName::StringName((StringName*)&local_e0, (String*)&local_e8, false);
            ClassDB::get_virtual_method_compatibility_hashes(local_d8, (StringName*)&local_e0);
            if (local_d0 == 0) {
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( lVar3 = local_e0 != 0 )) goto LAB_001020b7;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               LAB_001020cc:lVar3 = *(long*)( this + 8 );
               UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 200 );
               if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xc0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) goto LAB_00102009;
               uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x2d8);
               *(undefined8*)( this + 0x2e8 ) = uVar2;
            }
 else {
               lVar3 = *(long*)( local_d0 + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
                  LAB_001020b7:StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               if (lVar3 == 0) goto LAB_001020cc;
            }

            lVar3 = *(long*)( this + 8 );
         }
 else {
            uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x2d8, uVar1);
            *(undefined8*)( this + 0x2e8 ) = uVar2;
            lVar3 = *(long*)( this + 8 );
         }

         LAB_00102009:if (*(char*)( lVar3 + 0x29 ) != '\0') {
            plVar4 = (long*)operator_new(0x18, "");
            *plVar4 = (long)( this + 0x2e8 );
            plVar4[1] = (long)( this + 0x2e0 );
            plVar4[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar4;
         }

         this[0x2e0] = (EditorExportPlugin)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)local_c8);
      }

      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x2e8 );
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x00101f2c. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( this + 0x10 ), 0, 0);
               return;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00101ecd. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x2d8, UNRECOVERED_JUMPTABLE, 0, 0);
            return;
         }

         goto LAB_0010213f;
      }

   }
 else {
      for (int i = 0; i < 3; i++) {
         local_c8[i] = 0;
      }

      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, this + 0x2d8, 0, 0, local_c8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_c8[0] != 0) goto LAB_00101e6b;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010213f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* EditorExportPlugin::_end_customize_resources() */void EditorExportPlugin::_end_customize_resources(EditorExportPlugin *this) {
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
      LAB_0010221b:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x2f8] == (EditorExportPlugin)0x0 )) {
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
         String::parse_latin1((String*)local_c8, "_end_customize_resources");
         local_90 = CONCAT44(local_90._4_4_, 8);
         uVar1 = MethodInfo::get_compatibility_hash();
         lVar3 = *(long*)( this + 8 );
         *(undefined8*)( this + 0x300 ) = 0;
         UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd8 );
         if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) {
            local_e8 = 0;
            String::parse_latin1((String*)&local_e8, "EditorExportPlugin");
            StringName::StringName((StringName*)&local_e0, (String*)&local_e8, false);
            ClassDB::get_virtual_method_compatibility_hashes(local_d8, (StringName*)&local_e0);
            if (local_d0 == 0) {
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( lVar3 = local_e0 != 0 )) goto LAB_00102467;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               LAB_0010247c:lVar3 = *(long*)( this + 8 );
               UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 200 );
               if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xc0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) goto LAB_001023b9;
               uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x2f0);
               *(undefined8*)( this + 0x300 ) = uVar2;
            }
 else {
               lVar3 = *(long*)( local_d0 + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
                  LAB_00102467:StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               if (lVar3 == 0) goto LAB_0010247c;
            }

            lVar3 = *(long*)( this + 8 );
         }
 else {
            uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x2f0, uVar1);
            *(undefined8*)( this + 0x300 ) = uVar2;
            lVar3 = *(long*)( this + 8 );
         }

         LAB_001023b9:if (*(char*)( lVar3 + 0x29 ) != '\0') {
            plVar4 = (long*)operator_new(0x18, "");
            *plVar4 = (long)( this + 0x300 );
            plVar4[1] = (long)( this + 0x2f8 );
            plVar4[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar4;
         }

         this[0x2f8] = (EditorExportPlugin)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)local_c8);
      }

      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x300 );
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x001022dc. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( this + 0x10 ), 0, 0);
               return;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x0010227d. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x2f0, UNRECOVERED_JUMPTABLE, 0, 0);
            return;
         }

         goto LAB_001024ef;
      }

   }
 else {
      for (int i = 0; i < 3; i++) {
         local_c8[i] = 0;
      }

      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, this + 0x2f0, 0, 0, local_c8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_c8[0] != 0) goto LAB_0010221b;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001024ef:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* EditorExportPlugin::get_name() const */void EditorExportPlugin::get_name(void) {
   char *__s;
   undefined4 uVar1;
   size_t sVar2;
   long lVar3;
   long *plVar4;
   code *pcVar5;
   long *in_RSI;
   CowData<char32_t> *in_RDI;
   long in_FS_OFFSET;
   CowData<char32_t> *local_138;
   undefined8 local_128;
   String local_120[8];
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
   plVar4 = (long*)in_RSI[0x13];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)in_RDI = 0;
   if (plVar4 != (long*)0x0) {
      local_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, in_RSI + 0x73, 0, 0, &local_c8);
      if (local_c8 == 0) {
         Variant::operator_cast_to_String((Variant*)&local_f8);
         if (*(long*)in_RDI != local_f8) {
            CowData<char32_t>::_unref(in_RDI);
            lVar3 = local_f8;
            local_f8 = 0;
            *(long*)in_RDI = lVar3;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010268b;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( in_RSI[1] != 0 ) && ( (char)in_RSI[0x74] == '\0' )) {
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
      lVar3 = in_RSI[1];
      in_RSI[0x75] = 0;
      pcVar5 = *(code**)( lVar3 + 0xd8 );
      if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xd0 ) ),pcVar5 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "EditorExportPlugin");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar3 = local_100 != 0 )) goto LAB_00102bb1;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_00102bc6:lVar3 = in_RSI[1];
            pcVar5 = *(code**)( lVar3 + 200 );
            if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_00102a5e;
            lVar3 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), in_RSI + 0x73);
            in_RSI[0x75] = lVar3;
         }
 else {
            lVar3 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_00102bb1:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar3 == 0) goto LAB_00102bc6;
         }

         lVar3 = in_RSI[1];
      }
 else {
         lVar3 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), in_RSI + 0x73, uVar1);
         in_RSI[0x75] = lVar3;
         lVar3 = in_RSI[1];
      }

      LAB_00102a5e:if (*(char*)( lVar3 + 0x29 ) != '\0') {
         plVar4 = (long*)operator_new(0x18, "");
         *plVar4 = (long)( in_RSI + 0x75 );
         plVar4[1] = (long)( in_RSI + 0x74 );
         plVar4[2] = in_RSI[0x2d];
         in_RSI[0x2d] = (long)plVar4;
      }

      *(undefined1*)( in_RSI + 0x74 ) = 1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   }

   pcVar5 = (code*)in_RSI[0x75];
   if (pcVar5 == (code*)0x0) {
      if (_gdvirtual__get_name_call(String & ::first_print != '\0') {
         local_f8 = 0;
         local_c8 = 0x110638;
         uStack_c4 = 0;
         uStack_c0 = 0x23;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_f8);
         local_c8 = 0x110976;
         uStack_c4 = 0;
         local_108 = 0;
         uStack_c0 = 9;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_108);
         local_118 = 0;
         local_c8 = 0x11092b;
         uStack_c4 = 0;
         uStack_c0 = 2;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_118);
         if (*(code**)( *in_RSI + 0x48 ) == get_class) {
            if (in_RSI[1] == 0) {
               local_128 = 0;
               local_c8 = 0x110f44;
               uStack_c4 = 0;
               uStack_c0 = 0x12;
               uStack_bc = 0;
               String::parse_latin1((StrRange*)&local_128);
            }
 else {
               lVar3 = *(long*)( in_RSI[1] + 0x20 );
               if (lVar3 == 0) {
                  local_128 = 0;
               }
 else {
                  __s = *(char**)( lVar3 + 8 );
                  local_128 = 0;
                  if (__s == (char*)0x0) {
                     if (*(long*)( lVar3 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_128, (CowData*)( lVar3 + 0x10 ));
                     }

                  }
 else {
                     sVar2 = strlen(__s);
                     local_c8 = (int)__s;
                     uStack_c4 = ( undefined4 )((ulong)__s >> 0x20);
                     uStack_c0 = (undefined4)sVar2;
                     uStack_bc = ( undefined4 )(sVar2 >> 0x20);
                     String::parse_latin1((StrRange*)&local_128);
                  }

               }

            }

         }
 else {
            ( **(code**)( *in_RSI + 0x48 ) )();
         }

         local_138 = (CowData<char32_t>*)&local_128;
         operator+((char *)
         local_120,(String*)"Required virtual method ";
         String::operator +(local_110, local_120);
         String::operator +((String*)&local_100, local_110);
         String::operator +((String*)&local_c8, (String*)&local_100);
         _err_print_error("_gdvirtual__get_name_call", "editor/export/editor_export_plugin.h", 0x89, (String*)&local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_120);
         CowData<char32_t>::_unref(local_138);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         _gdvirtual__get_name_call(String&)::first_print =
         '\0';
      }

   }
 else {
      local_f8 = 0;
      if (*(code**)( in_RSI[1] + 0xe0 ) == (code*)0x0) {
         ( *pcVar5 )(in_RSI[2], 0, (CowData<char32_t>*)&local_f8);
      }
 else {
         ( **(code**)( in_RSI[1] + 0xe0 ) )(in_RSI[2], in_RSI + 0x73, pcVar5, 0, (CowData<char32_t>*)&local_f8);
      }

      local_c8 = 0;
      uStack_c4 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_f8);
      lVar3 = CONCAT44(uStack_c4, local_c8);
      if (*(long*)in_RDI != lVar3) {
         CowData<char32_t>::_unref(in_RDI);
         *(long*)in_RDI = lVar3;
         local_c8 = 0;
         uStack_c4 = 0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   }

   LAB_0010268b:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
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
/* EditorExportPlugin::_bind_methods() */void EditorExportPlugin::_bind_methods(void) {
   undefined *puVar1;
   MethodBind *pMVar2;
   uint uVar3;
   long in_FS_OFFSET;
   long local_170;
   long local_168;
   long local_160;
   Vector local_158[8];
   undefined8 local_150;
   char *local_148;
   undefined8 local_140;
   StringName local_138[8];
   undefined4 local_130;
   undefined8 local_128;
   undefined4 local_120;
   char *local_118;
   undefined8 local_110;
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
   undefined *local_a8;
   undefined *puStack_a0;
   char *local_98;
   undefined8 local_90;
   char *local_88;
   undefined *puStack_80;
   char *local_78;
   undefined8 local_70;
   char **local_68;
   undefined1 auStack_60[32];
   long local_40;
   puVar1 = PTR__LC50_0011aff8;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 0;
   local_78 = "target";
   local_88 = PTR__LC50_0011aff8;
   puStack_80 = &_LC52;
   auStack_60._8_8_ = &local_78;
   auStack_60._0_8_ = &puStack_80;
   uVar3 = ( uint ) & local_68;
   local_68 = &local_88;
   D_METHODP((char*)&local_118, (char***)"add_shared_object", uVar3);
   auStack_60._0_16_ = (undefined1[16])0x0;
   local_68 = (char**)0x0;
   pMVar2 = create_method_bind<EditorExportPlugin,String_const&,Vector<String>const&,String_const&>(add_shared_object);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   puStack_80 = (undefined*)0x0;
   local_88 = "path";
   local_68 = &local_88;
   D_METHODP((char*)&local_118, (char***)"add_ios_project_static_lib", uVar3);
   ClassDB::bind_method<MethodDefinition,void(EditorExportPlugin::*)(String_const & )>((MethodDefinition*)&local_118, add_ios_project_static_lib, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   local_98 = "remap";
   local_a8 = puVar1;
   puStack_a0 = &_LC51;
   auStack_60._8_8_ = &local_98;
   auStack_60._0_8_ = &puStack_a0;
   local_90 = 0;
   local_68 = &local_a8;
   D_METHODP((char*)&local_118, (char***)"add_file", uVar3);
   auStack_60._0_16_ = (undefined1[16])0x0;
   local_68 = (char**)0x0;
   pMVar2 = create_method_bind<EditorExportPlugin,String_const&,Vector<unsigned_char>const&,bool>(add_file);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   local_88 = "path";
   puStack_80 = (undefined*)0x0;
   local_68 = &local_88;
   D_METHODP((char*)&local_118, (char***)"add_ios_framework", uVar3);
   ClassDB::bind_method<MethodDefinition,void(EditorExportPlugin::*)(String_const & )>((MethodDefinition*)&local_118, add_ios_framework, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   local_88 = "path";
   puStack_80 = (undefined*)0x0;
   local_68 = &local_88;
   D_METHODP((char*)&local_118, (char***)"add_ios_embedded_framework", uVar3);
   ClassDB::bind_method<MethodDefinition,void(EditorExportPlugin::*)(String_const & )>((MethodDefinition*)&local_118, add_ios_embedded_framework, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   puStack_80 = (undefined*)0x0;
   local_88 = "plist_content";
   local_68 = &local_88;
   D_METHODP((char*)&local_118, (char***)"add_ios_plist_content", uVar3);
   ClassDB::bind_method<MethodDefinition,void(EditorExportPlugin::*)(String_const & )>((MethodDefinition*)&local_118, add_ios_plist_content, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   puStack_80 = (undefined*)0x0;
   local_88 = "flags";
   local_68 = &local_88;
   D_METHODP((char*)&local_118, (char***)"add_ios_linker_flags", uVar3);
   ClassDB::bind_method<MethodDefinition,void(EditorExportPlugin::*)(String_const & )>((MethodDefinition*)&local_118, add_ios_linker_flags, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   local_88 = "path";
   puStack_80 = (undefined*)0x0;
   local_68 = &local_88;
   D_METHODP((char*)&local_118, (char***)"add_ios_bundle_file", uVar3);
   ClassDB::bind_method<MethodDefinition,void(EditorExportPlugin::*)(String_const & )>((MethodDefinition*)&local_118, add_ios_bundle_file, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   puStack_80 = (undefined*)0x0;
   local_88 = "code";
   local_68 = &local_88;
   D_METHODP((char*)&local_118, (char***)"add_ios_cpp_code", uVar3);
   ClassDB::bind_method<MethodDefinition,void(EditorExportPlugin::*)(String_const & )>((MethodDefinition*)&local_118, add_ios_cpp_code, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   local_88 = "path";
   puStack_80 = (undefined*)0x0;
   local_68 = &local_88;
   D_METHODP((char*)&local_118, (char***)"add_macos_plugin_file", uVar3);
   ClassDB::bind_method<MethodDefinition,void(EditorExportPlugin::*)(String_const & )>((MethodDefinition*)&local_118, add_macos_plugin_file, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   D_METHODP((char*)&local_118, (char***)&_LC68, 0);
   auStack_60._0_16_ = (undefined1[16])0x0;
   local_68 = (char**)0x0;
   pMVar2 = create_method_bind<EditorExportPlugin>(skip);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   puStack_80 = (undefined*)0x0;
   local_88 = "name";
   local_68 = &local_88;
   D_METHODP((char*)&local_118, (char***)"get_option", uVar3);
   auStack_60._0_16_ = (undefined1[16])0x0;
   local_68 = (char**)0x0;
   pMVar2 = create_method_bind<EditorExportPlugin,Variant,StringName_const&>(get_option);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   D_METHODP((char*)&local_118, (char***)"get_export_preset", 0);
   auStack_60._0_16_ = (undefined1[16])0x0;
   local_68 = (char**)0x0;
   pMVar2 = create_method_bind<EditorExportPlugin,Ref<EditorExportPreset>>(get_export_preset);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   D_METHODP((char*)&local_118, (char***)"get_export_platform", 0);
   auStack_60._0_16_ = (undefined1[16])0x0;
   local_68 = (char**)0x0;
   pMVar2 = create_method_bind<EditorExportPlugin,Ref<EditorExportPlatform>>(get_export_platform);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   local_150 = 0;
   local_148 = (char*)0x0;
   local_118 = "path";
   local_110 = 4;
   String::parse_latin1((StrRange*)&local_148);
   local_118 = (char*)0x0;
   if (local_148 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_148);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   local_168 = 0;
   local_118 = "type";
   local_110 = 4;
   String::parse_latin1((StrRange*)&local_168);
   local_118 = (char*)0x0;
   if (local_168 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_168);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   local_160 = 0;
   local_118 = "features";
   local_110 = 8;
   String::parse_latin1((StrRange*)&local_160);
   local_118 = (char*)0x0;
   if (local_160 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_160);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   local_108 = (undefined1[16])0x0;
   local_148 = "_export_file";
   local_118 = (char*)0x0;
   local_110 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 6;
   local_e0 = 1;
   local_d8[0] = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_b0 = 0;
   local_140 = 0xc;
   String::parse_latin1((StrRange*)&local_118);
   local_e0 = CONCAT44(local_e0._4_4_, 8);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   local_148 = "EditorExportPlugin";
   local_160 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_148, (String*)&local_160, false);
   ClassDB::add_virtual_method((StringName*)&local_148, (MethodInfo*)&local_118, true, local_158, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   CowData<String>::_unref((CowData<String>*)&local_150);
   local_150 = 0;
   local_148 = (char*)0x0;
   local_118 = "features";
   local_110 = 8;
   String::parse_latin1((StrRange*)&local_148);
   local_118 = (char*)0x0;
   if (local_148 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_148);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   local_170 = 0;
   local_118 = "is_debug";
   local_110 = 8;
   String::parse_latin1((StrRange*)&local_170);
   local_118 = (char*)0x0;
   if (local_170 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_170);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   local_160 = 0;
   local_118 = "path";
   local_110 = 4;
   String::parse_latin1((StrRange*)&local_160);
   local_118 = (char*)0x0;
   if (local_160 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_160);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   local_168 = 0;
   local_118 = "flags";
   local_110 = 5;
   String::parse_latin1((StrRange*)&local_168);
   local_118 = (char*)0x0;
   if (local_168 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_168);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   local_108 = (undefined1[16])0x0;
   local_148 = "_export_begin";
   local_118 = (char*)0x0;
   local_110 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 6;
   local_e0 = 1;
   local_d8[0] = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_b0 = 0;
   local_140 = 0xd;
   String::parse_latin1((StrRange*)&local_118);
   local_e0 = CONCAT44(local_e0._4_4_, 8);
   GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   local_170 = 0;
   local_168 = 0;
   local_148 = "";
   local_140 = 0;
   String::parse_latin1((StrRange*)&local_168);
   local_160 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 2, (StrRange*)&local_160, 0, (StrRange*)&local_168, 6, (StrRange*)&local_170);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_170 != 0 )) {
      StringName::unref();
   }

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 7);
   local_148 = "EditorExportPlugin";
   local_160 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_148, (String*)&local_160, false);
   ClassDB::add_virtual_method((StringName*)&local_148, (MethodInfo*)&local_118, true, local_158, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   CowData<String>::_unref((CowData<String>*)&local_150);
   local_108 = (undefined1[16])0x0;
   local_148 = "_export_end";
   local_150 = 0;
   local_118 = (char*)0x0;
   local_110 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 6;
   local_e0 = 1;
   local_d8[0] = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_b0 = 0;
   local_140 = 0xb;
   String::parse_latin1((StrRange*)&local_118);
   local_148 = "EditorExportPlugin";
   local_e0 = CONCAT44(local_e0._4_4_, 8);
   local_160 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_148, (String*)&local_160, false);
   ClassDB::add_virtual_method((StringName*)&local_148, (MethodInfo*)&local_118, true, local_158, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   CowData<String>::_unref((CowData<String>*)&local_150);
   local_150 = 0;
   local_148 = (char*)0x0;
   local_118 = "platform";
   local_110 = 8;
   String::parse_latin1((StrRange*)&local_148);
   local_118 = (char*)0x0;
   if (local_148 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_148);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   local_160 = 0;
   local_118 = "features";
   local_110 = 8;
   String::parse_latin1((StrRange*)&local_160);
   local_118 = (char*)0x0;
   if (local_160 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_160);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   local_108 = (undefined1[16])0x0;
   local_148 = "_begin_customize_resources";
   local_118 = (char*)0x0;
   local_110 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 6;
   local_e0 = 1;
   local_d8[0] = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_b0 = 0;
   local_140 = 0x1a;
   String::parse_latin1((StrRange*)&local_118);
   local_e0 = CONCAT44(local_e0._4_4_, 0xc);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_148);
   PropertyInfo::operator =((PropertyInfo*)&local_110, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   local_c0 = local_c0 & 0xffffffff00000000;
   GetTypeInfo<Ref<EditorExportPlatform>const&,void>::get_class_info((GetTypeInfo<Ref<EditorExportPlatform>const&,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   GetTypeInfo<Vector<String>const&,void>::get_class_info((GetTypeInfo<Vector<String>const&,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   local_148 = "EditorExportPlugin";
   local_160 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_148, (String*)&local_160, false);
   ClassDB::add_virtual_method((StringName*)&local_148, (MethodInfo*)&local_118, true, local_158, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   CowData<String>::_unref((CowData<String>*)&local_150);
   local_150 = 0;
   local_148 = (char*)0x0;
   local_118 = "resource";
   local_110 = 8;
   String::parse_latin1((StrRange*)&local_148);
   local_118 = (char*)0x0;
   if (local_148 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_148);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   local_160 = 0;
   local_118 = "path";
   local_110 = 4;
   String::parse_latin1((StrRange*)&local_160);
   local_118 = (char*)0x0;
   if (local_160 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_160);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   local_108 = (undefined1[16])0x0;
   local_148 = "_customize_resource";
   local_118 = (char*)0x0;
   local_110 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 6;
   local_e0 = 1;
   local_d8[0] = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_b0 = 0;
   local_140 = 0x13;
   String::parse_latin1((StrRange*)&local_118);
   local_e0 = CONCAT44(local_e0._4_4_, 0x88);
   local_170 = 0;
   local_168 = 0;
   local_148 = "Resource";
   local_140 = 8;
   String::parse_latin1((StrRange*)&local_168);
   local_160 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 0x18, (StrRange*)&local_160, 0x11, (StrRange*)&local_168, 6, (StrRange*)&local_170);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_170 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::operator =((PropertyInfo*)&local_110, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   local_c0 = local_c0 & 0xffffffff00000000;
   local_170 = 0;
   local_168 = 0;
   local_148 = "Resource";
   local_140 = 8;
   String::parse_latin1((StrRange*)&local_168);
   local_160 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 0x18, (StrRange*)&local_160, 0x11, (StrRange*)&local_168, 6, (StrRange*)&local_170);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_170 != 0 )) {
      StringName::unref();
   }

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   local_148 = "EditorExportPlugin";
   local_160 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_148, (String*)&local_160, false);
   ClassDB::add_virtual_method((StringName*)&local_148, (MethodInfo*)&local_118, true, local_158, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   CowData<String>::_unref((CowData<String>*)&local_150);
   local_150 = 0;
   local_148 = (char*)0x0;
   local_118 = "platform";
   local_110 = 8;
   String::parse_latin1((StrRange*)&local_148);
   local_118 = (char*)0x0;
   if (local_148 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_148);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   local_160 = 0;
   local_118 = "features";
   local_110 = 8;
   String::parse_latin1((StrRange*)&local_160);
   local_118 = (char*)0x0;
   if (local_160 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_160);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   local_108 = (undefined1[16])0x0;
   local_148 = "_begin_customize_scenes";
   local_118 = (char*)0x0;
   local_110 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 6;
   local_e0 = 1;
   local_d8[0] = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_b0 = 0;
   local_140 = 0x17;
   String::parse_latin1((StrRange*)&local_118);
   local_e0 = CONCAT44(local_e0._4_4_, 0xc);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_148);
   PropertyInfo::operator =((PropertyInfo*)&local_110, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   local_c0 = local_c0 & 0xffffffff00000000;
   GetTypeInfo<Ref<EditorExportPlatform>const&,void>::get_class_info((GetTypeInfo<Ref<EditorExportPlatform>const&,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   GetTypeInfo<Vector<String>const&,void>::get_class_info((GetTypeInfo<Vector<String>const&,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   local_148 = "EditorExportPlugin";
   local_160 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_148, (String*)&local_160, false);
   ClassDB::add_virtual_method((StringName*)&local_148, (MethodInfo*)&local_118, true, local_158, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   CowData<String>::_unref((CowData<String>*)&local_150);
   local_150 = 0;
   local_148 = (char*)0x0;
   local_118 = "scene";
   local_110 = 5;
   String::parse_latin1((StrRange*)&local_148);
   local_118 = (char*)0x0;
   if (local_148 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_148);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   local_160 = 0;
   local_118 = "path";
   local_110 = 4;
   String::parse_latin1((StrRange*)&local_160);
   local_118 = (char*)0x0;
   if (local_160 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_160);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   local_108 = (undefined1[16])0x0;
   local_148 = "_customize_scene";
   local_118 = (char*)0x0;
   local_110 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 6;
   local_e0 = 1;
   local_d8[0] = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_b0 = 0;
   local_140 = 0x10;
   String::parse_latin1((StrRange*)&local_118);
   local_148 = "Node";
   local_e0 = CONCAT44(local_e0._4_4_, 0x88);
   local_160 = 0;
   local_140 = 4;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_168, (String*)&local_160, false);
   local_148 = (char*)CONCAT44(local_148._4_4_, 0x18);
   local_140 = 0;
   StringName::StringName(local_138, (StringName*)&local_168);
   local_130 = 0;
   local_128 = 0;
   local_120 = 6;
   if (( StringName::configured != '\0' ) && ( local_168 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   PropertyInfo::operator =((PropertyInfo*)&local_110, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   local_148 = "Node";
   local_c0 = local_c0 & 0xffffffff00000000;
   local_160 = 0;
   local_140 = 4;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_168, (String*)&local_160, false);
   local_148 = (char*)CONCAT44(local_148._4_4_, 0x18);
   local_140 = 0;
   StringName::StringName(local_138, (StringName*)&local_168);
   local_130 = 0;
   local_128 = 0;
   local_120 = 6;
   if (( StringName::configured != '\0' ) && ( local_168 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   local_148 = "EditorExportPlugin";
   local_160 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_148, (String*)&local_160, false);
   ClassDB::add_virtual_method((StringName*)&local_148, (MethodInfo*)&local_118, true, local_158, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   CowData<String>::_unref((CowData<String>*)&local_150);
   local_108 = (undefined1[16])0x0;
   local_148 = "_get_customization_configuration_hash";
   local_150 = 0;
   local_118 = (char*)0x0;
   local_110 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 6;
   local_e0 = 1;
   local_d8[0] = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_b0 = 0;
   local_140 = 0x25;
   String::parse_latin1((StrRange*)&local_118);
   local_e0 = CONCAT44(local_e0._4_4_, 0x8c);
   local_170 = 0;
   local_168 = 0;
   local_148 = "";
   local_140 = 0;
   String::parse_latin1((StrRange*)&local_168);
   local_160 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 2, (StrRange*)&local_160, 0, (StrRange*)&local_168, 6, (StrRange*)&local_170);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_170 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::operator =((PropertyInfo*)&local_110, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   local_148 = "EditorExportPlugin";
   local_c0 = CONCAT44(local_c0._4_4_, 8);
   local_160 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_148, (String*)&local_160, false);
   ClassDB::add_virtual_method((StringName*)&local_148, (MethodInfo*)&local_118, true, local_158, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   CowData<String>::_unref((CowData<String>*)&local_150);
   local_108 = (undefined1[16])0x0;
   local_148 = "_end_customize_scenes";
   local_150 = 0;
   local_118 = (char*)0x0;
   local_110 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 6;
   local_e0 = 1;
   local_d8[0] = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_b0 = 0;
   local_140 = 0x15;
   String::parse_latin1((StrRange*)&local_118);
   local_148 = "EditorExportPlugin";
   local_e0 = CONCAT44(local_e0._4_4_, 8);
   local_160 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_148, (String*)&local_160, false);
   ClassDB::add_virtual_method((StringName*)&local_148, (MethodInfo*)&local_118, true, local_158, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   CowData<String>::_unref((CowData<String>*)&local_150);
   local_108 = (undefined1[16])0x0;
   local_148 = "_end_customize_resources";
   local_150 = 0;
   local_118 = (char*)0x0;
   local_110 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 6;
   local_e0 = 1;
   local_d8[0] = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_b0 = 0;
   local_140 = 0x18;
   String::parse_latin1((StrRange*)&local_118);
   local_148 = "EditorExportPlugin";
   local_e0 = CONCAT44(local_e0._4_4_, 8);
   local_160 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_148, (String*)&local_160, false);
   ClassDB::add_virtual_method((StringName*)&local_148, (MethodInfo*)&local_118, true, local_158, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   CowData<String>::_unref((CowData<String>*)&local_150);
   local_150 = 0;
   local_148 = (char*)0x0;
   local_118 = "platform";
   local_110 = 8;
   String::parse_latin1((StrRange*)&local_148);
   local_118 = (char*)0x0;
   if (local_148 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_148);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   local_108 = (undefined1[16])0x0;
   local_148 = "_get_export_options";
   local_118 = (char*)0x0;
   local_110 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 6;
   local_e0 = 1;
   local_d8[0] = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_b0 = 0;
   local_140 = 0x13;
   String::parse_latin1((StrRange*)&local_118);
   local_e0 = CONCAT44(local_e0._4_4_, 0xc);
   local_170 = 0;
   Variant::get_type_name((StrRange*)&local_168, 0x1b);
   local_160 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 0x1c, (StrRange*)&local_160, 0x1f, (StrRange*)&local_168, 6, (StrRange*)&local_170);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_170 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::operator =((PropertyInfo*)&local_110, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   local_c0 = local_c0 & 0xffffffff00000000;
   GetTypeInfo<Ref<EditorExportPlatform>const&,void>::get_class_info((GetTypeInfo<Ref<EditorExportPlatform>const&,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   local_148 = "EditorExportPlugin";
   local_160 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_148, (String*)&local_160, false);
   ClassDB::add_virtual_method((StringName*)&local_148, (MethodInfo*)&local_118, true, local_158, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   CowData<String>::_unref((CowData<String>*)&local_150);
   local_150 = 0;
   local_148 = (char*)0x0;
   local_118 = "platform";
   local_110 = 8;
   String::parse_latin1((StrRange*)&local_148);
   local_118 = (char*)0x0;
   if (local_148 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_148);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   local_108 = (undefined1[16])0x0;
   local_148 = "_get_export_options_overrides";
   local_118 = (char*)0x0;
   local_110 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 6;
   local_e0 = 1;
   local_d8[0] = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_b0 = 0;
   local_140 = 0x1d;
   String::parse_latin1((StrRange*)&local_118);
   local_e0 = CONCAT44(local_e0._4_4_, 0xc);
   local_170 = 0;
   local_168 = 0;
   local_148 = "";
   local_140 = 0;
   String::parse_latin1((StrRange*)&local_168);
   local_160 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 0x1b, (StrRange*)&local_160, 0, (StrRange*)&local_168, 6, (StrRange*)&local_170);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_170 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::operator =((PropertyInfo*)&local_110, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   local_c0 = local_c0 & 0xffffffff00000000;
   GetTypeInfo<Ref<EditorExportPlatform>const&,void>::get_class_info((GetTypeInfo<Ref<EditorExportPlatform>const&,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   local_148 = "EditorExportPlugin";
   local_160 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_148, (String*)&local_160, false);
   ClassDB::add_virtual_method((StringName*)&local_148, (MethodInfo*)&local_118, true, local_158, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   CowData<String>::_unref((CowData<String>*)&local_150);
   local_150 = 0;
   local_148 = (char*)0x0;
   local_118 = "platform";
   local_110 = 8;
   String::parse_latin1((StrRange*)&local_148);
   local_118 = (char*)0x0;
   if (local_148 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_148);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   local_108 = (undefined1[16])0x0;
   local_148 = "_should_update_export_options";
   local_118 = (char*)0x0;
   local_110 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 6;
   local_e0 = 1;
   local_d8[0] = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_b0 = 0;
   local_140 = 0x1d;
   String::parse_latin1((StrRange*)&local_118);
   local_e0 = CONCAT44(local_e0._4_4_, 0xc);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_148);
   PropertyInfo::operator =((PropertyInfo*)&local_110, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   local_c0 = local_c0 & 0xffffffff00000000;
   GetTypeInfo<Ref<EditorExportPlatform>const&,void>::get_class_info((GetTypeInfo<Ref<EditorExportPlatform>const&,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   local_148 = "EditorExportPlugin";
   local_160 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_148, (String*)&local_160, false);
   ClassDB::add_virtual_method((StringName*)&local_148, (MethodInfo*)&local_118, true, local_158, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   CowData<String>::_unref((CowData<String>*)&local_150);
   local_150 = 0;
   local_148 = (char*)0x0;
   local_118 = "platform";
   local_110 = 8;
   String::parse_latin1((StrRange*)&local_148);
   local_118 = (char*)0x0;
   if (local_148 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_148);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   local_160 = 0;
   local_118 = "option";
   local_110 = 6;
   String::parse_latin1((StrRange*)&local_160);
   local_118 = (char*)0x0;
   if (local_160 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_160);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   local_108 = (undefined1[16])0x0;
   local_148 = "_get_export_option_visibility";
   local_118 = (char*)0x0;
   local_110 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 6;
   local_e0 = 1;
   local_d8[0] = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_b0 = 0;
   local_140 = 0x1d;
   String::parse_latin1((StrRange*)&local_118);
   local_e0 = CONCAT44(local_e0._4_4_, 0xc);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_148);
   PropertyInfo::operator =((PropertyInfo*)&local_110, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   local_c0 = local_c0 & 0xffffffff00000000;
   GetTypeInfo<Ref<EditorExportPlatform>const&,void>::get_class_info((GetTypeInfo<Ref<EditorExportPlatform>const&,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   local_148 = "EditorExportPlugin";
   local_160 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_148, (String*)&local_160, false);
   ClassDB::add_virtual_method((StringName*)&local_148, (MethodInfo*)&local_118, true, local_158, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   CowData<String>::_unref((CowData<String>*)&local_150);
   local_150 = 0;
   local_148 = (char*)0x0;
   local_118 = "platform";
   local_110 = 8;
   String::parse_latin1((StrRange*)&local_148);
   local_118 = (char*)0x0;
   if (local_148 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_148);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   local_160 = 0;
   local_118 = "option";
   local_110 = 6;
   String::parse_latin1((StrRange*)&local_160);
   local_118 = (char*)0x0;
   if (local_160 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_160);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   local_108 = (undefined1[16])0x0;
   local_148 = "_get_export_option_warning";
   local_118 = (char*)0x0;
   local_110 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 6;
   local_e0 = 1;
   local_d8[0] = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_b0 = 0;
   local_140 = 0x1a;
   String::parse_latin1((StrRange*)&local_118);
   local_e0 = CONCAT44(local_e0._4_4_, 0xc);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_148);
   PropertyInfo::operator =((PropertyInfo*)&local_110, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   local_c0 = local_c0 & 0xffffffff00000000;
   GetTypeInfo<Ref<EditorExportPlatform>const&,void>::get_class_info((GetTypeInfo<Ref<EditorExportPlatform>const&,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   local_148 = "EditorExportPlugin";
   local_160 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_148, (String*)&local_160, false);
   ClassDB::add_virtual_method((StringName*)&local_148, (MethodInfo*)&local_118, true, local_158, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   CowData<String>::_unref((CowData<String>*)&local_150);
   local_150 = 0;
   local_148 = (char*)0x0;
   local_118 = "platform";
   local_110 = 8;
   String::parse_latin1((StrRange*)&local_148);
   local_118 = (char*)0x0;
   if (local_148 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_148);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   local_160 = 0;
   local_118 = "debug";
   local_110 = 5;
   String::parse_latin1((StrRange*)&local_160);
   local_118 = (char*)0x0;
   if (local_160 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_160);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   local_108 = (undefined1[16])0x0;
   local_148 = "_get_export_features";
   local_118 = (char*)0x0;
   local_110 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 6;
   local_e0 = 1;
   local_d8[0] = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_b0 = 0;
   local_140 = 0x14;
   String::parse_latin1((StrRange*)&local_118);
   local_e0 = CONCAT44(local_e0._4_4_, 0xc);
   GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void>*)&local_148);
   PropertyInfo::operator =((PropertyInfo*)&local_110, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   local_c0 = local_c0 & 0xffffffff00000000;
   GetTypeInfo<Ref<EditorExportPlatform>const&,void>::get_class_info((GetTypeInfo<Ref<EditorExportPlatform>const&,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   local_148 = "EditorExportPlugin";
   local_160 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_148, (String*)&local_160, false);
   ClassDB::add_virtual_method((StringName*)&local_148, (MethodInfo*)&local_118, true, local_158, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   CowData<String>::_unref((CowData<String>*)&local_150);
   local_108 = (undefined1[16])0x0;
   local_148 = "_get_name";
   local_150 = 0;
   local_118 = (char*)0x0;
   local_110 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 6;
   local_e0 = 1;
   local_d8[0] = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_b0 = 0;
   local_140 = 9;
   String::parse_latin1((StrRange*)&local_118);
   local_e0 = CONCAT44(local_e0._4_4_, 0x8c);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_148);
   PropertyInfo::operator =((PropertyInfo*)&local_110, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   local_148 = "EditorExportPlugin";
   local_c0 = local_c0 & 0xffffffff00000000;
   local_160 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_148, (String*)&local_160, false);
   ClassDB::add_virtual_method((StringName*)&local_148, (MethodInfo*)&local_118, true, local_158, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   CowData<String>::_unref((CowData<String>*)&local_150);
   local_150 = 0;
   local_148 = (char*)0x0;
   local_118 = "platform";
   local_110 = 8;
   String::parse_latin1((StrRange*)&local_148);
   local_118 = (char*)0x0;
   if (local_148 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_148);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   local_108 = (undefined1[16])0x0;
   local_148 = "_supports_platform";
   local_118 = (char*)0x0;
   local_110 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 6;
   local_e0 = 1;
   local_d8[0] = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_b0 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_118);
   local_e0 = CONCAT44(local_e0._4_4_, 0xc);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_148);
   PropertyInfo::operator =((PropertyInfo*)&local_110, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   local_c0 = local_c0 & 0xffffffff00000000;
   GetTypeInfo<Ref<EditorExportPlatform>const&,void>::get_class_info((GetTypeInfo<Ref<EditorExportPlatform>const&,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   local_148 = "EditorExportPlugin";
   local_160 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_148, (String*)&local_160, false);
   ClassDB::add_virtual_method((StringName*)&local_148, (MethodInfo*)&local_118, true, local_158, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   CowData<String>::_unref((CowData<String>*)&local_150);
   local_150 = 0;
   local_148 = (char*)0x0;
   local_118 = "platform";
   local_110 = 8;
   String::parse_latin1((StrRange*)&local_148);
   local_118 = (char*)0x0;
   if (local_148 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_148);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   local_160 = 0;
   local_118 = "debug";
   local_110 = 5;
   String::parse_latin1((StrRange*)&local_160);
   local_118 = (char*)0x0;
   if (local_160 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_160);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   local_108 = (undefined1[16])0x0;
   local_148 = "_get_android_dependencies";
   local_118 = (char*)0x0;
   local_110 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 6;
   local_e0 = 1;
   local_d8[0] = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_b0 = 0;
   local_140 = 0x19;
   String::parse_latin1((StrRange*)&local_118);
   local_e0 = CONCAT44(local_e0._4_4_, 0xc);
   GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void>*)&local_148);
   PropertyInfo::operator =((PropertyInfo*)&local_110, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   local_c0 = local_c0 & 0xffffffff00000000;
   GetTypeInfo<Ref<EditorExportPlatform>const&,void>::get_class_info((GetTypeInfo<Ref<EditorExportPlatform>const&,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   local_148 = "EditorExportPlugin";
   local_160 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_148, (String*)&local_160, false);
   ClassDB::add_virtual_method((StringName*)&local_148, (MethodInfo*)&local_118, true, local_158, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   CowData<String>::_unref((CowData<String>*)&local_150);
   local_150 = 0;
   local_148 = (char*)0x0;
   local_118 = "platform";
   local_110 = 8;
   String::parse_latin1((StrRange*)&local_148);
   local_118 = (char*)0x0;
   if (local_148 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_148);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   local_160 = 0;
   local_118 = "debug";
   local_110 = 5;
   String::parse_latin1((StrRange*)&local_160);
   local_118 = (char*)0x0;
   if (local_160 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_160);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   local_108 = (undefined1[16])0x0;
   local_148 = "_get_android_dependencies_maven_repos";
   local_118 = (char*)0x0;
   local_110 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 6;
   local_e0 = 1;
   local_d8[0] = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_b0 = 0;
   local_140 = 0x25;
   String::parse_latin1((StrRange*)&local_118);
   local_e0 = CONCAT44(local_e0._4_4_, 0xc);
   GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void>*)&local_148);
   PropertyInfo::operator =((PropertyInfo*)&local_110, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   local_c0 = local_c0 & 0xffffffff00000000;
   GetTypeInfo<Ref<EditorExportPlatform>const&,void>::get_class_info((GetTypeInfo<Ref<EditorExportPlatform>const&,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   local_148 = "EditorExportPlugin";
   local_160 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_148, (String*)&local_160, false);
   ClassDB::add_virtual_method((StringName*)&local_148, (MethodInfo*)&local_118, true, local_158, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   CowData<String>::_unref((CowData<String>*)&local_150);
   local_150 = 0;
   local_148 = (char*)0x0;
   local_118 = "platform";
   local_110 = 8;
   String::parse_latin1((StrRange*)&local_148);
   local_118 = (char*)0x0;
   if (local_148 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_148);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   local_160 = 0;
   local_118 = "debug";
   local_110 = 5;
   String::parse_latin1((StrRange*)&local_160);
   local_118 = (char*)0x0;
   if (local_160 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_160);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   local_108 = (undefined1[16])0x0;
   local_148 = "_get_android_libraries";
   local_118 = (char*)0x0;
   local_110 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 6;
   local_e0 = 1;
   local_d8[0] = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_b0 = 0;
   local_140 = 0x16;
   String::parse_latin1((StrRange*)&local_118);
   local_e0 = CONCAT44(local_e0._4_4_, 0xc);
   GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void>*)&local_148);
   PropertyInfo::operator =((PropertyInfo*)&local_110, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   local_c0 = local_c0 & 0xffffffff00000000;
   GetTypeInfo<Ref<EditorExportPlatform>const&,void>::get_class_info((GetTypeInfo<Ref<EditorExportPlatform>const&,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   local_148 = "EditorExportPlugin";
   local_160 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_148, (String*)&local_160, false);
   ClassDB::add_virtual_method((StringName*)&local_148, (MethodInfo*)&local_118, true, local_158, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   CowData<String>::_unref((CowData<String>*)&local_150);
   local_150 = 0;
   local_148 = (char*)0x0;
   local_118 = "platform";
   local_110 = 8;
   String::parse_latin1((StrRange*)&local_148);
   local_118 = (char*)0x0;
   if (local_148 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_148);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   local_160 = 0;
   local_118 = "debug";
   local_110 = 5;
   String::parse_latin1((StrRange*)&local_160);
   local_118 = (char*)0x0;
   if (local_160 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_160);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   local_108 = (undefined1[16])0x0;
   local_148 = "_get_android_manifest_activity_element_contents";
   local_118 = (char*)0x0;
   local_110 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 6;
   local_e0 = 1;
   local_d8[0] = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_b0 = 0;
   local_140 = 0x2f;
   String::parse_latin1((StrRange*)&local_118);
   local_e0 = CONCAT44(local_e0._4_4_, 0xc);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_148);
   PropertyInfo::operator =((PropertyInfo*)&local_110, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   local_c0 = local_c0 & 0xffffffff00000000;
   GetTypeInfo<Ref<EditorExportPlatform>const&,void>::get_class_info((GetTypeInfo<Ref<EditorExportPlatform>const&,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   local_148 = "EditorExportPlugin";
   local_160 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_148, (String*)&local_160, false);
   ClassDB::add_virtual_method((StringName*)&local_148, (MethodInfo*)&local_118, true, local_158, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   CowData<String>::_unref((CowData<String>*)&local_150);
   local_150 = 0;
   local_148 = (char*)0x0;
   local_118 = "platform";
   local_110 = 8;
   String::parse_latin1((StrRange*)&local_148);
   local_118 = (char*)0x0;
   if (local_148 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_148);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   local_160 = 0;
   local_118 = "debug";
   local_110 = 5;
   String::parse_latin1((StrRange*)&local_160);
   local_118 = (char*)0x0;
   if (local_160 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_160);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   local_108 = (undefined1[16])0x0;
   local_148 = "_get_android_manifest_application_element_contents";
   local_118 = (char*)0x0;
   local_110 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 6;
   local_e0 = 1;
   local_d8[0] = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_b0 = 0;
   local_140 = 0x32;
   String::parse_latin1((StrRange*)&local_118);
   local_e0 = CONCAT44(local_e0._4_4_, 0xc);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_148);
   PropertyInfo::operator =((PropertyInfo*)&local_110, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   local_c0 = local_c0 & 0xffffffff00000000;
   GetTypeInfo<Ref<EditorExportPlatform>const&,void>::get_class_info((GetTypeInfo<Ref<EditorExportPlatform>const&,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   local_148 = "EditorExportPlugin";
   local_160 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_148, (String*)&local_160, false);
   ClassDB::add_virtual_method((StringName*)&local_148, (MethodInfo*)&local_118, true, local_158, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   CowData<String>::_unref((CowData<String>*)&local_150);
   local_150 = 0;
   local_148 = (char*)0x0;
   local_118 = "platform";
   local_110 = 8;
   String::parse_latin1((StrRange*)&local_148);
   local_118 = (char*)0x0;
   if (local_148 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_148);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   local_160 = 0;
   local_118 = "debug";
   local_110 = 5;
   String::parse_latin1((StrRange*)&local_160);
   local_118 = (char*)0x0;
   if (local_160 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_160);
   }

   Vector<String>::push_back((Vector<String>*)local_158, (MethodDefinition*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   local_108 = (undefined1[16])0x0;
   local_148 = "_get_android_manifest_element_contents";
   local_118 = (char*)0x0;
   local_110 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 6;
   local_e0 = 1;
   local_d8[0] = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_b0 = 0;
   local_140 = 0x26;
   String::parse_latin1((StrRange*)&local_118);
   local_e0 = CONCAT44(local_e0._4_4_, 0xc);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_148);
   PropertyInfo::operator =((PropertyInfo*)&local_110, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   local_c0 = local_c0 & 0xffffffff00000000;
   GetTypeInfo<Ref<EditorExportPlatform>const&,void>::get_class_info((GetTypeInfo<Ref<EditorExportPlatform>const&,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   local_148 = "EditorExportPlugin";
   local_160 = 0;
   local_140 = 0x12;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_148, (String*)&local_160, false);
   ClassDB::add_virtual_method((StringName*)&local_148, (MethodInfo*)&local_118, true, local_158, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   CowData<String>::_unref((CowData<String>*)&local_150);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorExportPlugin::_get_export_options_overrides(Ref<EditorExportPlatform> const&) const */Ref *EditorExportPlugin::_get_export_options_overrides(Ref *param_1) {
   Object *pOVar1;
   char cVar2;
   undefined4 uVar3;
   undefined8 uVar4;
   long lVar5;
   long *plVar6;
   code *pcVar7;
   long *in_RDX;
   long in_RSI;
   long in_FS_OFFSET;
   undefined8 local_138;
   Object *local_130;
   Dictionary local_128[8];
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
   Object **local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary((Dictionary*)param_1);
   plVar6 = *(long**)( in_RSI + 0x98 );
   if (plVar6 != (long*)0x0) {
      local_f8[0] = 0;
      local_f8[1] = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, (Object*)*in_RDX);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar6 + 0x60 ) )(local_58, plVar6, in_RSI + 0x338, &local_80, 1, local_f8);
      if (local_f8[0] == 0) {
         Variant::operator_cast_to_Dictionary((Variant*)local_128);
         Dictionary::operator =((Dictionary*)param_1, local_128);
         Dictionary::~Dictionary(local_128);
         if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00106ec0;
      }

      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( in_RSI + 8 ) != 0 ) && ( *(char*)( in_RSI + 0x340 ) == '\0' )) {
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
      String::parse_latin1((String*)local_f8, "_get_export_options_overrides");
      local_c0 = CONCAT44(local_c0._4_4_, 0xc);
      GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void>*)local_128);
      PropertyInfo::operator =((PropertyInfo*)&uStack_f0, (PropertyInfo*)local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_128);
      local_a0 = local_a0 & 0xffffffff00000000;
      GetTypeInfo<Ref<EditorExportPlatform>const&,void>::get_class_info((GetTypeInfo<Ref<EditorExportPlatform>const&,void>*)local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_128);
      Vector<int>::push_back(local_98, 0);
      uVar3 = MethodInfo::get_compatibility_hash();
      lVar5 = *(long*)( in_RSI + 8 );
      *(undefined8*)( in_RSI + 0x348 ) = 0;
      pcVar7 = *(code**)( lVar5 + 0xd8 );
      if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xd0 ) ),pcVar7 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "EditorExportPlugin");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_128, (StringName*)&local_130);
         if (local_120[0] == 0) {
            lVar5 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') goto LAB_0010728c;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_001072ab:lVar5 = *(long*)( in_RSI + 8 );
            pcVar7 = *(code**)( lVar5 + 200 );
            if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xc0 ) ),pcVar7 == (code*)0x0) goto LAB_001071b8;
            uVar4 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ), in_RSI + 0x338);
            *(undefined8*)( in_RSI + 0x348 ) = uVar4;
         }
 else {
            lVar5 = *(long*)( local_120[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') {
               LAB_0010728c:if (local_130 != (Object*)0x0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar5 == 0) goto LAB_001072ab;
         }

         lVar5 = *(long*)( in_RSI + 8 );
      }
 else {
         uVar4 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ), in_RSI + 0x338, uVar3);
         *(undefined8*)( in_RSI + 0x348 ) = uVar4;
         lVar5 = *(long*)( in_RSI + 8 );
      }

      LAB_001071b8:if (*(char*)( lVar5 + 0x29 ) != '\0') {
         plVar6 = (long*)operator_new(0x18, "");
         *plVar6 = in_RSI + 0x348;
         plVar6[1] = in_RSI + 0x340;
         plVar6[2] = *(long*)( in_RSI + 0x168 );
         *(long**)( in_RSI + 0x168 ) = plVar6;
      }

      *(undefined1*)( in_RSI + 0x340 ) = 1;
      MethodInfo::~MethodInfo((MethodInfo*)local_f8);
   }

   if (*(long*)( in_RSI + 0x348 ) != 0) {
      local_130 = (Object*)0x0;
      if (( (Object*)*in_RDX != (Object*)0x0 ) && ( local_130 = (Object*)*in_RDX ),cVar2 = RefCounted::reference(),cVar2 == '\0') {
         local_130 = (Object*)0x0;
      }

      local_58[0] = &local_130;
      Dictionary::Dictionary(local_128);
      pcVar7 = *(code**)( *(long*)( in_RSI + 8 ) + 0xe0 );
      if (pcVar7 == (code*)0x0) {
         ( **(code**)( in_RSI + 0x348 ) )(*(undefined8*)( in_RSI + 0x10 ), local_58, local_128);
      }
 else {
         ( *pcVar7 )(*(undefined8*)( in_RSI + 0x10 ), in_RSI + 0x338, *(undefined8*)( in_RSI + 0x348 ), local_58, local_128);
      }

      Dictionary::Dictionary((Dictionary*)local_f8, local_128);
      Dictionary::operator =((Dictionary*)param_1, (Dictionary*)local_f8);
      Dictionary::~Dictionary((Dictionary*)local_f8);
      Dictionary::~Dictionary(local_128);
      if (( ( local_130 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar1 = local_130,cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar1 + 0x140 ))(pOVar1);
      Memory::free_static(pOVar1, false);
   }

}
LAB_00106ec0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return param_1;}/* EditorExportPlugin::_get_export_option_warning(Ref<EditorExportPlatform> const&, String const&)
   const */Ref *EditorExportPlugin::_get_export_option_warning(Ref *param_1, String *param_2) {
   Object *pOVar1;
   char cVar2;
   undefined4 uVar3;
   undefined8 uVar4;
   long lVar5;
   long *plVar6;
   CowData *in_RCX;
   code *pcVar7;
   long *in_RDX;
   long in_FS_OFFSET;
   undefined8 local_160;
   Object *local_158;
   long local_150;
   long local_148;
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
   Object **local_78;
   CowData<char32_t> *pCStack_70;
   int local_60[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)param_1 = 0;
   local_160 = 0;
   if (*(long*)in_RCX != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_160, in_RCX);
   }

   plVar6 = *(long**)( param_2 + 0x98 );
   if (plVar6 != (long*)0x0) {
      local_118 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      Variant::Variant((Variant*)&local_78, (Object*)*in_RDX);
      Variant::Variant((Variant*)local_60, (String*)&local_160);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = (Variant*)local_60;
      ( **(code**)( *plVar6 + 0x60 ) )(local_98, plVar6, param_2 + 0x380, &local_a8, 2, &local_118);
      if (local_118 == 0) {
         Variant::operator_cast_to_String((Variant*)&local_148);
         if (*(long*)param_1 != local_148) {
            CowData<char32_t>::_unref((CowData<char32_t>*)param_1);
            lVar5 = local_148;
            local_148 = 0;
            *(long*)param_1 = lVar5;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_001074ae;
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

   if (( *(long*)( param_2 + 8 ) != 0 ) && ( param_2[0x388] == (String)0x0 )) {
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
      String::parse_latin1((String*)&local_118, "_get_export_option_warning");
      local_e0 = CONCAT44(local_e0._4_4_, 0xc);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_148);
      PropertyInfo::operator =((PropertyInfo*)&uStack_110, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      local_c0 = local_c0 & 0xffffffff00000000;
      GetTypeInfo<Ref<EditorExportPlatform>const&,void>::get_class_info((GetTypeInfo<Ref<EditorExportPlatform>const&,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 0);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 0);
      uVar3 = MethodInfo::get_compatibility_hash();
      *(undefined8*)( param_2 + 0x390 ) = 0;
      lVar5 = *(long*)( param_2 + 8 );
      pcVar7 = *(code**)( lVar5 + 0xd8 );
      if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xd0 ) ),pcVar7 == (code*)0x0) {
         local_158 = (Object*)0x0;
         String::parse_latin1((String*)&local_158, "EditorExportPlugin");
         StringName::StringName((StringName*)&local_150, (String*)&local_158, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_148, (StringName*)&local_150);
         if (local_140[0] == 0) {
            lVar5 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') goto LAB_00107975;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            LAB_00107996:lVar5 = *(long*)( param_2 + 8 );
            pcVar7 = *(code**)( lVar5 + 200 );
            if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xc0 ) ),pcVar7 == (code*)0x0) goto LAB_00107872;
            uVar4 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ), param_2 + 0x380);
            *(undefined8*)( param_2 + 0x390 ) = uVar4;
         }
 else {
            lVar5 = *(long*)( local_140[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') {
               LAB_00107975:if (local_150 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            if (lVar5 == 0) goto LAB_00107996;
         }

         lVar5 = *(long*)( param_2 + 8 );
      }
 else {
         uVar4 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ), param_2 + 0x380, uVar3);
         *(undefined8*)( param_2 + 0x390 ) = uVar4;
         lVar5 = *(long*)( param_2 + 8 );
      }

      LAB_00107872:if (*(char*)( lVar5 + 0x29 ) != '\0') {
         plVar6 = (long*)operator_new(0x18, "");
         *plVar6 = (long)( param_2 + 0x390 );
         plVar6[1] = (long)( param_2 + 0x388 );
         plVar6[2] = *(long*)( param_2 + 0x168 );
         *(long**)( param_2 + 0x168 ) = plVar6;
      }

      param_2[0x388] = (String)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   }

   if (*(long*)( param_2 + 0x390 ) != 0) {
      local_158 = (Object*)0x0;
      if (( (Object*)*in_RDX != (Object*)0x0 ) && ( local_158 = (Object*)*in_RDX ),cVar2 = RefCounted::reference(),cVar2 == '\0') {
         local_158 = (Object*)0x0;
      }

      local_150 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_150, (CowData*)&local_160);
      local_78 = &local_158;
      local_148 = 0;
      pCStack_70 = (CowData<char32_t>*)&local_150;
      if (*(code**)( *(long*)( param_2 + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( param_2 + 0x390 ) )(*(undefined8*)( param_2 + 0x10 ), &local_78, (CowData<char32_t>*)&local_148);
      }
 else {
         ( **(code**)( *(long*)( param_2 + 8 ) + 0xe0 ) )(*(undefined8*)( param_2 + 0x10 ), param_2 + 0x380, *(undefined8*)( param_2 + 0x390 ), &local_78, (CowData<char32_t>*)&local_148);
      }

      local_118 = 0;
      uStack_114 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_148);
      lVar5 = CONCAT44(uStack_114, local_118);
      if (*(long*)param_1 != lVar5) {
         CowData<char32_t>::_unref((CowData<char32_t>*)param_1);
         *(long*)param_1 = lVar5;
         local_118 = 0;
         uStack_114 = 0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
      if (( ( local_158 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar1 = local_158,cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar1 + 0x140 ))(pOVar1);
      Memory::free_static(pOVar1, false);
   }

}
LAB_001074ae:CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return param_1;}/* EditorExportPlugin::_get_export_option_visibility(Ref<EditorExportPlatform> const&, String
   const&) const */ulong EditorExportPlugin::_get_export_option_visibility(EditorExportPlugin *this, Ref *param_1, String *param_2) {
   Object *pOVar1;
   char cVar2;
   bool bVar3;
   undefined4 uVar4;
   undefined7 extraout_var;
   undefined8 uVar5;
   long lVar6;
   long *plVar7;
   code *pcVar8;
   ulong uVar9;
   long in_FS_OFFSET;
   undefined8 local_160;
   undefined8 local_158;
   StringName local_150;
   undefined7 uStack_14f;
   Object *local_148;
   long local_140[5];
   int local_118[2];
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
   Object **local_78;
   CowData<char32_t> *pCStack_70;
   int local_60[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_160 = 0;
   if (*(long*)param_2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_160, (CowData*)param_2);
   }

   plVar7 = *(long**)( this + 0x98 );
   if (plVar7 != (long*)0x0) {
      local_118[0] = 0;
      local_118[1] = 0;
      uStack_110 = 0;
      Variant::Variant((Variant*)&local_78, *(Object**)param_1);
      Variant::Variant((Variant*)local_60, (String*)&local_160);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = (Variant*)local_60;
      ( **(code**)( *plVar7 + 0x60 ) )((Variant*)local_98, plVar7, this + 0x368, &local_a8, 2, local_118);
      if (local_118[0] == 0) {
         bVar3 = Variant::operator_cast_to_bool((Variant*)local_98);
         uVar9 = CONCAT71(extraout_var, bVar3) & 0xffffffff;
         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00107b8c;
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

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x370] == (EditorExportPlugin)0x0 )) {
      local_118[0] = 0;
      local_118[1] = 0;
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
      String::parse_latin1((String*)local_118, "_get_export_option_visibility");
      local_e0 = CONCAT44(local_e0._4_4_, 0xc);
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_148);
      PropertyInfo::operator =((PropertyInfo*)&uStack_110, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      local_c0 = local_c0 & 0xffffffff00000000;
      GetTypeInfo<Ref<EditorExportPlatform>const&,void>::get_class_info((GetTypeInfo<Ref<EditorExportPlatform>const&,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 0);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 0);
      uVar4 = MethodInfo::get_compatibility_hash();
      *(undefined8*)( this + 0x378 ) = 0;
      lVar6 = *(long*)( this + 8 );
      pcVar8 = *(code**)( lVar6 + 0xd8 );
      if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar6 + 0xd0 ) ),pcVar8 == (code*)0x0) {
         local_158 = 0;
         String::parse_latin1((String*)&local_158, "EditorExportPlugin");
         StringName::StringName(&local_150, (String*)&local_158, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_148, &local_150);
         if (local_140[0] == 0) {
            lVar6 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') goto LAB_00107fd9;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            LAB_00107ff8:lVar6 = *(long*)( this + 8 );
            pcVar8 = *(code**)( lVar6 + 200 );
            if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar6 + 0xc0 ) ),pcVar8 == (code*)0x0) goto LAB_00107ec6;
            uVar5 = ( *pcVar8 )(*(undefined8*)( lVar6 + 0xa0 ), this + 0x368);
            *(undefined8*)( this + 0x378 ) = uVar5;
         }
 else {
            lVar6 = *(long*)( local_140[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') {
               LAB_00107fd9:if (CONCAT71(uStack_14f, local_150) != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            if (lVar6 == 0) goto LAB_00107ff8;
         }

         lVar6 = *(long*)( this + 8 );
      }
 else {
         uVar5 = ( *pcVar8 )(*(undefined8*)( lVar6 + 0xa0 ), this + 0x368, uVar4);
         *(undefined8*)( this + 0x378 ) = uVar5;
         lVar6 = *(long*)( this + 8 );
      }

      LAB_00107ec6:if (*(char*)( lVar6 + 0x29 ) != '\0') {
         plVar7 = (long*)operator_new(0x18, "");
         *plVar7 = (long)( this + 0x378 );
         plVar7[1] = (long)( this + 0x370 );
         plVar7[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar7;
      }

      this[0x370] = (EditorExportPlugin)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_118);
   }

   uVar9 = 1;
   if (*(long*)( this + 0x378 ) != 0) {
      local_148 = (Object*)0x0;
      if (( *(Object**)param_1 != (Object*)0x0 ) && ( local_148 = *(Object**)param_1 ),cVar2 = RefCounted::reference(),cVar2 == '\0') {
         local_148 = (Object*)0x0;
      }

      local_118[0] = 0;
      local_118[1] = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)local_118, (CowData*)&local_160);
      local_78 = &local_148;
      pCStack_70 = (CowData<char32_t>*)local_118;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( this + 0x378 ) )(*(undefined8*)( this + 0x10 ), &local_78, &local_150);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x368, *(undefined8*)( this + 0x378 ), &local_78, &local_150);
      }

      uVar9 = ( ulong )(local_150 != (StringName)0x0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_118);
      if (( ( local_148 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar1 = local_148,cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar1 + 0x140 ))(pOVar1);
      Memory::free_static(pOVar1, false);
   }

}
LAB_00107b8c:CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return uVar9;}/* EditorExportPlugin::_should_update_export_options(Ref<EditorExportPlatform> const&) const */ulong EditorExportPlugin::_should_update_export_options(EditorExportPlugin *this, Ref *param_1) {
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
   long in_FS_OFFSET;
   undefined8 local_138;
   long local_130;
   GetTypeInfo<bool,void> local_128[8];
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
   plVar8 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar8 != (long*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, *(Object**)param_1);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar8 + 0x60 ) )((Variant*)local_58, plVar8, this + 0x350, &local_80, 1, &local_f8);
      if (local_f8 == 0) {
         bVar3 = Variant::operator_cast_to_bool((Variant*)local_58);
         uVar9 = CONCAT71(extraout_var, bVar3) & 0xffffffff;
         if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010819b;
      }

      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x358] == (EditorExportPlugin)0x0 )) {
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
      String::parse_latin1((String*)&local_f8, "_should_update_export_options");
      local_c0 = CONCAT44(local_c0._4_4_, 0xc);
      GetTypeInfo<bool,void>::get_class_info(local_128);
      PropertyInfo::operator =((PropertyInfo*)&uStack_f0, (PropertyInfo*)local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_128);
      local_a0 = local_a0 & 0xffffffff00000000;
      GetTypeInfo<Ref<EditorExportPlatform>const&,void>::get_class_info((GetTypeInfo<Ref<EditorExportPlatform>const&,void>*)local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_128);
      Vector<int>::push_back(local_98, 0);
      uVar4 = MethodInfo::get_compatibility_hash();
      lVar7 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x360 ) = 0;
      pcVar5 = *(code**)( lVar7 + 0xd8 );
      if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar7 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar7 + 0xd0 ) ),pcVar5 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "EditorExportPlugin");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_128, (StringName*)&local_130);
         if (local_120[0] == 0) {
            lVar7 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') goto LAB_00108517;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_00108536:lVar7 = *(long*)( this + 8 );
            pcVar5 = *(code**)( lVar7 + 200 );
            if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar7 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar7 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_0010844f;
            uVar6 = ( *pcVar5 )(*(undefined8*)( lVar7 + 0xa0 ), this + 0x350);
            *(undefined8*)( this + 0x360 ) = uVar6;
         }
 else {
            lVar7 = *(long*)( local_120[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') {
               LAB_00108517:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar7 == 0) goto LAB_00108536;
         }

         lVar7 = *(long*)( this + 8 );
      }
 else {
         uVar6 = ( *pcVar5 )(*(undefined8*)( lVar7 + 0xa0 ), this + 0x350, uVar4);
         *(undefined8*)( this + 0x360 ) = uVar6;
         lVar7 = *(long*)( this + 8 );
      }

      LAB_0010844f:if (*(char*)( lVar7 + 0x29 ) != '\0') {
         plVar8 = (long*)operator_new(0x18, "");
         *plVar8 = (long)( this + 0x360 );
         plVar8[1] = (long)( this + 0x358 );
         plVar8[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar8;
      }

      this[0x358] = (EditorExportPlugin)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   pcVar5 = *(code**)( this + 0x360 );
   uVar9 = 0;
   if (pcVar5 != (code*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      lVar7 = *(long*)param_1;
      if (lVar7 != 0) {
         local_f8 = (int)lVar7;
         uStack_f4 = ( undefined4 )((ulong)lVar7 >> 0x20);
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            local_f8 = 0;
            uStack_f4 = 0;
         }

         pcVar5 = *(code**)( this + 0x360 );
      }

      local_58[0] = &local_f8;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar5 )(*(undefined8*)( this + 0x10 ), local_58, local_128);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x350, pcVar5, local_58, local_128);
      }

      uVar9 = ( ulong )(local_128[0] != (GetTypeInfo<bool,void>)0x0);
      if (( CONCAT44(uStack_f4, local_f8) != 0 ) && ( cVar2 = cVar2 != '\0' )) {
         pOVar1 = (Object*)CONCAT44(uStack_f4, local_f8);
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   LAB_0010819b:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar9;
}
/* EditorExportPlugin::_get_export_options(Ref<EditorExportPlatform> const&,
   List<EditorExportPlatform::ExportOption, DefaultAllocator>*) const */void EditorExportPlugin::_get_export_options(EditorExportPlugin *this, Ref *param_1, List *param_2) {
   char cVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   Object *pOVar4;
   char cVar5;
   int iVar6;
   undefined4 uVar7;
   undefined4 *puVar8;
   Variant *pVVar9;
   undefined1(*pauVar10)[16];
   undefined8 uVar11;
   long lVar12;
   long *plVar13;
   code *pcVar14;
   uint uVar15;
   int iVar16;
   long in_FS_OFFSET;
   long local_1c0;
   Array local_1a0[8];
   Object *local_198;
   long local_190;
   long local_188;
   long local_180[5];
   int local_158;
   undefined4 uStack_154;
   undefined4 local_150;
   undefined4 uStack_14c;
   undefined1 local_148[16];
   long local_138;
   undefined8 local_130;
   undefined8 local_128;
   undefined8 local_120;
   undefined8 local_118[2];
   undefined8 local_108;
   ulong local_100;
   Vector<int> local_f8[8];
   undefined8 local_f0;
   Variant *local_e0;
   int local_d8[8];
   Object **local_b8[4];
   undefined8 local_98;
   undefined1 local_90[16];
   undefined4 local_80;
   long local_78;
   undefined4 local_70;
   int local_68[6];
   char local_50;
   undefined1 local_4f;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Array::Array(local_1a0);
   local_98 = 0;
   local_158 = 0;
   uStack_154 = 0;
   local_90 = (undefined1[16])0x0;
   uVar15 = (uint)local_1a0;
   Array::set_typed(uVar15, (StringName*)0x1b, (Variant*)&local_158);
   if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_154, local_158) != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[(int)local_98] != '\0') {
      Variant::_clear_internal();
   }

   plVar13 = *(long**)( this + 0x98 );
   if (plVar13 != (long*)0x0) {
      local_158 = 0;
      uStack_154 = 0;
      local_150 = 0;
      Variant::Variant((Variant*)local_d8, *(Object**)param_1);
      local_e0 = (Variant*)local_d8;
      ( **(code**)( *plVar13 + 0x60 ) )(local_b8, plVar13, this + 800, &local_e0, 1);
      if (local_158 == 0) {
         Variant::operator_cast_to_Array((Variant*)&local_190);
         Array::Array((Array*)&local_188);
         local_98 = 0;
         local_198 = (Object*)0x0;
         local_90 = (undefined1[16])0x0;
         Array::set_typed((uint)(Array*)&local_188, (StringName*)0x1b, (Variant*)&local_198);
         if (( StringName::configured != '\0' ) && ( local_198 != (Object*)0x0 )) {
            StringName::unref();
         }

         if (Variant::needs_deinit[(int)local_98] != '\0') {
            Variant::_clear_internal();
         }

         cVar5 = Array::is_same_typed((Array*)&local_188);
         if (cVar5 == '\0') {
            Array::assign((Array*)&local_188);
         }
 else {
            Array::_ref((Array*)&local_188);
         }

         Array::~Array((Array*)&local_190);
         Array::operator =(local_1a0, (Array*)&local_188);
         Array::~Array((Array*)&local_188);
         if (Variant::needs_deinit[(int)local_b8[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_d8[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00108783;
      }

      if (Variant::needs_deinit[(int)local_b8[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_d8[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x328] == (EditorExportPlugin)0x0 )) {
      local_158 = 0;
      uStack_154 = 0;
      local_148 = (undefined1[16])0x0;
      local_150 = 0;
      uStack_14c = 0;
      local_138 = 0;
      local_130 = 0;
      local_128 = 6;
      local_120 = 1;
      local_118[0] = 0;
      local_108 = 0;
      local_100 = 0;
      local_f0 = 0;
      String::parse_latin1((String*)&local_158, "_get_export_options");
      local_120 = CONCAT44(local_120._4_4_, 0xc);
      GetTypeInfo<TypedArray<Dictionary>,void>::get_class_info((GetTypeInfo<TypedArray<Dictionary>,void>*)&local_188);
      PropertyInfo::operator =((PropertyInfo*)&local_150, (PropertyInfo*)&local_188);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
      local_100 = local_100 & 0xffffffff00000000;
      GetTypeInfo<Ref<EditorExportPlatform>const&,void>::get_class_info((GetTypeInfo<Ref<EditorExportPlatform>const&,void>*)&local_188);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_118, (PropertyInfo*)&local_188);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
      Vector<int>::push_back(local_f8, 0);
      uVar7 = MethodInfo::get_compatibility_hash();
      *(undefined8*)( this + 0x330 ) = 0;
      lVar12 = *(long*)( this + 8 );
      pcVar14 = *(code**)( lVar12 + 0xd8 );
      if (( ( pcVar14 == (code*)0x0 ) || ( *(long*)( lVar12 + 0xe0 ) == 0 ) ) && ( pcVar14 = *(code**)( lVar12 + 0xd0 ) ),pcVar14 == (code*)0x0) {
         local_198 = (Object*)0x0;
         String::parse_latin1((String*)&local_198, "EditorExportPlugin");
         StringName::StringName((StringName*)&local_190, (String*)&local_198, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_188, (StringName*)&local_190);
         if (local_180[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_180);
            local_1c0 = 0;
            if (StringName::configured != '\0') goto LAB_0010931b;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
            LAB_0010933d:lVar12 = *(long*)( this + 8 );
            pcVar14 = *(code**)( lVar12 + 200 );
            if (( ( pcVar14 == (code*)0x0 ) || ( *(long*)( lVar12 + 0xe0 ) == 0 ) ) && ( pcVar14 = *(code**)( lVar12 + 0xc0 ) ),pcVar14 == (code*)0x0) goto LAB_00109223;
            uVar11 = ( *pcVar14 )(*(undefined8*)( lVar12 + 0xa0 ), this + 800);
            *(undefined8*)( this + 0x330 ) = uVar11;
         }
 else {
            local_1c0 = *(long*)( local_180[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_180);
            if (StringName::configured != '\0') {
               LAB_0010931b:if (local_190 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
            if (local_1c0 == 0) goto LAB_0010933d;
         }

         lVar12 = *(long*)( this + 8 );
      }
 else {
         uVar11 = ( *pcVar14 )(*(undefined8*)( lVar12 + 0xa0 ), this + 800, uVar7);
         *(undefined8*)( this + 0x330 ) = uVar11;
         lVar12 = *(long*)( this + 8 );
      }

      LAB_00109223:if (*(char*)( lVar12 + 0x29 ) != '\0') {
         plVar13 = (long*)operator_new(0x18, "");
         *plVar13 = (long)( this + 0x330 );
         plVar13[1] = (long)( this + 0x328 );
         plVar13[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar13;
      }

      this[0x328] = (EditorExportPlugin)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_158);
   }

   if (*(long*)( this + 0x330 ) != 0) {
      local_198 = (Object*)0x0;
      if (( *(Object**)param_1 != (Object*)0x0 ) && ( local_198 = *(Object**)param_1 ),cVar5 = RefCounted::reference(),cVar5 == '\0') {
         local_198 = (Object*)0x0;
      }

      local_b8[0] = &local_198;
      Array::Array((Array*)&local_190);
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( this + 0x330 ) )(*(undefined8*)( this + 0x10 ), local_b8, (Array*)&local_190);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 800, *(undefined8*)( this + 0x330 ), local_b8, (Array*)&local_190);
      }

      Array::Array((Array*)&local_158);
      local_98 = 0;
      local_188 = 0;
      local_90 = (undefined1[16])0x0;
      Array::set_typed((uint)(Variant*)&local_158, (StringName*)0x1b, (Variant*)&local_188);
      if (( StringName::configured != '\0' ) && ( local_188 != 0 )) {
         StringName::unref();
      }

      if (Variant::needs_deinit[(int)local_98] != '\0') {
         Variant::_clear_internal();
      }

      cVar5 = Array::is_same_typed((Array*)&local_158);
      if (cVar5 == '\0') {
         Array::assign((Array*)&local_158);
      }
 else {
         Array::_ref((Array*)&local_158);
      }

      Array::operator =(local_1a0, (Array*)&local_158);
      Array::~Array((Array*)&local_158);
      Array::~Array((Array*)&local_190);
      if (( ( local_198 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar4 = local_198,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar4 + 0x140 ))(pOVar4);
      Memory::free_static(pOVar4, false);
   }

}
LAB_00108783:iVar16 = 0;do {
   iVar6 = Array::size();
   if (iVar6 <= iVar16) {
      Array::~Array(local_1a0);
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   Array::operator [](uVar15);
   Variant::operator_cast_to_Dictionary((Variant*)&local_190);
   Variant::Variant((Variant*)&local_98, "option");
   cVar5 = Dictionary::has((Variant*)&local_190);
   if (Variant::needs_deinit[(int)local_98] == '\0') {
      if (cVar5 != '\0') goto LAB_00108b40;
      LAB_00108d30:_err_print_error("_get_export_options", "editor/export/editor_export_plugin.cpp", 0x116, "Condition \"!option.has(\"option\")\" is true. Continuing.", "Missing required element \'option\'", 0, 0);
   }
 else {
      Variant::_clear_internal();
      if (cVar5 == '\0') goto LAB_00108d30;
      LAB_00108b40:Variant::Variant((Variant*)&local_98, "default_value");
      cVar5 = Dictionary::has((Variant*)&local_190);
      if (Variant::needs_deinit[(int)local_98] != '\0') {
         Variant::_clear_internal();
      }

      if (cVar5 == '\0') {
         _err_print_error("_get_export_options", "editor/export/editor_export_plugin.cpp", 0x117, "Condition \"!option.has(\"default_value\")\" is true. Continuing.", "Missing required element \'default_value\'", 0, 0);
      }
 else {
         Variant::Variant((Variant*)&local_98, "option");
         Dictionary::operator []((Variant*)&local_190);
         Variant::operator_cast_to_Dictionary((Variant*)&local_188);
         PropertyInfo::from_dict((Dictionary*)&local_158);
         Dictionary::~Dictionary((Dictionary*)&local_188);
         if (Variant::needs_deinit[(int)local_98] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)&local_98, "default_value");
         pVVar9 = (Variant*)Dictionary::operator []((Variant*)&local_190);
         Variant::Variant((Variant*)local_d8, pVVar9);
         if (Variant::needs_deinit[(int)local_98] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_b8, "update_visibility");
         cVar5 = Dictionary::has((Variant*)&local_190);
         if (cVar5 == '\0') {
            LAB_00108790:cVar1 = Variant::needs_deinit[(int)local_b8[0]];
         }
 else {
            Variant::Variant((Variant*)&local_98, "update_visibility");
            pVVar9 = (Variant*)Dictionary::operator []((Variant*)&local_190);
            cVar5 = Variant::operator_cast_to_bool(pVVar9);
            if (Variant::needs_deinit[(int)local_98] == '\0') goto LAB_00108790;
            Variant::_clear_internal();
            cVar1 = Variant::needs_deinit[(int)local_b8[0]];
         }

         if (cVar1 != '\0') {
            Variant::_clear_internal();
         }

         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_90._8_8_;
         local_90 = auVar3 << 0x40;
         local_98 = CONCAT44(local_98._4_4_, local_158);
         if (CONCAT44(uStack_14c, local_150) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)local_90, (CowData*)&local_150);
         }

         StringName::StringName((StringName*)( local_90 + 8 ), (StringName*)local_148);
         local_78 = 0;
         local_80 = local_148._8_4_;
         if (local_138 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)&local_138);
         }

         local_70 = (undefined4)local_130;
         Variant::Variant((Variant*)local_68, (Variant*)local_d8);
         local_4f = 0;
         local_50 = cVar5;
         if (*(long*)param_2 == 0) {
            pauVar10 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])param_2 = pauVar10;
            *(undefined4*)pauVar10[1] = 0;
            *pauVar10 = (undefined1[16])0x0;
         }

         puVar8 = (undefined4*)operator_new(0x68, DefaultAllocator::alloc);
         *(undefined8*)( puVar8 + 8 ) = 0;
         *(undefined1(*) [16])( puVar8 + 2 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( puVar8 + 0xe ) = (undefined1[16])0x0;
         *puVar8 = 0;
         puVar8[6] = 0;
         puVar8[10] = 6;
         puVar8[0xc] = 0;
         *(undefined2*)( puVar8 + 0x12 ) = 0;
         *(undefined8*)( puVar8 + 0x18 ) = 0;
         *(undefined1(*) [16])( puVar8 + 0x14 ) = (undefined1[16])0x0;
         *puVar8 = (int)local_98;
         if (local_90._0_8_ != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar8 + 2 ), (CowData*)local_90);
         }

         StringName::operator =((StringName*)( puVar8 + 4 ), (StringName*)( local_90 + 8 ));
         puVar8[6] = local_80;
         if (*(long*)( puVar8 + 8 ) != local_78) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar8 + 8 ), (CowData*)&local_78);
         }

         puVar8[10] = local_70;
         Variant::operator =((Variant*)( puVar8 + 0xc ), (Variant*)local_68);
         *(char*)( puVar8 + 0x12 ) = local_50;
         *(undefined1*)( (long)puVar8 + 0x49 ) = local_4f;
         uVar11 = *(undefined8*)( *(long*)param_2 + 8 );
         *(long*)( puVar8 + 0x18 ) = *(long*)param_2;
         plVar13 = *(long**)param_2;
         *(undefined8*)( puVar8 + 0x14 ) = 0;
         *(undefined8*)( puVar8 + 0x16 ) = uVar11;
         if (plVar13[1] != 0) {
            *(undefined4**)( plVar13[1] + 0x50 ) = puVar8;
         }

         plVar13[1] = (long)puVar8;
         if (*plVar13 == 0) {
            *plVar13 = (long)puVar8;
         }

         *(int*)( plVar13 + 2 ) = (int)plVar13[2] + 1;
         if (Variant::needs_deinit[local_68[0]] != '\0') {
            Variant::_clear_internal();
         }

         lVar12 = local_78;
         if (local_78 != 0) {
            LOCK();
            plVar13 = (long*)( local_78 + -0x10 );
            *plVar13 = *plVar13 + -1;
            UNLOCK();
            if (*plVar13 == 0) {
               local_78 = 0;
               Memory::free_static((void*)( lVar12 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_90._8_8_ != 0 )) {
            StringName::unref();
         }

         uVar11 = local_90._0_8_;
         if (local_90._0_8_ != 0) {
            LOCK();
            plVar13 = (long*)( local_90._0_8_ + -0x10 );
            *plVar13 = *plVar13 + -1;
            UNLOCK();
            if (*plVar13 == 0) {
               auVar2._8_8_ = 0;
               auVar2._0_8_ = local_90._8_8_;
               local_90 = auVar2 << 0x40;
               Memory::free_static((void*)( uVar11 + -0x10 ), false);
            }

         }

         if (Variant::needs_deinit[local_d8[0]] != '\0') {
            Variant::_clear_internal();
         }

         lVar12 = local_138;
         if (local_138 != 0) {
            LOCK();
            plVar13 = (long*)( local_138 + -0x10 );
            *plVar13 = *plVar13 + -1;
            UNLOCK();
            if (*plVar13 == 0) {
               local_138 = 0;
               Memory::free_static((void*)( lVar12 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_148._0_8_ != 0 )) {
            StringName::unref();
         }

         if (CONCAT44(uStack_14c, local_150) != 0) {
            LOCK();
            plVar13 = (long*)( CONCAT44(uStack_14c, local_150) + -0x10 );
            *plVar13 = *plVar13 + -1;
            UNLOCK();
            if (*plVar13 == 0) {
               lVar12 = CONCAT44(uStack_14c, local_150);
               local_150 = 0;
               uStack_14c = 0;
               Memory::free_static((void*)( lVar12 + -0x10 ), false);
            }

         }

      }

   }

   iVar16 = iVar16 + 1;
   Dictionary::~Dictionary((Dictionary*)&local_190);
}
 while ( true );}/* EditorExportPlugin::_get_export_features(Ref<EditorExportPlatform> const&, bool) const */Ref *EditorExportPlugin::_get_export_features(Ref *param_1, bool param_2) {
   code *pcVar1;
   Object *pOVar2;
   char cVar3;
   code *pcVar4;
   undefined8 uVar5;
   long lVar6;
   long *plVar7;
   bool in_CL;
   long *in_RDX;
   long lVar8;
   undefined7 in_register_00000031;
   long in_FS_OFFSET;
   long local_170;
   undefined8 local_158;
   Object *local_150;
   int local_148[2];
   undefined4 uStack_140;
   undefined4 uStack_13c;
   undefined8 local_118;
   long local_110;
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
   Object **local_78;
   undefined8 *puStack_70;
   int local_60[8];
   long local_40;
   lVar8 = CONCAT71(in_register_00000031, param_2);
   plVar7 = *(long**)( lVar8 + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( param_1 + 8 ) = 0;
   if (plVar7 != (long*)0x0) {
      local_148[0] = 0;
      local_148[1] = 0;
      uStack_140 = 0;
      Variant::Variant((Variant*)&local_78, (Object*)*in_RDX);
      Variant::Variant((Variant*)local_60, in_CL);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = (Variant*)local_60;
      ( **(code**)( *plVar7 + 0x60 ) )(local_98, plVar7, lVar8 + 0x308, &local_a8, 2, local_148);
      if (local_148[0] == 0) {
         Variant::operator_cast_to_Vector((Variant*)&local_118);
         if (*(long*)( param_1 + 8 ) != local_110) {
            CowData<String>::_unref((CowData<String>*)( param_1 + 8 ));
            lVar8 = local_110;
            local_110 = 0;
            *(long*)( param_1 + 8 ) = lVar8;
         }

         CowData<String>::_unref((CowData<String>*)&local_110);
         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00109530;
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

   if (( *(long*)( lVar8 + 8 ) != 0 ) && ( *(char*)( lVar8 + 0x310 ) == '\0' )) {
      local_108 = (undefined1[16])0x0;
      local_118 = 0;
      local_110 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 6;
      local_e0 = 1;
      local_d8[0] = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b0 = 0;
      String::parse_latin1((String*)&local_118, "_get_export_features");
      local_e0 = CONCAT44(local_e0._4_4_, 0xc);
      GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void>*)local_148);
      PropertyInfo::operator =((PropertyInfo*)&local_110, (PropertyInfo*)local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_148);
      local_c0 = local_c0 & 0xffffffff00000000;
      GetTypeInfo<Ref<EditorExportPlatform>const&,void>::get_class_info((GetTypeInfo<Ref<EditorExportPlatform>const&,void>*)local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_148);
      Vector<int>::push_back(local_b8, 0);
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_148);
      Vector<int>::push_back(local_b8, 0);
      MethodInfo::get_compatibility_hash();
      *(undefined8*)( lVar8 + 0x318 ) = 0;
      lVar6 = *(long*)( lVar8 + 8 );
      pcVar4 = *(code**)( lVar6 + 0xd8 );
      if (( ( pcVar4 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar4 = *(code**)( lVar6 + 0xd0 ) ),pcVar4 == (code*)0x0) {
         local_158 = 0;
         String::parse_latin1((String*)&local_158, "EditorExportPlugin");
         StringName::StringName((StringName*)&local_150, (String*)&local_158, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_148, (StringName*)&local_150);
         if (CONCAT44(uStack_13c, uStack_140) == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&uStack_140);
            local_170 = 0;
            if (StringName::configured != '\0') goto LAB_00109a41;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
         }
 else {
            local_170 = *(long*)( CONCAT44(uStack_13c, uStack_140) + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&uStack_140);
            if (StringName::configured != '\0') {
               LAB_00109a41:if (local_150 != (Object*)0x0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            if (local_170 != 0) {
               lVar6 = *(long*)( lVar8 + 8 );
               goto LAB_00109913;
            }

         }

         lVar6 = *(long*)( lVar8 + 8 );
         pcVar4 = *(code**)( lVar6 + 200 );
         if (( ( pcVar4 != (code*)0x0 ) && ( *(long*)( lVar6 + 0xe0 ) != 0 ) ) || ( pcVar4 = *(code**)( lVar6 + 0xc0 ) ),pcVar4 != (code*)0x0) {
            uVar5 = ( *pcVar4 )(*(undefined8*)( lVar6 + 0xa0 ), lVar8 + 0x308);
            *(undefined8*)( lVar8 + 0x318 ) = uVar5;
            lVar6 = *(long*)( lVar8 + 8 );
         }

      }
 else {
         uVar5 = ( *pcVar4 )(*(undefined8*)( lVar6 + 0xa0 ), lVar8 + 0x308);
         *(undefined8*)( lVar8 + 0x318 ) = uVar5;
         lVar6 = *(long*)( lVar8 + 8 );
      }

      LAB_00109913:if (*(char*)( lVar6 + 0x29 ) != '\0') {
         plVar7 = (long*)operator_new(0x18, "");
         *plVar7 = lVar8 + 0x318;
         plVar7[1] = lVar8 + 0x310;
         plVar7[2] = *(long*)( lVar8 + 0x168 );
         *(long**)( lVar8 + 0x168 ) = plVar7;
      }

      *(undefined1*)( lVar8 + 0x310 ) = 1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   }

   pcVar4 = *(code**)( lVar8 + 0x318 );
   if (pcVar4 == (code*)0x0) goto LAB_00109530;
   local_150 = (Object*)0x0;
   if ((Object*)*in_RDX != (Object*)0x0) {
      local_150 = (Object*)*in_RDX;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
         local_150 = (Object*)0x0;
      }

      pcVar4 = *(code**)( lVar8 + 0x318 );
   }

   puStack_70 = &local_158;
   local_78 = &local_150;
   local_158 = CONCAT71(local_158._1_7_, in_CL);
   uStack_140 = 0;
   uStack_13c = 0;
   pcVar1 = *(code**)( *(long*)( lVar8 + 8 ) + 0xe0 );
   if (pcVar1 == (code*)0x0) {
      ( *pcVar4 )(*(undefined8*)( lVar8 + 0x10 ), &local_78, local_148);
      lVar8 = CONCAT44(uStack_13c, uStack_140);
      if (lVar8 != 0) goto LAB_00109601;
      LAB_00109766:local_110 = 0;
   }
 else {
      ( *pcVar1 )(*(undefined8*)( lVar8 + 0x10 ), lVar8 + 0x308, pcVar4, &local_78, local_148);
      lVar8 = CONCAT44(uStack_13c, uStack_140);
      if (lVar8 == 0) goto LAB_00109766;
      LAB_00109601:local_110 = 0;
      CowData<String>::_ref((CowData<String>*)&local_110, (CowData*)&uStack_140);
      lVar8 = local_110;
   }

   if (*(long*)( param_1 + 8 ) != lVar8) {
      CowData<String>::_unref((CowData<String>*)( param_1 + 8 ));
      *(long*)( param_1 + 8 ) = lVar8;
      local_110 = 0;
   }

   CowData<String>::_unref((CowData<String>*)&local_110);
   CowData<String>::_unref((CowData<String>*)&uStack_140);
   if (( ( local_150 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),pOVar2 = local_150,cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
   Memory::free_static(pOVar2, false);
}
LAB_00109530:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return param_1;}/* EditorExportPlugin::get_android_manifest_element_contents(Ref<EditorExportPlatform> const&, bool)
   const */Ref *EditorExportPlugin::get_android_manifest_element_contents(Ref *param_1, bool param_2) {
   code *pcVar1;
   Object *pOVar2;
   char cVar3;
   undefined4 uVar4;
   code *pcVar5;
   undefined8 uVar6;
   long lVar7;
   long *plVar8;
   bool in_CL;
   long *in_RDX;
   undefined7 in_register_00000031;
   long lVar9;
   long in_FS_OFFSET;
   undefined8 local_158;
   Object *local_150;
   long local_148;
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
   Object **local_78;
   undefined8 *puStack_70;
   int local_60[8];
   long local_40;
   lVar9 = CONCAT71(in_register_00000031, param_2);
   plVar8 = *(long**)( lVar9 + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)param_1 = 0;
   if (plVar8 != (long*)0x0) {
      local_118 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      Variant::Variant((Variant*)&local_78, (Object*)*in_RDX);
      Variant::Variant((Variant*)local_60, in_CL);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = (Variant*)local_60;
      ( **(code**)( *plVar8 + 0x60 ) )(local_98, plVar8, lVar9 + 0x440, &local_a8, 2, &local_118);
      if (local_118 == 0) {
         Variant::operator_cast_to_String((Variant*)&local_148);
         if (*(long*)param_1 != local_148) {
            CowData<char32_t>::_unref((CowData<char32_t>*)param_1);
            lVar9 = local_148;
            local_148 = 0;
            *(long*)param_1 = lVar9;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00109c8d;
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

   if (( *(long*)( lVar9 + 8 ) != 0 ) && ( *(char*)( lVar9 + 0x448 ) == '\0' )) {
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
      String::parse_latin1((String*)&local_118, "_get_android_manifest_element_contents");
      local_e0 = CONCAT44(local_e0._4_4_, 0xc);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_148);
      PropertyInfo::operator =((PropertyInfo*)&uStack_110, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      local_c0 = local_c0 & 0xffffffff00000000;
      GetTypeInfo<Ref<EditorExportPlatform>const&,void>::get_class_info((GetTypeInfo<Ref<EditorExportPlatform>const&,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 0);
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 0);
      uVar4 = MethodInfo::get_compatibility_hash();
      *(undefined8*)( lVar9 + 0x450 ) = 0;
      lVar7 = *(long*)( lVar9 + 8 );
      pcVar5 = *(code**)( lVar7 + 0xd8 );
      if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar7 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar7 + 0xd0 ) ),pcVar5 == (code*)0x0) {
         local_158 = 0;
         String::parse_latin1((String*)&local_158, "EditorExportPlugin");
         StringName::StringName((StringName*)&local_150, (String*)&local_158, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_148, (StringName*)&local_150);
         if (local_140[0] == 0) {
            lVar7 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') goto LAB_0010a125;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            LAB_0010a146:lVar7 = *(long*)( lVar9 + 8 );
            pcVar5 = *(code**)( lVar7 + 200 );
            if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar7 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar7 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_0010a027;
            uVar6 = ( *pcVar5 )(*(undefined8*)( lVar7 + 0xa0 ), lVar9 + 0x440);
            *(undefined8*)( lVar9 + 0x450 ) = uVar6;
         }
 else {
            lVar7 = *(long*)( local_140[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') {
               LAB_0010a125:if (local_150 != (Object*)0x0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            if (lVar7 == 0) goto LAB_0010a146;
         }

         lVar7 = *(long*)( lVar9 + 8 );
      }
 else {
         uVar6 = ( *pcVar5 )(*(undefined8*)( lVar7 + 0xa0 ), lVar9 + 0x440, uVar4);
         *(undefined8*)( lVar9 + 0x450 ) = uVar6;
         lVar7 = *(long*)( lVar9 + 8 );
      }

      LAB_0010a027:if (*(char*)( lVar7 + 0x29 ) != '\0') {
         plVar8 = (long*)operator_new(0x18, "");
         *plVar8 = lVar9 + 0x450;
         plVar8[1] = lVar9 + 0x448;
         plVar8[2] = *(long*)( lVar9 + 0x168 );
         *(long**)( lVar9 + 0x168 ) = plVar8;
      }

      *(undefined1*)( lVar9 + 0x448 ) = 1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   }

   pcVar5 = *(code**)( lVar9 + 0x450 );
   if (pcVar5 != (code*)0x0) {
      local_150 = (Object*)0x0;
      if ((Object*)*in_RDX != (Object*)0x0) {
         local_150 = (Object*)*in_RDX;
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            local_150 = (Object*)0x0;
         }

         pcVar5 = *(code**)( lVar9 + 0x450 );
      }

      puStack_70 = &local_158;
      local_78 = &local_150;
      local_158 = CONCAT71(local_158._1_7_, in_CL);
      local_148 = 0;
      pcVar1 = *(code**)( *(long*)( lVar9 + 8 ) + 0xe0 );
      if (pcVar1 == (code*)0x0) {
         ( *pcVar5 )(*(undefined8*)( lVar9 + 0x10 ), &local_78, (CowData<char32_t>*)&local_148);
      }
 else {
         ( *pcVar1 )(*(undefined8*)( lVar9 + 0x10 ), lVar9 + 0x440, pcVar5, &local_78, (CowData<char32_t>*)&local_148);
      }

      local_118 = 0;
      uStack_114 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_148);
      lVar9 = CONCAT44(uStack_114, local_118);
      if (*(long*)param_1 != lVar9) {
         CowData<char32_t>::_unref((CowData<char32_t>*)param_1);
         *(long*)param_1 = lVar9;
         local_118 = 0;
         uStack_114 = 0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
      if (( ( local_150 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),pOVar2 = local_150,cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
      Memory::free_static(pOVar2, false);
   }

}
LAB_00109c8d:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return param_1;}/* EditorExportPlugin::get_android_manifest_application_element_contents(Ref<EditorExportPlatform>
   const&, bool) const */Ref *EditorExportPlugin::get_android_manifest_application_element_contents(Ref *param_1, bool param_2) {
   code *pcVar1;
   Object *pOVar2;
   char cVar3;
   undefined4 uVar4;
   code *pcVar5;
   undefined8 uVar6;
   long lVar7;
   long *plVar8;
   bool in_CL;
   long *in_RDX;
   undefined7 in_register_00000031;
   long lVar9;
   long in_FS_OFFSET;
   undefined8 local_158;
   Object *local_150;
   long local_148;
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
   Object **local_78;
   undefined8 *puStack_70;
   int local_60[8];
   long local_40;
   lVar9 = CONCAT71(in_register_00000031, param_2);
   plVar8 = *(long**)( lVar9 + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)param_1 = 0;
   if (plVar8 != (long*)0x0) {
      local_118 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      Variant::Variant((Variant*)&local_78, (Object*)*in_RDX);
      Variant::Variant((Variant*)local_60, in_CL);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = (Variant*)local_60;
      ( **(code**)( *plVar8 + 0x60 ) )(local_98, plVar8, lVar9 + 0x428, &local_a8, 2, &local_118);
      if (local_118 == 0) {
         Variant::operator_cast_to_String((Variant*)&local_148);
         if (*(long*)param_1 != local_148) {
            CowData<char32_t>::_unref((CowData<char32_t>*)param_1);
            lVar9 = local_148;
            local_148 = 0;
            *(long*)param_1 = lVar9;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010a32d;
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

   if (( *(long*)( lVar9 + 8 ) != 0 ) && ( *(char*)( lVar9 + 0x430 ) == '\0' )) {
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
      String::parse_latin1((String*)&local_118, "_get_android_manifest_application_element_contents");
      local_e0 = CONCAT44(local_e0._4_4_, 0xc);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_148);
      PropertyInfo::operator =((PropertyInfo*)&uStack_110, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      local_c0 = local_c0 & 0xffffffff00000000;
      GetTypeInfo<Ref<EditorExportPlatform>const&,void>::get_class_info((GetTypeInfo<Ref<EditorExportPlatform>const&,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 0);
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 0);
      uVar4 = MethodInfo::get_compatibility_hash();
      *(undefined8*)( lVar9 + 0x438 ) = 0;
      lVar7 = *(long*)( lVar9 + 8 );
      pcVar5 = *(code**)( lVar7 + 0xd8 );
      if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar7 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar7 + 0xd0 ) ),pcVar5 == (code*)0x0) {
         local_158 = 0;
         String::parse_latin1((String*)&local_158, "EditorExportPlugin");
         StringName::StringName((StringName*)&local_150, (String*)&local_158, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_148, (StringName*)&local_150);
         if (local_140[0] == 0) {
            lVar7 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') goto LAB_0010a7c5;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            LAB_0010a7e6:lVar7 = *(long*)( lVar9 + 8 );
            pcVar5 = *(code**)( lVar7 + 200 );
            if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar7 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar7 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_0010a6c7;
            uVar6 = ( *pcVar5 )(*(undefined8*)( lVar7 + 0xa0 ), lVar9 + 0x428);
            *(undefined8*)( lVar9 + 0x438 ) = uVar6;
         }
 else {
            lVar7 = *(long*)( local_140[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') {
               LAB_0010a7c5:if (local_150 != (Object*)0x0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            if (lVar7 == 0) goto LAB_0010a7e6;
         }

         lVar7 = *(long*)( lVar9 + 8 );
      }
 else {
         uVar6 = ( *pcVar5 )(*(undefined8*)( lVar7 + 0xa0 ), lVar9 + 0x428, uVar4);
         *(undefined8*)( lVar9 + 0x438 ) = uVar6;
         lVar7 = *(long*)( lVar9 + 8 );
      }

      LAB_0010a6c7:if (*(char*)( lVar7 + 0x29 ) != '\0') {
         plVar8 = (long*)operator_new(0x18, "");
         *plVar8 = lVar9 + 0x438;
         plVar8[1] = lVar9 + 0x430;
         plVar8[2] = *(long*)( lVar9 + 0x168 );
         *(long**)( lVar9 + 0x168 ) = plVar8;
      }

      *(undefined1*)( lVar9 + 0x430 ) = 1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   }

   pcVar5 = *(code**)( lVar9 + 0x438 );
   if (pcVar5 != (code*)0x0) {
      local_150 = (Object*)0x0;
      if ((Object*)*in_RDX != (Object*)0x0) {
         local_150 = (Object*)*in_RDX;
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            local_150 = (Object*)0x0;
         }

         pcVar5 = *(code**)( lVar9 + 0x438 );
      }

      puStack_70 = &local_158;
      local_78 = &local_150;
      local_158 = CONCAT71(local_158._1_7_, in_CL);
      local_148 = 0;
      pcVar1 = *(code**)( *(long*)( lVar9 + 8 ) + 0xe0 );
      if (pcVar1 == (code*)0x0) {
         ( *pcVar5 )(*(undefined8*)( lVar9 + 0x10 ), &local_78, (CowData<char32_t>*)&local_148);
      }
 else {
         ( *pcVar1 )(*(undefined8*)( lVar9 + 0x10 ), lVar9 + 0x428, pcVar5, &local_78, (CowData<char32_t>*)&local_148);
      }

      local_118 = 0;
      uStack_114 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_148);
      lVar9 = CONCAT44(uStack_114, local_118);
      if (*(long*)param_1 != lVar9) {
         CowData<char32_t>::_unref((CowData<char32_t>*)param_1);
         *(long*)param_1 = lVar9;
         local_118 = 0;
         uStack_114 = 0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
      if (( ( local_150 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),pOVar2 = local_150,cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
      Memory::free_static(pOVar2, false);
   }

}
LAB_0010a32d:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return param_1;}/* EditorExportPlugin::get_android_manifest_activity_element_contents(Ref<EditorExportPlatform>
   const&, bool) const */Ref *EditorExportPlugin::get_android_manifest_activity_element_contents(Ref *param_1, bool param_2) {
   code *pcVar1;
   Object *pOVar2;
   char cVar3;
   undefined4 uVar4;
   code *pcVar5;
   undefined8 uVar6;
   long lVar7;
   long *plVar8;
   bool in_CL;
   long *in_RDX;
   undefined7 in_register_00000031;
   long lVar9;
   long in_FS_OFFSET;
   undefined8 local_158;
   Object *local_150;
   long local_148;
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
   Object **local_78;
   undefined8 *puStack_70;
   int local_60[8];
   long local_40;
   lVar9 = CONCAT71(in_register_00000031, param_2);
   plVar8 = *(long**)( lVar9 + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)param_1 = 0;
   if (plVar8 != (long*)0x0) {
      local_118 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      Variant::Variant((Variant*)&local_78, (Object*)*in_RDX);
      Variant::Variant((Variant*)local_60, in_CL);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = (Variant*)local_60;
      ( **(code**)( *plVar8 + 0x60 ) )(local_98, plVar8, lVar9 + 0x410, &local_a8, 2, &local_118);
      if (local_118 == 0) {
         Variant::operator_cast_to_String((Variant*)&local_148);
         if (*(long*)param_1 != local_148) {
            CowData<char32_t>::_unref((CowData<char32_t>*)param_1);
            lVar9 = local_148;
            local_148 = 0;
            *(long*)param_1 = lVar9;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010a9cd;
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

   if (( *(long*)( lVar9 + 8 ) != 0 ) && ( *(char*)( lVar9 + 0x418 ) == '\0' )) {
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
      String::parse_latin1((String*)&local_118, "_get_android_manifest_activity_element_contents");
      local_e0 = CONCAT44(local_e0._4_4_, 0xc);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_148);
      PropertyInfo::operator =((PropertyInfo*)&uStack_110, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      local_c0 = local_c0 & 0xffffffff00000000;
      GetTypeInfo<Ref<EditorExportPlatform>const&,void>::get_class_info((GetTypeInfo<Ref<EditorExportPlatform>const&,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 0);
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 0);
      uVar4 = MethodInfo::get_compatibility_hash();
      *(undefined8*)( lVar9 + 0x420 ) = 0;
      lVar7 = *(long*)( lVar9 + 8 );
      pcVar5 = *(code**)( lVar7 + 0xd8 );
      if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar7 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar7 + 0xd0 ) ),pcVar5 == (code*)0x0) {
         local_158 = 0;
         String::parse_latin1((String*)&local_158, "EditorExportPlugin");
         StringName::StringName((StringName*)&local_150, (String*)&local_158, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_148, (StringName*)&local_150);
         if (local_140[0] == 0) {
            lVar7 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') goto LAB_0010ae65;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            LAB_0010ae86:lVar7 = *(long*)( lVar9 + 8 );
            pcVar5 = *(code**)( lVar7 + 200 );
            if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar7 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar7 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_0010ad67;
            uVar6 = ( *pcVar5 )(*(undefined8*)( lVar7 + 0xa0 ), lVar9 + 0x410);
            *(undefined8*)( lVar9 + 0x420 ) = uVar6;
         }
 else {
            lVar7 = *(long*)( local_140[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') {
               LAB_0010ae65:if (local_150 != (Object*)0x0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            if (lVar7 == 0) goto LAB_0010ae86;
         }

         lVar7 = *(long*)( lVar9 + 8 );
      }
 else {
         uVar6 = ( *pcVar5 )(*(undefined8*)( lVar7 + 0xa0 ), lVar9 + 0x410, uVar4);
         *(undefined8*)( lVar9 + 0x420 ) = uVar6;
         lVar7 = *(long*)( lVar9 + 8 );
      }

      LAB_0010ad67:if (*(char*)( lVar7 + 0x29 ) != '\0') {
         plVar8 = (long*)operator_new(0x18, "");
         *plVar8 = lVar9 + 0x420;
         plVar8[1] = lVar9 + 0x418;
         plVar8[2] = *(long*)( lVar9 + 0x168 );
         *(long**)( lVar9 + 0x168 ) = plVar8;
      }

      *(undefined1*)( lVar9 + 0x418 ) = 1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   }

   pcVar5 = *(code**)( lVar9 + 0x420 );
   if (pcVar5 != (code*)0x0) {
      local_150 = (Object*)0x0;
      if ((Object*)*in_RDX != (Object*)0x0) {
         local_150 = (Object*)*in_RDX;
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            local_150 = (Object*)0x0;
         }

         pcVar5 = *(code**)( lVar9 + 0x420 );
      }

      puStack_70 = &local_158;
      local_78 = &local_150;
      local_158 = CONCAT71(local_158._1_7_, in_CL);
      local_148 = 0;
      pcVar1 = *(code**)( *(long*)( lVar9 + 8 ) + 0xe0 );
      if (pcVar1 == (code*)0x0) {
         ( *pcVar5 )(*(undefined8*)( lVar9 + 0x10 ), &local_78, (CowData<char32_t>*)&local_148);
      }
 else {
         ( *pcVar1 )(*(undefined8*)( lVar9 + 0x10 ), lVar9 + 0x410, pcVar5, &local_78, (CowData<char32_t>*)&local_148);
      }

      local_118 = 0;
      uStack_114 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_148);
      lVar9 = CONCAT44(uStack_114, local_118);
      if (*(long*)param_1 != lVar9) {
         CowData<char32_t>::_unref((CowData<char32_t>*)param_1);
         *(long*)param_1 = lVar9;
         local_118 = 0;
         uStack_114 = 0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
      if (( ( local_150 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),pOVar2 = local_150,cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
      Memory::free_static(pOVar2, false);
   }

}
LAB_0010a9cd:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return param_1;}/* EditorExportPlugin::get_android_libraries(Ref<EditorExportPlatform> const&, bool) const */Ref *EditorExportPlugin::get_android_libraries(Ref *param_1, bool param_2) {
   code *pcVar1;
   Object *pOVar2;
   char cVar3;
   code *pcVar4;
   undefined8 uVar5;
   long lVar6;
   long *plVar7;
   bool in_CL;
   long *in_RDX;
   long lVar8;
   undefined7 in_register_00000031;
   long in_FS_OFFSET;
   long local_170;
   undefined8 local_158;
   Object *local_150;
   int local_148[2];
   undefined4 uStack_140;
   undefined4 uStack_13c;
   undefined8 local_118;
   long local_110;
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
   Object **local_78;
   undefined8 *puStack_70;
   int local_60[8];
   long local_40;
   lVar8 = CONCAT71(in_register_00000031, param_2);
   plVar7 = *(long**)( lVar8 + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( param_1 + 8 ) = 0;
   if (plVar7 != (long*)0x0) {
      local_148[0] = 0;
      local_148[1] = 0;
      uStack_140 = 0;
      Variant::Variant((Variant*)&local_78, (Object*)*in_RDX);
      Variant::Variant((Variant*)local_60, in_CL);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = (Variant*)local_60;
      ( **(code**)( *plVar7 + 0x60 ) )(local_98, plVar7, lVar8 + 0x3f8, &local_a8, 2, local_148);
      if (local_148[0] == 0) {
         Variant::operator_cast_to_Vector((Variant*)&local_118);
         if (*(long*)( param_1 + 8 ) != local_110) {
            CowData<String>::_unref((CowData<String>*)( param_1 + 8 ));
            lVar8 = local_110;
            local_110 = 0;
            *(long*)( param_1 + 8 ) = lVar8;
         }

         CowData<String>::_unref((CowData<String>*)&local_110);
         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010b070;
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

   if (( *(long*)( lVar8 + 8 ) != 0 ) && ( *(char*)( lVar8 + 0x400 ) == '\0' )) {
      local_108 = (undefined1[16])0x0;
      local_118 = 0;
      local_110 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 6;
      local_e0 = 1;
      local_d8[0] = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b0 = 0;
      String::parse_latin1((String*)&local_118, "_get_android_libraries");
      local_e0 = CONCAT44(local_e0._4_4_, 0xc);
      GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void>*)local_148);
      PropertyInfo::operator =((PropertyInfo*)&local_110, (PropertyInfo*)local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_148);
      local_c0 = local_c0 & 0xffffffff00000000;
      GetTypeInfo<Ref<EditorExportPlatform>const&,void>::get_class_info((GetTypeInfo<Ref<EditorExportPlatform>const&,void>*)local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_148);
      Vector<int>::push_back(local_b8, 0);
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_148);
      Vector<int>::push_back(local_b8, 0);
      MethodInfo::get_compatibility_hash();
      *(undefined8*)( lVar8 + 0x408 ) = 0;
      lVar6 = *(long*)( lVar8 + 8 );
      pcVar4 = *(code**)( lVar6 + 0xd8 );
      if (( ( pcVar4 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar4 = *(code**)( lVar6 + 0xd0 ) ),pcVar4 == (code*)0x0) {
         local_158 = 0;
         String::parse_latin1((String*)&local_158, "EditorExportPlugin");
         StringName::StringName((StringName*)&local_150, (String*)&local_158, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_148, (StringName*)&local_150);
         if (CONCAT44(uStack_13c, uStack_140) == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&uStack_140);
            local_170 = 0;
            if (StringName::configured != '\0') goto LAB_0010b581;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
         }
 else {
            local_170 = *(long*)( CONCAT44(uStack_13c, uStack_140) + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&uStack_140);
            if (StringName::configured != '\0') {
               LAB_0010b581:if (local_150 != (Object*)0x0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            if (local_170 != 0) {
               lVar6 = *(long*)( lVar8 + 8 );
               goto LAB_0010b453;
            }

         }

         lVar6 = *(long*)( lVar8 + 8 );
         pcVar4 = *(code**)( lVar6 + 200 );
         if (( ( pcVar4 != (code*)0x0 ) && ( *(long*)( lVar6 + 0xe0 ) != 0 ) ) || ( pcVar4 = *(code**)( lVar6 + 0xc0 ) ),pcVar4 != (code*)0x0) {
            uVar5 = ( *pcVar4 )(*(undefined8*)( lVar6 + 0xa0 ), lVar8 + 0x3f8);
            *(undefined8*)( lVar8 + 0x408 ) = uVar5;
            lVar6 = *(long*)( lVar8 + 8 );
         }

      }
 else {
         uVar5 = ( *pcVar4 )(*(undefined8*)( lVar6 + 0xa0 ), lVar8 + 0x3f8);
         *(undefined8*)( lVar8 + 0x408 ) = uVar5;
         lVar6 = *(long*)( lVar8 + 8 );
      }

      LAB_0010b453:if (*(char*)( lVar6 + 0x29 ) != '\0') {
         plVar7 = (long*)operator_new(0x18, "");
         *plVar7 = lVar8 + 0x408;
         plVar7[1] = lVar8 + 0x400;
         plVar7[2] = *(long*)( lVar8 + 0x168 );
         *(long**)( lVar8 + 0x168 ) = plVar7;
      }

      *(undefined1*)( lVar8 + 0x400 ) = 1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   }

   pcVar4 = *(code**)( lVar8 + 0x408 );
   if (pcVar4 == (code*)0x0) goto LAB_0010b070;
   local_150 = (Object*)0x0;
   if ((Object*)*in_RDX != (Object*)0x0) {
      local_150 = (Object*)*in_RDX;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
         local_150 = (Object*)0x0;
      }

      pcVar4 = *(code**)( lVar8 + 0x408 );
   }

   puStack_70 = &local_158;
   local_78 = &local_150;
   local_158 = CONCAT71(local_158._1_7_, in_CL);
   uStack_140 = 0;
   uStack_13c = 0;
   pcVar1 = *(code**)( *(long*)( lVar8 + 8 ) + 0xe0 );
   if (pcVar1 == (code*)0x0) {
      ( *pcVar4 )(*(undefined8*)( lVar8 + 0x10 ), &local_78, local_148);
      lVar8 = CONCAT44(uStack_13c, uStack_140);
      if (lVar8 != 0) goto LAB_0010b141;
      LAB_0010b2a6:local_110 = 0;
   }
 else {
      ( *pcVar1 )(*(undefined8*)( lVar8 + 0x10 ), lVar8 + 0x3f8, pcVar4, &local_78, local_148);
      lVar8 = CONCAT44(uStack_13c, uStack_140);
      if (lVar8 == 0) goto LAB_0010b2a6;
      LAB_0010b141:local_110 = 0;
      CowData<String>::_ref((CowData<String>*)&local_110, (CowData*)&uStack_140);
      lVar8 = local_110;
   }

   if (*(long*)( param_1 + 8 ) != lVar8) {
      CowData<String>::_unref((CowData<String>*)( param_1 + 8 ));
      *(long*)( param_1 + 8 ) = lVar8;
      local_110 = 0;
   }

   CowData<String>::_unref((CowData<String>*)&local_110);
   CowData<String>::_unref((CowData<String>*)&uStack_140);
   if (( ( local_150 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),pOVar2 = local_150,cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
   Memory::free_static(pOVar2, false);
}
LAB_0010b070:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return param_1;}/* EditorExportPlugin::get_android_dependencies_maven_repos(Ref<EditorExportPlatform> const&, bool)
   const */Ref *EditorExportPlugin::get_android_dependencies_maven_repos(Ref *param_1, bool param_2) {
   code *pcVar1;
   Object *pOVar2;
   char cVar3;
   code *pcVar4;
   undefined8 uVar5;
   long lVar6;
   long *plVar7;
   bool in_CL;
   long *in_RDX;
   long lVar8;
   undefined7 in_register_00000031;
   long in_FS_OFFSET;
   long local_170;
   undefined8 local_158;
   Object *local_150;
   int local_148[2];
   undefined4 uStack_140;
   undefined4 uStack_13c;
   undefined8 local_118;
   long local_110;
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
   Object **local_78;
   undefined8 *puStack_70;
   int local_60[8];
   long local_40;
   lVar8 = CONCAT71(in_register_00000031, param_2);
   plVar7 = *(long**)( lVar8 + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( param_1 + 8 ) = 0;
   if (plVar7 != (long*)0x0) {
      local_148[0] = 0;
      local_148[1] = 0;
      uStack_140 = 0;
      Variant::Variant((Variant*)&local_78, (Object*)*in_RDX);
      Variant::Variant((Variant*)local_60, in_CL);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = (Variant*)local_60;
      ( **(code**)( *plVar7 + 0x60 ) )(local_98, plVar7, lVar8 + 0x3e0, &local_a8, 2, local_148);
      if (local_148[0] == 0) {
         Variant::operator_cast_to_Vector((Variant*)&local_118);
         if (*(long*)( param_1 + 8 ) != local_110) {
            CowData<String>::_unref((CowData<String>*)( param_1 + 8 ));
            lVar8 = local_110;
            local_110 = 0;
            *(long*)( param_1 + 8 ) = lVar8;
         }

         CowData<String>::_unref((CowData<String>*)&local_110);
         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010b7d0;
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

   if (( *(long*)( lVar8 + 8 ) != 0 ) && ( *(char*)( lVar8 + 1000 ) == '\0' )) {
      local_108 = (undefined1[16])0x0;
      local_118 = 0;
      local_110 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 6;
      local_e0 = 1;
      local_d8[0] = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b0 = 0;
      String::parse_latin1((String*)&local_118, "_get_android_dependencies_maven_repos");
      local_e0 = CONCAT44(local_e0._4_4_, 0xc);
      GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void>*)local_148);
      PropertyInfo::operator =((PropertyInfo*)&local_110, (PropertyInfo*)local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_148);
      local_c0 = local_c0 & 0xffffffff00000000;
      GetTypeInfo<Ref<EditorExportPlatform>const&,void>::get_class_info((GetTypeInfo<Ref<EditorExportPlatform>const&,void>*)local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_148);
      Vector<int>::push_back(local_b8, 0);
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_148);
      Vector<int>::push_back(local_b8, 0);
      MethodInfo::get_compatibility_hash();
      *(undefined8*)( lVar8 + 0x3f0 ) = 0;
      lVar6 = *(long*)( lVar8 + 8 );
      pcVar4 = *(code**)( lVar6 + 0xd8 );
      if (( ( pcVar4 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar4 = *(code**)( lVar6 + 0xd0 ) ),pcVar4 == (code*)0x0) {
         local_158 = 0;
         String::parse_latin1((String*)&local_158, "EditorExportPlugin");
         StringName::StringName((StringName*)&local_150, (String*)&local_158, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_148, (StringName*)&local_150);
         if (CONCAT44(uStack_13c, uStack_140) == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&uStack_140);
            local_170 = 0;
            if (StringName::configured != '\0') goto LAB_0010bce1;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
         }
 else {
            local_170 = *(long*)( CONCAT44(uStack_13c, uStack_140) + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&uStack_140);
            if (StringName::configured != '\0') {
               LAB_0010bce1:if (local_150 != (Object*)0x0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            if (local_170 != 0) {
               lVar6 = *(long*)( lVar8 + 8 );
               goto LAB_0010bbb3;
            }

         }

         lVar6 = *(long*)( lVar8 + 8 );
         pcVar4 = *(code**)( lVar6 + 200 );
         if (( ( pcVar4 != (code*)0x0 ) && ( *(long*)( lVar6 + 0xe0 ) != 0 ) ) || ( pcVar4 = *(code**)( lVar6 + 0xc0 ) ),pcVar4 != (code*)0x0) {
            uVar5 = ( *pcVar4 )(*(undefined8*)( lVar6 + 0xa0 ), lVar8 + 0x3e0);
            *(undefined8*)( lVar8 + 0x3f0 ) = uVar5;
            lVar6 = *(long*)( lVar8 + 8 );
         }

      }
 else {
         uVar5 = ( *pcVar4 )(*(undefined8*)( lVar6 + 0xa0 ), lVar8 + 0x3e0);
         *(undefined8*)( lVar8 + 0x3f0 ) = uVar5;
         lVar6 = *(long*)( lVar8 + 8 );
      }

      LAB_0010bbb3:if (*(char*)( lVar6 + 0x29 ) != '\0') {
         plVar7 = (long*)operator_new(0x18, "");
         *plVar7 = lVar8 + 0x3f0;
         plVar7[1] = lVar8 + 1000;
         plVar7[2] = *(long*)( lVar8 + 0x168 );
         *(long**)( lVar8 + 0x168 ) = plVar7;
      }

      *(undefined1*)( lVar8 + 1000 ) = 1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   }

   pcVar4 = *(code**)( lVar8 + 0x3f0 );
   if (pcVar4 == (code*)0x0) goto LAB_0010b7d0;
   local_150 = (Object*)0x0;
   if ((Object*)*in_RDX != (Object*)0x0) {
      local_150 = (Object*)*in_RDX;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
         local_150 = (Object*)0x0;
      }

      pcVar4 = *(code**)( lVar8 + 0x3f0 );
   }

   puStack_70 = &local_158;
   local_78 = &local_150;
   local_158 = CONCAT71(local_158._1_7_, in_CL);
   uStack_140 = 0;
   uStack_13c = 0;
   pcVar1 = *(code**)( *(long*)( lVar8 + 8 ) + 0xe0 );
   if (pcVar1 == (code*)0x0) {
      ( *pcVar4 )(*(undefined8*)( lVar8 + 0x10 ), &local_78, local_148);
      lVar8 = CONCAT44(uStack_13c, uStack_140);
      if (lVar8 != 0) goto LAB_0010b8a1;
      LAB_0010ba06:local_110 = 0;
   }
 else {
      ( *pcVar1 )(*(undefined8*)( lVar8 + 0x10 ), lVar8 + 0x3e0, pcVar4, &local_78, local_148);
      lVar8 = CONCAT44(uStack_13c, uStack_140);
      if (lVar8 == 0) goto LAB_0010ba06;
      LAB_0010b8a1:local_110 = 0;
      CowData<String>::_ref((CowData<String>*)&local_110, (CowData*)&uStack_140);
      lVar8 = local_110;
   }

   if (*(long*)( param_1 + 8 ) != lVar8) {
      CowData<String>::_unref((CowData<String>*)( param_1 + 8 ));
      *(long*)( param_1 + 8 ) = lVar8;
      local_110 = 0;
   }

   CowData<String>::_unref((CowData<String>*)&local_110);
   CowData<String>::_unref((CowData<String>*)&uStack_140);
   if (( ( local_150 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),pOVar2 = local_150,cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
   Memory::free_static(pOVar2, false);
}
LAB_0010b7d0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return param_1;}/* EditorExportPlugin::get_android_dependencies(Ref<EditorExportPlatform> const&, bool) const */Ref *EditorExportPlugin::get_android_dependencies(Ref *param_1, bool param_2) {
   code *pcVar1;
   Object *pOVar2;
   char cVar3;
   code *pcVar4;
   undefined8 uVar5;
   long lVar6;
   long *plVar7;
   bool in_CL;
   long *in_RDX;
   long lVar8;
   undefined7 in_register_00000031;
   long in_FS_OFFSET;
   long local_170;
   undefined8 local_158;
   Object *local_150;
   int local_148[2];
   undefined4 uStack_140;
   undefined4 uStack_13c;
   undefined8 local_118;
   long local_110;
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
   Object **local_78;
   undefined8 *puStack_70;
   int local_60[8];
   long local_40;
   lVar8 = CONCAT71(in_register_00000031, param_2);
   plVar7 = *(long**)( lVar8 + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( param_1 + 8 ) = 0;
   if (plVar7 != (long*)0x0) {
      local_148[0] = 0;
      local_148[1] = 0;
      uStack_140 = 0;
      Variant::Variant((Variant*)&local_78, (Object*)*in_RDX);
      Variant::Variant((Variant*)local_60, in_CL);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = (Variant*)local_60;
      ( **(code**)( *plVar7 + 0x60 ) )(local_98, plVar7, lVar8 + 0x3c8, &local_a8, 2, local_148);
      if (local_148[0] == 0) {
         Variant::operator_cast_to_Vector((Variant*)&local_118);
         if (*(long*)( param_1 + 8 ) != local_110) {
            CowData<String>::_unref((CowData<String>*)( param_1 + 8 ));
            lVar8 = local_110;
            local_110 = 0;
            *(long*)( param_1 + 8 ) = lVar8;
         }

         CowData<String>::_unref((CowData<String>*)&local_110);
         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010bf30;
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

   if (( *(long*)( lVar8 + 8 ) != 0 ) && ( *(char*)( lVar8 + 0x3d0 ) == '\0' )) {
      local_108 = (undefined1[16])0x0;
      local_118 = 0;
      local_110 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 6;
      local_e0 = 1;
      local_d8[0] = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b0 = 0;
      String::parse_latin1((String*)&local_118, "_get_android_dependencies");
      local_e0 = CONCAT44(local_e0._4_4_, 0xc);
      GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void>*)local_148);
      PropertyInfo::operator =((PropertyInfo*)&local_110, (PropertyInfo*)local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_148);
      local_c0 = local_c0 & 0xffffffff00000000;
      GetTypeInfo<Ref<EditorExportPlatform>const&,void>::get_class_info((GetTypeInfo<Ref<EditorExportPlatform>const&,void>*)local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_148);
      Vector<int>::push_back(local_b8, 0);
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_148);
      Vector<int>::push_back(local_b8, 0);
      MethodInfo::get_compatibility_hash();
      *(undefined8*)( lVar8 + 0x3d8 ) = 0;
      lVar6 = *(long*)( lVar8 + 8 );
      pcVar4 = *(code**)( lVar6 + 0xd8 );
      if (( ( pcVar4 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar4 = *(code**)( lVar6 + 0xd0 ) ),pcVar4 == (code*)0x0) {
         local_158 = 0;
         String::parse_latin1((String*)&local_158, "EditorExportPlugin");
         StringName::StringName((StringName*)&local_150, (String*)&local_158, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_148, (StringName*)&local_150);
         if (CONCAT44(uStack_13c, uStack_140) == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&uStack_140);
            local_170 = 0;
            if (StringName::configured != '\0') goto LAB_0010c441;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
         }
 else {
            local_170 = *(long*)( CONCAT44(uStack_13c, uStack_140) + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&uStack_140);
            if (StringName::configured != '\0') {
               LAB_0010c441:if (local_150 != (Object*)0x0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            if (local_170 != 0) {
               lVar6 = *(long*)( lVar8 + 8 );
               goto LAB_0010c313;
            }

         }

         lVar6 = *(long*)( lVar8 + 8 );
         pcVar4 = *(code**)( lVar6 + 200 );
         if (( ( pcVar4 != (code*)0x0 ) && ( *(long*)( lVar6 + 0xe0 ) != 0 ) ) || ( pcVar4 = *(code**)( lVar6 + 0xc0 ) ),pcVar4 != (code*)0x0) {
            uVar5 = ( *pcVar4 )(*(undefined8*)( lVar6 + 0xa0 ), lVar8 + 0x3c8);
            *(undefined8*)( lVar8 + 0x3d8 ) = uVar5;
            lVar6 = *(long*)( lVar8 + 8 );
         }

      }
 else {
         uVar5 = ( *pcVar4 )(*(undefined8*)( lVar6 + 0xa0 ), lVar8 + 0x3c8);
         *(undefined8*)( lVar8 + 0x3d8 ) = uVar5;
         lVar6 = *(long*)( lVar8 + 8 );
      }

      LAB_0010c313:if (*(char*)( lVar6 + 0x29 ) != '\0') {
         plVar7 = (long*)operator_new(0x18, "");
         *plVar7 = lVar8 + 0x3d8;
         plVar7[1] = lVar8 + 0x3d0;
         plVar7[2] = *(long*)( lVar8 + 0x168 );
         *(long**)( lVar8 + 0x168 ) = plVar7;
      }

      *(undefined1*)( lVar8 + 0x3d0 ) = 1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   }

   pcVar4 = *(code**)( lVar8 + 0x3d8 );
   if (pcVar4 == (code*)0x0) goto LAB_0010bf30;
   local_150 = (Object*)0x0;
   if ((Object*)*in_RDX != (Object*)0x0) {
      local_150 = (Object*)*in_RDX;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
         local_150 = (Object*)0x0;
      }

      pcVar4 = *(code**)( lVar8 + 0x3d8 );
   }

   puStack_70 = &local_158;
   local_78 = &local_150;
   local_158 = CONCAT71(local_158._1_7_, in_CL);
   uStack_140 = 0;
   uStack_13c = 0;
   pcVar1 = *(code**)( *(long*)( lVar8 + 8 ) + 0xe0 );
   if (pcVar1 == (code*)0x0) {
      ( *pcVar4 )(*(undefined8*)( lVar8 + 0x10 ), &local_78, local_148);
      lVar8 = CONCAT44(uStack_13c, uStack_140);
      if (lVar8 != 0) goto LAB_0010c001;
      LAB_0010c166:local_110 = 0;
   }
 else {
      ( *pcVar1 )(*(undefined8*)( lVar8 + 0x10 ), lVar8 + 0x3c8, pcVar4, &local_78, local_148);
      lVar8 = CONCAT44(uStack_13c, uStack_140);
      if (lVar8 == 0) goto LAB_0010c166;
      LAB_0010c001:local_110 = 0;
      CowData<String>::_ref((CowData<String>*)&local_110, (CowData*)&uStack_140);
      lVar8 = local_110;
   }

   if (*(long*)( param_1 + 8 ) != lVar8) {
      CowData<String>::_unref((CowData<String>*)( param_1 + 8 ));
      *(long*)( param_1 + 8 ) = lVar8;
      local_110 = 0;
   }

   CowData<String>::_unref((CowData<String>*)&local_110);
   CowData<String>::_unref((CowData<String>*)&uStack_140);
   if (( ( local_150 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),pOVar2 = local_150,cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
   Memory::free_static(pOVar2, false);
}
LAB_0010bf30:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return param_1;}/* EditorExportPlugin::supports_platform(Ref<EditorExportPlatform> const&) const */ulong EditorExportPlugin::supports_platform(EditorExportPlugin *this, Ref *param_1) {
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
   long in_FS_OFFSET;
   undefined8 local_138;
   long local_130;
   GetTypeInfo<bool,void> local_128[8];
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
   plVar8 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar8 != (long*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, *(Object**)param_1);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar8 + 0x60 ) )((Variant*)local_58, plVar8, this + 0x3b0, &local_80, 1, &local_f8);
      if (local_f8 == 0) {
         bVar3 = Variant::operator_cast_to_bool((Variant*)local_58);
         uVar9 = CONCAT71(extraout_var, bVar3) & 0xffffffff;
         if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010c64b;
      }

      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x3b8] == (EditorExportPlugin)0x0 )) {
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
      String::parse_latin1((String*)&local_f8, "_supports_platform");
      local_c0 = CONCAT44(local_c0._4_4_, 0xc);
      GetTypeInfo<bool,void>::get_class_info(local_128);
      PropertyInfo::operator =((PropertyInfo*)&uStack_f0, (PropertyInfo*)local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_128);
      local_a0 = local_a0 & 0xffffffff00000000;
      GetTypeInfo<Ref<EditorExportPlatform>const&,void>::get_class_info((GetTypeInfo<Ref<EditorExportPlatform>const&,void>*)local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_128);
      Vector<int>::push_back(local_98, 0);
      uVar4 = MethodInfo::get_compatibility_hash();
      lVar7 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x3c0 ) = 0;
      pcVar5 = *(code**)( lVar7 + 0xd8 );
      if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar7 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar7 + 0xd0 ) ),pcVar5 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "EditorExportPlugin");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_128, (StringName*)&local_130);
         if (local_120[0] == 0) {
            lVar7 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') goto LAB_0010c9c7;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_0010c9e6:lVar7 = *(long*)( this + 8 );
            pcVar5 = *(code**)( lVar7 + 200 );
            if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar7 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar7 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_0010c8ff;
            uVar6 = ( *pcVar5 )(*(undefined8*)( lVar7 + 0xa0 ), this + 0x3b0);
            *(undefined8*)( this + 0x3c0 ) = uVar6;
         }
 else {
            lVar7 = *(long*)( local_120[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') {
               LAB_0010c9c7:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar7 == 0) goto LAB_0010c9e6;
         }

         lVar7 = *(long*)( this + 8 );
      }
 else {
         uVar6 = ( *pcVar5 )(*(undefined8*)( lVar7 + 0xa0 ), this + 0x3b0, uVar4);
         *(undefined8*)( this + 0x3c0 ) = uVar6;
         lVar7 = *(long*)( this + 8 );
      }

      LAB_0010c8ff:if (*(char*)( lVar7 + 0x29 ) != '\0') {
         plVar8 = (long*)operator_new(0x18, "");
         *plVar8 = (long)( this + 0x3c0 );
         plVar8[1] = (long)( this + 0x3b8 );
         plVar8[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar8;
      }

      this[0x3b8] = (EditorExportPlugin)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   pcVar5 = *(code**)( this + 0x3c0 );
   uVar9 = 0;
   if (pcVar5 != (code*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      lVar7 = *(long*)param_1;
      if (lVar7 != 0) {
         local_f8 = (int)lVar7;
         uStack_f4 = ( undefined4 )((ulong)lVar7 >> 0x20);
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            local_f8 = 0;
            uStack_f4 = 0;
         }

         pcVar5 = *(code**)( this + 0x3c0 );
      }

      local_58[0] = &local_f8;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar5 )(*(undefined8*)( this + 0x10 ), local_58, local_128);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x3b0, pcVar5, local_58, local_128);
      }

      uVar9 = ( ulong )(local_128[0] != (GetTypeInfo<bool,void>)0x0);
      if (( CONCAT44(uStack_f4, local_f8) != 0 ) && ( cVar2 = cVar2 != '\0' )) {
         pOVar1 = (Object*)CONCAT44(uStack_f4, local_f8);
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   LAB_0010c64b:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar9;
}
/* EditorExportPlugin::_customize_scene(Node*, String const&) */Object * __thiscall
EditorExportPlugin::_customize_scene(EditorExportPlugin *this,Node *param_1,String *param_2){
   char *__s;
   undefined4 uVar1;
   size_t sVar2;
   Object *pOVar3;
   undefined8 uVar4;
   long lVar5;
   long *plVar6;
   code *pcVar7;
   long in_FS_OFFSET;
   CowData<char32_t> *local_190;
   undefined8 local_180;
   undefined8 local_178;
   CowData<char32_t> local_170[8];
   undefined8 local_168;
   String local_160[8];
   undefined8 local_158;
   Node *local_150;
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
   Node **local_78;
   CowData<char32_t> *pCStack_70;
   int local_60[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_180 = 0;
   if (*(long*)param_2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_180, (CowData*)param_2);
   }

   plVar6 = *(long**)( this + 0x98 );
   if (plVar6 != (long*)0x0) {
      local_118 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      Variant::Variant((Variant*)&local_78, (Object*)param_1);
      Variant::Variant((Variant*)local_60, (String*)&local_180);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = (Variant*)local_60;
      ( **(code**)( *plVar6 + 0x60 ) )((Variant*)local_98, plVar6, this + 0x2a8, &local_a8, 2, &local_118);
      if (local_118 == 0) {
         pOVar3 = Variant::operator_cast_to_Object_((Variant*)local_98);
         if (pOVar3 != (Object*)0x0) {
            pOVar3 = (Object*)__dynamic_cast(pOVar3, &Object::typeinfo, &Node::typeinfo, 0);
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

         goto LAB_0010cbf0;
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

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x2b0] == (EditorExportPlugin)0x0 )) {
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
      String::parse_latin1((String*)&local_118, "_customize_scene");
      local_e0 = CONCAT44(local_e0._4_4_, 0x88);
      GetTypeInfo<Node*,void>::get_class_info((GetTypeInfo<Node*,void>*)&local_148);
      PropertyInfo::operator =((PropertyInfo*)&uStack_110, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      local_c0 = local_c0 & 0xffffffff00000000;
      GetTypeInfo<Node*,void>::get_class_info((GetTypeInfo<Node*,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 0);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      *(undefined8*)( this + 0x2b8 ) = 0;
      lVar5 = *(long*)( this + 8 );
      pcVar7 = *(code**)( lVar5 + 0xd8 );
      if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xd0 ) ),pcVar7 == (code*)0x0) {
         local_158 = 0;
         String::parse_latin1((String*)&local_158, "EditorExportPlugin");
         StringName::StringName((StringName*)&local_150, (String*)&local_158, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_148, (StringName*)&local_150);
         if (local_140[0] == 0) {
            lVar5 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') goto LAB_0010d27d;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            LAB_0010d29b:lVar5 = *(long*)( this + 8 );
            pcVar7 = *(code**)( lVar5 + 200 );
            if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xc0 ) ),pcVar7 == (code*)0x0) goto LAB_0010d0d5;
            uVar4 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ), this + 0x2a8);
            *(undefined8*)( this + 0x2b8 ) = uVar4;
         }
 else {
            lVar5 = *(long*)( local_140[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') {
               LAB_0010d27d:if (local_150 != (Node*)0x0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            if (lVar5 == 0) goto LAB_0010d29b;
         }

         lVar5 = *(long*)( this + 8 );
      }
 else {
         uVar4 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ), this + 0x2a8, uVar1);
         *(undefined8*)( this + 0x2b8 ) = uVar4;
         lVar5 = *(long*)( this + 8 );
      }

      LAB_0010d0d5:if (*(char*)( lVar5 + 0x29 ) != '\0') {
         plVar6 = (long*)operator_new(0x18, "");
         *plVar6 = (long)( this + 0x2b8 );
         plVar6[1] = (long)( this + 0x2b0 );
         plVar6[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar6;
      }

      this[0x2b0] = (EditorExportPlugin)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   }

   if (*(long*)( this + 0x2b8 ) != 0) {
      local_148 = 0;
      local_150 = param_1;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_148, (CowData*)&local_180);
      local_78 = &local_150;
      pCStack_70 = (CowData<char32_t>*)&local_148;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( this + 0x2b8 ) )(*(undefined8*)( this + 0x10 ), &local_78, &local_118);
         pOVar3 = (Object*)CONCAT44(uStack_114, local_118);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x2a8, *(undefined8*)( this + 0x2b8 ), &local_78, &local_118);
         pOVar3 = (Object*)CONCAT44(uStack_114, local_118);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
      goto LAB_0010cbf0;
   }

   pOVar3 = (Object*)0x0;
   if (_gdvirtual__customize_scene_call(Node * String, Node * &)::first_print == '\0') goto LAB_0010cbf0;
   local_148 = 0;
   uStack_110 = 0x23;
   uStack_10c = 0;
   local_118 = 0x110638;
   uStack_114 = 0;
   String::parse_latin1((StrRange*)&local_148);
   local_158 = 0;
   local_118 = 0x110b59;
   uStack_114 = 0;
   uStack_110 = 0x10;
   uStack_10c = 0;
   String::parse_latin1((StrRange*)&local_158);
   local_168 = 0;
   local_118 = 0x11092b;
   uStack_114 = 0;
   uStack_110 = 2;
   uStack_10c = 0;
   String::parse_latin1((StrRange*)&local_168);
   if (*(code**)( *(long*)this + 0x48 ) == get_class) {
      if (*(long*)( this + 8 ) == 0) {
         local_178 = 0;
         local_118 = 0x110f44;
         uStack_114 = 0;
         uStack_110 = 0x12;
         uStack_10c = 0;
         LAB_0010cdbd:String::parse_latin1((StrRange*)&local_178);
      }
 else {
         lVar5 = *(long*)( *(long*)( this + 8 ) + 0x20 );
         if (lVar5 == 0) {
            local_178 = 0;
         }
 else {
            __s = *(char**)( lVar5 + 8 );
            local_178 = 0;
            if (__s != (char*)0x0) {
               sVar2 = strlen(__s);
               local_118 = (int)__s;
               uStack_114 = ( undefined4 )((ulong)__s >> 0x20);
               uStack_110 = (undefined4)sVar2;
               uStack_10c = ( undefined4 )(sVar2 >> 0x20);
               goto LAB_0010cdbd;
            }

            CowData<char32_t>::_ref((CowData<char32_t>*)&local_178, (CowData*)( lVar5 + 0x10 ));
         }

      }

   }
 else {
      ( **(code**)( *(long*)this + 0x48 ) )(&local_178, this);
   }

   local_190 = (CowData<char32_t>*)&local_178;
   operator+((char *)
   local_170,(String*)"Required virtual method ";
   String::operator +(local_160, (String*)local_170);
   String::operator +((String*)&local_150, local_160);
   String::operator +((String*)&local_118, (String*)&local_150);
   _err_print_error("_gdvirtual__customize_scene_call", "editor/export/editor_export_plugin.h", 0x7c, (String*)&local_118, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_160);
   CowData<char32_t>::_unref(local_170);
   CowData<char32_t>::_unref(local_190);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   _gdvirtual__customize_scene_call(Node*,String,Node*&)::first_print =
   '\0';
   LAB_0010cbf0:CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pOVar3;
}
/* EditorExportPlugin::_begin_customize_scenes(Ref<EditorExportPlatform> const&, Vector<String>
   const&) */ulong EditorExportPlugin::_begin_customize_scenes(EditorExportPlugin *this, Ref *param_1, Vector *param_2) {
   Object *pOVar1;
   char cVar2;
   bool bVar3;
   undefined4 uVar4;
   undefined7 extraout_var;
   undefined8 uVar5;
   long lVar6;
   long *plVar7;
   code *pcVar8;
   ulong uVar9;
   long in_FS_OFFSET;
   Variant *this_00;
   List<PropertyInfo,DefaultAllocator> *this_01;
   EditorExportPlugin *pEVar10;
   Variant *pVVar11;
   StringName *this_02;
   undefined8 local_158;
   StringName local_150;
   undefined7 uStack_14f;
   Object *local_148;
   long local_140[5];
   int local_118[2];
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
   Object **local_78;
   int *piStack_70;
   int local_60[8];
   long local_40;
   plVar7 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar7 != (long*)0x0) {
      local_118[0] = 0;
      local_118[1] = 0;
      uStack_110 = 0;
      pVVar11 = (Variant*)&local_78;
      Variant::Variant((Variant*)&local_78, *(Object**)param_1);
      this_00 = (Variant*)local_60;
      Variant::Variant(this_00, param_2);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = this_00;
      ( **(code**)( *plVar7 + 0x60 ) )((Variant*)local_98, plVar7, this + 0x290, &local_a8, 2, local_118, this_00, pVVar11);
      if (local_118[0] == 0) {
         bVar3 = Variant::operator_cast_to_bool((Variant*)local_98);
         uVar9 = CONCAT71(extraout_var, bVar3) & 0xffffffff;
         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010d477;
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

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x298] == (EditorExportPlugin)0x0 )) {
      local_118[0] = 0;
      local_118[1] = 0;
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
      String::parse_latin1((String*)local_118, "_begin_customize_scenes");
      local_e0 = CONCAT44(local_e0._4_4_, 0xc);
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_148);
      PropertyInfo::operator =((PropertyInfo*)&uStack_110, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      local_c0 = local_c0 & 0xffffffff00000000;
      GetTypeInfo<Ref<EditorExportPlatform>const&,void>::get_class_info((GetTypeInfo<Ref<EditorExportPlatform>const&,void>*)&local_148);
      this_01 = (List<PropertyInfo,DefaultAllocator>*)local_d8;
      List<PropertyInfo,DefaultAllocator>::push_back(this_01, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 0);
      GetTypeInfo<Vector<String>const&,void>::get_class_info((GetTypeInfo<Vector<String>const&,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back(this_01, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 0);
      uVar4 = MethodInfo::get_compatibility_hash();
      *(undefined8*)( this + 0x2a0 ) = 0;
      lVar6 = *(long*)( this + 8 );
      pcVar8 = *(code**)( lVar6 + 0xd8 );
      if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar6 + 0xd0 ) ),pcVar8 == (code*)0x0) {
         pEVar10 = this + 0x290;
         local_158 = 0;
         String::parse_latin1((String*)&local_158, "EditorExportPlugin");
         this_02 = &local_150;
         StringName::StringName(this_02, (String*)&local_158, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_148, this_02);
         if (local_140[0] == 0) {
            lVar6 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') goto LAB_0010d8bc;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            LAB_0010d8db:lVar6 = *(long*)( this + 8 );
            pcVar8 = *(code**)( lVar6 + 200 );
            if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar6 + 0xc0 ) ),pcVar8 == (code*)0x0) goto LAB_0010d7c9;
            uVar5 = ( *pcVar8 )(*(undefined8*)( lVar6 + 0xa0 ), pEVar10);
            *(undefined8*)( this + 0x2a0 ) = uVar5;
         }
 else {
            lVar6 = *(long*)( local_140[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') {
               LAB_0010d8bc:if (CONCAT71(uStack_14f, local_150) != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            if (lVar6 == 0) goto LAB_0010d8db;
         }

         lVar6 = *(long*)( this + 8 );
      }
 else {
         uVar5 = ( *pcVar8 )(*(undefined8*)( lVar6 + 0xa0 ), this + 0x290, uVar4);
         *(undefined8*)( this + 0x2a0 ) = uVar5;
         lVar6 = *(long*)( this + 8 );
      }

      LAB_0010d7c9:if (*(char*)( lVar6 + 0x29 ) != '\0') {
         plVar7 = (long*)operator_new(0x18, "");
         *plVar7 = (long)( this + 0x2a0 );
         plVar7[1] = (long)( this + 0x298 );
         plVar7[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar7;
      }

      this[0x298] = (EditorExportPlugin)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_118);
   }

   uVar9 = 0;
   if (*(long*)( this + 0x2a0 ) != 0) {
      local_148 = (Object*)0x0;
      if (( *(Object**)param_1 != (Object*)0x0 ) && ( local_148 = *(Object**)param_1 ),cVar2 = RefCounted::reference(),cVar2 == '\0') {
         local_148 = (Object*)0x0;
      }

      uStack_110 = 0;
      uStack_10c = 0;
      if (*(long*)( param_2 + 8 ) != 0) {
         CowData<String>::_ref((CowData<String>*)&uStack_110, (CowData*)( param_2 + 8 ));
      }

      local_78 = &local_148;
      piStack_70 = local_118;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( this + 0x2a0 ) )(*(undefined8*)( this + 0x10 ), &local_78, &local_150);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x290, *(code**)( this + 0x2a0 ), &local_78, &local_150);
      }

      uVar9 = ( ulong )(local_150 != (StringName)0x0);
      CowData<String>::_unref((CowData<String>*)&uStack_110);
      if (( ( local_148 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar1 = local_148,cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar1 + 0x140 ))(pOVar1);
      Memory::free_static(pOVar1, false);
   }

}
LAB_0010d477:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return uVar9;}/* EditorExportPlugin::_customize_resource(Ref<Resource> const&, String const&) */Ref *EditorExportPlugin::_customize_resource(Ref *param_1, String *param_2) {
   char *__s;
   char cVar1;
   undefined4 uVar2;
   size_t sVar3;
   long lVar4;
   Object *pOVar5;
   undefined8 uVar6;
   long *plVar7;
   CowData *in_RCX;
   code *pcVar8;
   long *in_RDX;
   Object *pOVar9;
   long in_FS_OFFSET;
   Variant *this;
   String *pSVar10;
   Vector<int> *this_00;
   String *pSVar11;
   Variant *pVVar12;
   List<PropertyInfo,DefaultAllocator> *this_01;
   CowData<char32_t> *local_190;
   undefined8 local_180;
   undefined8 local_178;
   CowData<char32_t> local_170[8];
   undefined8 local_168;
   String local_160[8];
   undefined8 local_158;
   Object *local_150;
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
   Object **local_78;
   CowData<char32_t> *pCStack_70;
   int local_60[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar4 = *(long*)in_RCX;
   *(undefined8*)param_1 = 0;
   local_180 = 0;
   if (lVar4 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_180, in_RCX);
   }

   plVar7 = *(long**)( param_2 + 0x98 );
   if (plVar7 != (long*)0x0) {
      local_118 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      pVVar12 = (Variant*)&local_78;
      Variant::Variant((Variant*)&local_78, (Object*)*in_RDX);
      this(Variant * local_60);
      Variant::Variant(this, (String*)&local_180);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = this;
      ( **(code**)( *plVar7 + 0x60 ) )(local_98, plVar7, param_2 + 0x278, &local_a8, 2, &local_118, this, pVVar12);
      if (local_118 == 0) {
         lVar4 = Variant::get_validated_object();
         if (lVar4 == 0) {
            pOVar9 = *(Object**)param_1;
            if (pOVar9 != (Object*)0x0) {
               *(undefined8*)param_1 = 0;
               cVar1 = RefCounted::unreference();
               if (cVar1 != '\0') {
                  cVar1 = predelete_handler(pOVar9);
                  pOVar5 = (Object*)0x0;
                  if (cVar1 == '\0') goto LAB_0010dfe0;
                  LAB_0010df8a:( **(code**)( *(long*)pOVar9 + 0x140 ) )(pOVar9);
                  Memory::free_static(pOVar9, false);
                  if (pOVar5 != (Object*)0x0) goto LAB_0010dfb0;
               }

            }

         }
 else {
            pOVar5 = (Object*)__dynamic_cast(lVar4, &Object::typeinfo, &Resource::typeinfo, 0);
            if (pOVar5 == (Object*)0x0) {
               pOVar9 = *(Object**)param_1;
               LAB_0010df63:if (pOVar9 != (Object*)0x0) {
                  *(undefined8*)param_1 = 0;
                  cVar1 = RefCounted::unreference();
                  if (cVar1 != '\0') {
                     pOVar5 = (Object*)0x0;
                     cVar1 = predelete_handler(pOVar9);
                     if (cVar1 != '\0') goto LAB_0010df8a;
                  }

               }

            }
 else {
               cVar1 = RefCounted::reference();
               pOVar9 = *(Object**)param_1;
               if (cVar1 == '\0') goto LAB_0010df63;
               if (pOVar5 != pOVar9) {
                  *(Object**)param_1 = pOVar5;
                  cVar1 = RefCounted::reference();
                  if (cVar1 == '\0') {
                     *(undefined8*)param_1 = 0;
                  }

                  if (( ( pOVar9 != (Object*)0x0 ) && ( cVar1 = RefCounted::unreference() ),cVar1 != '\0' )) goto LAB_0010df8a;
               }

               LAB_0010dfb0:cVar1 = RefCounted::unreference();
               if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         LAB_0010dfe0:if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010daff;
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

   if (( *(long*)( param_2 + 8 ) != 0 ) && ( param_2[0x280] == (String)0x0 )) {
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
      String::parse_latin1((String*)&local_118, "_customize_resource");
      local_e0 = CONCAT44(local_e0._4_4_, 0x88);
      GetTypeInfo<Ref<Resource>,void>::get_class_info((GetTypeInfo<Ref<Resource>,void>*)&local_148);
      PropertyInfo::operator =((PropertyInfo*)&uStack_110, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      local_c0 = local_c0 & 0xffffffff00000000;
      GetTypeInfo<Ref<Resource>const&,void>::get_class_info((GetTypeInfo<Ref<Resource>const&,void>*)&local_148);
      this_01 = (List<PropertyInfo,DefaultAllocator>*)local_d8;
      List<PropertyInfo,DefaultAllocator>::push_back(this_01, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      this_00 = local_b8;
      Vector<int>::push_back(this_00, 0);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back(this_01, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(this_00, 0);
      uVar2 = MethodInfo::get_compatibility_hash();
      *(undefined8*)( param_2 + 0x288 ) = 0;
      lVar4 = *(long*)( param_2 + 8 );
      pcVar8 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar4 + 0xd0 ) ),pcVar8 == (code*)0x0) {
         pSVar10 = param_2 + 0x278;
         local_158 = 0;
         pSVar11 = (String*)&local_158;
         String::parse_latin1(pSVar11, "EditorExportPlugin");
         StringName::StringName((StringName*)&local_150, pSVar11, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_148, (StringName*)&local_150);
         if (local_140[0] == 0) {
            lVar4 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') goto LAB_0010e481;
            CowData<char32_t>::_unref((CowData<char32_t>*)pSVar11);
            LAB_0010e4a1:lVar4 = *(long*)( param_2 + 8 );
            pcVar8 = *(code**)( lVar4 + 200 );
            if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar4 + 0xc0 ) ),pcVar8 == (code*)0x0) goto LAB_0010e1cc;
            uVar6 = ( *pcVar8 )(*(undefined8*)( lVar4 + 0xa0 ), pSVar10);
            *(undefined8*)( param_2 + 0x288 ) = uVar6;
         }
 else {
            lVar4 = *(long*)( local_140[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') {
               LAB_0010e481:if (local_150 != (Object*)0x0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)pSVar11);
            if (lVar4 == 0) goto LAB_0010e4a1;
         }

         lVar4 = *(long*)( param_2 + 8 );
      }
 else {
         uVar6 = ( *pcVar8 )(*(undefined8*)( lVar4 + 0xa0 ), param_2 + 0x278, uVar2);
         *(undefined8*)( param_2 + 0x288 ) = uVar6;
         lVar4 = *(long*)( param_2 + 8 );
      }

      LAB_0010e1cc:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar7 = (long*)operator_new(0x18, "");
         *plVar7 = (long)( param_2 + 0x288 );
         plVar7[1] = (long)( param_2 + 0x280 );
         plVar7[2] = *(long*)( param_2 + 0x168 );
         *(long**)( param_2 + 0x168 ) = plVar7;
      }

      param_2[0x280] = (String)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   }

   if (*(long*)( param_2 + 0x288 ) == 0) {
      if (_gdvirtual__customize_resource_call(Ref < Resource > const & String, Ref<Resource> & ::first_print == '\0') goto LAB_0010daff;
      local_148 = 0;
      String::parse_latin1((String*)&local_148, " must be overridden before calling.");
      pSVar10 = (String*)&local_158;
      local_158 = 0;
      String::parse_latin1(pSVar10, "_customize_resource");
      local_168 = 0;
      String::parse_latin1((String*)&local_168, "::");
      if (*(code**)( *(long*)param_2 + 0x48 ) == get_class) {
         if (*(long*)( param_2 + 8 ) == 0) {
            local_178 = 0;
            local_118 = 0x110f44;
            uStack_114 = 0;
            uStack_110 = 0x12;
            uStack_10c = 0;
            LAB_0010dd68:String::parse_latin1((StrRange*)&local_178);
         }
 else {
            lVar4 = *(long*)( *(long*)( param_2 + 8 ) + 0x20 );
            if (lVar4 != 0) {
               __s = *(char**)( lVar4 + 8 );
               local_178 = 0;
               if (__s != (char*)0x0) {
                  sVar3 = strlen(__s);
                  local_118 = (int)__s;
                  uStack_114 = ( undefined4 )((ulong)__s >> 0x20);
                  uStack_110 = (undefined4)sVar3;
                  uStack_10c = ( undefined4 )(sVar3 >> 0x20);
                  goto LAB_0010dd68;
               }

               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_178, (CowData*)( lVar4 + 0x10 ));
                  goto LAB_0010dd85;
               }

            }

            local_178 = 0;
         }

      }
 else {
         ( **(code**)( *(long*)param_2 + 0x48 ) )(&local_178, param_2);
      }

      LAB_0010dd85:local_190 = (CowData<char32_t>*)&local_178;
      operator+((char *)
      local_170,(String*)"Required virtual method ";
      pSVar11 = local_160;
      String::operator +(pSVar11, (String*)local_170);
      String::operator +((String*)&local_150, pSVar11);
      String::operator +((String*)&local_118, (String*)&local_150);
      _err_print_error("_gdvirtual__customize_resource_call", "editor/export/editor_export_plugin.h", 0x79, (String*)&local_118, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
      CowData<char32_t>::_unref((CowData<char32_t>*)pSVar11);
      CowData<char32_t>::_unref(local_170);
      CowData<char32_t>::_unref(local_190);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
      CowData<char32_t>::_unref((CowData<char32_t>*)pSVar10);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
      _gdvirtual__customize_resource_call(Ref<Resource>const&,String,Ref<Resource>&)::first_print =
      '\0';
      goto LAB_0010daff;
   }

   local_150 = (Object*)0x0;
   if (( (Object*)*in_RDX != (Object*)0x0 ) && ( local_150 = (Object*)*in_RDX ),cVar1 = RefCounted::reference(),cVar1 == '\0') {
      local_150 = (Object*)0x0;
   }

   local_148 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_148, (CowData*)&local_180);
   local_78 = &local_150;
   local_118 = 0;
   uStack_114 = 0;
   pCStack_70 = (CowData<char32_t>*)&local_148;
   if (*(code**)( *(long*)( param_2 + 8 ) + 0xe0 ) == (code*)0x0) {
      ( **(code**)( param_2 + 0x288 ) )(*(undefined8*)( param_2 + 0x10 ), &local_78, &local_118);
      pOVar9 = (Object*)CONCAT44(uStack_114, local_118);
      if (pOVar9 != (Object*)0x0) goto LAB_0010dbe4;
      LAB_0010df4c:pOVar9 = *(Object**)param_1;
      if (pOVar9 != (Object*)0x0) {
         LAB_0010de5c:*(undefined8*)param_1 = 0;
         LAB_0010dc27:cVar1 = RefCounted::unreference();
         if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
            ( **(code**)( *(long*)pOVar9 + 0x140 ) )(pOVar9);
            Memory::free_static(pOVar9, false);
         }

         goto LAB_0010dc37;
      }

   }
 else {
      ( **(code**)( *(long*)( param_2 + 8 ) + 0xe0 ) )(*(undefined8*)( param_2 + 0x10 ), param_2 + 0x278, *(undefined8*)( param_2 + 0x288 ), &local_78, &local_118);
      pOVar9 = (Object*)CONCAT44(uStack_114, local_118);
      if (pOVar9 == (Object*)0x0) goto LAB_0010df4c;
      LAB_0010dbe4:cVar1 = RefCounted::reference();
      if (cVar1 != '\0') {
         pOVar5 = *(Object**)param_1;
         if (pOVar5 != pOVar9) {
            *(Object**)param_1 = pOVar9;
            cVar1 = RefCounted::reference();
            if (cVar1 == '\0') {
               *(undefined8*)param_1 = 0;
            }

            if (( ( pOVar5 != (Object*)0x0 ) && ( cVar1 = RefCounted::unreference() ),cVar1 != '\0' )) &&( cVar1 = cVar1 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);
            Memory::free_static(pOVar5, false);
         }

      }

      goto LAB_0010dc27;
   }

   pOVar9 = *(Object**)param_1;
   if (pOVar9 != (Object*)0x0) goto LAB_0010de5c;
   LAB_0010dc37:if (( CONCAT44(uStack_114, local_118) != 0 ) && ( cVar1 = cVar1 != '\0' )) {
      pOVar9 = (Object*)CONCAT44(uStack_114, local_118);
      cVar1 = predelete_handler(pOVar9);
      if (cVar1 != '\0') {
         ( **(code**)( *(long*)pOVar9 + 0x140 ) )(pOVar9);
         Memory::free_static(pOVar9, false);
      }

   }

}
CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);if (( ( local_150 != (Object*)0x0 ) && ( cVar1 = RefCounted::unreference() ),pOVar9 = local_150,cVar1 != '\0' )) &&( cVar1 = cVar1 != '\0' )(**(code**)( *(long*)pOVar9 + 0x140 ))(pOVar9);Memory::free_static(pOVar9, false);}LAB_0010daff:CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return param_1;}/* EditorExportPlugin::_begin_customize_resources(Ref<EditorExportPlatform> const&, Vector<String>
   const&) */ulong EditorExportPlugin::_begin_customize_resources(EditorExportPlugin *this, Ref *param_1, Vector *param_2) {
   Object *pOVar1;
   char cVar2;
   bool bVar3;
   undefined4 uVar4;
   undefined7 extraout_var;
   undefined8 uVar5;
   long lVar6;
   long *plVar7;
   code *pcVar8;
   ulong uVar9;
   long in_FS_OFFSET;
   Variant *this_00;
   List<PropertyInfo,DefaultAllocator> *this_01;
   EditorExportPlugin *pEVar10;
   Variant *pVVar11;
   StringName *this_02;
   undefined8 local_158;
   StringName local_150;
   undefined7 uStack_14f;
   Object *local_148;
   long local_140[5];
   int local_118[2];
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
   Object **local_78;
   int *piStack_70;
   int local_60[8];
   long local_40;
   plVar7 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar7 != (long*)0x0) {
      local_118[0] = 0;
      local_118[1] = 0;
      uStack_110 = 0;
      pVVar11 = (Variant*)&local_78;
      Variant::Variant((Variant*)&local_78, *(Object**)param_1);
      this_00 = (Variant*)local_60;
      Variant::Variant(this_00, param_2);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = this_00;
      ( **(code**)( *plVar7 + 0x60 ) )((Variant*)local_98, plVar7, this + 0x260, &local_a8, 2, local_118, this_00, pVVar11);
      if (local_118[0] == 0) {
         bVar3 = Variant::operator_cast_to_bool((Variant*)local_98);
         uVar9 = CONCAT71(extraout_var, bVar3) & 0xffffffff;
         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010e687;
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

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x268] == (EditorExportPlugin)0x0 )) {
      local_118[0] = 0;
      local_118[1] = 0;
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
      String::parse_latin1((String*)local_118, "_begin_customize_resources");
      local_e0 = CONCAT44(local_e0._4_4_, 0xc);
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_148);
      PropertyInfo::operator =((PropertyInfo*)&uStack_110, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      local_c0 = local_c0 & 0xffffffff00000000;
      GetTypeInfo<Ref<EditorExportPlatform>const&,void>::get_class_info((GetTypeInfo<Ref<EditorExportPlatform>const&,void>*)&local_148);
      this_01 = (List<PropertyInfo,DefaultAllocator>*)local_d8;
      List<PropertyInfo,DefaultAllocator>::push_back(this_01, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 0);
      GetTypeInfo<Vector<String>const&,void>::get_class_info((GetTypeInfo<Vector<String>const&,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back(this_01, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 0);
      uVar4 = MethodInfo::get_compatibility_hash();
      *(undefined8*)( this + 0x270 ) = 0;
      lVar6 = *(long*)( this + 8 );
      pcVar8 = *(code**)( lVar6 + 0xd8 );
      if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar6 + 0xd0 ) ),pcVar8 == (code*)0x0) {
         pEVar10 = this + 0x260;
         local_158 = 0;
         String::parse_latin1((String*)&local_158, "EditorExportPlugin");
         this_02 = &local_150;
         StringName::StringName(this_02, (String*)&local_158, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_148, this_02);
         if (local_140[0] == 0) {
            lVar6 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') goto LAB_0010eacc;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            LAB_0010eaeb:lVar6 = *(long*)( this + 8 );
            pcVar8 = *(code**)( lVar6 + 200 );
            if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar6 + 0xc0 ) ),pcVar8 == (code*)0x0) goto LAB_0010e9d9;
            uVar5 = ( *pcVar8 )(*(undefined8*)( lVar6 + 0xa0 ), pEVar10);
            *(undefined8*)( this + 0x270 ) = uVar5;
         }
 else {
            lVar6 = *(long*)( local_140[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') {
               LAB_0010eacc:if (CONCAT71(uStack_14f, local_150) != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            if (lVar6 == 0) goto LAB_0010eaeb;
         }

         lVar6 = *(long*)( this + 8 );
      }
 else {
         uVar5 = ( *pcVar8 )(*(undefined8*)( lVar6 + 0xa0 ), this + 0x260, uVar4);
         *(undefined8*)( this + 0x270 ) = uVar5;
         lVar6 = *(long*)( this + 8 );
      }

      LAB_0010e9d9:if (*(char*)( lVar6 + 0x29 ) != '\0') {
         plVar7 = (long*)operator_new(0x18, "");
         *plVar7 = (long)( this + 0x270 );
         plVar7[1] = (long)( this + 0x268 );
         plVar7[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar7;
      }

      this[0x268] = (EditorExportPlugin)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_118);
   }

   uVar9 = 0;
   if (*(long*)( this + 0x270 ) != 0) {
      local_148 = (Object*)0x0;
      if (( *(Object**)param_1 != (Object*)0x0 ) && ( local_148 = *(Object**)param_1 ),cVar2 = RefCounted::reference(),cVar2 == '\0') {
         local_148 = (Object*)0x0;
      }

      uStack_110 = 0;
      uStack_10c = 0;
      if (*(long*)( param_2 + 8 ) != 0) {
         CowData<String>::_ref((CowData<String>*)&uStack_110, (CowData*)( param_2 + 8 ));
      }

      local_78 = &local_148;
      piStack_70 = local_118;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( this + 0x270 ) )(*(undefined8*)( this + 0x10 ), &local_78, &local_150);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x260, *(code**)( this + 0x270 ), &local_78, &local_150);
      }

      uVar9 = ( ulong )(local_150 != (StringName)0x0);
      CowData<String>::_unref((CowData<String>*)&uStack_110);
      if (( ( local_148 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar1 = local_148,cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar1 + 0x140 ))(pOVar1);
      Memory::free_static(pOVar1, false);
   }

}
LAB_0010e687:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return uVar9;}/* EditorExportPlugin::_export_begin_script(Vector<String> const&, bool, String const&, int) */void EditorExportPlugin::_export_begin_script(EditorExportPlugin *this, Vector *param_1, bool param_2, String *param_3, int param_4) {
   Variant *pVVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   Variant *pVVar7;
   long in_FS_OFFSET;
   undefined8 local_1b0;
   undefined8 local_1a8;
   long local_1a0;
   Vector local_198[8];
   long local_190;
   ulong local_188;
   long local_180[5];
   int local_158[2];
   undefined4 uStack_150;
   undefined4 uStack_14c;
   undefined1 local_148[16];
   undefined8 local_138;
   undefined8 local_130;
   undefined8 local_128;
   undefined8 local_120;
   undefined8 local_118[2];
   undefined8 local_108;
   undefined8 local_100;
   Vector<int> local_f8[8];
   undefined8 local_f0;
   int local_e8[8];
   Variant *local_c8;
   Variant *pVStack_c0;
   Variant *local_b8;
   Variant *pVStack_b0;
   int *local_a8;
   undefined8 *puStack_a0;
   CowData<char32_t> *local_98;
   ulong *apuStack_90[3];
   Variant local_78[24];
   Variant local_60[24];
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_1b0 = 0;
   if (*(long*)param_3 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1b0, (CowData*)param_3);
   }

   local_190 = 0;
   if (*(long*)( param_1 + 8 ) != 0) {
      CowData<String>::_ref((CowData<String>*)&local_190, (CowData*)( param_1 + 8 ));
   }

   plVar5 = *(long**)( this + 0x98 );
   if (plVar5 != (long*)0x0) {
      local_158[0] = 0;
      local_158[1] = 0;
      uStack_150 = 0;
      Variant::Variant((Variant*)&local_a8, local_198);
      Variant::Variant((Variant*)apuStack_90, param_2);
      Variant::Variant(local_78, (String*)&local_1b0);
      Variant::Variant(local_60, param_4);
      local_c8 = (Variant*)&local_a8;
      pVStack_c0 = (Variant*)apuStack_90;
      local_b8 = local_78;
      pVStack_b0 = local_60;
      ( **(code**)( *plVar5 + 0x60 ) )(local_e8, plVar5, this + 0x230, &local_c8, 4, local_158);
      if (Variant::needs_deinit[local_e8[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_158[0] == 0) {
         pVVar7 = local_48;
         do {
            pVVar1 = pVVar7 + -0x18;
            pVVar7 = pVVar7 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( pVVar7 != (Variant*)&local_a8 );
         goto LAB_0010ed5f;
      }

      pVVar7 = local_48;
      do {
         pVVar1 = pVVar7 + -0x18;
         pVVar7 = pVVar7 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar7 != (Variant*)&local_a8 );
   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x238] == (EditorExportPlugin)0x0 )) {
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
      String::parse_latin1((String*)local_158, "_export_begin");
      local_120 = CONCAT44(local_120._4_4_, 8);
      GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void>*)&local_188);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_118, (PropertyInfo*)&local_188);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
      Vector<int>::push_back(local_f8, 0);
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_188);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_118, (PropertyInfo*)&local_188);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
      Vector<int>::push_back(local_f8, 0);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_188);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_118, (PropertyInfo*)&local_188);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
      Vector<int>::push_back(local_f8, 0);
      GetTypeInfo<unsigned_int,void>::get_class_info((GetTypeInfo<unsigned_int,void>*)&local_188);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_118, (PropertyInfo*)&local_188);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
      Vector<int>::push_back(local_f8, 7);
      uVar2 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x240 ) = 0;
      pcVar6 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
         local_1a8 = 0;
         String::parse_latin1((String*)&local_1a8, "EditorExportPlugin");
         StringName::StringName((StringName*)&local_1a0, (String*)&local_1a8, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_188, (StringName*)&local_1a0);
         if (local_180[0] == 0) {
            lVar4 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_180);
            if (StringName::configured != '\0') goto LAB_0010f178;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
            LAB_0010f197:lVar4 = *(long*)( this + 8 );
            pcVar6 = *(code**)( lVar4 + 200 );
            if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_0010f0b8;
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x230);
            *(undefined8*)( this + 0x240 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_180[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_180);
            if (StringName::configured != '\0') {
               LAB_0010f178:if (local_1a0 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
            if (lVar4 == 0) goto LAB_0010f197;
         }

         lVar4 = *(long*)( this + 8 );
      }
 else {
         uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x230, uVar2);
         *(undefined8*)( this + 0x240 ) = uVar3;
         lVar4 = *(long*)( this + 8 );
      }

      LAB_0010f0b8:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( this + 0x240 );
         plVar5[1] = (long)( this + 0x238 );
         plVar5[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar5;
      }

      this[0x238] = (EditorExportPlugin)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_158);
   }

   if (*(long*)( this + 0x240 ) != 0) {
      uStack_150 = 0;
      uStack_14c = 0;
      if (local_190 != 0) {
         CowData<String>::_ref((CowData<String>*)&uStack_150, (CowData*)&local_190);
      }

      local_1a8 = CONCAT71(local_1a8._1_7_, param_2);
      local_1a0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1a0, (CowData*)&local_1b0);
      local_188 = (ulong)(uint)param_4;
      local_a8 = local_158;
      puStack_a0 = &local_1a8;
      apuStack_90[0] = &local_188;
      local_98 = (CowData<char32_t>*)&local_1a0;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( this + 0x240 ) )(*(undefined8*)( this + 0x10 ), &local_a8, 0);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x230, *(undefined8*)( this + 0x240 ), &local_a8, 0);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
      CowData<String>::_unref((CowData<String>*)&uStack_150);
   }

   LAB_0010ed5f:CowData<String>::_unref((CowData<String>*)&local_190);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* EditorExportPlugin::_export_file_script(String const&, String const&, Vector<String> const&) */void EditorExportPlugin::_export_file_script(EditorExportPlugin *this, String *param_1, String *param_2, Vector *param_3) {
   Variant *pVVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   Variant *pVVar7;
   long in_FS_OFFSET;
   long local_1b0;
   long local_198;
   undefined8 local_190;
   undefined8 local_188;
   long local_180;
   Vector local_178[8];
   long local_170;
   undefined8 local_168;
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
   undefined8 local_e0;
   Vector<int> local_d8[8];
   undefined8 local_d0;
   Variant *local_c8;
   Variant *pVStack_c0;
   Variant *local_b8;
   int local_a8[8];
   CowData<char32_t> *local_88;
   CowData<char32_t> *pCStack_80;
   int *local_78;
   Variant local_70[24];
   Variant local_58[24];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   local_170 = 0;
   if (*(long*)( param_3 + 8 ) != 0) {
      CowData<String>::_ref((CowData<String>*)&local_170, (CowData*)( param_3 + 8 ));
   }

   local_190 = 0;
   if (*(long*)param_2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_190, (CowData*)param_2);
   }

   local_198 = 0;
   if (*(long*)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_198, (CowData*)param_1);
   }

   plVar5 = *(long**)( this + 0x98 );
   if (plVar5 != (long*)0x0) {
      local_138[0] = 0;
      local_138[1] = 0;
      uStack_130 = 0;
      Variant::Variant((Variant*)&local_88, (String*)&local_198);
      Variant::Variant(local_70, (String*)&local_190);
      Variant::Variant(local_58, local_178);
      local_c8 = (Variant*)&local_88;
      pVStack_c0 = local_70;
      local_b8 = local_58;
      ( **(code**)( *plVar5 + 0x60 ) )(local_a8, plVar5, this + 0x218, &local_c8, 3, local_138);
      if (Variant::needs_deinit[local_a8[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_138[0] == 0) {
         pVVar7 = (Variant*)local_40;
         do {
            pVVar1 = pVVar7 + -0x18;
            pVVar7 = pVVar7 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( pVVar7 != (Variant*)&local_88 );
         goto LAB_0010f3fa;
      }

      pVVar7 = (Variant*)local_40;
      do {
         pVVar1 = pVVar7 + -0x18;
         pVVar7 = pVVar7 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar7 != (Variant*)&local_88 );
   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x220] == (EditorExportPlugin)0x0 )) {
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
      String::parse_latin1((String*)local_138, "_export_file");
      local_100 = CONCAT44(local_100._4_4_, 8);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_168);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_f8, (PropertyInfo*)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
      Vector<int>::push_back(local_d8, 0);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_168);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_f8, (PropertyInfo*)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
      Vector<int>::push_back(local_d8, 0);
      GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void>*)&local_168);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_f8, (PropertyInfo*)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
      Vector<int>::push_back(local_d8, 0);
      uVar2 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x228 ) = 0;
      pcVar6 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
         local_188 = 0;
         String::parse_latin1((String*)&local_188, "EditorExportPlugin");
         StringName::StringName((StringName*)&local_180, (String*)&local_188, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_168, (StringName*)&local_180);
         if (local_160[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_160);
            local_1b0 = 0;
            if (StringName::configured != '\0') goto LAB_0010f7e5;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
            LAB_0010f805:lVar4 = *(long*)( this + 8 );
            pcVar6 = *(code**)( lVar4 + 200 );
            if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_0010f72c;
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x218);
            *(undefined8*)( this + 0x228 ) = uVar3;
         }
 else {
            local_1b0 = *(long*)( local_160[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_160);
            if (StringName::configured != '\0') {
               LAB_0010f7e5:if (local_180 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
            if (local_1b0 == 0) goto LAB_0010f805;
         }

         lVar4 = *(long*)( this + 8 );
      }
 else {
         uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x218, uVar2);
         *(undefined8*)( this + 0x228 ) = uVar3;
         lVar4 = *(long*)( this + 8 );
      }

      LAB_0010f72c:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( this + 0x228 );
         plVar5[1] = (long)( this + 0x220 );
         plVar5[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar5;
      }

      this[0x220] = (EditorExportPlugin)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_138);
   }

   if (*(long*)( this + 0x228 ) != 0) {
      local_180 = 0;
      if (local_198 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_180, (CowData*)&local_198);
      }

      local_168 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_168, (CowData*)&local_190);
      uStack_130 = 0;
      uStack_12c = 0;
      if (local_170 != 0) {
         CowData<String>::_ref((CowData<String>*)&uStack_130, (CowData*)&local_170);
      }

      local_78 = local_138;
      local_88 = (CowData<char32_t>*)&local_180;
      pCStack_80 = (CowData<char32_t>*)&local_168;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( this + 0x228 ) )(*(undefined8*)( this + 0x10 ), &local_88, 0);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x218, *(code**)( this + 0x228 ), &local_88, 0);
      }

      CowData<String>::_unref((CowData<String>*)&uStack_130);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   }

   LAB_0010f3fa:CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_190);
   CowData<String>::_unref((CowData<String>*)&local_170);
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CowData<SharedObject>::_copy_on_write() [clone .isra.0] */void CowData<SharedObject>::_copy_on_write(CowData<SharedObject> *this) {
   long lVar1;
   code *pcVar2;
   undefined8 *puVar3;
   CowData *pCVar4;
   long lVar5;
   ulong uVar6;
   CowData<char32_t> *this_00;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar6 = 0x10;
   if (lVar1 * 0x20 != 0) {
      uVar6 = lVar1 * 0x20 - 1;
      uVar6 = uVar6 | uVar6 >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      uVar6 = ( uVar6 | uVar6 >> 0x20 ) + 0x11;
   }

   puVar3 = (undefined8*)Memory::alloc_static(uVar6, false);
   if (puVar3 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }

   lVar5 = 0;
   *puVar3 = 1;
   puVar3[1] = lVar1;
   this_00 = (CowData<char32_t>*)( puVar3 + 2 );
   if (lVar1 != 0) {
      do {
         pCVar4 = (CowData*)( lVar5 * 0x20 + *(long*)this );
         *(undefined8*)this_00 = 0;
         if (*(long*)pCVar4 != 0) {
            CowData<char32_t>::_ref(this_00, pCVar4);
         }

         *(undefined8*)( this_00 + 0x10 ) = 0;
         if (*(long*)( pCVar4 + 0x10 ) != 0) {
            CowData<String>::_ref((CowData<String>*)( this_00 + 0x10 ), pCVar4 + 0x10);
         }

         *(undefined8*)( this_00 + 0x18 ) = 0;
         if (*(long*)( pCVar4 + 0x18 ) != 0) {
            CowData<char32_t>::_ref(this_00 + 0x18, pCVar4 + 0x18);
         }

         lVar5 = lVar5 + 1;
         this_00 = this_00 + 0x20;
      }
 while ( lVar1 != lVar5 );
   }

   _unref(this);
   *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar3 + 2 );
   return;
}
/* Vector<SharedObject>::push_back(SharedObject) [clone .isra.0] */void Vector<SharedObject>::push_back(Vector<SharedObject> *this, CowData *param_2) {
   int iVar1;
   long lVar2;
   CowData<char32_t> *this_00;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar3 = 1;
   }
 else {
      lVar3 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<SharedObject>::resize<false>((CowData<SharedObject>*)( this + 8 ), lVar3);
   if (iVar1 != 0) {
      _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
      return;
   }

   if (*(long*)( this + 8 ) == 0) {
      lVar2 = -1;
      lVar3 = 0;
   }
 else {
      lVar3 = *(long*)( *(long*)( this + 8 ) + -8 );
      lVar2 = lVar3 + -1;
      if (-1 < lVar2) {
         CowData<SharedObject>::_copy_on_write((CowData<SharedObject>*)( this + 8 ));
         this_00 = (CowData<char32_t>*)( lVar2 * 0x20 + *(long*)( this + 8 ) );
         if (*(long*)this_00 != *(long*)param_2) {
            CowData<char32_t>::_ref(this_00, param_2);
         }

         if (*(long*)( this_00 + 0x10 ) != *(long*)( param_2 + 0x10 )) {
            CowData<String>::_ref((CowData<String>*)( this_00 + 0x10 ), param_2 + 0x10);
         }

         if (*(long*)( this_00 + 0x18 ) == *(long*)( param_2 + 0x18 )) {
            return;
         }

         CowData<char32_t>::_ref(this_00 + 0x18, param_2 + 0x18);
         return;
      }

   }

   _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar2, lVar3, "p_index", "size()", "", false, false);
   return;
}
/* EditorExportPlugin::_add_shared_object(SharedObject const&) */void EditorExportPlugin::_add_shared_object(EditorExportPlugin *this, SharedObject *param_1) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58[2];
   undefined8 local_48;
   long local_40[2];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58[0] = 0;
   if (*(long*)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)local_58, (CowData*)param_1);
   }

   local_48 = 0;
   if (*(long*)( param_1 + 0x10 ) != 0) {
      CowData<String>::_ref((CowData<String>*)&local_48, (CowData*)( param_1 + 0x10 ));
   }

   local_40[0] = 0;
   if (*(long*)( param_1 + 0x18 ) == 0) {
      Vector<SharedObject>::push_back((Vector<SharedObject>*)( this + 0x188 ));
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)local_40, (CowData*)( param_1 + 0x18 ));
      lVar2 = local_40[0];
      Vector<SharedObject>::push_back((Vector<SharedObject>*)( this + 0x188 ));
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_40[0] + -0x10 ), false);
         }

      }

   }

   CowData<String>::_unref((CowData<String>*)&local_48);
   if (local_58[0] != 0) {
      LOCK();
      plVar1 = (long*)( local_58[0] + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static((void*)( local_58[0] + -0x10 ), false);
            return;
         }

         goto LAB_0010fca0;
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010fca0:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* EditorExportPlugin::add_shared_object(String const&, Vector<String> const&, String const&) */void EditorExportPlugin::add_shared_object(EditorExportPlugin *this, String *param_1, Vector *param_2, String *param_3) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58[2];
   undefined8 local_48;
   long local_40[2];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58[0] = 0;
   if (*(long*)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)local_58, (CowData*)param_1);
   }

   local_48 = 0;
   if (*(long*)( param_2 + 8 ) != 0) {
      CowData<String>::_ref((CowData<String>*)&local_48, (CowData*)( param_2 + 8 ));
   }

   local_40[0] = 0;
   if (*(long*)param_3 == 0) {
      Vector<SharedObject>::push_back((Vector<SharedObject>*)( this + 0x188 ));
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)local_40, (CowData*)param_3);
      lVar2 = local_40[0];
      Vector<SharedObject>::push_back((Vector<SharedObject>*)( this + 0x188 ));
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_40[0] + -0x10 ), false);
         }

      }

   }

   CowData<String>::_unref((CowData<String>*)&local_48);
   if (local_58[0] != 0) {
      LOCK();
      plVar1 = (long*)( local_58[0] + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static((void*)( local_58[0] + -0x10 ), false);
            return;
         }

         goto LAB_0010fde8;
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010fde8:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CowData<EditorExportPlugin::ExtraFile>::_copy_on_write() [clone .isra.0] */void CowData<EditorExportPlugin::ExtraFile>::_copy_on_write(CowData<EditorExportPlugin::ExtraFile> *this) {
   long lVar1;
   code *pcVar2;
   undefined8 *puVar3;
   CowData *pCVar4;
   ulong uVar5;
   CowData<char32_t> *this_00;
   long lVar6;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   if (lVar1 * 0x20 != 0) {
      uVar5 = lVar1 * 0x20 - 1;
      uVar5 = uVar5 | uVar5 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
   }

   puVar3 = (undefined8*)Memory::alloc_static(uVar5, false);
   if (puVar3 != (undefined8*)0x0) {
      lVar6 = 0;
      *puVar3 = 1;
      puVar3[1] = lVar1;
      this_00 = (CowData<char32_t>*)( puVar3 + 2 );
      if (lVar1 != 0) {
         do {
            pCVar4 = (CowData*)( lVar6 * 0x20 + *(long*)this );
            *(undefined8*)this_00 = 0;
            if (*(long*)pCVar4 != 0) {
               CowData<char32_t>::_ref(this_00, pCVar4);
            }

            *(undefined8*)( this_00 + 0x10 ) = 0;
            if (*(long*)( pCVar4 + 0x10 ) != 0) {
               CowData<unsigned_char>::_ref((CowData<unsigned_char>*)( this_00 + 0x10 ), pCVar4 + 0x10);
            }

            lVar6 = lVar6 + 1;
            *(CowData*)( this_00 + 0x18 ) = pCVar4[0x18];
            this_00 = this_00 + 0x20;
         }
 while ( lVar1 != lVar6 );
      }

      _unref(this);
      *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar3 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* EditorExportPlugin::add_file(String const&, Vector<unsigned char> const&, bool) */void EditorExportPlugin::add_file(EditorExportPlugin *this, String *param_1, Vector *param_2, bool param_3) {
   long *plVar1;
   int iVar2;
   long lVar3;
   CowData<char32_t> *this_00;
   long lVar4;
   long lVar5;
   long in_FS_OFFSET;
   bool bVar6;
   long local_78[2];
   long local_68;
   undefined1 local_60;
   long local_58[2];
   long local_48;
   undefined1 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78[0] = 0;
   local_68 = 0;
   local_60 = 0;
   plVar1 = (long*)( *(long*)( param_2 + 8 ) + -0x10 );
   if (*(long*)( param_2 + 8 ) == 0) {
      if (*(long*)param_1 != 0) goto LAB_0010ffc8;
      local_58[0] = 0;
      local_60 = param_3;
   }
 else {
      do {
         lVar5 = *plVar1;
         if (lVar5 == 0) goto LAB_0010ffbf;
         LOCK();
         lVar4 = *plVar1;
         bVar6 = lVar5 == lVar4;
         if (bVar6) {
            *plVar1 = lVar5 + 1;
            lVar4 = lVar5;
         }

         UNLOCK();
      }
 while ( !bVar6 );
      if (lVar4 != -1) {
         local_68 = *(long*)( param_2 + 8 );
      }

      LAB_0010ffbf:if (*(long*)param_1 != 0) {
         LAB_0010ffc8:CowData<char32_t>::_ref((CowData<char32_t>*)local_78, (CowData*)param_1);
      }

      local_58[0] = 0;
      local_60 = param_3;
      if (local_78[0] != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)local_58, (CowData*)local_78);
      }

   }

   local_48 = 0;
   lVar5 = local_68;
   if (local_68 != 0) {
      CowData<unsigned_char>::_ref((CowData<unsigned_char>*)&local_48, (CowData*)&local_68);
      lVar5 = local_48;
   }

   if (*(long*)( this + 0x1a0 ) == 0) {
      lVar4 = 1;
   }
 else {
      lVar4 = *(long*)( *(long*)( this + 0x1a0 ) + -8 ) + 1;
   }

   local_40 = param_3;
   iVar2 = CowData<EditorExportPlugin::ExtraFile>::resize<false>((CowData<EditorExportPlugin::ExtraFile>*)( this + 0x1a0 ), lVar4);
   if (iVar2 == 0) {
      if (*(long*)( this + 0x1a0 ) == 0) {
         lVar3 = -1;
         lVar4 = 0;
      }
 else {
         lVar4 = *(long*)( *(long*)( this + 0x1a0 ) + -8 );
         lVar3 = lVar4 + -1;
         if (-1 < lVar3) {
            CowData<EditorExportPlugin::ExtraFile>::_copy_on_write((CowData<EditorExportPlugin::ExtraFile>*)( this + 0x1a0 ));
            this_00 = (CowData<char32_t>*)( lVar3 * 0x20 + *(long*)( this + 0x1a0 ) );
            if (*(long*)this_00 != local_58[0]) {
               CowData<char32_t>::_ref(this_00, (CowData*)local_58);
            }

            if (lVar5 != *(long*)( this_00 + 0x10 )) {
               CowData<unsigned_char>::_ref((CowData<unsigned_char>*)( this_00 + 0x10 ), (CowData*)&local_48);
            }

            this_00[0x18] = (CowData<char32_t>)param_3;
            goto LAB_001100b2;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar4, "p_index", "size()", "", false, false);
   }
 else {
      _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   }

   LAB_001100b2:if (lVar5 != 0) {
      LOCK();
      plVar1 = (long*)( lVar5 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_48 + -0x10 ), false);
      }

   }

   if (local_58[0] != 0) {
      LOCK();
      plVar1 = (long*)( local_58[0] + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_58[0] + -0x10 ), false);
      }

   }

   if (local_68 != 0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_68 + -0x10 ), false);
      }

   }

   if (local_78[0] != 0) {
      LOCK();
      plVar1 = (long*)( local_78[0] + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static((void*)( local_78[0] + -0x10 ), false);
            return;
         }

         goto LAB_00110242;
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00110242:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
   return (uint)CONCAT71(0x11af, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11af, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
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
/* EditorExportPlugin::is_class_ptr(void*) const */uint EditorExportPlugin::is_class_ptr(EditorExportPlugin *this, void *param_1) {
   return (uint)CONCAT71(0x11af, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11ae, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11af, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* EditorExportPlugin::_getv(StringName const&, Variant&) const */undefined8 EditorExportPlugin::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorExportPlugin::_setv(StringName const&, Variant const&) */undefined8 EditorExportPlugin::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorExportPlugin::_validate_propertyv(PropertyInfo&) const */void EditorExportPlugin::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* EditorExportPlugin::_property_can_revertv(StringName const&) const */undefined8 EditorExportPlugin::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* EditorExportPlugin::_property_get_revertv(StringName const&, Variant&) const */undefined8 EditorExportPlugin::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorExportPlugin::_notificationv(int, bool) */void EditorExportPlugin::_notificationv(int param_1, bool param_2) {
   return;
}
/* MethodBindTRC<Ref<EditorExportPlatform>>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Ref<EditorExportPlatform>>::_gen_argument_type(int param_1) {
   return 0x18;
}
/* MethodBindTRC<Ref<EditorExportPlatform>>::get_argument_meta(int) const */undefined8 MethodBindTRC<Ref<EditorExportPlatform>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<Ref<EditorExportPreset>>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Ref<EditorExportPreset>>::_gen_argument_type(int param_1) {
   return 0x18;
}
/* MethodBindTRC<Ref<EditorExportPreset>>::get_argument_meta(int) const */undefined8 MethodBindTRC<Ref<EditorExportPreset>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<Variant, StringName const&>::_gen_argument_type(int) const */byte MethodBindTRC<Variant,StringName_const&>::_gen_argument_type(MethodBindTRC<Variant,StringName_const&> *this, int param_1) {
   return -(param_1 == 0) & 0x15;
}
/* MethodBindTRC<Variant, StringName const&>::get_argument_meta(int) const */undefined8 MethodBindTRC<Variant,StringName_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<>::_gen_argument_type(int) const */undefined8 MethodBindT<>::_gen_argument_type(int param_1) {
   return 0;
}
/* MethodBindT<>::_gen_argument_type_info(int) const */undefined8 MethodBindT<>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   *(undefined4*)CONCAT44(in_register_0000003c, param_1) = 0;
   *(undefined4*)( CONCAT44(in_register_0000003c, param_1) + 0x18 ) = 0;
   *(undefined8*)( CONCAT44(in_register_0000003c, param_1) + 0x20 ) = 0;
   *(undefined4*)( CONCAT44(in_register_0000003c, param_1) + 0x28 ) = 6;
   *(undefined1(*) [16])( CONCAT44(in_register_0000003c, param_1) + 8 ) = (undefined1[16])0x0;
   return CONCAT44(in_register_0000003c, param_1);
}
/* MethodBindT<>::get_argument_meta(int) const */undefined8 MethodBindT<>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<String const&, Vector<unsigned char> const&, bool>::get_argument_meta(int) const */undefined8 MethodBindT<String_const&,Vector<unsigned_char>const&,bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<String const&>::_gen_argument_type(int) const */long MethodBindT<String_const&>::_gen_argument_type(MethodBindT<String_const&> *this, int param_1) {
   return ( ulong )(param_1 == 0) << 2;
}
/* MethodBindT<String const&>::get_argument_meta(int) const */undefined8 MethodBindT<String_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<String const&, Vector<String> const&, String const&>::get_argument_meta(int) const */undefined8 MethodBindT<String_const&,Vector<String>const&,String_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_0011a878;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_0011a878;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* MethodBindT<String const&, Vector<String> const&, String const&>::~MethodBindT() */void MethodBindT<String_const&,Vector<String>const&,String_const&>::~MethodBindT(MethodBindT<String_const&,Vector<String>const&,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011abf8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<String const&, Vector<String> const&, String const&>::~MethodBindT() */void MethodBindT<String_const&,Vector<String>const&,String_const&>::~MethodBindT(MethodBindT<String_const&,Vector<String>const&,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011abf8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<String const&, Vector<unsigned char> const&, bool>::~MethodBindT() */void MethodBindT<String_const&,Vector<unsigned_char>const&,bool>::~MethodBindT(MethodBindT<String_const&,Vector<unsigned_char>const&,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011acb8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<String const&, Vector<unsigned char> const&, bool>::~MethodBindT() */void MethodBindT<String_const&,Vector<unsigned_char>const&,bool>::~MethodBindT(MethodBindT<String_const&,Vector<unsigned_char>const&,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011acb8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<String const&>::~MethodBindT() */void MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011ac58;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<String const&>::~MethodBindT() */void MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011ac58;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011ad18;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011ad18;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Variant, StringName const&>::~MethodBindTRC() */void MethodBindTRC<Variant,StringName_const&>::~MethodBindTRC(MethodBindTRC<Variant,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011ad78;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Variant, StringName const&>::~MethodBindTRC() */void MethodBindTRC<Variant,StringName_const&>::~MethodBindTRC(MethodBindTRC<Variant,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011ad78;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Ref<EditorExportPreset>>::~MethodBindTRC() */void MethodBindTRC<Ref<EditorExportPreset>>::~MethodBindTRC(MethodBindTRC<Ref<EditorExportPreset>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011add8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Ref<EditorExportPreset>>::~MethodBindTRC() */void MethodBindTRC<Ref<EditorExportPreset>>::~MethodBindTRC(MethodBindTRC<Ref<EditorExportPreset>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011add8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Ref<EditorExportPlatform>>::~MethodBindTRC() */void MethodBindTRC<Ref<EditorExportPlatform>>::~MethodBindTRC(MethodBindTRC<Ref<EditorExportPlatform>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011ae38;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Ref<EditorExportPlatform>>::~MethodBindTRC() */void MethodBindTRC<Ref<EditorExportPlatform>>::~MethodBindTRC(MethodBindTRC<Ref<EditorExportPlatform>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011ae38;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<String const&, Vector<unsigned char> const&, bool>::_gen_argument_type(int) const */undefined8 MethodBindT<String_const&,Vector<unsigned_char>const&,bool>::_gen_argument_type(MethodBindT<String_const&,Vector<unsigned_char>const&,bool> *this, int param_1) {
   undefined8 uVar1;
   uVar1 = 0;
   if (( ( (uint)param_1 < 3 ) && ( uVar1 = 4 ),param_1 != 0 )) {
      uVar1 = 0x1d;
   }

   return uVar1;
}
/* MethodBindT<String const&, Vector<String> const&, String const&>::_gen_argument_type(int) const
    */undefined8 MethodBindT<String_const&,Vector<String>const&,String_const&>::_gen_argument_type(MethodBindT<String_const&,Vector<String>const&,String_const&> *this, int param_1) {
   undefined8 uVar1;
   uVar1 = 0;
   if (( (uint)param_1 < 3 ) && ( uVar1 = param_1 == 1 )) {
      uVar1 = 0x22;
   }

   return uVar1;
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
/* CowData<SharedObject>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<SharedObject>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<EditorExportPlugin::ExtraFile>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<EditorExportPlugin::ExtraFile>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* EditorExportPlugin::_get_class_namev() const */undefined8 *EditorExportPlugin::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00110f93:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00110f93;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorExportPlugin");
         goto LAB_00110ffe;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorExportPlugin");
   LAB_00110ffe:return &_get_class_namev();
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
         LAB_00111073:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00111073;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_001110de;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_001110de:return &_get_class_namev();
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
/* EditorExportPlugin::get_class() const */void EditorExportPlugin::get_class(void) {
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
/* MethodBindTRC<Ref<EditorExportPreset>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Ref<EditorExportPreset>>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = "EditorExportPreset";
   local_40 = 0x12;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 0x18;
   puVar3[6] = 0x11;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] != 0x11) {
         StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
         goto LAB_001113b0;
      }

   }

   StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
   if (*(char**)( puVar3 + 4 ) == local_48) {
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::unref();
      *(char**)( puVar3 + 4 ) = local_48;
   }

   LAB_001113b0:lVar2 = local_58;
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
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<EditorExportPlatform>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Ref<EditorExportPlatform>>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = "EditorExportPlatform";
   local_40 = 0x14;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 0x18;
   puVar3[6] = 0x11;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] != 0x11) {
         StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
         goto LAB_00111550;
      }

   }

   StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
   if (*(char**)( puVar3 + 4 ) == local_48) {
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::unref();
      *(char**)( puVar3 + 4 ) = local_48;
   }

   LAB_00111550:lVar2 = local_58;
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
                  if (lVar3 == 0) goto LAB_0011169f;
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

      LAB_0011169f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00111753;
   }

   cVar6 = String::operator ==(param_1, "RefCounted");
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

         cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00111753;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar8 = String::operator ==(param_1, "Object");
         return uVar8;
      }

   }
 else {
      LAB_00111753:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorExportPlugin::is_class(String const&) const */undefined8 EditorExportPlugin::is_class(EditorExportPlugin *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_001118ff;
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

      LAB_001118ff:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_001119b3;
   }

   cVar5 = String::operator ==(param_1, "EditorExportPlugin");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_001119b3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
            if (pvVar5 == (void*)0x0) goto LAB_00111b64;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_00111b64:if (*(long*)this != 0) {
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
   local_48 = &_LC13;
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

         goto joined_r0x001120dc;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x001120dc:local_58 = lVar2;
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
/* GetTypeInfo<unsigned int, void>::get_class_info() */GetTypeInfo<unsigned_int,void> * __thiscall
GetTypeInfo<unsigned_int,void>::get_class_info(GetTypeInfo<unsigned_int,void> *this){
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
   local_48 = &_LC13;
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

         goto joined_r0x0011225c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0011225c:local_58 = lVar2;
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
/* GetTypeInfo<unsigned long, void>::get_class_info() */GetTypeInfo<unsigned_long,void> * __thiscall
GetTypeInfo<unsigned_long,void>::get_class_info(GetTypeInfo<unsigned_long,void> *this){
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
   local_48 = &_LC13;
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

         goto joined_r0x001123dc;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x001123dc:local_58 = lVar2;
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
   local_48 = &_LC13;
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

         goto joined_r0x0011255c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0011255c:local_58 = lVar2;
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
/* GetTypeInfo<Dictionary, void>::get_class_info() */GetTypeInfo<Dictionary,void> * __thiscall
GetTypeInfo<Dictionary,void>::get_class_info(GetTypeInfo<Dictionary,void> *this){
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
   local_48 = &_LC13;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 0x1b;
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

         goto joined_r0x001126dc;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x001126dc:local_58 = lVar2;
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
   local_48 = &_LC13;
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

         goto joined_r0x0011285c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0011285c:local_58 = lVar2;
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
   local_48 = &_LC13;
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

         goto joined_r0x001129dc;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x001129dc:local_58 = lVar2;
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

         goto joined_r0x00112b3c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_30);
   lVar2 = local_38;
   joined_r0x00112b3c:local_38 = lVar2;
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
/* GetTypeInfo<Ref<Resource>, void>::get_class_info() */GetTypeInfo<Ref<Resource>,void> * __thiscall
GetTypeInfo<Ref<Resource>,void>::get_class_info(GetTypeInfo<Ref<Resource>,void> *this){
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
   local_48 = "Resource";
   local_40 = 8;
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
         goto LAB_001130c0;
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

   LAB_001130c0:lVar2 = local_58;
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
/* GetTypeInfo<Ref<EditorExportPlatform> const&, void>::get_class_info() */GetTypeInfo<Ref<EditorExportPlatform>const&,void> * __thiscall
GetTypeInfo<Ref<EditorExportPlatform>const&,void>::get_class_info
          (GetTypeInfo<Ref<EditorExportPlatform>const&,void> *this){
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
   local_48 = "EditorExportPlatform";
   local_40 = 0x14;
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
         goto LAB_00113250;
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

   LAB_00113250:lVar2 = local_58;
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
/* GetTypeInfo<Ref<Resource> const&, void>::get_class_info() */GetTypeInfo<Ref<Resource>const&,void> * __thiscall
GetTypeInfo<Ref<Resource>const&,void>::get_class_info(GetTypeInfo<Ref<Resource>const&,void> *this){
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
   local_48 = "Resource";
   local_40 = 8;
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
         goto LAB_001133e0;
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

   LAB_001133e0:lVar2 = local_58;
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
/* GetTypeInfo<Node*, void>::get_class_info() */GetTypeInfo<Node*,void> * __thiscall
GetTypeInfo<Node*,void>::get_class_info(GetTypeInfo<Node*,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   bool bVar3;
   long local_40;
   undefined *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_30 = 4;
   local_38 = &_LC20;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   *(undefined4*)this = 0x18;
   *(undefined8*)( this + 8 ) = 0;
   StringName::StringName((StringName*)( this + 0x10 ), (StringName*)&local_38);
   bVar3 = StringName::configured != '\0';
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x28 ) = 6;
   if (( bVar3 ) && ( local_38 != (undefined*)0x0 )) {
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
/* List<EditorExportPlatform::ExportOption, DefaultAllocator>::~List() */void List<EditorExportPlatform::ExportOption,DefaultAllocator>::~List(List<EditorExportPlatform::ExportOption,DefaultAllocator> *this) {
   long *plVar1;
   void *pvVar2;
   long lVar3;
   undefined8 *puVar4;
   puVar4 = *(undefined8**)this;
   if (puVar4 == (undefined8*)0x0) {
      return;
   }

   do {
      pvVar2 = (void*)*puVar4;
      if (pvVar2 == (void*)0x0) {
         if (*(int*)( puVar4 + 2 ) != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(undefined8**)( (long)pvVar2 + 0x60 ) == puVar4) {
         *puVar4 = *(undefined8*)( (long)pvVar2 + 0x50 );
         if (pvVar2 == (void*)puVar4[1]) {
            puVar4[1] = *(undefined8*)( (long)pvVar2 + 0x58 );
         }

         if (*(long*)( (long)pvVar2 + 0x58 ) != 0) {
            *(undefined8*)( *(long*)( (long)pvVar2 + 0x58 ) + 0x50 ) = *(undefined8*)( (long)pvVar2 + 0x50 );
         }

         if (*(long*)( (long)pvVar2 + 0x50 ) != 0) {
            *(undefined8*)( *(long*)( (long)pvVar2 + 0x50 ) + 0x58 ) = *(undefined8*)( (long)pvVar2 + 0x58 );
         }

         if (Variant::needs_deinit[*(int*)( (long)pvVar2 + 0x30 )] != '\0') {
            Variant::_clear_internal();
         }

         if (*(long*)( (long)pvVar2 + 0x20 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( (long)pvVar2 + 0x20 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar3 = *(long*)( (long)pvVar2 + 0x20 );
               *(undefined8*)( (long)pvVar2 + 0x20 ) = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
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
               lVar3 = *(long*)( (long)pvVar2 + 8 );
               *(undefined8*)( (long)pvVar2 + 8 ) = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         Memory::free_static(pvVar2, false);
         *(int*)( puVar4 + 2 ) = *(int*)( puVar4 + 2 ) + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      puVar4 = *(undefined8**)this;
   }
 while ( *(int*)( puVar4 + 2 ) != 0 );
   Memory::free_static(puVar4, false);
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
/* WARNING: Removing unreachable block (ram,0x00113980) *//* WARNING: Removing unreachable block (ram,0x00113b15) *//* WARNING: Removing unreachable block (ram,0x00113b21) *//* String vformat<String, String>(String const&, String const, String const) */undefined8 *vformat<String,String>(undefined8 *param_1, bool *param_2, String *param_3, String *param_4) {
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
/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   undefined4 *puVar4;
   undefined7 in_register_00000031;
   List *pLVar5;
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
   pLVar5 = (List*)CONCAT71(in_register_00000031, param_2);
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
      LAB_00113ce5:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00113ce5;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar5;
         local_68 = local_80;
         goto joined_r0x00113d07;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar5;
   joined_r0x00113d07:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])pLVar5 = pauVar3;
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
   plVar1 = *(long**)pLVar5;
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

   StringName::StringName((StringName*)&local_78, "RefCounted", false);
   ClassDB::get_property_list((StringName*)&local_78, pLVar5, true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorExportPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void EditorExportPlugin::_get_property_listv(EditorExportPlugin *this, List *param_1, bool param_2) {
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
   local_78 = "EditorExportPlugin";
   local_70 = 0x12;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "EditorExportPlugin";
   local_98 = 0;
   local_70 = 0x12;
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
      LAB_0011408d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0011408d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x001140af;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x001140af:if (lVar2 == 0) {
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
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "EditorExportPlugin", false);
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
/* MethodBindTRC<Variant, StringName const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Variant,StringName_const&>::_gen_argument_type_info(int param_1) {
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
   undefined8 local_98;
   undefined1 local_90[16];
   undefined8 local_80;
   undefined8 local_78;
   undefined4 local_70;
   undefined *local_68;
   undefined8 local_60;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX == 0) {
      local_98 = 0;
      local_90 = (undefined1[16])0x0;
      local_70 = 6;
      local_80 = 0;
      local_78 = 0;
      local_a0 = 0;
      local_a8 = 0;
      local_68 = &_LC13;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_a8);
      local_b0 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_68, 0x15, (CowData<char32_t>*)&local_b0, 0, (StrRange*)&local_a8, 6, &local_a0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
         StringName::unref();
      }

      PropertyInfo::operator =((PropertyInfo*)&local_98, (PropertyInfo*)&local_68);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
      uVar2 = local_90._0_8_;
      uVar3 = local_90._8_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_90._8_8_;
      local_90 = auVar1 << 0x40;
      *puVar4 = (undefined4)local_98;
      *(undefined8*)( puVar4 + 2 ) = uVar2;
      *(undefined8*)( puVar4 + 4 ) = uVar3;
      puVar4[6] = (undefined4)local_80;
      *(undefined8*)( puVar4 + 8 ) = local_78;
      puVar4[10] = local_70;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
   }
 else {
      *puVar4 = 0;
      puVar4[6] = 0;
      *(undefined8*)( puVar4 + 8 ) = 0;
      puVar4[10] = 0x20006;
      *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
      local_68 = (undefined*)0x0;
      local_98 = 0;
      local_a0 = 0;
      StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
         StringName::unref();
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<EditorExportPlugin, String const&, Vector<String> const&, String
   const&>(void (EditorExportPlugin::*)(String const&, Vector<String> const&, String const&)) */MethodBind *create_method_bind<EditorExportPlugin,String_const&,Vector<String>const&,String_const&>(_func_void_String_ptr_Vector_ptr_String_ptr *param_1) {
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
   *(_func_void_String_ptr_Vector_ptr_String_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011abf8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 3;
   local_40 = 0;
   local_38 = "EditorExportPlugin";
   local_30 = 0x12;
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
/* MethodBind* create_method_bind<EditorExportPlugin, String const&>(void
   (EditorExportPlugin::*)(String const&)) */MethodBind *create_method_bind<EditorExportPlugin,String_const&>(_func_void_String_ptr *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011ac58;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "EditorExportPlugin";
   local_30 = 0x12;
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
/* MethodBind* create_method_bind<EditorExportPlugin, String const&, Vector<unsigned char> const&,
   bool>(void (EditorExportPlugin::*)(String const&, Vector<unsigned char> const&, bool)) */MethodBind *create_method_bind<EditorExportPlugin,String_const&,Vector<unsigned_char>const&,bool>(_func_void_String_ptr_Vector_ptr_bool *param_1) {
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
   *(_func_void_String_ptr_Vector_ptr_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011acb8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 3;
   local_40 = 0;
   local_38 = "EditorExportPlugin";
   local_30 = 0x12;
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
/* MethodBind* create_method_bind<EditorExportPlugin>(void (EditorExportPlugin::*)()) */MethodBind *create_method_bind<EditorExportPlugin>(_func_void *param_1) {
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
   *(_func_void**)( this + 0x58 ) = param_1;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   *(undefined***)this = &PTR__gen_argument_type_0011ad18;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "EditorExportPlugin";
   local_30 = 0x12;
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
/* MethodBind* create_method_bind<EditorExportPlugin, Variant, StringName const&>(Variant
   (EditorExportPlugin::*)(StringName const&) const) */MethodBind *create_method_bind<EditorExportPlugin,Variant,StringName_const&>(_func_Variant_StringName_ptr *param_1) {
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
   *(_func_Variant_StringName_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011ad78;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "EditorExportPlugin";
   local_30 = 0x12;
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
/* MethodBind* create_method_bind<EditorExportPlugin,
   Ref<EditorExportPreset>>(Ref<EditorExportPreset> (EditorExportPlugin::*)() const) */MethodBind *create_method_bind<EditorExportPlugin,Ref<EditorExportPreset>>(_func_Ref *param_1) {
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
   *(_func_Ref**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011add8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "EditorExportPlugin";
   local_30 = 0x12;
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
/* MethodBind* create_method_bind<EditorExportPlugin,
   Ref<EditorExportPlatform>>(Ref<EditorExportPlatform> (EditorExportPlugin::*)() const) */MethodBind *create_method_bind<EditorExportPlugin,Ref<EditorExportPlatform>>(_func_Ref *param_1) {
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
   *(_func_Ref**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011ae38;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "EditorExportPlugin";
   local_30 = 0x12;
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
      LAB_00115150:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar10 == 0) goto LAB_00115150;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_00115029:if (lVar10 != lVar7) {
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
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_00115029;
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
      goto LAB_001151a6;
   }

   if (lVar10 == lVar7) {
      LAB_001150cf:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_001151a6:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_001150ba;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_001150cf;
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
   LAB_001150ba:puVar9[-1] = param_1;
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
      LAB_00115470:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar8 == 0) goto LAB_00115470;
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
            goto LAB_00115381;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_00115381:puVar7[-1] = param_1;
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
/* EditorExportPlugin::_initialize_classv() */void EditorExportPlugin::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
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
      local_48 = "EditorExportPlugin";
      local_60 = 0;
      local_40 = 0x12;
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
      _bind_methods();
      initialize_class()::initialized =
      '\x01';
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CowData<SharedObject>::_unref() */void CowData<SharedObject>::_unref(CowData<SharedObject> *this) {
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
               if (plVar6[3] != 0) {
                  LOCK();
                  plVar2 = (long*)( plVar6[3] + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = plVar6[3];
                     plVar6[3] = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               CowData<String>::_unref((CowData<String>*)( plVar6 + 2 ));
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
               plVar6 = plVar6 + 4;
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
/* CowData<SharedObject>::_realloc(long) */undefined8 CowData<SharedObject>::_realloc(CowData<SharedObject> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<SharedObject>::resize<false>(long) */undefined8 CowData<SharedObject>::resize<false>(CowData<SharedObject> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   undefined8 uVar5;
   undefined8 *puVar6;
   long *plVar7;
   long lVar8;
   long lVar9;
   ulong uVar10;
   long lVar11;
   ulong uVar12;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar8 = 0;
      lVar9 = 0;
   }
 else {
      lVar8 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar8) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar9 = lVar8 * 0x20;
      if (lVar9 != 0) {
         uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
         uVar10 = uVar10 | uVar10 >> 2;
         uVar10 = uVar10 | uVar10 >> 4;
         uVar10 = uVar10 | uVar10 >> 8;
         uVar10 = uVar10 | uVar10 >> 0x10;
         lVar9 = ( uVar10 | uVar10 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x20 == 0) {
      LAB_00115b30:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar10 = param_1 * 0x20 - 1;
   uVar10 = uVar10 >> 1 | uVar10;
   uVar10 = uVar10 | uVar10 >> 2;
   uVar10 = uVar10 | uVar10 >> 4;
   uVar10 = uVar10 | uVar10 >> 8;
   uVar10 = uVar10 | uVar10 >> 0x10;
   uVar10 = uVar10 | uVar10 >> 0x20;
   lVar11 = uVar10 + 1;
   if (lVar11 == 0) goto LAB_00115b30;
   uVar12 = param_1;
   if (param_1 <= lVar8) {
      while (lVar8 = *(long*)this,lVar8 != 0) {
         if (*(ulong*)( lVar8 + -8 ) <= uVar12) {
            if (lVar11 != lVar9) {
               uVar5 = _realloc(this, lVar11);
               if ((int)uVar5 != 0) {
                  return uVar5;
               }

               lVar8 = *(long*)this;
               if (lVar8 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

            }

            *(long*)( lVar8 + -8 ) = param_1;
            return 0;
         }

         plVar7 = (long*)( lVar8 + uVar12 * 0x20 );
         if (plVar7[3] != 0) {
            LOCK();
            plVar1 = (long*)( plVar7[3] + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar8 = plVar7[3];
               plVar7[3] = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
            }

         }

         CowData<String>::_unref((CowData<String>*)( plVar7 + 2 ));
         if (*plVar7 != 0) {
            LOCK();
            plVar1 = (long*)( *plVar7 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar8 = *plVar7;
               *plVar7 = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
            }

         }

         uVar12 = uVar12 + 1;
      }
;
      goto LAB_00115b86;
   }

   if (lVar11 == lVar9) {
      LAB_00115aa3:puVar6 = *(undefined8**)this;
      if (puVar6 == (undefined8*)0x0) {
         LAB_00115b86:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar8 = puVar6[-1];
      if (param_1 <= lVar8) goto LAB_001159bc;
   }
 else {
      if (lVar8 != 0) {
         uVar5 = _realloc(this, lVar11);
         if ((int)uVar5 != 0) {
            return uVar5;
         }

         goto LAB_00115aa3;
      }

      puVar3 = (undefined8*)Memory::alloc_static(uVar10 + 0x11, false);
      if (puVar3 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar6 = puVar3 + 2;
      *puVar3 = 1;
      puVar3[1] = 0;
      *(undefined8**)this = puVar6;
      lVar8 = 0;
   }

   puVar3 = puVar6 + lVar8 * 4;
   do {
      *puVar3 = 0;
      puVar4 = puVar3 + 4;
      *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
      puVar3 = puVar4;
   }
 while ( puVar4 != puVar6 + param_1 * 4 );
   LAB_001159bc:puVar6[-1] = param_1;
   return 0;
}
/* CowData<EditorExportPlugin::ExtraFile>::_unref() */void CowData<EditorExportPlugin::ExtraFile>::_unref(CowData<EditorExportPlugin::ExtraFile> *this) {
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
               if (plVar6[2] != 0) {
                  LOCK();
                  plVar2 = (long*)( plVar6[2] + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = plVar6[2];
                     plVar6[2] = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

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
               plVar6 = plVar6 + 4;
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
/* EditorExportPlugin::~EditorExportPlugin() */void EditorExportPlugin::~EditorExportPlugin(EditorExportPlugin *this) {
   Object *pOVar1;
   char cVar2;
   bool bVar3;
   bVar3 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_0011a9d8;
   if (bVar3) {
      if (*(long*)( this + 0x440 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00115fc0;
      }

      if (*(long*)( this + 0x428 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00115fc0;
      }

      if (*(long*)( this + 0x410 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00115fc0;
      }

      if (*(long*)( this + 0x3f8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00115fc0;
      }

      if (*(long*)( this + 0x3e0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00115fc0;
      }

      if (*(long*)( this + 0x3c8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00115fc0;
      }

      if (*(long*)( this + 0x3b0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00115fc0;
      }

      if (*(long*)( this + 0x398 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00115fc0;
      }

      if (*(long*)( this + 0x380 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00115fc0;
      }

      if (*(long*)( this + 0x368 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00115fc0;
      }

      if (*(long*)( this + 0x350 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00115fc0;
      }

      if (*(long*)( this + 0x338 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00115fc0;
      }

      if (*(long*)( this + 800 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00115fc0;
      }

      if (*(long*)( this + 0x308 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00115fc0;
      }

      if (*(long*)( this + 0x2f0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00115fc0;
      }

      if (*(long*)( this + 0x2d8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00115fc0;
      }

      if (*(long*)( this + 0x2c0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00115fc0;
      }

      if (*(long*)( this + 0x2a8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00115fc0;
      }

      if (*(long*)( this + 0x290 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00115fc0;
      }

      if (*(long*)( this + 0x278 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00115fc0;
      }

      if (*(long*)( this + 0x260 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00115fc0;
      }

      if (*(long*)( this + 0x248 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00115fc0;
      }

      if (*(long*)( this + 0x230 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00115fc0;
      }

      if (*(long*)( this + 0x218 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00115fc0:CowData<String>::_unref((CowData<String>*)( this + 0x210 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x200 ));
   CowData<String>::_unref((CowData<String>*)( this + 0x1f8 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x1e8 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x1e0 ));
   for (int i = 0; i < 3; i++) {
      CowData<String>::_unref((CowData<String>*)( this + ( -16*i + 472 ) ));
   }

   CowData<EditorExportPlugin::ExtraFile>::_unref((CowData<EditorExportPlugin::ExtraFile>*)( this + 0x1a0 ));
   CowData<SharedObject>::_unref((CowData<SharedObject>*)( this + 400 ));
   if (*(long*)( this + 0x180 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x180 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   *(undefined***)this = &PTR__initialize_classv_0011a878;
   Object::~Object((Object*)this);
   return;
}
/* EditorExportPlugin::~EditorExportPlugin() */void EditorExportPlugin::~EditorExportPlugin(EditorExportPlugin *this) {
   ~EditorExportPlugin(this)
   ;;
   operator_delete(this, 0x458);
   return;
}
/* CowData<EditorExportPlugin::ExtraFile>::_realloc(long) */undefined8 CowData<EditorExportPlugin::ExtraFile>::_realloc(CowData<EditorExportPlugin::ExtraFile> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<EditorExportPlugin::ExtraFile>::resize<false>(long) */undefined8 CowData<EditorExportPlugin::ExtraFile>::resize<false>(CowData<EditorExportPlugin::ExtraFile> *this, long param_1) {
   long *plVar1;
   long *plVar2;
   code *pcVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   undefined8 uVar6;
   long lVar7;
   undefined8 *puVar8;
   long lVar9;
   ulong uVar10;
   long lVar11;
   ulong uVar12;
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
      lVar9 = lVar7 * 0x20;
      if (lVar9 != 0) {
         uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
         uVar10 = uVar10 | uVar10 >> 2;
         uVar10 = uVar10 | uVar10 >> 4;
         uVar10 = uVar10 | uVar10 >> 8;
         uVar10 = uVar10 | uVar10 >> 0x10;
         lVar9 = ( uVar10 | uVar10 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x20 == 0) {
      LAB_00116400:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar10 = param_1 * 0x20 - 1;
   uVar10 = uVar10 >> 1 | uVar10;
   uVar10 = uVar10 | uVar10 >> 2;
   uVar10 = uVar10 | uVar10 >> 4;
   uVar10 = uVar10 | uVar10 >> 8;
   uVar10 = uVar10 | uVar10 >> 0x10;
   uVar10 = uVar10 | uVar10 >> 0x20;
   lVar11 = uVar10 + 1;
   if (lVar11 == 0) goto LAB_00116400;
   uVar12 = param_1;
   if (param_1 <= lVar7) {
      while (lVar7 = *(long*)this,lVar7 != 0) {
         if (*(ulong*)( lVar7 + -8 ) <= uVar12) {
            if (lVar11 != lVar9) {
               uVar6 = _realloc(this, lVar11);
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

         plVar2 = (long*)( lVar7 + uVar12 * 0x20 );
         if (plVar2[2] != 0) {
            LOCK();
            plVar1 = (long*)( plVar2[2] + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar7 = plVar2[2];
               plVar2[2] = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
            }

         }

         if (*plVar2 != 0) {
            LOCK();
            plVar1 = (long*)( *plVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar7 = *plVar2;
               *plVar2 = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
            }

         }

         uVar12 = uVar12 + 1;
      }
;
      goto LAB_00116456;
   }

   if (lVar11 == lVar9) {
      LAB_0011636b:puVar8 = *(undefined8**)this;
      if (puVar8 == (undefined8*)0x0) {
         LAB_00116456:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar7 = puVar8[-1];
      if (param_1 <= lVar7) goto LAB_0011628c;
   }
 else {
      if (lVar7 != 0) {
         uVar6 = _realloc(this, lVar11);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

         goto LAB_0011636b;
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

   puVar4 = puVar8 + lVar7 * 4;
   do {
      *puVar4 = 0;
      puVar5 = puVar4 + 4;
      puVar4[2] = 0;
      *(undefined1*)( puVar4 + 3 ) = 0;
      puVar4 = puVar5;
   }
 while ( puVar5 != puVar8 + param_1 * 4 );
   LAB_0011628c:puVar8[-1] = param_1;
   return 0;
}
/* WARNING: Removing unreachable block (ram,0x00116578) *//* WARNING: Removing unreachable block (ram,0x0011670d) *//* WARNING: Removing unreachable block (ram,0x00116719) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
/* MethodBindTRC<Ref<EditorExportPlatform>>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<Ref<EditorExportPlatform>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Object *pOVar2;
   char cVar3;
   Variant *pVVar4;
   long *plVar5;
   undefined4 in_register_00000014;
   long *plVar6;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   Object *local_58;
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

      if (local_58 == (Object*)*plVar5) {
         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = (Object*)0x116768;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC113, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00116960;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
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

         ( *(code*)pVVar4 )(&local_58);
         Variant::Variant((Variant*)local_48, local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         if (local_58 != (Object*)0x0) {
            cVar3 = RefCounted::unreference();
            pOVar2 = local_58;
            if (cVar3 != '\0') {
               cVar3 = predelete_handler(local_58);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

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

   LAB_00116960:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Variant, StringName const&>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindTRC<Variant,StringName_const&>::validated_call(MethodBindTRC<Variant,StringName_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_58 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00116c2d;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar1 )((Variant*)local_48, param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
   Variant::operator =(param_3, (Variant*)local_48);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   LAB_00116c2d:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Variant, StringName const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Variant,StringName_const&>::ptrcall(MethodBindTRC<Variant,StringName_const&> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_58 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00116e4b;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar1 )((Variant*)local_48, param_1 + *(long*)( this + 0x60 ), *param_2);
   Variant::operator =((Variant*)param_3, (Variant*)local_48);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   LAB_00116e4b:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   long *plVar4;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (plVar4[1] == 0) {
         plVar3 = (long*)plVar4[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
         }

      }
 else {
         plVar3 = (long*)( plVar4[1] + 0x20 );
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
         _err_print_error(&_LC113, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00117110;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
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

         ( *(code*)pVVar2 )();
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

   LAB_00117110:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0011748f;
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
      /* WARNING: Could not recover jumptable at 0x00117336. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_0011748f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */void MethodBindT<>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
         local_40 = 0x35;
         local_50 = 0;
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

         goto LAB_0011764f;
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
      /* WARNING: Could not recover jumptable at 0x001174f6. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_0011764f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<String const&, Vector<unsigned char> const&, bool>::validated_call(Object*, Variant
   const**, Variant*) const */void MethodBindT<String_const&,Vector<unsigned_char>const&,bool>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0011782f;
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
      /* WARNING: Could not recover jumptable at 0x001176d7. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8, *(long*)( *(long*)( param_3 + 8 ) + 8 ) + 0x10, *(undefined1*)( *(long*)( param_3 + 0x10 ) + 8 ));
      return;
   }

   LAB_0011782f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<String const&, Vector<unsigned char> const&, bool>::ptrcall(Object*, void const**,
   void*) const */void MethodBindT<String_const&,Vector<unsigned_char>const&,bool>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00117a21;
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
      /* WARNING: Could not recover jumptable at 0x001178ad. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3, *(undefined8*)( (long)param_3 + 8 ), **(char**)( (long)param_3 + 0x10 ) != '\0');
      return;
   }

   LAB_00117a21:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<String const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<String_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00117c01;
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
      /* WARNING: Could not recover jumptable at 0x00117a8d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
      return;
   }

   LAB_00117c01:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<String const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<String_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00117de1;
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
      /* WARNING: Could not recover jumptable at 0x00117c69. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }

   LAB_00117de1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<String const&, Vector<String> const&, String const&>::validated_call(Object*, Variant
   const**, Variant*) const */void MethodBindT<String_const&,Vector<String>const&,String_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00117fbf;
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
      /* WARNING: Could not recover jumptable at 0x00117e67. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8, *(long*)( *(long*)( param_3 + 8 ) + 8 ) + 0x10, *(long*)( param_3 + 0x10 ) + 8);
      return;
   }

   LAB_00117fbf:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<String const&, Vector<String> const&, String const&>::ptrcall(Object*, void const**,
   void*) const */void MethodBindT<String_const&,Vector<String>const&,String_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_001181b1;
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
      /* WARNING: Could not recover jumptable at 0x00118034. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3, *(undefined8*)( (long)param_3 + 8 ), *(undefined8*)( (long)param_3 + 0x10 ));
      return;
   }

   LAB_001181b1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<Ref<EditorExportPlatform>>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Ref<EditorExportPlatform>>::ptrcall(MethodBindTRC<Ref<EditorExportPlatform>> *this, Object *param_1, void **param_2, void *param_3) {
   char cVar1;
   code *pcVar2;
   Object *pOVar3;
   long *plVar4;
   Object *extraout_RDX;
   Object *pOVar5;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Object *local_48;
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

      if (local_48 == (Object*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Object*)0x116768;
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

         goto LAB_00118276;
      }

      param_2 = (void**)local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
         param_2 = (void**)extraout_RDX;
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar2 = *(code**)( (Object*)( (long)param_2 + -1 ) + (long)pcVar2 );
   }

   ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   if (local_48 == (Object*)0x0) {
      /* WARNING: Load size is inaccurate */
      pOVar5 = *param_3;
      if (pOVar5 == (Object*)0x0) goto LAB_00118276;
      *(undefined8*)param_3 = 0;
      goto LAB_001182b9;
   }

   pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar5 = *param_3;
   if (pOVar5 != pOVar3) {
      *(Object**)param_3 = pOVar3;
      if (pOVar3 == (Object*)0x0) {
         if (pOVar5 != (Object*)0x0) goto LAB_001182b9;
      }
 else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar5 != (Object*)0x0) {
            LAB_001182b9:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar5);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         if (local_48 == (Object*)0x0) goto LAB_00118276;
      }

   }

   cVar1 = RefCounted::unreference();
   pOVar5 = local_48;
   if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_48);
      if (cVar1 != '\0') {
         ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
         Memory::free_static(pOVar5, false);
      }

   }

   LAB_00118276:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<EditorExportPreset>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTRC<Ref<EditorExportPreset>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Object *pOVar2;
   char cVar3;
   Variant *pVVar4;
   long *plVar5;
   undefined4 in_register_00000014;
   long *plVar6;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   Object *local_58;
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

      if (local_58 == (Object*)*plVar5) {
         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = (Object*)0x116768;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC113, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00118590;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
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

         ( *(code*)pVVar4 )(&local_58);
         Variant::Variant((Variant*)local_48, local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         if (local_58 != (Object*)0x0) {
            cVar3 = RefCounted::unreference();
            pOVar2 = local_58;
            if (cVar3 != '\0') {
               cVar3 = predelete_handler(local_58);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

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

   LAB_00118590:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<EditorExportPreset>>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Ref<EditorExportPreset>>::ptrcall(MethodBindTRC<Ref<EditorExportPreset>> *this, Object *param_1, void **param_2, void *param_3) {
   char cVar1;
   code *pcVar2;
   Object *pOVar3;
   long *plVar4;
   Object *extraout_RDX;
   Object *pOVar5;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Object *local_48;
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

      if (local_48 == (Object*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Object*)0x116768;
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

         goto LAB_00118816;
      }

      param_2 = (void**)local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
         param_2 = (void**)extraout_RDX;
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar2 = *(code**)( (Object*)( (long)param_2 + -1 ) + (long)pcVar2 );
   }

   ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   if (local_48 == (Object*)0x0) {
      /* WARNING: Load size is inaccurate */
      pOVar5 = *param_3;
      if (pOVar5 == (Object*)0x0) goto LAB_00118816;
      *(undefined8*)param_3 = 0;
      goto LAB_00118859;
   }

   pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar5 = *param_3;
   if (pOVar5 != pOVar3) {
      *(Object**)param_3 = pOVar3;
      if (pOVar3 == (Object*)0x0) {
         if (pOVar5 != (Object*)0x0) goto LAB_00118859;
      }
 else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar5 != (Object*)0x0) {
            LAB_00118859:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar5);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         if (local_48 == (Object*)0x0) goto LAB_00118816;
      }

   }

   cVar1 = RefCounted::unreference();
   pOVar5 = local_48;
   if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_48);
      if (cVar1 != '\0') {
         ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
         Memory::free_static(pOVar5, false);
      }

   }

   LAB_00118816:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Variant, StringName const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<Variant,StringName_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   bool bVar12;
   long local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   plVar9 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar9 != (long*)0x0 ) && ( plVar9[1] != 0 ) ) && ( *(char*)( plVar9[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar9[1] == 0) {
         plVar7 = (long*)plVar9[0x23];
         if (plVar7 == (long*)0x0) {
            plVar7 = (long*)( **(code**)( *plVar9 + 0x40 ) )(plVar9);
         }

      }
 else {
         plVar7 = (long*)( plVar9[1] + 0x20 );
      }

      if (local_68 == (char*)*plVar7) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC113, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_00118b68;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar11 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar10 = param_2[5];
      if (pVVar10 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_00118bb0;
         LAB_00118ba0:pVVar10 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00118bb0:uVar6 = 4;
            goto LAB_00118b5d;
         }

         if (in_R8D == 1) goto LAB_00118ba0;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 0x15);
      uVar4 = _LC119;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_StringName((Variant*)&local_68);
      ( *(code*)pVVar11 )(local_58, (Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)&local_68);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      bVar12 = StringName::configured != '\0';
      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      if (( bVar12 ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      uVar6 = 3;
      LAB_00118b5d:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_00118b68:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindT<String const&>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC113, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00118ed0;
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
         if (in_R8D != 1) goto LAB_00118f20;
         LAB_00118f10:pVVar10 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00118f20:uVar6 = 4;
            goto LAB_00118ec5;
         }

         if (in_R8D == 1) goto LAB_00118f10;
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
      uVar4 = _LC121;
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
      LAB_00118ec5:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_00118ed0:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<String const&, Vector<unsigned char> const&, bool>::call(Object*, Variant const**,
   int, Callable::CallError&) const */Object *MethodBindT<String_const&,Vector<unsigned_char>const&,bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   bool bVar6;
   undefined4 uVar7;
   long lVar8;
   long *plVar9;
   int iVar10;
   uint uVar11;
   Variant *pVVar12;
   undefined4 in_register_00000014;
   long *plVar13;
   long lVar14;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar15;
   long in_FS_OFFSET;
   long local_78;
   undefined8 local_70;
   char *local_68;
   long local_60;
   Variant *local_58[3];
   long local_40;
   plVar13 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar13 != (long*)0x0 ) && ( plVar13[1] != 0 ) ) && ( *(char*)( plVar13[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar13[1] == 0) {
         plVar9 = (long*)plVar13[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar13 + 0x40 ) )();
         }

      }
 else {
         plVar9 = (long*)( plVar13[1] + 0x20 );
      }

      if (local_68 == (char*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC113, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_001192a2;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar15 = param_2[0xb];
   pVVar1 = param_2[0xc];
   uVar7 = 3;
   if (in_R8D < 4) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant*)0x0) {
         iVar10 = 0;
         lVar14 = 0;
      }
 else {
         lVar14 = *(long*)( pVVar2 + -8 );
         iVar10 = (int)lVar14;
      }

      if ((int)( 3 - in_R8D ) <= iVar10) {
         lVar8 = 0;
         do {
            if ((int)lVar8 < (int)in_R8D) {
               pVVar12 = *(Variant**)( param_4 + lVar8 * 8 );
            }
 else {
               uVar11 = iVar10 + -3 + (int)lVar8;
               if (lVar14 <= (int)uVar11) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar11, lVar14, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               pVVar12 = pVVar2 + (ulong)uVar11 * 0x18;
            }

            local_58[lVar8] = pVVar12;
            lVar8 = lVar8 + 1;
         }
 while ( lVar8 != 3 );
         *in_R9 = 0;
         if (( (ulong)pVVar15 & 1 ) != 0) {
            pVVar15 = *(Variant**)( pVVar15 + *(long*)( (long)plVar13 + (long)pVVar1 ) + -1 );
         }

         cVar5 = Variant::can_convert_strict(*(undefined4*)local_58[2], 1);
         uVar4 = _LC122;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         bVar6 = Variant::operator_cast_to_bool(local_58[2]);
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_58[1], 0x1d);
         uVar4 = _LC123;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_Vector((Variant*)&local_68);
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_58[0], 4);
         uVar4 = _LC121;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_String((Variant*)&local_70);
         ( *(code*)pVVar15 )((Variant*)( (long)plVar13 + (long)pVVar1 ), (Variant*)&local_70, (Variant*)&local_68, bVar6);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         lVar14 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar13 = (long*)( local_60 + -0x10 );
            *plVar13 = *plVar13 + -1;
            UNLOCK();
            if (*plVar13 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar14 + -0x10 ), false);
            }

         }

         goto LAB_001192a2;
      }

      uVar7 = 4;
   }

   *in_R9 = uVar7;
   in_R9[2] = 3;
   LAB_001192a2:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<String const&, Vector<String> const&, String const&>::call(Object*, Variant const**,
   int, Callable::CallError&) const */Object *MethodBindT<String_const&,Vector<String>const&,String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   long lVar7;
   long *plVar8;
   int iVar9;
   uint uVar10;
   Variant *pVVar11;
   undefined4 in_register_00000014;
   long *plVar12;
   long lVar13;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar14;
   long in_FS_OFFSET;
   long local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   undefined4 *local_58[3];
   long local_40;
   plVar12 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar12 != (long*)0x0 ) && ( plVar12[1] != 0 ) ) && ( *(char*)( plVar12[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar12[1] == 0) {
         plVar8 = (long*)plVar12[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar12 + 0x40 ) )();
         }

      }
 else {
         plVar8 = (long*)( plVar12[1] + 0x20 );
      }

      if (local_68 == (char*)*plVar8) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC113, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011968a;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar14 = param_2[0xb];
   pVVar1 = param_2[0xc];
   uVar6 = 3;
   if (in_R8D < 4) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant*)0x0) {
         iVar9 = 0;
         lVar13 = 0;
      }
 else {
         lVar13 = *(long*)( pVVar2 + -8 );
         iVar9 = (int)lVar13;
      }

      if ((int)( 3 - in_R8D ) <= iVar9) {
         lVar7 = 0;
         do {
            if ((int)lVar7 < (int)in_R8D) {
               pVVar11 = *(Variant**)( param_4 + lVar7 * 8 );
            }
 else {
               uVar10 = iVar9 + -3 + (int)lVar7;
               if (lVar13 <= (int)uVar10) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar10, lVar13, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               pVVar11 = pVVar2 + (ulong)uVar10 * 0x18;
            }

            local_58[lVar7] = (undefined4*)pVVar11;
            lVar7 = lVar7 + 1;
         }
 while ( lVar7 != 3 );
         *in_R9 = 0;
         if (( (ulong)pVVar14 & 1 ) != 0) {
            pVVar14 = *(Variant**)( pVVar14 + *(long*)( (long)plVar12 + (long)pVVar1 ) + -1 );
         }

         cVar5 = Variant::can_convert_strict(*local_58[2], 4);
         uVar4 = _LC124;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_String((Variant*)&local_78);
         cVar5 = Variant::can_convert_strict(*local_58[1], 0x22);
         uVar4 = _LC125;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_Vector((Variant*)&local_68);
         cVar5 = Variant::can_convert_strict(*local_58[0], 4);
         uVar4 = _LC121;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_String((Variant*)&local_70);
         ( *(code*)pVVar14 )((Variant*)( (long)plVar12 + (long)pVVar1 ), (Variant*)&local_70, (Variant*)&local_68, (Variant*)&local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         CowData<String>::_unref((CowData<String>*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         goto LAB_0011968a;
      }

      uVar6 = 4;
   }

   *in_R9 = uVar6;
   in_R9[2] = 3;
   LAB_0011968a:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<EditorExportPlatform>>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindTRC<Ref<EditorExportPlatform>>::validated_call(MethodBindTRC<Ref<EditorExportPlatform>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Object *pOVar1;
   char cVar2;
   code *pcVar3;
   long *plVar4;
   Variant **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   Object *local_50;
   Variant **local_48;
   Object *local_40;
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
         local_48 = (Variant**)0x116768;
         local_50 = (Object*)0x0;
         local_40 = (Object*)0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00119936;
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

   ( *pcVar3 )(&local_50, param_1 + *(long*)( this + 0x60 ), param_2);
   if (local_50 == (Object*)0x0) {
      Variant::ObjData::unref();
   }
 else {
      local_48 = *(Variant***)( local_50 + 0x60 );
      local_40 = local_50;
      Variant::ObjData::ref((ObjData*)( param_3 + 8 ));
   }

   if (local_50 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar1 = local_50;
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_50);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   LAB_00119936:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<EditorExportPreset>>::validated_call(Object*, Variant const**, Variant*) const
    */void MethodBindTRC<Ref<EditorExportPreset>>::validated_call(MethodBindTRC<Ref<EditorExportPreset>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Object *pOVar1;
   char cVar2;
   code *pcVar3;
   long *plVar4;
   Variant **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   Object *local_50;
   Variant **local_48;
   Object *local_40;
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
         local_48 = (Variant**)0x116768;
         local_50 = (Object*)0x0;
         local_40 = (Object*)0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00119b66;
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

   ( *pcVar3 )(&local_50, param_1 + *(long*)( this + 0x60 ), param_2);
   if (local_50 == (Object*)0x0) {
      Variant::ObjData::unref();
   }
 else {
      local_48 = *(Variant***)( local_50 + 0x60 );
      local_40 = local_50;
      Variant::ObjData::ref((ObjData*)( param_3 + 8 ));
   }

   if (local_50 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar1 = local_50;
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_50);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   LAB_00119b66:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<String_const&>(int param_1, int *param_2, PropertyInfo *param_3) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int iVar5;
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
   iVar5 = *param_2;
   if (iVar5 != param_1) goto LAB_00119d47;
   local_78 = 0;
   local_68 = &_LC13;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 4);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00119e45:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00119e45;
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

   *(undefined4*)param_3 = local_68._0_4_;
   if (*(long*)( param_3 + 8 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( param_3 + 8 ) = uVar3;
   }

   if (*(long*)( param_3 + 0x10 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( param_3 + 0x10 ) = uVar3;
   }

   *(int*)( param_3 + 0x18 ) = local_50;
   if (*(long*)( param_3 + 0x20 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( param_3 + 0x20 ) = lVar4;
   }

   *(undefined4*)( param_3 + 0x28 ) = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   iVar5 = *param_2;
   LAB_00119d47:*param_2 = iVar5 + 1;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindT<String const&>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<String_const&>::_gen_argument_type_info(int param_1) {
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
   call_get_argument_type_info_helper<String_const&>(in_EDX, &local_14, pPVar1);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pPVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info<String const&, Vector<unsigned char> const&, bool>(int,
   PropertyInfo&) */void call_get_argument_type_info<String_const&,Vector<unsigned_char>const&,bool>(int param_1, PropertyInfo *param_2) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
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
   call_get_argument_type_info_helper<String_const&>(param_1, &local_8c, param_2);
   if (param_1 == local_8c) {
      local_78 = 0;
      local_80 = 0;
      local_68 = &_LC13;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      String::parse_latin1((StrRange*)&local_80);
      local_88 = 0;
      local_68 = (undefined*)CONCAT44(local_68._4_4_, 0x1d);
      local_50 = 0;
      local_48 = 0;
      local_60 = (undefined1[16])0x0;
      if (local_80 == 0) {
         LAB_0011a1e8:local_40 = 6;
         StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
         local_40 = 6;
         if (local_50 != 0x11) goto LAB_0011a1e8;
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

   }
 else {
      local_8c = local_8c + 1;
      if (param_1 != local_8c) goto LAB_0011a041;
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_68);
   }

   *(undefined4*)param_2 = local_68._0_4_;
   if (*(long*)( param_2 + 8 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 8 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( param_2 + 8 ) = uVar3;
   }

   if (*(long*)( param_2 + 0x10 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( param_2 + 0x10 ) = uVar3;
   }

   *(int*)( param_2 + 0x18 ) = local_50;
   if (*(long*)( param_2 + 0x20 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 0x20 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( param_2 + 0x20 ) = lVar4;
   }

   *(undefined4*)( param_2 + 0x28 ) = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   LAB_0011a041:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindT<String const&, Vector<unsigned char> const&, bool>::_gen_argument_type_info(int)
   const */PropertyInfo *MethodBindT<String_const&,Vector<unsigned_char>const&,bool>::_gen_argument_type_info(int param_1) {
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar1;
   pPVar1 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   *(undefined4*)pPVar1 = 0;
   *(undefined4*)( pPVar1 + 0x18 ) = 0;
   *(undefined8*)( pPVar1 + 0x20 ) = 0;
   *(undefined4*)( pPVar1 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar1 + 8 ) = (undefined1[16])0x0;
   call_get_argument_type_info<String_const&,Vector<unsigned_char>const&,bool>(in_EDX, pPVar1);
   return pPVar1;
}
/* MethodBindT<String const&, Vector<String> const&, String const&>::_gen_argument_type_info(int)
   const */PropertyInfo *MethodBindT<String_const&,Vector<String>const&,String_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   int iVar3;
   undefined8 uVar4;
   long lVar5;
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar6;
   long in_FS_OFFSET;
   int local_9c;
   long local_98;
   long local_90;
   undefined8 local_88;
   long local_80;
   undefined *local_78;
   undefined1 local_70[16];
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   pPVar6 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)pPVar6 = 0;
   *(undefined4*)( pPVar6 + 0x18 ) = 0;
   *(undefined8*)( pPVar6 + 0x20 ) = 0;
   *(undefined4*)( pPVar6 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar6 + 8 ) = (undefined1[16])0x0;
   local_9c = 0;
   call_get_argument_type_info_helper<String_const&>(in_EDX, &local_9c, pPVar6);
   iVar3 = local_9c;
   if (in_EDX != local_9c) goto LAB_0011a310;
   local_98 = 0;
   local_90 = 0;
   local_78 = &_LC13;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_70._8_8_;
   local_70 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_90);
   local_88 = 0;
   local_78 = (undefined*)CONCAT44(local_78._4_4_, 0x22);
   local_60 = 0;
   local_58 = 0;
   local_70 = (undefined1[16])0x0;
   if (local_90 == 0) {
      LAB_0011a430:local_50 = 6;
      StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_98);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 6;
      if (local_60 != 0x11) goto LAB_0011a430;
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

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   *(undefined4*)pPVar6 = local_78._0_4_;
   if (*(long*)( pPVar6 + 8 ) != local_70._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar6 + 8 ));
      uVar4 = local_70._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_70._8_8_;
      local_70 = auVar2 << 0x40;
      *(undefined8*)( pPVar6 + 8 ) = uVar4;
   }

   if (*(long*)( pPVar6 + 0x10 ) != local_70._8_8_) {
      StringName::unref();
      uVar4 = local_70._8_8_;
      local_70._8_8_ = 0;
      *(undefined8*)( pPVar6 + 0x10 ) = uVar4;
   }

   *(int*)( pPVar6 + 0x18 ) = local_60;
   if (*(long*)( pPVar6 + 0x20 ) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar6 + 0x20 ));
      lVar5 = local_58;
      local_58 = 0;
      *(long*)( pPVar6 + 0x20 ) = lVar5;
   }

   *(undefined4*)( pPVar6 + 0x28 ) = local_50;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   LAB_0011a310:local_9c = iVar3 + 1;
   call_get_argument_type_info_helper<String_const&>(in_EDX, &local_9c, pPVar6);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pPVar6;
}
/* EditorExportPlugin::set_export_preset(Ref<EditorExportPreset> const&) */void EditorExportPlugin::_GLOBAL__sub_I_set_export_preset(void) {
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
/* WARNING: Control flow encountered bad instruction data *//* MethodInfo::~MethodInfo() */void MethodInfo::~MethodInfo(MethodInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
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
/* WARNING: Control flow encountered bad instruction data *//* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* String::~String() */void String::~String(String *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Ref<EditorExportPlatform>>::~MethodBindTRC() */void MethodBindTRC<Ref<EditorExportPlatform>>::~MethodBindTRC(MethodBindTRC<Ref<EditorExportPlatform>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Ref<EditorExportPreset>>::~MethodBindTRC() */void MethodBindTRC<Ref<EditorExportPreset>>::~MethodBindTRC(MethodBindTRC<Ref<EditorExportPreset>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Variant, StringName const&>::~MethodBindTRC() */void MethodBindTRC<Variant,StringName_const&>::~MethodBindTRC(MethodBindTRC<Variant,StringName_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<String const&>::~MethodBindT() */void MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<String const&, Vector<unsigned char> const&, bool>::~MethodBindT() */void MethodBindT<String_const&,Vector<unsigned_char>const&,bool>::~MethodBindT(MethodBindT<String_const&,Vector<unsigned_char>const&,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<String const&, Vector<String> const&, String const&>::~MethodBindT() */void MethodBindT<String_const&,Vector<String>const&,String_const&>::~MethodBindT(MethodBindT<String_const&,Vector<String>const&,String_const&> *this) {
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
/* WARNING: Control flow encountered bad instruction data *//* EditorExportPlugin::~EditorExportPlugin() */void EditorExportPlugin::~EditorExportPlugin(EditorExportPlugin *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<EditorExportPlatform::ExportOption, DefaultAllocator>::~List() */void List<EditorExportPlatform::ExportOption,DefaultAllocator>::~List(List<EditorExportPlatform::ExportOption,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

