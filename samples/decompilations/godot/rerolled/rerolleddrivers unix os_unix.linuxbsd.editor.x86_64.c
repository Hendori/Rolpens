/* OS_Unix::unix_initialize_audio(int) */undefined8 OS_Unix::unix_initialize_audio(int param_1) {
   return 0;
}
/* OS_Unix::get_video_adapter_driver_info() const */OS_Unix * __thiscall OS_Unix::get_video_adapter_driver_info(OS_Unix *this){
   *(undefined8*)( this + 8 ) = 0;
   return this;
}
/* UnixTerminalLogger::~UnixTerminalLogger() */void UnixTerminalLogger::~UnixTerminalLogger(UnixTerminalLogger *this) {
   return;
}
/* handle_interrupt(int) */void handle_interrupt(int param_1) {
   if (( EngineDebugger::singleton != 0 ) && ( EngineDebugger::script_debugger != 0 )) {
      ScriptDebugger::set_depth((int)EngineDebugger::script_debugger);
      ScriptDebugger::set_lines_left((int)EngineDebugger::script_debugger);
      return;
   }

   return;
}
/* OS_Unix::get_ticks_usec() const */long OS_Unix::get_ticks_usec(void) {
   long in_FS_OFFSET;
   timespec local_28;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28.tv_sec = 0;
   local_28.tv_nsec = 0;
   clock_gettime(4, &local_28);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return ( local_28.tv_sec * 1000000 + (ulong)local_28.tv_nsec / 1000 ) - _clock_start;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OS_Unix::initialize_core() */void OS_Unix::initialize_core(OS_Unix *this) {
   int iVar1;
   void *pvVar2;
   long in_FS_OFFSET;
   timespec local_38;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   init_thread_posix();
   _make_default = FileAccess::_create_builtin<FileAccessUnix>;
   _operator_new = FileAccess::_create_builtin<FileAccessUnixPipe>;
   _make_default = FileAccess::_create_builtin<FileAccessUnix>;
   DirAccess::create_func = DirAccess::_create_builtin<DirAccessUnix>;
   FileAccess::create_func = DirAccess::_create_builtin<DirAccessUnix>;
   NetSocketUnix::make_default();
   IPUnix::make_default();
   pvVar2 = operator_new(0x30, "");
   *(undefined1(*) [16])( (long)pvVar2 + 8 ) = (undefined1[16])0x0;
   *(undefined8*)( (long)pvVar2 + 0x28 ) = 2;
   *(undefined1(*) [16])( (long)pvVar2 + 0x18 ) = (undefined1[16])0x0;
   *(void**)( this + 0x130 ) = pvVar2;
   local_38.tv_sec = 0;
   local_38.tv_nsec = 0;
   iVar1 = clock_gettime(4, &local_38);
   if (iVar1 == 0) {
      _clock_start = (ulong)local_38.tv_nsec / 1000 + local_38.tv_sec * 1000000;
   }
 else {
      _err_print_error("_setup_clock", "drivers/unix/os_unix.cpp", 0x82, "Condition \"clock_gettime(4, &tv_now) != 0\" is true.", "OS CLOCK IS NOT WORKING!", 0, 0);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OS_Unix::get_stdin_type() const */char OS_Unix::get_stdin_type(void) {
   char cVar1;
   int iVar2;
   int iVar3;
   long in_FS_OFFSET;
   stat64 sStack_a8;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = fileno(_stdin);
   cVar1 = '\0';
   if (iVar2 != -1) {
      iVar3 = isatty(iVar2);
      cVar1 = '\x01';
      if (iVar3 == 0) {
         iVar2 = fstat64(iVar2, &sStack_a8);
         if (iVar2 < 0) {
            cVar1 = '\x04';
         }
 else if (( sStack_a8.st_mode & 0xf000 ) == 0x1000) {
            cVar1 = '\x03';
         }
 else {
            cVar1 = ( ( sStack_a8.st_mode & 0xd000 ) != 0x8000 ) * '\x02' + '\x02';
         }

      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return cVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OS_Unix::get_stdout_type() const */char OS_Unix::get_stdout_type(void) {
   char cVar1;
   int iVar2;
   int iVar3;
   long in_FS_OFFSET;
   stat64 sStack_a8;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = fileno(_stdout);
   cVar1 = '\0';
   if (iVar2 != -1) {
      iVar3 = isatty(iVar2);
      cVar1 = '\x01';
      if (iVar3 == 0) {
         iVar2 = fstat64(iVar2, &sStack_a8);
         if (iVar2 < 0) {
            cVar1 = '\x04';
         }
 else if (( sStack_a8.st_mode & 0xf000 ) == 0x1000) {
            cVar1 = '\x03';
         }
 else {
            cVar1 = ( ( sStack_a8.st_mode & 0xd000 ) != 0x8000 ) * '\x02' + '\x02';
         }

      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return cVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OS_Unix::get_stderr_type() const */char OS_Unix::get_stderr_type(void) {
   char cVar1;
   int iVar2;
   int iVar3;
   long in_FS_OFFSET;
   stat64 sStack_a8;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = fileno(_stderr);
   cVar1 = '\0';
   if (iVar2 != -1) {
      iVar3 = isatty(iVar2);
      cVar1 = '\x01';
      if (iVar3 == 0) {
         iVar2 = fstat64(iVar2, &sStack_a8);
         if (iVar2 < 0) {
            cVar1 = '\x04';
         }
 else if (( sStack_a8.st_mode & 0xf000 ) == 0x1000) {
            cVar1 = '\x03';
         }
 else {
            cVar1 = ( ( sStack_a8.st_mode & 0xd000 ) != 0x8000 ) * '\x02' + '\x02';
         }

      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return cVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OS_Unix::get_unix_time() const */double OS_Unix::get_unix_time(void) {
   long in_FS_OFFSET;
   timeval local_28;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   gettimeofday(&local_28, (__timezone_ptr_t)0x0);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (double)local_28.tv_usec / __LC7 + (double)local_28.tv_sec;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS_Unix::get_datetime(bool) const */long *OS_Unix::get_datetime(bool param_1) {
   char in_DL;
   undefined7 in_register_00000039;
   long *plVar1;
   long in_FS_OFFSET;
   time_t local_60;
   tm local_58;
   long local_20;
   plVar1 = (long*)CONCAT71(in_register_00000039, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = time((time_t*)0x0);
   if (in_DL == '\0') {
      localtime_r(&local_60, &local_58);
   }
 else {
      gmtime_r(&local_60, &local_58);
   }

   *plVar1 = (long)( local_58.tm_year + 0x76c );
   *(int*)( plVar1 + 1 ) = local_58.tm_mon + 1;
   *(uint*)( (long)plVar1 + 0xc ) = CONCAT31(CONCAT21(CONCAT11((undefined1)local_58.tm_min, (undefined1)local_58.tm_hour), (undefined1)local_58.tm_wday), (undefined1)local_58.tm_mday);
   *(undefined1*)( plVar1 + 2 ) = (undefined1)local_58.tm_sec;
   *(bool*)( (long)plVar1 + 0x11 ) = local_58.tm_isdst != 0;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return plVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS_Unix::delay_usec(unsigned int) const */void OS_Unix::delay_usec(OS_Unix *this, uint param_1) {
   int iVar1;
   int *piVar2;
   long in_FS_OFFSET;
   timespec local_48;
   timespec local_38;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48.tv_sec = (ulong)param_1 / 1000000;
   local_48.tv_nsec = ( ulong )(param_1 % 1000000) * 1000;
   while (true) {
      iVar1 = nanosleep(&local_48, &local_38);
      if (iVar1 != -1) break;
      piVar2 = __errno_location();
      if (*piVar2 != 4) break;
      local_48.tv_sec = local_38.tv_sec;
      local_48.tv_nsec = local_38.tv_nsec;
   }
;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS_Unix::get_process_id() const */void OS_Unix::get_process_id(void) {
   getpid();
   return;
}
/* OS_Unix::close_dynamic_library(void*) */bool OS_Unix::close_dynamic_library(OS_Unix *this, void *param_1) {
   int iVar1;
   iVar1 = dlclose(param_1);
   return iVar1 != 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* UnixTerminalLogger::log_error(char const*, char const*, int, char const*, char const*, bool,
   Logger::ErrorType) */void UnixTerminalLogger::log_error(UnixTerminalLogger *this, undefined8 param_1, undefined8 param_2, uint param_3, char *param_4, char *param_5, undefined8 param_6, int param_8) {
   undefined *puVar1;
   undefined *puVar2;
   char cVar3;
   int iVar4;
   undefined *puVar5;
   undefined *puVar6;
   undefined *puVar7;
   char *pcVar8;
   undefined *puVar9;
   undefined *puVar10;
   undefined *puVar11;
   undefined *local_40;
   cVar3 = Logger::should_log(SUB81(this, 0));
   if (cVar3 == '\0') {
      return;
   }

   if (( param_5 != (char*)0x0 ) && ( *param_5 != '\0' )) {
      param_4 = param_5;
   }

   iVar4 = fileno(_stdout);
   iVar4 = isatty(iVar4);
   if (iVar4 == 0) {
      puVar7 = &_LC0;
      local_40 = &_LC0;
      puVar5 = &_LC0;
      puVar10 = &_LC0;
      puVar11 = &_LC0;
      puVar9 = &_LC0;
      puVar6 = &_LC0;
      puVar1 = &_LC0;
      puVar2 = &_LC0;
      if (param_8 != 2) goto LAB_00100726;
      LAB_001007e0:puVar5 = puVar2;
      puVar7 = puVar1;
      pcVar8 = "%sSCRIPT ERROR:%s %s\n";
   }
 else {
      puVar7 = &_LC8;
      local_40 = &_LC16;
      puVar5 = &_LC9;
      puVar10 = &_LC12;
      puVar11 = &_LC13;
      puVar9 = &_LC14;
      puVar6 = &_LC15;
      puVar1 = &_LC10;
      puVar2 = &_LC11;
      if (param_8 == 2) goto LAB_001007e0;
      LAB_00100726:if (param_8 != 3) {
         if (param_8 == 1) {
            Logger::logf_error((char*)this, "%sWARNING:%s %s\n", puVar10, puVar11, param_4);
            pcVar8 = "%s     at: %s (%s:%i)%s\n";
         }
 else {
            Logger::logf_error((char*)this, "%sERROR:%s %s\n", puVar9, puVar6, param_4);
            pcVar8 = "%s   at: %s (%s:%i)%s\n";
         }

         goto LAB_0010076c;
      }

      pcVar8 = "%sSHADER ERROR:%s %s\n";
   }

   Logger::logf_error((char*)this, pcVar8, puVar7, puVar5, param_4);
   pcVar8 = "%s          at: %s (%s:%i)%s\n";
   LAB_0010076c:Logger::logf_error((char*)this, pcVar8, local_40, param_1, param_2, (ulong)param_3);
   return;
}
/* UnixTerminalLogger::~UnixTerminalLogger() */void UnixTerminalLogger::~UnixTerminalLogger(UnixTerminalLogger *this) {
   operator_delete(this, 8);
   return;
}
/* OS_Unix::get_entropy(unsigned char*, int) */undefined8 OS_Unix::get_entropy(OS_Unix *this, uchar *param_1, int param_2) {
   int iVar1;
   int iVar2;
   int iVar3;
   iVar3 = 0;
   while (true) {
      iVar2 = 0x100;
      if (param_2 < 0x101) {
         iVar2 = param_2;
      }

      iVar1 = getentropy(param_1 + iVar3, (long)iVar2);
      if (iVar1 != 0) break;
      param_2 = param_2 - iVar2;
      iVar3 = iVar3 + iVar2;
      if (param_2 < 1) {
         return 0;
      }

   }
;
   _err_print_error("get_entropy", "drivers/unix/os_unix.cpp", 0x117, "Condition \"getentropy(r_buffer + ofs, chunk)\" is true. Returning: FAILED", 0, 0);
   return 1;
}
/* OS_Unix::initialize_debugging() */void OS_Unix::initialize_debugging(void) {
   sigaction *psVar1;
   long lVar2;
   __sigset_t *p_Var3;
   long in_FS_OFFSET;
   sigaction local_a8;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( EngineDebugger::singleton != 0 ) && ( EngineDebugger::script_debugger != 0 )) {
      psVar1 = &local_a8;
      for (lVar2 = 0x12; p_Var3 = &psVar1.sa_mask,lVar2 != 0; lVar2 = lVar2 + -1) {
         psVar1 = (sigaction*)p_Var3.__val;
         p_Var3.__val[0] = 0;
      }

      local_a8.__sigaction_handler.sa_handler = handle_interrupt;
      sigaction(2, &local_a8, (sigaction*)0x0);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS_Unix::finalize_core() */void OS_Unix::finalize_core(OS_Unix *this) {
   uint uVar1;
   void *pvVar2;
   int *piVar3;
   long lVar4;
   void *pvVar5;
   pvVar2 = *(void**)( this + 0x130 );
   pvVar5 = *(void**)( (long)pvVar2 + 8 );
   if (pvVar5 != (void*)0x0) {
      if (*(int*)( (long)pvVar2 + 0x2c ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( (long)pvVar2 + 0x28 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( (long)pvVar2 + 0x2c ) = 0;
            *(undefined1(*) [16])( (long)pvVar2 + 0x18 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               piVar3 = (int*)( *(long*)( (long)pvVar2 + 0x10 ) + lVar4 );
               if (*piVar3 != 0) {
                  *piVar3 = 0;
                  Memory::free_static(*(void**)( (long)pvVar5 + lVar4 * 2 ), false);
                  pvVar5 = *(void**)( (long)pvVar2 + 8 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( lVar4 != (ulong)uVar1 << 2 );
            *(undefined4*)( (long)pvVar2 + 0x2c ) = 0;
            *(undefined1(*) [16])( (long)pvVar2 + 0x18 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) goto LAB_00100a17;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( (long)pvVar2 + 0x10 ), false);
   }

   LAB_00100a17:Memory::free_static(pvVar2, false);
   NetSocketUnix::cleanup();
   return;
}
/* OS_Unix::kill(long const&) */undefined8 OS_Unix::kill(OS_Unix *this, long *param_1) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   int local_14;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = ::kill(( __pid_t ) * param_1, 9);
   uVar2 = 0x1f;
   if (iVar1 == 0) {
      waitpid(( __pid_t ) * param_1, &local_14, 0);
      uVar2 = 0;
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* OS_Unix::get_distribution_name() const */OS_Unix * __thiscall OS_Unix::get_distribution_name(OS_Unix *this){
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
/* OS_Unix::get_version() const */OS_Unix * __thiscall OS_Unix::get_version(OS_Unix *this){
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
/* OS_Unix::get_temp_path() const */OS_Unix * __thiscall OS_Unix::get_temp_path(OS_Unix *this){
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
/* OS_Unix::get_name() const */OS_Unix * __thiscall OS_Unix::get_name(OS_Unix *this){
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
/* OS_Unix::get_time_zone_info() const */OS_Unix * __thiscall OS_Unix::get_time_zone_info(OS_Unix *this){
   int iVar1;
   long in_FS_OFFSET;
   time_t local_b0;
   char *local_a8;
   size_t local_a0;
   tm local_98;
   char local_58[15];
   undefined1 local_49;
   char local_48[15];
   undefined1 local_39;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_b0 = time((time_t*)0x0);
   localtime_r(&local_b0, &local_98);
   strftime(local_58, 0x10, (char*)( (long)&DAT_00105a67 + 7 ), &local_98);
   *(undefined8*)( this + 8 ) = 0;
   local_49 = 0;
   local_a0 = strlen(local_58);
   local_a8 = local_58;
   String::parse_latin1((StrRange*)( this + 8 ));
   strftime(local_48, 0x10, (char*)( (long)&DAT_00105a6f + 2 ), &local_98);
   local_39 = 0;
   __isoc23_sscanf(local_48, 0x105a74, &local_a8);
   iVar1 = (int)local_a8 % 100;
   if ((int)local_a8 < 0) {
      iVar1 = -iVar1;
   }

   *(int*)this = ( (int)local_a8 / 100 ) * 0x3c + iVar1;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* OS_Unix::is_process_running(long const&) const */ulong OS_Unix::is_process_running(OS_Unix *this, long *param_1) {
   pthread_mutex_t *__mutex;
   long lVar1;
   long lVar2;
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
   uint uVar20;
   __pid_t _Var21;
   int iVar22;
   ulong uVar23;
   ulong uVar24;
   uint uVar25;
   long lVar26;
   long lVar27;
   ulong uVar28;
   long *plVar29;
   ulong uVar30;
   uint uVar31;
   undefined1 *puVar32;
   long in_FS_OFFSET;
   uint uStack_8c;
   long lStack_88;
   pthread_mutex_t *ppStack_78;
   OS_Unix *pOStack_70;
   long *plStack_68;
   int local_44;
   long local_40;
   __mutex = (pthread_mutex_t*)( this + 0x138 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar29 = param_1;
   uVar20 = pthread_mutex_lock(__mutex);
   if (uVar20 != 0) {
      uVar23 = (ulong)uVar20;
      std::__throw_system_error(uVar20);
      lStack_88 = *(long*)( in_FS_OFFSET + 0x28 );
      ppStack_78 = __mutex;
      pOStack_70 = this;
      plStack_68 = param_1;
      iVar22 = pthread_mutex_lock((pthread_mutex_t*)( uVar23 + 0x138 ));
      if (iVar22 == 0) {
         lVar1 = *(long*)( uVar23 + 0x130 );
         lVar2 = *plVar29;
         puVar32 = *(undefined1**)( lVar1 + 8 );
         if (puVar32 != (undefined1*)0x0) {
            if (*(int*)( lVar1 + 0x2c ) != 0) {
               uVar30 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar1 + 0x28 ) * 4 ));
               lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar1 + 0x28 ) * 8 );
               uVar24 = lVar2 * 0x3ffff - 1;
               uVar24 = ( uVar24 ^ uVar24 >> 0x1f ) * 0x15;
               uVar24 = ( uVar24 ^ uVar24 >> 0xb ) * 0x41;
               uVar24 = uVar24 >> 0x16 ^ uVar24;
               uVar28 = uVar24 & 0xffffffff;
               if ((int)uVar24 == 0) {
                  uVar28 = 1;
               }

               auVar8._8_8_ = 0;
               auVar8._0_8_ = uVar28 * lVar3;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = uVar30;
               lVar27 = SUB168(auVar8 * auVar16, 8);
               uVar20 = *(uint*)( *(long*)( lVar1 + 0x10 ) + lVar27 * 4 );
               uVar25 = SUB164(auVar8 * auVar16, 8);
               if (uVar20 != 0) {
                  uVar31 = 0;
                  do {
                     if (( (uint)uVar28 == uVar20 ) && ( lVar2 == *(long*)( *(long*)( puVar32 + lVar27 * 8 ) + 0x10 ) )) {
                        lVar1 = *(long*)( puVar32 + (ulong)uVar25 * 8 );
                        puVar32 = (undefined1*)( lVar1 + 0x18 );
                        if (*(char*)( lVar1 + 0x18 ) != '\0') goto LAB_001012d6;
                        uVar24 = ( ulong ) * (uint*)( lVar1 + 0x1c );
                        goto LAB_00101317;
                     }

                     uVar31 = uVar31 + 1;
                     auVar9._8_8_ = 0;
                     auVar9._0_8_ = ( ulong )(uVar25 + 1) * lVar3;
                     auVar17._8_8_ = 0;
                     auVar17._0_8_ = uVar30;
                     lVar27 = SUB168(auVar9 * auVar17, 8);
                     uVar20 = *(uint*)( *(long*)( lVar1 + 0x10 ) + lVar27 * 4 );
                     uVar25 = SUB164(auVar9 * auVar17, 8);
                  }
 while ( ( uVar20 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar20 * lVar3,auVar18._8_8_ = 0,auVar18._0_8_ = uVar30,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar1 + 0x28 ) * 4 ) + uVar25 ) - SUB164(auVar10 * auVar18, 8)) * lVar3,auVar19._8_8_ = 0,auVar19._0_8_ = uVar30,uVar31 <= SUB164(auVar11 * auVar19, 8) );
               }

            }

            puVar32 = (undefined1*)0x0;
         }

         LAB_001012d6:uStack_8c = 0;
         _Var21 = waitpid((__pid_t)lVar2, (int*)&uStack_8c, 1);
         if (_Var21 == 0) {
            uVar24 = 0xffffffff;
         }
 else {
            if (( uStack_8c & 0x7f ) == 0) {
               uStack_8c = uStack_8c >> 8 & 0xff;
            }

            uVar24 = (ulong)uStack_8c;
            if (puVar32 != (undefined1*)0x0) {
               *puVar32 = 0;
               *(uint*)( puVar32 + 4 ) = uStack_8c;
            }

         }

         LAB_00101317:pthread_mutex_unlock((pthread_mutex_t*)( uVar23 + 0x138 ));
         if (lStack_88 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return uVar24;
         }

      }
 else {
         std::__throw_system_error(iVar22);
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   lVar1 = *(long*)( this + 0x130 );
   lVar2 = *param_1;
   lVar3 = *(long*)( lVar1 + 8 );
   if (( lVar3 != 0 ) && ( *(int*)( lVar1 + 0x2c ) != 0 )) {
      uVar24 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar1 + 0x28 ) * 4 ));
      lVar27 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar1 + 0x28 ) * 8 );
      uVar23 = lVar2 * 0x3ffff - 1;
      uVar23 = ( uVar23 ^ uVar23 >> 0x1f ) * 0x15;
      uVar23 = ( uVar23 ^ uVar23 >> 0xb ) * 0x41;
      uVar23 = uVar23 >> 0x16 ^ uVar23;
      this(OS_Unix * )(uVar23 & 0xffffffff);
      if ((int)uVar23 == 0) {
         this(OS_Unix * 0x1);
      }

      auVar4._8_8_ = 0;
      auVar4._0_8_ = (long)this * lVar27;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar24;
      lVar26 = SUB168(auVar4 * auVar12, 8);
      uVar20 = *(uint*)( *(long*)( lVar1 + 0x10 ) + lVar26 * 4 );
      uVar25 = SUB164(auVar4 * auVar12, 8);
      if (uVar20 != 0) {
         uVar31 = 0;
         do {
            if (( (uint)this == uVar20 ) && ( lVar2 == *(long*)( *(long*)( lVar3 + lVar26 * 8 ) + 0x10 ) )) {
               lVar1 = *(long*)( lVar3 + (ulong)uVar25 * 8 );
               uVar23 = ( ulong ) * (byte*)( lVar1 + 0x18 );
               if (*(byte*)( lVar1 + 0x18 ) != 0) {
                  local_44 = 0;
                  _Var21 = waitpid((__pid_t)lVar2, &local_44, 1);
                  if (_Var21 == 0) goto LAB_00101105;
                  *(undefined1*)( lVar1 + 0x18 ) = 0;
                  *(int*)( lVar1 + 0x1c ) = local_44;
               }

               uVar23 = 0;
               goto LAB_00101105;
            }

            uVar31 = uVar31 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(uVar25 + 1) * lVar27;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = uVar24;
            lVar26 = SUB168(auVar5 * auVar13, 8);
            uVar20 = *(uint*)( *(long*)( lVar1 + 0x10 ) + lVar26 * 4 );
            uVar25 = SUB164(auVar5 * auVar13, 8);
         }
 while ( ( uVar20 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar20 * lVar27,auVar14._8_8_ = 0,auVar14._0_8_ = uVar24,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar1 + 0x28 ) * 4 ) + uVar25 ) - SUB164(auVar6 * auVar14, 8)) * lVar27,auVar15._8_8_ = 0,auVar15._0_8_ = uVar24,uVar31 <= SUB164(auVar7 * auVar15, 8) );
      }

   }

   local_44 = 0;
   _Var21 = waitpid((__pid_t)lVar2, &local_44, 1);
   uVar23 = CONCAT71(( int7 )((ulong)this >> 8), _Var21 == 0);
   LAB_00101105:pthread_mutex_unlock(__mutex);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar23 & 0xffffffff;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS_Unix::get_process_exit_code(long const&) const */uint OS_Unix::get_process_exit_code(OS_Unix *this, long *param_1) {
   long lVar1;
   long lVar2;
   long lVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   int iVar12;
   __pid_t _Var13;
   ulong uVar14;
   uint uVar15;
   long lVar16;
   ulong uVar17;
   uint uVar18;
   ulong uVar19;
   uint uVar20;
   undefined1 *puVar21;
   long in_FS_OFFSET;
   uint local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar12 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x138 ));
   if (iVar12 == 0) {
      lVar1 = *(long*)( this + 0x130 );
      lVar2 = *param_1;
      puVar21 = *(undefined1**)( lVar1 + 8 );
      if (puVar21 != (undefined1*)0x0) {
         if (*(int*)( lVar1 + 0x2c ) != 0) {
            uVar19 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar1 + 0x28 ) * 4 ));
            lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar1 + 0x28 ) * 8 );
            uVar14 = lVar2 * 0x3ffff - 1;
            uVar14 = ( uVar14 ^ uVar14 >> 0x1f ) * 0x15;
            uVar14 = ( uVar14 ^ uVar14 >> 0xb ) * 0x41;
            uVar14 = uVar14 >> 0x16 ^ uVar14;
            uVar17 = uVar14 & 0xffffffff;
            if ((int)uVar14 == 0) {
               uVar17 = 1;
            }

            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar17 * lVar3;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar19;
            lVar16 = SUB168(auVar4 * auVar8, 8);
            uVar18 = *(uint*)( *(long*)( lVar1 + 0x10 ) + lVar16 * 4 );
            uVar15 = SUB164(auVar4 * auVar8, 8);
            if (uVar18 != 0) {
               uVar20 = 0;
               do {
                  if (( (uint)uVar17 == uVar18 ) && ( lVar2 == *(long*)( *(long*)( puVar21 + lVar16 * 8 ) + 0x10 ) )) {
                     lVar1 = *(long*)( puVar21 + (ulong)uVar15 * 8 );
                     puVar21 = (undefined1*)( lVar1 + 0x18 );
                     if (*(char*)( lVar1 + 0x18 ) != '\0') goto LAB_001012d6;
                     uVar18 = *(uint*)( lVar1 + 0x1c );
                     goto LAB_00101317;
                  }

                  uVar20 = uVar20 + 1;
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = ( ulong )(uVar15 + 1) * lVar3;
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = uVar19;
                  lVar16 = SUB168(auVar5 * auVar9, 8);
                  uVar18 = *(uint*)( *(long*)( lVar1 + 0x10 ) + lVar16 * 4 );
                  uVar15 = SUB164(auVar5 * auVar9, 8);
               }
 while ( ( uVar18 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar18 * lVar3,auVar10._8_8_ = 0,auVar10._0_8_ = uVar19,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar1 + 0x28 ) * 4 ) + uVar15 ) - SUB164(auVar6 * auVar10, 8)) * lVar3,auVar11._8_8_ = 0,auVar11._0_8_ = uVar19,uVar20 <= SUB164(auVar7 * auVar11, 8) );
            }

         }

         puVar21 = (undefined1*)0x0;
      }

      LAB_001012d6:local_44 = 0;
      _Var13 = waitpid((__pid_t)lVar2, (int*)&local_44, 1);
      if (_Var13 == 0) {
         uVar18 = 0xffffffff;
      }
 else {
         if (( local_44 & 0x7f ) == 0) {
            local_44 = local_44 >> 8 & 0xff;
         }

         uVar18 = local_44;
         if (puVar21 != (undefined1*)0x0) {
            *puVar21 = 0;
            *(uint*)( puVar21 + 4 ) = local_44;
         }

      }

      LAB_00101317:pthread_mutex_unlock((pthread_mutex_t*)( this + 0x138 ));
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return uVar18;
      }

   }
 else {
      std::__throw_system_error(iVar12);
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS_Unix::has_environment(String const&) const */ulong OS_Unix::has_environment(String *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long in_FS_OFFSET;
   long local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   String::utf8();
   pcVar3 = (char*)CharString::get_data();
   pcVar3 = getenv(pcVar3);
   lVar2 = local_18;
   if (local_18 != 0) {
      LOCK();
      plVar1 = (long*)( local_18 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_18 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return CONCAT71(( int7 )((ulong)&local_18 >> 8), pcVar3 != (char*)0x0) & 0xffffffff;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS_Unix::set_cwd(String const&) */byte OS_Unix::set_cwd(String *param_1) {
   long *plVar1;
   long lVar2;
   int iVar3;
   char *__path;
   long in_FS_OFFSET;
   undefined8 local_18;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   String::utf8();
   __path = (char*)CharString::get_data();
   iVar3 = chdir(__path);
   if (local_18 != 0) {
      LOCK();
      plVar1 = (long*)( local_18 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_18 + -0x10 ), false);
      }

   }

   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return -(iVar3 != 0) & 0x13;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS_Unix::get_user_data_dir(String const&) const */OS_Unix * __thiscall OS_Unix::get_user_data_dir(OS_Unix *this,String *param_1){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *(long*)param_1 + 0x270 ) )(&local_28);
   String::path_join((String*)this);
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
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<char>::_ref(CowData<char> const&) [clone .part.0] */void CowData<char>::_ref(CowData<char> *this, CowData *param_1) {
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
/* CowData<char*>::_copy_on_write() [clone .isra.0] */void CowData<char*>::_copy_on_write(CowData<char*> *this) {
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
/* OS_Unix::get_environment(String const&) const */String *OS_Unix::get_environment(String *param_1) {
   long *plVar1;
   long lVar2;
   int iVar3;
   char *pcVar4;
   char *__s;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   size_t local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   String::utf8();
   pcVar4 = (char*)CharString::get_data();
   __s = getenv(pcVar4);
   pcVar4 = local_38;
   if (local_38 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_38 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_38 = (char*)0x0;
         Memory::free_static(pcVar4 + -0x10, false);
      }

   }

   if (__s == (char*)0x0) {
      *(undefined8*)param_1 = 0;
      local_38 = "";
      local_30 = 0;
      String::parse_latin1((StrRange*)param_1);
   }
 else {
      local_40 = 0;
      iVar3 = String::parse_utf8((char*)&local_40, (int)__s, true);
      if (iVar3 == 0) {
         *(long*)param_1 = local_40;
      }
 else {
         *(undefined8*)param_1 = 0;
         local_30 = strlen(__s);
         local_38 = __s;
         String::parse_latin1((StrRange*)param_1);
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

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS_Unix::get_locale() const */void OS_Unix::get_locale(void) {
   long *plVar1;
   code *pcVar2;
   undefined *puVar3;
   long lVar4;
   undefined *puVar5;
   int iVar6;
   char *pcVar7;
   undefined *puVar8;
   long *in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   char cVar9;
   undefined *local_68;
   long local_60;
   undefined *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar2 = *(code**)( *in_RSI + 0x168 );
   local_58 = &_LC39;
   local_60 = 0;
   local_50 = 4;
   String::parse_latin1((StrRange*)&local_60);
   if (pcVar2 == has_environment) {
      String::utf8();
      pcVar7 = (char*)CharString::get_data();
      pcVar7 = getenv(pcVar7);
      puVar8 = local_58;
      cVar9 = pcVar7 != (char*)0x0;
      if (local_58 != (undefined*)0x0) {
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_58 = (undefined*)0x0;
            Memory::free_static(puVar8 + -0x10, false);
         }

      }

   }
 else {
      cVar9 = ( *pcVar2 )();
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

   if (cVar9 == '\0') {
      *(undefined8*)in_RDI = 0;
      local_58 = &_LC40;
      local_50 = 2;
      String::parse_latin1(in_RDI);
   }
 else {
      pcVar2 = *(code**)( *in_RSI + 0x170 );
      local_58 = &_LC39;
      local_60 = 0;
      local_50 = 4;
      String::parse_latin1((StrRange*)&local_60);
      ( *pcVar2 )(&local_68);
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

      iVar6 = String::find_char(( wchar32 ) & local_68, 0x2e);
      puVar8 = local_68;
      if (iVar6 != -1) {
         String::substr((int)&local_58, ( wchar32 ) & local_68);
         puVar5 = local_58;
         puVar3 = local_68;
         puVar8 = local_58;
         if (local_68 == local_58) {
            if (local_58 != (undefined*)0x0) {
               LOCK();
               plVar1 = (long*)( local_58 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               puVar8 = local_68;
               if (*plVar1 == 0) {
                  local_58 = (undefined*)0x0;
                  Memory::free_static(puVar5 + -0x10, false);
                  puVar8 = local_68;
               }

            }

         }
 else if (local_68 != (undefined*)0x0) {
            LOCK();
            plVar1 = (long*)( local_68 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_68 = (undefined*)0x0;
               Memory::free_static(puVar3 + -0x10, false);
               puVar8 = local_58;
            }

         }

      }

      *(undefined**)in_RDI = puVar8;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* OS_Unix::get_dynamic_library_symbol_handle(void*, String const&, void*&, bool) */undefined8 OS_Unix::get_dynamic_library_symbol_handle(OS_Unix *this, void *param_1, String *param_2, void **param_3, bool param_4) {
   long *plVar1;
   long lVar2;
   void *pvVar3;
   char *pcVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   long local_88;
   long local_80;
   long local_78;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   dlerror();
   String::utf8();
   CharString::get_data();
   pvVar3 = (void*)dlsym(param_1);
   pcVar4 = local_58;
   *param_3 = pvVar3;
   if (local_58 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = (char*)0x0;
         Memory::free_static(pcVar4 + -0x10, false);
      }

   }

   pcVar4 = (char*)dlerror();
   uVar5 = 0;
   if (pcVar4 != (char*)0x0) {
      if (!param_4) {
         local_60 = 0;
         local_58 = ".";
         local_50 = 1;
         String::parse_latin1((StrRange*)&local_60);
         local_70 = 0;
         local_50 = strlen(pcVar4);
         local_58 = pcVar4;
         String::parse_latin1((StrRange*)&local_70);
         local_58 = ". Error: ";
         local_80 = 0;
         local_50 = 9;
         String::parse_latin1((StrRange*)&local_80);
         operator+((char *)&
         local_88,(String*)"Can\'t resolve symbol ";
         String::operator +((String*)&local_78, (String*)&local_88);
         String::operator +((String*)&local_68, (String*)&local_78);
         String::operator +((String*)&local_58, (String*)&local_68);
         _err_print_error("get_dynamic_library_symbol_handle", "drivers/unix/os_unix.cpp", 0x398, "Condition \"!p_optional\" is true. Returning: ERR_CANT_RESOLVE", (String*)&local_58, 0, 0);
         pcVar4 = local_58;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar4 + -0x10, false);
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

         lVar2 = local_88;
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

      uVar5 = 0x1a;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS_Unix::set_environment(String const&, String const&) const */void OS_Unix::set_environment(String *param_1, String *param_2) {
   long *plVar1;
   int iVar2;
   char *pcVar3;
   char *__name;
   long lVar4;
   long lVar5;
   long in_FS_OFFSET;
   bool bVar6;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar4 = *(long*)param_2;
   if (lVar4 == 0) {
      local_50 = 0;
      LAB_00101f86:local_58 = 0;
      local_48 = "Invalid environment variable name \'%s\', cannot be empty or include \'=\'.";
      local_40 = 0x47;
      String::parse_latin1((StrRange*)&local_58);
      vformat<String>(&local_48, &local_58, &local_50);
      _err_print_error("set_environment", "drivers/unix/os_unix.cpp", 0x3b8, "Condition \"p_var.is_empty() || p_var.contains_char(\'=\')\" is true.", &local_48, 0, 0);
      pcVar3 = local_48;
   }
 else {
      if (*(uint*)( lVar4 + -8 ) < 2) {
         LAB_00101f61:local_50 = 0;
         plVar1 = (long*)( lVar4 + -0x10 );
         do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_00101f86;
            LOCK();
            lVar5 = *plVar1;
            bVar6 = lVar4 == lVar5;
            if (bVar6) {
               *plVar1 = lVar4 + 1;
               lVar5 = lVar4;
            }

            UNLOCK();
         }
 while ( !bVar6 );
         if (lVar5 != -1) {
            local_50 = *(long*)param_2;
         }

         goto LAB_00101f86;
      }

      iVar2 = String::find_char((wchar32)param_2, 0x3d);
      if (iVar2 != -1) {
         local_50 = 0;
         lVar4 = *(long*)param_2;
         if (lVar4 == 0) goto LAB_00101f86;
         goto LAB_00101f61;
      }

      String::utf8();
      pcVar3 = (char*)CharString::get_data();
      String::utf8();
      __name = (char*)CharString::get_data();
      iVar2 = setenv(__name, pcVar3, 1);
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

      pcVar3 = local_48;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar3 + -0x10, false);
         }

      }

      if (iVar2 == 0) goto LAB_00101ef1;
      local_50 = 0;
      plVar1 = (long*)( *(long*)param_2 + -0x10 );
      if (*(long*)param_2 != 0) {
         do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_001020c6;
            LOCK();
            lVar5 = *plVar1;
            bVar6 = lVar4 == lVar5;
            if (bVar6) {
               *plVar1 = lVar4 + 1;
               lVar5 = lVar4;
            }

            UNLOCK();
         }
 while ( !bVar6 );
         if (lVar5 != -1) {
            local_50 = *(long*)param_2;
         }

      }

      LAB_001020c6:local_58 = 0;
      local_48 = "Failed setting environment variable \'%s\', the system is out of memory.";
      local_40 = 0x46;
      String::parse_latin1((StrRange*)&local_58);
      vformat<String>(&local_48, &local_58, &local_50);
      _err_print_error("set_environment", "drivers/unix/os_unix.cpp", 0x3ba, "Condition \"err != 0\" is true.", &local_48, 0, 0);
      pcVar3 = local_48;
   }

   local_48 = pcVar3;
   if (pcVar3 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( pcVar3 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = (char*)0x0;
         Memory::free_static(pcVar3 + -0x10, false);
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

   LAB_00101ef1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS_Unix::unset_environment(String const&) const */void OS_Unix::unset_environment(OS_Unix *this, String *param_1) {
   long *plVar1;
   int iVar2;
   char *pcVar3;
   long lVar4;
   long lVar5;
   long in_FS_OFFSET;
   bool bVar6;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar4 = *(long*)param_1;
   if (lVar4 == 0) {
      local_40 = 0;
   }
 else {
      if (1 < *(uint*)( lVar4 + -8 )) {
         iVar2 = String::find_char((wchar32)param_1, 0x3d);
         if (iVar2 == -1) {
            String::utf8();
            pcVar3 = (char*)CharString::get_data();
            unsetenv(pcVar3);
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

            goto LAB_001021d7;
         }

         local_40 = 0;
         lVar4 = *(long*)param_1;
         if (lVar4 == 0) goto LAB_0010224e;
      }

      local_40 = 0;
      plVar1 = (long*)( lVar4 + -0x10 );
      do {
         lVar4 = *plVar1;
         if (lVar4 == 0) goto LAB_0010224e;
         LOCK();
         lVar5 = *plVar1;
         bVar6 = lVar4 == lVar5;
         if (bVar6) {
            *plVar1 = lVar4 + 1;
            lVar5 = lVar4;
         }

         UNLOCK();
      }
 while ( !bVar6 );
      if (lVar5 != -1) {
         local_40 = *(long*)param_1;
      }

   }

   LAB_0010224e:local_30 = 0x47;
   local_38 = "Invalid environment variable name \'%s\', cannot be empty or include \'=\'.";
   local_48 = 0;
   String::parse_latin1((StrRange*)&local_48);
   vformat<String>(&local_38, &local_48, &local_40);
   _err_print_error("unset_environment", "drivers/unix/os_unix.cpp", 0x3be, "Condition \"p_var.is_empty() || p_var.contains_char(\'=\')\" is true.", &local_38, 0, 0);
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

   lVar4 = local_48;
   if (local_48 != 0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   lVar4 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   LAB_001021d7:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* OS_Unix::open_dynamic_library(String const&, void*&, OS::GDExtensionData*) */undefined8 OS_Unix::open_dynamic_library(OS_Unix *this, String *param_1, void **param_2, GDExtensionData *param_3) {
   long *plVar1;
   long lVar2;
   CowData<char32_t> *this_00;
   char *pcVar3;
   char *pcVar4;
   char *pcVar5;
   char cVar6;
   undefined8 uVar7;
   void *pvVar8;
   long lVar9;
   long in_FS_OFFSET;
   bool bVar10;
   char *local_88;
   long local_80;
   long local_78;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88 = (char*)0x0;
   if (*(long*)param_1 != 0) {
      plVar1 = (long*)( *(long*)param_1 + -0x10 );
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_001023d5;
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
         local_88 = *(char**)param_1;
      }

   }

   LAB_001023d5:cVar6 = FileAccess::exists((String*)&local_88);
   pcVar5 = local_88;
   if (( cVar6 != '\0' ) && ( cVar6 = String::is_relative_path() ),pcVar5 = local_88,cVar6 != '\0') {
      operator+((char *)&
      local_58,(String*)&_LC62;
      pcVar4 = local_58;
      pcVar3 = local_88;
      if (local_88 == local_58) {
         pcVar5 = local_88;
         if (local_88 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_88 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar4 + -0x10, false);
               pcVar5 = local_88;
            }

         }

      }
 else {
         pcVar5 = local_58;
         if (local_88 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_88 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            pcVar5 = local_58;
            if (*plVar1 == 0) {
               local_88 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
               pcVar5 = local_58;
            }

         }

      }

   }

   local_88 = pcVar5;
   cVar6 = FileAccess::exists((String*)&local_88);
   if (cVar6 == '\0') {
      ( **(code**)( *(long*)this + 0x100 ) )(&local_70, this);
      String::get_base_dir();
      String::get_file();
      String::path_join((String*)&local_58);
      pcVar3 = local_58;
      pcVar5 = local_88;
      if (local_88 == local_58) {
         if (local_88 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_88 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
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

         local_88 = local_58;
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

   }

   cVar6 = FileAccess::exists((String*)&local_88);
   if (cVar6 == '\0') {
      ( **(code**)( *(long*)this + 0x100 ) )(&local_80, this);
      String::get_base_dir();
      local_58 = "../lib";
      local_70 = 0;
      local_50 = 6;
      String::parse_latin1((StrRange*)&local_70);
      String::path_join((String*)&local_68);
      String::get_file();
      String::path_join((String*)&local_58);
      pcVar3 = local_58;
      pcVar5 = local_88;
      if (local_88 == local_58) {
         if (local_88 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_88 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
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

         local_88 = local_58;
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
            cVar6 = FileAccess::exists((String*)&local_88);
            goto joined_r0x00102853;
         }

      }

   }

   cVar6 = FileAccess::exists((String*)&local_88);
   joined_r0x00102853:if (cVar6 == '\0') {
      uVar7 = 7;
      _err_print_error("open_dynamic_library", "drivers/unix/os_unix.cpp", 0x37d, "Condition \"!FileAccess::exists(path)\" is true. Returning: ERR_FILE_NOT_FOUND", 0, 0);
   }
 else {
      String::utf8();
      uVar7 = CharString::get_data();
      pvVar8 = (void*)dlopen(uVar7);
      pcVar5 = local_58;
      *param_2 = pvVar8;
      if (local_58 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_58 = (char*)0x0;
            Memory::free_static(pcVar5 + -0x10, false);
         }

         pvVar8 = *param_2;
      }

      if (pvVar8 == (void*)0x0) {
         uVar7 = dlerror();
         local_60 = 0;
         plVar1 = (long*)( *(long*)param_1 + -0x10 );
         if (*(long*)param_1 != 0) {
            do {
               lVar2 = *plVar1;
               if (lVar2 == 0) goto LAB_001029a0;
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
               local_60 = *(long*)param_1;
            }

         }

         LAB_001029a0:local_68 = 0;
         local_58 = "Can\'t open dynamic library: %s. Error: %s.";
         local_50 = 0x2a;
         String::parse_latin1((StrRange*)&local_68);
         vformat<String,char*>(&local_58, (StrRange*)&local_68, &local_60, uVar7);
         _err_print_error("open_dynamic_library", "drivers/unix/os_unix.cpp", 0x380, "Parameter \"p_library_handle\" is null.", &local_58, 0, 0);
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

         uVar7 = 0x13;
      }
 else {
         uVar7 = 0;
         if (( ( param_3 != (GDExtensionData*)0x0 ) && ( this_00 = *(CowData<char32_t>**)( param_3 + 8 ) ),this_00 != (CowData<char32_t>*)0x0 )) {
            CowData<char32_t>::_ref(this_00, (CowData*)&local_88);
            uVar7 = 0;
         }

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

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar7;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Enum "__rlimit_resource": Some values do not have unique names *//* OS_Unix::get_memory_info() const */OS_Unix * __thiscall OS_Unix::get_memory_info(OS_Unix *this){
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[8];
   char cVar4;
   Variant *pVVar5;
   long lVar6;
   bool bVar7;
   long in_FS_OFFSET;
   long local_e8;
   ulong local_e0;
   ulong local_d8;
   Object *local_a8;
   long local_a0;
   long local_98;
   long local_90;
   undefined1 local_88[8];
   rlim64_t rStack_80;
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary((Dictionary*)this);
   Variant::Variant((Variant*)local_58, -1);
   Variant::Variant((Variant*)local_78, "physical");
   pVVar5 = (Variant*)Dictionary::operator []((Variant*)this);
   if (pVVar5 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar5] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar5 = 0;
      *(int*)pVVar5 = local_58[0];
      *(undefined8*)( pVVar5 + 8 ) = local_50;
      *(undefined8*)( pVVar5 + 0x10 ) = uStack_48;
      local_58[0] = 0;
   }

   if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar4 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar4 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar4 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, -1);
   Variant::Variant((Variant*)local_78, "free");
   pVVar5 = (Variant*)Dictionary::operator []((Variant*)this);
   if (pVVar5 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar5] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar5 = 0;
      *(int*)pVVar5 = local_58[0];
      *(undefined8*)( pVVar5 + 8 ) = local_50;
      *(undefined8*)( pVVar5 + 0x10 ) = uStack_48;
      local_58[0] = 0;
   }

   if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar4 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar4 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar4 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, -1);
   Variant::Variant((Variant*)local_78, _LC70);
   pVVar5 = (Variant*)Dictionary::operator []((Variant*)this);
   if (pVVar5 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar5] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar5 = 0;
      *(int*)pVVar5 = local_58[0];
      *(undefined8*)( pVVar5 + 8 ) = local_50;
      *(undefined8*)( pVVar5 + 0x10 ) = uStack_48;
      local_58[0] = 0;
   }

   if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar4 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar4 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar4 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, -1);
   Variant::Variant((Variant*)local_78, "stack");
   pVVar5 = (Variant*)Dictionary::operator []((Variant*)this);
   if (pVVar5 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar5] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar5 = 0;
      *(int*)pVVar5 = local_58[0];
      *(undefined8*)( pVVar5 + 8 ) = local_50;
      *(undefined8*)( pVVar5 + 0x10 ) = uStack_48;
      local_58[0] = 0;
   }

   if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar4 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar4 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar4 != '\0') {
      Variant::_clear_internal();
   }

   local_90 = 0;
   rStack_80 = 0xd;
   local_88 = (undefined1[8])"/proc/meminfo";
   String::parse_latin1((StrRange*)&local_90);
   FileAccess::open((String*)&local_a8, (int)(StrRange*)&local_90, (Error*)0x1);
   lVar6 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar6 + -0x10 ), false);
      }

   }

   local_e8 = 0;
   if (local_a8 != (Object*)0x0) {
      local_e0 = 0;
      local_d8 = 0;
      do {
         cVar4 = ( **(code**)( *(long*)local_a8 + 0x1d8 ) )();
         if (cVar4 != '\0') break;
         ( **(code**)( *(long*)local_a8 + 0x228 ) )((rlimit64*)local_88);
         String::strip_edges(SUB81(&local_a0, 0), SUB81((rlimit64*)local_88, 0));
         auVar3 = local_88;
         if (local_88 != (undefined1[8])0x0) {
            LOCK();
            plVar1 = (long*)( (long)local_88 - 0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               auVar2._8_8_ = 0;
               auVar2._0_8_ = rStack_80;
               _local_88 = ( rlimit64 )(auVar2 << 0x40);
               Memory::free_static((void*)( (long)auVar3 - 0x10 ), false);
            }

         }

         cVar4 = String::begins_with((char*)&local_a0);
         bVar7 = SUB81((StrRange*)&local_90, 0);
         if (cVar4 != '\0') {
            String::replace((char*)&local_98, (char*)&local_a0);
            String::strip_edges(bVar7, SUB81(&local_98, 0));
            String::split((char*)local_88, bVar7, 0x105b36);
            lVar6 = local_90;
            if (local_90 != 0) {
               LOCK();
               plVar1 = (long*)( local_90 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_90 = 0;
                  Memory::free_static((void*)( lVar6 + -0x10 ), false);
               }

            }

            lVar6 = local_98;
            if (local_98 != 0) {
               LOCK();
               plVar1 = (long*)( local_98 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_98 = 0;
                  Memory::free_static((void*)( lVar6 + -0x10 ), false);
               }

            }

            if (( rStack_80 != 0 ) && ( *(long*)( rStack_80 - 8 ) == 2 )) {
               lVar6 = String::to_int();
               local_e0 = lVar6 << 10;
            }

            CowData<String>::_unref((CowData<String>*)( local_88 + 8 ));
         }

         cVar4 = String::begins_with((char*)&local_a0);
         if (cVar4 != '\0') {
            String::replace((char*)&local_98, (char*)&local_a0);
            String::strip_edges(bVar7, SUB81(&local_98, 0));
            String::split((char*)local_88, bVar7, 0x105b36);
            lVar6 = local_90;
            if (local_90 != 0) {
               LOCK();
               plVar1 = (long*)( local_90 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_90 = 0;
                  Memory::free_static((void*)( lVar6 + -0x10 ), false);
               }

            }

            lVar6 = local_98;
            if (local_98 != 0) {
               LOCK();
               plVar1 = (long*)( local_98 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_98 = 0;
                  Memory::free_static((void*)( lVar6 + -0x10 ), false);
               }

            }

            if (( rStack_80 != 0 ) && ( *(long*)( rStack_80 - 8 ) == 2 )) {
               lVar6 = String::to_int();
               local_d8 = lVar6 << 10;
            }

            CowData<String>::_unref((CowData<String>*)( local_88 + 8 ));
         }

         cVar4 = String::begins_with((char*)&local_a0);
         if (cVar4 != '\0') {
            String::replace((char*)&local_98, (char*)&local_a0);
            String::strip_edges(bVar7, SUB81(&local_98, 0));
            String::split((char*)local_88, bVar7, 0x105b36);
            lVar6 = local_90;
            if (local_90 != 0) {
               LOCK();
               plVar1 = (long*)( local_90 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_90 = 0;
                  Memory::free_static((void*)( lVar6 + -0x10 ), false);
               }

            }

            lVar6 = local_98;
            if (local_98 != 0) {
               LOCK();
               plVar1 = (long*)( local_98 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_98 = 0;
                  Memory::free_static((void*)( lVar6 + -0x10 ), false);
               }

            }

            if (( rStack_80 != 0 ) && ( *(long*)( rStack_80 - 8 ) == 2 )) {
               local_e8 = String::to_int();
               local_e8 = local_e8 << 10;
            }

            CowData<String>::_unref((CowData<String>*)( local_88 + 8 ));
         }

         lVar6 = local_a0;
         if (local_a0 != 0) {
            LOCK();
            plVar1 = (long*)( local_a0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a0 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

      }
 while ( local_a8 != (Object*)0x0 );
      if (local_e0 != 0) {
         Variant::Variant((Variant*)local_58, local_e0);
         Variant::Variant((Variant*)local_78, "physical");
         pVVar5 = (Variant*)Dictionary::operator []((Variant*)this);
         if (pVVar5 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar5] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar5 = 0;
            *(int*)pVVar5 = local_58[0];
            *(undefined8*)( pVVar5 + 8 ) = local_50;
            *(undefined8*)( pVVar5 + 0x10 ) = uStack_48;
            local_58[0] = 0;
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

      }

      if (local_d8 != 0) {
         Variant::Variant((Variant*)local_58, local_d8);
         Variant::Variant((Variant*)local_78, "free");
         pVVar5 = (Variant*)Dictionary::operator []((Variant*)this);
         if (pVVar5 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar5] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar5 = 0;
            *(int*)pVVar5 = local_58[0];
            *(undefined8*)( pVVar5 + 8 ) = local_50;
            *(undefined8*)( pVVar5 + 0x10 ) = uStack_48;
            local_58[0] = 0;
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

      }

      if (local_e8 + local_d8 != 0) {
         Variant::Variant((Variant*)local_58, local_e8 + local_d8);
         Variant::Variant((Variant*)local_78, _LC70);
         pVVar5 = (Variant*)Dictionary::operator []((Variant*)this);
         if (pVVar5 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar5] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar5 = 0;
            *(int*)pVVar5 = local_58[0];
            *(undefined8*)( pVVar5 + 8 ) = local_50;
            *(undefined8*)( pVVar5 + 0x10 ) = uStack_48;
            local_58[0] = 0;
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

      }

   }

   local_88 = (undefined1[8])0x0;
   rStack_80 = 0;
   getrlimit64(RLIMIT_STACK, (rlimit64*)local_88);
   if (local_88 != (undefined1[8])0x0) {
      Variant::Variant((Variant*)local_58, (long)local_88);
      Variant::Variant((Variant*)local_78, "stack");
      pVVar5 = (Variant*)Dictionary::operator []((Variant*)this);
      if (pVVar5 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar5] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar5 = 0;
         *(int*)pVVar5 = local_58[0];
         *(undefined8*)( pVVar5 + 8 ) = local_50;
         *(undefined8*)( pVVar5 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( ( local_a8 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)local_a8 + 0x140 ))(local_a8);
   Memory::free_static(local_a8, false);
}
if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return this;}/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */void CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this, long param_1) {
   CowData<unsigned_char> *pCVar1;
   long *plVar2;
   long lVar3;
   int iVar4;
   ulong uVar5;
   CowData<unsigned_char> *pCVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   CowData<unsigned_char> *pCVar9;
   long lVar10;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar3 = *(long*)this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      LAB_001038b6:lVar10 = 0;
      pCVar6 = (CowData<unsigned_char>*)0x0;
   }
 else {
      lVar10 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar10) {
         return;
      }

      if (param_1 == 0) {
         LOCK();
         plVar2 = (long*)( lVar3 + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 != 0) {
            *(undefined8*)this = 0;
            return;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
      }

      _copy_on_write(this);
      if (lVar10 == 0) goto LAB_001038b6;
      uVar5 = lVar10 - 1U | lVar10 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar6 = (CowData<unsigned_char>*)( ( uVar5 | uVar5 >> 0x20 ) + 1 );
   }

   uVar5 = param_1 - 1U | param_1 - 1U >> 1;
   uVar5 = uVar5 | uVar5 >> 2;
   uVar5 = uVar5 | uVar5 >> 4;
   uVar5 = uVar5 | uVar5 >> 8;
   uVar5 = uVar5 | uVar5 >> 0x10;
   pCVar9 = (CowData<unsigned_char>*)( uVar5 | uVar5 >> 0x20 );
   pCVar1 = pCVar9 + 1;
   if (param_1 <= lVar10) {
      if (( pCVar1 != pCVar6 ) && ( iVar4 = iVar4 != 0 )) {
         return;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return;
      }

      FUN_001060ae();
      return;
   }

   if (pCVar1 != pCVar6) {
      if (lVar10 == 0) {
         puVar7 = (undefined8*)Memory::alloc_static(( ulong )(pCVar9 + 0x11), false);
         if (puVar7 == (undefined8*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
            return;
         }

         puVar8 = puVar7 + 2;
         *puVar7 = 1;
         puVar7[1] = 0;
         *(undefined8**)this = puVar8;
         goto LAB_0010380c;
      }

      pCVar9 = this;
      iVar4 = _realloc(this, (long)pCVar1);
      if (iVar4 != 0) {
         return;
      }

   }

   puVar8 = *(undefined8**)this;
   if (puVar8 == (undefined8*)0x0) {
      resize<false>((long)pCVar9);
      return;
   }

   LAB_0010380c:puVar8[-1] = param_1;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OS_Unix::get_stdin_buffer(long) */long OS_Unix::get_stdin_buffer(long param_1) {
   long *plVar1;
   FILE *__stream;
   void *pvVar2;
   size_t sVar3;
   long in_RDX;
   long in_FS_OFFSET;
   void *local_40[2];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40[0] = (void*)0x0;
   CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)local_40, in_RDX);
   __stream = _stdin;
   if (local_40[0] == (void*)0x0) {
      sVar3 = 0;
   }
 else {
      sVar3 = *(size_t*)( (long)local_40[0] + -8 );
   }

   CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)local_40);
   pvVar2 = local_40[0];
   sVar3 = fread(local_40[0], 1, sVar3, __stream);
   if (sVar3 == 0) {
      *(undefined8*)( param_1 + 8 ) = 0;
      if (pvVar2 != (void*)0x0) {
         LOCK();
         plVar1 = (long*)( (long)pvVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( (long)local_40[0] + -0x10 ), false);
         }

      }

   }
 else {
      CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)local_40, sVar3);
      *(void**)( param_1 + 8 ) = local_40[0];
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OS_Unix::get_stdin_string(long) */long OS_Unix::get_stdin_string(long param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   FILE *__stream;
   char *pcVar4;
   long in_RDX;
   char *pcVar5;
   int __n;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   long local_60[2];
   char *local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = (char*)0x0;
   CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_50, in_RDX);
   __stream = _stdin;
   if (local_50 == (char*)0x0) {
      __n = 0;
   }
 else {
      __n = *(int*)( local_50 + -8 );
   }

   CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_50);
   pcVar5 = local_50;
   pcVar4 = fgets(local_50, __n, __stream);
   if (pcVar4 == (char*)0x0) {
      *(undefined8*)param_1 = 0;
   }
 else {
      String::utf8((char*)&local_70, (int)pcVar5);
      String::replace((char*)&local_68, (char*)&local_70);
      local_48 = &_LC81;
      local_60[0] = 0;
      local_40 = 1;
      String::parse_latin1((StrRange*)local_60);
      String::rstrip((String*)param_1);
      lVar2 = local_60[0];
      lVar3 = local_68;
      if (local_60[0] != 0) {
         LOCK();
         plVar1 = (long*)( local_60[0] + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60[0] = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
            lVar3 = local_68;
         }

      }

      lVar2 = local_70;
      local_68 = lVar3;
      if (lVar3 != 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
            lVar2 = local_70;
         }

      }

      pcVar5 = local_50;
      local_70 = lVar2;
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
            pcVar5 = local_50;
         }

      }

   }

   if (pcVar5 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( pcVar5 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static(local_50 + -0x10, false);
      }

   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* CowData<CharString>::_copy_on_write() [clone .isra.0] */void CowData<CharString>::_copy_on_write(CowData<CharString> *this) {
   CowData *pCVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   undefined8 *puVar5;
   long lVar6;
   ulong uVar7;
   CowData<char> *this_00;
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
      this_00 = (CowData<char>*)( puVar5 + 2 );
      if (lVar2 != 0) {
         do {
            lVar3 = *(long*)this;
            *(undefined8*)this_00 = 0;
            pCVar1 = (CowData*)( lVar3 + lVar6 * 8 );
            if (*(long*)pCVar1 != 0) {
               CowData<char>::_ref(this_00, pCVar1);
            }

            lVar6 = lVar6 + 1;
            this_00 = this_00 + 8;
         }
 while ( lVar2 != lVar6 );
      }

      _unref(this);
      *(CowData<char>**)this = (CowData<char>*)( puVar5 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* Vector<CharString>::push_back(CharString) [clone .isra.0] */void Vector<CharString>::push_back(Vector<CharString> *this, CowData *param_2) {
   CowData<char> *this_00;
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<CharString>::resize<false>((CowData<CharString>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<CharString>::_copy_on_write((CowData<CharString>*)( this + 8 ));
            this_00 = (CowData<char>*)( *(long*)( this + 8 ) + lVar3 * 8 );
            if (*(long*)this_00 == *(long*)param_2) {
               return;
            }

            CowData<char>::_ref(this_00, param_2);
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* Vector<char*>::push_back(char*) [clone .isra.0] */void Vector<char*>::push_back(Vector<char*> *this, char *param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<char*>::resize<false>((CowData<char*>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<char*>::_copy_on_write((CowData<char*>*)( this + 8 ));
            *(char**)( *(long*)( this + 8 ) + lVar3 * 8 ) = param_1;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* OS_Unix::create_process(String const&, List<String, DefaultAllocator> const&, long*, bool) */undefined8 OS_Unix::create_process(String *param_1, List *param_2, long *param_3, bool param_4) {
   long *plVar1;
   char **ppcVar2;
   long lVar3;
   code *pcVar4;
   __pid_t _Var5;
   int iVar6;
   char *pcVar7;
   undefined8 uVar8;
   undefined7 in_register_00000009;
   long lVar9;
   long in_FS_OFFSET;
   long local_70;
   Vector<CharString> local_68[8];
   long local_60;
   undefined8 local_58;
   char **local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _Var5 = fork();
   if (_Var5 < 0) {
      _err_print_error("create_process", "drivers/unix/os_unix.cpp", 0x301, "Condition \"pid < 0\" is true. Returning: ERR_CANT_FORK", 0, 0);
      uVar8 = 0x1d;
   }
 else {
      if (_Var5 == 0) {
         setsid();
         local_60 = 0;
         String::utf8();
         Vector<CharString>::push_back(local_68);
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

         if ((long*)*param_3 != (long*)0x0) {
            for (lVar3 = *(long*)*param_3; lVar3 != 0; lVar3 = *(long*)( lVar3 + 8 )) {
               String::utf8();
               Vector<CharString>::push_back(local_68);
               lVar9 = local_58;
               if (local_58 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_58 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_58 = 0;
                     Memory::free_static((void*)( lVar9 + -0x10 ), false);
                  }

               }

            }

         }

         lVar3 = local_60;
         local_50 = (char**)0x0;
         if (( local_60 != 0 ) && ( lVar9 = 0 ),0 < *(long*)( local_60 + -8 )) {
            do {
               lVar9 = lVar9 + 1;
               pcVar7 = (char*)CharString::get_data();
               Vector<char*>::push_back((Vector<char*>*)&local_58, pcVar7);
            }
 while ( lVar9 < *(long*)( lVar3 + -8 ) );
         }

         Vector<char*>::push_back((Vector<char*>*)&local_58, (char*)0x0);
         ppcVar2 = local_50;
         if (local_50 == (char**)0x0) {
            pcVar7 = (char*)0x0;
            LAB_00104282:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, (long)pcVar7, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         pcVar7 = local_50[-1];
         if ((long)pcVar7 < 1) goto LAB_00104282;
         String::utf8();
         pcVar7 = (char*)CharString::get_data();
         execvp(pcVar7, ppcVar2);
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

         operator+((char *)&
         local_70,(String*)"Could not create child process: ";
         _err_print_error("create_process", "drivers/unix/os_unix.cpp", 0x317, &local_70, 0, 0);
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

         raise(9);
         if (local_50 != (char**)0x0) {
            LOCK();
            ppcVar2 = local_50 + -2;
            *ppcVar2 = *ppcVar2 + -1;
            UNLOCK();
            if (*ppcVar2 == (char*)0x0) {
               Memory::free_static(local_50 + -2, false);
               CowData<CharString>::_unref((CowData<CharString>*)&local_60);
               goto LAB_00103f92;
            }

         }

         CowData<CharString>::_unref((CowData<CharString>*)&local_60);
      }

      LAB_00103f92:local_58 = CONCAT71(local_58._1_7_, 1);
      local_58 = CONCAT44(0xffffffff, (undefined4)local_58);
      iVar6 = pthread_mutex_lock((pthread_mutex_t*)( param_1 + 0x138 ));
      if (iVar6 != 0) {
         std::__throw_system_error(iVar6);
         goto LAB_001042c9;
      }

      local_70 = (long)_Var5;
      HashMap<long,OS_Unix::ProcessInfo,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,OS_Unix::ProcessInfo>>>::insert((long*)local_68, *(ProcessInfo**)( param_1 + 0x130 ), SUB81(&local_70, 0));
      pthread_mutex_unlock((pthread_mutex_t*)( param_1 + 0x138 ));
      if ((long*)CONCAT71(in_register_00000009, param_4) != (long*)0x0) {
         *(long*)CONCAT71(in_register_00000009, param_4) = (long)_Var5;
      }

      uVar8 = 0;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar8;
   }

   LAB_001042c9:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* OS_Unix::execute(String const&, List<String, DefaultAllocator> const&, String*, int*, bool,
   MutexImpl<std::recursive_mutex>*, bool) */undefined8 OS_Unix::execute(String *param_1, List *param_2, String *param_3, int *param_4, bool param_5, MutexImpl *param_6, bool param_7) {
   long *plVar1;
   String *this;
   StrRange *pSVar2;
   String *pSVar3;
   pthread_mutex_t *__mutex;
   char **__argv;
   code *pcVar4;
   undefined1 *puVar5;
   int iVar6;
   uint uVar7;
   __pid_t __pid;
   char *pcVar8;
   FILE *__stream;
   char *pcVar9;
   size_t sVar10;
   undefined8 uVar11;
   undefined1 *puVar12;
   long lVar13;
   long lVar14;
   undefined7 in_register_00000081;
   long in_FS_OFFSET;
   undefined1 auStack_10030[65536];
   puVar5 = &stack0xffffffffffffffd0;
   do {
      puVar12 = puVar5;
      *(undefined8*)( puVar12 + -0x1000 ) = *(undefined8*)( puVar12 + -0x1000 );
      puVar5 = puVar12 + -0x1000;
   }
 while ( puVar12 + -0x1000 != auStack_10030 );
   __mutex = *(pthread_mutex_t**)( puVar12 + 0xf038 );
   *(int**)( puVar12 + -0x1070 ) = param_4;
   *(ulong*)( puVar12 + -0x1068 ) = CONCAT71(in_register_00000081, param_5);
   *(int*)( puVar12 + -0x105c ) = (int)param_6;
   *(undefined8*)( puVar12 + 0xeff0 ) = *(undefined8*)( in_FS_OFFSET + 0x28 );
   if (param_4 == (int*)0x0) {
      *(undefined8*)( puVar12 + -0x1080 ) = 0x104765;
      __pid = fork();
      if (__pid < 0) {
         uVar11 = 0x1d;
         *(undefined8*)( puVar12 + -0x1080 ) = 0x104afb;
         _err_print_error("execute", "drivers/unix/os_unix.cpp", 0x2db, "Condition \"pid < 0\" is true. Returning: ERR_CANT_FORK", 0, 0);
      }
 else {
         if (__pid == 0) {
            *(undefined8*)( puVar12 + -0x1030 ) = 0;
            *(undefined8*)( puVar12 + -0x1080 ) = 0x104799;
            String::utf8();
            *(undefined8*)( puVar12 + -0x1080 ) = 0x1047a4;
            Vector<CharString>::push_back((Vector<CharString>*)( puVar12 + -0x1038 ));
            if (*(long*)( puVar12 + -0x1028 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( puVar12 + -0x1028 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar13 = *(long*)( puVar12 + -0x1028 );
                  *(undefined8*)( puVar12 + -0x1028 ) = 0;
                  *(undefined8*)( puVar12 + -0x1080 ) = 0x104a7b;
                  Memory::free_static((void*)( lVar13 + -0x10 ), false);
               }

            }

            if (*(long**)param_3 != (long*)0x0) {
               for (lVar13 = **(long**)param_3; lVar13 != 0; lVar13 = *(long*)( lVar13 + 8 )) {
                  *(undefined8*)( puVar12 + -0x1080 ) = 0x1047db;
                  String::utf8();
                  *(undefined8*)( puVar12 + -0x1080 ) = 0x1047e6;
                  Vector<CharString>::push_back((Vector<CharString>*)( puVar12 + -0x1038 ));
                  if (*(long*)( puVar12 + -0x1028 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( puVar12 + -0x1028 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar14 = *(long*)( puVar12 + -0x1028 );
                        *(undefined8*)( puVar12 + -0x1028 ) = 0;
                        *(undefined8*)( puVar12 + -0x1080 ) = 0x104811;
                        Memory::free_static((void*)( lVar14 + -0x10 ), false);
                     }

                  }

               }

            }

            *(undefined8*)( puVar12 + -0x1020 ) = 0;
            lVar13 = *(long*)( puVar12 + -0x1030 );
            if (( lVar13 != 0 ) && ( lVar14 = 0 ),0 < *(long*)( lVar13 + -8 )) {
               do {
                  lVar14 = lVar14 + 1;
                  *(undefined8*)( puVar12 + -0x1080 ) = 0x10484d;
                  pcVar8 = (char*)CharString::get_data();
                  *(undefined8*)( puVar12 + -0x1080 ) = 0x104858;
                  Vector<char*>::push_back((Vector<char*>*)( puVar12 + -0x1028 ), pcVar8);
               }
 while ( lVar14 < *(long*)( lVar13 + -8 ) );
            }

            *(undefined8*)( puVar12 + -0x1080 ) = 0x104869;
            Vector<char*>::push_back((Vector<char*>*)( puVar12 + -0x1028 ), (char*)0x0);
            __argv = *(char***)( puVar12 + -0x1020 );
            if (__argv == (char**)0x0) {
               pcVar8 = (char*)0x0;
               LAB_00104b03:*(undefined8*)( puVar12 + -0x1080 ) = 1;
               *(undefined8*)( puVar12 + -0x1088 ) = 0;
               *(undefined**)( puVar12 + -0x1090 ) = &_LC0;
               *(char**)( puVar12 + -0x1098 ) = "size()";
               *(undefined8*)( puVar12 + -0x10a0 ) = 0x104b38;
               _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, (long)pcVar8, "p_index", *(char**)( puVar12 + -0x1098 ), *(char**)( puVar12 + -0x1090 ), (bool)puVar12[-0x1088], (bool)puVar12[-0x1080]);
               *(undefined8*)( puVar12 + -0x1080 ) = 0x104b41;
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar4 = (code*)invalidInstructionException();
               ( *pcVar4 )();
            }

            pcVar8 = __argv[-1];
            if ((long)pcVar8 < 1) goto LAB_00104b03;
            *(undefined8*)( puVar12 + -0x1080 ) = 0x104894;
            String::utf8();
            *(undefined8*)( puVar12 + -0x1080 ) = 0x10489c;
            pcVar8 = (char*)CharString::get_data();
            *(undefined8*)( puVar12 + -0x1080 ) = 0x1048a7;
            execvp(pcVar8, __argv);
            if (*(long*)( puVar12 + -0x1040 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( puVar12 + -0x1040 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar13 = *(long*)( puVar12 + -0x1040 );
                  *(undefined8*)( puVar12 + -0x1040 ) = 0;
                  *(undefined8*)( puVar12 + -0x1080 ) = 0x104acc;
                  Memory::free_static((void*)( lVar13 + -0x10 ), false);
               }

            }

            *(undefined8*)( puVar12 + -0x1080 ) = 0x1048cf;
            operator+(puVar12
            + -0x1040,(String*)"Could not create child process: ";
            *(undefined8*)( puVar12 + -0x1080 ) = 0x1048f0;
            _err_print_error("execute", "drivers/unix/os_unix.cpp", 0x2ed, puVar12 + -0x1040, 0, 0);
            if (*(long*)( puVar12 + -0x1040 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( puVar12 + -0x1040 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar13 = *(long*)( puVar12 + -0x1040 );
                  *(undefined8*)( puVar12 + -0x1040 ) = 0;
                  *(undefined8*)( puVar12 + -0x1080 ) = 0x104aae;
                  Memory::free_static((void*)( lVar13 + -0x10 ), false);
               }

            }

            *(undefined8*)( puVar12 + -0x1080 ) = 0x104910;
            raise(9);
            if (*(long*)( puVar12 + -0x1020 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( puVar12 + -0x1020 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  *(undefined8*)( puVar12 + -0x1080 ) = 0x104a90;
                  Memory::free_static((void*)( *(long*)( puVar12 + -0x1020 ) + -0x10 ), false);
               }

            }

            *(undefined8*)( puVar12 + -0x1080 ) = 0x104930;
            CowData<CharString>::_unref((CowData<CharString>*)( puVar12 + -0x1030 ));
         }

         *(undefined8*)( puVar12 + -0x1080 ) = 0x10493d;
         waitpid(__pid, (int*)( puVar12 + -0x1028 ), 0);
         if (*(long*)( puVar12 + -0x1068 ) != 0) {
            uVar7 = *(uint*)( puVar12 + -0x1028 );
            if (( uVar7 & 0x7f ) == 0) {
               uVar7 = uVar7 >> 8 & 0xff;
            }

            **(uint**)( puVar12 + -0x1068 ) = uVar7;
         }

         uVar11 = 0;
      }

   }
 else {
      this(String * )(puVar12 + -0x1028);
      pSVar2 = (StrRange*)( puVar12 + -0x1038 );
      *(undefined8*)( puVar12 + -0x1038 ) = 0;
      *(undefined8*)( puVar12 + -0x1020 ) = 1;
      *(undefined**)( puVar12 + -0x1028 ) = &_LC95;
      *(undefined8*)( puVar12 + -0x1080 ) = 0x104367;
      String::parse_latin1(pSVar2);
      *(undefined8*)( puVar12 + -0x1080 ) = 0x104379;
      operator+((char *)
      this,(String*)&_LC95;
      *(String**)( puVar12 + -0x1078 ) = (String*)( puVar12 + -0x1050 );
      *(undefined8*)( puVar12 + -0x1080 ) = 0x104390;
      String::operator +((String*)( puVar12 + -0x1050 ), this);
      if (*(long*)( puVar12 + -0x1028 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( puVar12 + -0x1028 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar13 = *(long*)( puVar12 + -0x1028 );
            *(undefined8*)( puVar12 + -0x1028 ) = 0;
            *(undefined8*)( puVar12 + -0x1080 ) = 0x1043bb;
            Memory::free_static((void*)( lVar13 + -0x10 ), false);
         }

      }

      if (*(long*)( puVar12 + -0x1038 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( puVar12 + -0x1038 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar13 = *(long*)( puVar12 + -0x1038 );
            *(undefined8*)( puVar12 + -0x1038 ) = 0;
            *(undefined8*)( puVar12 + -0x1080 ) = 0x1043e6;
            Memory::free_static((void*)( lVar13 + -0x10 ), false);
         }

      }

      if (( *(long**)param_3 != (long*)0x0 ) && ( lVar13 = lVar13 != 0 )) {
         do {
            *(undefined8*)( puVar12 + -0x1038 ) = 0;
            *(undefined**)( puVar12 + -0x1028 ) = &_LC95;
            *(undefined8*)( puVar12 + -0x1020 ) = 1;
            *(undefined8*)( puVar12 + -0x1080 ) = 0x104439;
            String::parse_latin1(pSVar2);
            *(undefined**)( puVar12 + -0x1028 ) = &_LC96;
            *(undefined8*)( puVar12 + -0x1048 ) = 0;
            *(undefined8*)( puVar12 + -0x1020 ) = 2;
            *(undefined8*)( puVar12 + -0x1080 ) = 0x104462;
            String::parse_latin1((StrRange*)( puVar12 + -0x1048 ));
            *(undefined8*)( puVar12 + -0x1080 ) = 0x104470;
            String::operator +((String*)( puVar12 + -0x1040 ), (String*)( puVar12 + -0x1048 ));
            *(undefined8*)( puVar12 + -0x1080 ) = 0x10447e;
            String::operator +(this, (String*)( puVar12 + -0x1040 ));
            *(undefined8*)( puVar12 + -0x1080 ) = 0x10448a;
            String::operator +=(*(String**)( puVar12 + -0x1078 ), this);
            if (*(long*)( puVar12 + -0x1028 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( puVar12 + -0x1028 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar14 = *(long*)( puVar12 + -0x1028 );
                  *(undefined8*)( puVar12 + -0x1028 ) = 0;
                  *(undefined8*)( puVar12 + -0x1080 ) = 0x1044b5;
                  Memory::free_static((void*)( lVar14 + -0x10 ), false);
               }

            }

            if (*(long*)( puVar12 + -0x1040 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( puVar12 + -0x1040 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar14 = *(long*)( puVar12 + -0x1040 );
                  *(undefined8*)( puVar12 + -0x1040 ) = 0;
                  *(undefined8*)( puVar12 + -0x1080 ) = 0x1044e0;
                  Memory::free_static((void*)( lVar14 + -0x10 ), false);
               }

            }

            if (*(long*)( puVar12 + -0x1048 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( puVar12 + -0x1048 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar14 = *(long*)( puVar12 + -0x1048 );
                  *(undefined8*)( puVar12 + -0x1048 ) = 0;
                  *(undefined8*)( puVar12 + -0x1080 ) = 0x10450b;
                  Memory::free_static((void*)( lVar14 + -0x10 ), false);
               }

            }

            if (*(long*)( puVar12 + -0x1038 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( puVar12 + -0x1038 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar14 = *(long*)( puVar12 + -0x1038 );
                  *(undefined8*)( puVar12 + -0x1038 ) = 0;
                  *(undefined8*)( puVar12 + -0x1080 ) = 0x104536;
                  Memory::free_static((void*)( lVar14 + -0x10 ), false);
               }

            }

            lVar13 = *(long*)( lVar13 + 8 );
         }
 while ( lVar13 != 0 );
      }

      if (puVar12[-0x105c] == '\0') {
         *(undefined8*)( puVar12 + -0x1080 ) = 0x10455e;
         String::operator +=(*(String**)( puVar12 + -0x1078 ), " 2>/dev/null");
      }
 else {
         *(undefined8*)( puVar12 + -0x1080 ) = 0x104670;
         String::operator +=(*(String**)( puVar12 + -0x1078 ), " 2>&1");
      }

      *(undefined8*)( puVar12 + -0x1080 ) = 0x10456a;
      String::utf8();
      *(undefined8*)( puVar12 + -0x1080 ) = 0x104572;
      pcVar8 = (char*)CharString::get_data();
      *(undefined8*)( puVar12 + -0x1080 ) = 0x104581;
      __stream = popen(pcVar8, "r");
      if (*(long*)( puVar12 + -0x1028 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( puVar12 + -0x1028 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar13 = *(long*)( puVar12 + -0x1028 );
            *(undefined8*)( puVar12 + -0x1028 ) = 0;
            *(undefined8*)( puVar12 + -0x1080 ) = 0x1045af;
            Memory::free_static((void*)( lVar13 + -0x10 ), false);
         }

      }

      pcVar8 = puVar12 + -0x1018;
      pSVar3 = (String*)( puVar12 + -0x1040 );
      if (__stream == (FILE*)0x0) {
         *(undefined8*)( puVar12 + -0x1038 ) = 0;
         *(undefined**)( puVar12 + -0x1028 ) = &_LC41;
         *(undefined8*)( puVar12 + -0x1020 ) = 1;
         *(undefined8*)( puVar12 + -0x1080 ) = 0x104989;
         String::parse_latin1(pSVar2);
         *(undefined8*)( puVar12 + -0x1080 ) = 0x10499c;
         operator+((char *)
         pSVar3,(String*)"Cannot create pipe from command: ";
         *(undefined8*)( puVar12 + -0x1080 ) = 0x1049aa;
         String::operator +(this, pSVar3);
         *(undefined8*)( puVar12 + -0x1088 ) = 0;
         *(undefined8*)( puVar12 + -0x1090 ) = 0x1049d5;
         _err_print_error("execute", "drivers/unix/os_unix.cpp", 0x2c2, "Parameter \"f\" is null.", this, 0);
         if (*(long*)( puVar12 + -0x1028 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( puVar12 + -0x1028 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar13 = *(long*)( puVar12 + -0x1028 );
               *(undefined8*)( puVar12 + -0x1028 ) = 0;
               *(undefined8*)( puVar12 + -0x1080 ) = 0x104a02;
               Memory::free_static((void*)( lVar13 + -0x10 ), false);
            }

         }

         if (*(long*)( puVar12 + -0x1040 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( puVar12 + -0x1040 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar13 = *(long*)( puVar12 + -0x1040 );
               *(undefined8*)( puVar12 + -0x1040 ) = 0;
               *(undefined8*)( puVar12 + -0x1080 ) = 0x104a2d;
               Memory::free_static((void*)( lVar13 + -0x10 ), false);
            }

         }

         if (*(long*)( puVar12 + -0x1038 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( puVar12 + -0x1038 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar13 = *(long*)( puVar12 + -0x1038 );
               *(undefined8*)( puVar12 + -0x1038 ) = 0;
               *(undefined8*)( puVar12 + -0x1080 ) = 0x104a58;
               Memory::free_static((void*)( lVar13 + -0x10 ), false);
            }

         }

         uVar11 = 0x13;
      }
 else {
         while (true) {
            *(undefined8*)( puVar12 + -0x1080 ) = 0x1045d8;
            pcVar9 = fgets(pcVar8, 0xffff, __stream);
            if (pcVar9 == (char*)0x0) break;
            if (__mutex != (pthread_mutex_t*)0x0) {
               *(undefined8*)( puVar12 + -0x1080 ) = 0x1045ee;
               iVar6 = pthread_mutex_lock(__mutex);
               if (iVar6 != 0) {
                  *(undefined8*)( puVar12 + -0x1080 ) = 0x104b4a;
                  std::__throw_system_error(iVar6);
                  goto LAB_00104b4a;
               }

            }

            *(undefined8*)( puVar12 + -0x1040 ) = 0;
            *(undefined8*)( puVar12 + -0x1080 ) = 0x104611;
            iVar6 = String::parse_utf8((char*)pSVar3, (int)pcVar8, true);
            if (iVar6 == 0) {
               *(undefined8*)( puVar12 + -0x1080 ) = 0x104622;
               String::operator +=(*(String**)( puVar12 + -0x1070 ), pSVar3);
            }
 else {
               *(undefined8*)( puVar12 + -0x1038 ) = 0;
               *(undefined8*)( puVar12 + -0x1080 ) = 0x104689;
               sVar10 = strlen(pcVar8);
               *(char**)( puVar12 + -0x1028 ) = pcVar8;
               *(size_t*)( puVar12 + -0x1020 ) = sVar10;
               *(undefined8*)( puVar12 + -0x1080 ) = 0x10469e;
               String::parse_latin1(pSVar2);
               *(undefined8*)( puVar12 + -0x1080 ) = 0x1046ab;
               String::operator +=(*(String**)( puVar12 + -0x1070 ), (String*)pSVar2);
               if (*(long*)( puVar12 + -0x1038 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( puVar12 + -0x1038 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar13 = *(long*)( puVar12 + -0x1038 );
                     *(undefined8*)( puVar12 + -0x1038 ) = 0;
                     *(undefined8*)( puVar12 + -0x1080 ) = 0x1046de;
                     Memory::free_static((void*)( lVar13 + -0x10 ), false);
                  }

               }

            }

            if (__mutex != (pthread_mutex_t*)0x0) {
               *(undefined8*)( puVar12 + -0x1080 ) = 0x10462f;
               pthread_mutex_unlock(__mutex);
            }

            if (*(long*)( puVar12 + -0x1040 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( puVar12 + -0x1040 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar13 = *(long*)( puVar12 + -0x1040 );
                  *(undefined8*)( puVar12 + -0x1040 ) = 0;
                  *(undefined8*)( puVar12 + -0x1080 ) = 0x10465a;
                  Memory::free_static((void*)( lVar13 + -0x10 ), false);
               }

            }

         }
;
         *(undefined8*)( puVar12 + -0x1080 ) = 0x1046f0;
         uVar7 = pclose(__stream);
         if (*(uint**)( puVar12 + -0x1068 ) != (uint*)0x0) {
            **(uint**)( puVar12 + -0x1068 ) = uVar7 >> 8 & 0xff;
         }

         uVar11 = 0;
      }

      if (*(long*)( puVar12 + -0x1050 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( puVar12 + -0x1050 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar13 = *(long*)( puVar12 + -0x1050 );
            *(undefined8*)( puVar12 + -0x1050 ) = 0;
            *(undefined8*)( puVar12 + -0x1080 ) = 0x10472c;
            Memory::free_static((void*)( lVar13 + -0x10 ), false);
         }

      }

   }

   if (*(long*)( puVar12 + 0xeff0 ) == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar11;
   }

   LAB_00104b4a:/* WARNING: Subroutine does not return */*(undefined**)( puVar12 + -0x1080 ) = &UNK_00104b4f;
   __stack_chk_fail();
}
/* OS_Unix::execute_with_pipe(String const&, List<String, DefaultAllocator> const&, bool) */OS_Unix * __thiscall
OS_Unix::execute_with_pipe(OS_Unix *this,String *param_1,List *param_2,bool param_3){
   long *plVar1;
   char **ppcVar2;
   code *pcVar3;
   Object *pOVar4;
   Object *pOVar5;
   char cVar6;
   int iVar7;
   __pid_t _Var8;
   uint uVar9;
   char *pcVar10;
   Variant *pVVar11;
   undefined8 *puVar12;
   CompositeLogger *this_00;
   undefined7 in_register_00000009;
   long lVar13;
   OS *this_01;
   long lVar14;
   long in_FS_OFFSET;
   Vector aVStack_130[8];
   long alStack_128[2];
   long lStack_118;
   OS_Unix *pOStack_110;
   Object *local_d0;
   Object *local_c8;
   long local_c0;
   Vector<CharString> local_b8[8];
   long local_b0;
   undefined8 local_a8;
   char **local_a0;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_80;
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary((Dictionary*)this);
   local_90 = _LC32;
   local_88 = _LC32;
   local_80 = _LC32;
   iVar7 = pipe((int*)&local_90);
   if (iVar7 != 0) {
      _err_print_error("execute_with_pipe", "drivers/unix/os_unix.cpp", 0x267, "Condition \"pipe(pipe_in) != 0\" is true. Returning: ret", 0, 0);
      goto LAB_00104c27;
   }

   iVar7 = pipe((int*)&local_88);
   if (iVar7 == 0) {
      iVar7 = pipe((int*)&local_80);
      if (iVar7 == 0) {
         _Var8 = fork();
         if (_Var8 < 0) {
            if (-1 < (int)local_90) {
               close((int)local_90);
            }

            if (-1 < local_90) {
               close(local_90._4_4_);
            }

            if (-1 < (int)local_88) {
               close((int)local_88);
            }

            if (-1 < local_88) {
               close(local_88._4_4_);
            }

            if (-1 < (int)local_80) {
               close((int)local_80);
            }

            if (-1 < local_80) {
               close(local_80._4_4_);
            }

            _err_print_error("execute_with_pipe", "drivers/unix/os_unix.cpp", 0x275, "Method/function failed. Returning: ret", 0, 0);
         }
 else {
            if (_Var8 == 0) {
               local_b0 = 0;
               String::utf8();
               Vector<CharString>::push_back(local_b8);
               lVar13 = local_a8;
               if (local_a8 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_a8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_a8 = 0;
                     Memory::free_static((void*)( lVar13 + -0x10 ), false);
                  }

               }

               if (*(long**)CONCAT71(in_register_00000009, param_3) != (long*)0x0) {
                  for (lVar13 = **(long**)CONCAT71(in_register_00000009, param_3); lVar13 != 0; lVar13 = *(long*)( lVar13 + 8 )) {
                     String::utf8();
                     Vector<CharString>::push_back(local_b8);
                     lVar14 = local_a8;
                     if (local_a8 != 0) {
                        LOCK();
                        plVar1 = (long*)( local_a8 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_a8 = 0;
                           Memory::free_static((void*)( lVar14 + -0x10 ), false);
                        }

                     }

                  }

               }

               lVar13 = local_b0;
               local_a0 = (char**)0x0;
               if (( local_b0 != 0 ) && ( lVar14 = 0 ),0 < *(long*)( local_b0 + -8 )) {
                  do {
                     lVar14 = lVar14 + 1;
                     pcVar10 = (char*)CharString::get_data();
                     Vector<char*>::push_back((Vector<char*>*)&local_a8, pcVar10);
                  }
 while ( lVar14 < *(long*)( lVar13 + -8 ) );
               }

               Vector<char*>::push_back((Vector<char*>*)&local_a8, (char*)0x0);
               close(0);
               dup2((int)local_90, 0);
               close(1);
               dup2(local_88._4_4_, 1);
               close(2);
               dup2(local_80._4_4_, 2);
               if (-1 < (int)local_90) {
                  close((int)local_90);
               }

               if (-1 < local_90) {
                  close(local_90._4_4_);
               }

               if (-1 < (int)local_88) {
                  close((int)local_88);
               }

               if (-1 < local_88) {
                  close(local_88._4_4_);
               }

               if (-1 < (int)local_80) {
                  close((int)local_80);
               }

               if (-1 < local_80) {
                  close(local_80._4_4_);
               }

               ppcVar2 = local_a0;
               if (local_a0 == (char**)0x0) {
                  pcVar10 = (char*)0x0;
                  LAB_00105425:pOStack_110 = (OS_Unix*)0x10545a;
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, (long)pcVar10, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               pcVar10 = local_a0[-1];
               if ((long)pcVar10 < 1) goto LAB_00105425;
               String::utf8();
               pcVar10 = (char*)CharString::get_data();
               execvp(pcVar10, ppcVar2);
               lVar13 = local_c0;
               if (local_c0 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_c0 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_c0 = 0;
                     Memory::free_static((void*)( lVar13 + -0x10 ), false);
                  }

               }

               operator+((char *)&
               local_c0,(String*)"Could not create child process: ";
               _err_print_error("execute_with_pipe", "drivers/unix/os_unix.cpp", 0x293, &local_c0, 0, 0);
               lVar13 = local_c0;
               if (local_c0 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_c0 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_c0 = 0;
                     Memory::free_static((void*)( lVar13 + -0x10 ), false);
                  }

               }

               raise(9);
               if (local_a0 != (char**)0x0) {
                  LOCK();
                  ppcVar2 = local_a0 + -2;
                  *ppcVar2 = *ppcVar2 + -1;
                  UNLOCK();
                  if (*ppcVar2 == (char*)0x0) {
                     Memory::free_static(local_a0 + -2, false);
                  }

               }

               CowData<CharString>::_unref((CowData<CharString>*)&local_b0);
            }

            close((int)local_90);
            close(local_88._4_4_);
            close(local_80._4_4_);
            local_d0 = (Object*)0x0;
            Ref<FileAccessUnixPipe>::instantiate<>((Ref<FileAccessUnixPipe>*)&local_d0);
            pOVar4 = local_d0;
            FileAccessUnixPipe::open_existing((int)local_d0, (int)local_88, SUB81((ulong)local_90 >> 0x20, 0));
            local_c8 = (Object*)0x0;
            Ref<FileAccessUnixPipe>::instantiate<>((Ref<FileAccessUnixPipe>*)&local_c8);
            pOVar5 = local_c8;
            FileAccessUnixPipe::open_existing((int)local_c8, (int)local_80, false);
            local_a8 = CONCAT71(local_a8._1_7_, 1);
            local_a8 = CONCAT44(0xffffffff, (undefined4)local_a8);
            uVar9 = pthread_mutex_lock((pthread_mutex_t*)( param_1 + 0x138 ));
            if (uVar9 != 0) {
               this_01 = (OS*)(ulong)uVar9;
               std::__throw_system_error(uVar9);
               lStack_118 = *(long*)( in_FS_OFFSET + 0x28 );
               pOStack_110 = this;
               OS::OS(this_01);
               *(undefined1(*) [16])( this_01 + 0x148 ) = (undefined1[16])0x0;
               *(undefined***)this_01 = &PTR___cxa_pure_virtual_001082e0;
               *(undefined8*)( this_01 + 0x130 ) = 0;
               *(undefined8*)( this_01 + 0x158 ) = 0;
               *(undefined4*)( this_01 + 0x148 ) = 1;
               *(undefined1(*) [16])( this_01 + 0x138 ) = (undefined1[16])0x0;
               alStack_128[0] = 0;
               puVar12 = (undefined8*)operator_new(8, "");
               *puVar12 = &PTR_logv_00108670;
               if (alStack_128[0] == 0) {
                  lVar13 = 1;
               }
 else {
                  lVar13 = *(long*)( alStack_128[0] + -8 ) + 1;
               }

               iVar7 = CowData<Logger*>::resize<false>((CowData<Logger*>*)alStack_128, lVar13);
               if (iVar7 == 0) {
                  if (alStack_128[0] == 0) {
                     lVar14 = -1;
                     lVar13 = 0;
                  }
 else {
                     lVar13 = *(long*)( alStack_128[0] + -8 );
                     lVar14 = lVar13 + -1;
                     if (-1 < lVar14) {
                        CowData<Logger*>::_copy_on_write((CowData<Logger*>*)alStack_128);
                        *(undefined8**)( alStack_128[0] + lVar14 * 8 ) = puVar12;
                        goto LAB_0010556a;
                     }

                  }

                  _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar14, lVar13, "p_index", "size()", "", false, false);
               }
 else {
                  _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
               }

               LAB_0010556a:this_00 = (CompositeLogger*)operator_new(0x18, "");
               CompositeLogger::CompositeLogger(this_00, aVStack_130);
               OS::_set_logger((CompositeLogger*)this_01);
               lVar13 = alStack_128[0];
               if (alStack_128[0] != 0) {
                  LOCK();
                  plVar1 = (long*)( alStack_128[0] + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     alStack_128[0] = 0;
                     Memory::free_static((void*)( lVar13 + -0x10 ), false);
                  }

               }

               if (lStack_118 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               return (OS_Unix*)0x0;
            }

            local_c0 = (long)_Var8;
            HashMap<long,OS_Unix::ProcessInfo,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,OS_Unix::ProcessInfo>>>::insert((long*)local_b8, *(ProcessInfo**)( param_1 + 0x130 ), SUB81(&local_c0, 0));
            pthread_mutex_unlock((pthread_mutex_t*)( param_1 + 0x138 ));
            Variant::Variant((Variant*)local_58, pOVar4);
            Variant::Variant((Variant*)local_78, "stdio");
            pVVar11 = (Variant*)Dictionary::operator []((Variant*)this);
            if (pVVar11 != (Variant*)local_58) {
               if (Variant::needs_deinit[*(int*)pVVar11] != '\0') {
                  Variant::_clear_internal();
               }

               *(undefined4*)pVVar11 = 0;
               *(int*)pVVar11 = local_58[0];
               *(undefined8*)( pVVar11 + 8 ) = local_50;
               *(undefined8*)( pVVar11 + 0x10 ) = uStack_48;
               local_58[0] = 0;
            }

            if (Variant::needs_deinit[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }

            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            Variant::Variant((Variant*)local_58, pOVar5);
            Variant::Variant((Variant*)local_78, "stderr");
            pVVar11 = (Variant*)Dictionary::operator []((Variant*)this);
            if (pVVar11 != (Variant*)local_58) {
               if (Variant::needs_deinit[*(int*)pVVar11] != '\0') {
                  Variant::_clear_internal();
               }

               *(undefined4*)pVVar11 = 0;
               *(int*)pVVar11 = local_58[0];
               *(undefined8*)( pVVar11 + 8 ) = local_50;
               *(undefined8*)( pVVar11 + 0x10 ) = uStack_48;
               local_58[0] = 0;
            }

            if (Variant::needs_deinit[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }

            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            Variant::Variant((Variant*)local_58, _Var8);
            Variant::Variant((Variant*)local_78, "pid");
            pVVar11 = (Variant*)Dictionary::operator []((Variant*)this);
            if (pVVar11 != (Variant*)local_58) {
               if (Variant::needs_deinit[*(int*)pVVar11] != '\0') {
                  Variant::_clear_internal();
               }

               *(undefined4*)pVVar11 = 0;
               *(int*)pVVar11 = local_58[0];
               *(undefined8*)( pVVar11 + 8 ) = local_50;
               *(undefined8*)( pVVar11 + 0x10 ) = uStack_48;
               local_58[0] = 0;
            }

            if (Variant::needs_deinit[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }

            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            cVar6 = RefCounted::unreference();
            if (( cVar6 != '\0' ) && ( cVar6 = cVar6 != '\0' )) {
               ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
               Memory::free_static(pOVar5, false);
            }

            cVar6 = RefCounted::unreference();
            if (( cVar6 != '\0' ) && ( cVar6 = cVar6 != '\0' )) {
               ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
               Memory::free_static(pOVar4, false);
            }

         }

      }
 else {
         if (-1 < (int)local_90) {
            close((int)local_90);
         }

         if (-1 < local_90) {
            close(local_90._4_4_);
         }

         if (-1 < (int)local_88) {
            close((int)local_88);
         }

         if (-1 < local_88) {
            close(local_88._4_4_);
         }

         if (-1 < (int)local_80) {
            close((int)local_80);
         }

         if (-1 < local_80) {
            close(local_80._4_4_);
         }

         _err_print_error("execute_with_pipe", "drivers/unix/os_unix.cpp", 0x26e, "Method/function failed. Returning: ret", 0, 0);
      }

      goto LAB_00104c27;
   }

   if ((int)local_90 < 0) {
      if (-1 < local_90) goto LAB_00104ca0;
      LAB_00104bde:if (-1 < (int)local_88) goto LAB_00104c88;
      LAB_00104bea:if (-1 < local_88) goto LAB_00104c70;
      LAB_00104bf2:if (-1 < (int)local_80) goto LAB_00104c60;
      LAB_00104bfa:;
   }
 else {
      close((int)local_90);
      if (local_90 < 0) goto LAB_00104bde;
      LAB_00104ca0:close(local_90._4_4_);
      if ((int)local_88 < 0) goto LAB_00104bea;
      LAB_00104c88:close((int)local_88);
      if (local_88 < 0) goto LAB_00104bf2;
      LAB_00104c70:close(local_88._4_4_);
      if ((int)local_80 < 0) goto LAB_00104bfa;
      LAB_00104c60:close((int)local_80);
   }

   if (-1 < local_80) {
      close(local_80._4_4_);
   }

   _err_print_error("execute_with_pipe", "drivers/unix/os_unix.cpp", 0x26a, "Method/function failed. Returning: ret", 0, 0);
   LAB_00104c27:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* OS_Unix::OS_Unix() */void OS_Unix::OS_Unix(OS_Unix *this) {
   long *plVar1;
   int iVar2;
   undefined8 *puVar3;
   CompositeLogger *this_00;
   long lVar4;
   long lVar5;
   long in_FS_OFFSET;
   Vector aVStack_48[8];
   long local_40[2];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   OS::OS((OS*)this);
   *(undefined1(*) [16])( this + 0x148 ) = (undefined1[16])0x0;
   *(undefined***)this = &PTR___cxa_pure_virtual_001082e0;
   *(undefined8*)( this + 0x130 ) = 0;
   *(undefined8*)( this + 0x158 ) = 0;
   *(undefined4*)( this + 0x148 ) = 1;
   *(undefined1(*) [16])( this + 0x138 ) = (undefined1[16])0x0;
   local_40[0] = 0;
   puVar3 = (undefined8*)operator_new(8, "");
   *puVar3 = &PTR_logv_00108670;
   if (local_40[0] == 0) {
      lVar4 = 1;
   }
 else {
      lVar4 = *(long*)( local_40[0] + -8 ) + 1;
   }

   iVar2 = CowData<Logger*>::resize<false>((CowData<Logger*>*)local_40, lVar4);
   if (iVar2 == 0) {
      if (local_40[0] == 0) {
         lVar5 = -1;
         lVar4 = 0;
      }
 else {
         lVar4 = *(long*)( local_40[0] + -8 );
         lVar5 = lVar4 + -1;
         if (-1 < lVar5) {
            CowData<Logger*>::_copy_on_write((CowData<Logger*>*)local_40);
            *(undefined8**)( local_40[0] + lVar5 * 8 ) = puVar3;
            goto LAB_0010556a;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar5, lVar4, "p_index", "size()", "", false, false);
   }
 else {
      _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   }

   LAB_0010556a:this_00 = (CompositeLogger*)operator_new(0x18, "");
   CompositeLogger::CompositeLogger(this_00, aVStack_48);
   OS::_set_logger((CompositeLogger*)this);
   lVar4 = local_40[0];
   if (local_40[0] != 0) {
      LOCK();
      plVar1 = (long*)( local_40[0] + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40[0] = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS_Unix::get_executable_path() const */OS_Unix * __thiscall OS_Unix::get_executable_path(OS_Unix *this){
   long *plVar1;
   ssize_t sVar2;
   long lVar3;
   char *pcVar4;
   long in_FS_OFFSET;
   long local_130;
   char local_128[264];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar4 = local_128;
   for (lVar3 = 0x20; lVar3 != 0; lVar3 = lVar3 + -1) {
      for (int i = 0; i < 8; i++) {
         pcVar4[i] = '\0';
      }

      pcVar4 = pcVar4 + 8;
   }

   sVar2 = readlink("/proc/self/exe", local_128, 0x100);
   local_130 = 0;
   if (0 < sVar2) {
      String::parse_utf8((char*)&local_130, (int)local_128, SUB81(sVar2, 0));
      if (( local_130 != 0 ) && ( 1 < *(uint*)( local_130 + -8 ) )) {
         *(long*)this = local_130;
         goto LAB_0010570f;
      }

   }

   _err_print_error("get_executable_path", "drivers/unix/os_unix.cpp", 0x3d1, "Couldn\'t get executable path from /proc/self/exe, using argv[0]", 0, 1);
   OS::get_executable_path();
   lVar3 = local_130;
   if (local_130 != 0) {
      LOCK();
      plVar1 = (long*)( local_130 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_130 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   LAB_0010570f:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* OS::get_user_prefers_integrated_gpu() const */undefined8 OS::get_user_prefers_integrated_gpu(void) {
   return 0;
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
/* OS::move_to_trash(String const&) */undefined8 OS::move_to_trash(String *param_1) {
   return 1;
}
/* OS::get_default_thread_pool_size() const */void OS::get_default_thread_pool_size(OS *this) {
   /* WARNING: Could not recover jumptable at 0x00105877. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *(long*)this + 0x2d8 ) )();
   return;
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
/* Ref<DirAccess> DirAccess::_create_builtin<DirAccessUnix>() */DirAccess * __thiscall DirAccess::_create_builtin<DirAccessUnix>(DirAccess *this){
   char cVar1;
   DirAccessUnix *this_00;
   this_00 = (DirAccessUnix*)operator_new(0x1a8, "");
   DirAccessUnix::DirAccessUnix(this_00);
   postinitialize_handler((Object*)this_00);
   *(DirAccessUnix**)this = this_00;
   cVar1 = RefCounted::init_ref();
   if (cVar1 == '\0') {
      *(undefined8*)this = 0;
   }

   return this;
}
/* CowData<Logger*>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Logger*>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<char*>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<char*>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::resize<false>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_001060ae(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<CharString>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<CharString>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* Ref<FileAccess> FileAccess::_create_builtin<FileAccessUnix>() */FileAccess * __thiscall FileAccess::_create_builtin<FileAccessUnix>(FileAccess *this){
   char cVar1;
   RefCounted *this_00;
   this_00 = (RefCounted*)operator_new(0x1b8, "");
   RefCounted::RefCounted(this_00);
   *(undefined2*)( this_00 + 0x17c ) = 0;
   *(undefined4*)( this_00 + 0x180 ) = 2;
   *(undefined2*)( this_00 + 0x184 ) = 0;
   *(code**)this_00 = String::parse_latin1;
   *(undefined8*)( this_00 + 0x198 ) = 0;
   *(undefined8*)( this_00 + 0x1b0 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x188 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x1a0 ) = (undefined1[16])0x0;
   postinitialize_handler((Object*)this_00);
   *(RefCounted**)this = this_00;
   cVar1 = RefCounted::init_ref();
   if (cVar1 == '\0') {
      *(undefined8*)this = 0;
   }

   return this;
}
/* Ref<FileAccess> FileAccess::_create_builtin<FileAccessUnixPipe>() */FileAccess * __thiscall FileAccess::_create_builtin<FileAccessUnixPipe>(FileAccess *this){
   char cVar1;
   RefCounted *this_00;
   this_00 = (RefCounted*)operator_new(0x1b0, "");
   RefCounted::RefCounted(this_00);
   this_00[400] = (RefCounted)0x0;
   *(undefined2*)( this_00 + 0x17c ) = 0;
   *(undefined4*)( this_00 + 0x180 ) = 2;
   *(undefined2*)( this_00 + 0x184 ) = 0;
   *(undefined8*)( this_00 + 0x188 ) = 0;
   *(code**)this_00 = strftime;
   *(undefined8*)( this_00 + 0x194 ) = 0xffffffffffffffff;
   *(undefined4*)( this_00 + 0x19c ) = 0;
   *(undefined1(*) [16])( this_00 + 0x1a0 ) = (undefined1[16])0x0;
   postinitialize_handler((Object*)this_00);
   *(RefCounted**)this = this_00;
   cVar1 = RefCounted::init_ref();
   if (cVar1 == '\0') {
      *(undefined8*)this = 0;
   }

   return this;
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
/* OS::get_version_alias() const */void OS::get_version_alias(void) {
   long lVar1;
   long *in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( *in_RSI + 0x1a0 ) == OS_Unix::get_version) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI);
   }
 else {
      ( **(code**)( *in_RSI + 0x1a0 ) )();
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS::create_instance(List<String, DefaultAllocator> const&, long*) */ulong OS::create_instance(OS *this, List *param_1, long *param_2) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar2 = *(code**)( *(long*)this + 0x118 );
   ( **(code**)( *(long*)this + 0x100 ) )(&local_38, this);
   uVar4 = ( *pcVar2 )(this, &local_38, param_1, param_2, 0);
   lVar3 = local_38;
   if (local_38 != 0) {
      LOCK();
      plVar1 = (long*)( local_38 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_38 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         uVar4 = uVar4 & 0xffffffff;
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* WARNING: Removing unreachable block (ram,0x00106728) *//* WARNING: Removing unreachable block (ram,0x00106858) *//* WARNING: Removing unreachable block (ram,0x00106a20) *//* WARNING: Removing unreachable block (ram,0x00106864) *//* WARNING: Removing unreachable block (ram,0x0010686e) *//* WARNING: Removing unreachable block (ram,0x00106a00) *//* WARNING: Removing unreachable block (ram,0x0010687a) *//* WARNING: Removing unreachable block (ram,0x00106884) *//* WARNING: Removing unreachable block (ram,0x001069e0) *//* WARNING: Removing unreachable block (ram,0x00106890) *//* WARNING: Removing unreachable block (ram,0x0010689a) *//* WARNING: Removing unreachable block (ram,0x001069c0) *//* WARNING: Removing unreachable block (ram,0x001068a6) *//* WARNING: Removing unreachable block (ram,0x001068b0) *//* WARNING: Removing unreachable block (ram,0x001069a0) *//* WARNING: Removing unreachable block (ram,0x001068bc) *//* WARNING: Removing unreachable block (ram,0x001068c6) *//* WARNING: Removing unreachable block (ram,0x00106980) *//* WARNING: Removing unreachable block (ram,0x001068d2) *//* WARNING: Removing unreachable block (ram,0x001068dc) *//* WARNING: Removing unreachable block (ram,0x00106960) *//* WARNING: Removing unreachable block (ram,0x001068e4) *//* WARNING: Removing unreachable block (ram,0x001068fa) *//* WARNING: Removing unreachable block (ram,0x00106906) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
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
/* void Ref<FileAccessUnixPipe>::instantiate<>() */void Ref<FileAccessUnixPipe>::instantiate<>(Ref<FileAccessUnixPipe> *this) {
   char cVar1;
   RefCounted *this_00;
   Object *pOVar2;
   Object *pOVar3;
   this_00 = (RefCounted*)operator_new(0x1b0, "");
   RefCounted::RefCounted(this_00);
   this_00[400] = (RefCounted)0x0;
   *(undefined2*)( this_00 + 0x17c ) = 0;
   *(undefined4*)( this_00 + 0x180 ) = 2;
   *(undefined2*)( this_00 + 0x184 ) = 0;
   *(undefined8*)( this_00 + 0x188 ) = 0;
   *(code**)this_00 = strftime;
   *(undefined8*)( this_00 + 0x194 ) = 0xffffffffffffffff;
   *(undefined4*)( this_00 + 0x19c ) = 0;
   *(undefined1(*) [16])( this_00 + 0x1a0 ) = (undefined1[16])0x0;
   postinitialize_handler((Object*)this_00);
   cVar1 = RefCounted::init_ref();
   if (cVar1 == '\0') {
      pOVar3 = *(Object**)this;
      if (pOVar3 == (Object*)0x0) {
         return;
      }

      *(undefined8*)this = 0;
      cVar1 = RefCounted::unreference();
      if (cVar1 == '\0') {
         return;
      }

      this_00 = (RefCounted*)0x0;
      cVar1 = predelete_handler(pOVar3);
      if (cVar1 == '\0') {
         return;
      }

   }
 else {
      pOVar3 = *(Object**)this;
      pOVar2 = pOVar3;
      if (this_00 == (RefCounted*)pOVar3) goto LAB_00106b4d;
      *(RefCounted**)this = this_00;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *(undefined8*)this = 0;
      }

      pOVar2 = (Object*)this_00;
      if (( ( pOVar3 == (Object*)0x0 ) || ( cVar1 = RefCounted::unreference() ),cVar1 == '\0' )) goto LAB_00106b4d;
   }

   ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
   Memory::free_static(pOVar3, false);
   pOVar2 = (Object*)this_00;
   if (this_00 == (RefCounted*)0x0) {
      return;
   }

   LAB_00106b4d:cVar1 = RefCounted::unreference();
   if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
      ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
      Memory::free_static(pOVar2, false);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<long, OS_Unix::ProcessInfo, HashMapHasherDefault, HashMapComparatorDefault<long>,
   DefaultTypedAllocator<HashMapElement<long, OS_Unix::ProcessInfo> > >::insert(long const&,
   OS_Unix::ProcessInfo const&, bool) */void HashMap<long,OS_Unix::ProcessInfo,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,OS_Unix::ProcessInfo>>>::insert(long *param_1, ProcessInfo *param_2, bool param_3) {
   uint *puVar1;
   undefined8 *puVar2;
   long lVar3;
   void *pvVar4;
   void *__s;
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
   undefined1(*pauVar29)[16];
   uint uVar30;
   uint uVar31;
   ulong uVar32;
   undefined8 uVar33;
   void *__s_00;
   undefined1(*pauVar34)[16];
   undefined8 *in_RCX;
   int iVar35;
   undefined7 in_register_00000011;
   long *plVar36;
   long lVar37;
   long lVar38;
   uint uVar39;
   long lVar40;
   undefined8 uVar41;
   ulong uVar42;
   uint uVar43;
   char in_R8B;
   uint uVar44;
   uint uVar45;
   ulong uVar46;
   undefined1(*pauVar47)[16];
   void *local_a0;
   plVar36 = (long*)CONCAT71(in_register_00000011, param_3);
   uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   local_a0 = *(void**)( param_2 + 8 );
   if (local_a0 == (void*)0x0) {
      uVar46 = (ulong)uVar39;
      uVar32 = uVar46 * 4;
      uVar42 = uVar46 * 8;
      uVar33 = Memory::alloc_static(uVar32, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar33;
      local_a0 = (void*)Memory::alloc_static(uVar42, false);
      *(void**)( param_2 + 8 ) = local_a0;
      if (uVar39 != 0) {
         pvVar4 = *(void**)( param_2 + 0x10 );
         if (( pvVar4 < (void*)( (long)local_a0 + uVar42 ) ) && ( local_a0 < (void*)( (long)pvVar4 + uVar32 ) )) {
            uVar32 = 0;
            do {
               *(undefined4*)( (long)pvVar4 + uVar32 * 4 ) = 0;
               *(undefined8*)( (long)local_a0 + uVar32 * 8 ) = 0;
               uVar32 = uVar32 + 1;
            }
 while ( uVar46 != uVar32 );
            goto LAB_00106cee;
         }

         memset(pvVar4, 0, uVar32);
         memset(local_a0, 0, uVar42);
         iVar35 = *(int*)( param_2 + 0x2c );
         lVar40 = *plVar36;
         goto LAB_00106cfa;
      }

      iVar35 = *(int*)( param_2 + 0x2c );
      lVar40 = *plVar36;
      if (local_a0 != (void*)0x0) goto LAB_00106cfa;
   }
 else {
      LAB_00106cee:iVar35 = *(int*)( param_2 + 0x2c );
      lVar40 = *plVar36;
      LAB_00106cfa:if (iVar35 != 0) {
         uVar42 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 ));
         lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         uVar32 = lVar40 * 0x3ffff - 1;
         uVar32 = ( uVar32 ^ uVar32 >> 0x1f ) * 0x15;
         uVar32 = ( uVar32 ^ uVar32 >> 0xb ) * 0x41;
         uVar32 = uVar32 >> 0x16 ^ uVar32;
         uVar46 = uVar32 & 0xffffffff;
         if ((int)uVar32 == 0) {
            uVar46 = 1;
         }

         uVar45 = 0;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = uVar46 * lVar3;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = uVar42;
         lVar37 = SUB168(auVar5 * auVar17, 8);
         uVar43 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar37 * 4 );
         uVar31 = SUB164(auVar5 * auVar17, 8);
         if (uVar43 != 0) {
            do {
               if (( (uint)uVar46 == uVar43 ) && ( *(long*)( *(long*)( (long)local_a0 + lVar37 * 8 ) + 0x10 ) == lVar40 )) {
                  pauVar34 = *(undefined1(**) [16])( (long)local_a0 + (ulong)uVar31 * 8 );
                  *(undefined8*)( pauVar34[1] + 8 ) = *in_RCX;
                  goto LAB_001071a1;
               }

               uVar45 = uVar45 + 1;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( ulong )(uVar31 + 1) * lVar3;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = uVar42;
               lVar37 = SUB168(auVar6 * auVar18, 8);
               uVar43 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar37 * 4 );
               uVar31 = SUB164(auVar6 * auVar18, 8);
            }
 while ( ( uVar43 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar43 * lVar3,auVar19._8_8_ = 0,auVar19._0_8_ = uVar42,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 ) + uVar31 ) - SUB164(auVar7 * auVar19, 8)) * lVar3,auVar20._8_8_ = 0,auVar20._0_8_ = uVar42,uVar45 <= SUB164(auVar8 * auVar20, 8) );
         }

      }

   }

   if ((float)uVar39 * __LC57 < (float)( iVar35 + 1 )) {
      uVar39 = *(uint*)( param_2 + 0x28 );
      if (uVar39 == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         pauVar34 = (undefined1(*) [16])0x0;
         goto LAB_001071a1;
      }

      uVar32 = ( ulong )(uVar39 + 1);
      *(undefined4*)( param_2 + 0x2c ) = 0;
      uVar43 = *(uint*)( hash_table_size_primes + (ulong)uVar39 * 4 );
      if (uVar39 + 1 < 2) {
         uVar32 = 2;
      }

      uVar39 = *(uint*)( hash_table_size_primes + uVar32 * 4 );
      uVar46 = (ulong)uVar39;
      *(int*)( param_2 + 0x28 ) = (int)uVar32;
      pvVar4 = *(void**)( param_2 + 0x10 );
      uVar32 = uVar46 * 4;
      uVar42 = uVar46 * 8;
      uVar33 = Memory::alloc_static(uVar32, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar33;
      __s_00 = (void*)Memory::alloc_static(uVar42, false);
      *(void**)( param_2 + 8 ) = __s_00;
      if (uVar39 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar42 ) ) && ( __s_00 < (void*)( (long)__s + uVar32 ) )) {
            uVar32 = 0;
            do {
               *(undefined4*)( (long)__s + uVar32 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar32 * 8 ) = 0;
               uVar32 = uVar32 + 1;
            }
 while ( uVar46 != uVar32 );
         }
 else {
            memset(__s, 0, uVar32);
            memset(__s_00, 0, uVar42);
         }

      }

      if (uVar43 != 0) {
         uVar32 = 0;
         do {
            uVar39 = *(uint*)( (long)pvVar4 + uVar32 * 4 );
            if (uVar39 != 0) {
               lVar40 = *(long*)( param_2 + 0x10 );
               uVar44 = 0;
               uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
               uVar42 = CONCAT44(0, uVar31);
               lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
               auVar9._8_8_ = 0;
               auVar9._0_8_ = (ulong)uVar39 * lVar3;
               auVar21._8_8_ = 0;
               auVar21._0_8_ = uVar42;
               lVar37 = SUB168(auVar9 * auVar21, 8);
               puVar1 = (uint*)( lVar40 + lVar37 * 4 );
               iVar35 = SUB164(auVar9 * auVar21, 8);
               uVar45 = *puVar1;
               uVar33 = *(undefined8*)( (long)local_a0 + uVar32 * 8 );
               while (uVar45 != 0) {
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = (ulong)uVar45 * lVar3;
                  auVar22._8_8_ = 0;
                  auVar22._0_8_ = uVar42;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = ( ulong )(( uVar31 + iVar35 ) - SUB164(auVar10 * auVar22, 8)) * lVar3;
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ = uVar42;
                  uVar30 = SUB164(auVar11 * auVar23, 8);
                  uVar41 = uVar33;
                  if (uVar30 < uVar44) {
                     *puVar1 = uVar39;
                     puVar2 = (undefined8*)( (long)__s_00 + lVar37 * 8 );
                     uVar41 = *puVar2;
                     *puVar2 = uVar33;
                     uVar39 = uVar45;
                     uVar44 = uVar30;
                  }

                  uVar44 = uVar44 + 1;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = ( ulong )(iVar35 + 1) * lVar3;
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ = uVar42;
                  lVar37 = SUB168(auVar12 * auVar24, 8);
                  puVar1 = (uint*)( lVar40 + lVar37 * 4 );
                  iVar35 = SUB164(auVar12 * auVar24, 8);
                  uVar33 = uVar41;
                  uVar45 = *puVar1;
               }
;
               *(undefined8*)( (long)__s_00 + lVar37 * 8 ) = uVar33;
               *puVar1 = uVar39;
               *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
            }

            uVar32 = uVar32 + 1;
         }
 while ( uVar32 != uVar43 );
         Memory::free_static(local_a0, false);
         Memory::free_static(pvVar4, false);
      }

   }

   lVar40 = *plVar36;
   uVar33 = *in_RCX;
   pauVar34 = (undefined1(*) [16])operator_new(0x20, "");
   *pauVar34 = (undefined1[16])0x0;
   *(long*)pauVar34[1] = lVar40;
   *(undefined8*)( pauVar34[1] + 8 ) = uVar33;
   puVar2 = *(undefined8**)( param_2 + 0x20 );
   if (puVar2 == (undefined8*)0x0) {
      *(undefined1(**) [16])( param_2 + 0x18 ) = pauVar34;
      *(undefined1(**) [16])( param_2 + 0x20 ) = pauVar34;
   }
 else if (in_R8B == '\0') {
      *puVar2 = pauVar34;
      *(undefined8**)( *pauVar34 + 8 ) = puVar2;
      *(undefined1(**) [16])( param_2 + 0x20 ) = pauVar34;
   }
 else {
      lVar40 = *(long*)( param_2 + 0x18 );
      *(undefined1(**) [16])( lVar40 + 8 ) = pauVar34;
      *(long*)*pauVar34 = lVar40;
      *(undefined1(**) [16])( param_2 + 0x18 ) = pauVar34;
   }

   lVar40 = *(long*)( param_2 + 0x10 );
   uVar32 = *plVar36 * 0x3ffff - 1;
   uVar32 = ( uVar32 ^ uVar32 >> 0x1f ) * 0x15;
   uVar32 = ( uVar32 ^ uVar32 >> 0xb ) * 0x41;
   uVar32 = uVar32 >> 0x16 ^ uVar32;
   uVar42 = uVar32 & 0xffffffff;
   if ((int)uVar32 == 0) {
      uVar42 = 1;
   }

   uVar45 = 0;
   uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar32 = CONCAT44(0, uVar39);
   uVar31 = (uint)uVar42;
   lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   auVar13._8_8_ = 0;
   auVar13._0_8_ = uVar42 * lVar3;
   auVar25._8_8_ = 0;
   auVar25._0_8_ = uVar32;
   lVar38 = SUB168(auVar13 * auVar25, 8);
   lVar37 = *(long*)( param_2 + 8 );
   puVar1 = (uint*)( lVar40 + lVar38 * 4 );
   iVar35 = SUB164(auVar13 * auVar25, 8);
   uVar43 = *puVar1;
   pauVar29 = pauVar34;
   while (uVar43 != 0) {
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)uVar43 * lVar3;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar32;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = ( ulong )(( uVar39 + iVar35 ) - SUB164(auVar14 * auVar26, 8)) * lVar3;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar32;
      uVar31 = SUB164(auVar15 * auVar27, 8);
      pauVar47 = pauVar29;
      if (uVar31 < uVar45) {
         *puVar1 = (uint)uVar42;
         uVar42 = (ulong)uVar43;
         puVar2 = (undefined8*)( lVar37 + lVar38 * 8 );
         pauVar47 = (undefined1(*) [16])*puVar2;
         *puVar2 = pauVar29;
         uVar45 = uVar31;
      }

      uVar31 = (uint)uVar42;
      uVar45 = uVar45 + 1;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = ( ulong )(iVar35 + 1) * lVar3;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar32;
      lVar38 = SUB168(auVar16 * auVar28, 8);
      puVar1 = (uint*)( lVar40 + lVar38 * 4 );
      iVar35 = SUB164(auVar16 * auVar28, 8);
      pauVar29 = pauVar47;
      uVar43 = *puVar1;
   }
;
   *(undefined1(**) [16])( lVar37 + lVar38 * 8 ) = pauVar29;
   *puVar1 = uVar31;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_001071a1:*param_1 = (long)pauVar34;
   return;
}
/* WARNING: Removing unreachable block (ram,0x00107470) *//* WARNING: Removing unreachable block (ram,0x001075a0) *//* WARNING: Removing unreachable block (ram,0x00107719) *//* WARNING: Removing unreachable block (ram,0x001075ac) *//* WARNING: Removing unreachable block (ram,0x001075b6) *//* WARNING: Removing unreachable block (ram,0x001076fb) *//* WARNING: Removing unreachable block (ram,0x001075c2) *//* WARNING: Removing unreachable block (ram,0x001075cc) *//* WARNING: Removing unreachable block (ram,0x001076dd) *//* WARNING: Removing unreachable block (ram,0x001075d8) *//* WARNING: Removing unreachable block (ram,0x001075e2) *//* WARNING: Removing unreachable block (ram,0x001076bf) *//* WARNING: Removing unreachable block (ram,0x001075ee) *//* WARNING: Removing unreachable block (ram,0x001075f8) *//* WARNING: Removing unreachable block (ram,0x001076a1) *//* WARNING: Removing unreachable block (ram,0x00107604) *//* WARNING: Removing unreachable block (ram,0x0010760e) *//* WARNING: Removing unreachable block (ram,0x00107683) *//* WARNING: Removing unreachable block (ram,0x00107616) *//* WARNING: Removing unreachable block (ram,0x00107620) *//* WARNING: Removing unreachable block (ram,0x00107668) *//* WARNING: Removing unreachable block (ram,0x00107628) *//* WARNING: Removing unreachable block (ram,0x0010763e) *//* WARNING: Removing unreachable block (ram,0x0010764a) *//* String vformat<String, char*>(String const&, String const, char* const) */undefined8 *vformat<String,char*>(undefined8 *param_1, bool *param_2, String *param_3, char *param_4) {
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
/* CowData<unsigned char>::_realloc(long) */undefined8 CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this, long param_1) {
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
/* CowData<CharString>::_unref() */void CowData<CharString>::_unref(CowData<CharString> *this) {
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
/* CowData<CharString>::_realloc(long) */undefined8 CowData<CharString>::_realloc(CowData<CharString> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<CharString>::resize<false>(long) */undefined8 CowData<CharString>::resize<false>(CowData<CharString> *this, long param_1) {
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
      LAB_00107c60:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar10 == 0) goto LAB_00107c60;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_00107b39:if (lVar10 != lVar7) {
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
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_00107b39;
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
      goto LAB_00107cb6;
   }

   if (lVar10 == lVar7) {
      LAB_00107bdf:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_00107cb6:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_00107bca;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_00107bdf;
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
   LAB_00107bca:puVar9[-1] = param_1;
   return 0;
}
/* CowData<char*>::_realloc(long) */undefined8 CowData<char*>::_realloc(CowData<char*> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<char*>::resize<false>(long) */undefined8 CowData<char*>::resize<false>(CowData<char*> *this, long param_1) {
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
      LAB_00107f40:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar8 == 0) goto LAB_00107f40;
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
            goto LAB_00107e51;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_00107e51:puVar7[-1] = param_1;
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
      LAB_00108220:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar8 == 0) goto LAB_00108220;
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
            goto LAB_00108131;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_00108131:puVar7[-1] = param_1;
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

