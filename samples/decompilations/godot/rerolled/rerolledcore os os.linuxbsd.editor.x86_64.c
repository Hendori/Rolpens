/* OS::get_unix_time() const */undefined8 OS::get_unix_time(void) {
   return 0;
}
/* OS::set_low_processor_usage_mode(bool) */void OS::set_low_processor_usage_mode(OS *this, bool param_1) {
   this[0x21] = (OS)param_1;
   return;
}
/* OS::is_in_low_processor_usage_mode() const */OS OS::is_in_low_processor_usage_mode(OS *this) {
   return this[0x21];
}
/* OS::set_low_processor_usage_mode_sleep_usec(int) */void OS::set_low_processor_usage_mode_sleep_usec(OS *this, int param_1) {
   *(int*)( this + 0x24 ) = param_1;
   return;
}
/* OS::get_low_processor_usage_mode_sleep_usec() const */undefined4 OS::get_low_processor_usage_mode_sleep_usec(OS *this) {
   return *(undefined4*)( this + 0x24 );
}
/* OS::get_process_id() const */undefined8 OS::get_process_id(void) {
   return 0xffffffff;
}
/* OS::get_exit_code() const */undefined4 OS::get_exit_code(OS *this) {
   return *(undefined4*)( this + 0x38 );
}
/* OS::set_exit_code(int) */void OS::set_exit_code(OS *this, int param_1) {
   *(int*)( this + 0x38 ) = param_1;
   return;
}
/* OS::get_embedded_pck_offset() const */undefined8 OS::get_embedded_pck_offset(void) {
   return 0;
}
/* OS::calculate_boot_screen_rect(Vector2 const&, Vector2 const&) const */undefined1  [16] __thiscallOS::calculate_boot_screen_rect(OS *this, Vector2 *param_1, Vector2 *param_2) {
   float fVar1;
   float fVar2;
   undefined1 auVar3[16];
   float fVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   fVar1 = *(float*)param_1;
   fVar2 = *(float*)( param_1 + 4 );
   if (fVar1 <= fVar2) {
      fVar6 = ( *(float*)( param_2 + 4 ) * fVar1 ) / *(float*)param_2;
      fVar4 = 0.0;
      fVar7 = _LC2 * ( fVar2 - fVar6 );
   }
 else {
      fVar7 = 0.0;
      fVar5 = ( *(float*)param_2 * fVar2 ) / *(float*)( param_2 + 4 );
      fVar4 = ( fVar1 - fVar5 ) * _LC2;
      fVar6 = fVar2;
      fVar1 = fVar5;
   }

   auVar3._4_4_ = fVar7;
   auVar3._0_4_ = fVar4;
   auVar3._8_4_ = fVar1;
   auVar3._12_4_ = fVar6;
   return auVar3;
}
/* OS::get_bundle_icon_path() const */OS * __thiscall OS::get_bundle_icon_path(OS *this){
   *(undefined8*)this = 0;
   return this;
}
/* OS::shell_open(String const&) */undefined8 OS::shell_open(String *param_1) {
   return 2;
}
/* OS::set_cwd(String const&) */undefined8 OS::set_cwd(String *param_1) {
   return 0x13;
}
/* OS::yield() */void OS::yield(void) {
   return;
}
/* OS::is_sandboxed() const */undefined8 OS::is_sandboxed(void) {
   return 0;
}
/* OS::get_preferred_texture_format() const */undefined8 OS::get_preferred_texture_format(void) {
   return 0;
}
/* OS::get_resource_dir() const */OS * __thiscall OS::get_resource_dir(OS *this){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ProjectSettings::get_singleton();
   ProjectSettings::get_resource_path();
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS::get_static_memory_usage() const */void OS::get_static_memory_usage(void) {
   Memory::get_mem_usage();
   return;
}
/* OS::get_static_memory_peak_usage() const */void OS::get_static_memory_peak_usage(void) {
   Memory::get_mem_max_usage();
   return;
}
/* OS::get_processor_count() const */void OS::get_processor_count(void) {
   std::thread::hardware_concurrency();
   return;
}
/* OS::setup_remote_filesystem(String const&, int, String const&, String&) */void OS::setup_remote_filesystem(String *param_1, int param_2, String *param_3, String *param_4) {
   RemoteFilesystemClient::synchronize_with_server(param_1 + 0x78, param_2, param_3, param_4);
   return;
}
/* CowData<Logger*>::_copy_on_write() [clone .isra.0] */void CowData<Logger*>::_copy_on_write(CowData<Logger*> *this) {
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
/* OS::add_frame_delay(bool) */void OS::add_frame_delay(OS *this, bool param_1) {
   OS OVar1;
   int iVar2;
   long *plVar3;
   ulong uVar4;
   long lVar5;
   ulong uVar6;
   Engine::get_singleton();
   iVar2 = Engine::get_frame_delay();
   if (iVar2 != 0) {
      ( **(code**)( *(long*)this + 0x1f8 ) )(this, iVar2 * 1000);
   }

   if (*(code**)( *(long*)this + 0xd0 ) == is_in_low_processor_usage_mode) {
      OVar1 = this[0x21];
   }
 else {
      OVar1 = ( OS )(**(code**)( *(long*)this + 0xd0 ))(this);
   }

   if (( OVar1 == (OS)0x1 ) || ( !param_1 )) {
      if (*(code**)( *(long*)this + 0xe0 ) == get_low_processor_usage_mode_sleep_usec) {
         iVar2 = *(int*)( this + 0x24 );
      }
 else {
         iVar2 = ( **(code**)( *(long*)this + 0xe0 ) )(this);
      }

      uVar6 = (ulong)iVar2;
      plVar3 = (long*)Engine::get_singleton();
      iVar2 = ( **(code**)( *plVar3 + 0x28 ) )(plVar3);
      if (( iVar2 < 1 ) || ( lVar5 = Engine::get_singleton() * (char*)( lVar5 + 0xc0 ) != '\0' )) goto LAB_001003ae;
   }
 else {
      plVar3 = (long*)Engine::get_singleton();
      iVar2 = ( **(code**)( *plVar3 + 0x28 ) )(plVar3);
      if (iVar2 < 1) {
         return;
      }

      lVar5 = Engine::get_singleton();
      uVar6 = 0;
      if (*(char*)( lVar5 + 0xc0 ) != '\0') {
         return;
      }

   }

   uVar4 = (ulong)(int)( 1000000 / (long)iVar2 );
   if (uVar6 < uVar4) {
      uVar6 = uVar4;
   }

   LAB_001003ae:if (uVar6 != 0) {
      target_ticks = target_ticks + uVar6;
      uVar4 = ( **(code**)( *(long*)this + 0x208 ) )(this);
      if (uVar4 < target_ticks) {
         ( **(code**)( *(long*)this + 0x1f8 ) )(this, (int)target_ticks - (int)uVar4);
      }

      lVar5 = ( **(code**)( *(long*)this + 0x208 ) )(this);
      uVar4 = lVar5 - uVar6;
      if (lVar5 - uVar6 < target_ticks) {
         uVar4 = target_ticks;
      }

      target_ticks = uVar4;
      if (lVar5 + uVar6 < uVar4) {
         target_ticks = lVar5 + uVar6;
      }

   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OS::alert(String const&, String const&) */void OS::alert(String *param_1, String *param_2) {
   long *plVar1;
   long lVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   long local_30;
   long local_28;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   String::utf8();
   uVar3 = CharString::get_data();
   String::utf8();
   uVar4 = CharString::get_data();
   __fprintf_chk(_stderr, 2, "%s: %s\n", uVar4, uVar3);
   if (local_30 != 0) {
      LOCK();
      plVar1 = (long*)( local_30 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_30 + -0x10 ), false);
      }

   }

   if (local_28 != 0) {
      LOCK();
      plVar1 = (long*)( local_28 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_28 + -0x10 ), false);
      }

   }

   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS::get_memory_info() const */OS * __thiscall OS::get_memory_info(OS *this){
   char cVar1;
   Variant *pVVar2;
   long in_FS_OFFSET;
   int local_68[8];
   int local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary((Dictionary*)this);
   Variant::Variant((Variant*)local_48, -1);
   Variant::Variant((Variant*)local_68, "physical");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)this);
   if (pVVar2 != (Variant*)local_48) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_48[0];
      *(undefined8*)( pVVar2 + 8 ) = local_40;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_38;
      local_48[0] = 0;
   }

   if (Variant::needs_deinit[local_68[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_48[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_48[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_48, -1);
   Variant::Variant((Variant*)local_68, "free");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)this);
   if (pVVar2 != (Variant*)local_48) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_48[0];
      *(undefined8*)( pVVar2 + 8 ) = local_40;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_38;
      local_48[0] = 0;
   }

   if (Variant::needs_deinit[local_68[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_48[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_48[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_48, -1);
   Variant::Variant((Variant*)local_68, "available");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)this);
   if (pVVar2 != (Variant*)local_48) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_48[0];
      *(undefined8*)( pVVar2 + 8 ) = local_40;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_38;
      local_48[0] = 0;
   }

   if (Variant::needs_deinit[local_68[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_48[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_48[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_48, -1);
   Variant::Variant((Variant*)local_68, "stack");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)this);
   if (pVVar2 != (Variant*)local_48) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_48[0];
      *(undefined8*)( pVVar2 + 8 ) = local_40;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_38;
      local_48[0] = 0;
   }

   if (Variant::needs_deinit[local_68[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_48[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_48[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* OS::get_system_dir(OS::SystemDir, bool) const */StrRange *OS::get_system_dir(StrRange *param_1) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)param_1 = 0;
   String::parse_latin1(param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS::get_unique_id() const */OS * __thiscall OS::get_unique_id(OS *this){
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
/* OS::get_config_path() const */OS * __thiscall OS::get_config_path(OS *this){
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
/* OS::get_processor_name() const */OS * __thiscall OS::get_processor_name(OS *this){
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
/* OS::get_locale() const */OS * __thiscall OS::get_locale(OS *this){
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
/* OS::get_user_data_dir(String const&) const */String *OS::get_user_data_dir(String *param_1) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)param_1 = 0;
   String::parse_latin1((StrRange*)param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS::get_model_name() const */OS * __thiscall OS::get_model_name(OS *this){
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
/* OS::get_identifier() const */void OS::get_identifier(void) {
   long *plVar1;
   long lVar2;
   long *in_RSI;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *in_RSI + 0x188 ) )(&local_28);
   String::to_lower();
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
/* OS::get_godot_dir_name() const */OS * __thiscall OS::get_godot_dir_name(OS *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_38 = _LC18;
   local_30 = 5;
   String::parse_latin1((StrRange*)&local_40);
   String::to_lower();
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
/* OS::get_executable_path() const */void OS::get_executable_path(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 8 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 8 ));
   }

   return;
}
/* OS::shell_show_in_file_manager(String, bool) */undefined8 OS::shell_show_in_file_manager(long *param_1, String *param_2) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   char *pcVar4;
   char cVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   String::trim_prefix((char*)&local_48);
   pcVar3 = local_48;
   lVar2 = *(long*)param_2;
   if ((char*)lVar2 == local_48) {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static((void*)( (long)pcVar3 + -0x10 ), false);
            cVar5 = DirAccess::dir_exists_absolute(param_2);
            goto joined_r0x00100f38;
         }

      }

   }
 else {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)param_2;
            *(undefined8*)param_2 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(char**)param_2 = local_48;
   }

   cVar5 = DirAccess::dir_exists_absolute(param_2);
   joined_r0x00100f38:if (cVar5 == '\0') {
      String::get_base_dir();
      pcVar3 = local_48;
      lVar2 = *(long*)param_2;
      if ((char*)lVar2 == local_48) {
         if (lVar2 != 0) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static((void*)( (long)pcVar3 + -0x10 ), false);
            }

         }

      }
 else {
         if (lVar2 != 0) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)param_2;
               *(undefined8*)param_2 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         *(char**)param_2 = local_48;
      }

   }

   local_48 = "file://";
   local_50 = 0;
   local_40 = 7;
   String::parse_latin1((StrRange*)&local_50);
   String::operator +((String*)&local_48, (String*)&local_50);
   pcVar4 = local_48;
   pcVar3 = *(char**)param_2;
   if (pcVar3 == local_48) {
      if (pcVar3 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( pcVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar4 + -0x10, false);
         }

      }

   }
 else {
      if (pcVar3 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( pcVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)param_2;
            *(undefined8*)param_2 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(char**)param_2 = local_48;
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

   if (*(code**)( *param_1 + 0x150 ) == shell_open) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 2;
      }

   }
 else if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00101008. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar6 = ( **(code**)( *param_1 + 0x150 ) )(param_1, param_2);
      return uVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS::get_singleton() */undefined8 OS::get_singleton(void) {
   return singleton;
}
/* OS::get_ticks_msec() const */ulong OS::get_ticks_msec(OS *this) {
   ulong uVar1;
   uVar1 = ( **(code**)( *(long*)this + 0x208 ) )();
   return uVar1 / 1000;
}
/* OS::_set_logger(CompositeLogger*) */void OS::_set_logger(OS *this, CompositeLogger *param_1) {
   long *plVar1;
   plVar1 = *(long**)( this + 0x48 );
   if (plVar1 != (long*)0x0) {
      ( **(code**)( *plVar1 + 0x10 ) )(plVar1);
      Memory::free_static(plVar1, false);
   }

   *(CompositeLogger**)( this + 0x48 ) = param_1;
   return;
}
/* OS::print_error(char const*, char const*, int, char const*, char const*, bool, Logger::ErrorType)
    */void OS::print_error(long param_1, undefined8 param_2, undefined8 param_3) {
   long *plVar1;
   if (( *(char*)( param_1 + 0x3f ) != '\0' ) && ( plVar1 = *(long**)( param_1 + 0x48 ) ),plVar1 != (long*)0x0) {
      /* WARNING: Could not recover jumptable at 0x001010c5. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( *plVar1 + 8 ) )(plVar1, param_2, param_3);
      return;
   }

   return;
}
/* OS::print(char const*, ...) */void OS::print(char *param_1, ...) {
   undefined8 *puVar1;
   char in_AL;
   undefined8 in_RCX;
   undefined8 in_RDX;
   undefined8 in_RSI;
   undefined8 in_R8;
   undefined8 in_R9;
   long in_FS_OFFSET;
   undefined8 in_XMM0_Qa;
   undefined8 in_XMM1_Qa;
   undefined8 in_XMM2_Qa;
   undefined8 in_XMM3_Qa;
   undefined8 in_XMM4_Qa;
   undefined8 in_XMM5_Qa;
   undefined8 in_XMM6_Qa;
   undefined8 in_XMM7_Qa;
   undefined4 local_d8;
   undefined4 local_d4;
   undefined1 *local_d0;
   undefined1 *local_c8;
   long local_c0;
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_68;
   undefined8 local_58;
   undefined8 local_48;
   undefined8 local_38;
   undefined8 local_28;
   undefined8 local_18;
   if (in_AL != '\0') {
      local_88 = in_XMM0_Qa;
      local_78 = in_XMM1_Qa;
      local_68 = in_XMM2_Qa;
      local_58 = in_XMM3_Qa;
      local_48 = in_XMM4_Qa;
      local_38 = in_XMM5_Qa;
      local_28 = in_XMM6_Qa;
      local_18 = in_XMM7_Qa;
   }

   local_c0 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a8 = in_RDX;
   local_a0 = in_RCX;
   local_98 = in_R8;
   local_90 = in_R9;
   if (param_1[0x3e] != '\0') {
      local_d0 = &stack0x00000008;
      puVar1 = *(undefined8**)( param_1 + 0x48 );
      local_d8 = 0x10;
      local_c8 = local_b8;
      local_d4 = 0x30;
      if (puVar1 != (undefined8*)0x0) {
         ( **(code**)*puVar1 )(puVar1, in_RSI, &local_d8, 0);
      }

   }

   if (local_c0 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS::print_rich(char const*, ...) */void OS::print_rich(char *param_1, ...) {
   undefined8 *puVar1;
   char in_AL;
   undefined8 in_RCX;
   undefined8 in_RDX;
   undefined8 in_RSI;
   undefined8 in_R8;
   undefined8 in_R9;
   long in_FS_OFFSET;
   undefined8 in_XMM0_Qa;
   undefined8 in_XMM1_Qa;
   undefined8 in_XMM2_Qa;
   undefined8 in_XMM3_Qa;
   undefined8 in_XMM4_Qa;
   undefined8 in_XMM5_Qa;
   undefined8 in_XMM6_Qa;
   undefined8 in_XMM7_Qa;
   undefined4 local_d8;
   undefined4 local_d4;
   undefined1 *local_d0;
   undefined1 *local_c8;
   long local_c0;
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_68;
   undefined8 local_58;
   undefined8 local_48;
   undefined8 local_38;
   undefined8 local_28;
   undefined8 local_18;
   if (in_AL != '\0') {
      local_88 = in_XMM0_Qa;
      local_78 = in_XMM1_Qa;
      local_68 = in_XMM2_Qa;
      local_58 = in_XMM3_Qa;
      local_48 = in_XMM4_Qa;
      local_38 = in_XMM5_Qa;
      local_28 = in_XMM6_Qa;
      local_18 = in_XMM7_Qa;
   }

   local_c0 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a8 = in_RDX;
   local_a0 = in_RCX;
   local_98 = in_R8;
   local_90 = in_R9;
   if (param_1[0x3e] != '\0') {
      local_d0 = &stack0x00000008;
      puVar1 = *(undefined8**)( param_1 + 0x48 );
      local_d8 = 0x10;
      local_c8 = local_b8;
      local_d4 = 0x30;
      if (puVar1 != (undefined8*)0x0) {
         ( **(code**)*puVar1 )(puVar1, in_RSI, &local_d8, 0);
      }

   }

   if (local_c0 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS::printerr(char const*, ...) */void OS::printerr(char *param_1, ...) {
   undefined8 *puVar1;
   char in_AL;
   undefined8 in_RCX;
   undefined8 in_RDX;
   undefined8 in_RSI;
   undefined8 in_R8;
   undefined8 in_R9;
   long in_FS_OFFSET;
   undefined8 in_XMM0_Qa;
   undefined8 in_XMM1_Qa;
   undefined8 in_XMM2_Qa;
   undefined8 in_XMM3_Qa;
   undefined8 in_XMM4_Qa;
   undefined8 in_XMM5_Qa;
   undefined8 in_XMM6_Qa;
   undefined8 in_XMM7_Qa;
   undefined4 local_d8;
   undefined4 local_d4;
   undefined1 *local_d0;
   undefined1 *local_c8;
   long local_c0;
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_68;
   undefined8 local_58;
   undefined8 local_48;
   undefined8 local_38;
   undefined8 local_28;
   undefined8 local_18;
   if (in_AL != '\0') {
      local_88 = in_XMM0_Qa;
      local_78 = in_XMM1_Qa;
      local_68 = in_XMM2_Qa;
      local_58 = in_XMM3_Qa;
      local_48 = in_XMM4_Qa;
      local_38 = in_XMM5_Qa;
      local_28 = in_XMM6_Qa;
      local_18 = in_XMM7_Qa;
   }

   local_c0 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a8 = in_RDX;
   local_a0 = in_RCX;
   local_98 = in_R8;
   local_90 = in_R9;
   if (param_1[0x3f] != '\0') {
      local_d0 = &stack0x00000008;
      puVar1 = *(undefined8**)( param_1 + 0x48 );
      local_d8 = 0x10;
      local_c8 = local_b8;
      local_d4 = 0x30;
      if (puVar1 != (undefined8*)0x0) {
         ( **(code**)*puVar1 )(puVar1, in_RSI, &local_d8, 1);
      }

   }

   if (local_c0 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS::set_delta_smoothing(bool) */void OS::set_delta_smoothing(OS *this, bool param_1) {
   this[0x28] = (OS)param_1;
   return;
}
/* OS::is_delta_smoothing_enabled() const */OS OS::is_delta_smoothing_enabled(OS *this) {
   return this[0x28];
}
/* OS::is_stdout_verbose() const */OS OS::is_stdout_verbose(OS *this) {
   return this[0x29];
}
/* OS::is_stdout_debug_enabled() const */OS OS::is_stdout_debug_enabled(OS *this) {
   return this[0x2a];
}
/* OS::is_stdout_enabled() const */OS OS::is_stdout_enabled(OS *this) {
   return this[0x3e];
}
/* OS::is_stderr_enabled() const */OS OS::is_stderr_enabled(OS *this) {
   return this[0x3f];
}
/* OS::set_stdout_enabled(bool) */void OS::set_stdout_enabled(OS *this, bool param_1) {
   this[0x3e] = (OS)param_1;
   return;
}
/* OS::set_stderr_enabled(bool) */void OS::set_stderr_enabled(OS *this, bool param_1) {
   this[0x3f] = (OS)param_1;
   return;
}
/* OS::get_locale_language() const */void OS::get_locale_language(void) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   long *in_RSI;
   char *in_RDI;
   long in_FS_OFFSET;
   long local_40;
   undefined *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( *in_RSI + 600 ) == get_locale) {
      local_40 = 0;
      local_30 = 2;
      local_38 = &_LC16;
      String::parse_latin1((StrRange*)&local_40);
   }
 else {
      ( **(code**)( *in_RSI + 600 ) )(&local_40);
   }

   String::left((int)&local_38);
   String::replace(in_RDI, (char*)&local_38);
   puVar3 = local_38;
   if (local_38 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_38 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_38 = (undefined*)0x0;
         Memory::free_static(puVar3 + -0x10, false);
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
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS::create_lock_file() */void OS::create_lock_file(OS *this) {
   long *plVar1;
   Object *pOVar2;
   char cVar3;
   long lVar4;
   long in_FS_OFFSET;
   long local_60;
   long local_58;
   long local_50;
   Object *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar4 = Engine::get_singleton();
   if (*(char*)( lVar4 + 0xc4 ) == '\0') {
      ( **(code**)( *(long*)this + 0x2a8 ) )(&local_58, this);
      local_48 = (Object*)0x105b72;
      local_50 = 0;
      local_40 = 0x13;
      String::parse_latin1((StrRange*)&local_50);
      String::path_join((String*)&local_60);
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

      lVar4 = local_58;
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

      FileAccess::open((String*)&local_48, (int)(String*)&local_60, (Error*)0x2);
      if (local_48 != (Object*)0x0) {
         ( **(code**)( *(long*)local_48 + 0x2d8 ) )();
         if (local_48 != (Object*)0x0) {
            cVar3 = RefCounted::unreference();
            pOVar2 = local_48;
            if (cVar3 != '\0') {
               cVar3 = predelete_handler(local_48);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

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

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS::remove_lock_file() */void OS::remove_lock_file(OS *this) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *(long*)this + 0x2a8 ) )(&local_48, this);
   local_38 = ".recovery_mode_lock";
   local_40 = 0;
   local_30 = 0x13;
   String::parse_latin1((StrRange*)&local_40);
   String::path_join((String*)&local_38);
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

   DirAccess::remove_absolute((String*)&local_38);
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

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS::set_has_server_feature_callback(bool (*)(String const&)) */void OS::set_has_server_feature_callback(OS *this, _func_bool_String_ptr *param_1) {
   *(_func_bool_String_ptr**)( this + 0x120 ) = param_1;
   return;
}
/* OS::has_feature(String const&) */ulong OS::has_feature(OS *this, String *param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   char cVar4;
   ulong uVar5;
   String *pSVar6;
   long in_FS_OFFSET;
   long local_40;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar2 = *(code**)( *(long*)this + 400 );
   if (pcVar2 == get_identifier) {
      ( **(code**)( *(long*)this + 0x188 ) )(&local_38, this);
      String::to_lower();
      lVar3 = local_38;
      if (local_38 != 0) {
         LOCK();
         plVar1 = (long*)( local_38 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_38 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

   }
 else {
      ( *pcVar2 )(&local_40, this);
   }

   cVar4 = String::operator ==(param_1, (String*)&local_40);
   lVar3 = local_40;
   if (local_40 == 0) {
      LAB_001018a3:if (cVar4 != '\0') goto LAB_001018a8;
      LAB_001018ee:cVar4 = String::operator ==(param_1, "movie");
      if (cVar4 != '\0') {
         uVar5 = (ulong)(byte)this[0x40];
         goto LAB_001018ad;
      }

      cVar4 = String::operator ==(param_1, "debug");
      if (cVar4 != '\0') goto LAB_001018a8;
      cVar4 = String::operator ==(param_1, "editor");
      if (cVar4 != '\0') goto LAB_001018a8;
      cVar4 = String::operator ==(param_1, "editor_hint");
      if (cVar4 == '\0') {
         cVar4 = String::operator ==(param_1, "editor_runtime");
         if (cVar4 == '\0') {
            cVar4 = String::operator ==(param_1, "embedded_in_editor");
            if (cVar4 == '\0') {
               cVar4 = String::operator ==(param_1, "single");
               if (cVar4 == '\0') {
                  cVar4 = String::operator ==(param_1, "64");
                  if (cVar4 == '\0') {
                     cVar4 = String::operator ==(param_1, "x86_64");
                     if (cVar4 == '\0') {
                        cVar4 = String::operator ==(param_1, "x86");
                        if (cVar4 == '\0') {
                           cVar4 = String::operator ==(param_1, "threads");
                           if (cVar4 == '\0') {
                              cVar4 = ( **(code**)( *(long*)this + 0x38 ) )(this, param_1);
                              if (cVar4 == '\0') {
                                 if (*(code**)( this + 0x120 ) != (code*)0x0) {
                                    cVar4 = ( **(code**)( this + 0x120 ) )(param_1);
                                    if (cVar4 != '\0') goto LAB_001018a8;
                                 }

                                 pSVar6 = (String*)ProjectSettings::get_singleton();
                                 if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                                    uVar5 = ProjectSettings::has_custom_feature(pSVar6);
                                    return uVar5;
                                 }

                                 goto LAB_00101aa6;
                              }

                           }

                        }

                     }

                  }

               }

               goto LAB_001018a8;
            }

            uVar5 = (ulong)(byte)this[0x42];
         }
 else {
            uVar5 = ( ulong )((byte)this[0x41] ^ 1);
         }

      }
 else {
         uVar5 = (ulong)(byte)this[0x41];
      }

   }
 else {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_001018a3;
      local_40 = 0;
      Memory::free_static((void*)( lVar3 + -0x10 ), false);
      if (cVar4 == '\0') goto LAB_001018ee;
      LAB_001018a8:uVar5 = 1;
   }

   LAB_001018ad:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   LAB_00101aa6:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* OS::set_restart_on_exit(bool, List<String, DefaultAllocator> const&) */void OS::set_restart_on_exit(OS *this, bool param_1, List *param_2) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   undefined1(*pauVar5)[16];
   CowData<char32_t> *this_00;
   CowData *pCVar6;
   long *plVar7;
   plVar7 = *(long**)( this + 0x58 );
   this[0x50] = (OS)param_1;
   if (plVar7 != (long*)0x0) {
      do {
         plVar2 = (long*)*plVar7;
         if (plVar2 == (long*)0x0) goto LAB_00101b60;
         if ((long*)plVar2[3] == plVar7) {
            lVar4 = plVar2[1];
            lVar3 = plVar2[2];
            *plVar7 = lVar4;
            if (plVar2 == (long*)plVar7[1]) {
               plVar7[1] = lVar3;
            }

            if (lVar3 != 0) {
               *(long*)( lVar3 + 8 ) = lVar4;
               lVar4 = plVar2[1];
            }

            if (lVar4 != 0) {
               *(long*)( lVar4 + 0x10 ) = lVar3;
            }

            if (*plVar2 != 0) {
               LOCK();
               plVar1 = (long*)( *plVar2 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar4 = *plVar2;
                  *plVar2 = 0;
                  Memory::free_static((void*)( lVar4 + -0x10 ), false);
               }

            }

            Memory::free_static(plVar2, false);
            *(int*)( plVar7 + 2 ) = (int)plVar7[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar7 = *(long**)( this + 0x58 );
      }
 while ( (int)plVar7[2] != 0 );
      Memory::free_static(plVar7, false);
      *(undefined8*)( this + 0x58 ) = 0;
   }

   plVar7 = (long*)0x0;
   LAB_00101b60:if (( *(long**)param_2 != (long*)0x0 ) && ( pCVar6 = (CowData*)**(long**)param_2 ),pCVar6 != (CowData*)0x0) {
      if (plVar7 == (long*)0x0) {
         pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])( this + 0x58 ) = pauVar5;
         *(undefined4*)pauVar5[1] = 0;
         *pauVar5 = (undefined1[16])0x0;
      }

      do {
         while (true) {
            this_00 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
            *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
            *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
            if (*(long*)pCVar6 != 0) {
               CowData<char32_t>::_ref(this_00, pCVar6);
            }

            plVar7 = *(long**)( this + 0x58 );
            lVar4 = plVar7[1];
            *(undefined8*)( this_00 + 8 ) = 0;
            *(long**)( this_00 + 0x18 ) = plVar7;
            *(long*)( this_00 + 0x10 ) = lVar4;
            if (lVar4 != 0) {
               *(CowData<char32_t>**)( lVar4 + 8 ) = this_00;
            }

            plVar7[1] = (long)this_00;
            if (*plVar7 == 0) break;
            pCVar6 = *(CowData**)( pCVar6 + 8 );
            *(int*)( plVar7 + 2 ) = (int)plVar7[2] + 1;
            if (pCVar6 == (CowData*)0x0) {
               return;
            }

         }
;
         pCVar6 = *(CowData**)( pCVar6 + 8 );
         *(int*)( plVar7 + 2 ) = (int)plVar7[2] + 1;
         *plVar7 = (long)this_00;
      }
 while ( pCVar6 != (CowData*)0x0 );
   }

   return;
}
/* OS::is_restart_on_exit_set() const */OS OS::is_restart_on_exit_set(OS *this) {
   return this[0x50];
}
/* OS::get_restart_on_exit_arguments() const */void OS::get_restart_on_exit_arguments(void) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   CowData<char32_t> *this;
   CowData *pCVar4;
   long in_RSI;
   long *in_RDI;
   plVar1 = *(long**)( in_RSI + 0x58 );
   *in_RDI = 0;
   if (( plVar1 != (long*)0x0 ) && ( pCVar4 = (CowData*)*plVar1 ),pCVar4 != (CowData*)0x0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *in_RDI = (long)pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
      do {
         while (true) {
            this(CowData<char32_t> * operator_new(0x20, DefaultAllocator::alloc));
            *(undefined1(*) [16])this = (undefined1[16])0x0;
            *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
            if (*(long*)pCVar4 != 0) {
               CowData<char32_t>::_ref(this, pCVar4);
            }

            plVar1 = (long*)*in_RDI;
            lVar2 = plVar1[1];
            *(undefined8*)( this + 8 ) = 0;
            *(long**)( this + 0x18 ) = plVar1;
            *(long*)( this + 0x10 ) = lVar2;
            if (lVar2 != 0) {
               *(CowData<char32_t>**)( lVar2 + 8 ) = this;
            }

            plVar1[1] = (long)this;
            if (*plVar1 != 0) break;
            pCVar4 = *(CowData**)( pCVar4 + 8 );
            *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
            *plVar1 = (long)this;
            if (pCVar4 == (CowData*)0x0) {
               return;
            }

         }
;
         pCVar4 = *(CowData**)( pCVar4 + 8 );
         *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
      }
 while ( pCVar4 != (CowData*)0x0 );
   }

   return;
}
/* OS::set_use_benchmark(bool) */void OS::set_use_benchmark(OS *this, bool param_1) {
   this[0xb0] = (OS)param_1;
   return;
}
/* OS::is_use_benchmark_set() */OS OS::is_use_benchmark_set(OS *this) {
   return this[0xb0];
}
/* OS::set_benchmark_file(String const&) */void OS::set_benchmark_file(OS *this, String *param_1) {
   if (*(long*)( this + 0xb8 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0xb8 ), (CowData*)param_1);
      return;
   }

   return;
}
/* OS::get_benchmark_file() */void OS::get_benchmark_file(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0xb8 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0xb8 ));
   }

   return;
}
/* OS::~OS() */void OS::~OS(OS *this) {
   long *plVar1;
   uint uVar2;
   long *plVar3;
   long lVar4;
   long lVar5;
   void *pvVar6;
   plVar3 = *(long**)( this + 0x48 );
   *(undefined***)this = &PTR___cxa_pure_virtual_0010b988;
   if (plVar3 != (long*)0x0) {
      ( **(code**)( *plVar3 + 0x10 ) )(plVar3);
      Memory::free_static(plVar3, false);
   }

   pvVar6 = *(void**)( this + 0xf8 );
   singleton = 0;
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0x11c ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x118 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x11c ) = 0;
            *(undefined1(*) [16])( this + 0x108 ) = (undefined1[16])0x0;
         }
 else {
            lVar5 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x100 ) + lVar5 ) != 0) {
                  pvVar6 = *(void**)( (long)pvVar6 + lVar5 * 2 );
                  *(int*)( *(long*)( this + 0x100 ) + lVar5 ) = 0;
                  if (*(long*)( (long)pvVar6 + 0x18 ) != 0) {
                     LOCK();
                     plVar3 = (long*)( *(long*)( (long)pvVar6 + 0x18 ) + -0x10 );
                     *plVar3 = *plVar3 + -1;
                     UNLOCK();
                     if (*plVar3 == 0) {
                        lVar4 = *(long*)( (long)pvVar6 + 0x18 );
                        *(undefined8*)( (long)pvVar6 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar4 + -0x10 ), false);
                     }

                  }

                  if (*(long*)( (long)pvVar6 + 0x10 ) != 0) {
                     LOCK();
                     plVar3 = (long*)( *(long*)( (long)pvVar6 + 0x10 ) + -0x10 );
                     *plVar3 = *plVar3 + -1;
                     UNLOCK();
                     if (*plVar3 == 0) {
                        lVar4 = *(long*)( (long)pvVar6 + 0x10 );
                        *(undefined8*)( (long)pvVar6 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar4 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar6, false);
                  pvVar6 = *(void**)( this + 0xf8 );
                  *(undefined8*)( (long)pvVar6 + lVar5 * 2 ) = 0;
               }

               lVar5 = lVar5 + 4;
            }
 while ( lVar5 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x11c ) = 0;
            *(undefined1(*) [16])( this + 0x108 ) = (undefined1[16])0x0;
            if (pvVar6 == (void*)0x0) goto LAB_00101f53;
         }

      }

      Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0x100 ), false);
   }

   LAB_00101f53:pvVar6 = *(void**)( this + 200 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0xec ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xe8 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0xec ) = 0;
            *(undefined1(*) [16])( this + 0xd8 ) = (undefined1[16])0x0;
         }
 else {
            lVar5 = 0;
            do {
               if (*(int*)( *(long*)( this + 0xd0 ) + lVar5 ) != 0) {
                  pvVar6 = *(void**)( (long)pvVar6 + lVar5 * 2 );
                  *(int*)( *(long*)( this + 0xd0 ) + lVar5 ) = 0;
                  if (*(long*)( (long)pvVar6 + 0x18 ) != 0) {
                     LOCK();
                     plVar3 = (long*)( *(long*)( (long)pvVar6 + 0x18 ) + -0x10 );
                     *plVar3 = *plVar3 + -1;
                     UNLOCK();
                     if (*plVar3 == 0) {
                        lVar4 = *(long*)( (long)pvVar6 + 0x18 );
                        *(undefined8*)( (long)pvVar6 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar4 + -0x10 ), false);
                     }

                  }

                  if (*(long*)( (long)pvVar6 + 0x10 ) != 0) {
                     LOCK();
                     plVar3 = (long*)( *(long*)( (long)pvVar6 + 0x10 ) + -0x10 );
                     *plVar3 = *plVar3 + -1;
                     UNLOCK();
                     if (*plVar3 == 0) {
                        lVar4 = *(long*)( (long)pvVar6 + 0x10 );
                        *(undefined8*)( (long)pvVar6 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar4 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar6, false);
                  pvVar6 = *(void**)( this + 200 );
                  *(undefined8*)( (long)pvVar6 + lVar5 * 2 ) = 0;
               }

               lVar5 = lVar5 + 4;
            }
 while ( (ulong)uVar2 << 2 != lVar5 );
            *(undefined4*)( this + 0xec ) = 0;
            *(undefined1(*) [16])( this + 0xd8 ) = (undefined1[16])0x0;
            if (pvVar6 == (void*)0x0) goto LAB_00102051;
         }

      }

      Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0xd0 ), false);
   }

   LAB_00102051:if (*(long*)( this + 0xb8 ) != 0) {
      LOCK();
      plVar3 = (long*)( *(long*)( this + 0xb8 ) + -0x10 );
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
         lVar5 = *(long*)( this + 0xb8 );
         *(undefined8*)( this + 0xb8 ) = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   pvVar6 = *(void**)( this + 0x88 );
   *(code**)( this + 0x78 ) = Variant::Variant;
   if (pvVar6 == (void*)0x0) goto LAB_0010211f;
   if (*(int*)( this + 0xac ) != 0) {
      if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xa8 ) * 4 ) != 0) {
         memset(*(void**)( this + 0xa0 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xa8 ) * 4 ) << 2);
         if (*(int*)( this + 0xac ) == 0) goto LAB_001021b0;
      }

      lVar5 = 0;
      do {
         plVar3 = (long*)( (long)pvVar6 + lVar5 * 8 );
         if (*plVar3 != 0) {
            LOCK();
            plVar1 = (long*)( *plVar3 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar4 = *plVar3;
               *plVar3 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

            pvVar6 = *(void**)( this + 0x88 );
         }

         lVar5 = lVar5 + 1;
      }
 while ( (uint)lVar5 < *(uint*)( this + 0xac ) );
      *(undefined4*)( this + 0xac ) = 0;
      if (pvVar6 == (void*)0x0) goto LAB_0010211f;
   }

   LAB_001021b0:Memory::free_static(pvVar6, false);
   Memory::free_static(*(void**)( this + 0x98 ), false);
   Memory::free_static(*(void**)( this + 0x90 ), false);
   Memory::free_static(*(void**)( this + 0xa0 ), false);
   LAB_0010211f:if (*(long*)( this + 0x80 ) != 0) {
      LOCK();
      plVar3 = (long*)( *(long*)( this + 0x80 ) + -0x10 );
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
         lVar5 = *(long*)( this + 0x80 );
         *(undefined8*)( this + 0x80 ) = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x68 ) != 0) {
      LOCK();
      plVar3 = (long*)( *(long*)( this + 0x68 ) + -0x10 );
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
         lVar5 = *(long*)( this + 0x68 );
         *(undefined8*)( this + 0x68 ) = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x60 ) != 0) {
      LOCK();
      plVar3 = (long*)( *(long*)( this + 0x60 ) + -0x10 );
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
         lVar5 = *(long*)( this + 0x60 );
         *(undefined8*)( this + 0x60 ) = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)( this + 0x58 ));
   if (*(long*)( this + 0x30 ) != 0) {
      LOCK();
      plVar3 = (long*)( *(long*)( this + 0x30 ) + -0x10 );
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
         lVar5 = *(long*)( this + 0x30 );
         *(undefined8*)( this + 0x30 ) = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)( this + 0x18 ));
   List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)( this + 0x10 ));
   if (*(long*)( this + 8 ) != 0) {
      LOCK();
      plVar3 = (long*)( *(long*)( this + 8 ) + -0x10 );
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
         lVar5 = *(long*)( this + 8 );
         *(undefined8*)( this + 8 ) = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* OS::~OS() */void OS::~OS(OS *this) {
   ~OS(this)
   ;;
   operator_delete(this, 0x130);
   return;
}
/* OS::open_midi_inputs() */void OS::open_midi_inputs(void) {
   char *pcVar1;
   long lVar2;
   long *plVar3;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = MIDIDriver::get_singleton();
   if (lVar2 == 0) {
      ( **(code**)( *singleton + 0x188 ) )(&local_48);
      local_38 = "MIDI input isn\'t supported on %s.";
      local_40 = 0;
      local_30 = 0x21;
      String::parse_latin1((StrRange*)&local_40);
      vformat<String>(&local_38, (StrRange*)&local_40, &local_48);
      _err_print_error("open_midi_inputs", "core/os/os.cpp", 0x281, &local_38, 0, 0);
      pcVar1 = local_38;
      if (local_38 != (char*)0x0) {
         LOCK();
         plVar3 = (long*)( local_38 + -0x10 );
         *plVar3 = *plVar3 + -1;
         UNLOCK();
         if (*plVar3 == 0) {
            local_38 = (char*)0x0;
            Memory::free_static(pcVar1 + -0x10, false);
         }

      }

      lVar2 = local_40;
      if (local_40 != 0) {
         LOCK();
         plVar3 = (long*)( local_40 + -0x10 );
         *plVar3 = *plVar3 + -1;
         UNLOCK();
         if (*plVar3 == 0) {
            local_40 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      lVar2 = local_48;
      if (local_48 != 0) {
         LOCK();
         plVar3 = (long*)( local_48 + -0x10 );
         *plVar3 = *plVar3 + -1;
         UNLOCK();
         if (*plVar3 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      plVar3 = (long*)MIDIDriver::get_singleton();
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Could not recover jumptable at 0x001023b1. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( **(code**)( *plVar3 + 0x10 ) )();
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS::close_midi_inputs() */void OS::close_midi_inputs(void) {
   char *pcVar1;
   long lVar2;
   long *plVar3;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = MIDIDriver::get_singleton();
   if (lVar2 == 0) {
      ( **(code**)( *singleton + 0x188 ) )(&local_48);
      local_38 = "MIDI input isn\'t supported on %s.";
      local_40 = 0;
      local_30 = 0x21;
      String::parse_latin1((StrRange*)&local_40);
      vformat<String>(&local_38, (StrRange*)&local_40, &local_48);
      _err_print_error("close_midi_inputs", "core/os/os.cpp", 0x289, &local_38, 0, 0);
      pcVar1 = local_38;
      if (local_38 != (char*)0x0) {
         LOCK();
         plVar3 = (long*)( local_38 + -0x10 );
         *plVar3 = *plVar3 + -1;
         UNLOCK();
         if (*plVar3 == 0) {
            local_38 = (char*)0x0;
            Memory::free_static(pcVar1 + -0x10, false);
         }

      }

      lVar2 = local_40;
      if (local_40 != 0) {
         LOCK();
         plVar3 = (long*)( local_40 + -0x10 );
         *plVar3 = *plVar3 + -1;
         UNLOCK();
         if (*plVar3 == 0) {
            local_40 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      lVar2 = local_48;
      if (local_48 != 0) {
         LOCK();
         plVar3 = (long*)( local_48 + -0x10 );
         *plVar3 = *plVar3 + -1;
         UNLOCK();
         if (*plVar3 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      plVar3 = (long*)MIDIDriver::get_singleton();
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Could not recover jumptable at 0x00102541. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( **(code**)( *plVar3 + 0x18 ) )();
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS::get_connected_midi_inputs() */OS * __thiscall OS::get_connected_midi_inputs(OS *this){
   long *plVar1;
   char *pcVar2;
   long lVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = MIDIDriver::get_singleton();
   if (lVar3 == 0) {
      ( **(code**)( *singleton + 0x188 ) )(&local_58);
      local_48 = "MIDI input isn\'t supported on %s.";
      local_40 = 0x21;
      local_50 = 0;
      String::parse_latin1((StrRange*)&local_50);
      vformat<String>(&local_48, (StrRange*)&local_50, &local_58);
      _err_print_error("get_connected_midi_inputs", "core/os/os.cpp", 0x27a, "Method/function failed. Returning: list", &local_48, 0, 0);
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

      lVar3 = local_58;
      if (local_58 != 0) {
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_58 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
            *(undefined8*)( this + 8 ) = 0;
            goto LAB_001026bb;
         }

      }

      *(undefined8*)( this + 8 ) = 0;
   }
 else {
      MIDIDriver::get_singleton();
      MIDIDriver::get_connected_inputs();
   }

   LAB_001026bb:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS::ensure_user_data_dir() */void OS::ensure_user_data_dir(OS *this) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   char cVar4;
   int iVar5;
   long lVar6;
   long in_FS_OFFSET;
   bool bVar7;
   long local_58;
   Object *local_50;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *(long*)this + 0x2a8 ) )(&local_58);
   cVar4 = DirAccess::exists((String*)&local_58);
   if (cVar4 == '\0') {
      DirAccess::create(&local_50, 2);
      iVar5 = ( **(code**)( *(long*)local_50 + 0x1c0 ) )();
      if (iVar5 != 0) {
         local_40 = 0;
         plVar1 = (long*)( local_58 + -0x10 );
         if (local_58 != 0) {
            do {
               lVar2 = *plVar1;
               if (lVar2 == 0) goto LAB_00102950;
               LOCK();
               lVar6 = *plVar1;
               bVar7 = lVar2 == lVar6;
               if (bVar7) {
                  *plVar1 = lVar2 + 1;
                  lVar6 = lVar2;
               }

               UNLOCK();
            }
 while ( !bVar7 );
            if (lVar6 != -1) {
               local_40 = local_58;
            }

         }

         LAB_00102950:local_48 = 0;
         local_30 = 0x28;
         local_38 = "Error attempting to create data dir: %s.";
         String::parse_latin1((StrRange*)&local_48);
         vformat<String>(&local_38, (StrRange*)&local_48, &local_40);
         _err_print_error("ensure_user_data_dir", "core/os/os.cpp", 0x19a, "Condition \"err != OK\" is true.", &local_38, 0, 0);
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

      }

      if (( ( local_50 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)local_50 + 0x140 ))(local_50);
      Memory::free_static(local_50, false);
   }

}
lVar2 = local_58;if (local_58 != 0) {
   LOCK();
   plVar1 = (long*)( local_58 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void*)( lVar2 + -0x10 ), false);
   }

}
if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* OS::set_cmdline(char const*, List<String, DefaultAllocator> const&, List<String,
   DefaultAllocator> const&) */void OS::set_cmdline(OS *this, char *param_1, List *param_2, List *param_3) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   String::utf8((char*)&local_28, (int)param_1);
   lVar3 = local_28;
   lVar2 = *(long*)( this + 8 );
   if (lVar2 == local_28) {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_28 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

   }
 else {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( this + 8 );
            *(undefined8*)( this + 8 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(long*)( this + 8 ) = local_28;
   }

   List<String,DefaultAllocator>::operator =((List<String,DefaultAllocator>*)( this + 0x10 ), param_2);
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   List<String,DefaultAllocator>::operator =((List<String,DefaultAllocator>*)( this + 0x18 ), param_3);
   return;
}
/* OS::benchmark_begin_measure(String const&, String const&) */void OS::benchmark_begin_measure(OS *this, String *param_1, String *param_2) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   ulong uVar12;
   char *pcVar13;
   char cVar14;
   undefined4 uVar15;
   undefined4 uVar16;
   ulong uVar17;
   undefined8 uVar18;
   undefined8 *puVar19;
   long lVar20;
   int iVar21;
   long lVar22;
   uint uVar23;
   ulong uVar24;
   uint uVar25;
   long in_FS_OFFSET;
   bool bVar26;
   String *local_c0;
   long local_80;
   long local_78;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (char*)0x0;
   plVar1 = (long*)( *(long*)param_1 + -0x10 );
   if (*(long*)param_1 == 0) {
      LAB_00102fe1:local_68 = 0;
      local_60 = 0;
      if (*(long*)param_2 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)param_2);
      }

   }
 else {
      do {
         lVar3 = *plVar1;
         if (lVar3 == 0) goto LAB_00102ba6;
         LOCK();
         lVar20 = *plVar1;
         bVar26 = lVar3 == lVar20;
         if (bVar26) {
            *plVar1 = lVar3 + 1;
            lVar20 = lVar3;
         }

         UNLOCK();
      }
 while ( !bVar26 );
      if (lVar20 != -1) {
         local_58 = *(char**)param_1;
      }

      LAB_00102ba6:pcVar13 = local_58;
      local_68 = 0;
      if (local_58 == (char*)0x0) goto LAB_00102fe1;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_58);
      local_60 = 0;
      if (*(long*)param_2 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)param_2);
      }

      LOCK();
      plVar1 = (long*)( pcVar13 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static(local_58 + -0x10, false);
      }

   }

   local_c0 = (String*)&local_68;
   if (( *(long*)( this + 200 ) != 0 ) && ( *(int*)( this + 0xec ) != 0 )) {
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xe8 ) * 4 );
      lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0xe8 ) * 8 );
      uVar15 = String::hash();
      uVar16 = String::hash();
      lVar20 = *(long*)( this + 0xd0 );
      uVar12 = CONCAT44(0, uVar2);
      uVar17 = CONCAT44(uVar15, uVar16) * 0x3ffff - 1;
      uVar17 = ( uVar17 ^ uVar17 >> 0x1f ) * 0x15;
      uVar17 = ( uVar17 ^ uVar17 >> 0xb ) * 0x41;
      uVar17 = uVar17 >> 0x16 ^ uVar17;
      uVar24 = uVar17 & 0xffffffff;
      if ((int)uVar17 == 0) {
         uVar24 = 1;
      }

      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar24 * lVar3;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar12;
      lVar22 = SUB168(auVar4 * auVar8, 8);
      uVar23 = *(uint*)( lVar20 + lVar22 * 4 );
      iVar21 = SUB164(auVar4 * auVar8, 8);
      if (uVar23 != 0) {
         uVar25 = 0;
         do {
            if ((uint)uVar24 == uVar23) {
               lVar20 = *(long*)( *(long*)( this + 200 ) + lVar22 * 8 );
               cVar14 = String::operator ==((String*)( lVar20 + 0x10 ), local_c0);
               if (( cVar14 != '\0' ) && ( cVar14 = String::operator ==((String*)( lVar20 + 0x18 ), (String*)&local_60) ),cVar14 != '\0') {
                  local_70 = 0;
                  plVar1 = (long*)( *(long*)param_2 + -0x10 );
                  if (*(long*)param_2 == 0) goto LAB_00102ea8;
                  goto LAB_00102e82;
               }

               lVar20 = *(long*)( this + 0xd0 );
            }

            uVar25 = uVar25 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(iVar21 + 1) * lVar3;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar12;
            lVar22 = SUB168(auVar5 * auVar9, 8);
            uVar23 = *(uint*)( lVar20 + lVar22 * 4 );
            iVar21 = SUB164(auVar5 * auVar9, 8);
         }
 while ( ( uVar23 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar23 * lVar3,auVar10._8_8_ = 0,auVar10._0_8_ = uVar12,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar2 + iVar21 ) - SUB164(auVar6 * auVar10, 8)) * lVar3,auVar11._8_8_ = 0,auVar11._0_8_ = uVar12,uVar25 <= SUB164(auVar7 * auVar11, 8) );
      }

   }

   uVar18 = ( **(code**)( *singleton + 0x208 ) )();
   puVar19 = (undefined8*)HashMap<Pair<String,String>,unsigned_long,PairHash<String,String>,HashMapComparatorDefault<Pair<String,String>>,DefaultTypedAllocator<HashMapElement<Pair<String,String>,unsigned_long>>>::operator []((HashMap<Pair<String,String>,unsigned_long,PairHash<String,String>,HashMapComparatorDefault<Pair<String,String>>,DefaultTypedAllocator<HashMapElement<Pair<String,String>,unsigned_long>>>*)( this + 0xc0 ), (Pair*)local_c0);
   *puVar19 = uVar18;
   LAB_00102dc5:lVar3 = local_60;
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

   lVar3 = local_68;
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

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
   LAB_00102e82:do {
      lVar3 = *plVar1;
      if (lVar3 == 0) goto LAB_00102ea8;
      LOCK();
      lVar20 = *plVar1;
      bVar26 = lVar3 == lVar20;
      if (bVar26) {
         *plVar1 = lVar3 + 1;
         lVar20 = lVar3;
      }

      UNLOCK();
   }
 while ( !bVar26 );
   if (lVar20 != -1) {
      local_70 = *(long*)param_2;
   }

   LAB_00102ea8:local_78 = 0;
   plVar1 = (long*)( *(long*)param_1 + -0x10 );
   if (*(long*)param_1 != 0) {
      do {
         lVar3 = *plVar1;
         if (lVar3 == 0) goto LAB_00102ee0;
         LOCK();
         lVar20 = *plVar1;
         bVar26 = lVar3 == lVar20;
         if (bVar26) {
            *plVar1 = lVar3 + 1;
            lVar20 = lVar3;
         }

         UNLOCK();
      }
 while ( !bVar26 );
      if (lVar20 != -1) {
         local_78 = *(long*)param_1;
      }

   }

   LAB_00102ee0:local_80 = 0;
   local_50 = 0x25;
   local_58 = "Benchmark key \'%s:%s\' already exists.";
   String::parse_latin1((StrRange*)&local_80);
   vformat<String,String>(&local_58, (StrRange*)&local_80, &local_78, &local_70);
   _err_print_error("benchmark_begin_measure", "core/os/os.cpp", 0x2d1, "Condition \"benchmark_marks_from.has(mark_key)\" is true.", &local_58, 0, 0);
   pcVar13 = local_58;
   if (local_58 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = (char*)0x0;
         Memory::free_static(pcVar13 + -0x10, false);
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

   lVar3 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   lVar3 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   goto LAB_00102dc5;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OS::benchmark_end_measure(String const&, String const&) */void OS::benchmark_end_measure(OS *this, String *param_1, String *param_2) {
   uint uVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   ulong uVar10;
   char *pcVar11;
   char cVar12;
   undefined4 uVar13;
   undefined4 uVar14;
   ulong uVar15;
   long lVar16;
   long lVar17;
   long *plVar18;
   double *pdVar19;
   int iVar20;
   long lVar21;
   uint uVar22;
   uint uVar23;
   ulong uVar24;
   long in_FS_OFFSET;
   bool bVar25;
   double dVar26;
   long local_80;
   long local_78;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (char*)0x0;
   plVar18 = (long*)( *(long*)param_1 + -0x10 );
   if (*(long*)param_1 != 0) {
      do {
         lVar17 = *plVar18;
         if (lVar17 == 0) goto LAB_00103104;
         LOCK();
         lVar16 = *plVar18;
         bVar25 = lVar17 == lVar16;
         if (bVar25) {
            *plVar18 = lVar17 + 1;
            lVar16 = lVar17;
         }

         UNLOCK();
      }
 while ( !bVar25 );
      if (lVar16 != -1) {
         local_58 = *(char**)param_1;
      }

      LAB_00103104:pcVar11 = local_58;
      local_68 = 0;
      if (local_58 != (char*)0x0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_58);
         local_60 = 0;
         if (*(long*)param_2 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)param_2);
         }

         LOCK();
         plVar18 = (long*)( pcVar11 + -0x10 );
         *plVar18 = *plVar18 + -1;
         UNLOCK();
         if (*plVar18 == 0) {
            Memory::free_static(local_58 + -0x10, false);
         }

         goto LAB_0010315a;
      }

   }

   local_68 = 0;
   local_60 = 0;
   if (*(long*)param_2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)param_2);
   }

   LAB_0010315a:if (( *(long*)( this + 200 ) != 0 ) && ( *(int*)( this + 0xec ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xe8 ) * 4 );
      lVar17 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0xe8 ) * 8 );
      uVar13 = String::hash();
      uVar14 = String::hash();
      lVar16 = *(long*)( this + 0xd0 );
      uVar10 = CONCAT44(0, uVar1);
      uVar15 = CONCAT44(uVar13, uVar14) * 0x3ffff - 1;
      uVar15 = ( uVar15 ^ uVar15 >> 0x1f ) * 0x15;
      uVar15 = ( uVar15 ^ uVar15 >> 0xb ) * 0x41;
      uVar15 = uVar15 >> 0x16 ^ uVar15;
      uVar24 = uVar15 & 0xffffffff;
      if ((int)uVar15 == 0) {
         uVar24 = 1;
      }

      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar24 * lVar17;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar10;
      lVar21 = SUB168(auVar2 * auVar6, 8);
      uVar23 = *(uint*)( lVar16 + lVar21 * 4 );
      iVar20 = SUB164(auVar2 * auVar6, 8);
      if (uVar23 != 0) {
         uVar22 = 0;
         do {
            if ((uint)uVar24 == uVar23) {
               lVar16 = *(long*)( *(long*)( this + 200 ) + lVar21 * 8 );
               cVar12 = String::operator ==((String*)( lVar16 + 0x10 ), (String*)&local_68);
               if (( cVar12 != '\0' ) && ( cVar12 = String::operator ==((String*)( lVar16 + 0x18 ), (String*)&local_60) ),cVar12 != '\0') {
                  lVar17 = ( **(code**)( *singleton + 0x208 ) )();
                  plVar18 = (long*)HashMap<Pair<String,String>,unsigned_long,PairHash<String,String>,HashMapComparatorDefault<Pair<String,String>>,DefaultTypedAllocator<HashMapElement<Pair<String,String>,unsigned_long>>>::operator []((HashMap<Pair<String,String>,unsigned_long,PairHash<String,String>,HashMapComparatorDefault<Pair<String,String>>,DefaultTypedAllocator<HashMapElement<Pair<String,String>,unsigned_long>>>*)( this + 0xc0 ), (Pair*)&local_68);
                  dVar26 = (double)( ulong )(lVar17 - *plVar18) / __LC64;
                  pdVar19 = (double*)HashMap<Pair<String,String>,double,PairHash<String,String>,HashMapComparatorDefault<Pair<String,String>>,DefaultTypedAllocator<HashMapElement<Pair<String,String>,double>>>::operator []((HashMap<Pair<String,String>,double,PairHash<String,String>,HashMapComparatorDefault<Pair<String,String>>,DefaultTypedAllocator<HashMapElement<Pair<String,String>,double>>>*)( this + 0xf0 ), (Pair*)&local_68);
                  *pdVar19 = dVar26;
                  lVar17 = local_60;
                  goto joined_r0x001034f0;
               }

               lVar16 = *(long*)( this + 0xd0 );
            }

            uVar22 = uVar22 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = ( ulong )(iVar20 + 1) * lVar17;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar10;
            lVar21 = SUB168(auVar3 * auVar7, 8);
            uVar23 = *(uint*)( lVar16 + lVar21 * 4 );
            iVar20 = SUB164(auVar3 * auVar7, 8);
         }
 while ( ( uVar23 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = (ulong)uVar23 * lVar17,auVar8._8_8_ = 0,auVar8._0_8_ = uVar10,auVar5._8_8_ = 0,auVar5._0_8_ = ( ulong )(( uVar1 + iVar20 ) - SUB164(auVar4 * auVar8, 8)) * lVar17,auVar9._8_8_ = 0,auVar9._0_8_ = uVar10,uVar22 <= SUB164(auVar5 * auVar9, 8) );
      }

   }

   local_70 = 0;
   plVar18 = (long*)( *(long*)param_2 + -0x10 );
   if (*(long*)param_2 != 0) {
      do {
         lVar17 = *plVar18;
         if (lVar17 == 0) goto LAB_00103350;
         LOCK();
         lVar16 = *plVar18;
         bVar25 = lVar17 == lVar16;
         if (bVar25) {
            *plVar18 = lVar17 + 1;
            lVar16 = lVar17;
         }

         UNLOCK();
      }
 while ( !bVar25 );
      if (lVar16 != -1) {
         local_70 = *(long*)param_2;
      }

   }

   LAB_00103350:local_78 = 0;
   plVar18 = (long*)( *(long*)param_1 + -0x10 );
   if (*(long*)param_1 != 0) {
      do {
         lVar17 = *plVar18;
         if (lVar17 == 0) goto LAB_00103388;
         LOCK();
         lVar16 = *plVar18;
         bVar25 = lVar17 == lVar16;
         if (bVar25) {
            *plVar18 = lVar17 + 1;
            lVar16 = lVar17;
         }

         UNLOCK();
      }
 while ( !bVar25 );
      if (lVar16 != -1) {
         local_78 = *(long*)param_1;
      }

   }

   LAB_00103388:local_80 = 0;
   local_50 = 0x24;
   local_58 = "Benchmark key \'%s:%s\' doesn\'t exist.";
   String::parse_latin1((StrRange*)&local_80);
   vformat<String,String>(&local_58, (StrRange*)&local_80, &local_78, &local_70);
   _err_print_error("benchmark_end_measure", "core/os/os.cpp", 0x2d9, "Condition \"!benchmark_marks_from.has(mark_key)\" is true.", &local_58, 0, 0);
   pcVar11 = local_58;
   if (local_58 != (char*)0x0) {
      LOCK();
      plVar18 = (long*)( local_58 + -0x10 );
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
         local_58 = (char*)0x0;
         Memory::free_static(pcVar11 + -0x10, false);
      }

   }

   lVar17 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar18 = (long*)( local_80 + -0x10 );
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar17 + -0x10 ), false);
      }

   }

   lVar17 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar18 = (long*)( local_78 + -0x10 );
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar17 + -0x10 ), false);
      }

   }

   lVar16 = local_70;
   lVar17 = local_60;
   if (local_70 != 0) {
      LOCK();
      plVar18 = (long*)( local_70 + -0x10 );
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar16 + -0x10 ), false);
         lVar17 = local_60;
      }

   }

   joined_r0x001034f0:local_60 = lVar17;
   if (lVar17 != 0) {
      LOCK();
      plVar18 = (long*)( lVar17 + -0x10 );
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar17 + -0x10 ), false);
      }

   }

   lVar17 = local_68;
   if (local_68 != 0) {
      LOCK();
      plVar18 = (long*)( local_68 + -0x10 );
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
         local_68 = 0;
         Memory::free_static((void*)( lVar17 + -0x10 ), false);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
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
/* OS::get_safe_dir_name(String const&, bool) const */String *OS::get_safe_dir_name(String *param_1, bool param_2) {
   long *plVar1;
   code *pcVar2;
   undefined *puVar3;
   char *pcVar4;
   char cVar5;
   long lVar6;
   char in_CL;
   long *in_RDX;
   long lVar7;
   bool bVar8;
   long in_FS_OFFSET;
   bool bVar9;
   undefined *local_78;
   long local_70;
   Vector<String> local_68[8];
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = (undefined*)0x0;
   if (*in_RDX != 0) {
      plVar1 = (long*)( *in_RDX + -0x10 );
      do {
         lVar7 = *plVar1;
         if (lVar7 == 0) goto LAB_001038cb;
         LOCK();
         lVar6 = *plVar1;
         bVar9 = lVar7 == lVar6;
         if (bVar9) {
            *plVar1 = lVar7 + 1;
            lVar6 = lVar7;
         }

         UNLOCK();
      }
 while ( !bVar9 );
      if (lVar6 != -1) {
         local_78 = (undefined*)*in_RDX;
      }

   }

   LAB_001038cb:local_70 = 0;
   local_58 = &_LC79;
   local_50 = 0xd;
   String::parse_latin1((StrRange*)&local_70);
   bVar9 = SUB81((StrRange*)&local_70, 0);
   String::split((char*)local_68, bVar9, 0x105cd6);
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

   local_70 = 0;
   bVar8 = SUB81((String*)&local_58, 0);
   if (in_CL == '\0') {
      local_50 = 1;
      local_58 = "/";
      String::parse_latin1((StrRange*)&local_70);
      Vector<String>::push_back(local_68);
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

      local_70 = 0;
      local_58 = "\\";
      local_50 = 1;
      String::parse_latin1((StrRange*)&local_70);
      Vector<String>::push_back(local_68);
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

      String::strip_edges(bVar8, SUB81(&local_78, 0));
      pcVar4 = local_58;
      puVar3 = local_78;
      if (local_78 == local_58) {
         if (local_78 != (undefined*)0x0) {
            LOCK();
            plVar1 = (long*)( local_78 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = (undefined*)0x0;
               Memory::free_static(pcVar4 + -0x10, false);
            }

         }

      }
 else {
         if (local_78 != (undefined*)0x0) {
            LOCK();
            plVar1 = (long*)( local_78 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_78 = (undefined*)0x0;
               Memory::free_static(puVar3 + -0x10, false);
            }

         }

         local_78 = local_58;
      }

      cVar5 = String::operator ==((String*)&local_78, ".");
      if (cVar5 == '\0') {
         cVar5 = String::operator ==((String*)&local_78, "..");
         if (cVar5 != '\0') {
            local_50 = 7;
            local_58 = "twodots";
            String::parse_latin1((StrRange*)&local_78);
         }

      }
 else {
         local_50 = 3;
         local_58 = "dot";
         String::parse_latin1((StrRange*)&local_78);
      }

   }
 else {
      local_50 = 2;
      local_58 = "..";
      String::parse_latin1((StrRange*)&local_70);
      Vector<String>::push_back(local_68);
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

      String::replace((char*)&local_70, (char*)&local_78);
      String::strip_edges(bVar8, bVar9);
      pcVar4 = local_58;
      puVar3 = local_78;
      if (local_78 == local_58) {
         if (local_78 != (undefined*)0x0) {
            LOCK();
            plVar1 = (long*)( local_78 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = (undefined*)0x0;
               Memory::free_static(pcVar4 + -0x10, false);
            }

         }

      }
 else {
         if (local_78 != (undefined*)0x0) {
            LOCK();
            plVar1 = (long*)( local_78 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_78 = (undefined*)0x0;
               Memory::free_static(puVar3 + -0x10, false);
            }

         }

         local_78 = local_58;
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

   }

   lVar7 = 0;
   while (true) {
      if (( local_60 == 0 ) || ( *(long*)( local_60 + -8 ) <= lVar7 )) {
         local_70 = 0;
         local_58 = ".";
         local_50 = 1;
         String::parse_latin1((StrRange*)&local_70);
         String::rstrip(param_1);
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

         CowData<String>::_unref((CowData<String>*)&local_60);
         puVar3 = local_78;
         if (local_78 != (undefined*)0x0) {
            LOCK();
            plVar1 = (long*)( local_78 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_78 = (undefined*)0x0;
               Memory::free_static(puVar3 + -0x10, false);
            }

         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return param_1;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      local_58 = "-";
      local_70 = 0;
      local_50 = 1;
      String::parse_latin1((StrRange*)&local_70);
      if (local_60 == 0) break;
      lVar6 = *(long*)( local_60 + -8 );
      if (lVar6 <= lVar7) goto LAB_00103d7b;
      String::replace((String*)&local_58, (String*)&local_78);
      pcVar4 = local_58;
      puVar3 = local_78;
      if (local_78 == local_58) {
         if (local_78 != (undefined*)0x0) {
            LOCK();
            plVar1 = (long*)( local_78 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = (undefined*)0x0;
               Memory::free_static(pcVar4 + -0x10, false);
            }

         }

      }
 else {
         if (local_78 != (undefined*)0x0) {
            LOCK();
            plVar1 = (long*)( local_78 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_78 = (undefined*)0x0;
               Memory::free_static(puVar3 + -0x10, false);
            }

         }

         local_78 = local_58;
      }

      lVar6 = local_70;
      if (local_70 != 0) {
         LOCK();
         plVar1 = (long*)( local_70 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

      lVar7 = lVar7 + 1;
   }
;
   lVar6 = 0;
   LAB_00103d7b:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar6, "p_index", "size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* OS::get_user_data_dir() const */void OS::get_user_data_dir(void) {
   long *plVar1;
   code *pcVar2;
   code *pcVar3;
   long lVar4;
   char *pcVar5;
   bool bVar6;
   long *in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   long local_78;
   long local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_70, "application/config/name", false);
   ProjectSettings::get_setting_with_override((StringName*)local_58);
   Variant::operator_cast_to_String((Variant*)&local_68);
   get_safe_dir_name((String*)&local_98, SUB81(in_RSI, 0));
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

   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   if (( local_98 == 0 ) || ( *(uint*)( local_98 + -8 ) < 2 )) {
      pcVar2 = *(code**)( *in_RSI + 0x2a0 );
      pcVar3 = *(code**)( *in_RSI + 0x268 );
      if (pcVar3 == get_godot_dir_name) {
         local_68 = _LC18;
         local_70 = 0;
         local_60 = 5;
         String::parse_latin1((StrRange*)&local_70);
         String::to_lower();
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

      }
 else {
         ( *pcVar3 )(&local_90);
      }

      local_88 = 0;
      local_68 = "app_userdata";
      local_60 = 0xc;
      String::parse_latin1((StrRange*)&local_88);
      String::path_join((String*)&local_80);
      local_68 = "[unnamed project]";
      local_78 = 0;
      local_60 = 0x11;
      String::parse_latin1((StrRange*)&local_78);
      String::path_join((String*)&local_70);
      if (pcVar2 == get_user_data_dir) {
         *(undefined8*)in_RDI = 0;
         local_68 = ".";
         local_60 = 1;
         String::parse_latin1(in_RDI);
      }
 else {
         ( *pcVar2 )();
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

      lVar4 = local_78;
      if (local_78 != 0) {
         LOCK();
         plVar1 = (long*)( local_78 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_78 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      lVar4 = local_80;
      if (local_80 != 0) {
         LOCK();
         plVar1 = (long*)( local_80 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_80 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

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

   }
 else {
      ProjectSettings::get_singleton();
      StringName::StringName((StringName*)&local_68, "application/config/use_custom_user_dir", false);
      ProjectSettings::get_setting_with_override((StringName*)local_58);
      bVar6 = Variant::operator_cast_to_bool((Variant*)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

      if (bVar6) {
         ProjectSettings::get_singleton();
         StringName::StringName((StringName*)&local_70, "application/config/custom_user_dir_name", false);
         ProjectSettings::get_setting_with_override((StringName*)local_58);
         Variant::operator_cast_to_String((Variant*)&local_68);
         get_safe_dir_name((String*)&local_78, SUB81(in_RSI, 0));
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

         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

         if (( ( local_78 == 0 ) || ( *(uint*)( local_78 + -8 ) < 2 ) ) && ( local_78 != local_98 )) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)&local_98);
         }

         if (*(code**)( *in_RSI + 0x2a0 ) == get_user_data_dir) {
            *(undefined8*)in_RDI = 0;
            local_68 = ".";
            local_60 = 1;
            String::parse_latin1(in_RDI);
         }
 else {
            ( **(code**)( *in_RSI + 0x2a0 ) )();
         }

         lVar4 = local_78;
         if (local_78 != 0) {
            LOCK();
            plVar1 = (long*)( local_78 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_78 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

      }
 else {
         pcVar2 = *(code**)( *in_RSI + 0x2a0 );
         pcVar3 = *(code**)( *in_RSI + 0x268 );
         if (pcVar3 == get_godot_dir_name) {
            local_68 = _LC18;
            local_70 = 0;
            local_60 = 5;
            String::parse_latin1((StrRange*)&local_70);
            String::to_lower();
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

         }
 else {
            ( *pcVar3 )(&local_88);
         }

         local_80 = 0;
         local_68 = "app_userdata";
         local_60 = 0xc;
         String::parse_latin1((StrRange*)&local_80);
         String::path_join((String*)&local_78);
         String::path_join((String*)&local_70);
         if (pcVar2 == get_user_data_dir) {
            *(undefined8*)in_RDI = 0;
            local_68 = ".";
            local_60 = 1;
            String::parse_latin1(in_RDI);
         }
 else {
            ( *pcVar2 )();
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

         lVar4 = local_78;
         if (local_78 != 0) {
            LOCK();
            plVar1 = (long*)( local_78 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_78 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         lVar4 = local_80;
         if (local_80 != 0) {
            LOCK();
            plVar1 = (long*)( local_80 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_80 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

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

      }

   }

   lVar4 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS::benchmark_dump() [clone .part.0] */void OS::benchmark_dump(OS *this) {
   long *plVar1;
   Object *pOVar2;
   uint uVar3;
   code *pcVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   ulong uVar13;
   Object *pOVar14;
   char *pcVar15;
   undefined8 uVar16;
   undefined8 uVar17;
   char cVar18;
   uint uVar19;
   String *pSVar20;
   Variant *pVVar21;
   Resource *this_00;
   uint uVar22;
   int iVar23;
   long lVar24;
   long *plVar25;
   long lVar26;
   uint uVar27;
   Resource *pRVar28;
   void *pvVar29;
   Resource *pRVar30;
   long in_FS_OFFSET;
   bool bVar31;
   byte bVar32;
   double dVar33;
   Variant *local_100;
   Object *local_d8;
   long local_d0;
   long local_c8;
   long local_c0;
   char *local_b8;
   undefined8 local_b0;
   char *local_a8;
   undefined1 local_a0[16];
   undefined1 local_90[16];
   undefined8 local_80;
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   bVar32 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0xb8 ) == 0 ) || ( *(uint*)( *(long*)( this + 0xb8 ) + -8 ) < 2 )) {
      plVar25 = *(long**)( this + 0x108 );
      local_80 = 2;
      local_a0 = (undefined1[16])0x0;
      local_90 = (undefined1[16])0x0;
      if (plVar25 != (long*)0x0) {
         do {
            pSVar20 = (String*)( plVar25 + 2 );
            cVar18 = String::operator ==(pSVar20, "Startup");
            if (cVar18 != '\0') {
               uVar16 = local_a0._0_8_;
               if (( local_a0._0_8_ != 0 ) && ( local_80._4_4_ != 0 )) {
                  uVar3 = *(uint*)( hash_table_size_primes + ( local_80 & 0xffffffff ) * 4 );
                  lVar26 = *(long*)( hash_table_size_primes_inv + ( local_80 & 0xffffffff ) * 8 );
                  uVar19 = String::hash();
                  uVar13 = CONCAT44(0, uVar3);
                  uVar17 = local_a0._8_8_;
                  uVar22 = 1;
                  if (uVar19 != 0) {
                     uVar22 = uVar19;
                  }

                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = (ulong)uVar22 * lVar26;
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = uVar13;
                  lVar24 = SUB168(auVar5 * auVar9, 8);
                  uVar19 = *(uint*)( local_a0._8_8_ + lVar24 * 4 );
                  iVar23 = SUB164(auVar5 * auVar9, 8);
                  if (uVar19 != 0) {
                     uVar27 = 0;
                     do {
                        if (( uVar22 == uVar19 ) && ( cVar18 = String::operator ==((String*)( *(long*)( uVar16 + lVar24 * 8 ) + 0x10 ), pSVar20) ),cVar18 != '\0') goto LAB_00104768;
                        uVar27 = uVar27 + 1;
                        auVar6._8_8_ = 0;
                        auVar6._0_8_ = ( ulong )(iVar23 + 1) * lVar26;
                        auVar10._8_8_ = 0;
                        auVar10._0_8_ = uVar13;
                        lVar24 = SUB168(auVar6 * auVar10, 8);
                        uVar19 = *(uint*)( uVar17 + lVar24 * 4 );
                        iVar23 = SUB164(auVar6 * auVar10, 8);
                     }
 while ( ( uVar19 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar19 * lVar26,auVar11._8_8_ = 0,auVar11._0_8_ = uVar13,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar3 + iVar23 ) - SUB164(auVar7 * auVar11, 8)) * lVar26,auVar12._8_8_ = 0,auVar12._0_8_ = uVar13,uVar27 <= SUB164(auVar8 * auVar12, 8) );
                  }

               }

               local_c0 = 0;
               local_b8 = "";
               local_b0 = 0;
               String::parse_latin1((StrRange*)&local_c0);
               HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::insert((String*)&local_b8, (String*)&local_a8, SUB81(pSVar20, 0));
               lVar26 = local_c0;
               if (local_c0 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_c0 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_c0 = 0;
                     Memory::free_static((void*)( lVar26 + -0x10 ), false);
                  }

               }

            }

            LAB_00104768:dVar33 = _LC98 * (double)plVar25[4];
            local_c0 = 0;
            plVar1 = (long*)( plVar25[3] + -0x10 );
            if (plVar25[3] != 0) {
               do {
                  lVar26 = *plVar1;
                  if (lVar26 == 0) goto LAB_001047ad;
                  LOCK();
                  lVar24 = *plVar1;
                  bVar31 = lVar26 == lVar24;
                  if (bVar31) {
                     *plVar1 = lVar26 + 1;
                     lVar24 = lVar26;
                  }

                  UNLOCK();
               }
 while ( !bVar31 );
               if (lVar24 != -1) {
                  local_c0 = plVar25[3];
               }

            }

            LAB_001047ad:local_b8 = "\t\t- %s: %.3f msec.\n";
            local_c8 = 0;
            local_b0 = 0x13;
            String::parse_latin1((StrRange*)&local_c8);
            vformat<String,double>(dVar33, (String*)&local_b8, (StrRange*)&local_c8, (StrRange*)&local_c0);
            pSVar20 = (String*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator []((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)&local_a8, pSVar20);
            String::operator +=(pSVar20, (String*)&local_b8);
            pcVar15 = local_b8;
            if (local_b8 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_b8 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_b8 = (char*)0x0;
                  Memory::free_static(pcVar15 + -0x10, false);
               }

            }

            lVar26 = local_c8;
            if (local_c8 != 0) {
               LOCK();
               plVar1 = (long*)( local_c8 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_c8 = 0;
                  Memory::free_static((void*)( lVar26 + -0x10 ), false);
               }

            }

            lVar26 = local_c0;
            if (local_c0 != 0) {
               LOCK();
               plVar1 = (long*)( local_c0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_c0 = 0;
                  Memory::free_static((void*)( lVar26 + -0x10 ), false);
               }

            }

            plVar25 = (long*)*plVar25;
         }
 while ( plVar25 != (long*)0x0 );
      }

      Variant::Variant((Variant*)local_58, "BENCHMARK:");
      stringify_variants((Variant*)&local_b8);
      __print_line((String*)&local_b8);
      pcVar15 = local_b8;
      if (local_b8 != (char*)0x0) {
         LOCK();
         plVar25 = (long*)( local_b8 + -0x10 );
         *plVar25 = *plVar25 + -1;
         UNLOCK();
         if (*plVar25 == 0) {
            local_b8 = (char*)0x0;
            Memory::free_static(pcVar15 + -0x10, false);
         }

      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if ((long*)local_90._0_8_ != (long*)0x0) {
         plVar25 = (long*)local_90._0_8_;
         do {
            local_c8 = 0;
            plVar1 = (long*)( plVar25[3] + -0x10 );
            if (plVar25[3] != 0) {
               do {
                  lVar26 = *plVar1;
                  if (lVar26 == 0) goto LAB_00104b68;
                  LOCK();
                  lVar24 = *plVar1;
                  bVar31 = lVar26 == lVar24;
                  if (bVar31) {
                     *plVar1 = lVar26 + 1;
                     lVar24 = lVar26;
                  }

                  UNLOCK();
               }
 while ( !bVar31 );
               if (lVar24 != -1) {
                  local_c8 = plVar25[3];
               }

            }

            LAB_00104b68:local_d0 = 0;
            plVar1 = (long*)( plVar25[2] + -0x10 );
            if (plVar25[2] != 0) {
               do {
                  lVar26 = *plVar1;
                  if (lVar26 == 0) goto LAB_00104ba0;
                  LOCK();
                  lVar24 = *plVar1;
                  bVar31 = lVar26 == lVar24;
                  if (bVar31) {
                     *plVar1 = lVar26 + 1;
                     lVar24 = lVar26;
                  }

                  UNLOCK();
               }
 while ( !bVar31 );
               if (lVar24 != -1) {
                  local_d0 = plVar25[2];
               }

            }

            LAB_00104ba0:local_b8 = "\t[%s]\n%s";
            local_d8 = (Object*)0x0;
            local_b0 = 8;
            String::parse_latin1((StrRange*)&local_d8);
            vformat<String,String>((String*)&local_c0, (StrRange*)&local_d8, &local_d0, &local_c8);
            Variant::Variant((Variant*)local_58, (String*)&local_c0);
            stringify_variants((Variant*)&local_b8);
            __print_line((String*)&local_b8);
            pcVar15 = local_b8;
            if (local_b8 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_b8 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_b8 = (char*)0x0;
                  Memory::free_static(pcVar15 + -0x10, false);
               }

            }

            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            lVar26 = local_c0;
            if (local_c0 != 0) {
               LOCK();
               plVar1 = (long*)( local_c0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_c0 = 0;
                  Memory::free_static((void*)( lVar26 + -0x10 ), false);
               }

            }

            pOVar14 = local_d8;
            if (local_d8 != (Object*)0x0) {
               LOCK();
               pOVar2 = local_d8 + -0x10;
               *(long*)pOVar2 = *(long*)pOVar2 + -1;
               UNLOCK();
               if (*(long*)pOVar2 == 0) {
                  local_d8 = (Object*)0x0;
                  Memory::free_static(pOVar14 + -0x10, false);
               }

            }

            lVar26 = local_d0;
            if (local_d0 != 0) {
               LOCK();
               plVar1 = (long*)( local_d0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_d0 = 0;
                  Memory::free_static((void*)( lVar26 + -0x10 ), false);
               }

            }

            lVar26 = local_c8;
            if (local_c8 != 0) {
               LOCK();
               plVar1 = (long*)( local_c8 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_c8 = 0;
                  Memory::free_static((void*)( lVar26 + -0x10 ), false);
               }

            }

            plVar25 = (long*)*plVar25;
         }
 while ( plVar25 != (long*)0x0 );
      }

      if ((void*)local_a0._0_8_ != (void*)0x0) {
         pvVar29 = (void*)local_a0._0_8_;
         if (( local_80._4_4_ != 0 ) && ( uVar3 = *(uint*)( hash_table_size_primes + ( local_80 & 0xffffffff ) * 4 ) ),uVar3 != 0) {
            lVar26 = 0;
            do {
               if (*(int*)( local_a0._8_8_ + lVar26 ) != 0) {
                  pvVar29 = *(void**)( (long)pvVar29 + lVar26 * 2 );
                  *(int*)( local_a0._8_8_ + lVar26 ) = 0;
                  if (*(long*)( (long)pvVar29 + 0x18 ) != 0) {
                     LOCK();
                     plVar25 = (long*)( *(long*)( (long)pvVar29 + 0x18 ) + -0x10 );
                     *plVar25 = *plVar25 + -1;
                     UNLOCK();
                     if (*plVar25 == 0) {
                        lVar24 = *(long*)( (long)pvVar29 + 0x18 );
                        *(undefined8*)( (long)pvVar29 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar24 + -0x10 ), false);
                     }

                  }

                  if (*(long*)( (long)pvVar29 + 0x10 ) != 0) {
                     LOCK();
                     plVar25 = (long*)( *(long*)( (long)pvVar29 + 0x10 ) + -0x10 );
                     *plVar25 = *plVar25 + -1;
                     UNLOCK();
                     if (*plVar25 == 0) {
                        lVar24 = *(long*)( (long)pvVar29 + 0x10 );
                        *(undefined8*)( (long)pvVar29 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar24 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar29, false);
                  *(undefined8*)( local_a0._0_8_ + lVar26 * 2 ) = 0;
                  pvVar29 = (void*)local_a0._0_8_;
               }

               lVar26 = lVar26 + 4;
            }
 while ( lVar26 != (ulong)uVar3 << 2 );
            local_80 = local_80 & 0xffffffff;
            local_90 = (undefined1[16])0x0;
            if (pvVar29 == (void*)0x0) goto LAB_00104ddf;
         }

         Memory::free_static(pvVar29, false);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static((void*)local_a0._8_8_, false);
            return;
         }

         goto LAB_0010538b;
      }

   }
 else {
      FileAccess::open((String*)&local_d8, (int)this + 0xb8, (Error*)0x2);
      if (local_d8 != (Object*)0x0) {
         Dictionary::Dictionary((Dictionary*)&local_d0);
         plVar25 = *(long**)( this + 0x108 );
         if (plVar25 != (long*)0x0) {
            do {
               local_b8 = (char*)0x0;
               plVar1 = (long*)( plVar25[3] + -0x10 );
               if (plVar25[3] != 0) {
                  do {
                     lVar26 = *plVar1;
                     if (lVar26 == 0) goto LAB_00104f20;
                     LOCK();
                     lVar24 = *plVar1;
                     bVar31 = lVar26 == lVar24;
                     if (bVar31) {
                        *plVar1 = lVar26 + 1;
                        lVar24 = lVar26;
                     }

                     UNLOCK();
                  }
 while ( !bVar31 );
                  if (lVar24 != -1) {
                     local_b8 = (char*)plVar25[3];
                  }

               }

               LAB_00104f20:local_c0 = 0;
               plVar1 = (long*)( plVar25[2] + -0x10 );
               if (plVar25[2] != 0) {
                  do {
                     lVar26 = *plVar1;
                     if (lVar26 == 0) goto LAB_00104f58;
                     LOCK();
                     lVar24 = *plVar1;
                     bVar31 = lVar26 == lVar24;
                     if (bVar31) {
                        *plVar1 = lVar26 + 1;
                        lVar24 = lVar26;
                     }

                     UNLOCK();
                  }
 while ( !bVar31 );
                  if (lVar24 != -1) {
                     local_c0 = plVar25[2];
                  }

               }

               LAB_00104f58:local_c8 = 0;
               local_a8 = "[%s] %s";
               local_a0._0_8_ = 7;
               String::parse_latin1((StrRange*)&local_c8);
               vformat<String,String>((String*)&local_a8, (StrRange*)&local_c8, &local_c0, &local_b8);
               lVar26 = local_c8;
               if (local_c8 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_c8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_c8 = 0;
                     Memory::free_static((void*)( lVar26 + -0x10 ), false);
                  }

               }

               lVar26 = local_c0;
               if (local_c0 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_c0 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_c0 = 0;
                     Memory::free_static((void*)( lVar26 + -0x10 ), false);
                  }

               }

               pcVar15 = local_b8;
               if (local_b8 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_b8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_b8 = (char*)0x0;
                     Memory::free_static(pcVar15 + -0x10, false);
                  }

               }

               Variant::Variant((Variant*)local_58, (double)plVar25[4]);
               Variant::Variant((Variant*)local_78, (String*)&local_a8);
               pVVar21 = (Variant*)Dictionary::operator []((Variant*)&local_d0);
               if (pVVar21 != (Variant*)local_58) {
                  if (Variant::needs_deinit[*(int*)pVVar21] != '\0') {
                     Variant::_clear_internal();
                  }

                  *(undefined4*)pVVar21 = 0;
                  *(int*)pVVar21 = local_58[0];
                  *(undefined8*)( pVVar21 + 8 ) = local_50;
                  *(undefined8*)( pVVar21 + 0x10 ) = uStack_48;
                  local_58[0] = 0;
               }

               if (Variant::needs_deinit[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }

               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               pcVar15 = local_a8;
               if (local_a8 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_a8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_a8 = (char*)0x0;
                     Memory::free_static(pcVar15 + -0x10, false);
                  }

               }

               plVar25 = (long*)*plVar25;
            }
 while ( plVar25 != (long*)0x0 );
         }

         local_100 = (Variant*)&local_a8;
         pRVar28 = (Resource*)0x0;
         this_00 = (Resource*)operator_new(0x270, "");
         pRVar30 = this_00;
         for (lVar26 = 0x4e; lVar26 != 0; lVar26 = lVar26 + -1) {
            *(undefined8*)pRVar30 = 0;
            pRVar30 = pRVar30 + (ulong)bVar32 * -0x10 + 8;
         }

         Resource::Resource(this_00);
         *(undefined***)this_00 = &PTR__initialize_classv_0010b7b0;
         *(undefined8*)( this_00 + 0x240 ) = 0;
         *(undefined4*)( this_00 + 0x248 ) = 0;
         *(undefined8*)( this_00 + 0x260 ) = 0;
         *(undefined4*)( this_00 + 0x268 ) = 0;
         *(undefined1(*) [16])( this_00 + 0x250 ) = (undefined1[16])0x0;
         postinitialize_handler((Object*)this_00);
         cVar18 = RefCounted::init_ref();
         if (cVar18 != '\0') {
            cVar18 = RefCounted::reference();
            if (cVar18 != '\0') {
               pRVar28 = this_00;
            }

            cVar18 = RefCounted::unreference();
            if (cVar18 != '\0') {
               cVar18 = predelete_handler((Object*)this_00);
               if (cVar18 != '\0') {
                  ( **(code**)( *(long*)this_00 + 0x140 ) )(this_00);
                  Memory::free_static(this_00, false);
               }

            }

         }

         pOVar14 = local_d8;
         pcVar4 = *(code**)( *(long*)local_d8 + 0x2a8 );
         local_b8 = (char*)0x0;
         local_a8 = "\t";
         local_a0._0_8_ = 1;
         String::parse_latin1((StrRange*)&local_b8);
         Variant::Variant((Variant*)local_58, (Dictionary*)&local_d0);
         JSON::stringify(local_100, (String*)local_58, SUB81((StrRange*)&local_b8, 0), false);
         ( *pcVar4 )(pOVar14);
         pcVar15 = local_a8;
         if (local_a8 != (char*)0x0) {
            LOCK();
            plVar25 = (long*)( local_a8 + -0x10 );
            *plVar25 = *plVar25 + -1;
            UNLOCK();
            if (*plVar25 == 0) {
               local_a8 = (char*)0x0;
               Memory::free_static(pcVar15 + -0x10, false);
            }

         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         pcVar15 = local_b8;
         if (local_b8 != (char*)0x0) {
            LOCK();
            plVar25 = (long*)( local_b8 + -0x10 );
            *plVar25 = *plVar25 + -1;
            UNLOCK();
            if (*plVar25 == 0) {
               local_b8 = (char*)0x0;
               Memory::free_static(pcVar15 + -0x10, false);
            }

         }

         if (( ( pRVar28 != (Resource*)0x0 ) && ( cVar18 = RefCounted::unreference() ),cVar18 != '\0' )) &&( cVar18 = cVar18 != '\0' )(**(code**)( *(long*)pRVar28 + 0x140 ))(pRVar28);
         Memory::free_static(pRVar28, false);
      }

      Dictionary::~Dictionary((Dictionary*)&local_d0);
      if (( ( local_d8 != (Object*)0x0 ) && ( cVar18 = RefCounted::unreference() ),pOVar14 = local_d8,cVar18 != '\0' )) &&( cVar18 = cVar18 != '\0' )(**(code**)( *(long*)pOVar14 + 0x140 ))(pOVar14);
      Memory::free_static(pOVar14, false);
   }

}
}LAB_00104ddf:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
LAB_0010538b:/* WARNING: Subroutine does not return */__stack_chk_fail();}/* OS::benchmark_dump() */void OS::benchmark_dump(OS *this) {
   if (this[0xb0] != (OS)0x0) {
      benchmark_dump(this);
      return;
   }

   return;
}
/* Vector<Logger*>::push_back(Logger*) [clone .isra.0] */void Vector<Logger*>::push_back(Vector<Logger*> *this, Logger *param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<Logger*>::resize<false>((CowData<Logger*>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<Logger*>::_copy_on_write((CowData<Logger*>*)( this + 8 ));
            *(Logger**)( *(long*)( this + 8 ) + lVar3 * 8 ) = param_1;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* OS::OS() */void OS::OS(OS *this) {
   long *plVar1;
   undefined8 uVar2;
   long lVar3;
   Logger *pLVar4;
   CompositeLogger *this_00;
   long in_FS_OFFSET;
   Vector<Logger*> aVStack_38[8];
   long local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined2*)( this + 0x28 ) = 0;
   *(undefined2*)( this + 0x40 ) = 0;
   *(undefined1(*) [16])( this + 0x58 ) = (undefined1[16])0x0;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 8*i + 8 ) ) = 0;
   }

   *(undefined***)this = &PTR___cxa_pure_virtual_0010b988;
   *(undefined2*)( this + 0x20 ) = 1;
   *(undefined8*)( this + 0x38 ) = 0x101000000000000;
   *(code**)( this + 0x78 ) = Variant::Variant;
   *(undefined4*)( this + 0x24 ) = 10000;
   this[0x2a] = (OS)0x0;
   *(undefined8*)( this + 0x30 ) = 0;
   this[0x42] = (OS)0x0;
   *(undefined8*)( this + 0x48 ) = 0;
   this[0x50] = (OS)0x0;
   *(undefined8*)( this + 0x68 ) = 0;
   this[0x70] = (OS)0x0;
   for (int i = 0; i < 5; i++) {
      *(undefined8*)( this + ( 8*i + 128 ) ) = 0;
   }

   uVar2 = _LC95;
   *(undefined2*)( this + 0x128 ) = 0;
   *(undefined8*)( this + 0xa8 ) = uVar2;
   this[0xb0] = (OS)0x0;
   *(undefined8*)( this + 0xb8 ) = 0;
   *(undefined8*)( this + 0xe8 ) = uVar2;
   *(undefined8*)( this + 0x118 ) = uVar2;
   *(undefined8*)( this + 0x120 ) = 0;
   *(undefined1(*) [16])( this + 200 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xd8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xf8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x108 ) = (undefined1[16])0x0;
   local_30 = 0;
   singleton = this;
   pLVar4 = (Logger*)operator_new(8, "");
   *(code**)pLVar4 = CompositeLogger::add_logger;
   Vector<Logger*>::push_back(aVStack_38, pLVar4);
   this_00 = (CompositeLogger*)operator_new(0x18, "");
   CompositeLogger::CompositeLogger(this_00, (Vector*)aVStack_38);
   plVar1 = *(long**)( this + 0x48 );
   if (plVar1 != (long*)0x0) {
      ( **(code**)( *plVar1 + 0x10 ) )(plVar1);
      Memory::free_static(plVar1, false);
   }

   lVar3 = local_30;
   *(CompositeLogger**)( this + 0x48 ) = this_00;
   if (local_30 != 0) {
      LOCK();
      plVar1 = (long*)( local_30 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_30 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS::add_logger(Logger*) */void OS::add_logger(OS *this, Logger *param_1) {
   long *plVar1;
   long lVar2;
   CompositeLogger *this_00;
   long in_FS_OFFSET;
   Vector<Logger*> aVStack_38[8];
   long local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(Logger**)( this + 0x48 ) == (Logger*)0x0) {
      local_30 = 0;
      Vector<Logger*>::push_back(aVStack_38, param_1);
      this_00 = (CompositeLogger*)operator_new(0x18, "");
      CompositeLogger::CompositeLogger(this_00, (Vector*)aVStack_38);
      lVar2 = local_30;
      *(CompositeLogger**)( this + 0x48 ) = this_00;
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

      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      CompositeLogger::add_logger(*(Logger**)( this + 0x48 ));
      return;
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
/* Resource::set_last_modified_time(unsigned long) */void Resource::set_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x198 ) = param_1;
   return;
}
/* Resource::set_import_last_modified_time(unsigned long) */void Resource::set_import_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x1a0 ) = param_1;
   return;
}
/* OS::get_user_prefers_integrated_gpu() const */undefined8 OS::get_user_prefers_integrated_gpu(void) {
   return 0;
}
/* OS::get_stdin_type() const */undefined8 OS::get_stdin_type(void) {
   return 4;
}
/* OS::get_stdout_type() const */undefined8 OS::get_stdout_type(void) {
   return 4;
}
/* OS::get_stderr_type() const */undefined8 OS::get_stderr_type(void) {
   return 4;
}
/* OS::open_dynamic_library(String const&, void*&, OS::GDExtensionData*) */undefined8 OS::open_dynamic_library(String *param_1, void **param_2, GDExtensionData *param_3) {
   return 2;
}
/* OS::close_dynamic_library(void*) */undefined8 OS::close_dynamic_library(void *param_1) {
   return 2;
}
/* OS::get_dynamic_library_symbol_handle(void*, String const&, void*&, bool) */undefined8 OS::get_dynamic_library_symbol_handle(void *param_1, String *param_2, void **param_3, bool param_4) {
   return 2;
}
/* OS::get_system_fonts() const */OS * __thiscall OS::get_system_fonts(OS *this){
   *(undefined8*)( this + 8 ) = 0;
   return this;
}
/* OS::get_system_font_path(String const&, int, int, bool) const */String *OS::get_system_font_path(String *param_1, int param_2, int param_3, bool param_4) {
   *(undefined8*)param_1 = 0;
   return param_1;
}
/* OS::get_system_font_path_for_text(String const&, String const&, String const&, String const&,
   int, int, bool) const */String *OS::get_system_font_path_for_text(String *param_1, String *param_2, String *param_3, String *param_4, int param_5, int param_6, bool param_7) {
   *(undefined8*)( param_1 + 8 ) = 0;
   return param_1;
}
/* OS::vibrate_handheld(int, float) */void OS::vibrate_handheld(int param_1, float param_2) {
   return;
}
/* OS::get_version_alias() const */void OS::get_version_alias(void) {
   long lVar1;
   long *in_RSI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *in_RSI + 0x1a0 ) )();
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS::get_cmdline_platform_args() const */OS * __thiscall OS::get_cmdline_platform_args(OS *this){
   *(undefined8*)this = 0;
   return this;
}
/* OS::is_userfs_persistent() const */undefined8 OS::is_userfs_persistent(void) {
   return 1;
}
/* OS::set_crash_handler_silent() */void OS::set_crash_handler_silent(OS *this) {
   this[0x129] = (OS)0x1;
   return;
}
/* OS::is_crash_handler_silent() */OS OS::is_crash_handler_silent(OS *this) {
   return this[0x129];
}
/* OS::disable_crash_handler() */void OS::disable_crash_handler(void) {
   return;
}
/* OS::is_disable_crash_handler() const */undefined8 OS::is_disable_crash_handler(void) {
   return 0;
}
/* OS::initialize_debugging() */void OS::initialize_debugging(void) {
   return;
}
/* OS::move_to_trash(String const&) */undefined8 OS::move_to_trash(String *param_1) {
   return 1;
}
/* OS::request_permission(String const&) */undefined8 OS::request_permission(String *param_1) {
   return 1;
}
/* OS::request_permissions() */undefined8 OS::request_permissions(void) {
   return 1;
}
/* OS::get_granted_permissions() const */OS * __thiscall OS::get_granted_permissions(OS *this){
   *(undefined8*)( this + 8 ) = 0;
   return this;
}
/* OS::revoke_granted_permissions() */void OS::revoke_granted_permissions(void) {
   return;
}
/* OS::load_platform_gdextensions() const */void OS::load_platform_gdextensions(void) {
   return;
}
/* OS::_test_create_rendering_device_and_gl(String const&) const */undefined8 OS::_test_create_rendering_device_and_gl(String *param_1) {
   return 1;
}
/* OS::_test_create_rendering_device(String const&) const */undefined8 OS::_test_create_rendering_device(String *param_1) {
   return 1;
}
/* JSON::is_class_ptr(void*) const */uint JSON::is_class_ptr(JSON *this, void *param_1) {
   return (uint)CONCAT71(0x10bd, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10bc, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10bd, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10bd, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* JSON::_getv(StringName const&, Variant&) const */undefined8 JSON::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* JSON::_setv(StringName const&, Variant const&) */undefined8 JSON::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* JSON::_validate_propertyv(PropertyInfo&) const */void JSON::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* JSON::_property_can_revertv(StringName const&) const */undefined8 JSON::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* JSON::_property_get_revertv(StringName const&, Variant&) const */undefined8 JSON::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* JSON::_notificationv(int, bool) */void JSON::_notificationv(int param_1, bool param_2) {
   return;
}
/* OS::execute_with_pipe(String const&, List<String, DefaultAllocator> const&, bool) */String *OS::execute_with_pipe(String *param_1, List *param_2, bool param_3) {
   Dictionary::Dictionary((Dictionary*)param_1);
   return param_1;
}
/* CowData<Logger*>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Logger*>::_copy_on_write(void) {
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
/* JSON::_get_class_namev() const */undefined8 *JSON::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00105db3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00105db3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "JSON");
         goto LAB_00105e1e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "JSON");
   LAB_00105e1e:return &_get_class_namev();
}
/* OS::get_default_thread_pool_size() const */void OS::get_default_thread_pool_size(OS *this) {
   if (*(code**)( *(long*)this + 0x2d8 ) == get_processor_count) {
      std::thread::hardware_concurrency();
      return;
   }

   /* WARNING: Could not recover jumptable at 0x00105e80. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *(long*)this + 0x2d8 ) )();
   return;
}
/* OS::get_system_ca_certificates() */OS * __thiscall OS::get_system_ca_certificates(OS *this){
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
/* Resource::get_base_extension() const */Resource * __thiscall Resource::get_base_extension(Resource *this){
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
/* OS::get_cmdline_args() const */void OS::get_cmdline_args(void) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   CowData<char32_t> *this;
   CowData *pCVar4;
   long in_RSI;
   long *in_RDI;
   plVar1 = *(long**)( in_RSI + 0x10 );
   *in_RDI = 0;
   if (( plVar1 != (long*)0x0 ) && ( pCVar4 = (CowData*)*plVar1 ),pCVar4 != (CowData*)0x0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *in_RDI = (long)pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
      do {
         while (true) {
            this(CowData<char32_t> * operator_new(0x20, DefaultAllocator::alloc));
            *(undefined1(*) [16])this = (undefined1[16])0x0;
            *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
            if (*(long*)pCVar4 != 0) {
               CowData<char32_t>::_ref(this, pCVar4);
            }

            plVar1 = (long*)*in_RDI;
            lVar2 = plVar1[1];
            *(undefined8*)( this + 8 ) = 0;
            *(long**)( this + 0x18 ) = plVar1;
            *(long*)( this + 0x10 ) = lVar2;
            if (lVar2 != 0) {
               *(CowData<char32_t>**)( lVar2 + 8 ) = this;
            }

            plVar1[1] = (long)this;
            if (*plVar1 != 0) break;
            pCVar4 = *(CowData**)( pCVar4 + 8 );
            *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
            *plVar1 = (long)this;
            if (pCVar4 == (CowData*)0x0) {
               return;
            }

         }
;
         pCVar4 = *(CowData**)( pCVar4 + 8 );
         *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
      }
 while ( pCVar4 != (CowData*)0x0 );
   }

   return;
}
/* OS::get_cmdline_user_args() const */void OS::get_cmdline_user_args(void) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   CowData<char32_t> *this;
   CowData *pCVar4;
   long in_RSI;
   long *in_RDI;
   plVar1 = *(long**)( in_RSI + 0x18 );
   *in_RDI = 0;
   if (( plVar1 != (long*)0x0 ) && ( pCVar4 = (CowData*)*plVar1 ),pCVar4 != (CowData*)0x0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *in_RDI = (long)pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
      do {
         while (true) {
            this(CowData<char32_t> * operator_new(0x20, DefaultAllocator::alloc));
            *(undefined1(*) [16])this = (undefined1[16])0x0;
            *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
            if (*(long*)pCVar4 != 0) {
               CowData<char32_t>::_ref(this, pCVar4);
            }

            plVar1 = (long*)*in_RDI;
            lVar2 = plVar1[1];
            *(undefined8*)( this + 8 ) = 0;
            *(long**)( this + 0x18 ) = plVar1;
            *(long*)( this + 0x10 ) = lVar2;
            if (lVar2 != 0) {
               *(CowData<char32_t>**)( lVar2 + 8 ) = this;
            }

            plVar1[1] = (long)this;
            if (*plVar1 != 0) break;
            pCVar4 = *(CowData**)( pCVar4 + 8 );
            *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
            *plVar1 = (long)this;
            if (pCVar4 == (CowData*)0x0) {
               return;
            }

         }
;
         pCVar4 = *(CowData**)( pCVar4 + 8 );
         *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
      }
 while ( pCVar4 != (CowData*)0x0 );
   }

   return;
}
/* OS::create_instance(List<String, DefaultAllocator> const&, long*) */ulong OS::create_instance(OS *this, List *param_1, long *param_2) {
   long *plVar1;
   code *pcVar2;
   code *pcVar3;
   long lVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar2 = *(code**)( *(long*)this + 0x118 );
   pcVar3 = *(code**)( *(long*)this + 0x100 );
   if (pcVar3 == get_executable_path) {
      local_38 = 0;
      if (*(long*)( this + 8 ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_38, (CowData*)( this + 8 ));
      }

   }
 else {
      ( *pcVar3 )(&local_38, this);
   }

   uVar5 = ( *pcVar2 )(this, &local_38, param_1, param_2, 0);
   lVar4 = local_38;
   if (local_38 != 0) {
      LOCK();
      plVar1 = (long*)( local_38 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_38 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
         uVar5 = uVar5 & 0xffffffff;
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JSON::get_class() const */void JSON::get_class(void) {
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
/* JSON::~JSON() */void JSON::~JSON(JSON *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_0010b7b0;
   if (*(long*)( this + 0x260 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x260 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x260 );
         *(undefined8*)( this + 0x260 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (Variant::needs_deinit[*(int*)( this + 0x248 )] != '\0') {
      Variant::_clear_internal();
   }

   if (*(long*)( this + 0x240 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x240 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x240 );
         *(undefined8*)( this + 0x240 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         Resource::~Resource((Resource*)this);
         return;
      }

   }

   Resource::~Resource((Resource*)this);
   return;
}
/* JSON::~JSON() */void JSON::~JSON(JSON *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_0010b7b0;
   if (*(long*)( this + 0x260 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x260 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x260 );
         *(undefined8*)( this + 0x260 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (Variant::needs_deinit[*(int*)( this + 0x248 )] != '\0') {
      Variant::_clear_internal();
   }

   if (*(long*)( this + 0x240 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x240 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x240 );
         *(undefined8*)( this + 0x240 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   Resource::~Resource((Resource*)this);
   operator_delete(this, 0x270);
   return;
}
/* JSON::_initialize_classv() */void JSON::_initialize_classv(void) {
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

            if ((code*)PTR__bind_methods_0010f008 != RefCounted::_bind_methods) {
               RefCounted::_bind_methods();
            }

            RefCounted::initialize_class()::initialized =
            '\x01';
         }

         local_68 = 0;
         local_58 = "RefCounted";
         local_50 = 10;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "Resource";
         local_70 = 0;
         local_50 = 8;
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

         Resource::_bind_methods();
         Resource::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "Resource";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "JSON";
      local_70 = 0;
      local_50 = 4;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_58 != (undefined*)0x0 )) {
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

      if ((code*)_GLOBAL_OFFSET_TABLE_ != Resource::_bind_methods) {
         JSON::_bind_methods();
      }

      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JSON::is_class(String const&) const */undefined8 JSON::is_class(JSON *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long lVar4;
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
                  if (lVar5 == 0) goto LAB_0010697f;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar5 == lVar7;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar7 = lVar5;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar7 != -1) {
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

      LAB_0010697f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00106a33;
   }

   cVar6 = String::operator ==(param_1, "JSON");
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
                     if (lVar5 == 0) goto LAB_00106ba3;
                     LOCK();
                     lVar7 = *plVar1;
                     bVar9 = lVar5 == lVar7;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar7 = lVar5;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar7 != -1) {
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

         LAB_00106ba3:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00106a33;
      }

      cVar6 = String::operator ==(param_1, "Resource");
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
                        if (lVar5 == 0) goto LAB_00106c83;
                        LOCK();
                        lVar7 = *plVar1;
                        bVar9 = lVar5 == lVar7;
                        if (bVar9) {
                           *plVar1 = lVar5 + 1;
                           lVar7 = lVar5;
                        }

                        UNLOCK();
                     }
 while ( !bVar9 );
                     if (lVar7 != -1) {
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

            LAB_00106c83:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

            if (cVar6 != '\0') goto LAB_00106a33;
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
                           if (lVar5 == 0) goto LAB_00106b0b;
                           LOCK();
                           lVar7 = *plVar1;
                           bVar9 = lVar5 == lVar7;
                           if (bVar9) {
                              *plVar1 = lVar5 + 1;
                              lVar7 = lVar5;
                           }

                           UNLOCK();
                        }
 while ( !bVar9 );
                        if (lVar7 != -1) {
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

               LAB_00106b0b:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

               if (cVar6 != '\0') goto LAB_00106a33;
            }

            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar8 = String::operator ==(param_1, "Object");
               return uVar8;
            }

            goto LAB_00106d99;
         }

      }

   }

   LAB_00106a33:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00106d99:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
      LAB_00106f08:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00106f08;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x00106f26;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x00106f26:if (lVar2 == 0) {
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
      LAB_00107308:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00107308;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00107325;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00107325:if (lVar2 == 0) {
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
/* JSON::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void JSON::_get_property_listv(JSON *this, List *param_1, bool param_2) {
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
   undefined *local_78;
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
   local_78 = &_LC7;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = &_LC7;
   local_98 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (undefined*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_00107758:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00107758;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00107775;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00107775:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "JSON", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (undefined*)0x0 )) {
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
/* List<String, DefaultAllocator>::~List() */void List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   long *plVar5;
   plVar5 = *(long**)this;
   if (plVar5 == (long*)0x0) {
      return;
   }

   do {
      plVar2 = (long*)*plVar5;
      if (plVar2 == (long*)0x0) {
         if ((int)plVar5[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if ((long*)plVar2[3] == plVar5) {
         lVar4 = plVar2[1];
         lVar3 = plVar2[2];
         *plVar5 = lVar4;
         if (plVar2 == (long*)plVar5[1]) {
            plVar5[1] = lVar3;
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 8 ) = lVar4;
            lVar4 = plVar2[1];
         }

         if (lVar4 != 0) {
            *(long*)( lVar4 + 0x10 ) = lVar3;
         }

         if (*plVar2 != 0) {
            LOCK();
            plVar1 = (long*)( *plVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar4 = *plVar2;
               *plVar2 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         Memory::free_static(plVar2, false);
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
/* WARNING: Removing unreachable block (ram,0x00107f38) *//* WARNING: Removing unreachable block (ram,0x00108068) *//* WARNING: Removing unreachable block (ram,0x00108230) *//* WARNING: Removing unreachable block (ram,0x00108074) *//* WARNING: Removing unreachable block (ram,0x0010807e) *//* WARNING: Removing unreachable block (ram,0x00108210) *//* WARNING: Removing unreachable block (ram,0x0010808a) *//* WARNING: Removing unreachable block (ram,0x00108094) *//* WARNING: Removing unreachable block (ram,0x001081f0) *//* WARNING: Removing unreachable block (ram,0x001080a0) *//* WARNING: Removing unreachable block (ram,0x001080aa) *//* WARNING: Removing unreachable block (ram,0x001081d0) *//* WARNING: Removing unreachable block (ram,0x001080b6) *//* WARNING: Removing unreachable block (ram,0x001080c0) *//* WARNING: Removing unreachable block (ram,0x001081b0) *//* WARNING: Removing unreachable block (ram,0x001080cc) *//* WARNING: Removing unreachable block (ram,0x001080d6) *//* WARNING: Removing unreachable block (ram,0x00108190) *//* WARNING: Removing unreachable block (ram,0x001080e2) *//* WARNING: Removing unreachable block (ram,0x001080ec) *//* WARNING: Removing unreachable block (ram,0x00108170) *//* WARNING: Removing unreachable block (ram,0x001080f4) *//* WARNING: Removing unreachable block (ram,0x0010810a) *//* WARNING: Removing unreachable block (ram,0x00108116) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
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
/* List<String, DefaultAllocator>::TEMPNAMEPLACEHOLDERVALUE(List<String, DefaultAllocator> const&)
    */void List<String,DefaultAllocator>::operator =(List<String,DefaultAllocator> *this, List *param_1) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   undefined1(*pauVar5)[16];
   CowData<char32_t> *this_00;
   CowData *pCVar6;
   long *plVar7;
   plVar7 = *(long**)this;
   if (plVar7 != (long*)0x0) {
      do {
         plVar2 = (long*)*plVar7;
         if (plVar2 == (long*)0x0) goto LAB_00108300;
         if (plVar7 == (long*)plVar2[3]) {
            lVar4 = plVar2[1];
            lVar3 = plVar2[2];
            *plVar7 = lVar4;
            if (plVar2 == (long*)plVar7[1]) {
               plVar7[1] = lVar3;
            }

            if (lVar3 != 0) {
               *(long*)( lVar3 + 8 ) = lVar4;
               lVar4 = plVar2[1];
            }

            if (lVar4 != 0) {
               *(long*)( lVar4 + 0x10 ) = lVar3;
            }

            if (*plVar2 != 0) {
               LOCK();
               plVar1 = (long*)( *plVar2 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar4 = *plVar2;
                  *plVar2 = 0;
                  Memory::free_static((void*)( lVar4 + -0x10 ), false);
               }

            }

            Memory::free_static(plVar2, false);
            *(int*)( plVar7 + 2 ) = (int)plVar7[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar7 = *(long**)this;
      }
 while ( (int)plVar7[2] != 0 );
      Memory::free_static(plVar7, false);
      *(undefined8*)this = 0;
   }

   plVar7 = (long*)0x0;
   LAB_00108300:if (( *(long**)param_1 != (long*)0x0 ) && ( pCVar6 = (CowData*)**(long**)param_1 ),pCVar6 != (CowData*)0x0) {
      if (plVar7 == (long*)0x0) {
         pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])this = pauVar5;
         *(undefined4*)pauVar5[1] = 0;
         *pauVar5 = (undefined1[16])0x0;
      }

      do {
         while (true) {
            this_00 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
            *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
            *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
            if (*(long*)pCVar6 != 0) {
               CowData<char32_t>::_ref(this_00, pCVar6);
            }

            plVar7 = *(long**)this;
            lVar4 = plVar7[1];
            *(undefined8*)( this_00 + 8 ) = 0;
            *(long**)( this_00 + 0x18 ) = plVar7;
            *(long*)( this_00 + 0x10 ) = lVar4;
            if (lVar4 != 0) {
               *(CowData<char32_t>**)( lVar4 + 8 ) = this_00;
            }

            plVar7[1] = (long)this_00;
            if (*plVar7 == 0) break;
            pCVar6 = *(CowData**)( pCVar6 + 8 );
            *(int*)( plVar7 + 2 ) = (int)plVar7[2] + 1;
            if (pCVar6 == (CowData*)0x0) {
               return;
            }

         }
;
         pCVar6 = *(CowData**)( pCVar6 + 8 );
         *(int*)( plVar7 + 2 ) = (int)plVar7[2] + 1;
         *plVar7 = (long)this_00;
      }
 while ( pCVar6 != (CowData*)0x0 );
   }

   return;
}
/* WARNING: Removing unreachable block (ram,0x00108580) *//* WARNING: Removing unreachable block (ram,0x001086b0) *//* WARNING: Removing unreachable block (ram,0x00108829) *//* WARNING: Removing unreachable block (ram,0x001086bc) *//* WARNING: Removing unreachable block (ram,0x001086c6) *//* WARNING: Removing unreachable block (ram,0x0010880b) *//* WARNING: Removing unreachable block (ram,0x001086d2) *//* WARNING: Removing unreachable block (ram,0x001086dc) *//* WARNING: Removing unreachable block (ram,0x001087ed) *//* WARNING: Removing unreachable block (ram,0x001086e8) *//* WARNING: Removing unreachable block (ram,0x001086f2) *//* WARNING: Removing unreachable block (ram,0x001087cf) *//* WARNING: Removing unreachable block (ram,0x001086fe) *//* WARNING: Removing unreachable block (ram,0x00108708) *//* WARNING: Removing unreachable block (ram,0x001087b1) *//* WARNING: Removing unreachable block (ram,0x00108714) *//* WARNING: Removing unreachable block (ram,0x0010871e) *//* WARNING: Removing unreachable block (ram,0x00108793) *//* WARNING: Removing unreachable block (ram,0x00108726) *//* WARNING: Removing unreachable block (ram,0x00108730) *//* WARNING: Removing unreachable block (ram,0x00108778) *//* WARNING: Removing unreachable block (ram,0x00108738) *//* WARNING: Removing unreachable block (ram,0x0010874e) *//* WARNING: Removing unreachable block (ram,0x0010875a) *//* String vformat<String, String>(String const&, String const, String const) */undefined8 *vformat<String,String>(undefined8 *param_1, bool *param_2, String *param_3, String *param_4) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<Pair<String, String>, unsigned long, PairHash<String, String>,
   HashMapComparatorDefault<Pair<String, String> >,
   DefaultTypedAllocator<HashMapElement<Pair<String, String>, unsigned long> >
   >::operator[](Pair<String, String> const&) */undefined8 * __thiscallHashMap<Pair<String,String>,unsigned_long,PairHash<String,String>,HashMapComparatorDefault<Pair<String,String>>,DefaultTypedAllocator<HashMapElement<Pair<String,String>,unsigned_long>>>::operator [](HashMap<Pair<String,String>,unsigned_long,PairHash<String,String>,HashMapComparatorDefault<Pair<String,String>>,DefaultTypedAllocator<HashMapElement<Pair<String,String>,unsigned_long>>> * this, Pair * param_1) * plVar1 ;undefined8 *puVar2void *pvVar3void *__sundefined1 auVar4[16]undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]char cVar36undefined4 uVar37undefined4 uVar38ulong uVar39undefined8 uVar40void *__s_00undefined8 *puVar41undefined8 *puVar42void *pvVar43int iVar44long lVar45long lVar46undefined8 uVar47long lVar48uint *puVar49uint uVar50uint uVar51uint uVar52uint uVar53ulong uVar54uint uVar55long lVar56ulong uVar57undefined8 *puVar58long in_FS_OFFSETuint local_b8long local_58long local_50undefined8 local_48long local_40local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );if (*(long*)( this + 8 ) == 0) {
   LAB_001091e8:uVar39 = (ulong)uVar55;
   uVar57 = uVar39 * 4;
   uVar54 = uVar39 * 8;
   uVar40 = Memory::alloc_static(uVar57, false);
   *(undefined8*)( this + 0x10 ) = uVar40;
   pvVar43 = (void*)Memory::alloc_static(uVar54, false);
   *(void**)( this + 8 ) = pvVar43;
   if (uVar55 != 0) {
      pvVar3 = *(void**)( this + 0x10 );
      if (( pvVar3 < (void*)( (long)pvVar43 + uVar54 ) ) && ( pvVar43 < (void*)( (long)pvVar3 + uVar57 ) )) {
         uVar57 = 0;
         do {
            *(undefined4*)( (long)pvVar3 + uVar57 * 4 ) = 0;
            *(undefined8*)( (long)pvVar43 + uVar57 * 8 ) = 0;
            uVar57 = uVar57 + 1;
         }
 while ( uVar39 != uVar57 );
         goto LAB_00109002;
      }

      memset(pvVar3, 0, uVar57);
      memset(pvVar43, 0, uVar54);
      iVar44 = *(int*)( this + 0x2c );
      LAB_00109006:if (iVar44 != 0) {
         LAB_0010900e:uVar50 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         uVar57 = CONCAT44(0, uVar50);
         lVar48 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         uVar37 = String::hash();
         uVar38 = String::hash();
         lVar56 = *(long*)( this + 0x10 );
         uVar39 = CONCAT44(uVar37, uVar38) * 0x3ffff - 1;
         uVar39 = ( uVar39 ^ uVar39 >> 0x1f ) * 0x15;
         uVar39 = ( uVar39 ^ uVar39 >> 0xb ) * 0x41;
         uVar39 = uVar39 >> 0x16 ^ uVar39;
         uVar54 = uVar39 & 0xffffffff;
         if ((int)uVar39 == 0) {
            uVar54 = 1;
         }

         uVar51 = 0;
         auVar16._8_8_ = 0;
         auVar16._0_8_ = uVar54 * lVar48;
         auVar32._8_8_ = 0;
         auVar32._0_8_ = uVar57;
         lVar45 = SUB168(auVar16 * auVar32, 8);
         uVar53 = *(uint*)( lVar56 + lVar45 * 4 );
         uVar52 = SUB164(auVar16 * auVar32, 8);
         if (uVar53 != 0) {
            do {
               if ((uint)uVar54 == uVar53) {
                  lVar56 = *(long*)( *(long*)( this + 8 ) + lVar45 * 8 );
                  cVar36 = String::operator ==((String*)( lVar56 + 0x10 ), (String*)param_1);
                  if (( cVar36 != '\0' ) && ( cVar36 = String::operator ==((String*)( lVar56 + 0x18 ), (String*)( param_1 + 8 )) ),cVar36 != '\0') {
                     puVar41 = *(undefined8**)( *(long*)( this + 8 ) + (ulong)uVar52 * 8 );
                     puVar41[4] = 0;
                     goto LAB_00108ddc;
                  }

                  lVar56 = *(long*)( this + 0x10 );
               }

               uVar51 = uVar51 + 1;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = ( ulong )(uVar52 + 1) * lVar48;
               auVar33._8_8_ = 0;
               auVar33._0_8_ = uVar57;
               lVar45 = SUB168(auVar17 * auVar33, 8);
               uVar53 = *(uint*)( lVar56 + lVar45 * 4 );
               uVar52 = SUB164(auVar17 * auVar33, 8);
            }
 while ( ( uVar53 != 0 ) && ( auVar18._8_8_ = 0 ),auVar18._0_8_ = (ulong)uVar53 * lVar48,auVar34._8_8_ = 0,auVar34._0_8_ = uVar57,auVar19._8_8_ = 0,auVar19._0_8_ = ( ulong )(( uVar50 + uVar52 ) - SUB164(auVar18 * auVar34, 8)) * lVar48,auVar35._8_8_ = 0,auVar35._0_8_ = uVar57,uVar51 <= SUB164(auVar19 * auVar35, 8) );
         }

         iVar44 = *(int*)( this + 0x2c );
      }

      uVar39 = (ulong)uVar55;
      goto LAB_00108968;
   }

   iVar44 = *(int*)( this + 0x2c );
   if (pvVar43 == (void*)0x0) goto LAB_00108968;
   if (iVar44 != 0) goto LAB_0010900e;
   LAB_0010898e:uVar55 = *(uint*)( this + 0x28 );
   if (uVar55 == 0x1c) {
      puVar41 = (undefined8*)0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_00108ddc;
   }

   uVar39 = ( ulong )(uVar55 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar50 = *(uint*)( hash_table_size_primes + (ulong)uVar55 * 4 );
   if (uVar55 + 1 < 2) {
      uVar39 = 2;
   }

   uVar55 = *(uint*)( hash_table_size_primes + uVar39 * 4 );
   uVar54 = (ulong)uVar55;
   *(int*)( this + 0x28 ) = (int)uVar39;
   pvVar43 = *(void**)( this + 8 );
   uVar39 = uVar54 * 4;
   uVar57 = uVar54 * 8;
   pvVar3 = *(void**)( this + 0x10 );
   uVar40 = Memory::alloc_static(uVar39, false);
   *(undefined8*)( this + 0x10 ) = uVar40;
   __s_00 = (void*)Memory::alloc_static(uVar57, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar55 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar57 ) ) && ( __s_00 < (void*)( (long)__s + uVar39 ) )) {
         uVar39 = 0;
         do {
            *(undefined4*)( (long)__s + uVar39 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar39 * 8 ) = 0;
            uVar39 = uVar39 + 1;
         }
 while ( uVar54 != uVar39 );
      }
 else {
         memset(__s, 0, uVar39);
         memset(__s_00, 0, uVar57);
      }

   }

   if (uVar50 != 0) {
      uVar39 = 0;
      do {
         uVar55 = *(uint*)( (long)pvVar3 + uVar39 * 4 );
         if (uVar55 != 0) {
            lVar48 = *(long*)( this + 0x10 );
            uVar51 = 0;
            uVar53 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar57 = CONCAT44(0, uVar53);
            lVar56 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar55 * lVar56;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar57;
            lVar45 = SUB168(auVar4 * auVar20, 8);
            puVar49 = (uint*)( lVar48 + lVar45 * 4 );
            iVar44 = SUB164(auVar4 * auVar20, 8);
            uVar52 = *puVar49;
            uVar40 = *(undefined8*)( (long)pvVar43 + uVar39 * 8 );
            while (uVar52 != 0) {
               auVar5._8_8_ = 0;
               auVar5._0_8_ = (ulong)uVar52 * lVar56;
               auVar21._8_8_ = 0;
               auVar21._0_8_ = uVar57;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( ulong )(( iVar44 + uVar53 ) - SUB164(auVar5 * auVar21, 8)) * lVar56;
               auVar22._8_8_ = 0;
               auVar22._0_8_ = uVar57;
               local_b8 = SUB164(auVar6 * auVar22, 8);
               uVar47 = uVar40;
               if (local_b8 < uVar51) {
                  *puVar49 = uVar55;
                  puVar41 = (undefined8*)( (long)__s_00 + lVar45 * 8 );
                  uVar47 = *puVar41;
                  *puVar41 = uVar40;
                  uVar55 = uVar52;
                  uVar51 = local_b8;
               }

               uVar51 = uVar51 + 1;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( ulong )(iVar44 + 1) * lVar56;
               auVar23._8_8_ = 0;
               auVar23._0_8_ = uVar57;
               lVar45 = SUB168(auVar7 * auVar23, 8);
               puVar49 = (uint*)( lVar48 + lVar45 * 4 );
               iVar44 = SUB164(auVar7 * auVar23, 8);
               uVar40 = uVar47;
               uVar52 = *puVar49;
            }
;
            *(undefined8*)( (long)__s_00 + lVar45 * 8 ) = uVar40;
            *puVar49 = uVar55;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar39 = uVar39 + 1;
      }
 while ( uVar39 != uVar50 );
      Memory::free_static(pvVar43, false);
      Memory::free_static(pvVar3, false);
   }

}
 else {
   iVar44 = *(int*)( this + 0x2c );
   uVar39 = CONCAT44(0, uVar55);
   if (iVar44 != 0) {
      lVar48 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar37 = String::hash();
      uVar38 = String::hash();
      lVar56 = *(long*)( this + 0x10 );
      uVar57 = CONCAT44(uVar37, uVar38) * 0x3ffff - 1;
      uVar57 = ( uVar57 ^ uVar57 >> 0x1f ) * 0x15;
      uVar57 = ( uVar57 ^ uVar57 >> 0xb ) * 0x41;
      uVar53 = ( uint )(uVar57 >> 0x16) ^ (uint)uVar57;
      uVar50 = 1;
      if (uVar53 != 0) {
         uVar50 = uVar53;
      }

      uVar51 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar50 * lVar48;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar39;
      lVar45 = SUB168(auVar12 * auVar28, 8);
      uVar53 = *(uint*)( lVar56 + lVar45 * 4 );
      uVar52 = SUB164(auVar12 * auVar28, 8);
      if (uVar53 != 0) {
         do {
            if (uVar50 == uVar53) {
               lVar56 = *(long*)( *(long*)( this + 8 ) + lVar45 * 8 );
               cVar36 = String::operator ==((String*)( lVar56 + 0x10 ), (String*)param_1);
               if (cVar36 == '\0') {
                  lVar56 = *(long*)( this + 0x10 );
               }
 else {
                  cVar36 = String::operator ==((String*)( lVar56 + 0x18 ), (String*)( param_1 + 8 ));
                  if (cVar36 != '\0') {
                     puVar41 = *(undefined8**)( *(long*)( this + 8 ) + (ulong)uVar52 * 8 );
                     goto LAB_00108ddc;
                  }

                  lVar56 = *(long*)( this + 0x10 );
               }

            }

            uVar51 = uVar51 + 1;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = ( ulong )(uVar52 + 1) * lVar48;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar39;
            lVar45 = SUB168(auVar13 * auVar29, 8);
            uVar53 = *(uint*)( lVar56 + lVar45 * 4 );
            uVar52 = SUB164(auVar13 * auVar29, 8);
         }
 while ( ( uVar53 != 0 ) && ( auVar14._8_8_ = 0 ),auVar14._0_8_ = (ulong)uVar53 * lVar48,auVar30._8_8_ = 0,auVar30._0_8_ = uVar39,auVar15._8_8_ = 0,auVar15._0_8_ = ( ulong )(( uVar52 + uVar55 ) - SUB164(auVar14 * auVar30, 8)) * lVar48,auVar31._8_8_ = 0,auVar31._0_8_ = uVar39,uVar51 <= SUB164(auVar15 * auVar31, 8) );
      }

      uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (*(long*)( this + 8 ) == 0) goto LAB_001091e8;
      LAB_00109002:iVar44 = *(int*)( this + 0x2c );
      goto LAB_00109006;
   }

   LAB_00108968:if ((float)uVar39 * __LC55 < (float)( iVar44 + 1 )) goto LAB_0010898e;
}
local_58 = 0;if (*(long*)param_1 != 0) {
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)param_1);
}
local_50 = 0;lVar48 = *(long*)( param_1 + 8 );if (*(long*)( param_1 + 8 ) != 0) {
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_50, (CowData*)( param_1 + 8 ));
   lVar48 = local_50;
}
local_48 = 0;puVar41 = (undefined8*)operator_new(0x28, "");lVar56 = local_58;puVar41[2] = 0;*puVar41 = 0;puVar41[1] = 0;if (local_58 == 0) {
   puVar41[3] = 0;
   if (lVar48 != 0) goto LAB_00108c34;
   puVar41[4] = 0;
   LAB_00108c6c:puVar42 = *(undefined8**)( this + 0x20 );
   if (puVar42 != (undefined8*)0x0) goto LAB_00108c79;
   LAB_00108f9d:*(undefined8**)( this + 0x18 ) = puVar41;
}
 else {
   CowData<char32_t>::_ref((CowData<char32_t>*)( puVar41 + 2 ), (CowData*)&local_58);
   puVar41[3] = 0;
   if (lVar48 == 0) {
      puVar41[4] = 0;
   }
 else {
      LAB_00108c34:CowData<char32_t>::_ref((CowData<char32_t>*)( puVar41 + 3 ), (CowData*)&local_50);
      puVar41[4] = 0;
      LOCK();
      plVar1 = (long*)( lVar48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      lVar56 = local_58;
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_50 + -0x10 ), false);
         lVar56 = local_58;
      }

      local_58 = lVar56;
      if (lVar56 == 0) goto LAB_00108c6c;
   }

   LOCK();
   plVar1 = (long*)( lVar56 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 != 0) goto LAB_00108c6c;
   Memory::free_static((void*)( local_58 + -0x10 ), false);
   puVar42 = *(undefined8**)( this + 0x20 );
   if (puVar42 == (undefined8*)0x0) goto LAB_00108f9d;
   LAB_00108c79:*puVar42 = puVar41;
   puVar41[1] = puVar42;
}
*(undefined8**)( this + 0x20 ) = puVar41;uVar37 = String::hash();uVar38 = String::hash();lVar48 = *(long*)( this + 0x10 );uVar39 = CONCAT44(uVar37, uVar38) * 0x3ffff - 1;uVar39 = ( uVar39 ^ uVar39 >> 0x1f ) * 0x15;uVar39 = ( uVar39 ^ uVar39 >> 0xb ) * 0x41;uVar39 = uVar39 >> 0x16 ^ uVar39;uVar57 = uVar39 & 0xffffffff;if ((int)uVar39 == 0) {
   uVar57 = 1;
}
uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar39 = CONCAT44(0, uVar55);uVar53 = (uint)uVar57;lVar56 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );auVar8._8_8_ = 0;auVar8._0_8_ = uVar57 * lVar56;auVar24._8_8_ = 0;auVar24._0_8_ = uVar39;lVar46 = SUB168(auVar8 * auVar24, 8);lVar45 = *(long*)( this + 8 );puVar49 = (uint*)( lVar48 + lVar46 * 4 );iVar44 = SUB164(auVar8 * auVar24, 8);uVar50 = *puVar49;puVar42 = puVar41;if (uVar50 != 0) {
   uVar52 = 0;
   puVar58 = puVar41;
   do {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar50 * lVar56;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar39;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = ( ulong )(( uVar55 + iVar44 ) - SUB164(auVar9 * auVar25, 8)) * lVar56;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar39;
      local_b8 = SUB164(auVar10 * auVar26, 8);
      puVar42 = puVar58;
      if (local_b8 < uVar52) {
         *puVar49 = (uint)uVar57;
         uVar57 = (ulong)uVar50;
         puVar2 = (undefined8*)( lVar45 + lVar46 * 8 );
         puVar42 = (undefined8*)*puVar2;
         *puVar2 = puVar58;
         uVar52 = local_b8;
      }

      uVar53 = (uint)uVar57;
      uVar52 = uVar52 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = ( ulong )(iVar44 + 1) * lVar56;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar39;
      lVar46 = SUB168(auVar11 * auVar27, 8);
      puVar49 = (uint*)( lVar48 + lVar46 * 4 );
      iVar44 = SUB164(auVar11 * auVar27, 8);
      uVar50 = *puVar49;
      puVar58 = puVar42;
   }
 while ( uVar50 != 0 );
}
*(undefined8**)( lVar45 + lVar46 * 8 ) = puVar42;*puVar49 = uVar53;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_00108ddc:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return puVar41 + 4;}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<Pair<String, String>, double, PairHash<String, String>,
   HashMapComparatorDefault<Pair<String, String> >,
   DefaultTypedAllocator<HashMapElement<Pair<String, String>, double> > >::operator[](Pair<String,
   String> const&) */undefined8 * __thiscallHashMap<Pair<String,String>,double,PairHash<String,String>,HashMapComparatorDefault<Pair<String,String>>,DefaultTypedAllocator<HashMapElement<Pair<String,String>,double>>>::operator [](HashMap<Pair<String,String>,double,PairHash<String,String>,HashMapComparatorDefault<Pair<String,String>>,DefaultTypedAllocator<HashMapElement<Pair<String,String>,double>>> * this, Pair * param_1) * plVar1 ;undefined8 *puVar2void *pvVar3void *__sundefined1 auVar4[16]undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]char cVar36undefined4 uVar37undefined4 uVar38ulong uVar39undefined8 uVar40void *__s_00undefined8 *puVar41undefined8 *puVar42void *pvVar43int iVar44long lVar45long lVar46undefined8 uVar47long lVar48uint *puVar49uint uVar50uint uVar51uint uVar52uint uVar53ulong uVar54uint uVar55long lVar56ulong uVar57undefined8 *puVar58long in_FS_OFFSETuint local_b8long local_58long local_50undefined8 local_48long local_40local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );if (*(long*)( this + 8 ) == 0) {
   LAB_00109be8:uVar39 = (ulong)uVar55;
   uVar57 = uVar39 * 4;
   uVar54 = uVar39 * 8;
   uVar40 = Memory::alloc_static(uVar57, false);
   *(undefined8*)( this + 0x10 ) = uVar40;
   pvVar43 = (void*)Memory::alloc_static(uVar54, false);
   *(void**)( this + 8 ) = pvVar43;
   if (uVar55 != 0) {
      pvVar3 = *(void**)( this + 0x10 );
      if (( pvVar3 < (void*)( (long)pvVar43 + uVar54 ) ) && ( pvVar43 < (void*)( (long)pvVar3 + uVar57 ) )) {
         uVar57 = 0;
         do {
            *(undefined4*)( (long)pvVar3 + uVar57 * 4 ) = 0;
            *(undefined8*)( (long)pvVar43 + uVar57 * 8 ) = 0;
            uVar57 = uVar57 + 1;
         }
 while ( uVar39 != uVar57 );
         goto LAB_00109a02;
      }

      memset(pvVar3, 0, uVar57);
      memset(pvVar43, 0, uVar54);
      iVar44 = *(int*)( this + 0x2c );
      LAB_00109a06:if (iVar44 != 0) {
         LAB_00109a0e:uVar50 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         uVar57 = CONCAT44(0, uVar50);
         lVar48 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         uVar37 = String::hash();
         uVar38 = String::hash();
         lVar56 = *(long*)( this + 0x10 );
         uVar39 = CONCAT44(uVar37, uVar38) * 0x3ffff - 1;
         uVar39 = ( uVar39 ^ uVar39 >> 0x1f ) * 0x15;
         uVar39 = ( uVar39 ^ uVar39 >> 0xb ) * 0x41;
         uVar39 = uVar39 >> 0x16 ^ uVar39;
         uVar54 = uVar39 & 0xffffffff;
         if ((int)uVar39 == 0) {
            uVar54 = 1;
         }

         uVar51 = 0;
         auVar16._8_8_ = 0;
         auVar16._0_8_ = uVar54 * lVar48;
         auVar32._8_8_ = 0;
         auVar32._0_8_ = uVar57;
         lVar45 = SUB168(auVar16 * auVar32, 8);
         uVar53 = *(uint*)( lVar56 + lVar45 * 4 );
         uVar52 = SUB164(auVar16 * auVar32, 8);
         if (uVar53 != 0) {
            do {
               if ((uint)uVar54 == uVar53) {
                  lVar56 = *(long*)( *(long*)( this + 8 ) + lVar45 * 8 );
                  cVar36 = String::operator ==((String*)( lVar56 + 0x10 ), (String*)param_1);
                  if (( cVar36 != '\0' ) && ( cVar36 = String::operator ==((String*)( lVar56 + 0x18 ), (String*)( param_1 + 8 )) ),cVar36 != '\0') {
                     puVar41 = *(undefined8**)( *(long*)( this + 8 ) + (ulong)uVar52 * 8 );
                     puVar41[4] = 0;
                     goto LAB_001097dc;
                  }

                  lVar56 = *(long*)( this + 0x10 );
               }

               uVar51 = uVar51 + 1;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = ( ulong )(uVar52 + 1) * lVar48;
               auVar33._8_8_ = 0;
               auVar33._0_8_ = uVar57;
               lVar45 = SUB168(auVar17 * auVar33, 8);
               uVar53 = *(uint*)( lVar56 + lVar45 * 4 );
               uVar52 = SUB164(auVar17 * auVar33, 8);
            }
 while ( ( uVar53 != 0 ) && ( auVar18._8_8_ = 0 ),auVar18._0_8_ = (ulong)uVar53 * lVar48,auVar34._8_8_ = 0,auVar34._0_8_ = uVar57,auVar19._8_8_ = 0,auVar19._0_8_ = ( ulong )(( uVar50 + uVar52 ) - SUB164(auVar18 * auVar34, 8)) * lVar48,auVar35._8_8_ = 0,auVar35._0_8_ = uVar57,uVar51 <= SUB164(auVar19 * auVar35, 8) );
         }

         iVar44 = *(int*)( this + 0x2c );
      }

      uVar39 = (ulong)uVar55;
      goto LAB_00109368;
   }

   iVar44 = *(int*)( this + 0x2c );
   if (pvVar43 == (void*)0x0) goto LAB_00109368;
   if (iVar44 != 0) goto LAB_00109a0e;
   LAB_0010938e:uVar55 = *(uint*)( this + 0x28 );
   if (uVar55 == 0x1c) {
      puVar41 = (undefined8*)0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_001097dc;
   }

   uVar39 = ( ulong )(uVar55 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar50 = *(uint*)( hash_table_size_primes + (ulong)uVar55 * 4 );
   if (uVar55 + 1 < 2) {
      uVar39 = 2;
   }

   uVar55 = *(uint*)( hash_table_size_primes + uVar39 * 4 );
   uVar54 = (ulong)uVar55;
   *(int*)( this + 0x28 ) = (int)uVar39;
   pvVar43 = *(void**)( this + 8 );
   uVar39 = uVar54 * 4;
   uVar57 = uVar54 * 8;
   pvVar3 = *(void**)( this + 0x10 );
   uVar40 = Memory::alloc_static(uVar39, false);
   *(undefined8*)( this + 0x10 ) = uVar40;
   __s_00 = (void*)Memory::alloc_static(uVar57, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar55 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar57 ) ) && ( __s_00 < (void*)( (long)__s + uVar39 ) )) {
         uVar39 = 0;
         do {
            *(undefined4*)( (long)__s + uVar39 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar39 * 8 ) = 0;
            uVar39 = uVar39 + 1;
         }
 while ( uVar54 != uVar39 );
      }
 else {
         memset(__s, 0, uVar39);
         memset(__s_00, 0, uVar57);
      }

   }

   if (uVar50 != 0) {
      uVar39 = 0;
      do {
         uVar55 = *(uint*)( (long)pvVar3 + uVar39 * 4 );
         if (uVar55 != 0) {
            lVar48 = *(long*)( this + 0x10 );
            uVar51 = 0;
            uVar53 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar57 = CONCAT44(0, uVar53);
            lVar56 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar55 * lVar56;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar57;
            lVar45 = SUB168(auVar4 * auVar20, 8);
            puVar49 = (uint*)( lVar48 + lVar45 * 4 );
            iVar44 = SUB164(auVar4 * auVar20, 8);
            uVar52 = *puVar49;
            uVar40 = *(undefined8*)( (long)pvVar43 + uVar39 * 8 );
            while (uVar52 != 0) {
               auVar5._8_8_ = 0;
               auVar5._0_8_ = (ulong)uVar52 * lVar56;
               auVar21._8_8_ = 0;
               auVar21._0_8_ = uVar57;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( ulong )(( iVar44 + uVar53 ) - SUB164(auVar5 * auVar21, 8)) * lVar56;
               auVar22._8_8_ = 0;
               auVar22._0_8_ = uVar57;
               local_b8 = SUB164(auVar6 * auVar22, 8);
               uVar47 = uVar40;
               if (local_b8 < uVar51) {
                  *puVar49 = uVar55;
                  puVar41 = (undefined8*)( (long)__s_00 + lVar45 * 8 );
                  uVar47 = *puVar41;
                  *puVar41 = uVar40;
                  uVar55 = uVar52;
                  uVar51 = local_b8;
               }

               uVar51 = uVar51 + 1;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( ulong )(iVar44 + 1) * lVar56;
               auVar23._8_8_ = 0;
               auVar23._0_8_ = uVar57;
               lVar45 = SUB168(auVar7 * auVar23, 8);
               puVar49 = (uint*)( lVar48 + lVar45 * 4 );
               iVar44 = SUB164(auVar7 * auVar23, 8);
               uVar40 = uVar47;
               uVar52 = *puVar49;
            }
;
            *(undefined8*)( (long)__s_00 + lVar45 * 8 ) = uVar40;
            *puVar49 = uVar55;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar39 = uVar39 + 1;
      }
 while ( uVar39 != uVar50 );
      Memory::free_static(pvVar43, false);
      Memory::free_static(pvVar3, false);
   }

}
 else {
   iVar44 = *(int*)( this + 0x2c );
   uVar39 = CONCAT44(0, uVar55);
   if (iVar44 != 0) {
      lVar48 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar37 = String::hash();
      uVar38 = String::hash();
      lVar56 = *(long*)( this + 0x10 );
      uVar57 = CONCAT44(uVar37, uVar38) * 0x3ffff - 1;
      uVar57 = ( uVar57 ^ uVar57 >> 0x1f ) * 0x15;
      uVar57 = ( uVar57 ^ uVar57 >> 0xb ) * 0x41;
      uVar53 = ( uint )(uVar57 >> 0x16) ^ (uint)uVar57;
      uVar50 = 1;
      if (uVar53 != 0) {
         uVar50 = uVar53;
      }

      uVar51 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar50 * lVar48;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar39;
      lVar45 = SUB168(auVar12 * auVar28, 8);
      uVar53 = *(uint*)( lVar56 + lVar45 * 4 );
      uVar52 = SUB164(auVar12 * auVar28, 8);
      if (uVar53 != 0) {
         do {
            if (uVar50 == uVar53) {
               lVar56 = *(long*)( *(long*)( this + 8 ) + lVar45 * 8 );
               cVar36 = String::operator ==((String*)( lVar56 + 0x10 ), (String*)param_1);
               if (cVar36 == '\0') {
                  lVar56 = *(long*)( this + 0x10 );
               }
 else {
                  cVar36 = String::operator ==((String*)( lVar56 + 0x18 ), (String*)( param_1 + 8 ));
                  if (cVar36 != '\0') {
                     puVar41 = *(undefined8**)( *(long*)( this + 8 ) + (ulong)uVar52 * 8 );
                     goto LAB_001097dc;
                  }

                  lVar56 = *(long*)( this + 0x10 );
               }

            }

            uVar51 = uVar51 + 1;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = ( ulong )(uVar52 + 1) * lVar48;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar39;
            lVar45 = SUB168(auVar13 * auVar29, 8);
            uVar53 = *(uint*)( lVar56 + lVar45 * 4 );
            uVar52 = SUB164(auVar13 * auVar29, 8);
         }
 while ( ( uVar53 != 0 ) && ( auVar14._8_8_ = 0 ),auVar14._0_8_ = (ulong)uVar53 * lVar48,auVar30._8_8_ = 0,auVar30._0_8_ = uVar39,auVar15._8_8_ = 0,auVar15._0_8_ = ( ulong )(( uVar52 + uVar55 ) - SUB164(auVar14 * auVar30, 8)) * lVar48,auVar31._8_8_ = 0,auVar31._0_8_ = uVar39,uVar51 <= SUB164(auVar15 * auVar31, 8) );
      }

      uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (*(long*)( this + 8 ) == 0) goto LAB_00109be8;
      LAB_00109a02:iVar44 = *(int*)( this + 0x2c );
      goto LAB_00109a06;
   }

   LAB_00109368:if ((float)uVar39 * __LC55 < (float)( iVar44 + 1 )) goto LAB_0010938e;
}
local_58 = 0;if (*(long*)param_1 != 0) {
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)param_1);
}
local_50 = 0;lVar48 = *(long*)( param_1 + 8 );if (*(long*)( param_1 + 8 ) != 0) {
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_50, (CowData*)( param_1 + 8 ));
   lVar48 = local_50;
}
local_48 = 0;puVar41 = (undefined8*)operator_new(0x28, "");lVar56 = local_58;puVar41[2] = 0;*puVar41 = 0;puVar41[1] = 0;if (local_58 == 0) {
   puVar41[3] = 0;
   if (lVar48 != 0) goto LAB_00109634;
   puVar41[4] = 0;
   LAB_0010966c:puVar42 = *(undefined8**)( this + 0x20 );
   if (puVar42 != (undefined8*)0x0) goto LAB_00109679;
   LAB_0010999d:*(undefined8**)( this + 0x18 ) = puVar41;
}
 else {
   CowData<char32_t>::_ref((CowData<char32_t>*)( puVar41 + 2 ), (CowData*)&local_58);
   puVar41[3] = 0;
   if (lVar48 == 0) {
      puVar41[4] = 0;
   }
 else {
      LAB_00109634:CowData<char32_t>::_ref((CowData<char32_t>*)( puVar41 + 3 ), (CowData*)&local_50);
      puVar41[4] = 0;
      LOCK();
      plVar1 = (long*)( lVar48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      lVar56 = local_58;
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_50 + -0x10 ), false);
         lVar56 = local_58;
      }

      local_58 = lVar56;
      if (lVar56 == 0) goto LAB_0010966c;
   }

   LOCK();
   plVar1 = (long*)( lVar56 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 != 0) goto LAB_0010966c;
   Memory::free_static((void*)( local_58 + -0x10 ), false);
   puVar42 = *(undefined8**)( this + 0x20 );
   if (puVar42 == (undefined8*)0x0) goto LAB_0010999d;
   LAB_00109679:*puVar42 = puVar41;
   puVar41[1] = puVar42;
}
*(undefined8**)( this + 0x20 ) = puVar41;uVar37 = String::hash();uVar38 = String::hash();lVar48 = *(long*)( this + 0x10 );uVar39 = CONCAT44(uVar37, uVar38) * 0x3ffff - 1;uVar39 = ( uVar39 ^ uVar39 >> 0x1f ) * 0x15;uVar39 = ( uVar39 ^ uVar39 >> 0xb ) * 0x41;uVar39 = uVar39 >> 0x16 ^ uVar39;uVar57 = uVar39 & 0xffffffff;if ((int)uVar39 == 0) {
   uVar57 = 1;
}
uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar39 = CONCAT44(0, uVar55);uVar53 = (uint)uVar57;lVar56 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );auVar8._8_8_ = 0;auVar8._0_8_ = uVar57 * lVar56;auVar24._8_8_ = 0;auVar24._0_8_ = uVar39;lVar46 = SUB168(auVar8 * auVar24, 8);lVar45 = *(long*)( this + 8 );puVar49 = (uint*)( lVar48 + lVar46 * 4 );iVar44 = SUB164(auVar8 * auVar24, 8);uVar50 = *puVar49;puVar42 = puVar41;if (uVar50 != 0) {
   uVar52 = 0;
   puVar58 = puVar41;
   do {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar50 * lVar56;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar39;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = ( ulong )(( uVar55 + iVar44 ) - SUB164(auVar9 * auVar25, 8)) * lVar56;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar39;
      local_b8 = SUB164(auVar10 * auVar26, 8);
      puVar42 = puVar58;
      if (local_b8 < uVar52) {
         *puVar49 = (uint)uVar57;
         uVar57 = (ulong)uVar50;
         puVar2 = (undefined8*)( lVar45 + lVar46 * 8 );
         puVar42 = (undefined8*)*puVar2;
         *puVar2 = puVar58;
         uVar52 = local_b8;
      }

      uVar53 = (uint)uVar57;
      uVar52 = uVar52 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = ( ulong )(iVar44 + 1) * lVar56;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar39;
      lVar46 = SUB168(auVar11 * auVar27, 8);
      puVar49 = (uint*)( lVar48 + lVar46 * 4 );
      iVar44 = SUB164(auVar11 * auVar27, 8);
      uVar50 = *puVar49;
      puVar58 = puVar42;
   }
 while ( uVar50 != 0 );
}
*(undefined8**)( lVar45 + lVar46 * 8 ) = puVar42;*puVar49 = uVar53;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_001097dc:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return puVar41 + 4;}/* WARNING: Removing unreachable block (ram,0x00109e68) *//* WARNING: Removing unreachable block (ram,0x00109f98) *//* WARNING: Removing unreachable block (ram,0x0010a111) *//* WARNING: Removing unreachable block (ram,0x00109fa4) *//* WARNING: Removing unreachable block (ram,0x00109fae) *//* WARNING: Removing unreachable block (ram,0x0010a0f3) *//* WARNING: Removing unreachable block (ram,0x00109fba) *//* WARNING: Removing unreachable block (ram,0x00109fc4) *//* WARNING: Removing unreachable block (ram,0x0010a0d5) *//* WARNING: Removing unreachable block (ram,0x00109fd0) *//* WARNING: Removing unreachable block (ram,0x00109fda) *//* WARNING: Removing unreachable block (ram,0x0010a0b7) *//* WARNING: Removing unreachable block (ram,0x00109fe6) *//* WARNING: Removing unreachable block (ram,0x00109ff0) *//* WARNING: Removing unreachable block (ram,0x0010a099) *//* WARNING: Removing unreachable block (ram,0x00109ffc) *//* WARNING: Removing unreachable block (ram,0x0010a006) *//* WARNING: Removing unreachable block (ram,0x0010a07b) *//* WARNING: Removing unreachable block (ram,0x0010a00e) *//* WARNING: Removing unreachable block (ram,0x0010a018) *//* WARNING: Removing unreachable block (ram,0x0010a060) *//* WARNING: Removing unreachable block (ram,0x0010a020) *//* WARNING: Removing unreachable block (ram,0x0010a036) *//* WARNING: Removing unreachable block (ram,0x0010a042) *//* String vformat<String, double>(String const&, String const, double const) */undefined8 *vformat<String,double>(double param_1_00, undefined8 *param_1, bool *param_3, String *param_4) {
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
   Variant::Variant(local_88, param_4);
   Variant::Variant(local_70, param_1_00);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_d8);
   iVar3 = (int)local_d8;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, param_3);
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
      LAB_0010a590:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar10 == 0) goto LAB_0010a590;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_0010a469:if (lVar10 != lVar7) {
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
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_0010a469;
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
      goto LAB_0010a5e6;
   }

   if (lVar10 == lVar7) {
      LAB_0010a50f:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_0010a5e6:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_0010a4fa;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_0010a50f;
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
   LAB_0010a4fa:puVar9[-1] = param_1;
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

         goto LAB_0010a87f;
      }

      iVar24 = *(int*)( param_2 + 0x2c );
      if (__s_00 == (void*)0x0) goto LAB_0010a88f;
      if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_0010ab08;
      LAB_0010a8b1:if (*(int*)( param_2 + 0x28 ) == 0x1c) {
         plVar19 = (long*)0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_0010aab9;
      }

      _resize_and_rehash((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
   }
 else {
      LAB_0010a87f:iVar24 = *(int*)( param_2 + 0x2c );
      if (iVar24 != 0) {
         LAB_0010ab08:uVar18 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
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

                     goto LAB_0010aab9;
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

      LAB_0010a88f:if ((float)uVar23 * __LC55 < (float)( iVar24 + 1 )) goto LAB_0010a8b1;
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
      if (lVar33 != 0) goto LAB_0010a962;
      LAB_0010a992:puVar20 = *(undefined8**)( param_2 + 0x20 );
      if (puVar20 != (undefined8*)0x0) goto LAB_0010a9a0;
      LAB_0010ac4e:*(long**)( param_2 + 0x18 ) = plVar19;
      *(long**)( param_2 + 0x20 ) = plVar19;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( plVar19 + 2 ), (CowData*)&local_58);
      plVar19[3] = 0;
      if (lVar33 != 0) {
         LAB_0010a962:CowData<char32_t>::_ref((CowData<char32_t>*)( plVar19 + 3 ), (CowData*)local_50);
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
         if (lVar32 == 0) goto LAB_0010a992;
      }

      LOCK();
      plVar36 = (long*)( lVar32 + -0x10 );
      *plVar36 = *plVar36 + -1;
      UNLOCK();
      if (*plVar36 != 0) goto LAB_0010a992;
      Memory::free_static((void*)( local_58 + -0x10 ), false);
      puVar20 = *(undefined8**)( param_2 + 0x20 );
      if (puVar20 == (undefined8*)0x0) goto LAB_0010ac4e;
      LAB_0010a9a0:if (in_R8B == '\0') {
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
   LAB_0010aab9:*(long**)param_1 = plVar19;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::operator[](String const&) */undefined1 * __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::operator[](HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
             *this,String *param_1){
   long *plVar1;
   ulong __n;
   void *__s;
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
   undefined8 uVar26;
   char cVar27;
   uint uVar28;
   uint uVar29;
   undefined8 *puVar30;
   undefined8 uVar31;
   void *__s_00;
   ulong uVar32;
   int iVar33;
   long lVar34;
   long lVar35;
   ulong uVar36;
   uint *puVar37;
   long lVar38;
   uint uVar39;
   uint uVar40;
   long lVar41;
   long lVar42;
   undefined1(*pauVar43)[16];
   undefined1(*pauVar44)[16];
   uint uVar45;
   uint uVar46;
   long in_FS_OFFSET;
   undefined1(*local_88)[16];
   long local_70;
   undefined1 local_68[16];
   long local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar28 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   uVar36 = (ulong)uVar28;
   if (*(long*)( this + 8 ) == 0) {
      LAB_0010b2f0:local_70 = 0;
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

         LAB_0010b1aa:uVar28 = (uint)uVar36;
         iVar33 = *(int*)( this + 0x2c );
         if (iVar33 != 0) {
            LAB_0010b1b7:uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
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

                        goto LAB_0010b068;
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

         goto LAB_0010ae48;
      }

      iVar33 = *(int*)( this + 0x2c );
      if (__s_00 == (void*)0x0) goto LAB_0010ae48;
      uVar28 = 0;
      if (*(int*)( this + 0x2c ) != 0) goto LAB_0010b1b7;
      LAB_0010ae6a:if (*(int*)( this + 0x28 ) == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         local_88 = (undefined1(*) [16])0x0;
         goto LAB_0010b068;
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
                     goto LAB_0010b068;
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
         if (lVar41 == 0) goto LAB_0010b2f0;
         goto LAB_0010b1aa;
      }

      local_70 = 0;
      iVar33 = 0;
      LAB_0010ae48:if ((float)uVar36 * __LC55 < (float)( iVar33 + 1 )) goto LAB_0010ae6a;
   }

   local_58[0] = 0;
   local_68 = (undefined1[16])0x0;
   if (*(long*)param_1 == 0) {
      local_88 = (undefined1(*) [16])operator_new(0x20, "");
      *(undefined8*)local_88[1] = 0;
      *local_88 = (undefined1[16])0x0;
      LAB_0010b3bd:lVar38 = 0;
      *(undefined8*)( local_88[1] + 8 ) = 0;
      puVar30 = *(undefined8**)( this + 0x20 );
      if (puVar30 != (undefined8*)0x0) goto LAB_0010af2d;
      LAB_0010b3da:*(undefined1(**) [16])( this + 0x18 ) = local_88;
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
      if (lVar38 == 0) goto LAB_0010b3bd;
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
      if (puVar30 == (undefined8*)0x0) goto LAB_0010b3da;
      LAB_0010af2d:*puVar30 = local_88;
      *(undefined8**)( *local_88 + 8 ) = puVar30;
   }

   *(undefined1(**) [16])( this + 0x20 ) = local_88;
   uVar28 = String::hash();
   lVar42 = *(long*)( this + 0x10 );
   uVar36 = 1;
   if (uVar28 != 0) {
      uVar36 = (ulong)uVar28;
   }

   lVar35 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   uVar29 = (uint)uVar36;
   uVar28 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   uVar32 = CONCAT44(0, uVar28);
   auVar2._8_8_ = 0;
   auVar2._0_8_ = uVar36 * lVar35;
   auVar14._8_8_ = 0;
   auVar14._0_8_ = uVar32;
   lVar34 = SUB168(auVar2 * auVar14, 8);
   lVar41 = *(long*)( this + 8 );
   puVar37 = (uint*)( lVar42 + lVar34 * 4 );
   iVar33 = SUB164(auVar2 * auVar14, 8);
   uVar39 = *puVar37;
   pauVar44 = local_88;
   if (uVar39 != 0) {
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

   *(undefined1(**) [16])( lVar41 + lVar34 * 8 ) = pauVar44;
   *puVar37 = uVar29;
   *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
   if (lVar38 != 0) {
      LOCK();
      plVar1 = (long*)( lVar38 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_70 + -0x10 ), false);
      }

   }

   LAB_0010b068:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_88[1] + 8;
}
/* CowData<Logger*>::_realloc(long) */undefined8 CowData<Logger*>::_realloc(CowData<Logger*> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Logger*>::resize<false>(long) */undefined8 CowData<Logger*>::resize<false>(CowData<Logger*> *this, long param_1) {
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
      lVar3 = lVar9 * 8;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 == 0) {
      LAB_0010b710:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 8 - 1;
   uVar4 = uVar4 | uVar4 >> 1;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar8 = uVar4 + 1;
   if (lVar8 == 0) goto LAB_0010b710;
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
            goto LAB_0010b621;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_0010b621:puVar7[-1] = param_1;
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
/* WARNING: Control flow encountered bad instruction data *//* List<String, DefaultAllocator>::~List() */void List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* JSON::~JSON() */void JSON::~JSON(JSON *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

