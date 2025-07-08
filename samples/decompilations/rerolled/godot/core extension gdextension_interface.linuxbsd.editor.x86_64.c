/* gdextension_get_godot_version(GDExtensionGodotVersion*) */void gdextension_get_godot_version(GDExtensionGodotVersion *param_1) {
   undefined8 uVar1;
   uVar1 = _LC0;
   *(undefined4*)( param_1 + 8 ) = 1;
   *(undefined8*)param_1 = uVar1;
   *(char**)( param_1 + 0x10 ) = "Godot Engine v4.4.1.stable.custom_build";
   return;
}
/* gdextension_variant_new_nil(void*) */void gdextension_variant_new_nil(void *param_1) {
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( (long)param_1 + 8 ) = (undefined1[16])0x0;
   return;
}
/* gdextension_variant_get_type(void const*) */undefined4 gdextension_variant_get_type(void *param_1) {
   /* WARNING: Load size is inaccurate */
   return *param_1;
}
/* gdextension_string_to_utf32_chars(void const*, char32_t*, long) */long gdextension_string_to_utf32_chars(void *param_1, wchar32 *param_2, long param_3) {
   long lVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   /* WARNING: Load size is inaccurate */
   lVar1 = *param_1;
   if (lVar1 == 0) {
      lVar4 = 0;
   }
 else {
      lVar4 = 0;
      iVar2 = (int)*(undefined8*)( lVar1 + -8 );
      if (( iVar2 != 0 ) && ( lVar4 = (long)( iVar2 + -1 ) ),param_2 != (wchar32*)0x0) {
         if (lVar4 <= param_3) {
            param_3 = lVar4;
         }

         if (0 < param_3) {
            lVar3 = 0;
            do {
               param_2[lVar3] = *(wchar32*)( lVar1 + lVar3 * 4 );
               lVar3 = lVar3 + 1;
            }
 while ( lVar3 != param_3 );
         }

      }

   }

   return lVar4;
}
/* gdextension_file_access_store_buffer(void*, unsigned char const*, unsigned long) */void gdextension_file_access_store_buffer(void *param_1, uchar *param_2, ulong param_3) {
   /* WARNING: Load size is inaccurate */
   /* WARNING: Could not recover jumptable at 0x001000c7. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *param_1 + 0x2d0 ) )();
   return;
}
/* gdextension_file_access_get_buffer(void const*, unsigned char*, unsigned long) */void gdextension_file_access_get_buffer(void *param_1, uchar *param_2, ulong param_3) {
   /* WARNING: Load size is inaccurate */
   /* WARNING: Could not recover jumptable at 0x001000d7. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *param_1 + 0x220 ) )();
   return;
}
/* gdextension_object_method_bind_call(void const*, void*, void const* const*, long, void*,
   GDExtensionCallError*) */void gdextension_object_method_bind_call(void *param_1, void *param_2, void **param_3, long param_4, void *param_5, GDExtensionCallError *param_6) {
   long in_FS_OFFSET;
   undefined4 local_20;
   undefined8 local_1c;
   long local_10;
   /* WARNING: Load size is inaccurate */
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_20 = 0;
   local_1c = 0;
   ( **(code**)( *param_1 + 0x20 ) )(param_5, param_1, param_2, param_3, param_4 & 0xffffffff, &local_20);
   if (param_6 != (GDExtensionCallError*)0x0) {
      *(undefined4*)param_6 = local_20;
      *(undefined8*)( param_6 + 4 ) = local_1c;
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_object_method_bind_ptrcall(void const*, void*, void const* const*, void*) */void gdextension_object_method_bind_ptrcall(void *param_1, void *param_2, void **param_3, void *param_4) {
   /* WARNING: Load size is inaccurate */
   /* WARNING: Could not recover jumptable at 0x00100167. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *param_1 + 0x30 ) )();
   return;
}
/* gdextension_object_cast_to(void const*, void*) */void *gdextension_object_cast_to(void *param_1, void *param_2) {
   char cVar1;
   if (param_1 != (void*)0x0) {
      /* WARNING: Load size is inaccurate */
      cVar1 = ( **(code**)( *param_1 + 0x60 ) )();
      if (cVar1 != '\0') {
         return param_1;
      }

   }

   return (void*)0x0;
}
/* gdextension_object_get_instance_id(void const*) */undefined8 gdextension_object_get_instance_id(void *param_1) {
   return *(undefined8*)( (long)param_1 + 0x60 );
}
/* gdextension_ref_get_object(void const*) */undefined8 gdextension_ref_get_object(void *param_1) {
   if (param_1 != (void*)0x0) {
      /* WARNING: Load size is inaccurate */
      return *param_1;
   }

   return 0;
}
/* gdextension_string_name_new_with_latin1_chars(void*, char const*, unsigned char) */void gdextension_string_name_new_with_latin1_chars(void *param_1, char *param_2, uchar param_3) {
   StringName::StringName((StringName*)param_1, param_2, param_3 != '\0');
   return;
}
/* gdextension_string_operator_index_const(void const*, long) */long gdextension_string_operator_index_const(void *param_1, long param_2) {
   long lVar1;
   int iVar2;
   long lVar3;
   if (-1 < param_2) {
      /* WARNING: Load size is inaccurate */
      lVar1 = *param_1;
      if (lVar1 == 0) {
         lVar3 = 1;
      }
 else {
         iVar2 = (int)*(undefined8*)( lVar1 + -8 );
         lVar3 = (long)iVar2;
         if (iVar2 == 0) {
            lVar3 = 1;
         }

      }

      lVar1 = lVar1 + param_2 * 4;
      if (lVar3 <= param_2) {
         lVar1 = 0;
      }

      return lVar1;
   }

   return 0;
}
/* gdextension_packed_vector3_array_operator_index_const(void const*, long) */long gdextension_packed_vector3_array_operator_index_const(void *param_1, long param_2) {
   long lVar1;
   if (-1 < param_2) {
      lVar1 = *(long*)( (long)param_1 + 8 );
      if (lVar1 == 0) {
         return 0;
      }

      if (param_2 < *(long*)( lVar1 + -8 )) {
         return lVar1 + param_2 * 0xc;
      }

   }

   return 0;
}
/* gdextension_packed_vector2_array_operator_index_const(void const*, long) */long gdextension_packed_vector2_array_operator_index_const(void *param_1, long param_2) {
   long lVar1;
   if (-1 < param_2) {
      lVar1 = *(long*)( (long)param_1 + 8 );
      if (lVar1 == 0) {
         return 0;
      }

      if (param_2 < *(long*)( lVar1 + -8 )) {
         return lVar1 + param_2 * 8;
      }

   }

   return 0;
}
/* gdextension_packed_int32_array_operator_index_const(void const*, long) */long gdextension_packed_int32_array_operator_index_const(void *param_1, long param_2) {
   long lVar1;
   if (-1 < param_2) {
      lVar1 = *(long*)( (long)param_1 + 8 );
      if (lVar1 == 0) {
         return 0;
      }

      if (param_2 < *(long*)( lVar1 + -8 )) {
         return lVar1 + param_2 * 4;
      }

   }

   return 0;
}
/* gdextension_packed_string_array_operator_index_const(void const*, long) */long gdextension_packed_string_array_operator_index_const(void *param_1, long param_2) {
   long lVar1;
   if (-1 < param_2) {
      lVar1 = *(long*)( (long)param_1 + 8 );
      if (lVar1 == 0) {
         return 0;
      }

      if (param_2 < *(long*)( lVar1 + -8 )) {
         return lVar1 + param_2 * 8;
      }

   }

   return 0;
}
/* gdextension_packed_byte_array_operator_index_const(void const*, long) */long gdextension_packed_byte_array_operator_index_const(void *param_1, long param_2) {
   long lVar1;
   if (-1 < param_2) {
      lVar1 = *(long*)( (long)param_1 + 8 );
      if (lVar1 == 0) {
         return 0;
      }

      if (param_2 < *(long*)( lVar1 + -8 )) {
         return lVar1 + param_2;
      }

   }

   return 0;
}
/* gdextension_packed_color_array_operator_index_const(void const*, long) */long gdextension_packed_color_array_operator_index_const(void *param_1, long param_2) {
   long lVar1;
   if (-1 < param_2) {
      lVar1 = *(long*)( (long)param_1 + 8 );
      if (lVar1 == 0) {
         return 0;
      }

      if (param_2 < *(long*)( lVar1 + -8 )) {
         return lVar1 + param_2 * 0x10;
      }

   }

   return 0;
}
/* gdextension_packed_float32_array_operator_index_const(void const*, long) */long gdextension_packed_float32_array_operator_index_const(void *param_1, long param_2) {
   long lVar1;
   if (-1 < param_2) {
      lVar1 = *(long*)( (long)param_1 + 8 );
      if (lVar1 == 0) {
         return 0;
      }

      if (param_2 < *(long*)( lVar1 + -8 )) {
         return lVar1 + param_2 * 4;
      }

   }

   return 0;
}
/* gdextension_packed_float64_array_operator_index_const(void const*, long) */long gdextension_packed_float64_array_operator_index_const(void *param_1, long param_2) {
   long lVar1;
   if (-1 < param_2) {
      lVar1 = *(long*)( (long)param_1 + 8 );
      if (lVar1 == 0) {
         return 0;
      }

      if (param_2 < *(long*)( lVar1 + -8 )) {
         return lVar1 + param_2 * 8;
      }

   }

   return 0;
}
/* gdextension_packed_int64_array_operator_index_const(void const*, long) */long gdextension_packed_int64_array_operator_index_const(void *param_1, long param_2) {
   long lVar1;
   if (-1 < param_2) {
      lVar1 = *(long*)( (long)param_1 + 8 );
      if (lVar1 == 0) {
         return 0;
      }

      if (param_2 < *(long*)( lVar1 + -8 )) {
         return lVar1 + param_2 * 8;
      }

   }

   return 0;
}
/* gdextension_packed_vector4_array_operator_index_const(void const*, long) */long gdextension_packed_vector4_array_operator_index_const(void *param_1, long param_2) {
   long lVar1;
   if (-1 < param_2) {
      lVar1 = *(long*)( (long)param_1 + 8 );
      if (lVar1 == 0) {
         return 0;
      }

      if (param_2 < *(long*)( lVar1 + -8 )) {
         return lVar1 + param_2 * 0x10;
      }

   }

   return 0;
}
/* gdextension_get_native_struct_size(void const*) */undefined8 gdextension_get_native_struct_size(void *param_1) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_28, (StringName*)param_1);
   uVar1 = ClassDB::get_native_struct_size((StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_array_ref(void*, void const*) */void gdextension_array_ref(void *param_1, void *param_2) {
   Array::_ref((Array*)param_1);
   return;
}
/* gdextension_array_set_typed(void*, GDExtensionVariantType, void const*, void const*) */void gdextension_array_set_typed(uint param_1, StringName *param_2, Variant *param_3) {
   Array::set_typed(param_1, param_2, param_3);
   return;
}
/* gdextension_dictionary_set_typed(void*, GDExtensionVariantType, void const*, void const*,
   GDExtensionVariantType, void const*, void const*) */void gdextension_dictionary_set_typed(uint param_1, StringName *param_2, Variant *param_3, uint param_4, StringName *param_5, Variant *param_6) {
   Dictionary::set_typed(param_1, param_2, param_3, param_4, param_5, param_6);
   return;
}
/* gdextension_image_ptr(void*) */void gdextension_image_ptr(void *param_1) {
   Image::ptr();
   return;
}
/* gdextension_image_ptrw(void*) */void gdextension_image_ptrw(void *param_1) {
   Image::ptrw();
   return;
}
/* gdextension_editor_help_load_xml_from_utf8_chars_and_len(char const*, long) */void gdextension_editor_help_load_xml_from_utf8_chars_and_len(char *param_1, long param_2) {
   GDExtensionEditorHelp::load_xml_buffer((uchar*)param_1, (int)param_2);
   return;
}
/* gdextension_editor_help_load_xml_from_utf8_chars(char const*) */void gdextension_editor_help_load_xml_from_utf8_chars(char *param_1) {
   size_t sVar1;
   sVar1 = strlen(param_1);
   GDExtensionEditorHelp::load_xml_buffer((uchar*)param_1, (int)sVar1);
   return;
}
/* gdextension_editor_remove_plugin(void const*) */void gdextension_editor_remove_plugin(void *param_1) {
   long in_FS_OFFSET;
   long local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_18, (StringName*)param_1);
   GDExtensionEditorPlugins::remove_extension_class((StringName*)&local_18);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_editor_add_plugin(void const*) */void gdextension_editor_add_plugin(void *param_1) {
   long in_FS_OFFSET;
   long local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_18, (StringName*)param_1);
   GDExtensionEditorPlugins::add_extension_class((StringName*)&local_18);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* gdextension_classdb_get_class_tag(void const*) */undefined8 gdextension_classdb_get_class_tag(void *param_1) {
   uint uVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   uint uVar11;
   uint uVar12;
   long lVar13;
   undefined8 uVar14;
   uint uVar15;
   uint uVar16;
   ulong uVar17;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_48, (StringName*)param_1);
   if (( _get_empty_hash != 0 ) && ( _DAT_00111304 != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + (ulong)_instantiate_without_postinitialization * 4 );
      uVar17 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + (ulong)_instantiate_without_postinitialization * 8 );
      if (local_48 == 0) {
         uVar11 = StringName::get_empty_hash();
      }
 else {
         uVar11 = *(uint*)( local_48 + 0x20 );
      }

      if (uVar11 == 0) {
         uVar11 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar11 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar17;
      lVar13 = SUB168(auVar3 * auVar7, 8);
      uVar15 = *(uint*)( __err_print_error + lVar13 * 4 );
      uVar12 = SUB164(auVar3 * auVar7, 8);
      if (uVar15 != 0) {
         uVar16 = 0;
         do {
            if (( uVar11 == uVar15 ) && ( *(long*)( *(long*)( _get_empty_hash + lVar13 * 8 ) + 0x10 ) == local_48 )) {
               uVar14 = *(undefined8*)( *(long*)( _get_empty_hash + (ulong)uVar12 * 8 ) + 0x28 );
               goto LAB_00100709;
            }

            uVar16 = uVar16 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar17;
            lVar13 = SUB168(auVar4 * auVar8, 8);
            uVar15 = *(uint*)( __err_print_error + lVar13 * 4 );
            uVar12 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar15 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar15 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar17,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar17,uVar16 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   uVar14 = 0;
   LAB_00100709:if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar14;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_print_script_error(char const*, char const*, char const*, int, unsigned char) */void gdextension_print_script_error(char *param_1, char *param_2, char *param_3, int param_4, uchar param_5) {
   _err_print_error(param_2, param_3, param_4, param_1, param_5 != '\0', 2);
   return;
}
/* gdextension_print_warning(char const*, char const*, char const*, int, unsigned char) */void gdextension_print_warning(char *param_1, char *param_2, char *param_3, int param_4, uchar param_5) {
   _err_print_error(param_2, param_3, param_4, param_1, param_5 != '\0', 1);
   return;
}
/* gdextension_print_error(char const*, char const*, char const*, int, unsigned char) */void gdextension_print_error(char *param_1, char *param_2, char *param_3, int param_4, uchar param_5) {
   _err_print_error(param_2, param_3, param_4, param_1, param_5 != '\0', 0);
   return;
}
/* gdextension_variant_destroy(void*) */void gdextension_variant_destroy(void *param_1) {
   /* WARNING: Load size is inaccurate */
   if (Variant::needs_deinit[*param_1] == '\0') {
      return;
   }

   Variant::_clear_internal();
   return;
}
/* gdextension_mem_free(void*) */void gdextension_mem_free(void *param_1) {
   Memory::free_static(param_1, false);
   return;
}
/* gdextension_classdb_construct_object2(void const*) */undefined8 gdextension_classdb_construct_object2(void *param_1) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_28, (StringName*)param_1);
   uVar1 = ClassDB::instantiate_without_postinitialization((StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_classdb_construct_object(void const*) */undefined8 gdextension_classdb_construct_object(void *param_1) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_28, (StringName*)param_1);
   uVar1 = ClassDB::instantiate_no_placeholders((StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_callable_custom_get_userdata(void*, void*) */undefined8 gdextension_callable_custom_get_userdata(void *param_1, void *param_2) {
   long lVar1;
   /* WARNING: Load size is inaccurate */
   if (( *param_1 != 0 ) || ( *(long*)( (long)param_1 + 8 ) == 0 )) {
      return 0;
   }

   lVar1 = Callable::get_custom();
   if (lVar1 != 0) {
      lVar1 = __dynamic_cast(lVar1, &CallableCustom::typeinfo, &CallableCustomExtension::typeinfo, 0);
      if (( lVar1 != 0 ) && ( param_2 == *(void**)( lVar1 + 0x18 ) )) {
         return *(undefined8*)( lVar1 + 0x10 );
      }

   }

   return 0;
}
/* gdextension_script_instance_create3(GDExtensionScriptInstanceInfo3 const*, void*) */void gdextension_script_instance_create3(GDExtensionScriptInstanceInfo3 *param_1, void *param_2) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)operator_new(0x28, "");
   *puVar1 = &PTR_set_0010d368;
   *(undefined1*)( puVar1 + 2 ) = 0;
   puVar1[3] = 0;
   puVar1[4] = param_2;
   puVar1[1] = param_1;
   return;
}
/* gdextension_script_instance_create2(GDExtensionScriptInstanceInfo2 const*, void*) */undefined8 *gdextension_script_instance_create2(GDExtensionScriptInstanceInfo2 *param_1, void *param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   puVar4 = (undefined8*)operator_new(0xd0, "");
   uVar1 = *(undefined8*)( param_1 + 8 );
   *puVar4 = *(undefined8*)param_1;
   puVar4[1] = uVar1;
   uVar1 = *(undefined8*)( param_1 + 0x10 );
   *(undefined1(*) [16])( puVar4 + 3 ) = (undefined1[16])0x0;
   puVar4[2] = uVar1;
   uVar1 = *(undefined8*)( param_1 + 0x40 );
   uVar2 = *(undefined8*)( param_1 + 0x28 );
   uVar3 = *(undefined8*)( param_1 + 0x30 );
   puVar4[7] = *(undefined8*)( param_1 + 0x38 );
   puVar4[8] = uVar1;
   puVar4[5] = uVar2;
   puVar4[6] = uVar3;
   for (int i = 0; i < 3; i++) {
      uVar1 = *(undefined8*)( param_1 + ( 16*i + 72 ) );
      puVar4[( 2*i + 10 )] = 0;
      puVar4[( 2*i + 9 )] = uVar1;
   }

   for (int i = 0; i < 11; i++) {
      puVar4[( i + 15 )] = *(undefined8*)( param_1 + ( 8*i + 112 ) );
   }

   puVar5 = (undefined8*)operator_new(0x28, "");
   puVar5[4] = param_2;
   puVar5[1] = puVar4;
   *puVar5 = &PTR_set_0010d368;
   puVar5[3] = 0;
   *(undefined1*)( puVar5 + 2 ) = 1;
   puVar4 = (undefined8*)operator_new(0x18, "");
   uVar1 = *(undefined8*)( param_1 + 0x18 );
   *puVar4 = 0;
   puVar5[3] = puVar4;
   puVar4[1] = uVar1;
   puVar4[2] = *(undefined8*)( param_1 + 0x50 );
   return puVar5;
}
/* gdextension_script_instance_create(GDExtensionScriptInstanceInfo const*, void*) */undefined8 *gdextension_script_instance_create(GDExtensionScriptInstanceInfo *param_1, void *param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   puVar4 = (undefined8*)operator_new(0xd0, "");
   uVar2 = *(undefined8*)( param_1 + 8 );
   *puVar4 = *(undefined8*)param_1;
   puVar4[1] = uVar2;
   uVar2 = *(undefined8*)( param_1 + 0x10 );
   *(undefined1(*) [16])( puVar4 + 3 ) = (undefined1[16])0x0;
   puVar4[2] = uVar2;
   uVar2 = *(undefined8*)( param_1 + 0x38 );
   uVar1 = *(undefined8*)( param_1 + 0x20 );
   uVar3 = *(undefined8*)( param_1 + 0x28 );
   puVar4[7] = *(undefined8*)( param_1 + 0x30 );
   puVar4[8] = uVar2;
   puVar4[5] = uVar1;
   puVar4[6] = uVar3;
   uVar2 = *(undefined8*)( param_1 + 0x40 );
   puVar4[10] = 0;
   for (int i = 0; i < 3; i++) {
      puVar4[( 2*i + 9 )] = uVar2;
      uVar2 = *(undefined8*)( param_1 + ( 8*i + 80 ) );
      puVar4[( 2*i + 12 )] = 0;
   }

   puVar4[0xf] = uVar2;
   for (int i = 0; i < 9; i++) {
      puVar4[( i + 17 )] = *(undefined8*)( param_1 + ( 8*i + 112 ) );
   }

   puVar5 = (undefined8*)operator_new(0x28, "");
   puVar5[4] = param_2;
   puVar5[1] = puVar4;
   *puVar5 = &PTR_set_0010d368;
   puVar5[3] = 0;
   *(undefined1*)( puVar5 + 2 ) = 1;
   puVar4 = (undefined8*)operator_new(0x18, "");
   uVar2 = *(undefined8*)( param_1 + 0x68 );
   puVar5[3] = puVar4;
   uVar1 = *(undefined8*)( param_1 + 0x18 );
   *puVar4 = uVar2;
   puVar4[1] = uVar1;
   puVar4[2] = *(undefined8*)( param_1 + 0x48 );
   return puVar5;
}
/* gdextension_callable_custom_create(void*, GDExtensionCallableCustomInfo*) */void gdextension_callable_custom_create(void *param_1, GDExtensionCallableCustomInfo *param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   code *pcVar8;
   int iVar9;
   CallableCustom *this;
   uint uVar10;
   int iVar11;
   this(CallableCustom * operator_new(0x68, ""));
   CallableCustom::CallableCustom(this);
   uVar3 = *(undefined8*)param_2;
   uVar4 = *(undefined8*)( param_2 + 8 );
   uVar1 = *(undefined8*)( param_2 + 0x18 );
   uVar2 = *(undefined8*)( param_2 + 0x28 );
   uVar6 = *(undefined8*)param_2;
   *(undefined***)this = &PTR_hash_0010d448;
   uVar7 = *(undefined8*)( param_2 + 0x10 );
   *(undefined8*)( this + 0x10 ) = uVar3;
   *(undefined8*)( this + 0x18 ) = uVar4;
   uVar3 = *(undefined8*)( param_2 + 0x40 );
   uVar4 = *(undefined8*)( param_2 + 0x38 );
   uVar5 = *(undefined8*)( param_2 + 0x20 );
   *(undefined8*)( this + 0x58 ) = 0;
   *(undefined8*)( this + 0x20 ) = uVar7;
   pcVar8 = *(code**)( param_2 + 0x30 );
   uVar7 = *(undefined8*)( param_2 + 0x48 );
   *(undefined8*)( this + 0x28 ) = uVar1;
   *(undefined8*)( this + 0x30 ) = uVar5;
   *(undefined8*)( this + 0x38 ) = uVar2;
   *(undefined8*)( this + 0x40 ) = uVar4;
   *(undefined8*)( this + 0x48 ) = uVar3;
   *(undefined8*)( this + 0x50 ) = uVar7;
   if (pcVar8 == (code*)0x0) {
      iVar9 = (int)( (ulong)uVar1 >> 0x20 );
      uVar10 = ( (int)uVar1 * 0x16a88000 | ( uint )((int)uVar1 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ 0x7f07c65;
      uVar10 = ( iVar9 * 0x16a88000 | ( uint )(iVar9 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ ( uVar10 << 0xd | uVar10 >> 0x13 ) * 5 + 0xe6546b64;
      iVar9 = (int)uVar6;
      iVar11 = (int)( (ulong)uVar6 >> 0x20 );
      uVar10 = ( uVar10 << 0xd | uVar10 >> 0x13 ) * 5 + 0xe6546b64 ^ ( iVar9 * 0x16a88000 | ( uint )(iVar9 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
      uVar10 = ( uVar10 << 0xd | uVar10 >> 0x13 ) * 5 + 0xe6546b64 ^ ( iVar11 * 0x16a88000 | ( uint )(iVar11 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
      iVar9 = ( uVar10 << 0xd | uVar10 >> 0x13 ) * 5 + -0x19ab949c;
   }
 else {
      iVar9 = ( *pcVar8 )();
   }

   *(int*)( this + 0x60 ) = iVar9;
   Callable::Callable((Callable*)param_1, this);
   return;
}
/* gdextension_callable_custom_create2(void*, GDExtensionCallableCustomInfo2*) */void gdextension_callable_custom_create2(void *param_1, GDExtensionCallableCustomInfo2 *param_2) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   undefined8 uVar3;
   code *pcVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   int iVar11;
   CallableCustom *this;
   uint uVar12;
   int iVar13;
   this(CallableCustom * operator_new(0x68, ""));
   CallableCustom::CallableCustom(this);
   uVar5 = *(undefined8*)( param_2 + 0x38 );
   uVar6 = *(undefined8*)( param_2 + 0x40 );
   uVar7 = *(undefined8*)( param_2 + 0x28 );
   uVar8 = *(undefined8*)param_2;
   uVar9 = *(undefined8*)( param_2 + 8 );
   auVar1 = *(undefined1(*) [16])( param_2 + 0x18 );
   *(undefined***)this = &PTR_hash_0010d448;
   uVar2 = *(undefined8*)( param_2 + 0x10 );
   uVar3 = *(undefined8*)param_2;
   uVar10 = *(undefined8*)( param_2 + 0x48 );
   *(undefined8*)( this + 0x10 ) = uVar8;
   *(undefined8*)( this + 0x18 ) = uVar9;
   *(undefined8*)( this + 0x20 ) = uVar2;
   uVar2 = *(undefined8*)( param_2 + 0x50 );
   *(undefined1(*) [16])( this + 0x28 ) = auVar1;
   *(undefined8*)( this + 0x58 ) = uVar2;
   pcVar4 = *(code**)( param_2 + 0x30 );
   *(undefined8*)( this + 0x38 ) = uVar7;
   *(undefined8*)( this + 0x40 ) = uVar5;
   *(undefined8*)( this + 0x48 ) = uVar6;
   *(undefined8*)( this + 0x50 ) = uVar10;
   if (pcVar4 == (code*)0x0) {
      uVar12 = ( auVar1._0_4_ * 0x16a88000 | ( uint )(auVar1._0_4_ * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ 0x7f07c65;
      uVar12 = ( auVar1._4_4_ * 0x16a88000 | ( uint )(auVar1._4_4_ * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ ( uVar12 << 0xd | uVar12 >> 0x13 ) * 5 + 0xe6546b64;
      iVar11 = (int)uVar3;
      iVar13 = (int)( (ulong)uVar3 >> 0x20 );
      uVar12 = ( uVar12 << 0xd | uVar12 >> 0x13 ) * 5 + 0xe6546b64 ^ ( iVar11 * 0x16a88000 | ( uint )(iVar11 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
      uVar12 = ( uVar12 << 0xd | uVar12 >> 0x13 ) * 5 + 0xe6546b64 ^ ( iVar13 * 0x16a88000 | ( uint )(iVar13 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
      iVar11 = ( uVar12 << 0xd | uVar12 >> 0x13 ) * 5 + -0x19ab949c;
   }
 else {
      iVar11 = ( *pcVar4 )();
   }

   *(int*)( this + 0x60 ) = iVar11;
   Callable::Callable((Callable*)param_1, this);
   return;
}
/* gdextension_variant_get_ptr_internal_getter(GDExtensionVariantType) */code *gdextension_variant_get_ptr_internal_getter(undefined4 param_1) {
   code *pcVar1;
   switch (param_1) {
      case 0:
      case 0x27:
    _err_print_error("gdextension_variant_get_ptr_internal_getter",
                     "core/extension/gdextension_interface.cpp",0x30f,
                     "Method/function failed. Returning: nullptr",
                     "Getting Variant get internal pointer function with invalid type.",0,0);
    goto LAB_00100f79;
      case 1:
    pcVar1 = VariantInternal::get_bool;
    break;
      case 2:
    pcVar1 = VariantInternal::get_int;
    break;
      case 3:
    pcVar1 = VariantInternal::get_float;
    break;
      case 4:
    pcVar1 = VariantInternal::get_string;
    break;
      case 5:
    pcVar1 = VariantInternal::get_vector2;
    break;
      case 6:
    pcVar1 = VariantInternal::get_vector2i;
    break;
      case 7:
    pcVar1 = VariantInternal::get_rect2;
    break;
      case 8:
    pcVar1 = VariantInternal::get_rect2i;
    break;
      case 9:
    pcVar1 = VariantInternal::get_vector3;
    break;
      case 10:
    pcVar1 = VariantInternal::get_vector3i;
    break;
      case 0xb:
    pcVar1 = VariantInternal::get_transform2d;
    break;
      case 0xc:
    pcVar1 = VariantInternal::get_vector4;
    break;
      case 0xd:
    pcVar1 = VariantInternal::get_vector4i;
    break;
      case 0xe:
    pcVar1 = VariantInternal::get_plane;
    break;
      case 0xf:
    pcVar1 = VariantInternal::get_quaternion;
    break;
      case 0x10:
    pcVar1 = VariantInternal::get_aabb;
    break;
      case 0x11:
    pcVar1 = VariantInternal::get_basis;
    break;
      case 0x12:
    pcVar1 = VariantInternal::get_transform;
    break;
      case 0x13:
    pcVar1 = VariantInternal::get_projection;
    break;
      case 0x14:
    pcVar1 = VariantInternal::get_color;
    break;
      case 0x15:
    pcVar1 = VariantInternal::get_string_name;
    break;
      case 0x16:
    pcVar1 = VariantInternal::get_node_path;
    break;
      case 0x17:
    pcVar1 = VariantInternal::get_rid;
    break;
      case 0x18:
    pcVar1 = VariantInternal::get_object;
    break;
      case 0x19:
    pcVar1 = VariantInternal::get_callable;
    break;
      case 0x1a:
    pcVar1 = VariantInternal::get_signal;
    break;
      case 0x1b:
    pcVar1 = VariantInternal::get_dictionary;
    break;
      case 0x1c:
    pcVar1 = VariantInternal::get_array;
    break;
      case 0x1d:
    pcVar1 = VariantInternal::get_byte_array;
    break;
      case 0x1e:
    pcVar1 = VariantInternal::get_int32_array;
    break;
      case 0x1f:
    pcVar1 = VariantInternal::get_int64_array;
    break;
      case 0x20:
    pcVar1 = VariantInternal::get_float32_array;
    break;
      case 0x21:
    pcVar1 = VariantInternal::get_float64_array;
    break;
      case 0x22:
    pcVar1 = VariantInternal::get_string_array;
    break;
      case 0x23:
    pcVar1 = VariantInternal::get_vector2_array;
    break;
      case 0x24:
    pcVar1 = VariantInternal::get_vector3_array;
    break;
      case 0x25:
    pcVar1 = VariantInternal::get_color_array;
    break;
      case 0x26:
    pcVar1 = VariantInternal::get_vector4_array;
    break;
      default:
    _err_print_error("gdextension_variant_get_ptr_internal_getter",
                     "core/extension/gdextension_interface.cpp",0x311,
                     "Method/function failed. Returning: nullptr",
                     "Getting Variant get internal pointer function with invalid type.",0,0);
LAB_00100f79:
    pcVar1 = (code *)0x0;
   }

   return pcVar1;
}
/* gdextension_get_variant_to_type_constructor(GDExtensionVariantType) */code *gdextension_get_variant_to_type_constructor(undefined4 param_1) {
   code *pcVar1;
   switch (param_1) {
      case 0:
      case 0x27:
    _err_print_error("gdextension_get_variant_to_type_constructor",
                     "core/extension/gdextension_interface.cpp",0x2ba,
                     "Method/function failed. Returning: nullptr",
                     "Getting Variant conversion function with invalid type",0,0);
    goto LAB_00101279;
      case 1:
    pcVar1 = VariantTypeConstructor<bool>::type_from_variant;
    break;
      case 2:
    pcVar1 = VariantTypeConstructor<long>::type_from_variant;
    break;
      case 3:
    pcVar1 = VariantTypeConstructor<double>::type_from_variant;
    break;
      case 4:
    pcVar1 = VariantTypeConstructor<String>::type_from_variant;
    break;
      case 5:
    pcVar1 = VariantTypeConstructor<Vector2>::type_from_variant;
    break;
      case 6:
    pcVar1 = VariantTypeConstructor<Vector2i>::type_from_variant;
    break;
      case 7:
    pcVar1 = VariantTypeConstructor<Rect2>::type_from_variant;
    break;
      case 8:
    pcVar1 = VariantTypeConstructor<Rect2i>::type_from_variant;
    break;
      case 9:
    pcVar1 = VariantTypeConstructor<Vector3>::type_from_variant;
    break;
      case 10:
    pcVar1 = VariantTypeConstructor<Vector3i>::type_from_variant;
    break;
      case 0xb:
    pcVar1 = VariantTypeConstructor<Transform2D>::type_from_variant;
    break;
      case 0xc:
    pcVar1 = VariantTypeConstructor<Vector4>::type_from_variant;
    break;
      case 0xd:
    pcVar1 = VariantTypeConstructor<Vector4i>::type_from_variant;
    break;
      case 0xe:
    pcVar1 = VariantTypeConstructor<Plane>::type_from_variant;
    break;
      case 0xf:
    pcVar1 = VariantTypeConstructor<Quaternion>::type_from_variant;
    break;
      case 0x10:
    pcVar1 = VariantTypeConstructor<AABB>::type_from_variant;
    break;
      case 0x11:
    pcVar1 = VariantTypeConstructor<Basis>::type_from_variant;
    break;
      case 0x12:
    pcVar1 = VariantTypeConstructor<Transform3D>::type_from_variant;
    break;
      case 0x13:
    pcVar1 = VariantTypeConstructor<Projection>::type_from_variant;
    break;
      case 0x14:
    pcVar1 = VariantTypeConstructor<Color>::type_from_variant;
    break;
      case 0x15:
    pcVar1 = VariantTypeConstructor<StringName>::type_from_variant;
    break;
      case 0x16:
    pcVar1 = VariantTypeConstructor<NodePath>::type_from_variant;
    break;
      case 0x17:
    pcVar1 = VariantTypeConstructor<RID>::type_from_variant;
    break;
      case 0x18:
    pcVar1 = VariantTypeConstructor<Object*>::type_from_variant;
    break;
      case 0x19:
    pcVar1 = VariantTypeConstructor<Callable>::type_from_variant;
    break;
      case 0x1a:
    pcVar1 = VariantTypeConstructor<Signal>::type_from_variant;
    break;
      case 0x1b:
    pcVar1 = VariantTypeConstructor<Dictionary>::type_from_variant;
    break;
      case 0x1c:
    pcVar1 = VariantTypeConstructor<Array>::type_from_variant;
    break;
      case 0x1d:
    pcVar1 = VariantTypeConstructor<Vector<unsigned_char>>::type_from_variant;
    break;
      case 0x1e:
    pcVar1 = VariantTypeConstructor<Vector<int>>::type_from_variant;
    break;
      case 0x1f:
    pcVar1 = VariantTypeConstructor<Vector<long>>::type_from_variant;
    break;
      case 0x20:
    pcVar1 = VariantTypeConstructor<Vector<float>>::type_from_variant;
    break;
      case 0x21:
    pcVar1 = VariantTypeConstructor<Vector<double>>::type_from_variant;
    break;
      case 0x22:
    pcVar1 = VariantTypeConstructor<Vector<String>>::type_from_variant;
    break;
      case 0x23:
    pcVar1 = VariantTypeConstructor<Vector<Vector2>>::type_from_variant;
    break;
      case 0x24:
    pcVar1 = VariantTypeConstructor<Vector<Vector3>>::type_from_variant;
    break;
      case 0x25:
    pcVar1 = VariantTypeConstructor<Vector<Color>>::type_from_variant;
    break;
      case 0x26:
    pcVar1 = VariantTypeConstructor<Vector<Vector4>>::type_from_variant;
    break;
      default:
    _err_print_error("gdextension_get_variant_to_type_constructor",
                     "core/extension/gdextension_interface.cpp",700,
                     "Method/function failed. Returning: nullptr",
                     "Getting Variant conversion function with invalid type",0,0);
LAB_00101279:
    pcVar1 = (code *)0x0;
   }

   return pcVar1;
}
/* gdextension_get_variant_from_type_constructor(GDExtensionVariantType) */code *gdextension_get_variant_from_type_constructor(undefined4 param_1) {
   code *pcVar1;
   switch (param_1) {
      case 0:
      case 0x27:
    _err_print_error("gdextension_get_variant_from_type_constructor",
                     "core/extension/gdextension_interface.cpp",0x265,
                     "Method/function failed. Returning: nullptr",
                     "Getting Variant conversion function with invalid type",0,0);
    goto LAB_00101579;
      case 1:
    pcVar1 = VariantTypeConstructor<bool>::variant_from_type;
    break;
      case 2:
    pcVar1 = VariantTypeConstructor<long>::variant_from_type;
    break;
      case 3:
    pcVar1 = VariantTypeConstructor<double>::variant_from_type;
    break;
      case 4:
    pcVar1 = VariantTypeConstructor<String>::variant_from_type;
    break;
      case 5:
    pcVar1 = VariantTypeConstructor<Vector2>::variant_from_type;
    break;
      case 6:
    pcVar1 = VariantTypeConstructor<Vector2i>::variant_from_type;
    break;
      case 7:
    pcVar1 = VariantTypeConstructor<Rect2>::variant_from_type;
    break;
      case 8:
    pcVar1 = VariantTypeConstructor<Rect2i>::variant_from_type;
    break;
      case 9:
    pcVar1 = VariantTypeConstructor<Vector3>::variant_from_type;
    break;
      case 10:
    pcVar1 = VariantTypeConstructor<Vector3i>::variant_from_type;
    break;
      case 0xb:
    pcVar1 = VariantTypeConstructor<Transform2D>::variant_from_type;
    break;
      case 0xc:
    pcVar1 = VariantTypeConstructor<Vector4>::variant_from_type;
    break;
      case 0xd:
    pcVar1 = VariantTypeConstructor<Vector4i>::variant_from_type;
    break;
      case 0xe:
    pcVar1 = VariantTypeConstructor<Plane>::variant_from_type;
    break;
      case 0xf:
    pcVar1 = VariantTypeConstructor<Quaternion>::variant_from_type;
    break;
      case 0x10:
    pcVar1 = VariantTypeConstructor<AABB>::variant_from_type;
    break;
      case 0x11:
    pcVar1 = VariantTypeConstructor<Basis>::variant_from_type;
    break;
      case 0x12:
    pcVar1 = VariantTypeConstructor<Transform3D>::variant_from_type;
    break;
      case 0x13:
    pcVar1 = VariantTypeConstructor<Projection>::variant_from_type;
    break;
      case 0x14:
    pcVar1 = VariantTypeConstructor<Color>::variant_from_type;
    break;
      case 0x15:
    pcVar1 = VariantTypeConstructor<StringName>::variant_from_type;
    break;
      case 0x16:
    pcVar1 = VariantTypeConstructor<NodePath>::variant_from_type;
    break;
      case 0x17:
    pcVar1 = VariantTypeConstructor<RID>::variant_from_type;
    break;
      case 0x18:
    pcVar1 = VariantTypeConstructor<Object*>::variant_from_type;
    break;
      case 0x19:
    pcVar1 = VariantTypeConstructor<Callable>::variant_from_type;
    break;
      case 0x1a:
    pcVar1 = VariantTypeConstructor<Signal>::variant_from_type;
    break;
      case 0x1b:
    pcVar1 = VariantTypeConstructor<Dictionary>::variant_from_type;
    break;
      case 0x1c:
    pcVar1 = VariantTypeConstructor<Array>::variant_from_type;
    break;
      case 0x1d:
    pcVar1 = VariantTypeConstructor<Vector<unsigned_char>>::variant_from_type;
    break;
      case 0x1e:
    pcVar1 = VariantTypeConstructor<Vector<int>>::variant_from_type;
    break;
      case 0x1f:
    pcVar1 = VariantTypeConstructor<Vector<long>>::variant_from_type;
    break;
      case 0x20:
    pcVar1 = VariantTypeConstructor<Vector<float>>::variant_from_type;
    break;
      case 0x21:
    pcVar1 = VariantTypeConstructor<Vector<double>>::variant_from_type;
    break;
      case 0x22:
    pcVar1 = VariantTypeConstructor<Vector<String>>::variant_from_type;
    break;
      case 0x23:
    pcVar1 = VariantTypeConstructor<Vector<Vector2>>::variant_from_type;
    break;
      case 0x24:
    pcVar1 = VariantTypeConstructor<Vector<Vector3>>::variant_from_type;
    break;
      case 0x25:
    pcVar1 = VariantTypeConstructor<Vector<Color>>::variant_from_type;
    break;
      case 0x26:
    pcVar1 = VariantTypeConstructor<Vector<Vector4>>::variant_from_type;
    break;
      default:
    _err_print_error("gdextension_get_variant_from_type_constructor",
                     "core/extension/gdextension_interface.cpp",0x267,
                     "Method/function failed. Returning: nullptr",
                     "Getting Variant conversion function with invalid type",0,0);
LAB_00101579:
    pcVar1 = (code *)0x0;
   }

   return pcVar1;
}
/* gdextension_print_script_error_with_message(char const*, char const*, char const*, char const*,
   int, unsigned char) */void gdextension_print_script_error_with_message(char *param_1, char *param_2, char *param_3, char *param_4, int param_5, uchar param_6) {
   _err_print_error(param_3, param_4, param_5, param_1, param_2, param_6 != '\0', 2);
   return;
}
/* gdextension_print_warning_with_message(char const*, char const*, char const*, char const*, int,
   unsigned char) */void gdextension_print_warning_with_message(char *param_1, char *param_2, char *param_3, char *param_4, int param_5, uchar param_6) {
   _err_print_error(param_3, param_4, param_5, param_1, param_2, param_6 != '\0', 1);
   return;
}
/* gdextension_print_error_with_message(char const*, char const*, char const*, char const*, int,
   unsigned char) */void gdextension_print_error_with_message(char *param_1, char *param_2, char *param_3, char *param_4, int param_5, uchar param_6) {
   _err_print_error(param_3, param_4, param_5, param_1, param_2, param_6 != '\0', 0);
   return;
}
/* gdextension_array_operator_index_const(void const*, long) */undefined8 gdextension_array_operator_index_const(void *param_1, long param_2) {
   int iVar1;
   undefined8 uVar2;
   if (param_2 < 0) {
      return 0;
   }

   iVar1 = Array::size();
   if (param_2 < iVar1) {
      uVar2 = Array::operator []((int)param_1);
      return uVar2;
   }

   return 0;
}
/* gdextension_array_operator_index(void*, long) */undefined8 gdextension_array_operator_index(void *param_1, long param_2) {
   int iVar1;
   undefined8 uVar2;
   if (param_2 < 0) {
      return 0;
   }

   iVar1 = Array::size();
   if (param_2 < iVar1) {
      uVar2 = Array::operator []((int)param_1);
      return uVar2;
   }

   return 0;
}
/* gdextension_dictionary_operator_index_const(void const*, void const*) */void gdextension_dictionary_operator_index_const(void *param_1, void *param_2) {
   Dictionary::operator []((Variant*)param_1);
   return;
}
/* gdextension_mem_alloc(unsigned long) */void gdextension_mem_alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* gdextension_variant_new_copy(void*, void const*) */void gdextension_variant_new_copy(void *param_1, void *param_2) {
   Variant::Variant((Variant*)param_1, (Variant*)param_2);
   return;
}
/* gdextension_mem_realloc(void*, unsigned long) */void gdextension_mem_realloc(void *param_1, ulong param_2) {
   Memory::realloc_static(param_1, param_2, false);
   return;
}
/* gdextension_dictionary_operator_index(void*, void const*) */void gdextension_dictionary_operator_index(void *param_1, void *param_2) {
   Dictionary::operator []((Variant*)param_1);
   return;
}
/* gdextension_variant_stringify(void const*, void*) */void gdextension_variant_stringify(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::operator_cast_to_String((Variant*)param_2);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_object_set_instance(void*, void const*, void*) */void gdextension_object_set_instance(void *param_1, void *param_2, void *param_3) {
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_28, (StringName*)param_2);
   ClassDB::set_object_extension_instance((Object*)param_1, (StringName*)&local_28, param_3);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_object_free_instance_binding(void*, void*) */void gdextension_object_free_instance_binding(void *param_1, void *param_2) {
   Object::free_instance_binding(param_1);
   return;
}
/* gdextension_object_set_instance_binding(void*, void*, void*, GDExtensionInstanceBindingCallbacks
   const*) */void gdextension_object_set_instance_binding(void *param_1, void *param_2, void *param_3, GDExtensionInstanceBindingCallbacks *param_4) {
   Object::set_instance_binding(param_1, param_2, (GDExtensionInstanceBindingCallbacks*)param_3);
   return;
}
/* gdextension_object_get_instance_binding(void*, void*, GDExtensionInstanceBindingCallbacks const*)
    */void gdextension_object_get_instance_binding(void *param_1, void *param_2, GDExtensionInstanceBindingCallbacks *param_3) {
   Object::get_instance_binding(param_1, (GDExtensionInstanceBindingCallbacks*)param_2);
   return;
}
/* gdextension_global_get_singleton(void const*) */undefined8 gdextension_global_get_singleton(void *param_1) {
   StringName *pSVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_28, (StringName*)param_1);
   pSVar1 = (StringName*)Engine::get_singleton();
   uVar2 = Engine::get_singleton_object(pSVar1);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_worker_thread_pool_add_native_task(void*, void (*)(void*), void*, unsigned char, void
   const*) */void gdextension_worker_thread_pool_add_native_task(void *param_1, _func_void_void_ptr *param_2, void *param_3, uchar param_4, void *param_5) {
   WorkerThreadPool::add_native_task((_func_void_void_ptr*)param_1, param_2, SUB81(param_3, 0), (String_conflict*)( ulong )(param_4 != '\0'));
   return;
}
/* gdextension_worker_thread_pool_add_native_group_task(void*, void (*)(void*, unsigned int), void*,
   int, int, unsigned char, void const*) */void gdextension_worker_thread_pool_add_native_group_task(void *param_1, _func_void_void_ptr_uint *param_2, void *param_3, int param_4, int param_5, uchar param_6, void *param_7) {
   WorkerThreadPool::add_native_group_task((_func_void_void_ptr_uint*)param_1, param_2, (int)param_3, param_4, SUB41(param_5, 0), (String_conflict*)( ulong )(param_6 != '\0'));
   return;
}
/* gdextension_xml_parser_open_buffer(void*, unsigned char const*, unsigned long) */undefined4 gdextension_xml_parser_open_buffer(void *param_1, uchar *param_2, ulong param_3) {
   undefined4 uVar1;
   uVar1 = XMLParser::_open_buffer((uchar*)param_1, (ulong)param_2);
   return uVar1;
}
/* gdextension_string_new_with_utf8_chars_and_len2(void*, char const*, long) */undefined4 gdextension_string_new_with_utf8_chars_and_len2(void *param_1, char *param_2, long param_3) {
   undefined4 uVar1;
   *(undefined8*)param_1 = 0;
   uVar1 = String::parse_utf8((char*)param_1, (int)param_2, SUB81(param_3, 0));
   return uVar1;
}
/* gdextension_string_new_with_utf8_chars_and_len(void*, char const*, long) */void gdextension_string_new_with_utf8_chars_and_len(void *param_1, char *param_2, long param_3) {
   *(undefined8*)param_1 = 0;
   String::parse_utf8((char*)param_1, (int)param_2, SUB81(param_3, 0));
   return;
}
/* gdextension_string_new_with_utf8_chars(void*, char const*) */void gdextension_string_new_with_utf8_chars(void *param_1, char *param_2) {
   *(undefined8*)param_1 = 0;
   String::parse_utf8((char*)param_1, (int)param_2, true);
   return;
}
/* gdextension_string_operator_plus_eq_c32str(void*, char32_t const*) */void gdextension_string_operator_plus_eq_c32str(void *param_1, wchar32 *param_2) {
   String::operator +=((String_conflict*)param_1, param_2);
   return;
}
/* gdextension_string_operator_plus_eq_wcstr(void*, wchar_t const*) */void gdextension_string_operator_plus_eq_wcstr(void *param_1, wchar_t *param_2) {
   String::operator +=((String_conflict*)param_1, param_2);
   return;
}
/* gdextension_string_operator_plus_eq_cstr(void*, char const*) */void gdextension_string_operator_plus_eq_cstr(void *param_1, char *param_2) {
   String::operator +=((String_conflict*)param_1, param_2);
   return;
}
/* gdextension_string_operator_plus_eq_char(void*, char32_t) */void gdextension_string_operator_plus_eq_char(void *param_1, wchar32 param_2) {
   String::operator +=((String_conflict*)param_1, param_2);
   return;
}
/* gdextension_string_operator_plus_eq_string(void*, void const*) */void gdextension_string_operator_plus_eq_string(void *param_1, void *param_2) {
   String::operator +=((String_conflict*)param_1, (String_conflict*)param_2);
   return;
}
/* gdextension_string_new_with_utf32_chars(void*, char32_t const*) */void gdextension_string_new_with_utf32_chars(void *param_1, wchar32 *param_2) {
   wchar32 *pwVar1;
   wchar32 wVar2;
   long lVar3;
   long in_FS_OFFSET;
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)param_1 = 0;
   if (param_2 != (wchar32*)0x0) {
      wVar2 = *param_2;
      while (wVar2 != L'\0') {
         pwVar1 = param_2 + 1;
         param_2 = param_2 + 1;
         wVar2 = *pwVar1;
      }
;
   }

   String::parse_utf32((StrRange*)param_1);
   if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_string_new_with_utf16_chars_and_len2(void*, char16_t const*, long, unsigned char) */undefined4 gdextension_string_new_with_utf16_chars_and_len2(void *param_1, wchar16 *param_2, long param_3, uchar param_4) {
   undefined4 uVar1;
   *(undefined8*)param_1 = 0;
   uVar1 = String::parse_utf16((wchar16*)param_1, (int)param_2, SUB81(param_3, 0));
   return uVar1;
}
/* gdextension_string_new_with_utf16_chars_and_len(void*, char16_t const*, long) */void gdextension_string_new_with_utf16_chars_and_len(void *param_1, wchar16 *param_2, long param_3) {
   *(undefined8*)param_1 = 0;
   String::parse_utf16((wchar16*)param_1, (int)param_2, SUB81(param_3, 0));
   return;
}
/* gdextension_string_new_with_utf16_chars(void*, char16_t const*) */void gdextension_string_new_with_utf16_chars(void *param_1, wchar16 *param_2) {
   *(undefined8*)param_1 = 0;
   String::parse_utf16((wchar16*)param_1, (int)param_2, true);
   return;
}
/* gdextension_variant_get_constant_value(GDExtensionVariantType, void const*, void*) */void gdextension_variant_get_constant_value(undefined4 param_1, StringName *param_2, undefined8 param_3) {
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_28, param_2);
   Variant::get_constant_value(param_3, param_1, &local_28, 0);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_variant_get_ptr_keyed_checker(GDExtensionVariantType) */void gdextension_variant_get_ptr_keyed_checker(void) {
   Variant::get_member_ptr_keyed_checker();
   return;
}
/* gdextension_variant_get_ptr_keyed_getter(GDExtensionVariantType) */void gdextension_variant_get_ptr_keyed_getter(void) {
   Variant::get_member_ptr_keyed_getter();
   return;
}
/* gdextension_variant_get_ptr_keyed_setter(GDExtensionVariantType) */void gdextension_variant_get_ptr_keyed_setter(void) {
   Variant::get_member_ptr_keyed_setter();
   return;
}
/* gdextension_variant_get_ptr_indexed_getter(GDExtensionVariantType) */void gdextension_variant_get_ptr_indexed_getter(void) {
   Variant::get_member_ptr_indexed_getter();
   return;
}
/* gdextension_variant_get_ptr_indexed_setter(GDExtensionVariantType) */void gdextension_variant_get_ptr_indexed_setter(void) {
   Variant::get_member_ptr_indexed_setter();
   return;
}
/* gdextension_variant_get_ptr_getter(GDExtensionVariantType, void const*) */undefined8 gdextension_variant_get_ptr_getter(undefined4 param_1, StringName *param_2) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_28, param_2);
   uVar1 = Variant::get_member_ptr_getter(param_1, &local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_variant_get_ptr_setter(GDExtensionVariantType, void const*) */undefined8 gdextension_variant_get_ptr_setter(undefined4 param_1, StringName *param_2) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_28, param_2);
   uVar1 = Variant::get_member_ptr_setter(param_1, &local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_variant_construct(GDExtensionVariantType, void*, void const* const*, int,
   GDExtensionCallError*) */void gdextension_variant_construct(undefined8 param_1, undefined4 *param_2, undefined8 param_3, undefined8 param_4, undefined4 *param_5) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_2 = 0;
   *(undefined1(*) [16])( param_2 + 2 ) = (undefined1[16])0x0;
   Variant::construct();
   if (param_5 != (undefined4*)0x0) {
      *param_5 = 0;
      *(undefined8*)( param_5 + 1 ) = 0;
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_variant_get_ptr_destructor(GDExtensionVariantType) */void gdextension_variant_get_ptr_destructor(void) {
   Variant::get_ptr_destructor();
   return;
}
/* gdextension_variant_get_ptr_constructor(GDExtensionVariantType, int) */void gdextension_variant_get_ptr_constructor(void) {
   Variant::get_ptr_constructor();
   return;
}
/* gdextension_variant_get_ptr_operator_evaluator(GDExtensionVariantOperator,
   GDExtensionVariantType, GDExtensionVariantType) */void gdextension_variant_get_ptr_operator_evaluator(void) {
   Variant::get_ptr_operator_evaluator();
   return;
}
/* gdextension_variant_can_convert_strict(GDExtensionVariantType, GDExtensionVariantType) */void gdextension_variant_can_convert_strict(void) {
   Variant::can_convert_strict();
   return;
}
/* gdextension_variant_can_convert(GDExtensionVariantType, GDExtensionVariantType) */void gdextension_variant_can_convert(void) {
   Variant::can_convert();
   return;
}
/* gdextension_variant_get_object_instance_id(void const*) */undefined8 gdextension_variant_get_object_instance_id(void *param_1) {
   undefined8 uVar1;
   /* WARNING: Load size is inaccurate */
   if (*param_1 == 0x18) {
      uVar1 = Variant::operator_cast_to_ObjectID((Variant*)param_1);
      return uVar1;
   }

   return 0;
}
/* gdextension_variant_has_key(void const*, void const*, unsigned char*) */void gdextension_variant_has_key(void *param_1, void *param_2, uchar *param_3) {
   long lVar1;
   long in_FS_OFFSET;
   undefined1 local_11;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::has_key((Variant*)param_1, (bool*)param_2);
   *param_3 = local_11;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_variant_has_member(GDExtensionVariantType, void const*) */void gdextension_variant_has_member(void) {
   Variant::has_member();
   return;
}
/* gdextension_variant_has_method(void const*, void const*) */void gdextension_variant_has_method(void *param_1, void *param_2) {
   Variant::has_method((StringName*)param_1);
   return;
}
/* gdextension_variant_duplicate(void const*, void*, unsigned char) */void gdextension_variant_duplicate(void *param_1, void *param_2, uchar param_3) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::duplicate(SUB81(param_2, 0));
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_variant_booleanize(void const*) */void gdextension_variant_booleanize(void *param_1) {
   Variant::booleanize();
   return;
}
/* gdextension_variant_hash_compare(void const*, void const*) */void gdextension_variant_hash_compare(void *param_1, void *param_2) {
   Variant::hash_compare((Variant*)param_1, (int)param_2, false);
   return;
}
/* gdextension_variant_recursive_hash(void const*, long) */undefined4 gdextension_variant_recursive_hash(void *param_1, long param_2) {
   undefined4 uVar1;
   uVar1 = Variant::recursive_hash((int)param_1);
   return uVar1;
}
/* gdextension_variant_hash(void const*) */undefined4 gdextension_variant_hash(void *param_1) {
   undefined4 uVar1;
   uVar1 = Variant::hash();
   return uVar1;
}
/* gdextension_variant_iter_get(void const*, void*, void*, unsigned char*) */void gdextension_variant_iter_get(void *param_1, void *param_2, void *param_3, uchar *param_4) {
   long lVar1;
   long in_FS_OFFSET;
   undefined1 local_11;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::iter_get((Variant*)param_3, (bool*)param_1);
   *param_4 = local_11;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_variant_iter_next(void const*, void*, unsigned char*) */void gdextension_variant_iter_next(void *param_1, void *param_2, uchar *param_3) {
   long lVar1;
   long in_FS_OFFSET;
   undefined1 local_11;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::iter_next((Variant*)param_1, (bool*)param_2);
   *param_3 = local_11;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_variant_iter_init(void const*, void*, unsigned char*) */void gdextension_variant_iter_init(void *param_1, void *param_2, uchar *param_3) {
   long lVar1;
   long in_FS_OFFSET;
   undefined1 local_11;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_2 = 0;
   *(undefined1(*) [16])( (long)param_2 + 8 ) = (undefined1[16])0x0;
   Variant::iter_init((Variant*)param_1, (bool*)param_2);
   *param_3 = local_11;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_variant_get_indexed(void const*, long, void*, unsigned char*, unsigned char*) */void gdextension_variant_get_indexed(void *param_1, long param_2, void *param_3, uchar *param_4, uchar *param_5) {
   long lVar1;
   long in_FS_OFFSET;
   undefined1 local_22;
   undefined1 local_21;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::get_indexed((long)param_3, (bool*)param_1, (bool*)param_2);
   *param_4 = local_22;
   *param_5 = local_21;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_variant_get_keyed(void const*, void const*, void*, unsigned char*) */void gdextension_variant_get_keyed(void *param_1, void *param_2, void *param_3, uchar *param_4) {
   long lVar1;
   long in_FS_OFFSET;
   undefined1 local_11;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::get_keyed((Variant*)param_3, (bool*)param_1);
   *param_4 = local_11;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_variant_get_named(void const*, void const*, void*, unsigned char*) */void gdextension_variant_get_named(void *param_1, void *param_2, void *param_3, uchar *param_4) {
   long lVar1;
   long in_FS_OFFSET;
   undefined1 local_11;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::get_named((StringName*)param_3, (bool*)param_1);
   *param_4 = local_11;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_variant_get(void const*, void const*, void*, unsigned char*) */void gdextension_variant_get(void *param_1, void *param_2, void *param_3, uchar *param_4) {
   long lVar1;
   long in_FS_OFFSET;
   undefined1 local_11;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::get((Variant*)param_3, (bool*)param_1, (VariantGetError*)param_2);
   *param_4 = local_11;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_variant_set_indexed(void*, long, void const*, unsigned char*, unsigned char*) */void gdextension_variant_set_indexed(void *param_1, long param_2, void *param_3, uchar *param_4, uchar *param_5) {
   long in_FS_OFFSET;
   bool local_22;
   uchar local_21;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::set_indexed((long)param_1, (Variant*)param_2, (bool*)param_3, &local_22);
   *param_4 = local_22;
   *param_5 = local_21;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_variant_set_keyed(void*, void const*, void const*, unsigned char*) */void gdextension_variant_set_keyed(void *param_1, void *param_2, void *param_3, uchar *param_4) {
   long lVar1;
   long in_FS_OFFSET;
   undefined1 local_11;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::set_keyed((Variant*)param_1, (Variant*)param_2, (bool*)param_3);
   *param_4 = local_11;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_variant_set_named(void*, void const*, void const*, unsigned char*) */void gdextension_variant_set_named(void *param_1, void *param_2, void *param_3, uchar *param_4) {
   long lVar1;
   long in_FS_OFFSET;
   undefined1 local_11;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::set_named((StringName*)param_1, (Variant*)param_2, (bool*)param_3);
   *param_4 = local_11;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_variant_set(void*, void const*, void const*, unsigned char*) */void gdextension_variant_set(void *param_1, void *param_2, void *param_3, uchar *param_4) {
   long in_FS_OFFSET;
   VariantSetError local_11;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::set((Variant*)param_1, (Variant*)param_2, (bool*)param_3, &local_11);
   *param_4 = (uchar)local_11;
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_variant_evaluate(GDExtensionVariantOperator, void const*, void const*, void*,
   unsigned char*) */void gdextension_variant_evaluate(undefined4 param_1, Variant *param_2, Variant *param_3, Variant *param_4, undefined1 *param_5) {
   long in_FS_OFFSET;
   bool local_15;
   undefined4 local_14;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_4 = 0;
   *(undefined1(*) [16])( param_4 + 8 ) = (undefined1[16])0x0;
   local_14 = param_1;
   Variant::evaluate((Operator*)&local_14, param_2, param_3, param_4, &local_15);
   *param_5 = local_15;
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_variant_call_static(GDExtensionVariantType, void const*, void const* const*, long,
   void*, GDExtensionCallError*) */void gdextension_variant_call_static(undefined4 param_1, StringName *param_2, undefined8 param_3, undefined4 param_4, undefined4 *param_5, undefined4 *param_6) {
   long in_FS_OFFSET;
   long local_58;
   undefined4 local_50;
   undefined8 local_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_58, param_2);
   *param_5 = 0;
   *(undefined1(*) [16])( param_5 + 2 ) = (undefined1[16])0x0;
   local_50 = 0;
   local_4c = 0;
   Variant::call_static(param_1, &local_58, param_3, param_4, param_5, &local_50);
   if (param_6 != (undefined4*)0x0) {
      *param_6 = local_50;
      *(undefined8*)( param_6 + 1 ) = local_4c;
   }

   if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_variant_call(void*, void const*, void const* const*, long, void*,
   GDExtensionCallError*) */void gdextension_variant_call(void *param_1, void *param_2, void **param_3, long param_4, void *param_5, GDExtensionCallError *param_6) {
   long in_FS_OFFSET;
   Variant *local_58;
   undefined4 local_50;
   undefined8 local_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_58, (StringName*)param_2);
   *(undefined4*)param_5 = 0;
   *(undefined1(*) [16])( (long)param_5 + 8 ) = (undefined1[16])0x0;
   local_50 = 0;
   local_4c = 0;
   Variant::callp((StringName*)param_1, &local_58, (int)param_3, (Variant*)( param_4 & 0xffffffff ), (CallError*)param_5);
   if (param_6 != (GDExtensionCallError*)0x0) {
      *(undefined4*)param_6 = local_50;
      *(undefined8*)( param_6 + 4 ) = local_4c;
   }

   if (( StringName::configured != '\0' ) && ( local_58 != (Variant*)0x0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_string_new_with_latin1_chars_and_len(void*, char const*, long) */void gdextension_string_new_with_latin1_chars_and_len(void *param_1, char *param_2, long param_3) {
   long lVar1;
   int iVar2;
   int iVar3;
   long in_FS_OFFSET;
   iVar3 = (int)param_3;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)param_1 = 0;
   if (param_2 != (char*)0x0) {
      if (iVar3 < 0) {
         strlen(param_2);
      }
 else if (iVar3 != 0) {
         iVar2 = 0;
         do {
            if (*param_2 == '\0') break;
            iVar2 = iVar2 + 1;
            param_2 = param_2 + 1;
         }
 while ( iVar3 != iVar2 );
      }

   }

   String::parse_latin1((StrRange*)param_1);
   if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* gdextension_string_new_with_utf32_chars_and_len(void*, char32_t const*, long) */void gdextension_string_new_with_utf32_chars_and_len(void *param_1, wchar32 *param_2, long param_3) {
   wchar32 *pwVar1;
   wchar32 wVar2;
   long lVar3;
   int iVar4;
   int iVar5;
   long in_FS_OFFSET;
   iVar5 = (int)param_3;
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)param_1 = 0;
   if (param_2 != (wchar32*)0x0) {
      if (iVar5 < 0) {
         wVar2 = *param_2;
         while (wVar2 != L'\0') {
            pwVar1 = param_2 + 1;
            param_2 = param_2 + 1;
            wVar2 = *pwVar1;
         }
;
      }
 else if (iVar5 != 0) {
         iVar4 = 0;
         do {
            wVar2 = *param_2;
            param_2 = param_2 + 1;
            if (wVar2 == L'\0') break;
            iVar4 = iVar4 + 1;
         }
 while ( iVar5 != iVar4 );
      }

   }

   String::parse_utf32((StrRange*)param_1);
   if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_string_new_with_wide_chars_and_len(void*, wchar_t const*, long) */void gdextension_string_new_with_wide_chars_and_len(void *param_1, wchar_t *param_2, long param_3) {
   gdextension_string_new_with_utf32_chars_and_len(param_1, param_2, param_3);
   return;
}
/* gdextension_object_destroy(void*) */void gdextension_object_destroy(void *param_1) {
   char cVar1;
   cVar1 = predelete_handler((Object*)param_1);
   if (cVar1 != '\0') {
      /* WARNING: Load size is inaccurate */
      ( **(code**)( *param_1 + 0x140 ) )(param_1);
      Memory::free_static(param_1, false);
      return;
   }

   return;
}
/* gdextension_string_to_utf16_chars(void const*, char16_t*, long) */long gdextension_string_to_utf16_chars(void *param_1, wchar16 *param_2, long param_3) {
   long *plVar1;
   long lVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   long in_FS_OFFSET;
   long local_28;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   String::utf16();
   if (local_28 == 0) {
      lVar5 = 0;
   }
 else {
      lVar5 = 0;
      iVar3 = (int)*(undefined8*)( local_28 + -8 );
      if (( iVar3 != 0 ) && ( lVar5 = (long)( iVar3 + -1 ) ),param_2 != (wchar16*)0x0) {
         if (lVar5 < param_3) {
            param_3 = lVar5;
         }

         if (0 < param_3) {
            lVar4 = 0;
            do {
               param_2[lVar4] = *(wchar16*)( local_28 + lVar4 * 2 );
               lVar4 = lVar4 + 1;
            }
 while ( lVar4 != param_3 );
         }

      }

      LOCK();
      plVar1 = (long*)( local_28 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_28 + -0x10 ), false);
      }

   }

   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_string_to_latin1_chars(void const*, char*, long) */long gdextension_string_to_latin1_chars(void *param_1, char *param_2, long param_3) {
   long *plVar1;
   long lVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   long in_FS_OFFSET;
   long local_28;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   String::ascii(true);
   if (local_28 == 0) {
      lVar5 = 0;
   }
 else {
      lVar5 = 0;
      iVar3 = (int)*(undefined8*)( local_28 + -8 );
      if (( iVar3 != 0 ) && ( lVar5 = (long)( iVar3 + -1 ) ),param_2 != (char*)0x0) {
         if (lVar5 < param_3) {
            param_3 = lVar5;
         }

         if (0 < param_3) {
            lVar4 = 0;
            do {
               param_2[lVar4] = *(char*)( local_28 + lVar4 );
               lVar4 = lVar4 + 1;
            }
 while ( lVar4 != param_3 );
         }

      }

      LOCK();
      plVar1 = (long*)( local_28 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_28 + -0x10 ), false);
      }

   }

   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_ref_set_object(void*, void*) */void gdextension_ref_set_object(void *param_1, void *param_2) {
   Object *pOVar1;
   char cVar2;
   Object *pOVar3;
   if (param_1 == (void*)0x0) {
      _err_print_error("gdextension_ref_set_object", "core/extension/gdextension_interface.cpp", 0x593, "Parameter \"ref\" is null.", 0, 0);
      return;
   }

   /* WARNING: Load size is inaccurate */
   pOVar1 = *param_1;
   if ((Object*)param_2 == pOVar1) {
      return;
   }

   if (param_2 == (void*)0x0) {
      if (pOVar1 == (Object*)0x0) {
         return;
      }

      *(undefined8*)param_1 = 0;
   }
 else {
      pOVar3 = (Object*)__dynamic_cast(param_2, &Object::typeinfo, &RefCounted::typeinfo, 0);
      if (pOVar1 == pOVar3) {
         return;
      }

      *(Object**)param_1 = pOVar3;
      if (( pOVar3 != (Object*)0x0 ) && ( cVar2 = RefCounted::init_ref() ),cVar2 == '\0') {
         *(undefined8*)param_1 = 0;
      }

      if (pOVar1 == (Object*)0x0) {
         return;
      }

   }

   cVar2 = RefCounted::unreference();
   if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar1) ),cVar2 != '\0') {
      ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
      Memory::free_static(pOVar1, false);
      return;
   }

   return;
}
/* gdextension_packed_vector4_array_operator_index(void*, long) */undefined8 *gdextension_packed_vector4_array_operator_index(void *param_1, long param_2) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   undefined8 *__dest;
   ulong uVar5;
   size_t __n;
   if (param_2 < 0) {
      return (undefined8*)0x0;
   }

   lVar2 = *(long*)( (long)param_1 + 8 );
   if (lVar2 == 0) {
      return (undefined8*)0x0;
   }

   if (*(long*)( lVar2 + -8 ) <= param_2) {
      return (undefined8*)0x0;
   }

   if (1 < *(ulong*)( lVar2 + -0x10 )) {
      if (*(long*)( (long)param_1 + 8 ) == 0) {
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar2 = *(long*)( *(long*)( (long)param_1 + 8 ) + -8 );
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
         __dest = puVar4 + 2;
         *puVar4 = 1;
         puVar4[1] = lVar2;
         memcpy(__dest, *(void**)( (long)param_1 + 8 ), __n);
         if (*(long*)( (long)param_1 + 8 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( (long)param_1 + 8 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( (long)param_1 + 8 );
               *(undefined8*)( (long)param_1 + 8 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         *(undefined8**)( (long)param_1 + 8 ) = __dest;
         goto LAB_00102b69;
      }

      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   }

   __dest = *(undefined8**)( (long)param_1 + 8 );
   LAB_00102b69:return __dest + param_2 * 2;
}
/* gdextension_packed_int64_array_operator_index(void*, long) */undefined8 *gdextension_packed_int64_array_operator_index(void *param_1, long param_2) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   undefined8 *__dest;
   size_t __n;
   if (param_2 < 0) {
      return (undefined8*)0x0;
   }

   lVar2 = *(long*)( (long)param_1 + 8 );
   if (lVar2 == 0) {
      return (undefined8*)0x0;
   }

   if (*(long*)( lVar2 + -8 ) <= param_2) {
      return (undefined8*)0x0;
   }

   if (1 < *(ulong*)( lVar2 + -0x10 )) {
      if (*(long*)( (long)param_1 + 8 ) == 0) {
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar2 = *(long*)( *(long*)( (long)param_1 + 8 ) + -8 );
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
         __dest = puVar4 + 2;
         *puVar4 = 1;
         puVar4[1] = lVar2;
         memcpy(__dest, *(void**)( (long)param_1 + 8 ), __n);
         if (*(long*)( (long)param_1 + 8 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( (long)param_1 + 8 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( (long)param_1 + 8 );
               *(undefined8*)( (long)param_1 + 8 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         *(undefined8**)( (long)param_1 + 8 ) = __dest;
         goto LAB_00102cb8;
      }

      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   }

   __dest = *(undefined8**)( (long)param_1 + 8 );
   LAB_00102cb8:return __dest + param_2;
}
/* gdextension_packed_int32_array_operator_index(void*, long) */long gdextension_packed_int32_array_operator_index(void *param_1, long param_2) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   undefined8 *__dest;
   size_t __n;
   if (param_2 < 0) {
      return 0;
   }

   lVar2 = *(long*)( (long)param_1 + 8 );
   if (lVar2 == 0) {
      return 0;
   }

   if (*(long*)( lVar2 + -8 ) <= param_2) {
      return 0;
   }

   if (1 < *(ulong*)( lVar2 + -0x10 )) {
      if (*(long*)( (long)param_1 + 8 ) == 0) {
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar2 = *(long*)( *(long*)( (long)param_1 + 8 ) + -8 );
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
         __dest = puVar4 + 2;
         *puVar4 = 1;
         puVar4[1] = lVar2;
         memcpy(__dest, *(void**)( (long)param_1 + 8 ), __n);
         if (*(long*)( (long)param_1 + 8 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( (long)param_1 + 8 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( (long)param_1 + 8 );
               *(undefined8*)( (long)param_1 + 8 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         *(undefined8**)( (long)param_1 + 8 ) = __dest;
         goto LAB_00102df8;
      }

      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   }

   __dest = *(undefined8**)( (long)param_1 + 8 );
   LAB_00102df8:return (long)__dest + param_2 * 4;
}
/* gdextension_packed_float64_array_operator_index(void*, long) */undefined8 *gdextension_packed_float64_array_operator_index(void *param_1, long param_2) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   undefined8 *__dest;
   size_t __n;
   if (param_2 < 0) {
      return (undefined8*)0x0;
   }

   lVar2 = *(long*)( (long)param_1 + 8 );
   if (lVar2 == 0) {
      return (undefined8*)0x0;
   }

   if (*(long*)( lVar2 + -8 ) <= param_2) {
      return (undefined8*)0x0;
   }

   if (1 < *(ulong*)( lVar2 + -0x10 )) {
      if (*(long*)( (long)param_1 + 8 ) == 0) {
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar2 = *(long*)( *(long*)( (long)param_1 + 8 ) + -8 );
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
         __dest = puVar4 + 2;
         *puVar4 = 1;
         puVar4[1] = lVar2;
         memcpy(__dest, *(void**)( (long)param_1 + 8 ), __n);
         if (*(long*)( (long)param_1 + 8 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( (long)param_1 + 8 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( (long)param_1 + 8 );
               *(undefined8*)( (long)param_1 + 8 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         *(undefined8**)( (long)param_1 + 8 ) = __dest;
         goto LAB_00102f38;
      }

      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   }

   __dest = *(undefined8**)( (long)param_1 + 8 );
   LAB_00102f38:return __dest + param_2;
}
/* gdextension_packed_float32_array_operator_index(void*, long) */long gdextension_packed_float32_array_operator_index(void *param_1, long param_2) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   undefined8 *__dest;
   size_t __n;
   if (param_2 < 0) {
      return 0;
   }

   lVar2 = *(long*)( (long)param_1 + 8 );
   if (lVar2 == 0) {
      return 0;
   }

   if (*(long*)( lVar2 + -8 ) <= param_2) {
      return 0;
   }

   if (1 < *(ulong*)( lVar2 + -0x10 )) {
      if (*(long*)( (long)param_1 + 8 ) == 0) {
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar2 = *(long*)( *(long*)( (long)param_1 + 8 ) + -8 );
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
         __dest = puVar4 + 2;
         *puVar4 = 1;
         puVar4[1] = lVar2;
         memcpy(__dest, *(void**)( (long)param_1 + 8 ), __n);
         if (*(long*)( (long)param_1 + 8 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( (long)param_1 + 8 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( (long)param_1 + 8 );
               *(undefined8*)( (long)param_1 + 8 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         *(undefined8**)( (long)param_1 + 8 ) = __dest;
         goto LAB_00103078;
      }

      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   }

   __dest = *(undefined8**)( (long)param_1 + 8 );
   LAB_00103078:return (long)__dest + param_2 * 4;
}
/* gdextension_packed_color_array_operator_index(void*, long) */undefined8 *gdextension_packed_color_array_operator_index(void *param_1, long param_2) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   undefined8 *__dest;
   ulong uVar5;
   size_t __n;
   if (param_2 < 0) {
      return (undefined8*)0x0;
   }

   lVar2 = *(long*)( (long)param_1 + 8 );
   if (lVar2 == 0) {
      return (undefined8*)0x0;
   }

   if (*(long*)( lVar2 + -8 ) <= param_2) {
      return (undefined8*)0x0;
   }

   if (1 < *(ulong*)( lVar2 + -0x10 )) {
      if (*(long*)( (long)param_1 + 8 ) == 0) {
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar2 = *(long*)( *(long*)( (long)param_1 + 8 ) + -8 );
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
         __dest = puVar4 + 2;
         *puVar4 = 1;
         puVar4[1] = lVar2;
         memcpy(__dest, *(void**)( (long)param_1 + 8 ), __n);
         if (*(long*)( (long)param_1 + 8 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( (long)param_1 + 8 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( (long)param_1 + 8 );
               *(undefined8*)( (long)param_1 + 8 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         *(undefined8**)( (long)param_1 + 8 ) = __dest;
         goto LAB_001031b9;
      }

      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   }

   __dest = *(undefined8**)( (long)param_1 + 8 );
   LAB_001031b9:return __dest + param_2 * 2;
}
/* gdextension_packed_byte_array_operator_index(void*, long) */long gdextension_packed_byte_array_operator_index(void *param_1, long param_2) {
   long *plVar1;
   long lVar2;
   size_t __n;
   code *pcVar3;
   undefined8 *puVar4;
   undefined8 *__dest;
   ulong uVar5;
   if (param_2 < 0) {
      return 0;
   }

   lVar2 = *(long*)( (long)param_1 + 8 );
   if (lVar2 == 0) {
      return 0;
   }

   if (*(long*)( lVar2 + -8 ) <= param_2) {
      return 0;
   }

   if (1 < *(ulong*)( lVar2 + -0x10 )) {
      if (*(long*)( (long)param_1 + 8 ) == 0) {
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      __n = *(size_t*)( *(long*)( (long)param_1 + 8 ) + -8 );
      uVar5 = 0x10;
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
         __dest = puVar4 + 2;
         *puVar4 = 1;
         puVar4[1] = __n;
         memcpy(__dest, *(void**)( (long)param_1 + 8 ), __n);
         if (*(long*)( (long)param_1 + 8 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( (long)param_1 + 8 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( (long)param_1 + 8 );
               *(undefined8*)( (long)param_1 + 8 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         *(undefined8**)( (long)param_1 + 8 ) = __dest;
         goto LAB_0010330b;
      }

      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   }

   __dest = *(undefined8**)( (long)param_1 + 8 );
   LAB_0010330b:return (long)__dest + param_2;
}
/* gdextension_packed_vector2_array_operator_index(void*, long) */undefined8 *gdextension_packed_vector2_array_operator_index(void *param_1, long param_2) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   undefined8 *__dest;
   size_t __n;
   if (param_2 < 0) {
      return (undefined8*)0x0;
   }

   lVar2 = *(long*)( (long)param_1 + 8 );
   if (lVar2 == 0) {
      return (undefined8*)0x0;
   }

   if (*(long*)( lVar2 + -8 ) <= param_2) {
      return (undefined8*)0x0;
   }

   if (1 < *(ulong*)( lVar2 + -0x10 )) {
      if (*(long*)( (long)param_1 + 8 ) == 0) {
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar2 = *(long*)( *(long*)( (long)param_1 + 8 ) + -8 );
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
         __dest = puVar4 + 2;
         *puVar4 = 1;
         puVar4[1] = lVar2;
         memcpy(__dest, *(void**)( (long)param_1 + 8 ), __n);
         if (*(long*)( (long)param_1 + 8 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( (long)param_1 + 8 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( (long)param_1 + 8 );
               *(undefined8*)( (long)param_1 + 8 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         *(undefined8**)( (long)param_1 + 8 ) = __dest;
         goto LAB_00103458;
      }

      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   }

   __dest = *(undefined8**)( (long)param_1 + 8 );
   LAB_00103458:return __dest + param_2;
}
/* gdextension_packed_vector3_array_operator_index(void*, long) */long gdextension_packed_vector3_array_operator_index(void *param_1, long param_2) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   undefined8 *__dest;
   size_t __n;
   if (param_2 < 0) {
      return 0;
   }

   lVar2 = *(long*)( (long)param_1 + 8 );
   if (lVar2 == 0) {
      return 0;
   }

   if (*(long*)( lVar2 + -8 ) <= param_2) {
      return 0;
   }

   if (1 < *(ulong*)( lVar2 + -0x10 )) {
      if (*(long*)( (long)param_1 + 8 ) == 0) {
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar2 = *(long*)( *(long*)( (long)param_1 + 8 ) + -8 );
      uVar5 = 0x10;
      __n = lVar2 * 0xc;
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
         __dest = puVar4 + 2;
         *puVar4 = 1;
         puVar4[1] = lVar2;
         memcpy(__dest, *(void**)( (long)param_1 + 8 ), __n);
         if (*(long*)( (long)param_1 + 8 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( (long)param_1 + 8 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( (long)param_1 + 8 );
               *(undefined8*)( (long)param_1 + 8 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         *(undefined8**)( (long)param_1 + 8 ) = __dest;
         goto LAB_00103598;
      }

      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   }

   __dest = *(undefined8**)( (long)param_1 + 8 );
   LAB_00103598:return (long)__dest + param_2 * 0xc;
}
/* gdextension_object_get_instance_from_id(unsigned long) */ulong gdextension_object_get_instance_from_id(ulong param_1) {
   long lVar1;
   ulong uVar2;
   uint uVar3;
   ulong *puVar4;
   long in_FS_OFFSET;
   bool bVar5;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = (uint)param_1 & 0xffffff;
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
      if (( param_1 >> 0x18 & 0x7fffffffff ) == ( *puVar4 & 0x7fffffffff )) {
         uVar2 = puVar4[1];
         ObjectDB::spin_lock._0_1_ = '\0';
      }
 else {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      uVar2 = 0;
   }

   if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* gdextension_object_get_class_name(void const*, void*, void*) */undefined8 gdextension_object_get_class_name(void *param_1, void *param_2, void *param_3) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = 0;
   if (param_1 != (void*)0x0) {
      *(undefined8*)param_3 = 0;
      Object::get_class_name_for_extension((GDExtension*)&local_28);
      /* WARNING: Load size is inaccurate */
      if (*param_3 == local_28) {
         if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(long*)param_3 = local_28;
      }

      uVar1 = 1;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_string_new_with_wide_chars(void*, wchar_t const*) */void gdextension_string_new_with_wide_chars(void *param_1, wchar_t *param_2) {
   wchar_t *pwVar1;
   wchar_t wVar2;
   long lVar3;
   long in_FS_OFFSET;
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)param_1 = 0;
   if (param_2 != (wchar_t*)0x0) {
      wVar2 = *param_2;
      while (wVar2 != L'\0') {
         pwVar1 = param_2 + 1;
         param_2 = param_2 + 1;
         wVar2 = *pwVar1;
      }
;
   }

   String::parse_utf32((StrRange*)param_1);
   if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_object_get_script_instance(void const*, void const*) */long gdextension_object_get_script_instance(void *param_1, void *param_2) {
   long *plVar1;
   void *pvVar2;
   if (param_1 == (void*)0x0) {
      return 0;
   }

   if (( param_2 != (void*)0x0 ) && ( plVar1 = *(long**)( (long)param_1 + 0x98 ) ),plVar1 != (long*)0x0) {
      if (*(code**)( *plVar1 + 0xb8 ) == ScriptInstanceExtension::get_language) {
         if (*(code**)( plVar1[1] + 0xc0 ) == (code*)0x0) {
            return 0;
         }

         pvVar2 = (void*)( **(code**)( plVar1[1] + 0xc0 ) )(plVar1[4]);
      }
 else {
         pvVar2 = (void*)( **(code**)( *plVar1 + 0xb8 ) )(plVar1);
      }

      if (param_2 == pvVar2) {
         return plVar1[4];
      }

   }

   return 0;
}
/* gdextension_object_has_script_method(void const*, void const*) */uint gdextension_object_has_script_method(void *param_1, void *param_2) {
   long *plVar1;
   char cVar2;
   uint uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_28, (StringName*)param_2);
   plVar1 = *(long**)( (long)param_1 + 0x98 );
   uVar3 = 0;
   if (plVar1 != (long*)0x0) {
      if (*(code**)( *plVar1 + 0x50 ) == ScriptInstanceExtension::has_method) {
         if (*(code**)( plVar1[1] + 0x68 ) != (code*)0x0) {
            cVar2 = ( **(code**)( plVar1[1] + 0x68 ) )(plVar1[4], &local_28);
            uVar3 = ( uint )(cVar2 != '\0');
         }

      }
 else {
         uVar3 = ( **(code**)( *plVar1 + 0x50 ) )(plVar1, &local_28);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_string_to_utf8_chars(void const*, char*, long) */long gdextension_string_to_utf8_chars(void *param_1, char *param_2, long param_3) {
   long *plVar1;
   long lVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   long in_FS_OFFSET;
   long local_28;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   String::utf8();
   if (local_28 == 0) {
      lVar5 = 0;
   }
 else {
      lVar5 = 0;
      iVar3 = (int)*(undefined8*)( local_28 + -8 );
      if (( iVar3 != 0 ) && ( lVar5 = (long)( iVar3 + -1 ) ),param_2 != (char*)0x0) {
         if (lVar5 < param_3) {
            param_3 = lVar5;
         }

         if (0 < param_3) {
            lVar4 = 0;
            do {
               param_2[lVar4] = *(char*)( local_28 + lVar4 );
               lVar4 = lVar4 + 1;
            }
 while ( lVar4 != param_3 );
         }

      }

      LOCK();
      plVar1 = (long*)( local_28 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_28 + -0x10 ), false);
      }

   }

   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_string_to_wide_chars(void const*, wchar_t*, long) */long gdextension_string_to_wide_chars(void *param_1, wchar_t *param_2, long param_3) {
   long lVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   /* WARNING: Load size is inaccurate */
   lVar1 = *param_1;
   if (lVar1 == 0) {
      lVar4 = 0;
   }
 else {
      lVar4 = 0;
      iVar2 = (int)*(undefined8*)( lVar1 + -8 );
      if (( iVar2 != 0 ) && ( lVar4 = (long)( iVar2 + -1 ) ),param_2 != (wchar_t*)0x0) {
         if (lVar4 < param_3) {
            param_3 = lVar4;
         }

         if (0 < param_3) {
            lVar3 = 0;
            do {
               param_2[lVar3] = *(wchar_t*)( lVar1 + lVar3 * 4 );
               lVar3 = lVar3 + 1;
            }
 while ( param_3 != lVar3 );
         }

      }

   }

   return lVar4;
}
/* gdextension_object_call_script_method(void*, void const*, void const* const*, long, void*,
   GDExtensionCallError*) */void gdextension_object_call_script_method(void *param_1, void *param_2, void **param_3, long param_4, void *param_5, GDExtensionCallError *param_6) {
   long lVar1;
   long in_FS_OFFSET;
   long local_70;
   undefined4 local_68;
   undefined8 local_64;
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_70, (StringName*)param_2);
   *(undefined1(*) [16])( (long)param_5 + 8 ) = (undefined1[16])0x0;
   /* WARNING: Load size is inaccurate */
   lVar1 = *param_1;
   local_68 = 0;
   local_64 = 0;
   *(undefined4*)param_5 = 0;
   ( **(code**)( lVar1 + 0x68 ) )(local_58, param_1, (StringName*)&local_70, param_3, param_4 & 0xffffffff, &local_68);
   /* WARNING: Load size is inaccurate */
   if (Variant::needs_deinit[*param_5] != '\0') {
      Variant::_clear_internal();
   }

   *(undefined4*)param_5 = local_58[0];
   *(undefined8*)( (long)param_5 + 8 ) = local_50;
   *(undefined8*)( (long)param_5 + 0x10 ) = uStack_48;
   if (param_6 != (GDExtensionCallError*)0x0) {
      *(undefined4*)param_6 = local_68;
      *(undefined8*)( param_6 + 4 ) = local_64;
   }

   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_string_new_with_latin1_chars(void*, char const*) */void gdextension_string_new_with_latin1_chars(void *param_1, char *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)param_1 = 0;
   if (param_2 != (char*)0x0) {
      strlen(param_2);
   }

   String::parse_latin1((StrRange*)param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_placeholder_script_instance_create(void*, void*, void*) */PlaceHolderScriptInstance *gdextension_placeholder_script_instance_create(void *param_1, void *param_2, void *param_3) {
   Object *pOVar1;
   char cVar2;
   Object *pOVar3;
   PlaceHolderScriptInstance *pPVar4;
   long in_FS_OFFSET;
   Object *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 == (void*)0x0 ) || ( pOVar3 = (Object*)__dynamic_cast(param_2, &Object::typeinfo, &Script::typeinfo, 0) ),pOVar3 == (Object*)0x0 )) {
      pPVar4 = (PlaceHolderScriptInstance*)operator_new(0x88, "");
      local_38 = (Object*)0x0;
      PlaceHolderScriptInstance::PlaceHolderScriptInstance(pPVar4, param_1, &local_38, param_3);
      if (( local_38 == (Object*)0x0 ) || ( cVar2 = RefCounted::unreference() ),cVar2 == '\0') goto LAB_00103d10;
      pOVar3 = (Object*)0x0;
      LAB_00103dc2:pOVar1 = local_38;
      cVar2 = predelete_handler(local_38);
      if (cVar2 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

      if (pOVar3 == (Object*)0x0) goto LAB_00103d10;
      cVar2 = RefCounted::unreference();
   }
 else {
      pPVar4 = (PlaceHolderScriptInstance*)operator_new(0x88, "");
      local_38 = pOVar3;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
         local_38 = (Object*)0x0;
      }

      PlaceHolderScriptInstance::PlaceHolderScriptInstance(pPVar4, param_1, &local_38, param_3);
      if (( local_38 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0') goto LAB_00103dc2;
      cVar2 = RefCounted::unreference();
   }

   if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar3) ),cVar2 != '\0') {
      ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
      Memory::free_static(pOVar3, false);
   }

   LAB_00103d10:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pPVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_string_name_new_with_utf8_chars_and_len(void*, char const*, long) */void gdextension_string_name_new_with_utf8_chars_and_len(void *param_1, char *param_2, long param_3) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = 0;
   String::parse_utf8((char*)&local_28, (int)param_2, SUB81(param_3, 0));
   StringName::StringName((StringName*)param_1, (String_conflict*)&local_28, false);
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
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_string_name_new_with_utf8_chars(void*, char const*) */void gdextension_string_name_new_with_utf8_chars(void *param_1, char *param_2) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = 0;
   String::parse_utf8((char*)&local_28, (int)param_2, true);
   StringName::StringName((StringName*)param_1, (String_conflict*)&local_28, false);
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
      return;
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
/* gdextension_variant_get_type_name(GDExtensionVariantType, void*) */void gdextension_variant_get_type_name(undefined4 param_1, CowData<char32_t> *param_2) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::get_type_name(&local_28, param_1);
   *(undefined8*)param_2 = 0;
   if (local_28 != 0) {
      CowData<char32_t>::_ref(param_2, (CowData*)&local_28);
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

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_variant_get_ptr_utility_function(void const*, long) */undefined8 gdextension_variant_get_ptr_utility_function(void *param_1, long param_2) {
   long *plVar1;
   char *pcVar2;
   long lVar3;
   uint uVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   long local_58;
   long local_50;
   char *local_48;
   size_t local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_68, (StringName*)param_1);
   uVar4 = Variant::get_utility_function_hash((StringName*)&local_68);
   if ((ulong)uVar4 == param_2) {
      uVar5 = Variant::get_ptr_utility_function((StringName*)&local_68);
   }
 else if (gdextension_variant_get_ptr_utility_function(void_const*,long) {
      uVar5 = 0;
   }
 else {
      local_50 = 0;
      local_40 = 0x10;
      local_48 = ", hash mismatch.";
      String::parse_latin1((StrRange*)&local_50);
      if (local_68 == 0) {
         local_60 = 0;
      }
 else {
         pcVar2 = *(char**)( local_68 + 8 );
         local_60 = 0;
         if (pcVar2 == (char*)0x0) {
            if (*(long*)( local_68 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( local_68 + 0x10 ));
            }

         }
 else {
            local_40 = strlen(pcVar2);
            local_48 = pcVar2;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      operator+((char *)&
      local_58,(String_conflict*)"Error getting utility function ";
      String::operator +((String_conflict*)&local_48, (String_conflict*)&local_58);
      _err_print_error("gdextension_variant_get_ptr_utility_function", "core/extension/gdextension_interface.cpp", 0x354, (String_conflict*)&local_48, 0, 0);
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

      lVar3 = local_58;
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

      gdextension_variant_get_ptr_utility_function(void_const*,long)::first_print =
      '\0';
      uVar5 = 0;
   }

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_variant_get_ptr_builtin_method(GDExtensionVariantType, void const*, long) */undefined8 gdextension_variant_get_ptr_builtin_method(undefined4 param_1, StringName *param_2, ulong param_3) {
   long *plVar1;
   char *pcVar2;
   long lVar3;
   uint uVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   long local_58;
   long local_50;
   char *local_48;
   size_t local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_68, param_2);
   uVar4 = Variant::get_builtin_method_hash(param_1, &local_68);
   if (uVar4 == param_3) {
      uVar5 = Variant::get_ptr_builtin_method(param_1, &local_68);
   }
 else if (gdextension_variant_get_ptr_builtin_method(GDExtensionVariantType, void_const, *, long) == '\0') {
      uVar5 = 0;
   }
 else {
      local_50 = 0;
      local_40 = 0x10;
      local_48 = ", hash mismatch.";
      String::parse_latin1((StrRange*)&local_50);
      if (local_68 == 0) {
         local_60 = 0;
      }
 else {
         pcVar2 = *(char**)( local_68 + 8 );
         local_60 = 0;
         if (pcVar2 == (char*)0x0) {
            if (*(long*)( local_68 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( local_68 + 0x10 ));
            }

         }
 else {
            local_40 = strlen(pcVar2);
            local_48 = pcVar2;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      operator+((char *)&
      local_58,(String_conflict*)"Error getting method ";
      String::operator +((String_conflict*)&local_48, (String_conflict*)&local_58);
      _err_print_error("gdextension_variant_get_ptr_builtin_method", "core/extension/gdextension_interface.cpp", 0x31c, (String_conflict*)&local_48, 0, 0);
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

      lVar3 = local_58;
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

      gdextension_variant_get_ptr_builtin_method(GDExtensionVariantType,void_const*,long)::first_print
         =
      '\0';
      uVar5 = 0;
   }

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<char32_t>::_copy_on_write() [clone .isra.0] */void CowData<char32_t>::_copy_on_write(CowData<char32_t> *this) {
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
/* gdextension_string_operator_index(void*, long) */long gdextension_string_operator_index(void *param_1, long param_2) {
   long lVar1;
   int iVar2;
   if (-1 < param_2) {
      /* WARNING: Load size is inaccurate */
      if (*param_1 == 0) {
         lVar1 = 1;
      }
 else {
         iVar2 = (int)*(undefined8*)( *param_1 + -8 );
         lVar1 = (long)iVar2;
         if (iVar2 == 0) {
            lVar1 = 1;
         }

      }

      if (param_2 < lVar1) {
         CowData<char32_t>::_copy_on_write((CowData<char32_t>*)param_1);
         /* WARNING: Load size is inaccurate */
         lVar1 = *param_1 + param_2 * 4;
      }
 else {
         lVar1 = 0;
      }

      return lVar1;
   }

   return 0;
}
/* gdextension_get_proc_address(char const*) */undefined8 gdextension_get_proc_address(char *param_1) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_28, param_1, false);
   uVar1 = GDExtension::get_interface_function((StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* gdextension_setup_interface() */void gdextension_setup_interface(void) {
   long in_FS_OFFSET;
   long local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_18, "get_godot_version", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_get_godot_version);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "mem_alloc", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_mem_alloc);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "mem_realloc", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_mem_realloc);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "mem_free", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_mem_free);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "print_error", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_print_error);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "print_error_with_message", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_print_error_with_message);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "print_warning", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_print_warning);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "print_warning_with_message", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_print_warning_with_message);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "print_script_error", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_print_script_error);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "print_script_error_with_message", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_print_script_error_with_message);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "get_native_struct_size", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_get_native_struct_size);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_new_copy", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_new_copy);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_new_nil", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_new_nil);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_destroy", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_destroy);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_call", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_call);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_call_static", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_call_static);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_evaluate", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_evaluate);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_set", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_set);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_set_named", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_set_named);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_set_keyed", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_set_keyed);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_set_indexed", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_set_indexed);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_get", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_get);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_get_named", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_get_named);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_get_keyed", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_get_keyed);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_get_indexed", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_get_indexed);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_iter_init", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_iter_init);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_iter_next", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_iter_next);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_iter_get", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_iter_get);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_hash", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_hash);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_recursive_hash", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_recursive_hash);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_hash_compare", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_hash_compare);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_booleanize", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_booleanize);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_duplicate", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_duplicate);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_stringify", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_stringify);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_get_type", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_get_type);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_has_method", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_has_method);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_has_member", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_has_member);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_has_key", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_has_key);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_get_object_instance_id", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_get_object_instance_id);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_get_type_name", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_get_type_name);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_can_convert", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_can_convert);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_can_convert_strict", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_can_convert_strict);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "get_variant_from_type_constructor", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_get_variant_from_type_constructor);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "get_variant_to_type_constructor", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_get_variant_to_type_constructor);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_get_ptr_internal_getter", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_get_ptr_internal_getter);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_get_ptr_operator_evaluator", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_get_ptr_operator_evaluator);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_get_ptr_builtin_method", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_get_ptr_builtin_method);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_get_ptr_constructor", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_get_ptr_constructor);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_get_ptr_destructor", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_get_ptr_destructor);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_construct", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_construct);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_get_ptr_setter", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_get_ptr_setter);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_get_ptr_getter", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_get_ptr_getter);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_get_ptr_indexed_setter", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_get_ptr_indexed_setter);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_get_ptr_indexed_getter", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_get_ptr_indexed_getter);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_get_ptr_keyed_setter", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_get_ptr_keyed_setter);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_get_ptr_keyed_getter", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_get_ptr_keyed_getter);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_get_ptr_keyed_checker", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_get_ptr_keyed_checker);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_get_constant_value", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_get_constant_value);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "variant_get_ptr_utility_function", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_variant_get_ptr_utility_function);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "string_new_with_latin1_chars", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_string_new_with_latin1_chars);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "string_new_with_utf8_chars", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_string_new_with_utf8_chars);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "string_new_with_utf16_chars", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_string_new_with_utf16_chars);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "string_new_with_utf32_chars", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_string_new_with_utf32_chars);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "string_new_with_wide_chars", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_string_new_with_wide_chars);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "string_new_with_latin1_chars_and_len", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_string_new_with_latin1_chars_and_len);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "string_new_with_utf8_chars_and_len", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_string_new_with_utf8_chars_and_len);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "string_new_with_utf8_chars_and_len2", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_string_new_with_utf8_chars_and_len2);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "string_new_with_utf16_chars_and_len", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_string_new_with_utf16_chars_and_len);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "string_new_with_utf16_chars_and_len2", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_string_new_with_utf16_chars_and_len2);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "string_new_with_utf32_chars_and_len", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_string_new_with_utf32_chars_and_len);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "string_new_with_wide_chars_and_len", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_string_new_with_wide_chars_and_len);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "string_to_latin1_chars", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_string_to_latin1_chars);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "string_to_utf8_chars", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_string_to_utf8_chars);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "string_to_utf16_chars", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_string_to_utf16_chars);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "string_to_utf32_chars", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_string_to_utf32_chars);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "string_to_wide_chars", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_string_to_wide_chars);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "string_operator_index", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_string_operator_index);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "string_operator_index_const", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_string_operator_index_const);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "string_operator_plus_eq_string", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_string_operator_plus_eq_string);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "string_operator_plus_eq_char", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_string_operator_plus_eq_char);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "string_operator_plus_eq_cstr", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_string_operator_plus_eq_cstr);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "string_operator_plus_eq_wcstr", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_string_operator_plus_eq_wcstr);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "string_operator_plus_eq_c32str", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_string_operator_plus_eq_c32str);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "string_resize", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_string_resize);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "string_name_new_with_latin1_chars", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_string_name_new_with_latin1_chars);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "string_name_new_with_utf8_chars", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_string_name_new_with_utf8_chars);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "string_name_new_with_utf8_chars_and_len", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_string_name_new_with_utf8_chars_and_len);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "xml_parser_open_buffer", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_xml_parser_open_buffer);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "file_access_store_buffer", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_file_access_store_buffer);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "file_access_get_buffer", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_file_access_get_buffer);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "worker_thread_pool_add_native_group_task", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_worker_thread_pool_add_native_group_task);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "worker_thread_pool_add_native_task", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_worker_thread_pool_add_native_task);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "packed_byte_array_operator_index", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_packed_byte_array_operator_index);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "packed_byte_array_operator_index_const", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_packed_byte_array_operator_index_const);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "packed_color_array_operator_index", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_packed_color_array_operator_index);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "packed_color_array_operator_index_const", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_packed_color_array_operator_index_const);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "packed_float32_array_operator_index", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_packed_float32_array_operator_index);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "packed_float32_array_operator_index_const", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_packed_float32_array_operator_index_const);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "packed_float64_array_operator_index", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_packed_float64_array_operator_index);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "packed_float64_array_operator_index_const", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_packed_float64_array_operator_index_const);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "packed_int32_array_operator_index", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_packed_int32_array_operator_index);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "packed_int32_array_operator_index_const", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_packed_int32_array_operator_index_const);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "packed_int64_array_operator_index", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_packed_int64_array_operator_index);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "packed_int64_array_operator_index_const", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_packed_int64_array_operator_index_const);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "packed_string_array_operator_index", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_packed_string_array_operator_index);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "packed_string_array_operator_index_const", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_packed_string_array_operator_index_const);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "packed_vector2_array_operator_index", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_packed_vector2_array_operator_index);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "packed_vector2_array_operator_index_const", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_packed_vector2_array_operator_index_const);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "packed_vector3_array_operator_index", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_packed_vector3_array_operator_index);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "packed_vector3_array_operator_index_const", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_packed_vector3_array_operator_index_const);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "packed_vector4_array_operator_index", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_packed_vector4_array_operator_index);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "packed_vector4_array_operator_index_const", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_packed_vector4_array_operator_index_const);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "array_operator_index", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_array_operator_index);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "array_operator_index_const", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_array_operator_index_const);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "array_ref", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_array_ref);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "array_set_typed", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_array_set_typed);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "dictionary_operator_index", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_dictionary_operator_index);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "dictionary_operator_index_const", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_dictionary_operator_index_const);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "dictionary_set_typed", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_dictionary_set_typed);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "object_method_bind_call", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_object_method_bind_call);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "object_method_bind_ptrcall", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_object_method_bind_ptrcall);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "object_destroy", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_object_destroy);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "global_get_singleton", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_global_get_singleton);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "object_get_instance_binding", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_object_get_instance_binding);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "object_set_instance_binding", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_object_set_instance_binding);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "object_free_instance_binding", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_object_free_instance_binding);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "object_set_instance", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_object_set_instance);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "object_get_class_name", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_object_get_class_name);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "object_cast_to", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_object_cast_to);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "object_get_instance_from_id", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_object_get_instance_from_id);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "object_get_instance_id", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_object_get_instance_id);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "object_has_script_method", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_object_has_script_method);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "object_call_script_method", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_object_call_script_method);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "ref_get_object", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_ref_get_object);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "ref_set_object", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_ref_set_object);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "script_instance_create", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_script_instance_create);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "script_instance_create2", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_script_instance_create2);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "script_instance_create3", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_script_instance_create3);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "placeholder_script_instance_create", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_placeholder_script_instance_create);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "placeholder_script_instance_update", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_placeholder_script_instance_update);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "object_get_script_instance", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_object_get_script_instance);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "callable_custom_create", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_callable_custom_create);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "callable_custom_create2", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_callable_custom_create2);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "callable_custom_get_userdata", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_callable_custom_get_userdata);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "classdb_construct_object", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_classdb_construct_object);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "classdb_construct_object2", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_classdb_construct_object2);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "classdb_get_method_bind", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_classdb_get_method_bind);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "classdb_get_class_tag", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_classdb_get_class_tag);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "editor_add_plugin", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_editor_add_plugin);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "editor_remove_plugin", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_editor_remove_plugin);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "editor_help_load_xml_from_utf8_chars", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_editor_help_load_xml_from_utf8_chars);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "editor_help_load_xml_from_utf8_chars_and_len", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_editor_help_load_xml_from_utf8_chars_and_len);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "image_ptrw", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_image_ptrw);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_18, "image_ptr", false);
   GDExtension::register_interface_function((StringName*)&local_18, gdextension_image_ptr);
   if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
      StringName::unref();
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_string_resize(void*, long) */undefined4 gdextension_string_resize(void *param_1, long param_2) {
   undefined4 uVar1;
   uVar1 = CowData<char32_t>::resize<false>((CowData<char32_t>*)param_1, (long)(int)param_2);
   return uVar1;
}
/* gdextension_placeholder_script_instance_update(void*, void const*, void const*) */void gdextension_placeholder_script_instance_update(void *param_1, void *param_2, void *param_3) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   int iVar4;
   List *pLVar5;
   undefined4 *puVar6;
   long lVar7;
   int iVar8;
   void *pvVar9;
   long in_FS_OFFSET;
   undefined1(*local_c0)[16];
   long *local_b8;
   long local_b0;
   Variant local_a8[8];
   undefined1 local_a0[16];
   undefined1 local_90[16];
   undefined8 local_80;
   undefined4 local_78[2];
   long local_70;
   long local_68;
   undefined4 local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1 == (void*)0x0 ) || ( pLVar5 = (List*)__dynamic_cast(param_1, &ScriptInstance::typeinfo, &PlaceHolderScriptInstance::typeinfo, 0) ),pLVar5 == (List*)0x0) {
      _err_print_error("gdextension_placeholder_script_instance_update", "core/extension/gdextension_interface.cpp", 0x5fd, "Parameter \"placeholder\" is null.", "Unable to update placeholder, expected a PlaceHolderScriptInstance but received an invalid type.", 0, 0);
      goto LAB_00106d0d;
   }

   local_c0 = (undefined1(*) [16])0x0;
   local_80 = 2;
   local_a0 = (undefined1[16])0x0;
   local_90 = (undefined1[16])0x0;
   for (iVar8 = 0; iVar4 = Array::size(),iVar8 < iVar4; iVar8 = iVar8 + 1) {
      Array::operator []((int)param_2);
      Variant::operator_cast_to_Dictionary((Variant*)&local_b0);
      PropertyInfo::from_dict((Dictionary*)local_78);
      if (local_c0 == (undefined1(*) [16])0x0) {
         local_c0 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined4*)local_c0[1] = 0;
         *local_c0 = (undefined1[16])0x0;
      }

      puVar6 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
      *(undefined8*)( puVar6 + 8 ) = 0;
      *(undefined1(*) [16])( puVar6 + 2 ) = (undefined1[16])0x0;
      *puVar6 = 0;
      puVar6[6] = 0;
      puVar6[10] = 6;
      *(undefined8*)( puVar6 + 0x10 ) = 0;
      *(undefined1(*) [16])( puVar6 + 0xc ) = (undefined1[16])0x0;
      *puVar6 = local_78[0];
      if (local_70 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar6 + 2 ), (CowData*)&local_70);
      }

      StringName::operator =((StringName*)( puVar6 + 4 ), (StringName*)&local_68);
      puVar6[6] = local_60;
      if (*(long*)( puVar6 + 8 ) != local_58) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar6 + 8 ), (CowData*)&local_58);
      }

      lVar3 = local_58;
      puVar6[10] = local_50;
      lVar7 = *(long*)( *local_c0 + 8 );
      *(undefined8*)( puVar6 + 0xc ) = 0;
      *(undefined1(**) [16])( puVar6 + 0x10 ) = local_c0;
      *(long*)( puVar6 + 0xe ) = lVar7;
      if (lVar7 != 0) {
         *(undefined4**)( lVar7 + 0x30 ) = puVar6;
      }

      lVar7 = *(long*)*local_c0;
      *(undefined4**)( *local_c0 + 8 ) = puVar6;
      if (lVar7 == 0) {
         *(undefined4**)*local_c0 = puVar6;
      }

      *(int*)local_c0[1] = *(int*)local_c0[1] + 1;
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

      lVar7 = local_70;
      if (local_70 != 0) {
         LOCK();
         plVar1 = (long*)( local_70 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

      Dictionary::~Dictionary((Dictionary*)&local_b0);
   }

   local_b8 = (long*)0x0;
   Dictionary::get_key_list((List*)param_3);
   if (local_b8 != (long*)0x0) {
      for (lVar7 = *local_b8; lVar7 != 0; lVar7 = *(long*)( lVar7 + 0x18 )) {
         Dictionary::operator []((Variant*)param_3);
         Variant::operator_cast_to_StringName((Variant*)&local_b0);
         HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::insert((StringName*)local_78, local_a8, SUB81((Variant*)&local_b0, 0));
         if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
            StringName::unref();
         }

      }

   }

   PlaceHolderScriptInstance::update(pLVar5, (HashMap*)&local_c0);
   List<Variant,DefaultAllocator>::~List((List<Variant,DefaultAllocator>*)&local_b8);
   if ((void*)local_a0._0_8_ != (void*)0x0) {
      pvVar9 = (void*)local_a0._0_8_;
      if (local_80._4_4_ != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( local_80 & 0xffffffff ) * 4 );
         if (uVar2 == 0) {
            local_80 = local_80 & 0xffffffff;
            local_90 = (undefined1[16])0x0;
         }
 else {
            lVar7 = 0;
            do {
               if (*(int*)( local_a0._8_8_ + lVar7 ) != 0) {
                  pvVar9 = *(void**)( (long)pvVar9 + lVar7 * 2 );
                  *(int*)( local_a0._8_8_ + lVar7 ) = 0;
                  if (Variant::needs_deinit[*(int*)( (long)pvVar9 + 0x18 )] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar9 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar9, false);
                  *(undefined8*)( local_a0._0_8_ + lVar7 * 2 ) = 0;
                  pvVar9 = (void*)local_a0._0_8_;
               }

               lVar7 = lVar7 + 4;
            }
 while ( lVar7 != (ulong)uVar2 << 2 );
            local_80 = local_80 & 0xffffffff;
            local_90 = (undefined1[16])0x0;
            if (pvVar9 == (void*)0x0) goto LAB_00106d05;
         }

      }

      Memory::free_static(pvVar9, false);
      Memory::free_static((void*)local_a0._8_8_, false);
   }

   LAB_00106d05:List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)&local_c0);
   LAB_00106d0d:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* gdextension_classdb_get_method_bind(void const*, void const*, long) */long gdextension_classdb_get_method_bind(void *param_1, void *param_2, long param_3) {
   char cVar1;
   long lVar2;
   long lVar3;
   long in_FS_OFFSET;
   bool local_81;
   long local_80;
   long local_78;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_80, (StringName*)param_1);
   StringName::StringName((StringName*)&local_78, (StringName*)param_2);
   local_81 = false;
   lVar2 = ClassDB::get_method_with_compatibility((StringName*)&local_80, (StringName*)&local_78, param_3, &local_81, (bool*)0x0);
   lVar3 = lVar2;
   if (lVar2 == 0) {
      if (local_81 == false) {
         LAB_00106ea7:_err_print_error("gdextension_classdb_get_method_bind", "core/extension/gdextension_interface.cpp", 0x651, "Parameter \"mb\" is null.", 0, 0);
         lVar3 = lVar2;
         goto LAB_00106e45;
      }

      cVar1 = GDExtensionSpecialCompatHashes::lookup_current_hash((StringName*)&local_80, (StringName*)&local_78, (uint)param_3, (uint*)&local_58);
      if (( cVar1 != '\0' ) && ( lVar3 = ClassDB::get_method_with_compatibility((StringName*)&local_80, (StringName*)&local_78, (ulong)local_58 & 0xffffffff, &local_81, (bool*)0x0) ),lVar3 != 0) goto LAB_00106e45;
      if (local_81 == false) goto LAB_00106ea7;
      StringName::StringName((StringName*)&local_60, (StringName*)&local_78);
      StringName::StringName((StringName*)&local_68, (StringName*)&local_80);
      local_58 = "Method \'%s.%s\' has changed and no compatibility fallback has been provided. Please open an issue.";
      local_70 = 0;
      local_50 = 0x61;
      String::parse_latin1((StrRange*)&local_70);
      vformat<StringName,StringName>((CowData<char32_t>*)&local_58, (StrRange*)&local_70, (StringName*)&local_68, (StringName*)&local_60);
      _err_print_error("gdextension_classdb_get_method_bind", "core/extension/gdextension_interface.cpp", 0x64e, (CowData<char32_t>*)&local_58, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (( StringName::configured == '\0' ) || ( ( local_68 != 0 && ( StringName::unref(),StringName::configured == '\0' ) ) )) goto LAB_00106e72;
      if (local_60 != 0) {
         StringName::unref();
         lVar3 = lVar2;
         goto LAB_00106e45;
      }

      lVar3 = 0;
   }
 else {
      LAB_00106e45:lVar2 = lVar3;
      if (StringName::configured == '\0') goto LAB_00106e72;
   }

   lVar2 = lVar3;
   if (( ( local_78 == 0 ) || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   LAB_00106e72:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return lVar2;
}
/* CowData<Variant>::_copy_on_write() [clone .isra.0] */void CowData<Variant>::_copy_on_write(CowData<Variant> *this) {
   Variant *this_00;
   long lVar1;
   code *pcVar2;
   undefined8 *puVar3;
   long lVar4;
   Variant *pVVar5;
   ulong uVar6;
   long lVar7;
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
   if (lVar1 * 0x18 != 0) {
      uVar6 = lVar1 * 0x18 - 1;
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

   lVar4 = 0;
   lVar7 = 0;
   *puVar3 = 1;
   puVar3[1] = lVar1;
   if (lVar1 != 0) {
      do {
         this_00 = (Variant*)( (long)( puVar3 + 2 ) + lVar4 );
         lVar7 = lVar7 + 1;
         pVVar5 = (Variant*)( *(long*)this + lVar4 );
         lVar4 = lVar4 + 0x18;
         ::Variant::Variant(this_00, pVVar5);
      }
 while ( lVar1 != lVar7 );
   }

   _unref(this);
   *(undefined8**)this = puVar3 + 2;
   return;
}
/* gdextension_packed_string_array_operator_index(void*, long) */CowData<char32_t> *gdextension_packed_string_array_operator_index(void *param_1, long param_2) {
   CowData *pCVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   undefined8 *puVar5;
   ulong uVar6;
   CowData<char32_t> *pCVar7;
   long lVar8;
   CowData<char32_t> *this;
   if (param_2 < 0) {
      return (CowData<char32_t>*)0x0;
   }

   lVar2 = *(long*)( (long)param_1 + 8 );
   if (lVar2 == 0) {
      return (CowData<char32_t>*)0x0;
   }

   if (*(long*)( lVar2 + -8 ) <= param_2) {
      return (CowData<char32_t>*)0x0;
   }

   if (1 < *(ulong*)( lVar2 + -0x10 )) {
      if (*(long*)( (long)param_1 + 8 ) == 0) {
         /* WARNING: Does not return */
         pcVar4 = (code*)invalidInstructionException();
         ( *pcVar4 )();
      }

      lVar2 = *(long*)( *(long*)( (long)param_1 + 8 ) + -8 );
      uVar6 = 0x10;
      if (lVar2 * 8 != 0) {
         uVar6 = lVar2 * 8 - 1;
         uVar6 = uVar6 | uVar6 >> 1;
         uVar6 = uVar6 | uVar6 >> 2;
         uVar6 = uVar6 | uVar6 >> 4;
         uVar6 = uVar6 | uVar6 >> 8;
         uVar6 = uVar6 | uVar6 >> 0x10;
         uVar6 = ( uVar6 | uVar6 >> 0x20 ) + 0x11;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar6, false);
      if (puVar5 != (undefined8*)0x0) {
         pCVar7 = (CowData<char32_t>*)( puVar5 + 2 );
         lVar8 = 0;
         *puVar5 = 1;
         puVar5[1] = lVar2;
         this =
         pCVar7;
         if (lVar2 != 0) {
            do {
               lVar3 = *(long*)( (long)param_1 + 8 );
               *(undefined8*)this = 0;
               pCVar1 = (CowData*)( lVar3 + lVar8 * 8 );
               if (*(long*)pCVar1 != 0) {
                  CowData<char32_t>::_ref(this, pCVar1);
               }

               lVar8 = lVar8 + 1;
               this =
               this + 8;
            }
 while ( lVar2 != lVar8 );
         }

         CowData<String>::_unref((CowData<String>*)( (long)param_1 + 8 ));
         *(CowData<char32_t>**)( (long)param_1 + 8 ) = pCVar7;
         goto LAB_0010716e;
      }

      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   }

   pCVar7 = *(CowData<char32_t>**)( (long)param_1 + 8 );
   LAB_0010716e:return pCVar7 + param_2 * 8;
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* VariantInternal::get_bool(Variant*) */Variant *VariantInternal::get_bool(Variant *param_1) {
   return param_1 + 8;
}
/* VariantInternal::get_int(Variant*) */Variant *VariantInternal::get_int(Variant *param_1) {
   return param_1 + 8;
}
/* VariantInternal::get_float(Variant*) */Variant *VariantInternal::get_float(Variant *param_1) {
   return param_1 + 8;
}
/* VariantInternal::get_string(Variant*) */Variant *VariantInternal::get_string(Variant *param_1) {
   return param_1 + 8;
}
/* VariantInternal::get_vector2(Variant*) */Variant *VariantInternal::get_vector2(Variant *param_1) {
   return param_1 + 8;
}
/* VariantInternal::get_vector2i(Variant*) */Variant *VariantInternal::get_vector2i(Variant *param_1) {
   return param_1 + 8;
}
/* VariantInternal::get_rect2(Variant*) */Variant *VariantInternal::get_rect2(Variant *param_1) {
   return param_1 + 8;
}
/* VariantInternal::get_rect2i(Variant*) */Variant *VariantInternal::get_rect2i(Variant *param_1) {
   return param_1 + 8;
}
/* VariantInternal::get_vector3(Variant*) */Variant *VariantInternal::get_vector3(Variant *param_1) {
   return param_1 + 8;
}
/* VariantInternal::get_vector3i(Variant*) */Variant *VariantInternal::get_vector3i(Variant *param_1) {
   return param_1 + 8;
}
/* VariantInternal::get_vector4(Variant*) */Variant *VariantInternal::get_vector4(Variant *param_1) {
   return param_1 + 8;
}
/* VariantInternal::get_vector4i(Variant*) */Variant *VariantInternal::get_vector4i(Variant *param_1) {
   return param_1 + 8;
}
/* VariantInternal::get_transform2d(Variant*) */undefined8 VariantInternal::get_transform2d(Variant *param_1) {
   return *(undefined8*)( param_1 + 8 );
}
/* VariantInternal::get_plane(Variant*) */Variant *VariantInternal::get_plane(Variant *param_1) {
   return param_1 + 8;
}
/* VariantInternal::get_quaternion(Variant*) */Variant *VariantInternal::get_quaternion(Variant *param_1) {
   return param_1 + 8;
}
/* VariantInternal::get_aabb(Variant*) */undefined8 VariantInternal::get_aabb(Variant *param_1) {
   return *(undefined8*)( param_1 + 8 );
}
/* VariantInternal::get_basis(Variant*) */undefined8 VariantInternal::get_basis(Variant *param_1) {
   return *(undefined8*)( param_1 + 8 );
}
/* VariantInternal::get_transform(Variant*) */undefined8 VariantInternal::get_transform(Variant *param_1) {
   return *(undefined8*)( param_1 + 8 );
}
/* VariantInternal::get_projection(Variant*) */undefined8 VariantInternal::get_projection(Variant *param_1) {
   return *(undefined8*)( param_1 + 8 );
}
/* VariantInternal::get_color(Variant*) */Variant *VariantInternal::get_color(Variant *param_1) {
   return param_1 + 8;
}
/* VariantInternal::get_string_name(Variant*) */Variant *VariantInternal::get_string_name(Variant *param_1) {
   return param_1 + 8;
}
/* VariantInternal::get_node_path(Variant*) */Variant *VariantInternal::get_node_path(Variant *param_1) {
   return param_1 + 8;
}
/* VariantInternal::get_rid(Variant*) */Variant *VariantInternal::get_rid(Variant *param_1) {
   return param_1 + 8;
}
/* VariantInternal::get_callable(Variant*) */Variant *VariantInternal::get_callable(Variant *param_1) {
   return param_1 + 8;
}
/* VariantInternal::get_signal(Variant*) */Variant *VariantInternal::get_signal(Variant *param_1) {
   return param_1 + 8;
}
/* VariantInternal::get_dictionary(Variant*) */Variant *VariantInternal::get_dictionary(Variant *param_1) {
   return param_1 + 8;
}
/* VariantInternal::get_array(Variant*) */Variant *VariantInternal::get_array(Variant *param_1) {
   return param_1 + 8;
}
/* VariantInternal::get_byte_array(Variant*) */long VariantInternal::get_byte_array(Variant *param_1) {
   return *(long*)( param_1 + 8 ) + 0x10;
}
/* VariantInternal::get_int32_array(Variant*) */long VariantInternal::get_int32_array(Variant *param_1) {
   return *(long*)( param_1 + 8 ) + 0x10;
}
/* VariantInternal::get_int64_array(Variant*) */long VariantInternal::get_int64_array(Variant *param_1) {
   return *(long*)( param_1 + 8 ) + 0x10;
}
/* VariantInternal::get_float32_array(Variant*) */long VariantInternal::get_float32_array(Variant *param_1) {
   return *(long*)( param_1 + 8 ) + 0x10;
}
/* VariantInternal::get_float64_array(Variant*) */long VariantInternal::get_float64_array(Variant *param_1) {
   return *(long*)( param_1 + 8 ) + 0x10;
}
/* VariantInternal::get_string_array(Variant*) */long VariantInternal::get_string_array(Variant *param_1) {
   return *(long*)( param_1 + 8 ) + 0x10;
}
/* VariantInternal::get_vector2_array(Variant*) */long VariantInternal::get_vector2_array(Variant *param_1) {
   return *(long*)( param_1 + 8 ) + 0x10;
}
/* VariantInternal::get_vector3_array(Variant*) */long VariantInternal::get_vector3_array(Variant *param_1) {
   return *(long*)( param_1 + 8 ) + 0x10;
}
/* VariantInternal::get_color_array(Variant*) */long VariantInternal::get_color_array(Variant *param_1) {
   return *(long*)( param_1 + 8 ) + 0x10;
}
/* VariantInternal::get_vector4_array(Variant*) */long VariantInternal::get_vector4_array(Variant *param_1) {
   return *(long*)( param_1 + 8 ) + 0x10;
}
/* VariantInternal::get_object(Variant*) */Variant *VariantInternal::get_object(Variant *param_1) {
   return param_1 + 0x10;
}
/* ScriptInstanceExtension::set(StringName const&, Variant const&) */bool ScriptInstanceExtension::set(StringName *param_1, Variant *param_2) {
   char cVar1;
   if ((code*)**(undefined8**)( param_1 + 8 ) != (code*)0x0) {
      cVar1 = ( *(code*)**(undefined8**)( param_1 + 8 ) )(*(undefined8*)( param_1 + 0x20 ));
      return cVar1 != '\0';
   }

   return false;
}
/* ScriptInstanceExtension::get(StringName const&, Variant&) const */bool ScriptInstanceExtension::get(StringName *param_1, Variant *param_2) {
   char cVar1;
   if (*(code**)( *(long*)( param_1 + 8 ) + 8 ) != (code*)0x0) {
      cVar1 = ( **(code**)( *(long*)( param_1 + 8 ) + 8 ) )(*(undefined8*)( param_1 + 0x20 ));
      return cVar1 != '\0';
   }

   return false;
}
/* ScriptInstanceExtension::get_property_type(StringName const&, bool*) const */undefined8 ScriptInstanceExtension::get_property_type(ScriptInstanceExtension *this, StringName *param_1, bool *param_2) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   char local_11;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = 0;
   if (*(code**)( *(long*)( this + 8 ) + 0x58 ) != (code*)0x0) {
      local_11 = '\0';
      uVar1 = ( **(code**)( *(long*)( this + 8 ) + 0x58 ) )(*(undefined8*)( this + 0x20 ), param_1, &local_11);
      if (param_2 != (bool*)0x0) {
         *param_2 = local_11 != '\0';
      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ScriptInstanceExtension::property_can_revert(StringName const&) const */bool ScriptInstanceExtension::property_can_revert(StringName *param_1) {
   char cVar1;
   if (*(code**)( *(long*)( param_1 + 8 ) + 0x28 ) != (code*)0x0) {
      cVar1 = ( **(code**)( *(long*)( param_1 + 8 ) + 0x28 ) )(*(undefined8*)( param_1 + 0x20 ));
      return cVar1 != '\0';
   }

   return false;
}
/* ScriptInstanceExtension::property_get_revert(StringName const&, Variant&) const */bool ScriptInstanceExtension::property_get_revert(StringName *param_1, Variant *param_2) {
   char cVar1;
   if (*(code**)( *(long*)( param_1 + 8 ) + 0x30 ) != (code*)0x0) {
      cVar1 = ( **(code**)( *(long*)( param_1 + 8 ) + 0x30 ) )(*(undefined8*)( param_1 + 0x20 ));
      return cVar1 != '\0';
   }

   return false;
}
/* ScriptInstanceExtension::get_owner() */undefined8 ScriptInstanceExtension::get_owner(ScriptInstanceExtension *this) {
   undefined8 uVar1;
   if (*(code**)( *(long*)( this + 8 ) + 0x38 ) != (code*)0x0) {
      /* WARNING: Could not recover jumptable at 0x00107645. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar1 = ( **(code**)( *(long*)( this + 8 ) + 0x38 ) )(*(undefined8*)( this + 0x20 ));
      return uVar1;
   }

   return 0;
}
/* ScriptInstanceExtension::get_property_state(List<Pair<StringName, Variant>, DefaultAllocator>&)
    */void ScriptInstanceExtension::get_property_state(ScriptInstanceExtension *this, List *param_1) {
   if (*(code**)( *(long*)( this + 8 ) + 0x40 ) != (code*)0x0) {
      /* WARNING: Could not recover jumptable at 0x0010767f. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( *(long*)( this + 8 ) + 0x40 ) )(*(undefined8*)( this + 0x20 ), _add_property_with_state, param_1);
      return;
   }

   return;
}
/* ScriptInstanceExtension::has_method(StringName const&) const */bool ScriptInstanceExtension::has_method(StringName *param_1) {
   char cVar1;
   if (*(code**)( *(long*)( param_1 + 8 ) + 0x68 ) != (code*)0x0) {
      cVar1 = ( **(code**)( *(long*)( param_1 + 8 ) + 0x68 ) )(*(undefined8*)( param_1 + 0x20 ));
      return cVar1 != '\0';
   }

   return false;
}
/* ScriptInstanceExtension::callp(StringName const&, Variant const**, int, Callable::CallError&) */StringName *ScriptInstanceExtension::callp(StringName *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   undefined4 in_register_00000014;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   undefined4 local_30;
   undefined8 local_2c;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   pVVar1 = param_2[1];
   *(undefined4*)param_1 = 0;
   if (*(code**)( pVVar1 + 0x78 ) != (code*)0x0) {
      ( **(code**)( pVVar1 + 0x78 ) )(param_2[4], CONCAT44(in_register_00000014, param_3), param_4, (long)in_R8D, param_1, &local_30);
      *in_R9 = local_30;
      *(undefined8*)( in_R9 + 1 ) = local_2c;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ScriptInstanceExtension::refcount_incremented() */void ScriptInstanceExtension::refcount_incremented(ScriptInstanceExtension *this) {
   if (*(code**)( *(long*)( this + 8 ) + 0x90 ) != (code*)0x0) {
      /* WARNING: Could not recover jumptable at 0x00107768. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( *(long*)( this + 8 ) + 0x90 ) )(*(undefined8*)( this + 0x20 ));
      return;
   }

   return;
}
/* ScriptInstanceExtension::refcount_decremented() */bool ScriptInstanceExtension::refcount_decremented(ScriptInstanceExtension *this) {
   char cVar1;
   if (*(code**)( *(long*)( this + 8 ) + 0x98 ) != (code*)0x0) {
      cVar1 = ( **(code**)( *(long*)( this + 8 ) + 0x98 ) )(*(undefined8*)( this + 0x20 ));
      return cVar1 != '\0';
   }

   return false;
}
/* ScriptInstanceExtension::is_placeholder() const */bool ScriptInstanceExtension::is_placeholder(ScriptInstanceExtension *this) {
   char cVar1;
   if (*(code**)( *(long*)( this + 8 ) + 0xa8 ) != (code*)0x0) {
      cVar1 = ( **(code**)( *(long*)( this + 8 ) + 0xa8 ) )(*(undefined8*)( this + 0x20 ));
      return cVar1 != '\0';
   }

   return false;
}
/* ScriptInstanceExtension::property_set_fallback(StringName const&, Variant const&, bool*) */void ScriptInstanceExtension::property_set_fallback(ScriptInstanceExtension *this, StringName *param_1, Variant *param_2, bool *param_3) {
   char cVar1;
   if (*(code**)( *(long*)( this + 8 ) + 0xb0 ) != (code*)0x0) {
      cVar1 = ( **(code**)( *(long*)( this + 8 ) + 0xb0 ) )(*(undefined8*)( this + 0x20 ));
      if (param_3 != (bool*)0x0) {
         *param_3 = cVar1 != '\0';
      }

      return;
   }

   return;
}
/* ScriptInstanceExtension::property_get_fallback(StringName const&, bool*) */StringName *ScriptInstanceExtension::property_get_fallback(StringName *param_1, bool *param_2) {
   long lVar1;
   char cVar2;
   long in_RCX;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   lVar1 = *(long*)( param_2 + 8 );
   *(undefined4*)param_1 = 0;
   if (*(code**)( lVar1 + 0xb8 ) != (code*)0x0) {
      cVar2 = ( **(code**)( lVar1 + 0xb8 ) )(*(undefined8*)( param_2 + 0x20 ));
      if (in_RCX != 0) {
         *(bool*)in_RCX = cVar2 != '\0';
      }

   }

   return param_1;
}
/* ScriptInstanceExtension::get_language() */undefined8 ScriptInstanceExtension::get_language(ScriptInstanceExtension *this) {
   undefined8 uVar1;
   if (*(code**)( *(long*)( this + 8 ) + 0xc0 ) != (code*)0x0) {
      /* WARNING: Could not recover jumptable at 0x001078b8. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar1 = ( **(code**)( *(long*)( this + 8 ) + 0xc0 ) )(*(undefined8*)( this + 0x20 ));
      return uVar1;
   }

   return 0;
}
/* CallableCustomExtension::default_compare_equal(CallableCustom const*, CallableCustom const*) */undefined8 CallableCustomExtension::default_compare_equal(CallableCustom *param_1, CallableCustom *param_2) {
   if (*(long*)( param_1 + 0x28 ) != *(long*)( param_2 + 0x28 )) {
      return 0;
   }

   return CONCAT71(( int7 )(( ulong ) * (long*)( param_2 + 0x10 ) >> 8), *(long*)( param_1 + 0x10 ) == *(long*)( param_2 + 0x10 ));
}
/* CallableCustomExtension::default_compare_less(CallableCustom const*, CallableCustom const*) */undefined8 CallableCustomExtension::default_compare_less(CallableCustom *param_1, CallableCustom *param_2) {
   ulong uVar1;
   bool bVar2;
   uVar1 = *(ulong*)( param_2 + 0x28 );
   bVar2 = *(ulong*)( param_1 + 0x28 ) < uVar1;
   if (*(ulong*)( param_1 + 0x28 ) == uVar1) {
      uVar1 = *(ulong*)( param_2 + 0x10 );
      bVar2 = *(ulong*)( param_1 + 0x10 ) < uVar1;
   }

   return CONCAT71(( int7 )(uVar1 >> 8), bVar2);
}
/* CallableCustomExtension::custom_compare_equal(CallableCustom const*, CallableCustom const*) */bool CallableCustomExtension::custom_compare_equal(CallableCustom *param_1, CallableCustom *param_2) {
   char cVar1;
   if (*(code**)( param_1 + 0x40 ) != *(code**)( param_2 + 0x40 )) {
      return false;
   }

   cVar1 = ( **(code**)( param_1 + 0x40 ) )(*(undefined8*)( param_1 + 0x10 ), *(undefined8*)( param_2 + 0x10 ));
   return cVar1 != '\0';
}
/* CallableCustomExtension::custom_compare_less(CallableCustom const*, CallableCustom const*) */bool CallableCustomExtension::custom_compare_less(CallableCustom *param_1, CallableCustom *param_2) {
   char cVar1;
   if (*(code**)( param_1 + 0x48 ) == *(code**)( param_2 + 0x48 )) {
      cVar1 = ( **(code**)( param_1 + 0x48 ) )(*(undefined8*)( param_1 + 0x10 ), *(undefined8*)( param_2 + 0x10 ));
      return cVar1 != '\0';
   }

   if (*(ulong*)( param_1 + 0x28 ) != *(ulong*)( param_2 + 0x28 )) {
      return *(ulong*)( param_1 + 0x28 ) < *(ulong*)( param_2 + 0x28 );
   }

   return *(ulong*)( param_1 + 0x10 ) < *(ulong*)( param_2 + 0x10 );
}
/* CallableCustomExtension::hash() const */undefined4 CallableCustomExtension::hash(CallableCustomExtension *this) {
   return *(undefined4*)( this + 0x60 );
}
/* CallableCustomExtension::get_compare_equal_func() const */code * __thiscall CallableCustomExtension::get_compare_equal_func(CallableCustomExtension *this){
   code *pcVar1;
   pcVar1 = default_compare_equal;
   if (*(long*)( this + 0x40 ) != 0) {
      pcVar1 = custom_compare_equal;
   }

   return pcVar1;
}
/* CallableCustomExtension::get_compare_less_func() const */code * __thiscall CallableCustomExtension::get_compare_less_func(CallableCustomExtension *this){
   code *pcVar1;
   pcVar1 = default_compare_less;
   if (*(long*)( this + 0x48 ) != 0) {
      pcVar1 = custom_compare_less;
   }

   return pcVar1;
}
/* CallableCustomExtension::is_valid() const */bool CallableCustomExtension::is_valid(CallableCustomExtension *this) {
   char cVar1;
   if (( *(code**)( this + 0x30 ) != (code*)0x0 ) && ( cVar1 = ( **(code**)( this + 0x30 ) )(*(undefined8*)( this + 0x10 )) ),cVar1 == '\0') {
      return false;
   }

   return *(long*)( this + 0x28 ) != 0;
}
/* CallableCustomExtension::get_method() const */CallableCustomExtension * __thiscall
CallableCustomExtension::get_method(CallableCustomExtension *this){
   *(undefined8*)this = 0;
   return this;
}
/* CallableCustomExtension::get_object() const */undefined8 CallableCustomExtension::get_object(CallableCustomExtension *this) {
   return *(undefined8*)( this + 0x20 );
}
/* CallableCustomExtension::get_argument_count(bool&) const */undefined8 CallableCustomExtension::get_argument_count(CallableCustomExtension *this, bool *param_1) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   char local_11;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( this + 0x58 ) != (code*)0x0) {
      local_11 = '\0';
      uVar1 = ( **(code**)( this + 0x58 ) )(*(undefined8*)( this + 0x10 ), &local_11);
      if (local_11 != '\0') {
         *param_1 = true;
         goto LAB_00107a7f;
      }

   }

   *param_1 = false;
   uVar1 = 0;
   LAB_00107a7f:if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CallableCustomExtension::call(Variant const**, int, Variant&, Callable::CallError&) const */void CallableCustomExtension::call(CallableCustomExtension *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long in_FS_OFFSET;
   undefined4 local_20;
   undefined8 local_1c;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( this + 0x28 ) )(*(undefined8*)( this + 0x10 ), param_1, (long)param_2, param_3, &local_20);
   *(undefined4*)param_4 = local_20;
   *(undefined8*)( param_4 + 4 ) = local_1c;
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CallableCustomExtension::~CallableCustomExtension() */void CallableCustomExtension::~CallableCustomExtension(CallableCustomExtension *this) {
   *(undefined***)this = &PTR_hash_0010d448;
   if (*(code**)( this + 0x38 ) != (code*)0x0) {
      /* WARNING: Could not recover jumptable at 0x00107b2b. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( this + 0x38 ) )(*(undefined8*)( this + 0x10 ));
      return;
   }

   return;
}
/* VariantTypeConstructor<bool>::variant_from_type(void*, void*) */void VariantTypeConstructor<bool>::variant_from_type(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   ::Variant::Variant((Variant*)param_1, *param_2);
   return;
}
/* VariantTypeConstructor<long>::variant_from_type(void*, void*) */void VariantTypeConstructor<long>::variant_from_type(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   ::Variant::Variant((Variant*)param_1, *param_2);
   return;
}
/* VariantTypeConstructor<double>::variant_from_type(void*, void*) */void VariantTypeConstructor<double>::variant_from_type(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   ::Variant::Variant((Variant*)param_1, *param_2);
   return;
}
/* VariantTypeConstructor<String>::variant_from_type(void*, void*) */void VariantTypeConstructor<String>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (String_conflict*)param_2);
   return;
}
/* VariantTypeConstructor<Vector2>::variant_from_type(void*, void*) */void VariantTypeConstructor<Vector2>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (Vector2*)param_2);
   return;
}
/* VariantTypeConstructor<Vector2i>::variant_from_type(void*, void*) */void VariantTypeConstructor<Vector2i>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (Vector2i*)param_2);
   return;
}
/* VariantTypeConstructor<Rect2>::variant_from_type(void*, void*) */void VariantTypeConstructor<Rect2>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (Rect2*)param_2);
   return;
}
/* VariantTypeConstructor<Rect2i>::variant_from_type(void*, void*) */void VariantTypeConstructor<Rect2i>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (Rect2i*)param_2);
   return;
}
/* VariantTypeConstructor<Vector3>::variant_from_type(void*, void*) */void VariantTypeConstructor<Vector3>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (Vector3*)param_2);
   return;
}
/* VariantTypeConstructor<Vector3i>::variant_from_type(void*, void*) */void VariantTypeConstructor<Vector3i>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (Vector3i*)param_2);
   return;
}
/* VariantTypeConstructor<Transform2D>::variant_from_type(void*, void*) */void VariantTypeConstructor<Transform2D>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (Transform2D*)param_2);
   return;
}
/* VariantTypeConstructor<Vector4>::variant_from_type(void*, void*) */void VariantTypeConstructor<Vector4>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (Vector4*)param_2);
   return;
}
/* VariantTypeConstructor<Vector4i>::variant_from_type(void*, void*) */void VariantTypeConstructor<Vector4i>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (Vector4i*)param_2);
   return;
}
/* VariantTypeConstructor<Plane>::variant_from_type(void*, void*) */void VariantTypeConstructor<Plane>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (Plane*)param_2);
   return;
}
/* VariantTypeConstructor<Quaternion>::variant_from_type(void*, void*) */void VariantTypeConstructor<Quaternion>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (Quaternion*)param_2);
   return;
}
/* VariantTypeConstructor<AABB>::variant_from_type(void*, void*) */void VariantTypeConstructor<AABB>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (AABB*)param_2);
   return;
}
/* VariantTypeConstructor<Basis>::variant_from_type(void*, void*) */void VariantTypeConstructor<Basis>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (Basis*)param_2);
   return;
}
/* VariantTypeConstructor<Transform3D>::variant_from_type(void*, void*) */void VariantTypeConstructor<Transform3D>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (Transform3D*)param_2);
   return;
}
/* VariantTypeConstructor<Projection>::variant_from_type(void*, void*) */void VariantTypeConstructor<Projection>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (Projection*)param_2);
   return;
}
/* VariantTypeConstructor<Color>::variant_from_type(void*, void*) */void VariantTypeConstructor<Color>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (Color*)param_2);
   return;
}
/* VariantTypeConstructor<StringName>::variant_from_type(void*, void*) */void VariantTypeConstructor<StringName>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (StringName*)param_2);
   return;
}
/* VariantTypeConstructor<NodePath>::variant_from_type(void*, void*) */void VariantTypeConstructor<NodePath>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (NodePath*)param_2);
   return;
}
/* VariantTypeConstructor<RID>::variant_from_type(void*, void*) */void VariantTypeConstructor<RID>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (RID*)param_2);
   return;
}
/* VariantTypeConstructor<Object*>::variant_from_type(void*, void*) */void VariantTypeConstructor<Object*>::variant_from_type(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   ::Variant::Variant((Variant*)param_1, *param_2);
   return;
}
/* VariantTypeConstructor<Callable>::variant_from_type(void*, void*) */void VariantTypeConstructor<Callable>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (Callable*)param_2);
   return;
}
/* VariantTypeConstructor<Signal>::variant_from_type(void*, void*) */void VariantTypeConstructor<Signal>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (Signal*)param_2);
   return;
}
/* VariantTypeConstructor<Dictionary>::variant_from_type(void*, void*) */void VariantTypeConstructor<Dictionary>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (Dictionary*)param_2);
   return;
}
/* VariantTypeConstructor<Array>::variant_from_type(void*, void*) */void VariantTypeConstructor<Array>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (Array*)param_2);
   return;
}
/* VariantTypeConstructor<Vector<unsigned char> >::variant_from_type(void*, void*) */void VariantTypeConstructor<Vector<unsigned_char>>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (Vector*)param_2);
   return;
}
/* VariantTypeConstructor<Vector<int> >::variant_from_type(void*, void*) */void VariantTypeConstructor<Vector<int>>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (Vector*)param_2);
   return;
}
/* VariantTypeConstructor<Vector<long> >::variant_from_type(void*, void*) */void VariantTypeConstructor<Vector<long>>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (Vector*)param_2);
   return;
}
/* VariantTypeConstructor<Vector<float> >::variant_from_type(void*, void*) */void VariantTypeConstructor<Vector<float>>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (Vector*)param_2);
   return;
}
/* VariantTypeConstructor<Vector<double> >::variant_from_type(void*, void*) */void VariantTypeConstructor<Vector<double>>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (Vector*)param_2);
   return;
}
/* VariantTypeConstructor<Vector<String> >::variant_from_type(void*, void*) */void VariantTypeConstructor<Vector<String>>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (Vector*)param_2);
   return;
}
/* VariantTypeConstructor<Vector<Vector2> >::variant_from_type(void*, void*) */void VariantTypeConstructor<Vector<Vector2>>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (Vector*)param_2);
   return;
}
/* VariantTypeConstructor<Vector<Vector3> >::variant_from_type(void*, void*) */void VariantTypeConstructor<Vector<Vector3>>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (Vector*)param_2);
   return;
}
/* VariantTypeConstructor<Vector<Vector4> >::variant_from_type(void*, void*) */void VariantTypeConstructor<Vector<Vector4>>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (Vector*)param_2);
   return;
}
/* VariantTypeConstructor<Vector<Color> >::variant_from_type(void*, void*) */void VariantTypeConstructor<Vector<Color>>::variant_from_type(void *param_1, void *param_2) {
   ::Variant::Variant((Variant*)param_1, (Vector*)param_2);
   return;
}
/* VariantTypeConstructor<bool>::type_from_variant(void*, void*) */void VariantTypeConstructor<bool>::type_from_variant(void *param_1, void *param_2) {
   bool bVar1;
   bVar1 = ::Variant::operator_cast_to_bool((Variant*)param_2);
   *(bool*)param_1 = bVar1;
   return;
}
/* VariantTypeConstructor<long>::type_from_variant(void*, void*) */void VariantTypeConstructor<long>::type_from_variant(void *param_1, void *param_2) {
   long lVar1;
   lVar1 = ::Variant::operator_cast_to_long((Variant*)param_2);
   *(long*)param_1 = lVar1;
   return;
}
/* VariantTypeConstructor<double>::type_from_variant(void*, void*) */void VariantTypeConstructor<double>::type_from_variant(void *param_1, void *param_2) {
   double dVar1;
   dVar1 = ::Variant::operator_cast_to_double((Variant*)param_2);
   *(double*)param_1 = dVar1;
   return;
}
/* VariantTypeConstructor<String>::type_from_variant(void*, void*) */void VariantTypeConstructor<String>::type_from_variant(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ::Variant::operator_cast_to_String((Variant*)param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantTypeConstructor<Vector2>::type_from_variant(void*, void*) */void VariantTypeConstructor<Vector2>::type_from_variant(void *param_1, void *param_2) {
   undefined8 uVar1;
   uVar1 = ::Variant::operator_cast_to_Vector2((Variant*)param_2);
   *(undefined8*)param_1 = uVar1;
   return;
}
/* VariantTypeConstructor<Vector2i>::type_from_variant(void*, void*) */void VariantTypeConstructor<Vector2i>::type_from_variant(void *param_1, void *param_2) {
   undefined8 uVar1;
   uVar1 = ::Variant::operator_cast_to_Vector2i((Variant*)param_2);
   *(undefined8*)param_1 = uVar1;
   return;
}
/* VariantTypeConstructor<Rect2>::type_from_variant(void*, void*) */void VariantTypeConstructor<Rect2>::type_from_variant(void *param_1, void *param_2) {
   undefined8 uVar1;
   undefined8 in_XMM1_Qa;
   uVar1 = ::Variant::operator_cast_to_Rect2((Variant*)param_2);
   *(undefined8*)param_1 = uVar1;
   *(undefined8*)( (long)param_1 + 8 ) = in_XMM1_Qa;
   return;
}
/* VariantTypeConstructor<Rect2i>::type_from_variant(void*, void*) */void VariantTypeConstructor<Rect2i>::type_from_variant(void *param_1, void *param_2) {
   undefined1 auVar1[16];
   auVar1 = ::Variant::operator_cast_to_Rect2i((Variant*)param_2);
   *(undefined1(*) [16])param_1 = auVar1;
   return;
}
/* VariantTypeConstructor<Vector3>::type_from_variant(void*, void*) */void VariantTypeConstructor<Vector3>::type_from_variant(void *param_1, void *param_2) {
   undefined1 auVar1[12];
   auVar1 = ::Variant::operator_cast_to_Vector3((Variant*)param_2);
   *(undefined1(*) [12])param_1 = auVar1;
   return;
}
/* VariantTypeConstructor<Vector3i>::type_from_variant(void*, void*) */void VariantTypeConstructor<Vector3i>::type_from_variant(void *param_1, void *param_2) {
   undefined1 auVar1[12];
   auVar1 = ::Variant::operator_cast_to_Vector3i((Variant*)param_2);
   *(undefined1(*) [12])param_1 = auVar1;
   return;
}
/* VariantTypeConstructor<Transform2D>::type_from_variant(void*, void*) */void VariantTypeConstructor<Transform2D>::type_from_variant(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ::Variant::operator_cast_to_Transform2D((Variant*)param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantTypeConstructor<Vector4>::type_from_variant(void*, void*) */void VariantTypeConstructor<Vector4>::type_from_variant(void *param_1, void *param_2) {
   undefined8 uVar1;
   undefined8 in_XMM1_Qa;
   uVar1 = ::Variant::operator_cast_to_Vector4((Variant*)param_2);
   *(undefined8*)param_1 = uVar1;
   *(undefined8*)( (long)param_1 + 8 ) = in_XMM1_Qa;
   return;
}
/* VariantTypeConstructor<Vector4i>::type_from_variant(void*, void*) */void VariantTypeConstructor<Vector4i>::type_from_variant(void *param_1, void *param_2) {
   undefined1 auVar1[16];
   auVar1 = ::Variant::operator_cast_to_Vector4i((Variant*)param_2);
   *(undefined1(*) [16])param_1 = auVar1;
   return;
}
/* VariantTypeConstructor<Plane>::type_from_variant(void*, void*) */void VariantTypeConstructor<Plane>::type_from_variant(void *param_1, void *param_2) {
   undefined8 uVar1;
   undefined8 in_XMM1_Qa;
   uVar1 = ::Variant::operator_cast_to_Plane((Variant*)param_2);
   *(undefined8*)param_1 = uVar1;
   *(undefined8*)( (long)param_1 + 8 ) = in_XMM1_Qa;
   return;
}
/* VariantTypeConstructor<Quaternion>::type_from_variant(void*, void*) */void VariantTypeConstructor<Quaternion>::type_from_variant(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ::Variant::operator_cast_to_Quaternion((Variant*)param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantTypeConstructor<AABB>::type_from_variant(void*, void*) */void VariantTypeConstructor<AABB>::type_from_variant(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ::Variant::operator_cast_to_AABB((Variant*)param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantTypeConstructor<Basis>::type_from_variant(void*, void*) */void VariantTypeConstructor<Basis>::type_from_variant(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ::Variant::operator_cast_to_Basis((Variant*)param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantTypeConstructor<Transform3D>::type_from_variant(void*, void*) */void VariantTypeConstructor<Transform3D>::type_from_variant(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ::Variant::operator_cast_to_Transform3D((Variant*)param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantTypeConstructor<Projection>::type_from_variant(void*, void*) */void VariantTypeConstructor<Projection>::type_from_variant(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ::Variant::operator_cast_to_Projection((Variant*)param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantTypeConstructor<Color>::type_from_variant(void*, void*) */void VariantTypeConstructor<Color>::type_from_variant(void *param_1, void *param_2) {
   undefined8 uVar1;
   undefined8 in_XMM1_Qa;
   uVar1 = ::Variant::operator_cast_to_Color((Variant*)param_2);
   *(undefined8*)param_1 = uVar1;
   *(undefined8*)( (long)param_1 + 8 ) = in_XMM1_Qa;
   return;
}
/* VariantTypeConstructor<StringName>::type_from_variant(void*, void*) */void VariantTypeConstructor<StringName>::type_from_variant(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ::Variant::operator_cast_to_StringName((Variant*)param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantTypeConstructor<NodePath>::type_from_variant(void*, void*) */void VariantTypeConstructor<NodePath>::type_from_variant(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ::Variant::operator_cast_to_NodePath((Variant*)param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantTypeConstructor<RID>::type_from_variant(void*, void*) */void VariantTypeConstructor<RID>::type_from_variant(void *param_1, void *param_2) {
   undefined8 uVar1;
   uVar1 = ::Variant::operator_cast_to_RID((Variant*)param_2);
   *(undefined8*)param_1 = uVar1;
   return;
}
/* VariantTypeConstructor<Object*>::type_from_variant(void*, void*) */void VariantTypeConstructor<Object*>::type_from_variant(void *param_1, void *param_2) {
   Object *pOVar1;
   pOVar1 = ::Variant::operator_cast_to_Object_((Variant*)param_2);
   *(Object**)param_1 = pOVar1;
   return;
}
/* VariantTypeConstructor<Callable>::type_from_variant(void*, void*) */void VariantTypeConstructor<Callable>::type_from_variant(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ::Variant::operator_cast_to_Callable((Variant*)param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantTypeConstructor<Signal>::type_from_variant(void*, void*) */void VariantTypeConstructor<Signal>::type_from_variant(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ::Variant::operator_cast_to_Signal((Variant*)param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantTypeConstructor<Dictionary>::type_from_variant(void*, void*) */void VariantTypeConstructor<Dictionary>::type_from_variant(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ::Variant::operator_cast_to_Dictionary((Variant*)param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantTypeConstructor<Array>::type_from_variant(void*, void*) */void VariantTypeConstructor<Array>::type_from_variant(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ::Variant::operator_cast_to_Array((Variant*)param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantTypeConstructor<Vector<unsigned char> >::type_from_variant(void*, void*) */void VariantTypeConstructor<Vector<unsigned_char>>::type_from_variant(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ::Variant::operator_cast_to_Vector((Variant*)param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantTypeConstructor<Vector<int> >::type_from_variant(void*, void*) */void VariantTypeConstructor<Vector<int>>::type_from_variant(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ::Variant::operator_cast_to_Vector((Variant*)param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantTypeConstructor<Vector<long> >::type_from_variant(void*, void*) */void VariantTypeConstructor<Vector<long>>::type_from_variant(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ::Variant::operator_cast_to_Vector((Variant*)param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantTypeConstructor<Vector<float> >::type_from_variant(void*, void*) */void VariantTypeConstructor<Vector<float>>::type_from_variant(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ::Variant::operator_cast_to_Vector((Variant*)param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantTypeConstructor<Vector<double> >::type_from_variant(void*, void*) */void VariantTypeConstructor<Vector<double>>::type_from_variant(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ::Variant::operator_cast_to_Vector((Variant*)param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantTypeConstructor<Vector<String> >::type_from_variant(void*, void*) */void VariantTypeConstructor<Vector<String>>::type_from_variant(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ::Variant::operator_cast_to_Vector((Variant*)param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantTypeConstructor<Vector<Vector2> >::type_from_variant(void*, void*) */void VariantTypeConstructor<Vector<Vector2>>::type_from_variant(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ::Variant::operator_cast_to_Vector((Variant*)param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantTypeConstructor<Vector<Vector3> >::type_from_variant(void*, void*) */void VariantTypeConstructor<Vector<Vector3>>::type_from_variant(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ::Variant::operator_cast_to_Vector((Variant*)param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantTypeConstructor<Vector<Vector4> >::type_from_variant(void*, void*) */void VariantTypeConstructor<Vector<Vector4>>::type_from_variant(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ::Variant::operator_cast_to_Vector((Variant*)param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantTypeConstructor<Vector<Color> >::type_from_variant(void*, void*) */void VariantTypeConstructor<Vector<Color>>::type_from_variant(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ::Variant::operator_cast_to_Vector((Variant*)param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CallableCustomExtension::~CallableCustomExtension() */void CallableCustomExtension::~CallableCustomExtension(CallableCustomExtension *this) {
   *(undefined***)this = &PTR_hash_0010d448;
   if (*(code**)( this + 0x38 ) != (code*)0x0) {
      ( **(code**)( this + 0x38 ) )(*(undefined8*)( this + 0x10 ));
   }

   operator_delete(this, 0x68);
   return;
}
/* ScriptInstanceExtension::~ScriptInstanceExtension() */void ScriptInstanceExtension::~ScriptInstanceExtension(ScriptInstanceExtension *this) {
   *(undefined***)this = &PTR_set_0010d368;
   if (*(code**)( *(long*)( this + 8 ) + 200 ) != (code*)0x0) {
      ( **(code**)( *(long*)( this + 8 ) + 200 ) )(*(undefined8*)( this + 0x20 ));
   }

   if (this[0x10] != (ScriptInstanceExtension)0x0) {
      Memory::free_static(*(void**)( this + 8 ), false);
   }

   if (*(void**)( this + 0x18 ) != (void*)0x0) {
      Memory::free_static(*(void**)( this + 0x18 ), false);
   }

   ScriptInstance::~ScriptInstance((ScriptInstance*)this);
   return;
}
/* ScriptInstanceExtension::get_method_argument_count(StringName const&, bool*) const */void ScriptInstanceExtension::get_method_argument_count(ScriptInstanceExtension *this, StringName *param_1, bool *param_2) {
   long in_FS_OFFSET;
   char local_11;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( *(long*)( this + 8 ) + 0x70 ) == (code*)0x0) {
      if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
         ScriptInstance::get_method_argument_count((StringName*)this, (bool*)param_1);
         return;
      }

   }
 else {
      local_11 = '\0';
      ( **(code**)( *(long*)( this + 8 ) + 0x70 ) )(*(undefined8*)( this + 0x20 ), param_1, &local_11);
      if (param_2 != (bool*)0x0) {
         *param_2 = local_11 != '\0';
      }

      if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ScriptInstanceExtension::notification(int, bool) */void ScriptInstanceExtension::notification(ScriptInstanceExtension *this, int param_1, bool param_2) {
   code *UNRECOVERED_JUMPTABLE;
   if (*(code**)( *(long*)( this + 8 ) + 0x80 ) != (code*)0x0) {
      /* WARNING: Could not recover jumptable at 0x00109d0b. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( *(long*)( this + 8 ) + 0x80 ) )(*(undefined8*)( this + 0x20 ), param_1, param_2);
      return;
   }

   if (( *(undefined8**)( this + 0x18 ) != (undefined8*)0x0 ) && ( UNRECOVERED_JUMPTABLE = (code*)**(undefined8**)( this + 0x18 ) ),UNRECOVERED_JUMPTABLE != (code*)0x0) {
      /* WARNING: Could not recover jumptable at 0x00109d25. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( this + 0x20 ));
      return;
   }

   return;
}
/* gdextension_packed_vector4_array_operator_index(void*, long) [clone .cold] */void gdextension_packed_vector4_array_operator_index(void *param_1, long param_2) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* gdextension_packed_int64_array_operator_index(void*, long) [clone .cold] */void gdextension_packed_int64_array_operator_index(void *param_1, long param_2) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* gdextension_packed_int32_array_operator_index(void*, long) [clone .cold] */void gdextension_packed_int32_array_operator_index(void *param_1, long param_2) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* gdextension_packed_float64_array_operator_index(void*, long) [clone .cold] */void gdextension_packed_float64_array_operator_index(void *param_1, long param_2) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* gdextension_packed_float32_array_operator_index(void*, long) [clone .cold] */void gdextension_packed_float32_array_operator_index(void *param_1, long param_2) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* gdextension_packed_color_array_operator_index(void*, long) [clone .cold] */void gdextension_packed_color_array_operator_index(void *param_1, long param_2) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* gdextension_packed_byte_array_operator_index(void*, long) [clone .cold] */void gdextension_packed_byte_array_operator_index(void *param_1, long param_2) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* gdextension_packed_vector2_array_operator_index(void*, long) [clone .cold] */void gdextension_packed_vector2_array_operator_index(void *param_1, long param_2) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* gdextension_packed_vector3_array_operator_index(void*, long) [clone .cold] */void gdextension_packed_vector3_array_operator_index(void *param_1, long param_2) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<char32_t>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<char32_t>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Variant>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Variant>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* gdextension_packed_string_array_operator_index(void*, long) [clone .cold] */void gdextension_packed_string_array_operator_index(void *param_1, long param_2) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* ScriptInstanceExtension::_add_property_with_state(void const*, void const*, void*) */void ScriptInstanceExtension::_add_property_with_state(void *param_1, void *param_2, void *param_3) {
   undefined8 uVar1;
   long *plVar2;
   StringName *this;
   undefined1(*pauVar3)[16];
   long in_FS_OFFSET;
   long local_60;
   long local_58;
   int local_50[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_60, (StringName*)param_1);
   StringName::StringName((StringName*)&local_58, (StringName*)&local_60);
   ::Variant::Variant((Variant*)local_50, (Variant*)param_2);
   /* WARNING: Load size is inaccurate */
   if (*param_3 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_3 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   this(StringName * operator_new(0x38, DefaultAllocator::alloc));
   *(undefined8*)this = 0;
   *(undefined4*)( this + 8 ) = 0;
   *(undefined8*)( this + 0x30 ) = 0;
   *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x20 ) = (undefined1[16])0x0;
   StringName::operator =(this, (StringName*)&local_58);
   ::Variant::operator =((Variant*)( this + 8 ), (Variant*)local_50);
   /* WARNING: Load size is inaccurate */
   uVar1 = *(undefined8*)( *param_3 + 8 );
   *(long*)( this + 0x30 ) = *param_3;
   /* WARNING: Load size is inaccurate */
   plVar2 = *param_3;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined8*)( this + 0x28 ) = uVar1;
   if (plVar2[1] != 0) {
      *(StringName**)( plVar2[1] + 0x20 ) = this;
   }

   plVar2[1] = (long)this;
   if (*plVar2 == 0) {
      *plVar2 = (long)this;
   }

   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
   if (::Variant::needs_deinit[local_50[0]] != '\0') {
      ::Variant::_clear_internal();
   }

   if (StringName::configured != '\0') {
      if (local_58 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00109ede;
      }

      if (local_60 != 0) {
         StringName::unref();
      }

   }

   LAB_00109ede:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ScriptInstanceExtension::to_string(bool*) */bool *ScriptInstanceExtension::to_string(bool *param_1) {
   code *pcVar1;
   long in_RDX;
   long in_RSI;
   long in_FS_OFFSET;
   char local_29;
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar1 = *(code**)( *(long*)( in_RSI + 8 ) + 0x88 );
   if (pcVar1 == (code*)0x0) {
      for (int i = 0; i < 8; i++) {
         param_1[i] = false;
      }

   }
 else {
      local_28 = 0;
      ( *pcVar1 )(*(undefined8*)( in_RSI + 0x20 ), &local_29, &local_28);
      if (in_RDX != 0) {
         *(bool*)in_RDX = local_29 != '\0';
      }

      *(undefined8*)param_1 = local_28;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ScriptInstanceExtension::~ScriptInstanceExtension() */void ScriptInstanceExtension::~ScriptInstanceExtension(ScriptInstanceExtension *this) {
   *(undefined***)this = &PTR_set_0010d368;
   if (*(code**)( *(long*)( this + 8 ) + 200 ) != (code*)0x0) {
      ( **(code**)( *(long*)( this + 8 ) + 200 ) )(*(undefined8*)( this + 0x20 ));
   }

   if (this[0x10] != (ScriptInstanceExtension)0x0) {
      Memory::free_static(*(void**)( this + 8 ), false);
   }

   if (*(void**)( this + 0x18 ) != (void*)0x0) {
      Memory::free_static(*(void**)( this + 0x18 ), false);
   }

   ScriptInstance::~ScriptInstance((ScriptInstance*)this);
   operator_delete(this, 0x28);
   return;
}
/* ScriptInstanceExtension::get_script() const */void ScriptInstanceExtension::get_script(void) {
   code *pcVar1;
   char cVar2;
   long lVar3;
   long in_RSI;
   long *in_RDI;
   pcVar1 = *(code**)( *(long*)( in_RSI + 8 ) + 0xa0 );
   if (( pcVar1 != (code*)0x0 ) && ( lVar3 = lVar3 != 0 )) {
      *in_RDI = lVar3;
      cVar2 = RefCounted::init_ref();
      if (cVar2 != '\0') {
         return;
      }

   }

   *in_RDI = 0;
   return;
}
/* CallableCustomExtension::get_as_text() const */void CallableCustomExtension::get_as_text(void) {
   long *plVar1;
   char *pcVar2;
   long in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   char local_39;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( in_RSI + 0x50 ) != (code*)0x0) {
      local_38 = (char*)0x0;
      local_39 = '\0';
      ( **(code**)( in_RSI + 0x50 ) )(*(undefined8*)( in_RSI + 0x10 ), &local_39, &local_38);
      pcVar2 = local_38;
      if (local_39 != '\0') {
         *(char**)in_RDI = local_38;
         goto LAB_0010a12d;
      }

      if (local_38 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_38 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_38 = (char*)0x0;
            Memory::free_static(pcVar2 + -0x10, false);
         }

      }

   }

   *(undefined8*)in_RDI = 0;
   local_38 = "<CallableCustom>";
   local_30 = 0x10;
   String::parse_latin1(in_RDI);
   LAB_0010a12d:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ScriptInstanceExtension::get_property_list(List<PropertyInfo, DefaultAllocator>*) const */void ScriptInstanceExtension::get_property_list(ScriptInstanceExtension *this, List *param_1) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   char *__s;
   long lVar4;
   char cVar5;
   undefined4 *puVar6;
   undefined4 *puVar7;
   undefined1(*pauVar8)[16];
   undefined4 *puVar9;
   Object *pOVar10;
   uint uVar11;
   long in_FS_OFFSET;
   uint local_bc;
   char *local_b8;
   size_t local_b0;
   Object *local_a8;
   long *local_a0;
   StringName *local_98;
   undefined4 local_90;
   CowData *local_88;
   undefined4 local_80;
   undefined4 local_78[2];
   long local_70;
   long local_68;
   undefined4 local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( *(long*)( this + 8 ) + 0x10 ) == (code*)0x0) goto LAB_0010a1ef;
   puVar6 = (undefined4*)( **(code**)( *(long*)( this + 8 ) + 0x10 ) )(*(undefined8*)( this + 0x20 ), &local_bc);
   if (local_bc == 0) {
      LAB_0010a1d1:local_bc = 0;
   }
 else {
      pcVar3 = *(code**)( *(long*)( this + 8 ) + 0x20 );
      if (pcVar3 == (code*)0x0) {
         if (*(code**)( *(long*)this + 0x90 ) != get_script) {
            ( **(code**)( *(long*)this + 0x90 ) )(&local_a8, this);
            LAB_0010a74e:if (local_a8 != (Object*)0x0) {
               ( **(code**)( *(long*)local_a8 + 0x248 ) )(local_78);
               if (*(long*)param_1 == 0) {
                  pauVar8 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *(undefined1(**) [16])param_1 = pauVar8;
                  *(undefined4*)pauVar8[1] = 0;
                  *pauVar8 = (undefined1[16])0x0;
               }

               puVar9 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
               *(undefined8*)( puVar9 + 8 ) = 0;
               *(undefined1(*) [16])( puVar9 + 2 ) = (undefined1[16])0x0;
               *puVar9 = 0;
               puVar9[6] = 0;
               puVar9[10] = 6;
               *(undefined8*)( puVar9 + 0x10 ) = 0;
               *(undefined1(*) [16])( puVar9 + 0xc ) = (undefined1[16])0x0;
               *puVar9 = local_78[0];
               if (local_70 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( puVar9 + 2 ), (CowData*)&local_70);
               }

               StringName::operator =((StringName*)( puVar9 + 4 ), (StringName*)&local_68);
               puVar9[6] = local_60;
               if (*(long*)( puVar9 + 8 ) != local_58) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( puVar9 + 8 ), (CowData*)&local_58);
               }

               lVar4 = local_58;
               puVar9[10] = local_50;
               plVar1 = *(long**)param_1;
               lVar2 = plVar1[1];
               *(undefined8*)( puVar9 + 0xc ) = 0;
               *(long**)( puVar9 + 0x10 ) = plVar1;
               *(long*)( puVar9 + 0xe ) = lVar2;
               if (lVar2 != 0) {
                  *(undefined4**)( lVar2 + 0x30 ) = puVar9;
               }

               plVar1[1] = (long)puVar9;
               if (*plVar1 == 0) {
                  *plVar1 = (long)puVar9;
               }

               *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
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

               if (local_a8 != (Object*)0x0) {
                  cVar5 = RefCounted::unreference();
                  pOVar10 = local_a8;
                  if (cVar5 != '\0') {
                     cVar5 = predelete_handler(local_a8);
                     if (cVar5 != '\0') {
                        ( **(code**)( *(long*)pOVar10 + 0x140 ) )(pOVar10);
                        Memory::free_static(pOVar10, false);
                     }

                  }

               }

            }

            goto LAB_0010a244;
         }

         pcVar3 = *(code**)( *(long*)( this + 8 ) + 0xa0 );
         if (pcVar3 != (code*)0x0) {
            pOVar10 = (Object*)( *pcVar3 )(*(undefined8*)( this + 0x20 ));
            if (pOVar10 != (Object*)0x0) {
               local_a8 = pOVar10;
               cVar5 = RefCounted::init_ref();
               if (cVar5 != '\0') goto LAB_0010a74e;
            }

            goto LAB_0010a244;
         }

      }
 else {
         cVar5 = ( *pcVar3 )(*(undefined8*)( this + 0x20 ), &local_a8);
         if (cVar5 != '\0') {
            local_78[0] = local_a8._0_4_;
            lVar2 = *local_a0;
            if (lVar2 == 0) {
               local_70 = 0;
            }
 else {
               __s = *(char**)( lVar2 + 8 );
               local_70 = 0;
               if (__s == (char*)0x0) {
                  if (*(long*)( lVar2 + 0x10 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)( lVar2 + 0x10 ));
                  }

               }
 else {
                  local_b0 = strlen(__s);
                  local_b8 = __s;
                  String::parse_latin1((StrRange*)&local_70);
               }

            }

            StringName::StringName((StringName*)&local_68, local_98);
            local_58 = 0;
            local_60 = local_90;
            if (*(long*)local_88 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, local_88);
            }

            local_50 = local_80;
            if (*(long*)param_1 == 0) {
               pauVar8 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])param_1 = pauVar8;
               *(undefined4*)pauVar8[1] = 0;
               *pauVar8 = (undefined1[16])0x0;
            }

            puVar9 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
            *(undefined8*)( puVar9 + 8 ) = 0;
            *(undefined1(*) [16])( puVar9 + 2 ) = (undefined1[16])0x0;
            *puVar9 = 0;
            puVar9[6] = 0;
            puVar9[10] = 6;
            *(undefined8*)( puVar9 + 0x10 ) = 0;
            *(undefined1(*) [16])( puVar9 + 0xc ) = (undefined1[16])0x0;
            *puVar9 = local_78[0];
            if (local_70 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar9 + 2 ), (CowData*)&local_70);
            }

            StringName::operator =((StringName*)( puVar9 + 4 ), (StringName*)&local_68);
            puVar9[6] = local_60;
            if (*(long*)( puVar9 + 8 ) != local_58) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar9 + 8 ), (CowData*)&local_58);
            }

            lVar4 = local_58;
            puVar9[10] = local_50;
            plVar1 = *(long**)param_1;
            lVar2 = plVar1[1];
            *(undefined8*)( puVar9 + 0xc ) = 0;
            *(long**)( puVar9 + 0x10 ) = plVar1;
            *(long*)( puVar9 + 0xe ) = lVar2;
            if (lVar2 != 0) {
               *(undefined4**)( lVar2 + 0x30 ) = puVar9;
            }

            plVar1[1] = (long)puVar9;
            if (*plVar1 == 0) {
               *plVar1 = (long)puVar9;
            }

            *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
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

         }

         LAB_0010a244:if (local_bc == 0) goto LAB_0010a1d1;
      }

      uVar11 = 0;
      puVar9 = puVar6;
      do {
         local_78[0] = *puVar9;
         lVar2 = **(long**)( puVar9 + 2 );
         if (lVar2 == 0) {
            local_70 = 0;
         }
 else {
            pOVar10 = *(Object**)( lVar2 + 8 );
            local_70 = 0;
            if (pOVar10 == (Object*)0x0) {
               if (*(long*)( lVar2 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)( lVar2 + 0x10 ));
               }

            }
 else {
               local_a0 = (long*)strlen((char*)pOVar10);
               local_a8 = pOVar10;
               String::parse_latin1((StrRange*)&local_70);
            }

         }

         StringName::StringName((StringName*)&local_68, *(StringName**)( puVar9 + 4 ));
         local_60 = puVar9[6];
         local_58 = 0;
         if (*(long*)*(CowData**)( puVar9 + 8 ) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, *(CowData**)( puVar9 + 8 ));
         }

         local_50 = puVar9[10];
         if (*(long*)param_1 == 0) {
            pauVar8 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])param_1 = pauVar8;
            *(undefined4*)pauVar8[1] = 0;
            *pauVar8 = (undefined1[16])0x0;
         }

         puVar7 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
         *(undefined8*)( puVar7 + 8 ) = 0;
         *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
         *puVar7 = 0;
         puVar7[6] = 0;
         puVar7[10] = 6;
         *(undefined8*)( puVar7 + 0x10 ) = 0;
         *(undefined1(*) [16])( puVar7 + 0xc ) = (undefined1[16])0x0;
         *puVar7 = local_78[0];
         if (local_70 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar7 + 2 ), (CowData*)&local_70);
         }

         StringName::operator =((StringName*)( puVar7 + 4 ), (StringName*)&local_68);
         puVar7[6] = local_60;
         if (*(long*)( puVar7 + 8 ) != local_58) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar7 + 8 ), (CowData*)&local_58);
         }

         lVar4 = local_58;
         puVar7[10] = local_50;
         plVar1 = *(long**)param_1;
         lVar2 = plVar1[1];
         *(undefined8*)( puVar7 + 0xc ) = 0;
         *(long**)( puVar7 + 0x10 ) = plVar1;
         *(long*)( puVar7 + 0xe ) = lVar2;
         if (lVar2 != 0) {
            *(undefined4**)( lVar2 + 0x30 ) = puVar7;
         }

         plVar1[1] = (long)puVar7;
         if (*plVar1 == 0) {
            *plVar1 = (long)puVar7;
         }

         *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
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

         uVar11 = uVar11 + 1;
         puVar9 = puVar9 + 0xc;
      }
 while ( uVar11 < local_bc );
   }

   if (*(code**)( *(long*)( this + 8 ) + 0x18 ) == (code*)0x0) {
      if (( *(long*)( this + 0x18 ) != 0 ) && ( pcVar3 = *(code**)( *(long*)( this + 0x18 ) + 8 ) ),pcVar3 != (code*)0x0) {
         ( *pcVar3 )(*(undefined8*)( this + 0x20 ), puVar6, local_bc);
      }

   }
 else {
      ( **(code**)( *(long*)( this + 8 ) + 0x18 ) )(*(undefined8*)( this + 0x20 ), puVar6);
   }

   LAB_0010a1ef:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ScriptInstanceExtension::validate_property(PropertyInfo&) const */void ScriptInstanceExtension::validate_property(ScriptInstanceExtension *this, PropertyInfo *param_1) {
   long *plVar1;
   char *__s;
   long lVar2;
   char cVar3;
   long lVar4;
   long lVar5;
   long in_FS_OFFSET;
   bool bVar6;
   long local_88;
   long local_80;
   char *local_78;
   size_t local_70;
   undefined4 local_68;
   long *local_60;
   StringName *local_58;
   undefined4 local_50;
   CowData<char32_t> *local_48;
   undefined4 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( *(long*)( this + 8 ) + 0x60 ) == 0) goto LAB_0010aaf2;
   StringName::StringName((StringName*)&local_88, (String_conflict*)( param_1 + 8 ), false);
   local_68 = *(undefined4*)param_1;
   local_50 = *(undefined4*)( param_1 + 0x18 );
   local_40 = *(undefined4*)( param_1 + 0x28 );
   local_60 = &local_88;
   local_58 = (StringName*)( param_1 + 0x10 );
   local_48 = (CowData<char32_t>*)( param_1 + 0x20 );
   cVar3 = ( **(code**)( *(long*)( this + 8 ) + 0x60 ) )(*(undefined8*)( this + 0x20 ));
   if (cVar3 != '\0') {
      *(undefined4*)param_1 = local_68;
      lVar5 = *local_60;
      if (lVar5 == 0) {
         LAB_0010ab21:local_80 = 0;
         lVar5 = *(long*)( param_1 + 8 );
         if (lVar5 != 0) {
            LAB_0010ab2e:LOCK();
            plVar1 = (long*)( lVar5 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar5 = *(long*)( param_1 + 8 );
               *(undefined8*)( param_1 + 8 ) = 0;
               Memory::free_static((void*)( lVar5 + -0x10 ), false);
            }

            goto LAB_0010aaa0;
         }

      }
 else {
         __s = *(char**)( lVar5 + 8 );
         local_80 = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar5 + 0x10 ) == 0) goto LAB_0010ab21;
            plVar1 = (long*)( *(long*)( lVar5 + 0x10 ) + -0x10 );
            do {
               lVar2 = *plVar1;
               if (lVar2 == 0) goto LAB_0010aa8a;
               LOCK();
               lVar4 = *plVar1;
               bVar6 = lVar2 == lVar4;
               if (bVar6) {
                  *plVar1 = lVar2 + 1;
                  lVar4 = lVar2;
               }

               UNLOCK();
            }
 while ( !bVar6 );
            if (lVar4 != -1) {
               local_80 = *(long*)( lVar5 + 0x10 );
            }

         }
 else {
            local_70 = strlen(__s);
            local_78 = __s;
            String::parse_latin1((StrRange*)&local_80);
         }

         LAB_0010aa8a:lVar2 = local_80;
         lVar5 = *(long*)( param_1 + 8 );
         if (lVar5 == local_80) {
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
 else {
            if (lVar5 != 0) goto LAB_0010ab2e;
            LAB_0010aaa0:*(long*)( param_1 + 8 ) = local_80;
         }

      }

      StringName::operator =((StringName*)( param_1 + 0x10 ), local_58);
      *(undefined4*)( param_1 + 0x18 ) = local_50;
      if (*(long*)( param_1 + 0x20 ) != *(long*)local_48) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( param_1 + 0x20 ), (CowData*)local_48);
      }

      *(undefined4*)( param_1 + 0x28 ) = local_40;
   }

   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   LAB_0010aaf2:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<char32_t>::resize<false>(long) */undefined8 CowData<char32_t>::resize<false>(CowData<char32_t> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   long lVar7;
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
      lVar7 = 0;
      lVar3 = 0;
   }
 else {
      lVar7 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar7) {
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
      lVar3 = lVar7 * 4;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 4 != 0) {
      uVar4 = param_1 * 4 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = uVar4 | uVar4 >> 0x20;
      if (uVar4 != 0xffffffffffffffff) {
         if (lVar7 < param_1) {
            if (uVar4 + 1 == lVar3) {
               puVar5 = *(undefined8**)this;
               if (puVar5 == (undefined8*)0x0) goto LAB_0010ae39;
            }
 else {
               if (lVar7 == 0) {
                  puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
                  if (puVar5 == (undefined8*)0x0) {
                     _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
                     return 6;
                  }

                  *puVar5 = 1;
                  puVar5[1] = 0;
               }
 else {
                  puVar5 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar4 + 0x11, false);
                  if (puVar5 == (undefined8*)0x0) goto LAB_0010af20;
                  *puVar5 = 1;
               }

               puVar5 = puVar5 + 2;
               *(undefined8**)this = puVar5;
            }

            puVar5[-1] = param_1;
         }
 else {
            puVar5 = *(undefined8**)this;
            if (uVar4 + 1 == lVar3) {
               if (puVar5 == (undefined8*)0x0) {
                  LAB_0010ae39:_DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

            }
 else {
               puVar6 = (undefined8*)Memory::realloc_static(puVar5 + -2, uVar4 + 0x11, false);
               if (puVar6 == (undefined8*)0x0) {
                  LAB_0010af20:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
                  return 6;
               }

               puVar5 = puVar6 + 2;
               *puVar6 = 1;
               *(undefined8**)this = puVar5;
            }

            puVar5[-1] = param_1;
         }

         return 0;
      }

   }

   _err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
   return 6;
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
/* List<Variant, DefaultAllocator>::~List() */void List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this) {
   int *piVar1;
   undefined8 *puVar2;
   puVar2 = *(undefined8**)this;
   if (puVar2 == (undefined8*)0x0) {
      return;
   }

   do {
      piVar1 = (int*)*puVar2;
      if (piVar1 == (int*)0x0) {
         if (*(int*)( puVar2 + 2 ) != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(undefined8**)( piVar1 + 10 ) == puVar2) {
         *puVar2 = *(undefined8*)( piVar1 + 6 );
         if (piVar1 == (int*)puVar2[1]) {
            puVar2[1] = *(undefined8*)( piVar1 + 8 );
         }

         if (*(long*)( piVar1 + 8 ) != 0) {
            *(undefined8*)( *(long*)( piVar1 + 8 ) + 0x18 ) = *(undefined8*)( piVar1 + 6 );
         }

         if (*(long*)( piVar1 + 6 ) != 0) {
            *(undefined8*)( *(long*)( piVar1 + 6 ) + 0x20 ) = *(undefined8*)( piVar1 + 8 );
         }

         if (::Variant::needs_deinit[*piVar1] != '\0') {
            ::Variant::_clear_internal();
         }

         Memory::free_static(piVar1, false);
         *(int*)( puVar2 + 2 ) = *(int*)( puVar2 + 2 ) + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      puVar2 = *(undefined8**)this;
   }
 while ( *(int*)( puVar2 + 2 ) != 0 );
   Memory::free_static(puVar2, false);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::insert(StringName const&, Variant
   const&, bool) */StringName *
HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
::insert(StringName *param_1,Variant *param_2,bool param_3){
   uint *puVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   uint uVar4;
   void *pvVar5;
   void *__s;
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
   uint uVar30;
   uint uVar31;
   ulong uVar32;
   undefined8 uVar33;
   void *__s_00;
   long lVar34;
   void *pvVar35;
   Variant *in_RCX;
   int iVar36;
   undefined7 in_register_00000011;
   StringName *pSVar37;
   long lVar38;
   long lVar39;
   long lVar40;
   ulong uVar41;
   undefined8 uVar42;
   char in_R8B;
   uint uVar43;
   uint uVar44;
   ulong uVar45;
   uint uVar46;
   undefined8 *puVar47;
   long in_FS_OFFSET;
   undefined8 *local_c0;
   long local_68;
   int local_60[8];
   long local_40;
   pSVar37 = (StringName*)CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   if (*(long*)( param_2 + 8 ) == 0) {
      uVar41 = (ulong)uVar30;
      uVar32 = uVar41 * 4;
      uVar45 = uVar41 * 8;
      uVar33 = Memory::alloc_static(uVar32, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar33;
      pvVar35 = (void*)Memory::alloc_static(uVar45, false);
      *(void**)( param_2 + 8 ) = pvVar35;
      if (uVar30 != 0) {
         pvVar5 = *(void**)( param_2 + 0x10 );
         if (( pvVar5 < (void*)( (long)pvVar35 + uVar45 ) ) && ( pvVar35 < (void*)( (long)pvVar5 + uVar32 ) )) {
            uVar32 = 0;
            do {
               *(undefined4*)( (long)pvVar5 + uVar32 * 4 ) = 0;
               *(undefined8*)( (long)pvVar35 + uVar32 * 8 ) = 0;
               uVar32 = uVar32 + 1;
            }
 while ( uVar41 != uVar32 );
         }
 else {
            memset(pvVar5, 0, uVar32);
            memset(pvVar35, 0, uVar45);
         }

         goto LAB_0010b3c5;
      }

      iVar36 = *(int*)( param_2 + 0x2c );
      if (pvVar35 == (void*)0x0) goto LAB_0010b4c7;
      if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_0010b3d1;
      LAB_0010b4ed:uVar30 = *(uint*)( param_2 + 0x28 );
      if (uVar30 == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         local_c0 = (undefined8*)0x0;
         goto LAB_0010b88c;
      }

      uVar32 = ( ulong )(uVar30 + 1);
      *(undefined4*)( param_2 + 0x2c ) = 0;
      uVar4 = *(uint*)( hash_table_size_primes + (ulong)uVar30 * 4 );
      if (uVar30 + 1 < 2) {
         uVar32 = 2;
      }

      uVar30 = *(uint*)( hash_table_size_primes + uVar32 * 4 );
      uVar41 = (ulong)uVar30;
      *(int*)( param_2 + 0x28 ) = (int)uVar32;
      pvVar35 = *(void**)( param_2 + 8 );
      uVar32 = uVar41 * 4;
      uVar45 = uVar41 * 8;
      pvVar5 = *(void**)( param_2 + 0x10 );
      uVar33 = Memory::alloc_static(uVar32, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar33;
      __s_00 = (void*)Memory::alloc_static(uVar45, false);
      *(void**)( param_2 + 8 ) = __s_00;
      if (uVar30 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar45 ) ) && ( __s_00 < (void*)( (long)__s + uVar32 ) )) {
            uVar32 = 0;
            do {
               *(undefined4*)( (long)__s + uVar32 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar32 * 8 ) = 0;
               uVar32 = uVar32 + 1;
            }
 while ( uVar32 != uVar41 );
         }
 else {
            memset(__s, 0, uVar32);
            memset(__s_00, 0, uVar45);
         }

      }

      if (uVar4 != 0) {
         uVar32 = 0;
         do {
            uVar30 = *(uint*)( (long)pvVar5 + uVar32 * 4 );
            if (uVar30 != 0) {
               lVar34 = *(long*)( param_2 + 0x10 );
               uVar43 = 0;
               uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
               uVar45 = CONCAT44(0, uVar31);
               lVar38 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
               auVar10._8_8_ = 0;
               auVar10._0_8_ = (ulong)uVar30 * lVar38;
               auVar22._8_8_ = 0;
               auVar22._0_8_ = uVar45;
               lVar39 = SUB168(auVar10 * auVar22, 8);
               puVar1 = (uint*)( lVar34 + lVar39 * 4 );
               iVar36 = SUB164(auVar10 * auVar22, 8);
               uVar44 = *puVar1;
               uVar33 = *(undefined8*)( (long)pvVar35 + uVar32 * 8 );
               while (uVar44 != 0) {
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = (ulong)uVar44 * lVar38;
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ = uVar45;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = ( ulong )(( uVar31 + iVar36 ) - SUB164(auVar11 * auVar23, 8)) * lVar38;
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ = uVar45;
                  uVar46 = SUB164(auVar12 * auVar24, 8);
                  uVar42 = uVar33;
                  if (uVar46 < uVar43) {
                     *puVar1 = uVar30;
                     puVar2 = (undefined8*)( (long)__s_00 + lVar39 * 8 );
                     uVar42 = *puVar2;
                     *puVar2 = uVar33;
                     uVar30 = uVar44;
                     uVar43 = uVar46;
                  }

                  uVar43 = uVar43 + 1;
                  auVar13._8_8_ = 0;
                  auVar13._0_8_ = ( ulong )(iVar36 + 1) * lVar38;
                  auVar25._8_8_ = 0;
                  auVar25._0_8_ = uVar45;
                  lVar39 = SUB168(auVar13 * auVar25, 8);
                  puVar1 = (uint*)( lVar34 + lVar39 * 4 );
                  iVar36 = SUB164(auVar13 * auVar25, 8);
                  uVar33 = uVar42;
                  uVar44 = *puVar1;
               }
;
               *(undefined8*)( (long)__s_00 + lVar39 * 8 ) = uVar33;
               *puVar1 = uVar30;
               *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
            }

            uVar32 = uVar32 + 1;
         }
 while ( uVar4 != uVar32 );
         Memory::free_static(pvVar35, false);
         Memory::free_static(pvVar5, false);
      }

   }
 else {
      LAB_0010b3c5:iVar36 = *(int*)( param_2 + 0x2c );
      if (iVar36 != 0) {
         LAB_0010b3d1:uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
         uVar32 = CONCAT44(0, uVar4);
         lVar34 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         if (*(long*)pSVar37 == 0) {
            uVar31 = StringName::get_empty_hash();
         }
 else {
            uVar31 = *(uint*)( *(long*)pSVar37 + 0x20 );
         }

         if (uVar31 == 0) {
            uVar31 = 1;
         }

         uVar46 = 0;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = (ulong)uVar31 * lVar34;
         auVar18._8_8_ = 0;
         auVar18._0_8_ = uVar32;
         lVar38 = SUB168(auVar6 * auVar18, 8);
         uVar44 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar38 * 4 );
         uVar43 = SUB164(auVar6 * auVar18, 8);
         if (uVar44 != 0) {
            do {
               if (( uVar44 == uVar31 ) && ( *(long*)( *(long*)( *(long*)( param_2 + 8 ) + lVar38 * 8 ) + 0x10 ) == *(long*)pSVar37 )) {
                  ::Variant::operator =((Variant*)( *(long*)( *(long*)( param_2 + 8 ) + (ulong)uVar43 * 8 ) + 0x18 ), in_RCX);
                  local_c0 = *(undefined8**)( *(long*)( param_2 + 8 ) + (ulong)uVar43 * 8 );
                  goto LAB_0010b88c;
               }

               uVar46 = uVar46 + 1;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( ulong )(uVar43 + 1) * lVar34;
               auVar19._8_8_ = 0;
               auVar19._0_8_ = uVar32;
               lVar38 = SUB168(auVar7 * auVar19, 8);
               uVar44 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar38 * 4 );
               uVar43 = SUB164(auVar7 * auVar19, 8);
            }
 while ( ( uVar44 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar44 * lVar34,auVar20._8_8_ = 0,auVar20._0_8_ = uVar32,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( uVar4 + uVar43 ) - SUB164(auVar8 * auVar20, 8)) * lVar34,auVar21._8_8_ = 0,auVar21._0_8_ = uVar32,uVar46 <= SUB164(auVar9 * auVar21, 8) );
         }

         iVar36 = *(int*)( param_2 + 0x2c );
      }

      LAB_0010b4c7:if ((float)uVar30 * __LC197 < (float)( iVar36 + 1 )) goto LAB_0010b4ed;
   }

   StringName::StringName((StringName*)&local_68, pSVar37);
   ::Variant::Variant((Variant*)local_60, in_RCX);
   local_c0 = (undefined8*)operator_new(0x30, "");
   *local_c0 = 0;
   local_c0[1] = 0;
   StringName::StringName((StringName*)( local_c0 + 2 ), (StringName*)&local_68);
   ::Variant::Variant((Variant*)( local_c0 + 3 ), (Variant*)local_60);
   if (::Variant::needs_deinit[local_60[0]] != '\0') {
      ::Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   if (*(undefined8**)( param_2 + 0x20 ) == (undefined8*)0x0) {
      *(undefined8**)( param_2 + 0x18 ) = local_c0;
      *(undefined8**)( param_2 + 0x20 ) = local_c0;
      LAB_0010b7a6:lVar34 = *(long*)pSVar37;
      if (lVar34 != 0) goto LAB_0010b7b2;
      LAB_0010b8f4:uVar30 = StringName::get_empty_hash();
   }
 else {
      if (in_R8B == '\0') {
         **(undefined8**)( param_2 + 0x20 ) = local_c0;
         local_c0[1] = *(undefined8*)( param_2 + 0x20 );
         *(undefined8**)( param_2 + 0x20 ) = local_c0;
         goto LAB_0010b7a6;
      }

      *(undefined8**)( *(long*)( param_2 + 0x18 ) + 8 ) = local_c0;
      *local_c0 = *(undefined8*)( param_2 + 0x18 );
      lVar34 = *(long*)pSVar37;
      *(undefined8**)( param_2 + 0x18 ) = local_c0;
      if (lVar34 == 0) goto LAB_0010b8f4;
      LAB_0010b7b2:uVar30 = *(uint*)( lVar34 + 0x20 );
   }

   lVar34 = *(long*)( param_2 + 0x10 );
   if (uVar30 == 0) {
      uVar30 = 1;
   }

   uVar32 = (ulong)uVar30;
   uVar44 = 0;
   uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar45 = CONCAT44(0, uVar4);
   lVar38 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   auVar14._8_8_ = 0;
   auVar14._0_8_ = uVar32 * lVar38;
   auVar26._8_8_ = 0;
   auVar26._0_8_ = uVar45;
   lVar40 = SUB168(auVar14 * auVar26, 8);
   lVar39 = *(long*)( param_2 + 8 );
   puVar1 = (uint*)( lVar34 + lVar40 * 4 );
   iVar36 = SUB164(auVar14 * auVar26, 8);
   uVar31 = *puVar1;
   puVar2 = local_c0;
   while (uVar31 != 0) {
      auVar15._8_8_ = 0;
      auVar15._0_8_ = (ulong)uVar31 * lVar38;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar45;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = ( ulong )(( uVar4 + iVar36 ) - SUB164(auVar15 * auVar27, 8)) * lVar38;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar45;
      uVar30 = SUB164(auVar16 * auVar28, 8);
      puVar47 = puVar2;
      if (uVar30 < uVar44) {
         *puVar1 = (uint)uVar32;
         uVar32 = (ulong)uVar31;
         puVar3 = (undefined8*)( lVar39 + lVar40 * 8 );
         puVar47 = (undefined8*)*puVar3;
         *puVar3 = puVar2;
         uVar44 = uVar30;
      }

      uVar30 = (uint)uVar32;
      uVar44 = uVar44 + 1;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = ( ulong )(iVar36 + 1) * lVar38;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar45;
      lVar40 = SUB168(auVar17 * auVar29, 8);
      puVar1 = (uint*)( lVar34 + lVar40 * 4 );
      iVar36 = SUB164(auVar17 * auVar29, 8);
      puVar2 = puVar47;
      uVar31 = *puVar1;
   }
;
   *(undefined8**)( lVar39 + lVar40 * 8 ) = puVar2;
   *puVar1 = uVar30;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_0010b88c:*(undefined8**)param_1 = local_c0;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x0010bc30) *//* WARNING: Removing unreachable block (ram,0x0010bd60) *//* WARNING: Removing unreachable block (ram,0x0010bed9) *//* WARNING: Removing unreachable block (ram,0x0010bd6c) *//* WARNING: Removing unreachable block (ram,0x0010bd76) *//* WARNING: Removing unreachable block (ram,0x0010bebb) *//* WARNING: Removing unreachable block (ram,0x0010bd82) *//* WARNING: Removing unreachable block (ram,0x0010bd8c) *//* WARNING: Removing unreachable block (ram,0x0010be9d) *//* WARNING: Removing unreachable block (ram,0x0010bd98) *//* WARNING: Removing unreachable block (ram,0x0010bda2) *//* WARNING: Removing unreachable block (ram,0x0010be7f) *//* WARNING: Removing unreachable block (ram,0x0010bdae) *//* WARNING: Removing unreachable block (ram,0x0010bdb8) *//* WARNING: Removing unreachable block (ram,0x0010be61) *//* WARNING: Removing unreachable block (ram,0x0010bdc4) *//* WARNING: Removing unreachable block (ram,0x0010bdce) *//* WARNING: Removing unreachable block (ram,0x0010be43) *//* WARNING: Removing unreachable block (ram,0x0010bdd6) *//* WARNING: Removing unreachable block (ram,0x0010bde0) *//* WARNING: Removing unreachable block (ram,0x0010be28) *//* WARNING: Removing unreachable block (ram,0x0010bde8) *//* WARNING: Removing unreachable block (ram,0x0010bdfe) *//* WARNING: Removing unreachable block (ram,0x0010be0a) *//* String vformat<StringName, StringName>(String const&, StringName const, StringName const) */undefined8 *vformat<StringName,StringName>(undefined8 *param_1, bool *param_2, StringName *param_3, StringName *param_4) {
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
/* CowData<Variant>::_unref() */void CowData<Variant>::_unref(CowData<Variant> *this) {
   long *plVar1;
   int *piVar2;
   long lVar3;
   code *pcVar4;
   int *piVar5;
   long lVar6;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      piVar2 = *(int**)this;
      if (piVar2 != (int*)0x0) {
         lVar3 = *(long*)( piVar2 + -2 );
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar6 = 0;
            piVar5 = piVar2;
            do {
               if (::Variant::needs_deinit[*piVar5] != '\0') {
                  ::Variant::_clear_internal();
               }

               lVar6 = lVar6 + 1;
               piVar5 = piVar5 + 6;
            }
 while ( lVar3 != lVar6 );
         }

         Memory::free_static(piVar2 + -4, false);
         return;
      }

      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* MethodInfo::~MethodInfo() */void MethodInfo::~MethodInfo(MethodInfo *this) {
   long *plVar1;
   void *pvVar2;
   long lVar3;
   long lVar4;
   long *plVar5;
   if (*(long*)( this + 0x68 ) != 0) {
      LOCK();
      plVar5 = (long*)( *(long*)( this + 0x68 ) + -0x10 );
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         lVar4 = *(long*)( this + 0x68 );
         *(undefined8*)( this + 0x68 ) = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   CowData<Variant>::_unref((CowData<Variant>*)( this + 0x50 ));
   plVar5 = *(long**)( this + 0x40 );
   if (plVar5 != (long*)0x0) {
      do {
         pvVar2 = (void*)*plVar5;
         if (pvVar2 == (void*)0x0) {
            if ((int)plVar5[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_0010c0c6;
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

         plVar5 = *(long**)( this + 0x40 );
      }
 while ( (int)plVar5[2] != 0 );
      Memory::free_static(plVar5, false);
   }

   LAB_0010c0c6:if (*(long*)( this + 0x28 ) != 0) {
      LOCK();
      plVar5 = (long*)( *(long*)( this + 0x28 ) + -0x10 );
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         lVar4 = *(long*)( this + 0x28 );
         *(undefined8*)( this + 0x28 ) = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x18 ) != 0 )) {
      StringName::unref();
   }

   if (*(long*)( this + 0x10 ) != 0) {
      LOCK();
      plVar5 = (long*)( *(long*)( this + 0x10 ) + -0x10 );
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         lVar4 = *(long*)( this + 0x10 );
         *(undefined8*)( this + 0x10 ) = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   if (*(long*)this != 0) {
      LOCK();
      plVar5 = (long*)( *(long*)this + -0x10 );
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         lVar4 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Variant>::resize<false>(long) */undefined8 CowData<Variant>::resize<false>(CowData<Variant> *this, long param_1) {
   code *pcVar1;
   undefined8 *puVar2;
   long lVar3;
   undefined8 *puVar4;
   undefined4 *puVar5;
   long lVar6;
   ulong uVar7;
   ulong uVar8;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar3 = 0;
      lVar6 = 0;
   }
 else {
      lVar3 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar3) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar6 = lVar3 * 0x18;
      if (lVar6 != 0) {
         uVar7 = lVar6 - 1U | lVar6 - 1U >> 1;
         uVar7 = uVar7 | uVar7 >> 2;
         uVar7 = uVar7 | uVar7 >> 4;
         uVar7 = uVar7 | uVar7 >> 8;
         uVar7 = uVar7 | uVar7 >> 0x10;
         lVar6 = ( uVar7 | uVar7 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x18 == 0) {
      LAB_0010c568:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar7 = param_1 * 0x18 - 1;
   uVar7 = uVar7 >> 1 | uVar7;
   uVar7 = uVar7 | uVar7 >> 2;
   uVar7 = uVar7 | uVar7 >> 4;
   uVar7 = uVar7 | uVar7 >> 8;
   uVar7 = uVar7 | uVar7 >> 0x10;
   uVar7 = uVar7 | uVar7 >> 0x20;
   if (uVar7 == 0xffffffffffffffff) goto LAB_0010c568;
   if (param_1 <= lVar3) {
      puVar4 = *(undefined8**)this;
      uVar8 = param_1;
      while (puVar4 != (undefined8*)0x0) {
         if ((ulong)puVar4[-1] <= uVar8) {
            if (uVar7 + 1 != lVar6) {
               puVar2 = (undefined8*)Memory::realloc_static(puVar4 + -2, uVar7 + 0x11, false);
               if (puVar2 == (undefined8*)0x0) goto LAB_0010c597;
               puVar4 = puVar2 + 2;
               *puVar2 = 1;
               *(undefined8**)this = puVar4;
            }

            puVar4[-1] = param_1;
            return 0;
         }

         if (::Variant::needs_deinit[*(int*)( puVar4 + uVar8 * 3 )] != '\0') {
            ::Variant::_clear_internal();
            puVar4 = *(undefined8**)this;
         }

         uVar8 = uVar8 + 1;
      }
;
      LAB_0010c559:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   if (uVar7 + 1 == lVar6) {
      puVar4 = *(undefined8**)this;
      if (puVar4 == (undefined8*)0x0) goto LAB_0010c559;
      lVar3 = puVar4[-1];
      LAB_0010c54b:if (param_1 <= lVar3) goto LAB_0010c3fd;
   }
 else {
      if (lVar3 != 0) {
         puVar2 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar7 + 0x11, false);
         if (puVar2 == (undefined8*)0x0) {
            LAB_0010c597:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
            return 6;
         }

         puVar4 = puVar2 + 2;
         *puVar2 = 1;
         *(undefined8**)this = puVar4;
         lVar3 = puVar2[1];
         goto LAB_0010c54b;
      }

      puVar2 = (undefined8*)Memory::alloc_static(uVar7 + 0x11, false);
      if (puVar2 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar4 = puVar2 + 2;
      *puVar2 = 1;
      puVar2[1] = 0;
      *(undefined8**)this = puVar4;
      lVar3 = 0;
   }

   *(undefined4*)( puVar4 + lVar3 * 3 ) = 0;
   *(undefined1(*) [16])( puVar4 + lVar3 * 3 + 1 ) = (undefined1[16])0x0;
   lVar3 = lVar3 + 1;
   if (lVar3 < param_1) {
      lVar6 = lVar3 * 0x18;
      do {
         lVar3 = lVar3 + 1;
         puVar5 = (undefined4*)( *(long*)this + lVar6 );
         lVar6 = lVar6 + 0x18;
         *puVar5 = 0;
         *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
      }
 while ( param_1 != lVar3 );
   }

   puVar4 = *(undefined8**)this;
   if (puVar4 == (undefined8*)0x0) {
      _DAT_00000000 = 0;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   LAB_0010c3fd:puVar4[-1] = param_1;
   return 0;
}
/* ScriptInstanceExtension::get_method_list(List<MethodInfo, DefaultAllocator>*) const */void ScriptInstanceExtension::get_method_list(ScriptInstanceExtension *this, List *param_1) {
   long *plVar1;
   char *pcVar2;
   void *pvVar3;
   code *pcVar4;
   size_t sVar5;
   long lVar6;
   int iVar7;
   undefined8 *puVar8;
   CowData<char32_t> *this_00;
   undefined1(*pauVar9)[16];
   undefined4 *puVar10;
   long *plVar11;
   undefined8 *puVar12;
   long lVar13;
   undefined4 *puVar14;
   Variant *pVVar15;
   long lVar16;
   uint uVar17;
   long in_FS_OFFSET;
   bool bVar18;
   uint local_144;
   uint local_10c;
   char *local_108;
   size_t local_100;
   char *local_f8;
   size_t local_f0;
   long local_e8;
   undefined4 local_e0;
   long local_d8;
   undefined4 local_d0;
   long local_c8;
   undefined4 local_c0;
   long local_b8;
   StringName local_b0[8];
   undefined4 local_a8;
   long local_a0;
   undefined4 local_98;
   undefined4 local_90;
   undefined4 local_8c;
   undefined1(*local_88)[16];
   long local_78;
   undefined4 local_70;
   long local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( *(long*)( this + 8 ) + 0x48 ) != (code*)0x0) {
      puVar8 = (undefined8*)( **(code**)( *(long*)( this + 8 ) + 0x48 ) )(*(undefined8*)( this + 0x20 ), &local_10c);
      if (local_10c != 0) {
         local_144 = 0;
         puVar12 = puVar8;
         do {
            lVar16 = *(long*)*puVar12;
            if (lVar16 == 0) {
               local_c8 = 0;
            }
 else {
               pcVar2 = *(char**)( lVar16 + 8 );
               local_c8 = 0;
               if (pcVar2 == (char*)0x0) {
                  if (*(long*)( lVar16 + 0x10 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)( lVar16 + 0x10 ));
                  }

               }
 else {
                  local_f0 = strlen(pcVar2);
                  local_f8 = pcVar2;
                  String::parse_latin1((StrRange*)&local_c8);
               }

            }

            local_c0 = *(undefined4*)( puVar12 + 1 );
            lVar16 = *(long*)puVar12[2];
            if (lVar16 == 0) {
               local_b8 = 0;
            }
 else {
               pcVar2 = *(char**)( lVar16 + 8 );
               local_b8 = 0;
               if (pcVar2 == (char*)0x0) {
                  if (*(long*)( lVar16 + 0x10 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)( lVar16 + 0x10 ));
                  }

               }
 else {
                  local_f0 = strlen(pcVar2);
                  local_f8 = pcVar2;
                  String::parse_latin1((StrRange*)&local_b8);
               }

            }

            StringName::StringName(local_b0, (StringName*)puVar12[3]);
            local_a8 = *(undefined4*)( puVar12 + 4 );
            local_a0 = 0;
            if (*(long*)puVar12[5] != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_a0, (CowData*)puVar12[5]);
            }

            local_98 = *(undefined4*)( puVar12 + 6 );
            lVar16 = 0;
            local_70 = 0;
            local_90 = *(undefined4*)( puVar12 + 7 );
            local_8c = *(undefined4*)( (long)puVar12 + 0x3c );
            local_88 = (undefined1(*) [16])0x0;
            local_78 = 0;
            local_60 = 0;
            if (*(int*)( puVar12 + 8 ) != 0) {
               do {
                  puVar14 = (undefined4*)( lVar16 * 0x30 + puVar12[9] );
                  local_f8 = (char*)CONCAT44(local_f8._4_4_, *puVar14);
                  lVar13 = **(long**)( puVar14 + 2 );
                  if (lVar13 == 0) {
                     local_f0 = 0;
                  }
 else {
                     pcVar2 = *(char**)( lVar13 + 8 );
                     local_f0 = 0;
                     if (pcVar2 == (char*)0x0) {
                        if (*(long*)( lVar13 + 0x10 ) != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_f0, (CowData*)( lVar13 + 0x10 ));
                        }

                     }
 else {
                        local_100 = strlen(pcVar2);
                        local_108 = pcVar2;
                        String::parse_latin1((StrRange*)&local_f0);
                     }

                  }

                  StringName::StringName((StringName*)&local_e8, *(StringName**)( puVar14 + 4 ));
                  local_e0 = puVar14[6];
                  local_d8 = 0;
                  if (*(long*)*(CowData**)( puVar14 + 8 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, *(CowData**)( puVar14 + 8 ));
                  }

                  local_d0 = puVar14[10];
                  if (local_88 == (undefined1(*) [16])0x0) {
                     local_88 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                     *(undefined4*)local_88[1] = 0;
                     *local_88 = (undefined1[16])0x0;
                  }

                  puVar14 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
                  *(undefined8*)( puVar14 + 8 ) = 0;
                  *(undefined1(*) [16])( puVar14 + 2 ) = (undefined1[16])0x0;
                  *puVar14 = 0;
                  puVar14[6] = 0;
                  puVar14[10] = 6;
                  *(undefined8*)( puVar14 + 0x10 ) = 0;
                  *(undefined1(*) [16])( puVar14 + 0xc ) = (undefined1[16])0x0;
                  *puVar14 = local_f8._0_4_;
                  if (local_f0 != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( puVar14 + 2 ), (CowData*)&local_f0);
                  }

                  StringName::operator =((StringName*)( puVar14 + 4 ), (StringName*)&local_e8);
                  puVar14[6] = local_e0;
                  if (*(long*)( puVar14 + 8 ) != local_d8) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( puVar14 + 8 ), (CowData*)&local_d8);
                  }

                  lVar6 = local_d8;
                  puVar14[10] = local_d0;
                  lVar13 = *(long*)( *local_88 + 8 );
                  *(undefined8*)( puVar14 + 0xc ) = 0;
                  *(undefined1(**) [16])( puVar14 + 0x10 ) = local_88;
                  *(long*)( puVar14 + 0xe ) = lVar13;
                  if (lVar13 != 0) {
                     *(undefined4**)( lVar13 + 0x30 ) = puVar14;
                  }

                  lVar13 = *(long*)*local_88;
                  *(undefined4**)( *local_88 + 8 ) = puVar14;
                  if (lVar13 == 0) {
                     *(undefined4**)*local_88 = puVar14;
                  }

                  *(int*)local_88[1] = *(int*)local_88[1] + 1;
                  if (local_d8 != 0) {
                     LOCK();
                     plVar11 = (long*)( local_d8 + -0x10 );
                     *plVar11 = *plVar11 + -1;
                     UNLOCK();
                     if (*plVar11 == 0) {
                        local_d8 = 0;
                        Memory::free_static((void*)( lVar6 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( local_e8 != 0 )) {
                     StringName::unref();
                  }

                  sVar5 = local_f0;
                  if (local_f0 != 0) {
                     LOCK();
                     plVar11 = (long*)( local_f0 - 0x10 );
                     *plVar11 = *plVar11 + -1;
                     UNLOCK();
                     if (*plVar11 == 0) {
                        local_f0 = 0;
                        Memory::free_static((void*)( sVar5 - 0x10 ), false);
                     }

                  }

                  lVar16 = lVar16 + 1;
               }
 while ( (uint)lVar16 < *(uint*)( puVar12 + 8 ) );
            }

            pVVar15 = (Variant*)puVar12[0xb];
            if (*(int*)( puVar12 + 10 ) != 0) {
               uVar17 = 0;
               do {
                  ::Variant::Variant((Variant*)local_58, pVVar15);
                  if (local_78 == 0) {
                     lVar16 = 1;
                  }
 else {
                     lVar16 = *(long*)( local_78 + -8 ) + 1;
                  }

                  iVar7 = CowData<Variant>::resize<false>((CowData<Variant>*)&local_78, lVar16);
                  if (iVar7 == 0) {
                     if (local_78 == 0) {
                        lVar13 = -1;
                        lVar16 = 0;
                     }
 else {
                        lVar16 = *(long*)( local_78 + -8 );
                        lVar13 = lVar16 + -1;
                        if (-1 < lVar13) {
                           CowData<Variant>::_copy_on_write((CowData<Variant>*)&local_78);
                           ::Variant::operator =((Variant*)( local_78 + lVar13 * 0x18 ), (Variant*)local_58);
                           goto LAB_0010cb46;
                        }

                     }

                     _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar13, lVar16, "p_index", "size()", "", false, false);
                  }
 else {
                     _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
                  }

                  LAB_0010cb46:if (::Variant::needs_deinit[local_58[0]] != '\0') {
                     ::Variant::_clear_internal();
                  }

                  uVar17 = uVar17 + 1;
                  pVVar15 = pVVar15 + 0x18;
               }
 while ( uVar17 < *(uint*)( puVar12 + 10 ) );
            }

            if (*(long*)param_1 == 0) {
               pauVar9 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])param_1 = pauVar9;
               *(undefined4*)pauVar9[1] = 0;
               *pauVar9 = (undefined1[16])0x0;
            }

            this_00 = (CowData<char32_t>*)operator_new(0x88, DefaultAllocator::alloc);
            *(undefined8*)this_00 = 0;
            *(undefined4*)( this_00 + 8 ) = 0;
            *(undefined4*)( this_00 + 0x20 ) = 0;
            *(undefined8*)( this_00 + 0x28 ) = 0;
            *(undefined4*)( this_00 + 0x30 ) = 6;
            *(undefined8*)( this_00 + 0x38 ) = 1;
            *(undefined8*)( this_00 + 0x40 ) = 0;
            *(undefined8*)( this_00 + 0x50 ) = 0;
            *(undefined4*)( this_00 + 0x58 ) = 0;
            *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( this_00 + 0x68 ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( this_00 + 0x78 ) = (undefined1[16])0x0;
            lVar16 = local_c8;
            if (local_c8 != 0) {
               CowData<char32_t>::_ref(this_00, (CowData*)&local_c8);
               lVar16 = *(long*)( this_00 + 0x10 );
            }

            *(undefined4*)( this_00 + 8 ) = local_c0;
            if (lVar16 != local_b8) {
               CowData<char32_t>::_ref(this_00 + 0x10, (CowData*)&local_b8);
            }

            StringName::operator =((StringName*)( this_00 + 0x18 ), local_b0);
            *(undefined4*)( this_00 + 0x20 ) = local_a8;
            if (*(long*)( this_00 + 0x28 ) != local_a0) {
               CowData<char32_t>::_ref(this_00 + 0x28, (CowData*)&local_a0);
            }

            plVar11 = *(long**)( this_00 + 0x40 );
            *(undefined4*)( this_00 + 0x30 ) = local_98;
            *(undefined4*)( this_00 + 0x38 ) = local_90;
            *(undefined4*)( this_00 + 0x3c ) = local_8c;
            if (plVar11 != (long*)0x0) {
               do {
                  pvVar3 = (void*)*plVar11;
                  if (pvVar3 == (void*)0x0) goto LAB_0010cd78;
                  if (*(long**)( (long)pvVar3 + 0x40 ) == plVar11) {
                     lVar16 = *(long*)( (long)pvVar3 + 0x30 );
                     lVar13 = *(long*)( (long)pvVar3 + 0x38 );
                     *plVar11 = lVar16;
                     if (pvVar3 == (void*)plVar11[1]) {
                        plVar11[1] = lVar13;
                     }

                     if (lVar13 != 0) {
                        *(long*)( lVar13 + 0x30 ) = lVar16;
                        lVar16 = *(long*)( (long)pvVar3 + 0x30 );
                     }

                     if (lVar16 != 0) {
                        *(long*)( lVar16 + 0x38 ) = lVar13;
                     }

                     if (*(long*)( (long)pvVar3 + 0x20 ) != 0) {
                        LOCK();
                        plVar1 = (long*)( *(long*)( (long)pvVar3 + 0x20 ) + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           lVar16 = *(long*)( (long)pvVar3 + 0x20 );
                           *(undefined8*)( (long)pvVar3 + 0x20 ) = 0;
                           Memory::free_static((void*)( lVar16 + -0x10 ), false);
                        }

                     }

                     if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
                        StringName::unref();
                     }

                     if (*(long*)( (long)pvVar3 + 8 ) != 0) {
                        LOCK();
                        plVar1 = (long*)( *(long*)( (long)pvVar3 + 8 ) + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           lVar16 = *(long*)( (long)pvVar3 + 8 );
                           *(undefined8*)( (long)pvVar3 + 8 ) = 0;
                           Memory::free_static((void*)( lVar16 + -0x10 ), false);
                        }

                     }

                     Memory::free_static(pvVar3, false);
                     *(int*)( plVar11 + 2 ) = (int)plVar11[2] + -1;
                  }
 else {
                     _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                  }

                  plVar11 = *(long**)( this_00 + 0x40 );
               }
 while ( (int)plVar11[2] != 0 );
               Memory::free_static(plVar11, false);
               *(undefined8*)( this_00 + 0x40 ) = 0;
            }

            plVar11 = (long*)0x0;
            LAB_0010cd78:if (( local_88 != (undefined1(*) [16])0x0 ) && ( puVar14 = *(undefined4**)*local_88 ),puVar14 != (undefined4*)0x0) {
               if (plVar11 == (long*)0x0) {
                  pauVar9 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *(undefined1(**) [16])( this_00 + 0x40 ) = pauVar9;
                  *(undefined4*)pauVar9[1] = 0;
                  *pauVar9 = (undefined1[16])0x0;
               }

               do {
                  while (true) {
                     puVar10 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
                     *(undefined8*)( puVar10 + 8 ) = 0;
                     *(undefined1(*) [16])( puVar10 + 2 ) = (undefined1[16])0x0;
                     lVar16 = *(long*)( puVar14 + 2 );
                     *puVar10 = 0;
                     puVar10[6] = 0;
                     puVar10[10] = 6;
                     *(undefined8*)( puVar10 + 0x10 ) = 0;
                     *(undefined1(*) [16])( puVar10 + 0xc ) = (undefined1[16])0x0;
                     *puVar10 = *puVar14;
                     if (lVar16 != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)( puVar10 + 2 ), (CowData*)( puVar14 + 2 ));
                     }

                     StringName::operator =((StringName*)( puVar10 + 4 ), (StringName*)( puVar14 + 4 ));
                     puVar10[6] = puVar14[6];
                     if (*(long*)( puVar10 + 8 ) != *(long*)( puVar14 + 8 )) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)( puVar10 + 8 ), (CowData*)( puVar14 + 8 ));
                     }

                     puVar10[10] = puVar14[10];
                     plVar11 = *(long**)( this_00 + 0x40 );
                     lVar16 = plVar11[1];
                     *(undefined8*)( puVar10 + 0xc ) = 0;
                     *(long**)( puVar10 + 0x10 ) = plVar11;
                     *(long*)( puVar10 + 0xe ) = lVar16;
                     if (lVar16 != 0) {
                        *(undefined4**)( lVar16 + 0x30 ) = puVar10;
                     }

                     plVar11[1] = (long)puVar10;
                     if (*plVar11 != 0) break;
                     puVar14 = *(undefined4**)( puVar14 + 0xc );
                     *(int*)( plVar11 + 2 ) = (int)plVar11[2] + 1;
                     *plVar11 = (long)puVar10;
                     if (puVar14 == (undefined4*)0x0) goto LAB_0010ceaa;
                  }
;
                  puVar14 = *(undefined4**)( puVar14 + 0xc );
                  *(int*)( plVar11 + 2 ) = (int)plVar11[2] + 1;
               }
 while ( puVar14 != (undefined4*)0x0 );
            }

            LAB_0010ceaa:if (( *(long*)( this_00 + 0x50 ) != local_78 ) && ( CowData<Variant>::_unref((CowData<Variant>*)( this_00 + 0x50 )),local_78 != 0 )) {
               plVar11 = (long*)( local_78 + -0x10 );
               do {
                  lVar16 = *plVar11;
                  if (lVar16 == 0) goto LAB_0010cef7;
                  LOCK();
                  lVar13 = *plVar11;
                  bVar18 = lVar16 == lVar13;
                  if (bVar18) {
                     *plVar11 = lVar16 + 1;
                     lVar13 = lVar16;
                  }

                  UNLOCK();
               }
 while ( !bVar18 );
               if (lVar13 != -1) {
                  *(long*)( this_00 + 0x50 ) = local_78;
               }

            }

            LAB_0010cef7:*(undefined4*)( this_00 + 0x58 ) = local_70;
            lVar16 = *(long*)( this_00 + 0x68 );
            if (lVar16 != local_60) {
               if (lVar16 != 0) {
                  LOCK();
                  plVar11 = (long*)( lVar16 + -0x10 );
                  *plVar11 = *plVar11 + -1;
                  UNLOCK();
                  if (*plVar11 == 0) {
                     lVar16 = *(long*)( this_00 + 0x68 );
                     *(undefined8*)( this_00 + 0x68 ) = 0;
                     Memory::free_static((void*)( lVar16 + -0x10 ), false);
                  }
 else {
                     *(undefined8*)( this_00 + 0x68 ) = 0;
                  }

               }

               if (local_60 != 0) {
                  plVar11 = (long*)( local_60 + -0x10 );
                  do {
                     lVar16 = *plVar11;
                     if (lVar16 == 0) goto LAB_0010cf62;
                     LOCK();
                     lVar13 = *plVar11;
                     bVar18 = lVar16 == lVar13;
                     if (bVar18) {
                        *plVar11 = lVar16 + 1;
                        lVar13 = lVar16;
                     }

                     UNLOCK();
                  }
 while ( !bVar18 );
                  if (lVar13 != -1) {
                     *(long*)( this_00 + 0x68 ) = local_60;
                  }

               }

            }

            LAB_0010cf62:plVar11 = *(long**)param_1;
            lVar16 = plVar11[1];
            *(undefined8*)( this_00 + 0x70 ) = 0;
            *(long**)( this_00 + 0x80 ) = plVar11;
            *(long*)( this_00 + 0x78 ) = lVar16;
            if (lVar16 != 0) {
               *(CowData<char32_t>**)( lVar16 + 0x70 ) = this_00;
            }

            plVar11[1] = (long)this_00;
            if (*plVar11 == 0) {
               *plVar11 = (long)this_00;
            }

            *(int*)( plVar11 + 2 ) = (int)plVar11[2] + 1;
            puVar12 = puVar12 + 0xc;
            MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
            local_144 = local_144 + 1;
         }
 while ( local_144 < local_10c );
      }

      if (*(code**)( *(long*)( this + 8 ) + 0x50 ) == (code*)0x0) {
         if (( *(long*)( this + 0x18 ) != 0 ) && ( pcVar4 = *(code**)( *(long*)( this + 0x18 ) + 0x10 ) ),pcVar4 != (code*)0x0) {
            ( *pcVar4 )(*(undefined8*)( this + 0x20 ), puVar8);
         }

      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0x50 ) )(*(undefined8*)( this + 0x20 ), puVar8);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
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
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomExtension::~CallableCustomExtension() */void CallableCustomExtension::~CallableCustomExtension(CallableCustomExtension *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodInfo::~MethodInfo() */void MethodInfo::~MethodInfo(MethodInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<Variant, DefaultAllocator>::~List() */void List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ScriptInstanceExtension::~ScriptInstanceExtension() */void ScriptInstanceExtension::~ScriptInstanceExtension(ScriptInstanceExtension *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

