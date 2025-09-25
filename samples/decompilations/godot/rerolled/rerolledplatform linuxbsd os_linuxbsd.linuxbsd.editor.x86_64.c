/* OS_LinuxBSD::get_main_loop() const */undefined8 OS_LinuxBSD::get_main_loop(OS_LinuxBSD *this) {
   return *(undefined8*)( this + 0x4f8 );
}
/* OS_LinuxBSD::set_main_loop(MainLoop*) */void OS_LinuxBSD::set_main_loop(OS_LinuxBSD *this, MainLoop *param_1) {
   *(MainLoop**)( this + 0x4f8 ) = param_1;
   return;
}
/* OS_LinuxBSD::is_disable_crash_handler() const */OS_LinuxBSD OS_LinuxBSD::is_disable_crash_handler(OS_LinuxBSD *this) {
   return this[0x4f0];
}
/* OS_LinuxBSD::initialize_joypads() */void OS_LinuxBSD::initialize_joypads(OS_LinuxBSD *this) {
   JoypadLinux *this_00;
   Input *pIVar1;
   this_00 = (JoypadLinux*)operator_new(0x10558, "");
   pIVar1 = (Input*)Input::get_singleton();
   JoypadLinux::JoypadLinux(this_00, pIVar1);
   *(JoypadLinux**)( this + 0x178 ) = this_00;
   return;
}
/* OS_LinuxBSD::disable_crash_handler() */void OS_LinuxBSD::disable_crash_handler(void) {
   CrashHandler::disable();
   return;
}
/* OS_LinuxBSD::_test_create_rendering_device_and_gl(String const&) const */undefined8 OS_LinuxBSD::_test_create_rendering_device_and_gl(OS_LinuxBSD *this, String *param_1) {
   char cVar1;
   int iVar2;
   long lVar3;
   undefined8 uVar4;
   cVar1 = String::operator ==(param_1, "x11");
   if (( ( cVar1 != '\0' ) || ( *(long*)param_1 == 0 ) ) || ( *(uint*)( *(long*)param_1 + -8 ) < 2 )) {
      iVar2 = initialize_xlib(0);
      if (iVar2 != 0) {
         return 0;
      }

      DetectPrimeX11::create_context();
   }

   RasterizerGLES3::gles_over_gl._0_1_ = 1;
   lVar3 = OS::get_singleton();
   RendererCompositor::low_end._0_1_ = 1;
   *(undefined1*)( lVar3 + 0x70 ) = (undefined1)RasterizerGLES3::gles_over_gl;
   RendererCompositor::_create_func = RasterizerGLES3::_create_current;
   /* WARNING: Could not recover jumptable at 0x0010010f. Too many branches */
   /* WARNING: Treating indirect jump as call */
   uVar4 = ( **(code**)( *(long*)this + 0x358 ) )(this, param_1);
   return uVar4;
}
/* OS_LinuxBSD::get_name() const */OS_LinuxBSD * __thiscall OS_LinuxBSD::get_name(OS_LinuxBSD *this){
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
/* OS_LinuxBSD::get_identifier() const */OS_LinuxBSD * __thiscall OS_LinuxBSD::get_identifier(OS_LinuxBSD *this){
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
/* OS_LinuxBSD::delete_main_loop() */void OS_LinuxBSD::delete_main_loop(OS_LinuxBSD *this) {
   Object *this_00;
   char cVar1;
   bool bVar2;
   this_00 = *(Object**)( this + 0x4f8 );
   if (this_00 == (Object*)0x0) goto LAB_001002bf;
   cVar1 = predelete_handler(this_00);
   if (cVar1 == '\0') goto LAB_001002bf;
   if (*(code**)( *(long*)this_00 + 0x140 ) == MainLoop::~MainLoop) {
      bVar2 = StringName::configured != '\0';
      *(code**)this_00 = Object::~Object;
      if (bVar2) {
         if (*(long*)( this_00 + 0x1c0 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_001002ad;
         }

         if (*(long*)( this_00 + 0x1a8 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_001002ad;
         }

         if (*(long*)( this_00 + 400 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_001002ad;
         }

         if (*(long*)( this_00 + 0x178 ) != 0) {
            StringName::unref();
         }

      }

      LAB_001002ad:Object::~Object(this_00);
   }
 else {
      ( **(code**)( *(long*)this_00 + 0x140 ) )(this_00);
   }

   Memory::free_static(this_00, false);
   LAB_001002bf:*(undefined8*)( this + 0x4f8 ) = 0;
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
/* List<String, DefaultAllocator>::push_back(String const&) [clone .isra.0] */void List<String,DefaultAllocator>::push_back(List<String,DefaultAllocator> *this, String *param_1) {
   long *plVar1;
   long lVar2;
   CowData<char32_t> *this_00;
   undefined1(*pauVar3)[16];
   if (*(long*)this == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])this = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   this_00 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
   *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
   if (*(long*)param_1 != 0) {
      CowData<char32_t>::_ref(this_00, (CowData*)param_1);
   }

   plVar1 = *(long**)this;
   lVar2 = plVar1[1];
   *(undefined8*)( this_00 + 8 ) = 0;
   *(long**)( this_00 + 0x18 ) = plVar1;
   *(long*)( this_00 + 0x10 ) = lVar2;
   if (lVar2 != 0) {
      *(CowData<char32_t>**)( lVar2 + 8 ) = this_00;
   }

   plVar1[1] = (long)this_00;
   if (*plVar1 != 0) {
      *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
      return;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   *plVar1 = (long)this_00;
   return;
}
/* OS_LinuxBSD::initialize() */void OS_LinuxBSD::initialize(OS_LinuxBSD *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long in_FS_OFFSET;
   long local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   CrashHandler::initialize();
   OS_Unix::initialize_core();
   ( **(code**)( *(long*)this + 0x2b8 ) )(&local_18, this, 0, 1);
   lVar3 = local_18;
   lVar2 = *(long*)( this + 0x500 );
   if (lVar2 == local_18) {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_18 = 0;
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
            lVar2 = *(long*)( this + 0x500 );
            *(undefined8*)( this + 0x500 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(long*)( this + 0x500 ) = local_18;
   }

   if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* OS_LinuxBSD::_weight_to_fc(int) const */long OS_LinuxBSD::_weight_to_fc(OS_LinuxBSD *this, int param_1) {
   long lVar1;
   lVar1 = 0;
   if (( ( ( ( ( 0x95 < param_1 ) && ( lVar1 = 0x28 ),0xf9 < param_1 ) ) && ( lVar1 = 0x32 ),0x144 < param_1 ) ) && ( ( lVar1 = 0x37 ),0x176 < param_1 && ( lVar1 = 0x185 < param_1 ) )) {
      lVar1 = ( ulong )(0x39c < param_1) * 5 + 0xd2;
   }

   return lVar1;
}
/* OS_LinuxBSD::_stretch_to_fc(int) const */undefined8 OS_LinuxBSD::_stretch_to_fc(OS_LinuxBSD *this, int param_1) {
   undefined8 uVar1;
   uVar1 = 0x32;
   if (( ( ( ( 0x37 < param_1 ) && ( uVar1 = 0x3f ),0x44 < param_1 ) ) && ( uVar1 = 0x4b ),0x50 < param_1 )) {
      uVar1 = 0x96;
   }

   return uVar1;
}
/* OS_LinuxBSD::run() */void OS_LinuxBSD::run(OS_LinuxBSD *this) {
   char cVar1;
   if (*(long**)( this + 0x4f8 ) != (long*)0x0) {
      ( **(code**)( **(long**)( this + 0x4f8 ) + 0x150 ) )();
      do {
         ( **(code**)( *DisplayServer::singleton + 0x748 ) )();
         JoypadLinux::process_joypads();
         cVar1 = Main::iteration();
      }
 while ( cVar1 == '\0' );
      /* WARNING: Could not recover jumptable at 0x00100657. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( **(long**)( this + 0x4f8 ) + 0x178 ) )();
      return;
   }

   return;
}
/* OS_LinuxBSD::is_sandboxed() const */undefined8 OS_LinuxBSD::is_sandboxed(OS_LinuxBSD *this) {
   code *pcVar1;
   char cVar2;
   int iVar3;
   undefined8 uVar4;
   undefined4 extraout_var;
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar3 = access("/.flatpak-info", 0);
   if (iVar3 == 0) {
      LAB_001006a7:uVar4 = 1;
   }
 else {
      local_70 = 0;
      pcVar1 = *(code**)( *(long*)this + 0x168 );
      local_50 = 4;
      local_58 = "SNAP";
      String::parse_latin1((StrRange*)&local_70);
      cVar2 = ( *pcVar1 )(this);
      if (cVar2 == '\0') {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      }
 else {
         local_68 = 0;
         pcVar1 = *(code**)( *(long*)this + 0x168 );
         local_50 = 9;
         local_58 = "SNAP_NAME";
         String::parse_latin1((StrRange*)&local_68);
         cVar2 = ( *pcVar1 )(this);
         if (cVar2 == '\0') {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         }
 else {
            local_60 = 0;
            pcVar1 = *(code**)( *(long*)this + 0x168 );
            local_50 = 0xd;
            local_58 = "SNAP_REVISION";
            String::parse_latin1((StrRange*)&local_60);
            cVar2 = ( *pcVar1 )(this);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (cVar2 != '\0') goto LAB_001006a7;
         }

      }

      iVar3 = access("/run/host/container-manager", 0);
      uVar4 = CONCAT71(( int7 )(CONCAT44(extraout_var, iVar3) >> 8), iVar3 == 0);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
}
/* OS_LinuxBSD::_check_internal_feature_support(String const&) */uint OS_LinuxBSD::_check_internal_feature_support(OS_LinuxBSD *this, String *param_1) {
   char cVar1;
   uint uVar2;
   long in_FS_OFFSET;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar1 = String::operator ==(param_1, "system_fonts");
   if (cVar1 == '\0') {
      uVar2 = String::operator ==(param_1, "pc");
      if ((char)uVar2 == '\0') {
         if (*(code**)( *(long*)this + 0x188 ) == get_name) {
            local_50 = 0;
            local_40 = 5;
            local_48 = "Linux";
            String::parse_latin1((StrRange*)&local_50);
         }
 else {
            ( **(code**)( *(long*)this + 0x188 ) )(&local_50, this);
         }

         String::to_lower();
         uVar2 = String::operator ==(param_1, (String*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      }

   }
 else {
      uVar2 = (uint)(byte)this[0x160];
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS_LinuxBSD::get_config_path() const */void OS_LinuxBSD::get_config_path(void) {
   code *pcVar1;
   char cVar2;
   long *in_RSI;
   StrRange *in_RDI;
   StrRange *this;
   long in_FS_OFFSET;
   undefined8 local_78;
   undefined8 local_70;
   CowData<char32_t> local_68[8];
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar1 = *(code**)( *in_RSI + 0x168 );
   local_58 = "XDG_CONFIG_HOME";
   local_60 = 0;
   local_50 = 0xf;
   String::parse_latin1((StrRange*)&local_60);
   cVar2 = ( *pcVar1 )();
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   if (cVar2 == '\0') {
      pcVar1 = *(code**)( *in_RSI + 0x168 );
      local_60 = 0;
      local_58 = "HOME";
      local_50 = 4;
      String::parse_latin1((StrRange*)&local_60);
      cVar2 = ( *pcVar1 )();
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (cVar2 == '\0') {
         *(undefined8*)in_RDI = 0;
         local_58 = ".";
         local_50 = 1;
         String::parse_latin1(in_RDI);
         goto LAB_00100a99;
      }

      this(StrRange * ) & local_70;
      pcVar1 = *(code**)( *in_RSI + 0x170 );
      local_58 = "HOME";
      local_70 = 0;
      local_50 = 4;
      String::parse_latin1(this);
      ( *pcVar1 )(local_68);
      local_58 = ".config";
      local_60 = 0;
      local_50 = 7;
      String::parse_latin1((StrRange*)&local_60);
      String::path_join((String*)in_RDI);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      CowData<char32_t>::_unref(local_68);
   }
 else {
      pcVar1 = *(code**)( *in_RSI + 0x170 );
      local_60 = 0;
      local_58 = "XDG_CONFIG_HOME";
      local_50 = 0xf;
      String::parse_latin1((StrRange*)&local_60);
      ( *pcVar1 )((CowData<char32_t>*)&local_58);
      cVar2 = String::is_absolute_path();
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (cVar2 != '\0') {
         pcVar1 = *(code**)( *in_RSI + 0x170 );
         local_58 = "XDG_CONFIG_HOME";
         local_60 = 0;
         local_50 = 0xf;
         String::parse_latin1((StrRange*)&local_60);
         ( *pcVar1 )();
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         goto LAB_00100a99;
      }

      if (get_config_path() != '\0') {
         _err_print_error("get_config_path", "platform/linuxbsd/os_linuxbsd.cpp", 0x36f, "`XDG_CONFIG_HOME` is a relative path. Ignoring its value and falling back to `$HOME/.config` or `.` per the XDG Base Directory specification.", 0, 1);
         get_config_path()::first_print =
         '\0';
      }

      this(StrRange * ) & local_78;
      local_78 = 0;
      pcVar1 = *(code**)( *in_RSI + 0x168 );
      local_58 = "HOME";
      local_50 = 4;
      String::parse_latin1(this);
      cVar2 = ( *pcVar1 )();
      if (cVar2 == '\0') {
         *(undefined8*)in_RDI = 0;
         local_58 = ".";
         local_50 = 1;
         String::parse_latin1(in_RDI);
      }
 else {
         pcVar1 = *(code**)( *in_RSI + 0x170 );
         local_58 = "HOME";
         local_70 = 0;
         local_50 = 4;
         String::parse_latin1((StrRange*)&local_70);
         ( *pcVar1 )(local_68);
         local_58 = ".config";
         local_60 = 0;
         local_50 = 7;
         String::parse_latin1((StrRange*)&local_60);
         String::path_join((String*)in_RDI);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         CowData<char32_t>::_unref(local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)this);
   LAB_00100a99:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS_LinuxBSD::get_data_path() const */void OS_LinuxBSD::get_data_path(void) {
   code *pcVar1;
   char cVar2;
   long *in_RSI;
   String *in_RDI;
   StrRange *this;
   long in_FS_OFFSET;
   undefined8 local_78;
   undefined8 local_70;
   CowData<char32_t> local_68[8];
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar1 = *(code**)( *in_RSI + 0x168 );
   local_58 = "XDG_DATA_HOME";
   local_60 = 0;
   local_50 = 0xd;
   String::parse_latin1((StrRange*)&local_60);
   cVar2 = ( *pcVar1 )();
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   if (cVar2 == '\0') {
      pcVar1 = *(code**)( *in_RSI + 0x168 );
      local_60 = 0;
      local_58 = "HOME";
      local_50 = 4;
      String::parse_latin1((StrRange*)&local_60);
      cVar2 = ( *pcVar1 )();
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (cVar2 == '\0') {
         ( **(code**)( *in_RSI + 0x278 ) )();
         goto LAB_00100e60;
      }

      pcVar1 = *(code**)( *in_RSI + 0x170 );
      this(StrRange * ) & local_70;
      local_58 = "HOME";
      local_70 = 0;
      local_50 = 4;
      String::parse_latin1(this);
      ( *pcVar1 )(local_68);
      local_58 = ".local/share";
      local_60 = 0;
      local_50 = 0xc;
      String::parse_latin1((StrRange*)&local_60);
      String::path_join(in_RDI);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      CowData<char32_t>::_unref(local_68);
   }
 else {
      pcVar1 = *(code**)( *in_RSI + 0x170 );
      local_60 = 0;
      local_58 = "XDG_DATA_HOME";
      local_50 = 0xd;
      String::parse_latin1((StrRange*)&local_60);
      ( *pcVar1 )((CowData<char32_t>*)&local_58);
      cVar2 = String::is_absolute_path();
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (cVar2 != '\0') {
         pcVar1 = *(code**)( *in_RSI + 0x170 );
         local_58 = "XDG_DATA_HOME";
         local_60 = 0;
         local_50 = 0xd;
         String::parse_latin1((StrRange*)&local_60);
         ( *pcVar1 )();
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         goto LAB_00100e60;
      }

      if (get_data_path() != '\0') {
         _err_print_error("get_data_path", "platform/linuxbsd/os_linuxbsd.cpp", 0x37e, "`XDG_DATA_HOME` is a relative path. Ignoring its value and falling back to `$HOME/.local/share` or `get_config_path()` per the XDG Base Directory specification.", 0, 1);
         get_data_path()::first_print =
         '\0';
      }

      this(StrRange * ) & local_78;
      local_78 = 0;
      pcVar1 = *(code**)( *in_RSI + 0x168 );
      local_58 = "HOME";
      local_50 = 4;
      String::parse_latin1(this);
      cVar2 = ( *pcVar1 )();
      if (cVar2 == '\0') {
         ( **(code**)( *in_RSI + 0x278 ) )();
      }
 else {
         pcVar1 = *(code**)( *in_RSI + 0x170 );
         local_58 = "HOME";
         local_70 = 0;
         local_50 = 4;
         String::parse_latin1((StrRange*)&local_70);
         ( *pcVar1 )(local_68);
         local_58 = ".local/share";
         local_60 = 0;
         local_50 = 0xc;
         String::parse_latin1((StrRange*)&local_60);
         String::path_join(in_RDI);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         CowData<char32_t>::_unref(local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)this);
   LAB_00100e60:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS_LinuxBSD::get_cache_path() const */void OS_LinuxBSD::get_cache_path(void) {
   code *pcVar1;
   char cVar2;
   long *in_RSI;
   String *in_RDI;
   StrRange *this;
   long in_FS_OFFSET;
   undefined8 local_78;
   undefined8 local_70;
   CowData<char32_t> local_68[8];
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar1 = *(code**)( *in_RSI + 0x168 );
   local_58 = "XDG_CACHE_HOME";
   local_60 = 0;
   local_50 = 0xe;
   String::parse_latin1((StrRange*)&local_60);
   cVar2 = ( *pcVar1 )();
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   if (cVar2 == '\0') {
      pcVar1 = *(code**)( *in_RSI + 0x168 );
      local_60 = 0;
      local_58 = "HOME";
      local_50 = 4;
      String::parse_latin1((StrRange*)&local_60);
      cVar2 = ( *pcVar1 )();
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (cVar2 == '\0') {
         ( **(code**)( *in_RSI + 0x278 ) )();
         goto LAB_00101200;
      }

      pcVar1 = *(code**)( *in_RSI + 0x170 );
      this(StrRange * ) & local_70;
      local_58 = "HOME";
      local_70 = 0;
      local_50 = 4;
      String::parse_latin1(this);
      ( *pcVar1 )(local_68);
      local_58 = ".cache";
      local_60 = 0;
      local_50 = 6;
      String::parse_latin1((StrRange*)&local_60);
      String::path_join(in_RDI);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      CowData<char32_t>::_unref(local_68);
   }
 else {
      pcVar1 = *(code**)( *in_RSI + 0x170 );
      local_60 = 0;
      local_58 = "XDG_CACHE_HOME";
      local_50 = 0xe;
      String::parse_latin1((StrRange*)&local_60);
      ( *pcVar1 )((CowData<char32_t>*)&local_58);
      cVar2 = String::is_absolute_path();
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (cVar2 != '\0') {
         pcVar1 = *(code**)( *in_RSI + 0x170 );
         local_58 = "XDG_CACHE_HOME";
         local_60 = 0;
         local_50 = 0xe;
         String::parse_latin1((StrRange*)&local_60);
         ( *pcVar1 )();
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         goto LAB_00101200;
      }

      if (get_cache_path() != '\0') {
         _err_print_error("get_cache_path", "platform/linuxbsd/os_linuxbsd.cpp", 0x38d, "`XDG_CACHE_HOME` is a relative path. Ignoring its value and falling back to `$HOME/.cache` or `get_config_path()` per the XDG Base Directory specification.", 0, 1);
         get_cache_path()::first_print =
         '\0';
      }

      this(StrRange * ) & local_78;
      local_78 = 0;
      pcVar1 = *(code**)( *in_RSI + 0x168 );
      local_58 = "HOME";
      local_50 = 4;
      String::parse_latin1(this);
      cVar2 = ( *pcVar1 )();
      if (cVar2 == '\0') {
         ( **(code**)( *in_RSI + 0x278 ) )();
      }
 else {
         pcVar1 = *(code**)( *in_RSI + 0x170 );
         local_58 = "HOME";
         local_70 = 0;
         local_50 = 4;
         String::parse_latin1((StrRange*)&local_70);
         ( *pcVar1 )(local_68);
         local_58 = ".cache";
         local_60 = 0;
         local_50 = 6;
         String::parse_latin1((StrRange*)&local_60);
         String::path_join(in_RDI);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         CowData<char32_t>::_unref(local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)this);
   LAB_00101200:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OS_LinuxBSD::get_system_font_path(String const&, int, int, bool) const */String *OS_LinuxBSD::get_system_font_path(String *param_1, int param_2, int param_3, bool param_4) {
   long *plVar1;
   OS_LinuxBSD OVar2;
   code *pcVar3;
   OS_LinuxBSD OVar4;
   char cVar5;
   undefined4 uVar6;
   int iVar7;
   long lVar8;
   undefined8 uVar9;
   long lVar10;
   undefined7 in_register_00000009;
   undefined **ppuVar11;
   undefined4 in_register_00000034;
   int in_R8D;
   char in_R9B;
   long in_FS_OFFSET;
   String local_68[8];
   long local_60;
   CowData<char32_t> local_58[8];
   long local_50;
   long local_48;
   long local_40;
   OVar2 = ( (OS_LinuxBSD*)CONCAT44(in_register_00000034, param_2) )[0x160];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (OVar2 == (OS_LinuxBSD)0x0) {
      _err_print_error("get_system_font_path", "platform/linuxbsd/os_linuxbsd.cpp", 0x335, "Method/function failed. Returning: String()", "Unable to load fontconfig, system font support is disabled.", 0, 0);
      *(undefined8*)param_1 = 0;
   }
 else {
      ppuVar11= &get_system_fonts()::allowed_formats;
      do {
         lVar8 = ( *_FcPatternCreate_dylibloader_wrapper_fontconfig )();
         if (lVar8 != 0) {
            String::to_lower();
            OVar4 = (OS_LinuxBSD)String::operator ==(local_68, "sans-serif");
            if (OVar4 == (OS_LinuxBSD)0x0) {
               String::to_lower();
               cVar5 = String::operator ==((String*)&local_60, "serif");
               OVar4 = OVar2;
               if (cVar5 == '\0') {
                  String::to_lower();
                  cVar5 = String::operator ==((String*)local_58, "monospace");
                  if (cVar5 == '\0') {
                     String::to_lower();
                     OVar4 = (OS_LinuxBSD)String::operator ==((String*)&local_50, "cursive");
                     if (OVar4 == (OS_LinuxBSD)0x0) {
                        String::to_lower();
                        OVar4 = (OS_LinuxBSD)String::operator ==((String*)&local_48, "fantasy");
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                     CowData<char32_t>::_unref(local_58);
                  }
 else {
                     CowData<char32_t>::_unref(local_58);
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
            ( *_FcPatternAddBool_dylibloader_wrapper_fontconfig )(lVar8, "scalable", 1);
            ( *_FcPatternAddString_dylibloader_wrapper_fontconfig )(lVar8, "fontformat", *ppuVar11);
            pcVar3 = _FcPatternAddString_dylibloader_wrapper_fontconfig;
            String::utf8();
            uVar9 = CharString::get_data();
            ( *pcVar3 )(lVar8, "family", uVar9);
            lVar10 = local_48;
            if (local_48 != 0) {
               LOCK();
               plVar1 = (long*)( local_48 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_48 = 0;
                  Memory::free_static((void*)( lVar10 + -0x10 ), false);
               }

            }

            uVar6 = _weight_to_fc((OS_LinuxBSD*)CONCAT44(in_register_00000034, param_2), (int)CONCAT71(in_register_00000009, param_4));
            ( *_FcPatternAddInteger_dylibloader_wrapper_fontconfig )(lVar8, "weight", uVar6);
            uVar9 = 0x32;
            if (( ( ( ( 0x37 < in_R8D ) && ( uVar9 = 0x3f ),0x44 < in_R8D ) ) && ( uVar9 = 0x4b ),0x50 < in_R8D )) {
               uVar9 = 0x96;
            }

            ( *_FcPatternAddInteger_dylibloader_wrapper_fontconfig )(lVar8, "width", uVar9);
            ( *_FcPatternAddInteger_dylibloader_wrapper_fontconfig )(lVar8, "slant", -(in_R9B != '\0') & 100);
            ( *_FcConfigSubstitute_dylibloader_wrapper_fontconfig )(0, lVar8, 0);
            ( *_FcDefaultSubstitute_dylibloader_wrapper_fontconfig )(lVar8);
            lVar10 = ( *_FcFontMatch_dylibloader_wrapper_fontconfig )(0, lVar8, local_68);
            if (lVar10 != 0) {
               if (OVar4 == (OS_LinuxBSD)0x0) {
                  local_60 = 0;
                  iVar7 = ( *_FcPatternGetString_dylibloader_wrapper_fontconfig )(lVar10, "family", 0, &local_60);
                  if (( iVar7 != 0 ) || ( local_60 == 0 )) goto LAB_00101730;
                  String::to_lower();
                  String::utf8((char*)local_58, (int)local_60);
                  String::to_lower();
                  cVar5 = String::operator !=((String*)&local_50, (String*)&local_48);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                  CowData<char32_t>::_unref(local_58);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
                  if (cVar5 == '\0') goto LAB_00101730;
               }
 else {
                  LAB_00101730:local_50 = 0;
                  iVar7 = ( *_FcPatternGetString_dylibloader_wrapper_fontconfig )(lVar10, &_LC50, 0, &local_50);
                  if (( iVar7 == 0 ) && ( local_50 != 0 )) {
                     String::utf8((char*)&local_48, (int)local_50);
                     ( *_FcPatternDestroy_dylibloader_wrapper_fontconfig )(lVar10);
                     ( *_FcPatternDestroy_dylibloader_wrapper_fontconfig )(lVar8);
                     *(long*)param_1 = local_48;
                     goto LAB_0010178c;
                  }

               }

               ( *_FcPatternDestroy_dylibloader_wrapper_fontconfig )(lVar10);
            }

            ( *_FcPatternDestroy_dylibloader_wrapper_fontconfig )(lVar8);
         }

         ppuVar11 = ppuVar11 + 1;
      }
 while ( ppuVar11 != &PTR__LC136_0010c0a0 );
      *(undefined8*)param_1 = 0;
   }

   LAB_0010178c:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* OS_LinuxBSD::get_unique_id() const */OS_LinuxBSD * __thiscall OS_LinuxBSD::get_unique_id(OS_LinuxBSD *this){
   long *plVar1;
   char *pcVar2;
   long lVar3;
   char cVar4;
   int iVar5;
   long in_FS_OFFSET;
   Object *local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( get_unique_id() ) && ( iVar5 = iVar5 != 0 )) {
      get_unique_id() {
         local_50 = 0;
         local_40 = 0xf;
         local_48 = "/etc/machine-id";
         String::parse_latin1((StrRange*)&local_50);
         FileAccess::open((String*)&local_58, (int)(StrRange*)&local_50, (Error*)0x1);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (local_58 != (Object*)0x0) {
            while (( ( get_unique_id() ) && ( cVar4 = ( **(code**)( *(long*)local_58 + 0x1d8 ) )() ),cVar4 == '\0' )) {
               ( **(code**)( *(long*)local_58 + 0x228 ) )((StrRange*)&local_50);
               String::strip_edges(SUB81(&local_48, 0), SUB81((StrRange*)&local_50, 0));
               pcVar2 = local_48;
               if (get_unique_id() == local_48) {
                  if (get_unique_id() != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( get_unique_id() );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_48 = (char*)0x0;
                        Memory::free_static(pcVar2 + -0x10, false);
                     }

                  }

               }
 else {
                  if (get_unique_id() != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( get_unique_id() );
                     *plVar1 = *plVar1 + -1;
                     pcVar2= get_unique_id()::machine_id
                     ;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        get_unique_id() {
                           ( **(code**)( *(long*)local_58 + 0x140 ) )(local_58);
                           Memory::free_static(local_58, false);
                        }

                     }

                  }

                  *(undefined8*)this = 0;
                  if (get_unique_id() != (char*)0x0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)this, (CowData*)&get_unique_id(), ::machine_id);
                  }

                  if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
                     /* WARNING: Subroutine does not return */
                     __stack_chk_fail();
                  }

                  return this;
               }

               /* OS_LinuxBSD::get_embedded_pck_offset() const */
               ulong OS_LinuxBSD::get_embedded_pck_offset(OS_LinuxBSD *this) {
                  code *pcVar1;
                  Object *pOVar2;
                  char cVar3;
                  ushort uVar4;
                  ushort uVar5;
                  int iVar6;
                  uint uVar7;
                  uint uVar8;
                  ulong uVar9;
                  long lVar10;
                  ulong uVar11;
                  void *pvVar12;
                  long lVar13;
                  long in_FS_OFFSET;
                  Object *local_50;
                  CowData<char32_t> local_48[8];
                  long local_40;
                  local_40 = *(long*)( in_FS_OFFSET + 0x28 );
                  ( **(code**)( *(long*)this + 0x100 ) )(local_48, this);
                  FileAccess::open((String*)&local_50, (int)local_48, (Error*)0x1);
                  CowData<char32_t>::_unref(local_48);
                  if (local_50 == (Object*)0x0) {
                     uVar9 = 0;
                     goto LAB_00101e05;
                  }

                  iVar6 = ( **(code**)( *(long*)local_50 + 0x1f0 ) )();
                  if (iVar6 == 0x464c457f) {
                     cVar3 = ( **(code**)( *(long*)local_50 + 0x1e0 ) )();
                     if (cVar3 == '\x01') {
                        lVar13 = 0x28;
                        ( **(code**)( *(long*)local_50 + 0x1b8 ) )(local_50, 0x20);
                        uVar8 = ( **(code**)( *(long*)local_50 + 0x1f0 ) )();
                        uVar9 = (ulong)uVar8;
                        ( **(code**)( *(long*)local_50 + 0x1b8 ) )(local_50, 0x30);
                     }
 else {
                        lVar13 = 0x40;
                        ( **(code**)( *(long*)local_50 + 0x1b8 ) )(local_50, 0x28);
                        uVar9 = ( **(code**)( *(long*)local_50 + 0x1f8 ) )();
                        ( **(code**)( *(long*)local_50 + 0x1b8 ) )(local_50, 0x3c);
                     }

                     uVar4 = ( **(code**)( *(long*)local_50 + 0x1e8 ) )();
                     uVar5 = ( **(code**)( *(long*)local_50 + 0x1e8 ) )();
                     ( **(code**)( *(long*)local_50 + 0x1b8 ) )(local_50, (ulong)uVar5 * lVar13 + uVar9);
                     pOVar2 = local_50;
                     lVar10 = *(long*)local_50;
                     pcVar1 = *(code**)( lVar10 + 0x1b8 );
                     if (cVar3 == '\x01') {
                        lVar10 = ( **(code**)( lVar10 + 0x1c8 ) )(local_50);
                        ( *pcVar1 )(pOVar2, lVar10 + 0x10);
                        ( **(code**)( *(long*)local_50 + 0x1f0 ) )();
                        uVar8 = ( **(code**)( *(long*)local_50 + 0x1f0 ) )();
                        uVar11 = (ulong)uVar8;
                     }
 else {
                        lVar10 = ( **(code**)( lVar10 + 0x1c8 ) )();
                        ( *pcVar1 )(pOVar2, lVar10 + 0x18);
                        ( **(code**)( *(long*)local_50 + 0x1f8 ) )();
                        uVar11 = ( **(code**)( *(long*)local_50 + 0x1f8 ) )();
                     }

                     ( **(code**)( *(long*)local_50 + 0x1b8 ) )();
                     pvVar12 = (void*)Memory::alloc_static(uVar11, false);
                     if (pvVar12 == (void*)0x0) goto LAB_00101df0;
                     uVar8 = 0;
                     ( **(code**)( *(long*)local_50 + 0x220 ) )(local_50, pvVar12, uVar11);
                     if (uVar4 != 0) {
                        do {
                           ( **(code**)( *(long*)local_50 + 0x1b8 ) )(local_50, uVar9);
                           uVar7 = ( **(code**)( *(long*)local_50 + 0x1f0 ) )();
                           iVar6 = strcmp((char*)( (ulong)uVar7 + (long)pvVar12 ), "pck");
                           if (iVar6 == 0) {
                              if (cVar3 == '\x01') {
                                 ( **(code**)( *(long*)local_50 + 0x1b8 ) )();
                                 uVar8 = ( **(code**)( *(long*)local_50 + 0x1f0 ) )();
                                 uVar9 = (ulong)uVar8;
                              }
 else {
                                 ( **(code**)( *(long*)local_50 + 0x1b8 ) )();
                                 uVar9 = ( **(code**)( *(long*)local_50 + 0x1f8 ) )();
                              }

                              goto LAB_00101de1;
                           }

                           uVar8 = uVar8 + 1;
                           uVar9 = uVar9 + lVar13;
                        }
 while ( uVar4 != uVar8 );
                     }

                     uVar9 = 0;
                     LAB_00101de1:Memory::free_static(pvVar12, false);
                  }
 else {
                     LAB_00101df0:uVar9 = 0;
                  }

                  if (( ( local_50 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)local_50 + 0x140 ))(local_50);
                  Memory::free_static(local_50, false);
               }

               LAB_00101e05:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               return uVar9;
            }
;
            /* OS_LinuxBSD::get_system_ca_certificates() */
            OS_LinuxBSD * OS_LinuxBSD::get_system_ca_certificates(OS_LinuxBSD * this);
            {
               code *pcVar1;
               Object *pOVar2;
               char cVar3;
               long in_FS_OFFSET;
               long local_80;
               Object *local_78;
               Object *local_70;
               long local_68;
               undefined8 local_60;
               char *local_58;
               undefined8 local_50;
               long local_40;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               local_80 = 0;
               DirAccess::create(&local_78, 2);
               local_68 = 0;
               local_58 = "";
               local_50 = 0;
               String::parse_latin1((StrRange*)&local_68);
               pOVar2 = local_78;
               if (( local_68 == 0 ) || ( *(uint*)( local_68 + -8 ) < 2 )) {
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               }
 else {
                  pcVar1 = *(code**)( *(long*)local_78 + 0x1d0 );
                  local_58 = "";
                  local_60 = 0;
                  local_50 = 0;
                  String::parse_latin1((StrRange*)&local_60);
                  cVar3 = ( *pcVar1 )(pOVar2, (StrRange*)&local_60);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                  if (cVar3 != '\0') {
                     local_58 = "";
                     local_50 = 0;
                     String::parse_latin1((StrRange*)&local_80);
                     goto LAB_0010201a;
                  }

               }

               pOVar2 = local_78;
               pcVar1 = *(code**)( *(long*)local_78 + 0x1d0 );
               local_58 = "/etc/ssl/certs/ca-certificates.crt";
               local_60 = 0;
               local_50 = 0x22;
               String::parse_latin1((StrRange*)&local_60);
               cVar3 = ( *pcVar1 )(pOVar2, (StrRange*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               pOVar2 = local_78;
               if (cVar3 == '\0') {
                  pcVar1 = *(code**)( *(long*)local_78 + 0x1d0 );
                  local_58 = "/etc/pki/ca-trust/extracted/pem/tls-ca-bundle.pem";
                  local_60 = 0;
                  local_50 = 0x31;
                  String::parse_latin1((StrRange*)&local_60);
                  cVar3 = ( *pcVar1 )(pOVar2, (StrRange*)&local_60);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  pOVar2 = local_78;
                  if (cVar3 == '\0') {
                     pcVar1 = *(code**)( *(long*)local_78 + 0x1d0 );
                     local_58 = "/etc/ca-certificates/extracted/tls-ca-bundle.pem";
                     local_60 = 0;
                     local_50 = 0x30;
                     String::parse_latin1((StrRange*)&local_60);
                     cVar3 = ( *pcVar1 )(pOVar2, (StrRange*)&local_60);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     pOVar2 = local_78;
                     if (cVar3 == '\0') {
                        pcVar1 = *(code**)( *(long*)local_78 + 0x1d0 );
                        local_58 = (char*)0x0;
                        String::parse_latin1((String*)&local_58, "/var/lib/ca-certificates/ca-bundle.pem");
                        cVar3 = ( *pcVar1 )(pOVar2, (String*)&local_58);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                        pOVar2 = local_78;
                        if (cVar3 == '\0') {
                           pcVar1 = *(code**)( *(long*)local_78 + 0x1d0 );
                           local_58 = (char*)0x0;
                           String::parse_latin1((String*)&local_58, "/etc/ssl/cert.pem");
                           cVar3 = ( *pcVar1 )(pOVar2, (String*)&local_58);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                           if (cVar3 != '\0') {
                              String::parse_latin1((String*)&local_80, "/etc/ssl/cert.pem");
                           }

                        }
 else {
                           String::parse_latin1((String*)&local_80, "/var/lib/ca-certificates/ca-bundle.pem");
                        }

                     }
 else {
                        String::parse_latin1((String*)&local_80, "/etc/ca-certificates/extracted/tls-ca-bundle.pem");
                     }

                  }
 else {
                     local_50 = 0x31;
                     local_58 = "/etc/pki/ca-trust/extracted/pem/tls-ca-bundle.pem";
                     String::parse_latin1((StrRange*)&local_80);
                  }

               }
 else {
                  local_50 = 0x22;
                  local_58 = "/etc/ssl/certs/ca-certificates.crt";
                  String::parse_latin1((StrRange*)&local_80);
               }

               LAB_0010201a:if (( local_80 == 0 ) || ( *(uint*)( local_80 + -8 ) < 2 )) {
                  *(undefined8*)this = 0;
                  local_58 = "";
                  local_50 = 0;
                  String::parse_latin1((StrRange*)this);
               }
 else {
                  FileAccess::open((String*)&local_70, (int)(CowData<char32_t>*)&local_80, (Error*)0x1);
                  if (local_70 == (Object*)0x0) {
                     local_60 = 0;
                     if (local_80 != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)&local_80);
                     }

                     local_68 = 0;
                     String::parse_latin1((String*)&local_68, "Failed to open system CA certificates file: \'%s\'");
                     vformat<String>((String*)&local_58, (StrRange*)&local_68, (CowData<char32_t>*)&local_60);
                     _err_print_error("get_system_ca_certificates", "platform/linuxbsd/os_linuxbsd.cpp", 0x4ac, "Condition \"f.is_null()\" is true. Returning: \"\"", (String*)&local_58, 0, 0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     *(undefined8*)this = 0;
                     String::parse_latin1((String*)this, "");
                  }
 else {
                     FileAccess::get_as_text(SUB81(this, 0));
                  }

                  if (local_70 != (Object*)0x0) {
                     cVar3 = RefCounted::unreference();
                     if (cVar3 != '\0') {
                        cVar3 = predelete_handler(local_70);
                        if (cVar3 != '\0') {
                           ( **(code**)( *(long*)local_70 + 0x140 ) )(local_70);
                           Memory::free_static(local_70, false);
                        }

                     }

                  }

               }

               if (local_78 != (Object*)0x0) {
                  cVar3 = RefCounted::unreference();
                  if (cVar3 != '\0') {
                     cVar3 = predelete_handler(local_78);
                     if (cVar3 != '\0') {
                        ( **(code**)( *(long*)local_78 + 0x140 ) )(local_78);
                        Memory::free_static(local_78, false);
                     }

                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return this;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* OS_LinuxBSD::get_system_dir(OS::SystemDir, bool) const */
            OS_LinuxBSD * OS_LinuxBSD::get_system_dir(OS_LinuxBSD * this, long * param_2, int, param_3);
            {
               long lVar1;
               code *pcVar2;
               int iVar3;
               CowData<char32_t> *this_00;
               long in_FS_OFFSET;
               long local_78;
               undefined8 local_70;
               undefined1(*local_68)[16];
               undefined8 local_60;
               char *local_58;
               undefined8 local_50;
               long local_40;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               if (param_3 == 0) {
                  if (( ( param_2[0xa0] != 0 ) && ( iVar3 = (int)*(undefined8*)( param_2[0xa0] + -8 ) ),iVar3 != 0 )) {
                     *(undefined8*)this = 0;
                     if (param_2[0xa0] != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)this, (CowData*)( param_2 + 0xa0 ));
                     }

                     goto LAB_001024f0;
                  }

                  local_58 = "DESKTOP";
                  local_50 = 7;
                  goto LAB_0010253e;
               }

               local_78 = 0;
               switch (param_3) {
                  case 1:
                  case 6:
    local_50 = 8;
    local_58 = "PICTURES";
    break;
                  case 2:
    local_50 = 9;
    local_58 = "DOCUMENTS";
    break;
                  case 3:
    local_50 = 8;
    local_58 = "DOWNLOAD";
    break;
                  case 4:
    local_50 = 6;
    local_58 = "VIDEOS";
    break;
                  case 5:
                  case 7:
    local_50 = 5;
    local_58 = "MUSIC";
    break;
                  default:
    goto switchD_001026d2_default;
               }

               LAB_0010253e:local_78 = 0;
               String::parse_latin1((StrRange*)&local_78);
               switchD_001026d2_default:local_70 = 0;
               local_68 = (undefined1(*) [16])0x0;
               local_68 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined4*)local_68[1] = 0;
               *local_68 = (undefined1[16])0x0;
               this_00 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
               *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
               *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
               if (local_78 != 0) {
                  CowData<char32_t>::_ref(this_00, (CowData*)&local_78);
               }

               lVar1 = *(long*)( *local_68 + 8 );
               *(undefined1(**) [16])( this_00 + 0x18 ) = local_68;
               *(undefined8*)( this_00 + 8 ) = 0;
               *(long*)( this_00 + 0x10 ) = lVar1;
               if (lVar1 != 0) {
                  *(CowData<char32_t>**)( lVar1 + 8 ) = this_00;
               }

               lVar1 = *(long*)*local_68;
               *(CowData<char32_t>**)( *local_68 + 8 ) = this_00;
               if (lVar1 == 0) {
                  *(CowData<char32_t>**)*local_68 = this_00;
               }

               *(int*)local_68[1] = *(int*)local_68[1] + 1;
               local_60 = 0;
               pcVar2 = *(code**)( *param_2 + 0x108 );
               local_50 = 0xc;
               local_58 = "xdg-user-dir";
               String::parse_latin1((StrRange*)&local_60);
               iVar3 = ( *pcVar2 )(param_2, (StrRange*)&local_60, (List<String,DefaultAllocator>*)&local_68, (CowData<char32_t>*)&local_70, 0, 0, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               if (iVar3 == 0) {
                  String::strip_edges(SUB81(this, 0), SUB81((CowData<char32_t>*)&local_70, 0));
               }
 else {
                  *(undefined8*)this = 0;
                  local_58 = ".";
                  local_50 = 1;
                  String::parse_latin1((StrRange*)this);
               }

               List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               LAB_001024f0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               return this;
            }

            /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
            /* OS_LinuxBSD::OS_LinuxBSD() */
            void OS_LinuxBSD::OS_LinuxBSD(OS_LinuxBSD *this) {
               char cVar1;
               int iVar2;
               long lVar3;
               uint uVar4;
               long in_FS_OFFSET;
               String local_78[8];
               undefined8 local_70;
               char *local_68;
               undefined8 local_60;
               int local_58[6];
               long local_40;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               OS_Unix::OS_Unix((OS_Unix*)this);
               this[0x160] = (OS_LinuxBSD)0x0;
               *(undefined***)this = &PTR_initialize_0010bd08;
               *(code**)( this + 0x180 ) = Thread::Thread;
               *(undefined8*)( this + 0x178 ) = 0;
               *(undefined1(*) [16])( this + 0x168 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( this + 0x188 ) = (undefined1[16])0x0;
               *(undefined8*)( this + 0x198 ) = 0;
               *(undefined8*)( this + 0x1a0 ) = 0;
               *(code**)( this + 0x180 ) = MIDIDriverALSAMidi::MIDIDriverALSAMidi;
               *(undefined8*)( this + 0x1b0 ) = 0;
               *(undefined8*)( this + 0x1b8 ) = 0;
               Thread::Thread((Thread*)( this + 0x1c0 ));
               *(undefined1(*) [16])( this + 0x1e0 ) = (undefined1[16])0x0;
               *(undefined8*)( this + 0x1f0 ) = 0;
               *(undefined4*)( this + 0x1e0 ) = 1;
               *(undefined1(*) [16])( this + 0x1d0 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( this + 0x1f8 ) = (undefined1[16])0x0;
               local_68 = "Default";
               local_60 = 7;
               String::parse_latin1((StrRange*)( this + 0x200 ));
               local_68 = "Default";
               local_60 = 7;
               *(undefined8*)( this + 0x208 ) = 0;
               String::parse_latin1((StrRange*)( this + 0x208 ));
               *(undefined8*)( this + 0x218 ) = 0;
               *(undefined8*)( this + 0x228 ) = 0;
               *(undefined4*)( this + 0x230 ) = 0;
               *(undefined4*)( this + 0x250 ) = 0;
               this[0x254] = (OS_LinuxBSD)0x0;
               this[0x255] = (OS_LinuxBSD)0x0;
               MIDIDriverALSAMidi::MIDIDriverALSAMidi((MIDIDriverALSAMidi*)( this + 600 ));
               AudioDriverPulseAudio::AudioDriverPulseAudio((AudioDriverPulseAudio*)( this + 0x2c0 ));
               CrashHandler::CrashHandler((CrashHandler*)( this + 0x4f0 ));
               *(undefined1(*) [16])( this + 0x4f8 ) = (undefined1[16])0x0;
               AudioDriverManager::add_driver((AudioDriver*)( this + 0x2c0 ));
               AudioDriverManager::add_driver((AudioDriver*)( this + 0x180 ));
               DisplayServerX11::register_x11_driver();
               iVar2 = initialize_fontconfig(1);
               this[0x160] = ( OS_LinuxBSD )(iVar2 == 0);
               if (iVar2 != 0) goto LAB_001029f8;
               iVar2 = ( *_FcGetVersion_dylibloader_wrapper_fontconfig )();
               if (iVar2 - 20000U < 10000) {
                  uVar4 = ( uint )(iVar2 / 100) % 100;
                  if (10 < uVar4) goto LAB_001029a1;
                  cVar1 = is_print_verbose_enabled();
                  if (cVar1 != '\0') {
                     cVar1 = '\0';
                     goto LAB_00102a66;
                  }

               }
 else {
                  if (iVar2 < 30000) {
                     cVar1 = is_print_verbose_enabled();
                     if (cVar1 == '\0') goto LAB_00102b40;
                     cVar1 = '\0';
                     uVar4 = ( uint )((long)( ( ulong )(uint)((int)( (long)iVar2 / 100 ) >> 0x1f) << 0x20 | (long)iVar2 / 100 & 0xffffffffU ) % 100);
                     LAB_00102a66:local_70 = 0;
                     local_68 = "FontConfig %d.%d.%d detected.";
                     local_60 = 0x1d;
                     String::parse_latin1((StrRange*)&local_70);
                     vformat<int,int,int>(local_78, (int)(StrRange*)&local_70, iVar2 / 10000, uVar4);
                     Variant::Variant((Variant*)local_58, local_78);
                     stringify_variants((Variant*)&local_68);
                     __print_line((String*)&local_68);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                     if (cVar1 == '\0') goto LAB_00102b40;
                  }
 else {
                     LAB_001029a1:cVar1 = is_print_verbose_enabled();
                     if (cVar1 != '\0') {
                        uVar4 = ( uint )(iVar2 / 100) % 100;
                        goto LAB_00102a66;
                     }

                  }

                  if (this[0x160] == (OS_LinuxBSD)0x0) goto LAB_001029f8;
                  lVar3 = ( *_FcInitLoadConfigAndFonts_dylibloader_wrapper_fontconfig )();
                  *(long*)( this + 0x168 ) = lVar3;
                  if (lVar3 == 0) {
                     this[0x160] = (OS_LinuxBSD)0x0;
                  }

                  lVar3 = ( *_FcObjectSetBuild_dylibloader_wrapper_fontconfig )("family", &_LC50, 0);
                  *(long*)( this + 0x170 ) = lVar3;
                  if (lVar3 != 0) goto LAB_001029f8;
               }

               LAB_00102b40:this[0x160] = (OS_LinuxBSD)0x0;
               LAB_001029f8:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               return;
            }

            /* OS_LinuxBSD::shell_open(String const&) */
            undefined4 OS_LinuxBSD::shell_open(OS_LinuxBSD *this, String *param_1) {
               code *pcVar1;
               long lVar2;
               undefined1(*pauVar3)[16];
               int iVar4;
               undefined4 uVar5;
               CowData<char32_t> *pCVar6;
               long lVar7;
               long in_FS_OFFSET;
               int local_6c;
               undefined1(*local_68)[16];
               long local_60;
               char *local_58;
               undefined8 local_50;
               long local_40;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               local_68 = (undefined1(*) [16])0x0;
               local_68 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined4*)local_68[1] = 0;
               *local_68 = (undefined1[16])0x0;
               pCVar6 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
               *(undefined1(*) [16])pCVar6 = (undefined1[16])0x0;
               *(undefined1(*) [16])( pCVar6 + 0x10 ) = (undefined1[16])0x0;
               if (*(long*)param_1 != 0) {
                  CowData<char32_t>::_ref(pCVar6, (CowData*)param_1);
               }

               lVar7 = *(long*)( *local_68 + 8 );
               *(undefined8*)( pCVar6 + 8 ) = 0;
               *(undefined1(**) [16])( pCVar6 + 0x18 ) = local_68;
               *(long*)( pCVar6 + 0x10 ) = lVar7;
               if (lVar7 != 0) {
                  *(CowData<char32_t>**)( lVar7 + 8 ) = pCVar6;
               }

               lVar7 = *(long*)*local_68;
               *(CowData<char32_t>**)( *local_68 + 8 ) = pCVar6;
               if (lVar7 == 0) {
                  *(CowData<char32_t>**)*local_68 = pCVar6;
               }

               *(int*)local_68[1] = *(int*)local_68[1] + 1;
               pcVar1 = *(code**)( *(long*)this + 0x108 );
               local_60 = 0;
               local_50 = 8;
               local_58 = "xdg-open";
               String::parse_latin1((StrRange*)&local_60);
               iVar4 = ( *pcVar1 )(this, (StrRange*)&local_60, (List<String,DefaultAllocator>*)&local_68, 0, &local_6c, 0, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               if (iVar4 != 0 || local_6c != 0) {
                  if (local_6c == 2) {
                     LAB_00103020:uVar5 = 7;
                     goto LAB_00102ff2;
                  }

                  local_60 = 0;
                  local_58 = "open";
                  local_50 = 4;
                  String::parse_latin1((StrRange*)&local_60);
                  if (local_68 == (undefined1(*) [16])0x0) {
                     local_68 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                     *(undefined4*)local_68[1] = 0;
                     *local_68 = (undefined1[16])0x0;
                  }

                  pCVar6 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
                  *(undefined1(*) [16])pCVar6 = (undefined1[16])0x0;
                  *(undefined1(*) [16])( pCVar6 + 0x10 ) = (undefined1[16])0x0;
                  if (local_60 != 0) {
                     CowData<char32_t>::_ref(pCVar6, (CowData*)&local_60);
                  }

                  *(undefined8*)( pCVar6 + 0x10 ) = 0;
                  lVar7 = *(long*)*local_68;
                  *(undefined1(**) [16])( pCVar6 + 0x18 ) = local_68;
                  *(long*)( pCVar6 + 8 ) = lVar7;
                  if (lVar7 != 0) {
                     *(CowData<char32_t>**)( lVar7 + 0x10 ) = pCVar6;
                  }

                  lVar7 = *(long*)( *local_68 + 8 );
                  *(CowData<char32_t>**)*local_68 = pCVar6;
                  if (lVar7 == 0) {
                     *(CowData<char32_t>**)( *local_68 + 8 ) = pCVar6;
                  }

                  *(int*)local_68[1] = *(int*)local_68[1] + 1;
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  pcVar1 = *(code**)( *(long*)this + 0x108 );
                  local_60 = 0;
                  local_58 = "gio";
                  local_50 = 3;
                  String::parse_latin1((StrRange*)&local_60);
                  iVar4 = ( *pcVar1 )(this, (StrRange*)&local_60, (List<String,DefaultAllocator>*)&local_68, 0, &local_6c, 0, 0, 0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  pauVar3 = local_68;
                  if (iVar4 != 0 || local_6c != 0) {
                     if (local_6c == 2) goto LAB_00103020;
                     if (( local_68 != (undefined1(*) [16])0x0 ) && ( pCVar6 = *(CowData<char32_t>**)*local_68 ),pCVar6 != (CowData<char32_t>*)0x0) {
                        if (local_68 == *(undefined1(**) [16])( pCVar6 + 0x18 )) {
                           lVar7 = *(long*)( pCVar6 + 8 );
                           lVar2 = *(long*)( pCVar6 + 0x10 );
                           *(long*)*local_68 = lVar7;
                           if (pCVar6 == *(CowData<char32_t>**)( *local_68 + 8 )) {
                              *(long*)( *local_68 + 8 ) = lVar2;
                           }

                           if (lVar2 != 0) {
                              *(long*)( lVar2 + 8 ) = lVar7;
                              lVar7 = *(long*)( pCVar6 + 8 );
                           }

                           if (lVar7 != 0) {
                              *(long*)( lVar7 + 0x10 ) = lVar2;
                           }

                           CowData<char32_t>::_unref(pCVar6);
                           Memory::free_static(pCVar6, false);
                           *(int*)pauVar3[1] = *(int*)pauVar3[1] + -1;
                        }
 else {
                           _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                        }

                        if (*(int*)local_68[1] == 0) {
                           Memory::free_static(local_68, false);
                           local_68 = (undefined1(*) [16])0x0;
                        }

                     }

                     pcVar1 = *(code**)( *(long*)this + 0x108 );
                     local_60 = 0;
                     local_58 = "gvfs-open";
                     local_50 = 9;
                     String::parse_latin1((StrRange*)&local_60);
                     iVar4 = ( *pcVar1 )(this, (StrRange*)&local_60, (List<String,DefaultAllocator>*)&local_68, 0, &local_6c, 0, 0, 0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     if (iVar4 != 0 || local_6c != 0) {
                        if (local_6c == 2) goto LAB_00103020;
                        pcVar1 = *(code**)( *(long*)this + 0x108 );
                        local_60 = 0;
                        local_58 = "kde-open5";
                        local_50 = 9;
                        String::parse_latin1((StrRange*)&local_60);
                        iVar4 = ( *pcVar1 )(this, (StrRange*)&local_60, (List<String,DefaultAllocator>*)&local_68, 0, &local_6c, 0, 0, 0);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                        if (iVar4 != 0 || local_6c != 0) {
                           pcVar1 = *(code**)( *(long*)this + 0x108 );
                           local_60 = 0;
                           local_58 = "kde-open";
                           local_50 = 8;
                           String::parse_latin1((StrRange*)&local_60);
                           uVar5 = ( *pcVar1 )(this, (StrRange*)&local_60, (List<String,DefaultAllocator>*)&local_68, 0, &local_6c, 0, 0, 0);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                           if (local_6c != 0) {
                              uVar5 = 1;
                           }

                           goto LAB_00102ff2;
                        }

                     }

                  }

               }

               uVar5 = 0;
               LAB_00102ff2:List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_68);
               if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               return uVar5;
            }

            /* OS_LinuxBSD::move_to_trash(String const&) */
            int OS_LinuxBSD::move_to_trash(String *param_1) {
               Object *pOVar1;
               code *pcVar2;
               undefined1(*pauVar3)[16];
               Object *pOVar4;
               uchar uVar5;
               uchar uVar6;
               __dev_t _Var7;
               char cVar8;
               int iVar9;
               int iVar10;
               CowData<char32_t> *pCVar11;
               char *pcVar12;
               long lVar13;
               long lVar14;
               long *plVar15;
               undefined8 uVar16;
               long in_FS_OFFSET;
               String *local_5e8;
               int local_5a0;
               int local_59c;
               long local_598;
               undefined1(*local_590)[16];
               Object *local_588;
               long local_580;
               Object *local_578;
               Object *local_570;
               Object *local_568;
               long local_560;
               long local_558;
               String local_550[8];
               int local_548[2];
               Object *local_540;
               CowData<char32_t> local_538[8];
               undefined8 local_530;
               undefined8 local_528;
               Object *local_520;
               undefined8 local_518;
               long local_510;
               Object *local_508;
               undefined8 local_500;
               undefined1 local_4f8;
               stat64 local_4d8;
               undefined1 local_448[1032];
               long local_40;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               local_510 = 0;
               local_508 = (Object*)&_LC81;
               local_500 = (char*)0x1;
               String::parse_latin1((StrRange*)&local_510);
               String::rstrip((String*)&local_598);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_510);
               local_590 = (undefined1(*) [16])0x0;
               List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_590, (String*)&local_598);
               local_510 = 0;
               local_508 = (Object*)0x10934f;
               local_500 = (char*)0x5;
               String::parse_latin1((StrRange*)&local_510);
               if (local_590 == (undefined1(*) [16])0x0) {
                  local_590 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *(undefined4*)local_590[1] = 0;
                  *local_590 = (undefined1[16])0x0;
               }

               pCVar11 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
               *(undefined1(*) [16])pCVar11 = (undefined1[16])0x0;
               *(undefined1(*) [16])( pCVar11 + 0x10 ) = (undefined1[16])0x0;
               if (local_510 != 0) {
                  CowData<char32_t>::_ref(pCVar11, (CowData*)&local_510);
               }

               *(undefined8*)( pCVar11 + 0x10 ) = 0;
               lVar13 = *(long*)*local_590;
               *(undefined1(**) [16])( pCVar11 + 0x18 ) = local_590;
               *(long*)( pCVar11 + 8 ) = lVar13;
               if (lVar13 != 0) {
                  *(CowData<char32_t>**)( lVar13 + 0x10 ) = pCVar11;
               }

               lVar13 = *(long*)( *local_590 + 8 );
               *(CowData<char32_t>**)*local_590 = pCVar11;
               if (lVar13 == 0) {
                  *(CowData<char32_t>**)( *local_590 + 8 ) = pCVar11;
               }

               *(int*)local_590[1] = *(int*)local_590[1] + 1;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_510);
               pcVar2 = *(code**)( *(long*)param_1 + 0x108 );
               local_510 = 0;
               local_508 = (Object*)&_LC77;
               local_500 = (char*)0x3;
               String::parse_latin1((StrRange*)&local_510);
               iVar9 = ( *pcVar2 )(param_1, (StrRange*)&local_510, (List<String,DefaultAllocator>*)&local_590, 0, &local_5a0, 0, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_510);
               pauVar3 = local_590;
               if (iVar9 != 0 || local_5a0 != 0) {
                  if (( local_590 != (undefined1(*) [16])0x0 ) && ( pCVar11 = *(CowData<char32_t>**)*local_590 ),pCVar11 != (CowData<char32_t>*)0x0) {
                     if (local_590 == *(undefined1(**) [16])( pCVar11 + 0x18 )) {
                        lVar13 = *(long*)( pCVar11 + 8 );
                        lVar14 = *(long*)( pCVar11 + 0x10 );
                        *(long*)*local_590 = lVar13;
                        if (pCVar11 == *(CowData<char32_t>**)( *local_590 + 8 )) {
                           *(long*)( *local_590 + 8 ) = lVar14;
                        }

                        if (lVar14 != 0) {
                           *(long*)( lVar14 + 8 ) = lVar13;
                           lVar13 = *(long*)( pCVar11 + 8 );
                        }

                        if (lVar13 != 0) {
                           *(long*)( lVar13 + 0x10 ) = lVar14;
                        }

                        CowData<char32_t>::_unref(pCVar11);
                        Memory::free_static(pCVar11, false);
                        *(int*)pauVar3[1] = *(int*)pauVar3[1] + -1;
                     }
 else {
                        _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                     }

                     if (*(int*)local_590[1] == 0) {
                        Memory::free_static(local_590, false);
                        local_590 = (undefined1(*) [16])0x0;
                     }

                  }

                  local_510 = 0;
                  local_508 = (Object*)&_LC83;
                  local_500 = (char*)0x4;
                  String::parse_latin1((StrRange*)&local_510);
                  if (local_590 == (undefined1(*) [16])0x0) {
                     local_590 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                     *(undefined4*)local_590[1] = 0;
                     *local_590 = (undefined1[16])0x0;
                  }

                  pCVar11 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
                  *(undefined1(*) [16])pCVar11 = (undefined1[16])0x0;
                  *(undefined1(*) [16])( pCVar11 + 0x10 ) = (undefined1[16])0x0;
                  if (local_510 != 0) {
                     CowData<char32_t>::_ref(pCVar11, (CowData*)&local_510);
                  }

                  *(undefined8*)( pCVar11 + 0x10 ) = 0;
                  lVar13 = *(long*)*local_590;
                  *(undefined1(**) [16])( pCVar11 + 0x18 ) = local_590;
                  *(long*)( pCVar11 + 8 ) = lVar13;
                  if (lVar13 != 0) {
                     *(CowData<char32_t>**)( lVar13 + 0x10 ) = pCVar11;
                  }

                  lVar13 = *(long*)( *local_590 + 8 );
                  *(CowData<char32_t>**)*local_590 = pCVar11;
                  if (lVar13 == 0) {
                     *(CowData<char32_t>**)( *local_590 + 8 ) = pCVar11;
                  }

                  *(int*)local_590[1] = *(int*)local_590[1] + 1;
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_510);
                  local_508 = (Object*)0x10935a;
                  local_510 = 0;
                  local_500 = (char*)0x7;
                  String::parse_latin1((StrRange*)&local_510);
                  List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_590, (String*)&local_510);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_510);
                  pcVar2 = *(code**)( *(long*)param_1 + 0x108 );
                  local_510 = 0;
                  local_508 = (Object*)0x109362;
                  local_500 = (char*)0xa;
                  String::parse_latin1((StrRange*)&local_510);
                  iVar9 = ( *pcVar2 )(param_1, (StrRange*)&local_510, (List<String,DefaultAllocator>*)&local_590, 0, &local_5a0, 0, 0, 0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_510);
                  pauVar3 = local_590;
                  if (iVar9 != 0 || local_5a0 != 0) {
                     if (local_590 != (undefined1(*) [16])0x0) {
                        pCVar11 = *(CowData<char32_t>**)*local_590;
                        if (pCVar11 != (CowData<char32_t>*)0x0) {
                           if (local_590 == *(undefined1(**) [16])( pCVar11 + 0x18 )) {
                              lVar13 = *(long*)( pCVar11 + 8 );
                              lVar14 = *(long*)( pCVar11 + 0x10 );
                              *(long*)*local_590 = lVar13;
                              if (pCVar11 == *(CowData<char32_t>**)( *local_590 + 8 )) {
                                 *(long*)( *local_590 + 8 ) = lVar14;
                              }

                              if (lVar14 != 0) {
                                 *(long*)( lVar14 + 8 ) = lVar13;
                                 lVar13 = *(long*)( pCVar11 + 8 );
                              }

                              if (lVar13 != 0) {
                                 *(long*)( lVar13 + 0x10 ) = lVar14;
                              }

                              CowData<char32_t>::_unref(pCVar11);
                              Memory::free_static(pCVar11, false);
                              *(int*)pauVar3[1] = *(int*)pauVar3[1] + -1;
                           }
 else {
                              _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                           }

                           if (*(int*)local_590[1] == 0) {
                              Memory::free_static(local_590, false);
                              local_590 = (undefined1(*) [16])0x0;
                              goto LAB_00103520;
                           }

                        }

                        pauVar3 = local_590;
                        pCVar11 = *(CowData<char32_t>**)( *local_590 + 8 );
                        if (pCVar11 != (CowData<char32_t>*)0x0) {
                           if (local_590 == *(undefined1(**) [16])( pCVar11 + 0x18 )) {
                              lVar13 = *(long*)( pCVar11 + 8 );
                              if (pCVar11 == *(CowData<char32_t>**)*local_590) {
                                 *(long*)*local_590 = lVar13;
                              }

                              lVar14 = *(long*)( pCVar11 + 0x10 );
                              *(long*)( *local_590 + 8 ) = lVar14;
                              if (lVar14 != 0) {
                                 *(long*)( lVar14 + 8 ) = lVar13;
                                 lVar13 = *(long*)( pCVar11 + 8 );
                              }

                              if (lVar13 != 0) {
                                 *(long*)( lVar13 + 0x10 ) = lVar14;
                              }

                              CowData<char32_t>::_unref(pCVar11);
                              Memory::free_static(pCVar11, false);
                              *(int*)pauVar3[1] = *(int*)pauVar3[1] + -1;
                           }
 else {
                              _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                           }

                           if (*(int*)local_590[1] == 0) {
                              Memory::free_static(local_590, false);
                              local_590 = (undefined1(*) [16])0x0;
                           }

                        }

                     }

                     LAB_00103520:pcVar2 = *(code**)( *(long*)param_1 + 0x108 );
                     local_510 = 0;
                     local_508 = (Object*)0x10936d;
                     local_500 = (char*)0xa;
                     String::parse_latin1((StrRange*)&local_510);
                     iVar9 = ( *pcVar2 )(param_1, (StrRange*)&local_510, (List<String,DefaultAllocator>*)&local_590, 0, &local_5a0, 0, 0, 0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_510);
                     if (iVar9 != 0 || local_5a0 != 0) {
                        local_588 = (Object*)0x0;
                        local_508 = (Object*)&_LC0;
                        local_500 = (char*)0x0;
                        String::parse_latin1((StrRange*)&local_588);
                        String::utf8();
                        pcVar12 = (char*)CharString::get_data();
                        iVar9 = stat64(pcVar12, &local_4d8);
                        pOVar4 = local_508;
                        if (local_508 != (Object*)0x0) {
                           LOCK();
                           pOVar1 = local_508 + -0x10;
                           *(long*)pOVar1 = *(long*)pOVar1 + -1;
                           UNLOCK();
                           if (*(long*)pOVar1 == 0) {
                              local_508 = (Object*)0x0;
                              Memory::free_static(pOVar4 + -0x10, false);
                           }

                        }

                        _Var7 = local_4d8.st_dev;
                        if (iVar9 == 0) {
                           lVar13 = setmntent("/proc/mounts", &_LC87);
                           if (lVar13 == 0) goto LAB_00103938;
                           do {
                              lVar14 = getmntent_r(lVar13, (String*)&local_508, local_448, 0x400);
                              if (lVar14 == 0) {
                                 endmntent(lVar13);
                                 goto LAB_00103938;
                              }

                              iVar9 = stat64(local_500, &local_4d8);
                           }
 while ( ( iVar9 != 0 ) || ( _Var7 != local_4d8.st_dev ) );
                           endmntent(lVar13);
                           local_580 = 0;
                           String::parse_latin1((String*)&local_580, local_500);
                        }
 else {
                           LAB_00103938:local_580 = 0;
                           String::parse_latin1((String*)&local_580, "");
                        }

                        local_5e8 = (String*)&local_580;
                        if (( local_580 != 0 ) && ( 1 < *(uint*)( local_580 + -8 ) )) {
                           getuid();
                           itos((long)&local_508);
                           local_518 = 0;
                           String::parse_latin1((String*)&local_518, "/.Trash-");
                           String::operator +((String*)&local_510, local_5e8);
                           String::operator +((String*)&local_520, (String*)&local_510);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_510);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_518);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_508);
                           String::utf8();
                           pcVar12 = (char*)CharString::get_data();
                           iVar9 = stat64(pcVar12, &local_4d8);
                           pOVar4 = local_508;
                           if (local_508 != (Object*)0x0) {
                              LOCK();
                              pOVar1 = local_508 + -0x10;
                              *(long*)pOVar1 = *(long*)pOVar1 + -1;
                              UNLOCK();
                              if (*(long*)pOVar1 == 0) {
                                 local_508 = (Object*)0x0;
                                 Memory::free_static(pOVar4 + -0x10, false);
                              }

                           }

                           if (( iVar9 == 0 ) && ( local_588 != local_520 )) {
                              CowData<char32_t>::_ref((CowData<char32_t>*)&local_588, (CowData*)&local_520);
                           }

                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_520);
                        }

                        if (( local_588 == (Object*)0x0 ) || ( *(uint*)( local_588 + -8 ) < 2 )) {
                           pcVar12 = getenv("XDG_DATA_HOME");
                           if (pcVar12 != (char*)0x0) {
                              local_510 = 0;
                              String::parse_latin1((String*)&local_510, "/Trash");
                              String::utf8((char*)&local_518, (int)pcVar12);
                              String::operator +((String*)&local_508, (String*)&local_518);
                              if (local_588 != local_508) {
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_588);
                                 local_588 = local_508;
                                 local_508 = (Object*)0x0;
                              }

                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_508);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_518);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_510);
                           }

                           if (( local_588 != (Object*)0x0 ) && ( 1 < *(uint*)( local_588 + -8 ) )) goto LAB_0010388a;
                           pcVar12 = getenv("HOME");
                           if (pcVar12 != (char*)0x0) {
                              local_510 = 0;
                              String::parse_latin1((String*)&local_510, "/.local/share/Trash");
                              String::utf8((char*)&local_518, (int)pcVar12);
                              String::operator +((String*)&local_508, (String*)&local_518);
                              if (local_588 != local_508) {
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_588);
                                 local_588 = local_508;
                                 local_508 = (Object*)0x0;
                              }

                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_508);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_518);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_510);
                           }

                           if (local_588 != (Object*)0x0) goto LAB_0010388a;
                        }
 else {
                           LAB_0010388a:if (1 < *(uint*)( local_588 + -8 )) {
                              DirAccess::create((StrRange*)&local_520, 2);
                              iVar9 = ( **(code**)( *(long*)local_520 + 0x1c0 ) )(local_520, (StrRange*)&local_588);
                              pOVar4 = local_520;
                              if (iVar9 == 0) {
                                 pcVar2 = *(code**)( *(long*)local_520 + 0x1c0 );
                                 local_510 = 0;
                                 local_508 = (Object*)0x1093bb;
                                 local_500 = (char*)0x6;
                                 String::parse_latin1((StrRange*)&local_510);
                                 String::operator +((String*)&local_508, (String*)&local_588);
                                 iVar9 = ( *pcVar2 )(pOVar4, (String*)&local_508);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_508);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_510);
                                 pOVar4 = local_520;
                                 if (iVar9 == 0) {
                                    pcVar2 = *(code**)( *(long*)local_520 + 0x1c0 );
                                    local_510 = 0;
                                    String::parse_latin1((String*)&local_510, "/info");
                                    String::operator +((String*)&local_508, (String*)&local_588);
                                    iVar9 = ( *pcVar2 )(pOVar4);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_508);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_510);
                                    if (iVar9 == 0) {
                                       if (( ( local_520 != (Object*)0x0 ) && ( cVar8 = RefCounted::unreference() ),pOVar4 = local_520,cVar8 != '\0' )) &&( cVar8 = cVar8 != '\0' )(**(code**)( *(long*)pOVar4 + 0x140 ))(pOVar4);
                                       Memory::free_static(pOVar4, false);
                                    }

                                    String::get_file();
                                    if (( local_578 != (Object*)0x0 ) && ( 0xf1 < (int)*(long*)( local_578 + -8 ) )) {
                                       String::substr((int)(String*)&local_508, (int)(CowData<char32_t>*)&local_578);
                                       if (local_578 != local_508) {
                                          CowData<char32_t>::_unref((CowData<char32_t>*)&local_578);
                                          local_578 = local_508;
                                          local_508 = (Object*)0x0;
                                       }

                                       CowData<char32_t>::_unref((CowData<char32_t>*)&local_508);
                                    }

                                    local_510 = 0;
                                    String::parse_latin1((String*)&local_510, "/files/");
                                    String::operator +((String*)&local_508, (String*)&local_588);
                                    String::operator +((String*)&local_570, (String*)&local_508);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_508);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_510);
                                    local_568 = (Object*)0x0;
                                    if (local_578 != (Object*)0x0) {
                                       CowData<char32_t>::_ref((CowData<char32_t>*)&local_568, (CowData*)&local_578);
                                    }

                                    lVar13 = 1;
                                    do {
                    String::utf8();
                    pcVar12 = (char *)CharString::get_data();
                    iVar9 = stat64(pcVar12,&local_4d8);
                    pOVar4 = local_508;
                    if (local_508 != (Object *)0x0) {
                      LOCK();
                      pOVar1 = local_508 + -0x10;
                      *(long *)pOVar1 = *(long *)pOVar1 + -1;
                      UNLOCK();
                      if (*(long *)pOVar1 == 0) {
                        local_508 = (Object *)0x0;
                        Memory::free_static(pOVar4 + -0x10,false);
                      }
                    }
                    if (iVar9 != 0) {
                      if (local_578 != local_568) {
                        CowData<char32_t>::_ref
                                  ((CowData<char32_t> *)&local_578,(CowData *)&local_568);
                      }
                      local_510 = 0;
                      String::parse_latin1((String *)&local_510,"/");
                      String::get_base_dir();
                      String::operator+((String *)&local_508,(String *)&local_518);
                      String::operator+((String *)&local_560,(String *)&local_508);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_508);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_518);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_510);
                      plVar15 = (long *)OS::get_singleton();
                      (**(code **)(*plVar15 + 0x1e0))((String *)&local_508,plVar15,0);
                      pcVar12 = local_500;
                      pOVar4 = local_508;
                      uVar5 = local_500._4_1_;
                      local_510 = 0;
                      uVar6 = local_500._6_1_;
                      String::parse_latin1((String *)&local_510,"%04d-%02d-%02dT%02d:%02d:");
                      vformat<long,int,unsigned_char,unsigned_char,unsigned_char>
                                ((String *)&local_558,(long)&local_510,(int)pOVar4,(uchar)pcVar12,
                                 uVar5,uVar6);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_510);
                      local_518 = 0;
                      if (local_558 != 0) {
                        CowData<char32_t>::_ref
                                  ((CowData<char32_t> *)&local_518,(CowData *)&local_558);
                      }
                      local_520 = (Object *)0x0;
                      String::parse_latin1((String *)&local_520,"%s%02d");
                      vformat<String,unsigned_char>
                                ((StrRange *)&local_510,(StrRange *)&local_520,
                                 (CowData<char32_t> *)&local_518,local_4f8);
                      lVar13 = local_510;
                      if (local_558 != local_510) {
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_558);
                        local_558 = lVar13;
                        local_510 = 0;
                      }
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_510);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_520);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_518);
                      local_510 = 0;
                      String::parse_latin1((String *)&local_510,"\n");
                      local_528 = 0;
                      String::parse_latin1((String *)&local_528,"\nDeletionDate=");
                      String::uri_encode();
                      operator+((char *)&local_530,(String *)"[Trash Info]\nPath=");
                      String::operator+((String *)&local_520,(String *)&local_530);
                      String::operator+((String *)&local_518,(String *)&local_520);
                      String::operator+(local_550,(String *)&local_518);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_518);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_520);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_530);
                      CowData<char32_t>::_unref(local_538);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_528);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_510);
                      local_518 = 0;
                      String::parse_latin1((String *)&local_518,".trashinfo");
                      local_530 = 0;
                      String::parse_latin1((String *)&local_530,"/info/");
                      String::operator+((String *)&local_528,(String *)&local_588);
                      String::operator+((String *)&local_520,(String *)&local_528);
                      String::operator+((String *)&local_510,(String *)&local_520);
                      FileAccess::open((String *)&local_540,(int)(StrRange *)&local_510,(Error *)0x2
                                      );
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_510);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_520);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_528);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_530);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_518);
                      if (local_548[0] == 0) {
                        (**(code **)(*(long *)local_540 + 0x2a8))();
                        if (((local_540 != (Object *)0x0) &&
                            (cVar8 = RefCounted::unreference(), pOVar4 = local_540, cVar8 != '\0'))
                           && (cVar8 = predelete_handler(local_540), cVar8 != '\0')) {
                          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                          Memory::free_static(pOVar4,false);
                        }
                        DirAccess::create((String *)&local_540,2);
                        pOVar4 = local_540;
                        pcVar2 = *(code **)(*(long *)local_540 + 0x200);
                        local_510 = 0;
                        if (local_560 != 0) {
                          CowData<char32_t>::_ref
                                    ((CowData<char32_t> *)&local_510,(CowData *)&local_560);
                        }
                        local_518 = 0;
                        if (local_598 != 0) {
                          CowData<char32_t>::_ref
                                    ((CowData<char32_t> *)&local_518,(CowData *)&local_598);
                        }
                        local_548[0] = (*pcVar2)(pOVar4,(CowData<char32_t> *)&local_518,
                                                 (StrRange *)&local_510);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_518);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_510);
                        if (local_548[0] != 0) {
                          local_518 = 0;
                          String::parse_latin1((String *)&local_518,"\"");
                          local_530 = 0;
                          String::parse_latin1((String *)&local_530,"\" to \"");
                          operator+((char *)local_538,(String *)"Can\'t rename file \"");
                          String::operator+((String *)&local_528,(String *)local_538);
                          String::operator+((String *)&local_520,(String *)&local_528);
                          String::operator+((String *)&local_510,(String *)&local_520);
                          uVar16 = 0x477;
                          goto LAB_00104aff;
                        }
                        if (((local_540 != (Object *)0x0) &&
                            (cVar8 = RefCounted::unreference(), pOVar4 = local_540, cVar8 != '\0'))
                           && (cVar8 = predelete_handler(local_540), cVar8 != '\0')) {
                          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                          Memory::free_static(pOVar4,false);
                        }
                        local_548[0] = 0;
                        local_548[1] = 0;
                        List<String,DefaultAllocator>::push_back
                                  ((List<String,DefaultAllocator> *)local_548,(String *)&local_560);
                        local_518 = 0;
                        String::parse_latin1((String *)&local_518,"/files");
                        String::operator+((String *)&local_510,(String *)&local_588);
                        List<String,DefaultAllocator>::push_back
                                  ((List<String,DefaultAllocator> *)local_548,(String *)&local_510);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_510);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_518);
                        pcVar2 = *(code **)(*(long *)param_1 + 0x108);
                        local_510 = 0;
                        String::parse_latin1((String *)&local_510,"mv");
                        iVar10 = (*pcVar2)(param_1,(StrRange *)&local_510,
                                           (List<String,DefaultAllocator> *)local_548,0,&local_59c,0
                                           ,0,0);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_510);
                        iVar9 = 0;
                        if (iVar10 != 0 || local_59c != 0) {
                          local_518 = 0;
                          String::parse_latin1((String *)&local_518,"/files\"");
                          local_530 = 0;
                          String::parse_latin1((String *)&local_530,"\" to the trash can \"");
                          operator+((char *)local_538,
                                    (String *)"move_to_trash: Could not move the resource \"");
                          String::operator+((String *)&local_528,(String *)local_538);
                          String::operator+((String *)&local_520,(String *)&local_528);
                          String::operator+((String *)&local_510,(String *)&local_520);
                          _err_print_error(_LC94,"platform/linuxbsd/os_linuxbsd.cpp",0x485,
                                           (StrRange *)&local_510,0,0);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_510);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_520);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_528);
                          CowData<char32_t>::_unref(local_538);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_530);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_518);
                          DirAccess::create((String *)&local_540,2);
                          pOVar4 = local_540;
                          pcVar2 = *(code **)(*(long *)local_540 + 0x200);
                          local_510 = 0;
                          if (local_598 != 0) {
                            CowData<char32_t>::_ref
                                      ((CowData<char32_t> *)&local_510,(CowData *)&local_598);
                          }
                          local_518 = 0;
                          if (local_560 != 0) {
                            CowData<char32_t>::_ref
                                      ((CowData<char32_t> *)&local_518,(CowData *)&local_560);
                          }
                          iVar9 = (*pcVar2)(pOVar4,(CowData<char32_t> *)&local_518,
                                            (StrRange *)&local_510);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_518);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_510);
                          if (iVar9 == 0) {
                            iVar9 = 1;
                          }
                          else {
                            local_518 = 0;
                            String::parse_latin1((String *)&local_518,"\"");
                            local_530 = 0;
                            String::parse_latin1
                                      ((String *)&local_530,"\" back to its original name: \"");
                            operator+((char *)local_538,(String *)"Could not rename \"");
                            String::operator+((String *)&local_528,(String *)local_538);
                            String::operator+((String *)&local_520,(String *)&local_528);
                            String::operator+((String *)&local_510,(String *)&local_520);
                            _err_print_error(_LC94,"platform/linuxbsd/os_linuxbsd.cpp",0x488,
                                             "Condition \"err != OK\" is true. Returning: err",
                                             (StrRange *)&local_510,0,0);
                            CowData<char32_t>::_unref((CowData<char32_t> *)&local_510);
                            CowData<char32_t>::_unref((CowData<char32_t> *)&local_520);
                            CowData<char32_t>::_unref((CowData<char32_t> *)&local_528);
                            CowData<char32_t>::_unref(local_538);
                            CowData<char32_t>::_unref((CowData<char32_t> *)&local_530);
                            CowData<char32_t>::_unref((CowData<char32_t> *)&local_518);
                          }
                          if (((local_540 != (Object *)0x0) &&
                              (cVar8 = RefCounted::unreference(), cVar8 != '\0')) &&
                             (cVar8 = predelete_handler(local_540), cVar8 != '\0')) {
                            (**(code **)(*(long *)local_540 + 0x140))(local_540);
                            Memory::free_static(local_540,false);
                          }
                        }
                        List<String,DefaultAllocator>::~List
                                  ((List<String,DefaultAllocator> *)local_548);
                                 }
 else {
                                    local_518 = 0;
                                    String::parse_latin1((String*)&local_518, ".trashinfo\"");
                                    local_530 = 0;
                                    String::parse_latin1((String*)&local_530, "/info/");
                                    operator+((char *)
                                    local_538,(String*)"Can\'t create trashinfo file: \"";
                                    String::operator +((String*)&local_528, (String*)local_538);
                                    String::operator +((String*)&local_520, (String*)&local_528);
                                    String::operator +((String*)&local_510, (String*)&local_520);
                                    uVar16 = 0x470;
                                    LAB_00104aff:_err_print_error(_LC94, "platform/linuxbsd/os_linuxbsd.cpp", uVar16, "Condition \"err != OK\" is true. Returning: err", (StrRange*)&local_510, 0, 0);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_510);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_520);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_528);
                                    CowData<char32_t>::_unref(local_538);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_530);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_518);
                                    iVar9 = local_548[0];
                                    if (( ( local_540 != (Object*)0x0 ) && ( cVar8 = RefCounted::unreference() ),cVar8 != '\0' )) &&( cVar8 = cVar8 != '\0' )(**(code**)( *(long*)local_540 + 0x140 ))(local_540);
                                    Memory::free_static(local_540, false);
                                 }

                              }

                              CowData<char32_t>::_unref((CowData<char32_t>*)local_550);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_558);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_560);
                              goto LAB_00103e22;
                           }

                           if (lVar13 == 100) goto code_r0x00103de9;
                           itos((long)&local_510);
                           local_508 = (Object*)&_LC27;
                           local_520 = (Object*)0x0;
                           local_500 = (char*)0x1;
                           String::parse_latin1((StrRange*)&local_520);
                           String::operator +((String*)&local_518, (String*)&local_578);
                           String::operator +((String*)&local_508, (String*)&local_518);
                           if (local_568 != local_508) {
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_568);
                              local_568 = local_508;
                              local_508 = (Object*)0x0;
                           }

                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_508);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_518);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_520);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_510);
                           local_508 = (Object*)0x1093d7;
                           local_518 = 0;
                           local_500 = &DAT_00000007;
                           String::parse_latin1((StrRange*)&local_518);
                           String::operator +((String*)&local_510, (String*)&local_588);
                           String::operator +((String*)&local_508, (String*)&local_510);
                           if (local_570 != local_508) {
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_570);
                              local_570 = local_508;
                              local_508 = (Object*)0x0;
                           }

                           lVar13 = lVar13 + 1;
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_508);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_510);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_518);
                        }

                        while (true) ;;;
                     }

                     local_510 = 0;
                     String::parse_latin1((String*)&local_510, "/info\"");
                     operator+((char *)&
                     local_518,(String*)"Could not create the trash path \"";
                     String::operator +((String*)&local_508, (String*)&local_518);
                     uVar16 = 0x448;
                  }
 else {
                     local_510 = 0;
                     String::parse_latin1((String*)&local_510, "/files\"");
                     operator+((char *)&
                     local_518,(String*)"Could not create the trash path \"";
                     String::operator +((String*)&local_508, (String*)&local_518);
                     uVar16 = 0x446;
                  }

               }
 else {
                  local_510 = 0;
                  String::parse_latin1((String*)&local_510, "\"");
                  operator+((char *)&
                  local_518,(String*)"Could not create the trash path \"";
                  String::operator +((String*)&local_508, (String*)&local_518);
                  uVar16 = 0x444;
               }

               _err_print_error(_LC94, "platform/linuxbsd/os_linuxbsd.cpp", uVar16, "Condition \"err != OK\" is true. Returning: err", (String*)&local_508, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_508);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_518);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_510);
               if (( ( local_520 != (Object*)0x0 ) && ( cVar8 = RefCounted::unreference() ),pOVar4 = local_520,cVar8 != '\0' )) &&( cVar8 = cVar8 != '\0' )(**(code**)( *(long*)pOVar4 + 0x140 ))(pOVar4);
               Memory::free_static(pOVar4, false);
            }

            goto LAB_001038cb;
         }

      }

      iVar9 = 1;
      _err_print_error(_LC94, "platform/linuxbsd/os_linuxbsd.cpp", 0x43c, "Condition \"trash_path.is_empty()\" is true. Returning: FAILED", "Could not determine the trash can location", 0, 0);
      goto LAB_001038cb;
   }

}
}iVar9 = 0;goto LAB_001038eb;code_r0x00103de9:iVar9 = 1;_err_print_error(_LC94, "platform/linuxbsd/os_linuxbsd.cpp", 0x45f, "Condition \"id_number > 99\" is true. Returning: FAILED", "Too many identically named resources already in the trash can.", 0, 0);LAB_00103e22:CowData<char32_t>::_unref((CowData<char32_t>*)&local_568);CowData<char32_t>::_unref((CowData<char32_t>*)&local_570);CowData<char32_t>::_unref((CowData<char32_t>*)&local_578);LAB_001038cb:CowData<char32_t>::_unref((CowData<char32_t>*)local_5e8);CowData<char32_t>::_unref((CowData<char32_t>*)&local_588);LAB_001038eb:List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_590);CowData<char32_t>::_unref((CowData<char32_t>*)&local_598);if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return iVar9;}/* OS_LinuxBSD::get_processor_name() const */OS_LinuxBSD * __thiscall OS_LinuxBSD::get_processor_name(OS_LinuxBSD *this){
   long *plVar1;
   code *pcVar2;
   char cVar3;
   int iVar4;
   char *pcVar5;
   undefined8 uVar6;
   long lVar7;
   long in_FS_OFFSET;
   Object *local_58;
   long local_50;
   char *local_48;
   long local_40[2];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_40[0] = 0xd;
   local_48 = "/proc/cpuinfo";
   String::parse_latin1((StrRange*)&local_50);
   FileAccess::open((String*)&local_58, (int)(StrRange*)&local_50, (Error*)0x1);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   if (local_58 == (Object*)0x0) {
      local_50 = 0;
      local_48 = "Couldn\'t open `/proc/cpuinfo` to get the CPU model name. Returning an empty string.";
      local_40[0] = 0x53;
      String::parse_latin1((StrRange*)&local_50);
      pcVar5 = "Condition \"f.is_null()\" is true. Returning: \"\"";
      uVar6 = 0xc9;
   }
 else {
      while (cVar3 = ( **(code**)( *(long*)local_58 + 0x1d8 ) )(),cVar3 == '\0') {
         ( **(code**)( *(long*)local_58 + 0x228 ) )((StrRange*)&local_50);
         String::to_lower();
         iVar4 = String::find((char*)&local_48, 0x1094a9);
         pcVar5 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

         lVar7 = local_50;
         if (iVar4 != -1) {
            String::split((char*)&local_48, SUB81((StrRange*)&local_50, 0), 0x1094b4);
            if (local_40[0] == 0) {
               lVar7 = 0;
            }
 else {
               lVar7 = *(long*)( local_40[0] + -8 );
               if (1 < lVar7) {
                  String::strip_edges(SUB81(this, 0), (bool)( (char)local_40[0] + '\b' ));
                  CowData<String>::_unref((CowData<String>*)local_40);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                  goto LAB_00104ee3;
               }

            }

            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 1, lVar7, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         if (local_50 != 0) {
            LOCK();
            plVar1 = (long*)( local_50 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
            }

         }

      }
;
      local_50 = 0;
      local_48 = "Couldn\'t get the CPU model. Returning an empty string.";
      local_40[0] = 0x36;
      String::parse_latin1((StrRange*)&local_50);
      pcVar5 = "Method/function failed. Returning: \"\"";
      uVar6 = 0xd3;
   }

   _err_print_error("get_processor_name", "platform/linuxbsd/os_linuxbsd.cpp", uVar6, pcVar5, (StrRange*)&local_50, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   *(undefined8*)this = 0;
   local_40[0] = 0;
   local_48 = "";
   String::parse_latin1((StrRange*)this);
   LAB_00104ee3:if (( ( local_58 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)local_58 + 0x140 ))(local_58);
   Memory::free_static(local_58, false);
}
if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return this;}/* OS_LinuxBSD::get_systemd_os_release_info_value(String const&) const */String *OS_LinuxBSD::get_systemd_os_release_info_value(String *param_1) {
   long *plVar1;
   code *pcVar2;
   char cVar3;
   int iVar4;
   int in_EDX;
   long lVar5;
   long in_FS_OFFSET;
   Object *local_60;
   long local_58;
   char *local_50;
   char *local_48;
   long local_40[2];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = (char*)0x0;
   local_40[0] = 0xf;
   local_48 = "/etc/os-release";
   String::parse_latin1((StrRange*)&local_50);
   FileAccess::open((String*)&local_60, (int)(StrRange*)&local_50, (Error*)0x1);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   if (local_60 != (Object*)0x0) {
      while (cVar3 = ( **(code**)( *(long*)local_60 + 0x1d8 ) )(),cVar3 == '\0') {
         ( **(code**)( *(long*)local_60 + 0x228 ) )((String*)&local_58);
         iVar4 = String::find((String*)&local_58, in_EDX);
         lVar5 = local_58;
         if (iVar4 != -1) {
            String::split((char*)&local_48, SUB81((String*)&local_58, 0), 0x1094f4);
            if (local_40[0] == 0) {
               lVar5 = 0;
            }
 else {
               lVar5 = *(long*)( local_40[0] + -8 );
               if (1 < lVar5) {
                  String::strip_edges(SUB81((StrRange*)&local_50, 0), (bool)( (char)local_40[0] + '\b' ));
                  CowData<String>::_unref((CowData<String>*)local_40);
                  String::trim_prefix((char*)&local_48);
                  if (local_50 != local_48) {
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                     local_50 = local_48;
                     local_48 = (char*)0x0;
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
                  String::trim_suffix((char*)param_1);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                  goto LAB_0010517c;
               }

            }

            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 1, lVar5, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

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

      }
;
   }

   *(undefined8*)param_1 = 0;
   local_48 = "";
   local_40[0] = 0;
   String::parse_latin1((StrRange*)param_1);
   LAB_0010517c:if (( ( local_60 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)local_60 + 0x140 ))(local_60);
   Memory::free_static(local_60, false);
}
if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return param_1;}/* OS_LinuxBSD::get_distribution_name() const */OS_LinuxBSD * __thiscall OS_LinuxBSD::get_distribution_name(OS_LinuxBSD *this){
   int iVar1;
   long in_FS_OFFSET;
   undefined8 local_1d0;
   utsname *local_1c8;
   size_t local_1c0;
   utsname local_1b8;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (get_distribution_name() == '\0') {
      iVar1 = __cxa_guard_acquire(&get_distribution_name(), ::distribution_name);
      if (iVar1 != 0) {
         local_1d0 = 0;
         local_1c8 = (utsname*)&_LC134;
         local_1c0 = 4;
         String::parse_latin1((StrRange*)&local_1d0);
         get_systemd_os_release_info_value((String*)&get_distribution_name(), ::distribution_name);
         __cxa_atexit(String::~String, &get_distribution_name(), ::distribution_name, &__dso_handle);
         __cxa_guard_release(&get_distribution_name(), ::distribution_name);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1d0);
      }

   }

   if (( get_distribution_name() ) || ( *(uint*)( get_distribution_name() ) < 2 )) {
      uname(&local_1b8);
      local_1c0 = strlen(local_1b8.sysname);
      local_1c8 = &local_1b8;
      String::parse_latin1((StrRange*)&get_distribution_name(), ::distribution_name);
   }

   *(undefined8*)this = 0;
   if (get_distribution_name() != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)this, (CowData*)&get_distribution_name(), ::distribution_name);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* OS_LinuxBSD::get_version() const */OS_LinuxBSD * __thiscall OS_LinuxBSD::get_version(OS_LinuxBSD *this){
   int iVar1;
   long in_FS_OFFSET;
   undefined8 local_1d0;
   char *local_1c8;
   size_t local_1c0;
   utsname local_1b8;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (get_version()::release_version == '\0') {
      iVar1 = __cxa_guard_acquire(&get_version(), ::release_version);
      if (iVar1 != 0) {
         local_1d0 = 0;
         local_1c8 = "VERSION";
         local_1c0 = 7;
         String::parse_latin1((StrRange*)&local_1d0);
         get_systemd_os_release_info_value((String*)&get_version(), ::release_version);
         __cxa_atexit(String::~String, &get_version(), ::release_version, &__dso_handle);
         __cxa_guard_release(&get_version(), ::release_version);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1d0);
      }

   }

   if (( get_version() ) || ( *(uint*)( get_version() ) < 2 )) {
      uname(&local_1b8);
      local_1c0 = strlen(local_1b8.version);
      local_1c8 = local_1b8.version;
      String::parse_latin1((StrRange*)&get_version(), ::release_version);
   }

   *(undefined8*)this = 0;
   if (get_version()::release_version != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)this, (CowData*)&get_version(), ::release_version);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
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
/* OS_LinuxBSD::alert(String const&, String const&) */void OS_LinuxBSD::alert(OS_LinuxBSD *this, String *param_1, String *param_2) {
   long *plVar1;
   code *pcVar2;
   char *pcVar3;
   char cVar4;
   size_t sVar5;
   undefined **ppuVar6;
   long lVar7;
   long lVar8;
   long in_FS_OFFSET;
   CowData<char32_t> local_c0[8];
   char *local_b8;
   long local_b0;
   undefined8 local_a8;
   long local_a0;
   char *local_98;
   size_t local_90;
   int local_88[8];
   undefined *local_68[4];
   undefined *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68[0] = PTR__LC136_0010c0a0;
   local_68[1] = PTR__LC137_0010c0a8;
   pcVar2 = *(code**)( *(long*)this + 0x170 );
   local_a8 = 0;
   local_98 = "PATH";
   local_68[2] = PTR__LC138_0010c0b0;
   local_68[3] = PTR__LC139_0010c0b8;
   local_90 = 4;
   String::parse_latin1((StrRange*)&local_a8);
   ( *pcVar2 )(local_c0, this, (StrRange*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   String::split((char*)&local_a8, SUB81(local_c0, 0), 0x1094b4);
   local_b8 = (char*)0x0;
   if (local_a0 != 0) {
      lVar8 = 0;
      while (lVar8 < *(long*)( local_a0 + -8 )) {
         ppuVar6 = local_68;
         do {
            if (local_a0 == 0) {
               lVar7 = 0;
               LAB_00105823:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar7, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            lVar7 = *(long*)( local_a0 + -8 );
            if (lVar7 <= lVar8) goto LAB_00105823;
            pcVar3 = *ppuVar6;
            local_b0 = 0;
            sVar5 = 0;
            if (pcVar3 != (char*)0x0) {
               sVar5 = strlen(pcVar3);
            }

            local_98 = pcVar3;
            local_90 = sVar5;
            String::parse_latin1((StrRange*)&local_b0);
            String::path_join((String*)&local_98);
            lVar7 = local_b0;
            if (local_b0 != 0) {
               LOCK();
               plVar1 = (long*)( local_b0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_b0 = 0;
                  Memory::free_static((void*)( lVar7 + -0x10 ), false);
               }

            }

            cVar4 = FileAccess::exists((String*)&local_98);
            pcVar3 = local_98;
            if (cVar4 != '\0') {
               if (local_b8 != local_98) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_98);
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
               break;
            }

            if (local_98 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_98 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_98 = (char*)0x0;
                  Memory::free_static(pcVar3 + -0x10, false);
               }

            }

            ppuVar6 = ppuVar6 + 1;
         }
 while ( ppuVar6 != &local_48 );
         if (( ( local_b8 != (char*)0x0 ) && ( 1 < *(uint*)( local_b8 + -8 ) ) ) || ( lVar8 = local_a0 == 0 )) break;
      }
;
   }

   local_b0 = 0;
   cVar4 = String::ends_with((char*)&local_b8);
   if (cVar4 != '\0') {
      local_98 = (char*)0x0;
      String::parse_latin1((String*)&local_98, "--warning");
      List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_b0, (String*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      local_98 = (char*)0x0;
      String::parse_latin1((String*)&local_98, "--width");
      List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_b0, (String*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      local_98 = (char*)0x0;
      String::parse_latin1((String*)&local_98, "500");
      List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_b0, (String*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      local_98 = (char*)0x0;
      String::parse_latin1((String*)&local_98, "--title");
      List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_b0, (String*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_b0, param_2);
      local_98 = (char*)0x0;
      String::parse_latin1((String*)&local_98, "--text");
      List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_b0, (String*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_b0, param_1);
   }

   cVar4 = String::ends_with((char*)&local_b8);
   if (cVar4 != '\0') {
      local_98 = (char*)0x0;
      String::parse_latin1((String*)&local_98, "--sorry");
      List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_b0, (String*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_b0, param_1);
      local_98 = (char*)0x0;
      String::parse_latin1((String*)&local_98, "--title");
      List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_b0, (String*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_b0, param_2);
   }

   cVar4 = String::ends_with((char*)&local_b8);
   if (cVar4 != '\0') {
      local_98 = (char*)0x0;
      String::parse_latin1((String*)&local_98, "--title");
      List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_b0, (String*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_b0, param_2);
      local_98 = (char*)0x0;
      String::parse_latin1((String*)&local_98, "--msgbox");
      List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_b0, (String*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_b0, param_1);
      local_98 = (char*)0x0;
      String::parse_latin1((String*)&local_98, "0");
      List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_b0, (String*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      local_98 = (char*)0x0;
      String::parse_latin1((String*)&local_98, "0");
      List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_b0, (String*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   }

   cVar4 = String::ends_with((char*)&local_b8);
   if (cVar4 != '\0') {
      local_98 = (char*)0x0;
      String::parse_latin1((String*)&local_98, "-center");
      List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_b0, (String*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      local_98 = (char*)0x0;
      String::parse_latin1((String*)&local_98, "-title");
      List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_b0, (String*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_b0, param_2);
      List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_b0, param_1);
   }

   if (( local_b8 == (char*)0x0 ) || ( *(uint*)( local_b8 + -8 ) < 2 )) {
      Variant::Variant((Variant*)local_88, param_1);
      stringify_variants((Variant*)&local_98);
      __print_line((String*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      if (Variant::needs_deinit[local_88[0]] != '\0') {
         Variant::_clear_internal();
      }

   }
 else {
      ( **(code**)( *(long*)this + 0x108 ) )(this, (CowData<char32_t>*)&local_b8, (List<String,DefaultAllocator>*)&local_b0, 0, 0, 0, 0, 0);
   }

   List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_b0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<String>::_unref((CowData<String>*)&local_a0);
   CowData<char32_t>::_unref(local_c0);
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
/* OS_LinuxBSD::lspci_get_device_value(Vector<String>, String, String) const */long OS_LinuxBSD::lspci_get_device_value(long param_1, long *param_2, long param_3, String *param_4, long *param_5) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   char cVar4;
   int iVar5;
   CowData<char32_t> *pCVar6;
   CowData *pCVar7;
   long lVar8;
   long lVar9;
   CowData *pCVar10;
   long in_FS_OFFSET;
   undefined8 local_a0;
   long local_98;
   undefined1(*local_90)[16];
   long local_88;
   long local_80;
   Vector<String> local_78[8];
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   long local_50[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a0 = 0;
   local_58 = ":";
   local_50[0] = 1;
   String::parse_latin1((StrRange*)&local_a0);
   local_70 = 0;
   CowData<String>::_copy_on_write((CowData<String>*)( param_3 + 8 ));
   pCVar10 = *(CowData**)( param_3 + 8 );
   CowData<String>::_copy_on_write((CowData<String>*)( param_3 + 8 ));
   pCVar7 = *(CowData**)( param_3 + 8 );
   if (pCVar7 != (CowData*)0x0) {
      pCVar7 = pCVar7 + *(long*)( pCVar7 + -8 ) * 8;
   }

   if (pCVar10 == pCVar7) {
      local_70 = 0;
   }
 else {
      do {
         while (true) {
            local_98 = 0;
            local_90 = (undefined1(*) [16])0x0;
            local_68 = 0;
            local_58 = "-d";
            local_50[0] = 2;
            String::parse_latin1((StrRange*)&local_68);
            if (local_90 == (undefined1(*) [16])0x0) {
               local_90 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined4*)local_90[1] = 0;
               *local_90 = (undefined1[16])0x0;
            }

            pCVar6 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
            *(undefined1(*) [16])pCVar6 = (undefined1[16])0x0;
            *(undefined1(*) [16])( pCVar6 + 0x10 ) = (undefined1[16])0x0;
            if (local_68 != 0) {
               CowData<char32_t>::_ref(pCVar6, (CowData*)&local_68);
            }

            lVar8 = local_68;
            lVar9 = *(long*)( *local_90 + 8 );
            *(undefined8*)( pCVar6 + 8 ) = 0;
            *(undefined1(**) [16])( pCVar6 + 0x18 ) = local_90;
            *(long*)( pCVar6 + 0x10 ) = lVar9;
            if (lVar9 != 0) {
               *(CowData<char32_t>**)( lVar9 + 8 ) = pCVar6;
            }

            lVar9 = *(long*)*local_90;
            *(CowData<char32_t>**)( *local_90 + 8 ) = pCVar6;
            if (lVar9 == 0) {
               *(CowData<char32_t>**)*local_90 = pCVar6;
            }

            *(int*)local_90[1] = *(int*)local_90[1] + 1;
            if (local_68 != 0) {
               LOCK();
               plVar1 = (long*)( local_68 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_68 = 0;
                  Memory::free_static((void*)( lVar8 + -0x10 ), false);
               }

               if (local_90 == (undefined1(*) [16])0x0) {
                  local_90 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *(undefined4*)local_90[1] = 0;
                  *local_90 = (undefined1[16])0x0;
               }

            }

            pCVar6 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
            *(undefined1(*) [16])pCVar6 = (undefined1[16])0x0;
            *(undefined1(*) [16])( pCVar6 + 0x10 ) = (undefined1[16])0x0;
            if (*(long*)pCVar10 != 0) {
               CowData<char32_t>::_ref(pCVar6, pCVar10);
            }

            lVar9 = *(long*)( *local_90 + 8 );
            *(undefined8*)( pCVar6 + 8 ) = 0;
            *(undefined1(**) [16])( pCVar6 + 0x18 ) = local_90;
            *(long*)( pCVar6 + 0x10 ) = lVar9;
            if (lVar9 != 0) {
               *(CowData<char32_t>**)( lVar9 + 8 ) = pCVar6;
            }

            lVar9 = *(long*)*local_90;
            *(CowData<char32_t>**)( *local_90 + 8 ) = pCVar6;
            if (lVar9 == 0) {
               *(CowData<char32_t>**)*local_90 = pCVar6;
            }

            *(int*)local_90[1] = *(int*)local_90[1] + 1;
            local_68 = 0;
            local_58 = "-k";
            local_50[0] = 2;
            String::parse_latin1((StrRange*)&local_68);
            if (local_90 == (undefined1(*) [16])0x0) {
               local_90 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined4*)local_90[1] = 0;
               *local_90 = (undefined1[16])0x0;
            }

            pCVar6 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
            *(undefined1(*) [16])pCVar6 = (undefined1[16])0x0;
            *(undefined1(*) [16])( pCVar6 + 0x10 ) = (undefined1[16])0x0;
            if (local_68 != 0) {
               CowData<char32_t>::_ref(pCVar6, (CowData*)&local_68);
            }

            lVar8 = local_68;
            lVar9 = *(long*)( *local_90 + 8 );
            *(undefined8*)( pCVar6 + 8 ) = 0;
            *(undefined1(**) [16])( pCVar6 + 0x18 ) = local_90;
            *(long*)( pCVar6 + 0x10 ) = lVar9;
            if (lVar9 != 0) {
               *(CowData<char32_t>**)( lVar9 + 8 ) = pCVar6;
            }

            lVar9 = *(long*)*local_90;
            *(CowData<char32_t>**)( *local_90 + 8 ) = pCVar6;
            if (lVar9 == 0) {
               *(CowData<char32_t>**)*local_90 = pCVar6;
            }

            *(int*)local_90[1] = *(int*)local_90[1] + 1;
            if (local_68 != 0) {
               LOCK();
               plVar1 = (long*)( local_68 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_68 = 0;
                  Memory::free_static((void*)( lVar8 + -0x10 ), false);
               }

            }

            pcVar2 = *(code**)( *param_2 + 0x108 );
            local_68 = 0;
            local_58 = "lspci";
            local_50[0] = 5;
            String::parse_latin1((StrRange*)&local_68);
            iVar5 = ( *pcVar2 )(param_2, (StrRange*)&local_68, (List<String,DefaultAllocator>*)&local_90, (CowData<char32_t>*)&local_98, 0, 0, 0, 0);
            lVar9 = local_68;
            if (local_68 != 0) {
               LOCK();
               plVar1 = (long*)( local_68 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_68 = 0;
                  Memory::free_static((void*)( lVar9 + -0x10 ), false);
               }

            }

            if (iVar5 != 0) {
               *(undefined8*)( param_1 + 8 ) = 0;
               List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_90);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
               goto LAB_00106679;
            }

            if (( local_98 != 0 ) && ( 1 < *(uint*)( local_98 + -8 ) )) break;
            List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_90);
            lVar9 = local_98;
            if (local_98 != 0) {
               LOCK();
               plVar1 = (long*)( local_98 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_98 = 0;
                  Memory::free_static((void*)( lVar9 + -0x10 ), false);
               }

            }

            pCVar10 = pCVar10 + 8;
            if (pCVar7 == pCVar10) goto LAB_0010657d;
         }
;
         String::split((char*)&local_68, SUB81((CowData<char32_t>*)&local_98, 0), 0x109400);
         CowData<String>::_copy_on_write((CowData<String>*)&local_60);
         lVar8 = local_60;
         CowData<String>::_copy_on_write((CowData<String>*)&local_60);
         lVar9 = local_60;
         if (local_60 != 0) {
            lVar9 = local_60 + *(long*)( local_60 + -8 ) * 8;
         }

         for (; lVar9 != lVar8; lVar8 = lVar8 + 8) {
            String::split((char*)&local_58, SUB81(lVar8, 0), 0x1094b4);
            if (( local_50[0] != 0 ) && ( 1 < *(long*)( local_50[0] + -8 ) )) {
               String::strip_edges(SUB81((String*)&local_80, 0), SUB81(local_50[0], 0));
               cVar4 = String::operator ==((String*)&local_80, param_4);
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

               if (cVar4 != '\0') {
                  if (local_50[0] == 0) {
                     lVar9 = 0;
                  }
 else {
                     lVar9 = *(long*)( local_50[0] + -8 );
                     if (1 < lVar9) {
                        String::strip_edges(SUB81((CowData<char32_t>*)&local_88, 0), (bool)( (char)local_50[0] + '\b' ));
                        if (( ( *param_5 == 0 ) || ( *(uint*)( *param_5 + -8 ) < 2 ) ) || ( iVar5 = iVar5 == -1 )) {
                           local_80 = 0;
                           if (local_88 != 0) {
                              CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)&local_88);
                           }

                           Vector<String>::push_back(local_78, (String*)&local_80);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                        CowData<String>::_unref((CowData<String>*)local_50);
                        break;
                     }

                  }

                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 1, lVar9, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

            }

            CowData<String>::_unref((CowData<String>*)local_50);
         }

         pCVar10 = pCVar10 + 8;
         CowData<String>::_unref((CowData<String>*)&local_60);
         List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_90);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      }
 while ( pCVar7 != pCVar10 );
   }

   LAB_0010657d:*(undefined8*)( param_1 + 8 ) = local_70;
   local_70 = 0;
   LAB_00106679:CowData<String>::_unref((CowData<String>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* OS_LinuxBSD::lspci_device_filter(Vector<String>, String, String, String) const */long OS_LinuxBSD::lspci_device_filter(long param_1, long *param_2, long param_3, undefined8 param_4, String *param_5, long *param_6) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   char *pcVar4;
   char cVar5;
   int iVar6;
   CowData<char32_t> *pCVar7;
   String *pSVar8;
   bool bVar9;
   long lVar10;
   long lVar11;
   String *pSVar12;
   long in_FS_OFFSET;
   undefined8 local_98;
   long local_90;
   undefined1(*local_88)[16];
   long local_80;
   Vector<String> local_78[8];
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   long local_50[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = ":";
   local_98 = 0;
   local_50[0] = 1;
   String::parse_latin1((StrRange*)&local_98);
   local_70 = 0;
   CowData<String>::_copy_on_write((CowData<String>*)( param_3 + 8 ));
   pSVar12 = *(String**)( param_3 + 8 );
   CowData<String>::_copy_on_write((CowData<String>*)( param_3 + 8 ));
   pSVar8 = *(String**)( param_3 + 8 );
   if (pSVar8 != (String*)0x0) {
      pSVar8 = pSVar8 + *(long*)( pSVar8 + -8 ) * 8;
   }

   if (pSVar12 == pSVar8) {
      local_70 = 0;
   }
 else {
      do {
         while (true) {
            local_90 = 0;
            local_88 = (undefined1(*) [16])0x0;
            local_68 = 0;
            local_58 = "-d";
            local_50[0] = 2;
            String::parse_latin1((StrRange*)&local_68);
            if (local_88 == (undefined1(*) [16])0x0) {
               local_88 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined4*)local_88[1] = 0;
               *local_88 = (undefined1[16])0x0;
            }

            pCVar7 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
            *(undefined1(*) [16])pCVar7 = (undefined1[16])0x0;
            *(undefined1(*) [16])( pCVar7 + 0x10 ) = (undefined1[16])0x0;
            if (local_68 != 0) {
               CowData<char32_t>::_ref(pCVar7, (CowData*)&local_68);
            }

            lVar11 = local_68;
            lVar10 = *(long*)( *local_88 + 8 );
            *(undefined1(**) [16])( pCVar7 + 0x18 ) = local_88;
            *(undefined8*)( pCVar7 + 8 ) = 0;
            *(long*)( pCVar7 + 0x10 ) = lVar10;
            if (lVar10 != 0) {
               *(CowData<char32_t>**)( lVar10 + 8 ) = pCVar7;
            }

            lVar10 = *(long*)*local_88;
            *(CowData<char32_t>**)( *local_88 + 8 ) = pCVar7;
            if (lVar10 == 0) {
               *(CowData<char32_t>**)*local_88 = pCVar7;
            }

            *(int*)local_88[1] = *(int*)local_88[1] + 1;
            if (local_68 != 0) {
               LOCK();
               plVar1 = (long*)( local_68 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_68 = 0;
                  Memory::free_static((void*)( lVar11 + -0x10 ), false);
               }

            }

            String::operator +((String*)&local_68, pSVar12);
            String::operator +((String*)&local_58, (String*)&local_68);
            if (local_88 == (undefined1(*) [16])0x0) {
               local_88 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined4*)local_88[1] = 0;
               *local_88 = (undefined1[16])0x0;
            }

            pCVar7 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
            *(undefined1(*) [16])pCVar7 = (undefined1[16])0x0;
            *(undefined1(*) [16])( pCVar7 + 0x10 ) = (undefined1[16])0x0;
            if (local_58 != (undefined*)0x0) {
               CowData<char32_t>::_ref(pCVar7, (CowData*)&local_58);
            }

            pcVar4 = local_58;
            lVar10 = *(long*)( *local_88 + 8 );
            *(undefined1(**) [16])( pCVar7 + 0x18 ) = local_88;
            *(undefined8*)( pCVar7 + 8 ) = 0;
            *(long*)( pCVar7 + 0x10 ) = lVar10;
            if (lVar10 != 0) {
               *(CowData<char32_t>**)( lVar10 + 8 ) = pCVar7;
            }

            lVar10 = *(long*)*local_88;
            *(CowData<char32_t>**)( *local_88 + 8 ) = pCVar7;
            if (lVar10 == 0) {
               *(CowData<char32_t>**)*local_88 = pCVar7;
            }

            *(int*)local_88[1] = *(int*)local_88[1] + 1;
            if (local_58 != (undefined*)0x0) {
               LOCK();
               plVar1 = (long*)( local_58 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_58 = (undefined*)0x0;
                  Memory::free_static(pcVar4 + -0x10, false);
               }

            }

            lVar10 = local_68;
            if (local_68 != 0) {
               LOCK();
               plVar1 = (long*)( local_68 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_68 = 0;
                  Memory::free_static((void*)( lVar10 + -0x10 ), false);
               }

            }

            local_68 = 0;
            local_58 = "-vmm";
            local_50[0] = 4;
            String::parse_latin1((StrRange*)&local_68);
            if (local_88 == (undefined1(*) [16])0x0) {
               local_88 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined4*)local_88[1] = 0;
               *local_88 = (undefined1[16])0x0;
            }

            pCVar7 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
            *(undefined1(*) [16])pCVar7 = (undefined1[16])0x0;
            *(undefined1(*) [16])( pCVar7 + 0x10 ) = (undefined1[16])0x0;
            if (local_68 != 0) {
               CowData<char32_t>::_ref(pCVar7, (CowData*)&local_68);
            }

            lVar11 = local_68;
            lVar10 = *(long*)( *local_88 + 8 );
            *(undefined1(**) [16])( pCVar7 + 0x18 ) = local_88;
            *(undefined8*)( pCVar7 + 8 ) = 0;
            *(long*)( pCVar7 + 0x10 ) = lVar10;
            if (lVar10 != 0) {
               *(CowData<char32_t>**)( lVar10 + 8 ) = pCVar7;
            }

            lVar10 = *(long*)*local_88;
            *(CowData<char32_t>**)( *local_88 + 8 ) = pCVar7;
            if (lVar10 == 0) {
               *(CowData<char32_t>**)*local_88 = pCVar7;
            }

            *(int*)local_88[1] = *(int*)local_88[1] + 1;
            if (local_68 != 0) {
               LOCK();
               plVar1 = (long*)( local_68 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_68 = 0;
                  Memory::free_static((void*)( lVar11 + -0x10 ), false);
               }

            }

            pcVar2 = *(code**)( *param_2 + 0x108 );
            local_68 = 0;
            local_58 = "lspci";
            local_50[0] = 5;
            String::parse_latin1((StrRange*)&local_68);
            iVar6 = ( *pcVar2 )(param_2, (String*)&local_68, (List<String,DefaultAllocator>*)&local_88, (CowData<char32_t>*)&local_90, 0, 0, 0, 0);
            lVar10 = local_68;
            if (local_68 != 0) {
               LOCK();
               plVar1 = (long*)( local_68 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_68 = 0;
                  Memory::free_static((void*)( lVar10 + -0x10 ), false);
               }

            }

            if (iVar6 != 0) {
               *(undefined8*)( param_1 + 8 ) = 0;
               List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_88);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
               goto LAB_00106ef9;
            }

            if (( local_90 != 0 ) && ( 1 < *(uint*)( local_90 + -8 ) )) break;
            List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_88);
            lVar10 = local_90;
            if (local_90 != 0) {
               LOCK();
               plVar1 = (long*)( local_90 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_90 = 0;
                  Memory::free_static((void*)( lVar10 + -0x10 ), false);
               }

            }

            pSVar12 = pSVar12 + 8;
            if (pSVar8 == pSVar12) goto LAB_00106dfd;
         }
;
         String::split((char*)&local_68, SUB81((CowData<char32_t>*)&local_90, 0), 0x109400);
         CowData<String>::_copy_on_write((CowData<String>*)&local_60);
         lVar11 = local_60;
         CowData<String>::_copy_on_write((CowData<String>*)&local_60);
         lVar10 = local_60;
         if (local_60 != 0) {
            lVar10 = local_60 + *(long*)( local_60 + -8 ) * 8;
         }

         for (; lVar11 != lVar10; lVar11 = lVar11 + 8) {
            String::split((char*)&local_58, SUB81(lVar11, 0), 0x1094b4);
            if (( local_50[0] != 0 ) && ( 1 < *(long*)( local_50[0] + -8 ) )) {
               bVar9 = SUB81((String*)&local_80, 0);
               String::strip_edges(bVar9, SUB81(local_50[0], 0));
               cVar5 = String::operator ==((String*)&local_80, param_5);
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

               if (cVar5 != '\0') {
                  if (( *param_6 == 0 ) || ( *(uint*)( *param_6 + -8 ) < 2 )) {
                     LAB_00106e8f:local_80 = 0;
                     if (*(long*)pSVar12 != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)pSVar12);
                     }

                     Vector<String>::push_back(local_78, (String*)&local_80);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
                  }
 else {
                     if (local_50[0] == 0) {
                        lVar10 = 0;
                        LAB_00106f42:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 1, lVar10, "p_index", "size()", "", false, true);
                        _err_flush_stdout();
                        /* WARNING: Does not return */
                        pcVar2 = (code*)invalidInstructionException();
                        ( *pcVar2 )();
                     }

                     lVar10 = *(long*)( local_50[0] + -8 );
                     if (lVar10 < 2) goto LAB_00106f42;
                     String::strip_edges(bVar9, (bool)( (char)local_50[0] + '\b' ));
                     iVar6 = String::find((String*)&local_80, (int)param_6);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
                     if (iVar6 != -1) goto LAB_00106e8f;
                  }

                  CowData<String>::_unref((CowData<String>*)local_50);
                  break;
               }

            }

            CowData<String>::_unref((CowData<String>*)local_50);
         }

         pSVar12 = pSVar12 + 8;
         CowData<String>::_unref((CowData<String>*)&local_60);
         List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      }
 while ( pSVar8 != pSVar12 );
   }

   LAB_00106dfd:*(undefined8*)( param_1 + 8 ) = local_70;
   local_70 = 0;
   LAB_00106ef9:CowData<String>::_unref((CowData<String>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OS_LinuxBSD::get_system_font_path_for_text(String const&, String const&, String const&, String
   const&, int, int, bool) const */String *OS_LinuxBSD::get_system_font_path_for_text(String *param_1, String *param_2, String *param_3, String *param_4, int param_5, int param_6, bool param_7) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined4 uVar4;
   int iVar5;
   long lVar6;
   undefined8 uVar7;
   undefined8 *puVar8;
   undefined8 uVar9;
   long lVar10;
   undefined **ppuVar11;
   long lVar12;
   long in_FS_OFFSET;
   undefined3 in_stack_00000009;
   int in_stack_00000010;
   char in_stack_00000018;
   undefined1 local_6c[4];
   long local_68;
   long local_60;
   Vector<String> local_58[8];
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2[0x160] == (String)0x0) {
      _err_print_error("get_system_font_path_for_text", "platform/linuxbsd/os_linuxbsd.cpp", 0x2ff, "Method/function failed. Returning: Vector<String>()", "Unable to load fontconfig, system font support is disabled.", 0, 0);
      *(undefined8*)( param_1 + 8 ) = 0;
   }
 else {
      local_50 = 0;
      ppuVar11= &get_system_fonts()::allowed_formats
      ;
      do {
         while (lVar6 = ( *_FcPatternCreate_dylibloader_wrapper_fontconfig )(),lVar6 != 0) {
            ( *_FcPatternAddBool_dylibloader_wrapper_fontconfig )(lVar6, "scalable", 1);
            ( *_FcPatternAddString_dylibloader_wrapper_fontconfig )(lVar6, "fontformat", *ppuVar11);
            pcVar3 = _FcPatternAddString_dylibloader_wrapper_fontconfig;
            String::utf8();
            uVar7 = CharString::get_data();
            ( *pcVar3 )(lVar6, "family", uVar7);
            lVar10 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar1 = (long*)( local_60 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar10 + -0x10 ), false);
               }

            }

            uVar4 = _weight_to_fc((OS_LinuxBSD*)param_2, _param_7);
            ( *_FcPatternAddInteger_dylibloader_wrapper_fontconfig )(lVar6, "weight", uVar4);
            uVar7 = 0x32;
            if (( ( ( ( 0x37 < in_stack_00000010 ) && ( uVar7 = 0x3f ),0x44 < in_stack_00000010 ) ) && ( uVar7 = 0x4b ),0x50 < in_stack_00000010 )) &&( ( uVar7 = 0x57 ),0x5c < in_stack_00000010 && ( uVar7 = 0x69 < in_stack_00000010 ) ) && ( ( uVar7 = 0x71 ),0x88 < in_stack_00000010 && ( ( uVar7 = 0x7d ),0x8f < in_stack_00000010 && ( uVar7 = in_stack_00000010 < 0xa2 ) ) );
         }
;
         ( *_FcPatternAddInteger_dylibloader_wrapper_fontconfig )(lVar6, "width", uVar7);
         ( *_FcPatternAddInteger_dylibloader_wrapper_fontconfig )(lVar6, "slant", -(in_stack_00000018 != '\0') & 100);
         uVar7 = ( *_FcCharSetCreate_dylibloader_wrapper_fontconfig )();
         lVar10 = *(long*)param_4;
         for (lVar12 = 0; ( lVar10 != 0 && ( lVar2 = *(long*)( lVar10 + -8 ) ),(int)lVar12 < (int)lVar2 ); lVar12 = lVar12 + 1) {
            if (lVar12 == lVar2) {
               puVar8 = &String::_null;
            }
 else {
               if (lVar2 <= lVar12) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar12, lVar2, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               puVar8 = (undefined8*)( lVar10 + lVar12 * 4 );
            }

            ( *_FcCharSetAddChar_dylibloader_wrapper_fontconfig )(uVar7, *(undefined4*)puVar8);
            lVar10 = *(long*)param_4;
         }

         ( *_FcPatternAddCharSet_dylibloader_wrapper_fontconfig )(lVar6, "charset", uVar7);
         uVar9 = ( *_FcLangSetCreate_dylibloader_wrapper_fontconfig )();
         pcVar3 = _FcLangSetAdd_dylibloader_wrapper_fontconfig;
         String::utf8();
         CharString::get_data();
         ( *pcVar3 )(uVar9);
         lVar10 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
            }

         }

         ( *_FcPatternAddLangSet_dylibloader_wrapper_fontconfig )(lVar6, &_LC173, uVar9);
         ( *_FcConfigSubstitute_dylibloader_wrapper_fontconfig )(0, lVar6, 0);
         ( *_FcDefaultSubstitute_dylibloader_wrapper_fontconfig )(lVar6);
         lVar10 = ( *_FcFontMatch_dylibloader_wrapper_fontconfig )(0, lVar6, local_6c);
         if (lVar10 != 0) {
            local_68 = 0;
            iVar5 = ( *_FcPatternGetString_dylibloader_wrapper_fontconfig )(lVar10, &_LC50, 0, &local_68);
            if (( iVar5 == 0 ) && ( local_68 != 0 )) {
               String::utf8((char*)&local_60, (int)local_68);
               Vector<String>::push_back(local_58, (CowData<char32_t>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            }

            ( *_FcPatternDestroy_dylibloader_wrapper_fontconfig )(lVar10);
         }

         ppuVar11 = ppuVar11 + 1;
         ( *_FcPatternDestroy_dylibloader_wrapper_fontconfig )(lVar6);
         ( *_FcCharSetDestroy_dylibloader_wrapper_fontconfig )(uVar7);
         ( *_FcLangSetDestroy_dylibloader_wrapper_fontconfig )(uVar9);
         if (ppuVar11 == &PTR__LC136_0010c0a0) goto LAB_00107012;
      }
 while ( ppuVar11 != &PTR__LC136_0010c0a0 );
      LAB_00107012:*(undefined8*)( param_1 + 8 ) = local_50;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OS_LinuxBSD::get_system_fonts() const */long OS_LinuxBSD::get_system_fonts(void) {
   long *plVar1;
   int iVar2;
   long lVar3;
   int *piVar4;
   undefined8 uVar5;
   int iVar6;
   undefined **ppuVar7;
   void *pvVar8;
   long in_RSI;
   long in_RDI;
   long lVar9;
   long *plVar10;
   long in_FS_OFFSET;
   bool bVar11;
   long local_98;
   CowData<char32_t> local_90[8];
   Vector<String> local_88[8];
   undefined8 local_80;
   long local_78[2];
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(char*)( in_RSI + 0x160 ) == '\0') {
      _err_print_error("get_system_fonts", "platform/linuxbsd/os_linuxbsd.cpp", 0x2a3, "Method/function failed. Returning: Vector<String>()", "Unable to load fontconfig, system font support is disabled.", 0, 0);
      *(undefined8*)( in_RDI + 8 ) = 0;
   }
 else {
      local_48 = 2;
      ppuVar7= &get_system_fonts()::allowed_formats
      ;
      local_80 = 0;
      local_68 = (undefined1[16])0x0;
      local_58 = (undefined1[16])0x0;
      do {
         lVar3 = ( *_FcPatternCreate_dylibloader_wrapper_fontconfig )();
         if (lVar3 == 0) {
            _err_print_error("get_system_fonts", "platform/linuxbsd/os_linuxbsd.cpp", 0x2ab, "Condition \"!pattern\" is true. Continuing.", 0, 0);
         }
 else {
            ( *_FcPatternAddBool_dylibloader_wrapper_fontconfig )(lVar3, "scalable", 1);
            ( *_FcPatternAddString_dylibloader_wrapper_fontconfig )(lVar3, "fontformat", *ppuVar7);
            piVar4 = (int*)( *_FcFontList_dylibloader_wrapper_fontconfig )(*(undefined8*)( in_RSI + 0x168 ), lVar3, *(undefined8*)( in_RSI + 0x170 ));
            if (piVar4 != (int*)0x0) {
               lVar9 = 0;
               if (0 < *piVar4) {
                  do {
                     local_98 = 0;
                     iVar2 = ( *_FcPatternGetString_dylibloader_wrapper_fontconfig )(*(undefined8*)( *(long*)( piVar4 + 2 ) + lVar9 * 8 ), "family", 0, &local_98);
                     if (( iVar2 == 0 ) && ( local_98 != 0 )) {
                        String::utf8((char*)local_90, (int)local_98);
                        HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String*)local_78);
                        CowData<char32_t>::_unref(local_90);
                     }

                     lVar9 = lVar9 + 1;
                  }
 while ( (int)lVar9 < *piVar4 );
               }

               ( *_FcFontSetDestroy_dylibloader_wrapper_fontconfig )(piVar4);
            }

            ( *_FcPatternDestroy_dylibloader_wrapper_fontconfig )(lVar3);
         }

         ppuVar7 = ppuVar7 + 1;
      }
 while ( ppuVar7 != &PTR__LC136_0010c0a0 );
      iVar2 = local_48._4_4_;
      uVar5 = 0;
      if (local_48._4_4_ != 0) {
         iVar6 = 1;
         plVar10 = (long*)local_68._0_8_;
         do {
            local_78[0] = 0;
            plVar1 = (long*)( *plVar10 + -0x10 );
            if (*plVar10 == 0) {
               Vector<String>::push_back(local_88);
            }
 else {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_00107552;
                  LOCK();
                  lVar9 = *plVar1;
                  bVar11 = lVar3 == lVar9;
                  if (bVar11) {
                     *plVar1 = lVar3 + 1;
                     lVar9 = lVar3;
                  }

                  UNLOCK();
               }
 while ( !bVar11 );
               if (lVar9 != -1) {
                  local_78[0] = *plVar10;
               }

               LAB_00107552:lVar3 = local_78[0];
               Vector<String>::push_back(local_88);
               if (lVar3 != 0) {
                  LOCK();
                  plVar1 = (long*)( lVar3 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     Memory::free_static((void*)( local_78[0] + -0x10 ), false);
                  }

               }

            }

            uVar5 = local_80;
            if (iVar2 <= iVar6) break;
            iVar6 = iVar6 + 1;
            plVar10 = plVar10 + 1;
         }
 while ( true );
      }

      pvVar8 = (void*)local_68._0_8_;
      *(undefined8*)( in_RDI + 8 ) = uVar5;
      if ((void*)local_68._0_8_ != (void*)0x0) {
         if (local_48._4_4_ != 0) {
            if (*(uint*)( hash_table_size_primes + ( local_48 & 0xffffffff ) * 4 ) != 0) {
               memset((void*)local_58._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_48 & 0xffffffff ) * 4 ) * 4);
            }

            lVar3 = 0;
            do {
               plVar10 = (long*)( (long)pvVar8 + lVar3 * 8 );
               if (*plVar10 != 0) {
                  LOCK();
                  plVar1 = (long*)( *plVar10 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar9 = *plVar10;
                     *plVar10 = 0;
                     Memory::free_static((void*)( lVar9 + -0x10 ), false);
                  }

                  pvVar8 = (void*)local_68._0_8_;
               }

               lVar3 = lVar3 + 1;
            }
 while ( (uint)lVar3 < local_48._4_4_ );
            local_48 = local_48 & 0xffffffff;
            if (pvVar8 == (void*)0x0) goto LAB_00107628;
         }

         Memory::free_static(pvVar8, false);
         Memory::free_static((void*)local_58._0_8_, false);
         Memory::free_static((void*)local_68._8_8_, false);
         Memory::free_static((void*)local_58._8_8_, false);
      }

   }

   LAB_00107628:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return in_RDI;
}
/* OS_LinuxBSD::finalize() */void OS_LinuxBSD::finalize(OS_LinuxBSD *this) {
   Object *this_00;
   JoypadLinux *this_01;
   char cVar1;
   bool bVar2;
   this_00 = *(Object**)( this + 0x4f8 );
   if (this_00 == (Object*)0x0) goto LAB_001078d1;
   cVar1 = predelete_handler(this_00);
   if (cVar1 == '\0') goto LAB_001078d1;
   if (*(code**)( *(long*)this_00 + 0x140 ) == MainLoop::~MainLoop) {
      bVar2 = StringName::configured != '\0';
      *(code**)this_00 = Object::~Object;
      if (bVar2) {
         if (*(long*)( this_00 + 0x1c0 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_001078bf;
         }

         if (*(long*)( this_00 + 0x1a8 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_001078bf;
         }

         if (*(long*)( this_00 + 400 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_001078bf;
         }

         if (*(long*)( this_00 + 0x178 ) != 0) {
            StringName::unref();
         }

      }

      LAB_001078bf:Object::~Object(this_00);
   }
 else {
      ( **(code**)( *(long*)this_00 + 0x140 ) )(this_00);
   }

   Memory::free_static(this_00, false);
   LAB_001078d1:*(undefined8*)( this + 0x4f8 ) = 0;
   MIDIDriverALSAMidi::close();
   this_01 = *(JoypadLinux**)( this + 0x178 );
   if (this_01 != (JoypadLinux*)0x0) {
      JoypadLinux::~JoypadLinux(this_01);
      Memory::free_static(this_01, false);
      return;
   }

   return;
}
/* OS_LinuxBSD::get_video_adapter_driver_info() const */long OS_LinuxBSD::get_video_adapter_driver_info(void) {
   CowData *pCVar1;
   code *pcVar2;
   Object *pOVar3;
   long lVar4;
   char cVar5;
   int iVar6;
   long lVar7;
   long *plVar8;
   long lVar9;
   long *in_RSI;
   bool bVar10;
   long in_RDI;
   Vector<String> *pVVar11;
   long lVar12;
   long in_FS_OFFSET;
   CowData<char32_t> local_2e8[8];
   CowData<char32_t> local_2e0[8];
   long local_2d8;
   long local_2d0;
   undefined8 local_2c8;
   long local_2c0;
   long local_2b8;
   long local_2b0;
   long local_2a8;
   long local_2a0;
   long local_298;
   long local_290;
   long local_288;
   long local_280;
   undefined8 local_278;
   long local_270;
   Vector<String> local_268[8];
   long local_260;
   Vector<String> local_258[8];
   long local_250;
   Vector<String> local_248[8];
   long local_240;
   char local_238[8];
   long local_230;
   undefined8 local_228;
   CowData *local_220;
   undefined8 local_218;
   CowData *local_210;
   undefined8 local_208;
   CowData *local_200;
   Object *local_1f8;
   long local_1f0;
   char *local_1e8;
   long local_1e0;
   RegEx local_1d8[408];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar7 = RenderingServer::get_singleton();
   if (lVar7 == 0) {
      *(undefined8*)( in_RDI + 8 ) = 0;
      goto LAB_001079a3;
   }

   if (( get_video_adapter_driver_info() ) && ( iVar6 = iVar6 != 0 )) {
      get_video_adapter_driver_info()
      __cxa_atexit(Vector<String>::~Vector, get_video_adapter_driver_info(), ::info, &__dso_handle);
      __cxa_guard_release(&get_video_adapter_driver_info(), ::info);
   }

   if (get_video_adapter_driver_info()._8_8_ != 0) {
      *(undefined8*)( in_RDI + 8 ) = 0;
      if (get_video_adapter_driver_info()._8_8_ != 0) {
         CowData<String>::_ref((CowData<String>*)( in_RDI + 8 ), (CowData*)( get_video_adapter_driver_info() ));
      }

      goto LAB_001079a3;
   }

   plVar8 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar8 + 0x1208 ) )(local_2e8, plVar8);
   plVar8 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar8 + 0x1210 ) )(local_2e0, plVar8);
   String::trim_prefix((String*)&local_1e8);
   String::strip_edges(SUB81((CowData<char32_t>*)&local_2d8, 0), SUB81((String*)&local_1e8, 0));
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
   local_2d0 = 0;
   local_2c8 = 0;
   local_1e8 = (char*)0x0;
   String::parse_latin1((String*)&local_1e8, "-n");
   List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_2c8, (String*)&local_1e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
   pcVar2 = *(code**)( *in_RSI + 0x108 );
   local_1e8 = (char*)0x0;
   String::parse_latin1((String*)&local_1e8, "lspci");
   iVar6 = ( *pcVar2 )();
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
   if (( ( iVar6 == 0 ) && ( local_2d0 != 0 ) ) && ( 1 < *(uint*)( local_2d0 + -8 ) )) {
      local_2c0 = 0;
      String::parse_latin1((String*)&local_2c0, "0300");
      local_2b8 = 0;
      local_1e8 = "0302";
      local_1e0 = 4;
      String::parse_latin1((StrRange*)&local_2b8);
      local_2b0 = 0;
      String::parse_latin1((String*)&local_2b0, "0380");
      local_260 = 0;
      local_250 = 0;
      local_240 = 0;
      RegEx::RegEx(local_1d8);
      local_1e8 = "^[a-f0-9]{4}:[a-f0-9]{4}$";
      local_1f8 = (Object*)0x0;
      local_1e0 = 0x19;
      String::parse_latin1((StrRange*)&local_1f8);
      RegEx::compile((String*)local_1d8, SUB81((StrRange*)&local_1f8, 0));
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
      String::split(local_238, SUB81((CowData<char32_t>*)&local_2d0, 0), 0x109400);
      CowData<String>::_copy_on_write((CowData<String>*)&local_230);
      lVar7 = local_230;
      CowData<String>::_copy_on_write((CowData<String>*)&local_230);
      if (local_230 == 0) {
         lVar9 = 0;
      }
 else {
         lVar9 = *(long*)( local_230 + -8 );
      }

      for (; local_230 + lVar9 * 8 != lVar7; lVar7 = lVar7 + 8) {
         String::split((char*)&local_1e8, SUB81(lVar7, 0), 0x109643);
         if (( local_1e0 != 0 ) && ( 2 < *(long*)( local_1e0 + -8 ) )) {
            String::trim_suffix((char*)&local_208);
            lVar4 = local_1e0;
            if (local_1e0 == 0) {
               lVar12 = 0;
            }
 else {
               lVar12 = *(long*)( local_1e0 + -8 );
               if (2 < lVar12) {
                  pCVar1 = (CowData*)( local_1e0 + 0x10 );
                  RegEx::search((String*)&local_1f8, (int)local_1d8, (int)pCVar1);
                  if (local_1f8 == (Object*)0x0) {
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
                     goto LAB_00107e44;
                  }

                  cVar5 = RefCounted::unreference();
                  pOVar3 = local_1f8;
                  if (( cVar5 != '\0' ) && ( cVar5 = cVar5 != '\0' )) {
                     ( **(code**)( *(long*)pOVar3 + 0x140 ) )();
                     Memory::free_static(pOVar3, false);
                  }

                  cVar5 = String::operator ==((String*)&local_208, (String*)&local_2c0);
                  if (cVar5 == '\0') {
                     cVar5 = String::operator ==((String*)&local_208, (String*)&local_2b8);
                     if (cVar5 != '\0') {
                        local_1f8 = (Object*)0x0;
                        if (*(long*)( lVar4 + 0x10 ) != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_1f8, pCVar1);
                        }

                        pVVar11 = local_258;
                        goto LAB_00107ddb;
                     }

                     cVar5 = String::operator ==((String*)&local_208, (String*)&local_2b0);
                     if (cVar5 != '\0') {
                        local_1f8 = (Object*)0x0;
                        if (*(long*)( lVar4 + 0x10 ) != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_1f8, pCVar1);
                        }

                        pVVar11 = local_248;
                        goto LAB_00107ddb;
                     }

                  }
 else {
                     local_1f8 = (Object*)0x0;
                     if (*(long*)( lVar4 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_1f8, pCVar1);
                     }

                     pVVar11 = local_268;
                     LAB_00107ddb:Vector<String>::push_back(pVVar11, (StrRange*)&local_1f8);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
                  CowData<String>::_unref((CowData<String>*)&local_1e0);
                  goto LAB_00107e08;
               }

            }

            lVar7 = 2;
            goto LAB_00108956;
         }

         LAB_00107e44:CowData<String>::_unref((CowData<String>*)&local_1e0);
         LAB_00107e08:}local_2a8 = 0;
         String::parse_latin1((String*)&local_2a8, "Device");
         local_208 = 0;
         if (local_2d8 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_208, (CowData*)&local_2d8);
         }

         local_218 = 0;
         if (local_2a8 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_218, (CowData*)&local_2a8);
         }

         local_228 = 0;
         if (local_2c0 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_228, (CowData*)&local_2c0);
         }

         lVar7 = local_260;
         local_1f0 = 0;
         if (local_260 != 0) {
            CowData<String>::_ref((CowData<String>*)&local_1f0, (CowData*)&local_260);
         }

         lspci_device_filter((String*)&local_1e8, in_RSI, (StrRange*)&local_1f8, (CowData<char32_t>*)&local_228, (CowData<char32_t>*)&local_218, (String*)&local_208);
         lVar9 = local_1e0;
         if (lVar7 != local_1e0) {
            CowData<String>::_unref((CowData<String>*)&local_260);
            local_1e0 = 0;
            local_260 = lVar9;
         }

         CowData<String>::_unref((CowData<String>*)&local_1e0);
         CowData<String>::_unref((CowData<String>*)&local_1f0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_218);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
         local_208 = 0;
         if (local_2d8 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_208, (CowData*)&local_2d8);
         }

         local_218 = 0;
         if (local_2a8 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_218, (CowData*)&local_2a8);
         }

         local_228 = 0;
         if (local_2b8 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_228, (CowData*)&local_2b8);
         }

         lVar7 = local_250;
         local_1f0 = 0;
         if (local_250 != 0) {
            CowData<String>::_ref((CowData<String>*)&local_1f0, (CowData*)&local_250);
         }

         lspci_device_filter((String*)&local_1e8, in_RSI, (StrRange*)&local_1f8, (CowData<char32_t>*)&local_228, (CowData<char32_t>*)&local_218, (String*)&local_208);
         lVar4 = local_1e0;
         if (lVar7 != local_1e0) {
            CowData<String>::_unref((CowData<String>*)&local_250);
            local_1e0 = 0;
            local_250 = lVar4;
         }

         CowData<String>::_unref((CowData<String>*)&local_1e0);
         CowData<String>::_unref((CowData<String>*)&local_1f0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_218);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
         local_208 = 0;
         if (local_2d8 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_208, (CowData*)&local_2d8);
         }

         local_218 = 0;
         if (local_2a8 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_218, (CowData*)&local_2a8);
         }

         local_228 = 0;
         if (local_2b0 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_228, (CowData*)&local_2b0);
         }

         lVar7 = local_240;
         local_1f0 = 0;
         if (local_240 != 0) {
            CowData<String>::_ref((CowData<String>*)&local_1f0, (CowData*)&local_240);
         }

         lspci_device_filter((String*)&local_1e8, in_RSI, (StrRange*)&local_1f8, (CowData<char32_t>*)&local_228, (CowData<char32_t>*)&local_218, (String*)&local_208);
         lVar12 = local_1e0;
         if (lVar7 != local_1e0) {
            CowData<String>::_unref((CowData<String>*)&local_240);
            local_1e0 = 0;
            local_240 = lVar12;
         }

         CowData<String>::_unref((CowData<String>*)&local_1e0);
         CowData<String>::_unref((CowData<String>*)&local_1f0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_218);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
         local_2a0 = 0;
         String::parse_latin1((String*)&local_2a0, "Kernel driver in use");
         local_298 = 0;
         String::parse_latin1((String*)&local_298, "vfio");
         local_1f8 = (Object*)0x0;
         if (local_298 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_1f8, (CowData*)&local_298);
         }

         local_208 = 0;
         if (local_2a0 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_208, (CowData*)&local_2a0);
         }

         local_1e0 = 0;
         if (lVar9 != 0) {
            CowData<String>::_ref((CowData<String>*)&local_1e0, (CowData*)&local_260);
         }

         lspci_get_device_value((CowData<char32_t>*)&local_228, in_RSI, (String*)&local_1e8, (String*)&local_208, (StrRange*)&local_1f8);
         CowData<String>::_unref((CowData<String>*)&local_1e0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
         local_1f8 = (Object*)0x0;
         if (local_298 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_1f8, (CowData*)&local_298);
         }

         local_208 = 0;
         if (local_2a0 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_208, (CowData*)&local_2a0);
         }

         local_1e0 = 0;
         if (lVar4 != 0) {
            CowData<String>::_ref((CowData<String>*)&local_1e0, (CowData*)&local_250);
         }

         lspci_get_device_value((CowData<char32_t>*)&local_218, in_RSI, (String*)&local_1e8, (String*)&local_208, (StrRange*)&local_1f8);
         CowData<String>::_unref((CowData<String>*)&local_1e0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
         local_1f8 = (Object*)0x0;
         if (local_298 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_1f8, (CowData*)&local_298);
         }

         local_270 = 0;
         if (local_2a0 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_270, (CowData*)&local_2a0);
         }

         local_1e0 = 0;
         if (lVar12 != 0) {
            CowData<String>::_ref((CowData<String>*)&local_1e0, (CowData*)&local_240);
         }

         lspci_get_device_value((String*)&local_208, in_RSI, (String*)&local_1e8, (CowData<char32_t>*)&local_270, (StrRange*)&local_1f8);
         CowData<String>::_unref((CowData<String>*)&local_1e0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_270);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
         local_290 = 0;
         local_288 = 0;
         CowData<String>::_copy_on_write((CowData<String>*)&local_200);
         pCVar1 = local_200;
         CowData<String>::_copy_on_write((CowData<String>*)&local_200);
         if (local_200 == (CowData*)0x0) {
            lVar7 = 0;
         }
 else {
            lVar7 = *(long*)( local_200 + -8 );
         }

         if (( ( pCVar1 == local_200 + lVar7 * 8 ) || ( *(long*)pCVar1 == 0 ) ) || ( CowData<char32_t>::_ref((CowData<char32_t>*)&local_290, pCVar1),local_290 == 0 )) {
            lVar7 = 0;
            LAB_0010861f:CowData<String>::_copy_on_write((CowData<String>*)&local_210);
            pCVar1 = local_210;
            CowData<String>::_copy_on_write((CowData<String>*)&local_210);
            if (local_210 == (CowData*)0x0) {
               lVar9 = 0;
            }
 else {
               lVar9 = *(long*)( local_210 + -8 );
            }

            if (( pCVar1 != local_210 + lVar9 * 8 ) && ( *(long*)pCVar1 != lVar7 )) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_290, pCVar1);
            }

            lVar7 = local_290;
            if (( local_290 == 0 ) || ( *(uint*)( local_290 + -8 ) < 2 )) {
               CowData<String>::_copy_on_write((CowData<String>*)&local_220);
               pCVar1 = local_220;
               CowData<String>::_copy_on_write((CowData<String>*)&local_220);
               if (local_220 == (CowData*)0x0) {
                  lVar9 = 0;
               }
 else {
                  lVar9 = *(long*)( local_220 + -8 );
               }

               if (( pCVar1 != local_220 + lVar9 * 8 ) && ( *(long*)pCVar1 != lVar7 )) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_290, pCVar1);
               }

            }

         }
 else {
            lVar7 = local_290;
            if (*(uint*)( local_290 + -8 ) < 2) goto LAB_0010861f;
         }

         local_1e8 = (char*)0x0;
         if (local_290 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_1e8, (CowData*)&local_290);
         }

         Vector<String>::push_back((Vector<String>*)get_video_adapter_driver_info(), ::info, (String*)&local_1e8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
         local_280 = 0;
         local_278 = 0;
         List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_278, (String*)&local_290);
         pcVar2 = *(code**)( *in_RSI + 0x108 );
         local_1e8 = (char*)0x0;
         String::parse_latin1((String*)&local_1e8, "modinfo");
         iVar6 = ( *pcVar2 )(in_RSI, (String*)&local_1e8, (List<String,DefaultAllocator>*)&local_278, (CowData<char32_t>*)&local_280, 0, 0, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
         if (( ( iVar6 == 0 ) && ( local_280 != 0 ) ) && ( 1 < *(uint*)( local_280 + -8 ) )) {
            String::split((char*)&local_1f8, SUB81((CowData<char32_t>*)&local_280, 0), 0x109400);
            CowData<String>::_copy_on_write((CowData<String>*)&local_1f0);
            lVar7 = local_1f0;
            CowData<String>::_copy_on_write((CowData<String>*)&local_1f0);
            if (local_1f0 == 0) {
               lVar9 = 0;
            }
 else {
               lVar9 = *(long*)( local_1f0 + -8 );
            }

            lVar9 = local_1f0 + lVar9 * 8;
            for (; lVar9 != lVar7; lVar7 = lVar7 + 8) {
               String::split((char*)&local_1e8, SUB81(lVar7, 0), 0x1094b4);
               if (( local_1e0 != 0 ) && ( 1 < *(long*)( local_1e0 + -8 ) )) {
                  bVar10 = SUB81((CowData<char32_t>*)&local_270, 0);
                  String::strip_edges(bVar10, SUB81(local_1e0, 0));
                  cVar5 = String::operator ==((String*)&local_270, "version");
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_270);
                  if (cVar5 != '\0') {
                     if (local_1e0 == 0) {
                        lVar12 = 0;
                     }
 else {
                        lVar12 = *(long*)( local_1e0 + -8 );
                        if (1 < lVar12) {
                           String::strip_edges(bVar10, (bool)( (char)local_1e0 + '\b' ));
                           if (local_270 != 0) {
                              local_288 = local_270;
                              local_270 = 0;
                           }

                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_270);
                           CowData<String>::_unref((CowData<String>*)&local_1e0);
                           break;
                        }

                     }

                     lVar7 = 1;
                     LAB_00108956:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar12, "p_index", "size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar2 = (code*)invalidInstructionException();
                     ( *pcVar2 )();
                  }

               }

               CowData<String>::_unref((CowData<String>*)&local_1e0);
            }

            local_1e8 = (char*)0x0;
            if (local_288 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_1e8, (CowData*)&local_288);
            }

            Vector<String>::push_back((Vector<String>*)get_video_adapter_driver_info(), ::info, (String*)&local_1e8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
            *(undefined8*)( in_RDI + 8 ) = 0;
            if (get_video_adapter_driver_info()._8_8_ != 0) {
               CowData<String>::_ref((CowData<String>*)( in_RDI + 8 ), (CowData*)( get_video_adapter_driver_info() ));
            }

            CowData<String>::_unref((CowData<String>*)&local_1f0);
         }
 else {
            local_1e8 = (char*)0x0;
            String::parse_latin1((String*)&local_1e8, "");
            Vector<String>::push_back((Vector<String>*)get_video_adapter_driver_info(), ::info, (String*)&local_1e8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
            *(undefined8*)( in_RDI + 8 ) = 0;
            if (get_video_adapter_driver_info()._8_8_ != 0) {
               CowData<String>::_ref((CowData<String>*)( in_RDI + 8 ), (CowData*)( get_video_adapter_driver_info() ));
            }

         }

         List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_278);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_280);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_288);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_290);
         CowData<String>::_unref((CowData<String>*)&local_200);
         CowData<String>::_unref((CowData<String>*)&local_210);
         CowData<String>::_unref((CowData<String>*)&local_220);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_298);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_2a0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_2a8);
         CowData<String>::_unref((CowData<String>*)&local_230);
         RegEx::~RegEx(local_1d8);
         CowData<String>::_unref((CowData<String>*)&local_240);
         CowData<String>::_unref((CowData<String>*)&local_250);
         CowData<String>::_unref((CowData<String>*)&local_260);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_2b0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_2b8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_2c0);
      }

      else{*(undefined8*)( in_RDI + 8 ) = 0;
   }

   List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_2c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2d8);
   CowData<char32_t>::_unref(local_2e0);
   CowData<char32_t>::_unref(local_2e8);
   LAB_001079a3:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return in_RDI;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OS_LinuxBSD::~OS_LinuxBSD() */void OS_LinuxBSD::~OS_LinuxBSD(OS_LinuxBSD *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR_initialize_0010bd08;
   if (*(long*)( this + 0x170 ) != 0) {
      ( *_FcObjectSetDestroy_dylibloader_wrapper_fontconfig )();
   }

   if (*(long*)( this + 0x168 ) != 0) {
      ( *_FcConfigDestroy_dylibloader_wrapper_fontconfig )();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x500 ));
   CrashHandler::~CrashHandler((CrashHandler*)( this + 0x4f0 ));
   *(code**)( this + 0x2c0 ) = MIDIDriverALSAMidi::~MIDIDriverALSAMidi;
   CowData<String>::_unref((CowData<String>*)( this + 0x4e0 ));
   CowData<String>::_unref((CowData<String>*)( this + 0x4d0 ));
   if (*(long*)( this + 0x4a8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x4a8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x4a8 );
         *(undefined8*)( this + 0x4a8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x498 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x498 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x498 );
         *(undefined8*)( this + 0x498 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   for (int i = 0; i < 6; i++) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( this + ( -8*i + 1160 ) ));
   }

   Thread::~Thread((Thread*)( this + 0x300 ));
   *(code**)( this + 0x2c0 ) = Thread::Thread;
   if (*(long*)( this + 0x2f0 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x2f0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x2f0 );
         *(undefined8*)( this + 0x2f0 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   MIDIDriverALSAMidi::~MIDIDriverALSAMidi((MIDIDriverALSAMidi*)( this + 600 ));
   *(code**)( this + 0x180 ) = MIDIDriverALSAMidi::MIDIDriverALSAMidi;
   if (*(long*)( this + 0x228 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x228 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x228 );
         *(undefined8*)( this + 0x228 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x218 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x218 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x218 );
         *(undefined8*)( this + 0x218 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x208 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x200 ));
   Thread::~Thread((Thread*)( this + 0x1c0 ));
   *(code**)( this + 0x180 ) = Thread::Thread;
   if (*(long*)( this + 0x1b0 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x1b0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x1b0 );
         *(undefined8*)( this + 0x1b0 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   *(code**)this = RenderingContextDriverVulkanX11::RenderingContextDriverVulkanX11;
   OS::~OS((OS*)this);
   return;
}
/* OS_LinuxBSD::~OS_LinuxBSD() */void OS_LinuxBSD::~OS_LinuxBSD(OS_LinuxBSD *this) {
   ~OS_LinuxBSD(this)
   ;;
   operator_delete(this, 0x508);
   return;
}
/* OS_LinuxBSD::_test_create_rendering_device(String const&) const */ulong OS_LinuxBSD::_test_create_rendering_device(OS_LinuxBSD *this, String *param_1) {
   char cVar1;
   uint uVar2;
   int iVar3;
   RenderingContextDriverVulkanX11 *this_00;
   RenderingDevice *this_01;
   ulong uVar4;
   uVar2 = String::operator ==(param_1, "x11");
   if ((char)uVar2 == '\0') {
      uVar4 = (ulong)uVar2;
      if (( *(long*)param_1 != 0 ) && ( 1 < *(uint*)( *(long*)param_1 + -8 ) )) goto LAB_00108f2d;
   }

   uVar4 = 0;
   this_00 = (RenderingContextDriverVulkanX11*)operator_new(0x178, "");
   RenderingContextDriverVulkanX11::RenderingContextDriverVulkanX11(this_00);
   iVar3 = RenderingContextDriverVulkan::initialize();
   if (iVar3 == 0) {
      this_01 = (RenderingDevice*)operator_new(0xf28, "");
      RenderingDevice::RenderingDevice(this_01);
      postinitialize_handler((Object*)this_01);
      iVar3 = RenderingDevice::initialize((RenderingContextDriver*)this_01, (int)this_00);
      cVar1 = predelete_handler((Object*)this_01);
      if (cVar1 != '\0') {
         ( **(code**)( *(long*)this_01 + 0x140 ) )(this_01);
         Memory::free_static(this_01, false);
      }

      uVar4 = CONCAT71(( int7 )((ulong)this_01 >> 8), iVar3 == 0);
   }

   ( *(code*)**(undefined8**)this_00 )(this_00);
   Memory::free_static(this_00, false);
   LAB_00108f2d:return uVar4 & 0xffffffff;
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* OS::get_user_prefers_integrated_gpu() const */undefined8 OS::get_user_prefers_integrated_gpu(void) {
   return 0;
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
/* OS::get_default_thread_pool_size() const */void OS::get_default_thread_pool_size(OS *this) {
   /* WARNING: Could not recover jumptable at 0x001090b7. Too many branches */
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
/* Vector<String>::~Vector() */void Vector<String>::~Vector(Vector<String> *this) {
   CowData<String>::_unref((CowData<String>*)( this + 8 ));
   return;
}
/* MainLoop::~MainLoop() */void MainLoop::~MainLoop(MainLoop *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = Object::~Object;
   if (bVar1) {
      if (*(long*)( this + 0x1c0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010970e;
      }

      if (*(long*)( this + 0x1a8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010970e;
      }

      if (*(long*)( this + 400 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010970e;
      }

      if (*(long*)( this + 0x178 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010970e:Object::~Object((Object*)this);
   return;
}
/* RasterizerGLES3::_create_current() */RasterizerGLES3 *RasterizerGLES3::_create_current(void) {
   RasterizerGLES3 *this;
   this(RasterizerGLES3 * operator_new(0xb0, ""));
   RasterizerGLES3::RasterizerGLES3(this);
   return this;
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
/* MainLoop::~MainLoop() */void MainLoop::~MainLoop(MainLoop *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = Object::~Object;
   if (bVar1) {
      if (*(long*)( this + 0x1c0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00109afe;
      }

      if (*(long*)( this + 0x1a8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00109afe;
      }

      if (*(long*)( this + 400 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00109afe;
      }

      if (*(long*)( this + 0x178 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00109afe:Object::~Object((Object*)this);
   operator_delete(this, 0x1d8);
   return;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::insert(String const&)
    */String *HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert(String *param_1) {
   CowData<char32_t> *this;
   void *pvVar1;
   void *pvVar2;
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
   uVar29 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
   if (*in_RSI == 0) {
      uVar32 = (ulong)uVar29 * 4;
      lVar33 = Memory::alloc_static(uVar32, false);
      in_RSI[3] = lVar33;
      lVar33 = Memory::alloc_static((ulong)uVar29 * 8, false);
      *in_RSI = lVar33;
      lVar33 = Memory::alloc_static(uVar32, false);
      in_RSI[2] = lVar33;
      lVar33 = Memory::alloc_static(uVar32, false);
      in_RSI[1] = lVar33;
      if (uVar29 != 0) {
         memset((void*)in_RSI[3], 0, uVar32);
      }

      iVar37 = *(int*)( (long)in_RSI + 0x24 );
      if (*in_RSI != 0) goto LAB_00109dbc;
   }
 else {
      iVar37 = *(int*)( (long)in_RSI + 0x24 );
      LAB_00109dbc:if (iVar37 != 0) {
         uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
         lVar33 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
         uVar45 = String::hash();
         uVar32 = CONCAT44(0, uVar30);
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
         lVar40 = SUB168(auVar12 * auVar24, 8);
         uVar45 = *(uint*)( lVar41 + lVar40 * 4 );
         iVar37 = SUB164(auVar12 * auVar24, 8);
         if (uVar45 == 0) {
            iVar37 = *(int*)( (long)in_RSI + 0x24 );
         }
 else {
            do {
               if (uVar38 == uVar45) {
                  cVar28 = String::operator ==((String*)( *in_RSI + ( ulong ) * (uint*)( in_RSI[1] + lVar40 * 4 ) * 8 ), in_RDX);
                  if (cVar28 != '\0') {
                     iVar37 = *(int*)( (long)in_RSI + 0x24 );
                     lVar33 = *in_RSI;
                     iVar31 = *(int*)( in_RSI[1] + lVar40 * 4 );
                     goto LAB_0010a139;
                  }

                  lVar41 = in_RSI[3];
               }

               uVar46 = uVar46 + 1;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = ( ulong )(iVar37 + 1) * lVar33;
               auVar25._8_8_ = 0;
               auVar25._0_8_ = uVar32;
               lVar40 = SUB168(auVar13 * auVar25, 8);
               uVar45 = *(uint*)( lVar41 + lVar40 * 4 );
               iVar37 = SUB164(auVar13 * auVar25, 8);
            }
 while ( ( uVar45 != 0 ) && ( auVar14._8_8_ = 0 ),auVar14._0_8_ = (ulong)uVar45 * lVar33,auVar26._8_8_ = 0,auVar26._0_8_ = uVar32,auVar15._8_8_ = 0,auVar15._0_8_ = ( ulong )(( uVar30 + iVar37 ) - SUB164(auVar14 * auVar26, 8)) * lVar33,auVar27._8_8_ = 0,auVar27._0_8_ = uVar32,uVar46 <= SUB164(auVar15 * auVar27, 8) );
            iVar37 = *(int*)( (long)in_RSI + 0x24 );
         }

      }

   }

   if ((float)uVar29 * __LC9 < (float)( iVar37 + 1 )) {
      if ((int)in_RSI[4] == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         iVar37 = *(int*)( (long)in_RSI + 0x24 );
         lVar33 = *in_RSI;
         iVar31 = -1;
         goto LAB_0010a139;
      }

      uVar29 = (int)in_RSI[4] + 1;
      uVar32 = (ulong)uVar29;
      if (uVar29 < 2) {
         uVar32 = 2;
      }

      uVar29 = *(uint*)( hash_table_size_primes + uVar32 * 4 );
      *(int*)( in_RSI + 4 ) = (int)uVar32;
      pvVar1 = (void*)in_RSI[3];
      uVar32 = (ulong)uVar29 * 4;
      pvVar2 = (void*)in_RSI[2];
      lVar33 = Memory::alloc_static(uVar32, false);
      in_RSI[3] = lVar33;
      lVar33 = Memory::realloc_static((void*)*in_RSI, (ulong)uVar29 * 8, false);
      *in_RSI = lVar33;
      lVar33 = Memory::alloc_static(uVar32, false);
      in_RSI[2] = lVar33;
      lVar33 = Memory::realloc_static((void*)in_RSI[1], uVar32, false);
      in_RSI[1] = lVar33;
      if (uVar29 != 0) {
         memset((void*)in_RSI[3], 0, uVar32);
      }

      if (*(int*)( (long)in_RSI + 0x24 ) != 0) {
         uVar32 = 0;
         lVar41 = in_RSI[3];
         lVar40 = in_RSI[2];
         do {
            uVar43 = uVar32 & 0xffffffff;
            uVar44 = (undefined4)uVar32;
            uVar45 = 0;
            uVar29 = *(uint*)( (long)pvVar1 + ( ulong ) * (uint*)( (long)pvVar2 + uVar32 * 4 ) * 4 );
            uVar39 = (ulong)uVar29;
            uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
            uVar42 = CONCAT44(0, uVar30);
            lVar34 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar39 * lVar34;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar42;
            lVar35 = SUB168(auVar4 * auVar16, 8) * 4;
            iVar37 = SUB164(auVar4 * auVar16, 8);
            puVar36 = (uint*)( lVar41 + lVar35 );
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
                  auVar6._0_8_ = ( ulong )(( uVar30 + iVar37 ) - SUB164(auVar5 * auVar17, 8)) * lVar34;
                  auVar18._8_8_ = 0;
                  auVar18._0_8_ = uVar42;
                  local_88 = SUB164(auVar6 * auVar18, 8);
                  if (local_88 < uVar45) {
                     *(int*)( lVar40 + uVar43 * 4 ) = iVar37;
                     uVar29 = *puVar36;
                     *puVar36 = (uint)uVar39;
                     uVar38 = *(uint*)( lVar35 + lVar33 );
                     uVar39 = (ulong)uVar29;
                     *(uint*)( lVar35 + lVar33 ) = (uint)uVar43;
                     uVar43 = (ulong)uVar38;
                     uVar45 = local_88;
                  }

                  uVar44 = (undefined4)uVar43;
                  uVar29 = (uint)uVar39;
                  uVar45 = uVar45 + 1;
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = ( ulong )(iVar37 + 1) * lVar34;
                  auVar19._8_8_ = 0;
                  auVar19._0_8_ = uVar42;
                  lVar35 = SUB168(auVar7 * auVar19, 8) * 4;
                  iVar37 = SUB164(auVar7 * auVar19, 8);
                  puVar36 = (uint*)( lVar41 + lVar35 );
                  uVar38 = *puVar36;
               }
 while ( uVar38 != 0 );
               lVar34 = uVar43 << 2;
            }

            *puVar36 = uVar29;
            uVar32 = uVar32 + 1;
            *(int*)( lVar40 + lVar34 ) = iVar37;
            *(undefined4*)( lVar33 + lVar35 ) = uVar44;
         }
 while ( (uint)uVar32 < *(uint*)( (long)in_RSI + 0x24 ) );
      }

      Memory::free_static(pvVar1, false);
      Memory::free_static(pvVar2, false);
   }

   uVar30 = String::hash();
   uVar32 = ( ulong ) * (uint*)( (long)in_RSI + 0x24 );
   lVar33 = *in_RSI;
   uVar29 = 1;
   if (uVar30 != 0) {
      uVar29 = uVar30;
   }

   this(CowData<char32_t> * )(lVar33 + uVar32 * 8);
   uVar39 = (ulong)uVar29;
   *(undefined8*)this = 0;
   if (*(long*)in_RDX != 0) {
      CowData<char32_t>::_ref(this, (CowData*)in_RDX);
      uVar32 = ( ulong ) * (uint*)( (long)in_RSI + 0x24 );
      lVar33 = *in_RSI;
   }

   uVar44 = (undefined4)uVar32;
   uVar45 = 0;
   lVar40 = in_RSI[3];
   uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
   uVar43 = CONCAT44(0, uVar30);
   lVar35 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
   auVar8._8_8_ = 0;
   auVar8._0_8_ = uVar39 * lVar35;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = uVar43;
   lVar41 = SUB168(auVar8 * auVar20, 8) * 4;
   iVar37 = SUB164(auVar8 * auVar20, 8);
   lVar34 = in_RSI[2];
   lVar3 = in_RSI[1];
   puVar36 = (uint*)( lVar40 + lVar41 );
   uVar38 = *puVar36;
   uVar42 = uVar32;
   while (uVar38 != 0) {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar38 * lVar35;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar43;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = ( ulong )(( uVar30 + iVar37 ) - SUB164(auVar9 * auVar21, 8)) * lVar35;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar43;
      local_88 = SUB164(auVar10 * auVar22, 8);
      if (local_88 < uVar45) {
         *(int*)( lVar34 + uVar42 * 4 ) = iVar37;
         uVar29 = *puVar36;
         *puVar36 = (uint)uVar39;
         puVar36 = (uint*)( lVar41 + lVar3 );
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
      auVar11._0_8_ = ( ulong )(iVar37 + 1) * lVar35;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar43;
      lVar41 = SUB168(auVar11 * auVar23, 8) * 4;
      iVar37 = SUB164(auVar11 * auVar23, 8);
      puVar36 = (uint*)( lVar40 + lVar41 );
      uVar38 = *puVar36;
   }
;
   *puVar36 = uVar29;
   *(int*)( lVar34 + uVar42 * 4 ) = iVar37;
   *(undefined4*)( lVar3 + lVar41 ) = uVar44;
   iVar31 = *(int*)( (long)in_RSI + 0x24 );
   iVar37 = iVar31 + 1;
   *(int*)( (long)in_RSI + 0x24 ) = iVar37;
   LAB_0010a139:*(int*)( param_1 + 0xc ) = iVar31;
   *(long*)param_1 = lVar33;
   *(int*)( param_1 + 8 ) = iVar37;
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
/* WARNING: Removing unreachable block (ram,0x0010ac48) *//* WARNING: Removing unreachable block (ram,0x0010addd) *//* WARNING: Removing unreachable block (ram,0x0010ade9) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
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
/* WARNING: Removing unreachable block (ram,0x0010afd0) *//* WARNING: Removing unreachable block (ram,0x0010b15e) *//* WARNING: Removing unreachable block (ram,0x0010b16a) *//* String vformat<long, int, unsigned char, unsigned char, unsigned char>(String const&, long const,
   int const, unsigned char const, unsigned char const, unsigned char const) */String *vformat<long,int,unsigned_char,unsigned_char,unsigned_char>(String *param_1, long param_2, int param_3, uchar param_4, uchar param_5, uchar param_6) {
   Variant *pVVar1;
   undefined7 in_register_00000009;
   undefined4 in_register_00000014;
   Variant *pVVar2;
   int iVar3;
   int iVar4;
   long in_FS_OFFSET;
   uchar in_stack_00000008;
   Array local_128[8];
   undefined8 local_120[9];
   Variant local_d8[24];
   Variant local_c0[24];
   Variant local_a8[24];
   Variant local_90[24];
   Variant local_78[24];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_d8, CONCAT44(in_register_00000014, param_3));
   Variant::Variant(local_c0, (int)CONCAT71(in_register_00000009, param_4));
   iVar4 = 0;
   Variant::Variant(local_a8, param_5);
   Variant::Variant(local_90, param_6);
   Variant::Variant(local_78, in_stack_00000008);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_128);
   iVar3 = (int)local_128;
   Array::resize(iVar3);
   pVVar2 = local_d8;
   do {
      iVar4 = iVar4 + 1;
      pVVar1 = (Variant*)Array::operator [](iVar3);
      Variant::operator =(pVVar1, pVVar2);
      pVVar2 = pVVar2 + 0x18;
   }
 while ( iVar4 != 5 );
   String::sprintf((Array*)local_120, (bool*)param_2);
   *(undefined8*)param_1 = local_120[0];
   pVVar2 = local_48;
   Array::~Array(local_128);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_d8 );
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x0010b2f0) *//* WARNING: Removing unreachable block (ram,0x0010b485) *//* WARNING: Removing unreachable block (ram,0x0010b491) *//* String vformat<String, unsigned char>(String const&, String const, unsigned char const) */undefined8 *vformat<String,unsigned_char>(undefined8 *param_1, bool *param_2, String *param_3, uchar param_4) {
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
/* WARNING: Removing unreachable block (ram,0x0010b620) *//* WARNING: Removing unreachable block (ram,0x0010b7b5) *//* WARNING: Removing unreachable block (ram,0x0010b7c1) *//* String vformat<int, int, int>(String const&, int const, int const, int const) */String *vformat<int,int,int>(String *param_1, int param_2, int param_3, int param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   undefined4 in_register_00000034;
   int iVar3;
   int in_R8D;
   int iVar4;
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
   iVar4 = 0;
   Variant::Variant(local_90, param_4);
   Variant::Variant(local_78, in_R8D);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_f8);
   iVar3 = (int)local_f8;
   Array::resize(iVar3);
   pVVar2 = local_a8;
   do {
      iVar4 = iVar4 + 1;
      pVVar1 = (Variant*)Array::operator [](iVar3);
      Variant::operator =(pVVar1, pVVar2);
      pVVar2 = pVVar2 + 0x18;
   }
 while ( iVar4 != 3 );
   String::sprintf((Array*)local_f0, (bool*)CONCAT44(in_register_00000034, param_2));
   *(undefined8*)param_1 = local_f0[0];
   pVVar2 = local_48;
   Array::~Array(local_f8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_a8 );
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
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
      LAB_0010bc70:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar10 == 0) goto LAB_0010bc70;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_0010bb49:if (lVar10 != lVar7) {
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
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_0010bb49;
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
      goto LAB_0010bcc6;
   }

   if (lVar10 == lVar7) {
      LAB_0010bbef:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_0010bcc6:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_0010bbda;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_0010bbef;
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
   LAB_0010bbda:puVar9[-1] = param_1;
   return 0;
}
/* WARNING: Control flow encountered bad instruction data *//* List<String, DefaultAllocator>::~List() */void List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* String::~String() */void String::~String(String *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MainLoop::~MainLoop() */void MainLoop::~MainLoop(MainLoop *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* Vector<String>::~Vector() */void Vector<String>::~Vector(Vector<String> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

