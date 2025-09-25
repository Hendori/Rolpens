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
/* PluginConfigAndroid::resolve_local_dependency_path(String, String) */PluginConfigAndroid * __thiscall
PluginConfigAndroid::resolve_local_dependency_path
          (PluginConfigAndroid *this,undefined8 param_2,long *param_3){
   long *plVar1;
   long lVar2;
   char cVar3;
   long lVar4;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   if (( *param_3 == 0 ) || ( *(uint*)( *param_3 + -8 ) < 2 )) goto LAB_001000b4;
   cVar3 = String::is_absolute_path();
   if (cVar3 == '\0') {
      String::path_join((String*)&local_28);
      lVar4 = *(long*)this;
      if (lVar4 == local_28) {
         LAB_0010014f:lVar2 = local_28;
         if (lVar4 != 0) {
            LOCK();
            plVar1 = (long*)( lVar4 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_28 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         goto LAB_001000b4;
      }

   }
 else {
      ProjectSettings::get_singleton();
      ProjectSettings::globalize_path((String*)&local_28);
      lVar4 = *(long*)this;
      if (lVar4 == local_28) goto LAB_0010014f;
   }

   if (lVar4 != 0) {
      LOCK();
      plVar1 = (long*)( lVar4 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar4 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   *(long*)this = local_28;
   LAB_001000b4:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* PluginConfigAndroid::get_prebuilt_plugins(String) */long PluginConfigAndroid::get_prebuilt_plugins(long param_1) {
   *(undefined8*)( param_1 + 8 ) = 0;
   return param_1;
}
/* PluginConfigAndroid::is_plugin_config_valid(PluginConfigAndroid) */uint PluginConfigAndroid::is_plugin_config_valid(long param_1) {
   String *this;
   bool bVar1;
   char cVar2;
   int iVar3;
   uint uVar4;
   long lVar5;
   uint uVar6;
   long lVar7;
   if (*(long*)( param_1 + 0x10 ) == 0) {
      bVar1 = false;
   }
 else {
      bVar1 = 1 < *(uint*)( *(long*)( param_1 + 0x10 ) + -8 );
   }

   this(String * )(param_1 + 0x18);
   cVar2 = String::operator ==(this, BINARY_TYPE_LOCAL);
   if (( cVar2 == '\0' ) && ( uVar4 = String::operator ==(this, BINARY_TYPE_REMOTE) ),(char)uVar4 == '\0') {
      lVar5 = *(long*)( param_1 + 0x30 );
      joined_r0x0010026f:bVar1 = false;
      if (lVar5 == 0) {
         return 0;
      }

   }
 else {
      if (( *(long*)( param_1 + 0x20 ) == 0 ) || ( ( iVar3 = (int)*(undefined8*)( *(long*)( param_1 + 0x20 ) + -8 ) ),iVar3 == 0 || ( iVar3 == 1 ) )) {
         lVar5 = *(long*)( param_1 + 0x30 );
         uVar4 = 1;
         goto joined_r0x0010026f;
      }

      cVar2 = String::operator ==(this, BINARY_TYPE_REMOTE);
      if (( cVar2 == '\0' ) && ( cVar2 = FileAccess::exists((String*)( param_1 + 0x20 )) ),cVar2 == '\0') {
         lVar5 = *(long*)( param_1 + 0x30 );
         uVar4 = 1;
         goto joined_r0x0010026f;
      }

      lVar5 = *(long*)( param_1 + 0x30 );
      uVar6 = 1;
      uVar4 = 1;
      if (lVar5 == 0) {
         LAB_001002e0:uVar4 = 1;
         goto LAB_0010024c;
      }

   }

   uVar6 = uVar4;
   lVar7 = 0;
   do {
      if (*(long*)( lVar5 + -8 ) <= lVar7) goto LAB_001002e0;
      uVar4 = FileAccess::exists((String*)( lVar5 + lVar7 * 8 ));
      if ((char)uVar4 == '\0') break;
      lVar5 = *(long*)( param_1 + 0x30 );
      lVar7 = lVar7 + 1;
   }
 while ( lVar5 != 0 );
   LAB_0010024c:if (!bVar1) {
      return 0;
   }

   return uVar4 & uVar6;
}
/* PluginConfigAndroid::get_plugin_modification_time(PluginConfigAndroid const&, String const&) */ulong PluginConfigAndroid::get_plugin_modification_time(PluginConfigAndroid *param_1, String *param_2) {
   long *plVar1;
   long *plVar2;
   ulong uVar3;
   ulong uVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = FileAccess::get_modified_time(param_2);
   uVar4 = FileAccess::get_modified_time(param_1 + 0x20);
   if (uVar3 <= uVar4) {
      uVar3 = uVar4;
   }

   lVar5 = *(long*)( param_1 + 0x30 );
   if (lVar5 != 0) {
      lVar7 = 0;
      do {
         if (*(long*)( lVar5 + -8 ) <= lVar7) break;
         plVar2 = (long*)( lVar5 + lVar7 * 8 );
         local_38 = 0;
         lVar5 = *plVar2;
         plVar1 = (long*)( lVar5 + -0x10 );
         if (lVar5 != 0) {
            do {
               lVar5 = *plVar1;
               if (lVar5 == 0) goto LAB_00100392;
               LOCK();
               lVar6 = *plVar1;
               bVar8 = lVar5 == lVar6;
               if (bVar8) {
                  *plVar1 = lVar5 + 1;
                  lVar6 = lVar5;
               }

               UNLOCK();
            }
 while ( !bVar8 );
            if (lVar6 != -1) {
               local_38 = *plVar2;
            }

         }

         LAB_00100392:uVar4 = FileAccess::get_modified_time((String*)&local_38);
         lVar5 = local_38;
         if (uVar3 < uVar4) {
            uVar3 = uVar4;
         }

         if (local_38 != 0) {
            LOCK();
            plVar1 = (long*)( local_38 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_38 = 0;
               Memory::free_static((void*)( lVar5 + -0x10 ), false);
            }

         }

         lVar5 = *(long*)( param_1 + 0x30 );
         lVar7 = lVar7 + 1;
      }
 while ( lVar5 != 0 );
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
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
/* PluginConfigAndroid::get_plugins_custom_maven_repos(Vector<PluginConfigAndroid>, Vector<String>&)
    */void PluginConfigAndroid::get_plugins_custom_maven_repos(long param_1, Vector<String> *param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   char *pcVar5;
   long in_FS_OFFSET;
   undefined8 local_a0;
   char local_98;
   undefined8 local_90;
   long local_88;
   long local_80;
   long local_78[2];
   undefined8 local_68[2];
   undefined8 local_58[2];
   long local_48;
   long local_40;
   lVar4 = 0;
   lVar2 = *(long*)( param_1 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar3 = 0; ( lVar2 != 0 && ( lVar3 < *(long*)( lVar2 + -8 ) ) ); lVar3 = lVar3 + 1) {
      local_88 = 0;
      pcVar5 = (char*)( lVar2 + lVar4 );
      local_98 = *pcVar5;
      local_90 = *(undefined8*)( pcVar5 + 8 );
      if (*(long*)( pcVar5 + 0x10 ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, (CowData*)( pcVar5 + 0x10 ));
      }

      local_80 = 0;
      if (*(long*)( pcVar5 + 0x18 ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)( pcVar5 + 0x18 ));
      }

      local_78[0] = 0;
      if (*(long*)( pcVar5 + 0x20 ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)local_78, (CowData*)( pcVar5 + 0x20 ));
      }

      local_68[0] = 0;
      if (*(long*)( pcVar5 + 0x30 ) != 0) {
         CowData<String>::_ref((CowData<String>*)local_68, (CowData*)( pcVar5 + 0x30 ));
      }

      local_58[0] = 0;
      if (*(long*)( pcVar5 + 0x40 ) != 0) {
         CowData<String>::_ref((CowData<String>*)local_58, (CowData*)( pcVar5 + 0x40 ));
      }

      local_48 = 0;
      if (*(long*)( pcVar5 + 0x50 ) != 0) {
         CowData<String>::_ref((CowData<String>*)&local_48, (CowData*)( pcVar5 + 0x50 ));
      }

      if (local_98 != '\0') {
         local_a0 = 0;
         if (local_48 != 0) {
            CowData<String>::_ref((CowData<String>*)&local_a0, (CowData*)&local_48);
         }

         Vector<String>::append_array(param_2);
         CowData<String>::_unref((CowData<String>*)&local_a0);
      }

      CowData<String>::_unref((CowData<String>*)&local_48);
      CowData<String>::_unref((CowData<String>*)local_58);
      CowData<String>::_unref((CowData<String>*)local_68);
      if (local_78[0] != 0) {
         LOCK();
         plVar1 = (long*)( local_78[0] + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_78[0] + -0x10 ), false);
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

      if (local_88 != 0) {
         LOCK();
         plVar1 = (long*)( local_88 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_88 + -0x10 ), false);
         }

      }

      lVar4 = lVar4 + 0x58;
      lVar2 = *(long*)( param_1 + 8 );
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

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
/* PluginConfigAndroid::get_plugins_binaries(String, Vector<PluginConfigAndroid>, Vector<String>&)
    */void PluginConfigAndroid::get_plugins_binaries(String *param_1, long param_2, Vector<String> *param_3) {
   long *plVar1;
   char *pcVar2;
   long lVar3;
   char cVar4;
   long lVar5;
   long lVar6;
   long in_FS_OFFSET;
   bool bVar7;
   long local_a8;
   undefined8 local_a0;
   char local_98;
   undefined8 local_90;
   long local_88;
   long local_80;
   long local_78[2];
   long local_68[2];
   long local_58[2];
   undefined8 local_48;
   long local_40;
   lVar6 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = *(long*)( param_2 + 8 );
   do {
      if (( lVar3 == 0 ) || ( *(long*)( lVar3 + -8 ) <= lVar6 )) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      pcVar2 = (char*)( lVar3 + lVar6 * 0x58 );
      local_98 = *pcVar2;
      local_90 = *(undefined8*)( pcVar2 + 8 );
      local_88 = 0;
      if (*(long*)( pcVar2 + 0x10 ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, (CowData*)( pcVar2 + 0x10 ));
      }

      local_80 = 0;
      if (*(long*)( pcVar2 + 0x18 ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)( pcVar2 + 0x18 ));
      }

      local_78[0] = 0;
      if (*(long*)( pcVar2 + 0x20 ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)local_78, (CowData*)( pcVar2 + 0x20 ));
      }

      local_68[0] = 0;
      if (*(long*)( pcVar2 + 0x30 ) != 0) {
         CowData<String>::_ref((CowData<String>*)local_68, (CowData*)( pcVar2 + 0x30 ));
      }

      local_58[0] = 0;
      if (*(long*)( pcVar2 + 0x40 ) != 0) {
         CowData<String>::_ref((CowData<String>*)local_58, (CowData*)( pcVar2 + 0x40 ));
      }

      local_48 = 0;
      if (*(long*)( pcVar2 + 0x50 ) != 0) {
         CowData<String>::_ref((CowData<String>*)&local_48, (CowData*)( pcVar2 + 0x50 ));
      }

      if (local_98 != '\0') {
         cVar4 = String::operator ==((String*)&local_80, param_1);
         if (cVar4 != '\0') {
            local_a8 = 0;
            plVar1 = (long*)( local_78[0] + -0x10 );
            if (local_78[0] == 0) {
               Vector<String>::push_back(param_3, &local_a8);
            }
 else {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_00100943;
                  LOCK();
                  lVar5 = *plVar1;
                  bVar7 = lVar3 == lVar5;
                  if (bVar7) {
                     *plVar1 = lVar3 + 1;
                     lVar5 = lVar3;
                  }

                  UNLOCK();
               }
 while ( !bVar7 );
               if (lVar5 != -1) {
                  local_a8 = local_78[0];
               }

               LAB_00100943:lVar3 = local_a8;
               Vector<String>::push_back(param_3);
               if (lVar3 != 0) {
                  LOCK();
                  plVar1 = (long*)( lVar3 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     Memory::free_static((void*)( local_a8 + -0x10 ), false);
                  }

               }

            }

         }

         cVar4 = String::operator ==(param_1, BINARY_TYPE_LOCAL);
         if (cVar4 != '\0') {
            local_a0 = 0;
            if (local_68[0] != 0) {
               CowData<String>::_ref((CowData<String>*)&local_a0, (CowData*)local_68);
            }

            Vector<String>::append_array(param_3, &local_a8);
            CowData<String>::_unref((CowData<String>*)&local_a0);
         }

         cVar4 = String::operator ==(param_1, BINARY_TYPE_REMOTE);
         if (cVar4 != '\0') {
            local_a0 = 0;
            if (local_58[0] != 0) {
               CowData<String>::_ref((CowData<String>*)&local_a0, (CowData*)local_58);
            }

            Vector<String>::append_array(param_3);
            CowData<String>::_unref((CowData<String>*)&local_a0);
         }

      }

      CowData<String>::_unref((CowData<String>*)&local_48);
      CowData<String>::_unref((CowData<String>*)local_58);
      CowData<String>::_unref((CowData<String>*)local_68);
      lVar3 = local_78[0];
      if (local_78[0] != 0) {
         LOCK();
         plVar1 = (long*)( local_78[0] + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_78[0] = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      lVar3 = local_80;
      if (local_80 != 0) {
         LOCK();
         plVar1 = (long*)( local_80 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_80 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      lVar3 = local_88;
      if (local_88 != 0) {
         LOCK();
         plVar1 = (long*)( local_88 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_88 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      lVar6 = lVar6 + 1;
      lVar3 = *(long*)( param_2 + 8 );
   }
 while ( true );
}
/* PluginConfigAndroid::get_plugins_names(Vector<PluginConfigAndroid>, Vector<String>&) */void PluginConfigAndroid::get_plugins_names(long param_1, Vector<String> *param_2) {
   long *plVar1;
   char *pcVar2;
   char cVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_a0;
   long local_88;
   long local_80;
   long local_78[2];
   undefined8 local_68[2];
   undefined8 local_58[2];
   undefined8 local_48;
   long local_40;
   lVar7 = 0;
   lVar6 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar4 = *(long*)( param_1 + 8 );
   do {
      if (( lVar4 == 0 ) || ( *(long*)( lVar4 + -8 ) <= lVar6 )) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      local_88 = 0;
      pcVar2 = (char*)( lVar4 + lVar7 );
      cVar3 = *pcVar2;
      if (*(long*)( pcVar2 + 0x10 ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, (CowData*)( pcVar2 + 0x10 ));
      }

      local_80 = 0;
      if (*(long*)( pcVar2 + 0x18 ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)( pcVar2 + 0x18 ));
      }

      local_78[0] = 0;
      if (*(long*)( pcVar2 + 0x20 ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)local_78, (CowData*)( pcVar2 + 0x20 ));
      }

      local_68[0] = 0;
      if (*(long*)( pcVar2 + 0x30 ) != 0) {
         CowData<String>::_ref((CowData<String>*)local_68, (CowData*)( pcVar2 + 0x30 ));
      }

      local_58[0] = 0;
      if (*(long*)( pcVar2 + 0x40 ) != 0) {
         CowData<String>::_ref((CowData<String>*)local_58, (CowData*)( pcVar2 + 0x40 ));
      }

      local_48 = 0;
      if (*(long*)( pcVar2 + 0x50 ) != 0) {
         CowData<String>::_ref((CowData<String>*)&local_48, (CowData*)( pcVar2 + 0x50 ));
      }

      if (cVar3 != '\0') {
         local_a0 = 0;
         plVar1 = (long*)( local_88 + -0x10 );
         if (local_88 == 0) {
            Vector<String>::push_back(param_2);
         }
 else {
            do {
               lVar4 = *plVar1;
               if (lVar4 == 0) goto LAB_00100cab;
               LOCK();
               lVar5 = *plVar1;
               bVar8 = lVar4 == lVar5;
               if (bVar8) {
                  *plVar1 = lVar4 + 1;
                  lVar5 = lVar4;
               }

               UNLOCK();
            }
 while ( !bVar8 );
            if (lVar5 != -1) {
               local_a0 = local_88;
            }

            LAB_00100cab:Vector<String>::push_back(param_2);
            if (local_a0 != 0) {
               LOCK();
               plVar1 = (long*)( local_a0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  Memory::free_static((void*)( local_a0 + -0x10 ), false);
               }

            }

         }

      }

      CowData<String>::_unref((CowData<String>*)&local_48);
      CowData<String>::_unref((CowData<String>*)local_58);
      CowData<String>::_unref((CowData<String>*)local_68);
      if (local_78[0] != 0) {
         LOCK();
         plVar1 = (long*)( local_78[0] + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_78[0] + -0x10 ), false);
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

      if (local_88 != 0) {
         LOCK();
         plVar1 = (long*)( local_88 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_88 + -0x10 ), false);
         }

      }

      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x58;
      lVar4 = *(long*)( param_1 + 8 );
   }
 while ( true );
}
/* PluginConfigAndroid::load_plugin_config(Ref<ConfigFile>, String const&) */PluginConfigAndroid * __thiscall
PluginConfigAndroid::load_plugin_config
          (PluginConfigAndroid *this,undefined8 *param_2,String *param_3){
   long *plVar1;
   long *plVar2;
   String *pSVar3;
   undefined *puVar4;
   char cVar5;
   PluginConfigAndroid PVar6;
   int iVar7;
   size_t sVar8;
   long lVar9;
   undefined8 uVar10;
   long lVar11;
   long lVar12;
   undefined *puVar13;
   PluginConfigAndroid *pPVar14;
   long in_FS_OFFSET;
   bool bVar15;
   long local_118;
   undefined *local_110;
   long local_108;
   long local_100;
   long local_f8;
   long local_f0;
   undefined *local_e8;
   undefined8 local_e0;
   undefined *local_d8;
   size_t local_d0;
   long local_c8;
   long local_c0;
   long local_b8[2];
   undefined8 local_a8[2];
   undefined8 local_98[2];
   undefined8 local_88[2];
   int local_78[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pPVar14 = this;
   for (lVar12 = 0xb; lVar12 != 0; lVar12 = lVar12 + -1) {
      *(undefined8*)pPVar14 = 0;
      pPVar14 = pPVar14 + 8;
   }

   if (( (String*)*param_2 == (String*)0x0 ) || ( iVar7 = iVar7 != 0 )) goto LAB_00100f2d;
   String::get_base_dir();
   pSVar3 = (String*)*param_2;
   local_100 = 0;
   Variant::Variant((Variant*)local_78, (String*)&local_100);
   local_d8 = CONFIG_NAME_KEY;
   local_d0 = 0;
   local_e8 = (undefined*)0x0;
   if (CONFIG_NAME_KEY != (undefined*)0x0) {
      local_d0 = strlen(CONFIG_NAME_KEY);
   }

   String::parse_latin1((StrRange*)&local_e8);
   puVar13 = CONFIG_SECTION;
   sVar8 = 0;
   local_f8 = 0;
   if (CONFIG_SECTION != (undefined*)0x0) {
      sVar8 = strlen(CONFIG_SECTION);
   }

   local_d8 = puVar13;
   local_d0 = sVar8;
   String::parse_latin1((StrRange*)&local_f8);
   ConfigFile::get_value((String*)local_58, pSVar3, (Variant*)&local_f8);
   Variant::operator_cast_to_String((Variant*)&local_d8);
   puVar4 = local_d8;
   puVar13 = *(undefined**)( this + 0x10 );
   if (puVar13 == local_d8) {
      if (puVar13 != (undefined*)0x0) {
         LOCK();
         plVar1 = (long*)( puVar13 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_d8 = (undefined*)0x0;
            Memory::free_static(puVar4 + -0x10, false);
         }

      }

   }
 else {
      if (puVar13 != (undefined*)0x0) {
         LOCK();
         plVar1 = (long*)( puVar13 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar12 = *(long*)( this + 0x10 );
            *(undefined8*)( this + 0x10 ) = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }

      }

      *(undefined**)( this + 0x10 ) = local_d8;
   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   lVar12 = local_f8;
   if (local_f8 != 0) {
      LOCK();
      plVar1 = (long*)( local_f8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_f8 = 0;
         Memory::free_static((void*)( lVar12 + -0x10 ), false);
      }

   }

   puVar13 = local_e8;
   if (local_e8 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_e8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_e8 = (undefined*)0x0;
         Memory::free_static((void*)( (long)puVar13 + -0x10 ), false);
      }

   }

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   lVar12 = local_100;
   if (local_100 != 0) {
      LOCK();
      plVar1 = (long*)( local_100 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_100 = 0;
         Memory::free_static((void*)( lVar12 + -0x10 ), false);
      }

   }

   local_100 = 0;
   pSVar3 = (String*)*param_2;
   Variant::Variant((Variant*)local_78, (String*)&local_100);
   puVar13 = CONFIG_BINARY_TYPE_KEY;
   sVar8 = 0;
   local_e8 = (undefined*)0x0;
   if (CONFIG_BINARY_TYPE_KEY != (undefined*)0x0) {
      sVar8 = strlen(CONFIG_BINARY_TYPE_KEY);
   }

   local_d8 = puVar13;
   local_d0 = sVar8;
   String::parse_latin1((StrRange*)&local_e8);
   puVar13 = CONFIG_SECTION;
   sVar8 = 0;
   local_f8 = 0;
   if (CONFIG_SECTION != (undefined*)0x0) {
      sVar8 = strlen(CONFIG_SECTION);
   }

   local_d8 = puVar13;
   local_d0 = sVar8;
   String::parse_latin1((StrRange*)&local_f8);
   ConfigFile::get_value((String*)local_58, pSVar3, (Variant*)&local_f8);
   Variant::operator_cast_to_String((Variant*)&local_d8);
   puVar4 = local_d8;
   puVar13 = *(undefined**)( this + 0x18 );
   if (puVar13 == local_d8) {
      if (puVar13 != (undefined*)0x0) {
         LOCK();
         plVar1 = (long*)( puVar13 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_d8 = (undefined*)0x0;
            Memory::free_static(puVar4 + -0x10, false);
         }

      }

   }
 else {
      if (puVar13 != (undefined*)0x0) {
         LOCK();
         plVar1 = (long*)( puVar13 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar12 = *(long*)( this + 0x18 );
            *(undefined8*)( this + 0x18 ) = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }

      }

      *(undefined**)( this + 0x18 ) = local_d8;
   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   lVar12 = local_f8;
   if (local_f8 != 0) {
      LOCK();
      plVar1 = (long*)( local_f8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_f8 = 0;
         Memory::free_static((void*)( lVar12 + -0x10 ), false);
      }

   }

   puVar13 = local_e8;
   if (local_e8 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_e8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_e8 = (undefined*)0x0;
         Memory::free_static((void*)( (long)puVar13 + -0x10 ), false);
      }

   }

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   lVar12 = local_100;
   if (local_100 != 0) {
      LOCK();
      plVar1 = (long*)( local_100 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_100 = 0;
         Memory::free_static((void*)( lVar12 + -0x10 ), false);
      }

   }

   local_100 = 0;
   pSVar3 = (String*)*param_2;
   Variant::Variant((Variant*)local_78, (String*)&local_100);
   puVar13 = CONFIG_BINARY_KEY;
   sVar8 = 0;
   local_e8 = (undefined*)0x0;
   if (CONFIG_BINARY_KEY != (undefined*)0x0) {
      sVar8 = strlen(CONFIG_BINARY_KEY);
   }

   local_d8 = puVar13;
   local_d0 = sVar8;
   String::parse_latin1((StrRange*)&local_e8);
   puVar13 = CONFIG_SECTION;
   sVar8 = 0;
   local_f8 = 0;
   if (CONFIG_SECTION != (undefined*)0x0) {
      sVar8 = strlen(CONFIG_SECTION);
   }

   local_d8 = puVar13;
   local_d0 = sVar8;
   String::parse_latin1((StrRange*)&local_f8);
   ConfigFile::get_value((String*)local_58, pSVar3, (Variant*)&local_f8);
   Variant::operator_cast_to_String((Variant*)&local_110);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   lVar12 = local_f8;
   if (local_f8 != 0) {
      LOCK();
      plVar1 = (long*)( local_f8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_f8 = 0;
         Memory::free_static((void*)( lVar12 + -0x10 ), false);
      }

   }

   puVar13 = local_e8;
   if (local_e8 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_e8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_e8 = (undefined*)0x0;
         Memory::free_static(puVar13 + -0x10, false);
      }

   }

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   lVar12 = local_100;
   if (local_100 != 0) {
      LOCK();
      plVar1 = (long*)( local_100 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_100 = 0;
         Memory::free_static((void*)( lVar12 + -0x10 ), false);
      }

   }

   cVar5 = String::operator ==((String*)( this + 0x18 ), BINARY_TYPE_LOCAL);
   if (cVar5 == '\0') {
      local_d8 = (undefined*)0x0;
      if (local_110 == (undefined*)0x0) {
         puVar13 = *(undefined**)( this + 0x20 );
         if (puVar13 == (undefined*)0x0) goto LAB_00101710;
         LAB_001016ee:LOCK();
         plVar1 = (long*)( puVar13 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         cVar5 = *plVar1 != 0;
         if (*plVar1 == 0) {
            LAB_00101570:lVar12 = *(long*)( this + 0x20 );
            *(undefined8*)( this + 0x20 ) = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
            *(undefined**)( this + 0x20 ) = local_d8;
            if (cVar5 != '\0') goto LAB_001015a0;
         }
 else {
            LAB_001016fe:*(undefined**)( this + 0x20 ) = local_d8;
         }

      }
 else {
         plVar1 = (long*)( local_110 + -0x10 );
         do {
            lVar12 = *plVar1;
            if (lVar12 == 0) {
               puVar13 = *(undefined**)( this + 0x20 );
               goto LAB_00101a28;
            }

            LOCK();
            lVar9 = *plVar1;
            bVar15 = lVar12 == lVar9;
            if (bVar15) {
               *plVar1 = lVar12 + 1;
               lVar9 = lVar12;
            }

            UNLOCK();
         }
 while ( !bVar15 );
         puVar13 = *(undefined**)( this + 0x20 );
         if (lVar9 == -1) {
            LAB_00101a28:if (puVar13 != (undefined*)0x0) goto LAB_001016e9;
         }
 else {
            local_d8 = local_110;
            if (local_110 != puVar13) {
               LAB_001016e9:if (puVar13 != (undefined*)0x0) goto LAB_001016ee;
               goto LAB_001016fe;
            }

            if (local_110 != (undefined*)0x0) {
               local_d8 = local_110;
               LOCK();
               plVar1 = (long*)( local_110 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  Memory::free_static(local_110 + -0x10, false);
               }

            }

         }

      }

   }
 else {
      local_e8 = (undefined*)0x0;
      plVar1 = (long*)( local_110 + -0x10 );
      if (local_110 != (undefined*)0x0) {
         do {
            lVar12 = *plVar1;
            if (lVar12 == 0) goto LAB_001014fc;
            LOCK();
            lVar9 = *plVar1;
            bVar15 = lVar12 == lVar9;
            if (bVar15) {
               *plVar1 = lVar12 + 1;
               lVar9 = lVar12;
            }

            UNLOCK();
         }
 while ( !bVar15 );
         if (lVar9 != -1) {
            local_e8 = local_110;
         }

      }

      LAB_001014fc:local_f8 = 0;
      plVar1 = (long*)( local_118 + -0x10 );
      if (local_118 != 0) {
         do {
            lVar12 = *plVar1;
            if (lVar12 == 0) goto LAB_00101536;
            LOCK();
            lVar9 = *plVar1;
            bVar15 = lVar12 == lVar9;
            if (bVar15) {
               *plVar1 = lVar12 + 1;
               lVar9 = lVar12;
            }

            UNLOCK();
         }
 while ( !bVar15 );
         if (lVar9 != -1) {
            local_f8 = local_118;
         }

      }

      LAB_00101536:resolve_local_dependency_path((PluginConfigAndroid*)&local_d8, (StrRange*)&local_f8, (StrRange*)&local_e8);
      puVar13 = *(undefined**)( this + 0x20 );
      if (puVar13 == local_d8) {
         if (puVar13 != (undefined*)0x0) {
            LOCK();
            plVar1 = (long*)( puVar13 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static(local_d8 + -0x10, false);
            }

         }

      }
 else if (puVar13 == (undefined*)0x0) {
         *(undefined**)( this + 0x20 ) = local_d8;
      }
 else {
         LOCK();
         plVar1 = (long*)( puVar13 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) goto LAB_00101570;
         *(undefined**)( this + 0x20 ) = local_d8;
      }

      LAB_001015a0:lVar12 = local_f8;
      if (local_f8 != 0) {
         LOCK();
         plVar1 = (long*)( local_f8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_f8 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }

      }

      puVar13 = local_e8;
      if (local_e8 != (undefined*)0x0) {
         LOCK();
         plVar1 = (long*)( local_e8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_e8 = (undefined*)0x0;
            Memory::free_static(puVar13 + -0x10, false);
         }

      }

   }

   LAB_00101710:puVar13 = DEPENDENCIES_SECTION;
   pSVar3 = (String*)*param_2;
   sVar8 = 0;
   local_e8 = (undefined*)0x0;
   if (DEPENDENCIES_SECTION != (undefined*)0x0) {
      sVar8 = strlen(DEPENDENCIES_SECTION);
   }

   local_d8 = puVar13;
   local_d0 = sVar8;
   String::parse_latin1((StrRange*)&local_e8);
   cVar5 = ConfigFile::has_section(pSVar3);
   puVar13 = local_e8;
   if (local_e8 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_e8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_e8 = (undefined*)0x0;
         Memory::free_static((void*)( (long)puVar13 + -0x10 ), false);
      }

   }

   if (cVar5 != '\0') {
      pSVar3 = (String*)*param_2;
      local_e0 = 0;
      Variant::Variant((Variant*)local_78, (Vector_conflict*)&local_e8);
      puVar13 = DEPENDENCIES_LOCAL_KEY;
      sVar8 = 0;
      local_100 = 0;
      if (DEPENDENCIES_LOCAL_KEY != (undefined*)0x0) {
         sVar8 = strlen(DEPENDENCIES_LOCAL_KEY);
      }

      local_d8 = puVar13;
      local_d0 = sVar8;
      String::parse_latin1((StrRange*)&local_100);
      puVar13 = DEPENDENCIES_SECTION;
      sVar8 = 0;
      local_108 = 0;
      if (DEPENDENCIES_SECTION != (undefined*)0x0) {
         sVar8 = strlen(DEPENDENCIES_SECTION);
      }

      local_d8 = puVar13;
      local_d0 = sVar8;
      String::parse_latin1((StrRange*)&local_108);
      ConfigFile::get_value((String*)local_58, pSVar3, (Variant*)&local_108);
      Variant::operator_cast_to_Vector((Variant*)&local_f8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      lVar12 = local_108;
      if (local_108 != 0) {
         LOCK();
         plVar1 = (long*)( local_108 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_108 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }

      }

      lVar12 = local_100;
      if (local_100 != 0) {
         LOCK();
         plVar1 = (long*)( local_100 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_100 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }

      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      CowData<String>::_unref((CowData<String>*)&local_e0);
      for (lVar12 = 0; ( local_f0 != 0 && ( lVar12 < *(long*)( local_f0 + -8 ) ) ); lVar12 = lVar12 + 1) {
         local_e8 = (undefined*)0x0;
         plVar2 = (long*)( local_f0 + lVar12 * 8 );
         lVar9 = *plVar2;
         plVar1 = (long*)( lVar9 + -0x10 );
         if (lVar9 != 0) {
            do {
               lVar9 = *plVar1;
               if (lVar9 == 0) goto LAB_00101c5a;
               LOCK();
               lVar11 = *plVar1;
               bVar15 = lVar9 == lVar11;
               if (bVar15) {
                  *plVar1 = lVar9 + 1;
                  lVar11 = lVar9;
               }

               UNLOCK();
            }
 while ( !bVar15 );
            if (lVar11 != -1) {
               local_e8 = (undefined*)*plVar2;
            }

         }

         LAB_00101c5a:local_100 = 0;
         plVar1 = (long*)( local_118 + -0x10 );
         if (local_118 != 0) {
            do {
               lVar9 = *plVar1;
               if (lVar9 == 0) goto LAB_00101c94;
               LOCK();
               lVar11 = *plVar1;
               bVar15 = lVar9 == lVar11;
               if (bVar15) {
                  *plVar1 = lVar9 + 1;
                  lVar11 = lVar9;
               }

               UNLOCK();
            }
 while ( !bVar15 );
            if (lVar11 != -1) {
               local_100 = local_118;
            }

         }

         LAB_00101c94:resolve_local_dependency_path((PluginConfigAndroid*)&local_d8, (String*)&local_100, (StrRange*)&local_e8);
         Vector<String>::push_back((Vector<String>*)( this + 0x28 ));
         if (local_d8 != (undefined*)0x0) {
            LOCK();
            plVar1 = (long*)( local_d8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static(local_d8 + -0x10, false);
            }

         }

         lVar9 = local_100;
         if (local_100 != 0) {
            LOCK();
            plVar1 = (long*)( local_100 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_100 = 0;
               Memory::free_static((void*)( lVar9 + -0x10 ), false);
            }

         }

         puVar13 = local_e8;
         if (local_e8 != (undefined*)0x0) {
            LOCK();
            plVar1 = (long*)( (long)local_e8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_e8 = (undefined*)0x0;
               Memory::free_static((void*)( (long)puVar13 + -0x10 ), false);
            }

         }

      }

      local_e0 = 0;
      pSVar3 = (String*)*param_2;
      Variant::Variant((Variant*)local_78, (Vector_conflict*)&local_e8);
      puVar13 = DEPENDENCIES_REMOTE_KEY;
      sVar8 = 0;
      local_100 = 0;
      if (DEPENDENCIES_REMOTE_KEY != (undefined*)0x0) {
         sVar8 = strlen(DEPENDENCIES_REMOTE_KEY);
      }

      local_d8 = puVar13;
      local_d0 = sVar8;
      String::parse_latin1((StrRange*)&local_100);
      puVar13 = DEPENDENCIES_SECTION;
      sVar8 = 0;
      local_108 = 0;
      if (DEPENDENCIES_SECTION != (undefined*)0x0) {
         sVar8 = strlen(DEPENDENCIES_SECTION);
      }

      local_d8 = puVar13;
      local_d0 = sVar8;
      String::parse_latin1((StrRange*)&local_108);
      ConfigFile::get_value((String*)local_58, pSVar3, (Variant*)&local_108);
      Variant::operator_cast_to_Vector((Variant*)&local_d8);
      if (*(size_t*)( this + 0x40 ) != local_d0) {
         CowData<String>::_unref((CowData<String>*)( this + 0x40 ));
         sVar8 = local_d0;
         local_d0 = 0;
         *(size_t*)( this + 0x40 ) = sVar8;
      }

      CowData<String>::_unref((CowData<String>*)&local_d0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      lVar12 = local_108;
      if (local_108 != 0) {
         LOCK();
         plVar1 = (long*)( local_108 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_108 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }

      }

      lVar12 = local_100;
      if (local_100 != 0) {
         LOCK();
         plVar1 = (long*)( local_100 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_100 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }

      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      CowData<String>::_unref((CowData<String>*)&local_e0);
      local_e0 = 0;
      pSVar3 = (String*)*param_2;
      Variant::Variant((Variant*)local_78, (Vector_conflict*)&local_e8);
      puVar13 = DEPENDENCIES_CUSTOM_MAVEN_REPOS_KEY;
      sVar8 = 0;
      local_100 = 0;
      if (DEPENDENCIES_CUSTOM_MAVEN_REPOS_KEY != (undefined*)0x0) {
         sVar8 = strlen(DEPENDENCIES_CUSTOM_MAVEN_REPOS_KEY);
      }

      local_d8 = puVar13;
      local_d0 = sVar8;
      String::parse_latin1((StrRange*)&local_100);
      puVar13 = DEPENDENCIES_SECTION;
      sVar8 = 0;
      local_108 = 0;
      if (DEPENDENCIES_SECTION != (undefined*)0x0) {
         sVar8 = strlen(DEPENDENCIES_SECTION);
      }

      local_d8 = puVar13;
      local_d0 = sVar8;
      String::parse_latin1((StrRange*)&local_108);
      ConfigFile::get_value((String*)local_58, pSVar3, (Variant*)&local_108);
      Variant::operator_cast_to_Vector((Variant*)&local_d8);
      if (*(size_t*)( this + 0x50 ) != local_d0) {
         CowData<String>::_unref((CowData<String>*)( this + 0x50 ));
         sVar8 = local_d0;
         local_d0 = 0;
         *(size_t*)( this + 0x50 ) = sVar8;
      }

      CowData<String>::_unref((CowData<String>*)&local_d0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      lVar12 = local_108;
      if (local_108 != 0) {
         LOCK();
         plVar1 = (long*)( local_108 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_108 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }

      }

      lVar12 = local_100;
      if (local_100 != 0) {
         LOCK();
         plVar1 = (long*)( local_100 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_100 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }

      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      CowData<String>::_unref((CowData<String>*)&local_e0);
      CowData<String>::_unref((CowData<String>*)&local_f0);
   }

   local_c8 = 0;
   local_d8 = (undefined*)CONCAT71(local_d8._1_7_, *this);
   local_d0 = *(size_t*)( this + 8 );
   if (*(long*)( this + 0x10 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)( this + 0x10 ));
   }

   local_c0 = 0;
   if (*(long*)( this + 0x18 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c0, (CowData*)( this + 0x18 ));
   }

   local_b8[0] = 0;
   if (*(long*)( this + 0x20 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)local_b8, (CowData*)( this + 0x20 ));
   }

   local_a8[0] = 0;
   if (*(long*)( this + 0x30 ) != 0) {
      CowData<String>::_ref((CowData<String>*)local_a8, (CowData*)( this + 0x30 ));
   }

   local_98[0] = 0;
   if (*(long*)( this + 0x40 ) != 0) {
      CowData<String>::_ref((CowData<String>*)local_98, (CowData*)( this + 0x40 ));
   }

   local_88[0] = 0;
   if (*(long*)( this + 0x50 ) != 0) {
      CowData<String>::_ref((CowData<String>*)local_88, (CowData*)( this + 0x50 ));
   }

   PVar6 = (PluginConfigAndroid)is_plugin_config_valid((Variant*)&local_d8);
   *this = PVar6;
   CowData<String>::_unref((CowData<String>*)local_88);
   CowData<String>::_unref((CowData<String>*)local_98);
   CowData<String>::_unref((CowData<String>*)local_a8);
   lVar12 = local_b8[0];
   if (local_b8[0] != 0) {
      LOCK();
      plVar1 = (long*)( local_b8[0] + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b8[0] = 0;
         Memory::free_static((void*)( lVar12 + -0x10 ), false);
      }

   }

   lVar12 = local_c0;
   if (local_c0 != 0) {
      LOCK();
      plVar1 = (long*)( local_c0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_c0 = 0;
         Memory::free_static((void*)( lVar12 + -0x10 ), false);
      }

   }

   lVar12 = local_c8;
   if (local_c8 != 0) {
      LOCK();
      plVar1 = (long*)( local_c8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_c8 = 0;
         Memory::free_static((void*)( lVar12 + -0x10 ), false);
      }

   }

   uVar10 = get_plugin_modification_time(this, param_3);
   puVar13 = local_110;
   *(undefined8*)( this + 8 ) = uVar10;
   if (local_110 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_110 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_110 = (undefined*)0x0;
         Memory::free_static(puVar13 + -0x10, false);
      }

   }

   if (local_118 != 0) {
      LOCK();
      plVar1 = (long*)( local_118 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_118 + -0x10 ), false);
      }

   }

   LAB_00100f2d:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* PluginConfigAndroid::resolve_prebuilt_plugin(PluginConfigAndroid, String) */PluginConfigAndroid * __thiscall
PluginConfigAndroid::resolve_prebuilt_plugin
          (PluginConfigAndroid *this,PluginConfigAndroid *param_2,long *param_3){
   long *plVar1;
   long *plVar2;
   undefined8 uVar3;
   char cVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_58;
   long local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *this = *param_2;
   uVar3 = *(undefined8*)( param_2 + 8 );
   *(undefined8*)( this + 0x10 ) = 0;
   lVar5 = *(long*)( param_2 + 0x10 );
   *(undefined8*)( this + 8 ) = uVar3;
   if (lVar5 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x10 ), (CowData*)( param_2 + 0x10 ));
   }

   *(undefined8*)( this + 0x18 ) = 0;
   if (*(long*)( param_2 + 0x18 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x18 ), (CowData*)( param_2 + 0x18 ));
   }

   *(undefined8*)( this + 0x20 ) = 0;
   if (*(long*)( param_2 + 0x20 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)( param_2 + 0x20 ));
   }

   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 16*i + 48 ) ) = 0;
      if (*(long*)( param_2 + ( 16*i + 48 ) ) != 0) {
         CowData<String>::_ref((CowData<String>*)( this + ( 16*i + 48 ) ), (CowData*)( param_2 + ( 16*i + 48 ) ));
      }

   }

   cVar4 = String::operator ==((String*)( this + 0x18 ), BINARY_TYPE_LOCAL);
   if (cVar4 == '\0') {
      local_48 = 0;
      if (*(long*)( param_2 + 0x20 ) == 0) {
         lVar5 = *(long*)( this + 0x20 );
         if (lVar5 != 0) goto LAB_001025f5;
      }
 else {
         plVar1 = (long*)( *(long*)( param_2 + 0x20 ) + -0x10 );
         do {
            lVar5 = *plVar1;
            if (lVar5 == 0) {
               lVar5 = *(long*)( this + 0x20 );
               goto LAB_00102650;
            }

            LOCK();
            lVar7 = *plVar1;
            bVar8 = lVar5 == lVar7;
            if (bVar8) {
               *plVar1 = lVar5 + 1;
               lVar7 = lVar5;
            }

            UNLOCK();
         }
 while ( !bVar8 );
         lVar5 = *(long*)( this + 0x20 );
         if (lVar7 == -1) {
            LAB_00102650:if (lVar5 == 0) goto LAB_0010265e;
         }
 else {
            local_48 = *(long*)( param_2 + 0x20 );
            if (lVar5 == local_48) {
               LAB_0010265e:if (local_48 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_48 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     Memory::free_static((void*)( local_48 + -0x10 ), false);
                  }

               }

               goto LAB_001023a0;
            }

         }

         if (lVar5 != 0) {
            LAB_001025f5:LOCK();
            plVar1 = (long*)( lVar5 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            cVar4 = *plVar1 != 0;
            if (*plVar1 == 0) goto LAB_00102377;
         }

         *(long*)( this + 0x20 ) = local_48;
      }

   }
 else {
      local_50 = 0;
      plVar1 = (long*)( *(long*)( param_2 + 0x20 ) + -0x10 );
      if (*(long*)( param_2 + 0x20 ) != 0) {
         do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_00102308;
            LOCK();
            lVar7 = *plVar1;
            bVar8 = lVar5 == lVar7;
            if (bVar8) {
               *plVar1 = lVar5 + 1;
               lVar7 = lVar5;
            }

            UNLOCK();
         }
 while ( !bVar8 );
         if (lVar7 != -1) {
            local_50 = *(long*)( param_2 + 0x20 );
         }

      }

      LAB_00102308:local_58 = 0;
      plVar1 = (long*)( *param_3 + -0x10 );
      if (*param_3 != 0) {
         do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_0010233e;
            LOCK();
            lVar7 = *plVar1;
            bVar8 = lVar5 == lVar7;
            if (bVar8) {
               *plVar1 = lVar5 + 1;
               lVar7 = lVar5;
            }

            UNLOCK();
         }
 while ( !bVar8 );
         if (lVar7 != -1) {
            local_58 = *param_3;
         }

      }

      LAB_0010233e:resolve_local_dependency_path((PluginConfigAndroid*)&local_48, &local_58, &local_50);
      lVar5 = *(long*)( this + 0x20 );
      if (lVar5 == local_48) {
         if (lVar5 != 0) {
            LOCK();
            plVar1 = (long*)( lVar5 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_48 + -0x10 ), false);
            }

         }

      }
 else if (lVar5 == 0) {
         *(long*)( this + 0x20 ) = local_48;
      }
 else {
         LOCK();
         plVar1 = (long*)( lVar5 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            LAB_00102377:lVar5 = *(long*)( this + 0x20 );
            *(undefined8*)( this + 0x20 ) = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
            *(long*)( this + 0x20 ) = local_48;
            if (cVar4 == '\0') goto LAB_001023a0;
         }
 else {
            *(long*)( this + 0x20 ) = local_48;
         }

      }

      lVar5 = local_58;
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

      lVar5 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

   }

   LAB_001023a0:lVar5 = *(long*)( param_2 + 0x30 );
   if (lVar5 != 0) {
      if (( *(long*)( this + 0x30 ) != 0 ) && ( *(long*)( *(long*)( this + 0x30 ) + -8 ) != 0 )) {
         CowData<String>::_unref((CowData<String>*)( this + 0x30 ));
         lVar5 = *(long*)( param_2 + 0x30 );
         if (lVar5 == 0) goto LAB_00102500;
      }

      lVar7 = 0;
      do {
         if (*(long*)( lVar5 + -8 ) <= lVar7) break;
         local_50 = 0;
         plVar2 = (long*)( lVar5 + lVar7 * 8 );
         lVar5 = *plVar2;
         plVar1 = (long*)( lVar5 + -0x10 );
         if (lVar5 != 0) {
            do {
               lVar5 = *plVar1;
               if (lVar5 == 0) goto LAB_00102424;
               LOCK();
               lVar6 = *plVar1;
               bVar8 = lVar5 == lVar6;
               if (bVar8) {
                  *plVar1 = lVar5 + 1;
                  lVar6 = lVar5;
               }

               UNLOCK();
            }
 while ( !bVar8 );
            if (lVar6 != -1) {
               local_50 = *plVar2;
            }

         }

         LAB_00102424:local_58 = 0;
         plVar1 = (long*)( *param_3 + -0x10 );
         if (*param_3 != 0) {
            do {
               lVar5 = *plVar1;
               if (lVar5 == 0) goto LAB_0010245a;
               LOCK();
               lVar6 = *plVar1;
               bVar8 = lVar5 == lVar6;
               if (bVar8) {
                  *plVar1 = lVar5 + 1;
                  lVar6 = lVar5;
               }

               UNLOCK();
            }
 while ( !bVar8 );
            if (lVar6 != -1) {
               local_58 = *param_3;
            }

         }

         LAB_0010245a:resolve_local_dependency_path((PluginConfigAndroid*)&local_48, &local_58, &local_50);
         Vector<String>::push_back((Vector<String>*)( this + 0x28 ));
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_48 + -0x10 ), false);
            }

         }

         lVar5 = local_58;
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

         lVar5 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar1 = (long*)( local_50 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar5 + -0x10 ), false);
            }

         }

         lVar5 = *(long*)( param_2 + 0x30 );
         lVar7 = lVar7 + 1;
      }
 while ( lVar5 != 0 );
   }

   LAB_00102500:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
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
      LAB_00102bd0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar10 == 0) goto LAB_00102bd0;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_00102aa9:if (lVar10 != lVar7) {
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
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_00102aa9;
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
      goto LAB_00102c26;
   }

   if (lVar10 == lVar7) {
      LAB_00102b4f:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_00102c26:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_00102b3a;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_00102b4f;
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
   LAB_00102b3a:puVar9[-1] = param_1;
   return 0;
}
/* Vector<String>::append_array(Vector<String>) */void Vector<String>::append_array(Vector<String> *this, long param_2) {
   CowData *pCVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   if (*(long*)( param_2 + 8 ) == 0) {
      return;
   }

   lVar2 = *(long*)( *(long*)( param_2 + 8 ) + -8 );
   if (lVar2 != 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar6 = 0;
         lVar5 = lVar2;
      }
 else {
         lVar6 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar5 = lVar2 + lVar6;
      }

      CowData<String>::resize<false>((CowData<String>*)( this + 8 ), lVar5);
      if (0 < lVar2) {
         lVar6 = lVar6 << 3;
         lVar5 = 0;
         do {
            lVar3 = *(long*)( param_2 + 8 );
            if (lVar3 == 0) {
               lVar7 = 0;
               LAB_00102d08:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar5, lVar7, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar4 = (code*)invalidInstructionException();
               ( *pcVar4 )();
            }

            lVar7 = *(long*)( lVar3 + -8 );
            if (lVar7 <= lVar5) goto LAB_00102d08;
            pCVar1 = (CowData*)( lVar3 + lVar5 * 8 );
            CowData<String>::_copy_on_write((CowData<String>*)( this + 8 ));
            if (*(long*)( *(long*)( this + 8 ) + lVar6 ) != *(long*)pCVar1) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( *(long*)( this + 8 ) + lVar6 ), pCVar1);
            }

            lVar5 = lVar5 + 1;
            lVar6 = lVar6 + 8;
         }
 while ( lVar5 != lVar2 );
      }

   }

   return;
}

