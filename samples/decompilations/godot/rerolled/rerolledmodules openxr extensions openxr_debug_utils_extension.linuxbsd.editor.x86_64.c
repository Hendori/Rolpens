/* OpenXRDebugUtilsExtension::~OpenXRDebugUtilsExtension() */void OpenXRDebugUtilsExtension::~OpenXRDebugUtilsExtension(OpenXRDebugUtilsExtension *this) {
   singleton = 0;
   return;
}
/* OpenXRDebugUtilsExtension::~OpenXRDebugUtilsExtension() */void OpenXRDebugUtilsExtension::~OpenXRDebugUtilsExtension(OpenXRDebugUtilsExtension *this) {
   singleton = 0;
   operator_delete(this, 0x48);
   return;
}
/* OpenXRDebugUtilsExtension::on_instance_destroyed() */void OpenXRDebugUtilsExtension::on_instance_destroyed(OpenXRDebugUtilsExtension *this) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   int iVar4;
   long in_FS_OFFSET;
   long local_60;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x10 ) == 0) goto LAB_00100075;
   if (*(code**)( this + 0x20 ) == (code*)0x0) {
      iVar4 = -0xc;
      LAB_001000b0:local_50 = 0;
      local_48 = &_LC0;
      local_40 = 1;
      String::parse_latin1((StrRange*)&local_50);
      OpenXRAPI::get_error_string(&local_60, OpenXRAPI::singleton, iVar4);
      operator+((char *)&
      local_58,(String*)"OpenXR: Failed to destroy debug callback [";
      String::operator +((String*)&local_48, (String*)&local_58);
      _err_print_error("on_instance_destroyed", "modules/openxr/extensions/openxr_debug_utils_extension.cpp", 0x85, (String*)&local_48, 0, 0);
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
 else {
      iVar4 = ( **(code**)( this + 0x20 ) )();
      if (iVar4 < 0) goto LAB_001000b0;
   }

   *(undefined8*)( this + 0x10 ) = 0;
   LAB_00100075:this[8] = (OpenXRDebugUtilsExtension)0x0;
   for (int i = 0; i < 3; i++) {
      *(undefined1(*) [16])( this + ( 16*i + 24 ) ) = (undefined1[16])0;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRDebugUtilsExtension::get_singleton() */undefined8 OpenXRDebugUtilsExtension::get_singleton(void) {
   return singleton;
}
/* OpenXRDebugUtilsExtension::OpenXRDebugUtilsExtension() */void OpenXRDebugUtilsExtension::OpenXRDebugUtilsExtension(OpenXRDebugUtilsExtension *this) {
   this[8] = (OpenXRDebugUtilsExtension)0x0;
   *(undefined***)this = &PTR_get_requested_extensions_00102d48;
   *(undefined8*)( this + 0x10 ) = 0;
   singleton = this;
   for (int i = 0; i < 3; i++) {
      *(undefined1(*) [16])( this + ( 16*i + 24 ) ) = (undefined1[16])0;
   }

   return;
}
/* OpenXRDebugUtilsExtension::get_active() */OpenXRDebugUtilsExtension OpenXRDebugUtilsExtension::get_active(OpenXRDebugUtilsExtension *this) {
   return this[8];
}
/* OpenXRDebugUtilsExtension::set_object_name(XrObjectType, unsigned long, char const*) */void OpenXRDebugUtilsExtension::set_object_name(OpenXRDebugUtilsExtension *this, undefined4 param_2, undefined8 param_3, undefined8 param_4) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   int iVar4;
   char *pcVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined8 local_60;
   undefined4 local_58;
   undefined1 local_54[12];
   undefined4 uStack_48;
   undefined4 local_44;
   undefined8 local_40;
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[8] == (OpenXRDebugUtilsExtension)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar6 = 0x99;
         pcVar5 = "Condition \"!debug_utils_ext\" is true.";
         LAB_00100472:_err_print_error("set_object_name", "modules/openxr/extensions/openxr_debug_utils_extension.cpp", uVar6, pcVar5, 0, 0);
         return;
      }

   }
 else if (*(code**)( this + 0x28 ) == (code*)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar6 = 0x9a;
         pcVar5 = "Parameter \"xrSetDebugUtilsObjectNameEXT_ptr\" is null.";
         goto LAB_00100472;
      }

   }
 else {
      local_44 = 0;
      local_54 = SUB1612((undefined1[16])0x0, 0);
      uStack_48 = param_2;
      local_58 = 0x3b9b1438;
      local_40 = param_3;
      local_38 = param_4;
      iVar4 = ( **(code**)( this + 0x28 ) )(*(undefined8*)( OpenXRAPI::singleton + 0xd0 ), &local_58);
      if (iVar4 < 0) {
         local_70 = 0;
         local_68 = &_LC0;
         local_60 = 1;
         String::parse_latin1((StrRange*)&local_70);
         OpenXRAPI::get_error_string(&local_80, OpenXRAPI::singleton, iVar4);
         operator+((char *)&
         local_78,(String*)"OpenXR: Failed to set object name [";
         String::operator +((String*)&local_68, (String*)&local_78);
         _err_print_error("set_object_name", "modules/openxr/extensions/openxr_debug_utils_extension.cpp", 0xa6, (String*)&local_68, 0, 0);
         puVar3 = local_68;
         if (local_68 != (undefined*)0x0) {
            LOCK();
            plVar1 = (long*)( local_68 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_68 = (undefined*)0x0;
               Memory::free_static(puVar3 + -0x10, false);
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

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRDebugUtilsExtension::on_instance_created(XrInstance_T*) */void OpenXRDebugUtilsExtension::on_instance_created(OpenXRDebugUtilsExtension *this, XrInstance_T *param_1) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   int iVar4;
   uint uVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
   OpenXRDebugUtilsExtension OVar7;
   long local_b0;
   long local_a8;
   long local_a0;
   undefined *local_98;
   undefined8 local_90;
   undefined4 local_88;
   undefined4 uStack_84;
   undefined8 uStack_80;
   int iStack_78;
   undefined4 uStack_74;
   ulong local_70;
   undefined1 local_68[16];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[8] == (OpenXRDebugUtilsExtension)0x0) {
      _err_print_error("on_instance_created", "modules/openxr/extensions/openxr_debug_utils_extension.cpp", 0x48, "OpenXR: The debug utils extension is not available on this runtime. Debug logging is not enabled!", 0, 1);
      OVar7 = this[8];
      LAB_00100644:if (OVar7 != (OpenXRDebugUtilsExtension)0x0) {
         ProjectSettings::get_singleton();
         StringName::StringName((StringName*)&local_88, "xr/openxr/extensions/debug_utils", false);
         ProjectSettings::get_setting_with_override((StringName*)local_58);
         iVar4 = Variant::operator_cast_to_int((Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_84, local_88) != 0 )) {
            StringName::unref();
         }

         ProjectSettings::get_singleton();
         StringName::StringName((StringName*)&local_88, "xr/openxr/extensions/debug_message_types", false);
         ProjectSettings::get_setting_with_override((StringName*)local_58);
         uVar5 = Variant::operator_cast_to_int((Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_84, local_88) != 0 )) {
            StringName::unref();
         }

         iStack_78 = 0;
         if (( 0 < iVar4 ) && ( iStack_78 = iVar4 != 1 )) {
            if (iVar4 == 2) {
               iStack_78 = 0x1100;
            }
 else {
               iStack_78 = ( iVar4 != 3 ) + 0x1110;
            }

         }

         local_88 = 0x3b9b143a;
         uStack_84 = 0;
         uStack_80 = 0;
         uStack_74 = 0;
         local_70 = ( ulong )(uVar5 & 3) | 4;
         if (( uVar5 & 4 ) == 0) {
            local_70 = ( ulong )(uVar5 & 3);
         }

         if (( uVar5 & 8 ) != 0) {
            local_70 = local_70 | 8;
         }

         local_68 = ZEXT816(0x101a90);
         if (*(code**)( this + 0x18 ) == (code*)0x0) {
            iVar4 = -0xc;
            LAB_001007d0:local_a0 = 0;
            local_98 = &_LC0;
            local_90 = 1;
            String::parse_latin1((StrRange*)&local_a0);
            OpenXRAPI::get_error_string(&local_b0, OpenXRAPI::singleton, iVar4);
            operator+((char *)&
            local_a8,(String*)"OpenXR: Failed to create debug callback [";
            String::operator +((String*)&local_98, (String*)&local_a8);
            _err_print_error("on_instance_created", "modules/openxr/extensions/openxr_debug_utils_extension.cpp", 0x7a, (String*)&local_98, 0, 0);
            puVar3 = local_98;
            if (local_98 != (undefined*)0x0) {
               LOCK();
               plVar1 = (long*)( local_98 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_98 = (undefined*)0x0;
                  Memory::free_static(puVar3 + -0x10, false);
               }

            }

            lVar2 = local_a8;
            if (local_a8 != 0) {
               LOCK();
               plVar1 = (long*)( local_a8 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_a8 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }

            }

            lVar2 = local_b0;
            if (local_b0 != 0) {
               LOCK();
               plVar1 = (long*)( local_b0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_b0 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }

            }

            lVar2 = local_a0;
            if (local_a0 != 0) {
               LOCK();
               plVar1 = (long*)( local_a0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_a0 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }

            }

         }
 else {
            iVar4 = ( **(code**)( this + 0x18 ) )(param_1, (StringName*)&local_88, this + 0x10);
            if (iVar4 < 0) goto LAB_001007d0;
         }

         set_object_name(this, 1, param_1, "Main Godot OpenXR Instance");
      }

   }
 else {
      iVar4 = OpenXRAPI::get_instance_proc_addr(OpenXRAPI::singleton, (_func_void*)"xrCreateDebugUtilsMessengerEXT");
      if (iVar4 < 0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = 0x3f;
            LAB_00100909:_err_print_error("on_instance_created", "modules/openxr/extensions/openxr_debug_utils_extension.cpp", uVar6, "Condition \"((get_instance_proc_addr_result) < 0)\" is true.", 0, 0);
            return;
         }

         goto LAB_00100ab2;
      }

      iVar4 = OpenXRAPI::get_instance_proc_addr(OpenXRAPI::singleton, (_func_void*)"xrDestroyDebugUtilsMessengerEXT");
      if (iVar4 < 0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = 0x40;
            goto LAB_00100909;
         }

         goto LAB_00100ab2;
      }

      iVar4 = OpenXRAPI::get_instance_proc_addr(OpenXRAPI::singleton, (_func_void*)"xrSetDebugUtilsObjectNameEXT");
      if (iVar4 < 0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = 0x41;
            goto LAB_00100909;
         }

         goto LAB_00100ab2;
      }

      iVar4 = OpenXRAPI::get_instance_proc_addr(OpenXRAPI::singleton, (_func_void*)"xrSessionBeginDebugUtilsLabelRegionEXT");
      if (iVar4 < 0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = 0x42;
            goto LAB_00100909;
         }

         goto LAB_00100ab2;
      }

      iVar4 = OpenXRAPI::get_instance_proc_addr(OpenXRAPI::singleton, (_func_void*)"xrSessionEndDebugUtilsLabelRegionEXT");
      if (iVar4 < 0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = 0x43;
            goto LAB_00100909;
         }

         goto LAB_00100ab2;
      }

      iVar4 = OpenXRAPI::get_instance_proc_addr(OpenXRAPI::singleton, (_func_void*)"xrSessionInsertDebugUtilsLabelEXT");
      if (iVar4 < 0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = 0x44;
            goto LAB_00100909;
         }

         goto LAB_00100ab2;
      }

      if (( ( ( *(long*)( this + 0x18 ) != 0 ) && ( *(long*)( this + 0x20 ) != 0 ) ) && ( *(long*)( this + 0x28 ) != 0 ) ) && ( ( *(long*)( this + 0x30 ) != 0 && ( *(long*)( this + 0x38 ) != 0 ) ) )) {
         OVar7 = ( OpenXRDebugUtilsExtension )(*(long*)( this + 0x40 ) != 0);
         this[8] = OVar7;
         goto LAB_00100644;
      }

      this[8] = (OpenXRDebugUtilsExtension)0x0;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00100ab2:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* OpenXRDebugUtilsExtension::begin_debug_label_region(char const*) */void OpenXRDebugUtilsExtension::begin_debug_label_region(OpenXRDebugUtilsExtension *this, char *param_1) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   int iVar4;
   char *pcVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   long local_60;
   undefined *local_58;
   undefined8 local_50;
   undefined4 local_48;
   undefined8 local_44;
   undefined4 local_3c;
   char *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[8] == (OpenXRDebugUtilsExtension)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar6 = 0xab;
         pcVar5 = "Condition \"!debug_utils_ext\" is true.";
         LAB_00100cc2:_err_print_error("begin_debug_label_region", "modules/openxr/extensions/openxr_debug_utils_extension.cpp", uVar6, pcVar5, 0, 0);
         return;
      }

   }
 else if (*(code**)( this + 0x30 ) == (code*)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar6 = 0xac;
         pcVar5 = "Parameter \"xrSessionBeginDebugUtilsLabelRegionEXT_ptr\" is null.";
         goto LAB_00100cc2;
      }

   }
 else {
      local_44 = 0;
      local_3c = 0;
      local_48 = 0x3b9b143b;
      local_38 = param_1;
      iVar4 = ( **(code**)( this + 0x30 ) )(*(undefined8*)( OpenXRAPI::singleton + 0xf8 ), &local_48);
      if (iVar4 < 0) {
         local_60 = 0;
         local_58 = &_LC0;
         local_50 = 1;
         String::parse_latin1((StrRange*)&local_60);
         OpenXRAPI::get_error_string(&local_70, OpenXRAPI::singleton, iVar4);
         operator+((char *)&
         local_68,(String*)"OpenXR: Failed to begin label region [";
         String::operator +((String*)&local_58, (String*)&local_68);
         _err_print_error("begin_debug_label_region", "modules/openxr/extensions/openxr_debug_utils_extension.cpp", 0xb6, (String*)&local_58, 0, 0);
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

      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRDebugUtilsExtension::end_debug_label_region() */void OpenXRDebugUtilsExtension::end_debug_label_region(OpenXRDebugUtilsExtension *this) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   int iVar4;
   char *pcVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
   long local_60;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[8] == (OpenXRDebugUtilsExtension)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar6 = 0xbb;
         pcVar5 = "Condition \"!debug_utils_ext\" is true.";
         LAB_00100ef2:_err_print_error("end_debug_label_region", "modules/openxr/extensions/openxr_debug_utils_extension.cpp", uVar6, pcVar5, 0, 0);
         return;
      }

   }
 else if (*(code**)( this + 0x38 ) == (code*)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar6 = 0xbc;
         pcVar5 = "Parameter \"xrSessionEndDebugUtilsLabelRegionEXT_ptr\" is null.";
         goto LAB_00100ef2;
      }

   }
 else {
      iVar4 = ( **(code**)( this + 0x38 ) )(*(undefined8*)( OpenXRAPI::singleton + 0xf8 ));
      if (iVar4 < 0) {
         local_50 = 0;
         local_48 = &_LC0;
         local_40 = 1;
         String::parse_latin1((StrRange*)&local_50);
         OpenXRAPI::get_error_string(&local_60, OpenXRAPI::singleton, iVar4);
         operator+((char *)&
         local_58,(String*)"OpenXR: Failed to end label region [";
         String::operator +((String*)&local_48, (String*)&local_58);
         _err_print_error("end_debug_label_region", "modules/openxr/extensions/openxr_debug_utils_extension.cpp", 0xc0, (String*)&local_48, 0, 0);
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

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRDebugUtilsExtension::insert_debug_label(char const*) */void OpenXRDebugUtilsExtension::insert_debug_label(OpenXRDebugUtilsExtension *this, char *param_1) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   int iVar4;
   char *pcVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   long local_60;
   undefined *local_58;
   undefined8 local_50;
   undefined4 local_48;
   undefined8 local_44;
   undefined4 local_3c;
   char *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[8] == (OpenXRDebugUtilsExtension)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar6 = 0xc5;
         pcVar5 = "Condition \"!debug_utils_ext\" is true.";
         LAB_00101142:_err_print_error("insert_debug_label", "modules/openxr/extensions/openxr_debug_utils_extension.cpp", uVar6, pcVar5, 0, 0);
         return;
      }

   }
 else if (*(code**)( this + 0x40 ) == (code*)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar6 = 0xc6;
         pcVar5 = "Parameter \"xrSessionInsertDebugUtilsLabelEXT_ptr\" is null.";
         goto LAB_00101142;
      }

   }
 else {
      local_44 = 0;
      local_3c = 0;
      local_48 = 0x3b9b143b;
      local_38 = param_1;
      iVar4 = ( **(code**)( this + 0x40 ) )(*(undefined8*)( OpenXRAPI::singleton + 0xf8 ), &local_48);
      if (iVar4 < 0) {
         local_60 = 0;
         local_58 = &_LC0;
         local_50 = 1;
         String::parse_latin1((StrRange*)&local_60);
         OpenXRAPI::get_error_string(&local_70, OpenXRAPI::singleton, iVar4);
         operator+((char *)&
         local_68,(String*)"OpenXR: Failed to insert label [";
         String::operator +((String*)&local_58, (String*)&local_68);
         _err_print_error("insert_debug_label", "modules/openxr/extensions/openxr_debug_utils_extension.cpp", 0xd0, (String*)&local_58, 0, 0);
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

      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRDebugUtilsExtension::debug_callback(unsigned long, unsigned long,
   XrDebugUtilsMessengerCallbackDataEXT const*, void*) */undefined8 OpenXRDebugUtilsExtension::debug_callback(ulong param_1, ulong param_2, XrDebugUtilsMessengerCallbackDataEXT *param_3, void *param_4) {
   long *plVar1;
   char *pcVar2;
   char cVar3;
   undefined8 uVar4;
   char *pcVar5;
   undefined8 uVar6;
   long lVar7;
   long lVar8;
   long in_FS_OFFSET;
   char *local_88;
   long local_80;
   long local_78;
   long local_70;
   char *local_68;
   size_t local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88 = (char*)0x0;
   if (param_4 == (void*)0x0) {
      _err_print_error("debug_callback", "modules/openxr/extensions/openxr_debug_utils_extension.cpp", 0xe1, "Parameter \"p_callback_data\" is null.", 0, 0);
      goto LAB_00101696;
   }

   if (param_3 == (XrDebugUtilsMessengerCallbackDataEXT*)0x1) {
      local_60 = 0xf;
      local_68 = ", type: General";
      String::parse_latin1((StrRange*)&local_88);
      LAB_001014ad:pcVar5 = *(char**)( (long)param_4 + 0x18 );
   }
 else {
      if (param_3 == (XrDebugUtilsMessengerCallbackDataEXT*)0x2) {
         local_60 = 0x12;
         local_68 = ", type: Validation";
         String::parse_latin1((StrRange*)&local_88);
         goto LAB_001014ad;
      }

      local_68 = ", type: Performance";
      if (param_3 == (XrDebugUtilsMessengerCallbackDataEXT*)0x4) {
         LAB_0010148f:local_60 = 0x13;
         String::parse_latin1((StrRange*)&local_88);
         goto LAB_001014ad;
      }

      if (param_3 == (XrDebugUtilsMessengerCallbackDataEXT*)0x8) {
         local_68 = ", type: Conformance";
         goto LAB_0010148f;
      }

      local_70 = 0;
      local_68 = ")";
      local_60 = 1;
      String::parse_latin1((StrRange*)&local_70);
      String::num_uint64(( ulong ) & local_80, (int)param_3, true);
      operator+((char *)&
      local_78,(String*)", type: Unknown (";
      String::operator +((String*)&local_68, (String*)&local_78);
      pcVar2 = local_68;
      pcVar5 = local_88;
      if (local_88 == local_68) {
         if (local_88 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_88 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_68 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

      }
 else {
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

         local_88 = local_68;
      }

      lVar8 = local_78;
      if (local_78 != 0) {
         LOCK();
         plVar1 = (long*)( local_78 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_78 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      lVar8 = local_80;
      if (local_80 != 0) {
         LOCK();
         plVar1 = (long*)( local_80 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_80 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      lVar8 = local_70;
      if (local_70 == 0) goto LAB_001014ad;
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_001014ad;
      local_70 = 0;
      Memory::free_static((void*)( lVar8 + -0x10 ), false);
      pcVar5 = *(char**)( (long)param_4 + 0x18 );
   }

   if (pcVar5 != (char*)0x0) {
      local_70 = 0;
      local_60 = strlen(pcVar5);
      local_68 = pcVar5;
      String::parse_latin1((StrRange*)&local_70);
      operator+((char *)&
      local_68,(String*)", function Name: ";
      String::operator +=((String*)&local_88, (String*)&local_68);
      pcVar5 = local_68;
      if (local_68 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = (char*)0x0;
            Memory::free_static(pcVar5 + -0x10, false);
         }

      }

      lVar8 = local_70;
      if (local_70 != 0) {
         LOCK();
         plVar1 = (long*)( local_70 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

   }

   pcVar5 = *(char**)( (long)param_4 + 0x10 );
   if (pcVar5 != (char*)0x0) {
      local_70 = 0;
      local_60 = strlen(pcVar5);
      local_68 = pcVar5;
      String::parse_latin1((StrRange*)&local_70);
      operator+((char *)&
      local_68,(String*)"\nMessage ID: ";
      String::operator +=((String*)&local_88, (String*)&local_68);
      pcVar5 = local_68;
      if (local_68 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = (char*)0x0;
            Memory::free_static(pcVar5 + -0x10, false);
         }

      }

      lVar8 = local_70;
      if (local_70 != 0) {
         LOCK();
         plVar1 = (long*)( local_70 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

   }

   pcVar5 = *(char**)( (long)param_4 + 0x20 );
   if (pcVar5 != (char*)0x0) {
      local_70 = 0;
      local_60 = strlen(pcVar5);
      local_68 = pcVar5;
      String::parse_latin1((StrRange*)&local_70);
      operator+((char *)&
      local_68,(String*)"\nMessage: ";
      String::operator +=((String*)&local_88, (String*)&local_68);
      pcVar5 = local_68;
      if (local_68 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = (char*)0x0;
            Memory::free_static(pcVar5 + -0x10, false);
         }

      }

      lVar8 = local_70;
      if (local_70 != 0) {
         LOCK();
         plVar1 = (long*)( local_70 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

   }

   if (*(int*)( (long)param_4 + 0x28 ) != 0) {
      local_70 = 0;
      lVar8 = 0;
      while (true) {
         lVar7 = lVar8 + 1;
         String::operator +=((String*)&local_70, *(char**)( *(long*)( (long)param_4 + 0x30 ) + lVar8 * 0x28 + 0x20 ));
         if (*(uint*)( (long)param_4 + 0x28 ) <= (uint)lVar7) break;
         lVar8 = lVar7;
         if (( local_70 != 0 ) && ( 1 < *(uint*)( local_70 + -8 ) )) {
            String::operator +=((String*)&local_70, ", ");
         }

      }
;
      operator+((char *)&
      local_68,(String*)"\nObjects: ";
      String::operator +=((String*)&local_88, (String*)&local_68);
      pcVar5 = local_68;
      if (local_68 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = (char*)0x0;
            Memory::free_static(pcVar5 + -0x10, false);
         }

      }

      lVar8 = local_70;
      if (local_70 != 0) {
         LOCK();
         plVar1 = (long*)( local_70 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

   }

   if (*(int*)( (long)param_4 + 0x38 ) == 0) {
      LAB_00101659:if (param_2 != 0x1000) goto LAB_00101666;
      LAB_00101830:operator + ( (char*)&local_68,(String*)"OpenXR: Severity: Error" );
      uVar6 = 0;
      uVar4 = 0x114;
   }
 else {
      local_70 = 0;
      lVar8 = 0;
      while (true) {
         lVar7 = lVar8 + 1;
         String::operator +=((String*)&local_70, *(char**)( *(long*)( (long)param_4 + 0x40 ) + lVar8 * 0x18 + 0x10 ));
         if (*(uint*)( (long)param_4 + 0x38 ) <= (uint)lVar7) break;
         lVar8 = lVar7;
         if (( local_70 != 0 ) && ( 1 < *(uint*)( local_70 + -8 ) )) {
            String::operator +=((String*)&local_70, ", ");
         }

      }
;
      operator+((char *)&
      local_68,(String*)"\nLabels: ";
      String::operator +=((String*)&local_88, (String*)&local_68);
      pcVar5 = local_68;
      if (local_68 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = (char*)0x0;
            Memory::free_static(pcVar5 + -0x10, false);
         }

      }

      lVar8 = local_70;
      if (local_70 == 0) goto LAB_00101659;
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00101659;
      local_70 = 0;
      Memory::free_static((void*)( lVar8 + -0x10 ), false);
      if (param_2 == 0x1000) goto LAB_00101830;
      LAB_00101666:if (param_2 != 0x100) {
         pcVar5 = "OpenXR: Severity: Info";
         if (param_2 != 0x10) {
            if (( param_2 != 1 ) || ( cVar3 = cVar3 == '\0' )) goto LAB_00101696;
            pcVar5 = "OpenXR: Severity: Verbose";
         }

         operator+((char *)&
         local_70,(String*)pcVar5;
         Variant::Variant((Variant*)local_58, (String*)&local_70);
         stringify_variants((Variant*)&local_68);
         __print_line((String*)&local_68);
         pcVar5 = local_68;
         if (local_68 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_68 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_68 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         lVar8 = local_70;
         if (local_70 != 0) {
            LOCK();
            plVar1 = (long*)( local_70 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_70 = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
            }

         }

         goto LAB_00101696;
      }

      operator+((char *)&
      local_68,(String*)"OpenXR: Severity: Warning";
      uVar4 = 0x116;
      uVar6 = 1;
   }

   _err_print_error("debug_callback", "modules/openxr/extensions/openxr_debug_utils_extension.cpp", uVar4, (Variant*)&local_68, 0, uVar6);
   pcVar5 = local_68;
   if (local_68 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (char*)0x0;
         Memory::free_static(pcVar5 + -0x10, false);
      }

   }

   LAB_00101696:pcVar5 = local_88;
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

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 0;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRDebugUtilsExtension::_debug_callback(unsigned long, unsigned long,
   XrDebugUtilsMessengerCallbackDataEXT const*, void*) */undefined8 OpenXRDebugUtilsExtension::_debug_callback(ulong param_1, ulong param_2, XrDebugUtilsMessengerCallbackDataEXT *param_3, void *param_4) {
   undefined8 uVar1;
   if (singleton != 0) {
      uVar1 = debug_callback(singleton, param_1, (XrDebugUtilsMessengerCallbackDataEXT*)param_2, param_3);
      return uVar1;
   }

   return 0;
}
/* OpenXRDebugUtilsExtension::get_requested_extensions() */void OpenXRDebugUtilsExtension::get_requested_extensions(void) {
   long lVar1;
   long *plVar2;
   long in_RSI;
   HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>> *in_RDI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( in_RDI + 8 ) = (undefined1[16])0x0;
   *(undefined8*)( in_RDI + 0x28 ) = 2;
   *(undefined1(*) [16])( in_RDI + 0x18 ) = (undefined1[16])0x0;
   local_38 = "XR_EXT_debug_utils";
   local_40 = 0;
   local_30 = 0x12;
   String::parse_latin1((StrRange*)&local_40);
   plVar2 = (long*)HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>::operator [](in_RDI, (String*)&local_40);
   lVar1 = local_40;
   *plVar2 = in_RSI + 8;
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

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OpenXRExtensionWrapper::set_system_properties_and_get_next_pointer(void*) */void *__thiscallOpenXRExtensionWrapper::set_system_properties_and_get_next_pointer(OpenXRExtensionWrapper *this, void *param_1) {
   return param_1;
}
/* OpenXRExtensionWrapper::set_instance_create_info_and_get_next_pointer(void*) */void *__thiscallOpenXRExtensionWrapper::set_instance_create_info_and_get_next_pointer(OpenXRExtensionWrapper *this, void *param_1) {
   return param_1;
}
/* OpenXRExtensionWrapper::set_session_create_and_get_next_pointer(void*) */void *__thiscallOpenXRExtensionWrapper::set_session_create_and_get_next_pointer(OpenXRExtensionWrapper *this, void *param_1) {
   return param_1;
}
/* OpenXRExtensionWrapper::set_swapchain_create_info_and_get_next_pointer(void*) */void *__thiscallOpenXRExtensionWrapper::set_swapchain_create_info_and_get_next_pointer(OpenXRExtensionWrapper *this, void *param_1) {
   return param_1;
}
/* OpenXRExtensionWrapper::set_hand_joint_locations_and_get_next_pointer(int, void*) */void *__thiscallOpenXRExtensionWrapper::set_hand_joint_locations_and_get_next_pointer(OpenXRExtensionWrapper *this, int param_1, void *param_2) {
   return param_2;
}
/* OpenXRExtensionWrapper::set_projection_views_and_get_next_pointer(int, void*) */void *__thiscallOpenXRExtensionWrapper::set_projection_views_and_get_next_pointer(OpenXRExtensionWrapper *this, int param_1, void *param_2) {
   return param_2;
}
/* OpenXRExtensionWrapper::get_suggested_tracker_names() */OpenXRExtensionWrapper * OpenXRExtensionWrapper::get_suggested_tracker_names(OpenXRExtensionWrapper * this) * (undefined8*)( this + 8 ) = 0 ;return this;}/* OpenXRExtensionWrapper::on_register_metadata() */void OpenXRExtensionWrapper::on_register_metadata(void) {
   return;
}
/* OpenXRExtensionWrapper::on_before_instance_created() */void OpenXRExtensionWrapper::on_before_instance_created(void) {
   return;
}
/* OpenXRExtensionWrapper::on_session_created(XrSession_T*) */void OpenXRExtensionWrapper::on_session_created(XrSession_T *param_1) {
   return;
}
/* OpenXRExtensionWrapper::on_session_destroyed() */void OpenXRExtensionWrapper::on_session_destroyed(void) {
   return;
}
/* OpenXRExtensionWrapper::on_process() */void OpenXRExtensionWrapper::on_process(void) {
   return;
}
/* OpenXRExtensionWrapper::on_pre_render() */void OpenXRExtensionWrapper::on_pre_render(void) {
   return;
}
/* OpenXRExtensionWrapper::on_main_swapchains_created() */void OpenXRExtensionWrapper::on_main_swapchains_created(void) {
   return;
}
/* OpenXRExtensionWrapper::on_pre_draw_viewport(RID) */void OpenXRExtensionWrapper::on_pre_draw_viewport(void) {
   return;
}
/* OpenXRExtensionWrapper::on_post_draw_viewport(RID) */void OpenXRExtensionWrapper::on_post_draw_viewport(void) {
   return;
}
/* OpenXRExtensionWrapper::on_state_idle() */void OpenXRExtensionWrapper::on_state_idle(void) {
   return;
}
/* OpenXRExtensionWrapper::on_state_ready() */void OpenXRExtensionWrapper::on_state_ready(void) {
   return;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* OpenXRExtensionWrapper::on_state_synchronized() */void OpenXRExtensionWrapper::on_state_synchronized(void) {
   return;
}
/* OpenXRExtensionWrapper::on_state_visible() */void OpenXRExtensionWrapper::on_state_visible(void) {
   return;
}
/* OpenXRExtensionWrapper::on_state_focused() */void OpenXRExtensionWrapper::on_state_focused(void) {
   return;
}
/* OpenXRExtensionWrapper::on_state_stopping() */void OpenXRExtensionWrapper::on_state_stopping(void) {
   return;
}
/* OpenXRExtensionWrapper::on_state_loss_pending() */void OpenXRExtensionWrapper::on_state_loss_pending(void) {
   return;
}
/* OpenXRExtensionWrapper::on_state_exiting() */void OpenXRExtensionWrapper::on_state_exiting(void) {
   return;
}
/* OpenXRExtensionWrapper::set_viewport_composition_layer_and_get_next_pointer(XrCompositionLayerBaseHeader
   const*, Dictionary const&, void*) */void OpenXRExtensionWrapper::set_viewport_composition_layer_and_get_next_pointer(XrCompositionLayerBaseHeader *param_1, Dictionary *param_2, void *param_3) {
   return;
}
/* OpenXRExtensionWrapper::on_viewport_composition_layer_destroyed(XrCompositionLayerBaseHeader
   const*) */void OpenXRExtensionWrapper::on_viewport_composition_layer_destroyed(XrCompositionLayerBaseHeader *param_1) {
   return;
}
/* OpenXRExtensionWrapper::get_viewport_composition_layer_extension_properties(List<PropertyInfo,
   DefaultAllocator>*) */void OpenXRExtensionWrapper::get_viewport_composition_layer_extension_properties(List *param_1) {
   return;
}
/* OpenXRExtensionWrapper::set_android_surface_swapchain_create_info_and_get_next_pointer(Dictionary
   const&, void*) */void *__thiscallOpenXRExtensionWrapper::set_android_surface_swapchain_create_info_and_get_next_pointer(OpenXRExtensionWrapper *this, Dictionary *param_1, void *param_2) {
   return param_2;
}
/* OpenXRExtensionWrapper::on_event_polled(XrEventDataBuffer const&) */undefined8 OpenXRExtensionWrapper::on_event_polled(XrEventDataBuffer *param_1) {
   return 0;
}
/* OpenXRExtensionWrapper::get_viewport_composition_layer_extension_property_defaults() */OpenXRExtensionWrapper * __thiscall
OpenXRExtensionWrapper::get_viewport_composition_layer_extension_property_defaults
          (OpenXRExtensionWrapper *this){
   Dictionary::Dictionary((Dictionary*)this);
   return this;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, bool*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, bool*> > >::operator[](String const&) */undefined1 * __thiscall
HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>
::operator[](HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>
             *this,String *param_1){
   long *plVar1;
   void *pvVar2;
   void *__s;
   long lVar3;
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
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   undefined1 auVar30[16];
   undefined1 auVar31[16];
   undefined1 auVar32[16];
   undefined1 auVar33[16];
   undefined1 auVar34[16];
   undefined1 auVar35[16];
   char cVar36;
   uint uVar37;
   uint uVar38;
   ulong uVar39;
   undefined8 uVar40;
   void *__s_00;
   undefined1(*pauVar41)[16];
   undefined8 *puVar42;
   void *pvVar43;
   ulong uVar44;
   int iVar45;
   long lVar46;
   long lVar47;
   ulong uVar48;
   undefined8 uVar49;
   uint *puVar50;
   uint uVar51;
   uint uVar52;
   long lVar53;
   uint uVar54;
   uint uVar55;
   undefined1(*pauVar56)[16];
   undefined1(*pauVar57)[16];
   long in_FS_OFFSET;
   long local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   if (*(long*)( this + 8 ) == 0) {
      LAB_00102bb8:uVar39 = (ulong)uVar55;
      uVar44 = uVar39 * 4;
      uVar48 = uVar39 * 8;
      uVar40 = Memory::alloc_static(uVar44, false);
      *(undefined8*)( this + 0x10 ) = uVar40;
      pvVar43 = (void*)Memory::alloc_static(uVar48, false);
      *(void**)( this + 8 ) = pvVar43;
      if (uVar55 != 0) {
         pvVar2 = *(void**)( this + 0x10 );
         if (( pvVar2 < (void*)( (long)pvVar43 + uVar48 ) ) && ( pvVar43 < (void*)( (long)pvVar2 + uVar44 ) )) {
            uVar44 = 0;
            do {
               *(undefined4*)( (long)pvVar2 + uVar44 * 4 ) = 0;
               *(undefined8*)( (long)pvVar43 + uVar44 * 8 ) = 0;
               uVar44 = uVar44 + 1;
            }
 while ( uVar39 != uVar44 );
            goto LAB_00102a4a;
         }

         memset(pvVar2, 0, uVar44);
         memset(pvVar43, 0, uVar48);
         iVar45 = *(int*)( this + 0x2c );
         LAB_00102a4e:if (iVar45 != 0) {
            LAB_00102a56:uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            uVar52 = String::hash();
            uVar39 = CONCAT44(0, uVar37);
            lVar53 = *(long*)( this + 0x10 );
            uVar38 = 1;
            if (uVar52 != 0) {
               uVar38 = uVar52;
            }

            uVar54 = 0;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)uVar38 * lVar3;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar39;
            lVar46 = SUB168(auVar16 * auVar32, 8);
            uVar52 = *(uint*)( lVar53 + lVar46 * 4 );
            uVar51 = SUB164(auVar16 * auVar32, 8);
            if (uVar52 != 0) {
               do {
                  if (uVar38 == uVar52) {
                     cVar36 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar46 * 8 ) + 0x10 ), param_1);
                     if (cVar36 != '\0') {
                        pauVar41 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar51 * 8 );
                        *(undefined8*)( pauVar41[1] + 8 ) = 0;
                        goto LAB_001028fb;
                     }

                     lVar53 = *(long*)( this + 0x10 );
                  }

                  uVar54 = uVar54 + 1;
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = ( ulong )(uVar51 + 1) * lVar3;
                  auVar33._8_8_ = 0;
                  auVar33._0_8_ = uVar39;
                  lVar46 = SUB168(auVar17 * auVar33, 8);
                  uVar52 = *(uint*)( lVar53 + lVar46 * 4 );
                  uVar51 = SUB164(auVar17 * auVar33, 8);
               }
 while ( ( uVar52 != 0 ) && ( auVar18._8_8_ = 0 ),auVar18._0_8_ = (ulong)uVar52 * lVar3,auVar34._8_8_ = 0,auVar34._0_8_ = uVar39,auVar19._8_8_ = 0,auVar19._0_8_ = ( ulong )(( uVar37 + uVar51 ) - SUB164(auVar18 * auVar34, 8)) * lVar3,auVar35._8_8_ = 0,auVar35._0_8_ = uVar39,uVar54 <= SUB164(auVar19 * auVar35, 8) );
            }

            iVar45 = *(int*)( this + 0x2c );
         }

         uVar39 = (ulong)uVar55;
         goto LAB_00102534;
      }

      iVar45 = *(int*)( this + 0x2c );
      if (pvVar43 == (void*)0x0) goto LAB_00102534;
      if (iVar45 != 0) goto LAB_00102a56;
      LAB_0010255a:uVar55 = *(uint*)( this + 0x28 );
      if (uVar55 == 0x1c) {
         pauVar41 = (undefined1(*) [16])0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_001028fb;
      }

      uVar39 = ( ulong )(uVar55 + 1);
      *(undefined4*)( this + 0x2c ) = 0;
      uVar37 = *(uint*)( hash_table_size_primes + (ulong)uVar55 * 4 );
      if (uVar55 + 1 < 2) {
         uVar39 = 2;
      }

      uVar55 = *(uint*)( hash_table_size_primes + uVar39 * 4 );
      uVar48 = (ulong)uVar55;
      *(int*)( this + 0x28 ) = (int)uVar39;
      pvVar43 = *(void**)( this + 8 );
      uVar39 = uVar48 * 4;
      uVar44 = uVar48 * 8;
      pvVar2 = *(void**)( this + 0x10 );
      uVar40 = Memory::alloc_static(uVar39, false);
      *(undefined8*)( this + 0x10 ) = uVar40;
      __s_00 = (void*)Memory::alloc_static(uVar44, false);
      *(void**)( this + 8 ) = __s_00;
      if (uVar55 != 0) {
         __s = *(void**)( this + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar44 ) ) && ( __s_00 < (void*)( (long)__s + uVar39 ) )) {
            uVar39 = 0;
            do {
               *(undefined4*)( (long)__s + uVar39 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar39 * 8 ) = 0;
               uVar39 = uVar39 + 1;
            }
 while ( uVar39 != uVar48 );
         }
 else {
            memset(__s, 0, uVar39);
            memset(__s_00, 0, uVar44);
         }

      }

      if (uVar37 != 0) {
         uVar39 = 0;
         do {
            uVar55 = *(uint*)( (long)pvVar2 + uVar39 * 4 );
            if (uVar55 != 0) {
               lVar3 = *(long*)( this + 0x10 );
               uVar51 = 0;
               uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
               uVar44 = CONCAT44(0, uVar38);
               lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
               auVar4._8_8_ = 0;
               auVar4._0_8_ = (ulong)uVar55 * lVar53;
               auVar20._8_8_ = 0;
               auVar20._0_8_ = uVar44;
               lVar46 = SUB168(auVar4 * auVar20, 8);
               puVar50 = (uint*)( lVar3 + lVar46 * 4 );
               iVar45 = SUB164(auVar4 * auVar20, 8);
               uVar52 = *puVar50;
               uVar40 = *(undefined8*)( (long)pvVar43 + uVar39 * 8 );
               while (uVar52 != 0) {
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = (ulong)uVar52 * lVar53;
                  auVar21._8_8_ = 0;
                  auVar21._0_8_ = uVar44;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = ( ulong )(( uVar38 + iVar45 ) - SUB164(auVar5 * auVar21, 8)) * lVar53;
                  auVar22._8_8_ = 0;
                  auVar22._0_8_ = uVar44;
                  uVar54 = SUB164(auVar6 * auVar22, 8);
                  uVar49 = uVar40;
                  if (uVar54 < uVar51) {
                     *puVar50 = uVar55;
                     puVar42 = (undefined8*)( (long)__s_00 + lVar46 * 8 );
                     uVar49 = *puVar42;
                     *puVar42 = uVar40;
                     uVar55 = uVar52;
                     uVar51 = uVar54;
                  }

                  uVar51 = uVar51 + 1;
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = ( ulong )(iVar45 + 1) * lVar53;
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ = uVar44;
                  lVar46 = SUB168(auVar7 * auVar23, 8);
                  puVar50 = (uint*)( lVar3 + lVar46 * 4 );
                  iVar45 = SUB164(auVar7 * auVar23, 8);
                  uVar40 = uVar49;
                  uVar52 = *puVar50;
               }
;
               *(undefined8*)( (long)__s_00 + lVar46 * 8 ) = uVar40;
               *puVar50 = uVar55;
               *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
            }

            uVar39 = uVar39 + 1;
         }
 while ( uVar37 != uVar39 );
         Memory::free_static(pvVar43, false);
         Memory::free_static(pvVar2, false);
      }

   }
 else {
      iVar45 = *(int*)( this + 0x2c );
      uVar39 = CONCAT44(0, uVar55);
      if (iVar45 != 0) {
         lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         uVar38 = String::hash();
         lVar53 = *(long*)( this + 0x10 );
         uVar37 = 1;
         if (uVar38 != 0) {
            uVar37 = uVar38;
         }

         uVar51 = 0;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = (ulong)uVar37 * lVar3;
         auVar28._8_8_ = 0;
         auVar28._0_8_ = uVar39;
         lVar46 = SUB168(auVar12 * auVar28, 8);
         uVar38 = *(uint*)( lVar53 + lVar46 * 4 );
         uVar52 = SUB164(auVar12 * auVar28, 8);
         if (uVar38 != 0) {
            do {
               if (uVar37 == uVar38) {
                  cVar36 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar46 * 8 ) + 0x10 ), param_1);
                  if (cVar36 != '\0') {
                     pauVar41 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar52 * 8 );
                     goto LAB_001028fb;
                  }

                  lVar53 = *(long*)( this + 0x10 );
               }

               uVar51 = uVar51 + 1;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = ( ulong )(uVar52 + 1) * lVar3;
               auVar29._8_8_ = 0;
               auVar29._0_8_ = uVar39;
               lVar46 = SUB168(auVar13 * auVar29, 8);
               uVar38 = *(uint*)( lVar53 + lVar46 * 4 );
               uVar52 = SUB164(auVar13 * auVar29, 8);
            }
 while ( ( uVar38 != 0 ) && ( auVar14._8_8_ = 0 ),auVar14._0_8_ = (ulong)uVar38 * lVar3,auVar30._8_8_ = 0,auVar30._0_8_ = uVar39,auVar15._8_8_ = 0,auVar15._0_8_ = ( ulong )(( uVar52 + uVar55 ) - SUB164(auVar14 * auVar30, 8)) * lVar3,auVar31._8_8_ = 0,auVar31._0_8_ = uVar39,uVar51 <= SUB164(auVar15 * auVar31, 8) );
         }

         uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         if (*(long*)( this + 8 ) == 0) goto LAB_00102bb8;
         LAB_00102a4a:iVar45 = *(int*)( this + 0x2c );
         goto LAB_00102a4e;
      }

      LAB_00102534:if ((float)uVar39 * __LC48 < (float)( iVar45 + 1 )) goto LAB_0010255a;
   }

   local_58[0] = 0;
   if (*(long*)param_1 == 0) {
      pauVar41 = (undefined1(*) [16])operator_new(0x20, "");
      *(undefined8*)pauVar41[1] = 0;
      *pauVar41 = (undefined1[16])0x0;
      LAB_00102b8b:*(undefined8*)( pauVar41[1] + 8 ) = 0;
      LAB_001027e3:puVar42 = *(undefined8**)( this + 0x20 );
      if (puVar42 != (undefined8*)0x0) goto LAB_001027f0;
      LAB_00102a25:*(undefined1(**) [16])( this + 0x18 ) = pauVar41;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)local_58, (CowData*)param_1);
      lVar3 = local_58[0];
      local_58[1] = 0;
      pauVar41 = (undefined1(*) [16])operator_new(0x20, "");
      *(undefined8*)pauVar41[1] = 0;
      *(undefined8*)*pauVar41 = 0;
      *(undefined8*)( *pauVar41 + 8 ) = 0;
      if (lVar3 == 0) goto LAB_00102b8b;
      CowData<char32_t>::_ref((CowData<char32_t>*)( pauVar41 + 1 ), (CowData*)local_58);
      *(undefined8*)( pauVar41[1] + 8 ) = 0;
      LOCK();
      plVar1 = (long*)( lVar3 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_001027e3;
      Memory::free_static((void*)( local_58[0] + -0x10 ), false);
      puVar42 = *(undefined8**)( this + 0x20 );
      if (puVar42 == (undefined8*)0x0) goto LAB_00102a25;
      LAB_001027f0:*puVar42 = pauVar41;
      *(undefined8**)( *pauVar41 + 8 ) = puVar42;
   }

   *(undefined1(**) [16])( this + 0x20 ) = pauVar41;
   uVar37 = String::hash();
   lVar3 = *(long*)( this + 0x10 );
   uVar55 = 1;
   if (uVar37 != 0) {
      uVar55 = uVar37;
   }

   uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   uVar39 = CONCAT44(0, uVar37);
   lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   auVar8._8_8_ = 0;
   auVar8._0_8_ = (ulong)uVar55 * lVar53;
   auVar24._8_8_ = 0;
   auVar24._0_8_ = uVar39;
   lVar47 = SUB168(auVar8 * auVar24, 8);
   lVar46 = *(long*)( this + 8 );
   puVar50 = (uint*)( lVar3 + lVar47 * 4 );
   iVar45 = SUB164(auVar8 * auVar24, 8);
   uVar38 = *puVar50;
   pauVar57 = pauVar41;
   if (uVar38 != 0) {
      uVar52 = 0;
      pauVar56 = pauVar41;
      do {
         auVar9._8_8_ = 0;
         auVar9._0_8_ = (ulong)uVar38 * lVar53;
         auVar25._8_8_ = 0;
         auVar25._0_8_ = uVar39;
         auVar10._8_8_ = 0;
         auVar10._0_8_ = ( ulong )(( uVar37 + iVar45 ) - SUB164(auVar9 * auVar25, 8)) * lVar53;
         auVar26._8_8_ = 0;
         auVar26._0_8_ = uVar39;
         uVar51 = SUB164(auVar10 * auVar26, 8);
         pauVar57 = pauVar56;
         if (uVar51 < uVar52) {
            *puVar50 = uVar55;
            puVar42 = (undefined8*)( lVar46 + lVar47 * 8 );
            pauVar57 = (undefined1(*) [16])*puVar42;
            *puVar42 = pauVar56;
            uVar52 = uVar51;
            uVar55 = uVar38;
         }

         uVar52 = uVar52 + 1;
         auVar11._8_8_ = 0;
         auVar11._0_8_ = ( ulong )(iVar45 + 1) * lVar53;
         auVar27._8_8_ = 0;
         auVar27._0_8_ = uVar39;
         lVar47 = SUB168(auVar11 * auVar27, 8);
         puVar50 = (uint*)( lVar3 + lVar47 * 4 );
         iVar45 = SUB164(auVar11 * auVar27, 8);
         uVar38 = *puVar50;
         pauVar56 = pauVar57;
      }
 while ( uVar38 != 0 );
   }

   *(undefined1(**) [16])( lVar46 + lVar47 * 8 ) = pauVar57;
   *puVar50 = uVar55;
   *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
   LAB_001028fb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pauVar41[1] + 8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}

