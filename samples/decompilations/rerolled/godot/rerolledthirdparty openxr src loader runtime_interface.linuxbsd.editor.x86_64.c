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
         goto LAB_00100044;
      }

      if (__n == 0) goto LAB_00100044;
   }
 else {
      __dest = (undefined1*)std::__cxx11::string::_M_create(param_1, ( ulong ) & local_28);
      *param_1 = (ulong)__dest;
      param_1[2] = local_28;
   }

   memcpy(__dest, param_2, __n);
   __dest = (undefined1*)*param_1;
   LAB_00100044:param_1[1] = local_28;
   __dest[local_28] = 0;
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void std::__cxx11::string::_M_construct<char*>(char*, char*, std::forward_iterator_tag) [clone
   .isra.0] */void std::__cxx11::string::_M_construct<char*>(ulong *param_1, undefined1 *param_2, long param_3) {
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
         goto LAB_001000f4;
      }

      if (__n == 0) goto LAB_001000f4;
   }
 else {
      __dest = (undefined1*)std::__cxx11::string::_M_create(param_1, ( ulong ) & local_28);
      *param_1 = (ulong)__dest;
      param_1[2] = local_28;
   }

   memcpy(__dest, param_2, __n);
   __dest = (undefined1*)*param_1;
   LAB_001000f4:param_1[1] = local_28;
   __dest[local_28] = 0;
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* std::_Hashtable<XrInstance_T*, std::pair<XrInstance_T* const,
   std::unique_ptr<XrGeneratedDispatchTableCore, std::default_delete<XrGeneratedDispatchTableCore> >
   >, std::allocator<std::pair<XrInstance_T* const, std::unique_ptr<XrGeneratedDispatchTableCore,
   std::default_delete<XrGeneratedDispatchTableCore> > > >, std::__detail::_Select1st,
   std::equal_to<XrInstance_T*>, std::hash<XrInstance_T*>, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, false, true> >::find(XrInstance_T* const&) [clone
   .isra.0] */undefined8 * __thiscallstd::_Hashtable<XrInstance_T*,std::pair<XrInstance_T*const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete<XrGeneratedDispatchTableCore>>>,std::allocator<std::pair<XrInstance_T*const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete<XrGeneratedDispatchTableCore>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::find(_Hashtable<XrInstance_T*,std::pair<XrInstance_T*const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete < XrGeneratedDispatchTableCore>>>, std::allocator<std::pair<XrInstance_T * const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete<XrGeneratedDispatchTableCore>>>>, std::__detail::_Select1st, std::equal_to<XrInstance_T*>, std::hash<XrInstance_T*>, std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false,false,true> > *this, XrInstance_T * *param_1) * *ppXVar1 ;undefined8 *puVar2undefined8 *puVar3undefined8 *puVar4ulong uVar5if (*(long*)( this + 0x18 ) == 0) {
   for (puVar4 = *(undefined8**)( this + 0x10 ); ( puVar4 != (undefined8*)0x0 && ( (XrInstance_T**)puVar4[1] != param_1 ) ); puVar4 = (undefined8*)*puVar4) {}
}
 else {
   uVar5 = (ulong)param_1 % *(ulong*)( this + 8 );
   puVar4 = *(undefined8**)( *(long*)this + uVar5 * 8 );
   if (puVar4 != (undefined8*)0x0) {
      ppXVar1 = (XrInstance_T**)( (undefined8*)*puVar4 )[1];
      puVar3 = (undefined8*)*puVar4;
      do {
         if (param_1 == ppXVar1) {
            return (undefined8*)*puVar4;
         }

         puVar2 = (undefined8*)*puVar3;
      }
 while ( ( puVar2 != (undefined8*)0x0 ) && ( ppXVar1 = (XrInstance_T**)puVar2[1] ),puVar4 = puVar3,puVar3 = puVar2,uVar5 == (ulong)ppXVar1 % *(ulong*)( this + 8 ) );
      puVar4 = (undefined8*)0x0;
   }

}
return puVar4;}/* std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string >
   >::TEMPNAMEPLACEHOLDERVALUE(std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string
   > > const&) [clone .isra.0] */void std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::operator =(vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *this, vector *param_1) {
   undefined8 *puVar1;
   int iVar2;
   long *plVar3;
   ulong uVar4;
   ulong uVar5;
   undefined8 extraout_RDX;
   long *plVar6;
   long *plVar7;
   undefined8 *puVar8;
   string *psVar9;
   long lVar10;
   long *plVar11;
   string *psVar12;
   string *psVar13;
   if (param_1 == (vector*)this) {
      return;
   }

   plVar11 = *(long**)( param_1 + 8 );
   plVar6 = *(long**)param_1;
   psVar12 = *(string**)this;
   uVar4 = (long)plVar11 - (long)plVar6;
   if (( ulong )(*(long*)( this + 0x10 ) - (long)psVar12) < uVar4) {
      if (0x7fffffffffffffe0 < uVar4) {
         std::__throw_bad_array_new_length();
         if (( RuntimeInterface::GetInstance():: ) && ( iVar2 = __cxa_guard_acquire(&RuntimeInterface::GetInstance(), ::instance) ),iVar2 != 0) {
            __cxa_atexit(unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>>::~unique_ptr, &RuntimeInterface::GetInstance(), ::instance, &__dso_handle);
            __cxa_guard_release(&RuntimeInterface::GetInstance(), ::instance);
         }

         /* WARNING: Could not recover jumptable at 0x00100490. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( **(code**)( RuntimeInterface::GetInstance():: ) )(this, param_1, extraout_RDX);
         return;
      }

      plVar3 = (long*)operator_new(uVar4);
      plVar7 = plVar3;
      for (; plVar11 != plVar6; plVar6 = plVar6 + 4) {
         lVar10 = plVar6[1];
         *plVar7 = (long)( plVar7 + 2 );
         __cxx11::string::_M_construct<char*>(plVar7, *plVar6, lVar10 + *plVar6);
         plVar7 = plVar7 + 4;
      }

      puVar1 = *(undefined8**)( this + 8 );
      puVar8 = *(undefined8**)this;
      if (puVar1 != puVar8) {
         do {
            if ((undefined8*)*puVar8 != puVar8 + 2) {
               operator_delete((undefined8*)*puVar8, puVar8[2] + 1);
            }

            puVar8 = puVar8 + 4;
         }
 while ( puVar1 != puVar8 );
         puVar8 = *(undefined8**)this;
      }

      if (puVar8 != (undefined8*)0x0) {
         operator_delete(puVar8, *(long*)( this + 0x10 ) - (long)puVar8);
      }

      *(long**)this = plVar3;
      psVar12 = (string*)( (long)plVar3 + uVar4 );
      *(string**)( this + 0x10 ) = psVar12;
   }
 else {
      psVar9 = *(string**)( this + 8 );
      uVar5 = (long)psVar9 - (long)psVar12;
      if (uVar5 < uVar4) {
         if (0 < (long)uVar5) {
            plVar11 = (long*)( (long)plVar6 + uVar5 );
            do {
               plVar6 = plVar6 + 4;
               std::__cxx11::string::_M_assign(psVar12);
               psVar12 = psVar12 + 0x20;
            }
 while ( plVar6 != plVar11 );
            psVar9 = *(string**)( this + 8 );
            psVar12 = *(string**)this;
            plVar11 = *(long**)( param_1 + 8 );
            plVar6 = *(long**)param_1;
            uVar5 = (long)psVar9 - (long)psVar12;
         }

         plVar7 = (long*)( (long)plVar6 + uVar5 );
         if ((long*)( (long)plVar6 + uVar5 ) == plVar11) {
            psVar12 = psVar12 + uVar4;
            goto LAB_001002c3;
         }

         do {
            plVar6 = plVar7 + 4;
            *(string**)psVar9 = psVar9 + 0x10;
            __cxx11::string::_M_construct<char*>(psVar9, *plVar7, plVar7[1] + *plVar7);
            plVar7 = plVar6;
            psVar9 = psVar9 + 0x20;
         }
 while ( plVar6 != plVar11 );
      }
 else {
         if (0 < (long)uVar4) {
            lVar10 = (long)uVar4 >> 5;
            psVar13 = psVar12;
            do {
               std::__cxx11::string::_M_assign(psVar13);
               lVar10 = lVar10 + -1;
               psVar13 = psVar13 + 0x20;
            }
 while ( lVar10 != 0 );
            uVar5 = 0x20;
            if (0 < (long)uVar4) {
               uVar5 = uVar4;
            }

            psVar12 = psVar12 + uVar5;
         }

         for (; psVar9 != psVar12; psVar12 = psVar12 + 0x20) {
            if (*(string**)psVar12 != psVar12 + 0x10) {
               operator_delete(*(string**)psVar12, *(long*)( psVar12 + 0x10 ) + 1);
            }

         }

      }

      psVar12 = (string*)( uVar4 + *(long*)this );
   }

   LAB_001002c3:*(string**)( this + 8 ) = psVar12;
   return;
}
/* RuntimeInterface::GetInstanceProcAddr(XrInstance_T*, char const*, void (**)()) */void RuntimeInterface::GetInstanceProcAddr(XrInstance_T *param_1, char *param_2, _func_void *param_3) {
   int iVar1;
   if (GetInstance() == '\0') {
      iVar1 = __cxa_guard_acquire(&GetInstance(), ::instance);
      if (iVar1 != 0) {
         __cxa_atexit(std::unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>>::~unique_ptr, &GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&GetInstance(), ::instance);
      }

   }

   /* WARNING: Could not recover jumptable at 0x00100490. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( GetInstance() ) )(param_1, param_2, param_3);
   return;
}
/* RuntimeInterface::GetDispatchTable(XrInstance_T*) */long RuntimeInterface::GetDispatchTable(XrInstance_T *param_1) {
   pthread_mutex_t *__mutex;
   int iVar1;
   long lVar2;
   if (GetInstance() == '\0') {
      iVar1 = __cxa_guard_acquire(&GetInstance(), ::instance);
      if (iVar1 != 0) {
         __cxa_atexit(std::unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>>::~unique_ptr, &GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&GetInstance(), ::instance);
      }

   }

   __mutex = (pthread_mutex_t*)( GetInstance() );
   iVar1 = pthread_mutex_lock(__mutex);
   if (iVar1 == 0) {
      if (GetInstance() == '\0') {
         iVar1 = __cxa_guard_acquire(&GetInstance(), ::instance);
         if (iVar1 != 0) {
            __cxa_atexit(std::unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>>::~unique_ptr, &GetInstance(), ::instance, &__dso_handle);
            __cxa_guard_release(&GetInstance(), ::instance);
         }

      }

      lVar2 = std::_Hashtable<XrInstance_T*,std::pair<XrInstance_T*const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete < XrGeneratedDispatchTableCore>>>,std::allocator<std::pair<XrInstance_T*const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete<XrGeneratedDispatchTableCore>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> > ::find(( _Hashtable<XrInstance_T*,std::pair<XrInstance_T*const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete < XrGeneratedDispatchTableCore>>>,std::allocator<std::pair<XrInstance_T * const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete<XrGeneratedDispatchTableCore>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> > * )(GetInstance() + 0x18), (XrInstance_T**)param_1);
      if (GetInstance() == '\0') {
         iVar1 = __cxa_guard_acquire(&GetInstance(), ::instance);
         if (iVar1 != 0) {
            __cxa_atexit(std::unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>>::~unique_ptr, &GetInstance(), ::instance, &__dso_handle);
            __cxa_guard_release(&GetInstance(), ::instance);
         }

      }

      if (lVar2 != 0) {
         lVar2 = *(long*)( lVar2 + 0x10 );
      }

      pthread_mutex_unlock(__mutex);
      return lVar2;
   }

   /* WARNING: Subroutine does not return */
   std::__throw_system_error(iVar1);
}
/* RuntimeInterface::GetDebugUtilsMessengerDispatchTable(XrDebugUtilsMessengerEXT_T*) */void RuntimeInterface::GetDebugUtilsMessengerDispatchTable(XrDebugUtilsMessengerEXT_T *param_1) {
   pthread_mutex_t *__mutex;
   XrDebugUtilsMessengerEXT_T *pXVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   int iVar4;
   ulong uVar5;
   undefined8 *puVar6;
   XrInstance_T *pXVar7;
   if (( GetInstance() ) && ( iVar4 = __cxa_guard_acquire(&GetInstance(), ::instance) ),iVar4 != 0) {
      __cxa_atexit(std::unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>>::~unique_ptr, &GetInstance(), ::instance, &__dso_handle);
      __cxa_guard_release(&GetInstance(), ::instance);
   }

   __mutex = (pthread_mutex_t*)( GetInstance() );
   iVar4 = pthread_mutex_lock(__mutex);
   if (iVar4 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar4);
   }

   if (( GetInstance() ) && ( iVar4 = __cxa_guard_acquire(&GetInstance(), ::instance) ),iVar4 != 0) {
      __cxa_atexit(std::unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>>::~unique_ptr, &GetInstance(), ::instance, &__dso_handle);
      __cxa_guard_release(&GetInstance(), ::instance);
   }

   if (*(long*)( GetInstance() ) == 0) {
      for (puVar6 = *(undefined8**)( GetInstance() ); puVar6 != (undefined8*)0x0; puVar6 = (undefined8*)*puVar6) {
         if ((XrDebugUtilsMessengerEXT_T*)puVar6[1] == param_1) {
            if (( GetInstance() ) && ( iVar4 = __cxa_guard_acquire(&GetInstance(), ::instance) ),iVar4 != 0) {
               __cxa_atexit(std::unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>>::~unique_ptr, &GetInstance(), ::instance, &__dso_handle);
               __cxa_guard_release(&GetInstance(), ::instance);
            }

            LAB_001006c5:pXVar7 = (XrInstance_T*)puVar6[2];
            goto LAB_001006c9;
         }

      }

   }
 else {
      uVar5 = (ulong)param_1 % *(ulong*)( GetInstance() );
      puVar6 = *(undefined8**)( *(long*)( GetInstance() ) + uVar5 * 8 );
      if (puVar6 != (undefined8*)0x0) {
         pXVar1 = (XrDebugUtilsMessengerEXT_T*)( (undefined8*)*puVar6 )[1];
         puVar3 = (undefined8*)*puVar6;
         do {
            if (pXVar1 == param_1) {
               puVar6 = (undefined8*)*puVar6;
               if (( GetInstance() ) && ( iVar4 = __cxa_guard_acquire(&GetInstance(), ::instance) ),iVar4 != 0) {
                  __cxa_atexit(std::unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>>::~unique_ptr, &GetInstance(), ::instance, &__dso_handle);
                  __cxa_guard_release(&GetInstance(), ::instance);
               }

               if (puVar6 != (undefined8*)0x0) goto LAB_001006c5;
               pXVar7 = (XrInstance_T*)0x0;
               goto LAB_001006c9;
            }

            puVar2 = (undefined8*)*puVar3;
         }
 while ( ( puVar2 != (undefined8*)0x0 ) && ( pXVar1 = (XrDebugUtilsMessengerEXT_T*)puVar2[1] ),puVar6 = puVar3,puVar3 = puVar2,uVar5 == (ulong)pXVar1 % *(ulong*)( GetInstance() ) );
      }

   }

   if (( GetInstance() ) && ( iVar4 = __cxa_guard_acquire(&GetInstance(), ::instance) ),iVar4 != 0) {
      __cxa_atexit(std::unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>>::~unique_ptr, &GetInstance(), ::instance, &__dso_handle);
      pXVar7 = (XrInstance_T*)0x0;
      __cxa_guard_release(&GetInstance(), ::instance);
   }
 else {
      pXVar7 = (XrInstance_T*)0x0;
   }

   LAB_001006c9:pthread_mutex_unlock(__mutex);
   GetDispatchTable(pXVar7);
   return;
}
/* RuntimeInterface::RuntimeInterface(void*, XrResult (*)(XrInstance_T*, char const*, void (**)()))
    */void RuntimeInterface::RuntimeInterface(RuntimeInterface *this, void *param_1, _func_XrResult_XrInstance_T_ptr_char_ptr__func_void_ptr *param_2) {
   undefined4 uVar1;
   uVar1 = _LC0;
   *(void**)( this + 8 ) = param_1;
   *(undefined***)this = &PTR__RuntimeInterface_001058f8;
   *(RuntimeInterface**)( this + 0x18 ) = this + 0x48;
   *(undefined1(*) [16])( this + 0x50 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x60 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xb0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xc0 ) = (undefined1[16])0x0;
   *(_func_XrResult_XrInstance_T_ptr_char_ptr__func_void_ptr**)( this + 0x10 ) = param_2;
   *(undefined8*)( this + 0x20 ) = 1;
   *(undefined8*)( this + 0x28 ) = 0;
   *(undefined8*)( this + 0x30 ) = 0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined8*)( this + 0x48 ) = 0;
   *(undefined8*)( this + 0x70 ) = 0;
   *(RuntimeInterface**)( this + 0x78 ) = this + 0xa8;
   *(undefined8*)( this + 0x80 ) = 1;
   *(undefined8*)( this + 0x88 ) = 0;
   *(undefined8*)( this + 0x90 ) = 0;
   *(undefined8*)( this + 0xa0 ) = 0;
   *(undefined8*)( this + 0xa8 ) = 0;
   *(undefined8*)( this + 0xd0 ) = 0;
   *(undefined8*)( this + 0xe8 ) = 0;
   *(undefined4*)( this + 0x38 ) = uVar1;
   *(undefined4*)( this + 0x98 ) = uVar1;
   *(undefined1(*) [16])( this + 0xd8 ) = (undefined1[16])0x0;
   return;
}
/* RuntimeInterface::DestroyInstance(XrInstance_T*) */undefined8 RuntimeInterface::DestroyInstance(RuntimeInterface *this, XrInstance_T *param_1) {
   long *plVar1;
   long lVar2;
   int iVar3;
   RuntimeInterface *pRVar4;
   RuntimeInterface *pRVar5;
   RuntimeInterface *pRVar6;
   ulong uVar7;
   ulong uVar8;
   long lVar9;
   long in_FS_OFFSET;
   code *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (XrInstance_T*)0x0) goto LAB_00100aaf;
   iVar3 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x50 ));
   if (iVar3 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar3);
   }

   pRVar4 = (RuntimeInterface*)std::_Hashtable<XrInstance_T*,std::pair<XrInstance_T*const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete < XrGeneratedDispatchTableCore>>>,std::allocator<std::pair<XrInstance_T*const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete<XrGeneratedDispatchTableCore>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> > ::find(( _Hashtable<XrInstance_T*,std::pair<XrInstance_T*const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete < XrGeneratedDispatchTableCore>>>,std::allocator<std::pair<XrInstance_T * const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete<XrGeneratedDispatchTableCore>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> > * )(this + 0x18), (XrInstance_T**)param_1);
   if (pRVar4 != (RuntimeInterface*)0x0) {
      uVar8 = *(ulong*)( this + 0x20 );
      lVar2 = *(long*)( this + 0x18 );
      uVar7 = *(ulong*)( pRVar4 + 8 ) % uVar8;
      plVar1 = (long*)( lVar2 + uVar7 * 8 );
      pRVar6 = (RuntimeInterface*)*plVar1;
      do {
         pRVar5 = pRVar6;
         pRVar6 = *(RuntimeInterface**)pRVar5;
      }
 while ( pRVar4 != *(RuntimeInterface**)pRVar5 );
      lVar9 = *(long*)pRVar4;
      if ((RuntimeInterface*)*plVar1 == pRVar5) {
         pRVar6 = pRVar5;
         if (lVar9 != 0) {
            uVar8 = *(ulong*)( lVar9 + 8 ) % uVar8;
            if (uVar7 == uVar8) goto LAB_00100a69;
            *(RuntimeInterface**)( lVar2 + uVar8 * 8 ) = pRVar5;
            pRVar6 = (RuntimeInterface*)*plVar1;
         }

         if (pRVar6 == this + 0x28) {
            *(long*)( this + 0x28 ) = lVar9;
         }

         *plVar1 = 0;
         lVar9 = *(long*)pRVar4;
      }
 else if (( lVar9 != 0 ) && ( uVar8 = uVar7 != uVar8 )) {
         *(RuntimeInterface**)( lVar2 + uVar8 * 8 ) = pRVar5;
         lVar9 = *(long*)pRVar4;
      }

      LAB_00100a69:*(long*)pRVar5 = lVar9;
      if (*(void**)( pRVar4 + 0x10 ) != (void*)0x0) {
         operator_delete(*(void**)( pRVar4 + 0x10 ), 0x1f8);
      }

      operator_delete(pRVar4, 0x18);
      *(long*)( this + 0x30 ) = *(long*)( this + 0x30 ) + -1;
   }

   pthread_mutex_unlock((pthread_mutex_t*)( this + 0x50 ));
   ( **(code**)( this + 0x10 ) )(param_1, "xrDestroyInstance", &local_38);
   ( *local_38 )(param_1);
   LAB_00100aaf:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return 0;
}
/* RuntimeInterface::TrackDebugMessenger(XrInstance_T*, XrDebugUtilsMessengerEXT_T*) */undefined8 RuntimeInterface::TrackDebugMessenger(RuntimeInterface *this, XrInstance_T *param_1, XrDebugUtilsMessengerEXT_T *param_2) {
   undefined8 *puVar1;
   XrDebugUtilsMessengerEXT_T *pXVar2;
   undefined8 *puVar3;
   ulong uVar4;
   long lVar5;
   undefined8 *puVar6;
   char cVar7;
   int iVar8;
   long *plVar9;
   void *__s;
   RuntimeInterface *pRVar10;
   ulong uVar11;
   ulong extraout_RDX;
   long *plVar12;
   long *plVar13;
   ulong uVar14;
   RuntimeInterface *pRVar15;
   iVar8 = pthread_mutex_lock((pthread_mutex_t*)( this + 0xb0 ));
   if (iVar8 != 0) {
      LAB_00100dc8:/* WARNING: Subroutine does not return */std::__throw_system_error(iVar8);
   }

   uVar11 = (ulong)param_2 % *(ulong*)( this + 0x80 );
   puVar1 = *(undefined8**)( *(long*)( this + 0x78 ) + uVar11 * 8 );
   if (puVar1 != (undefined8*)0x0) {
      pXVar2 = (XrDebugUtilsMessengerEXT_T*)( (undefined8*)*puVar1 )[1];
      puVar6 = (undefined8*)*puVar1;
      while (param_2 != pXVar2) {
         puVar3 = (undefined8*)*puVar6;
         if (( puVar3 == (undefined8*)0x0 ) || ( pXVar2 = (XrDebugUtilsMessengerEXT_T*)puVar3[1] ),puVar1 = puVar6,puVar6 = puVar3,uVar11 != (ulong)pXVar2 % *(ulong*)( this + 0x80 )) goto LAB_00100bd8;
      }
;
      plVar9 = (long*)*puVar1;
      if (plVar9 != (long*)0x0) goto LAB_00100bb5;
   }

   LAB_00100bd8:plVar9 = (long*)operator_new(0x18);
   uVar14 = *(ulong*)( this + 0x90 );
   uVar4 = *(ulong*)( this + 0x80 );
   plVar9[1] = (long)param_2;
   *plVar9 = 0;
   plVar9[2] = 0;
   cVar7 = std::__detail::_Prime_rehash_policy::_M_need_rehash(( ulong )(this + 0x98), uVar4, uVar14);
   if (cVar7 == '\0') {
      pRVar10 = *(RuntimeInterface**)( this + 0x78 );
      pRVar15 = pRVar10 + uVar11 * 8;
      plVar12 = *(long**)pRVar15;
   }
 else {
      if (extraout_RDX == 1) {
         pRVar10 = this + 0xa8;
         *(undefined8*)( this + 0xa8 ) = 0;
      }
 else {
         if (extraout_RDX >> 0x3c != 0) {
            if (extraout_RDX >> 0x3d != 0) {
               std::__throw_bad_array_new_length();
            }

            iVar8 = std::__throw_bad_alloc();
            goto LAB_00100dc8;
         }

         __s = operator_new(extraout_RDX * 8);
         pRVar10 = (RuntimeInterface*)memset(__s, 0, extraout_RDX * 8);
      }

      plVar12 = *(long**)( this + 0x88 );
      *(undefined8*)( this + 0x88 ) = 0;
      uVar11 = 0;
      while (uVar14 = uVar11,plVar13 = plVar12,plVar12 != (long*)0x0) {
         while (true) {
            plVar12 = (long*)*plVar13;
            uVar11 = (ulong)plVar13[1] % extraout_RDX;
            pRVar15 = pRVar10 + uVar11 * 8;
            if (*(long**)pRVar15 == (long*)0x0) break;
            *plVar13 = **(long**)pRVar15;
            **(undefined8**)pRVar15 = plVar13;
            plVar13 = plVar12;
            if (plVar12 == (long*)0x0) goto LAB_00100ce6;
         }
;
         *plVar13 = *(long*)( this + 0x88 );
         *(long**)( this + 0x88 ) = plVar13;
         *(RuntimeInterface**)pRVar15 = this + 0x88;
         if (*plVar13 != 0) {
            *(long**)( pRVar10 + uVar14 * 8 ) = plVar13;
         }

      }
;
      LAB_00100ce6:if (*(RuntimeInterface**)( this + 0x78 ) != this + 0xa8) {
         operator_delete(*(RuntimeInterface**)( this + 0x78 ), *(long*)( this + 0x80 ) << 3);
      }

      *(ulong*)( this + 0x80 ) = extraout_RDX;
      *(RuntimeInterface**)( this + 0x78 ) = pRVar10;
      pRVar15 = pRVar10 + ( (ulong)param_2 % extraout_RDX ) * 8;
      plVar12 = *(long**)pRVar15;
   }

   if (plVar12 == (long*)0x0) {
      lVar5 = *(long*)( this + 0x88 );
      *(long**)( this + 0x88 ) = plVar9;
      *plVar9 = lVar5;
      if (lVar5 != 0) {
         *(long**)( pRVar10 + ( *(ulong*)( lVar5 + 8 ) % *(ulong*)( this + 0x80 ) ) * 8 ) = plVar9;
      }

      *(RuntimeInterface**)pRVar15 = this + 0x88;
   }
 else {
      *plVar9 = *plVar12;
      **(undefined8**)pRVar15 = plVar9;
   }

   *(long*)( this + 0x90 ) = *(long*)( this + 0x90 ) + 1;
   LAB_00100bb5:plVar9[2] = (long)param_1;
   pthread_mutex_unlock((pthread_mutex_t*)( this + 0xb0 ));
   return 1;
}
/* RuntimeInterface::ForgetDebugMessenger(XrDebugUtilsMessengerEXT_T*) */void RuntimeInterface::ForgetDebugMessenger(RuntimeInterface *this, XrDebugUtilsMessengerEXT_T *param_1) {
   XrDebugUtilsMessengerEXT_T *pXVar1;
   RuntimeInterface *pRVar2;
   long lVar3;
   RuntimeInterface *pRVar4;
   int iVar5;
   RuntimeInterface *pRVar6;
   ulong uVar7;
   ulong uVar8;
   long lVar9;
   long *plVar10;
   undefined8 *puVar11;
   if (param_1 == (XrDebugUtilsMessengerEXT_T*)0x0) {
      return;
   }

   iVar5 = pthread_mutex_lock((pthread_mutex_t*)( this + 0xb0 ));
   if (iVar5 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar5);
   }

   if (*(long*)( this + 0x90 ) == 0) {
      pRVar4 = *(RuntimeInterface**)( this + 0x88 );
      pRVar6 = this + 0x88;
      while (pRVar2 = pRVar4,pRVar2 != (RuntimeInterface*)0x0) {
         if (*(XrDebugUtilsMessengerEXT_T**)( pRVar2 + 8 ) == param_1) {
            plVar10 = *(long**)pRVar6;
            uVar7 = (ulong)plVar10[1] % *(ulong*)( this + 0x80 );
            goto LAB_00100e6c;
         }

         pRVar6 = pRVar2;
         pRVar4 = *(RuntimeInterface**)pRVar2;
      }
;
   }
 else {
      uVar7 = (ulong)param_1 % *(ulong*)( this + 0x80 );
      pRVar6 = *(RuntimeInterface**)( *(long*)( this + 0x78 ) + uVar7 * 8 );
      if (pRVar6 != (RuntimeInterface*)0x0) {
         pXVar1 = *(XrDebugUtilsMessengerEXT_T**)( *(RuntimeInterface**)pRVar6 + 8 );
         pRVar4 = *(RuntimeInterface**)pRVar6;
         do {
            if (pXVar1 == param_1) {
               plVar10 = *(long**)pRVar6;
               LAB_00100e6c:lVar3 = *(long*)( this + 0x78 );
               lVar9 = *plVar10;
               puVar11 = (undefined8*)( uVar7 * 8 + lVar3 );
               pRVar4 = (RuntimeInterface*)*puVar11;
               if (pRVar6 == pRVar4) {
                  if (lVar9 != 0) {
                     uVar8 = *(ulong*)( lVar9 + 8 ) % *(ulong*)( this + 0x80 );
                     if (uVar7 == uVar8) goto LAB_00100ea2;
                     *(RuntimeInterface**)( lVar3 + uVar8 * 8 ) = pRVar6;
                  }

                  if (pRVar4 == this + 0x88) {
                     *(long*)( this + 0x88 ) = lVar9;
                  }

                  *puVar11 = 0;
                  lVar9 = *plVar10;
               }
 else if (( lVar9 != 0 ) && ( uVar8 = *(ulong*)( lVar9 + 8 ) % *(ulong*)( this + 0x80 ) ),uVar7 != uVar8) {
                  *(RuntimeInterface**)( lVar3 + uVar8 * 8 ) = pRVar6;
                  lVar9 = *plVar10;
               }

               LAB_00100ea2:*(long*)pRVar6 = lVar9;
               operator_delete(plVar10, 0x18);
               *(long*)( this + 0x90 ) = *(long*)( this + 0x90 ) + -1;
               break;
            }

            pRVar2 = *(RuntimeInterface**)pRVar4;
         }
 while ( ( pRVar2 != (RuntimeInterface*)0x0 ) && ( pXVar1 = *(XrDebugUtilsMessengerEXT_T**)( pRVar2 + 8 ) ),pRVar6 = pRVar4,pRVar4 = pRVar2,uVar7 == (ulong)pXVar1 % *(ulong*)( this + 0x80 ) );
      }

   }

   pthread_mutex_unlock((pthread_mutex_t*)( this + 0xb0 ));
   return;
}
/* RuntimeInterface::SetSupportedExtensions(std::vector<std::__cxx11::string,
   std::allocator<std::__cxx11::string > >&) */void RuntimeInterface::SetSupportedExtensions(RuntimeInterface *this, vector *param_1) {
   std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::operator =((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>*)( this + 0xd8 ), param_1);
   return;
}
/* RuntimeInterface::SupportsExtension(std::__cxx11::string const&) */undefined8 RuntimeInterface::SupportsExtension(RuntimeInterface *this, string *param_1) {
   undefined8 *puVar1;
   size_t __n;
   int iVar2;
   undefined8 *puVar3;
   puVar3 = *(undefined8**)( this + 0xd8 );
   puVar1 = *(undefined8**)( this + 0xe0 );
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
/* WARNING: Removing unreachable block (ram,0x00101140) *//* WARNING: Removing unreachable block (ram,0x0010114f) *//* WARNING: Removing unreachable block (ram,0x0010115d) *//* WARNING: Removing unreachable block (ram,0x00101166) *//* WARNING: Removing unreachable block (ram,0x00101170) *//* RuntimeInterface::~RuntimeInterface() */void RuntimeInterface::~RuntimeInterface(RuntimeInterface *this) {
   undefined8 *puVar1;
   int iVar2;
   undefined8 *puVar3;
   long in_FS_OFFSET;
   long *local_a8[2];
   long local_98[2];
   long *local_88[2];
   long local_78[2];
   long *local_68[2];
   long local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RuntimeInterface_001058f8;
   local_a8[0] = local_98;
   std::__cxx11::string::_M_construct<char_const*>((vector*)local_a8, "RuntimeInterface being destroyed.");
   local_88[0] = local_78;
   std::__cxx11::string::_M_construct<char_const*>((string*)local_88, &_LC20, &_LC20);
   if (( LoaderLogger::GetInstance():: ) && ( iVar2 = __cxa_guard_acquire(&LoaderLogger::GetInstance(), ::instance) ),iVar2 != 0) {
      LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
      __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
      __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
   }

   local_68[0] = local_58;
   std::__cxx11::string::_M_construct<char_const*>((string*)local_68, "OpenXR-Loader");
   LoaderLogger::LogMessage(0x105920, 0x10, (string*)0x1, (string*)local_68, (string*)local_88, (vector*)local_a8);
   if (local_68[0] != local_58) {
      operator_delete(local_68[0], local_58[0] + 1);
   }

   if (local_88[0] != local_78) {
      operator_delete(local_88[0], local_78[0] + 1);
   }

   iVar2 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x50 ));
   if (iVar2 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar2);
   }

   std::_Hashtable<XrInstance_T*,std::pair<XrInstance_T*const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete < XrGeneratedDispatchTableCore>>>,std::allocator<std::pair<XrInstance_T * const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete<XrGeneratedDispatchTableCore>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> > ::clear(( _Hashtable<XrInstance_T*,std::pair<XrInstance_T*const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete < XrGeneratedDispatchTableCore>>>,std::allocator<std::pair<XrInstance_T * const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete<XrGeneratedDispatchTableCore>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> > * )(this + 0x18));
   pthread_mutex_unlock((pthread_mutex_t*)( this + 0x50 ));
   dlclose(*(undefined8*)( this + 8 ));
   if (local_a8[0] != local_98) {
      operator_delete(local_a8[0], local_98[0] + 1);
   }

   puVar1 = *(undefined8**)( this + 0xe0 );
   puVar3 = *(undefined8**)( this + 0xd8 );
   if (puVar1 != puVar3) {
      do {
         if ((undefined8*)*puVar3 != puVar3 + 2) {
            operator_delete((undefined8*)*puVar3, puVar3[2] + 1);
         }

         puVar3 = puVar3 + 4;
      }
 while ( puVar1 != puVar3 );
      puVar3 = *(undefined8**)( this + 0xd8 );
   }

   if (puVar3 != (undefined8*)0x0) {
      operator_delete(puVar3, *(long*)( this + 0xe8 ) - (long)puVar3);
   }

   puVar1 = *(undefined8**)( this + 0x88 );
   while (puVar1 != (undefined8*)0x0) {
      puVar3 = (undefined8*)*puVar1;
      operator_delete(puVar1, 0x18);
      puVar1 = puVar3;
   }
;
   memset(*(void**)( this + 0x78 ), 0, *(long*)( this + 0x80 ) * 8);
   *(undefined8*)( this + 0x90 ) = 0;
   *(undefined8*)( this + 0x88 ) = 0;
   if (*(RuntimeInterface**)( this + 0x78 ) != this + 0xa8) {
      operator_delete(*(RuntimeInterface**)( this + 0x78 ), *(long*)( this + 0x80 ) << 3);
   }

   std::_Hashtable<XrInstance_T*,std::pair<XrInstance_T*const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete < XrGeneratedDispatchTableCore>>>,std::allocator<std::pair<XrInstance_T * const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete<XrGeneratedDispatchTableCore>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> > ::clear(( _Hashtable<XrInstance_T*,std::pair<XrInstance_T*const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete < XrGeneratedDispatchTableCore>>>,std::allocator<std::pair<XrInstance_T * const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete<XrGeneratedDispatchTableCore>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> > * )(this + 0x18));
   if (*(RuntimeInterface**)( this + 0x18 ) == this + 0x48) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      operator_delete(*(RuntimeInterface**)( this + 0x18 ), *(long*)( this + 0x20 ) << 3);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RuntimeInterface::~RuntimeInterface() */void RuntimeInterface::~RuntimeInterface(RuntimeInterface *this) {
   ~RuntimeInterface(this)
   ;;
   operator_delete(this, 0xf0);
   return;
}
/* WARNING: Removing unreachable block (ram,0x001014b2) *//* WARNING: Removing unreachable block (ram,0x001014b8) *//* WARNING: Removing unreachable block (ram,0x001014c5) *//* WARNING: Removing unreachable block (ram,0x001014d2) *//* WARNING: Removing unreachable block (ram,0x001014db) *//* WARNING: Removing unreachable block (ram,0x001014e4) *//* RuntimeInterface::UnloadRuntime(std::__cxx11::string const&) */void RuntimeInterface::UnloadRuntime(string *param_1) {
   RuntimeInterface *this;
   int iVar1;
   long in_FS_OFFSET;
   long *local_88[2];
   long local_78[2];
   long *local_68[2];
   long local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( GetInstance() ) && ( iVar1 = __cxa_guard_acquire(&GetInstance(), ::instance) ),iVar1 != 0) {
      __cxa_atexit(std::unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>>::~unique_ptr, &GetInstance(), ::instance, &__dso_handle);
      __cxa_guard_release(&GetInstance(), ::instance);
   }

   if (GetInstance() != (RuntimeInterface*)0x0) {
      local_88[0] = local_78;
      std::__cxx11::string::_M_construct<char_const*>((vector*)local_88, "RuntimeInterface::UnloadRuntime - Unloading RuntimeInterface");
      if (( LoaderLogger::GetInstance():: ) && ( iVar1 = __cxa_guard_acquire(&LoaderLogger::GetInstance(), ::instance) ),iVar1 != 0) {
         LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
         __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
      }

      local_68[0] = local_58;
      std::__cxx11::string::_M_construct<char_const*>((string*)local_68, "OpenXR-Loader");
      LoaderLogger::LogMessage(0x105920, 0x10, (string*)0x1, (string*)local_68, param_1, (vector*)local_88);
      if (local_68[0] != local_58) {
         operator_delete(local_68[0], local_58[0] + 1);
      }

      if (local_88[0] != local_78) {
         operator_delete(local_88[0], local_78[0] + 1);
      }

      if (( GetInstance() ) && ( iVar1 = __cxa_guard_acquire(&GetInstance(), ::instance) ),iVar1 != 0) {
         __cxa_atexit(std::unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>>::~unique_ptr, &GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&GetInstance(), ::instance);
      }

      this = GetInstance()::instance
      ;;
      GetInstance() {
         if (*(code**)( *(long*)this + 8 ) == ~RuntimeInterface) {
            ~RuntimeInterface(this)
            ;;
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               operator_delete(this, 0xf0);
               return;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00101691. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *(long*)this + 8 ) )(this);
            return;
         }

         goto LAB_00101693;
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00101693:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* RuntimeInterface::GetInstanceExtensionProperties(std::vector<XrExtensionProperties,
   std::allocator<XrExtensionProperties> >&) */void RuntimeInterface::GetInstanceExtensionProperties(RuntimeInterface *this, vector *param_1) {
   long lVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   int iVar5;
   long lVar6;
   long lVar7;
   undefined8 *puVar8;
   ulong uVar9;
   long lVar10;
   long in_FS_OFFSET;
   byte bVar11;
   ulong local_130;
   int local_104;
   code *local_100;
   undefined1 local_f8[16];
   long local_e8;
   undefined4 local_d8;
   undefined1 local_d4[140];
   undefined8 local_48;
   long local_40;
   bVar11 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_f8 = (undefined1[16])0x0;
   local_e8 = 0;
   ( **(code**)( this + 0x10 ) )(0, "xrEnumerateInstanceExtensionProperties", &local_100);
   local_104 = 0;
   ( *local_100 )(0, 0, &local_104, 0);
   if (local_104 != 0) {
      local_d4._0_8_ = 0;
      local_48 = 0;
      puVar8 = (undefined8*)( local_d4 + 4 );
      for (lVar7 = 0x12; lVar7 != 0; lVar7 = lVar7 + -1) {
         *puVar8 = 0;
         puVar8 = puVar8 + (ulong)bVar11 * -2 + 1;
      }

      local_d8 = 2;
      std::vector<XrExtensionProperties,std::allocator<XrExtensionProperties>>::_M_fill_insert((vector<XrExtensionProperties,std::allocator<XrExtensionProperties>>*)local_f8, 0, local_104, &local_d8);
      uVar4 = local_f8._0_8_;
      ( *local_100 )(0, local_104, &local_104, local_f8._0_8_);
      lVar7 = *(long*)( param_1 + 8 );
      lVar6 = local_f8._8_8_ - uVar4;
      lVar1 = *(long*)param_1;
      if (local_f8._8_8_ != uVar4) {
         local_130 = 0;
         puVar8 = (undefined8*)uVar4;
         do {
            if (lVar1 != lVar7) {
               lVar10 = *(long*)param_1;
               uVar9 = 0;
               do {
                  iVar5 = strcmp((char*)( lVar10 + 0x10 ), (char*)( puVar8 + 2 ));
                  if (iVar5 == 0) {
                     *(undefined4*)( lVar10 + 0x90 ) = *(undefined4*)( puVar8 + 0x12 );
                     goto LAB_0010183f;
                  }

                  uVar9 = uVar9 + 1;
                  lVar10 = lVar10 + 0x98;
               }
 while ( uVar9 < ( ulong )(( lVar7 - lVar1 >> 3 ) * -0x79435e50d79435e5) );
            }

            puVar2 = *(undefined8**)( param_1 + 8 );
            if (puVar2 == *(undefined8**)( param_1 + 0x10 )) {
               std::vector<XrExtensionProperties,std::allocator<XrExtensionProperties>>::_M_realloc_insert<XrExtensionProperties_const&>((vector<XrExtensionProperties,std::allocator<XrExtensionProperties>>*)param_1, puVar2, puVar8);
            }
 else {
               uVar3 = puVar8[1];
               *puVar2 = *puVar8;
               puVar2[1] = uVar3;
               for (int i = 0; i < 8; i++) {
                  uVar3 = puVar8[( 2*i + 3 )];
                  puVar2[( 2*i + 2 )] = puVar8[( 2*i + 2 )];
                  puVar2[( 2*i + 3 )] = uVar3;
               }

               puVar2[0x12] = puVar8[0x12];
               *(long*)( param_1 + 8 ) = *(long*)( param_1 + 8 ) + 0x98;
            }

            LAB_0010183f:local_130 = local_130 + 1;
            puVar8 = puVar8 + 0x13;
         }
 while ( local_130 < ( ulong )(( lVar6 >> 3 ) * -0x79435e50d79435e5) );
      }

      if ((undefined8*)uVar4 != (undefined8*)0x0) {
         operator_delete((void*)uVar4, local_e8 - uVar4);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RuntimeInterface::TryLoadingSingleRuntime(std::__cxx11::string const&,
   std::unique_ptr<RuntimeManifestFile, std::default_delete<RuntimeManifestFile> >&) */int RuntimeInterface::TryLoadingSingleRuntime(string *param_1, unique_ptr *param_2) {
   string *psVar1;
   undefined1 auVar2[16];
   RuntimeInterface *this;
   undefined4 uVar3;
   long lVar4;
   ulong uVar5;
   long lVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   int iVar9;
   uint uVar10;
   int iVar11;
   long lVar12;
   long *plVar13;
   code *pcVar14;
   RuntimeInterface *pRVar15;
   size_t sVar16;
   ulong *puVar17;
   char *pcVar18;
   ulong uVar19;
   size_t *psVar20;
   undefined8 *puVar21;
   void *pvVar22;
   undefined8 *puVar23;
   char cVar24;
   undefined8 *puVar25;
   undefined8 *puVar26;
   uint uVar27;
   unique_ptr *puVar28;
   long in_FS_OFFSET;
   byte bVar29;
   string *psStack_440;
   long *plStack_438;
   long lStack_418;
   undefined1 auStack_410[16];
   long lStack_400;
   undefined1 auStack_3f0[16];
   long lStack_3e0;
   long *plStack_3d0;
   long lStack_3c8;
   long alStack_3c0[2];
   long *aplStack_3b0[2];
   long alStack_3a0[3];
   long lStack_388;
   undefined1 *local_340;
   uint local_31c;
   size_t local_300;
   undefined1 local_2f8[16];
   ulong *local_2e8;
   undefined1 local_2d8[16];
   long local_2c8;
   undefined8 local_2b8;
   undefined8 local_2b0;
   undefined8 local_2a8;
   undefined8 local_2a0;
   undefined8 uStack_298;
   undefined1 local_288[16];
   undefined1 local_278[16];
   long local_268;
   size_t *local_258;
   size_t local_250;
   size_t local_248[2];
   long *local_238;
   long local_230;
   long local_228[2];
   long *local_218;
   ulong local_210;
   long local_208[2];
   long *local_1f8;
   long local_1f0;
   long local_1e8[2];
   long *local_1d8;
   long local_1d0;
   long local_1c8[2];
   long *local_1b8;
   long local_1b0;
   long local_1a8[2];
   long *local_198;
   long local_190;
   long local_188[2];
   long *local_178;
   long local_170;
   long local_168[2];
   long *local_158;
   ulong local_150;
   long local_148[2];
   long *local_138;
   long local_130;
   long local_128[2];
   long *local_118;
   uint local_110;
   undefined4 uStack_10c;
   long local_108[2];
   long *local_f8;
   ulong local_f0;
   long local_e8[2];
   ulong *local_d8;
   undefined8 uStack_d0;
   ulong local_c8[4];
   undefined8 local_a8;
   undefined8 uStack_a0;
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
   long local_40;
   local_288._8_8_ = local_288._0_8_;
   bVar29 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar12 = dlopen(*(undefined8*)( *(long*)param_2 + 0x28 ), 1);
   if (lVar12 == 0) {
      pcVar18 = (char*)dlerror();
      local_258 = local_248;
      if (pcVar18 == (char*)0x0) {
         pcVar18 = "basic_string: construction from null is not valid";
         std::__throw_logic_error("basic_string: construction from null is not valid");
         lStack_388 = *(long*)( in_FS_OFFSET + 0x28 );
         if (( GetInstance() ) && ( iVar9 = __cxa_guard_acquire(&GetInstance(), ::instance) ),iVar9 != 0) {
            __cxa_atexit(std::unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>>::~unique_ptr, &GetInstance(), ::instance, &__dso_handle);
            __cxa_guard_release(&GetInstance(), ::instance);
         }

         iVar9 = 0;
         if (GetInstance() == (RuntimeInterface*)0x0) {
            lStack_400 = 0;
            auStack_410 = (undefined1[16])0x0;
            iVar9 = RuntimeManifestFile::FindManifestFiles((string*)pcVar18, (vector*)auStack_410);
            if (iVar9 < 0) {
               auStack_3f0 = (undefined1[16])0x0;
               lStack_3e0 = 0;
               lStack_418 = 0x2e;
               plStack_3d0 = alStack_3c0;
               plStack_3d0 = (long*)std::__cxx11::string::_M_create((ulong*)&plStack_3d0, ( ulong ) & lStack_418);
               lVar12 = _UNK_00105af8;
               alStack_3c0[0] = lStack_418;
               *plStack_3d0 = __LC39;
               plStack_3d0[1] = lVar12;
               lVar12 = _UNK_00105bb8;
               plStack_3d0[2] = __LC51;
               plStack_3d0[3] = lVar12;
               uVar7 = _UNK_00105bc8;
               *(undefined8*)( (long)plStack_3d0 + 0x1e ) = __LC52;
               *(undefined8*)( (long)plStack_3d0 + 0x26 ) = uVar7;
               lStack_3c8 = lStack_418;
               *(undefined1*)( (long)plStack_3d0 + lStack_418 ) = 0;
               if (( LoaderLogger::GetInstance():: ) && ( iVar9 = __cxa_guard_acquire(&LoaderLogger::GetInstance(), ::instance) ),iVar9 != 0) {
                  LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
                  __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
                  __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
               }

               aplStack_3b0[0] = alStack_3a0;
               std::__cxx11::string::_M_construct<char_const*>((string*)aplStack_3b0, "OpenXR-Loader", "");
               LoaderLogger::LogMessage(0x105920, 0x1000, (string*)0x1, (string*)aplStack_3b0, (string*)pcVar18, (vector*)&plStack_3d0);
               if (aplStack_3b0[0] != alStack_3a0) {
                  operator_delete(aplStack_3b0[0], alStack_3a0[0] + 1);
               }

               if (plStack_3d0 != alStack_3c0) {
                  operator_delete(plStack_3d0, alStack_3c0[0] + 1);
               }

               uVar7 = auStack_3f0._8_8_;
               pvVar22 = (void*)auStack_3f0._0_8_;
               if (auStack_3f0._8_8_ != auStack_3f0._0_8_) {
                  do {
                     if (*(void**)( (long)pvVar22 + 0x10 ) != (void*)( (long)pvVar22 + 0x20 )) {
                        operator_delete(*(void**)( (long)pvVar22 + 0x10 ), *(long*)( (long)pvVar22 + 0x20 ) + 1);
                     }

                     pvVar22 = (void*)( (long)pvVar22 + 0x30 );
                  }
 while ( (void*)uVar7 != pvVar22 );
               }

               if ((void*)auStack_3f0._0_8_ != (void*)0x0) {
                  operator_delete((void*)auStack_3f0._0_8_, lStack_3e0 - auStack_3f0._0_8_);
               }

            }
 else {
               uVar7 = auStack_410._8_8_;
               for (puVar28 = (unique_ptr*)auStack_410._0_8_; (unique_ptr*)uVar7 != puVar28; puVar28 = puVar28 + 8) {
                  iVar9 = TryLoadingSingleRuntime((string*)pcVar18, puVar28);
                  if (-1 < iVar9) goto LAB_0010382e;
               }

            }

            plStack_438 = &lStack_418;
            psStack_440 = (string*)aplStack_3b0;
            auStack_3f0 = (undefined1[16])0x0;
            lStack_3e0 = 0;
            lStack_418 = 0x39;
            plStack_3d0 = alStack_3c0;
            plStack_3d0 = (long*)std::__cxx11::string::_M_create((ulong*)&plStack_3d0, (ulong)plStack_438);
            lVar12 = _UNK_00105af8;
            alStack_3c0[0] = lStack_418;
            *plStack_3d0 = __LC39;
            plStack_3d0[1] = lVar12;
            lVar12 = _UNK_00105bb8;
            plStack_3d0[2] = __LC51;
            plStack_3d0[3] = lVar12;
            lVar12 = _UNK_00105bd8;
            plStack_3d0[4] = __LC53;
            plStack_3d0[5] = lVar12;
            uVar7 = _UNK_00105be8;
            *(undefined8*)( (long)plStack_3d0 + 0x29 ) = __LC54;
            *(undefined8*)( (long)plStack_3d0 + 0x31 ) = uVar7;
            lStack_3c8 = lStack_418;
            *(undefined1*)( (long)plStack_3d0 + lStack_418 ) = 0;
            if (( LoaderLogger::GetInstance():: ) && ( iVar9 = __cxa_guard_acquire(&LoaderLogger::GetInstance(), ::instance) ),iVar9 != 0) {
               LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
               __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
               __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
            }

            aplStack_3b0[0] = alStack_3a0;
            std::__cxx11::string::_M_construct<char_const*>(psStack_440, "OpenXR-Loader", "");
            LoaderLogger::LogMessage(0x105920, 0x1000, (string*)0x1, psStack_440, (string*)pcVar18, (vector*)&plStack_3d0);
            if (aplStack_3b0[0] != alStack_3a0) {
               operator_delete(aplStack_3b0[0], alStack_3a0[0] + 1);
            }

            if (plStack_3d0 != alStack_3c0) {
               operator_delete(plStack_3d0, alStack_3c0[0] + 1);
            }

            uVar7 = auStack_3f0._8_8_;
            pvVar22 = (void*)auStack_3f0._0_8_;
            if (auStack_3f0._8_8_ != auStack_3f0._0_8_) {
               do {
                  if (*(void**)( (long)pvVar22 + 0x10 ) != (void*)( (long)pvVar22 + 0x20 )) {
                     operator_delete(*(void**)( (long)pvVar22 + 0x10 ), *(long*)( (long)pvVar22 + 0x20 ) + 1);
                  }

                  pvVar22 = (void*)( (long)pvVar22 + 0x30 );
               }
 while ( (void*)uVar7 != pvVar22 );
            }

            if ((void*)auStack_3f0._0_8_ != (void*)0x0) {
               operator_delete((void*)auStack_3f0._0_8_, lStack_3e0 - auStack_3f0._0_8_);
            }

            iVar9 = -0x33;
            LAB_0010382e:uVar7 = auStack_410._8_8_;
            puVar23 = (undefined8*)auStack_410._0_8_;
            if (auStack_410._8_8_ != auStack_410._0_8_) {
               do {
                  puVar25 = (undefined8*)*puVar23;
                  if (puVar25 != (undefined8*)0x0) {
                     puVar26 = (undefined8*)puVar25[0xe];
                     while (puVar26 != (undefined8*)0x0) {
                        puVar21 = (undefined8*)*puVar26;
                        if ((undefined8*)puVar26[5] != puVar26 + 7) {
                           operator_delete((undefined8*)puVar26[5], puVar26[7] + 1);
                        }

                        if ((undefined8*)puVar26[1] != puVar26 + 3) {
                           operator_delete((undefined8*)puVar26[1], puVar26[3] + 1);
                        }

                        operator_delete(puVar26, 0x50);
                        puVar26 = puVar21;
                     }
;
                     memset((void*)puVar25[0xc], 0, puVar25[0xd] * 8);
                     puVar25[0xf] = 0;
                     puVar25[0xe] = 0;
                     if ((undefined8*)puVar25[0xc] != puVar25 + 0x12) {
                        operator_delete((undefined8*)puVar25[0xc], puVar25[0xd] << 3);
                     }

                     puVar26 = (undefined8*)puVar25[10];
                     puVar21 = (undefined8*)puVar25[9];
                     if (puVar26 != puVar21) {
                        do {
                           if ((undefined8*)*puVar21 != puVar21 + 2) {
                              operator_delete((undefined8*)*puVar21, puVar21[2] + 1);
                           }

                           puVar21 = puVar21 + 5;
                        }
 while ( puVar26 != puVar21 );
                        puVar21 = (undefined8*)puVar25[9];
                     }

                     if (puVar21 != (undefined8*)0x0) {
                        operator_delete(puVar21, puVar25[0xb] - (long)puVar21);
                     }

                     if ((undefined8*)puVar25[5] != puVar25 + 7) {
                        operator_delete((undefined8*)puVar25[5], puVar25[7] + 1);
                     }

                     if ((undefined8*)*puVar25 != puVar25 + 2) {
                        operator_delete((undefined8*)*puVar25, puVar25[2] + 1);
                     }

                     operator_delete(puVar25, 0x98);
                  }

                  puVar23 = puVar23 + 1;
               }
 while ( (undefined8*)uVar7 != puVar23 );
            }

            if ((undefined8*)auStack_410._0_8_ != (undefined8*)0x0) {
               operator_delete((void*)auStack_410._0_8_, lStack_400 - auStack_410._0_8_);
            }

         }

         if (lStack_388 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return iVar9;
      }

      local_250 = strlen(pcVar18);
      local_288._0_8_ = local_250;
      if (local_250 < 0x10) {
         psVar20 = local_248;
         if (local_250 == 1) {
            local_248[0] = CONCAT71(local_248[0]._1_7_, *pcVar18);
         }
 else if (local_250 != 0) goto LAB_0010364f;
      }
 else {
         local_258 = (size_t*)std::__cxx11::string::_M_create((ulong*)&local_258, (ulong)local_288);
         local_248[0] = local_288._0_8_;
         psVar20 = local_258;
         LAB_0010364f:memcpy(psVar20, pcVar18, local_250);
         local_250 = local_288._0_8_;
         psVar20 = local_258;
      }

      *(undefined1*)( (long)psVar20 + local_250 ) = 0;
      local_288._0_8_ = 0x35;
      local_238 = local_228;
      local_238 = (long*)std::__cxx11::string::_M_create((ulong*)&local_238, (ulong)local_288);
      lVar12 = _UNK_00105af8;
      local_228[0] = local_288._0_8_;
      *local_238 = __LC39;
      local_238[1] = lVar12;
      lVar12 = _UNK_00105b08;
      local_238[2] = __LC40;
      local_238[3] = lVar12;
      lVar12 = _UNK_00105b18;
      local_238[4] = __LC41;
      local_238[5] = lVar12;
      *(undefined8*)( (long)local_238 + 0x2d ) = 0x20656c6966207473;
      local_230 = local_288._0_8_;
      *(undefined1*)( (long)local_238 + local_288._0_8_ ) = 0;
      if (( ( 0x3fffffffffffffff - local_288._0_8_ < ( *(ulong**)param_2 )[1] ) || ( std::__cxx11::string::_M_append((char*)&local_238, **(ulong**)param_2),0x3fffffffffffffffU - local_230 < 0x1f ) ) || ( std::__cxx11::string::_M_append((char*)&local_238, 0x104a00),0x3fffffffffffffffU - local_230 < local_250 )) goto LAB_0010362f;
      std::__cxx11::string::_M_append((char*)&local_238, (ulong)local_258);
      if (local_230 == 0x3fffffffffffffff) goto LAB_0010362f;
      std::__cxx11::string::_M_append((char*)&local_238, 0x103f0a);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_278._8_8_;
      local_278 = auVar2 << 0x40;
      local_288 = (undefined1[16])0x0;
      if (( LoaderLogger::GetInstance():: ) && ( iVar9 = __cxa_guard_acquire(&LoaderLogger::GetInstance(), ::instance) ),iVar9 != 0) {
         LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
         __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
      }

      local_d8 = local_c8;
      std::__cxx11::string::_M_construct<char_const*>((string*)&local_d8, "OpenXR-Loader");
      LoaderLogger::LogMessage(0x105920, 0x1000, (string*)0x1, (string*)&local_d8, param_1, (vector*)&local_238);
      if (local_d8 != local_c8) {
         operator_delete(local_d8, local_c8[0] + 1);
      }

      uVar7 = local_288._8_8_;
      for (lVar12 = local_288._0_8_; uVar7 != lVar12; lVar12 = lVar12 + 0x30) {
         if (*(void**)( lVar12 + 0x10 ) != (void*)( lVar12 + 0x20 )) {
            operator_delete(*(void**)( lVar12 + 0x10 ), *(long*)( lVar12 + 0x20 ) + 1);
         }

      }

      if ((void*)local_288._0_8_ != (void*)0x0) {
         operator_delete((void*)local_288._0_8_, local_278._0_8_ - local_288._0_8_);
      }

      if (local_238 != local_228) {
         operator_delete(local_238, local_228[0] + 1);
      }

      if (local_258 != local_248) {
         operator_delete(local_258, local_248[0] + 1);
      }

      iVar9 = -0x20;
      goto LAB_001023a8;
   }

   psVar1 = *(string**)param_2;
   local_288._0_8_ = 0x21;
   local_d8 = local_c8;
   local_d8 = (ulong*)std::__cxx11::string::_M_create((ulong*)&local_d8, (ulong)local_288);
   uVar19 = _UNK_00105b28;
   local_c8[0] = local_288._0_8_;
   *local_d8 = __LC42;
   local_d8[1] = uVar19;
   uVar5 = _UNK_00105b38;
   uVar19 = __LC43;
   *(char*)( local_d8 + 4 ) = 'e';
   local_d8[2] = uVar19;
   local_d8[3] = uVar5;
   uStack_d0 = local_288._0_8_;
   *(char*)( (long)local_d8 + local_288._0_8_ ) = '\0';
   plVar13 = (long*)ManifestFile::GetFunctionName(psVar1);
   local_218 = local_208;
   std::__cxx11::string::_M_construct<char*>(&local_218, *plVar13, plVar13[1] + *plVar13);
   if (local_d8 != local_c8) {
      operator_delete(local_d8, local_c8[0] + 1);
   }

   pcVar14 = (code*)dlsym(lVar12, local_218);
   local_2b0 = 0x28;
   local_268 = 0;
   local_2b8 = _LC29;
   local_2a8 = _LC29;
   local_2a0 = __LC30;
   uStack_298 = _UNK_00105ae8;
   local_288._8_8_ = 0x28;
   local_288._0_8_ = _LC31;
   local_278 = (undefined1[16])0x0;
   if (pcVar14 == (code*)0x0) {
      local_2d8._0_8_ = 0x40;
      local_1f8 = local_1e8;
      local_1f8 = (long*)std::__cxx11::string::_M_create((ulong*)&local_1f8, (ulong)local_2d8);
      lVar4 = _UNK_00105af8;
      local_1e8[0] = local_2d8._0_8_;
      *local_1f8 = __LC39;
      local_1f8[1] = lVar4;
      lVar4 = _UNK_00105b48;
      local_1f8[2] = __LC44;
      local_1f8[3] = lVar4;
      lVar4 = _UNK_00105b58;
      local_1f8[4] = __LC45;
      local_1f8[5] = lVar4;
      lVar4 = _UNK_00105b68;
      local_1f8[6] = __LC46;
      local_1f8[7] = lVar4;
      local_1f0 = local_2d8._0_8_;
      *(undefined1*)( (long)local_1f8 + local_2d8._0_8_ ) = 0;
      if (0x3fffffffffffffff - local_2d8._0_8_ < local_210) goto LAB_0010362f;
      std::__cxx11::string::_M_append((char*)&local_1f8, (ulong)local_218);
      local_2c8 = 0;
      local_2d8 = (undefined1[16])0x0;
      if (( LoaderLogger::GetInstance():: ) && ( iVar9 = __cxa_guard_acquire(&LoaderLogger::GetInstance(), ::instance) ),iVar9 != 0) {
         LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
         __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
      }

      local_d8 = local_c8;
      std::__cxx11::string::_M_construct<char_const*>((string*)&local_d8, "OpenXR-Loader");
      LoaderLogger::LogMessage(0x105920, 0x1000, (string*)0x1, (string*)&local_d8, param_1, (vector*)&local_1f8);
      if (local_d8 != local_c8) {
         operator_delete(local_d8, local_c8[0] + 1);
      }

      uVar7 = local_2d8._8_8_;
      pvVar22 = (void*)local_2d8._0_8_;
      if (local_2d8._8_8_ != local_2d8._0_8_) {
         do {
            if (*(void**)( (long)pvVar22 + 0x10 ) != (void*)( (long)pvVar22 + 0x20 )) {
               operator_delete(*(void**)( (long)pvVar22 + 0x10 ), *(long*)( (long)pvVar22 + 0x20 ) + 1);
            }

            pvVar22 = (void*)( (long)pvVar22 + 0x30 );
         }
 while ( (void*)uVar7 != pvVar22 );
      }

      if ((void*)local_2d8._0_8_ != (void*)0x0) {
         operator_delete((void*)local_2d8._0_8_, local_2c8 - local_2d8._0_8_);
      }

      if (local_1f8 != local_1e8) {
         operator_delete(local_1f8, local_1e8[0] + 1);
      }

      iVar9 = -2;
      LAB_0010248a:local_340 = local_2d8;
      local_2d8._0_8_ = 0x35;
      local_178 = local_168;
      local_178 = (long*)std::__cxx11::string::_M_create((ulong*)&local_178, (ulong)local_340);
      lVar4 = _UNK_00105af8;
      local_168[0] = local_2d8._0_8_;
      *local_178 = __LC39;
      local_178[1] = lVar4;
      lVar4 = _UNK_00105b08;
      local_178[2] = __LC40;
      local_178[3] = lVar4;
      lVar4 = _UNK_00105b18;
      local_178[4] = __LC41;
      local_178[5] = lVar4;
      *(undefined8*)( (long)local_178 + 0x2d ) = 0x20656c6966207473;
      local_170 = local_2d8._0_8_;
      *(undefined1*)( (long)local_178 + local_2d8._0_8_ ) = 0;
      if (( 0x3fffffffffffffff - local_2d8._0_8_ < ( *(ulong**)param_2 )[1] ) || ( std::__cxx11::string::_M_append((char*)&local_178, **(ulong**)param_2),0x3fffffffffffffffU - local_170 < 0x20 )) goto LAB_0010362f;
      std::__cxx11::string::_M_append((char*)&local_178, 0x104ae0);
      uVar27 = -iVar9;
      if (uVar27 < 10) {
         local_31c = 1;
         cVar24 = '\x02';
      }
 else if (uVar27 < 100) {
         local_31c = 2;
         cVar24 = '\x03';
      }
 else if (uVar27 < 1000) {
         local_31c = 3;
         cVar24 = '\x04';
      }
 else if (uVar27 < 10000) {
         local_31c = 4;
         cVar24 = '\x05';
      }
 else if (uVar27 < 100000) {
         local_31c = 5;
         LAB_00102d10:cVar24 = (char)local_31c + '\x01';
      }
 else if (uVar27 < 1000000) {
         iVar11 = 5;
         LAB_001025f2:local_31c = iVar11 + 1;
         cVar24 = (char)iVar11 + '\x02';
      }
 else if (uVar27 < 10000000) {
         local_31c = 7;
         cVar24 = '\b';
      }
 else {
         if (99999999 < uVar27) {
            if (uVar27 < 1000000000) {
               local_31c = 9;
               goto LAB_00102d10;
            }

            iVar11 = 9;
            goto LAB_001025f2;
         }

         local_31c = 8;
         cVar24 = '\t';
      }

      local_158 = local_148;
      std::__cxx11::string::_M_construct(( ulong ) & local_158, cVar24);
      std::__detail::__to_chars_10_impl<unsigned_int>((char*)( (long)local_158 + 1 ), local_31c, uVar27);
      if (0x3fffffffffffffffU - local_170 < local_150) {
         LAB_0010362f:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::append");
      }

      std::__cxx11::string::_M_append((char*)&local_178, (ulong)local_158);
      if (local_158 != local_148) {
         operator_delete(local_158, local_148[0] + 1);
      }

      local_2c8 = 0;
      local_2d8 = (undefined1[16])0x0;
      if (( LoaderLogger::GetInstance():: ) && ( iVar11 = __cxa_guard_acquire(&LoaderLogger::GetInstance(), ::instance) ),iVar11 != 0) {
         LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
         __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
      }

      local_d8 = local_c8;
      std::__cxx11::string::_M_construct<char_const*>((string*)&local_d8, "OpenXR-Loader");
      LoaderLogger::LogMessage(0x105920, 0x1000, (string*)0x1, (string*)&local_d8, param_1, (vector*)&local_178);
      if (local_d8 != local_c8) {
         operator_delete(local_d8, local_c8[0] + 1);
      }

      uVar7 = local_2d8._8_8_;
      pvVar22 = (void*)local_2d8._0_8_;
      if (local_2d8._8_8_ != local_2d8._0_8_) {
         do {
            if (*(void**)( (long)pvVar22 + 0x10 ) != (void*)( (long)pvVar22 + 0x20 )) {
               operator_delete(*(void**)( (long)pvVar22 + 0x10 ), *(long*)( (long)pvVar22 + 0x20 ) + 1);
            }

            pvVar22 = (void*)( (long)pvVar22 + 0x30 );
         }
 while ( (void*)uVar7 != pvVar22 );
      }

      if ((void*)local_2d8._0_8_ != (void*)0x0) {
         operator_delete((void*)local_2d8._0_8_, local_2c8 - local_2d8._0_8_);
      }

      dlclose(lVar12);
      if (local_178 != local_168) {
         operator_delete(local_178, local_168[0] + 1);
      }

   }
 else {
      iVar9 = ( *pcVar14 )(&local_2b8, local_288);
      if (iVar9 < 0) goto LAB_0010248a;
      if (local_268 == 0) {
         local_2d8._0_8_ = 0x35;
         local_1d8 = local_1c8;
         local_1d8 = (long*)std::__cxx11::string::_M_create((ulong*)&local_1d8, (ulong)local_2d8);
         lVar4 = _UNK_00105af8;
         local_1c8[0] = local_2d8._0_8_;
         *local_1d8 = __LC39;
         local_1d8[1] = lVar4;
         lVar4 = _UNK_00105b08;
         local_1d8[2] = __LC40;
         local_1d8[3] = lVar4;
         lVar4 = _UNK_00105b18;
         local_1d8[4] = __LC41;
         local_1d8[5] = lVar4;
         *(undefined8*)( (long)local_1d8 + 0x2d ) = 0x20656c6966207473;
         local_1d0 = local_2d8._0_8_;
         *(undefined1*)( (long)local_1d8 + local_2d8._0_8_ ) = 0;
         if (( 0x3fffffffffffffff - local_2d8._0_8_ < ( *(ulong**)param_2 )[1] ) || ( std::__cxx11::string::_M_append((char*)&local_1d8, **(ulong**)param_2),0x3fffffffffffffffU - local_1d0 < 0x3d )) goto LAB_0010362f;
         std::__cxx11::string::_M_append((char*)&local_1d8, 0x104a20);
         local_2c8 = 0;
         local_2d8 = (undefined1[16])0x0;
         if (( LoaderLogger::GetInstance():: ) && ( iVar9 = __cxa_guard_acquire(&LoaderLogger::GetInstance(), ::instance) ),iVar9 != 0) {
            LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
            __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
            __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
         }

         local_d8 = local_c8;
         std::__cxx11::string::_M_construct<char_const*>((string*)&local_d8, "OpenXR-Loader");
         LoaderLogger::LogMessage(0x105920, 0x1000, (string*)0x1, (string*)&local_d8, param_1, (vector*)&local_1d8);
         if (local_d8 != local_c8) {
            operator_delete(local_d8, local_c8[0] + 1);
         }

         uVar7 = local_2d8._8_8_;
         pvVar22 = (void*)local_2d8._0_8_;
         if (local_2d8._8_8_ != local_2d8._0_8_) {
            do {
               if (*(void**)( (long)pvVar22 + 0x10 ) != (void*)( (long)pvVar22 + 0x20 )) {
                  operator_delete(*(void**)( (long)pvVar22 + 0x10 ), *(long*)( (long)pvVar22 + 0x20 ) + 1);
               }

               pvVar22 = (void*)( (long)pvVar22 + 0x30 );
            }
 while ( (void*)uVar7 != pvVar22 );
         }

         if ((void*)local_2d8._0_8_ != (void*)0x0) {
            operator_delete((void*)local_2d8._0_8_, local_2c8 - local_2d8._0_8_);
         }

         if (local_1d8 != local_1c8) {
            operator_delete(local_1d8, local_1c8[0] + 1);
         }

         LAB_001029e1:iVar9 = -0x21;
         goto LAB_0010248a;
      }

      if (local_278._0_4_ != 1) {
         local_2d8._0_8_ = 0x35;
         local_1b8 = local_1a8;
         local_1b8 = (long*)std::__cxx11::string::_M_create((ulong*)&local_1b8, (ulong)local_2d8);
         lVar4 = _UNK_00105af8;
         local_1a8[0] = local_2d8._0_8_;
         *local_1b8 = __LC39;
         local_1b8[1] = lVar4;
         lVar4 = _UNK_00105b08;
         local_1b8[2] = __LC40;
         local_1b8[3] = lVar4;
         lVar4 = _UNK_00105b18;
         local_1b8[4] = __LC41;
         local_1b8[5] = lVar4;
         *(undefined8*)( (long)local_1b8 + 0x2d ) = 0x20656c6966207473;
         local_1b0 = local_2d8._0_8_;
         *(undefined1*)( (long)local_1b8 + local_2d8._0_8_ ) = 0;
         if (( 0x3fffffffffffffff - local_2d8._0_8_ < ( *(ulong**)param_2 )[1] ) || ( std::__cxx11::string::_M_append((char*)&local_1b8, **(ulong**)param_2),0x3fffffffffffffffU - local_1b0 < 0x3e )) goto LAB_0010362f;
         std::__cxx11::string::_M_append((char*)&local_1b8, 0x104a60);
         local_2c8 = 0;
         local_2d8 = (undefined1[16])0x0;
         if (( LoaderLogger::GetInstance():: ) && ( iVar9 = __cxa_guard_acquire(&LoaderLogger::GetInstance(), ::instance) ),iVar9 != 0) {
            LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
            __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
            __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
         }

         local_d8 = local_c8;
         std::__cxx11::string::_M_construct<char_const*>((string*)&local_d8, "OpenXR-Loader");
         LoaderLogger::LogMessage(0x105920, 0x1000, (string*)0x1, (string*)&local_d8, param_1, (vector*)&local_1b8);
         if (local_d8 != local_c8) {
            operator_delete(local_d8, local_c8[0] + 1);
         }

         uVar7 = local_2d8._8_8_;
         pvVar22 = (void*)local_2d8._0_8_;
         if (local_2d8._8_8_ != local_2d8._0_8_) {
            do {
               if (*(void**)( (long)pvVar22 + 0x10 ) != (void*)( (long)pvVar22 + 0x20 )) {
                  operator_delete(*(void**)( (long)pvVar22 + 0x10 ), *(long*)( (long)pvVar22 + 0x20 ) + 1);
               }

               pvVar22 = (void*)( (long)pvVar22 + 0x30 );
            }
 while ( (void*)uVar7 != pvVar22 );
         }

         if ((void*)local_2d8._0_8_ != (void*)0x0) {
            operator_delete((void*)local_2d8._0_8_, local_2c8 - local_2d8._0_8_);
         }

         if (local_1b8 != local_1a8) {
            operator_delete(local_1b8, local_1a8[0] + 1);
         }

         goto LAB_001029e1;
      }

      if ((ulong)local_278._8_8_ >> 0x30 != 1) {
         local_2d8._0_8_ = 0x35;
         local_198 = local_188;
         local_198 = (long*)std::__cxx11::string::_M_create((ulong*)&local_198, (ulong)local_2d8);
         lVar4 = _UNK_00105af8;
         local_188[0] = local_2d8._0_8_;
         *local_198 = __LC39;
         local_198[1] = lVar4;
         lVar4 = _UNK_00105b08;
         local_198[2] = __LC40;
         local_198[3] = lVar4;
         lVar4 = _UNK_00105b18;
         local_198[4] = __LC41;
         local_198[5] = lVar4;
         *(undefined8*)( (long)local_198 + 0x2d ) = 0x20656c6966207473;
         local_190 = local_2d8._0_8_;
         *(undefined1*)( (long)local_198 + local_2d8._0_8_ ) = 0;
         if (( 0x3fffffffffffffff - local_2d8._0_8_ < ( *(ulong**)param_2 )[1] ) || ( std::__cxx11::string::_M_append((char*)&local_198, **(ulong**)param_2),0x3fffffffffffffffU - local_190 < 0x39 )) goto LAB_0010362f;
         std::__cxx11::string::_M_append((char*)&local_198, 0x104aa0);
         local_2c8 = 0;
         local_2d8 = (undefined1[16])0x0;
         if (( LoaderLogger::GetInstance():: ) && ( iVar9 = __cxa_guard_acquire(&LoaderLogger::GetInstance(), ::instance) ),iVar9 != 0) {
            LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
            __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
            __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
         }

         local_d8 = local_c8;
         std::__cxx11::string::_M_construct<char_const*>((string*)&local_d8, "OpenXR-Loader");
         LoaderLogger::LogMessage(0x105920, 0x1000, (string*)0x1, (string*)&local_d8, param_1, (vector*)&local_198);
         if (local_d8 != local_c8) {
            operator_delete(local_d8, local_c8[0] + 1);
         }

         uVar7 = local_2d8._8_8_;
         pvVar22 = (void*)local_2d8._0_8_;
         if (local_2d8._8_8_ != local_2d8._0_8_) {
            do {
               if (*(void**)( (long)pvVar22 + 0x10 ) != (void*)( (long)pvVar22 + 0x20 )) {
                  operator_delete(*(void**)( (long)pvVar22 + 0x10 ), *(long*)( (long)pvVar22 + 0x20 ) + 1);
               }

               pvVar22 = (void*)( (long)pvVar22 + 0x30 );
            }
 while ( (void*)uVar7 != pvVar22 );
         }

         if ((void*)local_2d8._0_8_ != (void*)0x0) {
            operator_delete((void*)local_2d8._0_8_, local_2c8 - local_2d8._0_8_);
         }

         if (local_198 != local_188) {
            operator_delete(local_198, local_188[0] + 1);
         }

         goto LAB_001029e1;
      }

      local_2d8._0_8_ = 0x51;
      local_138 = local_128;
      local_138 = (long*)std::__cxx11::string::_M_create((ulong*)&local_138, (ulong)local_2d8);
      lVar4 = _UNK_00105af8;
      local_128[0] = local_2d8._0_8_;
      *local_138 = __LC39;
      local_138[1] = lVar4;
      lVar6 = _UNK_00105b78;
      lVar4 = __LC47;
      *(undefined1*)( local_138 + 10 ) = 0x20;
      local_138[2] = lVar4;
      local_138[3] = lVar6;
      lVar4 = _UNK_00105b88;
      local_138[4] = __LC48;
      local_138[5] = lVar4;
      lVar4 = _UNK_00105b98;
      local_138[6] = __LC49;
      local_138[7] = lVar4;
      lVar4 = _UNK_00105ba8;
      local_138[8] = __LC50;
      local_138[9] = lVar4;
      local_130 = local_2d8._0_8_;
      *(undefined1*)( (long)local_138 + local_2d8._0_8_ ) = 0;
      if (( 0x3fffffffffffffff - local_2d8._0_8_ < ( *(ulong**)param_2 )[1] ) || ( std::__cxx11::string::_M_append((char*)&local_138, **(ulong**)param_2),0x3fffffffffffffffU - local_130 < 0x19 )) goto LAB_0010362f;
      std::__cxx11::string::_M_append((char*)&local_138, 0x103f0c);
      uVar3 = local_278._0_4_;
      if ((uint)local_278._0_4_ < 10) {
         cVar24 = '\x01';
      }
 else if ((uint)local_278._0_4_ < 100) {
         cVar24 = '\x02';
      }
 else if ((uint)local_278._0_4_ < 1000) {
         cVar24 = '\x03';
      }
 else if ((uint)local_278._0_4_ < 10000) {
         cVar24 = '\x04';
      }
 else {
         cVar24 = '\x05';
         if (99999 < (uint)local_278._0_4_) {
            if ((uint)local_278._0_4_ < 1000000) {
               cVar24 = '\x05';
               LAB_00101ca3:cVar24 = cVar24 + '\x01';
            }
 else {
               cVar24 = '\a';
               if (9999999 < (uint)local_278._0_4_) {
                  if ((uint)local_278._0_4_ < 100000000) {
                     cVar24 = '\b';
                  }
 else {
                     if (999999999 < (uint)local_278._0_4_) {
                        cVar24 = '\t';
                        goto LAB_00101ca3;
                     }

                     cVar24 = '\t';
                  }

               }

            }

         }

      }

      local_118 = local_108;
      std::__cxx11::string::_M_construct(( ulong ) & local_118, cVar24);
      std::__detail::__to_chars_10_impl<unsigned_int>((char*)local_118, local_110, uVar3);
      if (0x3fffffffffffffffU - local_130 < CONCAT44(uStack_10c, local_110)) goto LAB_0010362f;
      std::__cxx11::string::_M_append((char*)&local_138, (ulong)local_118);
      if (local_118 != local_108) {
         operator_delete(local_118, local_108[0] + 1);
      }

      if (0x3fffffffffffffffU - local_130 < 0x18) goto LAB_0010362f;
      std::__cxx11::string::_M_append((char*)&local_138, 0x103f26);
      uVar27 = (uint)(ushort)local_278._14_2_;
      if ((ushort)local_278._14_2_ < 10) {
         cVar24 = '\x01';
         uVar10 = 1;
      }
 else if ((ushort)local_278._14_2_ < 100) {
         cVar24 = '\x02';
         uVar10 = 2;
      }
 else if ((ushort)local_278._14_2_ < 1000) {
         cVar24 = '\x03';
         uVar10 = 3;
      }
 else {
         cVar24 = '\x05' - ( (ushort)local_278._14_2_ < 10000 );
         uVar10 = ( ( uVar27 - (ushort)local_278._14_2_ ) - ( uint )((ushort)local_278._14_2_ < 10000) ) + 5;
      }

      local_f8 = local_e8;
      std::__cxx11::string::_M_construct(( ulong ) & local_f8, cVar24);
      std::__detail::__to_chars_10_impl<unsigned_int>((char*)local_f8, uVar10, uVar27);
      if (0x3fffffffffffffffU - local_130 < local_f0) goto LAB_0010362f;
      std::__cxx11::string::_M_append((char*)&local_138, (ulong)local_f8);
      if (local_f8 != local_e8) {
         operator_delete(local_f8, local_e8[0] + 1);
      }

      if (local_130 == 0x3fffffffffffffff) goto LAB_0010362f;
      std::__cxx11::string::_M_append((char*)&local_138, 0x103f3f);
      uVar10 = (uint)(ushort)local_278._12_2_;
      uVar27 = 1;
      cVar24 = '\x01';
      if (9 < (ushort)local_278._12_2_) {
         if ((ushort)local_278._12_2_ < 100) {
            cVar24 = '\x02';
            uVar27 = 2;
         }
 else if (uVar10 < 1000) {
            cVar24 = '\x03';
            uVar27 = 3;
         }
 else {
            cVar24 = '\x05' - ( uVar10 < 10000 );
            uVar27 = 5 - ( uVar10 < 10000 );
         }

      }

      local_d8 = local_c8;
      std::__cxx11::string::_M_construct(( ulong ) & local_d8, cVar24);
      std::__detail::__to_chars_10_impl<unsigned_int>((char*)local_d8, uVar27, uVar10);
      if (0x3fffffffffffffffU - local_130 < uStack_d0) goto LAB_0010362f;
      std::__cxx11::string::_M_append((char*)&local_138, (ulong)local_d8);
      if (local_d8 != local_c8) {
         operator_delete(local_d8, local_c8[0] + 1);
      }

      local_2c8 = 0;
      local_2d8 = (undefined1[16])0x0;
      if (( LoaderLogger::GetInstance():: ) && ( iVar9 = __cxa_guard_acquire(&LoaderLogger::GetInstance(), ::instance) ),iVar9 != 0) {
         LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
         __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
      }

      local_d8 = local_c8;
      std::__cxx11::string::_M_construct<char_const*>((string*)&local_d8, "OpenXR-Loader");
      LoaderLogger::LogMessage(0x105920, 0x10, (string*)0x1, (string*)&local_d8, param_1, (vector*)&local_138);
      if (local_d8 != local_c8) {
         operator_delete(local_d8, local_c8[0] + 1);
      }

      uVar7 = local_2d8._8_8_;
      pvVar22 = (void*)local_2d8._0_8_;
      if (local_2d8._8_8_ != local_2d8._0_8_) {
         do {
            if (*(void**)( (long)pvVar22 + 0x10 ) != (void*)( (long)pvVar22 + 0x20 )) {
               operator_delete(*(void**)( (long)pvVar22 + 0x10 ), *(long*)( (long)pvVar22 + 0x20 ) + 1);
            }

            pvVar22 = (void*)( (long)pvVar22 + 0x30 );
         }
 while ( (void*)uVar7 != pvVar22 );
      }

      if ((void*)local_2d8._0_8_ != (void*)0x0) {
         operator_delete((void*)local_2d8._0_8_, local_2c8 - local_2d8._0_8_);
      }

      if (( GetInstance() ) && ( iVar9 = __cxa_guard_acquire(&GetInstance(), ::instance) ),iVar9 != 0) {
         __cxa_atexit(std::unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>>::~unique_ptr, &GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&GetInstance(), ::instance);
      }

      pRVar15 = (RuntimeInterface*)operator_new(0xf0);
      uVar3 = _LC0;
      this = GetInstance()::instance
      ;;
      *(undefined***)pRVar15 = &PTR__RuntimeInterface_001058f8;
      *(long*)( pRVar15 + 0x10 ) = local_268;
      *(RuntimeInterface**)( pRVar15 + 0x18 ) = pRVar15 + 0x48;
      *(undefined1(*) [16])( pRVar15 + 0x50 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( pRVar15 + 0x60 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( pRVar15 + 0xb0 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( pRVar15 + 0xc0 ) = (undefined1[16])0x0;
      *(long*)( pRVar15 + 8 ) = lVar12;
      *(undefined8*)( pRVar15 + 0x20 ) = 1;
      *(undefined8*)( pRVar15 + 0x28 ) = 0;
      *(undefined8*)( pRVar15 + 0x30 ) = 0;
      *(undefined8*)( pRVar15 + 0x40 ) = 0;
      *(undefined8*)( pRVar15 + 0x48 ) = 0;
      *(undefined8*)( pRVar15 + 0x70 ) = 0;
      *(RuntimeInterface**)( pRVar15 + 0x78 ) = pRVar15 + 0xa8;
      *(undefined8*)( pRVar15 + 0x80 ) = 1;
      *(undefined8*)( pRVar15 + 0x88 ) = 0;
      *(undefined8*)( pRVar15 + 0x90 ) = 0;
      *(undefined8*)( pRVar15 + 0xa0 ) = 0;
      *(undefined8*)( pRVar15 + 0xa8 ) = 0;
      *(undefined8*)( pRVar15 + 0xd0 ) = 0;
      *(undefined8*)( pRVar15 + 0xe8 ) = 0;
      GetInstance()::instance = pRVar15
      ;;
      *(undefined4*)( pRVar15 + 0x38 ) = uVar3;
      *(undefined4*)( pRVar15 + 0x98 ) = uVar3;
      *(undefined1(*) [16])( pRVar15 + 0xd8 ) = (undefined1[16])0x0;
      if (this != (RuntimeInterface*)0x0) {
         if (*(code**)( *(long*)this + 8 ) == ~RuntimeInterface) {
            ~RuntimeInterface(this)
            ;;
            operator_delete(this, 0xf0);
         }
 else {
            ( **(code**)( *(long*)this + 8 ) )();
         }

      }

      local_2e8 = (ulong*)0x0;
      local_2c8 = 0;
      local_2f8 = (undefined1[16])0x0;
      local_2d8 = (undefined1[16])0x0;
      if (( GetInstance() ) && ( iVar9 = __cxa_guard_acquire(&GetInstance(), ::instance) ),iVar9 != 0) {
         __cxa_atexit(std::unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>>::~unique_ptr, &GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&GetInstance(), ::instance);
      }

      GetInstanceExtensionProperties(GetInstance(), ::instance, (vector*)local_2d8);
      uVar7 = local_2d8._8_8_;
      puVar23 = (undefined8*)local_2d8._0_8_;
      std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::reserve((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>*)local_2f8, ( (long)( local_2d8._8_8_ - local_2d8._0_8_ ) >> 3 ) * -0x79435e50d79435e5);
      for (; (undefined8*)uVar7 != puVar23; puVar23 = puVar23 + 0x13) {
         while (true) {
            local_d8 = (ulong*)*puVar23;
            uStack_d0 = puVar23[1];
            uVar8 = local_2f8._8_8_;
            for (int i = 0; i < 4; i++) {
               local_c8[i] = puVar23[( i + 2 )];
            }

            local_a8 = puVar23[6];
            uStack_a0 = puVar23[7];
            local_98 = puVar23[8];
            uStack_90 = puVar23[9];
            local_88 = puVar23[10];
            uStack_80 = puVar23[0xb];
            local_78 = puVar23[0xc];
            uStack_70 = puVar23[0xd];
            local_68 = puVar23[0xe];
            uStack_60 = puVar23[0xf];
            local_58 = puVar23[0x10];
            uStack_50 = puVar23[0x11];
            local_48 = puVar23[0x12];
            if ((ulong*)local_2f8._8_8_ != local_2e8) break;
            puVar23 = puVar23 + 0x13;
            std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::_M_realloc_insert<char(&)[128]>((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>*)local_2f8, local_2f8._8_8_, local_c8);
            if ((undefined8*)uVar7 == puVar23) goto LAB_001022d1;
         }
;
         puVar17 = (ulong*)( local_2f8._8_8_ + 0x10 );
         *(ulong**)local_2f8._8_8_ = puVar17;
         sVar16 = strlen((char*)local_c8);
         local_300 = sVar16;
         if (sVar16 < 0x10) {
            if (sVar16 == 1) {
               *(undefined1*)( uVar8 + 0x10 ) = (undefined1)local_c8[0];
            }
 else if (sVar16 != 0) goto LAB_00102407;
         }
 else {
            puVar17 = (ulong*)std::__cxx11::string::_M_create((ulong*)uVar8, ( ulong ) & local_300);
            *(ulong**)uVar8 = puVar17;
            *(size_t*)( uVar8 + 0x10 ) = local_300;
            LAB_00102407:uVar27 = (uint)sVar16;
            if (uVar27 < 8) {
               if (( sVar16 & 4 ) == 0) {
                  if (uVar27 != 0) {
                     *(undefined1*)puVar17 = (undefined1)local_c8[0];
                     if (( sVar16 & 2 ) != 0) {
                        *(undefined2*)( (long)puVar17 + ( ( sVar16 & 0xffffffff ) - 2 ) ) = *(undefined2*)( (long)&uStack_d0 + ( sVar16 & 0xffffffff ) + 6 );
                     }

                  }

               }
 else {
                  *(undefined4*)puVar17 = (undefined4)local_c8[0];
                  *(undefined4*)( (long)puVar17 + ( ( sVar16 & 0xffffffff ) - 4 ) ) = *(undefined4*)( (long)&uStack_d0 + ( sVar16 & 0xffffffff ) + 4 );
               }

            }
 else {
               *puVar17 = local_c8[0];
               lVar12 = (long)puVar17 - (long)( ( ulong )(puVar17 + 1) & 0xfffffffffffffff8 );
               *(undefined8*)( (long)puVar17 + ( ( sVar16 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)&uStack_d0 + ( sVar16 & 0xffffffff ) );
               puVar25 = (undefined8*)( (long)local_c8 - lVar12 );
               puVar26 = (undefined8*)( ( ulong )(puVar17 + 1) & 0xfffffffffffffff8 );
               for (uVar19 = ( ulong )(uVar27 + (int)lVar12 >> 3); uVar19 != 0; uVar19 = uVar19 - 1) {
                  *puVar26 = *puVar25;
                  puVar25 = puVar25 + (ulong)bVar29 * -2 + 1;
                  puVar26 = puVar26 + (ulong)bVar29 * -2 + 1;
               }

            }

            puVar17 = *(ulong**)uVar8;
         }

         *(size_t*)( uVar8 + 8 ) = local_300;
         *(undefined1*)( (long)puVar17 + local_300 ) = 0;
         local_2f8._8_8_ = (ulong*)( uVar8 + 0x20 );
      }

      LAB_001022d1:if (( GetInstance() ) && ( iVar9 = __cxa_guard_acquire(&GetInstance(), ::instance) ),iVar9 != 0) {
         __cxa_atexit(std::unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>>::~unique_ptr, &GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&GetInstance(), ::instance);
      }

      std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::operator =((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>*)( GetInstance() ), (vector*)local_2f8);
      if ((void*)local_2d8._0_8_ != (void*)0x0) {
         operator_delete((void*)local_2d8._0_8_, local_2c8 - local_2d8._0_8_);
      }

      uVar7 = local_2f8._0_8_;
      uVar8 = local_2f8._8_8_;
      for (puVar23 = (undefined8*)local_2f8._0_8_; (undefined8*)uVar8 != puVar23; puVar23 = puVar23 + 4) {
         if ((undefined8*)*puVar23 != puVar23 + 2) {
            operator_delete((undefined8*)*puVar23, puVar23[2] + 1);
         }

      }

      if ((undefined8*)uVar7 != (undefined8*)0x0) {
         operator_delete((void*)uVar7, (long)local_2e8 - uVar7);
      }

      if (local_138 != local_128) {
         operator_delete(local_138, local_128[0] + 1);
      }

      iVar9 = 0;
   }

   if (local_218 != local_208) {
      operator_delete(local_218, local_208[0] + 1);
   }

   LAB_001023a8:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar9;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RuntimeInterface::LoadRuntime(std::__cxx11::string const&) */int RuntimeInterface::LoadRuntime(string *param_1) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   long lVar3;
   undefined8 uVar4;
   int iVar5;
   undefined8 *puVar6;
   void *pvVar7;
   unique_ptr *puVar8;
   undefined8 *puVar9;
   long in_FS_OFFSET;
   string *local_f8;
   long *local_f0;
   long local_d0;
   undefined1 local_c8[16];
   long local_b8;
   undefined1 local_a8[16];
   long local_98;
   long *local_88;
   long local_80;
   long local_78[2];
   long *local_68[2];
   long local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( GetInstance() ) && ( iVar5 = __cxa_guard_acquire(&GetInstance(), ::instance) ),iVar5 != 0) {
      __cxa_atexit(std::unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>>::~unique_ptr, &GetInstance(), ::instance, &__dso_handle);
      __cxa_guard_release(&GetInstance(), ::instance);
   }

   iVar5 = 0;
   if (GetInstance() == 0) {
      local_b8 = 0;
      local_c8 = (undefined1[16])0x0;
      iVar5 = RuntimeManifestFile::FindManifestFiles(param_1, (vector*)local_c8);
      if (iVar5 < 0) {
         local_a8 = (undefined1[16])0x0;
         local_98 = 0;
         local_d0 = 0x2e;
         local_88 = local_78;
         local_88 = (long*)std::__cxx11::string::_M_create((ulong*)&local_88, ( ulong ) & local_d0);
         lVar3 = _UNK_00105af8;
         local_78[0] = local_d0;
         *local_88 = __LC39;
         local_88[1] = lVar3;
         lVar3 = _UNK_00105bb8;
         local_88[2] = __LC51;
         local_88[3] = lVar3;
         uVar4 = _UNK_00105bc8;
         *(undefined8*)( (long)local_88 + 0x1e ) = __LC52;
         *(undefined8*)( (long)local_88 + 0x26 ) = uVar4;
         local_80 = local_d0;
         *(undefined1*)( (long)local_88 + local_d0 ) = 0;
         if (( LoaderLogger::GetInstance():: ) && ( iVar5 = __cxa_guard_acquire(&LoaderLogger::GetInstance(), ::instance) ),iVar5 != 0) {
            LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
            __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
            __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
         }

         local_68[0] = local_58;
         std::__cxx11::string::_M_construct<char_const*>((string*)local_68, "OpenXR-Loader", "");
         LoaderLogger::LogMessage(0x105920, 0x1000, (string*)0x1, (string*)local_68, param_1, (vector*)&local_88);
         if (local_68[0] != local_58) {
            operator_delete(local_68[0], local_58[0] + 1);
         }

         if (local_88 != local_78) {
            operator_delete(local_88, local_78[0] + 1);
         }

         uVar4 = local_a8._8_8_;
         pvVar7 = (void*)local_a8._0_8_;
         if (local_a8._8_8_ != local_a8._0_8_) {
            do {
               if (*(void**)( (long)pvVar7 + 0x10 ) != (void*)( (long)pvVar7 + 0x20 )) {
                  operator_delete(*(void**)( (long)pvVar7 + 0x10 ), *(long*)( (long)pvVar7 + 0x20 ) + 1);
               }

               pvVar7 = (void*)( (long)pvVar7 + 0x30 );
            }
 while ( (void*)uVar4 != pvVar7 );
         }

         if ((void*)local_a8._0_8_ != (void*)0x0) {
            operator_delete((void*)local_a8._0_8_, local_98 - local_a8._0_8_);
         }

      }
 else {
         uVar4 = local_c8._8_8_;
         for (puVar8 = (unique_ptr*)local_c8._0_8_; (unique_ptr*)uVar4 != puVar8; puVar8 = puVar8 + 8) {
            iVar5 = TryLoadingSingleRuntime(param_1, puVar8);
            if (-1 < iVar5) goto LAB_0010382e;
         }

      }

      local_f0 = &local_d0;
      local_f8 = (string*)local_68;
      local_a8 = (undefined1[16])0x0;
      local_98 = 0;
      local_d0 = 0x39;
      local_88 = local_78;
      local_88 = (long*)std::__cxx11::string::_M_create((ulong*)&local_88, (ulong)local_f0);
      lVar3 = _UNK_00105af8;
      local_78[0] = local_d0;
      *local_88 = __LC39;
      local_88[1] = lVar3;
      lVar3 = _UNK_00105bb8;
      local_88[2] = __LC51;
      local_88[3] = lVar3;
      lVar3 = _UNK_00105bd8;
      local_88[4] = __LC53;
      local_88[5] = lVar3;
      uVar4 = _UNK_00105be8;
      *(undefined8*)( (long)local_88 + 0x29 ) = __LC54;
      *(undefined8*)( (long)local_88 + 0x31 ) = uVar4;
      local_80 = local_d0;
      *(undefined1*)( (long)local_88 + local_d0 ) = 0;
      if (( LoaderLogger::GetInstance():: ) && ( iVar5 = __cxa_guard_acquire(&LoaderLogger::GetInstance(), ::instance) ),iVar5 != 0) {
         LoaderLogger::LoaderLogger((LoaderLogger*)LoaderLogger::GetInstance(), ::instance);
         __cxa_atexit(LoaderLogger::~LoaderLogger, LoaderLogger::GetInstance(), ::instance, &__dso_handle);
         __cxa_guard_release(&LoaderLogger::GetInstance(), ::instance);
      }

      local_68[0] = local_58;
      std::__cxx11::string::_M_construct<char_const*>(local_f8, "OpenXR-Loader", "");
      LoaderLogger::LogMessage(0x105920, 0x1000, (string*)0x1, local_f8, param_1, (vector*)&local_88);
      if (local_68[0] != local_58) {
         operator_delete(local_68[0], local_58[0] + 1);
      }

      if (local_88 != local_78) {
         operator_delete(local_88, local_78[0] + 1);
      }

      uVar4 = local_a8._8_8_;
      pvVar7 = (void*)local_a8._0_8_;
      if (local_a8._8_8_ != local_a8._0_8_) {
         do {
            if (*(void**)( (long)pvVar7 + 0x10 ) != (void*)( (long)pvVar7 + 0x20 )) {
               operator_delete(*(void**)( (long)pvVar7 + 0x10 ), *(long*)( (long)pvVar7 + 0x20 ) + 1);
            }

            pvVar7 = (void*)( (long)pvVar7 + 0x30 );
         }
 while ( (void*)uVar4 != pvVar7 );
      }

      if ((void*)local_a8._0_8_ != (void*)0x0) {
         operator_delete((void*)local_a8._0_8_, local_98 - local_a8._0_8_);
      }

      iVar5 = -0x33;
      LAB_0010382e:uVar4 = local_c8._8_8_;
      puVar9 = (undefined8*)local_c8._0_8_;
      if (local_c8._8_8_ != local_c8._0_8_) {
         do {
            puVar1 = (undefined8*)*puVar9;
            if (puVar1 != (undefined8*)0x0) {
               puVar2 = (undefined8*)puVar1[0xe];
               while (puVar2 != (undefined8*)0x0) {
                  puVar6 = (undefined8*)*puVar2;
                  if ((undefined8*)puVar2[5] != puVar2 + 7) {
                     operator_delete((undefined8*)puVar2[5], puVar2[7] + 1);
                  }

                  if ((undefined8*)puVar2[1] != puVar2 + 3) {
                     operator_delete((undefined8*)puVar2[1], puVar2[3] + 1);
                  }

                  operator_delete(puVar2, 0x50);
                  puVar2 = puVar6;
               }
;
               memset((void*)puVar1[0xc], 0, puVar1[0xd] * 8);
               puVar1[0xf] = 0;
               puVar1[0xe] = 0;
               if ((undefined8*)puVar1[0xc] != puVar1 + 0x12) {
                  operator_delete((undefined8*)puVar1[0xc], puVar1[0xd] << 3);
               }

               puVar2 = (undefined8*)puVar1[10];
               puVar6 = (undefined8*)puVar1[9];
               if (puVar2 != puVar6) {
                  do {
                     if ((undefined8*)*puVar6 != puVar6 + 2) {
                        operator_delete((undefined8*)*puVar6, puVar6[2] + 1);
                     }

                     puVar6 = puVar6 + 5;
                  }
 while ( puVar2 != puVar6 );
                  puVar6 = (undefined8*)puVar1[9];
               }

               if (puVar6 != (undefined8*)0x0) {
                  operator_delete(puVar6, puVar1[0xb] - (long)puVar6);
               }

               if ((undefined8*)puVar1[5] != puVar1 + 7) {
                  operator_delete((undefined8*)puVar1[5], puVar1[7] + 1);
               }

               if ((undefined8*)*puVar1 != puVar1 + 2) {
                  operator_delete((undefined8*)*puVar1, puVar1[2] + 1);
               }

               operator_delete(puVar1, 0x98);
            }

            puVar9 = puVar9 + 1;
         }
 while ( (undefined8*)uVar4 != puVar9 );
      }

      if ((undefined8*)local_c8._0_8_ != (undefined8*)0x0) {
         operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar5;
}
/* RuntimeInterface::CreateInstance(XrInstanceCreateInfo const*, XrInstance_T**) */int RuntimeInterface::CreateInstance(RuntimeInterface *this, XrInstanceCreateInfo *param_1, XrInstance_T **param_2) {
   undefined8 uVar1;
   XrInstance_T *pXVar2;
   void *pvVar3;
   int iVar4;
   int iVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   long lVar8;
   long in_FS_OFFSET;
   byte bVar9;
   code *local_38;
   long local_30;
   bVar9 = 0;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( this + 0x10 ) )(0, "xrCreateInstance", &local_38);
   iVar4 = ( *local_38 )(param_1, param_2);
   if (-1 < iVar4) {
      puVar6 = (undefined8*)operator_new(0x1f8);
      uVar1 = *(undefined8*)( this + 0x10 );
      pXVar2 = *param_2;
      puVar7 = puVar6;
      for (lVar8 = 0x3f; lVar8 != 0; lVar8 = lVar8 + -1) {
         *puVar7 = 0;
         puVar7 = puVar7 + (ulong)bVar9 * -2 + 1;
      }

      GeneratedXrPopulateDispatchTableCore(puVar6, pXVar2, uVar1);
      iVar5 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x50 ));
      if (iVar5 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar5);
      }

      puVar7 = (undefined8*)std::__detail::_Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete < XrGeneratedDispatchTableCore>>>,std::allocator<std::pair<XrInstance_T*const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete<XrGeneratedDispatchTableCore>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true > ::operator [](( _Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete < XrGeneratedDispatchTableCore>>>,std::allocator<std::pair<XrInstance_T * const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete<XrGeneratedDispatchTableCore>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true > * )(this + 0x18), param_2);
      pvVar3 = (void*)*puVar7;
      *puVar7 = puVar6;
      if (pvVar3 != (void*)0x0) {
         operator_delete(pvVar3, 0x1f8);
      }

      pthread_mutex_unlock((pthread_mutex_t*)( this + 0x50 ));
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* void std::__detail::__to_chars_10_impl<unsigned int>(char*, unsigned int, unsigned int) */void std::__detail::__to_chars_10_impl<unsigned_int>(char *param_1, uint param_2, uint param_3) {
   char cVar1;
   uint uVar2;
   ulong uVar3;
   uint uVar4;
   uint uVar5;
   long in_FS_OFFSET;
   undefined8 local_e8;
   undefined8 uStack_e0;
   undefined8 local_d8;
   undefined8 uStack_d0;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
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
   undefined1 uStack_30;
   undefined7 uStack_2f;
   char cStack_28;
   char acStack_27[23];
   long local_10;
   uVar5 = param_2 - 1;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_e8 = __LC4;
   uStack_e0 = _UNK_00105a18;
   local_d8 = __LC5;
   uStack_d0 = _UNK_00105a28;
   local_c8 = __LC6;
   uStack_c0 = _UNK_00105a38;
   local_b8 = __LC7;
   uStack_b0 = _UNK_00105a48;
   local_a8 = __LC8;
   uStack_a0 = _UNK_00105a58;
   local_98 = __LC9;
   uStack_90 = _UNK_00105a68;
   local_88 = __LC10;
   uStack_80 = _UNK_00105a78;
   local_78 = __LC11;
   uStack_70 = _UNK_00105a88;
   local_68 = __LC12;
   uStack_60 = _UNK_00105a98;
   local_58 = __LC13;
   uStack_50 = _UNK_00105aa8;
   local_48 = __LC14;
   uStack_40 = _UNK_00105ab8;
   local_38 = __LC15;
   uStack_30 = (undefined1)_UNK_00105ac8;
   uStack_2f = (undefined7)_LC16._0_8_;
   cStack_28 = SUB81(_LC16._0_8_, 7);
   acStack_27._0_8_ = _LC16._8_8_;
   uVar3 = (ulong)param_3;
   if (99 < param_3) {
      do {
         param_3 = ( uint )(uVar3 / 100);
         uVar2 = (uint)uVar3;
         uVar4 = ( uVar2 + param_3 * -100 ) * 2;
         cVar1 = *(char*)( (long)&local_e8 + (ulong)uVar4 );
         param_1[uVar5] = *(char*)( (long)&local_e8 + ( ulong )(uVar4 + 1) );
         uVar4 = uVar5 - 1;
         uVar5 = uVar5 - 2;
         param_1[uVar4] = cVar1;
         uVar3 = uVar3 / 100;
      }
 while ( 9999 < uVar2 );
   }

   cVar1 = (char)param_3 + '0';
   if (9 < param_3) {
      param_1[1] = *(char*)( (long)&local_e8 + ( ulong )(param_3 * 2 + 1) );
      cVar1 = *(char*)( (long)&local_e8 + ( ulong )(param_3 * 2) );
   }

   *param_1 = cVar1;
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string > >::reserve(unsigned long)
    */void std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::reserve(vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *this, ulong param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   void *pvVar4;
   void *pvVar5;
   long *plVar6;
   long *plVar7;
   uint uVar8;
   long *plVar9;
   uint uVar10;
   long lVar11;
   ulong uVar12;
   if (param_1 >> 0x3a != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::reserve");
   }

   lVar2 = *(long*)this;
   if (param_1 <= ( ulong )(*(long*)( this + 0x10 ) - lVar2 >> 5)) {
      return;
   }

   lVar3 = *(long*)( this + 8 );
   plVar6 = (long*)operator_new(param_1 * 0x20);
   pvVar4 = *(void**)( this + 8 );
   pvVar5 = *(void**)this;
   if (pvVar4 != pvVar5) {
      plVar9 = (long*)( (long)pvVar5 + 0x10 );
      plVar7 = plVar6;
      do {
         plVar1 = plVar7 + 2;
         lVar11 = plVar9[-1];
         *plVar7 = (long)plVar1;
         if ((long*)plVar9[-2] == plVar9) {
            uVar12 = lVar11 + 1;
            uVar8 = (uint)uVar12;
            if (uVar8 < 8) {
               if (( uVar12 & 4 ) == 0) {
                  if (uVar8 != 0) {
                     *(char*)plVar1 = (char)*plVar9;
                     if (( uVar12 & 2 ) == 0) goto LAB_00104194;
                     *(undefined2*)( (long)plVar7 + ( uVar12 & 0xffffffff ) + 0xe ) = *(undefined2*)( (long)plVar9 + ( ( uVar12 & 0xffffffff ) - 2 ) );
                     lVar11 = plVar9[-1];
                  }

               }
 else {
                  *(int*)plVar1 = (int)*plVar9;
                  *(undefined4*)( (long)plVar7 + ( uVar12 & 0xffffffff ) + 0xc ) = *(undefined4*)( (long)plVar9 + ( ( uVar12 & 0xffffffff ) - 4 ) );
                  lVar11 = plVar9[-1];
               }

            }
 else {
               *plVar1 = *plVar9;
               *(undefined8*)( (long)plVar7 + ( uVar12 & 0xffffffff ) + 8 ) = *(undefined8*)( (long)plVar9 + ( ( uVar12 & 0xffffffff ) - 8 ) );
               lVar11 = (long)plVar1 - ( ( ulong )(plVar7 + 3) & 0xfffffffffffffff8 );
               uVar8 = uVar8 + (int)lVar11 & 0xfffffff8;
               if (uVar8 < 8) {
                  LAB_00104194:lVar11 = plVar9[-1];
               }
 else {
                  uVar10 = 0;
                  do {
                     uVar12 = (ulong)uVar10;
                     uVar10 = uVar10 + 8;
                     *(undefined8*)( ( ( ulong )(plVar7 + 3) & 0xfffffffffffffff8 ) + uVar12 ) = *(undefined8*)( (long)plVar9 + ( uVar12 - lVar11 ) );
                  }
 while ( uVar10 < uVar8 );
                  lVar11 = plVar9[-1];
               }

            }

         }
 else {
            *plVar7 = plVar9[-2];
            plVar7[2] = *plVar9;
         }

         plVar7[1] = lVar11;
         plVar7 = plVar7 + 4;
         plVar9 = plVar9 + 4;
      }
 while ( (long*)( ( (long)pvVar4 - (long)pvVar5 ) + (long)plVar6 ) != plVar7 );
   }

   if (pvVar5 != (void*)0x0) {
      operator_delete(pvVar5, *(long*)( this + 0x10 ) - (long)pvVar5);
   }

   *(long**)this = plVar6;
   *(long*)( this + 8 ) = ( lVar3 - lVar2 ) + (long)plVar6;
   *(long**)( this + 0x10 ) = plVar6 + param_1 * 4;
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
/* void std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string >
   >::_M_realloc_insert<char (&) [128]>(__gnu_cxx::__normal_iterator<std::__cxx11::string*,
   std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string > > >, char (&) [128]) */void std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::_M_realloc_insert<char(&)[128]>(vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *this, void *param_2, char *param_3) {
   long *plVar1;
   void *pvVar2;
   void *pvVar3;
   long *plVar4;
   ulong uVar5;
   size_t sVar6;
   long *plVar7;
   long *plVar8;
   uint uVar9;
   long lVar10;
   uint uVar11;
   ulong uVar12;
   long *plVar13;
   long lVar14;
   long *plVar15;
   long local_48;
   pvVar2 = *(void**)( this + 8 );
   pvVar3 = *(void**)this;
   uVar5 = (long)pvVar2 - (long)pvVar3 >> 5;
   if (uVar5 == 0x3ffffffffffffff) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
   }

   if (pvVar3 == pvVar2) {
      if (0xfffffffffffffffe < uVar5) goto LAB_00104690;
      uVar12 = 0x3ffffffffffffff;
      if (uVar5 + 1 < 0x400000000000000) {
         uVar12 = uVar5 + 1;
      }

      uVar12 = uVar12 << 5;
   }
 else {
      uVar12 = uVar5 * 2;
      if (uVar12 < uVar5) {
         LAB_00104690:uVar12 = 0x7fffffffffffffe0;
      }
 else {
         if (uVar12 == 0) {
            local_48 = 0;
            plVar13 = (long*)0x20;
            plVar7 = (long*)0x0;
            goto LAB_001045d5;
         }

         if (0x3ffffffffffffff < uVar12) {
            uVar12 = 0x3ffffffffffffff;
         }

         uVar12 = uVar12 << 5;
      }

   }

   plVar7 = (long*)operator_new(uVar12);
   local_48 = (long)plVar7 + uVar12;
   plVar13 = plVar7 + 4;
   LAB_001045d5:plVar15 = (long*)( (long)plVar7 + ( (long)param_2 - (long)pvVar3 ) );
   *plVar15 = (long)( plVar15 + 2 );
   sVar6 = strlen(param_3);
   __cxx11::string::_M_construct<char_const*>(plVar15, param_3, param_3 + sVar6);
   if (param_2 != pvVar3) {
      plVar15 = (long*)( (long)pvVar3 + 0x10 );
      plVar13 = (long*)( ( (long)param_2 - (long)pvVar3 ) + (long)plVar7 );
      plVar8 = plVar7;
      do {
         plVar1 = plVar8 + 2;
         lVar14 = plVar15[-1];
         *plVar8 = (long)plVar1;
         if (plVar15 == (long*)plVar15[-2]) {
            uVar5 = lVar14 + 1;
            uVar11 = (uint)uVar5;
            if (uVar11 < 8) {
               if (( uVar5 & 4 ) == 0) {
                  if (uVar11 != 0) {
                     *(char*)plVar1 = (char)*plVar15;
                     if (( uVar5 & 2 ) == 0) goto LAB_00104684;
                     *(undefined2*)( (long)plVar8 + ( uVar5 & 0xffffffff ) + 0xe ) = *(undefined2*)( (long)plVar15 + ( ( uVar5 & 0xffffffff ) - 2 ) );
                     lVar14 = plVar15[-1];
                  }

               }
 else {
                  *(int*)plVar1 = (int)*plVar15;
                  *(undefined4*)( (long)plVar8 + ( uVar5 & 0xffffffff ) + 0xc ) = *(undefined4*)( (long)plVar15 + ( ( uVar5 & 0xffffffff ) - 4 ) );
                  lVar14 = plVar15[-1];
               }

            }
 else {
               *plVar1 = *plVar15;
               *(undefined8*)( (long)plVar8 + ( uVar5 & 0xffffffff ) + 8 ) = *(undefined8*)( (long)plVar15 + ( ( uVar5 & 0xffffffff ) - 8 ) );
               lVar14 = (long)plVar1 - ( ( ulong )(plVar8 + 3) & 0xfffffffffffffff8 );
               uVar11 = uVar11 + (int)lVar14 & 0xfffffff8;
               if (7 < uVar11) {
                  uVar9 = 0;
                  do {
                     uVar5 = (ulong)uVar9;
                     uVar9 = uVar9 + 8;
                     *(undefined8*)( ( ( ulong )(plVar8 + 3) & 0xfffffffffffffff8 ) + uVar5 ) = *(undefined8*)( (long)plVar15 + ( uVar5 - lVar14 ) );
                  }
 while ( uVar9 < uVar11 );
               }

               LAB_00104684:lVar14 = plVar15[-1];
            }

         }
 else {
            *plVar8 = plVar15[-2];
            plVar8[2] = *plVar15;
         }

         plVar8[1] = lVar14;
         plVar8 = plVar8 + 4;
         plVar15 = plVar15 + 4;
      }
 while ( plVar13 != plVar8 );
      plVar13 = plVar13 + 4;
   }

   plVar15 = plVar13;
   if (param_2 != pvVar2) {
      plVar8 = (long*)( (long)param_2 + 0x10 );
      plVar15 = (long*)( ( (long)pvVar2 - (long)param_2 ) + (long)plVar13 );
      do {
         plVar4 = (long*)plVar8[-2];
         plVar1 = plVar13 + 2;
         lVar14 = plVar8[-1];
         *plVar13 = (long)plVar1;
         if (plVar8 == plVar4) {
            uVar5 = lVar14 + 1;
            uVar11 = (uint)uVar5;
            if (uVar11 < 8) {
               if (( uVar5 & 4 ) == 0) {
                  if (( uVar11 != 0 ) && ( *(char*)plVar1 = (char)*plVar8(uVar5 & 2) != 0 )) {
                     *(undefined2*)( (long)plVar13 + ( uVar5 & 0xffffffff ) + 0xe ) = *(undefined2*)( (long)plVar8 + ( ( uVar5 & 0xffffffff ) - 2 ) );
                  }

               }
 else {
                  *(int*)plVar1 = (int)*plVar8;
                  *(undefined4*)( (long)plVar13 + ( uVar5 & 0xffffffff ) + 0xc ) = *(undefined4*)( (long)plVar8 + ( ( uVar5 & 0xffffffff ) - 4 ) );
               }

            }
 else {
               *plVar1 = *plVar8;
               *(undefined8*)( (long)plVar13 + ( uVar5 & 0xffffffff ) + 8 ) = *(undefined8*)( (long)plVar8 + ( ( uVar5 & 0xffffffff ) - 8 ) );
               lVar10 = (long)plVar1 - ( ( ulong )(plVar13 + 3) & 0xfffffffffffffff8 );
               uVar11 = uVar11 + (int)lVar10 & 0xfffffff8;
               if (7 < uVar11) {
                  uVar9 = 0;
                  do {
                     uVar5 = (ulong)uVar9;
                     uVar9 = uVar9 + 8;
                     *(undefined8*)( ( ( ulong )(plVar13 + 3) & 0xfffffffffffffff8 ) + uVar5 ) = *(undefined8*)( (long)plVar8 + ( uVar5 - lVar10 ) );
                  }
 while ( uVar9 < uVar11 );
               }

            }

         }
 else {
            *plVar13 = (long)plVar4;
            plVar13[2] = *plVar8;
         }

         plVar13[1] = lVar14;
         plVar13 = plVar13 + 4;
         plVar8 = plVar8 + 4;
      }
 while ( plVar13 != plVar15 );
   }

   if (pvVar3 != (void*)0x0) {
      operator_delete(pvVar3, *(long*)( this + 0x10 ) - (long)pvVar3);
   }

   *(long**)this = plVar7;
   *(long**)( this + 8 ) = plVar15;
   *(long*)( this + 0x10 ) = local_48;
   return;
}
/* std::_Hashtable<XrInstance_T*, std::pair<XrInstance_T* const,
   std::unique_ptr<XrGeneratedDispatchTableCore, std::default_delete<XrGeneratedDispatchTableCore> >
   >, std::allocator<std::pair<XrInstance_T* const, std::unique_ptr<XrGeneratedDispatchTableCore,
   std::default_delete<XrGeneratedDispatchTableCore> > > >, std::__detail::_Select1st,
   std::equal_to<XrInstance_T*>, std::hash<XrInstance_T*>, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, false, true> >::clear() */void std::_Hashtable<XrInstance_T*,std::pair<XrInstance_T*const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete<XrGeneratedDispatchTableCore>>>,std::allocator<std::pair<XrInstance_T*const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete<XrGeneratedDispatchTableCore>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::clear(_Hashtable<XrInstance_T*,std::pair<XrInstance_T*const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete<XrGeneratedDispatchTableCore>>>,std::allocator<std::pair<XrInstance_T * const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete<XrGeneratedDispatchTableCore>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>> *this) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   puVar2 = *(undefined8**)( this + 0x10 );
   while (puVar2 != (undefined8*)0x0) {
      puVar1 = (undefined8*)*puVar2;
      if ((void*)puVar2[2] != (void*)0x0) {
         operator_delete((void*)puVar2[2], 0x1f8);
      }

      operator_delete(puVar2, 0x18);
      puVar2 = puVar1;
   }
;
   memset(*(void**)this, 0, *(long*)( this + 8 ) * 8);
   *(undefined8*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x10 ) = 0;
   return;
}
/* std::unique_ptr<RuntimeInterface, std::default_delete<RuntimeInterface> >::~unique_ptr() */void std::unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>>::~unique_ptr(unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>> *this) {
   RuntimeInterface *this_00;
   this_00 = *(RuntimeInterface**)this;
   if (this_00 == (RuntimeInterface*)0x0) {
      return;
   }

   if (*(code**)( *(long*)this_00 + 8 ) == RuntimeInterface::~RuntimeInterface) {
      RuntimeInterface::~RuntimeInterface(this_00);
      operator_delete(this_00, 0xf0);
      return;
   }

   /* WARNING: Could not recover jumptable at 0x00104b59. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *(long*)this_00 + 8 ) )();
   return;
}
/* std::vector<XrExtensionProperties, std::allocator<XrExtensionProperties>
   >::_M_fill_insert(__gnu_cxx::__normal_iterator<XrExtensionProperties*,
   std::vector<XrExtensionProperties, std::allocator<XrExtensionProperties> > >, unsigned long,
   XrExtensionProperties const&) */void std::vector<XrExtensionProperties,std::allocator<XrExtensionProperties>>::_M_fill_insert(vector<XrExtensionProperties,std::allocator<XrExtensionProperties>> *this, undefined8 *param_2, ulong param_3, undefined8 *param_4) {
   long lVar1;
   undefined8 uVar2;
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
   undefined8 uVar18;
   undefined8 uVar19;
   undefined8 uVar20;
   undefined8 uVar21;
   ulong uVar22;
   undefined8 *puVar23;
   undefined8 *puVar24;
   undefined8 *puVar25;
   undefined8 *puVar26;
   undefined8 *puVar27;
   ulong uVar28;
   size_t __n;
   size_t sVar29;
   long lVar30;
   long in_FS_OFFSET;
   ulong local_100;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 != 0) {
      puVar25 = *(undefined8**)( this + 8 );
      if (( ulong )(( *(long*)( this + 0x10 ) - (long)puVar25 >> 3 ) * -0x79435e50d79435e5) < param_3) {
         puVar27 = *(undefined8**)this;
         lVar30 = (long)puVar25 - (long)puVar27 >> 3;
         uVar22 = lVar30 * -0x79435e50d79435e5;
         if (lVar30 * 0x79435e50d79435e5 + 0xd79435e50d7943U < param_3) {
            /* WARNING: Subroutine does not return */
            std::__throw_length_error("vector::_M_fill_insert");
         }

         sVar29 = (long)param_2 - (long)puVar27;
         if (uVar22 < param_3) {
            uVar22 = uVar22 + param_3;
            if (0xd79435e50d7943 < uVar22) {
               uVar22 = 0xd79435e50d7943;
            }

            local_100 = uVar22 * 0x98;
         }
 else {
            uVar28 = lVar30 * 0xd79435e50d79436;
            local_100 = 0x7fffffffffffffc8;
            if (uVar22 <= uVar28) {
               if (0xd79435e50d7943 < uVar28) {
                  uVar28 = 0xd79435e50d7943;
               }

               local_100 = uVar28 * 0x98;
            }

         }

         puVar23 = (undefined8*)operator_new(local_100);
         uVar3 = *param_4;
         uVar4 = param_4[1];
         uVar5 = param_4[2];
         uVar6 = param_4[3];
         uVar7 = param_4[4];
         uVar8 = param_4[5];
         uVar9 = param_4[6];
         uVar10 = param_4[7];
         uVar11 = param_4[8];
         uVar12 = param_4[9];
         uVar13 = param_4[10];
         uVar14 = param_4[0xb];
         uVar15 = param_4[0xc];
         uVar16 = param_4[0xd];
         uVar17 = param_4[0xe];
         uVar18 = param_4[0xf];
         uVar2 = param_4[0x12];
         uVar19 = param_4[0x10];
         uVar20 = param_4[0x11];
         puVar26 = (undefined8*)( (long)puVar23 + sVar29 );
         do {
            puVar26[0x12] = uVar2;
            puVar24 = puVar26 + 0x13;
            *puVar26 = uVar3;
            puVar26[1] = uVar4;
            puVar26[2] = uVar5;
            puVar26[3] = uVar6;
            puVar26[4] = uVar7;
            puVar26[5] = uVar8;
            puVar26[6] = uVar9;
            puVar26[7] = uVar10;
            puVar26[8] = uVar11;
            puVar26[9] = uVar12;
            puVar26[10] = uVar13;
            puVar26[0xb] = uVar14;
            puVar26[0xc] = uVar15;
            puVar26[0xd] = uVar16;
            puVar26[0xe] = uVar17;
            puVar26[0xf] = uVar18;
            puVar26[0x10] = uVar19;
            puVar26[0x11] = uVar20;
            puVar26 = puVar24;
         }
 while ( (undefined8*)( (long)puVar23 + sVar29 ) + param_3 * 0x13 != puVar24 );
         if ((long)sVar29 < 0x99) {
            if (sVar29 == 0x98) {
               uVar2 = puVar27[1];
               *puVar23 = *puVar27;
               puVar23[1] = uVar2;
               for (int i = 0; i < 8; i++) {
                  uVar2 = puVar27[( 2*i + 3 )];
                  puVar23[( 2*i + 2 )] = puVar27[( 2*i + 2 )];
                  puVar23[( 2*i + 3 )] = uVar2;
               }

               puVar23[0x12] = puVar27[0x12];
            }

         }
 else {
            memmove(puVar23, puVar27, sVar29);
         }

         __n = (long)puVar25 - (long)param_2;
         puVar25 = (undefined8*)( (long)puVar23 + sVar29 + param_3 * 0x98 );
         if ((long)__n < 0x99) {
            if (__n == 0x98) {
               uVar3 = param_2[1];
               uVar4 = param_2[2];
               uVar5 = param_2[3];
               uVar6 = param_2[4];
               uVar7 = param_2[5];
               uVar2 = param_2[0x12];
               *puVar25 = *param_2;
               puVar25[1] = uVar3;
               uVar3 = param_2[6];
               uVar8 = param_2[7];
               puVar25[2] = uVar4;
               puVar25[3] = uVar5;
               uVar4 = param_2[8];
               uVar5 = param_2[9];
               puVar25[4] = uVar6;
               puVar25[5] = uVar7;
               uVar6 = param_2[10];
               uVar7 = param_2[0xb];
               puVar25[6] = uVar3;
               puVar25[7] = uVar8;
               uVar3 = param_2[0xc];
               uVar8 = param_2[0xd];
               puVar25[8] = uVar4;
               puVar25[9] = uVar5;
               uVar4 = param_2[0xe];
               uVar5 = param_2[0xf];
               puVar25[10] = uVar6;
               puVar25[0xb] = uVar7;
               uVar6 = param_2[0x10];
               uVar7 = param_2[0x11];
               puVar25[0x12] = uVar2;
               puVar25[0xc] = uVar3;
               puVar25[0xd] = uVar8;
               puVar25[0xe] = uVar4;
               puVar25[0xf] = uVar5;
               puVar25[0x10] = uVar6;
               puVar25[0x11] = uVar7;
            }

         }
 else {
            puVar25 = (undefined8*)memcpy(puVar25, param_2, __n);
         }

         if (puVar27 != (undefined8*)0x0) {
            operator_delete(puVar27, *(long*)( this + 0x10 ) - (long)puVar27);
         }

         *(undefined8**)this = puVar23;
         *(size_t*)( this + 8 ) = __n + (long)puVar25;
         *(ulong*)( this + 0x10 ) = local_100 + (long)puVar23;
      }
 else {
         uVar3 = *param_4;
         uVar4 = param_4[1];
         uVar5 = param_4[2];
         uVar6 = param_4[3];
         sVar29 = (long)puVar25 - (long)param_2;
         uVar7 = param_4[4];
         uVar8 = param_4[5];
         uVar9 = param_4[6];
         uVar10 = param_4[7];
         uVar11 = param_4[8];
         uVar12 = param_4[9];
         uVar2 = param_4[0x12];
         uVar13 = param_4[10];
         uVar14 = param_4[0xb];
         uVar15 = param_4[0xc];
         uVar16 = param_4[0xd];
         uVar17 = param_4[0xe];
         uVar18 = param_4[0xf];
         uVar19 = param_4[0x10];
         uVar20 = param_4[0x11];
         if (param_3 < ( ulong )(( (long)sVar29 >> 3 ) * -0x79435e50d79435e5)) {
            sVar29 = param_3 * 0x98;
            puVar27 = puVar25 + param_3 * -0x13;
            if ((long)sVar29 < 0x99) {
               puVar26 = puVar25;
               if (sVar29 == 0x98) {
                  uVar21 = puVar27[1];
                  *puVar25 = *puVar27;
                  puVar25[1] = uVar21;
                  for (int i = 0; i < 8; i++) {
                     uVar21 = puVar27[( 2*i + 3 )];
                     puVar25[( 2*i + 2 )] = puVar27[( 2*i + 2 )];
                     puVar25[( 2*i + 3 )] = uVar21;
                  }

                  puVar25[0x12] = puVar27[0x12];
                  puVar26 = *(undefined8**)( this + 8 );
               }

            }
 else {
               memmove(puVar25, puVar27, sVar29);
               puVar26 = *(undefined8**)( this + 8 );
            }

            sVar29 = (long)puVar27 - (long)param_2;
            *(undefined8**)( this + 8 ) = puVar26 + param_3 * 0x13;
            if ((long)sVar29 < 0x99) {
               if (sVar29 == 0x98) {
                  uVar21 = param_2[1];
                  puVar25[-0x13] = *param_2;
                  puVar25[-0x12] = uVar21;
                  for (int i = 0; i < 8; i++) {
                     uVar21 = param_2[( 2*i + 3 )];
                     puVar25[( 2*i + -17 )] = param_2[( 2*i + 2 )];
                     puVar25[( 2*i + -16 )] = uVar21;
                  }

                  puVar25[-1] = param_2[0x12];
               }

            }
 else {
               memmove((void*)( (long)puVar25 - sVar29 ), param_2, sVar29);
            }

            puVar25 = param_2 + param_3 * 0x13;
            if (param_2 != puVar25) {
               do {
                  param_2[0xc] = uVar15;
                  puVar27 = param_2 + 0x13;
                  *param_2 = uVar3;
                  param_2[1] = uVar4;
                  param_2[2] = uVar5;
                  param_2[3] = uVar6;
                  param_2[4] = uVar7;
                  param_2[5] = uVar8;
                  param_2[6] = uVar9;
                  param_2[7] = uVar10;
                  param_2[8] = uVar11;
                  param_2[9] = uVar12;
                  param_2[10] = uVar13;
                  param_2[0xb] = uVar14;
                  param_2[0xd] = uVar16;
                  param_2[0xe] = uVar17;
                  param_2[0xf] = uVar18;
                  param_2[0x10] = uVar19;
                  param_2[0x11] = uVar20;
                  param_2[0x12] = uVar2;
                  param_2 = puVar27;
               }
 while ( puVar25 != puVar27 );
            }

         }
 else {
            lVar30 = param_3 + ( (long)sVar29 >> 3 ) * 0x79435e50d79435e5;
            puVar27 = puVar25;
            if (( lVar30 != 0 ) && ( puVar27 = puVar25 + lVar30 * 0x13 ),puVar26 = puVar25,puVar25 != puVar27) {
               do {
                  puVar26[0xc] = uVar15;
                  puVar23 = puVar26 + 0x13;
                  *puVar26 = uVar3;
                  puVar26[1] = uVar4;
                  puVar26[2] = uVar5;
                  puVar26[3] = uVar6;
                  puVar26[4] = uVar7;
                  puVar26[5] = uVar8;
                  puVar26[6] = uVar9;
                  puVar26[7] = uVar10;
                  puVar26[8] = uVar11;
                  puVar26[9] = uVar12;
                  puVar26[10] = uVar13;
                  puVar26[0xb] = uVar14;
                  puVar26[0xd] = uVar16;
                  puVar26[0xe] = uVar17;
                  puVar26[0xf] = uVar18;
                  puVar26[0x10] = uVar19;
                  puVar26[0x11] = uVar20;
                  puVar26[0x12] = uVar2;
                  puVar26 = puVar23;
               }
 while ( puVar27 != puVar23 );
               puVar27 = puVar25 + ( ( ( ( ulong )((long)puVar27 + ( -0x98 - (long)puVar25 )) >> 3 ) * 0x6bca1af286bca1b & 0x1fffffffffffffff ) + 1 ) * 0x13;
            }

            *(undefined8**)( this + 8 ) = puVar27;
            if ((long)sVar29 < 0x99) {
               if (sVar29 == 0x98) {
                  uVar21 = param_2[1];
                  *puVar27 = *param_2;
                  puVar27[1] = uVar21;
                  for (int i = 0; i < 8; i++) {
                     uVar21 = param_2[( 2*i + 3 )];
                     puVar27[( 2*i + 2 )] = param_2[( 2*i + 2 )];
                     puVar27[( 2*i + 3 )] = uVar21;
                  }

                  puVar27[0x12] = param_2[0x12];
                  puVar27 = *(undefined8**)( this + 8 );
               }

            }
 else {
               memmove(puVar27, param_2, sVar29);
               puVar27 = *(undefined8**)( this + 8 );
            }

            *(size_t*)( this + 8 ) = (long)puVar27 + sVar29;
            if (puVar25 != param_2) {
               do {
                  param_2[0xc] = uVar15;
                  puVar27 = param_2 + 0x13;
                  *param_2 = uVar3;
                  param_2[1] = uVar4;
                  param_2[2] = uVar5;
                  param_2[3] = uVar6;
                  param_2[4] = uVar7;
                  param_2[5] = uVar8;
                  param_2[6] = uVar9;
                  param_2[7] = uVar10;
                  param_2[8] = uVar11;
                  param_2[9] = uVar12;
                  param_2[10] = uVar13;
                  param_2[0xb] = uVar14;
                  param_2[0xd] = uVar16;
                  param_2[0xe] = uVar17;
                  param_2[0xf] = uVar18;
                  param_2[0x10] = uVar19;
                  param_2[0x11] = uVar20;
                  param_2[0x12] = uVar2;
                  param_2 = puVar27;
               }
 while ( puVar25 != puVar27 );
            }

         }

      }

   }

   if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void std::vector<XrExtensionProperties, std::allocator<XrExtensionProperties>
   >::_M_realloc_insert<XrExtensionProperties
   const&>(__gnu_cxx::__normal_iterator<XrExtensionProperties*, std::vector<XrExtensionProperties,
   std::allocator<XrExtensionProperties> > >, XrExtensionProperties const&) */void std::vector<XrExtensionProperties,std::allocator<XrExtensionProperties>>::_M_realloc_insert<XrExtensionProperties_const&>(vector<XrExtensionProperties,std::allocator<XrExtensionProperties>> *this, void *param_2, undefined8 *param_3) {
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
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
   }

   __n = (long)param_2 - (long)__src;
   if (__src == pvVar2) {
      uVar20 = uVar19 + 1;
      if (0xfffffffffffffffe < uVar19) goto LAB_00105570;
      if (0xd79435e50d7943 < uVar20) {
         uVar20 = 0xd79435e50d7943;
      }

      uVar20 = uVar20 * 0x98;
      LAB_0010557a:__dest_00 = operator_new(uVar20);
      lVar18 = uVar20 + (long)__dest_00;
   }
 else {
      uVar20 = lVar18 * 0xd79435e50d79436;
      if (uVar20 < uVar19) {
         LAB_00105570:uVar20 = 0x7fffffffffffffc8;
         goto LAB_0010557a;
      }

      if (uVar20 != 0) {
         if (0xd79435e50d7943 < uVar20) {
            uVar20 = 0xd79435e50d7943;
         }

         uVar20 = uVar20 * 0x98;
         goto LAB_0010557a;
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

      if (__src == (void*)0x0) goto LAB_00105553;
   }
 else {
      memmove(__dest_00, __src, __n);
      if (0 < (long)__n_00) {
         memcpy(__dest, param_2, __n_00);
         operator_delete(__src, *(long*)( this + 0x10 ) - (long)__src);
         goto LAB_00105553;
      }

   }

   operator_delete(__src, *(long*)( this + 0x10 ) - (long)__src);
   LAB_00105553:*(void**)this = __dest_00;
   *(size_t*)( this + 8 ) = (long)__dest + __n_00;
   *(long*)( this + 0x10 ) = lVar18;
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* std::__detail::_Map_base<XrInstance_T*, std::pair<XrInstance_T* const,
   std::unique_ptr<XrGeneratedDispatchTableCore, std::default_delete<XrGeneratedDispatchTableCore> >
   >, std::allocator<std::pair<XrInstance_T* const, std::unique_ptr<XrGeneratedDispatchTableCore,
   std::default_delete<XrGeneratedDispatchTableCore> > > >, std::__detail::_Select1st,
   std::equal_to<XrInstance_T*>, std::hash<XrInstance_T*>, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, false, true>, true>::operator[](XrInstance_T* const&) */long *__thiscallstd::__detail::_Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete<XrGeneratedDispatchTableCore>>>,std::allocator<std::pair<XrInstance_T*const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete<XrGeneratedDispatchTableCore>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](_Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete<XrGeneratedDispatchTableCore>>>,std::allocator<std::pair<XrInstance_T * const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete<XrGeneratedDispatchTableCore>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *this, XrInstance_T **param_1) {
   XrInstance_T *pXVar1;
   XrInstance_T *pXVar2;
   ulong uVar3;
   long lVar4;
   char cVar5;
   long *plVar6;
   _Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete < XrGeneratedDispatchTableCore>>>,std::allocator<std::pair<XrInstance_T * const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete<XrGeneratedDispatchTableCore>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true > *__s;
   ulong uVar7;
   ulong extraout_RDX;
   long *plVar8;
   long *plVar9;
   ulong uVar10;
   _Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete < XrGeneratedDispatchTableCore>>>,std::allocator<std::pair<XrInstance_T * const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete<XrGeneratedDispatchTableCore>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true > *p_Var11;
   pXVar1 = *param_1;
   uVar7 = (ulong)pXVar1 % *(ulong*)( this + 8 );
   plVar6 = *(long**)( *(long*)this + uVar7 * 8 );
   if (plVar6 != (long*)0x0) {
      pXVar2 = (XrInstance_T*)( (long*)*plVar6 )[1];
      plVar8 = (long*)*plVar6;
      while (pXVar2 != pXVar1) {
         plVar9 = (long*)*plVar8;
         if (( plVar9 == (long*)0x0 ) || ( pXVar2 = (XrInstance_T*)plVar9[1] ),plVar6 = plVar8,plVar8 = plVar9,uVar7 != (ulong)pXVar2 % *(ulong*)( this + 8 )) goto LAB_00105700;
      }
;
      if (*plVar6 != 0) {
         return (long*)( *plVar6 + 0x10 );
      }

   }

   LAB_00105700:plVar6 = (long*)operator_new(0x18);
   uVar10 = *(ulong*)( this + 0x18 );
   uVar3 = *(ulong*)( this + 8 );
   *plVar6 = 0;
   pXVar2 = *param_1;
   plVar6[2] = 0;
   plVar6[1] = (long)pXVar2;
   cVar5 = std::__detail::_Prime_rehash_policy::_M_need_rehash(( ulong )(this + 0x20), uVar3, uVar10);
   if (cVar5 == '\0') {
      __s = *( _Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete < XrGeneratedDispatchTableCore>>>,std::allocator<std::pair<XrInstance_T * const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete<XrGeneratedDispatchTableCore>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true > **)this );
      p_Var11 = __s + uVar7 * 8;
      plVar8 = *(long**)p_Var11;
   }
 else {
      if (extraout_RDX == 1) {
         __s = this + 0x30;
         *(undefined8*)( this + 0x30 ) = 0;
      }
 else {
         if (extraout_RDX >> 0x3c != 0) {
            if (extraout_RDX >> 0x3d != 0) {
               std::__throw_bad_array_new_length();
            }

            std::__throw_bad_alloc();
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }

         __s = ( _Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete < XrGeneratedDispatchTableCore>>>,std::allocator<std::pair<XrInstance_T * const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete<XrGeneratedDispatchTableCore>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true > *)operator_new(extraout_RDX * 8) );
         memset(__s, 0, extraout_RDX * 8);
      }

      plVar8 = *(long**)( this + 0x10 );
      *(undefined8*)( this + 0x10 ) = 0;
      uVar7 = 0;
      while (uVar10 = uVar7,plVar9 = plVar8,plVar8 != (long*)0x0) {
         while (true) {
            plVar8 = (long*)*plVar9;
            uVar7 = (ulong)plVar9[1] % extraout_RDX;
            p_Var11 = __s + uVar7 * 8;
            if (*(long**)p_Var11 == (long*)0x0) break;
            *plVar9 = **(long**)p_Var11;
            **(undefined8**)p_Var11 = plVar9;
            plVar9 = plVar8;
            if (plVar8 == (long*)0x0) goto LAB_00105803;
         }
;
         *plVar9 = *(long*)( this + 0x10 );
         *(long**)( this + 0x10 ) = plVar9;
         *( _Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete < XrGeneratedDispatchTableCore>>>,std::allocator<std::pair<XrInstance_T * const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete<XrGeneratedDispatchTableCore>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true > **)p_Var11 = this + 0x10 );
         if (*plVar9 != 0) {
            *(long**)( __s + uVar10 * 8 ) = plVar9;
         }

      }
;
      LAB_00105803:if (*( _Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete < XrGeneratedDispatchTableCore>>>,std::allocator<std::pair<XrInstance_T * const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete<XrGeneratedDispatchTableCore>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true > **)this != this + 0x30 ) {
         operator_delete(*( _Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete < XrGeneratedDispatchTableCore>>>,std::allocator<std::pair<XrInstance_T * const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete<XrGeneratedDispatchTableCore>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true > **)this,*(long*)( this + 8 ) << 3 ));
      }

      *(ulong*)( this + 8 ) = extraout_RDX;
      *( _Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete < XrGeneratedDispatchTableCore>>>,std::allocator<std::pair<XrInstance_T * const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete<XrGeneratedDispatchTableCore>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true > **)this = __s );
      p_Var11 = __s + ( (ulong)pXVar1 % extraout_RDX ) * 8;
      plVar8 = *(long**)p_Var11;
   }

   if (plVar8 == (long*)0x0) {
      lVar4 = *(long*)( this + 0x10 );
      *(long**)( this + 0x10 ) = plVar6;
      *plVar6 = lVar4;
      if (lVar4 != 0) {
         *(long**)( __s + ( *(ulong*)( lVar4 + 8 ) % *(ulong*)( this + 8 ) ) * 8 ) = plVar6;
      }

      *( _Map_base<XrInstance_T*,std::pair<XrInstance_T*const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete < XrGeneratedDispatchTableCore>>>,std::allocator<std::pair<XrInstance_T * const,std::unique_ptr<XrGeneratedDispatchTableCore,std::default_delete<XrGeneratedDispatchTableCore>>>>,std::__detail::_Select1st,std::equal_to<XrInstance_T*>,std::hash<XrInstance_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true > **)p_Var11 = this + 0x10 );
   }
 else {
      *plVar6 = *plVar8;
      **(undefined8**)p_Var11 = plVar6;
   }

   *(long*)( this + 0x18 ) = *(long*)( this + 0x18 ) + 1;
   return plVar6 + 2;
}
/* WARNING: Control flow encountered bad instruction data *//* std::unique_ptr<RuntimeInterface, std::default_delete<RuntimeInterface> >::~unique_ptr() */void std::unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>>::~unique_ptr(unique_ptr<RuntimeInterface,std::default_delete<RuntimeInterface>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* LoaderLogger::~LoaderLogger() */void LoaderLogger::~LoaderLogger(LoaderLogger *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

