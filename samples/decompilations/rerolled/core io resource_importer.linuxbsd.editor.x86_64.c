/* ResourceFormatImporter::has_custom_uid_support() const */undefined8 ResourceFormatImporter::has_custom_uid_support(void) {
   return 1;
}/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
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
      } else {
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
      } while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }
   }
   return;
}/* ResourceFormatImporter::recognize_path(String const&, String const&) const */undefined4 ResourceFormatImporter::recognize_path(String *param_1, String *param_2) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   undefined4 uVar4;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_30 = 7;
   local_38 = ".import";
   String::parse_latin1((StrRange*)&local_40);
   String::operator +((String*)&local_38, param_2);
   uVar4 = FileAccess::exists((String*)&local_38);
   pcVar3 = local_38;
   if (local_38 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_38 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_38 = (char*)0x0;
         Memory::free_static(pcVar3 + -0x10, false);
      }
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
      return uVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ResourceFormatImporter::exists(String const&) const */undefined4 ResourceFormatImporter::exists(ResourceFormatImporter *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   undefined4 uVar4;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_30 = 7;
   local_38 = ".import";
   String::parse_latin1((StrRange*)&local_40);
   String::operator +((String*)&local_38, param_1);
   uVar4 = FileAccess::exists((String*)&local_38);
   pcVar3 = local_38;
   if (local_38 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_38 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_38 = (char*)0x0;
         Memory::free_static(pcVar3 + -0x10, false);
      }
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
      return uVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ResourceFormatImporter::handles_type(String const&) const */undefined8 ResourceFormatImporter::handles_type(ResourceFormatImporter *this, String *param_1) {
   long *plVar1;
   char cVar2;
   long lVar3;
   long lVar4;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   long local_48;
   long local_40;
   lVar4 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = *(long*)( this + 0x290 );
   if (lVar3 != 0) {
      while (lVar4 < *(long*)( lVar3 + -8 )) {
         ( **(code**)( **(long**)( lVar3 + lVar4 * 8 ) + 0x170 ) )((String*)&local_58);
         if (local_58 != 0) {
            if (1 < *(uint*)( local_58 + -8 )) {
               StringName::StringName((StringName*)&local_48, param_1, false);
               StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
               cVar2 = ClassDB::is_parent_class((StringName*)&local_50, (StringName*)&local_48);
               if (( StringName::configured != '\0' ) && ( ( ( local_50 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_48 != 0 ) ) )) {
                  StringName::unref();
               }
               lVar3 = local_58;
               if (cVar2 != '\0') {
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
                  break;
               }
               if (local_58 == 0) goto LAB_001002d1;
            }
            lVar3 = local_58;
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }
         }
         LAB_001002d1:lVar3 = *(long*)( this + 0x290 );
         lVar4 = lVar4 + 1;
         if (lVar3 == 0) break;
      };
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return 1;
}/* ResourceFormatImporterSaver::set_uid(String const&, long) */int ResourceFormatImporterSaver::set_uid(String *param_1, long param_2) {
   long *plVar1;
   char *pcVar2;
   char cVar3;
   int iVar4;
   RefCounted *this;
   long lVar5;
   RefCounted *pRVar6;
   RefCounted *pRVar7;
   long in_FS_OFFSET;
   byte bVar8;
   long local_80;
   long local_78;
   long local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   bVar8 = 0;
   pRVar6 = (RefCounted*)0x0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this(RefCounted * operator_new(0x1b0, ""));
   pRVar7 = this;
   for (lVar5 = 0x36; lVar5 != 0; lVar5 = lVar5 + -1) {
      *(undefined8*)pRVar7 = 0;
      pRVar7 = pRVar7 + (ulong)bVar8 * -0x10 + 8;
   }
   RefCounted::RefCounted(this);
   *(undefined***)this = &PTR__initialize_classv_0010db60;
   *(undefined8*)( this + 0x1a8 ) = 2;
   *(undefined1(*) [16])( this + 0x188 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x198 ) = (undefined1[16])0x0;
   postinitialize_handler((Object*)this);
   cVar3 = RefCounted::init_ref();
   if (cVar3 != '\0') {
      cVar3 = RefCounted::reference();
      if (cVar3 != '\0') {
         pRVar6 = this;
      }
      cVar3 = RefCounted::unreference();
      if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler((Object*)this) ),cVar3 != '\0') {
         ( **(code**)( *(long*)this + 0x140 ) )(this);
         Memory::free_static(this, false);
      }
   }
   local_70 = 0;
   local_60 = 7;
   local_68 = ".import";
   String::parse_latin1((StrRange*)&local_70);
   String::operator +((String*)&local_68, (String*)param_2);
   iVar4 = ConfigFile::load((String*)pRVar6);
   pcVar2 = local_68;
   if (local_68 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (char*)0x0;
         Memory::free_static(pcVar2 + -0x10, false);
      }
   }
   lVar5 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }
   }
   if (iVar4 == 0) {
      ResourceUID::id_to_text((long)&local_80);
      Variant::Variant((Variant*)local_58, (String*)&local_80);
      local_68 = "uid";
      local_70 = 0;
      local_60 = 3;
      String::parse_latin1((StrRange*)&local_70);
      local_78 = 0;
      local_68 = "remap";
      local_60 = 5;
      String::parse_latin1((StrRange*)&local_78);
      ConfigFile::set_value((String*)pRVar6, (String*)&local_78, (Variant*)&local_70);
      lVar5 = local_78;
      if (local_78 != 0) {
         LOCK();
         plVar1 = (long*)( local_78 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_78 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }
      }
      lVar5 = local_70;
      if (local_70 != 0) {
         LOCK();
         plVar1 = (long*)( local_70 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }
      lVar5 = local_80;
      if (local_80 != 0) {
         LOCK();
         plVar1 = (long*)( local_80 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_80 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }
      }
      local_68 = ".import";
      local_70 = 0;
      local_60 = 7;
      String::parse_latin1((StrRange*)&local_70);
      String::operator +((String*)&local_68, (String*)param_2);
      ConfigFile::save((String*)pRVar6);
      pcVar2 = local_68;
      if (local_68 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = (char*)0x0;
            Memory::free_static(pcVar2 + -0x10, false);
         }
      }
      lVar5 = local_70;
      if (local_70 != 0) {
         LOCK();
         plVar1 = (long*)( local_70 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
            cVar3 = RefCounted::unreference();
            goto joined_r0x001006f5;
         }
      }
   }
   cVar3 = RefCounted::unreference();
   joined_r0x001006f5:if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler((Object*)pRVar6) ),cVar3 != '\0') {
      ( **(code**)( *(long*)pRVar6 + 0x140 ) )(pRVar6);
      Memory::free_static(pRVar6, false);
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar4;
}/* ResourceFormatImporter::SortImporterByName::TEMPNAMEPLACEHOLDERVALUE(Ref<ResourceImporter>
   const&, Ref<ResourceImporter> const&) const */undefined4 ResourceFormatImporter::SortImporterByName::operator ()(SortImporterByName *this, Ref *param_1, Ref *param_2) {
   long *plVar1;
   long lVar2;
   undefined4 uVar3;
   long in_FS_OFFSET;
   long local_30;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( **(long**)param_2 + 0x150 ) )((String*)&local_28);
   ( **(code**)( **(long**)param_1 + 0x150 ) )((String*)&local_30);
   uVar3 = String::operator <((String*)&local_30, (String*)&local_28);
   lVar2 = local_30;
   if (local_30 != 0) {
      LOCK();
      plVar1 = (long*)( local_30 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_30 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   lVar2 = local_28;
   if (local_28 != 0) {
      LOCK();
      plVar1 = (long*)( local_28 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_28 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ResourceFormatImporter::get_importer_by_name(String const&) const */String *ResourceFormatImporter::get_importer_by_name(String *param_1) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   char cVar4;
   String *in_RDX;
   long lVar5;
   long in_RSI;
   long lVar6;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   lVar5 = 0;
   lVar2 = *(long*)( in_RSI + 0x290 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   while (true) {
      if (( lVar2 == 0 ) || ( *(long*)( lVar2 + -8 ) <= lVar5 )) goto LAB_001009a2;
      ( **(code**)( **(long**)( lVar2 + lVar5 * 8 ) + 0x150 ) )((String*)&local_48);
      cVar4 = String::operator ==((String*)&local_48, in_RDX);
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
      lVar2 = *(long*)( in_RSI + 0x290 );
      if (cVar4 != '\0') break;
      lVar5 = lVar5 + 1;
   };
   if (lVar2 == 0) {
      lVar6 = 0;
   } else {
      lVar6 = *(long*)( lVar2 + -8 );
      if (lVar5 < lVar6) {
         *(undefined8*)param_1 = 0;
         lVar2 = *(long*)( lVar2 + lVar5 * 8 );
         if (lVar2 == 0) goto LAB_001009a9;
         *(long*)param_1 = lVar2;
         cVar4 = RefCounted::reference();
         if (cVar4 != '\0') goto LAB_001009a9;
         LAB_001009a2:*(undefined8*)param_1 = 0;
         LAB_001009a9:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return param_1;
         }
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
   }
   _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar5, lVar6, "p_index", "size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar3 = (code*)invalidInstructionException();
   ( *pcVar3 )();
}/* ResourceFormatImporter::get_importers(List<Ref<ResourceImporter>, DefaultAllocator>*) */void ResourceFormatImporter::get_importers(ResourceFormatImporter *this, List *param_1) {
   long *plVar1;
   char cVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
   long lVar5;
   lVar3 = *(long*)( this + 0x290 );
   if (lVar3 == 0) {
      return;
   }
   lVar5 = 0;
   do {
      if (*(long*)( lVar3 + -8 ) <= lVar5) {
         return;
      }
      if (*(long*)param_1 == 0) {
         pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])param_1 = pauVar4;
         *(undefined4*)pauVar4[1] = 0;
         *pauVar4 = (undefined1[16])0x0;
      }
      pauVar4 = (undefined1(*) [16])operator_new(0x20, DefaultAllocator::alloc);
      *pauVar4 = (undefined1[16])0x0;
      pauVar4[1] = (undefined1[16])0x0;
      lVar3 = *(long*)( lVar3 + lVar5 * 8 );
      if (lVar3 != 0) {
         *(long*)*pauVar4 = lVar3;
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *(undefined8*)*pauVar4 = 0;
         }
      }
      plVar1 = *(long**)param_1;
      lVar3 = plVar1[1];
      *(undefined8*)( *pauVar4 + 8 ) = 0;
      *(long**)( pauVar4[1] + 8 ) = plVar1;
      *(long*)pauVar4[1] = lVar3;
      if (lVar3 != 0) {
         *(undefined1(**) [16])( lVar3 + 8 ) = pauVar4;
      }
      plVar1[1] = (long)pauVar4;
      if (*plVar1 == 0) {
         *plVar1 = (long)pauVar4;
      }
      *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
      lVar3 = *(long*)( this + 0x290 );
      lVar5 = lVar5 + 1;
   } while ( lVar3 != 0 );
   return;
}/* ResourceFormatImporter::get_import_base_path(String const&) const */String *ResourceFormatImporter::get_import_base_path(String *param_1) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   long in_FS_OFFSET;
   long local_80;
   long local_78;
   long local_70;
   long local_68;
   long local_60;
   undefined *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ProjectSettings::get_singleton();
   ProjectSettings::get_imported_files_path();
   String::md5_text();
   local_58 = &_LC19;
   local_70 = 0;
   local_50 = 1;
   String::parse_latin1((StrRange*)&local_70);
   String::get_file();
   String::operator +((String*)&local_68, (String*)&local_78);
   String::operator +((String*)&local_58, (String*)&local_68);
   String::path_join(param_1);
   puVar3 = local_58;
   if (local_58 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = (undefined*)0x0;
         Memory::free_static(puVar3 + -0x10, false);
      }
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
   lVar2 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
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
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_80 + -0x10 ), false);
      }
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ResourceFormatImporter::ResourceFormatImporter() */void ResourceFormatImporter::ResourceFormatImporter(ResourceFormatImporter *this) {
   RefCounted::RefCounted((RefCounted*)this);
   *(code**)this = ProjectSettings::get_singleton;
   StringName::StringName((StringName*)( this + 0x180 ), "_get_recognized_extensions", false);
   this[0x188] = (ResourceFormatImporter)0x0;
   *(undefined8*)( this + 400 ) = 0;
   StringName::StringName((StringName*)( this + 0x198 ), "_recognize_path", false);
   this[0x1a0] = (ResourceFormatImporter)0x0;
   *(undefined8*)( this + 0x1a8 ) = 0;
   StringName::StringName((StringName*)( this + 0x1b0 ), "_handles_type", false);
   this[0x1b8] = (ResourceFormatImporter)0x0;
   *(undefined8*)( this + 0x1c0 ) = 0;
   StringName::StringName((StringName*)( this + 0x1c8 ), "_get_resource_type", false);
   this[0x1d0] = (ResourceFormatImporter)0x0;
   *(undefined8*)( this + 0x1d8 ) = 0;
   StringName::StringName((StringName*)( this + 0x1e0 ), "_get_resource_script_class", false);
   this[0x1e8] = (ResourceFormatImporter)0x0;
   *(undefined8*)( this + 0x1f0 ) = 0;
   StringName::StringName((StringName*)( this + 0x1f8 ), "_get_resource_uid", false);
   this[0x200] = (ResourceFormatImporter)0x0;
   *(undefined8*)( this + 0x208 ) = 0;
   StringName::StringName((StringName*)( this + 0x210 ), "_get_dependencies", false);
   this[0x218] = (ResourceFormatImporter)0x0;
   *(undefined8*)( this + 0x220 ) = 0;
   StringName::StringName((StringName*)( this + 0x228 ), "_get_classes_used", false);
   this[0x230] = (ResourceFormatImporter)0x0;
   *(undefined8*)( this + 0x238 ) = 0;
   StringName::StringName((StringName*)( this + 0x240 ), "_rename_dependencies", false);
   this[0x248] = (ResourceFormatImporter)0x0;
   *(undefined8*)( this + 0x250 ) = 0;
   StringName::StringName((StringName*)( this + 600 ), "_exists", false);
   this[0x260] = (ResourceFormatImporter)0x0;
   *(undefined8*)( this + 0x268 ) = 0;
   StringName::StringName((StringName*)( this + 0x270 ), "_load", false);
   this[0x278] = (ResourceFormatImporter)0x0;
   *(undefined8*)( this + 0x280 ) = 0;
   *(undefined***)this = &PTR__initialize_classv_0010dcc0;
   *(undefined8*)( this + 0x290 ) = 0;
   singleton = this;
   return;
}/* ResourceImporter::_bind_methods() */void ResourceImporter::_bind_methods(void) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   long lVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   long local_a0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined1 local_70[16];
   undefined8 local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_70._8_8_ = local_70._0_8_;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_98, "IMPORT_ORDER_DEFAULT", false);
   local_78 = "IMPORT_ORDER_DEFAULT";
   local_a0 = 0;
   local_70._0_8_ = 0x14;
   String::parse_latin1((StrRange*)&local_a0);
   local_78 = "ResourceImporter::ImportOrder";
   local_90 = 0;
   local_70._0_8_ = 0x1d;
   String::parse_latin1((StrRange*)&local_90);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_88, (String*)&local_90);
   StringName::StringName((StringName*)&local_80, (String*)&local_88, false);
   local_78 = (char*)0x2;
   local_60 = 0;
   local_58 = 0;
   local_50 = 0x10006;
   local_70 = (undefined1[16])0x0;
   StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }
   lVar4 = local_88;
   if (local_88 != 0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }
   }
   lVar4 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }
   }
   lVar4 = local_58;
   local_80 = local_70._8_8_;
   local_70._8_8_ = 0;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_70._8_8_ != 0 )) {
      StringName::unref();
   }
   uVar5 = local_70._0_8_;
   if (local_70._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_70._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_70._8_8_;
         local_70 = auVar2 << 0x40;
         Memory::free_static((void*)( uVar5 + -0x10 ), false);
      }
   }
   local_88 = 0;
   local_78 = "ResourceImporter";
   local_70._0_8_ = 0x10;
   String::parse_latin1((StrRange*)&local_88);
   StringName::StringName((StringName*)&local_78, (String*)&local_88, false);
   ClassDB::bind_integer_constant((StringName*)&local_78, (StringName*)&local_80, (StringName*)&local_98, 0, false);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }
   lVar4 = local_88;
   if (local_88 != 0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }
   lVar4 = local_a0;
   if (local_a0 != 0) {
      LOCK();
      plVar1 = (long*)( local_a0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a0 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_98, "IMPORT_ORDER_SCENE", false);
   local_78 = "IMPORT_ORDER_SCENE";
   local_a0 = 0;
   local_70._0_8_ = 0x12;
   String::parse_latin1((StrRange*)&local_a0);
   local_78 = "ResourceImporter::ImportOrder";
   local_90 = 0;
   local_70._0_8_ = 0x1d;
   String::parse_latin1((StrRange*)&local_90);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_88, (String*)&local_90);
   StringName::StringName((StringName*)&local_80, (String*)&local_88, false);
   local_78 = (char*)0x2;
   local_60 = 0;
   local_58 = 0;
   local_50 = 0x10006;
   local_70 = (undefined1[16])0x0;
   StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }
   lVar4 = local_88;
   if (local_88 != 0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }
   }
   lVar4 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }
   }
   lVar4 = local_58;
   local_80 = local_70._8_8_;
   local_70._8_8_ = 0;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_70._8_8_ != 0 )) {
      StringName::unref();
   }
   uVar5 = local_70._0_8_;
   if (local_70._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_70._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_70._8_8_;
         local_70 = auVar3 << 0x40;
         Memory::free_static((void*)( uVar5 + -0x10 ), false);
      }
   }
   local_88 = 0;
   local_78 = "ResourceImporter";
   local_70._0_8_ = 0x10;
   String::parse_latin1((StrRange*)&local_88);
   StringName::StringName((StringName*)&local_78, (String*)&local_88, false);
   ClassDB::bind_integer_constant((StringName*)&local_78, (StringName*)&local_80, (StringName*)&local_98, 100, false);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }
   lVar4 = local_88;
   if (local_88 != 0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }
   lVar4 = local_a0;
   if (local_a0 != 0) {
      LOCK();
      plVar1 = (long*)( local_a0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a0 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ResourceFormatImporter::get_importers_for_extension(String const&, List<Ref<ResourceImporter>,
   DefaultAllocator>*) */void ResourceFormatImporter::get_importers_for_extension(ResourceFormatImporter *this, String *param_1, List *param_2) {
   long lVar1;
   long *plVar2;
   code *pcVar3;
   char cVar4;
   undefined1(*pauVar5)[16];
   String *pSVar6;
   long lVar7;
   long lVar8;
   long in_FS_OFFSET;
   long *local_50;
   long local_48;
   long local_40;
   lVar8 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar1 = *(long*)( this + 0x290 );
   do {
      if (( lVar1 == 0 ) || ( *(long*)( lVar1 + -8 ) <= lVar8 )) {
         if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }
         return;
      }
      plVar2 = *(long**)( lVar1 + lVar8 * 8 );
      local_50 = (long*)0x0;
      ( **(code**)( *plVar2 + 0x160 ) )(plVar2, (List<String,DefaultAllocator>*)&local_50);
      if (( local_50 != (long*)0x0 ) && ( pSVar6 = (String*)*local_50 ),pSVar6 != (String*)0x0) {
         do {
            String::to_lower();
            cVar4 = String::operator ==((String*)&local_48, pSVar6);
            lVar1 = local_48;
            if (local_48 != 0) {
               LOCK();
               plVar2 = (long*)( local_48 + -0x10 );
               *plVar2 = *plVar2 + -1;
               UNLOCK();
               if (*plVar2 == 0) {
                  local_48 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }
            }
            if (cVar4 != '\0') {
               lVar1 = *(long*)( this + 0x290 );
               if (lVar1 == 0) {
                  lVar7 = 0;
               } else {
                  lVar7 = *(long*)( lVar1 + -8 );
                  if (lVar8 < lVar7) {
                     if (*(long*)param_2 == 0) {
                        pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                        *(undefined1(**) [16])param_2 = pauVar5;
                        *(undefined4*)pauVar5[1] = 0;
                        *pauVar5 = (undefined1[16])0x0;
                     }
                     pauVar5 = (undefined1(*) [16])operator_new(0x20, DefaultAllocator::alloc);
                     *pauVar5 = (undefined1[16])0x0;
                     pauVar5[1] = (undefined1[16])0x0;
                     lVar1 = *(long*)( lVar1 + lVar8 * 8 );
                     if (lVar1 != 0) {
                        *(long*)*pauVar5 = lVar1;
                        cVar4 = RefCounted::reference();
                        if (cVar4 == '\0') {
                           *(undefined8*)*pauVar5 = 0;
                        }
                     }
                     plVar2 = *(long**)param_2;
                     lVar1 = plVar2[1];
                     *(undefined8*)( *pauVar5 + 8 ) = 0;
                     *(long**)( pauVar5[1] + 8 ) = plVar2;
                     *(long*)pauVar5[1] = lVar1;
                     if (lVar1 != 0) {
                        *(undefined1(**) [16])( lVar1 + 8 ) = pauVar5;
                     }
                     plVar2[1] = (long)pauVar5;
                     if (*plVar2 == 0) {
                        *plVar2 = (long)pauVar5;
                     }
                     *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
                     break;
                  }
               }
               _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar7, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }
            pSVar6 = *(String**)( pSVar6 + 8 );
         } while ( pSVar6 != (String*)0x0 );
      }
      lVar8 = lVar8 + 1;
      List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_50);
      lVar1 = *(long*)( this + 0x290 );
   } while ( true );
}/* ResourceFormatImporter::get_importer_by_extension(String const&) const */ResourceFormatImporter * __thiscall
ResourceFormatImporter::get_importer_by_extension(ResourceFormatImporter *this,String *param_1){
   long lVar1;
   long *plVar2;
   code *pcVar3;
   Object *pOVar4;
   Object *pOVar5;
   char cVar6;
   long lVar7;
   String *pSVar8;
   long lVar9;
   long lVar10;
   long in_FS_OFFSET;
   float fVar11;
   float fVar12;
   long *local_50;
   long local_48;
   long local_40;
   lVar10 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar1 = *(long*)( param_1 + 0x290 );
   *(undefined8*)this = 0;
   fVar12 = 0.0;
   do {
      if (( lVar1 == 0 ) || ( *(long*)( lVar1 + -8 ) <= lVar10 )) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return this;
         }
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      plVar2 = *(long**)( lVar1 + lVar10 * 8 );
      local_50 = (long*)0x0;
      lVar1 = lVar10 * 8;
      ( **(code**)( *plVar2 + 0x160 ) )(plVar2, (List<String,DefaultAllocator>*)&local_50);
      if (( local_50 != (long*)0x0 ) && ( pSVar8 = (String*)*local_50 ),pSVar8 != (String*)0x0) {
         do {
            while (true) {
               String::to_lower();
               cVar6 = String::operator ==((String*)&local_48, pSVar8);
               if (cVar6 == '\0') break;
               lVar7 = *(long*)( param_1 + 0x290 );
               if (lVar7 == 0) {
                  LAB_00101ac0:lVar9 = 0;
                  LAB_00101ac3:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar9, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }
               lVar9 = *(long*)( lVar7 + -8 );
               if (lVar9 <= lVar10) goto LAB_00101ac3;
               pcVar3 = *(code**)( **(long**)( lVar7 + lVar1 ) + 0x178 );
               fVar11 = _LC0;
               if (pcVar3 != ResourceImporter::get_priority) {
                  fVar11 = (float)( *pcVar3 )();
               }
               lVar7 = local_48;
               if (fVar11 <= fVar12) break;
               if (local_48 != 0) {
                  LOCK();
                  plVar2 = (long*)( local_48 + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     local_48 = 0;
                     Memory::free_static((void*)( lVar7 + -0x10 ), false);
                  }
               }
               lVar7 = *(long*)( param_1 + 0x290 );
               if (lVar7 == 0) goto LAB_00101ac0;
               lVar9 = *(long*)( lVar7 + -8 );
               if (lVar9 <= lVar10) goto LAB_00101ac3;
               pOVar4 = *(Object**)( lVar7 + lVar1 );
               pOVar5 = *(Object**)this;
               if (pOVar4 != pOVar5) {
                  *(Object**)this = pOVar4;
                  if (pOVar4 == (Object*)0x0) {
                     if (pOVar5 != (Object*)0x0) goto LAB_00101998;
                  } else {
                     cVar6 = RefCounted::reference();
                     if (cVar6 == '\0') {
                        *(undefined8*)this = 0;
                     }
                     if (pOVar5 != (Object*)0x0) {
                        LAB_00101998:cVar6 = RefCounted::unreference();
                        if (( cVar6 != '\0' ) && ( cVar6 = predelete_handler(pOVar5) ),cVar6 != '\0') {
                           ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                           Memory::free_static(pOVar5, false);
                        }
                     }
                     lVar7 = *(long*)( param_1 + 0x290 );
                     if (lVar7 == 0) goto LAB_00101ac0;
                     lVar9 = *(long*)( lVar7 + -8 );
                     if (lVar9 <= lVar10) goto LAB_00101ac3;
                  }
               }
               pcVar3 = *(code**)( **(long**)( lVar7 + lVar1 ) + 0x178 );
               fVar12 = _LC0;
               if (pcVar3 != ResourceImporter::get_priority) {
                  fVar12 = (float)( *pcVar3 )();
               }
               LAB_001019fb:pSVar8 = *(String**)( pSVar8 + 8 );
               if (pSVar8 == (String*)0x0) goto LAB_00101a60;
            };
            lVar7 = local_48;
            if (local_48 == 0) goto LAB_001019fb;
            LOCK();
            plVar2 = (long*)( local_48 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 != 0) goto LAB_001019fb;
            local_48 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
            pSVar8 = *(String**)( pSVar8 + 8 );
         } while ( pSVar8 != (String*)0x0 );
      }
      LAB_00101a60:lVar10 = lVar10 + 1;
      List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_50);
      lVar1 = *(long*)( param_1 + 0x290 );
   } while ( true );
}/* ResourceFormatImporter::get_recognized_extensions(List<String, DefaultAllocator>*) const */void ResourceFormatImporter::get_recognized_extensions(ResourceFormatImporter *this, List *param_1) {
   long *plVar1;
   long *plVar2;
   uint uVar3;
   String *pSVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   ulong uVar13;
   undefined8 uVar14;
   char cVar15;
   uint uVar16;
   CowData<char32_t> *this_00;
   undefined1(*pauVar17)[16];
   uint uVar18;
   int iVar19;
   long lVar20;
   long lVar21;
   long lVar22;
   ulong uVar23;
   uint uVar24;
   long in_FS_OFFSET;
   bool bVar25;
   void *local_c0;
   undefined8 *local_80;
   String local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar22 = *(long*)( this + 0x290 );
   local_68 = (undefined1[16])0x0;
   local_48 = 2;
   local_58 = (undefined1[16])0x0;
   if (lVar22 != 0) {
      local_c0 = (void*)0x0;
      lVar21 = 0;
      do {
         if (*(long*)( lVar22 + -8 ) <= lVar21) break;
         local_80 = (undefined8*)0x0;
         ( **(code**)( **(long**)( lVar22 + lVar21 * 8 ) + 0x160 ) )();
         if (local_80 != (undefined8*)0x0) {
            uVar13 = local_48;
            for (pSVar4 = (String*)*local_80; local_48 = uVar13,pSVar4 != (String*)0x0; pSVar4 = *(String**)( pSVar4 + 8 )) {
               if (( local_c0 != (void*)0x0 ) && ( local_48._4_4_ = ( uint )(uVar13 >> 0x20) ),bVar25 = local_48._4_4_ != 0,bVar25) {
                  uVar3 = *(uint*)( hash_table_size_primes + ( uVar13 & 0xffffffff ) * 4 );
                  uVar23 = CONCAT44(0, uVar3);
                  lVar22 = *(long*)( hash_table_size_primes_inv + ( uVar13 & 0xffffffff ) * 8 );
                  uVar16 = String::hash();
                  uVar14 = local_58._8_8_;
                  uVar18 = 1;
                  if (uVar16 != 0) {
                     uVar18 = uVar16;
                  }
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = (ulong)uVar18 * lVar22;
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = uVar23;
                  lVar20 = SUB168(auVar5 * auVar9, 8);
                  uVar16 = *(uint*)( local_58._8_8_ + lVar20 * 4 );
                  if (uVar16 != 0) {
                     uVar24 = 0;
                     iVar19 = SUB164(auVar5 * auVar9, 8);
                     do {
                        if (uVar18 == uVar16) {
                           cVar15 = String::operator ==((String*)( (long)local_c0 + ( ulong ) * (uint*)( local_68._8_8_ + lVar20 * 4 ) * 8 ), pSVar4);
                           if (cVar15 != '\0') goto LAB_00101d58;
                        }
                        uVar24 = uVar24 + 1;
                        auVar6._8_8_ = 0;
                        auVar6._0_8_ = ( ulong )(iVar19 + 1) * lVar22;
                        auVar10._8_8_ = 0;
                        auVar10._0_8_ = uVar23;
                        lVar20 = SUB168(auVar6 * auVar10, 8);
                        uVar16 = *(uint*)( uVar14 + lVar20 * 4 );
                        iVar19 = SUB164(auVar6 * auVar10, 8);
                     } while ( ( uVar16 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar16 * lVar22,auVar11._8_8_ = 0,auVar11._0_8_ = uVar23,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar3 + iVar19 ) - SUB164(auVar7 * auVar11, 8)) * lVar22,auVar12._8_8_ = 0,auVar12._0_8_ = uVar23,uVar24 <= SUB164(auVar8 * auVar12, 8) );
                  }
               }
               if (*(long*)param_1 == 0) {
                  pauVar17 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *(undefined1(**) [16])param_1 = pauVar17;
                  *(undefined4*)pauVar17[1] = 0;
                  *pauVar17 = (undefined1[16])0x0;
               }
               this_00 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
               *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
               *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
               if (*(long*)pSVar4 != 0) {
                  CowData<char32_t>::_ref(this_00, (CowData*)pSVar4);
               }
               plVar2 = *(long**)param_1;
               lVar22 = plVar2[1];
               *(undefined8*)( this_00 + 8 ) = 0;
               *(long**)( this_00 + 0x18 ) = plVar2;
               *(long*)( this_00 + 0x10 ) = lVar22;
               if (lVar22 != 0) {
                  *(CowData<char32_t>**)( lVar22 + 8 ) = this_00;
               }
               plVar2[1] = (long)this_00;
               if (*plVar2 == 0) {
                  *plVar2 = (long)this_00;
               }
               *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
               HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert(local_78);
               local_c0 = (void*)local_68._0_8_;
               LAB_00101d58:uVar13 = local_48;
            }
         }
         lVar21 = lVar21 + 1;
         List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_80);
         lVar22 = *(long*)( this + 0x290 );
      } while ( lVar22 != 0 );
      if (local_c0 != (void*)0x0) {
         if (local_48._4_4_ != 0) {
            if (*(uint*)( hash_table_size_primes + ( local_48 & 0xffffffff ) * 4 ) != 0) {
               memset((void*)local_58._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_48 & 0xffffffff ) * 4 ) * 4);
            }
            lVar22 = 0;
            do {
               plVar2 = (long*)( (long)local_c0 + lVar22 * 8 );
               if (*plVar2 != 0) {
                  LOCK();
                  plVar1 = (long*)( *plVar2 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar21 = *plVar2;
                     *plVar2 = 0;
                     Memory::free_static((void*)( lVar21 + -0x10 ), false);
                  }
                  local_c0 = (void*)local_68._0_8_;
               }
               lVar22 = lVar22 + 1;
            } while ( (uint)lVar22 < local_48._4_4_ );
            local_48 = local_48 & 0xffffffff;
            if (local_c0 == (void*)0x0) goto LAB_00101e30;
         }
         Memory::free_static(local_c0, false);
         Memory::free_static((void*)local_58._0_8_, false);
         Memory::free_static((void*)local_68._8_8_, false);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static((void*)local_58._8_8_, false);
            return;
         }
         goto LAB_00101f84;
      }
   }
   LAB_00101e30:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_00101f84:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* ResourceFormatImporter::get_recognized_extensions_for_type(String const&, List<String,
   DefaultAllocator>*) const */void ResourceFormatImporter::get_recognized_extensions_for_type(ResourceFormatImporter *this, String *param_1, List *param_2) {
   long *plVar1;
   long *plVar2;
   uint uVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   code *pcVar12;
   ulong uVar13;
   undefined8 uVar14;
   undefined8 uVar15;
   char cVar16;
   uint uVar17;
   CowData<char32_t> *this_00;
   undefined1(*pauVar18)[16];
   uint uVar19;
   int iVar20;
   long lVar21;
   long lVar22;
   long lVar23;
   void *pvVar24;
   String *pSVar25;
   uint uVar26;
   long in_FS_OFFSET;
   long local_88;
   long *local_80;
   long local_78[2];
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)param_1 == 0 ) || ( *(uint*)( *(long*)param_1 + -8 ) < 2 )) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Could not recover jumptable at 0x00102003. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( **(code**)( *(long*)this + 0x160 ) )(this, param_2);
         return;
      }
      goto LAB_00102553;
   }
   lVar22 = *(long*)( this + 0x290 );
   local_48 = 2;
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   if (lVar22 != 0) {
      lVar23 = 0;
      do {
         if (*(long*)( lVar22 + -8 ) <= lVar23) break;
         ( **(code**)( **(long**)( lVar22 + lVar23 * 8 ) + 0x170 ) )((String*)&local_88);
         if (local_88 != 0) {
            if (1 < *(uint*)( local_88 + -8 )) {
               StringName::StringName((StringName*)&local_80, param_1, false);
               StringName::StringName((StringName*)local_78, (String*)&local_88, false);
               cVar16 = ClassDB::is_parent_class((StringName*)local_78, (StringName*)&local_80);
               if (( StringName::configured != '\0' ) && ( ( ( local_78[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_80 != (long*)0x0 ) ) )) {
                  StringName::unref();
               }
               if (cVar16 != '\0') {
                  lVar22 = *(long*)( this + 0x290 );
                  local_80 = (long*)0x0;
                  if (lVar22 == 0) {
                     lVar21 = 0;
                     LAB_00102512:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar23, lVar21, "p_index", "size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar12 = (code*)invalidInstructionException();
                     ( *pcVar12 )();
                  }
                  lVar21 = *(long*)( lVar22 + -8 );
                  if (lVar21 <= lVar23) goto LAB_00102512;
                  ( **(code**)( **(long**)( lVar22 + lVar23 * 8 ) + 0x160 ) )();
                  if (local_80 != (long*)0x0) {
                     for (pSVar25 = (String*)*local_80; pSVar25 != (String*)0x0; pSVar25 = *(String**)( pSVar25 + 8 )) {
                        LAB_001021a8:uVar14 = local_68._0_8_;
                        if (( local_68._0_8_ != 0 ) && ( local_48._4_4_ != 0 )) {
                           uVar3 = *(uint*)( hash_table_size_primes + ( local_48 & 0xffffffff ) * 4 );
                           lVar22 = *(long*)( hash_table_size_primes_inv + ( local_48 & 0xffffffff ) * 8 );
                           uVar17 = String::hash();
                           uVar13 = CONCAT44(0, uVar3);
                           uVar15 = local_58._8_8_;
                           uVar19 = 1;
                           if (uVar17 != 0) {
                              uVar19 = uVar17;
                           }
                           auVar4._8_8_ = 0;
                           auVar4._0_8_ = (ulong)uVar19 * lVar22;
                           auVar8._8_8_ = 0;
                           auVar8._0_8_ = uVar13;
                           lVar21 = SUB168(auVar4 * auVar8, 8);
                           uVar17 = *(uint*)( local_58._8_8_ + lVar21 * 4 );
                           if (uVar17 != 0) {
                              uVar26 = 0;
                              iVar20 = SUB164(auVar4 * auVar8, 8);
                              do {
                                 if (uVar19 == uVar17) {
                                    cVar16 = String::operator ==((String*)( uVar14 + ( ulong ) * (uint*)( local_68._8_8_ + lVar21 * 4 ) * 8 ), pSVar25);
                                    if (cVar16 != '\0') goto code_r0x001022c9;
                                 }
                                 uVar26 = uVar26 + 1;
                                 auVar5._8_8_ = 0;
                                 auVar5._0_8_ = ( ulong )(iVar20 + 1) * lVar22;
                                 auVar9._8_8_ = 0;
                                 auVar9._0_8_ = uVar13;
                                 lVar21 = SUB168(auVar5 * auVar9, 8);
                                 uVar17 = *(uint*)( uVar15 + lVar21 * 4 );
                                 iVar20 = SUB164(auVar5 * auVar9, 8);
                                 if (( uVar17 == 0 ) || ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar17 * lVar22,auVar10._8_8_ = 0,auVar10._0_8_ = uVar13,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar3 + iVar20 ) - SUB164(auVar6 * auVar10, 8)) * lVar22,auVar11._8_8_ = 0,auVar11._0_8_ = uVar13,SUB164(auVar7 * auVar11, 8) < uVar26) break;
                              } while ( true );
                           }
                        }
                        if (*(long*)param_2 == 0) {
                           pauVar18 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                           *(undefined1(**) [16])param_2 = pauVar18;
                           *(undefined4*)pauVar18[1] = 0;
                           *pauVar18 = (undefined1[16])0x0;
                        }
                        this_00 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
                        *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
                        *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
                        if (*(long*)pSVar25 != 0) {
                           CowData<char32_t>::_ref(this_00, (CowData*)pSVar25);
                        }
                        plVar1 = *(long**)param_2;
                        lVar22 = plVar1[1];
                        *(undefined8*)( this_00 + 8 ) = 0;
                        *(long**)( this_00 + 0x18 ) = plVar1;
                        *(long*)( this_00 + 0x10 ) = lVar22;
                        if (lVar22 != 0) {
                           *(CowData<char32_t>**)( lVar22 + 8 ) = this_00;
                        }
                        plVar1[1] = (long)this_00;
                        if (*plVar1 == 0) {
                           *plVar1 = (long)this_00;
                        }
                        *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
                        HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String*)local_78);
                     }
                  }
                  LAB_001022ef:List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_80);
               }
               if (local_88 == 0) goto LAB_00102069;
            }
            lVar22 = local_88;
            LOCK();
            plVar1 = (long*)( local_88 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_88 = 0;
               Memory::free_static((void*)( lVar22 + -0x10 ), false);
            }
         }
         LAB_00102069:lVar22 = *(long*)( this + 0x290 );
         lVar23 = lVar23 + 1;
      } while ( lVar22 != 0 );
      pvVar24 = (void*)local_68._0_8_;
      if ((void*)local_68._0_8_ != (void*)0x0) {
         if (local_48._4_4_ != 0) {
            if (*(uint*)( hash_table_size_primes + ( local_48 & 0xffffffff ) * 4 ) != 0) {
               memset((void*)local_58._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_48 & 0xffffffff ) * 4 ) * 4);
            }
            lVar22 = 0;
            do {
               plVar1 = (long*)( (long)pvVar24 + lVar22 * 8 );
               if (*plVar1 != 0) {
                  LOCK();
                  plVar2 = (long*)( *plVar1 + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar23 = *plVar1;
                     *plVar1 = 0;
                     Memory::free_static((void*)( lVar23 + -0x10 ), false);
                  }
                  pvVar24 = (void*)local_68._0_8_;
               }
               lVar22 = lVar22 + 1;
            } while ( (uint)lVar22 < local_48._4_4_ );
            local_48 = local_48 & 0xffffffff;
            if (pvVar24 == (void*)0x0) goto LAB_0010244c;
         }
         Memory::free_static(pvVar24, false);
         Memory::free_static((void*)local_58._0_8_, false);
         Memory::free_static((void*)local_68._8_8_, false);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static((void*)local_58._8_8_, false);
            return;
         }
         goto LAB_00102553;
      }
   }
   LAB_0010244c:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_00102553:/* WARNING: Subroutine does not return */__stack_chk_fail();
   code_r0x001022c9:pSVar25 = *(String**)( pSVar25 + 8 );
   if (pSVar25 == (String*)0x0) goto LAB_001022ef;
   goto LAB_001021a8;
}/* ResourceFormatImporter::get_internal_resource_path_list(String const&, List<String,
   DefaultAllocator>*) */void ResourceFormatImporter::get_internal_resource_path_list(ResourceFormatImporter *this, String *param_1, List *param_2) {
   long *plVar1;
   uint uVar2;
   int iVar3;
   char *pcVar4;
   char *pcVar5;
   Object *pOVar6;
   char cVar7;
   int iVar8;
   CowData<char32_t> *pCVar9;
   undefined1(*pauVar10)[16];
   long lVar11;
   long lVar12;
   void *pvVar13;
   long in_FS_OFFSET;
   bool bVar14;
   int local_212c;
   Object *local_2128;
   char *local_2120;
   long local_2118;
   undefined8 local_2110;
   undefined8 local_2108;
   long local_2100;
   char *local_20f8;
   undefined8 local_20f0;
   char *local_20e8;
   undefined8 local_20e0;
   undefined1 local_20d8[16];
   undefined1 local_20c8[16];
   undefined8 local_20b8;
   undefined8 local_20a8;
   undefined1 local_20a0[16];
   undefined8 local_2088;
   undefined1 local_2080[16];
   code *local_2068[1025];
   undefined8 local_60;
   undefined2 local_58;
   undefined4 local_54;
   Object *local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_20f8 = (char*)0x0;
   local_20e8 = ".import";
   local_20e0 = 7;
   String::parse_latin1((StrRange*)&local_20f8);
   String::operator +((String*)&local_20e8, param_1);
   FileAccess::open((String*)&local_2128, (int)(String*)&local_20e8, (Error*)0x1);
   pcVar4 = local_20e8;
   if (local_20e8 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_20e8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_20e8 = (char*)0x0;
         Memory::free_static(pcVar4 + -0x10, false);
      }
   }
   pcVar4 = local_20f8;
   if (local_20f8 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_20f8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_20f8 = (char*)0x0;
         Memory::free_static(pcVar4 + -0x10, false);
      }
   }
   if (local_2128 == (Object*)0x0) goto LAB_00102bf4;
   local_60 = 0;
   local_54 = 0;
   local_2068[0] = VariantParser::parse_tag_assign_eof;
   local_58 = 0x100;
   local_50 = local_2128;
   cVar7 = RefCounted::reference();
   if (cVar7 == '\0') {
      local_50 = (Object*)0x0;
   }
   local_2120 = (char*)0x0;
   local_20a8 = 0;
   local_20e8 = (char*)0x0;
   local_20b8 = 2;
   local_212c = 0;
   local_2118 = 0;
   local_20a0 = (undefined1[16])0x0;
   local_20d8 = (undefined1[16])0x0;
   local_20c8 = (undefined1[16])0x0;
   LAB_00102750:do {
      local_2088 = 0;
      local_2080 = (undefined1[16])0x0;
      Variant::operator_cast_to_String((Variant*)&local_20f8);
      pcVar5 = local_20f8;
      pcVar4 = local_2120;
      if (local_2120 == local_20f8) {
         if (local_2120 == (char*)0x0) goto LAB_001027c0;
         LOCK();
         plVar1 = (long*)( local_2120 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) goto LAB_001027c0;
         local_20f8 = (char*)0x0;
         Memory::free_static(pcVar5 + -0x10, false);
         cVar7 = Variant::needs_deinit[(int)local_2088];
      } else {
         if (local_2120 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_2120 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_2120 = (char*)0x0;
               Memory::free_static(pcVar4 + -0x10, false);
            }
         }
         local_2120 = local_20f8;
         LAB_001027c0:cVar7 = Variant::needs_deinit[(int)local_2088];
      }
      if (cVar7 != '\0') {
         Variant::_clear_internal();
      }
      if (( local_20d8._0_8_ != 0 ) && ( local_20b8._4_4_ != 0 )) {
         lVar12 = 0;
         uVar2 = *(uint*)( hash_table_size_primes + ( local_20b8 & 0xffffffff ) * 4 );
         if (uVar2 != 0) {
            do {
               if (*(int*)( local_20d8._8_8_ + lVar12 ) != 0) {
                  *(int*)( local_20d8._8_8_ + lVar12 ) = 0;
                  pvVar13 = *(void**)( local_20d8._0_8_ + lVar12 * 2 );
                  if (Variant::needs_deinit[*(int*)( (long)pvVar13 + 0x18 )] != '\0') {
                     Variant::_clear_internal();
                  }
                  if (*(long*)( (long)pvVar13 + 0x10 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar13 + 0x10 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar11 = *(long*)( (long)pvVar13 + 0x10 );
                        *(undefined8*)( (long)pvVar13 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar11 + -0x10 ), false);
                     }
                  }
                  Memory::free_static(pvVar13, false);
                  *(undefined8*)( local_20d8._0_8_ + lVar12 * 2 ) = 0;
               }
               lVar12 = lVar12 + 4;
            } while ( (ulong)uVar2 << 2 != lVar12 );
         }
         local_20b8 = local_20b8 & 0xffffffff;
         local_20c8 = (undefined1[16])0x0;
      }
      pcVar4 = local_20e8;
      if (local_20e8 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_20e8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_20e8 = (char*)0x0;
            Memory::free_static(pcVar4 + -0x10, false);
         }
         local_20e8 = (char*)0x0;
      }
      iVar8 = VariantParser::parse_tag_assign_eof((Stream*)local_2068, &local_212c, (String*)&local_2118, (Tag*)&local_20e8, (String*)&local_2120, (Variant*)&local_20a8, (ResourceParser*)0x0, true);
      iVar3 = local_212c;
      if (iVar8 == 0x12) goto LAB_00102dd2;
      if (iVar8 != 0) {
         local_2100 = 0;
         plVar1 = (long*)( local_2118 + -0x10 );
         if (local_2118 == 0) goto LAB_00102d06;
         goto LAB_00102fa3;
      }
      if (( local_2120 != (char*)0x0 ) && ( 1 < *(uint*)( local_2120 + -8 ) )) {
         cVar7 = String::begins_with((char*)&local_2120);
         if (cVar7 == '\0') {
            cVar7 = String::operator ==((String*)&local_2120, "path");
            if (cVar7 != '\0') {
               Variant::operator_cast_to_String((Variant*)&local_20f8);
               if (*(long*)param_2 == 0) {
                  pauVar10 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *(undefined1(**) [16])param_2 = pauVar10;
                  *(undefined4*)pauVar10[1] = 0;
                  *pauVar10 = (undefined1[16])0x0;
               }
               pCVar9 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
               *(undefined1(*) [16])pCVar9 = (undefined1[16])0x0;
               *(undefined1(*) [16])( pCVar9 + 0x10 ) = (undefined1[16])0x0;
               if (local_20f8 != (char*)0x0) {
                  CowData<char32_t>::_ref(pCVar9, (CowData*)&local_20f8);
               }
               plVar1 = *(long**)param_2;
               lVar12 = plVar1[1];
               *(undefined8*)( pCVar9 + 8 ) = 0;
               *(long**)( pCVar9 + 0x18 ) = plVar1;
               *(long*)( pCVar9 + 0x10 ) = lVar12;
               if (lVar12 != 0) {
                  *(CowData<char32_t>**)( lVar12 + 8 ) = pCVar9;
               }
               plVar1[1] = (long)pCVar9;
               if (*plVar1 == 0) {
                  *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
                  *plVar1 = (long)pCVar9;
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_20f8);
               } else {
                  *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_20f8);
               }
            }
         } else {
            Variant::operator_cast_to_String((Variant*)&local_20f8);
            if (*(long*)param_2 == 0) {
               pauVar10 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])param_2 = pauVar10;
               *(undefined4*)pauVar10[1] = 0;
               *pauVar10 = (undefined1[16])0x0;
            }
            pCVar9 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
            *(undefined1(*) [16])pCVar9 = (undefined1[16])0x0;
            *(undefined1(*) [16])( pCVar9 + 0x10 ) = (undefined1[16])0x0;
            if (local_20f8 != (char*)0x0) {
               CowData<char32_t>::_ref(pCVar9, (CowData*)&local_20f8);
            }
            pcVar4 = local_20f8;
            plVar1 = *(long**)param_2;
            lVar12 = plVar1[1];
            *(undefined8*)( pCVar9 + 8 ) = 0;
            *(long**)( pCVar9 + 0x18 ) = plVar1;
            *(long*)( pCVar9 + 0x10 ) = lVar12;
            if (lVar12 != 0) {
               *(CowData<char32_t>**)( lVar12 + 8 ) = pCVar9;
            }
            plVar1[1] = (long)pCVar9;
            if (*plVar1 == 0) {
               *plVar1 = (long)pCVar9;
            }
            *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
            if (local_20f8 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_20f8 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_20f8 = (char*)0x0;
                  Memory::free_static(pcVar4 + -0x10, false);
               }
            }
         }
         goto LAB_00102750;
      }
      cVar7 = String::operator !=((String*)&local_20e8, "remap");
   } while ( cVar7 == '\0' );
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2118);
   if ((void*)local_20d8._0_8_ != (void*)0x0) {
      pvVar13 = (void*)local_20d8._0_8_;
      if (local_20b8._4_4_ != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( local_20b8 & 0xffffffff ) * 4 );
         if (uVar2 == 0) goto LAB_00102f00;
         lVar12 = 0;
         do {
            if (*(int*)( local_20d8._8_8_ + lVar12 ) != 0) {
               pvVar13 = *(void**)( (long)pvVar13 + lVar12 * 2 );
               *(int*)( local_20d8._8_8_ + lVar12 ) = 0;
               if (Variant::needs_deinit[*(int*)( (long)pvVar13 + 0x18 )] != '\0') {
                  Variant::_clear_internal();
               }
               CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar13 + 0x10 ));
               Memory::free_static(pvVar13, false);
               *(undefined8*)( local_20d8._0_8_ + lVar12 * 2 ) = 0;
               pvVar13 = (void*)local_20d8._0_8_;
            }
            lVar12 = lVar12 + 4;
         } while ( (ulong)uVar2 * 4 - lVar12 != 0 );
         LAB_00102b6a:local_20b8 = local_20b8 & 0xffffffff;
         local_20c8 = (undefined1[16])0x0;
         if (pvVar13 == (void*)0x0) goto LAB_00102b8f;
      }
      LAB_00102f17:Memory::free_static(pvVar13, false);
      Memory::free_static((void*)local_20d8._8_8_, false);
   }
   goto LAB_00102b8f;
   LAB_00102fa3:do {
      lVar12 = *plVar1;
      if (lVar12 == 0) goto LAB_00102d06;
      LOCK();
      lVar11 = *plVar1;
      bVar14 = lVar12 == lVar11;
      if (bVar14) {
         *plVar1 = lVar12 + 1;
         lVar11 = lVar12;
      }
      UNLOCK();
   } while ( !bVar14 );
   if (lVar11 != -1) {
      local_2100 = local_2118;
   }
   LAB_00102d06:local_2108 = 0;
   plVar1 = (long*)( *(long*)param_1 + -0x10 );
   if (*(long*)param_1 != 0) {
      do {
         lVar12 = *plVar1;
         if (lVar12 == 0) goto LAB_00102d26;
         LOCK();
         lVar11 = *plVar1;
         bVar14 = lVar12 == lVar11;
         if (bVar14) {
            *plVar1 = lVar12 + 1;
            lVar11 = lVar12;
         }
         UNLOCK();
      } while ( !bVar14 );
      if (lVar11 != -1) {
         local_2108 = *(undefined8*)param_1;
      }
   }
   LAB_00102d26:local_20f8 = "ResourceFormatImporter::get_internal_resource_path_list - %s.import:%d error: %s.";
   local_2110 = 0;
   local_20f0 = 0x51;
   String::parse_latin1((StrRange*)&local_2110);
   vformat<String,int,String>((StrRange*)&local_20f8, (StrRange*)&local_2110, (CowData<char32_t>*)&local_2108, iVar3, (CowData<char32_t>*)&local_2100);
   _err_print_error("get_internal_resource_path_list", "core/io/resource_importer.cpp", 0x152, (StrRange*)&local_20f8, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_20f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2110);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2100);
   LAB_00102dd2:CowData<char32_t>::_unref((CowData<char32_t>*)&local_2118);
   if ((void*)local_20d8._0_8_ != (void*)0x0) {
      pvVar13 = (void*)local_20d8._0_8_;
      if (local_20b8._4_4_ != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( local_20b8 & 0xffffffff ) * 4 );
         if (uVar2 != 0) {
            lVar12 = 0;
            do {
               if (*(int*)( local_20d8._8_8_ + lVar12 ) != 0) {
                  pvVar13 = *(void**)( (long)pvVar13 + lVar12 * 2 );
                  *(int*)( local_20d8._8_8_ + lVar12 ) = 0;
                  if (Variant::needs_deinit[*(int*)( (long)pvVar13 + 0x18 )] != '\0') {
                     Variant::_clear_internal();
                  }
                  if (*(long*)( (long)pvVar13 + 0x10 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar13 + 0x10 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar11 = *(long*)( (long)pvVar13 + 0x10 );
                        *(undefined8*)( (long)pvVar13 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar11 + -0x10 ), false);
                     }
                  }
                  Memory::free_static(pvVar13, false);
                  *(undefined8*)( local_20d8._0_8_ + lVar12 * 2 ) = 0;
                  pvVar13 = (void*)local_20d8._0_8_;
               }
               lVar12 = lVar12 + 4;
            } while ( lVar12 != (ulong)uVar2 * 4 );
            goto LAB_00102b6a;
         }
         LAB_00102f00:local_20b8 = local_20b8 & 0xffffffff;
         local_20c8 = (undefined1[16])0x0;
         pvVar13 = (void*)local_20d8._0_8_;
      }
      goto LAB_00102f17;
   }
   LAB_00102b8f:CowData<char32_t>::_unref((CowData<char32_t>*)&local_20e8);
   if (Variant::needs_deinit[(int)local_20a8] != '\0') {
      Variant::_clear_internal();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2120);
   local_2068[0] = VariantParser::parse_tag_assign_eof;
   if (( ( local_50 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),pOVar6 = local_50,cVar7 != '\0' )) &&( cVar7 = cVar7 != '\0' )(**(code**)( *(long*)pOVar6 + 0x140 ))(pOVar6);
   Memory::free_static(pOVar6, false);
}if (( ( local_2128 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),cVar7 != '\0' )) &&( cVar7 = cVar7 != '\0' )(**(code**)( *(long*)local_2128 + 0x140 ))(local_2128);Memory::free_static(local_2128, false);}LAB_00102bf4:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}/* WARNING: Subroutine does not return */__stack_chk_fail();}/* ResourceFormatImporter::_get_path_and_type(String const&, ResourceFormatImporter::PathAndType&,
   bool*) const */int ResourceFormatImporter::_get_path_and_type(ResourceFormatImporter *this, String *param_1, PathAndType *param_2, bool *param_3) {
   uint uVar1;
   char *pcVar2;
   int iVar3;
   long *plVar4;
   char *pcVar5;
   Object *pOVar6;
   char cVar7;
   bool bVar8;
   String *pSVar9;
   undefined8 uVar10;
   long lVar11;
   long *plVar12;
   void *pvVar13;
   long lVar14;
   long in_FS_OFFSET;
   char local_2161;
   int local_2140;
   int local_213c;
   Object *local_2138;
   char *local_2130;
   long *local_2128;
   Variant local_2120[8];
   String local_2118[8];
   long local_2110;
   long local_2108;
   long *local_2100;
   char *local_20f8;
   size_t local_20f0;
   char *local_20e8;
   undefined8 local_20e0;
   undefined1 local_20d8[16];
   undefined1 local_20c8[16];
   undefined8 local_20b8;
   undefined8 local_20a8;
   undefined1 local_20a0[16];
   undefined8 local_2088;
   undefined1 local_2080[16];
   code *local_2068[1025];
   undefined8 local_60;
   undefined2 local_58;
   undefined4 local_54;
   Object *local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_20e8 = ".import";
   local_20f8 = (char*)0x0;
   local_20e0 = 7;
   String::parse_latin1((StrRange*)&local_20f8);
   String::operator +((String*)&local_20e8, param_1);
   FileAccess::open((String*)&local_2138, (int)(String*)&local_20e8, (Error*)0x1);
   pcVar2 = local_20e8;
   if (local_20e8 != (char*)0x0) {
      LOCK();
      plVar12 = (long*)( local_20e8 + -0x10 );
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (*plVar12 == 0) {
         local_20e8 = (char*)0x0;
         Memory::free_static(pcVar2 + -0x10, false);
      }
   }
   pcVar2 = local_20f8;
   if (local_20f8 != (char*)0x0) {
      LOCK();
      plVar12 = (long*)( local_20f8 + -0x10 );
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (*plVar12 == 0) {
         local_20f8 = (char*)0x0;
         Memory::free_static(pcVar2 + -0x10, false);
      }
   }
   if (local_2138 == (Object*)0x0) {
      if (param_3 != (bool*)0x0) {
         *param_3 = false;
      }
      goto LAB_00103a2b;
   }
   local_60 = 0;
   local_54 = 0;
   local_2068[0] = VariantParser::parse_tag_assign_eof;
   local_58 = 0x100;
   local_50 = local_2138;
   cVar7 = RefCounted::reference();
   if (cVar7 == '\0') {
      local_50 = (Object*)0x0;
   }
   local_2130 = (char*)0x0;
   local_20a0 = (undefined1[16])0x0;
   local_20a8 = 0;
   local_20e8 = (char*)0x0;
   local_20b8 = 2;
   local_20d8 = (undefined1[16])0x0;
   local_20c8 = (undefined1[16])0x0;
   if (param_3 != (bool*)0x0) {
      *param_3 = true;
   }
   local_2161 = '\0';
   local_213c = 0;
   local_2128 = (long*)0x0;
   LAB_001032d0:do {
      local_2088 = 0;
      local_2080 = (undefined1[16])0x0;
      Variant::operator_cast_to_String((Variant*)&local_20f8);
      pcVar5 = local_20f8;
      pcVar2 = local_2130;
      if (local_2130 == local_20f8) {
         if (local_2130 == (char*)0x0) goto LAB_0010333f;
         LOCK();
         plVar12 = (long*)( local_2130 + -0x10 );
         *plVar12 = *plVar12 + -1;
         UNLOCK();
         if (*plVar12 != 0) goto LAB_0010333f;
         local_20f8 = (char*)0x0;
         Memory::free_static(pcVar5 + -0x10, false);
         cVar7 = Variant::needs_deinit[(int)local_2088];
      } else {
         if (local_2130 != (char*)0x0) {
            LOCK();
            plVar12 = (long*)( local_2130 + -0x10 );
            *plVar12 = *plVar12 + -1;
            UNLOCK();
            if (*plVar12 == 0) {
               local_2130 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }
         }
         local_2130 = local_20f8;
         LAB_0010333f:cVar7 = Variant::needs_deinit[(int)local_2088];
      }
      if (cVar7 != '\0') {
         Variant::_clear_internal();
      }
      if (( local_20d8._0_8_ != 0 ) && ( local_20b8._4_4_ != 0 )) {
         lVar14 = 0;
         uVar1 = *(uint*)( hash_table_size_primes + ( local_20b8 & 0xffffffff ) * 4 );
         if (uVar1 != 0) {
            do {
               if (*(int*)( local_20d8._8_8_ + lVar14 ) != 0) {
                  *(int*)( local_20d8._8_8_ + lVar14 ) = 0;
                  pvVar13 = *(void**)( local_20d8._0_8_ + lVar14 * 2 );
                  if (Variant::needs_deinit[*(int*)( (long)pvVar13 + 0x18 )] != '\0') {
                     Variant::_clear_internal();
                  }
                  if (*(long*)( (long)pvVar13 + 0x10 ) != 0) {
                     LOCK();
                     plVar12 = (long*)( *(long*)( (long)pvVar13 + 0x10 ) + -0x10 );
                     *plVar12 = *plVar12 + -1;
                     UNLOCK();
                     if (*plVar12 == 0) {
                        lVar11 = *(long*)( (long)pvVar13 + 0x10 );
                        *(undefined8*)( (long)pvVar13 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar11 + -0x10 ), false);
                     }
                  }
                  Memory::free_static(pvVar13, false);
                  *(undefined8*)( local_20d8._0_8_ + lVar14 * 2 ) = 0;
               }
               lVar14 = lVar14 + 4;
            } while ( (ulong)uVar1 << 2 != lVar14 );
         }
         local_20b8 = local_20b8 & 0xffffffff;
         local_20c8 = (undefined1[16])0x0;
      }
      pcVar2 = local_20e8;
      if (local_20e8 != (char*)0x0) {
         LOCK();
         plVar12 = (long*)( local_20e8 + -0x10 );
         *plVar12 = *plVar12 + -1;
         UNLOCK();
         if (*plVar12 == 0) {
            local_20e8 = (char*)0x0;
            Memory::free_static(pcVar2 + -0x10, false);
         }
         local_20e8 = (char*)0x0;
      }
      local_2140 = VariantParser::parse_tag_assign_eof((Stream*)local_2068, &local_213c, (String*)&local_2128, (Tag*)&local_20e8, (String*)&local_2130, (Variant*)&local_20a8, (ResourceParser*)0x0, true);
      iVar3 = local_213c;
      if (local_2140 == 0x12) goto LAB_00103f45;
      if (local_2140 != 0) {
         local_2100 = (long*)0x0;
         plVar12 = local_2128 + -2;
         if (local_2128 != (long*)0x0) goto LAB_00103b30;
         goto LAB_00103b59;
      }
      if (( local_2130 != (char*)0x0 ) && ( 1 < *(uint*)( local_2130 + -8 ) )) {
         if (local_2161 == '\0') {
            cVar7 = String::begins_with((char*)&local_2130);
            if (( cVar7 != '\0' ) && ( ( *(long*)param_2 == 0 || ( *(uint*)( *(long*)param_2 + -8 ) < 2 ) ) )) {
               String::get_slicec((wchar32)(CowData<char32_t>*)&local_2100, (int)(String*)&local_2130);
               pSVar9 = (String*)OS::get_singleton();
               local_2161 = OS::has_feature(pSVar9);
               if (local_2161 == '\0') {
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_2100);
               } else {
                  Variant::operator_cast_to_String((Variant*)&local_20f8);
                  if (*(char**)param_2 != local_20f8) {
                     CowData<char32_t>::_unref((CowData<char32_t>*)param_2);
                     pcVar2 = local_20f8;
                     local_20f8 = (char*)0x0;
                     *(char**)param_2 = pcVar2;
                  }
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_20f8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_2100);
               }
               goto LAB_001032d0;
            }
            cVar7 = String::operator ==((String*)&local_2130, "path");
            if (cVar7 != '\0') {
               Variant::operator_cast_to_String((Variant*)&local_20f8);
               pcVar2 = local_20f8;
               local_2161 = cVar7;
               if (*(char**)param_2 == local_20f8) {
                  if (local_20f8 != (char*)0x0) {
                     LOCK();
                     plVar12 = (long*)( local_20f8 + -0x10 );
                     *plVar12 = *plVar12 + -1;
                     UNLOCK();
                     if (*plVar12 == 0) {
                        local_20f8 = (char*)0x0;
                        Memory::free_static(pcVar2 + -0x10, false);
                     }
                  }
               } else {
                  CowData<char32_t>::_unref((CowData<char32_t>*)param_2);
                  *(char**)param_2 = local_20f8;
               }
               goto LAB_001032d0;
            }
         }
         cVar7 = String::operator ==((String*)&local_2130, "type");
         if (cVar7 == '\0') {
            cVar7 = String::operator ==((String*)&local_2130, "importer");
            if (cVar7 == '\0') {
               cVar7 = String::operator ==((String*)&local_2130, "uid");
               pSVar9 = ResourceUID::singleton;
               if (cVar7 == '\0') {
                  cVar7 = String::operator ==((String*)&local_2130, "group_file");
                  if (cVar7 == '\0') {
                     cVar7 = String::operator ==((String*)&local_2130, "metadata");
                     if (cVar7 == '\0') {
                        cVar7 = String::operator ==((String*)&local_2130, "valid");
                        if (( param_3 != (bool*)0x0 ) && ( cVar7 != '\0' )) {
                           bVar8 = Variant::operator_cast_to_bool((Variant*)&local_20a8);
                           *param_3 = bVar8;
                        }
                     } else {
                        Variant::operator =((Variant*)( param_2 + 0x20 ), (Variant*)&local_20a8);
                     }
                  } else {
                     Variant::operator_cast_to_String((Variant*)&local_20f8);
                     if (*(char**)( param_2 + 0x18 ) != local_20f8) {
                        CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 0x18 ));
                        pcVar2 = local_20f8;
                        local_20f8 = (char*)0x0;
                        *(char**)( param_2 + 0x18 ) = pcVar2;
                     }
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_20f8);
                  }
               } else {
                  Variant::operator_cast_to_String((Variant*)&local_20f8);
                  uVar10 = ResourceUID::text_to_id(pSVar9);
                  *(undefined8*)( param_2 + 0x38 ) = uVar10;
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_20f8);
               }
            } else {
               Variant::operator_cast_to_String((Variant*)&local_20f8);
               pcVar2 = local_20f8;
               if (*(char**)( param_2 + 0x10 ) == local_20f8) {
                  if (local_20f8 != (char*)0x0) {
                     LOCK();
                     plVar12 = (long*)( local_20f8 + -0x10 );
                     *plVar12 = *plVar12 + -1;
                     UNLOCK();
                     if (*plVar12 == 0) {
                        local_20f8 = (char*)0x0;
                        Memory::free_static(pcVar2 + -0x10, false);
                     }
                  }
               } else {
                  CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 0x10 ));
                  *(char**)( param_2 + 0x10 ) = local_20f8;
               }
            }
         } else {
            Variant::operator_cast_to_StringName((Variant*)&local_2110);
            ClassDB::get_compatibility_remapped_class((StringName*)&local_2108);
            if (local_2108 == 0) {
               LAB_0010371c:local_2100 = (long*)0x0;
               plVar12 = *(long**)( param_2 + 8 );
               if (plVar12 != (long*)0x0) {
                  LAB_00103725:LOCK();
                  plVar12 = plVar12 + -2;
                  *plVar12 = *plVar12 + -1;
                  UNLOCK();
                  if (*plVar12 == 0) {
                     lVar14 = *(long*)( param_2 + 8 );
                     *(undefined8*)( param_2 + 8 ) = 0;
                     Memory::free_static((void*)( lVar14 + -0x10 ), false);
                  }
                  goto LAB_001036b1;
               }
            } else {
               pcVar2 = *(char**)( local_2108 + 8 );
               local_2100 = (long*)0x0;
               if (pcVar2 == (char*)0x0) {
                  if (*(long*)( local_2108 + 0x10 ) == 0) goto LAB_0010371c;
                  plVar12 = (long*)( *(long*)( local_2108 + 0x10 ) + -0x10 );
                  do {
                     lVar14 = *plVar12;
                     if (lVar14 == 0) goto LAB_0010369f;
                     LOCK();
                     lVar11 = *plVar12;
                     bVar8 = lVar14 == lVar11;
                     if (bVar8) {
                        *plVar12 = lVar14 + 1;
                        lVar11 = lVar14;
                     }
                     UNLOCK();
                  } while ( !bVar8 );
                  if (lVar11 != -1) {
                     local_2100 = *(long**)( local_2108 + 0x10 );
                  }
               } else {
                  local_20f0 = strlen(pcVar2);
                  local_20f8 = pcVar2;
                  String::parse_latin1((StrRange*)&local_2100);
               }
               LAB_0010369f:plVar4 = local_2100;
               plVar12 = *(long**)( param_2 + 8 );
               if (local_2100 == plVar12) {
                  if (local_2100 != (long*)0x0) {
                     LOCK();
                     plVar12 = local_2100 + -2;
                     *plVar12 = *plVar12 + -1;
                     UNLOCK();
                     if (*plVar12 == 0) {
                        local_2100 = (long*)0x0;
                        Memory::free_static(plVar4 + -2, false);
                     }
                  }
               } else {
                  if (plVar12 != (long*)0x0) goto LAB_00103725;
                  LAB_001036b1:*(long**)( param_2 + 8 ) = local_2100;
               }
            }
            if (( StringName::configured != '\0' ) && ( ( ( local_2108 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_2110 != 0 ) ) )) {
               StringName::unref();
            }
         }
         goto LAB_001032d0;
      }
      cVar7 = String::operator !=((String*)&local_20e8, "remap");
   } while ( cVar7 == '\0' );
   bVar8 = Variant::operator_cast_to_bool((Variant*)( param_2 + 0x20 ));
   if (( ( bVar8 ) && ( *(long*)param_2 != 0 ) ) && ( 1 < *(uint*)( *(long*)param_2 + -8 ) )) {
      Variant::operator_cast_to_Dictionary(local_2120);
      Variant::Variant((Variant*)&local_2088, "has_editor_variant");
      cVar7 = Dictionary::has(local_2120);
      if (Variant::needs_deinit[(int)local_2088] != '\0') {
         Variant::_clear_internal();
      }
      if (cVar7 != '\0') {
         String::get_extension();
         local_20f8 = ".editor.";
         local_2110 = 0;
         local_20f0 = 8;
         String::parse_latin1((StrRange*)&local_2110);
         String::get_basename();
         String::operator +((String*)&local_2108, local_2118);
         String::operator +((String*)&local_20f8, (String*)&local_2108);
         pcVar2 = local_20f8;
         if (*(char**)param_2 == local_20f8) {
            if (local_20f8 != (char*)0x0) {
               LOCK();
               plVar12 = (long*)( local_20f8 + -0x10 );
               *plVar12 = *plVar12 + -1;
               UNLOCK();
               if (*plVar12 == 0) {
                  local_20f8 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }
            }
         } else {
            CowData<char32_t>::_unref((CowData<char32_t>*)param_2);
            *(char**)param_2 = local_20f8;
         }
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_2108);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_2118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_2110);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_2100);
      }
      Dictionary::~Dictionary((Dictionary*)local_2120);
   }
   if (( *(long*)( param_2 + 8 ) != 0 ) && ( 1 < *(uint*)( *(long*)( param_2 + 8 ) + -8 ) )) {
      if (( *(long*)param_2 != 0 ) && ( 1 < *(uint*)( *(long*)param_2 + -8 ) )) {
         LAB_00103f45:local_2140 = 0;
         goto LAB_00103c45;
      }
      if (( *(long*)( param_2 + 0x10 ) != 0 ) && ( 1 < *(uint*)( *(long*)( param_2 + 0x10 ) + -8 ) )) {
         get_importer_by_name((String*)&local_2100);
         if (local_2100 != (long*)0x0) {
            ( **(code**)( *local_2100 + 0x168 ) )((StrRange*)&local_20f8);
            if (( local_20f8 == (char*)0x0 ) || ( *(uint*)( local_20f8 + -8 ) < 2 )) {
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_20f8);
               Ref<ResourceImporter>::unref((Ref<ResourceImporter>*)&local_2100);
               goto LAB_00103f45;
            }
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_20f8);
         }
         Ref<ResourceImporter>::unref((Ref<ResourceImporter>*)&local_2100);
      }
   }
   local_2140 = 0x10;
   goto LAB_00103c45;
   LAB_00103b30:do {
      lVar14 = *plVar12;
      if (lVar14 == 0) goto LAB_00103b59;
      LOCK();
      lVar11 = *plVar12;
      bVar8 = lVar14 == lVar11;
      if (bVar8) {
         *plVar12 = lVar14 + 1;
         lVar11 = lVar14;
      }
      UNLOCK();
   } while ( !bVar8 );
   if (lVar11 != -1) {
      local_2100 = local_2128;
   }
   LAB_00103b59:local_2108 = 0;
   plVar12 = (long*)( *(long*)param_1 + -0x10 );
   if (*(long*)param_1 != 0) {
      do {
         lVar14 = *plVar12;
         if (lVar14 == 0) goto LAB_00103b99;
         LOCK();
         lVar11 = *plVar12;
         bVar8 = lVar14 == lVar11;
         if (bVar8) {
            *plVar12 = lVar14 + 1;
            lVar11 = lVar14;
         }
         UNLOCK();
      } while ( !bVar8 );
      if (lVar11 != -1) {
         local_2108 = *(long*)param_1;
      }
   }
   LAB_00103b99:local_2110 = 0;
   local_20f8 = "ResourceFormatImporter::load - %s.import:%d error: %s.";
   local_20f0 = 0x36;
   String::parse_latin1((StrRange*)&local_2110);
   vformat<String,int,String>((StrRange*)&local_20f8, (StrRange*)&local_2110, (CowData<char32_t>*)&local_2108, iVar3, (CowData<char32_t>*)&local_2100);
   _err_print_error("_get_path_and_type", "core/io/resource_importer.cpp", 0x4e, (StrRange*)&local_20f8, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_20f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2110);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2100);
   LAB_00103c45:CowData<char32_t>::_unref((CowData<char32_t>*)&local_2128);
   if ((void*)local_20d8._0_8_ != (void*)0x0) {
      pvVar13 = (void*)local_20d8._0_8_;
      if (local_20b8._4_4_ != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( local_20b8 & 0xffffffff ) * 4 );
         if (uVar1 == 0) {
            local_20b8 = local_20b8 & 0xffffffff;
            local_20c8 = (undefined1[16])0x0;
         } else {
            lVar14 = 0;
            do {
               if (*(int*)( local_20d8._8_8_ + lVar14 ) != 0) {
                  pvVar13 = *(void**)( (long)pvVar13 + lVar14 * 2 );
                  *(int*)( local_20d8._8_8_ + lVar14 ) = 0;
                  if (Variant::needs_deinit[*(int*)( (long)pvVar13 + 0x18 )] != '\0') {
                     Variant::_clear_internal();
                  }
                  if (*(long*)( (long)pvVar13 + 0x10 ) != 0) {
                     LOCK();
                     plVar12 = (long*)( *(long*)( (long)pvVar13 + 0x10 ) + -0x10 );
                     *plVar12 = *plVar12 + -1;
                     UNLOCK();
                     if (*plVar12 == 0) {
                        lVar11 = *(long*)( (long)pvVar13 + 0x10 );
                        *(undefined8*)( (long)pvVar13 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar11 + -0x10 ), false);
                     }
                  }
                  Memory::free_static(pvVar13, false);
                  *(undefined8*)( local_20d8._0_8_ + lVar14 * 2 ) = 0;
                  pvVar13 = (void*)local_20d8._0_8_;
               }
               lVar14 = lVar14 + 4;
            } while ( lVar14 != (ulong)uVar1 * 4 );
            local_20b8 = local_20b8 & 0xffffffff;
            local_20c8 = (undefined1[16])0x0;
            if (pvVar13 == (void*)0x0) goto LAB_00103d3d;
         }
      }
      Memory::free_static(pvVar13, false);
      Memory::free_static((void*)local_20d8._8_8_, false);
   }
   LAB_00103d3d:CowData<char32_t>::_unref((CowData<char32_t>*)&local_20e8);
   if (Variant::needs_deinit[(int)local_20a8] != '\0') {
      Variant::_clear_internal();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2130);
   local_2068[0] = VariantParser::parse_tag_assign_eof;
   if (( ( local_50 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),pOVar6 = local_50,cVar7 != '\0' )) &&( cVar7 = cVar7 != '\0' )(**(code**)( *(long*)pOVar6 + 0x140 ))(pOVar6);
   Memory::free_static(pOVar6, false);
}if (( ( local_2138 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),cVar7 != '\0' )) &&( cVar7 = cVar7 != '\0' )(**(code**)( *(long*)local_2138 + 0x140 ))(local_2138);Memory::free_static(local_2138, false);}LAB_00103a2b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return local_2140;
}/* WARNING: Subroutine does not return */__stack_chk_fail();}/* ResourceFormatImporter::get_internal_resource_path(String const&) const */String *ResourceFormatImporter::get_internal_resource_path(String *param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined8 uVar4;
   int iVar5;
   String *in_RDX;
   ResourceFormatImporter *in_RSI;
   long in_FS_OFFSET;
   undefined1 local_68[16];
   undefined1 local_58[16];
   int local_48;
   undefined1 local_40[16];
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   local_48 = 0;
   local_30 = 0xffffffffffffffff;
   local_40 = (undefined1[16])0x0;
   iVar5 = _get_path_and_type(in_RSI, in_RDX, (PathAndType*)local_68, (bool*)0x0);
   *(undefined8*)param_1 = 0;
   if (( iVar5 == 0 ) && ( local_68._0_8_ != 0 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)param_1, (CowData*)local_68);
   }
   if (Variant::needs_deinit[local_48] != '\0') {
      Variant::_clear_internal();
   }
   uVar4 = local_58._8_8_;
   if (local_58._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_58._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58._8_8_ = 0;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   uVar4 = local_58._0_8_;
   if (local_58._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_58._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_58._8_8_;
         local_58 = auVar3 << 0x40;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   uVar4 = local_68._8_8_;
   if (local_68._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_68._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68._8_8_ = 0;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   uVar4 = local_68._0_8_;
   if (local_68._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_68._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_68._8_8_;
         local_68 = auVar2 << 0x40;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ResourceFormatImporter::get_import_group_file(String const&) const */String *ResourceFormatImporter::get_import_group_file(String *param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined8 uVar4;
   String *in_RDX;
   ResourceFormatImporter *in_RSI;
   long in_FS_OFFSET;
   bool local_59;
   undefined1 local_58[16];
   undefined1 local_48[16];
   int local_38;
   undefined1 local_30[16];
   undefined8 local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (undefined1[16])0x0;
   local_48 = (undefined1[16])0x0;
   local_59 = true;
   local_38 = 0;
   local_20 = 0xffffffffffffffff;
   local_30 = (undefined1[16])0x0;
   _get_path_and_type(in_RSI, in_RDX, (PathAndType*)local_58, &local_59);
   *(undefined8*)param_1 = 0;
   if (( local_59 != false ) && ( local_48._8_8_ != 0 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)param_1, (CowData*)( local_48 + 8 ));
   }
   if (Variant::needs_deinit[local_38] != '\0') {
      Variant::_clear_internal();
   }
   uVar4 = local_48._8_8_;
   if (local_48._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_48._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48._8_8_ = 0;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   uVar4 = local_48._0_8_;
   if (local_48._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_48._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_48._8_8_;
         local_48 = auVar3 << 0x40;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   uVar4 = local_58._8_8_;
   if (local_58._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_58._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58._8_8_ = 0;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   uVar4 = local_58._0_8_;
   if (local_58._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_58._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_58._8_8_;
         local_58 = auVar2 << 0x40;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ResourceFormatImporter::is_import_valid(String const&) const */undefined1 ResourceFormatImporter::is_import_valid(ResourceFormatImporter *this, String *param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   bool bVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   bool local_59;
   undefined1 local_58[16];
   undefined1 local_48[16];
   int local_38;
   undefined1 local_30[16];
   undefined8 local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (undefined1[16])0x0;
   local_48 = (undefined1[16])0x0;
   local_59 = true;
   local_38 = 0;
   local_20 = 0xffffffffffffffff;
   local_30 = (undefined1[16])0x0;
   _get_path_and_type(this, param_1, (PathAndType*)local_58, &local_59);
   bVar4 = local_59;
   if (Variant::needs_deinit[local_38] != '\0') {
      Variant::_clear_internal();
   }
   uVar5 = local_48._8_8_;
   if (local_48._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_48._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48._8_8_ = 0;
         Memory::free_static((void*)( uVar5 + -0x10 ), false);
      }
   }
   uVar5 = local_48._0_8_;
   if (local_48._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_48._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_48._8_8_;
         local_48 = auVar3 << 0x40;
         Memory::free_static((void*)( uVar5 + -0x10 ), false);
      }
   }
   uVar5 = local_58._8_8_;
   if (local_58._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_58._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58._8_8_ = 0;
         Memory::free_static((void*)( uVar5 + -0x10 ), false);
      }
   }
   uVar5 = local_58._0_8_;
   if (local_58._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_58._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_58._8_8_;
         local_58 = auVar2 << 0x40;
         Memory::free_static((void*)( uVar5 + -0x10 ), false);
      }
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ResourceFormatImporter::get_resource_type(String const&) const */String *ResourceFormatImporter::get_resource_type(String *param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined8 uVar4;
   int iVar5;
   String *in_RDX;
   ResourceFormatImporter *in_RSI;
   long in_FS_OFFSET;
   undefined1 local_58[16];
   undefined1 local_48[16];
   int local_38;
   undefined1 local_30[16];
   undefined8 local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (undefined1[16])0x0;
   local_48 = (undefined1[16])0x0;
   local_38 = 0;
   local_20 = 0xffffffffffffffff;
   local_30 = (undefined1[16])0x0;
   iVar5 = _get_path_and_type(in_RSI, in_RDX, (PathAndType*)local_58, (bool*)0x0);
   *(undefined8*)param_1 = 0;
   if (iVar5 == 0) {
      if (local_58._8_8_ != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)param_1, (CowData*)( local_58 + 8 ));
      }
   } else {
      String::parse_latin1((StrRange*)param_1);
   }
   if (Variant::needs_deinit[local_38] != '\0') {
      Variant::_clear_internal();
   }
   uVar4 = local_48._8_8_;
   if (local_48._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_48._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48._8_8_ = 0;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   uVar4 = local_48._0_8_;
   if (local_48._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_48._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_48._8_8_;
         local_48 = auVar3 << 0x40;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   uVar4 = local_58._8_8_;
   if (local_58._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_58._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58._8_8_ = 0;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   uVar4 = local_58._0_8_;
   if (local_58._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_58._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_58._8_8_;
         local_58 = auVar2 << 0x40;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ResourceFormatImporter::get_resource_uid(String const&) const */undefined8 ResourceFormatImporter::get_resource_uid(ResourceFormatImporter *this, String *param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined8 uVar4;
   int iVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
   undefined1 local_58[16];
   undefined1 local_48[16];
   int local_38;
   undefined1 local_30[16];
   undefined8 local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (undefined1[16])0x0;
   local_48 = (undefined1[16])0x0;
   local_38 = 0;
   local_20 = 0xffffffffffffffff;
   local_30 = (undefined1[16])0x0;
   iVar5 = _get_path_and_type(this, param_1, (PathAndType*)local_58, (bool*)0x0);
   uVar6 = local_20;
   if (iVar5 != 0) {
      uVar6 = 0xffffffffffffffff;
   }
   if (Variant::needs_deinit[local_38] != '\0') {
      Variant::_clear_internal();
   }
   uVar4 = local_48._8_8_;
   if (local_48._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_48._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48._8_8_ = 0;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   uVar4 = local_48._0_8_;
   if (local_48._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_48._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_48._8_8_;
         local_48 = auVar3 << 0x40;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   uVar4 = local_58._8_8_;
   if (local_58._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_58._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58._8_8_ = 0;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   uVar4 = local_58._0_8_;
   if (local_58._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_58._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_58._8_8_;
         local_58 = auVar2 << 0x40;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar6;
}/* ResourceFormatImporter::get_resource_import_info(String const&, StringName&, long&, String&)
   const */int ResourceFormatImporter::get_resource_import_info(ResourceFormatImporter *this, String *param_1, StringName *param_2, long *param_3, String *param_4) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined8 uVar4;
   int iVar5;
   long in_FS_OFFSET;
   undefined *local_98;
   undefined8 local_90;
   undefined1 local_88[16];
   undefined1 local_78[16];
   int local_68;
   undefined1 local_60[16];
   long local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88 = (undefined1[16])0x0;
   local_78 = (undefined1[16])0x0;
   local_68 = 0;
   local_50 = -1;
   local_60 = (undefined1[16])0x0;
   iVar5 = _get_path_and_type(this, param_1, (PathAndType*)local_88, (bool*)0x0);
   if (iVar5 == 0) {
      StringName::StringName((StringName*)&local_98, (String*)( local_88 + 8 ), false);
      if (*(undefined**)param_2 == local_98) {
         if (( StringName::configured != '\0' ) && ( local_98 != (undefined*)0x0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         *(undefined**)param_2 = local_98;
      }
      *param_3 = local_50;
      if (*(long*)param_4 != local_78._8_8_) {
         CowData<char32_t>::_ref((CowData<char32_t>*)param_4, (CowData*)( local_78 + 8 ));
      }
   } else {
      StringName::StringName((StringName*)&local_98, "", false);
      if (*(undefined**)param_2 == local_98) {
         if (( StringName::configured != '\0' ) && ( local_98 != (undefined*)0x0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         *(undefined**)param_2 = local_98;
      }
      *param_3 = -1;
      local_98 = &_LC8;
      local_90 = 0;
      String::parse_latin1((StrRange*)param_4);
   }
   if (Variant::needs_deinit[local_68] != '\0') {
      Variant::_clear_internal();
   }
   uVar4 = local_78._8_8_;
   if (local_78._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_78._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78._8_8_ = 0;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   uVar4 = local_78._0_8_;
   if (local_78._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_78._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_78._8_8_;
         local_78 = auVar2 << 0x40;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   uVar4 = local_88._8_8_;
   if (local_88._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_88._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88._8_8_ = 0;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   uVar4 = local_88._0_8_;
   if (local_88._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_88._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_88._8_8_;
         local_88 = auVar3 << 0x40;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar5;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ResourceFormatImporter::get_resource_metadata(String const&) const */String *ResourceFormatImporter::get_resource_metadata(String *param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined8 uVar4;
   int iVar5;
   String *in_RDX;
   ResourceFormatImporter *in_RSI;
   long in_FS_OFFSET;
   undefined1 local_58[16];
   undefined1 local_48[16];
   int local_38[2];
   undefined1 local_30[16];
   undefined8 local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (undefined1[16])0x0;
   local_48 = (undefined1[16])0x0;
   local_38[0] = 0;
   local_20 = 0xffffffffffffffff;
   local_30 = (undefined1[16])0x0;
   iVar5 = _get_path_and_type(in_RSI, in_RDX, (PathAndType*)local_58, (bool*)0x0);
   if (iVar5 == 0) {
      Variant::Variant((Variant*)param_1, (Variant*)local_38);
   } else {
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   }
   if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
   }
   uVar4 = local_48._8_8_;
   if (local_48._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_48._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48._8_8_ = 0;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   uVar4 = local_48._0_8_;
   if (local_48._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_48._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_48._8_8_;
         local_48 = auVar3 << 0x40;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   uVar4 = local_58._8_8_;
   if (local_58._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_58._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58._8_8_ = 0;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   uVar4 = local_58._0_8_;
   if (local_58._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_58._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_58._8_8_;
         local_58 = auVar2 << 0x40;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ResourceFormatImporter::get_classes_used(String const&, HashSet<StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >*) */void ResourceFormatImporter::get_classes_used(ResourceFormatImporter *this, String *param_1, HashSet *param_2) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined8 uVar4;
   int iVar5;
   long in_FS_OFFSET;
   undefined1 local_68[16];
   undefined1 local_58[16];
   int local_48;
   undefined1 local_40[16];
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   local_48 = 0;
   local_30 = 0xffffffffffffffff;
   local_40 = (undefined1[16])0x0;
   iVar5 = _get_path_and_type(this, param_1, (PathAndType*)local_68, (bool*)0x0);
   if (iVar5 == 0) {
      ResourceLoader::get_classes_used((String*)local_68, param_2);
   }
   if (Variant::needs_deinit[local_48] != '\0') {
      Variant::_clear_internal();
   }
   uVar4 = local_58._8_8_;
   if (local_58._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_58._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58._8_8_ = 0;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   uVar4 = local_58._0_8_;
   if (local_58._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_58._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_58._8_8_;
         local_58 = auVar3 << 0x40;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   uVar4 = local_68._8_8_;
   if (local_68._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_68._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68._8_8_ = 0;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   uVar4 = local_68._0_8_;
   if (local_68._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_68._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_68._8_8_;
         local_68 = auVar2 << 0x40;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ResourceFormatImporter::get_dependencies(String const&, List<String, DefaultAllocator>*, bool) */void ResourceFormatImporter::get_dependencies(ResourceFormatImporter *this, String *param_1, List *param_2, bool param_3) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined8 uVar4;
   int iVar5;
   long in_FS_OFFSET;
   undefined1 local_68[16];
   undefined1 local_58[16];
   int local_48;
   undefined1 local_40[16];
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   local_48 = 0;
   local_30 = 0xffffffffffffffff;
   local_40 = (undefined1[16])0x0;
   iVar5 = _get_path_and_type(this, param_1, (PathAndType*)local_68, (bool*)0x0);
   if (iVar5 == 0) {
      ResourceLoader::get_dependencies((String*)local_68, param_2, param_3);
   }
   if (Variant::needs_deinit[local_48] != '\0') {
      Variant::_clear_internal();
   }
   uVar4 = local_58._8_8_;
   if (local_58._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_58._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58._8_8_ = 0;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   uVar4 = local_58._0_8_;
   if (local_58._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_58._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_58._8_8_;
         local_58 = auVar3 << 0x40;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   uVar4 = local_68._8_8_;
   if (local_68._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_68._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68._8_8_ = 0;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   uVar4 = local_68._0_8_;
   if (local_68._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_68._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_68._8_8_;
         local_68 = auVar2 << 0x40;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ResourceFormatImporter::are_import_settings_valid(String const&) const */char ResourceFormatImporter::are_import_settings_valid(ResourceFormatImporter *this, String *param_1) {
   long *plVar1;
   code *pcVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined8 uVar5;
   char cVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   long in_FS_OFFSET;
   char local_a1;
   bool local_91;
   long local_90;
   undefined1 local_88[16];
   undefined1 local_78[16];
   int local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88 = (undefined1[16])0x0;
   local_78 = (undefined1[16])0x0;
   local_91 = true;
   local_68 = 0;
   local_50 = 0xffffffffffffffff;
   local_60 = (undefined1[16])0x0;
   _get_path_and_type(this, param_1, (PathAndType*)local_88, &local_91);
   local_a1 = local_91;
   if (local_91 == false) {
      LAB_00105270:local_a1 = '\0';
      LAB_00105180:if (Variant::needs_deinit[local_68] != '\0') {
         Variant::_clear_internal();
      }
      uVar5 = local_78._8_8_;
      if (local_78._8_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_78._8_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_78._8_8_ = 0;
            Memory::free_static((void*)( uVar5 + -0x10 ), false);
         }
      }
      uVar5 = local_78._0_8_;
      if (local_78._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_78._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_78._8_8_;
            local_78 = auVar3 << 0x40;
            Memory::free_static((void*)( uVar5 + -0x10 ), false);
         }
      }
      uVar5 = local_88._8_8_;
      if (local_88._8_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_88._8_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_88._8_8_ = 0;
            Memory::free_static((void*)( uVar5 + -0x10 ), false);
         }
      }
      uVar5 = local_88._0_8_;
      if (local_88._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_88._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = local_88._8_8_;
            local_88 = auVar4 << 0x40;
            Memory::free_static((void*)( uVar5 + -0x10 ), false);
         }
      }
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return local_a1;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   lVar7 = *(long*)( this + 0x290 );
   lVar9 = 0;
   joined_r0x0010507b:if (lVar7 != 0) {
      do {
         if (*(long*)( lVar7 + -8 ) <= lVar9) break;
         ( **(code**)( **(long**)( lVar7 + lVar9 * 8 ) + 0x150 ) )((Dictionary*)&local_90);
         cVar6 = String::operator ==((String*)&local_90, (String*)local_78);
         lVar7 = local_90;
         if (local_90 != 0) {
            LOCK();
            plVar1 = (long*)( local_90 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_90 = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
            }
         }
         lVar7 = *(long*)( this + 0x290 );
         if (cVar6 != '\0') {
            if (lVar7 == 0) {
               lVar8 = 0;
               LAB_00105283:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar8, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }
            lVar8 = *(long*)( lVar7 + -8 );
            if (lVar8 <= lVar9) goto LAB_00105283;
            plVar1 = *(long**)( lVar7 + lVar9 * 8 );
            pcVar2 = *(code**)( *plVar1 + 0x1f8 );
            Variant::operator_cast_to_Dictionary((Variant*)&local_90);
            if (pcVar2 != ResourceImporter::are_import_settings_valid) goto code_r0x0010514c;
            Dictionary::~Dictionary((Dictionary*)&local_90);
            lVar7 = *(long*)( this + 0x290 );
         }
         lVar9 = lVar9 + 1;
         if (lVar7 == 0) break;
      } while ( true );
   }
   goto LAB_00105180;
   code_r0x0010514c:cVar6 = ( *pcVar2 )(plVar1, param_1, (Dictionary*)&local_90);
   Dictionary::~Dictionary((Dictionary*)&local_90);
   if (cVar6 == '\0') goto LAB_00105270;
   lVar7 = *(long*)( this + 0x290 );
   lVar9 = lVar9 + 1;
   goto joined_r0x0010507b;
}/* ResourceFormatImporter::load_internal(String const&, Error*, bool, float*,
   ResourceFormatLoader::CacheMode, bool) */undefined8 *ResourceFormatImporter::load_internal(undefined8 *param_1, ResourceFormatImporter *param_2, String *param_3, int *param_4, undefined1 param_5, undefined8 param_6, undefined4 param_7, char param_8) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   long in_FS_OFFSET;
   Object *local_90;
   undefined1 local_88[16];
   undefined1 local_78[16];
   int local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88 = (undefined1[16])0x0;
   local_78 = (undefined1[16])0x0;
   local_68 = 0;
   local_50 = 0xffffffffffffffff;
   local_60 = (undefined1[16])0x0;
   iVar6 = _get_path_and_type(param_2, param_3, (PathAndType*)local_88, (bool*)0x0);
   if (iVar6 == 0) {
      if (( ( ( ( param_8 == '\0' ) || ( local_88._0_8_ == 0 ) ) || ( *(uint*)( local_88._0_8_ + -8 ) < 2 ) ) || ( cVar5 = FileAccess::exists((String*)local_88) ),cVar5 != '\0' )) &&( ResourceLoader::_load(&local_90, (CowData*)local_88, param_3, local_88 + 8, param_7, param_4, param_5, param_6),local_90 != (Object*)0x0 )(*(code**)( *(long*)local_90 + 0x1b8 ) == Resource::set_import_last_modified_time) * (long*)( local_90 + 0x1a0 ) = *(long*)( local_90 + 0x198 );
   } else {
      ( **(code**)( *(long*)local_90 + 0x1b8 ) )();
   }
   if (( *(long*)( local_90 + 0x1a8 ) == local_88._0_8_ ) || ( CowData<char32_t>::_ref((CowData<char32_t>*)( local_90 + 0x1a8 ), (CowData*)local_88),local_90 != (Object*)0x0 )) {
      *param_1 = local_90;
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
         *param_1 = 0;
      }
      if (( ( local_90 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)local_90 + 0x140 ))(local_90);
      Memory::free_static(local_90, false);
   }
   goto LAB_00105370;
}}
  }
  elseif (param_4 != (int*)0x0) {
   *param_4 = iVar6;
}*param_1 = 0;LAB_00105370:if (Variant::needs_deinit[local_68] != '\0') {
   Variant::_clear_internal();
}uVar4 = local_78._8_8_;if (local_78._8_8_ != 0) {
   LOCK();
   plVar1 = (long*)( local_78._8_8_ + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_78._8_8_ = 0;
      Memory::free_static((void*)( uVar4 + -0x10 ), false);
   }
}uVar4 = local_78._0_8_;if (local_78._0_8_ != 0) {
   LOCK();
   plVar1 = (long*)( local_78._0_8_ + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_78._8_8_;
      local_78 = auVar3 << 0x40;
      Memory::free_static((void*)( uVar4 + -0x10 ), false);
   }
}uVar4 = local_88._8_8_;if (local_88._8_8_ != 0) {
   LOCK();
   plVar1 = (long*)( local_88._8_8_ + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_88._8_8_ = 0;
      Memory::free_static((void*)( uVar4 + -0x10 ), false);
   }
}uVar4 = local_88._0_8_;if (local_88._0_8_ != 0) {
   LOCK();
   plVar1 = (long*)( local_88._0_8_ + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_88._8_8_;
      local_88 = auVar2 << 0x40;
      Memory::free_static((void*)( uVar4 + -0x10 ), false);
   }
}if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}return param_1;}/* ResourceFormatImporter::load(String const&, String const&, Error*, bool, float*,
   ResourceFormatLoader::CacheMode) */undefined8 ResourceFormatImporter::load(undefined8 param_1) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (ResourceImporter::load_on_startup == (code*)0x0) {
      load_internal();
   } else {
      ( *ResourceImporter::load_on_startup )(param_1);
   }
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ResourceFormatImporter::get_import_order_threads_and_importer(String const&, int&, bool&,
   String&) const */undefined8 ResourceFormatImporter::get_import_order_threads_and_importer(ResourceFormatImporter *this, String *param_1, int *param_2, bool *param_3, String *param_4) {
   long *plVar1;
   Object *pOVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   Object *pOVar5;
   char cVar6;
   undefined1 uVar7;
   int iVar8;
   undefined8 uVar9;
   long lVar10;
   Object *pOVar11;
   long in_FS_OFFSET;
   long local_a8;
   long local_a0;
   Object *local_98;
   undefined8 local_90;
   undefined1 local_88[16];
   undefined1 local_78[16];
   int local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_2 = 0;
   local_98 = (Object*)&_LC8;
   local_90 = 0;
   String::parse_latin1((StrRange*)param_4);
   *param_3 = false;
   local_a0 = 0;
   local_98 = (Object*)0x10821a;
   local_90 = 7;
   String::parse_latin1((StrRange*)&local_a0);
   String::operator +((String*)&local_98, param_1);
   cVar6 = FileAccess::exists((String*)&local_98);
   pOVar2 = local_98;
   if (local_98 != (Object*)0x0) {
      LOCK();
      pOVar11 = local_98 + -0x10;
      *(long*)pOVar11 = *(long*)pOVar11 + -1;
      UNLOCK();
      if (*(long*)pOVar11 == 0) {
         local_98 = (Object*)0x0;
         Memory::free_static(pOVar2 + -0x10, false);
      }
   }
   lVar10 = local_a0;
   if (local_a0 != 0) {
      LOCK();
      plVar1 = (long*)( local_a0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a0 = 0;
         Memory::free_static((void*)( lVar10 + -0x10 ), false);
      }
   }
   if (cVar6 == '\0') {
      String::get_extension();
      String::to_lower();
      get_importer_by_extension((ResourceFormatImporter*)&local_98, (String*)this);
      pOVar2 = local_98;
      if (local_98 == (Object*)0x0) {
         pOVar11 = (Object*)0x0;
      } else {
         cVar6 = RefCounted::reference();
         pOVar11 = (Object*)0x0;
         if (cVar6 != '\0') {
            pOVar11 = pOVar2;
         }
         cVar6 = RefCounted::unreference();
         if (( cVar6 != '\0' ) && ( cVar6 = predelete_handler(pOVar2) ),cVar6 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }
      }
      lVar10 = local_a0;
      if (local_a0 != 0) {
         LOCK();
         plVar1 = (long*)( local_a0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_a0 = 0;
            Memory::free_static((void*)( lVar10 + -0x10 ), false);
         }
      }
      if (local_a8 != 0) {
         LOCK();
         plVar1 = (long*)( local_a8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_a8 + -0x10 ), false);
         }
      }
      goto joined_r0x001059b6;
   }
   local_88 = (undefined1[16])0x0;
   pOVar11 = (Object*)0x0;
   local_78 = (undefined1[16])0x0;
   local_68 = 0;
   local_50 = 0xffffffffffffffff;
   local_60 = (undefined1[16])0x0;
   iVar8 = _get_path_and_type(this, param_1, (PathAndType*)local_88, (bool*)0x0);
   if (( iVar8 == 0 ) && ( get_importer_by_name((String*)&local_98),pOVar2 = local_98,local_98 != (Object*)0x0 )) {
      cVar6 = RefCounted::reference();
      if (cVar6 != '\0') {
         pOVar11 = pOVar2;
      }
      cVar6 = RefCounted::unreference();
      if (( cVar6 != '\0' ) && ( cVar6 = predelete_handler(pOVar2) ),cVar6 != '\0') {
         ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
         Memory::free_static(pOVar2, false);
      }
   }
   if (Variant::needs_deinit[local_68] != '\0') {
      Variant::_clear_internal();
   }
   uVar9 = local_78._8_8_;
   if (local_78._8_8_ == 0) {
      LAB_001057af:if (local_78._0_8_ == 0) goto LAB_001057c5;
      LAB_001057b9:LOCK();
      plVar1 = (long*)( local_78._0_8_ - 0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_001057c5;
      uVar9 = local_78._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_78._8_8_;
      local_78 = auVar3 << 0x40;
      Memory::free_static((void*)( uVar9 + -0x10 ), false);
      if (local_88._8_8_ != 0) goto LAB_001057cf;
      LAB_001057db:;
   } else {
      LOCK();
      plVar1 = (long*)( local_78._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_001057af;
      local_78._8_8_ = 0;
      Memory::free_static((void*)( uVar9 + -0x10 ), false);
      if (local_78._0_8_ != 0) goto LAB_001057b9;
      LAB_001057c5:if (local_88._8_8_ == 0) goto LAB_001057db;
      LAB_001057cf:LOCK();
      plVar1 = (long*)( local_88._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_001057db;
      uVar9 = local_88._8_8_;
      local_88._8_8_ = 0;
      Memory::free_static((void*)( uVar9 + -0x10 ), false);
   }
   if (local_88._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_88._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         uVar9 = local_88._0_8_;
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_88._8_8_;
         local_88 = auVar4 << 0x40;
         Memory::free_static((void*)( uVar9 + -0x10 ), false);
      }
   }
   joined_r0x001059b6:if (pOVar11 == (Object*)0x0) {
      uVar9 = 0x1f;
   } else {
      lVar10 = *(long*)pOVar11;
      iVar8 = 0;
      if (*(code**)( lVar10 + 0x180 ) != ResourceImporter::get_import_order) {
         iVar8 = ( **(code**)( lVar10 + 0x180 ) )(pOVar11);
         lVar10 = *(long*)pOVar11;
      }
      *param_2 = iVar8;
      ( **(code**)( lVar10 + 0x150 ) )((String*)&local_98);
      pOVar5 = local_98;
      pOVar2 = *(Object**)param_4;
      if (pOVar2 == local_98) {
         if (pOVar2 != (Object*)0x0) {
            LOCK();
            pOVar2 = pOVar2 + -0x10;
            *(long*)pOVar2 = *(long*)pOVar2 + -1;
            UNLOCK();
            if (*(long*)pOVar2 == 0) {
               local_98 = (Object*)0x0;
               Memory::free_static(pOVar5 + -0x10, false);
            }
         }
      } else {
         if (pOVar2 != (Object*)0x0) {
            LOCK();
            pOVar2 = pOVar2 + -0x10;
            *(long*)pOVar2 = *(long*)pOVar2 + -1;
            UNLOCK();
            if (*(long*)pOVar2 == 0) {
               lVar10 = *(long*)param_4;
               *(undefined8*)param_4 = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
            }
         }
         *(Object**)param_4 = local_98;
      }
      uVar7 = false;
      if (*(code**)( *(long*)pOVar11 + 0x1d8 ) != ResourceImporter::can_import_threaded) {
         uVar7 = ( **(code**)( *(long*)pOVar11 + 0x1d8 ) )(pOVar11);
      }
      *param_3 = (bool)uVar7;
      cVar6 = RefCounted::unreference();
      if (( cVar6 != '\0' ) && ( cVar6 = predelete_handler(pOVar11) ),cVar6 != '\0') {
         ( **(code**)( *(long*)pOVar11 + 0x140 ) )(pOVar11);
         Memory::free_static(pOVar11, false);
      }
      uVar9 = 0;
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar9;
}/* ResourceFormatImporter::get_import_order(String const&) const */undefined4 ResourceFormatImporter::get_import_order(ResourceFormatImporter *this, String *param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   long lVar4;
   Object *pOVar5;
   undefined8 uVar6;
   char cVar7;
   int iVar8;
   undefined4 uVar9;
   Object *pOVar10;
   long in_FS_OFFSET;
   long local_98;
   long local_90;
   Object *local_88;
   undefined8 local_80;
   undefined1 local_78[16];
   undefined1 local_68[16];
   int local_58;
   undefined1 local_50[16];
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_90 = 0;
   local_80 = 7;
   local_88 = (Object*)0x10821a;
   String::parse_latin1((StrRange*)&local_90);
   String::operator +((String*)&local_88, param_1);
   cVar7 = FileAccess::exists((String*)&local_88);
   pOVar5 = local_88;
   if (local_88 != (Object*)0x0) {
      LOCK();
      pOVar10 = local_88 + -0x10;
      *(long*)pOVar10 = *(long*)pOVar10 + -1;
      UNLOCK();
      if (*(long*)pOVar10 == 0) {
         local_88 = (Object*)0x0;
         Memory::free_static(pOVar5 + -0x10, false);
      }
   }
   lVar4 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }
   }
   if (cVar7 == '\0') {
      String::get_extension();
      String::to_lower();
      get_importer_by_extension((ResourceFormatImporter*)&local_88, (String*)this);
      pOVar5 = local_88;
      if (local_88 == (Object*)0x0) {
         pOVar10 = (Object*)0x0;
      } else {
         cVar7 = RefCounted::reference();
         pOVar10 = (Object*)0x0;
         if (cVar7 != '\0') {
            pOVar10 = pOVar5;
         }
         cVar7 = RefCounted::unreference();
         if (( cVar7 != '\0' ) && ( cVar7 = predelete_handler(pOVar5) ),cVar7 != '\0') {
            ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
            Memory::free_static(pOVar5, false);
         }
      }
      lVar4 = local_90;
      if (local_90 != 0) {
         LOCK();
         plVar1 = (long*)( local_90 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_90 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }
      }
      if (local_98 != 0) {
         LOCK();
         plVar1 = (long*)( local_98 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_98 + -0x10 ), false);
         }
      }
      goto LAB_00105d70;
   }
   local_78 = (undefined1[16])0x0;
   pOVar10 = (Object*)0x0;
   local_68 = (undefined1[16])0x0;
   local_58 = 0;
   local_40 = 0xffffffffffffffff;
   local_50 = (undefined1[16])0x0;
   iVar8 = _get_path_and_type(this, param_1, (PathAndType*)local_78, (bool*)0x0);
   if (( iVar8 == 0 ) && ( get_importer_by_name((String*)&local_88),pOVar5 = local_88,local_88 != (Object*)0x0 )) {
      cVar7 = RefCounted::reference();
      if (cVar7 != '\0') {
         pOVar10 = pOVar5;
      }
      cVar7 = RefCounted::unreference();
      if (( cVar7 != '\0' ) && ( cVar7 = predelete_handler(pOVar5) ),cVar7 != '\0') {
         ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
         Memory::free_static(pOVar5, false);
      }
   }
   if (Variant::needs_deinit[local_58] != '\0') {
      Variant::_clear_internal();
   }
   uVar6 = local_68._8_8_;
   if (local_68._8_8_ == 0) {
      LAB_00105d27:if (local_68._0_8_ == 0) goto LAB_00105d3d;
      LAB_00105d31:LOCK();
      plVar1 = (long*)( local_68._0_8_ - 0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00105d3d;
      uVar6 = local_68._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_68._8_8_;
      local_68 = auVar2 << 0x40;
      Memory::free_static((void*)( uVar6 + -0x10 ), false);
      if (local_78._8_8_ != 0) goto LAB_00105d47;
      LAB_00105d53:;
   } else {
      LOCK();
      plVar1 = (long*)( local_68._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00105d27;
      local_68._8_8_ = 0;
      Memory::free_static((void*)( uVar6 + -0x10 ), false);
      if (local_68._0_8_ != 0) goto LAB_00105d31;
      LAB_00105d3d:if (local_78._8_8_ == 0) goto LAB_00105d53;
      LAB_00105d47:LOCK();
      plVar1 = (long*)( local_78._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00105d53;
      uVar6 = local_78._8_8_;
      local_78._8_8_ = 0;
      Memory::free_static((void*)( uVar6 + -0x10 ), false);
   }
   if (local_78._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_78._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         uVar6 = local_78._0_8_;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_78._8_8_;
         local_78 = auVar3 << 0x40;
         Memory::free_static((void*)( uVar6 + -0x10 ), false);
      }
   }
   LAB_00105d70:uVar9 = 0;
   if (pOVar10 != (Object*)0x0) {
      if (*(code**)( *(long*)pOVar10 + 0x180 ) != ResourceImporter::get_import_order) {
         uVar9 = ( **(code**)( *(long*)pOVar10 + 0x180 ) )(pOVar10);
      }
      cVar7 = RefCounted::unreference();
      if (( cVar7 != '\0' ) && ( cVar7 = predelete_handler(pOVar10) ),cVar7 != '\0') {
         ( **(code**)( *(long*)pOVar10 + 0x140 ) )(pOVar10);
         Memory::free_static(pOVar10, false);
      }
   }
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar9;
}/* CowData<Ref<ResourceImporter> >::_copy_on_write() [clone .isra.0] */void CowData<Ref<ResourceImporter>>::_copy_on_write(CowData<Ref<ResourceImporter>> *this) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   char cVar4;
   undefined8 *puVar5;
   long *plVar6;
   ulong uVar7;
   long lVar8;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }
   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }
   lVar1 = *(long*)( *(long*)this + -8 );
   uVar7 = 0x10;
   if (lVar1 * 8 != 0) {
      uVar7 = lVar1 * 8 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
   }
   puVar5 = (undefined8*)Memory::alloc_static(uVar7, false);
   if (puVar5 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }
   lVar8 = 0;
   *puVar5 = 1;
   puVar5[1] = lVar1;
   plVar6 = puVar5 + 2;
   if (lVar1 != 0) {
      do {
         lVar2 = *(long*)this;
         *plVar6 = 0;
         lVar2 = *(long*)( lVar2 + lVar8 * 8 );
         if (lVar2 != 0) {
            *plVar6 = lVar2;
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
               *plVar6 = 0;
            }
         }
         lVar8 = lVar8 + 1;
         plVar6 = plVar6 + 1;
      } while ( lVar1 != lVar8 );
   }
   _unref(this);
   *(undefined8**)this = puVar5 + 2;
   return;
}/* ResourceFormatImporter::add_importer(Ref<ResourceImporter> const&, bool) */void ResourceFormatImporter::add_importer(ResourceFormatImporter *this, Ref *param_1, bool param_2) {
   CowData<Ref<ResourceImporter>> *this_00;
   Object *pOVar1;
   char cVar2;
   int iVar3;
   long lVar4;
   Object *pOVar5;
   long lVar6;
   long *plVar7;
   Object *pOVar8;
   pOVar8 = *(Object**)param_1;
   if (pOVar8 == (Object*)0x0) {
      _err_print_error("add_importer", "core/io/resource_importer.cpp", 0x1c6, "Condition \"p_importer.is_null()\" is true.", 0, 0);
      return;
   }
   if (param_2) {
      cVar2 = RefCounted::reference();
      this_00 = (CowData<Ref<ResourceImporter>>*)( this + 0x290 );
      if (cVar2 == '\0') {
         pOVar8 = (Object*)0x0;
      }
      if (*(long*)( this + 0x290 ) == 0) {
         iVar3 = CowData<Ref<ResourceImporter>>::resize<false>(this_00, 1);
         if (iVar3 == 0) {
            CowData<Ref<ResourceImporter>>::_copy_on_write(this_00);
            plVar7 = *(long**)( this + 0x290 );
            LAB_001062c0:pOVar5 = (Object*)*plVar7;
            if (pOVar5 != pOVar8) {
               *plVar7 = (long)pOVar8;
               if (pOVar8 == (Object*)0x0) {
                  LAB_00106400:if (pOVar5 == (Object*)0x0) {
                     return;
                  }
                  cVar2 = RefCounted::unreference();
                  if (cVar2 == '\0') {
                     return;
                  }
                  cVar2 = predelete_handler(pOVar5);
                  if (cVar2 == '\0') {
                     return;
                  }
               } else {
                  cVar2 = RefCounted::reference();
                  if (cVar2 == '\0') {
                     *plVar7 = 0;
                  }
                  joined_r0x0010646b:if (( ( pOVar5 == (Object*)0x0 ) || ( cVar2 = RefCounted::unreference() ),cVar2 == '\0' )) goto LAB_0010632d;
               }
               ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
               Memory::free_static(pOVar5, false);
            }
         } else {
            LAB_00106528:_err_print_error("insert", "./core/templates/cowdata.h", 0xf2, "Condition \"err\" is true. Returning: err", 0, 0);
         }
      } else {
         lVar4 = *(long*)( *(long*)( this + 0x290 ) + -8 );
         lVar6 = lVar4 + 1;
         if (0 < lVar6) {
            iVar3 = CowData<Ref<ResourceImporter>>::resize<false>(this_00, lVar6);
            if (iVar3 == 0) {
               CowData<Ref<ResourceImporter>>::_copy_on_write(this_00);
               plVar7 = *(long**)( this + 0x290 );
               joined_r0x00106242:if (lVar4 != 0) {
                  do {
                     pOVar5 = (Object*)plVar7[lVar4 + -1];
                     pOVar1 = (Object*)plVar7[lVar4];
                     if (pOVar5 != pOVar1) {
                        plVar7[lVar4] = (long)pOVar5;
                        if (( pOVar5 != (Object*)0x0 ) && ( cVar2 = RefCounted::reference() ),cVar2 == '\0') {
                           plVar7[lVar4] = 0;
                        }
                        if (( ( pOVar1 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) goto code_r0x0010629b;
                     }
                     lVar4 = lVar4 + -1;
                     if (lVar4 == 0) break;
                  } while ( true );
               }
               goto LAB_001062c0;
            }
            goto LAB_00106528;
         }
         _err_print_index_error("insert", "./core/templates/cowdata.h", 0xf0, 0, lVar6, "p_pos", "new_size", "", false, false);
      }
   } else {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
         pOVar8 = (Object*)0x0;
      }
      if (*(long*)( this + 0x290 ) == 0) {
         lVar6 = 1;
      } else {
         lVar6 = *(long*)( *(long*)( this + 0x290 ) + -8 ) + 1;
      }
      iVar3 = CowData<Ref<ResourceImporter>>::resize<false>((CowData<Ref<ResourceImporter>>*)( this + 0x290 ), lVar6);
      if (iVar3 == 0) {
         if (*(long*)( this + 0x290 ) == 0) {
            lVar4 = -1;
            lVar6 = 0;
         } else {
            lVar6 = *(long*)( *(long*)( this + 0x290 ) + -8 );
            lVar4 = lVar6 + -1;
            if (-1 < lVar4) {
               CowData<Ref<ResourceImporter>>::_copy_on_write((CowData<Ref<ResourceImporter>>*)( this + 0x290 ));
               plVar7 = (long*)( *(long*)( this + 0x290 ) + lVar4 * 8 );
               pOVar5 = (Object*)*plVar7;
               if (pOVar5 != pOVar8) {
                  *plVar7 = (long)pOVar8;
                  if (pOVar8 == (Object*)0x0) goto LAB_00106400;
                  cVar2 = RefCounted::reference();
                  if (cVar2 == '\0') {
                     *plVar7 = 0;
                  }
                  goto joined_r0x0010646b;
               }
               goto LAB_00106328;
            }
         }
         _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar4, lVar6, "p_index", "size()", "", false, false);
      } else {
         _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
      }
   }
   LAB_00106328:if (pOVar8 == (Object*)0x0) {
      return;
   }
   LAB_0010632d:cVar2 = RefCounted::unreference();
   if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar8) ),cVar2 != '\0') {
      ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
      Memory::free_static(pOVar8, false);
      return;
   }
   return;
   code_r0x0010629b:( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
   Memory::free_static(pOVar1, false);
   lVar4 = lVar4 + -1;
   goto joined_r0x00106242;
}/* ResourceFormatImporter::get_import_settings_hash() const */undefined8 ResourceFormatImporter::get_import_settings_hash(void) {
   long *plVar1;
   Object *pOVar2;
   Object *pOVar3;
   code *pcVar4;
   char cVar5;
   long lVar6;
   Object *pOVar7;
   SortImporterByName *pSVar8;
   Ref *pRVar9;
   long lVar10;
   Ref *pRVar11;
   Object *pOVar12;
   long in_RSI;
   undefined8 in_RDI;
   long lVar13;
   Ref *pRVar14;
   Ref *pRVar15;
   long in_FS_OFFSET;
   bool bVar16;
   SortImporterByName *local_f0;
   CowData<Ref<ResourceImporter>> *local_d0;
   undefined8 local_98;
   long local_90;
   long local_88;
   long local_80;
   long local_78;
   Object *local_70[2];
   Ref *local_60;
   Object *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = (Ref*)0x0;
   if (*(long*)( in_RSI + 0x290 ) != 0) {
      plVar1 = (long*)( *(long*)( in_RSI + 0x290 ) + -0x10 );
      do {
         lVar10 = *plVar1;
         if (lVar10 == 0) goto LAB_00106667;
         LOCK();
         lVar13 = *plVar1;
         bVar16 = lVar10 == lVar13;
         if (bVar16) {
            *plVar1 = lVar10 + 1;
            lVar13 = lVar10;
         }
         UNLOCK();
      } while ( !bVar16 );
      if (lVar13 != -1) {
         local_60 = *(Ref**)( in_RSI + 0x290 );
      }
      LAB_00106667:if (( local_60 != (Ref*)0x0 ) && ( lVar10 = lVar10 != 0 )) {
         CowData<Ref<ResourceImporter>>::_copy_on_write((CowData<Ref<ResourceImporter>>*)&local_60);
         pRVar9 = local_60;
         if (lVar10 == 1) {
            SortArray<Ref<ResourceImporter>,ResourceFormatImporter::SortImporterByName,true>::introsort((SortArray<Ref<ResourceImporter>,ResourceFormatImporter::SortImporterByName,true>*)&local_78, 0, 1, local_60, 0);
            pRVar15 = pRVar9;
         } else {
            lVar6 = 0;
            lVar13 = lVar10;
            do {
               lVar13 = lVar13 >> 1;
               lVar6 = lVar6 + 1;
            } while ( lVar13 != 1 );
            SortArray<Ref<ResourceImporter>,ResourceFormatImporter::SortImporterByName,true>::introsort((SortArray<Ref<ResourceImporter>,ResourceFormatImporter::SortImporterByName,true>*)&local_78, 0, lVar10, local_60, lVar6 * 2);
            if (lVar10 < 0x11) {
               lVar13 = 1;
               do {
                  cVar5 = SortImporterByName::operator ()(local_f0, (Ref*)local_70, pRVar9);
                  if (cVar5 == '\0') {
                     local_58 = pOVar7;
                     cVar5 = RefCounted::reference();
                     pOVar12 = pOVar7;
                     if (cVar5 == '\0') goto LAB_0010722d;
                     goto LAB_00107232;
                  }
                  LAB_00107106:do {
                     while (true) {
                        pOVar12 = *(Object**)( pRVar9 + lVar6 * 8 + -8 );
                        pOVar2 = *(Object**)( pRVar9 + lVar6 * 8 );
                        if (pOVar12 != pOVar2) break;
                        LAB_00107100:lVar6 = lVar6 + -1;
                        if (lVar6 == 0) goto LAB_00107170;
                     };
                     *(Object**)( pRVar9 + lVar6 * 8 ) = pOVar12;
                     if (( pOVar12 != (Object*)0x0 ) && ( cVar5 = RefCounted::reference() ),cVar5 == '\0') {
                        *(undefined8*)( pRVar9 + lVar6 * 8 ) = 0;
                     }
                     if (( ( pOVar2 == (Object*)0x0 ) || ( cVar5 = RefCounted::unreference() ),cVar5 == '\0' )) goto LAB_00107100;
                     ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                     Memory::free_static(pOVar2, false);
                     lVar6 = lVar6 + -1;
                  } while ( lVar6 != 0 );
                  LAB_00107170:pOVar12 = *(Object**)pRVar9;
                  if (pOVar12 == pOVar7) goto LAB_00107338;
                  *(Object**)pRVar9 = pOVar7;
                  if (pOVar7 != (Object*)0x0) {
                     cVar5 = RefCounted::reference();
                     if (cVar5 == '\0') {
                        *(undefined8*)pRVar9 = 0;
                     }
                     if (( ( pOVar12 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) goto LAB_00107319;
                     cVar5 = RefCounted::unreference();
                     if (cVar5 == '\0') goto LAB_001071c8;
                     goto LAB_00107351;
                  }
                  if (( ( pOVar12 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) {
                     LAB_00107319:( **(code**)( *(long*)pOVar12 + 0x140 ) )(pOVar12);
                     Memory::free_static(pOVar12, false);
                     goto LAB_00107338;
                  }
               } while ( lVar10 != lVar13 );
            } else {
               local_f0 = (SortImporterByName*)0x1;
               pRVar15 = pRVar9 + 8;
               do {
                  cVar5 = SortImporterByName::operator ()((SortImporterByName*)&local_78, (Ref*)local_70, pRVar9);
                  if (cVar5 == '\0') {
                     local_58 = pOVar7;
                     cVar5 = RefCounted::reference();
                     pOVar12 = pOVar7;
                     if (cVar5 == '\0') goto LAB_00106c64;
                     goto LAB_00106a73;
                  }
                  LAB_00106829:do {
                     while (true) {
                        pOVar12 = *(Object**)( pRVar14 + -8 );
                        pOVar2 = *(Object**)pRVar14;
                        if (pOVar12 != pOVar2) break;
                        LAB_00106820:pRVar14 = pRVar14 + -8;
                        if (pRVar9 == pRVar14) goto LAB_00106890;
                     };
                     *(Object**)pRVar14 = pOVar12;
                     if (( pOVar12 != (Object*)0x0 ) && ( cVar5 = RefCounted::reference() ),cVar5 == '\0') {
                        *(undefined8*)pRVar14 = 0;
                     }
                     if (( ( pOVar2 == (Object*)0x0 ) || ( cVar5 = RefCounted::unreference() ),cVar5 == '\0' )) goto LAB_00106820;
                     pRVar14 = pRVar14 + -8;
                     ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                     Memory::free_static(pOVar2, false);
                  } while ( pRVar9 != pRVar14 );
                  LAB_00106890:pOVar12 = *(Object**)pRVar9;
                  if (pOVar12 == pOVar7) goto LAB_00106b40;
                  *(Object**)pRVar9 = pOVar7;
                  if (pOVar7 != (Object*)0x0) {
                     cVar5 = RefCounted::reference();
                     if (cVar5 == '\0') {
                        *(undefined8*)pRVar9 = 0;
                     }
                     if (( ( pOVar12 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) goto LAB_00106b21;
                     cVar5 = RefCounted::unreference();
                     if (cVar5 == '\0') goto LAB_001068f0;
                     goto LAB_00106b59;
                  }
                  if (( ( pOVar12 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) {
                     LAB_00106b21:( **(code**)( *(long*)pOVar12 + 0x140 ) )(pOVar12);
                     Memory::free_static(pOVar12, false);
                     goto LAB_00106b40;
                  }
               } while ( local_f0 != (SortImporterByName*)0x10 );
               pRVar9 = pRVar9 + 0x80;
               local_f0 = (SortImporterByName*)0x10;
               do if (pOVar7 == pOVar12) {
                  LAB_00106fc0:if (pOVar7 != (Object*)0x0) {
                     cVar5 = RefCounted::unreference();
                     joined_r0x00106fd3:if (( cVar5 != '\0' ) && ( cVar5 = predelete_handler(pOVar7) ),cVar5 != '\0') {
                        ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
                        Memory::free_static(pOVar7, false);
                     }
                  }
               } else {
                  *(Object**)pRVar14 = pOVar7;
                  if (pOVar7 != (Object*)0x0) {
                     cVar5 = RefCounted::reference();
                     if (cVar5 == '\0') {
                        *(undefined8*)pRVar14 = 0;
                     }
                     if (( ( pOVar12 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) goto LAB_00106fa9;
                     cVar5 = RefCounted::unreference();
                     goto joined_r0x00106fd3;
                  }
                  if (( ( pOVar12 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) {
                     LAB_00106fa9:( **(code**)( *(long*)pOVar12 + 0x140 ) )(pOVar12);
                     Memory::free_static(pOVar12, false);
                     goto LAB_00106fc0;
                  }
               } while ( (SortImporterByName*)lVar10 != local_f0 );
            }
         }
         local_98 = 0;
         for (lVar10 = 0; ( pRVar15 != (Ref*)0x0 && ( lVar10 < *(long*)( pRVar15 + -8 ) ) ); lVar10 = lVar10 + 1) {
            pcVar4 = *(code**)( **(long**)( pRVar15 + lVar10 * 8 ) + 0x200 );
            if (pcVar4 == ResourceImporter::get_import_settings_string) {
               local_70[0] = (Object*)0x0;
            } else {
               ( *pcVar4 )(local_70);
            }
            local_80 = 0;
            local_58 = (Object*)&_LC88;
            local_50 = 1;
            String::parse_latin1((StrRange*)&local_80);
            if (*(long*)( pRVar15 + -8 ) <= lVar10) {
               _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, *(long*)( pRVar15 + -8 ), "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar4 = (code*)invalidInstructionException();
               ( *pcVar4 )();
            }
            ( **(code**)( **(long**)( pRVar15 + lVar10 * 8 ) + 0x150 ) )(&local_90);
            operator+((char *)&
            local_88,(String*)&_LC88;
            String::operator +((String*)&local_78, (String*)&local_88);
            String::operator +((String*)&local_58, (String*)&local_78);
            String::operator +=((String*)&local_98, (String*)&local_58);
            pOVar7 = local_58;
            if (local_58 != (Object*)0x0) {
               LOCK();
               pOVar12 = local_58 + -0x10;
               *(long*)pOVar12 = *(long*)pOVar12 + -1;
               UNLOCK();
               if (*(long*)pOVar12 == 0) {
                  local_58 = (Object*)0x0;
                  Memory::free_static(pOVar7 + -0x10, false);
               }
            }
            lVar13 = local_78;
            if (local_78 != 0) {
               LOCK();
               plVar1 = (long*)( local_78 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_78 = 0;
                  Memory::free_static((void*)( lVar13 + -0x10 ), false);
               }
            }
            lVar13 = local_88;
            if (local_88 != 0) {
               LOCK();
               plVar1 = (long*)( local_88 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_88 = 0;
                  Memory::free_static((void*)( lVar13 + -0x10 ), false);
               }
            }
            lVar13 = local_90;
            if (local_90 != 0) {
               LOCK();
               plVar1 = (long*)( local_90 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_90 = 0;
                  Memory::free_static((void*)( lVar13 + -0x10 ), false);
               }
            }
            lVar13 = local_80;
            if (local_80 != 0) {
               LOCK();
               plVar1 = (long*)( local_80 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_80 = 0;
                  Memory::free_static((void*)( lVar13 + -0x10 ), false);
               }
            }
            pOVar7 = local_70[0];
            if (local_70[0] != (Object*)0x0) {
               LOCK();
               pOVar12 = local_70[0] + -0x10;
               *(long*)pOVar12 = *(long*)pOVar12 + -1;
               UNLOCK();
               if (*(long*)pOVar12 == 0) {
                  local_70[0] = (Object*)0x0;
                  Memory::free_static(pOVar7 + -0x10, false);
               }
            }
            pRVar15 = local_60;
         }
         goto LAB_00106690;
      }
   }
   local_98 = 0;
   LAB_00106690:local_d0 = (CowData<Ref<ResourceImporter>>*)&local_60;
   String::md5_text();
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<Ref<ResourceImporter>>::_unref(local_d0);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return in_RDI;
}/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}/* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   if (( configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }
   return;
}/* Object::get_save_class() const */void Object::get_save_class(void) {
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
}/* RefCounted::is_class_ptr(void*) const */uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
   return (uint)CONCAT71(0x10e0, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10e0, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}/* RefCounted::_getv(StringName const&, Variant&) const */undefined8 RefCounted::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}/* RefCounted::_setv(StringName const&, Variant const&) */undefined8 RefCounted::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}/* RefCounted::_validate_propertyv(PropertyInfo&) const */void RefCounted::_validate_propertyv(PropertyInfo *param_1) {
   return;
}/* RefCounted::_property_can_revertv(StringName const&) const */undefined8 RefCounted::_property_can_revertv(StringName *param_1) {
   return 0;
}/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */undefined8 RefCounted::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}/* RefCounted::_notificationv(int, bool) */void RefCounted::_notificationv(int param_1, bool param_2) {
   return;
}/* Resource::set_import_last_modified_time(unsigned long) */void Resource::set_import_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x1a0 ) = param_1;
   return;
}/* ResourceFormatLoader::is_class_ptr(void*) const */uint ResourceFormatLoader::is_class_ptr(ResourceFormatLoader *this, void *param_1) {
   return (uint)CONCAT71(0x10e0, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10e0, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10e0, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}/* ResourceFormatLoader::_getv(StringName const&, Variant&) const */undefined8 ResourceFormatLoader::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}/* ResourceFormatLoader::_setv(StringName const&, Variant const&) */undefined8 ResourceFormatLoader::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}/* ResourceFormatLoader::_validate_propertyv(PropertyInfo&) const */void ResourceFormatLoader::_validate_propertyv(PropertyInfo *param_1) {
   return;
}/* ResourceFormatLoader::_property_can_revertv(StringName const&) const */undefined8 ResourceFormatLoader::_property_can_revertv(StringName *param_1) {
   return 0;
}/* ResourceFormatLoader::_property_get_revertv(StringName const&, Variant&) const */undefined8 ResourceFormatLoader::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}/* ResourceFormatLoader::_notificationv(int, bool) */void ResourceFormatLoader::_notificationv(int param_1, bool param_2) {
   return;
}/* ResourceImporter::get_priority() const */undefined4 ResourceImporter::get_priority(void) {
   return _LC0;
}/* ResourceImporter::get_import_order() const */undefined8 ResourceImporter::get_import_order(void) {
   return 0;
}/* ResourceImporter::can_import_threaded() const */undefined8 ResourceImporter::can_import_threaded(void) {
   return 0;
}/* ResourceImporter::are_import_settings_valid(String const&, Dictionary const&) const */undefined8 ResourceImporter::are_import_settings_valid(String *param_1, Dictionary *param_2) {
   return 1;
}/* ResourceImporter::get_import_settings_string() const */ResourceImporter * __thiscall ResourceImporter::get_import_settings_string(ResourceImporter *this){
   *(undefined8*)this = 0;
   return this;
}/* ResourceFormatImporterSaver::is_class_ptr(void*) const */uint ResourceFormatImporterSaver::is_class_ptr(ResourceFormatImporterSaver *this, void *param_1) {
   return (uint)CONCAT71(0x10e0, (undefined4*)param_1 == &ResourceFormatSaver::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10e0, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10e0, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10e0, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}/* ResourceFormatImporterSaver::_getv(StringName const&, Variant&) const */undefined8 ResourceFormatImporterSaver::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}/* ResourceFormatImporterSaver::_setv(StringName const&, Variant const&) */undefined8 ResourceFormatImporterSaver::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}/* ResourceFormatImporterSaver::_validate_propertyv(PropertyInfo&) const */void ResourceFormatImporterSaver::_validate_propertyv(PropertyInfo *param_1) {
   return;
}/* ResourceFormatImporterSaver::_property_can_revertv(StringName const&) const */undefined8 ResourceFormatImporterSaver::_property_can_revertv(StringName *param_1) {
   return 0;
}/* ResourceFormatImporterSaver::_property_get_revertv(StringName const&, Variant&) const */undefined8 ResourceFormatImporterSaver::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}/* ResourceFormatImporterSaver::_notificationv(int, bool) */void ResourceFormatImporterSaver::_notificationv(int param_1, bool param_2) {
   return;
}/* ConfigFile::is_class_ptr(void*) const */uint ConfigFile::is_class_ptr(ConfigFile *this, void *param_1) {
   return (uint)CONCAT71(0x10e0, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10e0, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10e0, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}/* ConfigFile::_getv(StringName const&, Variant&) const */undefined8 ConfigFile::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}/* ConfigFile::_setv(StringName const&, Variant const&) */undefined8 ConfigFile::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}/* ConfigFile::_validate_propertyv(PropertyInfo&) const */void ConfigFile::_validate_propertyv(PropertyInfo *param_1) {
   return;
}/* ConfigFile::_property_can_revertv(StringName const&) const */undefined8 ConfigFile::_property_can_revertv(StringName *param_1) {
   return 0;
}/* ConfigFile::_property_get_revertv(StringName const&, Variant&) const */undefined8 ConfigFile::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}/* ConfigFile::_notificationv(int, bool) */void ConfigFile::_notificationv(int param_1, bool param_2) {
   return;
}/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_0010da00;
   Object::~Object((Object*)this);
   return;
}/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_0010da00;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}/* RefCounted::_get_class_namev() const */undefined8 *RefCounted::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }
   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_001079c3:return &_get_class_namev();
      }
      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001079c3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_00107a2e;
      }
   }
   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_00107a2e:return &_get_class_namev();
}/* ResourceFormatLoader::_get_class_namev() const */undefined8 *ResourceFormatLoader::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }
   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00107ab3:return &_get_class_namev();
      }
      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00107ab3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ResourceFormatLoader");
         goto LAB_00107b1e;
      }
   }
   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ResourceFormatLoader");
   LAB_00107b1e:return &_get_class_namev();
}/* ResourceFormatImporterSaver::_get_class_namev() const */undefined8 *ResourceFormatImporterSaver::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }
   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00107ba3:return &_get_class_namev();
      }
      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00107ba3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ResourceFormatImporterSaver");
         goto LAB_00107c0e;
      }
   }
   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ResourceFormatImporterSaver");
   LAB_00107c0e:return &_get_class_namev();
}/* ConfigFile::_get_class_namev() const */undefined8 *ConfigFile::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }
   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00107c83:return &_get_class_namev();
      }
      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00107c83;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ConfigFile");
         goto LAB_00107cee;
      }
   }
   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ConfigFile");
   LAB_00107cee:return &_get_class_namev();
}/* ResourceFormatImporterSaver::~ResourceFormatImporterSaver() */void ResourceFormatImporterSaver::~ResourceFormatImporterSaver(ResourceFormatImporterSaver *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = strlen;
   if (bVar1) {
      for (int i = 0; i < 4; i++) {
         if (*(long*)( this + ( -24*i + 480 ) ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_00107de1;
         }
      }
      if (*(long*)( this + 0x180 ) != 0) {
         StringName::unref();
      }
   }
   LAB_00107de1:*(undefined***)this = &PTR__initialize_classv_0010da00;
   Object::~Object((Object*)this);
   return;
}/* ResourceFormatImporterSaver::~ResourceFormatImporterSaver() */void ResourceFormatImporterSaver::~ResourceFormatImporterSaver(ResourceFormatImporterSaver *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = strlen;
   if (bVar1) {
      for (int i = 0; i < 4; i++) {
         if (*(long*)( this + ( -24*i + 480 ) ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_00107eb1;
         }
      }
      if (*(long*)( this + 0x180 ) != 0) {
         StringName::unref();
      }
   }
   LAB_00107eb1:*(undefined***)this = &PTR__initialize_classv_0010da00;
   Object::~Object((Object*)this);
   operator_delete(this, 0x1f8);
   return;
}/* ConfigFile::get_class() const */void ConfigFile::get_class(void) {
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
   } else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      } else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }
         } else {
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
}/* ResourceFormatImporterSaver::get_class() const */void ResourceFormatImporterSaver::get_class(void) {
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
   } else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      } else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }
         } else {
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
}/* RefCounted::get_class() const */void RefCounted::get_class(void) {
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
   } else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      } else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }
         } else {
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
}/* ResourceFormatLoader::get_class() const */void ResourceFormatLoader::get_class(void) {
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
   } else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      } else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }
         } else {
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
}/* ConfigFile::~ConfigFile() */void ConfigFile::~ConfigFile(ConfigFile *this) {
   long *plVar1;
   uint uVar2;
   uint uVar3;
   long lVar4;
   int *piVar5;
   long lVar6;
   void *pvVar7;
   void *pvVar8;
   long lVar9;
   *(undefined***)this = &PTR__initialize_classv_0010db60;
   pvVar8 = *(void**)( this + 0x188 );
   if (pvVar8 != (void*)0x0) {
      if (*(int*)( this + 0x1ac ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a8 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x1ac ) = 0;
            *(undefined1(*) [16])( this + 0x198 ) = (undefined1[16])0x0;
         } else {
            lVar6 = 0;
            do {
               if (*(int*)( *(long*)( this + 400 ) + lVar6 ) != 0) {
                  pvVar8 = *(void**)( (long)pvVar8 + lVar6 * 2 );
                  *(int*)( *(long*)( this + 400 ) + lVar6 ) = 0;
                  pvVar7 = *(void**)( (long)pvVar8 + 0x20 );
                  if (pvVar7 != (void*)0x0) {
                     if (*(int*)( (long)pvVar8 + 0x44 ) != 0) {
                        uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( (long)pvVar8 + 0x40 ) * 4 );
                        if (uVar3 == 0) {
                           *(undefined4*)( (long)pvVar8 + 0x44 ) = 0;
                           *(undefined1(*) [16])( (long)pvVar8 + 0x30 ) = (undefined1[16])0x0;
                        } else {
                           lVar9 = 0;
                           do {
                              piVar5 = (int*)( *(long*)( (long)pvVar8 + 0x28 ) + lVar9 );
                              if (*piVar5 != 0) {
                                 *piVar5 = 0;
                                 pvVar7 = *(void**)( (long)pvVar7 + lVar9 * 2 );
                                 if (Variant::needs_deinit[*(int*)( (long)pvVar7 + 0x18 )] != '\0') {
                                    Variant::_clear_internal();
                                 }
                                 if (*(long*)( (long)pvVar7 + 0x10 ) != 0) {
                                    LOCK();
                                    plVar1 = (long*)( *(long*)( (long)pvVar7 + 0x10 ) + -0x10 );
                                    *plVar1 = *plVar1 + -1;
                                    UNLOCK();
                                    if (*plVar1 == 0) {
                                       lVar4 = *(long*)( (long)pvVar7 + 0x10 );
                                       *(undefined8*)( (long)pvVar7 + 0x10 ) = 0;
                                       Memory::free_static((void*)( lVar4 + -0x10 ), false);
                                    }
                                 }
                                 Memory::free_static(pvVar7, false);
                                 pvVar7 = *(void**)( (long)pvVar8 + 0x20 );
                                 *(undefined8*)( (long)pvVar7 + lVar9 * 2 ) = 0;
                              }
                              lVar9 = lVar9 + 4;
                           } while ( lVar9 != (ulong)uVar3 << 2 );
                           *(undefined4*)( (long)pvVar8 + 0x44 ) = 0;
                           *(undefined1(*) [16])( (long)pvVar8 + 0x30 ) = (undefined1[16])0x0;
                           if (pvVar7 == (void*)0x0) goto LAB_001085cf;
                        }
                     }
                     Memory::free_static(pvVar7, false);
                     Memory::free_static(*(void**)( (long)pvVar8 + 0x28 ), false);
                  }
                  LAB_001085cf:if (*(long*)( (long)pvVar8 + 0x10 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar8 + 0x10 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar9 = *(long*)( (long)pvVar8 + 0x10 );
                        *(undefined8*)( (long)pvVar8 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar9 + -0x10 ), false);
                     }
                  }
                  Memory::free_static(pvVar8, false);
                  pvVar8 = *(void**)( this + 0x188 );
                  *(undefined8*)( (long)pvVar8 + lVar6 * 2 ) = 0;
               }
               lVar6 = lVar6 + 4;
            } while ( lVar6 != (ulong)uVar2 * 4 );
            *(undefined4*)( this + 0x1ac ) = 0;
            *(undefined1(*) [16])( this + 0x198 ) = (undefined1[16])0x0;
            if (pvVar8 == (void*)0x0) goto LAB_00108641;
         }
      }
      Memory::free_static(pvVar8, false);
      Memory::free_static(*(void**)( this + 400 ), false);
   }
   LAB_00108641:*(undefined***)this = &PTR__initialize_classv_0010da00;
   Object::~Object((Object*)this);
   return;
}/* ConfigFile::~ConfigFile() */void ConfigFile::~ConfigFile(ConfigFile *this) {
   long *plVar1;
   uint uVar2;
   uint uVar3;
   long lVar4;
   int *piVar5;
   long lVar6;
   void *pvVar7;
   void *pvVar8;
   long lVar9;
   *(undefined***)this = &PTR__initialize_classv_0010db60;
   pvVar8 = *(void**)( this + 0x188 );
   if (pvVar8 != (void*)0x0) {
      if (*(int*)( this + 0x1ac ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a8 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x1ac ) = 0;
            *(undefined1(*) [16])( this + 0x198 ) = (undefined1[16])0x0;
         } else {
            lVar6 = 0;
            do {
               if (*(int*)( *(long*)( this + 400 ) + lVar6 ) != 0) {
                  pvVar8 = *(void**)( (long)pvVar8 + lVar6 * 2 );
                  *(int*)( *(long*)( this + 400 ) + lVar6 ) = 0;
                  pvVar7 = *(void**)( (long)pvVar8 + 0x20 );
                  if (pvVar7 != (void*)0x0) {
                     if (*(int*)( (long)pvVar8 + 0x44 ) != 0) {
                        uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( (long)pvVar8 + 0x40 ) * 4 );
                        if (uVar3 == 0) {
                           *(undefined4*)( (long)pvVar8 + 0x44 ) = 0;
                           *(undefined1(*) [16])( (long)pvVar8 + 0x30 ) = (undefined1[16])0x0;
                        } else {
                           lVar9 = 0;
                           do {
                              piVar5 = (int*)( *(long*)( (long)pvVar8 + 0x28 ) + lVar9 );
                              if (*piVar5 != 0) {
                                 *piVar5 = 0;
                                 pvVar7 = *(void**)( (long)pvVar7 + lVar9 * 2 );
                                 if (Variant::needs_deinit[*(int*)( (long)pvVar7 + 0x18 )] != '\0') {
                                    Variant::_clear_internal();
                                 }
                                 if (*(long*)( (long)pvVar7 + 0x10 ) != 0) {
                                    LOCK();
                                    plVar1 = (long*)( *(long*)( (long)pvVar7 + 0x10 ) + -0x10 );
                                    *plVar1 = *plVar1 + -1;
                                    UNLOCK();
                                    if (*plVar1 == 0) {
                                       lVar4 = *(long*)( (long)pvVar7 + 0x10 );
                                       *(undefined8*)( (long)pvVar7 + 0x10 ) = 0;
                                       Memory::free_static((void*)( lVar4 + -0x10 ), false);
                                    }
                                 }
                                 Memory::free_static(pvVar7, false);
                                 pvVar7 = *(void**)( (long)pvVar8 + 0x20 );
                                 *(undefined8*)( (long)pvVar7 + lVar9 * 2 ) = 0;
                              }
                              lVar9 = lVar9 + 4;
                           } while ( lVar9 != (ulong)uVar3 << 2 );
                           *(undefined4*)( (long)pvVar8 + 0x44 ) = 0;
                           *(undefined1(*) [16])( (long)pvVar8 + 0x30 ) = (undefined1[16])0x0;
                           if (pvVar7 == (void*)0x0) goto LAB_0010885f;
                        }
                     }
                     Memory::free_static(pvVar7, false);
                     Memory::free_static(*(void**)( (long)pvVar8 + 0x28 ), false);
                  }
                  LAB_0010885f:if (*(long*)( (long)pvVar8 + 0x10 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar8 + 0x10 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar9 = *(long*)( (long)pvVar8 + 0x10 );
                        *(undefined8*)( (long)pvVar8 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar9 + -0x10 ), false);
                     }
                  }
                  Memory::free_static(pvVar8, false);
                  pvVar8 = *(void**)( this + 0x188 );
                  *(undefined8*)( (long)pvVar8 + lVar6 * 2 ) = 0;
               }
               lVar6 = lVar6 + 4;
            } while ( lVar6 != (ulong)uVar2 * 4 );
            *(undefined4*)( this + 0x1ac ) = 0;
            *(undefined1(*) [16])( this + 0x198 ) = (undefined1[16])0x0;
            if (pvVar8 == (void*)0x0) goto LAB_001088d1;
         }
      }
      Memory::free_static(pvVar8, false);
      Memory::free_static(*(void**)( this + 400 ), false);
   }
   LAB_001088d1:*(undefined***)this = &PTR__initialize_classv_0010da00;
   Object::~Object((Object*)this);
   operator_delete(this, 0x1b0);
   return;
}/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
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
      } else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_001089ef;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }
                  UNLOCK();
               } while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }
            }
         } else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }
      }
      LAB_001089ef:cVar6 = String::operator ==(param_1, (String*)&local_60);
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
      if (cVar6 != '\0') goto LAB_00108aa3;
   }
   cVar6 = String::operator ==(param_1, "RefCounted");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         } else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_00108b53;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }
                     UNLOCK();
                  } while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }
               }
            } else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }
         }
         LAB_00108b53:cVar6 = String::operator ==(param_1, (String*)&local_60);
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
         if (cVar6 != '\0') goto LAB_00108aa3;
      }
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }
   } else {
      LAB_00108aa3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ConfigFile::is_class(String const&) const */undefined8 ConfigFile::is_class(ConfigFile *this, String *param_1) {
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
      } else {
         __s = *(char**)( lVar3 + 8 );
         local_60 = 0;
         if (__s == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar3 + 0x10 ) + -0x10 );
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               do {
                  lVar4 = *plVar1;
                  if (lVar4 == 0) goto LAB_00108c7f;
                  LOCK();
                  lVar6 = *plVar1;
                  bVar8 = lVar4 == lVar6;
                  if (bVar8) {
                     *plVar1 = lVar4 + 1;
                     lVar6 = lVar4;
                  }
                  UNLOCK();
               } while ( !bVar8 );
               if (lVar6 != -1) {
                  local_60 = *(long*)( lVar3 + 0x10 );
               }
            }
         } else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }
      }
      LAB_00108c7f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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
      if (cVar5 != '\0') goto LAB_00108d33;
   }
   cVar5 = String::operator ==(param_1, "ConfigFile");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }
   } else {
      LAB_00108d33:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ResourceFormatLoader::is_class(String const&) const */undefined8 ResourceFormatLoader::is_class(ResourceFormatLoader *this, String *param_1) {
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
      } else {
         __s = *(char**)( lVar3 + 8 );
         local_60 = 0;
         if (__s == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar3 + 0x10 ) + -0x10 );
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               do {
                  lVar4 = *plVar1;
                  if (lVar4 == 0) goto LAB_00108dff;
                  LOCK();
                  lVar6 = *plVar1;
                  bVar8 = lVar4 == lVar6;
                  if (bVar8) {
                     *plVar1 = lVar4 + 1;
                     lVar6 = lVar4;
                  }
                  UNLOCK();
               } while ( !bVar8 );
               if (lVar6 != -1) {
                  local_60 = *(long*)( lVar3 + 0x10 );
               }
            }
         } else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }
      }
      LAB_00108dff:cVar5 = String::operator ==(param_1, (String*)&local_60);
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
      if (cVar5 != '\0') goto LAB_00108eb3;
   }
   cVar5 = String::operator ==(param_1, "ResourceFormatLoader");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }
   } else {
      LAB_00108eb3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ResourceFormatImporterSaver::is_class(String const&) const */undefined8 ResourceFormatImporterSaver::is_class(ResourceFormatImporterSaver *this, String *param_1) {
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
      } else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_00108f9f;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }
                  UNLOCK();
               } while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }
            }
         } else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }
      }
      LAB_00108f9f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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
      if (cVar6 != '\0') goto LAB_00109053;
   }
   cVar6 = String::operator ==(param_1, "ResourceFormatImporterSaver");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         } else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_00109113;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }
                     UNLOCK();
                  } while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }
               }
            } else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }
         }
         LAB_00109113:cVar6 = String::operator ==(param_1, (String*)&local_60);
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
         if (cVar6 != '\0') goto LAB_00109053;
      }
      cVar6 = String::operator ==(param_1, "ResourceFormatSaver");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
            return uVar7;
         }
         goto LAB_001091bc;
      }
   }
   LAB_00109053:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }
   LAB_001091bc:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* ResourceFormatImporter::is_imported(String const&) const */undefined4 ResourceFormatImporter::is_imported(ResourceFormatImporter *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   undefined4 uVar4;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = 0;
   if (*(code**)( *(long*)this + 0x170 ) == recognize_path) {
      local_40 = 0;
      local_30 = 7;
      local_38 = ".import";
      String::parse_latin1((StrRange*)&local_40);
      String::operator +((String*)&local_38, param_1);
      uVar4 = FileAccess::exists((String*)&local_38);
      pcVar3 = local_38;
      if (local_38 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_38 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_38 = (char*)0x0;
            Memory::free_static(pcVar3 + -0x10, false);
         }
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
   } else {
      uVar4 = ( **(code**)( *(long*)this + 0x170 ) )(this, param_1, &local_48);
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
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RefCounted::_initialize_classv() */void RefCounted::_initialize_classv(void) {
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
      initialize_class()::initialized = '\x01'
      ;;
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
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
      LAB_00109638:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00109638;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x00109656;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)pLVar6;
   joined_r0x00109656:if (lVar2 == 0) {
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
}/* ResourceFormatLoader::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void ResourceFormatLoader::_get_property_listv(ResourceFormatLoader *this, List *param_1, bool param_2) {
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
   local_78 = "ResourceFormatLoader";
   local_70 = 0x14;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "ResourceFormatLoader";
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
      LAB_00109a38:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00109a38;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00109a55;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)param_1;
   joined_r0x00109a55:if (lVar2 == 0) {
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
   StringName::StringName((StringName*)&local_78, "ResourceFormatLoader", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }
   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
         return;
      }
   } else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ConfigFile::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void ConfigFile::_get_property_listv(ConfigFile *this, List *param_1, bool param_2) {
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
   local_78 = "ConfigFile";
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "ConfigFile";
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
      LAB_00109e88:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00109e88;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00109ea5;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)param_1;
   joined_r0x00109ea5:if (lVar2 == 0) {
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
   StringName::StringName((StringName*)&local_78, "ConfigFile", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }
   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
         return;
      }
   } else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ResourceFormatLoader::_initialize_classv() */void ResourceFormatLoader::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized != '\0') goto LAB_0010a2cb;
  if (RefCounted::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_68 = 0;
    local_50 = 6;
    local_58 = "Object";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "RefCounted";
    local_70 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    lVar2 = local_68;
    if (local_68 == 0) {
LAB_0010a3da:
      if ((code *)PTR__bind_methods_00111010 != RefCounted::_bind_methods) {
LAB_0010a3ea:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0010a3da;
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_00111010 != RefCounted::_bind_methods) goto LAB_0010a3ea;
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_58 = "RefCounted";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "ResourceFormatLoader";
  local_70 = 0;
  local_50 = 0x14;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
  ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  lVar2 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((code *)PTR__bind_methods_00111008 != RefCounted::_bind_methods) {
    ResourceFormatLoader::_bind_methods();
  }
  initialize_class()::initialized = '\x01';
LAB_0010a2cb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ConfigFile::_initialize_classv() */

void ConfigFile::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized != '\0') goto LAB_0010a5cb;
  if (RefCounted::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_68 = 0;
    local_50 = 6;
    local_58 = "Object";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "RefCounted";
    local_70 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    lVar2 = local_68;
    if (local_68 == 0) {
LAB_0010a6da:
      if ((code *)PTR__bind_methods_00111010 != RefCounted::_bind_methods) {
LAB_0010a6ea:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0010a6da;
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_00111010 != RefCounted::_bind_methods) goto LAB_0010a6ea;
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_58 = "RefCounted";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "ConfigFile";
  local_70 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
  ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  lVar2 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((code *)PTR__bind_methods_00111018 != RefCounted::_bind_methods) {
    ConfigFile::_bind_methods();
  }
  initialize_class()::initialized = '\x01';
LAB_0010a5cb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_60;
  char local_58 [8];
  long *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x10a753);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC14;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == (long *)0x0) {
      lVar8 = 0;
      lVar7 = -2;
    }
    else {
      lVar8 = local_50[-1];
      lVar7 = lVar8 + -2;
      if (-1 < lVar7) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar7));
        String::operator+((String *)this,(String *)&local_48);
        puVar5 = local_48;
        lVar8 = local_60;
        if (local_48 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = (undefined *)0x0;
            Memory::free_static(puVar5 + -0x10,false);
            lVar8 = local_60;
          }
        }
        goto joined_r0x0010a82a;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar8,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  local_60 = 0;
  local_48 = &_LC14;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  lVar8 = local_60;
joined_r0x0010a82a:
  local_60 = lVar8;
  if (lVar8 != 0) {
    LOCK();
    plVar1 = (long *)(lVar8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  plVar1 = local_50;
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar6 = local_50 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_50 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar8 = local_50[-1];
      local_50 = (long *)0x0;
      if (lVar8 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar3 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar8 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* ResourceFormatLoader::~ResourceFormatLoader() */

void __thiscall ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = ProjectSettings::get_singleton;
  if (bVar1) {
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ab93;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ab93;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ab93;
    }
    if (*(long *)(this + 0x228) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ab93;
    }
    if (*(long *)(this + 0x210) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ab93;
    }
    if (*(long *)(this + 0x1f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ab93;
    }
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ab93;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ab93;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ab93;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ab93;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_0010ab93:
  *(undefined ***)this = &PTR__initialize_classv_0010da00;
  Object::~Object((Object *)this);
  return;
}



/* ResourceFormatLoader::~ResourceFormatLoader() */

void __thiscall ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this)

{
  ~ResourceFormatLoader(this);
  operator_delete(this,0x288);
  return;
}



/* ResourceFormatSaver::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ResourceFormatSaver::_get_property_listv(ResourceFormatSaver *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ResourceFormatSaver";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ResourceFormatSaver";
  local_98 = 0;
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_0010ad48:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010ad48;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010ad65;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010ad65:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"ResourceFormatSaver",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatImporterSaver::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
ResourceFormatImporterSaver::_get_property_listv
          (ResourceFormatImporterSaver *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    ResourceFormatSaver::_get_property_listv((ResourceFormatSaver *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ResourceFormatImporterSaver";
  local_70 = 0x1b;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ResourceFormatImporterSaver";
  local_98 = 0;
  local_70 = 0x1b;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_0010b198:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010b198;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010b1b5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010b1b5:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"ResourceFormatImporterSaver",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      ResourceFormatSaver::_get_property_listv((ResourceFormatSaver *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    plVar2 = (long *)*plVar5;
    if (plVar2 == (long *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if ((long *)plVar2[3] == plVar5) {
      lVar4 = plVar2[1];
      lVar3 = plVar2[2];
      *plVar5 = lVar4;
      if (plVar2 == (long *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 8) = lVar4;
        lVar4 = plVar2[1];
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x10) = lVar3;
      }
      if (*plVar2 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *plVar2;
          *plVar2 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      Memory::free_static(plVar2,false);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  Memory::free_static(plVar5,false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::insert(String const&)
    */

String * HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                   (String *param_1)

{
  CowData<char32_t> *this;
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  char cVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  uint *puVar36;
  int iVar37;
  uint uVar38;
  String *in_RDX;
  ulong uVar39;
  long lVar40;
  long *in_RSI;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  undefined4 uVar44;
  uint uVar45;
  uint uVar46;
  uint local_88;
  
  uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (*in_RSI == 0) {
    uVar32 = (ulong)uVar29 * 4;
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[3] = lVar33;
    lVar33 = Memory::alloc_static((ulong)uVar29 * 8,false);
    *in_RSI = lVar33;
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[2] = lVar33;
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[1] = lVar33;
    if (uVar29 != 0) {
      memset((void *)in_RSI[3],0,uVar32);
    }
    iVar37 = *(int *)((long)in_RSI + 0x24);
    if (*in_RSI != 0) goto LAB_0010b70c;
  }
  else {
    iVar37 = *(int *)((long)in_RSI + 0x24);
LAB_0010b70c:
    if (iVar37 != 0) {
      uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
      lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      uVar45 = String::hash();
      uVar32 = CONCAT44(0,uVar30);
      lVar41 = in_RSI[3];
      uVar38 = 1;
      if (uVar45 != 0) {
        uVar38 = uVar45;
      }
      uVar46 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar38 * lVar33;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar32;
      lVar40 = SUB168(auVar12 * auVar24,8);
      uVar45 = *(uint *)(lVar41 + lVar40 * 4);
      iVar37 = SUB164(auVar12 * auVar24,8);
      if (uVar45 == 0) {
        iVar37 = *(int *)((long)in_RSI + 0x24);
      }
      else {
        do {
          if (uVar38 == uVar45) {
            cVar28 = String::operator==((String *)
                                        (*in_RSI + (ulong)*(uint *)(in_RSI[1] + lVar40 * 4) * 8),
                                        in_RDX);
            if (cVar28 != '\0') {
              iVar37 = *(int *)((long)in_RSI + 0x24);
              lVar33 = *in_RSI;
              iVar31 = *(int *)(in_RSI[1] + lVar40 * 4);
              goto LAB_0010ba89;
            }
            lVar41 = in_RSI[3];
          }
          uVar46 = uVar46 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar37 + 1) * lVar33;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar32;
          lVar40 = SUB168(auVar13 * auVar25,8);
          uVar45 = *(uint *)(lVar41 + lVar40 * 4);
          iVar37 = SUB164(auVar13 * auVar25,8);
        } while ((uVar45 != 0) &&
                (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar45 * lVar33, auVar26._8_8_ = 0,
                auVar26._0_8_ = uVar32, auVar15._8_8_ = 0,
                auVar15._0_8_ = (ulong)((uVar30 + iVar37) - SUB164(auVar14 * auVar26,8)) * lVar33,
                auVar27._8_8_ = 0, auVar27._0_8_ = uVar32, uVar46 <= SUB164(auVar15 * auVar27,8)));
        iVar37 = *(int *)((long)in_RSI + 0x24);
      }
    }
  }
  if ((float)uVar29 * __LC41 < (float)(iVar37 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      iVar37 = *(int *)((long)in_RSI + 0x24);
      lVar33 = *in_RSI;
      iVar31 = -1;
      goto LAB_0010ba89;
    }
    uVar29 = (int)in_RSI[4] + 1;
    uVar32 = (ulong)uVar29;
    if (uVar29 < 2) {
      uVar32 = 2;
    }
    uVar29 = *(uint *)(hash_table_size_primes + uVar32 * 4);
    *(int *)(in_RSI + 4) = (int)uVar32;
    pvVar1 = (void *)in_RSI[3];
    uVar32 = (ulong)uVar29 * 4;
    pvVar2 = (void *)in_RSI[2];
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[3] = lVar33;
    lVar33 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar29 * 8,false);
    *in_RSI = lVar33;
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[2] = lVar33;
    lVar33 = Memory::realloc_static((void *)in_RSI[1],uVar32,false);
    in_RSI[1] = lVar33;
    if (uVar29 != 0) {
      memset((void *)in_RSI[3],0,uVar32);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar32 = 0;
      lVar41 = in_RSI[3];
      lVar40 = in_RSI[2];
      do {
        uVar43 = uVar32 & 0xffffffff;
        uVar44 = (undefined4)uVar32;
        uVar45 = 0;
        uVar29 = *(uint *)((long)pvVar1 + (ulong)*(uint *)((long)pvVar2 + uVar32 * 4) * 4);
        uVar39 = (ulong)uVar29;
        uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar42 = CONCAT44(0,uVar30);
        lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar39 * lVar34;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar42;
        lVar35 = SUB168(auVar4 * auVar16,8) * 4;
        iVar37 = SUB164(auVar4 * auVar16,8);
        puVar36 = (uint *)(lVar41 + lVar35);
        uVar38 = *puVar36;
        if (uVar38 == 0) {
          lVar34 = uVar32 * 4;
        }
        else {
          do {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar38 * lVar34;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar42;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)((uVar30 + iVar37) - SUB164(auVar5 * auVar17,8)) * lVar34;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar42;
            local_88 = SUB164(auVar6 * auVar18,8);
            if (local_88 < uVar45) {
              *(int *)(lVar40 + uVar43 * 4) = iVar37;
              uVar29 = *puVar36;
              *puVar36 = (uint)uVar39;
              uVar38 = *(uint *)(lVar35 + lVar33);
              uVar39 = (ulong)uVar29;
              *(uint *)(lVar35 + lVar33) = (uint)uVar43;
              uVar43 = (ulong)uVar38;
              uVar45 = local_88;
            }
            uVar44 = (undefined4)uVar43;
            uVar29 = (uint)uVar39;
            uVar45 = uVar45 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)(iVar37 + 1) * lVar34;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar42;
            lVar35 = SUB168(auVar7 * auVar19,8) * 4;
            iVar37 = SUB164(auVar7 * auVar19,8);
            puVar36 = (uint *)(lVar41 + lVar35);
            uVar38 = *puVar36;
          } while (uVar38 != 0);
          lVar34 = uVar43 << 2;
        }
        *puVar36 = uVar29;
        uVar32 = uVar32 + 1;
        *(int *)(lVar40 + lVar34) = iVar37;
        *(undefined4 *)(lVar33 + lVar35) = uVar44;
      } while ((uint)uVar32 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(pvVar2,false);
  }
  uVar30 = String::hash();
  uVar32 = (ulong)*(uint *)((long)in_RSI + 0x24);
  lVar33 = *in_RSI;
  uVar29 = 1;
  if (uVar30 != 0) {
    uVar29 = uVar30;
  }
  this = (CowData<char32_t> *)(lVar33 + uVar32 * 8);
  uVar39 = (ulong)uVar29;
  *(undefined8 *)this = 0;
  if (*(long *)in_RDX != 0) {
    CowData<char32_t>::_ref(this,(CowData *)in_RDX);
    uVar32 = (ulong)*(uint *)((long)in_RSI + 0x24);
    lVar33 = *in_RSI;
  }
  uVar44 = (undefined4)uVar32;
  uVar45 = 0;
  lVar40 = in_RSI[3];
  uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar43 = CONCAT44(0,uVar30);
  lVar35 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar39 * lVar35;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar43;
  lVar41 = SUB168(auVar8 * auVar20,8) * 4;
  iVar37 = SUB164(auVar8 * auVar20,8);
  lVar34 = in_RSI[2];
  lVar3 = in_RSI[1];
  puVar36 = (uint *)(lVar40 + lVar41);
  uVar38 = *puVar36;
  uVar42 = uVar32;
  while (uVar38 != 0) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar38 * lVar35;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar43;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)((uVar30 + iVar37) - SUB164(auVar9 * auVar21,8)) * lVar35;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar43;
    local_88 = SUB164(auVar10 * auVar22,8);
    if (local_88 < uVar45) {
      *(int *)(lVar34 + uVar42 * 4) = iVar37;
      uVar29 = *puVar36;
      *puVar36 = (uint)uVar39;
      puVar36 = (uint *)(lVar41 + lVar3);
      uVar38 = *puVar36;
      uVar39 = (ulong)uVar29;
      *puVar36 = (uint)uVar32;
      uVar32 = (ulong)uVar38;
      uVar42 = uVar32;
      uVar45 = local_88;
    }
    uVar44 = (undefined4)uVar32;
    uVar29 = (uint)uVar39;
    uVar45 = uVar45 + 1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)(iVar37 + 1) * lVar35;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar43;
    lVar41 = SUB168(auVar11 * auVar23,8) * 4;
    iVar37 = SUB164(auVar11 * auVar23,8);
    puVar36 = (uint *)(lVar40 + lVar41);
    uVar38 = *puVar36;
  }
  *puVar36 = uVar29;
  *(int *)(lVar34 + uVar42 * 4) = iVar37;
  *(undefined4 *)(lVar3 + lVar41) = uVar44;
  iVar31 = *(int *)((long)in_RSI + 0x24);
  iVar37 = iVar31 + 1;
  *(int *)((long)in_RSI + 0x24) = iVar37;
LAB_0010ba89:
  *(int *)(param_1 + 0xc) = iVar31;
  *(long *)param_1 = lVar33;
  *(int *)(param_1 + 8) = iVar37;
  return param_1;
}



/* CowData<char32_t>::_unref() */

void __thiscall CowData<char32_t>::_unref(CowData<char32_t> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* ResourceFormatImporterSaver::_initialize_classv() */

void ResourceFormatImporterSaver::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (ResourceFormatSaver::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_68 = 0;
        local_50 = 6;
        local_58 = "Object";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "RefCounted";
        local_70 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        lVar2 = local_68;
        if (local_68 != 0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        if ((code *)PTR__bind_methods_00111010 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "ResourceFormatSaver";
      local_70 = 0;
      local_50 = 0x13;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      lVar2 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((code *)PTR__bind_methods_00111020 != RefCounted::_bind_methods) {
        ResourceFormatSaver::_bind_methods();
      }
      ResourceFormatSaver::initialize_class()::initialized = '\x01';
    }
    local_58 = "ResourceFormatSaver";
    local_68 = 0;
    local_50 = 0x13;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ResourceFormatImporterSaver";
    local_70 = 0;
    local_50 = 0x1b;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    lVar2 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010c330) */
/* WARNING: Removing unreachable block (ram,0x0010c4c5) */
/* WARNING: Removing unreachable block (ram,0x0010c4d1) */
/* String vformat<String, int, String>(String const&, String const, int const, String const) */

undefined8 *
vformat<String,int,String>
          (undefined8 *param_1,bool *param_2,String *param_3,int param_4,String *param_5)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_f8 [8];
  undefined8 local_f0 [9];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_a8,param_3);
  iVar4 = 0;
  Variant::Variant(local_90,param_4);
  Variant::Variant(local_78,param_5);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f8);
  iVar3 = (int)local_f8;
  Array::resize(iVar3);
  pVVar2 = local_a8;
  do {
    iVar4 = iVar4 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar3);
    Variant::operator=(pVVar1,pVVar2);
    pVVar2 = pVVar2 + 0x18;
  } while (iVar4 != 3);
  String::sprintf((Array *)local_f0,param_2);
  *param_1 = local_f0[0];
  pVVar2 = local_48;
  Array::~Array(local_f8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* Ref<ResourceImporter>::unref() */

void __thiscall Ref<ResourceImporter>::unref(Ref<ResourceImporter> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<Ref<ResourceImporter> >::_unref() */

void __thiscall CowData<Ref<ResourceImporter>>::_unref(CowData<Ref<ResourceImporter>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_0010c70d:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_0010c70d;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* ResourceFormatImporter::~ResourceFormatImporter() */

void __thiscall ResourceFormatImporter::~ResourceFormatImporter(ResourceFormatImporter *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010dcc0;
  CowData<Ref<ResourceImporter>>::_unref((CowData<Ref<ResourceImporter>> *)(this + 0x290));
  ResourceFormatLoader::~ResourceFormatLoader((ResourceFormatLoader *)this);
  return;
}



/* CowData<Ref<ResourceImporter> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<ResourceImporter>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ResourceFormatImporter::~ResourceFormatImporter() */

void __thiscall ResourceFormatImporter::~ResourceFormatImporter(ResourceFormatImporter *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010dcc0;
  CowData<Ref<ResourceImporter>>::_unref((CowData<Ref<ResourceImporter>> *)(this + 0x290));
  ResourceFormatLoader::~ResourceFormatLoader((ResourceFormatLoader *)this);
  operator_delete(this,0x298);
  return;
}



/* CowData<Ref<ResourceImporter> >::_realloc(long) */

undefined8 __thiscall
CowData<Ref<ResourceImporter>>::_realloc(CowData<Ref<ResourceImporter>> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Ref<ResourceImporter> >::resize<false>(long) */

undefined8 __thiscall
CowData<Ref<ResourceImporter>>::resize<false>(CowData<Ref<ResourceImporter>> *this,long param_1)

{
  long *plVar1;
  Object *pOVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar7 = 0;
    lVar8 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar8 = lVar7 * 8;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0010cc00:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 8 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar11 = uVar9 + 1;
  if (lVar11 == 0) goto LAB_0010cc00;
  if (param_1 <= lVar7) {
    lVar7 = *(long *)this;
    uVar9 = param_1;
    while (lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar9) {
LAB_0010caaa:
        if (lVar11 != lVar8) {
          uVar5 = _realloc(this,lVar11);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          lVar7 = *(long *)this;
          if (lVar7 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar7 + -8) = param_1;
        return 0;
      }
      while (plVar1 = (long *)(lVar7 + uVar9 * 8), *plVar1 == 0) {
        uVar9 = uVar9 + 1;
        if (*(ulong *)(lVar7 + -8) <= uVar9) goto LAB_0010caaa;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        pOVar2 = (Object *)*plVar1;
        cVar4 = predelete_handler(pOVar2);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
      uVar9 = uVar9 + 1;
      lVar7 = *(long *)this;
    }
    goto LAB_0010ca70;
  }
  if (lVar11 == lVar8) {
LAB_0010cb7b:
    puVar10 = *(undefined8 **)this;
    if (puVar10 == (undefined8 *)0x0) {
LAB_0010ca70:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = puVar10[-1];
    if (param_1 <= lVar7) goto LAB_0010cb5b;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar11);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_0010cb7b;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar10 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar10;
    lVar7 = 0;
  }
  memset(puVar10 + lVar7,0,(param_1 - lVar7) * 8);
LAB_0010cb5b:
  puVar10[-1] = param_1;
  return 0;
}



/* SortArray<Ref<ResourceImporter>, ResourceFormatImporter::SortImporterByName,
   true>::adjust_heap(long, long, long, Ref<ResourceImporter>, Ref<ResourceImporter>*) const */

void __thiscall
SortArray<Ref<ResourceImporter>,ResourceFormatImporter::SortImporterByName,true>::adjust_heap
          (SortArray<Ref<ResourceImporter>,ResourceFormatImporter::SortImporterByName,true> *this,
          long param_1,long param_2,long param_3,long *param_5,long param_6)

{
  long *plVar1;
  Object *pOVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  Ref *pRVar8;
  Ref *pRVar9;
  long in_FS_OFFSET;
  long local_68;
  Object *local_58;
  Object *local_48;
  long local_40;
  
  lVar6 = param_2 * 2 + 2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  if (lVar6 < param_3) {
    do {
      pRVar8 = (Ref *)(param_6 + (lVar6 + -1 + param_1) * 8);
      pRVar9 = (Ref *)(param_6 + (param_1 + lVar6) * 8);
      cVar4 = ResourceFormatImporter::SortImporterByName::operator()
                        ((SortImporterByName *)this,pRVar9,pRVar8);
      lVar5 = lVar6 + -1;
      lVar7 = lVar6;
      if (cVar4 == '\0') {
        lVar7 = lVar6 + 1;
        lVar5 = lVar6;
        pRVar8 = pRVar9;
      }
      pOVar2 = *(Object **)pRVar8;
      plVar1 = (long *)(param_6 + (local_68 + param_1) * 8);
      pOVar3 = (Object *)*plVar1;
      if (pOVar2 == pOVar3) {
LAB_0010ccb8:
        lVar6 = lVar7 * 2;
        if (param_3 == lVar6 || SBORROW8(param_3,lVar6) != param_3 + lVar7 * -2 < 0)
        goto LAB_0010cd88;
      }
      else {
        *plVar1 = (long)pOVar2;
        if ((pOVar2 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
          *plVar1 = 0;
        }
        if (((pOVar3 == (Object *)0x0) || (cVar4 = RefCounted::unreference(), cVar4 == '\0')) ||
           (cVar4 = predelete_handler(pOVar3), cVar4 == '\0')) goto LAB_0010ccb8;
        lVar6 = lVar7 * 2;
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
        if (param_3 == lVar6 || SBORROW8(param_3,lVar6) != param_3 + lVar7 * -2 < 0)
        goto LAB_0010cd88;
      }
      lVar6 = lVar7 * 2;
      local_68 = lVar5;
    } while( true );
  }
  pRVar8 = (Ref *)(param_6 + (param_2 + param_1) * 8);
  lVar5 = param_2;
LAB_0010cd88:
  pRVar9 = pRVar8;
  if (param_3 == lVar6) {
    pOVar2 = *(Object **)pRVar8;
    lVar5 = param_3 + -1;
    pRVar9 = (Ref *)(param_6 + (lVar5 + param_1) * 8);
    pOVar3 = *(Object **)pRVar9;
    if (pOVar3 != pOVar2) {
      *(Object **)pRVar8 = pOVar3;
      if ((pOVar3 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        *(undefined8 *)pRVar8 = 0;
      }
      if (((pOVar2 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
         (cVar4 = predelete_handler(pOVar2), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  local_58 = (Object *)*param_5;
  if ((local_58 == (Object *)0x0) ||
     (local_48 = local_58, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
    local_48 = (Object *)0x0;
    local_58 = (Object *)0x0;
  }
  lVar6 = (lVar5 + -1) - (lVar5 + -1 >> 0x3f);
  if (param_2 < lVar5) {
    do {
      lVar7 = lVar6 >> 1;
      pRVar8 = (Ref *)(param_6 + (param_1 + lVar7) * 8);
      pRVar9 = (Ref *)(param_6 + (lVar5 + param_1) * 8);
      cVar4 = ResourceFormatImporter::SortImporterByName::operator()
                        ((SortImporterByName *)this,pRVar8,(Ref *)&local_48);
      if (cVar4 == '\0') break;
      pOVar2 = *(Object **)pRVar8;
      pOVar3 = *(Object **)pRVar9;
      if (pOVar2 != pOVar3) {
        *(Object **)pRVar9 = pOVar2;
        if ((pOVar2 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
          *(undefined8 *)pRVar9 = 0;
        }
        if (((pOVar3 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
           (cVar4 = predelete_handler(pOVar3), cVar4 != '\0')) {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
      }
      lVar6 = (lVar7 + -1) - (lVar7 + -1 >> 0x3f);
      lVar5 = lVar7;
      pRVar9 = pRVar8;
    } while (param_2 < lVar7);
  }
  pOVar2 = *(Object **)pRVar9;
  if (local_58 == pOVar2) {
LAB_0010cf95:
    if (local_58 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
joined_r0x0010cfad:
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(local_58), cVar4 != '\0')) {
        (**(code **)(*(long *)local_58 + 0x140))(local_58);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(local_58,false);
          return;
        }
        goto LAB_0010d090;
      }
    }
  }
  else {
    *(Object **)pRVar9 = local_58;
    if (local_58 != (Object *)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *(undefined8 *)pRVar9 = 0;
      }
      if (((pOVar2 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
         (cVar4 = predelete_handler(pOVar2), cVar4 != '\0')) goto LAB_0010cf7f;
      cVar4 = RefCounted::unreference();
      goto joined_r0x0010cfad;
    }
    if (((pOVar2 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
       (cVar4 = predelete_handler(pOVar2), cVar4 != '\0')) {
LAB_0010cf7f:
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
      goto LAB_0010cf95;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010d090:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<Ref<ResourceImporter>, ResourceFormatImporter::SortImporterByName,
   true>::introsort(long, long, Ref<ResourceImporter>*, long) const */

void __thiscall
SortArray<Ref<ResourceImporter>,ResourceFormatImporter::SortImporterByName,true>::introsort
          (SortArray<Ref<ResourceImporter>,ResourceFormatImporter::SortImporterByName,true> *this,
          long param_1,long param_2,Ref *param_3,long param_4)

{
  Ref *pRVar1;
  bool bVar2;
  char cVar3;
  Ref *pRVar4;
  Object *pOVar5;
  long lVar6;
  Object *pOVar7;
  Object *pOVar8;
  Ref *pRVar9;
  Object *pOVar10;
  long lVar11;
  Ref *pRVar12;
  long in_FS_OFFSET;
  long local_78;
  long local_68;
  Object *local_48;
  long local_40;
  
  lVar6 = param_2 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10 < lVar6) {
    if (param_4 != 0) {
      pRVar4 = param_3 + param_1 * 8;
      local_78 = param_2;
      local_68 = param_4;
LAB_0010d173:
      local_68 = local_68 + -1;
      pRVar1 = param_3 + local_78 * 8 + -8;
      pRVar12 = param_3 + ((lVar6 >> 1) + param_1) * 8;
      cVar3 = ResourceFormatImporter::SortImporterByName::operator()
                        ((SortImporterByName *)this,pRVar4,pRVar12);
      if (cVar3 == '\0') {
        cVar3 = ResourceFormatImporter::SortImporterByName::operator()
                          ((SortImporterByName *)this,pRVar4,pRVar1);
        pRVar9 = pRVar4;
        if (cVar3 != '\0') goto LAB_0010d1df;
        cVar3 = ResourceFormatImporter::SortImporterByName::operator()
                          ((SortImporterByName *)this,pRVar12,pRVar1);
      }
      else {
        cVar3 = ResourceFormatImporter::SortImporterByName::operator()
                          ((SortImporterByName *)this,pRVar12,pRVar1);
        pRVar9 = pRVar12;
        if (cVar3 != '\0') goto LAB_0010d1df;
        cVar3 = ResourceFormatImporter::SortImporterByName::operator()
                          ((SortImporterByName *)this,pRVar4,pRVar1);
        pRVar12 = pRVar4;
      }
      pRVar9 = pRVar12;
      if (cVar3 != '\0') {
        pRVar9 = pRVar1;
      }
LAB_0010d1df:
      pOVar8 = *(Object **)pRVar9;
      lVar6 = local_78;
      param_2 = param_1;
      if ((pOVar8 == (Object *)0x0) ||
         (local_48 = pOVar8, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
        local_48 = (Object *)0x0;
        pOVar8 = (Object *)0x0;
      }
      do {
        cVar3 = ResourceFormatImporter::SortImporterByName::operator()
                          ((SortImporterByName *)this,param_3 + param_2 * 8,(Ref *)&local_48);
        if (cVar3 == '\0') {
LAB_0010d25b:
          lVar6 = lVar6 + -1;
          pRVar12 = param_3 + lVar6 * 8;
          while (cVar3 = ResourceFormatImporter::SortImporterByName::operator()
                                   ((SortImporterByName *)this,(Ref *)&local_48,pRVar12),
                cVar3 != '\0') {
            if (param_1 == lVar6) {
              _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                               "bad comparison function; sorting will be broken",0,0);
              break;
            }
            lVar6 = lVar6 + -1;
            pRVar12 = pRVar12 + -8;
          }
          if (lVar6 <= param_2) goto LAB_0010d414;
          pOVar7 = *(Object **)(param_3 + param_2 * 8);
          if (pOVar7 == (Object *)0x0) {
            if (*(long *)pRVar12 != 0) {
              *(long *)(param_3 + param_2 * 8) = *(long *)pRVar12;
              pOVar5 = (Object *)0x0;
LAB_0010d318:
              cVar3 = RefCounted::reference();
              if (cVar3 == '\0') {
                *(undefined8 *)(param_3 + param_2 * 8) = 0;
              }
              goto LAB_0010d345;
            }
          }
          else {
            cVar3 = RefCounted::reference();
            pOVar10 = *(Object **)pRVar12;
            if (cVar3 == '\0') {
              pOVar7 = (Object *)0x0;
            }
            pOVar5 = *(Object **)(param_3 + param_2 * 8);
            if (pOVar5 != pOVar10) {
              *(Object **)(param_3 + param_2 * 8) = pOVar10;
              if (pOVar10 != (Object *)0x0) goto LAB_0010d318;
LAB_0010d345:
              if (((pOVar5 == (Object *)0x0) || (cVar3 = RefCounted::unreference(), cVar3 == '\0'))
                 || (cVar3 = predelete_handler(pOVar5), cVar3 == '\0')) {
                pOVar10 = *(Object **)pRVar12;
              }
              else {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
                pOVar10 = *(Object **)pRVar12;
              }
            }
            if (pOVar7 == pOVar10) {
LAB_0010d4de:
              pOVar7 = pOVar10;
              if (pOVar7 == (Object *)0x0) goto LAB_0010d23a;
            }
            else {
              *(Object **)pRVar12 = pOVar7;
              if (pOVar7 == (Object *)0x0) {
                if (((pOVar10 == (Object *)0x0) ||
                    (cVar3 = RefCounted::unreference(), cVar3 == '\0')) ||
                   (cVar3 = predelete_handler(pOVar10), cVar3 == '\0')) goto LAB_0010d23a;
LAB_0010d4bd:
                (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
                Memory::free_static(pOVar10,false);
                pOVar10 = pOVar7;
                goto LAB_0010d4de;
              }
              cVar3 = RefCounted::reference();
              if (cVar3 == '\0') {
                *(undefined8 *)pRVar12 = 0;
              }
              if (((pOVar10 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0'))
                 && (cVar3 = predelete_handler(pOVar10), cVar3 != '\0')) goto LAB_0010d4bd;
            }
            cVar3 = RefCounted::unreference();
            if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar7), cVar3 != '\0')) {
              (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
              Memory::free_static(pOVar7,false);
            }
          }
        }
        else if (local_78 + -1 == param_2) {
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                           "bad comparison function; sorting will be broken",0,0);
          goto LAB_0010d25b;
        }
LAB_0010d23a:
        param_2 = param_2 + 1;
      } while( true );
    }
LAB_0010d643:
    lVar11 = lVar6 + -2 >> 1;
    pRVar4 = param_3 + param_1 * 8;
    while( true ) {
      pOVar8 = *(Object **)(pRVar4 + lVar11 * 8);
      if ((pOVar8 == (Object *)0x0) ||
         (local_48 = pOVar8, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
        local_48 = (Object *)0x0;
        adjust_heap(this,param_1,lVar11,lVar6,&local_48,param_3);
      }
      else {
        adjust_heap(this,param_1,lVar11,lVar6,&local_48,param_3);
        cVar3 = RefCounted::unreference();
        if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar8), cVar3 != '\0')) {
          (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
          Memory::free_static(pOVar8,false);
        }
      }
      if (lVar11 == 0) break;
      lVar11 = lVar11 + -1;
    }
    pRVar12 = param_3 + param_2 * 8 + -8;
    lVar6 = (param_2 + -1) - param_1;
    do {
      pOVar8 = *(Object **)pRVar12;
      if (pOVar8 == (Object *)0x0) {
        if (*(long *)pRVar4 != 0) {
          *(long *)pRVar12 = *(long *)pRVar4;
          pOVar7 = (Object *)0x0;
LAB_0010d88f:
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            *(long *)pRVar12 = 0;
          }
          goto LAB_0010d740;
        }
LAB_0010d8b5:
        local_48 = (Object *)0x0;
        adjust_heap(this,param_1,0,lVar6,&local_48,param_3);
      }
      else {
        cVar3 = RefCounted::reference();
        pOVar5 = *(Object **)pRVar4;
        pOVar7 = *(Object **)pRVar12;
        if (cVar3 == '\0') {
          pOVar8 = (Object *)0x0;
          if (pOVar5 == pOVar7) goto LAB_0010d8b5;
LAB_0010d733:
          *(Object **)pRVar12 = pOVar5;
          if (pOVar5 != (Object *)0x0) goto LAB_0010d88f;
LAB_0010d740:
          if (((pOVar7 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
             (cVar3 = predelete_handler(pOVar7), cVar3 != '\0')) {
            (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
            Memory::free_static(pOVar7,false);
          }
          if (pOVar8 == (Object *)0x0) goto LAB_0010d8b5;
        }
        else if (pOVar5 != pOVar7) goto LAB_0010d733;
        local_48 = pOVar8;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_48 = (Object *)0x0;
          adjust_heap(this,param_1,0,lVar6,&local_48,param_3);
LAB_0010d7a0:
          cVar3 = RefCounted::unreference();
        }
        else {
          adjust_heap(this,param_1,0,lVar6,&local_48,param_3);
          cVar3 = RefCounted::unreference();
          if ((cVar3 == '\0') || (cVar3 = predelete_handler(pOVar8), cVar3 == '\0'))
          goto LAB_0010d7a0;
          (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
          Memory::free_static(pOVar8,false);
          cVar3 = RefCounted::unreference();
        }
        if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar8), cVar3 != '\0')) {
          (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
          Memory::free_static(pOVar8,false);
        }
      }
      pRVar12 = pRVar12 + -8;
      bVar2 = 1 < lVar6;
      lVar6 = lVar6 + -1;
    } while (bVar2);
  }
LAB_0010d5ea:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010d414:
  if (((pOVar8 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
     (cVar3 = predelete_handler(pOVar8), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar8 + 0x140))();
    Memory::free_static(pOVar8,false);
  }
  introsort(this,param_2,local_78,param_3,local_68);
  lVar6 = param_2 - param_1;
  if (lVar6 < 0x11) goto LAB_0010d5ea;
  local_78 = param_2;
  if (local_68 == 0) goto LAB_0010d643;
  goto LAB_0010d173;
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ResourceFormatImporter::~ResourceFormatImporter() */

void __thiscall ResourceFormatImporter::~ResourceFormatImporter(ResourceFormatImporter *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ResourceFormatLoader::~ResourceFormatLoader() */

void __thiscall ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ResourceFormatImporterSaver::~ResourceFormatImporterSaver() */

void __thiscall
ResourceFormatImporterSaver::~ResourceFormatImporterSaver(ResourceFormatImporterSaver *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
