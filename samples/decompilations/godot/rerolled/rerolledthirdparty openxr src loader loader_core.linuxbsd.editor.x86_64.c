/* LoaderXrTermGetInstanceProcAddr(XrInstance_T*, char const*, void (**)()) */undefined8 LoaderXrTermGetInstanceProcAddr(XrInstance_T *param_1, char *param_2, _func_void *param_3) {
   int iVar1;
   code *pcVar2;
   undefined8 uVar3;
   *(undefined8*)param_3 = 0;
   iVar1 = strcmp(param_2, "xrGetInstanceProcAddr");
   if (iVar1 == 0) {
      pcVar2 = LoaderXrTermGetInstanceProcAddr;
   }
 else {
      iVar1 = strcmp(param_2, "xrCreateInstance");
      if (iVar1 == 0) {
         *(code**)param_3 = LoaderXrTermCreateInstance;
         return 0;
      }

      iVar1 = strcmp(param_2, "xrDestroyInstance");
      if (iVar1 == 0) {
         *(code**)param_3 = LoaderXrTermDestroyInstance;
         return 0;
      }

      iVar1 = strcmp(param_2, "xrSetDebugUtilsObjectNameEXT");
      if (iVar1 == 0) {
         pcVar2 = LoaderXrTermSetDebugUtilsObjectNameEXT;
      }
 else {
         iVar1 = strcmp(param_2, "xrCreateDebugUtilsMessengerEXT");
         if (iVar1 == 0) {
            pcVar2 = LoaderXrTermCreateDebugUtilsMessengerEXT;
         }
 else {
            iVar1 = strcmp(param_2, "xrDestroyDebugUtilsMessengerEXT");
            if (iVar1 == 0) {
               pcVar2 = LoaderXrTermDestroyDebugUtilsMessengerEXT;
            }
 else {
               iVar1 = strcmp(param_2, "xrSubmitDebugUtilsMessageEXT");
               if (iVar1 == 0) {
                  pcVar2 = LoaderXrTermSubmitDebugUtilsMessageEXT;
               }
 else {
                  iVar1 = strcmp(param_2, "xrCreateApiLayerInstance");
                  if (iVar1 != 0) {
                     uVar3 = RuntimeInterface::GetInstanceProcAddr(param_1, param_2, param_3);
                     return uVar3;
                  }

                  pcVar2 = LoaderXrTermCreateApiLayerInstance;
               }

            }

         }

      }

   }

   *(code**)param_3 = pcVar2;
   return 0;
}
/* LoaderTrampolineSubmitDebugUtilsMessageEXT(XrInstance_T*, unsigned long, unsigned long,
   XrDebugUtilsMessengerCallbackDataEXT const*) */void LoaderTrampolineSubmitDebugUtilsMessageEXT(XrInstance_T *param_1, ulong param_2, ulong param_3, XrDebugUtilsMessengerCallbackDataEXT *param_4) {
   int iVar1;
   long in_FS_OFFSET;
   LoaderInstance *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = ActiveLoaderInstance::Get(&local_38, "xrSubmitDebugUtilsMessageEXT");
   if (-1 < iVar1) {
      ( **(code**)( *(long*)( local_38 + 0x48 ) + 0x1d8 ) )(param_1, param_2, param_3, param_4);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* LoaderTrampolineSetDebugUtilsObjectNameEXT(XrInstance_T*, XrDebugUtilsObjectNameInfoEXT const*)
    */void LoaderTrampolineSetDebugUtilsObjectNameEXT(XrInstance_T *param_1, XrDebugUtilsObjectNameInfoEXT *param_2) {
   int iVar1;
   long in_FS_OFFSET;
   LoaderInstance *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = ActiveLoaderInstance::Get(&local_28, "xrSetDebugUtilsObjectNameEXT");
   if (-1 < iVar1) {
      ( **(code**)( *(long*)( local_28 + 0x48 ) + 0x1c0 ) )(param_1, param_2);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::__cxx11::string::append(char const*) [clone .isra.0] */void std::__cxx11::string::append(string *this, char *param_1) {
   size_t sVar1;
   char *__dest;
   long extraout_RDX;
   ulong __n;
   char *__src;
   char *pcVar2;
   long in_FS_OFFSET;
   ulong uStack_40;
   long lStack_38;
   string *psStack_30;
   char *pcStack_28;
   __src = param_1;
   sVar1 = strlen(param_1);
   if (sVar1 <= 0x3fffffffffffffffU - *(long*)( this + 8 )) {
      std::__cxx11::string::_M_append((char*)this, (ulong)param_1);
      return;
   }

   pcVar2 = "basic_string::append";
   std::__throw_length_error("basic_string::append");
   __n = extraout_RDX - (long)__src;
   lStack_38 = *(long*)( in_FS_OFFSET + 0x28 );
   uStack_40 = __n;
   psStack_30 = this;
   pcStack_28 = param_1;
   if (__n < 0x10) {
      __dest = *(char**)pcVar2;
      if (__n == 1) {
         *__dest = *__src;
         __dest = *(char**)pcVar2;
         goto LAB_001002e4;
      }

      if (__n == 0) goto LAB_001002e4;
   }
 else {
      __dest = (char*)std::__cxx11::string::_M_create((ulong*)pcVar2, ( ulong ) & uStack_40);
      *(char**)pcVar2 = __dest;
      *(ulong*)( (long)pcVar2 + 0x10 ) = uStack_40;
   }

   memcpy(__dest, __src, __n);
   __dest = *(char**)pcVar2;
   LAB_001002e4:*(ulong*)( (long)pcVar2 + 8 ) = uStack_40;
   __dest[uStack_40] = '\0';
   if (lStack_38 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void std::__cxx11::string::_M_construct<char const*>(char const*, char const*,
   std::forward_iterator_tag) [clone .isra.0] */void std::__cxx11::string::_M_construct<char_const*>(ulong *param_1, undefined1 *param_2, long param_3) {
   undefined1 *__dest;
   ulong __n;
   long in_FS_OFFSET;
   ulong local_28;
   long local_20;
   __n = param_3 - (long)param_2;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = __n;
   if (__n < 0x10) {
      __dest = (undefined1*)*param_1;
      if (__n == 1) {
         *__dest = *param_2;
         __dest = (undefined1*)*param_1;
         goto LAB_001002e4;
      }

      if (__n == 0) goto LAB_001002e4;
   }
 else {
      __dest = (undefined1*)std::__cxx11::string::_M_create(param_1, ( ulong ) & local_28);
      *param_1 = (ulong)__dest;
      param_1[2] = local_28;
   }

   memcpy(__dest, param_2, __n);
   __dest = (undefined1*)*param_1;
   LAB_001002e4:param_1[1] = local_28;
   __dest[local_28] = 0;
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* LoaderLogger::LogValidationErrorMessage(std::__cxx11::string const&, std::__cxx11::string const&,
   std::__cxx11::string const&, std::vector<XrSdkLogObjectInfo, std::allocator<XrSdkLogObjectInfo> >
   const&) [clone .isra.0] */void LoaderLogger::LogValidationErrorMessage(string *param_1, string *param_2, string *param_3, vector *param_4) {
   int iVar1;
   if (GetInstance() == '\0') {
      iVar1 = __cxa_guard_acquire(&GetInstance(), ::instance);
      if (iVar1 != 0) {
         LoaderLogger::LoaderLogger((LoaderLogger*)GetInstance(), ::instance);
         __cxa_atexit(~LoaderLogger, GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&GetInstance(), ::instance);
      }

   }

   LoaderLogger::LogMessage(0x10ad20, 0x1000, (string*)0x2, param_1, param_2, (vector*)param_3);
   return;
}
/* WARNING: Removing unreachable block (ram,0x00100660) *//* WARNING: Removing unreachable block (ram,0x0010066d) *//* WARNING: Removing unreachable block (ram,0x0010067a) *//* WARNING: Removing unreachable block (ram,0x00100683) *//* WARNING: Removing unreachable block (ram,0x001007d8) *//* WARNING: Removing unreachable block (ram,0x001007e5) *//* WARNING: Removing unreachable block (ram,0x001007f2) *//* WARNING: Removing unreachable block (ram,0x001007fb) *//* WARNING: Removing unreachable block (ram,0x0010068d) *//* WARNING: Removing unreachable block (ram,0x00100805) *//* std::__cxx11::string::string<std::allocator<char> >(char const*, std::allocator<char> const&)
   [clone .constprop.0] */undefined4 std::__cxx11::string::string<std::allocator<char>>(string *this, char *param_1, allocator *param_2) {
   undefined4 uVar1;
   int iVar2;
   size_t __n;
   string *__dest;
   long lVar3;
   undefined8 in_RCX;
   XrDebugUtilsMessengerCallbackDataEXT *extraout_RDX;
   char *pcVar4;
   long in_FS_OFFSET;
   long *aplStack_e0[2];
   long alStack_d0[2];
   long *aplStack_c0[2];
   long alStack_b0[2];
   long *aplStack_a0[2];
   long alStack_90[3];
   long lStack_78;
   size_t local_38;
   long local_30;
   __dest = this + 0x10;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(string**)this = __dest;
   if (param_1 == (char*)0x0) {
      pcVar4 = "basic_string: construction from null is not valid";
      std::__throw_logic_error("basic_string: construction from null is not valid");
      lStack_78 = *(long*)( in_FS_OFFSET + 0x28 );
      aplStack_c0[0] = alStack_b0;
      _M_construct<char_const*>((vector*)aplStack_c0, "Entering loader terminator");
      aplStack_e0[0] = alStack_d0;
      _M_construct<char_const*>((string*)aplStack_e0, "xrSubmitDebugUtilsMessageEXT");
      if (( LoaderLogger::GetInstance():: ) && ( iVar2 = iVar2 != 0 )) {
         LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
         __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
      }

      aplStack_a0[0] = alStack_90;
      _M_construct<char_const*>((string*)aplStack_a0, "OpenXR-Loader");
      LoaderLogger::LogMessage(0x10ad20, 1, (string*)0x1, (string*)aplStack_a0, (string*)aplStack_e0, (vector*)aplStack_c0);
      if (aplStack_a0[0] != alStack_90) {
         operator_delete(aplStack_a0[0], alStack_90[0] + 1);
      }

      if (aplStack_e0[0] != alStack_d0) {
         operator_delete(aplStack_e0[0], alStack_d0[0] + 1);
      }

      if (aplStack_c0[0] != alStack_b0) {
         operator_delete(aplStack_c0[0], alStack_b0[0] + 1);
      }

      lVar3 = RuntimeInterface::GetDispatchTable((XrInstance_T*)pcVar4);
      if (*(code**)( lVar3 + 0x1d8 ) == (code*)0x0) {
         if (( LoaderLogger::GetInstance():: ) && ( iVar2 = iVar2 != 0 )) {
            LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
            __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
            __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
         }

         uVar1 = 0;
         LoaderLogger::LogDebugUtilsMessage(0x10ad20, (ulong)param_1, extraout_RDX);
      }
 else {
         uVar1 = ( **(code**)( lVar3 + 0x1d8 ) )(pcVar4, param_1, extraout_RDX, in_RCX);
      }

      aplStack_c0[0] = alStack_b0;
      _M_construct<char_const*>((vector*)aplStack_c0, "Completed loader terminator");
      aplStack_e0[0] = alStack_d0;
      _M_construct<char_const*>((string*)aplStack_e0, "xrSubmitDebugUtilsMessageEXT");
      if (( LoaderLogger::GetInstance():: ) && ( iVar2 = iVar2 != 0 )) {
         LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
         __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
      }

      aplStack_a0[0] = alStack_90;
      _M_construct<char_const*>((string*)aplStack_a0, "OpenXR-Loader");
      LoaderLogger::LogMessage(0x10ad20, 1, (string*)0x1, (string*)aplStack_a0, (string*)aplStack_e0, (vector*)aplStack_c0);
      if (aplStack_a0[0] != alStack_90) {
         operator_delete(aplStack_a0[0], alStack_90[0] + 1);
      }

      if (aplStack_e0[0] != alStack_d0) {
         operator_delete(aplStack_e0[0], alStack_d0[0] + 1);
      }

      if (aplStack_c0[0] != alStack_b0) {
         operator_delete(aplStack_c0[0], alStack_b0[0] + 1);
      }

      if (lStack_78 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return uVar1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   __n = strlen(param_1);
   local_38 = __n;
   if (__n < 0x10) {
      if (__n == 1) {
         this[0x10] = ( string ) * param_1;
         goto LAB_00100453;
      }

      if (__n == 0) goto LAB_00100453;
   }
 else {
      __dest = (string*)std::__cxx11::string::_M_create((ulong*)this, ( ulong ) & local_38);
      *(string**)this = __dest;
      *(size_t*)( this + 0x10 ) = local_38;
   }

   memcpy(__dest, param_1, __n);
   __dest = *(string**)this;
   LAB_00100453:*(size_t*)( this + 8 ) = local_38;
   __dest[local_38] = (string)0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 0;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x00100660) *//* WARNING: Removing unreachable block (ram,0x0010066d) *//* WARNING: Removing unreachable block (ram,0x0010067a) *//* WARNING: Removing unreachable block (ram,0x00100683) *//* WARNING: Removing unreachable block (ram,0x001007d8) *//* WARNING: Removing unreachable block (ram,0x001007e5) *//* WARNING: Removing unreachable block (ram,0x001007f2) *//* WARNING: Removing unreachable block (ram,0x001007fb) *//* WARNING: Removing unreachable block (ram,0x0010068d) *//* WARNING: Removing unreachable block (ram,0x00100805) *//* LoaderXrTermSubmitDebugUtilsMessageEXT(XrInstance_T*, unsigned long, unsigned long,
   XrDebugUtilsMessengerCallbackDataEXT const*) */undefined4 LoaderXrTermSubmitDebugUtilsMessageEXT(XrInstance_T *param_1, ulong param_2, ulong param_3, XrDebugUtilsMessengerCallbackDataEXT *param_4) {
   undefined4 uVar1;
   int iVar2;
   long lVar3;
   long in_FS_OFFSET;
   long *local_a8[2];
   long local_98[2];
   long *local_88[2];
   long local_78[2];
   long *local_68[2];
   long local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88[0] = local_78;
   std::__cxx11::string::_M_construct<char_const*>((vector*)local_88, "Entering loader terminator");
   local_a8[0] = local_98;
   std::__cxx11::string::_M_construct<char_const*>((string*)local_a8, "xrSubmitDebugUtilsMessageEXT");
   if (( LoaderLogger::GetInstance():: ) && ( iVar2 = iVar2 != 0 )) {
      LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
      __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
      __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
   }

   local_68[0] = local_58;
   std::__cxx11::string::_M_construct<char_const*>((string*)local_68, "OpenXR-Loader");
   LoaderLogger::LogMessage(0x10ad20, 1, (string*)0x1, (string*)local_68, (string*)local_a8, (vector*)local_88);
   if (local_68[0] != local_58) {
      operator_delete(local_68[0], local_58[0] + 1);
   }

   if (local_a8[0] != local_98) {
      operator_delete(local_a8[0], local_98[0] + 1);
   }

   if (local_88[0] != local_78) {
      operator_delete(local_88[0], local_78[0] + 1);
   }

   lVar3 = RuntimeInterface::GetDispatchTable(param_1);
   if (*(code**)( lVar3 + 0x1d8 ) == (code*)0x0) {
      if (( LoaderLogger::GetInstance():: ) && ( iVar2 = iVar2 != 0 )) {
         LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
         __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
      }

      uVar1 = 0;
      LoaderLogger::LogDebugUtilsMessage(0x10ad20, param_2, (XrDebugUtilsMessengerCallbackDataEXT*)param_3);
   }
 else {
      uVar1 = ( **(code**)( lVar3 + 0x1d8 ) )(param_1, param_2, param_3, param_4);
   }

   local_88[0] = local_78;
   std::__cxx11::string::_M_construct<char_const*>((vector*)local_88, "Completed loader terminator");
   local_a8[0] = local_98;
   std::__cxx11::string::_M_construct<char_const*>((string*)local_a8, "xrSubmitDebugUtilsMessageEXT");
   if (( LoaderLogger::GetInstance():: ) && ( iVar2 = iVar2 != 0 )) {
      LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
      __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
      __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
   }

   local_68[0] = local_58;
   std::__cxx11::string::_M_construct<char_const*>((string*)local_68, "OpenXR-Loader");
   LoaderLogger::LogMessage(0x10ad20, 1, (string*)0x1, (string*)local_68, (string*)local_a8, (vector*)local_88);
   if (local_68[0] != local_58) {
      operator_delete(local_68[0], local_58[0] + 1);
   }

   if (local_a8[0] != local_98) {
      operator_delete(local_a8[0], local_98[0] + 1);
   }

   if (local_88[0] != local_78) {
      operator_delete(local_88[0], local_78[0] + 1);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x00100ad8) *//* WARNING: Removing unreachable block (ram,0x00100ae5) *//* WARNING: Removing unreachable block (ram,0x00100af2) *//* WARNING: Removing unreachable block (ram,0x00100afb) *//* WARNING: Removing unreachable block (ram,0x00100c58) *//* WARNING: Removing unreachable block (ram,0x00100c65) *//* WARNING: Removing unreachable block (ram,0x00100c72) *//* WARNING: Removing unreachable block (ram,0x00100c7b) *//* WARNING: Removing unreachable block (ram,0x00100b05) *//* WARNING: Removing unreachable block (ram,0x00100c85) *//* LoaderXrTermDestroyInstance(XrInstance_T*) */undefined4 LoaderXrTermDestroyInstance(XrInstance_T *param_1) {
   undefined4 uVar1;
   int iVar2;
   long in_FS_OFFSET;
   long *local_a8[2];
   long local_98[2];
   long *local_88[2];
   long local_78[2];
   long *local_68[2];
   long local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88[0] = local_78;
   std::__cxx11::string::_M_construct<char_const*>((vector*)local_88, "Entering loader terminator");
   local_a8[0] = local_98;
   std::__cxx11::string::_M_construct<char_const*>((string*)local_a8, "xrDestroyInstance");
   if (( LoaderLogger::GetInstance():: ) && ( iVar2 = iVar2 != 0 )) {
      LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
      __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
      __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
   }

   local_68[0] = local_58;
   std::__cxx11::string::_M_construct<char_const*>((string*)local_68, "OpenXR-Loader");
   LoaderLogger::LogMessage(0x10ad20, 1, (string*)0x1, (string*)local_68, (string*)local_a8, (vector*)local_88);
   if (local_68[0] != local_58) {
      operator_delete(local_68[0], local_58[0] + 1);
   }

   if (local_a8[0] != local_98) {
      operator_delete(local_a8[0], local_98[0] + 1);
   }

   if (local_88[0] != local_78) {
      operator_delete(local_88[0], local_78[0] + 1);
   }

   if (( LoaderLogger::GetInstance():: ) && ( iVar2 = iVar2 != 0 )) {
      LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
      __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
      __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
   }

   LoaderLogger::RemoveLogRecordersForXrInstance((XrInstance_T*)LoaderLogger::GetInstance(), ::instance);
   if (( RuntimeInterface::GetInstance():: ) && ( iVar2 = __cxa_guard_acquire(&RuntimeInterface::GetInstance(), ::instance) ),iVar2 != 0) {
      __cxa_atexit(std::unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>>::~unique_ptr, &RuntimeInterface::GetInstance(), ::instance, &__dso_handle);
      __cxa_guard_release(&RuntimeInterface::GetInstance(), ::instance);
   }

   uVar1 = RuntimeInterface::DestroyInstance(RuntimeInterface::GetInstance(), ::instance);
   local_88[0] = local_78;
   std::__cxx11::string::_M_construct<char_const*>((vector*)local_88, "Completed loader terminator");
   local_a8[0] = local_98;
   std::__cxx11::string::_M_construct<char_const*>((string*)local_a8, "xrDestroyInstance");
   if (( LoaderLogger::GetInstance():: ) && ( iVar2 = iVar2 != 0 )) {
      LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
      __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
      __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
   }

   local_68[0] = local_58;
   std::__cxx11::string::_M_construct<char_const*>((string*)local_68, "OpenXR-Loader");
   LoaderLogger::LogMessage(0x10ad20, 1, (string*)0x1, (string*)local_68, (string*)local_a8, (vector*)local_88);
   if (local_68[0] != local_58) {
      operator_delete(local_68[0], local_58[0] + 1);
   }

   if (local_a8[0] != local_98) {
      operator_delete(local_a8[0], local_98[0] + 1);
   }

   if (local_88[0] != local_78) {
      operator_delete(local_88[0], local_78[0] + 1);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x0010110a) *//* WARNING: Removing unreachable block (ram,0x00101110) *//* WARNING: Removing unreachable block (ram,0x0010111d) *//* WARNING: Removing unreachable block (ram,0x0010112a) *//* WARNING: Removing unreachable block (ram,0x00101133) *//* WARNING: Removing unreachable block (ram,0x00100f68) *//* WARNING: Removing unreachable block (ram,0x00100f70) *//* WARNING: Removing unreachable block (ram,0x00100f7d) *//* WARNING: Removing unreachable block (ram,0x00100f8a) *//* WARNING: Removing unreachable block (ram,0x00100f93) *//* WARNING: Removing unreachable block (ram,0x00100f9d) *//* WARNING: Removing unreachable block (ram,0x0010113d) *//* LoaderXrTermDestroyDebugUtilsMessengerEXT(XrDebugUtilsMessengerEXT_T*) */undefined4 LoaderXrTermDestroyDebugUtilsMessengerEXT(XrDebugUtilsMessengerEXT_T *param_1) {
   undefined4 uVar1;
   int iVar2;
   long lVar3;
   long in_FS_OFFSET;
   long *local_a8[2];
   long local_98[2];
   long *local_88[2];
   long local_78[2];
   long *local_68[2];
   long local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88[0] = local_78;
   std::__cxx11::string::_M_construct<char_const*>((vector*)local_88, "Entering loader terminator");
   local_a8[0] = local_98;
   std::__cxx11::string::_M_construct<char_const*>((string*)local_a8, "xrDestroyDebugUtilsMessengerEXT");
   if (( LoaderLogger::GetInstance():: ) && ( iVar2 = iVar2 != 0 )) {
      LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
      __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
      __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
   }

   local_68[0] = local_58;
   std::__cxx11::string::_M_construct<char_const*>((string*)local_68, "OpenXR-Loader");
   LoaderLogger::LogMessage(0x10ad20, 1, (string*)0x1, (string*)local_68, (string*)local_a8, (vector*)local_88);
   if (local_68[0] != local_58) {
      operator_delete(local_68[0], local_58[0] + 1);
   }

   if (local_a8[0] != local_98) {
      operator_delete(local_a8[0], local_98[0] + 1);
   }

   if (local_88[0] != local_78) {
      operator_delete(local_88[0], local_78[0] + 1);
   }

   lVar3 = RuntimeInterface::GetDebugUtilsMessengerDispatchTable(param_1);
   if (( LoaderLogger::GetInstance():: ) && ( iVar2 = iVar2 != 0 )) {
      LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
      __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
      __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
   }

   LoaderLogger::RemoveLogRecorder(0x10ad20);
   if (( RuntimeInterface::GetInstance():: ) && ( iVar2 = __cxa_guard_acquire(&RuntimeInterface::GetInstance(), ::instance) ),iVar2 != 0) {
      __cxa_atexit(std::unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>>::~unique_ptr, &RuntimeInterface::GetInstance(), ::instance, &__dso_handle);
      __cxa_guard_release(&RuntimeInterface::GetInstance(), ::instance);
   }

   RuntimeInterface::ForgetDebugMessenger (RuntimeInterface::GetInstance()::instance);
   if (*(code**)( lVar3 + 0x1d0 ) == (code*)0x0) {
      if (param_1 != (XrDebugUtilsMessengerEXT_T*)0x0) {
         operator_delete(param_1, 1);
      }

      uVar1 = 0;
   }
 else {
      uVar1 = ( **(code**)( lVar3 + 0x1d0 ) )(param_1);
   }

   local_88[0] = local_78;
   std::__cxx11::string::_M_construct<char_const*>((vector*)local_88, "Completed loader terminator");
   local_a8[0] = local_98;
   std::__cxx11::string::_M_construct<char_const*>((string*)local_a8, "xrDestroyDebugUtilsMessengerEXT");
   if (( LoaderLogger::GetInstance():: ) && ( iVar2 = iVar2 != 0 )) {
      LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
      __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
      __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
   }

   local_68[0] = local_58;
   std::__cxx11::string::_M_construct<char_const*>((string*)local_68, "OpenXR-Loader");
   LoaderLogger::LogMessage(0x10ad20, 1, (string*)0x1, (string*)local_68, (string*)local_a8, (vector*)local_88);
   if (local_68[0] != local_58) {
      operator_delete(local_68[0], local_58[0] + 1);
   }

   if (local_a8[0] != local_98) {
      operator_delete(local_a8[0], local_98[0] + 1);
   }

   if (local_88[0] != local_78) {
      operator_delete(local_88[0], local_78[0] + 1);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* LoaderXrTermSetDebugUtilsObjectNameEXT(XrInstance_T*, XrDebugUtilsObjectNameInfoEXT const*) */undefined4 LoaderXrTermSetDebugUtilsObjectNameEXT(XrInstance_T *param_1, XrDebugUtilsObjectNameInfoEXT *param_2) {
   char *__s;
   undefined8 uVar1;
   undefined4 uVar2;
   int iVar3;
   long lVar4;
   long *plVar5;
   void *pvVar6;
   long in_FS_OFFSET;
   undefined1 local_c8[16];
   long local_b8;
   long *local_a8[2];
   long local_98[2];
   long *local_88[2];
   long local_78[2];
   long *local_68;
   size_t local_60;
   long local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_c8 = (undefined1[16])0x0;
   local_b8 = 0;
   local_88[0] = local_78;
   std::__cxx11::string::_M_construct<char_const*>((vector*)local_88, "Entering loader terminator");
   local_a8[0] = local_98;
   std::__cxx11::string::_M_construct<char_const*>((string*)local_a8, "xrSetDebugUtilsObjectNameEXT");
   if (( LoaderLogger::GetInstance():: ) && ( iVar3 = iVar3 != 0 )) {
      LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
      __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
      __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
   }

   local_68 = local_58;
   std::__cxx11::string::_M_construct<char_const*>((string*)&local_68, "OpenXR-Loader");
   LoaderLogger::LogMessage(0x10ad20, 1, (string*)0x1, (string*)&local_68, (string*)local_a8, (vector*)local_88);
   if (local_68 != local_58) {
      operator_delete(local_68, local_58[0] + 1);
   }

   if (local_a8[0] != local_98) {
      operator_delete(local_a8[0], local_98[0] + 1);
   }

   if (local_88[0] != local_78) {
      operator_delete(local_88[0], local_78[0] + 1);
   }

   uVar1 = local_c8._8_8_;
   pvVar6 = (void*)local_c8._0_8_;
   if (local_c8._8_8_ != local_c8._0_8_) {
      do {
         if (*(void**)( (long)pvVar6 + 0x10 ) != (void*)( (long)pvVar6 + 0x20 )) {
            operator_delete(*(void**)( (long)pvVar6 + 0x10 ), *(long*)( (long)pvVar6 + 0x20 ) + 1);
         }

         pvVar6 = (void*)( (long)pvVar6 + 0x30 );
      }
 while ( (void*)uVar1 != pvVar6 );
   }

   if ((void*)local_c8._0_8_ != (void*)0x0) {
      operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
   }

   lVar4 = RuntimeInterface::GetDispatchTable(param_1);
   uVar2 = 0;
   if (*(code**)( lVar4 + 0x1c0 ) != (code*)0x0) {
      uVar2 = ( **(code**)( lVar4 + 0x1c0 ) )(param_1, param_2);
   }

   if (( LoaderLogger::GetInstance():: ) && ( iVar3 = iVar3 != 0 )) {
      LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
      __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
      __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
   }

   __s = *(char**)( param_2 + 0x20 );
   if (__s == (char*)0x0) {
      local_68 = local_58;
      std::__throw_logic_error("basic_string: construction from null is not valid");
      goto LAB_00101833;
   }

   local_68 = local_58;
   local_60 = strlen(__s);
   local_c8._0_8_ = local_60;
   if (local_60 < 0x10) {
      plVar5 = local_58;
      if (local_60 == 1) {
         local_58[0] = CONCAT71(local_58[0]._1_7_, *__s);
      }
 else if (local_60 != 0) goto LAB_001017bc;
   }
 else {
      local_68 = (long*)std::__cxx11::string::_M_create((ulong*)&local_68, (ulong)local_c8);
      local_58[0] = local_c8._0_8_;
      plVar5 = local_68;
      LAB_001017bc:memcpy(plVar5, __s, local_60);
      local_60 = local_c8._0_8_;
      plVar5 = local_68;
   }

   *(undefined1*)( (long)plVar5 + local_60 ) = 0;
   LoaderLogger::AddObjectName (LoaderLogger::GetInstance()::instance,*(undefined8 *)(param_2 + 0x18);
   &local_68;
   if (local_68 != local_58) {
      operator_delete(local_68, local_58[0] + 1);
   }

   local_b8 = 0;
   local_c8 = (undefined1[16])0x0;
   local_88[0] = local_78;
   std::__cxx11::string::_M_construct<char_const*>((vector*)local_88, "Completed loader terminator");
   local_a8[0] = local_98;
   std::__cxx11::string::_M_construct<char_const*>((string*)local_a8, "xrSetDebugUtilsObjectNameEXT");
   if (( LoaderLogger::GetInstance():: ) && ( iVar3 = iVar3 != 0 )) {
      LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
      __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
      __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
   }

   local_68 = local_58;
   std::__cxx11::string::_M_construct<char_const*>((string*)&local_68, "OpenXR-Loader");
   LoaderLogger::LogMessage(0x10ad20, 1, (string*)0x1, (string*)&local_68, (string*)local_a8, (vector*)local_88);
   if (local_68 != local_58) {
      operator_delete(local_68, local_58[0] + 1);
   }

   if (local_a8[0] != local_98) {
      operator_delete(local_a8[0], local_98[0] + 1);
   }

   if (local_88[0] != local_78) {
      operator_delete(local_88[0], local_78[0] + 1);
   }

   uVar1 = local_c8._8_8_;
   pvVar6 = (void*)local_c8._0_8_;
   if (local_c8._8_8_ != local_c8._0_8_) {
      do {
         if (*(void**)( (long)pvVar6 + 0x10 ) != (void*)( (long)pvVar6 + 0x20 )) {
            operator_delete(*(void**)( (long)pvVar6 + 0x10 ), *(long*)( (long)pvVar6 + 0x20 ) + 1);
         }

         pvVar6 = (void*)( (long)pvVar6 + 0x30 );
      }
 while ( (void*)uVar1 != pvVar6 );
   }

   if ((void*)local_c8._0_8_ != (void*)0x0) {
      operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   LAB_00101833:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* LoaderXrEnumerateApiLayerProperties(unsigned int, unsigned int*, XrApiLayerProperties*) */int LoaderXrEnumerateApiLayerProperties(uint param_1, uint *param_2, XrApiLayerProperties *param_3) {
   long lVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   int iVar4;
   int iVar5;
   void *pvVar6;
   long in_FS_OFFSET;
   long local_d0;
   undefined1 local_c8[16];
   long local_b8;
   long *local_a8;
   long local_a0;
   long local_98[2];
   long *local_88;
   long local_80;
   long local_78[2];
   long *local_68[2];
   long local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_c8 = (undefined1[16])0x0;
   local_b8 = 0;
   local_88 = local_78;
   std::__cxx11::string::_M_construct<char_const*>((vector*)&local_88, "Entering loader trampoline");
   local_a8 = local_98;
   std::__cxx11::string::_M_construct<char_const*>((string*)&local_a8, "xrEnumerateApiLayerProperties");
   if (( LoaderLogger::GetInstance():: ) && ( iVar4 = iVar4 != 0 )) {
      LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
      __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
      __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
   }

   local_68[0] = local_58;
   std::__cxx11::string::_M_construct<char_const*>((string*)local_68, "OpenXR-Loader");
   LoaderLogger::LogMessage(0x10ad20, 1, (string*)0x1, (string*)local_68, (string*)&local_a8, (vector*)&local_88);
   if (local_68[0] != local_58) {
      operator_delete(local_68[0], local_58[0] + 1);
   }

   if (local_a8 != local_98) {
      operator_delete(local_a8, local_98[0] + 1);
   }

   if (local_88 != local_78) {
      operator_delete(local_88, local_78[0] + 1);
   }

   uVar2 = local_c8._8_8_;
   pvVar6 = (void*)local_c8._0_8_;
   if (local_c8._8_8_ != local_c8._0_8_) {
      do {
         if (*(void**)( (long)pvVar6 + 0x10 ) != (void*)( (long)pvVar6 + 0x20 )) {
            operator_delete(*(void**)( (long)pvVar6 + 0x10 ), *(long*)( (long)pvVar6 + 0x20 ) + 1);
         }

         pvVar6 = (void*)( (long)pvVar6 + 0x30 );
      }
 while ( (void*)uVar2 != pvVar6 );
   }

   if ((void*)local_c8._0_8_ != (void*)0x0) {
      operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
   }

   iVar4 = pthread_mutex_lock((pthread_mutex_t*)GetGlobalLoaderMutex(), ::loader_mutex);
   if (iVar4 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar4);
   }

   local_68[0] = local_58;
   std::__cxx11::string::_M_construct<char_const*>((string*)local_68, "xrEnumerateApiLayerProperties");
   iVar4 = ApiLayerInterface::GetApiLayerProperties((string*)local_68, param_1, param_2, param_3);
   if (local_68[0] != local_58) {
      operator_delete(local_68[0], local_58[0] + 1);
   }

   if (iVar4 < 0) {
      local_c8 = (undefined1[16])0x0;
      local_b8 = 0;
      local_d0 = 0x2f;
      local_88 = local_78;
      local_88 = (long*)std::__cxx11::string::_M_create((ulong*)&local_88, ( ulong ) & local_d0);
      lVar1 = _UNK_0010ae08;
      local_78[0] = local_d0;
      *local_88 = __LC15;
      local_88[1] = lVar1;
      lVar1 = _UNK_0010ae18;
      local_88[2] = __LC16;
      local_88[3] = lVar1;
      uVar2 = _UNK_0010ae28;
      *(undefined8*)( (long)local_88 + 0x1f ) = __LC17;
      *(undefined8*)( (long)local_88 + 0x27 ) = uVar2;
      local_80 = local_d0;
      *(undefined1*)( (long)local_88 + local_d0 ) = 0;
      local_d0 = 0x1d;
      local_a8 = local_98;
      local_a8 = (long*)std::__cxx11::string::_M_create((ulong*)&local_a8, ( ulong ) & local_d0);
      lVar1 = _UNK_0010ae38;
      uVar3 = _UNK_0010ae28;
      uVar2 = __LC17;
      local_98[0] = local_d0;
      *local_a8 = __LC18;
      local_a8[1] = lVar1;
      *(undefined8*)( (long)local_a8 + 0xd ) = uVar2;
      *(undefined8*)( (long)local_a8 + 0x15 ) = uVar3;
      local_a0 = local_d0;
      *(undefined1*)( (long)local_a8 + local_d0 ) = 0;
      if (( LoaderLogger::GetInstance():: ) && ( iVar5 = iVar5 != 0 )) {
         LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
         __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
      }

      local_68[0] = local_58;
      std::__cxx11::string::_M_construct<char_const*>((string*)local_68, "OpenXR-Loader");
      LoaderLogger::LogMessage(0x10ad20, 0x1000, (string*)0x1, (string*)local_68, (string*)&local_a8, (vector*)&local_88);
      if (local_68[0] != local_58) {
         operator_delete(local_68[0], local_58[0] + 1);
      }

      if (local_a8 != local_98) {
         operator_delete(local_a8, local_98[0] + 1);
      }

      if (local_88 != local_78) {
         operator_delete(local_88, local_78[0] + 1);
      }

      uVar2 = local_c8._8_8_;
      pvVar6 = (void*)local_c8._0_8_;
      if (local_c8._8_8_ != local_c8._0_8_) {
         do {
            if (*(void**)( (long)pvVar6 + 0x10 ) != (void*)( (long)pvVar6 + 0x20 )) {
               operator_delete(*(void**)( (long)pvVar6 + 0x10 ), *(long*)( (long)pvVar6 + 0x20 ) + 1);
            }

            pvVar6 = (void*)( (long)pvVar6 + 0x30 );
         }
 while ( (void*)uVar2 != pvVar6 );
      }

      if ((void*)local_c8._0_8_ != (void*)0x0) {
         operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
      }

   }

   pthread_mutex_unlock((pthread_mutex_t*)GetGlobalLoaderMutex(), ::loader_mutex);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar4;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* LoaderTrampolineSessionEndDebugUtilsLabelRegionEXT(XrSession_T*) */undefined8 LoaderTrampolineSessionEndDebugUtilsLabelRegionEXT(XrSession_T *param_1) {
   long lVar1;
   long lVar2;
   int iVar3;
   undefined8 uVar4;
   LoaderInstance *pLVar5;
   long in_FS_OFFSET;
   long local_d0;
   undefined1 local_c8[16];
   long local_b8;
   long *local_a8;
   long local_a0;
   long local_98[2];
   long *local_88;
   long local_80;
   long local_78[2];
   long *local_68[2];
   long local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (XrSession_T*)0x0) {
      local_c8 = (undefined1[16])0x0;
      local_b8 = 0;
      local_d0 = 0x21;
      local_88 = local_78;
      local_88 = (long*)std::__cxx11::string::_M_create((ulong*)&local_88, ( ulong ) & local_d0);
      lVar1 = _UNK_0010ae48;
      local_78[0] = local_d0;
      *local_88 = __LC21;
      local_88[1] = lVar1;
      lVar2 = _UNK_0010ae58;
      lVar1 = __LC22;
      *(undefined1*)( local_88 + 4 ) = 0x2e;
      local_88[2] = lVar1;
      local_88[3] = lVar2;
      local_80 = local_d0;
      *(undefined1*)( (long)local_88 + local_d0 ) = 0;
      local_d0 = 0x24;
      local_a8 = local_98;
      local_a8 = (long*)std::__cxx11::string::_M_create((ulong*)&local_a8, ( ulong ) & local_d0);
      lVar1 = _UNK_0010ae68;
      local_98[0] = local_d0;
      *local_a8 = __LC23;
      local_a8[1] = lVar1;
      lVar2 = _UNK_0010ae78;
      lVar1 = __LC24;
      *(undefined4*)( local_a8 + 4 ) = 0x5458456e;
      local_a8[2] = lVar1;
      local_a8[3] = lVar2;
      local_a0 = local_d0;
      *(undefined1*)( (long)local_a8 + local_d0 ) = 0;
      if (( LoaderLogger::GetInstance():: ) && ( iVar3 = iVar3 != 0 )) {
         LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
         __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
      }

      local_68[0] = local_58;
      std::__cxx11::string::_M_construct<char_const*>((string*)local_68, "OpenXR-Loader");
      LoaderLogger::LogMessage(0x10ad20, 0x1000, (string*)0x1, (string*)local_68, (string*)&local_a8, (vector*)&local_88);
      if (local_68[0] != local_58) {
         operator_delete(local_68[0], local_58[0] + 1);
      }

      if (local_a8 != local_98) {
         operator_delete(local_a8, local_98[0] + 1);
      }

      if (local_88 != local_78) {
         operator_delete(local_88, local_78[0] + 1);
      }

      uVar4 = local_c8._8_8_;
      for (pLVar5 = (LoaderInstance*)local_c8._0_8_; (LoaderInstance*)uVar4 != pLVar5; pLVar5 = pLVar5 + 0x30) {
         if (*(LoaderInstance**)( pLVar5 + 0x10 ) != pLVar5 + 0x20) {
            operator_delete(*(LoaderInstance**)( pLVar5 + 0x10 ), *(long*)( pLVar5 + 0x20 ) + 1);
         }

      }

      if ((LoaderInstance*)local_c8._0_8_ != (LoaderInstance*)0x0) {
         operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
      }

      uVar4 = 0xfffffff4;
   }
 else {
      uVar4 = ActiveLoaderInstance::Get((LoaderInstance**)local_c8, "xrSessionEndDebugUtilsLabelRegionEXT");
      if (-1 < (int)uVar4) {
         if (( LoaderLogger::GetInstance():: ) && ( iVar3 = iVar3 != 0 )) {
            LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
            __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
            __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
         }

         LoaderLogger::EndLabelRegion((XrSession_T*)LoaderLogger::GetInstance(), ::instance);
         uVar4 = 0;
         if (*(code**)( *(long*)( local_c8._0_8_ + 0x48 ) + 0x1e8 ) != (code*)0x0) {
            uVar4 = ( **(code**)( *(long*)( local_c8._0_8_ + 0x48 ) + 0x1e8 ) )(param_1);
         }

      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* LoaderTrampolineDestroyDebugUtilsMessengerEXT(XrDebugUtilsMessengerEXT_T*) */int LoaderTrampolineDestroyDebugUtilsMessengerEXT(XrDebugUtilsMessengerEXT_T *param_1) {
   LoaderInstance *pLVar1;
   undefined8 uVar2;
   int iVar3;
   int iVar4;
   void *pvVar5;
   long lVar6;
   long in_FS_OFFSET;
   LoaderInstance *local_d0;
   undefined1 local_c8[16];
   long local_b8;
   LoaderInstance **local_a8;
   LoaderInstance *local_a0;
   LoaderInstance *local_98[2];
   LoaderInstance **local_88;
   LoaderInstance *local_80;
   LoaderInstance *local_78[2];
   long *local_68[2];
   long local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_c8 = (undefined1[16])0x0;
   local_b8 = 0;
   local_88 = local_78;
   std::__cxx11::string::_M_construct<char_const*>((vector*)&local_88, "Entering loader trampoline");
   local_a8 = local_98;
   std::__cxx11::string::_M_construct<char_const*>((string*)&local_a8, "xrDestroyDebugUtilsMessengerEXT");
   if (( LoaderLogger::GetInstance():: ) && ( iVar3 = iVar3 != 0 )) {
      LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
      __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
      __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
   }

   local_68[0] = local_58;
   std::__cxx11::string::_M_construct<char_const*>((string*)local_68, "OpenXR-Loader");
   LoaderLogger::LogMessage(0x10ad20, 1, (string*)0x1, (string*)local_68, (string*)&local_a8, (vector*)&local_88);
   if (local_68[0] != local_58) {
      operator_delete(local_68[0], local_58[0] + 1);
   }

   if (local_a8 != local_98) {
      operator_delete(local_a8, ( ulong )(local_98[0] + 1));
   }

   if (local_88 != local_78) {
      operator_delete(local_88, ( ulong )(local_78[0] + 1));
   }

   uVar2 = local_c8._8_8_;
   pvVar5 = (void*)local_c8._0_8_;
   if (local_c8._8_8_ != local_c8._0_8_) {
      do {
         if (*(void**)( (long)pvVar5 + 0x10 ) != (void*)( (long)pvVar5 + 0x20 )) {
            operator_delete(*(void**)( (long)pvVar5 + 0x10 ), *(long*)( (long)pvVar5 + 0x20 ) + 1);
         }

         pvVar5 = (void*)( (long)pvVar5 + 0x30 );
      }
 while ( (void*)uVar2 != pvVar5 );
   }

   if ((void*)local_c8._0_8_ != (void*)0x0) {
      operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
   }

   if (param_1 == (XrDebugUtilsMessengerEXT_T*)0x0) {
      local_c8 = (undefined1[16])0x0;
      local_b8 = 0;
      local_d0 = (LoaderInstance*)0x23;
      local_88 = local_78;
      local_88 = (LoaderInstance**)std::__cxx11::string::_M_create((ulong*)&local_88, ( ulong ) & local_d0);
      pLVar1 = _UNK_0010ae88;
      local_78[0] = local_d0;
      *local_88 = __LC26;
      local_88[1] = pLVar1;
      pLVar1 = _UNK_0010ae98;
      local_88[2] = __LC27;
      local_88[3] = pLVar1;
      *(undefined4*)( (long)local_88 + 0x1f ) = 0x2e454c44;
      local_80 = local_d0;
      *(LoaderInstance*)( (long)local_88 + (long)local_d0 ) = (LoaderInstance)0x0;
      local_d0 = (LoaderInstance*)0x1f;
      local_a8 = local_98;
      local_a8 = (LoaderInstance**)std::__cxx11::string::_M_create((ulong*)&local_a8, ( ulong ) & local_d0);
      pLVar1 = _UNK_0010aea8;
      local_98[0] = local_d0;
      *local_a8 = __LC28;
      local_a8[1] = pLVar1;
      uVar2 = _UNK_0010aeb8;
      *(undefined8*)( (long)local_a8 + 0xf ) = __LC29;
      *(undefined8*)( (long)local_a8 + 0x17 ) = uVar2;
      local_a0 = local_d0;
      *(LoaderInstance*)( (long)local_a8 + (long)local_d0 ) = (LoaderInstance)0x0;
      if (( LoaderLogger::GetInstance():: ) && ( iVar3 = iVar3 != 0 )) {
         LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
         __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
      }

      local_68[0] = local_58;
      std::__cxx11::string::_M_construct<char_const*>((string*)local_68, "OpenXR-Loader");
      LoaderLogger::LogMessage(0x10ad20, 0x1000, (string*)0x1, (string*)local_68, (string*)&local_a8, (vector*)&local_88);
      if (local_68[0] != local_58) {
         operator_delete(local_68[0], local_58[0] + 1);
      }

      if (local_a8 != local_98) {
         operator_delete(local_a8, ( ulong )(local_98[0] + 1));
      }

      if (local_88 != local_78) {
         operator_delete(local_88, ( ulong )(local_78[0] + 1));
      }

      uVar2 = local_c8._8_8_;
      for (lVar6 = local_c8._0_8_; uVar2 != lVar6; lVar6 = lVar6 + 0x30) {
         if (*(void**)( lVar6 + 0x10 ) != (void*)( lVar6 + 0x20 )) {
            operator_delete(*(void**)( lVar6 + 0x10 ), *(long*)( lVar6 + 0x20 ) + 1);
         }

      }

      if ((void*)local_c8._0_8_ != (void*)0x0) {
         operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
      }

      iVar3 = -0xc;
   }
 else {
      iVar3 = ActiveLoaderInstance::Get(&local_d0, "xrDestroyDebugUtilsMessengerEXT");
      if (-1 < iVar3) {
         iVar3 = ( **(code**)( *(long*)( local_d0 + 0x48 ) + 0x1d0 ) )(param_1);
         local_c8 = (undefined1[16])0x0;
         local_b8 = 0;
         local_88 = local_78;
         std::__cxx11::string::_M_construct<char_const*>((vector*)&local_88, "Completed loader trampoline");
         local_a8 = local_98;
         std::__cxx11::string::_M_construct<char_const*>((string*)&local_a8, "xrDestroyDebugUtilsMessengerEXT");
         if (( LoaderLogger::GetInstance():: ) && ( iVar4 = iVar4 != 0 )) {
            LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
            __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
            __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
         }

         local_68[0] = local_58;
         std::__cxx11::string::_M_construct<char_const*>((string*)local_68, "OpenXR-Loader");
         LoaderLogger::LogMessage(0x10ad20, 1, (string*)0x1, (string*)local_68, (string*)&local_a8, (vector*)&local_88);
         if (local_68[0] != local_58) {
            operator_delete(local_68[0], local_58[0] + 1);
         }

         if (local_a8 != local_98) {
            operator_delete(local_a8, ( ulong )(local_98[0] + 1));
         }

         if (local_88 != local_78) {
            operator_delete(local_88, ( ulong )(local_78[0] + 1));
         }

         uVar2 = local_c8._8_8_;
         pvVar5 = (void*)local_c8._0_8_;
         if (local_c8._8_8_ != local_c8._0_8_) {
            do {
               if (*(void**)( (long)pvVar5 + 0x10 ) != (void*)( (long)pvVar5 + 0x20 )) {
                  operator_delete(*(void**)( (long)pvVar5 + 0x10 ), *(long*)( (long)pvVar5 + 0x20 ) + 1);
               }

               pvVar5 = (void*)( (long)pvVar5 + 0x30 );
            }
 while ( (void*)uVar2 != pvVar5 );
         }

         if ((void*)local_c8._0_8_ != (void*)0x0) {
            operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
         }

      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* LoaderTrampolineCreateDebugUtilsMessengerEXT(XrInstance_T*, XrDebugUtilsMessengerCreateInfoEXT
   const*, XrDebugUtilsMessengerEXT_T**) */int LoaderTrampolineCreateDebugUtilsMessengerEXT(XrInstance_T *param_1, XrDebugUtilsMessengerCreateInfoEXT *param_2, XrDebugUtilsMessengerEXT_T **param_3) {
   undefined8 uVar1;
   LoaderInstance *pLVar2;
   LoaderInstance *pLVar3;
   int iVar4;
   int iVar5;
   void *pvVar6;
   long lVar7;
   long in_FS_OFFSET;
   LoaderInstance *local_d0;
   undefined1 local_c8[16];
   long local_b8;
   LoaderInstance **local_a8;
   LoaderInstance *local_a0;
   LoaderInstance *local_98[2];
   LoaderInstance **local_88;
   LoaderInstance *local_80;
   LoaderInstance *local_78[2];
   long *local_68[2];
   long local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_c8 = (undefined1[16])0x0;
   local_b8 = 0;
   local_88 = local_78;
   std::__cxx11::string::_M_construct<char_const*>((vector*)&local_88, "Entering loader trampoline");
   local_a8 = local_98;
   std::__cxx11::string::_M_construct<char_const*>((string*)&local_a8, "xrCreateDebugUtilsMessengerEXT");
   if (( LoaderLogger::GetInstance():: ) && ( iVar4 = iVar4 != 0 )) {
      LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
      __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
      __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
   }

   local_68[0] = local_58;
   std::__cxx11::string::_M_construct<char_const*>((string*)local_68, "OpenXR-Loader");
   LoaderLogger::LogMessage(0x10ad20, 1, (string*)0x1, (string*)local_68, (string*)&local_a8, (vector*)&local_88);
   if (local_68[0] != local_58) {
      operator_delete(local_68[0], local_58[0] + 1);
   }

   if (local_a8 != local_98) {
      operator_delete(local_a8, ( ulong )(local_98[0] + 1));
   }

   if (local_88 != local_78) {
      operator_delete(local_88, ( ulong )(local_78[0] + 1));
   }

   uVar1 = local_c8._8_8_;
   pvVar6 = (void*)local_c8._0_8_;
   if (local_c8._8_8_ != local_c8._0_8_) {
      do {
         if (*(void**)( (long)pvVar6 + 0x10 ) != (void*)( (long)pvVar6 + 0x20 )) {
            operator_delete(*(void**)( (long)pvVar6 + 0x10 ), *(long*)( (long)pvVar6 + 0x20 ) + 1);
         }

         pvVar6 = (void*)( (long)pvVar6 + 0x30 );
      }
 while ( (void*)uVar1 != pvVar6 );
   }

   if ((void*)local_c8._0_8_ != (void*)0x0) {
      operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
   }

   if (param_1 == (XrInstance_T*)0x0) {
      local_c8 = (undefined1[16])0x0;
      local_b8 = 0;
      local_d0 = (LoaderInstance*)0x22;
      local_88 = local_78;
      local_88 = (LoaderInstance**)std::__cxx11::string::_M_create((ulong*)&local_88, ( ulong ) & local_d0);
      pLVar2 = _UNK_0010aec8;
      local_78[0] = local_d0;
      *local_88 = __LC30;
      local_88[1] = pLVar2;
      pLVar3 = _UNK_0010aed8;
      pLVar2 = __LC31;
      *(undefined2*)( local_88 + 4 ) = 0x2e45;
      local_88[2] = pLVar2;
      local_88[3] = pLVar3;
      local_80 = local_d0;
      *(LoaderInstance*)( (long)local_88 + (long)local_d0 ) = (LoaderInstance)0x0;
      local_d0 = (LoaderInstance*)0x1e;
      local_a8 = local_98;
      local_a8 = (LoaderInstance**)std::__cxx11::string::_M_create((ulong*)&local_a8, ( ulong ) & local_d0);
      pLVar2 = _UNK_0010aee8;
      local_98[0] = local_d0;
      *local_a8 = __LC32;
      local_a8[1] = pLVar2;
      uVar1 = _UNK_0010aeb8;
      *(undefined8*)( (long)local_a8 + 0xe ) = __LC29;
      *(undefined8*)( (long)local_a8 + 0x16 ) = uVar1;
      local_a0 = local_d0;
      *(LoaderInstance*)( (long)local_a8 + (long)local_d0 ) = (LoaderInstance)0x0;
      if (( LoaderLogger::GetInstance():: ) && ( iVar4 = iVar4 != 0 )) {
         LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
         __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
      }

      local_68[0] = local_58;
      std::__cxx11::string::_M_construct<char_const*>((string*)local_68, "OpenXR-Loader");
      LoaderLogger::LogMessage(0x10ad20, 0x1000, (string*)0x1, (string*)local_68, (string*)&local_a8, (vector*)&local_88);
      if (local_68[0] != local_58) {
         operator_delete(local_68[0], local_58[0] + 1);
      }

      if (local_a8 != local_98) {
         operator_delete(local_a8, ( ulong )(local_98[0] + 1));
      }

      if (local_88 != local_78) {
         operator_delete(local_88, ( ulong )(local_78[0] + 1));
      }

      uVar1 = local_c8._8_8_;
      for (lVar7 = local_c8._0_8_; uVar1 != lVar7; lVar7 = lVar7 + 0x30) {
         if (*(void**)( lVar7 + 0x10 ) != (void*)( lVar7 + 0x20 )) {
            operator_delete(*(void**)( lVar7 + 0x10 ), *(long*)( lVar7 + 0x20 ) + 1);
         }

      }

      if ((void*)local_c8._0_8_ != (void*)0x0) {
         operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
      }

      iVar4 = -0xc;
   }
 else {
      iVar4 = ActiveLoaderInstance::Get(&local_d0, "xrCreateDebugUtilsMessengerEXT");
      if (-1 < iVar4) {
         iVar4 = ( **(code**)( *(long*)( local_d0 + 0x48 ) + 0x1c8 ) )(param_1, param_2, param_3);
         local_c8 = (undefined1[16])0x0;
         local_b8 = 0;
         local_88 = local_78;
         std::__cxx11::string::_M_construct<char_const*>((vector*)&local_88, "Completed loader trampoline");
         local_a8 = local_98;
         std::__cxx11::string::_M_construct<char_const*>((string*)&local_a8, "xrCreateDebugUtilsMessengerEXT");
         if (( LoaderLogger::GetInstance():: ) && ( iVar5 = iVar5 != 0 )) {
            LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
            __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
            __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
         }

         local_68[0] = local_58;
         std::__cxx11::string::_M_construct<char_const*>((string*)local_68, "OpenXR-Loader");
         LoaderLogger::LogMessage(0x10ad20, 1, (string*)0x1, (string*)local_68, (string*)&local_a8, (vector*)&local_88);
         if (local_68[0] != local_58) {
            operator_delete(local_68[0], local_58[0] + 1);
         }

         if (local_a8 != local_98) {
            operator_delete(local_a8, ( ulong )(local_98[0] + 1));
         }

         if (local_88 != local_78) {
            operator_delete(local_88, ( ulong )(local_78[0] + 1));
         }

         uVar1 = local_c8._8_8_;
         pvVar6 = (void*)local_c8._0_8_;
         if (local_c8._8_8_ != local_c8._0_8_) {
            do {
               if (*(void**)( (long)pvVar6 + 0x10 ) != (void*)( (long)pvVar6 + 0x20 )) {
                  operator_delete(*(void**)( (long)pvVar6 + 0x10 ), *(long*)( (long)pvVar6 + 0x20 ) + 1);
               }

               pvVar6 = (void*)( (long)pvVar6 + 0x30 );
            }
 while ( (void*)uVar1 != pvVar6 );
         }

         if ((void*)local_c8._0_8_ != (void*)0x0) {
            operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
         }

      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* LoaderXrTermCreateDebugUtilsMessengerEXT(XrInstance_T*, XrDebugUtilsMessengerCreateInfoEXT
   const*, XrDebugUtilsMessengerEXT_T**) */int LoaderXrTermCreateDebugUtilsMessengerEXT(XrInstance_T *param_1, XrDebugUtilsMessengerCreateInfoEXT *param_2, XrDebugUtilsMessengerEXT_T **param_3) {
   undefined8 uVar1;
   int iVar2;
   int iVar3;
   long lVar4;
   XrDebugUtilsMessengerEXT_T *pXVar5;
   void *pvVar6;
   long in_FS_OFFSET;
   long local_d0;
   undefined1 local_c8[16];
   long local_b8;
   long *local_a8;
   long local_a0;
   long local_98[2];
   long *local_88;
   long local_80;
   long local_78[2];
   long *local_68;
   long local_60;
   long local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_c8 = (undefined1[16])0x0;
   local_b8 = 0;
   local_88 = local_78;
   std::__cxx11::string::_M_construct<char_const*>((vector*)&local_88, "Entering loader terminator");
   local_a8 = local_98;
   std::__cxx11::string::_M_construct<char_const*>((string*)&local_a8, "xrCreateDebugUtilsMessengerEXT");
   if (( LoaderLogger::GetInstance():: ) && ( iVar2 = iVar2 != 0 )) {
      LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
      __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
      __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
   }

   local_68 = local_58;
   std::__cxx11::string::_M_construct<char_const*>((string*)&local_68, "OpenXR-Loader");
   LoaderLogger::LogMessage(0x10ad20, 1, (string*)0x1, (string*)&local_68, (string*)&local_a8, (vector*)&local_88);
   if (local_68 != local_58) {
      operator_delete(local_68, local_58[0] + 1);
   }

   if (local_a8 != local_98) {
      operator_delete(local_a8, local_98[0] + 1);
   }

   if (local_88 != local_78) {
      operator_delete(local_88, local_78[0] + 1);
   }

   uVar1 = local_c8._8_8_;
   pvVar6 = (void*)local_c8._0_8_;
   if (local_c8._8_8_ != local_c8._0_8_) {
      do {
         if (*(void**)( (long)pvVar6 + 0x10 ) != (void*)( (long)pvVar6 + 0x20 )) {
            operator_delete(*(void**)( (long)pvVar6 + 0x10 ), *(long*)( (long)pvVar6 + 0x20 ) + 1);
         }

         pvVar6 = (void*)( (long)pvVar6 + 0x30 );
      }
 while ( (void*)uVar1 != pvVar6 );
   }

   if ((void*)local_c8._0_8_ != (void*)0x0) {
      operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
   }

   if (param_3 == (XrDebugUtilsMessengerEXT_T**)0x0) {
      local_c8 = (undefined1[16])0x0;
      local_b8 = 0;
      local_d0 = 0x19;
      local_68 = local_58;
      local_68 = (long*)std::__cxx11::string::_M_create((ulong*)&local_68, ( ulong ) & local_d0);
      lVar4 = _UNK_0010aef8;
      local_58[0] = local_d0;
      *local_68 = __LC33;
      local_68[1] = lVar4;
      uVar1 = _UNK_0010af08;
      *(undefined8*)( (long)local_68 + 9 ) = __LC34;
      *(undefined8*)( (long)local_68 + 0x11 ) = uVar1;
      local_60 = local_d0;
      *(undefined1*)( (long)local_68 + local_d0 ) = 0;
      local_d0 = 0x1e;
      local_88 = local_78;
      local_88 = (long*)std::__cxx11::string::_M_create((ulong*)&local_88, ( ulong ) & local_d0);
      lVar4 = _UNK_0010aee8;
      local_78[0] = local_d0;
      *local_88 = __LC32;
      local_88[1] = lVar4;
      uVar1 = _UNK_0010aeb8;
      *(undefined8*)( (long)local_88 + 0xe ) = __LC29;
      *(undefined8*)( (long)local_88 + 0x16 ) = uVar1;
      local_80 = local_d0;
      *(undefined1*)( (long)local_88 + local_d0 ) = 0;
      local_d0 = 0x37;
      local_a8 = local_98;
      local_a8 = (long*)std::__cxx11::string::_M_create((ulong*)&local_a8, ( ulong ) & local_d0);
      lVar4 = _UNK_0010af18;
      local_98[0] = local_d0;
      *local_a8 = __LC35;
      local_a8[1] = lVar4;
      lVar4 = _UNK_0010af28;
      local_a8[2] = __LC36;
      local_a8[3] = lVar4;
      lVar4 = _UNK_0010af38;
      local_a8[4] = __LC37;
      local_a8[5] = lVar4;
      *(undefined8*)( (long)local_a8 + 0x2f ) = 0x726574656d617261;
      local_a0 = local_d0;
      *(undefined1*)( (long)local_a8 + local_d0 ) = 0;
      if (( LoaderLogger::GetInstance():: ) && ( iVar2 = iVar2 != 0 )) {
         LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
         __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
      }

      LoaderLogger::LogMessage(0x10ad20, 0x1000, (string*)0x2, (string*)&local_a8, (string*)&local_88, (vector*)&local_68);
      if (local_a8 != local_98) {
         operator_delete(local_a8, local_98[0] + 1);
      }

      if (local_88 != local_78) {
         operator_delete(local_88, local_78[0] + 1);
      }

      if (local_68 != local_58) {
         operator_delete(local_68, local_58[0] + 1);
      }

      uVar1 = local_c8._8_8_;
      for (lVar4 = local_c8._0_8_; uVar1 != lVar4; lVar4 = lVar4 + 0x30) {
         if (*(void**)( lVar4 + 0x10 ) != (void*)( lVar4 + 0x20 )) {
            operator_delete(*(void**)( lVar4 + 0x10 ), *(long*)( lVar4 + 0x20 ) + 1);
         }

      }

      if ((void*)local_c8._0_8_ != (void*)0x0) {
         operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
      }

      iVar2 = -1;
      goto LAB_001030b5;
   }

   lVar4 = RuntimeInterface::GetDispatchTable(param_1);
   if (*(code**)( lVar4 + 0x1c8 ) == (code*)0x0) {
      iVar2 = 0;
      pXVar5 = (XrDebugUtilsMessengerEXT_T*)operator_new(1);
      *param_3 = pXVar5;
      joined_r0x00103229:if (( LoaderLogger::GetInstance():: ) && ( iVar3 = iVar3 != 0 )) {
         LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
         __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
      }

      MakeDebugUtilsLoaderLogRecorder((XrDebugUtilsMessengerCreateInfoEXT*)local_c8, (XrDebugUtilsMessengerEXT_T*)param_2);
      LoaderLogger::AddLogRecorderForXrInstance((XrInstance_T*)LoaderLogger::GetInstance(), ::instance, (unique_ptr*)param_1);
      if ((long*)local_c8._0_8_ != (long*)0x0) {
         ( **(code**)( *(long*)local_c8._0_8_ + 8 ) )();
      }

      if (( RuntimeInterface::GetInstance():: ) && ( iVar3 = __cxa_guard_acquire(&RuntimeInterface::GetInstance(), ::instance) ),iVar3 != 0) {
         __cxa_atexit(std::unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>>::~unique_ptr, &RuntimeInterface::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&RuntimeInterface::GetInstance(), ::instance);
      }

      RuntimeInterface::TrackDebugMessenger (RuntimeInterface::GetInstance()::instance,(XrDebugUtilsMessengerEXT_T *);
   }
 else {
      iVar2 = ( **(code**)( lVar4 + 0x1c8 ) )(param_1, param_2, param_3);
      if (-1 < iVar2) goto joined_r0x00103229;
   }

   local_b8 = 0;
   local_c8 = (undefined1[16])0x0;
   local_88 = local_78;
   std::__cxx11::string::_M_construct<char_const*>((vector*)&local_88, "Completed loader terminator");
   local_a8 = local_98;
   std::__cxx11::string::_M_construct<char_const*>((string*)&local_a8, "xrCreateDebugUtilsMessengerEXT");
   if (( LoaderLogger::GetInstance():: ) && ( iVar3 = iVar3 != 0 )) {
      LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
      __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
      __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
   }

   local_68 = local_58;
   std::__cxx11::string::_M_construct<char_const*>((string*)&local_68, "OpenXR-Loader");
   LoaderLogger::LogMessage(0x10ad20, 1, (string*)0x1, (string*)&local_68, (string*)&local_a8, (vector*)&local_88);
   if (local_68 != local_58) {
      operator_delete(local_68, local_58[0] + 1);
   }

   if (local_a8 != local_98) {
      operator_delete(local_a8, local_98[0] + 1);
   }

   if (local_88 != local_78) {
      operator_delete(local_88, local_78[0] + 1);
   }

   uVar1 = local_c8._8_8_;
   pvVar6 = (void*)local_c8._0_8_;
   if (local_c8._8_8_ != local_c8._0_8_) {
      do {
         if (*(void**)( (long)pvVar6 + 0x10 ) != (void*)( (long)pvVar6 + 0x20 )) {
            operator_delete(*(void**)( (long)pvVar6 + 0x10 ), *(long*)( (long)pvVar6 + 0x20 ) + 1);
         }

         pvVar6 = (void*)( (long)pvVar6 + 0x30 );
      }
 while ( (void*)uVar1 != pvVar6 );
   }

   if ((void*)local_c8._0_8_ != (void*)0x0) {
      operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
   }

   LAB_001030b5:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* LoaderXrDestroyInstance(XrInstance_T*) */int LoaderXrDestroyInstance(XrInstance_T *param_1) {
   long lVar1;
   undefined8 uVar2;
   int iVar3;
   long lVar4;
   void *pvVar5;
   long in_FS_OFFSET;
   int local_ec;
   LoaderInstance *local_d8;
   long local_d0;
   undefined1 local_c8[16];
   long local_b8;
   long *local_a8;
   long local_a0;
   long local_98[2];
   long *local_88;
   long local_80;
   long local_78[2];
   long *local_68[2];
   long local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_c8 = (undefined1[16])0x0;
   local_b8 = 0;
   local_88 = local_78;
   std::__cxx11::string::_M_construct<char_const*>((vector*)&local_88, "Entering loader trampoline");
   local_a8 = local_98;
   std::__cxx11::string::_M_construct<char_const*>((string*)&local_a8, "xrDestroyInstance");
   if (( LoaderLogger::GetInstance():: ) && ( iVar3 = iVar3 != 0 )) {
      LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
      __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
      __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
   }

   local_68[0] = local_58;
   std::__cxx11::string::_M_construct<char_const*>((string*)local_68, "OpenXR-Loader");
   LoaderLogger::LogMessage(0x10ad20, 1, (string*)0x1, (string*)local_68, (string*)&local_a8, (vector*)&local_88);
   if (local_68[0] != local_58) {
      operator_delete(local_68[0], local_58[0] + 1);
   }

   if (local_a8 != local_98) {
      operator_delete(local_a8, local_98[0] + 1);
   }

   if (local_88 != local_78) {
      operator_delete(local_88, local_78[0] + 1);
   }

   uVar2 = local_c8._8_8_;
   pvVar5 = (void*)local_c8._0_8_;
   if (local_c8._8_8_ != local_c8._0_8_) {
      do {
         if (*(void**)( (long)pvVar5 + 0x10 ) != (void*)( (long)pvVar5 + 0x20 )) {
            operator_delete(*(void**)( (long)pvVar5 + 0x10 ), *(long*)( (long)pvVar5 + 0x20 ) + 1);
         }

         pvVar5 = (void*)( (long)pvVar5 + 0x30 );
      }
 while ( (void*)uVar2 != pvVar5 );
   }

   if ((void*)local_c8._0_8_ != (void*)0x0) {
      operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
   }

   if (param_1 == (XrInstance_T*)0x0) {
      local_c8 = (undefined1[16])0x0;
      local_b8 = 0;
      local_d0 = 0x22;
      local_88 = local_78;
      local_88 = (long*)std::__cxx11::string::_M_create((ulong*)&local_88, ( ulong ) & local_d0);
      lVar4 = _UNK_0010aec8;
      local_78[0] = local_d0;
      *local_88 = __LC30;
      local_88[1] = lVar4;
      lVar1 = _UNK_0010aed8;
      lVar4 = __LC31;
      *(undefined2*)( local_88 + 4 ) = 0x2e45;
      local_88[2] = lVar4;
      local_88[3] = lVar1;
      local_80 = local_d0;
      *(undefined1*)( (long)local_88 + local_d0 ) = 0;
      local_d0 = 0x11;
      local_a8 = local_98;
      local_a8 = (long*)std::__cxx11::string::_M_create((ulong*)&local_a8, ( ulong ) & local_d0);
      lVar1 = _UNK_0010af48;
      lVar4 = __LC38;
      local_98[0] = local_d0;
      *(undefined1*)( local_a8 + 2 ) = 0x65;
      *local_a8 = lVar4;
      local_a8[1] = lVar1;
      local_a0 = local_d0;
      *(undefined1*)( (long)local_a8 + local_d0 ) = 0;
      if (( LoaderLogger::GetInstance():: ) && ( iVar3 = iVar3 != 0 )) {
         LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
         __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
      }

      local_68[0] = local_58;
      std::__cxx11::string::_M_construct<char_const*>((string*)local_68, "OpenXR-Loader");
      LoaderLogger::LogMessage(0x10ad20, 0x1000, (string*)0x1, (string*)local_68, (string*)&local_a8, (vector*)&local_88);
      if (local_68[0] != local_58) {
         operator_delete(local_68[0], local_58[0] + 1);
      }

      if (local_a8 != local_98) {
         operator_delete(local_a8, local_98[0] + 1);
      }

      if (local_88 != local_78) {
         operator_delete(local_88, local_78[0] + 1);
      }

      uVar2 = local_c8._8_8_;
      for (lVar4 = local_c8._0_8_; uVar2 != lVar4; lVar4 = lVar4 + 0x30) {
         if (*(void**)( lVar4 + 0x10 ) != (void*)( lVar4 + 0x20 )) {
            operator_delete(*(void**)( lVar4 + 0x10 ), *(long*)( lVar4 + 0x20 ) + 1);
         }

      }

      if ((void*)local_c8._0_8_ != (void*)0x0) {
         operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
      }

      local_ec = -0xc;
   }
 else {
      iVar3 = pthread_mutex_lock((pthread_mutex_t*)GetGlobalLoaderMutex(), ::loader_mutex);
      if (iVar3 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar3);
      }

      local_ec = ActiveLoaderInstance::Get(&local_d8, "xrDestroyInstance");
      if (-1 < local_ec) {
         if (*(XrDebugUtilsMessengerEXT_T**)( local_d8 + 0x50 ) != (XrDebugUtilsMessengerEXT_T*)0x0) {
            LoaderTrampolineDestroyDebugUtilsMessengerEXT(*(XrDebugUtilsMessengerEXT_T**)( local_d8 + 0x50 ));
         }

         iVar3 = ( **(code**)( *(long*)( local_d8 + 0x48 ) + 0x20 ) )(param_1);
         if (iVar3 < 0) {
            local_c8 = (undefined1[16])0x0;
            local_b8 = 0;
            local_d0 = 0x29;
            local_88 = local_78;
            local_88 = (long*)std::__cxx11::string::_M_create((ulong*)&local_88, ( ulong ) & local_d0);
            lVar4 = _UNK_0010af58;
            local_78[0] = local_d0;
            *local_88 = __LC39;
            local_88[1] = lVar4;
            lVar4 = _UNK_0010af68;
            local_88[2] = __LC40;
            local_88[3] = lVar4;
            uVar2 = _UNK_0010af78;
            *(undefined8*)( (long)local_88 + 0x19 ) = __LC41;
            *(undefined8*)( (long)local_88 + 0x21 ) = uVar2;
            local_80 = local_d0;
            *(undefined1*)( (long)local_88 + local_d0 ) = 0;
            local_d0 = 0x11;
            local_a8 = local_98;
            local_a8 = (long*)std::__cxx11::string::_M_create((ulong*)&local_a8, ( ulong ) & local_d0);
            lVar1 = _UNK_0010af48;
            lVar4 = __LC38;
            local_98[0] = local_d0;
            *(undefined1*)( local_a8 + 2 ) = 0x65;
            *local_a8 = lVar4;
            local_a8[1] = lVar1;
            local_a0 = local_d0;
            *(undefined1*)( (long)local_a8 + local_d0 ) = 0;
            if (( LoaderLogger::GetInstance():: ) && ( iVar3 = iVar3 != 0 )) {
               LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
               __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
               __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
            }

            local_68[0] = local_58;
            std::__cxx11::string::_M_construct<char_const*>((string*)local_68, "OpenXR-Loader");
            LoaderLogger::LogMessage(0x10ad20, 0x1000, (string*)0x1, (string*)local_68, (string*)&local_a8, (vector*)&local_88);
            if (local_68[0] != local_58) {
               operator_delete(local_68[0], local_58[0] + 1);
            }

            if (local_a8 != local_98) {
               operator_delete(local_a8, local_98[0] + 1);
            }

            if (local_88 != local_78) {
               operator_delete(local_88, local_78[0] + 1);
            }

            uVar2 = local_c8._8_8_;
            pvVar5 = (void*)local_c8._0_8_;
            if (local_c8._8_8_ != local_c8._0_8_) {
               do {
                  if (*(void**)( (long)pvVar5 + 0x10 ) != (void*)( (long)pvVar5 + 0x20 )) {
                     operator_delete(*(void**)( (long)pvVar5 + 0x10 ), *(long*)( (long)pvVar5 + 0x20 ) + 1);
                  }

                  pvVar5 = (void*)( (long)pvVar5 + 0x30 );
               }
 while ( (void*)uVar2 != pvVar5 );
            }

            if ((void*)local_c8._0_8_ != (void*)0x0) {
               operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
            }

         }

         ActiveLoaderInstance::Remove();
         local_c8 = (undefined1[16])0x0;
         local_b8 = 0;
         local_88 = local_78;
         std::__cxx11::string::_M_construct<char_const*>((vector*)&local_88, "Completed loader trampoline");
         local_a8 = local_98;
         std::__cxx11::string::_M_construct<char_const*>((string*)&local_a8, "xrDestroyInstance");
         if (( LoaderLogger::GetInstance():: ) && ( iVar3 = iVar3 != 0 )) {
            LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
            __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
            __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
         }

         local_68[0] = local_58;
         std::__cxx11::string::_M_construct<char_const*>((string*)local_68, "OpenXR-Loader");
         LoaderLogger::LogMessage(0x10ad20, 1, (string*)0x1, (string*)local_68, (string*)&local_a8, (vector*)&local_88);
         if (local_68[0] != local_58) {
            operator_delete(local_68[0], local_58[0] + 1);
         }

         if (local_a8 != local_98) {
            operator_delete(local_a8, local_98[0] + 1);
         }

         if (local_88 != local_78) {
            operator_delete(local_88, local_78[0] + 1);
         }

         uVar2 = local_c8._8_8_;
         pvVar5 = (void*)local_c8._0_8_;
         if (local_c8._8_8_ != local_c8._0_8_) {
            do {
               if (*(void**)( (long)pvVar5 + 0x10 ) != (void*)( (long)pvVar5 + 0x20 )) {
                  operator_delete(*(void**)( (long)pvVar5 + 0x10 ), *(long*)( (long)pvVar5 + 0x20 ) + 1);
               }

               pvVar5 = (void*)( (long)pvVar5 + 0x30 );
            }
 while ( (void*)uVar2 != pvVar5 );
         }

         if ((void*)local_c8._0_8_ != (void*)0x0) {
            operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
         }

         local_68[0] = local_58;
         std::__cxx11::string::_M_construct<char_const*>((string*)local_68, "xrDestroyInstance");
         RuntimeInterface::UnloadRuntime((string*)local_68);
         local_ec = 0;
         if (local_68[0] != local_58) {
            operator_delete(local_68[0], local_58[0] + 1);
         }

      }

      pthread_mutex_unlock((pthread_mutex_t*)GetGlobalLoaderMutex(), ::loader_mutex);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_ec;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* LoaderTrampolineSessionInsertDebugUtilsLabelEXT(XrSession_T*, XrDebugUtilsLabelEXT const*) */undefined8 LoaderTrampolineSessionInsertDebugUtilsLabelEXT(XrSession_T *param_1, XrDebugUtilsLabelEXT *param_2) {
   undefined8 *puVar1;
   ulong uVar2;
   ulong uVar3;
   undefined1 *__src;
   undefined8 *puVar4;
   int iVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   undefined8 *__dest;
   long lVar8;
   long in_FS_OFFSET;
   LoaderInstance *local_108;
   ulong local_100;
   undefined1 local_f8[16];
   undefined8 *local_e8;
   long *local_d8;
   ulong local_d0;
   ulong local_c8[2];
   long *local_b8;
   ulong local_b0;
   ulong local_a8[2];
   long *local_98;
   ulong local_90;
   ulong local_88[2];
   XrSession_T *local_78;
   undefined4 local_70;
   undefined1 *local_68;
   ulong local_60;
   undefined1 local_58;
   undefined7 uStack_57;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (XrSession_T*)0x0) {
      local_f8 = (undefined1[16])0x0;
      local_e8 = (undefined8*)0x0;
      local_100 = 0x21;
      local_98 = (long*)local_88;
      local_98 = (long*)std::__cxx11::string::_M_create((ulong*)&local_98, ( ulong ) & local_100);
      uVar2 = _UNK_0010ae48;
      local_88[0] = local_100;
      *local_98 = __LC21;
      ( (ulong*)local_98 )[1] = uVar2;
      uVar3 = _UNK_0010ae58;
      uVar2 = __LC22;
      *(undefined1*)( (ulong*)local_98 + 4 ) = 0x2e;
      ( (ulong*)local_98 )[2] = uVar2;
      ( (ulong*)local_98 )[3] = uVar3;
      local_90 = local_100;
      *(undefined1*)( (long)local_98 + local_100 ) = 0;
      local_100 = 0x21;
      local_b8 = (long*)local_a8;
      local_b8 = (long*)std::__cxx11::string::_M_create((ulong*)&local_b8, ( ulong ) & local_100);
      uVar2 = _UNK_0010af88;
      local_a8[0] = local_100;
      *local_b8 = __LC43;
      ( (ulong*)local_b8 )[1] = uVar2;
      uVar3 = _UNK_0010af98;
      uVar2 = __LC44;
      *(undefined1*)( (ulong*)local_b8 + 4 ) = 0x54;
      ( (ulong*)local_b8 )[2] = uVar2;
      ( (ulong*)local_b8 )[3] = uVar3;
      local_b0 = local_100;
      *(undefined1*)( (long)local_b8 + local_100 ) = 0;
      if (( LoaderLogger::GetInstance():: ) && ( iVar5 = iVar5 != 0 )) {
         LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
         __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
      }

      local_78 = (XrSession_T*)&local_68;
      std::__cxx11::string::_M_construct<char_const*>((string*)&local_78, "OpenXR-Loader");
      LoaderLogger::LogMessage(0x10ad20, 0x1000, (string*)0x1, (string*)&local_78, (string*)&local_b8, (vector*)&local_98);
      if (local_78 != (XrSession_T*)&local_68) {
         operator_delete(local_78, ( ulong )(local_68 + 1));
      }

      if ((ulong*)local_b8 != local_a8) {
         operator_delete(local_b8, local_a8[0] + 1);
      }

      if ((ulong*)local_98 != local_88) {
         operator_delete(local_98, local_88[0] + 1);
      }

      uVar6 = local_f8._8_8_;
      for (lVar8 = local_f8._0_8_; uVar6 != lVar8; lVar8 = lVar8 + 0x30) {
         if (*(void**)( lVar8 + 0x10 ) != (void*)( lVar8 + 0x20 )) {
            operator_delete(*(void**)( lVar8 + 0x10 ), *(long*)( lVar8 + 0x20 ) + 1);
         }

      }

      if ((void*)local_f8._0_8_ != (void*)0x0) {
         operator_delete((void*)local_f8._0_8_, (long)local_e8 - local_f8._0_8_);
      }

      uVar6 = 0xfffffff4;
      goto LAB_00103e54;
   }

   uVar6 = ActiveLoaderInstance::Get(&local_108, "xrSessionInsertDebugUtilsLabelEXT");
   if ((int)uVar6 < 0) goto LAB_00103e54;
   if (param_2 != (XrDebugUtilsLabelEXT*)0x0) {
      if (( LoaderLogger::GetInstance():: ) && ( iVar5 = iVar5 != 0 )) {
         LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
         __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
      }

      LoaderLogger::InsertLabel((XrSession_T*)LoaderLogger::GetInstance(), ::instance, (XrDebugUtilsLabelEXT*)param_1);
      uVar6 = 0;
      if (*(code**)( *(long*)( local_108 + 0x48 ) + 0x1f0 ) != (code*)0x0) {
         uVar6 = ( **(code**)( *(long*)( local_108 + 0x48 ) + 0x1f0 ) )(param_1, param_2);
      }

      goto LAB_00103e54;
   }

   local_70 = 2;
   local_60 = 0;
   local_58 = 0;
   local_e8 = (undefined8*)0x0;
   local_f8 = (undefined1[16])0x0;
   local_78 = param_1;
   local_68 = &local_58;
   puVar7 = (undefined8*)operator_new(0x30);
   uVar2 = local_60;
   __src = local_68;
   puVar1 = puVar7 + 6;
   local_f8._0_8_ = puVar7;
   __dest = puVar7 + 4;
   *puVar7 = local_78;
   puVar7[2] = __dest;
   *(undefined4*)( puVar7 + 1 ) = local_70;
   local_100 = local_60;
   local_e8 = puVar1;
   if (local_60 < 0x10) {
      puVar4 = puVar7;
      if (local_60 == 1) {
         *(undefined1*)( puVar7 + 4 ) = *local_68;
      }
 else if (local_60 != 0) goto LAB_0010441d;
   }
 else {
      __dest = (undefined8*)std::__cxx11::string::_M_create(puVar7 + 2, ( ulong ) & local_100);
      puVar7[2] = __dest;
      puVar7[4] = local_100;
      LAB_0010441d:memcpy(__dest, __src, uVar2);
      __dest = (undefined8*)puVar7[2];
      puVar4 = (undefined8*)local_f8._0_8_;
   }

   local_f8._0_8_ = puVar4;
   puVar7[3] = local_100;
   *(undefined1*)( (long)__dest + local_100 ) = 0;
   local_f8._8_8_ = puVar1;
   local_100 = 0x1a;
   local_98 = (long*)local_88;
   local_98 = (long*)std::__cxx11::string::_M_create((ulong*)&local_98, ( ulong ) & local_100);
   uVar2 = _UNK_0010afa8;
   local_88[0] = local_100;
   *local_98 = __LC45;
   ( (ulong*)local_98 )[1] = uVar2;
   uVar6 = _UNK_0010afb8;
   *(undefined8*)( (long)local_98 + 10 ) = __LC46;
   *(undefined8*)( (long)local_98 + 0x12 ) = uVar6;
   local_90 = local_100;
   *(undefined1*)( (long)local_98 + local_100 ) = 0;
   local_100 = 0x21;
   local_b8 = (long*)local_a8;
   local_b8 = (long*)std::__cxx11::string::_M_create((ulong*)&local_b8, ( ulong ) & local_100);
   uVar2 = _UNK_0010af88;
   local_a8[0] = local_100;
   *local_b8 = __LC43;
   ( (ulong*)local_b8 )[1] = uVar2;
   uVar3 = _UNK_0010af98;
   uVar2 = __LC44;
   *(undefined1*)( (ulong*)local_b8 + 4 ) = 0x54;
   ( (ulong*)local_b8 )[2] = uVar2;
   ( (ulong*)local_b8 )[3] = uVar3;
   local_b0 = local_100;
   *(undefined1*)( (long)local_b8 + local_100 ) = 0;
   local_100 = 0x3a;
   local_d8 = (long*)local_c8;
   local_d8 = (long*)std::__cxx11::string::_M_create((ulong*)&local_d8, ( ulong ) & local_100);
   uVar2 = _UNK_0010afc8;
   local_c8[0] = local_100;
   *local_d8 = __LC47;
   ( (ulong*)local_d8 )[1] = uVar2;
   uVar2 = _UNK_0010afd8;
   ( (ulong*)local_d8 )[2] = __LC48;
   ( (ulong*)local_d8 )[3] = uVar2;
   uVar2 = _UNK_0010afe8;
   ( (ulong*)local_d8 )[4] = __LC49;
   ( (ulong*)local_d8 )[5] = uVar2;
   uVar6 = _UNK_0010aff8;
   *(undefined8*)( (long)local_d8 + 0x2a ) = __LC50;
   *(undefined8*)( (long)local_d8 + 0x32 ) = uVar6;
   local_d0 = local_100;
   *(undefined1*)( (long)local_d8 + local_100 ) = 0;
   if (( LoaderLogger::GetInstance():: ) && ( iVar5 = iVar5 != 0 )) {
      LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
      __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
      __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
   }

   LoaderLogger::LogMessage(0x10ad20, 0x1000, (string*)0x2, (string*)&local_d8, (string*)&local_b8, (vector*)&local_98);
   if ((ulong*)local_d8 != local_c8) {
      operator_delete(local_d8, local_c8[0] + 1);
   }

   if ((ulong*)local_b8 != local_a8) {
      operator_delete(local_b8, local_a8[0] + 1);
   }

   if ((ulong*)local_98 != local_88) {
      operator_delete(local_98, local_88[0] + 1);
   }

   uVar6 = local_f8._8_8_;
   for (lVar8 = local_f8._0_8_; uVar6 != lVar8; lVar8 = lVar8 + 0x30) {
      if (*(void**)( lVar8 + 0x10 ) != (void*)( lVar8 + 0x20 )) {
         operator_delete(*(void**)( lVar8 + 0x10 ), *(long*)( lVar8 + 0x20 ) + 1);
      }

   }

   if ((void*)local_f8._0_8_ != (void*)0x0) {
      operator_delete((void*)local_f8._0_8_, (long)local_e8 - local_f8._0_8_);
   }

   if (local_68 != &local_58) {
      operator_delete(local_68, CONCAT71(uStack_57, local_58) + 1);
   }

   uVar6 = 0xffffffff;
   LAB_00103e54:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* LoaderTrampolineSessionBeginDebugUtilsLabelRegionEXT(XrSession_T*, XrDebugUtilsLabelEXT const*)
    */undefined8 LoaderTrampolineSessionBeginDebugUtilsLabelRegionEXT(XrSession_T *param_1, XrDebugUtilsLabelEXT *param_2) {
   ulong uVar1;
   ulong uVar2;
   LoaderInstance *__src;
   LoaderInstance *pLVar3;
   int iVar4;
   undefined8 uVar5;
   LoaderInstance *pLVar6;
   LoaderInstance *__dest;
   LoaderInstance *pLVar7;
   long in_FS_OFFSET;
   ulong local_100;
   undefined1 local_f8[16];
   LoaderInstance *local_e8;
   long *local_d8;
   ulong local_d0;
   ulong local_c8[2];
   long *local_b8;
   ulong local_b0;
   ulong local_a8[2];
   long *local_98;
   ulong local_90;
   ulong local_88[2];
   XrSession_T *local_78;
   undefined4 local_70;
   LoaderInstance *local_68;
   ulong local_60;
   LoaderInstance local_58;
   undefined7 uStack_57;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (XrSession_T*)0x0) {
      local_f8 = (undefined1[16])0x0;
      local_e8 = (LoaderInstance*)0x0;
      local_100 = 0x21;
      local_98 = (long*)local_88;
      local_98 = (long*)std::__cxx11::string::_M_create((ulong*)&local_98, ( ulong ) & local_100);
      uVar1 = _UNK_0010ae48;
      local_88[0] = local_100;
      *local_98 = __LC21;
      ( (ulong*)local_98 )[1] = uVar1;
      uVar2 = _UNK_0010ae58;
      uVar1 = __LC22;
      *(undefined1*)( (ulong*)local_98 + 4 ) = 0x2e;
      ( (ulong*)local_98 )[2] = uVar1;
      ( (ulong*)local_98 )[3] = uVar2;
      local_90 = local_100;
      *(undefined1*)( (long)local_98 + local_100 ) = 0;
      local_100 = 0x26;
      local_b8 = (long*)local_a8;
      local_b8 = (long*)std::__cxx11::string::_M_create((ulong*)&local_b8, ( ulong ) & local_100);
      uVar1 = _UNK_0010b008;
      local_a8[0] = local_100;
      *local_b8 = __LC52;
      ( (ulong*)local_b8 )[1] = uVar1;
      uVar1 = _UNK_0010b018;
      ( (ulong*)local_b8 )[2] = __LC53;
      ( (ulong*)local_b8 )[3] = uVar1;
      *(undefined8*)( (long)local_b8 + 0x1e ) = 0x5458456e6f696765;
      local_b0 = local_100;
      *(undefined1*)( (long)local_b8 + local_100 ) = 0;
      if (( LoaderLogger::GetInstance():: ) && ( iVar4 = iVar4 != 0 )) {
         LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
         __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
      }

      local_78 = (XrSession_T*)&local_68;
      std::__cxx11::string::_M_construct<char_const*>((string*)&local_78, "OpenXR-Loader");
      LoaderLogger::LogMessage(0x10ad20, 0x1000, (string*)0x1, (string*)&local_78, (string*)&local_b8, (vector*)&local_98);
      if (local_78 != (XrSession_T*)&local_68) {
         operator_delete(local_78, ( ulong )(local_68 + 1));
      }

      if ((ulong*)local_b8 != local_a8) {
         operator_delete(local_b8, local_a8[0] + 1);
      }

      if ((ulong*)local_98 != local_88) {
         operator_delete(local_98, local_88[0] + 1);
      }

      uVar5 = local_f8._8_8_;
      for (pLVar7 = (LoaderInstance*)local_f8._0_8_; (LoaderInstance*)uVar5 != pLVar7; pLVar7 = pLVar7 + 0x30) {
         if (*(LoaderInstance**)( pLVar7 + 0x10 ) != pLVar7 + 0x20) {
            operator_delete(*(LoaderInstance**)( pLVar7 + 0x10 ), *(long*)( pLVar7 + 0x20 ) + 1);
         }

      }

      if ((LoaderInstance*)local_f8._0_8_ != (LoaderInstance*)0x0) {
         operator_delete((void*)local_f8._0_8_, (long)local_e8 - local_f8._0_8_);
      }

      uVar5 = 0xfffffff4;
      goto LAB_00104594;
   }

   if (param_2 != (XrDebugUtilsLabelEXT*)0x0) {
      uVar5 = ActiveLoaderInstance::Get((LoaderInstance**)local_f8, "xrSessionBeginDebugUtilsLabelRegionEXT");
      if (-1 < (int)uVar5) {
         if (( LoaderLogger::GetInstance():: ) && ( iVar4 = iVar4 != 0 )) {
            LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
            __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
            __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
         }

         LoaderLogger::BeginLabelRegion((XrSession_T*)LoaderLogger::GetInstance(), ::instance, (XrDebugUtilsLabelEXT*)param_1);
         uVar5 = 0;
         if (*(code**)( *(long*)( local_f8._0_8_ + 0x48 ) + 0x1e0 ) != (code*)0x0) {
            uVar5 = ( **(code**)( *(long*)( local_f8._0_8_ + 0x48 ) + 0x1e0 ) )(param_1, param_2);
         }

      }

      goto LAB_00104594;
   }

   local_70 = 2;
   local_60 = 0;
   local_58 = (LoaderInstance)0x0;
   local_e8 = (LoaderInstance*)0x0;
   local_f8 = (undefined1[16])0x0;
   local_78 = param_1;
   local_68 = &local_58;
   pLVar6 = (LoaderInstance*)operator_new(0x30);
   uVar1 = local_60;
   __src = local_68;
   pLVar7 = pLVar6 + 0x30;
   local_f8._0_8_ = pLVar6;
   __dest = pLVar6 + 0x20;
   *(XrSession_T**)pLVar6 = local_78;
   *(LoaderInstance**)( pLVar6 + 0x10 ) = __dest;
   *(undefined4*)( pLVar6 + 8 ) = local_70;
   local_100 = local_60;
   local_e8 = pLVar7;
   if (local_60 < 0x10) {
      pLVar3 = pLVar6;
      if (local_60 == 1) {
         pLVar6[0x20] = *local_68;
      }
 else if (local_60 != 0) goto LAB_00104958;
   }
 else {
      __dest = (LoaderInstance*)std::__cxx11::string::_M_create((ulong*)( pLVar6 + 0x10 ), ( ulong ) & local_100);
      *(LoaderInstance**)( pLVar6 + 0x10 ) = __dest;
      *(ulong*)( pLVar6 + 0x20 ) = local_100;
      LAB_00104958:memcpy(__dest, __src, uVar1);
      __dest = *(LoaderInstance**)( pLVar6 + 0x10 );
      pLVar3 = (LoaderInstance*)local_f8._0_8_;
   }

   local_f8._0_8_ = pLVar3;
   *(ulong*)( pLVar6 + 0x18 ) = local_100;
   __dest[local_100] = (LoaderInstance)0x0;
   local_f8._8_8_ = pLVar7;
   local_100 = 0x1a;
   local_98 = (long*)local_88;
   local_98 = (long*)std::__cxx11::string::_M_create((ulong*)&local_98, ( ulong ) & local_100);
   uVar1 = _UNK_0010afa8;
   local_88[0] = local_100;
   *local_98 = __LC45;
   ( (ulong*)local_98 )[1] = uVar1;
   uVar5 = _UNK_0010afb8;
   *(undefined8*)( (long)local_98 + 10 ) = __LC46;
   *(undefined8*)( (long)local_98 + 0x12 ) = uVar5;
   local_90 = local_100;
   *(undefined1*)( (long)local_98 + local_100 ) = 0;
   local_100 = 0x26;
   local_b8 = (long*)local_a8;
   local_b8 = (long*)std::__cxx11::string::_M_create((ulong*)&local_b8, ( ulong ) & local_100);
   uVar1 = _UNK_0010b008;
   local_a8[0] = local_100;
   *local_b8 = __LC52;
   ( (ulong*)local_b8 )[1] = uVar1;
   uVar1 = _UNK_0010b018;
   ( (ulong*)local_b8 )[2] = __LC53;
   ( (ulong*)local_b8 )[3] = uVar1;
   *(undefined8*)( (long)local_b8 + 0x1e ) = 0x5458456e6f696765;
   local_b0 = local_100;
   *(undefined1*)( (long)local_b8 + local_100 ) = 0;
   local_100 = 0x3f;
   local_d8 = (long*)local_c8;
   local_d8 = (long*)std::__cxx11::string::_M_create((ulong*)&local_d8, ( ulong ) & local_100);
   uVar1 = _UNK_0010b028;
   local_c8[0] = local_100;
   *local_d8 = __LC54;
   ( (ulong*)local_d8 )[1] = uVar1;
   uVar1 = _UNK_0010b038;
   ( (ulong*)local_d8 )[2] = __LC55;
   ( (ulong*)local_d8 )[3] = uVar1;
   uVar1 = _UNK_0010b048;
   ( (ulong*)local_d8 )[4] = __LC56;
   ( (ulong*)local_d8 )[5] = uVar1;
   uVar5 = _UNK_0010aff8;
   *(undefined8*)( (long)local_d8 + 0x2f ) = __LC50;
   *(undefined8*)( (long)local_d8 + 0x37 ) = uVar5;
   local_d0 = local_100;
   *(undefined1*)( (long)local_d8 + local_100 ) = 0;
   if (( LoaderLogger::GetInstance():: ) && ( iVar4 = iVar4 != 0 )) {
      LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
      __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
      __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
   }

   LoaderLogger::LogMessage(0x10ad20, 0x1000, (string*)0x2, (string*)&local_d8, (string*)&local_b8, (vector*)&local_98);
   if ((ulong*)local_d8 != local_c8) {
      operator_delete(local_d8, local_c8[0] + 1);
   }

   if ((ulong*)local_b8 != local_a8) {
      operator_delete(local_b8, local_a8[0] + 1);
   }

   if ((ulong*)local_98 != local_88) {
      operator_delete(local_98, local_88[0] + 1);
   }

   uVar5 = local_f8._8_8_;
   for (pLVar7 = (LoaderInstance*)local_f8._0_8_; (LoaderInstance*)uVar5 != pLVar7; pLVar7 = pLVar7 + 0x30) {
      if (*(LoaderInstance**)( pLVar7 + 0x10 ) != pLVar7 + 0x20) {
         operator_delete(*(LoaderInstance**)( pLVar7 + 0x10 ), *(long*)( pLVar7 + 0x20 ) + 1);
      }

   }

   if ((LoaderInstance*)local_f8._0_8_ != (LoaderInstance*)0x0) {
      operator_delete((void*)local_f8._0_8_, (long)local_e8 - local_f8._0_8_);
   }

   if (local_68 != &local_58) {
      operator_delete(local_68, CONCAT71(uStack_57, local_58) + 1);
   }

   uVar5 = 0xffffffff;
   LAB_00104594:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar5;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* LoaderXrCreateInstance(XrInstanceCreateInfo const*, XrInstance_T**) */int LoaderXrCreateInstance(XrInstanceCreateInfo *param_1, XrInstance_T **param_2) {
   uint uVar1;
   char **ppcVar2;
   XrDebugUtilsMessengerEXT_T *pXVar3;
   bool bVar4;
   undefined8 uVar5;
   XrDebugUtilsMessengerEXT_T *pXVar6;
   char cVar7;
   int iVar8;
   int iVar9;
   ostream *poVar10;
   long *plVar11;
   streambuf *psVar12;
   ulong uVar13;
   XrDebugUtilsMessengerCreateInfoEXT *pXVar14;
   undefined1 auVar15[8];
   long in_FS_OFFSET;
   XrDebugUtilsMessengerEXT_T **local_288;
   XrDebugUtilsMessengerEXT_T *local_260;
   undefined1 local_258[16];
   long local_248;
   undefined1 local_238[8];
   XrDebugUtilsMessengerEXT_T *pXStack_230;
   long local_228;
   undefined1 *local_218;
   undefined8 local_210;
   undefined1 local_208;
   undefined7 uStack_207;
   XrDebugUtilsMessengerEXT_T **local_1f8;
   XrDebugUtilsMessengerEXT_T *local_1f0;
   XrDebugUtilsMessengerEXT_T *local_1e8[2];
   XrDebugUtilsMessengerEXT_T **local_1d8;
   XrDebugUtilsMessengerEXT_T *local_1d0;
   XrDebugUtilsMessengerEXT_T *local_1c8[2];
   XrDebugUtilsMessengerEXT_T *local_1b8[2];
   undefined1 local_1a8[16];
   undefined1 local_198[16];
   undefined1 local_188[16];
   locale local_178[8];
   undefined4 local_170;
   undefined1 *local_168;
   undefined8 local_160;
   undefined1 local_158;
   undefined7 uStack_157;
   code *local_148[27];
   undefined8 local_70;
   undefined2 local_68;
   undefined1 local_60[16];
   undefined1 local_50[16];
   long local_40;
   local_258._8_8_ = local_258._0_8_;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _local_238 = (undefined1[16])0x0;
   local_228 = 0;
   local_258._0_8_ = (XrDebugUtilsMessengerEXT_T*)0x1a;
   local_1d8 = local_1c8;
   local_1d8 = (XrDebugUtilsMessengerEXT_T**)std::__cxx11::string::_M_create((ulong*)&local_1d8, (ulong)local_258);
   pXVar3 = _UNK_0010b058;
   local_1c8[0] = (XrDebugUtilsMessengerEXT_T*)local_258._0_8_;
   *local_1d8 = __LC60;
   local_1d8[1] = pXVar3;
   uVar5 = _UNK_0010b068;
   *(undefined8*)( (long)local_1d8 + 10 ) = __LC61;
   *(undefined8*)( (long)local_1d8 + 0x12 ) = uVar5;
   local_1d0 = (XrDebugUtilsMessengerEXT_T*)local_258._0_8_;
   *(XrDebugUtilsMessengerEXT_T*)( (long)local_1d8 + local_258._0_8_ ) = (XrDebugUtilsMessengerEXT_T)0x0;
   local_258._0_8_ = 0x10;
   local_1f8 = local_1e8;
   local_1f8 = (XrDebugUtilsMessengerEXT_T**)std::__cxx11::string::_M_create((ulong*)&local_1f8, (ulong)local_258);
   pXVar3 = _UNK_0010b078;
   local_1e8[0] = (XrDebugUtilsMessengerEXT_T*)local_258._0_8_;
   *local_1f8 = __LC62;
   local_1f8[1] = pXVar3;
   local_1f0 = (XrDebugUtilsMessengerEXT_T*)local_258._0_8_;
   *(XrDebugUtilsMessengerEXT_T*)( (long)local_1f8 + local_258._0_8_ ) = (XrDebugUtilsMessengerEXT_T)0x0;
   if (( LoaderLogger::GetInstance():: ) && ( iVar8 = iVar8 != 0 )) {
      LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
      __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
      __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
   }

   local_1b8[0] = (XrDebugUtilsMessengerEXT_T*)local_1a8;
   std::__cxx11::string::_M_construct<char_const*>((string*)local_1b8, "OpenXR-Loader");
   LoaderLogger::LogMessage(0x10ad20, 1, (string*)0x1, (string*)local_1b8, (string*)&local_1f8, (vector*)&local_1d8);
   if (local_1b8[0] != (XrDebugUtilsMessengerEXT_T*)local_1a8) {
      operator_delete(local_1b8[0], local_1a8._0_8_ + 1);
   }

   if (local_1f8 != local_1e8) {
      operator_delete(local_1f8, ( ulong )(local_1e8[0] + 1));
   }

   if (local_1d8 != local_1c8) {
      operator_delete(local_1d8, ( ulong )(local_1c8[0] + 1));
   }

   pXVar3 = pXStack_230;
   auVar15 = local_238;
   if ((undefined1[8])pXStack_230 != local_238) {
      do {
         if (*(XrDebugUtilsMessengerEXT_T**)( (long)auVar15 + 0x10 ) != (XrDebugUtilsMessengerEXT_T*)( (long)auVar15 + 0x20 )) {
            operator_delete(*(XrDebugUtilsMessengerEXT_T**)( (long)auVar15 + 0x10 ), *(long*)( (long)auVar15 + 0x20 ) + 1);
         }

         auVar15 = ( undefined1[8] )((long)auVar15 + 0x30);
      }
 while ( (undefined1[8])pXVar3 != auVar15 );
   }

   if (local_238 != (undefined1[8])0x0) {
      operator_delete((void*)local_238, local_228 - (long)local_238);
   }

   if (param_1 == (XrInstanceCreateInfo*)0x0) {
      _local_238 = (undefined1[16])0x0;
      local_228 = 0;
      local_258._0_8_ = &DAT_00000010;
      local_1b8[0] = (XrDebugUtilsMessengerEXT_T*)local_1a8;
      local_1b8[0] = (XrDebugUtilsMessengerEXT_T*)std::__cxx11::string::_M_create((ulong*)local_1b8, (ulong)local_258);
      uVar5 = _UNK_0010afb8;
      local_1a8._0_8_ = local_258._0_8_;
      *(undefined8*)local_1b8[0] = __LC46;
      *(undefined8*)( local_1b8[0] + 8 ) = uVar5;
      local_1b8[1] = (XrDebugUtilsMessengerEXT_T*)local_258._0_8_;
      local_1b8[0][local_258._0_8_] = (XrDebugUtilsMessengerEXT_T)0x0;
      local_258._0_8_ = (XrDebugUtilsMessengerEXT_T*)0x10;
      local_1d8 = local_1c8;
      local_1d8 = (XrDebugUtilsMessengerEXT_T**)std::__cxx11::string::_M_create((ulong*)&local_1d8, (ulong)local_258);
      pXVar3 = _UNK_0010b078;
      local_1c8[0] = (XrDebugUtilsMessengerEXT_T*)local_258._0_8_;
      *local_1d8 = __LC62;
      local_1d8[1] = pXVar3;
      local_1d0 = (XrDebugUtilsMessengerEXT_T*)local_258._0_8_;
      *(XrDebugUtilsMessengerEXT_T*)( (long)local_1d8 + local_258._0_8_ ) = (XrDebugUtilsMessengerEXT_T)0x0;
      local_258._0_8_ = 0x24;
      local_1f8 = local_1e8;
      local_1f8 = (XrDebugUtilsMessengerEXT_T**)std::__cxx11::string::_M_create((ulong*)&local_1f8, (ulong)local_258);
      pXVar3 = _UNK_0010b088;
      local_1e8[0] = (XrDebugUtilsMessengerEXT_T*)local_258._0_8_;
      *local_1f8 = __LC63;
      local_1f8[1] = pXVar3;
      pXVar6 = _UNK_0010b098;
      pXVar3 = __LC64;
      *(undefined4*)( local_1f8 + 4 ) = 0x72657465;
      local_1f8[2] = pXVar3;
      local_1f8[3] = pXVar6;
      local_1f0 = (XrDebugUtilsMessengerEXT_T*)local_258._0_8_;
      *(XrDebugUtilsMessengerEXT_T*)( (long)local_1f8 + local_258._0_8_ ) = (XrDebugUtilsMessengerEXT_T)0x0;
      if (( LoaderLogger::GetInstance():: ) && ( iVar8 = iVar8 != 0 )) {
         LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
         __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
      }

      LoaderLogger::LogMessage(0x10ad20, 0x1000, (string*)0x2, (string*)&local_1f8, (string*)&local_1d8, (vector*)local_1b8);
      if (local_1f8 != local_1e8) {
         operator_delete(local_1f8, ( ulong )(local_1e8[0] + 1));
      }

      if (local_1d8 != local_1c8) {
         operator_delete(local_1d8, ( ulong )(local_1c8[0] + 1));
      }

      if (local_1b8[0] != (XrDebugUtilsMessengerEXT_T*)local_1a8) {
         operator_delete(local_1b8[0], local_1a8._0_8_ + 1);
      }

      pXVar3 = pXStack_230;
      for (auVar15 = local_238; (undefined1[8])pXVar3 != auVar15; auVar15 = ( undefined1[8] )((long)auVar15 + 0x30)) {
         if (*(XrDebugUtilsMessengerEXT_T**)( (long)auVar15 + 0x10 ) != (XrDebugUtilsMessengerEXT_T*)( (long)auVar15 + 0x20 )) {
            operator_delete(*(XrDebugUtilsMessengerEXT_T**)( (long)auVar15 + 0x10 ), *(long*)( (long)auVar15 + 0x20 ) + 1);
         }

      }

      LAB_00106832:if (local_238 != (undefined1[8])0x0) {
         operator_delete((void*)local_238, local_228 - (long)local_238);
      }

      iVar8 = -1;
      goto LAB_00105635;
   }

   uVar13 = *(ulong*)( param_1 + 0x120 ) >> 0x30;
   if (( 1 < uVar13 ) || ( ( 1 < ( ushort )(*(ulong*)( param_1 + 0x120 ) >> 0x20) && ( ( uVar13 & 1 ) != 0 ) ) )) {
      std::ios_base::ios_base((ios_base*)local_148);
      pXVar3 = _vtable;
      local_68 = 0;
      local_60 = (undefined1[16])0x0;
      local_50 = (undefined1[16])0x0;
      local_148[0] = std::ios::init;
      psVar12 = (streambuf*)( (string*)local_1b8 + *(long*)( _vtable + -0x18 ) );
      local_1b8[0] = _vtable;
      local_70 = 0;
      *(undefined8*)psVar12 = _vtable;
      std::ios::init(psVar12);
      local_1a8 = (undefined1[16])0x0;
      local_198 = (undefined1[16])0x0;
      local_188 = (undefined1[16])0x0;
      local_1b8[0] = (XrDebugUtilsMessengerEXT_T*)PTR_vtable_0010b4e0;
      local_1b8[1] = (XrDebugUtilsMessengerEXT_T*)PTR_vtable_0010b4e8;
      local_148[0] = std::locale::~locale;
      std::locale::locale(local_178);
      local_1b8[1] = (XrDebugUtilsMessengerEXT_T*)std::ostream::_M_insert<unsigned_long>;
      local_170 = 0x10;
      local_160 = 0;
      local_158 = 0;
      local_168 = &local_158;
      std::ios::init((streambuf*)local_148);
      std::__ostream_insert<char,std::char_traits<char>>((ostream*)local_1b8, "xrCreateInstance called with invalid API version ", 0x31);
      poVar10 = std::ostream::_M_insert<unsigned_long>((ulong)local_1b8);
      std::__ostream_insert<char,std::char_traits<char>>(poVar10, ".", 1);
      poVar10 = std::ostream::_M_insert<unsigned_long>((ulong)poVar10);
      std::__ostream_insert<char,std::char_traits<char>>(poVar10, ".  Max supported version is ", 0x1c);
      poVar10 = std::ostream::_M_insert<unsigned_long>((ulong)poVar10);
      std::__ostream_insert<char,std::char_traits<char>>(poVar10, ".", 1);
      std::ostream::_M_insert<unsigned_long>((ulong)poVar10);
      local_228 = 0;
      local_210 = 0;
      local_208 = 0;
      _local_238 = (undefined1[16])0x0;
      local_218 = &local_208;
      if (local_188._0_8_ == 0) {
         std::__cxx11::string::_M_assign((string*)&local_218);
      }
 else {
         std::__cxx11::string::_M_replace(( ulong ) & local_218, 0, (char*)0x0, local_198._8_8_);
      }

      local_258._0_8_ = 0x10;
      local_1f8 = local_1e8;
      local_1f8 = (XrDebugUtilsMessengerEXT_T**)std::__cxx11::string::_M_create((ulong*)&local_1f8, (ulong)local_258);
      pXVar6 = _UNK_0010b078;
      local_1e8[0] = (XrDebugUtilsMessengerEXT_T*)local_258._0_8_;
      *local_1f8 = __LC62;
      local_1f8[1] = pXVar6;
      local_1f0 = (XrDebugUtilsMessengerEXT_T*)local_258._0_8_;
      *(XrDebugUtilsMessengerEXT_T*)( (long)local_1f8 + local_258._0_8_ ) = (XrDebugUtilsMessengerEXT_T)0x0;
      if (( LoaderLogger::GetInstance():: ) && ( iVar8 = iVar8 != 0 )) {
         LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
         __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
      }

      local_1d8 = local_1c8;
      std::__cxx11::string::_M_construct<char_const*>((string*)&local_1d8, "OpenXR-Loader");
      LoaderLogger::LogMessage(0x10ad20, 0x1000, (string*)0x1, (string*)&local_1d8, (string*)&local_1f8, (vector*)&local_218);
      if (local_1d8 != local_1c8) {
         operator_delete(local_1d8, ( ulong )(local_1c8[0] + 1));
      }

      if (local_1f8 != local_1e8) {
         operator_delete(local_1f8, ( ulong )(local_1e8[0] + 1));
      }

      if (local_218 != &local_208) {
         operator_delete(local_218, CONCAT71(uStack_207, local_208) + 1);
      }

      pXVar6 = pXStack_230;
      auVar15 = local_238;
      if ((undefined1[8])pXStack_230 != local_238) {
         do {
            if (*(XrDebugUtilsMessengerEXT_T**)( (long)auVar15 + 0x10 ) != (XrDebugUtilsMessengerEXT_T*)( (long)auVar15 + 0x20 )) {
               operator_delete(*(XrDebugUtilsMessengerEXT_T**)( (long)auVar15 + 0x10 ), *(long*)( (long)auVar15 + 0x20 ) + 1);
            }

            auVar15 = ( undefined1[8] )((long)auVar15 + 0x30);
         }
 while ( (undefined1[8])pXVar6 != auVar15 );
      }

      if (local_238 != (undefined1[8])0x0) {
         operator_delete((void*)local_238, local_228 - (long)local_238);
      }

      local_148[0] = std::locale::~locale;
      local_1b8[0] = (XrDebugUtilsMessengerEXT_T*)PTR_vtable_0010b4e0;
      local_1b8[1] = (XrDebugUtilsMessengerEXT_T*)PTR_vtable_0010b4f0;
      if (local_168 != &local_158) {
         operator_delete(local_168, CONCAT71(uStack_157, local_158) + 1);
      }

      iVar8 = -4;
      local_1b8[1] = (XrDebugUtilsMessengerEXT_T*)std::ios_base::~ios_base;
      std::locale::~locale(local_178);
      local_1b8[0] = pXVar3;
      *(undefined8*)( (long)local_1b8 + *(long*)( pXVar3 + -0x18 ) ) = _vtable;
      local_148[0] = std::ios::init;
      std::ios_base::~ios_base((ios_base*)local_148);
      goto LAB_00105635;
   }

   if (param_2 == (XrInstance_T**)0x0) {
      _local_238 = (undefined1[16])0x0;
      local_228 = 0;
      local_258._0_8_ = &DAT_00000010;
      local_1b8[0] = (XrDebugUtilsMessengerEXT_T*)local_1a8;
      local_1b8[0] = (XrDebugUtilsMessengerEXT_T*)std::__cxx11::string::_M_create((ulong*)local_1b8, (ulong)local_258);
      uVar5 = _UNK_0010afb8;
      local_1a8._0_8_ = local_258._0_8_;
      *(undefined8*)local_1b8[0] = __LC46;
      *(undefined8*)( local_1b8[0] + 8 ) = uVar5;
      local_1b8[1] = (XrDebugUtilsMessengerEXT_T*)local_258._0_8_;
      local_1b8[0][local_258._0_8_] = (XrDebugUtilsMessengerEXT_T)0x0;
      local_258._0_8_ = (XrDebugUtilsMessengerEXT_T*)0x10;
      local_1d8 = local_1c8;
      local_1d8 = (XrDebugUtilsMessengerEXT_T**)std::__cxx11::string::_M_create((ulong*)&local_1d8, (ulong)local_258);
      pXVar3 = _UNK_0010b078;
      local_1c8[0] = (XrDebugUtilsMessengerEXT_T*)local_258._0_8_;
      *local_1d8 = __LC62;
      local_1d8[1] = pXVar3;
      local_1d0 = (XrDebugUtilsMessengerEXT_T*)local_258._0_8_;
      *(XrDebugUtilsMessengerEXT_T*)( (long)local_1d8 + local_258._0_8_ ) = (XrDebugUtilsMessengerEXT_T)0x0;
      local_258._0_8_ = 0x28;
      local_1f8 = local_1e8;
      local_1f8 = (XrDebugUtilsMessengerEXT_T**)std::__cxx11::string::_M_create((ulong*)&local_1f8, (ulong)local_258);
      pXVar3 = _UNK_0010b088;
      local_1e8[0] = (XrDebugUtilsMessengerEXT_T*)local_258._0_8_;
      *local_1f8 = __LC63;
      local_1f8[1] = pXVar3;
      pXVar6 = _UNK_0010b0a8;
      pXVar3 = __LC65;
      local_1f8[4] = (XrDebugUtilsMessengerEXT_T*)0x726574656d617261;
      local_1f8[2] = pXVar3;
      local_1f8[3] = pXVar6;
      local_1f0 = (XrDebugUtilsMessengerEXT_T*)local_258._0_8_;
      *(XrDebugUtilsMessengerEXT_T*)( (long)local_1f8 + local_258._0_8_ ) = (XrDebugUtilsMessengerEXT_T)0x0;
      if (( LoaderLogger::GetInstance():: ) && ( iVar8 = iVar8 != 0 )) {
         LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
         __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
      }

      LoaderLogger::LogMessage(0x10ad20, 0x1000, (string*)0x2, (string*)&local_1f8, (string*)&local_1d8, (vector*)local_1b8);
      if (local_1f8 != local_1e8) {
         operator_delete(local_1f8, ( ulong )(local_1e8[0] + 1));
      }

      if (local_1d8 != local_1c8) {
         operator_delete(local_1d8, ( ulong )(local_1c8[0] + 1));
      }

      if (local_1b8[0] != (XrDebugUtilsMessengerEXT_T*)local_1a8) {
         operator_delete(local_1b8[0], local_1a8._0_8_ + 1);
      }

      pXVar3 = pXStack_230;
      for (auVar15 = local_238; (undefined1[8])pXVar3 != auVar15; auVar15 = ( undefined1[8] )((long)auVar15 + 0x30)) {
         if (*(XrDebugUtilsMessengerEXT_T**)( (long)auVar15 + 0x10 ) != (XrDebugUtilsMessengerEXT_T*)( (long)auVar15 + 0x20 )) {
            operator_delete(*(XrDebugUtilsMessengerEXT_T**)( (long)auVar15 + 0x10 ), *(long*)( (long)auVar15 + 0x20 ) + 1);
         }

      }

      goto LAB_00106832;
   }

   iVar8 = pthread_mutex_lock((pthread_mutex_t*)GetGlobalLoaderMutex(), ::loader_mutex);
   if (iVar8 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar8);
   }

   cVar7 = ActiveLoaderInstance::IsAvailable();
   if (cVar7 == '\0') {
      local_258 = (undefined1[16])0x0;
      local_248 = 0;
      local_238 = ( undefined1[8] ) & DAT_00000010;
      local_1b8[0] = (XrDebugUtilsMessengerEXT_T*)local_1a8;
      local_1b8[0] = (XrDebugUtilsMessengerEXT_T*)std::__cxx11::string::_M_create((ulong*)local_1b8, (ulong)local_238);
      pXVar3 = _UNK_0010b078;
      local_1a8._0_8_ = local_238;
      *(XrDebugUtilsMessengerEXT_T**)local_1b8[0] = __LC62;
      *(XrDebugUtilsMessengerEXT_T**)( local_1b8[0] + 8 ) = pXVar3;
      local_1b8[1] = (XrDebugUtilsMessengerEXT_T*)local_238;
      local_1b8[0][(long)local_238] = (XrDebugUtilsMessengerEXT_T)0x0;
      iVar8 = RuntimeInterface::LoadRuntime((string*)local_1b8);
      if (local_1b8[0] != (XrDebugUtilsMessengerEXT_T*)local_1a8) {
         operator_delete(local_1b8[0], local_1a8._0_8_ + 1);
      }

      if (iVar8 < 0) {
         local_238 = (undefined1[8])0x0;
         pXStack_230 = (XrDebugUtilsMessengerEXT_T*)0x0;
         local_228 = 0;
         local_260 = (XrDebugUtilsMessengerEXT_T*)0x22;
         local_1d8 = local_1c8;
         local_1d8 = (XrDebugUtilsMessengerEXT_T**)std::__cxx11::string::_M_create((ulong*)&local_1d8, ( ulong ) & local_260);
         pXVar3 = _UNK_0010b0e8;
         local_1c8[0] = local_260;
         *local_1d8 = __LC69;
         local_1d8[1] = pXVar3;
         pXVar6 = _UNK_0010b0f8;
         pXVar3 = __LC70;
         *(undefined2*)( local_1d8 + 4 ) = 0x6e6f;
         local_1d8[2] = pXVar3;
         local_1d8[3] = pXVar6;
         local_1d0 = local_260;
         *(XrDebugUtilsMessengerEXT_T*)( (long)local_1d8 + (long)local_260 ) = (XrDebugUtilsMessengerEXT_T)0x0;
         local_260 = (XrDebugUtilsMessengerEXT_T*)&DAT_00000010;
         local_1f8 = local_1e8;
         local_1f8 = (XrDebugUtilsMessengerEXT_T**)std::__cxx11::string::_M_create((ulong*)&local_1f8, ( ulong ) & local_260);
         pXVar3 = _UNK_0010b078;
         local_1e8[0] = local_260;
         *local_1f8 = __LC62;
         local_1f8[1] = pXVar3;
         local_1f0 = local_260;
         *(XrDebugUtilsMessengerEXT_T*)( (long)local_1f8 + (long)local_260 ) = (XrDebugUtilsMessengerEXT_T)0x0;
         if (( LoaderLogger::GetInstance():: ) && ( iVar9 = iVar9 != 0 )) {
            LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
            __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
            __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
         }

         local_1b8[0] = (XrDebugUtilsMessengerEXT_T*)local_1a8;
         std::__cxx11::string::_M_construct<char_const*>((string*)local_1b8, "OpenXR-Loader");
         LoaderLogger::LogMessage(0x10ad20, 0x1000, (string*)0x1, (string*)local_1b8, (string*)&local_1f8, (vector*)&local_1d8);
         if (local_1b8[0] != (XrDebugUtilsMessengerEXT_T*)local_1a8) {
            operator_delete(local_1b8[0], local_1a8._0_8_ + 1);
         }

         if (local_1f8 != local_1e8) {
            operator_delete(local_1f8, ( ulong )(local_1e8[0] + 1));
         }

         auVar15 = local_238;
         pXVar3 = pXStack_230;
         if (local_1d8 != local_1c8) {
            operator_delete(local_1d8, ( ulong )(local_1c8[0] + 1));
            auVar15 = local_238;
            pXVar3 = pXStack_230;
         }

         for (; pXVar6 = pXStack_230,bVar4 = (undefined1[8])pXStack_230 != auVar15,pXStack_230 = pXVar3,bVar4; auVar15 = ( undefined1[8] )((long)auVar15 + 0x30)) {
            if (*(XrDebugUtilsMessengerEXT_T**)( (long)auVar15 + 0x10 ) != (XrDebugUtilsMessengerEXT_T*)( (long)auVar15 + 0x20 )) {
               operator_delete(*(XrDebugUtilsMessengerEXT_T**)( (long)auVar15 + 0x10 ), *(long*)( (long)auVar15 + 0x20 ) + 1);
            }

            pXVar3 = pXStack_230;
            pXStack_230 = pXVar6;
         }

         LAB_0010534e:if (local_238 != (undefined1[8])0x0) {
            operator_delete((void*)local_238, local_228 - (long)local_238);
         }

         LAB_00105366:local_288 = &local_260;
         ActiveLoaderInstance::Remove();
         local_238 = (undefined1[8])0x10;
         local_1b8[0] = (XrDebugUtilsMessengerEXT_T*)local_1a8;
         local_1b8[0] = (XrDebugUtilsMessengerEXT_T*)std::__cxx11::string::_M_create((ulong*)local_1b8, (ulong)local_238);
         pXVar3 = _UNK_0010b078;
         local_1a8._0_8_ = local_238;
         *(XrDebugUtilsMessengerEXT_T**)local_1b8[0] = __LC62;
         *(XrDebugUtilsMessengerEXT_T**)( local_1b8[0] + 8 ) = pXVar3;
         local_1b8[1] = (XrDebugUtilsMessengerEXT_T*)local_238;
         local_1b8[0][(long)local_238] = (XrDebugUtilsMessengerEXT_T)0x0;
         RuntimeInterface::UnloadRuntime((string*)local_1b8);
         if (local_1b8[0] != (XrDebugUtilsMessengerEXT_T*)local_1a8) {
            operator_delete(local_1b8[0], local_1a8._0_8_ + 1);
         }

         _local_238 = (undefined1[16])0x0;
         local_228 = 0;
         local_260 = (XrDebugUtilsMessengerEXT_T*)0x17;
         local_1d8 = local_1c8;
         local_1d8 = (XrDebugUtilsMessengerEXT_T**)std::__cxx11::string::_M_create((ulong*)&local_1d8, (ulong)local_288);
         pXVar3 = _UNK_0010b078;
         local_1c8[0] = local_260;
         *local_1d8 = __LC62;
         local_1d8[1] = pXVar3;
         *(undefined8*)( (long)local_1d8 + 0xf ) = 0x64656c6961662065;
         local_1d0 = local_260;
         *(XrDebugUtilsMessengerEXT_T*)( (long)local_1d8 + (long)local_260 ) = (XrDebugUtilsMessengerEXT_T)0x0;
         local_260 = (XrDebugUtilsMessengerEXT_T*)&DAT_00000010;
         local_1f8 = local_1e8;
         local_1f8 = (XrDebugUtilsMessengerEXT_T**)std::__cxx11::string::_M_create((ulong*)&local_1f8, (ulong)local_288);
         pXVar3 = _UNK_0010b078;
         local_1e8[0] = local_260;
         *local_1f8 = __LC62;
         local_1f8[1] = pXVar3;
         local_1f0 = local_260;
         *(XrDebugUtilsMessengerEXT_T*)( (long)local_1f8 + (long)local_260 ) = (XrDebugUtilsMessengerEXT_T)0x0;
         if (( LoaderLogger::GetInstance():: ) && ( iVar9 = iVar9 != 0 )) {
            LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
            __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
            __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
         }

         local_1b8[0] = (XrDebugUtilsMessengerEXT_T*)local_1a8;
         std::__cxx11::string::_M_construct<char_const*>((string*)local_1b8, "OpenXR-Loader");
         LoaderLogger::LogMessage(0x10ad20, 0x1000, (string*)0x1, (string*)local_1b8, (string*)&local_1f8, (vector*)&local_1d8);
         if (local_1b8[0] != (XrDebugUtilsMessengerEXT_T*)local_1a8) {
            operator_delete(local_1b8[0], local_1a8._0_8_ + 1);
         }

         if (local_1f8 != local_1e8) {
            operator_delete(local_1f8, ( ulong )(local_1e8[0] + 1));
         }

         if (local_1d8 != local_1c8) {
            operator_delete(local_1d8, ( ulong )(local_1c8[0] + 1));
         }

         pXVar3 = pXStack_230;
         auVar15 = local_238;
         if ((undefined1[8])pXStack_230 != local_238) {
            do {
               if (*(XrDebugUtilsMessengerEXT_T**)( (long)auVar15 + 0x10 ) != (XrDebugUtilsMessengerEXT_T*)( (long)auVar15 + 0x20 )) {
                  operator_delete(*(XrDebugUtilsMessengerEXT_T**)( (long)auVar15 + 0x10 ), *(long*)( (long)auVar15 + 0x20 ) + 1);
               }

               auVar15 = ( undefined1[8] )((long)auVar15 + 0x30);
            }
 while ( (undefined1[8])pXVar3 != auVar15 );
            LAB_001055c3:;
         }

      }
 else {
         uVar1 = *(uint*)( param_1 + 0x128 );
         ppcVar2 = *(char***)( param_1 + 0x130 );
         local_238 = ( undefined1[8] ) & DAT_00000010;
         local_1b8[0] = (XrDebugUtilsMessengerEXT_T*)local_1a8;
         local_1b8[0] = (XrDebugUtilsMessengerEXT_T*)std::__cxx11::string::_M_create((ulong*)local_1b8, (ulong)local_238);
         pXVar3 = _UNK_0010b078;
         local_1a8._0_8_ = local_238;
         *(XrDebugUtilsMessengerEXT_T**)local_1b8[0] = __LC62;
         *(XrDebugUtilsMessengerEXT_T**)( local_1b8[0] + 8 ) = pXVar3;
         local_1b8[1] = (XrDebugUtilsMessengerEXT_T*)local_238;
         local_1b8[0][(long)local_238] = (XrDebugUtilsMessengerEXT_T)0x0;
         iVar8 = ApiLayerInterface::LoadApiLayers((string*)local_1b8, uVar1, ppcVar2, (vector*)local_258);
         if (local_1b8[0] != (XrDebugUtilsMessengerEXT_T*)local_1a8) {
            operator_delete(local_1b8[0], local_1a8._0_8_ + 1);
         }

         if (iVar8 < 0) {
            local_238 = (undefined1[8])0x0;
            pXStack_230 = (XrDebugUtilsMessengerEXT_T*)0x0;
            local_228 = 0;
            local_260 = (XrDebugUtilsMessengerEXT_T*)0x20;
            local_1d8 = local_1c8;
            local_1d8 = (XrDebugUtilsMessengerEXT_T**)std::__cxx11::string::_M_create((ulong*)&local_1d8, ( ulong ) & local_260);
            pXVar3 = _UNK_0010b108;
            local_1c8[0] = local_260;
            *local_1d8 = __LC71;
            local_1d8[1] = pXVar3;
            pXVar3 = _UNK_0010b118;
            local_1d8[2] = __LC72;
            local_1d8[3] = pXVar3;
            local_1d0 = local_260;
            *(XrDebugUtilsMessengerEXT_T*)( (long)local_1d8 + (long)local_260 ) = (XrDebugUtilsMessengerEXT_T)0x0;
            local_260 = (XrDebugUtilsMessengerEXT_T*)&DAT_00000010;
            local_1f8 = local_1e8;
            local_1f8 = (XrDebugUtilsMessengerEXT_T**)std::__cxx11::string::_M_create((ulong*)&local_1f8, ( ulong ) & local_260);
            pXVar3 = _UNK_0010b078;
            local_1e8[0] = local_260;
            *local_1f8 = __LC62;
            local_1f8[1] = pXVar3;
            local_1f0 = local_260;
            *(XrDebugUtilsMessengerEXT_T*)( (long)local_1f8 + (long)local_260 ) = (XrDebugUtilsMessengerEXT_T)0x0;
            if (( LoaderLogger::GetInstance():: ) && ( iVar9 = iVar9 != 0 )) {
               LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
               __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
               __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
            }

            local_1b8[0] = (XrDebugUtilsMessengerEXT_T*)local_1a8;
            std::__cxx11::string::_M_construct<char_const*>((string*)local_1b8, "OpenXR-Loader");
            LoaderLogger::LogMessage(0x10ad20, 0x1000, (string*)0x1, (string*)local_1b8, (string*)&local_1f8, (vector*)&local_1d8);
            if (local_1b8[0] != (XrDebugUtilsMessengerEXT_T*)local_1a8) {
               operator_delete(local_1b8[0], local_1a8._0_8_ + 1);
            }

            if (local_1f8 != local_1e8) {
               operator_delete(local_1f8, ( ulong )(local_1e8[0] + 1));
            }

            auVar15 = local_238;
            pXVar3 = pXStack_230;
            if (local_1d8 != local_1c8) {
               operator_delete(local_1d8, ( ulong )(local_1c8[0] + 1));
               auVar15 = local_238;
               pXVar3 = pXStack_230;
            }

            for (; pXVar6 = pXStack_230,bVar4 = (undefined1[8])pXStack_230 != auVar15,pXStack_230 = pXVar3,bVar4; auVar15 = ( undefined1[8] )((long)auVar15 + 0x30)) {
               if (*(XrDebugUtilsMessengerEXT_T**)( (long)auVar15 + 0x10 ) != (XrDebugUtilsMessengerEXT_T*)( (long)auVar15 + 0x20 )) {
                  operator_delete(*(XrDebugUtilsMessengerEXT_T**)( (long)auVar15 + 0x10 ), *(long*)( (long)auVar15 + 0x20 ) + 1);
               }

               pXVar3 = pXStack_230;
               pXStack_230 = pXVar6;
            }

            goto LAB_0010534e;
         }

         local_260 = (XrDebugUtilsMessengerEXT_T*)0x0;
         local_228 = local_248;
         local_248 = 0;
         local_238 = (undefined1[8])local_258._0_8_;
         pXStack_230 = (XrDebugUtilsMessengerEXT_T*)local_258._8_8_;
         local_258 = (undefined1[16])0x0;
         iVar8 = LoaderInstance::CreateInstance(0x100000, LoaderXrTermCreateInstance, LoaderXrTermCreateApiLayerInstance, local_238, param_1, &local_260);
         pXVar3 = pXStack_230;
         for (auVar15 = local_238; (undefined1[8])pXVar3 != auVar15; auVar15 = ( undefined1[8] )((long)auVar15 + 8)) {
            if (*(long**)auVar15 != (long*)0x0) {
               ( **(code**)( **(long**)auVar15 + 8 ) )();
            }

         }

         if (local_238 != (undefined1[8])0x0) {
            operator_delete((void*)local_238, local_228 - (long)local_238);
         }

         pXVar3 = local_260;
         if (iVar8 < 0) {
            if (local_260 != (XrDebugUtilsMessengerEXT_T*)0x0) {
               ( **(code**)( *(long*)local_260 + 8 ) )(local_260);
            }

            goto LAB_00105366;
         }

         local_238 = (undefined1[8])local_260;
         local_260 = (XrDebugUtilsMessengerEXT_T*)0x0;
         iVar8 = ActiveLoaderInstance::Set(local_238, "xrCreateInstance");
         if (local_238 != (undefined1[8])0x0) {
            ( **(code**)( *(long*)local_238 + 8 ) )();
         }

         if (local_260 != (XrDebugUtilsMessengerEXT_T*)0x0) {
            ( **(code**)( *(long*)local_260 + 8 ) )();
         }

         if (iVar8 < 0) goto LAB_00105366;
         pXVar14 = *(XrDebugUtilsMessengerCreateInfoEXT**)( param_1 + 8 );
         if (pXVar14 != (XrDebugUtilsMessengerCreateInfoEXT*)0x0) {
            LAB_0010593d:if (*(int*)pXVar14 != 0x3b9b143a) goto LAB_00105930;
            _local_238 = (undefined1[16])0x0;
            local_228 = 0;
            local_260 = (XrDebugUtilsMessengerEXT_T*)0x39;
            local_1d8 = local_1c8;
            local_1d8 = (XrDebugUtilsMessengerEXT_T**)std::__cxx11::string::_M_create((ulong*)&local_1d8, ( ulong ) & local_260);
            pXVar6 = _UNK_0010b128;
            local_1c8[0] = local_260;
            *local_1d8 = __LC73;
            local_1d8[1] = pXVar6;
            pXVar6 = _UNK_0010b138;
            local_1d8[2] = __LC74;
            local_1d8[3] = pXVar6;
            pXVar6 = _UNK_0010b148;
            local_1d8[4] = __LC75;
            local_1d8[5] = pXVar6;
            uVar5 = _UNK_0010b158;
            *(undefined8*)( (long)local_1d8 + 0x29 ) = __LC76;
            *(undefined8*)( (long)local_1d8 + 0x31 ) = uVar5;
            local_1d0 = local_260;
            *(XrDebugUtilsMessengerEXT_T*)( (long)local_1d8 + (long)local_260 ) = (XrDebugUtilsMessengerEXT_T)0x0;
            local_260 = (XrDebugUtilsMessengerEXT_T*)&DAT_00000010;
            local_1f8 = local_1e8;
            local_1f8 = (XrDebugUtilsMessengerEXT_T**)std::__cxx11::string::_M_create((ulong*)&local_1f8, ( ulong ) & local_260);
            pXVar6 = _UNK_0010b078;
            local_1e8[0] = local_260;
            *local_1f8 = __LC62;
            local_1f8[1] = pXVar6;
            local_1f0 = local_260;
            *(XrDebugUtilsMessengerEXT_T*)( (long)local_1f8 + (long)local_260 ) = (XrDebugUtilsMessengerEXT_T)0x0;
            if (LoaderLogger::GetInstance() == '\0') {
               iVar8 = __cxa_guard_acquire(&LoaderLogger::GetInstance(), ::instance);
               if (iVar8 != 0) {
                  LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
                  __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
                  __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
               }

            }

            local_1a8._5_8_ = 0x726564616f4c2d52;
            local_1a8._0_5_ = 0x586e65704f;
            local_1b8[1] = (XrDebugUtilsMessengerEXT_T*)0xd;
            local_1a8[0xd] = 0;
            local_1b8[0] = (XrDebugUtilsMessengerEXT_T*)local_1a8;
            LoaderLogger::LogMessage(0x10ad20, 0x10, (string*)0x1, (string*)local_1b8, (string*)&local_1f8, (vector*)&local_1d8);
            if (local_1b8[0] != (XrDebugUtilsMessengerEXT_T*)local_1a8) {
               operator_delete(local_1b8[0], local_1a8._0_8_ + 1);
            }

            if (local_1f8 != local_1e8) {
               operator_delete(local_1f8, ( ulong )(local_1e8[0] + 1));
            }

            if (local_1d8 != local_1c8) {
               operator_delete(local_1d8, ( ulong )(local_1c8[0] + 1));
            }

            pXVar6 = pXStack_230;
            auVar15 = local_238;
            if ((undefined1[8])pXStack_230 != local_238) {
               do {
                  if (*(XrDebugUtilsMessengerEXT_T**)( (long)auVar15 + 0x10 ) != (XrDebugUtilsMessengerEXT_T*)( (long)auVar15 + 0x20 )) {
                     operator_delete(*(XrDebugUtilsMessengerEXT_T**)( (long)auVar15 + 0x10 ), *(long*)( (long)auVar15 + 0x20 ) + 1);
                  }

                  auVar15 = ( undefined1[8] )((long)auVar15 + 0x30);
               }
 while ( (undefined1[8])pXVar6 != auVar15 );
            }

            if (local_238 != (undefined1[8])0x0) {
               operator_delete((void*)local_238, local_228 - (long)local_238);
            }

            iVar8 = LoaderTrampolineCreateDebugUtilsMessengerEXT(*(XrInstance_T**)( pXVar3 + 8 ), pXVar14, (XrDebugUtilsMessengerEXT_T**)local_238);
            if (-1 < iVar8) {
               *(undefined1(*) [8])( pXVar3 + 0x50 ) = local_238;
               goto LAB_00105be5;
            }

            iVar8 = -1;
            goto LAB_001055e3;
         }

         LAB_00105be5:_local_238 = (undefined1[16])0x0;
         *param_2 = *(XrInstance_T**)( pXVar3 + 8 );
         local_228 = 0;
         local_260 = (XrDebugUtilsMessengerEXT_T*)0x1b;
         local_1d8 = local_1c8;
         local_1d8 = (XrDebugUtilsMessengerEXT_T**)std::__cxx11::string::_M_create((ulong*)&local_1d8, ( ulong ) & local_260);
         pXVar3 = _UNK_0010b168;
         local_1c8[0] = local_260;
         *local_1d8 = __LC77;
         local_1d8[1] = pXVar3;
         uVar5 = _UNK_0010b068;
         *(undefined8*)( (long)local_1d8 + 0xb ) = __LC61;
         *(undefined8*)( (long)local_1d8 + 0x13 ) = uVar5;
         local_1d0 = local_260;
         *(XrDebugUtilsMessengerEXT_T*)( (long)local_1d8 + (long)local_260 ) = (XrDebugUtilsMessengerEXT_T)0x0;
         local_260 = (XrDebugUtilsMessengerEXT_T*)&DAT_00000010;
         local_1f8 = local_1e8;
         local_1f8 = (XrDebugUtilsMessengerEXT_T**)std::__cxx11::string::_M_create((ulong*)&local_1f8, ( ulong ) & local_260);
         pXVar3 = _UNK_0010b078;
         local_1e8[0] = local_260;
         *local_1f8 = __LC62;
         local_1f8[1] = pXVar3;
         local_1f0 = local_260;
         *(XrDebugUtilsMessengerEXT_T*)( (long)local_1f8 + (long)local_260 ) = (XrDebugUtilsMessengerEXT_T)0x0;
         if (( LoaderLogger::GetInstance():: ) && ( iVar9 = iVar9 != 0 )) {
            LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
            __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
            __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
         }

         local_1b8[0] = (XrDebugUtilsMessengerEXT_T*)local_1a8;
         std::__cxx11::string::_M_construct<char_const*>((string*)local_1b8, "OpenXR-Loader");
         LoaderLogger::LogMessage(0x10ad20, 1, (string*)0x1, (string*)local_1b8, (string*)&local_1f8, (vector*)&local_1d8);
         if (local_1b8[0] != (XrDebugUtilsMessengerEXT_T*)local_1a8) {
            operator_delete(local_1b8[0], local_1a8._0_8_ + 1);
         }

         if (local_1f8 != local_1e8) {
            operator_delete(local_1f8, ( ulong )(local_1e8[0] + 1));
         }

         if (local_1d8 != local_1c8) {
            operator_delete(local_1d8, ( ulong )(local_1c8[0] + 1));
         }

         pXVar3 = pXStack_230;
         auVar15 = local_238;
         if ((undefined1[8])pXStack_230 != local_238) {
            do {
               if (*(XrDebugUtilsMessengerEXT_T**)( (long)auVar15 + 0x10 ) != (XrDebugUtilsMessengerEXT_T*)( (long)auVar15 + 0x20 )) {
                  operator_delete(*(XrDebugUtilsMessengerEXT_T**)( (long)auVar15 + 0x10 ), *(long*)( (long)auVar15 + 0x20 ) + 1);
               }

               auVar15 = ( undefined1[8] )((long)auVar15 + 0x30);
            }
 while ( (undefined1[8])pXVar3 != auVar15 );
            goto LAB_001055c3;
         }

      }

      if (local_238 != (undefined1[8])0x0) {
         operator_delete((void*)local_238, local_228 - (long)local_238);
      }

      LAB_001055e3:uVar5 = local_258._8_8_;
      plVar11 = (long*)local_258._0_8_;
      if (local_258._8_8_ != local_258._0_8_) {
         do {
            if ((long*)*plVar11 != (long*)0x0) {
               ( **(code**)( *(long*)*plVar11 + 8 ) )();
            }

            plVar11 = plVar11 + 1;
         }
 while ( (long*)uVar5 != plVar11 );
      }

      if ((long*)local_258._0_8_ != (long*)0x0) {
         operator_delete((void*)local_258._0_8_, local_248 - local_258._0_8_);
      }

   }
 else {
      _local_238 = (undefined1[16])0x0;
      local_228 = 0;
      local_258._0_8_ = (XrDebugUtilsMessengerEXT_T*)0x30;
      local_1d8 = local_1c8;
      local_1d8 = (XrDebugUtilsMessengerEXT_T**)std::__cxx11::string::_M_create((ulong*)&local_1d8, (ulong)local_258);
      pXVar3 = _UNK_0010b0b8;
      local_1c8[0] = (XrDebugUtilsMessengerEXT_T*)local_258._0_8_;
      *local_1d8 = __LC66;
      local_1d8[1] = pXVar3;
      pXVar3 = _UNK_0010b0c8;
      local_1d8[2] = __LC67;
      local_1d8[3] = pXVar3;
      pXVar3 = _UNK_0010b0d8;
      local_1d8[4] = __LC68;
      local_1d8[5] = pXVar3;
      local_1d0 = (XrDebugUtilsMessengerEXT_T*)local_258._0_8_;
      *(XrDebugUtilsMessengerEXT_T*)( (long)local_1d8 + local_258._0_8_ ) = (XrDebugUtilsMessengerEXT_T)0x0;
      local_258._0_8_ = 0x10;
      local_1f8 = local_1e8;
      local_1f8 = (XrDebugUtilsMessengerEXT_T**)std::__cxx11::string::_M_create((ulong*)&local_1f8, (ulong)local_258);
      pXVar3 = _UNK_0010b078;
      local_1e8[0] = (XrDebugUtilsMessengerEXT_T*)local_258._0_8_;
      *local_1f8 = __LC62;
      local_1f8[1] = pXVar3;
      local_1f0 = (XrDebugUtilsMessengerEXT_T*)local_258._0_8_;
      *(XrDebugUtilsMessengerEXT_T*)( (long)local_1f8 + local_258._0_8_ ) = (XrDebugUtilsMessengerEXT_T)0x0;
      if (( LoaderLogger::GetInstance():: ) && ( iVar8 = iVar8 != 0 )) {
         LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
         __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
      }

      local_1b8[0] = (XrDebugUtilsMessengerEXT_T*)local_1a8;
      std::__cxx11::string::_M_construct<char_const*>((string*)local_1b8, "OpenXR-Loader");
      LoaderLogger::LogMessage(0x10ad20, 0x1000, (string*)0x1, (string*)local_1b8, (string*)&local_1f8, (vector*)&local_1d8);
      if (local_1b8[0] != (XrDebugUtilsMessengerEXT_T*)local_1a8) {
         operator_delete(local_1b8[0], local_1a8._0_8_ + 1);
      }

      if (local_1f8 != local_1e8) {
         operator_delete(local_1f8, ( ulong )(local_1e8[0] + 1));
      }

      if (local_1d8 != local_1c8) {
         operator_delete(local_1d8, ( ulong )(local_1c8[0] + 1));
      }

      pXVar3 = pXStack_230;
      auVar15 = local_238;
      if ((undefined1[8])pXStack_230 != local_238) {
         do {
            if (*(XrDebugUtilsMessengerEXT_T**)( (long)auVar15 + 0x10 ) != (XrDebugUtilsMessengerEXT_T*)( (long)auVar15 + 0x20 )) {
               operator_delete(*(XrDebugUtilsMessengerEXT_T**)( (long)auVar15 + 0x10 ), *(long*)( (long)auVar15 + 0x20 ) + 1);
            }

            auVar15 = ( undefined1[8] )((long)auVar15 + 0x30);
         }
 while ( (undefined1[8])pXVar3 != auVar15 );
      }

      if (local_238 != (undefined1[8])0x0) {
         operator_delete((void*)local_238, local_228 - (long)local_238);
      }

      iVar8 = -10;
   }

   pthread_mutex_unlock((pthread_mutex_t*)GetGlobalLoaderMutex(), ::loader_mutex);
   LAB_00105635:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_00105930:pXVar14 = *(XrDebugUtilsMessengerCreateInfoEXT**)( pXVar14 + 8 );
   if (pXVar14 == (XrDebugUtilsMessengerCreateInfoEXT*)0x0) goto LAB_00105be5;
   goto LAB_0010593d;
}
void xrEnumerateApiLayerProperties(uint param_1, uint *param_2, XrApiLayerProperties *param_3) {
   LoaderXrEnumerateApiLayerProperties(param_1, param_2, param_3);
   return;
}
void xrCreateInstance(XrInstanceCreateInfo *param_1, XrInstance_T **param_2) {
   LoaderXrCreateInstance(param_1, param_2);
   return;
}
void xrDestroyInstance(XrInstance_T *param_1) {
   LoaderXrDestroyInstance(param_1);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* LoaderXrTermCreateInstance(XrInstanceCreateInfo const*, XrInstance_T**) */undefined4 LoaderXrTermCreateInstance(XrInstanceCreateInfo *param_1, XrInstance_T **param_2) {
   long lVar1;
   undefined8 uVar2;
   undefined4 uVar3;
   int iVar4;
   XrInstanceCreateInfo *pXVar5;
   allocator *paVar6;
   allocator *extraout_RDX;
   allocator *extraout_RDX_00;
   void *pvVar7;
   long lVar8;
   long in_FS_OFFSET;
   long local_d0;
   undefined1 local_c8[16];
   long local_b8;
   long *local_a8;
   long local_a0;
   long local_98[2];
   long *local_88;
   long local_80;
   long local_78[2];
   long *local_68;
   long local_60;
   long local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_c8 = (undefined1[16])0x0;
   local_b8 = 0;
   local_88 = local_78;
   std::__cxx11::string::_M_construct<char_const*>((string*)&local_88, "Entering loader terminator");
   local_a8 = local_98;
   std::__cxx11::string::_M_construct<char_const*>((string*)&local_a8, "xrCreateInstance");
   if (( LoaderLogger::GetInstance():: ) && ( iVar4 = iVar4 != 0 )) {
      LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
      __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
      __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
   }

   local_68 = local_58;
   std::__cxx11::string::_M_construct<char_const*>((string*)&local_68, "OpenXR-Loader");
   LoaderLogger::LogMessage(0x10ad20, 1, (string*)0x1, (string*)&local_68, (string*)&local_a8, (vector*)&local_88);
   if (local_68 != local_58) {
      operator_delete(local_68, local_58[0] + 1);
   }

   if (local_a8 != local_98) {
      operator_delete(local_a8, local_98[0] + 1);
   }

   if (local_88 != local_78) {
      operator_delete(local_88, local_78[0] + 1);
   }

   uVar2 = local_c8._8_8_;
   pvVar7 = (void*)local_c8._0_8_;
   if (local_c8._8_8_ != local_c8._0_8_) {
      do {
         if (*(void**)( (long)pvVar7 + 0x10 ) != (void*)( (long)pvVar7 + 0x20 )) {
            operator_delete(*(void**)( (long)pvVar7 + 0x10 ), *(long*)( (long)pvVar7 + 0x20 ) + 1);
         }

         pvVar7 = (void*)( (long)pvVar7 + 0x30 );
      }
 while ( (void*)uVar2 != pvVar7 );
   }

   if ((void*)local_c8._0_8_ != (void*)0x0) {
      operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
   }

   if (*(int*)param_1 == 3) {
      if (*(long*)( param_1 + 0x10 ) == 0) {
         pXVar5 = param_1 + 0x18;
         do {
            if (*pXVar5 == (XrInstanceCreateInfo)0x0) {
               paVar6 = (allocator*)( param_1 + 0x9c );
               goto LAB_00106d55;
            }

            pXVar5 = pXVar5 + 1;
         }
 while ( param_1 + 0x98 != pXVar5 );
         local_c8 = (undefined1[16])0x0;
         local_b8 = 0;
         local_d0 = 0x29;
         local_68 = local_58;
         local_68 = (long*)std::__cxx11::string::_M_create((ulong*)&local_68, ( ulong ) & local_d0);
         lVar8 = _UNK_0010b2d8;
         local_58[0] = local_d0;
         *local_68 = __LC105;
         local_68[1] = lVar8;
         lVar8 = _UNK_0010b2e8;
         local_68[2] = __LC106;
         local_68[3] = lVar8;
         uVar2 = _UNK_0010b2f8;
         *(undefined8*)( (long)local_68 + 0x19 ) = __LC107;
         *(undefined8*)( (long)local_68 + 0x21 ) = uVar2;
         local_60 = local_d0;
         *(undefined1*)( (long)local_68 + local_d0 ) = 0;
         local_d0 = 0x10;
         local_88 = local_78;
         local_88 = (long*)std::__cxx11::string::_M_create((ulong*)&local_88, ( ulong ) & local_d0);
         lVar8 = _UNK_0010b078;
         local_78[0] = local_d0;
         *local_88 = __LC62;
         local_88[1] = lVar8;
         local_80 = local_d0;
         *(undefined1*)( (long)local_88 + local_d0 ) = 0;
         local_d0 = 0x30;
         local_a8 = local_98;
         local_a8 = (long*)std::__cxx11::string::_M_create((ulong*)&local_a8, ( ulong ) & local_d0);
         lVar8 = _UNK_0010b1e8;
         local_98[0] = local_d0;
         *local_a8 = __LC90;
         local_a8[1] = lVar8;
         lVar8 = _UNK_0010b308;
         local_a8[2] = __LC108;
         local_a8[3] = lVar8;
         lVar8 = _UNK_0010b318;
         local_a8[4] = __LC109;
         local_a8[5] = lVar8;
         local_a0 = local_d0;
         *(undefined1*)( (long)local_a8 + local_d0 ) = 0;
         if (( LoaderLogger::GetInstance():: ) && ( iVar4 = iVar4 != 0 )) {
            LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
            __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
            __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
         }

         LoaderLogger::LogMessage(0x10ad20, 0x1000, (string*)0x2, (string*)&local_a8, (string*)&local_88, (vector*)&local_68);
         if (local_a8 != local_98) {
            operator_delete(local_a8, local_98[0] + 1);
         }

         if (local_88 != local_78) {
            operator_delete(local_88, local_78[0] + 1);
         }

         if (local_68 != local_58) {
            operator_delete(local_68, local_58[0] + 1);
         }

         uVar2 = local_c8._8_8_;
         for (lVar8 = local_c8._0_8_; uVar2 != lVar8; lVar8 = lVar8 + 0x30) {
            if (*(void**)( lVar8 + 0x10 ) != (void*)( lVar8 + 0x20 )) {
               operator_delete(*(void**)( lVar8 + 0x10 ), *(long*)( lVar8 + 0x20 ) + 1);
            }

         }

         goto LAB_001078d3;
      }

      local_c8 = (undefined1[16])0x0;
      local_b8 = 0;
      local_d0 = 0x10;
      local_68 = local_58;
      local_68 = (long*)std::__cxx11::string::_M_create((ulong*)&local_68, ( ulong ) & local_d0);
      lVar8 = _UNK_0010b1b8;
      local_58[0] = local_d0;
      *local_68 = __LC87;
      local_68[1] = lVar8;
      local_60 = local_d0;
      *(undefined1*)( (long)local_68 + local_d0 ) = 0;
      local_d0 = 0x10;
      local_88 = local_78;
      local_88 = (long*)std::__cxx11::string::_M_create((ulong*)&local_88, ( ulong ) & local_d0);
      lVar8 = _UNK_0010b078;
      local_78[0] = local_d0;
      *local_88 = __LC62;
      local_88[1] = lVar8;
      local_80 = local_d0;
      *(undefined1*)( (long)local_88 + local_d0 ) = 0;
      local_d0 = 0x31;
      local_a8 = local_98;
      local_a8 = (long*)std::__cxx11::string::_M_create((ulong*)&local_a8, ( ulong ) & local_d0);
      lVar8 = _UNK_0010b198;
      local_98[0] = local_d0;
      *local_a8 = __LC85;
      local_a8[1] = lVar8;
      lVar1 = _UNK_0010b1c8;
      lVar8 = __LC88;
      *(undefined1*)( local_a8 + 6 ) = 0x6b;
      local_a8[2] = lVar8;
      local_a8[3] = lVar1;
      lVar8 = _UNK_0010b1d8;
      local_a8[4] = __LC89;
      local_a8[5] = lVar8;
      local_a0 = local_d0;
      *(undefined1*)( (long)local_a8 + local_d0 ) = 0;
      if (( LoaderLogger::GetInstance():: ) && ( iVar4 = iVar4 != 0 )) {
         LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
         __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
      }

      LoaderLogger::LogMessage(0x10ad20, 0x1000, (string*)0x2, (string*)&local_a8, (string*)&local_88, (vector*)&local_68);
      if (local_a8 != local_98) {
         operator_delete(local_a8, local_98[0] + 1);
      }

      if (local_88 != local_78) {
         operator_delete(local_88, local_78[0] + 1);
      }

      if (local_68 != local_58) {
         operator_delete(local_68, local_58[0] + 1);
      }

      uVar2 = local_c8._8_8_;
      pvVar7 = (void*)local_c8._0_8_;
      if (local_c8._8_8_ != local_c8._0_8_) {
         do {
            if (*(void**)( (long)pvVar7 + 0x10 ) != (void*)( (long)pvVar7 + 0x20 )) {
               operator_delete(*(void**)( (long)pvVar7 + 0x10 ), *(long*)( (long)pvVar7 + 0x20 ) + 1);
            }

            pvVar7 = (void*)( (long)pvVar7 + 0x30 );
         }
 while ( (void*)uVar2 != pvVar7 );
         goto LAB_001074d9;
      }

   }
 else {
      local_c8 = (undefined1[16])0x0;
      local_b8 = 0;
      local_d0 = 0x26;
      local_68 = local_58;
      local_68 = (long*)std::__cxx11::string::_M_create((ulong*)&local_68, ( ulong ) & local_d0);
      lVar8 = _UNK_0010b178;
      local_58[0] = local_d0;
      *local_68 = __LC83;
      local_68[1] = lVar8;
      lVar8 = _UNK_0010b188;
      local_68[2] = __LC84;
      local_68[3] = lVar8;
      *(undefined8*)( (long)local_68 + 0x1e ) = 0x2e4f464e495f4554;
      local_60 = local_d0;
      *(undefined1*)( (long)local_68 + local_d0 ) = 0;
      local_d0 = 0x10;
      local_88 = local_78;
      local_88 = (long*)std::__cxx11::string::_M_create((ulong*)&local_88, ( ulong ) & local_d0);
      lVar8 = _UNK_0010b078;
      local_78[0] = local_d0;
      *local_88 = __LC62;
      local_88[1] = lVar8;
      local_80 = local_d0;
      *(undefined1*)( (long)local_88 + local_d0 ) = 0;
      local_d0 = 0x23;
      local_a8 = local_98;
      local_a8 = (long*)std::__cxx11::string::_M_create((ulong*)&local_a8, ( ulong ) & local_d0);
      lVar8 = _UNK_0010b198;
      local_98[0] = local_d0;
      *local_a8 = __LC85;
      local_a8[1] = lVar8;
      lVar8 = _UNK_0010b1a8;
      local_a8[2] = __LC86;
      local_a8[3] = lVar8;
      *(undefined4*)( (long)local_a8 + 0x1f ) = 0x65707974;
      local_a0 = local_d0;
      *(undefined1*)( (long)local_a8 + local_d0 ) = 0;
      if (( LoaderLogger::GetInstance():: ) && ( iVar4 = iVar4 != 0 )) {
         LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
         __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
      }

      LoaderLogger::LogMessage(0x10ad20, 0x1000, (string*)0x2, (string*)&local_a8, (string*)&local_88, (vector*)&local_68);
      if (local_a8 != local_98) {
         operator_delete(local_a8, local_98[0] + 1);
      }

      if (local_88 != local_78) {
         operator_delete(local_88, local_78[0] + 1);
      }

      if (local_68 != local_58) {
         operator_delete(local_68, local_58[0] + 1);
      }

      uVar2 = local_c8._8_8_;
      pvVar7 = (void*)local_c8._0_8_;
      if (local_c8._8_8_ != local_c8._0_8_) {
         do {
            if (*(void**)( (long)pvVar7 + 0x10 ) != (void*)( (long)pvVar7 + 0x20 )) {
               operator_delete(*(void**)( (long)pvVar7 + 0x10 ), *(long*)( (long)pvVar7 + 0x20 ) + 1);
            }

            pvVar7 = (void*)( (long)pvVar7 + 0x30 );
         }
 while ( (void*)uVar2 != pvVar7 );
         LAB_001074d9:;
      }

   }

   if ((void*)local_c8._0_8_ != (void*)0x0) {
      operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
   }

   LAB_00107087:uVar3 = 0xffffffff;
   LAB_00107090:local_c8 = (undefined1[16])0x0;
   local_b8 = 0;
   local_d0 = 0x32;
   local_68 = local_58;
   local_68 = (long*)std::__cxx11::string::_M_create((ulong*)&local_68, ( ulong ) & local_d0);
   lVar8 = _UNK_0010b278;
   local_58[0] = local_d0;
   *local_68 = __LC99;
   local_68[1] = lVar8;
   lVar1 = _UNK_0010b288;
   lVar8 = __LC100;
   *(undefined2*)( local_68 + 6 ) = 0x7374;
   local_68[2] = lVar8;
   local_68[3] = lVar1;
   lVar8 = _UNK_0010b298;
   local_68[4] = __LC101;
   local_68[5] = lVar8;
   local_60 = local_d0;
   *(undefined1*)( (long)local_68 + local_d0 ) = 0;
   local_d0 = 0x10;
   local_88 = local_78;
   local_88 = (long*)std::__cxx11::string::_M_create((ulong*)&local_88, ( ulong ) & local_d0);
   lVar8 = _UNK_0010b078;
   local_78[0] = local_d0;
   *local_88 = __LC62;
   local_88[1] = lVar8;
   local_80 = local_d0;
   *(undefined1*)( (long)local_88 + local_d0 ) = 0;
   local_d0 = 0x24;
   local_a8 = local_98;
   local_a8 = (long*)std::__cxx11::string::_M_create((ulong*)&local_a8, ( ulong ) & local_d0);
   lVar8 = _UNK_0010b088;
   local_98[0] = local_d0;
   *local_a8 = __LC63;
   local_a8[1] = lVar8;
   lVar1 = _UNK_0010b098;
   lVar8 = __LC64;
   *(undefined4*)( local_a8 + 4 ) = 0x72657465;
   local_a8[2] = lVar8;
   local_a8[3] = lVar1;
   local_a0 = local_d0;
   *(undefined1*)( (long)local_a8 + local_d0 ) = 0;
   if (( LoaderLogger::GetInstance():: ) && ( iVar4 = iVar4 != 0 )) {
      LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
      __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
      __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
   }

   LoaderLogger::LogMessage(0x10ad20, 0x1000, (string*)0x2, (string*)&local_a8, (string*)&local_88, (vector*)&local_68);
   if (local_a8 != local_98) {
      operator_delete(local_a8, local_98[0] + 1);
   }

   if (local_88 != local_78) {
      operator_delete(local_88, local_78[0] + 1);
   }

   if (local_68 != local_58) {
      operator_delete(local_68, local_58[0] + 1);
   }

   uVar2 = local_c8._8_8_;
   pvVar7 = (void*)local_c8._0_8_;
   if (local_c8._8_8_ != local_c8._0_8_) {
      do {
         if (*(void**)( (long)pvVar7 + 0x10 ) != (void*)( (long)pvVar7 + 0x20 )) {
            operator_delete(*(void**)( (long)pvVar7 + 0x10 ), *(long*)( (long)pvVar7 + 0x20 ) + 1);
         }

         pvVar7 = (void*)( (long)pvVar7 + 0x30 );
      }
 while ( (void*)uVar2 != pvVar7 );
      LAB_00106ed3:}LAB_00106ed8:if ((void*)local_c8._0_8_ != (void*)0x0) {
         operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
      }

      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar3;
      LAB_00106d55:if (*paVar6 != (allocator)0x0) goto LAB_00106d48;
      if (param_1[0x18] == (XrInstanceCreateInfo)0x0) {
         local_c8 = (undefined1[16])0x0;
         local_b8 = 0;
         local_d0 = 0x4f;
         local_88 = local_78;
         local_88 = (long*)std::__cxx11::string::_M_create((ulong*)&local_88, ( ulong ) & local_d0);
         lVar8 = _UNK_0010b1e8;
         local_78[0] = local_d0;
         *local_88 = __LC90;
         local_88[1] = lVar8;
         lVar8 = _UNK_0010b1f8;
         local_88[2] = __LC91;
         local_88[3] = lVar8;
         lVar8 = _UNK_0010b208;
         local_88[4] = __LC92;
         local_88[5] = lVar8;
         lVar8 = _UNK_0010b218;
         local_88[6] = __LC93;
         local_88[7] = lVar8;
         uVar2 = _UNK_0010b228;
         *(undefined8*)( (long)local_88 + 0x3f ) = __LC94;
         *(undefined8*)( (long)local_88 + 0x47 ) = uVar2;
         local_80 = local_d0;
         *(undefined1*)( (long)local_88 + local_d0 ) = 0;
         local_d0 = 0x10;
         local_a8 = local_98;
         local_a8 = (long*)std::__cxx11::string::_M_create((ulong*)&local_a8, ( ulong ) & local_d0);
         lVar8 = _UNK_0010b078;
         local_98[0] = local_d0;
         *local_a8 = __LC62;
         local_a8[1] = lVar8;
         local_a0 = local_d0;
         *(undefined1*)( (long)local_a8 + local_d0 ) = 0;
         if (( LoaderLogger::GetInstance():: ) && ( iVar4 = iVar4 != 0 )) {
            LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
            __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
            __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
         }

         local_68 = local_58;
         std::__cxx11::string::_M_construct<char_const*>((string*)&local_68, "OpenXR-Loader");
         LoaderLogger::LogMessage(0x10ad20, 0x1000, (string*)0x1, (string*)&local_68, (string*)&local_a8, (vector*)&local_88);
         if (local_68 != local_58) {
            operator_delete(local_68, local_58[0] + 1);
         }

         if (local_a8 != local_98) {
            operator_delete(local_a8, local_98[0] + 1);
         }

         if (local_88 != local_78) {
            operator_delete(local_88, local_78[0] + 1);
         }

         uVar2 = local_c8._8_8_;
         for (lVar8 = local_c8._0_8_; uVar2 != lVar8; lVar8 = lVar8 + 0x30) {
            if (*(void**)( lVar8 + 0x10 ) != (void*)( lVar8 + 0x20 )) {
               operator_delete(*(void**)( lVar8 + 0x10 ), *(long*)( lVar8 + 0x20 ) + 1);
            }

         }

         goto LAB_001078d3;
      }

      if (( *(int*)( param_1 + 0x138 ) != 0 ) && ( *(long*)( param_1 + 0x140 ) == 0 )) {
         local_b8 = 0;
         local_c8 = (undefined1[16])0x0;
         std::__cxx11::string::string<std::allocator<char>>((string*)&local_68, "enabledExtensionCount is non-0 but array is NULL", (allocator*)( param_1 + 0x11c ));
         std::__cxx11::string::string<std::allocator<char>>((string*)&local_88, "xrCreateInstance", extraout_RDX);
         std::__cxx11::string::string<std::allocator<char>>((string*)&local_a8, "VUID-XrInstanceCreateInfo-enabledExtensionNames-parameter", extraout_RDX_00);
         LoaderLogger::LogValidationErrorMessage((string*)&local_a8, (string*)&local_88, (string*)&local_68, (vector*)local_c8);
         for (int i = 0; i < 3; i++) {
            std::__cxx11::string::_M_dispose();
         }

         std::vector<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>>::~vector((vector<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>>*)local_c8);
         goto LAB_00107087;
      }

      if (( RuntimeInterface::GetInstance():: ) && ( iVar4 = __cxa_guard_acquire(&RuntimeInterface::GetInstance(), ::instance) ),iVar4 != 0) {
         __cxa_atexit(std::unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>>::~unique_ptr, &RuntimeInterface::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&RuntimeInterface::GetInstance(), ::instance);
      }

      uVar3 = RuntimeInterface::CreateInstance(RuntimeInterface::GetInstance(), ::instance, (XrInstance_T**)param_1);
      local_c8 = (undefined1[16])0x0;
      local_b8 = 0;
      local_88 = local_78;
      std::__cxx11::string::_M_construct<char_const*>((string*)&local_88, "Completed loader terminator");
      local_a8 = local_98;
      std::__cxx11::string::_M_construct<char_const*>((string*)&local_a8, "xrCreateInstance");
      if (( LoaderLogger::GetInstance():: ) && ( iVar4 = iVar4 != 0 )) {
         LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
         __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
      }

      local_68 = local_58;
      std::__cxx11::string::_M_construct<char_const*>((string*)&local_68, "OpenXR-Loader");
      LoaderLogger::LogMessage(0x10ad20, 1, (string*)0x1, (string*)&local_68, (string*)&local_a8, (vector*)&local_88);
      if (local_68 != local_58) {
         operator_delete(local_68, local_58[0] + 1);
      }

      if (local_a8 != local_98) {
         operator_delete(local_a8, local_98[0] + 1);
      }

      if (local_88 != local_78) {
         operator_delete(local_88, local_78[0] + 1);
      }

      uVar2 = local_c8._8_8_;
      pvVar7 = (void*)local_c8._0_8_;
      if (local_c8._8_8_ != local_c8._0_8_) goto LAB_00106eb0;
      goto LAB_00106ed8;
      LAB_00106d48:paVar6 = paVar6 + 1;
      if ((allocator*)( param_1 + 0x11c ) == paVar6) goto LAB_00107b5f;
      goto LAB_00106d55;
      LAB_00107b5f:local_c8 = (undefined1[16])0x0;
      local_b8 = 0;
      local_d0 = 0x24;
      local_68 = local_58;
      local_68 = (long*)std::__cxx11::string::_M_create((ulong*)&local_68, ( ulong ) & local_d0);
      lVar8 = _UNK_0010b2a8;
      local_58[0] = local_d0;
      *local_68 = __LC102;
      local_68[1] = lVar8;
      lVar1 = _UNK_0010b2b8;
      lVar8 = __LC103;
      *(undefined4*)( local_68 + 4 ) = 0x2e726f74;
      local_68[2] = lVar8;
      local_68[3] = lVar1;
      local_60 = local_d0;
      *(undefined1*)( (long)local_68 + local_d0 ) = 0;
      local_d0 = 0x10;
      local_88 = local_78;
      local_88 = (long*)std::__cxx11::string::_M_create((ulong*)&local_88, ( ulong ) & local_d0);
      lVar8 = _UNK_0010b078;
      local_78[0] = local_d0;
      *local_88 = __LC62;
      local_88[1] = lVar8;
      local_80 = local_d0;
      *(undefined1*)( (long)local_88 + local_d0 ) = 0;
      local_d0 = 0x2b;
      local_a8 = local_98;
      local_a8 = (long*)std::__cxx11::string::_M_create((ulong*)&local_a8, ( ulong ) & local_d0);
      lVar8 = _UNK_0010b1e8;
      local_98[0] = local_d0;
      *local_a8 = __LC90;
      local_a8[1] = lVar8;
      lVar8 = _UNK_0010b1f8;
      local_a8[2] = __LC91;
      local_a8[3] = lVar8;
      uVar2 = _UNK_0010b2c8;
      *(undefined8*)( (long)local_a8 + 0x1b ) = __LC104;
      *(undefined8*)( (long)local_a8 + 0x23 ) = uVar2;
      local_a0 = local_d0;
      *(undefined1*)( (long)local_a8 + local_d0 ) = 0;
      if (( LoaderLogger::GetInstance():: ) && ( iVar4 = iVar4 != 0 )) {
         LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
         __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
      }

      LoaderLogger::LogMessage(0x10ad20, 0x1000, (string*)0x2, (string*)&local_a8, (string*)&local_88, (vector*)&local_68);
      if (local_a8 != local_98) {
         operator_delete(local_a8, local_98[0] + 1);
      }

      if (local_88 != local_78) {
         operator_delete(local_88, local_78[0] + 1);
      }

      if (local_68 != local_58) {
         operator_delete(local_68, local_58[0] + 1);
      }

      uVar2 = local_c8._8_8_;
      for (lVar8 = local_c8._0_8_; uVar2 != lVar8; lVar8 = lVar8 + 0x30) {
         if (*(void**)( lVar8 + 0x10 ) != (void*)( lVar8 + 0x20 )) {
            operator_delete(*(void**)( lVar8 + 0x10 ), *(long*)( lVar8 + 0x20 ) + 1);
         }

      }

      LAB_001078d3:if ((void*)local_c8._0_8_ != (void*)0x0) {
         operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
      }

      local_c8 = (undefined1[16])0x0;
      local_b8 = 0;
      local_d0 = 0x23;
      local_68 = local_58;
      local_68 = (long*)std::__cxx11::string::_M_create((ulong*)&local_68, ( ulong ) & local_d0);
      lVar8 = _UNK_0010b238;
      local_58[0] = local_d0;
      *local_68 = __LC95;
      local_68[1] = lVar8;
      lVar8 = _UNK_0010b248;
      local_68[2] = __LC96;
      local_68[3] = lVar8;
      *(undefined4*)( (long)local_68 + 0x1f ) = 0x2e64696c;
      local_60 = local_d0;
      *(undefined1*)( (long)local_68 + local_d0 ) = 0;
      local_d0 = 0x10;
      local_88 = local_78;
      local_88 = (long*)std::__cxx11::string::_M_create((ulong*)&local_88, ( ulong ) & local_d0);
      lVar8 = _UNK_0010b078;
      local_78[0] = local_d0;
      *local_88 = __LC62;
      local_88[1] = lVar8;
      local_80 = local_d0;
      *(undefined1*)( (long)local_88 + local_d0 ) = 0;
      local_d0 = 0x33;
      local_a8 = local_98;
      local_a8 = (long*)std::__cxx11::string::_M_create((ulong*)&local_a8, ( ulong ) & local_d0);
      lVar8 = _UNK_0010b198;
      local_98[0] = local_d0;
      *local_a8 = __LC85;
      local_a8[1] = lVar8;
      lVar8 = _UNK_0010b258;
      local_a8[2] = __LC97;
      local_a8[3] = lVar8;
      lVar8 = _UNK_0010b268;
      local_a8[4] = __LC98;
      local_a8[5] = lVar8;
      *(undefined4*)( (long)local_a8 + 0x2f ) = 0x72657465;
      local_a0 = local_d0;
      *(undefined1*)( (long)local_a8 + local_d0 ) = 0;
      if (( LoaderLogger::GetInstance():: ) && ( iVar4 = iVar4 != 0 )) {
         LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
         __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
      }

      LoaderLogger::LogMessage(0x10ad20, 0x1000, (string*)0x2, (string*)&local_a8, (string*)&local_88, (vector*)&local_68);
      if (local_a8 != local_98) {
         operator_delete(local_a8, local_98[0] + 1);
      }

      if (local_88 != local_78) {
         operator_delete(local_88, local_78[0] + 1);
      }

      if (local_68 != local_58) {
         operator_delete(local_68, local_58[0] + 1);
      }

      uVar2 = local_c8._8_8_;
      pvVar7 = (void*)local_c8._0_8_;
      if (local_c8._8_8_ != local_c8._0_8_) {
         do {
            if (*(void**)( (long)pvVar7 + 0x10 ) != (void*)( (long)pvVar7 + 0x20 )) {
               operator_delete(*(void**)( (long)pvVar7 + 0x10 ), *(long*)( (long)pvVar7 + 0x20 ) + 1);
            }

            pvVar7 = (void*)( (long)pvVar7 + 0x30 );
         }
 while ( (void*)uVar2 != pvVar7 );
      }

      if ((void*)local_c8._0_8_ != (void*)0x0) {
         operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
      }

      uVar3 = 0xffffffd3;
      goto LAB_00107090;
      LAB_00106eb0:do {
         if (*(void**)( (long)pvVar7 + 0x10 ) != (void*)( (long)pvVar7 + 0x20 )) {
            operator_delete(*(void**)( (long)pvVar7 + 0x10 ), *(long*)( (long)pvVar7 + 0x20 ) + 1);
         }

         pvVar7 = (void*)( (long)pvVar7 + 0x30 );
      }
 while ( (void*)uVar2 != pvVar7 );
      goto LAB_00106ed3;
   }

   /* LoaderXrTermCreateApiLayerInstance(XrInstanceCreateInfo const*, XrApiLayerCreateInfo const*,
   XrInstance_T**) */
   void LoaderXrTermCreateApiLayerInstance(XrInstanceCreateInfo *param_1, XrApiLayerCreateInfo *param_2, XrInstance_T **param_3) {
      LoaderXrTermCreateInstance(param_1, param_3);
      return;
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* LoaderXrGetInstanceProcAddr(XrInstance_T*, char const*, void (**)()) */
   undefined8 LoaderXrGetInstanceProcAddr(XrInstance_T *param_1, char *param_2, _func_void *param_3) {
      LoaderInstance *pLVar1;
      LoaderInstance *pLVar2;
      string *psVar3;
      LoaderInstance *pLVar4;
      char cVar5;
      int iVar6;
      undefined8 uVar7;
      code *pcVar8;
      allocator *extraout_RDX;
      allocator *extraout_RDX_00;
      allocator *extraout_RDX_01;
      long lVar9;
      long in_FS_OFFSET;
      LoaderInstance *local_d0;
      undefined1 local_c8[16];
      long local_b8;
      string **local_a8;
      string *local_a0;
      string *local_98[2];
      LoaderInstance **local_88;
      LoaderInstance *local_80;
      LoaderInstance *local_78[2];
      LoaderInstance **local_68;
      LoaderInstance *local_60;
      LoaderInstance *local_58[3];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (param_3 == (_func_void*)0x0) {
         local_c8 = (undefined1[16])0x0;
         local_b8 = 0;
         local_d0 = (LoaderInstance*)&DAT_00000018;
         local_68 = local_58;
         local_68 = (LoaderInstance**)std::__cxx11::string::_M_create((ulong*)&local_68, ( ulong ) & local_d0);
         pLVar2 = _UNK_0010b328;
         pLVar1 = __LC115;
         local_58[0] = local_d0;
         local_68[2] = (LoaderInstance*)0x7265746e696f7020;
         *local_68 = pLVar1;
         local_68[1] = pLVar2;
         local_60 = local_d0;
         *(LoaderInstance*)( (long)local_68 + (long)local_d0 ) = (LoaderInstance)0x0;
         local_d0 = (LoaderInstance*)0x15;
         local_88 = local_78;
         local_88 = (LoaderInstance**)std::__cxx11::string::_M_create((ulong*)&local_88, ( ulong ) & local_d0);
         pLVar1 = _UNK_0010b338;
         local_78[0] = local_d0;
         *local_88 = __LC116;
         local_88[1] = pLVar1;
         *(undefined8*)( (long)local_88 + 0xd ) = 0x72646441636f7250;
         local_80 = local_d0;
         *(LoaderInstance*)( (long)local_88 + (long)local_d0 ) = (LoaderInstance)0x0;
         local_d0 = (LoaderInstance*)0x2d;
         local_a8 = local_98;
         local_a8 = (string**)std::__cxx11::string::_M_create((ulong*)&local_a8, ( ulong ) & local_d0);
         psVar3 = _UNK_0010b348;
         local_98[0] = (string*)local_d0;
         *local_a8 = __LC117;
         local_a8[1] = psVar3;
         psVar3 = _UNK_0010b358;
         local_a8[2] = __LC118;
         local_a8[3] = psVar3;
         uVar7 = _UNK_0010b368;
         *(undefined8*)( (long)local_a8 + 0x1d ) = __LC119;
         *(undefined8*)( (long)local_a8 + 0x25 ) = uVar7;
         local_a0 = (string*)local_d0;
         *(string*)( (long)local_a8 + (long)local_d0 ) = (string)0x0;
         if (( LoaderLogger::GetInstance():: ) && ( iVar6 = iVar6 != 0 )) {
            LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
            __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
            __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
         }

         LoaderLogger::LogMessage(0x10ad20, 0x1000, (string*)0x2, (string*)&local_a8, (string*)&local_88, (vector*)&local_68);
         if (local_a8 != local_98) {
            operator_delete(local_a8, ( ulong )(local_98[0] + 1));
         }

         if (local_88 != local_78) {
            operator_delete(local_88, ( ulong )(local_78[0] + 1));
         }

         if (local_68 != local_58) {
            operator_delete(local_68, ( ulong )(local_58[0] + 1));
         }

         uVar7 = local_c8._8_8_;
         for (lVar9 = local_c8._0_8_; uVar7 != lVar9; lVar9 = lVar9 + 0x30) {
            if (*(void**)( lVar9 + 0x10 ) != (void*)( lVar9 + 0x20 )) {
               operator_delete(*(void**)( lVar9 + 0x10 ), *(long*)( lVar9 + 0x20 ) + 1);
            }

         }

      }
 else {
         if (param_2 != (char*)0x0) {
            *(undefined8*)param_3 = 0;
            local_d0 = (LoaderInstance*)0x0;
            if (param_1 == (XrInstance_T*)0x0) {
               iVar6 = strcmp(param_2, "xrCreateInstance");
               if (( ( iVar6 == 0 ) || ( iVar6 = strcmp(param_2, "xrEnumerateApiLayerProperties") ),iVar6 == 0 )) goto LAB_00108177;
               iVar6 = strcmp(param_2, "xrInitializeLoaderKHR");
               if (iVar6 != 0) {
                  std::__cxx11::string::string<std::allocator<char>>((string*)&local_a8, "XR_NULL_HANDLE for instance but query for ", extraout_RDX);
                  std::__cxx11::string::append((string*)&local_a8, param_2);
                  std::__cxx11::string::append((string*)&local_a8, " requires a valid instance");
                  local_b8 = 0;
                  local_c8 = (undefined1[16])0x0;
                  std::__cxx11::string::string<std::allocator<char>>((string*)&local_68, "xrGetInstanceProcAddr", extraout_RDX_00);
                  std::__cxx11::string::string<std::allocator<char>>((string*)&local_88, "VUID-xrGetInstanceProcAddr-instance-parameter", extraout_RDX_01);
                  LoaderLogger::LogValidationErrorMessage((string*)&local_88, (string*)&local_68, (string*)&local_a8, (vector*)local_c8);
                  std::__cxx11::string::_M_dispose();
                  std::__cxx11::string::_M_dispose();
                  std::vector<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>>::~vector((vector<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>>*)local_c8);
                  std::__cxx11::string::_M_dispose();
                  goto LAB_0010856b;
               }

               iVar6 = strcmp(param_2, "xrGetInstanceProcAddr");
               if (iVar6 != 0) goto LAB_001084b2;
            }
 else {
               uVar7 = ActiveLoaderInstance::Get(&local_d0, "xrGetInstanceProcAddr");
               if ((int)uVar7 < 0) goto LAB_00108210;
               if (param_1 != *(XrInstance_T**)( local_d0 + 8 )) {
                  LAB_0010856b:uVar7 = 0xfffffff4;
                  goto LAB_00108210;
               }

               LAB_00108177:iVar6 = strcmp(param_2, "xrGetInstanceProcAddr");
               if (iVar6 != 0) {
                  iVar6 = strcmp(param_2, "xrInitializeLoaderKHR");
                  if (iVar6 == 0) {
                     LAB_001084b2:uVar7 = 0xfffffff9;
                     goto LAB_00108210;
                  }

                  iVar6 = strcmp(param_2, "xrEnumerateApiLayerProperties");
                  if (iVar6 == 0) {
                     *(code**)param_3 = LoaderXrEnumerateApiLayerProperties;
                     uVar7 = 0;
                     goto LAB_00108210;
                  }

                  iVar6 = strcmp(param_2, "xrEnumerateInstanceExtensionProperties");
                  if (iVar6 == 0) {
                     *(code**)param_3 = LoaderXrEnumerateInstanceExtensionProperties;
                     uVar7 = 0;
                     goto LAB_00108210;
                  }

                  iVar6 = strcmp(param_2, "xrCreateInstance");
                  if (iVar6 == 0) {
                     *(code**)param_3 = LoaderXrCreateInstance;
                     uVar7 = 0;
                     goto LAB_00108210;
                  }

                  iVar6 = strcmp(param_2, "xrDestroyInstance");
                  if (iVar6 == 0) {
                     *(code**)param_3 = LoaderXrDestroyInstance;
                     uVar7 = 0;
                     goto LAB_00108210;
                  }

                  if (*(long*)param_3 == 0) {
                     iVar6 = strcmp(param_2, "xrCreateDebugUtilsMessengerEXT");
                     if (iVar6 == 0) {
                        pcVar8 = LoaderTrampolineCreateDebugUtilsMessengerEXT;
                        LAB_001083e0:pLVar4 = local_d0;
                        *(code**)param_3 = pcVar8;
                        local_c8._0_8_ = 0x12;
                        local_68 = local_58;
                        local_68 = (LoaderInstance**)std::__cxx11::string::_M_create((ulong*)&local_68, (ulong)local_c8);
                        pLVar2 = _UNK_0010b388;
                        pLVar1 = __LC121;
                        local_58[0] = (LoaderInstance*)local_c8._0_8_;
                        *(undefined2*)( local_68 + 2 ) = 0x736c;
                        *local_68 = pLVar1;
                        local_68[1] = pLVar2;
                        local_60 = (LoaderInstance*)local_c8._0_8_;
                        *(LoaderInstance*)( (long)local_68 + local_c8._0_8_ ) = (LoaderInstance)0x0;
                        cVar5 = LoaderInstance::ExtensionIsEnabled((string*)pLVar4);
                        if (local_68 != local_58) {
                           operator_delete(local_68, ( ulong )(local_58[0] + 1));
                        }

                        if (cVar5 == '\0') {
                           *(undefined8*)param_3 = 0;
                           goto LAB_001084b2;
                        }

                        if (*(long*)param_3 != 0) goto LAB_00108208;
                     }
 else {
                        iVar6 = strcmp(param_2, "xrDestroyDebugUtilsMessengerEXT");
                        if (iVar6 == 0) {
                           pcVar8 = LoaderTrampolineDestroyDebugUtilsMessengerEXT;
                           goto LAB_001083e0;
                        }

                        iVar6 = strcmp(param_2, "xrSessionBeginDebugUtilsLabelRegionEXT");
                        if (iVar6 == 0) {
                           pcVar8 = LoaderTrampolineSessionBeginDebugUtilsLabelRegionEXT;
                           goto LAB_001083e0;
                        }

                        iVar6 = strcmp(param_2, "xrSessionEndDebugUtilsLabelRegionEXT");
                        if (iVar6 == 0) {
                           pcVar8 = LoaderTrampolineSessionEndDebugUtilsLabelRegionEXT;
                           goto LAB_001083e0;
                        }

                        iVar6 = strcmp(param_2, "xrSessionInsertDebugUtilsLabelEXT");
                        if (iVar6 == 0) {
                           pcVar8 = LoaderTrampolineSessionInsertDebugUtilsLabelEXT;
                           goto LAB_001083e0;
                        }

                        iVar6 = strcmp(param_2, "xrSetDebugUtilsObjectNameEXT");
                        if (iVar6 == 0) {
                           pcVar8 = LoaderTrampolineSetDebugUtilsObjectNameEXT;
                           goto LAB_001083e0;
                        }

                        iVar6 = strcmp(param_2, "xrSubmitDebugUtilsMessageEXT");
                        if (iVar6 == 0) {
                           pcVar8 = LoaderTrampolineSubmitDebugUtilsMessageEXT;
                           goto LAB_001083e0;
                        }

                     }

                     uVar7 = LoaderInstance::GetInstanceProcAddr((char*)local_d0, (_func_void*)param_2);
                  }
 else {
                     LAB_00108208:uVar7 = 0;
                  }

                  goto LAB_00108210;
               }

            }

            *(code**)param_3 = LoaderXrGetInstanceProcAddr;
            uVar7 = 0;
            goto LAB_00108210;
         }

         local_c8 = (undefined1[16])0x0;
         local_b8 = 0;
         local_d0 = (LoaderInstance*)0x14;
         local_68 = local_58;
         local_68 = (LoaderInstance**)std::__cxx11::string::_M_create((ulong*)&local_68, ( ulong ) & local_d0);
         pLVar1 = _UNK_0010b378;
         local_58[0] = local_d0;
         *local_68 = __LC120;
         local_68[1] = pLVar1;
         *(undefined4*)( local_68 + 2 ) = 0x7265746e;
         local_60 = local_d0;
         *(LoaderInstance*)( (long)local_68 + (long)local_d0 ) = (LoaderInstance)0x0;
         local_d0 = (LoaderInstance*)0x15;
         local_88 = local_78;
         local_88 = (LoaderInstance**)std::__cxx11::string::_M_create((ulong*)&local_88, ( ulong ) & local_d0);
         pLVar1 = _UNK_0010b338;
         local_78[0] = local_d0;
         *local_88 = __LC116;
         local_88[1] = pLVar1;
         *(undefined8*)( (long)local_88 + 0xd ) = 0x72646441636f7250;
         local_80 = local_d0;
         *(LoaderInstance*)( (long)local_88 + (long)local_d0 ) = (LoaderInstance)0x0;
         local_d0 = (LoaderInstance*)0x2d;
         local_a8 = local_98;
         local_a8 = (string**)std::__cxx11::string::_M_create((ulong*)&local_a8, ( ulong ) & local_d0);
         psVar3 = _UNK_0010b348;
         local_98[0] = (string*)local_d0;
         *local_a8 = __LC117;
         local_a8[1] = psVar3;
         psVar3 = _UNK_0010b358;
         local_a8[2] = __LC118;
         local_a8[3] = psVar3;
         uVar7 = _UNK_0010b368;
         *(undefined8*)( (long)local_a8 + 0x1d ) = __LC119;
         *(undefined8*)( (long)local_a8 + 0x25 ) = uVar7;
         local_a0 = (string*)local_d0;
         *(string*)( (long)local_a8 + (long)local_d0 ) = (string)0x0;
         if (( LoaderLogger::GetInstance():: ) && ( iVar6 = iVar6 != 0 )) {
            LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
            __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
            __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
         }

         LoaderLogger::LogMessage(0x10ad20, 0x1000, (string*)0x2, (string*)&local_a8, (string*)&local_88, (vector*)&local_68);
         if (local_a8 != local_98) {
            operator_delete(local_a8, ( ulong )(local_98[0] + 1));
         }

         if (local_88 != local_78) {
            operator_delete(local_88, ( ulong )(local_78[0] + 1));
         }

         if (local_68 != local_58) {
            operator_delete(local_68, ( ulong )(local_58[0] + 1));
         }

         uVar7 = local_c8._8_8_;
         for (lVar9 = local_c8._0_8_; uVar7 != lVar9; lVar9 = lVar9 + 0x30) {
            if (*(void**)( lVar9 + 0x10 ) != (void*)( lVar9 + 0x20 )) {
               operator_delete(*(void**)( lVar9 + 0x10 ), *(long*)( lVar9 + 0x20 ) + 1);
            }

         }

      }

      if ((void*)local_c8._0_8_ != (void*)0x0) {
         operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
      }

      uVar7 = 0xffffffff;
      LAB_00108210:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return uVar7;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   void xrGetInstanceProcAddr(XrInstance_T *param_1, char *param_2, _func_void *param_3) {
      LoaderXrGetInstanceProcAddr(param_1, param_2, param_3);
      return;
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* LoaderXrEnumerateInstanceExtensionProperties(char const*, unsigned int, unsigned int*,
   XrExtensionProperties*) */
   int LoaderXrEnumerateInstanceExtensionProperties(char *param_1, uint param_2, uint *param_3, XrExtensionProperties *param_4) {
      undefined8 uVar1;
      undefined8 uVar2;
      long lVar3;
      long lVar4;
      int iVar5;
      uint uVar6;
      undefined8 *puVar7;
      undefined8 *puVar8;
      undefined8 *puVar9;
      undefined8 *puVar10;
      ulong uVar11;
      void *pvVar12;
      long lVar13;
      long in_FS_OFFSET;
      bool bVar14;
      long *local_120;
      int local_104;
      long local_f0;
      undefined1 local_e8[16];
      undefined8 *local_d8;
      undefined1 local_c8[16];
      long local_b8;
      long *local_a8;
      long local_a0;
      long local_98[2];
      long *local_88;
      long local_80;
      long local_78[2];
      long *local_68;
      long local_60;
      long local_58[3];
      long local_40;
      local_e8._8_8_ = local_e8._0_8_;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      local_c8 = (undefined1[16])0x0;
      local_b8 = 0;
      local_e8._0_8_ = 0x1a;
      local_88 = local_78;
      local_88 = (long*)std::__cxx11::string::_M_create((ulong*)&local_88, (ulong)local_e8);
      lVar13 = _UNK_0010b058;
      local_78[0] = local_e8._0_8_;
      *local_88 = __LC60;
      local_88[1] = lVar13;
      uVar1 = _UNK_0010b068;
      *(undefined8*)( (long)local_88 + 10 ) = __LC61;
      *(undefined8*)( (long)local_88 + 0x12 ) = uVar1;
      local_80 = local_e8._0_8_;
      *(undefined1*)( (long)local_88 + local_e8._0_8_ ) = 0;
      local_e8._0_8_ = 0x26;
      local_a8 = local_98;
      local_a8 = (long*)std::__cxx11::string::_M_create((ulong*)&local_a8, (ulong)local_e8);
      lVar13 = _UNK_0010b398;
      local_98[0] = local_e8._0_8_;
      *local_a8 = __LC123;
      local_a8[1] = lVar13;
      lVar13 = _UNK_0010b3a8;
      local_a8[2] = __LC124;
      local_a8[3] = lVar13;
      *(undefined8*)( (long)local_a8 + 0x1e ) = 0x736569747265706f;
      local_a0 = local_e8._0_8_;
      *(undefined1*)( (long)local_a8 + local_e8._0_8_ ) = 0;
      if (( LoaderLogger::GetInstance():: ) && ( iVar5 = iVar5 != 0 )) {
         LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
         __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
      }

      local_68 = local_58;
      std::__cxx11::string::_M_construct<char_const*>((string*)&local_68, "OpenXR-Loader");
      LoaderLogger::LogMessage(0x10ad20, 1, (string*)0x1, (string*)&local_68, (string*)&local_a8, (vector*)&local_88);
      if (local_68 != local_58) {
         operator_delete(local_68, local_58[0] + 1);
      }

      if (local_a8 != local_98) {
         operator_delete(local_a8, local_98[0] + 1);
      }

      if (local_88 != local_78) {
         operator_delete(local_88, local_78[0] + 1);
      }

      uVar1 = local_c8._8_8_;
      pvVar12 = (void*)local_c8._0_8_;
      if (local_c8._8_8_ != local_c8._0_8_) {
         do {
            if (*(void**)( (long)pvVar12 + 0x10 ) != (void*)( (long)pvVar12 + 0x20 )) {
               operator_delete(*(void**)( (long)pvVar12 + 0x10 ), *(long*)( (long)pvVar12 + 0x20 ) + 1);
            }

            pvVar12 = (void*)( (long)pvVar12 + 0x30 );
         }
 while ( (void*)uVar1 != pvVar12 );
      }

      if ((void*)local_c8._0_8_ != (void*)0x0) {
         operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
      }

      if (param_3 == (uint*)0x0) {
         local_104 = -1;
         goto LAB_00109415;
      }

      bVar14 = false;
      if (param_1 != (char*)0x0) {
         bVar14 = *param_1 != '\0';
      }

      local_d8 = (undefined8*)0x0;
      local_e8 = (undefined1[16])0x0;
      iVar5 = pthread_mutex_lock((pthread_mutex_t*)GetGlobalLoaderMutex(), ::loader_mutex);
      if (iVar5 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar5);
      }

      local_c8._0_8_ = 0x26;
      local_68 = local_58;
      local_68 = (long*)std::__cxx11::string::_M_create((ulong*)&local_68, (ulong)local_c8);
      lVar13 = _UNK_0010b398;
      local_58[0] = local_c8._0_8_;
      *local_68 = __LC123;
      local_68[1] = lVar13;
      lVar13 = _UNK_0010b3a8;
      local_68[2] = __LC124;
      local_68[3] = lVar13;
      *(undefined8*)( (long)local_68 + 0x1e ) = 0x736569747265706f;
      local_60 = local_c8._0_8_;
      *(undefined1*)( (long)local_68 + local_c8._0_8_ ) = 0;
      local_104 = ApiLayerInterface::GetInstanceExtensionProperties((string*)&local_68, param_1, (vector*)local_e8);
      if (local_68 != local_58) {
         operator_delete(local_68, local_58[0] + 1);
      }

      if (( local_104 < 0 ) || ( bVar14 )) {
         pthread_mutex_unlock((pthread_mutex_t*)GetGlobalLoaderMutex(), ::loader_mutex);
         if (-1 < local_104) {
            if (!bVar14) goto LAB_00109523;
            LAB_00108ea2:puVar7 = (undefined8*)local_e8._8_8_;
            puVar10 = (undefined8*)local_e8._0_8_;
            goto LAB_00108eac;
         }

         LAB_00109c2b:local_120 = &local_f0;
         local_c8 = (undefined1[16])0x0;
         local_b8 = 0;
         local_f0 = 0x24;
         local_88 = local_78;
         local_88 = (long*)std::__cxx11::string::_M_create((ulong*)&local_88, (ulong)local_120);
         lVar13 = _UNK_0010b3f8;
         local_78[0] = local_f0;
         *local_88 = __LC129;
         local_88[1] = lVar13;
         lVar3 = _UNK_0010b408;
         lVar13 = __LC130;
         *(undefined4*)( local_88 + 4 ) = 0x73656974;
         local_88[2] = lVar13;
         local_88[3] = lVar3;
         local_80 = local_f0;
         *(undefined1*)( (long)local_88 + local_f0 ) = 0;
         local_f0 = 0x26;
         local_a8 = local_98;
         local_a8 = (long*)std::__cxx11::string::_M_create((ulong*)&local_a8, (ulong)local_120);
         lVar13 = _UNK_0010b398;
         local_98[0] = local_f0;
         *local_a8 = __LC123;
         local_a8[1] = lVar13;
         lVar13 = _UNK_0010b3a8;
         local_a8[2] = __LC124;
         local_a8[3] = lVar13;
         *(undefined8*)( (long)local_a8 + 0x1e ) = 0x736569747265706f;
         local_a0 = local_f0;
         *(undefined1*)( (long)local_a8 + local_f0 ) = 0;
         if (( LoaderLogger::GetInstance():: ) && ( iVar5 = iVar5 != 0 )) {
            LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
            __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
            __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
         }

         local_68 = local_58;
         std::__cxx11::string::_M_construct<char_const*>((string*)&local_68, "OpenXR-Loader");
         LoaderLogger::LogMessage(0x10ad20, 0x1000, (string*)0x1, (string*)&local_68, (string*)&local_a8, (vector*)&local_88);
         if (local_68 != local_58) {
            operator_delete(local_68, local_58[0] + 1);
         }

         if (local_a8 != local_98) {
            operator_delete(local_a8, local_98[0] + 1);
         }

         if (local_88 != local_78) {
            operator_delete(local_88, local_78[0] + 1);
         }

         uVar1 = local_c8._8_8_;
         pvVar12 = (void*)local_c8._0_8_;
         if (local_c8._8_8_ != local_c8._0_8_) {
            do {
               if (*(void**)( (long)pvVar12 + 0x10 ) != (void*)( (long)pvVar12 + 0x20 )) {
                  operator_delete(*(void**)( (long)pvVar12 + 0x10 ), *(long*)( (long)pvVar12 + 0x20 ) + 1);
               }

               pvVar12 = (void*)( (long)pvVar12 + 0x30 );
            }
 while ( (void*)uVar1 != pvVar12 );
         }

         if ((void*)local_c8._0_8_ != (void*)0x0) {
            operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
         }

         puVar10 = (undefined8*)local_e8._0_8_;
      }
 else {
         local_c8._0_8_ = 0x26;
         local_68 = local_58;
         local_68 = (long*)std::__cxx11::string::_M_create((ulong*)&local_68, (ulong)local_c8);
         lVar13 = _UNK_0010b398;
         local_58[0] = local_c8._0_8_;
         *local_68 = __LC123;
         local_68[1] = lVar13;
         lVar13 = _UNK_0010b3a8;
         local_68[2] = __LC124;
         local_68[3] = lVar13;
         *(undefined8*)( (long)local_68 + 0x1e ) = 0x736569747265706f;
         local_60 = local_c8._0_8_;
         *(undefined1*)( (long)local_68 + local_c8._0_8_ ) = 0;
         local_104 = RuntimeInterface::LoadRuntime((string*)&local_68);
         if (local_68 != local_58) {
            operator_delete(local_68, local_58[0] + 1);
         }

         if (local_104 < 0) {
            local_b8 = 0;
            local_c8 = (undefined1[16])0x0;
            local_f0 = 0x43;
            local_88 = local_78;
            local_88 = (long*)std::__cxx11::string::_M_create((ulong*)&local_88, ( ulong ) & local_f0);
            lVar13 = _UNK_0010b3b8;
            local_78[0] = local_f0;
            *local_88 = __LC125;
            local_88[1] = lVar13;
            lVar13 = _UNK_0010b3c8;
            local_88[2] = __LC126;
            local_88[3] = lVar13;
            lVar13 = _UNK_0010b3d8;
            local_88[4] = __LC127;
            local_88[5] = lVar13;
            lVar13 = _UNK_0010b3e8;
            local_88[6] = __LC128;
            local_88[7] = lVar13;
            *(undefined4*)( (long)local_88 + 0x3f ) = 0x2928656d;
            local_80 = local_f0;
            *(undefined1*)( (long)local_88 + local_f0 ) = 0;
            local_f0 = 0x26;
            local_a8 = local_98;
            local_a8 = (long*)std::__cxx11::string::_M_create((ulong*)&local_a8, ( ulong ) & local_f0);
            lVar13 = _UNK_0010b398;
            local_98[0] = local_f0;
            *local_a8 = __LC123;
            local_a8[1] = lVar13;
            lVar13 = _UNK_0010b3a8;
            local_a8[2] = __LC124;
            local_a8[3] = lVar13;
            *(undefined8*)( (long)local_a8 + 0x1e ) = 0x736569747265706f;
            local_a0 = local_f0;
            *(undefined1*)( (long)local_a8 + local_f0 ) = 0;
            if (( LoaderLogger::GetInstance():: ) && ( iVar5 = iVar5 != 0 )) {
               LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
               __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
               __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
            }

            local_68 = local_58;
            std::__cxx11::string::_M_construct<char_const*>((string*)&local_68, "OpenXR-Loader");
            LoaderLogger::LogMessage(0x10ad20, 0x1000, (string*)0x1, (string*)&local_68, (string*)&local_a8, (vector*)&local_88);
            if (local_68 != local_58) {
               operator_delete(local_68, local_58[0] + 1);
            }

            if (local_a8 != local_98) {
               operator_delete(local_a8, local_98[0] + 1);
            }

            if (local_88 != local_78) {
               operator_delete(local_88, local_78[0] + 1);
            }

            uVar1 = local_c8._8_8_;
            pvVar12 = (void*)local_c8._0_8_;
            if (local_c8._8_8_ != local_c8._0_8_) {
               do {
                  if (*(void**)( (long)pvVar12 + 0x10 ) != (void*)( (long)pvVar12 + 0x20 )) {
                     operator_delete(*(void**)( (long)pvVar12 + 0x10 ), *(long*)( (long)pvVar12 + 0x20 ) + 1);
                  }

                  pvVar12 = (void*)( (long)pvVar12 + 0x30 );
               }
 while ( (void*)uVar1 != pvVar12 );
            }

            if ((void*)local_c8._0_8_ != (void*)0x0) {
               operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
            }

            pthread_mutex_unlock((pthread_mutex_t*)GetGlobalLoaderMutex(), ::loader_mutex);
            goto LAB_00109c2b;
         }

         if (( RuntimeInterface::GetInstance():: ) && ( iVar5 = __cxa_guard_acquire(&RuntimeInterface::GetInstance(), ::instance) ),iVar5 != 0) {
            __cxa_atexit(std::unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>>::~unique_ptr, &RuntimeInterface::GetInstance(), ::instance, &__dso_handle);
            __cxa_guard_release(&RuntimeInterface::GetInstance(), ::instance);
         }

         RuntimeInterface::GetInstanceExtensionProperties (RuntimeInterface::GetInstance()::instance);
         pthread_mutex_unlock((pthread_mutex_t*)GetGlobalLoaderMutex(), ::loader_mutex);
         LAB_00109523:puVar8 = (undefined8*)LoaderInstance::LoaderSpecificExtensions();
         puVar10 = (undefined8*)local_e8._0_8_;
         uVar1 = local_e8._8_8_;
         for (puVar9 = (undefined8*)local_e8._0_8_; (undefined8*)uVar1 != puVar9; puVar9 = puVar9 + 0x13) {
            iVar5 = strcmp((char*)( puVar9 + 2 ), (char*)( puVar8 + 2 ));
            if (iVar5 == 0) {
               puVar7 = (undefined8*)uVar1;
               if (*(uint*)( puVar9 + 0x12 ) < *(uint*)( puVar8 + 0x12 )) {
                  *(uint*)( puVar9 + 0x12 ) = *(uint*)( puVar8 + 0x12 );
               }

               goto LAB_00108eac;
            }

         }

         if (local_d8 == (undefined8*)uVar1) {
            std::vector<XrExtensionProperties,std::allocator<XrExtensionProperties>>::_M_realloc_insert<XrExtensionProperties_const&>((vector<XrExtensionProperties,std::allocator<XrExtensionProperties>>*)local_e8, uVar1, puVar8);
            goto LAB_00108ea2;
         }

         uVar2 = puVar8[1];
         puVar7 = (undefined8*)( uVar1 + 0x98 );
         *(undefined8*)uVar1 = *puVar8;
         *(undefined8*)( uVar1 + 8 ) = uVar2;
         for (int i = 0; i < 8; i++) {
            uVar2 = puVar8[( 2*i + 3 )];
            *(undefined8*)( uVar1 + ( 16*i + 16 ) ) = puVar8[( 2*i + 2 )];
            *(undefined8*)( uVar1 + ( 16*i + 24 ) ) = uVar2;
         }

         *(undefined8*)( uVar1 + 0x90 ) = puVar8[0x12];
         local_e8._8_8_ = puVar7;
         LAB_00108eac:uVar6 = (int)( (long)puVar7 - (long)puVar10 >> 3 ) * 0x286bca1b;
         if (param_2 == 0) {
            LAB_001091da:local_120 = &local_f0;
            local_c8 = (undefined1[16])0x0;
            *param_3 = uVar6;
            local_b8 = 0;
            local_f0 = 0x1b;
            local_88 = local_78;
            local_88 = (long*)std::__cxx11::string::_M_create((ulong*)&local_88, (ulong)local_120);
            lVar13 = _UNK_0010b168;
            local_78[0] = local_f0;
            *local_88 = __LC77;
            local_88[1] = lVar13;
            uVar1 = _UNK_0010b068;
            *(undefined8*)( (long)local_88 + 0xb ) = __LC61;
            *(undefined8*)( (long)local_88 + 0x13 ) = uVar1;
            local_80 = local_f0;
            *(undefined1*)( (long)local_88 + local_f0 ) = 0;
            local_f0 = 0x26;
            local_a8 = local_98;
            local_a8 = (long*)std::__cxx11::string::_M_create((ulong*)&local_a8, (ulong)local_120);
            lVar13 = _UNK_0010b398;
            local_98[0] = local_f0;
            *local_a8 = __LC123;
            local_a8[1] = lVar13;
            lVar13 = _UNK_0010b3a8;
            local_a8[2] = __LC124;
            local_a8[3] = lVar13;
            *(undefined8*)( (long)local_a8 + 0x1e ) = 0x736569747265706f;
            local_a0 = local_f0;
            *(undefined1*)( (long)local_a8 + local_f0 ) = 0;
            if (( LoaderLogger::GetInstance():: ) && ( iVar5 = iVar5 != 0 )) {
               LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
               __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
               __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
            }

            local_68 = local_58;
            std::__cxx11::string::_M_construct<char_const*>((string*)&local_68, "OpenXR-Loader");
            LoaderLogger::LogMessage(0x10ad20, 1, (string*)0x1, (string*)&local_68, (string*)&local_a8, (vector*)&local_88);
            if (local_68 != local_58) {
               operator_delete(local_68, local_58[0] + 1);
            }

            if (local_a8 != local_98) {
               operator_delete(local_a8, local_98[0] + 1);
            }

            if (local_88 != local_78) {
               operator_delete(local_88, local_78[0] + 1);
            }

            uVar1 = local_c8._8_8_;
            pvVar12 = (void*)local_c8._0_8_;
            if (local_c8._8_8_ != local_c8._0_8_) {
               do {
                  if (*(void**)( (long)pvVar12 + 0x10 ) != (void*)( (long)pvVar12 + 0x20 )) {
                     operator_delete(*(void**)( (long)pvVar12 + 0x10 ), *(long*)( (long)pvVar12 + 0x20 ) + 1);
                  }

                  pvVar12 = (void*)( (long)pvVar12 + 0x30 );
               }
 while ( (void*)uVar1 != pvVar12 );
            }

            if ((void*)local_c8._0_8_ != (void*)0x0) {
               operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
            }

            local_104 = 0;
            puVar10 = (undefined8*)local_e8._0_8_;
         }
 else if (param_4 == (XrExtensionProperties*)0x0) {
            local_104 = -1;
         }
 else if (param_2 < uVar6) {
            local_c8 = (undefined1[16])0x0;
            *param_3 = uVar6;
            local_b8 = 0;
            local_f0 = 0x1b;
            local_68 = local_58;
            local_68 = (long*)std::__cxx11::string::_M_create((ulong*)&local_68, ( ulong ) & local_f0);
            lVar13 = _UNK_0010b418;
            local_58[0] = local_f0;
            *local_68 = __LC131;
            local_68[1] = lVar13;
            uVar1 = _UNK_0010b428;
            *(undefined8*)( (long)local_68 + 0xb ) = __LC132;
            *(undefined8*)( (long)local_68 + 0x13 ) = uVar1;
            local_60 = local_f0;
            *(undefined1*)( (long)local_68 + local_f0 ) = 0;
            local_f0 = 0x26;
            local_88 = local_78;
            local_88 = (long*)std::__cxx11::string::_M_create((ulong*)&local_88, ( ulong ) & local_f0);
            lVar13 = _UNK_0010b398;
            local_78[0] = local_f0;
            *local_88 = __LC123;
            local_88[1] = lVar13;
            lVar13 = _UNK_0010b3a8;
            local_88[2] = __LC124;
            local_88[3] = lVar13;
            *(undefined8*)( (long)local_88 + 0x1e ) = 0x736569747265706f;
            local_80 = local_f0;
            *(undefined1*)( (long)local_88 + local_f0 ) = 0;
            local_f0 = 0x49;
            local_a8 = local_98;
            local_a8 = (long*)std::__cxx11::string::_M_create((ulong*)&local_a8, ( ulong ) & local_f0);
            lVar13 = _UNK_0010b438;
            local_98[0] = local_f0;
            *local_a8 = __LC133;
            local_a8[1] = lVar13;
            lVar13 = _UNK_0010b448;
            local_a8[2] = __LC134;
            local_a8[3] = lVar13;
            lVar13 = _UNK_0010b458;
            local_a8[4] = __LC135;
            local_a8[5] = lVar13;
            lVar13 = _UNK_0010b468;
            local_a8[6] = __LC136;
            local_a8[7] = lVar13;
            uVar1 = _UNK_0010b478;
            *(undefined8*)( (long)local_a8 + 0x39 ) = __LC137;
            *(undefined8*)( (long)local_a8 + 0x41 ) = uVar1;
            local_a0 = local_f0;
            *(undefined1*)( (long)local_a8 + local_f0 ) = 0;
            if (( LoaderLogger::GetInstance():: ) && ( iVar5 = iVar5 != 0 )) {
               LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
               __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
               __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
            }

            LoaderLogger::LogMessage(0x10ad20, 0x1000, (string*)0x2, (string*)&local_a8, (string*)&local_88, (vector*)&local_68);
            if (local_a8 != local_98) {
               operator_delete(local_a8, local_98[0] + 1);
            }

            if (local_88 != local_78) {
               operator_delete(local_88, local_78[0] + 1);
            }

            if (local_68 != local_58) {
               operator_delete(local_68, local_58[0] + 1);
            }

            uVar1 = local_c8._8_8_;
            pvVar12 = (void*)local_c8._0_8_;
            if (local_c8._8_8_ != local_c8._0_8_) {
               do {
                  if (*(void**)( (long)pvVar12 + 0x10 ) != (void*)( (long)pvVar12 + 0x20 )) {
                     operator_delete(*(void**)( (long)pvVar12 + 0x10 ), *(long*)( (long)pvVar12 + 0x20 ) + 1);
                  }

                  pvVar12 = (void*)( (long)pvVar12 + 0x30 );
               }
 while ( (void*)uVar1 != pvVar12 );
            }

            if ((void*)local_c8._0_8_ != (void*)0x0) {
               operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
            }

            local_104 = -0xb;
            puVar10 = (undefined8*)local_e8._0_8_;
         }
 else {
            lVar13 = 0;
            uVar11 = 0;
            bVar14 = true;
            while (uVar11 < ( ulong )(( (long)puVar7 - (long)puVar10 >> 3 ) * -0x79435e50d79435e5)) {
               if (*(int*)( param_4 + lVar13 ) == 2) {
                  if (!bVar14) goto LAB_001091a3;
                  uVar1 = ( (undefined8*)( (long)puVar10 + lVar13 ) )[1];
                  *(undefined8*)( param_4 + lVar13 ) = *(undefined8*)( (long)puVar10 + lVar13 );
                  *(undefined8*)( param_4 + lVar13 + 8 ) = uVar1;
                  for (int i = 0; i < 8; i++) {
                     puVar9 = (undefined8*)( (long)puVar10 + lVar13 + ( 16*i + 16 ) );
                     uVar1 = puVar9[1];
                     *(undefined8*)( param_4 + lVar13 + ( 16*i + 16 ) ) = *puVar9;
                     *(undefined8*)( param_4 + lVar13 + ( 16*i + 16 ) + 8 ) = uVar1;
                  }

                  *(undefined8*)( param_4 + lVar13 + 0x90 ) = *(undefined8*)( (long)puVar10 + lVar13 + 0x90 );
               }
 else {
                  local_c8 = (undefined1[16])0x0;
                  local_b8 = 0;
                  local_f0 = 0x1a;
                  local_68 = local_58;
                  local_68 = (long*)std::__cxx11::string::_M_create((ulong*)&local_68, ( ulong ) & local_f0);
                  lVar3 = _UNK_0010b488;
                  local_58[0] = local_f0;
                  *local_68 = __LC138;
                  local_68[1] = lVar3;
                  uVar1 = _UNK_0010b498;
                  *(undefined8*)( (long)local_68 + 10 ) = __LC139;
                  *(undefined8*)( (long)local_68 + 0x12 ) = uVar1;
                  local_60 = local_f0;
                  *(undefined1*)( (long)local_68 + local_f0 ) = 0;
                  local_f0 = 0x26;
                  local_88 = local_78;
                  local_88 = (long*)std::__cxx11::string::_M_create((ulong*)&local_88, ( ulong ) & local_f0);
                  lVar3 = _UNK_0010b398;
                  local_78[0] = local_f0;
                  *local_88 = __LC123;
                  local_88[1] = lVar3;
                  lVar3 = _UNK_0010b3a8;
                  local_88[2] = __LC124;
                  local_88[3] = lVar3;
                  *(undefined8*)( (long)local_88 + 0x1e ) = 0x736569747265706f;
                  local_80 = local_f0;
                  *(undefined1*)( (long)local_88 + local_f0 ) = 0;
                  local_f0 = 0x24;
                  local_a8 = local_98;
                  local_a8 = (long*)std::__cxx11::string::_M_create((ulong*)&local_a8, ( ulong ) & local_f0);
                  lVar3 = _UNK_0010b4a8;
                  local_98[0] = local_f0;
                  *local_a8 = __LC140;
                  local_a8[1] = lVar3;
                  lVar4 = _UNK_0010b4b8;
                  lVar3 = __LC141;
                  *(undefined4*)( local_a8 + 4 ) = 0x65707974;
                  local_a8[2] = lVar3;
                  local_a8[3] = lVar4;
                  local_a0 = local_f0;
                  *(undefined1*)( (long)local_a8 + local_f0 ) = 0;
                  if (( LoaderLogger::GetInstance():: ) && ( iVar5 = iVar5 != 0 )) {
                     LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
                     __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
                     __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
                  }

                  LoaderLogger::LogMessage(0x10ad20, 0x1000, (string*)0x2, (string*)&local_a8, (string*)&local_88, (vector*)&local_68);
                  if (local_a8 != local_98) {
                     operator_delete(local_a8, local_98[0] + 1);
                  }

                  if (local_88 != local_78) {
                     operator_delete(local_88, local_78[0] + 1);
                  }

                  if (local_68 != local_58) {
                     operator_delete(local_68, local_58[0] + 1);
                  }

                  uVar1 = local_c8._8_8_;
                  pvVar12 = (void*)local_c8._0_8_;
                  if (local_c8._8_8_ != local_c8._0_8_) {
                     do {
                        if (*(void**)( (long)pvVar12 + 0x10 ) != (void*)( (long)pvVar12 + 0x20 )) {
                           operator_delete(*(void**)( (long)pvVar12 + 0x10 ), *(long*)( (long)pvVar12 + 0x20 ) + 1);
                        }

                        pvVar12 = (void*)( (long)pvVar12 + 0x30 );
                     }
 while ( (void*)uVar1 != pvVar12 );
                  }

                  if ((void*)local_c8._0_8_ != (void*)0x0) {
                     operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
                  }

                  LAB_001091a3:bVar14 = false;
               }

               uVar11 = uVar11 + 1;
               lVar13 = lVar13 + 0x98;
               if (param_2 == uVar11) break;
               puVar7 = (undefined8*)local_e8._8_8_;
               puVar10 = (undefined8*)local_e8._0_8_;
            }
;
            if (bVar14) goto LAB_001091da;
            local_c8 = (undefined1[16])0x0;
            local_b8 = 0;
            local_f0 = 0x12;
            local_68 = local_58;
            local_68 = (long*)std::__cxx11::string::_M_create((ulong*)&local_68, ( ulong ) & local_f0);
            lVar3 = _UNK_0010b4c8;
            lVar13 = __LC142;
            local_58[0] = local_f0;
            *(undefined2*)( local_68 + 2 ) = 0x7365;
            *local_68 = lVar13;
            local_68[1] = lVar3;
            local_60 = local_f0;
            *(undefined1*)( (long)local_68 + local_f0 ) = 0;
            local_f0 = 0x26;
            local_88 = local_78;
            local_88 = (long*)std::__cxx11::string::_M_create((ulong*)&local_88, ( ulong ) & local_f0);
            lVar13 = _UNK_0010b398;
            local_78[0] = local_f0;
            *local_88 = __LC123;
            local_88[1] = lVar13;
            lVar13 = _UNK_0010b3a8;
            local_88[2] = __LC124;
            local_88[3] = lVar13;
            *(undefined8*)( (long)local_88 + 0x1e ) = 0x736569747265706f;
            local_80 = local_f0;
            *(undefined1*)( (long)local_88 + local_f0 ) = 0;
            local_f0 = 0x40;
            local_a8 = local_98;
            local_a8 = (long*)std::__cxx11::string::_M_create((ulong*)&local_a8, ( ulong ) & local_f0);
            lVar13 = _UNK_0010b438;
            local_98[0] = local_f0;
            *local_a8 = __LC133;
            local_a8[1] = lVar13;
            lVar13 = _UNK_0010b448;
            local_a8[2] = __LC134;
            local_a8[3] = lVar13;
            lVar13 = _UNK_0010b458;
            local_a8[4] = __LC135;
            local_a8[5] = lVar13;
            lVar13 = _UNK_0010b4d8;
            local_a8[6] = __LC143;
            local_a8[7] = lVar13;
            local_a0 = local_f0;
            *(undefined1*)( (long)local_a8 + local_f0 ) = 0;
            if (( LoaderLogger::GetInstance():: ) && ( iVar5 = iVar5 != 0 )) {
               LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
               __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
               __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
            }

            LoaderLogger::LogMessage(0x10ad20, 0x1000, (string*)0x2, (string*)&local_a8, (string*)&local_88, (vector*)&local_68);
            if (local_a8 != local_98) {
               operator_delete(local_a8, local_98[0] + 1);
            }

            if (local_88 != local_78) {
               operator_delete(local_88, local_78[0] + 1);
            }

            if (local_68 != local_58) {
               operator_delete(local_68, local_58[0] + 1);
            }

            uVar1 = local_c8._8_8_;
            pvVar12 = (void*)local_c8._0_8_;
            if (local_c8._8_8_ != local_c8._0_8_) {
               do {
                  if (*(void**)( (long)pvVar12 + 0x10 ) != (void*)( (long)pvVar12 + 0x20 )) {
                     operator_delete(*(void**)( (long)pvVar12 + 0x10 ), *(long*)( (long)pvVar12 + 0x20 ) + 1);
                  }

                  pvVar12 = (void*)( (long)pvVar12 + 0x30 );
               }
 while ( (void*)uVar1 != pvVar12 );
            }

            if ((void*)local_c8._0_8_ != (void*)0x0) {
               operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
            }

            local_104 = -1;
            puVar10 = (undefined8*)local_e8._0_8_;
         }

      }

      if (puVar10 != (undefined8*)0x0) {
         operator_delete(puVar10, (long)local_d8 - (long)puVar10);
      }

      LAB_00109415:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return local_104;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   void xrEnumerateInstanceExtensionProperties(char *param_1, uint param_2, uint *param_3, XrExtensionProperties *param_4) {
      LoaderXrEnumerateInstanceExtensionProperties(param_1, param_2, param_3, param_4);
      return;
   }

   /* std::unique_ptr<RuntimeInterface, std::default_delete<RuntimeInterface> >::~unique_ptr() */
   void std::unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>>::~unique_ptr(unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>> *this) {
      if (*(long**)this != (long*)0x0) {
         /* WARNING: Could not recover jumptable at 0x0010a39f. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( **(code**)( **(long**)this + 8 ) )();
         return;
      }

      return;
   }

   /* std::vector<XrSdkLogObjectInfo, std::allocator<XrSdkLogObjectInfo> >::~vector() */
   void std::vector<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>>::~vector(vector<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>> *this) {
      void *pvVar1;
      void *pvVar2;
      pvVar1 = *(void**)( this + 8 );
      pvVar2 = *(void**)this;
      if (pvVar1 != pvVar2) {
         do {
            if (*(void**)( (long)pvVar2 + 0x10 ) != (void*)( (long)pvVar2 + 0x20 )) {
               operator_delete(*(void**)( (long)pvVar2 + 0x10 ), *(long*)( (long)pvVar2 + 0x20 ) + 1);
            }

            pvVar2 = (void*)( (long)pvVar2 + 0x30 );
         }
 while ( pvVar1 != pvVar2 );
         pvVar2 = *(void**)this;
      }

      if (pvVar2 == (void*)0x0) {
         return;
      }

      operator_delete(pvVar2, *(long*)( this + 0x10 ) - (long)pvVar2);
      return;
   }

   /* std::_Hashtable<XrSession_T*, std::pair<XrSession_T* const,
   std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> >, std::allocator<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> > > >,
   std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> >, std::allocator<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> > > > > > >, std::allocator<std::pair<XrSession_T* const,
   std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> >, std::allocator<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> > > >,
   std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> >, std::allocator<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> > > > > > > >, std::__detail::_Select1st,
   std::equal_to<XrSession_T*>, std::hash<XrSession_T*>, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, false, true> >::clear() */
   void std::_Hashtable<XrSession_T*,std::pair<XrSession_T*const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>>,std::allocator<std::pair<XrSession_T*const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>>>,std::__detail::_Select1st,std::equal_to<XrSession_T*>,std::hash<XrSession_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::clear(_Hashtable<XrSession_T*,std::pair<XrSession_T*const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>>,std::allocator<std::pair<XrSession_T * const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete < XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>>>, std::__detail::_Select1st, std::equal_to<XrSession_T*>, std::hash<XrSession_T*>, std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false,false,true> > *this) {
      undefined8 *puVar1;
      long *plVar2;
      undefined8 *puVar3;
      undefined8 *puVar4;
      undefined8 *puVar5;
      undefined8 *puVar6;
      puVar5 = *(undefined8**)( this + 0x10 );
      while (puVar5 != (undefined8*)0x0) {
         puVar1 = (undefined8*)*puVar5;
         plVar2 = (long*)puVar5[2];
         if (plVar2 != (long*)0x0) {
            puVar3 = (undefined8*)plVar2[1];
            puVar6 = (undefined8*)*plVar2;
            if (puVar3 != puVar6) {
               do {
                  puVar4 = (undefined8*)*puVar6;
                  if (puVar4 != (undefined8*)0x0) {
                     if ((undefined8*)*puVar4 != puVar4 + 2) {
                        operator_delete((undefined8*)*puVar4, puVar4[2] + 1);
                     }

                     operator_delete(puVar4, 0x40);
                  }

                  puVar6 = puVar6 + 1;
               }
 while ( puVar3 != puVar6 );
               puVar6 = (undefined8*)*plVar2;
            }

            if (puVar6 != (undefined8*)0x0) {
               operator_delete(puVar6, plVar2[2] - (long)puVar6);
            }

            operator_delete(plVar2, 0x18);
         }

         operator_delete(puVar5, 0x18);
         puVar5 = puVar1;
      }
;
      memset(*(void**)this, 0, *(long*)( this + 8 ) * 8);
      *(undefined8*)( this + 0x18 ) = 0;
      *(undefined8*)( this + 0x10 ) = 0;
      return;
   }

   /* LoaderLogger::~LoaderLogger() */
   void LoaderLogger::~LoaderLogger(LoaderLogger *this) {
      void *pvVar1;
      undefined8 *puVar2;
      undefined8 *puVar3;
      long *plVar4;
      undefined8 *puVar5;
      undefined8 *puVar6;
      void *pvVar7;
      long *plVar8;
      pvVar1 = *(void**)( this + 200 );
      pvVar7 = *(void**)( this + 0xc0 );
      if (pvVar1 != pvVar7) {
         do {
            if (*(void**)( (long)pvVar7 + 0x10 ) != (void*)( (long)pvVar7 + 0x20 )) {
               operator_delete(*(void**)( (long)pvVar7 + 0x10 ), *(long*)( (long)pvVar7 + 0x20 ) + 1);
            }

            pvVar7 = (void*)( (long)pvVar7 + 0x30 );
         }
 while ( pvVar1 != pvVar7 );
         pvVar7 = *(void**)( this + 0xc0 );
      }

      if (pvVar7 != (void*)0x0) {
         operator_delete(pvVar7, *(long*)( this + 0xd0 ) - (long)pvVar7);
      }

      std::_Hashtable<XrSession_T*,std::pair<XrSession_T * const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr < XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>>,std::allocator<std::pair<XrSession_T * const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete < XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>> > std::__detail::_Select1st,std::equal_to<XrSession_T*>,std::hash<XrSession_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> > ::clear(( _Hashtable<XrSession_T*,std::pair<XrSession_T*const,std::unique_ptr < std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete < XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete < XrSdkSessionLabel>>>>> >> std::allocator<std::pair<XrSession_T * const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete < XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete < XrSdkSessionLabel>>>>>> >> std::__detail::_Select1st,std::equal_to<XrSession_T*>,std::hash<XrSession_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> > * )(this + 0x88));
      if (*(LoaderLogger**)( this + 0x88 ) != this + 0xb8) {
         operator_delete(*(LoaderLogger**)( this + 0x88 ), *(long*)( this + 0x90 ) * 8);
      }

      puVar5 = *(undefined8**)( this + 0x60 );
      while (puVar5 != (undefined8*)0x0) {
         puVar2 = (undefined8*)*puVar5;
         puVar6 = (undefined8*)puVar5[4];
         while (puVar6 != (undefined8*)0x0) {
            puVar3 = (undefined8*)*puVar6;
            operator_delete(puVar6, 0x10);
            puVar6 = puVar3;
         }
;
         memset((void*)puVar5[2], 0, puVar5[3] * 8);
         puVar5[5] = 0;
         puVar5[4] = 0;
         if ((undefined8*)puVar5[2] != puVar5 + 8) {
            operator_delete((undefined8*)puVar5[2], puVar5[3] << 3);
         }

         operator_delete(puVar5, 0x48);
         puVar5 = puVar2;
      }
;
      memset(*(void**)( this + 0x50 ), 0, *(long*)( this + 0x58 ) * 8);
      *(undefined8*)( this + 0x68 ) = 0;
      *(undefined8*)( this + 0x60 ) = 0;
      if (*(LoaderLogger**)( this + 0x50 ) != this + 0x80) {
         operator_delete(*(LoaderLogger**)( this + 0x50 ), *(long*)( this + 0x58 ) * 8);
      }

      plVar4 = *(long**)( this + 0x40 );
      plVar8 = *(long**)( this + 0x38 );
      if (plVar4 != plVar8) {
         do {
            if ((long*)*plVar8 != (long*)0x0) {
               ( **(code**)( *(long*)*plVar8 + 8 ) )();
            }

            plVar8 = plVar8 + 1;
         }
 while ( plVar4 != plVar8 );
         plVar8 = *(long**)( this + 0x38 );
      }

      if (plVar8 != (long*)0x0) {
         operator_delete(plVar8, *(long*)( this + 0x48 ) - (long)plVar8);
         return;
      }

      return;
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* void std::vector<XrExtensionProperties, std::allocator<XrExtensionProperties>
   >::_M_realloc_insert<XrExtensionProperties
   const&>(__gnu_cxx::__normal_iterator<XrExtensionProperties*, std::vector<XrExtensionProperties,
   std::allocator<XrExtensionProperties> > >, XrExtensionProperties const&) */
   void std::vector<XrExtensionProperties,std::allocator<XrExtensionProperties>>::_M_realloc_insert<XrExtensionProperties_const&>(vector<XrExtensionProperties,std::allocator<XrExtensionProperties>> *this, void *param_2, undefined8 *param_3) {
      undefined8 *puVar1;
      void *__dest;
      void *pvVar2;
      void *__src;
      undefined8 uVar3;
      undefined8 uVar4;
      undefined8 uVar5;
      undefined8 uVar6;
      undefined8 uVar7;
      undefined8 uVar8;
      undefined8 uVar9;
      undefined8 uVar10;
      undefined8 uVar11;
      undefined8 uVar12;
      undefined8 uVar13;
      undefined8 uVar14;
      undefined8 uVar15;
      undefined8 uVar16;
      undefined8 uVar17;
      long lVar18;
      ulong uVar19;
      void *__dest_00;
      size_t __n;
      ulong uVar20;
      size_t __n_00;
      pvVar2 = *(void**)( this + 8 );
      __src = *(void**)this;
      lVar18 = (long)pvVar2 - (long)__src >> 3;
      uVar19 = lVar18 * -0x79435e50d79435e5;
      if (uVar19 == 0xd79435e50d7943) {
         std::__throw_length_error("vector::_M_realloc_insert");
         /* WARNING: Bad instruction - Truncating control flow here */
         halt_baddata();
      }

      __n = (long)param_2 - (long)__src;
      if (__src == pvVar2) {
         uVar20 = uVar19 + 1;
         if (0xfffffffffffffffe < uVar19) goto LAB_0010ac10;
         if (0xd79435e50d7943 < uVar20) {
            uVar20 = 0xd79435e50d7943;
         }

         uVar20 = uVar20 * 0x98;
         LAB_0010ac1a:__dest_00 = operator_new(uVar20);
         lVar18 = uVar20 + (long)__dest_00;
      }
 else {
         uVar20 = lVar18 * 0xd79435e50d79436;
         if (uVar20 < uVar19) {
            LAB_0010ac10:uVar20 = 0x7fffffffffffffc8;
            goto LAB_0010ac1a;
         }

         if (uVar20 != 0) {
            if (0xd79435e50d7943 < uVar20) {
               uVar20 = 0xd79435e50d7943;
            }

            uVar20 = uVar20 * 0x98;
            goto LAB_0010ac1a;
         }

         lVar18 = 0;
         __dest_00 = (void*)0x0;
      }

      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      __dest = (void*)( (long)__dest_00 + __n + 0x98 );
      __n_00 = (long)pvVar2 - (long)param_2;
      uVar6 = param_3[4];
      uVar7 = param_3[5];
      uVar8 = param_3[6];
      uVar9 = param_3[7];
      uVar10 = param_3[8];
      uVar11 = param_3[9];
      uVar12 = param_3[10];
      uVar13 = param_3[0xb];
      *(undefined8*)( (long)__dest_00 + __n ) = *param_3;
      ( (undefined8*)( (long)__dest_00 + __n ) )[1] = uVar3;
      uVar14 = param_3[0xc];
      uVar15 = param_3[0xd];
      puVar1 = (undefined8*)( (long)__dest_00 + __n + 0x10 );
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      uVar4 = param_3[0xe];
      uVar5 = param_3[0xf];
      uVar16 = param_3[0x10];
      uVar17 = param_3[0x11];
      uVar3 = param_3[0x12];
      puVar1 = (undefined8*)( (long)__dest_00 + __n + 0x20 );
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1 = (undefined8*)( (long)__dest_00 + __n + 0x30 );
      *puVar1 = uVar8;
      puVar1[1] = uVar9;
      *(undefined8*)( (long)__dest_00 + __n + 0x90 ) = uVar3;
      puVar1 = (undefined8*)( (long)__dest_00 + __n + 0x40 );
      *puVar1 = uVar10;
      puVar1[1] = uVar11;
      puVar1 = (undefined8*)( (long)__dest_00 + __n + 0x50 );
      *puVar1 = uVar12;
      puVar1[1] = uVar13;
      puVar1 = (undefined8*)( (long)__dest_00 + __n + 0x60 );
      *puVar1 = uVar14;
      puVar1[1] = uVar15;
      puVar1 = (undefined8*)( (long)__dest_00 + __n + 0x70 );
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      puVar1 = (undefined8*)( (long)__dest_00 + __n + 0x80 );
      *puVar1 = uVar16;
      puVar1[1] = uVar17;
      if ((long)__n < 1) {
         if (0 < (long)__n_00) {
            memcpy(__dest, param_2, __n_00);
         }

         if (__src == (void*)0x0) goto LAB_0010abf3;
      }
 else {
         memmove(__dest_00, __src, __n);
         if (0 < (long)__n_00) {
            memcpy(__dest, param_2, __n_00);
            operator_delete(__src, *(long*)( this + 0x10 ) - (long)__src);
            goto LAB_0010abf3;
         }

      }

      operator_delete(__src, *(long*)( this + 0x10 ) - (long)__src);
      LAB_0010abf3:*(void**)this = __dest_00;
      *(size_t*)( this + 8 ) = (long)__dest + __n_00;
      *(long*)( this + 0x10 ) = lVar18;
      return;
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* LoaderLogger::~LoaderLogger() */
   void LoaderLogger::~LoaderLogger(LoaderLogger *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* std::vector<XrSdkLogObjectInfo, std::allocator<XrSdkLogObjectInfo> >::~vector() */
   void std::vector<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>>::~vector(vector<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* std::unique_ptr<RuntimeInterface, std::default_delete<RuntimeInterface> >::~unique_ptr() */
   void std::unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>>::~unique_ptr(unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

}

