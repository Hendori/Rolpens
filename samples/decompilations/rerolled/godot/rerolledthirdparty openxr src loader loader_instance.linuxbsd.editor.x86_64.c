/* (anonymous namespace)::GetSetCurrentLoaderInstance() */undefined8 * (anonymous_namespace)::GetSetCurrentLoaderInstance(void){int iVar1;
  
  if (GetSetCurrentLoaderInstance()::current_loader_instance == '\0') {
    iVar1 = __cxa_guard_acquire(&GetSetCurrentLoaderInstance()::current_loader_instance);
    if (iVar1 != 0){__cxa_atexit(std::unique_ptr<LoaderInstance,std::default_delete<LoaderInstance>>::~unique_ptr, &GetSetCurrentLoaderInstance(), ::current_loader_instance, &__dso_handle) & GetSetCurrentLoaderInstance() & GetSetCurrentLoaderInstance()::current_loader_instance;}} & undefined1 * __dest - (long)param_2 * (long*)( in_FS_OFFSET + 0x28 )(__n < 0x10) = (undefined1*)*param_1(__n == 1) * __dest = *param_2(undefined1 *)*param_1;
      goto LAB_001000b4;
    }
    if (__n == 0) goto LAB_001000b4;
  }
  else {
    __dest = (undefined1 *)std::__cxx11::string::_M_create(param_1,(ulong)&local_28);
    *param_1 = (ulong)__dest;
    param_1[2] = local_28;
  }
  memcpy(__dest,param_2,__n);
  __dest = (undefined1 *)*param_1;
LAB_001000b4:
  param_1[1] = local_28;
  __dest[local_28] = 0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}, /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */, /* LoaderInstance::~LoaderInstance() */, void __thiscall LoaderInstance::~LoaderInstance(LoaderInstance *this), {
         byte bVar1;
         long *plVar2;
         undefined8 *puVar3;
         pointer_____offset_0x10___ puVar4;
         undefined8 uVar5;
         int iVar6;
         undefined1 *puVar7;
         byte *pbVar8;
         void *pvVar9;
         long *plVar10;
         undefined8 *puVar11;
         streambuf *psVar12;
         long in_FS_OFFSET;
         undefined1 local_238[16];
         long local_228;
         long *local_218[2];
         long local_208[2];
         undefined1 *local_1f8;
         undefined8 local_1f0;
         undefined1 local_1e8;
         undefined7 uStack_1e7;
         long *local_1d8;
         long local_1d0;
         long local_1c8[2];
         code *local_1b8[2];
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
         local_238._8_8_ = local_238._0_8_;
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         *(undefined***)this = &PTR__LoaderInstance_001038f8;
         puVar4 = PTR_vtable_00103ac0;
         std::ios_base::ios_base((ios_base*)local_148);
         local_68 = 0;
         local_60 = (undefined1[16])0x0;
         local_50 = (undefined1[16])0x0;
         local_1b8[0] = _init;
         psVar12 = (streambuf*)( (ostream*)local_1b8 + *(long*)( _init + -0x18 ) );
         local_148[0] = (code*)&std::__cxx11::ostringstream::vtable;
         local_70 = 0;
         *(undefined8*)psVar12 = _locale;
         std::ios::init(psVar12);
         local_148[0] = std::__cxx11::string::_M_replace;
         local_1b8[0] = std::ios::init;
         local_1b8[1] = (code*)puVar4;
         local_1a8 = (undefined1[16])0x0;
         local_198 = (undefined1[16])0x0;
         local_188 = (undefined1[16])0x0;
         std::locale::locale(local_178);
         local_1b8[1] = std::ios_base::ios_base;
         local_170 = 0x10;
         local_160 = 0;
         local_158 = 0;
         local_168 = &local_158;
         std::ios::init((streambuf*)local_148);
         std::__ostream_insert<char,std::char_traits<char>>((ostream*)local_1b8, "Destroying LoaderInstance = ", 0x1c);
         local_238._0_8_ = this;
         local_1d8 = local_1c8;
         std::__cxx11::string::_M_construct(( ulong ) & local_1d8, '\x12');
         *(undefined1*)local_1d8 = 0x30;
         *(undefined1*)( (long)local_1d8 + 1 ) = 0x78;
         pbVar8 = local_238;
         puVar7 = (undefined1*)( (long)local_1d8 + local_1d0 + -2 );
         do {
            bVar1 = *pbVar8;
            pbVar8 = pbVar8 + 1;
            puVar7[1] = to_hex[abi:cxx11](unsigned_char_const * unsigned_long)::hex[bVar1 & 0xf];
            *puVar7 = to_hex[abi:cxx11](unsigned_char_const * unsigned_long)::hex[bVar1 >> 4];
            puVar7 = puVar7 + -2;
         }
 while ( local_238 + 8 != pbVar8 );
         std::__ostream_insert<char,std::char_traits<char>>((ostream*)local_1b8, (char*)local_1d8, local_1d0);
         if (local_1d8 != local_1c8) {
            operator_delete(local_1d8, local_1c8[0] + 1);
         }

         local_228 = 0;
         local_1f0 = 0;
         local_1e8 = 0;
         local_238 = (undefined1[16])0x0;
         local_1f8 = &local_1e8;
         if (local_188._0_8_ == 0) {
            std::__cxx11::string::_M_assign((string*)&local_1f8);
         }
 else {
            std::__cxx11::string::_M_replace(( ulong ) & local_1f8, 0, (char*)0x0, local_198._8_8_);
         }

         local_218[0] = local_208;
         std::__cxx11::string::_M_construct<char_const*>((string*)local_218, "xrDestroyInstance");
         if (( LoaderLogger::GetInstance():: ) && ( iVar6 = __cxa_guard_acquire(&LoaderLogger::GetInstance(), ::instance) ),iVar6 != 0) {
            LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
            __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
            __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
         }

         local_1d8 = local_1c8;
         std::__cxx11::string::_M_construct<char_const*>((string*)&local_1d8, "OpenXR-Loader");
         LoaderLogger::LogMessage(0x1039e0, 0x10, (string*)0x1, (string*)&local_1d8, (string*)local_218, (string*)&local_1f8);
         if (local_1d8 != local_1c8) {
            operator_delete(local_1d8, local_1c8[0] + 1);
         }

         if (local_218[0] != local_208) {
            operator_delete(local_218[0], local_208[0] + 1);
         }

         if (local_1f8 != &local_1e8) {
            operator_delete(local_1f8, CONCAT71(uStack_1e7, local_1e8) + 1);
         }

         uVar5 = local_238._8_8_;
         pvVar9 = (void*)local_238._0_8_;
         if (local_238._8_8_ != local_238._0_8_) {
            do {
               if (*(void**)( (long)pvVar9 + 0x10 ) != (void*)( (long)pvVar9 + 0x20 )) {
                  operator_delete(*(void**)( (long)pvVar9 + 0x10 ), *(long*)( (long)pvVar9 + 0x20 ) + 1);
               }

               pvVar9 = (void*)( (long)pvVar9 + 0x30 );
            }
 while ( (void*)uVar5 != pvVar9 );
         }

         if ((void*)local_238._0_8_ != (void*)0x0) {
            operator_delete((void*)local_238._0_8_, local_228 - local_238._0_8_);
         }

         local_148[0] = std::__cxx11::string::_M_replace;
         local_1b8[0] = std::ios::init;
         local_1b8[1] = std::ios_base::ios_base;
         if (local_168 != &local_158) {
            operator_delete(local_168, CONCAT71(uStack_157, local_158) + 1);
         }

         local_1b8[1] = std::ios_base::~ios_base;
         std::locale::~locale(local_178);
         local_1b8[0] = _init;
         *(undefined8*)( (long)local_1b8 + *(long*)( _init + -0x18 ) ) = _locale;
         local_148[0] = (code*)&std::__cxx11::ostringstream::vtable;
         std::ios_base::~ios_base((ios_base*)local_148);
         if (*(void**)( this + 0x48 ) != (void*)0x0) {
            operator_delete(*(void**)( this + 0x48 ), 0x1f8);
         }

         plVar2 = *(long**)( this + 0x38 );
         plVar10 = *(long**)( this + 0x30 );
         if (plVar2 != plVar10) {
            do {
               if ((long*)*plVar10 != (long*)0x0) {
                  ( **(code**)( *(long*)*plVar10 + 8 ) )();
               }

               plVar10 = plVar10 + 1;
            }
 while ( plVar2 != plVar10 );
            plVar10 = *(long**)( this + 0x30 );
         }

         if (plVar10 != (long*)0x0) {
            operator_delete(plVar10, *(long*)( this + 0x40 ) - (long)plVar10);
         }

         puVar3 = *(undefined8**)( this + 0x20 );
         puVar11 = *(undefined8**)( this + 0x18 );
         if (puVar3 != puVar11) {
            do {
               if ((undefined8*)*puVar11 != puVar11 + 2) {
                  operator_delete((undefined8*)*puVar11, puVar11[2] + 1);
               }

               puVar11 = puVar11 + 4;
            }
 while ( puVar3 != puVar11 );
            puVar11 = *(undefined8**)( this + 0x18 );
         }

         if (puVar11 == (undefined8*)0x0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            operator_delete(puVar11, *(long*)( this + 0x28 ) - (long)puVar11);
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
, /* LoaderInstance::~LoaderInstance() */, void __thiscall LoaderInstance::~LoaderInstance(LoaderInstance *this), {
  ~LoaderInstance(this) ;operator_delete(this, 0x58);return;}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* ActiveLoaderInstance::Set(std::unique_ptr<LoaderInstance, std::default_delete<LoaderInstance> >,
   char const*) */undefined1 ActiveLoaderInstance::Set(undefined8 *param_1, char *param_2) {
   undefined8 uVar1;
   LoaderInstance *this;
   undefined1 uVar2;
   int iVar3;
   long *plVar4;
   undefined8 *puVar5;
   string *psVar6;
   size_t sVar7;
   string **ppsVar8;
   void *pvVar9;
   long lVar10;
   char *pcVar11;
   size_t *__dest;
   long in_FS_OFFSET;
   size_t sStack_1b8;
   undefined1 auStack_1b0[16];
   long lStack_1a0;
   size_t *psStack_190;
   size_t sStack_188;
   size_t asStack_180[2];
   size_t *psStack_170;
   size_t sStack_168;
   size_t asStack_160[2];
   long *aplStack_150[2];
   long alStack_140[3];
   long lStack_128;
   string **ppsStack_118;
   char *pcStack_110;
   string ***pppsStack_108;
   string **ppsStack_100;
   string **ppsStack_f8;
   string *psStack_f0;
   string *local_e0;
   string *local_d0;
   undefined1 local_c8[16];
   long local_b8;
   string **local_a8;
   string *local_a0;
   string *local_98[2];
   string **local_88;
   string *local_80;
   string *local_78[2];
   long *local_68[2];
   long local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   psStack_f0 = (string*)0x100793;
   plVar4 = (long*)(anonymous_namespace)::GetSetCurrentLoaderInstance();
   if (*plVar4 == 0) {
      psStack_f0 = (string*)0x10079e;
      puVar5 = (undefined8*)(anonymous_namespace)::GetSetCurrentLoaderInstance();
      uVar1 = *param_1;
      *param_1 = 0;
      this(LoaderInstance * ) * puVar5;
      *puVar5 = uVar1;
      if (this != (LoaderInstance*)0x0) {
         if (*(code**)( *(long*)this + 8 ) == LoaderInstance::~LoaderInstance) {
            psStack_f0 = (string*)0x1007ce;
            LoaderInstance::~LoaderInstance(this);
            psStack_f0 = (string*)0x1007db;
            operator_delete(this, 0x58);
         }
 else {
            psStack_f0 = (string*)0x100812;
            ( **(code**)( *(long*)this + 8 ) )();
         }

      }

      uVar2 = 0;
      goto LAB_001007dd;
   }

   local_c8 = (undefined1[16])0x0;
   local_b8 = 0;
   local_d0 = (string*)0x27;
   psStack_f0 = (string*)0x10085e;
   ppsVar8 = &local_d0;
   local_88 = local_78;
   local_88 = (string**)std::__cxx11::string::_M_create((ulong*)&local_88, ( ulong ) & local_d0);
   psVar6 = _UNK_00103ae8;
   local_78[0] = local_d0;
   *local_88 = __LC5;
   local_88[1] = psVar6;
   psVar6 = _UNK_00103af8;
   local_88[2] = __LC6;
   local_88[3] = psVar6;
   *(undefined8*)( (long)local_88 + 0x1f ) = 0x7374736978652079;
   local_80 = local_d0;
   *(string*)( (long)local_88 + (long)local_d0 ) = (string)0x0;
   local_a8 = local_98;
   if (param_2 == (char*)0x0) {
      pcVar11 = "basic_string: construction from null is not valid";
      psStack_f0 = (string*)0x100ab5;
      std::__throw_logic_error("basic_string: construction from null is not valid");
      lStack_128 = *(long*)( in_FS_OFFSET + 0x28 );
      ppsStack_118 = local_78;
      pcStack_110 = param_2;
      pppsStack_108 = &local_88;
      ppsStack_100 = &local_d0;
      ppsStack_f8 = local_98;
      psStack_f0 = (string*)&local_a8;
      if (( (anonymous_namespace)::current_loader_instance == '\0' ) && ( iVar3 = __cxa_guard_acquire(&(anonymous_namespace)::GetSetCurrentLoaderInstance(), ::
                                     current_loader_instance) ),iVar3 != 0) {
         __cxa_atexit(std::unique_ptr<LoaderInstance,std::default_delete<LoaderInstance>>::~unique_ptr, &(anonymous_namespace)::GetSetCurrentLoaderInstance(), ::current_loader_instance, &__dso_handle);
         __cxa_guard_release(&(anonymous_namespace)::GetSetCurrentLoaderInstance(), ::
                           current_loader_instance);
      }

      lVar10= (anonymous_namespace)::GetSetCurrentLoaderInstance()::current_loader_instance
      ;
      *(long*)pcVar11 = (anonymous_namespace)::GetSetCurrentLoaderInstance();
      if (lVar10 != 0) {
         uVar2 = 0;
         goto LAB_00100b0a;
      }

      auStack_1b0 = (undefined1[16])0x0;
      lStack_1a0 = 0;
      sStack_1b8 = 0x1c;
      psStack_170 = asStack_160;
      psStack_170 = (size_t*)std::__cxx11::string::_M_create((ulong*)&psStack_170, ( ulong ) & sStack_1b8);
      sVar7 = _UNK_00103b08;
      asStack_160[0] = sStack_1b8;
      *psStack_170 = __LC8;
      psStack_170[1] = sVar7;
      uVar1 = _UNK_00103b18;
      *(undefined8*)( (long)psStack_170 + 0xc ) = __LC9;
      *(undefined8*)( (long)psStack_170 + 0x14 ) = uVar1;
      sStack_168 = sStack_1b8;
      *(undefined1*)( (long)psStack_170 + sStack_1b8 ) = 0;
      psStack_190 = asStack_180;
      if (ppsVar8 == (string**)0x0) {
         std::__throw_logic_error("basic_string: construction from null is not valid");
         if ((anonymous_namespace)::GetSetCurrentLoaderInstance() != '\0') {
            return (anonymous_namespace)::GetSetCurrentLoaderInstance() != 0;
         }

         iVar3 = __cxa_guard_acquire(&(anonymous_namespace)::GetSetCurrentLoaderInstance(), ::
                                   current_loader_instance);
         if (iVar3 == 0) {
            return (anonymous_namespace)::GetSetCurrentLoaderInstance() != 0;
         }

         __cxa_atexit(std::unique_ptr<LoaderInstance,std::default_delete<LoaderInstance>>::~unique_ptr, &(anonymous_namespace)::GetSetCurrentLoaderInstance(), ::current_loader_instance, &__dso_handle);
         __cxa_guard_release(&(anonymous_namespace)::GetSetCurrentLoaderInstance(), ::
                           current_loader_instance);
         return (anonymous_namespace)::GetSetCurrentLoaderInstance() != 0;
      }

      sVar7 = strlen((char*)ppsVar8);
      sStack_1b8 = sVar7;
      if (sVar7 < 0x10) {
         if (sVar7 == 1) {
            asStack_180[0] = CONCAT71(asStack_180[0]._1_7_, *(undefined1*)ppsVar8);
         }
 else {
            __dest = asStack_180;
            if (sVar7 != 0) goto LAB_00100da9;
         }

      }
 else {
         psStack_190 = (size_t*)std::__cxx11::string::_M_create((ulong*)&psStack_190, ( ulong ) & sStack_1b8);
         asStack_180[0] = sStack_1b8;
         __dest = psStack_190;
         LAB_00100da9:memcpy(__dest, ppsVar8, sVar7);
      }

      sStack_188 = sStack_1b8;
      *(undefined1*)( (long)psStack_190 + sStack_1b8 ) = 0;
      if (( LoaderLogger::GetInstance():: ) && ( iVar3 = __cxa_guard_acquire(&LoaderLogger::GetInstance(), ::instance) ),iVar3 != 0) {
         LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
         __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
      }

      aplStack_150[0] = alStack_140;
      std::__cxx11::string::_M_construct<char_const*>((string*)aplStack_150, "OpenXR-Loader");
      LoaderLogger::LogMessage(0x1039e0, 0x1000, (string*)0x1, (string*)aplStack_150, (string*)&psStack_190, (vector*)&psStack_170);
      if (aplStack_150[0] != alStack_140) {
         operator_delete(aplStack_150[0], alStack_140[0] + 1);
      }

      if (psStack_190 != asStack_180) {
         operator_delete(psStack_190, asStack_180[0] + 1);
      }

      if (psStack_170 != asStack_160) {
         operator_delete(psStack_170, asStack_160[0] + 1);
      }

      uVar1 = auStack_1b0._8_8_;
      for (lVar10 = auStack_1b0._0_8_; uVar1 != lVar10; lVar10 = lVar10 + 0x30) {
         if (*(void**)( lVar10 + 0x10 ) != (void*)( lVar10 + 0x20 )) {
            operator_delete(*(void**)( lVar10 + 0x10 ), *(long*)( lVar10 + 0x20 ) + 1);
         }

      }

      if ((void*)auStack_1b0._0_8_ != (void*)0x0) {
         operator_delete((void*)auStack_1b0._0_8_, lStack_1a0 - auStack_1b0._0_8_);
      }

      uVar2 = 0xf4;
      LAB_00100b0a:if (lStack_128 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return uVar2;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   psStack_f0 = (string*)0x1008bb;
   psVar6 = (string*)strlen(param_2);
   local_d0 = psVar6;
   if (psVar6 < (string*)0x10) {
      ppsVar8 = local_98;
      if (psVar6 == (string*)0x1) {
         local_98[0] = (string*)CONCAT71(local_98[0]._1_7_, *param_2);
      }
 else if (psVar6 != (string*)0x0) goto LAB_00100a13;
   }
 else {
      psStack_f0 = (string*)0x100a88;
      local_e0 = psVar6;
      local_a8 = (string**)std::__cxx11::string::_M_create((ulong*)&local_a8, ( ulong ) & local_d0);
      local_98[0] = local_d0;
      psVar6 = local_e0;
      ppsVar8 = local_a8;
      LAB_00100a13:psStack_f0 = (string*)0x100a1e;
      memcpy(ppsVar8, param_2, (size_t)psVar6);
      ppsVar8 = local_a8;
   }

   *(string*)( (long)ppsVar8 + (long)local_d0 ) = (string)0x0;
   local_a0 = local_d0;
   if (LoaderLogger::GetInstance() == '\0') {
      psStack_f0 = (string*)0x100a43;
      iVar3 = __cxa_guard_acquire(&LoaderLogger::GetInstance(), ::instance);
      if (iVar3 != 0) {
         psStack_f0 = (string*)0x100a53;
         LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
         psStack_f0 = (string*)0x100a69;
         __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
         psStack_f0 = (string*)0x100a71;
         __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
      }

   }

   local_e0 = (string*)local_68;
   psStack_f0 = (string*)0x100931;
   local_68[0] = local_58;
   std::__cxx11::string::_M_construct<char_const*>(local_e0, "OpenXR-Loader");
   ppsStack_f8 = (string**)local_c8;
   ppsStack_100 = (string**)0x100958;
   LoaderLogger::LogMessage(0x1039e0, 0x1000, (string*)0x1, local_e0, (string*)&local_a8, (vector*)&local_88);
   if (local_68[0] != local_58) {
      psStack_f0 = (string*)0x100978;
      operator_delete(local_68[0], local_58[0] + 1);
   }

   if (local_a8 != local_98) {
      psStack_f0 = (string*)0x100990;
      operator_delete(local_a8, ( ulong )(local_98[0] + 1));
   }

   if (local_88 != local_78) {
      psStack_f0 = (string*)0x1009a8;
      operator_delete(local_88, ( ulong )(local_78[0] + 1));
   }

   uVar1 = local_c8._8_8_;
   pvVar9 = (void*)local_c8._0_8_;
   if (local_c8._8_8_ != local_c8._0_8_) {
      do {
         if (*(void**)( (long)pvVar9 + 0x10 ) != (void*)( (long)pvVar9 + 0x20 )) {
            psStack_f0 = (string*)0x1009da;
            operator_delete(*(void**)( (long)pvVar9 + 0x10 ), *(long*)( (long)pvVar9 + 0x20 ) + 1);
         }

         pvVar9 = (void*)( (long)pvVar9 + 0x30 );
      }
 while ( (void*)uVar1 != pvVar9 );
   }

   if ((void*)local_c8._0_8_ != (void*)0x0) {
      psStack_f0 = (string*)0x1009fd;
      operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
   }

   uVar2 = 0xf6;
   LAB_001007dd:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   psStack_f0 = (string*)0x100aa9;
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* ActiveLoaderInstance::Get(LoaderInstance**, char const*) */undefined1 ActiveLoaderInstance::Get(LoaderInstance **param_1, char *param_2) {
   LoaderInstance *pLVar1;
   undefined8 uVar2;
   undefined1 uVar3;
   int iVar4;
   size_t sVar5;
   long lVar6;
   size_t *__dest;
   long in_FS_OFFSET;
   size_t local_d0;
   undefined1 local_c8[16];
   long local_b8;
   size_t *local_a8;
   size_t local_a0;
   size_t local_98[2];
   size_t *local_88;
   size_t local_80;
   size_t local_78[2];
   long *local_68[2];
   long local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( (anonymous_namespace)::current_loader_instance == '\0' ) && ( iVar4 = __cxa_guard_acquire(&(anonymous_namespace)::GetSetCurrentLoaderInstance(), ::
                                   current_loader_instance) ),iVar4 != 0) {
      __cxa_atexit(std::unique_ptr<LoaderInstance,std::default_delete<LoaderInstance>>::~unique_ptr, &(anonymous_namespace)::GetSetCurrentLoaderInstance(), ::current_loader_instance, &__dso_handle);
      __cxa_guard_release(&(anonymous_namespace)::GetSetCurrentLoaderInstance(), ::
                         current_loader_instance);
   }

   pLVar1= (anonymous_namespace)::GetSetCurrentLoaderInstance()::current_loader_instance
   ;
   *param_1 = (anonymous_namespace)::GetSetCurrentLoaderInstance();
   if (pLVar1 != (LoaderInstance*)0x0) {
      uVar3 = 0;
      goto LAB_00100b0a;
   }

   local_c8 = (undefined1[16])0x0;
   local_b8 = 0;
   local_d0 = 0x1c;
   local_88 = local_78;
   local_88 = (size_t*)std::__cxx11::string::_M_create((ulong*)&local_88, ( ulong ) & local_d0);
   sVar5 = _UNK_00103b08;
   local_78[0] = local_d0;
   *local_88 = __LC8;
   local_88[1] = sVar5;
   uVar2 = _UNK_00103b18;
   *(undefined8*)( (long)local_88 + 0xc ) = __LC9;
   *(undefined8*)( (long)local_88 + 0x14 ) = uVar2;
   local_80 = local_d0;
   *(undefined1*)( (long)local_88 + local_d0 ) = 0;
   local_a8 = local_98;
   if (param_2 == (char*)0x0) {
      std::__throw_logic_error("basic_string: construction from null is not valid");
      if ((anonymous_namespace)::GetSetCurrentLoaderInstance() != '\0') {
         return (anonymous_namespace)::GetSetCurrentLoaderInstance() != (LoaderInstance*)0x0;
      }

      iVar4 = __cxa_guard_acquire(&(anonymous_namespace)::GetSetCurrentLoaderInstance(), ::
                                 current_loader_instance);
      if (iVar4 == 0) {
         return (anonymous_namespace)::GetSetCurrentLoaderInstance() != (LoaderInstance*)0x0;
      }

      __cxa_atexit(std::unique_ptr<LoaderInstance,std::default_delete<LoaderInstance>>::~unique_ptr, &(anonymous_namespace)::GetSetCurrentLoaderInstance(), ::current_loader_instance, &__dso_handle);
      __cxa_guard_release(&(anonymous_namespace)::GetSetCurrentLoaderInstance(), ::
                         current_loader_instance);
      return (anonymous_namespace)::GetSetCurrentLoaderInstance() != (LoaderInstance*)0x0;
   }

   sVar5 = strlen(param_2);
   local_d0 = sVar5;
   if (sVar5 < 0x10) {
      if (sVar5 == 1) {
         local_98[0] = CONCAT71(local_98[0]._1_7_, *param_2);
      }
 else {
         __dest = local_98;
         if (sVar5 != 0) goto LAB_00100da9;
      }

   }
 else {
      local_a8 = (size_t*)std::__cxx11::string::_M_create((ulong*)&local_a8, ( ulong ) & local_d0);
      local_98[0] = local_d0;
      __dest = local_a8;
      LAB_00100da9:memcpy(__dest, param_2, sVar5);
   }

   local_a0 = local_d0;
   *(undefined1*)( (long)local_a8 + local_d0 ) = 0;
   if (( LoaderLogger::GetInstance():: ) && ( iVar4 = __cxa_guard_acquire(&LoaderLogger::GetInstance(), ::instance) ),iVar4 != 0) {
      LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
      __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
      __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
   }

   local_68[0] = local_58;
   std::__cxx11::string::_M_construct<char_const*>((string*)local_68, "OpenXR-Loader");
   LoaderLogger::LogMessage(0x1039e0, 0x1000, (string*)0x1, (string*)local_68, (string*)&local_a8, (vector*)&local_88);
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
   for (lVar6 = local_c8._0_8_; uVar2 != lVar6; lVar6 = lVar6 + 0x30) {
      if (*(void**)( lVar6 + 0x10 ) != (void*)( lVar6 + 0x20 )) {
         operator_delete(*(void**)( lVar6 + 0x10 ), *(long*)( lVar6 + 0x20 ) + 1);
      }

   }

   if ((void*)local_c8._0_8_ != (void*)0x0) {
      operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
   }

   uVar3 = 0xf4;
   LAB_00100b0a:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ActiveLoaderInstance::IsAvailable() */bool ActiveLoaderInstance::IsAvailable(void) {
   int iVar1;
   if ((anonymous_namespace)::GetSetCurrentLoaderInstance() != '\0') {
      return (anonymous_namespace)::GetSetCurrentLoaderInstance() != 0;
   }

   iVar1 = __cxa_guard_acquire(&(anonymous_namespace)::GetSetCurrentLoaderInstance(), ::
                               current_loader_instance);
   if (iVar1 == 0) {
      return (anonymous_namespace)::GetSetCurrentLoaderInstance() != 0;
   }

   __cxa_atexit(std::unique_ptr<LoaderInstance,std::default_delete<LoaderInstance>>::~unique_ptr, &(anonymous_namespace)::GetSetCurrentLoaderInstance(), ::current_loader_instance, &__dso_handle);
   __cxa_guard_release(&(anonymous_namespace)::GetSetCurrentLoaderInstance(), ::current_loader_instance);
   return (anonymous_namespace)::GetSetCurrentLoaderInstance() != 0;
}
/* ActiveLoaderInstance::Remove() */void ActiveLoaderInstance::Remove(void) {
   LoaderInstance *this;
   undefined8 *puVar1;
   puVar1 = (undefined8*)(anonymous_namespace)::GetSetCurrentLoaderInstance();
   this(LoaderInstance * ) * puVar1;
   *puVar1 = 0;
   if (this == (LoaderInstance*)0x0) {
      return;
   }

   if (*(code**)( *(long*)this + 8 ) == LoaderInstance::~LoaderInstance) {
      LoaderInstance::~LoaderInstance(this);
      operator_delete(this, 0x58);
      return;
   }

   /* WARNING: Could not recover jumptable at 0x00100ed1. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *(long*)this + 8 ) )();
   return;
}
/* LoaderInstance::LoaderSpecificExtensions() */undefined *LoaderInstance::LoaderSpecificExtensions(void) {
   return &LoaderSpecificExtensions();
}
/* LoaderInstance::GetInstanceProcAddr(char const*, void (**)()) */void LoaderInstance::GetInstanceProcAddr(char *param_1, _func_void *param_2) {
   /* WARNING: Could not recover jumptable at 0x00100eff. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( param_1 + 0x10 ) )(*(undefined8*)( param_1 + 8 ));
   return;
}
/* LoaderInstance::ExtensionIsEnabled(std::__cxx11::string const&) */undefined8 LoaderInstance::ExtensionIsEnabled(LoaderInstance *this, string *param_1) {
   undefined8 *puVar1;
   size_t __n;
   int iVar2;
   undefined8 *puVar3;
   puVar3 = *(undefined8**)( this + 0x18 );
   puVar1 = *(undefined8**)( this + 0x20 );
   if (puVar1 != puVar3) {
      __n = *(size_t*)( param_1 + 8 );
      do {
         if (puVar3[1] == __n) {
            if (__n == 0) {
               return 1;
            }

            iVar2 = memcmp((void*)*puVar3, *(void**)param_1, __n);
            if (iVar2 == 0) {
               return 1;
            }

         }

         puVar3 = puVar3 + 4;
      }
 while ( puVar1 != puVar3 );
   }

   return 0;
}
/* LoaderInstance::LoaderInstance(XrInstance_T*, XrInstanceCreateInfo const*, XrResult
   (*)(XrInstance_T*, char const*, void (**)()), std::vector<std::unique_ptr<ApiLayerInterface,
   std::default_delete<ApiLayerInterface> >, std::allocator<std::unique_ptr<ApiLayerInterface,
   std::default_delete<ApiLayerInterface> > > >) */void LoaderInstance::LoaderInstance(LoaderInstance *this, undefined8 param_1, long param_2, undefined8 param_3, undefined1 (*param_5)[16]) {
   undefined8 uVar1;
   char *__s;
   long *plVar2;
   undefined8 uVar3;
   undefined8 *puVar4;
   size_t sVar5;
   uint uVar6;
   long lVar7;
   uint uVar8;
   long lVar9;
   undefined8 *puVar10;
   ulong uVar11;
   long in_FS_OFFSET;
   byte bVar12;
   undefined8 *local_68;
   undefined8 local_60;
   undefined4 local_58;
   undefined4 uStack_54;
   long local_40;
   bVar12 = 0;
   uVar1 = *(undefined8*)*param_5;
   uVar3 = *(undefined8*)( *param_5 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 0x10 ) = param_3;
   *(undefined8*)( this + 8 ) = param_1;
   *(undefined8*)( this + 0x28 ) = 0;
   *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x30 ) = uVar1;
   *(undefined8*)( this + 0x38 ) = uVar3;
   *(undefined***)this = &PTR__LoaderInstance_001038f8;
   uVar1 = *(undefined8*)param_5[1];
   *(undefined8*)param_5[1] = 0;
   *(undefined8*)( this + 0x40 ) = uVar1;
   *param_5 = (undefined1[16])0x0;
   puVar4 = (undefined8*)operator_new(0x1f8);
   *(undefined8*)( this + 0x50 ) = 0;
   *(undefined8**)( this + 0x48 ) = puVar4;
   puVar10 = puVar4;
   for (lVar7 = 0x3f; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + (ulong)bVar12 * -2 + 1;
   }

   if (*(int*)( param_2 + 0x138 ) != 0) {
      lVar7 = 0;
      do {
         while (true) {
            __s = *(char**)( *(long*)( param_2 + 0x140 ) + lVar7 * 8 );
            local_68 = (undefined8*)&local_58;
            if (__s == (char*)0x0) {
               std::__throw_logic_error("basic_string: construction from null is not valid");
               goto LAB_001011e0;
            }

            sVar5 = strlen(__s);
            std::__cxx11::string::_M_construct<char_const*>(&local_68, __s, __s + sVar5);
            plVar2 = *(long**)( this + 0x20 );
            if (plVar2 == *(long**)( this + 0x28 )) break;
            *plVar2 = (long)( plVar2 + 2 );
            if (local_68 == (undefined8*)&local_58) {
               uVar11 = local_60 + 1;
               uVar6 = (uint)uVar11;
               if (uVar6 < 8) {
                  if (( uVar11 & 4 ) == 0) {
                     if (uVar6 != 0) {
                        *(undefined1*)( plVar2 + 2 ) = (undefined1)local_58;
                        if (( uVar11 & 2 ) != 0) {
                           *(undefined2*)( (long)plVar2 + ( uVar11 & 0xffffffff ) + 0xe ) = *(undefined2*)( (long)&local_60 + ( uVar11 & 0xffffffff ) + 6 );
                        }

                     }

                  }
 else {
                     *(undefined4*)( plVar2 + 2 ) = local_58;
                     *(undefined4*)( (long)plVar2 + ( uVar11 & 0xffffffff ) + 0xc ) = *(undefined4*)( (long)&local_60 + ( uVar11 & 0xffffffff ) + 4 );
                  }

               }
 else {
                  plVar2[2] = CONCAT44(uStack_54, local_58);
                  *(undefined8*)( (long)plVar2 + ( uVar11 & 0xffffffff ) + 8 ) = *(undefined8*)( (long)&local_60 + ( uVar11 & 0xffffffff ) );
                  lVar9 = (long)( plVar2 + 2 ) - ( ( ulong )(plVar2 + 3) & 0xfffffffffffffff8 );
                  uVar6 = uVar6 + (int)lVar9 & 0xfffffff8;
                  if (7 < uVar6) {
                     uVar8 = 0;
                     do {
                        uVar11 = (ulong)uVar8;
                        uVar8 = uVar8 + 8;
                        *(undefined8*)( ( ( ulong )(plVar2 + 3) & 0xfffffffffffffff8 ) + uVar11 ) = *(undefined8*)( (long)&local_58 + ( uVar11 - lVar9 ) );
                     }
 while ( uVar8 < uVar6 );
                  }

               }

            }
 else {
               *plVar2 = (long)local_68;
               plVar2[2] = CONCAT44(uStack_54, local_58);
            }

            plVar2[1] = local_60;
            *(long*)( this + 0x20 ) = *(long*)( this + 0x20 ) + 0x20;
            LAB_0010106f:lVar7 = lVar7 + 1;
            if (*(uint*)( param_2 + 0x138 ) <= (uint)lVar7) goto LAB_001010ee;
         }
;
         std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::_M_realloc_insert<std::__cxx11::string>((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>*)( this + 0x18 ), plVar2, &local_68);
         if (local_68 == (undefined8*)&local_58) goto LAB_0010106f;
         lVar7 = lVar7 + 1;
         operator_delete(local_68, CONCAT44(uStack_54, local_58) + 1);
      }
 while ( (uint)lVar7 < *(uint*)( param_2 + 0x138 ) );
      LAB_001010ee:puVar4 = *(undefined8**)( this + 0x48 );
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      GeneratedXrPopulateDispatchTableCore(puVar4, param_1, param_3);
      return;
   }

   LAB_001011e0:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* LoaderInstance::CreateInstance(XrResult (*)(XrInstance_T*, char const*, void (**)()), XrResult
   (*)(XrInstanceCreateInfo const*, XrInstance_T**), XrResult (*)(XrInstanceCreateInfo const*,
   XrApiLayerCreateInfo const*, XrInstance_T**), std::vector<std::unique_ptr<ApiLayerInterface,
   std::default_delete<ApiLayerInterface> >, std::allocator<std::unique_ptr<ApiLayerInterface,
   std::default_delete<ApiLayerInterface> > > >, XrInstanceCreateInfo const*,
   std::unique_ptr<LoaderInstance, std::default_delete<LoaderInstance> >*) */int LoaderInstance::CreateInstance(undefined8 param_1, code *param_2, code *param_3, undefined1 (*param_4)[16], code **param_5, long *param_6) {
   undefined8 *__src;
   vector<char_const*,std::allocator<char_const*>> vVar1;
   uint uVar2;
   long lVar3;
   undefined8 uVar4;
   code *pcVar5;
   undefined1 *__src_00;
   LoaderInstance *this;
   undefined8 uVar6;
   undefined1 auVar7[8];
   char cVar8;
   int iVar9;
   int iVar10;
   size_t sVar11;
   ulong uVar12;
   undefined8 *puVar13;
   ulong uVar14;
   undefined8 *puVar15;
   code **ppcVar16;
   LoaderInstance *pLVar17;
   vector<char_const*,std::allocator<char_const*>> *pvVar18;
   code *pcVar19;
   long lVar20;
   undefined1 auVar21[8];
   code **ppcVar22;
   string *psVar23;
   long lVar24;
   undefined8 *puVar25;
   char *pcVar26;
   long in_FS_OFFSET;
   byte bVar27;
   undefined8 *local_4f8;
   code *local_4c8;
   undefined8 local_4c0;
   ulong local_4b8;
   ostream *local_4a8;
   undefined8 local_448;
   code *local_440;
   undefined1 local_438[8];
   code *pcStack_430;
   code *local_428;
   code **local_418;
   code *local_410;
   code *local_408[2];
   code **local_3f8;
   code *local_3f0;
   code *local_3e8[2];
   code **local_3d8;
   code *local_3d0;
   undefined8 local_3c8;
   undefined5 uStack_3c0;
   undefined1 local_3bb;
   undefined4 local_298;
   undefined8 *local_290;
   undefined1 local_288[16];
   undefined8 *local_278;
   code *local_268[2];
   undefined1 local_258[16];
   undefined1 local_248[16];
   undefined1 local_238[16];
   locale local_228[8];
   undefined4 local_220;
   undefined1 *local_218;
   undefined8 local_210;
   undefined1 local_208;
   undefined7 uStack_207;
   code *local_1f8[27];
   undefined8 local_120;
   undefined2 local_118;
   undefined1 local_110[16];
   undefined1 local_100[16];
   undefined8 *local_50;
   long local_40;
   local_258._14_2_ = SUB82(local_258._0_8_, 6);
   bVar27 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_438 = (undefined1[8])0x0;
   pcStack_430 = (code*)0x0;
   local_428 = (code*)0x0;
   local_440 = (code*)0x27;
   local_3d8 = (code**)&local_3c8;
   local_3d8 = (code**)std::__cxx11::string::_M_create((ulong*)&local_3d8, ( ulong ) & local_440);
   pcVar19 = _UNK_00103b28;
   local_3c8._0_5_ = SUB85(local_440, 0);
   local_3c8._5_3_ = ( undefined3 )((ulong)local_440 >> 0x28);
   *local_3d8 = __LC16;
   local_3d8[1] = pcVar19;
   pcVar19 = _UNK_00103b38;
   local_3d8[2] = __LC17;
   local_3d8[3] = pcVar19;
   *(undefined8*)( (long)local_3d8 + 0x1f ) = 0x65636e6174736e49;
   local_3d0 = local_440;
   *(code*)( (long)local_3d8 + (long)local_440 ) = (code)0x0;
   local_440 = (code*)0x10;
   local_3f8 = local_3e8;
   local_3f8 = (code**)std::__cxx11::string::_M_create((ulong*)&local_3f8, ( ulong ) & local_440);
   pcVar19 = _UNK_00103b48;
   local_3e8[0] = local_440;
   *local_3f8 = __LC18;
   local_3f8[1] = pcVar19;
   local_3f0 = local_440;
   *(code*)( (long)local_3f8 + (long)local_440 ) = (code)0x0;
   if (( LoaderLogger::GetInstance():: ) && ( iVar9 = __cxa_guard_acquire(&LoaderLogger::GetInstance(), ::instance) ),iVar9 != 0) {
      LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
      __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
      __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
   }

   local_258._5_8_ = 0x726564616f4c2d52;
   local_258._0_5_ = 0x586e65704f;
   local_268[1] = (code*)0xd;
   local_258[0xd] = 0;
   pvVar18 = (vector<char_const*,std::allocator<char_const*>>*)local_438;
   local_268[0] = (code*)local_258;
   LoaderLogger::LogMessage(0x1039e0, 1, (string*)0x1, (string*)local_268, (string*)&local_3f8, (string*)&local_3d8);
   if (local_268[0] != (code*)local_258) {
      operator_delete(local_268[0], local_258._0_8_ + 1);
   }

   if (local_3f8 != local_3e8) {
      operator_delete(local_3f8, ( ulong )(local_3e8[0] + 1));
   }

   auVar21 = local_438;
   pcVar19 = pcStack_430;
   if (local_3d8 != (code**)&local_3c8) {
      operator_delete(local_3d8, CONCAT35(local_3c8._5_3_, (undefined5)local_3c8) + 1);
      auVar21 = local_438;
      pcVar19 = pcStack_430;
   }

   for (; pcVar5 = pcStack_430,(undefined1[8])pcStack_430 != auVar21; auVar21 = ( undefined1[8] )((long)auVar21 + 0x30)) {
      pcStack_430 = pcVar19;
      if (*(code**)( (long)auVar21 + 0x10 ) != (code*)( (long)auVar21 + 0x20 )) {
         operator_delete(*(code**)( (long)auVar21 + 0x10 ), *(long*)( (long)auVar21 + 0x20 ) + 1);
      }

      pcVar19 = pcStack_430;
      pcStack_430 = pcVar5;
   }

   pcStack_430 = pcVar19;
   if (local_438 != (undefined1[8])0x0) {
      operator_delete((void*)local_438, (long)local_428 - (long)local_438);
   }

   if (*(int*)( param_5 + 0x27 ) == 0) {
      ppcVar16 = param_5;
      ppcVar22 = &local_3d0;
      for (lVar24 = 0x29; lVar24 != 0; lVar24 = lVar24 + -1) {
         *ppcVar22 = *ppcVar16;
         ppcVar16 = ppcVar16 + (ulong)bVar27 * -2 + 1;
         ppcVar22 = ppcVar22 + (ulong)bVar27 * -2 + 1;
      }

   }
 else {
      lVar24 = 0;
      LAB_00101576:do {
         if (( RuntimeInterface::GetInstance():: ) && ( iVar9 = __cxa_guard_acquire(&RuntimeInterface::GetInstance(), ::instance) ),iVar9 != 0) {
            __cxa_atexit(std::unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>>::~unique_ptr, &RuntimeInterface::GetInstance(), ::instance, &__dso_handle);
            __cxa_guard_release(&RuntimeInterface::GetInstance(), ::instance);
         }

         psVar23= RuntimeInterface::GetInstance()::instance
         ;
         pcVar26 = *(char**)( param_5[0x28] + lVar24 * 8 );
         local_3d8 = (code**)&local_3c8;
         if (pcVar26 == (char*)0x0) {
            LAB_00102ca5:std::__throw_logic_error("basic_string: construction from null is not valid");
            LAB_00102cb1:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::append");
         }

         sVar11 = strlen(pcVar26);
         std::__cxx11::string::_M_construct<char_const*>((string*)&local_3d8, pcVar26, pcVar26 + sVar11);
         cVar8 = RuntimeInterface::SupportsExtension(psVar23);
         if (local_3d8 != (code**)&local_3c8) {
            operator_delete(local_3d8, CONCAT35(local_3c8._5_3_, (undefined5)local_3c8) + 1);
         }

         if (cVar8 != '\0') {
            LAB_00101563:uVar2 = *(uint*)( param_5 + 0x27 );
            lVar24 = lVar24 + 1;
            if (uVar2 <= (uint)lVar24) break;
            goto LAB_00101576;
         }

         pcVar26 = *(char**)( param_5[0x28] + lVar24 * 8 );
         iVar9 = strcmp("XR_EXT_debug_utils", pcVar26);
         if (iVar9 == 0) goto LAB_00101563;
         puVar15 = *(undefined8**)*param_4;
         puVar13 = *(undefined8**)( *param_4 + 8 );
         if (puVar15 == puVar13) {
            LAB_00101c85:local_438 = (undefined1[8])0x4a;
            local_3f8 = local_3e8;
            local_3f8 = (code**)std::__cxx11::string::_M_create((ulong*)&local_3f8, (ulong)pvVar18);
            pcVar19 = _UNK_00103b58;
            local_3e8[0] = (code*)local_438;
            *local_3f8 = __LC19;
            local_3f8[1] = pcVar19;
            pcVar19 = _UNK_00103b68;
            local_3f8[2] = __LC20;
            local_3f8[3] = pcVar19;
            pcVar19 = _UNK_00103b78;
            local_3f8[4] = __LC21;
            local_3f8[5] = pcVar19;
            pcVar19 = _UNK_00103b88;
            local_3f8[6] = __LC22;
            local_3f8[7] = pcVar19;
            uVar4 = _UNK_00103b98;
            *(undefined8*)( (long)local_3f8 + 0x3a ) = __LC23;
            *(undefined8*)( (long)local_3f8 + 0x42 ) = uVar4;
            local_3f0 = (code*)local_438;
            *(code*)( (long)local_3f8 + (long)local_438 ) = (code)0x0;
            pcVar26 = *(char**)( param_5[0x28] + lVar24 * 8 );
            sVar11 = strlen(pcVar26);
            if (0x3fffffffffffffffU - (long)local_3f0 < sVar11) goto LAB_00102cb1;
            std::__cxx11::string::_M_append((char*)&local_3f8, (ulong)pcVar26);
            _local_438 = (undefined1[16])0x0;
            local_428 = (code*)0x0;
            local_440 = (code*)0x10;
            local_3d8 = (code**)&local_3c8;
            local_3d8 = (code**)std::__cxx11::string::_M_create((ulong*)&local_3d8, ( ulong ) & local_440);
            pcVar19 = _UNK_00103b48;
            local_3c8._0_5_ = SUB85(local_440, 0);
            local_3c8._5_3_ = ( undefined3 )((ulong)local_440 >> 0x28);
            *local_3d8 = __LC18;
            local_3d8[1] = pcVar19;
            local_3d0 = local_440;
            *(code*)( (long)local_3d8 + (long)local_440 ) = (code)0x0;
            if (( LoaderLogger::GetInstance():: ) && ( iVar9 = __cxa_guard_acquire(&LoaderLogger::GetInstance(), ::instance) ),iVar9 != 0) {
               LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
               __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
               __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
            }

            local_268[0] = (code*)local_258;
            std::__cxx11::string::_M_construct<char_const*>((string*)local_268, "OpenXR-Loader");
            LoaderLogger::LogMessage(0x1039e0, 0x1000, (string*)0x1, (string*)local_268, (string*)&local_3d8, (string*)&local_3f8);
            if (local_268[0] != (code*)local_258) {
               operator_delete(local_268[0], local_258._0_8_ + 1);
            }

            if (local_3d8 != (code**)&local_3c8) {
               operator_delete(local_3d8, CONCAT35(local_3c8._5_3_, (undefined5)local_3c8) + 1);
            }

            pcVar19 = pcStack_430;
            auVar21 = local_438;
            if ((undefined1[8])pcStack_430 != local_438) {
               do {
                  if (*(void**)( (long)auVar21 + 0x10 ) != (void*)( (long)auVar21 + 0x20 )) {
                     operator_delete(*(void**)( (long)auVar21 + 0x10 ), *(long*)( (long)auVar21 + 0x20 ) + 1);
                  }

                  auVar21 = ( undefined1[8] )((long)auVar21 + 0x30);
               }
 while ( (undefined1[8])pcVar19 != auVar21 );
            }

            if (local_438 != (undefined1[8])0x0) {
               operator_delete((void*)local_438, (long)local_428 - (long)local_438);
            }

            if (local_3f8 != local_3e8) {
               operator_delete(local_3f8, ( ulong )(local_3e8[0] + 1));
            }

            iVar9 = -9;
            goto LAB_0010268e;
         }

         while (true) {
            psVar23 = (string*)*puVar15;
            local_268[0] = (code*)local_258;
            if (pcVar26 == (char*)0x0) goto LAB_00102ca5;
            sVar11 = strlen(pcVar26);
            std::__cxx11::string::_M_construct<char_const*>((string*)local_268, pcVar26, pcVar26 + sVar11);
            cVar8 = ApiLayerInterface::SupportsExtension(psVar23);
            if (local_268[0] != (code*)local_258) {
               operator_delete(local_268[0], local_258._0_8_ + 1);
            }

            if (cVar8 != '\0') break;
            puVar15 = puVar15 + 1;
            if (puVar13 == puVar15) goto LAB_00101c85;
            pcVar26 = *(char**)( param_5[0x28] + lVar24 * 8 );
         }
;
         uVar2 = *(uint*)( param_5 + 0x27 );
         lVar24 = lVar24 + 1;
      }
 while ( (uint)lVar24 < uVar2 );
      uVar12 = (ulong)uVar2;
      local_448 = 0;
      ppcVar16 = param_5;
      ppcVar22 = &local_3d0;
      for (lVar24 = 0x29; lVar24 != 0; lVar24 = lVar24 + -1) {
         *ppcVar22 = *ppcVar16;
         ppcVar16 = ppcVar16 + (ulong)bVar27 * -2 + 1;
         ppcVar22 = ppcVar22 + (ulong)bVar27 * -2 + 1;
      }

      local_288 = (undefined1[16])0x0;
      local_278 = (undefined8*)0x0;
      if (uVar12 != 0) {
         local_3d8 = param_5;
         puVar15 = (undefined8*)operator_new(uVar12 * 8);
         uVar4 = local_288._0_8_;
         if ((long)( local_288._8_8_ - local_288._0_8_ ) < 1) {
            if ((void*)local_288._0_8_ != (void*)0x0) {
               uVar14 = (long)local_278 - local_288._0_8_;
               goto LAB_001029c2;
            }

         }
 else {
            memmove(puVar15, (void*)local_288._0_8_, local_288._8_8_ - local_288._0_8_);
            uVar14 = (long)local_278 - uVar4;
            LAB_001029c2:operator_delete((void*)uVar4, uVar14);
         }

         local_278 = puVar15 + uVar12;
         local_288._8_8_ = puVar15;
         local_288._0_8_ = puVar15;
         if (*(int*)( local_3d8 + 0x27 ) != 0) {
            lVar24 = 0;
            ppcVar16 = local_3d8;
            do {
               while (lVar20 = lVar24 * 8,local_278 == puVar15) {
                  lVar24 = lVar24 + 1;
                  std::vector<char_const*,std::allocator<char_const*>>::_M_realloc_insert<char_const*const&>((vector<char_const*,std::allocator<char_const*>>*)local_288);
                  ppcVar16 = local_3d8;
                  puVar15 = (undefined8*)local_288._8_8_;
                  if (*(uint*)( local_3d8 + 0x27 ) <= (uint)lVar24) goto LAB_0010170e;
               }
;
               puVar13 = puVar15 + 1;
               lVar24 = lVar24 + 1;
               *puVar15 = *(undefined8*)( ppcVar16[0x28] + lVar20 );
               local_288._8_8_ = puVar13;
               puVar15 = puVar13;
            }
 while ( (uint)lVar24 < *(uint*)( ppcVar16 + 0x27 ) );
         }

         goto LAB_0010170e;
      }

   }

   local_448 = 0;
   local_278 = (undefined8*)0x0;
   local_288 = (undefined1[16])0x0;
   puVar15 = (undefined8*)0x0;
   local_3d8 = param_5;
   LAB_0010170e:local_298 = ( undefined4 )((long)puVar15 - local_288._0_8_ >> 3);
   local_290 = (undefined8*)local_288._0_8_;
   if ((undefined8*)local_288._0_8_ == puVar15) {
      local_290 = (undefined8*)0x0;
   }

   ppcVar16 = param_5;
   if (*(int*)( param_5 + 0x27 ) != 0) {
      local_428 = (code*)0x0;
      local_438 = (undefined1[8])0x0;
      pcStack_430 = (code*)0x0;
      if (( RuntimeInterface::GetInstance():: ) && ( iVar9 = __cxa_guard_acquire(&RuntimeInterface::GetInstance(), ::instance) ),iVar9 != 0) {
         __cxa_atexit(std::unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>>::~unique_ptr, &RuntimeInterface::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&RuntimeInterface::GetInstance(), ::instance);
      }

      psVar23= RuntimeInterface::GetInstance()::instance
      ;
      local_440 = (code*)0x12;
      local_268[0] = (code*)local_258;
      local_268[0] = (code*)std::__cxx11::string::_M_create((ulong*)local_268, ( ulong ) & local_440);
      uVar6 = _UNK_00103ba8;
      uVar4 = __LC24;
      local_258._0_8_ = local_440;
      *(undefined2*)( local_268[0] + 0x10 ) = 0x736c;
      *(undefined8*)local_268[0] = uVar4;
      *(undefined8*)( local_268[0] + 8 ) = uVar6;
      local_268[1] = local_440;
      local_268[0][(long)local_440] = (code)0x0;
      cVar8 = RuntimeInterface::SupportsExtension(psVar23);
      if (local_268[0] != (code*)local_258) {
         operator_delete(local_268[0], local_258._0_8_ + 1);
      }

      if (cVar8 == '\0') {
         if (local_428 == pcStack_430) {
            std::vector<char_const*,std::allocator<char_const*>>::_M_realloc_insert<char_const(&)[128]>(pvVar18, local_428, "XR_EXT_debug_utils");
         }
 else {
            *(char**)pcStack_430 = "XR_EXT_debug_utils";
            pcStack_430 = pcStack_430 + 8;
         }

      }

      pcVar5 = local_428;
      pcVar19 = pcStack_430;
      if (( local_288._8_8_ != local_288._0_8_ ) && ( auVar21 = local_438 ),puVar15 = (undefined8*)local_288._0_8_,puVar13 = (undefined8*)local_288._8_8_,(undefined1[8])pcStack_430 != local_438) {
         do {
            local_4f8 = (undefined8*)( (long)puVar13 - (long)puVar15 >> 3 );
            if (puVar15 != puVar13) {
               lVar20 = (long)puVar13 - (long)puVar15 >> 5;
               pcVar26 = *(char**)auVar21;
               lVar24 = (long)local_4f8;
               puVar25 = puVar15;
               if (0 < lVar20) {
                  do {
                     iVar9 = strcmp(pcVar26, (char*)*puVar25);
                     if (iVar9 == 0) goto LAB_00101937;
                     for (int i = 0; i < 3; i++) {
                        iVar9 = strcmp(pcVar26, (char*)puVar25[( i + 1 )]);
                        if (iVar9 == 0) {
                           puVar25 = puVar25 + ( i + 1 );
                           goto LAB_00101937;
                        }

                     }

                     puVar25 = puVar25 + 4;
                  }
 while ( puVar15 + lVar20 * 4 != puVar25 );
                  lVar24 = (long)puVar13 - (long)puVar25 >> 3;
               }

               if (lVar24 == 2) {
                  LAB_00102b87:iVar9 = strcmp(pcVar26, (char*)*puVar25);
                  if (iVar9 != 0) {
                     puVar25 = puVar25 + 1;
                     LAB_00102a4f:iVar9 = strcmp(pcVar26, (char*)*puVar25);
                     if (iVar9 != 0) goto LAB_00102a70;
                  }

                  LAB_00101937:if (puVar13 != puVar25) {
                     __src = puVar25 + 1;
                     if (puVar13 != __src) {
                        sVar11 = (long)puVar13 - (long)__src;
                        if ((long)sVar11 < 9) {
                           if (sVar11 == 8) {
                              *puVar25 = puVar25[1];
                           }

                        }
 else {
                           memmove(puVar25, __src, sVar11);
                           puVar15 = (undefined8*)local_288._0_8_;
                           puVar13 = (undefined8*)local_288._8_8_;
                        }

                     }

                     puVar13 = puVar13 + -1;
                     local_288._8_8_ = puVar13;
                     local_4f8 = (undefined8*)( (long)puVar13 - (long)puVar15 >> 3 );
                     local_290 = (undefined8*)0x0;
                     if (puVar15 != puVar13) {
                        local_290 = puVar15;
                     }

                     local_298 = SUB84(local_4f8, 0);
                     goto LAB_001019a7;
                  }

               }
 else {
                  if (lVar24 == 3) {
                     iVar9 = strcmp(pcVar26, (char*)*puVar25);
                     if (iVar9 != 0) {
                        puVar25 = puVar25 + 1;
                        goto LAB_00102b87;
                     }

                     goto LAB_00101937;
                  }

                  if (lVar24 == 1) goto LAB_00102a4f;
               }

               LAB_00102a70:local_298 = SUB84(local_4f8, 0);
               local_290 = puVar15;
            }

            LAB_001019a7:auVar21 = ( undefined1[8] )((long)auVar21 + 8);
         }
 while ( (undefined1[8])pcVar19 != auVar21 );
         local_298 = local_4f8._0_4_;
         local_290 = puVar15;
         if (puVar13 == puVar15) {
            local_290 = (undefined8*)0x0;
         }

      }

      ppcVar16 = &local_3d0;
      if (local_438 != (undefined1[8])0x0) {
         operator_delete((void*)local_438, (long)pcVar5 - (long)local_438);
      }

   }

   if (*(long*)*param_4 == *(long*)( *param_4 + 8 )) {
      iVar9 = ( *param_2 )(ppcVar16, &local_448);
   }
 else {
      local_4b8 = 0xffffffffffffffff;
      uVar12 = *(long*)( *param_4 + 8 ) - *(long*)*param_4;
      if (uVar12 < 0x3759f22983759f1) {
         local_4b8 = ( ( uVar12 & 0xfffffffffffffff8 ) * 4 + ( (long)uVar12 >> 3 ) * 5 ) * 8;
      }

      puVar13 = (undefined8*)operator_new__(local_4b8);
      uVar4 = _LC12;
      lVar20 = *(long*)( *param_4 + 8 );
      lVar3 = *(long*)*param_4;
      uVar12 = lVar20 - lVar3;
      lVar24 = ( uVar12 & 0xfffffffffffffff8 ) * 4 + ( (long)uVar12 >> 3 ) * 5;
      puVar15 = puVar13;
      do {
         *puVar15 = uVar4;
         puVar25 = puVar15 + 0x25;
         puVar15[1] = 0x128;
         puVar15 = puVar25;
      }
 while ( puVar13 + lVar24 != puVar25 );
      local_4c8 = param_3;
      local_4c0 = param_1;
      if (lVar3 != lVar20) {
         local_4f8 = (undefined8*)0x0;
         puVar15 = puVar13 + lVar24 + -0x23;
         local_4c8 = param_3;
         local_4c0 = param_1;
         do {
            lVar24 = *(long*)( lVar20 + -8 );
            uVar4 = *(undefined8*)( lVar24 + 0x30 );
            pcVar19 = *(code**)( lVar24 + 0x10 );
            pcVar5 = *(code**)( lVar24 + 0x38 );
            __src_00 = *(undefined1**)( lVar24 + 8 );
            local_438 = (undefined1[8])pcVar19;
            if (pcVar19 < (code*)0x10) {
               if (pcVar19 == (code*)0x1) {
                  local_258[0] = *__src_00;
                  local_268[0] = (code*)local_258;
               }
 else {
                  local_268[0] = (code*)local_258;
                  if (pcVar19 != (code*)0x0) goto LAB_00101c5b;
               }

            }
 else {
               local_268[0] = (code*)local_258;
               local_268[0] = (code*)std::__cxx11::string::_M_create((ulong*)local_268, (ulong)pvVar18);
               local_258._0_8_ = local_438;
               LAB_00101c5b:memcpy(local_268[0], __src_00, (size_t)pcVar19);
            }

            pcVar19 = local_268[0];
            puVar25 = puVar15 + -2;
            local_268[0][(long)local_438] = (code)0x0;
            uVar14 = ( -0x10 - (long)puVar13 ) + (long)puVar15;
            uVar12 = local_4b8;
            if (local_4b8 < uVar14) {
               uVar12 = uVar14;
            }

            uVar12 = uVar12 - uVar14;
            if (uVar12 < 0x10) {
               uVar12 = 0x10;
            }

            uVar12 = uVar12 - 0x10;
            if (0x100 < uVar12) {
               uVar12 = 0x100;
            }

            local_268[1] = (code*)local_438;
            __strncpy_chk(puVar15, local_268[0], 0xff, uVar12);
            if (pcVar19 != (code*)local_258) {
               operator_delete(pcVar19, local_258._0_8_ + 1);
            }

            *(undefined1*)( (long)puVar15 + 0xff ) = 0;
            lVar20 = lVar20 + -8;
            puVar15[0x20] = local_4c0;
            puVar15[0x22] = local_4f8;
            puVar15[0x21] = local_4c8;
            puVar15 = puVar15 + -0x25;
            local_4f8 = puVar25;
            local_4c8 = pcVar5;
            local_4c0 = uVar4;
         }
 while ( *(long*)*param_4 != lVar20 );
      }

      psVar23 = (string*)local_268;
      for (lVar24 = 0x44; lVar24 != 0; lVar24 = lVar24 + -1) {
         *(undefined8*)psVar23 = 0;
         psVar23 = psVar23 + (ulong)bVar27 * -0x10 + 8;
      }

      local_268[1] = (code*)0x220;
      local_268[0] = _LC13;
      local_50 = puVar13;
      iVar9 = ( *local_4c8 )(ppcVar16, local_268, &local_448);
      operator_delete__(puVar13);
      param_1 = local_4c0;
   }

   if (iVar9 < 0) {
      local_4a8 = (ostream*)local_268;
      _local_438 = (undefined1[16])0x0;
      local_428 = (code*)0x0;
      local_440 = (code*)0x41;
      local_3f8 = local_3e8;
      local_3f8 = (code**)std::__cxx11::string::_M_create((ulong*)&local_3f8, ( ulong ) & local_440);
      pcVar19 = _UNK_00103b58;
      local_3e8[0] = local_440;
      *local_3f8 = __LC19;
      local_3f8[1] = pcVar19;
      pcVar5 = _UNK_00103bb8;
      pcVar19 = __LC25;
      *(undefined1*)( local_3f8 + 8 ) = 100;
      local_3f8[2] = pcVar19;
      local_3f8[3] = pcVar5;
      pcVar19 = _UNK_00103bc8;
      local_3f8[4] = __LC26;
      local_3f8[5] = pcVar19;
      pcVar19 = _UNK_00103bd8;
      local_3f8[6] = __LC27;
      local_3f8[7] = pcVar19;
      local_3f0 = local_440;
      *(code*)( (long)local_3f8 + (long)local_440 ) = (code)0x0;
      local_440 = (code*)0x10;
      local_418 = local_408;
      local_418 = (code**)std::__cxx11::string::_M_create((ulong*)&local_418, ( ulong ) & local_440);
      pcVar19 = _UNK_00103b48;
      local_408[0] = local_440;
      *local_418 = __LC18;
      local_418[1] = pcVar19;
      local_410 = local_440;
      *(code*)( (long)local_418 + (long)local_440 ) = (code)0x0;
      if (( LoaderLogger::GetInstance():: ) && ( iVar10 = __cxa_guard_acquire(&LoaderLogger::GetInstance(), ::instance) ),iVar10 != 0) {
         LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
         __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
      }

      local_268[0] = (code*)local_258;
      std::__cxx11::string::_M_construct<char_const*>(local_4a8, "OpenXR-Loader");
      LoaderLogger::LogMessage(0x1039e0, 0x1000, (string*)0x1, (string*)local_4a8, (string*)&local_418, (string*)&local_3f8);
      if (local_268[0] != (code*)local_258) {
         operator_delete(local_268[0], local_258._0_8_ + 1);
      }

      if (local_418 != local_408) {
         operator_delete(local_418, ( ulong )(local_408[0] + 1));
      }

      if (local_3f8 != local_3e8) {
         operator_delete(local_3f8, ( ulong )(local_3e8[0] + 1));
      }

      pcVar19 = pcStack_430;
      auVar21 = local_438;
      if ((undefined1[8])pcStack_430 != local_438) {
         do {
            if (*(void**)( (long)auVar21 + 0x10 ) != (void*)( (long)auVar21 + 0x20 )) {
               operator_delete(*(void**)( (long)auVar21 + 0x10 ), *(long*)( (long)auVar21 + 0x20 ) + 1);
            }

            auVar21 = ( undefined1[8] )((long)auVar21 + 0x30);
         }
 while ( (undefined1[8])pcVar19 != auVar21 );
      }

      if (local_438 != (undefined1[8])0x0) {
         operator_delete((void*)local_438, (long)local_428 - (long)local_438);
      }

      if ((void*)local_288._0_8_ != (void*)0x0) {
         operator_delete((void*)local_288._0_8_, (long)local_278 - local_288._0_8_);
      }

   }
 else {
      local_4a8 = (ostream*)local_268;
      if ((void*)local_288._0_8_ != (void*)0x0) {
         operator_delete((void*)local_288._0_8_, (long)local_278 - local_288._0_8_);
      }

      pLVar17 = (LoaderInstance*)operator_new(0x58);
      local_428 = *(code**)param_4[1];
      *(undefined8*)param_4[1] = 0;
      _local_438 = *param_4;
      *param_4 = (undefined1[16])0x0;
      LoaderInstance(pLVar17, local_448, param_5, param_1, pvVar18);
      this(LoaderInstance * ) * param_6;
      *param_6 = (long)pLVar17;
      if (this != (LoaderInstance*)0x0) {
         if (*(code**)( *(long*)this + 8 ) == ~LoaderInstance) {
            ~LoaderInstance(this)
            ;;
            operator_delete(this, 0x58);
         }
 else {
            ( **(code**)( *(long*)this + 8 ) )();
         }

      }

      auVar7 = local_438;
      pcVar19 = pcStack_430;
      for (auVar21 = local_438; (undefined1[8])pcVar19 != auVar21; auVar21 = ( undefined1[8] )((long)auVar21 + 8)) {
         if (*(long**)auVar21 != (long*)0x0) {
            ( **(code**)( **(long**)auVar21 + 8 ) )();
         }

      }

      if (auVar7 != (undefined1[8])0x0) {
         operator_delete((void*)auVar7, (long)local_428 - (long)auVar7);
      }

      std::ios_base::ios_base((ios_base*)local_1f8);
      local_118 = 0;
      local_110 = (undefined1[16])0x0;
      local_100 = (undefined1[16])0x0;
      lVar24 = *(long*)( _init + -0x18 );
      local_268[0] = _init;
      local_1f8[0] = (code*)&std::__cxx11::ostringstream::vtable;
      local_120 = 0;
      *(undefined8*)( local_4a8 + lVar24 ) = _locale;
      std::ios::init((streambuf*)( local_4a8 + lVar24 ));
      local_1f8[0] = std::__cxx11::string::_M_replace;
      local_258 = (undefined1[16])0x0;
      local_268[0] = (code*)PTR_vtable_00103ac8;
      local_268[1] = (code*)PTR_vtable_00103ac0;
      local_248 = (undefined1[16])0x0;
      local_238 = (undefined1[16])0x0;
      std::locale::locale(local_228);
      local_268[1] = std::ios_base::ios_base;
      local_220 = 0x10;
      local_210 = 0;
      local_208 = 0;
      local_218 = &local_208;
      std::ios::init((streambuf*)local_1f8);
      std::__ostream_insert<char,std::char_traits<char>>(local_4a8, "LoaderInstance::CreateInstance succeeded with ", 0x2e);
      std::ostream::_M_insert<unsigned_long>((ulong)local_4a8);
      std::__ostream_insert<char,std::char_traits<char>>(local_4a8, " layers enabled and runtime interface - created instance = ", 0x3b);
      local_438 = ( undefined1[8] ) * (undefined8*)( *param_6 + 8 );
      local_3d8 = (code**)&local_3c8;
      std::__cxx11::string::_M_construct(( ulong ) & local_3d8, '\x12');
      *(undefined1*)local_3d8 = 0x30;
      *(undefined1*)( (long)local_3d8 + 1 ) = 0x78;
      pcVar19 = local_3d0 + (long)local_3d8;
      do {
         vVar1 = *pvVar18;
         pvVar18 = pvVar18 + 1;
         pcVar19[-1] = (code)to_hex[abi:cxx11](unsigned_char_const * unsigned_long)::hex[(byte)vVar1 & 0xf];
         pcVar19[-2] = (code)to_hex[abi:cxx11](unsigned_char_const * unsigned_long)::hex[(byte)vVar1 >> 4];
         pcVar19 = pcVar19 + -2;
      }
 while ( pvVar18 != (vector<char_const*,std::allocator<char_const*>>*)( local_438 + 8 ) );
      std::__ostream_insert<char,std::char_traits<char>>(local_4a8, (char*)local_3d8, (long)local_3d0);
      if (local_3d8 != (code**)&local_3c8) {
         operator_delete(local_3d8, CONCAT35(local_3c8._5_3_, (undefined5)local_3c8) + 1);
      }

      local_428 = (code*)0x0;
      local_410 = (code*)0x0;
      local_408[0] = (code*)( (ulong)local_408[0] & 0xffffffffffffff00 );
      _local_438 = (undefined1[16])0x0;
      local_418 = local_408;
      if (local_238._0_8_ == 0) {
         std::__cxx11::string::_M_assign((string*)&local_418);
      }
 else {
         std::__cxx11::string::_M_replace(( ulong ) & local_418, 0, (char*)0x0, local_248._8_8_);
      }

      local_440 = (code*)0x10;
      local_3f8 = local_3e8;
      local_3f8 = (code**)std::__cxx11::string::_M_create((ulong*)&local_3f8, ( ulong ) & local_440);
      pcVar19 = _UNK_00103b48;
      local_3e8[0] = local_440;
      *local_3f8 = __LC18;
      local_3f8[1] = pcVar19;
      local_3f0 = local_440;
      *(code*)( (long)local_3f8 + (long)local_440 ) = (code)0x0;
      if (( LoaderLogger::GetInstance():: ) && ( iVar10 = __cxa_guard_acquire(&LoaderLogger::GetInstance(), ::instance) ),iVar10 != 0) {
         LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
         __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
      }

      local_3c8._0_5_ = 0x586e65704f;
      local_3c8._5_3_ = 0x4c2d52;
      uStack_3c0 = 0x726564616f;
      local_3d0 = (code*)0xd;
      local_3bb = 0;
      local_3d8 = (code**)&local_3c8;
      LoaderLogger::LogMessage(0x1039e0, 0x10, (string*)0x1, (string*)&local_3d8, (string*)&local_3f8, (string*)&local_418);
      if (local_3d8 != (code**)&local_3c8) {
         operator_delete(local_3d8, CONCAT35(local_3c8._5_3_, (undefined5)local_3c8) + 1);
      }

      if (local_3f8 != local_3e8) {
         operator_delete(local_3f8, ( ulong )(local_3e8[0] + 1));
      }

      if (local_418 != local_408) {
         operator_delete(local_418, ( ulong )(local_408[0] + 1));
      }

      pcVar19 = pcStack_430;
      auVar21 = local_438;
      if ((undefined1[8])pcStack_430 != local_438) {
         do {
            if (*(void**)( (long)auVar21 + 0x10 ) != (void*)( (long)auVar21 + 0x20 )) {
               operator_delete(*(void**)( (long)auVar21 + 0x10 ), *(long*)( (long)auVar21 + 0x20 ) + 1);
            }

            auVar21 = ( undefined1[8] )((long)auVar21 + 0x30);
         }
 while ( (undefined1[8])pcVar19 != auVar21 );
      }

      if (local_438 != (undefined1[8])0x0) {
         operator_delete((void*)local_438, (long)local_428 - (long)local_438);
      }

      local_1f8[0] = std::__cxx11::string::_M_replace;
      local_268[0] = (code*)PTR_vtable_00103ac8;
      local_268[1] = (code*)PTR_vtable_00103ad0;
      if (local_218 != &local_208) {
         operator_delete(local_218, CONCAT71(uStack_207, local_208) + 1);
      }

      local_268[1] = std::ios_base::~ios_base;
      std::locale::~locale(local_228);
      local_268[0] = _init;
      *(undefined8*)( (long)local_268 + *(long*)( _init + -0x18 ) ) = _locale;
      local_1f8[0] = (code*)&std::__cxx11::ostringstream::vtable;
      std::ios_base::~ios_base((ios_base*)local_1f8);
   }

   LAB_0010268e:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar9;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::unique_ptr<RuntimeInterface, std::default_delete<RuntimeInterface> >::~unique_ptr() */void std::unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>>::~unique_ptr(unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>> *this) {
   if (*(long**)this != (long*)0x0) {
      /* WARNING: Could not recover jumptable at 0x00102cef. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( **(long**)this + 8 ) )();
      return;
   }

   return;
}
/* std::unique_ptr<LoaderInstance, std::default_delete<LoaderInstance> >::~unique_ptr() */void std::unique_ptr<LoaderInstance,std::default_delete<LoaderInstance>>::~unique_ptr(unique_ptr<LoaderInstance,std::default_delete<LoaderInstance>> *this) {
   LoaderInstance *this_00;
   this_00 = *(LoaderInstance**)this;
   if (this_00 == (LoaderInstance*)0x0) {
      return;
   }

   if (*(code**)( *(long*)this_00 + 8 ) == LoaderInstance::~LoaderInstance) {
      LoaderInstance::~LoaderInstance(this_00);
      operator_delete(this_00, 0x58);
      return;
   }

   /* WARNING: Could not recover jumptable at 0x00102da9. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *(long*)this_00 + 8 ) )();
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
   std::__detail::_Hashtable_traits<false, false, true> >::clear() */void std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::clear(_Hashtable<XrSession_T*,std::pair<XrSession_T*const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator < std::unique_ptr < XrSdkSessionLabel,std::default_delete < XrSdkSessionLabel>>>>, std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>, >>, std::allocator<std::pair<XrSession_T*const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr < XrSdkSessionLabel,std::default_delete < XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>, >>, std::__detail::_Select1st, std::equal_to<XrSession_T*>, std::hash<XrSession_T*>, std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false,false,true> > *this) {
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
/* LoaderLogger::~LoaderLogger() */void LoaderLogger::~LoaderLogger(LoaderLogger *this) {
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

   std::_Hashtable<XrSession_T*,std::pair<XrSession_T * const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator < std::unique_ptr < XrSdkSessionLabel,std::default_delete < XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>> >> std::allocator<std::pair<XrSession_T * const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete < XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>> > std::__detail::_Select1st,std::equal_to<XrSession_T*>,std::hash<XrSession_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> > ::clear(( _Hashtable<XrSession_T*,std::pair<XrSession_T*const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator < std::unique_ptr < XrSdkSessionLabel,std::default_delete < XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>> >> std::allocator<std::pair<XrSession_T * const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete < XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>> > std::__detail::_Select1st,std::equal_to<XrSession_T*>,std::hash<XrSession_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> > * )(this + 0x88));
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
/* void std::vector<char const*, std::allocator<char const*> >::_M_realloc_insert<char const*
   const&>(__gnu_cxx::__normal_iterator<char const**, std::vector<char const*, std::allocator<char
   const*> > >, char const* const&) */void std::vector<char_const*,std::allocator<char_const*>>::_M_realloc_insert<char_const*const&>(vector<char_const*,std::allocator<char_const*>> *this, void *param_2, undefined8 *param_3) {
   void *__dest;
   void *pvVar1;
   void *__src;
   ulong uVar2;
   void *__dest_00;
   ulong uVar3;
   size_t __n;
   long lVar4;
   size_t __n_00;
   pvVar1 = *(void**)( this + 8 );
   __src = *(void**)this;
   uVar2 = (long)pvVar1 - (long)__src >> 3;
   if (uVar2 == 0xfffffffffffffff) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
   }

   __n = (long)param_2 - (long)__src;
   if (__src == pvVar1) {
      if (0xfffffffffffffffe < uVar2) goto LAB_00103220;
      uVar3 = 0xfffffffffffffff;
      if (uVar2 + 1 < 0x1000000000000000) {
         uVar3 = uVar2 + 1;
      }

      uVar3 = uVar3 << 3;
      LAB_0010322a:__dest_00 = operator_new(uVar3);
      lVar4 = uVar3 + (long)__dest_00;
   }
 else {
      uVar3 = uVar2 * 2;
      if (uVar3 < uVar2) {
         LAB_00103220:uVar3 = 0x7ffffffffffffff8;
         goto LAB_0010322a;
      }

      if (uVar3 != 0) {
         if (0xfffffffffffffff < uVar3) {
            uVar3 = 0xfffffffffffffff;
         }

         uVar3 = uVar3 * 8;
         goto LAB_0010322a;
      }

      lVar4 = 0;
      __dest_00 = (void*)0x0;
   }

   __dest = (void*)( (long)__dest_00 + __n + 8 );
   __n_00 = (long)pvVar1 - (long)param_2;
   *(undefined8*)( (long)__dest_00 + __n ) = *param_3;
   if ((long)__n < 1) {
      if (0 < (long)__n_00) {
         memcpy(__dest, param_2, __n_00);
      }

      if (__src == (void*)0x0) goto LAB_001031fc;
   }
 else {
      __dest_00 = memmove(__dest_00, __src, __n);
      if (0 < (long)__n_00) {
         memcpy(__dest, param_2, __n_00);
      }

   }

   operator_delete(__src, *(long*)( this + 0x10 ) - (long)__src);
   LAB_001031fc:*(void**)this = __dest_00;
   *(size_t*)( this + 8 ) = (long)__dest + __n_00;
   *(long*)( this + 0x10 ) = lVar4;
   return;
}
/* void std::vector<char const*, std::allocator<char const*> >::_M_realloc_insert<char const (&)
   [128]>(__gnu_cxx::__normal_iterator<char const**, std::vector<char const*, std::allocator<char
   const*> > >, char const (&) [128]) */void std::vector<char_const*,std::allocator<char_const*>>::_M_realloc_insert<char_const(&)[128]>(vector<char_const*,std::allocator<char_const*>> *this, void *param_2, undefined8 param_3) {
   void *__dest;
   void *pvVar1;
   void *__src;
   ulong uVar2;
   void *__dest_00;
   ulong uVar3;
   size_t __n;
   long lVar4;
   size_t __n_00;
   pvVar1 = *(void**)( this + 8 );
   __src = *(void**)this;
   uVar2 = (long)pvVar1 - (long)__src >> 3;
   if (uVar2 == 0xfffffffffffffff) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
   }

   __n = (long)param_2 - (long)__src;
   if (__src == pvVar1) {
      if (0xfffffffffffffffe < uVar2) goto LAB_001033a8;
      uVar3 = 0xfffffffffffffff;
      if (uVar2 + 1 < 0x1000000000000000) {
         uVar3 = uVar2 + 1;
      }

      uVar3 = uVar3 << 3;
      LAB_001033b2:__dest_00 = operator_new(uVar3);
      lVar4 = uVar3 + (long)__dest_00;
   }
 else {
      uVar3 = uVar2 * 2;
      if (uVar3 < uVar2) {
         LAB_001033a8:uVar3 = 0x7ffffffffffffff8;
         goto LAB_001033b2;
      }

      if (uVar3 != 0) {
         if (0xfffffffffffffff < uVar3) {
            uVar3 = 0xfffffffffffffff;
         }

         uVar3 = uVar3 * 8;
         goto LAB_001033b2;
      }

      lVar4 = 0;
      __dest_00 = (void*)0x0;
   }

   __dest = (void*)( (long)__dest_00 + __n + 8 );
   __n_00 = (long)pvVar1 - (long)param_2;
   *(undefined8*)( (long)__dest_00 + __n ) = param_3;
   if ((long)__n < 1) {
      if (0 < (long)__n_00) {
         memcpy(__dest, param_2, __n_00);
      }

      if (__src == (void*)0x0) goto LAB_00103389;
   }
 else {
      __dest_00 = memmove(__dest_00, __src, __n);
      if (0 < (long)__n_00) {
         memcpy(__dest, param_2, __n_00);
      }

   }

   operator_delete(__src, *(long*)( this + 0x10 ) - (long)__src);
   LAB_00103389:*(void**)this = __dest_00;
   *(size_t*)( this + 8 ) = (long)__dest + __n_00;
   *(long*)( this + 0x10 ) = lVar4;
   return;
}
/* void std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string >
   >::_M_realloc_insert<std::__cxx11::string >(__gnu_cxx::__normal_iterator<std::__cxx11::string*,
   std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string > > >,
   std::__cxx11::string&&) */void std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::_M_realloc_insert<std::__cxx11::string>(vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *this, void *param_2, long *param_3) {
   long *plVar1;
   void *pvVar2;
   void *pvVar3;
   long *plVar4;
   ulong uVar5;
   long *plVar6;
   long *plVar7;
   ulong uVar8;
   long *plVar9;
   long *plVar10;
   long lVar11;
   uint uVar12;
   uint uVar13;
   long lVar14;
   long lVar15;
   pvVar2 = *(void**)( this + 8 );
   pvVar3 = *(void**)this;
   uVar5 = (long)pvVar2 - (long)pvVar3 >> 5;
   if (uVar5 == 0x3ffffffffffffff) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
   }

   if (pvVar3 == pvVar2) {
      if (0xfffffffffffffffe < uVar5) goto LAB_001035a8;
      uVar8 = 0x3ffffffffffffff;
      if (uVar5 + 1 < 0x400000000000000) {
         uVar8 = uVar5 + 1;
      }

      uVar8 = uVar8 << 5;
   }
 else {
      uVar8 = uVar5 * 2;
      if (uVar8 < uVar5) {
         LAB_001035a8:uVar8 = 0x7fffffffffffffe0;
      }
 else {
         if (uVar8 == 0) {
            plVar6 = (long*)0x20;
            lVar11 = 0;
            plVar7 = (long*)0x0;
            goto LAB_001034dd;
         }

         if (0x3ffffffffffffff < uVar8) {
            uVar8 = 0x3ffffffffffffff;
         }

         uVar8 = uVar8 << 5;
      }

   }

   plVar7 = (long*)operator_new(uVar8);
   lVar11 = uVar8 + (long)plVar7;
   plVar6 = plVar7 + 4;
   LAB_001034dd:plVar9 = (long*)( ( (long)param_2 - (long)pvVar3 ) + (long)plVar7 );
   lVar15 = *param_3;
   plVar10 = param_3 + 2;
   lVar14 = param_3[1];
   *plVar9 = (long)( plVar9 + 2 );
   if ((long*)lVar15 == plVar10) {
      uVar5 = lVar14 + 1;
      uVar12 = (uint)uVar5;
      if (uVar12 < 8) {
         if (( uVar5 & 4 ) == 0) {
            if (( uVar12 != 0 ) && ( *(char*)( plVar9 + 2 ) = (char)param_3[2](uVar5 & 2) != 0 )) {
               *(undefined2*)( (long)plVar9 + ( uVar5 & 0xffffffff ) + 0xe ) = *(undefined2*)( (long)param_3 + ( uVar5 & 0xffffffff ) + 0xe );
            }

         }
 else {
            *(int*)( plVar9 + 2 ) = (int)param_3[2];
            *(undefined4*)( (long)plVar9 + ( uVar5 & 0xffffffff ) + 0xc ) = *(undefined4*)( (long)param_3 + ( uVar5 & 0xffffffff ) + 0xc );
         }

      }
 else {
         plVar9[2] = param_3[2];
         *(undefined8*)( (long)plVar9 + ( uVar5 & 0xffffffff ) + 8 ) = *(undefined8*)( (long)param_3 + ( uVar5 & 0xffffffff ) + 8 );
         lVar15 = (long)( plVar9 + 2 ) - ( ( ulong )(plVar9 + 3) & 0xfffffffffffffff8 );
         uVar12 = uVar12 + (int)lVar15 & 0xfffffff8;
         if (7 < uVar12) {
            uVar13 = 0;
            do {
               uVar5 = (ulong)uVar13;
               uVar13 = uVar13 + 8;
               *(undefined8*)( ( ( ulong )(plVar9 + 3) & 0xfffffffffffffff8 ) + uVar5 ) = *(undefined8*)( (long)plVar10 + ( uVar5 - lVar15 ) );
            }
 while ( uVar13 < uVar12 );
         }

      }

   }
 else {
      *plVar9 = lVar15;
      plVar9[2] = param_3[2];
   }

   plVar9[1] = lVar14;
   *param_3 = (long)plVar10;
   param_3[1] = 0;
   *(undefined1*)( param_3 + 2 ) = 0;
   if (param_2 != pvVar3) {
      plVar10 = (long*)( (long)pvVar3 + 0x10 );
      plVar6 = (long*)( ( (long)param_2 - (long)pvVar3 ) + (long)plVar7 );
      plVar9 = plVar7;
      do {
         plVar1 = plVar9 + 2;
         lVar15 = plVar10[-1];
         *plVar9 = (long)plVar1;
         if (plVar10 == (long*)plVar10[-2]) {
            uVar5 = lVar15 + 1;
            uVar12 = (uint)uVar5;
            if (uVar12 < 8) {
               if (( uVar5 & 4 ) == 0) {
                  if (uVar12 != 0) {
                     *(char*)plVar1 = (char)*plVar10;
                     if (( uVar5 & 2 ) == 0) goto LAB_0010359b;
                     *(undefined2*)( (long)plVar9 + ( uVar5 & 0xffffffff ) + 0xe ) = *(undefined2*)( (long)plVar10 + ( ( uVar5 & 0xffffffff ) - 2 ) );
                     lVar15 = plVar10[-1];
                  }

               }
 else {
                  *(int*)plVar1 = (int)*plVar10;
                  *(undefined4*)( (long)plVar9 + ( uVar5 & 0xffffffff ) + 0xc ) = *(undefined4*)( (long)plVar10 + ( ( uVar5 & 0xffffffff ) - 4 ) );
                  lVar15 = plVar10[-1];
               }

            }
 else {
               *plVar1 = *plVar10;
               *(undefined8*)( (long)plVar9 + ( uVar5 & 0xffffffff ) + 8 ) = *(undefined8*)( (long)plVar10 + ( ( uVar5 & 0xffffffff ) - 8 ) );
               lVar15 = (long)plVar1 - ( ( ulong )(plVar9 + 3) & 0xfffffffffffffff8 );
               uVar12 = uVar12 + (int)lVar15 & 0xfffffff8;
               if (7 < uVar12) {
                  uVar13 = 0;
                  do {
                     uVar5 = (ulong)uVar13;
                     uVar13 = uVar13 + 8;
                     *(undefined8*)( ( ( ulong )(plVar9 + 3) & 0xfffffffffffffff8 ) + uVar5 ) = *(undefined8*)( (long)plVar10 + ( uVar5 - lVar15 ) );
                  }
 while ( uVar13 < uVar12 );
               }

               LAB_0010359b:lVar15 = plVar10[-1];
            }

         }
 else {
            *plVar9 = plVar10[-2];
            plVar9[2] = *plVar10;
         }

         plVar9[1] = lVar15;
         plVar9 = plVar9 + 4;
         plVar10 = plVar10 + 4;
      }
 while ( plVar6 != plVar9 );
      plVar6 = plVar6 + 4;
   }

   plVar10 = plVar6;
   if (param_2 != pvVar2) {
      plVar9 = (long*)( (long)param_2 + 0x10 );
      plVar10 = (long*)( ( (long)pvVar2 - (long)param_2 ) + (long)plVar6 );
      do {
         plVar4 = (long*)plVar9[-2];
         plVar1 = plVar6 + 2;
         lVar15 = plVar9[-1];
         *plVar6 = (long)plVar1;
         if (plVar9 == plVar4) {
            uVar5 = lVar15 + 1;
            uVar12 = (uint)uVar5;
            if (uVar12 < 8) {
               if (( uVar5 & 4 ) == 0) {
                  if (( uVar12 != 0 ) && ( *(char*)plVar1 = (char)*plVar9(uVar5 & 2) != 0 )) {
                     *(undefined2*)( (long)plVar6 + ( uVar5 & 0xffffffff ) + 0xe ) = *(undefined2*)( (long)plVar9 + ( ( uVar5 & 0xffffffff ) - 2 ) );
                  }

               }
 else {
                  *(int*)plVar1 = (int)*plVar9;
                  *(undefined4*)( (long)plVar6 + ( uVar5 & 0xffffffff ) + 0xc ) = *(undefined4*)( (long)plVar9 + ( ( uVar5 & 0xffffffff ) - 4 ) );
               }

            }
 else {
               *plVar1 = *plVar9;
               *(undefined8*)( (long)plVar6 + ( uVar5 & 0xffffffff ) + 8 ) = *(undefined8*)( (long)plVar9 + ( ( uVar5 & 0xffffffff ) - 8 ) );
               lVar14 = (long)plVar1 - ( ( ulong )(plVar6 + 3) & 0xfffffffffffffff8 );
               uVar12 = uVar12 + (int)lVar14 & 0xfffffff8;
               if (7 < uVar12) {
                  uVar13 = 0;
                  do {
                     uVar5 = (ulong)uVar13;
                     uVar13 = uVar13 + 8;
                     *(undefined8*)( ( ( ulong )(plVar6 + 3) & 0xfffffffffffffff8 ) + uVar5 ) = *(undefined8*)( (long)plVar9 + ( uVar5 - lVar14 ) );
                  }
 while ( uVar13 < uVar12 );
               }

            }

         }
 else {
            *plVar6 = (long)plVar4;
            plVar6[2] = *plVar9;
         }

         plVar6[1] = lVar15;
         plVar6 = plVar6 + 4;
         plVar9 = plVar9 + 4;
      }
 while ( plVar6 != plVar10 );
   }

   if (pvVar3 != (void*)0x0) {
      operator_delete(pvVar3, *(long*)( this + 0x10 ) - (long)pvVar3);
   }

   *(long**)this = plVar7;
   *(long**)( this + 8 ) = plVar10;
   *(long*)( this + 0x10 ) = lVar11;
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* LoaderLogger::~LoaderLogger() */void LoaderLogger::~LoaderLogger(LoaderLogger *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* std::unique_ptr<LoaderInstance, std::default_delete<LoaderInstance> >::~unique_ptr() */void std::unique_ptr<LoaderInstance,std::default_delete<LoaderInstance>>::~unique_ptr(unique_ptr<LoaderInstance,std::default_delete<LoaderInstance>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* std::unique_ptr<RuntimeInterface, std::default_delete<RuntimeInterface> >::~unique_ptr() */void std::unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>>::~unique_ptr(unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

