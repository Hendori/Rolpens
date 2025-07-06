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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* FreeDesktopPortalDesktop::try_parse_variant(DBusMessage*, int, void*) */undefined8 FreeDesktopPortalDesktop::try_parse_variant(DBusMessage *param_1, int param_2, void *param_3) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined1 auStack_108[72];
   undefined1 local_c0[72];
   undefined1 local_78[72];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   ( *_dbus_message_iter_init_dylibloader_wrapper_dbus )(param_1, auStack_108);
   iVar1 = ( *_dbus_message_iter_get_arg_type_dylibloader_wrapper_dbus )(auStack_108);
   if (iVar1 == 0x76) {
      ( *_dbus_message_iter_recurse_dylibloader_wrapper_dbus )(auStack_108, local_c0);
      iVar1 = ( *_dbus_message_iter_get_arg_type_dylibloader_wrapper_dbus )(local_c0);
      if (iVar1 == 0x76) {
         ( *_dbus_message_iter_recurse_dylibloader_wrapper_dbus )(local_c0, local_78);
         iVar1 = ( *_dbus_message_iter_get_arg_type_dylibloader_wrapper_dbus )(local_78);
         if (iVar1 == param_2) {
            ( *_dbus_message_iter_get_basic_dylibloader_wrapper_dbus )(local_78, param_3);
            uVar2 = 1;
            goto LAB_001000e5;
         }

      }

   }

   uVar2 = 0;
   LAB_001000e5:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* FreeDesktopPortalDesktop::append_dbus_string(DBusMessageIter*, String const&) */void FreeDesktopPortalDesktop::append_dbus_string(DBusMessageIter *param_1, String *param_2) {
   long *plVar1;
   long in_FS_OFFSET;
   long local_20;
   undefined1 local_18[8];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   String::utf8();
   if (local_20 == 0) {
      ( *_dbus_message_iter_append_basic_dylibloader_wrapper_dbus )(param_1, 0x73, &cs_empty);
   }
 else {
      ( *_dbus_message_iter_append_basic_dylibloader_wrapper_dbus )(param_1, 0x73, local_18);
      LOCK();
      plVar1 = (long*)( local_20 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_20 + -0x10 ), false);
      }

   }

   if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* FreeDesktopPortalDesktop::append_dbus_dict_string(DBusMessageIter*, String const&, String const&,
   bool) */void FreeDesktopPortalDesktop::append_dbus_dict_string(DBusMessageIter *param_1, String *param_2, String *param_3, bool param_4) {
   long *plVar1;
   char cVar2;
   char *pcVar3;
   long in_FS_OFFSET;
   long local_130;
   DBusMessageIter local_128[80];
   DBusMessageIter local_d8[80];
   undefined1 local_88[72];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ( *_dbus_message_iter_open_container_dylibloader_wrapper_dbus )(param_1, 0x65, 0, local_128);
   append_dbus_string(local_128, param_2);
   if (param_4) {
      ( *_dbus_message_iter_open_container_dylibloader_wrapper_dbus )(local_128, 0x76, &_LC10);
      ( *_dbus_message_iter_open_container_dylibloader_wrapper_dbus )(local_d8, 0x61, &_LC11, local_88);
      String::utf8();
      pcVar3 = (char*)CharString::get_data();
      do {
         ( *_dbus_message_iter_append_basic_dylibloader_wrapper_dbus )(local_88, 0x79, pcVar3);
         cVar2 = *pcVar3;
         pcVar3 = pcVar3 + 1;
      }
 while ( cVar2 != '\0' );
      ( *_dbus_message_iter_close_container_dylibloader_wrapper_dbus )(local_d8);
      if (local_130 != 0) {
         LOCK();
         plVar1 = (long*)( local_130 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_130 + -0x10 ), false);
         }

      }

   }
 else {
      ( *_dbus_message_iter_open_container_dylibloader_wrapper_dbus )(local_128, 0x76, &_LC12, local_d8);
      append_dbus_string(local_d8, param_3);
   }

   ( *_dbus_message_iter_close_container_dylibloader_wrapper_dbus )(local_128, local_d8);
   ( *_dbus_message_iter_close_container_dylibloader_wrapper_dbus )(param_1, local_128);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* FreeDesktopPortalDesktop::append_dbus_dict_bool(DBusMessageIter*, String const&, bool) */void FreeDesktopPortalDesktop::append_dbus_dict_bool(DBusMessageIter *param_1, String *param_2, bool param_3) {
   long in_FS_OFFSET;
   uint local_cc;
   DBusMessageIter local_c8[80];
   undefined1 local_78[72];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   ( *_dbus_message_iter_open_container_dylibloader_wrapper_dbus )(param_1, 0x65, 0, local_c8);
   append_dbus_string(local_c8, param_2);
   ( *_dbus_message_iter_open_container_dylibloader_wrapper_dbus )(local_c8, 0x76, &_LC13, local_78);
   local_cc = (uint)param_3;
   ( *_dbus_message_iter_append_basic_dylibloader_wrapper_dbus )(local_78, 0x62, &local_cc);
   ( *_dbus_message_iter_close_container_dylibloader_wrapper_dbus )(local_c8, local_78);
   ( *_dbus_message_iter_close_container_dylibloader_wrapper_dbus )(param_1, local_c8);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* FreeDesktopPortalDesktop::read_setting(char const*, char const*, int, void*) */undefined4 FreeDesktopPortalDesktop::read_setting(FreeDesktopPortalDesktop *this, char *param_1, char *param_2, int param_3, void *param_4) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   char cVar4;
   int iVar5;
   undefined4 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   DBusMessage *pDVar9;
   long in_FS_OFFSET;
   char *local_98;
   char *local_90[2];
   long local_80;
   char *local_78;
   undefined8 local_70;
   undefined1 local_68[40];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = param_2;
   local_90[0] = param_1;
   if (this[0x171] == (FreeDesktopPortalDesktop)0x0) {
      ( *_dbus_error_init_dylibloader_wrapper_dbus )(local_68);
      uVar7 = ( *_dbus_bus_get_dylibloader_wrapper_dbus )(0, local_68);
      iVar5 = ( *_dbus_error_is_set_dylibloader_wrapper_dbus )(local_68);
      if (iVar5 != 0) {
         OS::get_singleton();
         cVar4 = OS::is_stdout_verbose();
         if (cVar4 != '\0') {
            local_80 = 0;
            local_70 = 0x22;
            local_78 = "Error opening D-Bus connection: %s";
            String::parse_latin1((StrRange*)&local_80);
            vformat<char_const*>((String*)&local_78, (char*)&local_80);
            _err_print_error("read_setting", "platform/linuxbsd/freedesktop_portal_desktop.cpp", 0x59, (String*)&local_78, 0, 0);
            pcVar3 = local_78;
            if (local_78 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_78 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_78 = (char*)0x0;
                  Memory::free_static(pcVar3 + -0x10, false);
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

         }

         ( *_dbus_error_free_dylibloader_wrapper_dbus )(local_68);
         this[0x171] = (FreeDesktopPortalDesktop)0x1;
         uVar6 = 0;
         goto LAB_00100562;
      }

      uVar8 = ( *_dbus_message_new_method_call_dylibloader_wrapper_dbus )("org.freedesktop.portal.Desktop", "/org/freedesktop/portal/desktop", "org.freedesktop.portal.Settings", &_LC23);
      ( *_dbus_message_append_args_dylibloader_wrapper_dbus )(uVar8, 0x73, local_90, 0x73, &local_98, 0);
      pDVar9 = (DBusMessage*)( *_dbus_connection_send_with_reply_and_block_dylibloader_wrapper_dbus )(uVar7, uVar8, 0x32, local_68);
      ( *_dbus_message_unref_dylibloader_wrapper_dbus )(uVar8);
      iVar5 = ( *_dbus_error_is_set_dylibloader_wrapper_dbus )(local_68);
      if (iVar5 == 0) {
         uVar6 = try_parse_variant(pDVar9, param_3, param_4);
         ( *_dbus_message_unref_dylibloader_wrapper_dbus )(pDVar9);
         ( *_dbus_connection_unref_dylibloader_wrapper_dbus )(uVar7);
         goto LAB_00100562;
      }

      OS::get_singleton();
      cVar4 = OS::is_stdout_verbose();
      if (cVar4 != '\0') {
         local_80 = 0;
         local_70 = 0x20;
         local_78 = "Error on D-Bus communication: %s";
         String::parse_latin1((StrRange*)&local_80);
         vformat<char_const*>((String*)&local_78, (char*)&local_80);
         _err_print_error("read_setting", "platform/linuxbsd/freedesktop_portal_desktop.cpp", 0x6d, (String*)&local_78, 0, 0);
         pcVar3 = local_78;
         if (local_78 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_78 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_78 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
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

      }

      ( *_dbus_error_free_dylibloader_wrapper_dbus )(local_68);
      ( *_dbus_connection_unref_dylibloader_wrapper_dbus )(uVar7);
   }

   uVar6 = 0;
   LAB_00100562:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* FreeDesktopPortalDesktop::get_appearance_color_scheme() */undefined4 FreeDesktopPortalDesktop::get_appearance_color_scheme(FreeDesktopPortalDesktop *this) {
   undefined4 uVar1;
   long in_FS_OFFSET;
   undefined4 local_14;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = 0;
   if (this[0x171] == (FreeDesktopPortalDesktop)0x0) {
      local_14 = 0;
      read_setting(this, "org.freedesktop.appearance", "color-scheme", 0x75, &local_14);
      uVar1 = local_14;
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* FreeDesktopPortalDesktop::append_dbus_dict_filters(DBusMessageIter*, Vector<String> const&,
   Vector<String> const&, Vector<String> const&) */void FreeDesktopPortalDesktop::append_dbus_dict_filters(DBusMessageIter *param_1, Vector *param_2, Vector *param_3, Vector *param_4) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   code *pcVar4;
   ulong uVar5;
   char *pcVar6;
   int iVar7;
   int iVar8;
   wchar32 wVar9;
   long lVar10;
   wchar32 *pwVar11;
   int iVar12;
   wchar32 wVar13;
   long lVar14;
   long lVar15;
   long lVar16;
   long in_FS_OFFSET;
   char *local_238;
   long local_230;
   long local_228;
   ulong local_220;
   undefined1 local_218[80];
   undefined1 local_1c8[80];
   undefined1 local_178[80];
   DBusMessageIter local_128[80];
   undefined1 local_d8[80];
   char *local_88;
   undefined8 local_80;
   long local_40;
   lVar10 = *(long*)( param_3 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_238 = "filters";
   if (*(long*)( param_2 + 8 ) == 0) {
      lVar16 = 0;
      if (lVar10 != 0) goto LAB_00100860;
      lVar10 = *(long*)( param_4 + 8 );
      if (lVar10 != 0) {
         lVar16 = 0;
         goto LAB_0010087f;
      }

   }
 else {
      lVar16 = *(long*)( *(long*)( param_2 + 8 ) + -8 );
      if (lVar10 == 0) {
         lVar10 = 0;
      }
 else {
         LAB_00100860:lVar10 = *(long*)( lVar10 + -8 );
      }

      if (lVar10 != lVar16) {
         _err_print_error("append_dbus_dict_filters", "platform/linuxbsd/freedesktop_portal_desktop.cpp", 0xca, "Condition \"p_filter_names.size() != p_filter_exts.size()\" is true.", 0, 0);
         goto LAB_00100fa3;
      }

      lVar10 = *(long*)( param_4 + 8 );
      if (lVar10 == 0) {
         lVar10 = 0;
      }
 else {
         LAB_0010087f:lVar10 = *(long*)( lVar10 + -8 );
      }

      if (lVar16 != lVar10) {
         _err_print_error("append_dbus_dict_filters", "platform/linuxbsd/freedesktop_portal_desktop.cpp", 0xcb, "Condition \"p_filter_names.size() != p_filter_mimes.size()\" is true.", 0, 0);
         goto LAB_00100fa3;
      }

   }

   ( *_dbus_message_iter_open_container_dylibloader_wrapper_dbus )(param_1, 0x65, 0, local_218);
   ( *_dbus_message_iter_append_basic_dylibloader_wrapper_dbus )(local_218, 0x73, &local_238);
   ( *_dbus_message_iter_open_container_dylibloader_wrapper_dbus )(local_218, 0x76, "a(sa(us))", local_1c8);
   ( *_dbus_message_iter_open_container_dylibloader_wrapper_dbus )(local_1c8, 0x61, "(sa(us))", local_178);
   lVar10 = *(long*)( param_2 + 8 );
   for (lVar16 = 0; ( lVar10 != 0 && ( lVar16 < *(long*)( lVar10 + -8 ) ) ); lVar16 = lVar16 + 1) {
      ( *_dbus_message_iter_open_container_dylibloader_wrapper_dbus )(local_178, 0x72, 0, local_128);
      lVar10 = *(long*)( param_2 + 8 );
      lVar15 = lVar16;
      if (lVar10 == 0) {
         LAB_00100f39:lVar14 = 0;
         lVar15 = lVar16;
         LAB_00100e94:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar15, lVar14, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar4 = (code*)invalidInstructionException();
         ( *pcVar4 )();
      }

      lVar14 = *(long*)( lVar10 + -8 );
      if (lVar14 <= lVar16) goto LAB_00100e94;
      lVar3 = lVar16 * 8;
      append_dbus_string(local_128, (String*)( lVar10 + lVar3 ));
      ( *_dbus_message_iter_open_container_dylibloader_wrapper_dbus )(local_128, 0x61, &_LC41, local_d8);
      lVar10 = *(long*)( param_3 + 8 );
      if (lVar10 == 0) goto LAB_00100f39;
      lVar14 = *(long*)( lVar10 + -8 );
      if (lVar14 <= lVar16) goto LAB_00100e94;
      lVar15 = 0;
      local_230 = 0;
      plVar2 = (long*)( lVar10 + lVar3 );
      lVar10 = *plVar2;
      if (( lVar10 != 0 ) && ( lVar14 = *(long*)( lVar10 + -8 ) ),(int)lVar14 != 0) {
         LAB_00100a12:if ((int)lVar15 < (int)lVar14 + -1) {
            if (lVar15 == lVar14) {
               pwVar11 = (wchar32*)&String::_null;
            }
 else {
               if (lVar14 <= lVar15) goto LAB_00100e94;
               pwVar11 = (wchar32*)( lVar10 + lVar15 * 4 );
            }

            wVar9 = *pwVar11;
            wVar13 = L'ꩠ';
            iVar12 = 0x2f4;
            iVar8 = 0;
            iVar7 = 0x17a;
            do {
               if ((uint)wVar9 < (uint)wVar13) {
                  iVar12 = iVar7 + -1;
                  iVar7 = ( iVar8 + iVar12 ) - ( iVar8 + iVar12 >> 0x1f );
                  if (iVar12 < iVar8) goto LAB_00100a8e;
               }
 else {
                  if ((uint)wVar9 <= ( uint ) * (wchar32*)( unicode_letter + (long)iVar7 * 8 + 4 )) {
                     if (lVar14 < lVar15) goto LAB_00100e94;
                     String::char_uppercase(wVar9);
                     lVar10 = *plVar2;
                     if (lVar10 == 0) {
                        if (lVar15 != 0) {
                           lVar14 = 0;
                           goto LAB_00100e94;
                        }

                        LAB_00100f62:pwVar11 = (wchar32*)&String::_null;
                     }
 else {
                        lVar14 = *(long*)( lVar10 + -8 );
                        if (lVar15 == lVar14) goto LAB_00100f62;
                        if (lVar14 <= lVar15) goto LAB_00100e94;
                        pwVar11 = (wchar32*)( lVar10 + lVar15 * 4 );
                     }

                     wVar9 = String::char_lowercase(*pwVar11);
                     local_220 = 0;
                     local_88 = "[%c%c]";
                     local_80 = 6;
                     String::parse_latin1((StrRange*)&local_220);
                     vformat<char32_t,char32_t>((String*)&local_88, (wchar32)(StrRange*)&local_220, wVar9);
                     String::operator +=((String*)&local_230, (String*)&local_88);
                     pcVar6 = local_88;
                     if (local_88 != (char*)0x0) {
                        LOCK();
                        plVar1 = (long*)( local_88 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_88 = (char*)0x0;
                           Memory::free_static(pcVar6 + -0x10, false);
                        }

                     }

                     uVar5 = local_220;
                     if (local_220 != 0) {
                        LOCK();
                        plVar1 = (long*)( local_220 - 0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_220 = 0;
                           Memory::free_static((void*)( uVar5 - 0x10 ), false);
                        }

                     }

                     goto LAB_00100aa6;
                  }

                  iVar8 = iVar7 + 1;
                  iVar7 = ( iVar8 + iVar12 ) - ( iVar8 + iVar12 >> 0x1f );
                  if (iVar12 < iVar8) goto LAB_00100a8e;
               }

               iVar7 = iVar7 >> 1;
               wVar13 = *(wchar32*)( unicode_letter + (long)iVar7 * 8 );
            }
 while ( true );
         }

      }

      LAB_00100ac5:iVar8 = String::get_slice_count((char*)&local_230);
      if (0 < iVar8) {
         iVar7 = 0;
         do {
            while (true) {
               ( *_dbus_message_iter_open_container_dylibloader_wrapper_dbus )(local_d8, 0x72, 0, (DBusMessageIter*)&local_88);
               String::get_slice((char*)&local_220, (int)&local_230);
               String::strip_edges(SUB81((String*)&local_228, 0), SUB81(&local_220, 0));
               uVar5 = local_220;
               if (local_220 != 0) {
                  LOCK();
                  plVar2 = (long*)( local_220 - 0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     local_220 = 0;
                     Memory::free_static((void*)( uVar5 - 0x10 ), false);
                  }

               }

               local_220 = local_220 & 0xffffffff00000000;
               ( *_dbus_message_iter_append_basic_dylibloader_wrapper_dbus )((DBusMessageIter*)&local_88, 0x75, &local_220);
               append_dbus_string((DBusMessageIter*)&local_88, (String*)&local_228);
               ( *_dbus_message_iter_close_container_dylibloader_wrapper_dbus )(local_d8);
               lVar10 = local_228;
               if (local_228 != 0) break;
               LAB_00100b94:iVar7 = iVar7 + 1;
               if (iVar8 == iVar7) goto LAB_00100ba6;
            }
;
            LOCK();
            plVar2 = (long*)( local_228 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 != 0) goto LAB_00100b94;
            iVar7 = iVar7 + 1;
            local_228 = 0;
            Memory::free_static((void*)( lVar10 + -0x10 ), false);
         }
 while ( iVar8 != iVar7 );
      }

      LAB_00100ba6:lVar10 = *(long*)( param_4 + 8 );
      if (lVar10 == 0) goto LAB_00100f39;
      lVar14 = *(long*)( lVar10 + -8 );
      lVar15 = lVar16;
      if (lVar14 <= lVar16) goto LAB_00100e94;
      iVar8 = String::get_slice_count((char*)( lVar3 + lVar10 ));
      if (0 < iVar8) {
         iVar7 = 0;
         do {
            ( *_dbus_message_iter_open_container_dylibloader_wrapper_dbus )(local_d8, 0x72, 0, (DBusMessageIter*)&local_88);
            String::get_slicec(( wchar32 ) & local_220, (int)(char*)( lVar3 + lVar10 ));
            String::strip_edges(SUB81((String*)&local_228, 0), SUB81(&local_220, 0));
            uVar5 = local_220;
            if (local_220 != 0) {
               LOCK();
               plVar2 = (long*)( local_220 - 0x10 );
               *plVar2 = *plVar2 + -1;
               UNLOCK();
               if (*plVar2 == 0) {
                  local_220 = 0;
                  Memory::free_static((void*)( uVar5 - 0x10 ), false);
               }

            }

            local_220 = CONCAT44(local_220._4_4_, 1);
            ( *_dbus_message_iter_append_basic_dylibloader_wrapper_dbus )((DBusMessageIter*)&local_88, 0x75, &local_220);
            append_dbus_string((DBusMessageIter*)&local_88, (String*)&local_228);
            ( *_dbus_message_iter_close_container_dylibloader_wrapper_dbus )(local_d8);
            lVar15 = local_228;
            if (local_228 != 0) {
               LOCK();
               plVar2 = (long*)( local_228 + -0x10 );
               *plVar2 = *plVar2 + -1;
               UNLOCK();
               if (*plVar2 == 0) {
                  local_228 = 0;
                  Memory::free_static((void*)( lVar15 + -0x10 ), false);
               }

            }

            iVar7 = iVar7 + 1;
         }
 while ( iVar8 != iVar7 );
      }

      ( *_dbus_message_iter_close_container_dylibloader_wrapper_dbus )(local_128, local_d8);
      ( *_dbus_message_iter_close_container_dylibloader_wrapper_dbus )(local_178);
      lVar10 = local_230;
      if (local_230 != 0) {
         LOCK();
         plVar2 = (long*)( local_230 + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 == 0) {
            local_230 = 0;
            Memory::free_static((void*)( lVar10 + -0x10 ), false);
         }

      }

      lVar10 = *(long*)( param_2 + 8 );
   }

   ( *_dbus_message_iter_close_container_dylibloader_wrapper_dbus )(local_1c8, local_178);
   ( *_dbus_message_iter_close_container_dylibloader_wrapper_dbus )(local_218, local_1c8);
   ( *_dbus_message_iter_close_container_dylibloader_wrapper_dbus )(param_1, local_218);
   LAB_00100fa3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_00100a8e:if (lVar14 < lVar15) goto LAB_00100e94;
   String::operator +=((String*)&local_230, wVar9);
   LAB_00100aa6:lVar10 = *plVar2;
   lVar15 = lVar15 + 1;
   if (( lVar10 == 0 ) || ( lVar14 = *(long*)( lVar10 + -8 ) ),(int)lVar14 == 0) goto LAB_00100ac5;
   goto LAB_00100a12;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* FreeDesktopPortalDesktop::_is_interface_supported(char const*) */undefined8 FreeDesktopPortalDesktop::_is_interface_supported(FreeDesktopPortalDesktop *this, char *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   char cVar4;
   int iVar5;
   undefined8 uVar6;
   long lVar7;
   long lVar8;
   undefined8 uVar9;
   long in_FS_OFFSET;
   undefined1 local_14c[4];
   char *local_148;
   char *local_140;
   long local_138;
   long local_130;
   char *local_128;
   undefined8 local_120;
   undefined1 local_118[32];
   undefined1 local_f8[80];
   undefined1 local_a8[80];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ( *_dbus_error_init_dylibloader_wrapper_dbus )(local_118);
   uVar6 = ( *_dbus_bus_get_dylibloader_wrapper_dbus )(0, local_118);
   iVar5 = ( *_dbus_error_is_set_dylibloader_wrapper_dbus )(local_118);
   if (iVar5 != 0) {
      uVar9 = 0;
      ( *_dbus_error_free_dylibloader_wrapper_dbus )(local_118);
      goto LAB_001010a0;
   }

   uVar9 = 0;
   lVar7 = ( *_dbus_message_new_method_call_dylibloader_wrapper_dbus )("org.freedesktop.portal.Desktop", "/org/freedesktop/portal/desktop", "org.freedesktop.DBus.Properties", &_LC44);
   if (lVar7 != 0) {
      local_140 = "version";
      local_148 = param_1;
      ( *_dbus_message_append_args_dylibloader_wrapper_dbus )(lVar7, 0x73, &local_148, 0x73, &local_140, 0);
      lVar8 = ( *_dbus_connection_send_with_reply_and_block_dylibloader_wrapper_dbus )(uVar6, lVar7, 0xfa, local_118);
      iVar5 = ( *_dbus_error_is_set_dylibloader_wrapper_dbus )(local_118);
      if (iVar5 == 0) {
         if (lVar8 == 0) goto LAB_0010115d;
         iVar5 = ( *_dbus_message_iter_init_dylibloader_wrapper_dbus )(lVar8, local_f8);
         if (iVar5 != 0) {
            ( *_dbus_message_iter_recurse_dylibloader_wrapper_dbus )(local_f8, local_a8);
            ( *_dbus_message_iter_get_basic_dylibloader_wrapper_dbus )(local_a8, local_14c);
            cVar4 = is_print_verbose_enabled();
            if (cVar4 != '\0') {
               local_138 = 0;
               local_120 = 0x26;
               local_128 = "PortalDesktop: %s version %d detected.";
               String::parse_latin1((StrRange*)&local_138);
               vformat<char_const*,unsigned_int>((String*)&local_130, (char*)&local_138, (uint)param_1);
               Variant::Variant((Variant*)local_58, (String*)&local_130);
               stringify_variants((Variant*)&local_128);
               __print_line((String*)&local_128);
               pcVar3 = local_128;
               if (local_128 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_128 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_128 = (char*)0x0;
                     Memory::free_static(pcVar3 + -0x10, false);
                  }

               }

               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               lVar2 = local_130;
               if (local_130 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_130 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_130 = 0;
                     Memory::free_static((void*)( lVar2 + -0x10 ), false);
                  }

               }

               lVar2 = local_138;
               if (local_138 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_138 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_138 = 0;
                     Memory::free_static((void*)( lVar2 + -0x10 ), false);
                  }

               }

            }

            uVar9 = 1;
         }

         ( *_dbus_message_unref_dylibloader_wrapper_dbus )(lVar8);
      }
 else {
         ( *_dbus_error_free_dylibloader_wrapper_dbus )(local_118);
         LAB_0010115d:uVar9 = 0;
      }

      ( *_dbus_message_unref_dylibloader_wrapper_dbus )(lVar7);
   }

   ( *_dbus_connection_unref_dylibloader_wrapper_dbus )(uVar6);
   LAB_001010a0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar9;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* FreeDesktopPortalDesktop::is_file_chooser_supported() */ulong FreeDesktopPortalDesktop::is_file_chooser_supported(FreeDesktopPortalDesktop *this) {
   ulong uVar1;
   if (is_file_chooser_supported() != -1) {
      return (ulong)CONCAT31(( int3 )(is_file_chooser_supported()::, supported >> 8), is_file_chooser_supported() != 0);
   }

   uVar1 = _is_interface_supported(this, "org.freedesktop.portal.FileChooser");
   is_file_chooser_supported()::supported = (uint)uVar1
   &0xff;
   return uVar1;
}
/* FreeDesktopPortalDesktop::is_settings_supported() */ulong FreeDesktopPortalDesktop::is_settings_supported(FreeDesktopPortalDesktop *this) {
   ulong uVar1;
   if (is_settings_supported() != -1) {
      return (ulong)CONCAT31(( int3 )(is_settings_supported()::, supported >> 8), is_settings_supported() != 0);
   }

   uVar1 = _is_interface_supported(this, "org.freedesktop.portal.Settings");
   is_settings_supported()::supported = (uint)uVar1
   &0xff;
   return uVar1;
}
/* FreeDesktopPortalDesktop::_system_theme_changed_callback() */void FreeDesktopPortalDesktop::_system_theme_changed_callback(FreeDesktopPortalDesktop *this) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   char cVar4;
   long in_FS_OFFSET;
   long local_78;
   long local_70;
   int local_68;
   undefined8 local_64;
   char *local_58;
   undefined8 local_50;
   int local_48[2];
   undefined1 local_40[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar4 = Callable::is_valid();
   if (cVar4 != '\0') {
      local_48[0] = 0;
      local_48[1] = 0;
      local_68 = 0;
      local_64 = 0;
      local_40 = (undefined1[16])0x0;
      Callable::callp((Variant**)( this + 0x1e0 ), 0, (Variant*)0x0, (CallError*)local_48);
      if (local_68 != 0) {
         Variant::get_callable_error_text((Callable*)&local_78, (Variant**)( this + 0x1e0 ), 0, (CallError*)0x0);
         local_58 = "Failed to execute system theme changed callback: %s.";
         local_70 = 0;
         local_50 = 0x34;
         String::parse_latin1((StrRange*)&local_70);
         vformat<String>(&local_58, (StrRange*)&local_70, &local_78);
         _err_print_error("_system_theme_changed_callback", "platform/linuxbsd/freedesktop_portal_desktop.cpp", 700, &local_58, 0, 0);
         pcVar3 = local_58;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
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

      }

      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* FreeDesktopPortalDesktop::process_file_dialog_callbacks() */void FreeDesktopPortalDesktop::process_file_dialog_callbacks(FreeDesktopPortalDesktop *this) {
   long *plVar1;
   Callable *pCVar2;
   long lVar3;
   char *pcVar4;
   int iVar5;
   undefined8 *puVar6;
   undefined8 uVar7;
   long in_FS_OFFSET;
   long local_128;
   long local_120;
   int local_118;
   undefined8 local_114;
   char *local_108;
   undefined8 local_100;
   int local_f8[2];
   undefined1 local_f0[16];
   Variant *local_d8;
   Variant *pVStack_d0;
   Variant *local_c8;
   Variant *pVStack_c0;
   Callable local_b8[16];
   int local_a8[6];
   int local_90[6];
   int local_78[6];
   int local_60[6];
   Callable local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar5 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x180 ));
   if (iVar5 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar5);
   }

   puVar6 = *(undefined8**)( this + 0x178 );
   if (puVar6 != (undefined8*)0x0) {
      do {
         if (*(int*)( puVar6 + 2 ) == 0) break;
         pCVar2 = (Callable*)*puVar6;
         Callable::Callable(local_b8, pCVar2);
         Variant::Variant((Variant*)local_a8, (Variant*)( pCVar2 + 0x10 ));
         Variant::Variant((Variant*)local_90, (Variant*)( pCVar2 + 0x28 ));
         Variant::Variant((Variant*)local_78, (Variant*)( pCVar2 + 0x40 ));
         Variant::Variant((Variant*)local_60, (Variant*)( pCVar2 + 0x58 ));
         local_48 = pCVar2[0x70];
         puVar6 = *(undefined8**)( this + 0x178 );
         if (( puVar6 != (undefined8*)0x0 ) && ( pCVar2 = (Callable*)*puVar6 ),pCVar2 != (Callable*)0x0) {
            if (puVar6 == *(undefined8**)( pCVar2 + 0x88 )) {
               *puVar6 = *(undefined8*)( pCVar2 + 0x78 );
               if (pCVar2 == (Callable*)puVar6[1]) {
                  puVar6[1] = *(undefined8*)( pCVar2 + 0x80 );
               }

               if (*(long*)( pCVar2 + 0x80 ) != 0) {
                  *(undefined8*)( *(long*)( pCVar2 + 0x80 ) + 0x78 ) = *(undefined8*)( pCVar2 + 0x78 );
               }

               if (*(long*)( pCVar2 + 0x78 ) != 0) {
                  *(undefined8*)( *(long*)( pCVar2 + 0x78 ) + 0x80 ) = *(undefined8*)( pCVar2 + 0x80 );
               }

               for (int i = 0; i < 4; i++) {
                  if (Variant::needs_deinit[*(int*)( pCVar2 + ( -24*i + 88 ) )] != '\0') {
                     Variant::_clear_internal();
                  }

               }

               Callable::~Callable(pCVar2);
               Memory::free_static(pCVar2, false);
               *(int*)( puVar6 + 2 ) = *(int*)( puVar6 + 2 ) + -1;
            }
 else {
               _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
            }

            if (*(int*)( (long)*(void**)( this + 0x178 ) + 0x10 ) == 0) {
               Memory::free_static(*(void**)( this + 0x178 ), false);
               *(undefined8*)( this + 0x178 ) = 0;
            }

         }

         local_f8[0] = 0;
         local_f8[1] = 0;
         local_118 = 0;
         local_114 = 0;
         local_f0 = (undefined1[16])0x0;
         local_d8 = (Variant*)local_a8;
         pVStack_d0 = (Variant*)local_90;
         local_c8 = (Variant*)local_78;
         if (local_48 == (Callable)0x0) {
            Callable::callp((Variant**)local_b8, (int)&local_d8, (Variant*)0x3, (CallError*)local_f8);
            if (local_118 != 0) {
               Variant::get_callable_error_text((Callable*)&local_128, (Variant**)local_b8, (int)&local_d8, (CallError*)0x3);
               local_108 = "Failed to execute file dialog callback: %s.";
               local_120 = 0;
               local_100 = 0x2b;
               String::parse_latin1((StrRange*)&local_120);
               vformat<String>(&local_108, (StrRange*)&local_120, (Callable*)&local_128);
               uVar7 = 0x269;
               goto LAB_001019f5;
            }

         }
 else {
            pVStack_c0 = (Variant*)local_60;
            Callable::callp((Variant**)local_b8, (int)&local_d8, (Variant*)0x4, (CallError*)local_f8);
            if (local_118 != 0) {
               Variant::get_callable_error_text((Callable*)&local_128, (Variant**)local_b8, (int)&local_d8, (CallError*)0x4);
               local_108 = "Failed to execute file dialog callback: %s.";
               local_120 = 0;
               local_100 = 0x2b;
               String::parse_latin1((StrRange*)&local_120);
               vformat<String>(&local_108, (StrRange*)&local_120, (Callable*)&local_128);
               uVar7 = 0x260;
               LAB_001019f5:_err_print_error("process_file_dialog_callbacks", "platform/linuxbsd/freedesktop_portal_desktop.cpp", uVar7, &local_108);
               pcVar4 = local_108;
               if (local_108 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_108 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_108 = (char*)0x0;
                     Memory::free_static(pcVar4 + -0x10, false);
                  }

               }

               lVar3 = local_120;
               if (local_120 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_120 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_120 = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               lVar3 = local_128;
               if (local_128 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_128 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_128 = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

            }

         }

         if (Variant::needs_deinit[local_f8[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_90[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_a8[0]] != '\0') {
            Variant::_clear_internal();
         }

         Callable::~Callable(local_b8);
         puVar6 = *(undefined8**)( this + 0x178 );
      }
 while ( puVar6 != (undefined8*)0x0 );
   }

   pthread_mutex_unlock((pthread_mutex_t*)( this + 0x180 ));
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Type propagation algorithm not settling *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* FreeDesktopPortalDesktop::FreeDesktopPortalDesktop() */void FreeDesktopPortalDesktop::FreeDesktopPortalDesktop(FreeDesktopPortalDesktop *this) {
   long *plVar1;
   code *pcVar2;
   int iVar3;
   long lVar4;
   char *pcVar5;
   char cVar6;
   int iVar7;
   undefined8 uVar8;
   long in_FS_OFFSET;
   int local_9c;
   int local_98[2];
   long local_90;
   char *local_88;
   undefined8 local_80;
   char *local_78;
   undefined8 local_70;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Object::Object((Object*)this);
   *(undefined1(*) [16])( this + 400 ) = (undefined1[16])0x0;
   *(undefined***)this = &PTR__initialize_classv_0010c300;
   this[0x171] = (FreeDesktopPortalDesktop)0x0;
   *(undefined8*)( this + 0x178 ) = 0;
   *(undefined8*)( this + 0x1a0 ) = 0;
   *(undefined4*)( this + 400 ) = 1;
   *(undefined8*)( this + 0x1b0 ) = 0;
   *(undefined1(*) [16])( this + 0x180 ) = (undefined1[16])0x0;
   Thread::Thread((Thread*)( this + 0x1b8 ));
   this[0x1c8] = (FreeDesktopPortalDesktop)0x0;
   *(undefined1(*) [16])( this + 0x1d0 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x1e0 ) = 0;
   *(undefined8*)( this + 0x1e8 ) = 0;
   iVar7 = initialize_dbus(1);
   this[0x171] = ( FreeDesktopPortalDesktop )(iVar7 != 0);
   if (iVar7 != 0) goto LAB_00101d12;
   local_9c = 0;
   local_98[0] = 0;
   local_98[1] = 0;
   ( *_dbus_get_version_dylibloader_wrapper_dbus )(&local_9c, local_98, local_98 + 1);
   if (local_9c == 1) {
      if (9 < local_98[0]) goto LAB_00101c99;
      LAB_00101d4b:cVar6 = is_print_verbose_enabled();
      if (cVar6 != '\0') {
         cVar6 = '\0';
         LAB_00101d7b:iVar3 = local_98[0];
         iVar7 = local_9c;
         local_78 = "PortalDesktop: DBus %d.%d.%d detected.";
         local_88 = (char*)0x0;
         local_70 = 0x26;
         String::parse_latin1((StrRange*)&local_88);
         vformat<int,int,int>((String*)&local_90, (int)(StrRange*)&local_88, iVar7, iVar3);
         Variant::Variant((Variant*)local_58, (String*)&local_90);
         stringify_variants((Variant*)&local_78);
         __print_line((String*)&local_78);
         pcVar5 = local_78;
         if (local_78 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_78 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_78 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
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

         pcVar5 = local_88;
         if (local_88 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_88 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_88 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

         if (cVar6 != '\0') goto LAB_00101cae;
      }

      cVar6 = is_print_verbose_enabled();
      if (cVar6 != '\0') {
         Variant::Variant((Variant*)local_58, "PortalDesktop: Unsupported DBus library version!");
         stringify_variants((Variant*)&local_78);
         __print_line((String*)&local_78);
         pcVar5 = local_78;
         if (local_78 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_78 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_78 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

      }

      this[0x171] = (FreeDesktopPortalDesktop)0x1;
   }
 else {
      if (local_9c < 2) goto LAB_00101d4b;
      LAB_00101c99:cVar6 = is_print_verbose_enabled();
      if (cVar6 != '\0') goto LAB_00101d7b;
   }

   LAB_00101cae:( *_dbus_error_init_dylibloader_wrapper_dbus )(&local_78);
   uVar8 = ( *_dbus_bus_get_dylibloader_wrapper_dbus )(0, &local_78);
   *(undefined8*)( this + 0x1d0 ) = uVar8;
   iVar7 = ( *_dbus_error_is_set_dylibloader_wrapper_dbus )(&local_78);
   if (iVar7 == 0) {
      local_80 = 0x79;
      local_88 = "type=\'signal\',sender=\'org.freedesktop.portal.Desktop\',interface=\'org.freedesktop.portal.Settings\',member=\'SettingChanged\'";
      String::parse_latin1((StrRange*)( this + 0x1d8 ));
      pcVar2 = _dbus_bus_add_match_dylibloader_wrapper_dbus;
      String::utf8();
      uVar8 = CharString::get_data();
      ( *pcVar2 )(*(undefined8*)( this + 0x1d0 ), uVar8, &local_78);
      pcVar5 = local_88;
      if (local_88 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_88 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_88 = (char*)0x0;
            Memory::free_static(pcVar5 + -0x10, false);
         }

      }

      iVar7 = ( *_dbus_error_is_set_dylibloader_wrapper_dbus )(&local_78);
      if (iVar7 == 0) {
         uVar8 = *(undefined8*)( this + 0x1d0 );
      }
 else {
         ( *_dbus_error_free_dylibloader_wrapper_dbus )(&local_78);
         ( *_dbus_connection_unref_dylibloader_wrapper_dbus )(*(undefined8*)( this + 0x1d0 ));
         uVar8 = 0;
         *(undefined8*)( this + 0x1d0 ) = 0;
      }

      ( *_dbus_connection_read_write_dylibloader_wrapper_dbus )(uVar8, 0);
   }
 else {
      ( *_dbus_error_free_dylibloader_wrapper_dbus )(&local_78);
   }

   if (this[0x171] == (FreeDesktopPortalDesktop)0x0) {
      this[0x1c8] = (FreeDesktopPortalDesktop)0x0;
      local_88 = (char*)CONCAT44(local_88._4_4_, 1);
      Thread::start((_func_void_void_ptr*)( this + 0x1b8 ), _thread_monitor, (Settings*)this);
   }

   LAB_00101d12:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* FreeDesktopPortalDesktop::file_chooser_parse_response(DBusMessageIter*, Vector<String> const&,
   HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > > const&, bool&, Vector<String>&, int&,
   Dictionary&) */undefined8 FreeDesktopPortalDesktop::file_chooser_parse_response(DBusMessageIter *param_1, Vector *param_2, HashMap *param_3, bool *param_4, Vector *param_5, int *param_6, Dictionary *param_7) {
   long *plVar1;
   uint uVar2;
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
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   code *pcVar19;
   char *__s1;
   char cVar20;
   int iVar21;
   uint uVar22;
   undefined8 uVar23;
   Variant *pVVar24;
   long lVar25;
   long lVar26;
   uint uVar27;
   uint uVar28;
   uint uVar29;
   long lVar30;
   ulong uVar31;
   long in_FS_OFFSET;
   int local_234;
   char *local_230;
   undefined8 local_228;
   long local_220;
   long local_218;
   long local_210;
   undefined1 local_208[80];
   undefined1 local_1b8[80];
   undefined1 local_168[80];
   long local_118[10];
   undefined1 local_c8[80];
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar21 = ( *_dbus_message_iter_get_arg_type_dylibloader_wrapper_dbus )();
   if (iVar21 != 0x75) {
      _err_print_error("file_chooser_parse_response", "platform/linuxbsd/freedesktop_portal_desktop.cpp", 299, "Condition \"dbus_message_iter_get_arg_type_dylibloader_wrapper_dbus(p_iter) != ((int) \'u\')\" is true. Returning: false", 0, 0);
      uVar23 = 0;
      goto LAB_0010250a;
   }

   ( *_dbus_message_iter_get_basic_dylibloader_wrapper_dbus )(param_1, &local_234);
   if (local_234 == 0) {
      *param_4 = false;
      iVar21 = ( *_dbus_message_iter_next_dylibloader_wrapper_dbus )(param_1);
      if (iVar21 == 0) {
         _err_print_error("file_chooser_parse_response", "platform/linuxbsd/freedesktop_portal_desktop.cpp", 0x133, "Condition \"!dbus_message_iter_next_dylibloader_wrapper_dbus(p_iter)\" is true. Returning: false", 0, 0);
         uVar23 = 0;
         goto LAB_0010250a;
      }

      iVar21 = ( *_dbus_message_iter_get_arg_type_dylibloader_wrapper_dbus )(param_1);
      if (iVar21 != 0x61) {
         _err_print_error("file_chooser_parse_response", "platform/linuxbsd/freedesktop_portal_desktop.cpp", 0x134, "Condition \"dbus_message_iter_get_arg_type_dylibloader_wrapper_dbus(p_iter) != ((int) \'a\')\" is true. Returning: false", 0, 0);
         uVar23 = 0;
         goto LAB_0010250a;
      }

      ( *_dbus_message_iter_recurse_dylibloader_wrapper_dbus )(param_1, local_208);
      do {
         iVar21 = ( *_dbus_message_iter_get_arg_type_dylibloader_wrapper_dbus )(local_208);
         if (iVar21 != 0x65) break;
         ( *_dbus_message_iter_recurse_dylibloader_wrapper_dbus )(local_208, local_1b8);
         iVar21 = ( *_dbus_message_iter_get_arg_type_dylibloader_wrapper_dbus )(local_1b8);
         if (iVar21 == 0x73) {
            ( *_dbus_message_iter_get_basic_dylibloader_wrapper_dbus )(local_1b8, &local_230);
            ( *_dbus_message_iter_next_dylibloader_wrapper_dbus )(local_1b8);
            ( *_dbus_message_iter_recurse_dylibloader_wrapper_dbus )(local_1b8, local_168);
            __s1 = local_230;
            iVar21 = strcmp(local_230, "current_filter");
            if (iVar21 != 0) {
               iVar21 = strcmp(__s1, "choices");
               if (iVar21 == 0) {
                  iVar21 = ( *_dbus_message_iter_get_arg_type_dylibloader_wrapper_dbus )(local_168);
                  if (iVar21 == 0x61) {
                     ( *_dbus_message_iter_recurse_dylibloader_wrapper_dbus )(local_168, local_118);
                     LAB_00102590:iVar21 = ( *_dbus_message_iter_get_arg_type_dylibloader_wrapper_dbus )(local_118);
                     if (iVar21 == 0x72) {
                        ( *_dbus_message_iter_recurse_dylibloader_wrapper_dbus )(local_118, local_c8);
                        local_228 = 0;
                        ( *_dbus_message_iter_get_basic_dylibloader_wrapper_dbus )(local_c8, &local_228);
                        String::utf8((char*)&local_220, (int)local_228);
                        ( *_dbus_message_iter_next_dylibloader_wrapper_dbus )(local_c8);
                        local_218 = 0;
                        ( *_dbus_message_iter_get_basic_dylibloader_wrapper_dbus )(local_c8, &local_218);
                        String::utf8((char*)&local_210, (int)local_218);
                        if (( *(long*)( param_3 + 8 ) != 0 ) && ( *(int*)( param_3 + 0x2c ) != 0 )) {
                           uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_3 + 0x28 ) * 4 );
                           uVar31 = CONCAT44(0, uVar2);
                           lVar25 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_3 + 0x28 ) * 8 );
                           uVar22 = String::hash();
                           lVar26 = *(long*)( param_3 + 0x10 );
                           uVar27 = 1;
                           if (uVar22 != 0) {
                              uVar27 = uVar22;
                           }

                           auVar3._8_8_ = 0;
                           auVar3._0_8_ = (ulong)uVar27 * lVar25;
                           auVar11._8_8_ = 0;
                           auVar11._0_8_ = uVar31;
                           lVar30 = SUB168(auVar3 * auVar11, 8);
                           uVar22 = *(uint*)( lVar26 + lVar30 * 4 );
                           iVar21 = SUB164(auVar3 * auVar11, 8);
                           if (uVar22 != 0) {
                              uVar28 = 0;
                              do {
                                 if (uVar22 == uVar27) {
                                    cVar20 = String::operator ==((String*)( *(long*)( *(long*)( param_3 + 8 ) + lVar30 * 8 ) + 0x10 ), (String*)&local_220);
                                    if (cVar20 != '\0') {
                                       if (( *(long*)( param_3 + 8 ) == 0 ) || ( *(int*)( param_3 + 0x2c ) == 0 )) goto LAB_00102a80;
                                       uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_3 + 0x28 ) * 4 );
                                       lVar25 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_3 + 0x28 ) * 8 );
                                       uVar22 = String::hash();
                                       uVar31 = CONCAT44(0, uVar2);
                                       lVar26 = *(long*)( param_3 + 0x10 );
                                       uVar27 = 1;
                                       if (uVar22 != 0) {
                                          uVar27 = uVar22;
                                       }

                                       auVar7._8_8_ = 0;
                                       auVar7._0_8_ = (ulong)uVar27 * lVar25;
                                       auVar15._8_8_ = 0;
                                       auVar15._0_8_ = uVar31;
                                       lVar30 = SUB168(auVar7 * auVar15, 8);
                                       uVar22 = *(uint*)( lVar26 + lVar30 * 4 );
                                       uVar28 = SUB164(auVar7 * auVar15, 8);
                                       if (uVar22 == 0) goto LAB_00102a80;
                                       uVar29 = 0;
                                       goto LAB_00102a4f;
                                    }

                                    lVar26 = *(long*)( param_3 + 0x10 );
                                 }

                                 uVar28 = uVar28 + 1;
                                 auVar4._8_8_ = 0;
                                 auVar4._0_8_ = ( ulong )(iVar21 + 1) * lVar25;
                                 auVar12._8_8_ = 0;
                                 auVar12._0_8_ = uVar31;
                                 lVar30 = SUB168(auVar4 * auVar12, 8);
                                 uVar22 = *(uint*)( lVar26 + lVar30 * 4 );
                                 iVar21 = SUB164(auVar4 * auVar12, 8);
                              }
 while ( ( uVar22 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar22 * lVar25,auVar13._8_8_ = 0,auVar13._0_8_ = uVar31,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar2 + iVar21 ) - SUB164(auVar5 * auVar13, 8)) * lVar25,auVar14._8_8_ = 0,auVar14._0_8_ = uVar31,uVar28 <= SUB164(auVar6 * auVar14, 8) );
                           }

                        }

                        goto LAB_00102903;
                     }

                  }

               }
 else {
                  iVar21 = strcmp(__s1, "uris");
                  if (( iVar21 == 0 ) && ( iVar21 = ( *_dbus_message_iter_get_arg_type_dylibloader_wrapper_dbus )(local_168) ),iVar21 == 0x61) {
                     ( *_dbus_message_iter_recurse_dylibloader_wrapper_dbus )(local_168, local_c8);
                     do {
                        iVar21 = ( *_dbus_message_iter_get_arg_type_dylibloader_wrapper_dbus )(local_c8);
                        if (iVar21 != 0x73) break;
                        ( *_dbus_message_iter_get_basic_dylibloader_wrapper_dbus )(local_c8, &local_220);
                        String::utf8((char*)&local_218, (int)local_220);
                        String::trim_prefix((char*)&local_210);
                        String::uri_decode();
                        Vector<String>::push_back((Vector<String>*)param_5);
                        lVar25 = local_118[0];
                        if (local_118[0] != 0) {
                           LOCK();
                           plVar1 = (long*)( local_118[0] + -0x10 );
                           *plVar1 = *plVar1 + -1;
                           UNLOCK();
                           if (*plVar1 == 0) {
                              local_118[0] = 0;
                              Memory::free_static((void*)( lVar25 + -0x10 ), false);
                           }

                        }

                        lVar25 = local_210;
                        if (local_210 != 0) {
                           LOCK();
                           plVar1 = (long*)( local_210 + -0x10 );
                           *plVar1 = *plVar1 + -1;
                           UNLOCK();
                           if (*plVar1 == 0) {
                              local_210 = 0;
                              Memory::free_static((void*)( lVar25 + -0x10 ), false);
                           }

                        }

                        lVar25 = local_218;
                        if (local_218 != 0) {
                           LOCK();
                           plVar1 = (long*)( local_218 + -0x10 );
                           *plVar1 = *plVar1 + -1;
                           UNLOCK();
                           if (*plVar1 == 0) {
                              local_218 = 0;
                              Memory::free_static((void*)( lVar25 + -0x10 ), false);
                           }

                        }

                        iVar21 = ( *_dbus_message_iter_next_dylibloader_wrapper_dbus )(local_c8);
                     }
 while ( iVar21 != 0 );
                  }

               }

               goto LAB_00102360;
            }

            iVar21 = ( *_dbus_message_iter_get_arg_type_dylibloader_wrapper_dbus )(local_168);
            if (iVar21 == 0x72) {
               ( *_dbus_message_iter_recurse_dylibloader_wrapper_dbus )(local_168, local_c8);
               while (iVar21 = ( *_dbus_message_iter_get_arg_type_dylibloader_wrapper_dbus )(local_c8),iVar21 == 0x73) {
                  ( *_dbus_message_iter_get_basic_dylibloader_wrapper_dbus )(local_c8, &local_210);
                  String::utf8((char*)local_118, (int)local_210);
                  lVar25 = *(long*)( param_2 + 8 );
                  if (( lVar25 != 0 ) && ( lVar26 = lVar26 != 0 )) {
                     lVar30 = 0;
                     while (lVar30 < lVar26) {
                        cVar20 = String::operator ==((String*)( lVar25 + lVar30 * 8 ), (String*)local_118);
                        if (cVar20 != '\0') {
                           iVar21 = (int)lVar30;
                           goto LAB_001024a8;
                        }

                        lVar25 = *(long*)( param_2 + 8 );
                        lVar30 = lVar30 + 1;
                        if (lVar25 == 0) break;
                        lVar26 = *(long*)( lVar25 + -8 );
                     }
;
                  }

                  iVar21 = -1;
                  LAB_001024a8:*param_6 = iVar21;
                  iVar21 = ( *_dbus_message_iter_next_dylibloader_wrapper_dbus )(local_c8);
                  lVar25 = local_118[0];
                  if (iVar21 == 0) {
                     if (local_118[0] != 0) {
                        LOCK();
                        plVar1 = (long*)( local_118[0] + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_118[0] = 0;
                           Memory::free_static((void*)( lVar25 + -0x10 ), false);
                        }

                     }

                     break;
                  }

                  if (local_118[0] != 0) {
                     LOCK();
                     plVar1 = (long*)( local_118[0] + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_118[0] = 0;
                        Memory::free_static((void*)( lVar25 + -0x10 ), false);
                     }

                  }

               }
;
            }

         }

         LAB_00102360:iVar21 = ( *_dbus_message_iter_next_dylibloader_wrapper_dbus )(local_208);
      }
 while ( iVar21 != 0 );
   }
 else {
      *param_4 = true;
   }

   uVar23 = 1;
   LAB_0010250a:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar23;
   LAB_00102a4f:if (uVar22 == uVar27) {
      cVar20 = String::operator ==((String*)( *(long*)( *(long*)( param_3 + 8 ) + lVar30 * 8 ) + 0x10 ), (String*)&local_220);
      if (cVar20 != '\0') goto LAB_00102aac;
      lVar26 = *(long*)( param_3 + 0x10 );
   }

   uVar29 = uVar29 + 1;
   auVar8._8_8_ = 0;
   auVar8._0_8_ = ( ulong )(uVar28 + 1) * lVar25;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = uVar31;
   lVar30 = SUB168(auVar8 * auVar16, 8);
   uVar22 = *(uint*)( lVar26 + lVar30 * 4 );
   uVar28 = SUB164(auVar8 * auVar16, 8);
   if (( uVar22 == 0 ) || ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar22 * lVar25,auVar17._8_8_ = 0,auVar17._0_8_ = uVar31,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar2 + uVar28 ) - SUB164(auVar9 * auVar17, 8)) * lVar25,auVar18._8_8_ = 0,auVar18._0_8_ = uVar31,SUB164(auVar10 * auVar18, 8) < uVar29) {
      LAB_00102a80:_err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar19 = (code*)invalidInstructionException();
      ( *pcVar19 )();
   }

   goto LAB_00102a4f;
   LAB_00102aac:lVar25 = *(long*)( *(long*)( param_3 + 8 ) + (ulong)uVar28 * 8 );
   if (local_220 != *(long*)( lVar25 + 0x18 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_220, (CowData*)( lVar25 + 0x18 ));
   }

   cVar20 = String::operator ==((String*)&local_210, "true");
   if (cVar20 == '\0') {
      cVar20 = String::operator ==((String*)&local_210, "false");
      if (cVar20 == '\0') {
         lVar25 = String::to_int();
         Variant::Variant((Variant*)local_58, lVar25);
         Variant::Variant((Variant*)local_78, (String*)&local_220);
         pVVar24 = (Variant*)Dictionary::operator []((Variant*)param_7);
         if (pVVar24 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar24] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar24 = 0;
            *(int*)pVVar24 = local_58[0];
            *(undefined8*)( pVVar24 + 8 ) = local_50;
            *(undefined8*)( pVVar24 + 0x10 ) = uStack_48;
            local_58[0] = 0;
         }

      }
 else {
         Variant::Variant((Variant*)local_58, false);
         Variant::Variant((Variant*)local_78, (String*)&local_220);
         pVVar24 = (Variant*)Dictionary::operator []((Variant*)param_7);
         if (pVVar24 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar24] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar24 = 0;
            *(int*)pVVar24 = local_58[0];
            *(undefined8*)( pVVar24 + 8 ) = local_50;
            *(undefined8*)( pVVar24 + 0x10 ) = uStack_48;
            local_58[0] = 0;
         }

      }

   }
 else {
      Variant::Variant((Variant*)local_58, true);
      Variant::Variant((Variant*)local_78, (String*)&local_220);
      pVVar24 = (Variant*)Dictionary::operator []((Variant*)param_7);
      if (pVVar24 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar24] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar24 = 0;
         *(int*)pVVar24 = local_58[0];
         *(undefined8*)( pVVar24 + 8 ) = local_50;
         *(undefined8*)( pVVar24 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

   }

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   LAB_00102903:iVar21 = ( *_dbus_message_iter_next_dylibloader_wrapper_dbus )(local_118);
   lVar25 = local_210;
   if (iVar21 == 0) {
      if (local_210 != 0) {
         LOCK();
         plVar1 = (long*)( local_210 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_210 = 0;
            Memory::free_static((void*)( lVar25 + -0x10 ), false);
         }

      }

      lVar25 = local_220;
      if (local_220 != 0) {
         LOCK();
         plVar1 = (long*)( local_220 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_220 = 0;
            Memory::free_static((void*)( lVar25 + -0x10 ), false);
         }

      }

      goto LAB_00102360;
   }

   if (local_210 != 0) {
      LOCK();
      plVar1 = (long*)( local_210 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_210 = 0;
         Memory::free_static((void*)( lVar25 + -0x10 ), false);
      }

   }

   lVar25 = local_220;
   if (local_220 != 0) {
      LOCK();
      plVar1 = (long*)( local_220 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_220 = 0;
         Memory::free_static((void*)( lVar25 + -0x10 ), false);
      }

   }

   goto LAB_00102590;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* FreeDesktopPortalDesktop::append_dbus_dict_options(DBusMessageIter*, TypedArray<Dictionary>
   const&, HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >&) */void FreeDesktopPortalDesktop::append_dbus_dict_options(DBusMessageIter *param_1, TypedArray *param_2, HashMap *param_3) {
   long *plVar1;
   uint uVar2;
   void *pvVar3;
   code *pcVar4;
   char *pcVar5;
   byte bVar6;
   char cVar7;
   int iVar8;
   Variant *this;
   CowData<char32_t> *this_00;
   long lVar9;
   int iVar10;
   long lVar11;
   long in_FS_OFFSET;
   char *local_2b8;
   Variant local_2b0[8];
   long local_2a8;
   long local_2a0;
   Variant local_298[8];
   long local_290;
   char *local_288;
   undefined8 local_280;
   undefined1 local_278[80];
   undefined1 local_228[80];
   undefined1 local_1d8[80];
   DBusMessageIter local_188[80];
   long local_138[10];
   long local_e8[10];
   int local_98[8];
   int local_78[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_2b8 = "choices";
   ( *_dbus_message_iter_open_container_dylibloader_wrapper_dbus )(param_1, 0x65, 0, local_278);
   ( *_dbus_message_iter_append_basic_dylibloader_wrapper_dbus )(local_278, 0x73, &local_2b8);
   ( *_dbus_message_iter_open_container_dylibloader_wrapper_dbus )(local_278, 0x76, "a(ssa(ss)s)", local_228);
   ( *_dbus_message_iter_open_container_dylibloader_wrapper_dbus )(local_228, 0x61, "(ss(ss)s)", local_1d8);
   if (( *(long*)( param_3 + 8 ) != 0 ) && ( *(int*)( param_3 + 0x2c ) != 0 )) {
      lVar11 = 0;
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_3 + 0x28 ) * 4 );
      if (uVar2 != 0) {
         do {
            if (*(int*)( *(long*)( param_3 + 0x10 ) + lVar11 ) != 0) {
               *(int*)( *(long*)( param_3 + 0x10 ) + lVar11 ) = 0;
               pvVar3 = *(void**)( *(long*)( param_3 + 8 ) + lVar11 * 2 );
               if (*(long*)( (long)pvVar3 + 0x18 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( (long)pvVar3 + 0x18 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar9 = *(long*)( (long)pvVar3 + 0x18 );
                     *(undefined8*)( (long)pvVar3 + 0x18 ) = 0;
                     Memory::free_static((void*)( lVar9 + -0x10 ), false);
                  }

               }

               if (*(long*)( (long)pvVar3 + 0x10 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( (long)pvVar3 + 0x10 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar9 = *(long*)( (long)pvVar3 + 0x10 );
                     *(undefined8*)( (long)pvVar3 + 0x10 ) = 0;
                     Memory::free_static((void*)( lVar9 + -0x10 ), false);
                  }

               }

               Memory::free_static(pvVar3, false);
               *(undefined8*)( *(long*)( param_3 + 8 ) + lVar11 * 2 ) = 0;
            }

            lVar11 = lVar11 + 4;
         }
 while ( (ulong)uVar2 << 2 != lVar11 );
      }

      *(undefined4*)( param_3 + 0x2c ) = 0;
      *(undefined1(*) [16])( param_3 + 0x18 ) = (undefined1[16])0x0;
   }

   iVar10 = 0;
   do {
      iVar8 = Array::size();
      if (iVar8 <= iVar10) {
         ( *_dbus_message_iter_close_container_dylibloader_wrapper_dbus )(local_228, local_1d8);
         ( *_dbus_message_iter_close_container_dylibloader_wrapper_dbus )(local_278, local_228);
         ( *_dbus_message_iter_close_container_dylibloader_wrapper_dbus )(param_1, local_278);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      Array::operator []((int)param_2);
      Variant::operator_cast_to_Dictionary(local_2b0);
      Variant::Variant((Variant*)local_98, "name");
      bVar6 = Dictionary::has(local_2b0);
      if (bVar6 == 0) {
         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

      }
 else {
         Variant::Variant((Variant*)local_78, "values");
         cVar7 = Dictionary::has(local_2b0);
         if (cVar7 != '\0') {
            Variant::Variant((Variant*)local_58, "default");
            bVar6 = Dictionary::has(local_2b0);
            bVar6 = bVar6 ^ 1;
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (bVar6 == 0) {
            Variant::Variant((Variant*)local_58, "name");
            Dictionary::operator [](local_2b0);
            Variant::operator_cast_to_String((Variant*)&local_2a8);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            Variant::Variant((Variant*)local_58, "values");
            Dictionary::operator [](local_2b0);
            Variant::operator_cast_to_Vector(local_298);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            Variant::Variant((Variant*)local_58, "default");
            this(Variant * Dictionary::operator [](local_2b0));
            iVar8 = Variant::operator_cast_to_int(this);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            ( *_dbus_message_iter_open_container_dylibloader_wrapper_dbus )(local_1d8, 0x72, 0, local_188);
            itos((long)local_138);
            operator+((char *)
            local_e8,(String*)"option_";
            append_dbus_string(local_188, (String*)local_e8);
            lVar11 = local_e8[0];
            if (local_e8[0] != 0) {
               LOCK();
               plVar1 = (long*)( local_e8[0] + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_e8[0] = 0;
                  Memory::free_static((void*)( lVar11 + -0x10 ), false);
               }

            }

            lVar11 = local_138[0];
            if (local_138[0] != 0) {
               LOCK();
               plVar1 = (long*)( local_138[0] + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_138[0] = 0;
                  Memory::free_static((void*)( lVar11 + -0x10 ), false);
               }

            }

            append_dbus_string(local_188, (String*)&local_2a8);
            itos((long)local_138);
            operator+((char *)
            local_e8,(String*)"option_";
            this_00 = (CowData<char32_t>*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator []((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)param_3, (String*)local_e8);
            if (*(long*)this_00 != local_2a8) {
               CowData<char32_t>::_ref(this_00, (CowData*)&local_2a8);
            }

            lVar11 = local_e8[0];
            if (local_e8[0] != 0) {
               LOCK();
               plVar1 = (long*)( local_e8[0] + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_e8[0] = 0;
                  Memory::free_static((void*)( lVar11 + -0x10 ), false);
               }

            }

            lVar11 = local_138[0];
            if (local_138[0] != 0) {
               LOCK();
               plVar1 = (long*)( local_138[0] + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_138[0] = 0;
                  Memory::free_static((void*)( lVar11 + -0x10 ), false);
               }

            }

            ( *_dbus_message_iter_open_container_dylibloader_wrapper_dbus )(local_188, 0x61, &_LC94, local_138);
            for (lVar11 = 0; ( local_290 != 0 && ( lVar11 < *(long*)( local_290 + -8 ) ) ); lVar11 = lVar11 + 1) {
               ( *_dbus_message_iter_open_container_dylibloader_wrapper_dbus )(local_138, 0x72, 0, (DBusMessageIter*)local_e8);
               itos((long)&local_288);
               append_dbus_string((DBusMessageIter*)local_e8, (String*)&local_288);
               pcVar5 = local_288;
               if (local_288 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_288 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_288 = (char*)0x0;
                     Memory::free_static(pcVar5 + -0x10, false);
                  }

               }

               if (local_290 == 0) {
                  lVar9 = 0;
                  LAB_001033a6:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar11, lVar9, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar4 = (code*)invalidInstructionException();
                  ( *pcVar4 )();
               }

               lVar9 = *(long*)( local_290 + -8 );
               if (lVar9 <= lVar11) goto LAB_001033a6;
               append_dbus_string((DBusMessageIter*)local_e8, (String*)( local_290 + lVar11 * 8 ));
               ( *_dbus_message_iter_close_container_dylibloader_wrapper_dbus )(local_138, (DBusMessageIter*)local_e8);
            }

            ( *_dbus_message_iter_close_container_dylibloader_wrapper_dbus )(local_188, local_138);
            if (local_290 == 0) {
               local_2a0 = 0;
               if (iVar8 == 0) {
                  local_280 = 5;
                  local_288 = "false";
               }
 else {
                  local_280 = 4;
                  local_288 = "true";
               }

               String::parse_latin1((StrRange*)&local_2a0);
               append_dbus_string(local_188, (String*)&local_2a0);
               lVar11 = local_2a0;
               if (local_2a0 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_2a0 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_2a0 = 0;
                     Memory::free_static((void*)( lVar11 + -0x10 ), false);
                  }

               }

            }
 else {
               itos((long)&local_288);
               append_dbus_string(local_188, (String*)&local_288);
               pcVar5 = local_288;
               if (local_288 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_288 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_288 = (char*)0x0;
                     Memory::free_static(pcVar5 + -0x10, false);
                  }

               }

            }

            ( *_dbus_message_iter_close_container_dylibloader_wrapper_dbus )(local_1d8);
            CowData<String>::_unref((CowData<String>*)&local_290);
            lVar11 = local_2a8;
            if (local_2a8 != 0) {
               LOCK();
               plVar1 = (long*)( local_2a8 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_2a8 = 0;
                  Memory::free_static((void*)( lVar11 + -0x10 ), false);
               }

            }

         }

      }

      iVar10 = iVar10 + 1;
      Dictionary::~Dictionary((Dictionary*)local_2b0);
   }
 while ( true );
}
/* CowData<FreeDesktopPortalDesktop::FileDialogData>::_copy_on_write() [clone .isra.0] */void CowData<FreeDesktopPortalDesktop::FileDialogData>::_copy_on_write(CowData<FreeDesktopPortalDesktop::FileDialogData> *this) {
   uint uVar1;
   long lVar2;
   code *pcVar3;
   CowData<char32_t> *pCVar4;
   long lVar5;
   CowData<char32_t> *pCVar6;
   long lVar7;
   ulong uVar8;
   long *plVar9;
   CowData<char32_t> *this_00;
   long in_FS_OFFSET;
   long local_70;
   String local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)this != 0 ) && ( 1 < *(ulong*)( *(long*)this + -0x10 ) )) {
      if (*(long*)this == 0) {
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar2 = *(long*)( *(long*)this + -8 );
      uVar8 = 0x10;
      if (lVar2 * 0x70 != 0) {
         uVar8 = lVar2 * 0x70 - 1;
         uVar8 = uVar8 | uVar8 >> 1;
         uVar8 = uVar8 | uVar8 >> 2;
         uVar8 = uVar8 | uVar8 >> 4;
         uVar8 = uVar8 | uVar8 >> 8;
         uVar8 = uVar8 | uVar8 >> 0x10;
         uVar8 = ( uVar8 | uVar8 >> 0x20 ) + 0x11;
      }

      pCVar6 = (CowData<char32_t>*)Memory::alloc_static(uVar8, false);
      if (pCVar6 == (CowData<char32_t>*)0x0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
            return;
         }

         goto LAB_001039f4;
      }

      *(undefined8*)pCVar6 = 1;
      *(long*)( pCVar6 + 8 ) = lVar2;
      if (lVar2 != 0) {
         local_70 = 0;
         pCVar4 = pCVar6;
         do {
            this_00 = pCVar4 + 0x70;
            lVar5 = *(long*)this + ( -0x70 - (long)pCVar6 );
            *(undefined8*)( pCVar4 + 0x18 ) = 0;
            if (*(long*)( this_00 + lVar5 + 8 ) != 0) {
               CowData<String>::_ref((CowData<String>*)( pCVar4 + 0x18 ), (CowData*)( this_00 + lVar5 + 8 ));
            }

            uVar1 = *(uint*)( this_00 + lVar5 + 0x38 );
            *(undefined8*)( pCVar4 + 0x48 ) = 0;
            *(undefined1(*) [16])( pCVar4 + 0x28 ) = (undefined1[16])0x0;
            uVar1 = *(uint*)( hash_table_size_primes + (ulong)uVar1 * 4 );
            *(undefined1(*) [16])( pCVar4 + 0x38 ) = (undefined1[16])0x0;
            lVar7 = 1;
            if (5 < uVar1) {
               do {
                  if (uVar1 <= *(uint*)( hash_table_size_primes + lVar7 * 4 )) {
                     *(int*)( pCVar4 + 0x48 ) = (int)lVar7;
                     goto LAB_001038d0;
                  }

                  lVar7 = lVar7 + 1;
               }
 while ( lVar7 != 0x1d );
               _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
            }

            LAB_001038d0:if (( *(int*)( this_00 + lVar5 + 0x3c ) != 0 ) && ( plVar9 = *(long**)( this_00 + lVar5 + 0x28 ) ),plVar9 != (long*)0x0) {
               do {
                  HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::insert(local_48, (String*)( pCVar4 + 0x20 ), (bool)( (char)plVar9 + '\x10' ));
                  plVar9 = (long*)*plVar9;
               }
 while ( plVar9 != (long*)0x0 );
            }

            *(undefined4*)( pCVar4 + 0x50 ) = *(undefined4*)( this_00 + lVar5 + 0x40 );
            Callable::Callable((Callable*)( pCVar4 + 0x58 ), (Callable*)( this_00 + lVar5 + 0x48 ));
            *(undefined8*)( pCVar4 + 0x68 ) = 0;
            if (*(long*)( this_00 + lVar5 + 0x58 ) != 0) {
               CowData<char32_t>::_ref(pCVar4 + 0x68, (CowData*)( this_00 + lVar5 + 0x58 ));
            }

            *(undefined8*)this_00 = 0;
            if (*(long*)( this_00 + lVar5 + 0x60 ) != 0) {
               CowData<char32_t>::_ref(this_00, (CowData*)( this_00 + lVar5 + 0x60 ));
            }

            local_70 = local_70 + 1;
            pCVar4[0x78] = this_00[lVar5 + 0x68];
            pCVar4 = this_00;
         }
 while ( lVar2 != local_70 );
      }

      _unref(this);
      *(CowData<char32_t>**)this = pCVar6 + 0x10;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001039f4:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* FreeDesktopPortalDesktop::~FreeDesktopPortalDesktop() */void FreeDesktopPortalDesktop::~FreeDesktopPortalDesktop(FreeDesktopPortalDesktop *this) {
   long *plVar1;
   CowData<FreeDesktopPortalDesktop::FileDialogData> *this_00;
   Callable *this_01;
   long lVar2;
   code *pcVar3;
   char cVar4;
   undefined8 uVar5;
   long lVar6;
   undefined8 *puVar7;
   long lVar8;
   long in_FS_OFFSET;
   long local_70;
   undefined1 local_68[40];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__initialize_classv_0010c300;
   this[0x1c8] = (FreeDesktopPortalDesktop)0x1;
   cVar4 = Thread::is_started();
   if (cVar4 != '\0') {
      Thread::wait_to_finish();
   }

   this_00 = (CowData<FreeDesktopPortalDesktop::FileDialogData>*)( this + 0x1b0 );
   if (*(long*)( this + 0x1d0 ) != 0) {
      CowData<FreeDesktopPortalDesktop::FileDialogData>::_copy_on_write(this_00);
      lVar6 = *(long*)( this + 0x1b0 );
      CowData<FreeDesktopPortalDesktop::FileDialogData>::_copy_on_write(this_00);
      lVar8 = *(long*)( this + 0x1b0 );
      if (lVar8 != 0) {
         lVar8 = lVar8 + *(long*)( lVar8 + -8 ) * 0x70;
      }

      lVar2 = local_70;
      for (; lVar6 != lVar8; lVar6 = lVar6 + 0x70) {
         ( *_dbus_error_init_dylibloader_wrapper_dbus )(local_68);
         pcVar3 = _dbus_bus_remove_match_dylibloader_wrapper_dbus;
         String::utf8();
         uVar5 = CharString::get_data();
         ( *pcVar3 )(*(undefined8*)( this + 0x1d0 ), uVar5, local_68);
         local_70 = lVar2;
         if (lVar2 != 0) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_70 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         ( *_dbus_error_free_dylibloader_wrapper_dbus )(local_68);
         lVar2 = local_70;
      }

      ( *_dbus_error_init_dylibloader_wrapper_dbus )(local_68);
      pcVar3 = _dbus_bus_remove_match_dylibloader_wrapper_dbus;
      String::utf8();
      uVar5 = CharString::get_data();
      ( *pcVar3 )(*(undefined8*)( this + 0x1d0 ), uVar5, local_68);
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      ( *_dbus_error_free_dylibloader_wrapper_dbus )(local_68);
      ( *_dbus_connection_unref_dylibloader_wrapper_dbus )(*(undefined8*)( this + 0x1d0 ));
   }

   Callable::~Callable((Callable*)( this + 0x1e0 ));
   if (*(long*)( this + 0x1d8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x1d8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar6 = *(long*)( this + 0x1d8 );
         *(undefined8*)( this + 0x1d8 ) = 0;
         Memory::free_static((void*)( lVar6 + -0x10 ), false);
      }

   }

   Thread::~Thread((Thread*)( this + 0x1b8 ));
   CowData<FreeDesktopPortalDesktop::FileDialogData>::_unref(this_00);
   puVar7 = *(undefined8**)( this + 0x178 );
   if (puVar7 != (undefined8*)0x0) {
      do {
         this_01 = (Callable*)*puVar7;
         if (this_01 == (Callable*)0x0) {
            if (*(int*)( puVar7 + 2 ) != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_00103ca7;
            }

            break;
         }

         if (*(undefined8**)( this_01 + 0x88 ) == puVar7) {
            *puVar7 = *(undefined8*)( this_01 + 0x78 );
            if (this_01 == (Callable*)puVar7[1]) {
               puVar7[1] = *(undefined8*)( this_01 + 0x80 );
            }

            if (*(long*)( this_01 + 0x80 ) != 0) {
               *(undefined8*)( *(long*)( this_01 + 0x80 ) + 0x78 ) = *(undefined8*)( this_01 + 0x78 );
            }

            if (*(long*)( this_01 + 0x78 ) != 0) {
               *(undefined8*)( *(long*)( this_01 + 0x78 ) + 0x80 ) = *(undefined8*)( this_01 + 0x80 );
            }

            for (int i = 0; i < 4; i++) {
               if (Variant::needs_deinit[*(int*)( this_01 + ( -24*i + 88 ) )] != '\0') {
                  Variant::_clear_internal();
               }

            }

            Callable::~Callable(this_01);
            Memory::free_static(this_01, false);
            *(int*)( puVar7 + 2 ) = *(int*)( puVar7 + 2 ) + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         puVar7 = *(undefined8**)( this + 0x178 );
      }
 while ( *(int*)( puVar7 + 2 ) != 0 );
      Memory::free_static(puVar7, false);
   }

   LAB_00103ca7:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   Object::~Object((Object*)this);
   return;
}
/* FreeDesktopPortalDesktop::~FreeDesktopPortalDesktop() */void FreeDesktopPortalDesktop::~FreeDesktopPortalDesktop(FreeDesktopPortalDesktop *this) {
   ~FreeDesktopPortalDesktop(this)
   ;;
   operator_delete(this, 0x1f0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* FreeDesktopPortalDesktop::_thread_monitor(void*) */void FreeDesktopPortalDesktop::_thread_monitor(void *param_1) {
   undefined8 *puVar1;
   void *pvVar2;
   code *pcVar3;
   char cVar4;
   int iVar5;
   uint uVar6;
   CowData<FreeDesktopPortalDesktop::FileDialogData> *this;
   long *plVar7;
   long lVar8;
   undefined8 uVar9;
   CallableCustom *pCVar11;
   Callable *this_00;
   undefined1(*pauVar12)[16];
   long lVar13;
   long lVar14;
   uint uVar15;
   Vector *pVVar16;
   HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>> *this_01;
   long lVar17;
   long lVar18;
   long in_FS_OFFSET;
   Callable *local_1b8;
   bool local_16d;
   int local_16c;
   long local_168;
   long local_160;
   long local_158;
   undefined8 local_150;
   Callable local_148[32];
   DBusMessageIter local_128[80];
   Variant *local_d8;
   undefined8 local_d0;
   undefined8 uStack_c8;
   undefined8 local_b8;
   undefined8 local_b0;
   int local_a8[2];
   undefined1 local_a0[16];
   int local_90[2];
   undefined1 local_88[16];
   int local_78[2];
   undefined1 local_70[16];
   int local_60[2];
   undefined1 local_58[16];
   Callable local_48;
   long local_40;
   ulong uVar10;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this(CowData<FreeDesktopPortalDesktop::FileDialogData> * )((long)param_1 + 0x1b0);
   do {
      if (*(char*)( (long)param_1 + 0x1c8 ) != '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      if (*(long*)( (long)param_1 + 0x1d0 ) != 0) {
         lVar8 = ( *_dbus_connection_pop_message_dylibloader_wrapper_dbus )();
         while (lVar8 != 0) {
            iVar5 = ( *_dbus_message_is_signal_dylibloader_wrapper_dbus )(lVar8, "org.freedesktop.portal.Settings", "SettingChanged");
            if (iVar5 == 0) {
               iVar5 = ( *_dbus_message_is_signal_dylibloader_wrapper_dbus )(lVar8, "org.freedesktop.portal.Request", "Response");
               if (iVar5 != 0) {
                  iVar5 = ( *_dbus_message_get_path_dylibloader_wrapper_dbus )(lVar8);
                  String::utf8((char*)&local_168, iVar5);
                  iVar5 = pthread_mutex_lock((pthread_mutex_t*)( (long)param_1 + 0x180 ));
                  if (iVar5 != 0) {
                     /* WARNING: Subroutine does not return */
                     std::__throw_system_error(iVar5);
                  }

                  lVar17 = *(long*)( (long)param_1 + 0x1b0 );
                  lVar14 = 0;
                  lVar18 = 0;
                  while (true) {
                     if (( lVar17 == 0 ) || ( *(long*)( lVar17 + -8 ) <= lVar14 )) goto LAB_001040c3;
                     CowData<FreeDesktopPortalDesktop::FileDialogData>::_copy_on_write(this);
                     pVVar16 = (Vector*)( *(long*)( (long)param_1 + 0x1b0 ) + lVar18 );
                     cVar4 = String::operator ==((String*)( pVVar16 + 0x60 ), (String*)&local_168);
                     if (cVar4 != '\0') break;
                     lVar17 = *(long*)( (long)param_1 + 0x1b0 );
                     lVar14 = lVar14 + 1;
                     lVar18 = lVar18 + 0x70;
                  }
;
                  iVar5 = ( *_dbus_message_iter_init_dylibloader_wrapper_dbus )(lVar8, local_128);
                  if (iVar5 != 0) {
                     local_16d = false;
                     local_150 = 0;
                     Dictionary::Dictionary((Dictionary*)&local_160);
                     local_16c = 0;
                     file_chooser_parse_response(local_128, pVVar16, (HashMap*)( pVVar16 + 0x10 ), &local_16d, (Vector*)&local_158, &local_16c, (Dictionary*)&local_160);
                     cVar4 = Callable::is_valid();
                     if (cVar4 != '\0') {
                        local_b8 = 0;
                        local_a0 = (undefined1[16])0x0;
                        local_88 = (undefined1[16])0x0;
                        local_70 = (undefined1[16])0x0;
                        local_58 = (undefined1[16])0x0;
                        local_b0 = 0;
                        local_a8[0] = 0;
                        local_90[0] = 0;
                        local_78[0] = 0;
                        local_60[0] = 0;
                        local_48 = (Callable)0x0;
                        Callable::operator =((Callable*)&local_b8, (Callable*)( pVVar16 + 0x48 ));
                        Variant::Variant((Variant*)&local_d8, (bool)( local_16d ^ 1 ));
                        if (Variant::needs_deinit[local_a8[0]] != '\0') {
                           Variant::_clear_internal();
                        }

                        local_a8[0] = (int)local_d8;
                        local_a0._8_8_ = uStack_c8;
                        local_a0._0_8_ = local_d0;
                        Variant::Variant((Variant*)&local_d8, (Vector*)&local_158);
                        if (Variant::needs_deinit[local_90[0]] != '\0') {
                           Variant::_clear_internal();
                        }

                        local_90[0] = (int)local_d8;
                        Variant::Variant((Variant*)&local_d8, local_16c);
                        if (Variant::needs_deinit[local_78[0]] != '\0') {
                           Variant::_clear_internal();
                        }

                        local_78[0] = (int)local_d8;
                        Variant::Variant((Variant*)&local_d8, (Dictionary*)&local_160);
                        if (Variant::needs_deinit[local_60[0]] != '\0') {
                           Variant::_clear_internal();
                        }

                        local_60[0] = (int)local_d8;
                        local_48 = *(Callable*)( pVVar16 + 0x68 );
                        if (*(long*)( (long)param_1 + 0x178 ) == 0) {
                           pauVar12 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                           *(undefined1(**) [16])( (long)param_1 + 0x178 ) = pauVar12;
                           *(undefined4*)pauVar12[1] = 0;
                           *pauVar12 = (undefined1[16])0x0;
                        }

                        this_00 = (Callable*)operator_new(0x90, DefaultAllocator::alloc);
                        *(undefined8*)this_00 = 0;
                        *(undefined8*)( this_00 + 8 ) = 0;
                        for (int i = 0; i < 4; i++) {
                           *(undefined4*)( this_00 + ( 24*i + 16 ) ) = 0;
                        }

                        this_00[0x70] = (Callable)0x0;
                        *(undefined8*)( this_00 + 0x88 ) = 0;
                        for (int i = 0; i < 5; i++) {
                           *(undefined1(*) [16])( this_00 + ( 24*i + 24 ) ) = (undefined1[16])0;
                        }

                        Callable::operator =(this_00, (Callable*)&local_b8);
                        Variant::operator =((Variant*)( this_00 + 0x10 ), (Variant*)local_a8);
                        Variant::operator =((Variant*)( this_00 + 0x28 ), (Variant*)local_90);
                        Variant::operator =((Variant*)( this_00 + 0x40 ), (Variant*)local_78);
                        Variant::operator =((Variant*)( this_00 + 0x58 ), (Variant*)local_60);
                        this_00[0x70] = local_48;
                        uVar9 = *(undefined8*)( *(long*)( (long)param_1 + 0x178 ) + 8 );
                        *(long*)( this_00 + 0x88 ) = *(long*)( (long)param_1 + 0x178 );
                        plVar7 = *(long**)( (long)param_1 + 0x178 );
                        *(undefined8*)( this_00 + 0x78 ) = 0;
                        *(undefined8*)( this_00 + 0x80 ) = uVar9;
                        if (plVar7[1] != 0) {
                           *(Callable**)( plVar7[1] + 0x78 ) = this_00;
                        }

                        plVar7[1] = (long)this_00;
                        if (*plVar7 == 0) {
                           *plVar7 = (long)this_00;
                        }

                        *(int*)( plVar7 + 2 ) = (int)plVar7[2] + 1;
                        if (Variant::needs_deinit[local_60[0]] != '\0') {
                           Variant::_clear_internal();
                        }

                        if (Variant::needs_deinit[local_78[0]] != '\0') {
                           Variant::_clear_internal();
                        }

                        if (Variant::needs_deinit[local_90[0]] != '\0') {
                           Variant::_clear_internal();
                        }

                        if (Variant::needs_deinit[local_a8[0]] != '\0') {
                           Variant::_clear_internal();
                        }

                        Callable::~Callable((Callable*)&local_b8);
                     }

                     lVar17 = DisplayServer::singleton;
                     if (*(int*)( pVVar16 + 0x40 ) != -1) {
                        pCVar11 = (CallableCustom*)operator_new(0x48, "");
                        CallableCustom::CallableCustom(pCVar11);
                        *(undefined1(*) [16])( pCVar11 + 0x30 ) = (undefined1[16])0x0;
                        *(undefined***)pCVar11 = &PTR_hash_0010c4f0;
                        *(undefined8*)( pCVar11 + 0x40 ) = 0;
                        uVar9 = *(undefined8*)( lVar17 + 0x60 );
                        *(undefined**)( pCVar11 + 0x20 ) = &_LC39;
                        *(long*)( pCVar11 + 0x28 ) = lVar17;
                        *(undefined8*)( pCVar11 + 0x30 ) = uVar9;
                        *(undefined8*)( pCVar11 + 0x10 ) = 0;
                        *(undefined8*)( pCVar11 + 0x38 ) = 0x5d9;
                        CallableCustomMethodPointerBase::_setup((uint*)pCVar11, (int)pCVar11 + 0x28);
                        *(char**)( pCVar11 + 0x20 ) = "DisplayServer::window_move_to_foreground";
                        Callable::Callable(local_148, pCVar11);
                        Variant::Variant((Variant*)&local_b8, *(int*)( pVVar16 + 0x40 ));
                        Variant::Variant((Variant*)local_a0, 0);
                        local_d8 = (Variant*)&local_b8;
                        Callable::call_deferredp((Variant**)local_148, (int)&local_d8);
                        if (Variant::needs_deinit[(int)local_a0._0_4_] != '\0') {
                           Variant::_clear_internal();
                        }

                        local_1b8 = local_148;
                        if (Variant::needs_deinit[(int)local_b8] != '\0') {
                           Variant::_clear_internal();
                        }

                        Callable::~Callable(local_1b8);
                     }

                     Dictionary::~Dictionary((Dictionary*)&local_160);
                     CowData<String>::_unref((CowData<String>*)&local_150);
                  }

                  local_1b8 = local_148;
                  ( *_dbus_error_init_dylibloader_wrapper_dbus )(local_1b8);
                  pcVar3 = _dbus_bus_remove_match_dylibloader_wrapper_dbus;
                  String::utf8();
                  uVar9 = CharString::get_data();
                  ( *pcVar3 )(*(undefined8*)( (long)param_1 + 0x1d0 ), uVar9, local_1b8);
                  lVar17 = local_158;
                  if (local_158 != 0) {
                     LOCK();
                     plVar7 = (long*)( local_158 + -0x10 );
                     *plVar7 = *plVar7 + -1;
                     UNLOCK();
                     if (*plVar7 == 0) {
                        local_158 = 0;
                        Memory::free_static((void*)( lVar17 + -0x10 ), false);
                     }

                  }

                  ( *_dbus_error_free_dylibloader_wrapper_dbus )(local_1b8);
                  if (*(long*)( (long)param_1 + 0x1b0 ) == 0) {
                     lVar17 = 0;
                     LAB_00104b9e:_err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, lVar14, lVar17, "p_index", "size()", "", false, false);
                  }
 else {
                     lVar17 = *(long*)( *(long*)( (long)param_1 + 0x1b0 ) + -8 );
                     if (lVar17 <= lVar14) goto LAB_00104b9e;
                     CowData<FreeDesktopPortalDesktop::FileDialogData>::_copy_on_write(this);
                     lVar17 = *(long*)( (long)param_1 + 0x1b0 );
                     if (lVar17 == 0) {
                        CowData<FreeDesktopPortalDesktop::FileDialogData>::resize<false>(this, -1);
                     }
 else {
                        lVar18 = *(long*)( lVar17 + -8 ) + -1;
                        if (lVar14 < lVar18) {
                           this_01 = (HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)( lVar17 + 0x10 + lVar14 * 0x70 );
                           do {
                              if (*(long*)( this_01 + -8 ) != *(long*)( this_01 + 0x68 )) {
                                 CowData<String>::_unref((CowData<String>*)( this_01 + -8 ));
                                 uVar9 = *(undefined8*)( this_01 + 0x68 );
                                 *(undefined8*)( this_01 + 0x68 ) = 0;
                                 *(undefined8*)( this_01 + -8 ) = uVar9;
                              }

                              uVar15 = *(uint*)( this_01 + 0x28 );
                              uVar6 = *(uint*)( hash_table_size_primes + (ulong)uVar15 * 4 );
                              if (( *(int*)( this_01 + 0x2c ) != 0 ) && ( *(long*)( this_01 + 8 ) != 0 )) {
                                 if (uVar6 != 0) {
                                    lVar17 = 0;
                                    do {
                                       if (*(int*)( *(long*)( this_01 + 0x10 ) + lVar17 ) != 0) {
                                          *(int*)( *(long*)( this_01 + 0x10 ) + lVar17 ) = 0;
                                          pvVar2 = *(void**)( *(long*)( this_01 + 8 ) + lVar17 * 2 );
                                          if (*(long*)( (long)pvVar2 + 0x18 ) != 0) {
                                             LOCK();
                                             plVar7 = (long*)( *(long*)( (long)pvVar2 + 0x18 ) + -0x10 );
                                             *plVar7 = *plVar7 + -1;
                                             UNLOCK();
                                             if (*plVar7 == 0) {
                                                lVar13 = *(long*)( (long)pvVar2 + 0x18 );
                                                *(undefined8*)( (long)pvVar2 + 0x18 ) = 0;
                                                Memory::free_static((void*)( lVar13 + -0x10 ), false);
                                             }

                                          }

                                          if (*(long*)( (long)pvVar2 + 0x10 ) != 0) {
                                             LOCK();
                                             plVar7 = (long*)( *(long*)( (long)pvVar2 + 0x10 ) + -0x10 );
                                             *plVar7 = *plVar7 + -1;
                                             UNLOCK();
                                             if (*plVar7 == 0) {
                                                lVar13 = *(long*)( (long)pvVar2 + 0x10 );
                                                *(undefined8*)( (long)pvVar2 + 0x10 ) = 0;
                                                Memory::free_static((void*)( lVar13 + -0x10 ), false);
                                             }

                                          }

                                          Memory::free_static(pvVar2, false);
                                          *(undefined8*)( *(long*)( this_01 + 8 ) + lVar17 * 2 ) = 0;
                                       }

                                       lVar17 = lVar17 + 4;
                                    }
 while ( lVar17 != (ulong)uVar6 * 4 );
                                    uVar15 = *(uint*)( this_01 + 0x28 );
                                    uVar6 = *(uint*)( hash_table_size_primes + (ulong)uVar15 * 4 );
                                 }

                                 *(undefined4*)( this_01 + 0x2c ) = 0;
                                 *(undefined1(*) [16])( this_01 + 0x18 ) = (undefined1[16])0x0;
                              }

                              if (uVar6 < *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this_01 + 0x98 ) * 4 )) {
                                 if (uVar15 != 0x1c) {
                                    uVar10 = (ulong)uVar15;
                                    do {
                                       uVar6 = (int)uVar10 + 1;
                                       uVar10 = (ulong)uVar6;
                                       if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this_01 + 0x98 ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar10 * 4 )) {
                                          if (uVar15 != uVar6) {
                                             if (*(long*)( this_01 + 8 ) == 0) {
                                                *(uint*)( this_01 + 0x28 ) = uVar6;
                                             }
 else {
                                                HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::_resize_and_rehash(this_01, uVar6);
                                             }

                                          }

                                          goto LAB_001043e2;
                                       }

                                    }
 while ( uVar6 != 0x1c );
                                 }

                                 _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
                              }

                              LAB_001043e2:if (*(long*)( this_01 + 0x78 ) != 0) {
                                 for (puVar1 = *(undefined8**)( this_01 + 0x88 ); puVar1 != (undefined8*)0x0; puVar1 = (undefined8*)*puVar1) {
                                    HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::insert((String*)&local_158, (String*)this_01, (bool)( (char)puVar1 + '\x10' ));
                                 }

                              }

                              *(undefined4*)( this_01 + 0x30 ) = *(undefined4*)( this_01 + 0xa0 );
                              Callable::operator =((Callable*)( this_01 + 0x38 ), (Callable*)( this_01 + 0xa8 ));
                              lVar17 = *(long*)( this_01 + 0x48 );
                              lVar13 = *(long*)( this_01 + 0xb8 );
                              if (lVar17 != lVar13) {
                                 if (lVar17 != 0) {
                                    LOCK();
                                    plVar7 = (long*)( lVar17 + -0x10 );
                                    *plVar7 = *plVar7 + -1;
                                    UNLOCK();
                                    if (*plVar7 == 0) {
                                       lVar17 = *(long*)( this_01 + 0x48 );
                                       *(undefined8*)( this_01 + 0x48 ) = 0;
                                       Memory::free_static((void*)( lVar17 + -0x10 ), false);
                                    }

                                    lVar13 = *(long*)( this_01 + 0xb8 );
                                 }

                                 *(long*)( this_01 + 0x48 ) = lVar13;
                                 *(undefined8*)( this_01 + 0xb8 ) = 0;
                              }

                              lVar17 = *(long*)( this_01 + 0x50 );
                              lVar13 = *(long*)( this_01 + 0xc0 );
                              if (lVar17 != lVar13) {
                                 if (lVar17 != 0) {
                                    LOCK();
                                    plVar7 = (long*)( lVar17 + -0x10 );
                                    *plVar7 = *plVar7 + -1;
                                    UNLOCK();
                                    if (*plVar7 == 0) {
                                       lVar17 = *(long*)( this_01 + 0x50 );
                                       *(undefined8*)( this_01 + 0x50 ) = 0;
                                       Memory::free_static((void*)( lVar17 + -0x10 ), false);
                                    }

                                    lVar13 = *(long*)( this_01 + 0xc0 );
                                 }

                                 *(long*)( this_01 + 0x50 ) = lVar13;
                                 *(undefined8*)( this_01 + 0xc0 ) = 0;
                              }

                              lVar14 = lVar14 + 1;
                              this_01[0x58] = this_01[200];
                              this_01 = this_01 + 0x70;
                           }
 while ( lVar18 != lVar14 );
                        }

                        CowData<FreeDesktopPortalDesktop::FileDialogData>::resize<false>(this, lVar18);
                     }

                  }

                  LAB_001040c3:pthread_mutex_unlock((pthread_mutex_t*)( (long)param_1 + 0x180 ));
                  lVar17 = local_168;
                  if (local_168 != 0) {
                     LOCK();
                     plVar7 = (long*)( local_168 + -0x10 );
                     *plVar7 = *plVar7 + -1;
                     UNLOCK();
                     if (*plVar7 == 0) {
                        local_168 = 0;
                        Memory::free_static((void*)( lVar17 + -0x10 ), false);
                     }

                  }

               }

            }
 else {
               iVar5 = ( *_dbus_message_iter_init_dylibloader_wrapper_dbus )(lVar8, local_128);
               if (iVar5 != 0) {
                  ( *_dbus_message_iter_get_basic_dylibloader_wrapper_dbus )(local_128, &local_168);
                  String::utf8((char*)&local_160, (int)local_168);
                  ( *_dbus_message_iter_next_dylibloader_wrapper_dbus )(local_128);
                  ( *_dbus_message_iter_get_basic_dylibloader_wrapper_dbus )(local_128, &local_168);
                  String::utf8((char*)&local_158, (int)local_168);
                  cVar4 = String::operator ==((String*)&local_160, "org.freedesktop.appearance");
                  if (( cVar4 != '\0' ) && ( cVar4 = String::operator ==((String*)&local_158, "color-scheme") ),cVar4 != '\0') {
                     pCVar11 = (CallableCustom*)operator_new(0x48, "");
                     CallableCustom::CallableCustom(pCVar11);
                     *(undefined8*)( pCVar11 + 0x40 ) = 0;
                     *(undefined***)pCVar11 = &PTR_hash_0010c460;
                     *(undefined1(*) [16])( pCVar11 + 0x30 ) = (undefined1[16])0x0;
                     *(void**)( pCVar11 + 0x28 ) = param_1;
                     uVar9 = *(undefined8*)( (long)param_1 + 0x60 );
                     *(undefined8*)( pCVar11 + 0x10 ) = 0;
                     *(undefined8*)( pCVar11 + 0x30 ) = uVar9;
                     *(code**)( pCVar11 + 0x38 ) = _system_theme_changed_callback;
                     *(undefined**)( pCVar11 + 0x20 ) = &_LC39;
                     CallableCustomMethodPointerBase::_setup((uint*)pCVar11, (int)pCVar11 + 0x28);
                     *(char**)( pCVar11 + 0x20 ) = "FreeDesktopPortalDesktop::_system_theme_changed_callback";
                     Callable::Callable(local_148, pCVar11);
                     Variant::Variant((Variant*)&local_b8, 0);
                     Callable::call_deferredp((Variant**)local_148, 0);
                     if (Variant::needs_deinit[(int)local_b8] != '\0') {
                        Variant::_clear_internal();
                     }

                     Callable::~Callable(local_148);
                  }

                  lVar17 = local_158;
                  if (local_158 != 0) {
                     LOCK();
                     plVar7 = (long*)( local_158 + -0x10 );
                     *plVar7 = *plVar7 + -1;
                     UNLOCK();
                     if (*plVar7 == 0) {
                        local_158 = 0;
                        Memory::free_static((void*)( lVar17 + -0x10 ), false);
                     }

                  }

                  lVar17 = local_160;
                  if (local_160 != 0) {
                     LOCK();
                     plVar7 = (long*)( local_160 + -0x10 );
                     *plVar7 = *plVar7 + -1;
                     UNLOCK();
                     if (*plVar7 == 0) {
                        local_160 = 0;
                        Memory::free_static((void*)( lVar17 + -0x10 ), false);
                     }

                  }

               }

            }

            ( *_dbus_message_unref_dylibloader_wrapper_dbus )(lVar8);
            lVar8 = ( *_dbus_connection_pop_message_dylibloader_wrapper_dbus )(*(undefined8*)( (long)param_1 + 0x1d0 ));
         }
;
         ( *_dbus_connection_read_write_dylibloader_wrapper_dbus )(*(undefined8*)( (long)param_1 + 0x1d0 ), 0);
      }

      plVar7 = (long*)OS::get_singleton();
      ( **(code**)( *plVar7 + 0x1f8 ) )(plVar7);
   }
 while ( true );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* FreeDesktopPortalDesktop::file_dialog_show(int, String const&, String const&, String const&,
   String const&, String const&, DisplayServer::FileDialogMode, Vector<String> const&,
   TypedArray<Dictionary> const&, Callable const&, bool) */int FreeDesktopPortalDesktop::file_dialog_show(FreeDesktopPortalDesktop *this, undefined4 param_1, String *param_2, String *param_3, String *param_4, undefined8 param_6_00, String *param_6, uint param_8, long param_9, TypedArray *param_10, Callable *param_11, undefined1 param_12) {
   uint uVar1;
   code *pcVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   char cVar6;
   int iVar7;
   undefined8 uVar8;
   long lVar9;
   ulong uVar10;
   char *pcVar11;
   long lVar12;
   void *pvVar13;
   long *plVar14;
   long in_FS_OFFSET;
   bool bVar15;
   char *local_250;
   long local_248;
   char *local_240;
   long local_238;
   long local_230;
   Vector<String> local_228[8];
   long local_220;
   Vector<String> local_218[8];
   undefined8 local_210;
   Vector<String> local_208[8];
   undefined8 local_200;
   long local_1f8[2];
   char *local_1e8;
   undefined8 local_1e0;
   long local_1d8[4];
   char *local_1b8;
   undefined8 local_1b0;
   long local_168;
   long local_160;
   HashMap local_158[8];
   undefined1 local_150[16];
   undefined1 local_140[16];
   undefined8 local_130;
   undefined4 local_128;
   undefined8 local_120;
   undefined8 local_118;
   undefined1 local_110[16];
   undefined1 local_100;
   char *local_f8;
   long local_f0;
   String local_e8[8];
   undefined1 local_e0[16];
   undefined1 local_d0[16];
   ulong local_c0;
   undefined4 local_b8;
   Callable local_b0[16];
   long local_a0;
   long local_98;
   undefined1 local_90;
   undefined1 local_88[72];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0x171] == (FreeDesktopPortalDesktop)0x0) {
      if (param_8 < 5) {
         if (*(long*)( this + 0x1d0 ) != 0) {
            lVar9 = *(long*)( param_9 + 8 );
            lVar12 = 0;
            local_220 = 0;
            local_210 = 0;
            local_200 = 0;
            if (lVar9 == 0) {
               LAB_00104dba:local_168 = 0;
               local_f0 = 1;
               local_f8 = "*";
               String::parse_latin1((StrRange*)&local_168);
               Vector<String>::push_back(local_218);
               lVar9 = local_168;
               if (local_168 != 0) {
                  LOCK();
                  plVar14 = (long*)( local_168 + -0x10 );
                  *plVar14 = *plVar14 + -1;
                  UNLOCK();
                  if (*plVar14 == 0) {
                     local_168 = 0;
                     Memory::free_static((void*)( lVar9 + -0x10 ), false);
                  }

               }

               local_168 = 0;
               local_f8 = "";
               local_f0 = 0;
               String::parse_latin1((StrRange*)&local_168);
               Vector<String>::push_back(local_208);
               lVar9 = local_168;
               if (local_168 != 0) {
                  LOCK();
                  plVar14 = (long*)( local_168 + -0x10 );
                  *plVar14 = *plVar14 + -1;
                  UNLOCK();
                  if (*plVar14 == 0) {
                     local_168 = 0;
                     Memory::free_static((void*)( lVar9 + -0x10 ), false);
                  }

               }

               local_168 = 0;
               local_f8 = " (*.*)";
               local_f0 = 6;
               String::parse_latin1((StrRange*)&local_168);
               local_1d8[0] = 0;
               local_f8 = "";
               local_f0 = 0;
               String::parse_latin1((StrRange*)local_1d8);
               local_1e8 = (char*)0x0;
               local_f8 = "All Files";
               local_f0 = 9;
               String::parse_latin1((StrRange*)&local_1e8);
               RTR((String*)&local_1b8, (String*)&local_1e8);
               String::operator +((String*)&local_f8, (String*)&local_1b8);
               Vector<String>::push_back(local_228);
               pcVar11 = local_f8;
               if (local_f8 != (char*)0x0) {
                  LOCK();
                  plVar14 = (long*)( local_f8 + -0x10 );
                  *plVar14 = *plVar14 + -1;
                  UNLOCK();
                  if (*plVar14 == 0) {
                     local_f8 = (char*)0x0;
                     Memory::free_static(pcVar11 + -0x10, false);
                  }

               }

               pcVar11 = local_1b8;
               if (local_1b8 != (char*)0x0) {
                  LOCK();
                  plVar14 = (long*)( local_1b8 + -0x10 );
                  *plVar14 = *plVar14 + -1;
                  UNLOCK();
                  if (*plVar14 == 0) {
                     local_1b8 = (char*)0x0;
                     Memory::free_static(pcVar11 + -0x10, false);
                  }

               }

               pcVar11 = local_1e8;
               if (local_1e8 != (char*)0x0) {
                  LOCK();
                  plVar14 = (long*)( local_1e8 + -0x10 );
                  *plVar14 = *plVar14 + -1;
                  UNLOCK();
                  if (*plVar14 == 0) {
                     local_1e8 = (char*)0x0;
                     Memory::free_static(pcVar11 + -0x10, false);
                  }

               }

               lVar9 = local_1d8[0];
               if (local_1d8[0] != 0) {
                  LOCK();
                  plVar14 = (long*)( local_1d8[0] + -0x10 );
                  *plVar14 = *plVar14 + -1;
                  UNLOCK();
                  if (*plVar14 == 0) {
                     local_1d8[0] = 0;
                     Memory::free_static((void*)( lVar9 + -0x10 ), false);
                  }

               }

               lVar9 = local_168;
               if (local_168 != 0) {
                  LOCK();
                  plVar14 = (long*)( local_168 + -0x10 );
                  *plVar14 = *plVar14 + -1;
                  UNLOCK();
                  if (*plVar14 == 0) {
                     local_168 = 0;
                     Memory::free_static((void*)( lVar9 + -0x10 ), false);
                  }

               }

            }
 else {
               do {
                  if (*(long*)( lVar9 + -8 ) <= lVar12) break;
                  String::split((char*)&local_168, (bool)( (char)lVar9 + (char)lVar12 * '\b' ), 0x107ff5);
                  if (( local_160 != 0 ) && ( 0 < *(long*)( local_160 + -8 ) )) {
                     String::strip_edges(SUB81((String*)&local_238, 0), SUB81(local_160, 0));
                     if (( local_160 == 0 ) || ( *(long*)( local_160 + -8 ) < 2 )) {
                        local_230 = 0;
                        if (local_238 == 0) goto LAB_00105198;
                        LAB_00105117:if (1 < *(uint*)( local_238 + -8 )) goto LAB_001051f8;
                        if (local_230 != 0) goto LAB_0010512e;
                     }
 else {
                        if (*(long*)( local_160 + -8 ) == 2) {
                           lVar12 = 2;
                           lVar9 = 2;
                           goto LAB_00106736;
                        }

                        String::strip_edges(SUB81(&local_230, 0), (bool)( (char)local_160 + '\x10' ));
                        if (local_238 != 0) goto LAB_00105117;
                        if (local_230 == 0) goto LAB_00105198;
                        LAB_0010512e:if (*(uint*)( local_230 + -8 ) < 2) {
                           LAB_00105138:lVar9 = local_230;
                           LOCK();
                           plVar14 = (long*)( local_230 + -0x10 );
                           *plVar14 = *plVar14 + -1;
                           UNLOCK();
                           if (*plVar14 == 0) {
                              local_230 = 0;
                              Memory::free_static((void*)( lVar9 + -0x10 ), false);
                           }

                        }
 else {
                           LAB_001051f8:if (( local_160 != 0 ) && ( 1 < *(long*)( local_160 + -8 ) )) {
                              cVar6 = String::operator ==((String*)&local_238, "*.*");
                              if (cVar6 == '\0') {
                                 local_f8 = (char*)0x0;
                                 if (local_238 == 0) {
                                    Vector<String>::push_back(local_218, (CowData<char32_t>*)&local_f8);
                                 }
 else {
                                    CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)&local_238);
                                    pcVar11 = local_f8;
                                    Vector<String>::push_back(local_218);
                                    if (pcVar11 != (char*)0x0) {
                                       LOCK();
                                       plVar14 = (long*)( (long)pcVar11 + -0x10 );
                                       *plVar14 = *plVar14 + -1;
                                       UNLOCK();
                                       if (*plVar14 == 0) {
                                          Memory::free_static((void*)( (long)local_f8 + -0x10 ), false);
                                       }

                                    }

                                 }

                              }
 else {
                                 local_1b8 = (char*)0x0;
                                 local_f0 = 1;
                                 local_f8 = "*";
                                 String::parse_latin1((StrRange*)&local_1b8);
                                 Vector<String>::push_back(local_218);
                                 pcVar11 = local_1b8;
                                 if (local_1b8 != (char*)0x0) {
                                    LOCK();
                                    plVar14 = (long*)( local_1b8 + -0x10 );
                                    *plVar14 = *plVar14 + -1;
                                    UNLOCK();
                                    if (*plVar14 == 0) {
                                       local_1b8 = (char*)0x0;
                                       Memory::free_static(pcVar11 + -0x10, false);
                                    }

                                 }

                              }

                              local_f8 = (char*)0x0;
                              if (local_230 == 0) {
                                 Vector<String>::push_back(local_208, (CowData<char32_t>*)&local_f8);
                              }
 else {
                                 CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)&local_230);
                                 pcVar11 = local_f8;
                                 Vector<String>::push_back(local_208);
                                 if (pcVar11 != (char*)0x0) {
                                    LOCK();
                                    plVar14 = (long*)( pcVar11 + -0x10 );
                                    *plVar14 = *plVar14 + -1;
                                    UNLOCK();
                                    if (*plVar14 == 0) {
                                       Memory::free_static(local_f8 + -0x10, false);
                                    }

                                 }

                              }

                              if (local_160 == 0) {
                                 lVar9 = 0;
                              }
 else {
                                 lVar9 = *(long*)( local_160 + -8 );
                                 if (1 < lVar9) {
                                    local_f8 = (char*)0x0;
                                    if (*(long*)( local_160 + 8 ) != 0) {
                                       CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)( local_160 + 8 ));
                                       pcVar11 = local_f8;
                                       Vector<String>::push_back(local_228);
                                       goto joined_r0x0010549c;
                                    }

                                    Vector<String>::push_back(local_228);
                                    goto LAB_00105330;
                                 }

                              }

                              lVar12 = 1;
                              LAB_00106736:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar12, lVar9, "p_index", "size()", "", false, true);
                              _err_flush_stdout();
                              /* WARNING: Does not return */
                              pcVar2 = (code*)invalidInstructionException();
                              ( *pcVar2 )();
                           }

                           cVar6 = String::operator ==((String*)&local_238, "*.*");
                           if (cVar6 == '\0') {
                              local_f8 = (char*)0x0;
                              if (local_238 == 0) {
                                 Vector<String>::push_back(local_218, (CowData<char32_t>*)&local_f8);
                              }
 else {
                                 CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)&local_238);
                                 pcVar11 = local_f8;
                                 Vector<String>::push_back(local_218);
                                 if (pcVar11 != (char*)0x0) {
                                    LOCK();
                                    plVar14 = (long*)( (long)pcVar11 + -0x10 );
                                    *plVar14 = *plVar14 + -1;
                                    UNLOCK();
                                    if (*plVar14 == 0) {
                                       Memory::free_static((void*)( (long)local_f8 + -0x10 ), false);
                                    }

                                 }

                              }

                              local_f8 = (char*)0x0;
                              if (local_238 == 0) {
                                 Vector<String>::push_back(local_228, (CowData<char32_t>*)&local_f8);
                              }
 else {
                                 CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)&local_238);
                                 pcVar11 = local_f8;
                                 Vector<String>::push_back(local_228);
                                 if (pcVar11 != (char*)0x0) {
                                    LOCK();
                                    plVar14 = (long*)( (long)pcVar11 + -0x10 );
                                    *plVar14 = *plVar14 + -1;
                                    UNLOCK();
                                    if (*plVar14 == 0) {
                                       Memory::free_static((void*)( (long)local_f8 + -0x10 ), false);
                                    }

                                 }

                              }

                           }
 else {
                              local_1b8 = (char*)0x0;
                              local_f0 = 1;
                              local_f8 = "*";
                              String::parse_latin1((StrRange*)&local_1b8);
                              Vector<String>::push_back(local_218);
                              pcVar11 = local_1b8;
                              if (local_1b8 != (char*)0x0) {
                                 LOCK();
                                 plVar14 = (long*)( (long)local_1b8 + -0x10 );
                                 *plVar14 = *plVar14 + -1;
                                 UNLOCK();
                                 if (*plVar14 == 0) {
                                    local_1b8 = (char*)0x0;
                                    Memory::free_static((void*)( (long)pcVar11 + -0x10 ), false);
                                 }

                              }

                              local_1b8 = (char*)0x0;
                              local_f8 = " (*.*)";
                              local_f0 = 6;
                              String::parse_latin1((StrRange*)&local_1b8);
                              local_f8 = "";
                              local_1e8 = (char*)0x0;
                              local_f0 = 0;
                              String::parse_latin1((StrRange*)&local_1e8);
                              local_f8 = "All Files";
                              local_1f8[0] = 0;
                              local_f0 = 9;
                              String::parse_latin1((StrRange*)local_1f8);
                              RTR((String*)local_1d8, (String*)local_1f8);
                              String::operator +((String*)&local_f8, (String*)local_1d8);
                              Vector<String>::push_back(local_228);
                              pcVar11 = local_f8;
                              if (local_f8 != (char*)0x0) {
                                 LOCK();
                                 plVar14 = (long*)( local_f8 + -0x10 );
                                 *plVar14 = *plVar14 + -1;
                                 UNLOCK();
                                 if (*plVar14 == 0) {
                                    local_f8 = (char*)0x0;
                                    Memory::free_static(pcVar11 + -0x10, false);
                                 }

                              }

                              lVar9 = local_1d8[0];
                              if (local_1d8[0] != 0) {
                                 LOCK();
                                 plVar14 = (long*)( local_1d8[0] + -0x10 );
                                 *plVar14 = *plVar14 + -1;
                                 UNLOCK();
                                 if (*plVar14 == 0) {
                                    local_1d8[0] = 0;
                                    Memory::free_static((void*)( lVar9 + -0x10 ), false);
                                 }

                              }

                              lVar9 = local_1f8[0];
                              if (local_1f8[0] != 0) {
                                 LOCK();
                                 plVar14 = (long*)( local_1f8[0] + -0x10 );
                                 *plVar14 = *plVar14 + -1;
                                 UNLOCK();
                                 if (*plVar14 == 0) {
                                    local_1f8[0] = 0;
                                    Memory::free_static((void*)( lVar9 + -0x10 ), false);
                                 }

                              }

                              pcVar11 = local_1e8;
                              if (local_1e8 != (char*)0x0) {
                                 LOCK();
                                 plVar14 = (long*)( local_1e8 + -0x10 );
                                 *plVar14 = *plVar14 + -1;
                                 UNLOCK();
                                 if (*plVar14 == 0) {
                                    local_1e8 = (char*)0x0;
                                    Memory::free_static(pcVar11 + -0x10, false);
                                 }

                              }

                              pcVar11 = local_1b8;
                              if (local_1b8 != (char*)0x0) {
                                 LOCK();
                                 plVar14 = (long*)( local_1b8 + -0x10 );
                                 *plVar14 = *plVar14 + -1;
                                 UNLOCK();
                                 if (*plVar14 == 0) {
                                    local_1b8 = (char*)0x0;
                                    Memory::free_static(pcVar11 + -0x10, false);
                                 }

                              }

                           }

                           local_f8 = (char*)0x0;
                           if (local_230 == 0) {
                              Vector<String>::push_back(local_208);
                           }
 else {
                              CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)&local_230);
                              pcVar11 = local_f8;
                              Vector<String>::push_back(local_208);
                              joined_r0x0010549c:if (pcVar11 != (char*)0x0) {
                                 LOCK();
                                 plVar14 = (long*)( pcVar11 + -0x10 );
                                 *plVar14 = *plVar14 + -1;
                                 UNLOCK();
                                 if (*plVar14 == 0) {
                                    Memory::free_static(local_f8 + -0x10, false);
                                 }

                              }

                           }

                           LAB_00105330:if (local_230 != 0) goto LAB_00105138;
                        }

                        if (local_238 == 0) goto LAB_00105198;
                     }

                     lVar9 = local_238;
                     LOCK();
                     plVar14 = (long*)( local_238 + -0x10 );
                     *plVar14 = *plVar14 + -1;
                     UNLOCK();
                     if (*plVar14 == 0) {
                        local_238 = 0;
                        Memory::free_static((void*)( lVar9 + -0x10 ), false);
                     }

                  }

                  LAB_00105198:lVar12 = lVar12 + 1;
                  CowData<String>::_unref((CowData<String>*)&local_160);
                  lVar9 = *(long*)( param_9 + 8 );
               }
 while ( lVar9 != 0 );
               if (local_220 == 0) goto LAB_00104dba;
            }

            lVar9 = local_220;
            ( *_dbus_error_init_dylibloader_wrapper_dbus )(local_1d8);
            local_160 = 0;
            local_130 = 2;
            local_128 = 0xffffffff;
            local_120 = 0;
            local_118 = 0;
            local_100 = 0;
            local_150 = (undefined1[16])0x0;
            local_140 = (undefined1[16])0x0;
            local_110 = (undefined1[16])0x0;
            Callable::operator =((Callable*)&local_120, param_11);
            local_128 = param_1;
            if (local_160 != lVar9) {
               CowData<String>::_ref((CowData<String>*)&local_160, (CowData*)&local_220);
            }

            local_100 = param_12;
            CryptoCore::RandomGenerator::RandomGenerator((RandomGenerator*)local_1f8);
            iVar7 = CryptoCore::RandomGenerator::init();
            if (iVar7 == 0) {
               iVar7 = CryptoCore::RandomGenerator::get_random_bytes((uchar*)local_1f8, (ulong)local_88);
               if (iVar7 == 0) {
                  iVar7 = ( *_dbus_bus_get_unique_name_dylibloader_wrapper_dbus )(*(undefined8*)( this + 0x1d0 ));
                  String::utf8((char*)&local_250, iVar7);
                  String::hex_encode_buffer((uchar*)&local_248, (int)local_88);
                  local_1b8 = (char*)0x0;
                  plVar14 = (long*)( local_248 + -0x10 );
                  if (local_248 != 0) {
                     do {
                        lVar9 = *plVar14;
                        if (lVar9 == 0) goto LAB_0010564c;
                        LOCK();
                        lVar12 = *plVar14;
                        bVar15 = lVar9 == lVar12;
                        if (bVar15) {
                           *plVar14 = lVar9 + 1;
                           lVar12 = lVar9;
                        }

                        UNLOCK();
                     }
 while ( !bVar15 );
                     if (lVar12 != -1) {
                        local_1b8 = (char*)local_248;
                     }

                  }

                  LAB_0010564c:String::replace((char*)&local_238, (char*)&local_250);
                  String::replace((char*)&local_230, (char*)&local_238);
                  local_1e8 = (char*)0x0;
                  local_f8 = "/org/freedesktop/portal/desktop/request/%s/%s";
                  local_f0 = 0x2d;
                  String::parse_latin1((StrRange*)&local_1e8);
                  vformat<String,String>((CowData*)&local_240, (StrRange*)&local_1e8, (StrRange*)&local_230, (DBusMessageIter*)&local_1b8);
                  pcVar11 = local_1e8;
                  if (local_1e8 != (char*)0x0) {
                     LOCK();
                     plVar14 = (long*)( (long)local_1e8 + -0x10 );
                     *plVar14 = *plVar14 + -1;
                     UNLOCK();
                     if (*plVar14 == 0) {
                        local_1e8 = (char*)0x0;
                        Memory::free_static((void*)( (long)pcVar11 + -0x10 ), false);
                     }

                  }

                  lVar9 = local_230;
                  if (local_230 != 0) {
                     LOCK();
                     plVar14 = (long*)( local_230 + -0x10 );
                     *plVar14 = *plVar14 + -1;
                     UNLOCK();
                     if (*plVar14 == 0) {
                        local_230 = 0;
                        Memory::free_static((void*)( lVar9 + -0x10 ), false);
                     }

                  }

                  lVar9 = local_238;
                  if (local_238 != 0) {
                     LOCK();
                     plVar14 = (long*)( local_238 + -0x10 );
                     *plVar14 = *plVar14 + -1;
                     UNLOCK();
                     if (*plVar14 == 0) {
                        local_238 = 0;
                        Memory::free_static((void*)( lVar9 + -0x10 ), false);
                     }

                  }

                  pcVar11 = local_1b8;
                  if (local_1b8 != (char*)0x0) {
                     LOCK();
                     plVar14 = (long*)( (long)local_1b8 + -0x10 );
                     *plVar14 = *plVar14 + -1;
                     UNLOCK();
                     if (*plVar14 == 0) {
                        local_1b8 = (char*)0x0;
                        Memory::free_static((void*)( (long)pcVar11 + -0x10 ), false);
                     }

                  }

                  if ((char*)local_110._8_8_ != local_240) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( local_110 + 8 ), (CowData*)&local_240);
                  }

                  local_1b8 = (char*)0x0;
                  plVar14 = (long*)( local_250 + -0x10 );
                  if (local_250 != (char*)0x0) {
                     do {
                        lVar9 = *plVar14;
                        if (lVar9 == 0) goto LAB_00105831;
                        LOCK();
                        lVar12 = *plVar14;
                        bVar15 = lVar9 == lVar12;
                        if (bVar15) {
                           *plVar14 = lVar9 + 1;
                           lVar12 = lVar9;
                        }

                        UNLOCK();
                     }
 while ( !bVar15 );
                     if (lVar12 != -1) {
                        local_1b8 = local_250;
                     }

                  }

                  LAB_00105831:local_1e8 = (char*)0x0;
                  plVar14 = (long*)( local_240 + -0x10 );
                  if (local_240 != (char*)0x0) {
                     do {
                        lVar9 = *plVar14;
                        if (lVar9 == 0) goto LAB_00105871;
                        LOCK();
                        lVar12 = *plVar14;
                        bVar15 = lVar9 == lVar12;
                        if (bVar15) {
                           *plVar14 = lVar9 + 1;
                           lVar12 = lVar9;
                        }

                        UNLOCK();
                     }
 while ( !bVar15 );
                     if (lVar12 != -1) {
                        local_1e8 = local_240;
                     }

                  }

                  LAB_00105871:local_230 = 0;
                  local_f8 = "type=\'signal\',sender=\'org.freedesktop.portal.Desktop\',path=\'%s\',interface=\'org.freedesktop.portal.Request\',member=\'Response\',destination=\'%s\'";
                  local_f0 = 0x8d;
                  String::parse_latin1((StrRange*)&local_230);
                  vformat<String,String>((DBusMessageIter*)&local_f8, (StrRange*)&local_230, (StrRange*)&local_1e8, (DBusMessageIter*)&local_1b8);
                  uVar8 = local_110._0_8_;
                  if ((char*)local_110._0_8_ == local_f8) {
                     if ((char*)local_110._0_8_ != (char*)0x0) {
                        LOCK();
                        plVar14 = (long*)( local_110._0_8_ + -0x10 );
                        *plVar14 = *plVar14 + -1;
                        UNLOCK();
                        if (*plVar14 == 0) {
                           Memory::free_static(local_f8 + -0x10, false);
                        }

                     }

                  }
 else {
                     if ((char*)local_110._0_8_ != (char*)0x0) {
                        LOCK();
                        plVar14 = (long*)( local_110._0_8_ + -0x10 );
                        *plVar14 = *plVar14 + -1;
                        UNLOCK();
                        if (*plVar14 == 0) {
                           auVar3._8_8_ = 0;
                           auVar3._0_8_ = local_110._8_8_;
                           local_110 = auVar3 << 0x40;
                           Memory::free_static((char*)( uVar8 + -0x10 ), false);
                        }

                     }

                     local_110._0_8_ = local_f8;
                  }

                  lVar9 = local_230;
                  if (local_230 != 0) {
                     LOCK();
                     plVar14 = (long*)( local_230 + -0x10 );
                     *plVar14 = *plVar14 + -1;
                     UNLOCK();
                     if (*plVar14 == 0) {
                        local_230 = 0;
                        Memory::free_static((void*)( lVar9 + -0x10 ), false);
                     }

                  }

                  pcVar11 = local_1e8;
                  if (local_1e8 != (char*)0x0) {
                     LOCK();
                     plVar14 = (long*)( local_1e8 + -0x10 );
                     *plVar14 = *plVar14 + -1;
                     UNLOCK();
                     if (*plVar14 == 0) {
                        local_1e8 = (char*)0x0;
                        Memory::free_static(pcVar11 + -0x10, false);
                     }

                  }

                  pcVar11 = local_1b8;
                  if (local_1b8 != (char*)0x0) {
                     LOCK();
                     plVar14 = (long*)( local_1b8 + -0x10 );
                     *plVar14 = *plVar14 + -1;
                     UNLOCK();
                     if (*plVar14 == 0) {
                        local_1b8 = (char*)0x0;
                        Memory::free_static(pcVar11 + -0x10, false);
                     }

                  }

                  pcVar2 = _dbus_bus_add_match_dylibloader_wrapper_dbus;
                  String::utf8();
                  uVar8 = CharString::get_data();
                  ( *pcVar2 )(*(undefined8*)( this + 0x1d0 ), uVar8, local_1d8);
                  pcVar11 = local_f8;
                  if (local_f8 != (char*)0x0) {
                     LOCK();
                     plVar14 = (long*)( local_f8 + -0x10 );
                     *plVar14 = *plVar14 + -1;
                     UNLOCK();
                     if (*plVar14 == 0) {
                        local_f8 = (char*)0x0;
                        Memory::free_static(pcVar11 + -0x10, false);
                     }

                  }

                  iVar7 = ( *_dbus_error_is_set_dylibloader_wrapper_dbus )(local_1d8);
                  if (iVar7 != 0) {
                     local_f8 = "Failed to add DBus match: %s";
                     local_1b8 = (char*)0x0;
                     local_f0 = 0x1c;
                     String::parse_latin1((StrRange*)&local_1b8);
                     vformat<char_const*>((String*)&local_f8, (char*)&local_1b8);
                     _err_print_error("file_dialog_show", "platform/linuxbsd/freedesktop_portal_desktop.cpp", 0x202, (DBusMessageIter*)&local_f8, 0, 0);
                     pcVar11 = local_f8;
                     if (local_f8 != (char*)0x0) {
                        LOCK();
                        plVar14 = (long*)( local_f8 + -0x10 );
                        *plVar14 = *plVar14 + -1;
                        UNLOCK();
                        if (*plVar14 == 0) {
                           local_f8 = (char*)0x0;
                           Memory::free_static(pcVar11 + -0x10, false);
                        }

                     }

                     pcVar11 = local_1b8;
                     if (local_1b8 != (char*)0x0) {
                        LOCK();
                        plVar14 = (long*)( local_1b8 + -0x10 );
                        *plVar14 = *plVar14 + -1;
                        UNLOCK();
                        if (*plVar14 == 0) {
                           local_1b8 = (char*)0x0;
                           Memory::free_static(pcVar11 + -0x10, false);
                        }

                     }

                     goto LAB_00106be0;
                  }

                  pcVar11 = "OpenFile";
                  if (param_8 == 4) {
                     pcVar11 = "SaveFile";
                  }

                  uVar8 = ( *_dbus_message_new_method_call_dylibloader_wrapper_dbus )("org.freedesktop.portal.Desktop", "/org/freedesktop/portal/desktop", "org.freedesktop.portal.FileChooser", pcVar11);
                  ( *_dbus_message_iter_init_append_dylibloader_wrapper_dbus )(uVar8, (DBusMessageIter*)&local_1b8);
                  append_dbus_string((DBusMessageIter*)&local_1b8, param_2);
                  append_dbus_string((DBusMessageIter*)&local_1b8, param_3);
                  ( *_dbus_message_iter_open_container_dylibloader_wrapper_dbus )((DBusMessageIter*)&local_1b8, 0x61, &_LC127);
                  local_1e8 = "handle_token";
                  local_230 = 0;
                  local_1e0 = 0xc;
                  String::parse_latin1((StrRange*)&local_230);
                  append_dbus_dict_string((DBusMessageIter*)&local_f8, (String*)&local_230, (String*)&local_248, false);
                  lVar9 = local_230;
                  if (local_230 != 0) {
                     LOCK();
                     plVar14 = (long*)( local_230 + -0x10 );
                     *plVar14 = *plVar14 + -1;
                     UNLOCK();
                     if (*plVar14 == 0) {
                        local_230 = 0;
                        Memory::free_static((void*)( lVar9 + -0x10 ), false);
                     }

                  }

                  local_230 = 0;
                  local_1e8 = "multiple";
                  local_1e0 = 8;
                  String::parse_latin1((StrRange*)&local_230);
                  append_dbus_dict_bool((DBusMessageIter*)&local_f8, (String*)&local_230, param_8 == 1);
                  lVar9 = local_230;
                  if (local_230 != 0) {
                     LOCK();
                     plVar14 = (long*)( local_230 + -0x10 );
                     *plVar14 = *plVar14 + -1;
                     UNLOCK();
                     if (*plVar14 == 0) {
                        local_230 = 0;
                        Memory::free_static((void*)( lVar9 + -0x10 ), false);
                     }

                  }

                  local_230 = 0;
                  local_1e8 = "directory";
                  local_1e0 = 9;
                  String::parse_latin1((StrRange*)&local_230);
                  append_dbus_dict_bool((DBusMessageIter*)&local_f8, (String*)&local_230, param_8 == 2);
                  lVar9 = local_230;
                  if (local_230 != 0) {
                     LOCK();
                     plVar14 = (long*)( local_230 + -0x10 );
                     *plVar14 = *plVar14 + -1;
                     UNLOCK();
                     if (*plVar14 == 0) {
                        local_230 = 0;
                        Memory::free_static((void*)( lVar9 + -0x10 ), false);
                     }

                  }

                  append_dbus_dict_filters((DBusMessageIter*)&local_f8, (Vector*)local_228, (Vector*)local_218, (Vector*)local_208);
                  append_dbus_dict_options((DBusMessageIter*)&local_f8, param_10, local_158);
                  local_1e8 = "current_folder";
                  local_230 = 0;
                  local_1e0 = 0xe;
                  String::parse_latin1((StrRange*)&local_230);
                  append_dbus_dict_string((DBusMessageIter*)&local_f8, (String*)&local_230, param_4, true);
                  lVar9 = local_230;
                  if (local_230 != 0) {
                     LOCK();
                     plVar14 = (long*)( local_230 + -0x10 );
                     *plVar14 = *plVar14 + -1;
                     UNLOCK();
                     if (*plVar14 == 0) {
                        local_230 = 0;
                        Memory::free_static((void*)( lVar9 + -0x10 ), false);
                     }

                  }

                  if (param_8 == 4) {
                     local_230 = 0;
                     local_1e8 = "current_name";
                     local_1e0 = 0xc;
                     String::parse_latin1((StrRange*)&local_230);
                     append_dbus_dict_string((DBusMessageIter*)&local_f8, (String*)&local_230, param_6, false);
                     lVar9 = local_230;
                     if (local_230 != 0) {
                        LOCK();
                        plVar14 = (long*)( local_230 + -0x10 );
                        *plVar14 = *plVar14 + -1;
                        UNLOCK();
                        if (*plVar14 == 0) {
                           local_230 = 0;
                           Memory::free_static((void*)( lVar9 + -0x10 ), false);
                        }

                     }

                  }

                  ( *_dbus_message_iter_close_container_dylibloader_wrapper_dbus )((DBusMessageIter*)&local_1b8, (DBusMessageIter*)&local_f8);
                  lVar9 = ( *_dbus_connection_send_with_reply_and_block_dylibloader_wrapper_dbus )(*(undefined8*)( this + 0x1d0 ), uVar8, 0x7fffffff, local_1d8);
                  ( *_dbus_message_unref_dylibloader_wrapper_dbus )(uVar8);
                  if (( lVar9 == 0 ) || ( iVar7 = ( *_dbus_error_is_set_dylibloader_wrapper_dbus )(local_1d8) ),iVar7 != 0) {
                     local_f8 = "Failed to send DBus message: %s";
                     local_1b8 = (char*)0x0;
                     local_f0 = 0x1f;
                     String::parse_latin1((StrRange*)&local_1b8);
                     vformat<char_const*>((String*)&local_f8, (char*)&local_1b8);
                     _err_print_error("file_dialog_show", "platform/linuxbsd/freedesktop_portal_desktop.cpp", 0x22c, (DBusMessageIter*)&local_f8, 0, 0);
                     pcVar11 = local_f8;
                     if (local_f8 != (char*)0x0) {
                        LOCK();
                        plVar14 = (long*)( local_f8 + -0x10 );
                        *plVar14 = *plVar14 + -1;
                        UNLOCK();
                        if (*plVar14 == 0) {
                           local_f8 = (char*)0x0;
                           Memory::free_static(pcVar11 + -0x10, false);
                        }

                     }

                     pcVar11 = local_1b8;
                     if (local_1b8 != (char*)0x0) {
                        LOCK();
                        plVar14 = (long*)( local_1b8 + -0x10 );
                        *plVar14 = *plVar14 + -1;
                        UNLOCK();
                        if (*plVar14 == 0) {
                           local_1b8 = (char*)0x0;
                           Memory::free_static(pcVar11 + -0x10, false);
                        }

                     }

                     ( *_dbus_error_free_dylibloader_wrapper_dbus )(local_1d8);
                     pcVar2 = _dbus_bus_remove_match_dylibloader_wrapper_dbus;
                     String::utf8();
                     uVar8 = CharString::get_data();
                     ( *pcVar2 )(*(undefined8*)( this + 0x1d0 ), uVar8, local_1d8);
                     pcVar11 = local_f8;
                     if (local_f8 != (char*)0x0) {
                        LOCK();
                        plVar14 = (long*)( local_f8 + -0x10 );
                        *plVar14 = *plVar14 + -1;
                        UNLOCK();
                        if (*plVar14 == 0) {
                           local_f8 = (char*)0x0;
                           Memory::free_static(pcVar11 + -0x10, false);
                        }

                     }

                     LAB_0010689d:iVar7 = 1;
                  }
 else {
                     iVar7 = ( *_dbus_message_iter_init_dylibloader_wrapper_dbus )(lVar9, (DBusMessageIter*)&local_f8);
                     if (( iVar7 != 0 ) && ( iVar7 = ( *_dbus_message_iter_get_arg_type_dylibloader_wrapper_dbus )((DBusMessageIter*)&local_f8) ),iVar7 == 0x6f) {
                        local_230 = 0;
                        ( *_dbus_message_iter_get_basic_dylibloader_wrapper_dbus )((DBusMessageIter*)&local_f8, (StrRange*)&local_230);
                        String::utf8((char*)&local_1b8, (int)local_230);
                        cVar6 = String::operator !=((String*)&local_1b8, (String*)&local_240);
                        pcVar11 = local_1b8;
                        if (local_1b8 != (char*)0x0) {
                           LOCK();
                           plVar14 = (long*)( local_1b8 + -0x10 );
                           *plVar14 = *plVar14 + -1;
                           UNLOCK();
                           if (*plVar14 == 0) {
                              local_1b8 = (char*)0x0;
                              Memory::free_static(pcVar11 + -0x10, false);
                           }

                        }

                        pcVar2 = _dbus_bus_remove_match_dylibloader_wrapper_dbus;
                        if (cVar6 != '\0') {
                           String::utf8();
                           uVar8 = CharString::get_data();
                           ( *pcVar2 )(*(undefined8*)( this + 0x1d0 ), uVar8, local_1d8);
                           pcVar11 = local_1b8;
                           if (local_1b8 != (char*)0x0) {
                              LOCK();
                              plVar14 = (long*)( local_1b8 + -0x10 );
                              *plVar14 = *plVar14 + -1;
                              UNLOCK();
                              if (*plVar14 == 0) {
                                 local_1b8 = (char*)0x0;
                                 Memory::free_static(pcVar11 + -0x10, false);
                              }

                           }

                           iVar7 = ( *_dbus_error_is_set_dylibloader_wrapper_dbus )(local_1d8);
                           if (iVar7 == 0) {
                              String::utf8((char*)&local_1b8, (int)local_230);
                              pcVar11 = local_1b8;
                              uVar8 = local_110._0_8_;
                              if ((char*)local_110._0_8_ == local_1b8) {
                                 if ((char*)local_110._0_8_ != (char*)0x0) {
                                    LOCK();
                                    plVar14 = (long*)( local_110._0_8_ + -0x10 );
                                    *plVar14 = *plVar14 + -1;
                                    UNLOCK();
                                    if (*plVar14 == 0) {
                                       local_1b8 = (char*)0x0;
                                       Memory::free_static(pcVar11 + -0x10, false);
                                    }

                                 }

                              }
 else {
                                 if ((char*)local_110._0_8_ != (char*)0x0) {
                                    LOCK();
                                    plVar14 = (long*)( local_110._0_8_ + -0x10 );
                                    *plVar14 = *plVar14 + -1;
                                    UNLOCK();
                                    if (*plVar14 == 0) {
                                       auVar5._8_8_ = 0;
                                       auVar5._0_8_ = local_110._8_8_;
                                       local_110 = auVar5 << 0x40;
                                       Memory::free_static((char*)( uVar8 + -0x10 ), false);
                                    }

                                 }

                                 local_110._0_8_ = local_1b8;
                              }

                              pcVar2 = _dbus_bus_add_match_dylibloader_wrapper_dbus;
                              String::utf8();
                              uVar8 = CharString::get_data();
                              ( *pcVar2 )(*(undefined8*)( this + 0x1d0 ), uVar8, local_1d8);
                              pcVar11 = local_1b8;
                              if (local_1b8 != (char*)0x0) {
                                 LOCK();
                                 plVar14 = (long*)( local_1b8 + -0x10 );
                                 *plVar14 = *plVar14 + -1;
                                 UNLOCK();
                                 if (*plVar14 == 0) {
                                    local_1b8 = (char*)0x0;
                                    Memory::free_static(pcVar11 + -0x10, false);
                                 }

                              }

                              iVar7 = ( *_dbus_error_is_set_dylibloader_wrapper_dbus )(local_1d8);
                              if (iVar7 == 0) goto LAB_00105d48;
                              local_1b8 = "Failed to add DBus match: %s";
                              local_1e8 = (char*)0x0;
                              local_1b0 = 0x1c;
                              String::parse_latin1((StrRange*)&local_1e8);
                              vformat<char_const*>((String*)&local_1b8, (char*)&local_1e8);
                              _err_print_error("file_dialog_show", "platform/linuxbsd/freedesktop_portal_desktop.cpp", 0x243, (DBusMessageIter*)&local_1b8, 0, 0);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
                           }
 else {
                              local_1b8 = "Failed to remove DBus match: %s";
                              local_1e8 = (char*)0x0;
                              local_1b0 = 0x1f;
                              String::parse_latin1((StrRange*)&local_1e8);
                              vformat<char_const*>((String*)&local_1b8, (char*)&local_1e8);
                              _err_print_error("file_dialog_show", "platform/linuxbsd/freedesktop_portal_desktop.cpp", 0x23c, (DBusMessageIter*)&local_1b8, 0, 0);
                              pcVar11 = local_1b8;
                              if (local_1b8 != (char*)0x0) {
                                 LOCK();
                                 plVar14 = (long*)( local_1b8 + -0x10 );
                                 *plVar14 = *plVar14 + -1;
                                 UNLOCK();
                                 if (*plVar14 == 0) {
                                    local_1b8 = (char*)0x0;
                                    Memory::free_static(pcVar11 + -0x10, false);
                                 }

                              }

                              pcVar11 = local_1e8;
                              if (local_1e8 != (char*)0x0) {
                                 LOCK();
                                 plVar14 = (long*)( local_1e8 + -0x10 );
                                 *plVar14 = *plVar14 + -1;
                                 UNLOCK();
                                 if (*plVar14 == 0) {
                                    local_1e8 = (char*)0x0;
                                    Memory::free_static(pcVar11 + -0x10, false);
                                 }

                              }

                           }

                           LAB_00106be0:( *_dbus_error_free_dylibloader_wrapper_dbus )(local_1d8);
                           goto LAB_0010689d;
                        }

                     }

                     LAB_00105d48:( *_dbus_message_unref_dylibloader_wrapper_dbus )(lVar9);
                     iVar7 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x180 ));
                     if (iVar7 != 0) {
                        /* WARNING: Subroutine does not return */
                        std::__throw_system_error(iVar7);
                     }

                     local_f0 = 0;
                     if (local_160 != 0) {
                        CowData<String>::_ref((CowData<String>*)&local_f0, (CowData*)&local_160);
                     }

                     local_c0 = 0;
                     local_e0 = (undefined1[16])0x0;
                     local_d0 = (undefined1[16])0x0;
                     uVar10 = 1;
                     if (5 < *(uint*)( hash_table_size_primes + ( local_130 & 0xffffffff ) * 4 )) {
                        do {
                           if (*(uint*)( hash_table_size_primes + ( local_130 & 0xffffffff ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar10 * 4 )) {
                              local_c0 = uVar10 & 0xffffffff;
                              goto LAB_00105e21;
                           }

                           uVar10 = uVar10 + 1;
                        }
 while ( uVar10 != 0x1d );
                        _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
                     }

                     LAB_00105e21:if (( local_130._4_4_ != 0 ) && ( (long*)local_140._0_8_ != (long*)0x0 )) {
                        plVar14 = (long*)local_140._0_8_;
                        do {
                           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::insert((String*)&local_1b8, local_e8, (bool)( (char)plVar14 + '\x10' ));
                           plVar14 = (long*)*plVar14;
                        }
 while ( plVar14 != (long*)0x0 );
                     }

                     local_b8 = local_128;
                     Callable::Callable(local_b0, (Callable*)&local_120);
                     local_a0 = 0;
                     if (local_110._0_8_ != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_a0, (CowData*)local_110);
                     }

                     local_98 = 0;
                     if (local_110._8_8_ != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_98, (CowData*)( local_110 + 8 ));
                     }

                     local_90 = local_100;
                     if (*(long*)( this + 0x1b0 ) == 0) {
                        lVar9 = 1;
                     }
 else {
                        lVar9 = *(long*)( *(long*)( this + 0x1b0 ) + -8 ) + 1;
                     }

                     iVar7 = CowData<FreeDesktopPortalDesktop::FileDialogData>::resize<false>((CowData<FreeDesktopPortalDesktop::FileDialogData>*)( this + 0x1b0 ), lVar9);
                     if (iVar7 == 0) {
                        if (*(long*)( this + 0x1b0 ) == 0) {
                           lVar12 = -1;
                           lVar9 = 0;
                        }
 else {
                           lVar9 = *(long*)( *(long*)( this + 0x1b0 ) + -8 );
                           lVar12 = lVar9 + -1;
                           if (-1 < lVar12) {
                              CowData<FreeDesktopPortalDesktop::FileDialogData>::_copy_on_write((CowData<FreeDesktopPortalDesktop::FileDialogData>*)( this + 0x1b0 ));
                              lVar9 = lVar12 * 0x70 + *(long*)( this + 0x1b0 );
                              if (*(long*)( lVar9 + 8 ) != local_f0) {
                                 CowData<String>::_ref((CowData<String>*)( lVar9 + 8 ), (CowData*)&local_f0);
                              }

                              HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator =((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)( lVar9 + 0x10 ), (HashMap*)local_e8);
                              *(undefined4*)( lVar9 + 0x40 ) = local_b8;
                              Callable::operator =((Callable*)( lVar9 + 0x48 ), local_b0);
                              if (*(long*)( lVar9 + 0x58 ) != local_a0) {
                                 CowData<char32_t>::_ref((CowData<char32_t>*)( lVar9 + 0x58 ), (CowData*)&local_a0);
                              }

                              if (*(long*)( lVar9 + 0x60 ) != local_98) {
                                 CowData<char32_t>::_ref((CowData<char32_t>*)( lVar9 + 0x60 ), (CowData*)&local_98);
                              }

                              *(undefined1*)( lVar9 + 0x68 ) = local_90;
                              goto LAB_00106005;
                           }

                        }

                        _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar12, lVar9, "p_index", "size()", "", false, false);
                     }
 else {
                        _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
                     }

                     LAB_00106005:FileDialogData::~FileDialogData((FileDialogData*)&local_f8);
                     pthread_mutex_unlock((pthread_mutex_t*)( this + 0x180 ));
                     iVar7 = 0;
                  }

                  pcVar11 = local_240;
                  if (local_240 != (char*)0x0) {
                     LOCK();
                     plVar14 = (long*)( local_240 + -0x10 );
                     *plVar14 = *plVar14 + -1;
                     UNLOCK();
                     if (*plVar14 == 0) {
                        local_240 = (char*)0x0;
                        Memory::free_static(pcVar11 + -0x10, false);
                     }

                  }

                  lVar9 = local_248;
                  if (local_248 != 0) {
                     LOCK();
                     plVar14 = (long*)( local_248 + -0x10 );
                     *plVar14 = *plVar14 + -1;
                     UNLOCK();
                     if (*plVar14 == 0) {
                        local_248 = 0;
                        Memory::free_static((void*)( lVar9 + -0x10 ), false);
                     }

                  }

                  pcVar11 = local_250;
                  if (local_250 != (char*)0x0) {
                     LOCK();
                     plVar14 = (long*)( local_250 + -0x10 );
                     *plVar14 = *plVar14 + -1;
                     UNLOCK();
                     if (*plVar14 == 0) {
                        local_250 = (char*)0x0;
                        Memory::free_static(pcVar11 + -0x10, false);
                     }

                  }

               }
 else {
                  _err_print_error("file_dialog_show", "platform/linuxbsd/freedesktop_portal_desktop.cpp", 0x1f8, "Condition \"rng_err\" is true. Returning: rng_err", "Failed to generate unique token.", 0, 0);
               }

            }
 else {
               iVar7 = 1;
               _err_print_error("file_dialog_show", "platform/linuxbsd/freedesktop_portal_desktop.cpp", 0x1f5, "Condition \"rng.init()\" is true. Returning: FAILED", "Failed to initialize random number generator.", 0, 0);
            }

            CryptoCore::RandomGenerator::~RandomGenerator((RandomGenerator*)local_1f8);
            uVar8 = local_110._8_8_;
            if (local_110._8_8_ != 0) {
               LOCK();
               plVar14 = (long*)( local_110._8_8_ + -0x10 );
               *plVar14 = *plVar14 + -1;
               UNLOCK();
               if (*plVar14 == 0) {
                  local_110._8_8_ = 0;
                  Memory::free_static((void*)( uVar8 + -0x10 ), false);
               }

            }

            uVar8 = local_110._0_8_;
            if (local_110._0_8_ != 0) {
               LOCK();
               plVar14 = (long*)( local_110._0_8_ + -0x10 );
               *plVar14 = *plVar14 + -1;
               UNLOCK();
               if (*plVar14 == 0) {
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = local_110._8_8_;
                  local_110 = auVar4 << 0x40;
                  Memory::free_static((void*)( uVar8 + -0x10 ), false);
               }

            }

            Callable::~Callable((Callable*)&local_120);
            if ((void*)local_150._0_8_ != (void*)0x0) {
               pvVar13 = (void*)local_150._0_8_;
               if (local_130._4_4_ != 0) {
                  uVar1 = *(uint*)( hash_table_size_primes + ( local_130 & 0xffffffff ) * 4 );
                  if (uVar1 == 0) {
                     local_130 = local_130 & 0xffffffff;
                     local_140 = (undefined1[16])0x0;
                  }
 else {
                     lVar9 = 0;
                     do {
                        if (*(int*)( local_150._8_8_ + lVar9 ) != 0) {
                           pvVar13 = *(void**)( (long)pvVar13 + lVar9 * 2 );
                           *(int*)( local_150._8_8_ + lVar9 ) = 0;
                           if (*(long*)( (long)pvVar13 + 0x18 ) != 0) {
                              LOCK();
                              plVar14 = (long*)( *(long*)( (long)pvVar13 + 0x18 ) + -0x10 );
                              *plVar14 = *plVar14 + -1;
                              UNLOCK();
                              if (*plVar14 == 0) {
                                 lVar12 = *(long*)( (long)pvVar13 + 0x18 );
                                 *(undefined8*)( (long)pvVar13 + 0x18 ) = 0;
                                 Memory::free_static((void*)( lVar12 + -0x10 ), false);
                              }

                           }

                           if (*(long*)( (long)pvVar13 + 0x10 ) != 0) {
                              LOCK();
                              plVar14 = (long*)( *(long*)( (long)pvVar13 + 0x10 ) + -0x10 );
                              *plVar14 = *plVar14 + -1;
                              UNLOCK();
                              if (*plVar14 == 0) {
                                 lVar12 = *(long*)( (long)pvVar13 + 0x10 );
                                 *(undefined8*)( (long)pvVar13 + 0x10 ) = 0;
                                 Memory::free_static((void*)( lVar12 + -0x10 ), false);
                              }

                           }

                           Memory::free_static(pvVar13, false);
                           *(undefined8*)( local_150._0_8_ + lVar9 * 2 ) = 0;
                           pvVar13 = (void*)local_150._0_8_;
                        }

                        lVar9 = lVar9 + 4;
                     }
 while ( (ulong)uVar1 << 2 != lVar9 );
                     local_130 = local_130 & 0xffffffff;
                     local_140 = (undefined1[16])0x0;
                     if (pvVar13 == (void*)0x0) goto LAB_0010620e;
                  }

               }

               Memory::free_static(pvVar13, false);
               Memory::free_static((void*)local_150._8_8_, false);
            }

            LAB_0010620e:CowData<String>::_unref((CowData<String>*)&local_160);
            CowData<String>::_unref((CowData<String>*)&local_200);
            CowData<String>::_unref((CowData<String>*)&local_210);
            CowData<String>::_unref((CowData<String>*)&local_220);
            goto LAB_0010623d;
         }

         _err_print_error("file_dialog_show", "platform/linuxbsd/freedesktop_portal_desktop.cpp", 0x1c4, "Parameter \"monitor_connection\" is null.", 0, 0);
      }
 else {
         _err_print_index_error("file_dialog_show", "platform/linuxbsd/freedesktop_portal_desktop.cpp", 0x1c3, (long)(int)param_8, 5, "int(p_mode)", "DisplayServer::FILE_DIALOG_MODE_SAVE_MAX", "", false, false);
      }

   }

   iVar7 = 1;
   LAB_0010623d:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar7;
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
/* Object::_setv(StringName const&, Variant const&) */undefined8 Object::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Object::_getv(StringName const&, Variant&) const */undefined8 Object::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Object::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Object::_get_property_listv(List *param_1, bool param_2) {
   return;
}
/* Object::_validate_propertyv(PropertyInfo&) const */void Object::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* Object::_property_can_revertv(StringName const&) const */undefined8 Object::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* Object::_property_get_revertv(StringName const&, Variant&) const */undefined8 Object::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Object::_notificationv(int, bool) */void Object::_notificationv(int param_1, bool param_2) {
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
/* Object::is_class_ptr(void*) const */undefined8 Object::is_class_ptr(Object *this, void *param_1) {
   return CONCAT71(0x10c5, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}
/* CallableCustomMethodPointer<DisplayServer, void, int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<DisplayServer,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<DisplayServer,void,int> *this) {
   return;
}
/* CallableCustomMethodPointer<FreeDesktopPortalDesktop, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<FreeDesktopPortalDesktop,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<FreeDesktopPortalDesktop,void> *this) {
   return;
}
/* CallableCustomMethodPointer<DisplayServer, void, int>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<DisplayServer,void,int>::get_argument_count(CallableCustomMethodPointer<DisplayServer,void,int> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<FreeDesktopPortalDesktop, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<FreeDesktopPortalDesktop,void>::get_argument_count(CallableCustomMethodPointer<FreeDesktopPortalDesktop,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* CallableCustomMethodPointer<FreeDesktopPortalDesktop, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<FreeDesktopPortalDesktop,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<FreeDesktopPortalDesktop,void> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<DisplayServer, void, int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<DisplayServer,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<DisplayServer,void,int> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* Object::_initialize_classv() */void Object::_initialize_classv(void) {
   Object::initialize_class();
   return;
}
/* Object::_get_class_namev() const */undefined8 *Object::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00107163:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00107163;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Object");
         goto LAB_001071ce;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Object");
   LAB_001071ce:return &_get_class_namev();
}
/* CallableCustomMethodPointer<FreeDesktopPortalDesktop, void>::get_object() const */undefined8 CallableCustomMethodPointer<FreeDesktopPortalDesktop,void>::get_object(CallableCustomMethodPointer<FreeDesktopPortalDesktop,void> *this) {
   long lVar1;
   undefined8 uVar2;
   uint uVar3;
   ulong *puVar4;
   long in_FS_OFFSET;
   bool bVar5;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         LOCK();
         bVar5 = (char)ObjectDB::spin_lock == '\0';
         if (bVar5) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar5) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_001072fd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_001072fd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_001072fd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<DisplayServer, void, int>::get_object() const */undefined8 CallableCustomMethodPointer<DisplayServer,void,int>::get_object(CallableCustomMethodPointer<DisplayServer,void,int> *this) {
   long lVar1;
   undefined8 uVar2;
   uint uVar3;
   ulong *puVar4;
   long in_FS_OFFSET;
   bool bVar5;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         LOCK();
         bVar5 = (char)ObjectDB::spin_lock == '\0';
         if (bVar5) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar5) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_001073fd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_001073fd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_001073fd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointerBase::get_as_text() const */void CallableCustomMethodPointerBase::get_as_text(void) {
   char *__s;
   long lVar1;
   long in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   __s = *(char**)( in_RSI + 0x20 );
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)in_RDI = 0;
   if (__s != (char*)0x0) {
      strlen(__s);
   }

   String::parse_latin1(in_RDI);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Object::get_class() const */void Object::get_class(void) {
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
/* Object::is_class(String const&) const */ulong Object::is_class(Object *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *__s;
   long lVar3;
   long lVar4;
   uint uVar5;
   long lVar6;
   ulong uVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_50;
   char *local_48;
   size_t local_40;
   long local_30;
   lVar2 = *(long*)( this + 8 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      if (lVar2 == 0) {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = String::operator ==(param_1, "Object");
            return uVar7;
         }

         LAB_0010770f:/* WARNING: Subroutine does not return */__stack_chk_fail();
      }

      lVar3 = *(long*)( lVar2 + 0x20 );
      if (lVar3 == 0) {
         local_50 = 0;
      }
 else {
         __s = *(char**)( lVar3 + 8 );
         local_50 = 0;
         if (__s == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar3 + 0x10 ) + -0x10 );
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               do {
                  lVar4 = *plVar1;
                  if (lVar4 == 0) goto LAB_00107623;
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
                  local_50 = *(long*)( lVar3 + 0x10 );
               }

            }

         }
 else {
            local_40 = strlen(__s);
            local_48 = __s;
            String::parse_latin1((StrRange*)&local_50);
         }

      }

      LAB_00107623:uVar5 = String::operator ==(param_1, (String*)&local_50);
      lVar3 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      if ((char)uVar5 != '\0') {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return (ulong)uVar5;
         }

         goto LAB_0010770f;
      }

      lVar2 = *(long*)( lVar2 + 8 );
   }
 while ( true );
}
/* CallableCustomMethodPointer<FreeDesktopPortalDesktop, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<FreeDesktopPortalDesktop,void>::call(CallableCustomMethodPointer<FreeDesktopPortalDesktop,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long *plVar1;
   long lVar2;
   long lVar3;
   char *pcVar4;
   uint uVar5;
   ulong *puVar6;
   code *UNRECOVERED_JUMPTABLE;
   ulong uVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_60;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar5 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar5 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar7 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar7 << 8 );
         LOCK();
         bVar8 = (char)ObjectDB::spin_lock == '\0';
         if (bVar8) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar8) break;
         local_48 = (char*)( uVar7 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar6 = (ulong*)( (ulong)uVar5 * 0x10 + ObjectDB::object_slots );
      uVar7 = *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff;
      if (uVar7 != ( *puVar6 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010790f;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar6[1] == 0) goto LAB_0010790f;
      lVar2 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar3 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar2 + lVar3 ) + -1 );
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x001078e8. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar2 + lVar3 ), uVar7, UNRECOVERED_JUMPTABLE);
            return;
         }

         goto LAB_00107a75;
      }

      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0010790f:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos(( ulong ) & local_60);
      operator+((char *)&
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)&local_58);
      _err_print_error(&_LC8, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      pcVar4 = local_48;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar4 + -0x10, false);
         }

      }

      lVar2 = local_58;
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

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00107a75:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<DisplayServer, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<DisplayServer,void,int>::call(CallableCustomMethodPointer<DisplayServer,void,int> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long *plVar1;
   long lVar2;
   long lVar3;
   ulong uVar4;
   undefined8 uVar5;
   char *pcVar6;
   char cVar7;
   int iVar8;
   uint uVar9;
   ulong *puVar10;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   bool bVar11;
   long local_60;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar9 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar9 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar4 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar4 << 8 );
         LOCK();
         bVar11 = (char)ObjectDB::spin_lock == '\0';
         if (bVar11) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar11) break;
         local_48 = (char*)( uVar4 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar10 = (ulong*)( (ulong)uVar9 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar10 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_00107c38;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar10[1] == 0) goto LAB_00107c38;
      lVar2 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar3 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 2) {
         if (param_2 != 0) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar2 + lVar3 ) + -1 );
            }

            cVar7 = Variant::can_convert_strict(*(undefined4*)*param_1, 2);
            uVar5 = _LC9;
            if (cVar7 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar5;
            }

            iVar8 = Variant::operator_cast_to_int(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x00107be7. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar2 + lVar3 ), iVar8);
               return;
            }

            goto LAB_00107d9e;
         }

         *(undefined4*)param_4 = 4;
         *(undefined4*)( param_4 + 8 ) = 1;
      }
 else {
         *(undefined4*)param_4 = 3;
         *(undefined4*)( param_4 + 8 ) = 1;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_00107c38:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos(( ulong ) & local_60);
      operator+((char *)&
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)&local_58);
      _err_print_error(&_LC8, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      pcVar6 = local_48;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar6 + -0x10, false);
         }

      }

      lVar2 = local_58;
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

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00107d9e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x00108208) *//* WARNING: Removing unreachable block (ram,0x00108338) *//* WARNING: Removing unreachable block (ram,0x00108500) *//* WARNING: Removing unreachable block (ram,0x00108344) *//* WARNING: Removing unreachable block (ram,0x0010834e) *//* WARNING: Removing unreachable block (ram,0x001084e0) *//* WARNING: Removing unreachable block (ram,0x0010835a) *//* WARNING: Removing unreachable block (ram,0x00108364) *//* WARNING: Removing unreachable block (ram,0x001084c0) *//* WARNING: Removing unreachable block (ram,0x00108370) *//* WARNING: Removing unreachable block (ram,0x0010837a) *//* WARNING: Removing unreachable block (ram,0x001084a0) *//* WARNING: Removing unreachable block (ram,0x00108386) *//* WARNING: Removing unreachable block (ram,0x00108390) *//* WARNING: Removing unreachable block (ram,0x00108480) *//* WARNING: Removing unreachable block (ram,0x0010839c) *//* WARNING: Removing unreachable block (ram,0x001083a6) *//* WARNING: Removing unreachable block (ram,0x00108460) *//* WARNING: Removing unreachable block (ram,0x001083b2) *//* WARNING: Removing unreachable block (ram,0x001083bc) *//* WARNING: Removing unreachable block (ram,0x00108440) *//* WARNING: Removing unreachable block (ram,0x001083c4) *//* WARNING: Removing unreachable block (ram,0x001083da) *//* WARNING: Removing unreachable block (ram,0x001083e6) *//* String vformat<char const*>(String const&, char const* const) */String *vformat<char_const*>(String *param_1, char *param_2) {
   char cVar1;
   Variant *this;
   char *in_RDX;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c8[8];
   undefined8 local_c0[9];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, in_RDX);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c8);
   iVar2 = (int)local_c8;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, (bool*)param_2);
   *(undefined8*)param_1 = local_c0[0];
   Array::~Array(local_c8);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar1 = Variant::needs_deinit[local_78[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_78[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x00108e80) *//* WARNING: Removing unreachable block (ram,0x00108fb0) *//* WARNING: Removing unreachable block (ram,0x00109129) *//* WARNING: Removing unreachable block (ram,0x00108fbc) *//* WARNING: Removing unreachable block (ram,0x00108fc6) *//* WARNING: Removing unreachable block (ram,0x0010910b) *//* WARNING: Removing unreachable block (ram,0x00108fd2) *//* WARNING: Removing unreachable block (ram,0x00108fdc) *//* WARNING: Removing unreachable block (ram,0x001090ed) *//* WARNING: Removing unreachable block (ram,0x00108fe8) *//* WARNING: Removing unreachable block (ram,0x00108ff2) *//* WARNING: Removing unreachable block (ram,0x001090cf) *//* WARNING: Removing unreachable block (ram,0x00108ffe) *//* WARNING: Removing unreachable block (ram,0x00109008) *//* WARNING: Removing unreachable block (ram,0x001090b1) *//* WARNING: Removing unreachable block (ram,0x00109014) *//* WARNING: Removing unreachable block (ram,0x0010901e) *//* WARNING: Removing unreachable block (ram,0x00109093) *//* WARNING: Removing unreachable block (ram,0x00109026) *//* WARNING: Removing unreachable block (ram,0x00109030) *//* WARNING: Removing unreachable block (ram,0x00109078) *//* WARNING: Removing unreachable block (ram,0x00109038) *//* WARNING: Removing unreachable block (ram,0x0010904e) *//* WARNING: Removing unreachable block (ram,0x0010905a) *//* String vformat<char32_t, char32_t>(String const&, char32_t const, char32_t const) */String *vformat<char32_t,char32_t>(String *param_1, wchar32 param_2, wchar32 param_3) {
   Variant *pVVar1;
   Variant *pVVar2;
   uint in_ECX;
   undefined4 in_register_00000034;
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
   Variant::Variant(local_70, in_ECX);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_d8);
   iVar3 = (int)local_d8;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, (bool*)CONCAT44(in_register_00000034, param_2));
   *(undefined8*)param_1 = local_d0[0];
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
/* WARNING: Removing unreachable block (ram,0x001092a0) *//* WARNING: Removing unreachable block (ram,0x001093d0) *//* WARNING: Removing unreachable block (ram,0x00109549) *//* WARNING: Removing unreachable block (ram,0x001093dc) *//* WARNING: Removing unreachable block (ram,0x001093e6) *//* WARNING: Removing unreachable block (ram,0x0010952b) *//* WARNING: Removing unreachable block (ram,0x001093f2) *//* WARNING: Removing unreachable block (ram,0x001093fc) *//* WARNING: Removing unreachable block (ram,0x0010950d) *//* WARNING: Removing unreachable block (ram,0x00109408) *//* WARNING: Removing unreachable block (ram,0x00109412) *//* WARNING: Removing unreachable block (ram,0x001094ef) *//* WARNING: Removing unreachable block (ram,0x0010941e) *//* WARNING: Removing unreachable block (ram,0x00109428) *//* WARNING: Removing unreachable block (ram,0x001094d1) *//* WARNING: Removing unreachable block (ram,0x00109434) *//* WARNING: Removing unreachable block (ram,0x0010943e) *//* WARNING: Removing unreachable block (ram,0x001094b3) *//* WARNING: Removing unreachable block (ram,0x00109446) *//* WARNING: Removing unreachable block (ram,0x00109450) *//* WARNING: Removing unreachable block (ram,0x00109498) *//* WARNING: Removing unreachable block (ram,0x00109458) *//* WARNING: Removing unreachable block (ram,0x0010946e) *//* WARNING: Removing unreachable block (ram,0x0010947a) *//* String vformat<char const*, unsigned int>(String const&, char const* const, unsigned int const)
    */String *vformat<char_const*,unsigned_int>(String *param_1, char *param_2, uint param_3) {
   Variant *pVVar1;
   Variant *pVVar2;
   uint in_ECX;
   undefined4 in_register_00000014;
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
   Variant::Variant(local_88, (char*)CONCAT44(in_register_00000014, param_3));
   Variant::Variant(local_70, in_ECX);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_d8);
   iVar3 = (int)local_d8;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, (bool*)param_2);
   *(undefined8*)param_1 = local_d0[0];
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
/* WARNING: Removing unreachable block (ram,0x001096c0) *//* WARNING: Removing unreachable block (ram,0x001097f0) *//* WARNING: Removing unreachable block (ram,0x00109969) *//* WARNING: Removing unreachable block (ram,0x001097fc) *//* WARNING: Removing unreachable block (ram,0x00109806) *//* WARNING: Removing unreachable block (ram,0x0010994b) *//* WARNING: Removing unreachable block (ram,0x00109812) *//* WARNING: Removing unreachable block (ram,0x0010981c) *//* WARNING: Removing unreachable block (ram,0x0010992d) *//* WARNING: Removing unreachable block (ram,0x00109828) *//* WARNING: Removing unreachable block (ram,0x00109832) *//* WARNING: Removing unreachable block (ram,0x0010990f) *//* WARNING: Removing unreachable block (ram,0x0010983e) *//* WARNING: Removing unreachable block (ram,0x00109848) *//* WARNING: Removing unreachable block (ram,0x001098f1) *//* WARNING: Removing unreachable block (ram,0x00109854) *//* WARNING: Removing unreachable block (ram,0x0010985e) *//* WARNING: Removing unreachable block (ram,0x001098d3) *//* WARNING: Removing unreachable block (ram,0x00109866) *//* WARNING: Removing unreachable block (ram,0x00109870) *//* WARNING: Removing unreachable block (ram,0x001098b8) *//* WARNING: Removing unreachable block (ram,0x00109878) *//* WARNING: Removing unreachable block (ram,0x0010988e) *//* WARNING: Removing unreachable block (ram,0x0010989a) *//* String vformat<String, String>(String const&, String const, String const) */undefined8 *vformat<String,String>(undefined8 *param_1, bool *param_2, String *param_3, String *param_4) {
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
/* WARNING: Removing unreachable block (ram,0x00109aa8) *//* WARNING: Removing unreachable block (ram,0x00109bd8) *//* WARNING: Removing unreachable block (ram,0x00109da0) *//* WARNING: Removing unreachable block (ram,0x00109be4) *//* WARNING: Removing unreachable block (ram,0x00109bee) *//* WARNING: Removing unreachable block (ram,0x00109d80) *//* WARNING: Removing unreachable block (ram,0x00109bfa) *//* WARNING: Removing unreachable block (ram,0x00109c04) *//* WARNING: Removing unreachable block (ram,0x00109d60) *//* WARNING: Removing unreachable block (ram,0x00109c10) *//* WARNING: Removing unreachable block (ram,0x00109c1a) *//* WARNING: Removing unreachable block (ram,0x00109d40) *//* WARNING: Removing unreachable block (ram,0x00109c26) *//* WARNING: Removing unreachable block (ram,0x00109c30) *//* WARNING: Removing unreachable block (ram,0x00109d20) *//* WARNING: Removing unreachable block (ram,0x00109c3c) *//* WARNING: Removing unreachable block (ram,0x00109c46) *//* WARNING: Removing unreachable block (ram,0x00109d00) *//* WARNING: Removing unreachable block (ram,0x00109c52) *//* WARNING: Removing unreachable block (ram,0x00109c5c) *//* WARNING: Removing unreachable block (ram,0x00109ce0) *//* WARNING: Removing unreachable block (ram,0x00109c64) *//* WARNING: Removing unreachable block (ram,0x00109c7a) *//* WARNING: Removing unreachable block (ram,0x00109c86) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
   char cVar1;
   Variant *this;
   int iVar2;
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
   iVar2 = (int)local_c8;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, param_2);
   *param_1 = local_c0[0];
   Array::~Array(local_c8);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar1 = Variant::needs_deinit[local_78[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_78[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x00109f20) *//* WARNING: Removing unreachable block (ram,0x0010a050) *//* WARNING: Removing unreachable block (ram,0x0010a1c8) *//* WARNING: Removing unreachable block (ram,0x0010a05c) *//* WARNING: Removing unreachable block (ram,0x0010a066) *//* WARNING: Removing unreachable block (ram,0x0010a1aa) *//* WARNING: Removing unreachable block (ram,0x0010a072) *//* WARNING: Removing unreachable block (ram,0x0010a07c) *//* WARNING: Removing unreachable block (ram,0x0010a18c) *//* WARNING: Removing unreachable block (ram,0x0010a088) *//* WARNING: Removing unreachable block (ram,0x0010a092) *//* WARNING: Removing unreachable block (ram,0x0010a16e) *//* WARNING: Removing unreachable block (ram,0x0010a09e) *//* WARNING: Removing unreachable block (ram,0x0010a0a8) *//* WARNING: Removing unreachable block (ram,0x0010a150) *//* WARNING: Removing unreachable block (ram,0x0010a0b4) *//* WARNING: Removing unreachable block (ram,0x0010a0be) *//* WARNING: Removing unreachable block (ram,0x0010a132) *//* WARNING: Removing unreachable block (ram,0x0010a0c6) *//* WARNING: Removing unreachable block (ram,0x0010a0d0) *//* WARNING: Removing unreachable block (ram,0x0010a117) *//* WARNING: Removing unreachable block (ram,0x0010a0d8) *//* WARNING: Removing unreachable block (ram,0x0010a0ed) *//* WARNING: Removing unreachable block (ram,0x0010a0f9) *//* String vformat<int, int, int>(String const&, int const, int const, int const) */String *vformat<int,int,int>(String *param_1, int param_2, int param_3, int param_4) {
   Variant *pVVar1;
   int iVar2;
   Variant *pVVar3;
   undefined4 in_register_00000034;
   int iVar4;
   int in_R8D;
   long in_FS_OFFSET;
   Array local_f8[8];
   undefined8 local_f0[9];
   Variant local_a8[24];
   Variant local_90[24];
   Variant local_78[24];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_a8, param_3);
   Variant::Variant(local_90, param_4);
   iVar2 = 0;
   Variant::Variant(local_78, in_R8D);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_f8);
   iVar4 = (int)local_f8;
   Array::resize(iVar4);
   pVVar3 = local_a8;
   do {
      iVar2 = iVar2 + 1;
      pVVar1 = (Variant*)Array::operator [](iVar4);
      Variant::operator =(pVVar1, pVVar3);
      pVVar3 = pVVar3 + 0x18;
   }
 while ( iVar2 != 3 );
   String::sprintf((Array*)local_f0, (bool*)CONCAT44(in_register_00000034, param_2));
   *(undefined8*)param_1 = local_f0[0];
   pVVar3 = local_48;
   Array::~Array(local_f8);
   do {
      pVVar1 = pVVar3 + -0x18;
      pVVar3 = pVVar3 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar3 != local_a8 );
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
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
/* FreeDesktopPortalDesktop::FileDialogData::~FileDialogData() */void FreeDesktopPortalDesktop::FileDialogData::~FileDialogData(FileDialogData *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   void *pvVar5;
   if (*(long*)( this + 0x60 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x60 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar4 = *(long*)( this + 0x60 );
         *(undefined8*)( this + 0x60 ) = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x58 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x58 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar4 = *(long*)( this + 0x58 );
         *(undefined8*)( this + 0x58 ) = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   Callable::~Callable((Callable*)( this + 0x48 ));
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
                  if (*(long*)( (long)pvVar5 + 0x18 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x18 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x18 );
                        *(undefined8*)( (long)pvVar5 + 0x18 ) = 0;
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
            if (pvVar5 == (void*)0x0) goto LAB_0010a408;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_0010a408:CowData<String>::_unref((CowData<String>*)( this + 8 ));
   return;
}
/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<String>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<FreeDesktopPortalDesktop::FileDialogData>::_copy_on_write() [clone .isra.0] [clone .cold]
    */void CowData<FreeDesktopPortalDesktop::FileDialogData>::_copy_on_write(void) {
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
      LAB_0010a840:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar10 == 0) goto LAB_0010a840;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_0010a719:if (lVar10 != lVar7) {
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
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_0010a719;
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
      goto LAB_0010a896;
   }

   if (lVar10 == lVar7) {
      LAB_0010a7bf:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_0010a896:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_0010a7aa;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_0010a7bf;
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
   LAB_0010a7aa:puVar9[-1] = param_1;
   return 0;
}
/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::_resize_and_rehash(unsigned int) */void HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::_resize_and_rehash(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>> *this, uint param_1) {
   uint *puVar1;
   undefined8 *puVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   void *pvVar6;
   void *pvVar7;
   void *__s;
   long lVar8;
   long lVar9;
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined8 uVar18;
   void *__s_00;
   int iVar19;
   long lVar20;
   uint uVar21;
   ulong uVar22;
   undefined8 uVar23;
   uint uVar24;
   ulong uVar25;
   ulong uVar26;
   uint local_78;
   *(undefined4*)( this + 0x2c ) = 0;
   uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   if (param_1 < 2) {
      param_1 = 2;
   }

   *(uint*)( this + 0x28 ) = param_1;
   uVar21 = *(uint*)( hash_table_size_primes + (ulong)param_1 * 4 );
   uVar22 = (ulong)uVar21;
   pvVar6 = *(void**)( this + 8 );
   pvVar7 = *(void**)( this + 0x10 );
   uVar26 = uVar22 * 4;
   uVar25 = uVar22 * 8;
   uVar18 = Memory::alloc_static(uVar26, false);
   *(undefined8*)( this + 0x10 ) = uVar18;
   __s_00 = (void*)Memory::alloc_static(uVar25, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar21 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar25 ) ) && ( __s_00 < (void*)( (long)__s + uVar26 ) )) {
         uVar26 = 0;
         do {
            *(undefined4*)( (long)__s + uVar26 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar26 * 8 ) = 0;
            uVar26 = uVar26 + 1;
         }
 while ( uVar22 != uVar26 );
      }
 else {
         memset(__s, 0, uVar26);
         memset(__s_00, 0, uVar25);
      }

   }

   if (uVar3 != 0) {
      uVar26 = 0;
      do {
         uVar21 = *(uint*)( (long)pvVar7 + uVar26 * 4 );
         if (uVar21 != 0) {
            uVar24 = 0;
            lVar8 = *(long*)( this + 0x10 );
            uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar25 = CONCAT44(0, uVar4);
            lVar9 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar21 * lVar9;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar25;
            lVar20 = SUB168(auVar10 * auVar14, 8);
            puVar1 = (uint*)( lVar8 + lVar20 * 4 );
            iVar19 = SUB164(auVar10 * auVar14, 8);
            uVar5 = *puVar1;
            uVar18 = *(undefined8*)( (long)pvVar6 + uVar26 * 8 );
            while (uVar5 != 0) {
               auVar11._8_8_ = 0;
               auVar11._0_8_ = (ulong)uVar5 * lVar9;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = uVar25;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(( uVar4 + iVar19 ) - SUB164(auVar11 * auVar15, 8)) * lVar9;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = uVar25;
               local_78 = SUB164(auVar12 * auVar16, 8);
               uVar23 = uVar18;
               if (local_78 < uVar24) {
                  *puVar1 = uVar21;
                  puVar2 = (undefined8*)( (long)__s_00 + lVar20 * 8 );
                  uVar23 = *puVar2;
                  *puVar2 = uVar18;
                  uVar21 = uVar5;
                  uVar24 = local_78;
               }

               uVar24 = uVar24 + 1;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = ( ulong )(iVar19 + 1) * lVar9;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = uVar25;
               lVar20 = SUB168(auVar13 * auVar17, 8);
               puVar1 = (uint*)( lVar8 + lVar20 * 4 );
               iVar19 = SUB164(auVar13 * auVar17, 8);
               uVar18 = uVar23;
               uVar5 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar20 * 8 ) = uVar18;
            *puVar1 = uVar21;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar26 = uVar26 + 1;
      }
 while ( uVar26 != uVar3 );
      Memory::free_static(pvVar6, false);
      Memory::free_static(pvVar7, false);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::operator[](String const&) */undefined1 * __thiscallHashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator [](HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>> * this, String * param_1) * plVar1 ;ulong __nvoid *__sundefined1 auVar2[16]undefined1 auVar3[16]undefined1 auVar4[16]undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined8 uVar26char cVar27uint uVar28uint uVar29undefined8 *puVar30undefined8 uVar31void *__s_00ulong uVar32int iVar33long lVar34long lVar35ulong uVar36uint *puVar37long lVar38uint uVar39uint uVar40long lVar41long lVar42undefined1(*pauVar43)[16];undefined1(*pauVar44)[16];uint uVar45uint uVar46long in_FS_OFFSETundefined1(*local_88)[16];long local_70undefined1 local_68[16]long local_58[3]long local_40local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar28 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar36 = (ulong)uVar28;if (*(long*)( this + 8 ) == 0) {
   LAB_0010b080:local_70 = 0;
   uVar32 = uVar36 * 4;
   __n = uVar36 * 8;
   uVar31 = Memory::alloc_static(uVar32, false);
   *(undefined8*)( this + 0x10 ) = uVar31;
   __s_00 = (void*)Memory::alloc_static(__n, false);
   *(void**)( this + 8 ) = __s_00;
   if ((int)uVar36 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + __n ) ) && ( __s_00 < (void*)( (long)__s + uVar32 ) )) {
         uVar32 = 0;
         do {
            *(undefined4*)( (long)__s + uVar32 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar32 * 8 ) = 0;
            uVar32 = uVar32 + 1;
         }
 while ( uVar36 != uVar32 );
      }
 else {
         memset(__s, 0, uVar32);
         memset(__s_00, 0, __n);
      }

      LAB_0010af3a:uVar28 = (uint)uVar36;
      iVar33 = *(int*)( this + 0x2c );
      if (iVar33 != 0) {
         LAB_0010af47:uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         lVar38 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         uVar40 = String::hash();
         uVar36 = CONCAT44(0, uVar39);
         lVar42 = *(long*)( this + 0x10 );
         uVar29 = 1;
         if (uVar40 != 0) {
            uVar29 = uVar40;
         }

         uVar46 = 0;
         auVar10._8_8_ = 0;
         auVar10._0_8_ = (ulong)uVar29 * lVar38;
         auVar22._8_8_ = 0;
         auVar22._0_8_ = uVar36;
         lVar35 = SUB168(auVar10 * auVar22, 8);
         uVar40 = *(uint*)( lVar42 + lVar35 * 4 );
         uVar45 = SUB164(auVar10 * auVar22, 8);
         if (uVar40 != 0) {
            do {
               if (uVar40 == uVar29) {
                  cVar27 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar35 * 8 ) + 0x10 ), param_1);
                  if (cVar27 != '\0') {
                     local_88 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar45 * 8 );
                     if (*(long*)( local_88[1] + 8 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)( local_88[1] + 8 ), (CowData*)&local_70);
                        local_88 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar45 * 8 );
                     }

                     goto LAB_0010adf8;
                  }

                  lVar42 = *(long*)( this + 0x10 );
               }

               uVar46 = uVar46 + 1;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = ( ulong )(uVar45 + 1) * lVar38;
               auVar23._8_8_ = 0;
               auVar23._0_8_ = uVar36;
               lVar35 = SUB168(auVar11 * auVar23, 8);
               uVar40 = *(uint*)( lVar42 + lVar35 * 4 );
               uVar45 = SUB164(auVar11 * auVar23, 8);
            }
 while ( ( uVar40 != 0 ) && ( auVar12._8_8_ = 0 ),auVar12._0_8_ = (ulong)uVar40 * lVar38,auVar24._8_8_ = 0,auVar24._0_8_ = uVar36,auVar13._8_8_ = 0,auVar13._0_8_ = ( ulong )(( uVar39 + uVar45 ) - SUB164(auVar12 * auVar24, 8)) * lVar38,auVar25._8_8_ = 0,auVar25._0_8_ = uVar36,uVar46 <= SUB164(auVar13 * auVar25, 8) );
         }

         uVar36 = (ulong)uVar28;
         iVar33 = *(int*)( this + 0x2c );
      }

      goto LAB_0010abd8;
   }

   iVar33 = *(int*)( this + 0x2c );
   if (__s_00 == (void*)0x0) goto LAB_0010abd8;
   uVar28 = 0;
   if (*(int*)( this + 0x2c ) != 0) goto LAB_0010af47;
   LAB_0010abfa:if (*(int*)( this + 0x28 ) == 0x1c) {
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      local_88 = (undefined1(*) [16])0x0;
      goto LAB_0010adf8;
   }

   _resize_and_rehash(this, *(int*)( this + 0x28 ) + 1);
}
 else {
   if (*(int*)( this + 0x2c ) != 0) {
      lVar38 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar29 = String::hash();
      uVar36 = CONCAT44(0, uVar28);
      lVar42 = *(long*)( this + 0x10 );
      uVar39 = 1;
      if (uVar29 != 0) {
         uVar39 = uVar29;
      }

      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)uVar39 * lVar38;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar36;
      lVar35 = SUB168(auVar6 * auVar18, 8);
      uVar29 = *(uint*)( lVar42 + lVar35 * 4 );
      uVar40 = SUB164(auVar6 * auVar18, 8);
      if (uVar29 == 0) {
         lVar41 = *(long*)( this + 8 );
      }
 else {
         lVar41 = *(long*)( this + 8 );
         uVar45 = 0;
         do {
            if (uVar29 == uVar39) {
               cVar27 = String::operator ==((String*)( *(long*)( lVar41 + lVar35 * 8 ) + 0x10 ), param_1);
               if (cVar27 != '\0') {
                  local_88 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar40 * 8 );
                  goto LAB_0010adf8;
               }

               lVar42 = *(long*)( this + 0x10 );
               lVar41 = *(long*)( this + 8 );
            }

            uVar45 = uVar45 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = ( ulong )(uVar40 + 1) * lVar38;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar36;
            lVar35 = SUB168(auVar7 * auVar19, 8);
            uVar29 = *(uint*)( lVar42 + lVar35 * 4 );
            uVar40 = SUB164(auVar7 * auVar19, 8);
         }
 while ( ( uVar29 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar29 * lVar38,auVar20._8_8_ = 0,auVar20._0_8_ = uVar36,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( uVar40 + uVar28 ) - SUB164(auVar8 * auVar20, 8)) * lVar38,auVar21._8_8_ = 0,auVar21._0_8_ = uVar36,uVar45 <= SUB164(auVar9 * auVar21, 8) );
      }

      local_70 = 0;
      uVar36 = ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (lVar41 == 0) goto LAB_0010b080;
      goto LAB_0010af3a;
   }

   local_70 = 0;
   iVar33 = 0;
   LAB_0010abd8:if ((float)uVar36 * __LC83 < (float)( iVar33 + 1 )) goto LAB_0010abfa;
}
local_58[0] = 0;local_68 = (undefined1[16])0x0;if (*(long*)param_1 == 0) {
   local_88 = (undefined1(*) [16])operator_new(0x20, "");
   *(undefined8*)local_88[1] = 0;
   *local_88 = (undefined1[16])0x0;
   LAB_0010b14d:lVar38 = 0;
   *(undefined8*)( local_88[1] + 8 ) = 0;
   puVar30 = *(undefined8**)( this + 0x20 );
   if (puVar30 != (undefined8*)0x0) goto LAB_0010acbd;
   LAB_0010b16a:*(undefined1(**) [16])( this + 0x18 ) = local_88;
}
 else {
   CowData<char32_t>::_ref((CowData<char32_t>*)local_58, (CowData*)param_1);
   lVar38 = local_58[0];
   uVar31 = local_68._0_8_;
   uVar26 = local_68._8_8_;
   local_58[1] = 0;
   local_88 = (undefined1(*) [16])operator_new(0x20, "");
   *(undefined8*)local_88[1] = 0;
   *(undefined8*)*local_88 = uVar31;
   *(undefined8*)( *local_88 + 8 ) = uVar26;
   if (lVar38 == 0) goto LAB_0010b14d;
   CowData<char32_t>::_ref((CowData<char32_t>*)( local_88 + 1 ), (CowData*)local_58);
   *(undefined8*)( local_88[1] + 8 ) = 0;
   LOCK();
   plVar1 = (long*)( lVar38 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      Memory::free_static((void*)( local_58[0] + -0x10 ), false);
   }

   puVar30 = *(undefined8**)( this + 0x20 );
   lVar38 = local_70;
   if (puVar30 == (undefined8*)0x0) goto LAB_0010b16a;
   LAB_0010acbd:*puVar30 = local_88;
   *(undefined8**)( *local_88 + 8 ) = puVar30;
}
*(undefined1(**) [16])( this + 0x20 ) = local_88;uVar28 = String::hash();lVar42 = *(long*)( this + 0x10 );uVar36 = 1;if (uVar28 != 0) {
   uVar36 = (ulong)uVar28;
}
lVar35 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar29 = (uint)uVar36;uVar28 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar32 = CONCAT44(0, uVar28);auVar2._8_8_ = 0;auVar2._0_8_ = uVar36 * lVar35;auVar14._8_8_ = 0;auVar14._0_8_ = uVar32;lVar34 = SUB168(auVar2 * auVar14, 8);lVar41 = *(long*)( this + 8 );puVar37 = (uint*)( lVar42 + lVar34 * 4 );iVar33 = SUB164(auVar2 * auVar14, 8);uVar39 = *puVar37;pauVar44 = local_88;if (uVar39 != 0) {
   uVar40 = 0;
   pauVar43 = local_88;
   do {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar39 * lVar35;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar32;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = ( ulong )(( uVar28 + iVar33 ) - SUB164(auVar3 * auVar15, 8)) * lVar35;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar32;
      uVar29 = SUB164(auVar4 * auVar16, 8);
      pauVar44 = pauVar43;
      if (uVar29 < uVar40) {
         *puVar37 = (uint)uVar36;
         uVar36 = (ulong)uVar39;
         puVar30 = (undefined8*)( lVar41 + lVar34 * 8 );
         pauVar44 = (undefined1(*) [16])*puVar30;
         *puVar30 = pauVar43;
         uVar40 = uVar29;
      }

      uVar29 = (uint)uVar36;
      uVar40 = uVar40 + 1;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = ( ulong )(iVar33 + 1) * lVar35;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar32;
      lVar34 = SUB168(auVar5 * auVar17, 8);
      puVar37 = (uint*)( lVar42 + lVar34 * 4 );
      iVar33 = SUB164(auVar5 * auVar17, 8);
      uVar39 = *puVar37;
      pauVar43 = pauVar44;
   }
 while ( uVar39 != 0 );
}
*(undefined1(**) [16])( lVar41 + lVar34 * 8 ) = pauVar44;*puVar37 = uVar29;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;if (lVar38 != 0) {
   LOCK();
   plVar1 = (long*)( lVar38 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      Memory::free_static((void*)( local_70 + -0x10 ), false);
   }

}
LAB_0010adf8:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return local_88[1] + 8;}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::insert(String const&, String const&,
   bool) */String * HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
         ::insert(String *param_1,String *param_2,bool param_3){
   void *__s;
   undefined1 auVar1[16];
   undefined1 auVar2[16];
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
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   char cVar17;
   uint uVar18;
   long *plVar19;
   undefined8 *puVar20;
   undefined8 uVar21;
   void *__s_00;
   ulong uVar22;
   CowData *in_RCX;
   uint uVar23;
   int iVar24;
   uint uVar25;
   undefined7 in_register_00000011;
   String *pSVar26;
   long lVar27;
   long lVar28;
   uint *puVar29;
   uint uVar30;
   char in_R8B;
   uint uVar31;
   long lVar32;
   long lVar33;
   ulong uVar34;
   long *plVar35;
   long *plVar36;
   uint uVar37;
   ulong uVar38;
   long in_FS_OFFSET;
   uint local_98;
   long local_58;
   long local_50[2];
   long local_40;
   pSVar26 = (String*)CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar23 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   if (*(long*)( param_2 + 8 ) == 0) {
      uVar34 = (ulong)uVar23;
      uVar22 = uVar34 * 4;
      uVar38 = uVar34 * 8;
      uVar21 = Memory::alloc_static(uVar22, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar21;
      __s_00 = (void*)Memory::alloc_static(uVar38, false);
      *(void**)( param_2 + 8 ) = __s_00;
      if (uVar23 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar38 ) ) && ( __s_00 < (void*)( (long)__s + uVar22 ) )) {
            uVar22 = 0;
            do {
               *(undefined4*)( (long)__s + uVar22 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar22 * 8 ) = 0;
               uVar22 = uVar22 + 1;
            }
 while ( uVar34 != uVar22 );
         }
 else {
            memset(__s, 0, uVar22);
            memset(__s_00, 0, uVar38);
         }

         goto LAB_0010b26f;
      }

      iVar24 = *(int*)( param_2 + 0x2c );
      if (__s_00 == (void*)0x0) goto LAB_0010b27f;
      if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_0010b4f8;
      LAB_0010b2a1:if (*(int*)( param_2 + 0x28 ) == 0x1c) {
         plVar19 = (long*)0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_0010b4a9;
      }

      _resize_and_rehash((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
   }
 else {
      LAB_0010b26f:iVar24 = *(int*)( param_2 + 0x2c );
      if (iVar24 != 0) {
         LAB_0010b4f8:uVar18 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
         lVar33 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         uVar31 = String::hash();
         uVar22 = CONCAT44(0, uVar18);
         lVar32 = *(long*)( param_2 + 0x10 );
         uVar30 = 1;
         if (uVar31 != 0) {
            uVar30 = uVar31;
         }

         uVar37 = 0;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = (ulong)uVar30 * lVar33;
         auVar13._8_8_ = 0;
         auVar13._0_8_ = uVar22;
         lVar28 = SUB168(auVar5 * auVar13, 8);
         uVar31 = *(uint*)( lVar32 + lVar28 * 4 );
         uVar25 = SUB164(auVar5 * auVar13, 8);
         if (uVar31 != 0) {
            do {
               if (uVar31 == uVar30) {
                  cVar17 = String::operator ==((String*)( *(long*)( *(long*)( param_2 + 8 ) + lVar28 * 8 ) + 0x10 ), pSVar26);
                  if (cVar17 != '\0') {
                     plVar19 = *(long**)( *(long*)( param_2 + 8 ) + (ulong)uVar25 * 8 );
                     if (plVar19[3] != *(long*)in_RCX) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)( plVar19 + 3 ), in_RCX);
                        plVar19 = *(long**)( *(long*)( param_2 + 8 ) + (ulong)uVar25 * 8 );
                     }

                     goto LAB_0010b4a9;
                  }

                  lVar32 = *(long*)( param_2 + 0x10 );
               }

               uVar37 = uVar37 + 1;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( ulong )(uVar25 + 1) * lVar33;
               auVar14._8_8_ = 0;
               auVar14._0_8_ = uVar22;
               lVar28 = SUB168(auVar6 * auVar14, 8);
               uVar31 = *(uint*)( lVar32 + lVar28 * 4 );
               uVar25 = SUB164(auVar6 * auVar14, 8);
            }
 while ( ( uVar31 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar31 * lVar33,auVar15._8_8_ = 0,auVar15._0_8_ = uVar22,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar18 + uVar25 ) - SUB164(auVar7 * auVar15, 8)) * lVar33,auVar16._8_8_ = 0,auVar16._0_8_ = uVar22,uVar37 <= SUB164(auVar8 * auVar16, 8) );
         }

         iVar24 = *(int*)( param_2 + 0x2c );
      }

      LAB_0010b27f:if ((float)uVar23 * __LC83 < (float)( iVar24 + 1 )) goto LAB_0010b2a1;
   }

   local_58 = 0;
   if (*(long*)pSVar26 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)pSVar26);
   }

   local_50[0] = 0;
   lVar33 = *(long*)in_RCX;
   if (*(long*)in_RCX != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)local_50, in_RCX);
      lVar33 = local_50[0];
   }

   plVar19 = (long*)operator_new(0x20, "");
   lVar32 = local_58;
   plVar19[2] = 0;
   *plVar19 = 0;
   plVar19[1] = 0;
   if (local_58 == 0) {
      plVar19[3] = 0;
      if (lVar33 != 0) goto LAB_0010b352;
      LAB_0010b382:puVar20 = *(undefined8**)( param_2 + 0x20 );
      if (puVar20 != (undefined8*)0x0) goto LAB_0010b390;
      LAB_0010b63e:*(long**)( param_2 + 0x18 ) = plVar19;
      *(long**)( param_2 + 0x20 ) = plVar19;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( plVar19 + 2 ), (CowData*)&local_58);
      plVar19[3] = 0;
      if (lVar33 != 0) {
         LAB_0010b352:CowData<char32_t>::_ref((CowData<char32_t>*)( plVar19 + 3 ), (CowData*)local_50);
         LOCK();
         plVar36 = (long*)( lVar33 + -0x10 );
         *plVar36 = *plVar36 + -1;
         UNLOCK();
         lVar32 = local_58;
         if (*plVar36 == 0) {
            Memory::free_static((void*)( local_50[0] + -0x10 ), false);
            lVar32 = local_58;
         }

         local_58 = lVar32;
         if (lVar32 == 0) goto LAB_0010b382;
      }

      LOCK();
      plVar36 = (long*)( lVar32 + -0x10 );
      *plVar36 = *plVar36 + -1;
      UNLOCK();
      if (*plVar36 != 0) goto LAB_0010b382;
      Memory::free_static((void*)( local_58 + -0x10 ), false);
      puVar20 = *(undefined8**)( param_2 + 0x20 );
      if (puVar20 == (undefined8*)0x0) goto LAB_0010b63e;
      LAB_0010b390:if (in_R8B == '\0') {
         *puVar20 = plVar19;
         plVar19[1] = (long)puVar20;
         *(long**)( param_2 + 0x20 ) = plVar19;
      }
 else {
         lVar33 = *(long*)( param_2 + 0x18 );
         *(long**)( lVar33 + 8 ) = plVar19;
         *plVar19 = lVar33;
         *(long**)( param_2 + 0x18 ) = plVar19;
      }

   }

   uVar18 = String::hash();
   lVar33 = *(long*)( param_2 + 0x10 );
   uVar23 = 1;
   if (uVar18 != 0) {
      uVar23 = uVar18;
   }

   uVar38 = (ulong)uVar23;
   uVar18 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar22 = CONCAT44(0, uVar18);
   lVar32 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   auVar1._8_8_ = 0;
   auVar1._0_8_ = uVar38 * lVar32;
   auVar9._8_8_ = 0;
   auVar9._0_8_ = uVar22;
   lVar27 = SUB168(auVar1 * auVar9, 8);
   lVar28 = *(long*)( param_2 + 8 );
   puVar29 = (uint*)( lVar33 + lVar27 * 4 );
   iVar24 = SUB164(auVar1 * auVar9, 8);
   uVar30 = *puVar29;
   plVar36 = plVar19;
   if (uVar30 != 0) {
      uVar31 = 0;
      plVar35 = plVar19;
      do {
         auVar2._8_8_ = 0;
         auVar2._0_8_ = (ulong)uVar30 * lVar32;
         auVar10._8_8_ = 0;
         auVar10._0_8_ = uVar22;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = ( ulong )(( iVar24 + uVar18 ) - SUB164(auVar2 * auVar10, 8)) * lVar32;
         auVar11._8_8_ = 0;
         auVar11._0_8_ = uVar22;
         local_98 = SUB164(auVar3 * auVar11, 8);
         plVar36 = plVar35;
         if (local_98 < uVar31) {
            *puVar29 = (uint)uVar38;
            uVar38 = (ulong)uVar30;
            puVar20 = (undefined8*)( lVar28 + lVar27 * 8 );
            plVar36 = (long*)*puVar20;
            *puVar20 = plVar35;
            uVar31 = local_98;
         }

         uVar23 = (uint)uVar38;
         uVar31 = uVar31 + 1;
         auVar4._8_8_ = 0;
         auVar4._0_8_ = ( ulong )(iVar24 + 1) * lVar32;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = uVar22;
         lVar27 = SUB168(auVar4 * auVar12, 8);
         puVar29 = (uint*)( lVar33 + lVar27 * 4 );
         iVar24 = SUB164(auVar4 * auVar12, 8);
         uVar30 = *puVar29;
         plVar35 = plVar36;
      }
 while ( uVar30 != 0 );
   }

   *(long**)( lVar28 + lVar27 * 8 ) = plVar36;
   *puVar29 = uVar23;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_0010b4a9:*(long**)param_1 = plVar19;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> >
   >::TEMPNAMEPLACEHOLDERVALUE(HashMap<String, String, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, String> > >
   const&) */void HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator =(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>> *this, HashMap *param_1) {
   void *pvVar1;
   long lVar2;
   uint uVar3;
   uint uVar5;
   long *plVar6;
   long lVar7;
   long in_FS_OFFSET;
   String local_48[8];
   long local_40;
   ulong uVar4;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this != (HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)param_1) {
      uVar5 = *(uint*)( this + 0x28 );
      uVar3 = *(uint*)( hash_table_size_primes + (ulong)uVar5 * 4 );
      if (( *(int*)( this + 0x2c ) != 0 ) && ( *(long*)( this + 8 ) != 0 )) {
         if (uVar3 != 0) {
            lVar7 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x10 ) + lVar7 ) != 0) {
                  *(int*)( *(long*)( this + 0x10 ) + lVar7 ) = 0;
                  pvVar1 = *(void**)( *(long*)( this + 8 ) + lVar7 * 2 );
                  if (*(long*)( (long)pvVar1 + 0x18 ) != 0) {
                     LOCK();
                     plVar6 = (long*)( *(long*)( (long)pvVar1 + 0x18 ) + -0x10 );
                     *plVar6 = *plVar6 + -1;
                     UNLOCK();
                     if (*plVar6 == 0) {
                        lVar2 = *(long*)( (long)pvVar1 + 0x18 );
                        *(undefined8*)( (long)pvVar1 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar2 + -0x10 ), false);
                     }

                  }

                  if (*(long*)( (long)pvVar1 + 0x10 ) != 0) {
                     LOCK();
                     plVar6 = (long*)( *(long*)( (long)pvVar1 + 0x10 ) + -0x10 );
                     *plVar6 = *plVar6 + -1;
                     UNLOCK();
                     if (*plVar6 == 0) {
                        lVar2 = *(long*)( (long)pvVar1 + 0x10 );
                        *(undefined8*)( (long)pvVar1 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar2 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar1, false);
                  *(undefined8*)( *(long*)( this + 8 ) + lVar7 * 2 ) = 0;
               }

               lVar7 = lVar7 + 4;
            }
 while ( lVar7 != (ulong)uVar3 << 2 );
            uVar5 = *(uint*)( this + 0x28 );
            uVar3 = *(uint*)( hash_table_size_primes + (ulong)uVar5 * 4 );
         }

         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
      }

      if (uVar3 < *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x28 ) * 4 )) {
         if (uVar5 != 0x1c) {
            uVar4 = (ulong)uVar5;
            do {
               uVar3 = (int)uVar4 + 1;
               uVar4 = (ulong)uVar3;
               if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x28 ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar4 * 4 )) {
                  if (uVar3 != uVar5) {
                     if (*(long*)( this + 8 ) == 0) {
                        *(uint*)( this + 0x28 ) = uVar3;
                     }
 else {
                        _resize_and_rehash(this, uVar3);
                     }

                  }

                  goto LAB_0010b8d9;
               }

            }
 while ( uVar3 != 0x1c );
         }

         _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
      }

      LAB_0010b8d9:if (( *(long*)( param_1 + 8 ) != 0 ) && ( plVar6 = *(long**)( param_1 + 0x18 ) ),plVar6 != (long*)0x0) {
         do {
            insert(local_48, (String*)this, (bool)( (char)plVar6 + '\x10' ));
            plVar6 = (long*)*plVar6;
         }
 while ( plVar6 != (long*)0x0 );
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<FreeDesktopPortalDesktop::FileDialogData>::_unref() */void CowData<FreeDesktopPortalDesktop::FileDialogData>::_unref(CowData<FreeDesktopPortalDesktop::FileDialogData> *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   code *pcVar6;
   int *piVar7;
   void *pvVar8;
   long lVar9;
   long lVar10;
   long lVar11;
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

   lVar3 = *(long*)this;
   if (lVar3 == 0) {
      /* WARNING: Does not return */
      pcVar6 = (code*)invalidInstructionException();
      ( *pcVar6 )();
   }

   lVar4 = *(long*)( lVar3 + -8 );
   lVar9 = 0;
   *(undefined8*)this = 0;
   lVar10 = lVar3;
   if (lVar4 != 0) {
      do {
         if (*(long*)( lVar10 + 0x60 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( lVar10 + 0x60 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar11 = *(long*)( lVar10 + 0x60 );
               *(undefined8*)( lVar10 + 0x60 ) = 0;
               Memory::free_static((void*)( lVar11 + -0x10 ), false);
            }

         }

         if (*(long*)( lVar10 + 0x58 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( lVar10 + 0x58 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar11 = *(long*)( lVar10 + 0x58 );
               *(undefined8*)( lVar10 + 0x58 ) = 0;
               Memory::free_static((void*)( lVar11 + -0x10 ), false);
            }

         }

         Callable::~Callable((Callable*)( lVar10 + 0x48 ));
         pvVar8 = *(void**)( lVar10 + 0x18 );
         if (pvVar8 != (void*)0x0) {
            if (*(int*)( lVar10 + 0x3c ) != 0) {
               uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar10 + 0x38 ) * 4 );
               if (uVar2 == 0) {
                  *(undefined4*)( lVar10 + 0x3c ) = 0;
                  *(undefined1(*) [16])( lVar10 + 0x28 ) = (undefined1[16])0x0;
               }
 else {
                  lVar11 = 0;
                  do {
                     piVar7 = (int*)( *(long*)( lVar10 + 0x20 ) + lVar11 );
                     if (*piVar7 != 0) {
                        pvVar8 = *(void**)( (long)pvVar8 + lVar11 * 2 );
                        *piVar7 = 0;
                        if (*(long*)( (long)pvVar8 + 0x18 ) != 0) {
                           LOCK();
                           plVar1 = (long*)( *(long*)( (long)pvVar8 + 0x18 ) + -0x10 );
                           *plVar1 = *plVar1 + -1;
                           UNLOCK();
                           if (*plVar1 == 0) {
                              lVar5 = *(long*)( (long)pvVar8 + 0x18 );
                              *(undefined8*)( (long)pvVar8 + 0x18 ) = 0;
                              Memory::free_static((void*)( lVar5 + -0x10 ), false);
                           }

                        }

                        if (*(long*)( (long)pvVar8 + 0x10 ) != 0) {
                           LOCK();
                           plVar1 = (long*)( *(long*)( (long)pvVar8 + 0x10 ) + -0x10 );
                           *plVar1 = *plVar1 + -1;
                           UNLOCK();
                           if (*plVar1 == 0) {
                              lVar5 = *(long*)( (long)pvVar8 + 0x10 );
                              *(undefined8*)( (long)pvVar8 + 0x10 ) = 0;
                              Memory::free_static((void*)( lVar5 + -0x10 ), false);
                           }

                        }

                        Memory::free_static(pvVar8, false);
                        pvVar8 = *(void**)( lVar10 + 0x18 );
                        *(undefined8*)( (long)pvVar8 + lVar11 * 2 ) = 0;
                     }

                     lVar11 = lVar11 + 4;
                  }
 while ( lVar11 != (ulong)uVar2 << 2 );
                  *(undefined4*)( lVar10 + 0x3c ) = 0;
                  *(undefined1(*) [16])( lVar10 + 0x28 ) = (undefined1[16])0x0;
                  if (pvVar8 == (void*)0x0) goto LAB_0010bbf4;
               }

            }

            Memory::free_static(pvVar8, false);
            Memory::free_static(*(void**)( lVar10 + 0x20 ), false);
         }

         LAB_0010bbf4:lVar9 = lVar9 + 1;
         CowData<String>::_unref((CowData<String>*)( lVar10 + 8 ));
         lVar10 = lVar10 + 0x70;
      }
 while ( lVar4 != lVar9 );
   }

   Memory::free_static((void*)( lVar3 + -0x10 ), false);
   return;
}
/* CowData<FreeDesktopPortalDesktop::FileDialogData>::_realloc(long) */undefined8 CowData<FreeDesktopPortalDesktop::FileDialogData>::_realloc(CowData<FreeDesktopPortalDesktop::FileDialogData> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<FreeDesktopPortalDesktop::FileDialogData>::resize<false>(long) */undefined8 CowData<FreeDesktopPortalDesktop::FileDialogData>::resize<false>(CowData<FreeDesktopPortalDesktop::FileDialogData> *this, long param_1) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   code *pcVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   undefined8 uVar7;
   long lVar8;
   undefined8 *puVar9;
   int *piVar10;
   long lVar11;
   ulong uVar12;
   void *pvVar13;
   ulong uVar14;
   long lVar15;
   long local_48;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      lVar8 = 0;
      _copy_on_write(this);
      local_48 = 0;
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
      local_48 = lVar8 * 0x70;
      if (local_48 != 0) {
         uVar12 = local_48 - 1U | local_48 - 1U >> 1;
         uVar12 = uVar12 | uVar12 >> 2;
         uVar12 = uVar12 | uVar12 >> 4;
         uVar12 = uVar12 | uVar12 >> 8;
         uVar12 = uVar12 | uVar12 >> 0x10;
         local_48 = ( uVar12 | uVar12 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x70 == 0) {
      LAB_0010c190:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar12 = param_1 * 0x70 - 1;
   uVar12 = uVar12 >> 1 | uVar12;
   uVar12 = uVar12 | uVar12 >> 2;
   uVar12 = uVar12 | uVar12 >> 4;
   uVar12 = uVar12 | uVar12 >> 8;
   uVar12 = uVar12 | uVar12 >> 0x10;
   uVar12 = uVar12 | uVar12 >> 0x20;
   lVar11 = uVar12 + 1;
   if (lVar11 == 0) goto LAB_0010c190;
   uVar14 = param_1;
   if (param_1 <= lVar8) {
      while (lVar8 = *(long*)this,lVar8 != 0) {
         if (*(ulong*)( lVar8 + -8 ) <= uVar14) {
            if (lVar11 != local_48) {
               uVar7 = _realloc(this, lVar11);
               if ((int)uVar7 != 0) {
                  return uVar7;
               }

               lVar8 = *(long*)this;
               if (lVar8 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar4 = (code*)invalidInstructionException();
                  ( *pcVar4 )();
               }

            }

            *(long*)( lVar8 + -8 ) = param_1;
            return 0;
         }

         lVar8 = lVar8 + uVar14 * 0x70;
         if (*(long*)( lVar8 + 0x60 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( lVar8 + 0x60 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar15 = *(long*)( lVar8 + 0x60 );
               *(undefined8*)( lVar8 + 0x60 ) = 0;
               Memory::free_static((void*)( lVar15 + -0x10 ), false);
            }

         }

         if (*(long*)( lVar8 + 0x58 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( lVar8 + 0x58 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar15 = *(long*)( lVar8 + 0x58 );
               *(undefined8*)( lVar8 + 0x58 ) = 0;
               Memory::free_static((void*)( lVar15 + -0x10 ), false);
            }

         }

         Callable::~Callable((Callable*)( lVar8 + 0x48 ));
         pvVar13 = *(void**)( lVar8 + 0x18 );
         if (pvVar13 != (void*)0x0) {
            if (*(int*)( lVar8 + 0x3c ) != 0) {
               uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar8 + 0x38 ) * 4 );
               if (uVar2 == 0) {
                  *(undefined4*)( lVar8 + 0x3c ) = 0;
                  *(undefined1(*) [16])( lVar8 + 0x28 ) = (undefined1[16])0x0;
               }
 else {
                  lVar15 = 0;
                  do {
                     piVar10 = (int*)( *(long*)( lVar8 + 0x20 ) + lVar15 );
                     if (*piVar10 != 0) {
                        *piVar10 = 0;
                        pvVar13 = *(void**)( (long)pvVar13 + lVar15 * 2 );
                        if (*(long*)( (long)pvVar13 + 0x18 ) != 0) {
                           LOCK();
                           plVar1 = (long*)( *(long*)( (long)pvVar13 + 0x18 ) + -0x10 );
                           *plVar1 = *plVar1 + -1;
                           UNLOCK();
                           if (*plVar1 == 0) {
                              lVar3 = *(long*)( (long)pvVar13 + 0x18 );
                              *(undefined8*)( (long)pvVar13 + 0x18 ) = 0;
                              Memory::free_static((void*)( lVar3 + -0x10 ), false);
                           }

                        }

                        if (*(long*)( (long)pvVar13 + 0x10 ) != 0) {
                           LOCK();
                           plVar1 = (long*)( *(long*)( (long)pvVar13 + 0x10 ) + -0x10 );
                           *plVar1 = *plVar1 + -1;
                           UNLOCK();
                           if (*plVar1 == 0) {
                              lVar3 = *(long*)( (long)pvVar13 + 0x10 );
                              *(undefined8*)( (long)pvVar13 + 0x10 ) = 0;
                              Memory::free_static((void*)( lVar3 + -0x10 ), false);
                           }

                        }

                        Memory::free_static(pvVar13, false);
                        pvVar13 = *(void**)( lVar8 + 0x18 );
                        *(undefined8*)( (long)pvVar13 + lVar15 * 2 ) = 0;
                     }

                     lVar15 = lVar15 + 4;
                  }
 while ( lVar15 != (ulong)uVar2 << 2 );
                  *(undefined4*)( lVar8 + 0x3c ) = 0;
                  *(undefined1(*) [16])( lVar8 + 0x28 ) = (undefined1[16])0x0;
                  if (pvVar13 == (void*)0x0) goto LAB_0010c062;
               }

            }

            Memory::free_static(pvVar13, false);
            Memory::free_static(*(void**)( lVar8 + 0x20 ), false);
         }

         LAB_0010c062:CowData<String>::_unref((CowData<String>*)( lVar8 + 8 ));
         uVar14 = uVar14 + 1;
      }
;
      goto LAB_0010c1e6;
   }

   if (lVar11 == local_48) {
      LAB_0010c0ba:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_0010c1e6:/* WARNING: Does not return */pcVar4 = (code*)invalidInstructionException();
         ( *pcVar4 )();
      }

      lVar8 = puVar9[-1];
      if (param_1 <= lVar8) goto LAB_0010bebc;
   }
 else {
      if (lVar8 != 0) {
         uVar7 = _realloc(this, lVar11);
         if ((int)uVar7 != 0) {
            return uVar7;
         }

         goto LAB_0010c0ba;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar12 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar9 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar9;
      lVar8 = 0;
   }

   uVar7 = _LC100;
   puVar5 = puVar9 + lVar8 * 0xe;
   do {
      puVar5[1] = 0;
      puVar6 = puVar5 + 0xe;
      *(undefined1(*) [16])( puVar5 + 3 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( puVar5 + 5 ) = (undefined1[16])0x0;
      puVar5[7] = uVar7;
      *(undefined4*)( puVar5 + 8 ) = 0xffffffff;
      puVar5[9] = 0;
      puVar5[10] = 0;
      *(undefined1(*) [16])( puVar5 + 0xb ) = (undefined1[16])0x0;
      *(undefined1*)( puVar5 + 0xd ) = 0;
      puVar5 = puVar6;
   }
 while ( puVar6 != puVar9 + param_1 * 0xe );
   LAB_0010bebc:puVar9[-1] = param_1;
   return 0;
}
/* WARNING: Control flow encountered bad instruction data *//* FreeDesktopPortalDesktop::FileDialogData::~FileDialogData() */void FreeDesktopPortalDesktop::FileDialogData::~FileDialogData(FileDialogData *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<FreeDesktopPortalDesktop, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<FreeDesktopPortalDesktop,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<FreeDesktopPortalDesktop,void> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<DisplayServer, void, int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<DisplayServer,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<DisplayServer,void,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

