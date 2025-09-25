/* void register_member<VariantSetGet_Vector2_x>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Vector2_x>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110c30 == DAT_00110c34) {
      uVar3 = ( ulong )(DAT_00110c30 * 2);
      if (DAT_00110c30 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110c34 = (uint)uVar3;
      DAT_00110c38 = (void*)Memory::realloc_static(DAT_00110c38, uVar3 * 0x38, false);
      if (DAT_00110c38 == (void*)0x0) goto LAB_00100248;
   }

   uVar3 = (ulong)DAT_00110c30;
   DAT_00110c30 = DAT_00110c30 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110c38 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 3;
   *puVar1 = VariantSetGet_Vector2_x::set;
   puVar1[1] = VariantSetGet_Vector2_x::get;
   puVar1[2] = VariantSetGet_Vector2_x::validated_set;
   puVar1[3] = VariantSetGet_Vector2_x::validated_get;
   puVar1[4] = VariantSetGet_Vector2_x::ptr_set;
   puVar1[5] = VariantSetGet_Vector2_x::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_001109b0 == DAT_001109b4) {
      uVar3 = ( ulong )(DAT_001109b0 * 2);
      if (DAT_001109b0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_001109b4 = (uint)uVar3;
      DAT_001109b8 = (void*)Memory::realloc_static(DAT_001109b8, uVar3 * 8, false);
      if (DAT_001109b8 == (void*)0x0) {
         LAB_00100248:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_001109b0;
   DAT_001109b0 = DAT_001109b0 + 1;
   StringName::StringName((StringName*)( (long)DAT_001109b8 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Vector2_y>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Vector2_y>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110c30 == DAT_00110c34) {
      uVar3 = ( ulong )(DAT_00110c30 * 2);
      if (DAT_00110c30 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110c34 = (uint)uVar3;
      DAT_00110c38 = (void*)Memory::realloc_static(DAT_00110c38, uVar3 * 0x38, false);
      if (DAT_00110c38 == (void*)0x0) goto LAB_00100438;
   }

   uVar3 = (ulong)DAT_00110c30;
   DAT_00110c30 = DAT_00110c30 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110c38 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 3;
   *puVar1 = VariantSetGet_Vector2_y::set;
   puVar1[1] = VariantSetGet_Vector2_y::get;
   puVar1[2] = VariantSetGet_Vector2_y::validated_set;
   puVar1[3] = VariantSetGet_Vector2_y::validated_get;
   puVar1[4] = VariantSetGet_Vector2_y::ptr_set;
   puVar1[5] = VariantSetGet_Vector2_y::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_001109b0 == DAT_001109b4) {
      uVar3 = ( ulong )(DAT_001109b0 * 2);
      if (DAT_001109b0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_001109b4 = (uint)uVar3;
      DAT_001109b8 = (void*)Memory::realloc_static(DAT_001109b8, uVar3 * 8, false);
      if (DAT_001109b8 == (void*)0x0) {
         LAB_00100438:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_001109b0;
   DAT_001109b0 = DAT_001109b0 + 1;
   StringName::StringName((StringName*)( (long)DAT_001109b8 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Vector2i_x>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Vector2i_x>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110c40 == DAT_00110c44) {
      uVar3 = ( ulong )(DAT_00110c40 * 2);
      if (DAT_00110c40 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110c44 = (uint)uVar3;
      DAT_00110c48 = (void*)Memory::realloc_static(DAT_00110c48, uVar3 * 0x38, false);
      if (DAT_00110c48 == (void*)0x0) goto LAB_00100628;
   }

   uVar3 = (ulong)DAT_00110c40;
   DAT_00110c40 = DAT_00110c40 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110c48 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 2;
   *puVar1 = VariantSetGet_Vector2i_x::set;
   puVar1[1] = VariantSetGet_Vector2i_x::get;
   puVar1[2] = VariantSetGet_Vector2i_x::validated_set;
   puVar1[3] = VariantSetGet_Vector2i_x::validated_get;
   puVar1[4] = VariantSetGet_Vector2i_x::ptr_set;
   puVar1[5] = VariantSetGet_Vector2i_x::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_001109c0 == DAT_001109c4) {
      uVar3 = ( ulong )(DAT_001109c0 * 2);
      if (DAT_001109c0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_001109c4 = (uint)uVar3;
      DAT_001109c8 = (void*)Memory::realloc_static(DAT_001109c8, uVar3 * 8, false);
      if (DAT_001109c8 == (void*)0x0) {
         LAB_00100628:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_001109c0;
   DAT_001109c0 = DAT_001109c0 + 1;
   StringName::StringName((StringName*)( (long)DAT_001109c8 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Vector2i_y>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Vector2i_y>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110c40 == DAT_00110c44) {
      uVar3 = ( ulong )(DAT_00110c40 * 2);
      if (DAT_00110c40 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110c44 = (uint)uVar3;
      DAT_00110c48 = (void*)Memory::realloc_static(DAT_00110c48, uVar3 * 0x38, false);
      if (DAT_00110c48 == (void*)0x0) goto LAB_00100818;
   }

   uVar3 = (ulong)DAT_00110c40;
   DAT_00110c40 = DAT_00110c40 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110c48 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 2;
   *puVar1 = VariantSetGet_Vector2i_y::set;
   puVar1[1] = VariantSetGet_Vector2i_y::get;
   puVar1[2] = VariantSetGet_Vector2i_y::validated_set;
   puVar1[3] = VariantSetGet_Vector2i_y::validated_get;
   puVar1[4] = VariantSetGet_Vector2i_y::ptr_set;
   puVar1[5] = VariantSetGet_Vector2i_y::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_001109c0 == DAT_001109c4) {
      uVar3 = ( ulong )(DAT_001109c0 * 2);
      if (DAT_001109c0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_001109c4 = (uint)uVar3;
      DAT_001109c8 = (void*)Memory::realloc_static(DAT_001109c8, uVar3 * 8, false);
      if (DAT_001109c8 == (void*)0x0) {
         LAB_00100818:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_001109c0;
   DAT_001109c0 = DAT_001109c0 + 1;
   StringName::StringName((StringName*)( (long)DAT_001109c8 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Vector3_x>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Vector3_x>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110c70 == DAT_00110c74) {
      uVar3 = ( ulong )(DAT_00110c70 * 2);
      if (DAT_00110c70 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110c74 = (uint)uVar3;
      DAT_00110c78 = (void*)Memory::realloc_static(DAT_00110c78, uVar3 * 0x38, false);
      if (DAT_00110c78 == (void*)0x0) goto LAB_00100a08;
   }

   uVar3 = (ulong)DAT_00110c70;
   DAT_00110c70 = DAT_00110c70 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110c78 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 3;
   *puVar1 = VariantSetGet_Vector3_x::set;
   puVar1[1] = VariantSetGet_Vector3_x::get;
   puVar1[2] = VariantSetGet_Vector3_x::validated_set;
   puVar1[3] = VariantSetGet_Vector3_x::validated_get;
   puVar1[4] = VariantSetGet_Vector3_x::ptr_set;
   puVar1[5] = VariantSetGet_Vector3_x::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_001109f0 == DAT_001109f4) {
      uVar3 = ( ulong )(DAT_001109f0 * 2);
      if (DAT_001109f0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_001109f4 = (uint)uVar3;
      DAT_001109f8 = (void*)Memory::realloc_static(DAT_001109f8, uVar3 * 8, false);
      if (DAT_001109f8 == (void*)0x0) {
         LAB_00100a08:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_001109f0;
   DAT_001109f0 = DAT_001109f0 + 1;
   StringName::StringName((StringName*)( (long)DAT_001109f8 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Vector3_y>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Vector3_y>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110c70 == DAT_00110c74) {
      uVar3 = ( ulong )(DAT_00110c70 * 2);
      if (DAT_00110c70 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110c74 = (uint)uVar3;
      DAT_00110c78 = (void*)Memory::realloc_static(DAT_00110c78, uVar3 * 0x38, false);
      if (DAT_00110c78 == (void*)0x0) goto LAB_00100bf8;
   }

   uVar3 = (ulong)DAT_00110c70;
   DAT_00110c70 = DAT_00110c70 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110c78 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 3;
   *puVar1 = VariantSetGet_Vector3_y::set;
   puVar1[1] = VariantSetGet_Vector3_y::get;
   puVar1[2] = VariantSetGet_Vector3_y::validated_set;
   puVar1[3] = VariantSetGet_Vector3_y::validated_get;
   puVar1[4] = VariantSetGet_Vector3_y::ptr_set;
   puVar1[5] = VariantSetGet_Vector3_y::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_001109f0 == DAT_001109f4) {
      uVar3 = ( ulong )(DAT_001109f0 * 2);
      if (DAT_001109f0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_001109f4 = (uint)uVar3;
      DAT_001109f8 = (void*)Memory::realloc_static(DAT_001109f8, uVar3 * 8, false);
      if (DAT_001109f8 == (void*)0x0) {
         LAB_00100bf8:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_001109f0;
   DAT_001109f0 = DAT_001109f0 + 1;
   StringName::StringName((StringName*)( (long)DAT_001109f8 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Vector3_z>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Vector3_z>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110c70 == DAT_00110c74) {
      uVar3 = ( ulong )(DAT_00110c70 * 2);
      if (DAT_00110c70 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110c74 = (uint)uVar3;
      DAT_00110c78 = (void*)Memory::realloc_static(DAT_00110c78, uVar3 * 0x38, false);
      if (DAT_00110c78 == (void*)0x0) goto LAB_00100de8;
   }

   uVar3 = (ulong)DAT_00110c70;
   DAT_00110c70 = DAT_00110c70 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110c78 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 3;
   *puVar1 = VariantSetGet_Vector3_z::set;
   puVar1[1] = VariantSetGet_Vector3_z::get;
   puVar1[2] = VariantSetGet_Vector3_z::validated_set;
   puVar1[3] = VariantSetGet_Vector3_z::validated_get;
   puVar1[4] = VariantSetGet_Vector3_z::ptr_set;
   puVar1[5] = VariantSetGet_Vector3_z::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_001109f0 == DAT_001109f4) {
      uVar3 = ( ulong )(DAT_001109f0 * 2);
      if (DAT_001109f0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_001109f4 = (uint)uVar3;
      DAT_001109f8 = (void*)Memory::realloc_static(DAT_001109f8, uVar3 * 8, false);
      if (DAT_001109f8 == (void*)0x0) {
         LAB_00100de8:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_001109f0;
   DAT_001109f0 = DAT_001109f0 + 1;
   StringName::StringName((StringName*)( (long)DAT_001109f8 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Vector3i_x>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Vector3i_x>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110c80 == DAT_00110c84) {
      uVar3 = ( ulong )(DAT_00110c80 * 2);
      if (DAT_00110c80 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110c84 = (uint)uVar3;
      DAT_00110c88 = (void*)Memory::realloc_static(DAT_00110c88, uVar3 * 0x38, false);
      if (DAT_00110c88 == (void*)0x0) goto LAB_00100fd8;
   }

   uVar3 = (ulong)DAT_00110c80;
   DAT_00110c80 = DAT_00110c80 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110c88 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 2;
   *puVar1 = VariantSetGet_Vector3i_x::set;
   puVar1[1] = VariantSetGet_Vector3i_x::get;
   puVar1[2] = VariantSetGet_Vector3i_x::validated_set;
   puVar1[3] = VariantSetGet_Vector3i_x::validated_get;
   puVar1[4] = VariantSetGet_Vector3i_x::ptr_set;
   puVar1[5] = VariantSetGet_Vector3i_x::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_00110a00 == DAT_00110a04) {
      uVar3 = ( ulong )(DAT_00110a00 * 2);
      if (DAT_00110a00 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a04 = (uint)uVar3;
      DAT_00110a08 = (void*)Memory::realloc_static(DAT_00110a08, uVar3 * 8, false);
      if (DAT_00110a08 == (void*)0x0) {
         LAB_00100fd8:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_00110a00;
   DAT_00110a00 = DAT_00110a00 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a08 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Vector3i_y>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Vector3i_y>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110c80 == DAT_00110c84) {
      uVar3 = ( ulong )(DAT_00110c80 * 2);
      if (DAT_00110c80 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110c84 = (uint)uVar3;
      DAT_00110c88 = (void*)Memory::realloc_static(DAT_00110c88, uVar3 * 0x38, false);
      if (DAT_00110c88 == (void*)0x0) goto LAB_001011c8;
   }

   uVar3 = (ulong)DAT_00110c80;
   DAT_00110c80 = DAT_00110c80 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110c88 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 2;
   *puVar1 = VariantSetGet_Vector3i_y::set;
   puVar1[1] = VariantSetGet_Vector3i_y::get;
   puVar1[2] = VariantSetGet_Vector3i_y::validated_set;
   puVar1[3] = VariantSetGet_Vector3i_y::validated_get;
   puVar1[4] = VariantSetGet_Vector3i_y::ptr_set;
   puVar1[5] = VariantSetGet_Vector3i_y::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_00110a00 == DAT_00110a04) {
      uVar3 = ( ulong )(DAT_00110a00 * 2);
      if (DAT_00110a00 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a04 = (uint)uVar3;
      DAT_00110a08 = (void*)Memory::realloc_static(DAT_00110a08, uVar3 * 8, false);
      if (DAT_00110a08 == (void*)0x0) {
         LAB_001011c8:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_00110a00;
   DAT_00110a00 = DAT_00110a00 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a08 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Vector3i_z>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Vector3i_z>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110c80 == DAT_00110c84) {
      uVar3 = ( ulong )(DAT_00110c80 * 2);
      if (DAT_00110c80 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110c84 = (uint)uVar3;
      DAT_00110c88 = (void*)Memory::realloc_static(DAT_00110c88, uVar3 * 0x38, false);
      if (DAT_00110c88 == (void*)0x0) goto LAB_001013b8;
   }

   uVar3 = (ulong)DAT_00110c80;
   DAT_00110c80 = DAT_00110c80 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110c88 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 2;
   *puVar1 = VariantSetGet_Vector3i_z::set;
   puVar1[1] = VariantSetGet_Vector3i_z::get;
   puVar1[2] = VariantSetGet_Vector3i_z::validated_set;
   puVar1[3] = VariantSetGet_Vector3i_z::validated_get;
   puVar1[4] = VariantSetGet_Vector3i_z::ptr_set;
   puVar1[5] = VariantSetGet_Vector3i_z::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_00110a00 == DAT_00110a04) {
      uVar3 = ( ulong )(DAT_00110a00 * 2);
      if (DAT_00110a00 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a04 = (uint)uVar3;
      DAT_00110a08 = (void*)Memory::realloc_static(DAT_00110a08, uVar3 * 8, false);
      if (DAT_00110a08 == (void*)0x0) {
         LAB_001013b8:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_00110a00;
   DAT_00110a00 = DAT_00110a00 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a08 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Vector4_x>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Vector4_x>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110ca0 == DAT_00110ca4) {
      uVar3 = ( ulong )(DAT_00110ca0 * 2);
      if (DAT_00110ca0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110ca4 = (uint)uVar3;
      DAT_00110ca8 = (void*)Memory::realloc_static(DAT_00110ca8, uVar3 * 0x38, false);
      if (DAT_00110ca8 == (void*)0x0) goto LAB_001015a8;
   }

   uVar3 = (ulong)DAT_00110ca0;
   DAT_00110ca0 = DAT_00110ca0 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110ca8 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 3;
   *puVar1 = VariantSetGet_Vector4_x::set;
   puVar1[1] = VariantSetGet_Vector4_x::get;
   puVar1[2] = VariantSetGet_Vector4_x::validated_set;
   puVar1[3] = VariantSetGet_Vector4_x::validated_get;
   puVar1[4] = VariantSetGet_Vector4_x::ptr_set;
   puVar1[5] = VariantSetGet_Vector4_x::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_00110a20 == DAT_00110a24) {
      uVar3 = ( ulong )(DAT_00110a20 * 2);
      if (DAT_00110a20 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a24 = (uint)uVar3;
      DAT_00110a28 = (void*)Memory::realloc_static(DAT_00110a28, uVar3 * 8, false);
      if (DAT_00110a28 == (void*)0x0) {
         LAB_001015a8:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_00110a20;
   DAT_00110a20 = DAT_00110a20 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a28 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Vector4_y>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Vector4_y>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110ca0 == DAT_00110ca4) {
      uVar3 = ( ulong )(DAT_00110ca0 * 2);
      if (DAT_00110ca0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110ca4 = (uint)uVar3;
      DAT_00110ca8 = (void*)Memory::realloc_static(DAT_00110ca8, uVar3 * 0x38, false);
      if (DAT_00110ca8 == (void*)0x0) goto LAB_00101798;
   }

   uVar3 = (ulong)DAT_00110ca0;
   DAT_00110ca0 = DAT_00110ca0 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110ca8 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 3;
   *puVar1 = VariantSetGet_Vector4_y::set;
   puVar1[1] = VariantSetGet_Vector4_y::get;
   puVar1[2] = VariantSetGet_Vector4_y::validated_set;
   puVar1[3] = VariantSetGet_Vector4_y::validated_get;
   puVar1[4] = VariantSetGet_Vector4_y::ptr_set;
   puVar1[5] = VariantSetGet_Vector4_y::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_00110a20 == DAT_00110a24) {
      uVar3 = ( ulong )(DAT_00110a20 * 2);
      if (DAT_00110a20 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a24 = (uint)uVar3;
      DAT_00110a28 = (void*)Memory::realloc_static(DAT_00110a28, uVar3 * 8, false);
      if (DAT_00110a28 == (void*)0x0) {
         LAB_00101798:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_00110a20;
   DAT_00110a20 = DAT_00110a20 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a28 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Vector4_z>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Vector4_z>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110ca0 == DAT_00110ca4) {
      uVar3 = ( ulong )(DAT_00110ca0 * 2);
      if (DAT_00110ca0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110ca4 = (uint)uVar3;
      DAT_00110ca8 = (void*)Memory::realloc_static(DAT_00110ca8, uVar3 * 0x38, false);
      if (DAT_00110ca8 == (void*)0x0) goto LAB_00101988;
   }

   uVar3 = (ulong)DAT_00110ca0;
   DAT_00110ca0 = DAT_00110ca0 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110ca8 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 3;
   *puVar1 = VariantSetGet_Vector4_z::set;
   puVar1[1] = VariantSetGet_Vector4_z::get;
   puVar1[2] = VariantSetGet_Vector4_z::validated_set;
   puVar1[3] = VariantSetGet_Vector4_z::validated_get;
   puVar1[4] = VariantSetGet_Vector4_z::ptr_set;
   puVar1[5] = VariantSetGet_Vector4_z::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_00110a20 == DAT_00110a24) {
      uVar3 = ( ulong )(DAT_00110a20 * 2);
      if (DAT_00110a20 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a24 = (uint)uVar3;
      DAT_00110a28 = (void*)Memory::realloc_static(DAT_00110a28, uVar3 * 8, false);
      if (DAT_00110a28 == (void*)0x0) {
         LAB_00101988:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_00110a20;
   DAT_00110a20 = DAT_00110a20 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a28 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Vector4_w>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Vector4_w>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110ca0 == DAT_00110ca4) {
      uVar3 = ( ulong )(DAT_00110ca0 * 2);
      if (DAT_00110ca0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110ca4 = (uint)uVar3;
      DAT_00110ca8 = (void*)Memory::realloc_static(DAT_00110ca8, uVar3 * 0x38, false);
      if (DAT_00110ca8 == (void*)0x0) goto LAB_00101b78;
   }

   uVar3 = (ulong)DAT_00110ca0;
   DAT_00110ca0 = DAT_00110ca0 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110ca8 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 3;
   *puVar1 = VariantSetGet_Vector4_w::set;
   puVar1[1] = VariantSetGet_Vector4_w::get;
   puVar1[2] = VariantSetGet_Vector4_w::validated_set;
   puVar1[3] = VariantSetGet_Vector4_w::validated_get;
   puVar1[4] = VariantSetGet_Vector4_w::ptr_set;
   puVar1[5] = VariantSetGet_Vector4_w::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_00110a20 == DAT_00110a24) {
      uVar3 = ( ulong )(DAT_00110a20 * 2);
      if (DAT_00110a20 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a24 = (uint)uVar3;
      DAT_00110a28 = (void*)Memory::realloc_static(DAT_00110a28, uVar3 * 8, false);
      if (DAT_00110a28 == (void*)0x0) {
         LAB_00101b78:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_00110a20;
   DAT_00110a20 = DAT_00110a20 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a28 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Vector4i_x>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Vector4i_x>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110cb0 == DAT_00110cb4) {
      uVar3 = ( ulong )(DAT_00110cb0 * 2);
      if (DAT_00110cb0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110cb4 = (uint)uVar3;
      DAT_00110cb8 = (void*)Memory::realloc_static(DAT_00110cb8, uVar3 * 0x38, false);
      if (DAT_00110cb8 == (void*)0x0) goto LAB_00101d68;
   }

   uVar3 = (ulong)DAT_00110cb0;
   DAT_00110cb0 = DAT_00110cb0 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110cb8 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 2;
   *puVar1 = VariantSetGet_Vector4i_x::set;
   puVar1[1] = VariantSetGet_Vector4i_x::get;
   puVar1[2] = VariantSetGet_Vector4i_x::validated_set;
   puVar1[3] = VariantSetGet_Vector4i_x::validated_get;
   puVar1[4] = VariantSetGet_Vector4i_x::ptr_set;
   puVar1[5] = VariantSetGet_Vector4i_x::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_00110a30 == DAT_00110a34) {
      uVar3 = ( ulong )(DAT_00110a30 * 2);
      if (DAT_00110a30 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a34 = (uint)uVar3;
      DAT_00110a38 = (void*)Memory::realloc_static(DAT_00110a38, uVar3 * 8, false);
      if (DAT_00110a38 == (void*)0x0) {
         LAB_00101d68:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_00110a30;
   DAT_00110a30 = DAT_00110a30 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a38 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Vector4i_y>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Vector4i_y>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110cb0 == DAT_00110cb4) {
      uVar3 = ( ulong )(DAT_00110cb0 * 2);
      if (DAT_00110cb0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110cb4 = (uint)uVar3;
      DAT_00110cb8 = (void*)Memory::realloc_static(DAT_00110cb8, uVar3 * 0x38, false);
      if (DAT_00110cb8 == (void*)0x0) goto LAB_00101f58;
   }

   uVar3 = (ulong)DAT_00110cb0;
   DAT_00110cb0 = DAT_00110cb0 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110cb8 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 2;
   *puVar1 = VariantSetGet_Vector4i_y::set;
   puVar1[1] = VariantSetGet_Vector4i_y::get;
   puVar1[2] = VariantSetGet_Vector4i_y::validated_set;
   puVar1[3] = VariantSetGet_Vector4i_y::validated_get;
   puVar1[4] = VariantSetGet_Vector4i_y::ptr_set;
   puVar1[5] = VariantSetGet_Vector4i_y::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_00110a30 == DAT_00110a34) {
      uVar3 = ( ulong )(DAT_00110a30 * 2);
      if (DAT_00110a30 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a34 = (uint)uVar3;
      DAT_00110a38 = (void*)Memory::realloc_static(DAT_00110a38, uVar3 * 8, false);
      if (DAT_00110a38 == (void*)0x0) {
         LAB_00101f58:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_00110a30;
   DAT_00110a30 = DAT_00110a30 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a38 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Vector4i_z>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Vector4i_z>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110cb0 == DAT_00110cb4) {
      uVar3 = ( ulong )(DAT_00110cb0 * 2);
      if (DAT_00110cb0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110cb4 = (uint)uVar3;
      DAT_00110cb8 = (void*)Memory::realloc_static(DAT_00110cb8, uVar3 * 0x38, false);
      if (DAT_00110cb8 == (void*)0x0) goto LAB_00102148;
   }

   uVar3 = (ulong)DAT_00110cb0;
   DAT_00110cb0 = DAT_00110cb0 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110cb8 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 2;
   *puVar1 = VariantSetGet_Vector4i_z::set;
   puVar1[1] = VariantSetGet_Vector4i_z::get;
   puVar1[2] = VariantSetGet_Vector4i_z::validated_set;
   puVar1[3] = VariantSetGet_Vector4i_z::validated_get;
   puVar1[4] = VariantSetGet_Vector4i_z::ptr_set;
   puVar1[5] = VariantSetGet_Vector4i_z::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_00110a30 == DAT_00110a34) {
      uVar3 = ( ulong )(DAT_00110a30 * 2);
      if (DAT_00110a30 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a34 = (uint)uVar3;
      DAT_00110a38 = (void*)Memory::realloc_static(DAT_00110a38, uVar3 * 8, false);
      if (DAT_00110a38 == (void*)0x0) {
         LAB_00102148:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_00110a30;
   DAT_00110a30 = DAT_00110a30 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a38 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Vector4i_w>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Vector4i_w>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110cb0 == DAT_00110cb4) {
      uVar3 = ( ulong )(DAT_00110cb0 * 2);
      if (DAT_00110cb0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110cb4 = (uint)uVar3;
      DAT_00110cb8 = (void*)Memory::realloc_static(DAT_00110cb8, uVar3 * 0x38, false);
      if (DAT_00110cb8 == (void*)0x0) goto LAB_00102338;
   }

   uVar3 = (ulong)DAT_00110cb0;
   DAT_00110cb0 = DAT_00110cb0 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110cb8 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 2;
   *puVar1 = VariantSetGet_Vector4i_w::set;
   puVar1[1] = VariantSetGet_Vector4i_w::get;
   puVar1[2] = VariantSetGet_Vector4i_w::validated_set;
   puVar1[3] = VariantSetGet_Vector4i_w::validated_get;
   puVar1[4] = VariantSetGet_Vector4i_w::ptr_set;
   puVar1[5] = VariantSetGet_Vector4i_w::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_00110a30 == DAT_00110a34) {
      uVar3 = ( ulong )(DAT_00110a30 * 2);
      if (DAT_00110a30 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a34 = (uint)uVar3;
      DAT_00110a38 = (void*)Memory::realloc_static(DAT_00110a38, uVar3 * 8, false);
      if (DAT_00110a38 == (void*)0x0) {
         LAB_00102338:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_00110a30;
   DAT_00110a30 = DAT_00110a30 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a38 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Rect2_position>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Rect2_position>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110c50 == DAT_00110c54) {
      uVar3 = ( ulong )(DAT_00110c50 * 2);
      if (DAT_00110c50 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110c54 = (uint)uVar3;
      DAT_00110c58 = (void*)Memory::realloc_static(DAT_00110c58, uVar3 * 0x38, false);
      if (DAT_00110c58 == (void*)0x0) goto LAB_00102528;
   }

   uVar3 = (ulong)DAT_00110c50;
   DAT_00110c50 = DAT_00110c50 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110c58 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 5;
   *puVar1 = VariantSetGet_Rect2_position::set;
   puVar1[1] = VariantSetGet_Rect2_position::get;
   puVar1[2] = VariantSetGet_Rect2_position::validated_set;
   puVar1[3] = VariantSetGet_Rect2_position::validated_get;
   puVar1[4] = VariantSetGet_Rect2_position::ptr_set;
   puVar1[5] = VariantSetGet_Rect2_position::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_001109d0 == DAT_001109d4) {
      uVar3 = ( ulong )(DAT_001109d0 * 2);
      if (DAT_001109d0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_001109d4 = (uint)uVar3;
      DAT_001109d8 = (void*)Memory::realloc_static(DAT_001109d8, uVar3 * 8, false);
      if (DAT_001109d8 == (void*)0x0) {
         LAB_00102528:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_001109d0;
   DAT_001109d0 = DAT_001109d0 + 1;
   StringName::StringName((StringName*)( (long)DAT_001109d8 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Rect2_size>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Rect2_size>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110c50 == DAT_00110c54) {
      uVar3 = ( ulong )(DAT_00110c50 * 2);
      if (DAT_00110c50 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110c54 = (uint)uVar3;
      DAT_00110c58 = (void*)Memory::realloc_static(DAT_00110c58, uVar3 * 0x38, false);
      if (DAT_00110c58 == (void*)0x0) goto LAB_00102718;
   }

   uVar3 = (ulong)DAT_00110c50;
   DAT_00110c50 = DAT_00110c50 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110c58 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 5;
   *puVar1 = VariantSetGet_Rect2_size::set;
   puVar1[1] = VariantSetGet_Rect2_size::get;
   puVar1[2] = VariantSetGet_Rect2_size::validated_set;
   puVar1[3] = VariantSetGet_Rect2_size::validated_get;
   puVar1[4] = VariantSetGet_Rect2_size::ptr_set;
   puVar1[5] = VariantSetGet_Rect2_size::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_001109d0 == DAT_001109d4) {
      uVar3 = ( ulong )(DAT_001109d0 * 2);
      if (DAT_001109d0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_001109d4 = (uint)uVar3;
      DAT_001109d8 = (void*)Memory::realloc_static(DAT_001109d8, uVar3 * 8, false);
      if (DAT_001109d8 == (void*)0x0) {
         LAB_00102718:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_001109d0;
   DAT_001109d0 = DAT_001109d0 + 1;
   StringName::StringName((StringName*)( (long)DAT_001109d8 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Rect2_end>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Rect2_end>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110c50 == DAT_00110c54) {
      uVar3 = ( ulong )(DAT_00110c50 * 2);
      if (DAT_00110c50 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110c54 = (uint)uVar3;
      DAT_00110c58 = (void*)Memory::realloc_static(DAT_00110c58, uVar3 * 0x38, false);
      if (DAT_00110c58 == (void*)0x0) goto LAB_00102908;
   }

   uVar3 = (ulong)DAT_00110c50;
   DAT_00110c50 = DAT_00110c50 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110c58 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 5;
   *puVar1 = VariantSetGet_Rect2_end::set;
   puVar1[1] = VariantSetGet_Rect2_end::get;
   puVar1[2] = VariantSetGet_Rect2_end::validated_set;
   puVar1[3] = VariantSetGet_Rect2_end::validated_get;
   puVar1[4] = VariantSetGet_Rect2_end::ptr_set;
   puVar1[5] = VariantSetGet_Rect2_end::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_001109d0 == DAT_001109d4) {
      uVar3 = ( ulong )(DAT_001109d0 * 2);
      if (DAT_001109d0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_001109d4 = (uint)uVar3;
      DAT_001109d8 = (void*)Memory::realloc_static(DAT_001109d8, uVar3 * 8, false);
      if (DAT_001109d8 == (void*)0x0) {
         LAB_00102908:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_001109d0;
   DAT_001109d0 = DAT_001109d0 + 1;
   StringName::StringName((StringName*)( (long)DAT_001109d8 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Rect2i_position>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Rect2i_position>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110c60 == DAT_00110c64) {
      uVar3 = ( ulong )(DAT_00110c60 * 2);
      if (DAT_00110c60 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110c64 = (uint)uVar3;
      DAT_00110c68 = (void*)Memory::realloc_static(DAT_00110c68, uVar3 * 0x38, false);
      if (DAT_00110c68 == (void*)0x0) goto LAB_00102af8;
   }

   uVar3 = (ulong)DAT_00110c60;
   DAT_00110c60 = DAT_00110c60 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110c68 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 6;
   *puVar1 = VariantSetGet_Rect2i_position::set;
   puVar1[1] = VariantSetGet_Rect2i_position::get;
   puVar1[2] = VariantSetGet_Rect2i_position::validated_set;
   puVar1[3] = VariantSetGet_Rect2i_position::validated_get;
   puVar1[4] = VariantSetGet_Rect2i_position::ptr_set;
   puVar1[5] = VariantSetGet_Rect2i_position::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_001109e0 == DAT_001109e4) {
      uVar3 = ( ulong )(DAT_001109e0 * 2);
      if (DAT_001109e0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_001109e4 = (uint)uVar3;
      DAT_001109e8 = (void*)Memory::realloc_static(DAT_001109e8, uVar3 * 8, false);
      if (DAT_001109e8 == (void*)0x0) {
         LAB_00102af8:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_001109e0;
   DAT_001109e0 = DAT_001109e0 + 1;
   StringName::StringName((StringName*)( (long)DAT_001109e8 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Rect2i_size>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Rect2i_size>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110c60 == DAT_00110c64) {
      uVar3 = ( ulong )(DAT_00110c60 * 2);
      if (DAT_00110c60 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110c64 = (uint)uVar3;
      DAT_00110c68 = (void*)Memory::realloc_static(DAT_00110c68, uVar3 * 0x38, false);
      if (DAT_00110c68 == (void*)0x0) goto LAB_00102ce8;
   }

   uVar3 = (ulong)DAT_00110c60;
   DAT_00110c60 = DAT_00110c60 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110c68 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 6;
   *puVar1 = VariantSetGet_Rect2i_size::set;
   puVar1[1] = VariantSetGet_Rect2i_size::get;
   puVar1[2] = VariantSetGet_Rect2i_size::validated_set;
   puVar1[3] = VariantSetGet_Rect2i_size::validated_get;
   puVar1[4] = VariantSetGet_Rect2i_size::ptr_set;
   puVar1[5] = VariantSetGet_Rect2i_size::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_001109e0 == DAT_001109e4) {
      uVar3 = ( ulong )(DAT_001109e0 * 2);
      if (DAT_001109e0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_001109e4 = (uint)uVar3;
      DAT_001109e8 = (void*)Memory::realloc_static(DAT_001109e8, uVar3 * 8, false);
      if (DAT_001109e8 == (void*)0x0) {
         LAB_00102ce8:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_001109e0;
   DAT_001109e0 = DAT_001109e0 + 1;
   StringName::StringName((StringName*)( (long)DAT_001109e8 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Rect2i_end>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Rect2i_end>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110c60 == DAT_00110c64) {
      uVar3 = ( ulong )(DAT_00110c60 * 2);
      if (DAT_00110c60 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110c64 = (uint)uVar3;
      DAT_00110c68 = (void*)Memory::realloc_static(DAT_00110c68, uVar3 * 0x38, false);
      if (DAT_00110c68 == (void*)0x0) goto LAB_00102ed8;
   }

   uVar3 = (ulong)DAT_00110c60;
   DAT_00110c60 = DAT_00110c60 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110c68 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 6;
   *puVar1 = VariantSetGet_Rect2i_end::set;
   puVar1[1] = VariantSetGet_Rect2i_end::get;
   puVar1[2] = VariantSetGet_Rect2i_end::validated_set;
   puVar1[3] = VariantSetGet_Rect2i_end::validated_get;
   puVar1[4] = VariantSetGet_Rect2i_end::ptr_set;
   puVar1[5] = VariantSetGet_Rect2i_end::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_001109e0 == DAT_001109e4) {
      uVar3 = ( ulong )(DAT_001109e0 * 2);
      if (DAT_001109e0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_001109e4 = (uint)uVar3;
      DAT_001109e8 = (void*)Memory::realloc_static(DAT_001109e8, uVar3 * 8, false);
      if (DAT_001109e8 == (void*)0x0) {
         LAB_00102ed8:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_001109e0;
   DAT_001109e0 = DAT_001109e0 + 1;
   StringName::StringName((StringName*)( (long)DAT_001109e8 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_AABB_position>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_AABB_position>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110ce0 == DAT_00110ce4) {
      uVar3 = ( ulong )(DAT_00110ce0 * 2);
      if (DAT_00110ce0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110ce4 = (uint)uVar3;
      DAT_00110ce8 = (void*)Memory::realloc_static(DAT_00110ce8, uVar3 * 0x38, false);
      if (DAT_00110ce8 == (void*)0x0) goto LAB_001030c8;
   }

   uVar3 = (ulong)DAT_00110ce0;
   DAT_00110ce0 = DAT_00110ce0 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110ce8 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 9;
   *puVar1 = VariantSetGet_AABB_position::set;
   puVar1[1] = VariantSetGet_AABB_position::get;
   puVar1[2] = VariantSetGet_AABB_position::validated_set;
   puVar1[3] = VariantSetGet_AABB_position::validated_get;
   puVar1[4] = VariantSetGet_AABB_position::ptr_set;
   puVar1[5] = VariantSetGet_AABB_position::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_00110a60 == DAT_00110a64) {
      uVar3 = ( ulong )(DAT_00110a60 * 2);
      if (DAT_00110a60 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a64 = (uint)uVar3;
      DAT_00110a68 = (void*)Memory::realloc_static(DAT_00110a68, uVar3 * 8, false);
      if (DAT_00110a68 == (void*)0x0) {
         LAB_001030c8:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_00110a60;
   DAT_00110a60 = DAT_00110a60 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a68 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_AABB_size>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_AABB_size>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110ce0 == DAT_00110ce4) {
      uVar3 = ( ulong )(DAT_00110ce0 * 2);
      if (DAT_00110ce0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110ce4 = (uint)uVar3;
      DAT_00110ce8 = (void*)Memory::realloc_static(DAT_00110ce8, uVar3 * 0x38, false);
      if (DAT_00110ce8 == (void*)0x0) goto LAB_001032b8;
   }

   uVar3 = (ulong)DAT_00110ce0;
   DAT_00110ce0 = DAT_00110ce0 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110ce8 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 9;
   *puVar1 = VariantSetGet_AABB_size::set;
   puVar1[1] = VariantSetGet_AABB_size::get;
   puVar1[2] = VariantSetGet_AABB_size::validated_set;
   puVar1[3] = VariantSetGet_AABB_size::validated_get;
   puVar1[4] = VariantSetGet_AABB_size::ptr_set;
   puVar1[5] = VariantSetGet_AABB_size::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_00110a60 == DAT_00110a64) {
      uVar3 = ( ulong )(DAT_00110a60 * 2);
      if (DAT_00110a60 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a64 = (uint)uVar3;
      DAT_00110a68 = (void*)Memory::realloc_static(DAT_00110a68, uVar3 * 8, false);
      if (DAT_00110a68 == (void*)0x0) {
         LAB_001032b8:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_00110a60;
   DAT_00110a60 = DAT_00110a60 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a68 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_AABB_end>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_AABB_end>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110ce0 == DAT_00110ce4) {
      uVar3 = ( ulong )(DAT_00110ce0 * 2);
      if (DAT_00110ce0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110ce4 = (uint)uVar3;
      DAT_00110ce8 = (void*)Memory::realloc_static(DAT_00110ce8, uVar3 * 0x38, false);
      if (DAT_00110ce8 == (void*)0x0) goto LAB_001034a8;
   }

   uVar3 = (ulong)DAT_00110ce0;
   DAT_00110ce0 = DAT_00110ce0 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110ce8 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 9;
   *puVar1 = VariantSetGet_AABB_end::set;
   puVar1[1] = VariantSetGet_AABB_end::get;
   puVar1[2] = VariantSetGet_AABB_end::validated_set;
   puVar1[3] = VariantSetGet_AABB_end::validated_get;
   puVar1[4] = VariantSetGet_AABB_end::ptr_set;
   puVar1[5] = VariantSetGet_AABB_end::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_00110a60 == DAT_00110a64) {
      uVar3 = ( ulong )(DAT_00110a60 * 2);
      if (DAT_00110a60 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a64 = (uint)uVar3;
      DAT_00110a68 = (void*)Memory::realloc_static(DAT_00110a68, uVar3 * 8, false);
      if (DAT_00110a68 == (void*)0x0) {
         LAB_001034a8:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_00110a60;
   DAT_00110a60 = DAT_00110a60 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a68 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Transform2D_x>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Transform2D_x>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110c90 == DAT_00110c94) {
      uVar3 = ( ulong )(DAT_00110c90 * 2);
      if (DAT_00110c90 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110c94 = (uint)uVar3;
      DAT_00110c98 = (void*)Memory::realloc_static(DAT_00110c98, uVar3 * 0x38, false);
      if (DAT_00110c98 == (void*)0x0) goto LAB_00103698;
   }

   uVar3 = (ulong)DAT_00110c90;
   DAT_00110c90 = DAT_00110c90 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110c98 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 5;
   *puVar1 = VariantSetGet_Transform2D_x::set;
   puVar1[1] = VariantSetGet_Transform2D_x::get;
   puVar1[2] = VariantSetGet_Transform2D_x::validated_set;
   puVar1[3] = VariantSetGet_Transform2D_x::validated_get;
   puVar1[4] = VariantSetGet_Transform2D_x::ptr_set;
   puVar1[5] = VariantSetGet_Transform2D_x::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_00110a10 == DAT_00110a14) {
      uVar3 = ( ulong )(DAT_00110a10 * 2);
      if (DAT_00110a10 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a14 = (uint)uVar3;
      DAT_00110a18 = (void*)Memory::realloc_static(DAT_00110a18, uVar3 * 8, false);
      if (DAT_00110a18 == (void*)0x0) {
         LAB_00103698:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_00110a10;
   DAT_00110a10 = DAT_00110a10 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a18 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Transform2D_y>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Transform2D_y>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110c90 == DAT_00110c94) {
      uVar3 = ( ulong )(DAT_00110c90 * 2);
      if (DAT_00110c90 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110c94 = (uint)uVar3;
      DAT_00110c98 = (void*)Memory::realloc_static(DAT_00110c98, uVar3 * 0x38, false);
      if (DAT_00110c98 == (void*)0x0) goto LAB_00103888;
   }

   uVar3 = (ulong)DAT_00110c90;
   DAT_00110c90 = DAT_00110c90 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110c98 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 5;
   *puVar1 = VariantSetGet_Transform2D_y::set;
   puVar1[1] = VariantSetGet_Transform2D_y::get;
   puVar1[2] = VariantSetGet_Transform2D_y::validated_set;
   puVar1[3] = VariantSetGet_Transform2D_y::validated_get;
   puVar1[4] = VariantSetGet_Transform2D_y::ptr_set;
   puVar1[5] = VariantSetGet_Transform2D_y::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_00110a10 == DAT_00110a14) {
      uVar3 = ( ulong )(DAT_00110a10 * 2);
      if (DAT_00110a10 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a14 = (uint)uVar3;
      DAT_00110a18 = (void*)Memory::realloc_static(DAT_00110a18, uVar3 * 8, false);
      if (DAT_00110a18 == (void*)0x0) {
         LAB_00103888:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_00110a10;
   DAT_00110a10 = DAT_00110a10 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a18 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Transform2D_origin>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Transform2D_origin>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110c90 == DAT_00110c94) {
      uVar3 = ( ulong )(DAT_00110c90 * 2);
      if (DAT_00110c90 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110c94 = (uint)uVar3;
      DAT_00110c98 = (void*)Memory::realloc_static(DAT_00110c98, uVar3 * 0x38, false);
      if (DAT_00110c98 == (void*)0x0) goto LAB_00103a78;
   }

   uVar3 = (ulong)DAT_00110c90;
   DAT_00110c90 = DAT_00110c90 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110c98 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 5;
   *puVar1 = VariantSetGet_Transform2D_origin::set;
   puVar1[1] = VariantSetGet_Transform2D_origin::get;
   puVar1[2] = VariantSetGet_Transform2D_origin::validated_set;
   puVar1[3] = VariantSetGet_Transform2D_origin::validated_get;
   puVar1[4] = VariantSetGet_Transform2D_origin::ptr_set;
   puVar1[5] = VariantSetGet_Transform2D_origin::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_00110a10 == DAT_00110a14) {
      uVar3 = ( ulong )(DAT_00110a10 * 2);
      if (DAT_00110a10 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a14 = (uint)uVar3;
      DAT_00110a18 = (void*)Memory::realloc_static(DAT_00110a18, uVar3 * 8, false);
      if (DAT_00110a18 == (void*)0x0) {
         LAB_00103a78:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_00110a10;
   DAT_00110a10 = DAT_00110a10 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a18 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Plane_x>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Plane_x>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110cc0 == DAT_00110cc4) {
      uVar3 = ( ulong )(DAT_00110cc0 * 2);
      if (DAT_00110cc0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110cc4 = (uint)uVar3;
      DAT_00110cc8 = (void*)Memory::realloc_static(DAT_00110cc8, uVar3 * 0x38, false);
      if (DAT_00110cc8 == (void*)0x0) goto LAB_00103c68;
   }

   uVar3 = (ulong)DAT_00110cc0;
   DAT_00110cc0 = DAT_00110cc0 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110cc8 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 3;
   *puVar1 = VariantSetGet_Plane_x::set;
   puVar1[1] = VariantSetGet_Plane_x::get;
   puVar1[2] = VariantSetGet_Plane_x::validated_set;
   puVar1[3] = VariantSetGet_Plane_x::validated_get;
   puVar1[4] = VariantSetGet_Plane_x::ptr_set;
   puVar1[5] = VariantSetGet_Plane_x::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_00110a40 == DAT_00110a44) {
      uVar3 = ( ulong )(DAT_00110a40 * 2);
      if (DAT_00110a40 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a44 = (uint)uVar3;
      DAT_00110a48 = (void*)Memory::realloc_static(DAT_00110a48, uVar3 * 8, false);
      if (DAT_00110a48 == (void*)0x0) {
         LAB_00103c68:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_00110a40;
   DAT_00110a40 = DAT_00110a40 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a48 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Plane_y>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Plane_y>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110cc0 == DAT_00110cc4) {
      uVar3 = ( ulong )(DAT_00110cc0 * 2);
      if (DAT_00110cc0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110cc4 = (uint)uVar3;
      DAT_00110cc8 = (void*)Memory::realloc_static(DAT_00110cc8, uVar3 * 0x38, false);
      if (DAT_00110cc8 == (void*)0x0) goto LAB_00103e58;
   }

   uVar3 = (ulong)DAT_00110cc0;
   DAT_00110cc0 = DAT_00110cc0 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110cc8 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 3;
   *puVar1 = VariantSetGet_Plane_y::set;
   puVar1[1] = VariantSetGet_Plane_y::get;
   puVar1[2] = VariantSetGet_Plane_y::validated_set;
   puVar1[3] = VariantSetGet_Plane_y::validated_get;
   puVar1[4] = VariantSetGet_Plane_y::ptr_set;
   puVar1[5] = VariantSetGet_Plane_y::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_00110a40 == DAT_00110a44) {
      uVar3 = ( ulong )(DAT_00110a40 * 2);
      if (DAT_00110a40 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a44 = (uint)uVar3;
      DAT_00110a48 = (void*)Memory::realloc_static(DAT_00110a48, uVar3 * 8, false);
      if (DAT_00110a48 == (void*)0x0) {
         LAB_00103e58:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_00110a40;
   DAT_00110a40 = DAT_00110a40 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a48 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Plane_z>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Plane_z>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110cc0 == DAT_00110cc4) {
      uVar3 = ( ulong )(DAT_00110cc0 * 2);
      if (DAT_00110cc0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110cc4 = (uint)uVar3;
      DAT_00110cc8 = (void*)Memory::realloc_static(DAT_00110cc8, uVar3 * 0x38, false);
      if (DAT_00110cc8 == (void*)0x0) goto LAB_00104048;
   }

   uVar3 = (ulong)DAT_00110cc0;
   DAT_00110cc0 = DAT_00110cc0 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110cc8 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 3;
   *puVar1 = VariantSetGet_Plane_z::set;
   puVar1[1] = VariantSetGet_Plane_z::get;
   puVar1[2] = VariantSetGet_Plane_z::validated_set;
   puVar1[3] = VariantSetGet_Plane_z::validated_get;
   puVar1[4] = VariantSetGet_Plane_z::ptr_set;
   puVar1[5] = VariantSetGet_Plane_z::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_00110a40 == DAT_00110a44) {
      uVar3 = ( ulong )(DAT_00110a40 * 2);
      if (DAT_00110a40 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a44 = (uint)uVar3;
      DAT_00110a48 = (void*)Memory::realloc_static(DAT_00110a48, uVar3 * 8, false);
      if (DAT_00110a48 == (void*)0x0) {
         LAB_00104048:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_00110a40;
   DAT_00110a40 = DAT_00110a40 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a48 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Plane_d>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Plane_d>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110cc0 == DAT_00110cc4) {
      uVar3 = ( ulong )(DAT_00110cc0 * 2);
      if (DAT_00110cc0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110cc4 = (uint)uVar3;
      DAT_00110cc8 = (void*)Memory::realloc_static(DAT_00110cc8, uVar3 * 0x38, false);
      if (DAT_00110cc8 == (void*)0x0) goto LAB_00104238;
   }

   uVar3 = (ulong)DAT_00110cc0;
   DAT_00110cc0 = DAT_00110cc0 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110cc8 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 3;
   *puVar1 = VariantSetGet_Plane_d::set;
   puVar1[1] = VariantSetGet_Plane_d::get;
   puVar1[2] = VariantSetGet_Plane_d::validated_set;
   puVar1[3] = VariantSetGet_Plane_d::validated_get;
   puVar1[4] = VariantSetGet_Plane_d::ptr_set;
   puVar1[5] = VariantSetGet_Plane_d::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_00110a40 == DAT_00110a44) {
      uVar3 = ( ulong )(DAT_00110a40 * 2);
      if (DAT_00110a40 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a44 = (uint)uVar3;
      DAT_00110a48 = (void*)Memory::realloc_static(DAT_00110a48, uVar3 * 8, false);
      if (DAT_00110a48 == (void*)0x0) {
         LAB_00104238:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_00110a40;
   DAT_00110a40 = DAT_00110a40 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a48 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Plane_normal>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Plane_normal>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110cc0 == DAT_00110cc4) {
      uVar3 = ( ulong )(DAT_00110cc0 * 2);
      if (DAT_00110cc0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110cc4 = (uint)uVar3;
      DAT_00110cc8 = (void*)Memory::realloc_static(DAT_00110cc8, uVar3 * 0x38, false);
      if (DAT_00110cc8 == (void*)0x0) goto LAB_00104428;
   }

   uVar3 = (ulong)DAT_00110cc0;
   DAT_00110cc0 = DAT_00110cc0 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110cc8 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 9;
   *puVar1 = VariantSetGet_Plane_normal::set;
   puVar1[1] = VariantSetGet_Plane_normal::get;
   puVar1[2] = VariantSetGet_Plane_normal::validated_set;
   puVar1[3] = VariantSetGet_Plane_normal::validated_get;
   puVar1[4] = VariantSetGet_Plane_normal::ptr_set;
   puVar1[5] = VariantSetGet_Plane_normal::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_00110a40 == DAT_00110a44) {
      uVar3 = ( ulong )(DAT_00110a40 * 2);
      if (DAT_00110a40 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a44 = (uint)uVar3;
      DAT_00110a48 = (void*)Memory::realloc_static(DAT_00110a48, uVar3 * 8, false);
      if (DAT_00110a48 == (void*)0x0) {
         LAB_00104428:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_00110a40;
   DAT_00110a40 = DAT_00110a40 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a48 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Quaternion_x>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Quaternion_x>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110cd0 == DAT_00110cd4) {
      uVar3 = ( ulong )(DAT_00110cd0 * 2);
      if (DAT_00110cd0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110cd4 = (uint)uVar3;
      DAT_00110cd8 = (void*)Memory::realloc_static(DAT_00110cd8, uVar3 * 0x38, false);
      if (DAT_00110cd8 == (void*)0x0) goto LAB_00104618;
   }

   uVar3 = (ulong)DAT_00110cd0;
   DAT_00110cd0 = DAT_00110cd0 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110cd8 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 3;
   *puVar1 = VariantSetGet_Quaternion_x::set;
   puVar1[1] = VariantSetGet_Quaternion_x::get;
   puVar1[2] = VariantSetGet_Quaternion_x::validated_set;
   puVar1[3] = VariantSetGet_Quaternion_x::validated_get;
   puVar1[4] = VariantSetGet_Quaternion_x::ptr_set;
   puVar1[5] = VariantSetGet_Quaternion_x::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_00110a50 == DAT_00110a54) {
      uVar3 = ( ulong )(DAT_00110a50 * 2);
      if (DAT_00110a50 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a54 = (uint)uVar3;
      DAT_00110a58 = (void*)Memory::realloc_static(DAT_00110a58, uVar3 * 8, false);
      if (DAT_00110a58 == (void*)0x0) {
         LAB_00104618:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_00110a50;
   DAT_00110a50 = DAT_00110a50 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a58 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Quaternion_y>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Quaternion_y>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110cd0 == DAT_00110cd4) {
      uVar3 = ( ulong )(DAT_00110cd0 * 2);
      if (DAT_00110cd0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110cd4 = (uint)uVar3;
      DAT_00110cd8 = (void*)Memory::realloc_static(DAT_00110cd8, uVar3 * 0x38, false);
      if (DAT_00110cd8 == (void*)0x0) goto LAB_00104808;
   }

   uVar3 = (ulong)DAT_00110cd0;
   DAT_00110cd0 = DAT_00110cd0 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110cd8 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 3;
   *puVar1 = VariantSetGet_Quaternion_y::set;
   puVar1[1] = VariantSetGet_Quaternion_y::get;
   puVar1[2] = VariantSetGet_Quaternion_y::validated_set;
   puVar1[3] = VariantSetGet_Quaternion_y::validated_get;
   puVar1[4] = VariantSetGet_Quaternion_y::ptr_set;
   puVar1[5] = VariantSetGet_Quaternion_y::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_00110a50 == DAT_00110a54) {
      uVar3 = ( ulong )(DAT_00110a50 * 2);
      if (DAT_00110a50 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a54 = (uint)uVar3;
      DAT_00110a58 = (void*)Memory::realloc_static(DAT_00110a58, uVar3 * 8, false);
      if (DAT_00110a58 == (void*)0x0) {
         LAB_00104808:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_00110a50;
   DAT_00110a50 = DAT_00110a50 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a58 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Quaternion_z>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Quaternion_z>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110cd0 == DAT_00110cd4) {
      uVar3 = ( ulong )(DAT_00110cd0 * 2);
      if (DAT_00110cd0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110cd4 = (uint)uVar3;
      DAT_00110cd8 = (void*)Memory::realloc_static(DAT_00110cd8, uVar3 * 0x38, false);
      if (DAT_00110cd8 == (void*)0x0) goto LAB_001049f8;
   }

   uVar3 = (ulong)DAT_00110cd0;
   DAT_00110cd0 = DAT_00110cd0 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110cd8 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 3;
   *puVar1 = VariantSetGet_Quaternion_z::set;
   puVar1[1] = VariantSetGet_Quaternion_z::get;
   puVar1[2] = VariantSetGet_Quaternion_z::validated_set;
   puVar1[3] = VariantSetGet_Quaternion_z::validated_get;
   puVar1[4] = VariantSetGet_Quaternion_z::ptr_set;
   puVar1[5] = VariantSetGet_Quaternion_z::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_00110a50 == DAT_00110a54) {
      uVar3 = ( ulong )(DAT_00110a50 * 2);
      if (DAT_00110a50 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a54 = (uint)uVar3;
      DAT_00110a58 = (void*)Memory::realloc_static(DAT_00110a58, uVar3 * 8, false);
      if (DAT_00110a58 == (void*)0x0) {
         LAB_001049f8:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_00110a50;
   DAT_00110a50 = DAT_00110a50 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a58 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Quaternion_w>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Quaternion_w>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110cd0 == DAT_00110cd4) {
      uVar3 = ( ulong )(DAT_00110cd0 * 2);
      if (DAT_00110cd0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110cd4 = (uint)uVar3;
      DAT_00110cd8 = (void*)Memory::realloc_static(DAT_00110cd8, uVar3 * 0x38, false);
      if (DAT_00110cd8 == (void*)0x0) goto LAB_00104be8;
   }

   uVar3 = (ulong)DAT_00110cd0;
   DAT_00110cd0 = DAT_00110cd0 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110cd8 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 3;
   *puVar1 = VariantSetGet_Quaternion_w::set;
   puVar1[1] = VariantSetGet_Quaternion_w::get;
   puVar1[2] = VariantSetGet_Quaternion_w::validated_set;
   puVar1[3] = VariantSetGet_Quaternion_w::validated_get;
   puVar1[4] = VariantSetGet_Quaternion_w::ptr_set;
   puVar1[5] = VariantSetGet_Quaternion_w::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_00110a50 == DAT_00110a54) {
      uVar3 = ( ulong )(DAT_00110a50 * 2);
      if (DAT_00110a50 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a54 = (uint)uVar3;
      DAT_00110a58 = (void*)Memory::realloc_static(DAT_00110a58, uVar3 * 8, false);
      if (DAT_00110a58 == (void*)0x0) {
         LAB_00104be8:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_00110a50;
   DAT_00110a50 = DAT_00110a50 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a58 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Basis_x>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Basis_x>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110cf0 == DAT_00110cf4) {
      uVar3 = ( ulong )(DAT_00110cf0 * 2);
      if (DAT_00110cf0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110cf4 = (uint)uVar3;
      DAT_00110cf8 = (void*)Memory::realloc_static(DAT_00110cf8, uVar3 * 0x38, false);
      if (DAT_00110cf8 == (void*)0x0) goto LAB_00104dd8;
   }

   uVar3 = (ulong)DAT_00110cf0;
   DAT_00110cf0 = DAT_00110cf0 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110cf8 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 9;
   *puVar1 = VariantSetGet_Basis_x::set;
   puVar1[1] = VariantSetGet_Basis_x::get;
   puVar1[2] = VariantSetGet_Basis_x::validated_set;
   puVar1[3] = VariantSetGet_Basis_x::validated_get;
   puVar1[4] = VariantSetGet_Basis_x::ptr_set;
   puVar1[5] = VariantSetGet_Basis_x::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_00110a70 == DAT_00110a74) {
      uVar3 = ( ulong )(DAT_00110a70 * 2);
      if (DAT_00110a70 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a74 = (uint)uVar3;
      DAT_00110a78 = (void*)Memory::realloc_static(DAT_00110a78, uVar3 * 8, false);
      if (DAT_00110a78 == (void*)0x0) {
         LAB_00104dd8:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_00110a70;
   DAT_00110a70 = DAT_00110a70 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a78 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void register_member<VariantSetGet_Basis_y>(Variant::Type, StringName const&) [clone
   .constprop.0] */void register_member<VariantSetGet_Basis_y>(StringName *param_1) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (DAT_00110cf0 == DAT_00110cf4) {
      uVar3 = ( ulong )(DAT_00110cf0 * 2);
      if (DAT_00110cf0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110cf4 = (uint)uVar3;
      DAT_00110cf8 = (void*)Memory::realloc_static(DAT_00110cf8, uVar3 * 0x38, false);
      if (DAT_00110cf8 == (void*)0x0) goto LAB_00104fc8;
   }

   uVar3 = (ulong)DAT_00110cf0;
   DAT_00110cf0 = DAT_00110cf0 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110cf8 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 9;
   *puVar1 = VariantSetGet_Basis_y::set;
   puVar1[1] = VariantSetGet_Basis_y::get;
   puVar1[2] = VariantSetGet_Basis_y::validated_set;
   puVar1[3] = VariantSetGet_Basis_y::validated_get;
   puVar1[4] = VariantSetGet_Basis_y::ptr_set;
   puVar1[5] = VariantSetGet_Basis_y::ptr_get;
   StringName::StringName((StringName*)&local_28, param_1);
   if (DAT_00110a70 == DAT_00110a74) {
      uVar3 = ( ulong )(DAT_00110a70 * 2);
      if (DAT_00110a70 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a74 = (uint)uVar3;
      DAT_00110a78 = (void*)Memory::realloc_static(DAT_00110a78, uVar3 * 8, false);
      if (DAT_00110a78 == (void*)0x0) {
         LAB_00104fc8:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_00110a70;
   DAT_00110a70 = DAT_00110a70 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a78 + uVar3 * 8 ), (StringName*)&local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */void CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this) {
   long *plVar1;
   size_t __n;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   __n = *(size_t*)( *(long*)this + -8 );
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
      *puVar4 = 1;
      puVar4[1] = __n;
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
/* CowData<Vector3>::_copy_on_write() [clone .isra.0] */void CowData<Vector3>::_copy_on_write(CowData<Vector3> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   size_t __n;
   ulong uVar5;
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
/* CowData<Vector4>::_copy_on_write() [clone .isra.0] */void CowData<Vector4>::_copy_on_write(CowData<Vector4> *this) {
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
/* CowData<long>::_copy_on_write() [clone .isra.0] */void CowData<long>::_copy_on_write(CowData<long> *this) {
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
/* CowData<double>::_copy_on_write() [clone .isra.0] */void CowData<double>::_copy_on_write(CowData<double> *this) {
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
/* CowData<float>::_copy_on_write() [clone .isra.0] */void CowData<float>::_copy_on_write(CowData<float> *this) {
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
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* register_named_setters_getters() */void register_named_setters_getters(void) {
   undefined8 *puVar1;
   code *pcVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_190;
   long local_188;
   long local_180;
   long local_178;
   long local_170;
   long local_168;
   long local_160;
   long local_158;
   long local_150;
   long local_148;
   long local_140;
   long local_138;
   long local_130;
   long local_128;
   long local_120;
   long local_118;
   long local_110;
   long local_108;
   long local_100;
   long local_f8;
   long local_f0;
   long local_e8;
   long local_e0;
   long local_d8;
   long local_d0;
   long local_c8;
   long local_c0;
   long local_b8;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   long local_78;
   long local_70;
   long local_68;
   long local_60;
   long local_58;
   long local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_48, "x", false);
   register_member<VariantSetGet_Vector2_x>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "y", false);
   register_member<VariantSetGet_Vector2_y>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "x", false);
   register_member<VariantSetGet_Vector2i_x>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "y", false);
   register_member<VariantSetGet_Vector2i_y>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "x", false);
   register_member<VariantSetGet_Vector3_x>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "y", false);
   register_member<VariantSetGet_Vector3_y>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "z", false);
   register_member<VariantSetGet_Vector3_z>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "x", false);
   register_member<VariantSetGet_Vector3i_x>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "y", false);
   register_member<VariantSetGet_Vector3i_y>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "z", false);
   register_member<VariantSetGet_Vector3i_z>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "x", false);
   register_member<VariantSetGet_Vector4_x>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "y", false);
   register_member<VariantSetGet_Vector4_y>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "z", false);
   register_member<VariantSetGet_Vector4_z>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "w", false);
   register_member<VariantSetGet_Vector4_w>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "x", false);
   register_member<VariantSetGet_Vector4i_x>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "y", false);
   register_member<VariantSetGet_Vector4i_y>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "z", false);
   register_member<VariantSetGet_Vector4i_z>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "w", false);
   register_member<VariantSetGet_Vector4i_w>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "position", false);
   register_member<VariantSetGet_Rect2_position>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "size", false);
   register_member<VariantSetGet_Rect2_size>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "end", false);
   register_member<VariantSetGet_Rect2_end>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "position", false);
   register_member<VariantSetGet_Rect2i_position>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "size", false);
   register_member<VariantSetGet_Rect2i_size>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "end", false);
   register_member<VariantSetGet_Rect2i_end>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "position", false);
   register_member<VariantSetGet_AABB_position>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "size", false);
   register_member<VariantSetGet_AABB_size>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "end", false);
   register_member<VariantSetGet_AABB_end>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "x", false);
   register_member<VariantSetGet_Transform2D_x>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "y", false);
   register_member<VariantSetGet_Transform2D_y>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "origin", false);
   register_member<VariantSetGet_Transform2D_origin>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "x", false);
   register_member<VariantSetGet_Plane_x>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "y", false);
   register_member<VariantSetGet_Plane_y>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "z", false);
   register_member<VariantSetGet_Plane_z>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "d", false);
   register_member<VariantSetGet_Plane_d>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "normal", false);
   register_member<VariantSetGet_Plane_normal>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "x", false);
   register_member<VariantSetGet_Quaternion_x>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "y", false);
   register_member<VariantSetGet_Quaternion_y>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "z", false);
   register_member<VariantSetGet_Quaternion_z>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "w", false);
   register_member<VariantSetGet_Quaternion_w>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "x", false);
   register_member<VariantSetGet_Basis_x>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "y", false);
   register_member<VariantSetGet_Basis_y>((StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_190, "z", false);
   if (DAT_00110cf0 == DAT_00110cf4) {
      uVar3 = ( ulong )(DAT_00110cf0 * 2);
      if (DAT_00110cf0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110cf4 = (uint)uVar3;
      DAT_00110cf8 = (void*)Memory::realloc_static(DAT_00110cf8, uVar3 * 0x38, false);
      if (DAT_00110cf8 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110cf0;
   DAT_00110cf0 = DAT_00110cf0 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110cf8 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 9;
   *puVar1 = VariantSetGet_Basis_z::set;
   puVar1[1] = VariantSetGet_Basis_z::get;
   puVar1[2] = VariantSetGet_Basis_z::validated_set;
   puVar1[3] = VariantSetGet_Basis_z::validated_get;
   puVar1[4] = VariantSetGet_Basis_z::ptr_set;
   puVar1[5] = VariantSetGet_Basis_z::ptr_get;
   StringName::StringName((StringName*)&local_e8, (StringName*)&local_190);
   if (DAT_00110a70 == DAT_00110a74) {
      uVar3 = ( ulong )(DAT_00110a70 * 2);
      if (DAT_00110a70 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a74 = (uint)uVar3;
      DAT_00110a78 = (void*)Memory::realloc_static(DAT_00110a78, uVar3 * 8, false);
      if (DAT_00110a78 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110a70;
   DAT_00110a70 = DAT_00110a70 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a78 + uVar3 * 8 ), (StringName*)&local_e8);
   if (( StringName::configured != '\0' ) && ( ( ( local_e8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_190 != 0 ) ) )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_188, "basis", false);
   if (DAT_00110d00 == DAT_00110d04) {
      uVar3 = ( ulong )(DAT_00110d00 * 2);
      if (DAT_00110d00 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110d04 = (uint)uVar3;
      DAT_00110d08 = (void*)Memory::realloc_static(DAT_00110d08, uVar3 * 0x38, false);
      if (DAT_00110d08 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110d00;
   DAT_00110d00 = DAT_00110d00 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110d08 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 0x11;
   *puVar1 = VariantSetGet_Transform3D_basis::set;
   puVar1[1] = VariantSetGet_Transform3D_basis::get;
   puVar1[2] = VariantSetGet_Transform3D_basis::validated_set;
   puVar1[3] = VariantSetGet_Transform3D_basis::validated_get;
   puVar1[4] = VariantSetGet_Transform3D_basis::ptr_set;
   puVar1[5] = VariantSetGet_Transform3D_basis::ptr_get;
   StringName::StringName((StringName*)&local_e0, (StringName*)&local_188);
   if (DAT_00110a80 == DAT_00110a84) {
      uVar3 = ( ulong )(DAT_00110a80 * 2);
      if (DAT_00110a80 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a84 = (uint)uVar3;
      DAT_00110a88 = (void*)Memory::realloc_static(DAT_00110a88, uVar3 * 8, false);
      if (DAT_00110a88 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110a80;
   DAT_00110a80 = DAT_00110a80 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a88 + uVar3 * 8 ), (StringName*)&local_e0);
   if (( ( StringName::configured != '\0' ) && ( ( local_e0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_188 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_180, "origin", false);
   if (DAT_00110d00 == DAT_00110d04) {
      uVar3 = ( ulong )(DAT_00110d00 * 2);
      if (DAT_00110d00 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110d04 = (uint)uVar3;
      DAT_00110d08 = (void*)Memory::realloc_static(DAT_00110d08, uVar3 * 0x38, false);
      if (DAT_00110d08 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110d00;
   DAT_00110d00 = DAT_00110d00 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110d08 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 9;
   *puVar1 = VariantSetGet_Transform3D_origin::set;
   puVar1[1] = VariantSetGet_Transform3D_origin::get;
   puVar1[2] = VariantSetGet_Transform3D_origin::validated_set;
   puVar1[3] = VariantSetGet_Transform3D_origin::validated_get;
   puVar1[4] = VariantSetGet_Transform3D_origin::ptr_set;
   puVar1[5] = VariantSetGet_Transform3D_origin::ptr_get;
   StringName::StringName((StringName*)&local_d8, (StringName*)&local_180);
   if (DAT_00110a80 == DAT_00110a84) {
      uVar3 = ( ulong )(DAT_00110a80 * 2);
      if (DAT_00110a80 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a84 = (uint)uVar3;
      DAT_00110a88 = (void*)Memory::realloc_static(DAT_00110a88, uVar3 * 8, false);
      if (DAT_00110a88 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110a80;
   DAT_00110a80 = DAT_00110a80 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a88 + uVar3 * 8 ), (StringName*)&local_d8);
   if (( ( StringName::configured != '\0' ) && ( ( local_d8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_180 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_178, "x", false);
   if (DAT_00110d10 == DAT_00110d14) {
      uVar3 = ( ulong )(DAT_00110d10 * 2);
      if (DAT_00110d10 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110d14 = (uint)uVar3;
      DAT_00110d18 = (void*)Memory::realloc_static(DAT_00110d18, uVar3 * 0x38, false);
      if (DAT_00110d18 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110d10;
   DAT_00110d10 = DAT_00110d10 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110d18 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 0xc;
   *puVar1 = VariantSetGet_Projection_x::set;
   puVar1[1] = VariantSetGet_Projection_x::get;
   puVar1[2] = VariantSetGet_Projection_x::validated_set;
   puVar1[3] = VariantSetGet_Projection_x::validated_get;
   puVar1[4] = VariantSetGet_Projection_x::ptr_set;
   puVar1[5] = VariantSetGet_Projection_x::ptr_get;
   StringName::StringName((StringName*)&local_d0, (StringName*)&local_178);
   if (DAT_00110a90 == DAT_00110a94) {
      uVar3 = ( ulong )(DAT_00110a90 * 2);
      if (DAT_00110a90 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a94 = (uint)uVar3;
      DAT_00110a98 = (void*)Memory::realloc_static(DAT_00110a98, uVar3 * 8, false);
      if (DAT_00110a98 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110a90;
   DAT_00110a90 = DAT_00110a90 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a98 + uVar3 * 8 ), (StringName*)&local_d0);
   if (( StringName::configured != '\0' ) && ( ( ( local_d0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_178 != 0 ) ) )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_170, "y", false);
   if (DAT_00110d10 == DAT_00110d14) {
      uVar3 = ( ulong )(DAT_00110d10 * 2);
      if (DAT_00110d10 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110d14 = (uint)uVar3;
      DAT_00110d18 = (void*)Memory::realloc_static(DAT_00110d18, uVar3 * 0x38, false);
      if (DAT_00110d18 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110d10;
   DAT_00110d10 = DAT_00110d10 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110d18 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 0xc;
   *puVar1 = VariantSetGet_Projection_y::set;
   puVar1[1] = VariantSetGet_Projection_y::get;
   puVar1[2] = VariantSetGet_Projection_y::validated_set;
   puVar1[3] = VariantSetGet_Projection_y::validated_get;
   puVar1[4] = VariantSetGet_Projection_y::ptr_set;
   puVar1[5] = VariantSetGet_Projection_y::ptr_get;
   StringName::StringName((StringName*)&local_c8, (StringName*)&local_170);
   if (DAT_00110a90 == DAT_00110a94) {
      uVar3 = ( ulong )(DAT_00110a90 * 2);
      if (DAT_00110a90 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a94 = (uint)uVar3;
      DAT_00110a98 = (void*)Memory::realloc_static(DAT_00110a98, uVar3 * 8, false);
      if (DAT_00110a98 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110a90;
   DAT_00110a90 = DAT_00110a90 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a98 + uVar3 * 8 ), (StringName*)&local_c8);
   if (( ( StringName::configured != '\0' ) && ( ( local_c8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_170 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_168, "z", false);
   if (DAT_00110d10 == DAT_00110d14) {
      uVar3 = ( ulong )(DAT_00110d10 * 2);
      if (DAT_00110d10 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110d14 = (uint)uVar3;
      DAT_00110d18 = (void*)Memory::realloc_static(DAT_00110d18, uVar3 * 0x38, false);
      if (DAT_00110d18 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110d10;
   DAT_00110d10 = DAT_00110d10 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110d18 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 0xc;
   *puVar1 = VariantSetGet_Projection_z::set;
   puVar1[1] = VariantSetGet_Projection_z::get;
   puVar1[2] = VariantSetGet_Projection_z::validated_set;
   puVar1[3] = VariantSetGet_Projection_z::validated_get;
   puVar1[4] = VariantSetGet_Projection_z::ptr_set;
   puVar1[5] = VariantSetGet_Projection_z::ptr_get;
   StringName::StringName((StringName*)&local_c0, (StringName*)&local_168);
   if (DAT_00110a90 == DAT_00110a94) {
      uVar3 = ( ulong )(DAT_00110a90 * 2);
      if (DAT_00110a90 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a94 = (uint)uVar3;
      DAT_00110a98 = (void*)Memory::realloc_static(DAT_00110a98, uVar3 * 8, false);
      if (DAT_00110a98 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110a90;
   DAT_00110a90 = DAT_00110a90 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a98 + uVar3 * 8 ), (StringName*)&local_c0);
   if (( ( StringName::configured != '\0' ) && ( ( local_c0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_168 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_160, "w", false);
   if (DAT_00110d10 == DAT_00110d14) {
      uVar3 = ( ulong )(DAT_00110d10 * 2);
      if (DAT_00110d10 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110d14 = (uint)uVar3;
      DAT_00110d18 = (void*)Memory::realloc_static(DAT_00110d18, uVar3 * 0x38, false);
      if (DAT_00110d18 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110d10;
   DAT_00110d10 = DAT_00110d10 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110d18 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 0xc;
   *puVar1 = VariantSetGet_Projection_w::set;
   puVar1[1] = VariantSetGet_Projection_w::get;
   puVar1[2] = VariantSetGet_Projection_w::validated_set;
   puVar1[3] = VariantSetGet_Projection_w::validated_get;
   puVar1[4] = VariantSetGet_Projection_w::ptr_set;
   puVar1[5] = VariantSetGet_Projection_w::ptr_get;
   StringName::StringName((StringName*)&local_b8, (StringName*)&local_160);
   if (DAT_00110a90 == DAT_00110a94) {
      uVar3 = ( ulong )(DAT_00110a90 * 2);
      if (DAT_00110a90 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110a94 = (uint)uVar3;
      DAT_00110a98 = (void*)Memory::realloc_static(DAT_00110a98, uVar3 * 8, false);
      if (DAT_00110a98 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110a90;
   DAT_00110a90 = DAT_00110a90 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110a98 + uVar3 * 8 ), (StringName*)&local_b8);
   if (( StringName::configured != '\0' ) && ( ( ( local_b8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_160 != 0 ) ) )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_158, "r", false);
   if (DAT_00110d20 == DAT_00110d24) {
      uVar3 = ( ulong )(DAT_00110d20 * 2);
      if (DAT_00110d20 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110d24 = (uint)uVar3;
      DAT_00110d28 = (void*)Memory::realloc_static(DAT_00110d28, uVar3 * 0x38, false);
      if (DAT_00110d28 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110d20;
   DAT_00110d20 = DAT_00110d20 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110d28 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 3;
   *puVar1 = VariantSetGet_Color_r::set;
   puVar1[1] = VariantSetGet_Color_r::get;
   puVar1[2] = VariantSetGet_Color_r::validated_set;
   puVar1[3] = VariantSetGet_Color_r::validated_get;
   puVar1[4] = VariantSetGet_Color_r::ptr_set;
   puVar1[5] = VariantSetGet_Color_r::ptr_get;
   StringName::StringName((StringName*)&local_b0, (StringName*)&local_158);
   if (DAT_00110aa0 == DAT_00110aa4) {
      uVar3 = ( ulong )(DAT_00110aa0 * 2);
      if (DAT_00110aa0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110aa4 = (uint)uVar3;
      DAT_00110aa8 = (void*)Memory::realloc_static(DAT_00110aa8, uVar3 * 8, false);
      if (DAT_00110aa8 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110aa0;
   DAT_00110aa0 = DAT_00110aa0 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110aa8 + uVar3 * 8 ), (StringName*)&local_b0);
   if (( ( StringName::configured != '\0' ) && ( ( local_b0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_158 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_150, "g", false);
   if (DAT_00110d20 == DAT_00110d24) {
      uVar3 = ( ulong )(DAT_00110d20 * 2);
      if (DAT_00110d20 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110d24 = (uint)uVar3;
      DAT_00110d28 = (void*)Memory::realloc_static(DAT_00110d28, uVar3 * 0x38, false);
      if (DAT_00110d28 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110d20;
   DAT_00110d20 = DAT_00110d20 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110d28 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 3;
   *puVar1 = VariantSetGet_Color_g::set;
   puVar1[1] = VariantSetGet_Color_g::get;
   puVar1[2] = VariantSetGet_Color_g::validated_set;
   puVar1[3] = VariantSetGet_Color_g::validated_get;
   puVar1[4] = VariantSetGet_Color_g::ptr_set;
   puVar1[5] = VariantSetGet_Color_g::ptr_get;
   StringName::StringName((StringName*)&local_a8, (StringName*)&local_150);
   if (DAT_00110aa0 == DAT_00110aa4) {
      uVar3 = ( ulong )(DAT_00110aa0 * 2);
      if (DAT_00110aa0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110aa4 = (uint)uVar3;
      DAT_00110aa8 = (void*)Memory::realloc_static(DAT_00110aa8, uVar3 * 8, false);
      if (DAT_00110aa8 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110aa0;
   DAT_00110aa0 = DAT_00110aa0 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110aa8 + uVar3 * 8 ), (StringName*)&local_a8);
   if (( ( StringName::configured != '\0' ) && ( ( local_a8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_150 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_148, "b", false);
   if (DAT_00110d20 == DAT_00110d24) {
      uVar3 = ( ulong )(DAT_00110d20 * 2);
      if (DAT_00110d20 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110d24 = (uint)uVar3;
      DAT_00110d28 = (void*)Memory::realloc_static(DAT_00110d28, uVar3 * 0x38, false);
      if (DAT_00110d28 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110d20;
   DAT_00110d20 = DAT_00110d20 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110d28 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 3;
   *puVar1 = VariantSetGet_Color_b::set;
   puVar1[1] = VariantSetGet_Color_b::get;
   puVar1[2] = VariantSetGet_Color_b::validated_set;
   puVar1[3] = VariantSetGet_Color_b::validated_get;
   puVar1[4] = VariantSetGet_Color_b::ptr_set;
   puVar1[5] = VariantSetGet_Color_b::ptr_get;
   StringName::StringName((StringName*)&local_a0, (StringName*)&local_148);
   if (DAT_00110aa0 == DAT_00110aa4) {
      uVar3 = ( ulong )(DAT_00110aa0 * 2);
      if (DAT_00110aa0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110aa4 = (uint)uVar3;
      DAT_00110aa8 = (void*)Memory::realloc_static(DAT_00110aa8, uVar3 * 8, false);
      if (DAT_00110aa8 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110aa0;
   DAT_00110aa0 = DAT_00110aa0 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110aa8 + uVar3 * 8 ), (StringName*)&local_a0);
   if (( StringName::configured != '\0' ) && ( ( ( local_a0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_148 != 0 ) ) )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_140, "a", false);
   if (DAT_00110d20 == DAT_00110d24) {
      uVar3 = ( ulong )(DAT_00110d20 * 2);
      if (DAT_00110d20 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110d24 = (uint)uVar3;
      DAT_00110d28 = (void*)Memory::realloc_static(DAT_00110d28, uVar3 * 0x38, false);
      if (DAT_00110d28 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110d20;
   DAT_00110d20 = DAT_00110d20 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110d28 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 3;
   *puVar1 = VariantSetGet_Color_a::set;
   puVar1[1] = VariantSetGet_Color_a::get;
   puVar1[2] = VariantSetGet_Color_a::validated_set;
   puVar1[3] = VariantSetGet_Color_a::validated_get;
   puVar1[4] = VariantSetGet_Color_a::ptr_set;
   puVar1[5] = VariantSetGet_Color_a::ptr_get;
   StringName::StringName((StringName*)&local_98, (StringName*)&local_140);
   if (DAT_00110aa0 == DAT_00110aa4) {
      uVar3 = ( ulong )(DAT_00110aa0 * 2);
      if (DAT_00110aa0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110aa4 = (uint)uVar3;
      DAT_00110aa8 = (void*)Memory::realloc_static(DAT_00110aa8, uVar3 * 8, false);
      if (DAT_00110aa8 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110aa0;
   DAT_00110aa0 = DAT_00110aa0 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110aa8 + uVar3 * 8 ), (StringName*)&local_98);
   if (( ( StringName::configured != '\0' ) && ( ( local_98 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_140 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_138, "r8", false);
   if (DAT_00110d20 == DAT_00110d24) {
      uVar3 = ( ulong )(DAT_00110d20 * 2);
      if (DAT_00110d20 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110d24 = (uint)uVar3;
      DAT_00110d28 = (void*)Memory::realloc_static(DAT_00110d28, uVar3 * 0x38, false);
      if (DAT_00110d28 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110d20;
   DAT_00110d20 = DAT_00110d20 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110d28 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 2;
   *puVar1 = VariantSetGet_Color_r8::set;
   puVar1[1] = VariantSetGet_Color_r8::get;
   puVar1[2] = VariantSetGet_Color_r8::validated_set;
   puVar1[3] = VariantSetGet_Color_r8::validated_get;
   puVar1[4] = VariantSetGet_Color_r8::ptr_set;
   puVar1[5] = VariantSetGet_Color_r8::ptr_get;
   StringName::StringName((StringName*)&local_90, (StringName*)&local_138);
   if (DAT_00110aa0 == DAT_00110aa4) {
      uVar3 = ( ulong )(DAT_00110aa0 * 2);
      if (DAT_00110aa0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110aa4 = (uint)uVar3;
      DAT_00110aa8 = (void*)Memory::realloc_static(DAT_00110aa8, uVar3 * 8, false);
      if (DAT_00110aa8 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110aa0;
   DAT_00110aa0 = DAT_00110aa0 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110aa8 + uVar3 * 8 ), (StringName*)&local_90);
   if (( ( StringName::configured != '\0' ) && ( ( local_90 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_130, "g8", false);
   if (DAT_00110d20 == DAT_00110d24) {
      uVar3 = ( ulong )(DAT_00110d20 * 2);
      if (DAT_00110d20 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110d24 = (uint)uVar3;
      DAT_00110d28 = (void*)Memory::realloc_static(DAT_00110d28, uVar3 * 0x38, false);
      if (DAT_00110d28 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110d20;
   DAT_00110d20 = DAT_00110d20 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110d28 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 2;
   *puVar1 = VariantSetGet_Color_g8::set;
   puVar1[1] = VariantSetGet_Color_g8::get;
   puVar1[2] = VariantSetGet_Color_g8::validated_set;
   puVar1[3] = VariantSetGet_Color_g8::validated_get;
   puVar1[4] = VariantSetGet_Color_g8::ptr_set;
   puVar1[5] = VariantSetGet_Color_g8::ptr_get;
   StringName::StringName((StringName*)&local_88, (StringName*)&local_130);
   if (DAT_00110aa0 == DAT_00110aa4) {
      uVar3 = ( ulong )(DAT_00110aa0 * 2);
      if (DAT_00110aa0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110aa4 = (uint)uVar3;
      DAT_00110aa8 = (void*)Memory::realloc_static(DAT_00110aa8, uVar3 * 8, false);
      if (DAT_00110aa8 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110aa0;
   DAT_00110aa0 = DAT_00110aa0 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110aa8 + uVar3 * 8 ), (StringName*)&local_88);
   if (( StringName::configured != '\0' ) && ( ( ( local_88 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_130 != 0 ) ) )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_128, "b8", false);
   if (DAT_00110d20 == DAT_00110d24) {
      uVar3 = ( ulong )(DAT_00110d20 * 2);
      if (DAT_00110d20 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110d24 = (uint)uVar3;
      DAT_00110d28 = (void*)Memory::realloc_static(DAT_00110d28, uVar3 * 0x38, false);
      if (DAT_00110d28 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110d20;
   DAT_00110d20 = DAT_00110d20 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110d28 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 2;
   *puVar1 = VariantSetGet_Color_b8::set;
   puVar1[1] = VariantSetGet_Color_b8::get;
   puVar1[2] = VariantSetGet_Color_b8::validated_set;
   puVar1[3] = VariantSetGet_Color_b8::validated_get;
   puVar1[4] = VariantSetGet_Color_b8::ptr_set;
   puVar1[5] = VariantSetGet_Color_b8::ptr_get;
   StringName::StringName((StringName*)&local_80, (StringName*)&local_128);
   if (DAT_00110aa0 == DAT_00110aa4) {
      uVar3 = ( ulong )(DAT_00110aa0 * 2);
      if (DAT_00110aa0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110aa4 = (uint)uVar3;
      DAT_00110aa8 = (void*)Memory::realloc_static(DAT_00110aa8, uVar3 * 8, false);
      if (DAT_00110aa8 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110aa0;
   DAT_00110aa0 = DAT_00110aa0 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110aa8 + uVar3 * 8 ), (StringName*)&local_80);
   if (( ( StringName::configured != '\0' ) && ( ( local_80 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_128 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_120, "a8", false);
   if (DAT_00110d20 == DAT_00110d24) {
      uVar3 = ( ulong )(DAT_00110d20 * 2);
      if (DAT_00110d20 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110d24 = (uint)uVar3;
      DAT_00110d28 = (void*)Memory::realloc_static(DAT_00110d28, uVar3 * 0x38, false);
      if (DAT_00110d28 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110d20;
   DAT_00110d20 = DAT_00110d20 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110d28 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 2;
   *puVar1 = VariantSetGet_Color_a8::set;
   puVar1[1] = VariantSetGet_Color_a8::get;
   puVar1[2] = VariantSetGet_Color_a8::validated_set;
   puVar1[3] = VariantSetGet_Color_a8::validated_get;
   puVar1[4] = VariantSetGet_Color_a8::ptr_set;
   puVar1[5] = VariantSetGet_Color_a8::ptr_get;
   StringName::StringName((StringName*)&local_78, (StringName*)&local_120);
   if (DAT_00110aa0 == DAT_00110aa4) {
      uVar3 = ( ulong )(DAT_00110aa0 * 2);
      if (DAT_00110aa0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110aa4 = (uint)uVar3;
      DAT_00110aa8 = (void*)Memory::realloc_static(DAT_00110aa8, uVar3 * 8, false);
      if (DAT_00110aa8 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110aa0;
   DAT_00110aa0 = DAT_00110aa0 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110aa8 + uVar3 * 8 ), (StringName*)&local_78);
   if (( ( StringName::configured != '\0' ) && ( ( local_78 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_120 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_118, "h", false);
   if (DAT_00110d20 == DAT_00110d24) {
      uVar3 = ( ulong )(DAT_00110d20 * 2);
      if (DAT_00110d20 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110d24 = (uint)uVar3;
      DAT_00110d28 = (void*)Memory::realloc_static(DAT_00110d28, uVar3 * 0x38, false);
      if (DAT_00110d28 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110d20;
   DAT_00110d20 = DAT_00110d20 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110d28 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 3;
   *puVar1 = VariantSetGet_Color_h::set;
   puVar1[1] = VariantSetGet_Color_h::get;
   puVar1[2] = VariantSetGet_Color_h::validated_set;
   puVar1[3] = VariantSetGet_Color_h::validated_get;
   puVar1[4] = VariantSetGet_Color_h::ptr_set;
   puVar1[5] = VariantSetGet_Color_h::ptr_get;
   StringName::StringName((StringName*)&local_70, (StringName*)&local_118);
   if (DAT_00110aa0 == DAT_00110aa4) {
      uVar3 = ( ulong )(DAT_00110aa0 * 2);
      if (DAT_00110aa0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110aa4 = (uint)uVar3;
      DAT_00110aa8 = (void*)Memory::realloc_static(DAT_00110aa8, uVar3 * 8, false);
      if (DAT_00110aa8 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110aa0;
   DAT_00110aa0 = DAT_00110aa0 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110aa8 + uVar3 * 8 ), (StringName*)&local_70);
   if (( StringName::configured != '\0' ) && ( ( ( local_70 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_118 != 0 ) ) )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_110, "s", false);
   if (DAT_00110d20 == DAT_00110d24) {
      uVar3 = ( ulong )(DAT_00110d20 * 2);
      if (DAT_00110d20 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110d24 = (uint)uVar3;
      DAT_00110d28 = (void*)Memory::realloc_static(DAT_00110d28, uVar3 * 0x38, false);
      if (DAT_00110d28 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110d20;
   DAT_00110d20 = DAT_00110d20 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110d28 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 3;
   *puVar1 = VariantSetGet_Color_s::set;
   puVar1[1] = VariantSetGet_Color_s::get;
   puVar1[2] = VariantSetGet_Color_s::validated_set;
   puVar1[3] = VariantSetGet_Color_s::validated_get;
   puVar1[4] = VariantSetGet_Color_s::ptr_set;
   puVar1[5] = VariantSetGet_Color_s::ptr_get;
   StringName::StringName((StringName*)&local_68, (StringName*)&local_110);
   if (DAT_00110aa0 == DAT_00110aa4) {
      uVar3 = ( ulong )(DAT_00110aa0 * 2);
      if (DAT_00110aa0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110aa4 = (uint)uVar3;
      DAT_00110aa8 = (void*)Memory::realloc_static(DAT_00110aa8, uVar3 * 8, false);
      if (DAT_00110aa8 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110aa0;
   DAT_00110aa0 = DAT_00110aa0 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110aa8 + uVar3 * 8 ), (StringName*)&local_68);
   if (( ( StringName::configured != '\0' ) && ( ( local_68 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_110 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_108, "v", false);
   if (DAT_00110d20 == DAT_00110d24) {
      uVar3 = ( ulong )(DAT_00110d20 * 2);
      if (DAT_00110d20 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110d24 = (uint)uVar3;
      DAT_00110d28 = (void*)Memory::realloc_static(DAT_00110d28, uVar3 * 0x38, false);
      if (DAT_00110d28 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110d20;
   DAT_00110d20 = DAT_00110d20 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110d28 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 3;
   *puVar1 = VariantSetGet_Color_v::set;
   puVar1[1] = VariantSetGet_Color_v::get;
   puVar1[2] = VariantSetGet_Color_v::validated_set;
   puVar1[3] = VariantSetGet_Color_v::validated_get;
   puVar1[4] = VariantSetGet_Color_v::ptr_set;
   puVar1[5] = VariantSetGet_Color_v::ptr_get;
   StringName::StringName((StringName*)&local_60, (StringName*)&local_108);
   if (DAT_00110aa0 == DAT_00110aa4) {
      uVar3 = ( ulong )(DAT_00110aa0 * 2);
      if (DAT_00110aa0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110aa4 = (uint)uVar3;
      DAT_00110aa8 = (void*)Memory::realloc_static(DAT_00110aa8, uVar3 * 8, false);
      if (DAT_00110aa8 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110aa0;
   DAT_00110aa0 = DAT_00110aa0 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110aa8 + uVar3 * 8 ), (StringName*)&local_60);
   if (( ( StringName::configured != '\0' ) && ( ( local_60 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_108 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_100, "ok_hsl_h", false);
   if (DAT_00110d20 == DAT_00110d24) {
      uVar3 = ( ulong )(DAT_00110d20 * 2);
      if (DAT_00110d20 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110d24 = (uint)uVar3;
      DAT_00110d28 = (void*)Memory::realloc_static(DAT_00110d28, uVar3 * 0x38, false);
      if (DAT_00110d28 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110d20;
   DAT_00110d20 = DAT_00110d20 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110d28 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 3;
   *puVar1 = VariantSetGet_Color_ok_hsl_h::set;
   puVar1[1] = VariantSetGet_Color_ok_hsl_h::get;
   puVar1[2] = VariantSetGet_Color_ok_hsl_h::validated_set;
   puVar1[3] = VariantSetGet_Color_ok_hsl_h::validated_get;
   puVar1[4] = VariantSetGet_Color_ok_hsl_h::ptr_set;
   puVar1[5] = VariantSetGet_Color_ok_hsl_h::ptr_get;
   StringName::StringName((StringName*)&local_58, (StringName*)&local_100);
   if (DAT_00110aa0 == DAT_00110aa4) {
      uVar3 = ( ulong )(DAT_00110aa0 * 2);
      if (DAT_00110aa0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110aa4 = (uint)uVar3;
      DAT_00110aa8 = (void*)Memory::realloc_static(DAT_00110aa8, uVar3 * 8, false);
      if (DAT_00110aa8 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110aa0;
   DAT_00110aa0 = DAT_00110aa0 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110aa8 + uVar3 * 8 ), (StringName*)&local_58);
   if (( StringName::configured != '\0' ) && ( ( ( local_58 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_100 != 0 ) ) )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_f8, "ok_hsl_s", false);
   if (DAT_00110d20 == DAT_00110d24) {
      uVar3 = ( ulong )(DAT_00110d20 * 2);
      if (DAT_00110d20 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110d24 = (uint)uVar3;
      DAT_00110d28 = (void*)Memory::realloc_static(DAT_00110d28, uVar3 * 0x38, false);
      if (DAT_00110d28 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110d20;
   DAT_00110d20 = DAT_00110d20 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110d28 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 3;
   *puVar1 = VariantSetGet_Color_ok_hsl_s::set;
   puVar1[1] = VariantSetGet_Color_ok_hsl_s::get;
   puVar1[2] = VariantSetGet_Color_ok_hsl_s::validated_set;
   puVar1[3] = VariantSetGet_Color_ok_hsl_s::validated_get;
   puVar1[4] = VariantSetGet_Color_ok_hsl_s::ptr_set;
   puVar1[5] = VariantSetGet_Color_ok_hsl_s::ptr_get;
   StringName::StringName((StringName*)&local_50, (StringName*)&local_f8);
   if (DAT_00110aa0 == DAT_00110aa4) {
      uVar3 = ( ulong )(DAT_00110aa0 * 2);
      if (DAT_00110aa0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110aa4 = (uint)uVar3;
      DAT_00110aa8 = (void*)Memory::realloc_static(DAT_00110aa8, uVar3 * 8, false);
      if (DAT_00110aa8 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110aa0;
   DAT_00110aa0 = DAT_00110aa0 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110aa8 + uVar3 * 8 ), (StringName*)&local_50);
   if (( ( StringName::configured != '\0' ) && ( ( local_50 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_f8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_f0, "ok_hsl_l", false);
   if (DAT_00110d20 == DAT_00110d24) {
      uVar3 = ( ulong )(DAT_00110d20 * 2);
      if (DAT_00110d20 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110d24 = (uint)uVar3;
      DAT_00110d28 = (void*)Memory::realloc_static(DAT_00110d28, uVar3 * 0x38, false);
      if (DAT_00110d28 == (void*)0x0) goto LAB_00107cd8;
   }

   uVar3 = (ulong)DAT_00110d20;
   DAT_00110d20 = DAT_00110d20 + 1;
   puVar1 = (undefined8*)( (long)DAT_00110d28 + uVar3 * 0x38 );
   *(undefined4*)( puVar1 + 6 ) = 3;
   *puVar1 = VariantSetGet_Color_ok_hsl_l::set;
   puVar1[1] = VariantSetGet_Color_ok_hsl_l::get;
   puVar1[2] = VariantSetGet_Color_ok_hsl_l::validated_set;
   puVar1[3] = VariantSetGet_Color_ok_hsl_l::validated_get;
   puVar1[4] = VariantSetGet_Color_ok_hsl_l::ptr_set;
   puVar1[5] = VariantSetGet_Color_ok_hsl_l::ptr_get;
   StringName::StringName((StringName*)&local_48, (StringName*)&local_f0);
   if (DAT_00110aa0 == DAT_00110aa4) {
      uVar3 = ( ulong )(DAT_00110aa0 * 2);
      if (DAT_00110aa0 * 2 == 0) {
         uVar3 = 1;
      }

      DAT_00110aa4 = (uint)uVar3;
      DAT_00110aa8 = (void*)Memory::realloc_static(DAT_00110aa8, uVar3 * 8, false);
      if (DAT_00110aa8 == (void*)0x0) {
         LAB_00107cd8:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   uVar3 = (ulong)DAT_00110aa0;
   DAT_00110aa0 = DAT_00110aa0 + 1;
   StringName::StringName((StringName*)( (long)DAT_00110aa8 + uVar3 * 8 ), (StringName*)&local_48);
   if (( ( StringName::configured != '\0' ) && ( ( local_48 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_f0 != 0 )) {
      StringName::unref();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* unregister_named_setters_getters() */void unregister_named_setters_getters(void) {
   long lVar1;
   uint *puVar2;
   int *piVar3;
   piVar3 = &variant_setters_getters;
   puVar2 = &variant_setters_getters_names;
   do {
      if (*piVar3 != 0) {
         *piVar3 = 0;
      }

      if (*puVar2 != 0) {
         lVar1 = 0;
         do {
            if (( StringName::configured != '\0' ) && ( *(long*)( *(long*)( puVar2 + 2 ) + lVar1 * 8 ) != 0 )) {
               StringName::unref();
            }

            lVar1 = lVar1 + 1;
         }
 while ( (uint)lVar1 < *puVar2 );
         *puVar2 = 0;
      }

      puVar2 = puVar2 + 4;
      piVar3 = piVar3 + 4;
   }
 while ( puVar2 != (uint*)&DAT_00110bd0 );
   return;
}
/* Variant::has_member(Variant::Type, StringName const&) */undefined8 Variant::has_member(uint param_1, long *param_2) {
   long *plVar1;
   long *plVar2;
   if (0x26 < param_1) {
      _err_print_index_error("has_member", "core/variant/variant_setget.cpp", 0x9e, (ulong)param_1, 0x27, "p_type", "Variant::VARIANT_MAX", "", false, false);
      return 0;
   }

   plVar2 = (long*)( &DAT_00110968 )[(long)(int)param_1 * 2];
   plVar1 = plVar2 + ( uint )(&variant_setters_getters_names)[(long)(int)param_1 * 4];
   if (plVar1 != plVar2) {
      do {
         if (*plVar2 == *param_2) {
            return 1;
         }

         plVar2 = plVar2 + 1;
      }
 while ( plVar1 != plVar2 );
   }

   return 0;
}
/* Variant::get_member_type(Variant::Type, StringName const&) */ulong Variant::get_member_type(uint param_1, long *param_2) {
   code *pcVar1;
   ulong uVar2;
   ulong uVar3;
   long lVar4;
   if (0x26 < param_1) {
      _err_print_index_error("get_member_type", "core/variant/variant_setget.cpp", 0xa9, (ulong)param_1, 0x27, "p_type", "Variant::VARIANT_MAX", "", false, false);
      return 0x27;
   }

   lVar4 = (long)(int)param_1;
   uVar2 = ( ulong )(uint)(&variant_setters_getters_names)[lVar4 * 4];
   if (( &variant_setters_getters_names )[lVar4 * 4] != 0) {
      uVar3 = 0;
      while (*param_2 != *(long*)( ( &DAT_00110968 )[lVar4 * 2] + uVar3 * 8 )) {
         uVar3 = uVar3 + 1;
         if (uVar2 == uVar3) {
            return 0;
         }

      }
;
      if (( uint )(&variant_setters_getters)[lVar4 * 4] <= (uint)uVar3) {
         _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar3, ( ulong )(uint)(&variant_setters_getters)[lVar4 * 4], "p_index", "count", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      uVar2 = ( ulong ) * (uint*)( ( &DAT_00110be8 )[lVar4 * 2] + uVar3 * 0x38 + 0x30 );
   }

   return uVar2;
}
/* Variant::get_member_list(Variant::Type, List<StringName, DefaultAllocator>*) */void Variant::get_member_list(int param_1, long *param_2) {
   StringName *pSVar1;
   long *plVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
   StringName *this;
   StringName *pSVar5;
   pSVar5 = (StringName*)( &DAT_00110968 )[(long)param_1 * 2];
   pSVar1 = pSVar5 + ( ulong )(uint)(&variant_setters_getters_names)[(long)param_1 * 4] * 8;
   if (pSVar1 != pSVar5) {
      if (*param_2 == 0) {
         pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *param_2 = (long)pauVar4;
         *(undefined4*)pauVar4[1] = 0;
         *pauVar4 = (undefined1[16])0x0;
      }

      do {
         while (true) {
            this(StringName * operator_new(0x20, DefaultAllocator::alloc));
            *(undefined1(*) [16])this = (undefined1[16])0x0;
            *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
            StringName::operator =(this, pSVar5);
            plVar2 = (long*)*param_2;
            lVar3 = plVar2[1];
            *(undefined8*)( this + 8 ) = 0;
            *(long**)( this + 0x18 ) = plVar2;
            *(long*)( this + 0x10 ) = lVar3;
            if (lVar3 != 0) {
               *(StringName**)( lVar3 + 8 ) = this;
            }

            plVar2[1] = (long)this;
            if (*plVar2 == 0) break;
            pSVar5 = pSVar5 + 8;
            *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
            if (pSVar1 == pSVar5) {
               return;
            }

         }
;
         pSVar5 = pSVar5 + 8;
         *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
         *plVar2 = (long)this;
      }
 while ( pSVar1 != pSVar5 );
   }

   return;
}
/* Variant::get_member_count(Variant::Type) */undefined4 Variant::get_member_count(uint param_1) {
   if (param_1 < 0x27) {
      return ( &variant_setters_getters_names )[(long)(int)param_1 * 4];
   }

   _err_print_index_error("get_member_count", "core/variant/variant_setget.cpp", 0xbb, (ulong)param_1, 0x27, "p_type", "Variant::VARIANT_MAX", "", false, false);
   return 0xffffffff;
}
/* Variant::get_member_validated_setter(Variant::Type, StringName const&) */undefined8 Variant::get_member_validated_setter(uint param_1, long *param_2) {
   code *pcVar1;
   ulong uVar2;
   long lVar3;
   if (param_1 < 0x27) {
      lVar3 = (long)(int)param_1;
      if (( &variant_setters_getters_names )[lVar3 * 4] != 0) {
         uVar2 = 0;
         do {
            if (*(long*)( ( &DAT_00110968 )[lVar3 * 2] + uVar2 * 8 ) == *param_2) {
               if ((uint)uVar2 < ( uint )(&variant_setters_getters)[lVar3 * 4]) {
                  return *(undefined8*)( ( &DAT_00110be8 )[lVar3 * 2] + uVar2 * 0x38 + 0x10 );
               }

               _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar2, ( ulong )(uint)(&variant_setters_getters)[lVar3 * 4], "p_index", "count", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar1 = (code*)invalidInstructionException();
               ( *pcVar1 )();
            }

            uVar2 = uVar2 + 1;
         }
 while ( uVar2 != ( uint )(&variant_setters_getters_names)[lVar3 * 4] );
      }

   }
 else {
      _err_print_index_error("get_member_validated_setter", "core/variant/variant_setget.cpp", 0xc0, (ulong)param_1, 0x27, "p_type", "Variant::VARIANT_MAX", "", false, false);
   }

   return 0;
}
/* Variant::get_member_validated_getter(Variant::Type, StringName const&) */undefined8 Variant::get_member_validated_getter(uint param_1, long *param_2) {
   code *pcVar1;
   ulong uVar2;
   long lVar3;
   if (param_1 < 0x27) {
      lVar3 = (long)(int)param_1;
      if (( &variant_setters_getters_names )[lVar3 * 4] != 0) {
         uVar2 = 0;
         do {
            if (*(long*)( ( &DAT_00110968 )[lVar3 * 2] + uVar2 * 8 ) == *param_2) {
               if ((uint)uVar2 < ( uint )(&variant_setters_getters)[lVar3 * 4]) {
                  return *(undefined8*)( ( &DAT_00110be8 )[lVar3 * 2] + uVar2 * 0x38 + 0x18 );
               }

               _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar2, ( ulong )(uint)(&variant_setters_getters)[lVar3 * 4], "p_index", "count", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar1 = (code*)invalidInstructionException();
               ( *pcVar1 )();
            }

            uVar2 = uVar2 + 1;
         }
 while ( uVar2 != ( uint )(&variant_setters_getters_names)[lVar3 * 4] );
      }

   }
 else {
      _err_print_index_error("get_member_validated_getter", "core/variant/variant_setget.cpp", 0xcb, (ulong)param_1, 0x27, "p_type", "Variant::VARIANT_MAX", "", false, false);
   }

   return 0;
}
/* Variant::get_member_ptr_setter(Variant::Type, StringName const&) */undefined8 Variant::get_member_ptr_setter(uint param_1, long *param_2) {
   code *pcVar1;
   ulong uVar2;
   long lVar3;
   if (param_1 < 0x27) {
      lVar3 = (long)(int)param_1;
      if (( &variant_setters_getters_names )[lVar3 * 4] != 0) {
         uVar2 = 0;
         do {
            if (*(long*)( ( &DAT_00110968 )[lVar3 * 2] + uVar2 * 8 ) == *param_2) {
               if ((uint)uVar2 < ( uint )(&variant_setters_getters)[lVar3 * 4]) {
                  return *(undefined8*)( ( &DAT_00110be8 )[lVar3 * 2] + uVar2 * 0x38 + 0x20 );
               }

               _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar2, ( ulong )(uint)(&variant_setters_getters)[lVar3 * 4], "p_index", "count", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar1 = (code*)invalidInstructionException();
               ( *pcVar1 )();
            }

            uVar2 = uVar2 + 1;
         }
 while ( uVar2 != ( uint )(&variant_setters_getters_names)[lVar3 * 4] );
      }

   }
 else {
      _err_print_index_error("get_member_ptr_setter", "core/variant/variant_setget.cpp", 0xd7, (ulong)param_1, 0x27, "p_type", "Variant::VARIANT_MAX", "", false, false);
   }

   return 0;
}
/* Variant::get_member_ptr_getter(Variant::Type, StringName const&) */undefined8 Variant::get_member_ptr_getter(uint param_1, long *param_2) {
   code *pcVar1;
   ulong uVar2;
   long lVar3;
   if (param_1 < 0x27) {
      lVar3 = (long)(int)param_1;
      if (( &variant_setters_getters_names )[lVar3 * 4] != 0) {
         uVar2 = 0;
         do {
            if (*(long*)( ( &DAT_00110968 )[lVar3 * 2] + uVar2 * 8 ) == *param_2) {
               if ((uint)uVar2 < ( uint )(&variant_setters_getters)[lVar3 * 4]) {
                  return *(undefined8*)( ( &DAT_00110be8 )[lVar3 * 2] + uVar2 * 0x38 + 0x28 );
               }

               _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar2, ( ulong )(uint)(&variant_setters_getters)[lVar3 * 4], "p_index", "count", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar1 = (code*)invalidInstructionException();
               ( *pcVar1 )();
            }

            uVar2 = uVar2 + 1;
         }
 while ( uVar2 != ( uint )(&variant_setters_getters_names)[lVar3 * 4] );
      }

   }
 else {
      _err_print_index_error("get_member_ptr_getter", "core/variant/variant_setget.cpp", 0xe3, (ulong)param_1, 0x27, "p_type", "Variant::VARIANT_MAX", "", false, false);
   }

   return 0;
}
/* Variant::set_named(StringName const&, Variant const&, bool&) */void Variant::set_named(Variant *this, StringName *param_1, Variant *param_2, bool *param_3) {
   int iVar1;
   code *pcVar2;
   bool bVar3;
   StringName *pSVar4;
   ulong uVar5;
   long lVar6;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   iVar1 = *(int*)this;
   lVar6 = (long)iVar1;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( &variant_setters_getters )[lVar6 * 4] == 0) {
      if (iVar1 == 0x18) {
         pSVar4 = (StringName*)::Variant::get_validated_object();
         if (pSVar4 != (StringName*)0x0) {
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               Object::set(pSVar4, (Variant*)param_1, (bool*)param_2);
               return;
            }

            goto LAB_00109250;
         }

         goto LAB_0010915e;
      }

      if (iVar1 != 0x1b) goto LAB_0010915e;
      ::Variant::Variant((Variant*)local_48, param_1);
      bVar3 = (bool)Dictionary::set(this + 8, (Variant*)local_48);
      *param_3 = bVar3;
      if (needs_deinit[local_48[0]] != '\0') {
         ::Variant::_clear_internal();
      }

   }
 else {
      uVar5 = 0;
      do {
         if (uVar5 == ( uint )(&variant_setters_getters_names)[lVar6 * 4]) {
            _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar5, uVar5, "p_index", "count", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         if (*(long*)param_1 == *(long*)( ( &DAT_00110968 )[lVar6 * 2] + uVar5 * 8 )) {
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010920c. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( **(code**)( ( &DAT_00110be8 )[lVar6 * 2] + uVar5 * 0x38 ) )(this, param_2, param_3);
               return;
            }

            goto LAB_00109250;
         }

         uVar5 = uVar5 + 1;
      }
 while ( ( uint )(&variant_setters_getters)[lVar6 * 4] != uVar5 );
      LAB_0010915e:*param_3 = false;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00109250:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Variant::get_named(StringName const&, bool&) const */StringName *Variant::get_named(StringName *param_1, bool *param_2) {
   int iVar1;
   code *pcVar2;
   char cVar3;
   ulong uVar4;
   bool *pbVar5;
   Variant *pVVar6;
   VariantCallable *this;
   undefined1 *in_RCX;
   ulong uVar7;
   StringName *in_RDX;
   long lVar8;
   long in_FS_OFFSET;
   Callable local_58[16];
   int local_48[2];
   undefined1 local_40[16];
   long local_30;
   iVar1 = *(int*)param_2;
   lVar8 = (long)iVar1;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar4 = 0;
   if (( &variant_setters_getters )[lVar8 * 4] != 0) {
      uVar7 = ( ulong )(uint)(&variant_setters_getters_names)[lVar8 * 4];
      do {
         if (uVar7 == uVar4) {
            _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar7, uVar7, "p_index", "count", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         if (*(long*)in_RDX == *(long*)( ( &DAT_00110968 )[lVar8 * 2] + uVar4 * 8 )) {
            local_40 = (undefined1[16])0x0;
            local_48[0] = 0;
            local_48[1] = 0;
            ( **(code**)( uVar4 * 0x38 + ( &DAT_00110be8 )[lVar8 * 2] + 8 ) )(param_2, local_48);
            *in_RCX = 1;
            *(int*)param_1 = local_48[0];
            *(undefined8*)( param_1 + 8 ) = local_40._0_8_;
            *(undefined8*)( param_1 + 0x10 ) = local_40._8_8_;
            goto LAB_00109356;
         }

         uVar4 = uVar4 + 1;
      }
 while ( ( uint )(&variant_setters_getters)[lVar8 * 4] != uVar4 );
   }

   if (iVar1 == 0x18) {
      pbVar5 = (bool*)::Variant::get_validated_object();
      if (pbVar5 == (bool*)0x0) {
         *in_RCX = 0;
         ::Variant::Variant((Variant*)param_1, "Instance base is null.");
      }
 else {
         Object::get(param_1, pbVar5);
      }

   }
 else {
      if (iVar1 == 0x1b) {
         ::Variant::Variant((Variant*)local_48, in_RDX);
         pVVar6 = (Variant*)Dictionary::getptr((Variant*)( param_2 + 8 ));
         if (needs_deinit[local_48[0]] != '\0') {
            ::Variant::_clear_internal();
         }

         if (pVVar6 != (Variant*)0x0) {
            *in_RCX = 1;
            ::Variant::Variant((Variant*)param_1, pVVar6);
            goto LAB_00109356;
         }

      }
 else {
         cVar3 = ::Variant::has_builtin_method(iVar1);
         if (cVar3 != '\0') {
            *in_RCX = 1;
            this(VariantCallable * operator_new(0x38, ""));
            VariantCallable::VariantCallable(this, (Variant*)param_2, in_RDX);
            Callable::Callable(local_58, (CallableCustom*)this);
            ::Variant::Variant((Variant*)param_1, local_58);
            Callable::~Callable(local_58);
            goto LAB_00109356;
         }

      }

      *in_RCX = 0;
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   }

   LAB_00109356:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* register_indexed_setters_getters() */void register_indexed_setters_getters(void) {
   long *plVar1;
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
   long lVar31;
   undefined8 uVar32;
   undefined4 uVar33;
   long in_FS_OFFSET;
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
   variant_indexed_setters_getters[0x160] = 1;
   variant_indexed_setters_getters._288_8_ = VariantIndexedSetGet_String::set;
   variant_indexed_setters_getters._296_8_ = VariantIndexedSetGet_String::get;
   variant_indexed_setters_getters._304_8_ = VariantIndexedSetGet_String::validated_set;
   variant_indexed_setters_getters._312_8_ = VariantIndexedSetGet_String::get;
   variant_indexed_setters_getters._344_8_ = _LC72;
   variant_indexed_setters_getters._336_8_ = VariantIndexedSetGet_String::get_indexed_size;
   variant_indexed_setters_getters._320_8_ = VariantIndexedSetGet_String::ptr_set;
   variant_indexed_setters_getters._328_8_ = VariantIndexedSetGet_String::ptr_get;
   variant_indexed_setters_getters._360_8_ = VariantIndexedSetGet_Vector2::set;
   variant_indexed_setters_getters._368_8_ = VariantIndexedSetGet_Vector2::get;
   variant_indexed_setters_getters._416_4_ = 3;
   variant_indexed_setters_getters._376_8_ = VariantIndexedSetGet_Vector2::validated_set;
   variant_indexed_setters_getters._384_8_ = VariantIndexedSetGet_Vector2::get;
   variant_indexed_setters_getters._392_8_ = VariantIndexedSetGet_Vector2::ptr_set;
   variant_indexed_setters_getters._400_8_ = VariantIndexedSetGet_Vector2::ptr_get;
   GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void>*)&local_68);
   uVar33 = local_40;
   lVar31 = local_48;
   if (local_48 != 0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar31 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar32 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar22._8_8_ = 0;
         auVar22._0_8_ = local_60._8_8_;
         local_60 = auVar22 << 0x40;
         Memory::free_static((void*)( uVar32 + -0x10 ), false);
      }

   }

   variant_indexed_setters_getters._408_8_ = VariantIndexedSetGet_Vector2::get_indexed_size;
   variant_indexed_setters_getters._420_4_ = uVar33;
   variant_indexed_setters_getters[0x1a8] = 1;
   variant_indexed_setters_getters._488_4_ = 2;
   variant_indexed_setters_getters._432_8_ = VariantIndexedSetGet_Vector2i::set;
   variant_indexed_setters_getters._440_8_ = VariantIndexedSetGet_Vector2i::get;
   variant_indexed_setters_getters._448_8_ = VariantIndexedSetGet_Vector2i::validated_set;
   variant_indexed_setters_getters._456_8_ = VariantIndexedSetGet_Vector2i::get;
   variant_indexed_setters_getters._464_8_ = VariantIndexedSetGet_Vector2i::ptr_set;
   variant_indexed_setters_getters._472_8_ = VariantIndexedSetGet_Vector2i::ptr_get;
   GetTypeInfo<long,void>::get_class_info((GetTypeInfo<long,void>*)&local_68);
   uVar33 = local_40;
   lVar31 = local_48;
   if (local_48 != 0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar31 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar32 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar21._8_8_ = 0;
         auVar21._0_8_ = local_60._8_8_;
         local_60 = auVar21 << 0x40;
         Memory::free_static((void*)( uVar32 + -0x10 ), false);
      }

   }

   variant_indexed_setters_getters._480_8_ = VariantIndexedSetGet_Vector2i::get_indexed_size;
   variant_indexed_setters_getters._492_4_ = uVar33;
   variant_indexed_setters_getters[0x1f0] = 1;
   variant_indexed_setters_getters._704_4_ = 3;
   variant_indexed_setters_getters._648_8_ = VariantIndexedSetGet_Vector3::set;
   variant_indexed_setters_getters._656_8_ = VariantIndexedSetGet_Vector3::get;
   variant_indexed_setters_getters._664_8_ = VariantIndexedSetGet_Vector3::validated_set;
   variant_indexed_setters_getters._672_8_ = VariantIndexedSetGet_Vector3::get;
   variant_indexed_setters_getters._680_8_ = VariantIndexedSetGet_Vector3::ptr_set;
   variant_indexed_setters_getters._688_8_ = VariantIndexedSetGet_Vector3::ptr_get;
   GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void>*)&local_68);
   uVar33 = local_40;
   lVar31 = local_48;
   if (local_48 != 0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar31 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar32 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar20._8_8_ = 0;
         auVar20._0_8_ = local_60._8_8_;
         local_60 = auVar20 << 0x40;
         Memory::free_static((void*)( uVar32 + -0x10 ), false);
      }

   }

   variant_indexed_setters_getters._696_8_ = VariantIndexedSetGet_Vector3::get_indexed_size;
   variant_indexed_setters_getters._708_4_ = uVar33;
   variant_indexed_setters_getters[0x2c8] = 1;
   variant_indexed_setters_getters._776_4_ = 2;
   variant_indexed_setters_getters._720_8_ = VariantIndexedSetGet_Vector3i::set;
   variant_indexed_setters_getters._728_8_ = VariantIndexedSetGet_Vector3i::get;
   variant_indexed_setters_getters._736_8_ = VariantIndexedSetGet_Vector3i::validated_set;
   variant_indexed_setters_getters._744_8_ = VariantIndexedSetGet_Vector3i::get;
   variant_indexed_setters_getters._752_8_ = VariantIndexedSetGet_Vector3i::ptr_set;
   variant_indexed_setters_getters._760_8_ = VariantIndexedSetGet_Vector3i::ptr_get;
   GetTypeInfo<long,void>::get_class_info((GetTypeInfo<long,void>*)&local_68);
   uVar33 = local_40;
   lVar31 = local_48;
   if (local_48 != 0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar31 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar32 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar19._8_8_ = 0;
         auVar19._0_8_ = local_60._8_8_;
         local_60 = auVar19 << 0x40;
         Memory::free_static((void*)( uVar32 + -0x10 ), false);
      }

   }

   variant_indexed_setters_getters._768_8_ = VariantIndexedSetGet_Vector3i::get_indexed_size;
   variant_indexed_setters_getters._780_4_ = uVar33;
   variant_indexed_setters_getters[0x310] = 1;
   variant_indexed_setters_getters._920_4_ = 3;
   variant_indexed_setters_getters._864_8_ = VariantIndexedSetGet_Vector4::set;
   variant_indexed_setters_getters._872_8_ = VariantIndexedSetGet_Vector4::get;
   variant_indexed_setters_getters._880_8_ = VariantIndexedSetGet_Vector4::validated_set;
   variant_indexed_setters_getters._888_8_ = VariantIndexedSetGet_Vector4::get;
   variant_indexed_setters_getters._896_8_ = VariantIndexedSetGet_Vector4::ptr_set;
   variant_indexed_setters_getters._904_8_ = VariantIndexedSetGet_Vector4::ptr_get;
   GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void>*)&local_68);
   uVar33 = local_40;
   lVar31 = local_48;
   if (local_48 != 0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar31 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar32 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar14._8_8_ = 0;
         auVar14._0_8_ = local_60._8_8_;
         local_60 = auVar14 << 0x40;
         Memory::free_static((void*)( uVar32 + -0x10 ), false);
      }

   }

   variant_indexed_setters_getters._912_8_ = VariantIndexedSetGet_Vector4::get_indexed_size;
   variant_indexed_setters_getters._924_4_ = uVar33;
   variant_indexed_setters_getters[0x3a0] = 1;
   variant_indexed_setters_getters._992_4_ = 2;
   variant_indexed_setters_getters._936_8_ = VariantIndexedSetGet_Vector4i::set;
   variant_indexed_setters_getters._944_8_ = VariantIndexedSetGet_Vector4i::get;
   variant_indexed_setters_getters._952_8_ = VariantIndexedSetGet_Vector4i::validated_set;
   variant_indexed_setters_getters._960_8_ = VariantIndexedSetGet_Vector4i::get;
   variant_indexed_setters_getters._968_8_ = VariantIndexedSetGet_Vector4i::ptr_set;
   variant_indexed_setters_getters._976_8_ = VariantIndexedSetGet_Vector4i::ptr_get;
   GetTypeInfo<long,void>::get_class_info((GetTypeInfo<long,void>*)&local_68);
   uVar33 = local_40;
   lVar31 = local_48;
   if (local_48 != 0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar31 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar32 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar13._8_8_ = 0;
         auVar13._0_8_ = local_60._8_8_;
         local_60 = auVar13 << 0x40;
         Memory::free_static((void*)( uVar32 + -0x10 ), false);
      }

   }

   variant_indexed_setters_getters._984_8_ = VariantIndexedSetGet_Vector4i::get_indexed_size;
   variant_indexed_setters_getters._996_4_ = uVar33;
   variant_indexed_setters_getters[1000] = 1;
   variant_indexed_setters_getters._1136_4_ = 3;
   variant_indexed_setters_getters._1080_8_ = VariantIndexedSetGet_Quaternion::set;
   variant_indexed_setters_getters._1088_8_ = VariantIndexedSetGet_Quaternion::get;
   variant_indexed_setters_getters._1096_8_ = VariantIndexedSetGet_Quaternion::validated_set;
   variant_indexed_setters_getters._1104_8_ = VariantIndexedSetGet_Quaternion::get;
   variant_indexed_setters_getters._1112_8_ = VariantIndexedSetGet_Quaternion::ptr_set;
   variant_indexed_setters_getters._1120_8_ = VariantIndexedSetGet_Quaternion::ptr_get;
   GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void>*)&local_68);
   uVar33 = local_40;
   lVar31 = local_48;
   if (local_48 != 0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar31 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar32 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar15._8_8_ = 0;
         auVar15._0_8_ = local_60._8_8_;
         local_60 = auVar15 << 0x40;
         Memory::free_static((void*)( uVar32 + -0x10 ), false);
      }

   }

   variant_indexed_setters_getters._1128_8_ = VariantIndexedSetGet_Quaternion::get_indexed_size;
   variant_indexed_setters_getters._1140_4_ = uVar33;
   variant_indexed_setters_getters[0x478] = 1;
   variant_indexed_setters_getters._1496_4_ = 3;
   variant_indexed_setters_getters._1440_8_ = VariantIndexedSetGet_Color::set;
   variant_indexed_setters_getters._1448_8_ = VariantIndexedSetGet_Color::get;
   variant_indexed_setters_getters._1456_8_ = VariantIndexedSetGet_Color::validated_set;
   variant_indexed_setters_getters._1464_8_ = VariantIndexedSetGet_Color::get;
   variant_indexed_setters_getters._1472_8_ = VariantIndexedSetGet_Color::ptr_set;
   variant_indexed_setters_getters._1480_8_ = VariantIndexedSetGet_Color::ptr_get;
   GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void>*)&local_68);
   lVar31 = local_48;
   if (local_48 != 0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar31 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar32 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar10._8_8_ = 0;
         auVar10._0_8_ = local_60._8_8_;
         local_60 = auVar10 << 0x40;
         Memory::free_static((void*)( uVar32 + -0x10 ), false);
      }

   }

   variant_indexed_setters_getters._1500_4_ = local_40;
   variant_indexed_setters_getters._1488_8_ = VariantIndexedSetGet_Color::get_indexed_size;
   variant_indexed_setters_getters[0x5e0] = 1;
   variant_indexed_setters_getters._824_8_ = VariantIndexedSetGet_Transform2D::ptr_set;
   variant_indexed_setters_getters._832_8_ = VariantIndexedSetGet_Transform2D::ptr_get;
   variant_indexed_setters_getters._848_4_ = 5;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC5;
   auVar23._8_8_ = 0;
   auVar23._0_8_ = local_60._8_8_;
   local_60 = auVar23 << 0x40;
   variant_indexed_setters_getters._792_8_ = VariantIndexedSetGet_Transform2D::set;
   variant_indexed_setters_getters._800_8_ = VariantIndexedSetGet_Transform2D::get;
   variant_indexed_setters_getters._808_8_ = VariantIndexedSetGet_Transform2D::validated_set;
   variant_indexed_setters_getters._816_8_ = VariantIndexedSetGet_Transform2D::get;
   String::parse_latin1((StrRange*)&local_80);
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 5);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010b4fb:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
      lVar31 = local_80;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010b4fb;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         lVar31 = local_80;
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
            lVar31 = local_80;
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
         lVar31 = local_80;
      }

   }

   local_80 = lVar31;
   if (lVar31 != 0) {
      LOCK();
      plVar1 = (long*)( lVar31 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar31 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   uVar33 = local_40;
   lVar31 = local_48;
   if (local_48 != 0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar31 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar32 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar17._8_8_ = 0;
         auVar17._0_8_ = local_60._8_8_;
         local_60 = auVar17 << 0x40;
         Memory::free_static((void*)( uVar32 + -0x10 ), false);
      }

   }

   variant_indexed_setters_getters._840_8_ = VariantIndexedSetGet_Transform2D::get_indexed_size;
   variant_indexed_setters_getters._852_4_ = uVar33;
   variant_indexed_setters_getters[0x358] = 1;
   variant_indexed_setters_getters._1256_8_ = VariantIndexedSetGet_Basis::ptr_set;
   variant_indexed_setters_getters._1264_8_ = VariantIndexedSetGet_Basis::ptr_get;
   variant_indexed_setters_getters._1280_4_ = 9;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC5;
   auVar24._8_8_ = 0;
   auVar24._0_8_ = local_60._8_8_;
   local_60 = auVar24 << 0x40;
   variant_indexed_setters_getters._1224_8_ = VariantIndexedSetGet_Basis::set;
   variant_indexed_setters_getters._1232_8_ = VariantIndexedSetGet_Basis::get;
   variant_indexed_setters_getters._1240_8_ = VariantIndexedSetGet_Basis::validated_set;
   variant_indexed_setters_getters._1248_8_ = VariantIndexedSetGet_Basis::get;
   String::parse_latin1((StrRange*)&local_80);
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 9);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010b563:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
      lVar31 = local_80;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010b563;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         lVar31 = local_80;
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
            lVar31 = local_80;
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
         lVar31 = local_80;
      }

   }

   local_80 = lVar31;
   if (lVar31 != 0) {
      LOCK();
      plVar1 = (long*)( lVar31 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar31 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   uVar33 = local_40;
   lVar31 = local_48;
   if (local_48 != 0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar31 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar32 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar18._8_8_ = 0;
         auVar18._0_8_ = local_60._8_8_;
         local_60 = auVar18 << 0x40;
         Memory::free_static((void*)( uVar32 + -0x10 ), false);
      }

   }

   variant_indexed_setters_getters._1272_8_ = VariantIndexedSetGet_Basis::get_indexed_size;
   variant_indexed_setters_getters._1284_4_ = uVar33;
   variant_indexed_setters_getters[0x508] = 1;
   variant_indexed_setters_getters._1400_8_ = VariantIndexedSetGet_Projection::ptr_set;
   variant_indexed_setters_getters._1408_8_ = VariantIndexedSetGet_Projection::ptr_get;
   variant_indexed_setters_getters._1424_4_ = 0xc;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC5;
   auVar25._8_8_ = 0;
   auVar25._0_8_ = local_60._8_8_;
   local_60 = auVar25 << 0x40;
   variant_indexed_setters_getters._1368_8_ = VariantIndexedSetGet_Projection::set;
   variant_indexed_setters_getters._1376_8_ = VariantIndexedSetGet_Projection::get;
   variant_indexed_setters_getters._1384_8_ = VariantIndexedSetGet_Projection::validated_set;
   variant_indexed_setters_getters._1392_8_ = VariantIndexedSetGet_Projection::get;
   String::parse_latin1((StrRange*)&local_80);
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 0xc);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010b5cb:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
      lVar31 = local_80;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010b5cb;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         lVar31 = local_80;
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
            lVar31 = local_80;
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
         lVar31 = local_80;
      }

   }

   local_80 = lVar31;
   if (lVar31 != 0) {
      LOCK();
      plVar1 = (long*)( lVar31 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar31 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   uVar33 = local_40;
   lVar31 = local_48;
   if (local_48 != 0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar31 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar32 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar12._8_8_ = 0;
         auVar12._0_8_ = local_60._8_8_;
         local_60 = auVar12 << 0x40;
         Memory::free_static((void*)( uVar32 + -0x10 ), false);
      }

   }

   variant_indexed_setters_getters._1416_8_ = VariantIndexedSetGet_Projection::get_indexed_size;
   variant_indexed_setters_getters._1428_4_ = uVar33;
   variant_indexed_setters_getters[0x598] = 1;
   variant_indexed_setters_getters._2144_4_ = 2;
   variant_indexed_setters_getters._2088_8_ = VariantIndexedSetGet_PackedByteArray::set;
   variant_indexed_setters_getters._2096_8_ = VariantIndexedSetGet_PackedByteArray::get;
   variant_indexed_setters_getters._2104_8_ = VariantIndexedSetGet_PackedByteArray::validated_set;
   variant_indexed_setters_getters._2112_8_ = VariantIndexedSetGet_PackedByteArray::get;
   variant_indexed_setters_getters._2120_8_ = VariantIndexedSetGet_PackedByteArray::ptr_set;
   variant_indexed_setters_getters._2128_8_ = VariantIndexedSetGet_PackedByteArray::ptr_get;
   GetTypeInfo<long,void>::get_class_info((GetTypeInfo<long,void>*)&local_68);
   uVar33 = local_40;
   lVar31 = local_48;
   if (local_48 != 0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar31 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar32 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar11._8_8_ = 0;
         auVar11._0_8_ = local_60._8_8_;
         local_60 = auVar11 << 0x40;
         Memory::free_static((void*)( uVar32 + -0x10 ), false);
      }

   }

   variant_indexed_setters_getters._2136_8_ = VariantIndexedSetGet_PackedByteArray::get_indexed_size;
   variant_indexed_setters_getters._2148_4_ = uVar33;
   variant_indexed_setters_getters[0x868] = 1;
   variant_indexed_setters_getters._2216_4_ = 2;
   variant_indexed_setters_getters._2160_8_ = VariantIndexedSetGet_PackedInt32Array::set;
   variant_indexed_setters_getters._2168_8_ = VariantIndexedSetGet_PackedInt32Array::get;
   variant_indexed_setters_getters._2176_8_ = VariantIndexedSetGet_PackedInt32Array::validated_set;
   variant_indexed_setters_getters._2184_8_ = VariantIndexedSetGet_PackedInt32Array::get;
   variant_indexed_setters_getters._2192_8_ = VariantIndexedSetGet_PackedInt32Array::ptr_set;
   variant_indexed_setters_getters._2200_8_ = VariantIndexedSetGet_PackedInt32Array::ptr_get;
   GetTypeInfo<long,void>::get_class_info((GetTypeInfo<long,void>*)&local_68);
   uVar33 = local_40;
   lVar31 = local_48;
   if (local_48 != 0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar31 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar32 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar8._8_8_ = 0;
         auVar8._0_8_ = local_60._8_8_;
         local_60 = auVar8 << 0x40;
         Memory::free_static((void*)( uVar32 + -0x10 ), false);
      }

   }

   variant_indexed_setters_getters._2208_8_ = VariantIndexedSetGet_PackedInt32Array::get_indexed_size;
   variant_indexed_setters_getters._2220_4_ = uVar33;
   variant_indexed_setters_getters[0x8b0] = 1;
   variant_indexed_setters_getters._2288_4_ = 2;
   variant_indexed_setters_getters._2232_8_ = VariantIndexedSetGet_PackedInt64Array::set;
   variant_indexed_setters_getters._2240_8_ = VariantIndexedSetGet_PackedInt64Array::get;
   variant_indexed_setters_getters._2248_8_ = VariantIndexedSetGet_PackedInt64Array::validated_set;
   variant_indexed_setters_getters._2256_8_ = VariantIndexedSetGet_PackedInt64Array::get;
   variant_indexed_setters_getters._2264_8_ = VariantIndexedSetGet_PackedInt64Array::ptr_set;
   variant_indexed_setters_getters._2272_8_ = VariantIndexedSetGet_PackedInt64Array::ptr_get;
   GetTypeInfo<long,void>::get_class_info((GetTypeInfo<long,void>*)&local_68);
   uVar33 = local_40;
   lVar31 = local_48;
   if (local_48 != 0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar31 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar32 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar9._8_8_ = 0;
         auVar9._0_8_ = local_60._8_8_;
         local_60 = auVar9 << 0x40;
         Memory::free_static((void*)( uVar32 + -0x10 ), false);
      }

   }

   variant_indexed_setters_getters._2280_8_ = VariantIndexedSetGet_PackedInt64Array::get_indexed_size;
   variant_indexed_setters_getters._2292_4_ = uVar33;
   variant_indexed_setters_getters[0x8f8] = 1;
   variant_indexed_setters_getters._2360_4_ = 3;
   variant_indexed_setters_getters._2304_8_ = VariantIndexedSetGet_PackedFloat32Array::set;
   variant_indexed_setters_getters._2312_8_ = VariantIndexedSetGet_PackedFloat32Array::get;
   variant_indexed_setters_getters._2320_8_ = VariantIndexedSetGet_PackedFloat32Array::validated_set;
   variant_indexed_setters_getters._2328_8_ = VariantIndexedSetGet_PackedFloat32Array::get;
   variant_indexed_setters_getters._2336_8_ = VariantIndexedSetGet_PackedFloat32Array::ptr_set;
   variant_indexed_setters_getters._2344_8_ = VariantIndexedSetGet_PackedFloat32Array::ptr_get;
   GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void>*)&local_68);
   uVar33 = local_40;
   lVar31 = local_48;
   if (local_48 != 0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar31 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar32 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar6._8_8_ = 0;
         auVar6._0_8_ = local_60._8_8_;
         local_60 = auVar6 << 0x40;
         Memory::free_static((void*)( uVar32 + -0x10 ), false);
      }

   }

   variant_indexed_setters_getters._2352_8_ = VariantIndexedSetGet_PackedFloat32Array::get_indexed_size;
   variant_indexed_setters_getters._2364_4_ = uVar33;
   variant_indexed_setters_getters[0x940] = 1;
   variant_indexed_setters_getters._2432_4_ = 3;
   variant_indexed_setters_getters._2376_8_ = VariantIndexedSetGet_PackedFloat64Array::set;
   variant_indexed_setters_getters._2384_8_ = VariantIndexedSetGet_PackedFloat64Array::get;
   variant_indexed_setters_getters._2392_8_ = VariantIndexedSetGet_PackedFloat64Array::validated_set;
   variant_indexed_setters_getters._2400_8_ = VariantIndexedSetGet_PackedFloat64Array::get;
   variant_indexed_setters_getters._2408_8_ = VariantIndexedSetGet_PackedFloat64Array::ptr_set;
   variant_indexed_setters_getters._2416_8_ = VariantIndexedSetGet_PackedFloat64Array::ptr_get;
   GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void>*)&local_68);
   uVar33 = local_40;
   lVar31 = local_48;
   if (local_48 != 0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar31 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar32 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar5._8_8_ = 0;
         auVar5._0_8_ = local_60._8_8_;
         local_60 = auVar5 << 0x40;
         Memory::free_static((void*)( uVar32 + -0x10 ), false);
      }

   }

   variant_indexed_setters_getters._2424_8_ = VariantIndexedSetGet_PackedFloat64Array::get_indexed_size;
   variant_indexed_setters_getters._2436_4_ = uVar33;
   variant_indexed_setters_getters[0x988] = 1;
   variant_indexed_setters_getters._2552_8_ = VariantIndexedSetGet_PackedVector2Array::ptr_set;
   variant_indexed_setters_getters._2560_8_ = VariantIndexedSetGet_PackedVector2Array::ptr_get;
   variant_indexed_setters_getters._2576_4_ = 5;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC5;
   auVar26._8_8_ = 0;
   auVar26._0_8_ = local_60._8_8_;
   local_60 = auVar26 << 0x40;
   variant_indexed_setters_getters._2520_8_ = VariantIndexedSetGet_PackedVector2Array::set;
   variant_indexed_setters_getters._2528_8_ = VariantIndexedSetGet_PackedVector2Array::get;
   variant_indexed_setters_getters._2536_8_ = VariantIndexedSetGet_PackedVector2Array::validated_set;
   variant_indexed_setters_getters._2544_8_ = VariantIndexedSetGet_PackedVector2Array::get;
   String::parse_latin1((StrRange*)&local_80);
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 5);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010b633:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
      lVar31 = local_80;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010b633;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         lVar31 = local_80;
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
            lVar31 = local_80;
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
         lVar31 = local_80;
      }

   }

   local_80 = lVar31;
   if (lVar31 != 0) {
      LOCK();
      plVar1 = (long*)( lVar31 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar31 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   uVar33 = local_40;
   lVar31 = local_48;
   if (local_48 != 0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar31 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar32 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar7._8_8_ = 0;
         auVar7._0_8_ = local_60._8_8_;
         local_60 = auVar7 << 0x40;
         Memory::free_static((void*)( uVar32 + -0x10 ), false);
      }

   }

   variant_indexed_setters_getters._2568_8_ = VariantIndexedSetGet_PackedVector2Array::get_indexed_size;
   variant_indexed_setters_getters._2580_4_ = uVar33;
   variant_indexed_setters_getters[0xa18] = 1;
   variant_indexed_setters_getters._2624_8_ = VariantIndexedSetGet_PackedVector3Array::ptr_set;
   variant_indexed_setters_getters._2632_8_ = VariantIndexedSetGet_PackedVector3Array::ptr_get;
   variant_indexed_setters_getters._2648_4_ = 9;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC5;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = local_60._8_8_;
   local_60 = auVar27 << 0x40;
   variant_indexed_setters_getters._2592_8_ = VariantIndexedSetGet_PackedVector3Array::set;
   variant_indexed_setters_getters._2600_8_ = VariantIndexedSetGet_PackedVector3Array::get;
   variant_indexed_setters_getters._2608_8_ = VariantIndexedSetGet_PackedVector3Array::validated_set;
   variant_indexed_setters_getters._2616_8_ = VariantIndexedSetGet_PackedVector3Array::get;
   String::parse_latin1((StrRange*)&local_80);
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 9);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010b69b:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
      lVar31 = local_80;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010b69b;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         lVar31 = local_80;
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
            lVar31 = local_80;
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
         lVar31 = local_80;
      }

   }

   local_80 = lVar31;
   if (lVar31 != 0) {
      LOCK();
      plVar1 = (long*)( lVar31 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar31 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   uVar33 = local_40;
   lVar31 = local_48;
   if (local_48 != 0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar31 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar32 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_60._8_8_;
         local_60 = auVar2 << 0x40;
         Memory::free_static((void*)( uVar32 + -0x10 ), false);
      }

   }

   variant_indexed_setters_getters._2640_8_ = VariantIndexedSetGet_PackedVector3Array::get_indexed_size;
   variant_indexed_setters_getters._2652_4_ = uVar33;
   variant_indexed_setters_getters[0xa60] = 1;
   variant_indexed_setters_getters._2480_8_ = VariantIndexedSetGet_PackedStringArray::ptr_set;
   variant_indexed_setters_getters._2488_8_ = VariantIndexedSetGet_PackedStringArray::ptr_get;
   variant_indexed_setters_getters._2504_4_ = 4;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC5;
   auVar28._8_8_ = 0;
   auVar28._0_8_ = local_60._8_8_;
   local_60 = auVar28 << 0x40;
   variant_indexed_setters_getters._2448_8_ = VariantIndexedSetGet_PackedStringArray::set;
   variant_indexed_setters_getters._2456_8_ = VariantIndexedSetGet_PackedStringArray::get;
   variant_indexed_setters_getters._2464_8_ = VariantIndexedSetGet_PackedStringArray::validated_set;
   variant_indexed_setters_getters._2472_8_ = VariantIndexedSetGet_PackedStringArray::get;
   String::parse_latin1((StrRange*)&local_80);
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 4);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010b703:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
      lVar31 = local_80;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010b703;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         lVar31 = local_80;
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
            lVar31 = local_80;
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
         lVar31 = local_80;
      }

   }

   local_80 = lVar31;
   if (lVar31 != 0) {
      LOCK();
      plVar1 = (long*)( lVar31 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar31 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   uVar33 = local_40;
   lVar31 = local_48;
   if (local_48 != 0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar31 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar32 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_60._8_8_;
         local_60 = auVar3 << 0x40;
         Memory::free_static((void*)( uVar32 + -0x10 ), false);
      }

   }

   variant_indexed_setters_getters._2496_8_ = VariantIndexedSetGet_PackedStringArray::get_indexed_size;
   variant_indexed_setters_getters._2508_4_ = uVar33;
   variant_indexed_setters_getters[0x9d0] = 1;
   variant_indexed_setters_getters._2696_8_ = VariantIndexedSetGet_PackedColorArray::ptr_set;
   variant_indexed_setters_getters._2704_8_ = VariantIndexedSetGet_PackedColorArray::ptr_get;
   variant_indexed_setters_getters._2720_4_ = 0x14;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC5;
   auVar29._8_8_ = 0;
   auVar29._0_8_ = local_60._8_8_;
   local_60 = auVar29 << 0x40;
   variant_indexed_setters_getters._2664_8_ = VariantIndexedSetGet_PackedColorArray::set;
   variant_indexed_setters_getters._2672_8_ = VariantIndexedSetGet_PackedColorArray::get;
   variant_indexed_setters_getters._2680_8_ = VariantIndexedSetGet_PackedColorArray::validated_set;
   variant_indexed_setters_getters._2688_8_ = VariantIndexedSetGet_PackedColorArray::get;
   String::parse_latin1((StrRange*)&local_80);
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 0x14);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010b76b:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
      lVar31 = local_80;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010b76b;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         lVar31 = local_80;
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
            lVar31 = local_80;
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
         lVar31 = local_80;
      }

   }

   local_80 = lVar31;
   if (lVar31 != 0) {
      LOCK();
      plVar1 = (long*)( lVar31 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar31 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   uVar33 = local_40;
   lVar31 = local_48;
   if (local_48 != 0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar31 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar32 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_60._8_8_;
         local_60 = auVar4 << 0x40;
         Memory::free_static((void*)( uVar32 + -0x10 ), false);
      }

   }

   variant_indexed_setters_getters._2712_8_ = VariantIndexedSetGet_PackedColorArray::get_indexed_size;
   variant_indexed_setters_getters._2724_4_ = uVar33;
   variant_indexed_setters_getters[0xaa8] = 1;
   variant_indexed_setters_getters._2768_8_ = VariantIndexedSetGet_PackedVector4Array::ptr_set;
   variant_indexed_setters_getters._2776_8_ = VariantIndexedSetGet_PackedVector4Array::ptr_get;
   variant_indexed_setters_getters._2792_4_ = 0xc;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC5;
   auVar30._8_8_ = 0;
   auVar30._0_8_ = local_60._8_8_;
   local_60 = auVar30 << 0x40;
   variant_indexed_setters_getters._2736_8_ = VariantIndexedSetGet_PackedVector4Array::set;
   variant_indexed_setters_getters._2744_8_ = VariantIndexedSetGet_PackedVector4Array::get;
   variant_indexed_setters_getters._2752_8_ = VariantIndexedSetGet_PackedVector4Array::validated_set;
   variant_indexed_setters_getters._2760_8_ = VariantIndexedSetGet_PackedVector4Array::get;
   String::parse_latin1((StrRange*)&local_80);
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 0xc);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 == 0x11) {
         StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
         if (local_60._8_8_ == local_70) {
            lVar31 = local_80;
            if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
               StringName::unref();
               lVar31 = local_80;
            }

         }
 else {
            StringName::unref();
            local_60._8_8_ = local_70;
            lVar31 = local_80;
         }

         goto joined_r0x0010b7f3;
      }

   }

   local_40 = 6;
   StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   lVar31 = local_80;
   joined_r0x0010b7f3:local_80 = lVar31;
   if (lVar31 != 0) {
      LOCK();
      plVar1 = (long*)( lVar31 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar31 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   uVar33 = local_40;
   lVar31 = local_48;
   if (local_48 != 0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar31 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar32 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar16._8_8_ = 0;
         auVar16._0_8_ = local_60._8_8_;
         local_60 = auVar16 << 0x40;
         Memory::free_static((void*)( uVar32 + -0x10 ), false);
      }

   }

   variant_indexed_setters_getters._2784_8_ = VariantIndexedSetGet_PackedVector4Array::get_indexed_size;
   variant_indexed_setters_getters._2796_4_ = uVar33;
   variant_indexed_setters_getters[0xaf0] = 1;
   variant_indexed_setters_getters._2072_8_ = _LC73;
   variant_indexed_setters_getters._2064_8_ = VariantIndexedSetGet_Array::get_indexed_size;
   variant_indexed_setters_getters._2048_8_ = VariantIndexedSetGet_Array::ptr_set;
   variant_indexed_setters_getters._2056_8_ = VariantIndexedSetGet_Array::ptr_get;
   variant_indexed_setters_getters[0x820] = 1;
   variant_indexed_setters_getters._2000_8_ = _LC74;
   variant_indexed_setters_getters._1992_8_ = VariantIndexedSetGet_Dictionary::get_indexed_size;
   variant_indexed_setters_getters[0x7d8] = 1;
   variant_indexed_setters_getters._2016_8_ = VariantIndexedSetGet_Array::set;
   variant_indexed_setters_getters._2024_8_ = VariantIndexedSetGet_Array::get;
   variant_indexed_setters_getters._2032_8_ = VariantIndexedSetGet_Array::validated_set;
   variant_indexed_setters_getters._2040_8_ = VariantIndexedSetGet_Array::get;
   variant_indexed_setters_getters._1944_8_ = VariantIndexedSetGet_Dictionary::set;
   variant_indexed_setters_getters._1952_8_ = VariantIndexedSetGet_Dictionary::get;
   variant_indexed_setters_getters._1960_8_ = VariantIndexedSetGet_Dictionary::validated_set;
   variant_indexed_setters_getters._1968_8_ = VariantIndexedSetGet_Dictionary::get;
   variant_indexed_setters_getters._1976_8_ = VariantIndexedSetGet_Dictionary::ptr_set;
   variant_indexed_setters_getters._1984_8_ = VariantIndexedSetGet_Dictionary::ptr_get;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Variant::has_indexing(Variant::Type) */undefined1 Variant::has_indexing(uint param_1) {
   if (param_1 < 0x27) {
      return variant_indexed_setters_getters[(long)(int)param_1 * 0x48 + 0x40];
   }

   _err_print_index_error("has_indexing", "core/variant/variant_setget.cpp", 0x3b1, (ulong)param_1, 0x27, "p_type", "Variant::VARIANT_MAX", "", false, false);
   return 0;
}
/* Variant::get_indexed_element_type(Variant::Type) */undefined4 Variant::get_indexed_element_type(uint param_1) {
   if (param_1 < 0x27) {
      return *(undefined4*)( variant_indexed_setters_getters + (long)(int)param_1 * 0x48 + 0x38 );
   }

   _err_print_index_error("get_indexed_element_type", "core/variant/variant_setget.cpp", 0x3b6, (ulong)param_1, 0x27, "p_type", "Variant::VARIANT_MAX", "", false, false);
   return 0x27;
}
/* Variant::get_indexed_element_usage(Variant::Type) */undefined4 Variant::get_indexed_element_usage(uint param_1) {
   if (param_1 < 0x27) {
      return *(undefined4*)( variant_indexed_setters_getters + (long)(int)param_1 * 0x48 + 0x3c );
   }

   _err_print_index_error("get_indexed_element_usage", "core/variant/variant_setget.cpp", 0x3bb, (ulong)param_1, 0x27, "p_type", "Variant::VARIANT_MAX", "", false, false);
   return 6;
}
/* Variant::get_member_validated_indexed_setter(Variant::Type) */undefined8 Variant::get_member_validated_indexed_setter(uint param_1) {
   if (param_1 < 0x27) {
      return *(undefined8*)( variant_indexed_setters_getters + (long)(int)param_1 * 0x48 + 0x10 );
   }

   _err_print_index_error("get_member_validated_indexed_setter", "core/variant/variant_setget.cpp", 0x3c0, (ulong)param_1, 0x27, "p_type", "Variant::VARIANT_MAX", "", false, false);
   return 0;
}
/* Variant::get_member_validated_indexed_getter(Variant::Type) */undefined8 Variant::get_member_validated_indexed_getter(uint param_1) {
   if (param_1 < 0x27) {
      return *(undefined8*)( variant_indexed_setters_getters + (long)(int)param_1 * 0x48 + 0x18 );
   }

   _err_print_index_error("get_member_validated_indexed_getter", "core/variant/variant_setget.cpp", 0x3c4, (ulong)param_1, 0x27, "p_type", "Variant::VARIANT_MAX", "", false, false);
   return 0;
}
/* Variant::get_member_ptr_indexed_setter(Variant::Type) */undefined8 Variant::get_member_ptr_indexed_setter(uint param_1) {
   if (param_1 < 0x27) {
      return *(undefined8*)( variant_indexed_setters_getters + (long)(int)param_1 * 0x48 + 0x20 );
   }

   _err_print_index_error("get_member_ptr_indexed_setter", "core/variant/variant_setget.cpp", 0x3c9, (ulong)param_1, 0x27, "p_type", "Variant::VARIANT_MAX", "", false, false);
   return 0;
}
/* Variant::get_member_ptr_indexed_getter(Variant::Type) */undefined8 Variant::get_member_ptr_indexed_getter(uint param_1) {
   if (param_1 < 0x27) {
      return *(undefined8*)( variant_indexed_setters_getters + (long)(int)param_1 * 0x48 + 0x28 );
   }

   _err_print_index_error("get_member_ptr_indexed_getter", "core/variant/variant_setget.cpp", 0x3cd, (ulong)param_1, 0x27, "p_type", "Variant::VARIANT_MAX", "", false, false);
   return 0;
}
/* Variant::set_indexed(long, Variant const&, bool&, bool&) */void Variant::set_indexed(Variant *this, long param_1, Variant *param_2, bool *param_3, bool *param_4) {
   if (variant_indexed_setters_getters[(long)*(int*)this * 0x48 + 0x40] != '\0') {
      /* WARNING: Could not recover jumptable at 0x0010c335. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( variant_indexed_setters_getters + (long)*(int*)this * 0x48 ) )(this, param_1);
      return;
   }

   *param_3 = false;
   *param_4 = false;
   return;
}
/* Variant::get_indexed(long, bool&, bool&) const */long Variant::get_indexed(long param_1, bool *param_2, bool *param_3) {
   byte *in_RCX;
   byte *in_R8;
   long in_FS_OFFSET;
   undefined8 local_38;
   undefined1 local_30[16];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (variant_indexed_setters_getters[(long)*(int*)param_2 * 0x48 + 0x40] == '\0') {
      *in_RCX = 0;
      *in_R8 = 0;
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   }
 else {
      local_38 = 0;
      local_30 = (undefined1[16])0x0;
      ( **(code**)( variant_indexed_setters_getters + (long)*(int*)param_2 * 0x48 + 8 ) )(param_2, param_3, &local_38);
      *in_RCX = *in_R8 ^ 1;
      *(undefined8*)( param_1 + 8 ) = local_30._0_8_;
      *(undefined8*)( param_1 + 0x10 ) = local_30._8_8_;
      *(undefined4*)param_1 = (undefined4)local_38;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Variant::get_indexed_size() const */undefined8 Variant::get_indexed_size(Variant *this) {
   undefined8 uVar1;
   if (( variant_indexed_setters_getters[(long)*(int*)this * 0x48 + 0x40] != '\0' ) && ( *(code**)( variant_indexed_setters_getters + (long)*(int*)this * 0x48 + 0x30 ) != (code*)0x0 )) {
      /* WARNING: Could not recover jumptable at 0x0010c435. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar1 = ( **(code**)( variant_indexed_setters_getters + (long)*(int*)this * 0x48 + 0x30 ) )();
      return uVar1;
   }

   return 0;
}
/* Variant::is_keyed(Variant::Type) */undefined1 Variant::is_keyed(uint param_1) {
   if (param_1 < 0x27) {
      return variant_keyed_setters_getters[(long)(int)param_1 * 0x38 + 0x30];
   }

   _err_print_index_error("is_keyed", "core/variant/variant_setget.cpp", 0x469, (ulong)param_1, 0x27, "p_type", "VARIANT_MAX", "", false, false);
   return 0;
}
/* Variant::get_member_validated_keyed_setter(Variant::Type) */undefined8 Variant::get_member_validated_keyed_setter(uint param_1) {
   if (param_1 < 0x27) {
      return *(undefined8*)( variant_keyed_setters_getters + (long)(int)param_1 * 0x38 );
   }

   _err_print_index_error("get_member_validated_keyed_setter", "core/variant/variant_setget.cpp", 0x46e, (ulong)param_1, 0x27, "p_type", "VARIANT_MAX", "", false, false);
   return 0;
}
/* Variant::get_member_validated_keyed_getter(Variant::Type) */undefined8 Variant::get_member_validated_keyed_getter(uint param_1) {
   if (param_1 < 0x27) {
      return *(undefined8*)( variant_keyed_setters_getters + (long)(int)param_1 * 0x38 + 8 );
   }

   _err_print_index_error("get_member_validated_keyed_getter", "core/variant/variant_setget.cpp", 0x472, (ulong)param_1, 0x27, "p_type", "VARIANT_MAX", "", false, false);
   return 0;
}
/* Variant::get_member_validated_keyed_checker(Variant::Type) */undefined8 Variant::get_member_validated_keyed_checker(uint param_1) {
   if (param_1 < 0x27) {
      return *(undefined8*)( variant_keyed_setters_getters + (long)(int)param_1 * 0x38 + 0x10 );
   }

   _err_print_index_error("get_member_validated_keyed_checker", "core/variant/variant_setget.cpp", 0x476, (ulong)param_1, 0x27, "p_type", "VARIANT_MAX", "", false, false);
   return 0;
}
/* Variant::get_member_ptr_keyed_setter(Variant::Type) */undefined8 Variant::get_member_ptr_keyed_setter(uint param_1) {
   if (param_1 < 0x27) {
      return *(undefined8*)( variant_keyed_setters_getters + (long)(int)param_1 * 0x38 + 0x18 );
   }

   _err_print_index_error("get_member_ptr_keyed_setter", "core/variant/variant_setget.cpp", 0x47b, (ulong)param_1, 0x27, "p_type", "VARIANT_MAX", "", false, false);
   return 0;
}
/* Variant::get_member_ptr_keyed_getter(Variant::Type) */undefined8 Variant::get_member_ptr_keyed_getter(uint param_1) {
   if (param_1 < 0x27) {
      return *(undefined8*)( variant_keyed_setters_getters + (long)(int)param_1 * 0x38 + 0x20 );
   }

   _err_print_index_error("get_member_ptr_keyed_getter", "core/variant/variant_setget.cpp", 0x47f, (ulong)param_1, 0x27, "p_type", "VARIANT_MAX", "", false, false);
   return 0;
}
/* Variant::get_member_ptr_keyed_checker(Variant::Type) */undefined8 Variant::get_member_ptr_keyed_checker(uint param_1) {
   if (param_1 < 0x27) {
      return *(undefined8*)( variant_keyed_setters_getters + (long)(int)param_1 * 0x38 + 0x28 );
   }

   _err_print_index_error("get_member_ptr_keyed_checker", "core/variant/variant_setget.cpp", 0x483, (ulong)param_1, 0x27, "p_type", "VARIANT_MAX", "", false, false);
   return 0;
}
/* Variant::set_keyed(Variant const&, Variant const&, bool&) */void Variant::set_keyed(Variant *this, Variant *param_1, Variant *param_2, bool *param_3) {
   if (variant_keyed_setters_getters[(long)*(int*)this * 0x38 + 0x30] != '\0') {
      /* WARNING: Could not recover jumptable at 0x0010c783. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( variant_keyed_setters_getters + (long)*(int*)this * 0x38 ) )();
      return;
   }

   *param_3 = false;
   return;
}
/* Variant::get_keyed(Variant const&, bool&) const */Variant *Variant::get_keyed(Variant *param_1, bool *param_2) {
   long lVar1;
   undefined1 *in_RCX;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (variant_keyed_setters_getters[(long)*(int*)param_2 * 0x38 + 0x30] == '\0') {
      *in_RCX = 0;
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   }
 else {
      ( **(code**)( variant_keyed_setters_getters + (long)*(int*)param_2 * 0x38 + 8 ) )();
      *(undefined4*)param_1 = 0;
      *(undefined8*)( param_1 + 8 ) = 0;
      *(undefined8*)( param_1 + 0x10 ) = 0;
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Variant::has_key(Variant const&, bool&) const */undefined8 Variant::has_key(Variant *this, Variant *param_1, bool *param_2) {
   undefined8 uVar1;
   if (variant_keyed_setters_getters[(long)*(int*)this * 0x38 + 0x30] != '\0') {
      /* WARNING: Could not recover jumptable at 0x0010c853. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar1 = ( **(code**)( variant_keyed_setters_getters + (long)*(int*)this * 0x38 + 0x10 ) )();
      return uVar1;
   }

   *param_2 = false;
   return 0;
}
/* Variant::set(Variant const&, Variant const&, bool*, Variant::VariantSetError*) */void Variant::set(Variant *this, Variant *param_1, Variant *param_2, bool *param_3, VariantSetError *param_4) {
   long lVar1;
   int iVar2;
   int iVar3;
   long lVar4;
   long in_FS_OFFSET;
   bool local_39;
   StringName local_38;
   undefined7 uStack_37;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_4 != (VariantSetError*)0x0) {
      *(undefined4*)param_4 = 0;
   }

   iVar2 = *(int*)this;
   if (( iVar2 == 0x1b ) || ( iVar2 == 0x18 )) {
      lVar4 = (long)iVar2 * 0x38;
      if (variant_keyed_setters_getters[lVar4 + 0x30] == '\0') {
         local_38 = (StringName)0x0;
      }
 else {
         ( **(code**)( variant_keyed_setters_getters + lVar4 ) )(this, param_1, param_2, &local_38);
      }

      if (param_3 != (bool*)0x0) {
         *param_3 = (bool)local_38;
         if (( param_4 != (VariantSetError*)0x0 ) && ( local_38 != (StringName)0x1 )) {
            *(undefined4*)param_4 = 1;
         }

      }

      goto LAB_0010c8ee;
   }

   iVar3 = *(int*)param_1;
   local_39 = false;
   if (iVar3 == 0x15) {
      set_named(this, (StringName*)( param_1 + 8 ), param_2, &local_39);
      LAB_0010c9cc:if (( local_39 != true ) && ( param_4 != (VariantSetError*)0x0 )) {
         *(undefined4*)param_4 = 2;
      }

   }
 else if (iVar3 == 2) {
      lVar4 = *(long*)( param_1 + 8 );
      LAB_0010c964:lVar1 = (long)iVar2 * 0x48;
      if (variant_indexed_setters_getters[lVar1 + 0x40] != '\0') {
         ( **(code**)( variant_indexed_setters_getters + lVar1 ) )(this, lVar4, param_2, &local_39, &local_38);
         if (( local_38 != (StringName)0x0 ) && ( local_39 = false ),param_4 != (VariantSetError*)0x0) {
            *(undefined4*)param_4 = 3;
         }

      }

   }
 else {
      if (iVar3 == 4) {
         StringName::StringName(&local_38, (String*)( param_1 + 8 ), false);
         set_named(this, &local_38, param_2, &local_39);
         if (( StringName::configured != '\0' ) && ( CONCAT71(uStack_37, local_38) != 0 )) {
            StringName::unref();
         }

         goto LAB_0010c9cc;
      }

      if (iVar3 == 3) {
         lVar4 = (long)*(double*)( param_1 + 8 );
         goto LAB_0010c964;
      }

   }

   if (param_3 != (bool*)0x0) {
      *param_3 = local_39;
   }

   LAB_0010c8ee:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Variant::get(Variant const&, bool*, Variant::VariantGetError*) const */Variant *Variant::get(Variant *param_1, bool *param_2, VariantGetError *param_3) {
   int iVar1;
   StringName *in_RCX;
   undefined4 *in_R8;
   long in_FS_OFFSET;
   bool bVar2;
   StringName local_50;
   undefined7 uStack_4f;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_R8 != (undefined4*)0x0) {
      *in_R8 = 0;
   }

   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( *(int*)param_2 == 0x1b ) || ( *(int*)param_2 == 0x18 )) {
      get_keyed((Variant*)local_48, param_2);
      if (needs_deinit[*(int*)param_1] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_48[0];
      *(undefined8*)( param_1 + 8 ) = local_40;
      *(undefined8*)( param_1 + 0x10 ) = uStack_38;
      if (( ( in_RCX != (StringName*)0x0 ) && ( *in_RCX = local_50 ),in_R8 != (undefined4*)0x0 )) &&( local_50 != (StringName)0x1 ) * in_R8 = 1;
   }

   goto LAB_0010caed;
}
iVar1 = *(int*)param_3;if (iVar1 == 0x15) {
   get_named((StringName*)local_48, param_2);
   if (needs_deinit[*(int*)param_1] != '\0') {
      ::Variant::_clear_internal();
   }

   *(undefined4*)param_1 = local_48[0];
   *(undefined8*)( param_1 + 8 ) = local_40;
   *(undefined8*)( param_1 + 0x10 ) = uStack_38;
   LAB_0010cc1a:if (in_R8 != (undefined4*)0x0) {
      *in_R8 = 2;
   }

}
 else if (iVar1 == 2) {
   get_indexed((long)local_48, param_2, *(bool**)( param_3 + 8 ));
   if (needs_deinit[*(int*)param_1] != '\0') {
      ::Variant::_clear_internal();
   }

   *(undefined4*)param_1 = local_48[0];
   *(undefined8*)( param_1 + 8 ) = local_40;
   *(undefined8*)( param_1 + 0x10 ) = uStack_38;
   joined_r0x0010cbbc:if (( local_50 != (StringName)0x0 ) && ( in_R8 != (undefined4*)0x0 )) {
      *in_R8 = 3;
   }

}
 else {
   if (iVar1 == 4) {
      StringName::StringName(&local_50, (String*)( param_3 + 8 ), false);
      get_named((StringName*)local_48, param_2);
      if (needs_deinit[*(int*)param_1] != '\0') {
         ::Variant::_clear_internal();
      }

      bVar2 = StringName::configured != '\0';
      *(undefined4*)param_1 = local_48[0];
      *(undefined8*)( param_1 + 8 ) = local_40;
      *(undefined8*)( param_1 + 0x10 ) = uStack_38;
      if (( bVar2 ) && ( CONCAT71(uStack_4f, local_50) != 0 )) {
         StringName::unref();
      }

      goto LAB_0010cc1a;
   }

   if (iVar1 == 3) {
      get_indexed((long)local_48, param_2, (bool*)(long)*(double*)( param_3 + 8 ));
      if (needs_deinit[*(int*)param_1] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_48[0];
      *(undefined8*)( param_1 + 8 ) = local_40;
      *(undefined8*)( param_1 + 0x10 ) = uStack_38;
      goto joined_r0x0010cbbc;
   }

}
if (in_RCX != (StringName*)0x0) {
   *in_RCX = (StringName)0x0;
}
LAB_0010caed:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return param_1;}/* Variant::iter_init(Variant&, bool&) const */ulong Variant::iter_init(Variant *this, Variant *param_1, bool *param_2) {
   float fVar1;
   float fVar2;
   float fVar3;
   int iVar4;
   undefined3 uVar5;
   uint uVar6;
   char cVar7;
   int iVar8;
   ulong uVar9;
   Variant *pVVar10;
   uint uVar11;
   ulong *puVar12;
   long lVar13;
   long in_FS_OFFSET;
   bool bVar14;
   Array local_98[8];
   uint local_90[4];
   Variant *local_80;
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_2 = true;
   switch (*(undefined4*)this) {
      default:
    goto switchD_0010cd93_caseD_0;
      case 2:
    ::Variant::Variant((Variant *)local_58,0);
    if (needs_deinit[*(int *)param_1] != '\0') {
      ::Variant::_clear_internal();
    }
    *(int *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    uVar9 = (ulong)CONCAT31((int3)((uint)local_58[0] >> 8),0 < *(long *)(this + 8));
    goto LAB_0010cdd0;
      case 3:
    ::Variant::Variant((Variant *)local_58,0.0);
    if (needs_deinit[*(int *)param_1] != '\0') {
      ::Variant::_clear_internal();
    }
    *(int *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    uVar9 = (ulong)CONCAT31((int3)((uint)local_58[0] >> 8),0.0 < *(double *)(this + 8));
    goto LAB_0010cdd0;
      case 4:
    if ((*(long *)(this + 8) != 0) && (1 < *(uint *)(*(long *)(this + 8) + -8))) {
LAB_0010d217:
      ::Variant::Variant((Variant *)local_58,0);
      if (needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
      }
      *(int *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
LAB_0010ce3e:
      uVar9 = 1;
      goto LAB_0010cdd0;
    }
    break;
      case 5:
    fVar1 = *(float *)(this + 8);
    fVar2 = *(float *)(this + 0xc);
    ::Variant::Variant((Variant *)local_58,(double)fVar1);
    if (needs_deinit[*(int *)param_1] != '\0') {
      ::Variant::_clear_internal();
    }
    *(int *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    uVar9 = (ulong)CONCAT31((int3)((uint)local_58[0] >> 8),fVar1 < fVar2);
    goto LAB_0010cdd0;
      case 6:
    iVar8 = *(int *)(this + 8);
    iVar4 = *(int *)(this + 0xc);
    ::Variant::Variant((Variant *)local_58,(long)iVar8);
    if (needs_deinit[*(int *)param_1] != '\0') {
      ::Variant::_clear_internal();
    }
    *(int *)param_1 = local_58[0];
    uVar9 = (ulong)CONCAT31((int3)((uint)local_58[0] >> 8),(long)iVar8 < (long)iVar4);
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    goto LAB_0010cdd0;
      case 9:
    fVar1 = *(float *)(this + 8);
    fVar2 = *(float *)(this + 0xc);
    fVar3 = *(float *)(this + 0x10);
    ::Variant::Variant((Variant *)local_58,(double)fVar1);
    if (needs_deinit[*(int *)param_1] != '\0') {
      ::Variant::_clear_internal();
    }
    *(int *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    uVar5 = (undefined3)((uint)local_58[0] >> 8);
    if (!NAN(fVar1) && !NAN(fVar2)) {
      if (fVar1 == fVar2) break;
      if (fVar1 <= fVar2) {
        uVar9 = (ulong)CONCAT31(uVar5,0.0 < fVar3);
        goto LAB_0010cdd0;
      }
    }
    uVar9 = (ulong)CONCAT31(uVar5,fVar3 < 0.0);
    goto LAB_0010cdd0;
      case 10:
    lVar13 = (long)*(int *)(this + 8);
    iVar8 = *(int *)(this + 0xc);
    iVar4 = *(int *)(this + 0x10);
    ::Variant::Variant((Variant *)local_58,lVar13);
    if (needs_deinit[*(int *)param_1] != '\0') {
      ::Variant::_clear_internal();
    }
    *(int *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    if (lVar13 != iVar8) {
      uVar9 = (ulong)(long)iVar4 >> 0x3f;
      if (lVar13 < iVar8) {
        uVar9 = (ulong)(0 < (long)iVar4);
      }
      goto LAB_0010cdd0;
    }
    break;
      case 0x18:
    if (*(long *)(this + 0x10) != 0) {
      if (((EngineDebugger::singleton == 0) || (EngineDebugger::script_debugger == 0)) ||
         (uVar9 = *(ulong *)(this + 8), (long)uVar9 < 0)) {
LAB_0010cf78:
        local_90[0] = 0;
        local_90[1] = 0;
        local_90[2] = 0;
        Array::Array(local_98);
        Array::push_back((Variant *)local_98);
        ::Variant::Variant((Variant *)local_78,local_98);
        local_80 = (Variant *)local_78;
        (**(code **)(**(long **)(this + 0x10) + 0x68))
                  ((Variant *)local_58,*(long **)(this + 0x10),CoreStringNames::singleton + 0x20,
                   &local_80,1,local_90);
        iVar8 = Array::size();
        if ((iVar8 == 1) && (local_90[0] == 0)) {
          pVVar10 = (Variant *)Array::operator[]((int)local_98);
          ::Variant::operator=(param_1,pVVar10);
          bVar14 = ::Variant::operator_cast_to_bool((Variant *)local_58);
        }
        else {
          *param_2 = false;
          bVar14 = false;
        }
        if (needs_deinit[local_58[0]] != '\0') {
          ::Variant::_clear_internal();
        }
        if (needs_deinit[local_78[0]] != '\0') {
          ::Variant::_clear_internal();
        }
        Array::~Array(local_98);
        uVar9 = (ulong)bVar14;
        goto LAB_0010cdd0;
      }
      uVar11 = (uint)uVar9 & 0xffffff;
      if (uVar11 < (uint)ObjectDB::slot_max) {
        while( true ) {
          uVar6 = local_90[0] >> 8;
          local_90[0] = uVar6 << 8;
          LOCK();
          bVar14 = (char)ObjectDB::spin_lock == '\0';
          if (bVar14) {
            ObjectDB::spin_lock._0_1_ = '\x01';
          }
          UNLOCK();
          if (bVar14) break;
          local_90[0] = uVar6 << 8;
          do {
          } while ((char)ObjectDB::spin_lock != '\0');
        }
        puVar12 = (ulong *)((ulong)uVar11 * 0x10 + ObjectDB::object_slots);
        if (uVar9 >> 0x18 == (*puVar12 & 0x7fffffffff)) {
          ObjectDB::spin_lock._0_1_ = '\0';
          if (puVar12[1] != 0) goto LAB_0010cf78;
        }
        else {
          ObjectDB::spin_lock._0_1_ = '\0';
        }
      }
      else {
        _err_print_error("get_instance","./core/object/object.h",0x418,
                         "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
      }
    }
    goto switchD_0010cd93_caseD_0;
      case 0x1b:
    cVar7 = Dictionary::is_empty();
    if (cVar7 == '\0') {
      pVVar10 = (Variant *)Dictionary::next(this + 8);
      ::Variant::operator=(param_1,pVVar10);
      goto LAB_0010ce3e;
    }
    break;
      case 0x1c:
    cVar7 = Array::is_empty();
    if (cVar7 == '\0') {
LAB_0010ce64:
      ::Variant::Variant((Variant *)local_58,0);
      if (needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
      }
      *(int *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      goto LAB_0010ce3e;
    }
    break;
      case 0x1d:
      case 0x1e:
      case 0x20:
      case 0x26:
    if ((*(long *)(*(long *)(this + 8) + 0x18) != 0) &&
       (*(long *)(*(long *)(*(long *)(this + 8) + 0x18) + -8) != 0)) {
      ::Variant::Variant((Variant *)local_58,0);
      if (needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
      }
      *(int *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      goto LAB_0010ce3e;
    }
    break;
      case 0x1f:
      case 0x21:
    if ((*(long *)(*(long *)(this + 8) + 0x18) != 0) &&
       (*(long *)(*(long *)(*(long *)(this + 8) + 0x18) + -8) != 0)) goto LAB_0010ce64;
    break;
      case 0x22:
    if ((*(long *)(*(long *)(this + 8) + 0x18) != 0) &&
       (*(long *)(*(long *)(*(long *)(this + 8) + 0x18) + -8) != 0)) {
      ::Variant::Variant((Variant *)local_58,0);
      if (needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
      }
      *(int *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      goto LAB_0010ce3e;
    }
    break;
      case 0x23:
    if ((*(long *)(*(long *)(this + 8) + 0x18) != 0) &&
       (*(long *)(*(long *)(*(long *)(this + 8) + 0x18) + -8) != 0)) goto LAB_0010d217;
    break;
      case 0x24:
    if ((*(long *)(*(long *)(this + 8) + 0x18) != 0) &&
       (*(long *)(*(long *)(*(long *)(this + 8) + 0x18) + -8) != 0)) {
      ::Variant::Variant((Variant *)local_58,0);
      if (needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
      }
      *(int *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      goto LAB_0010ce3e;
    }
    break;
      case 0x25:
    if ((*(long *)(*(long *)(this + 8) + 0x18) != 0) &&
       (*(long *)(*(long *)(*(long *)(this + 8) + 0x18) + -8) != 0)) {
      ::Variant::Variant((Variant *)local_58,0);
      if (needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
      }
      *(int *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      goto LAB_0010ce3e;
    }
   }

   LAB_0010cdc8:uVar9 = 0;
   LAB_0010cdd0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar9;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   switchD_0010cd93_caseD_0:*param_2 = false;
   goto LAB_0010cdc8;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Variant::iter_next(Variant&, bool&) const */bool Variant::iter_next(Variant *this, Variant *param_1, bool *param_2) {
   float fVar1;
   float fVar2;
   char cVar3;
   ulong uVar4;
   uint uVar5;
   int iVar6;
   int iVar7;
   long lVar8;
   long lVar9;
   Variant *pVVar10;
   uint uVar11;
   ulong *puVar12;
   long in_FS_OFFSET;
   bool bVar13;
   double dVar14;
   Array local_98[8];
   uint local_90;
   undefined8 local_8c;
   Variant *local_80;
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_2 = true;
   switch (*(undefined4*)this) {
      case 2:
    lVar9 = ::Variant::operator_cast_to_long(param_1);
    if (lVar9 + 1 < *(long *)(this + 8)) {
      ::Variant::Variant((Variant *)local_58,lVar9 + 1);
      cVar3 = needs_deinit[*(int *)param_1];
joined_r0x0010dc8c:
      if (cVar3 != '\0') {
        ::Variant::_clear_internal();
      }
      *(int *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
LAB_0010d72c:
      bVar13 = true;
      goto LAB_0010d5ea;
    }
    break;
      case 3:
    dVar14 = ::Variant::operator_cast_to_double(param_1);
    dVar14 = dVar14 + __LC95;
    if (dVar14 < *(double *)(this + 8)) goto LAB_0010d80b;
    break;
      case 4:
    iVar6 = ::Variant::operator_cast_to_int(param_1);
    iVar6 = iVar6 + 1;
    if (*(long *)(this + 8) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = (int)*(undefined8 *)(*(long *)(this + 8) + -8);
      iVar7 = iVar7 + -1 + (uint)(iVar7 == 0);
    }
    if (iVar6 < iVar7) {
LAB_0010d7ca:
      ::Variant::Variant((Variant *)local_58,iVar6);
      cVar3 = needs_deinit[*(int *)param_1];
joined_r0x0010d783:
      if (cVar3 != '\0') {
        ::Variant::_clear_internal();
      }
      *(int *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      goto LAB_0010d72c;
    }
    break;
      case 5:
    fVar1 = *(float *)(this + 0xc);
    dVar14 = ::Variant::operator_cast_to_double(param_1);
    if (dVar14 + __LC95 < (double)fVar1) {
      ::Variant::Variant((Variant *)local_58,dVar14 + __LC95);
      cVar3 = needs_deinit[*(int *)param_1];
      goto joined_r0x0010dc8c;
    }
    break;
      case 6:
    iVar6 = *(int *)(this + 0xc);
    lVar9 = ::Variant::operator_cast_to_long(param_1);
    if (lVar9 + 1 < (long)iVar6) {
      ::Variant::Variant((Variant *)local_58,lVar9 + 1);
      cVar3 = needs_deinit[*(int *)param_1];
joined_r0x0010dc3a:
      if (cVar3 != '\0') {
        ::Variant::_clear_internal();
      }
      *(int *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      goto LAB_0010d72c;
    }
    break;
      case 9:
    fVar1 = *(float *)(this + 0x10);
    fVar2 = *(float *)(this + 0xc);
    dVar14 = ::Variant::operator_cast_to_double(param_1);
    dVar14 = dVar14 + (double)fVar1;
    if (fVar1 < 0.0) {
      if ((double)fVar2 < dVar14) goto LAB_0010d80b;
    }
    else if ((fVar1 <= 0.0) || (dVar14 < (double)fVar2)) {
LAB_0010d80b:
      ::Variant::Variant((Variant *)local_58,dVar14);
      cVar3 = needs_deinit[*(int *)param_1];
      goto joined_r0x0010dc3a;
    }
    break;
      case 10:
    lVar8 = (long)*(int *)(this + 0x10);
    iVar6 = *(int *)(this + 0xc);
    lVar9 = ::Variant::operator_cast_to_long(param_1);
    lVar9 = lVar8 + lVar9;
    if (((-1 < lVar8) || (iVar6 < lVar9)) && ((lVar8 < 1 || (lVar9 < iVar6)))) {
      ::Variant::Variant((Variant *)local_58,lVar9);
      cVar3 = needs_deinit[*(int *)param_1];
joined_r0x0010dae5:
      if (cVar3 != '\0') {
        ::Variant::_clear_internal();
      }
      *(int *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      goto LAB_0010d72c;
    }
    break;
      case 0x18:
    if (*(long *)(this + 0x10) != 0) {
      if (((EngineDebugger::singleton == 0) || (EngineDebugger::script_debugger == 0)) ||
         (uVar4 = *(ulong *)(this + 8), (long)uVar4 < 0)) {
LAB_0010d9b8:
        local_90 = 0;
        local_8c = 0;
        Array::Array(local_98);
        Array::push_back((Variant *)local_98);
        ::Variant::Variant((Variant *)local_78,local_98);
        local_80 = (Variant *)local_78;
        (**(code **)(**(long **)(this + 0x10) + 0x68))
                  ((Variant *)local_58,*(long **)(this + 0x10),CoreStringNames::singleton + 0x28,
                   &local_80,1,&local_90);
        iVar6 = Array::size();
        if ((iVar6 == 1) && (local_90 == 0)) {
          pVVar10 = (Variant *)Array::operator[]((int)local_98);
          ::Variant::operator=(param_1,pVVar10);
          bVar13 = ::Variant::operator_cast_to_bool((Variant *)local_58);
        }
        else {
          *param_2 = false;
          bVar13 = false;
        }
        if (needs_deinit[local_58[0]] != '\0') {
          ::Variant::_clear_internal();
        }
        if (needs_deinit[local_78[0]] != '\0') {
          ::Variant::_clear_internal();
        }
        Array::~Array(local_98);
        goto LAB_0010d5ea;
      }
      uVar11 = (uint)uVar4 & 0xffffff;
      if (uVar11 < (uint)ObjectDB::slot_max) {
        while( true ) {
          uVar5 = local_90 >> 8;
          local_90 = uVar5 << 8;
          LOCK();
          bVar13 = (char)ObjectDB::spin_lock == '\0';
          if (bVar13) {
            ObjectDB::spin_lock._0_1_ = '\x01';
          }
          UNLOCK();
          if (bVar13) break;
          local_90 = uVar5 << 8;
          do {
          } while ((char)ObjectDB::spin_lock != '\0');
        }
        puVar12 = (ulong *)((ulong)uVar11 * 0x10 + ObjectDB::object_slots);
        if (uVar4 >> 0x18 == (*puVar12 & 0x7fffffffff)) {
          ObjectDB::spin_lock._0_1_ = '\0';
          if (puVar12[1] != 0) goto LAB_0010d9b8;
        }
        else {
          ObjectDB::spin_lock._0_1_ = '\0';
        }
      }
      else {
        _err_print_error("get_instance","./core/object/object.h",0x418,
                         "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
      }
    }
      default:
    *param_2 = false;
    break;
      case 0x1b:
    pVVar10 = (Variant *)Dictionary::next(this + 8);
    if (pVVar10 != (Variant *)0x0) {
      ::Variant::operator=(param_1,pVVar10);
      goto LAB_0010d72c;
    }
    break;
      case 0x1c:
    iVar6 = ::Variant::operator_cast_to_int(param_1);
    iVar6 = iVar6 + 1;
    iVar7 = Array::size();
    if (iVar6 < iVar7) {
LAB_0010d6a1:
      ::Variant::Variant((Variant *)local_58,iVar6);
      if (needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
      }
      *(int *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      goto LAB_0010d72c;
    }
    break;
      case 0x1d:
      case 0x23:
    lVar9 = *(long *)(this + 8);
    iVar6 = ::Variant::operator_cast_to_int(param_1);
    if (*(long *)(lVar9 + 0x18) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(*(long *)(lVar9 + 0x18) + -8);
    }
    if (iVar6 + 1 < lVar9) {
      ::Variant::Variant((Variant *)local_58,iVar6 + 1);
      cVar3 = needs_deinit[*(int *)param_1];
      goto joined_r0x0010dc8c;
    }
    break;
      case 0x1e:
      case 0x24:
    lVar9 = *(long *)(this + 8);
    iVar6 = ::Variant::operator_cast_to_int(param_1);
    if (*(long *)(lVar9 + 0x18) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(*(long *)(lVar9 + 0x18) + -8);
    }
    if (iVar6 + 1 < lVar9) {
      ::Variant::Variant((Variant *)local_58,iVar6 + 1);
      cVar3 = needs_deinit[*(int *)param_1];
      goto joined_r0x0010dc3a;
    }
    break;
      case 0x1f:
    lVar9 = *(long *)(this + 8);
    lVar8 = ::Variant::operator_cast_to_long(param_1);
    if (*(long *)(lVar9 + 0x18) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(*(long *)(lVar9 + 0x18) + -8);
    }
    if (lVar8 + 1 < lVar9) {
      ::Variant::Variant((Variant *)local_58,lVar8 + 1);
      cVar3 = needs_deinit[*(int *)param_1];
      goto joined_r0x0010d783;
    }
    break;
      case 0x20:
      case 0x26:
    lVar9 = *(long *)(this + 8);
    iVar6 = ::Variant::operator_cast_to_int(param_1);
    iVar6 = iVar6 + 1;
    if (*(long *)(lVar9 + 0x18) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(*(long *)(lVar9 + 0x18) + -8);
    }
    if (iVar6 < lVar9) goto LAB_0010d6a1;
    break;
      case 0x21:
    lVar9 = *(long *)(this + 8);
    iVar6 = ::Variant::operator_cast_to_int(param_1);
    if (*(long *)(lVar9 + 0x18) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(*(long *)(lVar9 + 0x18) + -8);
    }
    if (iVar6 + 1 < lVar9) {
      ::Variant::Variant((Variant *)local_58,iVar6 + 1);
      cVar3 = needs_deinit[*(int *)param_1];
      goto joined_r0x0010dae5;
    }
    break;
      case 0x22:
    lVar9 = *(long *)(this + 8);
    iVar6 = ::Variant::operator_cast_to_int(param_1);
    if (*(long *)(lVar9 + 0x18) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(*(long *)(lVar9 + 0x18) + -8);
    }
    if (iVar6 + 1 < lVar9) {
      ::Variant::Variant((Variant *)local_58,iVar6 + 1);
      if (needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
      }
      *(int *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      goto LAB_0010d72c;
    }
    break;
      case 0x25:
    lVar9 = *(long *)(this + 8);
    iVar6 = ::Variant::operator_cast_to_int(param_1);
    iVar6 = iVar6 + 1;
    if (*(long *)(lVar9 + 0x18) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(*(long *)(lVar9 + 0x18) + -8);
    }
    if (iVar6 < lVar9) goto LAB_0010d7ca;
   }

   bVar13 = false;
   LAB_0010d5ea:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar13;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Variant::iter_get(Variant const&, bool&) const */Variant *Variant::iter_get(Variant *param_1, bool *param_2) {
   char cVar1;
   long lVar2;
   ulong uVar3;
   uint uVar4;
   int iVar5;
   int iVar6;
   Variant *pVVar7;
   long lVar8;
   uint uVar9;
   undefined1 *in_RCX;
   ulong *puVar10;
   Variant *in_RDX;
   long *plVar11;
   long in_FS_OFFSET;
   bool bVar12;
   uint local_60;
   undefined4 uStack_5c;
   undefined4 uStack_58;
   undefined1 local_50[8];
   int local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *in_RCX = 1;
   switch (*(undefined4*)param_2) {
      case 2:
      case 3:
      case 5:
      case 6:
      case 9:
      case 10:
      case 0x1b:
    ::Variant::Variant(param_1,in_RDX);
    goto LAB_0010de44;
      case 4:
    ::Variant::operator_cast_to_int(in_RDX);
    String::substr((int)(String *)&local_60,(int)param_2 + 8);
    ::Variant::Variant(param_1,(String *)&local_60);
    if (CONCAT44(uStack_5c,local_60) != 0) {
      LOCK();
      plVar11 = (long *)(CONCAT44(uStack_5c,local_60) + -0x10);
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        lVar2 = CONCAT44(uStack_5c,local_60);
        local_60 = 0;
        uStack_5c = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    goto LAB_0010de44;
      case 0x18:
    plVar11 = *(long **)(param_2 + 0x10);
    if (plVar11 != (long *)0x0) {
      if (((EngineDebugger::singleton == 0) || (EngineDebugger::script_debugger == 0)) ||
         (uVar3 = *(ulong *)(param_2 + 8), (long)uVar3 < 0)) {
LAB_0010e150:
        local_60 = 0;
        uStack_5c = 0;
        uStack_58 = 0;
        (**(code **)(*plVar11 + 0x68))
                  (local_48,plVar11,CoreStringNames::singleton + 0x30,local_50,1,&local_60);
        if (local_60 == 0) {
          *(int *)param_1 = local_48[0];
          *(undefined8 *)(param_1 + 8) = local_40;
          *(undefined8 *)(param_1 + 0x10) = uStack_38;
        }
        else {
          *in_RCX = 0;
          *(undefined4 *)param_1 = 0;
          cVar1 = needs_deinit[local_48[0]];
          *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
          if (cVar1 != '\0') {
            ::Variant::_clear_internal();
          }
        }
        goto LAB_0010de44;
      }
      uVar9 = (uint)uVar3 & 0xffffff;
      if (uVar9 < (uint)ObjectDB::slot_max) {
        while( true ) {
          uVar4 = local_60 >> 8;
          local_60 = uVar4 << 8;
          LOCK();
          bVar12 = (char)ObjectDB::spin_lock == '\0';
          if (bVar12) {
            ObjectDB::spin_lock._0_1_ = '\x01';
          }
          UNLOCK();
          if (bVar12) break;
          local_60 = uVar4 << 8;
          do {
          } while ((char)ObjectDB::spin_lock != '\0');
        }
        puVar10 = (ulong *)((ulong)uVar9 * 0x10 + ObjectDB::object_slots);
        if (uVar3 >> 0x18 == (*puVar10 & 0x7fffffffff)) {
          ObjectDB::spin_lock._0_1_ = '\0';
          if (puVar10[1] != 0) {
            plVar11 = *(long **)(param_2 + 0x10);
            goto LAB_0010e150;
          }
        }
        else {
          ObjectDB::spin_lock._0_1_ = '\0';
        }
      }
      else {
        _err_print_error("get_instance","./core/object/object.h",0x418,
                         "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
      }
    }
    break;
      case 0x1c:
    iVar5 = ::Variant::operator_cast_to_int(in_RDX);
    if (-1 < iVar5) {
      iVar6 = Array::size();
      if (iVar5 < iVar6) {
        pVVar7 = (Variant *)Array::get((int)param_2 + 8);
        ::Variant::Variant(param_1,pVVar7);
        goto LAB_0010de44;
      }
    }
    break;
      case 0x1d:
    lVar2 = *(long *)(param_2 + 8);
    iVar5 = ::Variant::operator_cast_to_int(in_RDX);
    if (-1 < iVar5) {
      lVar2 = *(long *)(lVar2 + 0x18);
      if ((lVar2 != 0) && ((long)iVar5 < *(long *)(lVar2 + -8))) {
        ::Variant::Variant(param_1,*(uchar *)(lVar2 + iVar5));
        goto LAB_0010de44;
      }
    }
    break;
      case 0x1e:
    lVar2 = *(long *)(param_2 + 8);
    iVar5 = ::Variant::operator_cast_to_int(in_RDX);
    if (-1 < iVar5) {
      lVar2 = *(long *)(lVar2 + 0x18);
      if ((lVar2 != 0) && ((long)iVar5 < *(long *)(lVar2 + -8))) {
        ::Variant::Variant(param_1,*(int *)(lVar2 + (long)iVar5 * 4));
        goto LAB_0010de44;
      }
    }
    break;
      case 0x1f:
    lVar2 = *(long *)(param_2 + 8);
    lVar8 = ::Variant::operator_cast_to_long(in_RDX);
    if (((-1 < lVar8) && (lVar2 = *(long *)(lVar2 + 0x18), lVar2 != 0)) &&
       (lVar8 < *(long *)(lVar2 + -8))) {
      ::Variant::Variant(param_1,*(long *)(lVar2 + lVar8 * 8));
      goto LAB_0010de44;
    }
    break;
      case 0x20:
    lVar2 = *(long *)(param_2 + 8);
    iVar5 = ::Variant::operator_cast_to_int(in_RDX);
    if (-1 < iVar5) {
      lVar2 = *(long *)(lVar2 + 0x18);
      if ((lVar2 != 0) && ((long)iVar5 < *(long *)(lVar2 + -8))) {
        ::Variant::Variant(param_1,*(float *)(lVar2 + (long)iVar5 * 4));
        goto LAB_0010de44;
      }
    }
    break;
      case 0x21:
    lVar2 = *(long *)(param_2 + 8);
    iVar5 = ::Variant::operator_cast_to_int(in_RDX);
    if (-1 < iVar5) {
      lVar2 = *(long *)(lVar2 + 0x18);
      if ((lVar2 != 0) && ((long)iVar5 < *(long *)(lVar2 + -8))) {
        ::Variant::Variant(param_1,*(double *)(lVar2 + (long)iVar5 * 8));
        goto LAB_0010de44;
      }
    }
    break;
      case 0x22:
    lVar2 = *(long *)(param_2 + 8);
    iVar5 = ::Variant::operator_cast_to_int(in_RDX);
    if (-1 < iVar5) {
      lVar2 = *(long *)(lVar2 + 0x18);
      if ((lVar2 != 0) && ((long)iVar5 < *(long *)(lVar2 + -8))) {
        ::Variant::Variant(param_1,(String *)(lVar2 + (long)iVar5 * 8));
        goto LAB_0010de44;
      }
    }
    break;
      case 0x23:
    lVar2 = *(long *)(param_2 + 8);
    iVar5 = ::Variant::operator_cast_to_int(in_RDX);
    if (-1 < iVar5) {
      lVar2 = *(long *)(lVar2 + 0x18);
      if ((lVar2 != 0) && ((long)iVar5 < *(long *)(lVar2 + -8))) {
        ::Variant::Variant(param_1,(Vector2 *)(lVar2 + (long)iVar5 * 8));
        goto LAB_0010de44;
      }
    }
    break;
      case 0x24:
    lVar2 = *(long *)(param_2 + 8);
    iVar5 = ::Variant::operator_cast_to_int(in_RDX);
    if (-1 < iVar5) {
      lVar2 = *(long *)(lVar2 + 0x18);
      if ((lVar2 != 0) && ((long)iVar5 < *(long *)(lVar2 + -8))) {
        ::Variant::Variant(param_1,(Vector3 *)(lVar2 + (long)iVar5 * 0xc));
        goto LAB_0010de44;
      }
    }
    break;
      case 0x25:
    lVar2 = *(long *)(param_2 + 8);
    iVar5 = ::Variant::operator_cast_to_int(in_RDX);
    if (-1 < iVar5) {
      lVar2 = *(long *)(lVar2 + 0x18);
      if ((lVar2 != 0) && ((long)iVar5 < *(long *)(lVar2 + -8))) {
        ::Variant::Variant(param_1,(Color *)(lVar2 + (long)iVar5 * 0x10));
        goto LAB_0010de44;
      }
    }
    break;
      case 0x26:
    lVar2 = *(long *)(param_2 + 8);
    iVar5 = ::Variant::operator_cast_to_int(in_RDX);
    if (-1 < iVar5) {
      lVar2 = *(long *)(lVar2 + 0x18);
      if ((lVar2 != 0) && ((long)iVar5 < *(long *)(lVar2 + -8))) {
        ::Variant::Variant(param_1,(Vector4 *)(lVar2 + (long)iVar5 * 0x10));
        goto LAB_0010de44;
      }
    }
   }

   *in_RCX = 0;
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0010de44:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Variant::_register_variant_setters_getters() */void Variant::_register_variant_setters_getters(void) {
   register_named_setters_getters();
   register_indexed_setters_getters();
   variant_keyed_setters_getters[0x618] = 1;
   variant_keyed_setters_getters[0x570] = 1;
   variant_keyed_setters_getters._1512_8_ = VariantKeyedSetGetDictionary::set;
   variant_keyed_setters_getters._1520_8_ = VariantKeyedSetGetDictionary::get;
   variant_keyed_setters_getters._1528_8_ = VariantKeyedSetGetDictionary::has;
   variant_keyed_setters_getters._1536_8_ = VariantKeyedSetGetDictionary::ptr_set;
   variant_keyed_setters_getters._1544_8_ = VariantKeyedSetGetDictionary::ptr_get;
   variant_keyed_setters_getters._1552_8_ = VariantKeyedSetGetDictionary::ptr_has;
   variant_keyed_setters_getters._1344_8_ = VariantKeyedSetGetObject::set;
   variant_keyed_setters_getters._1352_8_ = VariantKeyedSetGetObject::get;
   variant_keyed_setters_getters._1360_8_ = VariantKeyedSetGetObject::has;
   variant_keyed_setters_getters._1368_8_ = VariantKeyedSetGetObject::ptr_set;
   variant_keyed_setters_getters._1376_8_ = VariantKeyedSetGetObject::ptr_get;
   variant_keyed_setters_getters._1384_8_ = VariantKeyedSetGetObject::ptr_has;
   return;
}
/* Variant::_unregister_variant_setters_getters() */void Variant::_unregister_variant_setters_getters(void) {
   unregister_named_setters_getters();
   return;
}
/* Variant::get_property_list(List<PropertyInfo, DefaultAllocator>*) const */void Variant::get_property_list(Variant *this, List *param_1) {
   long *plVar1;
   long lVar2;
   char *__s;
   long lVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined8 uVar9;
   ulong uVar10;
   undefined4 uVar11;
   undefined4 *puVar12;
   long lVar13;
   undefined1(*pauVar14)[16];
   List *pLVar15;
   long *plVar16;
   int *piVar17;
   long in_FS_OFFSET;
   bool bVar18;
   undefined8 *local_b8;
   long local_b0;
   long *local_a8;
   long local_a0;
   char *local_98;
   size_t local_90;
   undefined *local_88;
   undefined1 local_80[16];
   ulong local_70;
   long local_68;
   undefined4 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)this == 0x1b) {
      local_b8 = (undefined8*)0x0;
      Dictionary::get_key_list((List*)( this + 8 ));
      if (local_b8 != (undefined8*)0x0) {
         piVar17 = (int*)*local_b8;
         joined_r0x0010e846:if (piVar17 != (int*)0x0) {
            do {
               if (( *piVar17 == 4 ) || ( *piVar17 == 0x15 )) {
                  local_a0 = 0;
                  local_88 = &_LC5;
                  local_a8 = (long*)0x0;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = local_80._8_8_;
                  local_80 = auVar6 << 0x40;
                  String::parse_latin1((StrRange*)&local_a8);
                  ::Variant::operator_cast_to_String((Variant*)&local_b0);
                  Dictionary::get_valid((Variant*)local_58);
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = local_80._8_8_;
                  local_80 = auVar7 << 0x40;
                  local_88 = (undefined*)CONCAT44(local_88._4_4_, local_58[0]);
                  uVar10 = 0;
                  if (local_b0 != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)local_80, (CowData*)&local_b0);
                     uVar10 = local_80._0_8_;
                  }

                  local_80._0_8_ = uVar10;
                  local_80._8_8_ = 0;
                  local_70 = local_70 & 0xffffffff00000000;
                  local_68 = 0;
                  if (local_a8 == (long*)0x0) {
                     LAB_0010eb98:local_60 = 6;
                     StringName::operator =((StringName*)( local_80 + 8 ), (StringName*)&local_a0);
                  }
 else {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_a8);
                     local_60 = 6;
                     if ((int)local_70 != 0x11) goto LAB_0010eb98;
                     StringName::StringName((StringName*)&local_98, (String*)&local_68, false);
                     if ((char*)local_80._8_8_ == local_98) {
                        if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
                           StringName::unref();
                        }

                     }
 else {
                        StringName::unref();
                        local_80._8_8_ = local_98;
                     }

                  }

                  if (*(long*)param_1 == 0) {
                     pauVar14 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                     *(undefined1(**) [16])param_1 = pauVar14;
                     *(undefined4*)pauVar14[1] = 0;
                     *pauVar14 = (undefined1[16])0x0;
                  }

                  puVar12 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
                  *(undefined8*)( puVar12 + 8 ) = 0;
                  *(undefined1(*) [16])( puVar12 + 2 ) = (undefined1[16])0x0;
                  *puVar12 = 0;
                  puVar12[6] = 0;
                  puVar12[10] = 6;
                  *(undefined8*)( puVar12 + 0x10 ) = 0;
                  *(undefined1(*) [16])( puVar12 + 0xc ) = (undefined1[16])0x0;
                  *puVar12 = local_88._0_4_;
                  if (local_80._0_8_ != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( puVar12 + 2 ), (CowData*)local_80);
                  }

                  StringName::operator =((StringName*)( puVar12 + 4 ), (StringName*)( local_80 + 8 ));
                  puVar12[6] = (int)local_70;
                  if (*(long*)( puVar12 + 8 ) != local_68) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( puVar12 + 8 ), (CowData*)&local_68);
                  }

                  lVar3 = local_68;
                  puVar12[10] = local_60;
                  plVar16 = *(long**)param_1;
                  lVar2 = plVar16[1];
                  *(undefined8*)( puVar12 + 0xc ) = 0;
                  *(long**)( puVar12 + 0x10 ) = plVar16;
                  *(long*)( puVar12 + 0xe ) = lVar2;
                  if (lVar2 != 0) {
                     *(undefined4**)( lVar2 + 0x30 ) = puVar12;
                  }

                  plVar16[1] = (long)puVar12;
                  if (*plVar16 == 0) {
                     *plVar16 = (long)puVar12;
                  }

                  *(int*)( plVar16 + 2 ) = (int)plVar16[2] + 1;
                  if (local_68 != 0) {
                     LOCK();
                     plVar16 = (long*)( local_68 + -0x10 );
                     *plVar16 = *plVar16 + -1;
                     UNLOCK();
                     if (*plVar16 == 0) {
                        local_68 = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( local_80._8_8_ != 0 )) {
                     StringName::unref();
                  }

                  uVar9 = local_80._0_8_;
                  if (local_80._0_8_ != 0) {
                     LOCK();
                     plVar16 = (long*)( local_80._0_8_ + -0x10 );
                     *plVar16 = *plVar16 + -1;
                     UNLOCK();
                     if (*plVar16 == 0) {
                        auVar8._8_8_ = 0;
                        auVar8._0_8_ = local_80._8_8_;
                        local_80 = auVar8 << 0x40;
                        Memory::free_static((void*)( uVar9 + -0x10 ), false);
                     }

                  }

                  if (needs_deinit[local_58[0]] != '\0') {
                     ::Variant::_clear_internal();
                  }

                  lVar2 = local_b0;
                  if (local_b0 != 0) {
                     LOCK();
                     plVar16 = (long*)( local_b0 + -0x10 );
                     *plVar16 = *plVar16 + -1;
                     UNLOCK();
                     if (*plVar16 == 0) {
                        local_b0 = 0;
                        Memory::free_static((void*)( lVar2 + -0x10 ), false);
                     }

                  }

                  plVar16 = local_a8;
                  if (local_a8 != (long*)0x0) {
                     LOCK();
                     plVar1 = local_a8 + -2;
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_a8 = (long*)0x0;
                        Memory::free_static(plVar16 + -2, false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) goto code_r0x0010eb5a;
               }

               piVar17 = *(int**)( piVar17 + 6 );
               if (piVar17 == (int*)0x0) break;
            }
 while ( true );
         }

      }

      List<Variant,DefaultAllocator>::~List((List<Variant,DefaultAllocator>*)&local_b8);
   }
 else {
      if (*(int*)this == 0x18) {
         pLVar15 = (List*)::Variant::get_validated_object();
         if (pLVar15 == (List*)0x0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               _err_print_error("get_property_list", "core/variant/variant_setget.cpp", 0x514, "Parameter \"obj\" is null.", 0, 0);
               return;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Object::get_property_list(pLVar15, SUB81(param_1, 0));
            return;
         }

         goto LAB_0010ec66;
      }

      local_a8 = (long*)0x0;
      get_member_list();
      if (( local_a8 != (long*)0x0 ) && ( plVar16 = (long*)*local_a8 ),plVar16 != (long*)0x0) {
         do {
            local_88 = (undefined*)0x0;
            local_70 = 0;
            local_80 = (undefined1[16])0x0;
            lVar2 = *plVar16;
            local_68 = 0;
            local_60 = 6;
            if (lVar2 != 0) {
               __s = *(char**)( lVar2 + 8 );
               local_a0 = 0;
               if (__s == (char*)0x0) {
                  if (*(long*)( lVar2 + 0x10 ) == 0) goto LAB_0010e5f3;
                  plVar1 = (long*)( *(long*)( lVar2 + 0x10 ) + -0x10 );
                  do {
                     lVar3 = *plVar1;
                     if (lVar3 == 0) goto LAB_0010e5b5;
                     LOCK();
                     lVar13 = *plVar1;
                     bVar18 = lVar3 == lVar13;
                     if (bVar18) {
                        *plVar1 = lVar3 + 1;
                        lVar13 = lVar3;
                     }

                     UNLOCK();
                  }
 while ( !bVar18 );
                  if (lVar13 != -1) {
                     local_a0 = *(long*)( lVar2 + 0x10 );
                  }

               }
 else {
                  local_90 = strlen(__s);
                  local_98 = __s;
                  String::parse_latin1((StrRange*)&local_a0);
               }

               LAB_0010e5b5:lVar2 = local_a0;
               uVar9 = local_80._0_8_;
               if (local_80._0_8_ == local_a0) {
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
                  if (local_80._0_8_ != 0) {
                     LOCK();
                     plVar1 = (long*)( local_80._0_8_ + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        auVar5._8_8_ = 0;
                        auVar5._0_8_ = local_80._8_8_;
                        local_80 = auVar5 << 0x40;
                        Memory::free_static((void*)( uVar9 + -0x10 ), false);
                     }

                  }

                  local_80._0_8_ = local_a0;
               }

            }

            LAB_0010e5f3:uVar11 = get_member_type(*(undefined4*)this, plVar16);
            local_88 = (undefined*)CONCAT44(local_88._4_4_, uVar11);
            if (*(long*)param_1 == 0) {
               pauVar14 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])param_1 = pauVar14;
               *(undefined4*)pauVar14[1] = 0;
               *pauVar14 = (undefined1[16])0x0;
            }

            puVar12 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
            *(undefined8*)( puVar12 + 8 ) = 0;
            *(undefined1(*) [16])( puVar12 + 2 ) = (undefined1[16])0x0;
            *puVar12 = 0;
            puVar12[6] = 0;
            puVar12[10] = 6;
            *(undefined8*)( puVar12 + 0x10 ) = 0;
            *(undefined1(*) [16])( puVar12 + 0xc ) = (undefined1[16])0x0;
            *puVar12 = local_88._0_4_;
            if (local_80._0_8_ != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar12 + 2 ), (CowData*)local_80);
            }

            StringName::operator =((StringName*)( puVar12 + 4 ), (StringName*)( local_80 + 8 ));
            puVar12[6] = (int)local_70;
            if (*(long*)( puVar12 + 8 ) != local_68) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar12 + 8 ), (CowData*)&local_68);
            }

            lVar3 = local_68;
            puVar12[10] = local_60;
            plVar1 = *(long**)param_1;
            lVar2 = plVar1[1];
            *(undefined8*)( puVar12 + 0xc ) = 0;
            *(long**)( puVar12 + 0x10 ) = plVar1;
            *(long*)( puVar12 + 0xe ) = lVar2;
            if (lVar2 != 0) {
               *(undefined4**)( lVar2 + 0x30 ) = puVar12;
            }

            plVar1[1] = (long)puVar12;
            if (*plVar1 == 0) {
               *plVar1 = (long)puVar12;
            }

            *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
            if (local_68 != 0) {
               LOCK();
               plVar1 = (long*)( local_68 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_68 = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            if (( StringName::configured != '\0' ) && ( local_80._8_8_ != 0 )) {
               StringName::unref();
            }

            uVar9 = local_80._0_8_;
            if (local_80._0_8_ != 0) {
               LOCK();
               plVar1 = (long*)( local_80._0_8_ + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = local_80._8_8_;
                  local_80 = auVar4 << 0x40;
                  Memory::free_static((void*)( uVar9 + -0x10 ), false);
               }

            }

            plVar16 = (long*)plVar16[1];
         }
 while ( plVar16 != (long*)0x0 );
      }

      List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_a8);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010ec66:/* WARNING: Subroutine does not return */__stack_chk_fail();
   code_r0x0010eb5a:StringName::unref();
   piVar17 = *(int**)( piVar17 + 6 );
   goto joined_r0x0010e846;
}
/* Error CowData<char32_t>::resize<false>(long) [clone .isra.0] */void CowData<char32_t>::resize<false>(CowData<char32_t> *this, long param_1) {
   long *plVar1;
   long lVar2;
   int iVar3;
   CowData<char32_t> *pCVar4;
   ulong uVar5;
   undefined8 *puVar6;
   char *pcVar7;
   undefined8 *puVar8;
   undefined8 uVar9;
   CowData<char32_t> *pCVar10;
   CowData<char32_t> *pCVar11;
   long lVar12;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar2 = *(long*)this;
   if (lVar2 == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      lVar12 = 0;
      pCVar4 = (CowData<char32_t>*)0x0;
   }
 else {
      lVar12 = *(long*)( lVar2 + -8 );
      if (param_1 == lVar12) {
         return;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
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

      _copy_on_write(this);
      pCVar4 = (CowData<char32_t>*)( lVar12 * 4 );
      if (pCVar4 != (CowData<char32_t>*)0x0) {
         uVar5 = ( ulong )(pCVar4 + -1) | ( ulong )(pCVar4 + -1) >> 1;
         uVar5 = uVar5 | uVar5 >> 2;
         uVar5 = uVar5 | uVar5 >> 4;
         uVar5 = uVar5 | uVar5 >> 8;
         uVar5 = uVar5 | uVar5 >> 0x10;
         pCVar4 = (CowData<char32_t>*)( ( uVar5 | uVar5 >> 0x20 ) + 1 );
      }

   }

   if (param_1 * 4 != 0) {
      uVar5 = param_1 * 4 - 1;
      uVar5 = uVar5 | uVar5 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar11 = (CowData<char32_t>*)( uVar5 | uVar5 >> 0x20 );
      pCVar10 = pCVar11 + 1;
      if (pCVar10 != (CowData<char32_t>*)0x0) {
         if (param_1 <= lVar12) {
            if (( pCVar10 != pCVar4 ) && ( iVar3 = iVar3 != 0 )) {
               return;
            }

            if (*(long*)this != 0) {
               *(long*)( *(long*)this + -8 ) = param_1;
               return;
            }

            FUN_001195a8();
            return;
         }

         if (pCVar10 != pCVar4) {
            if (lVar12 == 0) {
               puVar6 = (undefined8*)Memory::alloc_static(( ulong )(pCVar11 + 0x11), false);
               if (puVar6 != (undefined8*)0x0) {
                  puVar8 = puVar6 + 2;
                  *puVar6 = 1;
                  puVar6[1] = 0;
                  *(undefined8**)this = puVar8;
                  goto LAB_0010ed91;
               }

               uVar9 = 0x171;
               pcVar7 = "Parameter \"mem_new\" is null.";
               goto LAB_0010ee82;
            }

            pCVar11 = this;
            iVar3 = _realloc(this, (long)pCVar10);
            if (iVar3 != 0) {
               return;
            }

         }

         puVar8 = *(undefined8**)this;
         if (puVar8 == (undefined8*)0x0) {
            resize<false>((long)pCVar11);
            return;
         }

         LAB_0010ed91:puVar8[-1] = param_1;
         return;
      }

   }

   uVar9 = 0x16a;
   pcVar7 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_0010ee82:_err_print_error("resize", "./core/templates/cowdata.h", uVar9, pcVar7, 0, 0);
   return;
}
/* Variant::recursive_duplicate(bool, int) const */Variant *Variant::recursive_duplicate(bool param_1, int param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined4 in_register_00000034;
   undefined7 in_register_00000039;
   Variant *this;
   long in_FS_OFFSET;
   bool bVar4;
   Variant local_58[8];
   long local_50;
   Dictionary local_48[8];
   long local_40[2];
   long local_30;
   this(Variant * CONCAT71(in_register_00000039, param_1));
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   switch (*(undefined4*)CONCAT44(in_register_00000034, param_2)) {
      case 0x1b:
    ::Variant::operator_cast_to_Dictionary(local_58);
    Dictionary::recursive_duplicate(SUB81(local_48,0),(int)local_58);
    ::Variant::Variant(this,local_48);
    Dictionary::~Dictionary(local_48);
    Dictionary::~Dictionary((Dictionary *)local_58);
    goto LAB_0010f070;
      case 0x1c:
    ::Variant::operator_cast_to_Array(local_58);
    Array::recursive_duplicate(SUB81((Array *)local_48,0),(int)local_58);
    ::Variant::Variant(this,(Array *)local_48);
    Array::~Array((Array *)local_48);
    Array::~Array((Array *)local_58);
    goto LAB_0010f070;
      case 0x1d:
    ::Variant::operator_cast_to_Vector(local_58);
    local_40[0] = 0;
    plVar1 = (long *)(local_50 + -0x10);
    if (local_50 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010f124;
        LOCK();
        lVar3 = *plVar1;
        bVar4 = lVar2 == lVar3;
        if (bVar4) {
          *plVar1 = lVar2 + 1;
          lVar3 = lVar2;
        }
        UNLOCK();
      } while (!bVar4);
      if (lVar3 != -1) {
        local_40[0] = local_50;
      }
    }
LAB_0010f124:
    ::Variant::Variant(this,local_48);
    lVar2 = local_40[0];
    break;
      case 0x1e:
    ::Variant::operator_cast_to_Vector(local_58);
    local_40[0] = 0;
    plVar1 = (long *)(local_50 + -0x10);
    if (local_50 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010f18c;
        LOCK();
        lVar3 = *plVar1;
        bVar4 = lVar2 == lVar3;
        if (bVar4) {
          *plVar1 = lVar2 + 1;
          lVar3 = lVar2;
        }
        UNLOCK();
      } while (!bVar4);
      if (lVar3 != -1) {
        local_40[0] = local_50;
      }
    }
LAB_0010f18c:
    ::Variant::Variant(this,local_48);
    lVar2 = local_40[0];
    break;
      case 0x1f:
    ::Variant::operator_cast_to_Vector(local_58);
    local_40[0] = 0;
    plVar1 = (long *)(local_50 + -0x10);
    if (local_50 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010f25c;
        LOCK();
        lVar3 = *plVar1;
        bVar4 = lVar2 == lVar3;
        if (bVar4) {
          *plVar1 = lVar2 + 1;
          lVar3 = lVar2;
        }
        UNLOCK();
      } while (!bVar4);
      if (lVar3 != -1) {
        local_40[0] = local_50;
      }
    }
LAB_0010f25c:
    ::Variant::Variant(this,local_48);
    lVar2 = local_40[0];
    break;
      case 0x20:
    ::Variant::operator_cast_to_Vector(local_58);
    local_40[0] = 0;
    plVar1 = (long *)(local_50 + -0x10);
    if (local_50 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010f32c;
        LOCK();
        lVar3 = *plVar1;
        bVar4 = lVar2 == lVar3;
        if (bVar4) {
          *plVar1 = lVar2 + 1;
          lVar3 = lVar2;
        }
        UNLOCK();
      } while (!bVar4);
      if (lVar3 != -1) {
        local_40[0] = local_50;
      }
    }
LAB_0010f32c:
    ::Variant::Variant(this,local_48);
    lVar2 = local_40[0];
    break;
      case 0x21:
    ::Variant::operator_cast_to_Vector(local_58);
    local_40[0] = 0;
    plVar1 = (long *)(local_50 + -0x10);
    if (local_50 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010f1f4;
        LOCK();
        lVar3 = *plVar1;
        bVar4 = lVar2 == lVar3;
        if (bVar4) {
          *plVar1 = lVar2 + 1;
          lVar3 = lVar2;
        }
        UNLOCK();
      } while (!bVar4);
      if (lVar3 != -1) {
        local_40[0] = local_50;
      }
    }
LAB_0010f1f4:
    ::Variant::Variant(this,local_48);
    lVar2 = local_40[0];
    break;
      case 0x22:
    ::Variant::operator_cast_to_Vector(local_58);
    local_40[0] = 0;
    plVar1 = (long *)(local_50 + -0x10);
    if (local_50 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010f394;
        LOCK();
        lVar3 = *plVar1;
        bVar4 = lVar2 == lVar3;
        if (bVar4) {
          *plVar1 = lVar2 + 1;
          lVar3 = lVar2;
        }
        UNLOCK();
      } while (!bVar4);
      if (lVar3 != -1) {
        local_40[0] = local_50;
      }
    }
LAB_0010f394:
    ::Variant::Variant(this,local_48);
    CowData<String>::_unref((CowData<String> *)local_40);
    CowData<String>::_unref((CowData<String> *)&local_50);
    goto LAB_0010f070;
      case 0x23:
    ::Variant::operator_cast_to_Vector(local_58);
    local_40[0] = 0;
    plVar1 = (long *)(local_50 + -0x10);
    if (local_50 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010f2c4;
        LOCK();
        lVar3 = *plVar1;
        bVar4 = lVar2 == lVar3;
        if (bVar4) {
          *plVar1 = lVar2 + 1;
          lVar3 = lVar2;
        }
        UNLOCK();
      } while (!bVar4);
      if (lVar3 != -1) {
        local_40[0] = local_50;
      }
    }
LAB_0010f2c4:
    ::Variant::Variant(this,local_48);
    lVar2 = local_40[0];
    break;
      case 0x24:
    ::Variant::operator_cast_to_Vector(local_58);
    local_40[0] = 0;
    plVar1 = (long *)(local_50 + -0x10);
    if (local_50 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010f404;
        LOCK();
        lVar3 = *plVar1;
        bVar4 = lVar2 == lVar3;
        if (bVar4) {
          *plVar1 = lVar2 + 1;
          lVar3 = lVar2;
        }
        UNLOCK();
      } while (!bVar4);
      if (lVar3 != -1) {
        local_40[0] = local_50;
      }
    }
LAB_0010f404:
    ::Variant::Variant(this,local_48);
    lVar2 = local_40[0];
    break;
      case 0x25:
    ::Variant::operator_cast_to_Vector(local_58);
    local_40[0] = 0;
    plVar1 = (long *)(local_50 + -0x10);
    if (local_50 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010ef44;
        LOCK();
        lVar3 = *plVar1;
        bVar4 = lVar2 == lVar3;
        if (bVar4) {
          *plVar1 = lVar2 + 1;
          lVar3 = lVar2;
        }
        UNLOCK();
      } while (!bVar4);
      if (lVar3 != -1) {
        local_40[0] = local_50;
      }
    }
LAB_0010ef44:
    ::Variant::Variant(this,local_48);
    lVar2 = local_40[0];
    break;
      case 0x26:
    ::Variant::operator_cast_to_Vector(local_58);
    local_40[0] = 0;
    plVar1 = (long *)(local_50 + -0x10);
    if (local_50 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010f004;
        LOCK();
        lVar3 = *plVar1;
        bVar4 = lVar2 == lVar3;
        if (bVar4) {
          *plVar1 = lVar2 + 1;
          lVar3 = lVar2;
        }
        UNLOCK();
      } while (!bVar4);
      if (lVar3 != -1) {
        local_40[0] = local_50;
      }
    }
LAB_0010f004:
    ::Variant::Variant(this,local_48);
    lVar2 = local_40[0];
    break;
      default:
    ::Variant::Variant(this,(Variant *)CONCAT44(in_register_00000034,param_2));
    goto LAB_0010f070;
   }

   local_40[0] = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40[0] = 0;
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

   LAB_0010f070:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Variant::duplicate(bool) const */Variant * __thiscall Variant::duplicate(Variant *this,bool param_1){
   long lVar1;
   undefined3 in_register_00000031;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   recursive_duplicate(SUB81(this, 0), CONCAT31(in_register_00000031, param_1));
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* VariantSetGet_Vector2_x::validated_get(Variant const*, Variant*) */void VariantSetGet_Vector2_x::validated_get(Variant *param_1, Variant *param_2) {
   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 8 );
   return;
}
/* VariantSetGet_Vector2_x::ptr_get(void const*, void*) */void VariantSetGet_Vector2_x::ptr_get(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(double*)param_2 = (double)*param_1;
   return;
}
/* VariantSetGet_Vector2_x::set(Variant*, Variant const*, bool&) */void VariantSetGet_Vector2_x::set(Variant *param_1, Variant *param_2, bool *param_3) {
   if (*(int*)param_2 == 3) {
      *(float*)( param_1 + 8 ) = (float)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      *(float*)( param_1 + 8 ) = (float)*(long*)( param_2 + 8 );
   }

   *param_3 = true;
   return;
}
/* VariantSetGet_Vector2_x::validated_set(Variant*, Variant const*) */void VariantSetGet_Vector2_x::validated_set(Variant *param_1, Variant *param_2) {
   *(float*)( param_1 + 8 ) = (float)*(double*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Vector2_x::ptr_set(void*, void const*) */void VariantSetGet_Vector2_x::ptr_set(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(float*)param_1 = (float)*param_2;
   return;
}
/* VariantSetGet_Vector2_y::validated_get(Variant const*, Variant*) */void VariantSetGet_Vector2_y::validated_get(Variant *param_1, Variant *param_2) {
   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 0xc );
   return;
}
/* VariantSetGet_Vector2_y::ptr_get(void const*, void*) */void VariantSetGet_Vector2_y::ptr_get(void *param_1, void *param_2) {
   *(double*)param_2 = (double)*(float*)( (long)param_1 + 4 );
   return;
}
/* VariantSetGet_Vector2_y::set(Variant*, Variant const*, bool&) */void VariantSetGet_Vector2_y::set(Variant *param_1, Variant *param_2, bool *param_3) {
   if (*(int*)param_2 == 3) {
      *(float*)( param_1 + 0xc ) = (float)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      *(float*)( param_1 + 0xc ) = (float)*(long*)( param_2 + 8 );
   }

   *param_3 = true;
   return;
}
/* VariantSetGet_Vector2_y::validated_set(Variant*, Variant const*) */void VariantSetGet_Vector2_y::validated_set(Variant *param_1, Variant *param_2) {
   *(float*)( param_1 + 0xc ) = (float)*(double*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Vector2_y::ptr_set(void*, void const*) */void VariantSetGet_Vector2_y::ptr_set(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(float*)( (long)param_1 + 4 ) = (float)*param_2;
   return;
}
/* VariantSetGet_Vector2i_x::validated_get(Variant const*, Variant*) */void VariantSetGet_Vector2i_x::validated_get(Variant *param_1, Variant *param_2) {
   *(long*)( param_2 + 8 ) = (long)*(int*)( param_1 + 8 );
   return;
}
/* VariantSetGet_Vector2i_x::ptr_get(void const*, void*) */void VariantSetGet_Vector2i_x::ptr_get(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(long*)param_2 = (long)*param_1;
   return;
}
/* VariantSetGet_Vector2i_x::set(Variant*, Variant const*, bool&) */void VariantSetGet_Vector2i_x::set(Variant *param_1, Variant *param_2, bool *param_3) {
   if (*(int*)param_2 == 3) {
      *(int*)( param_1 + 8 ) = (int)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      *(int*)( param_1 + 8 ) = (int)*(undefined8*)( param_2 + 8 );
   }

   *param_3 = true;
   return;
}
/* VariantSetGet_Vector2i_x::validated_set(Variant*, Variant const*) */void VariantSetGet_Vector2i_x::validated_set(Variant *param_1, Variant *param_2) {
   *(int*)( param_1 + 8 ) = (int)*(undefined8*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Vector2i_x::ptr_set(void*, void const*) */void VariantSetGet_Vector2i_x::ptr_set(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(undefined4*)param_1 = *param_2;
   return;
}
/* VariantSetGet_Vector2i_y::validated_get(Variant const*, Variant*) */void VariantSetGet_Vector2i_y::validated_get(Variant *param_1, Variant *param_2) {
   *(long*)( param_2 + 8 ) = (long)*(int*)( param_1 + 0xc );
   return;
}
/* VariantSetGet_Vector2i_y::ptr_get(void const*, void*) */void VariantSetGet_Vector2i_y::ptr_get(void *param_1, void *param_2) {
   *(long*)param_2 = (long)*(int*)( (long)param_1 + 4 );
   return;
}
/* VariantSetGet_Vector2i_y::set(Variant*, Variant const*, bool&) */void VariantSetGet_Vector2i_y::set(Variant *param_1, Variant *param_2, bool *param_3) {
   if (*(int*)param_2 == 3) {
      *(int*)( param_1 + 0xc ) = (int)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      *(int*)( param_1 + 0xc ) = (int)*(undefined8*)( param_2 + 8 );
   }

   *param_3 = true;
   return;
}
/* VariantSetGet_Vector2i_y::validated_set(Variant*, Variant const*) */void VariantSetGet_Vector2i_y::validated_set(Variant *param_1, Variant *param_2) {
   *(int*)( param_1 + 0xc ) = (int)*(undefined8*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Vector2i_y::ptr_set(void*, void const*) */void VariantSetGet_Vector2i_y::ptr_set(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(undefined4*)( (long)param_1 + 4 ) = *param_2;
   return;
}
/* VariantSetGet_Vector3_x::validated_get(Variant const*, Variant*) */void VariantSetGet_Vector3_x::validated_get(Variant *param_1, Variant *param_2) {
   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 8 );
   return;
}
/* VariantSetGet_Vector3_x::ptr_get(void const*, void*) */void VariantSetGet_Vector3_x::ptr_get(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(double*)param_2 = (double)*param_1;
   return;
}
/* VariantSetGet_Vector3_x::set(Variant*, Variant const*, bool&) */void VariantSetGet_Vector3_x::set(Variant *param_1, Variant *param_2, bool *param_3) {
   if (*(int*)param_2 == 3) {
      *(float*)( param_1 + 8 ) = (float)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      *(float*)( param_1 + 8 ) = (float)*(long*)( param_2 + 8 );
   }

   *param_3 = true;
   return;
}
/* VariantSetGet_Vector3_x::validated_set(Variant*, Variant const*) */void VariantSetGet_Vector3_x::validated_set(Variant *param_1, Variant *param_2) {
   *(float*)( param_1 + 8 ) = (float)*(double*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Vector3_x::ptr_set(void*, void const*) */void VariantSetGet_Vector3_x::ptr_set(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   undefined8 local_1c;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   /* WARNING: Load size is inaccurate */
   /* WARNING: Load size is inaccurate */
   local_1c = CONCAT44((int)( ( ulong ) * param_1 >> 0x20 ), (float)*param_2);
   *(undefined8*)param_1 = local_1c;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantSetGet_Vector3_y::validated_get(Variant const*, Variant*) */void VariantSetGet_Vector3_y::validated_get(Variant *param_1, Variant *param_2) {
   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 0xc );
   return;
}
/* VariantSetGet_Vector3_y::ptr_get(void const*, void*) */void VariantSetGet_Vector3_y::ptr_get(void *param_1, void *param_2) {
   *(double*)param_2 = (double)*(float*)( (long)param_1 + 4 );
   return;
}
/* VariantSetGet_Vector3_y::set(Variant*, Variant const*, bool&) */void VariantSetGet_Vector3_y::set(Variant *param_1, Variant *param_2, bool *param_3) {
   if (*(int*)param_2 == 3) {
      *(float*)( param_1 + 0xc ) = (float)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      *(float*)( param_1 + 0xc ) = (float)*(long*)( param_2 + 8 );
   }

   *param_3 = true;
   return;
}
/* VariantSetGet_Vector3_y::validated_set(Variant*, Variant const*) */void VariantSetGet_Vector3_y::validated_set(Variant *param_1, Variant *param_2) {
   *(float*)( param_1 + 0xc ) = (float)*(double*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Vector3_y::ptr_set(void*, void const*) */void VariantSetGet_Vector3_y::ptr_set(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   undefined8 local_1c;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   /* WARNING: Load size is inaccurate */
   /* WARNING: Load size is inaccurate */
   local_1c = CONCAT44((float)*param_2, (int)*param_1);
   *(undefined8*)param_1 = local_1c;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantSetGet_Vector3_z::validated_get(Variant const*, Variant*) */void VariantSetGet_Vector3_z::validated_get(Variant *param_1, Variant *param_2) {
   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 0x10 );
   return;
}
/* VariantSetGet_Vector3_z::ptr_get(void const*, void*) */void VariantSetGet_Vector3_z::ptr_get(void *param_1, void *param_2) {
   *(double*)param_2 = (double)*(float*)( (long)param_1 + 8 );
   return;
}
/* VariantSetGet_Vector3_z::set(Variant*, Variant const*, bool&) */void VariantSetGet_Vector3_z::set(Variant *param_1, Variant *param_2, bool *param_3) {
   if (*(int*)param_2 == 3) {
      *(float*)( param_1 + 0x10 ) = (float)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      *(float*)( param_1 + 0x10 ) = (float)*(long*)( param_2 + 8 );
   }

   *param_3 = true;
   return;
}
/* VariantSetGet_Vector3_z::validated_set(Variant*, Variant const*) */void VariantSetGet_Vector3_z::validated_set(Variant *param_1, Variant *param_2) {
   *(float*)( param_1 + 0x10 ) = (float)*(double*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Vector3_z::ptr_set(void*, void const*) */void VariantSetGet_Vector3_z::ptr_set(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   /* WARNING: Load size is inaccurate */
   *(float*)( (long)param_1 + 8 ) = (float)*param_2;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantSetGet_Vector3i_x::validated_get(Variant const*, Variant*) */void VariantSetGet_Vector3i_x::validated_get(Variant *param_1, Variant *param_2) {
   *(long*)( param_2 + 8 ) = (long)*(int*)( param_1 + 8 );
   return;
}
/* VariantSetGet_Vector3i_x::ptr_get(void const*, void*) */void VariantSetGet_Vector3i_x::ptr_get(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(long*)param_2 = (long)*param_1;
   return;
}
/* VariantSetGet_Vector3i_x::set(Variant*, Variant const*, bool&) */void VariantSetGet_Vector3i_x::set(Variant *param_1, Variant *param_2, bool *param_3) {
   if (*(int*)param_2 == 3) {
      *(int*)( param_1 + 8 ) = (int)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      *(int*)( param_1 + 8 ) = (int)*(undefined8*)( param_2 + 8 );
   }

   *param_3 = true;
   return;
}
/* VariantSetGet_Vector3i_x::validated_set(Variant*, Variant const*) */void VariantSetGet_Vector3i_x::validated_set(Variant *param_1, Variant *param_2) {
   *(int*)( param_1 + 8 ) = (int)*(undefined8*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Vector3i_x::ptr_set(void*, void const*) */void VariantSetGet_Vector3i_x::ptr_set(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   undefined8 local_1c;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   /* WARNING: Load size is inaccurate */
   /* WARNING: Load size is inaccurate */
   local_1c = CONCAT44((int)( ( ulong ) * param_1 >> 0x20 ), (int)*param_2);
   *(undefined8*)param_1 = local_1c;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantSetGet_Vector3i_y::validated_get(Variant const*, Variant*) */void VariantSetGet_Vector3i_y::validated_get(Variant *param_1, Variant *param_2) {
   *(long*)( param_2 + 8 ) = (long)*(int*)( param_1 + 0xc );
   return;
}
/* VariantSetGet_Vector3i_y::ptr_get(void const*, void*) */void VariantSetGet_Vector3i_y::ptr_get(void *param_1, void *param_2) {
   *(long*)param_2 = (long)*(int*)( (long)param_1 + 4 );
   return;
}
/* VariantSetGet_Vector3i_y::set(Variant*, Variant const*, bool&) */void VariantSetGet_Vector3i_y::set(Variant *param_1, Variant *param_2, bool *param_3) {
   if (*(int*)param_2 == 3) {
      *(int*)( param_1 + 0xc ) = (int)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      *(int*)( param_1 + 0xc ) = (int)*(undefined8*)( param_2 + 8 );
   }

   *param_3 = true;
   return;
}
/* VariantSetGet_Vector3i_y::validated_set(Variant*, Variant const*) */void VariantSetGet_Vector3i_y::validated_set(Variant *param_1, Variant *param_2) {
   *(int*)( param_1 + 0xc ) = (int)*(undefined8*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Vector3i_y::ptr_set(void*, void const*) */void VariantSetGet_Vector3i_y::ptr_set(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   undefined8 local_1c;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   /* WARNING: Load size is inaccurate */
   /* WARNING: Load size is inaccurate */
   local_1c = CONCAT44((int)*param_2, (int)*param_1);
   *(undefined8*)param_1 = local_1c;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantSetGet_Vector3i_z::validated_get(Variant const*, Variant*) */void VariantSetGet_Vector3i_z::validated_get(Variant *param_1, Variant *param_2) {
   *(long*)( param_2 + 8 ) = (long)*(int*)( param_1 + 0x10 );
   return;
}
/* VariantSetGet_Vector3i_z::ptr_get(void const*, void*) */void VariantSetGet_Vector3i_z::ptr_get(void *param_1, void *param_2) {
   *(long*)param_2 = (long)*(int*)( (long)param_1 + 8 );
   return;
}
/* VariantSetGet_Vector3i_z::set(Variant*, Variant const*, bool&) */void VariantSetGet_Vector3i_z::set(Variant *param_1, Variant *param_2, bool *param_3) {
   if (*(int*)param_2 == 3) {
      *(int*)( param_1 + 0x10 ) = (int)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      *(int*)( param_1 + 0x10 ) = (int)*(undefined8*)( param_2 + 8 );
   }

   *param_3 = true;
   return;
}
/* VariantSetGet_Vector3i_z::validated_set(Variant*, Variant const*) */void VariantSetGet_Vector3i_z::validated_set(Variant *param_1, Variant *param_2) {
   *(int*)( param_1 + 0x10 ) = (int)*(undefined8*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Vector3i_z::ptr_set(void*, void const*) */void VariantSetGet_Vector3i_z::ptr_set(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   /* WARNING: Load size is inaccurate */
   *(int*)( (long)param_1 + 8 ) = (int)*param_2;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantSetGet_Vector4_x::validated_get(Variant const*, Variant*) */void VariantSetGet_Vector4_x::validated_get(Variant *param_1, Variant *param_2) {
   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 8 );
   return;
}
/* VariantSetGet_Vector4_x::ptr_get(void const*, void*) */void VariantSetGet_Vector4_x::ptr_get(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(double*)param_2 = (double)*param_1;
   return;
}
/* VariantSetGet_Vector4_x::set(Variant*, Variant const*, bool&) */void VariantSetGet_Vector4_x::set(Variant *param_1, Variant *param_2, bool *param_3) {
   if (*(int*)param_2 == 3) {
      *(float*)( param_1 + 8 ) = (float)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      *(float*)( param_1 + 8 ) = (float)*(long*)( param_2 + 8 );
   }

   *param_3 = true;
   return;
}
/* VariantSetGet_Vector4_x::validated_set(Variant*, Variant const*) */void VariantSetGet_Vector4_x::validated_set(Variant *param_1, Variant *param_2) {
   *(float*)( param_1 + 8 ) = (float)*(double*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Vector4_x::ptr_set(void*, void const*) */void VariantSetGet_Vector4_x::ptr_set(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(float*)param_1 = (float)*param_2;
   return;
}
/* VariantSetGet_Vector4_y::validated_get(Variant const*, Variant*) */void VariantSetGet_Vector4_y::validated_get(Variant *param_1, Variant *param_2) {
   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 0xc );
   return;
}
/* VariantSetGet_Vector4_y::ptr_get(void const*, void*) */void VariantSetGet_Vector4_y::ptr_get(void *param_1, void *param_2) {
   *(double*)param_2 = (double)*(float*)( (long)param_1 + 4 );
   return;
}
/* VariantSetGet_Vector4_y::set(Variant*, Variant const*, bool&) */void VariantSetGet_Vector4_y::set(Variant *param_1, Variant *param_2, bool *param_3) {
   if (*(int*)param_2 == 3) {
      *(float*)( param_1 + 0xc ) = (float)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      *(float*)( param_1 + 0xc ) = (float)*(long*)( param_2 + 8 );
   }

   *param_3 = true;
   return;
}
/* VariantSetGet_Vector4_y::validated_set(Variant*, Variant const*) */void VariantSetGet_Vector4_y::validated_set(Variant *param_1, Variant *param_2) {
   *(float*)( param_1 + 0xc ) = (float)*(double*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Vector4_y::ptr_set(void*, void const*) */void VariantSetGet_Vector4_y::ptr_set(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(float*)( (long)param_1 + 4 ) = (float)*param_2;
   return;
}
/* VariantSetGet_Vector4_z::validated_get(Variant const*, Variant*) */void VariantSetGet_Vector4_z::validated_get(Variant *param_1, Variant *param_2) {
   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 0x10 );
   return;
}
/* VariantSetGet_Vector4_z::ptr_get(void const*, void*) */void VariantSetGet_Vector4_z::ptr_get(void *param_1, void *param_2) {
   *(double*)param_2 = (double)*(float*)( (long)param_1 + 8 );
   return;
}
/* VariantSetGet_Vector4_z::set(Variant*, Variant const*, bool&) */void VariantSetGet_Vector4_z::set(Variant *param_1, Variant *param_2, bool *param_3) {
   if (*(int*)param_2 == 3) {
      *(float*)( param_1 + 0x10 ) = (float)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      *(float*)( param_1 + 0x10 ) = (float)*(long*)( param_2 + 8 );
   }

   *param_3 = true;
   return;
}
/* VariantSetGet_Vector4_z::validated_set(Variant*, Variant const*) */void VariantSetGet_Vector4_z::validated_set(Variant *param_1, Variant *param_2) {
   *(float*)( param_1 + 0x10 ) = (float)*(double*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Vector4_z::ptr_set(void*, void const*) */void VariantSetGet_Vector4_z::ptr_set(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(float*)( (long)param_1 + 8 ) = (float)*param_2;
   return;
}
/* VariantSetGet_Vector4_w::validated_get(Variant const*, Variant*) */void VariantSetGet_Vector4_w::validated_get(Variant *param_1, Variant *param_2) {
   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 0x14 );
   return;
}
/* VariantSetGet_Vector4_w::ptr_get(void const*, void*) */void VariantSetGet_Vector4_w::ptr_get(void *param_1, void *param_2) {
   *(double*)param_2 = (double)*(float*)( (long)param_1 + 0xc );
   return;
}
/* VariantSetGet_Vector4_w::set(Variant*, Variant const*, bool&) */void VariantSetGet_Vector4_w::set(Variant *param_1, Variant *param_2, bool *param_3) {
   if (*(int*)param_2 == 3) {
      *(float*)( param_1 + 0x14 ) = (float)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      *(float*)( param_1 + 0x14 ) = (float)*(long*)( param_2 + 8 );
   }

   *param_3 = true;
   return;
}
/* VariantSetGet_Vector4_w::validated_set(Variant*, Variant const*) */void VariantSetGet_Vector4_w::validated_set(Variant *param_1, Variant *param_2) {
   *(float*)( param_1 + 0x14 ) = (float)*(double*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Vector4_w::ptr_set(void*, void const*) */void VariantSetGet_Vector4_w::ptr_set(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(float*)( (long)param_1 + 0xc ) = (float)*param_2;
   return;
}
/* VariantSetGet_Vector4i_x::validated_get(Variant const*, Variant*) */void VariantSetGet_Vector4i_x::validated_get(Variant *param_1, Variant *param_2) {
   *(long*)( param_2 + 8 ) = (long)*(int*)( param_1 + 8 );
   return;
}
/* VariantSetGet_Vector4i_x::ptr_get(void const*, void*) */void VariantSetGet_Vector4i_x::ptr_get(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(long*)param_2 = (long)*param_1;
   return;
}
/* VariantSetGet_Vector4i_x::set(Variant*, Variant const*, bool&) */void VariantSetGet_Vector4i_x::set(Variant *param_1, Variant *param_2, bool *param_3) {
   if (*(int*)param_2 == 3) {
      *(int*)( param_1 + 8 ) = (int)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      *(int*)( param_1 + 8 ) = (int)*(undefined8*)( param_2 + 8 );
   }

   *param_3 = true;
   return;
}
/* VariantSetGet_Vector4i_x::validated_set(Variant*, Variant const*) */void VariantSetGet_Vector4i_x::validated_set(Variant *param_1, Variant *param_2) {
   *(int*)( param_1 + 8 ) = (int)*(undefined8*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Vector4i_x::ptr_set(void*, void const*) */void VariantSetGet_Vector4i_x::ptr_set(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(undefined4*)param_1 = *param_2;
   return;
}
/* VariantSetGet_Vector4i_y::validated_get(Variant const*, Variant*) */void VariantSetGet_Vector4i_y::validated_get(Variant *param_1, Variant *param_2) {
   *(long*)( param_2 + 8 ) = (long)*(int*)( param_1 + 0xc );
   return;
}
/* VariantSetGet_Vector4i_y::ptr_get(void const*, void*) */void VariantSetGet_Vector4i_y::ptr_get(void *param_1, void *param_2) {
   *(long*)param_2 = (long)*(int*)( (long)param_1 + 4 );
   return;
}
/* VariantSetGet_Vector4i_y::set(Variant*, Variant const*, bool&) */void VariantSetGet_Vector4i_y::set(Variant *param_1, Variant *param_2, bool *param_3) {
   if (*(int*)param_2 == 3) {
      *(int*)( param_1 + 0xc ) = (int)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      *(int*)( param_1 + 0xc ) = (int)*(undefined8*)( param_2 + 8 );
   }

   *param_3 = true;
   return;
}
/* VariantSetGet_Vector4i_y::validated_set(Variant*, Variant const*) */void VariantSetGet_Vector4i_y::validated_set(Variant *param_1, Variant *param_2) {
   *(int*)( param_1 + 0xc ) = (int)*(undefined8*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Vector4i_y::ptr_set(void*, void const*) */void VariantSetGet_Vector4i_y::ptr_set(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(undefined4*)( (long)param_1 + 4 ) = *param_2;
   return;
}
/* VariantSetGet_Vector4i_z::validated_get(Variant const*, Variant*) */void VariantSetGet_Vector4i_z::validated_get(Variant *param_1, Variant *param_2) {
   *(long*)( param_2 + 8 ) = (long)*(int*)( param_1 + 0x10 );
   return;
}
/* VariantSetGet_Vector4i_z::ptr_get(void const*, void*) */void VariantSetGet_Vector4i_z::ptr_get(void *param_1, void *param_2) {
   *(long*)param_2 = (long)*(int*)( (long)param_1 + 8 );
   return;
}
/* VariantSetGet_Vector4i_z::set(Variant*, Variant const*, bool&) */void VariantSetGet_Vector4i_z::set(Variant *param_1, Variant *param_2, bool *param_3) {
   if (*(int*)param_2 == 3) {
      *(int*)( param_1 + 0x10 ) = (int)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      *(int*)( param_1 + 0x10 ) = (int)*(undefined8*)( param_2 + 8 );
   }

   *param_3 = true;
   return;
}
/* VariantSetGet_Vector4i_z::validated_set(Variant*, Variant const*) */void VariantSetGet_Vector4i_z::validated_set(Variant *param_1, Variant *param_2) {
   *(int*)( param_1 + 0x10 ) = (int)*(undefined8*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Vector4i_z::ptr_set(void*, void const*) */void VariantSetGet_Vector4i_z::ptr_set(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(undefined4*)( (long)param_1 + 8 ) = *param_2;
   return;
}
/* VariantSetGet_Vector4i_w::validated_get(Variant const*, Variant*) */void VariantSetGet_Vector4i_w::validated_get(Variant *param_1, Variant *param_2) {
   *(long*)( param_2 + 8 ) = (long)*(int*)( param_1 + 0x14 );
   return;
}
/* VariantSetGet_Vector4i_w::ptr_get(void const*, void*) */void VariantSetGet_Vector4i_w::ptr_get(void *param_1, void *param_2) {
   *(long*)param_2 = (long)*(int*)( (long)param_1 + 0xc );
   return;
}
/* VariantSetGet_Vector4i_w::set(Variant*, Variant const*, bool&) */void VariantSetGet_Vector4i_w::set(Variant *param_1, Variant *param_2, bool *param_3) {
   if (*(int*)param_2 == 3) {
      *(int*)( param_1 + 0x14 ) = (int)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      *(int*)( param_1 + 0x14 ) = (int)*(undefined8*)( param_2 + 8 );
   }

   *param_3 = true;
   return;
}
/* VariantSetGet_Vector4i_w::validated_set(Variant*, Variant const*) */void VariantSetGet_Vector4i_w::validated_set(Variant *param_1, Variant *param_2) {
   *(int*)( param_1 + 0x14 ) = (int)*(undefined8*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Vector4i_w::ptr_set(void*, void const*) */void VariantSetGet_Vector4i_w::ptr_set(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(undefined4*)( (long)param_1 + 0xc ) = *param_2;
   return;
}
/* VariantSetGet_Rect2_position::validated_get(Variant const*, Variant*) */void VariantSetGet_Rect2_position::validated_get(Variant *param_1, Variant *param_2) {
   *(undefined8*)( param_2 + 8 ) = *(undefined8*)( param_1 + 8 );
   return;
}
/* VariantSetGet_Rect2_position::ptr_get(void const*, void*) */void VariantSetGet_Rect2_position::ptr_get(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(undefined8*)param_2 = *param_1;
   return;
}
/* VariantSetGet_Rect2_position::set(Variant*, Variant const*, bool&) */void VariantSetGet_Rect2_position::set(Variant *param_1, Variant *param_2, bool *param_3) {
   int iVar1;
   iVar1 = *(int*)param_2;
   if (iVar1 == 5) {
      *(undefined8*)( param_1 + 8 ) = *(undefined8*)( param_2 + 8 );
   }

   *param_3 = iVar1 == 5;
   return;
}
/* VariantSetGet_Rect2_position::validated_set(Variant*, Variant const*) */void VariantSetGet_Rect2_position::validated_set(Variant *param_1, Variant *param_2) {
   *(undefined8*)( param_1 + 8 ) = *(undefined8*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Rect2_position::ptr_set(void*, void const*) */void VariantSetGet_Rect2_position::ptr_set(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(undefined8*)param_1 = *param_2;
   return;
}
/* VariantSetGet_Rect2_size::validated_get(Variant const*, Variant*) */void VariantSetGet_Rect2_size::validated_get(Variant *param_1, Variant *param_2) {
   *(undefined8*)( param_2 + 8 ) = *(undefined8*)( param_1 + 0x10 );
   return;
}
/* VariantSetGet_Rect2_size::ptr_get(void const*, void*) */void VariantSetGet_Rect2_size::ptr_get(void *param_1, void *param_2) {
   *(undefined8*)param_2 = *(undefined8*)( (long)param_1 + 8 );
   return;
}
/* VariantSetGet_Rect2_size::set(Variant*, Variant const*, bool&) */void VariantSetGet_Rect2_size::set(Variant *param_1, Variant *param_2, bool *param_3) {
   int iVar1;
   iVar1 = *(int*)param_2;
   if (iVar1 == 5) {
      *(undefined8*)( param_1 + 0x10 ) = *(undefined8*)( param_2 + 8 );
   }

   *param_3 = iVar1 == 5;
   return;
}
/* VariantSetGet_Rect2_size::validated_set(Variant*, Variant const*) */void VariantSetGet_Rect2_size::validated_set(Variant *param_1, Variant *param_2) {
   *(undefined8*)( param_1 + 0x10 ) = *(undefined8*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Rect2_size::ptr_set(void*, void const*) */void VariantSetGet_Rect2_size::ptr_set(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(undefined8*)( (long)param_1 + 8 ) = *param_2;
   return;
}
/* VariantSetGet_Rect2_end::validated_get(Variant const*, Variant*) */void VariantSetGet_Rect2_end::validated_get(Variant *param_1, Variant *param_2) {
   *(ulong*)( param_2 + 8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( param_1 + 8 ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( param_1 + 0x10 ) >> 0x20 ), (float)*(undefined8*)( param_1 + 0x10 ) + (float)*(undefined8*)( param_1 + 8 ));
   return;
}
/* VariantSetGet_Rect2_end::ptr_get(void const*, void*) */void VariantSetGet_Rect2_end::ptr_get(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(ulong*)param_2 = CONCAT44((float)( ( ulong ) * param_1 >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( (long)param_1 + 8 ) >> 0x20 ), (float)*param_1 + (float)*(undefined8*)( (long)param_1 + 8 ));
   return;
}
/* VariantSetGet_Rect2_end::validated_set(Variant*, Variant const*) */void VariantSetGet_Rect2_end::validated_set(Variant *param_1, Variant *param_2) {
   *(ulong*)( param_1 + 0x10 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( param_2 + 8 ) >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( param_1 + 8 ) >> 0x20 ), (float)*(undefined8*)( param_2 + 8 ) - (float)*(undefined8*)( param_1 + 8 ));
   return;
}
/* VariantSetGet_Rect2_end::ptr_set(void*, void const*) */void VariantSetGet_Rect2_end::ptr_set(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   /* WARNING: Load size is inaccurate */
   *(ulong*)( (long)param_1 + 8 ) = CONCAT44((float)( ( ulong ) * param_2 >> 0x20 ) - (float)( ( ulong ) * param_1 >> 0x20 ), (float)*param_2 - (float)*param_1);
   return;
}
/* VariantSetGet_Rect2i_position::validated_get(Variant const*, Variant*) */void VariantSetGet_Rect2i_position::validated_get(Variant *param_1, Variant *param_2) {
   *(undefined8*)( param_2 + 8 ) = *(undefined8*)( param_1 + 8 );
   return;
}
/* VariantSetGet_Rect2i_position::ptr_get(void const*, void*) */void VariantSetGet_Rect2i_position::ptr_get(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(undefined8*)param_2 = *param_1;
   return;
}
/* VariantSetGet_Rect2i_position::set(Variant*, Variant const*, bool&) */void VariantSetGet_Rect2i_position::set(Variant *param_1, Variant *param_2, bool *param_3) {
   int iVar1;
   iVar1 = *(int*)param_2;
   if (iVar1 == 6) {
      *(undefined8*)( param_1 + 8 ) = *(undefined8*)( param_2 + 8 );
   }

   *param_3 = iVar1 == 6;
   return;
}
/* VariantSetGet_Rect2i_position::validated_set(Variant*, Variant const*) */void VariantSetGet_Rect2i_position::validated_set(Variant *param_1, Variant *param_2) {
   *(undefined8*)( param_1 + 8 ) = *(undefined8*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Rect2i_position::ptr_set(void*, void const*) */void VariantSetGet_Rect2i_position::ptr_set(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(undefined8*)param_1 = *param_2;
   return;
}
/* VariantSetGet_Rect2i_size::validated_get(Variant const*, Variant*) */void VariantSetGet_Rect2i_size::validated_get(Variant *param_1, Variant *param_2) {
   *(undefined8*)( param_2 + 8 ) = *(undefined8*)( param_1 + 0x10 );
   return;
}
/* VariantSetGet_Rect2i_size::ptr_get(void const*, void*) */void VariantSetGet_Rect2i_size::ptr_get(void *param_1, void *param_2) {
   *(undefined8*)param_2 = *(undefined8*)( (long)param_1 + 8 );
   return;
}
/* VariantSetGet_Rect2i_size::set(Variant*, Variant const*, bool&) */void VariantSetGet_Rect2i_size::set(Variant *param_1, Variant *param_2, bool *param_3) {
   int iVar1;
   iVar1 = *(int*)param_2;
   if (iVar1 == 6) {
      *(undefined8*)( param_1 + 0x10 ) = *(undefined8*)( param_2 + 8 );
   }

   *param_3 = iVar1 == 6;
   return;
}
/* VariantSetGet_Rect2i_size::validated_set(Variant*, Variant const*) */void VariantSetGet_Rect2i_size::validated_set(Variant *param_1, Variant *param_2) {
   *(undefined8*)( param_1 + 0x10 ) = *(undefined8*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Rect2i_size::ptr_set(void*, void const*) */void VariantSetGet_Rect2i_size::ptr_set(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(undefined8*)( (long)param_1 + 8 ) = *param_2;
   return;
}
/* VariantSetGet_AABB_position::validated_get(Variant const*, Variant*) */void VariantSetGet_AABB_position::validated_get(Variant *param_1, Variant *param_2) {
   undefined8 *puVar1;
   puVar1 = *(undefined8**)( param_1 + 8 );
   *(undefined8*)( param_2 + 8 ) = *puVar1;
   *(undefined4*)( param_2 + 0x10 ) = *(undefined4*)( puVar1 + 1 );
   return;
}
/* VariantSetGet_AABB_position::ptr_get(void const*, void*) */void VariantSetGet_AABB_position::ptr_get(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(undefined8*)param_2 = *param_1;
   *(undefined4*)( (long)param_2 + 8 ) = *(undefined4*)( (long)param_1 + 8 );
   return;
}
/* VariantSetGet_AABB_position::set(Variant*, Variant const*, bool&) */void VariantSetGet_AABB_position::set(Variant *param_1, Variant *param_2, bool *param_3) {
   int iVar1;
   undefined8 *puVar2;
   iVar1 = *(int*)param_2;
   if (iVar1 == 9) {
      puVar2 = *(undefined8**)( param_1 + 8 );
      *puVar2 = *(undefined8*)( param_2 + 8 );
      *(undefined4*)( puVar2 + 1 ) = *(undefined4*)( param_2 + 0x10 );
   }

   *param_3 = iVar1 == 9;
   return;
}
/* VariantSetGet_AABB_position::validated_set(Variant*, Variant const*) */void VariantSetGet_AABB_position::validated_set(Variant *param_1, Variant *param_2) {
   undefined8 *puVar1;
   puVar1 = *(undefined8**)( param_1 + 8 );
   *puVar1 = *(undefined8*)( param_2 + 8 );
   *(undefined4*)( puVar1 + 1 ) = *(undefined4*)( param_2 + 0x10 );
   return;
}
/* VariantSetGet_AABB_position::ptr_set(void*, void const*) */void VariantSetGet_AABB_position::ptr_set(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   undefined8 uStack_20;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   /* WARNING: Load size is inaccurate */
   uStack_20 = CONCAT44((int)( ( ulong ) * (undefined8*)( (long)param_1 + 8 ) >> 0x20 ), *(undefined4*)( (long)param_2 + 8 ));
   *(undefined8*)param_1 = *param_2;
   *(undefined8*)( (long)param_1 + 8 ) = uStack_20;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantSetGet_AABB_size::validated_get(Variant const*, Variant*) */void VariantSetGet_AABB_size::validated_get(Variant *param_1, Variant *param_2) {
   long lVar1;
   lVar1 = *(long*)( param_1 + 8 );
   *(undefined8*)( param_2 + 8 ) = *(undefined8*)( lVar1 + 0xc );
   *(undefined4*)( param_2 + 0x10 ) = *(undefined4*)( lVar1 + 0x14 );
   return;
}
/* VariantSetGet_AABB_size::ptr_get(void const*, void*) */void VariantSetGet_AABB_size::ptr_get(void *param_1, void *param_2) {
   *(undefined8*)param_2 = *(undefined8*)( (long)param_1 + 0xc );
   *(undefined4*)( (long)param_2 + 8 ) = *(undefined4*)( (long)param_1 + 0x14 );
   return;
}
/* VariantSetGet_AABB_size::set(Variant*, Variant const*, bool&) */void VariantSetGet_AABB_size::set(Variant *param_1, Variant *param_2, bool *param_3) {
   int iVar1;
   long lVar2;
   iVar1 = *(int*)param_2;
   if (iVar1 == 9) {
      lVar2 = *(long*)( param_1 + 8 );
      *(undefined8*)( lVar2 + 0xc ) = *(undefined8*)( param_2 + 8 );
      *(undefined4*)( lVar2 + 0x14 ) = *(undefined4*)( param_2 + 0x10 );
   }

   *param_3 = iVar1 == 9;
   return;
}
/* VariantSetGet_AABB_size::validated_set(Variant*, Variant const*) */void VariantSetGet_AABB_size::validated_set(Variant *param_1, Variant *param_2) {
   long lVar1;
   lVar1 = *(long*)( param_1 + 8 );
   *(undefined8*)( lVar1 + 0xc ) = *(undefined8*)( param_2 + 8 );
   *(undefined4*)( lVar1 + 0x14 ) = *(undefined4*)( param_2 + 0x10 );
   return;
}
/* VariantSetGet_AABB_size::ptr_set(void*, void const*) */void VariantSetGet_AABB_size::ptr_set(void *param_1, void *param_2) {
   undefined4 uVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined4 uStack_20;
   undefined4 uStack_1c;
   undefined4 uStack_18;
   /* WARNING: Load size is inaccurate */
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   /* WARNING: Load size is inaccurate */
   uStack_20 = ( undefined4 ) * (undefined8*)( (long)param_1 + 8 );
   uStack_1c = ( undefined4 ) * param_2;
   uStack_18 = ( undefined4 )(( ulong ) * param_2 >> 0x20);
   uVar1 = *(undefined4*)( (long)param_2 + 8 );
   *(undefined8*)param_1 = *param_1;
   *(ulong*)( (long)param_1 + 8 ) = CONCAT44(uStack_1c, uStack_20);
   *(ulong*)( (long)param_1 + 0x10 ) = CONCAT44(uVar1, uStack_18);
   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantSetGet_AABB_end::validated_get(Variant const*, Variant*) */void VariantSetGet_AABB_end::validated_get(Variant *param_1, Variant *param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 *puVar3;
   puVar3 = *(undefined8**)( param_1 + 8 );
   uVar1 = *puVar3;
   uVar2 = *(undefined8*)( (long)puVar3 + 0xc );
   *(float*)( param_2 + 0x10 ) = *(float*)( (long)puVar3 + 0x14 ) + *(float*)( puVar3 + 1 );
   *(ulong*)( param_2 + 8 ) = CONCAT44((float)( (ulong)uVar1 >> 0x20 ) + (float)( (ulong)uVar2 >> 0x20 ), (float)uVar1 + (float)uVar2);
   return;
}
/* VariantSetGet_AABB_end::ptr_get(void const*, void*) */void VariantSetGet_AABB_end::ptr_get(void *param_1, void *param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   /* WARNING: Load size is inaccurate */
   uVar1 = *param_1;
   uVar2 = *(undefined8*)( (long)param_1 + 0xc );
   *(float*)( (long)param_2 + 8 ) = *(float*)( (long)param_1 + 8 ) + *(float*)( (long)param_1 + 0x14 );
   *(ulong*)param_2 = CONCAT44((float)( (ulong)uVar1 >> 0x20 ) + (float)( (ulong)uVar2 >> 0x20 ), (float)uVar1 + (float)uVar2);
   return;
}
/* VariantSetGet_AABB_end::validated_set(Variant*, Variant const*) */void VariantSetGet_AABB_end::validated_set(Variant *param_1, Variant *param_2) {
   undefined8 uVar1;
   undefined8 *puVar2;
   puVar2 = *(undefined8**)( param_1 + 8 );
   uVar1 = *(undefined8*)( param_2 + 8 );
   *(float*)( (long)puVar2 + 0x14 ) = *(float*)( param_2 + 0x10 ) - *(float*)( puVar2 + 1 );
   *(ulong*)( (long)puVar2 + 0xc ) = CONCAT44((float)( (ulong)uVar1 >> 0x20 ) - (float)( ( ulong ) * puVar2 >> 0x20 ), (float)uVar1 - (float)*puVar2);
   return;
}
/* VariantSetGet_AABB_end::ptr_set(void*, void const*) */void VariantSetGet_AABB_end::ptr_set(void *param_1, void *param_2) {
   undefined8 uVar1;
   /* WARNING: Load size is inaccurate */
   uVar1 = *param_2;
   /* WARNING: Load size is inaccurate */
   *(float*)( (long)param_1 + 0x14 ) = *(float*)( (long)param_2 + 8 ) - *(float*)( (long)param_1 + 8 );
   *(ulong*)( (long)param_1 + 0xc ) = CONCAT44((float)( (ulong)uVar1 >> 0x20 ) - (float)( ( ulong ) * param_1 >> 0x20 ), (float)uVar1 - (float)*param_1);
   return;
}
/* VariantSetGet_Transform2D_x::validated_get(Variant const*, Variant*) */void VariantSetGet_Transform2D_x::validated_get(Variant *param_1, Variant *param_2) {
   *(undefined8*)( param_2 + 8 ) = **(undefined8**)( param_1 + 8 );
   return;
}
/* VariantSetGet_Transform2D_x::ptr_get(void const*, void*) */void VariantSetGet_Transform2D_x::ptr_get(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(undefined8*)param_2 = *param_1;
   return;
}
/* VariantSetGet_Transform2D_x::set(Variant*, Variant const*, bool&) */void VariantSetGet_Transform2D_x::set(Variant *param_1, Variant *param_2, bool *param_3) {
   int iVar1;
   iVar1 = *(int*)param_2;
   if (iVar1 == 5) {
      **(undefined8**)( param_1 + 8 ) = *(undefined8*)( param_2 + 8 );
   }

   *param_3 = iVar1 == 5;
   return;
}
/* VariantSetGet_Transform2D_x::validated_set(Variant*, Variant const*) */void VariantSetGet_Transform2D_x::validated_set(Variant *param_1, Variant *param_2) {
   **(undefined8**)( param_1 + 8 ) = *(undefined8*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Transform2D_x::ptr_set(void*, void const*) */void VariantSetGet_Transform2D_x::ptr_set(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   /* WARNING: Load size is inaccurate */
   *(undefined8*)param_1 = *param_2;
   *(undefined8*)( (long)param_1 + 8 ) = *(undefined8*)( (long)param_1 + 8 );
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantSetGet_Transform2D_y::validated_get(Variant const*, Variant*) */void VariantSetGet_Transform2D_y::validated_get(Variant *param_1, Variant *param_2) {
   *(undefined8*)( param_2 + 8 ) = *(undefined8*)( *(long*)( param_1 + 8 ) + 8 );
   return;
}
/* VariantSetGet_Transform2D_y::ptr_get(void const*, void*) */void VariantSetGet_Transform2D_y::ptr_get(void *param_1, void *param_2) {
   *(undefined8*)param_2 = *(undefined8*)( (long)param_1 + 8 );
   return;
}
/* VariantSetGet_Transform2D_y::set(Variant*, Variant const*, bool&) */void VariantSetGet_Transform2D_y::set(Variant *param_1, Variant *param_2, bool *param_3) {
   int iVar1;
   iVar1 = *(int*)param_2;
   if (iVar1 == 5) {
      *(undefined8*)( *(long*)( param_1 + 8 ) + 8 ) = *(undefined8*)( param_2 + 8 );
   }

   *param_3 = iVar1 == 5;
   return;
}
/* VariantSetGet_Transform2D_y::validated_set(Variant*, Variant const*) */void VariantSetGet_Transform2D_y::validated_set(Variant *param_1, Variant *param_2) {
   *(undefined8*)( *(long*)( param_1 + 8 ) + 8 ) = *(undefined8*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Transform2D_y::ptr_set(void*, void const*) */void VariantSetGet_Transform2D_y::ptr_set(void *param_1, void *param_2) {
   long lVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   /* WARNING: Load size is inaccurate */
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   /* WARNING: Load size is inaccurate */
   uVar2 = *param_2;
   *(undefined8*)param_1 = *param_1;
   *(undefined8*)( (long)param_1 + 8 ) = uVar2;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantSetGet_Transform2D_origin::validated_get(Variant const*, Variant*) */void VariantSetGet_Transform2D_origin::validated_get(Variant *param_1, Variant *param_2) {
   *(undefined8*)( param_2 + 8 ) = *(undefined8*)( *(long*)( param_1 + 8 ) + 0x10 );
   return;
}
/* VariantSetGet_Transform2D_origin::ptr_get(void const*, void*) */void VariantSetGet_Transform2D_origin::ptr_get(void *param_1, void *param_2) {
   *(undefined8*)param_2 = *(undefined8*)( (long)param_1 + 0x10 );
   return;
}
/* VariantSetGet_Transform2D_origin::set(Variant*, Variant const*, bool&) */void VariantSetGet_Transform2D_origin::set(Variant *param_1, Variant *param_2, bool *param_3) {
   int iVar1;
   iVar1 = *(int*)param_2;
   if (iVar1 == 5) {
      *(undefined8*)( *(long*)( param_1 + 8 ) + 0x10 ) = *(undefined8*)( param_2 + 8 );
   }

   *param_3 = iVar1 == 5;
   return;
}
/* VariantSetGet_Transform2D_origin::validated_set(Variant*, Variant const*) */void VariantSetGet_Transform2D_origin::validated_set(Variant *param_1, Variant *param_2) {
   *(undefined8*)( *(long*)( param_1 + 8 ) + 0x10 ) = *(undefined8*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Transform2D_origin::ptr_set(void*, void const*) */void VariantSetGet_Transform2D_origin::ptr_set(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   /* WARNING: Load size is inaccurate */
   *(undefined8*)( (long)param_1 + 0x10 ) = *param_2;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantSetGet_Plane_x::validated_get(Variant const*, Variant*) */void VariantSetGet_Plane_x::validated_get(Variant *param_1, Variant *param_2) {
   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 8 );
   return;
}
/* VariantSetGet_Plane_x::ptr_get(void const*, void*) */void VariantSetGet_Plane_x::ptr_get(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(double*)param_2 = (double)*param_1;
   return;
}
/* VariantSetGet_Plane_x::set(Variant*, Variant const*, bool&) */void VariantSetGet_Plane_x::set(Variant *param_1, Variant *param_2, bool *param_3) {
   if (*(int*)param_2 == 3) {
      *(float*)( param_1 + 8 ) = (float)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      *(float*)( param_1 + 8 ) = (float)*(long*)( param_2 + 8 );
   }

   *param_3 = true;
   return;
}
/* VariantSetGet_Plane_x::validated_set(Variant*, Variant const*) */void VariantSetGet_Plane_x::validated_set(Variant *param_1, Variant *param_2) {
   *(float*)( param_1 + 8 ) = (float)*(double*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Plane_x::ptr_set(void*, void const*) */void VariantSetGet_Plane_x::ptr_set(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   undefined8 local_28;
   /* WARNING: Load size is inaccurate */
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   /* WARNING: Load size is inaccurate */
   local_28 = CONCAT44((int)( ( ulong ) * param_1 >> 0x20 ), (float)*param_2);
   *(undefined8*)param_1 = local_28;
   *(undefined8*)( (long)param_1 + 8 ) = *(undefined8*)( (long)param_1 + 8 );
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantSetGet_Plane_y::validated_get(Variant const*, Variant*) */void VariantSetGet_Plane_y::validated_get(Variant *param_1, Variant *param_2) {
   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 0xc );
   return;
}
/* VariantSetGet_Plane_y::ptr_get(void const*, void*) */void VariantSetGet_Plane_y::ptr_get(void *param_1, void *param_2) {
   *(double*)param_2 = (double)*(float*)( (long)param_1 + 4 );
   return;
}
/* VariantSetGet_Plane_y::set(Variant*, Variant const*, bool&) */void VariantSetGet_Plane_y::set(Variant *param_1, Variant *param_2, bool *param_3) {
   if (*(int*)param_2 == 3) {
      *(float*)( param_1 + 0xc ) = (float)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      *(float*)( param_1 + 0xc ) = (float)*(long*)( param_2 + 8 );
   }

   *param_3 = true;
   return;
}
/* VariantSetGet_Plane_y::validated_set(Variant*, Variant const*) */void VariantSetGet_Plane_y::validated_set(Variant *param_1, Variant *param_2) {
   *(float*)( param_1 + 0xc ) = (float)*(double*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Plane_y::ptr_set(void*, void const*) */void VariantSetGet_Plane_y::ptr_set(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   undefined8 local_28;
   /* WARNING: Load size is inaccurate */
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   /* WARNING: Load size is inaccurate */
   local_28 = CONCAT44((float)*param_2, (int)*param_1);
   *(undefined8*)param_1 = local_28;
   *(undefined8*)( (long)param_1 + 8 ) = *(undefined8*)( (long)param_1 + 8 );
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantSetGet_Plane_z::validated_get(Variant const*, Variant*) */void VariantSetGet_Plane_z::validated_get(Variant *param_1, Variant *param_2) {
   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 0x10 );
   return;
}
/* VariantSetGet_Plane_z::ptr_get(void const*, void*) */void VariantSetGet_Plane_z::ptr_get(void *param_1, void *param_2) {
   *(double*)param_2 = (double)*(float*)( (long)param_1 + 8 );
   return;
}
/* VariantSetGet_Plane_z::set(Variant*, Variant const*, bool&) */void VariantSetGet_Plane_z::set(Variant *param_1, Variant *param_2, bool *param_3) {
   if (*(int*)param_2 == 3) {
      *(float*)( param_1 + 0x10 ) = (float)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      *(float*)( param_1 + 0x10 ) = (float)*(long*)( param_2 + 8 );
   }

   *param_3 = true;
   return;
}
/* VariantSetGet_Plane_z::validated_set(Variant*, Variant const*) */void VariantSetGet_Plane_z::validated_set(Variant *param_1, Variant *param_2) {
   *(float*)( param_1 + 0x10 ) = (float)*(double*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Plane_z::ptr_set(void*, void const*) */void VariantSetGet_Plane_z::ptr_set(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   undefined8 uStack_20;
   /* WARNING: Load size is inaccurate */
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   /* WARNING: Load size is inaccurate */
   uStack_20 = CONCAT44((int)( ( ulong ) * (undefined8*)( (long)param_1 + 8 ) >> 0x20 ), (float)*param_2);
   *(undefined8*)param_1 = *param_1;
   *(undefined8*)( (long)param_1 + 8 ) = uStack_20;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantSetGet_Plane_normal::validated_get(Variant const*, Variant*) */void VariantSetGet_Plane_normal::validated_get(Variant *param_1, Variant *param_2) {
   *(undefined8*)( param_2 + 8 ) = *(undefined8*)( param_1 + 8 );
   *(undefined4*)( param_2 + 0x10 ) = *(undefined4*)( param_1 + 0x10 );
   return;
}
/* VariantSetGet_Plane_normal::ptr_get(void const*, void*) */void VariantSetGet_Plane_normal::ptr_get(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(undefined8*)param_2 = *param_1;
   *(undefined4*)( (long)param_2 + 8 ) = *(undefined4*)( (long)param_1 + 8 );
   return;
}
/* VariantSetGet_Plane_normal::set(Variant*, Variant const*, bool&) */void VariantSetGet_Plane_normal::set(Variant *param_1, Variant *param_2, bool *param_3) {
   int iVar1;
   iVar1 = *(int*)param_2;
   if (iVar1 == 9) {
      *(undefined8*)( param_1 + 8 ) = *(undefined8*)( param_2 + 8 );
      *(undefined4*)( param_1 + 0x10 ) = *(undefined4*)( param_2 + 0x10 );
   }

   *param_3 = iVar1 == 9;
   return;
}
/* VariantSetGet_Plane_normal::validated_set(Variant*, Variant const*) */void VariantSetGet_Plane_normal::validated_set(Variant *param_1, Variant *param_2) {
   *(undefined8*)( param_1 + 8 ) = *(undefined8*)( param_2 + 8 );
   *(undefined4*)( param_1 + 0x10 ) = *(undefined4*)( param_2 + 0x10 );
   return;
}
/* VariantSetGet_Plane_normal::ptr_set(void*, void const*) */void VariantSetGet_Plane_normal::ptr_set(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   undefined8 uStack_20;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   /* WARNING: Load size is inaccurate */
   uStack_20 = CONCAT44((int)( ( ulong ) * (undefined8*)( (long)param_1 + 8 ) >> 0x20 ), *(undefined4*)( (long)param_2 + 8 ));
   *(undefined8*)param_1 = *param_2;
   *(undefined8*)( (long)param_1 + 8 ) = uStack_20;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantSetGet_Plane_d::validated_get(Variant const*, Variant*) */void VariantSetGet_Plane_d::validated_get(Variant *param_1, Variant *param_2) {
   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 0x14 );
   return;
}
/* VariantSetGet_Plane_d::ptr_get(void const*, void*) */void VariantSetGet_Plane_d::ptr_get(void *param_1, void *param_2) {
   *(double*)param_2 = (double)*(float*)( (long)param_1 + 0xc );
   return;
}
/* VariantSetGet_Plane_d::set(Variant*, Variant const*, bool&) */void VariantSetGet_Plane_d::set(Variant *param_1, Variant *param_2, bool *param_3) {
   if (*(int*)param_2 == 3) {
      *(float*)( param_1 + 0x14 ) = (float)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      *(float*)( param_1 + 0x14 ) = (float)*(long*)( param_2 + 8 );
   }

   *param_3 = true;
   return;
}
/* VariantSetGet_Plane_d::validated_set(Variant*, Variant const*) */void VariantSetGet_Plane_d::validated_set(Variant *param_1, Variant *param_2) {
   *(float*)( param_1 + 0x14 ) = (float)*(double*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Plane_d::ptr_set(void*, void const*) */void VariantSetGet_Plane_d::ptr_set(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   undefined8 uStack_20;
   /* WARNING: Load size is inaccurate */
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   /* WARNING: Load size is inaccurate */
   uStack_20 = CONCAT44((float)*param_2, (int)*(undefined8*)( (long)param_1 + 8 ));
   *(undefined8*)param_1 = *param_1;
   *(undefined8*)( (long)param_1 + 8 ) = uStack_20;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantSetGet_Quaternion_x::validated_get(Variant const*, Variant*) */void VariantSetGet_Quaternion_x::validated_get(Variant *param_1, Variant *param_2) {
   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 8 );
   return;
}
/* VariantSetGet_Quaternion_x::ptr_get(void const*, void*) */void VariantSetGet_Quaternion_x::ptr_get(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(double*)param_2 = (double)*param_1;
   return;
}
/* VariantSetGet_Quaternion_x::set(Variant*, Variant const*, bool&) */void VariantSetGet_Quaternion_x::set(Variant *param_1, Variant *param_2, bool *param_3) {
   if (*(int*)param_2 == 3) {
      *(float*)( param_1 + 8 ) = (float)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      *(float*)( param_1 + 8 ) = (float)*(long*)( param_2 + 8 );
   }

   *param_3 = true;
   return;
}
/* VariantSetGet_Quaternion_x::validated_set(Variant*, Variant const*) */void VariantSetGet_Quaternion_x::validated_set(Variant *param_1, Variant *param_2) {
   *(float*)( param_1 + 8 ) = (float)*(double*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Quaternion_x::ptr_set(void*, void const*) */void VariantSetGet_Quaternion_x::ptr_set(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(float*)param_1 = (float)*param_2;
   return;
}
/* VariantSetGet_Quaternion_y::validated_get(Variant const*, Variant*) */void VariantSetGet_Quaternion_y::validated_get(Variant *param_1, Variant *param_2) {
   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 0xc );
   return;
}
/* VariantSetGet_Quaternion_y::ptr_get(void const*, void*) */void VariantSetGet_Quaternion_y::ptr_get(void *param_1, void *param_2) {
   *(double*)param_2 = (double)*(float*)( (long)param_1 + 4 );
   return;
}
/* VariantSetGet_Quaternion_y::set(Variant*, Variant const*, bool&) */void VariantSetGet_Quaternion_y::set(Variant *param_1, Variant *param_2, bool *param_3) {
   if (*(int*)param_2 == 3) {
      *(float*)( param_1 + 0xc ) = (float)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      *(float*)( param_1 + 0xc ) = (float)*(long*)( param_2 + 8 );
   }

   *param_3 = true;
   return;
}
/* VariantSetGet_Quaternion_y::validated_set(Variant*, Variant const*) */void VariantSetGet_Quaternion_y::validated_set(Variant *param_1, Variant *param_2) {
   *(float*)( param_1 + 0xc ) = (float)*(double*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Quaternion_y::ptr_set(void*, void const*) */void VariantSetGet_Quaternion_y::ptr_set(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(float*)( (long)param_1 + 4 ) = (float)*param_2;
   return;
}
/* VariantSetGet_Quaternion_z::validated_get(Variant const*, Variant*) */void VariantSetGet_Quaternion_z::validated_get(Variant *param_1, Variant *param_2) {
   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 0x10 );
   return;
}
/* VariantSetGet_Quaternion_z::ptr_get(void const*, void*) */void VariantSetGet_Quaternion_z::ptr_get(void *param_1, void *param_2) {
   *(double*)param_2 = (double)*(float*)( (long)param_1 + 8 );
   return;
}
/* VariantSetGet_Quaternion_z::set(Variant*, Variant const*, bool&) */void VariantSetGet_Quaternion_z::set(Variant *param_1, Variant *param_2, bool *param_3) {
   if (*(int*)param_2 == 3) {
      *(float*)( param_1 + 0x10 ) = (float)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      *(float*)( param_1 + 0x10 ) = (float)*(long*)( param_2 + 8 );
   }

   *param_3 = true;
   return;
}
/* VariantSetGet_Quaternion_z::validated_set(Variant*, Variant const*) */void VariantSetGet_Quaternion_z::validated_set(Variant *param_1, Variant *param_2) {
   *(float*)( param_1 + 0x10 ) = (float)*(double*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Quaternion_z::ptr_set(void*, void const*) */void VariantSetGet_Quaternion_z::ptr_set(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(float*)( (long)param_1 + 8 ) = (float)*param_2;
   return;
}
/* VariantSetGet_Quaternion_w::validated_get(Variant const*, Variant*) */void VariantSetGet_Quaternion_w::validated_get(Variant *param_1, Variant *param_2) {
   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 0x14 );
   return;
}
/* VariantSetGet_Quaternion_w::ptr_get(void const*, void*) */void VariantSetGet_Quaternion_w::ptr_get(void *param_1, void *param_2) {
   *(double*)param_2 = (double)*(float*)( (long)param_1 + 0xc );
   return;
}
/* VariantSetGet_Quaternion_w::set(Variant*, Variant const*, bool&) */void VariantSetGet_Quaternion_w::set(Variant *param_1, Variant *param_2, bool *param_3) {
   if (*(int*)param_2 == 3) {
      *(float*)( param_1 + 0x14 ) = (float)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      *(float*)( param_1 + 0x14 ) = (float)*(long*)( param_2 + 8 );
   }

   *param_3 = true;
   return;
}
/* VariantSetGet_Quaternion_w::validated_set(Variant*, Variant const*) */void VariantSetGet_Quaternion_w::validated_set(Variant *param_1, Variant *param_2) {
   *(float*)( param_1 + 0x14 ) = (float)*(double*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Quaternion_w::ptr_set(void*, void const*) */void VariantSetGet_Quaternion_w::ptr_set(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(float*)( (long)param_1 + 0xc ) = (float)*param_2;
   return;
}
/* VariantSetGet_Basis_x::validated_get(Variant const*, Variant*) */void VariantSetGet_Basis_x::validated_get(Variant *param_1, Variant *param_2) {
   undefined4 uVar1;
   undefined8 *puVar2;
   puVar2 = *(undefined8**)( param_1 + 8 );
   uVar1 = *(undefined4*)( puVar2 + 3 );
   *(ulong*)( param_2 + 8 ) = CONCAT44((int)( (ulong)puVar2[1] >> 0x20 ), (int)*puVar2);
   *(undefined4*)( param_2 + 0x10 ) = uVar1;
   return;
}
/* VariantSetGet_Basis_x::ptr_get(void const*, void*) */void VariantSetGet_Basis_x::ptr_get(void *param_1, void *param_2) {
   undefined4 uVar1;
   /* WARNING: Load size is inaccurate */
   uVar1 = *(undefined4*)( (long)param_1 + 0x18 );
   *(ulong*)param_2 = CONCAT44((int)( ( ulong ) * (undefined8*)( (long)param_1 + 8 ) >> 0x20 ), (int)*param_1);
   *(undefined4*)( (long)param_2 + 8 ) = uVar1;
   return;
}
/* VariantSetGet_Basis_x::validated_set(Variant*, Variant const*) */void VariantSetGet_Basis_x::validated_set(Variant *param_1, Variant *param_2) {
   undefined4 *puVar1;
   puVar1 = *(undefined4**)( param_1 + 8 );
   *puVar1 = *(undefined4*)( param_2 + 8 );
   puVar1[3] = *(undefined4*)( param_2 + 0xc );
   puVar1[6] = *(undefined4*)( param_2 + 0x10 );
   return;
}
/* VariantSetGet_Basis_x::ptr_set(void*, void const*) */void VariantSetGet_Basis_x::ptr_set(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   undefined8 local_38;
   undefined8 uStack_30;
   undefined8 uStack_20;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   /* WARNING: Load size is inaccurate */
   /* WARNING: Load size is inaccurate */
   local_38 = CONCAT44((int)( ( ulong ) * param_1 >> 0x20 ), *param_2);
   uStack_30 = CONCAT44(*(undefined4*)( (long)param_2 + 4 ), (int)*(undefined8*)( (long)param_1 + 8 ));
   uStack_20 = CONCAT44((int)( ( ulong ) * (undefined8*)( (long)param_1 + 0x18 ) >> 0x20 ), *(undefined4*)( (long)param_2 + 8 ));
   *(undefined8*)param_1 = local_38;
   *(undefined8*)( (long)param_1 + 8 ) = uStack_30;
   *(undefined8*)( (long)param_1 + 0x10 ) = *(undefined8*)( (long)param_1 + 0x10 );
   *(undefined8*)( (long)param_1 + 0x18 ) = uStack_20;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantSetGet_Basis_y::validated_get(Variant const*, Variant*) */void VariantSetGet_Basis_y::validated_get(Variant *param_1, Variant *param_2) {
   undefined4 uVar1;
   long lVar2;
   lVar2 = *(long*)( param_1 + 8 );
   uVar1 = *(undefined4*)( lVar2 + 0x1c );
   *(ulong*)( param_2 + 8 ) = CONCAT44((int)( ( ulong ) * (undefined8*)( lVar2 + 0xc ) >> 0x20 ), (int)*(undefined8*)( lVar2 + 4 ));
   *(undefined4*)( param_2 + 0x10 ) = uVar1;
   return;
}
/* VariantSetGet_Basis_y::ptr_get(void const*, void*) */void VariantSetGet_Basis_y::ptr_get(void *param_1, void *param_2) {
   undefined4 uVar1;
   uVar1 = *(undefined4*)( (long)param_1 + 0x1c );
   *(ulong*)param_2 = CONCAT44((int)( ( ulong ) * (undefined8*)( (long)param_1 + 0xc ) >> 0x20 ), (int)*(undefined8*)( (long)param_1 + 4 ));
   *(undefined4*)( (long)param_2 + 8 ) = uVar1;
   return;
}
/* VariantSetGet_Basis_y::validated_set(Variant*, Variant const*) */void VariantSetGet_Basis_y::validated_set(Variant *param_1, Variant *param_2) {
   long lVar1;
   lVar1 = *(long*)( param_1 + 8 );
   for (int i = 0; i < 3; i++) {
      *(undefined4*)( lVar1 + ( 12*i + 4 ) ) = *(undefined4*)( param_2 + ( 4*i + 8 ) );
   }

   return;
}
/* VariantSetGet_Basis_y::ptr_set(void*, void const*) */void VariantSetGet_Basis_y::ptr_set(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   undefined8 local_38;
   undefined8 local_28;
   undefined8 uStack_20;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   /* WARNING: Load size is inaccurate */
   /* WARNING: Load size is inaccurate */
   local_38 = CONCAT44(*param_2, (int)*param_1);
   local_28 = CONCAT44((int)( ( ulong ) * (undefined8*)( (long)param_1 + 0x10 ) >> 0x20 ), *(undefined4*)( (long)param_2 + 4 ));
   uStack_20 = CONCAT44(*(undefined4*)( (long)param_2 + 8 ), (int)*(undefined8*)( (long)param_1 + 0x18 ));
   *(undefined8*)param_1 = local_38;
   *(undefined8*)( (long)param_1 + 8 ) = *(undefined8*)( (long)param_1 + 8 );
   *(undefined8*)( (long)param_1 + 0x10 ) = local_28;
   *(undefined8*)( (long)param_1 + 0x18 ) = uStack_20;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantSetGet_Basis_z::validated_get(Variant const*, Variant*) */void VariantSetGet_Basis_z::validated_get(Variant *param_1, Variant *param_2) {
   undefined4 uVar1;
   long lVar2;
   lVar2 = *(long*)( param_1 + 8 );
   uVar1 = *(undefined4*)( lVar2 + 0x20 );
   *(ulong*)( param_2 + 8 ) = CONCAT44((int)( ( ulong ) * (undefined8*)( lVar2 + 0x10 ) >> 0x20 ), (int)*(undefined8*)( lVar2 + 8 ));
   *(undefined4*)( param_2 + 0x10 ) = uVar1;
   return;
}
/* VariantSetGet_Basis_z::ptr_get(void const*, void*) */void VariantSetGet_Basis_z::ptr_get(void *param_1, void *param_2) {
   undefined4 uVar1;
   uVar1 = *(undefined4*)( (long)param_1 + 0x20 );
   *(ulong*)param_2 = CONCAT44((int)( ( ulong ) * (undefined8*)( (long)param_1 + 0x10 ) >> 0x20 ), (int)*(undefined8*)( (long)param_1 + 8 ));
   *(undefined4*)( (long)param_2 + 8 ) = uVar1;
   return;
}
/* VariantSetGet_Basis_z::validated_set(Variant*, Variant const*) */void VariantSetGet_Basis_z::validated_set(Variant *param_1, Variant *param_2) {
   long lVar1;
   lVar1 = *(long*)( param_1 + 8 );
   for (int i = 0; i < 3; i++) {
      *(undefined4*)( lVar1 + ( 12*i + 8 ) ) = *(undefined4*)( param_2 + ( 4*i + 8 ) );
   }

   return;
}
/* VariantSetGet_Basis_z::ptr_set(void*, void const*) */void VariantSetGet_Basis_z::ptr_set(void *param_1, void *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   undefined8 uStack_30;
   undefined8 local_28;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   /* WARNING: Load size is inaccurate */
   /* WARNING: Load size is inaccurate */
   uStack_30 = CONCAT44((int)( ( ulong ) * (undefined8*)( (long)param_1 + 8 ) >> 0x20 ), *param_2);
   local_28 = CONCAT44(*(undefined4*)( (long)param_2 + 4 ), (int)*(undefined8*)( (long)param_1 + 0x10 ));
   *(undefined4*)( (long)param_1 + 0x20 ) = *(undefined4*)( (long)param_2 + 8 );
   *(undefined8*)param_1 = *param_1;
   *(undefined8*)( (long)param_1 + 8 ) = uStack_30;
   *(undefined8*)( (long)param_1 + 0x10 ) = local_28;
   *(undefined8*)( (long)param_1 + 0x18 ) = *(undefined8*)( (long)param_1 + 0x18 );
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantSetGet_Transform3D_basis::validated_get(Variant const*, Variant*) */void VariantSetGet_Transform3D_basis::validated_get(Variant *param_1, Variant *param_2) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   puVar1 = *(undefined8**)( param_1 + 8 );
   puVar2 = *(undefined8**)( param_2 + 8 );
   uVar3 = puVar1[1];
   *puVar2 = *puVar1;
   puVar2[1] = uVar3;
   uVar3 = puVar1[3];
   puVar2[2] = puVar1[2];
   puVar2[3] = uVar3;
   *(undefined4*)( puVar2 + 4 ) = *(undefined4*)( puVar1 + 4 );
   return;
}
/* VariantSetGet_Transform3D_basis::ptr_get(void const*, void*) */void VariantSetGet_Transform3D_basis::ptr_get(void *param_1, void *param_2) {
   undefined8 uVar1;
   /* WARNING: Load size is inaccurate */
   uVar1 = *(undefined8*)( (long)param_1 + 8 );
   *(undefined8*)param_2 = *param_1;
   *(undefined8*)( (long)param_2 + 8 ) = uVar1;
   uVar1 = *(undefined8*)( (long)param_1 + 0x18 );
   *(undefined8*)( (long)param_2 + 0x10 ) = *(undefined8*)( (long)param_1 + 0x10 );
   *(undefined8*)( (long)param_2 + 0x18 ) = uVar1;
   *(undefined4*)( (long)param_2 + 0x20 ) = *(undefined4*)( (long)param_1 + 0x20 );
   return;
}
/* VariantSetGet_Transform3D_basis::validated_set(Variant*, Variant const*) */void VariantSetGet_Transform3D_basis::validated_set(Variant *param_1, Variant *param_2) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   puVar1 = *(undefined8**)( param_2 + 8 );
   puVar2 = *(undefined8**)( param_1 + 8 );
   uVar3 = puVar1[1];
   *puVar2 = *puVar1;
   puVar2[1] = uVar3;
   uVar3 = puVar1[3];
   puVar2[2] = puVar1[2];
   puVar2[3] = uVar3;
   *(undefined4*)( puVar2 + 4 ) = *(undefined4*)( puVar1 + 4 );
   return;
}
/* VariantSetGet_Transform3D_basis::ptr_set(void*, void const*) */void VariantSetGet_Transform3D_basis::ptr_set(void *param_1, void *param_2) {
   long lVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   undefined8 local_28;
   /* WARNING: Load size is inaccurate */
   uVar2 = *(undefined8*)( (long)param_2 + 8 );
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = *(undefined8*)( (long)param_2 + 0x10 );
   uVar4 = *(undefined8*)( (long)param_2 + 0x18 );
   local_28 = CONCAT44((int)( ( ulong ) * (undefined8*)( (long)param_1 + 0x20 ) >> 0x20 ), *(undefined4*)( (long)param_2 + 0x20 ));
   *(undefined8*)param_1 = *param_2;
   *(undefined8*)( (long)param_1 + 8 ) = uVar2;
   *(undefined8*)( (long)param_1 + 0x10 ) = uVar3;
   *(undefined8*)( (long)param_1 + 0x18 ) = uVar4;
   *(undefined8*)( (long)param_1 + 0x20 ) = local_28;
   *(undefined8*)( (long)param_1 + 0x28 ) = *(undefined8*)( (long)param_1 + 0x28 );
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantSetGet_Transform3D_origin::validated_get(Variant const*, Variant*) */void VariantSetGet_Transform3D_origin::validated_get(Variant *param_1, Variant *param_2) {
   long lVar1;
   lVar1 = *(long*)( param_1 + 8 );
   *(undefined8*)( param_2 + 8 ) = *(undefined8*)( lVar1 + 0x24 );
   *(undefined4*)( param_2 + 0x10 ) = *(undefined4*)( lVar1 + 0x2c );
   return;
}
/* VariantSetGet_Transform3D_origin::ptr_get(void const*, void*) */void VariantSetGet_Transform3D_origin::ptr_get(void *param_1, void *param_2) {
   *(undefined8*)param_2 = *(undefined8*)( (long)param_1 + 0x24 );
   *(undefined4*)( (long)param_2 + 8 ) = *(undefined4*)( (long)param_1 + 0x2c );
   return;
}
/* VariantSetGet_Transform3D_origin::set(Variant*, Variant const*, bool&) */void VariantSetGet_Transform3D_origin::set(Variant *param_1, Variant *param_2, bool *param_3) {
   int iVar1;
   long lVar2;
   iVar1 = *(int*)param_2;
   if (iVar1 == 9) {
      lVar2 = *(long*)( param_1 + 8 );
      *(undefined8*)( lVar2 + 0x24 ) = *(undefined8*)( param_2 + 8 );
      *(undefined4*)( lVar2 + 0x2c ) = *(undefined4*)( param_2 + 0x10 );
   }

   *param_3 = iVar1 == 9;
   return;
}
/* VariantSetGet_Transform3D_origin::validated_set(Variant*, Variant const*) */void VariantSetGet_Transform3D_origin::validated_set(Variant *param_1, Variant *param_2) {
   long lVar1;
   lVar1 = *(long*)( param_1 + 8 );
   *(undefined8*)( lVar1 + 0x24 ) = *(undefined8*)( param_2 + 8 );
   *(undefined4*)( lVar1 + 0x2c ) = *(undefined4*)( param_2 + 0x10 );
   return;
}
/* VariantSetGet_Transform3D_origin::ptr_set(void*, void const*) */void VariantSetGet_Transform3D_origin::ptr_set(void *param_1, void *param_2) {
   undefined4 uVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined4 local_28;
   undefined4 uStack_24;
   undefined4 uStack_20;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   /* WARNING: Load size is inaccurate */
   local_28 = ( undefined4 ) * (undefined8*)( (long)param_1 + 0x20 );
   uStack_24 = ( undefined4 ) * param_2;
   uStack_20 = ( undefined4 )(( ulong ) * param_2 >> 0x20);
   uVar1 = *(undefined4*)( (long)param_2 + 8 );
   *(ulong*)( (long)param_1 + 0x20 ) = CONCAT44(uStack_24, local_28);
   *(ulong*)( (long)param_1 + 0x28 ) = CONCAT44(uVar1, uStack_20);
   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantSetGet_Projection_x::validated_get(Variant const*, Variant*) */void VariantSetGet_Projection_x::validated_get(Variant *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = ( *(undefined8**)( param_1 + 8 ) )[1];
   *(undefined8*)( param_2 + 8 ) = **(undefined8**)( param_1 + 8 );
   *(undefined8*)( param_2 + 0x10 ) = uVar1;
   return;
}
/* VariantSetGet_Projection_x::ptr_get(void const*, void*) */void VariantSetGet_Projection_x::ptr_get(void *param_1, void *param_2) {
   undefined8 uVar1;
   /* WARNING: Load size is inaccurate */
   uVar1 = *(undefined8*)( (long)param_1 + 8 );
   *(undefined8*)param_2 = *param_1;
   *(undefined8*)( (long)param_2 + 8 ) = uVar1;
   return;
}
/* VariantSetGet_Projection_x::set(Variant*, Variant const*, bool&) */void VariantSetGet_Projection_x::set(Variant *param_1, Variant *param_2, bool *param_3) {
   int iVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   iVar1 = *(int*)param_2;
   if (iVar1 == 0xc) {
      puVar2 = *(undefined8**)( param_1 + 8 );
      uVar3 = *(undefined8*)( param_2 + 0x10 );
      *puVar2 = *(undefined8*)( param_2 + 8 );
      puVar2[1] = uVar3;
   }

   *param_3 = iVar1 == 0xc;
   return;
}
/* VariantSetGet_Projection_x::validated_set(Variant*, Variant const*) */void VariantSetGet_Projection_x::validated_set(Variant *param_1, Variant *param_2) {
   undefined8 *puVar1;
   undefined8 uVar2;
   puVar1 = *(undefined8**)( param_1 + 8 );
   uVar2 = *(undefined8*)( param_2 + 0x10 );
   *puVar1 = *(undefined8*)( param_2 + 8 );
   puVar1[1] = uVar2;
   return;
}
/* VariantSetGet_Projection_y::validated_get(Variant const*, Variant*) */void VariantSetGet_Projection_y::validated_get(Variant *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = *(undefined8*)( *(long*)( param_1 + 8 ) + 0x18 );
   *(undefined8*)( param_2 + 8 ) = *(undefined8*)( *(long*)( param_1 + 8 ) + 0x10 );
   *(undefined8*)( param_2 + 0x10 ) = uVar1;
   return;
}
/* VariantSetGet_Projection_y::ptr_get(void const*, void*) */void VariantSetGet_Projection_y::ptr_get(void *param_1, void *param_2) {
   undefined8 uVar1;
   uVar1 = *(undefined8*)( (long)param_1 + 0x18 );
   *(undefined8*)param_2 = *(undefined8*)( (long)param_1 + 0x10 );
   *(undefined8*)( (long)param_2 + 8 ) = uVar1;
   return;
}
/* VariantSetGet_Projection_y::set(Variant*, Variant const*, bool&) */void VariantSetGet_Projection_y::set(Variant *param_1, Variant *param_2, bool *param_3) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   iVar1 = *(int*)param_2;
   if (iVar1 == 0xc) {
      lVar2 = *(long*)( param_1 + 8 );
      uVar3 = *(undefined8*)( param_2 + 0x10 );
      *(undefined8*)( lVar2 + 0x10 ) = *(undefined8*)( param_2 + 8 );
      *(undefined8*)( lVar2 + 0x18 ) = uVar3;
   }

   *param_3 = iVar1 == 0xc;
   return;
}
/* VariantSetGet_Projection_y::validated_set(Variant*, Variant const*) */void VariantSetGet_Projection_y::validated_set(Variant *param_1, Variant *param_2) {
   long lVar1;
   undefined8 uVar2;
   lVar1 = *(long*)( param_1 + 8 );
   uVar2 = *(undefined8*)( param_2 + 0x10 );
   *(undefined8*)( lVar1 + 0x10 ) = *(undefined8*)( param_2 + 8 );
   *(undefined8*)( lVar1 + 0x18 ) = uVar2;
   return;
}
/* VariantSetGet_Projection_z::validated_get(Variant const*, Variant*) */void VariantSetGet_Projection_z::validated_get(Variant *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = *(undefined8*)( *(long*)( param_1 + 8 ) + 0x28 );
   *(undefined8*)( param_2 + 8 ) = *(undefined8*)( *(long*)( param_1 + 8 ) + 0x20 );
   *(undefined8*)( param_2 + 0x10 ) = uVar1;
   return;
}
/* VariantSetGet_Projection_z::ptr_get(void const*, void*) */void VariantSetGet_Projection_z::ptr_get(void *param_1, void *param_2) {
   undefined8 uVar1;
   uVar1 = *(undefined8*)( (long)param_1 + 0x28 );
   *(undefined8*)param_2 = *(undefined8*)( (long)param_1 + 0x20 );
   *(undefined8*)( (long)param_2 + 8 ) = uVar1;
   return;
}
/* VariantSetGet_Projection_z::set(Variant*, Variant const*, bool&) */void VariantSetGet_Projection_z::set(Variant *param_1, Variant *param_2, bool *param_3) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   iVar1 = *(int*)param_2;
   if (iVar1 == 0xc) {
      lVar2 = *(long*)( param_1 + 8 );
      uVar3 = *(undefined8*)( param_2 + 0x10 );
      *(undefined8*)( lVar2 + 0x20 ) = *(undefined8*)( param_2 + 8 );
      *(undefined8*)( lVar2 + 0x28 ) = uVar3;
   }

   *param_3 = iVar1 == 0xc;
   return;
}
/* VariantSetGet_Projection_z::validated_set(Variant*, Variant const*) */void VariantSetGet_Projection_z::validated_set(Variant *param_1, Variant *param_2) {
   long lVar1;
   undefined8 uVar2;
   lVar1 = *(long*)( param_1 + 8 );
   uVar2 = *(undefined8*)( param_2 + 0x10 );
   *(undefined8*)( lVar1 + 0x20 ) = *(undefined8*)( param_2 + 8 );
   *(undefined8*)( lVar1 + 0x28 ) = uVar2;
   return;
}
/* VariantSetGet_Projection_w::validated_get(Variant const*, Variant*) */void VariantSetGet_Projection_w::validated_get(Variant *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = *(undefined8*)( *(long*)( param_1 + 8 ) + 0x38 );
   *(undefined8*)( param_2 + 8 ) = *(undefined8*)( *(long*)( param_1 + 8 ) + 0x30 );
   *(undefined8*)( param_2 + 0x10 ) = uVar1;
   return;
}
/* VariantSetGet_Projection_w::ptr_get(void const*, void*) */void VariantSetGet_Projection_w::ptr_get(void *param_1, void *param_2) {
   undefined8 uVar1;
   uVar1 = *(undefined8*)( (long)param_1 + 0x38 );
   *(undefined8*)param_2 = *(undefined8*)( (long)param_1 + 0x30 );
   *(undefined8*)( (long)param_2 + 8 ) = uVar1;
   return;
}
/* VariantSetGet_Projection_w::set(Variant*, Variant const*, bool&) */void VariantSetGet_Projection_w::set(Variant *param_1, Variant *param_2, bool *param_3) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   iVar1 = *(int*)param_2;
   if (iVar1 == 0xc) {
      lVar2 = *(long*)( param_1 + 8 );
      uVar3 = *(undefined8*)( param_2 + 0x10 );
      *(undefined8*)( lVar2 + 0x30 ) = *(undefined8*)( param_2 + 8 );
      *(undefined8*)( lVar2 + 0x38 ) = uVar3;
   }

   *param_3 = iVar1 == 0xc;
   return;
}
/* VariantSetGet_Projection_w::validated_set(Variant*, Variant const*) */void VariantSetGet_Projection_w::validated_set(Variant *param_1, Variant *param_2) {
   long lVar1;
   undefined8 uVar2;
   lVar1 = *(long*)( param_1 + 8 );
   uVar2 = *(undefined8*)( param_2 + 0x10 );
   *(undefined8*)( lVar1 + 0x30 ) = *(undefined8*)( param_2 + 8 );
   *(undefined8*)( lVar1 + 0x38 ) = uVar2;
   return;
}
/* VariantSetGet_Color_r::validated_get(Variant const*, Variant*) */void VariantSetGet_Color_r::validated_get(Variant *param_1, Variant *param_2) {
   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 8 );
   return;
}
/* VariantSetGet_Color_r::ptr_get(void const*, void*) */void VariantSetGet_Color_r::ptr_get(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(double*)param_2 = (double)*param_1;
   return;
}
/* VariantSetGet_Color_r::set(Variant*, Variant const*, bool&) */void VariantSetGet_Color_r::set(Variant *param_1, Variant *param_2, bool *param_3) {
   if (*(int*)param_2 == 3) {
      *(float*)( param_1 + 8 ) = (float)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      *(float*)( param_1 + 8 ) = (float)*(long*)( param_2 + 8 );
   }

   *param_3 = true;
   return;
}
/* VariantSetGet_Color_r::validated_set(Variant*, Variant const*) */void VariantSetGet_Color_r::validated_set(Variant *param_1, Variant *param_2) {
   *(float*)( param_1 + 8 ) = (float)*(double*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Color_r::ptr_set(void*, void const*) */void VariantSetGet_Color_r::ptr_set(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(float*)param_1 = (float)*param_2;
   return;
}
/* VariantSetGet_Color_g::validated_get(Variant const*, Variant*) */void VariantSetGet_Color_g::validated_get(Variant *param_1, Variant *param_2) {
   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 0xc );
   return;
}
/* VariantSetGet_Color_g::ptr_get(void const*, void*) */void VariantSetGet_Color_g::ptr_get(void *param_1, void *param_2) {
   *(double*)param_2 = (double)*(float*)( (long)param_1 + 4 );
   return;
}
/* VariantSetGet_Color_g::set(Variant*, Variant const*, bool&) */void VariantSetGet_Color_g::set(Variant *param_1, Variant *param_2, bool *param_3) {
   if (*(int*)param_2 == 3) {
      *(float*)( param_1 + 0xc ) = (float)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      *(float*)( param_1 + 0xc ) = (float)*(long*)( param_2 + 8 );
   }

   *param_3 = true;
   return;
}
/* VariantSetGet_Color_g::validated_set(Variant*, Variant const*) */void VariantSetGet_Color_g::validated_set(Variant *param_1, Variant *param_2) {
   *(float*)( param_1 + 0xc ) = (float)*(double*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Color_g::ptr_set(void*, void const*) */void VariantSetGet_Color_g::ptr_set(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(float*)( (long)param_1 + 4 ) = (float)*param_2;
   return;
}
/* VariantSetGet_Color_b::validated_get(Variant const*, Variant*) */void VariantSetGet_Color_b::validated_get(Variant *param_1, Variant *param_2) {
   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 0x10 );
   return;
}
/* VariantSetGet_Color_b::ptr_get(void const*, void*) */void VariantSetGet_Color_b::ptr_get(void *param_1, void *param_2) {
   *(double*)param_2 = (double)*(float*)( (long)param_1 + 8 );
   return;
}
/* VariantSetGet_Color_b::set(Variant*, Variant const*, bool&) */void VariantSetGet_Color_b::set(Variant *param_1, Variant *param_2, bool *param_3) {
   if (*(int*)param_2 == 3) {
      *(float*)( param_1 + 0x10 ) = (float)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      *(float*)( param_1 + 0x10 ) = (float)*(long*)( param_2 + 8 );
   }

   *param_3 = true;
   return;
}
/* VariantSetGet_Color_b::validated_set(Variant*, Variant const*) */void VariantSetGet_Color_b::validated_set(Variant *param_1, Variant *param_2) {
   *(float*)( param_1 + 0x10 ) = (float)*(double*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Color_b::ptr_set(void*, void const*) */void VariantSetGet_Color_b::ptr_set(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(float*)( (long)param_1 + 8 ) = (float)*param_2;
   return;
}
/* VariantSetGet_Color_a::validated_get(Variant const*, Variant*) */void VariantSetGet_Color_a::validated_get(Variant *param_1, Variant *param_2) {
   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 0x14 );
   return;
}
/* VariantSetGet_Color_a::ptr_get(void const*, void*) */void VariantSetGet_Color_a::ptr_get(void *param_1, void *param_2) {
   *(double*)param_2 = (double)*(float*)( (long)param_1 + 0xc );
   return;
}
/* VariantSetGet_Color_a::set(Variant*, Variant const*, bool&) */void VariantSetGet_Color_a::set(Variant *param_1, Variant *param_2, bool *param_3) {
   if (*(int*)param_2 == 3) {
      *(float*)( param_1 + 0x14 ) = (float)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      *(float*)( param_1 + 0x14 ) = (float)*(long*)( param_2 + 8 );
   }

   *param_3 = true;
   return;
}
/* VariantSetGet_Color_a::validated_set(Variant*, Variant const*) */void VariantSetGet_Color_a::validated_set(Variant *param_1, Variant *param_2) {
   *(float*)( param_1 + 0x14 ) = (float)*(double*)( param_2 + 8 );
   return;
}
/* VariantSetGet_Color_a::ptr_set(void*, void const*) */void VariantSetGet_Color_a::ptr_set(void *param_1, void *param_2) {
   /* WARNING: Load size is inaccurate */
   *(float*)( (long)param_1 + 0xc ) = (float)*param_2;
   return;
}
/* VariantSetGet_Color_r8::validated_set(Variant*, Variant const*) */void VariantSetGet_Color_r8::validated_set(Variant *param_1, Variant *param_2) {
   int iVar1;
   iVar1 = (int)*(undefined8*)( param_2 + 8 );
   if (0xff < iVar1) {
      iVar1 = 0xff;
   }

   if (iVar1 < 0) {
      iVar1 = 0;
   }

   *(float*)( param_1 + 8 ) = (float)iVar1 / _LC0;
   return;
}
/* VariantSetGet_Color_r8::ptr_set(void*, void const*) */void VariantSetGet_Color_r8::ptr_set(void *param_1, void *param_2) {
   int iVar1;
   /* WARNING: Load size is inaccurate */
   iVar1 = (int)*param_2;
   if (0xff < iVar1) {
      iVar1 = 0xff;
   }

   if (iVar1 < 0) {
      iVar1 = 0;
   }

   *(float*)param_1 = (float)iVar1 / _LC0;
   return;
}
/* VariantSetGet_Color_g8::validated_set(Variant*, Variant const*) */void VariantSetGet_Color_g8::validated_set(Variant *param_1, Variant *param_2) {
   int iVar1;
   iVar1 = (int)*(undefined8*)( param_2 + 8 );
   if (0xff < iVar1) {
      iVar1 = 0xff;
   }

   if (iVar1 < 0) {
      iVar1 = 0;
   }

   *(float*)( param_1 + 0xc ) = (float)iVar1 / _LC0;
   return;
}
/* VariantSetGet_Color_g8::ptr_set(void*, void const*) */void VariantSetGet_Color_g8::ptr_set(void *param_1, void *param_2) {
   int iVar1;
   /* WARNING: Load size is inaccurate */
   iVar1 = (int)*param_2;
   if (0xff < iVar1) {
      iVar1 = 0xff;
   }

   if (iVar1 < 0) {
      iVar1 = 0;
   }

   *(float*)( (long)param_1 + 4 ) = (float)iVar1 / _LC0;
   return;
}
/* VariantSetGet_Color_b8::validated_set(Variant*, Variant const*) */void VariantSetGet_Color_b8::validated_set(Variant *param_1, Variant *param_2) {
   int iVar1;
   iVar1 = (int)*(undefined8*)( param_2 + 8 );
   if (0xff < iVar1) {
      iVar1 = 0xff;
   }

   if (iVar1 < 0) {
      iVar1 = 0;
   }

   *(float*)( param_1 + 0x10 ) = (float)iVar1 / _LC0;
   return;
}
/* VariantSetGet_Color_b8::ptr_set(void*, void const*) */void VariantSetGet_Color_b8::ptr_set(void *param_1, void *param_2) {
   int iVar1;
   /* WARNING: Load size is inaccurate */
   iVar1 = (int)*param_2;
   if (0xff < iVar1) {
      iVar1 = 0xff;
   }

   if (iVar1 < 0) {
      iVar1 = 0;
   }

   *(float*)( (long)param_1 + 8 ) = (float)iVar1 / _LC0;
   return;
}
/* VariantSetGet_Color_a8::validated_set(Variant*, Variant const*) */void VariantSetGet_Color_a8::validated_set(Variant *param_1, Variant *param_2) {
   int iVar1;
   iVar1 = (int)*(undefined8*)( param_2 + 8 );
   if (0xff < iVar1) {
      iVar1 = 0xff;
   }

   if (iVar1 < 0) {
      iVar1 = 0;
   }

   *(float*)( param_1 + 0x14 ) = (float)iVar1 / _LC0;
   return;
}
/* VariantSetGet_Color_a8::ptr_set(void*, void const*) */void VariantSetGet_Color_a8::ptr_set(void *param_1, void *param_2) {
   int iVar1;
   /* WARNING: Load size is inaccurate */
   iVar1 = (int)*param_2;
   if (0xff < iVar1) {
      iVar1 = 0xff;
   }

   if (iVar1 < 0) {
      iVar1 = 0;
   }

   *(float*)( (long)param_1 + 0xc ) = (float)iVar1 / _LC0;
   return;
}
/* VariantIndexedSetGet_Array::get_indexed_size(Variant const*) */undefined8 VariantIndexedSetGet_Array::get_indexed_size(Variant *param_1) {
   return 0;
}
/* VariantIndexedSetGet_String::get_indexed_size(Variant const*) */long VariantIndexedSetGet_String::get_indexed_size(Variant *param_1) {
   int iVar1;
   long lVar2;
   if (*(long*)( param_1 + 8 ) != 0) {
      iVar1 = (int)*(undefined8*)( *(long*)( param_1 + 8 ) + -8 );
      lVar2 = (long)( iVar1 + -1 );
      if (iVar1 == 0) {
         lVar2 = 0;
      }

      return lVar2;
   }

   return 0;
}
/* VariantIndexedSetGet_Vector2::validated_set(Variant*, long, Variant const*, bool*) */void VariantIndexedSetGet_Vector2::validated_set(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   if (1U >= (ulong)param_2) {
      *(float*)( param_1 + (long)(int)param_2 * 4 + 8 ) = (float)*(double*)( param_3 + 8 );
   }

   *param_4 = 1U < (ulong)param_2;
   return;
}
/* VariantIndexedSetGet_Vector2::get_indexed_size(Variant const*) */undefined8 VariantIndexedSetGet_Vector2::get_indexed_size(Variant *param_1) {
   return 2;
}
/* VariantIndexedSetGet_Vector2i::validated_set(Variant*, long, Variant const*, bool*) */void VariantIndexedSetGet_Vector2i::validated_set(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   if (1U >= (ulong)param_2) {
      *(int*)( param_1 + (long)(int)param_2 * 4 + 8 ) = (int)*(undefined8*)( param_3 + 8 );
   }

   *param_4 = 1U < (ulong)param_2;
   return;
}
/* VariantIndexedSetGet_Vector2i::get_indexed_size(Variant const*) */undefined8 VariantIndexedSetGet_Vector2i::get_indexed_size(Variant *param_1) {
   return 2;
}
/* VariantIndexedSetGet_Vector3::validated_set(Variant*, long, Variant const*, bool*) */void VariantIndexedSetGet_Vector3::validated_set(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   if (2U >= (ulong)param_2) {
      *(float*)( param_1 + (long)(int)param_2 * 4 + 8 ) = (float)*(double*)( param_3 + 8 );
   }

   *param_4 = 2U < (ulong)param_2;
   return;
}
/* VariantIndexedSetGet_Vector3::get_indexed_size(Variant const*) */undefined8 VariantIndexedSetGet_Vector3::get_indexed_size(Variant *param_1) {
   return 3;
}
/* VariantIndexedSetGet_Vector3i::validated_set(Variant*, long, Variant const*, bool*) */void VariantIndexedSetGet_Vector3i::validated_set(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   if (2U >= (ulong)param_2) {
      *(int*)( param_1 + (long)(int)param_2 * 4 + 8 ) = (int)*(undefined8*)( param_3 + 8 );
   }

   *param_4 = 2U < (ulong)param_2;
   return;
}
/* VariantIndexedSetGet_Vector3i::get_indexed_size(Variant const*) */undefined8 VariantIndexedSetGet_Vector3i::get_indexed_size(Variant *param_1) {
   return 3;
}
/* VariantIndexedSetGet_Vector4::validated_set(Variant*, long, Variant const*, bool*) */void VariantIndexedSetGet_Vector4::validated_set(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   if (3U >= (ulong)param_2) {
      *(float*)( param_1 + (long)(int)param_2 * 4 + 8 ) = (float)*(double*)( param_3 + 8 );
   }

   *param_4 = 3U < (ulong)param_2;
   return;
}
/* VariantIndexedSetGet_Vector4::get_indexed_size(Variant const*) */undefined8 VariantIndexedSetGet_Vector4::get_indexed_size(Variant *param_1) {
   return 4;
}
/* VariantIndexedSetGet_Vector4i::validated_set(Variant*, long, Variant const*, bool*) */void VariantIndexedSetGet_Vector4i::validated_set(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   if (3U >= (ulong)param_2) {
      *(int*)( param_1 + (long)(int)param_2 * 4 + 8 ) = (int)*(undefined8*)( param_3 + 8 );
   }

   *param_4 = 3U < (ulong)param_2;
   return;
}
/* VariantIndexedSetGet_Vector4i::get_indexed_size(Variant const*) */undefined8 VariantIndexedSetGet_Vector4i::get_indexed_size(Variant *param_1) {
   return 4;
}
/* VariantIndexedSetGet_Quaternion::validated_set(Variant*, long, Variant const*, bool*) */void VariantIndexedSetGet_Quaternion::validated_set(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   if (3U >= (ulong)param_2) {
      *(float*)( param_1 + (long)(int)param_2 * 4 + 8 ) = (float)*(double*)( param_3 + 8 );
   }

   *param_4 = 3U < (ulong)param_2;
   return;
}
/* VariantIndexedSetGet_Quaternion::get_indexed_size(Variant const*) */undefined8 VariantIndexedSetGet_Quaternion::get_indexed_size(Variant *param_1) {
   return 4;
}
/* VariantIndexedSetGet_Color::validated_set(Variant*, long, Variant const*, bool*) */void VariantIndexedSetGet_Color::validated_set(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   if (3U >= (ulong)param_2) {
      *(float*)( param_1 + (long)(int)param_2 * 4 + 8 ) = (float)*(double*)( param_3 + 8 );
   }

   *param_4 = 3U < (ulong)param_2;
   return;
}
/* VariantIndexedSetGet_Color::get_indexed_size(Variant const*) */undefined8 VariantIndexedSetGet_Color::get_indexed_size(Variant *param_1) {
   return 4;
}
/* VariantIndexedSetGet_Transform2D::set(Variant*, long, Variant const*, bool*, bool*) */void VariantIndexedSetGet_Transform2D::set(Variant *param_1, long param_2, Variant *param_3, bool *param_4, bool *param_5) {
   if (*(int*)param_3 != 5) {
      *param_5 = false;
      *param_4 = false;
   }

   if ((ulong)param_2 < 3) {
      *(undefined8*)( *(long*)( param_1 + 8 ) + param_2 * 8 ) = *(undefined8*)( param_3 + 8 );
      *param_5 = false;
      *param_4 = true;
      return;
   }

   *param_5 = true;
   *param_4 = false;
   return;
}
/* VariantIndexedSetGet_Transform2D::validated_set(Variant*, long, Variant const*, bool*) */void VariantIndexedSetGet_Transform2D::validated_set(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   if (2U >= (ulong)param_2) {
      *(undefined8*)( *(long*)( param_1 + 8 ) + param_2 * 8 ) = *(undefined8*)( param_3 + 8 );
   }

   *param_4 = 2U < (ulong)param_2;
   return;
}
/* VariantIndexedSetGet_Transform2D::get_indexed_size(Variant const*) */undefined8 VariantIndexedSetGet_Transform2D::get_indexed_size(Variant *param_1) {
   return 3;
}
/* VariantIndexedSetGet_Basis::get_indexed_size(Variant const*) */undefined8 VariantIndexedSetGet_Basis::get_indexed_size(Variant *param_1) {
   return 3;
}
/* VariantIndexedSetGet_Projection::set(Variant*, long, Variant const*, bool*, bool*) */void VariantIndexedSetGet_Projection::set(Variant *param_1, long param_2, Variant *param_3, bool *param_4, bool *param_5) {
   undefined8 uVar1;
   undefined8 *puVar2;
   if (*(int*)param_3 != 0xc) {
      *param_5 = false;
      *param_4 = false;
   }

   if ((ulong)param_2 < 4) {
      uVar1 = *(undefined8*)( param_3 + 0x10 );
      puVar2 = (undefined8*)( param_2 * 0x10 + *(long*)( param_1 + 8 ) );
      *puVar2 = *(undefined8*)( param_3 + 8 );
      puVar2[1] = uVar1;
      *param_5 = false;
      *param_4 = true;
      return;
   }

   *param_5 = true;
   *param_4 = false;
   return;
}
/* VariantIndexedSetGet_Projection::validated_set(Variant*, long, Variant const*, bool*) */void VariantIndexedSetGet_Projection::validated_set(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   undefined8 uVar1;
   undefined8 *puVar2;
   if (3U >= (ulong)param_2) {
      uVar1 = *(undefined8*)( param_3 + 0x10 );
      puVar2 = (undefined8*)( param_2 * 0x10 + *(long*)( param_1 + 8 ) );
      *puVar2 = *(undefined8*)( param_3 + 8 );
      puVar2[1] = uVar1;
   }

   *param_4 = 3U < (ulong)param_2;
   return;
}
/* VariantIndexedSetGet_Projection::get_indexed_size(Variant const*) */undefined8 VariantIndexedSetGet_Projection::get_indexed_size(Variant *param_1) {
   return 4;
}
/* VariantIndexedSetGet_PackedByteArray::get_indexed_size(Variant const*) */undefined8 VariantIndexedSetGet_PackedByteArray::get_indexed_size(Variant *param_1) {
   if (*(long*)( *(long*)( param_1 + 8 ) + 0x18 ) != 0) {
      return *(undefined8*)( *(long*)( *(long*)( param_1 + 8 ) + 0x18 ) + -8 );
   }

   return 0;
}
/* VariantIndexedSetGet_PackedInt32Array::get_indexed_size(Variant const*) */undefined8 VariantIndexedSetGet_PackedInt32Array::get_indexed_size(Variant *param_1) {
   if (*(long*)( *(long*)( param_1 + 8 ) + 0x18 ) != 0) {
      return *(undefined8*)( *(long*)( *(long*)( param_1 + 8 ) + 0x18 ) + -8 );
   }

   return 0;
}
/* VariantIndexedSetGet_PackedInt64Array::get_indexed_size(Variant const*) */undefined8 VariantIndexedSetGet_PackedInt64Array::get_indexed_size(Variant *param_1) {
   if (*(long*)( *(long*)( param_1 + 8 ) + 0x18 ) != 0) {
      return *(undefined8*)( *(long*)( *(long*)( param_1 + 8 ) + 0x18 ) + -8 );
   }

   return 0;
}
/* VariantIndexedSetGet_PackedFloat32Array::get_indexed_size(Variant const*) */undefined8 VariantIndexedSetGet_PackedFloat32Array::get_indexed_size(Variant *param_1) {
   if (*(long*)( *(long*)( param_1 + 8 ) + 0x18 ) != 0) {
      return *(undefined8*)( *(long*)( *(long*)( param_1 + 8 ) + 0x18 ) + -8 );
   }

   return 0;
}
/* VariantIndexedSetGet_PackedFloat64Array::get_indexed_size(Variant const*) */undefined8 VariantIndexedSetGet_PackedFloat64Array::get_indexed_size(Variant *param_1) {
   if (*(long*)( *(long*)( param_1 + 8 ) + 0x18 ) != 0) {
      return *(undefined8*)( *(long*)( *(long*)( param_1 + 8 ) + 0x18 ) + -8 );
   }

   return 0;
}
/* VariantIndexedSetGet_PackedVector2Array::get_indexed_size(Variant const*) */undefined8 VariantIndexedSetGet_PackedVector2Array::get_indexed_size(Variant *param_1) {
   if (*(long*)( *(long*)( param_1 + 8 ) + 0x18 ) != 0) {
      return *(undefined8*)( *(long*)( *(long*)( param_1 + 8 ) + 0x18 ) + -8 );
   }

   return 0;
}
/* VariantIndexedSetGet_PackedVector3Array::get_indexed_size(Variant const*) */undefined8 VariantIndexedSetGet_PackedVector3Array::get_indexed_size(Variant *param_1) {
   if (*(long*)( *(long*)( param_1 + 8 ) + 0x18 ) != 0) {
      return *(undefined8*)( *(long*)( *(long*)( param_1 + 8 ) + 0x18 ) + -8 );
   }

   return 0;
}
/* VariantIndexedSetGet_PackedStringArray::get_indexed_size(Variant const*) */undefined8 VariantIndexedSetGet_PackedStringArray::get_indexed_size(Variant *param_1) {
   if (*(long*)( *(long*)( param_1 + 8 ) + 0x18 ) != 0) {
      return *(undefined8*)( *(long*)( *(long*)( param_1 + 8 ) + 0x18 ) + -8 );
   }

   return 0;
}
/* VariantIndexedSetGet_PackedColorArray::get_indexed_size(Variant const*) */undefined8 VariantIndexedSetGet_PackedColorArray::get_indexed_size(Variant *param_1) {
   if (*(long*)( *(long*)( param_1 + 8 ) + 0x18 ) != 0) {
      return *(undefined8*)( *(long*)( *(long*)( param_1 + 8 ) + 0x18 ) + -8 );
   }

   return 0;
}
/* VariantIndexedSetGet_PackedVector4Array::get_indexed_size(Variant const*) */undefined8 VariantIndexedSetGet_PackedVector4Array::get_indexed_size(Variant *param_1) {
   if (*(long*)( *(long*)( param_1 + 8 ) + 0x18 ) != 0) {
      return *(undefined8*)( *(long*)( *(long*)( param_1 + 8 ) + 0x18 ) + -8 );
   }

   return 0;
}
/* VariantSetGet_Vector2_x::get(Variant const*, Variant*) */void VariantSetGet_Vector2_x::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 3) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 3;
   }

   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 8 );
   return;
}
/* VariantSetGet_Vector2_y::get(Variant const*, Variant*) */void VariantSetGet_Vector2_y::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 3) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 3;
   }

   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 0xc );
   return;
}
/* VariantSetGet_Vector3_x::get(Variant const*, Variant*) */void VariantSetGet_Vector3_x::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 3) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 3;
   }

   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 8 );
   return;
}
/* VariantSetGet_Vector3_y::get(Variant const*, Variant*) */void VariantSetGet_Vector3_y::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 3) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 3;
   }

   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 0xc );
   return;
}
/* VariantSetGet_Vector3_z::get(Variant const*, Variant*) */void VariantSetGet_Vector3_z::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 3) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 3;
   }

   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 0x10 );
   return;
}
/* VariantSetGet_Vector4_x::get(Variant const*, Variant*) */void VariantSetGet_Vector4_x::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 3) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 3;
   }

   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 8 );
   return;
}
/* VariantSetGet_Vector4_y::get(Variant const*, Variant*) */void VariantSetGet_Vector4_y::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 3) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 3;
   }

   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 0xc );
   return;
}
/* VariantSetGet_Vector4_z::get(Variant const*, Variant*) */void VariantSetGet_Vector4_z::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 3) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 3;
   }

   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 0x10 );
   return;
}
/* VariantSetGet_Vector4_w::get(Variant const*, Variant*) */void VariantSetGet_Vector4_w::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 3) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 3;
   }

   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 0x14 );
   return;
}
/* VariantSetGet_Plane_x::get(Variant const*, Variant*) */void VariantSetGet_Plane_x::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 3) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 3;
   }

   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 8 );
   return;
}
/* VariantSetGet_Plane_y::get(Variant const*, Variant*) */void VariantSetGet_Plane_y::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 3) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 3;
   }

   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 0xc );
   return;
}
/* VariantSetGet_Plane_z::get(Variant const*, Variant*) */void VariantSetGet_Plane_z::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 3) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 3;
   }

   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 0x10 );
   return;
}
/* VariantSetGet_Plane_d::get(Variant const*, Variant*) */void VariantSetGet_Plane_d::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 3) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 3;
   }

   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 0x14 );
   return;
}
/* VariantSetGet_Quaternion_x::get(Variant const*, Variant*) */void VariantSetGet_Quaternion_x::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 3) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 3;
   }

   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 8 );
   return;
}
/* VariantSetGet_Quaternion_y::get(Variant const*, Variant*) */void VariantSetGet_Quaternion_y::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 3) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 3;
   }

   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 0xc );
   return;
}
/* VariantSetGet_Quaternion_z::get(Variant const*, Variant*) */void VariantSetGet_Quaternion_z::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 3) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 3;
   }

   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 0x10 );
   return;
}
/* VariantSetGet_Quaternion_w::get(Variant const*, Variant*) */void VariantSetGet_Quaternion_w::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 3) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 3;
   }

   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 0x14 );
   return;
}
/* VariantSetGet_Color_r::get(Variant const*, Variant*) */void VariantSetGet_Color_r::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 3) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 3;
   }

   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 8 );
   return;
}
/* VariantSetGet_Color_g::get(Variant const*, Variant*) */void VariantSetGet_Color_g::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 3) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 3;
   }

   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 0xc );
   return;
}
/* VariantSetGet_Color_b::get(Variant const*, Variant*) */void VariantSetGet_Color_b::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 3) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 3;
   }

   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 0x10 );
   return;
}
/* VariantSetGet_Color_a::get(Variant const*, Variant*) */void VariantSetGet_Color_a::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 3) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 3;
   }

   *(double*)( param_2 + 8 ) = (double)*(float*)( param_1 + 0x14 );
   return;
}
/* VariantSetGet_Vector2i_x::get(Variant const*, Variant*) */void VariantSetGet_Vector2i_x::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 2) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 2;
   }

   *(long*)( param_2 + 8 ) = (long)*(int*)( param_1 + 8 );
   return;
}
/* VariantSetGet_Vector2i_y::get(Variant const*, Variant*) */void VariantSetGet_Vector2i_y::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 2) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 2;
   }

   *(long*)( param_2 + 8 ) = (long)*(int*)( param_1 + 0xc );
   return;
}
/* VariantSetGet_Vector3i_x::get(Variant const*, Variant*) */void VariantSetGet_Vector3i_x::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 2) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 2;
   }

   *(long*)( param_2 + 8 ) = (long)*(int*)( param_1 + 8 );
   return;
}
/* VariantSetGet_Vector3i_y::get(Variant const*, Variant*) */void VariantSetGet_Vector3i_y::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 2) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 2;
   }

   *(long*)( param_2 + 8 ) = (long)*(int*)( param_1 + 0xc );
   return;
}
/* VariantSetGet_Vector3i_z::get(Variant const*, Variant*) */void VariantSetGet_Vector3i_z::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 2) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 2;
   }

   *(long*)( param_2 + 8 ) = (long)*(int*)( param_1 + 0x10 );
   return;
}
/* VariantSetGet_Vector4i_x::get(Variant const*, Variant*) */void VariantSetGet_Vector4i_x::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 2) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 2;
   }

   *(long*)( param_2 + 8 ) = (long)*(int*)( param_1 + 8 );
   return;
}
/* VariantSetGet_Vector4i_y::get(Variant const*, Variant*) */void VariantSetGet_Vector4i_y::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 2) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 2;
   }

   *(long*)( param_2 + 8 ) = (long)*(int*)( param_1 + 0xc );
   return;
}
/* VariantSetGet_Vector4i_z::get(Variant const*, Variant*) */void VariantSetGet_Vector4i_z::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 2) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 2;
   }

   *(long*)( param_2 + 8 ) = (long)*(int*)( param_1 + 0x10 );
   return;
}
/* VariantSetGet_Vector4i_w::get(Variant const*, Variant*) */void VariantSetGet_Vector4i_w::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 2) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 2;
   }

   *(long*)( param_2 + 8 ) = (long)*(int*)( param_1 + 0x14 );
   return;
}
/* VariantSetGet_Rect2_position::get(Variant const*, Variant*) */void VariantSetGet_Rect2_position::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 5) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 5;
   }

   *(undefined8*)( param_2 + 8 ) = *(undefined8*)( param_1 + 8 );
   return;
}
/* VariantSetGet_Rect2_size::get(Variant const*, Variant*) */void VariantSetGet_Rect2_size::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 5) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 5;
   }

   *(undefined8*)( param_2 + 8 ) = *(undefined8*)( param_1 + 0x10 );
   return;
}
/* VariantSetGet_Rect2_end::get(Variant const*, Variant*) */void VariantSetGet_Rect2_end::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 5) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 5;
   }

   *(ulong*)( param_2 + 8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( param_1 + 0x10 ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( param_1 + 8 ) >> 0x20 ), (float)*(undefined8*)( param_1 + 8 ) + (float)*(undefined8*)( param_1 + 0x10 ));
   return;
}
/* VariantSetGet_Transform2D_x::get(Variant const*, Variant*) */void VariantSetGet_Transform2D_x::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 5) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 5;
   }

   *(undefined8*)( param_2 + 8 ) = **(undefined8**)( param_1 + 8 );
   return;
}
/* VariantSetGet_Transform2D_y::get(Variant const*, Variant*) */void VariantSetGet_Transform2D_y::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 5) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 5;
   }

   *(undefined8*)( param_2 + 8 ) = *(undefined8*)( *(long*)( param_1 + 8 ) + 8 );
   return;
}
/* VariantSetGet_Transform2D_origin::get(Variant const*, Variant*) */void VariantSetGet_Transform2D_origin::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 5) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 5;
   }

   *(undefined8*)( param_2 + 8 ) = *(undefined8*)( *(long*)( param_1 + 8 ) + 0x10 );
   return;
}
/* VariantSetGet_Rect2i_position::get(Variant const*, Variant*) */void VariantSetGet_Rect2i_position::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 6) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 6;
   }

   *(undefined8*)( param_2 + 8 ) = *(undefined8*)( param_1 + 8 );
   return;
}
/* VariantSetGet_Rect2i_size::get(Variant const*, Variant*) */void VariantSetGet_Rect2i_size::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 6) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 6;
   }

   *(undefined8*)( param_2 + 8 ) = *(undefined8*)( param_1 + 0x10 );
   return;
}
/* VariantSetGet_AABB_position::get(Variant const*, Variant*) */void VariantSetGet_AABB_position::get(Variant *param_1, Variant *param_2) {
   undefined8 *puVar1;
   if (*(int*)param_2 != 9) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 9;
   }

   puVar1 = *(undefined8**)( param_1 + 8 );
   *(undefined8*)( param_2 + 8 ) = *puVar1;
   *(undefined4*)( param_2 + 0x10 ) = *(undefined4*)( puVar1 + 1 );
   return;
}
/* VariantSetGet_AABB_size::get(Variant const*, Variant*) */void VariantSetGet_AABB_size::get(Variant *param_1, Variant *param_2) {
   long lVar1;
   if (*(int*)param_2 != 9) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 9;
   }

   lVar1 = *(long*)( param_1 + 8 );
   *(undefined8*)( param_2 + 8 ) = *(undefined8*)( lVar1 + 0xc );
   *(undefined4*)( param_2 + 0x10 ) = *(undefined4*)( lVar1 + 0x14 );
   return;
}
/* VariantSetGet_AABB_end::get(Variant const*, Variant*) */void VariantSetGet_AABB_end::get(Variant *param_1, Variant *param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 *puVar3;
   if (*(int*)param_2 != 9) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 9;
   }

   puVar3 = *(undefined8**)( param_1 + 8 );
   uVar1 = *(undefined8*)( (long)puVar3 + 0xc );
   uVar2 = *puVar3;
   *(float*)( param_2 + 0x10 ) = *(float*)( (long)puVar3 + 0x14 ) + *(float*)( puVar3 + 1 );
   *(ulong*)( param_2 + 8 ) = CONCAT44((float)( (ulong)uVar1 >> 0x20 ) + (float)( (ulong)uVar2 >> 0x20 ), (float)uVar1 + (float)uVar2);
   return;
}
/* VariantSetGet_Plane_normal::get(Variant const*, Variant*) */void VariantSetGet_Plane_normal::get(Variant *param_1, Variant *param_2) {
   if (*(int*)param_2 != 9) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 9;
   }

   *(undefined8*)( param_2 + 8 ) = *(undefined8*)( param_1 + 8 );
   *(undefined4*)( param_2 + 0x10 ) = *(undefined4*)( param_1 + 0x10 );
   return;
}
/* VariantSetGet_Basis_x::get(Variant const*, Variant*) */void VariantSetGet_Basis_x::get(Variant *param_1, Variant *param_2) {
   undefined4 uVar1;
   undefined8 *puVar2;
   if (*(int*)param_2 != 9) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 9;
   }

   puVar2 = *(undefined8**)( param_1 + 8 );
   uVar1 = *(undefined4*)( puVar2 + 3 );
   *(ulong*)( param_2 + 8 ) = CONCAT44((int)( (ulong)puVar2[1] >> 0x20 ), (int)*puVar2);
   *(undefined4*)( param_2 + 0x10 ) = uVar1;
   return;
}
/* VariantSetGet_Basis_y::get(Variant const*, Variant*) */void VariantSetGet_Basis_y::get(Variant *param_1, Variant *param_2) {
   undefined4 uVar1;
   long lVar2;
   if (*(int*)param_2 != 9) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 9;
   }

   lVar2 = *(long*)( param_1 + 8 );
   uVar1 = *(undefined4*)( lVar2 + 0x1c );
   *(ulong*)( param_2 + 8 ) = CONCAT44((int)( ( ulong ) * (undefined8*)( lVar2 + 0xc ) >> 0x20 ), (int)*(undefined8*)( lVar2 + 4 ));
   *(undefined4*)( param_2 + 0x10 ) = uVar1;
   return;
}
/* VariantSetGet_Basis_z::get(Variant const*, Variant*) */void VariantSetGet_Basis_z::get(Variant *param_1, Variant *param_2) {
   undefined4 uVar1;
   long lVar2;
   if (*(int*)param_2 != 9) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 9;
   }

   lVar2 = *(long*)( param_1 + 8 );
   uVar1 = *(undefined4*)( lVar2 + 0x20 );
   *(ulong*)( param_2 + 8 ) = CONCAT44((int)( ( ulong ) * (undefined8*)( lVar2 + 0x10 ) >> 0x20 ), (int)*(undefined8*)( lVar2 + 8 ));
   *(undefined4*)( param_2 + 0x10 ) = uVar1;
   return;
}
/* VariantSetGet_Transform3D_origin::get(Variant const*, Variant*) */void VariantSetGet_Transform3D_origin::get(Variant *param_1, Variant *param_2) {
   long lVar1;
   if (*(int*)param_2 != 9) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 9;
   }

   lVar1 = *(long*)( param_1 + 8 );
   *(undefined8*)( param_2 + 8 ) = *(undefined8*)( lVar1 + 0x24 );
   *(undefined4*)( param_2 + 0x10 ) = *(undefined4*)( lVar1 + 0x2c );
   return;
}
/* VariantSetGet_Projection_x::get(Variant const*, Variant*) */void VariantSetGet_Projection_x::get(Variant *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (*(int*)param_2 != 0xc) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 0xc;
   }

   uVar1 = ( *(undefined8**)( param_1 + 8 ) )[1];
   *(undefined8*)( param_2 + 8 ) = **(undefined8**)( param_1 + 8 );
   *(undefined8*)( param_2 + 0x10 ) = uVar1;
   return;
}
/* VariantSetGet_Projection_y::get(Variant const*, Variant*) */void VariantSetGet_Projection_y::get(Variant *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (*(int*)param_2 != 0xc) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 0xc;
   }

   uVar1 = *(undefined8*)( *(long*)( param_1 + 8 ) + 0x18 );
   *(undefined8*)( param_2 + 8 ) = *(undefined8*)( *(long*)( param_1 + 8 ) + 0x10 );
   *(undefined8*)( param_2 + 0x10 ) = uVar1;
   return;
}
/* VariantSetGet_Projection_z::get(Variant const*, Variant*) */void VariantSetGet_Projection_z::get(Variant *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (*(int*)param_2 != 0xc) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 0xc;
   }

   uVar1 = *(undefined8*)( *(long*)( param_1 + 8 ) + 0x28 );
   *(undefined8*)( param_2 + 8 ) = *(undefined8*)( *(long*)( param_1 + 8 ) + 0x20 );
   *(undefined8*)( param_2 + 0x10 ) = uVar1;
   return;
}
/* VariantSetGet_Projection_w::get(Variant const*, Variant*) */void VariantSetGet_Projection_w::get(Variant *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (*(int*)param_2 != 0xc) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 0xc;
   }

   uVar1 = *(undefined8*)( *(long*)( param_1 + 8 ) + 0x38 );
   *(undefined8*)( param_2 + 8 ) = *(undefined8*)( *(long*)( param_1 + 8 ) + 0x30 );
   *(undefined8*)( param_2 + 0x10 ) = uVar1;
   return;
}
/* VariantSetGet_Rect2i_end::ptr_get(void const*, void*) */void VariantSetGet_Rect2i_end::ptr_get(void *param_1, void *param_2) {
   undefined8 uVar1;
   uVar1 = Vector2i::operator +((Vector2i*)param_1, (Vector2i*)( (long)param_1 + 8 ));
   *(undefined8*)param_2 = uVar1;
   return;
}
/* VariantSetGet_Rect2i_end::validated_get(Variant const*, Variant*) */void VariantSetGet_Rect2i_end::validated_get(Variant *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = Vector2i::operator +((Vector2i*)( param_1 + 8 ), (Vector2i*)( param_1 + 0x10 ));
   *(undefined8*)( param_2 + 8 ) = uVar1;
   return;
}
/* VariantSetGet_Rect2i_end::get(Variant const*, Variant*) */void VariantSetGet_Rect2i_end::get(Variant *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (*(int*)param_2 != 6) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 6;
   }

   uVar1 = Vector2i::operator +((Vector2i*)( param_1 + 8 ), (Vector2i*)( param_1 + 0x10 ));
   *(undefined8*)( param_2 + 8 ) = uVar1;
   return;
}
/* VariantSetGet_Rect2i_end::ptr_set(void*, void const*) */void VariantSetGet_Rect2i_end::ptr_set(void *param_1, void *param_2) {
   long in_FS_OFFSET;
   undefined8 local_28;
   undefined8 uStack_20;
   long local_10;
   /* WARNING: Load size is inaccurate */
   local_28 = *param_1;
   uStack_20 = *(undefined8*)( (long)param_1 + 8 );
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   uStack_20 = Vector2i::operator -((Vector2i*)param_2, (Vector2i*)&local_28);
   *(undefined8*)param_1 = local_28;
   *(undefined8*)( (long)param_1 + 8 ) = uStack_20;
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantSetGet_Rect2i_end::validated_set(Variant*, Variant const*) */void VariantSetGet_Rect2i_end::validated_set(Variant *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = Vector2i::operator -((Vector2i*)( param_2 + 8 ), (Vector2i*)( param_1 + 8 ));
   *(undefined8*)( param_1 + 0x10 ) = uVar1;
   return;
}
/* VariantSetGet_Projection_x::ptr_set(void*, void const*) */void VariantSetGet_Projection_x::ptr_set(void *param_1, void *param_2) {
   long in_FS_OFFSET;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   undefined8 uStack_40;
   undefined8 local_38;
   undefined8 uStack_30;
   undefined8 local_28;
   undefined8 uStack_20;
   long local_10;
   /* WARNING: Load size is inaccurate */
   local_98 = *param_2;
   uStack_90 = *(undefined8*)( (long)param_2 + 8 );
   local_88 = *(undefined8*)( (long)param_1 + 0x10 );
   uStack_80 = *(undefined8*)( (long)param_1 + 0x18 );
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = *(undefined8*)( (long)param_1 + 0x20 );
   uStack_70 = *(undefined8*)( (long)param_1 + 0x28 );
   local_68 = *(undefined8*)( (long)param_1 + 0x30 );
   uStack_60 = *(undefined8*)( (long)param_1 + 0x38 );
   *(undefined8*)param_1 = local_98;
   *(undefined8*)( (long)param_1 + 8 ) = uStack_90;
   local_58 = local_98;
   uStack_50 = uStack_90;
   local_48 = local_88;
   uStack_40 = uStack_80;
   local_38 = local_78;
   uStack_30 = uStack_70;
   local_28 = local_68;
   uStack_20 = uStack_60;
   Projection::~Projection((Projection*)&local_58);
   Projection::~Projection((Projection*)&local_98);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantSetGet_Projection_y::ptr_set(void*, void const*) */void VariantSetGet_Projection_y::ptr_set(void *param_1, void *param_2) {
   long in_FS_OFFSET;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   undefined8 uStack_40;
   undefined8 local_38;
   undefined8 uStack_30;
   undefined8 local_28;
   undefined8 uStack_20;
   long local_10;
   /* WARNING: Load size is inaccurate */
   local_88 = *param_2;
   uStack_80 = *(undefined8*)( (long)param_2 + 8 );
   /* WARNING: Load size is inaccurate */
   local_98 = *param_1;
   uStack_90 = *(undefined8*)( (long)param_1 + 8 );
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = *(undefined8*)( (long)param_1 + 0x20 );
   uStack_70 = *(undefined8*)( (long)param_1 + 0x28 );
   local_68 = *(undefined8*)( (long)param_1 + 0x30 );
   uStack_60 = *(undefined8*)( (long)param_1 + 0x38 );
   *(undefined8*)( (long)param_1 + 0x10 ) = local_88;
   *(undefined8*)( (long)param_1 + 0x18 ) = uStack_80;
   local_58 = local_98;
   uStack_50 = uStack_90;
   local_48 = local_88;
   uStack_40 = uStack_80;
   local_38 = local_78;
   uStack_30 = uStack_70;
   local_28 = local_68;
   uStack_20 = uStack_60;
   Projection::~Projection((Projection*)&local_58);
   Projection::~Projection((Projection*)&local_98);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantSetGet_Projection_z::ptr_set(void*, void const*) */void VariantSetGet_Projection_z::ptr_set(void *param_1, void *param_2) {
   long in_FS_OFFSET;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   undefined8 uStack_40;
   undefined8 local_38;
   undefined8 uStack_30;
   undefined8 local_28;
   undefined8 uStack_20;
   long local_10;
   /* WARNING: Load size is inaccurate */
   local_78 = *param_2;
   uStack_70 = *(undefined8*)( (long)param_2 + 8 );
   /* WARNING: Load size is inaccurate */
   local_98 = *param_1;
   uStack_90 = *(undefined8*)( (long)param_1 + 8 );
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88 = *(undefined8*)( (long)param_1 + 0x10 );
   uStack_80 = *(undefined8*)( (long)param_1 + 0x18 );
   local_68 = *(undefined8*)( (long)param_1 + 0x30 );
   uStack_60 = *(undefined8*)( (long)param_1 + 0x38 );
   *(undefined8*)( (long)param_1 + 0x20 ) = local_78;
   *(undefined8*)( (long)param_1 + 0x28 ) = uStack_70;
   local_58 = local_98;
   uStack_50 = uStack_90;
   local_48 = local_88;
   uStack_40 = uStack_80;
   local_38 = local_78;
   uStack_30 = uStack_70;
   local_28 = local_68;
   uStack_20 = uStack_60;
   Projection::~Projection((Projection*)&local_58);
   Projection::~Projection((Projection*)&local_98);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantSetGet_Projection_w::ptr_set(void*, void const*) */void VariantSetGet_Projection_w::ptr_set(void *param_1, void *param_2) {
   long in_FS_OFFSET;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   undefined8 uStack_40;
   undefined8 local_38;
   undefined8 uStack_30;
   undefined8 local_28;
   undefined8 uStack_20;
   long local_10;
   /* WARNING: Load size is inaccurate */
   local_68 = *param_2;
   uStack_60 = *(undefined8*)( (long)param_2 + 8 );
   /* WARNING: Load size is inaccurate */
   local_98 = *param_1;
   uStack_90 = *(undefined8*)( (long)param_1 + 8 );
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88 = *(undefined8*)( (long)param_1 + 0x10 );
   uStack_80 = *(undefined8*)( (long)param_1 + 0x18 );
   local_78 = *(undefined8*)( (long)param_1 + 0x20 );
   uStack_70 = *(undefined8*)( (long)param_1 + 0x28 );
   *(undefined8*)( (long)param_1 + 0x30 ) = local_68;
   *(undefined8*)( (long)param_1 + 0x38 ) = uStack_60;
   local_58 = local_98;
   uStack_50 = uStack_90;
   local_48 = local_88;
   uStack_40 = uStack_80;
   local_38 = local_78;
   uStack_30 = uStack_70;
   local_28 = local_68;
   uStack_20 = uStack_60;
   Projection::~Projection((Projection*)&local_58);
   Projection::~Projection((Projection*)&local_98);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantSetGet_Color_r8::ptr_get(void const*, void*) */void VariantSetGet_Color_r8::ptr_get(void *param_1, void *param_2) {
   undefined8 uVar1;
   float fVar2;
   /* WARNING: Load size is inaccurate */
   fVar2 = roundf(_LC0 * *param_1);
   uVar1 = 0;
   if (( 0.0 <= fVar2 ) && ( uVar1 = fVar2 <= _LC0 )) {
      *(long*)param_2 = (long)(int)fVar2;
      return;
   }

   *(undefined8*)param_2 = uVar1;
   return;
}
/* VariantSetGet_Color_g8::ptr_get(void const*, void*) */void VariantSetGet_Color_g8::ptr_get(void *param_1, void *param_2) {
   undefined8 uVar1;
   float fVar2;
   fVar2 = roundf(_LC0 * *(float*)( (long)param_1 + 4 ));
   uVar1 = 0;
   if (( 0.0 <= fVar2 ) && ( uVar1 = fVar2 <= _LC0 )) {
      *(long*)param_2 = (long)(int)fVar2;
      return;
   }

   *(undefined8*)param_2 = uVar1;
   return;
}
/* VariantSetGet_Color_b8::ptr_get(void const*, void*) */void VariantSetGet_Color_b8::ptr_get(void *param_1, void *param_2) {
   undefined8 uVar1;
   float fVar2;
   fVar2 = roundf(_LC0 * *(float*)( (long)param_1 + 8 ));
   uVar1 = 0;
   if (( 0.0 <= fVar2 ) && ( uVar1 = fVar2 <= _LC0 )) {
      *(long*)param_2 = (long)(int)fVar2;
      return;
   }

   *(undefined8*)param_2 = uVar1;
   return;
}
/* VariantSetGet_Color_a8::ptr_get(void const*, void*) */void VariantSetGet_Color_a8::ptr_get(void *param_1, void *param_2) {
   undefined8 uVar1;
   float fVar2;
   fVar2 = roundf(_LC0 * *(float*)( (long)param_1 + 0xc ));
   uVar1 = 0;
   if (( 0.0 <= fVar2 ) && ( uVar1 = fVar2 <= _LC0 )) {
      *(long*)param_2 = (long)(int)fVar2;
      return;
   }

   *(undefined8*)param_2 = uVar1;
   return;
}
/* VariantSetGet_Color_r8::validated_get(Variant const*, Variant*) */void VariantSetGet_Color_r8::validated_get(Variant *param_1, Variant *param_2) {
   undefined8 uVar1;
   float fVar2;
   fVar2 = roundf(_LC0 * *(float*)( param_1 + 8 ));
   uVar1 = 0;
   if (( 0.0 <= fVar2 ) && ( uVar1 = fVar2 <= _LC0 )) {
      *(long*)( param_2 + 8 ) = (long)(int)fVar2;
      return;
   }

   *(undefined8*)( param_2 + 8 ) = uVar1;
   return;
}
/* VariantSetGet_Color_g8::validated_get(Variant const*, Variant*) */void VariantSetGet_Color_g8::validated_get(Variant *param_1, Variant *param_2) {
   undefined8 uVar1;
   float fVar2;
   fVar2 = roundf(_LC0 * *(float*)( param_1 + 0xc ));
   uVar1 = 0;
   if (( 0.0 <= fVar2 ) && ( uVar1 = fVar2 <= _LC0 )) {
      *(long*)( param_2 + 8 ) = (long)(int)fVar2;
      return;
   }

   *(undefined8*)( param_2 + 8 ) = uVar1;
   return;
}
/* VariantSetGet_Color_b8::validated_get(Variant const*, Variant*) */void VariantSetGet_Color_b8::validated_get(Variant *param_1, Variant *param_2) {
   undefined8 uVar1;
   float fVar2;
   fVar2 = roundf(_LC0 * *(float*)( param_1 + 0x10 ));
   uVar1 = 0;
   if (( 0.0 <= fVar2 ) && ( uVar1 = fVar2 <= _LC0 )) {
      *(long*)( param_2 + 8 ) = (long)(int)fVar2;
      return;
   }

   *(undefined8*)( param_2 + 8 ) = uVar1;
   return;
}
/* VariantSetGet_Color_a8::validated_get(Variant const*, Variant*) */void VariantSetGet_Color_a8::validated_get(Variant *param_1, Variant *param_2) {
   undefined8 uVar1;
   float fVar2;
   fVar2 = roundf(_LC0 * *(float*)( param_1 + 0x14 ));
   uVar1 = 0;
   if (( 0.0 <= fVar2 ) && ( uVar1 = fVar2 <= _LC0 )) {
      *(long*)( param_2 + 8 ) = (long)(int)fVar2;
      return;
   }

   *(undefined8*)( param_2 + 8 ) = uVar1;
   return;
}
/* VariantSetGet_Color_r8::get(Variant const*, Variant*) */void VariantSetGet_Color_r8::get(Variant *param_1, Variant *param_2) {
   undefined8 uVar1;
   float fVar2;
   if (*(int*)param_2 != 2) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 2;
   }

   fVar2 = roundf(_LC0 * *(float*)( param_1 + 8 ));
   uVar1 = 0;
   if (( 0.0 <= fVar2 ) && ( uVar1 = fVar2 <= _LC0 )) {
      *(long*)( param_2 + 8 ) = (long)(int)fVar2;
      return;
   }

   *(undefined8*)( param_2 + 8 ) = uVar1;
   return;
}
/* VariantSetGet_Color_g8::get(Variant const*, Variant*) */void VariantSetGet_Color_g8::get(Variant *param_1, Variant *param_2) {
   undefined8 uVar1;
   float fVar2;
   if (*(int*)param_2 != 2) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 2;
   }

   fVar2 = roundf(_LC0 * *(float*)( param_1 + 0xc ));
   uVar1 = 0;
   if (( 0.0 <= fVar2 ) && ( uVar1 = fVar2 <= _LC0 )) {
      *(long*)( param_2 + 8 ) = (long)(int)fVar2;
      return;
   }

   *(undefined8*)( param_2 + 8 ) = uVar1;
   return;
}
/* VariantSetGet_Color_b8::get(Variant const*, Variant*) */void VariantSetGet_Color_b8::get(Variant *param_1, Variant *param_2) {
   undefined8 uVar1;
   float fVar2;
   if (*(int*)param_2 != 2) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 2;
   }

   fVar2 = roundf(_LC0 * *(float*)( param_1 + 0x10 ));
   uVar1 = 0;
   if (( 0.0 <= fVar2 ) && ( uVar1 = fVar2 <= _LC0 )) {
      *(long*)( param_2 + 8 ) = (long)(int)fVar2;
      return;
   }

   *(undefined8*)( param_2 + 8 ) = uVar1;
   return;
}
/* VariantSetGet_Color_a8::get(Variant const*, Variant*) */void VariantSetGet_Color_a8::get(Variant *param_1, Variant *param_2) {
   undefined8 uVar1;
   float fVar2;
   if (*(int*)param_2 != 2) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 2;
   }

   fVar2 = roundf(_LC0 * *(float*)( param_1 + 0x14 ));
   uVar1 = 0;
   if (( 0.0 <= fVar2 ) && ( uVar1 = fVar2 <= _LC0 )) {
      *(long*)( param_2 + 8 ) = (long)(int)fVar2;
      return;
   }

   *(undefined8*)( param_2 + 8 ) = uVar1;
   return;
}
/* VariantSetGet_Color_h::ptr_get(void const*, void*) */void VariantSetGet_Color_h::ptr_get(void *param_1, void *param_2) {
   float fVar1;
   fVar1 = (float)Color::get_h();
   *(double*)param_2 = (double)fVar1;
   return;
}
/* VariantSetGet_Color_h::validated_get(Variant const*, Variant*) */void VariantSetGet_Color_h::validated_get(Variant *param_1, Variant *param_2) {
   float fVar1;
   fVar1 = (float)Color::get_h();
   *(double*)( param_2 + 8 ) = (double)fVar1;
   return;
}
/* VariantSetGet_Color_h::get(Variant const*, Variant*) */void VariantSetGet_Color_h::get(Variant *param_1, Variant *param_2) {
   float fVar1;
   if (*(int*)param_2 != 3) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 3;
   }

   fVar1 = (float)Color::get_h();
   *(double*)( param_2 + 8 ) = (double)fVar1;
   return;
}
/* VariantSetGet_Color_v::ptr_get(void const*, void*) */void VariantSetGet_Color_v::ptr_get(void *param_1, void *param_2) {
   float fVar1;
   fVar1 = (float)Color::get_v();
   *(double*)param_2 = (double)fVar1;
   return;
}
/* VariantSetGet_Color_v::validated_get(Variant const*, Variant*) */void VariantSetGet_Color_v::validated_get(Variant *param_1, Variant *param_2) {
   float fVar1;
   fVar1 = (float)Color::get_v();
   *(double*)( param_2 + 8 ) = (double)fVar1;
   return;
}
/* VariantSetGet_Color_v::get(Variant const*, Variant*) */void VariantSetGet_Color_v::get(Variant *param_1, Variant *param_2) {
   float fVar1;
   if (*(int*)param_2 != 3) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 3;
   }

   fVar1 = (float)Color::get_v();
   *(double*)( param_2 + 8 ) = (double)fVar1;
   return;
}
/* VariantSetGet_Color_s::ptr_get(void const*, void*) */void VariantSetGet_Color_s::ptr_get(void *param_1, void *param_2) {
   float fVar1;
   fVar1 = (float)Color::get_s();
   *(double*)param_2 = (double)fVar1;
   return;
}
/* VariantSetGet_Color_s::validated_get(Variant const*, Variant*) */void VariantSetGet_Color_s::validated_get(Variant *param_1, Variant *param_2) {
   float fVar1;
   fVar1 = (float)Color::get_s();
   *(double*)( param_2 + 8 ) = (double)fVar1;
   return;
}
/* VariantSetGet_Color_s::get(Variant const*, Variant*) */void VariantSetGet_Color_s::get(Variant *param_1, Variant *param_2) {
   float fVar1;
   if (*(int*)param_2 != 3) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 3;
   }

   fVar1 = (float)Color::get_s();
   *(double*)( param_2 + 8 ) = (double)fVar1;
   return;
}
/* VariantSetGet_Color_h::ptr_set(void*, void const*) */void VariantSetGet_Color_h::ptr_set(void *param_1, void *param_2) {
   double dVar1;
   long lVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   float fVar5;
   float fVar6;
   undefined4 uStack_2c;
   /* WARNING: Load size is inaccurate */
   uVar3 = *param_1;
   uVar4 = *(undefined8*)( (long)param_1 + 8 );
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   /* WARNING: Load size is inaccurate */
   dVar1 = *param_2;
   uStack_2c = (float)( (ulong)uVar4 >> 0x20 );
   fVar5 = (float)Color::get_v();
   fVar6 = (float)Color::get_s();
   Color::set_hsv((float)dVar1, fVar6, fVar5, uStack_2c);
   *(undefined8*)param_1 = uVar3;
   *(undefined8*)( (long)param_1 + 8 ) = uVar4;
   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantSetGet_Color_s::ptr_set(void*, void const*) */void VariantSetGet_Color_s::ptr_set(void *param_1, void *param_2) {
   double dVar1;
   long lVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   float fVar5;
   float fVar6;
   undefined4 uStack_2c;
   /* WARNING: Load size is inaccurate */
   uVar3 = *param_1;
   uVar4 = *(undefined8*)( (long)param_1 + 8 );
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   /* WARNING: Load size is inaccurate */
   dVar1 = *param_2;
   uStack_2c = (float)( (ulong)uVar4 >> 0x20 );
   fVar5 = (float)Color::get_v();
   fVar6 = (float)Color::get_h();
   Color::set_hsv(fVar6, (float)dVar1, fVar5, uStack_2c);
   *(undefined8*)param_1 = uVar3;
   *(undefined8*)( (long)param_1 + 8 ) = uVar4;
   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantSetGet_Color_v::ptr_set(void*, void const*) */void VariantSetGet_Color_v::ptr_set(void *param_1, void *param_2) {
   double dVar1;
   long lVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   float fVar5;
   float fVar6;
   undefined4 uStack_2c;
   /* WARNING: Load size is inaccurate */
   uVar3 = *param_1;
   uVar4 = *(undefined8*)( (long)param_1 + 8 );
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   /* WARNING: Load size is inaccurate */
   dVar1 = *param_2;
   uStack_2c = (float)( (ulong)uVar4 >> 0x20 );
   fVar5 = (float)Color::get_s();
   fVar6 = (float)Color::get_h();
   Color::set_hsv(fVar6, fVar5, (float)dVar1, uStack_2c);
   *(undefined8*)param_1 = uVar3;
   *(undefined8*)( (long)param_1 + 8 ) = uVar4;
   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantSetGet_Color_h::validated_set(Variant*, Variant const*) */void VariantSetGet_Color_h::validated_set(Variant *param_1, Variant *param_2) {
   float fVar1;
   double dVar2;
   float fVar3;
   float fVar4;
   fVar1 = *(float*)( param_1 + 0x14 );
   dVar2 = *(double*)( param_2 + 8 );
   fVar3 = (float)Color::get_v();
   fVar4 = (float)Color::get_s();
   Color::set_hsv((float)dVar2, fVar4, fVar3, fVar1);
   return;
}
/* VariantSetGet_Color_s::validated_set(Variant*, Variant const*) */void VariantSetGet_Color_s::validated_set(Variant *param_1, Variant *param_2) {
   float fVar1;
   double dVar2;
   float fVar3;
   float fVar4;
   fVar1 = *(float*)( param_1 + 0x14 );
   dVar2 = *(double*)( param_2 + 8 );
   fVar3 = (float)Color::get_v();
   fVar4 = (float)Color::get_h();
   Color::set_hsv(fVar4, (float)dVar2, fVar3, fVar1);
   return;
}
/* VariantSetGet_Color_v::validated_set(Variant*, Variant const*) */void VariantSetGet_Color_v::validated_set(Variant *param_1, Variant *param_2) {
   float fVar1;
   double dVar2;
   float fVar3;
   float fVar4;
   fVar1 = *(float*)( param_1 + 0x14 );
   dVar2 = *(double*)( param_2 + 8 );
   fVar3 = (float)Color::get_s();
   fVar4 = (float)Color::get_h();
   Color::set_hsv(fVar4, fVar3, (float)dVar2, fVar1);
   return;
}
/* VariantSetGet_Color_ok_hsl_h::ptr_get(void const*, void*) */void VariantSetGet_Color_ok_hsl_h::ptr_get(void *param_1, void *param_2) {
   float fVar1;
   fVar1 = (float)Color::get_ok_hsl_h();
   *(double*)param_2 = (double)fVar1;
   return;
}
/* VariantSetGet_Color_ok_hsl_h::validated_get(Variant const*, Variant*) */void VariantSetGet_Color_ok_hsl_h::validated_get(Variant *param_1, Variant *param_2) {
   float fVar1;
   fVar1 = (float)Color::get_ok_hsl_h();
   *(double*)( param_2 + 8 ) = (double)fVar1;
   return;
}
/* VariantSetGet_Color_ok_hsl_h::get(Variant const*, Variant*) */void VariantSetGet_Color_ok_hsl_h::get(Variant *param_1, Variant *param_2) {
   float fVar1;
   if (*(int*)param_2 != 3) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 3;
   }

   fVar1 = (float)Color::get_ok_hsl_h();
   *(double*)( param_2 + 8 ) = (double)fVar1;
   return;
}
/* VariantSetGet_Color_ok_hsl_l::ptr_get(void const*, void*) */void VariantSetGet_Color_ok_hsl_l::ptr_get(void *param_1, void *param_2) {
   float fVar1;
   fVar1 = (float)Color::get_ok_hsl_l();
   *(double*)param_2 = (double)fVar1;
   return;
}
/* VariantSetGet_Color_ok_hsl_l::validated_get(Variant const*, Variant*) */void VariantSetGet_Color_ok_hsl_l::validated_get(Variant *param_1, Variant *param_2) {
   float fVar1;
   fVar1 = (float)Color::get_ok_hsl_l();
   *(double*)( param_2 + 8 ) = (double)fVar1;
   return;
}
/* VariantSetGet_Color_ok_hsl_l::get(Variant const*, Variant*) */void VariantSetGet_Color_ok_hsl_l::get(Variant *param_1, Variant *param_2) {
   float fVar1;
   if (*(int*)param_2 != 3) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 3;
   }

   fVar1 = (float)Color::get_ok_hsl_l();
   *(double*)( param_2 + 8 ) = (double)fVar1;
   return;
}
/* VariantSetGet_Color_ok_hsl_s::ptr_get(void const*, void*) */void VariantSetGet_Color_ok_hsl_s::ptr_get(void *param_1, void *param_2) {
   float fVar1;
   fVar1 = (float)Color::get_ok_hsl_s();
   *(double*)param_2 = (double)fVar1;
   return;
}
/* VariantSetGet_Color_ok_hsl_s::validated_get(Variant const*, Variant*) */void VariantSetGet_Color_ok_hsl_s::validated_get(Variant *param_1, Variant *param_2) {
   float fVar1;
   fVar1 = (float)Color::get_ok_hsl_s();
   *(double*)( param_2 + 8 ) = (double)fVar1;
   return;
}
/* VariantSetGet_Color_ok_hsl_s::get(Variant const*, Variant*) */void VariantSetGet_Color_ok_hsl_s::get(Variant *param_1, Variant *param_2) {
   float fVar1;
   if (*(int*)param_2 != 3) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 3;
   }

   fVar1 = (float)Color::get_ok_hsl_s();
   *(double*)( param_2 + 8 ) = (double)fVar1;
   return;
}
/* VariantSetGet_Color_ok_hsl_h::ptr_set(void*, void const*) */void VariantSetGet_Color_ok_hsl_h::ptr_set(void *param_1, void *param_2) {
   double dVar1;
   long lVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   float fVar5;
   float fVar6;
   undefined4 uStack_2c;
   /* WARNING: Load size is inaccurate */
   uVar3 = *param_1;
   uVar4 = *(undefined8*)( (long)param_1 + 8 );
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   /* WARNING: Load size is inaccurate */
   dVar1 = *param_2;
   uStack_2c = (float)( (ulong)uVar4 >> 0x20 );
   fVar5 = (float)Color::get_ok_hsl_l();
   fVar6 = (float)Color::get_ok_hsl_s();
   Color::set_ok_hsl((float)dVar1, fVar6, fVar5, uStack_2c);
   *(undefined8*)param_1 = uVar3;
   *(undefined8*)( (long)param_1 + 8 ) = uVar4;
   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantSetGet_Color_ok_hsl_s::ptr_set(void*, void const*) */void VariantSetGet_Color_ok_hsl_s::ptr_set(void *param_1, void *param_2) {
   double dVar1;
   long lVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   float fVar5;
   float fVar6;
   undefined4 uStack_2c;
   /* WARNING: Load size is inaccurate */
   uVar3 = *param_1;
   uVar4 = *(undefined8*)( (long)param_1 + 8 );
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   /* WARNING: Load size is inaccurate */
   dVar1 = *param_2;
   uStack_2c = (float)( (ulong)uVar4 >> 0x20 );
   fVar5 = (float)Color::get_ok_hsl_l();
   fVar6 = (float)Color::get_ok_hsl_h();
   Color::set_ok_hsl(fVar6, (float)dVar1, fVar5, uStack_2c);
   *(undefined8*)param_1 = uVar3;
   *(undefined8*)( (long)param_1 + 8 ) = uVar4;
   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantSetGet_Color_ok_hsl_l::ptr_set(void*, void const*) */void VariantSetGet_Color_ok_hsl_l::ptr_set(void *param_1, void *param_2) {
   double dVar1;
   long lVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   float fVar5;
   float fVar6;
   undefined4 uStack_2c;
   /* WARNING: Load size is inaccurate */
   uVar3 = *param_1;
   uVar4 = *(undefined8*)( (long)param_1 + 8 );
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   /* WARNING: Load size is inaccurate */
   dVar1 = *param_2;
   uStack_2c = (float)( (ulong)uVar4 >> 0x20 );
   fVar5 = (float)Color::get_ok_hsl_s();
   fVar6 = (float)Color::get_ok_hsl_h();
   Color::set_ok_hsl(fVar6, fVar5, (float)dVar1, uStack_2c);
   *(undefined8*)param_1 = uVar3;
   *(undefined8*)( (long)param_1 + 8 ) = uVar4;
   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantSetGet_Color_ok_hsl_h::validated_set(Variant*, Variant const*) */void VariantSetGet_Color_ok_hsl_h::validated_set(Variant *param_1, Variant *param_2) {
   float fVar1;
   double dVar2;
   float fVar3;
   float fVar4;
   fVar1 = *(float*)( param_1 + 0x14 );
   dVar2 = *(double*)( param_2 + 8 );
   fVar3 = (float)Color::get_ok_hsl_l();
   fVar4 = (float)Color::get_ok_hsl_s();
   Color::set_ok_hsl((float)dVar2, fVar4, fVar3, fVar1);
   return;
}
/* VariantSetGet_Color_ok_hsl_s::validated_set(Variant*, Variant const*) */void VariantSetGet_Color_ok_hsl_s::validated_set(Variant *param_1, Variant *param_2) {
   float fVar1;
   double dVar2;
   float fVar3;
   float fVar4;
   fVar1 = *(float*)( param_1 + 0x14 );
   dVar2 = *(double*)( param_2 + 8 );
   fVar3 = (float)Color::get_ok_hsl_l();
   fVar4 = (float)Color::get_ok_hsl_h();
   Color::set_ok_hsl(fVar4, (float)dVar2, fVar3, fVar1);
   return;
}
/* VariantSetGet_Color_ok_hsl_l::validated_set(Variant*, Variant const*) */void VariantSetGet_Color_ok_hsl_l::validated_set(Variant *param_1, Variant *param_2) {
   float fVar1;
   double dVar2;
   float fVar3;
   float fVar4;
   fVar1 = *(float*)( param_1 + 0x14 );
   dVar2 = *(double*)( param_2 + 8 );
   fVar3 = (float)Color::get_ok_hsl_s();
   fVar4 = (float)Color::get_ok_hsl_h();
   Color::set_ok_hsl(fVar4, fVar3, (float)dVar2, fVar1);
   return;
}
/* VariantIndexedSetGet_PackedVector3Array::ptr_get(void const*, long, void*) */void VariantIndexedSetGet_PackedVector3Array::ptr_get(void *param_1, long param_2, void *param_3) {
   undefined8 *puVar1;
   long lVar2;
   long lVar3;
   lVar2 = *(long*)( (long)param_1 + 8 );
   if (param_2 < 0) {
      if (lVar2 != 0) {
         lVar3 = *(long*)( lVar2 + -8 );
         param_2 = param_2 + lVar3;
         if (param_2 < 0) goto LAB_00115dde;
         LAB_00115dbb:puVar1 = (undefined8*)( lVar2 + param_2 * 0xc );
         *(undefined8*)param_3 = *puVar1;
         *(undefined4*)( (long)param_3 + 8 ) = *(undefined4*)( puVar1 + 1 );
         return;
      }

   }
 else if (lVar2 != 0) {
      lVar3 = *(long*)( lVar2 + -8 );
      if (param_2 < lVar3) goto LAB_00115dbb;
      goto LAB_00115dde;
   }

   lVar3 = 0;
   LAB_00115dde:_err_print_index_error("ptr_get", "core/variant/variant_setget.cpp", 0x362, param_2, lVar3, "index", "v.size()", "", false, false);
   return;
}
/* VariantIndexedSetGet_PackedVector3Array::get(Variant const*, long, Variant*, bool*) */void VariantIndexedSetGet_PackedVector3Array::get(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   undefined8 *puVar1;
   code *pcVar2;
   long lVar3;
   bool bVar4;
   long lVar5;
   lVar3 = *(long*)( *(long*)( param_1 + 8 ) + 0x18 );
   if (lVar3 == 0) {
      bVar4 = true;
   }
 else {
      if (param_2 < 0) {
         param_2 = param_2 + *(long*)( lVar3 + -8 );
      }

      bVar4 = (bool)( *(long*)( lVar3 + -8 ) <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
      if (bVar4 == false) {
         if (*(int*)param_3 != 9) {
            if (::Variant::needs_deinit[*(int*)param_3] != '\0') {
               ::Variant::_clear_internal();
            }

            *(undefined4*)param_3 = 9;
            lVar3 = *(long*)( *(long*)( param_1 + 8 ) + 0x18 );
            if (lVar3 == 0) {
               lVar5 = 0;
               LAB_00115f0b:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, param_2, lVar5, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            lVar5 = *(long*)( lVar3 + -8 );
            if (lVar5 <= param_2) goto LAB_00115f0b;
         }

         puVar1 = (undefined8*)( lVar3 + param_2 * 0xc );
         *(undefined8*)( param_3 + 8 ) = *puVar1;
         *(undefined4*)( param_3 + 0x10 ) = *(undefined4*)( puVar1 + 1 );
      }

   }

   *param_4 = bVar4;
   return;
}
/* VariantIndexedSetGet_PackedVector2Array::ptr_get(void const*, long, void*) */void VariantIndexedSetGet_PackedVector2Array::ptr_get(void *param_1, long param_2, void *param_3) {
   long lVar1;
   long lVar2;
   lVar1 = *(long*)( (long)param_1 + 8 );
   if (param_2 < 0) {
      if (lVar1 != 0) {
         lVar2 = *(long*)( lVar1 + -8 );
         param_2 = param_2 + lVar2;
         if (param_2 < 0) goto LAB_00115fb6;
         LAB_00115f9b:*(undefined8*)param_3 = *(undefined8*)( lVar1 + param_2 * 8 );
         return;
      }

   }
 else if (lVar1 != 0) {
      lVar2 = *(long*)( lVar1 + -8 );
      if (param_2 < lVar2) goto LAB_00115f9b;
      goto LAB_00115fb6;
   }

   lVar2 = 0;
   LAB_00115fb6:_err_print_index_error("ptr_get", "core/variant/variant_setget.cpp", 0x361, param_2, lVar2, "index", "v.size()", "", false, false);
   return;
}
/* VariantIndexedSetGet_PackedVector2Array::get(Variant const*, long, Variant*, bool*) */void VariantIndexedSetGet_PackedVector2Array::get(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   code *pcVar1;
   long lVar2;
   bool bVar3;
   long lVar4;
   lVar2 = *(long*)( *(long*)( param_1 + 8 ) + 0x18 );
   if (lVar2 == 0) {
      bVar3 = true;
   }
 else {
      if (param_2 < 0) {
         param_2 = param_2 + *(long*)( lVar2 + -8 );
      }

      bVar3 = (bool)( *(long*)( lVar2 + -8 ) <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
      if (bVar3 == false) {
         if (*(int*)param_3 != 5) {
            if (::Variant::needs_deinit[*(int*)param_3] != '\0') {
               ::Variant::_clear_internal();
            }

            *(undefined4*)param_3 = 5;
            lVar2 = *(long*)( *(long*)( param_1 + 8 ) + 0x18 );
            if (lVar2 == 0) {
               lVar4 = 0;
               LAB_0011609b:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, param_2, lVar4, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar1 = (code*)invalidInstructionException();
               ( *pcVar1 )();
            }

            lVar4 = *(long*)( lVar2 + -8 );
            if (lVar4 <= param_2) goto LAB_0011609b;
         }

         *(undefined8*)( param_3 + 8 ) = *(undefined8*)( lVar2 + param_2 * 8 );
      }

   }

   *param_4 = bVar3;
   return;
}
/* VariantIndexedSetGet_PackedInt32Array::ptr_get(void const*, long, void*) */void VariantIndexedSetGet_PackedInt32Array::ptr_get(void *param_1, long param_2, void *param_3) {
   long lVar1;
   long lVar2;
   lVar1 = *(long*)( (long)param_1 + 8 );
   if (param_2 < 0) {
      if (lVar1 != 0) {
         lVar2 = *(long*)( lVar1 + -8 );
         param_2 = param_2 + lVar2;
         if (param_2 < 0) goto LAB_00116146;
         LAB_0011612b:*(long*)param_3 = (long)*(int*)( lVar1 + param_2 * 4 );
         return;
      }

   }
 else if (lVar1 != 0) {
      lVar2 = *(long*)( lVar1 + -8 );
      if (param_2 < lVar2) goto LAB_0011612b;
      goto LAB_00116146;
   }

   lVar2 = 0;
   LAB_00116146:_err_print_index_error("ptr_get", "core/variant/variant_setget.cpp", 0x35d, param_2, lVar2, "index", "v.size()", "", false, false);
   return;
}
/* VariantIndexedSetGet_PackedInt32Array::get(Variant const*, long, Variant*, bool*) */void VariantIndexedSetGet_PackedInt32Array::get(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   code *pcVar1;
   long lVar2;
   bool bVar3;
   long lVar4;
   lVar2 = *(long*)( *(long*)( param_1 + 8 ) + 0x18 );
   if (lVar2 == 0) {
      bVar3 = true;
   }
 else {
      if (param_2 < 0) {
         param_2 = param_2 + *(long*)( lVar2 + -8 );
      }

      bVar3 = (bool)( *(long*)( lVar2 + -8 ) <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
      if (bVar3 == false) {
         if (*(int*)param_3 != 2) {
            if (::Variant::needs_deinit[*(int*)param_3] != '\0') {
               ::Variant::_clear_internal();
            }

            *(undefined4*)param_3 = 2;
            lVar2 = *(long*)( *(long*)( param_1 + 8 ) + 0x18 );
            if (lVar2 == 0) {
               lVar4 = 0;
               LAB_0011622b:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, param_2, lVar4, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar1 = (code*)invalidInstructionException();
               ( *pcVar1 )();
            }

            lVar4 = *(long*)( lVar2 + -8 );
            if (lVar4 <= param_2) goto LAB_0011622b;
         }

         *(long*)( param_3 + 8 ) = (long)*(int*)( lVar2 + param_2 * 4 );
      }

   }

   *param_4 = bVar3;
   return;
}
/* VariantIndexedSetGet_PackedByteArray::ptr_get(void const*, long, void*) */void VariantIndexedSetGet_PackedByteArray::ptr_get(void *param_1, long param_2, void *param_3) {
   long lVar1;
   long lVar2;
   lVar1 = *(long*)( (long)param_1 + 8 );
   if (param_2 < 0) {
      if (lVar1 != 0) {
         lVar2 = *(long*)( lVar1 + -8 );
         param_2 = param_2 + lVar2;
         if (param_2 < 0) goto LAB_001162d6;
         LAB_001162bb:*(ulong*)param_3 = ( ulong ) * (byte*)( lVar1 + param_2 );
         return;
      }

   }
 else if (lVar1 != 0) {
      lVar2 = *(long*)( lVar1 + -8 );
      if (param_2 < lVar2) goto LAB_001162bb;
      goto LAB_001162d6;
   }

   lVar2 = 0;
   LAB_001162d6:_err_print_index_error("ptr_get", "core/variant/variant_setget.cpp", 0x35c, param_2, lVar2, "index", "v.size()", "", false, false);
   return;
}
/* VariantIndexedSetGet_PackedByteArray::get(Variant const*, long, Variant*, bool*) */void VariantIndexedSetGet_PackedByteArray::get(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   code *pcVar1;
   long lVar2;
   bool bVar3;
   long lVar4;
   lVar2 = *(long*)( *(long*)( param_1 + 8 ) + 0x18 );
   if (lVar2 == 0) {
      bVar3 = true;
   }
 else {
      if (param_2 < 0) {
         param_2 = param_2 + *(long*)( lVar2 + -8 );
      }

      bVar3 = (bool)( *(long*)( lVar2 + -8 ) <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
      if (bVar3 == false) {
         if (*(int*)param_3 != 2) {
            if (::Variant::needs_deinit[*(int*)param_3] != '\0') {
               ::Variant::_clear_internal();
            }

            *(undefined4*)param_3 = 2;
            lVar2 = *(long*)( *(long*)( param_1 + 8 ) + 0x18 );
            if (lVar2 == 0) {
               lVar4 = 0;
               LAB_001163bb:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, param_2, lVar4, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar1 = (code*)invalidInstructionException();
               ( *pcVar1 )();
            }

            lVar4 = *(long*)( lVar2 + -8 );
            if (lVar4 <= param_2) goto LAB_001163bb;
         }

         *(ulong*)( param_3 + 8 ) = ( ulong ) * (byte*)( lVar2 + param_2 );
      }

   }

   *param_4 = bVar3;
   return;
}
/* VariantIndexedSetGet_PackedInt64Array::ptr_get(void const*, long, void*) */void VariantIndexedSetGet_PackedInt64Array::ptr_get(void *param_1, long param_2, void *param_3) {
   long lVar1;
   long lVar2;
   lVar1 = *(long*)( (long)param_1 + 8 );
   if (param_2 < 0) {
      if (lVar1 != 0) {
         lVar2 = *(long*)( lVar1 + -8 );
         param_2 = param_2 + lVar2;
         if (param_2 < 0) goto LAB_00116466;
         LAB_0011644b:*(undefined8*)param_3 = *(undefined8*)( lVar1 + param_2 * 8 );
         return;
      }

   }
 else if (lVar1 != 0) {
      lVar2 = *(long*)( lVar1 + -8 );
      if (param_2 < lVar2) goto LAB_0011644b;
      goto LAB_00116466;
   }

   lVar2 = 0;
   LAB_00116466:_err_print_index_error("ptr_get", "core/variant/variant_setget.cpp", 0x35e, param_2, lVar2, "index", "v.size()", "", false, false);
   return;
}
/* VariantIndexedSetGet_PackedInt64Array::get(Variant const*, long, Variant*, bool*) */void VariantIndexedSetGet_PackedInt64Array::get(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   code *pcVar1;
   long lVar2;
   bool bVar3;
   long lVar4;
   lVar2 = *(long*)( *(long*)( param_1 + 8 ) + 0x18 );
   if (lVar2 == 0) {
      bVar3 = true;
   }
 else {
      if (param_2 < 0) {
         param_2 = param_2 + *(long*)( lVar2 + -8 );
      }

      bVar3 = (bool)( *(long*)( lVar2 + -8 ) <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
      if (bVar3 == false) {
         if (*(int*)param_3 != 2) {
            if (::Variant::needs_deinit[*(int*)param_3] != '\0') {
               ::Variant::_clear_internal();
            }

            *(undefined4*)param_3 = 2;
            lVar2 = *(long*)( *(long*)( param_1 + 8 ) + 0x18 );
            if (lVar2 == 0) {
               lVar4 = 0;
               LAB_0011654b:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, param_2, lVar4, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar1 = (code*)invalidInstructionException();
               ( *pcVar1 )();
            }

            lVar4 = *(long*)( lVar2 + -8 );
            if (lVar4 <= param_2) goto LAB_0011654b;
         }

         *(undefined8*)( param_3 + 8 ) = *(undefined8*)( lVar2 + param_2 * 8 );
      }

   }

   *param_4 = bVar3;
   return;
}
/* VariantIndexedSetGet_PackedFloat32Array::ptr_get(void const*, long, void*) */void VariantIndexedSetGet_PackedFloat32Array::ptr_get(void *param_1, long param_2, void *param_3) {
   long lVar1;
   long lVar2;
   lVar1 = *(long*)( (long)param_1 + 8 );
   if (param_2 < 0) {
      if (lVar1 != 0) {
         lVar2 = *(long*)( lVar1 + -8 );
         param_2 = param_2 + lVar2;
         if (param_2 < 0) goto LAB_001165fe;
         LAB_001165db:*(double*)param_3 = (double)*(float*)( lVar1 + param_2 * 4 );
         return;
      }

   }
 else if (lVar1 != 0) {
      lVar2 = *(long*)( lVar1 + -8 );
      if (param_2 < lVar2) goto LAB_001165db;
      goto LAB_001165fe;
   }

   lVar2 = 0;
   LAB_001165fe:_err_print_index_error("ptr_get", "core/variant/variant_setget.cpp", 0x35f, param_2, lVar2, "index", "v.size()", "", false, false);
   return;
}
/* VariantIndexedSetGet_PackedFloat32Array::get(Variant const*, long, Variant*, bool*) */void VariantIndexedSetGet_PackedFloat32Array::get(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   code *pcVar1;
   long lVar2;
   bool bVar3;
   long lVar4;
   lVar2 = *(long*)( *(long*)( param_1 + 8 ) + 0x18 );
   if (lVar2 == 0) {
      bVar3 = true;
   }
 else {
      if (param_2 < 0) {
         param_2 = param_2 + *(long*)( lVar2 + -8 );
      }

      bVar3 = (bool)( *(long*)( lVar2 + -8 ) <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
      if (bVar3 == false) {
         if (*(int*)param_3 != 3) {
            if (::Variant::needs_deinit[*(int*)param_3] != '\0') {
               ::Variant::_clear_internal();
            }

            *(undefined4*)param_3 = 3;
            lVar2 = *(long*)( *(long*)( param_1 + 8 ) + 0x18 );
            if (lVar2 == 0) {
               lVar4 = 0;
               LAB_001166f3:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, param_2, lVar4, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar1 = (code*)invalidInstructionException();
               ( *pcVar1 )();
            }

            lVar4 = *(long*)( lVar2 + -8 );
            if (lVar4 <= param_2) goto LAB_001166f3;
         }

         *(double*)( param_3 + 8 ) = (double)*(float*)( lVar2 + param_2 * 4 );
      }

   }

   *param_4 = bVar3;
   return;
}
/* VariantIndexedSetGet_PackedFloat64Array::ptr_get(void const*, long, void*) */void VariantIndexedSetGet_PackedFloat64Array::ptr_get(void *param_1, long param_2, void *param_3) {
   long lVar1;
   long lVar2;
   lVar1 = *(long*)( (long)param_1 + 8 );
   if (param_2 < 0) {
      if (lVar1 != 0) {
         lVar2 = *(long*)( lVar1 + -8 );
         param_2 = param_2 + lVar2;
         if (param_2 < 0) goto LAB_00116796;
         LAB_0011677b:*(undefined8*)param_3 = *(undefined8*)( lVar1 + param_2 * 8 );
         return;
      }

   }
 else if (lVar1 != 0) {
      lVar2 = *(long*)( lVar1 + -8 );
      if (param_2 < lVar2) goto LAB_0011677b;
      goto LAB_00116796;
   }

   lVar2 = 0;
   LAB_00116796:_err_print_index_error("ptr_get", "core/variant/variant_setget.cpp", 0x360, param_2, lVar2, "index", "v.size()", "", false, false);
   return;
}
/* VariantIndexedSetGet_PackedFloat64Array::get(Variant const*, long, Variant*, bool*) */void VariantIndexedSetGet_PackedFloat64Array::get(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   code *pcVar1;
   long lVar2;
   bool bVar3;
   long lVar4;
   lVar2 = *(long*)( *(long*)( param_1 + 8 ) + 0x18 );
   if (lVar2 == 0) {
      bVar3 = true;
   }
 else {
      if (param_2 < 0) {
         param_2 = param_2 + *(long*)( lVar2 + -8 );
      }

      bVar3 = (bool)( *(long*)( lVar2 + -8 ) <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
      if (bVar3 == false) {
         if (*(int*)param_3 != 3) {
            if (::Variant::needs_deinit[*(int*)param_3] != '\0') {
               ::Variant::_clear_internal();
            }

            *(undefined4*)param_3 = 3;
            lVar2 = *(long*)( *(long*)( param_1 + 8 ) + 0x18 );
            if (lVar2 == 0) {
               lVar4 = 0;
               LAB_00116883:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, param_2, lVar4, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar1 = (code*)invalidInstructionException();
               ( *pcVar1 )();
            }

            lVar4 = *(long*)( lVar2 + -8 );
            if (lVar4 <= param_2) goto LAB_00116883;
         }

         *(undefined8*)( param_3 + 8 ) = *(undefined8*)( lVar2 + param_2 * 8 );
      }

   }

   *param_4 = bVar3;
   return;
}
/* VariantIndexedSetGet_PackedColorArray::ptr_get(void const*, long, void*) */void VariantIndexedSetGet_PackedColorArray::ptr_get(void *param_1, long param_2, void *param_3) {
   undefined8 *puVar1;
   long lVar2;
   undefined8 uVar3;
   long lVar4;
   lVar2 = *(long*)( (long)param_1 + 8 );
   if (param_2 < 0) {
      if (lVar2 != 0) {
         lVar4 = *(long*)( lVar2 + -8 );
         param_2 = param_2 + lVar4;
         if (param_2 < 0) goto LAB_0011692e;
         LAB_0011690e:puVar1 = (undefined8*)( lVar2 + param_2 * 0x10 );
         uVar3 = puVar1[1];
         *(undefined8*)param_3 = *puVar1;
         *(undefined8*)( (long)param_3 + 8 ) = uVar3;
         return;
      }

   }
 else if (lVar2 != 0) {
      lVar4 = *(long*)( lVar2 + -8 );
      if (param_2 < lVar4) goto LAB_0011690e;
      goto LAB_0011692e;
   }

   lVar4 = 0;
   LAB_0011692e:_err_print_index_error("ptr_get", "core/variant/variant_setget.cpp", 0x364, param_2, lVar4, "index", "v.size()", "", false, false);
   return;
}
/* VariantIndexedSetGet_PackedColorArray::get(Variant const*, long, Variant*, bool*) */void VariantIndexedSetGet_PackedColorArray::get(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   undefined8 *puVar1;
   code *pcVar2;
   undefined8 uVar3;
   long lVar4;
   bool bVar5;
   long lVar6;
   lVar4 = *(long*)( *(long*)( param_1 + 8 ) + 0x18 );
   if (lVar4 == 0) {
      bVar5 = true;
   }
 else {
      if (param_2 < 0) {
         param_2 = param_2 + *(long*)( lVar4 + -8 );
      }

      bVar5 = (bool)( *(long*)( lVar4 + -8 ) <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
      if (bVar5 == false) {
         if (*(int*)param_3 != 0x14) {
            if (::Variant::needs_deinit[*(int*)param_3] != '\0') {
               ::Variant::_clear_internal();
            }

            *(undefined4*)param_3 = 0x14;
            lVar4 = *(long*)( *(long*)( param_1 + 8 ) + 0x18 );
            if (lVar4 == 0) {
               lVar6 = 0;
               LAB_00116a23:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, param_2, lVar6, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            lVar6 = *(long*)( lVar4 + -8 );
            if (lVar6 <= param_2) goto LAB_00116a23;
         }

         puVar1 = (undefined8*)( lVar4 + param_2 * 0x10 );
         uVar3 = puVar1[1];
         *(undefined8*)( param_3 + 8 ) = *puVar1;
         *(undefined8*)( param_3 + 0x10 ) = uVar3;
      }

   }

   *param_4 = bVar5;
   return;
}
/* VariantIndexedSetGet_PackedVector4Array::ptr_get(void const*, long, void*) */void VariantIndexedSetGet_PackedVector4Array::ptr_get(void *param_1, long param_2, void *param_3) {
   undefined8 *puVar1;
   long lVar2;
   undefined8 uVar3;
   long lVar4;
   lVar2 = *(long*)( (long)param_1 + 8 );
   if (param_2 < 0) {
      if (lVar2 != 0) {
         lVar4 = *(long*)( lVar2 + -8 );
         param_2 = param_2 + lVar4;
         if (param_2 < 0) goto LAB_00116ace;
         LAB_00116aae:puVar1 = (undefined8*)( lVar2 + param_2 * 0x10 );
         uVar3 = puVar1[1];
         *(undefined8*)param_3 = *puVar1;
         *(undefined8*)( (long)param_3 + 8 ) = uVar3;
         return;
      }

   }
 else if (lVar2 != 0) {
      lVar4 = *(long*)( lVar2 + -8 );
      if (param_2 < lVar4) goto LAB_00116aae;
      goto LAB_00116ace;
   }

   lVar4 = 0;
   LAB_00116ace:_err_print_index_error("ptr_get", "core/variant/variant_setget.cpp", 0x365, param_2, lVar4, "index", "v.size()", "", false, false);
   return;
}
/* VariantIndexedSetGet_PackedVector4Array::get(Variant const*, long, Variant*, bool*) */void VariantIndexedSetGet_PackedVector4Array::get(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   undefined8 *puVar1;
   code *pcVar2;
   undefined8 uVar3;
   long lVar4;
   bool bVar5;
   long lVar6;
   lVar4 = *(long*)( *(long*)( param_1 + 8 ) + 0x18 );
   if (lVar4 == 0) {
      bVar5 = true;
   }
 else {
      if (param_2 < 0) {
         param_2 = param_2 + *(long*)( lVar4 + -8 );
      }

      bVar5 = (bool)( *(long*)( lVar4 + -8 ) <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
      if (bVar5 == false) {
         if (*(int*)param_3 != 0xc) {
            if (::Variant::needs_deinit[*(int*)param_3] != '\0') {
               ::Variant::_clear_internal();
            }

            *(undefined4*)param_3 = 0xc;
            lVar4 = *(long*)( *(long*)( param_1 + 8 ) + 0x18 );
            if (lVar4 == 0) {
               lVar6 = 0;
               LAB_00116bc3:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, param_2, lVar6, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            lVar6 = *(long*)( lVar4 + -8 );
            if (lVar6 <= param_2) goto LAB_00116bc3;
         }

         puVar1 = (undefined8*)( lVar4 + param_2 * 0x10 );
         uVar3 = puVar1[1];
         *(undefined8*)( param_3 + 8 ) = *puVar1;
         *(undefined8*)( param_3 + 0x10 ) = uVar3;
      }

   }

   *param_4 = bVar5;
   return;
}
/* VariantKeyedSetGetObject::set(Variant*, Variant const*, Variant const*, bool*) */void VariantKeyedSetGetObject::set(Variant *param_1, Variant *param_2, Variant *param_3, bool *param_4) {
   long *plVar1;
   plVar1 = (long*)::Variant::get_validated_object();
   if (plVar1 != (long*)0x0) {
      /* WARNING: Could not recover jumptable at 0x00116c65. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( *plVar1 + 0x88 ) )(plVar1, param_2, param_3, param_4);
      return;
   }

   *param_4 = false;
   return;
}
/* VariantKeyedSetGetObject::has(Variant const*, Variant const*, bool*) */undefined1 VariantKeyedSetGetObject::has(Variant *param_1, Variant *param_2, bool *param_3) {
   long lVar1;
   long *plVar2;
   long in_FS_OFFSET;
   undefined1 local_39;
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar2 = (long*)::Variant::get_validated_object();
   if (plVar2 == (long*)0x0) {
      *param_3 = false;
      local_39 = 0;
   }
 else {
      lVar1 = *plVar2;
      *param_3 = true;
      ( **(code**)( lVar1 + 0x80 ) )(local_38, plVar2, param_2, &local_39);
      if (::Variant::needs_deinit[local_38[0]] != '\0') {
         ::Variant::_clear_internal();
      }

   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_39;
}
/* VariantKeyedSetGetDictionary::ptr_set(void*, void const*, void const*) */void VariantKeyedSetGetDictionary::ptr_set(void *param_1, void *param_2, void *param_3) {
   Dictionary::set((Variant*)param_1, (Variant*)param_2);
   return;
}
/* VariantKeyedSetGetDictionary::set(Variant*, Variant const*, Variant const*, bool*) */void VariantKeyedSetGetDictionary::set(Variant *param_1, Variant *param_2, Variant *param_3, bool *param_4) {
   bool bVar1;
   bVar1 = (bool)Dictionary::set(param_1 + 8, param_2);
   *param_4 = bVar1;
   return;
}
/* VariantIndexedSetGet_Array::ptr_get(void const*, long, void*) */void VariantIndexedSetGet_Array::ptr_get(void *param_1, long param_2, void *param_3) {
   int iVar1;
   Variant *pVVar2;
   if (param_2 < 0) {
      iVar1 = Array::size();
      param_2 = param_2 + iVar1;
      if (param_2 < 0) goto LAB_00116d9c;
   }

   iVar1 = Array::size();
   if (param_2 < iVar1) {
      pVVar2 = (Variant*)Array::operator []((int)param_1);
      ::Variant::operator =((Variant*)param_3, pVVar2);
      return;
   }

   LAB_00116d9c:iVar1 = Array::size();
   _err_print_index_error("ptr_get", "core/variant/variant_setget.cpp", 0x2a3, param_2, (long)iVar1, "index", "v.size()", "", false, false);
   return;
}
/* VariantKeyedSetGetDictionary::get(Variant const*, Variant const*, Variant*, bool*) */void VariantKeyedSetGetDictionary::get(Variant *param_1, Variant *param_2, Variant *param_3, bool *param_4) {
   Variant *pVVar1;
   pVVar1 = (Variant*)Dictionary::getptr(param_1 + 8);
   if (pVVar1 != (Variant*)0x0) {
      ::Variant::operator =(param_3, pVVar1);
   }

   *param_4 = pVVar1 != (Variant*)0x0;
   return;
}
/* VariantIndexedSetGet_Array::get(Variant const*, long, Variant*, bool*) */void VariantIndexedSetGet_Array::get(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   bool bVar1;
   int iVar2;
   Variant *pVVar3;
   iVar2 = Array::size();
   if (param_2 < 0) {
      param_2 = param_2 + iVar2;
   }

   bVar1 = (bool)( iVar2 <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
   if (bVar1 == false) {
      pVVar3 = (Variant*)Array::operator []((int)param_1 + 8);
      ::Variant::operator =(param_3, pVVar3);
   }

   *param_4 = bVar1;
   return;
}
/* VariantIndexedSetGet_Array::ptr_set(void*, long, void const*) */void VariantIndexedSetGet_Array::ptr_set(void *param_1, long param_2, void *param_3) {
   int iVar1;
   if (param_2 < 0) {
      iVar1 = Array::size();
      param_2 = param_2 + iVar1;
      if (param_2 < 0) goto LAB_00116eec;
   }

   iVar1 = Array::size();
   if (param_2 < iVar1) {
      Array::set((int)param_1, (Variant*)( param_2 & 0xffffffff ));
      return;
   }

   LAB_00116eec:iVar1 = Array::size();
   _err_print_index_error("ptr_set", "core/variant/variant_setget.cpp", 0x2cf, param_2, (long)iVar1, "index", "v.size()", "", false, false);
   return;
}
/* VariantIndexedSetGet_Array::validated_set(Variant*, long, Variant const*, bool*) */void VariantIndexedSetGet_Array::validated_set(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   char cVar1;
   int iVar2;
   cVar1 = Array::is_read_only();
   if (cVar1 == '\0') {
      iVar2 = Array::size();
      if (param_2 < 0) {
         param_2 = param_2 + iVar2;
      }

      if (param_2 < iVar2 && -1 < param_2) {
         Array::set((int)param_1 + 8, (Variant*)( param_2 & 0xffffffff ));
         *param_4 = false;
         return;
      }

   }

   *param_4 = true;
   return;
}
/* VariantIndexedSetGet_Array::set(Variant*, long, Variant const*, bool*, bool*) */void VariantIndexedSetGet_Array::set(Variant *param_1, long param_2, Variant *param_3, bool *param_4, bool *param_5) {
   char cVar1;
   int iVar2;
   cVar1 = Array::is_read_only();
   if (cVar1 != '\0') {
      *param_4 = false;
      *param_5 = true;
      return;
   }

   iVar2 = Array::size();
   if (param_2 < 0) {
      param_2 = param_2 + iVar2;
   }

   if (( -1 < param_2 ) && ( param_2 < iVar2 )) {
      Array::set((int)param_1 + 8, (Variant*)( param_2 & 0xffffffff ));
      *param_5 = false;
      *param_4 = true;
      return;
   }

   *param_5 = true;
   *param_4 = false;
   return;
}
/* VariantIndexedSetGet_Dictionary::get_indexed_size(Variant const*) */long VariantIndexedSetGet_Dictionary::get_indexed_size(Variant *param_1) {
   int iVar1;
   iVar1 = Dictionary::size();
   return (long)iVar1;
}
/* VariantIndexedSetGet_Dictionary::ptr_set(void*, long, void const*) */void VariantIndexedSetGet_Dictionary::ptr_set(void *param_1, long param_2, void *param_3) {
   long in_FS_OFFSET;
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   ::Variant::Variant((Variant*)local_38, param_2);
   Dictionary::set((Variant*)param_1, (Variant*)local_38);
   if (::Variant::needs_deinit[local_38[0]] != '\0') {
      ::Variant::_clear_internal();
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantIndexedSetGet_Dictionary::get(Variant const*, long, Variant*, bool*) */void VariantIndexedSetGet_Dictionary::get(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   Variant *pVVar1;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   ::Variant::Variant((Variant*)local_48, param_2);
   pVVar1 = (Variant*)Dictionary::getptr(param_1 + 8);
   if (::Variant::needs_deinit[local_48[0]] != '\0') {
      ::Variant::_clear_internal();
   }

   if (pVVar1 != (Variant*)0x0) {
      ::Variant::operator =(param_3, pVVar1);
   }

   *param_4 = pVVar1 == (Variant*)0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantIndexedSetGet_Dictionary::validated_set(Variant*, long, Variant const*, bool*) */void VariantIndexedSetGet_Dictionary::validated_set(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   bool bVar1;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   ::Variant::Variant((Variant*)local_48, param_2);
   Dictionary::set(param_1 + 8, (Variant*)local_48);
   if (::Variant::needs_deinit[local_48[0]] != '\0') {
      ::Variant::_clear_internal();
   }

   bVar1 = (bool)Dictionary::is_read_only();
   *param_4 = bVar1;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantIndexedSetGet_Dictionary::set(Variant*, long, Variant const*, bool*, bool*) */void VariantIndexedSetGet_Dictionary::set(Variant *param_1, long param_2, Variant *param_3, bool *param_4, bool *param_5) {
   bool bVar1;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   ::Variant::Variant((Variant*)local_48, param_2);
   bVar1 = (bool)Dictionary::set(param_1 + 8, (Variant*)local_48);
   *param_4 = bVar1;
   if (::Variant::needs_deinit[local_48[0]] != '\0') {
      ::Variant::_clear_internal();
   }

   bVar1 = (bool)Dictionary::is_read_only();
   *param_5 = bVar1;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantKeyedSetGetDictionary::ptr_has(void const*, void const*) */undefined1 VariantKeyedSetGetDictionary::ptr_has(void *param_1, void *param_2) {
   undefined1 uVar1;
   uVar1 = Dictionary::has((Variant*)param_1);
   return uVar1;
}
/* VariantKeyedSetGetDictionary::has(Variant const*, Variant const*, bool*) */void VariantKeyedSetGetDictionary::has(Variant *param_1, Variant *param_2, bool *param_3) {
   *param_3 = true;
   Dictionary::has(param_1 + 8);
   return;
}
/* VariantIndexedSetGet_Vector2i::ptr_set(void*, long, void const*) */void VariantIndexedSetGet_Vector2i::ptr_set(void *param_1, long param_2, void *param_3) {
   if ((ulong)param_2 < 2) {
      /* WARNING: Load size is inaccurate */
      *(int*)( (long)param_1 + (long)(int)param_2 * 4 ) = (int)*param_3;
      return;
   }

   _err_print_index_error("ptr_set", "core/variant/variant_setget.cpp", 0x350, param_2, 2, "index", "2", "", false, false);
   return;
}
/* VariantIndexedSetGet_Vector3i::ptr_set(void*, long, void const*) */void VariantIndexedSetGet_Vector3i::ptr_set(void *param_1, long param_2, void *param_3) {
   if ((ulong)param_2 < 3) {
      /* WARNING: Load size is inaccurate */
      *(int*)( (long)param_1 + (long)(int)param_2 * 4 ) = (int)*param_3;
      return;
   }

   _err_print_index_error("ptr_set", "core/variant/variant_setget.cpp", 0x352, param_2, 3, "index", "3", "", false, false);
   return;
}
/* VariantIndexedSetGet_Vector4i::ptr_set(void*, long, void const*) */void VariantIndexedSetGet_Vector4i::ptr_set(void *param_1, long param_2, void *param_3) {
   if ((ulong)param_2 < 4) {
      /* WARNING: Load size is inaccurate */
      *(int*)( (long)param_1 + (long)(int)param_2 * 4 ) = (int)*param_3;
      return;
   }

   _err_print_index_error("ptr_set", "core/variant/variant_setget.cpp", 0x354, param_2, 4, "index", "4", "", false, false);
   return;
}
/* VariantIndexedSetGet_Vector2i::ptr_get(void const*, long, void*) */void VariantIndexedSetGet_Vector2i::ptr_get(void *param_1, long param_2, void *param_3) {
   if ((ulong)param_2 < 2) {
      *(long*)param_3 = (long)*(int*)( (long)param_1 + (long)(int)param_2 * 4 );
      return;
   }

   _err_print_index_error("ptr_get", "core/variant/variant_setget.cpp", 0x350, param_2, 2, "index", "2", "", false, false);
   return;
}
/* VariantIndexedSetGet_Vector3i::ptr_get(void const*, long, void*) */void VariantIndexedSetGet_Vector3i::ptr_get(void *param_1, long param_2, void *param_3) {
   if ((ulong)param_2 < 3) {
      *(long*)param_3 = (long)*(int*)( (long)param_1 + (long)(int)param_2 * 4 );
      return;
   }

   _err_print_index_error("ptr_get", "core/variant/variant_setget.cpp", 0x352, param_2, 3, "index", "3", "", false, false);
   return;
}
/* VariantIndexedSetGet_Vector4i::ptr_get(void const*, long, void*) */void VariantIndexedSetGet_Vector4i::ptr_get(void *param_1, long param_2, void *param_3) {
   if ((ulong)param_2 < 4) {
      *(long*)param_3 = (long)*(int*)( (long)param_1 + (long)(int)param_2 * 4 );
      return;
   }

   _err_print_index_error("ptr_get", "core/variant/variant_setget.cpp", 0x354, param_2, 4, "index", "4", "", false, false);
   return;
}
/* VariantIndexedSetGet_Vector2::ptr_set(void*, long, void const*) */void VariantIndexedSetGet_Vector2::ptr_set(void *param_1, long param_2, void *param_3) {
   if ((ulong)param_2 < 2) {
      /* WARNING: Load size is inaccurate */
      *(float*)( (long)param_1 + (long)(int)param_2 * 4 ) = (float)*param_3;
      return;
   }

   _err_print_index_error("ptr_set", "core/variant/variant_setget.cpp", 0x34f, param_2, 2, "index", "2", "", false, false);
   return;
}
/* VariantIndexedSetGet_Vector3::ptr_set(void*, long, void const*) */void VariantIndexedSetGet_Vector3::ptr_set(void *param_1, long param_2, void *param_3) {
   if ((ulong)param_2 < 3) {
      /* WARNING: Load size is inaccurate */
      *(float*)( (long)param_1 + (long)(int)param_2 * 4 ) = (float)*param_3;
      return;
   }

   _err_print_index_error("ptr_set", "core/variant/variant_setget.cpp", 0x351, param_2, 3, "index", "3", "", false, false);
   return;
}
/* VariantIndexedSetGet_Vector4::ptr_set(void*, long, void const*) */void VariantIndexedSetGet_Vector4::ptr_set(void *param_1, long param_2, void *param_3) {
   if ((ulong)param_2 < 4) {
      /* WARNING: Load size is inaccurate */
      *(float*)( (long)param_1 + (long)(int)param_2 * 4 ) = (float)*param_3;
      return;
   }

   _err_print_index_error("ptr_set", "core/variant/variant_setget.cpp", 0x353, param_2, 4, "index", "4", "", false, false);
   return;
}
/* VariantIndexedSetGet_Quaternion::ptr_set(void*, long, void const*) */void VariantIndexedSetGet_Quaternion::ptr_set(void *param_1, long param_2, void *param_3) {
   if ((ulong)param_2 < 4) {
      /* WARNING: Load size is inaccurate */
      *(float*)( (long)param_1 + (long)(int)param_2 * 4 ) = (float)*param_3;
      return;
   }

   _err_print_index_error("ptr_set", "core/variant/variant_setget.cpp", 0x355, param_2, 4, "index", "4", "", false, false);
   return;
}
/* VariantIndexedSetGet_Color::ptr_set(void*, long, void const*) */void VariantIndexedSetGet_Color::ptr_set(void *param_1, long param_2, void *param_3) {
   if ((ulong)param_2 < 4) {
      /* WARNING: Load size is inaccurate */
      *(float*)( (long)param_1 + (long)(int)param_2 * 4 ) = (float)*param_3;
      return;
   }

   _err_print_index_error("ptr_set", "core/variant/variant_setget.cpp", 0x356, param_2, 4, "index", "4", "", false, false);
   return;
}
/* VariantIndexedSetGet_Vector2::ptr_get(void const*, long, void*) */void VariantIndexedSetGet_Vector2::ptr_get(void *param_1, long param_2, void *param_3) {
   if ((ulong)param_2 < 2) {
      *(double*)param_3 = (double)*(float*)( (long)param_1 + (long)(int)param_2 * 4 );
      return;
   }

   _err_print_index_error("ptr_get", "core/variant/variant_setget.cpp", 0x34f, param_2, 2, "index", "2", "", false, false);
   return;
}
/* VariantIndexedSetGet_Vector3::ptr_get(void const*, long, void*) */void VariantIndexedSetGet_Vector3::ptr_get(void *param_1, long param_2, void *param_3) {
   if ((ulong)param_2 < 3) {
      *(double*)param_3 = (double)*(float*)( (long)param_1 + (long)(int)param_2 * 4 );
      return;
   }

   _err_print_index_error("ptr_get", "core/variant/variant_setget.cpp", 0x351, param_2, 3, "index", "3", "", false, false);
   return;
}
/* VariantIndexedSetGet_Vector4::ptr_get(void const*, long, void*) */void VariantIndexedSetGet_Vector4::ptr_get(void *param_1, long param_2, void *param_3) {
   if ((ulong)param_2 < 4) {
      *(double*)param_3 = (double)*(float*)( (long)param_1 + (long)(int)param_2 * 4 );
      return;
   }

   _err_print_index_error("ptr_get", "core/variant/variant_setget.cpp", 0x353, param_2, 4, "index", "4", "", false, false);
   return;
}
/* VariantIndexedSetGet_Quaternion::ptr_get(void const*, long, void*) */void VariantIndexedSetGet_Quaternion::ptr_get(void *param_1, long param_2, void *param_3) {
   if ((ulong)param_2 < 4) {
      *(double*)param_3 = (double)*(float*)( (long)param_1 + (long)(int)param_2 * 4 );
      return;
   }

   _err_print_index_error("ptr_get", "core/variant/variant_setget.cpp", 0x355, param_2, 4, "index", "4", "", false, false);
   return;
}
/* VariantIndexedSetGet_Color::ptr_get(void const*, long, void*) */void VariantIndexedSetGet_Color::ptr_get(void *param_1, long param_2, void *param_3) {
   if ((ulong)param_2 < 4) {
      *(double*)param_3 = (double)*(float*)( (long)param_1 + (long)(int)param_2 * 4 );
      return;
   }

   _err_print_index_error("ptr_get", "core/variant/variant_setget.cpp", 0x356, param_2, 4, "index", "4", "", false, false);
   return;
}
/* VariantIndexedSetGet_Transform2D::ptr_set(void*, long, void const*) */void VariantIndexedSetGet_Transform2D::ptr_set(void *param_1, long param_2, void *param_3) {
   if ((ulong)param_2 < 3) {
      /* WARNING: Load size is inaccurate */
      *(undefined8*)( (long)param_1 + param_2 * 8 ) = *param_3;
      return;
   }

   _err_print_index_error("ptr_set", "core/variant/variant_setget.cpp", 0x358, param_2, 3, "index", "3", "", false, false);
   return;
}
/* VariantIndexedSetGet_Transform2D::ptr_get(void const*, long, void*) */void VariantIndexedSetGet_Transform2D::ptr_get(void *param_1, long param_2, void *param_3) {
   if ((ulong)param_2 < 3) {
      *(undefined8*)param_3 = *(undefined8*)( (long)param_1 + param_2 * 8 );
      return;
   }

   _err_print_index_error("ptr_get", "core/variant/variant_setget.cpp", 0x358, param_2, 3, "index", "3", "", false, false);
   return;
}
/* VariantIndexedSetGet_Basis::ptr_set(void*, long, void const*) */void VariantIndexedSetGet_Basis::ptr_set(void *param_1, long param_2, void *param_3) {
   undefined4 *puVar1;
   if ((ulong)param_2 < 3) {
      /* WARNING: Load size is inaccurate */
      puVar1 = (undefined4*)( (long)param_1 + param_2 * 4 );
      *puVar1 = *param_3;
      puVar1[3] = *(undefined4*)( (long)param_3 + 4 );
      puVar1[6] = *(undefined4*)( (long)param_3 + 8 );
      return;
   }

   _err_print_index_error("ptr_set", "core/variant/variant_setget.cpp", 0x359, param_2, 3, "index", "3", "", false, false);
   return;
}
/* VariantIndexedSetGet_Basis::ptr_get(void const*, long, void*) */void VariantIndexedSetGet_Basis::ptr_get(void *param_1, long param_2, void *param_3) {
   long lVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   if ((ulong)param_2 < 3) {
      lVar1 = (long)(int)param_2 * 4;
      uVar2 = *(undefined8*)( (long)param_1 + lVar1 );
      uVar3 = *(undefined8*)( (long)param_1 + lVar1 + 8 );
      *(undefined4*)( (long)param_3 + 8 ) = *(undefined4*)( (long)param_1 + param_2 * 4 + 0x18 );
      *(ulong*)param_3 = CONCAT44((int)( (ulong)uVar3 >> 0x20 ), (int)uVar2);
      return;
   }

   _err_print_index_error("ptr_get", "core/variant/variant_setget.cpp", 0x359, param_2, 3, "index", "3", "", false, false);
   return;
}
/* VariantIndexedSetGet_Projection::ptr_set(void*, long, void const*) */void VariantIndexedSetGet_Projection::ptr_set(void *param_1, long param_2, void *param_3) {
   undefined8 *puVar1;
   undefined8 uVar2;
   if ((ulong)param_2 < 4) {
      /* WARNING: Load size is inaccurate */
      uVar2 = *(undefined8*)( (long)param_3 + 8 );
      puVar1 = (undefined8*)( (long)param_1 + param_2 * 0x10 );
      *puVar1 = *param_3;
      puVar1[1] = uVar2;
      return;
   }

   _err_print_index_error("ptr_set", "core/variant/variant_setget.cpp", 0x35a, param_2, 4, "index", "4", "", false, false);
   return;
}
/* VariantIndexedSetGet_Projection::ptr_get(void const*, long, void*) */void VariantIndexedSetGet_Projection::ptr_get(void *param_1, long param_2, void *param_3) {
   undefined8 *puVar1;
   undefined8 uVar2;
   if ((ulong)param_2 < 4) {
      puVar1 = (undefined8*)( (long)param_1 + param_2 * 0x10 );
      uVar2 = puVar1[1];
      *(undefined8*)param_3 = *puVar1;
      *(undefined8*)( (long)param_3 + 8 ) = uVar2;
      return;
   }

   _err_print_index_error("ptr_get", "core/variant/variant_setget.cpp", 0x35a, param_2, 4, "index", "4", "", false, false);
   return;
}
/* VariantIndexedSetGet_Dictionary::ptr_get(void const*, long, void*) */void VariantIndexedSetGet_Dictionary::ptr_get(void *param_1, long param_2, void *param_3) {
   Variant *pVVar1;
   long in_FS_OFFSET;
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   ::Variant::Variant((Variant*)local_38, param_2);
   pVVar1 = (Variant*)Dictionary::getptr((Variant*)param_1);
   if (::Variant::needs_deinit[local_38[0]] != '\0') {
      ::Variant::_clear_internal();
   }

   if (pVVar1 == (Variant*)0x0) {
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("ptr_get", "core/variant/variant_setget.cpp", 0x2e5, "Parameter \"ptr\" is null.", 0, 0);
         return;
      }

   }
 else if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      ::Variant::operator =((Variant*)param_3, pVVar1);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantKeyedSetGetDictionary::ptr_get(void const*, void const*, void*) */void VariantKeyedSetGetDictionary::ptr_get(void *param_1, void *param_2, void *param_3) {
   Variant *pVVar1;
   pVVar1 = (Variant*)Dictionary::getptr((Variant*)param_1);
   if (pVVar1 != (Variant*)0x0) {
      ::Variant::operator =((Variant*)param_3, pVVar1);
      return;
   }

   _err_print_error("ptr_get", "core/variant/variant_setget.cpp", 0x3fc, "Parameter \"ptr\" is null.", 0, 0);
   return;
}
/* VariantIndexedSetGet_Vector2::set(Variant*, long, Variant const*, bool*, bool*) */void VariantIndexedSetGet_Vector2::set(Variant *param_1, long param_2, Variant *param_3, bool *param_4, bool *param_5) {
   float fVar1;
   if (1 < (ulong)param_2) {
      *param_5 = true;
      *param_4 = false;
      return;
   }

   if (*(int*)param_3 == 2) {
      fVar1 = (float)*(long*)( param_3 + 8 );
   }
 else {
      if (*(int*)param_3 != 3) {
         *param_5 = false;
         *param_4 = false;
         return;
      }

      fVar1 = (float)*(double*)( param_3 + 8 );
   }

   *(float*)( param_1 + (long)(int)param_2 * 4 + 8 ) = fVar1;
   *param_5 = false;
   *param_4 = true;
   return;
}
/* VariantIndexedSetGet_Vector2i::set(Variant*, long, Variant const*, bool*, bool*) */void VariantIndexedSetGet_Vector2i::set(Variant *param_1, long param_2, Variant *param_3, bool *param_4, bool *param_5) {
   int iVar1;
   if (1 < (ulong)param_2) {
      *param_5 = true;
      *param_4 = false;
      return;
   }

   if (*(int*)param_3 == 2) {
      iVar1 = *(int*)( param_3 + 8 );
   }
 else {
      if (*(int*)param_3 != 3) {
         *param_5 = false;
         *param_4 = false;
         return;
      }

      iVar1 = (int)*(double*)( param_3 + 8 );
   }

   *(int*)( param_1 + (long)(int)param_2 * 4 + 8 ) = iVar1;
   *param_5 = false;
   *param_4 = true;
   return;
}
/* VariantSetGet_Rect2_end::set(Variant*, Variant const*, bool&) */void VariantSetGet_Rect2_end::set(Variant *param_1, Variant *param_2, bool *param_3) {
   int iVar1;
   iVar1 = *(int*)param_2;
   if (iVar1 == 5) {
      *(ulong*)( param_1 + 0x10 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( param_2 + 8 ) >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( param_1 + 8 ) >> 0x20 ), (float)*(undefined8*)( param_2 + 8 ) - (float)*(undefined8*)( param_1 + 8 ));
   }

   *param_3 = iVar1 == 5;
   return;
}
/* VariantSetGet_Rect2i_end::set(Variant*, Variant const*, bool&) */void VariantSetGet_Rect2i_end::set(Variant *param_1, Variant *param_2, bool *param_3) {
   undefined8 uVar1;
   if (*(int*)param_2 != 6) {
      *param_3 = false;
      return;
   }

   uVar1 = Vector2i::operator -((Vector2i*)( param_2 + 8 ), (Vector2i*)( param_1 + 8 ));
   *(undefined8*)( param_1 + 0x10 ) = uVar1;
   *param_3 = true;
   return;
}
/* VariantSetGet_Color_r8::set(Variant*, Variant const*, bool&) */void VariantSetGet_Color_r8::set(Variant *param_1, Variant *param_2, bool *param_3) {
   int iVar1;
   if (*(int*)param_2 == 3) {
      iVar1 = (int)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      iVar1 = (int)*(undefined8*)( param_2 + 8 );
   }

   if (0xff < iVar1) {
      iVar1 = 0xff;
   }

   if (iVar1 < 0) {
      iVar1 = 0;
   }

   *(float*)( param_1 + 8 ) = (float)iVar1 / _LC0;
   *param_3 = true;
   return;
}
/* VariantSetGet_Color_g8::set(Variant*, Variant const*, bool&) */void VariantSetGet_Color_g8::set(Variant *param_1, Variant *param_2, bool *param_3) {
   int iVar1;
   if (*(int*)param_2 == 3) {
      iVar1 = (int)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      iVar1 = (int)*(undefined8*)( param_2 + 8 );
   }

   if (0xff < iVar1) {
      iVar1 = 0xff;
   }

   if (iVar1 < 0) {
      iVar1 = 0;
   }

   *(float*)( param_1 + 0xc ) = (float)iVar1 / _LC0;
   *param_3 = true;
   return;
}
/* VariantSetGet_Color_b8::set(Variant*, Variant const*, bool&) */void VariantSetGet_Color_b8::set(Variant *param_1, Variant *param_2, bool *param_3) {
   int iVar1;
   if (*(int*)param_2 == 3) {
      iVar1 = (int)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      iVar1 = (int)*(undefined8*)( param_2 + 8 );
   }

   if (0xff < iVar1) {
      iVar1 = 0xff;
   }

   if (iVar1 < 0) {
      iVar1 = 0;
   }

   *(float*)( param_1 + 0x10 ) = (float)iVar1 / _LC0;
   *param_3 = true;
   return;
}
/* VariantSetGet_Color_a8::set(Variant*, Variant const*, bool&) */void VariantSetGet_Color_a8::set(Variant *param_1, Variant *param_2, bool *param_3) {
   int iVar1;
   if (*(int*)param_2 == 3) {
      iVar1 = (int)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      iVar1 = (int)*(undefined8*)( param_2 + 8 );
   }

   if (0xff < iVar1) {
      iVar1 = 0xff;
   }

   if (iVar1 < 0) {
      iVar1 = 0;
   }

   *(float*)( param_1 + 0x14 ) = (float)iVar1 / _LC0;
   *param_3 = true;
   return;
}
/* VariantSetGet_Color_h::set(Variant*, Variant const*, bool&) */void VariantSetGet_Color_h::set(Variant *param_1, Variant *param_2, bool *param_3) {
   float fVar1;
   float fVar2;
   float fVar3;
   float local_24;
   if (*(int*)param_2 == 3) {
      local_24 = (float)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      local_24 = (float)*(long*)( param_2 + 8 );
   }

   fVar1 = *(float*)( param_1 + 0x14 );
   fVar2 = (float)Color::get_v();
   fVar3 = (float)Color::get_s();
   Color::set_hsv(local_24, fVar3, fVar2, fVar1);
   *param_3 = true;
   return;
}
/* VariantSetGet_Color_s::set(Variant*, Variant const*, bool&) */void VariantSetGet_Color_s::set(Variant *param_1, Variant *param_2, bool *param_3) {
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   if (*(int*)param_2 == 3) {
      fVar4 = (float)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      fVar4 = (float)*(long*)( param_2 + 8 );
   }

   fVar1 = *(float*)( param_1 + 0x14 );
   fVar2 = (float)Color::get_v();
   fVar3 = (float)Color::get_h();
   Color::set_hsv(fVar3, fVar4, fVar2, fVar1);
   *param_3 = true;
   return;
}
/* VariantSetGet_Color_v::set(Variant*, Variant const*, bool&) */void VariantSetGet_Color_v::set(Variant *param_1, Variant *param_2, bool *param_3) {
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   if (*(int*)param_2 == 3) {
      fVar4 = (float)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      fVar4 = (float)*(long*)( param_2 + 8 );
   }

   fVar1 = *(float*)( param_1 + 0x14 );
   fVar2 = (float)Color::get_s();
   fVar3 = (float)Color::get_h();
   Color::set_hsv(fVar3, fVar2, fVar4, fVar1);
   *param_3 = true;
   return;
}
/* VariantSetGet_Color_ok_hsl_h::set(Variant*, Variant const*, bool&) */void VariantSetGet_Color_ok_hsl_h::set(Variant *param_1, Variant *param_2, bool *param_3) {
   float fVar1;
   float fVar2;
   float fVar3;
   float local_24;
   if (*(int*)param_2 == 3) {
      local_24 = (float)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      local_24 = (float)*(long*)( param_2 + 8 );
   }

   fVar1 = *(float*)( param_1 + 0x14 );
   fVar2 = (float)Color::get_ok_hsl_l();
   fVar3 = (float)Color::get_ok_hsl_s();
   Color::set_ok_hsl(local_24, fVar3, fVar2, fVar1);
   *param_3 = true;
   return;
}
/* VariantSetGet_Color_ok_hsl_s::set(Variant*, Variant const*, bool&) */void VariantSetGet_Color_ok_hsl_s::set(Variant *param_1, Variant *param_2, bool *param_3) {
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   if (*(int*)param_2 == 3) {
      fVar4 = (float)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      fVar4 = (float)*(long*)( param_2 + 8 );
   }

   fVar1 = *(float*)( param_1 + 0x14 );
   fVar2 = (float)Color::get_ok_hsl_l();
   fVar3 = (float)Color::get_ok_hsl_h();
   Color::set_ok_hsl(fVar3, fVar4, fVar2, fVar1);
   *param_3 = true;
   return;
}
/* VariantSetGet_Color_ok_hsl_l::set(Variant*, Variant const*, bool&) */void VariantSetGet_Color_ok_hsl_l::set(Variant *param_1, Variant *param_2, bool *param_3) {
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   if (*(int*)param_2 == 3) {
      fVar4 = (float)*(double*)( param_2 + 8 );
   }
 else {
      if (*(int*)param_2 != 2) {
         *param_3 = false;
         return;
      }

      fVar4 = (float)*(long*)( param_2 + 8 );
   }

   fVar1 = *(float*)( param_1 + 0x14 );
   fVar2 = (float)Color::get_ok_hsl_s();
   fVar3 = (float)Color::get_ok_hsl_h();
   Color::set_ok_hsl(fVar3, fVar2, fVar4, fVar1);
   *param_3 = true;
   return;
}
/* VariantKeyedSetGetObject::ptr_has(void const*, void const*) */undefined1 VariantKeyedSetGetObject::ptr_has(void *param_1, void *param_2) {
   long *plVar1;
   long in_FS_OFFSET;
   undefined1 local_29;
   int local_28[6];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   /* WARNING: Load size is inaccurate */
   if (( param_1 == (void*)0x0 ) || ( plVar1 = *param_1 ),plVar1 == (long*)0x0) {
      _err_print_error("ptr_has", "core/variant/variant_setget.cpp", 0x43f, "Parameter \"obj\" is null.", 0, 0);
      local_29 = 0;
   }
 else {
      ( **(code**)( *plVar1 + 0x80 ) )(local_28, plVar1, param_2, &local_29);
      if (::Variant::needs_deinit[local_28[0]] != '\0') {
         ::Variant::_clear_internal();
      }

   }

   if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_29;
}
/* VariantKeyedSetGetObject::ptr_get(void const*, void const*, void*) */void VariantKeyedSetGetObject::ptr_get(void *param_1, void *param_2, void *param_3) {
   long *plVar1;
   long in_FS_OFFSET;
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   /* WARNING: Load size is inaccurate */
   if (( param_1 == (void*)0x0 ) || ( plVar1 = *param_1 ),plVar1 == (long*)0x0) {
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("ptr_get", "core/variant/variant_setget.cpp", 0x41f, "Parameter \"obj\" is null.", 0, 0);
         return;
      }

   }
 else {
      ( **(code**)( *plVar1 + 0x80 ) )(local_38, plVar1, param_2, 0);
      ::Variant::operator =((Variant*)param_3, (Variant*)local_38);
      if (::Variant::needs_deinit[local_38[0]] != '\0') {
         ::Variant::_clear_internal();
      }

      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantKeyedSetGetObject::ptr_set(void*, void const*, void const*) */void VariantKeyedSetGetObject::ptr_set(void *param_1, void *param_2, void *param_3) {
   /* WARNING: Load size is inaccurate */
   if (( param_1 != (void*)0x0 ) && ( *param_1 != (long*)0x0 )) {
      /* WARNING: Could not recover jumptable at 0x0011861d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( **param_1 + 0x88 ) )();
      return;
   }

   _err_print_error("ptr_set", "core/variant/variant_setget.cpp", 0x42e, "Parameter \"obj\" is null.", 0, 0);
   return;
}
/* VariantIndexedSetGet_Vector2::get(Variant const*, long, Variant*, bool*) */void VariantIndexedSetGet_Vector2::get(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   if ((ulong)param_2 < 2) {
      if (*(int*)param_3 != 3) {
         if (::Variant::needs_deinit[*(int*)param_3] != '\0') {
            ::Variant::_clear_internal();
         }

         *(undefined4*)param_3 = 3;
      }

      *(double*)( param_3 + 8 ) = (double)*(float*)( param_1 + (long)(int)param_2 * 4 + 8 );
      *param_4 = false;
      return;
   }

   *param_4 = true;
   return;
}
/* VariantIndexedSetGet_Vector2i::get(Variant const*, long, Variant*, bool*) */void VariantIndexedSetGet_Vector2i::get(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   if ((ulong)param_2 < 2) {
      if (*(int*)param_3 != 2) {
         if (::Variant::needs_deinit[*(int*)param_3] != '\0') {
            ::Variant::_clear_internal();
         }

         *(undefined4*)param_3 = 2;
      }

      *(long*)( param_3 + 8 ) = (long)*(int*)( param_1 + (long)(int)param_2 * 4 + 8 );
      *param_4 = false;
      return;
   }

   *param_4 = true;
   return;
}
/* VariantIndexedSetGet_Transform2D::get(Variant const*, long, Variant*, bool*) */void VariantIndexedSetGet_Transform2D::get(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   if ((ulong)param_2 < 3) {
      if (*(int*)param_3 != 5) {
         if (::Variant::needs_deinit[*(int*)param_3] != '\0') {
            ::Variant::_clear_internal();
         }

         *(undefined4*)param_3 = 5;
      }

      *(undefined8*)( param_3 + 8 ) = *(undefined8*)( *(long*)( param_1 + 8 ) + param_2 * 8 );
      *param_4 = false;
      return;
   }

   *param_4 = true;
   return;
}
/* VariantIndexedSetGet_Basis::get(Variant const*, long, Variant*, bool*) */void VariantIndexedSetGet_Basis::get(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   long lVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   if ((ulong)param_2 < 3) {
      if (*(int*)param_3 != 9) {
         if (::Variant::needs_deinit[*(int*)param_3] != '\0') {
            ::Variant::_clear_internal();
         }

         *(undefined4*)param_3 = 9;
      }

      lVar1 = *(long*)( param_1 + 8 ) + 0xc + (long)(int)param_2 * 4;
      uVar2 = *(undefined8*)( lVar1 + -0xc );
      uVar3 = *(undefined8*)( lVar1 + -4 );
      *(undefined4*)( param_3 + 0x10 ) = *(undefined4*)( *(long*)( param_1 + 8 ) + 0x18 + param_2 * 4 );
      *(ulong*)( param_3 + 8 ) = CONCAT44((int)( (ulong)uVar3 >> 0x20 ), (int)uVar2);
      *param_4 = false;
      return;
   }

   *param_4 = true;
   return;
}
/* VariantIndexedSetGet_Projection::get(Variant const*, long, Variant*, bool*) */void VariantIndexedSetGet_Projection::get(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   undefined8 uVar1;
   undefined8 *puVar2;
   if ((ulong)param_2 < 4) {
      if (*(int*)param_3 != 0xc) {
         if (::Variant::needs_deinit[*(int*)param_3] != '\0') {
            ::Variant::_clear_internal();
         }

         *(undefined4*)param_3 = 0xc;
      }

      puVar2 = (undefined8*)( param_2 * 0x10 + *(long*)( param_1 + 8 ) );
      uVar1 = puVar2[1];
      *(undefined8*)( param_3 + 8 ) = *puVar2;
      *(undefined8*)( param_3 + 0x10 ) = uVar1;
      *param_4 = false;
      return;
   }

   *param_4 = true;
   return;
}
/* VariantSetGet_Transform3D_basis::set(Variant*, Variant const*, bool&) */void VariantSetGet_Transform3D_basis::set(Variant *param_1, Variant *param_2, bool *param_3) {
   int iVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   undefined8 uVar4;
   iVar1 = *(int*)param_2;
   if (iVar1 == 0x11) {
      puVar2 = *(undefined8**)( param_2 + 8 );
      puVar3 = *(undefined8**)( param_1 + 8 );
      uVar4 = puVar2[1];
      *puVar3 = *puVar2;
      puVar3[1] = uVar4;
      uVar4 = puVar2[3];
      puVar3[2] = puVar2[2];
      puVar3[3] = uVar4;
      *(undefined4*)( puVar3 + 4 ) = *(undefined4*)( puVar2 + 4 );
   }

   *param_3 = iVar1 == 0x11;
   return;
}
/* VariantIndexedSetGet_Basis::set(Variant*, long, Variant const*, bool*, bool*) */void VariantIndexedSetGet_Basis::set(Variant *param_1, long param_2, Variant *param_3, bool *param_4, bool *param_5) {
   undefined4 *puVar1;
   if (*(int*)param_3 != 9) {
      *param_5 = false;
      *param_4 = false;
   }

   if ((ulong)param_2 < 3) {
      puVar1 = (undefined4*)( *(long*)( param_1 + 8 ) + param_2 * 4 );
      *puVar1 = *(undefined4*)( param_3 + 8 );
      puVar1[3] = *(undefined4*)( param_3 + 0xc );
      puVar1[6] = *(undefined4*)( param_3 + 0x10 );
      *param_5 = false;
      *param_4 = true;
      return;
   }

   *param_5 = true;
   *param_4 = false;
   return;
}
/* VariantIndexedSetGet_Basis::validated_set(Variant*, long, Variant const*, bool*) */void VariantIndexedSetGet_Basis::validated_set(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   undefined4 *puVar1;
   if (2U >= (ulong)param_2) {
      puVar1 = (undefined4*)( *(long*)( param_1 + 8 ) + param_2 * 4 );
      *puVar1 = *(undefined4*)( param_3 + 8 );
      puVar1[3] = *(undefined4*)( param_3 + 0xc );
      puVar1[6] = *(undefined4*)( param_3 + 0x10 );
   }

   *param_4 = 2U < (ulong)param_2;
   return;
}
/* VariantSetGet_Basis_z::set(Variant*, Variant const*, bool&) */void VariantSetGet_Basis_z::set(Variant *param_1, Variant *param_2, bool *param_3) {
   int iVar1;
   long lVar2;
   iVar1 = *(int*)param_2;
   if (iVar1 == 9) {
      lVar2 = *(long*)( param_1 + 8 );
      for (int i = 0; i < 3; i++) {
         *(undefined4*)( lVar2 + ( 12*i + 8 ) ) = *(undefined4*)( param_2 + ( 4*i + 8 ) );
      }

   }

   *param_3 = iVar1 == 9;
   return;
}
/* VariantSetGet_Basis_y::set(Variant*, Variant const*, bool&) */void VariantSetGet_Basis_y::set(Variant *param_1, Variant *param_2, bool *param_3) {
   int iVar1;
   long lVar2;
   iVar1 = *(int*)param_2;
   if (iVar1 == 9) {
      lVar2 = *(long*)( param_1 + 8 );
      for (int i = 0; i < 3; i++) {
         *(undefined4*)( lVar2 + ( 12*i + 4 ) ) = *(undefined4*)( param_2 + ( 4*i + 8 ) );
      }

   }

   *param_3 = iVar1 == 9;
   return;
}
/* VariantSetGet_Basis_x::set(Variant*, Variant const*, bool&) */void VariantSetGet_Basis_x::set(Variant *param_1, Variant *param_2, bool *param_3) {
   int iVar1;
   undefined4 *puVar2;
   iVar1 = *(int*)param_2;
   if (iVar1 == 9) {
      puVar2 = *(undefined4**)( param_1 + 8 );
      *puVar2 = *(undefined4*)( param_2 + 8 );
      puVar2[3] = *(undefined4*)( param_2 + 0xc );
      puVar2[6] = *(undefined4*)( param_2 + 0x10 );
   }

   *param_3 = iVar1 == 9;
   return;
}
/* VariantSetGet_AABB_end::set(Variant*, Variant const*, bool&) */void VariantSetGet_AABB_end::set(Variant *param_1, Variant *param_2, bool *param_3) {
   undefined8 uVar1;
   int iVar2;
   undefined8 *puVar3;
   iVar2 = *(int*)param_2;
   if (iVar2 == 9) {
      puVar3 = *(undefined8**)( param_1 + 8 );
      uVar1 = *(undefined8*)( param_2 + 8 );
      *(float*)( (long)puVar3 + 0x14 ) = *(float*)( param_2 + 0x10 ) - *(float*)( puVar3 + 1 );
      *(ulong*)( (long)puVar3 + 0xc ) = CONCAT44((float)( (ulong)uVar1 >> 0x20 ) - (float)( ( ulong ) * puVar3 >> 0x20 ), (float)uVar1 - (float)*puVar3);
   }

   *param_3 = iVar2 == 9;
   return;
}
/* VariantIndexedSetGet_Vector3i::set(Variant*, long, Variant const*, bool*, bool*) */void VariantIndexedSetGet_Vector3i::set(Variant *param_1, long param_2, Variant *param_3, bool *param_4, bool *param_5) {
   int iVar1;
   if (2 < (ulong)param_2) {
      *param_5 = true;
      *param_4 = false;
      return;
   }

   if (*(int*)param_3 == 2) {
      iVar1 = *(int*)( param_3 + 8 );
   }
 else {
      if (*(int*)param_3 != 3) {
         *param_5 = false;
         *param_4 = false;
         return;
      }

      iVar1 = (int)*(double*)( param_3 + 8 );
   }

   *(int*)( param_1 + (long)(int)param_2 * 4 + 8 ) = iVar1;
   *param_5 = false;
   *param_4 = true;
   return;
}
/* VariantIndexedSetGet_Vector4i::set(Variant*, long, Variant const*, bool*, bool*) */void VariantIndexedSetGet_Vector4i::set(Variant *param_1, long param_2, Variant *param_3, bool *param_4, bool *param_5) {
   int iVar1;
   if (3 < (ulong)param_2) {
      *param_5 = true;
      *param_4 = false;
      return;
   }

   if (*(int*)param_3 == 2) {
      iVar1 = *(int*)( param_3 + 8 );
   }
 else {
      if (*(int*)param_3 != 3) {
         *param_5 = false;
         *param_4 = false;
         return;
      }

      iVar1 = (int)*(double*)( param_3 + 8 );
   }

   *(int*)( param_1 + (long)(int)param_2 * 4 + 8 ) = iVar1;
   *param_5 = false;
   *param_4 = true;
   return;
}
/* VariantIndexedSetGet_Color::set(Variant*, long, Variant const*, bool*, bool*) */void VariantIndexedSetGet_Color::set(Variant *param_1, long param_2, Variant *param_3, bool *param_4, bool *param_5) {
   float fVar1;
   if (3 < (ulong)param_2) {
      *param_5 = true;
      *param_4 = false;
      return;
   }

   if (*(int*)param_3 == 2) {
      fVar1 = (float)*(long*)( param_3 + 8 );
   }
 else {
      if (*(int*)param_3 != 3) {
         *param_5 = false;
         *param_4 = false;
         return;
      }

      fVar1 = (float)*(double*)( param_3 + 8 );
   }

   *(float*)( param_1 + (long)(int)param_2 * 4 + 8 ) = fVar1;
   *param_5 = false;
   *param_4 = true;
   return;
}
/* VariantIndexedSetGet_Quaternion::set(Variant*, long, Variant const*, bool*, bool*) */void VariantIndexedSetGet_Quaternion::set(Variant *param_1, long param_2, Variant *param_3, bool *param_4, bool *param_5) {
   float fVar1;
   if (3 < (ulong)param_2) {
      *param_5 = true;
      *param_4 = false;
      return;
   }

   if (*(int*)param_3 == 2) {
      fVar1 = (float)*(long*)( param_3 + 8 );
   }
 else {
      if (*(int*)param_3 != 3) {
         *param_5 = false;
         *param_4 = false;
         return;
      }

      fVar1 = (float)*(double*)( param_3 + 8 );
   }

   *(float*)( param_1 + (long)(int)param_2 * 4 + 8 ) = fVar1;
   *param_5 = false;
   *param_4 = true;
   return;
}
/* VariantIndexedSetGet_Vector4::set(Variant*, long, Variant const*, bool*, bool*) */void VariantIndexedSetGet_Vector4::set(Variant *param_1, long param_2, Variant *param_3, bool *param_4, bool *param_5) {
   float fVar1;
   if (3 < (ulong)param_2) {
      *param_5 = true;
      *param_4 = false;
      return;
   }

   if (*(int*)param_3 == 2) {
      fVar1 = (float)*(long*)( param_3 + 8 );
   }
 else {
      if (*(int*)param_3 != 3) {
         *param_5 = false;
         *param_4 = false;
         return;
      }

      fVar1 = (float)*(double*)( param_3 + 8 );
   }

   *(float*)( param_1 + (long)(int)param_2 * 4 + 8 ) = fVar1;
   *param_5 = false;
   *param_4 = true;
   return;
}
/* VariantIndexedSetGet_Vector3::set(Variant*, long, Variant const*, bool*, bool*) */void VariantIndexedSetGet_Vector3::set(Variant *param_1, long param_2, Variant *param_3, bool *param_4, bool *param_5) {
   float fVar1;
   if (2 < (ulong)param_2) {
      *param_5 = true;
      *param_4 = false;
      return;
   }

   if (*(int*)param_3 == 2) {
      fVar1 = (float)*(long*)( param_3 + 8 );
   }
 else {
      if (*(int*)param_3 != 3) {
         *param_5 = false;
         *param_4 = false;
         return;
      }

      fVar1 = (float)*(double*)( param_3 + 8 );
   }

   *(float*)( param_1 + (long)(int)param_2 * 4 + 8 ) = fVar1;
   *param_5 = false;
   *param_4 = true;
   return;
}
/* VariantIndexedSetGet_Vector3i::get(Variant const*, long, Variant*, bool*) */void VariantIndexedSetGet_Vector3i::get(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   if ((ulong)param_2 < 3) {
      if (*(int*)param_3 != 2) {
         if (::Variant::needs_deinit[*(int*)param_3] != '\0') {
            ::Variant::_clear_internal();
         }

         *(undefined4*)param_3 = 2;
      }

      *(long*)( param_3 + 8 ) = (long)*(int*)( param_1 + (long)(int)param_2 * 4 + 8 );
      *param_4 = false;
      return;
   }

   *param_4 = true;
   return;
}
/* VariantIndexedSetGet_Vector4i::get(Variant const*, long, Variant*, bool*) */void VariantIndexedSetGet_Vector4i::get(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   if ((ulong)param_2 < 4) {
      if (*(int*)param_3 != 2) {
         if (::Variant::needs_deinit[*(int*)param_3] != '\0') {
            ::Variant::_clear_internal();
         }

         *(undefined4*)param_3 = 2;
      }

      *(long*)( param_3 + 8 ) = (long)*(int*)( param_1 + (long)(int)param_2 * 4 + 8 );
      *param_4 = false;
      return;
   }

   *param_4 = true;
   return;
}
/* VariantIndexedSetGet_Vector3::get(Variant const*, long, Variant*, bool*) */void VariantIndexedSetGet_Vector3::get(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   if ((ulong)param_2 < 3) {
      if (*(int*)param_3 != 3) {
         if (::Variant::needs_deinit[*(int*)param_3] != '\0') {
            ::Variant::_clear_internal();
         }

         *(undefined4*)param_3 = 3;
      }

      *(double*)( param_3 + 8 ) = (double)*(float*)( param_1 + (long)(int)param_2 * 4 + 8 );
      *param_4 = false;
      return;
   }

   *param_4 = true;
   return;
}
/* VariantIndexedSetGet_Color::get(Variant const*, long, Variant*, bool*) */void VariantIndexedSetGet_Color::get(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   if ((ulong)param_2 < 4) {
      if (*(int*)param_3 != 3) {
         if (::Variant::needs_deinit[*(int*)param_3] != '\0') {
            ::Variant::_clear_internal();
         }

         *(undefined4*)param_3 = 3;
      }

      *(double*)( param_3 + 8 ) = (double)*(float*)( param_1 + (long)(int)param_2 * 4 + 8 );
      *param_4 = false;
      return;
   }

   *param_4 = true;
   return;
}
/* VariantIndexedSetGet_Vector4::get(Variant const*, long, Variant*, bool*) */void VariantIndexedSetGet_Vector4::get(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   if ((ulong)param_2 < 4) {
      if (*(int*)param_3 != 3) {
         if (::Variant::needs_deinit[*(int*)param_3] != '\0') {
            ::Variant::_clear_internal();
         }

         *(undefined4*)param_3 = 3;
      }

      *(double*)( param_3 + 8 ) = (double)*(float*)( param_1 + (long)(int)param_2 * 4 + 8 );
      *param_4 = false;
      return;
   }

   *param_4 = true;
   return;
}
/* VariantIndexedSetGet_Quaternion::get(Variant const*, long, Variant*, bool*) */void VariantIndexedSetGet_Quaternion::get(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   if ((ulong)param_2 < 4) {
      if (*(int*)param_3 != 3) {
         if (::Variant::needs_deinit[*(int*)param_3] != '\0') {
            ::Variant::_clear_internal();
         }

         *(undefined4*)param_3 = 3;
      }

      *(double*)( param_3 + 8 ) = (double)*(float*)( param_1 + (long)(int)param_2 * 4 + 8 );
      *param_4 = false;
      return;
   }

   *param_4 = true;
   return;
}
/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Vector2>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Vector2>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Vector3>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Color>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Color>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Vector4>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Vector4>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<long>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<long>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<double>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<double>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<int>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<float>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<float>::_copy_on_write(void) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<char32_t>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<char32_t>::resize<false>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_001195a8(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
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
/* VariantIndexedSetGet_PackedByteArray::set(Variant*, long, Variant const*, bool*, bool*) */void VariantIndexedSetGet_PackedByteArray::set(Variant *param_1, long param_2, Variant *param_3, bool *param_4, bool *param_5) {
   long lVar1;
   long lVar2;
   bool bVar3;
   bool bVar4;
   Variant VVar5;
   lVar1 = *(long*)( param_1 + 8 );
   if (*(long*)( lVar1 + 0x18 ) == 0) {
      bVar3 = true;
      bVar4 = false;
   }
 else {
      lVar2 = *(long*)( *(long*)( lVar1 + 0x18 ) + -8 );
      if (param_2 < 0) {
         param_2 = param_2 + lVar2;
      }

      bVar3 = (bool)( lVar2 <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
      bVar4 = false;
      if (bVar3 == false) {
         if (*(int*)param_3 == 2) {
            VVar5 = param_3[8];
         }
 else {
            bVar4 = false;
            if (*(int*)param_3 != 3) goto LAB_00119634;
            VVar5 = SUB41((int)*(double*)( param_3 + 8 ), 0);
         }

         CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)( lVar1 + 0x18 ));
         bVar4 = true;
         *(Variant*)( *(long*)( lVar1 + 0x18 ) + param_2 ) = VVar5;
      }

   }

   LAB_00119634:*param_5 = bVar3;
   *param_4 = bVar4;
   return;
}
/* VariantIndexedSetGet_PackedByteArray::validated_set(Variant*, long, Variant const*, bool*) */void VariantIndexedSetGet_PackedByteArray::validated_set(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   bool bVar4;
   lVar1 = *(long*)( param_1 + 8 );
   if (*(long*)( lVar1 + 0x18 ) == 0) {
      bVar4 = true;
   }
 else {
      lVar2 = *(long*)( *(long*)( lVar1 + 0x18 ) + -8 );
      if (param_2 < 0) {
         param_2 = param_2 + lVar2;
      }

      bVar4 = (bool)( lVar2 <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
      if (bVar4 == false) {
         uVar3 = *(undefined8*)( param_3 + 8 );
         CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)( lVar1 + 0x18 ));
         *(char*)( *(long*)( lVar1 + 0x18 ) + param_2 ) = (char)uVar3;
      }

   }

   *param_4 = bVar4;
   return;
}
/* VariantIndexedSetGet_PackedByteArray::ptr_set(void*, long, void const*) */void VariantIndexedSetGet_PackedByteArray::ptr_set(void *param_1, long param_2, void *param_3) {
   undefined8 uVar1;
   long lVar2;
   lVar2 = *(long*)( (long)param_1 + 8 );
   if (param_2 < 0) {
      if (lVar2 != 0) {
         lVar2 = *(long*)( lVar2 + -8 );
         param_2 = param_2 + lVar2;
         if (param_2 < 0) goto LAB_0011972e;
         LAB_00119705:/* WARNING: Load size is inaccurate */uVar1 = *param_3;
         CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)( (long)param_1 + 8 ));
         *(char*)( *(long*)( (long)param_1 + 8 ) + param_2 ) = (char)uVar1;
         return;
      }

   }
 else if (lVar2 != 0) {
      lVar2 = *(long*)( lVar2 + -8 );
      if (param_2 < lVar2) goto LAB_00119705;
      goto LAB_0011972e;
   }

   lVar2 = 0;
   LAB_0011972e:_err_print_index_error("ptr_set", "core/variant/variant_setget.cpp", 0x35c, param_2, lVar2, "index", "v.size()", "", false, false);
   return;
}
/* VariantIndexedSetGet_PackedVector2Array::set(Variant*, long, Variant const*, bool*, bool*) */void VariantIndexedSetGet_PackedVector2Array::set(Variant *param_1, long param_2, Variant *param_3, bool *param_4, bool *param_5) {
   long lVar1;
   long lVar2;
   bool bVar3;
   bool bVar4;
   if (*(int*)param_3 == 5) {
      lVar1 = *(long*)( param_1 + 8 );
      if (*(long*)( lVar1 + 0x18 ) == 0) {
         bVar4 = true;
         bVar3 = false;
      }
 else {
         lVar2 = *(long*)( *(long*)( lVar1 + 0x18 ) + -8 );
         if (param_2 < 0) {
            param_2 = param_2 + lVar2;
         }

         bVar3 = false;
         bVar4 = (bool)( lVar2 <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
         if (bVar4 == false) {
            CowData<Vector2>::_copy_on_write((CowData<Vector2>*)( lVar1 + 0x18 ));
            *(undefined8*)( *(long*)( lVar1 + 0x18 ) + param_2 * 8 ) = *(undefined8*)( param_3 + 8 );
            bVar3 = true;
         }

      }

   }
 else {
      bVar4 = false;
      bVar3 = false;
   }

   *param_5 = bVar4;
   *param_4 = bVar3;
   return;
}
/* VariantIndexedSetGet_PackedVector2Array::validated_set(Variant*, long, Variant const*, bool*) */void VariantIndexedSetGet_PackedVector2Array::validated_set(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   long lVar1;
   long lVar2;
   bool bVar3;
   lVar1 = *(long*)( param_1 + 8 );
   if (*(long*)( lVar1 + 0x18 ) == 0) {
      bVar3 = true;
   }
 else {
      lVar2 = *(long*)( *(long*)( lVar1 + 0x18 ) + -8 );
      if (param_2 < 0) {
         param_2 = param_2 + lVar2;
      }

      bVar3 = (bool)( lVar2 <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
      if (bVar3 == false) {
         CowData<Vector2>::_copy_on_write((CowData<Vector2>*)( lVar1 + 0x18 ));
         *(undefined8*)( *(long*)( lVar1 + 0x18 ) + param_2 * 8 ) = *(undefined8*)( param_3 + 8 );
      }

   }

   *param_4 = bVar3;
   return;
}
/* VariantIndexedSetGet_PackedVector2Array::ptr_set(void*, long, void const*) */void VariantIndexedSetGet_PackedVector2Array::ptr_set(void *param_1, long param_2, void *param_3) {
   long lVar1;
   lVar1 = *(long*)( (long)param_1 + 8 );
   if (param_2 < 0) {
      if (lVar1 != 0) {
         lVar1 = *(long*)( lVar1 + -8 );
         param_2 = param_2 + lVar1;
         if (param_2 < 0) goto LAB_001198f6;
         LAB_001198c8:CowData<Vector2>::_copy_on_write((CowData<Vector2>*)( (long)param_1 + 8 ));
         /* WARNING: Load size is inaccurate */
         *(undefined8*)( *(long*)( (long)param_1 + 8 ) + param_2 * 8 ) = *param_3;
         return;
      }

   }
 else if (lVar1 != 0) {
      lVar1 = *(long*)( lVar1 + -8 );
      if (param_2 < lVar1) goto LAB_001198c8;
      goto LAB_001198f6;
   }

   lVar1 = 0;
   LAB_001198f6:_err_print_index_error("ptr_set", "core/variant/variant_setget.cpp", 0x361, param_2, lVar1, "index", "v.size()", "", false, false);
   return;
}
/* VariantIndexedSetGet_PackedVector3Array::set(Variant*, long, Variant const*, bool*, bool*) */void VariantIndexedSetGet_PackedVector3Array::set(Variant *param_1, long param_2, Variant *param_3, bool *param_4, bool *param_5) {
   undefined8 *puVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   bool bVar5;
   if (*(int*)param_3 == 9) {
      lVar2 = *(long*)( param_1 + 8 );
      if (*(long*)( lVar2 + 0x18 ) == 0) {
         bVar5 = true;
         bVar4 = false;
      }
 else {
         lVar3 = *(long*)( *(long*)( lVar2 + 0x18 ) + -8 );
         if (param_2 < 0) {
            param_2 = param_2 + lVar3;
         }

         bVar4 = false;
         bVar5 = (bool)( lVar3 <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
         if (bVar5 == false) {
            CowData<Vector3>::_copy_on_write((CowData<Vector3>*)( lVar2 + 0x18 ));
            puVar1 = (undefined8*)( *(long*)( lVar2 + 0x18 ) + param_2 * 0xc );
            *puVar1 = *(undefined8*)( param_3 + 8 );
            *(undefined4*)( puVar1 + 1 ) = *(undefined4*)( param_3 + 0x10 );
            bVar4 = true;
         }

      }

   }
 else {
      bVar5 = false;
      bVar4 = false;
   }

   *param_5 = bVar5;
   *param_4 = bVar4;
   return;
}
/* VariantIndexedSetGet_PackedVector3Array::validated_set(Variant*, long, Variant const*, bool*) */void VariantIndexedSetGet_PackedVector3Array::validated_set(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   undefined8 *puVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   lVar2 = *(long*)( param_1 + 8 );
   if (*(long*)( lVar2 + 0x18 ) == 0) {
      bVar4 = true;
   }
 else {
      lVar3 = *(long*)( *(long*)( lVar2 + 0x18 ) + -8 );
      if (param_2 < 0) {
         param_2 = param_2 + lVar3;
      }

      bVar4 = (bool)( lVar3 <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
      if (bVar4 == false) {
         CowData<Vector3>::_copy_on_write((CowData<Vector3>*)( lVar2 + 0x18 ));
         puVar1 = (undefined8*)( *(long*)( lVar2 + 0x18 ) + param_2 * 0xc );
         *puVar1 = *(undefined8*)( param_3 + 8 );
         *(undefined4*)( puVar1 + 1 ) = *(undefined4*)( param_3 + 0x10 );
      }

   }

   *param_4 = bVar4;
   return;
}
/* VariantIndexedSetGet_PackedVector3Array::ptr_set(void*, long, void const*) */void VariantIndexedSetGet_PackedVector3Array::ptr_set(void *param_1, long param_2, void *param_3) {
   undefined8 *puVar1;
   long lVar2;
   lVar2 = *(long*)( (long)param_1 + 8 );
   if (param_2 < 0) {
      if (lVar2 != 0) {
         lVar2 = *(long*)( lVar2 + -8 );
         param_2 = param_2 + lVar2;
         if (param_2 < 0) goto LAB_00119ad6;
         LAB_00119a9c:CowData<Vector3>::_copy_on_write((CowData<Vector3>*)( (long)param_1 + 8 ));
         puVar1 = (undefined8*)( *(long*)( (long)param_1 + 8 ) + param_2 * 0xc );
         /* WARNING: Load size is inaccurate */
         *puVar1 = *param_3;
         *(undefined4*)( puVar1 + 1 ) = *(undefined4*)( (long)param_3 + 8 );
         return;
      }

   }
 else if (lVar2 != 0) {
      lVar2 = *(long*)( lVar2 + -8 );
      if (param_2 < lVar2) goto LAB_00119a9c;
      goto LAB_00119ad6;
   }

   lVar2 = 0;
   LAB_00119ad6:_err_print_index_error("ptr_set", "core/variant/variant_setget.cpp", 0x362, param_2, lVar2, "index", "v.size()", "", false, false);
   return;
}
/* VariantIndexedSetGet_PackedColorArray::set(Variant*, long, Variant const*, bool*, bool*) */void VariantIndexedSetGet_PackedColorArray::set(Variant *param_1, long param_2, Variant *param_3, bool *param_4, bool *param_5) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   bool bVar4;
   undefined8 *puVar5;
   bool bVar6;
   if (*(int*)param_3 == 0x14) {
      lVar1 = *(long*)( param_1 + 8 );
      if (*(long*)( lVar1 + 0x18 ) == 0) {
         bVar6 = true;
         bVar4 = false;
      }
 else {
         lVar2 = *(long*)( *(long*)( lVar1 + 0x18 ) + -8 );
         if (param_2 < 0) {
            param_2 = param_2 + lVar2;
         }

         bVar4 = false;
         bVar6 = (bool)( lVar2 <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
         if (bVar6 == false) {
            CowData<Color>::_copy_on_write((CowData<Color>*)( lVar1 + 0x18 ));
            uVar3 = *(undefined8*)( param_3 + 0x10 );
            puVar5 = (undefined8*)( param_2 * 0x10 + *(long*)( lVar1 + 0x18 ) );
            bVar4 = true;
            *puVar5 = *(undefined8*)( param_3 + 8 );
            puVar5[1] = uVar3;
         }

      }

   }
 else {
      bVar6 = false;
      bVar4 = false;
   }

   *param_5 = bVar6;
   *param_4 = bVar4;
   return;
}
/* VariantIndexedSetGet_PackedColorArray::validated_set(Variant*, long, Variant const*, bool*) */void VariantIndexedSetGet_PackedColorArray::validated_set(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   bool bVar4;
   undefined8 *puVar5;
   lVar1 = *(long*)( param_1 + 8 );
   if (*(long*)( lVar1 + 0x18 ) == 0) {
      bVar4 = true;
   }
 else {
      lVar2 = *(long*)( *(long*)( lVar1 + 0x18 ) + -8 );
      if (param_2 < 0) {
         param_2 = param_2 + lVar2;
      }

      bVar4 = (bool)( lVar2 <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
      if (bVar4 == false) {
         CowData<Color>::_copy_on_write((CowData<Color>*)( lVar1 + 0x18 ));
         uVar3 = *(undefined8*)( param_3 + 0x10 );
         puVar5 = (undefined8*)( param_2 * 0x10 + *(long*)( lVar1 + 0x18 ) );
         *puVar5 = *(undefined8*)( param_3 + 8 );
         puVar5[1] = uVar3;
      }

   }

   *param_4 = bVar4;
   return;
}
/* VariantIndexedSetGet_PackedColorArray::ptr_set(void*, long, void const*) */void VariantIndexedSetGet_PackedColorArray::ptr_set(void *param_1, long param_2, void *param_3) {
   undefined8 uVar1;
   undefined8 *puVar2;
   long lVar3;
   lVar3 = *(long*)( (long)param_1 + 8 );
   if (param_2 < 0) {
      if (lVar3 != 0) {
         lVar3 = *(long*)( lVar3 + -8 );
         param_2 = param_2 + lVar3;
         if (param_2 < 0) goto LAB_00119cae;
         LAB_00119c7c:CowData<Color>::_copy_on_write((CowData<Color>*)( (long)param_1 + 8 ));
         /* WARNING: Load size is inaccurate */
         uVar1 = *(undefined8*)( (long)param_3 + 8 );
         puVar2 = (undefined8*)( param_2 * 0x10 + *(long*)( (long)param_1 + 8 ) );
         *puVar2 = *param_3;
         puVar2[1] = uVar1;
         return;
      }

   }
 else if (lVar3 != 0) {
      lVar3 = *(long*)( lVar3 + -8 );
      if (param_2 < lVar3) goto LAB_00119c7c;
      goto LAB_00119cae;
   }

   lVar3 = 0;
   LAB_00119cae:_err_print_index_error("ptr_set", "core/variant/variant_setget.cpp", 0x364, param_2, lVar3, "index", "v.size()", "", false, false);
   return;
}
/* VariantIndexedSetGet_PackedVector4Array::set(Variant*, long, Variant const*, bool*, bool*) */void VariantIndexedSetGet_PackedVector4Array::set(Variant *param_1, long param_2, Variant *param_3, bool *param_4, bool *param_5) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   bool bVar4;
   undefined8 *puVar5;
   bool bVar6;
   if (*(int*)param_3 == 0xc) {
      lVar1 = *(long*)( param_1 + 8 );
      if (*(long*)( lVar1 + 0x18 ) == 0) {
         bVar6 = true;
         bVar4 = false;
      }
 else {
         lVar2 = *(long*)( *(long*)( lVar1 + 0x18 ) + -8 );
         if (param_2 < 0) {
            param_2 = param_2 + lVar2;
         }

         bVar4 = false;
         bVar6 = (bool)( lVar2 <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
         if (bVar6 == false) {
            CowData<Vector4>::_copy_on_write((CowData<Vector4>*)( lVar1 + 0x18 ));
            uVar3 = *(undefined8*)( param_3 + 0x10 );
            puVar5 = (undefined8*)( param_2 * 0x10 + *(long*)( lVar1 + 0x18 ) );
            bVar4 = true;
            *puVar5 = *(undefined8*)( param_3 + 8 );
            puVar5[1] = uVar3;
         }

      }

   }
 else {
      bVar6 = false;
      bVar4 = false;
   }

   *param_5 = bVar6;
   *param_4 = bVar4;
   return;
}
/* VariantIndexedSetGet_PackedVector4Array::validated_set(Variant*, long, Variant const*, bool*) */void VariantIndexedSetGet_PackedVector4Array::validated_set(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   bool bVar4;
   undefined8 *puVar5;
   lVar1 = *(long*)( param_1 + 8 );
   if (*(long*)( lVar1 + 0x18 ) == 0) {
      bVar4 = true;
   }
 else {
      lVar2 = *(long*)( *(long*)( lVar1 + 0x18 ) + -8 );
      if (param_2 < 0) {
         param_2 = param_2 + lVar2;
      }

      bVar4 = (bool)( lVar2 <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
      if (bVar4 == false) {
         CowData<Vector4>::_copy_on_write((CowData<Vector4>*)( lVar1 + 0x18 ));
         uVar3 = *(undefined8*)( param_3 + 0x10 );
         puVar5 = (undefined8*)( param_2 * 0x10 + *(long*)( lVar1 + 0x18 ) );
         *puVar5 = *(undefined8*)( param_3 + 8 );
         puVar5[1] = uVar3;
      }

   }

   *param_4 = bVar4;
   return;
}
/* VariantIndexedSetGet_PackedVector4Array::ptr_set(void*, long, void const*) */void VariantIndexedSetGet_PackedVector4Array::ptr_set(void *param_1, long param_2, void *param_3) {
   undefined8 uVar1;
   undefined8 *puVar2;
   long lVar3;
   lVar3 = *(long*)( (long)param_1 + 8 );
   if (param_2 < 0) {
      if (lVar3 != 0) {
         lVar3 = *(long*)( lVar3 + -8 );
         param_2 = param_2 + lVar3;
         if (param_2 < 0) goto LAB_00119e8e;
         LAB_00119e5c:CowData<Vector4>::_copy_on_write((CowData<Vector4>*)( (long)param_1 + 8 ));
         /* WARNING: Load size is inaccurate */
         uVar1 = *(undefined8*)( (long)param_3 + 8 );
         puVar2 = (undefined8*)( param_2 * 0x10 + *(long*)( (long)param_1 + 8 ) );
         *puVar2 = *param_3;
         puVar2[1] = uVar1;
         return;
      }

   }
 else if (lVar3 != 0) {
      lVar3 = *(long*)( lVar3 + -8 );
      if (param_2 < lVar3) goto LAB_00119e5c;
      goto LAB_00119e8e;
   }

   lVar3 = 0;
   LAB_00119e8e:_err_print_index_error("ptr_set", "core/variant/variant_setget.cpp", 0x365, param_2, lVar3, "index", "v.size()", "", false, false);
   return;
}
/* VariantIndexedSetGet_PackedInt64Array::set(Variant*, long, Variant const*, bool*, bool*) */void VariantIndexedSetGet_PackedInt64Array::set(Variant *param_1, long param_2, Variant *param_3, bool *param_4, bool *param_5) {
   long lVar1;
   bool bVar2;
   bool bVar3;
   long lVar4;
   lVar1 = *(long*)( param_1 + 8 );
   if (*(long*)( lVar1 + 0x18 ) == 0) {
      bVar2 = true;
      bVar3 = false;
   }
 else {
      lVar4 = *(long*)( *(long*)( lVar1 + 0x18 ) + -8 );
      if (param_2 < 0) {
         param_2 = param_2 + lVar4;
      }

      bVar2 = (bool)( lVar4 <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
      bVar3 = false;
      if (bVar2 == false) {
         if (*(int*)param_3 == 2) {
            lVar4 = *(long*)( param_3 + 8 );
         }
 else {
            bVar3 = false;
            if (*(int*)param_3 != 3) goto LAB_00119f54;
            lVar4 = (long)*(double*)( param_3 + 8 );
         }

         CowData<long>::_copy_on_write((CowData<long>*)( lVar1 + 0x18 ));
         bVar3 = true;
         *(long*)( *(long*)( lVar1 + 0x18 ) + param_2 * 8 ) = lVar4;
      }

   }

   LAB_00119f54:*param_5 = bVar2;
   *param_4 = bVar3;
   return;
}
/* VariantIndexedSetGet_PackedInt64Array::validated_set(Variant*, long, Variant const*, bool*) */void VariantIndexedSetGet_PackedInt64Array::validated_set(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   bool bVar4;
   lVar1 = *(long*)( param_1 + 8 );
   if (*(long*)( lVar1 + 0x18 ) == 0) {
      bVar4 = true;
   }
 else {
      lVar2 = *(long*)( *(long*)( lVar1 + 0x18 ) + -8 );
      if (param_2 < 0) {
         param_2 = param_2 + lVar2;
      }

      bVar4 = (bool)( lVar2 <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
      if (bVar4 == false) {
         uVar3 = *(undefined8*)( param_3 + 8 );
         CowData<long>::_copy_on_write((CowData<long>*)( lVar1 + 0x18 ));
         *(undefined8*)( *(long*)( lVar1 + 0x18 ) + param_2 * 8 ) = uVar3;
      }

   }

   *param_4 = bVar4;
   return;
}
/* VariantIndexedSetGet_PackedInt64Array::ptr_set(void*, long, void const*) */void VariantIndexedSetGet_PackedInt64Array::ptr_set(void *param_1, long param_2, void *param_3) {
   undefined8 uVar1;
   long lVar2;
   lVar2 = *(long*)( (long)param_1 + 8 );
   if (param_2 < 0) {
      if (lVar2 != 0) {
         lVar2 = *(long*)( lVar2 + -8 );
         param_2 = param_2 + lVar2;
         if (param_2 < 0) goto LAB_0011a04e;
         LAB_0011a025:/* WARNING: Load size is inaccurate */uVar1 = *param_3;
         CowData<long>::_copy_on_write((CowData<long>*)( (long)param_1 + 8 ));
         *(undefined8*)( *(long*)( (long)param_1 + 8 ) + param_2 * 8 ) = uVar1;
         return;
      }

   }
 else if (lVar2 != 0) {
      lVar2 = *(long*)( lVar2 + -8 );
      if (param_2 < lVar2) goto LAB_0011a025;
      goto LAB_0011a04e;
   }

   lVar2 = 0;
   LAB_0011a04e:_err_print_index_error("ptr_set", "core/variant/variant_setget.cpp", 0x35e, param_2, lVar2, "index", "v.size()", "", false, false);
   return;
}
/* VariantIndexedSetGet_PackedFloat64Array::set(Variant*, long, Variant const*, bool*, bool*) */void VariantIndexedSetGet_PackedFloat64Array::set(Variant *param_1, long param_2, Variant *param_3, bool *param_4, bool *param_5) {
   long lVar1;
   long lVar2;
   bool bVar3;
   bool bVar4;
   double dVar5;
   lVar1 = *(long*)( param_1 + 8 );
   if (*(long*)( lVar1 + 0x18 ) == 0) {
      bVar3 = true;
      bVar4 = false;
   }
 else {
      lVar2 = *(long*)( *(long*)( lVar1 + 0x18 ) + -8 );
      if (param_2 < 0) {
         param_2 = param_2 + lVar2;
      }

      bVar3 = (bool)( lVar2 <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
      bVar4 = false;
      if (bVar3 == false) {
         if (*(int*)param_3 == 2) {
            dVar5 = (double)*(long*)( param_3 + 8 );
         }
 else {
            bVar4 = false;
            if (*(int*)param_3 != 3) goto LAB_0011a11c;
            dVar5 = *(double*)( param_3 + 8 );
         }

         CowData<double>::_copy_on_write((CowData<double>*)( lVar1 + 0x18 ));
         bVar4 = true;
         *(double*)( *(long*)( lVar1 + 0x18 ) + param_2 * 8 ) = dVar5;
      }

   }

   LAB_0011a11c:*param_5 = bVar3;
   *param_4 = bVar4;
   return;
}
/* VariantIndexedSetGet_PackedFloat64Array::validated_set(Variant*, long, Variant const*, bool*) */void VariantIndexedSetGet_PackedFloat64Array::validated_set(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   undefined8 uVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   lVar2 = *(long*)( param_1 + 8 );
   if (*(long*)( lVar2 + 0x18 ) == 0) {
      bVar4 = true;
   }
 else {
      lVar3 = *(long*)( *(long*)( lVar2 + 0x18 ) + -8 );
      if (param_2 < 0) {
         param_2 = param_2 + lVar3;
      }

      bVar4 = (bool)( lVar3 <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
      if (bVar4 == false) {
         uVar1 = *(undefined8*)( param_3 + 8 );
         CowData<double>::_copy_on_write((CowData<double>*)( lVar2 + 0x18 ));
         *(undefined8*)( *(long*)( lVar2 + 0x18 ) + param_2 * 8 ) = uVar1;
      }

   }

   *param_4 = bVar4;
   return;
}
/* VariantIndexedSetGet_PackedFloat64Array::ptr_set(void*, long, void const*) */void VariantIndexedSetGet_PackedFloat64Array::ptr_set(void *param_1, long param_2, void *param_3) {
   undefined8 uVar1;
   long lVar2;
   lVar2 = *(long*)( (long)param_1 + 8 );
   if (param_2 < 0) {
      if (lVar2 != 0) {
         lVar2 = *(long*)( lVar2 + -8 );
         param_2 = param_2 + lVar2;
         if (param_2 < 0) goto LAB_0011a246;
         LAB_0011a20b:/* WARNING: Load size is inaccurate */uVar1 = *param_3;
         CowData<double>::_copy_on_write((CowData<double>*)( (long)param_1 + 8 ));
         *(undefined8*)( *(long*)( (long)param_1 + 8 ) + param_2 * 8 ) = uVar1;
         return;
      }

   }
 else if (lVar2 != 0) {
      lVar2 = *(long*)( lVar2 + -8 );
      if (param_2 < lVar2) goto LAB_0011a20b;
      goto LAB_0011a246;
   }

   lVar2 = 0;
   LAB_0011a246:_err_print_index_error("ptr_set", "core/variant/variant_setget.cpp", 0x360, param_2, lVar2, "index", "v.size()", "", false, false);
   return;
}
/* VariantIndexedSetGet_PackedInt32Array::set(Variant*, long, Variant const*, bool*, bool*) */void VariantIndexedSetGet_PackedInt32Array::set(Variant *param_1, long param_2, Variant *param_3, bool *param_4, bool *param_5) {
   long lVar1;
   long lVar2;
   bool bVar3;
   bool bVar4;
   int iVar5;
   lVar1 = *(long*)( param_1 + 8 );
   if (*(long*)( lVar1 + 0x18 ) == 0) {
      bVar3 = true;
      bVar4 = false;
   }
 else {
      lVar2 = *(long*)( *(long*)( lVar1 + 0x18 ) + -8 );
      if (param_2 < 0) {
         param_2 = param_2 + lVar2;
      }

      bVar3 = (bool)( lVar2 <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
      bVar4 = false;
      if (bVar3 == false) {
         if (*(int*)param_3 == 2) {
            iVar5 = *(int*)( param_3 + 8 );
         }
 else {
            bVar4 = false;
            if (*(int*)param_3 != 3) goto LAB_0011a314;
            iVar5 = (int)*(double*)( param_3 + 8 );
         }

         CowData<int>::_copy_on_write((CowData<int>*)( lVar1 + 0x18 ));
         bVar4 = true;
         *(int*)( *(long*)( lVar1 + 0x18 ) + param_2 * 4 ) = iVar5;
      }

   }

   LAB_0011a314:*param_5 = bVar3;
   *param_4 = bVar4;
   return;
}
/* VariantIndexedSetGet_PackedInt32Array::validated_set(Variant*, long, Variant const*, bool*) */void VariantIndexedSetGet_PackedInt32Array::validated_set(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   bool bVar4;
   lVar1 = *(long*)( param_1 + 8 );
   if (*(long*)( lVar1 + 0x18 ) == 0) {
      bVar4 = true;
   }
 else {
      lVar2 = *(long*)( *(long*)( lVar1 + 0x18 ) + -8 );
      if (param_2 < 0) {
         param_2 = param_2 + lVar2;
      }

      bVar4 = (bool)( lVar2 <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
      if (bVar4 == false) {
         uVar3 = *(undefined8*)( param_3 + 8 );
         CowData<int>::_copy_on_write((CowData<int>*)( lVar1 + 0x18 ));
         *(int*)( *(long*)( lVar1 + 0x18 ) + param_2 * 4 ) = (int)uVar3;
      }

   }

   *param_4 = bVar4;
   return;
}
/* VariantIndexedSetGet_PackedInt32Array::ptr_set(void*, long, void const*) */void VariantIndexedSetGet_PackedInt32Array::ptr_set(void *param_1, long param_2, void *param_3) {
   undefined8 uVar1;
   long lVar2;
   lVar2 = *(long*)( (long)param_1 + 8 );
   if (param_2 < 0) {
      if (lVar2 != 0) {
         lVar2 = *(long*)( lVar2 + -8 );
         param_2 = param_2 + lVar2;
         if (param_2 < 0) goto LAB_0011a40e;
         LAB_0011a3e5:/* WARNING: Load size is inaccurate */uVar1 = *param_3;
         CowData<int>::_copy_on_write((CowData<int>*)( (long)param_1 + 8 ));
         *(int*)( *(long*)( (long)param_1 + 8 ) + param_2 * 4 ) = (int)uVar1;
         return;
      }

   }
 else if (lVar2 != 0) {
      lVar2 = *(long*)( lVar2 + -8 );
      if (param_2 < lVar2) goto LAB_0011a3e5;
      goto LAB_0011a40e;
   }

   lVar2 = 0;
   LAB_0011a40e:_err_print_index_error("ptr_set", "core/variant/variant_setget.cpp", 0x35d, param_2, lVar2, "index", "v.size()", "", false, false);
   return;
}
/* VariantIndexedSetGet_PackedFloat32Array::set(Variant*, long, Variant const*, bool*, bool*) */void VariantIndexedSetGet_PackedFloat32Array::set(Variant *param_1, long param_2, Variant *param_3, bool *param_4, bool *param_5) {
   long lVar1;
   long lVar2;
   bool bVar3;
   bool bVar4;
   float fVar5;
   lVar1 = *(long*)( param_1 + 8 );
   if (*(long*)( lVar1 + 0x18 ) == 0) {
      bVar3 = true;
      bVar4 = false;
   }
 else {
      lVar2 = *(long*)( *(long*)( lVar1 + 0x18 ) + -8 );
      if (param_2 < 0) {
         param_2 = param_2 + lVar2;
      }

      bVar3 = (bool)( lVar2 <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
      bVar4 = false;
      if (bVar3 == false) {
         if (*(int*)param_3 == 2) {
            fVar5 = (float)*(long*)( param_3 + 8 );
         }
 else {
            bVar4 = false;
            if (*(int*)param_3 != 3) goto LAB_0011a4e0;
            fVar5 = (float)*(double*)( param_3 + 8 );
         }

         CowData<float>::_copy_on_write((CowData<float>*)( lVar1 + 0x18 ));
         bVar4 = true;
         *(float*)( *(long*)( lVar1 + 0x18 ) + param_2 * 4 ) = fVar5;
      }

   }

   LAB_0011a4e0:*param_5 = bVar3;
   *param_4 = bVar4;
   return;
}
/* VariantIndexedSetGet_PackedFloat32Array::validated_set(Variant*, long, Variant const*, bool*) */void VariantIndexedSetGet_PackedFloat32Array::validated_set(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   double dVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   lVar2 = *(long*)( param_1 + 8 );
   if (*(long*)( lVar2 + 0x18 ) == 0) {
      bVar4 = true;
   }
 else {
      lVar3 = *(long*)( *(long*)( lVar2 + 0x18 ) + -8 );
      if (param_2 < 0) {
         param_2 = param_2 + lVar3;
      }

      bVar4 = (bool)( lVar3 <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
      if (bVar4 == false) {
         dVar1 = *(double*)( param_3 + 8 );
         CowData<float>::_copy_on_write((CowData<float>*)( lVar2 + 0x18 ));
         *(float*)( *(long*)( lVar2 + 0x18 ) + param_2 * 4 ) = (float)dVar1;
      }

   }

   *param_4 = bVar4;
   return;
}
/* VariantIndexedSetGet_PackedFloat32Array::ptr_set(void*, long, void const*) */void VariantIndexedSetGet_PackedFloat32Array::ptr_set(void *param_1, long param_2, void *param_3) {
   double dVar1;
   long lVar2;
   lVar2 = *(long*)( (long)param_1 + 8 );
   if (param_2 < 0) {
      if (lVar2 != 0) {
         lVar2 = *(long*)( lVar2 + -8 );
         param_2 = param_2 + lVar2;
         if (param_2 < 0) goto LAB_0011a62e;
         LAB_0011a5eb:/* WARNING: Load size is inaccurate */dVar1 = *param_3;
         CowData<float>::_copy_on_write((CowData<float>*)( (long)param_1 + 8 ));
         *(float*)( *(long*)( (long)param_1 + 8 ) + param_2 * 4 ) = (float)dVar1;
         return;
      }

   }
 else if (lVar2 != 0) {
      lVar2 = *(long*)( lVar2 + -8 );
      if (param_2 < lVar2) goto LAB_0011a5eb;
      goto LAB_0011a62e;
   }

   lVar2 = 0;
   LAB_0011a62e:_err_print_index_error("ptr_set", "core/variant/variant_setget.cpp", 0x35f, param_2, lVar2, "index", "v.size()", "", false, false);
   return;
}
/* VariantIndexedSetGet_PackedStringArray::get(Variant const*, long, Variant*, bool*) */void VariantIndexedSetGet_PackedStringArray::get(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   CowData *pCVar1;
   code *pcVar2;
   long lVar3;
   bool bVar4;
   long lVar5;
   lVar3 = *(long*)( *(long*)( param_1 + 8 ) + 0x18 );
   if (lVar3 == 0) {
      bVar4 = true;
   }
 else {
      if (param_2 < 0) {
         param_2 = param_2 + *(long*)( lVar3 + -8 );
      }

      bVar4 = (bool)( *(long*)( lVar3 + -8 ) <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
      if (bVar4 == false) {
         if (*(int*)param_3 != 4) {
            if (::Variant::needs_deinit[*(int*)param_3] != '\0') {
               ::Variant::_clear_internal();
            }

            *(undefined8*)( param_3 + 8 ) = 0;
            *(undefined4*)param_3 = 4;
            lVar3 = *(long*)( *(long*)( param_1 + 8 ) + 0x18 );
            if (lVar3 == 0) {
               lVar5 = 0;
               LAB_0011a733:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, param_2, lVar5, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            lVar5 = *(long*)( lVar3 + -8 );
            if (lVar5 <= param_2) goto LAB_0011a733;
         }

         pCVar1 = (CowData*)( lVar3 + param_2 * 8 );
         if (*(long*)( param_3 + 8 ) != *(long*)pCVar1) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( param_3 + 8 ), pCVar1);
         }

      }

   }

   *param_4 = bVar4;
   return;
}
/* VariantKeyedSetGetObject::get(Variant const*, Variant const*, Variant*, bool*) */void VariantKeyedSetGetObject::get(Variant *param_1, Variant *param_2, Variant *param_3, bool *param_4) {
   int iVar1;
   long *plVar2;
   long in_FS_OFFSET;
   undefined4 local_38[2];
   undefined1 local_30[16];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar2 = (long*)::Variant::get_validated_object();
   if (plVar2 == (long*)0x0) {
      iVar1 = *(int*)param_3;
      *param_4 = false;
      local_30 = (undefined1[16])0x0;
      if (::Variant::needs_deinit[iVar1] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_3 = 0;
      *(undefined8*)( param_3 + 8 ) = local_30._0_8_;
      *(undefined8*)( param_3 + 0x10 ) = local_30._8_8_;
   }
 else {
      ( **(code**)( *plVar2 + 0x80 ) )(local_38, plVar2, param_2, param_4);
      if (::Variant::needs_deinit[*(int*)param_3] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_3 = local_38[0];
      *(undefined8*)( param_3 + 8 ) = local_30._0_8_;
      *(undefined8*)( param_3 + 0x10 ) = local_30._8_8_;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantIndexedSetGet_PackedStringArray::ptr_get(void const*, long, void*) */void VariantIndexedSetGet_PackedStringArray::ptr_get(void *param_1, long param_2, void *param_3) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   long in_FS_OFFSET;
   bool bVar5;
   long local_18;
   long local_10;
   lVar3 = *(long*)( (long)param_1 + 8 );
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 < 0) {
      if (lVar3 == 0) goto LAB_0011a940;
      lVar4 = *(long*)( lVar3 + -8 );
      param_2 = param_2 + lVar4;
      if (-1 < param_2) goto LAB_0011a8b2;
      LAB_0011a943:_err_print_index_error("ptr_get", "core/variant/variant_setget.cpp", 0x363, param_2, lVar4, "index", "v.size()", "", false, false);
   }
 else {
      if (lVar3 == 0) {
         LAB_0011a940:lVar4 = 0;
         goto LAB_0011a943;
      }

      lVar4 = *(long*)( lVar3 + -8 );
      if (lVar4 <= param_2) goto LAB_0011a943;
      LAB_0011a8b2:plVar2 = (long*)( lVar3 + param_2 * 8 );
      local_18 = 0;
      lVar3 = *plVar2;
      if (lVar3 == 0) {
         /* WARNING: Load size is inaccurate */
         if (*param_3 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)param_3, (CowData*)&local_18);
         }

      }
 else {
         plVar1 = (long*)( lVar3 + -0x10 );
         do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0011a8ee;
            LOCK();
            lVar4 = *plVar1;
            bVar5 = lVar3 == lVar4;
            if (bVar5) {
               *plVar1 = lVar3 + 1;
               lVar4 = lVar3;
            }

            UNLOCK();
         }
 while ( !bVar5 );
         if (lVar4 != -1) {
            local_18 = *plVar2;
         }

         LAB_0011a8ee:lVar3 = local_18;
         /* WARNING: Load size is inaccurate */
         if (local_18 != *param_3) {
            CowData<char32_t>::_ref((CowData<char32_t>*)param_3, (CowData*)&local_18);
         }

         if (lVar3 != 0) {
            LOCK();
            plVar2 = (long*)( lVar3 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  Memory::free_static((void*)( local_18 + -0x10 ), false);
                  return;
               }

               goto LAB_0011a9c0;
            }

         }

      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0011a9c0:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* VariantIndexedSetGet_String::ptr_get(void const*, long, void*) */void VariantIndexedSetGet_String::ptr_get(void *param_1, long param_2, void *param_3) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   int iVar4;
   long lVar5;
   int *piVar6;
   long lVar7;
   long in_FS_OFFSET;
   int local_44;
   long local_40;
   int *local_38;
   ulong local_30;
   long local_20;
   /* WARNING: Load size is inaccurate */
   lVar2 = *param_1;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 < 0) {
      if (lVar2 != 0) {
         lVar5 = *(long*)( lVar2 + -8 );
         iVar4 = (int)lVar5;
         if (iVar4 != 0) {
            param_2 = param_2 + ( iVar4 + -1 );
            if (param_2 < 0) goto LAB_0011ab2f;
            LAB_0011aa25:if (param_2 == lVar5) {
               piVar6 = (int*)&String::_null;
            }
 else {
               if (lVar5 <= param_2) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, param_2, lVar5, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               piVar6 = (int*)( lVar2 + param_2 * 4 );
            }

            local_44 = *piVar6;
            local_38 = &local_44;
            local_40 = 0;
            local_30 = ( ulong )(local_44 != 0);
            String::parse_utf32((StrRange*)&local_40);
            /* WARNING: Load size is inaccurate */
            if (*param_3 != local_40) {
               CowData<char32_t>::_ref((CowData<char32_t>*)param_3, (CowData*)&local_40);
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

            goto LAB_0011aab0;
         }

      }

      LAB_0011aadf:lVar7 = 0;
   }
 else {
      if (lVar2 == 0) goto LAB_0011aadf;
      lVar5 = *(long*)( lVar2 + -8 );
      lVar7 = 0;
      iVar4 = (int)lVar5;
      if (iVar4 != 0) {
         if (param_2 < iVar4 + -1) goto LAB_0011aa25;
         LAB_0011ab2f:lVar7 = (long)( iVar4 + -1 );
      }

   }

   _err_print_index_error("ptr_get", "core/variant/variant_setget.cpp", 0x30d, param_2, lVar7, "index", "v.length()", "", false, false);
   LAB_0011aab0:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VariantIndexedSetGet_String::get(Variant const*, long, Variant*, bool*) */void VariantIndexedSetGet_String::get(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   long *plVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   int *piVar5;
   long lVar6;
   bool bVar7;
   long in_FS_OFFSET;
   int local_64;
   long local_60;
   int *local_58;
   ulong local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = *(long*)( param_1 + 8 );
   if (( lVar2 == 0 ) || ( lVar3 = *(long*)( lVar2 + -8 ) ),(int)lVar3 == 0) {
      bVar7 = true;
   }
 else {
      lVar6 = (long)( (int)lVar3 + -1 );
      if (param_2 < 0) {
         param_2 = param_2 + lVar6;
      }

      bVar7 = (bool)( lVar6 <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
      if (bVar7 == false) {
         if (param_2 == lVar3) {
            piVar5 = (int*)&String::_null;
         }
 else {
            if (lVar3 <= param_2) {
               _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, param_2, lVar3, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar4 = (code*)invalidInstructionException();
               ( *pcVar4 )();
            }

            piVar5 = (int*)( lVar2 + param_2 * 4 );
         }

         local_64 = *piVar5;
         local_58 = &local_64;
         local_60 = 0;
         local_50 = ( ulong )(local_64 != 0);
         String::parse_utf32((StrRange*)&local_60);
         ::Variant::Variant((Variant*)local_48, (String*)&local_60);
         if (::Variant::needs_deinit[*(int*)param_3] != '\0') {
            ::Variant::_clear_internal();
         }

         lVar2 = local_60;
         *(undefined4*)param_3 = local_48[0];
         *(undefined8*)( param_3 + 8 ) = local_40;
         *(undefined8*)( param_3 + 0x10 ) = uStack_38;
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

   }

   *param_4 = bVar7;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<long, void>::get_class_info() */GetTypeInfo<long,void> * __thiscall
GetTypeInfo<long,void>::get_class_info(GetTypeInfo<long,void> *this){
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

         goto joined_r0x0011ae8c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0011ae8c:local_58 = lVar2;
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
/* GetTypeInfo<double, void>::get_class_info() */GetTypeInfo<double,void> * __thiscall
GetTypeInfo<double,void>::get_class_info(GetTypeInfo<double,void> *this){
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
   *(undefined4*)this = 3;
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

         goto joined_r0x0011b00c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0011b00c:local_58 = lVar2;
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
/* Variant::Pools::BucketMedium* PagedAllocator<Variant::Pools::BucketMedium, true,
   4096u>::alloc<>() */BucketMedium * __thiscall
PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
          (PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *this){
   PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *pPVar1;
   PagedAllocator<Variant::Pools::BucketMedium,true,4096u> PVar2;
   long lVar3;
   BucketMedium *pBVar4;
   long lVar5;
   long *plVar6;
   uint uVar7;
   int iVar8;
   undefined8 uVar9;
   long lVar10;
   long *plVar11;
   long *plVar12;
   long lVar13;
   long *plVar14;
   long lVar15;
   long in_FS_OFFSET;
   pPVar1 = this + 0x24;
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   while (true) {
      LOCK();
      PVar2 = *pPVar1;
      if (PVar2 == (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x0) {
         *pPVar1 = (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x1;
      }

      UNLOCK();
      if (PVar2 == (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x0) break;
      do {} while ( *pPVar1 != (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x0 );
   }
;
   iVar8 = *(int*)( this + 0x14 );
   if (iVar8 == 0) {
      uVar7 = *(uint*)( this + 0x10 ) + 1;
      lVar13 = ( ulong ) * (uint*)( this + 0x10 ) * 8;
      *(uint*)( this + 0x10 ) = uVar7;
      uVar9 = Memory::realloc_static(*(void**)this, (ulong)uVar7 * 8, false);
      *(undefined8*)this = uVar9;
      uVar9 = Memory::realloc_static(*(void**)( this + 8 ), ( ulong ) * (uint*)( this + 0x10 ) << 3, false);
      lVar5 = *(long*)this;
      *(undefined8*)( this + 8 ) = uVar9;
      uVar9 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x20 ) * 0x30, false);
      uVar7 = *(uint*)( this + 0x20 );
      *(undefined8*)( lVar5 + lVar13 ) = uVar9;
      lVar5 = *(long*)( this + 8 );
      uVar9 = Memory::alloc_static((ulong)uVar7 << 3, false);
      *(undefined8*)( lVar5 + lVar13 ) = uVar9;
      uVar7 = *(uint*)( this + 0x20 );
      if (uVar7 == 0) {
         plVar14 = *(long**)( this + 8 );
      }
 else {
         plVar14 = *(long**)( this + 8 );
         lVar5 = *(long*)this;
         plVar6 = (long*)*plVar14;
         lVar10 = 0;
         plVar11 = plVar6;
         do {
            plVar12 = plVar11 + 1;
            lVar15 = *(long*)( lVar5 + lVar13 ) + lVar10;
            lVar10 = lVar10 + 0x30;
            *plVar11 = lVar15;
            plVar11 = plVar12;
         }
 while ( plVar6 + uVar7 != plVar12 );
      }

      iVar8 = uVar7 + *(int*)( this + 0x14 );
   }
 else {
      plVar14 = *(long**)( this + 8 );
   }

   uVar7 = iVar8 - 1;
   *(uint*)( this + 0x14 ) = uVar7;
   pBVar4 = *(BucketMedium**)( plVar14[uVar7 >> ( ( byte ) * (undefined4*)( this + 0x18 ) & 0x1f )] + ( ulong )(uVar7 & *(uint*)( this + 0x1c )) * 8 );
   this[0x24] = (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x0;
   if (lVar3 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pBVar4;
}
/* VariantSetGet_Transform3D_basis::get(Variant const*, Variant*) */void VariantSetGet_Transform3D_basis::get(Variant *param_1, Variant *param_2) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   uint uVar4;
   BucketMedium *pBVar5;
   if (*(int*)param_2 != 0x11) {
      if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
         ::Variant::_clear_internal();
      }

      *(undefined4*)param_2 = 0;
      pBVar5 = PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>((PagedAllocator<Variant::Pools::BucketMedium,true,4096u>*)&::Variant::Pools::_bucket_medium);
      uVar4 = _LC96;
      *(BucketMedium**)( param_2 + 8 ) = pBVar5;
      *(undefined4*)( pBVar5 + 0x20 ) = 0x3f800000;
      *(undefined1(*) [16])pBVar5 = ZEXT416(uVar4);
      *(undefined1(*) [16])( pBVar5 + 0x10 ) = ZEXT416(uVar4);
      *(undefined4*)param_2 = 0x11;
   }

   puVar1 = *(undefined8**)( param_1 + 8 );
   puVar2 = *(undefined8**)( param_2 + 8 );
   uVar3 = puVar1[1];
   *puVar2 = *puVar1;
   puVar2[1] = uVar3;
   uVar3 = puVar1[3];
   puVar2[2] = puVar1[2];
   puVar2[3] = uVar3;
   *(undefined4*)( puVar2 + 4 ) = *(undefined4*)( puVar1 + 4 );
   return;
}
/* List<StringName, DefaultAllocator>::~List() */void List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   plVar4 = *(long**)this;
   if (plVar4 == (long*)0x0) {
      return;
   }

   do {
      plVar1 = (long*)*plVar4;
      if (plVar1 == (long*)0x0) {
         if ((int)plVar4[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if ((long*)plVar1[3] == plVar4) {
         lVar3 = plVar1[1];
         lVar2 = plVar1[2];
         *plVar4 = lVar3;
         if (plVar1 == (long*)plVar4[1]) {
            plVar4[1] = lVar2;
         }

         if (lVar2 != 0) {
            *(long*)( lVar2 + 8 ) = lVar3;
            lVar3 = plVar1[1];
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x10 ) = lVar2;
         }

         if (( StringName::configured != '\0' ) && ( *plVar1 != 0 )) {
            StringName::unref();
         }

         Memory::free_static(plVar1, false);
         *(int*)( plVar4 + 2 ) = (int)plVar4[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar4 = *(long**)this;
   }
 while ( (int)plVar4[2] != 0 );
   Memory::free_static(plVar4, false);
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
/* CowData<char32_t>::_realloc(long) */undefined8 CowData<char32_t>::_realloc(CowData<char32_t> *this, long param_1) {
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
/* VariantIndexedSetGet_String::ptr_set(void*, long, void const*) */void VariantIndexedSetGet_String::ptr_set(void *param_1, long param_2, void *param_3) {
   int iVar1;
   undefined4 uVar2;
   long lVar3;
   long lVar4;
   /* WARNING: Load size is inaccurate */
   lVar3 = *param_1;
   if (param_2 < 0) {
      if (lVar3 != 0) {
         lVar3 = *(long*)( lVar3 + -8 );
         iVar1 = (int)lVar3;
         if (iVar1 != 0) {
            param_2 = param_2 + ( iVar1 + -1 );
            if (-1 < param_2) goto LAB_0011b7f7;
            goto LAB_0011b907;
         }

      }

   }
 else if (lVar3 != 0) {
      lVar3 = *(long*)( lVar3 + -8 );
      lVar4 = 0;
      iVar1 = (int)lVar3;
      if (iVar1 == 0) goto LAB_0011b8b2;
      if (param_2 < iVar1 + -1) {
         LAB_0011b7f7:/* WARNING: Load size is inaccurate */if (( *param_3 == 0 ) || ( *(uint*)( *param_3 + -8 ) < 2 )) {
            if (param_2 < lVar3) {
               CowData<char32_t>::_copy_on_write((CowData<char32_t>*)param_1);
               /* WARNING: Load size is inaccurate */
               lVar3 = *param_1;
               if (lVar3 == 0) {
                  lVar4 = -1;
               }
 else {
                  lVar4 = *(long*)( lVar3 + -8 ) + -1;
                  if (param_2 < lVar4) {
                     memmove((void*)( lVar3 + param_2 * 4 ), (void*)( lVar3 + 4 + param_2 * 4 ), ( lVar4 - param_2 ) * 4);
                  }

               }

               CowData<char32_t>::resize<false>((CowData<char32_t>*)param_1, lVar4);
               return;
            }

            _err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, param_2, lVar3, "p_index", "size()", "", false, false);
         }
 else {
            uVar2 = String::unicode_at((int)param_3);
            /* WARNING: Load size is inaccurate */
            if (*param_1 == 0) {
               lVar3 = 0;
            }
 else {
               lVar3 = *(long*)( *param_1 + -8 );
               if (param_2 < lVar3) {
                  CowData<char32_t>::_copy_on_write((CowData<char32_t>*)param_1);
                  /* WARNING: Load size is inaccurate */
                  *(undefined4*)( *param_1 + param_2 * 4 ) = uVar2;
                  return;
               }

            }

            _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, param_2, lVar3, "p_index", "size()", "", false, false);
         }

         return;
      }

      LAB_0011b907:lVar4 = (long)( iVar1 + -1 );
      goto LAB_0011b8b2;
   }

   lVar4 = 0;
   LAB_0011b8b2:_err_print_index_error("ptr_set", "core/variant/variant_setget.cpp", 0x342, param_2, lVar4, "index", "v.length()", "", false, false);
   return;
}
/* VariantIndexedSetGet_String::validated_set(Variant*, long, Variant const*, bool*) */void VariantIndexedSetGet_String::validated_set(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   undefined4 uVar1;
   long lVar2;
   undefined4 *puVar3;
   code *pcVar4;
   long lVar5;
   bool bVar6;
   if (( *(long*)( param_1 + 8 ) == 0 ) || ( lVar2 = *(long*)( *(long*)( param_1 + 8 ) + -8 ) ),(int)lVar2 == 0) {
      bVar6 = true;
   }
 else {
      lVar5 = (long)( (int)lVar2 + -1 );
      if (param_2 < 0) {
         param_2 = param_2 + lVar5;
      }

      bVar6 = (bool)( lVar5 <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
      if (bVar6 == false) {
         puVar3 = *(undefined4**)( param_3 + 8 );
         if (( puVar3 == (undefined4*)0x0 ) || ( lVar5 = *(long*)( puVar3 + -2 ) ),(uint)lVar5 < 2) {
            if (param_2 < lVar2) {
               CowData<char32_t>::_copy_on_write((CowData<char32_t>*)( param_1 + 8 ));
               lVar2 = *(long*)( param_1 + 8 );
               if (lVar2 == 0) {
                  lVar5 = -1;
               }
 else {
                  lVar5 = *(long*)( lVar2 + -8 ) + -1;
                  if (param_2 < lVar5) {
                     memmove((void*)( lVar2 + param_2 * 4 ), (void*)( lVar2 + 4 + param_2 * 4 ), ( lVar5 - param_2 ) * 4);
                  }

               }

               CowData<char32_t>::resize<false>((CowData<char32_t>*)( param_1 + 8 ), lVar5);
               *param_4 = false;
               return;
            }

            _err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, param_2, lVar2, "p_index", "size()", "", false, false);
         }
 else {
            if (lVar5 < 1) {
               _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar5, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar4 = (code*)invalidInstructionException();
               ( *pcVar4 )();
            }

            uVar1 = *puVar3;
            if (param_2 < lVar2) {
               CowData<char32_t>::_copy_on_write((CowData<char32_t>*)( param_1 + 8 ));
               *(undefined4*)( *(long*)( param_1 + 8 ) + param_2 * 4 ) = uVar1;
               *param_4 = false;
               return;
            }

            _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, param_2, lVar2, "p_index", "size()", "", false, false);
         }

      }

   }

   *param_4 = bVar6;
   return;
}
/* VariantIndexedSetGet_String::set(Variant*, long, Variant const*, bool*, bool*) */void VariantIndexedSetGet_String::set(Variant *param_1, long param_2, Variant *param_3, bool *param_4, bool *param_5) {
   undefined4 uVar1;
   long lVar2;
   undefined4 *puVar3;
   code *pcVar4;
   bool bVar5;
   long lVar6;
   bool bVar7;
   if (*(int*)param_3 == 4) {
      if (( *(long*)( param_1 + 8 ) == 0 ) || ( lVar2 = *(long*)( *(long*)( param_1 + 8 ) + -8 ) ),(int)lVar2 == 0) {
         bVar7 = true;
         bVar5 = false;
      }
 else {
         lVar6 = (long)( (int)lVar2 + -1 );
         if (param_2 < 0) {
            param_2 = param_2 + lVar6;
         }

         bVar7 = (bool)( lVar6 <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
         if (bVar7 == false) {
            puVar3 = *(undefined4**)( param_3 + 8 );
            if (( puVar3 == (undefined4*)0x0 ) || ( lVar6 = *(long*)( puVar3 + -2 ) ),(uint)lVar6 < 2) {
               if (param_2 < lVar2) {
                  CowData<char32_t>::_copy_on_write((CowData<char32_t>*)( param_1 + 8 ));
                  lVar2 = *(long*)( param_1 + 8 );
                  if (lVar2 == 0) {
                     lVar6 = -1;
                  }
 else {
                     lVar6 = *(long*)( lVar2 + -8 ) + -1;
                     if (param_2 < lVar6) {
                        memmove((void*)( lVar2 + param_2 * 4 ), (void*)( lVar2 + 4 + param_2 * 4 ), ( lVar6 - param_2 ) * 4);
                     }

                  }

                  CowData<char32_t>::resize<false>((CowData<char32_t>*)( param_1 + 8 ), lVar6);
               }
 else {
                  _err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, param_2, lVar2, "p_index", "size()", "", false, false);
               }

            }
 else {
               if (lVar6 < 1) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar6, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar4 = (code*)invalidInstructionException();
                  ( *pcVar4 )();
               }

               uVar1 = *puVar3;
               if (param_2 < lVar2) {
                  CowData<char32_t>::_copy_on_write((CowData<char32_t>*)( param_1 + 8 ));
                  *(undefined4*)( *(long*)( param_1 + 8 ) + param_2 * 4 ) = uVar1;
               }
 else {
                  _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, param_2, lVar2, "p_index", "size()", "", false, false);
               }

            }

            bVar5 = true;
         }
 else {
            bVar5 = false;
         }

      }

   }
 else {
      bVar7 = false;
      bVar5 = false;
   }

   *param_5 = bVar7;
   *param_4 = bVar5;
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
/* VariantIndexedSetGet_PackedStringArray::set(Variant*, long, Variant const*, bool*, bool*) */void VariantIndexedSetGet_PackedStringArray::set(Variant *param_1, long param_2, Variant *param_3, bool *param_4, bool *param_5) {
   CowData<char32_t> *this;
   long lVar1;
   long lVar2;
   bool bVar3;
   bool bVar4;
   if (*(int*)param_3 == 4) {
      lVar1 = *(long*)( param_1 + 8 );
      if (*(long*)( lVar1 + 0x18 ) == 0) {
         bVar4 = true;
         bVar3 = false;
      }
 else {
         lVar2 = *(long*)( *(long*)( lVar1 + 0x18 ) + -8 );
         if (param_2 < 0) {
            param_2 = param_2 + lVar2;
         }

         bVar3 = false;
         bVar4 = (bool)( lVar2 <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
         if (bVar4 == false) {
            CowData<String>::_copy_on_write((CowData<String>*)( lVar1 + 0x18 ));
            this(CowData<char32_t> * )(*(long*)( lVar1 + 0x18 ) + param_2 * 8);
            if (*(long*)this != *(long*)( param_3 + 8 )) {
               CowData<char32_t>::_ref(this, (CowData*)( param_3 + 8 ));
            }

            bVar3 = true;
         }

      }

   }
 else {
      bVar4 = false;
      bVar3 = false;
   }

   *param_5 = bVar4;
   *param_4 = bVar3;
   return;
}
/* VariantIndexedSetGet_PackedStringArray::validated_set(Variant*, long, Variant const*, bool*) */void VariantIndexedSetGet_PackedStringArray::validated_set(Variant *param_1, long param_2, Variant *param_3, bool *param_4) {
   CowData<char32_t> *this;
   long lVar1;
   long lVar2;
   bool bVar3;
   lVar1 = *(long*)( param_1 + 8 );
   if (*(long*)( lVar1 + 0x18 ) == 0) {
      bVar3 = true;
   }
 else {
      lVar2 = *(long*)( *(long*)( lVar1 + 0x18 ) + -8 );
      if (param_2 < 0) {
         param_2 = param_2 + lVar2;
      }

      bVar3 = (bool)( lVar2 <= param_2 | ( byte )((ulong)param_2 >> 0x3f) );
      if (bVar3 == false) {
         CowData<String>::_copy_on_write((CowData<String>*)( lVar1 + 0x18 ));
         this(CowData<char32_t> * )(*(long*)( lVar1 + 0x18 ) + param_2 * 8);
         if (*(long*)this != *(long*)( param_3 + 8 )) {
            CowData<char32_t>::_ref(this, (CowData*)( param_3 + 8 ));
         }

      }

   }

   *param_4 = bVar3;
   return;
}
/* VariantIndexedSetGet_PackedStringArray::ptr_set(void*, long, void const*) */void VariantIndexedSetGet_PackedStringArray::ptr_set(void *param_1, long param_2, void *param_3) {
   CowData<char32_t> *this;
   long lVar1;
   lVar1 = *(long*)( (long)param_1 + 8 );
   if (param_2 < 0) {
      if (lVar1 != 0) {
         lVar1 = *(long*)( lVar1 + -8 );
         param_2 = param_2 + lVar1;
         if (-1 < param_2) goto LAB_0011bfa8;
         goto LAB_0011bfd3;
      }

   }
 else if (lVar1 != 0) {
      lVar1 = *(long*)( lVar1 + -8 );
      if (param_2 < lVar1) {
         LAB_0011bfa8:CowData<String>::_copy_on_write((CowData<String>*)( (long)param_1 + 8 ));
         this(CowData<char32_t> * )(*(long*)( (long)param_1 + 8 ) + param_2 * 8);
         /* WARNING: Load size is inaccurate */
         if (*(long*)this == *param_3) {
            return;
         }

         CowData<char32_t>::_ref(this, (CowData*)param_3);
         return;
      }

      goto LAB_0011bfd3;
   }

   lVar1 = 0;
   LAB_0011bfd3:_err_print_index_error("ptr_set", "core/variant/variant_setget.cpp", 0x363, param_2, lVar1, "index", "v.size()", "", false, false);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* List<Variant, DefaultAllocator>::~List() */void List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<StringName, DefaultAllocator>::~List() */void List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
// This is taking way too long.
