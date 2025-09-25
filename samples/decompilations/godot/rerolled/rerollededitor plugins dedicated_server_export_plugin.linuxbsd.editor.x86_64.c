/* DedicatedServerExportPlugin::_end_customize_resources() */void DedicatedServerExportPlugin::_end_customize_resources(DedicatedServerExportPlugin *this) {
   *(undefined4*)( this + 0x458 ) = 0;
   return;
}
/* DedicatedServerExportPlugin::_begin_customize_scenes(Ref<EditorExportPlatform> const&,
   Vector<String> const&) */ulong DedicatedServerExportPlugin::_begin_customize_scenes(Ref *param_1, Vector *param_2) {
   long lVar1;
   char cVar2;
   int iVar3;
   ulong uVar4;
   long in_FS_OFFSET;
   Object *local_28;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   EditorExportPlugin::get_export_preset();
   if (local_28 == (Object*)0x0) {
      uVar4 = 0;
      _err_print_error("_begin_customize_scenes", "editor/plugins/dedicated_server_export_plugin.cpp", 0x5b, "Condition \"preset.is_null()\" is true. Returning: false", 0, 0);
   }
 else {
      *(undefined4*)( param_1 + 0x458 ) = 0;
      iVar3 = EditorExportPreset::get_export_filter();
      uVar4 = CONCAT71(( int7 )((ulong)param_1 >> 8), iVar3 == 4);
      cVar2 = RefCounted::unreference();
      if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
         ( **(code**)( *(long*)local_28 + 0x140 ) )(local_28);
         Memory::free_static(local_28, false);
      }

   }

   if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4 & 0xffffffff;
}
/* DedicatedServerExportPlugin::_begin_customize_resources(Ref<EditorExportPlatform> const&,
   Vector<String> const&) */ulong DedicatedServerExportPlugin::_begin_customize_resources(Ref *param_1, Vector *param_2) {
   long lVar1;
   char cVar2;
   int iVar3;
   ulong uVar4;
   long in_FS_OFFSET;
   Object *local_28;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   EditorExportPlugin::get_export_preset();
   if (local_28 == (Object*)0x0) {
      uVar4 = 0;
      _err_print_error("_begin_customize_resources", "editor/plugins/dedicated_server_export_plugin.cpp", 100, "Condition \"preset.is_null()\" is true. Returning: false", 0, 0);
   }
 else {
      *(undefined4*)( param_1 + 0x458 ) = 0;
      iVar3 = EditorExportPreset::get_export_filter();
      uVar4 = CONCAT71(( int7 )((ulong)param_1 >> 8), iVar3 == 4);
      cVar2 = RefCounted::unreference();
      if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
         ( **(code**)( *(long*)local_28 + 0x140 ) )(local_28);
         Memory::free_static(local_28, false);
      }

   }

   if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4 & 0xffffffff;
}
/* DedicatedServerExportPlugin::_get_customization_configuration_hash() const */undefined4 DedicatedServerExportPlugin::_get_customization_configuration_hash(void) {
   char cVar1;
   int iVar2;
   undefined4 uVar3;
   long in_FS_OFFSET;
   Object *local_30;
   Dictionary local_28[8];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   EditorExportPlugin::get_export_preset();
   if (local_30 == (Object*)0x0) {
      _err_print_error("_get_customization_configuration_hash", "editor/plugins/dedicated_server_export_plugin.cpp", 0x50, "Condition \"preset.is_null()\" is true. Returning: 0", 0, 0);
   }
 else {
      iVar2 = EditorExportPreset::get_export_filter();
      if (iVar2 == 4) {
         EditorExportPreset::get_customized_files();
         uVar3 = Dictionary::hash();
         Dictionary::~Dictionary(local_28);
         goto LAB_00100211;
      }

   }

   uVar3 = 0;
   LAB_00100211:if (local_30 != (Object*)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
         cVar1 = predelete_handler(local_30);
         if (cVar1 != '\0') {
            ( **(code**)( *(long*)local_30 + 0x140 ) )(local_30);
            Memory::free_static(local_30, false);
         }

      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* DedicatedServerExportPlugin::_get_export_mode_for_path(String const&) */int DedicatedServerExportPlugin::_get_export_mode_for_path(DedicatedServerExportPlugin *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   char *pcVar4;
   char *pcVar5;
   char cVar6;
   int iVar7;
   int iVar8;
   long lVar9;
   long in_FS_OFFSET;
   bool bVar10;
   Object *local_98;
   char *local_90;
   long local_88;
   long local_80;
   long local_78;
   long local_70;
   char local_68[8];
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   EditorExportPlugin::get_export_preset();
   if (local_98 == (Object*)0x0) {
      iVar7 = 0;
      _err_print_error("_get_export_mode_for_path", "editor/plugins/dedicated_server_export_plugin.cpp", 0x23, "Condition \"preset.is_null()\" is true. Returning: EditorExportPreset::MODE_FILE_NOT_CUSTOMIZED", 0, 0);
   }
 else {
      iVar7 = EditorExportPreset::get_file_export_mode(local_98, param_1, 0);
      if (iVar7 == 0) {
         local_90 = (char*)0x0;
         plVar1 = (long*)( *(long*)param_1 + -0x10 );
         if (*(long*)param_1 != 0) {
            do {
               lVar2 = *plVar1;
               if (lVar2 == 0) goto LAB_00100501;
               LOCK();
               lVar9 = *plVar1;
               bVar10 = lVar2 == lVar9;
               if (bVar10) {
                  *plVar1 = lVar2 + 1;
                  lVar9 = lVar2;
               }

               UNLOCK();
            }
 while ( !bVar10 );
            if (lVar9 != -1) {
               local_90 = *(char**)param_1;
            }

         }

         LAB_00100501:cVar6 = String::begins_with((char*)&local_90);
         pcVar5 = local_90;
         if (cVar6 != '\0') {
            String::substr((int)&local_58, (int)&local_90);
            pcVar4 = local_58;
            pcVar3 = local_90;
            if (local_90 == local_58) {
               pcVar5 = local_90;
               if (local_90 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_90 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_58 = (char*)0x0;
                     Memory::free_static(pcVar4 + -0x10, false);
                     pcVar5 = local_90;
                  }

               }

            }
 else {
               pcVar5 = local_58;
               if (local_90 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_90 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  pcVar5 = local_58;
                  if (*plVar1 == 0) {
                     local_90 = (char*)0x0;
                     Memory::free_static(pcVar3 + -0x10, false);
                     pcVar5 = local_58;
                  }

               }

            }

         }

         local_90 = pcVar5;
         String::split(local_68, SUB81(&local_90, 0), 0x1012c4);
         if (local_60 != 0) {
            while (0 < *(long*)( local_60 + -8 )) {
               CowData<String>::resize<false>((CowData<String>*)&local_60, *(long*)( local_60 + -8 ) + -1);
               local_58 = "res://";
               local_88 = 0;
               local_50 = 6;
               String::parse_latin1((StrRange*)&local_88);
               if (( local_60 != 0 ) && ( 0 < *(long*)( local_60 + -8 ) )) {
                  local_58 = "/";
                  local_70 = 0;
                  local_50 = 1;
                  String::parse_latin1((StrRange*)&local_70);
                  local_80 = 0;
                  local_58 = "/";
                  local_50 = 1;
                  String::parse_latin1((StrRange*)&local_80);
                  String::join((Vector*)&local_78);
                  String::operator +((String*)&local_58, (String*)&local_78);
                  String::operator +=((String*)&local_88, (String*)&local_58);
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

                  lVar2 = local_80;
                  if (local_80 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_80 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_80 = 0;
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

               }

               iVar8 = EditorExportPreset::get_file_export_mode(local_98, (StrRange*)&local_88, 0);
               lVar2 = local_88;
               if (iVar8 != 0) {
                  iVar7 = iVar8;
                  if (local_88 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_88 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_88 = 0;
                        Memory::free_static((void*)( lVar2 + -0x10 ), false);
                     }

                  }

                  break;
               }

               if (local_88 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_88 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_88 = 0;
                     Memory::free_static((void*)( lVar2 + -0x10 ), false);
                  }

               }

               if (local_60 == 0) break;
            }
;
         }

         CowData<String>::_unref((CowData<String>*)&local_60);
         pcVar5 = local_90;
         if (local_90 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_90 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_90 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

      }

   }

   if (( ( local_98 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)local_98 + 0x140 ))(local_98);
   Memory::free_static(local_98, false);
}
if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return iVar7;}/* DedicatedServerExportPlugin::_customize_scene(Node*, String const&) */undefined8 DedicatedServerExportPlugin::_customize_scene(DedicatedServerExportPlugin *this, Node *param_1, String *param_2) {
   undefined4 uVar1;
   uVar1 = _get_export_mode_for_path(this, param_2);
   *(undefined4*)( this + 0x458 ) = uVar1;
   return 0;
}
/* DedicatedServerExportPlugin::_customize_resource(Ref<Resource> const&, String const&) */Ref *DedicatedServerExportPlugin::_customize_resource(Ref *param_1, String *param_2) {
   StringName *pSVar1;
   long *plVar2;
   code *pcVar3;
   char cVar4;
   undefined4 uVar5;
   Object *pOVar6;
   String *in_RCX;
   undefined8 *in_RDX;
   long in_FS_OFFSET;
   long local_70;
   int local_68;
   undefined4 uStack_64;
   undefined4 uStack_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar4 = String::operator !=(in_RCX, "");
   if (cVar4 != '\0') {
      uVar5 = _get_export_mode_for_path((DedicatedServerExportPlugin*)param_2, in_RCX);
      *(undefined4*)( param_2 + 0x458 ) = uVar5;
   }

   pSVar1 = (StringName*)*in_RDX;
   if (( pSVar1 != (StringName*)0x0 ) && ( *(int*)( param_2 + 0x458 ) == 1 )) {
      StringName::StringName((StringName*)&local_68, "create_placeholder", false);
      cVar4 = Object::has_method(pSVar1);
      if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_64, local_68) != 0 )) {
         StringName::unref();
      }

      if (cVar4 != '\0') {
         plVar2 = (long*)*in_RDX;
         local_68 = 0;
         uStack_64 = 0;
         uStack_60 = 0;
         pcVar3 = *(code**)( *plVar2 + 0x68 );
         StringName::StringName((StringName*)&local_70, "create_placeholder", false);
         ( *pcVar3 )(local_58, plVar2, (StringName*)&local_70, 0, 0, (StringName*)&local_68);
         pOVar6 = (Object*)Variant::get_validated_object();
         if (pOVar6 != (Object*)0x0) {
            pOVar6 = (Object*)__dynamic_cast(pOVar6, &Object::typeinfo, &Resource::typeinfo, 0);
            if (pOVar6 != (Object*)0x0) {
               cVar4 = RefCounted::reference();
               if (cVar4 == '\0') {
                  pOVar6 = (Object*)0x0;
               }

            }

         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

         if (local_68 == 0) {
            if (pOVar6 != (Object*)0x0) {
               *(Object**)param_1 = pOVar6;
               cVar4 = RefCounted::reference();
               if (cVar4 == '\0') {
                  *(undefined8*)param_1 = 0;
               }

               cVar4 = RefCounted::unreference();
               if (cVar4 != '\0') {
                  cVar4 = predelete_handler(pOVar6);
                  if (cVar4 != '\0') {
                     ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
                     Memory::free_static(pOVar6, false);
                  }

               }

               goto LAB_001009ca;
            }

         }
 else if (pOVar6 != (Object*)0x0) {
            cVar4 = RefCounted::unreference();
            if (cVar4 != '\0') {
               cVar4 = predelete_handler(pOVar6);
               if (cVar4 != '\0') {
                  ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
                  Memory::free_static(pOVar6, false);
               }

            }

         }

      }

   }

   *(undefined8*)param_1 = 0;
   LAB_001009ca:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DedicatedServerExportPlugin::_get_export_features(Ref<EditorExportPlatform> const&, bool) const
    */Ref *DedicatedServerExportPlugin::_get_export_features(Ref *param_1, bool param_2) {
   long *plVar1;
   CowData<char32_t> *this;
   char cVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long in_FS_OFFSET;
   bool bVar7;
   Object *local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( param_1 + 8 ) = 0;
   EditorExportPlugin::get_export_preset();
   if (local_58 == (Object*)0x0) {
      _err_print_error("_get_export_features", "editor/plugins/dedicated_server_export_plugin.cpp", 0x46, "Condition \"preset.is_null()\" is true. Returning: ret", 0, 0);
      goto LAB_00100c29;
   }

   cVar2 = EditorExportPreset::is_dedicated_server();
   if (cVar2 == '\0') goto LAB_00100c29;
   local_50 = 0;
   local_48 = "dedicated_server";
   local_40 = 0x10;
   String::parse_latin1((StrRange*)&local_50);
   local_48 = (char*)0x0;
   lVar4 = local_50;
   if (local_50 != 0) {
      plVar1 = (long*)( local_50 + -0x10 );
      do {
         lVar5 = *plVar1;
         if (lVar5 == 0) goto LAB_00100dd8;
         LOCK();
         lVar6 = *plVar1;
         bVar7 = lVar5 == lVar6;
         if (bVar7) {
            *plVar1 = lVar5 + 1;
            lVar6 = lVar5;
         }

         UNLOCK();
      }
 while ( !bVar7 );
      if (lVar6 == -1) {
         LAB_00100dd8:lVar4 = 0;
      }
 else {
         local_48 = (char*)local_50;
      }

   }

   if (*(long*)( param_1 + 8 ) == 0) {
      lVar5 = 1;
   }
 else {
      lVar5 = *(long*)( *(long*)( param_1 + 8 ) + -8 ) + 1;
   }

   iVar3 = CowData<String>::resize<false>((CowData<String>*)( param_1 + 8 ), lVar5);
   if (iVar3 == 0) {
      if (*(long*)( param_1 + 8 ) == 0) {
         lVar6 = -1;
         lVar5 = 0;
      }
 else {
         lVar5 = *(long*)( *(long*)( param_1 + 8 ) + -8 );
         lVar6 = lVar5 + -1;
         if (-1 < lVar6) {
            CowData<String>::_copy_on_write((CowData<String>*)( param_1 + 8 ));
            this(CowData<char32_t> * )(*(long*)( param_1 + 8 ) + lVar6 * 8);
            if (*(long*)this != lVar4) {
               CowData<char32_t>::_ref(this, (CowData*)&local_48);
            }

            goto LAB_00100d3e;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar6, lVar5, "p_index", "size()", "", false, false);
   }
 else {
      _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   }

   LAB_00100d3e:if (lVar4 != 0) {
      LOCK();
      plVar1 = (long*)( lVar4 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( (long)local_48 + -0x10 ), false);
      }

   }

   lVar4 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   LAB_00100c29:if (( ( local_58 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)local_58 + 0x140 ))(local_58);
   Memory::free_static(local_58, false);
}
if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return param_1;}/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
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
/* RefCounted::is_class_ptr(void*) const */uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
   return (uint)CONCAT71(0x103b, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x103b, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
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
   return (uint)CONCAT71(0x103b, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x103a, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x103b, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
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
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00103768;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00103768;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
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
         LAB_001013a3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001013a3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorExportPlugin");
         goto LAB_0010140e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorExportPlugin");
   LAB_0010140e:return &_get_class_namev();
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
         LAB_00101483:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00101483;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_001014ee;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_001014ee:return &_get_class_namev();
}
/* DedicatedServerExportPlugin::get_name() const */DedicatedServerExportPlugin * __thiscall
DedicatedServerExportPlugin::get_name(DedicatedServerExportPlugin *this){
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
                  if (lVar5 == 0) goto LAB_001017ef;
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

      LAB_001017ef:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_001018a3;
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
                     if (lVar5 == 0) goto LAB_00101953;
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

         LAB_00101953:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_001018a3;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_001018a3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
                  if (lVar4 == 0) goto LAB_00101a7f;
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

      LAB_00101a7f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00101b33;
   }

   cVar5 = String::operator ==(param_1, "EditorExportPlugin");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00101b33:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
            if (pvVar5 == (void*)0x0) goto LAB_00101ce4;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_00101ce4:if (*(long*)this != 0) {
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
      LAB_00102078:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00102078;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x00102096;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x00102096:if (lVar2 == 0) {
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
/* EditorExportPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void EditorExportPlugin::_get_property_listv(EditorExportPlugin *this, List *param_1, bool param_2) {
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
      LAB_00102478:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00102478;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00102495;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00102495:if (lVar2 == 0) {
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
/* EditorExportPlugin::_initialize_classv() */void EditorExportPlugin::_initialize_classv(void) {
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
   if (initialize_class() != '\0') goto LAB_001028bb;
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
      if (local_68 == 0) {
         LAB_001029ca:if ((code*)PTR__bind_methods_00106010 != RefCounted::_bind_methods) {
            LAB_001029da:RefCounted::_bind_methods();
         }

      }
 else {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) goto LAB_001029ca;
         local_68 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         if ((code*)PTR__bind_methods_00106010 != RefCounted::_bind_methods) goto LAB_001029da;
      }

      RefCounted::initialize_class()::initialized =
      '\x01';
   }

   local_58 = "RefCounted";
   local_68 = 0;
   local_50 = 10;
   String::parse_latin1((StrRange*)&local_68);
   StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
   local_58 = "EditorExportPlugin";
   local_70 = 0;
   local_50 = 0x12;
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

   if ((code*)PTR__bind_methods_00106008 != RefCounted::_bind_methods) {
      EditorExportPlugin::_bind_methods();
   }

   initialize_class()::initialized =
   '\x01';
   LAB_001028bb:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
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
/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<String>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
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
      LAB_00102ea0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar10 == 0) goto LAB_00102ea0;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_00102d79:if (lVar10 != lVar7) {
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
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_00102d79;
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
      goto LAB_00102ef6;
   }

   if (lVar10 == lVar7) {
      LAB_00102e1f:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_00102ef6:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_00102e0a;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_00102e1f;
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
   LAB_00102e0a:puVar9[-1] = param_1;
   return 0;
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
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   bool bVar5;
   bVar5 = StringName::configured != '\0';
   *(undefined**)this = &typeinfo;
   if (bVar5) {
      if (*(long*)( this + 0x440 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103420;
      }

      if (*(long*)( this + 0x428 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103420;
      }

      if (*(long*)( this + 0x410 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103420;
      }

      if (*(long*)( this + 0x3f8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103420;
      }

      if (*(long*)( this + 0x3e0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103420;
      }

      if (*(long*)( this + 0x3c8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103420;
      }

      if (*(long*)( this + 0x3b0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103420;
      }

      if (*(long*)( this + 0x398 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103420;
      }

      if (*(long*)( this + 0x380 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103420;
      }

      if (*(long*)( this + 0x368 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103420;
      }

      if (*(long*)( this + 0x350 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103420;
      }

      if (*(long*)( this + 0x338 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103420;
      }

      if (*(long*)( this + 800 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103420;
      }

      if (*(long*)( this + 0x308 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103420;
      }

      if (*(long*)( this + 0x2f0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103420;
      }

      if (*(long*)( this + 0x2d8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103420;
      }

      if (*(long*)( this + 0x2c0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103420;
      }

      if (*(long*)( this + 0x2a8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103420;
      }

      if (*(long*)( this + 0x290 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103420;
      }

      if (*(long*)( this + 0x278 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103420;
      }

      if (*(long*)( this + 0x260 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103420;
      }

      if (*(long*)( this + 0x248 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103420;
      }

      if (*(long*)( this + 0x230 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103420;
      }

      if (*(long*)( this + 0x218 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00103420:CowData<String>::_unref((CowData<String>*)( this + 0x210 ));
   if (*(long*)( this + 0x200 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x200 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x200 );
         *(undefined8*)( this + 0x200 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   CowData<String>::_unref((CowData<String>*)( this + 0x1f8 ));
   if (*(long*)( this + 0x1e8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x1e8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x1e8 );
         *(undefined8*)( this + 0x1e8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x1e0 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x1e0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x1e0 );
         *(undefined8*)( this + 0x1e0 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   for (int i = 0; i < 3; i++) {
      CowData<String>::_unref((CowData<String>*)( this + ( -16*i + 472 ) ));
   }

   CowData<EditorExportPlugin::ExtraFile>::_unref((CowData<EditorExportPlugin::ExtraFile>*)( this + 0x1a0 ));
   CowData<SharedObject>::_unref((CowData<SharedObject>*)( this + 400 ));
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

   *(undefined***)this = &PTR__initialize_classv_00103768;
   Object::~Object((Object*)this);
   return;
}
/* DedicatedServerExportPlugin::~DedicatedServerExportPlugin() */void DedicatedServerExportPlugin::~DedicatedServerExportPlugin(DedicatedServerExportPlugin *this) {
   *(undefined***)this = &PTR__initialize_classv_001038c8;
   EditorExportPlugin::~EditorExportPlugin((EditorExportPlugin*)this);
   return;
}
/* DedicatedServerExportPlugin::~DedicatedServerExportPlugin() */void DedicatedServerExportPlugin::~DedicatedServerExportPlugin(DedicatedServerExportPlugin *this) {
   *(undefined***)this = &PTR__initialize_classv_001038c8;
   EditorExportPlugin::~EditorExportPlugin((EditorExportPlugin*)this);
   operator_delete(this, 0x460);
   return;
}
/* EditorExportPlugin::~EditorExportPlugin() */void EditorExportPlugin::~EditorExportPlugin(EditorExportPlugin *this) {
   ~EditorExportPlugin(this)
   ;;
   operator_delete(this, 0x458);
   return;
}
/* DedicatedServerExportPlugin::_get_export_mode_for_path(String const&) */void DedicatedServerExportPlugin::_GLOBAL__sub_I__get_export_mode_for_path(void) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
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
   String::parse_latin1((StrRange*)&ENV_SCRIPT_ENCRYPTION_KEY);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      __cxa_atexit(String::~String, &ENV_SCRIPT_ENCRYPTION_KEY, &__dso_handle);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Control flow encountered bad instruction data *//* DedicatedServerExportPlugin::~DedicatedServerExportPlugin() */void DedicatedServerExportPlugin::~DedicatedServerExportPlugin(DedicatedServerExportPlugin *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* EditorExportPlugin::~EditorExportPlugin() */void EditorExportPlugin::~EditorExportPlugin(EditorExportPlugin *this) {
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
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

